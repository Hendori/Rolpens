
/* CollisionShape2DEditor::_node_removed(Node*) */

void __thiscall CollisionShape2DEditor::_node_removed(CollisionShape2DEditor *this,Node *param_1)

{
  if (*(Node **)(this + 0xa10) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0xa10) = 0;
  return;
}



/* void Ref<CapsuleShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<CapsuleShape2D>::operator=(Ref<CapsuleShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&CapsuleShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<WorldBoundaryShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<WorldBoundaryShape2D>::operator=(Ref<WorldBoundaryShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&WorldBoundaryShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<CircleShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<CircleShape2D>::operator=(Ref<CircleShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&CircleShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<SeparationRayShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<SeparationRayShape2D>::operator=(Ref<SeparationRayShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&SeparationRayShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<RectangleShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<RectangleShape2D>::operator=(Ref<RectangleShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&RectangleShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<SegmentShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<SegmentShape2D>::operator=(Ref<SegmentShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&SegmentShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<ConvexPolygonShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<ConvexPolygonShape2D>::operator=(Ref<ConvexPolygonShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&ConvexPolygonShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* void Ref<ConcavePolygonShape2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape2D> const&) [clone .isra.0] */

void __thiscall Ref<ConcavePolygonShape2D>::operator=(Ref<ConcavePolygonShape2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&ConcavePolygonShape2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* CollisionShape2DEditorPlugin::handles(Object*) const */

undefined4 __thiscall
CollisionShape2DEditorPlugin::handles(CollisionShape2DEditorPlugin *this,Object *param_1)

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
  local_30 = 0x10;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "CollisionShape2D";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape2DEditorPlugin::~CollisionShape2DEditorPlugin() */

void __thiscall
CollisionShape2DEditorPlugin::~CollisionShape2DEditorPlugin(CollisionShape2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001099f8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* CollisionShape2DEditorPlugin::~CollisionShape2DEditorPlugin() */

void __thiscall
CollisionShape2DEditorPlugin::~CollisionShape2DEditorPlugin(CollisionShape2DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001099f8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollisionShape2DEditor::CollisionShape2DEditor() */

void __thiscall CollisionShape2DEditor::CollisionShape2DEditor(CollisionShape2DEditor *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  uVar2 = _UNK_00109e58;
  uVar1 = __LC104;
  this[0xa30] = (CollisionShape2DEditor)0x0;
  *(undefined8 *)(this + 0x9c8) = uVar1;
  *(undefined8 *)(this + 0x9d0) = uVar2;
  uVar2 = _UNK_00109e68;
  uVar1 = __LC12;
  *(undefined ***)this = &PTR__initialize_classv_00109690;
  *(undefined8 *)(this + 0x9d8) = uVar1;
  *(undefined8 *)(this + 0x9e0) = uVar2;
  uVar2 = _UNK_00109e78;
  uVar1 = __LC13;
  *(undefined8 *)(this + 0xa58) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x9e8) = uVar1;
  *(undefined8 *)(this + 0x9f0) = uVar2;
  uVar2 = _UNK_00109e88;
  uVar1 = __LC14;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0x9f8) = uVar1;
  *(undefined8 *)(this + 0xa00) = uVar2;
  *(undefined8 *)(this + 0xa28) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa34) = 0x41000000;
  *(undefined8 *)(this + 0xa50) = 0x3f800000;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  local_48 = "editors/polygon_editor/point_grab_radius";
  local_50 = 0;
  local_40 = 0x28;
  String::parse_latin1((StrRange *)&local_50);
  _EDITOR_GET((String *)local_38);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_38);
  *(float *)(this + 0xa34) = fVar3;
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape2DEditorPlugin::CollisionShape2DEditorPlugin() */

void __thiscall
CollisionShape2DEditorPlugin::CollisionShape2DEditorPlugin(CollisionShape2DEditorPlugin *this)

{
  long lVar1;
  CollisionShape2DEditor *this_00;
  
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (CollisionShape2DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001099f8;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (CollisionShape2DEditor *)operator_new(0xa88,"");
  CollisionShape2DEditor::CollisionShape2DEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = EditorNode::singleton;
  *(CollisionShape2DEditor **)(this + 0x660) = this_00;
  Node::add_child(*(undefined8 *)(lVar1 + 0x6c8),this_00,0,0);
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



/* CollisionShape2DEditor::_shape_changed() */

void __thiscall CollisionShape2DEditor::_shape_changed(CollisionShape2DEditor *this)

{
  Callable *pCVar1;
  Object *pOVar2;
  Callable *pCVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItemEditor::update_viewport();
  pCVar1 = *(Callable **)(this + 0xa80);
  if (pCVar1 != (Callable *)0x0) {
    create_custom_callable_function_pointer<CanvasItemEditor>
              ((CanvasItemEditor *)local_38,*(char **)(this + 0xa08),
               (_func_void *)"&CanvasItemEditor::update_viewport");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)local_38);
    pOVar2 = *(Object **)(this + 0xa80);
    if (pOVar2 != (Object *)0x0) {
      *(undefined8 *)(this + 0xa80) = 0;
      local_38[0] = pOVar2;
      Ref<Shape2D>::unref((Ref<Shape2D> *)local_38);
    }
    *(undefined4 *)(this + 0xa28) = 0xffffffff;
  }
  if (*(long *)(this + 0xa10) != 0) {
    CollisionShape2D::get_shape();
    pOVar2 = *(Object **)(this + 0xa80);
    if (local_40 != pOVar2) {
      *(Object **)(this + 0xa80) = local_40;
      local_38[0] = pOVar2;
      if (local_40 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0xa80) = 0;
        }
      }
      Ref<Shape2D>::unref((Ref<Shape2D> *)local_38);
    }
    if (local_40 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_40);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_40 + 0x140))(local_40);
          Memory::free_static(local_40,false);
        }
      }
    }
    pCVar3 = *(Callable **)(this + 0xa80);
    if (pCVar3 != (Callable *)0x0) {
      create_custom_callable_function_pointer<CanvasItemEditor>
                ((CanvasItemEditor *)local_38,*(char **)(this + 0xa08),
                 (_func_void *)"&CanvasItemEditor::update_viewport");
      Resource::connect_changed(pCVar3,(uint)(CanvasItemEditor *)local_38);
      Callable::~Callable((Callable *)local_38);
      lVar6 = *(long *)(this + 0xa80);
      if (lVar6 != 0) {
        lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&CapsuleShape2D::typeinfo,0);
        if (lVar5 == 0) {
          lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&CircleShape2D::typeinfo,0);
          if (lVar5 == 0) {
            lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&ConcavePolygonShape2D::typeinfo,0);
            if (lVar5 == 0) {
              lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&ConvexPolygonShape2D::typeinfo,0);
              if (lVar5 == 0) {
                lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&WorldBoundaryShape2D::typeinfo,0);
                if (lVar5 == 0) {
                  lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&SeparationRayShape2D::typeinfo,0);
                  if (lVar5 == 0) {
                    lVar5 = __dynamic_cast(lVar6,&Object::typeinfo,&RectangleShape2D::typeinfo,0);
                    if (lVar5 == 0) {
                      lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&SegmentShape2D::typeinfo,0);
                      if (lVar6 != 0) {
                        *(undefined4 *)(this + 0xa28) = 7;
                      }
                    }
                    else {
                      *(undefined4 *)(this + 0xa28) = 6;
                    }
                  }
                  else {
                    *(undefined4 *)(this + 0xa28) = 5;
                  }
                }
                else {
                  *(undefined4 *)(this + 0xa28) = 4;
                }
              }
              else {
                *(undefined4 *)(this + 0xa28) = 3;
              }
            }
            else {
              *(undefined4 *)(this + 0xa28) = 2;
            }
          }
          else {
            *(undefined4 *)(this + 0xa28) = 1;
          }
        }
        else {
          *(undefined4 *)(this + 0xa28) = 0;
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



/* CollisionShape2DEditor::_notification(int) */

void __thiscall CollisionShape2DEditor::_notification(CollisionShape2DEditor *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_60;
  long local_58 [2];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x11) {
    if (*(long *)(this + 0xa10) != 0) {
      CollisionShape2D::get_shape();
      if (local_58[0] != *(long *)(this + 0xa80)) {
        Ref<Shape2D>::unref((Ref<Shape2D> *)local_58);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _shape_changed(this);
          return;
        }
        goto LAB_001012c7;
      }
      Ref<Shape2D>::unref((Ref<Shape2D> *)local_58);
    }
  }
  else if (param_1 < 0x12) {
    if (param_1 == 10) {
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) {
CollisionShape2DEditor__notification:
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<CollisionShape2DEditor,Node*>
                ((CollisionShape2DEditor *)local_58,(char *)this,
                 (_func_void_Node_ptr *)"&CollisionShape2DEditor::_node_removed");
      StringName::StringName((StringName *)&local_60,"node_removed",false);
      (*pcVar2)(plVar1,(StringName *)&local_60,(CollisionShape2DEditor *)local_58,0);
    }
    else {
      if (param_1 != 0xb) goto LAB_001010fd;
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto CollisionShape2DEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<CollisionShape2DEditor,Node*>
                ((CollisionShape2DEditor *)local_58,(char *)this,
                 (_func_void_Node_ptr *)"&CollisionShape2DEditor::_node_removed");
      StringName::StringName((StringName *)&local_60,"node_removed",false);
      (*pcVar2)(plVar1,(StringName *)&local_60,(CollisionShape2DEditor *)local_58);
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
  }
  else if (param_1 == 10000) {
    pSVar4 = (String *)EditorSettings::get_singleton();
    local_58[0] = 0;
    String::parse_latin1((String *)local_58,"editors/polygon_editor");
    cVar3 = EditorSettings::check_changed_settings_in_group(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    if (cVar3 != '\0') {
      local_58[0] = 0;
      String::parse_latin1((String *)local_58,"editors/polygon_editor/point_grab_radius");
      _EDITOR_GET((String *)local_48);
      fVar5 = Variant::operator_cast_to_float((Variant *)local_48);
      *(float *)(this + 0xa34) = fVar5;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    }
  }
LAB_001010fd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001012c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape2DEditor::get_handle_value(int) const */

Variant * CollisionShape2DEditor::get_handle_value(int param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Variant *this;
  long in_FS_OFFSET;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Object *local_50;
  Ref *local_48;
  long local_40;
  ulong local_38;
  long local_30;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(in_RSI + 0xa28)) {
  case 0:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<CapsuleShape2D>::operator=((Ref<CapsuleShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    pOVar2 = local_50;
    uVar6 = CapsuleShape2D::get_height();
    uVar7 = CapsuleShape2D::get_radius();
    local_38 = CONCAT44(uVar6,uVar7);
    Variant::Variant(this,(Vector2 *)&local_38);
    cVar3 = RefCounted::unreference();
    goto joined_r0x001015a3;
  case 1:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<CircleShape2D>::operator=((Ref<CircleShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    if (in_EDX == 0) {
      fVar5 = (float)CircleShape2D::get_radius();
      Variant::Variant(this,fVar5);
      Ref<CircleShape2D>::unref((Ref<CircleShape2D> *)&local_50);
      goto LAB_0010132e;
    }
    Ref<CircleShape2D>::unref((Ref<CircleShape2D> *)&local_50);
    break;
  case 2:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<ConcavePolygonShape2D>::operator=((Ref<ConcavePolygonShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    ConcavePolygonShape2D::get_segments();
    lVar4 = (long)in_EDX;
    if (lVar4 < 0) {
LAB_00101800:
      if (local_40 != 0) goto LAB_00101790;
    }
    else if (local_40 != 0) {
      if (lVar4 < *(long *)(local_40 + -8)) {
        Variant::Variant(this,(Vector2 *)(local_40 + lVar4 * 8));
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_40);
        Ref<ConcavePolygonShape2D>::unref((Ref<ConcavePolygonShape2D> *)&local_50);
        goto LAB_0010132e;
      }
      goto LAB_00101790;
    }
LAB_00101808:
    lVar4 = 0;
    goto LAB_00101794;
  case 3:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<ConvexPolygonShape2D>::operator=((Ref<ConvexPolygonShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    ConvexPolygonShape2D::get_points();
    lVar4 = (long)in_EDX;
    if (lVar4 < 0) goto LAB_00101800;
    if (local_40 == 0) goto LAB_00101808;
    if (lVar4 < *(long *)(local_40 + -8)) {
      Variant::Variant(this,(Vector2 *)(local_40 + lVar4 * 8));
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_40);
      Ref<ConvexPolygonShape2D>::unref((Ref<ConvexPolygonShape2D> *)&local_50);
      goto LAB_0010132e;
    }
LAB_00101790:
    lVar4 = *(long *)(local_40 + -8);
LAB_00101794:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,(long)in_EDX,lVar4,"p_index","size()","",
               false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 4:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<WorldBoundaryShape2D>::operator=((Ref<WorldBoundaryShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    pOVar2 = local_50;
    if (in_EDX == 0) {
      fVar5 = (float)WorldBoundaryShape2D::get_distance();
      Variant::Variant(this,fVar5);
    }
    else {
      local_38 = WorldBoundaryShape2D::get_normal();
      Variant::Variant(this,(Vector2 *)&local_38);
    }
    cVar3 = RefCounted::unreference();
joined_r0x001015a3:
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    goto LAB_0010132e;
  case 5:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<SeparationRayShape2D>::operator=((Ref<SeparationRayShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    if (in_EDX == 0) {
      fVar5 = (float)SeparationRayShape2D::get_length();
      Variant::Variant(this,fVar5);
      Ref<SeparationRayShape2D>::unref((Ref<SeparationRayShape2D> *)&local_50);
      goto LAB_0010132e;
    }
    Ref<SeparationRayShape2D>::unref((Ref<SeparationRayShape2D> *)&local_50);
    break;
  case 6:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<RectangleShape2D>::operator=((Ref<RectangleShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    if (in_EDX < 8) {
      local_38 = RectangleShape2D::get_size();
      local_38 = _LC62 & local_38;
      Variant::Variant(this,(Vector2 *)&local_38);
      Ref<RectangleShape2D>::unref((Ref<RectangleShape2D> *)&local_50);
      goto LAB_0010132e;
    }
    Ref<RectangleShape2D>::unref((Ref<RectangleShape2D> *)&local_50);
    break;
  case 7:
    CollisionShape2D::get_shape();
    local_50 = (Object *)0x0;
    Ref<SegmentShape2D>::operator=((Ref<SegmentShape2D> *)&local_50,local_48);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_48);
    if (in_EDX == 0) {
      local_38 = SegmentShape2D::get_a();
      Variant::Variant(this,(Vector2 *)&local_38);
    }
    else {
      if (in_EDX != 1) {
        Ref<SegmentShape2D>::unref((Ref<SegmentShape2D> *)&local_50);
        break;
      }
      local_38 = SegmentShape2D::get_b();
      Variant::Variant(this,(Vector2 *)&local_38);
    }
    Ref<SegmentShape2D>::unref((Ref<SegmentShape2D> *)&local_50);
    goto LAB_0010132e;
  }
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_0010132e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* CollisionShape2DEditor::commit_handle(int, Variant&) */

void __thiscall
CollisionShape2DEditor::commit_handle(CollisionShape2DEditor *this,int param_1,Variant *param_2)

{
  StringName *pSVar1;
  StringName *pSVar2;
  Object *this_00;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  float fVar6;
  EditorUndoRedoManager *pEVar7;
  undefined8 uVar8;
  float local_118;
  EditorUndoRedoManager *local_110;
  StringName *local_f8;
  long local_f0;
  StringName *local_e8;
  long local_e0;
  Ref *local_d8;
  undefined8 local_d0;
  Variant *local_c8 [2];
  Variant *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  Variant *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  local_e8 = (StringName *)0x0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"Set Handle");
  TTR((String *)&local_d8,(String *)&local_f0);
  EditorUndoRedoManager::create_action(this_00,(String *)&local_d8,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  switch(*(undefined4 *)(this + 0xa28)) {
  case 0:
    CollisionShape2D::get_shape();
    local_e8 = (StringName *)0x0;
    Ref<CapsuleShape2D>::operator=((Ref<CapsuleShape2D> *)&local_e8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    uVar8 = Variant::operator_cast_to_Vector2(param_2);
    pSVar2 = local_e8;
    if (param_1 == 0) {
      fVar6 = (float)CapsuleShape2D::get_radius();
      StringName::StringName((StringName *)&local_d8,"set_radius",false);
      EditorUndoRedoManager::add_do_method<float>
                ((EditorUndoRedoManager *)this_00,(Object *)pSVar2,(StringName *)&local_d8,fVar6);
joined_r0x001026c1:
      if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
        StringName::unref();
      }
    }
    else if (param_1 == 1) {
      fVar6 = (float)CapsuleShape2D::get_height();
      StringName::StringName((StringName *)&local_d8,"set_height",false);
      EditorUndoRedoManager::add_do_method<float>
                ((EditorUndoRedoManager *)this_00,(Object *)pSVar2,(StringName *)&local_d8,fVar6);
      goto joined_r0x001026c1;
    }
    local_118 = (float)uVar8;
    StringName::StringName((StringName *)&local_d8,"set_radius",false);
    Variant::Variant((Variant *)local_78,local_118);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_d8,(int)&local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d8,"set_height",false);
    Variant::Variant((Variant *)local_78,(float)((ulong)uVar8 >> 0x20));
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_d8,(int)&local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    Ref<CapsuleShape2D>::unref((Ref<CapsuleShape2D> *)&local_e8);
    break;
  case 1:
    CollisionShape2D::get_shape();
    local_e8 = (StringName *)0x0;
    Ref<CircleShape2D>::operator=((Ref<CircleShape2D> *)&local_e8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    pSVar2 = local_e8;
    fVar6 = (float)CircleShape2D::get_radius();
    StringName::StringName((StringName *)&local_d8,"set_radius",false);
    EditorUndoRedoManager::add_do_method<float>
              ((EditorUndoRedoManager *)this_00,(Object *)pSVar2,(StringName *)&local_d8,fVar6);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)local_78,param_2);
    StringName::StringName((StringName *)&local_d8,"set_radius",false);
    EditorUndoRedoManager::add_undo_method<Variant>
              ((EditorUndoRedoManager *)this_00,pSVar2,(String *)&local_d8,(Variant *)local_78);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<CircleShape2D>::unref((Ref<CircleShape2D> *)&local_e8);
    break;
  case 2:
    CollisionShape2D::get_shape();
    lVar4 = (long)param_1;
    local_f8 = (StringName *)0x0;
    Ref<ConcavePolygonShape2D>::operator=((Ref<ConcavePolygonShape2D> *)&local_f8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    uVar8 = Variant::operator_cast_to_Vector2(param_2);
    pSVar2 = local_f8;
    ConcavePolygonShape2D::get_segments();
    if (param_1 < 0) {
      if (local_e0 == 0) goto LAB_00102899;
LAB_001027a8:
      lVar3 = *(long *)(local_e0 + -8);
    }
    else {
      if (local_e0 != 0) {
        if (*(long *)(local_e0 + -8) <= lVar4) goto LAB_001027a8;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
        *(undefined8 *)(local_e0 + lVar4 * 8) = uVar8;
        ConcavePolygonShape2D::get_segments();
        StringName::StringName((StringName *)&local_f0,"set_segments",false);
        Variant::Variant((Variant *)local_78,(Vector *)&local_d8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98 = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_f0,(int)&local_98);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_f0 != 0)) {
          StringName::unref();
        }
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
        local_d0 = 0;
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_d0,(CowData *)&local_e0);
        StringName::StringName((StringName *)&local_f0,"set_segments",false);
        Variant::Variant((Variant *)local_78,(Vector *)&local_d8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98 = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_f0,(int)&local_98)
        ;
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_f0 != 0)) {
          StringName::unref();
        }
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
        Ref<ConcavePolygonShape2D>::unref((Ref<ConcavePolygonShape2D> *)&local_f8);
        break;
      }
LAB_00102899:
      lVar3 = 0;
    }
    _err_print_index_error
              ("commit_handle","editor/plugins/collision_shape_2d_editor_plugin.cpp",0x110,lVar4,
               lVar3,"idx","undo_segments.size()","",false,false);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
    Ref<ConcavePolygonShape2D>::unref((Ref<ConcavePolygonShape2D> *)&local_f8);
    goto LAB_001027fa;
  case 3:
    CollisionShape2D::get_shape();
    lVar4 = (long)param_1;
    local_f8 = (StringName *)0x0;
    Ref<ConvexPolygonShape2D>::operator=((Ref<ConvexPolygonShape2D> *)&local_f8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    uVar8 = Variant::operator_cast_to_Vector2(param_2);
    pSVar2 = local_f8;
    ConvexPolygonShape2D::get_points();
    if (param_1 < 0) {
      if (local_e0 == 0) goto LAB_00102885;
LAB_00102828:
      lVar3 = *(long *)(local_e0 + -8);
    }
    else {
      if (local_e0 != 0) {
        if (*(long *)(local_e0 + -8) <= lVar4) goto LAB_00102828;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_e0);
        *(undefined8 *)(local_e0 + lVar4 * 8) = uVar8;
        ConvexPolygonShape2D::get_points();
        StringName::StringName((StringName *)&local_f0,"set_points",false);
        Variant::Variant((Variant *)local_78,(Vector *)&local_d8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98 = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_f0,(int)&local_98);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_f0 != 0)) {
          StringName::unref();
        }
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
        local_d0 = 0;
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_d0,(CowData *)&local_e0);
        StringName::StringName((StringName *)&local_f0,"set_points",false);
        Variant::Variant((Variant *)local_78,(Vector *)&local_d8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98 = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_f0,(int)&local_98)
        ;
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_f0 != 0)) {
          StringName::unref();
        }
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
        Ref<ConvexPolygonShape2D>::unref((Ref<ConvexPolygonShape2D> *)&local_f8);
        break;
      }
LAB_00102885:
      lVar3 = 0;
    }
    _err_print_index_error
              ("commit_handle","editor/plugins/collision_shape_2d_editor_plugin.cpp",0x11f,lVar4,
               lVar3,"idx","undo_points.size()","",false,false);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
    Ref<ConvexPolygonShape2D>::unref((Ref<ConvexPolygonShape2D> *)&local_f8);
LAB_001027fa:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00102af1;
  case 4:
    CollisionShape2D::get_shape();
    local_e8 = (StringName *)0x0;
    Ref<WorldBoundaryShape2D>::operator=((Ref<WorldBoundaryShape2D> *)&local_e8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    pSVar2 = local_e8;
    if (param_1 == 0) {
      fVar6 = (float)WorldBoundaryShape2D::get_distance();
      pcVar5 = "set_distance";
      StringName::StringName((StringName *)&local_d8,"set_distance",false);
      EditorUndoRedoManager::add_do_method<float>
                ((EditorUndoRedoManager *)this_00,(Object *)pSVar2,(StringName *)&local_d8,fVar6);
    }
    else {
      pEVar7 = (EditorUndoRedoManager *)WorldBoundaryShape2D::get_normal();
      pcVar5 = "set_normal";
      StringName::StringName((StringName *)&local_d8,"set_normal",false);
      EditorUndoRedoManager::add_do_method<Vector2>(pEVar7,this_00,pSVar2,(String *)&local_d8);
    }
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)local_78,param_2);
    StringName::StringName((StringName *)&local_d8,pcVar5,false);
    EditorUndoRedoManager::add_undo_method<Variant>
              ((EditorUndoRedoManager *)this_00,pSVar2,(String *)&local_d8,(Variant *)local_78);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<WorldBoundaryShape2D>::unref((Ref<WorldBoundaryShape2D> *)&local_e8);
    break;
  case 5:
    CollisionShape2D::get_shape();
    local_e8 = (StringName *)0x0;
    Ref<SeparationRayShape2D>::operator=((Ref<SeparationRayShape2D> *)&local_e8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    pSVar2 = local_e8;
    fVar6 = (float)SeparationRayShape2D::get_length();
    StringName::StringName((StringName *)&local_d8,"set_length",false);
    EditorUndoRedoManager::add_do_method<float>
              ((EditorUndoRedoManager *)this_00,(Object *)pSVar2,(StringName *)&local_d8,fVar6);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)local_78,param_2);
    StringName::StringName((StringName *)&local_d8,"set_length",false);
    EditorUndoRedoManager::add_undo_method<Variant>
              ((EditorUndoRedoManager *)this_00,pSVar2,(String *)&local_d8,(Variant *)local_78);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<SeparationRayShape2D>::unref((Ref<SeparationRayShape2D> *)&local_e8);
    break;
  case 6:
    CollisionShape2D::get_shape();
    local_e8 = (StringName *)0x0;
    Ref<RectangleShape2D>::operator=((Ref<RectangleShape2D> *)&local_e8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    pSVar2 = local_e8;
    pEVar7 = (EditorUndoRedoManager *)RectangleShape2D::get_size();
    StringName::StringName((StringName *)&local_d8,"set_size",false);
    EditorUndoRedoManager::add_do_method<Vector2>(pEVar7,this_00,pSVar2,(String *)&local_d8);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    (**(code **)(**(long **)(this + 0xa10) + 0x298))(&local_b8);
    StringName::StringName((StringName *)&local_d8,"set_global_transform",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = local_a8;
    Variant::Variant((Variant *)local_78,(Transform2D *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_c8[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(this_00,pSVar1,(Variant **)&local_d8,(int)local_c8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)local_78,param_2);
    StringName::StringName((StringName *)&local_d8,"set_size",false);
    EditorUndoRedoManager::add_undo_method<Variant>
              ((EditorUndoRedoManager *)this_00,pSVar2,(String *)&local_d8,(Variant *)local_78);
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_d8,"set_global_transform",false);
    local_88 = *(undefined8 *)(this + 0xa60);
    local_98 = *(Variant **)(this + 0xa50);
    uStack_90 = *(undefined8 *)(this + 0xa58);
    pSVar2 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,(Transform2D *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_c8[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_d8,(int)local_c8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
      StringName::unref();
    }
    Ref<RectangleShape2D>::unref((Ref<RectangleShape2D> *)&local_e8);
    break;
  case 7:
    CollisionShape2D::get_shape();
    local_e8 = (StringName *)0x0;
    Ref<SegmentShape2D>::operator=((Ref<SegmentShape2D> *)&local_e8,local_d8);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_d8);
    pSVar2 = local_e8;
    if (param_1 == 0) {
      pcVar5 = "set_a";
      local_110 = (EditorUndoRedoManager *)SegmentShape2D::get_a();
LAB_001026fc:
      StringName::StringName((StringName *)&local_d8,pcVar5,false);
      EditorUndoRedoManager::add_do_method<Vector2>(local_110,this_00,pSVar2,(String *)&local_d8);
      if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_78,param_2);
      StringName::StringName((StringName *)&local_d8,pcVar5,false);
      EditorUndoRedoManager::add_undo_method<Variant>
                ((EditorUndoRedoManager *)this_00,pSVar2,(String *)&local_d8,(Variant *)local_78);
      if ((StringName::configured != '\0') && (local_d8 != (Ref *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else if (param_1 == 1) {
      pcVar5 = "set_b";
      local_110 = (EditorUndoRedoManager *)SegmentShape2D::get_b();
      goto LAB_001026fc;
    }
    Ref<SegmentShape2D>::unref((Ref<SegmentShape2D> *)&local_e8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    return;
  }
LAB_00102af1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollisionShape2DEditor::set_handle(int, Vector2&) */

void __thiscall
CollisionShape2DEditor::set_handle(CollisionShape2DEditor *this,int param_1,Vector2 *param_2)

{
  Variant *this_00;
  Vector2 *pVVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  Vector2 *local_70;
  Ref *local_68;
  long local_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(this + 0xa28)) {
  case 0:
    if (param_1 < 2) {
      CollisionShape2D::get_shape();
      local_70 = (Vector2 *)0x0;
      Ref<CapsuleShape2D>::operator=((Ref<CapsuleShape2D> *)&local_70,local_68);
      Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
      fVar5 = ABS(*(float *)(param_2 + (long)param_1 * 4));
      if (param_1 == 0) {
        CapsuleShape2D::set_radius(fVar5);
      }
      else if (param_1 == 1) {
        CapsuleShape2D::set_height(fVar5 + fVar5);
      }
      Ref<CapsuleShape2D>::unref((Ref<CapsuleShape2D> *)&local_70);
    }
    break;
  case 1:
    CollisionShape2D::get_shape();
    local_70 = (Vector2 *)0x0;
    Ref<CircleShape2D>::operator=((Ref<CircleShape2D> *)&local_70,local_68);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
    fVar5 = (float)Vector2::length();
    CircleShape2D::set_radius(fVar5);
    Ref<CircleShape2D>::unref((Ref<CircleShape2D> *)&local_70);
    break;
  case 2:
    lVar4 = (long)param_1;
    CollisionShape2D::get_shape();
    local_70 = (Vector2 *)0x0;
    Ref<ConcavePolygonShape2D>::operator=((Ref<ConcavePolygonShape2D> *)&local_70,local_68);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
    pVVar1 = local_70;
    ConcavePolygonShape2D::get_segments();
    if (param_1 < 0) {
      if (local_60 == 0) goto LAB_001030ed;
LAB_00103078:
      lVar3 = *(long *)(local_60 + -8);
    }
    else {
      if (local_60 != 0) {
        if (lVar4 < *(long *)(local_60 + -8)) {
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
          *(undefined8 *)(local_60 + lVar4 * 8) = *(undefined8 *)param_2;
          ConcavePolygonShape2D::set_segments((Vector *)pVVar1);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
          Ref<ConcavePolygonShape2D>::unref((Ref<ConcavePolygonShape2D> *)&local_70);
          break;
        }
        goto LAB_00103078;
      }
LAB_001030ed:
      lVar3 = 0;
    }
    _err_print_index_error
              ("set_handle","editor/plugins/collision_shape_2d_editor_plugin.cpp",0xa0,lVar4,lVar3,
               "idx","segments.size()","",false,false);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
    Ref<ConcavePolygonShape2D>::unref((Ref<ConcavePolygonShape2D> *)&local_70);
    break;
  case 3:
    lVar4 = (long)param_1;
    CollisionShape2D::get_shape();
    local_70 = (Vector2 *)0x0;
    Ref<ConvexPolygonShape2D>::operator=((Ref<ConvexPolygonShape2D> *)&local_70,local_68);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
    pVVar1 = local_70;
    ConvexPolygonShape2D::get_points();
    if (param_1 < 0) {
      if (local_60 == 0) goto LAB_001030d9;
LAB_00103020:
      lVar3 = *(long *)(local_60 + -8);
    }
    else {
      if (local_60 != 0) {
        if (lVar4 < *(long *)(local_60 + -8)) {
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
          *(undefined8 *)(local_60 + lVar4 * 8) = *(undefined8 *)param_2;
          ConvexPolygonShape2D::set_points((Vector *)pVVar1);
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
          Ref<ConvexPolygonShape2D>::unref((Ref<ConvexPolygonShape2D> *)&local_70);
          break;
        }
        goto LAB_00103020;
      }
LAB_001030d9:
      lVar3 = 0;
    }
    _err_print_index_error
              ("set_handle","editor/plugins/collision_shape_2d_editor_plugin.cpp",0xac,lVar4,lVar3,
               "idx","points.size()","",false,false);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
    Ref<ConvexPolygonShape2D>::unref((Ref<ConvexPolygonShape2D> *)&local_70);
    break;
  case 4:
    if (param_1 < 2) {
      CollisionShape2D::get_shape();
      local_70 = (Vector2 *)0x0;
      Ref<WorldBoundaryShape2D>::operator=((Ref<WorldBoundaryShape2D> *)&local_70,local_68);
      Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
      pVVar1 = local_70;
      if (param_1 == 0) {
        local_58 = WorldBoundaryShape2D::get_normal();
        fVar5 = (float)Vector2::dot(param_2);
        fVar7 = (float)Vector2::length_squared();
        WorldBoundaryShape2D::set_distance(fVar5 / fVar7);
      }
      else {
        local_58 = Vector2::normalized();
        WorldBoundaryShape2D::set_normal(pVVar1);
      }
      Ref<WorldBoundaryShape2D>::unref((Ref<WorldBoundaryShape2D> *)&local_70);
    }
    break;
  case 5:
    CollisionShape2D::get_shape();
    local_70 = (Vector2 *)0x0;
    Ref<SeparationRayShape2D>::operator=((Ref<SeparationRayShape2D> *)&local_70,local_68);
    Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
    SeparationRayShape2D::set_length(ABS(*(float *)(param_2 + 4)));
    Ref<SeparationRayShape2D>::unref((Ref<SeparationRayShape2D> *)&local_70);
    break;
  case 6:
    if (param_1 < 8) {
      this_00 = (Variant *)(this + 0xa38);
      CollisionShape2D::get_shape();
      local_70 = (Vector2 *)0x0;
      Ref<RectangleShape2D>::operator=((Ref<RectangleShape2D> *)&local_70,local_68);
      Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
      uVar6 = Variant::operator_cast_to_Vector2(this_00);
      local_88 = (float)uVar6;
      fVar5 = (float)((ulong)uVar6 >> 0x20);
      if (*(float *)(this + (long)param_1 * 8 + 0x9c8) != 0.0) {
        local_88 = *(float *)(this + (long)param_1 * 8 + 0x9c8) * *(float *)param_2;
        local_88 = local_88 + local_88;
      }
      if (*(float *)(this + (long)param_1 * 8 + 0x9cc) != 0.0) {
        fVar5 = *(float *)(this + (long)param_1 * 8 + 0x9cc) * *(float *)(param_2 + 4);
        fVar5 = fVar5 + fVar5;
      }
      uVar6 = Input::get_singleton();
      cVar2 = Input::is_key_pressed(uVar6,0x400018);
      pVVar1 = local_70;
      if (cVar2 == '\0') {
        uVar6 = Variant::operator_cast_to_Vector2(this_00);
        fVar7 = (local_88 - (float)uVar6) * _LC88;
        fVar8 = (fVar5 - (float)((ulong)uVar6 >> 0x20)) * _UNK_00109eb4;
        uVar6 = Variant::operator_cast_to_Vector2(this_00);
        local_58 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar8,(float)uVar6 + fVar7) & _LC62;
        RectangleShape2D::set_size(pVVar1);
        Transform2D::affine_inverse();
        fVar7 = *(float *)(this + 0xa64);
        fVar9 = local_58._4_4_ * *(float *)(this + 0xa60);
        fVar8 = *(float *)(this + 0xa60) * (float)local_58;
        uVar6 = Variant::operator_cast_to_Vector2(this_00);
        fVar8 = (local_88 - (float)uVar6) * _LC88 * *(float *)(this + (long)param_1 * 8 + 0x9c8) *
                _LC88 + fVar8 + fVar7 * local_50 + local_48;
        fVar5 = (fVar5 - (float)((ulong)uVar6 >> 0x20)) * _LC88 *
                *(float *)(this + (long)param_1 * 8 + 0x9cc) * _LC88 +
                fVar9 + local_4c * fVar7 + local_44;
        local_58 = CONCAT44(fVar8 * (float)((ulong)*(undefined8 *)(this + 0xa50) >> 0x20) +
                            fVar5 * (float)((ulong)*(undefined8 *)(this + 0xa58) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(this + 0xa60) >> 0x20),
                            fVar8 * (float)*(undefined8 *)(this + 0xa50) +
                            fVar5 * (float)*(undefined8 *)(this + 0xa58) +
                            (float)*(undefined8 *)(this + 0xa60));
        Node2D::set_global_position(*(Vector2 **)(this + 0xa10));
      }
      else {
        local_58 = CONCAT44(fVar5,local_88) & _LC62;
        RectangleShape2D::set_size(local_70);
        Node2D::set_global_position(*(Vector2 **)(this + 0xa10));
      }
      Ref<RectangleShape2D>::unref((Ref<RectangleShape2D> *)&local_70);
    }
    break;
  case 7:
    if (*(int *)(this + 0xa2c) < 2) {
      CollisionShape2D::get_shape();
      local_70 = (Vector2 *)0x0;
      Ref<SegmentShape2D>::operator=((Ref<SegmentShape2D> *)&local_70,local_68);
      Ref<Shape2D>::unref((Ref<Shape2D> *)&local_68);
      if (param_1 == 0) {
        SegmentShape2D::set_a(local_70);
      }
      else if (param_1 == 1) {
        SegmentShape2D::set_b(local_70);
      }
      Ref<SegmentShape2D>::unref((Ref<SegmentShape2D> *)&local_70);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape2DEditor::edit(Node*) */

void __thiscall CollisionShape2DEditor::edit(CollisionShape2DEditor *this,Node *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xa08) == 0) {
    *(undefined8 *)(this + 0xa08) = CanvasItemEditor::singleton;
  }
  if (param_1 != (Node *)0x0) {
    uVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CollisionShape2D::typeinfo,0);
    *(undefined8 *)(this + 0xa10) = uVar1;
    Node::set_process(SUB81(this,0));
    _shape_changed(this);
    return;
  }
  if (this[0xa30] != (CollisionShape2DEditor)0x0) {
    set_handle(this,*(int *)(this + 0xa2c),(Vector2 *)(this + 0xa68));
    this[0xa30] = (CollisionShape2DEditor)0x0;
  }
  *(undefined4 *)(this + 0xa2c) = 0xffffffff;
  *(undefined8 *)(this + 0xa10) = 0;
  Node::set_process(SUB81(this,0));
  _shape_changed(this);
  return;
}



/* CollisionShape2DEditorPlugin::edit(Object*) */

void __thiscall
CollisionShape2DEditorPlugin::edit(CollisionShape2DEditorPlugin *this,Object *param_1)

{
  CollisionShape2DEditor *this_00;
  
  this_00 = *(CollisionShape2DEditor **)(this + 0x660);
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
  }
  CollisionShape2DEditor::edit(this_00,(Node *)param_1);
  return;
}



/* CollisionShape2DEditorPlugin::make_visible(bool) */

void __thiscall
CollisionShape2DEditorPlugin::make_visible(CollisionShape2DEditorPlugin *this,bool param_1)

{
  if (param_1) {
    return;
  }
  if (*(code **)(*(long *)this + 0x220) == edit) {
    CollisionShape2DEditor::edit(*(CollisionShape2DEditor **)(this + 0x660),(Node *)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010341a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x220))(this,0);
  return;
}



/* CollisionShape2DEditor::forward_canvas_gui_input(Ref<InputEvent> const&) */

uint __thiscall
CollisionShape2DEditor::forward_canvas_gui_input(CollisionShape2DEditor *this,Ref *param_1)

{
  void *pvVar1;
  code *pcVar2;
  long *plVar3;
  char cVar4;
  CollisionShape2DEditor CVar5;
  uint uVar6;
  int iVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(long *)(this + 0xa10) != 0) && (cVar4 = CanvasItem::is_visible_in_tree(), cVar4 != '\0'))
      && ((*(long *)(*(long *)(this + 0xa10) + 600) == 0 ||
          (cVar4 = Viewport::is_visible_subviewport(), cVar4 != '\0')))) &&
     (*(int *)(this + 0xa28) != -1)) {
    if ((*(long *)param_1 != 0) &&
       (pOVar8 = (Object *)
                 __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,
                                0), pOVar8 != (Object *)0x0)) {
      uVar6 = RefCounted::reference();
      if ((char)uVar6 == '\0') {
        (**(code **)(**(long **)(this + 0xa10) + 0x2b0))(&local_58);
        lVar9 = *(long *)(this + 0xa08);
        local_78 = *(undefined8 *)(lVar9 + 0xa80);
        uStack_70 = *(undefined8 *)(lVar9 + 0xa88);
        goto LAB_00103507;
      }
      (**(code **)(**(long **)(this + 0xa10) + 0x2b0))((Vector2 *)&local_58);
      lVar9 = *(long *)(this + 0xa08);
      local_78 = *(undefined8 *)(lVar9 + 0xa80);
      uStack_70 = *(undefined8 *)(lVar9 + 0xa88);
      local_68 = *(undefined8 *)(lVar9 + 0xa90);
      Transform2D::operator*((Transform2D *)&local_98,(Transform2D *)&local_78);
      local_78 = InputEventMouse::get_position();
      iVar7 = InputEventMouseButton::get_button_index();
      if (iVar7 == 1) {
        CVar5 = (CollisionShape2DEditor)InputEvent::is_pressed();
        if (CVar5 != (CollisionShape2DEditor)0x0) {
          lVar9 = *(long *)(this + 0xa20);
          for (lVar10 = 0; (lVar9 != 0 && (lVar10 < *(long *)(lVar9 + -8))); lVar10 = lVar10 + 1) {
            uVar11 = *(undefined8 *)(lVar9 + lVar10 * 8);
            fVar13 = (float)uVar11;
            fVar12 = (float)((ulong)uVar11 >> 0x20);
            local_58 = CONCAT44((float)((ulong)local_98 >> 0x20) * fVar13 +
                                (float)((ulong)local_90 >> 0x20) * fVar12 +
                                (float)((ulong)local_88 >> 0x20),
                                (float)local_90 * fVar12 + (float)local_98 * fVar13 +
                                (float)local_88);
            fVar13 = (float)Vector2::distance_to((Vector2 *)&local_58);
            if (fVar13 < *(float *)(this + 0xa34)) {
              iVar7 = (int)lVar10;
              *(int *)(this + 0xa2c) = iVar7;
              lVar10 = (long)iVar7;
              lVar9 = *(long *)(this + 0xa20);
              *(undefined8 *)(this + 0xa78) = local_78;
              goto LAB_001037fa;
            }
            lVar9 = *(long *)(this + 0xa20);
          }
          iVar7 = *(int *)(this + 0xa2c);
          if (iVar7 != -1) {
            lVar10 = (long)iVar7;
            *(undefined8 *)(this + 0xa78) = local_78;
            if (lVar10 < 0) {
              if (lVar9 == 0) goto LAB_00103b95;
            }
            else {
LAB_001037fa:
              if (lVar9 == 0) {
LAB_00103b95:
                lVar9 = 0;
                goto LAB_00103b52;
              }
              if (lVar10 < *(long *)(lVar9 + -8)) {
                *(undefined8 *)(this + 0xa68) = *(undefined8 *)(lVar9 + (long)iVar7 * 8);
                get_handle_value((int)(Vector2 *)&local_58);
                if (Variant::needs_deinit[*(int *)(this + 0xa38)] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)(this + 0xa38) = (undefined4)local_58;
                *(undefined8 *)(this + 0xa40) = local_50;
                *(undefined8 *)(this + 0xa48) = uStack_48;
                (**(code **)(**(long **)(this + 0xa10) + 0x298))(&local_c8);
                *(undefined8 *)(this + 0xa50) = local_c8;
                *(undefined8 *)(this + 0xa58) = uStack_c0;
                *(undefined8 *)(this + 0xa60) = local_b8;
                uVar11 = Variant::operator_cast_to_Vector2((Variant *)(this + 0xa38));
                *(undefined8 *)(this + 0xa70) = uVar11;
                goto LAB_0010373a;
              }
            }
            lVar9 = *(long *)(lVar9 + -8);
LAB_00103b52:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          this[0xa30] = (CollisionShape2DEditor)0x0;
          goto LAB_0010369b;
        }
        if (this[0xa30] == (CollisionShape2DEditor)0x0) goto LAB_0010369b;
        if ((*(float *)(this + 0xa78) != (float)local_78) ||
           (*(float *)(this + 0xa7c) != local_78._4_4_)) {
          commit_handle(this,*(int *)(this + 0xa2c),(Variant *)(this + 0xa38));
        }
        *(undefined4 *)(this + 0xa2c) = 0xffffffff;
LAB_0010373a:
        this[0xa30] = CVar5;
      }
      else {
LAB_0010369b:
        uVar6 = 0;
      }
LAB_0010369d:
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      goto LAB_00103602;
    }
    (**(code **)(**(long **)(this + 0xa10) + 0x2b0))(&local_58);
    lVar9 = *(long *)(this + 0xa08);
    local_78 = *(undefined8 *)(lVar9 + 0xa80);
    uStack_70 = *(undefined8 *)(lVar9 + 0xa88);
LAB_00103507:
    local_68 = *(undefined8 *)(lVar9 + 0xa90);
    Transform2D::operator*((Transform2D *)&local_98,(Transform2D *)&local_78);
    lVar9 = *(long *)param_1;
    if (lVar9 != 0) {
      pOVar8 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if (pOVar8 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 != '\0') {
          uVar6 = 0;
          if ((*(int *)(this + 0xa2c) != -1) &&
             (uVar6 = (uint)(byte)this[0xa30], this[0xa30] != (CollisionShape2DEditor)0x0)) {
            lVar9 = *(long *)(this + 0xa08);
            local_a8 = (long *)0x0;
            local_78 = *(undefined8 *)(lVar9 + 0xa80);
            uStack_70 = *(undefined8 *)(lVar9 + 0xa88);
            local_68 = *(undefined8 *)(lVar9 + 0xa90);
            Transform2D::affine_inverse();
            uVar11 = InputEventMouse::get_position();
            local_a0 = CanvasItemEditor::snap_point
                                 ((float)uVar11 * (float)local_58 +
                                  (float)((ulong)uVar11 >> 0x20) * (float)local_50 +
                                  (float)uStack_48,lVar9,7,0,0,&local_a8);
            if (local_a8 != (long *)0x0) {
              do {
                plVar3 = local_a8;
                pvVar1 = (void *)*local_a8;
                if (pvVar1 == (void *)0x0) {
                  if ((int)local_a8[2] != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_001039d0;
                  }
                  break;
                }
                if (local_a8 == *(long **)((long)pvVar1 + 0x18)) {
                  lVar9 = *(long *)((long)pvVar1 + 8);
                  lVar10 = *(long *)((long)pvVar1 + 0x10);
                  *local_a8 = lVar9;
                  if (pvVar1 == (void *)local_a8[1]) {
                    local_a8[1] = lVar10;
                  }
                  if (lVar10 != 0) {
                    *(long *)(lVar10 + 8) = lVar9;
                    lVar9 = *(long *)((long)pvVar1 + 8);
                  }
                  if (lVar9 != 0) {
                    *(long *)(lVar9 + 0x10) = lVar10;
                  }
                  Memory::free_static(pvVar1,false);
                  *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
              } while ((int)local_a8[2] != 0);
              Memory::free_static(local_a8,false);
            }
LAB_001039d0:
            (**(code **)(**(long **)(*(long *)(this + 0xa10) + 600) + 0x1f8))
                      ((Transform2D *)&local_78);
            Transform2D::affine_inverse();
            fVar13 = (float)local_a0 * (float)((ulong)local_58 >> 0x20);
            local_a0._0_4_ =
                 local_a0._4_4_ * (float)local_50 + (float)local_a0 * (float)local_58 +
                 (float)uStack_48;
            local_a0._4_4_ =
                 local_a0._4_4_ * (float)((ulong)local_50 >> 0x20) + fVar13 +
                 (float)((ulong)uStack_48 >> 0x20);
            Transform2D::affine_inverse();
            fVar13 = local_a0._4_4_ * (float)local_50 + (float)local_a0 * (float)local_58 +
                     (float)uStack_48;
            fVar12 = local_a0._4_4_ * (float)((ulong)local_50 >> 0x20) +
                     (float)local_a0 * (float)((ulong)local_58 >> 0x20) +
                     (float)((ulong)uStack_48 >> 0x20);
            *(ulong *)(this + 0xa70) = CONCAT44(fVar12,fVar13);
            local_a0 = CONCAT44(fVar12,fVar13);
            set_handle(this,*(int *)(this + 0xa2c),(Vector2 *)&local_a0);
          }
          goto LAB_0010369d;
        }
        lVar9 = *(long *)param_1;
        if (lVar9 == 0) goto LAB_00103600;
      }
      pOVar8 = (Object *)__dynamic_cast(lVar9,&Object::typeinfo,&InputEventKey::typeinfo,0);
      if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
        if (((*(int *)(this + 0xa2c) != -1) &&
            (((this[0xa30] != (CollisionShape2DEditor)0x0 &&
              (cVar4 = (**(code **)(*(long *)pOVar8 + 0x1c8))(pOVar8), cVar4 == '\0')) &&
             (*(int *)(this + 0xa28) == 6)))) &&
           (iVar7 = InputEventKey::get_keycode(), iVar7 == 0x400018)) {
          set_handle(this,*(int *)(this + 0xa2c),(Vector2 *)(this + 0xa70));
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
    }
  }
LAB_00103600:
  uVar6 = 0;
LAB_00103602:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  int iVar1;
  CowData<Vector2> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  CowData<Vector2> *pCVar7;
  CowData<Vector2> *pCVar8;
  long lVar9;
  undefined8 *puVar10;
  
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
    lVar9 = 0;
    pCVar2 = (CowData<Vector2> *)0x0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<Vector2> *)(lVar9 * 8);
    if (pCVar2 != (CowData<Vector2> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<Vector2> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar3 = param_1 * 8 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar8 = (CowData<Vector2> *)(uVar3 | uVar3 >> 0x20);
    pCVar7 = pCVar8 + 1;
    if (pCVar7 != (CowData<Vector2> *)0x0) {
      if (param_1 <= lVar9) {
        if ((pCVar7 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar7), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00108d58();
        return;
      }
      if (pCVar7 == pCVar2) {
LAB_00103dbc:
        puVar10 = *(undefined8 **)this;
        if (puVar10 == (undefined8 *)0x0) {
          resize<false>((long)pCVar8);
          return;
        }
        lVar9 = puVar10[-1];
        if (param_1 <= lVar9) goto LAB_00103d4d;
      }
      else {
        if (lVar9 != 0) {
          pCVar8 = this;
          iVar1 = _realloc(this,(long)pCVar7);
          if (iVar1 != 0) {
            return;
          }
          goto LAB_00103dbc;
        }
        puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar8 + 0x11),false);
        if (puVar4 == (undefined8 *)0x0) {
          uVar6 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_00103e32;
        }
        puVar10 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar10;
        lVar9 = 0;
      }
      memset(puVar10 + lVar9,0,(param_1 - lVar9) * 8);
LAB_00103d4d:
      puVar10[-1] = param_1;
      return;
    }
  }
  uVar6 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00103e32:
  _err_print_error("resize","./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollisionShape2DEditor::forward_canvas_draw_over_viewport(Control*) [clone .part.0] */

void __thiscall
CollisionShape2DEditor::forward_canvas_draw_over_viewport
          (CollisionShape2DEditor *this,Control *param_1)

{
  CowData<Vector2> *this_00;
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_f8;
  Object *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  Transform2D local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(this + 0xa10) + 0x2b0))(&local_58);
  lVar10 = *(long *)(this + 0xa08);
  local_78 = *(undefined8 *)(lVar10 + 0xa80);
  uStack_70 = *(undefined8 *)(lVar10 + 0xa88);
  local_68 = *(undefined8 *)(lVar10 + 0xa90);
  Transform2D::operator*(local_98,(Transform2D *)&local_78);
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
  this_00 = (CowData<Vector2> *)(this + 0xa20);
  Control::get_editor_theme_icon((StringName *)&local_b8);
  uVar14 = (**(code **)(*(long *)local_b8 + 0x1d8))();
  fVar15 = _LC88 * (float)uVar14;
  fVar17 = _UNK_00109eb4 * (float)((ulong)uVar14 >> 0x20);
  CowData<Vector2>::resize<false>(this_00,0);
  fVar23 = (float)local_98._0_8_;
  fVar6 = SUB84(local_98._0_8_,4);
  fVar19 = (float)local_98._8_8_;
  fVar7 = SUB84(local_98._8_8_,4);
  fVar21 = (float)local_98._16_8_;
  fVar22 = SUB84(local_98._16_8_,4);
  switch(*(undefined4 *)(this + 0xa28)) {
  case 0:
    local_a8 = 0;
    Ref<CapsuleShape2D>::operator=((Ref<CapsuleShape2D> *)&local_a8,*(Ref **)(this + 0xa80));
    CowData<Vector2>::resize<false>(this_00,2);
    uVar13 = CapsuleShape2D::get_radius();
    fVar18 = (float)CapsuleShape2D::get_height();
    fVar18 = fVar18 * _LC88;
    if (*(long *)(this + 0xa20) == 0) {
LAB_00104d28:
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
      if (0 < lVar10) {
        CowData<Vector2>::_copy_on_write(this_00);
        puVar4 = *(undefined4 **)(this + 0xa20);
        lVar10 = *(long *)(puVar4 + -2);
        puVar4[1] = 0;
        *puVar4 = uVar13;
        if (lVar10 < 2) {
LAB_00104d9b:
          lVar11 = 1;
          goto LAB_00104d48;
        }
        CowData<Vector2>::_copy_on_write(this_00);
        uVar13 = _LC104;
        puVar3 = *(undefined8 **)(this + 0xa20);
        lVar10 = puVar3[-1];
        *(undefined4 *)(puVar3 + 1) = 0;
        *(float *)((long)puVar3 + 0xc) = fVar18;
        local_58 = CONCAT44(uVar13,uVar13);
        uStack_50 = CONCAT44(uVar13,uVar13);
        if (0 < lVar10) {
          fVar18 = (float)*puVar3;
          fVar20 = (float)((ulong)*puVar3 >> 0x20);
          local_78 = CONCAT44((fVar18 * fVar6 + fVar20 * fVar7 + fVar22) - fVar17,
                              (fVar18 * fVar23 + fVar20 * fVar19 + fVar21) - fVar15);
          CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
          lVar11 = *(long *)(this + 0xa20);
          local_58 = __LC103;
          uStack_50 = _UNK_00109e98;
          if (lVar11 == 0) {
LAB_00104dc0:
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(lVar11 + -8);
            if (1 < lVar10) {
              fVar18 = (float)*(undefined8 *)(lVar11 + 8);
              fVar20 = (float)((ulong)*(undefined8 *)(lVar11 + 8) >> 0x20);
              local_78 = CONCAT44((fVar18 * fVar6 + fVar20 * fVar7 + fVar22) - fVar17,
                                  (fVar18 * fVar23 + fVar20 * fVar19 + fVar21) - fVar15);
              CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
              Ref<CapsuleShape2D>::unref((Ref<CapsuleShape2D> *)&local_a8);
              goto switchD_00103f9c_default;
            }
          }
LAB_00104dc3:
          lVar11 = 1;
          __LC103 = local_58;
          _UNK_00109e98 = uStack_50;
          goto LAB_00104306;
        }
LAB_00104d70:
        lVar11 = 0;
LAB_00104306:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    break;
  case 1:
    local_a8 = 0;
    Ref<CircleShape2D>::operator=((Ref<CircleShape2D> *)&local_a8,*(Ref **)(this + 0xa80));
    CowData<Vector2>::resize<false>(this_00,1);
    fVar18 = (float)CircleShape2D::get_radius();
    if (*(long *)(this + 0xa20) == 0) goto LAB_00104d28;
    lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
    if (0 < lVar10) {
      CowData<Vector2>::_copy_on_write(this_00);
      pfVar1 = *(float **)(this + 0xa20);
      lVar10 = *(long *)(pfVar1 + -2);
      *pfVar1 = fVar18;
      uVar13 = _LC104;
      pfVar1[1] = 0.0;
      local_58 = CONCAT44(uVar13,uVar13);
      uStack_50 = CONCAT44(uVar13,uVar13);
      if (0 < lVar10) {
        local_78 = CONCAT44((fVar6 * fVar18 + fVar7 * 0.0 + fVar22) - fVar17,
                            (fVar23 * fVar18 + fVar19 * 0.0 + fVar21) - fVar15);
        CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
        Ref<CircleShape2D>::unref((Ref<CircleShape2D> *)&local_a8);
        goto switchD_00103f9c_default;
      }
      goto LAB_00104d70;
    }
    break;
  case 2:
    local_b0 = 0;
    Ref<ConcavePolygonShape2D>::operator=
              ((Ref<ConcavePolygonShape2D> *)&local_b0,*(Ref **)(this + 0xa80));
    ConcavePolygonShape2D::get_segments();
    if (local_a0 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(local_a0 + -8);
    }
    lVar11 = 0;
    CowData<Vector2>::resize<false>(this_00,lVar10);
    uVar13 = _LC104;
    lVar10 = *(long *)(this + 0xa20);
    if (lVar10 != 0) {
      local_f8 = CONCAT44(_LC104,_LC104);
      do {
        if (*(long *)(lVar10 + -8) <= lVar11) break;
        if (local_a0 == 0) goto LAB_00104ce0;
        lVar10 = *(long *)(local_a0 + -8);
        if (lVar10 <= lVar11) goto LAB_00104306;
        puVar3 = (undefined8 *)(local_a0 + lVar11 * 8);
        CowData<Vector2>::_copy_on_write(this_00);
        lVar10 = *(long *)(this + 0xa20);
        uStack_50 = CONCAT44(uVar13,uVar13);
        puVar2 = (undefined8 *)(lVar10 + lVar11 * 8);
        *puVar2 = *puVar3;
        local_58 = local_f8;
        if (lVar10 == 0) goto LAB_00104ce0;
        lVar10 = *(long *)(lVar10 + -8);
        if (lVar10 <= lVar11) goto LAB_00104306;
        uVar14 = *puVar2;
        lVar11 = lVar11 + 1;
        fVar18 = (float)uVar14;
        fVar20 = (float)((ulong)uVar14 >> 0x20);
        local_78 = CONCAT44((fVar18 * fVar6 + fVar20 * fVar7 + fVar22) - fVar17,
                            (fVar18 * fVar23 + fVar20 * fVar19 + fVar21) - fVar15);
        CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
        lVar10 = *(long *)(this + 0xa20);
      } while (lVar10 != 0);
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    Ref<ConcavePolygonShape2D>::unref((Ref<ConcavePolygonShape2D> *)&local_b0);
  default:
switchD_00103f9c_default:
    if (((local_b8 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_b8), cVar8 != '\0')) {
      (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
      Memory::free_static(local_b8,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 3:
    local_b0 = 0;
    Ref<ConvexPolygonShape2D>::operator=
              ((Ref<ConvexPolygonShape2D> *)&local_b0,*(Ref **)(this + 0xa80));
    ConvexPolygonShape2D::get_points();
    if (local_a0 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(local_a0 + -8);
    }
    lVar11 = 0;
    CowData<Vector2>::resize<false>(this_00,lVar10);
    uVar13 = _LC104;
    lVar10 = *(long *)(this + 0xa20);
    if (lVar10 != 0) {
      local_f8 = CONCAT44(_LC104,_LC104);
      do {
        if (*(long *)(lVar10 + -8) <= lVar11) break;
        if (local_a0 == 0) goto LAB_00104ce0;
        lVar10 = *(long *)(local_a0 + -8);
        if (lVar10 <= lVar11) goto LAB_00104306;
        puVar3 = (undefined8 *)(local_a0 + lVar11 * 8);
        CowData<Vector2>::_copy_on_write(this_00);
        lVar10 = *(long *)(this + 0xa20);
        uStack_50 = CONCAT44(uVar13,uVar13);
        puVar2 = (undefined8 *)(lVar10 + lVar11 * 8);
        *puVar2 = *puVar3;
        local_58 = local_f8;
        if (lVar10 == 0) goto LAB_00104ce0;
        lVar10 = *(long *)(lVar10 + -8);
        if (lVar10 <= lVar11) goto LAB_00104306;
        uVar14 = *puVar2;
        lVar11 = lVar11 + 1;
        fVar18 = (float)uVar14;
        fVar20 = (float)((ulong)uVar14 >> 0x20);
        local_78 = CONCAT44((fVar20 * fVar7 + fVar18 * fVar6 + fVar22) - fVar17,
                            (fVar20 * fVar19 + fVar18 * fVar23 + fVar21) - fVar15);
        CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
        lVar10 = *(long *)(this + 0xa20);
      } while (lVar10 != 0);
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    Ref<ConvexPolygonShape2D>::unref((Ref<ConvexPolygonShape2D> *)&local_b0);
    goto switchD_00103f9c_default;
  case 4:
    local_a8 = 0;
    Ref<WorldBoundaryShape2D>::operator=
              ((Ref<WorldBoundaryShape2D> *)&local_a8,*(Ref **)(this + 0xa80));
    CowData<Vector2>::resize<false>(this_00,2);
    fVar18 = (float)WorldBoundaryShape2D::get_distance();
    uVar14 = WorldBoundaryShape2D::get_normal();
    if (*(long *)(this + 0xa20) == 0) goto LAB_00104d28;
    lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
    if (0 < lVar10) {
      CowData<Vector2>::_copy_on_write(this_00);
      **(undefined8 **)(this + 0xa20) =
           CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar18,(float)uVar14 * fVar18);
      fVar18 = (float)WorldBoundaryShape2D::get_distance();
      fVar18 = fVar18 + __LC105;
      uVar14 = WorldBoundaryShape2D::get_normal();
      if (*(long *)(this + 0xa20) == 0) {
LAB_00104d98:
        lVar10 = 0;
        goto LAB_00104d9b;
      }
      lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
      if (lVar10 < 2) goto LAB_00104d9b;
      CowData<Vector2>::_copy_on_write(this_00);
      uVar13 = _LC104;
      puVar3 = *(undefined8 **)(this + 0xa20);
      lVar10 = puVar3[-1];
      puVar3[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar18,(float)uVar14 * fVar18);
      local_58 = CONCAT44(uVar13,uVar13);
      uStack_50 = CONCAT44(uVar13,uVar13);
      if (0 < lVar10) {
        fVar18 = (float)*puVar3;
        fVar20 = (float)((ulong)*puVar3 >> 0x20);
        local_78 = CONCAT44((fVar20 * fVar7 + fVar18 * fVar6 + fVar22) - fVar17,
                            (fVar20 * fVar19 + fVar18 * fVar23 + fVar21) - fVar15);
        CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
        lVar11 = *(long *)(this + 0xa20);
        local_58 = __LC103;
        uStack_50 = _UNK_00109e98;
        if (lVar11 == 0) goto LAB_00104dc0;
        lVar10 = *(long *)(lVar11 + -8);
        if (1 < lVar10) {
          fVar18 = (float)*(undefined8 *)(lVar11 + 8);
          fVar20 = (float)((ulong)*(undefined8 *)(lVar11 + 8) >> 0x20);
          local_78 = CONCAT44((fVar18 * fVar6 + fVar20 * fVar7 + fVar22) - fVar17,
                              (fVar18 * fVar23 + fVar20 * fVar19 + fVar21) - fVar15);
          CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
          Ref<WorldBoundaryShape2D>::unref((Ref<WorldBoundaryShape2D> *)&local_a8);
          goto switchD_00103f9c_default;
        }
        goto LAB_00104dc3;
      }
      goto LAB_00104d70;
    }
    break;
  case 5:
    local_a8 = 0;
    Ref<SeparationRayShape2D>::operator=
              ((Ref<SeparationRayShape2D> *)&local_a8,*(Ref **)(this + 0xa80));
    CowData<Vector2>::resize<false>(this_00,1);
    fVar18 = (float)SeparationRayShape2D::get_length();
    if (*(long *)(this + 0xa20) == 0) goto LAB_00104d28;
    lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
    if (0 < lVar10) {
      CowData<Vector2>::_copy_on_write(this_00);
      puVar4 = *(undefined4 **)(this + 0xa20);
      lVar10 = *(long *)(puVar4 + -2);
      puVar4[1] = fVar18;
      uVar13 = _LC104;
      *puVar4 = 0;
      local_58 = CONCAT44(uVar13,uVar13);
      uStack_50 = CONCAT44(uVar13,uVar13);
      if (0 < lVar10) {
        local_78 = CONCAT44((fVar6 * 0.0 + fVar7 * fVar18 + fVar22) - fVar17,
                            (fVar23 * 0.0 + fVar19 * fVar18 + fVar21) - fVar15);
        CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
        Ref<SeparationRayShape2D>::unref((Ref<SeparationRayShape2D> *)&local_a8);
        goto switchD_00103f9c_default;
      }
      goto LAB_00104d70;
    }
    break;
  case 6:
    local_a8 = 0;
    Ref<RectangleShape2D>::operator=((Ref<RectangleShape2D> *)&local_a8,*(Ref **)(this + 0xa80));
    CowData<Vector2>::resize<false>(this_00,8);
    uVar14 = RectangleShape2D::get_size();
    uVar13 = _LC104;
    lVar10 = *(long *)(this + 0xa20);
    fVar20 = (float)((ulong)uVar14 >> 0x20) * _LC88;
    fVar18 = (float)uVar14 * _LC88;
    for (lVar11 = 0; (lVar10 != 0 && (lVar11 < *(long *)(lVar10 + -8))); lVar11 = lVar11 + 1) {
      fVar12 = fVar20 * *(float *)(this + lVar11 * 8 + 0x9cc);
      fVar16 = fVar18 * *(float *)(this + lVar11 * 8 + 0x9c8);
      CowData<Vector2>::_copy_on_write(this_00);
      lVar10 = *(long *)(this + 0xa20);
      local_58 = CONCAT44(uVar13,uVar13);
      uStack_50 = CONCAT44(uVar13,uVar13);
      pfVar1 = (float *)(lVar10 + lVar11 * 8);
      *pfVar1 = fVar16;
      pfVar1[1] = fVar12;
      if (lVar10 == 0) {
        lVar10 = 0;
        goto LAB_00104306;
      }
      lVar10 = *(long *)(lVar10 + -8);
      if (lVar10 <= lVar11) goto LAB_00104306;
      local_78 = CONCAT44((fVar12 * fVar7 + fVar16 * fVar6 + fVar22) - fVar17,
                          (fVar12 * fVar19 + fVar16 * fVar23 + fVar21) - fVar15);
      CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
      lVar10 = *(long *)(this + 0xa20);
    }
    Ref<RectangleShape2D>::unref((Ref<RectangleShape2D> *)&local_a8);
    goto switchD_00103f9c_default;
  case 7:
    local_a8 = 0;
    Ref<SegmentShape2D>::operator=((Ref<SegmentShape2D> *)&local_a8,*(Ref **)(this + 0xa80));
    CowData<Vector2>::resize<false>(this_00,2);
    uVar14 = SegmentShape2D::get_a();
    if (*(long *)(this + 0xa20) == 0) goto LAB_00104d28;
    lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
    if (0 < lVar10) {
      CowData<Vector2>::_copy_on_write(this_00);
      **(undefined8 **)(this + 0xa20) = uVar14;
      uVar14 = SegmentShape2D::get_b();
      if (*(long *)(this + 0xa20) == 0) goto LAB_00104d98;
      lVar10 = *(long *)(*(long *)(this + 0xa20) + -8);
      if (lVar10 < 2) goto LAB_00104d9b;
      CowData<Vector2>::_copy_on_write(this_00);
      uVar13 = _LC104;
      puVar3 = *(undefined8 **)(this + 0xa20);
      lVar10 = puVar3[-1];
      puVar3[1] = uVar14;
      local_58 = CONCAT44(uVar13,uVar13);
      uStack_50 = CONCAT44(uVar13,uVar13);
      if (0 < lVar10) {
        fVar18 = (float)*puVar3;
        fVar20 = (float)((ulong)*puVar3 >> 0x20);
        local_78 = CONCAT44((fVar18 * fVar6 + fVar20 * fVar7 + fVar22) - fVar17,
                            (fVar18 * fVar23 + fVar20 * fVar19 + fVar21) - fVar15);
        CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
        lVar11 = *(long *)(this + 0xa20);
        local_58 = __LC103;
        uStack_50 = _UNK_00109e98;
        if (lVar11 == 0) goto LAB_00104dc0;
        lVar10 = *(long *)(lVar11 + -8);
        if (1 < lVar10) {
          fVar18 = (float)*(undefined8 *)(lVar11 + 8);
          fVar20 = (float)((ulong)*(undefined8 *)(lVar11 + 8) >> 0x20);
          local_78 = CONCAT44((fVar20 * fVar7 + fVar18 * fVar6 + fVar22) - fVar17,
                              (fVar20 * fVar19 + fVar18 * fVar23 + fVar21) - fVar15);
          CanvasItem::draw_texture((Ref *)param_1,(Vector2 *)&local_b8,(Color *)&local_78);
          Ref<SegmentShape2D>::unref((Ref<SegmentShape2D> *)&local_a8);
          goto switchD_00103f9c_default;
        }
        goto LAB_00104dc3;
      }
      goto LAB_00104d70;
    }
  }
  lVar11 = 0;
LAB_00104d48:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar10,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_00104ce0:
  lVar10 = 0;
  goto LAB_00104306;
}



/* CollisionShape2DEditor::forward_canvas_draw_over_viewport(Control*) */

void __thiscall
CollisionShape2DEditor::forward_canvas_draw_over_viewport
          (CollisionShape2DEditor *this,Control *param_1)

{
  char cVar1;
  
  if ((*(long *)(this + 0xa10) != 0) && (cVar1 = CanvasItem::is_visible_in_tree(), cVar1 != '\0')) {
    if ((*(long *)(*(long *)(this + 0xa10) + 600) != 0) &&
       (cVar1 = Viewport::is_visible_subviewport(), cVar1 == '\0')) {
      return;
    }
    if (*(int *)(this + 0xa28) != -1) {
      forward_canvas_draw_over_viewport(this,param_1);
      return;
    }
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



/* CollisionShape2DEditor::is_class_ptr(void*) const */

uint __thiscall CollisionShape2DEditor::is_class_ptr(CollisionShape2DEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CollisionShape2DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
CollisionShape2DEditorPlugin::is_class_ptr(CollisionShape2DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109d,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CollisionShape2DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 CollisionShape2DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionShape2DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 CollisionShape2DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionShape2DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 CollisionShape2DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CollisionShape2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CollisionShape2DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionShape2DEditorPlugin::has_main_screen() const */

undefined8 CollisionShape2DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<CollisionShape2DEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<CanvasItemEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItemEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItemEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<CollisionShape2DEditor, void, Node*>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CanvasItemEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItemEditor,void>::get_argument_count
          (CallableCustomMethodPointer<CanvasItemEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CanvasItemEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItemEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItemEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CollisionShape2DEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CollisionShape2DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CollisionShape2DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CollisionShape2DEditor::_property_can_revertv(StringName const&) const */

undefined8 CollisionShape2DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CollisionShape2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void CollisionShape2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010d010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
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



/* CallableCustomMethodPointer<CanvasItemEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItemEditor,void>::get_object
          (CallableCustomMethodPointer<CanvasItemEditor,void> *this)

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
      goto LAB_0010529d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010529d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010529d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CollisionShape2DEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*> *this)

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
      goto LAB_0010539d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010539d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010539d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CollisionShape2DEditor::_validate_propertyv(PropertyInfo&) const */

void CollisionShape2DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010d018 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* CollisionShape2DEditor::_setv(StringName const&, Variant const&) */

undefined8 CollisionShape2DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010d020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105558) */
/* CollisionShape2DEditor::_getv(StringName const&, Variant&) const */

undefined8 CollisionShape2DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010d028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* CollisionShape2DEditorPlugin::_notificationv(int, bool) */

void __thiscall
CollisionShape2DEditorPlugin::_notificationv
          (CollisionShape2DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010d030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010d030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* CollisionShape2DEditorPlugin::_get_class_namev() const */

undefined8 * CollisionShape2DEditorPlugin::_get_class_namev(void)

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
LAB_00105633:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105633;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "CollisionShape2DEditorPlugin");
      goto LAB_0010569e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CollisionShape2DEditorPlugin");
LAB_0010569e:
  return &_get_class_namev()::_class_name_static;
}



/* CollisionShape2DEditor::_get_class_namev() const */

undefined8 * CollisionShape2DEditor::_get_class_namev(void)

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
LAB_00105723:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105723;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CollisionShape2DEditor");
      goto LAB_0010578e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CollisionShape2DEditor");
LAB_0010578e:
  return &_get_class_namev()::_class_name_static;
}



/* CollisionShape2DEditorPlugin::get_plugin_name() const */

CollisionShape2DEditorPlugin * __thiscall
CollisionShape2DEditorPlugin::get_plugin_name(CollisionShape2DEditorPlugin *this)

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



/* void EditorUndoRedoManager::add_do_method<float>(Object*, StringName const&, float) */

void __thiscall
EditorUndoRedoManager::add_do_method<float>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,float param_3)

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



/* void EditorUndoRedoManager::add_undo_method<Variant>(Object*, StringName const&, Variant) */

void __thiscall
EditorUndoRedoManager::add_undo_method<Variant>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,Variant *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)local_78);
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



/* void EditorUndoRedoManager::add_do_method<Vector2>(Object*, StringName const&, Vector2) */

void __thiscall
EditorUndoRedoManager::add_do_method<Vector2>
          (undefined8 param_1_00,EditorUndoRedoManager *this,StringName *param_1,Variant **param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_1_00;
  Variant::Variant((Variant *)local_68,(Vector2 *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)local_78);
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



/* Callable create_custom_callable_function_pointer<CanvasItemEditor>(CanvasItemEditor*, char
   const*, void (CanvasItemEditor::*)()) */

CanvasItemEditor *
create_custom_callable_function_pointer<CanvasItemEditor>
          (CanvasItemEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC6;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00109ca0;
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



/* Callable create_custom_callable_function_pointer<CollisionShape2DEditor,
   Node*>(CollisionShape2DEditor*, char const*, void (CollisionShape2DEditor::*)(Node*)) */

CollisionShape2DEditor *
create_custom_callable_function_pointer<CollisionShape2DEditor,Node*>
          (CollisionShape2DEditor *param_1,char *param_2,_func_void_Node_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC6;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00109d30;
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
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010609a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010609a:
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



/* CollisionShape2DEditor::_initialize_classv() */

void CollisionShape2DEditor::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_0010d048 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0010d038 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_0010d040 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CollisionShape2DEditor";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* CollisionShape2DEditorPlugin::get_class() const */

void CollisionShape2DEditorPlugin::get_class(void)

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



/* CollisionShape2DEditor::get_class() const */

void CollisionShape2DEditor::get_class(void)

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
LAB_00106db7:
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
      goto LAB_00106db7;
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
    if (cVar4 != '\0') goto LAB_00106ebb;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00106ebb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CanvasItemEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CanvasItemEditor,void>::call
          (CallableCustomMethodPointer<CanvasItemEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001070ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001070ff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001070d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001071b0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001070ff:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001071b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CollisionShape2DEditor, void, Node*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*>::call
          (CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*> *this,Variant **param_1,
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
      goto LAB_001073f5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_001073f5;
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
LAB_00107300:
          uVar3 = _LC48;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_00107300;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001074a6;
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
LAB_001073f5:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC47,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001074a6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape2DEditorPlugin::_initialize_classv() */

void CollisionShape2DEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010d048 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
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
      if ((code *)PTR__bind_methods_0010d050 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010d058 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CollisionShape2DEditorPlugin";
    local_70 = 0;
    local_50 = 0x1c;
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
  local_78 = &_LC8;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC8;
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



/* CollisionShape2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
CollisionShape2DEditorPlugin::_get_property_listv
          (CollisionShape2DEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "CollisionShape2DEditorPlugin";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CollisionShape2DEditorPlugin";
  local_98 = 0;
  local_70 = 0x1c;
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
  StringName::StringName((StringName *)&local_78,"CollisionShape2DEditorPlugin",false);
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
  if ((code *)PTR__get_property_list_0010d060 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0010d068 != CanvasItem::_get_property_list) {
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



/* CollisionShape2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CollisionShape2DEditor::_get_property_listv(CollisionShape2DEditor *this,List *param_1,bool param_2)

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
  local_78 = "CollisionShape2DEditor";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CollisionShape2DEditor";
  local_98 = 0;
  local_70 = 0x16;
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
  StringName::StringName((StringName *)&local_78,"CollisionShape2DEditor",false);
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



/* CollisionShape2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
CollisionShape2DEditorPlugin::is_class(CollisionShape2DEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010883b;
  }
  cVar5 = String::operator==(param_1,"CollisionShape2DEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0010883b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010893e;
    }
  }
LAB_0010883b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010893e:
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
    if (cVar5 != '\0') goto LAB_00108a4b;
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
      if (cVar5 != '\0') goto LAB_00108a4b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00108b4e;
    }
  }
LAB_00108a4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108b4e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape2DEditor::is_class(String const&) const */

undefined8 __thiscall CollisionShape2DEditor::is_class(CollisionShape2DEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108c5b;
  }
  cVar4 = String::operator==(param_1,"CollisionShape2DEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108c5b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Shape2D>::unref() */

void __thiscall Ref<Shape2D>::unref(Ref<Shape2D> *this)

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



/* CollisionShape2DEditor::_notification(int) [clone .cold] */

void CollisionShape2DEditor::_notification(int param_1)

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



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108d58(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00108de0) */
/* CollisionShape2DEditor::_notificationv(int, bool) */

void __thiscall
CollisionShape2DEditor::_notificationv(CollisionShape2DEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010d070 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0010d070 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Ref<CapsuleShape2D>::unref() */

void __thiscall Ref<CapsuleShape2D>::unref(Ref<CapsuleShape2D> *this)

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



/* Ref<CircleShape2D>::unref() */

void __thiscall Ref<CircleShape2D>::unref(Ref<CircleShape2D> *this)

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



/* Ref<ConcavePolygonShape2D>::unref() */

void __thiscall Ref<ConcavePolygonShape2D>::unref(Ref<ConcavePolygonShape2D> *this)

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



/* Ref<ConvexPolygonShape2D>::unref() */

void __thiscall Ref<ConvexPolygonShape2D>::unref(Ref<ConvexPolygonShape2D> *this)

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



/* Ref<WorldBoundaryShape2D>::unref() */

void __thiscall Ref<WorldBoundaryShape2D>::unref(Ref<WorldBoundaryShape2D> *this)

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



/* Ref<SeparationRayShape2D>::unref() */

void __thiscall Ref<SeparationRayShape2D>::unref(Ref<SeparationRayShape2D> *this)

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



/* Ref<RectangleShape2D>::unref() */

void __thiscall Ref<RectangleShape2D>::unref(Ref<RectangleShape2D> *this)

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



/* Ref<SegmentShape2D>::unref() */

void __thiscall Ref<SegmentShape2D>::unref(Ref<SegmentShape2D> *this)

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



/* CollisionShape2DEditor::~CollisionShape2DEditor() */

void __thiscall CollisionShape2DEditor::~CollisionShape2DEditor(CollisionShape2DEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00109690;
  if (*(long *)(this + 0xa80) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa80);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0xa38)] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa20));
  Control::~Control((Control *)this);
  return;
}



/* CowData<Vector2>::_ref(CowData<Vector2> const&) */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this == *(long *)param_1) {
    return;
  }
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



/* CollisionShape2DEditorPlugin::forward_canvas_gui_input(Ref<InputEvent> const&) */

void __thiscall
CollisionShape2DEditorPlugin::forward_canvas_gui_input
          (CollisionShape2DEditorPlugin *this,Ref *param_1)

{
  CollisionShape2DEditor::forward_canvas_gui_input
            (*(CollisionShape2DEditor **)(this + 0x660),param_1);
  return;
}



/* CollisionShape2DEditor::~CollisionShape2DEditor() */

void __thiscall CollisionShape2DEditor::~CollisionShape2DEditor(CollisionShape2DEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00109690;
  if (*(long *)(this + 0xa80) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa80);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0xa38)] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa20));
  Control::~Control((Control *)this);
  operator_delete(this,0xa88);
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



/* CollisionShape2DEditorPlugin::forward_canvas_draw_over_viewport(Control*) */

void __thiscall
CollisionShape2DEditorPlugin::forward_canvas_draw_over_viewport
          (CollisionShape2DEditorPlugin *this,Control *param_1)

{
  CollisionShape2DEditor *this_00;
  char cVar1;
  
  this_00 = *(CollisionShape2DEditor **)(this + 0x660);
  if ((*(long *)(this_00 + 0xa10) != 0) && (cVar1 = CanvasItem::is_visible_in_tree(), cVar1 != '\0')
     ) {
    if ((*(long *)(*(long *)(this_00 + 0xa10) + 600) != 0) &&
       (cVar1 = Viewport::is_visible_subviewport(), cVar1 == '\0')) {
      return;
    }
    if (*(int *)(this_00 + 0xa28) != -1) {
      CollisionShape2DEditor::forward_canvas_draw_over_viewport(this_00,param_1);
      return;
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CollisionShape2DEditor::~CollisionShape2DEditor() */

void __thiscall CollisionShape2DEditor::~CollisionShape2DEditor(CollisionShape2DEditor *this)

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
/* CallableCustomMethodPointer<CanvasItemEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItemEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItemEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CollisionShape2DEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CollisionShape2DEditor,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


