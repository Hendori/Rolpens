
/* EditorAssetInstaller::_fix_conflicted_indeterminate_state(TreeItem*, int) [clone .part.0] */

byte EditorAssetInstaller::_fix_conflicted_indeterminate_state(TreeItem *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint in_EDX;
  bool bVar6;
  int iVar7;
  long in_FS_OFFSET;
  byte local_bd;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  Variant local_a0 [8];
  int local_98 [8];
  int local_78 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = TreeItem::get_first_child();
  bVar6 = SUB41(in_EDX,0);
  if (lVar5 == 0) {
    TreeItem::set_checked(param_2,bVar6);
  }
  else {
    local_b9 = 1;
    local_ba = 1;
    local_bd = 0;
    local_bb = 0;
    do {
      iVar4 = TreeItem::get_child_count();
      iVar7 = (int)lVar5;
      if (iVar4 != 0) {
        bVar1 = _fix_conflicted_indeterminate_state(param_1,iVar7);
        local_bd = local_bd | bVar1;
      }
      TreeItem::get_metadata((int)(Variant *)local_58);
      Variant::operator_cast_to_Dictionary(local_a0);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,false);
      Variant::Variant((Variant *)local_98,"is_conflict");
      Dictionary::get((Variant *)local_58,local_a0);
      bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar2) {
        TreeItem::set_checked(iVar7,bVar6);
        local_bd = bVar2;
      }
      else {
        bVar1 = TreeItem::is_checked(iVar7);
        bVar3 = TreeItem::is_indeterminate(iVar7);
        local_bb = local_bb | bVar3;
        local_b9 = local_b9 & (bVar1 ^ 1);
        local_ba = local_ba & (bVar1 | bVar3);
      }
      lVar5 = TreeItem::get_next();
      Dictionary::~Dictionary((Dictionary *)local_a0);
    } while (lVar5 != 0);
    if (local_bb == 0) {
      if (local_ba == 0) {
        if (local_b9 != 0) {
          TreeItem::set_checked(param_2,bVar6);
        }
      }
      else {
        TreeItem::set_checked(param_2,bVar6);
      }
    }
    else {
      TreeItem::set_indeterminate(param_2,bVar6);
    }
    if (local_bd != 0) {
      if ((_fix_conflicted_indeterminate_state(TreeItem*,int)::{lambda()#1}::operator()()::sname ==
           '\0') &&
         (iVar4 = __cxa_guard_acquire(&_fix_conflicted_indeterminate_state(TreeItem*,int)::
                                       {lambda()#1}::operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&_fix_conflicted_indeterminate_state(TreeItem*,int)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_fix_conflicted_indeterminate_state(TreeItem*,int)::{lambda()#1}::operator()()
                      ::sname,&__dso_handle);
        __cxa_guard_release(&_fix_conflicted_indeterminate_state(TreeItem*,int)::{lambda()#1}::
                             operator()()::sname);
      }
      local_58[0] = Window::get_theme_color
                              ((StringName *)param_1,
                               (StringName *)
                               &_fix_conflicted_indeterminate_state(TreeItem*,int)::{lambda()#1}::
                                operator()()::sname);
      TreeItem::set_custom_color(param_2,(Color *)(ulong)in_EDX);
      goto LAB_001001dd;
    }
  }
  TreeItem::clear_custom_color(param_2);
  local_bd = 0;
LAB_001001dd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_bd;
  }
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



/* EditorAssetInstaller::_toggle_source_tree(bool, bool) */

void __thiscall
EditorAssetInstaller::_toggle_source_tree(EditorAssetInstaller *this,bool param_1,bool param_2)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xdb8),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xde8),0));
  if (param_1) {
    pRVar1 = *(Ref **)(this + 0xde8);
    if (_toggle_source_tree(bool,bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_toggle_source_tree(bool,bool)::{lambda()#1}::operator()()::sname
                                 );
      if (iVar3 != 0) {
        _scs_create((char *)&_toggle_source_tree(bool,bool)::{lambda()#1}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &_toggle_source_tree(bool,bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_toggle_source_tree(bool,bool)::{lambda()#1}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_38);
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
    if ((param_2) && (*(long *)(this + 0xe98) != 0)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Tree::scroll_to_item(*(TreeItem **)(this + 0xdc0),SUB81(*(long *)(this + 0xe98),0));
        return;
      }
      goto LAB_00100695;
    }
  }
  else {
    pRVar1 = *(Ref **)(this + 0xde8);
    if (_toggle_source_tree(bool,bool)::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_toggle_source_tree(bool,bool)::{lambda()#2}::operator()()::sname
                                 );
      if (iVar3 != 0) {
        _scs_create((char *)&_toggle_source_tree(bool,bool)::{lambda()#2}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &_toggle_source_tree(bool,bool)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_toggle_source_tree(bool,bool)::{lambda()#2}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_38);
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
LAB_00100695:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetInstaller::_fix_conflicted_indeterminate_state(TreeItem*, int) */

undefined8 EditorAssetInstaller::_fix_conflicted_indeterminate_state(TreeItem *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = TreeItem::get_child_count();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = _fix_conflicted_indeterminate_state(param_1,param_2);
  return uVar2;
}



/* EditorAssetInstaller::_update_confirm_button() */

void __thiscall EditorAssetInstaller::_update_confirm_button(EditorAssetInstaller *this)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = Tree::get_root();
  uVar1 = *(undefined8 *)(this + 0xd88);
  if (lVar3 != 0) {
    cVar2 = TreeItem::is_checked((int)lVar3);
    if (cVar2 == '\0') {
      TreeItem::is_indeterminate((int)lVar3);
      BaseButton::set_disabled(SUB81(uVar1,0));
      return;
    }
  }
  BaseButton::set_disabled(SUB81(uVar1,0));
  return;
}



/* EditorAssetInstaller::_update_conflict_status(int) */

void __thiscall
EditorAssetInstaller::_update_conflict_status(EditorAssetInstaller *this,int param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  String local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar1 = *(String **)(this + 0xde0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    CanvasItem::hide();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::show();
      return;
    }
  }
  else {
    local_70 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = "%d files conflict with your project and won\'t be installed";
    local_68 = 0;
    local_50 = 0x3a;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "%d file conflicts with your project and won\'t be installed";
    local_60 = 0;
    local_50 = 0x3a;
    String::parse_latin1((StrRange *)&local_60);
    TTRN((String *)&local_58,(String *)&local_60,(int)(StrRange *)&local_68,
         (String *)(ulong)(uint)param_1);
    vformat<int>(local_78,(int)(String *)&local_58);
    LinkButton::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CanvasItem::show();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetInstaller::_open_target_dir_dialog() */

void __thiscall EditorAssetInstaller::_open_target_dir_dialog(EditorAssetInstaller *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  EditorFileDialog *this_00;
  CallableCustom *this_01;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar5 = *(long *)(this + 0xdf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar5 == 0) {
    this_00 = (EditorFileDialog *)operator_new(0x1108,"");
    EditorFileDialog::EditorFileDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(EditorFileDialog **)(this + 0xdf8) = this_00;
    EditorFileDialog::set_file_mode(this_00,2);
    local_58 = "";
    local_60 = 0;
    pSVar1 = *(String **)(this + 0xdf8);
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Select Install Folder";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Window::set_title(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    EditorFileDialog::set_current_dir(*(String **)(this + 0xdf8));
    plVar2 = *(long **)(this + 0xdf8);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    this_01 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_01);
    *(undefined **)(this_01 + 0x20) = &_LC12;
    *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_01 = &PTR_hash_001157a0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(undefined8 *)(this_01 + 0x30) = uVar4;
    *(code **)(this_01 + 0x38) = _target_dir_selected;
    *(EditorAssetInstaller **)(this_01 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
    *(char **)(this_01 + 0x20) = "EditorAssetInstaller::_target_dir_selected";
    Callable::Callable((Callable *)&local_58,this_01);
    StringName::StringName((StringName *)&local_60,"dir_selected",false);
    (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_58);
    Node::add_child(this,*(undefined8 *)(this + 0xdf8),0,0);
    lVar5 = *(long *)(this + 0xdf8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorFileDialog::popup_file_dialog();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}



/* EditorAssetInstaller::EditorAssetInstaller() */

void __thiscall EditorAssetInstaller::EditorAssetInstaller(EditorAssetInstaller *this)

{
  Variant *pVVar1;
  String *pSVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  StringName *pSVar6;
  BoxContainer *pBVar7;
  BoxContainer *pBVar8;
  Label *pLVar9;
  Button *pBVar10;
  VSeparator *this_00;
  CheckBox *this_01;
  CallableCustom *this_02;
  LinkButton *this_03;
  SplitContainer *this_04;
  Tree *pTVar11;
  int iVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  undefined8 local_f0;
  long local_e8 [2];
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  this[0xed8] = (EditorAssetInstaller)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00115528;
  uVar5 = _LC24;
  *(undefined8 *)(this + 0xe28) = 0;
  *(undefined8 *)(this + 0xe30) = uVar5;
  *(undefined8 *)(this + 0xe60) = uVar5;
  *(undefined8 *)(this + 0xe90) = uVar5;
  *(undefined8 *)(this + 0xed0) = uVar5;
  *(undefined8 *)(this + 0xee0) = 0;
  this[0xee8] = (EditorAssetInstaller)0x0;
  *(undefined8 *)(this + 0xef0) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xeb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xec0) = (undefined1  [16])0x0;
  String::parse_latin1((String *)(this + 0xef0),"res://");
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00114bc0;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this,pBVar7,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00114848;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(pBVar7,pBVar8,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_d8 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_d8);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Asset:");
  TTR((String *)&local_f0,(String *)local_e8);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  StringName::StringName((StringName *)&local_d8,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar9);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pBVar8,pLVar9,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_d8 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_d8);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xdd0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdd0),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00114848;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(pBVar7,pBVar8,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_d8 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_d8);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xde8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xde8),0));
  pSVar2 = *(String **)(this + 0xde8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1
            ((String *)local_e8,
             "Open the list of the asset contents and select which files to install.");
  TTR((String *)&local_f0,(String *)local_e8);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xde8),0,0);
  plVar3 = *(long **)(this + 0xde8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<EditorAssetInstaller,bool,bool>
            ((EditorAssetInstaller *)&local_d8,(char *)this,
             (_func_void_bool_bool *)"&EditorAssetInstaller::_toggle_source_tree");
  Variant::Variant((Variant *)&local_b8,false);
  local_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  iVar12 = (int)(CowData<char32_t> *)&local_d8;
  local_c8 = (Variant *)&local_b8;
  Callable::bindp((Variant **)local_e8,iVar12);
  if (Variant::needs_deinit[(int)local_a0] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x248,(String *)local_e8,0);
  Callable::~Callable((Callable *)local_e8);
  Callable::~Callable((Callable *)&local_d8);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_d8 = (char *)0x0;
  Button::Button(pBVar10,(String *)&local_d8);
  postinitialize_handler((Object *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Change Install Folder");
  TTR((String *)&local_f0,(String *)local_e8);
  Button::set_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1
            ((String *)local_e8,
             "Change the folder where the contents of the asset are going to be installed.");
  TTR((String *)&local_f0,(String *)local_e8);
  Control::set_tooltip_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  Node::add_child(pBVar8,pBVar10,0,0);
  pcVar4 = *(code **)(*(long *)pBVar10 + 0x108);
  create_custom_callable_function_pointer<EditorAssetInstaller>
            ((EditorAssetInstaller *)&local_d8,(char *)this,
             (_func_void *)"&EditorAssetInstaller::_open_target_dir_dialog");
  (*pcVar4)(pBVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_d8,0);
  Callable::~Callable((Callable *)&local_d8);
  this_00 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_00);
  postinitialize_handler((Object *)this_00);
  Node::add_child(pBVar8,this_00,0,0);
  this_01 = (CheckBox *)operator_new(0xc60,"");
  local_d8 = (char *)0x0;
  CheckBox::CheckBox(this_01,(String *)&local_d8);
  postinitialize_handler((Object *)this_01);
  *(CheckBox **)(this + 0xdf0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  pSVar2 = *(String **)(this + 0xdf0);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Ignore asset root");
  TTR((String *)&local_f0,(String *)local_e8);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  pSVar2 = *(String **)(this + 0xdf0);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Ignore the root directory when extracting files.");
  TTR((String *)&local_f0,(String *)local_e8);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  plVar3 = *(long **)(this + 0xdf0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(EditorAssetInstaller **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC12;
  *(undefined ***)this_02 = &PTR_hash_00115950;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar5;
  *(code **)(this_02 + 0x38) = _set_skip_toplevel;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorAssetInstaller::_set_skip_toplevel";
  Callable::Callable((Callable *)&local_d8,this_02);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_d8,0);
  Callable::~Callable((Callable *)&local_d8);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdf0),0,0);
  BoxContainer::add_spacer(SUB81(pBVar8,0));
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_d8 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_d8);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xdd8) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  pSVar6 = *(StringName **)(this + 0xdd8);
  StringName::StringName((StringName *)&local_d8,"HeaderSmall",false);
  Control::set_theme_type_variation(pSVar6);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar2 = *(String **)(this + 0xdd8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"No files conflict with your project");
  TTR((String *)&local_f0,(String *)local_e8);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdd8),0,0);
  this_03 = (LinkButton *)operator_new(0xb10,"");
  local_d8 = (char *)0x0;
  LinkButton::LinkButton(this_03,(String *)&local_d8);
  postinitialize_handler((Object *)this_03);
  *(LinkButton **)(this + 0xde0) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  pSVar6 = *(StringName **)(this + 0xde0);
  StringName::StringName((StringName *)&local_d8,"HeaderSmallLink",false);
  Control::set_theme_type_variation(pSVar6);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Control::set_v_size_flags(*(undefined8 *)(this + 0xde0),4);
  pSVar2 = *(String **)(this + 0xde0);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Show contents of the asset and conflicting files.");
  TTR((String *)&local_f0,(String *)local_e8);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xde0),0));
  pVVar13 = (Variant *)local_40;
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xde0),0,0);
  plVar3 = *(long **)(this + 0xde0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<EditorAssetInstaller,bool,bool>
            ((EditorAssetInstaller *)&local_d8,(char *)this,
             (_func_void_bool_bool *)"&EditorAssetInstaller::_toggle_source_tree");
  Variant::Variant(local_88,true);
  Variant::Variant(local_70,true);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_b8 = local_88;
  pVStack_b0 = local_70;
  Callable::bindp((Variant **)local_e8,iVar12);
  do {
    pVVar1 = pVVar13 + -0x18;
    pVVar13 = pVVar13 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar13 != local_88);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x238,(String *)local_e8,0);
  Callable::~Callable((Callable *)local_e8);
  Callable::~Callable((Callable *)&local_d8);
  this_04 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_04,false);
  this_04[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_04 = &PTR__initialize_classv_001151b0;
  postinitialize_handler((Object *)this_04);
  Control::set_v_size_flags(this_04,3);
  Node::add_child(pBVar7,this_04,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00114bc0;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xdb8) = pBVar7;
  Control::set_h_size_flags(pBVar7,3);
  uVar5 = *(undefined8 *)(this + 0xdb8);
  BaseButton::is_pressed();
  CanvasItem::set_visible(SUB81(uVar5,0));
  Node::add_child(this_04,*(undefined8 *)(this + 0xdb8),0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_d8 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_d8);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Contents of the asset:");
  TTR((String *)&local_f0,(String *)local_e8);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  StringName::StringName((StringName *)&local_d8,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar9);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xdb8),pLVar9,0,0);
  pTVar11 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar11);
  postinitialize_handler((Object *)pTVar11);
  *(Tree **)(this + 0xdc0) = pTVar11;
  Node::set_auto_translate_mode(pTVar11,2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc0),3);
  plVar3 = *(long **)(this + 0xdc0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<EditorAssetInstaller>
            ((EditorAssetInstaller *)&local_d8,(char *)this,
             (_func_void *)"&EditorAssetInstaller::_item_checked_cbk");
  StringName::StringName((StringName *)local_e8,"item_edited",false);
  (*pcVar4)(plVar3,(String *)local_e8,(CowData<char32_t> *)&local_d8,0);
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_d8);
  pSVar6 = *(StringName **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_d8,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar6);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xdb8),*(undefined8 *)(this + 0xdc0),0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00114bc0;
  postinitialize_handler((Object *)pBVar7);
  Control::set_h_size_flags(pBVar7,3);
  Node::add_child(this_04,pBVar7,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_d8 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_d8);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Installation preview:");
  TTR((String *)&local_f0,(String *)local_e8);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  StringName::StringName((StringName *)&local_d8,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar9);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pBVar7,pLVar9,0,0);
  pTVar11 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar11);
  postinitialize_handler((Object *)pTVar11);
  *(Tree **)(this + 0xdc8) = pTVar11;
  Node::set_auto_translate_mode(pTVar11,2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc8),3);
  plVar3 = *(long **)(this + 0xdc8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<EditorAssetInstaller>
            ((EditorAssetInstaller *)&local_d8,(char *)this,
             (_func_void *)"&EditorAssetInstaller::_item_checked_cbk");
  StringName::StringName((StringName *)local_e8,"item_edited",false);
  (*pcVar4)(plVar3,(String *)local_e8,(CowData<char32_t> *)&local_d8,0);
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_d8);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xdc8),0,0);
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"");
  local_d8 = "Configure Asset Before Installing";
  local_f0 = 0;
  local_d0 = 0x21;
  String::parse_latin1((StrRange *)&local_f0);
  TTR((String *)&local_d8,(String *)&local_f0);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"");
  local_e8[0] = 0;
  String::parse_latin1((String *)local_e8,"Install");
  TTR((String *)&local_f0,(String *)local_e8);
  AcceptDialog::set_ok_button_text(this,(String *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    AcceptDialog::set_hide_on_ok(SUB81(this,0));
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



/* EditorAssetInstaller::_check_has_toplevel() */

void __thiscall EditorAssetInstaller::_check_has_toplevel(EditorAssetInstaller *this)

{
  int iVar1;
  String *pSVar2;
  char cVar3;
  long in_FS_OFFSET;
  String *local_98;
  int local_84;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)(this + 0xee0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdf0),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  local_58 = "";
  local_60 = 0;
  pSVar2 = *(String **)(this + 0xdf0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "This asset doesn\'t have a root directory, so it can\'t be ignored.";
  local_68 = 0;
  local_50 = 0x41;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  iVar1 = *(int *)(this + 0xe34);
  if (iVar1 != 0) {
    local_98 = *(String **)(this + 0xe10);
    local_70 = 0;
    local_84 = 1;
    do {
      if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) {
        cVar3 = String::ends_with((char *)local_98);
        if (cVar3 == '\0') {
LAB_00101e79:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          break;
        }
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)local_98);
      }
      else {
        cVar3 = String::begins_with(local_98);
        if (cVar3 == '\0') goto LAB_00101e79;
      }
      if (iVar1 <= local_84) goto code_r0x00101ecb;
      local_84 = local_84 + 1;
      local_98 = local_98 + 8;
    } while( true );
  }
LAB_00101e83:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00101ecb:
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xee0),(CowData *)&local_70);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  pSVar2 = *(String **)(this + 0xdf0);
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"Ignore the root directory when extracting files.");
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  goto LAB_00101e83;
}



/* EditorAssetInstaller::set_asset_name(String const&) */

void __thiscall EditorAssetInstaller::set_asset_name(EditorAssetInstaller *this,String *param_1)

{
  if (*(long *)(this + 0xe08) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe08),(CowData *)param_1);
    return;
  }
  return;
}



/* EditorAssetInstaller::get_asset_name() const */

void EditorAssetInstaller::get_asset_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xe08) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xe08));
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



/* EditorAssetInstaller::_update_source_item_status(TreeItem*, String const&) */

undefined4 EditorAssetInstaller::_update_source_item_status(TreeItem *param_1,String *param_2)

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
  ulong uVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  String *in_RDX;
  long lVar18;
  long lVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xe40) != 0) && (*(int *)(param_1 + 0xe64) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xe60) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xe60) * 8);
    uVar13 = String::hash();
    uVar11 = CONCAT44(0,uVar1);
    lVar19 = *(long *)(param_1 + 0xe48);
    uVar17 = 1;
    if (uVar13 != 0) {
      uVar17 = uVar13;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar17 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar11;
    lVar18 = SUB168(auVar3 * auVar7,8);
    uVar13 = *(uint *)(lVar19 + lVar18 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar13 != 0) {
      uVar20 = 0;
      do {
        if (uVar13 == uVar17) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_1 + 0xe40) + lVar18 * 8) + 0x10),
                                      in_RDX);
          if (cVar12 != '\0') {
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)(param_1 + 0xe38),in_RDX);
            String::path_join((String *)&local_90);
            uVar14 = FileAccess::exists((String *)&local_90);
            iVar15 = (int)param_2;
            if ((char)uVar14 == '\0') {
              TreeItem::clear_custom_color(iVar15);
              TreeItem::set_tooltip_text(iVar15,(String *)0x0);
              TreeItem::set_checked(iVar15,false);
            }
            else {
              if (_update_source_item_status(TreeItem*,String_const&)::{lambda()#1}::operator()()::
                  sname == '\0') {
                iVar16 = __cxa_guard_acquire(&_update_source_item_status(TreeItem*,String_const&)::
                                              {lambda()#1}::operator()()::sname);
                if (iVar16 != 0) {
                  _scs_create((char *)&_update_source_item_status(TreeItem*,String_const&)::
                                       {lambda()#1}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &_update_source_item_status(TreeItem*,String_const&)::{lambda()#1}::
                                operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&_update_source_item_status(TreeItem*,String_const&)::
                                       {lambda()#1}::operator()()::sname);
                }
              }
              local_58 = Window::get_theme_color
                                   ((StringName *)param_1,
                                    (StringName *)
                                    &_update_source_item_status(TreeItem*,String_const&)::
                                     {lambda()#1}::operator()()::sname);
              TreeItem::set_custom_color(iVar15,(Color *)0x0);
              local_70 = 0;
              if (local_90 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_90);
              }
              local_80 = 0;
              local_60 = 0;
              local_68 = "";
              String::parse_latin1((StrRange *)&local_80);
              local_88 = 0;
              local_68 = "%s (already exists)";
              local_60 = 0x13;
              String::parse_latin1((StrRange *)&local_88);
              TTR(local_78,(String *)&local_88);
              vformat<String>((CowData<char32_t> *)&local_68,local_78,(CowData<char32_t> *)&local_70
                             );
              TreeItem::set_tooltip_text(iVar15,(String *)0x0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              TreeItem::set_checked(iVar15,false);
            }
            TreeItem::propagate_check(iVar15,false);
            TreeItem::get_tree();
            iVar15 = Tree::get_root();
            iVar16 = TreeItem::get_child_count();
            if (iVar16 != 0) {
              _fix_conflicted_indeterminate_state(param_1,iVar15);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            goto LAB_00102180;
          }
          lVar19 = *(long *)(param_1 + 0xe48);
        }
        uVar20 = uVar20 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar11;
        lVar18 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(lVar19 + lVar18 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
      } while ((uVar13 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar11, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar11, uVar20 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar14 = 0;
  _err_print_error("_update_source_item_status","editor/editor_asset_installer.cpp",0x111,
                   "Condition \"!mapped_files.has(p_path)\" is true. Returning: false",0,0);
LAB_00102180:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetInstaller::_update_source_tree() */

void __thiscall EditorAssetInstaller::_update_source_tree(EditorAssetInstaller *this)

{
  String *pSVar1;
  bool bVar2;
  Variant *pVVar3;
  long *plVar4;
  long in_FS_OFFSET;
  int local_b4;
  Dictionary local_a8 [8];
  long local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar4 = *(long **)(this + 0xe80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b4 = 0;
  *(undefined8 *)(this + 0xe98) = 0;
  if (plVar4 != (long *)0x0) {
    do {
      while( true ) {
        pSVar1 = (String *)plVar4[3];
        TreeItem::get_metadata((int)(Variant *)local_58);
        Variant::operator_cast_to_Dictionary((Variant *)local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,false);
        Variant::Variant((Variant *)local_98,"is_dir");
        Dictionary::get((Variant *)local_58,(Variant *)local_a8);
        bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (!bVar2) break;
LAB_001025d0:
        Dictionary::~Dictionary(local_a8);
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_00102802;
      }
      Variant::Variant((Variant *)local_78,"");
      Variant::Variant((Variant *)local_98,"asset_path");
      Dictionary::get((Variant *)local_58,(Variant *)local_a8);
      Variant::operator_cast_to_String((Variant *)&local_a0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((local_a0 == 0) || (*(uint *)(local_a0 + -8) < 2)) {
        _err_print_error("_update_source_tree","editor/editor_asset_installer.cpp",0xfe,
                         "Condition \"asset_path.is_empty()\" is true. Continuing.",0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        goto LAB_001025d0;
      }
      bVar2 = (bool)_update_source_item_status((TreeItem *)this,pSVar1);
      if (bVar2 != false) {
        if (*(long *)(this + 0xe98) == 0) {
          *(String **)(this + 0xe98) = pSVar1;
        }
        local_b4 = local_b4 + 1;
      }
      Variant::Variant((Variant *)local_58,bVar2);
      Variant::Variant((Variant *)local_78,"is_conflict");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_a8);
      TreeItem::set_metadata((int)pSVar1,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      Dictionary::~Dictionary(local_a8);
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_00102802:
  _update_conflict_status(this,local_b4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _update_confirm_button(this);
  return;
}



/* EditorAssetInstaller::_update_file_mappings() */

void __thiscall EditorAssetInstaller::_update_file_mappings(EditorAssetInstaller *this)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  CowData *pCVar5;
  CowData<char32_t> *this_00;
  int iVar6;
  int iVar7;
  long lVar8;
  CowData *pCVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xe40) != 0) && (*(int *)(this + 0xe64) != 0)) {
    lVar8 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe60) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe48) + lVar8) != 0) {
          *(int *)(*(long *)(this + 0xe48) + lVar8) = 0;
          pvVar4 = *(void **)(*(long *)(this + 0xe40) + lVar8 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this + 0xe40) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar2 << 2 != lVar8);
    }
    *(undefined4 *)(this + 0xe64) = 0;
    *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  }
  iVar3 = *(int *)(this + 0xe34);
  if (iVar3 == 0) {
LAB_00102af1:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pCVar5 = *(CowData **)(this + 0xe10);
  pCVar9 = pCVar5;
  if ((*(long *)(this + 0xee0) == 0) || (*(uint *)(*(long *)(this + 0xee0) + -8) < 2)) {
    local_50 = 0;
    iVar6 = 1;
    if (*(long *)pCVar5 == 0) goto LAB_00102a9b;
  }
  else {
    if (this[0xee8] != (EditorAssetInstaller)0x0) {
      if (1 < iVar3) {
        pCVar9 = pCVar5 + 8;
        iVar6 = 2;
        goto LAB_00102b51;
      }
      goto LAB_00102af1;
    }
    local_50 = 0;
    if (*(long *)pCVar5 == 0) {
      iVar6 = 1;
      goto LAB_00102b80;
    }
  }
  iVar6 = 1;
  do {
    local_50 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,pCVar9);
    do {
      if ((*(long *)(this + 0xee0) != 0) && (1 < *(uint *)(*(long *)(this + 0xee0) + -8))) {
LAB_00102b80:
        if (this[0xee8] != (EditorAssetInstaller)0x0) {
          String::trim_prefix((String *)&local_48);
          if (local_50 != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            local_50 = local_48;
            local_48 = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        }
      }
LAB_00102a9b:
      this_00 = (CowData<char32_t> *)
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)(this + 0xe38),(String *)pCVar9);
      if (*(long *)this_00 != local_50) {
        CowData<char32_t>::_ref(this_00,(CowData *)&local_50);
      }
      lVar8 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (iVar3 <= iVar6) goto LAB_00102af1;
      iVar7 = iVar6 + 1;
      pCVar9 = (CowData *)((String *)pCVar9 + 8);
      bVar10 = iVar6 == -1;
      iVar6 = iVar7;
      if ((bVar10) && (pCVar5 == (CowData *)0x0)) goto LAB_00102af1;
LAB_00102b51:
      local_50 = 0;
    } while (*(long *)pCVar9 == 0);
  } while( true );
}



/* EditorAssetInstaller::_create_file_item(Tree*, TreeItem*, String const&, int*) */

String * __thiscall
EditorAssetInstaller::_create_file_item
          (EditorAssetInstaller *this,Tree *param_1,TreeItem *param_2,String *param_3,int *param_4)

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
  ulong uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  String *pSVar15;
  Variant *pVVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long in_FS_OFFSET;
  long local_90;
  String local_88 [8];
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar15 = (String *)Tree::create_item((TreeItem *)param_1,(int)param_2);
  iVar21 = (int)pSVar15;
  if (*(Tree **)(this + 0xdc0) == param_1) {
    TreeItem::set_cell_mode(pSVar15,0,1);
    TreeItem::set_editable(iVar21,false);
    bVar13 = (bool)_update_source_item_status((TreeItem *)this,pSVar15);
    if (bVar13 != false) {
      if (*(long *)(this + 0xe98) == 0) {
        *(String **)(this + 0xe98) = pSVar15;
      }
      *param_4 = *param_4 + 1;
    }
    Dictionary::Dictionary((Dictionary *)&local_80);
    Variant::Variant((Variant *)local_58,param_3);
    Variant::Variant((Variant *)local_78,"asset_path");
    pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_80);
    if (pVVar16 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar16 = 0;
      *(int *)pVVar16 = local_58[0];
      *(undefined8 *)(pVVar16 + 8) = local_50;
      *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,false);
    Variant::Variant((Variant *)local_78,"is_dir");
    pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_80);
    if (pVVar16 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar16 = 0;
      *(int *)pVVar16 = local_58[0];
      *(undefined8 *)(pVVar16 + 8) = local_50;
      *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,bVar13);
    Variant::Variant((Variant *)local_78,"is_conflict");
    pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_80);
    if (pVVar16 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar16 = 0;
      *(int *)pVVar16 = local_58[0];
      *(undefined8 *)(pVVar16 + 8) = local_50;
      *(undefined8 *)(pVVar16 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_80);
    TreeItem::set_metadata(iVar21,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_80);
  }
  String::get_file();
  String::get_extension();
  String::to_lower();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((*(long *)(this + 0xeb0) != 0) && (*(int *)(this + 0xed4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xed0) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xed0) * 8);
    uVar14 = String::hash();
    uVar11 = CONCAT44(0,uVar1);
    lVar22 = *(long *)(this + 0xeb8);
    uVar17 = 1;
    if (uVar14 != 0) {
      uVar17 = uVar14;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar17 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar11;
    lVar19 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(lVar22 + lVar19 * 4);
    iVar18 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar20 = 0;
      do {
        if (uVar14 == uVar17) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0xeb0) + lVar19 * 8) + 0x10),
                                      local_88);
          if (cVar12 != '\0') {
            HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
            ::operator[]((HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
                          *)(this + 0xea8),local_88);
            TreeItem::set_icon(iVar21,(Ref *)0x0);
            goto LAB_00102cd1;
          }
          lVar22 = *(long *)(this + 0xeb8);
        }
        uVar20 = uVar20 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar18 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar11;
        lVar19 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(lVar22 + lVar19 * 4);
        iVar18 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar11, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar11, uVar20 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  TreeItem::set_icon(iVar21,(Ref *)0x0);
LAB_00102cd1:
  local_80 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_90);
  }
  TreeItem::set_text(pSVar15,0,(CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar15;
}



/* EditorAssetInstaller::_notification(int) [clone .part.0] */

void EditorAssetInstaller::_notification(int param_1)

{
  HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
  *this;
  uint uVar1;
  Ref *pRVar2;
  StringName *pSVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  Ref<Texture2D> *pRVar7;
  long lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  undefined4 in_register_0000003c;
  StringName *pSVar12;
  long in_FS_OFFSET;
  undefined8 local_68;
  Ref *local_60;
  undefined8 local_58;
  long local_40;
  
  pSVar12 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = BaseButton::is_pressed();
  pRVar2 = *(Ref **)(pSVar12 + 0xde8);
  if (cVar5 == '\0') {
    if (_notification(int)::{lambda()#2}::operator()()::sname != '\0') goto LAB_001031a3;
    puVar10 = &_notification(int)::{lambda()#2}::operator()()::sname;
    pcVar9 = (char *)&_notification(int)::{lambda()#2}::operator()()::sname;
    iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar6 == 0) goto LAB_001031a3;
    uVar11 = 0xef;
  }
  else {
    if (_notification(int)::{lambda()#1}::operator()()::sname != '\0') goto LAB_001031a3;
    puVar10 = &_notification(int)::{lambda()#1}::operator()()::sname;
    pcVar9 = (char *)&_notification(int)::{lambda()#1}::operator()()::sname;
    iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    uVar11 = 0xea;
    if (iVar6 == 0) goto LAB_001031a3;
  }
  _scs_create(pcVar9,(bool)uVar11);
  __cxa_atexit(StringName::~StringName,pcVar9,&__dso_handle);
  __cxa_guard_release(puVar10);
LAB_001031a3:
  Window::get_editor_theme_icon((StringName *)&local_60);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  pSVar3 = *(StringName **)(pSVar12 + 0xde0);
  if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
  }
  local_58 = Window::get_theme_color
                       (pSVar12,(StringName *)&_notification(int)::{lambda()#3}::operator()()::sname
                       );
  Control::add_theme_color_override(pSVar3,(Color *)(SceneStringNames::singleton + 0xb0));
  if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  this = (HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
          *)(pSVar12 + 0xea8);
  Ref<Texture2D>::operator=((Ref<Texture2D> *)(pSVar12 + 0xea0),local_60);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((*(long *)(pSVar12 + 0xeb0) != 0) && (*(int *)(pSVar12 + 0xed4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pSVar12 + 0xed0) * 4);
    if (uVar1 != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(*(long *)(pSVar12 + 0xeb8) + lVar8) != 0) {
          *(int *)(*(long *)(pSVar12 + 0xeb8) + lVar8) = 0;
          pvVar4 = *(void **)(*(long *)(pSVar12 + 0xeb0) + lVar8 * 2);
          Ref<Texture2D>::unref((Ref<Texture2D> *)((long)pvVar4 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(pSVar12 + 0xeb0) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while (lVar8 != (ulong)uVar1 * 4);
    }
    *(undefined4 *)(pSVar12 + 0xed4) = 0;
    *(undefined1 (*) [16])(pSVar12 + 0xec0) = (undefined1  [16])0x0;
  }
  if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"bmp");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"dds");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"exr");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"hdr");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"jpg");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#10}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"jpeg");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#11}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"png");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#12}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"svg");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#13}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"tga");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#14}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"webp");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#15}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#15}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"wav");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#16}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#16}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#16}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#16}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#16}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"ogg");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#17}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#17}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#17}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#17}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#17}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"mp3");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#18}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#18}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#18}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#18}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#18}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"scn");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#19}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#19}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#19}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#19}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#19}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"tscn");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#20}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#20}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#20}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#20}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#20}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"escn");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#21}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#21}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#21}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#21}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#21}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"dae");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#22}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#22}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#22}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#22}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#22}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"gltf");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#23}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#23}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#23}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#23}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#23}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"glb");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#24}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#24}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#24}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#24}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#24}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"gdshader");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#25}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#25}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#25}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#25}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#25}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"gdshaderinc");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#26}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#26}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#26}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#26}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#26}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"gd");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  StringName::StringName((StringName *)&local_60,"CSharpScript",false);
  cVar5 = ClassDB::class_exists((StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (cVar5 == '\0') {
    if ((_notification(int)::{lambda()#28}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#28}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#28}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#28}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#28}::operator()()::sname);
    }
  }
  else if ((_notification(int)::{lambda()#27}::operator()()::sname == '\0') &&
          (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#27}::operator()()::sname),
          iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#27}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#27}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#27}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"cs");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#29}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#29}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#29}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#29}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#29}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"res");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#30}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#30}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#30}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#30}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#30}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"tres");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#31}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#31}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#31}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#31}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#31}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"atlastex");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#32}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#32}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#32}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#32}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#32}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"obj");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#33}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#33}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#33}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#33}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#33}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"txt");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#34}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#34}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#34}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#34}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#34}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"md");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#35}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#35}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#35}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#35}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#35}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"rst");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#36}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#36}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#36}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#36}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#36}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"json");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#37}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#37}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#37}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#37}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#37}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"yml");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#38}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#38}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#38}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#38}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#38}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"yaml");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#39}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#39}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#39}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#39}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#39}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"toml");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#40}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#40}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#40}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#40}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#40}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"cfg");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if ((_notification(int)::{lambda()#41}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#41}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#41}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#41}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#41}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"ini");
  pRVar7 = (Ref<Texture2D> *)
           HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
           ::operator[](this,(String *)&local_68);
  Ref<Texture2D>::operator=(pRVar7,local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetInstaller::_notification(int) */

void __thiscall EditorAssetInstaller::_notification(EditorAssetInstaller *this,int param_1)

{
  if (param_1 != 0x20) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorAssetInstaller::_create_dir_item(Tree*, TreeItem*, String const&, HashMap<String,
   TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >&) */

undefined8 __thiscall
EditorAssetInstaller::_create_dir_item
          (EditorAssetInstaller *this,Tree *param_1,TreeItem *param_2,String *param_3,
          HashMap *param_4)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Variant *pVVar7;
  int iVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = Tree::create_item((TreeItem *)param_1,(int)param_2);
  iVar8 = (int)uVar5;
  if (*(Tree **)(this + 0xdc0) == param_1) {
    TreeItem::set_cell_mode(uVar5,0,1);
    TreeItem::set_editable(iVar8,false);
    TreeItem::set_checked(iVar8,false);
    TreeItem::propagate_check(iVar8,false);
    TreeItem::get_tree();
    iVar3 = Tree::get_root();
    iVar4 = TreeItem::get_child_count();
    if (iVar4 != 0) {
      _fix_conflicted_indeterminate_state((TreeItem *)this,iVar3);
    }
    Dictionary::Dictionary((Dictionary *)local_98);
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"/");
    String::operator+((String *)&local_88,param_3);
    Variant::Variant((Variant *)local_58,(String *)&local_88);
    Variant::Variant((Variant *)local_78,"asset_path");
    pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_98);
    if (pVVar7 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar7 = 0;
      *(int *)pVVar7 = local_58[0];
      *(undefined8 *)(pVVar7 + 8) = local_50;
      *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    Variant::Variant((Variant *)local_58,true);
    Variant::Variant((Variant *)local_78,"is_dir");
    pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_98);
    if (pVVar7 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar7 = 0;
      *(int *)pVVar7 = local_58[0];
      *(undefined8 *)(pVVar7 + 8) = local_50;
      *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,false);
    Variant::Variant((Variant *)local_78,"is_conflict");
    pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_98);
    if (pVVar7 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar7 = 0;
      *(int *)pVVar7 = local_58[0];
      *(undefined8 *)(pVVar7 + 8) = local_50;
      *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Dictionary *)local_98);
    TreeItem::set_metadata(iVar8,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_98);
  }
  local_88 = (Object *)&_LC50;
  local_90 = 0;
  local_80 = 1;
  String::parse_latin1((StrRange *)&local_90);
  String::get_file();
  String::operator+((String *)&local_88,(String *)local_98);
  TreeItem::set_text(uVar5,0,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
       ::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                                   ::{lambda()#2}::operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                  ::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                         ::{lambda()#2}::operator()()::sname);
  }
  if ((_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                                   ::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_create_dir_item(Tree*,TreeItem*,String_const&,HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>&)
                         ::{lambda()#1}::operator()()::sname);
  }
  Window::get_theme_icon((StringName *)&local_88,(StringName *)this);
  TreeItem::set_icon(iVar8,(Ref *)0x0);
  if (((local_88 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_88, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_88), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  puVar6 = (undefined8 *)
           HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
           ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                         *)param_4,param_3);
  *puVar6 = uVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* EditorAssetInstaller::_rebuild_source_tree() */

void __thiscall EditorAssetInstaller::_rebuild_source_tree(EditorAssetInstaller *this)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined8 uVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  TreeItem *pTVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  TreeItem *pTVar26;
  int iVar27;
  wchar32 wVar28;
  uint uVar29;
  long in_FS_OFFSET;
  CowData *local_f0;
  int local_dc;
  int local_8c;
  long local_88;
  long local_80;
  Object *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_70._8_8_ = local_70._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xed8] = (EditorAssetInstaller)0x1;
  Tree::clear();
  pTVar18 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0xdc0),0);
  TreeItem::set_cell_mode(pTVar18,0,1);
  iVar27 = (int)pTVar18;
  TreeItem::set_checked(iVar27,false);
  if ((_rebuild_source_tree()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&_rebuild_source_tree()::{lambda()#2}::operator()()::sname),
     iVar16 != 0)) {
    _scs_create((char *)&_rebuild_source_tree()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_rebuild_source_tree()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_rebuild_source_tree()::{lambda()#2}::operator()()::sname);
  }
  if ((_rebuild_source_tree()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&_rebuild_source_tree()::{lambda()#1}::operator()()::sname),
     iVar16 != 0)) {
    _scs_create((char *)&_rebuild_source_tree()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_rebuild_source_tree()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_rebuild_source_tree()::{lambda()#1}::operator()()::sname);
  }
  Window::get_theme_icon((StringName *)&local_78,(StringName *)this);
  TreeItem::set_icon(iVar27,(Ref *)0x0);
  if (((local_78 != (Object *)0x0) && (cVar14 = RefCounted::unreference(), cVar14 != '\0')) &&
     (cVar14 = predelete_handler(local_78), cVar14 != '\0')) {
    (**(code **)(*(long *)local_78 + 0x140))(local_78);
    Memory::free_static(local_78,false);
  }
  local_80 = 0;
  local_78 = (Object *)&_LC50;
  local_70._0_8_ = 1;
  String::parse_latin1((StrRange *)&local_80);
  TreeItem::set_text(pTVar18,0,(StrRange *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  TreeItem::set_editable(iVar27,false);
  if ((*(long *)(this + 0xe70) != 0) && (*(int *)(this + 0xe94) != 0)) {
    lVar24 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe90) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe78) + lVar24) != 0) {
          *(int *)(*(long *)(this + 0xe78) + lVar24) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0xe70) + lVar24 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0xe70) + lVar24 * 2) = 0;
        }
        lVar24 = lVar24 + 4;
      } while (lVar24 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(this + 0xe94) = 0;
    *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
  }
  iVar27 = *(int *)(this + 0xe34);
  local_50 = 2;
  local_8c = 0;
  *(undefined8 *)(this + 0xe98) = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (iVar27 != 0) {
    local_dc = 1;
    local_f0 = *(CowData **)(this + 0xe10);
    do {
      local_88 = 0;
      if (*(long *)local_f0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,local_f0);
      }
      cVar14 = String::ends_with((char *)&local_88);
      wVar28 = (wchar32)(CowData<char32_t> *)&local_88;
      pTVar26 = pTVar18;
      if (cVar14 == '\0') {
        iVar16 = String::rfind_char(wVar28,0x2f);
        if (iVar16 == -1) {
LAB_0010598c:
          uVar19 = _create_file_item(this,*(Tree **)(this + 0xdc0),pTVar26,(String *)&local_88,
                                     &local_8c);
          goto LAB_001059aa;
        }
LAB_00105ac0:
        String::substr((int)(StrRange *)&local_80,wVar28);
        uVar19 = local_70._0_8_;
        if ((local_70._0_8_ != 0) && (local_50._4_4_ != 0)) {
          uVar2 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
          lVar24 = *(long *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
          uVar17 = String::hash();
          uVar12 = CONCAT44(0,uVar2);
          uVar13 = local_70._8_8_;
          uVar21 = 1;
          if (uVar17 != 0) {
            uVar21 = uVar17;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar21 * lVar24;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar12;
          lVar23 = SUB168(auVar4 * auVar8,8);
          uVar17 = *(uint *)(local_70._8_8_ + lVar23 * 4);
          uVar22 = SUB164(auVar4 * auVar8,8);
          if (uVar17 != 0) {
            uVar29 = 0;
            while ((uVar21 != uVar17 ||
                   (cVar15 = String::operator==((String *)(*(long *)(uVar19 + lVar23 * 8) + 0x10),
                                                (String *)&local_80), cVar15 == '\0'))) {
              uVar29 = uVar29 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(uVar22 + 1) * lVar24;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar12;
              lVar23 = SUB168(auVar5 * auVar9,8);
              uVar17 = *(uint *)(uVar13 + lVar23 * 4);
              uVar22 = SUB164(auVar5 * auVar9,8);
              if ((uVar17 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar24, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                 auVar7._0_8_ = (ulong)((uVar2 + uVar22) - SUB164(auVar6 * auVar10,8)) * lVar24,
                 auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar29))
              goto LAB_00105cca;
            }
            lVar24 = *(long *)(uVar19 + (ulong)uVar22 * 8);
            if (lVar24 != 0) {
              pTVar26 = *(TreeItem **)(lVar24 + 0x18);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              if (cVar14 == '\0') goto LAB_0010598c;
              goto LAB_00105c95;
            }
          }
        }
LAB_00105cca:
        _err_print_error("_rebuild_source_tree","editor/editor_asset_installer.cpp",0xdf,
                         "Condition \"!I\" is true. Continuing.",0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      else {
        String::trim_suffix((char *)&local_80);
        if (local_88 != local_80) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_80;
          local_80 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        iVar16 = String::rfind_char(wVar28,0x2f);
        if (iVar16 != -1) goto LAB_00105ac0;
LAB_00105c95:
        uVar19 = _create_dir_item(this,*(Tree **)(this + 0xdc0),pTVar26,(String *)&local_88,
                                  (HashMap *)&local_78);
LAB_001059aa:
        puVar20 = (undefined8 *)
                  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                  ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                *)(this + 0xe68),(String *)local_f0);
        *puVar20 = uVar19;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      if (iVar27 <= local_dc) goto code_r0x001059d2;
      local_dc = local_dc + 1;
      local_f0 = local_f0 + 8;
    } while( true );
  }
  _update_conflict_status(this,0);
  _update_confirm_button(this);
  this[0xed8] = (EditorAssetInstaller)0x0;
LAB_00105d2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001059d2:
  uVar19 = local_70._0_8_;
  _update_conflict_status(this,local_8c);
  _update_confirm_button(this);
  this[0xed8] = (EditorAssetInstaller)0x0;
  if ((undefined8 *)uVar19 != (undefined8 *)0x0) {
    uVar13 = local_70._8_8_;
    if ((local_50._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_70._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
      piVar25 = (int *)local_70._8_8_;
      puVar20 = (undefined8 *)uVar19;
      do {
        if (*piVar25 != 0) {
          pvVar3 = (void *)*puVar20;
          *piVar25 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          *puVar20 = 0;
        }
        piVar25 = piVar25 + 1;
        puVar20 = puVar20 + 1;
      } while (piVar1 != piVar25);
    }
    Memory::free_static((void *)uVar19,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar13,false);
      return;
    }
    goto LAB_00105e38;
  }
  goto LAB_00105d2b;
}



/* EditorAssetInstaller::_is_item_checked(String const&) const */

undefined8 __thiscall
EditorAssetInstaller::_is_item_checked(EditorAssetInstaller *this,String *param_1)

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
  code *pcVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xe70) != 0) && (*(int *)(this + 0xe94) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe90) * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe90) * 8);
    uVar13 = String::hash();
    lVar19 = *(long *)(this + 0xe78);
    uVar15 = 1;
    if (uVar13 != 0) {
      uVar15 = uVar13;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar15 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar13 = *(uint *)(lVar19 + lVar17 * 4);
    iVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar13 != 0) {
      uVar20 = 0;
      do {
        if (uVar13 == uVar15) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0xe70) + lVar17 * 8) + 0x10),
                                      param_1);
          if (cVar12 != '\0') {
            local_48 = 0;
            cVar12 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                     ::_lookup_pos((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                    *)(this + 0xe68),param_1,&local_48);
            if (cVar12 != '\0') {
              uVar14 = TreeItem::is_checked
                                 ((int)*(undefined8 *)
                                        (*(long *)(*(long *)(this + 0xe70) + (ulong)local_48 * 8) +
                                        0x18));
              if ((char)uVar14 != '\0') goto LAB_00105e7f;
              local_44 = 0;
              cVar12 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                       ::_lookup_pos((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                      *)(this + 0xe68),param_1,&local_44);
              if (cVar12 != '\0') {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  uVar14 = TreeItem::is_indeterminate
                                     ((int)*(undefined8 *)
                                            (*(long *)(*(long *)(this + 0xe70) + (ulong)local_44 * 8
                                                      ) + 0x18));
                  return uVar14;
                }
                goto LAB_0010604c;
              }
            }
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          lVar19 = *(long *)(this + 0xe78);
        }
        uVar20 = uVar20 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(lVar19 + lVar17 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
      } while ((uVar13 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar20 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar14 = 0;
LAB_00105e7f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
LAB_0010604c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetInstaller::_rebuild_destination_tree() */

void __thiscall EditorAssetInstaller::_rebuild_destination_tree(EditorAssetInstaller *this)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  TreeItem *pTVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  TreeItem *pTVar23;
  int *piVar24;
  undefined8 *puVar25;
  wchar32 wVar26;
  ulong uVar27;
  uint uVar28;
  long *plVar29;
  long in_FS_OFFSET;
  ulong local_88;
  ulong local_80;
  Object *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_70._8_8_ = local_70._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  pTVar19 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0xdc8),0);
  if ((_rebuild_destination_tree()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar17 = __cxa_guard_acquire(&_rebuild_destination_tree()::{lambda()#2}::operator()()::sname),
     iVar17 != 0)) {
    _scs_create((char *)&_rebuild_destination_tree()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_rebuild_destination_tree()::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_rebuild_destination_tree()::{lambda()#2}::operator()()::sname);
  }
  if ((_rebuild_destination_tree()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar17 = __cxa_guard_acquire(&_rebuild_destination_tree()::{lambda()#1}::operator()()::sname),
     iVar17 != 0)) {
    _scs_create((char *)&_rebuild_destination_tree()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_rebuild_destination_tree()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_rebuild_destination_tree()::{lambda()#1}::operator()()::sname);
  }
  Window::get_theme_icon((StringName *)&local_78,(StringName *)this);
  TreeItem::set_icon((int)pTVar19,(Ref *)0x0);
  if (((local_78 != (Object *)0x0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')) &&
     (cVar15 = predelete_handler(local_78), cVar15 != '\0')) {
    (**(code **)(*(long *)local_78 + 0x140))(local_78);
    Memory::free_static(local_78,false);
  }
  cVar15 = String::operator==((String *)(this + 0xef0),"res://");
  local_80 = 0;
  if (cVar15 == '\0') {
    local_78 = (Object *)&_LC50;
  }
  else {
    local_78 = (Object *)&_LC12;
  }
  local_70._1_7_ = 0;
  local_70[0] = cVar15 == '\0';
  String::parse_latin1((StrRange *)&local_80);
  String::operator+((String *)&local_78,(String *)(this + 0xef0));
  TreeItem::set_text(pTVar19,0,(StringName *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  plVar29 = *(long **)(this + 0xe50);
  local_50 = 2;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (plVar29 != (long *)0x0) {
    do {
      while (cVar15 = _is_item_checked(this,(String *)(plVar29 + 2)), cVar15 == '\0') {
LAB_00106222:
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) goto LAB_001064b3;
      }
      local_88 = 0;
      if (plVar29[3] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(plVar29 + 3));
      }
      cVar15 = String::ends_with((char *)&local_88);
      wVar26 = (wchar32)(CowData<char32_t> *)&local_88;
      pTVar23 = pTVar19;
      if (cVar15 == '\0') {
        iVar17 = String::rfind_char(wVar26,0x2f);
        if (iVar17 != -1) goto LAB_001062e0;
LAB_001061f8:
        local_80 = local_80 & 0xffffffff00000000;
        _create_file_item(this,*(Tree **)(this + 0xdc8),pTVar23,(String *)&local_88,(int *)&local_80
                         );
LAB_0010621a:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        goto LAB_00106222;
      }
      String::trim_suffix((char *)&local_80);
      if (local_88 != local_80) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_80;
        local_80 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      iVar17 = String::rfind_char(wVar26,0x2f);
      if (iVar17 == -1) {
LAB_00106437:
        _create_dir_item(this,*(Tree **)(this + 0xdc8),pTVar23,(String *)&local_88,
                         (HashMap *)&local_78);
        goto LAB_0010621a;
      }
LAB_001062e0:
      String::substr((int)(StrRange *)&local_80,wVar26);
      uVar13 = local_70._0_8_;
      if ((local_70._0_8_ != 0) && (local_50._4_4_ != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
        uVar18 = String::hash();
        uVar27 = CONCAT44(0,uVar2);
        uVar14 = local_70._8_8_;
        uVar20 = 1;
        if (uVar18 != 0) {
          uVar20 = uVar18;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar20 * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar27;
        lVar22 = SUB168(auVar5 * auVar9,8);
        uVar18 = *(uint *)(local_70._8_8_ + lVar22 * 4);
        uVar21 = SUB164(auVar5 * auVar9,8);
        if (uVar18 != 0) {
          uVar28 = 0;
          while ((uVar20 != uVar18 ||
                 (cVar16 = String::operator==((String *)(*(long *)(uVar13 + lVar22 * 8) + 0x10),
                                              (String *)&local_80), cVar16 == '\0'))) {
            uVar28 = uVar28 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(uVar21 + 1) * lVar3;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar27;
            lVar22 = SUB168(auVar6 * auVar10,8);
            uVar18 = *(uint *)(uVar14 + lVar22 * 4);
            uVar21 = SUB164(auVar6 * auVar10,8);
            if ((uVar18 == 0) ||
               (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar3, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar27, auVar8._8_8_ = 0,
               auVar8._0_8_ = (ulong)((uVar2 + uVar21) - SUB164(auVar7 * auVar11,8)) * lVar3,
               auVar12._8_8_ = 0, auVar12._0_8_ = uVar27, SUB164(auVar8 * auVar12,8) < uVar28))
            goto LAB_0010646f;
          }
          lVar3 = *(long *)(uVar13 + (ulong)uVar21 * 8);
          if (lVar3 != 0) {
            pTVar23 = *(TreeItem **)(lVar3 + 0x18);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            if (cVar15 == '\0') goto LAB_001061f8;
            goto LAB_00106437;
          }
        }
      }
LAB_0010646f:
      _err_print_error("_rebuild_destination_tree","editor/editor_asset_installer.cpp",0x142,
                       "Condition \"!I\" is true. Continuing.",0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      plVar29 = (long *)*plVar29;
    } while (plVar29 != (long *)0x0);
LAB_001064b3:
    uVar13 = local_70._0_8_;
    if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
      uVar14 = local_70._8_8_;
      if ((local_50._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_70._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
        piVar24 = (int *)local_70._8_8_;
        puVar25 = (undefined8 *)local_70._0_8_;
        do {
          if (*piVar24 != 0) {
            pvVar4 = (void *)*puVar25;
            *piVar24 = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
            Memory::free_static(pvVar4,false);
            *puVar25 = 0;
          }
          piVar24 = piVar24 + 1;
          puVar25 = puVar25 + 1;
        } while (piVar1 != piVar24);
      }
      Memory::free_static((void *)uVar13,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar14,false);
        return;
      }
      goto LAB_00106685;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106685:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetInstaller::_item_checked_cbk() */

void __thiscall EditorAssetInstaller::_item_checked_cbk(EditorAssetInstaller *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if (this[0xed8] != (EditorAssetInstaller)0x0) {
    return;
  }
  lVar1 = Tree::get_edited();
  if (lVar1 != 0) {
    this[0xed8] = (EditorAssetInstaller)0x1;
    iVar2 = Tree::get_edited();
    TreeItem::propagate_check(iVar2,false);
    iVar2 = Tree::get_root();
    iVar3 = TreeItem::get_child_count();
    if (iVar3 != 0) {
      _fix_conflicted_indeterminate_state((TreeItem *)this,iVar2);
    }
    _update_confirm_button(this);
    _rebuild_destination_tree(this);
    this[0xed8] = (EditorAssetInstaller)0x0;
  }
  return;
}



/* EditorAssetInstaller::open_asset(String const&, bool) */

void __thiscall
EditorAssetInstaller::open_asset(EditorAssetInstaller *this,String *param_1,bool param_2)

{
  long *plVar1;
  String *this_00;
  CowData<char32_t> *this_01;
  uint uVar2;
  void *__s;
  String *pSVar3;
  Object *pOVar4;
  code *pcVar5;
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
  undefined1 *puVar22;
  char cVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined7 in_register_00000011;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  CowData<char32_t> *pCVar34;
  long in_FS_OFFSET;
  float fVar35;
  undefined1 local_4030 [16384];
  
  puVar22 = &stack0xffffffffffffffd0;
  do {
    puVar30 = puVar22;
    *(undefined8 *)(puVar30 + -0x1000) = *(undefined8 *)(puVar30 + -0x1000);
    puVar22 = puVar30 + -0x1000;
  } while (puVar30 + -0x1000 != local_4030);
  *(undefined8 *)(puVar30 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xe00) != *(long *)param_1) {
    *(undefined8 *)(puVar30 + -0x11a0) = 0x10678f;
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe00),(CowData *)param_1);
  }
  lVar33 = *(long *)(this + 0xe10);
  if ((lVar33 != 0) && (*(int *)(this + 0xe34) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4);
    if (uVar2 == 0) {
LAB_001067e6:
      lVar29 = 0;
      while( true ) {
        lVar28 = lVar29 * 8;
        lVar29 = lVar29 + 1;
        *(undefined8 *)(puVar30 + -0x11a0) = 0x106806;
        CowData<char32_t>::_unref((CowData<char32_t> *)(lVar33 + lVar28));
        if (*(uint *)(this + 0xe34) <= (uint)lVar29) break;
        lVar33 = *(long *)(this + 0xe10);
      }
    }
    else {
      __s = *(void **)(this + 0xe28);
      *(undefined8 *)(puVar30 + -0x11a0) = 0x1067da;
      memset(__s,0,(ulong)uVar2 * 4);
      if (*(int *)(this + 0xe34) != 0) goto LAB_001067e6;
    }
    *(undefined4 *)(this + 0xe34) = 0;
  }
  *(undefined8 *)(puVar30 + -0x1140) = 0;
  *(undefined8 *)(puVar30 + -0x11a0) = 0x10683a;
  zipio_create_io((Ref *)(puVar30 + -0x1108));
  *(undefined1 **)(puVar30 + -0x1160) = puVar30 + -0x10b8;
  *(undefined8 *)(puVar30 + -0x11a0) = 0x106855;
  String::utf8();
  *(undefined8 *)(puVar30 + -0x11a0) = 0x10685d;
  uVar26 = CharString::get_data();
  *(undefined8 *)(puVar30 + -0x11a0) = 0x106868;
  uVar26 = unzOpen2(uVar26);
  *(undefined8 *)(puVar30 + -0x1170) = uVar26;
  if (*(long *)(puVar30 + -0x10b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar30 + -0x10b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar33 = *(long *)(puVar30 + -0x10b8);
      *(undefined8 *)(puVar30 + -0x10b8) = 0;
      *(undefined8 *)(puVar30 + -0x11a0) = 0x106dd2;
      Memory::free_static((void *)(lVar33 + -0x10),false);
      lVar33 = *(long *)(puVar30 + -0x1170);
      goto joined_r0x0010688c;
    }
  }
  lVar33 = *(long *)(puVar30 + -0x1170);
joined_r0x0010688c:
  if (lVar33 == 0) {
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106de3;
    uVar26 = EditorToaster::get_singleton();
    pCVar34 = (CowData<char32_t> *)(puVar30 + -0x1120);
    lVar33 = *(long *)(this + 0xe08);
    *(undefined8 *)(puVar30 + -0x10b8) = 0;
    *(undefined8 *)(puVar30 + -0x1120) = 0;
    if (lVar33 != 0) {
      *(undefined8 *)(puVar30 + -0x11a0) = 0x106e1b;
      CowData<char32_t>::_ref(pCVar34,(CowData *)(this + 0xe08));
    }
    pSVar3 = (String *)(puVar30 + -0x1138);
    *(undefined8 *)(puVar30 + -0x1130) = 0;
    this_00 = (String *)(puVar30 + -0x1128);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106e42;
    String::parse_latin1((String *)(puVar30 + -0x1130),"");
    this_01 = (CowData<char32_t> *)(puVar30 + -0x1118);
    *(undefined8 *)(puVar30 + -0x1138) = 0;
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106e62;
    String::parse_latin1(pSVar3,"Error opening asset file for \"%s\" (not in ZIP format).");
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106e70;
    TTR(this_00,pSVar3);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106e7e;
    vformat<String>(this_01,this_00,pCVar34);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106e93;
    EditorToaster::popup_str(uVar26,this_01,2,*(undefined8 *)(puVar30 + -0x1160));
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106e9b;
    CowData<char32_t>::_unref(this_01);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106ea3;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106eab;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106eb3;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar30 + -0x1130));
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106ebb;
    CowData<char32_t>::_unref(pCVar34);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106ec5;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar30 + -0x1160));
    lVar33 = *(long *)(puVar30 + -0x1140);
  }
  else {
    pCVar34 = (CowData<char32_t> *)(puVar30 + -0x1128);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x1068a1;
    iVar24 = unzGoToFirstFile(*(undefined8 *)(puVar30 + -0x1170));
    *(EditorAssetInstaller **)(puVar30 + -0x1178) = this + 0xe10;
    *(undefined1 **)(puVar30 + -0x1190) = puVar30 + -0x1120;
    if (iVar24 == 0) {
      *(int *)(puVar30 + -0x114c) = (int)CONCAT71(in_register_00000011,param_2);
      *(undefined1 **)(puVar30 + -0x1158) = puVar30 + -0x1018;
      do {
        *(undefined8 *)(puVar30 + -0x11a0) = 0;
        *(undefined8 *)(puVar30 + -0x11a8) = 0;
        uVar26 = *(undefined8 *)(puVar30 + -0x1158);
        *(undefined8 *)(puVar30 + -0x11b0) = 0x1068fe;
        unzGetCurrentFileInfo
                  (*(undefined8 *)(puVar30 + -0x1170),*(undefined8 *)(puVar30 + -0x1160),uVar26,
                   0x4000,0,0);
        *(undefined8 *)(puVar30 + -0x11b0) = 0x10690e;
        String::utf8((char *)pCVar34,(int)uVar26);
        *(undefined8 *)(puVar30 + -0x11b0) = 0x106920;
        iVar24 = String::find_char((wchar32)pCVar34,0x2f);
        if (iVar24 != -1) {
          *(undefined1 **)(puVar30 + -0x1180) = puVar30 + -0x1118;
          do {
            *(undefined8 *)(puVar30 + -0x11a0) = 0x106999;
            String::substr((int)*(undefined8 *)(puVar30 + -0x1190),(int)pCVar34);
            if ((*(long *)(puVar30 + -0x1120) != 0) &&
               (1 < *(uint *)(*(long *)(puVar30 + -0x1120) + -8))) {
              if ((*(long *)(this + 0xe10) != 0) && (*(int *)(this + 0xe34) != 0)) {
                lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe30) * 8);
                *(undefined4 *)(puVar30 + -0x1188) =
                     *(undefined4 *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4);
                *(undefined8 *)(puVar30 + -0x11a0) = 0x1069f5;
                uVar25 = String::hash();
                uVar2 = *(uint *)(puVar30 + -0x1188);
                uVar32 = CONCAT44(0,uVar2);
                lVar29 = *(long *)(this + 0xe28);
                uVar27 = 1;
                if (uVar25 != 0) {
                  uVar27 = uVar25;
                }
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)uVar27 * lVar33;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar32;
                lVar28 = SUB168(auVar6 * auVar14,8);
                uVar25 = *(uint *)(lVar29 + lVar28 * 4);
                if (uVar25 != 0) {
                  uVar31 = 0;
                  *(int *)(puVar30 + -0x1150) = iVar24 + 1;
                  *(CowData<char32_t> **)(puVar30 + -0x1168) = pCVar34;
                  iVar24 = SUB164(auVar6 * auVar14,8);
                  do {
                    if (uVar27 == uVar25) {
                      lVar29 = *(long *)(this + 0xe18);
                      *(EditorAssetInstaller **)(puVar30 + -0x1188) = this;
                      uVar25 = *(uint *)(lVar29 + lVar28 * 4);
                      lVar29 = *(long *)(this + 0xe10);
                      *(undefined8 *)(puVar30 + -0x11a0) = 0x106ac6;
                      cVar23 = String::operator==((String *)(lVar29 + (ulong)uVar25 * 8),
                                                  *(String **)(puVar30 + -0x1190));
                      this = *(EditorAssetInstaller **)(puVar30 + -0x1188);
                      if (cVar23 != '\0') {
                        pCVar34 = *(CowData<char32_t> **)(puVar30 + -0x1168);
                        goto LAB_00106940;
                      }
                      lVar29 = *(long *)(this + 0xe28);
                    }
                    uVar31 = uVar31 + 1;
                    auVar7._8_8_ = 0;
                    auVar7._0_8_ = (ulong)(iVar24 + 1) * lVar33;
                    auVar15._8_8_ = 0;
                    auVar15._0_8_ = uVar32;
                    lVar28 = SUB168(auVar7 * auVar15,8);
                    uVar25 = *(uint *)(lVar29 + lVar28 * 4);
                    iVar24 = SUB164(auVar7 * auVar15,8);
                  } while ((uVar25 != 0) &&
                          (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar25 * lVar33,
                          auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, auVar9._8_8_ = 0,
                          auVar9._0_8_ = (ulong)((uVar2 + iVar24) - SUB164(auVar8 * auVar16,8)) *
                                         lVar33, auVar17._8_8_ = 0, auVar17._0_8_ = uVar32,
                          uVar31 <= SUB164(auVar9 * auVar17,8)));
                  pCVar34 = *(CowData<char32_t> **)(puVar30 + -0x1168);
                }
              }
              *(undefined8 *)(puVar30 + -0x11a0) = 0x106b00;
              HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                        (*(String **)(puVar30 + -0x1180));
            }
LAB_00106940:
            *(undefined8 *)(puVar30 + -0x11a0) = 0x10694f;
            iVar24 = String::find_char((wchar32)pCVar34,0x2f);
            if (*(long *)(puVar30 + -0x1120) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(puVar30 + -0x1120) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar33 = *(long *)(puVar30 + -0x1120);
                *(undefined8 *)(puVar30 + -0x1120) = 0;
                *(undefined8 *)(puVar30 + -0x11a0) = 0x10697c;
                Memory::free_static((void *)(lVar33 + -0x10),false);
              }
            }
          } while (iVar24 != -1);
        }
        if ((*(long *)(puVar30 + -0x1128) != 0) &&
           (1 < *(uint *)(*(long *)(puVar30 + -0x1128) + -8))) {
          if ((*(long *)(this + 0xe10) != 0) && (*(int *)(this + 0xe34) != 0)) {
            lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe30) * 8);
            *(undefined4 *)(puVar30 + -0x1188) =
                 *(undefined4 *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4);
            *(undefined8 *)(puVar30 + -0x11a0) = 0x106ca2;
            uVar25 = String::hash();
            uVar2 = *(uint *)(puVar30 + -0x1188);
            uVar32 = CONCAT44(0,uVar2);
            lVar29 = *(long *)(this + 0xe28);
            uVar27 = 1;
            if (uVar25 != 0) {
              uVar27 = uVar25;
            }
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar27 * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar32;
            lVar28 = SUB168(auVar10 * auVar18,8);
            uVar25 = *(uint *)(lVar29 + lVar28 * 4);
            if (uVar25 != 0) {
              *(CowData<char32_t> **)(puVar30 + -0x1180) = pCVar34;
              uVar31 = 0;
              iVar24 = SUB164(auVar10 * auVar18,8);
              do {
                if (uVar27 == uVar25) {
                  lVar29 = *(long *)(this + 0xe18);
                  *(EditorAssetInstaller **)(puVar30 + -0x1188) = this;
                  uVar25 = *(uint *)(lVar29 + lVar28 * 4);
                  lVar29 = *(long *)(this + 0xe10);
                  *(undefined8 *)(puVar30 + -0x11a0) = 0x106d67;
                  cVar23 = String::operator==((String *)(lVar29 + (ulong)uVar25 * 8),
                                              *(String **)(puVar30 + -0x1180));
                  this = *(EditorAssetInstaller **)(puVar30 + -0x1188);
                  if (cVar23 != '\0') {
                    pCVar34 = *(CowData<char32_t> **)(puVar30 + -0x1180);
                    goto LAB_00106b1c;
                  }
                  lVar29 = *(long *)(this + 0xe28);
                }
                uVar31 = uVar31 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(iVar24 + 1) * lVar33;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar32;
                lVar28 = SUB168(auVar11 * auVar19,8);
                uVar25 = *(uint *)(lVar29 + lVar28 * 4);
                iVar24 = SUB164(auVar11 * auVar19,8);
              } while ((uVar25 != 0) &&
                      (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar25 * lVar33, auVar20._8_8_ = 0,
                      auVar20._0_8_ = uVar32, auVar13._8_8_ = 0,
                      auVar13._0_8_ =
                           (ulong)((uVar2 + iVar24) - SUB164(auVar12 * auVar20,8)) * lVar33,
                      auVar21._8_8_ = 0, auVar21._0_8_ = uVar32,
                      uVar31 <= SUB164(auVar13 * auVar21,8)));
              pCVar34 = *(CowData<char32_t> **)(puVar30 + -0x1180);
            }
          }
          *(undefined8 *)(puVar30 + -0x11a0) = 0x106d9d;
          HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((String *)(puVar30 + -0x1118));
        }
LAB_00106b1c:
        *(undefined8 *)(puVar30 + -0x11a0) = 0x106b26;
        iVar24 = unzGoToNextFile(*(undefined8 *)(puVar30 + -0x1170));
        *(undefined8 *)(puVar30 + -0x11a0) = 0x106b30;
        CowData<char32_t>::_unref(pCVar34);
      } while (iVar24 == 0);
      param_2 = SUB41(*(undefined4 *)(puVar30 + -0x114c),0);
    }
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106b46;
    unzClose(*(undefined8 *)(puVar30 + -0x1170));
    pSVar3 = *(String **)(this + 0xdd0);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106b5b;
    Label::set_text(pSVar3);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106b63;
    _check_has_toplevel(this);
    this[0xee8] = (EditorAssetInstaller)param_2;
    uVar26 = *(undefined8 *)(this + 0xdf0);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106b7d;
    Object::set_block_signals(SUB81(uVar26,0));
    uVar26 = *(undefined8 *)(this + 0xdf0);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106b8d;
    BaseButton::is_disabled();
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106ba4;
    BaseButton::set_pressed(SUB81(uVar26,0));
    uVar26 = *(undefined8 *)(this + 0xdf0);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106bb3;
    Object::set_block_signals(SUB81(uVar26,0));
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106bbb;
    _update_file_mappings(this);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106bc3;
    _rebuild_source_tree(this);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106bcb;
    _rebuild_destination_tree(this);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106bd0;
    fVar35 = (float)EditorScale::get_scale();
    *(ulong *)(puVar30 + -0x1028) = CONCAT44(fVar35 * _LC141._4_4_,fVar35 * (float)_LC141);
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106bf4;
    uVar26 = Vector2::operator_cast_to_Vector2i((Vector2 *)(puVar30 + -0x1028));
    *(undefined8 *)(puVar30 + -0x1020) = uVar26;
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106c14;
    Window::popup_centered_clamped(this,_LC51);
    lVar33 = *(long *)(puVar30 + -0x1140);
  }
  if (lVar33 != 0) {
    *(undefined8 *)(puVar30 + -0x11a0) = 0x106c23;
    cVar23 = RefCounted::unreference();
    if (cVar23 != '\0') {
      pOVar4 = *(Object **)(puVar30 + -0x1140);
      *(undefined8 *)(puVar30 + -0x11a0) = 0x106ee5;
      cVar23 = predelete_handler(pOVar4);
      if (cVar23 != '\0') {
        pcVar5 = *(code **)(*(long *)pOVar4 + 0x140);
        *(undefined8 *)(puVar30 + -0x11a0) = 0x106ef9;
        (*pcVar5)(pOVar4);
        *(undefined8 *)(puVar30 + -0x11a0) = 0x106f03;
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (*(long *)(puVar30 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar30 + -0x11a0) = &UNK_00106f1a;
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetInstaller::_set_skip_toplevel(bool) */

void __thiscall EditorAssetInstaller::_set_skip_toplevel(EditorAssetInstaller *this,bool param_1)

{
  if (this[0xee8] != (EditorAssetInstaller)param_1) {
    this[0xee8] = (EditorAssetInstaller)param_1;
    _update_file_mappings(this);
    _update_source_tree(this);
    _rebuild_destination_tree(this);
    return;
  }
  return;
}



/* EditorAssetInstaller::_target_dir_selected(String const&) */

void __thiscall
EditorAssetInstaller::_target_dir_selected(EditorAssetInstaller *this,String *param_1)

{
  char cVar1;
  
  cVar1 = String::operator==((String *)(this + 0xef0),param_1);
  if (cVar1 == '\0') {
    if (*(long *)(this + 0xef0) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xef0),(CowData *)param_1);
    }
    _update_file_mappings(this);
    _update_source_tree(this);
    _rebuild_destination_tree(this);
    return;
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



/* EditorAssetInstaller::_install_asset() */

void __thiscall EditorAssetInstaller::_install_asset(EditorAssetInstaller *this)

{
  long *plVar1;
  StrRange *pSVar2;
  StrRange *this_00;
  String *pSVar3;
  Variant *this_01;
  uint uVar4;
  CowData<char32_t> *pCVar5;
  String *pSVar6;
  CowData<char32_t> *pCVar7;
  String *pSVar8;
  String *this_02;
  Object *pOVar9;
  code *pcVar10;
  size_t __n;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 *puVar19;
  char cVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  ulong *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  undefined1 *puVar33;
  String *pSVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  uint uVar38;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar19 = &stack0xffffffffffffffd0;
  do {
    puVar33 = puVar19;
    *(undefined8 *)(puVar33 + -0x1000) = *(undefined8 *)(puVar33 + -0x1000);
    puVar19 = puVar33 + -0x1000;
  } while (puVar33 + -0x1000 != local_4030);
  *(undefined8 *)(puVar33 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar33 + -0x11b8) = 0;
  *(undefined8 *)(puVar33 + -0x1220) = 0x107142;
  zipio_create_io((Ref *)(puVar33 + -0x1158));
  *(undefined1 **)(puVar33 + -0x1208) = puVar33 + -0x1108;
  *(undefined8 *)(puVar33 + -0x1220) = 0x107161;
  String::utf8();
  *(undefined8 *)(puVar33 + -0x1220) = 0x107169;
  uVar25 = CharString::get_data();
  *(undefined8 *)(puVar33 + -0x1220) = 0x107174;
  uVar25 = unzOpen2(uVar25);
  *(undefined8 *)(puVar33 + -0x1210) = uVar25;
  if (*(long *)(puVar33 + -0x1108) == 0) {
LAB_00107192:
    lVar35 = *(long *)(puVar33 + -0x1210);
  }
  else {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar33 + -0x1108) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00107192;
    lVar35 = *(long *)(puVar33 + -0x1108);
    *(undefined8 *)(puVar33 + -0x1108) = 0;
    *(undefined8 *)(puVar33 + -0x1220) = 0x107ac7;
    Memory::free_static((void *)(lVar35 + -0x10),false);
    lVar35 = *(long *)(puVar33 + -0x1210);
  }
  if (lVar35 == 0) {
    *(undefined8 *)(puVar33 + -0x1220) = 0x107ad8;
    uVar25 = EditorToaster::get_singleton();
    lVar35 = *(long *)(this + 0xe08);
    *(undefined8 *)(puVar33 + -0x1108) = 0;
    pCVar5 = (CowData<char32_t> *)(puVar33 + -0x1178);
    *(undefined8 *)(puVar33 + -0x1178) = 0;
    if (lVar35 != 0) {
      *(undefined8 *)(puVar33 + -0x1220) = 0x107b14;
      CowData<char32_t>::_ref(pCVar5,(CowData *)(this + 0xe08));
    }
    pSVar34 = (String *)(puVar33 + -0x1190);
    *(undefined8 *)(puVar33 + -0x1188) = 0;
    pSVar6 = (String *)(puVar33 + -0x1180);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107b47;
    String::parse_latin1((String *)(puVar33 + -0x1188),"");
    pCVar7 = (CowData<char32_t> *)(puVar33 + -0x1168);
    *(undefined8 *)(puVar33 + -0x1190) = 0;
    *(undefined8 *)(puVar33 + -0x1220) = 0x107b6a;
    String::parse_latin1(pSVar34,"Error opening asset file for \"%s\" (not in ZIP format).");
    *(undefined8 *)(puVar33 + -0x1220) = 0x107b78;
    TTR(pSVar6,pSVar34);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107b86;
    vformat<String>(pCVar7,pSVar6,pCVar5);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107b9b;
    EditorToaster::popup_str(uVar25,pCVar7,2,*(undefined8 *)(puVar33 + -0x1208));
    *(undefined8 *)(puVar33 + -0x1220) = 0x107ba3;
    CowData<char32_t>::_unref(pCVar7);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107bab;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107bb3;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar34);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107bbb;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar33 + -0x1188));
    *(undefined8 *)(puVar33 + -0x1220) = 0x107bc3;
    CowData<char32_t>::_unref(pCVar5);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107bcd;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x1208));
    lVar35 = *(long *)(puVar33 + -0x11b8);
    goto joined_r0x00107bd5;
  }
  pSVar2 = (StrRange *)(puVar33 + -0x1188);
  *(undefined8 *)(puVar33 + -0x1170) = 0;
  this_00 = (StrRange *)(puVar33 + -0x1190);
  *(undefined8 *)(puVar33 + -0x1220) = 0x1071c4;
  uVar21 = unzGoToFirstFile(*(undefined8 *)(puVar33 + -0x1210));
  pSVar6 = ProgressDialog::singleton;
  uVar25 = *(undefined8 *)(puVar33 + -0x1208);
  *(undefined4 *)(puVar33 + -0x11f4) = uVar21;
  uVar21 = *(undefined4 *)(this + 0xe94);
  *(undefined **)(puVar33 + -0x1108) = &_LC12;
  *(undefined8 *)(puVar33 + -0x1188) = 0;
  *(undefined8 *)(puVar33 + -0x1100) = 0;
  *(StrRange **)(puVar33 + -0x11c8) = pSVar2;
  *(undefined8 *)(puVar33 + -0x1220) = 0x107212;
  String::parse_latin1(pSVar2);
  *(undefined8 *)(puVar33 + -0x1208) = uVar25;
  pSVar34 = (String *)(puVar33 + -0x1180);
  *(undefined8 *)(puVar33 + -0x1190) = 0;
  *(char **)(puVar33 + -0x1108) = "Uncompressing Assets";
  *(undefined8 *)(puVar33 + -0x1100) = 0x14;
  *(StrRange **)(puVar33 + -0x11f0) = this_00;
  *(undefined8 *)(puVar33 + -0x1220) = 0x107256;
  String::parse_latin1(this_00);
  *(String **)(puVar33 + -0x11d0) = pSVar34;
  *(undefined8 *)(puVar33 + -0x1220) = 0x107269;
  TTR(pSVar34,(String *)this_00);
  *(undefined8 *)(puVar33 + -0x1168) = 0;
  *(char **)(puVar33 + -0x1108) = "uncompress";
  *(StrRange **)(puVar33 + -0x1200) = (StrRange *)(puVar33 + -0x1168);
  *(undefined8 *)(puVar33 + -0x1100) = 10;
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072aa;
  String::parse_latin1((StrRange *)(puVar33 + -0x1168));
  pCVar5 = *(CowData<char32_t> **)(puVar33 + -0x1200);
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072c3;
  ProgressDialog::add_task(pSVar6,(String *)pCVar5,(int)pSVar34,SUB41(uVar21,0));
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072cb;
  CowData<char32_t>::_unref(pCVar5);
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072d3;
  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar34);
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072db;
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072e3;
  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
  *(undefined8 *)(puVar33 + -0x1220) = 0x1072ef;
  DirAccess::create(puVar33 + -0x11b0,0);
  pSVar34 = ProgressDialog::singleton;
  if (*(int *)(puVar33 + -0x11f4) == 0) {
    *(undefined1 **)(puVar33 + -0x11e8) = puVar33 + -0x1018;
    *(undefined1 **)(puVar33 + -0x11c0) = puVar33 + -0x1170;
    do {
      *(undefined8 *)(puVar33 + -0x1220) = 0;
      *(undefined8 *)(puVar33 + -0x1228) = 0;
      uVar25 = *(undefined8 *)(puVar33 + -0x11e8);
      *(undefined8 *)(puVar33 + -0x1230) = 0x10733e;
      iVar22 = unzGetCurrentFileInfo
                         (*(undefined8 *)(puVar33 + -0x1210),*(undefined8 *)(puVar33 + -0x1208),
                          uVar25,0x4000,0,0);
      if (iVar22 != 0) break;
      pSVar34 = (String *)(puVar33 + -0x11a0);
      *(undefined8 *)(puVar33 + -0x1220) = 0x10735d;
      String::utf8((char *)pSVar34,(int)uVar25);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107368;
      cVar20 = _is_item_checked(this,pSVar34);
      if (((cVar20 != '\0') && (*(long *)(this + 0xe40) != 0)) && (*(int *)(this + 0xe64) != 0)) {
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe60) * 8);
        *(undefined4 *)(puVar33 + -0x11e0) =
             *(undefined4 *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe60) * 4);
        *(undefined8 *)(puVar33 + -0x1220) = 0x1073b5;
        uVar23 = String::hash();
        uVar4 = *(uint *)(puVar33 + -0x11e0);
        uVar32 = CONCAT44(0,uVar4);
        lVar37 = *(long *)(this + 0xe48);
        uVar29 = 1;
        if (uVar23 != 0) {
          uVar29 = uVar23;
        }
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar29 * lVar35;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar32;
        lVar31 = SUB168(auVar11 * auVar15,8);
        uVar23 = *(uint *)(lVar37 + lVar31 * 4);
        uVar30 = SUB164(auVar11 * auVar15,8);
        if (uVar23 != 0) {
          *(String **)(puVar33 + -0x11e0) = pSVar34;
          uVar38 = 0;
          do {
            if (uVar29 == uVar23) {
              lVar37 = *(long *)(this + 0xe40);
              *(EditorAssetInstaller **)(puVar33 + -0x11d8) = this;
              lVar37 = *(long *)(lVar37 + lVar31 * 8);
              *(undefined8 *)(puVar33 + -0x1220) = 0x10746d;
              cVar20 = String::operator==((String *)(lVar37 + 0x10),*(String **)(puVar33 + -0x11e0))
              ;
              this = *(EditorAssetInstaller **)(puVar33 + -0x11d8);
              if (cVar20 != '\0') {
                pSVar34 = *(String **)(puVar33 + -0x11e0);
                if (*(long *)(*(long *)(this + 0xe40) + (ulong)uVar30 * 8) == 0) goto LAB_00107490;
                pSVar6 = (String *)(puVar33 + -0x1198);
                this_01 = (Variant *)(puVar33 + -0x1038);
                *(undefined8 *)(puVar33 + -0x1220) = 0x107715;
                String::path_join(pSVar6);
                *(undefined8 *)(puVar33 + -0x1220) = 0x107724;
                HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                              *)(this + 0xe68),pSVar34);
                *(undefined8 *)(puVar33 + -0x1220) = 0x107731;
                TreeItem::get_metadata((int)this_01);
                *(undefined8 *)(puVar33 + -0x1220) = 0x10773e;
                Variant::operator_cast_to_Dictionary(*(Variant **)(puVar33 + -0x11f0));
                if (Variant::needs_deinit[*(int *)(puVar33 + -0x1038)] != '\0') {
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107fe8;
                  Variant::_clear_internal();
                }
                *(undefined8 *)(puVar33 + -0x1220) = 0x107771;
                Variant::Variant((Variant *)(puVar33 + -0x1058),false);
                *(undefined8 *)(puVar33 + -0x1220) = 0x107780;
                Variant::Variant((Variant *)(puVar33 + -0x1078),"is_dir");
                *(undefined8 *)(puVar33 + -0x1220) = 0x107793;
                Dictionary::get(this_01,*(Variant **)(puVar33 + -0x11f0));
                *(undefined8 *)(puVar33 + -0x1220) = 0x10779b;
                cVar20 = Variant::operator_cast_to_bool(this_01);
                if (Variant::needs_deinit[*(int *)(puVar33 + -0x1038)] != '\0') {
                  puVar33[-0x11e0] = cVar20;
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107fcc;
                  Variant::_clear_internal();
                  cVar20 = puVar33[-0x11e0];
                }
                if (Variant::needs_deinit[*(int *)(puVar33 + -0x1078)] != '\0') {
                  puVar33[-0x11e0] = cVar20;
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107fac;
                  Variant::_clear_internal();
                  cVar20 = puVar33[-0x11e0];
                }
                if (Variant::needs_deinit[*(int *)(puVar33 + -0x1058)] != '\0') {
                  puVar33[-0x11e0] = cVar20;
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107f8c;
                  Variant::_clear_internal();
                  cVar20 = puVar33[-0x11e0];
                }
                iVar22 = (int)pSVar6;
                if (cVar20 == '\0') {
                  uVar32 = *(ulong *)(puVar33 + -0x10d0);
                  if ((long)uVar32 < 0) {
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107a8f;
                    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                    );
LAB_00107a8f:
                    puVar28 = (ulong *)0x0;
                    uVar21 = 0;
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107a9f;
                    unzOpenCurrentFile(*(undefined8 *)(puVar33 + -0x1210));
                  }
                  else {
                    if (uVar32 == 0) goto LAB_00107a8f;
                    uVar36 = uVar32 - 1 | uVar32 - 1 >> 1;
                    uVar36 = uVar36 | uVar36 >> 2;
                    uVar36 = uVar36 | uVar36 >> 4;
                    uVar36 = uVar36 | uVar36 >> 8;
                    uVar36 = uVar36 | uVar36 >> 0x10;
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107909;
                    puVar26 = (ulong *)Memory::alloc_static((uVar36 | uVar36 >> 0x20) + 0x11,false);
                    if (puVar26 == (ulong *)0x0) {
                      *(undefined8 *)(puVar33 + -0x1220) = 0x108249;
                      _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                       "Parameter \"mem_new\" is null.");
                      goto LAB_00107a8f;
                    }
                    puVar28 = puVar26 + 2;
                    *puVar26 = 1;
                    puVar26[1] = uVar32;
                    *(undefined8 *)(puVar33 + -0x1220) = 0x10792e;
                    unzOpenCurrentFile(*(undefined8 *)(puVar33 + -0x1210));
                    uVar21 = (undefined4)puVar26[1];
                    if (1 < *puVar26) {
                      uVar32 = puVar26[1];
                      uVar36 = 0x10;
                      if (uVar32 != 0) {
                        uVar36 = uVar32 - 1 | uVar32 - 1 >> 1;
                        uVar36 = uVar36 | uVar36 >> 2;
                        uVar36 = uVar36 | uVar36 >> 4;
                        uVar36 = uVar36 | uVar36 >> 8;
                        uVar36 = uVar36 | uVar36 >> 0x10;
                        uVar36 = (uVar36 | uVar36 >> 0x20) + 0x11;
                      }
                      *(ulong *)(puVar33 + -0x11e0) = uVar32;
                      *(undefined8 *)(puVar33 + -0x1220) = 0x1080ad;
                      puVar27 = (undefined8 *)Memory::alloc_static(uVar36,false);
                      __n = *(size_t *)(puVar33 + -0x11e0);
                      if (puVar27 == (undefined8 *)0x0) {
                        *(undefined8 *)(puVar33 + -0x1220) = 0x10821f;
                        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                         "Parameter \"mem_new\" is null.");
                      }
                      else {
                        *puVar27 = 1;
                        puVar27[1] = __n;
                        *(undefined8 *)(puVar33 + -0x1220) = 0x1080d5;
                        puVar28 = (ulong *)memcpy(puVar27 + 2,puVar28,__n);
                        LOCK();
                        *puVar26 = *puVar26 - 1;
                        UNLOCK();
                        if (*puVar26 == 0) {
                          *(ulong **)(puVar33 + -0x11e0) = puVar28;
                          *(undefined8 *)(puVar33 + -0x1220) = 0x1080fd;
                          Memory::free_static(puVar26,false);
                          puVar28 = *(ulong **)(puVar33 + -0x11e0);
                        }
                      }
                    }
                  }
                  uVar25 = *(undefined8 *)(puVar33 + -0x1210);
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107952;
                  unzReadCurrentFile(uVar25,puVar28,uVar21);
                  *(undefined8 *)(puVar33 + -0x1220) = 0x10795a;
                  unzCloseCurrentFile(uVar25);
                  plVar1 = *(long **)(puVar33 + -0x11b0);
                  pcVar10 = *(code **)(*plVar1 + 0x1c0);
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107976;
                  String::get_base_dir();
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107981;
                  (*pcVar10)(plVar1,*(undefined8 *)(puVar33 + -0x1200));
                  *(undefined8 *)(puVar33 + -0x1220) = 0x10798b;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x1200));
                  *(undefined8 *)(puVar33 + -0x1220) = 0x10799f;
                  FileAccess::open(*(String **)(puVar33 + -0x11c8),iVar22,(Error *)0x2);
                  plVar1 = *(long **)(puVar33 + -0x1188);
                  if (plVar1 == (long *)0x0) {
                    *(undefined8 *)(puVar33 + -0x1168) = 0;
                    if (*(long *)(puVar33 + -0x1198) != 0) {
                      *(undefined8 *)(puVar33 + -0x1220) = 0x107c3c;
                      CowData<char32_t>::_ref
                                (*(CowData<char32_t> **)(puVar33 + -0x1200),(CowData *)pSVar6);
                    }
                    if (*(long *)(puVar33 + -0x1170) == 0) {
                      lVar35 = 1;
                    }
                    else {
                      lVar35 = *(long *)(*(long *)(puVar33 + -0x1170) + -8) + 1;
                    }
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107c5f;
                    iVar24 = CowData<String>::resize<false>
                                       (*(CowData<String> **)(puVar33 + -0x11c0),lVar35);
                    if (iVar24 == 0) {
                      if (*(long *)(puVar33 + -0x1170) == 0) {
                        lVar37 = -1;
                        lVar35 = 0;
                      }
                      else {
                        lVar35 = *(long *)(*(long *)(puVar33 + -0x1170) + -8);
                        lVar37 = lVar35 + -1;
                        if (-1 < lVar37) {
                          *(undefined8 *)(puVar33 + -0x1220) = 0x107c93;
                          CowData<String>::_copy_on_write(*(CowData<String> **)(puVar33 + -0x11c0));
                          if (*(long *)(*(long *)(puVar33 + -0x1170) + lVar37 * 8) !=
                              *(long *)(puVar33 + -0x1168)) {
                            *(undefined8 *)(puVar33 + -0x1220) = 0x107cb6;
                            CowData<char32_t>::_ref
                                      ((CowData<char32_t> *)
                                       (*(long *)(puVar33 + -0x1170) + lVar37 * 8),
                                       *(CowData **)(puVar33 + -0x1200));
                          }
                          goto LAB_00107cb6;
                        }
                      }
                      *(undefined8 *)(puVar33 + -0x1220) = 0;
                      *(undefined8 *)(puVar33 + -0x1228) = 0;
                      *(undefined **)(puVar33 + -0x1230) = &_LC12;
                      *(char **)(puVar33 + -0x1238) = "size()";
                      *(undefined8 *)(puVar33 + -0x1240) = 0x1081e7;
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar37,lVar35,"p_index",
                                 *(char **)(puVar33 + -0x1238),*(char **)(puVar33 + -0x1230),
                                 (bool)puVar33[-0x1228],(bool)puVar33[-0x1220]);
                    }
                    else {
                      *(undefined8 *)(puVar33 + -0x1220) = 0x1081a2;
                      _err_print_error("push_back","./core/templates/vector.h",0x142,
                                       "Condition \"err\" is true. Returning: true",0);
                    }
LAB_00107cb6:
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107cc0;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x1200));
                  }
                  else {
                    pcVar10 = *(code **)(*plVar1 + 0x2d0);
                    if (puVar28 == (ulong *)0x0) {
                      uVar32 = 0;
                    }
                    else {
                      uVar32 = puVar28[-1];
                    }
                    *(undefined8 *)(puVar33 + -0x1220) = 0x1079cc;
                    (*pcVar10)(plVar1,puVar28,uVar32);
                  }
                  pSVar3 = ProgressDialog::singleton;
                  pSVar2 = *(StrRange **)(puVar33 + -0x11d0);
                  *(undefined8 *)(puVar33 + -0x1180) = 0;
                  *(char **)(puVar33 + -0x1168) = "uncompress";
                  *(undefined8 *)(puVar33 + -0x1160) = 10;
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107a0c;
                  String::parse_latin1(pSVar2);
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107a24;
                  ProgressDialog::task_step
                            (pSVar3,(String *)pSVar2,iVar22,
                             SUB41(*(undefined4 *)(puVar33 + -0x11f4),0));
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107a2c;
                  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
                  if (*(long *)(puVar33 + -0x1188) != 0) {
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107a3e;
                    cVar20 = RefCounted::unreference();
                    if (cVar20 != '\0') {
                      pOVar9 = *(Object **)(puVar33 + -0x1188);
                      *(undefined8 *)(puVar33 + -0x1220) = 0x107bf0;
                      cVar20 = predelete_handler(pOVar9);
                      if (cVar20 != '\0') {
                        pcVar10 = *(code **)(*(long *)pOVar9 + 0x140);
                        *(undefined8 *)(puVar33 + -0x1220) = 0x107c04;
                        (*pcVar10)(pOVar9);
                        *(undefined8 *)(puVar33 + -0x1220) = 0x107c0e;
                        Memory::free_static(pOVar9,false);
                      }
                    }
                  }
                  if (puVar28 != (ulong *)0x0) {
                    puVar28 = puVar28 + -2;
                    LOCK();
                    *puVar28 = *puVar28 - 1;
                    UNLOCK();
                    if (*puVar28 == 0) {
                      *(undefined8 *)(puVar33 + -0x1220) = 0x107a65;
                      Memory::free_static(puVar28,false);
                    }
                  }
                }
                else {
                  *(undefined8 *)(puVar33 + -0x1220) = 0x1077fd;
                  cVar20 = String::ends_with((char *)pSVar6);
                  if (cVar20 != '\0') {
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107832;
                    String::substr((int)*(undefined8 *)(puVar33 + -0x1200),iVar22);
                    if (*(long *)(puVar33 + -0x1198) != *(long *)(puVar33 + -0x1168)) {
                      *(undefined8 *)(puVar33 + -0x1220) = 0x10784c;
                      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
                      uVar25 = *(undefined8 *)(puVar33 + -0x1168);
                      *(undefined8 *)(puVar33 + -0x1168) = 0;
                      *(undefined8 *)(puVar33 + -0x1198) = uVar25;
                    }
                    *(undefined8 *)(puVar33 + -0x1220) = 0x107872;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x1200));
                  }
                  pcVar10 = *(code **)(**(long **)(puVar33 + -0x11b0) + 0x1c0);
                  *(undefined8 *)(puVar33 + -0x1220) = 0x107883;
                  (*pcVar10)(*(long **)(puVar33 + -0x11b0),pSVar6);
                }
                *(undefined8 *)(puVar33 + -0x1220) = 0x10788d;
                Dictionary::~Dictionary(*(Dictionary **)(puVar33 + -0x11f0));
                *(undefined8 *)(puVar33 + -0x1220) = 0x107895;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
                *(undefined8 *)(puVar33 + -0x1220) = 0x10789d;
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar34);
                goto LAB_00107498;
              }
              lVar37 = *(long *)(this + 0xe48);
            }
            uVar38 = uVar38 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar30 + 1) * lVar35;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar32;
            lVar31 = SUB168(auVar12 * auVar16,8);
            uVar23 = *(uint *)(lVar37 + lVar31 * 4);
            uVar30 = SUB164(auVar12 * auVar16,8);
          } while ((uVar23 != 0) &&
                  (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar23 * lVar35, auVar17._8_8_ = 0,
                  auVar17._0_8_ = uVar32, auVar14._8_8_ = 0,
                  auVar14._0_8_ = (ulong)((uVar4 + uVar30) - SUB164(auVar13 * auVar17,8)) * lVar35,
                  auVar18._8_8_ = 0, auVar18._0_8_ = uVar32, uVar38 <= SUB164(auVar14 * auVar18,8)))
          ;
          pSVar34 = *(String **)(puVar33 + -0x11e0);
        }
      }
LAB_00107490:
      *(undefined8 *)(puVar33 + -0x1220) = 0x107498;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar34);
LAB_00107498:
      *(undefined8 *)(puVar33 + -0x1220) = 0x1074a2;
      iVar22 = unzGoToNextFile(*(undefined8 *)(puVar33 + -0x1210));
      *(int *)(puVar33 + -0x11f4) = *(int *)(puVar33 + -0x11f4) + 1;
    } while (iVar22 == 0);
    pSVar34 = ProgressDialog::singleton;
    pSVar2 = *(StrRange **)(puVar33 + -0x1200);
    *(undefined8 *)(puVar33 + -0x1168) = 0;
    *(char **)(puVar33 + -0x1108) = "uncompress";
    lVar35 = *(long *)(puVar33 + -0x1170);
    *(undefined8 *)(puVar33 + -0x1100) = 10;
    *(undefined8 *)(puVar33 + -0x1220) = 0x1074f7;
    String::parse_latin1(pSVar2);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107502;
    ProgressDialog::end_task(pSVar34);
    *(undefined8 *)(puVar33 + -0x1220) = 0x10750a;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107514;
    unzClose(*(undefined8 *)(puVar33 + -0x1210));
    if ((lVar35 == 0) || (*(long *)(lVar35 + -8) == 0)) goto LAB_00107524;
    *(undefined8 *)(puVar33 + -0x1108) = 0;
    *(undefined8 *)(puVar33 + -0x1220) = 0x107ce5;
    String::parse_latin1(*(String **)(puVar33 + -0x1208),"\n\n");
    lVar37 = *(long *)(this + 0xe08);
    *(undefined8 *)(puVar33 + -0x1180) = 0;
    if (lVar37 != 0) {
      *(undefined8 *)(puVar33 + -0x1220) = 0x107d0c;
      CowData<char32_t>::_ref(*(CowData<char32_t> **)(puVar33 + -0x11d0),(CowData *)(this + 0xe08));
    }
    pSVar3 = *(String **)(puVar33 + -0x11f0);
    pSVar6 = (String *)(puVar33 + -0x1198);
    *(undefined8 *)(puVar33 + -0x1190) = 0;
    pSVar34 = (String *)(puVar33 + -0x11a0);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d39;
    String::parse_latin1(pSVar3,"");
    *(undefined8 *)(puVar33 + -0x1198) = 0;
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d54;
    String::parse_latin1(pSVar6,"The following files failed extraction from asset \"%s\":");
    pSVar8 = *(String **)(puVar33 + -0x11c8);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d67;
    TTR(pSVar8,pSVar6);
    pCVar5 = *(CowData<char32_t> **)(puVar33 + -0x1200);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d7c;
    vformat<String>(pCVar5,pSVar8,*(undefined8 *)(puVar33 + -0x11d0));
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d8c;
    String::operator+(pSVar34,(String *)pCVar5);
    lVar37 = 0;
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d97;
    CowData<char32_t>::_unref(pCVar5);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107d9f;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar8);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107da7;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107db6;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
    *(undefined8 *)(puVar33 + -0x1220) = 0x107dc0;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x11d0));
    *(undefined8 *)(puVar33 + -0x1220) = 0x107dca;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x1208));
    pCVar5 = *(CowData<char32_t> **)(puVar33 + -0x1208);
    if (0 < *(long *)(lVar35 + -8)) {
      do {
        lVar37 = lVar37 + 1;
        *(undefined8 *)(puVar33 + -0x1220) = 0x107df4;
        operator+((char *)pCVar5,(String *)&_LC161);
        *(undefined8 *)(puVar33 + -0x1220) = 0x107dff;
        String::operator+=(pSVar34,(String *)pCVar5);
        *(undefined8 *)(puVar33 + -0x1220) = 0x107e07;
        CowData<char32_t>::_unref(pCVar5);
        if (*(long *)(lVar35 + -8) <= lVar37) goto LAB_00107ee8;
      } while (lVar37 != 0xb);
      lVar35 = *(long *)(puVar33 + -0x11d0);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107e2b;
      itos(lVar35);
      pSVar3 = *(String **)(puVar33 + -0x11f0);
      *(undefined8 *)(puVar33 + -0x1190) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107e4b;
      String::parse_latin1(pSVar3,"");
      *(undefined8 *)(puVar33 + -0x1198) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107e66;
      String::parse_latin1(pSVar6,"(and %s more files)");
      pSVar8 = *(String **)(puVar33 + -0x11c8);
      *(String **)(puVar33 + -0x11f0) = pSVar3;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107e7e;
      TTR(pSVar8,pSVar6);
      pCVar5 = *(CowData<char32_t> **)(puVar33 + -0x1200);
      *(long *)(puVar33 + -0x11d0) = lVar35;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107e96;
      vformat<String>(pCVar5,pSVar8,lVar35);
      pCVar7 = *(CowData<char32_t> **)(puVar33 + -0x1208);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ea9;
      operator+((char *)pCVar7,(String *)&_LC161);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107eb4;
      String::operator+=(pSVar34,(String *)pCVar7);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ebc;
      CowData<char32_t>::_unref(pCVar7);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ec4;
      CowData<char32_t>::_unref(pCVar5);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ecc;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar8);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ed4;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ede;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x11f0));
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ee8;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x11d0));
    }
LAB_00107ee8:
    pSVar6 = EditorNode::singleton;
    if (EditorNode::singleton != (String *)0x0) {
      pSVar3 = *(String **)(puVar33 + -0x1208);
      *(undefined8 *)(puVar33 + -0x1108) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f14;
      String::parse_latin1(pSVar3,"");
      pSVar8 = *(String **)(puVar33 + -0x1200);
      *(undefined8 *)(puVar33 + -0x1168) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f34;
      String::parse_latin1(pSVar8,"Warning!");
      this_02 = *(String **)(puVar33 + -0x11d0);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f47;
      TTR(this_02,pSVar8);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f55;
      EditorNode::show_warning(pSVar6,pSVar34);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f5d;
      CowData<char32_t>::_unref((CowData<char32_t> *)this_02);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f65;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar8);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107f6d;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
    }
    *(undefined8 *)(puVar33 + -0x1220) = 0x107f75;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar34);
  }
  else {
    pSVar2 = *(StrRange **)(puVar33 + -0x1200);
    *(undefined8 *)(puVar33 + -0x1168) = 0;
    *(char **)(puVar33 + -0x1108) = "uncompress";
    *(undefined8 *)(puVar33 + -0x1100) = 10;
    *(undefined8 *)(puVar33 + -0x1220) = 0x10814e;
    String::parse_latin1(pSVar2);
    *(undefined8 *)(puVar33 + -0x1220) = 0x108159;
    ProgressDialog::end_task(pSVar34);
    *(undefined8 *)(puVar33 + -0x1220) = 0x108161;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
    *(undefined8 *)(puVar33 + -0x1220) = 0x10816b;
    unzClose(*(undefined8 *)(puVar33 + -0x1210));
    *(undefined1 **)(puVar33 + -0x11c0) = puVar33 + -0x1170;
LAB_00107524:
    pSVar34 = EditorNode::singleton;
    if (EditorNode::singleton != (String *)0x0) {
      *(undefined8 *)(puVar33 + -0x1168) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107554;
      String::parse_latin1(*(String **)(puVar33 + -0x1200),"");
      pSVar6 = *(String **)(puVar33 + -0x11d0);
      *(undefined8 *)(puVar33 + -0x1180) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x107574;
      String::parse_latin1(pSVar6,"Success!");
      *(undefined8 *)(puVar33 + -0x1220) = 0x107584;
      TTR(*(String **)(puVar33 + -0x1208),pSVar6);
      lVar35 = *(long *)(this + 0xe08);
      *(undefined8 *)(puVar33 + -0x1190) = 0;
      if (lVar35 != 0) {
        *(undefined8 *)(puVar33 + -0x1220) = 0x1075ab;
        CowData<char32_t>::_ref
                  (*(CowData<char32_t> **)(puVar33 + -0x11f0),(CowData *)(this + 0xe08));
      }
      pSVar6 = (String *)(puVar33 + -0x11a8);
      *(undefined8 *)(puVar33 + -0x11a0) = 0;
      pSVar3 = (String *)(puVar33 + -0x1198);
      *(undefined8 *)(puVar33 + -0x1220) = 0x1075d5;
      String::parse_latin1((String *)(puVar33 + -0x11a0),"");
      *(undefined8 *)(puVar33 + -0x11a8) = 0;
      *(undefined8 *)(puVar33 + -0x1220) = 0x1075ed;
      String::parse_latin1(pSVar6,"Asset \"%s\" installed successfully!");
      *(undefined8 *)(puVar33 + -0x1220) = 0x1075fb;
      TTR(pSVar3,pSVar6);
      pCVar5 = *(CowData<char32_t> **)(puVar33 + -0x11c8);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107610;
      vformat<String>(pCVar5,pSVar3,*(undefined8 *)(puVar33 + -0x11f0));
      pCVar7 = *(CowData<char32_t> **)(puVar33 + -0x1208);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107623;
      EditorNode::show_warning(pSVar34,(String *)pCVar5);
      *(undefined8 *)(puVar33 + -0x1220) = 0x10762b;
      CowData<char32_t>::_unref(pCVar5);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107633;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
      *(undefined8 *)(puVar33 + -0x1220) = 0x10763b;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107643;
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar33 + -0x11a0));
      *(undefined8 *)(puVar33 + -0x1220) = 0x10764d;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x11f0));
      *(undefined8 *)(puVar33 + -0x1220) = 0x107655;
      CowData<char32_t>::_unref(pCVar7);
      *(undefined8 *)(puVar33 + -0x1220) = 0x10765f;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x11d0));
      *(undefined8 *)(puVar33 + -0x1220) = 0x107669;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar33 + -0x1200));
    }
  }
  *(undefined8 *)(puVar33 + -0x1220) = 0x107675;
  EditorFileSystem::scan_changes();
  if (*(long *)(puVar33 + -0x11b0) != 0) {
    *(undefined8 *)(puVar33 + -0x1220) = 0x107684;
    cVar20 = RefCounted::unreference();
    if (cVar20 != '\0') {
      pOVar9 = *(Object **)(puVar33 + -0x11b0);
      *(undefined8 *)(puVar33 + -0x1220) = 0x10802d;
      cVar20 = predelete_handler(pOVar9);
      if (cVar20 != '\0') {
        pcVar10 = *(code **)(*(long *)pOVar9 + 0x140);
        *(undefined8 *)(puVar33 + -0x1220) = 0x108041;
        (*pcVar10)(pOVar9);
        *(undefined8 *)(puVar33 + -0x1220) = 0x10804b;
        Memory::free_static(pOVar9,false);
      }
    }
  }
  *(undefined8 *)(puVar33 + -0x1220) = 0x107696;
  CowData<String>::_unref(*(CowData<String> **)(puVar33 + -0x11c0));
  lVar35 = *(long *)(puVar33 + -0x11b8);
joined_r0x00107bd5:
  if (lVar35 != 0) {
    *(undefined8 *)(puVar33 + -0x1220) = 0x1076a5;
    cVar20 = RefCounted::unreference();
    if (cVar20 != '\0') {
      pOVar9 = *(Object **)(puVar33 + -0x11b8);
      *(undefined8 *)(puVar33 + -0x1220) = 0x107ffd;
      cVar20 = predelete_handler(pOVar9);
      if (cVar20 != '\0') {
        pcVar10 = *(code **)(*(long *)pOVar9 + 0x140);
        *(undefined8 *)(puVar33 + -0x1220) = 0x108011;
        (*pcVar10)(pOVar9);
        *(undefined8 *)(puVar33 + -0x1220) = 0x10801b;
        Memory::free_static(pOVar9,false);
      }
    }
  }
  if (*(long *)(puVar33 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar33 + -0x1220) = &UNK_00108253;
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetInstaller::ok_pressed() */

void __thiscall EditorAssetInstaller::ok_pressed(EditorAssetInstaller *this)

{
  _install_asset(this);
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
  
  return (uint)CONCAT71(0x115a,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* EditorAssetInstaller::_property_can_revertv(StringName const&) const */

undefined8 EditorAssetInstaller::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorAssetInstaller::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAssetInstaller::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetInstaller,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorAssetInstaller, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void> *this)

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



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114f38;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114f38;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011a010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetInstaller::_getv(StringName const&, Variant&) const */

undefined8 EditorAssetInstaller::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011a010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011a018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetInstaller::_setv(StringName const&, Variant const&) */

undefined8 EditorAssetInstaller::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011a018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
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
LAB_00108b03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108b03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00108b6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00108b6e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool>::get_object
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool> *this)

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
      goto LAB_00108c9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00108c9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00108c9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&> *this)

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
      goto LAB_00108d9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00108d9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00108d9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void>::get_object
          (CallableCustomMethodPointer<EditorAssetInstaller,void> *this)

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
      goto LAB_00108e9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00108e9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00108e9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool>::get_object
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool> *this)

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
      goto LAB_00108f9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00108f9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00108f9d:
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
  if ((code *)PTR__validate_property_0011a020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* EditorAssetInstaller::_validate_propertyv(PropertyInfo&) const */

void EditorAssetInstaller::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011a030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011a030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x115b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1159,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
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
    if ((code *)PTR__notification_0011a038 != Window::_notification) {
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
  if ((code *)PTR__notification_0011a038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
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
    uVar1 = (uint)CONCAT71(0x115b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x115b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAssetInstaller::is_class_ptr(void*) const */

uint EditorAssetInstaller::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109728) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109798) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109808) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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
LAB_00109863:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109863;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_001098ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_001098ce:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAssetInstaller::_get_class_namev() const */

undefined8 * EditorAssetInstaller::_get_class_namev(void)

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
LAB_00109953:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109953;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetInstaller");
      goto LAB_001099be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetInstaller");
LAB_001099be:
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
LAB_00109a43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109a43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00109aae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00109aae:
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
LAB_00109b33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109b33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00109b9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00109b9e:
  return &_get_class_namev()::_class_name_static;
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
      if (StringName::configured == '\0') goto LAB_00109c30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109c30:
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
      if (StringName::configured == '\0') goto LAB_00109c90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109c90:
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
      if (StringName::configured == '\0') goto LAB_00109cf0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109cf0:
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
      if (StringName::configured == '\0') goto LAB_00109d60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109d60:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a050 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a050 == Container::_notification) {
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
    if ((code *)PTR__notification_0011a058 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a058 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a050 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a050 == Container::_notification) {
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



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = BaseButton::set_pressed_no_signal;
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
      if (StringName::configured == '\0') goto LAB_0010a59f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a59f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = BaseButton::set_pressed_no_signal;
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
      if (StringName::configured == '\0') goto LAB_0010a74f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a74f:
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



/* Callable create_custom_callable_function_pointer<EditorAssetInstaller, bool,
   bool>(EditorAssetInstaller*, char const*, void (EditorAssetInstaller::*)(bool, bool)) */

EditorAssetInstaller *
create_custom_callable_function_pointer<EditorAssetInstaller,bool,bool>
          (EditorAssetInstaller *param_1,char *param_2,_func_void_bool_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00115830;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorAssetInstaller>(EditorAssetInstaller*,
   char const*, void (EditorAssetInstaller::*)()) */

EditorAssetInstaller *
create_custom_callable_function_pointer<EditorAssetInstaller>
          (EditorAssetInstaller *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001158c0;
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



/* WARNING: Removing unreachable block (ram,0x0010ac18) */
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



/* WARNING: Removing unreachable block (ram,0x0010aec8) */
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



/* EditorAssetInstaller::get_class() const */

void EditorAssetInstaller::get_class(void)

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
    if (*in_RSI != 0) goto LAB_0010ba2c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010ba2c:
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
              goto LAB_0010bd8b;
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
  if ((float)uVar28 * _LC51 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010bd8b;
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
LAB_0010bd8b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



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
LAB_0010c74c:
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
LAB_0010c635:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_0010c645:
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
                goto LAB_0010c4e3;
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
      goto LAB_0010c107;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010c107;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010c645;
LAB_0010c12d:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010c4e3;
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
              goto LAB_0010c4ef;
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
      if (lVar47 == 0) goto LAB_0010c74c;
      goto LAB_0010c635;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    iVar45 = 0;
LAB_0010c107:
    if ((float)uVar48 * _LC51 < (float)(iVar45 + 1)) goto LAB_0010c12d;
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
LAB_0010c4e3:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010c4ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar43[1] + 8;
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void>::call
          (CallableCustomMethodPointer<EditorAssetInstaller,void> *this,Variant **param_1,
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
      goto LAB_0010caff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010caff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010cbb0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010caff:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010cbb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool>::call
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010cd79;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010cd79;
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
        uVar3 = _LC71;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010ce2a;
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
LAB_0010cd79:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ce2a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool>::call
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
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
      goto LAB_0010d01f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010d01f;
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
        uVar3 = _LC72;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC71;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar5 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar5,bVar8);
          return;
        }
        goto LAB_0010d0d0;
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
LAB_0010d01f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010d0d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetInstaller, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&>::call
          (CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&> *this,
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
        goto LAB_0010d1ae;
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
  _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010d1ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
              if ((code *)PTR__bind_methods_0011a070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a060 !=
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
      local_58 = "SplitContainer";
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
      if ((code *)PTR__bind_methods_0011a068 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
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



/* EditorAssetInstaller::~EditorAssetInstaller() */

void __thiscall EditorAssetInstaller::~EditorAssetInstaller(EditorAssetInstaller *this)

{
  long lVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00115528;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xef0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xee0));
  pvVar6 = *(void **)(this + 0xeb0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xed4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xed0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xed4) = 0;
        *(undefined1 (*) [16])(this + 0xec0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xeb8) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xeb8) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xeb0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0xed4) = 0;
        *(undefined1 (*) [16])(this + 0xec0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010da82;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xeb8),false);
  }
LAB_0010da82:
  if (*(long *)(this + 0xea0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xea0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pvVar6 = *(void **)(this + 0xe70);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xe94) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe90) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe94) = 0;
        *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe78) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xe78) + lVar5) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xe70);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0xe94) = 0;
        *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010db45;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xe78),false);
  }
LAB_0010db45:
  pvVar6 = *(void **)(this + 0xe40);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xe64) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe60) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe64) = 0;
        *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe48) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xe48) + lVar5) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xe40);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0xe64) = 0;
        *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010dbf6;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xe48),false);
  }
LAB_0010dbf6:
  pvVar6 = *(void **)(this + 0xe10);
  if (pvVar6 == (void *)0x0) goto LAB_0010dc7f;
  if (*(int *)(this + 0xe34) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4) != 0) {
      memset(*(void **)(this + 0xe28),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe30) * 4) << 2);
      if (*(int *)(this + 0xe34) == 0) goto LAB_0010dd68;
    }
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + lVar1));
      pvVar6 = *(void **)(this + 0xe10);
    } while ((uint)lVar5 < *(uint *)(this + 0xe34));
    *(undefined4 *)(this + 0xe34) = 0;
    if (pvVar6 == (void *)0x0) goto LAB_0010dc7f;
  }
LAB_0010dd68:
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0xe20),false);
  Memory::free_static(*(void **)(this + 0xe18),false);
  Memory::free_static(*(void **)(this + 0xe28),false);
LAB_0010dc7f:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe08));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe00));
  *(undefined ***)this = &PTR__initialize_classv_00114f38;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* EditorAssetInstaller::~EditorAssetInstaller() */

void __thiscall EditorAssetInstaller::~EditorAssetInstaller(EditorAssetInstaller *this)

{
  ~EditorAssetInstaller(this);
  operator_delete(this,0xef8);
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
            if ((code *)PTR__bind_methods_0011a070 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_0011a078 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_0011a080 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011a070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a060 !=
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
      if ((code *)PTR__bind_methods_0011a088 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011a070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a060 !=
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
      if ((code *)PTR__bind_methods_0011a088 != Container::_bind_methods) {
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



/* EditorAssetInstaller::_initialize_classv() */

void EditorAssetInstaller::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_0011a070 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0011a078 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_0011a080 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorAssetInstaller";
    local_70 = 0;
    local_50 = 0x14;
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
        if (pvVar5 == (void *)0x0) goto LAB_0010f6c6;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010f6c6:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
    if (cVar5 != '\0') goto LAB_0010f81b;
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
      if (cVar5 != '\0') goto LAB_0010f81b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010f81b:
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
    if (cVar5 != '\0') goto LAB_0010fa1b;
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
      if (cVar5 != '\0') goto LAB_0010fa1b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fb1e;
    }
  }
LAB_0010fa1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fb1e:
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
    if (cVar5 != '\0') goto LAB_0010fc2b;
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
      if (cVar5 != '\0') goto LAB_0010fc2b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
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
        if (cVar5 != '\0') goto LAB_0010fc2b;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_0010fe18;
      }
    }
  }
LAB_0010fc2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fe18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010ff1b;
  }
  cVar5 = String::operator==(param_1,"AcceptDialog");
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
      if (cVar5 != '\0') goto LAB_0010ff1b;
    }
    cVar5 = String::operator==(param_1,"Window");
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
        if (cVar5 != '\0') goto LAB_0010ff1b;
      }
      cVar5 = String::operator==(param_1,"Viewport");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_001100be;
      }
    }
  }
LAB_0010ff1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001100be:
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
    if (cVar4 != '\0') goto LAB_001101cb;
  }
  cVar4 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001101cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetInstaller::is_class(String const&) const */

undefined8 __thiscall EditorAssetInstaller::is_class(EditorAssetInstaller *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011031b;
  }
  cVar5 = String::operator==(param_1,"EditorAssetInstaller");
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
      if (cVar5 != '\0') goto LAB_0011031b;
    }
    cVar5 = String::operator==(param_1,"ConfirmationDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
        return uVar6;
      }
      goto LAB_0011041e;
    }
  }
LAB_0011031b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011041e:
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
    if (cVar5 != '\0') goto LAB_0011052b;
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
      if (cVar5 != '\0') goto LAB_0011052b;
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
        if (cVar5 != '\0') goto LAB_0011052b;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_00110718;
      }
    }
  }
LAB_0011052b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110718:
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
    if (cVar5 != '\0') goto LAB_0011081b;
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
      if (cVar5 != '\0') goto LAB_0011081b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0011091e;
    }
  }
LAB_0011081b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011091e:
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
    if (cVar4 != '\0') goto LAB_00110a2b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110a2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
  local_78 = &_LC75;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC75;
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
      goto LAB_00110bdc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110bdc:
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
      goto LAB_00110e41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110e41:
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
      goto LAB_001110f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001110f1:
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
  if ((code *)PTR__get_property_list_0011a090 != Object::_get_property_list) {
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
      goto LAB_001113c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001113c1:
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
      goto LAB_00111671;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111671:
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



/* EditorAssetInstaller::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorAssetInstaller::_get_property_listv(EditorAssetInstaller *this,List *param_1,bool param_2)

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
  local_78 = "EditorAssetInstaller";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAssetInstaller";
  local_98 = 0;
  local_70 = 0x14;
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
      goto LAB_00111921;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111921:
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
  StringName::StringName((StringName *)&local_78,"EditorAssetInstaller",false);
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
      goto LAB_00111bd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111bd1:
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
  if ((code *)PTR__get_property_list_0011a098 != Object::_get_property_list) {
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
      goto LAB_00111ea1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111ea1:
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
  if ((code *)PTR__get_property_list_0011a0a0 != CanvasItem::_get_property_list) {
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
      goto LAB_00112171;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112171:
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
      goto LAB_00112421;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112421:
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
      goto LAB_001126d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001126d1:
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
      goto LAB_00112981;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112981:
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
      goto LAB_00112c31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112c31:
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
      goto LAB_00112ee1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112ee1:
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



/* HashMap<String, Ref<Texture2D>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Texture2D> > > >::operator[](String const&) */

Ref<Texture2D> * __thiscall
HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
::operator[](HashMap<String,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture2D>>>>
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  undefined8 *puVar54;
  uint uVar55;
  long in_FS_OFFSET;
  Ref<Texture2D> *local_90;
  long local_58;
  Ref *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00113710:
    uVar40 = (ulong)uVar55;
    uVar44 = uVar40 * 4;
    uVar48 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar3 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar40 != uVar44);
        goto LAB_001135d2;
      }
      memset(pvVar3,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_001135d6:
      if (iVar45 != 0) {
LAB_001135de:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar52 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar51 != 0) {
          uVar39 = uVar51;
        }
        uVar53 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar52 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar39 == uVar51) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                Ref<Texture2D>::operator=
                          ((Ref<Texture2D> *)
                           (*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18),(Ref *)0x0);
                local_90 = (Ref<Texture2D> *)
                           (*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18);
                goto LAB_001134a8;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar52 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar53 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar55;
      goto LAB_001130e4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001130e4;
    if (iVar45 != 0) goto LAB_001135de;
LAB_0011310a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (Ref<Texture2D> *)0x18;
      goto LAB_001134a8;
    }
    uVar40 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar40 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar43 = *(void **)(this + 8);
    uVar40 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar55 != 0) {
          lVar4 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar39);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar52;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar44;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar43 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            uVar53 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar41;
            if (uVar53 < uVar50) {
              *puVar1 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar41;
              uVar55 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar52;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar44;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar41;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar50 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar46 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar51 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar38 == uVar39) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              local_90 = (Ref<Texture2D> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_001134a8;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00113710;
LAB_001135d2:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001135d6;
    }
LAB_001130e4:
    if ((float)uVar40 * _LC51 < (float)(iVar45 + 1)) goto LAB_0011310a;
  }
  local_58 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
  }
  local_50[0] = (Ref *)0x0;
  Ref<Texture2D>::operator=((Ref<Texture2D> *)local_50,(Ref *)0x0);
  puVar42 = (undefined8 *)operator_new(0x20,"");
  puVar42[2] = 0;
  *puVar42 = 0;
  puVar42[1] = 0;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar42 + 2),(CowData *)&local_58);
  }
  puVar42[3] = 0;
  local_90 = (Ref<Texture2D> *)(puVar42 + 3);
  Ref<Texture2D>::operator=(local_90,local_50[0]);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar54 = *(undefined8 **)(this + 0x20);
  if (puVar54 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar42;
  }
  else {
    *puVar54 = puVar42;
    puVar42[1] = puVar54;
  }
  *(undefined8 **)(this + 0x20) = puVar42;
  uVar38 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar38 != 0) {
    uVar55 = uVar38;
  }
  uVar51 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar52;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar1;
  while (uVar39 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar39 * lVar52;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar52;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar50 = SUB164(auVar11 * auVar27,8);
    puVar54 = puVar42;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar51 = uVar50;
      uVar55 = uVar39;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar52;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    puVar42 = puVar54;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar47 * 8) = puVar42;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001134a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}



/* EditorAssetInstaller::_notificationv(int, bool) */

void __thiscall
EditorAssetInstaller::_notificationv(EditorAssetInstaller *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x20) {
      _notification((int)this);
    }
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  if (param_1 != 0x20) {
    return;
  }
  _notification((int)this);
  return;
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
      if ((float)uVar31 * _LC51 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00113e40;
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
LAB_00113e40:
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00114410:
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
  if (lVar9 == 0) goto LAB_00114410;
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
    goto LAB_00114466;
  }
  if (lVar9 == lVar5) {
LAB_0011438b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00114466:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001142ff;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011438b;
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
LAB_001142ff:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* EditorAssetInstaller::_item_checked_cbk() */

void EditorAssetInstaller::_GLOBAL__sub_I__item_checked_cbk(void)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorAssetInstaller::~EditorAssetInstaller() */

void __thiscall EditorAssetInstaller::~EditorAssetInstaller(EditorAssetInstaller *this)

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
/* CallableCustomMethodPointer<EditorAssetInstaller, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetInstaller, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetInstaller, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetInstaller,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetInstaller,void,bool> *this)

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