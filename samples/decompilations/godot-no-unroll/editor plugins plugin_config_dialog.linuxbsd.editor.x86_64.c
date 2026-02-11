
/* PluginConfigDialog::~PluginConfigDialog() */

void __thiscall PluginConfigDialog::~PluginConfigDialog(PluginConfigDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bb18;
  if (*(void **)(this + 0xe00) != (void *)0x0) {
    if (*(int *)(this + 0xdf8) != 0) {
      *(undefined4 *)(this + 0xdf8) = 0;
    }
    Memory::free_static(*(void **)(this + 0xe00),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0010b740;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* PluginConfigDialog::~PluginConfigDialog() */

void __thiscall PluginConfigDialog::~PluginConfigDialog(PluginConfigDialog *this)

{
  ~PluginConfigDialog(this);
  operator_delete(this,0xe18);
  return;
}



/* PluginConfigDialog::_notification(int) */

void __thiscall PluginConfigDialog::_notification(PluginConfigDialog *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long in_FS_OFFSET;
  PluginConfigDialog aPStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    pcVar1 = *(code **)(*(long *)this + 0x108);
    create_custom_callable_function_pointer<PluginConfigDialog>
              (aPStack_48,(char *)this,(_func_void *)"&PluginConfigDialog::_on_confirmed");
    (*pcVar1)(this,SceneStringNames::singleton + 0x268,aPStack_48,0);
    Callable::~Callable((Callable *)aPStack_48);
    plVar3 = (long *)ConfirmationDialog::get_cancel_button();
    pcVar1 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<PluginConfigDialog>
              (aPStack_48,(char *)this,(_func_void *)"&PluginConfigDialog::_on_canceled");
    (*pcVar1)(plVar3,SceneStringNames::singleton + 0x238,aPStack_48,0);
    Callable::~Callable((Callable *)aPStack_48);
  }
  else if (param_1 == 0x1e) {
    cVar2 = Window::is_visible();
    if (cVar2 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Control::grab_focus();
        return;
      }
      goto LAB_001001a9;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001001a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigDialog::_clear_fields() */

void __thiscall PluginConfigDialog::_clear_fields(PluginConfigDialog *this)

{
  undefined8 uVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar1 = *(undefined8 *)(this + 0xdb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  LineEdit::set_text(uVar1,(StrRange *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = &_LC8;
  local_50 = 0;
  uVar1 = *(undefined8 *)(this + 0xdc0);
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  LineEdit::set_text(uVar1,(StrRange *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = &_LC8;
  local_50 = 0;
  pSVar2 = *(String **)(this + 0xdc8);
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  TextEdit::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = &_LC8;
  local_50 = 0;
  uVar1 = *(undefined8 *)(this + 0xdd0);
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  LineEdit::set_text(uVar1,(StrRange *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = &_LC8;
  local_50 = 0;
  uVar1 = *(undefined8 *)(this + 0xdd8);
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  LineEdit::set_text(uVar1,(StrRange *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = &_LC8;
  local_50 = 0;
  uVar1 = *(undefined8 *)(this + 0xde8);
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  LineEdit::set_text(uVar1,(StrRange *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigDialog::_on_canceled() */

void __thiscall PluginConfigDialog::_on_canceled(PluginConfigDialog *this)

{
  _clear_fields(this);
  return;
}



/* PluginConfigDialog::_to_absolute_plugin_path(String const&) */

String * PluginConfigDialog::_to_absolute_plugin_path(String *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 0xb;
  local_48 = "/plugin.cfg";
  String::parse_latin1((StrRange *)&local_50);
  operator+((char *)&local_48,(String *)"res://addons/");
  String::operator+(param_1,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigDialog::_get_subfolder() */

PluginConfigDialog * __thiscall PluginConfigDialog::_get_subfolder(PluginConfigDialog *this)

{
  long in_FS_OFFSET;
  long local_48;
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if ((local_48 == 0) || (*(uint *)(local_48 + -8) < 2)) {
    LineEdit::get_text();
    String::replace((char *)local_38,(char *)local_40);
    String::to_lower();
    CowData<char32_t>::_unref(local_38);
    CowData<char32_t>::_unref(local_40);
  }
  else {
    LineEdit::get_text();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PluginConfigDialog::PluginConfigDialog() */

void __thiscall PluginConfigDialog::PluginConfigDialog(PluginConfigDialog *this)

{
  uint uVar1;
  undefined8 uVar2;
  String *pSVar3;
  Vector2 *pVVar4;
  Callable *pCVar5;
  code *pcVar6;
  BoxContainer *this_00;
  GridContainer *this_01;
  Label *pLVar7;
  LineEdit *pLVar8;
  TextEdit *this_02;
  OptionButton *this_03;
  long *plVar9;
  CheckBox *this_04;
  Control *this_05;
  EditorValidationPanel *this_06;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  String local_70 [8];
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xdf8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010bb18;
  this[0xe10] = (PluginConfigDialog)0x0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010b3c8;
  postinitialize_handler((Object *)this_00);
  Control::set_h_size_flags(this_00,3);
  Control::set_v_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  this_01 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_01);
  postinitialize_handler((Object *)this_01);
  GridContainer::set_columns((int)this_01);
  Control::set_v_size_flags(this_01,3);
  Node::add_child(this_00,this_01,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Plugin Name:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(pLVar8,(String *)local_58);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xdb8) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xdb8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"MyPlugin");
  LineEdit::set_placeholder(uVar2,(CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xdb8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,"Required. This name will be displayed in the list of plugins.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb8),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdb8),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Subfolder:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0,0);
  uVar1 = *(uint *)(this + 0xdf8);
  if (uVar1 == *(uint *)(this + 0xdfc)) {
    uVar11 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar11 = 1;
    }
    *(int *)(this + 0xdfc) = (int)uVar11;
    lVar10 = Memory::realloc_static(*(void **)(this + 0xe00),uVar11 * 8,false);
    *(long *)(this + 0xe00) = lVar10;
    if (lVar10 == 0) goto LAB_0010196e;
    uVar1 = *(uint *)(this + 0xdf8);
  }
  else {
    lVar10 = *(long *)(this + 0xe00);
  }
  *(uint *)(this + 0xdf8) = uVar1 + 1;
  *(Label **)(lVar10 + (ulong)uVar1 * 8) = pLVar7;
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(pLVar8,(String *)local_58);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xdc0) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xdc0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"\"my_plugin\" -> res://addons/my_plugin");
  LineEdit::set_placeholder(uVar2,(CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xdc0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "Optional. The folder name should generally use `snake_case` naming (avoid spaces and special characters).\nIf left empty, the folder will be named after the plugin name converted to `snake_case`."
            );
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc0),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdc0),0,0);
  uVar2 = *(undefined8 *)(this + 0xdc0);
  uVar1 = *(uint *)(this + 0xdf8);
  if (uVar1 == *(uint *)(this + 0xdfc)) {
    uVar11 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar11 = 1;
    }
    *(int *)(this + 0xdfc) = (int)uVar11;
    lVar10 = Memory::realloc_static(*(void **)(this + 0xe00),uVar11 * 8,false);
    *(long *)(this + 0xe00) = lVar10;
    if (lVar10 == 0) goto LAB_0010196e;
    uVar1 = *(uint *)(this + 0xdf8);
  }
  else {
    lVar10 = *(long *)(this + 0xe00);
  }
  *(uint *)(this + 0xdf8) = uVar1 + 1;
  *(undefined8 *)(lVar10 + (ulong)uVar1 * 8) = uVar2;
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Description:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0);
  this_02 = (TextEdit *)operator_new(0xeb8,"");
  local_58[0] = 0;
  TextEdit::TextEdit(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(TextEdit **)(this + 0xdc8) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xdc8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "Optional. This description should be kept relatively short (up to 5 lines).\nIt will display when hovering the plugin in the list of plugins."
            );
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pVVar4 = *(Vector2 **)(this + 0xdc8);
  fVar13 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar13 * _LC34._4_4_,fVar13 * (float)_LC34);
  Control::set_custom_minimum_size(pVVar4);
  TextEdit::set_line_wrapping_mode(*(undefined8 *)(this + 0xdc8),1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc8),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdc8),0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Author:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(pLVar8,(String *)local_58);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xdd0) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xdd0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"Godette");
  LineEdit::set_placeholder(uVar2,(CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xdd0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,"Optional. The author\'s username, full name, or organization name."
            );
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd0),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdd0),0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Version:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(pLVar8,(String *)local_58);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xdd8) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xdd8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "Optional. A human-readable version identifier used for informational purposes only.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xdd8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"1.0");
  LineEdit::set_placeholder(uVar2,(CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd8),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdd8),0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Language:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0);
  this_03 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_03,(String *)local_58);
  postinitialize_handler((Object *)this_03);
  *(OptionButton **)(this + 0xde0) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xde0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "Required. The scripting language to use for the script.\nNote that a plugin may use several languages at once by adding more scripts to the plugin."
            );
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  if (0 < (int)ScriptServer::_language_count) {
    iVar12 = 0;
    do {
      plVar9 = (long *)ScriptServer::get_language(iVar12);
      pSVar3 = *(String **)(this + 0xde0);
      (**(code **)(*plVar9 + 0x150))((CowData<char32_t> *)local_58,plVar9);
      OptionButton::add_item(pSVar3,(int)(CowData<char32_t> *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      (**(code **)(*plVar9 + 0x150))((CowData<char32_t> *)local_58,plVar9);
      String::operator==((String *)local_58,"GDScript");
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)ScriptServer::_language_count);
  }
  OptionButton::select((int)*(undefined8 *)(this + 0xde0));
  Node::add_child(this_01,*(undefined8 *)(this + 0xde0),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Script Name:");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0,0);
  pLVar8 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(pLVar8,(String *)local_58);
  postinitialize_handler((Object *)pLVar8);
  *(LineEdit **)(this + 0xde8) = pLVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar3 = *(String **)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "Optional. The name of the script file. If left empty, will default to the subfolder name."
            );
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"\"plugin.gd\" -> res://addons/my_plugin/plugin.gd");
  LineEdit::set_placeholder(uVar2,(CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xde8),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xde8),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Activate now?");
  TTR(local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar7,2);
  Node::add_child(this_01,pLVar7,0,0);
  uVar1 = *(uint *)(this + 0xdf8);
  if (uVar1 == *(uint *)(this + 0xdfc)) {
    uVar11 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar11 = 1;
    }
    *(int *)(this + 0xdfc) = (int)uVar11;
    lVar10 = Memory::realloc_static(*(void **)(this + 0xe00),uVar11 * 8,false);
    *(long *)(this + 0xe00) = lVar10;
    if (lVar10 == 0) goto LAB_0010196e;
    uVar1 = *(uint *)(this + 0xdf8);
  }
  else {
    lVar10 = *(long *)(this + 0xe00);
  }
  *(uint *)(this + 0xdf8) = uVar1 + 1;
  *(Label **)(lVar10 + (ulong)uVar1 * 8) = pLVar7;
  this_04 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  CheckBox::CheckBox(this_04,(String *)local_58);
  postinitialize_handler((Object *)this_04);
  *(CheckBox **)(this + 0xdf0) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdf0),0));
  Node::add_child(this_01,*(undefined8 *)(this + 0xdf0),0,0);
  uVar2 = *(undefined8 *)(this + 0xdf0);
  uVar1 = *(uint *)(this + 0xdf8);
  if (uVar1 == *(uint *)(this + 0xdfc)) {
    uVar11 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar11 = 1;
    }
    *(int *)(this + 0xdfc) = (int)uVar11;
    lVar10 = Memory::realloc_static(*(void **)(this + 0xe00),uVar11 * 8,false);
    *(long *)(this + 0xe00) = lVar10;
    if (lVar10 == 0) {
LAB_0010196e:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar1 = *(uint *)(this + 0xdf8);
  }
  else {
    lVar10 = *(long *)(this + 0xe00);
  }
  *(uint *)(this + 0xdf8) = uVar1 + 1;
  *(undefined8 *)(lVar10 + (ulong)uVar1 * 8) = uVar2;
  this_05 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_05);
  postinitialize_handler((Object *)this_05);
  Node::add_child(this_00,this_05,0,0);
  fVar13 = (float)EditorScale::get_scale();
  local_48 = (ulong)(uint)(fVar13 * __LC49) << 0x20;
  Control::set_custom_minimum_size((Vector2 *)this_05);
  this_06 = (EditorValidationPanel *)operator_new(0xac0,"");
  EditorValidationPanel::EditorValidationPanel(this_06);
  postinitialize_handler((Object *)this_06);
  *(EditorValidationPanel **)(this + 0xe08) = this_06;
  Node::add_child(this_00,this_06,0,0);
  uVar2 = *(undefined8 *)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Plugin name is valid.");
  TTR(local_70,(String *)local_68);
  EditorValidationPanel::add_line((int)uVar2,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Script extension is valid.");
  TTR(local_70,(String *)local_68);
  EditorValidationPanel::add_line((int)uVar2,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Subfolder name is valid.");
  TTR(local_70,(String *)local_68);
  EditorValidationPanel::add_line((int)uVar2,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar2 = *(undefined8 *)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  EditorValidationPanel::add_line((int)uVar2,(String *)0x3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pCVar5 = *(Callable **)(this + 0xe08);
  create_custom_callable_function_pointer<PluginConfigDialog>
            ((PluginConfigDialog *)local_58,(char *)this,
             (_func_void *)"&PluginConfigDialog::_on_required_text_changed");
  EditorValidationPanel::set_update_callback(pCVar5);
  Callable::~Callable((Callable *)local_58);
  EditorValidationPanel::set_accept_button(*(Button **)(this + 0xe08));
  plVar9 = *(long **)(this + 0xde0);
  pcVar6 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorValidationPanel>
            ((EditorValidationPanel *)local_58,*(char **)(this + 0xe08),
             (_func_void *)"&EditorValidationPanel::update");
  iVar12 = (int)(String *)local_68;
  Callable::unbind(iVar12);
  (*pcVar6)(plVar9,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar9 = *(long **)(this + 0xdb8);
  pcVar6 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorValidationPanel>
            ((EditorValidationPanel *)local_58,*(char **)(this + 0xe08),
             (_func_void *)"&EditorValidationPanel::update");
  Callable::unbind(iVar12);
  (*pcVar6)(plVar9,SceneStringNames::singleton + 0x270,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar9 = *(long **)(this + 0xdc0);
  pcVar6 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorValidationPanel>
            ((EditorValidationPanel *)local_58,*(char **)(this + 0xe08),
             (_func_void *)"&EditorValidationPanel::update");
  Callable::unbind(iVar12);
  (*pcVar6)(plVar9,SceneStringNames::singleton + 0x270,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar9 = *(long **)(this + 0xde8);
  pcVar6 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorValidationPanel>
            ((EditorValidationPanel *)local_58,*(char **)(this + 0xe08),
             (_func_void *)"&EditorValidationPanel::update");
  Callable::unbind(iVar12);
  (*pcVar6)(plVar9,SceneStringNames::singleton + 0x270,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigDialog::config(String const&) */

void __thiscall PluginConfigDialog::config(PluginConfigDialog *this,String *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  String *pSVar3;
  char cVar4;
  int iVar5;
  RefCounted *this_00;
  char *pcVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    _clear_fields(this);
    this[0xe10] = (PluginConfigDialog)0x0;
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Create a Plugin");
    TTR(local_80,(String *)&local_90);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_00101a6e:
    puVar7 = *(undefined8 **)(this + 0xe00);
    puVar1 = puVar7 + *(uint *)(this + 0xdf8);
    for (; puVar1 != puVar7; puVar7 = puVar7 + 1) {
      CanvasItem::set_visible(SUB81(*puVar7,0));
    }
    EditorValidationPanel::update();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    local_88 = 0;
    if (this[0xe10] == (PluginConfigDialog)0x0) {
      String::parse_latin1((String *)&local_88,"");
      pcVar6 = "Create";
    }
    else {
      String::parse_latin1((String *)&local_88,"");
      pcVar6 = "Update";
    }
    local_90 = 0;
    String::parse_latin1((String *)&local_90,pcVar6);
    TTR(local_80,(String *)&local_90);
    AcceptDialog::set_ok_button_text(this,local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    this_00 = (RefCounted *)operator_new(0x1b0,"");
    RefCounted::RefCounted(this_00);
    *(undefined ***)this_00 = &PTR__initialize_classv_0010b9b8;
    *(undefined8 *)(this_00 + 0x1a8) = 2;
    *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this_00);
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      this_00 = (RefCounted *)0x0;
    }
    iVar5 = ConfigFile::load((String *)this_00);
    if (iVar5 == 0) {
      uVar2 = *(undefined8 *)(this + 0xdb8);
      Variant::Variant((Variant *)local_78,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"name");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"plugin");
      ConfigFile::get_value((String *)local_58,(String *)this_00,(Variant *)&local_90);
      Variant::operator_cast_to_String((Variant *)local_80);
      LineEdit::set_text(uVar2,(Variant *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = *(undefined8 *)(this + 0xdc0);
      String::get_base_dir();
      String::get_file();
      LineEdit::set_text(uVar2,(Variant *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pSVar3 = *(String **)(this + 0xdc8);
      Variant::Variant((Variant *)local_78,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"description");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"plugin");
      ConfigFile::get_value((String *)local_58,(String *)this_00,(Variant *)&local_90);
      Variant::operator_cast_to_String((Variant *)local_80);
      TextEdit::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = *(undefined8 *)(this + 0xdd0);
      Variant::Variant((Variant *)local_78,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"author");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"plugin");
      ConfigFile::get_value((String *)local_58,(String *)this_00,(Variant *)&local_90);
      Variant::operator_cast_to_String((Variant *)local_80);
      LineEdit::set_text(uVar2,(Variant *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = *(undefined8 *)(this + 0xdd8);
      Variant::Variant((Variant *)local_78,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"version");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"plugin");
      ConfigFile::get_value((String *)local_58,(String *)this_00,(Variant *)&local_90);
      Variant::operator_cast_to_String((Variant *)local_80);
      LineEdit::set_text(uVar2,(Variant *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = *(undefined8 *)(this + 0xde8);
      Variant::Variant((Variant *)local_78,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"script");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"plugin");
      ConfigFile::get_value((String *)local_58,(String *)this_00,(Variant *)&local_90);
      Variant::operator_cast_to_String((Variant *)local_80);
      LineEdit::set_text(uVar2,(Variant *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      this[0xe10] = (PluginConfigDialog)0x1;
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Edit a Plugin");
      TTR(local_80,(String *)&local_90);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
      goto LAB_00101a6e;
    }
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"\'.");
    operator+((char *)&local_90,(String *)"Cannot load config file from path \'");
    String::operator+(local_80,(String *)&local_90);
    _err_print_error("config","editor/plugins/plugin_config_dialog.cpp",0xad,
                     "Condition \"err != OK\" is true.",local_80,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(this_00,false);
        return;
      }
      goto LAB_0010221a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010221a:
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



/* PluginConfigDialog::_on_required_text_changed() */

void __thiscall PluginConfigDialog::_on_required_text_changed(PluginConfigDialog *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long in_FS_OFFSET;
  String local_70 [8];
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if ((local_48 == 0) || (iVar3 = (int)*(undefined8 *)(local_48 + -8), iVar3 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001022c8:
    uVar1 = *(undefined8 *)(this + 0xe08);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Plugin name cannot be blank.");
    TTR((String *)&local_48,(String *)&local_58);
    EditorValidationPanel::set_message(uVar1,0,(CowData<char32_t> *)&local_48,2,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    cVar2 = CanvasItem::is_visible();
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (iVar3 == 1) goto LAB_001022c8;
    cVar2 = CanvasItem::is_visible();
  }
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)(this + 0xe08);
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"");
    EditorValidationPanel::set_message(uVar1,1,(CowData<char32_t> *)&local_48,0,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    LineEdit::get_text();
    if ((local_50 != 0) && (1 < *(uint *)(local_50 + -8))) {
      LineEdit::get_text();
      cVar2 = String::is_valid_filename();
      if (cVar2 == '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        uVar1 = *(undefined8 *)(this + 0xe08);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"Subfolder name is not a valid folder name.");
        TTR((String *)&local_48,(String *)&local_58);
        EditorValidationPanel::set_message(uVar1,1,(CowData<char32_t> *)&local_48,2,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        goto LAB_001023ca;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _get_subfolder((PluginConfigDialog *)&local_48);
    operator+((char *)&local_60,(String *)"res://addons/");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((this[0xe10] == (PluginConfigDialog)0x0) &&
       (cVar2 = DirAccess::exists((String *)&local_60), cVar2 != '\0')) {
      uVar1 = *(undefined8 *)(this + 0xe08);
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Subfolder cannot be one which already exists.");
      TTR((String *)&local_48,(String *)&local_58);
      EditorValidationPanel::set_message(uVar1,1,(CowData<char32_t> *)&local_48,2,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
LAB_001023ca:
  iVar3 = OptionButton::get_selected();
  plVar4 = (long *)ScriptServer::get_language(iVar3);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x168))(local_70,plVar4);
    LineEdit::get_text();
    String::get_extension();
    if ((local_60 == 0) || (*(uint *)(local_60 + -8) < 2)) {
      LineEdit::get_text();
      cVar2 = String::ends_with((char *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
    else {
      LineEdit::get_text();
      String::get_extension();
      cVar2 = String::operator!=((String *)&local_50,local_70);
      if (cVar2 == '\0') {
        LineEdit::get_text();
        cVar2 = String::ends_with((char *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)(this + 0xe08);
      local_50 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)local_70);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1
                ((String *)&local_68,"Script extension must match chosen language extension (.%s).")
      ;
      TTR((String *)&local_58,(String *)&local_68);
      vformat<String>((CowData<char32_t> *)&local_48,(String *)&local_58,
                      (CowData<char32_t> *)&local_50);
      EditorValidationPanel::set_message(uVar1,2,(CowData<char32_t> *)&local_48,2,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    cVar2 = CanvasItem::is_visible();
    if (cVar2 != '\0') {
      (**(code **)(*plVar4 + 0x150))((CowData<char32_t> *)&local_48,plVar4);
      cVar2 = String::operator==((String *)&local_48,"C#");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (cVar2 == '\0') {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
      }
      else {
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdf0),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
        uVar1 = *(undefined8 *)(this + 0xe08);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1
                  ((String *)&local_58,
                   "C# doesn\'t support activating the plugin on creation because the project must be built first."
                  );
        TTR((String *)&local_48,(String *)&local_58);
        EditorValidationPanel::set_message(uVar1,3,(CowData<char32_t> *)&local_48,1,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
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



/* PluginConfigDialog::_bind_methods() */

void PluginConfigDialog::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  PropertyInfo local_148 [48];
  undefined4 local_118 [2];
  CowData local_110 [8];
  StringName local_108 [8];
  undefined4 local_100;
  CowData local_f8 [8];
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
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = 0;
  local_160 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_160);
  local_168 = 0;
  local_b8 = "activate_name";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_168);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_118,4,(StrRange *)&local_168,0,(StrRange *)&local_160,6,
             &local_158);
  local_b8 = "";
  local_170 = 0;
  local_178 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_180 = 0;
  local_b8 = "script_path";
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            (local_148,4,(StrRange *)&local_180,0,(StrRange *)&local_178,6,&local_170);
  local_150 = 0;
  local_b8 = "plugin_ready";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_150);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_150);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118[0]);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "PluginConfigDialog";
  local_188 = 0;
  local_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_e8,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  PropertyInfo::~PropertyInfo(local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_158 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PluginConfigDialog::_create_script_for_plugin(String const&, Ref<ConfigFile>, int) */

void __thiscall
PluginConfigDialog::_create_script_for_plugin
          (PluginConfigDialog *this,undefined8 param_2,undefined8 *param_3,int param_4)

{
  Variant *pVVar1;
  String *pSVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  Object *pOVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_f8 [8];
  PluginConfigDialog local_f0 [8];
  String local_e8 [8];
  CowData<char32_t> local_e0 [8];
  long local_d8;
  Object *local_d0;
  Object *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)ScriptServer::get_language(param_4);
  if (plVar6 == (long *)0x0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_create_script_for_plugin","editor/plugins/plugin_config_dialog.cpp",0x51,
                       "Condition \"language == nullptr\" is true.",0,0);
      return;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x168))(local_f8,plVar6);
    LineEdit::get_text();
    if ((local_b8 == 0) || (*(uint *)(local_b8 + -8) < 2)) {
      _get_subfolder(local_f0);
    }
    else {
      LineEdit::get_text();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    String::get_extension();
    cVar4 = String::operator!=((String *)&local_b8,(String *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar4 != '\0') {
      operator+((char *)&local_b8,(String *)&_LC14);
      String::operator+=((String *)local_f0,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    String::path_join(local_e8);
    pSVar2 = (String *)*param_3;
    Variant::Variant((Variant *)local_88,(String *)local_f0);
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"script");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"plugin");
    ConfigFile::set_value(pSVar2,(String *)&local_c0,(Variant *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (this[0xe10] == (PluginConfigDialog)0x0) {
      cVar4 = FileAccess::exists(local_e8);
      if (cVar4 == '\0') {
        String::get_basename();
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"");
        pcVar3 = *(code **)(*plVar6 + 0x1a8);
        StringName::StringName((StringName *)&local_c0,"EditorPlugin",false);
        if (pcVar3 == ScriptLanguage::get_built_in_templates) {
          local_b0 = 0;
        }
        else {
          (*pcVar3)((CowData<char32_t> *)&local_b8,plVar6,(String *)&local_c0);
        }
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        if (local_b0 != 0) {
          if (*(long *)(local_b0 + -8) < 1) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,*(long *)(local_b0 + -8),"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (local_d8 != *(long *)(local_b0 + 0x18)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(local_b0 + 0x18));
          }
        }
        pcVar3 = *(code **)(*plVar6 + 0x1a0);
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"EditorPlugin");
        if (pcVar3 == ScriptLanguage::make_template) {
          local_d0 = (Object *)0x0;
        }
        else {
          (*pcVar3)(&local_d0,plVar6,(String *)&local_d8,local_e0,(String *)&local_c0);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        (**(code **)(*(long *)local_d0 + 0x188))(local_d0,local_e8,1);
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"");
        local_c8 = (Object *)0x0;
        if (local_d0 != (Object *)0x0) {
          pOVar7 = (Object *)__dynamic_cast(local_d0,&Object::typeinfo,&Resource::typeinfo,0);
          if (pOVar7 != (Object *)0x0) {
            local_c8 = pOVar7;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              local_c8 = (Object *)0x0;
            }
          }
        }
        ResourceSaver::save((String *)&local_c8,(String *)&local_c0,0);
        if (local_c8 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar7 = local_c8;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_c8);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_c8 = (Object *)0x0;
        pSVar2 = (String *)*param_3;
        String::parse_latin1((String *)&local_c8,"plugin.cfg");
        String::path_join((String *)&local_c0);
        ConfigFile::save(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        cVar4 = BaseButton::is_pressed();
        if (cVar4 == '\0') {
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"");
        }
        else {
          _get_subfolder((PluginConfigDialog *)&local_c8);
          _to_absolute_plugin_path((String *)&local_c0);
        }
        pOVar7 = local_d0;
        if (_create_script_for_plugin(String_const&,Ref<ConfigFile>,int)::{lambda()#1}::operator()()
            ::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_create_script_for_plugin(String_const&,Ref<ConfigFile>,int)
                                       ::{lambda()#1}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_create_script_for_plugin(String_const&,Ref<ConfigFile>,int)::
                                 {lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_create_script_for_plugin(String_const&,Ref<ConfigFile>,int)::{lambda()#1}
                          ::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_create_script_for_plugin(String_const&,Ref<ConfigFile>,int)::
                                 {lambda()#1}::operator()()::sname);
          }
        }
        Variant::Variant((Variant *)local_88,pOVar7);
        Variant::Variant(local_70,(String *)&local_c0);
        local_50 = (undefined1  [16])0x0;
        pVVar8 = (Variant *)local_40;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = local_70;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_create_script_for_plugin(String_const&,Ref<ConfigFile>,int)::{lambda()#1}
                         ::operator()()::sname,&local_a8,2);
        do {
          pVVar1 = pVVar8 + -0x18;
          pVVar8 = pVVar8 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar8 != (Variant *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        if (cVar4 != '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        }
        if (local_d0 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar7 = local_d0;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_d0);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        CowData<ScriptLanguage::ScriptTemplate>::_unref
                  ((CowData<ScriptLanguage::ScriptTemplate> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref(local_e0);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    CowData<char32_t>::_unref(local_f8);
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigDialog::_on_confirmed() */

void __thiscall PluginConfigDialog::_on_confirmed(PluginConfigDialog *this)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  RefCounted *this_00;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  String *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_subfolder((PluginConfigDialog *)&local_60);
  operator+((char *)local_78,(String *)"res://addons/");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (this[0xe10] == (PluginConfigDialog)0x0) {
    DirAccess::create((PluginConfigDialog *)&local_60,0);
    if (local_60 == (String *)0x0) goto LAB_00103720;
    iVar3 = (**(code **)(*(long *)local_60 + 0x1c0))();
    if (iVar3 != 0) {
      if (local_60 != (String *)0x0) {
        cVar2 = RefCounted::unreference();
        pSVar1 = local_60;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler((Object *)local_60);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
            Memory::free_static(pSVar1,false);
          }
        }
      }
      goto LAB_00103720;
    }
    if (local_60 != (String *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)local_60);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_60 + 0x140))(local_60);
          Memory::free_static(local_60,false);
        }
      }
    }
  }
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010b9b8;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  local_68 = 0;
  if (cVar2 == '\0') {
    this_00 = (RefCounted *)0x0;
  }
  String::parse_latin1((String *)&local_68,"plugin.cfg");
  String::path_join((String *)&local_60);
  ConfigFile::load((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  LineEdit::get_text();
  Variant::Variant((Variant *)local_58,(String *)local_70);
  local_60 = (String *)0x0;
  String::parse_latin1((String *)&local_60,"name");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"plugin");
  ConfigFile::set_value((String *)this_00,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_70);
  TextEdit::get_text();
  Variant::Variant((Variant *)local_58,(String *)local_70);
  local_60 = (String *)0x0;
  String::parse_latin1((String *)&local_60,"description");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"plugin");
  ConfigFile::set_value((String *)this_00,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_70);
  LineEdit::get_text();
  Variant::Variant((Variant *)local_58,(String *)local_70);
  local_60 = (String *)0x0;
  String::parse_latin1((String *)&local_60,"author");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"plugin");
  ConfigFile::set_value((String *)this_00,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_70);
  LineEdit::get_text();
  Variant::Variant((Variant *)local_58,(String *)local_70);
  local_60 = (String *)0x0;
  String::parse_latin1((String *)&local_60,"version");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"plugin");
  ConfigFile::set_value((String *)this_00,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_70);
  uVar4 = OptionButton::get_selected();
  local_60 = (String *)this_00;
  cVar2 = RefCounted::reference();
  if (cVar2 == '\0') {
    local_60 = (String *)0x0;
    _create_script_for_plugin(this,local_78,(PluginConfigDialog *)&local_60,uVar4);
  }
  else {
    _create_script_for_plugin(this,local_78,(PluginConfigDialog *)&local_60,uVar4);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)this_00);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
  }
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"plugin.cfg");
  String::path_join((String *)&local_60);
  ConfigFile::save((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  ProjectSettingsEditor::update_plugins();
  EditorFileSystem::scan();
  _clear_fields(this);
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler((Object *)this_00);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
  }
LAB_00103720:
  CowData<char32_t>::_unref(local_78);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10c0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  
  return (uint)CONCAT71(0x10c0,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bf,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c0,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c0,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c0,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* PluginConfigDialog::_property_can_revertv(StringName const&) const */

undefined8 PluginConfigDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PluginConfigDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PluginConfigDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x10c0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bf,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* ScriptLanguage::make_template(String const&, String const&, String const&) const */

String * ScriptLanguage::make_template(String *param_1,String *param_2,String *param_3)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* ScriptLanguage::get_built_in_templates(StringName const&) */

StringName * ScriptLanguage::get_built_in_templates(StringName *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* CallableCustomMethodPointer<EditorValidationPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<PluginConfigDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PluginConfigDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PluginConfigDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorValidationPanel, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::get_argument_count
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<PluginConfigDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<PluginConfigDialog,void>::get_argument_count
          (CallableCustomMethodPointer<PluginConfigDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<PluginConfigDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PluginConfigDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PluginConfigDialog,void> *this)

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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b268;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b268;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b740;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b740;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010f010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PluginConfigDialog::_getv(StringName const&, Variant&) const */

undefined8 PluginConfigDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010f010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PluginConfigDialog::_setv(StringName const&, Variant const&) */

undefined8 PluginConfigDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
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
      goto LAB_001042cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001042cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001042cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<PluginConfigDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<PluginConfigDialog,void>::get_object
          (CallableCustomMethodPointer<PluginConfigDialog,void> *this)

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
      goto LAB_001043cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001043cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001043cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* PluginConfigDialog::_validate_propertyv(PropertyInfo&) const */

void PluginConfigDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_0010f020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_0010f028 == Control::_validate_property) {
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
    if ((code *)PTR__set_0010f030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104698) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f038 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x10c0,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__notification_0010f040 != Window::_notification) {
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
  if ((code *)PTR__notification_0010f040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* PluginConfigDialog::_notificationv(int, bool) */

void __thiscall
PluginConfigDialog::_notificationv(PluginConfigDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    (**(code **)(*(long *)this + 0x268))();
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
                    /* WARNING: Could not recover jumptable at 0x00104874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x268))(this,param_1);
  return;
}



/* PluginConfigDialog::is_class_ptr(void*) const */

uint PluginConfigDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10c0,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10bf,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10c0,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f048 != Container::_notification) {
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
  if ((code *)PTR__notification_0010f048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104a60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104a60:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104ac0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104ac0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
LAB_00104b23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104b23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00104b8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00104b8e:
  return &_get_class_namev()::_class_name_static;
}



/* PluginConfigDialog::_get_class_namev() const */

undefined8 * PluginConfigDialog::_get_class_namev(void)

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
LAB_00104c13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104c13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PluginConfigDialog");
      goto LAB_00104c7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PluginConfigDialog");
LAB_00104c7e:
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
LAB_00104cf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104cf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_00104d5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_00104d5e:
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
LAB_00104de3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104de3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00104e4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00104e4e:
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
LAB_00104ec3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104ec3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00104f2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00104f2e:
  return &_get_class_namev()::_class_name_static;
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



/* Callable create_custom_callable_function_pointer<PluginConfigDialog>(PluginConfigDialog*, char
   const*, void (PluginConfigDialog::*)()) */

PluginConfigDialog *
create_custom_callable_function_pointer<PluginConfigDialog>
          (PluginConfigDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010bd98;
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
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010be28;
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
      if ((code *)PTR__bind_methods_0010f058 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_0010f050 != RefCounted::_bind_methods) {
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



/* WARNING: Removing unreachable block (ram,0x00105e38) */
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



/* PluginConfigDialog::get_class() const */

void PluginConfigDialog::get_class(void)

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
      goto LAB_0010670f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010670f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001066e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001067c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010670f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC82,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001067c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<PluginConfigDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<PluginConfigDialog,void>::call
          (CallableCustomMethodPointer<PluginConfigDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010691f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010691f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001068f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001069d0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010691f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC82,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001069d0:
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
    if ((code *)PTR__bind_methods_0010f060 != Object::_bind_methods) {
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
            if ((code *)PTR__bind_methods_0010f058 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_0010f068 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"AcceptDialog");
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
    if ((code *)PTR__bind_methods_0010f070 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0010f058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010f078 !=
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
      if ((code *)PTR__bind_methods_0010f080 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_0010773b;
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
      if (cVar5 != '\0') goto LAB_0010773b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010773b:
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
    if (cVar5 != '\0') goto LAB_0010793b;
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
      if (cVar5 != '\0') goto LAB_0010793b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00107a3e;
    }
  }
LAB_0010793b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107a3e:
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
    if (cVar5 != '\0') goto LAB_00107b4b;
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
      if (cVar5 != '\0') goto LAB_00107b4b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_00107c4e;
    }
  }
LAB_00107b4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107c4e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigDialog::is_class(String const&) const */

undefined8 __thiscall PluginConfigDialog::is_class(PluginConfigDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00107d5b;
  }
  cVar4 = String::operator==(param_1,"PluginConfigDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00107d5b:
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
    if (cVar4 != '\0') goto LAB_00107e83;
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
      if (cVar4 != '\0') goto LAB_00107e83;
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
        if (cVar4 != '\0') goto LAB_00107e83;
      }
      cVar4 = String::operator==(param_1,"CanvasItem");
      if (cVar4 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = Node::is_class((Node *)this,param_1);
          return uVar5;
        }
        goto LAB_0010801e;
      }
    }
  }
LAB_00107e83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010801e:
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
    if (cVar5 != '\0') goto LAB_0010812b;
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
      if (cVar5 != '\0') goto LAB_0010812b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010822e;
    }
  }
LAB_0010812b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010822e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_0010833b;
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
      if (cVar5 != '\0') goto LAB_0010833b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010833b:
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
    if (cVar4 != '\0') goto LAB_0010853b;
  }
  cVar4 = String::operator==(param_1,"ConfigFile");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010853b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
        if (pvVar3 == (void *)0x0) goto LAB_0010867f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010867f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
      goto LAB_0010883c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010883c:
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
  local_78 = &_LC83;
  local_88 = 0;
  local_90 = 0;
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
      goto LAB_00108a8c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108a8c:
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
      goto LAB_00108ec1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108ec1:
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
  if ((code *)PTR__get_property_list_0010f088 != Object::_get_property_list) {
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



/* PluginConfigDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
PluginConfigDialog::_get_property_listv(PluginConfigDialog *this,List *param_1,bool param_2)

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
  local_78 = "PluginConfigDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PluginConfigDialog";
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
  StringName::StringName((StringName *)&local_78,"PluginConfigDialog",false);
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
  if ((code *)PTR__get_property_list_0010f090 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0010f098 != CanvasItem::_get_property_list) {
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
      goto LAB_00109d91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109d91:
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
      goto LAB_0010a041;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a041:
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
      goto LAB_0010a2f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a2f1:
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



/* PluginConfigDialog::_bind_methods() [clone .cold] */

void PluginConfigDialog::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PluginConfigDialog::_initialize_classv() */

void PluginConfigDialog::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_0010f058 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0010f068 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_0010f070 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ConfirmationDialog");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"PluginConfigDialog");
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<ScriptLanguage::ScriptTemplate>::_unref() */

void __thiscall
CowData<ScriptLanguage::ScriptTemplate>::_unref(CowData<ScriptLanguage::ScriptTemplate> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this_00;
  long lVar5;
  
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
          CowData<char32_t>::_unref(this_00 + 0x18);
          CowData<char32_t>::_unref(this_00 + 0x10);
          CowData<char32_t>::_unref(this_00 + 8);
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x28;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010ad1f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0010ad1f:
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
  
  *(undefined ***)this = &PTR__initialize_classv_0010b9b8;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010ae21;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010ae21:
  *(undefined ***)this = &PTR__initialize_classv_0010b268;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b9b8;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010af11;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010af11:
  *(undefined ***)this = &PTR__initialize_classv_0010b268;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* PluginConfigDialog::_clear_fields() */

void PluginConfigDialog::_GLOBAL__sub_I__clear_fields(void)

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
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle,
               uStack_8);
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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<PluginConfigDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PluginConfigDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PluginConfigDialog,void> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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


