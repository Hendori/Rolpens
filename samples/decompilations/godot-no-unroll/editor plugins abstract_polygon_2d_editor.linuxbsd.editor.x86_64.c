
/* AbstractPolygon2DEditor::_has_uv() const */

undefined8 AbstractPolygon2DEditor::_has_uv(void)

{
  return 0;
}



/* AbstractPolygon2DEditor::_get_polygon_count() const */

undefined8 AbstractPolygon2DEditor::_get_polygon_count(void)

{
  return 1;
}



/* AbstractPolygon2DEditor::_get_offset(int) const */

undefined8 AbstractPolygon2DEditor::_get_offset(int param_1)

{
  return 0;
}



/* AbstractPolygon2DEditor::_action_add_polygon(Variant const&) */

void __thiscall
AbstractPolygon2DEditor::_action_add_polygon(AbstractPolygon2DEditor *this,Variant *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x3c0))(this,0,param_1);
  return;
}



/* AbstractPolygon2DEditor::_has_resource() const */

undefined8 AbstractPolygon2DEditor::_has_resource(void)

{
  return 1;
}



/* AbstractPolygon2DEditor::_create_resource() */

void AbstractPolygon2DEditor::_create_resource(void)

{
  return;
}



/* AbstractPolygon2DEditorPlugin::handles(Object*) const */

void __thiscall
AbstractPolygon2DEditorPlugin::handles(AbstractPolygon2DEditorPlugin *this,Object *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x58))(param_1,this + 0x668);
  return;
}



/* AbstractPolygon2DEditor::_action_set_polygon(int, Variant const&) */

void __thiscall
AbstractPolygon2DEditor::_action_set_polygon
          (AbstractPolygon2DEditor *this,int param_1,Variant *param_2)

{
  code *pcVar1;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)this + 0x3c8);
  (**(code **)(*(long *)this + 0x3a0))(local_48,this,param_1);
  (*pcVar1)(this,param_1,local_48,param_2);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_get_polygon(int) const */

AbstractPolygon2DEditor * __thiscall
AbstractPolygon2DEditor::_get_polygon(AbstractPolygon2DEditor *this,int param_1)

{
  bool *pbVar1;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar1 = (bool *)(**(code **)(*(long *)CONCAT44(in_register_00000034,param_1) + 0x370))
                             ((long *)CONCAT44(in_register_00000034,param_1));
  StringName::StringName((StringName *)&local_28,"polygon",false);
  Object::get((StringName *)this,pbVar1);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_set_polygon(int, Variant const&) const */

void __thiscall
AbstractPolygon2DEditor::_set_polygon(AbstractPolygon2DEditor *this,int param_1,Variant *param_2)

{
  StringName *pSVar1;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (StringName *)
           (**(code **)(*(long *)this + 0x370))(this,CONCAT44(in_register_00000034,param_1));
  StringName::StringName((StringName *)&local_28,"polygon",false);
  Object::set(pSVar1,(Variant *)&local_28,(bool *)param_2);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_commit_action() */

void __thiscall AbstractPolygon2DEditor::_commit_action(AbstractPolygon2DEditor *this)

{
  Object *pOVar1;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar1 = (Object *)EditorUndoRedoManager::get_singleton();
  StringName::StringName((StringName *)&local_50,"update_viewport",false);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar1,*(StringName **)(this + 0xa88),(Variant **)&local_50,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"update_viewport",false);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar1,*(StringName **)(this + 0xa88),(Variant **)&local_50,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar1,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_action_set_polygon(int, Variant const&, Variant const&) */

void __thiscall
AbstractPolygon2DEditor::_action_set_polygon
          (AbstractPolygon2DEditor *this,int param_1,Variant *param_2,Variant *param_3)

{
  char cVar1;
  StringName *pSVar2;
  Object *pOVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  long local_b0;
  Variant *local_a8 [2];
  int local_98 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (StringName *)
           (**(code **)(*(long *)this + 0x370))(this,CONCAT44(in_register_00000034,param_1));
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  Variant::Variant((Variant *)local_98,param_3);
  StringName::StringName((StringName *)&local_b0,"set_polygon",false);
  Variant::Variant((Variant *)local_78,(Variant *)local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_a8[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar3,pSVar2,(Variant **)&local_b0,(int)local_a8);
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
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_98,param_2);
  StringName::StringName((StringName *)&local_b0,"set_polygon",false);
  Variant::Variant((Variant *)local_78,(Variant *)local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_a8[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar2,(Variant **)&local_b0,(int)local_a8);
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
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditorPlugin::make_visible(bool) */

void __thiscall
AbstractPolygon2DEditorPlugin::make_visible(AbstractPolygon2DEditorPlugin *this,bool param_1)

{
  long *plVar1;
  
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  plVar1 = *(long **)(this + 0x660);
  if (plVar1[0x151] == 0) {
    plVar1[0x151] = CanvasItemEditor::singleton;
  }
  (**(code **)(*plVar1 + 0x378))(plVar1,0);
  CanvasItemEditor::update_viewport();
  return;
}



/* AbstractPolygon2DEditor::_node_removed(Node*) */

void __thiscall AbstractPolygon2DEditor::_node_removed(AbstractPolygon2DEditor *this,Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = (Node *)(**(code **)(*(long *)this + 0x370))();
  if (param_1 != pNVar1) {
    return;
  }
  if (*(long *)(this + 0xa88) == 0) {
    *(undefined8 *)(this + 0xa88) = CanvasItemEditor::singleton;
  }
  (**(code **)(*(long *)this + 0x378))(this,0);
  CanvasItemEditor::update_viewport();
  CanvasItem::hide();
  CanvasItemEditor::update_viewport();
  return;
}



/* AbstractPolygon2DEditor::Vertex::TEMPNAMEPLACEHOLDERVALUE(AbstractPolygon2DEditor::Vertex const&)
   const */

undefined4 __thiscall AbstractPolygon2DEditor::Vertex::operator==(Vertex *this,Vertex *param_1)

{
  if (*(int *)this != *(int *)param_1) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),
                  *(int *)(this + 4) == *(int *)(param_1 + 4));
}



/* AbstractPolygon2DEditor::Vertex::TEMPNAMEPLACEHOLDERVALUE(AbstractPolygon2DEditor::Vertex const&)
   const */

undefined4 __thiscall AbstractPolygon2DEditor::Vertex::operator!=(Vertex *this,Vertex *param_1)

{
  if (*(int *)this != *(int *)param_1) {
    return 1;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),
                  *(int *)(this + 4) != *(int *)(param_1 + 4));
}



/* AbstractPolygon2DEditor::Vertex::valid() const */

uint __thiscall AbstractPolygon2DEditor::Vertex::valid(Vertex *this)

{
  return ~*(uint *)(this + 4) >> 0x1f;
}



/* AbstractPolygon2DEditor::_wip_changed() */

void __thiscall AbstractPolygon2DEditor::_wip_changed(AbstractPolygon2DEditor *this)

{
  code *pcVar1;
  char cVar2;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xa80] != (AbstractPolygon2DEditor)0x0) &&
     (*(code **)(*(long *)this + 0x380) != _has_uv)) {
    cVar2 = (**(code **)(*(long *)this + 0x380))();
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*(long *)this + 0x3a8);
      Variant::Variant((Variant *)local_38,(Vector *)(this + 0xa70));
      (*pcVar1)(this,0,local_38);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::get_active_point() const */

undefined8 __thiscall AbstractPolygon2DEditor::get_active_point(AbstractPolygon2DEditor *this)

{
  if (-1 < *(int *)(this + 0xa3c)) {
    return *(undefined8 *)(this + 0xa38);
  }
  return *(undefined8 *)(this + 0xa40);
}



/* AbstractPolygon2DEditor::disable_polygon_editing(bool, String const&) */

void AbstractPolygon2DEditor::disable_polygon_editing(bool param_1,String *param_2)

{
  String *pSVar1;
  undefined7 in_register_00000039;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar2 = CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(lVar2 + 0xa82) = (byte)param_2 ^ 1;
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar2 + 0xa10),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar2 + 0xa18),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar2 + 0xa20),0));
  if ((byte)param_2 == 0) {
    pSVar1 = *(String **)(lVar2 + 0xa10);
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Create points.";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Control::set_tooltip_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = "";
    local_60 = 0;
    pSVar1 = *(String **)(lVar2 + 0xa18);
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Edit points.\nLMB: Move Point\nRMB: Erase Point";
    local_68 = 0;
    local_50 = 0x2d;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Control::set_tooltip_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = "";
    local_60 = 0;
    pSVar1 = *(String **)(lVar2 + 0xa20);
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Erase points.";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Control::set_tooltip_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Control::set_tooltip_text(*(String **)(lVar2 + 0xa10));
    Control::set_tooltip_text(*(String **)(lVar2 + 0xa18));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::set_tooltip_text(*(String **)(lVar2 + 0xa20));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin() */

void __thiscall
AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin(AbstractPolygon2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010be60;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x668));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AbstractPolygon2DEditor::AbstractPolygon2DEditor(bool) */

void __thiscall
AbstractPolygon2DEditor::AbstractPolygon2DEditor(AbstractPolygon2DEditor *this,bool param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Button *pBVar4;
  ConfirmationDialog *this_00;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68 [2];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  this[0xa81] = (AbstractPolygon2DEditor)param_1;
  *(undefined ***)this = &PTR__initialize_classv_0010ba68;
  this[0xa0c] = (AbstractPolygon2DEditor)0x1;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  this[0xa80] = (AbstractPolygon2DEditor)0x0;
  this[0xa82] = (AbstractPolygon2DEditor)0x0;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined4 *)(this + 0xaa0) = 1;
  *(undefined8 *)(this + 0xa28) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa48) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0xa38) = 0xffffffff;
  *(undefined4 *)(this + 0xa3c) = 0xffffffff;
  *(undefined4 *)(this + 0xa40) = 0xffffffff;
  *(undefined4 *)(this + 0xa44) = 0xffffffff;
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar4,(String *)&local_58);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xa10) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa10));
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  plVar1 = *(long **)(this + 0xa10);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AbstractPolygon2DEditor,int>
            ((AbstractPolygon2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AbstractPolygon2DEditor::_menu_option");
  Callable::bind<AbstractPolygon2DEditor::_unnamed_type_1_>
            ((Callable *)local_68,(CowData<char32_t> *)&local_58,0);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa10),0));
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar4,(String *)&local_58);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xa18) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa18));
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  plVar1 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AbstractPolygon2DEditor,int>
            ((AbstractPolygon2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AbstractPolygon2DEditor::_menu_option");
  Callable::bind<AbstractPolygon2DEditor::_unnamed_type_1_>
            ((Callable *)local_68,(CowData<char32_t> *)&local_58,1);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa18),0));
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar4,(String *)&local_58);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xa20) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa20));
  Node::add_child(this,*(undefined8 *)(this + 0xa20),0,0);
  plVar1 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<AbstractPolygon2DEditor,int>
            ((AbstractPolygon2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AbstractPolygon2DEditor::_menu_option");
  Callable::bind<AbstractPolygon2DEditor::_unnamed_type_1_>
            ((Callable *)local_68,(CowData<char32_t> *)&local_58,2);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa20),0));
  this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(ConfirmationDialog **)(this + 0xa98) = this_00;
  Node::add_child(this,this_00,0,0);
  local_58 = "";
  local_68[0] = 0;
  uVar3 = *(undefined8 *)(this + 0xa98);
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Create";
  local_70 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  AcceptDialog::set_ok_button_text(uVar3,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_notification(int) */

void __thiscall AbstractPolygon2DEditor::_notification(AbstractPolygon2DEditor *this,int param_1)

{
  Ref *pRVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  CallableCustom *pCVar8;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    local_58[0] = (Object *)0x0;
    disable_polygon_editing(SUB81(this,0),(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
    plVar2 = *(long **)(this + 0x240);
    if (plVar2 == (long *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pcVar3 = *(code **)(*plVar2 + 0x108);
    pCVar8 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar8);
    *(undefined **)(pCVar8 + 0x20) = &_LC13;
    *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar8 = &PTR_hash_0010c108;
    *(undefined8 *)(pCVar8 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar8 + 0x10) = 0;
    *(undefined8 *)(pCVar8 + 0x30) = uVar4;
    *(code **)(pCVar8 + 0x38) = _node_removed;
    *(AbstractPolygon2DEditor **)(pCVar8 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
    *(char **)(pCVar8 + 0x20) = "AbstractPolygon2DEditor::_node_removed";
    Callable::Callable((Callable *)local_58,pCVar8);
    StringName::StringName((StringName *)&local_60,"node_removed",false);
    (*pcVar3)(plVar2,(StringName *)&local_60,(CowData<char32_t> *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    plVar2 = *(long **)(this + 0xa98);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    pCVar8 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar8);
    *(undefined **)(pCVar8 + 0x20) = &_LC13;
    *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar8 = &PTR_hash_0010c198;
    *(undefined8 *)(pCVar8 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar8 + 0x10) = 0;
    *(undefined8 *)(pCVar8 + 0x30) = uVar4;
    *(AbstractPolygon2DEditor **)(pCVar8 + 0x28) = this;
    *(undefined8 *)(pCVar8 + 0x38) = 0x3e1;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
    *(char **)(pCVar8 + 0x20) = "AbstractPolygon2DEditor::_create_resource";
    Callable::Callable((Callable *)local_58,pCVar8);
    (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_58,0);
    Callable::~Callable((Callable *)local_58);
  }
  else if ((param_1 == 0x2d) || (param_1 == 10)) {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_58);
    Button::set_button_icon(pRVar1);
    if (local_58[0] != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58[0];
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_58[0]);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pRVar1 = *(Ref **)(this + 0xa18);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_58);
    Button::set_button_icon(pRVar1);
    if (local_58[0] != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58[0];
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_58[0]);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pRVar1 = *(Ref **)(this + 0xa20);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_58);
    Button::set_button_icon(pRVar1);
    if (local_58[0] != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58[0];
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_58[0]);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
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



/* AbstractPolygon2DEditorPlugin::AbstractPolygon2DEditorPlugin(AbstractPolygon2DEditor*, String
   const&) */

void __thiscall
AbstractPolygon2DEditorPlugin::AbstractPolygon2DEditorPlugin
          (AbstractPolygon2DEditorPlugin *this,AbstractPolygon2DEditor *param_1,String *param_2)

{
  long lVar1;
  
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  lVar1 = *(long *)param_2;
  this[0x650] = (AbstractPolygon2DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010be60;
  *(AbstractPolygon2DEditor **)(this + 0x660) = param_1;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x668),(CowData *)param_2);
  }
  CanvasItemEditor::add_control_to_menu_panel(CanvasItemEditor::singleton);
  CanvasItem::hide();
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



/* AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin() */

void __thiscall
AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin(AbstractPolygon2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010be60;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x668));
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x670);
  return;
}



/* AbstractPolygon2DEditor::_action_remove_polygon(int) */

void __thiscall
AbstractPolygon2DEditor::_action_remove_polygon(AbstractPolygon2DEditor *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  Vector aVStack_78 [8];
  undefined8 local_70;
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  pcVar2 = *(code **)(*(long *)this + 0x3c8);
  Variant::Variant((Variant *)local_48,aVStack_78);
  (**(code **)(*(long *)this + 0x3a0))(local_68,this,param_1);
  (*pcVar2)(this,param_1,local_68,(Variant *)local_48);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_70);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_is_empty() const */

undefined8 __thiscall AbstractPolygon2DEditor::_is_empty(AbstractPolygon2DEditor *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  Variant aVStack_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = (**(code **)(*(long *)this + 0x370))();
  if (lVar3 != 0) {
    lVar3 = *(long *)this;
    iVar2 = 1;
    if (*(code **)(lVar3 + 0x390) != _get_polygon_count) {
      iVar2 = (**(code **)(lVar3 + 0x390))(this);
      if (iVar2 < 1) goto LAB_00101bb8;
      lVar3 = *(long *)this;
    }
    iVar5 = 0;
    while( true ) {
      (**(code **)(lVar3 + 0x3a0))(local_58,this,iVar5);
      Variant::operator_cast_to_Vector(aVStack_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        if (*(long *)(local_60 + -8) != 0) {
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
          uVar4 = 0;
          goto LAB_00101bbd;
        }
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      iVar5 = iVar5 + 1;
      if (iVar5 == iVar2) break;
      lVar3 = *(long *)this;
    }
  }
LAB_00101bb8:
  uVar4 = 1;
LAB_00101bbd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::closest_point(Vector2 const&) const */

ulong AbstractPolygon2DEditor::closest_point(Vector2 *param_1)

{
  float *pfVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float local_e0;
  uint local_dc;
  uint local_d4;
  uint local_c0;
  uint local_bc;
  undefined8 local_b0;
  char *local_a8;
  long local_a0;
  Transform2D local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_a8 = "editors/polygon_editor/point_grab_radius";
  local_a0 = 0x28;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_GET((String *)local_58);
  fVar8 = Variant::operator_cast_to_float((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  pcVar2 = *(code **)(*(long *)param_1 + 0x390);
  if (pcVar2 == _get_polygon_count) {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x370))();
    (**(code **)(*plVar4 + 0x2b0))((String *)local_58,plVar4);
    lVar5 = *(long *)(param_1 + 0xa88);
    local_78 = *(undefined8 *)(lVar5 + 0xa80);
    uStack_70 = *(undefined8 *)(lVar5 + 0xa88);
    local_68 = *(undefined8 *)(lVar5 + 0xa90);
    Transform2D::operator*(local_98,(Transform2D *)&local_78);
    local_bc = 1;
  }
  else {
    local_bc = (*pcVar2)(param_1);
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x370))(param_1);
    (**(code **)(*plVar4 + 0x2b0))((String *)local_58,plVar4);
    lVar5 = *(long *)(param_1 + 0xa88);
    local_78 = *(undefined8 *)(lVar5 + 0xa80);
    uStack_70 = *(undefined8 *)(lVar5 + 0xa88);
    local_68 = *(undefined8 *)(lVar5 + 0xa90);
    Transform2D::operator*(local_98,(Transform2D *)&local_78);
    if ((int)local_bc < 1) {
      local_c0 = 0xffffffff;
      uVar6 = 0xffffffff;
      goto LAB_00101fa1;
    }
  }
  local_dc = 0;
  local_d4 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_e0 = _LC71;
  do {
    (**(code **)(*(long *)param_1 + 0x3a0))((String *)local_58,param_1,local_dc);
    Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (*(code **)(*(long *)param_1 + 0x398) == _get_offset) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*(long *)param_1 + 0x398))(param_1,local_dc);
    }
    if ((local_a0 != 0) && (iVar3 = (int)*(undefined8 *)(local_a0 + -8), 0 < iVar3)) {
      uVar6 = 0;
      do {
        if (local_a0 == 0) {
          lVar5 = 0;
LAB_00101e98:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar5 = *(long *)(local_a0 + -8);
        if (lVar5 <= (long)uVar6) goto LAB_00101e98;
        pfVar1 = (float *)(local_a0 + uVar6 * 8);
        fVar9 = (float)((ulong)uVar10 >> 0x20) + pfVar1[1];
        fVar11 = (float)uVar10 + *pfVar1;
        local_58[0] = CONCAT44(SUB84(local_98._0_8_,4) * fVar11 + fVar9 * SUB84(local_98._8_8_,4) +
                               SUB84(local_98._16_8_,4),
                               (float)local_98._0_8_ * fVar11 + fVar9 * (float)local_98._8_8_ +
                               (float)local_98._16_8_);
        fVar9 = (float)Vector2::distance_to((Vector2 *)local_58);
        if ((fVar9 < local_e0) && (fVar9 < fVar8)) {
          local_d4 = (uint)uVar6;
          local_c0 = local_dc;
          local_e0 = fVar9;
        }
        bVar7 = iVar3 - 1 != uVar6;
        uVar6 = uVar6 + 1;
      } while (bVar7);
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    local_dc = local_dc + 1;
  } while (local_dc != local_bc);
  uVar6 = (ulong)local_d4;
LAB_00101fa1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)local_c0 | uVar6 << 0x20;
}



/* AbstractPolygon2DEditor::closest_edge_point(Vector2 const&) const */

ulong __thiscall
AbstractPolygon2DEditor::closest_edge_point(AbstractPolygon2DEditor *this,Vector2 *param_1)

{
  float *pfVar1;
  code *pcVar2;
  byte bVar3;
  float fVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_fc;
  float local_e8;
  uint local_e4;
  uint local_d0;
  uint local_cc;
  undefined8 local_c0;
  char *local_b8;
  long local_b0 [2];
  undefined8 local_a0;
  Transform2D local_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_b8 = "editors/polygon_editor/point_grab_radius";
  local_b0[0] = 0x28;
  String::parse_latin1((StrRange *)&local_c0);
  _EDITOR_GET((String *)&local_58);
  fVar13 = Variant::operator_cast_to_float((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  pcVar2 = *(code **)(*(long *)this + 0x390);
  fVar14 = (fVar13 + fVar13) * (fVar13 + fVar13);
  if (pcVar2 == _get_polygon_count) {
    plVar5 = (long *)(**(code **)(*(long *)this + 0x370))();
    (**(code **)(*plVar5 + 0x2b0))((String *)&local_58,plVar5);
    local_78 = *(undefined1 (*) [16])(*(long *)(this + 0xa88) + 0xa80);
    local_68 = *(undefined8 *)(*(long *)(this + 0xa88) + 0xa90);
    Transform2D::operator*(local_98,(Transform2D *)local_78);
    local_cc = 1;
  }
  else {
    local_cc = (*pcVar2)(this);
    plVar5 = (long *)(**(code **)(*(long *)this + 0x370))(this);
    (**(code **)(*plVar5 + 0x2b0))((String *)&local_58,plVar5);
    local_78 = *(undefined1 (*) [16])(*(long *)(this + 0xa88) + 0xa80);
    local_68 = *(undefined8 *)(*(long *)(this + 0xa88) + 0xa90);
    Transform2D::operator*(local_98,(Transform2D *)local_78);
    if ((int)local_cc < 1) {
      uVar6 = 0xffffffff;
      uVar10 = 0xffffffff;
      goto LAB_0010258d;
    }
  }
  local_fc = 0;
  local_d0 = 0xffffffff;
  local_e4 = 0xffffffff;
  local_e8 = _LC71;
  do {
    (**(code **)(*(long *)this + 0x3a0))((String *)&local_58,this,local_fc);
    Variant::operator_cast_to_Vector((Variant *)&local_b8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    lVar12 = *(long *)this;
    if (*(code **)(lVar12 + 0x398) == _get_offset) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)(lVar12 + 0x398))(this,local_fc);
      lVar12 = *(long *)this;
    }
    pcVar2 = *(code **)(lVar12 + 0x380);
    if (local_b0[0] == 0) {
      if (pcVar2 != _has_uv) {
        (*pcVar2)(this);
      }
    }
    else {
      iVar11 = (int)*(undefined8 *)(local_b0[0] + -8);
      iVar8 = iVar11;
      if (pcVar2 != _has_uv) {
        bVar3 = (*pcVar2)(this);
        iVar8 = iVar11 - (uint)bVar3;
      }
      if (0 < iVar8) {
        lVar12 = 0;
        fVar4 = (float)((ulong)uVar17 >> 0x20);
        do {
          lVar7 = lVar12;
          if (local_b0[0] == 0) {
            lVar9 = 0;
LAB_00102461:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar9 = *(long *)(local_b0[0] + -8);
          if (lVar9 <= lVar12) goto LAB_00102461;
          pfVar1 = (float *)(local_b0[0] + lVar12 * 8);
          fVar18 = fVar4 + pfVar1[1];
          fVar20 = *pfVar1 + (float)uVar17;
          fVar19 = fVar18 * (float)local_98._8_8_ + fVar20 * (float)local_98._0_8_ +
                   (float)local_98._16_8_;
          fVar18 = fVar18 * SUB84(local_98._8_8_,4) + fVar20 * SUB84(local_98._0_8_,4) +
                   SUB84(local_98._16_8_,4);
          local_58 = CONCAT44(fVar18,fVar19);
          lVar7 = (long)((int)((uint)lVar12 + 1) % iVar11);
          if (lVar9 <= lVar7) goto LAB_00102461;
          pfVar1 = (float *)(local_b0[0] + lVar7 * 8);
          fVar21 = fVar4 + pfVar1[1];
          fVar20 = (float)uVar17 + *pfVar1;
          local_a0 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar18,
                              (float)*(undefined8 *)param_1 - fVar19);
          fVar15 = fVar20 * (float)local_98._0_8_ + fVar21 * (float)local_98._8_8_ +
                   (float)local_98._16_8_;
          fVar20 = fVar20 * SUB84(local_98._0_8_,4) + fVar21 * SUB84(local_98._8_8_,4) +
                   SUB84(local_98._16_8_,4);
          local_50 = CONCAT44(fVar20,fVar15);
          local_78._0_4_ = fVar15 - fVar19;
          local_78._4_4_ = fVar20 - fVar18;
          fVar18 = (float)Vector2::length_squared();
          uVar16 = local_58;
          if (_LC77 <= fVar18) {
            fVar19 = (float)Vector2::dot((Vector2 *)local_78);
            fVar19 = fVar19 / fVar18;
            uVar16 = local_58;
            if ((0.0 < fVar19) && (uVar16 = local_50, fVar19 < _LC79)) {
              uVar16 = CONCAT44(fVar19 * (float)local_78._4_4_ + (float)((ulong)local_58 >> 0x20),
                                fVar19 * (float)local_78._0_4_ + (float)local_58);
            }
          }
          local_78._0_8_ = uVar16;
          fVar18 = (float)Vector2::distance_squared_to((Vector2 *)local_78);
          if ((((fVar14 <= fVar18) &&
               (fVar18 = (float)Vector2::distance_squared_to((Vector2 *)local_78), fVar14 <= fVar18)
               ) && (fVar18 = (float)Vector2::distance_to((Vector2 *)local_78), fVar18 < local_e8))
             && (fVar18 < fVar13)) {
            local_e4 = local_fc;
            local_e8 = fVar18;
            local_d0 = (uint)lVar12;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != iVar8);
      }
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
    local_fc = local_fc + 1;
  } while (local_fc != local_cc);
  uVar6 = (ulong)local_e4;
  uVar10 = (ulong)local_d0;
LAB_0010258d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 | uVar10 << 0x20;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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
  __n = lVar1 * 8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AbstractPolygon2DEditor::forward_canvas_draw_over_viewport(Control*) */

void __thiscall
AbstractPolygon2DEditor::forward_canvas_draw_over_viewport
          (AbstractPolygon2DEditor *this,Control *param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  Object *pOVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  AbstractPolygon2DEditor *pAVar12;
  code *pcVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float local_170;
  float local_16c;
  String *local_130;
  byte local_125;
  int local_124;
  int local_114;
  byte local_fd;
  long *local_f8;
  Object *local_f0 [2];
  long local_e0;
  long *local_d8;
  long local_d0 [2];
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = (**(code **)(*(long *)this + 0x370))();
  if (lVar10 == 0) goto LAB_00102bf0;
  (**(code **)(*(long *)this + 0x370))(this);
  local_125 = CanvasItem::is_visible_in_tree();
  if (local_125 == 0) goto LAB_00102bf0;
  lVar10 = (**(code **)(*(long *)this + 0x370))(this);
  if (*(long *)(lVar10 + 600) != 0) {
    cVar7 = Viewport::is_visible_subviewport();
    if (cVar7 == '\0') goto LAB_00102bf0;
  }
  plVar11 = (long *)(**(code **)(*(long *)this + 0x370))(this);
  (**(code **)(*plVar11 + 0x2b0))((String *)local_58,plVar11);
  lVar10 = *(long *)(this + 0xa88);
  local_78 = *(undefined1 (*) [8])(lVar10 + 0xa80);
  uStack_70 = *(undefined8 *)(lVar10 + 0xa88);
  local_68 = *(undefined8 *)(lVar10 + 0xa90);
  Transform2D::operator*((Transform2D *)&local_98,(Transform2D *)local_78);
  if ((forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::
                                   operator()()::sname), iVar9 != 0)) {
    _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#1}::operator()()::
                         sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_f8);
  local_124 = *(int *)(this + 0xa3c);
  if (local_124 < 0) {
    local_124 = *(int *)(this + 0xa44);
    pAVar12 = this + 0xa40;
  }
  else {
    pAVar12 = this + 0xa38;
  }
  iVar9 = *(int *)pAVar12;
  pcVar13 = *(code **)(*(long *)this + 0x390);
  if (pcVar13 == _get_polygon_count) {
    pcVar13 = *(code **)(*(long *)this + 0x380);
    local_fd = 0;
    local_114 = 1;
    if (pcVar13 == _has_uv) goto LAB_001028f3;
LAB_00103010:
    local_fd = (*pcVar13)(this);
    local_125 = local_fd ^ 1;
  }
  else {
    local_114 = (*pcVar13)(this);
    local_fd = 0;
    pcVar13 = *(code **)(*(long *)this + 0x380);
    if (pcVar13 != _has_uv) goto LAB_00103010;
  }
  if (-1 < local_114) {
LAB_001028f3:
    if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
      local_e0 = 0;
      if (this[0xa81] == (AbstractPolygon2DEditor)0x0) {
        iVar18 = *(int *)(this + 0xa28);
      }
      else {
        iVar18 = *(int *)(this + 0xa28);
      }
      if (iVar18 == -1) {
        iVar18 = -1;
        goto LAB_00102946;
      }
    }
    iVar18 = -1;
LAB_00102906:
    iVar18 = iVar18 + 1;
    if (iVar18 != local_114) {
      if (this[0xa80] != (AbstractPolygon2DEditor)0x0) goto code_r0x00102924;
      goto LAB_00103034;
    }
  }
  if (-1 < *(int *)(this + 0xa4c)) {
    if (forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::operator()()::sname == '\0') {
      iVar9 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::
                                   operator()()::sname);
      if (iVar9 != 0) {
        _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#4}::operator()()
                             ::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_d8);
    local_58._4_4_ = _LC79;
    local_58._0_4_ = _LC79;
    uStack_50 = CONCAT44(_LC79,_LC79);
    uVar22 = (**(code **)(*local_d8 + 0x1d8))();
    local_78 = (undefined1  [8])
               CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa50) >> 0x20) -
                        _LC85._4_4_ * (float)((ulong)uVar22 >> 0x20),
                        (float)*(undefined8 *)(this + 0xa50) - (float)_LC85 * (float)uVar22);
    CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_d8,(Color *)local_78);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f8);
LAB_00102bf0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00102924:
  if (this[0xa81] == (AbstractPolygon2DEditor)0x0) {
    if (iVar18 == *(int *)(this + 0xa28)) {
LAB_00102946:
      local_e0 = 0;
      Variant::Variant((Variant *)local_58,(Vector *)(this + 0xa70));
      Variant::operator_cast_to_Vector((Variant *)&local_d8);
      if (local_d0[0] != 0) {
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
        local_e0 = local_d0[0];
        local_d0[0] = 0;
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)local_d0);
      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      local_16c = 0.0;
      local_170 = 0.0;
    }
    else {
LAB_00103034:
      local_e0 = 0;
      (**(code **)(*(long *)this + 0x3a0))((String *)local_58,this,iVar18);
      Variant::operator_cast_to_Vector((Variant *)&local_d8);
      if (local_d0[0] != 0) {
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
        local_e0 = local_d0[0];
        local_d0[0] = 0;
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)local_d0);
      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      local_16c = 0.0;
      local_170 = 0.0;
      if (*(code **)(*(long *)this + 0x398) != _get_offset) {
        uVar22 = (**(code **)(*(long *)this + 0x398))(this,iVar18);
        local_170 = (float)uVar22;
        local_16c = (float)((ulong)uVar22 >> 0x20);
      }
    }
    local_130 = (String *)&local_d8;
    if ((this[0xa80] == (AbstractPolygon2DEditor)0x0) && (*(int *)(this + 0xa28) == iVar18)) {
      local_d8 = (long *)0x0;
      String::parse_latin1(local_130,"editors/polygon_editor/show_previous_outline");
      _EDITOR_GET((String *)local_58);
      bVar8 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
      if (bVar8) {
        local_58 = (undefined1  [8])CONCAT44(_LC85._4_4_,(float)_LC85);
        uStack_50 = CONCAT44(_LC79,_UNK_0010c3a8);
        auVar26._8_8_ = uStack_50;
        auVar26._0_8_ = local_58;
        lVar10 = *(long *)(this + 0xa68);
        if (lVar10 != 0) {
          iVar16 = (int)*(undefined8 *)(lVar10 + -8);
          iVar14 = iVar16 - (uint)local_fd;
          _local_58 = auVar26;
          if (0 < iVar14) {
            uVar20 = 0;
            while( true ) {
              auVar5._8_8_ = uStack_50;
              auVar5._0_8_ = local_58;
              auVar4._8_8_ = uStack_50;
              auVar4._0_8_ = local_58;
              auVar3._8_8_ = uStack_50;
              auVar3._0_8_ = local_58;
              uVar15 = uVar20;
              if (lVar10 == 0) {
                lVar17 = 0;
                goto LAB_00102f22;
              }
              lVar17 = *(long *)(lVar10 + -8);
              auVar4 = auVar3;
              if (lVar17 <= (long)uVar20) goto LAB_00102f22;
              pfVar1 = (float *)(lVar10 + uVar20 * 8);
              fVar23 = local_16c + pfVar1[1];
              fVar21 = local_170 + *pfVar1;
              uVar15 = (ulong)(((int)uVar20 + 1) % iVar16);
              auVar4 = auVar5;
              if (lVar17 <= (long)uVar15) goto LAB_00102f22;
              pfVar1 = (float *)(lVar10 + uVar15 * 8);
              uVar20 = uVar20 + 1;
              fVar24 = local_170 + *pfVar1;
              fVar25 = local_16c + pfVar1[1];
              local_a8 = CONCAT44(fVar21 * local_94 + fVar23 * local_8c + local_84,
                                  local_98 * fVar21 + local_90 * fVar23 + local_88);
              local_78._4_4_ = fVar24 * local_94 + fVar25 * local_8c + local_84;
              local_78._0_4_ = local_98 * fVar24 + local_90 * fVar25 + local_88;
              fVar21 = (float)EditorScale::get_scale();
              fVar21 = roundf(fVar21 + fVar21);
              CanvasItem::draw_line
                        ((Vector2 *)param_1,(Vector2 *)&local_a8,(Color *)local_78,fVar21,
                         SUB81((String *)local_58,0));
              if (uVar20 == (long)iVar14) break;
              lVar10 = *(long *)(this + 0xa68);
            }
          }
        }
      }
    }
    lVar10 = local_e0;
    if (local_e0 == 0) {
      local_b8 = __LC86;
      uStack_b0 = _UNK_0010c3b8;
    }
    else {
      local_b8 = __LC86;
      uStack_b0 = _UNK_0010c3b8;
      iVar16 = (int)*(undefined8 *)(local_e0 + -8);
      if (0 < iVar16) {
        uVar20 = 0;
        iVar14 = *(int *)(this + 0xa28);
        do {
          iVar19 = (int)uVar20;
          auVar4 = _local_58;
          if ((iVar18 == iVar14) && (*(int *)(this + 0xa2c) == iVar19)) {
            local_78._4_4_ =
                 *(float *)(this + 0xa34) * local_8c + *(float *)(this + 0xa30) * local_94 +
                 local_84;
            local_78._0_4_ =
                 local_98 * *(float *)(this + 0xa30) + local_90 * *(float *)(this + 0xa34) +
                 local_88;
            if ((local_125 != 0) || (iVar19 < iVar16 + -1)) {
LAB_00102ce0:
              if (((this[0xa80] == (AbstractPolygon2DEditor)0x0) || (iVar16 + -1 != iVar19)) &&
                 (iVar14 = (iVar19 + 1) % iVar16, iVar14 != *(int *)(this + 0xa2c))) {
                lVar17 = *(long *)(lVar10 + -8);
                goto LAB_00102b00;
              }
              fVar21 = *(float *)(this + 0xa30);
              fVar23 = *(float *)(this + 0xa34);
LAB_00102b25:
              local_58._4_4_ = fVar21 * local_94 + fVar23 * local_8c + local_84;
              local_58._0_4_ = local_98 * fVar21 + local_90 * fVar23 + local_88;
              fVar21 = (float)EditorScale::get_scale();
              fVar21 = roundf(fVar21 + fVar21);
              CanvasItem::draw_line
                        ((Vector2 *)param_1,(Vector2 *)local_78,(Color *)local_58,fVar21,
                         SUB81(&local_b8,0));
              iVar14 = *(int *)(this + 0xa28);
            }
          }
          else {
            lVar17 = *(long *)(lVar10 + -8);
            uVar15 = uVar20;
            if (lVar17 <= (long)uVar20) goto LAB_00102f22;
            fVar23 = local_16c + *(float *)(lVar10 + 4 + uVar20 * 8);
            fVar21 = local_170 + *(float *)(lVar10 + uVar20 * 8);
            local_78._4_4_ = fVar21 * local_94 + fVar23 * local_8c + local_84;
            local_78._0_4_ = local_98 * fVar21 + local_90 * fVar23 + local_88;
            if ((local_125 != 0) || (iVar19 < iVar16 + -1)) {
              if (iVar18 == iVar14) goto LAB_00102ce0;
              iVar14 = (iVar19 + 1) % iVar16;
LAB_00102b00:
              uVar15 = (ulong)iVar14;
              if ((long)uVar15 < lVar17) {
                pfVar1 = (float *)(lVar10 + uVar15 * 8);
                fVar23 = local_16c + pfVar1[1];
                fVar21 = local_170 + *pfVar1;
                goto LAB_00102b25;
              }
              goto LAB_00102f22;
            }
          }
          uVar20 = uVar20 + 1;
        } while (iVar19 + 1 < iVar16);
        uVar15 = 0;
        do {
          iVar19 = (int)uVar15;
          if ((iVar18 == iVar14) && (*(int *)(this + 0xa2c) == iVar19)) {
            fVar21 = *(float *)(this + 0xa30);
            fVar23 = *(float *)(this + 0xa34);
          }
          else {
            auVar4 = _local_58;
            if (local_e0 == 0) {
              lVar17 = 0;
LAB_00102f22:
              _local_58 = auVar4;
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar17,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            lVar17 = *(long *)(local_e0 + -8);
            if (lVar17 <= (long)uVar15) goto LAB_00102f22;
            pfVar1 = (float *)(local_e0 + uVar15 * 8);
            fVar23 = local_16c + pfVar1[1];
            fVar21 = local_170 + *pfVar1;
          }
          fVar24 = local_94 * fVar21 + local_8c * fVar23 + local_84;
          fVar21 = fVar21 * local_98 + fVar23 * local_90 + local_88;
          if ((iVar9 == iVar18) && (local_124 == iVar19)) {
            local_a8 = __LC88;
            uStack_a0 = _UNK_0010c3c8;
          }
          else {
            local_a8 = CONCAT44(_LC79,_LC79);
            uStack_a0 = CONCAT44(_LC79,_LC79);
          }
          uVar22 = (**(code **)(*local_f8 + 0x1d8))();
          local_58._4_4_ = fVar24 - (float)((ulong)uVar22 >> 0x20) * (float)_LC85;
          local_58._0_4_ = fVar21 - (float)uVar22 * (float)_LC85;
          CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_f8,(Color *)local_58);
          auVar2._8_8_ = uStack_50;
          auVar2._0_8_ = local_58;
          if ((iVar18 == *(int *)(this + 0xa38)) &&
             (_local_58 = auVar2, *(int *)(this + 0xa3c) == iVar19)) {
            if (forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::operator()()::sname ==
                '\0') {
              iVar14 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::
                                            {lambda()#2}::operator()()::sname);
              if (iVar14 != 0) {
                _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::
                                     operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::
                              operator()()::sname,&__dso_handle);
                __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#2}::
                                     operator()()::sname);
              }
            }
            Control::get_theme_font((StringName *)local_f0,(StringName *)this);
            if (forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::operator()()::sname ==
                '\0') {
              iVar14 = __cxa_guard_acquire(&forward_canvas_draw_over_viewport(Control*)::
                                            {lambda()#3}::operator()()::sname);
              if (iVar14 != 0) {
                _scs_create((char *)&forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::
                                     operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::
                              operator()()::sname,&__dso_handle);
                __cxa_guard_release(&forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::
                                     operator()()::sname);
              }
            }
            iVar14 = Control::get_theme_font_size
                               ((StringName *)this,
                                (StringName *)
                                &forward_canvas_draw_over_viewport(Control*)::{lambda()#3}::
                                 operator()()::sname);
            iVar14 = (int)((double)iVar14 * __LC92);
            String::num_int64((long)local_130,iVar19,true);
            uVar20 = 0;
            uVar22 = (**(code **)(*(long *)local_f0[0] + 0x288))
                               (local_f0[0],local_130,0,iVar14,3,0,0);
            auVar26 = Control::get_theme_color
                                ((StringName *)this,
                                 (StringName *)(SceneStringNames::singleton + 0xb0));
            _local_78 = auVar26;
            _local_58 = Color::inverted();
            fVar24 = fVar24 - (float)_LC85 * (float)((ulong)uVar22 >> 0x20);
            fVar21 = fVar21 - (float)_LC85 * (float)uVar22;
            local_c0 = fVar21;
            local_bc = fVar24;
            CanvasItem::draw_string_outline
                      (param_1,(StringName *)local_f0,&local_c0,local_130,0,iVar14,4,
                       (String *)local_58,3,0,uVar20 & 0xffffffff00000000);
            local_c0 = fVar21;
            local_bc = fVar24;
            CanvasItem::draw_string
                      (param_1,(StringName *)local_f0,&local_c0,local_130,0,iVar14,
                       (Transform2D *)local_78,3,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
            if (local_f0[0] != (Object *)0x0) {
              cVar7 = RefCounted::unreference();
              pOVar6 = local_f0[0];
              if (cVar7 != '\0') {
                cVar7 = predelete_handler(local_f0[0]);
                if (cVar7 != '\0') {
                  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                  Memory::free_static(pOVar6,false);
                }
              }
            }
          }
          if (uVar15 == iVar16 - 1) break;
          iVar14 = *(int *)(this + 0xa28);
          uVar15 = uVar15 + 1;
        } while( true );
      }
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
  }
  goto LAB_00102906;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* AbstractPolygon2DEditor::_wip_close() [clone .part.0] */

void __thiscall AbstractPolygon2DEditor::_wip_close(AbstractPolygon2DEditor *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  byte bVar2;
  Object *pOVar3;
  long lVar4;
  StringName *pSVar5;
  bool *pbVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  Variant *local_a8 [2];
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x380) == _has_uv) {
    if (*(long *)(this + 0xa78) != 0) {
      lVar4 = *(long *)(*(long *)(this + 0xa78) + -8);
LAB_001038d8:
      if (2 < lVar4) {
LAB_001038e1:
        pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"");
        local_c8 = 0;
        String::parse_latin1((String *)&local_c8,"Create Polygon");
        TTR((String *)&local_b8,(String *)&local_c8);
        EditorUndoRedoManager::create_action(pOVar3,(String *)&local_b8,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x3b0);
        Variant::Variant((Variant *)local_78,(Vector *)(this + 0xa70));
        if (UNRECOVERED_JUMPTABLE == _action_add_polygon) {
          (**(code **)(*(long *)this + 0x3c0))(this,0,(Variant *)local_78);
        }
        else {
          (*UNRECOVERED_JUMPTABLE)(this,(Variant *)local_78);
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar4 = *(long *)this;
        if (*(code **)(lVar4 + 0x388) != _has_uv) {
          cVar1 = (**(code **)(lVar4 + 0x388))(this);
          if (cVar1 != '\0') {
            local_b0 = 0;
            StringName::StringName((StringName *)&local_c0,"set_uv",false);
            pSVar5 = (StringName *)(**(code **)(*(long *)this + 0x370))(this);
            Variant::Variant((Variant *)local_78,(Vector *)&local_b8);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_98[0] = (Variant *)local_78;
            EditorUndoRedoManager::add_do_methodp
                      (pOVar3,pSVar5,(Variant **)&local_c0,(int)(StringName *)local_98);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_c0 != 0)) {
              StringName::unref();
            }
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
            pbVar6 = (bool *)(**(code **)(*(long *)this + 0x370))(this);
            StringName::StringName((StringName *)&local_b8,"uv",false);
            Object::get((StringName *)local_98,pbVar6);
            StringName::StringName((StringName *)&local_c0,"set_uv",false);
            pSVar5 = (StringName *)(**(code **)(*(long *)this + 0x370))(this);
            Variant::Variant((Variant *)local_78,(Variant *)local_98);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_a8[0] = (Variant *)local_78;
            EditorUndoRedoManager::add_undo_methodp
                      (pOVar3,pSVar5,(Variant **)&local_c0,(int)local_a8);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_c0 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_b8 != 0)) {
              StringName::unref();
            }
          }
          lVar4 = *(long *)this;
        }
        (**(code **)(lVar4 + 0x3d0))(this);
        goto LAB_001039da;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x380))();
    if (cVar1 == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x380);
      if (*(long *)(this + 0xa78) == 0) {
        if (UNRECOVERED_JUMPTABLE != _has_uv) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(this);
            return;
          }
          goto LAB_00103d8d;
        }
      }
      else {
        lVar4 = *(long *)(*(long *)(this + 0xa78) + -8);
        if (UNRECOVERED_JUMPTABLE == _has_uv) goto LAB_001038d8;
        bVar2 = (*UNRECOVERED_JUMPTABLE)(this);
        if ((long)(3 - (ulong)bVar2) <= lVar4) goto LAB_001038e1;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x3a8);
      Variant::Variant((Variant *)local_78,(Vector *)(this + 0xa70));
      (*UNRECOVERED_JUMPTABLE)(this,0,(Variant *)local_78);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_001039da:
      *(undefined4 *)(this + 0xaa0) = 1;
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
      CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa78),0);
      this[0xa80] = (AbstractPolygon2DEditor)0x0;
      *(undefined8 *)(this + 0xa28) = 0xffffffffffffffff;
      *(undefined8 *)(this + 0xa30) = 0;
      *(undefined4 *)(this + 0xa38) = 0xffffffff;
      *(undefined4 *)(this + 0xa3c) = 0xffffffff;
      *(undefined4 *)(this + 0xa40) = 0xffffffff;
      *(undefined4 *)(this + 0xa44) = 0xffffffff;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103d8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_wip_close() */

void __thiscall AbstractPolygon2DEditor::_wip_close(AbstractPolygon2DEditor *this)

{
  if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
    _wip_close(this);
    return;
  }
  return;
}



/* AbstractPolygon2DEditor::_menu_option(int) */

void __thiscall AbstractPolygon2DEditor::_menu_option(AbstractPolygon2DEditor *this,int param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 1) {
    if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
      _wip_close(this);
    }
    *(undefined4 *)(this + 0xaa0) = 1;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
    uVar1 = (undefined1)*(undefined8 *)(this + 0xa18);
  }
  else {
    if (param_1 == 2) {
      if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
        _wip_close(this);
      }
      *(undefined4 *)(this + 0xaa0) = 2;
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
      return;
    }
    if (param_1 != 0) {
      return;
    }
    *(undefined4 *)(this + 0xaa0) = 0;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
    uVar1 = (undefined1)*(undefined8 *)(this + 0xa18);
  }
  BaseButton::set_pressed((bool)uVar1);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
  return;
}



/* AbstractPolygon2DEditor::_wip_cancel() */

void __thiscall AbstractPolygon2DEditor::_wip_cancel(AbstractPolygon2DEditor *this)

{
  CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa78),0);
  this[0xa80] = (AbstractPolygon2DEditor)0x0;
  *(undefined8 *)(this + 0xa28) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined4 *)(this + 0xa38) = 0xffffffff;
  *(undefined4 *)(this + 0xa3c) = 0xffffffff;
  *(undefined4 *)(this + 0xa40) = 0xffffffff;
  *(undefined4 *)(this + 0xa44) = 0xffffffff;
  CanvasItemEditor::update_viewport();
  return;
}



/* AbstractPolygon2DEditor::edit(Node*) */

void __thiscall AbstractPolygon2DEditor::edit(AbstractPolygon2DEditor *this,Node *param_1)

{
  code *pcVar1;
  char cVar2;
  
  if (*(long *)(this + 0xa88) == 0) {
    *(undefined8 *)(this + 0xa88) = CanvasItemEditor::singleton;
  }
  if (param_1 != (Node *)0x0) {
    (**(code **)(*(long *)this + 0x378))(this);
    cVar2 = _is_empty(this);
    pcVar1 = *(code **)(*(long *)this + 0x368);
    if (cVar2 == '\0') {
      if (pcVar1 == _menu_option) {
        if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
          _wip_close(this);
        }
        *(undefined4 *)(this + 0xaa0) = 1;
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
      }
      else {
        (*pcVar1)(this);
      }
    }
    else if (pcVar1 == _menu_option) {
      *(undefined4 *)(this + 0xaa0) = 0;
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
    }
    else {
      (*pcVar1)(this);
    }
    CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa78),0);
    this[0xa80] = (AbstractPolygon2DEditor)0x0;
    *(undefined8 *)(this + 0xa28) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0xa30) = 0;
    *(undefined4 *)(this + 0xa38) = 0xffffffff;
    *(undefined4 *)(this + 0xa3c) = 0xffffffff;
    *(undefined4 *)(this + 0xa40) = 0xffffffff;
    *(undefined4 *)(this + 0xa44) = 0xffffffff;
    CanvasItemEditor::update_viewport();
    return;
  }
  (**(code **)(*(long *)this + 0x378))(this,0);
  CanvasItemEditor::update_viewport();
  return;
}



/* AbstractPolygon2DEditorPlugin::edit(Object*) */

void __thiscall
AbstractPolygon2DEditorPlugin::edit(AbstractPolygon2DEditorPlugin *this,Object *param_1)

{
  AbstractPolygon2DEditor *this_00;
  long *plVar1;
  Node *pNVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  this_00 = *(AbstractPolygon2DEditor **)(this + 0x660);
  if (param_1 == (Object *)0x0) {
    AbstractPolygon2DEditor::edit(this_00,(Node *)0x0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x210);
    if (UNRECOVERED_JUMPTABLE != make_visible) {
      bVar3 = false;
      goto LAB_00104169;
    }
  }
  else {
    pNVar2 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
    AbstractPolygon2DEditor::edit(this_00,pNVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x210);
    if (UNRECOVERED_JUMPTABLE != make_visible) {
      bVar3 = pNVar2 != (Node *)0x0;
LAB_00104169:
                    /* WARNING: Could not recover jumptable at 0x00104170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(this,bVar3);
      return;
    }
    if (pNVar2 != (Node *)0x0) {
      CanvasItem::show();
      return;
    }
  }
  CanvasItem::hide();
  plVar1 = *(long **)(this + 0x660);
  if (plVar1[0x151] == 0) {
    plVar1[0x151] = CanvasItemEditor::singleton;
  }
  (**(code **)(*plVar1 + 0x378))(plVar1,0);
  CanvasItemEditor::update_viewport();
  return;
}



/* AbstractPolygon2DEditor::remove_point(AbstractPolygon2DEditor::Vertex const&) */

void __thiscall AbstractPolygon2DEditor::remove_point(AbstractPolygon2DEditor *this,Vertex *param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  Variant local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = EditorUndoRedoManager::get_singleton();
  (**(code **)(*(long *)this + 0x3a0))((Variant *)local_58,this,*(undefined4 *)param_1);
  Variant::operator_cast_to_Vector(local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar1 = *(code **)(*(long *)this + 0x380);
  if (local_60 == 0) {
    if (pcVar1 != _has_uv) {
      (*pcVar1)(this);
    }
  }
  else {
    lVar5 = *(long *)(local_60 + -8);
    lVar6 = 3;
    if (pcVar1 != _has_uv) {
      bVar3 = (*pcVar1)(this);
      lVar6 = 3 - (ulong)bVar3;
    }
    if (lVar6 < lVar5) {
      lVar5 = (long)*(int *)(param_1 + 4);
      if (lVar5 < 0) {
        if (local_60 == 0) goto LAB_00104600;
        lVar6 = *(long *)(local_60 + -8);
LAB_0010455d:
        _err_print_index_error
                  ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar6,"p_index","size()","",
                   false,false);
      }
      else {
        if (local_60 == 0) {
LAB_00104600:
          lVar6 = 0;
          goto LAB_0010455d;
        }
        lVar6 = *(long *)(local_60 + -8);
        if (lVar6 <= lVar5) goto LAB_0010455d;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
        if (local_60 == 0) {
          lVar6 = -1;
        }
        else {
          lVar6 = *(long *)(local_60 + -8) + -1;
          if (lVar5 < lVar6) {
            memmove((void *)(local_60 + lVar5 * 8),(void *)(local_60 + 8 + lVar5 * 8),
                    (lVar6 - lVar5) * 8);
          }
        }
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_60,lVar6);
      }
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"");
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"Edit Polygon (Remove Point)");
      TTR(local_70,(String *)&local_80);
      EditorUndoRedoManager::create_action(uVar4,local_70,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      pcVar1 = *(code **)(*(long *)this + 0x3c0);
      Variant::Variant((Variant *)local_58,(Vector *)local_68);
      (*pcVar1)(this,*(undefined4 *)param_1,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      (**(code **)(*(long *)this + 0x3d0))(this);
      cVar2 = _is_empty(this);
      goto joined_r0x001044c2;
    }
  }
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Remove Polygon And Point");
  TTR(local_70,(String *)&local_80);
  EditorUndoRedoManager::create_action(uVar4,local_70,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  (**(code **)(*(long *)this + 0x3b8))(this,*(undefined4 *)param_1);
  (**(code **)(*(long *)this + 0x3d0))(this);
  cVar2 = _is_empty(this);
joined_r0x001044c2:
  if (cVar2 != '\0') {
    if (*(code **)(*(long *)this + 0x368) == _menu_option) {
      *(undefined4 *)(this + 0xaa0) = 0;
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
    }
    else {
      (**(code **)(*(long *)this + 0x368))(this,0);
    }
  }
  uVar4 = _LC24;
  *(undefined8 *)(this + 0xa38) = _LC24;
  if ((*(int *)(this + 0xa40) == *(int *)param_1) &&
     (*(int *)(this + 0xa44) == *(int *)(param_1 + 4))) {
    *(undefined8 *)(this + 0xa40) = uVar4;
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AbstractPolygon2DEditor::forward_gui_input(Ref<InputEvent> const&) */

ulong __thiscall
AbstractPolygon2DEditor::forward_gui_input(AbstractPolygon2DEditor *this,Ref *param_1)

{
  float *pfVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  Object *pOVar10;
  long *plVar11;
  Object *pOVar12;
  Object *pOVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  CowData<Vector2> *local_118;
  int local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  String local_c0 [8];
  undefined8 local_b8;
  long local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = (**(code **)(*(long *)this + 0x370))();
  if ((lVar8 != 0) && (this[0xa82] != (AbstractPolygon2DEditor)0x0)) {
    (**(code **)(*(long *)this + 0x370))(this);
    uVar5 = CanvasItem::is_visible_in_tree();
    if (((char)uVar5 != '\0') &&
       ((lVar8 = (**(code **)(*(long *)this + 0x370))(this), *(long *)(lVar8 + 600) == 0 ||
        (cVar4 = Viewport::is_visible_subviewport(), cVar4 != '\0')))) {
      uVar9 = EditorUndoRedoManager::get_singleton();
      pOVar10 = *(Object **)param_1;
      if ((pOVar10 != (Object *)0x0) &&
         ((pOVar10 = (Object *)
                     __dynamic_cast(pOVar10,&Object::typeinfo,&InputEventMouseButton::typeinfo,0),
          pOVar10 != (Object *)0x0 && (cVar4 = RefCounted::reference(), cVar4 == '\0')))) {
        pOVar10 = (Object *)0x0;
      }
      if ((*(code **)(*(long *)this + 0x3d8) == _has_resource) ||
         (cVar4 = (**(code **)(*(long *)this + 0x3d8))(this), cVar4 != '\0')) {
        if (*(int *)(CanvasItemEditor::singleton + 0xa1c) == 0) {
          if (pOVar10 != (Object *)0x0) {
            plVar11 = (long *)(**(code **)(*(long *)this + 0x370))(this);
            (**(code **)(*plVar11 + 0x2b0))((Vertex *)&local_58,plVar11);
            lVar8 = *(long *)(this + 0xa88);
            local_78 = *(undefined8 *)(lVar8 + 0xa80);
            uStack_70 = *(undefined8 *)(lVar8 + 0xa88);
            local_68 = *(undefined8 *)(lVar8 + 0xa90);
            Transform2D::operator*((Transform2D *)local_98,(Transform2D *)&local_78);
            local_a0 = InputEventMouse::get_position();
            lVar8 = *(long *)(this + 0xa88);
            local_78 = *(undefined8 *)(lVar8 + 0xa80);
            uStack_70 = *(undefined8 *)(lVar8 + 0xa88);
            local_b8 = 0;
            local_68 = *(undefined8 *)(lVar8 + 0xa90);
            Transform2D::affine_inverse();
            uVar23 = CanvasItemEditor::snap_point(lVar8,7,0,0);
            fVar24 = (float)((ulong)uVar23 >> 0x20);
            List<CanvasItem*,DefaultAllocator>::~List
                      ((List<CanvasItem*,DefaultAllocator> *)&local_b8);
            plVar11 = (long *)(**(code **)(*(long *)this + 0x370))(this);
            (**(code **)(*plVar11 + 0x2b0))((Variant *)&local_78,plVar11);
            Transform2D::affine_inverse();
            iVar6 = *(int *)(this + 0xaa0);
            fVar25 = local_50._4_4_ * fVar24 + local_58._4_4_ * (float)uVar23 + fStack_44;
            fVar24 = (float)uVar23 * (float)local_58 + fVar24 * (float)local_50 + local_48;
            if (iVar6 == 1) {
LAB_00104f00:
              iVar6 = InputEventMouseButton::get_button_index();
              if (iVar6 != 1) {
                iVar6 = InputEventMouseButton::get_button_index();
                if (((iVar6 == 2) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) &&
                   (*(int *)(this + 0xa2c) < 0)) {
LAB_00104f42:
                  local_58 = closest_point((Vector2 *)this);
                  local_50 = extraout_XMM0_Qa;
                  if (-1 < local_58) {
                    remove_point(this,(Vertex *)&local_58);
                    goto LAB_00104f81;
                  }
                }
LAB_00104ae6:
                iVar6 = *(int *)(this + 0xaa0);
LAB_00104924:
                if (iVar6 == 0) {
                  iVar6 = InputEventMouseButton::get_button_index();
                  if ((iVar6 == 1) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) {
                    if ((*(code **)(*(long *)this + 0x380) == _has_uv) ||
                       (cVar4 = (**(code **)(*(long *)this + 0x380))(this), cVar4 == '\0')) {
                      if (this[0xa80] == (AbstractPolygon2DEditor)0x0) {
                        CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa78),0);
                        Vector<Vector2>::push_back
                                  ((Vector<Vector2> *)CONCAT44(fVar25,fVar24),this + 0xa70);
                        this[0xa80] = (AbstractPolygon2DEditor)0x1;
                        _wip_changed(this);
                        uVar9 = _LC124;
                        *(float *)(this + 0xa30) = fVar24;
                        *(undefined8 *)(this + 0xa28) = uVar9;
                        *(float *)(this + 0xa34) = fVar25;
                        CanvasItemEditor::update_viewport();
                        uVar23 = _LC126;
                        uVar9 = _LC24;
                        *(undefined8 *)(this + 0xa48) = 0xffffffffffffffff;
                        *(undefined8 *)(this + 0xa50) = 0;
                        *(undefined8 *)(this + 0xa38) = uVar9;
                        *(undefined8 *)(this + 0xa40) = uVar23;
                      }
                      else {
                        local_b8 = 0;
                        String::parse_latin1
                                  ((String *)&local_b8,"editors/polygon_editor/point_grab_radius");
                        _EDITOR_GET((String *)&local_58);
                        fVar19 = Variant::operator_cast_to_float((Variant *)&local_58);
                        if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                          Variant::_clear_internal();
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                        if ((((*(code **)(*(long *)this + 0x380) == _has_uv) ||
                             (cVar4 = (**(code **)(*(long *)this + 0x380))(this), cVar4 == '\0')) &&
                            (puVar3 = *(undefined8 **)(this + 0xa78), puVar3 != (undefined8 *)0x0))
                           && (1 < (long)puVar3[-1])) {
                          fVar20 = (float)*puVar3;
                          fVar27 = (float)((ulong)*puVar3 >> 0x20);
                          fVar28 = (float)((ulong)local_98[1] >> 0x20);
                          fVar26 = (float)((ulong)local_98[0] >> 0x20);
                          fVar21 = (float)((ulong)local_98[2] >> 0x20);
                          local_78 = CONCAT44(fVar20 * fVar26 + fVar27 * fVar28 + fVar21,
                                              fVar20 * (float)local_98[0] +
                                              fVar27 * (float)local_98[1] + (float)local_98[2]);
                          local_58 = CONCAT44(fVar25 * fVar28 + fVar24 * fVar26 + fVar21,
                                              fVar25 * (float)local_98[1] +
                                              fVar24 * (float)local_98[0] + (float)local_98[2]);
                          fVar20 = (float)Vector2::distance_to((Vector2 *)&local_78);
                          if (fVar20 < fVar19) {
                            if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
                              _wip_close(this);
                            }
                            goto LAB_00104f81;
                          }
                        }
                        Vector<Vector2>::push_back
                                  ((Vector<Vector2> *)CONCAT44(fVar25,fVar24),this + 0xa70);
                        _wip_changed(this);
                        uVar9 = _LC126;
                        lVar8 = *(long *)(this + 0xa78);
                        if (lVar8 == 0) {
                          *(float *)(this + 0xa30) = fVar24;
                          *(undefined8 *)(this + 0xa28) = uVar9;
                          iVar6 = 0;
                          *(float *)(this + 0xa34) = fVar25;
                        }
                        else {
                          uVar9 = *(undefined8 *)(lVar8 + -8);
                          *(undefined4 *)(this + 0xa28) = 0xffffffff;
                          *(float *)(this + 0xa30) = fVar24;
                          *(int *)(this + 0xa2c) = (int)uVar9;
                          *(float *)(this + 0xa34) = fVar25;
                          iVar6 = (int)*(undefined8 *)(lVar8 + -8);
                        }
                        *(undefined4 *)(this + 0xa40) = 0xffffffff;
                        *(int *)(this + 0xa44) = iVar6 + -1;
                        CanvasItemEditor::update_viewport();
                      }
                    }
                    else {
                      (**(code **)(*(long *)this + 0x3a0))((Vertex *)&local_58,this,0);
                      Variant::operator_cast_to_Vector((Variant *)&local_b8);
                      if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                        Variant::_clear_internal();
                      }
                      Vector<Vector2>::push_back
                                ((Vector<Vector2> *)CONCAT44(fVar25,fVar24),
                                 (List<CanvasItem*,DefaultAllocator> *)&local_b8);
                      local_c8 = 0;
                      String::parse_latin1((String *)&local_c8,"");
                      local_d0 = 0;
                      String::parse_latin1((String *)&local_d0,"Insert Point");
                      TTR(local_c0,(String *)&local_d0);
                      EditorUndoRedoManager::create_action(uVar9,local_c0,0,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                      pcVar2 = *(code **)(*(long *)this + 0x3c0);
                      Variant::Variant((Variant *)&local_58,(Vector *)&local_b8);
                      (*pcVar2)(this,0,(Vertex *)&local_58);
                      if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                        Variant::_clear_internal();
                      }
                      (**(code **)(*(long *)this + 0x3d0))(this);
                      CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
                    }
LAB_00104f81:
                    uVar14 = (ulong)uVar5;
                    goto LAB_00104a38;
                  }
                  iVar6 = InputEventMouseButton::get_button_index();
                  if (((iVar6 == 2) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) &&
                     (this[0xa80] != (AbstractPolygon2DEditor)0x0)) {
                    _wip_cancel(this);
                  }
                }
                goto LAB_0010492c;
              }
              uVar7 = InputEvent::is_pressed();
              uVar14 = (ulong)uVar7;
              if ((char)uVar7 == '\0') {
                if (*(int *)(this + 0xa2c) < 0) goto LAB_00104ae6;
                if ((*(float *)(this + 0xa58) != (float)local_a0) ||
                   (*(float *)(this + 0xa5c) != local_a0._4_4_)) {
                  (**(code **)(*(long *)this + 0x3a0))
                            ((Vertex *)&local_58,this,*(undefined4 *)(this + 0xa28));
                  Variant::operator_cast_to_Vector((Variant *)&local_b8);
                  if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar8 = (long)*(int *)(this + 0xa2c);
                  if (*(int *)(this + 0xa2c) < 0) {
                    if (local_b0[0] == 0) goto LAB_00105ca4;
LAB_00105c4f:
                    lVar16 = *(long *)(local_b0[0] + -8);
                  }
                  else {
                    if (local_b0[0] != 0) {
                      if (*(long *)(local_b0[0] + -8) <= lVar8) goto LAB_00105c4f;
                      if (*(code **)(*(long *)this + 0x398) == _get_offset) {
                        uVar23 = *(undefined8 *)(this + 0xa30);
LAB_001051cf:
                        if (lVar8 < *(long *)(local_b0[0] + -8)) {
                          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_b0);
                          *(undefined8 *)(local_b0[0] + lVar8 * 8) = uVar23;
                          local_c8 = 0;
                          String::parse_latin1((String *)&local_c8,"");
                          local_d0 = 0;
                          String::parse_latin1((String *)&local_d0,"Edit Polygon");
                          TTR(local_c0,(String *)&local_d0);
                          EditorUndoRedoManager::create_action(uVar9,local_c0,0,0,0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                          pcVar2 = *(code **)(*(long *)this + 0x3c8);
                          Variant::Variant((Variant *)&local_58,(Vector *)&local_b8);
                          Variant::Variant((Variant *)&local_78,(Vector *)(this + 0xa60));
                          (*pcVar2)(this,*(undefined4 *)(this + 0xa28),(Variant *)&local_78,
                                    (Vertex *)&local_58);
                          if (Variant::needs_deinit[(int)local_78] != '\0') {
                            Variant::_clear_internal();
                          }
                          if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                            Variant::_clear_internal();
                          }
                          (**(code **)(*(long *)this + 0x3d0))(this);
                          CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
                          goto LAB_0010530a;
                        }
                      }
                      else {
                        uVar23 = (**(code **)(*(long *)this + 0x398))
                                           (this,*(undefined4 *)(this + 0xa28));
                        lVar8 = (long)*(int *)(this + 0xa2c);
                        if (-1 < lVar8) {
                          lVar16 = 0;
                          if (local_b0[0] == 0) goto LAB_00105858;
                          uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa30) >> 0x20) -
                                            (float)((ulong)uVar23 >> 0x20),
                                            (float)*(undefined8 *)(this + 0xa30) - (float)uVar23);
                          goto LAB_001051cf;
                        }
                        if (local_b0[0] == 0) {
                          lVar16 = 0;
                          goto LAB_00105858;
                        }
                      }
                      lVar16 = *(long *)(local_b0[0] + -8);
                      goto LAB_00105858;
                    }
LAB_00105ca4:
                    lVar16 = 0;
                  }
                  _err_print_index_error
                            ("forward_gui_input","editor/plugins/abstract_polygon_2d_editor.cpp",
                             0x152,lVar8,lVar16,"edited_point.vertex","vertices.size()","",false,
                             false);
                  CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
                  goto LAB_00104a38;
                }
LAB_0010530a:
                *(undefined8 *)(this + 0xa28) = 0xffffffffffffffff;
                *(undefined8 *)(this + 0xa30) = 0;
                goto LAB_00104f81;
              }
              cVar4 = InputEventWithModifiers::is_meta_pressed();
              if (((cVar4 == '\0') &&
                  (cVar4 = InputEventWithModifiers::is_ctrl_pressed(), cVar4 == '\0')) &&
                 ((cVar4 = InputEventWithModifiers::is_shift_pressed(), cVar4 == '\0' &&
                  (cVar4 = InputEventWithModifiers::is_alt_pressed(), cVar4 == '\0')))) {
                uVar15 = closest_point((Vector2 *)this);
                if (-1 < (long)uVar15) {
                  *(undefined8 *)(this + 0xa58) = local_a0;
                  (**(code **)(*(long *)this + 0x3a0))((Vertex *)&local_58,this,uVar15 & 0xffffffff)
                  ;
                  Variant::operator_cast_to_Vector((Variant *)&local_b8);
                  if (*(long *)(this + 0xa68) != local_b0[0]) {
                    CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa68));
                    lVar8 = local_b0[0];
                    local_b0[0] = 0;
                    *(long *)(this + 0xa68) = lVar8;
                  }
                  CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
                  if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Transform2D::affine_inverse();
                  *(ulong *)(this + 0xa28) = uVar15;
                  fVar24 = (float)((ulong)extraout_XMM0_Qa_00 >> 0x20);
                  *(undefined8 *)(this + 0xa50) = 0;
                  *(ulong *)(this + 0xa40) = uVar15;
                  *(undefined8 *)(this + 0xa48) = 0xffffffffffffffff;
                  *(ulong *)(this + 0xa30) =
                       CONCAT44((float)extraout_XMM0_Qa_00 * (float)((ulong)local_58 >> 0x20) +
                                fVar24 * (float)((ulong)local_50 >> 0x20) + fStack_44,
                                (float)extraout_XMM0_Qa_00 * (float)local_58 +
                                fVar24 * (float)local_50 + local_48);
                  CanvasItemEditor::update_viewport();
                  goto LAB_00104a38;
                }
                *(undefined8 *)(this + 0xa40) = 0xffffffffffffffff;
                uVar15 = closest_edge_point(this,(Vector2 *)&local_a0);
                if ((long)uVar15 < 0) goto LAB_00104ae6;
                (**(code **)(*(long *)this + 0x3a0))((Vertex *)&local_58,this,uVar15 & 0xffffffff);
                Variant::operator_cast_to_Vector((Variant *)&local_b8);
                if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if (local_b0[0] == 0) {
                  (**(code **)(*(long *)this + 0x380))(this);
LAB_0010615e:
                  Vector<Vector2>::push_back
                            ((Vector<Vector2> *)CONCAT44(fVar25,fVar24),
                             (List<CanvasItem*,DefaultAllocator> *)&local_b8);
                  local_c8 = 0;
                  String::parse_latin1((String *)&local_c8,"");
                  local_d0 = 0;
                  String::parse_latin1((String *)&local_d0,"Edit Polygon");
                  TTR(local_c0,(String *)&local_d0);
                  EditorUndoRedoManager::create_action(uVar9,local_c0,0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  if (local_b0[0] == 0) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = (undefined4)*(undefined8 *)(local_b0[0] + -8);
                  }
                  *(ulong *)(this + 0xa40) = CONCAT44(uVar22,(int)uVar15);
                  pcVar2 = *(code **)(*(long *)this + 0x3c0);
                  Variant::Variant((Variant *)&local_58,(Vector *)&local_b8);
                  (*pcVar2)(this,uVar15 & 0xffffffff,(Vertex *)&local_58);
                  if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  (**(code **)(*(long *)this + 0x3d0))(this);
                }
                else {
                  lVar8 = *(long *)(local_b0[0] + -8);
                  cVar4 = (**(code **)(*(long *)this + 0x380))(this);
                  if (lVar8 < (long)(3 - (ulong)(cVar4 != '\0'))) goto LAB_0010615e;
                  Transform2D::affine_inverse();
                  local_e0 = (int)(uVar15 >> 0x20);
                  fVar24 = (float)((ulong)extraout_XMM0_Qa_02 >> 0x20);
                  lVar8 = (long)(local_e0 + 1);
                  uVar23 = CONCAT44(fVar24 * (float)((ulong)local_50 >> 0x20) +
                                    (float)extraout_XMM0_Qa_02 * (float)((ulong)local_58 >> 0x20) +
                                    fStack_44,
                                    fVar24 * (float)local_50 +
                                    (float)extraout_XMM0_Qa_02 * (float)local_58 + local_48);
                  *(ulong *)(this + 0xa28) = CONCAT44(local_e0 + 1,(int)uVar15);
                  *(undefined8 *)(this + 0xa30) = uVar23;
                  if (local_b0[0] == 0) {
                    lVar16 = 1;
LAB_001060fe:
                    _err_print_index_error
                              ("insert","./core/templates/cowdata.h",0xf0,lVar8,lVar16,"p_pos",
                               "new_size","",false,false);
                  }
                  else {
                    lVar17 = *(long *)(local_b0[0] + -8);
                    lVar16 = lVar17 + 1;
                    if (lVar16 <= lVar8) goto LAB_001060fe;
                    iVar6 = CowData<Vector2>::resize<false>((CowData<Vector2> *)local_b0,lVar16);
                    if (iVar6 == 0) {
                      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_b0);
                      for (; lVar8 < lVar17; lVar17 = lVar17 + -1) {
                        *(undefined8 *)(local_b0[0] + lVar17 * 8) =
                             *(undefined8 *)(local_b0[0] + -8 + lVar17 * 8);
                      }
                      *(undefined8 *)(local_b0[0] + lVar8 * 8) = uVar23;
                    }
                    else {
                      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                                       "Condition \"err\" is true. Returning: err",0,0);
                    }
                  }
                  if ((*(long *)(this + 0xa68) != local_b0[0]) &&
                     (CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa68)), local_b0[0] != 0
                     )) {
                    plVar11 = (long *)(local_b0[0] + -0x10);
                    do {
                      lVar8 = *plVar11;
                      if (lVar8 == 0) goto LAB_00105f8f;
                      LOCK();
                      lVar16 = *plVar11;
                      bVar18 = lVar8 == lVar16;
                      if (bVar18) {
                        *plVar11 = lVar8 + 1;
                        lVar16 = lVar8;
                      }
                      UNLOCK();
                    } while (!bVar18);
                    if (lVar16 != -1) {
                      *(long *)(this + 0xa68) = local_b0[0];
                    }
                  }
LAB_00105f8f:
                  *(undefined8 *)(this + 0xa48) = 0xffffffffffffffff;
                  *(undefined8 *)(this + 0xa40) = *(undefined8 *)(this + 0xa28);
                  *(undefined8 *)(this + 0xa50) = 0;
                  local_c8 = 0;
                  String::parse_latin1((String *)&local_c8,"");
                  local_d0 = 0;
                  String::parse_latin1((String *)&local_d0,"Insert Point");
                  TTR(local_c0,(String *)&local_d0);
                  EditorUndoRedoManager::create_action(uVar9,local_c0,0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  pcVar2 = *(code **)(*(long *)this + 0x3c0);
                  Variant::Variant((Variant *)&local_58,(Vector *)&local_b8);
                  (*pcVar2)(this,uVar15 & 0xffffffff,(Vertex *)&local_58);
                  if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  (**(code **)(*(long *)this + 0x3d0))(this);
                }
                local_118 = (CowData<Vector2> *)local_b0;
                CowData<Vector2>::_unref(local_118);
                goto LAB_00104a38;
              }
            }
            else {
              if (*(code **)(*(long *)this + 0x380) == _has_uv) {
LAB_0010491b:
                if (iVar6 == 2) {
LAB_00104ad5:
                  iVar6 = InputEventMouseButton::get_button_index();
                  if ((iVar6 == 1) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0'))
                  goto LAB_00104f42;
                  goto LAB_00104ae6;
                }
                goto LAB_00104924;
              }
              cVar4 = (**(code **)(*(long *)this + 0x380))(this);
              iVar6 = *(int *)(this + 0xaa0);
              if (cVar4 == '\0') goto LAB_0010491b;
              if (iVar6 == 0) goto LAB_00104f00;
              if (iVar6 == 2) goto LAB_00104ad5;
LAB_0010492c:
              lVar8 = *(long *)param_1;
              if (lVar8 != 0) goto LAB_00104938;
            }
            uVar14 = 0;
            goto LAB_00104a38;
          }
          lVar8 = *(long *)param_1;
          if (lVar8 == 0) goto LAB_00104a00;
LAB_00104938:
          pOVar12 = (Object *)
                    __dynamic_cast(lVar8,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
          if (pOVar12 == (Object *)0x0) {
LAB_0010497e:
            pOVar13 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&InputEventKey::typeinfo,0);
            if ((pOVar13 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
              uVar14 = 0;
            }
            else {
              uVar5 = InputEvent::is_pressed();
              uVar14 = (ulong)uVar5;
              if ((char)uVar5 == '\0') {
LAB_00104e03:
                uVar14 = 0;
              }
              else {
                iVar6 = InputEventKey::get_keycode();
                if ((iVar6 != 0x400008) && (iVar6 = InputEventKey::get_keycode(), iVar6 != 0x400004)
                   ) {
                  if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
                    iVar6 = InputEventKey::get_keycode();
                    if (iVar6 == 0x400005) {
                      if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
                        _wip_close(this);
                      }
                    }
                    else if ((this[0xa80] != (AbstractPolygon2DEditor)0x0) &&
                            (iVar6 = InputEventKey::get_keycode(), iVar6 == 0x400001)) {
                      _wip_cancel(this);
                    }
                  }
                  goto LAB_00104e03;
                }
                if ((this[0xa80] == (AbstractPolygon2DEditor)0x0) || (*(int *)(this + 0xa40) != -1))
                {
                  if (*(int *)(this + 0xa3c) < 0) {
                    uVar9 = *(undefined8 *)(this + 0xa40);
                    if (*(int *)(this + 0xa44) < 0) goto LAB_00104e03;
                  }
                  else {
                    uVar9 = *(undefined8 *)(this + 0xa38);
                  }
                  local_b8 = uVar9;
                  remove_point(this,(Vertex *)&local_b8);
                }
                else {
                  if (*(long *)(this + 0xa78) == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = *(long *)(*(long *)(this + 0xa78) + -8);
                  }
                  if (lVar8 <= *(int *)(this + 0xa44)) goto LAB_00104e03;
                  Vector<Vector2>::remove_at
                            ((Vector<Vector2> *)(this + 0xa70),(long)*(int *)(this + 0xa44));
                  _wip_changed(this);
                  if (*(long *)(this + 0xa78) == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = (int)*(undefined8 *)(*(long *)(this + 0xa78) + -8);
                  }
                  *(undefined4 *)(this + 0xa40) = 0xffffffff;
                  *(int *)(this + 0xa44) = iVar6 + -1;
                  CanvasItemEditor::update_viewport();
                }
              }
              cVar4 = RefCounted::unreference();
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
              }
            }
            if (pOVar12 == (Object *)0x0) goto LAB_00104a33;
          }
          else {
            uVar5 = RefCounted::reference();
            uVar14 = (ulong)uVar5;
            if ((char)uVar5 == '\0') {
              lVar8 = *(long *)param_1;
              pOVar12 = (Object *)0x0;
              if (lVar8 == 0) goto LAB_00104a33;
              goto LAB_0010497e;
            }
            local_98[0] = InputEventMouse::get_position();
            if ((*(int *)(this + 0xa2c) < 0) ||
               ((this[0xa80] == (AbstractPolygon2DEditor)0x0 &&
                (uVar14 = InputEventMouse::get_button_mask(), (uVar14 & 1) == 0)))) {
              if ((*(int *)(this + 0xaa0) == 1) ||
                 (((*(code **)(*(long *)this + 0x380) != _has_uv &&
                   (cVar4 = (**(code **)(*(long *)this + 0x380))(this), cVar4 != '\0')) &&
                  (*(int *)(this + 0xaa0) == 0)))) {
                uVar9 = closest_point((Vector2 *)this);
                if ((*(int *)(this + 0xa38) != (int)uVar9) ||
                   (iVar6 = (int)((ulong)uVar9 >> 0x20), *(int *)(this + 0xa3c) != iVar6)) {
                  *(undefined8 *)(this + 0xa38) = uVar9;
                  CanvasItemEditor::update_viewport();
                  iVar6 = *(int *)(this + 0xa3c);
                }
                if ((iVar6 < 0) &&
                   (lVar8 = closest_edge_point(this,(Vector2 *)local_98), -1 < lVar8)) {
                  *(long *)(this + 0xa48) = lVar8;
                  *(undefined8 *)(this + 0xa38) = 0xffffffffffffffff;
                  *(undefined8 *)(this + 0xa50) = extraout_XMM0_Qa_01;
                  CanvasItemEditor::update_viewport();
                }
                else if (-1 < *(int *)(this + 0xa4c)) {
                  *(undefined8 *)(this + 0xa48) = 0xffffffffffffffff;
                  *(undefined8 *)(this + 0xa50) = 0;
                  goto LAB_00104dce;
                }
              }
LAB_00104dda:
              lVar8 = *(long *)param_1;
              if (lVar8 != 0) goto LAB_0010497e;
            }
            else {
              lVar8 = *(long *)(this + 0xa88);
              local_b8 = 0;
              local_78 = *(undefined8 *)(lVar8 + 0xa80);
              uStack_70 = *(undefined8 *)(lVar8 + 0xa88);
              local_68 = *(undefined8 *)(lVar8 + 0xa90);
              Transform2D::affine_inverse();
              uVar9 = CanvasItemEditor::snap_point(lVar8,7,0,0);
              fVar25 = (float)((ulong)uVar9 >> 0x20);
              List<CanvasItem*,DefaultAllocator>::~List
                        ((List<CanvasItem*,DefaultAllocator> *)&local_b8);
              plVar11 = (long *)(**(code **)(*(long *)this + 0x370))(this);
              (**(code **)(*plVar11 + 0x2b0))(&local_78,plVar11);
              Transform2D::affine_inverse();
              fVar24 = local_58._4_4_ * (float)uVar9 + local_50._4_4_ * fVar25 + fStack_44;
              fVar25 = (float)uVar9 * (float)local_58 + fVar25 * (float)local_50 + local_48;
              if ((*(int *)(this + 0xaa0) == 1) &&
                 (cVar4 = InputEventWithModifiers::is_shift_pressed(), cVar4 != '\0')) {
                lVar16 = (long)*(int *)(this + 0xa44);
                lVar8 = *(long *)(this + 0xa68);
                if (lVar16 < 0) {
                  if (lVar8 != 0) {
LAB_00105cd5:
                    lVar8 = *(long *)(lVar8 + -8);
                    goto LAB_00105cd9;
                  }
                }
                else if (lVar8 != 0) {
                  if (*(long *)(lVar8 + -8) <= lVar16) goto LAB_00105cd5;
                  pfVar1 = (float *)(lVar8 + lVar16 * 8);
                  fVar19 = *pfVar1;
                  fVar20 = pfVar1[1];
                  fVar27 = fVar25 - fVar19;
                  if (fVar27 < 0.0) {
                    fVar27 = (float)((uint)fVar27 ^ __LC127);
                  }
                  fVar21 = fVar24 - fVar20;
                  if (fVar21 < 0.0) {
                    fVar21 = (float)((uint)fVar21 ^ __LC127);
                  }
                  uVar5 = -(uint)(fVar21 < fVar27);
                  fVar25 = (float)((uint)fVar25 & uVar5 | ~uVar5 & (uint)fVar19);
                  fVar24 = (float)(~uVar5 & (uint)fVar24 | (uint)fVar20 & uVar5);
                  goto LAB_00104c88;
                }
                lVar8 = 0;
LAB_00105cd9:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar8,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
LAB_00104c88:
              uVar9 = CONCAT44(fVar24,fVar25);
              *(undefined8 *)(this + 0xa30) = uVar9;
              if (this[0xa80] != (AbstractPolygon2DEditor)0x0) {
LAB_00104dce:
                CanvasItemEditor::update_viewport();
                goto LAB_00104dda;
              }
              (**(code **)(*(long *)this + 0x3a0))
                        ((Variant *)&local_58,this,*(ulong *)(this + 0xa28) & 0xffffffff);
              Variant::operator_cast_to_Vector((Variant *)&local_b8);
              if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                Variant::_clear_internal();
              }
              lVar8 = (long)*(int *)(this + 0xa2c);
              if (*(int *)(this + 0xa2c) < 0) {
                if (local_b0[0] == 0) goto LAB_00105805;
LAB_001057b0:
                lVar16 = *(long *)(local_b0[0] + -8);
              }
              else {
                if (local_b0[0] != 0) {
                  if (*(long *)(local_b0[0] + -8) <= lVar8) goto LAB_001057b0;
                  if (*(code **)(*(long *)this + 0x398) == _get_offset) {
LAB_00104d49:
                    if (lVar8 < *(long *)(local_b0[0] + -8)) {
                      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_b0);
                      *(undefined8 *)(local_b0[0] + lVar8 * 8) = uVar9;
                      pcVar2 = *(code **)(*(long *)this + 0x3a8);
                      Variant::Variant((Variant *)&local_58,(Vector *)&local_b8);
                      (*pcVar2)(this,*(undefined4 *)(this + 0xa28),(Variant *)&local_58);
                      if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                        Variant::_clear_internal();
                      }
                      CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
                      goto LAB_00104dce;
                    }
                  }
                  else {
                    uVar9 = (**(code **)(*(long *)this + 0x398))(this,*(undefined4 *)(this + 0xa28))
                    ;
                    lVar8 = (long)*(int *)(this + 0xa2c);
                    if (-1 < lVar8) {
                      lVar16 = 0;
                      if (local_b0[0] == 0) goto LAB_00105858;
                      uVar9 = CONCAT44(fVar24 - (float)((ulong)uVar9 >> 0x20),fVar25 - (float)uVar9)
                      ;
                      goto LAB_00104d49;
                    }
                    if (local_b0[0] == 0) {
                      lVar16 = 0;
                      goto LAB_00105858;
                    }
                  }
                  lVar16 = *(long *)(local_b0[0] + -8);
LAB_00105858:
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar16,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
LAB_00105805:
                lVar16 = 0;
              }
              _err_print_index_error
                        ("forward_gui_input","editor/plugins/abstract_polygon_2d_editor.cpp",0x1b5,
                         lVar8,lVar16,"edited_point.vertex","vertices.size()","",false,false);
              CowData<Vector2>::_unref((CowData<Vector2> *)local_b0);
            }
            uVar14 = 0;
          }
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        else {
          uVar14 = 0;
        }
LAB_00104a33:
        if (pOVar10 == (Object *)0x0) goto LAB_00104a03;
      }
      else {
        if (pOVar10 == (Object *)0x0) goto LAB_00104a00;
        iVar6 = InputEventMouseButton::get_button_index();
        if ((iVar6 == 1) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) {
          uVar9 = *(undefined8 *)(this + 0xa98);
          local_b8 = 0;
          String::parse_latin1
                    ((String *)&local_b8,"No polygon resource on this node.\nCreate and assign one?"
                    );
          AcceptDialog::set_text(uVar9,(String *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          local_58 = 0;
          Window::popup_centered(*(Vector2i **)(this + 0xa98));
        }
        iVar6 = InputEventMouseButton::get_button_index();
        uVar14 = CONCAT71((int7)((ulong)unaff_R15 >> 8),iVar6 == 1);
      }
LAB_00104a38:
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      goto LAB_00104a03;
    }
  }
LAB_00104a00:
  uVar14 = 0;
LAB_00104a03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14 & 0xffffffff;
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



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* AbstractPolygon2DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
AbstractPolygon2DEditorPlugin::is_class_ptr(AbstractPolygon2DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10c2,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10c2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c3,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c3,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AbstractPolygon2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AbstractPolygon2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AbstractPolygon2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AbstractPolygon2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AbstractPolygon2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AbstractPolygon2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AbstractPolygon2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AbstractPolygon2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AbstractPolygon2DEditorPlugin::has_main_screen() const */

undefined8 AbstractPolygon2DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, Node*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*> *this,bool *param_1)

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



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* AbstractPolygon2DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AbstractPolygon2DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AbstractPolygon2DEditor::_property_can_revertv(StringName const&) const */

undefined8 AbstractPolygon2DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AbstractPolygon2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AbstractPolygon2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010f010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int>::get_object
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int> *this)

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
      goto LAB_00106a3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106a3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106a3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*> *this)

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
      goto LAB_00106b3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106b3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106b3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void>::get_object
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void> *this)

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
      goto LAB_00106c3d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106c3d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106c3d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AbstractPolygon2DEditor::_validate_propertyv(PropertyInfo&) const */

void AbstractPolygon2DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AbstractPolygon2DEditor::_setv(StringName const&, Variant const&) */

undefined8 AbstractPolygon2DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010f020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00106e08) */
/* AbstractPolygon2DEditor::_getv(StringName const&, Variant&) const */

undefined8 AbstractPolygon2DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* AbstractPolygon2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
AbstractPolygon2DEditorPlugin::_notificationv
          (AbstractPolygon2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010f030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* AbstractPolygon2DEditor::is_class_ptr(void*) const */

ulong AbstractPolygon2DEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10c2,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10c2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10c2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10c3,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10c3,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10c3,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* AbstractPolygon2DEditorPlugin::_get_class_namev() const */

undefined8 * AbstractPolygon2DEditorPlugin::_get_class_namev(void)

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
LAB_00106f63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106f63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AbstractPolygon2DEditorPlugin");
      goto LAB_00106fce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AbstractPolygon2DEditorPlugin");
LAB_00106fce:
  return &_get_class_namev()::_class_name_static;
}



/* AbstractPolygon2DEditor::_get_class_namev() const */

undefined8 * AbstractPolygon2DEditor::_get_class_namev(void)

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
LAB_00107053:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107053;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AbstractPolygon2DEditor");
      goto LAB_001070be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AbstractPolygon2DEditor");
LAB_001070be:
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



/* WARNING: Removing unreachable block (ram,0x001072b0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f038 != Container::_notification) {
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
  if ((code *)PTR__notification_0010f038 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* List<CanvasItem*, DefaultAllocator>::~List() */

undefined8 __thiscall
List<CanvasItem*,DefaultAllocator>::~List(List<CanvasItem*,DefaultAllocator> *this)

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



/* Callable create_custom_callable_function_pointer<AbstractPolygon2DEditor,
   int>(AbstractPolygon2DEditor*, char const*, void (AbstractPolygon2DEditor::*)(int)) */

AbstractPolygon2DEditor *
create_custom_callable_function_pointer<AbstractPolygon2DEditor,int>
          (AbstractPolygon2DEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC13;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010c228;
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



/* Callable Callable::bind<AbstractPolygon2DEditor::{unnamed
   type#1}>(AbstractPolygon2DEditor::{unnamed type#1}) const */

Variant **
Callable::bind<AbstractPolygon2DEditor::_unnamed_type_1_>(Variant **param_1,int param_2,int param_3)

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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c4a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00107c4a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* AbstractPolygon2DEditor::_initialize_classv() */

void AbstractPolygon2DEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
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
                if ((code *)PTR__bind_methods_0010f050 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0010f040 !=
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
        if ((code *)PTR__bind_methods_0010f048 != Container::_bind_methods) {
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"HBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"AbstractPolygon2DEditor");
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



/* AbstractPolygon2DEditor::_notification(int) [clone .cold] */

void AbstractPolygon2DEditor::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00108430) */
/* AbstractPolygon2DEditor::_notificationv(int, bool) */

void __thiscall
AbstractPolygon2DEditor::_notificationv(AbstractPolygon2DEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  if (param_2) {
    _notification(this,param_1);
    iVar1 = (int)this;
    if ((code *)PTR__notification_0010f038 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
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



/* AbstractPolygon2DEditorPlugin::get_class() const */

void AbstractPolygon2DEditorPlugin::get_class(void)

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



/* AbstractPolygon2DEditor::get_class() const */

void AbstractPolygon2DEditor::get_class(void)

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



/* AbstractPolygon2DEditorPlugin::get_plugin_name() const */

void AbstractPolygon2DEditorPlugin::get_plugin_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x668) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x668));
  }
  return;
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
LAB_00108787:
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
      goto LAB_00108787;
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
    if (cVar4 != '\0') goto LAB_0010888b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010888b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void>::call
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void> *this,Variant **param_1,
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
      goto LAB_00108acf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00108acf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00108b80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00108acf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00108b80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int>::call
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int> *this,Variant **param_1,
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
      goto LAB_00108d48;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00108d48;
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
        uVar3 = _LC68;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00108df9;
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
LAB_00108d48:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00108df9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, Node*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*>::call
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00109035;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00109035;
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
LAB_00108f40:
          uVar3 = _LC69;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_00108f40;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001090e6;
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
LAB_00109035:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001090e6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditorPlugin::_initialize_classv() */

void AbstractPolygon2DEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010f050 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Node");
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorPlugin";
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
      if ((code *)PTR__bind_methods_0010f058 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010f060 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AbstractPolygon2DEditorPlugin";
    local_70 = 0;
    local_50 = 0x1d;
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = &_LC18;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC18;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
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



/* AbstractPolygon2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AbstractPolygon2DEditorPlugin::_get_property_listv
          (AbstractPolygon2DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AbstractPolygon2DEditorPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AbstractPolygon2DEditorPlugin";
  local_98 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"AbstractPolygon2DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010f068 != Object::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010f070 != CanvasItem::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* AbstractPolygon2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AbstractPolygon2DEditor::_get_property_listv
          (AbstractPolygon2DEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "AbstractPolygon2DEditor";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AbstractPolygon2DEditor";
  local_98 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"AbstractPolygon2DEditor",false);
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010abfb;
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
      if (cVar4 != '\0') goto LAB_0010abfb;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010acfe;
    }
  }
LAB_0010abfb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010acfe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010adeb;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
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
      if (cVar4 != '\0') goto LAB_0010adeb;
    }
    cVar4 = String::operator==(param_1,"Container");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_0010aeee;
    }
  }
LAB_0010adeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010aeee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::is_class(String const&) const */

undefined8 __thiscall
AbstractPolygon2DEditor::is_class(AbstractPolygon2DEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010affb;
  }
  cVar5 = String::operator==(param_1,"AbstractPolygon2DEditor");
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
      if (cVar5 != '\0') goto LAB_0010affb;
    }
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b0fe;
    }
  }
LAB_0010affb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b0fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AbstractPolygon2DEditorPlugin::is_class(AbstractPolygon2DEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010b20b;
  }
  cVar5 = String::operator==(param_1,"AbstractPolygon2DEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0010b20b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b30e;
    }
  }
LAB_0010b20b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b30e:
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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* AbstractPolygon2DEditorPlugin::forward_canvas_draw_over_viewport(Control*) */

void __thiscall
AbstractPolygon2DEditorPlugin::forward_canvas_draw_over_viewport
          (AbstractPolygon2DEditorPlugin *this,Control *param_1)

{
  AbstractPolygon2DEditor::forward_canvas_draw_over_viewport
            (*(AbstractPolygon2DEditor **)(this + 0x660),param_1);
  return;
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar2 = 0;
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
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010b720:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0010b720;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0010b6ac:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010b651;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010b6ac;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010b651:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Vector2>::remove_at(long) */

void __thiscall Vector<Vector2>::remove_at(Vector<Vector2> *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_0010b831;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (param_1 < lVar2) {
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
      lVar2 = *(long *)(this + 8);
      if (lVar2 == 0) {
        lVar1 = -1;
      }
      else {
        lVar1 = *(long *)(lVar2 + -8) + -1;
        if (param_1 < lVar1) {
          memmove((void *)(lVar2 + param_1 * 8),(void *)(lVar2 + 8 + param_1 * 8),
                  (*(long *)(lVar2 + -8) - param_1) * 8 - 8);
        }
      }
      CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar1);
      return;
    }
    goto LAB_0010b831;
  }
  lVar2 = 0;
LAB_0010b831:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar2,"p_index","size()","",false
             ,false);
  return;
}



/* AbstractPolygon2DEditorPlugin::forward_canvas_gui_input(Ref<InputEvent> const&) */

void __thiscall
AbstractPolygon2DEditorPlugin::forward_canvas_gui_input
          (AbstractPolygon2DEditorPlugin *this,Ref *param_1)

{
  AbstractPolygon2DEditor::forward_gui_input(*(AbstractPolygon2DEditor **)(this + 0x660),param_1);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AbstractPolygon2DEditor, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AbstractPolygon2DEditor,void,int> *this)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<CanvasItem*, DefaultAllocator>::~List() */

void __thiscall List<CanvasItem*,DefaultAllocator>::~List(List<CanvasItem*,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


