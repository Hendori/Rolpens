
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



/* ProjectListItemControl::_explore_button_pressed() */

void __thiscall ProjectListItemControl::_explore_button_pressed(ProjectListItemControl *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_explore_button_pressed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_explore_button_pressed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_explore_button_pressed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_explore_button_pressed()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_explore_button_pressed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_explore_button_pressed()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::_favorite_button_pressed() */

void __thiscall ProjectListItemControl::_favorite_button_pressed(ProjectListItemControl *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_favorite_button_pressed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_favorite_button_pressed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_favorite_button_pressed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_favorite_button_pressed()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_favorite_button_pressed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_favorite_button_pressed()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::set_project_title(String const&) */

void ProjectListItemControl::set_project_title(String *param_1)

{
  Label::set_text(*(String **)(param_1 + 0xa30));
  return;
}



/* ProjectListItemControl::set_project_path(String const&) */

void ProjectListItemControl::set_project_path(String *param_1)

{
  Label::set_text(*(String **)(param_1 + 0xa38));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectListItemControl::set_project_icon(Ref<Texture2D> const&) */

void ProjectListItemControl::set_project_icon(Ref *param_1)

{
  long lVar1;
  Vector2 *pVVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0xa61] = (Ref)0x0;
  TextureRect::set_expand_mode(*(undefined8 *)(param_1 + 0xa28),1);
  pVVar2 = *(Vector2 **)(param_1 + 0xa28);
  EditorScale::get_scale();
  Control::set_custom_minimum_size(pVVar2);
  TextureRect::set_stretch_mode(*(undefined8 *)(param_1 + 0xa28),5);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    TextureRect::set_texture(*(Ref **)(param_1 + 0xa28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::set_last_edited_info(String const&) */

void ProjectListItemControl::set_last_edited_info(String *param_1)

{
  Label::set_text(*(String **)(param_1 + 0xa40));
  return;
}



/* ProjectListItemControl::set_project_version(String const&) */

void ProjectListItemControl::set_project_version(String *param_1)

{
  Label::set_text(*(String **)(param_1 + 0xa48));
  return;
}



/* ProjectListItemControl::should_load_project_icon() const */

ProjectListItemControl __thiscall
ProjectListItemControl::should_load_project_icon(ProjectListItemControl *this)

{
  return this[0xa61];
}



/* ProjectListItemControl::set_selected(bool) */

void __thiscall ProjectListItemControl::set_selected(ProjectListItemControl *this,bool param_1)

{
  this[0xa62] = (ProjectListItemControl)param_1;
  CanvasItem::queue_redraw();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectListItemControl::set_is_favorite(bool) */

void ProjectListItemControl::set_is_favorite(bool param_1)

{
  long lVar1;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::set_modulate(*(Color **)(CONCAT71(in_register_00000039,param_1) + 0xa18));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectListItemControl::set_is_grayed(bool) */

void __thiscall ProjectListItemControl::set_is_grayed(ProjectListItemControl *this,bool param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1) {
    CanvasItem::set_modulate(*(Color **)(this + 0xa10));
    CanvasItem::set_modulate(*(Color **)(this + 0xa20));
  }
  else {
    CanvasItem::set_modulate(*(Color **)(this + 0xa10));
    CanvasItem::set_modulate(*(Color **)(this + 0xa20));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::save_config() */

void __thiscall ProjectList::save_config(ProjectList *this)

{
  ConfigFile::save((String *)(this + 0xa70));
  return;
}



/* ProjectList::_update_icons_async() */

void __thiscall ProjectList::_update_icons_async(ProjectList *this)

{
  *(undefined4 *)(this + 0xc30) = 0;
  Node::set_process(SUB81(this,0));
  return;
}



/* ProjectList::get_project_count() const */

undefined4 __thiscall ProjectList::get_project_count(ProjectList *this)

{
  if (*(long *)(this + 0xc28) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xc28) + -8);
  }
  return 0;
}



/* ProjectList::ensure_project_visible(int) */

void __thiscall ProjectList::ensure_project_visible(ProjectList *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_1;
  lVar3 = *(long *)(this + 0xc28);
  if (lVar2 < 0) {
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + -8);
      goto LAB_00100529;
    }
  }
  else if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + -8);
    if (lVar2 < lVar3) {
      ScrollContainer::ensure_control_visible((Control *)this);
      return;
    }
    goto LAB_00100529;
  }
  lVar3 = 0;
LAB_00100529:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::get_selected_project_keys() const */

ProjectList * __thiscall ProjectList::get_selected_project_keys(ProjectList *this)

{
  return this + 0xc48;
}



/* ProjectList::is_any_project_missing() const */

char __thiscall ProjectList::is_any_project_missing(ProjectList *this)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 0xc28);
  if (lVar2 != 0) {
    lVar4 = 0;
    pcVar3 = (char *)(lVar2 + 0x62);
    while (lVar4 < *(long *)(lVar2 + -8)) {
      cVar1 = *pcVar3;
      lVar4 = lVar4 + 1;
      pcVar3 = pcVar3 + 0x70;
      if (cVar1 != '\0') {
        return cVar1;
      }
    }
  }
  return '\0';
}



/* ProjectList::project_feature_looks_like_version(String const&) */

undefined4 ProjectList::project_feature_looks_like_version(String *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  uVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = String::find_char((wchar32)param_1,0x2e);
  if (iVar1 != -1) {
    String::substr((int)aCStack_28,(wchar32)param_1);
    uVar2 = String::is_numeric();
    CowData<char32_t>::_unref(aCStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::add_project(String const&, bool) */

void __thiscall ProjectList::add_project(ProjectList *this,String *param_1,bool param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = ConfigFile::has_section((String *)(this + 0xa70));
  if (cVar1 == '\0') {
    Variant::Variant((Variant *)local_48,param_2);
    local_58 = "favorite";
    local_60 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_60);
    ConfigFile::set_value((String *)(this + 0xa70),param_1,(Variant *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectListItemControl::ProjectListItemControl() */

void __thiscall ProjectListItemControl::ProjectListItemControl(ProjectListItemControl *this)

{
  long *plVar1;
  code *pcVar2;
  String *pSVar3;
  BoxContainer *pBVar4;
  TextureButton *this_00;
  TextureRect *pTVar5;
  Control *pCVar6;
  Label *pLVar7;
  BoxContainer *this_01;
  Button *this_02;
  long in_FS_OFFSET;
  String local_78 [8];
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  *(undefined ***)this = &PTR__initialize_classv_0011a818;
  this[0xa0c] = (ProjectListItemControl)0x1;
  *(undefined4 *)(this + 0xa60) = 0x100;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  Control::set_focus_mode(this,2);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,true);
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011a4a0;
  pBVar4[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar4);
  BoxContainer::set_alignment(pBVar4,1);
  Node::add_child(this,pBVar4,0,0);
  this_00 = (TextureButton *)operator_new(0xaa0,"");
  TextureButton::TextureButton(this_00);
  postinitialize_handler((Object *)this_00);
  *(TextureButton **)(this + 0xa18) = this_00;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"FavoriteButton");
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa18),1);
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa18),0,0);
  plVar1 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ProjectListItemControl>
            ((ProjectListItemControl *)local_68,(char *)this,
             (_func_void *)"&ProjectListItemControl::_favorite_button_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pTVar5 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(pTVar5);
  postinitialize_handler((Object *)pTVar5);
  *(TextureRect **)(this + 0xa28) = pTVar5;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"ProjectIcon");
  Node::set_name((String *)pTVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa28),4);
  Node::add_child(this,*(undefined8 *)(this + 0xa28),0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,true);
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011a4a0;
  pBVar4[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar4);
  *(BoxContainer **)(this + 0xa10) = pBVar4;
  Control::set_h_size_flags(pBVar4,3);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  pCVar6 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  local_58 = _LC32;
  Control::set_custom_minimum_size((Vector2 *)pCVar6);
  Control::set_mouse_filter(pCVar6,1);
  Node::add_child(*(undefined8 *)(this + 0xa10),pCVar6,0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,false);
  pBVar4[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011a128;
  postinitialize_handler((Object *)pBVar4);
  Node::add_child(*(undefined8 *)(this + 0xa10),pBVar4,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar7,(String *)local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa30) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xa30),2);
  pSVar3 = *(String **)(this + 0xa30);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"ProjectName");
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa30),3);
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xa30),0));
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa30),0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,false);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0011a128;
  postinitialize_handler((Object *)this_01);
  *(BoxContainer **)(this + 0xa58) = this_01;
  Node::add_child(pBVar4,this_01,0,0);
  pCVar6 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  local_58 = _LC164;
  Control::set_custom_minimum_size((Vector2 *)pCVar6);
  Node::add_child(pBVar4,pCVar6,0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,false);
  pBVar4[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011a128;
  postinitialize_handler((Object *)pBVar4);
  Control::set_h_size_flags(pBVar4,3);
  Node::add_child(*(undefined8 *)(this + 0xa10),pBVar4,0,0);
  this_02 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(this_02,(String *)local_68);
  postinitialize_handler((Object *)this_02);
  *(Button **)(this + 0xa20) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar3 = *(String **)(this + 0xa20);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"ExploreButton");
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa20),0));
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa20),0,0);
  plVar1 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ProjectListItemControl>
            ((ProjectListItemControl *)local_68,(char *)this,
             (_func_void *)"&ProjectListItemControl::_explore_button_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)local_68);
  Callable::~Callable((Callable *)local_68);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar7,(String *)local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa38) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar3 = *(String **)(this + 0xa38);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"ProjectPath");
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Label::set_structured_text_bidi_override(*(undefined8 *)(this + 0xa38),2);
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xa38),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa38),3);
  local_58 = __LC15;
  uStack_50 = _UNK_0011b588;
  CanvasItem::set_modulate(*(Color **)(this + 0xa38));
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa38),0,0);
  pTVar5 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(pTVar5);
  postinitialize_handler((Object *)pTVar5);
  *(TextureRect **)(this + 0xa50) = pTVar5;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"ProjectUnsupportedFeatures");
  Node::set_name((String *)pTVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xa50),3);
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa50),0,0);
  CanvasItem::hide();
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar7,(String *)local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa48) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar3 = *(String **)(this + 0xa48);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"ProjectVersion");
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa48),1);
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa48),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar7,(String *)local_68);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa40) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar3 = *(String **)(this + 0xa40);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"LastEditedInfo");
  Node::set_name(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa40),1);
  pSVar3 = *(String **)(this + 0xa40);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Last edited timestamp");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_58 = __LC15;
  uStack_50 = _UNK_0011b588;
  CanvasItem::set_modulate(*(Color **)(this + 0xa40));
  Node::add_child(pBVar4,*(undefined8 *)(this + 0xa40),0,0);
  pCVar6 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  local_58 = _LC164;
  Control::set_custom_minimum_size((Vector2 *)pCVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(pBVar4,pCVar6,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectListItemControl::set_is_missing(bool) */

void __thiscall ProjectListItemControl::set_is_missing(ProjectListItemControl *this,bool param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa60] = (ProjectListItemControl)param_1;
  if (param_1) {
    local_48 = __LC15;
    uStack_40 = _UNK_0011b588;
    CanvasItem::set_modulate(*(Color **)(this + 0xa28));
    pRVar1 = *(Ref **)(this + 0xa20);
    if (set_is_missing(bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&set_is_missing(bool)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&set_is_missing(bool)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_is_missing(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&set_is_missing(bool)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    Button::set_button_icon(pRVar1);
    if (local_58 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_58);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    pSVar4 = *(String **)(this + 0xa20);
    local_58 = (Object *)&_LC19;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x10e248;
    local_50 = 0x2c;
  }
  else {
    pRVar1 = *(Ref **)(this + 0xa20);
    if (set_is_missing(bool)::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&set_is_missing(bool)::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&set_is_missing(bool)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_is_missing(bool)::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&set_is_missing(bool)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    Button::set_button_icon(pRVar1);
    if (local_58 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_58);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    pSVar4 = *(String **)(this + 0xa20);
    local_58 = (Object *)&_LC19;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x10c9cd;
    local_50 = 0x14;
  }
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::update_dock_menu() [clone .part.0] */

void __thiscall ProjectList::update_dock_menu(ProjectList *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  String *local_f8;
  String *local_f0;
  int *local_d8;
  int local_c0;
  int local_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  ProjectList local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (**(code **)(*NativeMenu::singleton + 0x160))(NativeMenu::singleton,5);
  (**(code **)(*NativeMenu::singleton + 0x358))(NativeMenu::singleton,&local_b0);
  lVar3 = *(long *)(this + 0xc28);
  plVar4 = NativeMenu::singleton;
  if (lVar3 != 0) {
    lVar5 = 0;
    local_bc = 0;
    local_c0 = 0;
    do {
      if (*(long *)(lVar3 + -8) <= lVar5) break;
      lVar1 = lVar3 + lVar5 * 0x70;
      if ((*(char *)(lVar1 + 0x61) == '\0') && (*(char *)(lVar1 + 0x62) == '\0')) {
        if (*(char *)(lVar1 + 0x60) == '\0') {
          if (local_c0 != 0) {
            (**(code **)(*plVar4 + 0x218))(plVar4,&local_b0,0xffffffff);
            plVar4 = NativeMenu::singleton;
          }
          local_c0 = 0;
        }
        else {
          local_c0 = local_c0 + 1;
        }
        pcVar2 = *(code **)(*plVar4 + 0x1e0);
        Variant::Variant((Variant *)local_58,(int)lVar5);
        local_78 = 0;
        local_70 = 0;
        create_custom_callable_function_pointer<ProjectList,Variant_const&>
                  (local_88,(char *)this,
                   (_func_void_Variant_ptr *)"&ProjectList::_global_menu_open_project");
        local_90 = 0;
        local_68 = &_LC48;
        local_60 = 2;
        String::parse_latin1((StrRange *)&local_90);
        if (*(long *)(this + 0xc28) != 0) {
          lVar3 = *(long *)(*(long *)(this + 0xc28) + -8);
          if (lVar3 <= lVar5) goto LAB_0010180e;
          local_a8 = 0;
          local_68 = &_LC49;
          local_60 = 3;
          String::parse_latin1((StrRange *)&local_a8);
          lVar1 = *(long *)(this + 0xc28);
          if (lVar1 != 0) {
            lVar3 = *(long *)(lVar1 + -8);
            if (lVar3 <= lVar5) goto LAB_0010180e;
            String::operator+(local_a0,(String *)(lVar1 + lVar5 * 0x70));
            String::operator+((String *)&local_98,local_a0);
            String::operator+((String *)&local_68,(String *)&local_98);
            (*pcVar2)(plVar4,&local_b0,(String *)&local_68,local_88,(Callable *)&local_78,
                      (Variant *)local_58,0,0xffffffffffffffff);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            Callable::~Callable((Callable *)local_88);
            Callable::~Callable((Callable *)&local_78);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_bc = local_bc + 1;
            lVar3 = *(long *)(this + 0xc28);
            plVar4 = NativeMenu::singleton;
            goto LAB_0010162b;
          }
        }
        lVar3 = 0;
LAB_0010180e:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_0010162b:
      lVar5 = lVar5 + 1;
    } while (lVar3 != 0);
    if (local_bc != 0) {
      (**(code **)(*plVar4 + 0x218))(plVar4,&local_b0,0xffffffff);
      plVar4 = NativeMenu::singleton;
    }
  }
  local_d8 = local_58;
  local_f0 = (String *)local_88;
  local_f8 = (String *)&local_90;
  pcVar2 = *(code **)(*plVar4 + 0x1e0);
  local_50 = (undefined1  [16])0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = (undefined *)0x0;
  local_60 = 0;
  create_custom_callable_function_pointer<ProjectList,Variant_const&>
            ((ProjectList *)&local_78,(char *)this,
             (_func_void_Variant_ptr *)"&ProjectList::_global_menu_new_window");
  local_90 = 0;
  String::parse_latin1(local_f8,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"New Window");
  TTR(local_f0,(String *)&local_98);
  (*pcVar2)(plVar4,&local_b0,local_f0,(ProjectList *)&local_78,(Callable *)&local_68,local_d8,0,
            0xffffffffffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Callable::~Callable((Callable *)&local_78);
  Callable::~Callable((Callable *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectList::update_dock_menu() */

void __thiscall ProjectList::update_dock_menu(ProjectList *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*NativeMenu::singleton + 0x150))(NativeMenu::singleton,0);
  if (cVar1 != '\0') {
    update_dock_menu(this);
    return;
  }
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



/* ProjectListItemControl::set_tags(Vector<String> const&, ProjectList*) */

void __thiscall
ProjectListItemControl::set_tags(ProjectListItemControl *this,Vector *param_1,ProjectList *param_2)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  ProjectTag *this_00;
  String *pSVar4;
  long in_FS_OFFSET;
  long local_70;
  ProjectList local_68 [16];
  Callable local_58 [24];
  long local_40;
  
  pSVar4 = *(String **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pSVar4 != (String *)0x0) && (pSVar2 = pSVar4 + *(long *)(pSVar4 + -8) * 8, pSVar2 != pSVar4))
  {
    do {
      this_00 = (ProjectTag *)operator_new(0xa28,"");
      ProjectTag::ProjectTag(this_00,pSVar4,false);
      postinitialize_handler((Object *)this_00);
      Node::add_child(*(undefined8 *)(this + 0xa58),this_00,0,0);
      create_custom_callable_function_pointer<ProjectList,String_const&>
                (local_68,(char *)param_2,(_func_void_String_ptr *)"&ProjectList::add_search_tag");
      local_70 = 0;
      if (*(long *)pSVar4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)pSVar4);
      }
      Callable::bind<String>(local_58,local_68,(CowData<char32_t> *)&local_70);
      ProjectTag::connect_button_to((Callable *)this_00);
      Callable::~Callable(local_58);
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
      pSVar4 = pSVar4 + 8;
      Callable::~Callable((Callable *)local_68);
    } while (pSVar2 != pSVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::set_search_term(String) */

void __thiscall ProjectList::set_search_term(ProjectList *this,CowData *param_2)

{
  if (*(long *)(this + 0xc38) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xc38),param_2);
    return;
  }
  return;
}



/* ProjectList::_on_explore_pressed(String const&) */

void __thiscall ProjectList::_on_explore_pressed(ProjectList *this,String *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  local_38 = 0;
  pcVar1 = *(code **)(*plVar2 + 0x158);
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)param_1);
  }
  (*pcVar1)(plVar2,&local_38,1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* ProjectList::get_single_selected_index() const */

ulong __thiscall ProjectList::get_single_selected_index(ProjectList *this)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  CowData *pCVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xc6c) == 0) goto LAB_00101d06;
  local_38 = 0;
  if (*(int *)(this + 0xc6c) == 1) {
    pCVar5 = *(CowData **)(this + 0xc48);
    if (*(long *)pCVar5 != 0) goto LAB_00101cb0;
  }
  else if (*(long *)(this + 0xc70) != 0) {
    pCVar5 = (CowData *)(this + 0xc70);
LAB_00101cb0:
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,pCVar5);
  }
  lVar1 = *(long *)(this + 0xc28);
  lVar4 = 0;
  for (uVar3 = 0; (lVar1 != 0 && ((long)uVar3 < *(long *)(lVar1 + -8))); uVar3 = uVar3 + 1) {
    cVar2 = String::operator==((String *)(lVar1 + 0x30 + lVar4),(String *)&local_38);
    if (cVar2 != '\0') goto LAB_00101cfe;
    lVar1 = *(long *)(this + 0xc28);
    lVar4 = lVar4 + 0x70;
  }
  uVar3 = 0;
LAB_00101cfe:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
LAB_00101d06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_scan_folder_recursive(String const&, List<String, DefaultAllocator>*, SafeFlag
   const&) */

void ProjectList::_scan_folder_recursive(String *param_1,List *param_2,SafeFlag *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  CowData<char32_t> *this;
  undefined1 (*pauVar7) [16];
  long in_FS_OFFSET;
  Object *local_60;
  int *local_58;
  undefined8 local_50;
  int *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != (SafeFlag)0x0) {
    DirAccess::create(&local_60,2);
    pOVar4 = local_60;
    pcVar1 = *(code **)(*(long *)local_60 + 0x1a8);
    local_48 = (int *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
    iVar6 = (*pcVar1)(pOVar4,(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (iVar6 == 0) {
      (**(code **)(*(long *)local_60 + 0x160))();
      (**(code **)(*(long *)local_60 + 0x168))((CowData<char32_t> *)&local_58);
      while ((local_58 != (int *)0x0 && (1 < (uint)local_58[-2]))) {
        if (*param_3 == (SafeFlag)0x0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          goto joined_r0x00102040;
        }
        cVar5 = (**(code **)(*(long *)local_60 + 0x170))();
        if (cVar5 == '\0') {
LAB_00101f90:
          cVar5 = String::operator==((String *)&local_58,"project.godot");
          if (cVar5 != '\0') {
            (**(code **)(*(long *)local_60 + 0x1b0))((CowData<char32_t> *)&local_48,local_60,1);
            if (*(long *)param_2 == 0) {
              pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined1 (**) [16])param_2 = pauVar7;
              *(undefined4 *)pauVar7[1] = 0;
              *pauVar7 = (undefined1  [16])0x0;
            }
            this = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])this = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
            CowData<char32_t>::_ref(this,(CowData *)&local_48);
            plVar3 = *(long **)param_2;
            lVar2 = plVar3[1];
            *(undefined8 *)(this + 8) = 0;
            *(long **)(this + 0x18) = plVar3;
            *(long *)(this + 0x10) = lVar2;
            if (lVar2 != 0) {
              *(CowData<char32_t> **)(lVar2 + 8) = this;
            }
            plVar3[1] = (long)this;
            if (*plVar3 == 0) {
              *plVar3 = (long)this;
            }
            *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          if ((local_58 != (int *)0x0) && (lVar2 = *(long *)(local_58 + -2), lVar2 != 0)) {
            if (lVar2 < 1) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,0,lVar2,"p_index","size()","",false
                         ,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (*local_58 == 0x2e) goto LAB_00101f90;
          }
          (**(code **)(*(long *)local_60 + 0x1b0))((CowData<char32_t> *)&local_50,local_60,1);
          String::path_join((String *)&local_48);
          _scan_folder_recursive((String *)&local_48,param_2,param_3);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        }
        (**(code **)(*(long *)local_60 + 0x168))((CowData<char32_t> *)&local_48);
        if (local_58 != local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          local_58 = local_48;
          local_48 = (int *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      (**(code **)(*(long *)local_60 + 0x180))();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      local_50 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
      local_58 = (int *)0x0;
      String::parse_latin1
                ((String *)&local_58,"Failed to open the path \"%s\" for scanning (code %d).");
      vformat<String,Error>
                ((CowData<char32_t> *)&local_48,(String *)&local_58,(CowData<char32_t> *)&local_50,
                 iVar6);
      _err_print_error("_scan_folder_recursive","editor/project_manager/project_list.cpp",0x2ff,
                       "Condition \"error != OK\" is true.",(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
joined_r0x00102040:
    if (((local_60 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_60), cVar5 != '\0')) {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
      Memory::free_static(local_60,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectList::_global_menu_new_window(Variant const&) */

void ProjectList::_global_menu_new_window(Variant *param_1)

{
  long lVar1;
  code *pcVar2;
  CowData<char32_t> *this;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 (*local_58) [16];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1 (*) [16])0x0;
  local_50 = 0;
  local_48 = &_LC81;
  local_40 = 2;
  String::parse_latin1((StrRange *)&local_50);
  if (local_58 == (undefined1 (*) [16])0x0) {
    local_58 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_58[1] = 0;
    *local_58 = (undefined1  [16])0x0;
  }
  this = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(this,(CowData *)&local_50);
  }
  lVar1 = *(long *)(*local_58 + 8);
  *(undefined8 *)(this + 8) = 0;
  *(undefined1 (**) [16])(this + 0x18) = local_58;
  *(long *)(this + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(CowData<char32_t> **)(lVar1 + 8) = this;
  }
  lVar1 = *(long *)*local_58;
  *(CowData<char32_t> **)(*local_58 + 8) = this;
  if (lVar1 == 0) {
    *(CowData<char32_t> **)*local_58 = this;
  }
  *(int *)local_58[1] = *(int *)local_58[1] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  plVar3 = (long *)OS::get_singleton();
  lVar1 = *plVar3;
  if (*(code **)(lVar1 + 0x120) == OS::create_instance) {
    pcVar2 = *(code **)(lVar1 + 0x118);
    (**(code **)(lVar1 + 0x100))((CowData<char32_t> *)&local_48,plVar3);
    (*pcVar2)(plVar3,(CowData<char32_t> *)&local_48,&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    (**(code **)(lVar1 + 0x120))(plVar3,&local_58,0);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_global_menu_open_project(Variant const&) */

void __thiscall ProjectList::_global_menu_open_project(ProjectList *this,Variant *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  CowData<char32_t> *this_00;
  long *plVar4;
  long in_FS_OFFSET;
  String aSStack_48 [8];
  undefined1 (*local_40) [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = Variant::operator_cast_to_int(param_1);
  if (-1 < iVar3) {
    if ((*(long *)(this + 0xc28) != 0) && ((long)iVar3 < *(long *)(*(long *)(this + 0xc28) + -8))) {
      local_38 = 0;
      String::parse_latin1((String *)&local_38,"project.godot");
      String::path_join(aSStack_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      local_40 = (undefined1 (*) [16])0x0;
      local_40 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_40[1] = 0;
      *local_40 = (undefined1  [16])0x0;
      this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      CowData<char32_t>::_ref(this_00,(CowData *)aSStack_48);
      lVar1 = *(long *)(*local_40 + 8);
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined1 (**) [16])(this_00 + 0x18) = local_40;
      *(long *)(this_00 + 0x10) = lVar1;
      if (lVar1 != 0) {
        *(CowData<char32_t> **)(lVar1 + 8) = this_00;
      }
      lVar1 = *(long *)*local_40;
      *(CowData<char32_t> **)(*local_40 + 8) = this_00;
      if (lVar1 == 0) {
        *(CowData<char32_t> **)*local_40 = this_00;
      }
      *(int *)local_40[1] = *(int *)local_40[1] + 1;
      plVar4 = (long *)OS::get_singleton();
      lVar1 = *plVar4;
      if (*(code **)(lVar1 + 0x120) == OS::create_instance) {
        pcVar2 = *(code **)(lVar1 + 0x118);
        (**(code **)(lVar1 + 0x100))((String *)&local_38,plVar4);
        (*pcVar2)(plVar4,(String *)&local_38,&local_40,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      }
      else {
        (**(code **)(lVar1 + 0x120))(plVar4,&local_40,0);
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_40);
      CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_48);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_migrate_config() */

void __thiscall ProjectList::_migrate_config(ProjectList *this)

{
  char cVar1;
  bool bVar2;
  List *pLVar3;
  String *pSVar4;
  long lVar5;
  long in_FS_OFFSET;
  long *local_98;
  undefined8 local_90;
  CowData<char32_t> local_88 [8];
  String local_80 [8];
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = FileAccess::exists((String *)(this + 0xa68));
  if (cVar1 == '\0') {
    local_98 = (long *)0x0;
    pLVar3 = (List *)EditorSettings::get_singleton();
    Object::get_property_list(pLVar3,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_98,0));
    if ((local_98 != (long *)0x0) && (lVar5 = *local_98, lVar5 != 0)) {
      do {
        local_90 = 0;
        if (*(long *)(lVar5 + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(lVar5 + 8));
        }
        cVar1 = String::begins_with((char *)&local_90);
        if (cVar1 != '\0') {
          _EDITOR_GET((String *)local_58);
          Variant::operator_cast_to_String((Variant *)local_88);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_78 = 0;
          local_68 = &_LC83;
          local_60 = 2;
          String::parse_latin1((StrRange *)&local_78);
          operator+((char *)local_80,(String *)"Migrating legacy project \'");
          String::operator+((String *)local_70,local_80);
          Variant::Variant((Variant *)local_58,(String *)local_70);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref(local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          String::get_slice((char *)&local_68,(int)(CowData<char32_t> *)&local_90);
          operator+((char *)local_70,(String *)"favorite_projects/");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          pSVar4 = (String *)EditorSettings::get_singleton();
          bVar2 = (bool)EditorSettings::has_setting(pSVar4);
          add_project(this,(String *)local_88,bVar2);
          if (bVar2 != false) {
            pSVar4 = (String *)EditorSettings::get_singleton();
            EditorSettings::erase(pSVar4);
          }
          pSVar4 = (String *)EditorSettings::get_singleton();
          EditorSettings::erase(pSVar4);
          CowData<char32_t>::_unref(local_70);
          CowData<char32_t>::_unref(local_88);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        lVar5 = *(long *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    ConfigFile::save((String *)(this + 0xa70));
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_98);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectList::ProjectList() */

void __thiscall ProjectList::ProjectList(ProjectList *this)

{
  undefined8 uVar1;
  char *pcVar2;
  BoxContainer *this_00;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ScrollContainer::ScrollContainer((ScrollContainer *)this);
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011ab90;
  RefCounted::RefCounted((RefCounted *)(this + 0xa70));
  *(undefined8 *)(this + 0xc28) = 0;
  *(undefined ***)(this + 0xa70) = &PTR__initialize_classv_00119fc8;
  uVar1 = _LC87;
  *(undefined4 *)(this + 0xc30) = 0;
  *(undefined8 *)(this + 0xc18) = uVar1;
  this[0xc34] = (ProjectList)0x0;
  *(undefined8 *)(this + 0xc38) = 0;
  *(undefined4 *)(this + 0xc40) = 0;
  *(undefined8 *)(this + 0xc68) = uVar1;
  *(undefined1 (*) [16])(this + 0xbf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc80) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011a4a0;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xc78) = this_00;
  Control::set_h_size_flags(this_00,3);
  Node::add_child(this,*(undefined8 *)(this + 0xc78),0,0);
  EditorPaths::get_data_dir();
  local_48 = "projects.cfg";
  local_50 = 0;
  local_40 = 0xc;
  String::parse_latin1((StrRange *)&local_50);
  String::path_join((String *)&local_48);
  if (*(char **)(this + 0xa68) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa68));
    pcVar2 = local_48;
    local_48 = (char *)0x0;
    *(char **)(this + 0xa68) = pcVar2;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref(aCStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _migrate_config(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::_bind_methods() */

void ProjectListItemControl::_bind_methods(void)

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
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
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
  local_b0 = 0x10;
  local_b8 = "favorite_pressed";
  String::parse_latin1((StrRange *)&local_d0);
  _local_a8 = (undefined1  [16])0x0;
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
  local_c8 = "ProjectListItemControl";
  local_d8 = 0;
  local_c0 = 0x16;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_b8 = "explore_pressed";
  local_d0 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  _local_a8 = (undefined1  [16])0x0;
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
  local_c8 = "ProjectListItemControl";
  local_d8 = 0;
  local_c0 = 0x16;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_bind_methods() */

void ProjectList::_bind_methods(void)

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
  undefined8 local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
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
  String::parse_latin1((String *)&local_d0,SIGNAL_LIST_CHANGED);
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
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
  local_c8 = "ProjectList";
  local_d8 = 0;
  local_c0 = 0xb;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,SIGNAL_SELECTION_CHANGED);
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
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
  local_c8 = "ProjectList";
  local_d8 = 0;
  local_c0 = 0xb;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,SIGNAL_PROJECT_ASK_OPEN);
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
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
  local_c8 = "ProjectList";
  local_d8 = 0;
  local_c0 = 0xb;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::_notification(int) */

void ProjectListItemControl::_notification(int param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  int in_ESI;
  undefined4 in_register_0000003c;
  StringName *pSVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long in_FS_OFFSET;
  undefined4 uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar11;
  Object *local_70;
  undefined8 local_68;
  undefined4 local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar7 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 0x2a) {
    pSVar7[0xa63] = (StringName)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001035dd:
      CanvasItem::queue_redraw();
      return;
    }
    goto LAB_001038a3;
  }
  if (in_ESI < 0x2b) {
    if (in_ESI == 0x1e) {
      uVar6 = SUB81(&local_58,0);
      if (pSVar7[0xa62] != (StringName)0x0) {
        local_50 = Control::get_size();
        local_58 = 0;
        if (_notification(int)::{lambda()#11}::operator()()::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#11}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
          }
        }
        if (_notification(int)::{lambda()#10}::operator()()::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#10}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
          }
        }
        uVar6 = SUB81(&local_58,0);
        Control::get_theme_stylebox((StringName *)&local_70,pSVar7);
        CanvasItem::draw_style_box((Ref *)pSVar7,(Rect2 *)&local_70);
        if (local_70 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar3 = local_70;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_70);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
        }
      }
      if (pSVar7[0xa63] != (StringName)0x0) {
        local_50 = Control::get_size();
        local_58 = 0;
        if (_notification(int)::{lambda()#13}::operator()()::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#13}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
          }
        }
        if (_notification(int)::{lambda()#12}::operator()()::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#12}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
          }
        }
        Control::get_theme_stylebox((StringName *)&local_70,pSVar7);
        CanvasItem::draw_style_box((Ref *)pSVar7,(Rect2 *)&local_70);
        if (local_70 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_70);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)local_70 + 0x140))(local_70);
              Memory::free_static(local_70,false);
            }
          }
        }
      }
      if (_notification(int)::{lambda()#15}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#15}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
        }
      }
      if (_notification(int)::{lambda()#14}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#14}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
        }
      }
      local_58 = Control::get_theme_color
                           (pSVar7,(StringName *)
                                   &_notification(int)::{lambda()#14}::operator()()::sname);
      Control::get_size();
      fVar11 = _LC13 + extraout_XMM0_Db;
      uVar10 = Control::get_size();
      local_68 = CONCAT44(fVar11,uVar10);
      Control::get_size();
      local_5c = extraout_XMM0_Db_00 + _LC13;
      local_60 = 0;
      CanvasItem::draw_line
                ((Vector2 *)pSVar7,(Vector2 *)&local_60,(Color *)&local_68,_LC101,(bool)uVar6);
    }
    else if (in_ESI == 0x29) {
      pSVar7[0xa63] = (StringName)0x1;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001038a3;
      goto LAB_001035dd;
    }
  }
  else if (in_ESI == 0x2d) {
    if (pSVar7[0xa61] != (StringName)0x0) {
      pRVar2 = *(Ref **)(pSVar7 + 0xa28);
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_70);
      TextureRect::set_texture(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
    }
    Control::begin_bulk_theme_override();
    pSVar1 = *(StringName **)(pSVar7 + 0xa30);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_theme_font((StringName *)&local_70,pSVar7);
    Control::add_theme_font_override(pSVar1,(Ref *)(SceneStringNames::singleton + 0xa0));
    if (local_70 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_70);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_70 + 0x140))(local_70);
          Memory::free_static(local_70,false);
        }
      }
    }
    pSVar1 = *(StringName **)(pSVar7 + 0xa30);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_theme_font_size
              (pSVar7,(StringName *)&_notification(int)::{lambda()#3}::operator()()::sname);
    Control::add_theme_font_size_override(pSVar1,(int)SceneStringNames::singleton + 0xa8);
    pSVar1 = *(StringName **)(pSVar7 + 0xa30);
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    local_58 = Control::get_theme_color(pSVar7,(StringName *)(SceneStringNames::singleton + 0xb0));
    Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
    Control::end_bulk_theme_override();
    pSVar1 = *(StringName **)(pSVar7 + 0xa38);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    local_58 = Control::get_theme_color(pSVar7,(StringName *)(SceneStringNames::singleton + 0xb0));
    Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
    pRVar2 = *(Ref **)(pSVar7 + 0xa50);
    if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_70);
    TextureRect::set_texture(pRVar2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
    pRVar2 = *(Ref **)(pSVar7 + 0xa18);
    if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_70);
    TextureButton::set_texture_normal(pRVar2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
    pRVar2 = *(Ref **)(pSVar7 + 0xa20);
    if (pSVar7[0xa60] == (StringName)0x0) {
      if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
        puVar9 = &_notification(int)::{lambda()#9}::operator()()::sname;
        pcVar8 = (char *)&_notification(int)::{lambda()#9}::operator()()::sname;
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
        if (iVar5 != 0) {
          uVar6 = 200;
LAB_001039d0:
          _scs_create(pcVar8,(bool)uVar6);
          __cxa_atexit(StringName::~StringName,pcVar8,&__dso_handle);
          __cxa_guard_release(puVar9);
        }
      }
    }
    else if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
      puVar9 = &_notification(int)::{lambda()#8}::operator()()::sname;
      pcVar8 = (char *)&_notification(int)::{lambda()#8}::operator()()::sname;
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
      uVar6 = 0xbd;
      if (iVar5 != 0) goto LAB_001039d0;
    }
    Control::get_editor_theme_icon((StringName *)&local_70);
    Button::set_button_icon(pRVar2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001038a3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::erase(String const&)
   [clone .isra.0] */

void __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  CowData<char32_t> *this_00;
  undefined4 uVar4;
  long lVar5;
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
  uint uVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint *puVar30;
  uint *puVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar22 = _lookup_pos(this,param_1,&local_44);
  uVar21 = local_44;
  if (cVar22 != '\0') {
    uVar33 = (ulong)local_44;
    lVar5 = *(long *)(this + 0x10);
    lVar6 = *(long *)(this + 0x18);
    uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar28 = CONCAT44(0,uVar23);
    local_44 = *(uint *)(lVar5 + uVar33 * 4);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(local_44 + 1) * lVar7;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    lVar24 = SUB168(auVar9 * auVar15,8) * 4;
    uVar26 = SUB164(auVar9 * auVar15,8);
    puVar31 = (uint *)(lVar6 + lVar24);
    if ((*puVar31 == 0) ||
       (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)*puVar31 * lVar7, auVar16._8_8_ = 0,
       auVar16._0_8_ = uVar28, auVar11._8_8_ = 0,
       auVar11._0_8_ = (ulong)((uVar23 + uVar26) - SUB164(auVar10 * auVar16,8)) * lVar7,
       auVar17._8_8_ = 0, auVar17._0_8_ = uVar28, SUB164(auVar11 * auVar17,8) == 0)) {
      uVar32 = (ulong)local_44;
    }
    else {
      lVar8 = *(long *)(this + 8);
      uVar29 = (ulong)local_44;
      uVar32 = (ulong)uVar26;
      while( true ) {
        puVar25 = (uint *)(lVar24 + lVar8);
        puVar1 = (uint *)(lVar8 + uVar29 * 4);
        puVar30 = (uint *)(uVar29 * 4 + lVar6);
        puVar2 = (undefined4 *)(lVar5 + (ulong)*puVar25 * 4);
        puVar3 = (undefined4 *)(lVar5 + (ulong)*puVar1 * 4);
        uVar4 = *puVar3;
        *puVar3 = *puVar2;
        *puVar2 = uVar4;
        uVar26 = *puVar31;
        *puVar31 = *puVar30;
        *puVar30 = uVar26;
        uVar26 = *puVar25;
        *puVar25 = *puVar1;
        local_44 = (uint)uVar32;
        *puVar1 = uVar26;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(local_44 + 1) * lVar7;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar28;
        uVar27 = SUB168(auVar14 * auVar20,8);
        lVar24 = uVar27 * 4;
        puVar31 = (uint *)(lVar6 + lVar24);
        if ((*puVar31 == 0) ||
           (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)*puVar31 * lVar7, auVar18._8_8_ = 0,
           auVar18._0_8_ = uVar28, auVar13._8_8_ = 0,
           auVar13._0_8_ =
                (ulong)((SUB164(auVar14 * auVar20,8) + uVar23) - SUB164(auVar12 * auVar18,8)) *
                lVar7, auVar19._8_8_ = 0, auVar19._0_8_ = uVar28, SUB164(auVar13 * auVar19,8) == 0))
        break;
        uVar29 = uVar32;
        uVar32 = uVar27 & 0xffffffff;
      }
    }
    lVar24 = *(long *)this;
    *(undefined4 *)(lVar6 + uVar32 * 4) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)(lVar24 + uVar33 * 8));
    uVar23 = *(int *)(this + 0x24) - 1;
    *(uint *)(this + 0x24) = uVar23;
    if (uVar21 < uVar23) {
      lVar24 = *(long *)this;
      this_00 = (CowData<char32_t> *)(lVar24 + uVar33 * 8);
      *(undefined8 *)this_00 = 0;
      CowData<char32_t>::_ref(this_00,(CowData *)(lVar24 + (ulong)uVar23 * 8));
      CowData<char32_t>::_unref
                ((CowData<char32_t> *)(*(long *)this + (ulong)*(uint *)(this + 0x24) * 8));
      lVar24 = *(long *)(this + 0x10);
      *(undefined4 *)(lVar24 + uVar33 * 4) =
           *(undefined4 *)(lVar24 + (ulong)*(uint *)(this + 0x24) * 4);
      *(uint *)(*(long *)(this + 8) +
               (ulong)*(uint *)(lVar24 + (ulong)*(uint *)(this + 0x24) * 4) * 4) = uVar21;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* ProjectList::find_projects_multiple(Vector<String> const&) */

void __thiscall ProjectList::find_projects_multiple(ProjectList *this,Vector *param_1)

{
  Settings *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  Thread *this_00;
  AcceptDialog *this_01;
  BoxContainer *this_02;
  Label *this_03;
  ProgressBar *this_04;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xc88) == 0) && (((byte)this[0x2fa] & 0x40) != 0)) {
    this_01 = (AcceptDialog *)operator_new(0xdb0,"");
    AcceptDialog::AcceptDialog(this_01);
    postinitialize_handler((Object *)this_01);
    *(AcceptDialog **)(this + 0xc88) = this_01;
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Scanning");
    TTR((String *)local_58,(String *)&local_68);
    Window::set_title((String *)this_01);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    uVar2 = *(undefined8 *)(this + 0xc88);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Cancel");
    TTR((String *)local_58,(String *)&local_68);
    AcceptDialog::set_ok_button_text(uVar2,(String *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    this_02 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_02,true);
    this_02[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_02 = &PTR__initialize_classv_0011a4a0;
    postinitialize_handler((Object *)this_02);
    Node::add_child(*(undefined8 *)(this + 0xc88),this_02,0,0);
    this_03 = (Label *)operator_new(0xad8,"");
    local_58[0] = 0;
    Label::Label(this_03,(String *)local_58);
    postinitialize_handler((Object *)this_03);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Scanning for projects...");
    TTR((String *)local_58,(String *)&local_68);
    Label::set_text((String *)this_03);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Node::add_child(this_02,this_03,0,0);
    this_04 = (ProgressBar *)operator_new(0xa48,"");
    ProgressBar::ProgressBar(this_04);
    postinitialize_handler((Object *)this_04);
    ProgressBar::set_indeterminate(SUB81(this_04,0));
    Node::add_child(this_02,this_04,0,0);
    Node::add_child(this,*(undefined8 *)(this + 0xc88),0,0);
    plVar3 = *(long **)(this + 0xc88);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<ProjectList>
              ((ProjectList *)local_58,(char *)this,(_func_void *)"&ProjectList::_scan_finished");
    (*pcVar4)(plVar3,SceneStringNames::singleton + 0x268,(String *)local_58,0);
    Callable::~Callable((Callable *)local_58);
    plVar3 = *(long **)(this + 0xc88);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<ProjectList>
              ((ProjectList *)local_58,(char *)this,(_func_void *)"&ProjectList::_scan_finished");
    StringName::StringName((StringName *)&local_60,"canceled",false);
    (*pcVar4)(plVar3,(String *)&local_60,(String *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
  }
  puVar5 = (undefined8 *)operator_new(0x28,"");
  *puVar5 = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar5 + 4) = 0;
  *(undefined8 **)(this + 0xc80) = puVar5;
  if (puVar5[2] != *(long *)(param_1 + 8)) {
    CowData<String>::_ref((CowData<String> *)(puVar5 + 2),(CowData *)(param_1 + 8));
    puVar5 = *(undefined8 **)(this + 0xc80);
  }
  *(undefined1 *)(puVar5 + 4) = 1;
  this_00 = (Thread *)operator_new(0x10,"");
  Thread::Thread(this_00);
  pSVar1 = *(Settings **)(this + 0xc80);
  *(Thread **)pSVar1 = this_00;
  local_58[0] = CONCAT44(local_58[0]._4_4_,1);
  Thread::start((_func_void_void_ptr *)this_00,_scan_thread,pSVar1);
  if (*(long *)(this + 0xc88) != 0) {
    Window::reset_size();
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xc88));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::Item::TEMPNAMEPLACEHOLDERVALUE(ProjectList::Item const&) [clone .isra.0] */

void __thiscall ProjectList::Item::operator=(Item *this,Item *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<String>::_ref((CowData<String> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  if (*(long *)(this + 0x28) != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  if (*(long *)(this + 0x30) != *(long *)(param_1 + 0x30)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  if (*(long *)(this + 0x38) != *(long *)(param_1 + 0x38)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  if (*(long *)(this + 0x40) != *(long *)(param_1 + 0x40)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<String>::_ref((CowData<String> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
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



/* ProjectList::_scan_thread(void*) */

void ProjectList::_scan_thread(void *param_1)

{
  char cVar1;
  String *pSVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<String>::_copy_on_write((CowData<String> *)((long)param_1 + 0x10));
  pSVar2 = *(String **)((long)param_1 + 0x10);
  CowData<String>::_copy_on_write((CowData<String> *)((long)param_1 + 0x10));
  pSVar3 = *(String **)((long)param_1 + 0x10);
  if (pSVar3 != (String *)0x0) {
    pSVar3 = pSVar3 + *(long *)(pSVar3 + -8) * 8;
  }
  do {
    if (pSVar3 == pSVar2) {
LAB_00104b3d:
      cVar1 = is_print_verbose_enabled();
      if (cVar1 != '\0') {
        local_78 = 0;
        local_68 = "Found %d project(s).";
        local_60 = 0x14;
        String::parse_latin1((StrRange *)&local_78);
        vformat<int>((String *)local_70,(int)(StrRange *)&local_78);
        Variant::Variant((Variant *)local_58,(String *)local_70);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      }
      *(undefined1 *)((long)param_1 + 0x20) = 0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    cVar1 = is_print_verbose_enabled();
    if (cVar1 != '\0') {
      local_78 = 0;
      if (*(long *)pSVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pSVar2);
      }
      local_80 = 0;
      local_68 = "Scanning for projects in \"%s\".";
      local_60 = 0x1e;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>(local_70,(StrRange *)&local_80,(CowData<char32_t> *)&local_78);
      Variant::Variant((Variant *)local_58,(String *)local_70);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    _scan_folder_recursive(pSVar2,(List *)((long)param_1 + 0x18),(SafeFlag *)((long)param_1 + 0x20))
    ;
    if (*(SafeFlag *)((long)param_1 + 0x20) == (SafeFlag)0x0) {
      cVar1 = is_print_verbose_enabled();
      if (cVar1 != '\0') {
        Variant::Variant((Variant *)local_58,"Scan aborted.");
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      goto LAB_00104b3d;
    }
    pSVar2 = pSVar2 + 8;
  } while( true );
}



/* ProjectListItemControl::set_unsupported_features(Vector<String>) [clone .part.0] */

void __thiscall
ProjectListItemControl::set_unsupported_features(ProjectListItemControl *this,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  wchar32 wVar8;
  long lVar9;
  int iVar10;
  CowData<char32_t> *this_00;
  long lVar11;
  long in_FS_OFFSET;
  CowData<String> *local_d0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = "";
  local_98 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_98);
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    iVar10 = 0;
    lVar11 = 0;
    do {
      if (*(long *)(lVar6 + -8) <= lVar11) {
        if (0 < *(long *)(lVar6 + -8)) {
          local_58 = (char *)0x0;
          String::parse_latin1((String *)&local_58,", ");
          String::join((Vector *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"\n");
          local_80 = 0;
          String::parse_latin1((String *)&local_80,"");
          local_88 = 0;
          String::parse_latin1
                    ((String *)&local_88,
                     "This project uses features unsupported by the current build:");
          TTR(local_78,(String *)&local_88);
          String::operator+(local_68,local_78);
          String::operator+((String *)&local_58,local_68);
          String::operator+=((String *)&local_98,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        }
        break;
      }
      lVar9 = (long)iVar10;
      wVar8 = (int)lVar6 + (int)(lVar9 * 8);
      iVar4 = String::find_char(wVar8,0x2e);
      if (iVar4 == -1) {
LAB_00105048:
        iVar10 = iVar10 + 1;
        lVar9 = (long)iVar10;
      }
      else {
        String::substr((int)(CowData<char32_t> *)&local_58,wVar8);
        cVar3 = String::is_numeric();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar3 == '\0') goto LAB_00105048;
        lVar6 = *(long *)(param_2 + 8);
        if (lVar6 == 0) {
LAB_001050f0:
          lVar7 = 0;
LAB_00105114:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar7,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 <= lVar11) goto LAB_00105114;
        String::split((char *)local_68,(bool)((char)lVar6 + (char)(lVar9 * 8)),0x10d950);
        if ((local_60 != 0) && (1 < *(long *)(local_60 + -8))) {
          iVar4 = String::to_int();
          if (local_60 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(local_60 + -8);
            if (1 < lVar7) {
              iVar5 = String::to_int();
              if ((iVar4 != 4) || (3 < iVar5)) goto LAB_00104e02;
              lVar6 = *(long *)(param_2 + 8);
              if (lVar6 != 0) goto LAB_00104f70;
LAB_001050ae:
              lVar6 = 0;
LAB_001050b1:
              _err_print_index_error
                        ("remove_at","./core/templates/cowdata.h",0xe4,lVar11,lVar6,"p_index",
                         "size()","",false,false);
              goto LAB_00104fe2;
            }
          }
          lVar11 = 1;
          goto LAB_00105114;
        }
LAB_00104e02:
        local_70 = 0;
        local_58 = "\n";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_70);
        if (*(long *)(param_2 + 8) == 0) goto LAB_001050f0;
        lVar7 = *(long *)(*(long *)(param_2 + 8) + -8);
        if (lVar7 <= lVar11) goto LAB_00105114;
        local_88 = 0;
        local_58 = "";
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_88);
        local_58 = "This project was last edited in a different Godot version: ";
        local_90 = 0;
        local_50 = 0x3b;
        String::parse_latin1((StrRange *)&local_90);
        TTR((String *)&local_80,(String *)&local_90);
        String::operator+(local_78,(String *)&local_80);
        String::operator+((String *)&local_58,local_78);
        String::operator+=((String *)&local_98,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        lVar6 = *(long *)(param_2 + 8);
        if (lVar6 == 0) goto LAB_001050ae;
LAB_00104f70:
        local_d0 = (CowData<String> *)(param_2 + 8);
        lVar6 = *(long *)(lVar6 + -8);
        if (lVar6 <= lVar11) goto LAB_001050b1;
        CowData<String>::_copy_on_write(local_d0);
        lVar6 = *(long *)(param_2 + 8);
        if (lVar6 == 0) {
          lVar7 = -1;
        }
        else {
          lVar7 = *(long *)(lVar6 + -8) + -1;
        }
        this_00 = (CowData<char32_t> *)(lVar6 + lVar11 * 8);
        if (lVar11 < lVar7) {
          do {
            if (*(long *)this_00 != *(long *)(this_00 + 8)) {
              CowData<char32_t>::_unref(this_00);
              uVar1 = *(undefined8 *)(this_00 + 8);
              *(undefined8 *)(this_00 + 8) = 0;
              *(undefined8 *)this_00 = uVar1;
            }
            lVar11 = lVar11 + 1;
            this_00 = this_00 + 8;
          } while (lVar7 != lVar11);
        }
        CowData<String>::resize<false>(local_d0,lVar7);
LAB_00104fe2:
        CowData<String>::_unref((CowData<String> *)&local_60);
      }
      lVar6 = *(long *)(param_2 + 8);
      lVar11 = lVar9;
    } while (lVar6 != 0);
  }
  if ((local_98 == 0) || (*(uint *)(local_98 + -8) < 2)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  else {
    Control::set_tooltip_text(*(String **)(this + 0xa48));
    Control::set_tooltip_text(*(String **)(this + 0xa50));
    CanvasItem::show();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectListItemControl::set_unsupported_features(Vector<String>) */

void __thiscall ProjectListItemControl::set_unsupported_features(undefined8 param_1,long param_2)

{
  if ((*(long *)(param_2 + 8) != 0) && (0 < *(long *)(*(long *)(param_2 + 8) + -8))) {
    set_unsupported_features();
    return;
  }
  CanvasItem::hide();
  return;
}



/* ProjectList::find_projects(String const&) */

void __thiscall ProjectList::find_projects(ProjectList *this,String *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  Vector aVStack_38 [8];
  CowData<char32_t> *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (*(long *)param_1 == 0) {
    local_30 = (CowData<char32_t> *)0x0;
    iVar2 = CowData<String>::resize<false>((CowData<String> *)&local_30,1);
    lVar3 = 0;
    if (iVar2 != 0) goto LAB_0010537f;
LAB_001053cf:
    if (local_30 == (CowData<char32_t> *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_30 + -8);
      if (0 < lVar4) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_30);
        if (lVar3 != *(long *)local_30) {
          CowData<char32_t>::_ref(local_30,(CowData *)&local_28);
        }
        goto LAB_0010536e;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar4,"p_index","size()","",false,false);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)param_1);
    lVar3 = local_28;
    local_30 = (CowData<char32_t> *)0x0;
    iVar2 = CowData<String>::resize<false>((CowData<String> *)&local_30,1);
    if (iVar2 == 0) goto LAB_001053cf;
  }
LAB_0010536e:
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
  }
LAB_0010537f:
  find_projects_multiple(this,aVStack_38);
  CowData<String>::_unref((CowData<String> *)&local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* ProjectList::load_project_data(String const&, bool) */

ProjectList * __thiscall
ProjectList::load_project_data(ProjectList *this,String *param_1,bool param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RefCounted *this_00;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  CowData *pCVar9;
  wchar32 wVar10;
  long lVar11;
  long in_FS_OFFSET;
  String *local_1b0;
  Variant *local_1a8;
  Variant *local_190;
  ulong local_150;
  int local_140;
  bool local_130;
  bool local_12c;
  CowData<char32_t> *local_128;
  String local_110 [8];
  long local_108;
  long local_100;
  Variant local_f8 [8];
  Variant local_f0 [8];
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  Object *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"project.godot");
  String::path_join(local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00119fc8;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    this_00 = (RefCounted *)0x0;
  }
  iVar4 = ConfigFile::load((String *)this_00);
  local_108 = 0;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"Unnamed Project");
  TTR((String *)&local_100,(String *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (iVar4 == 0) {
    Variant::Variant((Variant *)local_78,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"config/name");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"application");
    ConfigFile::get_value((String *)local_58,(String *)this_00,(Variant *)&local_a8);
    Variant::operator_cast_to_String((Variant *)&local_88);
    if (local_108 != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      local_108 = local_88;
      local_88 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_190 = (Variant *)&local_a8;
    local_1a8 = (Variant *)local_78;
    local_1b0 = (String *)local_58;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((local_108 != 0) && (1 < *(uint *)(local_108 + -8))) {
      String::xml_unescape();
      if (local_100 != local_88) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        local_100 = local_88;
        local_88 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    Variant::Variant(local_1a8,0);
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"config_version");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_98);
    local_140 = Variant::operator_cast_to_int((Variant *)local_1b0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_130 = 5 < local_140;
  }
  else {
    local_130 = false;
    local_140 = 0;
  }
  local_190 = (Variant *)&local_a8;
  local_1a8 = (Variant *)local_78;
  local_1b0 = (String *)local_58;
  Variant::Variant(local_1a8,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"config/description");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"application");
  ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_98);
  Variant::operator_cast_to_String(local_f8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_80 = 0;
  Variant::Variant(local_1a8,(Vector *)&local_88);
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"config/tags");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"application");
  ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_b0);
  Variant::operator_cast_to_Vector(local_190);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<String>::_unref((CowData<String> *)&local_80);
  Variant::Variant(local_1a8,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"run/main_scene");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"application");
  ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_98);
  Variant::operator_cast_to_String(local_f0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(local_1a8,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"config/icon");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"application");
  ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_98);
  Variant::operator_cast_to_String((Variant *)&local_e8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = String::begins_with((char *)&local_e8);
  if (cVar2 != '\0') {
    local_98 = 0;
    String::parse_latin1((String *)&local_98,".godot/uid_cache.bin");
    String::path_join((String *)&local_88);
    FileAccess::open((String *)&local_b8,(int)(String *)&local_88,(Error *)0x1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((int)local_c0 == 0) {
      ResourceUID::get_path_from_cache((Ref *)&local_88,(String *)&local_b8);
      if (local_e8 != local_88) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_88;
        local_88 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if ((local_e8 == 0) || (*(uint *)(local_e8 + -8) < 2)) {
        local_98 = 0;
        if (*(long *)param_1 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_1);
        }
        local_b0 = 0;
        String::parse_latin1
                  ((String *)&local_b0,
                   "Could not load icon from UID for project at path \"%s\". Make sure UID cache exists."
                  );
        vformat<String>((String *)&local_88,(String *)&local_b0,(String *)&local_98);
        _err_print_error("load_project_data","editor/project_manager/project_list.cpp",0x1f5,
                         (String *)&local_88,0,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
    }
    else {
      String::parse_latin1((String *)&local_e8,"");
    }
    if (((local_b8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_b8), cVar2 != '\0')) {
      (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
      Memory::free_static(local_b8,false);
    }
  }
  local_80 = 0;
  Variant::Variant(local_1a8,(Vector *)&local_88);
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"config/features");
  local_b8 = (Object *)0x0;
  String::parse_latin1((String *)&local_b8,"application");
  ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_b8);
  Variant::operator_cast_to_Vector((Variant *)&local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar11 = 0;
  CowData<String>::_unref((CowData<String> *)&local_80);
  ProjectSettings::get_unsupported_features((Vector *)&local_88);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"?");
  if (local_90 != 0) {
    while (lVar11 < *(long *)(local_90 + -8)) {
      wVar10 = (int)local_90 + (int)(lVar11 * 8);
      iVar5 = String::find_char(wVar10,0x2e);
      if (iVar5 != -1) {
        String::substr((int)(String *)&local_b0,wVar10);
        cVar2 = String::is_numeric();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (cVar2 != '\0') {
          if (local_90 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(local_90 + -8);
            if (lVar11 < lVar8) {
              pCVar9 = (CowData *)(local_90 + lVar11 * 8);
              if (local_e0 != *(long *)pCVar9) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,pCVar9);
              }
              break;
            }
          }
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar8,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      lVar11 = lVar11 + 1;
      if (local_90 == 0) break;
    }
  }
  if (local_140 < 5) {
    local_b0 = 0;
    if (local_140 == 4) {
      String::parse_latin1((String *)&local_b0,"3.x");
      Vector<String>::push_back((Vector<String> *)&local_88,(String *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      String::parse_latin1((String *)&local_e0,"3.x");
    }
    else {
      String::parse_latin1((String *)&local_b0,"Unknown version");
      Vector<String>::push_back((Vector<String> *)&local_88,(String *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    }
  }
  if (iVar4 == 0) {
    uVar7 = FileAccess::get_modified_time(local_110);
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,".fscache");
    String::path_join((String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    cVar2 = FileAccess::exists((String *)&local_b8);
    local_150 = uVar7;
    if ((cVar2 != '\0') &&
       (local_150 = FileAccess::get_modified_time((String *)&local_b8), local_150 <= uVar7)) {
      local_150 = uVar7;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_12c = false;
  }
  else {
    operator+((char *)&local_b8,(String *)"Project is missing: ");
    Variant::Variant((Variant *)local_1b0,(String *)&local_b8);
    stringify_variants((Variant *)&local_b0);
    __print_line((String *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_130 = true;
    local_12c = true;
    local_150 = 0;
  }
  if (local_a0 != 0) {
    lVar11 = *(long *)(local_a0 + -8);
    for (lVar8 = local_a0; local_a0 + lVar11 * 8 != lVar8; lVar8 = lVar8 + 8) {
      ProjectManager::add_new_tag(ProjectManager::singleton);
    }
  }
  local_d8 = 0;
  if ((local_108 == 0) || (*(uint *)(local_108 + -8) < 2)) {
    plVar6 = (long *)OS::get_singleton();
    (**(code **)(*plVar6 + 0x268))((CowData<char32_t> *)&local_d0,plVar6);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"app_userdata");
    String::path_join((String *)&local_c0);
    local_b8 = (Object *)0x0;
    String::parse_latin1((String *)&local_b8,"[unnamed project]");
    String::path_join((String *)&local_b0);
    if (local_d8 != local_b0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      local_d8 = local_b0;
      local_b0 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  else {
    bVar3 = (bool)OS::get_singleton();
    OS::get_safe_dir_name((String *)&local_d0,bVar3);
    Variant::Variant(local_1a8,false);
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"config/use_custom_user_dir");
    local_b8 = (Object *)0x0;
    String::parse_latin1((String *)&local_b8,"application");
    ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_b8);
    bVar3 = Variant::operator_cast_to_bool((Variant *)local_1b0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (bVar3) {
      bVar3 = (bool)OS::get_singleton();
      Variant::Variant(local_1a8,"");
      local_b8 = (Object *)0x0;
      String::parse_latin1((String *)&local_b8,"config/custom_user_dir_name");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"application");
      ConfigFile::get_value(local_1b0,(String *)this_00,(Variant *)&local_c0);
      Variant::operator_cast_to_String((Variant *)&local_b0);
      OS::get_safe_dir_name((String *)&local_c8,bVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((local_c8 == 0) || (*(uint *)(local_c8 + -8) < 2)) && (local_c8 != local_d0)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_d0);
      }
      if (local_d8 != local_c8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_c8);
      }
    }
    else {
      plVar6 = (long *)OS::get_singleton();
      (**(code **)(*plVar6 + 0x268))(&local_c8,plVar6);
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"app_userdata");
      String::path_join((String *)&local_b8);
      String::path_join((String *)&local_b0);
      if (local_d8 != local_b0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        local_d8 = local_b0;
        local_b0 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  local_128 = (CowData<char32_t> *)&local_108;
  plVar6 = (long *)OS::get_singleton();
  (**(code **)(*plVar6 + 0x2a0))((String *)&local_b8,plVar6,(CowData<char32_t> *)&local_d8);
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,".recovery_mode_lock");
  String::path_join((String *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  bVar3 = (bool)FileAccess::exists((String *)&local_c0);
  Item::Item((Item *)this,(String *)&local_100,(String *)local_f8,(String *)&local_e0,
             (Vector *)local_190,param_1,(String *)&local_e8,(String *)local_f0,(Vector *)&local_88,
             local_150,param_2,local_130,local_12c,bVar3,local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<String>::_unref((CowData<String> *)&local_80);
  CowData<String>::_unref((CowData<String> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  CowData<String>::_unref((CowData<String> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref(local_128);
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<ProjectList::Item>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<ProjectList::Item>::_copy_on_write(CowData<ProjectList::Item> *this)

{
  Item *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Item *pIVar5;
  ulong uVar6;
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
  uVar6 = 0x10;
  if (lVar1 * 0x70 != 0) {
    uVar6 = lVar1 * 0x70 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      do {
        this_00 = (Item *)((long)(puVar3 + 2) + lVar4);
        lVar7 = lVar7 + 1;
        pIVar5 = (Item *)(*(long *)this + lVar4);
        lVar4 = lVar4 + 0x70;
        ProjectList::Item::Item(this_00,pIVar5);
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ProjectList::_load_project_icon(int) */

void __thiscall ProjectList::_load_project_icon(ProjectList *this,int param_1)

{
  code *pcVar1;
  String *pSVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_78;
  Object *local_70;
  String *local_68;
  undefined8 local_60;
  String local_58 [8];
  Object *local_50;
  Object *local_48;
  long local_40;
  
  lVar9 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(this + 0xc28);
  if (lVar9 < 0) {
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + -8);
      goto LAB_00106e59;
    }
  }
  else if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + -8);
    if (lVar8 <= lVar9) goto LAB_00106e59;
    CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
    lVar8 = lVar9 * 0x70 + *(long *)(this + 0xc28);
    if ((_load_project_icon(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_load_project_icon(int)::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&_load_project_icon(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_load_project_icon(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_load_project_icon(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_78);
    local_70 = (Object *)0x0;
    if ((*(long *)(lVar8 + 0x38) != 0) && (1 < *(uint *)(*(long *)(lVar8 + 0x38) + -8))) {
      local_68 = (String *)0x0;
      Ref<Image>::instantiate<>((Ref<Image> *)&local_68);
      pSVar2 = local_68;
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"/");
      String::operator+(local_58,(String *)(lVar8 + 0x30));
      local_50 = (Object *)0x0;
      String::parse_latin1((String *)&local_50,"res://");
      String::replace_first((String *)&local_48,(String *)(lVar8 + 0x38));
      iVar4 = Image::load(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      pSVar2 = local_68;
      if (iVar4 == 0) {
        uVar5 = (**(code **)(*(long *)local_78 + 0x1d0))();
        uVar6 = (**(code **)(*(long *)local_78 + 0x1c8))();
        Image::resize(pSVar2,uVar6,uVar5,4);
        ImageTexture::create_from_image((Ref *)&local_50);
        if (local_50 == (Object *)0x0) {
          pOVar7 = local_70;
          if (local_70 != (Object *)0x0) {
            local_70 = (Object *)0x0;
            local_48 = pOVar7;
            goto LAB_00106d42;
          }
        }
        else {
          pOVar7 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (local_70 != pOVar7) {
            local_48 = local_70;
            local_70 = pOVar7;
            if ((pOVar7 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              local_70 = (Object *)0x0;
            }
LAB_00106d42:
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
            if (local_50 == (Object *)0x0) goto LAB_00106d68;
          }
          cVar3 = RefCounted::unreference();
          pOVar7 = local_50;
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_50), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
LAB_00106d68:
      if ((local_68 != (String *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        memdelete<Image>((Image *)local_68);
      }
      if (local_70 != (Object *)0x0) goto LAB_00106b90;
    }
    if (local_78 != (Object *)0x0) {
      local_48 = (Object *)0x0;
      local_70 = local_78;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_70 = (Object *)0x0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    }
LAB_00106b90:
    ProjectListItemControl::set_project_icon(*(Ref **)(lVar8 + 0x68));
    if (((local_70 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar7 = local_70, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (((local_78 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
      (**(code **)(*(long *)local_78 + 0x140))(local_78);
      Memory::free_static(local_78,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar8 = 0;
LAB_00106e59:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar8,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::_deselect_project_nocheck(int) */

void __thiscall ProjectList::_deselect_project_nocheck(ProjectList *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  lVar2 = *(long *)(this + 0xc28);
  if (lVar3 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00106fb1;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar2) {
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
      lVar2 = lVar3 * 0x70 + *(long *)(this + 0xc28);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase
                ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)
                 (this + 0xc48),(String *)(lVar2 + 0x30));
      *(undefined1 *)(*(long *)(lVar2 + 0x68) + 0xa62) = 0;
      CanvasItem::queue_redraw();
      return;
    }
    goto LAB_00106fb1;
  }
  lVar2 = 0;
LAB_00106fb1:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar3,lVar2,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::_select_project_nocheck(int) */

void __thiscall ProjectList::_select_project_nocheck(ProjectList *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  String aSStack_38 [24];
  long local_20;
  
  lVar3 = (long)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0xc28);
  if (lVar3 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_001070a9;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar2) {
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
      lVar2 = *(long *)(this + 0xc28);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(aSStack_38);
      *(undefined1 *)(*(long *)(lVar3 * 0x70 + lVar2 + 0x68) + 0xa62) = 1;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_001070a9;
  }
  lVar2 = 0;
LAB_001070a9:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar3,lVar2,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::_toggle_project(int) */

void __thiscall ProjectList::_toggle_project(ProjectList *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  lVar4 = (long)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0xc28);
  if (lVar4 < 0) {
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + -8);
      goto LAB_001071e1;
    }
  }
  else if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + -8);
    if (lVar4 < lVar3) {
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
      local_24 = 0;
      cVar2 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
                        ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)
                         (this + 0xc48),(String *)(lVar4 * 0x70 + *(long *)(this + 0xc28) + 0x30),
                         &local_24);
      if (cVar2 == '\0') {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          _select_project_nocheck(this,param_1);
          return;
        }
      }
      else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _deselect_project_nocheck(this,param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_001071e1;
  }
  lVar3 = 0;
LAB_001071e1:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar4,lVar3,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectList::_create_project_item_control(int) */

void __thiscall ProjectList::_create_project_item_control(ProjectList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ProjectListItemControl *this_00;
  CallableCustom *pCVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  CowData *pCVar8;
  Color *pCVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  undefined8 local_78 [2];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xc78),0));
  if (iVar3 != param_1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x35a;
      pcVar5 = "Condition \"p_index != project_list_vbox->get_child_count()\" is true.";
LAB_001078f2:
      _err_print_error("_create_project_item_control","editor/project_manager/project_list.cpp",
                       uVar6,pcVar5,0,0);
      return;
    }
    goto LAB_00107948;
  }
  lVar7 = (long)iVar3;
  lVar10 = *(long *)(this + 0xc28);
  if (lVar7 < 0) {
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + -8);
      goto LAB_0010788d;
    }
  }
  else if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + -8);
    if (lVar10 <= lVar7) goto LAB_0010788d;
    CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
    pCVar8 = (CowData *)(lVar7 * 0x70 + *(long *)(this + 0xc28));
    if (*(long *)(pCVar8 + 0x68) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 0x35d;
        pcVar5 = "Condition \"item.control != nullptr\" is true.";
        goto LAB_001078f2;
      }
      goto LAB_00107948;
    }
    this_00 = (ProjectListItemControl *)operator_new(0xa68,"");
    ProjectListItemControl::ProjectListItemControl(this_00);
    postinitialize_handler((Object *)this_00);
    EditorScale::get_scale();
    StringName::StringName((StringName *)&local_68,"separation",false);
    Control::add_theme_constant_override((StringName *)this_00,(int)(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    if (pCVar8[0x62] == (CowData)0x0) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar8);
      Label::set_text(*(String **)(this_00 + 0xa30));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"");
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"Missing Project");
      TTR((String *)&local_68,(String *)&local_80);
      Label::set_text(*(String **)(this_00 + 0xa30));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    }
    Label::set_text(*(String **)(this_00 + 0xa38));
    Control::set_tooltip_text((String *)this_00);
    ProjectListItemControl::set_tags(this_00,(Vector *)(pCVar8 + 0x18),this);
    local_60 = 0;
    if (*(long *)(pCVar8 + 0x50) == 0) {
LAB_001073fe:
      CanvasItem::hide();
    }
    else {
      CowData<String>::_ref((CowData<String> *)&local_60,pCVar8 + 0x50);
      if ((local_60 == 0) || (*(long *)(local_60 + -8) < 1)) goto LAB_001073fe;
      ProjectListItemControl::set_unsupported_features(this_00,(StringName *)&local_68);
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    Label::set_text(*(String **)(this_00 + 0xa48));
    if (pCVar8[0x62] == (CowData)0x0) {
      bVar2 = (bool)Time::get_singleton();
      Time::get_datetime_string_from_unix_time((long)&local_68,bVar2);
      Label::set_text(*(String **)(this_00 + 0xa40));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pCVar9 = *(Color **)(this_00 + 0xa18);
      if (pCVar8[0x60] == (CowData)0x0) goto LAB_00107859;
LAB_001074a4:
      local_58 = CONCAT44(_LC13,_LC13);
      uStack_50 = CONCAT44(_LC13,_LC13);
    }
    else {
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"");
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"Missing Date");
      TTR((String *)&local_68,(String *)&local_80);
      Label::set_text(*(String **)(this_00 + 0xa40));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      pCVar9 = *(Color **)(this_00 + 0xa18);
      if (pCVar8[0x60] != (CowData)0x0) goto LAB_001074a4;
LAB_00107859:
      local_58 = CONCAT44(_UNK_0011b574,_LC13);
      uStack_50 = _UNK_0011b578;
    }
    CanvasItem::set_modulate(pCVar9);
    ProjectListItemControl::set_is_missing(this_00,(bool)pCVar8[0x62]);
    ProjectListItemControl::set_is_grayed(this_00,(bool)pCVar8[0x61]);
    pcVar1 = *(code **)(*(long *)this_00 + 0x108);
    pCVar4 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar4);
    *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar4 = &PTR_hash_0011b0b8;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    uVar6 = *(undefined8 *)(this + 0x60);
    *(undefined **)(pCVar4 + 0x20) = &_LC19;
    *(undefined8 *)(pCVar4 + 0x30) = uVar6;
    *(code **)(pCVar4 + 0x38) = _list_item_input;
    *(undefined8 *)(pCVar4 + 0x10) = 0;
    *(ProjectList **)(pCVar4 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
    *(char **)(pCVar4 + 0x20) = "ProjectList::_list_item_input";
    Callable::Callable((Callable *)local_78,pCVar4);
    Callable::bind<ProjectListItemControl*>((ProjectListItemControl *)&local_68);
    (*pcVar1)(this_00,SceneStringNames::singleton + 0x28,(StringName *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    Callable::~Callable((Callable *)local_78);
    pcVar1 = *(code **)(*(long *)this_00 + 0x108);
    pCVar4 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar4);
    *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
    *(undefined **)(pCVar4 + 0x20) = &_LC19;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    uVar6 = *(undefined8 *)(this + 0x60);
    *(undefined ***)pCVar4 = &PTR_hash_0011b148;
    *(undefined8 *)(pCVar4 + 0x30) = uVar6;
    *(code **)(pCVar4 + 0x38) = _on_favorite_pressed;
    *(undefined8 *)(pCVar4 + 0x10) = 0;
    *(ProjectList **)(pCVar4 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
    *(char **)(pCVar4 + 0x20) = "ProjectList::_on_favorite_pressed";
    Callable::Callable((Callable *)local_78,pCVar4);
    Callable::bind<ProjectListItemControl*>((ProjectListItemControl *)&local_68);
    StringName::StringName((StringName *)&local_80,"favorite_pressed",false);
    (*pcVar1)(this_00,(String *)&local_80,(StringName *)&local_68,0);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    Callable::~Callable((Callable *)local_78);
    pcVar1 = *(code **)(*(long *)this_00 + 0x108);
    create_custom_callable_function_pointer<ProjectList,String_const&>
              ((ProjectList *)local_78,(char *)this,
               (_func_void_String_ptr *)"&ProjectList::_on_explore_pressed");
    local_88 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,pCVar8 + 0x30);
    Callable::bind<String>
              ((StringName *)&local_68,(String *)local_78,(CowData<char32_t> *)&local_88);
    StringName::StringName((StringName *)&local_80,"explore_pressed",false);
    (*pcVar1)(this_00,(String *)&local_80,(StringName *)&local_68,0);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Callable::~Callable((Callable *)local_78);
    Node::add_child(*(undefined8 *)(this + 0xc78),this_00,0,0);
    *(ProjectListItemControl **)(pCVar8 + 0x68) = this_00;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00107948:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar10 = 0;
LAB_0010788d:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar10,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::set_project_version(String const&, int) */

void __thiscall ProjectList::set_project_version(ProjectList *this,String *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
  lVar2 = *(long *)(this + 0xc28);
  CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
  lVar3 = *(long *)(this + 0xc28);
  if (lVar3 != 0) {
    lVar3 = lVar3 + *(long *)(lVar3 + -8) * 0x70;
  }
  while( true ) {
    if (lVar2 == lVar3) {
      return;
    }
    cVar1 = String::operator==((String *)(lVar2 + 0x30),param_1);
    if (cVar1 != '\0') break;
    lVar2 = lVar2 + 0x70;
  }
  *(int *)(lVar2 + 100) = param_2;
  return;
}



/* ProjectList::erase_selected_projects(bool) */

void ProjectList::erase_selected_projects(bool param_1)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined7 in_register_00000039;
  ProjectList *this;
  long lVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  long local_78;
  
  this = (ProjectList *)CONCAT71(in_register_00000039,param_1);
  if (*(int *)(this + 0xc6c) == 0) {
    return;
  }
  lVar15 = *(long *)(this + 0xc28);
  if (lVar15 != 0) {
    local_78 = 0;
    iVar22 = 0;
    do {
      if (*(long *)(lVar15 + -8) <= local_78) break;
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
      lVar15 = *(long *)(this + 0xc28);
      if ((*(long *)(this + 0xc48) == 0) || (*(int *)(this + 0xc6c) == 0)) {
        iVar22 = iVar22 + 1;
        lVar20 = (long)iVar22;
      }
      else {
        lVar20 = (long)iVar22;
        lVar15 = lVar15 + lVar20 * 0x70;
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc68) * 8);
        uVar14 = String::hash();
        uVar12 = CONCAT44(0,uVar1);
        lVar19 = *(long *)(this + 0xc60);
        uVar16 = 1;
        if (uVar14 != 0) {
          uVar16 = uVar14;
        }
        uVar21 = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar16 * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        lVar18 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(lVar19 + lVar18 * 4);
        iVar17 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          do {
            if (uVar16 == uVar14) {
              cVar13 = String::operator==((String *)
                                          (*(long *)(this + 0xc48) +
                                          (ulong)*(uint *)(*(long *)(this + 0xc50) + lVar18 * 4) * 8
                                          ),(String *)(lVar15 + 0x30));
              if (cVar13 != '\0') {
                cVar13 = CanvasItem::is_visible();
                if (cVar13 != '\0') {
                  ConfigFile::erase_section((String *)(this + 0xa70));
                  pOVar3 = *(Object **)(lVar15 + 0x68);
                  cVar13 = predelete_handler(pOVar3);
                  if (cVar13 != '\0') {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                  Vector<ProjectList::Item>::remove_at
                            ((Vector<ProjectList::Item> *)(this + 0xc20),local_78);
                  lVar15 = *(long *)(this + 0xc28);
                  goto LAB_00107bc7;
                }
                break;
              }
              lVar19 = *(long *)(this + 0xc60);
            }
            uVar21 = uVar21 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar12;
            lVar18 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(lVar19 + lVar18 * 4);
            iVar17 = SUB164(auVar5 * auVar9,8);
            if ((uVar14 == 0) ||
               (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar2, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
               auVar7._0_8_ = (ulong)((uVar1 + iVar17) - SUB164(auVar6 * auVar10,8)) * lVar2,
               auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar21))
            break;
          } while( true );
        }
        iVar22 = iVar22 + 1;
        lVar15 = *(long *)(this + 0xc28);
        lVar20 = (long)iVar22;
      }
LAB_00107bc7:
      local_78 = lVar20;
    } while (lVar15 != 0);
  }
  ConfigFile::save((String *)(this + 0xa70));
  lVar15 = *(long *)(this + 0xc48);
  if ((lVar15 != 0) && (*(int *)(this + 0xc6c) != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) == 0) ||
       (memset(*(void **)(this + 0xc60),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) * 4),
       *(int *)(this + 0xc6c) != 0)) {
      lVar20 = 0;
      while( true ) {
        lVar2 = lVar20 * 8;
        lVar20 = lVar20 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)(lVar15 + lVar2));
        if (*(uint *)(this + 0xc6c) <= (uint)lVar20) break;
        lVar15 = *(long *)(this + 0xc48);
      }
    }
    *(undefined4 *)(this + 0xc6c) = 0;
  }
  String::parse_latin1((String *)(this + 0xc70),"");
  update_dock_menu(this);
  return;
}



/* ProjectList::get_selected_projects() const */

long ProjectList::get_selected_projects(void)

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
  code *pcVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  Item *pIVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long in_RSI;
  long in_RDI;
  uint uVar21;
  int local_4c;
  
  uVar1 = *(uint *)(in_RSI + 0xc6c);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (uVar1 == 0) {
    return in_RDI;
  }
  CowData<ProjectList::Item>::resize<false>((CowData<ProjectList::Item> *)(in_RDI + 8),(ulong)uVar1)
  ;
  lVar15 = *(long *)(in_RSI + 0xc28);
  local_4c = 0;
  lVar16 = 0;
  if (lVar15 == 0) {
    lVar15 = *(long *)(in_RDI + 8);
    if (lVar15 == 0) {
      return in_RDI;
    }
    lVar16 = 0;
  }
  else {
    do {
      while( true ) {
        if (*(long *)(lVar15 + -8) <= lVar16) goto LAB_00107fad;
        if ((*(long *)(in_RSI + 0xc48) == 0) || (*(int *)(in_RSI + 0xc6c) == 0)) break;
        pIVar14 = (Item *)(lVar15 + lVar16 * 0x70);
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xc68) * 4);
        lVar15 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0xc68) * 8);
        uVar13 = String::hash();
        uVar11 = CONCAT44(0,uVar1);
        lVar20 = *(long *)(in_RSI + 0xc60);
        uVar17 = 1;
        if (uVar13 != 0) {
          uVar17 = uVar13;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)uVar17 * lVar15;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar11;
        lVar19 = SUB168(auVar2 * auVar6,8);
        uVar13 = *(uint *)(lVar20 + lVar19 * 4);
        if (uVar13 != 0) {
          uVar21 = 0;
          iVar18 = SUB164(auVar2 * auVar6,8);
          do {
            if (uVar17 == uVar13) {
              cVar12 = String::operator==((String *)
                                          (*(long *)(in_RSI + 0xc48) +
                                          (ulong)*(uint *)(*(long *)(in_RSI + 0xc50) + lVar19 * 4) *
                                          8),(String *)(pIVar14 + 0x30));
              if (cVar12 != '\0') {
                lVar20 = (long)local_4c;
                lVar15 = *(long *)(in_RDI + 8);
                local_4c = local_4c + 1;
                if (lVar20 < 0) {
                  if (lVar15 == 0) goto LAB_00108068;
                }
                else {
                  if (lVar15 == 0) {
LAB_00108068:
                    lVar15 = 0;
                    goto LAB_00108027;
                  }
                  if (lVar20 < *(long *)(lVar15 + -8)) {
                    CowData<ProjectList::Item>::_copy_on_write
                              ((CowData<ProjectList::Item> *)(in_RDI + 8));
                    Item::operator=((Item *)(lVar20 * 0x70 + *(long *)(in_RDI + 8)),pIVar14);
                    lVar15 = *(long *)(in_RSI + 0xc28);
                    goto LAB_00107fa0;
                  }
                }
                lVar15 = *(long *)(lVar15 + -8);
LAB_00108027:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar20,lVar15,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar10 = (code *)invalidInstructionException();
                (*pcVar10)();
              }
              lVar20 = *(long *)(in_RSI + 0xc60);
            }
            uVar21 = uVar21 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(iVar18 + 1) * lVar15;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar11;
            lVar19 = SUB168(auVar3 * auVar7,8);
            uVar13 = *(uint *)(lVar20 + lVar19 * 4);
            iVar18 = SUB164(auVar3 * auVar7,8);
          } while ((uVar13 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar13 * lVar15, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar11, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar4 * auVar8,8)) * lVar15,
                  auVar9._8_8_ = 0, auVar9._0_8_ = uVar11, uVar21 <= SUB164(auVar5 * auVar9,8)));
        }
        lVar15 = *(long *)(in_RSI + 0xc28);
        lVar16 = lVar16 + 1;
        if (lVar15 == 0) goto LAB_00107fad;
      }
LAB_00107fa0:
      lVar16 = lVar16 + 1;
    } while (lVar15 != 0);
LAB_00107fad:
    lVar16 = (long)local_4c;
    lVar15 = *(long *)(in_RDI + 8);
    if (lVar15 == 0) {
      lVar15 = 0;
      goto LAB_00107fc8;
    }
  }
  lVar15 = *(long *)(lVar15 + -8);
LAB_00107fc8:
  if (lVar16 != lVar15) {
    _err_print_error("get_selected_projects","editor/project_manager/project_list.cpp",0x424,
                     "Condition \"j != items.size()\" is true. Returning: items",0,0);
  }
  return in_RDI;
}



/* ProjectList::_clear_project_selection() */

void __thiscall ProjectList::_clear_project_selection(ProjectList *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  get_selected_projects();
  lVar4 = *(long *)(this + 0xc48);
  if ((lVar4 == 0) || (*(int *)(this + 0xc6c) == 0)) goto LAB_00108156;
  if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) == 0) {
LAB_0010810c:
    lVar3 = 0;
    while( true ) {
      plVar2 = (long *)(lVar4 + lVar3 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar3 = lVar3 + 1;
      if (*(uint *)(this + 0xc6c) <= (uint)lVar3) break;
      lVar4 = *(long *)(this + 0xc48);
    }
  }
  else {
    memset(*(void **)(this + 0xc60),0,
           (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) * 4);
    if (*(int *)(this + 0xc6c) != 0) goto LAB_0010810c;
  }
  *(undefined4 *)(this + 0xc6c) = 0;
LAB_00108156:
  if ((local_30[0] != 0) && (lVar4 = 0, 0 < *(long *)(local_30[0] + -8))) {
    do {
      lVar3 = lVar4 + 1;
      *(undefined1 *)(*(long *)(local_30[0] + 0x68 + lVar4 * 0x70) + 0xa62) = 0;
      CanvasItem::queue_redraw();
      lVar4 = lVar3;
    } while (lVar3 < *(long *)(local_30[0] + -8));
  }
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_select_project_range(int, int) */

void __thiscall ProjectList::_select_project_range(ProjectList *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  _clear_project_selection(this);
  iVar1 = param_2;
  if (param_1 <= param_2) {
    iVar1 = param_1;
    param_1 = param_2;
  }
  do {
    iVar2 = iVar1 + 1;
    _select_project_nocheck(this,iVar1);
    iVar1 = iVar2;
  } while (iVar2 <= param_1);
  return;
}



/* ProjectList::select_project(int) */

void __thiscall ProjectList::select_project(ProjectList *this,int param_1)

{
  _clear_project_selection(this);
  _select_project_nocheck(this,param_1);
  return;
}



/* ProjectList::_list_item_input(Ref<InputEvent> const&, Node*) */

void __thiscall ProjectList::_list_item_input(ProjectList *this,Ref *param_1,Node *param_2)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  
  pOVar5 = *(Object **)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((pOVar5 != (Object *)0x0) &&
      (pOVar5 = (Object *)
                __dynamic_cast(pOVar5,&Object::typeinfo,&InputEventMouseButton::typeinfo,0),
      pOVar5 != (Object *)0x0)) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if (*(long *)(param_2 + 400) == 0) {
LAB_00108398:
    iVar8 = *(int *)(param_2 + 0x22c);
LAB_001082f5:
    lVar7 = (long)iVar8;
    lVar6 = *(long *)(this + 0xc28);
    if (lVar7 < 0) goto LAB_001083b7;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + -8);
      if (lVar7 < lVar9) {
        if (pOVar5 != (Object *)0x0) {
          cVar3 = InputEvent::is_pressed();
          if ((cVar3 != '\0') && (iVar4 = InputEventMouseButton::get_button_index(), iVar4 == 1)) {
            lVar6 = lVar6 + lVar7 * 0x70;
            cVar3 = InputEventWithModifiers::is_shift_pressed();
            if (((cVar3 != '\0') &&
                ((*(int *)(this + 0xc6c) != 0 && (*(long *)(this + 0xc70) != 0)))) &&
               (1 < *(uint *)(*(long *)(this + 0xc70) + -8))) {
              cVar3 = String::operator!=((String *)(lVar6 + 0x30),(String *)(this + 0xc70));
              if (cVar3 != '\0') {
                lVar6 = *(long *)(this + 0xc28);
                lVar7 = 0;
                lVar9 = 0;
                while( true ) {
                  if ((lVar6 == 0) || (*(long *)(lVar6 + -8) <= lVar9)) goto LAB_00108651;
                  cVar3 = String::operator==((String *)(lVar6 + lVar7 + 0x30),
                                             (String *)(this + 0xc70));
                  if (cVar3 != '\0') break;
                  lVar6 = *(long *)(this + 0xc28);
                  lVar9 = lVar9 + 1;
                  lVar7 = lVar7 + 0x70;
                }
                lVar6 = *(long *)(lVar6 + lVar7 + 0x68);
                if (*(long *)(lVar6 + 400) == 0) {
LAB_0010873b:
                  iVar4 = *(int *)(lVar6 + 0x22c);
                }
                else {
                  if (*(char *)(*(long *)(lVar6 + 400) + 0x1d0) != '\0') {
                    Node::_update_children_cache_impl();
                  }
                  iVar4 = *(int *)(lVar6 + 0x21c);
                  if (iVar4 == 1) goto LAB_0010873b;
                  if (iVar4 == 2) {
                    iVar4 = *(int *)(*(long *)(lVar6 + 400) + 0x228) +
                            *(int *)(*(long *)(lVar6 + 400) + 0x220) + *(int *)(lVar6 + 0x22c);
                  }
                  else {
                    if (iVar4 != 0) goto LAB_00108651;
                    iVar4 = *(int *)(lVar6 + 0x22c) + *(int *)(*(long *)(lVar6 + 400) + 0x220);
                  }
                }
                if (iVar4 != -1) {
                  _select_project_range(this,iVar4,iVar8);
                  goto LAB_0010849c;
                }
LAB_00108651:
                _err_print_error("_list_item_input","editor/project_manager/project_list.cpp",0x3a8,
                                 "FATAL: Condition \"anchor_index == -1\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
            }
            cVar3 = InputEventWithModifiers::is_command_or_control_pressed();
            if (cVar3 == '\0') {
              if (*(long *)(this + 0xc70) != *(long *)(lVar6 + 0x30)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(this + 0xc70),(CowData *)(lVar6 + 0x30));
              }
              _clear_project_selection(this);
              _select_project_nocheck(this,iVar8);
            }
            else {
              _toggle_project(this,iVar8);
            }
LAB_0010849c:
            if ((_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#1}::operator()()::sname ==
                 '\0') &&
               (iVar8 = __cxa_guard_acquire(&_list_item_input(Ref<InputEvent>const&,Node*)::
                                             {lambda()#1}::operator()()::sname), iVar8 != 0)) {
              _scs_create((char *)&_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#1}::
                                   operator()()::sname,SUB81(SIGNAL_SELECTION_CHANGED,0));
              __cxa_atexit(StringName::~StringName,
                           &_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#1}::
                            operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#1}::
                                   operator()()::sname);
            }
            Object::emit_signal<>
                      ((Object *)this,
                       (StringName *)
                       &_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#1}::operator()()::
                        sname);
            cVar3 = InputEventWithModifiers::is_command_or_control_pressed();
            if (((cVar3 == '\0') &&
                (cVar3 = InputEventMouseButton::is_double_click(), cVar3 != '\0')) &&
               (this[0xc34] == (ProjectList)0x0)) {
              if ((_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#2}::operator()()::sname
                   == '\0') &&
                 (iVar8 = __cxa_guard_acquire(&_list_item_input(Ref<InputEvent>const&,Node*)::
                                               {lambda()#2}::operator()()::sname), iVar8 != 0)) {
                _scs_create((char *)&_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#2}::
                                     operator()()::sname,SUB81(SIGNAL_PROJECT_ASK_OPEN,0));
                __cxa_atexit(StringName::~StringName,
                             &_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#2}::
                              operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#2}::
                                     operator()()::sname);
              }
              Object::emit_signal<>
                        ((Object *)this,
                         (StringName *)
                         &_list_item_input(Ref<InputEvent>const&,Node*)::{lambda()#2}::operator()()
                          ::sname);
            }
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar5,false);
              return;
            }
            goto LAB_00108743;
          }
        }
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
LAB_00108743:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_001083c4;
    }
  }
  else {
    if (*(char *)(*(long *)(param_2 + 400) + 0x1d0) != '\0') {
      Node::_update_children_cache_impl();
    }
    iVar8 = *(int *)(param_2 + 0x21c);
    if (iVar8 == 1) goto LAB_00108398;
    if (iVar8 == 2) {
      iVar8 = *(int *)(*(long *)(param_2 + 400) + 0x228) +
              *(int *)(*(long *)(param_2 + 400) + 0x220) + *(int *)(param_2 + 0x22c);
      goto LAB_001082f5;
    }
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_2 + 0x22c) + *(int *)(*(long *)(param_2 + 400) + 0x220);
      goto LAB_001082f5;
    }
    lVar6 = *(long *)(this + 0xc28);
    lVar7 = -1;
LAB_001083b7:
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + -8);
      goto LAB_001083c4;
    }
  }
  lVar9 = 0;
LAB_001083c4:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ProjectList::select_first_visible_project() */

void __thiscall ProjectList::select_first_visible_project(ProjectList *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  _clear_project_selection(this);
  lVar1 = *(long *)(this + 0xc28);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    cVar2 = CanvasItem::is_visible();
    if (cVar2 != '\0') {
      _select_project_nocheck(this,(int)lVar3);
      return;
    }
    lVar1 = *(long *)(this + 0xc28);
  }
  return;
}



/* Vector<ProjectList::Item>::push_back(ProjectList::Item) [clone .isra.0] */

void __thiscall Vector<ProjectList::Item>::push_back(Vector<ProjectList::Item> *this,Item *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<ProjectList::Item>::resize<false>((CowData<ProjectList::Item> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 8));
        ProjectList::Item::operator=((Item *)(lVar3 * 0x70 + *(long *)(this + 8)),param_2);
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



/* ProjectList::load_project_list() */

void __thiscall ProjectList::load_project_list(ProjectList *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  bool bVar4;
  String *pSVar5;
  long in_FS_OFFSET;
  long *local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  CowData<String> local_c8 [8];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  CowData<String> local_98 [32];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (String *)(this + 0xa70);
  local_f8 = (long *)0x0;
  ConfigFile::load(pSVar2);
  ConfigFile::get_sections((List *)pSVar2);
  if ((local_f8 != (long *)0x0) && (pSVar5 = (String *)*local_f8, pSVar5 != (String *)0x0)) {
    do {
      Variant::Variant((Variant *)local_78,false);
      local_e8 = "favorite";
      local_f0 = 0;
      local_e0 = 8;
      String::parse_latin1((StrRange *)&local_f0);
      ConfigFile::get_value((String *)local_58,pSVar2,(Variant *)pSVar5);
      bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar3 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      load_project_data((ProjectList *)&local_e8,pSVar5,bVar4);
      Vector<ProjectList::Item>::push_back((Vector<ProjectList::Item> *)(this + 0xc20));
      CowData<String>::_unref(local_98);
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8 + -0x10),false);
        }
      }
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_b0 + -0x10),false);
        }
      }
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_b8 + -0x10),false);
        }
      }
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_c0 + -0x10),false);
        }
      }
      CowData<String>::_unref(local_c8);
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d8 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      if (local_e8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_e8 + -0x10,false);
        }
      }
      pSVar5 = *(String **)(pSVar5 + 8);
    } while (pSVar5 != (String *)0x0);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_remove_project(int, bool) */

void __thiscall ProjectList::_remove_project(ProjectList *this,int param_1,bool param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  CowData<char32_t> *this_00;
  long in_FS_OFFSET;
  Item local_b8 [48];
  String local_88 [56];
  Object *local_50;
  long local_40;
  
  lVar4 = (long)param_1;
  lVar5 = *(long *)(this + 0xc28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 < 0) {
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + -8);
      goto LAB_00108f8d;
    }
  }
  else if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + -8);
    if (lVar6 <= lVar4) goto LAB_00108f8d;
    Item::Item(local_b8,(Item *)(lVar5 + lVar4 * 0x70));
    HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase
              ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)
               (this + 0xc48),local_88);
    cVar3 = String::operator==((String *)(this + 0xc70),local_88);
    if (cVar3 != '\0') {
      String::parse_latin1((String *)(this + 0xc70),"");
    }
    cVar3 = predelete_handler(local_50);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)local_50 + 0x140))(local_50);
      Memory::free_static(local_50,false);
    }
    if (*(long *)(this + 0xc28) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 0xc28) + -8);
      if (lVar4 < lVar5) {
        CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
        lVar5 = *(long *)(this + 0xc28);
        if (lVar5 == 0) {
          lVar6 = -1;
        }
        else {
          lVar6 = *(long *)(lVar5 + -8) + -1;
          if (lVar4 < lVar6) {
            this_00 = (CowData<char32_t> *)(lVar4 * 0x70 + lVar5);
            do {
              if (*(long *)this_00 != *(long *)(this_00 + 0x70)) {
                CowData<char32_t>::_unref(this_00);
                uVar1 = *(undefined8 *)(this_00 + 0x70);
                *(undefined8 *)(this_00 + 0x70) = 0;
                *(undefined8 *)this_00 = uVar1;
              }
              if (*(long *)(this_00 + 8) != *(long *)(this_00 + 0x78)) {
                CowData<char32_t>::_unref(this_00 + 8);
                uVar1 = *(undefined8 *)(this_00 + 0x78);
                *(undefined8 *)(this_00 + 0x78) = 0;
                *(undefined8 *)(this_00 + 8) = uVar1;
              }
              if (*(long *)(this_00 + 0x10) != *(long *)(this_00 + 0x80)) {
                CowData<char32_t>::_unref(this_00 + 0x10);
                uVar1 = *(undefined8 *)(this_00 + 0x80);
                *(undefined8 *)(this_00 + 0x80) = 0;
                *(undefined8 *)(this_00 + 0x10) = uVar1;
              }
              if (*(long *)(this_00 + 0x20) != *(long *)(this_00 + 0x90)) {
                CowData<String>::_unref((CowData<String> *)(this_00 + 0x20));
                uVar1 = *(undefined8 *)(this_00 + 0x90);
                *(undefined8 *)(this_00 + 0x90) = 0;
                *(undefined8 *)(this_00 + 0x20) = uVar1;
              }
              if (*(long *)(this_00 + 0x28) != *(long *)(this_00 + 0x98)) {
                CowData<char32_t>::_unref(this_00 + 0x28);
                uVar1 = *(undefined8 *)(this_00 + 0x98);
                *(undefined8 *)(this_00 + 0x98) = 0;
                *(undefined8 *)(this_00 + 0x28) = uVar1;
              }
              if (*(long *)(this_00 + 0x30) != *(long *)(this_00 + 0xa0)) {
                CowData<char32_t>::_unref(this_00 + 0x30);
                uVar1 = *(undefined8 *)(this_00 + 0xa0);
                *(undefined8 *)(this_00 + 0xa0) = 0;
                *(undefined8 *)(this_00 + 0x30) = uVar1;
              }
              if (*(long *)(this_00 + 0x38) != *(long *)(this_00 + 0xa8)) {
                CowData<char32_t>::_unref(this_00 + 0x38);
                uVar1 = *(undefined8 *)(this_00 + 0xa8);
                *(undefined8 *)(this_00 + 0xa8) = 0;
                *(undefined8 *)(this_00 + 0x38) = uVar1;
              }
              if (*(long *)(this_00 + 0x40) != *(long *)(this_00 + 0xb0)) {
                CowData<char32_t>::_unref(this_00 + 0x40);
                uVar1 = *(undefined8 *)(this_00 + 0xb0);
                *(undefined8 *)(this_00 + 0xb0) = 0;
                *(undefined8 *)(this_00 + 0x40) = uVar1;
              }
              if (*(long *)(this_00 + 0x50) != *(long *)(this_00 + 0xc0)) {
                CowData<String>::_unref((CowData<String> *)(this_00 + 0x50));
                uVar1 = *(undefined8 *)(this_00 + 0xc0);
                *(undefined8 *)(this_00 + 0xc0) = 0;
                *(undefined8 *)(this_00 + 0x50) = uVar1;
              }
              lVar4 = lVar4 + 1;
              *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(this_00 + 200);
              *(undefined4 *)(this_00 + 0x60) = *(undefined4 *)(this_00 + 0xd0);
              *(undefined4 *)(this_00 + 100) = *(undefined4 *)(this_00 + 0xd4);
              *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(this_00 + 0xd8);
              this_00 = this_00 + 0x70;
            } while (lVar4 != lVar6);
          }
        }
        CowData<ProjectList::Item>::resize<false>
                  ((CowData<ProjectList::Item> *)(this + 0xc28),lVar6);
        goto LAB_00108ef1;
      }
    }
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,lVar4,lVar5,"p_index","size()","",false
               ,false);
LAB_00108ef1:
    if (param_2) {
      ConfigFile::erase_section((String *)(this + 0xa70));
    }
    cVar3 = (**(code **)(*NativeMenu::singleton + 0x150))(NativeMenu::singleton,0);
    if (cVar3 != '\0') {
      update_dock_menu(this);
    }
    Item::~Item(local_b8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar6 = 0;
LAB_00108f8d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ProjectList::erase_missing_projects() */

void __thiscall ProjectList::erase_missing_projects(ProjectList *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_a8 [8];
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  String local_90 [8];
  CowData<char32_t> local_88 [8];
  String local_80 [8];
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)(this + 0xc28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar3 = 0;
    lVar2 = 0;
    do {
      while( true ) {
        if (*(long *)(lVar1 + -8) <= lVar2) goto LAB_001090de;
        lVar2 = (long)iVar3;
        if (*(char *)(lVar1 + 0x62 + lVar2 * 0x70) == '\0') break;
        _remove_project(this,iVar3,true);
        lVar1 = *(long *)(this + 0xc28);
        if (lVar1 == 0) goto LAB_001090de;
      }
      iVar3 = iVar3 + 1;
      lVar2 = (long)iVar3;
    } while (lVar1 != 0);
LAB_001090de:
    local_78 = 0;
    local_68 = " projects";
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_78);
    itos((long)local_88);
    local_68 = " projects from the list, remaining ";
    local_98 = 0;
    local_60 = 0x23;
    String::parse_latin1((StrRange *)&local_98);
    itos((long)local_a8);
    operator+((char *)local_a0,(String *)"Removed ");
    String::operator+(local_90,(String *)local_a0);
    String::operator+(local_80,local_90);
    String::operator+(local_70,local_80);
    Variant::Variant((Variant *)local_58,local_70);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref(local_a0);
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ConfigFile::save((String *)(this + 0xa70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::sort_projects() */

void __thiscall ProjectList::sort_projects(ProjectList *this)

{
  Item *this_00;
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Item *pIVar5;
  long lVar6;
  Node *pNVar7;
  String *pSVar8;
  long lVar9;
  String *pSVar10;
  CowData *pCVar11;
  wchar32 wVar12;
  Item *pIVar13;
  long lVar14;
  long lVar15;
  Item *pIVar16;
  CowData *pCVar17;
  long in_FS_OFFSET;
  String *local_188;
  CowData<ProjectList::Item> *local_180;
  CowData<char32_t> *local_170;
  String *local_160;
  int local_154;
  long local_150;
  undefined8 local_148;
  long local_140;
  Vector<String> local_138 [8];
  String *local_130;
  long local_128;
  CowData *local_120 [4];
  String local_100 [8];
  String local_f8 [40];
  ulong local_d0;
  char local_c8;
  long local_b8;
  undefined8 local_b0 [4];
  String local_90 [8];
  String local_88 [40];
  ulong local_60;
  char local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_154 = *(int *)(this + 0xc40);
  if (*(long *)(this + 0xc28) == 0) {
    CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
  }
  else {
    lVar15 = *(long *)(*(long *)(this + 0xc28) + -8);
    CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
    if ((lVar15 != 0) && (this_00 = *(Item **)(this + 0xc28), lVar15 != 1)) {
      lVar9 = 0;
      lVar4 = lVar15;
      do {
        lVar4 = lVar4 >> 1;
        lVar9 = lVar9 + 1;
      } while (lVar4 != 1);
      lVar9 = lVar9 * 2;
      lVar4 = lVar15;
      if (lVar15 < 0x11) {
        lVar9 = 1;
        pIVar5 = this_00;
LAB_00109c78:
        pIVar13 = pIVar5 + 0x70;
        Item::Item((Item *)&local_128,pIVar13);
        if (local_c8 == '\0') {
          if (this_00[0x60] != (Item)0x0) goto LAB_00109ccc;
          if (local_154 != 2) goto LAB_00109ca8;
LAB_00109db7:
          cVar2 = String::operator<(local_f8,(String *)(this_00 + 0x30));
joined_r0x00109dca:
          pIVar16 = pIVar13;
          if (cVar2 == '\0') {
LAB_00109ccc:
            Item::Item((Item *)&local_b8,(Item *)&local_128);
            lVar4 = lVar9;
            do {
              if (local_58 == '\0') {
                if (pIVar5[0x60] != (Item)0x0) goto LAB_00109d51;
LAB_00109cfa:
                if (local_154 == 2) {
                  cVar2 = String::operator<(local_88,(String *)(pIVar5 + 0x30));
                }
                else if (local_154 == 3) {
                  cVar2 = String::operator<(local_90,(String *)(pIVar5 + 0x28));
                }
                else {
                  if (local_154 == 0) {
                    if (*(ulong *)(pIVar5 + 0x58) < local_60) goto joined_r0x00109d34;
                    goto LAB_00109d51;
                  }
                  cVar2 = String::operator<((String *)&local_b8,(String *)pIVar5);
                }
                if (cVar2 == '\0') goto LAB_00109d51;
              }
              else if (pIVar5[0x60] != (Item)0x0) goto LAB_00109cfa;
joined_r0x00109d34:
              if (lVar4 == 1) goto LAB_00109e20;
              lVar4 = lVar4 + -1;
              Item::operator=(pIVar5 + 0x70,pIVar5);
              pIVar5 = pIVar5 + -0x70;
            } while( true );
          }
        }
        else {
          pIVar16 = pIVar13;
          if (this_00[0x60] != (Item)0x0) {
            if (local_154 == 2) goto LAB_00109db7;
LAB_00109ca8:
            if (local_154 == 3) {
              cVar2 = String::operator<(local_100,(String *)(this_00 + 0x28));
            }
            else {
              if (local_154 == 0) {
                pIVar16 = pIVar13;
                if (local_d0 <= *(ulong *)(this_00 + 0x58)) goto LAB_00109ccc;
                goto LAB_00109dd8;
              }
              cVar2 = String::operator<((String *)&local_128,(String *)this_00);
            }
            goto joined_r0x00109dca;
          }
        }
LAB_00109dd8:
        do {
          pIVar5 = pIVar16 + -0x70;
          Item::operator=(pIVar16,pIVar5);
          pIVar16 = pIVar5;
        } while (pIVar5 != this_00);
        Item::operator=(this_00,(Item *)&local_128);
        goto LAB_00109d77;
      }
      do {
        lVar9 = lVar9 + -1;
        pIVar5 = (Item *)SortArray<ProjectList::Item,ProjectListComparator,true>::median_of_3
                                   ((SortArray<ProjectList::Item,ProjectListComparator,true> *)
                                    &local_154,this_00,this_00 + (lVar4 >> 1) * 0x70,
                                    this_00 + lVar4 * 0x70 + -0x70);
        Item::Item((Item *)&local_b8,pIVar5);
        lVar6 = SortArray<ProjectList::Item,ProjectListComparator,true>::partitioner
                          ((SortArray<ProjectList::Item,ProjectListComparator,true> *)&local_154,0,
                           lVar4,(Item *)&local_b8,this_00);
        Item::~Item((Item *)&local_b8);
        SortArray<ProjectList::Item,ProjectListComparator,true>::introsort
                  ((SortArray<ProjectList::Item,ProjectListComparator,true> *)&local_154,lVar6,lVar4
                   ,this_00,lVar9);
        if (lVar6 < 0x11) goto LAB_00109445;
        lVar4 = lVar6;
      } while (lVar9 != 0);
      SortArray<ProjectList::Item,ProjectListComparator,true>::partial_sort
                ((SortArray<ProjectList::Item,ProjectListComparator,true> *)&local_154,0,lVar6,lVar6
                 ,this_00);
LAB_00109445:
      lVar9 = 1;
      pIVar5 = this_00;
LAB_00109467:
      pIVar13 = pIVar5 + 0x70;
      Item::Item((Item *)&local_128,pIVar13);
      if (local_c8 == '\0') {
        if (this_00[0x60] != (Item)0x0) goto LAB_001094bb;
        if (local_154 != 2) goto LAB_00109497;
LAB_001099af:
        cVar2 = String::operator<(local_f8,(String *)(this_00 + 0x30));
joined_r0x001094b5:
        pIVar16 = pIVar13;
        if (cVar2 == '\0') {
LAB_001094bb:
          Item::Item((Item *)&local_b8,(Item *)&local_128);
          lVar4 = lVar9;
          do {
            if (local_58 == '\0') {
              if (((String *)pIVar5)[0x60] != (String)0x0) goto LAB_00109828;
LAB_001094e8:
              if (local_154 == 2) {
                cVar2 = String::operator<(local_88,(String *)pIVar5 + 0x30);
              }
              else if (local_154 == 3) {
                cVar2 = String::operator<(local_90,(String *)pIVar5 + 0x28);
              }
              else {
                if (local_154 == 0) {
                  if (*(ulong *)((String *)pIVar5 + 0x58) < local_60) goto joined_r0x00109a12;
                  goto LAB_00109828;
                }
                cVar2 = String::operator<((String *)&local_b8,(String *)pIVar5);
              }
              if (cVar2 == '\0') goto LAB_00109828;
            }
            else if (((String *)pIVar5)[0x60] != (String)0x0) goto LAB_001094e8;
joined_r0x00109a12:
            if (lVar4 == 1) goto LAB_00109a18;
            lVar4 = lVar4 + -1;
            Item::operator=((Item *)((String *)pIVar5 + 0x70),pIVar5);
            pIVar5 = (Item *)((String *)pIVar5 + -0x70);
          } while( true );
        }
      }
      else {
        pIVar16 = pIVar13;
        if (this_00[0x60] != (Item)0x0) {
          if (local_154 == 2) goto LAB_001099af;
LAB_00109497:
          if (local_154 == 3) {
            cVar2 = String::operator<(local_100,(String *)(this_00 + 0x28));
          }
          else {
            if (local_154 == 0) {
              pIVar16 = pIVar13;
              if (local_d0 <= *(ulong *)(this_00 + 0x58)) goto LAB_001094bb;
              goto LAB_001099d0;
            }
            cVar2 = String::operator<((String *)&local_128,(String *)this_00);
          }
          goto joined_r0x001094b5;
        }
      }
LAB_001099d0:
      do {
        pIVar5 = pIVar16 + -0x70;
        Item::operator=(pIVar16,pIVar5);
        pIVar16 = pIVar5;
      } while (pIVar5 != this_00);
      Item::operator=(this_00,(Item *)&local_128);
      goto LAB_0010984e;
    }
  }
LAB_00109581:
  local_180 = (CowData<ProjectList::Item> *)(this + 0xc28);
  local_150 = 0;
  local_130 = (String *)0x0;
  if ((*(long *)(this + 0xc38) != 0) && (1 < *(uint *)(*(long *)(this + 0xc38) + -8))) {
    String::split((char *)&local_128,SUB81((CowData *)(this + 0xc38),0),0x10cda5);
    if (local_120[0] == (CowData *)0x0) {
      lVar15 = 0;
LAB_00109fd8:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar15,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar15 = *(long *)(local_120[0] + -8);
    if (lVar15 < 2) {
      if (lVar15 != 1) goto LAB_00109fd8;
      cVar2 = String::begins_with((char *)local_120[0]);
      if (cVar2 != '\0') goto LAB_00109afb;
      if (local_150 != *(long *)(this + 0xc38)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)(this + 0xc38));
      }
    }
    else {
LAB_00109afb:
      local_b0[0] = 0;
      CowData<String>::_copy_on_write((CowData<String> *)local_120);
      pCVar17 = local_120[0];
      CowData<String>::_copy_on_write((CowData<String> *)local_120);
      pCVar11 = local_120[0];
      if (local_120[0] != (CowData *)0x0) {
        pCVar11 = local_120[0] + *(long *)(local_120[0] + -8) * 8;
      }
      for (; pCVar17 != pCVar11; pCVar17 = pCVar17 + 8) {
        while (cVar2 = String::begins_with((char *)pCVar17), cVar2 != '\0') {
          String::get_slice((char *)&local_140,(int)pCVar17);
          pCVar17 = pCVar17 + 8;
          Vector<String>::push_back(local_138,(CowData<char32_t> *)&local_140);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          if (pCVar11 == pCVar17) goto LAB_00109bda;
        }
        local_140 = 0;
        if (*(long *)pCVar17 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,pCVar17);
        }
        Vector<String>::push_back((Vector<String> *)&local_b8,(CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
LAB_00109bda:
      local_148 = 0;
      String::parse_latin1((String *)&local_148," ");
      String::join((Vector *)&local_140);
      if (local_150 != local_140) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
        local_150 = local_140;
        local_140 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<String>::_unref((CowData<String> *)local_b0);
    }
    local_188 = (String *)local_120;
    CowData<String>::_unref((CowData<String> *)local_188);
  }
  local_170 = (CowData<char32_t> *)&local_150;
  lVar4 = 0;
  lVar9 = 0;
  lVar15 = *(long *)(this + 0xc28);
  while (lVar15 != 0) {
    if (*(long *)(lVar15 + -8) <= lVar9) {
      if (lVar15 != 0) {
        lVar9 = 0;
        lVar4 = 0;
        goto LAB_00109770;
      }
      break;
    }
    CowData<ProjectList::Item>::_copy_on_write(local_180);
    pSVar10 = (String *)(*(long *)(this + 0xc28) + lVar4);
    if ((*(long *)(this + 0xc38) != 0) && (1 < *(uint *)(*(long *)(this + 0xc38) + -8))) {
      local_128 = 0;
      wVar12 = (wchar32)local_170;
      iVar3 = String::find_char(wVar12,0x2f);
      if (iVar3 == -1) {
        String::get_file();
        if (local_128 != local_b8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          local_128 = local_b8;
          local_b8 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      else if (local_128 != *(long *)(pSVar10 + 0x30)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(pSVar10 + 0x30));
      }
      local_160 = (String *)&local_128;
      CowData<String>::_copy_on_write((CowData<String> *)&local_130);
      pSVar8 = local_130;
      CowData<String>::_copy_on_write((CowData<String> *)&local_130);
      local_188 = local_130;
      if (local_130 != (String *)0x0) {
        local_188 = local_130 + *(long *)(local_130 + -8) * 8;
      }
      for (; pSVar8 != local_188; pSVar8 = pSVar8 + 8) {
        lVar15 = *(long *)(pSVar10 + 0x20);
        if ((lVar15 == 0) || (lVar6 = *(long *)(lVar15 + -8), lVar6 == 0)) goto LAB_00109718;
        lVar14 = 0;
        while( true ) {
          if (lVar6 <= lVar14) goto LAB_00109718;
          cVar2 = String::operator==((String *)(lVar15 + lVar14 * 8),pSVar8);
          if (cVar2 != '\0') break;
          lVar15 = *(long *)(pSVar10 + 0x20);
          lVar14 = lVar14 + 1;
          if (lVar15 == 0) goto LAB_00109718;
          lVar6 = *(long *)(lVar15 + -8);
        }
      }
      if (((local_150 != 0) && (1 < *(uint *)(local_150 + -8))) &&
         (iVar3 = String::findn(pSVar10,wVar12), iVar3 == -1)) {
        String::findn(local_160,wVar12);
      }
LAB_00109718:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
    }
    lVar9 = lVar9 + 1;
    lVar4 = lVar4 + 0x70;
    CanvasItem::set_visible(SUB81(*(undefined8 *)(pSVar10 + 0x68),0));
    lVar15 = *(long *)(this + 0xc28);
  }
LAB_001097b7:
  *(undefined4 *)(this + 0xc30) = 0;
  Node::set_process(SUB81(this,0));
  update_dock_menu(this);
  CowData<String>::_unref((CowData<String> *)&local_130);
  CowData<char32_t>::_unref(local_170);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00109e20:
  lVar4 = 1;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00109d51:
  Item::operator=(this_00 + lVar4 * 0x70,(Item *)&local_b8);
  Item::~Item((Item *)&local_b8);
LAB_00109d77:
  lVar9 = lVar9 + 1;
  Item::~Item((Item *)&local_128);
  pIVar5 = pIVar13;
  if (lVar15 == lVar9) goto LAB_00109581;
  goto LAB_00109c78;
LAB_00109a18:
  lVar4 = 1;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00109828:
  Item::operator=(this_00 + lVar4 * 0x70,(Item *)&local_b8);
  Item::~Item((Item *)&local_b8);
LAB_0010984e:
  lVar9 = lVar9 + 1;
  Item::~Item((Item *)&local_128);
  pIVar5 = pIVar13;
  if (lVar9 == 0x10) goto code_r0x00109868;
  goto LAB_00109467;
code_r0x00109868:
  pIVar5 = this_00 + 0x700;
  lVar9 = 0x10;
LAB_00109898:
  Item::Item((Item *)&local_b8,pIVar5);
  lVar4 = lVar9;
  pIVar13 = pIVar5;
  do {
    pIVar16 = pIVar13 + -0x70;
    if (local_58 == '\0') {
      if (pIVar13[-0x10] != (Item)0x0) goto LAB_00109548;
LAB_001098c4:
      if (local_154 == 2) {
        cVar2 = String::operator<(local_88,(String *)(pIVar13 + -0x40));
      }
      else if (local_154 == 3) {
        cVar2 = String::operator<(local_90,(String *)(pIVar13 + -0x48));
      }
      else {
        if (local_154 == 0) {
          if (*(ulong *)(pIVar13 + -0x18) < local_60) goto joined_r0x0010992e;
          goto LAB_00109548;
        }
        cVar2 = String::operator<((String *)&local_b8,(String *)pIVar16);
      }
      if (cVar2 == '\0') goto LAB_00109548;
    }
    else if (pIVar13[-0x10] != (Item)0x0) goto LAB_001098c4;
joined_r0x0010992e:
    if (lVar4 == 1) break;
    lVar4 = lVar4 + -1;
    Item::operator=(pIVar13,pIVar16);
    pIVar13 = pIVar16;
  } while( true );
  lVar4 = 1;
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00109548:
  lVar9 = lVar9 + 1;
  pIVar5 = pIVar5 + 0x70;
  Item::operator=(this_00 + lVar4 * 0x70,(Item *)&local_b8);
  Item::~Item((Item *)&local_b8);
  if (lVar15 == lVar9) goto LAB_00109581;
  goto LAB_00109898;
  while( true ) {
    lVar4 = lVar4 + 1;
    CowData<ProjectList::Item>::_copy_on_write(local_180);
    lVar15 = *(long *)(this + 0xc28) + lVar9;
    lVar9 = lVar9 + 0x70;
    pNVar7 = (Node *)Node::get_parent();
    Node::move_child(pNVar7,(int)*(undefined8 *)(lVar15 + 0x68));
    lVar15 = *(long *)(this + 0xc28);
    if (lVar15 == 0) break;
LAB_00109770:
    if (*(long *)(lVar15 + -8) <= lVar4) break;
  }
  goto LAB_001097b7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectList::_on_favorite_pressed(Node*) */

void __thiscall ProjectList::_on_favorite_pressed(ProjectList *this,Node *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  Item local_c8 [48];
  String local_98 [48];
  byte local_68;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Node *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&ProjectListItemControl::typeinfo,0);
  if (*(long *)(lVar4 + 400) == 0) {
LAB_0010a310:
    iVar5 = *(int *)(lVar4 + 0x22c);
LAB_0010a0c1:
    lVar6 = (long)iVar5;
    lVar7 = *(long *)(this + 0xc28);
    if (lVar6 < 0) goto LAB_0010a346;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + -8);
      if (lVar7 <= lVar6) goto LAB_0010a34f;
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
      Item::Item(local_c8,(Item *)(*(long *)(this + 0xc28) + lVar6 * 0x70));
      local_68 = local_68 ^ 1;
      Variant::Variant((Variant *)&local_58,(bool)local_68);
      local_d8 = "favorite";
      local_e0 = 0;
      local_d0 = 8;
      String::parse_latin1((StrRange *)&local_e0);
      ConfigFile::set_value((String *)(this + 0xa70),local_98,(Variant *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      ConfigFile::save((String *)(this + 0xa70));
      if (*(long *)(this + 0xc28) != 0) {
        lVar7 = *(long *)(*(long *)(this + 0xc28) + -8);
        if (lVar6 < lVar7) {
          CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
          Item::operator=((Item *)(lVar6 * 0x70 + *(long *)(this + 0xc28)),local_c8);
          if (local_68 == 0) {
            uStack_50 = _UNK_0011b578;
            uVar2 = _UNK_0011b574;
          }
          else {
            uStack_50 = CONCAT44(_LC13,_LC13);
            uVar2 = _LC13;
          }
          _local_58 = CONCAT44(uVar2,_LC13);
          CanvasItem::set_modulate(*(Color **)(lVar4 + 0xa18));
          sort_projects(this);
          if ((local_68 != 0) && (lVar4 = *(long *)(this + 0xc28), lVar4 != 0)) {
            lVar6 = 0;
            lVar7 = 0;
            do {
              if (*(long *)(lVar4 + -8) <= lVar7) break;
              cVar3 = String::operator==((String *)(lVar4 + 0x30 + lVar6),local_98);
              if (cVar3 != '\0') {
                ensure_project_visible(this,(int)lVar7);
                break;
              }
              lVar4 = *(long *)(this + 0xc28);
              lVar7 = lVar7 + 1;
              lVar6 = lVar6 + 0x70;
            } while (lVar4 != 0);
          }
          cVar3 = (**(code **)(*NativeMenu::singleton + 0x150))(NativeMenu::singleton,0);
          if (cVar3 != '\0') {
            update_dock_menu(this);
          }
          Item::~Item(local_c8);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        goto LAB_0010a34f;
      }
    }
  }
  else {
    if (*(char *)(*(long *)(lVar4 + 400) + 0x1d0) != '\0') {
      Node::_update_children_cache_impl();
    }
    iVar5 = *(int *)(lVar4 + 0x21c);
    if (iVar5 == 1) goto LAB_0010a310;
    if (iVar5 == 2) {
      iVar5 = *(int *)(*(long *)(lVar4 + 400) + 0x228) + *(int *)(*(long *)(lVar4 + 400) + 0x220) +
              *(int *)(lVar4 + 0x22c);
      goto LAB_0010a0c1;
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(lVar4 + 0x22c) + *(int *)(*(long *)(lVar4 + 400) + 0x220);
      goto LAB_0010a0c1;
    }
    lVar7 = *(long *)(this + 0xc28);
    lVar6 = -1;
LAB_0010a346:
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + -8);
      goto LAB_0010a34f;
    }
  }
  lVar7 = 0;
LAB_0010a34f:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::add_search_tag(String const&) */

void ProjectList::add_search_tag(String *param_1)

{
  String *this;
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  long local_38;
  long local_30;
  
  this = param_1 + 0xc38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  operator+((char *)local_40,(String *)&_LC179);
  iVar3 = String::find(this,(int)local_40);
  if (iVar3 < 0) {
    if (((*(long *)(param_1 + 0xc38) == 0) || (*(uint *)(*(long *)(param_1 + 0xc38) + -8) < 2)) ||
       (cVar2 = String::ends_with((char *)this), cVar2 != '\0')) {
      String::operator+=(this,(String *)local_40);
      goto LAB_0010a487;
    }
    operator+((char *)&local_38,(String *)&_LC178);
    String::operator+=(this,(String *)&local_38);
  }
  else {
    String::erase((int)&local_38,(int)this);
    if (*(long *)(param_1 + 0xc38) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)this);
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(param_1 + 0xc38) = lVar1;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
LAB_0010a487:
  uVar4 = ProjectManager::get_search_box();
  local_38 = 0;
  if (*(long *)(param_1 + 0xc38) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)this);
  }
  LineEdit::set_text(uVar4,(CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  sort_projects((ProjectList *)param_1);
  CowData<char32_t>::_unref(local_40);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectList::set_order_option(int) */

void __thiscall ProjectList::set_order_option(ProjectList *this,int param_1)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  StringName::StringName((StringName *)&local_50,"project_manager/sorting_order",false);
  Object::set(pSVar1,(Variant *)&local_50,(bool *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorSettings::get_singleton();
  EditorSettings::save();
  *(int *)(this + 0xc40) = param_1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    sort_projects(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::update_project_list() */

void __thiscall ProjectList::update_project_list(ProjectList *this)

{
  long lVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0xc28);
  if (*(char *)(ProjectManager::singleton + 0xb28) != '\0') {
    lVar7 = 0;
    for (lVar8 = 0; (lVar6 != 0 && (lVar8 < *(long *)(lVar6 + -8))); lVar8 = lVar8 + 1) {
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
      pOVar2 = *(Object **)(*(long *)(this + 0xc28) + 0x68 + lVar7);
      if (pOVar2 == (Object *)0x0) {
        _err_print_error("update_project_list","editor/project_manager/project_list.cpp",0x268,
                         "FATAL: Condition \"project.control == nullptr\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar4 = predelete_handler(pOVar2);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      lVar6 = *(long *)(this + 0xc28);
      lVar7 = lVar7 + 0x70;
    }
    CowData<ProjectList::Item>::resize<false>((CowData<ProjectList::Item> *)(this + 0xc28),0);
    String::parse_latin1((String *)(this + 0xc70),"");
    lVar6 = *(long *)(this + 0xc48);
    if ((lVar6 != 0) && (*(int *)(this + 0xc6c) != 0)) {
      if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) == 0) ||
         (memset(*(void **)(this + 0xc60),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) * 4),
         *(int *)(this + 0xc6c) != 0)) {
        lVar7 = 0;
        while( true ) {
          lVar8 = lVar7 * 8;
          lVar7 = lVar7 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + lVar8));
          if (*(uint *)(this + 0xc6c) <= (uint)lVar7) break;
          lVar6 = *(long *)(this + 0xc48);
        }
      }
      *(undefined4 *)(this + 0xc6c) = 0;
    }
    load_project_list(this);
    lVar6 = *(long *)(this + 0xc28);
  }
  for (lVar7 = 0; (lVar6 != 0 && (lVar7 < *(long *)(lVar6 + -8))); lVar7 = lVar7 + 1) {
    _create_project_item_control(this,(int)lVar7);
    lVar6 = *(long *)(this + 0xc28);
  }
  sort_projects(this);
  *(undefined4 *)(this + 0xc30) = 0;
  Node::set_process(SUB81(this,0));
  cVar4 = (**(code **)(*NativeMenu::singleton + 0x150))(NativeMenu::singleton,0);
  if (cVar4 != '\0') {
    update_dock_menu(this);
  }
  ScrollContainer::set_v_scroll((int)this);
  if ((update_project_list()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&update_project_list()::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&update_project_list()::{lambda()#1}::operator()()::sname,
                SUB81(SIGNAL_LIST_CHANGED,0));
    __cxa_atexit(StringName::~StringName,&update_project_list()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&update_project_list()::{lambda()#1}::operator()()::sname);
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&update_project_list()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectList::_scan_finished() */

void __thiscall ProjectList::_scan_finished(ProjectList *this)

{
  Thread *this_00;
  String *pSVar1;
  void *pvVar2;
  
  if (*(char *)(*(long *)(this + 0xc80) + 0x20) != '\0') {
    *(undefined1 *)(*(long *)(this + 0xc80) + 0x20) = 0;
  }
  Thread::wait_to_finish();
  this_00 = (Thread *)**(undefined8 **)(this + 0xc80);
  Thread::~Thread(this_00);
  Memory::free_static(this_00,false);
  if (*(long *)(this + 0xc88) != 0) {
    Window::hide();
  }
  pvVar2 = *(void **)(this + 0xc80);
  if ((*(long **)((long)pvVar2 + 0x18) != (long *)0x0) &&
     (pSVar1 = (String *)**(long **)((long)pvVar2 + 0x18), pSVar1 != (String *)0x0)) {
    do {
      add_project(this,pSVar1,false);
      pSVar1 = *(String **)(pSVar1 + 8);
    } while (pSVar1 != (String *)0x0);
    pvVar2 = *(void **)(this + 0xc80);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)((long)pvVar2 + 0x18));
  CowData<String>::_unref((CowData<String> *)((long)pvVar2 + 0x10));
  Memory::free_static(pvVar2,false);
  *(undefined8 *)(this + 0xc80) = 0;
  ConfigFile::save((String *)(this + 0xa70));
  if (*(char *)(ProjectManager::singleton + 0xb28) != '\0') {
    update_project_list(this);
    return;
  }
  return;
}



/* ProjectList::_notification(int) [clone .part.0] */

void ProjectList::_notification(int param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  ProjectList *this;
  long lVar3;
  
  this = (ProjectList *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)*(int *)(this + 0xc30);
  if (*(long *)(this + 0xc28) == 0) {
    if (lVar2 < 0) {
      lVar3 = 0;
      goto LAB_0010ab13;
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0xc28) + -8);
    if (lVar2 < lVar3) {
      if (-1 < lVar2) {
        CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 0xc28));
        if (*(char *)(*(long *)(lVar2 * 0x70 + *(long *)(this + 0xc28) + 0x68) + 0xa61) != '\0') {
          _load_project_icon(this,*(int *)(this + 0xc30));
        }
        *(int *)(this + 0xc30) = *(int *)(this + 0xc30) + 1;
        return;
      }
LAB_0010ab13:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar2,lVar3,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if (((*(long *)(this + 0xc80) == 0) || (*(char *)(*(long *)(this + 0xc80) + 0x20) == '\0')) &&
     (Node::set_process(SUB41(param_1,0)), *(long *)(this + 0xc80) != 0)) {
    _scan_finished(this);
    return;
  }
  return;
}



/* ProjectList::_notification(int) */

void __thiscall ProjectList::_notification(ProjectList *this,int param_1)

{
  if (param_1 != 0x11) {
    return;
  }
  _notification((int)this);
  return;
}



/* ProjectList::refresh_project(String const&) */

ulong __thiscall ProjectList::refresh_project(ProjectList *this,String *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_158 [14];
  char *local_e8;
  undefined8 local_e0;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = ConfigFile::has_section((String *)(this + 0xa70));
  Variant::Variant((Variant *)local_78,false);
  local_e8 = "favorite";
  local_158[0] = 0;
  local_e0 = 8;
  String::parse_latin1((StrRange *)local_158);
  ConfigFile::get_value((String *)local_58,(String *)(this + 0xa70),(Variant *)param_1);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar8 = 0;
  local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
  lVar9 = 0;
  cVar4 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
                    ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)
                     (this + 0xc48),param_1,(uint *)&local_e8);
  lVar1 = *(long *)(this + 0xc28);
  while( true ) {
    if ((lVar1 == 0) || (*(long *)(lVar1 + -8) <= lVar9)) goto LAB_0010acdf;
    cVar5 = String::operator==((String *)(lVar1 + 0x30 + lVar8),param_1);
    if (cVar5 != '\0') break;
    lVar1 = *(long *)(this + 0xc28);
    lVar9 = lVar9 + 1;
    lVar8 = lVar8 + 0x70;
  }
  _remove_project(this,(int)lVar9,false);
LAB_0010acdf:
  if (cVar2 == '\0') {
    uVar7 = 0xffffffff;
  }
  else {
    load_project_data((ProjectList *)local_158,param_1,bVar3);
    Item::Item((Item *)&local_e8,(Item *)local_158);
    Vector<ProjectList::Item>::push_back
              ((Vector<ProjectList::Item> *)(this + 0xc20),(Item *)&local_e8);
    Item::~Item((Item *)&local_e8);
    if (*(long *)(this + 0xc28) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = (int)*(undefined8 *)(*(long *)(this + 0xc28) + -8) + -1;
    }
    lVar8 = 0;
    _create_project_item_control(this,iVar6);
    sort_projects(this);
    lVar1 = *(long *)(this + 0xc28);
    for (uVar7 = 0; (lVar1 != 0 && ((long)uVar7 < *(long *)(lVar1 + -8))); uVar7 = uVar7 + 1) {
      cVar2 = String::operator==((String *)(lVar1 + 0x30 + lVar8),param_1);
      if (cVar2 != '\0') {
        iVar6 = (int)uVar7;
        if (cVar4 != '\0') {
          _clear_project_selection(this);
          _select_project_nocheck(this,iVar6);
          ensure_project_visible(this,iVar6);
        }
        _load_project_icon(this,iVar6);
        goto LAB_0010ad89;
      }
      lVar1 = *(long *)(this + 0xc28);
      lVar8 = lVar8 + 0x70;
    }
    uVar7 = 0xffffffff;
LAB_0010ad89:
    Item::~Item((Item *)local_158);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
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
  return (uint)CONCAT71(0x11b3,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b3,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x11b3,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b3,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b3,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Variant_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Variant_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Ref<InputEvent> const&,
   Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectListItemControl, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectListItemControl,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectListItemControl,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Variant const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,Variant_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectList,void,Variant_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectList, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<ProjectList,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectList, void, Ref<InputEvent> const&,
   Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*>::get_argument_count
          (CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectList, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectList,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectListItemControl, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectListItemControl,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectListItemControl,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<ProjectList, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectListItemControl, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectListItemControl,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectListItemControl,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectList, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Ref<InputEvent> const&,
   Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Variant_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Variant_const&> *this)

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



/* ProjectListItemControl::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProjectListItemControl::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectList::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProjectList::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00120008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00120008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ProjectListItemControl::_property_can_revertv(StringName const&) const */

undefined8 ProjectListItemControl::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00120008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ProjectList::_property_can_revertv(StringName const&) const */

undefined8 ProjectList::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00120008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00119e68;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00119e68;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_0010b5a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b5a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010b60e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010b60e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ProjectList, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void>::get_object
          (CallableCustomMethodPointer<ProjectList,void> *this)

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
      goto LAB_0010b73d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b73d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b73d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectList, void, Variant const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,Variant_const&>::get_object
          (CallableCustomMethodPointer<ProjectList,void,Variant_const&> *this)

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
      goto LAB_0010b83d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b83d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b83d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

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
      goto LAB_0010b93d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b93d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b93d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectList, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,Node*>::get_object
          (CallableCustomMethodPointer<ProjectList,void,Node*> *this)

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
      goto LAB_0010ba3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ba3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ba3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectListItemControl, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectListItemControl,void>::get_object
          (CallableCustomMethodPointer<ProjectListItemControl,void> *this)

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
      goto LAB_0010bb3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bb3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bb3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectList, void, Ref<InputEvent> const&, Node*>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*>::get_object
          (CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*> *this)

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
      goto LAB_0010bc3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bc3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bc3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ProjectList::_validate_propertyv(PropertyInfo&) const */

void ProjectList::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00120010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* ProjectList::is_class_ptr(void*) const */

uint ProjectList::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &ScrollContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00120018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ProjectListItemControl::_validate_propertyv(PropertyInfo&) const */

void ProjectListItemControl::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00120018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00120018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ProjectList::_setv(StringName const&, Variant const&) */

undefined8 ProjectList::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00120020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00120020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00120020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ProjectListItemControl::_setv(StringName const&, Variant const&) */

undefined8 ProjectListItemControl::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00120020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
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
    uVar1 = (uint)CONCAT71(0x11b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11b3,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ProjectListItemControl::is_class_ptr(void*) const */

ulong ProjectListItemControl::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x11b3,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x11b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11b3,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11b3,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11b3,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x0010c2d8) */
/* ProjectList::_getv(StringName const&, Variant&) const */

undefined8 ProjectList::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00120028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c348) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00120028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c3b8) */
/* ProjectListItemControl::_getv(StringName const&, Variant&) const */

undefined8 ProjectListItemControl::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00120028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c428) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00120028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* ProjectList::_get_class_namev() const */

undefined8 * ProjectList::_get_class_namev(void)

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
                ((StringName *)&_get_class_namev()::_class_name_static,"ProjectList");
      goto LAB_0010c4ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectList");
LAB_0010c4ee:
  return &_get_class_namev()::_class_name_static;
}



/* ProjectListItemControl::_get_class_namev() const */

undefined8 * ProjectListItemControl::_get_class_namev(void)

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
                ((StringName *)&_get_class_namev()::_class_name_static,"ProjectListItemControl");
      goto LAB_0010c5de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectListItemControl");
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
LAB_0010c753:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c753;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c7be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c7be:
  return &_get_class_namev()::_class_name_static;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_0010c833:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c833;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010c89e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010c89e:
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
      if (StringName::configured == '\0') goto LAB_0010ce60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ce60:
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
      if (StringName::configured == '\0') goto LAB_0010cec0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cec0:
  Control::~Control((Control *)this);
  return;
}



/* ProjectListItemControl::~ProjectListItemControl() */

void __thiscall ProjectListItemControl::~ProjectListItemControl(ProjectListItemControl *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cf20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cf20:
  Control::~Control((Control *)this);
  return;
}



/* ProjectListItemControl::~ProjectListItemControl() */

void __thiscall ProjectListItemControl::~ProjectListItemControl(ProjectListItemControl *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cf80;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cf80:
  Control::~Control((Control *)this);
  operator_delete(this,0xa68);
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
      if (StringName::configured == '\0') goto LAB_0010cff0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cff0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_0010d060;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d060:
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
    if ((code *)PTR__notification_00120030 != Container::_notification) {
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
  if ((code *)PTR__notification_00120030 == Container::_notification) {
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
    if ((code *)PTR__notification_00120030 != Container::_notification) {
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
  if ((code *)PTR__notification_00120030 == Container::_notification) {
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



/* Callable Callable::bind<String>(String) const */

Variant ** Callable::bind<String>(Variant **param_1,int param_2,String *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
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



/* Callable create_custom_callable_function_pointer<ProjectList, String const&>(ProjectList*, char
   const*, void (ProjectList::*)(String const&)) */

ProjectList *
create_custom_callable_function_pointer<ProjectList,String_const&>
          (ProjectList *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011af08;
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



/* Callable create_custom_callable_function_pointer<ProjectListItemControl>(ProjectListItemControl*,
   char const*, void (ProjectListItemControl::*)()) */

ProjectListItemControl *
create_custom_callable_function_pointer<ProjectListItemControl>
          (ProjectListItemControl *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011af98;
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



/* Callable create_custom_callable_function_pointer<ProjectList>(ProjectList*, char const*, void
   (ProjectList::*)()) */

ProjectList *
create_custom_callable_function_pointer<ProjectList>
          (ProjectList *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011b028;
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



/* Callable Callable::bind<ProjectListItemControl*>(ProjectListItemControl*) const */

ProjectListItemControl * Callable::bind<ProjectListItemControl*>(ProjectListItemControl *param_1)

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



/* Callable create_custom_callable_function_pointer<ProjectList, Variant const&>(ProjectList*, char
   const*, void (ProjectList::*)(Variant const&)) */

ProjectList *
create_custom_callable_function_pointer<ProjectList,Variant_const&>
          (ProjectList *param_1,char *param_2,_func_void_Variant_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011b1d8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Variant_ptr **)(this + 0x20) = param_3 + 1;
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



/* OS::create_instance(List<String, DefaultAllocator> const&, long*) */

undefined4 __thiscall OS::create_instance(OS *this,List *param_1,long *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)this + 0x118);
  (**(code **)(*(long *)this + 0x100))(aCStack_38,this);
  uVar2 = (*pcVar1)(this,aCStack_38,param_1,param_2,0);
  CowData<char32_t>::_unref(aCStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010daf8) */
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



/* WARNING: Removing unreachable block (ram,0x0010dda8) */
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



/* WARNING: Removing unreachable block (ram,0x0010e090) */
/* String vformat<String, Error>(String const&, String const, Error const) */

undefined8 * vformat<String,Error>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

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



/* ProjectList::get_class() const */

void ProjectList::get_class(void)

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



/* ProjectListItemControl::get_class() const */

void ProjectListItemControl::get_class(void)

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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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
LAB_0010ec87:
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
      goto LAB_0010ec87;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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



/* CallableCustomMethodPointer<ProjectList, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectList,void>::call
          (CallableCustomMethodPointer<ProjectList,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010efff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010efff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010efd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f0b0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010efff:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC63,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f0b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectListItemControl, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectListItemControl,void>::call
          (CallableCustomMethodPointer<ProjectListItemControl,void> *this,Variant **param_1,
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
      goto LAB_0010f20f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f20f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f2c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f20f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC63,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f2c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectList, void, Variant const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Variant_const&>::call
          (CallableCustomMethodPointer<ProjectList,void,Variant_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> aCStack_68 [8];
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  String local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_50[0] = (String)0x0;
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
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar5[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar6 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar6 & 1) != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,0);
            if (cVar3 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 0;
            }
            Variant::Variant((Variant *)local_48,*param_1);
            (*pcVar6)((long *)(lVar1 + lVar2),(Variant *)local_48);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010f39e;
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
  local_58 = 0;
  String::parse_latin1((String *)&local_58,"\', can\'t call method.");
  uitos((ulong)aCStack_68);
  operator+((char *)local_60,(String *)"Invalid Object id \'");
  String::operator+(local_50,(String *)local_60);
  _err_print_error(&_LC63,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_50,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref(aCStack_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_0010f39e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Node*>::call
          (CallableCustomMethodPointer<ProjectList,void,Node*> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f785;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0010f785;
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
LAB_0010f690:
          uVar3 = _LC64;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_0010f690;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0010f836;
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
LAB_0010f785:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC63,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f836:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectList, void, Ref<InputEvent> const&, Node*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*>::call
          (CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar12 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010f905;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010f905;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar12 & 1) != 0) {
          pcVar12 = *(code **)(pcVar12 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_0010f98f:
          uVar4 = _LC65;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar8 == (Object *)0x0) ||
              (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
             (pOVar6 != (Object *)0x0)) goto LAB_0010f98f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC64;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar8 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010fa57:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar8 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar8 != (Object *)0x0) goto LAB_0010fa57;
            }
          }
        }
        (*pcVar12)((long *)(lVar1 + lVar2),(String *)&local_48,pOVar6);
        if (((local_48 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar6 = local_48, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        goto LAB_0010f905;
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
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC63,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010f905:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectList, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::call
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this,Variant **param_1,
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
            uVar3 = _LC66;
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
        goto LAB_0010fd0e;
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
  _err_print_error(&_LC63,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010fd0e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  String *pSVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  String *pSVar6;
  CowData<char32_t> *this;
  long lVar7;
  String *pSVar8;
  String *pSVar9;
  long lVar10;
  CowData *pCVar11;
  long in_FS_OFFSET;
  long local_90;
  long local_78;
  long local_70;
  long local_50;
  long local_48;
  long local_40;
  
  lVar7 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar7) {
    local_90 = param_2;
    if (param_4 != 0) {
      pSVar6 = param_3 + param_1 * 8;
      local_78 = param_2;
      local_70 = param_4;
LAB_00110168:
      local_70 = local_70 + -1;
      pSVar9 = param_3 + ((lVar7 >> 1) + param_1) * 8;
      pSVar2 = param_3 + local_78 * 8 + -8;
      cVar5 = String::operator<(pSVar6,pSVar9);
      if (cVar5 == '\0') {
        cVar5 = String::operator<(pSVar6,pSVar2);
        pSVar8 = pSVar6;
        if (cVar5 != '\0') goto LAB_001101c6;
        cVar5 = String::operator<(pSVar9,pSVar2);
      }
      else {
        cVar5 = String::operator<(pSVar9,pSVar2);
        pSVar8 = pSVar9;
        if (cVar5 != '\0') goto LAB_001101c6;
        cVar5 = String::operator<(pSVar6,pSVar2);
        pSVar9 = pSVar6;
      }
      pSVar8 = pSVar9;
      if (cVar5 != '\0') {
        pSVar8 = pSVar2;
      }
LAB_001101c6:
      local_48 = 0;
      if (*(long *)pSVar8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar8);
      }
      lVar7 = local_78;
      pSVar9 = pSVar6;
      local_90 = param_1;
      do {
        cVar5 = String::operator<(pSVar9,(String *)&local_48);
        if (cVar5 == '\0') {
LAB_00110227:
          lVar7 = lVar7 + -1;
          this = (CowData<char32_t> *)(param_3 + lVar7 * 8);
          while (cVar5 = String::operator<((String *)&local_48,(String *)this), cVar5 != '\0') {
            if (param_1 == lVar7) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar7 = lVar7 + -1;
            this = this + -8;
          }
          if (lVar7 <= local_90) goto LAB_001102f0;
          lVar10 = *(long *)pSVar9;
          *(undefined8 *)pSVar9 = 0;
          if (*(long *)this != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar9);
            *(undefined8 *)pSVar9 = *(undefined8 *)this;
            *(undefined8 *)this = 0;
          }
          if (lVar10 != 0) {
            CowData<char32_t>::_unref(this);
            *(long *)this = lVar10;
          }
        }
        else if (local_78 + -1 == local_90) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00110227;
        }
        pSVar9 = pSVar9 + 8;
        local_90 = local_90 + 1;
      } while( true );
    }
LAB_001103b7:
    lVar10 = lVar7 + -2 >> 1;
    pSVar6 = param_3 + (lVar10 + param_1) * 8;
    while( true ) {
      local_48 = 0;
      if (*(long *)pSVar6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar6);
      }
      pSVar6 = (String *)((CowData *)pSVar6 + -8);
      adjust_heap(param_1,lVar10,lVar7,(CowData<char32_t> *)&local_48,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
    }
    pSVar6 = param_3 + local_90 * 8 + -8;
    pCVar11 = (CowData *)(param_3 + param_1 * 8);
    lVar7 = (local_90 + -1) - param_1;
    do {
      local_50 = 0;
      if (*(long *)pSVar6 == 0) {
        if (*(long *)pCVar11 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar6,pCVar11);
        }
LAB_0011053f:
        local_48 = 0;
        adjust_heap(param_1,0,lVar7,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)pSVar6);
        lVar10 = local_50;
        if (*(long *)pSVar6 != *(long *)pCVar11) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar6,pCVar11);
        }
        local_48 = 0;
        if (lVar10 == 0) goto LAB_0011053f;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_50);
        lVar4 = local_48;
        adjust_heap(param_1,0,lVar7,(CowData<char32_t> *)&local_48,param_3);
        if (lVar4 == 0) {
LAB_001104e7:
          LOCK();
          plVar1 = (long *)(lVar10 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_50 + -0x10),false);
          }
        }
        else {
          LOCK();
          plVar1 = (long *)(lVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
          lVar10 = local_50;
          if (local_50 != 0) goto LAB_001104e7;
        }
      }
      pSVar6 = (String *)((CowData<char32_t> *)pSVar6 + -8);
      bVar3 = 1 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar3);
  }
LAB_0011038f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001102f0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  lVar7 = local_90 - param_1;
  introsort(local_90,local_78,param_3,local_70);
  if (lVar7 < 0x11) goto LAB_0011038f;
  local_78 = local_90;
  if (local_70 == 0) goto LAB_001103b7;
  goto LAB_00110168;
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
    if (cVar5 != '\0') goto LAB_0011069b;
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
      if (cVar5 != '\0') goto LAB_0011069b;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Object::is_class((Object *)this,param_1);
        return uVar6;
      }
      goto LAB_0011079e;
    }
  }
LAB_0011069b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011079e:
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
    if (cVar5 != '\0') goto LAB_001108bb;
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
      if (cVar5 != '\0') goto LAB_001108bb;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_001109be;
    }
  }
LAB_001108bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001109be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00110acb;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110acb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::is_class(String const&) const */

undefined8 __thiscall ProjectList::is_class(ProjectList *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00110c2b;
  }
  cVar5 = String::operator==(param_1,"ProjectList");
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
      if (cVar5 != '\0') goto LAB_00110c2b;
    }
    cVar5 = String::operator==(param_1,"ScrollContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00110d2e;
    }
  }
LAB_00110c2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110d2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)PTR__bind_methods_00120038 != Object::_bind_methods) {
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
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
      if ((code *)PTR__bind_methods_00120048 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_00120040 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
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
              if ((code *)PTR__bind_methods_00120048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00120050 !=
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
      if ((code *)PTR__bind_methods_00120058 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00120048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00120050 !=
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
      if ((code *)PTR__bind_methods_00120058 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_00111d8f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00111d8f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00111eeb;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
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
      if (cVar5 != '\0') goto LAB_00111eeb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00111eeb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001120eb;
  }
  cVar4 = String::operator==(param_1,"ConfigFile");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001120eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::is_class(String const&) const */

undefined8 __thiscall ProjectListItemControl::is_class(ProjectListItemControl *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011223b;
  }
  cVar5 = String::operator==(param_1,"ProjectListItemControl");
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
      if (cVar5 != '\0') goto LAB_0011223b;
    }
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0011233e;
    }
  }
LAB_0011223b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011233e:
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
    if (cVar5 != '\0') goto LAB_0011244b;
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
      if (cVar5 != '\0') goto LAB_0011244b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011254e;
    }
  }
LAB_0011244b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011254e:
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
    if (cVar5 != '\0') goto LAB_0011265b;
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
      if (cVar5 != '\0') goto LAB_0011265b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011275e;
    }
  }
LAB_0011265b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011275e:
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
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
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
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
      goto LAB_001129ec;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001129ec:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
  local_78 = &_LC76;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC76;
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
      goto LAB_00112c3c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112c3c:
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
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
      goto LAB_00112ea1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112ea1:
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
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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
      goto LAB_00113151;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113151:
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
  if ((code *)PTR__get_property_list_00120060 != Object::_get_property_list) {
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
      goto LAB_00113421;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113421:
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
  if ((code *)PTR__get_property_list_00120068 != CanvasItem::_get_property_list) {
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
      goto LAB_001136f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001136f1:
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
      goto LAB_001139a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001139a1:
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
      goto LAB_00113c51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113c51:
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



/* ProjectListItemControl::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ProjectListItemControl::_get_property_listv(ProjectListItemControl *this,List *param_1,bool param_2)

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
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProjectListItemControl";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectListItemControl";
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
      goto LAB_00113f01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113f01:
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
  StringName::StringName((StringName *)&local_78,"ProjectListItemControl",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,true);
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
      goto LAB_001141b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001141b1:
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



/* ScrollContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ScrollContainer::_get_property_listv(ScrollContainer *this,List *param_1,bool param_2)

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
  local_78 = "ScrollContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ScrollContainer";
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
      goto LAB_00114461;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114461:
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
  StringName::StringName((StringName *)&local_78,"ScrollContainer",false);
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



/* ProjectList::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ProjectList::_get_property_listv(ProjectList *this,List *param_1,bool param_2)

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
    ScrollContainer::_get_property_listv((ScrollContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProjectList";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectList";
  local_98 = 0;
  local_70 = 0xb;
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
      goto LAB_00114711;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114711:
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
  StringName::StringName((StringName *)&local_78,"ProjectList",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ScrollContainer::_get_property_listv((ScrollContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectListItemControl::_bind_methods() [clone .cold] */

void ProjectListItemControl::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::_bind_methods() [clone .cold] */

void ProjectList::_bind_methods(void)

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



/* CowData<ProjectList::Item>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ProjectList::Item>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectList::_on_favorite_pressed(Node*) [clone .cold] */

void ProjectList::_on_favorite_pressed(Node *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectListItemControl::_initialize_classv() */

void ProjectListItemControl::_initialize_classv(void)

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
    if (HBoxContainer::initialize_class()::initialized == '\0') {
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
                if ((code *)PTR__bind_methods_00120048 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00120050 !=
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
        if ((code *)PTR__bind_methods_00120058 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "HBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProjectListItemControl";
    local_70 = 0;
    local_50 = 0x16;
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



/* ProjectList::_initialize_classv() */

void ProjectList::_initialize_classv(void)

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
    if (ScrollContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00120048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00120050 !=
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
      String::parse_latin1((String *)&local_70,"ScrollContainer");
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
      if ((code *)PTR__bind_methods_00120070 != Container::_bind_methods) {
        ScrollContainer::_bind_methods();
      }
      ScrollContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "ScrollContainer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProjectList";
    local_70 = 0;
    local_50 = 0xb;
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



/* WARNING: Removing unreachable block (ram,0x00115640) */
/* ProjectListItemControl::_notificationv(int, bool) */

void __thiscall
ProjectListItemControl::_notificationv(ProjectListItemControl *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(iVar1);
    if ((code *)PTR__notification_00120030 != Container::_notification) {
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
  if ((code *)PTR__notification_00120030 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(iVar1);
  return;
}



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::_lookup_pos(String
   const&, unsigned int&) const */

undefined8 __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,uint *param_2)

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
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)this != 0) && (*(int *)(this + 0x24) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar11 = String::hash();
    uVar16 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x18);
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)
                                      (*(long *)this +
                                      (ulong)*(uint *)(*(long *)(this + 8) + lVar15 * 4) * 8),
                                      param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = *(uint *)(*(long *)(this + 8) + lVar15 * 4);
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x18);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
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
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  String *in_RDX;
  ulong uVar31;
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *in_RSI;
  uint uVar32;
  ulong uVar33;
  undefined4 uVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar25 = (ulong)uVar23 * 4;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar26;
    uVar26 = Memory::alloc_static((ulong)uVar23 * 8,false);
    *(undefined8 *)in_RSI = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 8) = uVar26;
    if (uVar23 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar25);
    }
  }
  local_44 = 0;
  cVar22 = _lookup_pos(in_RSI,in_RDX,&local_44);
  if (cVar22 == '\0') {
    if ((float)uVar23 * __LC102 < (float)(*(int *)(in_RSI + 0x24) + 1)) {
      if (*(int *)(in_RSI + 0x20) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar30 = *(int *)(in_RSI + 0x24);
        uVar23 = 0xffffffff;
        goto LAB_00115ca3;
      }
      uVar23 = *(int *)(in_RSI + 0x20) + 1;
      uVar25 = (ulong)uVar23;
      if (uVar23 < 2) {
        uVar25 = 2;
      }
      uVar23 = *(uint *)(hash_table_size_primes + uVar25 * 4);
      *(int *)(in_RSI + 0x20) = (int)uVar25;
      pvVar2 = *(void **)(in_RSI + 0x18);
      uVar25 = (ulong)uVar23 * 4;
      pvVar3 = *(void **)(in_RSI + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar26;
      uVar26 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar23 * 8,false);
      *(undefined8 *)in_RSI = uVar26;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar26;
      lVar27 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar25,false);
      *(long *)(in_RSI + 8) = lVar27;
      if (uVar23 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar25);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar25 = 0;
        lVar4 = *(long *)(in_RSI + 0x18);
        lVar5 = *(long *)(in_RSI + 0x10);
        do {
          uVar35 = uVar25 & 0xffffffff;
          uVar34 = (undefined4)uVar25;
          uVar36 = 0;
          uVar23 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar25 * 4) * 4);
          uVar31 = (ulong)uVar23;
          uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar33 = CONCAT44(0,uVar24);
          lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar31 * lVar28;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar33;
          lVar29 = SUB168(auVar6 * auVar14,8) * 4;
          iVar30 = SUB164(auVar6 * auVar14,8);
          puVar37 = (uint *)(lVar4 + lVar29);
          uVar1 = *puVar37;
          if (uVar1 == 0) {
            lVar28 = uVar25 * 4;
          }
          else {
            do {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar1 * lVar28;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar33;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)((uVar24 + iVar30) - SUB164(auVar7 * auVar15,8)) * lVar28;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar33;
              local_98 = SUB164(auVar8 * auVar16,8);
              if (local_98 < uVar36) {
                *(int *)(lVar5 + uVar35 * 4) = iVar30;
                uVar23 = *puVar37;
                *puVar37 = (uint)uVar31;
                uVar1 = *(uint *)(lVar29 + lVar27);
                uVar31 = (ulong)uVar23;
                *(uint *)(lVar29 + lVar27) = (uint)uVar35;
                uVar35 = (ulong)uVar1;
                uVar36 = local_98;
              }
              uVar34 = (undefined4)uVar35;
              uVar23 = (uint)uVar31;
              uVar36 = uVar36 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar30 + 1) * lVar28;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar33;
              lVar29 = SUB168(auVar9 * auVar17,8) * 4;
              iVar30 = SUB164(auVar9 * auVar17,8);
              puVar37 = (uint *)(lVar4 + lVar29);
              uVar1 = *puVar37;
            } while (uVar1 != 0);
            lVar28 = uVar35 << 2;
          }
          *puVar37 = uVar23;
          uVar25 = uVar25 + 1;
          *(int *)(lVar5 + lVar28) = iVar30;
          *(undefined4 *)(lVar27 + lVar29) = uVar34;
        } while ((uint)uVar25 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(pvVar3,false);
    }
    uVar24 = String::hash();
    uVar23 = 1;
    if (uVar24 != 0) {
      uVar23 = uVar24;
    }
    uVar25 = (ulong)uVar23;
    this = (CowData<char32_t> *)(*(long *)in_RSI + (ulong)*(uint *)(in_RSI + 0x24) * 8);
    *(undefined8 *)this = 0;
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar24 = *(uint *)(in_RSI + 0x24);
    lVar4 = *(long *)(in_RSI + 0x18);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
    uVar31 = CONCAT44(0,uVar1);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar25 * lVar5;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar31;
    lVar27 = SUB168(auVar10 * auVar18,8) * 4;
    iVar30 = SUB164(auVar10 * auVar18,8);
    puVar37 = (uint *)(lVar4 + lVar27);
    uVar36 = *puVar37;
    if (uVar36 == 0) {
      local_78 = *(long *)(in_RSI + 0x10);
      lVar29 = *(long *)(in_RSI + 8);
    }
    else {
      uVar32 = 0;
      local_78 = *(long *)(in_RSI + 0x10);
      lVar29 = *(long *)(in_RSI + 8);
      do {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar36 * lVar5;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar31;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar11 * auVar19,8)) * lVar5;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar31;
        local_98 = SUB164(auVar12 * auVar20,8);
        if (local_98 < uVar32) {
          *(int *)(local_78 + (ulong)uVar24 * 4) = iVar30;
          uVar23 = *puVar37;
          *puVar37 = (uint)uVar25;
          uVar36 = *(uint *)(lVar27 + lVar29);
          uVar25 = (ulong)uVar23;
          *(uint *)(lVar27 + lVar29) = uVar24;
          uVar24 = uVar36;
          uVar32 = local_98;
        }
        uVar23 = (uint)uVar25;
        uVar32 = uVar32 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(iVar30 + 1) * lVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar31;
        lVar27 = SUB168(auVar13 * auVar21,8) * 4;
        iVar30 = SUB164(auVar13 * auVar21,8);
        puVar37 = (uint *)(lVar4 + lVar27);
        uVar36 = *puVar37;
      } while (uVar36 != 0);
    }
    *puVar37 = uVar23;
    *(int *)(local_78 + (ulong)uVar24 * 4) = iVar30;
    *(uint *)(lVar29 + lVar27) = uVar24;
    uVar23 = *(uint *)(in_RSI + 0x24);
    iVar30 = uVar23 + 1;
    *(int *)(in_RSI + 0x24) = iVar30;
  }
  else {
    iVar30 = *(int *)(in_RSI + 0x24);
    uVar23 = local_44;
  }
LAB_00115ca3:
  *(undefined8 *)param_1 = *(undefined8 *)in_RSI;
  *(int *)(param_1 + 8) = iVar30;
  *(uint *)(param_1 + 0xc) = uVar23;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* ProjectList::Item::~Item() */

void __thiscall ProjectList::Item::~Item(Item *this)

{
  CowData<String>::_unref((CowData<String> *)(this + 0x50));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  CowData<String>::_unref((CowData<String> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* ProjectList::Item::Item(ProjectList::Item const&) */

void __thiscall ProjectList::Item::Item(Item *this,Item *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  *(undefined8 *)(this + 0x20) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    CowData<String>::_ref((CowData<String> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined8 *)(this + 0x28) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  *(undefined8 *)(this + 0x38) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    CowData<String>::_ref((CowData<String> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x60) = uVar2;
  return;
}



/* ProjectList::Item::Item(String const&, String const&, String const&, Vector<String> const&,
   String const&, String const&, String const&, Vector<String> const&, unsigned long, bool, bool,
   bool, bool, int) */

void __thiscall
ProjectList::Item::Item
          (Item *this,String *param_1,String *param_2,String *param_3,Vector *param_4,
          String *param_5,String *param_6,String *param_7,Vector *param_8,ulong param_9,
          bool param_10,bool param_11,bool param_12,bool param_13,int param_14)

{
  CowData *pCVar1;
  long *plVar2;
  String *this_00;
  char cVar3;
  long lVar4;
  long lVar5;
  CowData *pCVar6;
  CowData<char32_t> *pCVar7;
  CowData<char32_t> *pCVar8;
  CowData<char32_t> *pCVar9;
  long lVar10;
  long in_FS_OFFSET;
  CowData *local_90;
  long local_68;
  long local_60 [2];
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x60) = 0;
  lVar5 = *(long *)param_1;
  *(undefined8 *)(this + 0x68) = 0;
  if (lVar5 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
    lVar5 = *(long *)(this + 8);
  }
  if (*(long *)param_2 != lVar5) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)param_2);
  }
  if (*(long *)(this + 0x10) != *(long *)param_3) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)param_3);
  }
  if (*(long *)(this + 0x20) != *(long *)(param_4 + 8)) {
    CowData<String>::_ref((CowData<String> *)(this + 0x20),(CowData *)(param_4 + 8));
  }
  if (*(long *)(this + 0x30) != *(long *)param_5) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)param_5);
  }
  if (*(long *)(this + 0x38) != *(long *)param_6) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)param_6);
  }
  if (*(long *)(this + 0x40) != *(long *)param_7) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)param_7);
  }
  if (*(long *)(this + 0x50) != *(long *)(param_8 + 8)) {
    CowData<String>::_ref((CowData<String> *)(this + 0x50),(CowData *)(param_8 + 8));
  }
  *(undefined8 *)(this + 0x68) = 0;
  local_50[0] = (String *)0x0;
  *(ulong *)(this + 0x58) = param_9;
  *(uint *)(this + 0x60) = CONCAT31(CONCAT21(CONCAT11(param_13,param_12),param_11),param_10);
  *(int *)(this + 100) = param_14;
  if (*(long *)(this + 0x20) != 0) {
    CowData<String>::_ref((CowData<String> *)local_50,(CowData *)(this + 0x20));
    if ((local_50[0] != (String *)0x0) && (lVar5 = *(long *)(local_50[0] + -8), lVar5 != 0)) {
      CowData<String>::_copy_on_write((CowData<String> *)local_50);
      this_00 = local_50[0];
      if (lVar5 == 1) {
        SortArray<String,_DefaultComparator<String>,true>::introsort(0,1,local_50[0],0);
      }
      else {
        lVar4 = 0;
        lVar10 = lVar5;
        do {
          lVar10 = lVar10 >> 1;
          lVar4 = lVar4 + 1;
        } while (lVar10 != 1);
        SortArray<String,_DefaultComparator<String>,true>::introsort(0,lVar5,local_50[0],lVar4 * 2);
        pCVar8 = (CowData<char32_t> *)(this_00 + 8);
        if (lVar5 < 0x11) {
          lVar10 = 1;
          pCVar9 = pCVar8;
          do {
            local_90 = (CowData *)local_60;
            local_60[0] = 0;
            pCVar6 = (CowData *)pCVar9;
            lVar4 = lVar10;
            if (*(long *)pCVar9 == 0) {
              cVar3 = String::operator<((String *)local_90,this_00);
              if (cVar3 != '\0') goto LAB_001166c8;
LAB_0011674d:
              local_68 = 0;
              if (local_60[0] != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_90);
              }
              while( true ) {
                pCVar7 = (CowData<char32_t> *)pCVar6;
                pCVar6 = (CowData *)(pCVar7 + -8);
                cVar3 = String::operator<((String *)&local_68,(String *)pCVar6);
                if (cVar3 == '\0') break;
                if (pCVar7 == pCVar8) {
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  break;
                }
                if (*(long *)pCVar7 != *(long *)(pCVar7 + -8)) {
                  CowData<char32_t>::_ref(pCVar7,pCVar6);
                }
              }
              if (*(long *)pCVar7 != local_68) {
                CowData<char32_t>::_ref(pCVar7,(CowData *)&local_68);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)pCVar9);
              cVar3 = String::operator<((String *)local_90,this_00);
              if (cVar3 == '\0') goto LAB_0011674d;
LAB_001166c8:
              do {
                local_90 = (CowData *)local_60;
                if (*(long *)pCVar6 != *(long *)((CowData<char32_t> *)pCVar6 + -8)) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)pCVar6,
                             (CowData *)((CowData<char32_t> *)pCVar6 + -8));
                }
                lVar4 = lVar4 + -1;
                pCVar6 = (CowData *)((CowData<char32_t> *)pCVar6 + -8);
              } while (lVar4 != 0);
              if (*(long *)this_00 != local_60[0]) {
                CowData<char32_t>::_ref((CowData<char32_t> *)this_00,local_90);
              }
            }
            local_90 = (CowData *)local_60;
            lVar10 = lVar10 + 1;
            pCVar9 = (CowData<char32_t> *)((CowData *)pCVar9 + 8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          } while (lVar5 != lVar10);
        }
        else {
          local_90 = (CowData *)0x1;
          pCVar9 = pCVar8;
          do {
            local_60[0] = 0;
            if (*(long *)pCVar9 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_60,(CowData *)pCVar9);
            }
            cVar3 = String::operator<((String *)local_60,this_00);
            pCVar6 = (CowData *)pCVar9;
            if (cVar3 == '\0') {
              local_68 = 0;
              if (local_60[0] != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_60);
              }
              while( true ) {
                pCVar7 = (CowData<char32_t> *)pCVar6;
                pCVar6 = (CowData *)(pCVar7 + -8);
                cVar3 = String::operator<((String *)&local_68,(String *)pCVar6);
                if (cVar3 == '\0') break;
                if (pCVar8 == pCVar7) {
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  break;
                }
                if (*(long *)pCVar7 != *(long *)(pCVar7 + -8)) {
                  CowData<char32_t>::_ref(pCVar7,pCVar6);
                }
              }
              if (*(long *)pCVar7 != local_68) {
                CowData<char32_t>::_ref(pCVar7,(CowData *)&local_68);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            }
            else {
              do {
                pCVar1 = (CowData *)((CowData<char32_t> *)pCVar6 + -8);
                if (*(long *)pCVar6 != *(long *)((CowData<char32_t> *)pCVar6 + -8)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)pCVar6,pCVar1);
                }
                pCVar6 = pCVar1;
              } while (this_00 != (String *)pCVar1);
              if (*(long *)this_00 != local_60[0]) {
                CowData<char32_t>::_ref((CowData<char32_t> *)this_00,(CowData *)local_60);
              }
            }
            pCVar9 = (CowData<char32_t> *)((CowData *)pCVar9 + 8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
            local_90 = (CowData *)((long)local_90 + 1);
          } while (local_90 != (CowData *)0x10);
          local_90 = (CowData *)(this_00 + 0x80);
          lVar10 = 0x10;
          do {
            local_60[0] = 0;
            pCVar6 = local_90;
            lVar4 = lVar10;
            if (*(long *)local_90 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_60,local_90);
            }
            while( true ) {
              pCVar8 = (CowData<char32_t> *)pCVar6;
              lVar4 = lVar4 + -1;
              pCVar6 = (CowData *)(pCVar8 + -8);
              cVar3 = String::operator<((String *)local_60,(String *)pCVar6);
              if (cVar3 == '\0') break;
              if (lVar4 == 0) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              if (*(long *)pCVar8 != *(long *)(pCVar8 + -8)) {
                CowData<char32_t>::_ref(pCVar8,pCVar6);
              }
            }
            if (*(long *)pCVar8 != local_60[0]) {
              CowData<char32_t>::_ref(pCVar8,(CowData *)local_60);
            }
            lVar4 = local_60[0];
            if (local_60[0] != 0) {
              LOCK();
              plVar2 = (long *)(local_60[0] + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_60[0] = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar10 = lVar10 + 1;
            local_90 = local_90 + 8;
          } while (lVar5 != lVar10);
        }
      }
    }
  }
  local_60[0] = 0;
  String::join((Vector *)&local_68);
  if (*(long *)(this + 0x28) != local_68) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
    lVar5 = local_68;
    local_68 = 0;
    *(long *)(this + 0x28) = lVar5;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<String>::_unref((CowData<String> *)local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_00116bc0:
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
  if (lVar9 == 0) goto LAB_00116bc0;
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
    goto LAB_00116c16;
  }
  if (lVar9 == lVar5) {
LAB_00116b3b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00116c16:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00116aaf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00116b3b;
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
LAB_00116aaf:
  puVar7[-1] = param_1;
  return 0;
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



/* void Ref<Image>::instantiate<>() */

void __thiscall Ref<Image>::instantiate<>(Ref<Image> *this)

{
  Image *pIVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar4 = this_00;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = Memory::free_static;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = *(Image **)this;
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    memdelete<Image>(pIVar1);
    return;
  }
  pIVar1 = *(Image **)this;
  pIVar5 = pIVar1;
  if (this_00 != (Resource *)pIVar1) {
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    pIVar5 = (Image *)this_00;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 == (Image *)0x0) goto LAB_00116d98;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_00116d98;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_00116d98:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* CowData<ProjectList::Item>::_unref() */

void __thiscall CowData<ProjectList::Item>::_unref(CowData<ProjectList::Item> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  
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
        lVar6 = 0;
        this_00 = pCVar2;
        do {
          CowData<String>::_unref((CowData<String> *)(this_00 + 0x50));
          CowData<char32_t>::_unref(this_00 + 0x40);
          CowData<char32_t>::_unref(this_00 + 0x38);
          CowData<char32_t>::_unref(this_00 + 0x30);
          if (*(long *)(this_00 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x28);
              *(undefined8 *)(this_00 + 0x28) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          CowData<String>::_unref((CowData<String> *)(this_00 + 0x20));
          CowData<char32_t>::_unref(this_00 + 0x10);
          CowData<char32_t>::_unref(this_00 + 8);
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x70;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<ProjectList::Item>::_realloc(long) */

undefined8 __thiscall
CowData<ProjectList::Item>::_realloc(CowData<ProjectList::Item> *this,long param_1)

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
/* Error CowData<ProjectList::Item>::resize<false>(long) */

undefined8 __thiscall
CowData<ProjectList::Item>::resize<false>(CowData<ProjectList::Item> *this,long param_1)

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
    lVar8 = lVar7 * 0x70;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x70 == 0) {
LAB_00117290:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x70 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_00117290;
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
      this_00 = (CowData<char32_t> *)(lVar7 + uVar11 * 0x70);
      CowData<String>::_unref((CowData<String> *)(this_00 + 0x50));
      CowData<char32_t>::_unref(this_00 + 0x40);
      CowData<char32_t>::_unref(this_00 + 0x38);
      CowData<char32_t>::_unref(this_00 + 0x30);
      CowData<char32_t>::_unref(this_00 + 0x28);
      CowData<String>::_unref((CowData<String> *)(this_00 + 0x20));
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar11 = uVar11 + 1;
    }
    goto LAB_001172e6;
  }
  if (lVar10 == lVar8) {
LAB_00117203:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_001172e6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar6[-1];
    if (param_1 <= lVar7) goto LAB_0011711b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar10);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00117203;
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
  pauVar3 = (undefined1 (*) [16])(puVar6 + lVar7 * 0xe);
  do {
    *(undefined8 *)pauVar3[1] = 0;
    pauVar4 = pauVar3 + 7;
    *pauVar3 = (undefined1  [16])0x0;
    pauVar3[2] = (undefined1  [16])0x0;
    pauVar3[3] = (undefined1  [16])0x0;
    *(undefined8 *)pauVar3[4] = 0;
    *(undefined8 *)pauVar3[5] = 0;
    *(undefined8 *)(pauVar3[5] + 8) = 0;
    *(undefined4 *)pauVar3[6] = 0;
    *(undefined4 *)(pauVar3[6] + 4) = 0;
    *(undefined8 *)(pauVar3[6] + 8) = 0;
    pauVar3 = pauVar4;
  } while (pauVar4 != (undefined1 (*) [16])(puVar6 + param_1 * 0xe));
LAB_0011711b:
  puVar6[-1] = param_1;
  return 0;
}



/* Vector<ProjectList::Item>::remove_at(long) */

void __thiscall Vector<ProjectList::Item>::remove_at(Vector<ProjectList::Item> *this,long param_1)

{
  undefined8 uVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00117531;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (param_1 < lVar2) {
      CowData<ProjectList::Item>::_copy_on_write((CowData<ProjectList::Item> *)(this + 8));
      lVar2 = *(long *)(this + 8);
      if (lVar2 == 0) {
        lVar3 = -1;
      }
      else {
        lVar3 = *(long *)(lVar2 + -8) + -1;
        if (param_1 < lVar3) {
          this_00 = (CowData<char32_t> *)(lVar2 + param_1 * 0x70);
          do {
            if (*(long *)this_00 != *(long *)(this_00 + 0x70)) {
              CowData<char32_t>::_unref(this_00);
              uVar1 = *(undefined8 *)(this_00 + 0x70);
              *(undefined8 *)(this_00 + 0x70) = 0;
              *(undefined8 *)this_00 = uVar1;
            }
            if (*(long *)(this_00 + 8) != *(long *)(this_00 + 0x78)) {
              CowData<char32_t>::_unref(this_00 + 8);
              uVar1 = *(undefined8 *)(this_00 + 0x78);
              *(undefined8 *)(this_00 + 0x78) = 0;
              *(undefined8 *)(this_00 + 8) = uVar1;
            }
            if (*(long *)(this_00 + 0x10) != *(long *)(this_00 + 0x80)) {
              CowData<char32_t>::_unref(this_00 + 0x10);
              uVar1 = *(undefined8 *)(this_00 + 0x80);
              *(undefined8 *)(this_00 + 0x80) = 0;
              *(undefined8 *)(this_00 + 0x10) = uVar1;
            }
            if (*(long *)(this_00 + 0x20) != *(long *)(this_00 + 0x90)) {
              CowData<String>::_unref((CowData<String> *)(this_00 + 0x20));
              uVar1 = *(undefined8 *)(this_00 + 0x90);
              *(undefined8 *)(this_00 + 0x90) = 0;
              *(undefined8 *)(this_00 + 0x20) = uVar1;
            }
            if (*(long *)(this_00 + 0x28) != *(long *)(this_00 + 0x98)) {
              CowData<char32_t>::_unref(this_00 + 0x28);
              uVar1 = *(undefined8 *)(this_00 + 0x98);
              *(undefined8 *)(this_00 + 0x98) = 0;
              *(undefined8 *)(this_00 + 0x28) = uVar1;
            }
            if (*(long *)(this_00 + 0x30) != *(long *)(this_00 + 0xa0)) {
              CowData<char32_t>::_unref(this_00 + 0x30);
              uVar1 = *(undefined8 *)(this_00 + 0xa0);
              *(undefined8 *)(this_00 + 0xa0) = 0;
              *(undefined8 *)(this_00 + 0x30) = uVar1;
            }
            if (*(long *)(this_00 + 0x38) != *(long *)(this_00 + 0xa8)) {
              CowData<char32_t>::_unref(this_00 + 0x38);
              uVar1 = *(undefined8 *)(this_00 + 0xa8);
              *(undefined8 *)(this_00 + 0xa8) = 0;
              *(undefined8 *)(this_00 + 0x38) = uVar1;
            }
            if (*(long *)(this_00 + 0x40) != *(long *)(this_00 + 0xb0)) {
              CowData<char32_t>::_unref(this_00 + 0x40);
              uVar1 = *(undefined8 *)(this_00 + 0xb0);
              *(undefined8 *)(this_00 + 0xb0) = 0;
              *(undefined8 *)(this_00 + 0x40) = uVar1;
            }
            if (*(long *)(this_00 + 0x50) != *(long *)(this_00 + 0xc0)) {
              CowData<String>::_unref((CowData<String> *)(this_00 + 0x50));
              uVar1 = *(undefined8 *)(this_00 + 0xc0);
              *(undefined8 *)(this_00 + 0xc0) = 0;
              *(undefined8 *)(this_00 + 0x50) = uVar1;
            }
            param_1 = param_1 + 1;
            *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(this_00 + 200);
            *(undefined4 *)(this_00 + 0x60) = *(undefined4 *)(this_00 + 0xd0);
            *(undefined4 *)(this_00 + 100) = *(undefined4 *)(this_00 + 0xd4);
            *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(this_00 + 0xd8);
            this_00 = this_00 + 0x70;
          } while (lVar3 != param_1);
        }
      }
      CowData<ProjectList::Item>::resize<false>((CowData<ProjectList::Item> *)(this + 8),lVar3);
      return;
    }
    goto LAB_00117531;
  }
  lVar2 = 0;
LAB_00117531:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar2,"p_index","size()","",false
             ,false);
  return;
}



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011764f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0011764f:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00119fc8;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00117751;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00117751:
  *(undefined ***)this = &PTR__initialize_classv_00119e68;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00119fc8;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00117841;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00117841:
  *(undefined ***)this = &PTR__initialize_classv_00119e68;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* ProjectList::~ProjectList() */

void __thiscall ProjectList::~ProjectList(ProjectList *this)

{
  long lVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0011ab90;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xc70));
  pvVar6 = *(void **)(this + 0xc48);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xc6c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) != 0) {
        memset(*(void **)(this + 0xc60),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc68) * 4) << 2);
        if (*(int *)(this + 0xc6c) == 0) goto LAB_00117ac0;
      }
      lVar5 = 0;
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + lVar1));
        pvVar6 = *(void **)(this + 0xc48);
      } while ((uint)lVar5 < *(uint *)(this + 0xc6c));
      *(undefined4 *)(this + 0xc6c) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00117947;
    }
LAB_00117ac0:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xc58),false);
    Memory::free_static(*(void **)(this + 0xc50),false);
    Memory::free_static(*(void **)(this + 0xc60),false);
  }
LAB_00117947:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xc38));
  CowData<ProjectList::Item>::_unref((CowData<ProjectList::Item> *)(this + 0xc28));
  pvVar6 = *(void **)(this + 0xbf8);
  *(undefined ***)(this + 0xa70) = &PTR__initialize_classv_00119fc8;
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xc1c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc18) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xc1c) = 0;
        *(undefined1 (*) [16])(this + 0xc08) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xc00) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0xc00) + lVar5) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar6 + lVar5 * 2));
            pvVar6 = *(void **)(this + 0xbf8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0xc1c) = 0;
        *(undefined1 (*) [16])(this + 0xc08) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00117a05;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xc00),false);
  }
LAB_00117a05:
  *(undefined ***)(this + 0xa70) = &PTR__initialize_classv_00119e68;
  Object::~Object((Object *)(this + 0xa70));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa68));
  *(code **)this = Node::get_parent;
  if (*(long *)(this + 0xa58) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa58);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa50);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar7 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117aaf;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00117aaf:
  Control::~Control((Control *)this);
  return;
}



/* ProjectList::~ProjectList() */

void __thiscall ProjectList::~ProjectList(ProjectList *this)

{
  ~ProjectList(this);
  operator_delete(this,0xc90);
  return;
}



/* SortArray<ProjectList::Item, ProjectListComparator, true>::partitioner(long, long,
   ProjectList::Item, ProjectList::Item*) const */

long __thiscall
SortArray<ProjectList::Item,ProjectListComparator,true>::partitioner
          (SortArray<ProjectList::Item,ProjectListComparator,true> *this,long param_1,long param_2,
          String *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  String SVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  char cVar17;
  long lVar18;
  String *this_00;
  long lVar19;
  long lVar20;
  CowData<char32_t> *this_01;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78 [2];
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_40;
  CowData<char32_t> *pCVar21;
  
  this_01 = (CowData<char32_t> *)(param_5 + param_1 * 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  SVar16 = param_4[0x60];
  lVar19 = param_1;
  lVar20 = param_2;
  if (this_01[0x60] != (CowData<char32_t>)0x0) goto LAB_0011811f;
LAB_00117c40:
  if (SVar16 == (String)0x0) goto LAB_00118123;
LAB_00117c48:
  lVar20 = lVar20 + -1;
  this_00 = (String *)(lVar20 * 0x70 + param_5);
  SVar4 = this_00[0x60];
  do {
    if (SVar16 == (String)0x0) {
      if (SVar4 != (String)0x0) goto joined_r0x00117cd0;
LAB_00117c72:
      iVar5 = *(int *)this;
      if (iVar5 == 2) {
        cVar17 = String::operator<(param_4 + 0x30,this_00 + 0x30);
      }
      else if (iVar5 == 3) {
        cVar17 = String::operator<(param_4 + 0x28,this_00 + 0x28);
      }
      else {
        if (iVar5 == 0) {
          if (*(ulong *)(this_00 + 0x58) < *(ulong *)(param_4 + 0x58)) goto joined_r0x001181cb;
          goto joined_r0x00117cd0;
        }
        cVar17 = String::operator<(param_4,this_00);
      }
      if (cVar17 == '\0') goto joined_r0x00117cd0;
    }
    else if (SVar4 != (String)0x0) goto LAB_00117c72;
joined_r0x001181cb:
    if (lVar20 == param_1) break;
    SVar16 = param_4[0x60];
    SVar4 = this_00[-0x10];
    lVar20 = lVar20 + -1;
    this_00 = this_00 + -0x70;
  } while( true );
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
joined_r0x00117cd0:
  if (lVar20 <= lVar19) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar19;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar8 = *(long *)this_01;
  lVar1 = *(long *)(this_01 + 8);
  local_b8 = *(undefined8 *)this_01;
  uStack_b0 = *(undefined8 *)(this_01 + 8);
  lVar9 = *(long *)(this_01 + 0x10);
  *(undefined1 (*) [16])this_01 = (undefined1  [16])0x0;
  lVar10 = *(long *)(this_01 + 0x20);
  lVar2 = *(long *)(this_01 + 0x28);
  lVar3 = *(long *)(this_01 + 0x38);
  lVar11 = *(long *)(this_01 + 0x30);
  local_98 = *(undefined8 *)(this_01 + 0x20);
  uStack_90 = *(undefined8 *)(this_01 + 0x28);
  local_88 = *(undefined8 *)(this_01 + 0x30);
  uStack_80 = *(undefined8 *)(this_01 + 0x38);
  *(undefined8 *)(this_01 + 0x10) = 0;
  lVar12 = *(long *)(this_01 + 0x40);
  lVar13 = *(long *)(this_01 + 0x50);
  *(undefined8 *)(this_01 + 0x40) = 0;
  *(undefined8 *)(this_01 + 0x50) = 0;
  *(undefined1 (*) [16])(this_01 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  uVar14 = *(undefined8 *)(this_01 + 0x58);
  uVar6 = *(undefined4 *)(this_01 + 0x60);
  uVar7 = *(undefined4 *)(this_01 + 100);
  uVar15 = *(undefined8 *)(this_01 + 0x68);
  lVar18 = *(long *)this_00;
  local_a8[0] = lVar9;
  local_78[0] = lVar12;
  local_68 = lVar13;
  local_60 = uVar14;
  local_58 = uVar6;
  local_54 = uVar7;
  local_50 = uVar15;
  if (lVar18 != 0) {
    CowData<char32_t>::_unref(this_01);
    *(undefined8 *)this_01 = *(undefined8 *)this_00;
    *(undefined8 *)this_00 = 0;
    lVar18 = *(long *)(this_01 + 8);
  }
  if (lVar18 != *(long *)(this_00 + 8)) {
    CowData<char32_t>::_unref(this_01 + 8);
    *(undefined8 *)(this_01 + 8) = *(undefined8 *)(this_00 + 8);
    *(undefined8 *)(this_00 + 8) = 0;
  }
  if (*(long *)(this_01 + 0x10) != *(long *)(this_00 + 0x10)) {
    CowData<char32_t>::_unref(this_01 + 0x10);
    *(undefined8 *)(this_01 + 0x10) = *(undefined8 *)(this_00 + 0x10);
    *(undefined8 *)(this_00 + 0x10) = 0;
  }
  if (*(long *)(this_01 + 0x20) != *(long *)(this_00 + 0x20)) {
    CowData<String>::_unref((CowData<String> *)(this_01 + 0x20));
    *(undefined8 *)(this_01 + 0x20) = *(undefined8 *)(this_00 + 0x20);
    *(undefined8 *)(this_00 + 0x20) = 0;
  }
  if (*(long *)(this_01 + 0x28) != *(long *)(this_00 + 0x28)) {
    CowData<char32_t>::_unref(this_01 + 0x28);
    *(undefined8 *)(this_01 + 0x28) = *(undefined8 *)(this_00 + 0x28);
    *(undefined8 *)(this_00 + 0x28) = 0;
  }
  if (*(long *)(this_01 + 0x30) != *(long *)(this_00 + 0x30)) {
    CowData<char32_t>::_unref(this_01 + 0x30);
    *(undefined8 *)(this_01 + 0x30) = *(undefined8 *)(this_00 + 0x30);
    *(undefined8 *)(this_00 + 0x30) = 0;
  }
  if (*(long *)(this_01 + 0x38) != *(long *)(this_00 + 0x38)) {
    CowData<char32_t>::_unref(this_01 + 0x38);
    *(undefined8 *)(this_01 + 0x38) = *(undefined8 *)(this_00 + 0x38);
    *(undefined8 *)(this_00 + 0x38) = 0;
  }
  if (*(long *)(this_01 + 0x40) != *(long *)(this_00 + 0x40)) {
    CowData<char32_t>::_unref(this_01 + 0x40);
    *(undefined8 *)(this_01 + 0x40) = *(undefined8 *)(this_00 + 0x40);
    *(undefined8 *)(this_00 + 0x40) = 0;
  }
  if (*(long *)(this_01 + 0x50) != *(long *)(this_00 + 0x50)) {
    CowData<String>::_unref((CowData<String> *)(this_01 + 0x50));
    *(undefined8 *)(this_01 + 0x50) = *(undefined8 *)(this_00 + 0x50);
    *(undefined8 *)(this_00 + 0x50) = 0;
  }
  *(undefined8 *)(this_01 + 0x58) = *(undefined8 *)(this_00 + 0x58);
  *(undefined4 *)(this_01 + 0x60) = *(undefined4 *)(this_00 + 0x60);
  *(undefined4 *)(this_01 + 100) = *(undefined4 *)(this_00 + 100);
  *(undefined8 *)(this_01 + 0x68) = *(undefined8 *)(this_00 + 0x68);
  if (lVar8 != *(long *)this_00) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    local_b8 = 0;
    *(long *)this_00 = lVar8;
  }
  if (lVar1 != *(long *)(this_00 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 8));
    uStack_b0 = 0;
    *(long *)(this_00 + 8) = lVar1;
  }
  if (*(long *)(this_00 + 0x10) != lVar9) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 0x10));
    *(long *)(this_00 + 0x10) = lVar9;
    local_a8[0] = 0;
  }
  if (lVar10 != *(long *)(this_00 + 0x20)) {
    CowData<String>::_unref((CowData<String> *)(this_00 + 0x20));
    *(long *)(this_00 + 0x20) = lVar10;
    local_98 = 0;
  }
  if (lVar2 != *(long *)(this_00 + 0x28)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 0x28));
    *(long *)(this_00 + 0x28) = lVar2;
    uStack_90 = 0;
  }
  if (lVar11 != *(long *)(this_00 + 0x30)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 0x30));
    *(long *)(this_00 + 0x30) = lVar11;
    local_88 = 0;
  }
  if (lVar3 != *(long *)(this_00 + 0x38)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 0x38));
    *(long *)(this_00 + 0x38) = lVar3;
    uStack_80 = 0;
  }
  if (*(long *)(this_00 + 0x40) != lVar12) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 0x40));
    *(long *)(this_00 + 0x40) = lVar12;
    local_78[0] = 0;
  }
  if (*(long *)(this_00 + 0x50) != lVar13) {
    CowData<String>::_unref((CowData<String> *)(this_00 + 0x50));
    *(long *)(this_00 + 0x50) = lVar13;
    local_68 = 0;
  }
  *(undefined8 *)(this_00 + 0x58) = uVar14;
  *(undefined4 *)(this_00 + 0x60) = uVar6;
  *(undefined4 *)(this_00 + 100) = uVar7;
  *(undefined8 *)(this_00 + 0x68) = uVar15;
  CowData<String>::_unref((CowData<String> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_90);
  CowData<String>::_unref((CowData<String> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  pCVar21 = this_01;
  do {
    this_01 = pCVar21 + 0x70;
    lVar19 = lVar19 + 1;
    SVar16 = param_4[0x60];
    if (pCVar21[0xd0] == (CowData<char32_t>)0x0) goto LAB_00117c40;
LAB_0011811f:
    if (SVar16 != (String)0x0) {
LAB_00118123:
      iVar5 = *(int *)this;
      if (iVar5 == 2) {
        cVar17 = String::operator<((String *)this_01 + 0x30,param_4 + 0x30);
      }
      else if (iVar5 == 3) {
        cVar17 = String::operator<((String *)this_01 + 0x28,param_4 + 0x28);
      }
      else {
        if (iVar5 == 0) {
          if (*(ulong *)(param_4 + 0x58) < *(ulong *)((String *)this_01 + 0x58)) goto LAB_00118170;
          goto LAB_00117c48;
        }
        cVar17 = String::operator<((String *)this_01,param_4);
      }
      if (cVar17 == '\0') {
        SVar16 = param_4[0x60];
        goto LAB_00117c48;
      }
    }
LAB_00118170:
    pCVar21 = this_01;
  } while (param_2 + -1 != lVar19);
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                   "bad comparison function; sorting will be broken",0,0);
  SVar16 = param_4[0x60];
  goto LAB_00117c48;
}



/* SortArray<ProjectList::Item, ProjectListComparator, true>::median_of_3(ProjectList::Item const&,
   ProjectList::Item const&, ProjectList::Item const&) const */

Item * __thiscall
SortArray<ProjectList::Item,ProjectListComparator,true>::median_of_3
          (SortArray<ProjectList::Item,ProjectListComparator,true> *this,Item *param_1,Item *param_2
          ,Item *param_3)

{
  int iVar1;
  Item IVar2;
  char cVar3;
  
  IVar2 = param_1[0x60];
  if (IVar2 != (Item)0x0) {
    if (param_2[0x60] != (Item)0x0) goto LAB_001182be;
    if (param_3[0x60] != (Item)0x0) goto LAB_00118470;
LAB_001183b2:
    iVar1 = *(int *)this;
    if (iVar1 == 2) {
      cVar3 = String::operator<((String *)(param_2 + 0x30),(String *)(param_3 + 0x30));
LAB_001183db:
      if (cVar3 != '\0') {
        return param_2;
      }
    }
    else {
      if (iVar1 == 3) {
        cVar3 = String::operator<((String *)(param_2 + 0x28),(String *)(param_3 + 0x28));
        goto LAB_001183db;
      }
      if (iVar1 != 0) {
        cVar3 = String::operator<((String *)param_2,(String *)param_3);
        goto LAB_001183db;
      }
      if (*(ulong *)(param_3 + 0x58) < *(ulong *)(param_2 + 0x58)) {
        return param_2;
      }
    }
    if (param_1[0x60] == (Item)0x0) {
      if (param_3[0x60] != (Item)0x0) {
        return param_1;
      }
    }
    else if (param_3[0x60] == (Item)0x0) {
      return param_3;
    }
LAB_00118470:
    iVar1 = *(int *)this;
    if (iVar1 == 2) {
      cVar3 = String::operator<((String *)(param_1 + 0x30),(String *)(param_3 + 0x30));
    }
    else if (iVar1 == 3) {
      cVar3 = String::operator<((String *)(param_1 + 0x28),(String *)(param_3 + 0x28));
    }
    else {
      if (iVar1 == 0) {
        if (*(ulong *)(param_3 + 0x58) < *(ulong *)(param_1 + 0x58)) {
          return param_3;
        }
        return param_1;
      }
      cVar3 = String::operator<((String *)param_1,(String *)param_3);
    }
    if (cVar3 != '\0') {
      return param_3;
    }
    return param_1;
  }
  if (param_2[0x60] == (Item)0x0) {
LAB_001182be:
    iVar1 = *(int *)this;
    if (iVar1 == 2) {
      cVar3 = String::operator<((String *)(param_1 + 0x30),(String *)(param_2 + 0x30));
LAB_00118413:
      if (cVar3 != '\0') {
LAB_00118431:
        if (param_2[0x60] == (Item)0x0) {
          if (param_3[0x60] != (Item)0x0) {
            if (param_1[0x60] == (Item)0x0) {
              return param_1;
            }
            goto LAB_00118470;
          }
        }
        else if (param_3[0x60] == (Item)0x0) {
          return param_2;
        }
        goto LAB_001183b2;
      }
LAB_00118417:
      IVar2 = param_1[0x60];
    }
    else {
      if (iVar1 == 3) {
        cVar3 = String::operator<((String *)(param_1 + 0x28),(String *)(param_2 + 0x28));
        if (cVar3 == '\0') goto LAB_00118417;
        goto LAB_00118431;
      }
      if (iVar1 != 0) {
        cVar3 = String::operator<((String *)param_1,(String *)param_2);
        goto LAB_00118413;
      }
      if (*(ulong *)(param_2 + 0x58) < *(ulong *)(param_1 + 0x58)) goto LAB_00118431;
    }
    if (IVar2 == (Item)0x0) {
      if (param_3[0x60] != (Item)0x0) {
        if (param_2[0x60] == (Item)0x0) {
          return param_2;
        }
        goto LAB_0011835b;
      }
    }
    else if (param_3[0x60] == (Item)0x0) {
      return param_1;
    }
  }
  else if (param_3[0x60] != (Item)0x0) goto LAB_0011835b;
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    cVar3 = String::operator<((String *)(param_1 + 0x30),(String *)(param_3 + 0x30));
LAB_0011833f:
    if (cVar3 != '\0') {
      return param_1;
    }
  }
  else {
    if (iVar1 == 3) {
      cVar3 = String::operator<((String *)(param_1 + 0x28),(String *)(param_3 + 0x28));
      goto LAB_0011833f;
    }
    if (iVar1 != 0) {
      cVar3 = String::operator<((String *)param_1,(String *)param_3);
      goto LAB_0011833f;
    }
    if (*(ulong *)(param_3 + 0x58) < *(ulong *)(param_1 + 0x58)) {
      return param_1;
    }
  }
  if (param_2[0x60] == (Item)0x0) {
    if (param_3[0x60] != (Item)0x0) {
      return param_2;
    }
  }
  else if (param_3[0x60] == (Item)0x0) {
    return param_3;
  }
LAB_0011835b:
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    cVar3 = String::operator<((String *)(param_2 + 0x30),(String *)(param_3 + 0x30));
  }
  else if (iVar1 == 3) {
    cVar3 = String::operator<((String *)(param_2 + 0x28),(String *)(param_3 + 0x28));
  }
  else {
    if (iVar1 == 0) {
      if (*(ulong *)(param_2 + 0x58) <= *(ulong *)(param_3 + 0x58)) {
        return param_2;
      }
      return param_3;
    }
    cVar3 = String::operator<((String *)param_2,(String *)param_3);
  }
  if (cVar3 == '\0') {
    return param_2;
  }
  return param_3;
}



/* SortArray<ProjectList::Item, ProjectListComparator, true>::adjust_heap(long, long, long,
   ProjectList::Item, ProjectList::Item*) const */

void __thiscall
SortArray<ProjectList::Item,ProjectListComparator,true>::adjust_heap
          (SortArray<ProjectList::Item,ProjectListComparator,true> *this,long param_1,long param_2,
          long param_3,Item *param_5,long param_6)

{
  String *this_00;
  int iVar1;
  char cVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  CowData *pCVar8;
  String *this_01;
  long in_FS_OFFSET;
  Item local_b8 [40];
  String local_90 [8];
  String local_88 [40];
  ulong local_60;
  char local_58;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2;
  if (lVar6 < param_3) {
    do {
      lVar3 = lVar6 + -1;
      this_01 = (String *)(param_6 + (lVar3 + param_1) * 0x70);
      this_00 = (String *)(param_6 + (param_1 + lVar6) * 0x70);
      lVar5 = lVar6;
      if (this_00[0x60] == (String)0x0) {
        if (this_01[0x60] == (String)0x0) {
LAB_00118684:
          iVar1 = *(int *)this;
          if (iVar1 == 2) {
            cVar2 = String::operator<(this_00 + 0x30,this_01 + 0x30);
          }
          else if (iVar1 == 3) {
            cVar2 = String::operator<(this_00 + 0x28,this_01 + 0x28);
          }
          else {
            if (iVar1 == 0) {
              if (*(ulong *)(this_01 + 0x58) < *(ulong *)(this_00 + 0x58)) goto LAB_001186d1;
              goto LAB_00118830;
            }
            cVar2 = String::operator<(this_00,this_01);
          }
          if (cVar2 != '\0') goto LAB_001186d1;
        }
LAB_00118830:
        lVar3 = lVar6;
        lVar5 = lVar6 + 1;
        this_01 = this_00;
      }
      else if (this_01[0x60] != (String)0x0) goto LAB_00118684;
LAB_001186d1:
      pCVar4 = (CowData<char32_t> *)(param_6 + (lVar7 + param_1) * 0x70);
      if (*(long *)pCVar4 != *(long *)this_01) {
        CowData<char32_t>::_ref(pCVar4,(CowData *)this_01);
      }
      if (*(long *)(pCVar4 + 8) != *(long *)((CowData *)this_01 + 8)) {
        CowData<char32_t>::_ref(pCVar4 + 8,(CowData *)this_01 + 8);
      }
      if (*(long *)(pCVar4 + 0x10) != *(long *)((CowData *)this_01 + 0x10)) {
        CowData<char32_t>::_ref(pCVar4 + 0x10,(CowData *)this_01 + 0x10);
      }
      if (*(long *)(pCVar4 + 0x20) != *(long *)((CowData *)this_01 + 0x20)) {
        CowData<String>::_ref((CowData<String> *)(pCVar4 + 0x20),(CowData *)this_01 + 0x20);
      }
      if (*(long *)(pCVar4 + 0x28) != *(long *)((CowData *)this_01 + 0x28)) {
        CowData<char32_t>::_ref(pCVar4 + 0x28,(CowData *)this_01 + 0x28);
      }
      if (*(long *)(pCVar4 + 0x30) != *(long *)((CowData *)this_01 + 0x30)) {
        CowData<char32_t>::_ref(pCVar4 + 0x30,(CowData *)this_01 + 0x30);
      }
      if (*(long *)(pCVar4 + 0x38) != *(long *)((CowData *)this_01 + 0x38)) {
        CowData<char32_t>::_ref(pCVar4 + 0x38,(CowData *)this_01 + 0x38);
      }
      if (*(long *)(pCVar4 + 0x40) != *(long *)((CowData *)this_01 + 0x40)) {
        CowData<char32_t>::_ref(pCVar4 + 0x40,(CowData *)this_01 + 0x40);
      }
      if (*(long *)(pCVar4 + 0x50) != *(long *)((CowData *)this_01 + 0x50)) {
        CowData<String>::_ref((CowData<String> *)(pCVar4 + 0x50),(CowData *)this_01 + 0x50);
      }
      lVar6 = lVar5 * 2;
      *(undefined8 *)(pCVar4 + 0x58) = *(undefined8 *)((CowData *)this_01 + 0x58);
      *(undefined4 *)(pCVar4 + 0x60) = *(undefined4 *)((CowData *)this_01 + 0x60);
      *(undefined4 *)(pCVar4 + 100) = *(undefined4 *)((CowData *)this_01 + 100);
      *(undefined8 *)(pCVar4 + 0x68) = *(undefined8 *)((CowData *)this_01 + 0x68);
      lVar7 = lVar3;
    } while (param_3 != lVar6 && SBORROW8(param_3,lVar6) == param_3 + lVar5 * -2 < 0);
    pCVar8 = (CowData *)this_01;
    if (param_3 == lVar6) goto LAB_00118b3d;
  }
  else {
    this_01 = (String *)(param_6 + (param_2 + param_1) * 0x70);
    if (lVar6 != param_3) {
      ProjectList::Item::Item(local_b8,param_5);
      goto LAB_00118a8e;
    }
LAB_00118b3d:
    lVar3 = lVar6 + -1;
    pCVar8 = (CowData *)((lVar3 + param_1) * 0x70 + param_6);
    ProjectList::Item::operator=((Item *)this_01,(Item *)pCVar8);
  }
  ProjectList::Item::Item(local_b8,param_5);
  lVar6 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  this_01 = (String *)pCVar8;
  while (param_2 < lVar3) {
    lVar7 = lVar6 >> 1;
    this_01 = (String *)(param_6 + (param_1 + lVar7) * 0x70);
    if (this_01[0x60] == (String)0x0) {
      if (local_58 != '\0') {
LAB_00118a78:
        this_01 = (String *)(param_6 + (lVar3 + param_1) * 0x70);
        break;
      }
LAB_001188f4:
      iVar1 = *(int *)this;
      if (iVar1 == 2) {
        cVar2 = String::operator<(this_01 + 0x30,local_88);
      }
      else if (iVar1 == 3) {
        cVar2 = String::operator<(this_01 + 0x28,local_90);
      }
      else {
        if (iVar1 == 0) {
          if (local_60 < *(ulong *)(this_01 + 0x58)) goto LAB_00118927;
          goto LAB_00118a78;
        }
        cVar2 = String::operator<(this_01,(String *)local_b8);
      }
      if (cVar2 == '\0') {
        this_01 = (String *)(param_6 + (param_1 + lVar3) * 0x70);
        break;
      }
    }
    else if (local_58 != '\0') goto LAB_001188f4;
LAB_00118927:
    pCVar4 = (CowData<char32_t> *)((param_1 + lVar3) * 0x70 + param_6);
    if (*(long *)pCVar4 != *(long *)this_01) {
      CowData<char32_t>::_ref(pCVar4,(CowData *)this_01);
    }
    if (*(long *)(pCVar4 + 8) != *(long *)(this_01 + 8)) {
      CowData<char32_t>::_ref(pCVar4 + 8,(CowData *)(this_01 + 8));
    }
    if (*(long *)(pCVar4 + 0x10) != *(long *)(this_01 + 0x10)) {
      CowData<char32_t>::_ref(pCVar4 + 0x10,(CowData *)(this_01 + 0x10));
    }
    if (*(long *)(pCVar4 + 0x20) != *(long *)(this_01 + 0x20)) {
      CowData<String>::_ref((CowData<String> *)(pCVar4 + 0x20),(CowData *)(this_01 + 0x20));
    }
    if (*(long *)(pCVar4 + 0x28) != *(long *)(this_01 + 0x28)) {
      CowData<char32_t>::_ref(pCVar4 + 0x28,(CowData *)(this_01 + 0x28));
    }
    if (*(long *)(pCVar4 + 0x30) != *(long *)(this_01 + 0x30)) {
      CowData<char32_t>::_ref(pCVar4 + 0x30,(CowData *)(this_01 + 0x30));
    }
    if (*(long *)(pCVar4 + 0x38) != *(long *)(this_01 + 0x38)) {
      CowData<char32_t>::_ref(pCVar4 + 0x38,(CowData *)(this_01 + 0x38));
    }
    if (*(long *)(pCVar4 + 0x40) != *(long *)(this_01 + 0x40)) {
      CowData<char32_t>::_ref(pCVar4 + 0x40,(CowData *)(this_01 + 0x40));
    }
    if (*(long *)(pCVar4 + 0x50) != *(long *)(this_01 + 0x50)) {
      CowData<String>::_ref((CowData<String> *)(pCVar4 + 0x50),(CowData *)(this_01 + 0x50));
    }
    *(undefined8 *)(pCVar4 + 0x58) = *(undefined8 *)(this_01 + 0x58);
    *(undefined4 *)(pCVar4 + 0x60) = *(undefined4 *)(this_01 + 0x60);
    *(undefined4 *)(pCVar4 + 100) = *(undefined4 *)(this_01 + 100);
    *(undefined8 *)(pCVar4 + 0x68) = *(undefined8 *)(this_01 + 0x68);
    lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
    lVar3 = lVar7;
  }
LAB_00118a8e:
  ProjectList::Item::operator=((Item *)this_01,local_b8);
  ProjectList::Item::~Item(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<ProjectList::Item, ProjectListComparator, true>::partial_sort(long, long, long,
   ProjectList::Item*) const */

void __thiscall
SortArray<ProjectList::Item,ProjectListComparator,true>::partial_sort
          (SortArray<ProjectList::Item,ProjectListComparator,true> *this,long param_1,long param_2,
          long param_3,Item *param_4)

{
  String *pSVar1;
  CowData *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  String *this_00;
  Item *pIVar11;
  long lVar12;
  long in_FS_OFFSET;
  CowData<char32_t> *local_220;
  CowData<char32_t> *local_218;
  CowData<String> *local_210;
  CowData<char32_t> *local_208;
  CowData<char32_t> *local_200;
  CowData<char32_t> *local_1f8;
  CowData<char32_t> *local_1f0;
  CowData<String> *local_1e8;
  CowData<char32_t> *local_180;
  long local_128;
  long local_120;
  long local_118 [2];
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8 [2];
  long local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_40;
  
  lVar12 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar12 < 2) {
    if (param_2 <= param_3) goto LAB_00119688;
LAB_00118d49:
    pSVar1 = (String *)(param_4 + param_1 * 0x70);
    this_00 = (String *)(param_4 + param_3 * 0x70);
    lVar10 = param_3;
    do {
      if (this_00[0x60] == (String)0x0) {
        if (pSVar1[0x60] == (String)0x0) {
          iVar9 = *(int *)this;
          if (iVar9 == 2) goto LAB_00118f57;
LAB_00118ddc:
          if (iVar9 == 3) {
            cVar8 = String::operator<(this_00 + 0x28,pSVar1 + 0x28);
          }
          else {
            if (iVar9 == 0) {
              if (*(ulong *)(pSVar1 + 0x58) < *(ulong *)(this_00 + 0x58)) goto LAB_00118e00;
              goto joined_r0x00118f32;
            }
            cVar8 = String::operator<(this_00,pSVar1);
          }
LAB_00118df8:
          if (cVar8 != '\0') goto LAB_00118e00;
        }
      }
      else {
        if (pSVar1[0x60] != (String)0x0) {
          iVar9 = *(int *)this;
          if (iVar9 != 2) goto LAB_00118ddc;
LAB_00118f57:
          cVar8 = String::operator<(this_00 + 0x30,pSVar1 + 0x30);
          goto LAB_00118df8;
        }
LAB_00118e00:
        ProjectList::Item::Item((Item *)&local_128,(Item *)this_00);
        ProjectList::Item::operator=((Item *)this_00,(Item *)pSVar1);
        ProjectList::Item::Item((Item *)&local_b8,(Item *)&local_128);
        adjust_heap(this,param_1,0,lVar12,(Item *)&local_b8,param_4);
        CowData<String>::_unref((CowData<String> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<String>::_unref((CowData<String> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<String>::_unref((CowData<String> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<String>::_unref((CowData<String> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      }
joined_r0x00118f32:
      this_00 = this_00 + 0x70;
      lVar10 = lVar10 + 1;
    } while (lVar10 < param_2);
    if (lVar12 < 2) goto LAB_00119688;
  }
  else {
    lVar10 = lVar12 + -2 >> 1;
    pIVar11 = param_4 + (param_1 + lVar10) * 0x70;
    while( true ) {
      ProjectList::Item::Item((Item *)&local_b8,pIVar11);
      adjust_heap(this,param_1,lVar10,lVar12,(Item *)&local_b8,param_4);
      CowData<String>::_unref((CowData<String> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<String>::_unref((CowData<String> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      pIVar11 = pIVar11 + -0x70;
    }
    if (param_3 < param_2) goto LAB_00118d49;
  }
  local_180 = (CowData<char32_t> *)&local_b8;
  local_1e8 = (CowData<String> *)&local_68;
  local_1f0 = (CowData<char32_t> *)local_78;
  local_1f8 = (CowData<char32_t> *)&local_80;
  local_200 = (CowData<char32_t> *)&local_88;
  local_208 = (CowData<char32_t> *)&local_90;
  local_210 = (CowData<String> *)&local_98;
  local_218 = (CowData<char32_t> *)local_a8;
  local_220 = (CowData<char32_t> *)&local_b0;
  pCVar2 = (CowData *)(param_4 + param_1 * 0x70);
  pIVar11 = param_4 + param_3 * 0x70 + -0x70;
  lVar12 = (param_3 + -1) - param_1;
  do {
    local_128 = 0;
    if (*(long *)pIVar11 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)pIVar11);
    }
    local_120 = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 8) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_120,(CowData *)((CowData<char32_t> *)pIVar11 + 8));
    }
    local_118[0] = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x10) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_118,(CowData *)((CowData<char32_t> *)pIVar11 + 0x10));
    }
    local_108 = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x20) != 0) {
      CowData<String>::_ref
                ((CowData<String> *)&local_108,(CowData *)((CowData<char32_t> *)pIVar11 + 0x20));
    }
    local_100 = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x28) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_100,(CowData *)((CowData<char32_t> *)pIVar11 + 0x28));
    }
    local_f8 = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x30) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f8,(CowData *)((CowData<char32_t> *)pIVar11 + 0x30));
    }
    local_f0 = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x38) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,(CowData *)((CowData<char32_t> *)pIVar11 + 0x38));
    }
    local_e8[0] = 0;
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x40) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_e8,(CowData *)((CowData<char32_t> *)pIVar11 + 0x40));
    }
    local_d8 = 0;
    lVar10 = *(long *)((CowData<char32_t> *)pIVar11 + 0x50);
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x50) != 0) {
      CowData<String>::_ref
                ((CowData<String> *)&local_d8,(CowData *)((CowData<char32_t> *)pIVar11 + 0x50));
      lVar10 = local_d8;
    }
    uVar5 = *(undefined8 *)((CowData<char32_t> *)pIVar11 + 0x58);
    uVar3 = *(undefined4 *)((CowData<char32_t> *)pIVar11 + 0x60);
    uVar4 = *(undefined4 *)((CowData<char32_t> *)pIVar11 + 100);
    uVar6 = *(undefined8 *)((CowData<char32_t> *)pIVar11 + 0x68);
    local_d0 = uVar5;
    local_c8 = uVar3;
    local_c4 = uVar4;
    local_c0 = uVar6;
    if (*(long *)pIVar11 != *(long *)pCVar2) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11,pCVar2);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 8) != *(long *)(pCVar2 + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11 + 8,pCVar2 + 8);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x10) != *(long *)(pCVar2 + 0x10)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11 + 0x10,pCVar2 + 0x10);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x20) != *(long *)(pCVar2 + 0x20)) {
      CowData<String>::_ref((CowData<String> *)((CowData<char32_t> *)pIVar11 + 0x20),pCVar2 + 0x20);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x28) != *(long *)(pCVar2 + 0x28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11 + 0x28,pCVar2 + 0x28);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x30) != *(long *)(pCVar2 + 0x30)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11 + 0x30,pCVar2 + 0x30);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x38) != *(long *)(pCVar2 + 0x38)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11 + 0x38,pCVar2 + 0x38);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x40) != *(long *)(pCVar2 + 0x40)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pIVar11 + 0x40,pCVar2 + 0x40);
    }
    if (*(long *)((CowData<char32_t> *)pIVar11 + 0x50) != *(long *)(pCVar2 + 0x50)) {
      CowData<String>::_ref((CowData<String> *)((CowData<char32_t> *)pIVar11 + 0x50),pCVar2 + 0x50);
    }
    local_b8 = 0;
    *(undefined8 *)((CowData<char32_t> *)pIVar11 + 0x58) = *(undefined8 *)(pCVar2 + 0x58);
    *(undefined4 *)((CowData<char32_t> *)pIVar11 + 0x60) = *(undefined4 *)(pCVar2 + 0x60);
    *(undefined4 *)((CowData<char32_t> *)pIVar11 + 100) = *(undefined4 *)(pCVar2 + 100);
    *(undefined8 *)((CowData<char32_t> *)pIVar11 + 0x68) = *(undefined8 *)(pCVar2 + 0x68);
    if (local_128 != 0) {
      CowData<char32_t>::_ref(local_180,(CowData *)&local_128);
    }
    local_b0 = 0;
    if (local_120 != 0) {
      CowData<char32_t>::_ref(local_220,(CowData *)&local_120);
    }
    local_a8[0] = 0;
    if (local_118[0] != 0) {
      CowData<char32_t>::_ref(local_218,(CowData *)local_118);
    }
    local_98 = 0;
    if (local_108 != 0) {
      CowData<String>::_ref(local_210,(CowData *)&local_108);
    }
    local_90 = 0;
    if (local_100 != 0) {
      CowData<char32_t>::_ref(local_208,(CowData *)&local_100);
    }
    local_88 = 0;
    if (local_f8 != 0) {
      CowData<char32_t>::_ref(local_200,(CowData *)&local_f8);
    }
    local_80 = 0;
    if (local_f0 != 0) {
      CowData<char32_t>::_ref(local_1f8,(CowData *)&local_f0);
    }
    local_78[0] = 0;
    if (local_e8[0] != 0) {
      CowData<char32_t>::_ref(local_1f0,(CowData *)local_e8);
    }
    local_68 = 0;
    if (lVar10 != 0) {
      CowData<String>::_ref(local_1e8,(CowData *)&local_d8);
    }
    pIVar11 = (Item *)((CowData<char32_t> *)pIVar11 + -0x70);
    local_60 = uVar5;
    local_58 = uVar3;
    local_54 = uVar4;
    local_50 = uVar6;
    adjust_heap(this,param_1,0,lVar12,local_180,param_4);
    CowData<String>::_unref(local_1e8);
    CowData<char32_t>::_unref(local_1f0);
    CowData<char32_t>::_unref(local_1f8);
    CowData<char32_t>::_unref(local_200);
    CowData<char32_t>::_unref(local_208);
    CowData<String>::_unref(local_210);
    CowData<char32_t>::_unref(local_218);
    CowData<char32_t>::_unref(local_220);
    CowData<char32_t>::_unref(local_180);
    CowData<String>::_unref((CowData<String> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<String>::_unref((CowData<String> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    bVar7 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar7);
LAB_00119688:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<ProjectList::Item, ProjectListComparator, true>::introsort(long, long,
   ProjectList::Item*, long) const */

void __thiscall
SortArray<ProjectList::Item,ProjectListComparator,true>::introsort
          (SortArray<ProjectList::Item,ProjectListComparator,true> *this,long param_1,long param_2,
          Item *param_3,long param_4)

{
  long lVar1;
  Item *pIVar2;
  long lVar3;
  long in_FS_OFFSET;
  Item local_b8 [8];
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [16];
  CowData<String> local_98 [8];
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [16];
  CowData<String> local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_001198c8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar3 = param_2;
      do {
        param_4 = param_4 + -1;
        pIVar2 = (Item *)median_of_3(this,param_3 + param_1 * 0x70,
                                     param_3 + ((lVar1 >> 1) + param_1) * 0x70,
                                     param_3 + lVar3 * 0x70 + -0x70);
        ProjectList::Item::Item(local_b8,pIVar2);
        param_2 = partitioner(this,param_1,lVar3,local_b8,param_3);
        CowData<String>::_unref(local_68);
        CowData<char32_t>::_unref(local_78);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref(local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<String>::_unref(local_98);
        CowData<char32_t>::_unref(local_a8);
        CowData<char32_t>::_unref(local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        introsort(this,param_2,lVar3,param_3,param_4);
        lVar1 = param_2 - param_1;
        if (lVar1 < 0x11) goto LAB_001198c8;
        lVar3 = param_2;
      } while (param_4 != 0);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(this,param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectList::_notificationv(int, bool) */

void __thiscall ProjectList::_notificationv(ProjectList *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Control::_notification(iVar1);
    Container::_notification(iVar1);
    if ((code *)PTR__notification_00120078 != Container::_notification) {
      ScrollContainer::_notification(iVar1);
    }
    if (param_1 == 0x11) {
      _notification(iVar1);
      return;
    }
    return;
  }
  if (param_1 == 0x11) {
    _notification(iVar1);
    if ((code *)PTR__notification_00120078 == Container::_notification) goto LAB_0011993e;
  }
  else if ((code *)PTR__notification_00120078 == Container::_notification) goto LAB_0011993e;
  ScrollContainer::_notification(iVar1);
LAB_0011993e:
  Container::_notification(iVar1);
  Control::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Node::_notification(iVar1);
  return;
}



/* ProjectListItemControl::_notification(int) */

void ProjectListItemControl::_GLOBAL__sub_I__notification(void)

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
/* ProjectList::Item::~Item() */

void __thiscall ProjectList::Item::~Item(Item *this)

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
/* ProjectList::Item::Item(String const&, String const&, String const&, Vector<String> const&,
   String const&, String const&, String const&, Vector<String> const&, unsigned long, bool, bool,
   bool, bool, int) */

void __thiscall
ProjectList::Item::Item
          (Item *this,String *param_1,String *param_2,String *param_3,Vector *param_4,
          String *param_5,String *param_6,String *param_7,Vector *param_8,ulong param_9,
          bool param_10,bool param_11,bool param_12,bool param_13,int param_14)

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
/* ProjectListItemControl::~ProjectListItemControl() */

void __thiscall ProjectListItemControl::~ProjectListItemControl(ProjectListItemControl *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* CallableCustomMethodPointer<ProjectList, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectListItemControl, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectListItemControl,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectListItemControl,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectList, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectList, void, Ref<InputEvent> const&,
   Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Ref<InputEvent>const&,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectList, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectList, void, Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectList,void,Variant_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectList,void,Variant_const&> *this)

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
/* ProjectList::~ProjectList() */

void __thiscall ProjectList::~ProjectList(ProjectList *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ProjectList::Item::Item(ProjectList::Item const&) */

void __thiscall ProjectList::Item::Item(Item *this,Item *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.