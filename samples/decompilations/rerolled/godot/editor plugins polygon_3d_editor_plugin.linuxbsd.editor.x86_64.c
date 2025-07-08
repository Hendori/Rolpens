/* Polygon3DEditor::_node_removed(Node*) */

void __thiscall Polygon3DEditor::_node_removed(Polygon3DEditor *this,Node *param_1)

{
  Node *pNVar1;
  
  if (*(Node **)(this + 0xa40) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0xa40) = 0;
  pNVar1 = (Node *)Node::get_parent();
  if (param_1 == pNVar1) {
    Node::remove_child(param_1);
  }
  CanvasItem::hide();
  Node::set_process(SUB81(this,0));
  return;
}



/* Polygon3DEditor::_menu_option(int) */

void __thiscall Polygon3DEditor::_menu_option(Polygon3DEditor *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)(this + 0xa10) = 0;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
    return;
  }
  if (param_1 != 1) {
    return;
  }
  *(undefined4 *)(this + 0xa10) = 1;
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
  return;
}



/* Polygon3DEditor::_notification(int) [clone .part.0] */

void Polygon3DEditor::_notification(int param_1)

{
  Ref *pRVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  CallableCustom *this;
  undefined4 in_register_0000003c;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58 [3];
  long local_40;
  
  lVar8 = CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(lVar8 + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
  pRVar1 = *(Ref **)(lVar8 + 0xa20);
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
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58[0]);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_58[0] + 0x140))(local_58[0]);
        Memory::free_static(local_58[0],false);
      }
    }
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(lVar8 + 0xa20),0));
  plVar2 = *(long **)(lVar8 + 0x240);
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x108);
    this = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC8;
    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this = &PTR_hash_0010ee38;
    *(undefined8 *)(this + 0x40) = 0;
    uVar4 = *(undefined8 *)(lVar8 + 0x60);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x30) = uVar4;
    *(undefined8 *)(this + 0x38) = 0x100000;
    *(long *)(this + 0x28) = lVar8;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "Polygon3DEditor::_node_removed";
    Callable::Callable((Callable *)local_58,this);
    StringName::StringName((StringName *)&local_60,"node_removed",false);
    (*pcVar3)(plVar2,(StringName *)&local_60,(StringName *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* Polygon3DEditorPlugin::handles(Object*) const */

ulong __thiscall Polygon3DEditorPlugin::handles(Polygon3DEditorPlugin *this,Object *param_1)

{
  bool bVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_a0;
  int local_98 [4];
  int local_88 [2];
  undefined1 local_80 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&Node3D::typeinfo,0);
    if (lVar2 != 0) {
      StringName::StringName((StringName *)&local_a0,"_is_editable_3d_polygon",false);
      local_60 = (undefined1  [16])0x0;
      local_68 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      (**(code **)(*(long *)param_1 + 0x68))
                ((Variant *)local_48,param_1,(StringName *)&local_a0,0,0,local_98);
      if (local_98[0] == 0) {
        Variant::Variant((Variant *)local_88,(Variant *)local_48);
      }
      else {
        local_88[0] = 0;
        local_80 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_68] != '\0') {
        Variant::_clear_internal();
      }
      bVar1 = Variant::operator_cast_to_bool((Variant *)local_88);
      uVar3 = CONCAT71(extraout_var,bVar1) & 0xffffffff;
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      goto LAB_00100512;
    }
  }
  uVar3 = 0;
LAB_00100512:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
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
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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



/* Polygon3DEditor::_get_depth() */

void __thiscall Polygon3DEditor::_get_depth(Polygon3DEditor *this)

{
  bool bVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_b0;
  int local_a8 [4];
  int local_98 [2];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  plVar2 = *(long **)(this + 0xa48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((plVar2 == (long *)0x0) && (plVar2 = *(long **)(this + 0xa40), plVar2 == (long *)0x0)) {
    _err_print_error("_get_depth","editor/plugins/polygon_3d_editor_plugin.cpp",0x15c,
                     "Parameter \"obj\" is null.","Edited object is not valid.",0,0);
  }
  else {
    StringName::StringName((StringName *)&local_b0,"_has_editable_3d_polygon_no_depth",false);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    (**(code **)(*plVar2 + 0x68))((Variant *)local_58,plVar2,(StringName *)&local_b0,0,0,local_a8);
    if (local_a8[0] == 0) {
      Variant::Variant((Variant *)local_98,(Variant *)local_58);
    }
    else {
      local_98[0] = 0;
      local_90 = (undefined1  [16])0x0;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    bVar1 = Variant::operator_cast_to_bool((Variant *)local_98);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (!bVar1) {
      StringName::StringName((StringName *)&local_b0,"get_depth",false);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      (**(code **)(*plVar2 + 0x68))((Variant *)local_58,plVar2,(StringName *)&local_b0,0,0,local_a8)
      ;
      if (local_a8[0] == 0) {
        Variant::Variant((Variant *)local_98,(Variant *)local_58);
      }
      else {
        local_98[0] = 0;
        local_90 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      Variant::operator_cast_to_float((Variant *)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Polygon3DEditor::_get_polygon() */

void Polygon3DEditor::_get_polygon(void)

{
  long *plVar1;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  long local_a0;
  int local_98 [4];
  int local_88 [2];
  undefined1 local_80 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_48 [6];
  long local_30;
  
  plVar1 = *(long **)(in_RSI + 0xa48);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((plVar1 == (long *)0x0) && (plVar1 = *(long **)(in_RSI + 0xa40), plVar1 == (long *)0x0)) {
    _err_print_error("_get_polygon","editor/plugins/polygon_3d_editor_plugin.cpp",0x167,
                     "Parameter \"obj\" is null.","Edited object is not valid.",0);
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    StringName::StringName((StringName *)&local_a0,"get_polygon",false);
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    (**(code **)(*plVar1 + 0x68))((Variant *)local_48,plVar1,(StringName *)&local_a0,0,0,local_98);
    if (local_98[0] == 0) {
      Variant::Variant((Variant *)local_88,(Variant *)local_48);
    }
    else {
      local_88[0] = 0;
      local_80 = (undefined1  [16])0x0;
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
    Variant::operator_cast_to_Vector(in_RDI);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditorPlugin::~Polygon3DEditorPlugin() */

void __thiscall Polygon3DEditorPlugin::~Polygon3DEditorPlugin(Polygon3DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eb90;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* Polygon3DEditorPlugin::~Polygon3DEditorPlugin() */

void __thiscall Polygon3DEditorPlugin::~Polygon3DEditorPlugin(Polygon3DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eb90;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* Polygon3DEditor::Polygon3DEditor() */

void __thiscall Polygon3DEditor::Polygon3DEditor(Polygon3DEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  Transform3D *pTVar4;
  char cVar5;
  int iVar6;
  Button *pBVar7;
  MeshInstance3D *pMVar8;
  ImmediateMesh *this_00;
  Object *pOVar9;
  ArrayMesh *this_01;
  long lVar10;
  Ref *pRVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  Object *local_d8 [2];
  Object *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Basis local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  this[0xa0c] = (Polygon3DEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010e810;
  *(undefined4 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa7c) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined4 *)(this + 0xaac) = 0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_c8 = (Object *)0x0;
  Button::Button(pBVar7,(String *)&local_c8);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa18) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa18));
  pSVar1 = *(String **)(this + 0xa18);
  local_d8[0] = (Object *)0x0;
  local_c8 = (Object *)0x106766;
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)local_d8);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<Polygon3DEditor,int>
            ((Polygon3DEditor *)&local_c8,(char *)this,
             (_func_void_int *)"&Polygon3DEditor::_menu_option");
  Callable::bind<Polygon3DEditor::Mode>((StrRange *)local_d8,(CowData<char32_t> *)&local_c8,0);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  Callable::~Callable((Callable *)&local_c8);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa18),0));
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_c8 = (Object *)0x0;
  Button::Button(pBVar7,(String *)&local_c8);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa20) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa20));
  pSVar1 = *(String **)(this + 0xa20);
  local_d8[0] = (Object *)0x0;
  local_c8 = (Object *)0x106775;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)local_d8);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  Node::add_child(this,*(undefined8 *)(this + 0xa20),0,0);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<Polygon3DEditor,int>
            ((Polygon3DEditor *)&local_c8,(char *)this,
             (_func_void_int *)"&Polygon3DEditor::_menu_option");
  Callable::bind<Polygon3DEditor::Mode>((StrRange *)local_d8,(CowData<char32_t> *)&local_c8,1);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  Callable::~Callable((Callable *)&local_c8);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa20),0));
  this[0xaa8] = (Polygon3DEditor)0x0;
  *(undefined4 *)(this + 0xa10) = 1;
  pMVar8 = (MeshInstance3D *)operator_new(0x6a0,"");
  MeshInstance3D::MeshInstance3D(pMVar8);
  postinitialize_handler((Object *)pMVar8);
  *(MeshInstance3D **)(this + 0xa58) = pMVar8;
  this_00 = (ImmediateMesh *)operator_new(0x4f0,"");
  ImmediateMesh::ImmediateMesh(this_00);
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar9 = *(Object **)(this + 0xa50);
    if (pOVar9 != (Object *)0x0) {
      *(undefined8 *)(this + 0xa50) = 0;
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        this_00 = (ImmediateMesh *)0x0;
        cVar5 = predelete_handler(pOVar9);
        if (cVar5 != '\0') {
LAB_001017b8:
          (**(code **)(*(long *)pOVar9 + 0x140))();
          Memory::free_static(pOVar9,false);
          pOVar12 = (Object *)this_00;
          if (this_00 != (ImmediateMesh *)0x0) goto LAB_00101536;
        }
      }
      goto LAB_001010a5;
    }
    local_c8 = (Object *)0x0;
    pRVar11 = *(Ref **)(this + 0xa58);
  }
  else {
    pOVar9 = *(Object **)(this + 0xa50);
    pOVar12 = pOVar9;
    if (this_00 != (ImmediateMesh *)pOVar9) {
      *(ImmediateMesh **)(this + 0xa50) = this_00;
      cVar5 = RefCounted::reference();
      pOVar12 = (Object *)this_00;
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xa50) = 0;
        if (pOVar9 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x001016f3:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0'))
          goto LAB_001017b8;
        }
      }
      else if (pOVar9 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x001016f3;
      }
    }
LAB_00101536:
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
LAB_001010a5:
    pRVar11 = *(Ref **)(this + 0xa58);
    local_c8 = (Object *)0x0;
    if (((*(long *)(this + 0xa50) != 0) &&
        (pOVar9 = (Object *)
                  __dynamic_cast(*(long *)(this + 0xa50),&Object::typeinfo,&Mesh::typeinfo,0),
        pOVar9 != (Object *)0x0)) &&
       (local_c8 = pOVar9, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      local_c8 = (Object *)0x0;
    }
  }
  MeshInstance3D::set_mesh(pRVar11);
  if (((local_c8 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar9 = local_c8, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_c8), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  pTVar4 = *(Transform3D **)(this + 0xa58);
  local_a8 = (Basis  [16])ZEXT416(_LC33);
  local_98 = ZEXT416(_LC33);
  local_b8 = 0;
  local_b0 = 0x3727c5ac;
  local_88 = 0x3f800000;
  Transform3D::Transform3D((Transform3D *)&local_78,local_a8,(Vector3 *)&local_b8);
  Node3D::set_transform(pTVar4);
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xa28));
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xa28),0);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xa28),1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa28),1,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa28),2,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa28),0x15,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa28),0,1);
  local_78 = _LC33;
  uStack_74 = _LC33;
  uStack_70 = _LC33;
  uStack_6c = _LC33;
  BaseMaterial3D::set_albedo(*(Color **)(this + 0xa28));
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xa30));
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xa30),0);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa30),3,1);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xa30),1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa30),1,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa30),2,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa30),0x15,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xa30),0,1);
  pOVar9 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar9 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar9 = (Object *)0x0;
  }
  pcVar3 = *(code **)(*(long *)pOVar9 + 0x1c8);
  lVar10 = EditorStringNames::singleton + 0x10;
  if ((Polygon3DEditor()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&Polygon3DEditor()::{lambda()#1}::operator()()::sname), iVar6 != 0
     )) {
    _scs_create((char *)&Polygon3DEditor()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&Polygon3DEditor()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&Polygon3DEditor()::{lambda()#1}::operator()()::sname);
    (*pcVar3)((StrRange *)local_d8,pOVar9,&Polygon3DEditor()::{lambda()#1}::operator()()::sname,
              lVar10);
    cVar5 = RefCounted::unreference();
  }
  else {
    (*pcVar3)((StrRange *)local_d8,pOVar9,&Polygon3DEditor()::{lambda()#1}::operator()()::sname,
              lVar10);
    cVar5 = RefCounted::unreference();
  }
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  iVar6 = (**(code **)(*(long *)local_d8[0] + 0x1c8))();
  BaseMaterial3D::set_point_size((float)iVar6);
  BaseMaterial3D::set_texture(*(undefined8 *)(this + 0xa30),0,(StrRange *)local_d8);
  pMVar8 = (MeshInstance3D *)operator_new(0x6a0,"");
  MeshInstance3D::MeshInstance3D(pMVar8);
  postinitialize_handler((Object *)pMVar8);
  *(MeshInstance3D **)(this + 0xa60) = pMVar8;
  Node::add_child(*(undefined8 *)(this + 0xa58),pMVar8,0,0);
  this_01 = (ArrayMesh *)operator_new(0x430,"");
  ArrayMesh::ArrayMesh(this_01);
  postinitialize_handler((Object *)this_01);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar9 = *(Object **)(this + 0xa68);
    if (pOVar9 == (Object *)0x0) {
      local_c8 = (Object *)0x0;
      pRVar11 = *(Ref **)(this + 0xa60);
      goto LAB_00101432;
    }
    *(undefined8 *)(this + 0xa68) = 0;
    cVar5 = RefCounted::unreference();
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar9), cVar5 == '\0')) goto LAB_001013e7;
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
    lVar10 = *(long *)(this + 0xa68);
  }
  else {
    pOVar9 = *(Object **)(this + 0xa68);
    pOVar12 = pOVar9;
    if (this_01 != (ArrayMesh *)pOVar9) {
      *(ArrayMesh **)(this + 0xa68) = this_01;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xa68) = 0;
      }
      pOVar12 = (Object *)this_01;
      if (((pOVar9 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
LAB_001013e7:
    lVar10 = *(long *)(this + 0xa68);
  }
  local_c8 = (Object *)0x0;
  pRVar11 = *(Ref **)(this + 0xa60);
  if (((lVar10 != 0) &&
      (pOVar9 = (Object *)__dynamic_cast(lVar10,&Object::typeinfo,&Mesh::typeinfo,0),
      pOVar9 != (Object *)0x0)) &&
     (local_c8 = pOVar9, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    local_c8 = (Object *)0x0;
  }
LAB_00101432:
  MeshInstance3D::set_mesh(pRVar11);
  if (((local_c8 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar9 = local_c8, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_c8), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  pTVar4 = *(Transform3D **)(this + 0xa60);
  local_a8 = (Basis  [16])ZEXT416(_LC33);
  local_98 = ZEXT416(_LC33);
  local_b8 = 0;
  local_b0 = 0x3727c5ac;
  local_88 = 0x3f800000;
  Transform3D::Transform3D((Transform3D *)&local_78,local_a8,(Vector3 *)&local_b8);
  Node3D::set_transform(pTVar4);
  this[0xaa9] = (Polygon3DEditor)0x0;
  if (((local_d8[0] != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar9 = local_d8[0], cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_d8[0]), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Polygon3DEditorPlugin::Polygon3DEditorPlugin() */

void __thiscall Polygon3DEditorPlugin::Polygon3DEditorPlugin(Polygon3DEditorPlugin *this)

{
  Polygon3DEditor *this_00;
  
  Node::Node((Node *)this);
  *(code **)this = BoxContainer::BoxContainer;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (Polygon3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (Polygon3DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010eb90;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (Polygon3DEditor *)operator_new(0xab0,"");
  Polygon3DEditor::Polygon3DEditor(this_00);
  postinitialize_handler((Object *)this_00);
  *(Polygon3DEditor **)(this + 0x660) = this_00;
  Node3DEditor::add_control_to_menu_panel(Node3DEditor::singleton);
  CanvasItem::hide();
  return;
}



/* Polygon3DEditor::_bind_methods() */

void Polygon3DEditor::_bind_methods(void)

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
  D_METHODP((char *)local_68,(char ***)"_polygon_draw",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<Polygon3DEditor>(_polygon_draw);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditor::_set_polygon(Vector<Vector2> const&) */

void __thiscall Polygon3DEditor::_set_polygon(Polygon3DEditor *this,Vector *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_e0;
  int local_d8 [4];
  Vector local_c8 [8];
  undefined8 local_c0;
  Variant *local_b8 [2];
  int local_a8 [2];
  undefined1 local_a0 [16];
  int local_88 [8];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  plVar4 = *(long **)(this + 0xa48);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((plVar4 == (long *)0x0) && (plVar4 = *(long **)(this + 0xa40), plVar4 == (long *)0x0)) {
    _err_print_error("_set_polygon","editor/plugins/polygon_3d_editor_plugin.cpp",0x16d,
                     "Parameter \"obj\" is null.","Edited object is not valid.",0);
  }
  else {
    local_c0 = 0;
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    if (*(long *)(param_1 + 8) != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00101e7c;
        LOCK();
        lVar3 = *plVar1;
        bVar5 = lVar2 == lVar3;
        if (bVar5) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar3 != -1) {
        local_c0 = *(undefined8 *)(param_1 + 8);
      }
    }
LAB_00101e7c:
    StringName::StringName((StringName *)&local_e0,"set_polygon",false);
    Variant::Variant((Variant *)local_68,local_c8);
    local_48 = (undefined1  [16])0x0;
    local_50 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_b8[0] = (Variant *)local_68;
    (**(code **)(*plVar4 + 0x68))
              ((Variant *)local_88,plVar4,(StringName *)&local_e0,local_b8,1,local_d8);
    if (local_d8[0] == 0) {
      Variant::Variant((Variant *)local_a8,(Variant *)local_88);
    }
    else {
      local_a8[0] = 0;
      local_a0 = (undefined1  [16])0x0;
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_c0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Polygon3DEditor::~Polygon3DEditor() */

void __thiscall Polygon3DEditor::~Polygon3DEditor(Polygon3DEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e810;
  pOVar1 = *(Object **)(this + 0xa58);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xaa0));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0xa90));
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
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
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = ArrayMesh::clear_surfaces;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010218a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010218a:
  Control::~Control((Control *)this);
  return;
}



/* Polygon3DEditor::~Polygon3DEditor() */

void __thiscall Polygon3DEditor::~Polygon3DEditor(Polygon3DEditor *this)

{
  ~Polygon3DEditor(this);
  operator_delete(this,0xab0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Polygon3DEditor::_polygon_draw() */

void __thiscall Polygon3DEditor::_polygon_draw(Polygon3DEditor *this)

{
  int iVar1;
  Ref *pRVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  Object *pOVar7;
  ulong uVar8;
  undefined8 *puVar9;
  Polygon3DEditor *pPVar10;
  Variant *pVVar11;
  long lVar12;
  Polygon3DEditor *pPVar13;
  int iVar14;
  long lVar15;
  size_t sVar16;
  undefined8 uVar17;
  int iVar18;
  Polygon3DEditor *pPVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float local_e0;
  float local_dc;
  Array local_c8 [8];
  Array local_c0 [8];
  Dictionary local_b8 [8];
  Object *local_b0 [2];
  Polygon3DEditor *local_a0;
  Object *local_98;
  Polygon3DEditor *local_90;
  ulong local_88;
  float local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa40) == 0) goto LAB_00103025;
  local_a0 = (Polygon3DEditor *)0x0;
  if (this[0xaa8] == (Polygon3DEditor)0x0) {
    _get_polygon();
    pPVar19 = local_90;
    if (local_90 != (Polygon3DEditor *)0x0) {
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
      pPVar19 = local_90;
      local_90 = (Polygon3DEditor *)0x0;
      local_a0 = pPVar19;
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_90);
  }
  else {
    pPVar19 = *(Polygon3DEditor **)(this + 0xaa0);
    if (*(Polygon3DEditor **)(this + 0xaa0) != (Polygon3DEditor *)0x0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)&local_a0,(CowData *)(this + 0xaa0));
      pPVar19 = local_a0;
    }
  }
  fVar20 = (float)_get_depth(this);
  fVar20 = fVar20 * __LC89;
  ArrayMesh::clear_surfaces();
  ImmediateMesh::clear_surfaces();
  local_98 = (Object *)0x0;
  pRVar2 = *(Ref **)(this + 0xa58);
  if (((*(long *)(this + 0xa28) != 0) &&
      (pOVar7 = (Object *)
                __dynamic_cast(*(long *)(this + 0xa28),&Object::typeinfo,&Material::typeinfo),
      pOVar7 != (Object *)0x0)) &&
     (local_98 = pOVar7, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_98 = (Object *)0x0;
  }
  GeometryInstance3D::set_material_override(pRVar2);
  if (((local_98 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar7 = local_98, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  local_98 = (Object *)0x0;
  ImmediateMesh::surface_begin(*(undefined8 *)(this + 0xa50),1,(Vector *)&local_98);
  if (((local_98 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar7 = local_98, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  fVar26 = _LC88;
  fStack_6c = _LC87;
  fStack_68 = _LC87;
  fVar22 = _LC88;
  if (pPVar19 != (Polygon3DEditor *)0x0) {
    local_dc = 0.0;
    local_e0 = 0.0;
    fVar22 = 0.0;
    lVar12 = 0;
    fVar26 = 0.0;
    while( true ) {
      lVar3 = *(long *)(pPVar19 + -8);
      if (lVar3 <= lVar12) break;
      pPVar10 = pPVar19 + lVar12 * 8;
      if (*(int *)(this + 0xa78) == (int)lVar12) {
        pPVar10 = this + 0xa7c;
      }
      uVar8 = *(ulong *)pPVar10;
      fVar21 = (float)(uVar8 >> 0x20);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar8;
      if (((this[0xaa8] == (Polygon3DEditor)0x0) || (lVar3 + -1 != lVar12)) &&
         (lVar15 = (lVar12 + 1) % lVar3, lVar15 != *(int *)(this + 0xa78))) {
        if (lVar3 <= lVar15) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar3,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar17 = *(undefined8 *)(pPVar19 + lVar15 * 8);
      }
      else {
        uVar17 = *(undefined8 *)(this + 0xa7c);
      }
      fVar28 = fVar21;
      if (lVar12 != 0) {
        if ((local_e0 < 0.0) || (auVar25 = auVar24, local_dc < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0);
          auVar25 = ZEXT416((uint)uVar8);
        }
        fVar23 = auVar25._0_4_;
        auVar24._8_4_ = auVar25._8_4_;
        auVar24._12_4_ = auVar25._12_4_;
        fVar27 = fVar23;
        if (fVar22 <= fVar23) {
          fVar27 = fVar22;
        }
        if (fVar26 <= fVar21) {
          fVar28 = fVar26;
        }
        if (fVar23 <= local_e0 + fVar22) {
          auVar25._0_4_ = local_e0 + fVar22;
        }
        if (fVar21 <= local_dc + fVar26) {
          fVar21 = local_dc + fVar26;
        }
        local_e0 = auVar25._0_4_ - fVar27;
        local_dc = fVar21 - fVar28;
        auVar24._4_4_ = 0;
        auVar24._0_4_ = fVar27;
      }
      fVar22 = auVar24._0_4_;
      local_58 = __LC96;
      auStack_50._0_8_ = _UNK_0010f218;
      local_88 = uVar8;
      local_80 = fVar20;
      local_78 = uVar17;
      fStack_70 = fVar20;
      ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
      ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
      local_58 = __LC96;
      auStack_50._0_8_ = _UNK_0010f218;
      ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
      ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
      lVar12 = lVar12 + 1;
      fVar26 = fVar28;
    }
    fVar26 = fVar26 - _LC33;
    fStack_6c = local_e0 + _LC87;
    fStack_68 = _LC87 + local_dc;
    fVar22 = fVar22 - _LC33;
  }
  local_78 = CONCAT44(fVar26,fVar22);
  local_64 = 0.0;
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  fStack_70 = fVar20;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) + _LC100._4_4_,
                      (float)local_78 + (float)_LC100);
  auStack_50._0_4_ = fStack_70 + 0.0;
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) + _LC99._4_4_,(float)local_78 + (float)_LC99)
  ;
  auStack_50._0_4_ = fStack_70 + 0.0;
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) + 0.0,fStack_6c + (float)local_78);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44(local_78._4_4_ + 0.0,(fStack_6c + (float)local_78) - (float)_LC100);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) + 0.0,fStack_6c + (float)local_78);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) + 0.0 + _LC99._4_4_,
                      fStack_6c + (float)local_78 + (float)_LC99);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44(fStack_68 + local_78._4_4_,(float)local_78 + 0.0);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44((fStack_68 + local_78._4_4_) - (float)_LC100,(float)local_78 + 0.0);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44(fStack_68 + local_78._4_4_,(float)local_78 + 0.0);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = fStack_70 + 0.0;
  local_58 = CONCAT44(fStack_68 + local_78._4_4_ + _LC100._4_4_,
                      (float)local_78 + 0.0 + (float)_LC100);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  local_58 = CONCAT44(fStack_68 + (float)((ulong)local_78 >> 0x20),fStack_6c + (float)local_78);
  auStack_50._0_4_ = fStack_70 + local_64;
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = local_64 + fStack_70;
  local_58 = CONCAT44(local_78._4_4_ + fStack_68,((float)local_78 + fStack_6c) - (float)_LC100);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) + fStack_68,(float)local_78 + fStack_6c);
  auStack_50._0_4_ = fStack_70 + local_64;
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  local_58 = __LC97;
  auStack_50._0_8_ = _UNK_0010f228;
  ImmediateMesh::surface_set_color(*(Color **)(this + 0xa50));
  auStack_50._0_4_ = local_64 + fStack_70;
  local_58 = CONCAT44((local_78._4_4_ + fStack_68) - (float)_LC100,(float)local_78 + fStack_6c);
  ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xa50));
  ImmediateMesh::surface_end();
  if ((pPVar19 != (Polygon3DEditor *)0x0) && (*(long *)(pPVar19 + -8) != 0)) {
    Array::Array(local_c8);
    iVar18 = (int)local_c8;
    Array::resize(iVar18);
    lVar12 = *(long *)(pPVar19 + -8);
    local_90 = (Polygon3DEditor *)0x0;
    if (lVar12 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      goto LAB_001031ed;
    }
    if (lVar12 != 0) {
      sVar16 = lVar12 * 0xc;
      if ((sVar16 == 0) ||
         (uVar8 = sVar16 - 1 | sVar16 - 1 >> 1, uVar8 = uVar8 | uVar8 >> 2,
         uVar8 = uVar8 | uVar8 >> 4, uVar8 = uVar8 | uVar8 >> 8, uVar8 = uVar8 | uVar8 >> 0x10,
         uVar8 = uVar8 | uVar8 >> 0x20, uVar8 == 0xffffffffffffffff)) {
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
LAB_001031ed:
        pPVar10 = local_90;
        if (local_90 != (Polygon3DEditor *)0x0) goto LAB_00102dec;
      }
      else {
        puVar9 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
        if (puVar9 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_001031ed;
        }
        pPVar10 = (Polygon3DEditor *)(puVar9 + 2);
        *puVar9 = 1;
        local_90 = pPVar10;
        memset(pPVar10,0,sVar16);
        puVar9[1] = lVar12;
LAB_00102dec:
        if (1 < *(ulong *)(pPVar10 + -0x10)) {
          if (local_90 == (Polygon3DEditor *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar12 = *(long *)(local_90 + -8);
          uVar8 = 0x10;
          sVar16 = lVar12 * 0xc;
          if (sVar16 != 0) {
            uVar8 = sVar16 - 1 | sVar16 - 1 >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
          }
          puVar9 = (undefined8 *)Memory::alloc_static(uVar8,false);
          pPVar19 = local_90;
          if (puVar9 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            pPVar10 = (Polygon3DEditor *)(puVar9 + 2);
            *puVar9 = 1;
            puVar9[1] = lVar12;
            memcpy(pPVar10,local_90,sVar16);
            pPVar13 = local_90;
            LOCK();
            pPVar19 = pPVar19 + -0x10;
            *(long *)pPVar19 = *(long *)pPVar19 + -1;
            UNLOCK();
            local_90 = pPVar10;
            if (*(long *)pPVar19 == 0) {
              local_90 = (Polygon3DEditor *)0x0;
              Memory::free_static(pPVar13 + -0x10,false);
              local_90 = pPVar10;
            }
          }
        }
        pPVar19 = local_a0;
        if (local_a0 == (Polygon3DEditor *)0x0) goto LAB_00102e5b;
      }
      lVar12 = *(long *)(pPVar19 + -8);
      if (0 < lVar12) {
        iVar1 = *(int *)(this + 0xa78);
        iVar14 = 0;
        pPVar10 = local_90;
        do {
          pPVar13 = pPVar19;
          if (iVar14 == iVar1) {
            pPVar13 = this + 0xa7c;
          }
          iVar14 = iVar14 + 1;
          pPVar19 = pPVar19 + 8;
          uVar17 = *(undefined8 *)pPVar13;
          *(float *)(pPVar10 + 8) = fVar20;
          *(undefined8 *)pPVar10 = uVar17;
          pPVar10 = pPVar10 + 0xc;
        } while (iVar14 != (int)lVar12);
      }
    }
LAB_00102e5b:
    Variant::Variant((Variant *)&local_58,(Vector *)&local_98);
    pVVar11 = (Variant *)Array::operator[](iVar18);
    if (pVVar11 == (Variant *)&local_58) {
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar11] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar11 = 0;
      *(int *)pVVar11 = (int)local_58;
      *(undefined8 *)(pVVar11 + 8) = auStack_50._0_8_;
      *(undefined8 *)(pVVar11 + 0x10) = auStack_50._8_8_;
    }
    uVar17 = *(undefined8 *)(this + 0xa68);
    Dictionary::Dictionary(local_b8);
    Array::Array(local_c0);
    local_58 = 0;
    local_b0[0] = (Object *)0x0;
    auStack_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)local_c0,(StringName *)0x1c,(Variant *)local_b0);
    if ((StringName::configured != '\0') && (local_b0[0] != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    ArrayMesh::add_surface_from_arrays(uVar17,0,local_c8,local_c0,local_b8,0);
    Array::~Array(local_c0);
    Dictionary::~Dictionary(local_b8);
    plVar4 = *(long **)(this + 0xa68);
    pcVar5 = *(code **)(*plVar4 + 0x208);
    local_b0[0] = (Object *)0x0;
    if (((*(long *)(this + 0xa30) != 0) &&
        (pOVar7 = (Object *)
                  __dynamic_cast(*(long *)(this + 0xa30),&Object::typeinfo,&Material::typeinfo,0),
        pOVar7 != (Object *)0x0)) &&
       (local_b0[0] = pOVar7, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_b0[0] = (Object *)0x0;
    }
    (*pcVar5)(plVar4,0,(Variant *)local_b0);
    if (((local_b0[0] != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar7 = local_b0[0], cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b0[0]), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    pPVar19 = local_90;
    if (local_90 != (Polygon3DEditor *)0x0) {
      LOCK();
      pPVar10 = local_90 + -0x10;
      *(long *)pPVar10 = *(long *)pPVar10 + -1;
      UNLOCK();
      if (*(long *)pPVar10 == 0) {
        local_90 = (Polygon3DEditor *)0x0;
        Memory::free_static(pPVar19 + -0x10,false);
      }
    }
    Array::~Array(local_c8);
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
LAB_00103025:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Polygon3DEditor::_notification(int) */

void __thiscall Polygon3DEditor::_notification(Polygon3DEditor *this,int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xd) {
    _notification((int)this);
    return;
  }
  if (((param_1 == 0x11) && (*(long *)(this + 0xa40) != 0)) &&
     (fVar1 = (float)_get_depth(this), fVar1 != *(float *)(this + 0xaac))) {
    _polygon_draw(this);
    uVar2 = _get_depth(this);
    *(undefined4 *)(this + 0xaac) = uVar2;
    return;
  }
  return;
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



/* Polygon3DEditor::edit(Node*) */

void __thiscall Polygon3DEditor::edit(Polygon3DEditor *this,Node *param_1)

{
  Object *pOVar1;
  Callable *pCVar2;
  char cVar3;
  long *plVar4;
  Object *pOVar5;
  long lVar6;
  Node *pNVar7;
  long in_FS_OFFSET;
  long local_b0;
  int local_a8 [2];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Node *)0x0) {
    pCVar2 = *(Callable **)(this + 0xa48);
    *(undefined8 *)(this + 0xa40) = 0;
    if (pCVar2 != (Callable *)0x0) {
      create_custom_callable_function_pointer<Polygon3DEditor>
                ((Polygon3DEditor *)local_a8,(char *)this,
                 (_func_void *)"&Polygon3DEditor::_polygon_draw");
      Resource::disconnect_changed(pCVar2);
      Callable::~Callable((Callable *)local_a8);
      if (*(long *)(this + 0xa48) != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar1 = *(Object **)(this + 0xa48);
          cVar3 = predelete_handler(pOVar1);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    *(undefined8 *)(this + 0xa48) = 0;
    lVar6 = Node::get_parent();
    if (lVar6 != 0) {
      pNVar7 = (Node *)Node::get_parent();
      Node::remove_child(pNVar7);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process(SUB81(this,0));
      return;
    }
    goto LAB_00103aad;
  }
  plVar4 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&Node3D::typeinfo,0);
  *(long **)(this + 0xa40) = plVar4;
  StringName::StringName((StringName *)&local_b0,"_get_editable_3d_polygon_resource",false);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  uStack_a0 = 0;
  (**(code **)(*plVar4 + 0x68))
            ((Variant *)local_58,plVar4,(StringName *)&local_b0,0,0,(Polygon3DEditor *)local_a8);
  if (local_a8[0] == 0) {
    Variant::Variant((Variant *)local_98,(Variant *)local_58);
  }
  else {
    local_98[0] = 0;
    local_90 = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)(this + 0xa48);
  if (pOVar5 != pOVar1) {
    if (pOVar5 == (Object *)0x0) {
      if (pOVar1 != (Object *)0x0) {
        *(undefined8 *)(this + 0xa48) = 0;
LAB_001039c4:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar1);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Resource::typeinfo,0);
      if (pOVar1 != pOVar5) {
        *(Object **)(this + 0xa48) = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this + 0xa48) = 0;
          }
        }
        if (pOVar1 != (Object *)0x0) goto LAB_001039c4;
      }
    }
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  pCVar2 = *(Callable **)(this + 0xa48);
  if (pCVar2 != (Callable *)0x0) {
    create_custom_callable_function_pointer<Polygon3DEditor>
              ((Polygon3DEditor *)local_a8,(char *)this,
               (_func_void *)"&Polygon3DEditor::_polygon_draw");
    Resource::connect_changed(pCVar2,(uint)(Polygon3DEditor *)local_a8);
    Callable::~Callable((Callable *)local_a8);
  }
  _get_polygon();
  lVar6 = CONCAT44(uStack_9c,uStack_a0);
  CowData<Vector2>::_unref((CowData<Vector2> *)&uStack_a0);
  if (lVar6 == 0) {
    *(undefined4 *)(this + 0xa10) = 0;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
  }
  CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xaa0),0);
  this[0xaa8] = (Polygon3DEditor)0x0;
  *(undefined4 *)(this + 0xa78) = 0xffffffff;
  lVar6 = Node::get_parent();
  if (lVar6 == 0) {
    Node::add_child(param_1,*(undefined8 *)(this + 0xa58),0,0);
  }
  else {
    (**(code **)(**(long **)(this + 0xa58) + 0x198))(*(long **)(this + 0xa58),param_1,0);
  }
  _polygon_draw(this);
  Node::set_process(SUB81(this,0));
  *(undefined4 *)(this + 0xaac) = 0xbf800000;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103aad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditorPlugin::edit(Object*) */

void __thiscall Polygon3DEditorPlugin::edit(Polygon3DEditorPlugin *this,Object *param_1)

{
  Polygon3DEditor *this_00;
  
  this_00 = *(Polygon3DEditor **)(this + 0x660);
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
  }
  Polygon3DEditor::edit(this_00,(Node *)param_1);
  return;
}



/* Polygon3DEditorPlugin::make_visible(bool) */

void __thiscall Polygon3DEditorPlugin::make_visible(Polygon3DEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  Polygon3DEditor::edit(*(Polygon3DEditor **)(this + 0x660),(Node *)0x0);
  return;
}



/* Polygon3DEditor::_wip_close() */

void __thiscall Polygon3DEditor::_wip_close(Polygon3DEditor *this)

{
  Object *pOVar1;
  StringName *pSVar2;
  long in_FS_OFFSET;
  Variant *local_e8;
  undefined8 local_d8;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int local_b8 [2];
  undefined1 local_b0 [16];
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar2 = *(StringName **)(this + 0xa48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pSVar2 == (StringName *)0x0) &&
     (pSVar2 = *(StringName **)(this + 0xa40), pSVar2 == (StringName *)0x0)) {
    _err_print_error("_wip_close","editor/plugins/polygon_3d_editor_plugin.cpp",0x60,
                     "Parameter \"obj\" is null.","Edited object is not valid.",0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pOVar1 = (Object *)EditorUndoRedoManager::get_singleton();
    local_d0 = 0;
    local_c0 = 0;
    uStack_bc = 0;
    local_c8 = 0x1066dd;
    uStack_c4 = 0;
    String::parse_latin1((StrRange *)&local_d0);
    local_c8 = 0x106963;
    uStack_c4 = 0;
    local_d8 = 0;
    local_c0 = 0x10;
    uStack_bc = 0;
    String::parse_latin1((StrRange *)&local_d8);
    TTR((String *)&local_c8,(String *)&local_d8);
    EditorUndoRedoManager::create_action(pOVar1,(String *)&local_c8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    StringName::StringName((StringName *)&local_d0,"get_polygon",false);
    local_90 = (undefined1  [16])0x0;
    local_98 = (Variant *)0x0;
    local_c8 = 0;
    uStack_c4 = 0;
    local_c0 = 0;
    (**(code **)(*(long *)pSVar2 + 0x68))
              ((Variant *)local_78,pSVar2,(StrRange *)&local_d0,0,0,(String *)&local_c8);
    if (local_c8 == 0) {
      Variant::Variant((Variant *)local_b8,(Variant *)local_78);
    }
    else {
      local_b8[0] = 0;
      local_b0 = (undefined1  [16])0x0;
    }
    local_e8 = (Variant *)local_b8;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_c8,"set_polygon",false);
    Variant::Variant((Variant *)local_78,local_e8);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar1,pSVar2,(Variant **)&local_c8,(int)&local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    local_c0 = 0;
    uStack_bc = 0;
    if (*(long *)(this + 0xaa0) != 0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)&local_c0,(CowData *)(this + 0xaa0));
    }
    StringName::StringName((StringName *)&local_d0,"set_polygon",false);
    Variant::Variant((Variant *)local_78,(Vector *)&local_c8);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar1,pSVar2,(Variant **)&local_d0,(int)&local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_c0);
    StringName::StringName((StringName *)&local_c8,"_polygon_draw",false);
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar1,(StringName *)this,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_polygon_draw",false);
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar1,(StringName *)this,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
    CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xaa0),0);
    this[0xaa8] = (Polygon3DEditor)0x0;
    *(undefined4 *)(this + 0xa10) = 1;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
    *(undefined4 *)(this + 0xa78) = 0xffffffff;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar1,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Polygon3DEditor::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) */

undefined8 __thiscall
Polygon3DEditor::forward_3d_gui_input(Polygon3DEditor *this,Camera3D *param_1,Ref *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  Object *pOVar6;
  Object *pOVar7;
  ulong uVar8;
  undefined8 uVar9;
  EditorUndoRedoManager *pEVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  Vector<Vector2> *pVVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  CowData<Vector2> *local_1f8;
  float local_188;
  int local_180;
  undefined8 local_158;
  long local_150;
  Vector<Vector2> local_148 [8];
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  Vector<Vector2> *local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined1 local_f0 [8];
  float local_e8;
  undefined1 local_e4 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa40) != 0) {
    lVar14 = *(long *)(this + 0xa48);
    if (*(long *)(this + 0xa48) == 0) {
      lVar14 = *(long *)(this + 0xa40);
    }
    Node3D::get_global_transform();
    Transform3D::affine_inverse();
    fVar20 = (float)((ulong)local_70 >> 0x20);
    fVar15 = (float)_get_depth(this);
    fVar15 = fVar15 * __LC89;
    fVar21 = local_a0 * local_a0 + fStack_94 * fStack_94 + local_88 * local_88;
    if (fVar21 == 0.0) {
      fVar21 = 0.0;
      fVar18 = 0.0;
      fVar16 = 0.0;
    }
    else {
      fVar21 = SQRT(fVar21);
      fVar16 = local_a0 / fVar21;
      fVar18 = fStack_94 / fVar21;
      fVar21 = local_88 / fVar21;
    }
    lVar12 = *(long *)param_2;
    local_d8 = CONCAT44(fVar18,fVar16);
    uStack_d0 = CONCAT44((fVar15 * fVar18 + fStack_80) * fVar18 +
                         (local_84 + fVar15 * fVar16) * fVar16 +
                         (fVar15 * fVar21 + local_7c) * fVar21,fVar21);
    if (lVar12 != 0) {
      pOVar6 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&InputEventMouseButton::typeinfo,0)
      ;
      fVar21 = (float)((ulong)local_54 >> 0x20);
      if (pOVar6 == (Object *)0x0) {
LAB_001042fa:
        pOVar7 = (Object *)
                 __dynamic_cast(lVar12,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
        if (pOVar7 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 != '\0') {
            if (*(int *)(this + 0xa78) != -1) {
              if (this[0xaa8] == (Polygon3DEditor)0x0) {
                uVar8 = InputEventMouse::get_button_mask();
                if ((uVar8 & 1) == 0) goto LAB_001044cd;
              }
              local_100 = InputEventMouse::get_position();
              auVar23 = (**(code **)(*(long *)param_1 + 0x208))(param_1,&local_100);
              local_e4 = auVar23;
              auVar23 = (**(code **)(*(long *)param_1 + 0x200))(param_1,&local_100);
              local_c8 = auVar23._0_8_;
              local_f0 = (undefined1  [8])0x0;
              local_e8 = 0.0;
              local_c0 = CONCAT44(local_c0._4_4_,auVar23._8_4_);
              cVar3 = Plane::intersects_ray
                                ((Vector3 *)&local_d8,(Vector3 *)local_e4,(Vector3 *)&local_c8);
              if (cVar3 != '\0') {
                fVar15 = local_f0._0_4_;
                fVar16 = local_f0._4_4_;
                local_110 = CONCAT44(fVar15 * fVar20 + fVar16 * local_68 + local_e8 * fStack_64 +
                                     fVar21,fVar15 * local_78 + fVar16 * fStack_74 +
                                            local_e8 * (float)local_70 + (float)local_54);
                local_e8 = local_58 * local_e8 + fVar16 * local_5c + local_60 * fVar15 + local_4c;
                local_f0 = (undefined1  [8])local_110;
                if (this[0xaa9] == (Polygon3DEditor)0x0) {
LAB_00104498:
                  if (*(char *)(Node3DEditor::singleton + 0xe00) !=
                      *(char *)(Node3DEditor::singleton + 0xe01)) {
                    fVar15 = (float)Node3DEditor::get_translate_snap();
                    local_110 = Vector2::snappedf(fVar15);
                  }
                }
                else {
                  uVar9 = Input::get_singleton();
                  cVar3 = Input::is_key_pressed(uVar9);
                  if (cVar3 == '\0') {
                    this[0xaa9] = (Polygon3DEditor)0x0;
                    goto LAB_00104498;
                  }
                  if (this[0xaa9] == (Polygon3DEditor)0x0) goto LAB_00104498;
                }
                *(undefined8 *)(this + 0xa7c) = local_110;
                _polygon_draw(this);
              }
            }
LAB_001044cd:
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              cVar3 = predelete_handler(pOVar7);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
        }
        if (pOVar6 == (Object *)0x0) goto LAB_001044e6;
LAB_00104773:
        uVar9 = 0;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          lVar12 = *(long *)param_2;
          if (lVar12 == 0) goto LAB_001044e6;
          pOVar6 = (Object *)0x0;
          goto LAB_001042fa;
        }
        uVar9 = 0;
        local_128 = InputEventMouse::get_position();
        _local_f0 = (**(code **)(*(long *)param_1 + 0x208))(param_1,&local_128);
        local_e4 = (**(code **)(*(long *)param_1 + 0x200))(param_1,&local_128);
        local_120 = (Vector<Vector2> *)0x0;
        local_118 = 0.0;
        cVar3 = Plane::intersects_ray((Vector3 *)&local_d8,(Vector3 *)local_f0,(Vector3 *)local_e4);
        if (cVar3 != '\0') {
          fVar16 = SUB84(local_120,0);
          fVar18 = (float)((ulong)local_120 >> 0x20);
          pVVar19 = (Vector<Vector2> *)
                    CONCAT44(fVar16 * fVar20 + fVar18 * local_68 + local_118 * fStack_64 + fVar21,
                             fVar16 * local_78 + fVar18 * fStack_74 + local_118 * (float)local_70 +
                             (float)local_54);
          local_118 = local_60 * fVar16 + fVar18 * local_5c + local_118 * local_58 + local_4c;
          local_120 = pVVar19;
          _get_polygon();
          local_138 = 0;
          String::parse_latin1((String *)&local_138,"editors/polygon_editor/point_grab_radius");
          _EDITOR_GET((String *)&local_c8);
          fVar16 = Variant::operator_cast_to_float((Variant *)&local_c8);
          if (Variant::needs_deinit[(int)local_c8] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if (*(int *)(this + 0xa10) == 0) {
            iVar4 = InputEventMouseButton::get_button_index();
            if (iVar4 == 1) {
              cVar3 = InputEvent::is_pressed();
              if (cVar3 != '\0') {
                if (this[0xaa8] == (Polygon3DEditor)0x0) {
                  CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xaa0),0);
                  Vector<Vector2>::push_back(pVVar19,this + 0xa98);
                  *(undefined2 *)(this + 0xaa8) = 1;
                  *(Vector<Vector2> **)(this + 0xa7c) = pVVar19;
                  _polygon_draw(this);
                  *(undefined4 *)(this + 0xa78) = 1;
                }
                else {
                  puVar1 = *(undefined8 **)(this + 0xaa0);
                  if ((puVar1 != (undefined8 *)0x0) && (1 < (long)puVar1[-1])) {
                    fVar20 = (float)*puVar1;
                    fVar21 = (float)((ulong)*puVar1 >> 0x20);
                    local_c0 = CONCAT44(local_c0._4_4_,
                                        local_90 * fVar20 + local_8c * fVar21 + fVar15 * local_88 +
                                        local_7c);
                    local_c8 = CONCAT44(fStack_9c * fVar20 + fVar21 * local_98 + fStack_94 * fVar15
                                        + fStack_80,
                                        local_a8 * fVar20 + fVar21 * fStack_a4 + local_a0 * fVar15 +
                                        local_84);
                    local_100 = (**(code **)(*(long *)param_1 + 0x218))(param_1,(String *)&local_c8)
                    ;
                    fVar15 = (float)Vector2::distance_to((Vector2 *)&local_100);
                    if (fVar15 < fVar16) {
                      _wip_close(this);
                      goto LAB_00104a1f;
                    }
                  }
                  Vector<Vector2>::push_back(pVVar19,this + 0xa98);
                  if (*(long *)(this + 0xaa0) == 0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = (undefined4)*(undefined8 *)(*(long *)(this + 0xaa0) + -8);
                  }
                  *(undefined4 *)(this + 0xa78) = uVar5;
                  this[0xaa9] = (Polygon3DEditor)0x0;
                  _polygon_draw(this);
                }
LAB_00104a1f:
                uVar9 = 1;
                goto LAB_00104a25;
              }
            }
            iVar4 = InputEventMouseButton::get_button_index();
            if (iVar4 == 2) {
              cVar3 = InputEvent::is_pressed();
              if ((cVar3 != '\0') && (this[0xaa8] != (Polygon3DEditor)0x0)) {
                _wip_close(this);
              }
            }
          }
          else if (*(int *)(this + 0xa10) == 1) {
            iVar4 = InputEventMouseButton::get_button_index();
            if (iVar4 == 1) {
              cVar3 = InputEvent::is_pressed();
              if (cVar3 != '\0') {
                cVar3 = InputEventWithModifiers::is_command_or_control_pressed();
                if (cVar3 == '\0') {
                  if (local_140 != 0) {
                    lVar12 = 0;
                    iVar4 = -1;
                    fVar18 = _LC116;
                    do {
                      if (*(long *)(local_140 + -8) <= lVar12) break;
                      uVar9 = *(undefined8 *)(local_140 + lVar12 * 8);
                      fVar17 = (float)uVar9;
                      fVar22 = (float)((ulong)uVar9 >> 0x20);
                      local_c0 = CONCAT44(local_c0._4_4_,
                                          local_90 * fVar17 + local_8c * fVar22 + fVar15 * local_88
                                          + local_7c);
                      local_c8 = CONCAT44(fVar17 * fStack_9c + local_98 * fVar22 +
                                          fStack_94 * fVar15 + fStack_80,
                                          fVar17 * local_a8 + fStack_a4 * fVar22 + local_a0 * fVar15
                                          + local_84);
                      local_100 = (**(code **)(*(long *)param_1 + 0x218))
                                            (param_1,(String *)&local_c8);
                      fVar17 = (float)Vector2::distance_to((Vector2 *)&local_100);
                      if (fVar17 < fVar18) {
                        if (fVar17 < fVar16) {
                          iVar4 = (int)lVar12;
                        }
                        fVar18 = (float)((uint)fVar18 & -(uint)(fVar16 <= fVar17) |
                                        ~-(uint)(fVar16 <= fVar17) & (uint)fVar17);
                      }
                      lVar12 = lVar12 + 1;
                    } while (local_140 != 0);
                    if (-1 < iVar4) {
                      if (*(long *)(this + 0xa90) != local_140) {
                        CowData<Vector2>::_ref
                                  ((CowData<Vector2> *)(this + 0xa90),(CowData *)&local_140);
                      }
                      lVar12 = (long)iVar4;
                      *(int *)(this + 0xa78) = iVar4;
                      if (local_140 == 0) {
                        lVar11 = 0;
LAB_0010591e:
                        _err_print_index_error
                                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar11,"p_index",
                                   "size()","",false,true);
                        _err_flush_stdout();
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      lVar11 = *(long *)(local_140 + -8);
                      if (lVar11 <= lVar12) goto LAB_0010591e;
                      *(undefined8 *)(this + 0xa7c) = *(undefined8 *)(local_140 + lVar12 * 8);
                      _polygon_draw(this);
                      this[0xaa9] = (Polygon3DEditor)0x0;
                      goto LAB_00104a1f;
                    }
                  }
                  goto LAB_00104748;
                }
                if ((local_140 == 0) || (lVar12 = *(long *)(local_140 + -8), lVar12 < 3)) {
                  pEVar10 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
                  local_150 = 0;
                  String::parse_latin1((String *)&local_150,"");
                  local_158 = 0;
                  String::parse_latin1((String *)&local_158,"Edit Poly");
                  TTR((String *)&local_138,(String *)&local_158);
                  EditorUndoRedoManager::create_action(pEVar10,(String *)&local_138,0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                  local_130 = 0;
                  if (local_140 != 0) {
                    CowData<Vector2>::_ref((CowData<Vector2> *)&local_130,(CowData *)&local_140);
                  }
                  StringName::StringName((StringName *)&local_150,"set_polygon",false);
                  EditorUndoRedoManager::add_undo_method<Vector<Vector2>>
                            (pEVar10,lVar14,(String *)&local_150,(String *)&local_138);
                  if ((StringName::configured != '\0') && (local_150 != 0)) {
                    StringName::unref();
                  }
                  CowData<Vector2>::_unref((CowData<Vector2> *)&local_130);
                  Vector<Vector2>::push_back(pVVar19,local_148);
                  goto joined_r0x001058f5;
                }
                local_180 = -1;
                local_188 = _LC116;
                lVar13 = 0;
                while (lVar13 < lVar12) {
                  uVar9 = *(undefined8 *)(local_140 + lVar13 * 8);
                  fVar18 = (float)uVar9;
                  fVar17 = (float)((ulong)uVar9 >> 0x20);
                  local_108 = local_90 * fVar18 + local_8c * fVar17 + fVar15 * local_88 + local_7c;
                  local_110 = CONCAT44(fVar17 * local_98 + fStack_9c * fVar18 + fStack_94 * fVar15 +
                                       fStack_80,
                                       fVar17 * fStack_a4 + local_a8 * fVar18 + local_a0 * fVar15 +
                                       local_84);
                  local_c8 = (**(code **)(*(long *)param_1 + 0x218))(param_1,&local_110);
                  if (local_140 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  lVar11 = *(long *)(local_140 + -8);
                  lVar12 = (lVar13 + 1) % lVar11;
                  if (lVar11 <= lVar12) goto LAB_0010591e;
                  uVar9 = *(undefined8 *)(local_140 + lVar12 * 8);
                  fVar18 = (float)uVar9;
                  fVar17 = (float)((ulong)uVar9 >> 0x20);
                  local_f8 = local_90 * fVar18 + local_8c * fVar17 + fVar15 * local_88 + local_7c;
                  local_100 = CONCAT44(fVar17 * local_98 + fStack_9c * fVar18 + fStack_94 * fVar15 +
                                       fStack_80,
                                       fVar17 * fStack_a4 + local_a8 * fVar18 + local_a0 * fVar15 +
                                       local_84);
                  local_c0 = (**(code **)(*(long *)param_1 + 0x218))(param_1,&local_100);
                  local_100._4_4_ = (float)((ulong)local_c8 >> 0x20);
                  local_110 = CONCAT44((float)((ulong)local_128 >> 0x20) - local_100._4_4_,
                                       (float)local_128 - (float)local_c8);
                  local_100._0_4_ = (float)local_c0 - (float)local_c8;
                  local_100._4_4_ = (float)((ulong)local_c0 >> 0x20) - local_100._4_4_;
                  fVar18 = (float)Vector2::length_squared();
                  uVar9 = local_c8;
                  if (_LC120 <= fVar18) {
                    fVar17 = (float)Vector2::dot((Vector2 *)&local_100);
                    fVar17 = fVar17 / fVar18;
                    uVar9 = local_c8;
                    if ((0.0 < fVar17) && (uVar9 = local_c0, fVar17 < _LC33)) {
                      uVar9 = CONCAT44(fVar17 * local_100._4_4_ + (float)((ulong)local_c8 >> 0x20),
                                       fVar17 * (float)local_100 + (float)local_c8);
                    }
                  }
                  local_100 = uVar9;
                  fVar18 = (float)Vector2::distance_squared_to((Vector2 *)&local_100);
                  if (_LC121 <= (double)fVar18) {
                    fVar18 = (float)Vector2::distance_squared_to((Vector2 *)&local_100);
                    if (_LC121 <= (double)fVar18) {
                      fVar18 = (float)Vector2::distance_to((Vector2 *)&local_100);
                      if (fVar18 < local_188) {
                        iVar4 = (int)lVar13;
                        if (fVar16 <= fVar18) {
                          iVar4 = local_180;
                        }
                        local_188 = (float)(~-(uint)(fVar16 <= fVar18) & (uint)fVar18 |
                                           (uint)local_188 & -(uint)(fVar16 <= fVar18));
                        local_180 = iVar4;
                      }
                    }
                  }
                  if (local_140 == 0) break;
                  lVar13 = lVar13 + 1;
                  lVar12 = *(long *)(local_140 + -8);
                }
                if (local_180 < 0) goto LAB_00104748;
                if (local_140 != *(long *)(this + 0xa90)) {
                  CowData<Vector2>::_ref((CowData<Vector2> *)(this + 0xa90),(CowData *)&local_140);
                }
                lVar14 = (long)(local_180 + 1);
                if (local_140 == 0) {
                  lVar12 = 1;
LAB_00105ae6:
                  _err_print_index_error
                            ("insert","./core/templates/cowdata.h",0xf0,lVar14,lVar12,"p_pos",
                             "new_size","",false,false);
                }
                else {
                  lVar11 = *(long *)(local_140 + -8);
                  lVar12 = lVar11 + 1;
                  if (lVar12 <= lVar14) goto LAB_00105ae6;
                  iVar4 = CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_140,lVar12);
                  if (iVar4 == 0) {
                    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_140);
                    if (lVar14 < lVar11) {
                      memmove((void *)(local_140 + 8 + lVar14 * 8),(void *)(local_140 + lVar14 * 8),
                              (lVar11 - lVar14) * 8);
                    }
                    *(Vector<Vector2> **)(local_140 + lVar14 * 8) = pVVar19;
                  }
                  else {
                    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                                     "Condition \"err\" is true. Returning: err",0,0);
                  }
                }
                *(Vector<Vector2> **)(this + 0xa7c) = pVVar19;
                *(int *)(this + 0xa78) = local_180 + 1;
                _set_polygon(this,(Vector *)local_148);
                _polygon_draw(this);
                this[0xaa9] = (Polygon3DEditor)0x1;
                goto LAB_00104a1f;
              }
              this[0xaa9] = (Polygon3DEditor)0x0;
              iVar4 = *(int *)(this + 0xa78);
              if (iVar4 == -1) goto LAB_00104748;
              lVar12 = (long)iVar4;
              if (iVar4 < 0) {
                if (local_140 != 0) goto LAB_0010575d;
LAB_001057be:
                lVar14 = 0;
              }
              else {
                if (local_140 == 0) goto LAB_001057be;
                if (lVar12 < *(long *)(local_140 + -8)) {
                  CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_140);
                  *(undefined8 *)(local_140 + lVar12 * 8) = *(undefined8 *)(this + 0xa7c);
                  pEVar10 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
                  local_150 = 0;
                  String::parse_latin1((String *)&local_150,"");
                  local_158 = 0;
                  String::parse_latin1((String *)&local_158,"Edit Poly");
                  TTR((String *)&local_138,(String *)&local_158);
                  EditorUndoRedoManager::create_action(pEVar10,(String *)&local_138,0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                  local_130 = 0;
                  if (local_140 != 0) {
                    CowData<Vector2>::_ref((CowData<Vector2> *)&local_130,(CowData *)&local_140);
                  }
                  StringName::StringName((StringName *)&local_150,"set_polygon",false);
                  EditorUndoRedoManager::add_do_method<Vector<Vector2>>
                            (pEVar10,lVar14,(String *)&local_150,(String *)&local_138);
                  if ((StringName::configured != '\0') && (local_150 != 0)) {
                    StringName::unref();
                  }
                  CowData<Vector2>::_unref((CowData<Vector2> *)&local_130);
                  local_130 = 0;
                  if (*(long *)(this + 0xa90) != 0) {
                    CowData<Vector2>::_ref((CowData<Vector2> *)&local_130,(CowData *)(this + 0xa90))
                    ;
                  }
                  StringName::StringName((StringName *)&local_150,"set_polygon",false);
                  EditorUndoRedoManager::add_undo_method<Vector<Vector2>>
                            (pEVar10,lVar14,(String *)&local_150,(String *)&local_138);
                  if ((StringName::configured != '\0') && (local_150 != 0)) {
                    StringName::unref();
                  }
                  CowData<Vector2>::_unref((CowData<Vector2> *)&local_130);
                  StringName::StringName((StringName *)&local_138,"_polygon_draw",false);
                  EditorUndoRedoManager::add_do_method<>
                            (pEVar10,(Object *)this,(StringName *)&local_138);
                  if ((StringName::configured != '\0') && (local_138 != 0)) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_138,"_polygon_draw",false);
                  EditorUndoRedoManager::add_undo_method<>
                            (pEVar10,(Object *)this,(StringName *)&local_138);
                  if ((StringName::configured != '\0') && (local_138 != 0)) {
                    StringName::unref();
                  }
                  EditorUndoRedoManager::commit_action(SUB81(pEVar10,0));
                  *(undefined4 *)(this + 0xa78) = 0xffffffff;
                  goto LAB_00104a1f;
                }
LAB_0010575d:
                lVar14 = *(long *)(local_140 + -8);
              }
              uVar9 = 0;
              _err_print_index_error
                        ("forward_3d_gui_input","editor/plugins/polygon_3d_editor_plugin.cpp",0x108,
                         lVar12,lVar14,"edited_point","poly.size()","",false,false);
LAB_00104a25:
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_140);
              goto LAB_001045bd;
            }
LAB_00104748:
            iVar4 = InputEventMouseButton::get_button_index();
            if (iVar4 == 2) {
              cVar3 = InputEvent::is_pressed();
              if (((cVar3 != '\0') && (*(int *)(this + 0xa78) == -1)) && (local_140 != 0)) {
                lVar12 = 0;
                iVar4 = -1;
                fVar18 = _LC116;
                do {
                  if (*(long *)(local_140 + -8) <= lVar12) break;
                  uVar9 = *(undefined8 *)(local_140 + lVar12 * 8);
                  fVar17 = (float)uVar9;
                  fVar22 = (float)((ulong)uVar9 >> 0x20);
                  local_c0 = CONCAT44(local_c0._4_4_,
                                      local_90 * fVar17 + local_8c * fVar22 + fVar15 * local_88 +
                                      local_7c);
                  local_c8 = CONCAT44(fVar17 * fStack_9c + local_98 * fVar22 + fStack_94 * fVar15 +
                                      fStack_80,
                                      fVar17 * local_a8 + fStack_a4 * fVar22 + local_a0 * fVar15 +
                                      local_84);
                  local_100 = (**(code **)(*(long *)param_1 + 0x218))(param_1,(String *)&local_c8);
                  fVar17 = (float)Vector2::distance_to((Vector2 *)&local_100);
                  if (fVar17 < fVar18) {
                    if (fVar17 < fVar16) {
                      iVar4 = (int)lVar12;
                    }
                    fVar18 = (float)((uint)fVar18 & -(uint)(fVar16 <= fVar17) |
                                    ~-(uint)(fVar16 <= fVar17) & (uint)fVar17);
                  }
                  lVar12 = lVar12 + 1;
                } while (local_140 != 0);
                if (-1 < iVar4) {
                  pEVar10 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
                  local_150 = 0;
                  String::parse_latin1((String *)&local_150,"");
                  local_158 = 0;
                  String::parse_latin1((String *)&local_158,"Edit Poly (Remove Point)");
                  TTR((String *)&local_138,(String *)&local_158);
                  EditorUndoRedoManager::create_action(pEVar10,(String *)&local_138,0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                  local_130 = 0;
                  if (local_140 != 0) {
                    CowData<Vector2>::_ref((CowData<Vector2> *)&local_130,(CowData *)&local_140);
                  }
                  local_1f8 = (CowData<Vector2> *)&local_130;
                  StringName::StringName((StringName *)&local_150,"set_polygon",false);
                  EditorUndoRedoManager::add_undo_method<Vector<Vector2>>
                            (pEVar10,lVar14,(String *)&local_150,(String *)&local_138);
                  if ((StringName::configured != '\0') && (local_150 != 0)) {
                    StringName::unref();
                  }
                  CowData<Vector2>::_unref(local_1f8);
                  Vector<Vector2>::remove_at(local_148,(long)iVar4);
joined_r0x001058f5:
                  local_130 = 0;
                  if (local_140 != 0) {
                    local_1f8 = (CowData<Vector2> *)&local_130;
                    local_130 = 0;
                    CowData<Vector2>::_ref(local_1f8,(CowData *)&local_140);
                  }
                  local_1f8 = (CowData<Vector2> *)&local_130;
                  StringName::StringName((StringName *)&local_150,"set_polygon",false);
                  EditorUndoRedoManager::add_do_method<Vector<Vector2>>
                            (pEVar10,lVar14,(StringName *)&local_150,(String *)&local_138);
                  if ((StringName::configured != '\0') && (local_150 != 0)) {
                    StringName::unref();
                  }
                  CowData<Vector2>::_unref(local_1f8);
                  StringName::StringName((StringName *)&local_138,"_polygon_draw",false);
                  EditorUndoRedoManager::add_do_method<>
                            (pEVar10,(Object *)this,(StringName *)&local_138);
                  if ((StringName::configured != '\0') && (local_138 != 0)) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_138,"_polygon_draw",false);
                  EditorUndoRedoManager::add_undo_method<>
                            (pEVar10,(Object *)this,(StringName *)&local_138);
                  if ((StringName::configured != '\0') && (local_138 != 0)) {
                    StringName::unref();
                  }
                  EditorUndoRedoManager::commit_action(SUB81(pEVar10,0));
                  goto LAB_00104a1f;
                }
              }
            }
          }
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_140);
          lVar12 = *(long *)param_2;
          if (lVar12 != 0) goto LAB_001042fa;
          goto LAB_00104773;
        }
      }
LAB_001045bd:
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar6);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      goto LAB_001044e9;
    }
  }
LAB_001044e6:
  uVar9 = 0;
LAB_001044e9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* BaseMaterial3D::_can_do_next_pass() const */

undefined8 BaseMaterial3D::_can_do_next_pass(void)

{
  return 1;
}



/* BaseMaterial3D::_can_use_render_priority() const */

undefined8 BaseMaterial3D::_can_use_render_priority(void)

{
  return 1;
}



/* StandardMaterial3D::is_class_ptr(void*) const */

uint StandardMaterial3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x10f1,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f1,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f1,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f1,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f1,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* StandardMaterial3D::_getv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_property_can_revertv(StringName const&) const */

undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_notificationv(int, bool) */

void StandardMaterial3D::_notificationv(int param_1,bool param_2)

{
  return;
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



/* Polygon3DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Polygon3DEditorPlugin::is_class_ptr(Polygon3DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f1,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Polygon3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Polygon3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Polygon3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Polygon3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Polygon3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Polygon3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Polygon3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Polygon3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Polygon3DEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) */

void Polygon3DEditorPlugin::forward_3d_gui_input(Camera3D *param_1,Ref *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00105e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x660) + 0x368))();
  return;
}



/* Polygon3DEditorPlugin::has_main_screen() const */

undefined8 Polygon3DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void,Node*> *this)

{
  return;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<Polygon3DEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<Polygon3DEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<Polygon3DEditor,void,Node*> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Polygon3DEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e610;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e610;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010efe8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010efe8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Polygon3DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Polygon3DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Polygon3DEditor::_property_can_revertv(StringName const&) const */

undefined8 Polygon3DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Polygon3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Polygon3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00113018 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<Polygon3DEditor,void,Node*> *this)

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
      goto LAB_0010618d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010618d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010618d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,int>::get_object
          (CallableCustomMethodPointer<Polygon3DEditor,void,int> *this)

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
      goto LAB_0010628d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010628d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010628d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void>::get_object
          (CallableCustomMethodPointer<Polygon3DEditor,void> *this)

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
      goto LAB_0010638d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010638d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010638d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113020 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* Polygon3DEditor::_validate_propertyv(PropertyInfo&) const */

void Polygon3DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* Polygon3DEditor::_setv(StringName const&, Variant const&) */

undefined8 Polygon3DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001065a8) */
/* Polygon3DEditor::_getv(StringName const&, Variant&) const */

undefined8 Polygon3DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* Polygon3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Polygon3DEditorPlugin::_notificationv(Polygon3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113040 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00113040 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* Polygon3DEditor::is_class_ptr(void*) const */

ulong Polygon3DEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f0,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f0,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f0,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f0,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f0,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f0,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* Polygon3DEditor::_notification(int) [clone .part.0] [clone .cold] */

void Polygon3DEditor::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Polygon3DEditor::Polygon3DEditor() [clone .cold] */

void __thiscall Polygon3DEditor::Polygon3DEditor(Polygon3DEditor *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Polygon3DEditor::_bind_methods() [clone .cold] */

void Polygon3DEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Polygon3DEditor::_polygon_draw() [clone .cold] */

void Polygon3DEditor::_polygon_draw(void)

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



/* Polygon3DEditor::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) [clone .cold] */

void Polygon3DEditor::forward_3d_gui_input(Camera3D *param_1,Ref *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Material::get_save_class() const */

Material * __thiscall Material::get_save_class(Material *this)

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



/* Material::get_base_extension() const */

Material * __thiscall Material::get_base_extension(Material *this)

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



/* Polygon3DEditorPlugin::get_plugin_name() const */

Polygon3DEditorPlugin * __thiscall
Polygon3DEditorPlugin::get_plugin_name(Polygon3DEditorPlugin *this)

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



/* Polygon3DEditor::_get_class_namev() const */

undefined8 * Polygon3DEditor::_get_class_namev(void)

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
                ((StringName *)&_get_class_namev()::_class_name_static,"Polygon3DEditor");
      goto LAB_00106fce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Polygon3DEditor");
LAB_00106fce:
  return &_get_class_namev()::_class_name_static;
}



/* Polygon3DEditorPlugin::_get_class_namev() const */

undefined8 * Polygon3DEditorPlugin::_get_class_namev(void)

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
                ((StringName *)&_get_class_namev()::_class_name_static,"Polygon3DEditorPlugin");
      goto LAB_001070be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Polygon3DEditorPlugin");
LAB_001070be:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_get_class_namev() const */

undefined8 * StandardMaterial3D::_get_class_namev(void)

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
LAB_00107143:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107143;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_001071ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_001071ae:
  return &_get_class_namev()::_class_name_static;
}



/* Polygon3DEditor::get_class() const */

void Polygon3DEditor::get_class(void)

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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
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



/* Polygon3DEditorPlugin::get_class() const */

void Polygon3DEditorPlugin::get_class(void)

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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
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



/* StandardMaterial3D::get_class() const */

void StandardMaterial3D::get_class(void)

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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
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



/* WARNING: Removing unreachable block (ram,0x001075a0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113048 != Container::_notification) {
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
  if ((code *)PTR__notification_00113048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* void EditorUndoRedoManager::add_do_method<Vector<Vector2> >(Object*, StringName const&,
   Vector<Vector2>) */

void __thiscall
EditorUndoRedoManager::add_do_method<Vector<Vector2>>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,Vector *param_4)

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



/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_do_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_do_methodp((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_undo_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<Vector<Vector2> >(Object*, StringName const&,
   Vector<Vector2>) */

void __thiscall
EditorUndoRedoManager::add_undo_method<Vector<Vector2>>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,Vector *param_4)

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



/* Callable create_custom_callable_function_pointer<Polygon3DEditor>(Polygon3DEditor*, char const*,
   void (Polygon3DEditor::*)()) */

Polygon3DEditor *
create_custom_callable_function_pointer<Polygon3DEditor>
          (Polygon3DEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_0010eec8;
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



/* Callable create_custom_callable_function_pointer<Polygon3DEditor, int>(Polygon3DEditor*, char
   const*, void (Polygon3DEditor::*)(int)) */

Polygon3DEditor *
create_custom_callable_function_pointer<Polygon3DEditor,int>
          (Polygon3DEditor *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_0010ef58;
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



/* Callable Callable::bind<Polygon3DEditor::Mode>(Polygon3DEditor::Mode) const */

Variant ** Callable::bind<Polygon3DEditor::Mode>(Variant **param_1,int param_2,int param_3)

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



/* void Ref<StandardMaterial3D>::instantiate<>() */

void __thiscall Ref<StandardMaterial3D>::instantiate<>(Ref<StandardMaterial3D> *this)

{
  char cVar1;
  BaseMaterial3D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010e610;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (BaseMaterial3D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (BaseMaterial3D *)pOVar3) goto LAB_00107b75;
    *(BaseMaterial3D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00107b75;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (BaseMaterial3D *)0x0) {
    return;
  }
LAB_00107b75:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BoxContainer::BoxContainer;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f8a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00107f8a:
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
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
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
        if (pvVar5 == (void *)0x0) goto LAB_00108124;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00108124:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<Polygon3DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void>::call
          (CallableCustomMethodPointer<Polygon3DEditor,void> *this,Variant **param_1,int param_2,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010836f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010836f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00108431;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010836f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC66,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108431:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,int>::call
          (CallableCustomMethodPointer<Polygon3DEditor,void,int> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001085f8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001085f8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC67;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001085a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_001086ba;
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
LAB_001085f8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC66,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001086ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Polygon3DEditor, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,Node*>::call
          (CallableCustomMethodPointer<Polygon3DEditor,void,Node*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001088f5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_001088f5;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00108800:
          uVar4 = _LC68;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0), lVar8 == 0)) &&
             (pOVar6 != (Object *)0x0)) goto LAB_00108800;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_001089b7;
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
LAB_001088f5:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC66,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001089b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

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
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00113058 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_58 = "RefCounted";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Resource";
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
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Resource";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Material";
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
        Material::_bind_methods();
        Material::initialize_class()::initialized = '\x01';
      }
      local_58 = "Material";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BaseMaterial3D";
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
      if ((code *)PTR__bind_methods_00113050 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseMaterial3D";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StandardMaterial3D";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Polygon3DEditorPlugin::_initialize_classv() */

void Polygon3DEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00113058 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00113060 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00113068 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Polygon3DEditorPlugin";
    local_70 = 0;
    local_50 = 0x15;
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
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010930f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010930f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001093c3;
  }
  cVar6 = String::operator==(param_1,"Node");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001093c3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001093c3:
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
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010954f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010954f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00109603;
  }
  cVar6 = String::operator==(param_1,"Control");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00109603;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_00109715;
    }
  }
LAB_00109603:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109715:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001097af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001097af:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00109863;
  }
  cVar6 = String::operator==(param_1,"BoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00109863;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_00109975;
    }
  }
LAB_00109863:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109975:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditor::is_class(String const&) const */

undefined8 __thiscall Polygon3DEditor::is_class(Polygon3DEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001099ff;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001099ff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00109ab3;
  }
  cVar6 = String::operator==(param_1,"Polygon3DEditor");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00109ab3;
    }
    cVar6 = String::operator==(param_1,"HBoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar8;
      }
      goto LAB_00109bbe;
    }
  }
LAB_00109ab3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109bbe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall Polygon3DEditorPlugin::is_class(Polygon3DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00109c3f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00109c3f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00109cf3;
  }
  cVar6 = String::operator==(param_1,"Polygon3DEditorPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00109cf3;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_00109dfe;
    }
  }
LAB_00109cf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109dfe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00109e7f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00109e7f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00109f33;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00109f33;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00109f33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010a0af;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a0af:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010a163;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a163:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BaseMaterial3D::is_class(String const&) const */

undefined8 __thiscall BaseMaterial3D::is_class(BaseMaterial3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a22f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a22f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010a2e3;
  }
  cVar6 = String::operator==(param_1,"BaseMaterial3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010a2e3;
    }
    cVar6 = String::operator==(param_1,"Material");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_0010a3ee;
    }
  }
LAB_0010a2e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a3ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::is_class(String const&) const */

undefined8 __thiscall StandardMaterial3D::is_class(StandardMaterial3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010a46f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a46f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010a523;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a523:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_0010a6dc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a6dc:
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
  local_78 = &_LC73;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC73;
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
      goto LAB_0010a92c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a92c:
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
      goto LAB_0010ab91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ab91:
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
  if ((code *)PTR__get_property_list_00113070 != Object::_get_property_list) {
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
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
      goto LAB_0010ae61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ae61:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
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
      goto LAB_0010b111;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b111:
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
  StringName::StringName((StringName *)&local_78,"Material",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

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
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseMaterial3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseMaterial3D";
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
      goto LAB_0010b3c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b3c1:
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
  StringName::StringName((StringName *)&local_78,"BaseMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StandardMaterial3D::_get_property_listv(StandardMaterial3D *this,List *param_1,bool param_2)

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
    BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StandardMaterial3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StandardMaterial3D";
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
      goto LAB_0010b671;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b671:
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
  StringName::StringName((StringName *)&local_78,"StandardMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
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
      goto LAB_0010b921;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b921:
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



/* Polygon3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Polygon3DEditorPlugin::_get_property_listv(Polygon3DEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Polygon3DEditorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Polygon3DEditorPlugin";
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
      goto LAB_0010bbd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bbd1:
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
  StringName::StringName((StringName *)&local_78,"Polygon3DEditorPlugin",false);
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
      goto LAB_0010be81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010be81:
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
  if ((code *)PTR__get_property_list_00113078 != CanvasItem::_get_property_list) {
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
      goto LAB_0010c151;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c151:
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
      goto LAB_0010c401;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c401:
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
      goto LAB_0010c6b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c6b1:
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



/* Polygon3DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Polygon3DEditor::_get_property_listv(Polygon3DEditor *this,List *param_1,bool param_2)

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
  local_78 = "Polygon3DEditor";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Polygon3DEditor";
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
      goto LAB_0010c961;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c961:
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
  StringName::StringName((StringName *)&local_78,"Polygon3DEditor",false);
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



/* MethodBind* create_method_bind<Polygon3DEditor>(void (Polygon3DEditor::*)()) */

MethodBind * create_method_bind<Polygon3DEditor>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010efe8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Polygon3DEditor";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditor::_initialize_classv() */

void Polygon3DEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00113058 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00113080 !=
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
        if ((code *)PTR__bind_methods_00113088 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "HBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Polygon3DEditor";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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



/* Polygon3DEditor::_notificationv(int, bool) */

void __thiscall Polygon3DEditor::_notificationv(Polygon3DEditor *this,int param_1,bool param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0xd) {
      _notification(iVar1);
      goto LAB_0010d405;
    }
    if (((param_1 != 0x11) || (*(long *)(this + 0xa40) == 0)) ||
       (fVar2 = (float)_get_depth(this), fVar2 == *(float *)(this + 0xaac))) goto LAB_0010d405;
  }
  else {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
    if (param_1 == 0xd) {
      _notification(iVar1);
      return;
    }
    if (param_1 != 0x11) {
      return;
    }
    if (*(long *)(this + 0xa40) == 0) {
      return;
    }
    fVar2 = (float)_get_depth(this);
    if (fVar2 == *(float *)(this + 0xaac)) {
      return;
    }
  }
  _polygon_draw(this);
  uVar3 = _get_depth(this);
  *(undefined4 *)(this + 0xaac) = uVar3;
  if (!param_2) {
    return;
  }
LAB_0010d405:
  if ((code *)PTR__notification_00113048 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  Container::_notification(iVar1);
  Control::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Node::_notification(iVar1);
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
LAB_0010d770:
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
  if (lVar6 == 0) goto LAB_0010d770;
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
LAB_0010d6fc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010d6a1;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010d6fc;
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
LAB_0010d6a1:
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
      goto LAB_0010d881;
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
    goto LAB_0010d881;
  }
  lVar2 = 0;
LAB_0010d881:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar2,"p_index","size()","",false
             ,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010da78) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  Array::~Array(local_c8);
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ddb0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010ddb0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e1bf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0010e066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e1bf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e37f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0010e226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e37f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Polygon3DEditor::_notification(int) */

void Polygon3DEditor::_GLOBAL__sub_I__notification(void)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Polygon3DEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Polygon3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Polygon3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Polygon3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Polygon3DEditor,void,int> *this)

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



