
/* Sprite2DEditorPlugin::edit(Object*) */

void __thiscall Sprite2DEditorPlugin::edit(Sprite2DEditorPlugin *this,Object *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x660);
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Sprite2D::typeinfo,0);
  }
  *(Object **)(lVar1 + 0x9d0) = param_1;
  return;
}



/* Sprite2DEditor::_debug_uv_input(Ref<InputEvent> const&) */

void __thiscall Sprite2DEditor::_debug_uv_input(Sprite2DEditor *this,Ref *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa78);
  Control::get_global_rect();
  cVar2 = ViewPanner::gui_input(uVar1,param_1);
  if (cVar2 == '\0') {
    return;
  }
  Control::accept_event();
  return;
}



/* Sprite2DEditorPlugin::make_visible(bool) */

void __thiscall Sprite2DEditorPlugin::make_visible(Sprite2DEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  *(undefined8 *)(*(long *)(this + 0x660) + 0x9d0) = 0;
  return;
}



/* Sprite2DEditor::_add_as_sibling_or_child(Node*, Node*) */

void __thiscall
Sprite2DEditor::_add_as_sibling_or_child(Sprite2DEditor *this,Node *param_1,Node *param_2)

{
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Transform2D *pTVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  pNVar2 = (Node *)SceneTree::get_edited_scene_root();
  if (param_1 == pNVar2) {
    Node::add_child(param_1,param_2,1,0);
    lVar1 = *(long *)(this + 0x240);
  }
  else {
    uVar3 = Node::get_parent();
    Node::add_child(uVar3,param_2,1,0);
    if (param_2 == (Node *)0x0) {
      pTVar4 = (Transform2D *)0x0;
    }
    else {
      pTVar4 = (Transform2D *)__dynamic_cast(param_2,&Object::typeinfo,&Node2D::typeinfo,0);
    }
    plVar5 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&Node2D::typeinfo,0);
    (**(code **)(*plVar5 + 0x290))(auStack_58,plVar5);
    Node2D::set_transform(pTVar4);
    lVar1 = *(long *)(this + 0x240);
  }
  if (lVar1 == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  SceneTree::get_edited_scene_root();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Node::set_owner(param_2);
  return;
}



/* Sprite2DEditor::_node_removed(Node*) */

void __thiscall Sprite2DEditor::_node_removed(Sprite2DEditor *this,Node *param_1)

{
  if (*(Node **)(this + 0x9d0) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0x9d0) = 0;
  CanvasItem::hide();
  return;
}



/* Sprite2DEditor::edit(Sprite2D*) */

void __thiscall Sprite2DEditor::edit(Sprite2DEditor *this,Sprite2D *param_1)

{
  *(Sprite2D **)(this + 0x9d0) = param_1;
  return;
}



/* Sprite2DEditorPlugin::handles(Object*) const */

undefined4 __thiscall Sprite2DEditorPlugin::handles(Sprite2DEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 8;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "Sprite2D";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditorPlugin::~Sprite2DEditorPlugin() */

void __thiscall Sprite2DEditorPlugin::~Sprite2DEditorPlugin(Sprite2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115210;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* Sprite2DEditorPlugin::~Sprite2DEditorPlugin() */

void __thiscall Sprite2DEditorPlugin::~Sprite2DEditorPlugin(Sprite2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115210;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
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



/* Sprite2DEditor::_convert_to_mesh_2d_node() */

void __thiscall Sprite2DEditor::_convert_to_mesh_2d_node(Sprite2DEditor *this)

{
  undefined8 uVar1;
  char cVar2;
  ArrayMesh *this_00;
  Variant *pVVar3;
  MeshInstance2D *this_01;
  Object *pOVar4;
  undefined8 uVar5;
  int iVar6;
  ArrayMesh *pAVar7;
  long in_FS_OFFSET;
  Array local_80 [8];
  Array local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  Object *local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xa38) == 0) || (*(long *)(*(long *)(this + 0xa38) + -8) < 3)) {
    uVar1 = *(undefined8 *)(this + 0x9e8);
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Invalid geometry, can\'t replace by mesh.");
    TTR((String *)&local_60,(String *)&local_70);
    AcceptDialog::set_text(uVar1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    local_58[0] = 0;
    local_58[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9e8));
  }
  else {
    pAVar7 = (ArrayMesh *)0x0;
    this_00 = (ArrayMesh *)operator_new(0x430,"");
    ArrayMesh::ArrayMesh(this_00);
    postinitialize_handler((Object *)this_00);
    cVar2 = RefCounted::init_ref();
    if (cVar2 != '\0') {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        pAVar7 = this_00;
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)this_00);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
    }
    Array::Array(local_80);
    iVar6 = (int)local_80;
    Array::resize(iVar6);
    Variant::Variant((Variant *)local_58,(Vector *)(this + 0xa30));
    pVVar3 = (Variant *)Array::operator[](iVar6);
    if (pVVar3 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = local_58[0];
      *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
    }
    Variant::Variant((Variant *)local_58,(Vector *)(this + 0xa40));
    pVVar3 = (Variant *)Array::operator[](iVar6);
    if (pVVar3 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = local_58[0];
      *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
    }
    Variant::Variant((Variant *)local_58,(Vector *)(this + 0xa50));
    pVVar3 = (Variant *)Array::operator[](iVar6);
    if (pVVar3 == (Variant *)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = local_58[0];
      *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
    }
    Dictionary::Dictionary((Dictionary *)&local_70);
    Array::Array(local_78);
    Array::Array((Array *)&local_68);
    local_58[0] = 0;
    local_58[1] = 0;
    local_60 = (Object *)0x0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)(Array *)&local_68,(StringName *)0x1c,(Variant *)&local_60);
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar2 = Array::is_same_typed((Array *)&local_68);
    if (cVar2 == '\0') {
      Array::assign((Array *)&local_68);
    }
    else {
      Array::_ref((Array *)&local_68);
    }
    ArrayMesh::add_surface_from_arrays
              (pAVar7,3,local_80,(Array *)&local_68,(Dictionary *)&local_70,0x2000000);
    Array::~Array((Array *)&local_68);
    Array::~Array(local_78);
    Dictionary::~Dictionary((Dictionary *)&local_70);
    this_01 = (MeshInstance2D *)operator_new(0x590,"");
    MeshInstance2D::MeshInstance2D(this_01);
    postinitialize_handler((Object *)this_01);
    local_60 = (Object *)0x0;
    pOVar4 = (Object *)__dynamic_cast(pAVar7,&Object::typeinfo,&Mesh::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      local_60 = pOVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_60 = (Object *)0x0;
      }
    }
    MeshInstance2D::set_mesh((Ref *)this_01);
    if (local_60 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = local_60;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_60);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))();
          Memory::free_static(pOVar4,false);
        }
      }
    }
    uVar5 = EditorUndoRedoManager::get_singleton();
    uVar1 = *(undefined8 *)(this + 0x9d0);
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Convert to MeshInstance2D");
    TTR((String *)&local_60,(String *)&local_70);
    EditorUndoRedoManager::create_action(uVar5,(Variant *)&local_60,0,uVar1,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    SceneTreeDock::replace_node(SceneTreeDock::singleton,*(Node **)(this + 0x9d0));
    EditorUndoRedoManager::commit_action(SUB81(uVar5,0));
    Array::~Array(local_80);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)pAVar7);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pAVar7 + 0x140))(pAVar7);
        Memory::free_static(pAVar7,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::Sprite2DEditor() */

void __thiscall Sprite2DEditor::Sprite2DEditor(Sprite2DEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  long lVar3;
  double dVar4;
  char cVar5;
  MenuButton *this_00;
  undefined8 uVar6;
  long *plVar7;
  CallableCustom *pCVar8;
  AcceptDialog *this_01;
  ConfirmationDialog *this_02;
  BoxContainer *this_03;
  Panel *this_04;
  EditorZoomWidget *this_05;
  Object *pOVar9;
  BoxContainer *this_06;
  Label *pLVar10;
  SpinBox *pSVar11;
  Button *this_07;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  Object *local_b0;
  ViewPanner *local_a0;
  long local_90;
  String local_88 [16];
  undefined8 local_78 [2];
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001147b8;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa48) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined4 *)(this + 0xa88) = 0x3f800000;
  *(undefined1 (*) [16])(this + 0x9d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  this_00 = (MenuButton *)operator_new(0xc68,"");
  local_68[0] = 0;
  MenuButton::MenuButton(this_00,(String *)local_68);
  postinitialize_handler((Object *)this_00);
  *(MenuButton **)(this + 0x9d8) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CanvasItemEditor::add_control_to_menu_panel(CanvasItemEditor::singleton);
  pSVar1 = *(String **)(this + 0x9d8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Sprite2D");
  TTR(local_88,(String *)local_78);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar6 = MenuButton::get_popup();
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Convert to MeshInstance2D");
  TTR(local_88,(String *)local_78);
  PopupMenu::add_item(uVar6,local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar6 = MenuButton::get_popup();
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Convert to Polygon2D");
  TTR(local_88,(String *)local_78);
  PopupMenu::add_item(uVar6,local_88,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar6 = MenuButton::get_popup();
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Create CollisionPolygon2D Sibling");
  TTR(local_88,(String *)local_78);
  PopupMenu::add_item(uVar6,local_88,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar6 = MenuButton::get_popup();
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Create LightOccluder2D Sibling");
  TTR(local_88,(String *)local_78);
  PopupMenu::add_item(uVar6,local_88,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x9d8),0));
  plVar7 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar7 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC14;
  *(Sprite2DEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00115548;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar6;
  *(code **)(pCVar8 + 0x38) = _menu_option;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "Sprite2DEditor::_menu_option";
  Callable::Callable((Callable *)local_68,pCVar8);
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  this_01 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_01);
  postinitialize_handler((Object *)this_01);
  *(AcceptDialog **)(this + 0x9e8) = this_01;
  Node::add_child(this,this_01,0,0);
  this_02 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_02);
  postinitialize_handler((Object *)this_02);
  *(ConfirmationDialog **)(this + 0x9f0) = this_02;
  fVar15 = (float)EditorScale::get_scale();
  local_50 = CONCAT44(fVar15 * _LC25._4_4_,fVar15 * (float)_LC25);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::set_size((Vector2i *)this_02);
  this_03 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_03,true);
  this_03[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_00114e98;
  postinitialize_handler((Object *)this_03);
  Node::add_child(*(undefined8 *)(this + 0x9f0),this_03,0);
  this_04 = (Panel *)operator_new(0x9d0,"");
  Panel::Panel(this_04);
  postinitialize_handler((Object *)this_04);
  lVar3 = *(long *)this_04;
  *(Panel **)(this + 0x9f8) = this_04;
  pcVar2 = *(code **)(lVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC14;
  *(Sprite2DEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_001155d8;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar6;
  *(code **)(pCVar8 + 0x38) = _debug_uv_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "Sprite2DEditor::_debug_uv_input";
  Callable::Callable((Callable *)local_68,pCVar8);
  (*pcVar2)(this_04,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar7 = *(long **)(this + 0x9f8);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<Sprite2DEditor>
            ((Sprite2DEditor *)local_68,(char *)this,(_func_void *)"&Sprite2DEditor::_debug_uv_draw"
            );
  (*pcVar2)(plVar7,SceneStringNames::singleton + 8,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Control::set_clip_contents(SUB81(*(undefined8 *)(this + 0x9f8),0));
  uVar6 = *(undefined8 *)(this + 0x9f8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Preview:");
  TTR(local_88,(String *)local_78);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_88,SUB81(uVar6,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_a0 = (ViewPanner *)operator_new(0x1c8,"");
  ViewPanner::ViewPanner(local_a0);
  postinitialize_handler((Object *)local_a0);
  cVar5 = RefCounted::init_ref();
  local_b0 = *(Object **)(this + 0xa78);
  if (cVar5 == '\0') {
    if (local_b0 == (Object *)0x0) goto LAB_00101247;
    *(undefined8 *)(this + 0xa78) = 0;
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_b0);
      local_a0 = (ViewPanner *)0x0;
      if (cVar5 != '\0') {
LAB_00101cab:
        (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
        Memory::free_static(local_b0,false);
        pOVar9 = (Object *)local_a0;
        if (local_a0 != (ViewPanner *)0x0) goto LAB_00101c1b;
      }
    }
  }
  else {
    pOVar9 = local_b0;
    if (local_a0 != (ViewPanner *)local_b0) {
      *(ViewPanner **)(this + 0xa78) = local_a0;
      cVar5 = RefCounted::reference();
      pOVar9 = (Object *)local_a0;
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xa78) = 0;
        if (local_b0 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x00101c84:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_b0), cVar5 != '\0'))
          goto LAB_00101cab;
        }
      }
      else if (local_b0 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x00101c84;
      }
    }
LAB_00101c1b:
    local_a0 = (ViewPanner *)pOVar9;
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)local_a0), cVar5 != '\0')) {
      (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
      Memory::free_static(local_a0,false);
      local_b0 = *(Object **)(this + 0xa78);
      goto LAB_00101247;
    }
  }
  local_b0 = *(Object **)(this + 0xa78);
LAB_00101247:
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC14;
  *(Sprite2DEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_001156f8;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar6;
  *(code **)(pCVar8 + 0x38) = _zoom_callback;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "Sprite2DEditor::_zoom_callback";
  Callable::Callable((Callable *)local_68,pCVar8);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC14;
  *(Sprite2DEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00115668;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar6;
  *(code **)(pCVar8 + 0x38) = _pan_callback;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "Sprite2DEditor::_pan_callback";
  Callable::Callable((Callable *)local_78,pCVar8);
  ViewPanner::set_callbacks(local_b0,(String *)local_78,(CowData<char32_t> *)local_68);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  this_05 = (EditorZoomWidget *)operator_new(0xa38,"");
  EditorZoomWidget::EditorZoomWidget(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorZoomWidget **)(this + 0xa70) = this_05;
  uVar12 = 0;
  Node::add_child(*(undefined8 *)(this + 0x9f8),this_05,0,0);
  uVar6 = *(undefined8 *)(this + 0xa70);
  fVar15 = (float)EditorScale::get_scale();
  Control::set_anchors_and_offsets_preset(uVar6,0,0,CONCAT44(uVar12,(int)(fVar15 + fVar15)));
  plVar7 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<Sprite2DEditor,bool>
            ((Sprite2DEditor *)local_68,(char *)this,
             (_func_void_bool *)"&Sprite2DEditor::_update_zoom_and_pan");
  iVar14 = (int)(String *)local_78;
  Callable::unbind(iVar14);
  bVar13 = SUB81(local_88,0);
  Callable::bind<bool>(bVar13);
  StringName::StringName((StringName *)&local_90,"zoom_changed",false);
  (*pcVar2)(plVar7,(StringName *)&local_90,local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  EditorZoomWidget::set_shortcut_context(*(Node **)(this + 0xa70));
  pOVar9 = (Object *)operator_new(0xac8,"");
  ScrollBar::ScrollBar((ScrollBar *)pOVar9,1);
  *(undefined ***)pOVar9 = &PTR__initialize_classv_00114448;
  Control::set_h_size_flags(pOVar9,0);
  postinitialize_handler(pOVar9);
  *(Object **)(this + 0xa68) = pOVar9;
  Node::add_child(*(undefined8 *)(this + 0x9f8),pOVar9,0,0);
  plVar7 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<Sprite2DEditor,bool>
            ((Sprite2DEditor *)local_68,(char *)this,
             (_func_void_bool *)"&Sprite2DEditor::_update_zoom_and_pan");
  Callable::unbind(iVar14);
  Callable::bind<bool>(bVar13);
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x280,local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pOVar9 = (Object *)operator_new(0xac8,"");
  ScrollBar::ScrollBar((ScrollBar *)pOVar9,0);
  *(undefined ***)pOVar9 = &PTR__initialize_classv_001140d8;
  Control::set_v_size_flags(pOVar9,0);
  postinitialize_handler(pOVar9);
  *(Object **)(this + 0xa60) = pOVar9;
  Node::add_child(*(undefined8 *)(this + 0x9f8),pOVar9,0,0);
  plVar7 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<Sprite2DEditor,bool>
            ((Sprite2DEditor *)local_68,(char *)this,
             (_func_void_bool *)"&Sprite2DEditor::_update_zoom_and_pan");
  Callable::unbind(iVar14);
  Callable::bind<bool>(bVar13);
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x280,local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  plVar7 = *(long **)(this + 0x9f0);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<Sprite2DEditor>
            ((Sprite2DEditor *)local_68,(char *)this,(_func_void *)"&Sprite2DEditor::_create_node");
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  this_06 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_06,false);
  this_06[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_06 = &PTR__initialize_classv_00114b20;
  postinitialize_handler((Object *)this_06);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Simplification:");
  TTR(local_88,(String *)local_78);
  Label::Label(pLVar10,local_88);
  postinitialize_handler((Object *)pLVar10);
  Node::add_child(this_06,pLVar10,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar11 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar11);
  postinitialize_handler((Object *)pSVar11);
  dVar4 = _LC35;
  *(SpinBox **)(this + 0xa90) = pSVar11;
  Range::set_min(dVar4);
  Range::set_max(_LC36);
  Range::set_step(_LC35);
  Range::set_value(_LC37);
  Node::add_child(this_06,*(undefined8 *)(this + 0xa90),0,0);
  bVar13 = SUB81(this_06,0);
  BoxContainer::add_spacer(bVar13);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Shrink (Pixels):");
  TTR(local_88,(String *)local_78);
  Label::Label(pLVar10,local_88);
  postinitialize_handler((Object *)pLVar10);
  Node::add_child(this_06,pLVar10,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar11 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar11);
  postinitialize_handler((Object *)pSVar11);
  *(SpinBox **)(this + 0xaa0) = pSVar11;
  Range::set_min(0.0);
  Range::set_max(_LC36);
  Range::set_step(_LC40);
  Range::set_value(0.0);
  Node::add_child(this_06,*(undefined8 *)(this + 0xaa0),0,0);
  BoxContainer::add_spacer(bVar13);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Grow (Pixels):");
  TTR(local_88,(String *)local_78);
  Label::Label(pLVar10,local_88);
  postinitialize_handler((Object *)pLVar10);
  Node::add_child(this_06,pLVar10,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar11 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar11);
  postinitialize_handler((Object *)pSVar11);
  *(SpinBox **)(this + 0xa98) = pSVar11;
  Range::set_min(0.0);
  Range::set_max(_LC36);
  Range::set_step(_LC40);
  Range::set_value(_LC37);
  Node::add_child(this_06,*(undefined8 *)(this + 0xa98),0,0);
  BoxContainer::add_spacer(bVar13);
  this_07 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(this_07,(String *)local_68);
  postinitialize_handler((Object *)this_07);
  *(Button **)(this + 0xaa8) = this_07;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xaa8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Update Preview");
  TTR(local_88,(String *)local_78);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar7 = *(long **)(this + 0xaa8);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<Sprite2DEditor>
            ((Sprite2DEditor *)local_68,(char *)this,
             (_func_void *)"&Sprite2DEditor::_update_mesh_data");
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this_06,*(undefined8 *)(this + 0xaa8),0,0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Settings:");
  TTR(local_88,(String *)local_78);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_88,bVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0x9f0),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditorPlugin::Sprite2DEditorPlugin() */

void __thiscall Sprite2DEditorPlugin::Sprite2DEditorPlugin(Sprite2DEditorPlugin *this)

{
  long lVar1;
  Sprite2DEditor *this_00;
  
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (Sprite2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (Sprite2DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00115210;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (Sprite2DEditor *)operator_new(0xab0,"");
  Sprite2DEditor::Sprite2DEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = EditorNode::singleton;
  *(Sprite2DEditor **)(this + 0x660) = this_00;
  Node::add_child(*(undefined8 *)(lVar1 + 0x6c8),this_00,0,0);
  CanvasItem::hide();
  *(undefined8 *)(*(long *)(this + 0x660) + 0x9d0) = 0;
  return;
}



/* Control::initialize_class() [clone .part.0] */

void Control::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
      if ((code *)PTR__bind_methods_0011a010 != Node::_bind_methods) {
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
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
  if ((code *)PTR__bind_methods_0011a008 != CanvasItem::_bind_methods) {
    Control::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sprite2DEditor::_update_zoom_and_pan(bool) */

void __thiscall Sprite2DEditor::_update_zoom_and_pan(Sprite2DEditor *this,bool param_1)

{
  undefined4 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  Object *local_28;
  long local_20;
  
  uVar1 = *(undefined4 *)(this + 0xa88);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = EditorZoomWidget::get_zoom();
  *(undefined4 *)(this + 0xa88) = uVar3;
  dVar6 = (double)Range::get_value();
  dVar7 = (double)Range::get_value();
  *(ulong *)(this + 0xa80) = CONCAT44((float)dVar6,(float)dVar7);
  if (param_1) {
    uVar8 = Control::get_size();
    auVar10._0_8_ = CONCAT44(_UNK_00115b84 * (float)((ulong)uVar8 >> 0x20),_LC98 * (float)uVar8);
    auVar10._8_4_ = (float)extraout_XMM0_Qb * 0.0;
    auVar10._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) * 0.0;
    auVar13._4_4_ = uVar1;
    auVar13._0_4_ = uVar1;
    auVar13._8_8_ = _LC91;
    auVar12._8_4_ = auVar10._8_4_;
    auVar12._0_8_ = auVar10._0_8_;
    auVar12._12_4_ = auVar10._12_4_;
    auVar13 = divps(auVar12,auVar13);
    auVar11._4_4_ = *(undefined4 *)(this + 0xa88);
    auVar11._0_4_ = *(undefined4 *)(this + 0xa88);
    auVar11._8_8_ = _LC91;
    auVar10 = divps(auVar10,auVar11);
    *(ulong *)(this + 0xa80) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa80) >> 0x20) +
                  (auVar13._4_4_ - auVar10._4_4_),
                  (float)*(undefined8 *)(this + 0xa80) + (auVar13._0_4_ - auVar10._0_4_));
  }
  Sprite2D::get_texture();
  if (local_28 == (Object *)0x0) {
    _err_print_error("_update_zoom_and_pan","editor/plugins/sprite_2d_editor_plugin.cpp",0x208,
                     "Condition \"tex.is_null()\" is true.",0,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_28);
  }
  else {
    uVar8 = (**(code **)(*(long *)local_28 + 0x1d8))();
    fVar14 = *(float *)(this + 0xa88);
    uVar9 = Control::get_size();
    fVar15 = (float)uVar9 / fVar14;
    fVar5 = *(float *)(this + 0xa88);
    fVar14 = (float)((ulong)uVar9 >> 0x20) / fVar14;
    fVar4 = (float)EditorScale::get_scale();
    fVar5 = (fVar4 * _LC95) / fVar5;
    fVar4 = fVar15 - fVar5;
    fVar5 = fVar14 - fVar5;
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xa60),0));
    Range::set_min((double)(0.0 - fVar4));
    Range::set_max((double)(fVar4 + (float)uVar8));
    Range::set_page((double)fVar15);
    Range::set_value((double)*(float *)(this + 0xa80));
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xa60),0));
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xa68),0));
    Range::set_min((double)(0.0 - fVar5));
    Range::set_max((double)(fVar5 + (float)((ulong)uVar8 >> 0x20)));
    Range::set_page((double)fVar14);
    Range::set_value((double)*(float *)(this + 0xa84));
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xa68),0));
    CanvasItem::queue_redraw();
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::_pan_callback(Vector2, Ref<InputEvent>) */

void Sprite2DEditor::_pan_callback(undefined8 param_1,Sprite2DEditor *param_2)

{
  double dVar1;
  
  dVar1 = (double)Range::get_value();
  Range::set_value_no_signal(dVar1 - (double)((float)param_1 / *(float *)(param_2 + 0xa88)));
  dVar1 = (double)Range::get_value();
  Range::set_value_no_signal
            (dVar1 - (double)((float)((ulong)param_1 >> 0x20) / *(float *)(param_2 + 0xa88)));
  _update_zoom_and_pan(param_2,false);
  return;
}



/* Sprite2DEditor::_zoom_callback(float, Vector2, Ref<InputEvent>) */

void Sprite2DEditor::_zoom_callback(float param_1,Sprite2DEditor *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  fVar1 = *(float *)(param_2 + 0xa88);
  auVar2._4_4_ = fVar1;
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = _LC91;
  auVar2 = divps(in_XMM1,auVar2);
  EditorZoomWidget::set_zoom(fVar1 * param_1);
  auVar4._0_4_ = EditorZoomWidget::get_zoom();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = in_XMM1._0_8_;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_8_ = _LC91;
  auVar4 = divps(auVar3,auVar4);
  fVar1 = (auVar2._0_4_ - auVar4._0_4_) + (float)*(undefined8 *)(param_2 + 0xa80);
  *(ulong *)(param_2 + 0xa80) =
       CONCAT44((auVar2._4_4_ - auVar4._4_4_) +
                (float)((ulong)*(undefined8 *)(param_2 + 0xa80) >> 0x20),fVar1);
  Range::set_value_no_signal((double)fVar1);
  Range::set_value_no_signal((double)*(float *)(param_2 + 0xa84));
  _update_zoom_and_pan(param_2,false);
  return;
}



/* Sprite2DEditor::_center_view() */

void __thiscall Sprite2DEditor::_center_view(Sprite2DEditor *this)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Sprite2D::get_texture();
  if (local_28 == (Object *)0x0) {
    _err_print_error("_center_view","editor/plugins/sprite_2d_editor_plugin.cpp",0x1e3,
                     "Condition \"tex.is_null()\" is true.",0,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_28);
  }
  else {
    uVar4 = (**(code **)(*(long *)local_28 + 0x1d8))();
    fVar2 = (float)EditorScale::get_scale();
    fVar2 = _LC95 * fVar2;
    uVar5 = Control::get_size();
    fVar3 = ((float)((ulong)uVar5 >> 0x20) - fVar2) / (float)((ulong)uVar4 >> 0x20);
    fVar2 = ((float)uVar5 - fVar2) / (float)uVar4;
    if (fVar3 <= fVar2) {
      fVar2 = fVar3;
    }
    EditorZoomWidget::set_zoom(fVar2);
    _update_zoom_and_pan(this,false);
    fVar2 = (float)EditorZoomWidget::get_zoom();
    uVar4 = Control::get_size();
    uVar5 = (**(code **)(*(long *)local_28 + 0x1d8))();
    fVar3 = ((float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar4 >> 0x20) / fVar2) * _LC98;
    Range::set_value_no_signal((double)(((float)uVar5 - (float)uVar4 / fVar2) * _LC98));
    Range::set_value_no_signal((double)fVar3);
    _update_zoom_and_pan(this,false);
    if (local_28 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_28);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::_notification(int) */

void __thiscall Sprite2DEditor::_notification(Sprite2DEditor *this,int param_1)

{
  undefined8 uVar1;
  Viewport *pVVar2;
  Ref *pRVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  String *pSVar8;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
    pRVar3 = *(Ref **)(this + 0x9d8);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    iVar6 = MenuButton::get_popup();
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    PopupMenu::set_item_icon(iVar6,(Ref *)0x0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    iVar6 = MenuButton::get_popup();
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    PopupMenu::set_item_icon(iVar6,(Ref *)0x1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    iVar6 = MenuButton::get_popup();
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    PopupMenu::set_item_icon(iVar6,(Ref *)0x2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    iVar6 = MenuButton::get_popup();
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    PopupMenu::set_item_icon(iVar6,(Ref *)0x3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
    goto LAB_00102e46;
  }
  if (param_1 < 0x2e) {
    if (param_1 != 10) {
      if (param_1 != 0xd) goto LAB_00102e46;
      Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa68),0xb,0,0);
      Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa60),0xc,0,0);
      (**(code **)(**(long **)(this + 0xa60) + 0x300))();
      (**(code **)(**(long **)(this + 0xa68) + 0x300))();
      Control::set_anchor_and_offset(_LC20,*(undefined8 *)(this + 0xa60),2,1);
      Control::set_anchor_and_offset(_LC20,*(undefined8 *)(this + 0xa68),3,1);
      goto LAB_00102c8b;
    }
  }
  else {
    if (param_1 != 10000) goto LAB_00102e46;
LAB_00102c8b:
    pSVar8 = (String *)EditorSettings::get_singleton();
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"editors/panning");
    cVar4 = EditorSettings::check_changed_settings_in_group(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar4 == '\0') goto LAB_00102e46;
  }
  uVar1 = *(undefined8 *)(this + 0xa78);
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"editors/panning/simple_panning");
  _EDITOR_GET((String *)local_58);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"canvas_item_editor/pan_view");
  ED_GET_SHORTCUT((String *)&local_88);
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"editors/panning/sub_editors_panning_scheme");
  _EDITOR_GET((String *)local_78);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_78);
  ViewPanner::setup(uVar1,iVar6,(String *)&local_88,bVar5);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (((local_88 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
    (**(code **)(*(long *)local_88 + 0x140))(local_88);
    Memory::free_static(local_88,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pVVar2 = *(Viewport **)(this + 0xa78);
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"editors/panning/warped_mouse_panning");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  ViewPanner::setup_warped_panning(pVVar2,SUB81(*(undefined8 *)(this + 0x9f0),0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00102e46:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Sprite2DEditor::_bind_methods() */

void Sprite2DEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<Sprite2DEditor,Node*,Node*>(_add_as_sibling_or_child);
  StringName::StringName((StringName *)local_68,"_add_as_sibling_or_child",false);
  local_58 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar5 = local_58 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sprite2DEditor::_debug_uv_draw() */

void __thiscall Sprite2DEditor::_debug_uv_draw(Sprite2DEditor *this)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  Object *local_70;
  Color local_68 [8];
  Vector2 *local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  fVar1 = *(float *)(this + 0xa88);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = CONCAT44(fVar1,fVar1);
  local_50 = CONCAT44((float)((uint)((ulong)*(undefined8 *)(this + 0xa80) >> 0x20) ^ _LC111._4_4_) *
                      fVar1,(float)((uint)*(undefined8 *)(this + 0xa80) ^ (uint)_LC111) * fVar1);
  CanvasItem::draw_set_transform(*(Vector2 **)(this + 0x9f8),0.0,(Color *)&local_50);
  Sprite2D::get_texture();
  if (local_70 == (Object *)0x0) {
    _err_print_error("_debug_uv_draw","editor/plugins/sprite_2d_editor_plugin.cpp",0x1ce,
                     "Condition \"tex.is_null()\" is true.",0,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  }
  else {
    local_50 = 0;
    local_48 = CONCAT44(_LC20,_LC20);
    uStack_40 = CONCAT44(_LC20,_LC20);
    CanvasItem::draw_texture(*(Ref **)(this + 0x9f8),(Ref<Texture2D> *)&local_70,(Color *)&local_50)
    ;
    local_48 = CONCAT44(_UNK_00115be4,_LC20);
    uStack_40 = _UNK_00115be8;
    bVar5 = SUB81(&local_48,0);
    if (*(int *)(this + 0x9c8) == 0) {
      if ((*(long *)(this + 0xa08) != 0) && (0 < *(long *)(*(long *)(this + 0xa08) + -8))) {
        CanvasItem::draw_multiline(*(Vector **)(this + 0x9f8),(Color *)(this + 0xa00),_LC115,bVar5);
      }
    }
    else if ((*(int *)(this + 0x9c8) - 1U < 3) && (lVar6 = *(long *)(this + 0xa18), lVar6 != 0)) {
      lVar4 = *(long *)(lVar6 + -8);
      lVar7 = 0;
      if (0 < lVar4) {
        while (lVar7 < lVar4) {
          local_60[0] = (Vector2 *)0x0;
          lVar6 = lVar6 + lVar7 * 0x10;
          if (*(long *)(lVar6 + 8) != 0) {
            CowData<Vector2>::_ref((CowData<Vector2> *)local_60,(CowData *)(lVar6 + 8));
          }
          CanvasItem::draw_polyline(*(Vector **)(this + 0x9f8),local_68,_LC115,bVar5);
          if (local_60[0] == (Vector2 *)0x0) {
            lVar6 = 0;
            lVar4 = -1;
LAB_001035e0:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar6 = *(long *)(local_60[0] + -8);
          lVar4 = lVar6 + -1;
          if (lVar4 < 0) goto LAB_001035e0;
          lVar7 = lVar7 + 1;
          CanvasItem::draw_line
                    (*(Vector2 **)(this + 0x9f8),local_60[0],(Color *)(local_60[0] + lVar4 * 8),
                     _LC115,bVar5);
          CowData<Vector2>::_unref((CowData<Vector2> *)local_60);
          lVar6 = *(long *)(this + 0xa18);
          if (lVar6 == 0) break;
          lVar4 = *(long *)(lVar6 + -8);
        }
      }
    }
    if (((local_70 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
      (**(code **)(*(long *)local_70 + 0x140))(local_70);
      Memory::free_static(local_70,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Sprite2DEditor::_create_collision_polygon_2d_node() */

void __thiscall Sprite2DEditor::_create_collision_polygon_2d_node(Sprite2DEditor *this)

{
  Variant *pVVar1;
  undefined8 uVar2;
  Object *pOVar3;
  CollisionPolygon2D *this_00;
  Object *pOVar4;
  long lVar5;
  StringName *pSVar6;
  long lVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  long local_108;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar7 = *(long *)(this + 0xa28);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)(this + 0x9e8);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"");
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"Invalid geometry, can\'t create collision polygon.");
    TTR((String *)&local_b8,(String *)&local_d0);
    AcceptDialog::set_text(uVar2,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    local_a8 = (Variant *)0x0;
    Window::popup_centered(*(Vector2i **)(this + 0x9e8));
  }
  else {
    local_108 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= local_108) break;
      local_c0 = 0;
      lVar7 = lVar7 + local_108 * 0x10;
      if (*(long *)(lVar7 + 8) != 0) {
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_c0,(CowData *)(lVar7 + 8));
      }
      this_00 = (CollisionPolygon2D *)operator_new(0x5b8,"");
      CollisionPolygon2D::CollisionPolygon2D(this_00);
      postinitialize_handler((Object *)this_00);
      CollisionPolygon2D::set_polygon((Vector *)this_00);
      pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
      uVar2 = *(undefined8 *)(this + 0x9d0);
      local_b8 = "";
      local_d0 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "Create CollisionPolygon2D Sibling";
      local_d8 = 0;
      local_b0 = 0x21;
      String::parse_latin1((StrRange *)&local_d8);
      TTR((String *)&local_b8,(String *)&local_d8);
      EditorUndoRedoManager::create_action(pOVar4,(String *)&local_b8,0,uVar2,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      pOVar3 = *(Object **)(this + 0x9d0);
      StringName::StringName((StringName *)&local_b8,"_add_as_sibling_or_child",false);
      pVVar8 = (Variant *)local_40;
      Variant::Variant((Variant *)local_88,pOVar3);
      Variant::Variant((Variant *)local_70,(Object *)this_00);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp
                (pOVar4,(StringName *)this,(Variant **)&local_b8,(int)&local_a8);
      do {
        pVVar1 = pVVar8 + -0x18;
        pVVar8 = pVVar8 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar8 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::add_do_reference(pOVar4);
      StringName::StringName((StringName *)&local_b8,"remove_child",false);
      lVar7 = *(long *)(this + 0x9d0);
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      lVar5 = SceneTree::get_edited_scene_root();
      if (lVar7 == lVar5) {
        if (*(long *)(this + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        pSVar6 = (StringName *)SceneTree::get_edited_scene_root();
      }
      else {
        pSVar6 = (StringName *)Node::get_parent();
      }
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar6,(Variant **)&local_b8,(int)&local_a8);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_c0);
      lVar7 = *(long *)(this + 0xa28);
      local_108 = local_108 + 1;
    } while (lVar7 != 0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Removing unreachable block (ram,0x00104119) */
/* WARNING: Removing unreachable block (ram,0x0010435d) */
/* WARNING: Removing unreachable block (ram,0x0010436d) */
/* WARNING: Removing unreachable block (ram,0x00103d5c) */
/* WARNING: Removing unreachable block (ram,0x00104200) */
/* WARNING: Removing unreachable block (ram,0x00104212) */
/* WARNING: Removing unreachable block (ram,0x00104231) */
/* Sprite2DEditor::_create_light_occluder_2d_node() */

void __thiscall Sprite2DEditor::_create_light_occluder_2d_node(Sprite2DEditor *this)

{
  Variant *pVVar1;
  undefined8 uVar2;
  char cVar3;
  OccluderPolygon2D *this_00;
  long lVar4;
  LightOccluder2D *this_01;
  Object *pOVar5;
  long lVar6;
  StringName *pSVar7;
  long lVar8;
  Object *pOVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_130;
  CowData<Vector2> *local_118;
  OccluderPolygon2D *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar8 = *(long *)(this + 0xa28);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 == 0) {
    uVar2 = *(undefined8 *)(this + 0x9e8);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"Invalid geometry, can\'t create light occluder.");
    TTR((String *)&local_b8,(String *)&local_d8);
    AcceptDialog::set_text(uVar2,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    local_a8 = (Variant *)0x0;
    Window::popup_centered(*(Vector2i **)(this + 0x9e8));
  }
  else {
    local_130 = 0;
    do {
      if (*(long *)(lVar8 + -8) <= local_130) break;
      local_d0 = 0;
      lVar8 = lVar8 + local_130 * 0x10;
      lVar6 = *(long *)(lVar8 + 8);
      if (lVar6 != 0) {
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_d0,(CowData *)(lVar8 + 8));
        lVar6 = local_d0;
      }
      local_f0 = (OccluderPolygon2D *)0x0;
      this_00 = (OccluderPolygon2D *)operator_new(0x278,"");
      OccluderPolygon2D::OccluderPolygon2D(this_00);
      postinitialize_handler((Object *)this_00);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
LAB_00103d75:
        if (lVar6 != 0) goto LAB_00103d87;
LAB_00104175:
        local_c0 = 0;
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_c0,0);
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_c0);
      }
      else {
        pOVar9 = (Object *)0x0;
        if ((this_00 != (OccluderPolygon2D *)0x0) &&
           (cVar3 = RefCounted::reference(), pOVar9 = (Object *)this_00, local_f0 = this_00,
           cVar3 == '\0')) {
          local_f0 = (OccluderPolygon2D *)0x0;
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar9), cVar3 == '\0'))
        goto LAB_00103d75;
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        if (lVar6 == 0) goto LAB_00104175;
LAB_00103d87:
        local_c0 = 0;
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_c0,*(long *)(lVar6 + -8));
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_c0);
        lVar8 = *(long *)(lVar6 + -8);
        lVar4 = 0;
        if (0 < lVar8) {
          do {
            *(undefined8 *)(local_c0 + lVar4) = *(undefined8 *)(lVar6 + lVar4);
            lVar4 = lVar4 + 8;
          } while (lVar8 * 8 - lVar4 != 0);
        }
      }
      local_118 = (CowData<Vector2> *)&local_c0;
      OccluderPolygon2D::set_polygon((Vector *)local_f0);
      this_01 = (LightOccluder2D *)operator_new(0x5a0,"");
      LightOccluder2D::LightOccluder2D(this_01);
      postinitialize_handler((Object *)this_01);
      LightOccluder2D::set_occluder_polygon((Ref *)this_01);
      pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
      uVar2 = *(undefined8 *)(this + 0x9d0);
      local_b8 = "";
      local_e0 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "Create LightOccluder2D Sibling";
      local_e8 = 0;
      local_b0 = 0x1e;
      String::parse_latin1((StrRange *)&local_e8);
      TTR((String *)&local_b8,(String *)&local_e8);
      EditorUndoRedoManager::create_action(pOVar5,(String *)&local_b8,0,uVar2,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      pOVar9 = *(Object **)(this + 0x9d0);
      StringName::StringName((StringName *)&local_b8,"_add_as_sibling_or_child",false);
      pVVar10 = (Variant *)local_40;
      Variant::Variant((Variant *)local_88,pOVar9);
      Variant::Variant((Variant *)local_70,(Object *)this_01);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp
                (pOVar5,(StringName *)this,(Variant **)&local_b8,(int)&local_a8);
      do {
        pVVar1 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::add_do_reference(pOVar5);
      StringName::StringName((StringName *)&local_b8,"remove_child",false);
      lVar8 = *(long *)(this + 0x9d0);
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      lVar6 = SceneTree::get_edited_scene_root();
      if (lVar8 == lVar6) {
        if (*(long *)(this + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        pSVar7 = (StringName *)SceneTree::get_edited_scene_root();
      }
      else {
        pSVar7 = (StringName *)Node::get_parent();
      }
      Variant::Variant((Variant *)local_88,(Object *)this_01);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar7,(Variant **)&local_b8,(int)&local_a8);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
      CowData<Vector2>::_unref(local_118);
      if (((local_f0 != (OccluderPolygon2D *)0x0) &&
          (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler((Object *)local_f0), cVar3 != '\0')) {
        (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
        Memory::free_static(local_f0,false);
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
      lVar8 = *(long *)(this + 0xa28);
      local_130 = local_130 + 1;
    } while (lVar8 != 0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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



/* Sprite2DEditor::_convert_to_polygon_2d_node() */

void __thiscall Sprite2DEditor::_convert_to_polygon_2d_node(Sprite2DEditor *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  Polygon2D *this_00;
  long lVar8;
  long lVar9;
  Variant *pVVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long in_FS_OFFSET;
  Array local_b0 [16];
  long local_a0 [2];
  long local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  Vector local_68 [8];
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa28) == 0) {
    uVar3 = *(undefined8 *)(this + 0x9e8);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Invalid geometry, can\'t create polygon.");
    TTR((String *)local_68,(String *)&local_88);
    AcceptDialog::set_text(uVar3,(String *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9e8));
  }
  else {
    this_00 = (Polygon2D *)operator_new(0x640,"");
    Polygon2D::Polygon2D(this_00);
    postinitialize_handler((Object *)this_00);
    lVar8 = *(long *)(this + 0xa28);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      if (*(long *)(lVar8 + -8) < 1) {
        iVar14 = 0;
      }
      else {
        iVar14 = 0;
        lVar12 = *(long *)(lVar8 + -8) * 0x10 + lVar8;
        do {
          while (plVar1 = (long *)(lVar8 + 8), *plVar1 != 0) {
            lVar8 = lVar8 + 0x10;
            iVar14 = iVar14 + *(int *)(*plVar1 + -8);
            if (lVar12 == lVar8) goto LAB_00104630;
          }
          lVar8 = lVar8 + 0x10;
        } while (lVar12 != lVar8);
      }
LAB_00104630:
      lVar8 = (long)iVar14;
    }
    local_a0[0] = 0;
    CowData<Vector2>::resize<false>((CowData<Vector2> *)local_a0,lVar8);
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_a0);
    lVar5 = local_a0[0];
    local_90 = 0;
    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_90,lVar8);
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    lVar6 = local_90;
    Array::Array(local_b0);
    iVar15 = (int)local_b0;
    Array::resize(iVar15);
    lVar8 = *(long *)(this + 0xa28);
    iVar14 = 0;
    for (lVar12 = 0; (lVar8 != 0 && (lVar12 < *(long *)(lVar8 + -8))); lVar12 = lVar12 + 1) {
      local_80 = (undefined8 *)0x0;
      lVar8 = lVar8 + lVar12 * 0x10;
      if (*(long *)(lVar8 + 8) != 0) {
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_80,(CowData *)(lVar8 + 8));
      }
      lVar8 = *(long *)(this + 0xa18);
      lVar9 = lVar12;
      if (lVar8 == 0) {
        lVar16 = 0;
LAB_001049b8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar16,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar16 = *(long *)(lVar8 + -8);
      if (lVar16 <= lVar12) goto LAB_001049b8;
      local_70 = 0;
      lVar8 = lVar8 + lVar12 * 0x10;
      if (*(long *)(lVar8 + 8) != 0) {
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_70,(CowData *)(lVar8 + 8));
      }
      puVar7 = local_80;
      local_60 = 0;
      iVar13 = iVar14;
      if (local_80 == (undefined8 *)0x0) {
        CowData<int>::resize<false>((CowData<int> *)&local_60,0);
        CowData<int>::_copy_on_write((CowData<int> *)&local_60);
      }
      else {
        CowData<int>::resize<false>((CowData<int> *)&local_60,local_80[-1]);
        CowData<int>::_copy_on_write((CowData<int> *)&local_60);
        lVar8 = puVar7[-1];
        puVar2 = (undefined8 *)(lVar5 + (long)iVar14 * 8);
        if (0 < lVar8) {
          *puVar2 = *puVar7;
          if (local_70 == 0) {
            lVar9 = 0;
            lVar16 = 0;
            goto LAB_001049b8;
          }
          lVar16 = *(long *)(local_70 + -8);
          lVar9 = 0;
          while( true ) {
            if (lVar16 <= lVar9) goto LAB_001049b8;
            *(undefined8 *)((long)iVar14 * 8 + lVar6 + lVar9 * 8) =
                 *(undefined8 *)(local_70 + lVar9 * 8);
            *(int *)(local_60 + lVar9 * 4) = iVar13;
            lVar9 = lVar9 + 1;
            iVar13 = iVar14 + (int)lVar9;
            if (lVar8 <= lVar9) break;
            puVar2[lVar9] = puVar7[lVar9];
          }
        }
      }
      Variant::Variant((Variant *)&local_58,local_68);
      pVVar10 = (Variant *)Array::operator[](iVar15);
      if (pVVar10 == (Variant *)&local_58) {
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar10 = 0;
        *(int *)pVVar10 = (int)local_58;
        *(undefined8 *)(pVVar10 + 8) = local_50;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
      }
      CowData<int>::_unref((CowData<int> *)&local_60);
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_70);
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_80);
      lVar8 = *(long *)(this + 0xa28);
      iVar14 = iVar13;
    }
    Polygon2D::set_uv((Vector *)this_00);
    Polygon2D::set_polygon((Vector *)this_00);
    Polygon2D::set_polygons((Array *)this_00);
    uVar11 = EditorUndoRedoManager::get_singleton();
    uVar3 = *(undefined8 *)(this + 0x9d0);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Convert to Polygon2D");
    TTR((String *)local_68,(String *)&local_88);
    EditorUndoRedoManager::create_action(uVar11,(String *)local_68,0,uVar3,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    SceneTreeDock::replace_node(SceneTreeDock::singleton,*(Node **)(this + 0x9d0));
    EditorUndoRedoManager::commit_action(SUB81(uVar11,0));
    Array::~Array(local_b0);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_90);
    CowData<Vector2>::_unref((CowData<Vector2> *)local_a0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Sprite2DEditor::_create_node() */

void __thiscall Sprite2DEditor::_create_node(Sprite2DEditor *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x9c8);
  if (uVar1 == 2) {
    _create_collision_polygon_2d_node(this);
    return;
  }
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      _convert_to_polygon_2d_node(this);
      return;
    }
    _convert_to_mesh_2d_node(this);
    return;
  }
  if (uVar1 == 3) {
    _create_light_occluder_2d_node(this);
    return;
  }
  return;
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<Vector2>>::_copy_on_write(CowData<Vector<Vector2>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<Vector2> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<Vector2> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<Vector2>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<Vector2> >::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector<Vector2>>::resize<false>(CowData<Vector<Vector2>> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar5 = 0;
    lVar9 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar5 * 0x10;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar10 = param_1 * 0x10 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar12 = uVar10 + 1;
    if (lVar12 != 0) {
      uVar11 = param_1;
      if (param_1 <= lVar5) {
        while( true ) {
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (*(ulong *)(lVar5 + -8) <= uVar11) break;
          CowData<Vector2>::_unref((CowData<Vector2> *)(lVar5 + 8 + uVar11 * 0x10));
          uVar11 = uVar11 + 1;
        }
        if (lVar12 != lVar9) {
          iVar2 = _realloc(this,lVar12);
          if (iVar2 != 0) {
            return;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return;
      }
      if (lVar12 == lVar9) {
LAB_00104f33:
        puVar7 = *(undefined8 **)this;
        if (puVar7 == (undefined8 *)0x0) {
          FUN_00110d50();
          return;
        }
        lVar5 = puVar7[-1];
        if (param_1 <= lVar5) goto LAB_00104e89;
      }
      else {
        if (lVar5 != 0) {
          iVar2 = _realloc(this,lVar12);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00104f33;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00104fb2;
        }
        puVar7 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar7;
        lVar5 = 0;
      }
      puVar13 = puVar7 + param_1 * 2;
      puVar3 = puVar7 + lVar5 * 2;
      if (((int)puVar13 - (int)puVar3 & 0x10U) != 0) {
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
        if (puVar3 == puVar13) goto LAB_00104e89;
      }
      do {
        puVar3[1] = 0;
        puVar4 = puVar3 + 4;
        puVar3[3] = 0;
        puVar3 = puVar4;
      } while (puVar4 != puVar13);
LAB_00104e89:
      puVar7[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00104fb2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >
   std::transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1
   const&)#1}>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   __gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1 const&)#1}) [clone .isra.0] */

void std::
     transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
               (long *param_1,long *param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double *pdVar14;
  long in_FS_OFFSET;
  double dVar15;
  double dVar16;
  uint *in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double local_a8;
  double local_a0;
  long local_68;
  long lStack_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    do {
      local_48 = (long *)0x0;
      local_58 = (undefined1  [16])0x0;
      if (in_stack_00000018 == 0.0 || in_stack_00000010 == 0.0) {
        *in_stack_00000008 = *in_stack_00000008 | 2;
        if (in_stack_00000010 == 0.0) {
          if (in_stack_00000018 == 0.0) {
            local_a8 = _LC40;
            local_a0 = local_a8;
          }
          else {
            local_a8 = _LC40;
            local_a0 = in_stack_00000018;
          }
        }
        else {
          local_a8 = in_stack_00000010;
          local_a0 = _LC40;
        }
      }
      else {
        local_a0 = in_stack_00000018;
        local_a8 = in_stack_00000010;
      }
      vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve
                ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                 local_58,param_1[1] - *param_1 >> 4);
      pdVar1 = (double *)param_1[1];
      for (pdVar14 = (double *)*param_1; pdVar1 != pdVar14; pdVar14 = pdVar14 + 2) {
        while( true ) {
          dVar15 = round(local_a8 * *pdVar14);
          dVar16 = round(local_a0 * pdVar14[1]);
          local_68 = (long)dVar15;
          lStack_60 = (long)dVar16;
          if ((long *)local_58._8_8_ != local_48) break;
          pdVar14 = pdVar14 + 2;
          vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
          _M_realloc_insert<Clipper2Lib::Point<long>>
                    ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                     local_58,local_58._8_8_,&local_68);
          if (pdVar1 == pdVar14) goto LAB_001051a8;
        }
        *(long *)local_58._8_8_ = local_68;
        *(long *)(local_58._8_8_ + 8) = lStack_60;
        local_58._8_8_ = (long *)(local_58._8_8_ + 0x10);
      }
LAB_001051a8:
      puVar2 = (undefined8 *)param_3[1];
      puVar13 = (undefined8 *)param_3[2];
      if (puVar2 == puVar13) {
        puVar3 = (undefined8 *)*param_3;
        puVar11 = (undefined8 *)((long)puVar2 - (long)puVar3);
        uVar6 = ((long)puVar11 >> 3) * -0x5555555555555555;
        if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar2 == puVar3) {
          uVar9 = uVar6 + 1;
          if (0xfffffffffffffffe < uVar6) goto LAB_001053c8;
          if (0x555555555555555 < uVar9) {
            uVar9 = 0x555555555555555;
          }
          uVar9 = uVar9 * 0x18;
LAB_00105351:
          puVar8 = (undefined8 *)operator_new(uVar9);
          uVar4 = local_58._0_8_;
          uVar5 = local_58._8_8_;
          local_58 = (undefined1  [16])0x0;
          puVar11 = (undefined8 *)((long)puVar11 + (long)puVar8);
          lVar10 = uVar9 + (long)puVar8;
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          puVar13 = (undefined8 *)param_3[2];
          puVar11[2] = local_48;
          puVar11 = puVar8 + 3;
          local_48 = (long *)0x0;
          puVar7 = puVar3;
          puVar12 = puVar8;
          if (puVar2 != puVar3) goto LAB_001052c0;
        }
        else {
          uVar9 = ((long)puVar11 >> 3) * 0x5555555555555556;
          if (uVar9 < uVar6) {
LAB_001053c8:
            uVar9 = 0x7ffffffffffffff8;
            goto LAB_00105351;
          }
          if (uVar9 != 0) {
            if (0x555555555555555 < uVar9) {
              uVar9 = 0x555555555555555;
            }
            uVar9 = uVar9 * 0x18;
            goto LAB_00105351;
          }
          lVar10 = 0;
          puVar11[2] = local_48;
          *puVar11 = local_58._0_8_;
          puVar11[1] = local_58._8_8_;
          puVar8 = (undefined8 *)0x0;
          puVar7 = puVar3;
          puVar12 = puVar8;
LAB_001052c0:
          do {
            uVar5 = puVar7[1];
            uVar4 = puVar7[2];
            puVar11 = puVar7 + 3;
            *puVar8 = *puVar7;
            puVar8[1] = uVar5;
            puVar8[2] = uVar4;
            puVar7 = puVar11;
            puVar8 = puVar8 + 3;
          } while (puVar2 != puVar11);
          puVar11 = (undefined8 *)
                    ((long)puVar12 +
                    ((long)puVar2 + (-0x18 - (long)puVar3) & 0xfffffffffffffff8U) + 0x30);
          puVar8 = puVar12;
        }
        if (puVar3 != (undefined8 *)0x0) {
          operator_delete(puVar3,(long)puVar13 - (long)puVar3);
        }
        *param_3 = puVar8;
        param_3[1] = puVar11;
        param_3[2] = lVar10;
      }
      else {
        *puVar2 = local_58._0_8_;
        puVar2[1] = local_58._8_8_;
        puVar2[2] = local_48;
        param_3[1] = puVar2 + 3;
      }
      param_1 = param_1 + 3;
    } while (param_2 != param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > > std::transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > > >, std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > >, Clipper2Lib::ScalePaths<double,
   long>(std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > > const&, double, double, int&)::{lambda(auto:1
   const&)#1}>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > > >, __gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > > >, std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > >, Clipper2Lib::ScalePaths<double,
   long>(std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > > const&, double, double, int&)::{lambda(auto:1 const&)#1}) [clone .isra.0] */

void std::
     transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const*,std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,Clipper2Lib::ScalePaths<double,long>(std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
               (long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  uint *in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    do {
      local_48 = (double *)0x0;
      local_58 = (undefined1  [16])0x0;
      dVar17 = in_stack_00000010;
      dVar16 = in_stack_00000018;
      if (((in_stack_00000010 == 0.0 || in_stack_00000018 == 0.0) &&
          (*in_stack_00000008 = *in_stack_00000008 | 2, dVar17 = in_stack_00000010, dVar16 = _LC40,
          in_stack_00000010 == 0.0)) &&
         (dVar17 = _LC40, dVar16 = in_stack_00000018, in_stack_00000018 == 0.0)) {
        dVar16 = _LC40;
      }
      plVar15 = (long *)param_1[1];
      plVar8 = (long *)*param_1;
      uVar7 = (long)plVar15 - (long)plVar8;
      if (0x7ffffffffffffff0 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::reserve");
      }
      if (uVar7 != 0) {
        local_58._8_8_ = operator_new(uVar7);
        plVar15 = (long *)param_1[1];
        local_48 = (double *)(local_58._8_8_ + uVar7);
        plVar8 = (long *)*param_1;
        local_58._0_8_ = local_58._8_8_;
      }
      for (; plVar8 != plVar15; plVar8 = plVar8 + 2) {
        while( true ) {
          local_68 = (double)*plVar8 * dVar17;
          dStack_60 = (double)plVar8[1] * dVar16;
          if ((double *)local_58._8_8_ != local_48) break;
          plVar8 = plVar8 + 2;
          vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
          _M_realloc_insert<Clipper2Lib::Point<double>>
                    ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                      *)local_58,local_58._8_8_,&local_68);
          if (plVar15 == plVar8) goto LAB_001055b0;
        }
        *(double *)local_58._8_8_ = local_68;
        *(double *)(local_58._8_8_ + 8) = dStack_60;
        local_58._8_8_ = (double *)(local_58._8_8_ + 0x10);
      }
LAB_001055b0:
      puVar9 = (undefined8 *)param_3[1];
      puVar14 = (undefined8 *)param_3[2];
      if (puVar9 == puVar14) {
        puVar1 = (undefined8 *)*param_3;
        puVar12 = (undefined8 *)((long)puVar9 - (long)puVar1);
        uVar7 = ((long)puVar12 >> 3) * -0x5555555555555555;
        if (uVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar9 == puVar1) {
          uVar10 = uVar7 + 1;
          if (0xfffffffffffffffe < uVar7) goto LAB_00105752;
          if (0x555555555555555 < uVar10) {
            uVar10 = 0x555555555555555;
          }
          uVar10 = uVar10 * 0x18;
LAB_0010575c:
          puVar6 = (undefined8 *)operator_new(uVar10);
          pdVar4 = local_48;
          uVar2 = local_58._0_8_;
          uVar3 = local_58._8_8_;
          puVar14 = (undefined8 *)param_3[2];
          local_58 = (undefined1  [16])0x0;
          puVar12 = (undefined8 *)((long)puVar12 + (long)puVar6);
          lVar11 = uVar10 + (long)puVar6;
          local_48 = (double *)0x0;
          *puVar12 = uVar2;
          puVar12[1] = uVar3;
          puVar12[2] = pdVar4;
          puVar12 = puVar1;
          puVar13 = puVar6;
          if (puVar9 != puVar1) goto LAB_001056f0;
          puVar9 = puVar6 + 3;
        }
        else {
          uVar10 = ((long)puVar12 >> 3) * 0x5555555555555556;
          if (uVar10 < uVar7) {
LAB_00105752:
            uVar10 = 0x7ffffffffffffff8;
            goto LAB_0010575c;
          }
          if (uVar10 != 0) {
            if (0x555555555555555 < uVar10) {
              uVar10 = 0x555555555555555;
            }
            uVar10 = uVar10 * 0x18;
            goto LAB_0010575c;
          }
          lVar11 = 0;
          puVar12[2] = local_48;
          *puVar12 = local_58._0_8_;
          puVar12[1] = local_58._8_8_;
          puVar6 = (undefined8 *)0x0;
          puVar12 = puVar1;
          puVar13 = puVar6;
LAB_001056f0:
          do {
            uVar3 = puVar12[1];
            uVar2 = puVar12[2];
            puVar5 = puVar12 + 3;
            *puVar6 = *puVar12;
            puVar6[1] = uVar3;
            puVar6[2] = uVar2;
            puVar12 = puVar5;
            puVar6 = puVar6 + 3;
          } while (puVar9 != puVar5);
          puVar9 = (undefined8 *)
                   ((long)puVar13 +
                   ((long)puVar9 + (-0x18 - (long)puVar1) & 0xfffffffffffffff8U) + 0x30);
          puVar6 = puVar13;
        }
        if (puVar1 != (undefined8 *)0x0) {
          operator_delete(puVar1,(long)puVar14 - (long)puVar1);
        }
        *param_3 = puVar6;
        param_3[1] = puVar9;
        param_3[2] = lVar11;
      }
      else {
        *puVar9 = local_58._0_8_;
        puVar9[1] = local_58._8_8_;
        puVar9[2] = local_48;
        param_3[1] = puVar9 + 3;
      }
      param_1 = param_1 + 3;
    } while (param_2 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* expand(Vector<Vector2> const&, Rect2i const&, float) */

Vector * expand(Vector *param_1,Rect2i *param_2,float param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*__src) [16];
  long lVar6;
  void *pvVar7;
  undefined1 (*pauVar8) [16];
  void *pvVar9;
  undefined1 (*pauVar10) [16];
  void *pvVar11;
  long lVar12;
  undefined8 *in_RDX;
  ulong __n;
  undefined1 (*pauVar13) [16];
  Clipper2Lib *unaff_R13;
  ulong uVar14;
  long in_FS_OFFSET;
  float fVar15;
  int iVar16;
  int iVar17;
  undefined1 *local_108;
  ulong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined1 (*local_b8) [16];
  undefined1 (*local_b0) [16];
  undefined1 (*local_a8) [16];
  undefined1 (*local_98) [16];
  undefined1 *local_90;
  undefined1 *local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  Vector<Vector2> *local_50;
  Vector<Vector2> *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 8) == 0) ||
     (uVar14 = *(ulong *)(*(long *)(param_2 + 8) + -8), (int)uVar14 < 2)) {
    _err_print_error("expand","editor/plugins/sprite_2d_editor_plugin.cpp",0x42,
                     "Condition \"size < 2\" is true. Returning: Vector<Vector2>()",0,0);
    *(undefined8 *)(param_1 + 8) = 0;
    goto LAB_00105d93;
  }
  if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  __n = uVar14 * 0x10;
  __src = (undefined1 (*) [16])operator_new(__n);
  pauVar10 = __src;
  if ((__n & 0x10) == 0) goto LAB_001058c0;
  *__src = (undefined1  [16])0x0;
  for (pauVar10 = __src + 1; pauVar10 != __src + uVar14; pauVar10 = pauVar10 + 2) {
LAB_001058c0:
    *pauVar10 = (undefined1  [16])0x0;
    pauVar10[1] = (undefined1  [16])0x0;
  }
  lVar12 = *(long *)(param_2 + 8);
  if ((lVar12 != 0) && (lVar3 = *(long *)(lVar12 + -8), 0 < lVar3)) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar12 + lVar6);
      *(double *)(*__src + lVar6 * 2) = (double)(float)uVar2;
      *(double *)((long)(*__src + lVar6 * 2) + 8) = (double)(float)((ulong)uVar2 >> 0x20);
      lVar6 = lVar6 + 8;
    } while (lVar3 << 3 != lVar6);
  }
  local_108 = (undefined1 *)(double)param_3;
  pvVar7 = operator_new(__n);
  pauVar13 = __src;
  memcpy(pvVar7,__src,__n);
  pauVar8 = (undefined1 (*) [16])operator_new(0x18);
  pauVar10 = (undefined1 (*) [16])(pauVar8[1] + 8);
  *(undefined8 *)pauVar8[1] = 0;
  *pauVar8 = (undefined1  [16])0x0;
  local_b8 = pauVar8;
  local_a8 = pauVar10;
  if (__n < 0x7ffffffffffffff1) {
    pvVar9 = operator_new(__n);
    *(void **)*pauVar8 = pvVar9;
    *(void **)pauVar8[1] = (void *)((long)pvVar9 + __n);
    memcpy(pvVar9,pvVar7,__n);
    *(void **)(*pauVar8 + 8) = (void *)((long)pvVar9 + __n);
    unaff_R13 = (Clipper2Lib *)&local_b8;
    local_b0 = pauVar10;
    Clipper2Lib::InflatePaths(local_108,_LC37,0,&local_d8,unaff_R13,3,0,1);
    pvVar9 = *(void **)*pauVar8;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9,*(long *)pauVar8[1] - (long)pvVar9);
    }
    operator_delete(pauVar8,0x18);
    operator_delete(pvVar7,__n);
    puVar5 = local_d8;
    if (local_d0 != local_d8) {
      pauVar13 = (undefined1 (*) [16])local_d8[1];
      pauVar10 = (undefined1 (*) [16])*local_d8;
      iVar16 = (int)*in_RDX;
      iVar17 = (int)((ulong)*in_RDX >> 0x20);
      local_78 = (double)iVar16;
      dStack_70 = (double)iVar17;
      local_e0 = (long)pauVar13 - (long)pauVar10;
      local_68 = (double)((int)in_RDX[1] + iVar16);
      dStack_60 = (double)((int)((ulong)in_RDX[1] >> 0x20) + iVar17);
      if (local_e0 == 0) goto LAB_00105dcf;
      if (0x7ffffffffffffff0 < local_e0) goto LAB_00105dca;
      pvVar7 = operator_new(local_e0);
      pauVar13 = (undefined1 (*) [16])puVar5[1];
      pauVar10 = (undefined1 (*) [16])*puVar5;
      while (pauVar13 != pauVar10) {
        pauVar13 = (undefined1 (*) [16])((long)pauVar13 - (long)pauVar10);
        pauVar8 = (undefined1 (*) [16])0x0;
        do {
          uVar2 = *(undefined8 *)((long)(*pauVar8 + (long)*pauVar10) + 8);
          *(undefined8 *)((long)pvVar7 + (long)pauVar8) =
               *(undefined8 *)(*pauVar8 + (long)*pauVar10);
          ((undefined8 *)((long)pvVar7 + (long)pauVar8))[1] = uVar2;
          pauVar8 = pauVar8 + 1;
        } while (pauVar8 != pauVar13);
        pauVar10 = (undefined1 (*) [16])operator_new(0x18);
        local_108 = pauVar10[1] + 8;
        *(undefined8 *)pauVar10[1] = 0;
        *pauVar10 = (undefined1  [16])0x0;
        pvVar9 = (void *)((long)pvVar7 + (long)pauVar8);
        local_98 = pauVar10;
        local_88 = local_108;
        if (pauVar8 == (undefined1 (*) [16])0x0) {
          pvVar11 = (void *)0x0;
          goto LAB_00105b1b;
        }
        if (pauVar8 < (undefined1 (*) [16])0x7ffffffffffffff1) {
          pvVar11 = operator_new((ulong)pauVar13);
          goto LAB_00105b1b;
        }
        if (-1 < (long)pauVar8) goto LAB_00105ce3;
LAB_00105dca:
        pauVar10 = (undefined1 (*) [16])std::__throw_bad_array_new_length();
LAB_00105dcf:
        pvVar7 = (void *)0x0;
      }
      pauVar10 = (undefined1 (*) [16])operator_new(0x18);
      pauVar13 = (undefined1 (*) [16])0x0;
      local_108 = pauVar10[1] + 8;
      pvVar11 = (void *)0x0;
      *(undefined8 *)pauVar10[1] = 0;
      *pauVar10 = (undefined1  [16])0x0;
      pvVar9 = pvVar7;
      local_98 = pauVar10;
      local_88 = local_108;
LAB_00105b1b:
      *(void **)*pauVar10 = pvVar11;
      *(undefined1 **)pauVar10[1] = *pauVar13 + (long)pvVar11;
      if (pvVar9 == pvVar7) {
        *(void **)(*pauVar10 + 8) = pvVar11;
        local_90 = local_108;
        Clipper2Lib::RectClip(unaff_R13,(Rect *)&local_78,(vector *)&local_98,1);
        pvVar9 = *(void **)*pauVar10;
        if (pvVar9 != (void *)0x0) goto LAB_00105b7b;
LAB_00105b87:
        operator_delete(pauVar10,0x18);
        if (pvVar7 != (void *)0x0) goto LAB_00105c8d;
      }
      else {
        pvVar11 = memcpy(pvVar11,pvVar7,(long)pvVar9 - (long)pvVar7);
        *(long *)(*pauVar10 + 8) = (long)pvVar11 + ((long)pvVar9 - (long)pvVar7);
        local_90 = local_108;
        Clipper2Lib::RectClip(unaff_R13,(Rect *)&local_78,(vector *)&local_98,1);
        pvVar9 = *(void **)*pauVar10;
        if (pvVar9 != (void *)0x0) {
LAB_00105b7b:
          operator_delete(pvVar9,*(long *)pauVar10[1] - (long)pvVar9);
          goto LAB_00105b87;
        }
        operator_delete(pauVar10,0x18);
LAB_00105c8d:
        operator_delete(pvVar7,local_e0);
      }
      pauVar10 = local_b8;
      if (local_b0 == local_b8) {
        _err_print_error("expand","editor/plugins/sprite_2d_editor_plugin.cpp",0x57,
                         "Condition \"out.size() == 0\" is true. Returning: points",0,0);
        *(undefined8 *)(param_1 + 8) = 0;
        if (*(long *)(param_2 + 8) != 0) {
          CowData<Vector2>::_ref((CowData<Vector2> *)(param_1 + 8),(CowData *)(param_2 + 8));
        }
        goto LAB_00105d00;
      }
      lVar12 = *(long *)*local_b8;
      uVar14 = 0;
      local_90 = (undefined1 *)0x0;
      pdVar1 = (double *)
               (lVar12 + (long)((int)(*(long *)(*local_b8 + 8) - lVar12 >> 4) + -1) * 0x10);
      local_50 = (Vector<Vector2> *)CONCAT44((float)pdVar1[1],(float)*pdVar1);
      if (*(long *)(*local_b8 + 8) != lVar12) {
        do {
          pdVar1 = (double *)(lVar12 + uVar14 * 0x10);
          local_48 = (Vector<Vector2> *)CONCAT44((float)pdVar1[1],(float)*pdVar1);
          fVar15 = (float)Vector2::distance_to((Vector2 *)&local_48);
          if (_LC98 < fVar15) {
            Vector<Vector2>::push_back(local_48,&local_98);
            local_50 = local_48;
          }
          lVar12 = *(long *)*pauVar10;
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulong)(*(long *)(*pauVar10 + 8) - lVar12 >> 4));
        goto LAB_00105ce8;
      }
      *(undefined8 *)(param_1 + 8) = 0;
      pauVar13 = local_b0;
      pauVar8 = local_b8;
      goto LAB_00105d08;
    }
    _err_print_error("expand","editor/plugins/sprite_2d_editor_plugin.cpp",0x4d,
                     "Condition \"solution.size() == 0\" is true. Returning: points",0,0);
    *(undefined8 *)(param_1 + 8) = 0;
    puVar5 = local_d8;
    if (*(long *)(param_2 + 8) != 0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)(param_1 + 8),(CowData *)(param_2 + 8));
      puVar5 = local_d8;
    }
  }
  else {
    if ((long)__n < 0) goto LAB_00105dca;
LAB_00105ce3:
    std::__throw_bad_alloc();
LAB_00105ce8:
    *(undefined1 **)(param_1 + 8) = local_90;
LAB_00105d00:
    pauVar10 = local_b0;
    pauVar13 = local_b0;
    pauVar8 = local_b8;
    if (local_b8 != local_b0) {
LAB_00105d08:
      do {
        pvVar7 = *(void **)*pauVar8;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7,*(long *)pauVar8[1] - (long)pvVar7);
        }
        pauVar4 = pauVar8 + 1;
        pauVar10 = local_b8;
        pauVar8 = (undefined1 (*) [16])(*pauVar4 + 8);
      } while ((undefined1 (*) [16])(*pauVar4 + 8) != pauVar13);
    }
    puVar5 = local_d8;
    if (pauVar10 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar10,(long)local_a8 - (long)pauVar10);
      puVar5 = local_d8;
    }
  }
  for (; local_d0 != puVar5; puVar5 = puVar5 + 3) {
    pvVar7 = (void *)*puVar5;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7,puVar5[2] - (long)pvVar7);
    }
  }
  if (local_d8 != (undefined8 *)0x0) {
    operator_delete(local_d8,local_c8 - (long)local_d8);
  }
  operator_delete(__src,__n);
LAB_00105d93:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sprite2DEditor::_update_mesh_data() */

void __thiscall Sprite2DEditor::_update_mesh_data(Sprite2DEditor *this)

{
  long *plVar1;
  CowData<int> *this_00;
  CowData<Vector<Vector2>> *this_01;
  CowData<Vector<Vector2>> *this_02;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  BitMap *this_03;
  long lVar10;
  long lVar11;
  BitMap *pBVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  ulong uVar20;
  undefined1 auVar23 [16];
  undefined8 uVar21;
  double dVar22;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 local_110;
  int local_d8;
  long *local_b8;
  Object *local_b0;
  Rect2i local_a8 [8];
  long local_a0 [2];
  long local_90;
  Vector local_88 [8];
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_update_mesh_data","editor/plugins/sprite_2d_editor_plugin.cpp",0xa4,
                       "Parameter \"node\" is null.",0,0);
      return;
    }
    goto LAB_00106f51;
  }
  Sprite2D::get_texture();
  if (local_b8 == (long *)0x0) {
    _err_print_error("_update_mesh_data","editor/plugins/sprite_2d_editor_plugin.cpp",0xa6,
                     "Condition \"texture.is_null()\" is true.",0,0);
  }
  else {
    (**(code **)(*local_b8 + 0x210))((Ref<Image> *)&local_b0);
    if (local_b0 != (Object *)0x0) {
      cVar6 = Image::is_compressed();
      if (cVar6 != '\0') {
        Image::decompress();
      }
      cVar6 = Sprite2D::is_region_enabled();
      if (cVar6 == '\0') {
        local_58._0_8_ = Image::get_size();
        uVar20 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar20;
        _local_68 = auVar27 << 0x40;
      }
      else {
        _local_68 = Sprite2D::get_region_rect();
      }
      iVar7 = Sprite2D::get_vframes();
      iVar8 = Sprite2D::get_hframes();
      pBVar12 = (BitMap *)0x0;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = local_60;
      auVar23._0_4_ = (float)iVar8;
      auVar23._4_4_ = (float)iVar7;
      auVar23._8_8_ = _LC91;
      auVar27 = divps(auVar26,auVar23);
      local_60 = auVar27._0_8_;
      local_70 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
      local_78 = Sprite2D::get_frame_coords();
      local_58._0_8_ = Vector2i::operator*((Vector2i *)&local_78,(Vector2i *)&local_70);
      uVar21 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
      local_68 = (undefined1  [8])
                 CONCAT44((float)((ulong)uVar21 >> 0x20) + local_68._4_4_,
                          (float)uVar21 + local_68._0_4_);
      this_03 = (BitMap *)operator_new(600,"");
      BitMap::BitMap(this_03);
      postinitialize_handler((Object *)this_03);
      cVar6 = RefCounted::init_ref();
      if (cVar6 != '\0') {
        cVar6 = RefCounted::reference();
        if (cVar6 != '\0') {
          pBVar12 = this_03;
        }
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)this_03), cVar6 != '\0')) {
          (**(code **)(*(long *)this_03 + 0x140))(this_03);
          Memory::free_static(this_03,false);
        }
      }
      BitMap::create_from_image_alpha((Ref *)pBVar12,_LC154);
      dVar22 = (double)Range::get_value();
      if (0 < (int)dVar22) {
        local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_68);
        BitMap::shrink_mask((int)pBVar12,(Rect2i *)(ulong)(uint)(int)dVar22);
      }
      dVar22 = (double)Range::get_value();
      if (0 < (int)dVar22) {
        auVar27 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_68);
        local_58 = auVar27;
        BitMap::grow_mask((int)pBVar12,(Rect2i *)(ulong)(uint)(int)dVar22);
      }
      dVar22 = (double)Range::get_value();
      auVar27 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_68);
      local_58 = auVar27;
      BitMap::clip_opaque_to_polygons(local_a8,(float)dVar22);
      CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa08),0);
      CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa38),0);
      CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xa48),0);
      this_00 = (CowData<int> *)(this + 0xa58);
      CowData<int>::resize<false>(this_00,0);
      uVar21 = Image::get_size();
      local_58._0_8_ = uVar21;
      uVar21 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
      if (local_a0[0] != 0) {
        lVar15 = 0;
        do {
          uVar5 = _LC91;
          if (*(long *)(local_a0[0] + -8) <= lVar15) {
            if ((*(int *)(this + 0x9c8) == 0) && (local_a0[0] != 0)) {
              lVar13 = 0;
              goto LAB_001069ef;
            }
            break;
          }
          auVar27 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_68);
          local_58 = auVar27;
          if (local_a0[0] == 0) {
            lVar10 = 0;
            goto LAB_001066a1;
          }
          lVar10 = *(long *)(local_a0[0] + -8);
          if (lVar10 <= lVar15) goto LAB_001066a1;
          expand(local_88,(Rect2i *)(local_a0[0] + lVar15 * 0x10),(float)dVar22);
          lVar13 = lVar15;
          if (local_a0[0] == 0) {
            lVar11 = 0;
            goto LAB_001066e9;
          }
          lVar11 = *(long *)(local_a0[0] + -8);
          if (lVar11 <= lVar15) goto LAB_001066e9;
          CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)local_a0);
          lVar13 = local_80;
          lVar11 = lVar15 * 0x10 + local_a0[0];
          if (*(long *)(lVar11 + 8) != local_80) {
            CowData<Vector2>::_unref((CowData<Vector2> *)(lVar11 + 8));
            *(long *)(lVar11 + 8) = lVar13;
            local_80 = 0;
          }
          lVar15 = lVar15 + 1;
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_80);
        } while (local_a0[0] != 0);
      }
      goto LAB_00106357;
    }
    _err_print_error("_update_mesh_data","editor/plugins/sprite_2d_editor_plugin.cpp",0xa8,
                     "Condition \"image.is_null()\" is true.",0,0);
    if (((local_b0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b0), cVar6 != '\0')) {
      if (*(code **)(*(long *)local_b0 + 0x140) == Image::~Image) {
        *(code **)local_b0 = Memory::free_static;
        if (*(long *)(local_b0 + 0x250) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(local_b0 + 0x250) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar15 = *(long *)(local_b0 + 0x250);
            *(undefined8 *)(local_b0 + 0x250) = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
        Resource::~Resource((Resource *)local_b0);
      }
      else {
        (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
      }
      Memory::free_static(local_b0,false);
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
  goto LAB_001067bf;
LAB_001069ef:
  do {
    if (*(long *)(local_a0[0] + -8) <= lVar13) break;
    if (*(long *)(this + 0xa38) == 0) {
      local_d8 = 0;
    }
    else {
      local_d8 = *(int *)(*(long *)(this + 0xa38) + -8);
    }
    if (local_a0[0] == 0) {
LAB_00106bb0:
      lVar10 = 0;
      lVar15 = lVar13;
      goto LAB_001066a1;
    }
    lVar14 = 0;
    lVar11 = lVar13 * 0x10;
    while( true ) {
      lVar10 = *(long *)(local_a0[0] + -8);
      lVar15 = lVar13;
      if (lVar10 <= lVar13) goto LAB_001066a1;
      lVar15 = *(long *)((Vector *)(local_a0[0] + lVar11) + 8);
      if ((lVar15 == 0) || (*(long *)(lVar15 + -8) <= lVar14)) break;
      uVar2 = *(undefined8 *)(lVar15 + lVar14 * 8);
      auVar24._0_4_ = (float)uVar2 + local_68._0_4_;
      auVar24._4_4_ = (float)((ulong)uVar2 >> 0x20) + local_68._4_4_;
      auVar24._8_8_ = 0;
      auVar4._8_8_ = uVar5;
      auVar4._0_8_ = uVar21;
      auVar27 = divps(auVar24,auVar4);
      Vector<Vector2>::push_back(auVar27._0_8_,this + 0xa40);
      Sprite2D::is_flipped_h();
      Sprite2D::is_flipped_v();
      Sprite2D::get_offset();
      Sprite2D::is_centered();
      lVar14 = lVar14 + 1;
      Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0xa30));
      if (local_a0[0] == 0) goto LAB_00106bb0;
    }
    local_80 = 0;
    cVar6 = Triangulate::triangulate((Vector *)(local_a0[0] + lVar11),local_88);
    lVar14 = local_80;
    if (cVar6 == '\0') {
      local_90 = 0;
      CowData<int>::_unref((CowData<int> *)&local_80);
    }
    else {
      lVar17 = 0;
      local_80 = 0;
      local_90 = lVar14;
      CowData<int>::_unref((CowData<int> *)&local_80);
      if (lVar14 != 0) {
        for (; lVar17 < *(long *)(lVar14 + -8); lVar17 = lVar17 + 3) {
          uVar9 = 0;
          lVar16 = lVar17;
          do {
            if (local_a0[0] == 0) goto LAB_00106bb0;
            lVar10 = *(long *)(local_a0[0] + -8);
            lVar15 = lVar13;
            if (lVar10 <= lVar13) goto LAB_001066a1;
            lVar10 = *(long *)(lVar14 + -8);
            lVar15 = lVar16;
            if (lVar10 <= lVar16) goto LAB_001066a1;
            lVar15 = (long)*(int *)(lVar14 + lVar16 * 4);
            lVar10 = *(long *)(local_a0[0] + lVar11 + 8);
            if (lVar15 < 0) {
LAB_00106e2c:
              if (lVar10 == 0) {
LAB_00106e31:
                lVar10 = 0;
              }
              else {
LAB_00106dd2:
                lVar10 = *(long *)(lVar10 + -8);
              }
              goto LAB_001066a1;
            }
            if (lVar10 == 0) goto LAB_00106e31;
            if (*(long *)(lVar10 + -8) <= lVar15) goto LAB_00106dd2;
            Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0xa00));
            if (local_a0[0] == 0) goto LAB_00106bb0;
            lVar10 = *(long *)(local_a0[0] + -8);
            lVar15 = lVar13;
            if (lVar10 <= lVar13) goto LAB_001066a1;
            uVar9 = uVar9 + 1;
            lVar10 = *(long *)(lVar14 + -8);
            lVar15 = (long)(int)(uVar9 % 3 + (int)lVar17);
            if (lVar10 <= lVar15) goto LAB_001066a1;
            lVar15 = (long)*(int *)(lVar14 + lVar15 * 4);
            lVar10 = *(long *)(local_a0[0] + lVar11 + 8);
            if (lVar15 < 0) goto LAB_00106e2c;
            if (lVar10 == 0) goto LAB_00106e31;
            if (*(long *)(lVar10 + -8) <= lVar15) goto LAB_00106dd2;
            Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0xa00));
            lVar10 = *(long *)(lVar14 + -8);
            lVar15 = lVar16;
            if (lVar10 <= lVar16) goto LAB_001066a1;
            iVar7 = *(int *)(lVar14 + lVar16 * 4);
            if (*(long *)(this + 0xa58) == 0) {
              lVar15 = 1;
            }
            else {
              lVar15 = *(long *)(*(long *)(this + 0xa58) + -8) + 1;
            }
            iVar8 = CowData<int>::resize<false>(this_00,lVar15);
            if (iVar8 == 0) {
              if (*(long *)(this + 0xa58) == 0) {
                lVar10 = -1;
                lVar15 = 0;
              }
              else {
                lVar15 = *(long *)(*(long *)(this + 0xa58) + -8);
                lVar10 = lVar15 + -1;
                if (-1 < lVar10) {
                  CowData<int>::_copy_on_write(this_00);
                  *(int *)(*(long *)(this + 0xa58) + lVar10 * 4) = local_d8 + iVar7;
                  goto LAB_00106db6;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar15,"p_index","size()",""
                         ,false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_00106db6:
            lVar16 = lVar16 + 1;
          } while (uVar9 != 3);
        }
      }
    }
    lVar13 = lVar13 + 1;
    CowData<int>::_unref((CowData<int> *)&local_90);
  } while (local_a0[0] != 0);
LAB_00106357:
  this_01 = (CowData<Vector<Vector2>> *)(this + 0xa18);
  CowData<Vector<Vector2>>::resize<false>(this_01,0);
  this_02 = (CowData<Vector<Vector2>> *)(this + 0xa28);
  CowData<Vector<Vector2>>::resize<false>(this_02,0);
  if (*(int *)(this + 0x9c8) - 1U < 3) {
    if (local_a0[0] == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(local_a0[0] + -8);
    }
    CowData<Vector<Vector2>>::resize<false>(this_01,lVar15);
    if (local_a0[0] == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(local_a0[0] + -8);
    }
    CowData<Vector<Vector2>>::resize<false>(this_02,lVar15);
    for (lVar15 = 0; (local_a0[0] != 0 && (lVar15 < *(long *)(local_a0[0] + -8)));
        lVar15 = lVar15 + 1) {
      local_80 = 0;
      local_90 = 0;
      lVar14 = lVar15 * 0x10;
      lVar13 = *(long *)(local_a0[0] + 8 + lVar14);
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(lVar13 + -8);
      }
      CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_90,lVar13);
      if (local_a0[0] == 0) {
LAB_0010661a:
        lVar10 = 0;
LAB_001066a1:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar10 = *(long *)(local_a0[0] + -8);
      if (lVar10 <= lVar15) goto LAB_001066a1;
      lVar13 = *(long *)(local_a0[0] + 8 + lVar14);
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(lVar13 + -8);
      }
      CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_80,lVar13);
      if (local_a0[0] == 0) goto LAB_0010661a;
      lVar13 = 0;
      while( true ) {
        lVar10 = *(long *)(local_a0[0] + -8);
        if (lVar10 <= lVar15) goto LAB_001066a1;
        lVar11 = *(long *)(local_a0[0] + 8 + lVar14);
        if ((lVar11 == 0) || (*(long *)(lVar11 + -8) <= lVar13)) break;
        uVar21 = *(undefined8 *)(lVar11 + lVar13 * 8);
        lVar10 = lVar13 * 8;
        fVar18 = (float)uVar21;
        fVar19 = (float)((ulong)uVar21 >> 0x20);
        fVar25 = local_68._0_4_;
        fVar28 = local_68._4_4_;
        if (local_90 == 0) {
LAB_00106df6:
          lVar11 = 0;
          goto LAB_001066e9;
        }
        lVar11 = *(long *)(local_90 + -8);
        if (lVar11 <= lVar13) goto LAB_001066e9;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
        *(ulong *)(local_90 + lVar10) = CONCAT44(fVar19 + fVar28,fVar18 + fVar25);
        cVar6 = Sprite2D::is_flipped_h();
        if (cVar6 != '\0') {
          fVar18 = (float)local_60 - fVar18;
        }
        cVar6 = Sprite2D::is_flipped_v();
        if (cVar6 != '\0') {
          fVar19 = local_60._4_4_ - fVar19;
        }
        local_110 = CONCAT44(fVar19,fVar18);
        if (*(int *)(this + 0x9c8) != 1) {
          uVar21 = Sprite2D::get_offset();
          local_110 = CONCAT44(fVar19 + (float)((ulong)uVar21 >> 0x20),fVar18 + (float)uVar21);
        }
        cVar6 = Sprite2D::is_centered();
        if (cVar6 != '\0') {
          local_110 = CONCAT44((float)((ulong)local_110 >> 0x20) -
                               (float)(local_60 >> 0x20) * _UNK_00115b84,
                               (float)local_110 - (float)local_60 * _LC98);
        }
        if (local_80 == 0) goto LAB_00106df6;
        lVar11 = *(long *)(local_80 + -8);
        if (lVar11 <= lVar13) goto LAB_001066e9;
        lVar13 = lVar13 + 1;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
        *(undefined8 *)(local_80 + lVar10) = local_110;
        if (local_a0[0] == 0) goto LAB_0010661a;
      }
      lVar13 = lVar15;
      if (*(long *)(this + 0xa18) == 0) {
LAB_00106f2b:
        lVar11 = 0;
LAB_001066e9:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar13,lVar11,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar11 = *(long *)(*(long *)(this + 0xa18) + -8);
      if (lVar11 <= lVar15) goto LAB_001066e9;
      CowData<Vector<Vector2>>::_copy_on_write(this_01);
      if (*(long *)(*(long *)(this + 0xa18) + lVar14 + 8) != local_90) {
        CowData<Vector2>::_ref
                  ((CowData<Vector2> *)(*(long *)(this + 0xa18) + lVar14 + 8),(CowData *)&local_90);
      }
      if (*(long *)(this + 0xa28) == 0) goto LAB_00106f2b;
      lVar11 = *(long *)(*(long *)(this + 0xa28) + -8);
      if (lVar11 <= lVar15) goto LAB_001066e9;
      CowData<Vector<Vector2>>::_copy_on_write(this_02);
      if (*(long *)(lVar14 + *(long *)(this + 0xa28) + 8) != local_80) {
        CowData<Vector2>::_ref
                  ((CowData<Vector2> *)(lVar14 + *(long *)(this + 0xa28) + 8),(CowData *)&local_80);
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_80);
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_90);
    }
  }
  CanvasItem::queue_redraw();
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)local_a0);
  cVar6 = RefCounted::unreference();
  if (cVar6 != '\0') {
    cVar6 = predelete_handler((Object *)pBVar12);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pBVar12 + 0x140))(pBVar12);
      Memory::free_static(pBVar12,false);
    }
  }
  Ref<Image>::unref((Ref<Image> *)&local_b0);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
LAB_001067bf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106f51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::_popup_debug_uv_dialog() */

void __thiscall Sprite2DEditor::_popup_debug_uv_dialog(Sprite2DEditor *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_78;
  Object *local_70;
  undefined8 local_68;
  long local_60;
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  lVar6 = Node::get_owner();
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  lVar7 = SceneTree::get_edited_scene_root();
  if (lVar6 == lVar7) {
LAB_001071d0:
    Sprite2D::get_texture();
    if (local_70 == (Object *)0x0) {
      lVar6 = 0;
LAB_00107205:
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Can\'t convert an empty sprite to mesh.");
      TTR((String *)local_58,(String *)&local_68);
      bVar8 = lVar6 != local_58[0];
      lVar6 = local_58[0];
      if (bVar8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        lVar6 = local_58[0];
        local_58[0] = 0;
        local_78 = lVar6;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      goto LAB_00107095;
    }
LAB_001070a6:
    _update_mesh_data(this);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9f0));
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<Sprite2DEditor>
              ((Sprite2DEditor *)local_58,(char *)this,(_func_void *)"&Sprite2DEditor::_center_view"
              );
    StringName::StringName((StringName *)&local_60,"process_frame",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,(Sprite2DEditor *)local_58,4);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    plVar1 = *(long **)(this + 0x9f8);
    pcVar2 = *(code **)(*plVar1 + 0x2c8);
    CanvasItem::get_texture_filter_in_tree();
    (*pcVar2)(plVar1);
    CanvasItem::queue_redraw();
    if (local_70 == (Object *)0x0) goto LAB_001071a0;
    cVar5 = RefCounted::unreference();
    pOVar4 = local_70;
  }
  else {
    lVar6 = *(long *)(this + 0x9d0);
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    lVar7 = SceneTree::get_edited_scene_root();
    if (lVar6 == lVar7) goto LAB_001071d0;
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Can\'t convert a sprite from a foreign scene.");
    TTR((String *)local_58,(String *)&local_68);
    lVar6 = local_58[0];
    if (local_58[0] != 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_58[0];
      local_58[0] = 0;
      local_78 = lVar6;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Sprite2D::get_texture();
    if (local_70 == (Object *)0x0) goto LAB_00107205;
LAB_00107095:
    if ((lVar6 == 0) || (*(uint *)(lVar6 + -8) < 2)) goto LAB_001070a6;
    uVar3 = *(undefined8 *)(this + 0x9e8);
    local_58[0] = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)&local_78);
    AcceptDialog::set_text(uVar3,(CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9e8));
    if (local_70 == (Object *)0x0) goto LAB_001071a0;
    cVar5 = RefCounted::unreference();
    pOVar4 = local_70;
  }
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar4), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_001071a0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::_menu_option(int) */

void __thiscall Sprite2DEditor::_menu_option(Sprite2DEditor *this,int param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
LAB_001075b0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(int *)(this + 0x9c8) = param_1;
    if (param_1 == 2) {
      uVar1 = *(undefined8 *)(this + 0x9f0);
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Create CollisionPolygon2D");
      TTR(local_48,(String *)&local_58);
      AcceptDialog::set_ok_button_text(uVar1,local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = 0;
      pSVar3 = *(String **)(this + 0x9f0);
      String::parse_latin1((String *)&local_50,"");
      pcVar2 = "CollisionPolygon2D Preview";
    }
    else if (param_1 < 3) {
      if (param_1 == 0) {
        uVar1 = *(undefined8 *)(this + 0x9f0);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"Create MeshInstance2D");
        TTR(local_48,(String *)&local_58);
        AcceptDialog::set_ok_button_text(uVar1,local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        local_50 = 0;
        pSVar3 = *(String **)(this + 0x9f0);
        String::parse_latin1((String *)&local_50,"");
        pcVar2 = "MeshInstance2D Preview";
      }
      else {
        if (param_1 != 1) goto LAB_001075b0;
        uVar1 = *(undefined8 *)(this + 0x9f0);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"Create Polygon2D");
        TTR(local_48,(String *)&local_58);
        AcceptDialog::set_ok_button_text(uVar1,local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        local_50 = 0;
        pSVar3 = *(String **)(this + 0x9f0);
        String::parse_latin1((String *)&local_50,"");
        pcVar2 = "Polygon2D Preview";
      }
    }
    else {
      if (param_1 != 3) goto LAB_001075b0;
      uVar1 = *(undefined8 *)(this + 0x9f0);
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Create LightOccluder2D");
      TTR(local_48,(String *)&local_58);
      AcceptDialog::set_ok_button_text(uVar1,local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = 0;
      pSVar3 = *(String **)(this + 0x9f0);
      String::parse_latin1((String *)&local_50,"");
      pcVar2 = "LightOccluder2D Preview";
    }
    local_58 = 0;
    String::parse_latin1((String *)&local_58,pcVar2);
    TTR(local_48,(String *)&local_58);
    Window::set_title(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _popup_debug_uv_dialog(this);
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



/* Sprite2DEditor::is_class_ptr(void*) const */

uint __thiscall Sprite2DEditor::is_class_ptr(Sprite2DEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1159,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Sprite2DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Sprite2DEditorPlugin::is_class_ptr(Sprite2DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1159,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Sprite2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Sprite2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Sprite2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Sprite2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Sprite2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Sprite2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Sprite2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Sprite2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Sprite2DEditorPlugin::has_main_screen() const */

undefined8 Sprite2DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void> *this)

{
  return;
}



/* MethodBindT<Node*, Node*>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Node*,Node*>::_gen_argument_type(MethodBindT<Node*,Node*> *this,int param_1)

{
  return -((uint)param_1 < 2) & 0x18;
}



/* MethodBindT<Node*, Node*>::get_argument_meta(int) const */

undefined8 MethodBindT<Node*,Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<Sprite2DEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, float, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>>::get_argument_count
          (CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>> *this,
          bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>>::get_argument_count
          (CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<Sprite2DEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<Sprite2DEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,bool> *this)

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



/* MethodBindT<Node*, Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*,Node*>::~MethodBindT(MethodBindT<Node*,Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115818;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Node*, Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*,Node*>::~MethodBindT(MethodBindT<Node*,Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115818;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HScrollBar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HScrollBar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VScrollBar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VScrollBar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Sprite2DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Sprite2DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HScrollBar::_property_can_revertv(StringName const&) const */

undefined8 HScrollBar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VScrollBar::_property_can_revertv(StringName const&) const */

undefined8 VScrollBar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Sprite2DEditor::_property_can_revertv(StringName const&) const */

undefined8 Sprite2DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Sprite2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Sprite2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011a028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* VScrollBar::~VScrollBar() */

void __thiscall VScrollBar::~VScrollBar(VScrollBar *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114448;
  ScrollBar::~ScrollBar((ScrollBar *)this);
  return;
}



/* VScrollBar::~VScrollBar() */

void __thiscall VScrollBar::~VScrollBar(VScrollBar *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114448;
  ScrollBar::~ScrollBar((ScrollBar *)this);
  operator_delete(this,0xac8);
  return;
}



/* HScrollBar::~HScrollBar() */

void __thiscall HScrollBar::~HScrollBar(HScrollBar *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001140d8;
  ScrollBar::~ScrollBar((ScrollBar *)this);
  return;
}



/* HScrollBar::~HScrollBar() */

void __thiscall HScrollBar::~HScrollBar(HScrollBar *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001140d8;
  ScrollBar::~ScrollBar((ScrollBar *)this);
  operator_delete(this,0xac8);
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,bool>::get_object
          (CallableCustomMethodPointer<Sprite2DEditor,void,bool> *this)

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
      goto LAB_00107efd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107efd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107efd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,int>::get_object
          (CallableCustomMethodPointer<Sprite2DEditor,void,int> *this)

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
      goto LAB_00107ffd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107ffd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107ffd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Vector2, Ref<InputEvent> >::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>> *this)

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
      goto LAB_001080fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001080fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001080fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, float, Vector2, Ref<InputEvent> >::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>> *this)

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
      goto LAB_001081fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001081fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001081fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void>::get_object
          (CallableCustomMethodPointer<Sprite2DEditor,void> *this)

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
      goto LAB_001082fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001082fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001082fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&> *this)

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
      goto LAB_001083fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001083fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001083fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Sprite2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Sprite2DEditorPlugin::_notificationv(Sprite2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011a030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* VScrollBar::_validate_propertyv(PropertyInfo&) const */

void VScrollBar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HScrollBar::_validate_propertyv(PropertyInfo&) const */

void HScrollBar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* Sprite2DEditor::_validate_propertyv(PropertyInfo&) const */

void Sprite2DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a038 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_0011a040 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011a040 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HScrollBar::is_class_ptr(void*) const */

uint HScrollBar::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &Range::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &ScrollBar::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VScrollBar::is_class_ptr(void*) const */

uint VScrollBar::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &Range::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &ScrollBar::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1159,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x115a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1159,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VScrollBar::_setv(StringName const&, Variant const&) */

undefined8 VScrollBar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Sprite2DEditor::_setv(StringName const&, Variant const&) */

undefined8 Sprite2DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HScrollBar::_setv(StringName const&, Variant const&) */

undefined8 HScrollBar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001095c8) */
/* Sprite2DEditor::_getv(StringName const&, Variant&) const */

undefined8 Sprite2DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109638) */
/* VScrollBar::_getv(StringName const&, Variant&) const */

undefined8 VScrollBar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001096a8) */
/* HScrollBar::_getv(StringName const&, Variant&) const */

undefined8 HScrollBar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109718) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109788) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109850;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109850:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001098b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001098b0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109910;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109910:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109980;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109980:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Sprite2DEditorPlugin::get_plugin_name() const */

Sprite2DEditorPlugin * __thiscall Sprite2DEditorPlugin::get_plugin_name(Sprite2DEditorPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00109ab3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109ab3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00109b1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00109b1e:
  return &_get_class_namev()::_class_name_static;
}



/* VScrollBar::_get_class_namev() const */

undefined8 * VScrollBar::_get_class_namev(void)

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
LAB_00109b93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109b93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VScrollBar");
      goto LAB_00109bfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VScrollBar");
LAB_00109bfe:
  return &_get_class_namev()::_class_name_static;
}



/* HScrollBar::_get_class_namev() const */

undefined8 * HScrollBar::_get_class_namev(void)

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
LAB_00109c73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109c73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HScrollBar");
      goto LAB_00109cde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HScrollBar");
LAB_00109cde:
  return &_get_class_namev()::_class_name_static;
}



/* Sprite2DEditorPlugin::_get_class_namev() const */

undefined8 * Sprite2DEditorPlugin::_get_class_namev(void)

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
LAB_00109d63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109d63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Sprite2DEditorPlugin");
      goto LAB_00109dce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Sprite2DEditorPlugin");
LAB_00109dce:
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
LAB_00109e53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109e53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00109ebe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00109ebe:
  return &_get_class_namev()::_class_name_static;
}



/* Sprite2DEditor::_get_class_namev() const */

undefined8 * Sprite2DEditor::_get_class_namev(void)

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
LAB_00109f43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109f43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Sprite2DEditor");
      goto LAB_00109fae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Sprite2DEditor");
LAB_00109fae:
  return &_get_class_namev()::_class_name_static;
}



/* HScrollBar::_notificationv(int, bool) */

void __thiscall HScrollBar::_notificationv(HScrollBar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a058 != Control::_notification) {
      ScrollBar::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_0011a058 == Control::_notification) {
    return;
  }
  ScrollBar::_notification(iVar1);
  return;
}



/* VScrollBar::_notificationv(int, bool) */

void __thiscall VScrollBar::_notificationv(VScrollBar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a058 != Control::_notification) {
      ScrollBar::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_0011a058 == Control::_notification) {
    return;
  }
  ScrollBar::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a060 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a060 == Container::_notification) {
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
    if ((code *)PTR__notification_0011a060 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a060 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::reserve(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::reserve(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar8 = (undefined8 *)operator_new(param_1 * 0x18);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar7 = puVar8;
  for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
    uVar6 = puVar9[1];
    uVar5 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar6;
    puVar7[2] = uVar5;
    puVar7 = puVar7 + 3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar8;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + param_1 * 3;
  return;
}



/* std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::reserve(unsigned long) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - lVar1 >> 4)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar7 = (undefined8 *)operator_new(param_1 * 0x10);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar6 = puVar7;
  for (puVar8 = puVar4; puVar3 != puVar8; puVar8 = puVar8 + 2) {
    uVar5 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar5;
    puVar6 = puVar6 + 2;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar7;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar7;
  *(undefined8 **)(this + 0x10) = puVar7 + param_1 * 2;
  return;
}



/* Callable create_custom_callable_function_pointer<Sprite2DEditor>(Sprite2DEditor*, char const*,
   void (Sprite2DEditor::*)()) */

Sprite2DEditor *
create_custom_callable_function_pointer<Sprite2DEditor>
          (Sprite2DEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC14;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001154b8;
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



/* Callable create_custom_callable_function_pointer<Sprite2DEditor, bool>(Sprite2DEditor*, char
   const*, void (Sprite2DEditor::*)(bool)) */

Sprite2DEditor *
create_custom_callable_function_pointer<Sprite2DEditor,bool>
          (Sprite2DEditor *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC14;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00115788;
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



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
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
    return (Variant **)CONCAT71(in_register_00000039,param_1);
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac8a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010ac8a:
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



/* Sprite2DEditorPlugin::_initialize_classv() */

void Sprite2DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011a010 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Node");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorPlugin");
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
      if ((code *)PTR__bind_methods_0011a068 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011a070 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Sprite2DEditorPlugin");
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Sprite2DEditorPlugin::get_class() const */

void Sprite2DEditorPlugin::get_class(void)

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
    String::parse_latin1(in_RDI,"Sprite2DEditorPlugin");
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



/* Sprite2DEditor::get_class() const */

void Sprite2DEditor::get_class(void)

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



/* VScrollBar::get_class() const */

void VScrollBar::get_class(void)

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



/* HScrollBar::get_class() const */

void HScrollBar::get_class(void)

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
LAB_0010b607:
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
      goto LAB_0010b607;
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
    if (cVar4 != '\0') goto LAB_0010b70b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b70b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Sprite2DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void>::call
          (CallableCustomMethodPointer<Sprite2DEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010b94f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010b94f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ba00;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010b94f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ba00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,bool>::call
          (CallableCustomMethodPointer<Sprite2DEditor,void,bool> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_0010bbc9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010bbc9;
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
        uVar3 = _LC76;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010bc7a;
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
LAB_0010bbc9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010bc7a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0010bd4e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010bd4e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC77;
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
LAB_0010be1d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010be1d;
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
        goto LAB_0010bd4e;
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
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010bd4e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, float, Vector2, Ref<InputEvent> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  float fVar13;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar4 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_48 = (Object *)(uVar4 << 8);
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
          goto LAB_0010c0b5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010c0b5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[2]);
        uVar3 = _LC78;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_48 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar6 = local_48;
        if (pOVar8 != local_48) {
          if (pOVar8 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010c1b0:
              cVar7 = RefCounted::unreference();
              if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
                (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                Memory::free_static(pOVar6,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar6 != pOVar8) {
              local_48 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar6 != (Object *)0x0) goto LAB_0010c1b0;
            }
          }
        }
        cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1],5);
        uVar3 = _LC79;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar3 = Variant::operator_cast_to_Vector2(param_1[1]);
        cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar5 = _LC80;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        fVar13 = Variant::operator_cast_to_float(*param_1);
        (*pcVar11)(fVar13,uVar3,(long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar6 = local_48, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_48), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        goto LAB_0010c0b5;
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
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010c0b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, Vector2, Ref<InputEvent> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>> *this,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
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
          goto LAB_0010c475;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010c475;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1]);
        uVar4 = _LC81;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010c570:
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
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010c570;
            }
          }
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC82;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010c475;
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
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010c475:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Sprite2DEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,int>::call
          (CallableCustomMethodPointer<Sprite2DEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_0010c8e8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010c8e8;
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
        uVar3 = _LC83;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010c999;
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
LAB_0010c8e8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010c999:
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
          Control::initialize_class();
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
        if ((code *)PTR__bind_methods_0011a008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
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
      if ((code *)PTR__bind_methods_0011a078 != Container::_bind_methods) {
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



/* HScrollBar::_initialize_classv() */

void HScrollBar::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ScrollBar::initialize_class()::initialized == '\0') {
      if (Range::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Range");
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
        if ((code *)PTR__bind_methods_0011a008 != Range::_bind_methods) {
          Range::_bind_methods();
        }
        Range::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Range");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"ScrollBar");
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
      if ((code *)PTR__bind_methods_0011a080 != Range::_bind_methods) {
        ScrollBar::_bind_methods();
      }
      ScrollBar::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ScrollBar");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HScrollBar");
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



/* VScrollBar::_initialize_classv() */

void VScrollBar::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ScrollBar::initialize_class()::initialized == '\0') {
      if (Range::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Range");
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
        if ((code *)PTR__bind_methods_0011a008 != Range::_bind_methods) {
          Range::_bind_methods();
        }
        Range::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Range");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"ScrollBar");
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
      if ((code *)PTR__bind_methods_0011a080 != Range::_bind_methods) {
        ScrollBar::_bind_methods();
      }
      ScrollBar::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ScrollBar");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VScrollBar");
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
          Control::initialize_class();
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
        if ((code *)PTR__bind_methods_0011a008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
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
      if ((code *)PTR__bind_methods_0011a078 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_0010d63f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010d63f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Sprite2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall Sprite2DEditorPlugin::is_class(Sprite2DEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010d773;
  }
  cVar4 = String::operator==(param_1,"Sprite2DEditorPlugin");
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
      if (cVar4 != '\0') goto LAB_0010d773;
    }
    cVar4 = String::operator==(param_1,"EditorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010d87e;
    }
  }
LAB_0010d773:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d87e:
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
    if (cVar4 != '\0') goto LAB_0010d963;
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
      if (cVar4 != '\0') goto LAB_0010d963;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010da6e;
    }
  }
LAB_0010d963:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010da6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::is_class(String const&) const */

undefined8 __thiscall Sprite2DEditor::is_class(Sprite2DEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010db7b;
  }
  cVar4 = String::operator==(param_1,"Sprite2DEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010db7b:
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
    if (cVar4 != '\0') goto LAB_0010dccb;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010dccb:
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
    if (cVar4 != '\0') goto LAB_0010ddf3;
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
      if (cVar4 != '\0') goto LAB_0010ddf3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010defe;
    }
  }
LAB_0010ddf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010defe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::is_class(String const&) const */

undefined8 __thiscall Range::is_class(Range *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010e00b;
  }
  cVar4 = String::operator==(param_1,"Range");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010e00b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VScrollBar::is_class(String const&) const */

undefined8 __thiscall VScrollBar::is_class(VScrollBar *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010e133;
  }
  cVar4 = String::operator==(param_1,"VScrollBar");
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
      if (cVar4 != '\0') goto LAB_0010e133;
    }
    cVar4 = String::operator==(param_1,"ScrollBar");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Range::is_class((Range *)this,param_1);
        return uVar5;
      }
      goto LAB_0010e23e;
    }
  }
LAB_0010e133:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e23e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HScrollBar::is_class(String const&) const */

undefined8 __thiscall HScrollBar::is_class(HScrollBar *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010e323;
  }
  cVar4 = String::operator==(param_1,"HScrollBar");
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
      if (cVar4 != '\0') goto LAB_0010e323;
    }
    cVar4 = String::operator==(param_1,"ScrollBar");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Range::is_class((Range *)this,param_1);
        return uVar5;
      }
      goto LAB_0010e42e;
    }
  }
LAB_0010e323:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e42e:
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
    if (cVar4 != '\0') goto LAB_0010e513;
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
      if (cVar4 != '\0') goto LAB_0010e513;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010e61e;
    }
  }
LAB_0010e513:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e61e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC16;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC16;
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



/* Sprite2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Sprite2DEditorPlugin::_get_property_listv(Sprite2DEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "Sprite2DEditorPlugin";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Sprite2DEditorPlugin";
  local_98 = 0;
  local_70 = 0x14;
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
  StringName::StringName((StringName *)&local_78,"Sprite2DEditorPlugin",false);
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
  if ((code *)PTR__get_property_list_0011a088 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0011a090 != CanvasItem::_get_property_list) {
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



/* Sprite2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Sprite2DEditor::_get_property_listv(Sprite2DEditor *this,List *param_1,bool param_2)

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
  local_78 = "Sprite2DEditor";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Sprite2DEditor";
  local_98 = 0;
  local_70 = 0xe;
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
  StringName::StringName((StringName *)&local_78,"Sprite2DEditor",false);
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
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



/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Range::_get_property_listv(Range *this,List *param_1,bool param_2)

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
  local_78 = "Range";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Range";
  local_98 = 0;
  local_70 = 5;
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
  StringName::StringName((StringName *)&local_78,"Range",false);
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



/* ScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ScrollBar::_get_property_listv(ScrollBar *this,List *param_1,bool param_2)

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
    Range::_get_property_listv((Range *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ScrollBar";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ScrollBar";
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
  StringName::StringName((StringName *)&local_78,"ScrollBar",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Range::_get_property_listv((Range *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VScrollBar::_get_property_listv(VScrollBar *this,List *param_1,bool param_2)

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
    ScrollBar::_get_property_listv((ScrollBar *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VScrollBar";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VScrollBar";
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
  StringName::StringName((StringName *)&local_78,"VScrollBar",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ScrollBar::_get_property_listv((ScrollBar *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HScrollBar::_get_property_listv(HScrollBar *this,List *param_1,bool param_2)

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
    ScrollBar::_get_property_listv((ScrollBar *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HScrollBar";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HScrollBar";
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
  StringName::StringName((StringName *)&local_78,"HScrollBar",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ScrollBar::_get_property_listv((ScrollBar *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  long *plVar1;
  Object *this_00;
  long lVar2;
  char cVar3;
  
  if (*(long *)this != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      this_00 = *(Object **)this;
      cVar3 = predelete_handler(this_00);
      if (cVar3 != '\0') {
        if (*(code **)(*(long *)this_00 + 0x140) == Image::~Image) {
          *(code **)this_00 = Memory::free_static;
          if (*(long *)(this_00 + 0x250) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x250) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *(long *)(this_00 + 0x250);
              *(undefined8 *)(this_00 + 0x250) = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
        }
        Memory::free_static(this_00,false);
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



/* WARNING: Removing unreachable block (ram,0x00110bb0) */
/* Sprite2DEditor::_notificationv(int, bool) */

void __thiscall Sprite2DEditor::_notificationv(Sprite2DEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011a098 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011a098 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<Sprite2DEditor, Node*, Node*>(void (Sprite2DEditor::*)(Node*,
   Node*)) */

MethodBind * create_method_bind<Sprite2DEditor,Node*,Node*>(_func_void_Node_ptr_Node_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Node_ptr_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115818;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Sprite2DEditor";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::_bind_methods() [clone .cold] */

void Sprite2DEditor::_bind_methods(void)

{
  code *pcVar1;
  
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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector2>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<Vector2> >::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector2>>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00110d50(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Sprite2DEditor::_popup_debug_uv_dialog() [clone .cold] */

void Sprite2DEditor::_popup_debug_uv_dialog(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Sprite2DEditor::_initialize_classv() */

void Sprite2DEditor::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      Control::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Control";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Sprite2DEditor";
    local_60 = 0;
    local_40 = 0xe;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00111250:
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
  if (lVar6 == 0) goto LAB_00111250;
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
LAB_001111dc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00111181;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_001111dc;
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
LAB_00111181:
  puVar8[-1] = param_1;
  return 0;
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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
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
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00111560:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_00111560;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_00111491;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_00111491:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Sprite2DEditor::~Sprite2DEditor() */

void __thiscall Sprite2DEditor::~Sprite2DEditor(Sprite2DEditor *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001147b8;
  if (*(long *)(this + 0xa78) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa78);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa58);
      *(undefined8 *)(this + 0xa58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa48));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa38));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0xa28));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0xa18));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa08));
  Control::~Control((Control *)this);
  return;
}



/* Sprite2DEditor::~Sprite2DEditor() */

void __thiscall Sprite2DEditor::~Sprite2DEditor(Sprite2DEditor *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001147b8;
  if (*(long *)(this + 0xa78) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa78);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa58);
      *(undefined8 *)(this + 0xa58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa48));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa38));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0xa28));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0xa18));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa08));
  Control::~Control((Control *)this);
  operator_delete(this,0xab0);
  return;
}



/* CowData<Vector<Vector2> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::_realloc(CowData<Vector<Vector2>> *this,long param_1)

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



/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > >, Clipper2Lib::Point<long>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
_M_realloc_insert<Clipper2Lib::Point<long>>
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_001119f8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00111a02:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0011196a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_001119bc;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_001119f8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00111a02;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00111a02;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0011196a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_001119bc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* Clipper2Lib::RectClip64::RectClip64(Clipper2Lib::Rect<long> const&) */

void __thiscall Clipper2Lib::RectClip64::RectClip64(RectClip64 *this,Rect *param_1)

{
  vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this_00;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  RectClip64 *pRVar11;
  RectClip64 *pRVar12;
  long lVar13;
  long *plVar14;
  long in_FS_OFFSET;
  long lVar15;
  long local_38;
  long lStack_30;
  long local_20;
  
  this_00 = (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
            (this + 0x20);
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar7;
  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve(this_00,4)
  ;
  local_38 = *(long *)param_1;
  lStack_30 = *(long *)(param_1 + 8);
  plVar8 = *(long **)(this + 0x28);
  plVar14 = *(long **)(this + 0x30);
  lVar15 = *(long *)(param_1 + 8);
  if (plVar8 == plVar14) {
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    lVar15 = *(long *)(param_1 + 8);
    plVar14 = *(long **)(this + 0x30);
    plVar9 = *(long **)(this + 0x28);
  }
  else {
    plVar9 = plVar8 + 2;
    *plVar8 = local_38;
    plVar8[1] = lStack_30;
    *(long **)(this + 0x28) = plVar9;
  }
  local_38 = *(long *)(param_1 + 0x10);
  if (plVar14 == plVar9) {
    lStack_30 = lVar15;
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    local_38 = *(long *)(param_1 + 0x10);
    plVar14 = *(long **)(this + 0x30);
    plVar8 = *(long **)(this + 0x28);
  }
  else {
    plVar8 = plVar9 + 2;
    *plVar9 = local_38;
    plVar9[1] = lVar15;
    *(long **)(this + 0x28) = plVar8;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  if (plVar8 == plVar14) {
    lStack_30 = lVar15;
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    lVar15 = *(long *)(param_1 + 0x18);
    plVar14 = *(long **)(this + 0x30);
    plVar9 = *(long **)(this + 0x28);
  }
  else {
    plVar9 = plVar8 + 2;
    *plVar8 = local_38;
    plVar8[1] = lVar15;
    *(long **)(this + 0x28) = plVar9;
  }
  lVar13 = *(long *)param_1;
  local_38 = lVar13;
  lStack_30 = lVar15;
  if (plVar14 == plVar9) {
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    lVar15 = *(long *)(param_1 + 0x18);
    lVar13 = *(long *)param_1;
  }
  else {
    *plVar9 = lVar13;
    plVar9[1] = lVar15;
    *(long **)(this + 0x28) = plVar9 + 2;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x70) = 8;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(long *)(this + 0x40) = (lVar15 + lVar2) / 2;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(long *)(this + 0x38) = (lVar13 + lVar3) / 2;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  pvVar10 = operator_new(0x40);
  *(void **)(this + 0x68) = pvVar10;
  puVar1 = (undefined8 *)((long)pvVar10 + (*(long *)(this + 0x70) * 4 - 4U & 0xfffffffffffffff8));
  pvVar10 = operator_new(0x1e0);
  *(undefined8 *)(this + 200) = 0;
  *puVar1 = pvVar10;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(void **)(this + 0x78) = pvVar10;
  *(void **)(this + 0x80) = pvVar10;
  *(long *)(this + 0x88) = (long)pvVar10 + 0x1e0;
  *(undefined8 **)(this + 0x90) = puVar1;
  *(long *)(this + 0xa8) = (long)pvVar10 + 0x1e0;
  *(undefined8 **)(this + 0xb0) = puVar1;
  *(void **)(this + 0x98) = pvVar10;
  *(void **)(this + 0xa0) = pvVar10;
  pRVar11 = this + 0xd0;
  do {
    *(undefined1 (*) [16])pRVar11 = (undefined1  [16])0x0;
    pRVar12 = pRVar11 + 0x30;
    *(undefined1 (*) [16])(pRVar11 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pRVar11 + 0x20) = (undefined1  [16])0x0;
    pRVar11 = pRVar12;
  } while (pRVar12 != this + 400);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_realloc_insert<Clipper2Lib::Point<double>>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00111e58;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00111e62:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_00111dca:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00111e1c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00111e58:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00111e62;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00111e62;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_00111dca;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_00111e1c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* Clipper2Lib::RectClip(Clipper2Lib::Rect<double> const&,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&, int) */

Clipper2Lib * __thiscall
Clipper2Lib::RectClip(Clipper2Lib *this,Rect *param_1,vector *param_2,int param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double *pdVar5;
  double dVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  double *pdVar11;
  void **ppvVar12;
  ulong uVar13;
  undefined8 *puVar14;
  Clipper2Lib *pCVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  byte bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint local_27c;
  undefined1 local_278 [16];
  long local_268;
  undefined8 *local_258;
  undefined8 *local_250;
  long local_248;
  uint *local_238;
  double dStack_230;
  double dStack_228;
  uint *local_218;
  double dStack_210;
  double dStack_208;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  RectClip64 local_1d8 [32];
  void *local_1b8;
  long local_1a8;
  void *local_170;
  long local_168;
  undefined8 *local_148;
  long local_128;
  void *local_120 [2];
  long local_110;
  void *local_60 [3];
  void *local_48;
  long local_38;
  long local_30;
  
  bVar17 = 0;
  dVar21 = *(double *)(param_1 + 0x18);
  dVar20 = *(double *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (dVar20 < dVar21) {
    dVar22 = *(double *)(param_1 + 0x10);
    dVar19 = *(double *)param_1;
    if (((dVar19 < dVar22) && (*(long *)(param_2 + 8) != *(long *)param_2)) &&
       (local_27c = 0, param_3 + 8U < 0x11)) {
      dVar18 = pow(_LC36,(double)param_3);
      dVar19 = round(dVar19 * dVar18);
      local_1f8 = (long)dVar19;
      dVar20 = round(dVar20 * dVar18);
      local_1f0 = (long)dVar20;
      dVar20 = round(dVar22 * dVar18);
      local_1e8 = (long)dVar20;
      dVar21 = round(dVar21 * dVar18);
      local_1e0 = (long)dVar21;
      RectClip64::RectClip64(local_1d8,(Rect *)&local_1f8);
      puVar16 = *(undefined8 **)param_2;
      puVar14 = *(undefined8 **)(param_2 + 8);
      local_268 = 0;
      local_278 = (undefined1  [16])0x0;
      puVar9 = puVar16;
      dVar20 = _LC139;
      dVar21 = _LC140;
      dVar22 = _LC139;
      dVar19 = _LC140;
      if (puVar16 == puVar14) {
LAB_00112234:
        std::
        vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
        ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                   *)local_278,((long)puVar14 - (long)puVar16 >> 3) * -0x5555555555555555);
        local_238 = &local_27c;
        dStack_230 = dVar18;
        dStack_228 = dVar18;
        std::
        transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                  (*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8),
                   (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                    *)local_278);
        if (local_27c == 0) {
          dVar18 = _LC40 / dVar18;
          Clipper2Lib::RectClip64::Execute((vector *)&local_258);
          *(undefined8 *)(this + 0x10) = 0;
          *(undefined1 (*) [16])this = (undefined1  [16])0x0;
          uVar13 = (long)local_250 - (long)local_258;
          if (0x7ffffffffffffff8 < uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::reserve");
          }
          if (uVar13 != 0) {
            puVar8 = (undefined8 *)operator_new(uVar13);
            puVar14 = *(undefined8 **)(this + 8);
            puVar16 = *(undefined8 **)this;
            puVar7 = puVar8;
            for (puVar9 = puVar16; puVar14 != puVar9; puVar9 = puVar9 + 3) {
              uVar4 = puVar9[1];
              uVar2 = puVar9[2];
              *puVar7 = *puVar9;
              puVar7[1] = uVar4;
              puVar7[2] = uVar2;
              puVar7 = puVar7 + 3;
            }
            if (puVar16 != (undefined8 *)0x0) {
              operator_delete(puVar16,*(long *)(this + 0x10) - (long)puVar16);
            }
            *(undefined8 **)this = puVar8;
            *(undefined8 **)(this + 8) = puVar8;
            *(ulong *)(this + 0x10) = (long)puVar8 + uVar13;
          }
          local_218 = &local_27c;
          dStack_210 = dVar18;
          dStack_208 = dVar18;
          std::
          transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const*,std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,Clipper2Lib::ScalePaths<double,long>(std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                    (local_258,local_250,this);
          for (puVar16 = local_258; local_250 != puVar16; puVar16 = puVar16 + 3) {
            pvVar1 = (void *)*puVar16;
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1,puVar16[2] - (long)pvVar1);
            }
          }
          if (local_258 != (undefined8 *)0x0) {
            operator_delete(local_258,local_248 - (long)local_258);
          }
          puVar16 = (undefined8 *)local_278._8_8_;
        }
        else {
          pCVar15 = this;
          for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined4 *)pCVar15 = 0;
            pCVar15 = pCVar15 + (ulong)bVar17 * -8 + 4;
          }
          puVar16 = (undefined8 *)local_278._8_8_;
        }
        puVar14 = (undefined8 *)local_278._0_8_;
        if (puVar16 != (undefined8 *)local_278._0_8_) {
          do {
            pvVar1 = (void *)*puVar14;
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1,puVar14[2] - (long)pvVar1);
            }
            puVar14 = puVar14 + 3;
          } while (puVar14 != puVar16);
          puVar14 = (undefined8 *)local_278._0_8_;
        }
        if (puVar14 != (undefined8 *)0x0) {
          operator_delete(puVar14,local_268 - (long)puVar14);
        }
      }
      else {
        do {
          pdVar5 = (double *)*puVar9;
          while (dVar6 = dVar21, pdVar5 != (double *)puVar9[1]) {
            dVar23 = *pdVar5;
            pdVar11 = pdVar5 + 2;
            dVar3 = dVar23;
            if (dVar23 <= dVar22) {
              dVar3 = dVar22;
            }
            if (dVar19 <= dVar23) {
              dVar23 = dVar19;
            }
            dVar21 = pdVar5[1];
            dVar22 = dVar21;
            if (dVar21 <= dVar20) {
              dVar22 = dVar20;
            }
            pdVar5 = pdVar11;
            dVar20 = dVar22;
            dVar22 = dVar3;
            dVar19 = dVar23;
            if (dVar6 <= dVar21) {
              dVar21 = dVar6;
            }
          }
          puVar9 = puVar9 + 3;
          dVar21 = dVar6;
        } while (puVar14 != puVar9);
        if (((_LC141 <= dVar19 * dVar18) && (dVar22 * dVar18 <= _LC142)) &&
           ((_LC141 <= dVar6 * dVar18 && (dVar20 * dVar18 <= _LC142)))) goto LAB_00112234;
        local_27c = local_27c | 0x40;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      }
      if (local_48 != (void *)0x0) {
        operator_delete(local_48,local_38 - (long)local_48);
      }
      ppvVar12 = local_60;
      do {
        pvVar1 = *ppvVar12;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1,(long)ppvVar12[2] - (long)pvVar1);
        }
        ppvVar12 = ppvVar12 + -3;
      } while (local_120 != ppvVar12);
      if (local_120[0] != (void *)0x0) {
        operator_delete(local_120[0],local_110 - (long)local_120[0]);
      }
      if (local_170 != (void *)0x0) {
        for (puVar16 = local_148; puVar16 < (undefined8 *)(local_128 + 8U); puVar16 = puVar16 + 1) {
          operator_delete((void *)*puVar16,0x1e0);
        }
        operator_delete(local_170,local_168 * 8);
      }
      if (local_1b8 != (void *)0x0) {
        operator_delete(local_1b8,local_1a8 - (long)local_1b8);
      }
      goto LAB_00111f37;
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
LAB_00111f37:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Clipper2Lib::InflatePaths(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, Clipper2Lib::JoinType, Clipper2Lib::EndType, double, int, double) */

undefined1 (*) [16]
Clipper2Lib::InflatePaths
          (undefined1 (*param_2) [16],double param_2_00,double param_3,double param_4,double param_5
          ,undefined1 (*param_1) [16],undefined1 (*param_7) [16],ulong param_8,uint param_9,
          int param_10)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  void *pvVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*unaff_R13) [16];
  long *plVar18;
  long *unaff_R14;
  long in_FS_OFFSET;
  undefined1 (*pauVar19) [16];
  double dVar20;
  double extraout_XMM0_Qb;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 (*local_1b8) [16];
  int local_17c;
  undefined1 local_178 [16];
  long local_168;
  int *local_158;
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 local_138 [16];
  double dStack_128;
  undefined4 local_118 [2];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  long local_90;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_17c = 0;
  if (param_10 + 8U < 0x11) {
    unaff_R13 = (undefined1 (*) [16])(param_8 & 0xffffffff);
    unaff_R14 = (long *)(ulong)param_9;
    param_4 = param_2_00;
    if ((double)param_2 == 0.0) goto LAB_00112550;
    pauVar19 = (undefined1 (*) [16])pow(_LC36,(double)param_10);
    pauVar17 = *(undefined1 (**) [16])*param_7;
    pauVar16 = *(undefined1 (**) [16])(*param_7 + 8);
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    local_118[0] = 0;
    local_90 = 0;
    local_88 = 1;
    local_70 = 0;
    local_58 = (code *)0x0;
    local_50 = 0;
    dStack_128 = 0.0;
    local_e0 = (undefined1  [16])0x0;
    local_d0 = (undefined1  [16])0x0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    pauVar13 = pauVar17;
    dVar22 = _LC139;
    dVar20 = _LC140;
    dVar21 = _LC140;
    param_5 = _LC139;
    local_1b8 = pauVar19;
    local_80 = param_2_00;
    dStack_78 = param_3;
    if (pauVar17 == pauVar16) goto LAB_00112a67;
    do {
      pdVar4 = *(double **)*pauVar13;
      while (param_4 = dVar20, pdVar4 != *(double **)(*pauVar13 + 8)) {
        dVar23 = *pdVar4;
        pdVar8 = pdVar4 + 2;
        dVar2 = dVar23;
        if (dVar23 <= param_5) {
          dVar2 = param_5;
        }
        if (dVar21 <= dVar23) {
          dVar23 = dVar21;
        }
        dVar20 = pdVar4[1];
        dVar21 = dVar20;
        if (dVar20 <= dVar22) {
          dVar21 = dVar22;
        }
        pdVar4 = pdVar8;
        dVar22 = dVar21;
        dVar21 = dVar23;
        param_5 = dVar2;
        if (param_4 <= dVar20) {
          dVar20 = param_4;
        }
      }
      pauVar6 = pauVar13 + 1;
      pauVar13 = (undefined1 (*) [16])(*pauVar6 + 8);
      dVar20 = param_4;
    } while (pauVar16 != (undefined1 (*) [16])(*pauVar6 + 8));
    dVar20 = _LC141;
    if (_LC141 <= dVar21 * (double)pauVar19) goto LAB_00112a35;
LAB_001127fe:
    local_17c = 0x40;
LAB_0011280e:
    Clipper2Lib::ClipperOffset::AddPaths
              ((vector *)local_118,local_138,(ulong)unaff_R13 & 0xffffffff,
               (ulong)unaff_R14 & 0xffffffff);
    uVar1 = local_138._8_8_;
    puVar15 = (undefined8 *)local_138._0_8_;
    if (local_138._8_8_ != local_138._0_8_) {
      do {
        pvVar7 = (void *)*puVar15;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7,puVar15[2] - (long)pvVar7);
        }
        puVar15 = puVar15 + 3;
      } while ((undefined8 *)uVar1 != puVar15);
    }
    if ((undefined8 *)local_138._0_8_ != (undefined8 *)0x0) {
      operator_delete((void *)local_138._0_8_,(long)dStack_128 - local_138._0_8_);
    }
    if (local_17c == 0) {
      local_178 = (undefined1  [16])0x0;
      local_168 = 0;
      Clipper2Lib::ClipperOffset::Execute((double)param_2 * (double)local_1b8,(vector *)local_118);
      dVar20 = _LC40;
      *(undefined8 *)param_1[1] = 0;
      dVar20 = dVar20 / (double)local_1b8;
      *param_1 = (undefined1  [16])0x0;
      pauVar13 = (undefined1 (*) [16])(local_178._8_8_ - local_178._0_8_);
      if ((undefined1 (*) [16])0x7ffffffffffffff8 < pauVar13) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::reserve");
      }
      dVar22 = dVar20;
      if (pauVar13 != (undefined1 (*) [16])0x0) {
LAB_00112bfd:
        puVar9 = (undefined8 *)operator_new((ulong)pauVar13);
        puVar14 = *(undefined8 **)(*param_1 + 8);
        puVar15 = *(undefined8 **)*param_1;
        puVar5 = puVar9;
        for (puVar10 = puVar15; puVar14 != puVar10; puVar10 = puVar10 + 3) {
          uVar3 = puVar10[1];
          uVar1 = puVar10[2];
          *puVar5 = *puVar10;
          puVar5[1] = uVar3;
          puVar5[2] = uVar1;
          puVar5 = puVar5 + 3;
        }
        if (puVar15 != (undefined8 *)0x0) {
          operator_delete(puVar15,*(long *)param_1[1] - (long)puVar15);
        }
        *(undefined8 **)*param_1 = puVar9;
        *(undefined8 **)(*param_1 + 8) = puVar9;
        *(long *)param_1[1] = (long)puVar9 + (long)pauVar13;
      }
      local_138._8_8_ = dVar20;
      local_138._0_8_ = &local_17c;
      dStack_128 = dVar22;
      std::
      transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const*,std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,Clipper2Lib::ScalePaths<double,long>(std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                (local_178._0_8_,local_178._8_8_,param_1);
      uVar1 = local_178._8_8_;
      puVar15 = (undefined8 *)local_178._0_8_;
      if (local_178._8_8_ != local_178._0_8_) {
        do {
          pvVar7 = (void *)*puVar15;
          if (pvVar7 != (void *)0x0) {
            operator_delete(pvVar7,puVar15[2] - (long)pvVar7);
          }
          puVar15 = puVar15 + 3;
        } while ((undefined8 *)uVar1 != puVar15);
      }
      if ((undefined8 *)local_178._0_8_ != (undefined8 *)0x0) {
        operator_delete((void *)local_178._0_8_,local_168 - local_178._0_8_);
      }
    }
    else {
      *(undefined8 *)param_1[1] = 0;
      *param_1 = (undefined1  [16])0x0;
    }
    uVar1 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    plVar18 = (long *)local_a0._0_8_;
    if (local_a0._0_8_ != local_a0._8_8_) {
      do {
        puVar15 = (undefined8 *)plVar18[1];
        puVar14 = (undefined8 *)*plVar18;
        if (puVar15 != puVar14) {
          do {
            pvVar7 = (void *)*puVar14;
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7,puVar14[2] - (long)pvVar7);
            }
            puVar14 = puVar14 + 3;
          } while (puVar15 != puVar14);
          puVar14 = (undefined8 *)*plVar18;
        }
        if (puVar14 != (undefined8 *)0x0) {
          operator_delete(puVar14,plVar18[2] - (long)puVar14);
        }
        plVar18 = plVar18 + 7;
      } while ((long *)uVar3 != plVar18);
      local_a0._8_8_ = uVar1;
    }
    if (local_e0._0_8_ != local_e0._8_8_) {
      local_e0._8_8_ = local_e0._0_8_;
    }
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    uVar1 = local_a0._8_8_;
    plVar18 = (long *)local_a0._0_8_;
    if (local_a0._8_8_ != local_a0._0_8_) {
      do {
        puVar15 = (undefined8 *)plVar18[1];
        puVar14 = (undefined8 *)*plVar18;
        if (puVar15 != puVar14) {
          do {
            pvVar7 = (void *)*puVar14;
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7,puVar14[2] - (long)pvVar7);
            }
            puVar14 = puVar14 + 3;
          } while (puVar15 != puVar14);
          puVar14 = (undefined8 *)*plVar18;
        }
        if (puVar14 != (undefined8 *)0x0) {
          operator_delete(puVar14,plVar18[2] - (long)puVar14);
        }
        plVar18 = plVar18 + 7;
      } while ((long *)uVar1 != plVar18);
    }
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      operator_delete((void *)local_a0._0_8_,local_90 - local_a0._0_8_);
    }
    if ((void *)local_d0._8_8_ != (void *)0x0) {
      operator_delete((void *)local_d0._8_8_,local_c0._8_8_ - local_d0._8_8_);
    }
    if ((void *)local_e0._0_8_ != (void *)0x0) {
      operator_delete((void *)local_e0._0_8_,local_d0._0_8_ - local_e0._0_8_);
    }
  }
  else {
    local_17c = 1;
    if ((double)param_2 != 0.0) {
      *(undefined8 *)param_1[1] = 0;
      *param_1 = (undefined1  [16])0x0;
      goto LAB_00112521;
    }
LAB_00112550:
    pauVar13 = (undefined1 (*) [16])(*(long *)(*param_7 + 8) - *(long *)*param_7);
    *(undefined8 *)param_1[1] = 0;
    *param_1 = (undefined1  [16])0x0;
    pauVar16 = param_7;
    pauVar17 = param_1;
    dVar22 = param_3;
    pauVar19 = param_2;
    if (pauVar13 == (undefined1 (*) [16])0x0) {
      pauVar13 = (undefined1 (*) [16])0x0;
      unaff_R13 = (undefined1 (*) [16])0x0;
    }
    else {
      if ((undefined1 (*) [16])0x7ffffffffffffff8 < pauVar13) {
LAB_00112a30:
        dVar20 = (double)std::__throw_bad_array_new_length();
        param_2 = pauVar13;
LAB_00112a35:
        if (((_LC142 < param_5 * (double)pauVar19) || (param_4 * (double)pauVar19 < dVar20)) ||
           (_LC142 < dVar22 * (double)pauVar19)) goto LAB_001127fe;
LAB_00112a67:
        std::
        vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
        ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                   *)local_138,((long)pauVar16 - (long)pauVar17 >> 3) * -0x5555555555555555);
        local_158 = &local_17c;
        pauStack_150 = local_1b8;
        pauStack_148 = local_1b8;
        std::
        transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                  (*(undefined8 *)*param_7,*(undefined8 *)(*param_7 + 8),
                   (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                    *)local_138);
        goto LAB_0011280e;
      }
      pauVar17 = pauVar13;
      unaff_R13 = (undefined1 (*) [16])operator_new((ulong)pauVar13);
      dVar22 = param_3;
      pauVar19 = param_2;
    }
    *(undefined1 **)param_1[1] = *unaff_R13 + (long)*pauVar13;
    *(undefined1 (**) [16])*param_1 = unaff_R13;
    *(undefined1 (**) [16])(*param_1 + 8) = unaff_R13;
    unaff_R14 = *(long **)(*param_7 + 8);
    plVar18 = *(long **)*param_7;
    if (unaff_R14 != plVar18) {
      pauVar13 = (undefined1 (*) [16])0x7ffffffffffffff0;
      do {
        param_7 = (undefined1 (*) [16])(plVar18[1] - *plVar18);
        *(undefined8 *)unaff_R13[1] = 0;
        *unaff_R13 = (undefined1  [16])0x0;
        if (param_7 == (undefined1 (*) [16])0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if ((undefined1 (*) [16])0x7ffffffffffffff0 < param_7) {
            if ((long)param_7 < 0) goto LAB_00112a30;
            dVar20 = (double)std::__throw_bad_alloc();
            dVar22 = extraout_XMM0_Qb;
            goto LAB_00112bfd;
          }
          pauVar17 = param_7;
          pvVar7 = operator_new((ulong)param_7);
        }
        *(undefined1 **)unaff_R13[1] = *param_7 + (long)pvVar7;
        *(void **)*unaff_R13 = pvVar7;
        *(void **)(*unaff_R13 + 8) = pvVar7;
        pauVar16 = (undefined1 (*) [16])*plVar18;
        if ((undefined1 (*) [16])plVar18[1] != pauVar16) {
          lVar11 = plVar18[1] - (long)pauVar16;
          lVar12 = 0;
          do {
            pauVar19 = *(undefined1 (**) [16])(*pauVar16 + lVar12);
            uVar1 = *(undefined8 *)((long)(*pauVar16 + lVar12) + 8);
            *(undefined8 *)((long)pvVar7 + lVar12) = pauVar19;
            ((undefined8 *)((long)pvVar7 + lVar12))[1] = uVar1;
            lVar12 = lVar12 + 0x10;
          } while (lVar11 != lVar12);
          pvVar7 = (void *)((long)pvVar7 + lVar11);
        }
        plVar18 = plVar18 + 3;
        *(void **)(*unaff_R13 + 8) = pvVar7;
        unaff_R13 = (undefined1 (*) [16])(unaff_R13[1] + 8);
      } while (unaff_R14 != plVar18);
    }
    *(undefined1 (**) [16])(*param_1 + 8) = unaff_R13;
  }
LAB_00112521:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00112e48) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindT<Node*, Node*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Node*,Node*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113280;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00113118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10),
               *(undefined8 *)(*(long *)(param_3 + 8) + 0x10));
    return;
  }
LAB_00113280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*, Node*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Node*,Node*>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113446;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_00113446:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*, Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Node*,Node*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Object *pOVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *this;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar9 = (long *)plVar13[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar9 = (long *)(plVar13[1] + 0x20);
    }
    if (local_48 == *plVar9) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_50 = 0;
      String::parse_latin1
                ((String *)&local_50,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_48,(String *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011366c;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar6 = 3;
LAB_001136a5:
    *in_R9 = uVar6;
    in_R9[2] = 2;
    goto LAB_0011366c;
  }
  pVVar16 = param_2[5];
  iVar5 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar5 != 0) goto LAB_001136b8;
    this = *(Variant **)param_4;
LAB_001136cd:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar11 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar11;
    if (iVar14 < iVar5) {
LAB_001136b8:
      uVar6 = 4;
      goto LAB_001136a5;
    }
    if (in_R8D == 0) {
      lVar12 = (long)(iVar14 + -2);
      if (lVar11 <= lVar12) goto LAB_00113820;
      this = pVVar16 + lVar12 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_001136cd;
    }
    lVar12 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar5));
    if (lVar11 <= lVar12) {
LAB_00113820:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar11,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar16 = pVVar16 + lVar12 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar16,0x18);
  if (cVar4 == '\0') {
LAB_001135d4:
    uVar3 = _LC81;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar16);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar16);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar11 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar11 == 0)) &&
       (pOVar7 != (Object *)0x0)) goto LAB_001135d4;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar16);
  if (pOVar7 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)this,0x18);
  if (cVar4 == '\0') {
LAB_00113627:
    uVar3 = _LC77;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(this);
    pOVar10 = Variant::operator_cast_to_Object_(this);
    if (((pOVar10 == (Object *)0x0) ||
        (lVar11 = __dynamic_cast(pOVar10,&Object::typeinfo,&Node::typeinfo,0), lVar11 == 0)) &&
       (pOVar8 != (Object *)0x0)) goto LAB_00113627;
  }
  pOVar8 = Variant::operator_cast_to_Object_(this);
  if (pOVar8 != (Object *)0x0) {
    pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar15)((Variant *)((long)plVar13 + (long)pVVar1),pOVar8,pOVar7);
LAB_0011366c:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<Node*>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Node*>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Node");
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = 0x18;
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *(undefined4 *)param_3 = local_68;
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*, Node*>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Node*,Node*>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Node*>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Node*>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Sprite2DEditor::_node_removed(Node*) */

void Sprite2DEditor::_GLOBAL__sub_I__node_removed(void)

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
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::RectClip64::RectClip64(Clipper2Lib::Rect<long> const&) */

void __thiscall Clipper2Lib::RectClip64::RectClip64(RectClip64 *this,Rect *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Sprite2DEditor::~Sprite2DEditor() */

void __thiscall Sprite2DEditor::~Sprite2DEditor(Sprite2DEditor *this)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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
/* HScrollBar::~HScrollBar() */

void __thiscall HScrollBar::~HScrollBar(HScrollBar *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VScrollBar::~VScrollBar() */

void __thiscall VScrollBar::~VScrollBar(VScrollBar *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Node*, Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*,Node*>::~MethodBindT(MethodBindT<Node*,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Sprite2DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Sprite2DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Sprite2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Sprite2DEditor, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,Vector2,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Sprite2DEditor, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,float,Vector2,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Sprite2DEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Sprite2DEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Sprite2DEditor,void,bool> *this)

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


