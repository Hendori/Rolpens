
/* AnimationNodeBlendTreeEditor::get_minimum_size() const */

undefined8 AnimationNodeBlendTreeEditor::get_minimum_size(void)

{
  return 0x4348000041200000;
}



/* AnimationNodeAnimationEditorDialog::~AnimationNodeAnimationEditorDialog() */

void __thiscall
AnimationNodeAnimationEditorDialog::~AnimationNodeAnimationEditorDialog
          (AnimationNodeAnimationEditorDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127aa8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* AnimationNodeAnimationEditorDialog::~AnimationNodeAnimationEditorDialog() */

void __thiscall
AnimationNodeAnimationEditorDialog::~AnimationNodeAnimationEditorDialog
          (AnimationNodeAnimationEditorDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127aa8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdc8);
  return;
}



/* AnimationNodeBlendTreeEditor::_scroll_changed(Vector2 const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_scroll_changed(AnimationNodeBlendTreeEditor *this,Vector2 *param_1)

{
  long lVar1;
  Vector2 *pVVar2;
  undefined1 auVar3 [16];
  long in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) &&
     (this[0xaf0] == (AnimationNodeBlendTreeEditor)0x0)) {
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
    pVVar2 = *(Vector2 **)(this + 0xa10);
    uVar4 = EditorScale::get_scale();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulong *)param_1;
    auVar3._4_4_ = uVar4;
    auVar3._0_4_ = uVar4;
    auVar3._8_4_ = (int)_LC0;
    auVar3._12_4_ = (int)((ulong)_LC0 >> 0x20);
    divps(auVar5,auVar3);
    AnimationNodeBlendTree::set_graph_offset(pVVar2);
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorProperty*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<EditorProperty*>::_copy_on_write(CowData<EditorProperty*> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Callable Callable::bind<Ref<AnimationNode> >(Ref<AnimationNode>) const [clone .isra.0] */

Variant ** Callable::bind<Ref<AnimationNode>>(Variant **param_1,int param_2,Object *param_3)

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



/* AnimationNodeBlendTreeEditor::can_edit(Ref<AnimationNode> const&) */

undefined4 __thiscall
AnimationNodeBlendTreeEditor::can_edit(AnimationNodeBlendTreeEditor *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&AnimationNodeBlendTree::typeinfo,
                               0), pOVar3 == (Object *)0x0)) ||
     (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* AnimationNodeBlendTreeEditor::_popup_hide() */

void __thiscall AnimationNodeBlendTreeEditor::_popup_hide(AnimationNodeBlendTreeEditor *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  String::parse_latin1((StrRange *)(this + 0xac0));
  *(undefined4 *)(this + 0xac8) = 0xffffffff;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationNodeAnimation::can_handle(Object*) */

undefined4 __thiscall
EditorInspectorPluginAnimationNodeAnimation::can_handle
          (EditorInspectorPluginAnimationNodeAnimation *this,Object *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((param_1 == (Object *)0x0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(param_1,&Object::typeinfo,&AnimationNodeAnimation::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (cVar1 = RefCounted::init_ref(), cVar1 == '\0')) {
    return 0;
  }
  uVar2 = AnimationNodeAnimation::is_using_custom_timeline();
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* AnimationNodeAnimationEditor::~AnimationNodeAnimationEditor() */

void __thiscall
AnimationNodeAnimationEditor::~AnimationNodeAnimationEditor(AnimationNodeAnimationEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001280a8;
  if (*(long *)(this + 0xa10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa10);
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
      if (StringName::configured == '\0') goto LAB_00100504;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100504:
  Control::~Control((Control *)this);
  return;
}



/* AnimationNodeAnimationEditor::~AnimationNodeAnimationEditor() */

void __thiscall
AnimationNodeAnimationEditor::~AnimationNodeAnimationEditor(AnimationNodeAnimationEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001280a8;
  if (*(long *)(this + 0xa10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa10);
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
      if (StringName::configured == '\0') goto LAB_001005c4;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001005c4:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* AnimationNodeAnimationEditor::_notification(int) [clone .part.0] */

void AnimationNodeAnimationEditor::_notification(int param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  char cVar3;
  int iVar4;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pSVar1 = *(StringName **)(CONCAT44(in_register_0000003c,param_1) + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::set_theme_type_variation(pSVar1);
  pRVar2 = *(Ref **)(CONCAT44(in_register_0000003c,param_1) + 0xa18);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar2);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<AnimationNode>::TEMPNAMEPLACEHOLDERVALUE(Ref<AnimationNode> const&) [clone .isra.0] */

void __thiscall Ref<AnimationNode>::operator=(Ref<AnimationNode> *this,Ref *param_1)

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



/* AnimationNodeBlendTreeEditor::_filter_fill_selection_recursive(EditorUndoRedoManager*, TreeItem*,
   bool) */

void __thiscall
AnimationNodeBlendTreeEditor::_filter_fill_selection_recursive
          (AnimationNodeBlendTreeEditor *this,EditorUndoRedoManager *param_1,TreeItem *param_2,
          bool param_3)

{
  Variant *pVVar1;
  StringName *pSVar2;
  bool bVar3;
  TreeItem *pTVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  Variant local_110 [8];
  long local_108;
  NodePath local_100 [8];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  pTVar4 = (TreeItem *)TreeItem::get_first_child();
  if (pTVar4 != (TreeItem *)0x0) {
    do {
      TreeItem::get_metadata((int)&local_f8);
      Variant::operator_cast_to_NodePath(local_110);
      if (Variant::needs_deinit[(int)local_f8] != '\0') {
        Variant::_clear_internal();
      }
      bVar3 = (bool)AnimationNode::is_path_filtered(*(NodePath **)(this + 0xaf8));
      NodePath::NodePath(local_100,local_110);
      StringName::StringName((StringName *)&local_108,"set_filter_path",false);
      pSVar2 = *(StringName **)(this + 0xaf8);
      Variant::Variant((Variant *)&local_d8,local_100);
      Variant::Variant(local_c0,(bool)(param_3 | bVar3));
      local_a8 = 0;
      local_a0 = (undefined1  [16])0x0;
      local_f8 = (Variant *)&local_d8;
      pVStack_f0 = local_c0;
      EditorUndoRedoManager::add_do_methodp
                ((Object *)param_1,pSVar2,(Variant **)&local_108,(int)&local_f8);
      pVVar5 = local_90;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != (Variant *)&local_d8);
      if ((StringName::configured != '\0') && (local_108 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath(local_100);
      NodePath::NodePath(local_100,local_110);
      StringName::StringName((StringName *)&local_108,"set_filter_path",false);
      pSVar2 = *(StringName **)(this + 0xaf8);
      Variant::Variant(local_88,local_100);
      Variant::Variant(local_70,bVar3);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      EditorUndoRedoManager::add_undo_methodp
                ((Object *)param_1,pSVar2,(Variant **)&local_108,(int)(Variant *)&local_d8);
      pVVar5 = (Variant *)local_40;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != local_88);
      if ((StringName::configured != '\0') && (local_108 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath(local_100);
      _filter_fill_selection_recursive(this,param_1,pTVar4,(bool)(param_3 | bVar3));
      pTVar4 = (TreeItem *)TreeItem::get_next();
      NodePath::~NodePath((NodePath *)local_110);
    } while (pTVar4 != (TreeItem *)0x0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_filter_invert_selection_recursive(EditorUndoRedoManager*,
   TreeItem*) */

void AnimationNodeBlendTreeEditor::_filter_invert_selection_recursive
               (EditorUndoRedoManager *param_1,TreeItem *param_2)

{
  Variant *pVVar1;
  StringName *pSVar2;
  bool bVar3;
  long lVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  Variant local_110 [8];
  long local_108;
  NodePath local_100 [8];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = TreeItem::get_first_child();
  if (lVar4 != 0) {
    do {
      TreeItem::get_metadata((int)&local_f8);
      Variant::operator_cast_to_NodePath(local_110);
      if (Variant::needs_deinit[(int)local_f8] != '\0') {
        Variant::_clear_internal();
      }
      bVar3 = (bool)AnimationNode::is_path_filtered(*(NodePath **)(param_1 + 0xaf8));
      NodePath::NodePath(local_100,local_110);
      StringName::StringName((StringName *)&local_108,"set_filter_path",false);
      pSVar2 = *(StringName **)(param_1 + 0xaf8);
      Variant::Variant((Variant *)&local_d8,local_100);
      Variant::Variant(local_c0,(bool)(bVar3 ^ 1));
      local_a8 = 0;
      local_a0 = (undefined1  [16])0x0;
      local_f8 = (Variant *)&local_d8;
      pVStack_f0 = local_c0;
      EditorUndoRedoManager::add_do_methodp
                ((Object *)param_2,pSVar2,(Variant **)&local_108,(int)&local_f8);
      pVVar5 = local_90;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != (Variant *)&local_d8);
      if ((StringName::configured != '\0') && (local_108 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath(local_100);
      NodePath::NodePath(local_100,local_110);
      StringName::StringName((StringName *)&local_108,"set_filter_path",false);
      pSVar2 = *(StringName **)(param_1 + 0xaf8);
      Variant::Variant(local_88,local_100);
      Variant::Variant(local_70,bVar3);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      EditorUndoRedoManager::add_undo_methodp
                ((Object *)param_2,pSVar2,(Variant **)&local_108,(int)(Variant *)&local_d8);
      pVVar5 = (Variant *)local_40;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != local_88);
      if ((StringName::configured != '\0') && (local_108 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath(local_100);
      _filter_invert_selection_recursive(param_1,param_2);
      lVar4 = TreeItem::get_next();
      NodePath::~NodePath((NodePath *)local_110);
    } while (lVar4 != 0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_filter_clear_selection_recursive(EditorUndoRedoManager*,
   TreeItem*) */

void AnimationNodeBlendTreeEditor::_filter_clear_selection_recursive
               (EditorUndoRedoManager *param_1,TreeItem *param_2)

{
  Variant *pVVar1;
  StringName *pSVar2;
  bool bVar3;
  long lVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  Variant local_110 [8];
  long local_108;
  NodePath local_100 [8];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = TreeItem::get_first_child();
  if (lVar4 != 0) {
    do {
      TreeItem::get_metadata((int)&local_f8);
      Variant::operator_cast_to_NodePath(local_110);
      if (Variant::needs_deinit[(int)local_f8] != '\0') {
        Variant::_clear_internal();
      }
      bVar3 = (bool)AnimationNode::is_path_filtered(*(NodePath **)(param_1 + 0xaf8));
      NodePath::NodePath(local_100,local_110);
      StringName::StringName((StringName *)&local_108,"set_filter_path",false);
      pSVar2 = *(StringName **)(param_1 + 0xaf8);
      Variant::Variant((Variant *)&local_d8,local_100);
      Variant::Variant(local_c0,false);
      local_a8 = 0;
      local_a0 = (undefined1  [16])0x0;
      local_f8 = (Variant *)&local_d8;
      pVStack_f0 = local_c0;
      EditorUndoRedoManager::add_do_methodp
                ((Object *)param_2,pSVar2,(Variant **)&local_108,(int)&local_f8);
      pVVar5 = local_90;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != (Variant *)&local_d8);
      if ((StringName::configured != '\0') && (local_108 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath(local_100);
      NodePath::NodePath(local_100,local_110);
      StringName::StringName((StringName *)&local_108,"set_filter_path",false);
      pSVar2 = *(StringName **)(param_1 + 0xaf8);
      Variant::Variant(local_88,local_100);
      Variant::Variant(local_70,bVar3);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      EditorUndoRedoManager::add_undo_methodp
                ((Object *)param_2,pSVar2,(Variant **)&local_108,(int)(Variant *)&local_d8);
      pVVar5 = (Variant *)local_40;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != local_88);
      if ((StringName::configured != '\0') && (local_108 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath(local_100);
      _filter_clear_selection_recursive(param_1,param_2);
      lVar4 = TreeItem::get_next();
      NodePath::~NodePath((NodePath *)local_110);
    } while (lVar4 != 0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeAnimationEditor::_notification(int) */

void __thiscall
AnimationNodeAnimationEditor::_notification(AnimationNodeAnimationEditor *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* AnimationNodeBlendTreeEditor::_open_in_editor(String const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_open_in_editor(AnimationNodeBlendTreeEditor *this,String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_38,param_1,false);
  AnimationNodeBlendTree::get_node((StringName *)&local_40);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  if (local_40 == (Object *)0x0) {
    _err_print_error("_open_in_editor","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x252
                     ,"Condition \"an.is_null()\" is true.",0,0);
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_40);
  }
  else {
    AnimationTreeEditor::enter_editor(AnimationTreeEditor::singleton);
    if (local_40 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_40);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_40 + 0x140))(local_40);
          Memory::free_static(local_40,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_property_changed(StringName const&, Variant const&, String const&,
   bool) */

void AnimationNodeBlendTreeEditor::_property_changed
               (StringName *param_1,Variant *param_2,String *param_3,bool param_4)

{
  StringName *pSVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = *(StringName **)(AnimationTreeEditor::singleton + 0xa20);
  if (pSVar1 != (StringName *)0x0) {
    param_1[0xaf0] = (StringName)0x1;
    pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
    StringName::StringName((StringName *)&local_70,(StringName *)param_2);
    local_68 = "";
    local_80 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = "Parameter Changed: %s";
    local_60 = 0x15;
    String::parse_latin1((StrRange *)&local_88);
    TTR(local_78,(String *)&local_88);
    vformat<StringName>((CowData<char32_t> *)&local_68,local_78,(StringName *)&local_70);
    EditorUndoRedoManager::create_action(pOVar2,(CowData<char32_t> *)&local_68,1,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::add_do_property(pOVar2,pSVar1,param_2);
    Object::get((StringName *)local_58,(bool *)pSVar1);
    EditorUndoRedoManager::add_undo_property(pOVar2,pSVar1,param_2);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_68,"update_graph",false);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar2,param_1,(Variant **)&local_68,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_68,"update_graph",false);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,param_1,(Variant **)&local_68,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar2,0));
    param_1[0xaf0] = (StringName)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_node_dragged(Vector2 const&, Vector2 const&, StringName const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_node_dragged
          (AnimationNodeBlendTreeEditor *this,Vector2 *param_1,Vector2 *param_2,StringName *param_3)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Object *pOVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_128;
  long local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_100;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  local_118 = "";
  local_120 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = "Node Moved";
  local_128 = 0;
  local_110 = 10;
  String::parse_latin1((StrRange *)&local_128);
  TTR((String *)&local_118,(String *)&local_128);
  EditorUndoRedoManager::create_action(pOVar3,(String *)&local_118,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  auVar7._0_4_ = EditorScale::get_scale();
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)param_2;
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_8_ = _LC0;
  auVar7 = divps(auVar6,auVar7);
  StringName::StringName((StringName *)&local_118,param_3);
  StringName::StringName((StringName *)&local_120,"set_node_position",false);
  pSVar2 = *(StringName **)(this + 0xa10);
  local_100 = auVar7._0_8_;
  Variant::Variant((Variant *)&local_d8,(StringName *)&local_118);
  Variant::Variant(local_c0,(Vector2 *)&local_100);
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_f8 = (Variant *)&local_d8;
  pVStack_f0 = local_c0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar3,pSVar2,(Variant **)&local_120,(int)(Vector2 *)&local_f8);
  pVVar4 = local_90;
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_120 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001018d8;
    }
    if (local_118 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001018d8:
  auVar5._0_4_ = EditorScale::get_scale();
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_8_ = _LC0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(ulong *)param_1;
  auVar7 = divps(auVar8,auVar5);
  StringName::StringName((StringName *)&local_118,param_3);
  StringName::StringName((StringName *)&local_120,"set_node_position",false);
  pSVar2 = *(StringName **)(this + 0xa10);
  local_f8 = (Variant *)auVar7._0_8_;
  Variant::Variant((Variant *)local_88,(StringName *)&local_118);
  Variant::Variant(local_70,(Vector2 *)&local_f8);
  local_50 = (undefined1  [16])0x0;
  pVVar4 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = (Variant *)local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,pSVar2,(Variant **)&local_120,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)local_88);
  if (StringName::configured != '\0') {
    if (local_120 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001019dc;
    }
    if (local_118 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001019dc:
  StringName::StringName((StringName *)&local_118,"update_graph",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_118,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_118,"update_graph",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_118,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeAnimationEditorDialog::AnimationNodeAnimationEditorDialog() */

void __thiscall
AnimationNodeAnimationEditorDialog::AnimationNodeAnimationEditorDialog
          (AnimationNodeAnimationEditorDialog *this)

{
  GridContainer *this_00;
  Label *pLVar1;
  OptionButton *pOVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_001285b0;
  local_60 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Select Markers";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_00);
  postinitialize_handler((Object *)this_00);
  GridContainer::set_columns((int)this_00);
  Control::set_offsets_preset(this_00,0xf,0,0);
  Node::add_child(this,this_00,0,0);
  pLVar1 = (Label *)operator_new(0xad8,"");
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Start Marker";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar1,(String *)&local_58);
  postinitialize_handler((Object *)pLVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pLVar1,0,0);
  Control::set_h_size_flags(pLVar1,3);
  Control::set_stretch_ratio(_LC59);
  pOVar2 = (OptionButton *)operator_new(0xd00,"");
  local_58 = (char *)0x0;
  OptionButton::OptionButton(pOVar2,(String *)&local_58);
  postinitialize_handler((Object *)pOVar2);
  *(OptionButton **)(this + 0xdb8) = pOVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xdb8),2);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdb8),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb8),3);
  Control::set_stretch_ratio(_LC84._4_4_);
  pLVar1 = (Label *)operator_new(0xad8,"");
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "End Marker";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar1,(String *)&local_58);
  postinitialize_handler((Object *)pLVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pLVar1,0,0);
  Control::set_h_size_flags(pLVar1,3);
  Control::set_stretch_ratio(_LC59);
  pOVar2 = (OptionButton *)operator_new(0xd00,"");
  local_58 = (char *)0x0;
  OptionButton::OptionButton(pOVar2,(String *)&local_58);
  postinitialize_handler((Object *)pOVar2);
  *(OptionButton **)(this + 0xdc0) = pOVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xdc0),2);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdc0),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc0),3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_stretch_ratio(_LC84._4_4_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeAnimationEditor::_validate_markers(int) */

void AnimationNodeAnimationEditor::_validate_markers(int param_1)

{
  bool bVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  float fVar9;
  double dVar10;
  double local_80;
  double local_78;
  long local_68;
  StringName *local_60;
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = OptionButton::get_selected_id();
  iVar5 = OptionButton::get_selected_id();
  AnimationNodeAnimation::get_animation();
  AnimationMixer::get_animation((StringName *)&local_60);
  pSVar2 = local_60;
  if (local_60 == (StringName *)0x0) {
    _err_print_error("_validate_markers","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                     0x51f,"Condition \"animation.is_null()\" is true.",0,0);
  }
  else {
    local_80 = 0.0;
    if (1 < iVar4) {
      OptionButton::get_item_text((int)local_50);
      StringName::StringName((StringName *)&local_48,(String *)local_50,false);
      local_80 = (double)Animation::get_marker_time(pSVar2);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(local_50);
    }
    pSVar2 = local_60;
    if (iVar5 < 2) {
      fVar9 = (float)Animation::get_length();
      bVar1 = false;
      local_78 = (double)fVar9;
    }
    else {
      OptionButton::get_item_text((int)local_50);
      StringName::StringName((StringName *)&local_48,(String *)local_50,false);
      local_78 = (double)Animation::get_marker_time(pSVar2);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(local_50);
      bVar1 = true;
    }
    for (iVar7 = 2; iVar6 = OptionButton::get_item_count(), iVar7 < iVar6; iVar7 = iVar7 + 1) {
      OptionButton::get_item_text((int)local_58);
      OptionButton::get_item_text((int)local_50);
      pSVar2 = local_60;
      bVar8 = SUB41(iVar7,0);
      iVar6 = (int)*(undefined8 *)
                    (*(long *)(CONCAT44(in_register_0000003c,param_1) + 0xa20) + 0xdb8);
      if (iVar5 < 2) {
LAB_0010212b:
        OptionButton::set_item_disabled(iVar6,bVar8);
        if (bVar1) {
LAB_00102142:
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
        }
      }
      else {
        if (iVar7 != iVar5) {
          StringName::StringName((StringName *)&local_48,(String *)local_58,false);
          dVar10 = (double)Animation::get_marker_time(pSVar2);
          if (dVar10 <= local_78) goto LAB_0010212b;
          OptionButton::set_item_disabled(iVar6,bVar8);
          goto LAB_00102142;
        }
        OptionButton::set_item_disabled(iVar6,bVar8);
      }
      pSVar2 = local_60;
      iVar6 = (int)*(undefined8 *)
                    (*(long *)(CONCAT44(in_register_0000003c,param_1) + 0xa20) + 0xdc0);
      if (iVar4 < 2) {
        OptionButton::set_item_disabled(iVar6,bVar8);
      }
      else if (iVar7 == iVar4) {
        OptionButton::set_item_disabled(iVar6,bVar8);
      }
      else {
        StringName::StringName((StringName *)&local_48,(String *)local_50,false);
        dVar10 = (double)Animation::get_marker_time(pSVar2);
        if (dVar10 < local_80) {
          OptionButton::set_item_disabled(iVar6,bVar8);
        }
        else {
          OptionButton::set_item_disabled(iVar6,bVar8);
        }
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref(local_58);
    }
  }
  if (((local_60 != (StringName *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_60), cVar3 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationNodeAnimationEditor::_confirm_set_custom_timeline_from_marker_dialog() */

void __thiscall
AnimationNodeAnimationEditor::_confirm_set_custom_timeline_from_marker_dialog
          (AnimationNodeAnimationEditor *this)

{
  StringName *pSVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  int iVar7;
  long in_FS_OFFSET;
  float fVar8;
  double dVar9;
  double dVar10;
  double local_d0;
  StringName *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = OptionButton::get_selected_id();
  iVar5 = OptionButton::get_selected_id();
  AnimationNodeAnimation::get_animation();
  AnimationMixer::get_animation((StringName *)&local_b0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar1 = local_b0;
  if (local_b0 == (StringName *)0x0) {
    _err_print_error("_confirm_set_custom_timeline_from_marker_dialog",
                     "editor/plugins/animation_blend_tree_editor_plugin.cpp",0x532,
                     "Condition \"animation.is_null()\" is true.",0,0);
    Ref<Animation>::unref((Ref<Animation> *)&local_b0);
  }
  else {
    local_d0 = 0.0;
    iVar7 = (int)(CowData<char32_t> *)&local_a0;
    if (1 < iVar4) {
      OptionButton::get_item_text(iVar7);
      StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
      local_d0 = (double)Animation::get_marker_time(pSVar1);
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    pSVar1 = local_b0;
    if (iVar5 < 2) {
      fVar8 = (float)Animation::get_length();
      dVar9 = (double)fVar8;
    }
    else {
      OptionButton::get_item_text(iVar7);
      StringName::StringName((StringName *)&local_98,(String *)&local_a0,false);
      dVar9 = (double)Animation::get_marker_time(pSVar1);
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a0 = 0;
    local_90 = 0;
    local_98 = "";
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = "Set Custom Timeline from Marker";
    local_a8 = 0;
    local_90 = 0x1f;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    EditorUndoRedoManager::create_action(pOVar6,(StringName *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    StringName::StringName((StringName *)&local_98,"set_start_offset",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,local_d0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar4 = (int)local_88;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar1,(Variant **)&local_98,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    dVar10 = (double)AnimationNodeAnimation::get_start_offset();
    StringName::StringName((StringName *)&local_98,"set_start_offset",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,dVar10);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar1,(Variant **)&local_98,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"set_stretch_time_scale",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,false);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar1,(Variant **)&local_98,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    bVar2 = (bool)AnimationNodeAnimation::is_stretching_time_scale();
    StringName::StringName((StringName *)&local_98,"set_stretch_time_scale",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar1,(Variant **)&local_98,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"set_timeline_length",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,dVar9 - local_d0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar1,(Variant **)&local_98,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    dVar9 = (double)AnimationNodeAnimation::get_timeline_length();
    StringName::StringName((StringName *)&local_98,"set_timeline_length",false);
    pSVar1 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,dVar9);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar1,(Variant **)&local_98,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"notify_property_list_changed",false);
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp
              (pOVar6,*(StringName **)(this + 0xa10),(Variant **)&local_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"notify_property_list_changed",false);
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar6,*(StringName **)(this + 0xa10),(Variant **)&local_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
    if (local_b0 != (StringName *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)local_b0);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
          Memory::free_static(local_b0,false);
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



/* AnimationNodeBlendTreeEditor::_filter_toggled() */

void __thiscall AnimationNodeBlendTreeEditor::_filter_toggled(AnimationNodeBlendTreeEditor *this)

{
  StringName *pSVar1;
  Object *pOVar2;
  bool bVar3;
  char cVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_90 = 0;
  local_98 = (Object *)&_LC8;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = (Object *)0x11293a;
  local_a8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar5,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  bVar3 = (bool)BaseButton::is_pressed();
  StringName::StringName((StringName *)&local_98,"set_filter_enabled",false);
  pSVar1 = *(StringName **)(this + 0xaf8);
  Variant::Variant((Variant *)local_78,bVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  iVar6 = (int)local_88;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar1,(Variant **)&local_98,iVar6);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
    StringName::unref();
  }
  bVar3 = (bool)AnimationNode::is_filter_enabled();
  StringName::StringName((StringName *)&local_98,"set_filter_enabled",false);
  pSVar1 = *(StringName **)(this + 0xaf8);
  Variant::Variant((Variant *)local_78,bVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar1,(Variant **)&local_98,iVar6);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
    StringName::unref();
  }
  local_98 = (Object *)0x0;
  Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
  StringName::StringName((StringName *)&local_a0,"_update_filters",false);
  pOVar2 = local_98;
  Variant::Variant((Variant *)local_78,local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_a0,iVar6);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  local_98 = (Object *)0x0;
  Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
  StringName::StringName((StringName *)&local_a0,"_update_filters",false);
  pOVar2 = local_98;
  Variant::Variant((Variant *)local_78,local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_a0,iVar6);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_filter_edited() */

void __thiscall AnimationNodeBlendTreeEditor::_filter_edited(AnimationNodeBlendTreeEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Object *pOVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  Object *pOVar7;
  int iVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Variant local_120 [8];
  undefined8 local_118;
  long local_110;
  Object *local_108;
  undefined8 local_100;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = Tree::get_edited();
  if (lVar6 == 0) {
    _err_print_error("_filter_edited","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x264,
                     "Parameter \"edited\" is null.",0,0);
  }
  else {
    TreeItem::get_metadata((int)&local_f8);
    Variant::operator_cast_to_NodePath(local_120);
    if (Variant::needs_deinit[(int)local_f8] != '\0') {
      Variant::_clear_internal();
    }
    bVar4 = (bool)TreeItem::is_checked((int)lVar6);
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
    pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
    local_108 = (Object *)&_LC8;
    local_110 = 0;
    local_100 = 0;
    String::parse_latin1((StrRange *)&local_110);
    local_108 = (Object *)0x11299d;
    local_118 = 0;
    local_100 = 0xd;
    String::parse_latin1((StrRange *)&local_118);
    TTR((String *)&local_108,(String *)&local_118);
    EditorUndoRedoManager::create_action(pOVar7,(String *)&local_108,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    NodePath::NodePath((NodePath *)&local_108,local_120);
    StringName::StringName((StringName *)&local_110,"set_filter_path",false);
    pSVar2 = *(StringName **)(this + 0xaf8);
    Variant::Variant((Variant *)&local_d8,(String *)&local_108);
    Variant::Variant(local_c0,bVar4);
    local_a0 = (undefined1  [16])0x0;
    pVVar9 = local_90;
    local_a8 = 0;
    local_f8 = (Variant *)&local_d8;
    pVStack_f0 = local_c0;
    EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar2,(Variant **)&local_110,(int)&local_f8);
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)&local_d8);
    if ((StringName::configured != '\0') && (local_110 != 0)) {
      StringName::unref();
    }
    NodePath::~NodePath((NodePath *)&local_108);
    bVar4 = (bool)AnimationNode::is_path_filtered(*(NodePath **)(this + 0xaf8));
    NodePath::NodePath((NodePath *)&local_108,local_120);
    StringName::StringName((StringName *)&local_110,"set_filter_path",false);
    pSVar2 = *(StringName **)(this + 0xaf8);
    Variant::Variant((Variant *)local_88,(String *)&local_108);
    pVVar9 = (Variant *)local_40;
    Variant::Variant((Variant *)local_70,bVar4);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    iVar8 = (int)(Variant *)&local_d8;
    local_d8 = (Variant *)local_88;
    pVStack_d0 = (Variant *)local_70;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar2,(Variant **)&local_110,iVar8);
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_110 != 0)) {
      StringName::unref();
    }
    NodePath::~NodePath((NodePath *)&local_108);
    local_108 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_108,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_110,"_update_filters",false);
    Variant::Variant((Variant *)local_88,local_108);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_d8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,(Variant **)&local_110,iVar8);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_110 != 0)) {
      StringName::unref();
    }
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_108);
    local_108 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_108,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_110,"_update_filters",false);
    pOVar3 = local_108;
    Variant::Variant((Variant *)local_88,local_108);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_d8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,(Variant **)&local_110,iVar8);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_110 != 0)) {
      StringName::unref();
    }
    if (pOVar3 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar3);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
    NodePath::~NodePath((NodePath *)local_120);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_update_options_menu(bool) */

void __thiscall
AnimationNodeBlendTreeEditor::_update_options_menu(AnimationNodeBlendTreeEditor *this,bool param_1)

{
  Object *pOVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  String *pSVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = (bool)MenuButton::get_popup();
  PopupMenu::clear(bVar3);
  MenuButton::get_popup();
  Window::reset_size();
  lVar6 = *(long *)(this + 0xae0);
  do {
    if ((lVar6 == 0) || (*(long *)(lVar6 + -8) <= (long)uVar8)) {
      lVar6 = EditorSettings::get_singleton();
      pOVar1 = *(Object **)(lVar6 + 0x300);
      if (pOVar1 == (Object *)0x0) {
        local_70 = 0;
      }
      else {
        cVar4 = RefCounted::reference();
        local_70 = 0;
        if (cVar4 != '\0') {
          lVar6 = __dynamic_cast(pOVar1,&Object::typeinfo,&AnimationNode::typeinfo,0);
          if (lVar6 != 0) {
            local_58 = (undefined *)0x0;
            local_70 = lVar6;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              local_70 = 0;
            }
            Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_58);
          }
          cVar4 = RefCounted::unreference();
          lVar6 = local_70;
          if ((cVar4 != '\0') &&
             (cVar4 = predelete_handler(pOVar1), lVar6 = local_70, cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
          if (lVar6 != 0) {
            pSVar7 = (String *)MenuButton::get_popup();
            local_58 = (undefined *)0x0;
            PopupMenu::add_separator(pSVar7,(int)(CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            uVar5 = MenuButton::get_popup();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"");
            local_68 = 0;
            String::parse_latin1((String *)&local_68,"Paste");
            TTR((String *)&local_58,(String *)&local_68);
            PopupMenu::add_item(uVar5,(CowData<char32_t> *)&local_58,0x3e9,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
        }
      }
      pSVar7 = (String *)MenuButton::get_popup();
      local_58 = (undefined *)0x0;
      PopupMenu::add_separator(pSVar7,(int)(CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      uVar5 = MenuButton::get_popup();
      local_58 = &_LC8;
      local_60 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Load...");
      TTR((String *)&local_58,(String *)&local_68);
      PopupMenu::add_item(uVar5,(CowData<char32_t> *)&local_58,1000,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      this[0xa38] = (AnimationNodeBlendTreeEditor)0x0;
      Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_70);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((!param_1) || (*(int *)(lVar6 + 0x18 + uVar8 * 0x20) != 0)) {
      uVar5 = MenuButton::get_popup();
      lVar6 = *(long *)(this + 0xae0);
      if (lVar6 == 0) {
        lVar9 = 0;
LAB_001039a3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar9 = *(long *)(lVar6 + -8);
      if (lVar9 <= (long)uVar8) goto LAB_001039a3;
      PopupMenu::add_item(uVar5,lVar6 + uVar8 * 0x20,uVar8 & 0xffffffff,0);
      lVar6 = *(long *)(this + 0xae0);
    }
    uVar8 = uVar8 + 1;
  } while( true );
}



/* AnimationNodeBlendTreeEditor::_popup(bool, Vector2 const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_popup
          (AnimationNodeBlendTreeEditor *this,bool param_1,Vector2 *param_2)

{
  Vector2i *pVVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _update_options_menu(this,param_1);
  uVar3 = *(undefined8 *)param_2;
  this[0xa38] = (AnimationNodeBlendTreeEditor)0x1;
  *(undefined8 *)(this + 0xa30) = uVar3;
  pVVar1 = (Vector2i *)MenuButton::get_popup();
  uVar3 = CanvasItem::get_local_mouse_position();
  uVar4 = Control::get_screen_position();
  local_40 = CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                      (float)uVar4 + (float)uVar3);
  local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
  Window::set_position(pVVar1);
  MenuButton::get_popup();
  Window::reset_size();
  plVar2 = (long *)MenuButton::get_popup();
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*plVar2 + 0x240))(plVar2,&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_popup_request(Vector2 const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_popup_request(AnimationNodeBlendTreeEditor *this,Vector2 *param_1)

{
  if (this[0xa18] != (AnimationNodeBlendTreeEditor)0x0) {
    return;
  }
  _popup(this,false,param_1);
  return;
}



/* AnimationNodeAnimationEditor::AnimationNodeAnimationEditor(Ref<AnimationNodeAnimation>) */

void __thiscall
AnimationNodeAnimationEditor::AnimationNodeAnimationEditor
          (AnimationNodeAnimationEditor *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  String *pSVar4;
  char cVar5;
  AnimationNodeAnimationEditorDialog *this_00;
  Control *pCVar6;
  Button *this_01;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (AnimationNodeAnimationEditor)0x1;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  lVar1 = *param_2;
  *(undefined ***)this = &PTR__initialize_classv_001280a8;
  *(undefined8 *)(this + 0xa20) = 0;
  if (lVar1 != 0) {
    *(long *)(this + 0xa10) = lVar1;
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      *(undefined8 *)(this + 0xa10) = 0;
    }
  }
  this_00 = (AnimationNodeAnimationEditorDialog *)operator_new(0xdc8,"");
  AnimationNodeAnimationEditorDialog::AnimationNodeAnimationEditorDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(AnimationNodeAnimationEditorDialog **)(this + 0xa20) = this_00;
  Node::add_child(this,this_00,0,0);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0xa20),0));
  plVar2 = *(long **)(*(long *)(this + 0xa20) + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeAnimationEditor,int>
            ((AnimationNodeAnimationEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeAnimationEditor::_validate_markers");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(AnimationNodeAnimationEditor *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(*(long *)(this + 0xa20) + 0xdc0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeAnimationEditor,int>
            ((AnimationNodeAnimationEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeAnimationEditor::_validate_markers");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(AnimationNodeAnimationEditor *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeAnimationEditor>
            ((AnimationNodeAnimationEditor *)&local_58,(char *)this,
             (_func_void *)
             "&AnimationNodeAnimationEditor::_confirm_set_custom_timeline_from_marker_dialog");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,(AnimationNodeAnimationEditor *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pCVar6 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  Node::add_child(this,pCVar6,0,0);
  fVar7 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar7 * _LC84._4_4_,fVar7 * (float)_LC84);
  Control::set_custom_minimum_size((Vector2 *)pCVar6);
  this_01 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xa18) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa18);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Set Custom Timeline from Marker";
  local_68 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa18),4);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeAnimationEditor>
            ((AnimationNodeAnimationEditor *)&local_58,(char *)this,
             (_func_void *)
             "&AnimationNodeAnimationEditor::_open_set_custom_timeline_from_marker_dialog");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(AnimationNodeAnimationEditor *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pCVar6 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  Node::add_child(this,pCVar6,0,0);
  fVar7 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar7 * _LC84._4_4_,fVar7 * (float)_LC84);
  Control::set_custom_minimum_size((Vector2 *)pCVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationNodeAnimation::parse_property(Object*, Variant::Type, String
   const&, PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

undefined8
EditorInspectorPluginAnimationNodeAnimation::parse_property
          (Control *param_1,long param_2,undefined8 param_3,String *param_4)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    pOVar2 = (Object *)__dynamic_cast(param_2,&Object::typeinfo,&AnimationNodeAnimation::typeinfo,0)
    ;
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::init_ref();
      if (cVar1 != '\0') {
        cVar1 = String::operator==(param_4,"timeline_length");
        if (cVar1 != '\0') {
          pOVar3 = (Object *)operator_new(0xa28,"");
          local_28 = pOVar2;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            local_28 = (Object *)0x0;
            AnimationNodeAnimationEditor::AnimationNodeAnimationEditor
                      ((AnimationNodeAnimationEditor *)pOVar3,&local_28);
            postinitialize_handler(pOVar3);
            EditorInspectorPlugin::add_custom_control(param_1);
          }
          else {
            AnimationNodeAnimationEditor::AnimationNodeAnimationEditor
                      ((AnimationNodeAnimationEditor *)pOVar3,&local_28);
            postinitialize_handler(pOVar3);
            EditorInspectorPlugin::add_custom_control(param_1);
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
              cVar1 = predelete_handler(pOVar2);
              if (cVar1 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        goto LAB_00104138;
      }
    }
  }
  _err_print_error("parse_property","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x570,
                   "Condition \"ana.is_null()\" is true. Returning: false",0,0);
LAB_00104138:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_update_editor_settings() */

void __thiscall
AnimationNodeBlendTreeEditor::_update_editor_settings(AnimationNodeBlendTreeEditor *this)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  Object *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GraphEdit::get_panner();
  local_88 = "editors/panning/simple_panning";
  local_90 = 0;
  local_80 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  local_a0 = 0;
  local_88 = "canvas_item_editor/pan_view";
  local_80 = 0x1b;
  String::parse_latin1((StrRange *)&local_a0);
  ED_GET_SHORTCUT((String *)&local_98);
  local_88 = "editors/panning/sub_editors_panning_scheme";
  local_a8 = 0;
  local_80 = 0x2a;
  String::parse_latin1((StrRange *)&local_a8);
  _EDITOR_GET((String *)local_78);
  iVar4 = Variant::operator_cast_to_int((Variant *)local_78);
  ViewPanner::setup(local_b0,iVar4,(String *)&local_98,bVar2);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (local_98 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_98);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_b0 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_b0);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
        Memory::free_static(local_b0,false);
      }
    }
  }
  uVar1 = *(undefined8 *)(this + 0xa20);
  local_88 = "editors/panning/warped_mouse_panning";
  local_90 = 0;
  local_80 = 0x24;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  GraphEdit::set_warped_panning(SUB81(uVar1,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* AnimationNodeBlendTreeEditor::_connection_request(String const&, int, String const&, int) [clone
   .part.0] */

void AnimationNodeBlendTreeEditor::_connection_request
               (String *param_1,int param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  StringName *pSVar2;
  String *pSVar3;
  int iVar4;
  Object *pOVar5;
  Variant *pVVar6;
  int iVar7;
  undefined4 in_register_00000034;
  String *pSVar8;
  long in_FS_OFFSET;
  undefined8 local_100;
  undefined8 local_f8;
  String local_f0 [8];
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  pSVar8 = (String *)CONCAT44(in_register_00000034,param_2);
  pSVar2 = *(StringName **)(param_1 + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_d8,pSVar8,false);
  StringName::StringName((StringName *)&local_e0,param_3,false);
  iVar7 = (int)(StringName *)&local_e0;
  iVar4 = AnimationNodeBlendTree::can_connect_node(pSVar2,iVar7,(StringName *)(ulong)(uint)param_4);
  if (StringName::configured != '\0') {
    if (local_e0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104644;
    }
    if (local_d8 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00104644:
  if (iVar4 == 5) {
    pSVar2 = *(StringName **)(param_1 + 0xa10);
    StringName::StringName((StringName *)&local_d8,param_3,false);
    AnimationNodeBlendTree::disconnect_node(pSVar2,(int)(StringName *)&local_d8);
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(param_1 + 0xa10);
    StringName::StringName((StringName *)&local_d8,pSVar8,false);
    StringName::StringName((StringName *)&local_e0,param_3,false);
    iVar4 = AnimationNodeBlendTree::can_connect_node
                      (pSVar2,iVar7,(StringName *)(ulong)(uint)param_4);
    if (StringName::configured != '\0') {
      if (local_e0 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010464e;
      }
      if (local_d8 != (char *)0x0) {
        StringName::unref();
      }
    }
  }
LAB_0010464e:
  pSVar3 = EditorNode::singleton;
  if (iVar4 == 0) {
    pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
    local_e0 = 0;
    local_d8 = "";
    local_d0 = 0;
    String::parse_latin1((StrRange *)&local_e0);
    local_d8 = "Nodes Connected";
    local_e8 = 0;
    local_d0 = 0xf;
    String::parse_latin1((StrRange *)&local_e8);
    TTR((String *)&local_d8,(String *)&local_e8);
    EditorUndoRedoManager::create_action(pOVar5,(StringName *)&local_d8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    local_d8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)pSVar8);
    local_e0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)param_3);
    StringName::StringName((StringName *)&local_e8,"connect_node",false);
    pSVar2 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_a8,(String *)&local_e0);
    Variant::Variant(local_90,param_4);
    Variant::Variant((Variant *)&local_78,(String *)&local_d8);
    local_58 = (undefined1  [16])0x0;
    local_60 = 0;
    local_c8 = (Variant *)local_a8;
    pVStack_c0 = local_90;
    local_b8 = (Variant *)&local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar2,(Variant **)&local_e8,(int)&local_c8);
    pVVar6 = local_48;
    do {
      pVVar1 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar6 != (Variant *)local_a8);
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    local_d8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)param_3);
    StringName::StringName((StringName *)&local_e0,"disconnect_node",false);
    pSVar2 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    Variant::Variant(local_90,param_4);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    local_c8 = (Variant *)local_a8;
    pVStack_c0 = local_90;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar2,(Variant **)&local_e0,(int)&local_c8);
    pVVar6 = (Variant *)&local_60;
    do {
      pVVar1 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar6 != (Variant *)local_a8);
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    StringName::StringName((StringName *)&local_d8,"update_graph",false);
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a0 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_d8,0);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d8,"update_graph",false);
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a0 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)param_1,(Variant **)&local_d8,0);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
      return;
    }
  }
  else {
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,"");
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"Warning!");
    TTR((String *)&local_d8,(String *)&local_e8);
    local_f8 = 0;
    String::parse_latin1((String *)&local_f8,"");
    local_100 = 0;
    String::parse_latin1
              ((String *)&local_100,
               "Unable to connect, port may be in use or connection may be invalid.");
    TTR(local_f0,(String *)&local_100);
    EditorNode::show_warning(pSVar3,local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_connection_request(String const&, int, String const&, int) */

void __thiscall
AnimationNodeBlendTreeEditor::_connection_request
          (AnimationNodeBlendTreeEditor *this,String *param_1,int param_2,String *param_3,
          int param_4)

{
  if (this[0xa18] != (AnimationNodeBlendTreeEditor)0x0) {
    return;
  }
  _connection_request((String *)this,(int)param_1,param_3,param_4);
  return;
}



/* AnimationNodeBlendTreeEditor::_disconnection_request(String const&, int, String const&, int) */

void __thiscall
AnimationNodeBlendTreeEditor::_disconnection_request
          (AnimationNodeBlendTreeEditor *this,String *param_1,int param_2,String *param_3,
          int param_4)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Object *pOVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa18] != (AnimationNodeBlendTreeEditor)0x0) goto LAB_00104c70;
  pSVar2 = *(StringName **)(this + 0xa20);
  StringName::StringName((StringName *)&local_e0,param_3,false);
  StringName::StringName((StringName *)&local_d8,param_1,false);
  GraphEdit::disconnect_node
            (pSVar2,(int)(StringName *)&local_d8,(StringName *)(ulong)(uint)param_2,
             (int)(StringName *)&local_e0);
  if (StringName::configured != '\0') {
    if (local_d8 != (char *)0x0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d1c;
    }
    if (local_e0 != 0) {
      StringName::unref();
    }
  }
LAB_00104d1c:
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = "";
  String::parse_latin1((StrRange *)&local_e8);
  local_d8 = "Nodes Disconnected";
  local_e0 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_e0);
  TTR((String *)&local_d8,(String *)&local_e0);
  EditorUndoRedoManager::create_action(pOVar3,(StringName *)&local_d8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)param_3);
  StringName::StringName((StringName *)&local_d8,"disconnect_node",false);
  pSVar2 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)local_a8,(String *)&local_e0);
  Variant::Variant(local_90,param_4);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  local_c8 = (Variant *)local_a8;
  pVStack_c0 = local_90;
  EditorUndoRedoManager::add_do_methodp(pOVar3,pSVar2,(Variant **)&local_d8,(int)&local_c8);
  pVVar4 = (Variant *)&local_60;
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_e8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)param_1);
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)param_3);
  StringName::StringName((StringName *)&local_d8,"connect_node",false);
  pSVar2 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)local_a8,(String *)&local_e0);
  Variant::Variant(local_90,param_4);
  Variant::Variant((Variant *)&local_78,(String *)&local_e8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_c8 = (Variant *)local_a8;
  pVStack_c0 = local_90;
  local_b8 = (Variant *)&local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar2,(Variant **)&local_d8,(int)&local_c8);
  pVVar4 = local_48;
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  StringName::StringName((StringName *)&local_d8,"update_graph",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_d8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"update_graph",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_d8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
LAB_00104c70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_node_selected(Object*) */

void __thiscall
AnimationNodeBlendTreeEditor::_node_selected(AnimationNodeBlendTreeEditor *this,Object *param_1)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  String *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
    if (param_1 != (Object *)0x0) {
      lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&GraphNode::typeinfo,0);
      if (lVar3 != 0) {
        Node::get_name();
        if (local_48 == (undefined *)0x0) {
          local_60 = 0;
        }
        else {
          local_60 = 0;
          if (*(char **)(local_48 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(local_48 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_60,*(char **)(local_48 + 8));
          }
          if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
            StringName::unref();
          }
        }
        StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
        AnimationNodeBlendTree::get_node((StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
        pOVar1 = EditorNode::singleton;
        if (local_58 == (String *)0x0) {
          _err_print_error("_node_selected","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                           0x24b,"Condition \"anode.is_null()\" is true.",0,0);
          Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        else {
          local_48 = &_LC8;
          local_50 = 0;
          local_40 = 0;
          String::parse_latin1((StrRange *)&local_50);
          EditorNode::push_item(pOVar1,local_58,SUB81((StrRange *)&local_50,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if (local_58 != (String *)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              cVar2 = predelete_handler((Object *)local_58);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)local_58 + 0x140))(local_58);
                Memory::free_static(local_58,false);
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        goto LAB_0010528e;
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_node_selected","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                       0x246,"Parameter \"gn\" is null.",0,0);
      return;
    }
  }
  else {
LAB_0010528e:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_connection_to_empty(String const&, int, Vector2 const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_connection_to_empty
          (AnimationNodeBlendTreeEditor *this,String *param_1,int param_2,Vector2 *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
    StringName::StringName((StringName *)&local_38,param_1,false);
    AnimationNodeBlendTree::get_node((StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    if (local_40 != (Object *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xad0),(CowData *)param_1);
      _popup(this,true,param_3);
      if (local_40 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_40);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_40 + 0x140))(local_40);
            Memory::free_static(local_40,false);
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_connection_from_empty(String const&, int, Vector2 const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_connection_from_empty
          (AnimationNodeBlendTreeEditor *this,String *param_1,int param_2,Vector2 *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
    StringName::StringName((StringName *)&local_48,param_1,false);
    AnimationNodeBlendTree::get_node((StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (local_50 != (Object *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xac0),(CowData *)param_1);
      *(int *)(this + 0xac8) = param_2;
      _popup(this,false,param_3);
      if (local_50 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_50);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_50 + 0x140))(local_50);
            Memory::free_static(local_50,false);
          }
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



/* AnimationNodeBlendTreeEditor::_anim_selected(int, Array const&, String const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_anim_selected
          (AnimationNodeBlendTreeEditor *this,int param_1,Array *param_2,String *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Variant local_b0 [8];
  undefined8 local_a8;
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::operator[]((int)param_2);
  Variant::operator_cast_to_String(local_b0);
  StringName::StringName((StringName *)&local_a0,param_3,false);
  AnimationNodeBlendTree::get_node((StringName *)&local_98);
  if (local_98 == (Object *)0x0) {
LAB_001059e8:
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
LAB_00105a01:
    _err_print_error("_anim_selected","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x1f5,
                     "Condition \"anim.is_null()\" is true.",0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  }
  else {
    pOVar2 = (Object *)
             __dynamic_cast(local_98,&Object::typeinfo,&AnimationNodeAnimation::typeinfo,0);
    if (pOVar2 == (Object *)0x0) {
LAB_001056a4:
      cVar1 = RefCounted::unreference();
      pOVar3 = local_98;
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(local_98), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
LAB_001056c5:
        StringName::unref();
      }
      if (pOVar2 == (Object *)0x0) goto LAB_00105a01;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar2 = (Object *)0x0;
        if (local_98 == (Object *)0x0) goto LAB_001059e8;
        goto LAB_001056a4;
      }
      if (local_98 != (Object *)0x0) goto LAB_001056a4;
      if ((StringName::configured != '\0') && (local_a0 != 0)) goto LAB_001056c5;
    }
    pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a0 = 0;
    local_98 = (Object *)&_LC8;
    local_90 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = (Object *)0x112a86;
    local_a8 = 0;
    local_90 = 0xd;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    EditorUndoRedoManager::create_action(pOVar3,(StringName *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_98 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)local_b0);
    StringName::StringName((StringName *)&local_a0,"set_animation",false);
    Variant::Variant((Variant *)&local_78,(String *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)&local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar3,(StringName *)pOVar2,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    AnimationNodeAnimation::get_animation();
    StringName::StringName((StringName *)&local_98,"set_animation",false);
    Variant::Variant((Variant *)&local_78,(StringName *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)&local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar3,(StringName *)pOVar2,(Variant **)&local_98,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') &&
       (((local_98 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_a0 != 0)))) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"update_graph",false);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"update_graph",false);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationNodeBlendTreeEditor::_node_rename_lineedit_changed(String const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_node_rename_lineedit_changed
          (AnimationNodeBlendTreeEditor *this,String *param_1)

{
  if (*(long *)(this + 0xae8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xae8),(CowData *)param_1);
    return;
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



/* AnimationNodeBlendTreeEditor::_delete_node_request(String const&) [clone .part.0] */

void __thiscall
AnimationNodeBlendTreeEditor::_delete_node_request
          (AnimationNodeBlendTreeEditor *this,String *param_1)

{
  Variant *pVVar1;
  int iVar2;
  StringName *pSVar3;
  StringName *pSVar4;
  char cVar5;
  Object *pOVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  long local_178;
  undefined8 *local_170;
  long local_168;
  Object *local_160;
  char *local_158;
  undefined8 local_150;
  Variant *local_148 [2];
  Variant *local_138;
  Variant *pVStack_130;
  Variant *local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  Variant *local_108;
  undefined1 auStack_100 [16];
  Variant local_f0 [24];
  Variant local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  local_160 = (Object *)0x0;
  local_158 = "";
  local_150 = 0;
  String::parse_latin1((StrRange *)&local_160);
  local_158 = "Delete Node";
  local_168 = 0;
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_168);
  TTR((String *)&local_158,(String *)&local_168);
  EditorUndoRedoManager::create_action(pOVar6,(String *)&local_158,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  local_158 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)param_1);
  }
  StringName::StringName((StringName *)&local_160,"remove_node",false);
  pSVar3 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)&local_138,(String *)&local_158);
  local_120 = 0;
  local_118 = (undefined1  [16])0x0;
  local_148[0] = (Variant *)&local_138;
  EditorUndoRedoManager::add_do_methodp
            (pOVar6,pSVar3,(Variant **)&local_160,(int)(Vector2 *)local_148);
  if (Variant::needs_deinit[(int)local_120] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_138] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_160 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  pSVar3 = *(StringName **)(this + 0xa10);
  StringName::StringName((StringName *)&local_158,param_1,false);
  uVar8 = AnimationNodeBlendTree::get_node_position(pSVar3);
  StringName::StringName((StringName *)&local_168,param_1,false);
  AnimationNodeBlendTree::get_node((StringName *)&local_160);
  local_170 = (undefined8 *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)param_1);
  }
  StringName::StringName((StringName *)&local_178,"add_node",false);
  pSVar3 = *(StringName **)(this + 0xa10);
  local_148[0] = (Variant *)uVar8;
  Variant::Variant((Variant *)&local_108,(String *)&local_170);
  Variant::Variant(local_f0,local_160);
  Variant::Variant(local_d8,(Vector2 *)local_148);
  local_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  local_138 = (Variant *)&local_108;
  pVStack_130 = local_f0;
  local_128 = local_d8;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar6,pSVar3,(Variant **)&local_178,(int)(Variant *)&local_138);
  pVVar7 = local_a8;
  do {
    pVVar1 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar7 != (Variant *)&local_108);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_160);
  if ((StringName::configured != '\0') &&
     (((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_158 != (char *)0x0)))) {
    StringName::unref();
  }
  local_170 = (undefined8 *)0x0;
  AnimationNodeBlendTree::get_node_connections(*(List **)(this + 0xa10));
  if (local_170 != (undefined8 *)0x0) {
    for (pSVar3 = (StringName *)*local_170; pSVar3 != (StringName *)0x0;
        pSVar3 = *(StringName **)(pSVar3 + 0x18)) {
      cVar5 = StringName::operator==(pSVar3 + 0x10,param_1);
      if ((cVar5 != '\0') || (cVar5 = StringName::operator==(pSVar3,param_1), cVar5 != '\0')) {
        StringName::StringName((StringName *)&local_158,pSVar3 + 0x10);
        iVar2 = *(int *)(pSVar3 + 8);
        StringName::StringName((StringName *)&local_160,pSVar3);
        StringName::StringName((StringName *)&local_168,"connect_node",false);
        pSVar4 = *(StringName **)(this + 0xa10);
        Variant::Variant(local_a8,(StringName *)&local_160);
        Variant::Variant(local_90,iVar2);
        Variant::Variant(local_78,(StringName *)&local_158);
        local_60 = 0;
        pVVar7 = local_48;
        local_58 = (undefined1  [16])0x0;
        auStack_100._8_8_ = local_78;
        auStack_100._0_8_ = local_90;
        local_108 = local_a8;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar6,pSVar4,(Variant **)&local_168,(int)(Variant *)&local_108);
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != local_a8);
        if ((((StringName::configured != '\0') &&
             ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
            ((local_160 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
           && (local_158 != (char *)0x0)) {
          StringName::unref();
        }
      }
    }
  }
  StringName::StringName((StringName *)&local_158,"update_graph",false);
  local_108 = (Variant *)0x0;
  auStack_100 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_158,0);
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"update_graph",false);
  local_108 = (Variant *)0x0;
  auStack_100 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_158,0);
  if (Variant::needs_deinit[(int)local_108] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator>::~List
            ((List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_170);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_delete_node_request(String const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_delete_node_request
          (AnimationNodeBlendTreeEditor *this,String *param_1)

{
  if (this[0xa18] != (AnimationNodeBlendTreeEditor)0x0) {
    return;
  }
  _delete_node_request(this,param_1);
  return;
}



/* AnimationNodeBlendTreeEditor::_delete_nodes_request(TypedArray<StringName> const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_delete_nodes_request
          (AnimationNodeBlendTreeEditor *this,TypedArray *param_1)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  StringName *pSVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  long in_FS_OFFSET;
  undefined1 (*local_60) [16];
  undefined8 local_58;
  Object *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
    pauVar8 = (undefined1 (*) [16])0x0;
    local_60 = (undefined1 (*) [16])0x0;
    iVar9 = 0;
    cVar3 = Array::is_empty();
    if (cVar3 == '\0') {
      for (; iVar4 = Array::size(), iVar9 < iVar4; iVar9 = iVar9 + 1) {
        Array::operator[]((int)param_1);
        Variant::operator_cast_to_StringName((Variant *)&local_48);
        AnimationNodeBlendTree::get_node((StringName *)&local_50);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        cVar3 = AnimationNode::is_deletable();
        if (cVar3 != '\0') {
          Array::operator[]((int)param_1);
          Variant::operator_cast_to_StringName((Variant *)&local_48);
          if (pauVar8 == (undefined1 (*) [16])0x0) {
            pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar8[1] = 0;
            *pauVar8 = (undefined1  [16])0x0;
            local_60 = pauVar8;
          }
          pSVar7 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pSVar7 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pSVar7 + 0x10) = (undefined1  [16])0x0;
          StringName::operator=(pSVar7,(StringName *)&local_48);
          lVar5 = *(long *)(*pauVar8 + 8);
          *(undefined1 (**) [16])(pSVar7 + 0x18) = pauVar8;
          *(undefined8 *)(pSVar7 + 8) = 0;
          *(long *)(pSVar7 + 0x10) = lVar5;
          if (lVar5 != 0) {
            *(StringName **)(lVar5 + 8) = pSVar7;
          }
          lVar5 = *(long *)*pauVar8;
          *(StringName **)(*pauVar8 + 8) = pSVar7;
          if (lVar5 == 0) {
            *(StringName **)*pauVar8 = pSVar7;
          }
          *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
        }
        if (((local_50 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar2 = local_50, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_50), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    else {
      for (iVar9 = 0; iVar4 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa20),0)),
          iVar9 < iVar4; iVar9 = iVar9 + 1) {
        lVar5 = Node::get_child((int)*(undefined8 *)(this + 0xa20),SUB41(iVar9,0));
        if (((lVar5 != 0) &&
            (lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&GraphNode::typeinfo), lVar5 != 0)) &&
           (cVar3 = GraphElement::is_selected(), cVar3 != '\0')) {
          Node::get_name();
          AnimationNodeBlendTree::get_node((StringName *)&local_50);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          cVar3 = AnimationNode::is_deletable();
          if (cVar3 != '\0') {
            Node::get_name();
            if (pauVar8 == (undefined1 (*) [16])0x0) {
              pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar8[1] = 0;
              *pauVar8 = (undefined1  [16])0x0;
              local_60 = pauVar8;
            }
            pSVar7 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pSVar7 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pSVar7 + 0x10) = (undefined1  [16])0x0;
            StringName::operator=(pSVar7,(StringName *)&local_48);
            lVar5 = *(long *)(*pauVar8 + 8);
            *(long *)(pSVar7 + 0x10) = lVar5;
            *(undefined8 *)(pSVar7 + 8) = 0;
            *(undefined1 (**) [16])(pSVar7 + 0x18) = pauVar8;
            if (lVar5 != 0) {
              *(StringName **)(lVar5 + 8) = pSVar7;
            }
            lVar5 = *(long *)*pauVar8;
            *(StringName **)(*pauVar8 + 8) = pSVar7;
            if (lVar5 == 0) {
              *(StringName **)*pauVar8 = pSVar7;
            }
            *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
          }
          Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_50);
        }
      }
    }
    if ((pauVar8 != (undefined1 (*) [16])0x0) && (*(int *)pauVar8[1] != 0)) {
      uVar6 = EditorUndoRedoManager::get_singleton();
      local_50 = (Object *)0x0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Delete Node(s)");
      TTR((String *)&local_48,(String *)&local_58);
      EditorUndoRedoManager::create_action(uVar6,(String *)&local_48,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      for (plVar1 = *(long **)*pauVar8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = 0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_48,*(char **)(lVar5 + 8));
          }
        }
        if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
          _delete_node_request(this,(String *)&local_48);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      EditorUndoRedoManager::commit_action(SUB81(uVar6,0));
    }
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::initialize_class() [clone .part.0] */

void VBoxContainer::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
            if ((code *)PTR__bind_methods_00131010 != Node::_bind_methods) {
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
    if ((code *)PTR__bind_methods_00131008 != Container::_bind_methods) {
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationNodeBlendTreeEditor::_add_node(int) */

void __thiscall
AnimationNodeBlendTreeEditor::_add_node(AnimationNodeBlendTreeEditor *this,int param_1)

{
  Variant *pVVar1;
  code *pcVar2;
  StringName *pSVar3;
  String *pSVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  Ref *pRVar9;
  Object *pOVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  CowData<char32_t> *local_168;
  long *local_160;
  Ref<AnimationNode> *local_150;
  long *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  long *local_f8;
  Ref *local_f0;
  Object *local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [6];
  int local_90 [2];
  undefined1 local_88 [16];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = (long *)0x0;
  local_118 = (undefined *)0x0;
  if (param_1 == 1000) {
    EditorFileDialog::clear_filters();
    local_f8 = (long *)0x0;
    local_e8 = (Object *)0x0;
    String::parse_latin1((String *)&local_e8,"AnimationNode");
    ResourceLoader::get_recognized_extensions_for_type((String *)&local_e8,(List *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if ((local_f8 != (long *)0x0) && (lVar12 = *local_f8, lVar12 != 0)) {
      do {
        pSVar4 = *(String **)(this + 0xb00);
        local_e8 = (Object *)0x0;
        String::parse_latin1((String *)&local_e8,"");
        operator+((char *)&local_f0,(String *)&_LC146);
        EditorFileDialog::add_filter(pSVar4,(String *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
    }
    EditorFileDialog::popup_file_dialog();
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_f8);
  }
  else if (param_1 == 0x3ea) {
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_120,*(Ref **)(this + 0xb08));
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)(this + 0xb08));
    local_160 = local_120;
    (**(code **)(*local_120 + 0x48))((CowData<char32_t> *)&local_e8);
    if ((Object *)local_118 == local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      local_118 = local_e8;
      local_e8 = (Object *)0x0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    }
LAB_001070ee:
    pOVar10 = (Object *)__dynamic_cast(local_160,&Object::typeinfo,&AnimationNodeOutput::typeinfo,0)
    ;
    if ((pOVar10 == (Object *)0x0) ||
       (cVar6 = RefCounted::reference(), pSVar4 = EditorNode::singleton, cVar6 == '\0')) {
LAB_00107268:
      local_168 = (CowData<char32_t> *)&local_118;
      local_150 = (Ref<AnimationNode> *)&local_120;
      if (((*(long *)(this + 0xad0) == 0) || (*(uint *)(*(long *)(this + 0xad0) + -8) < 2)) ||
         (iVar7 = AnimationNode::get_input_count(), iVar7 != 0)) {
        uVar16 = GraphEdit::get_scroll_offset();
        fVar20 = (float)((ulong)uVar16 >> 0x20);
        if (this[0xa38] == (AnimationNodeBlendTreeEditor)0x0) {
          uVar17 = Control::get_size();
          local_178 = CONCAT44(_LC151._4_4_ * (float)((ulong)uVar17 >> 0x20) + fVar20,
                               (float)_LC151 * (float)uVar17 + (float)uVar16);
        }
        else {
          local_178 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa30) >> 0x20) + fVar20,
                               (float)*(undefined8 *)(this + 0xa30) + (float)uVar16);
        }
        auVar18._0_4_ = GraphEdit::get_zoom();
        auVar21._8_8_ = uStack_170;
        auVar21._0_8_ = local_178;
        auVar18._4_4_ = auVar18._0_4_;
        auVar18._8_8_ = _LC0;
        local_108 = (undefined *)0x0;
        auVar21 = divps(auVar21,auVar18);
        if (local_118 != (undefined *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_168);
        }
        while( true ) {
          pSVar3 = *(StringName **)(this + 0xa10);
          StringName::StringName((StringName *)&local_e8,(String *)&local_108,false);
          cVar6 = AnimationNodeBlendTree::has_node(pSVar3);
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
          if (cVar6 == '\0') break;
          itos((long)&local_f0);
          local_e8 = (Object *)&_LC152;
          local_100 = 0;
          local_e0 = 1;
          String::parse_latin1((StrRange *)&local_100);
          String::operator+((String *)&local_f8,(String *)local_168);
          String::operator+((String *)&local_e8,(String *)&local_f8);
          if ((Object *)local_108 != local_e8) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            local_108 = local_e8;
            local_e8 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        }
        pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
        local_f0 = (Ref *)0x0;
        String::parse_latin1((String *)&local_f0,"");
        local_f8 = (long *)0x0;
        String::parse_latin1((String *)&local_f8,"Add Node to BlendTree");
        TTR((String *)&local_e8,(String *)&local_f8);
        EditorUndoRedoManager::create_action(pOVar10,(String *)&local_e8,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        auVar19._0_4_ = EditorScale::get_scale();
        local_e8 = (Object *)0x0;
        auVar19._4_4_ = auVar19._0_4_;
        auVar19._8_8_ = _LC0;
        auVar21 = divps(auVar21,auVar19);
        Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_e8,(Ref *)local_160);
        local_f0 = (Ref *)0x0;
        if (local_108 != (undefined *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_108);
        }
        StringName::StringName((StringName *)&local_f8,"add_node",false);
        pSVar3 = *(StringName **)(this + 0xa10);
        local_d0 = auVar21._0_8_;
        Variant::Variant((Variant *)local_a8,(String *)&local_f0);
        Variant::Variant((Variant *)local_90,local_e8);
        Variant::Variant(local_78,(Vector2 *)&local_d0);
        local_58 = (undefined1  [16])0x0;
        pVVar15 = local_48;
        local_60 = 0;
        local_c8 = (Variant *)local_a8;
        pVStack_c0 = (Variant *)local_90;
        local_b8 = local_78;
        EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar3,(Variant **)&local_f8,(int)&local_c8);
        do {
          pVVar1 = pVVar15 + -0x18;
          pVVar15 = pVVar15 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar15 != (Variant *)local_a8);
        if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_e8);
        local_e8 = (Object *)0x0;
        if (local_108 != (undefined *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
        }
        StringName::StringName((StringName *)&local_f0,"remove_node",false);
        pSVar3 = *(StringName **)(this + 0xa10);
        Variant::Variant((Variant *)local_a8,(String *)&local_e8);
        local_90[0] = 0;
        local_90[1] = 0;
        local_88 = (undefined1  [16])0x0;
        local_c8 = (Variant *)local_a8;
        EditorUndoRedoManager::add_undo_methodp(pOVar10,pSVar3,(Variant **)&local_f0,(int)&local_c8)
        ;
        if (Variant::needs_deinit[local_90[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_f0 != (Ref *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if ((*(long *)(this + 0xad0) != 0) && (1 < *(uint *)(*(long *)(this + 0xad0) + -8))) {
          local_e8 = (Object *)0x0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(this + 0xad0));
          local_f0 = (Ref *)0x0;
          if (local_108 != (undefined *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_108);
          }
          StringName::StringName((StringName *)&local_f8,"connect_node",false);
          EditorUndoRedoManager::add_do_method<String,int,String>
                    ((EditorUndoRedoManager *)pOVar10,*(undefined8 *)(this + 0xa10),
                     (String *)&local_f8,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8);
          if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          String::parse_latin1((String *)(this + 0xad0),"");
        }
        if (((*(long *)(this + 0xac0) != 0) && (1 < *(uint *)(*(long *)(this + 0xac0) + -8))) &&
           (iVar7 = *(int *)(this + 0xac8), iVar7 != -1)) {
          local_e8 = (Object *)0x0;
          if (local_108 == (undefined *)0x0) {
LAB_00107821:
            local_f0 = (Ref *)0x0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(this + 0xac0));
          }
          else {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
            local_f0 = (Ref *)0x0;
            iVar7 = *(int *)(this + 0xac8);
            if (*(long *)(this + 0xac0) != 0) goto LAB_00107821;
          }
          StringName::StringName((StringName *)&local_f8,"connect_node",false);
          EditorUndoRedoManager::add_do_method<String,int,String>
                    ((EditorUndoRedoManager *)pOVar10,*(undefined8 *)(this + 0xa10),
                     (String *)&local_f8,(CowData<char32_t> *)&local_f0,iVar7,(String *)&local_e8);
          if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          String::parse_latin1((String *)(this + 0xac0),"");
          *(undefined4 *)(this + 0xac8) = 0xffffffff;
        }
        StringName::StringName((StringName *)&local_e8,"update_graph",false);
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)pOVar10,(Object *)this,(StringName *)&local_e8);
        if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_e8,"update_graph",false);
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)pOVar10,(Object *)this,(StringName *)&local_e8);
        if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref(local_168);
        Ref<AnimationNode>::unref(local_150);
        goto LAB_00107238;
      }
      String::parse_latin1((String *)(this + 0xad0),"");
    }
    else {
      local_e8 = (Object *)0x0;
      String::parse_latin1((String *)&local_e8,"");
      local_f0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_f0,"Warning!");
      TTR((String *)&local_f8,(String *)&local_f0);
      local_108 = (undefined *)0x0;
      String::parse_latin1((String *)&local_108,"");
      local_110 = 0;
      String::parse_latin1((String *)&local_110,"Output node can\'t be added to the blend tree.");
      TTR((String *)&local_100,(String *)&local_110);
      EditorNode::show_warning(pSVar4,(String *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
  }
  else {
    if (param_1 != 0x3e9) {
      lVar14 = (long)param_1;
      lVar12 = *(long *)(this + 0xae0);
      if (lVar14 < 0) {
        if (lVar12 != 0) {
          lVar13 = *(long *)(lVar12 + -8);
          goto LAB_001078c3;
        }
      }
      else if (lVar12 != 0) {
        lVar13 = *(long *)(lVar12 + -8);
        if (lVar13 <= lVar14) goto LAB_001078c3;
        lVar8 = lVar14 * 0x20;
        lVar12 = lVar12 + lVar8;
        if ((*(long *)(lVar12 + 8) != 0) && (1 < *(uint *)(*(long *)(lVar12 + 8) + -8))) {
          StringName::StringName((StringName *)&local_e8,(String *)(lVar12 + 8),false);
          lVar12 = ClassDB::instantiate((StringName *)&local_e8);
          if (lVar12 == 0) {
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            pRVar9 = (Ref *)__dynamic_cast(lVar12,&Object::typeinfo,&AnimationNode::typeinfo,0);
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
            if (pRVar9 != (Ref *)0x0) {
              local_e8 = (Object *)0x0;
              local_f0 = pRVar9;
              cVar6 = RefCounted::init_ref();
              if (cVar6 == '\0') {
                local_f0 = (Ref *)0x0;
                pRVar9 = (Ref *)0x0;
              }
              Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_e8);
              Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_120,pRVar9);
              Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_f0);
              lVar12 = *(long *)(this + 0xae0);
              if (lVar12 != 0) {
                lVar13 = *(long *)(lVar12 + -8);
                if (lVar13 <= lVar14) goto LAB_001078c3;
                if (local_118 == *(undefined **)(lVar12 + lVar8)) {
                  local_160 = local_120;
                }
                else {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_118,(CowData *)(lVar12 + lVar8));
                  local_160 = local_120;
                }
LAB_001070e2:
                if (local_160 != (long *)0x0) goto LAB_001070ee;
                goto LAB_00107268;
              }
              goto LAB_001078c0;
            }
          }
          uVar16 = 0x14e;
          pcVar11 = "Parameter \"an\" is null.";
          goto LAB_00107c19;
        }
        if (*(long **)(lVar12 + 0x10) == (long *)0x0) {
          uVar16 = 0x152;
          pcVar11 = "Condition \"add_options[p_idx].script.is_null()\" is true.";
          goto LAB_00107c19;
        }
        (**(code **)(**(long **)(lVar12 + 0x10) + 0x1f0))((StringName *)&local_f8);
        lVar12 = ClassDB::instantiate((StringName *)&local_f8);
        if ((lVar12 == 0) ||
           (pRVar9 = (Ref *)__dynamic_cast(lVar12,&Object::typeinfo,&AnimationNode::typeinfo,0),
           pRVar9 == (Ref *)0x0)) {
          _err_print_error("_add_node","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x155
                           ,"Parameter \"an\" is null.",0,0);
          if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
            StringName::unref();
          }
          goto LAB_00107224;
        }
        local_e8 = (Object *)0x0;
        local_f0 = pRVar9;
        cVar6 = RefCounted::init_ref();
        if (cVar6 == '\0') {
          local_f0 = (Ref *)0x0;
          pRVar9 = (Ref *)0x0;
        }
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_e8);
        Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_120,pRVar9);
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_f0);
        plVar5 = local_120;
        local_160 = local_120;
        pcVar2 = *(code **)(*local_120 + 0x90);
        lVar12 = *(long *)(this + 0xae0);
        if (lVar12 != 0) {
          lVar13 = *(long *)(lVar12 + -8);
          if (lVar13 <= lVar14) goto LAB_001078c3;
          Variant::Variant((Variant *)local_a8,*(Object **)(lVar12 + 0x10 + lVar8));
          (*pcVar2)(plVar5,(Variant *)local_a8);
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = *(long *)(this + 0xae0);
          if (lVar12 != 0) {
            lVar13 = *(long *)(lVar12 + -8);
            if (lVar13 <= lVar14) goto LAB_001078c3;
            if (local_118 != *(undefined **)(lVar12 + lVar8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)(lVar12 + lVar8));
            }
            if ((StringName::configured != '\0') && (local_f8 != (long *)0x0)) {
              StringName::unref();
            }
            goto LAB_001070e2;
          }
        }
      }
LAB_001078c0:
      lVar13 = 0;
LAB_001078c3:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar12 = EditorSettings::get_singleton();
    local_f0 = (Ref *)0x0;
    pRVar9 = *(Ref **)(lVar12 + 0x300);
    if (pRVar9 != (Ref *)0x0) {
      local_e8 = (Object *)0x0;
      local_f0 = pRVar9;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_f0 = (Ref *)0x0;
        Ref<Resource>::unref((Ref<Resource> *)&local_e8);
      }
      else {
        Ref<Resource>::unref((Ref<Resource> *)&local_e8);
        local_160 = (long *)__dynamic_cast(pRVar9,&Object::typeinfo,&AnimationNode::typeinfo,0);
        if (local_160 != (long *)0x0) {
          local_120 = local_160;
          cVar6 = RefCounted::reference();
          if (cVar6 != '\0') {
            Ref<Resource>::unref((Ref<Resource> *)&local_f0);
            (**(code **)(*local_160 + 0x48))((Ref<Resource> *)&local_e8);
            if ((Object *)local_118 != local_e8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              local_118 = local_e8;
              local_e8 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            goto LAB_001070ee;
          }
          local_120 = (long *)0x0;
        }
      }
    }
    Ref<Resource>::unref((Ref<Resource> *)&local_f0);
    uVar16 = 0x14a;
    pcVar11 = "Condition \"anode.is_null()\" is true.";
LAB_00107c19:
    _err_print_error("_add_node","editor/plugins/animation_blend_tree_editor_plugin.cpp",uVar16,
                     pcVar11,0,0);
  }
LAB_00107224:
  local_168 = (CowData<char32_t> *)&local_118;
  local_150 = (Ref<AnimationNode> *)&local_120;
  CowData<char32_t>::_unref(local_168);
  Ref<AnimationNode>::unref(local_150);
LAB_00107238:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationNodeBlendTreeEditor::_file_opened(String const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_file_opened(AnimationNodeBlendTreeEditor *this,String *param_1)

{
  String *pSVar1;
  char cVar2;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (Object *)&_LC8;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  ResourceLoader::load((String *)&local_58,param_1,(StrRange *)&local_60,1,0);
  if (local_58 == (Object *)0x0) {
    pOVar4 = *(Object **)(this + 0xb08);
    if (pOVar4 == (Object *)0x0) goto LAB_001080f0;
    *(undefined8 *)(this + 0xb08) = 0;
    goto LAB_0010819d;
  }
  pOVar3 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&AnimationNode::typeinfo,0);
  pOVar4 = *(Object **)(this + 0xb08);
  if (pOVar4 != pOVar3) {
    *(Object **)(this + 0xb08) = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar4 != (Object *)0x0) goto LAB_0010819d;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xb08) = 0;
      }
      if (pOVar4 != (Object *)0x0) {
LAB_0010819d:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      if (local_58 == (Object *)0x0) goto LAB_001080f0;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar4 = local_58;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_58);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
LAB_001080f0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pSVar1 = EditorNode::singleton;
  if (*(long *)(this + 0xb08) == 0) {
    local_58 = (Object *)&_LC8;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x112a07;
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(String *)&local_68);
    local_58 = (Object *)&_LC8;
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = (Object *)0x116cf8;
    local_80 = 0;
    local_50 = 0x42;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_58,(String *)&local_80);
    EditorNode::show_warning(pSVar1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _add_node(this,0x3ea);
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



/* AnimationNodeAnimationEditor::_open_set_custom_timeline_from_marker_dialog() */

void __thiscall
AnimationNodeAnimationEditor::_open_set_custom_timeline_from_marker_dialog
          (AnimationNodeAnimationEditor *this)

{
  StringName *pSVar1;
  Ref *pRVar2;
  String *pSVar3;
  Vector2i *pVVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  long local_98;
  Object *local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = *(StringName **)(AnimationTreeEditor::singleton + 0xa20);
  AnimationNodeAnimation::get_animation();
  cVar6 = AnimationMixer::has_animation(pSVar1);
  if (cVar6 == '\0') {
    local_70 = 0;
  }
  else {
    AnimationMixer::get_animation((StringName *)&local_68);
    Animation::get_marker_names();
    if (((local_68 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
      (**(code **)(*(long *)local_68 + 0x140))(local_68);
      Memory::free_static(local_68,false);
    }
  }
  OptionButton::clear();
  pRVar2 = *(Ref **)(*(long *)(this + 0xa20) + 0xdb8);
  local_68 = (Object *)&_LC8;
  local_80[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_80);
  local_68 = (Object *)0x112b39;
  local_88 = 0;
  local_60 = 0x12;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_68,(String *)&local_88);
  if ((_open_set_custom_timeline_from_marker_dialog()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_open_set_custom_timeline_from_marker_dialog()::{lambda()#1}::
                                   operator()()::sname), iVar8 != 0)) {
    _scs_create((char *)&_open_set_custom_timeline_from_marker_dialog()::{lambda()#1}::operator()()
                         ::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_open_set_custom_timeline_from_marker_dialog()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_open_set_custom_timeline_from_marker_dialog()::{lambda()#1}::operator()()
                         ::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_90);
  iVar8 = (int)(String *)&local_68;
  OptionButton::add_icon_item(pRVar2,(String *)&local_90,iVar8);
  if (((local_90 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_90, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))();
    Memory::free_static(pOVar5,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  pSVar3 = *(String **)(*(long *)(this + 0xa20) + 0xdb8);
  local_68 = (Object *)&_LC8;
  local_80[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_80);
  OptionButton::add_separator(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  OptionButton::clear();
  pRVar2 = *(Ref **)(*(long *)(this + 0xa20) + 0xdc0);
  local_68 = (Object *)&_LC8;
  local_80[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_80);
  local_68 = (Object *)0x112b56;
  local_88 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_68,(String *)&local_88);
  if ((_open_set_custom_timeline_from_marker_dialog()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_open_set_custom_timeline_from_marker_dialog()::{lambda()#2}::
                                   operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&_open_set_custom_timeline_from_marker_dialog()::{lambda()#2}::operator()()
                         ::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_open_set_custom_timeline_from_marker_dialog()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_open_set_custom_timeline_from_marker_dialog()::{lambda()#2}::operator()()
                         ::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_90);
  OptionButton::add_icon_item(pRVar2,(String *)&local_90,iVar8);
  if (((local_90 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
    (**(code **)(*(long *)local_90 + 0x140))(local_90);
    Memory::free_static(local_90,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  pSVar3 = *(String **)(*(long *)(this + 0xa20) + 0xdc0);
  local_68 = (Object *)&_LC8;
  local_80[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_80);
  OptionButton::add_separator(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  lVar9 = local_70;
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  lVar10 = local_70;
  if (local_70 != 0) {
    lVar10 = local_70 + *(long *)(local_70 + -8) * 8;
  }
  for (; lVar9 != lVar10; lVar9 = lVar9 + 8) {
    OptionButton::add_item(*(String **)(*(long *)(this + 0xa20) + 0xdb8),(int)lVar9);
    OptionButton::add_item(*(String **)(*(long *)(this + 0xa20) + 0xdc0),(int)lVar9);
  }
  OptionButton::select((int)*(undefined8 *)(*(long *)(this + 0xa20) + 0xdb8));
  OptionButton::select((int)*(undefined8 *)(*(long *)(this + 0xa20) + 0xdc0));
  pVVar4 = *(Vector2i **)(this + 0xa20);
  fVar11 = (float)EditorScale::get_scale();
  local_50 = CONCAT44(fVar11 * _LC160._4_4_,fVar11 * (float)_LC160);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::popup_centered(pVVar4);
  CowData<String>::_unref((CowData<String> *)&local_70);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_bind_methods() */

void AnimationNodeBlendTreeEditor::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar1 = create_method_bind<AnimationNodeBlendTreeEditor>(update_graph);
  StringName::StringName((StringName *)local_68,"update_graph",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<AnimationNodeBlendTreeEditor,bool,Ref<AnimationNode>const&>
                     (_update_filters);
  StringName::StringName((StringName *)local_68,"_update_filters",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
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



/* AnimationNodeBlendTreeEditor::~AnimationNodeBlendTreeEditor() */

void __thiscall
AnimationNodeBlendTreeEditor::~AnimationNodeBlendTreeEditor(AnimationNodeBlendTreeEditor *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00127d20;
  if (*(long *)(this + 0xb10) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb10);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb08) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb08);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xaf8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xaf8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xae8));
  CowData<AnimationNodeBlendTreeEditor::AddOption>::_unref
            ((CowData<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xae0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xad0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xac0));
  if (*(long *)(this + 0xab8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xab8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xab8);
      *(undefined8 *)(this + 0xab8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0xa88);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xaac) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xaac) = 0;
        *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa90) + lVar5) != 0) {
            bVar7 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xa90) + lVar5) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            if ((bVar7) && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xa88);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xaac) = 0;
        *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00108cfa;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa90),false);
  }
LAB_00108cfa:
  if (*(long *)(this + 0xa10) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa10);
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
      if (StringName::configured == '\0') goto LAB_00108d5b;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108d5b:
  Control::~Control((Control *)this);
  return;
}



/* AnimationNodeBlendTreeEditor::~AnimationNodeBlendTreeEditor() */

void __thiscall
AnimationNodeBlendTreeEditor::~AnimationNodeBlendTreeEditor(AnimationNodeBlendTreeEditor *this)

{
  ~AnimationNodeBlendTreeEditor(this);
  operator_delete(this,0xb18);
  return;
}



/* CowData<AnimationNodeBlendTreeEditor::AddOption>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<AnimationNodeBlendTreeEditor::AddOption>::_copy_on_write
          (CowData<AnimationNodeBlendTreeEditor::AddOption> *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this_00;
  ulong uVar5;
  CowData *pCVar6;
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
  uVar5 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar5 = lVar1 * 0x20 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar6 = (CowData *)(lVar7 * 0x20 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        CowData<char32_t>::_ref(this_00,pCVar6);
        *(undefined8 *)(this_00 + 8) = 0;
        CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          *(long *)(this_00 + 0x10) = *(long *)(pCVar6 + 0x10);
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this_00 + 0x10) = 0;
          }
        }
        lVar7 = lVar7 + 1;
        *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(pCVar6 + 0x18);
        this_00 = this_00 + 0x20;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* AnimationNodeBlendTreeEditor::remove_custom_type(Ref<Script> const&) */

void __thiscall
AnimationNodeBlendTreeEditor::remove_custom_type(AnimationNodeBlendTreeEditor *this,Ref *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  Object *pOVar4;
  char cVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0xae0);
  if (lVar1 != 0) {
    lVar7 = 0;
    while (lVar6 = lVar7, lVar6 < *(long *)(lVar1 + -8)) {
      lVar7 = lVar6 + 1;
      if (*(long *)(lVar1 + 0x10 + lVar6 * 0x20) == *(long *)param_1) {
        CowData<AnimationNodeBlendTreeEditor::AddOption>::_copy_on_write
                  ((CowData<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xae0));
        lVar1 = *(long *)(this + 0xae0);
        if (lVar1 == 0) {
          lVar7 = -1;
        }
        else {
          lVar7 = *(long *)(lVar1 + -8) + -1;
          if (lVar6 < lVar7) {
            this_00 = (CowData<char32_t> *)(lVar6 * 0x20 + lVar1);
            do {
              if (*(long *)this_00 != *(long *)(this_00 + 0x20)) {
                CowData<char32_t>::_unref(this_00);
                uVar2 = *(undefined8 *)(this_00 + 0x20);
                *(undefined8 *)(this_00 + 0x20) = 0;
                *(undefined8 *)this_00 = uVar2;
              }
              if (*(long *)(this_00 + 8) != *(long *)(this_00 + 0x28)) {
                CowData<char32_t>::_unref(this_00 + 8);
                uVar2 = *(undefined8 *)(this_00 + 0x28);
                *(undefined8 *)(this_00 + 0x28) = 0;
                *(undefined8 *)(this_00 + 8) = uVar2;
              }
              pOVar3 = *(Object **)(this_00 + 0x30);
              pOVar4 = *(Object **)(this_00 + 0x10);
              if (pOVar3 != pOVar4) {
                *(Object **)(this_00 + 0x10) = pOVar3;
                if (pOVar3 != (Object *)0x0) {
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                    *(undefined8 *)(this_00 + 0x10) = 0;
                  }
                }
                if (pOVar4 != (Object *)0x0) {
                  cVar5 = RefCounted::unreference();
                  if (cVar5 != '\0') {
                    cVar5 = predelete_handler(pOVar4);
                    if (cVar5 != '\0') {
                      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                      Memory::free_static(pOVar4,false);
                    }
                  }
                }
              }
              lVar6 = lVar6 + 1;
              *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(this_00 + 0x38);
              this_00 = this_00 + 0x20;
            } while (lVar6 != lVar7);
          }
        }
        CowData<AnimationNodeBlendTreeEditor::AddOption>::resize<false>
                  ((CowData<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xae0),lVar7);
        return;
      }
    }
  }
  _update_options_menu(this,false);
  return;
}



/* Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back(AnimationNodeBlendTreeEditor::AddOption)
   [clone .isra.0] */

void __thiscall
Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
          (Vector<AnimationNodeBlendTreeEditor::AddOption> *this,CowData *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar4 = CowData<AnimationNodeBlendTreeEditor::AddOption>::resize<false>
                    ((CowData<AnimationNodeBlendTreeEditor::AddOption> *)(this + 8),lVar6);
  if (iVar4 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar5 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar6 + -1;
      if (-1 < lVar5) {
        CowData<AnimationNodeBlendTreeEditor::AddOption>::_copy_on_write
                  ((CowData<AnimationNodeBlendTreeEditor::AddOption> *)(this + 8));
        this_00 = (CowData<char32_t> *)(lVar5 * 0x20 + *(long *)(this + 8));
        CowData<char32_t>::_ref(this_00,param_2);
        if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
          CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
        }
        pOVar1 = *(Object **)(param_2 + 0x10);
        pOVar2 = *(Object **)(this_00 + 0x10);
        if (pOVar1 != pOVar2) {
          *(Object **)(this_00 + 0x10) = pOVar1;
          if ((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            *(undefined8 *)(this_00 + 0x10) = 0;
          }
          if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar6,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* AnimationNodeBlendTreeEditor::AnimationNodeBlendTreeEditor() */

void __thiscall
AnimationNodeBlendTreeEditor::AnimationNodeBlendTreeEditor(AnimationNodeBlendTreeEditor *this)

{
  Vector<AnimationNodeBlendTreeEditor::AddOption> *pVVar1;
  code *pcVar2;
  String *pSVar3;
  char cVar4;
  GraphEdit *this_00;
  CallableCustom *pCVar5;
  VSeparator *this_01;
  undefined8 uVar6;
  Node *pNVar7;
  MenuButton *this_02;
  long *plVar8;
  PanelContainer *this_03;
  Label *this_04;
  AcceptDialog *this_05;
  BoxContainer *this_06;
  BoxContainer *this_07;
  CheckBox *this_08;
  Button *pBVar9;
  Tree *this_09;
  EditorFileDialog *this_10;
  Object *pOVar10;
  long in_FS_OFFSET;
  float fVar11;
  long local_c0;
  long local_b8 [2];
  Object *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  String *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined ***)this = &PTR__initialize_classv_00127d20;
  this[0xa0c] = (AnimationNodeBlendTreeEditor)0x1;
  *(undefined8 *)(this + 0xa10) = 0;
  this[0xa18] = (AnimationNodeBlendTreeEditor)0x0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xaa8) = 2;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  String::parse_latin1((String *)(this + 0xac0),"");
  *(undefined4 *)(this + 0xac8) = 0xffffffff;
  *(undefined8 *)(this + 0xad0) = 0;
  String::parse_latin1((String *)(this + 0xad0),"");
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
  this[0xa38] = (AnimationNodeBlendTreeEditor)0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
  singleton = this;
  this_00 = (GraphEdit *)operator_new(0xda0,"");
  GraphEdit::GraphEdit(this_00);
  postinitialize_handler((Object *)this_00);
  *(GraphEdit **)(this + 0xa20) = this_00;
  Node::add_child(this,this_00,0,0);
  GraphEdit::add_valid_right_disconnect_type((int)*(undefined8 *)(this + 0xa20));
  GraphEdit::add_valid_left_disconnect_type((int)*(undefined8 *)(this + 0xa20));
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa20),3);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&,int,String_const&,int>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_String_ptr_int_String_ptr_int *)
             "&AnimationNodeBlendTreeEditor::_connection_request");
  StringName::StringName((StringName *)local_b8,"connection_request",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,1);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&,int,String_const&,int>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_String_ptr_int_String_ptr_int *)
             "&AnimationNodeBlendTreeEditor::_disconnection_request");
  StringName::StringName((StringName *)local_b8,"disconnection_request",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,1);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(AnimationNodeBlendTreeEditor **)(pCVar5 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_00128ca8;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar6;
  *(code **)(pCVar5 + 0x38) = _node_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationNodeBlendTreeEditor::_node_selected";
  Callable::Callable((Callable *)&local_a8,pCVar5);
  StringName::StringName((StringName *)local_b8,"node_selected",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,Vector2_const&>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_Vector2_ptr *)"&AnimationNodeBlendTreeEditor::_scroll_changed");
  StringName::StringName((StringName *)local_b8,"scroll_offset_changed",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(AnimationNodeBlendTreeEditor **)(pCVar5 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_00128dc8;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar6;
  *(code **)(pCVar5 + 0x38) = _delete_nodes_request;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationNodeBlendTreeEditor::_delete_nodes_request";
  Callable::Callable((Callable *)&local_a8,pCVar5);
  StringName::StringName((StringName *)local_b8,"delete_nodes_request",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,Vector2_const&>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_Vector2_ptr *)"&AnimationNodeBlendTreeEditor::_popup_request");
  StringName::StringName((StringName *)local_b8,"popup_request",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&,int,Vector2_const&>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_String_ptr_int_Vector2_ptr *)
             "&AnimationNodeBlendTreeEditor::_connection_to_empty");
  StringName::StringName((StringName *)local_b8,"connection_to_empty",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&,int,Vector2_const&>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_String_ptr_int_Vector2_ptr *)
             "&AnimationNodeBlendTreeEditor::_connection_from_empty");
  StringName::StringName((StringName *)local_b8,"connection_from_empty",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"editors/visual_editors/minimap_opacity");
  _EDITOR_GET((String *)local_78);
  fVar11 = Variant::operator_cast_to_float((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  GraphEdit::set_minimap_opacity(fVar11);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"editors/visual_editors/lines_curvature");
  _EDITOR_GET((String *)local_78);
  fVar11 = Variant::operator_cast_to_float((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  GraphEdit::set_connection_lines_curvature(fVar11);
  this_01 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_01);
  postinitialize_handler((Object *)this_01);
  uVar6 = GraphEdit::get_menu_hbox();
  Node::add_child(uVar6,this_01,0,0);
  pNVar7 = (Node *)GraphEdit::get_menu_hbox();
  Node::move_child(pNVar7,(int)this_01);
  this_02 = (MenuButton *)operator_new(0xc68,"");
  local_a8 = (Object *)0x0;
  MenuButton::MenuButton(this_02,(String *)&local_a8);
  postinitialize_handler((Object *)this_02);
  *(MenuButton **)(this + 0xa28) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  uVar6 = GraphEdit::get_menu_hbox();
  Node::add_child(uVar6,*(undefined8 *)(this + 0xa28),0,0);
  pSVar3 = *(String **)(this + 0xa28);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Add Node...");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pNVar7 = (Node *)GraphEdit::get_menu_hbox();
  Node::move_child(pNVar7,(int)*(undefined8 *)(this + 0xa28));
  plVar8 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar8 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar5 = &PTR_hash_00128ee8;
  *(undefined8 *)(pCVar5 + 0x30) = uVar6;
  *(code **)(pCVar5 + 0x38) = _add_node;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(AnimationNodeBlendTreeEditor **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationNodeBlendTreeEditor::_add_node";
  Callable::Callable((Callable *)&local_a8,pCVar5);
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x240,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void *)"&AnimationNodeBlendTreeEditor::_popup_hide");
  StringName::StringName((StringName *)local_b8,"popup_hide",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,1);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  plVar8 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar5 = &PTR_hash_00129008;
  *(undefined8 *)(pCVar5 + 0x30) = uVar6;
  *(code **)(pCVar5 + 0x38) = _update_options_menu;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(AnimationNodeBlendTreeEditor **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationNodeBlendTreeEditor::_update_options_menu";
  Callable::Callable((Callable *)&local_a8,pCVar5);
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (String *)local_78;
  Callable::bindp((Variant **)local_b8,(int)(AnimationNodeBlendTreeEditor *)&local_a8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_c0,"about_to_popup",false);
  (*pcVar2)(plVar8,(String *)&local_c0,(StringName *)local_b8,0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)&local_a8);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
  pVVar1 = (Vector<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xad8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeAnimation");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Animation");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 0;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeOneShot");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"OneShot");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 2;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeAdd2");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Add2");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 2;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeAdd3");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Add3");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 3;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeBlend2");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Blend2");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 2;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeBlend3");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Blend3");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 3;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeSub2");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Sub2");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 2;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeTimeSeek");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"TimeSeek");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 1;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeTimeScale");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"TimeScale");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 1;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeTransition");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Transition");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 0;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeBlendTree");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"BlendTree");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 0;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeBlendSpace1D");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"BlendSpace1D");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 0;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  AddOption::~AddOption((AddOption *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeBlendSpace2D");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"BlendSpace2D");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 0;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
            (pVVar1,(AnimationNodeBlendTreeEditor *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"AnimationNodeStateMachine");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"StateMachine");
  local_a8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
  local_a0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b8);
  local_98 = 0;
  local_90 = 0;
  Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back(pVVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  _update_options_menu(this,false);
  this_03 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_03);
  postinitialize_handler((Object *)this_03);
  *(PanelContainer **)(this + 0xa40) = this_03;
  Node::add_child(this,this_03,0,0);
  this_04 = (Label *)operator_new(0xad8,"");
  local_a8 = (Object *)0x0;
  Label::Label(this_04,(String *)&local_a8);
  postinitialize_handler((Object *)this_04);
  *(Label **)(this + 0xa48) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Node::add_child(*(undefined8 *)(this + 0xa40),*(undefined8 *)(this + 0xa48),0,0);
  pSVar3 = *(String **)(this + 0xa48);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"eh");
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  this_05 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(AcceptDialog **)(this + 0xa50) = this_05;
  Node::add_child(this,this_05,0,0);
  pSVar3 = *(String **)(this + 0xa50);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Edit Filtered Tracks:");
  TTR((String *)&local_c0,(String *)local_b8);
  Window::set_title(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  this_06 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_06,true);
  this_06[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_06 = &PTR__initialize_classv_00127730;
  postinitialize_handler((Object *)this_06);
  Node::add_child(*(undefined8 *)(this + 0xa50),this_06,0,0);
  this_07 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_07,false);
  this_07[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_07 = &PTR__initialize_classv_001273b8;
  postinitialize_handler((Object *)this_07);
  Node::add_child(this_06,this_07,0,0);
  this_08 = (CheckBox *)operator_new(0xc60,"");
  local_a8 = (Object *)0x0;
  CheckBox::CheckBox(this_08,(String *)&local_a8);
  postinitialize_handler((Object *)this_08);
  *(CheckBox **)(this + 0xa60) = this_08;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pSVar3 = *(String **)(this + 0xa60);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Enable Filtering");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  plVar8 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void *)"&AnimationNodeBlendTreeEditor::_filter_toggled");
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  Callable::~Callable((Callable *)&local_a8);
  Node::add_child(this_07,*(undefined8 *)(this + 0xa60),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_a8 = (Object *)0x0;
  Button::Button(pBVar9,(String *)&local_a8);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa68) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pSVar3 = *(String **)(this + 0xa68);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Fill Selected Children");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  plVar8 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void *)"&AnimationNodeBlendTreeEditor::_filter_fill_selection");
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  Callable::~Callable((Callable *)&local_a8);
  Node::add_child(this_07,*(undefined8 *)(this + 0xa68),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_a8 = (Object *)0x0;
  Button::Button(pBVar9,(String *)&local_a8);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa70) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pSVar3 = *(String **)(this + 0xa70);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Invert");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  plVar8 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void *)"&AnimationNodeBlendTreeEditor::_filter_invert_selection");
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(AnimationNodeBlendTreeEditor *)&local_a8);
  Callable::~Callable((Callable *)&local_a8);
  Node::add_child(this_07,*(undefined8 *)(this + 0xa70),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_a8 = (Object *)0x0;
  Button::Button(pBVar9,(String *)&local_a8);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa78) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pSVar3 = *(String **)(this + 0xa78);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Clear");
  TTR((String *)&local_c0,(String *)local_b8);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  plVar8 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void *)"&AnimationNodeBlendTreeEditor::_filter_clear_selection");
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  Callable::~Callable((Callable *)&local_a8);
  Node::add_child(this_07,*(undefined8 *)(this + 0xa78),0,0);
  this_09 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_09);
  postinitialize_handler((Object *)this_09);
  *(Tree **)(this + 0xa58) = this_09;
  Node::add_child(this_06,this_09,0,0);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xa58),2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa58),3);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa58),0));
  plVar8 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void *)"&AnimationNodeBlendTreeEditor::_filter_edited");
  StringName::StringName((StringName *)local_b8,"item_edited",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  this_10 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_10);
  postinitialize_handler((Object *)this_10);
  *(EditorFileDialog **)(this + 0xb00) = this_10;
  Node::add_child(this,this_10,0,0);
  pSVar3 = *(String **)(this + 0xb00);
  local_a8 = (Object *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"Open Animation Node");
  TTR((String *)&local_c0,(String *)local_b8);
  Window::set_title(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xb00),0);
  plVar8 = *(long **)(this + 0xb00);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&>
            ((AnimationNodeBlendTreeEditor *)&local_a8,(char *)this,
             (_func_void_String_ptr *)"&AnimationNodeBlendTreeEditor::_file_opened");
  StringName::StringName((StringName *)local_b8,"file_selected",false);
  (*pcVar2)(plVar8,(StringName *)local_b8,(AnimationNodeBlendTreeEditor *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  Ref<EditorInspectorPluginAnimationNodeAnimation>::instantiate<>
            ((Ref<EditorInspectorPluginAnimationNodeAnimation> *)(this + 0xb10));
  local_a8 = (Object *)0x0;
  if (*(long *)(this + 0xb10) != 0) {
    pOVar10 = (Object *)
              __dynamic_cast(*(long *)(this + 0xb10),&Object::typeinfo,
                             &EditorInspectorPlugin::typeinfo,0);
    if (pOVar10 != (Object *)0x0) {
      local_a8 = pOVar10;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_a8 = (Object *)0x0;
      }
    }
  }
  EditorInspector::add_inspector_plugin((AnimationNodeBlendTreeEditor *)&local_a8);
  if (local_a8 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar10 = local_a8;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_a8);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::add_custom_type(String const&, Ref<Script> const&) */

void __thiscall
AnimationNodeBlendTreeEditor::add_custom_type
          (AnimationNodeBlendTreeEditor *this,String *param_1,Ref *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Vector<AnimationNodeBlendTreeEditor::AddOption> *local_a8;
  undefined4 local_9c;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  Object *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined4 local_50;
  long local_40;
  
  lVar1 = *(long *)(this + 0xae0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)(lVar1 + -8) <= lVar3) goto LAB_0010b028;
      lVar4 = lVar3 * 0x20;
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + 0x10 + lVar4) != *(long *)param_2);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_custom_type","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                       0x37,"Condition \"add_options[i].script == p_script\" is true.",0,0);
      return;
    }
    goto LAB_0010b327;
  }
LAB_0010b028:
  local_68 = 0;
  local_90 = 0;
  local_88 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_90);
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_68);
  local_78 = (Object *)0x0;
  local_70 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_88 == *(long *)param_1) {
    if (*(Object **)param_2 != (Object *)0x0) {
      pOVar6 = (Object *)0x0;
      local_9c = 0;
      local_78 = *(Object **)param_2;
LAB_0010b0d5:
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_78 = (Object *)0x0;
      }
      goto LAB_0010b0ea;
    }
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_88);
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_80);
    local_9c = 0;
LAB_0010b2a9:
    local_a8 = (Vector<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xad8);
    local_58 = (Object *)0x0;
    local_50 = local_9c;
    Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _update_options_menu(this,false);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_1);
    pOVar5 = *(Object **)param_2;
    local_9c = local_70;
    if (local_78 != pOVar5) {
      pOVar6 = local_78;
      local_78 = pOVar5;
      if (pOVar5 != (Object *)0x0) goto LAB_0010b0d5;
LAB_0010b0ea:
      pOVar5 = local_78;
      if (((pOVar6 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar5 = local_78, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar6), pOVar5 = local_78, cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar5 = local_78;
      }
    }
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_88);
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_80);
    if (pOVar5 == (Object *)0x0) goto LAB_0010b2a9;
    local_58 = pOVar5;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_58 = (Object *)0x0;
      local_50 = local_9c;
      Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
                ((Vector<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xad8));
    }
    else {
      local_50 = local_9c;
      Vector<AnimationNodeBlendTreeEditor::AddOption>::push_back
                ((Vector<AnimationNodeBlendTreeEditor::AddOption> *)(this + 0xad8));
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _update_options_menu(this,false);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b327:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendTreeEditor::update_graph() */

void __thiscall AnimationNodeBlendTreeEditor::update_graph(AnimationNodeBlendTreeEditor *this)

{
  Variant *pVVar1;
  CowData<EditorProperty*> *this_00;
  uint uVar2;
  List *pLVar3;
  Vector2 *pVVar4;
  void *pvVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  Object *pOVar15;
  Object *pOVar16;
  GraphNode *this_01;
  LineEdit *this_02;
  CallableCustom *pCVar17;
  Label *this_03;
  MenuButton *this_04;
  HSeparator *pHVar18;
  ProgressBar *this_05;
  Button *pBVar19;
  undefined8 *puVar20;
  long *plVar21;
  Variant *pVVar22;
  int iVar23;
  undefined4 *puVar24;
  char *pcVar25;
  StringName *pSVar26;
  long lVar27;
  long in_FS_OFFSET;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  bool bVar35;
  List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *local_1c8;
  StringName *local_1c0;
  String *local_1b8;
  StringName *local_1b0;
  long *local_118;
  long *local_110;
  undefined8 *local_108;
  Array local_100 [8];
  undefined8 *local_f8;
  CowData<char32_t> local_f0 [8];
  Object *local_e8;
  long *local_e0;
  Object *local_d8 [2];
  Object *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  undefined4 uStack_9c;
  undefined8 local_88 [3];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  auVar10._8_8_ = stack0xffffffffffffff60;
  auVar10._0_8_ = local_a8._0_8_;
  auVar9._8_8_ = stack0xffffffffffffff60;
  auVar9._0_8_ = local_a8._0_8_;
  auVar8._8_8_ = local_b8._8_8_;
  auVar8._0_8_ = local_b8._0_8_;
  auVar34._8_8_ = local_b8._8_8_;
  auVar34._0_8_ = local_b8._0_8_;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (((this[0xaf0] == (AnimationNodeBlendTreeEditor)0x0) &&
      (local_b8 = auVar34, _local_a8 = auVar9, *(long *)(this + 0xa10) != 0)) &&
     (pLVar3 = *(List **)(AnimationTreeEditor::singleton + 0xa20), local_b8 = auVar8,
     _local_a8 = auVar10, pLVar3 != (List *)0x0)) {
    this_00 = (CowData<EditorProperty*> *)(this + 0xab8);
    CowData<EditorProperty*>::resize<false>(this_00,0);
    pVVar4 = *(Vector2 **)(this + 0xa20);
    fVar28 = (float)EditorScale::get_scale();
    uVar29 = AnimationNodeBlendTree::get_graph_offset();
    iVar23 = 0;
    local_88[0] = CONCAT44((float)((ulong)uVar29 >> 0x20) * fVar28,(float)uVar29 * fVar28);
    GraphEdit::set_scroll_offset(pVVar4);
    GraphEdit::clear_connections();
    while (iVar13 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa20),0)), iVar23 < iVar13)
    {
      lVar14 = Node::get_child((int)*(undefined8 *)(this + 0xa20),SUB41(iVar23,0));
      if ((lVar14 == 0) ||
         (lVar14 = __dynamic_cast(lVar14,&Object::typeinfo,&GraphNode::typeinfo), lVar14 == 0)) {
        iVar23 = iVar23 + 1;
      }
      else {
        pOVar15 = (Object *)Node::get_child((int)*(undefined8 *)(this + 0xa20),SUB41(iVar23,0));
        cVar11 = predelete_handler(pOVar15);
        if (cVar11 != '\0') {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
      }
    }
    if ((*(long *)(this + 0xa88) != 0) && (*(int *)(this + 0xaac) != 0)) {
      lVar14 = 0;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa8) * 4);
      if (uVar2 != 0) {
        do {
          if (*(int *)(*(long *)(this + 0xa90) + lVar14) != 0) {
            *(int *)(*(long *)(this + 0xa90) + lVar14) = 0;
            pvVar5 = *(void **)(*(long *)(this + 0xa88) + lVar14 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            *(undefined8 *)(*(long *)(this + 0xa88) + lVar14 * 2) = 0;
          }
          lVar14 = lVar14 + 4;
        } while ((ulong)uVar2 << 2 != lVar14);
      }
      *(undefined4 *)(this + 0xaac) = 0;
      *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
    }
    local_118 = (long *)0x0;
    AnimationNodeBlendTree::get_node_list(*(List **)(this + 0xa10));
    if ((local_118 != (long *)0x0) &&
       (local_1b0 = (StringName *)*local_118, local_1b0 != (StringName *)0x0)) {
      do {
        local_1c8 = (List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_e0;
        this_01 = (GraphNode *)operator_new(0xb18,"");
        GraphNode::GraphNode(this_01);
        postinitialize_handler((Object *)this_01);
        Node::add_child(*(undefined8 *)(this + 0xa20),this_01,0,0);
        GraphElement::set_draggable(SUB81(this_01,0));
        AnimationNodeBlendTree::get_node((StringName *)&local_110);
        if (local_110 == (long *)0x0) {
          _err_print_error("update_graph","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                           0x98,"Condition \"agnode.is_null()\" is true. Continuing.",0);
          Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_110);
        }
        else {
          fVar28 = (float)EditorScale::get_scale();
          uVar29 = AnimationNodeBlendTree::get_node_position(*(StringName **)(this + 0xa10));
          local_a8._0_8_ = CONCAT44((float)((ulong)uVar29 >> 0x20) * fVar28,(float)uVar29 * fVar28);
          GraphElement::set_position_offset((Vector2 *)this_01);
          (**(code **)(*local_110 + 0x200))((StringName *)&local_c8);
          GraphNode::set_title((String *)this_01);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          lVar14 = *(long *)local_1b0;
          if (lVar14 == 0) {
            local_c8 = (Object *)0x0;
          }
          else {
            local_c8 = (Object *)0x0;
            if (*(char **)(lVar14 + 8) == (char *)0x0) {
              if (*(long *)(lVar14 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar14 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_c8,*(char **)(lVar14 + 8));
            }
          }
          Node::set_name((String *)this_01);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          bVar35 = SUB81((StringName *)&local_c8,0);
          if (*(long *)(SceneStringNames::singleton + 0x200) == *(long *)local_1b0) {
            cVar11 = '\0';
          }
          else {
            this_02 = (LineEdit *)operator_new(0xbb0,"");
            local_c8 = (Object *)0x0;
            LineEdit::LineEdit(this_02,(String *)&local_c8);
            postinitialize_handler((Object *)this_02);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            lVar14 = *(long *)local_1b0;
            if (lVar14 == 0) {
              local_c8 = (Object *)0x0;
            }
            else {
              local_c8 = (Object *)0x0;
              if (*(char **)(lVar14 + 8) == (char *)0x0) {
                if (*(long *)(lVar14 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar14 + 0x10))
                  ;
                }
              }
              else {
                String::parse_latin1((String *)&local_c8,*(char **)(lVar14 + 8));
              }
            }
            LineEdit::set_text(this_02,(StringName *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            LineEdit::set_editable(SUB81(this_02,0));
            LineEdit::set_expand_to_text_length_enabled(SUB81(this_02,0));
            fVar28 = (float)EditorScale::get_scale();
            local_a8._0_8_ = CONCAT44(fVar28 * _LC246._4_4_,fVar28 * (float)_LC246);
            Control::set_custom_minimum_size((Vector2 *)this_02);
            Node::add_child(this_01,this_02,0);
            local_c8 = (Object *)0x0;
            local_d8[0] = (Object *)0x0;
            if (update_graph()::{lambda()#1}::operator()()::sname == '\0') {
              iVar23 = __cxa_guard_acquire(&update_graph()::{lambda()#1}::operator()()::sname);
              if (iVar23 != 0) {
                _scs_create((char *)&update_graph()::{lambda()#1}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_graph()::{lambda()#1}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_graph()::{lambda()#1}::operator()()::sname);
              }
            }
            local_1b8 = (String *)local_a8;
            _local_a8 = Control::get_theme_color
                                  ((StringName *)this,
                                   (StringName *)(SceneStringNames::singleton + 0xb0));
            local_b8._0_8_ = CONCAT44(_UNK_001297f4,__LC248);
            local_b8._8_8_ = CONCAT44(_LC59,_UNK_001297f8);
            GraphNode::set_slot((int)this_01,false,0,(Color *)0x0,SUB81(local_b8,0),1,
                                (Color *)(ulong)-(uint)(byte)this[0xa18],local_1b8,
                                (Ref<Texture2D> *)local_d8,bVar35);
            Ref<Texture2D>::unref((Ref<Texture2D> *)local_d8);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
            pcVar6 = *(code **)(*(long *)this_02 + 0x108);
            pCVar17 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar17);
            *(AnimationNodeBlendTreeEditor **)(pCVar17 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar17 + 0x20) = &_LC8;
            *(undefined8 *)(pCVar17 + 0x40) = 0;
            uVar29 = *(undefined8 *)(this + 0x60);
            *(undefined ***)pCVar17 = &PTR_hash_00128828;
            *(undefined8 *)(pCVar17 + 0x30) = uVar29;
            *(code **)(pCVar17 + 0x38) = _node_renamed;
            *(undefined8 *)(pCVar17 + 0x10) = 0;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
            *(char **)(pCVar17 + 0x20) = "AnimationNodeBlendTreeEditor::_node_renamed";
            Callable::Callable((Callable *)local_d8,pCVar17);
            local_e0 = (long *)0x0;
            Ref<AnimationNode>::operator=((Ref<AnimationNode> *)local_1c8,(Ref *)local_110);
            Callable::bind<Ref<AnimationNode>>
                      ((StringName *)&local_c8,(Ref<Texture2D> *)local_d8,local_e0);
            (*pcVar6)(this_02,SceneStringNames::singleton + 0x278,(StringName *)&local_c8,1);
            Callable::~Callable((Callable *)&local_c8);
            Ref<AnimationNode>::unref((Ref<AnimationNode> *)local_1c8);
            Callable::~Callable((Callable *)local_d8);
            pcVar6 = *(code **)(*(long *)this_02 + 0x108);
            pCVar17 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar17);
            *(AnimationNodeBlendTreeEditor **)(pCVar17 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar17 + 0x20) = &_LC8;
            *(undefined ***)pCVar17 = &PTR_hash_001288b8;
            *(undefined8 *)(pCVar17 + 0x40) = 0;
            uVar29 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar17 + 0x10) = 0;
            *(undefined8 *)(pCVar17 + 0x30) = uVar29;
            *(code **)(pCVar17 + 0x38) = _node_renamed_focus_out;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
            *(char **)(pCVar17 + 0x20) = "AnimationNodeBlendTreeEditor::_node_renamed_focus_out";
            Callable::Callable((Callable *)local_d8,pCVar17);
            local_e0 = (long *)0x0;
            Ref<AnimationNode>::operator=((Ref<AnimationNode> *)local_1c8,(Ref *)local_110);
            Callable::bind<Ref<AnimationNode>>
                      ((StringName *)&local_c8,(Ref<Texture2D> *)local_d8,local_e0);
            (*pcVar6)(this_02,SceneStringNames::singleton + 0xe0,(StringName *)&local_c8,1);
            Callable::~Callable((Callable *)&local_c8);
            Ref<AnimationNode>::unref((Ref<AnimationNode> *)local_1c8);
            Callable::~Callable((Callable *)local_d8);
            pcVar6 = *(code **)(*(long *)this_02 + 0x108);
            create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&>
                      ((AnimationNodeBlendTreeEditor *)&local_c8,(char *)this,
                       (_func_void_String_ptr *)
                       "&AnimationNodeBlendTreeEditor::_node_rename_lineedit_changed");
            (*pcVar6)(this_02,SceneStringNames::singleton + 0x270,(StringName *)&local_c8,1);
            Callable::~Callable((Callable *)&local_c8);
            AnimationNode::set_deletable(SUB81(local_110,0));
            if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
              pBVar19 = (Button *)operator_new(0xc10,"");
              local_c8 = (Object *)0x0;
              Button::Button(pBVar19,(String *)&local_c8);
              postinitialize_handler((Object *)pBVar19);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              Button::set_flat(SUB81(pBVar19,0));
              Control::set_focus_mode(pBVar19,0);
              if (update_graph()::{lambda()#2}::operator()()::sname == '\0') {
                iVar23 = __cxa_guard_acquire(&update_graph()::{lambda()#2}::operator()()::sname);
                if (iVar23 != 0) {
                  _scs_create((char *)&update_graph()::{lambda()#2}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &update_graph()::{lambda()#2}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&update_graph()::{lambda()#2}::operator()()::sname);
                }
              }
              local_1c8 = (List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_e0
              ;
              Control::get_editor_theme_icon((StringName *)&local_c8);
              Button::set_button_icon(pBVar19);
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
              pcVar6 = *(code **)(*(long *)pBVar19 + 0x108);
              create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&>
                        ((AnimationNodeBlendTreeEditor *)local_d8,(char *)this,
                         (_func_void_String_ptr *)
                         "&AnimationNodeBlendTreeEditor::_delete_node_request");
              StringName::StringName((StringName *)local_1c8,local_1b0);
              Callable::bind<StringName>
                        ((StringName *)&local_c8,(Ref<Texture2D> *)local_d8,local_1c8);
              (*pcVar6)(pBVar19,SceneStringNames::singleton + 0x238,(StringName *)&local_c8,1);
              Callable::~Callable((Callable *)&local_c8);
              if ((StringName::configured != '\0') && (local_e0 != (long *)0x0)) {
                StringName::unref();
              }
              Callable::~Callable((Callable *)local_d8);
              uVar29 = GraphNode::get_titlebar_hbox();
              Node::add_child(uVar29,pBVar19,0,0);
            }
            cVar11 = '\x01';
          }
          local_1c8 = (List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_e0;
          iVar23 = 0;
          while( true ) {
            iVar13 = AnimationNode::get_input_count();
            if (iVar13 <= iVar23) break;
            this_03 = (Label *)operator_new(0xad8,"");
            local_c8 = (Object *)0x0;
            Label::Label(this_03,(String *)&local_c8);
            postinitialize_handler((Object *)this_03);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            Node::add_child(this_01,this_03,0,0);
            (**(code **)(*local_110 + 0x220))((StringName *)&local_c8,local_110,iVar23);
            Label::set_text((String *)this_03);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_c8 = (Object *)0x0;
            local_d8[0] = (Object *)0x0;
            local_a8._4_4_ = _UNK_001297f4;
            local_a8._0_4_ = __LC248;
            stack0xffffffffffffff60 = (Variant *)CONCAT44(_LC59,_UNK_001297f8);
            if (update_graph()::{lambda()#3}::operator()()::sname == '\0') {
              iVar13 = __cxa_guard_acquire(&update_graph()::{lambda()#3}::operator()()::sname);
              if (iVar13 != 0) {
                _scs_create((char *)&update_graph()::{lambda()#3}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_graph()::{lambda()#3}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_graph()::{lambda()#3}::operator()()::sname);
              }
            }
            local_1b8 = (String *)local_a8;
            auVar34 = Control::get_theme_color
                                ((StringName *)this,
                                 (StringName *)(SceneStringNames::singleton + 0xb0));
            local_b8 = auVar34;
            GraphNode::set_slot((int)this_01,(bool)(cVar11 + (char)iVar23),1,
                                (Color *)(ulong)-(uint)(byte)this[0xa18],SUB81(local_b8,0),0,
                                (Color *)0x0,local_1b8,(CowData<char32_t> *)local_d8,bVar35);
            if (local_d8[0] != (Object *)0x0) {
              cVar12 = RefCounted::unreference();
              pOVar15 = local_d8[0];
              if (cVar12 != '\0') {
                cVar12 = predelete_handler(local_d8[0]);
                if (cVar12 != '\0') {
                  (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                  Memory::free_static(pOVar15,false);
                }
              }
            }
            if (local_c8 != (Object *)0x0) {
              cVar12 = RefCounted::unreference();
              pOVar15 = local_c8;
              if (cVar12 != '\0') {
                cVar12 = predelete_handler(local_c8);
                if (cVar12 != '\0') {
                  (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                  Memory::free_static(pOVar15,false);
                }
              }
            }
            iVar23 = iVar23 + 1;
          }
          local_108 = (undefined8 *)0x0;
          (**(code **)(*local_110 + 0x1d8))
                    (local_110,(List<PropertyInfo,DefaultAllocator> *)&local_108);
          if ((local_108 != (undefined8 *)0x0) &&
             (puVar24 = (undefined4 *)*local_108, puVar24 != (undefined4 *)0x0)) {
            do {
              if ((*(byte *)(puVar24 + 10) & 4) != 0) {
                local_d8[0] = (Object *)0x0;
                local_c8 = (Object *)&_LC256;
                local_c0 = 1;
                String::parse_latin1((StrRange *)local_d8);
                lVar14 = *(long *)local_1b0;
                if (lVar14 == 0) {
                  local_e8 = (Object *)0x0;
                }
                else {
                  local_e8 = (Object *)0x0;
                  if (*(char **)(lVar14 + 8) == (char *)0x0) {
                    if (*(long *)(lVar14 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_e8,(CowData *)(lVar14 + 0x10));
                    }
                  }
                  else {
                    String::parse_latin1((String *)&local_e8,*(char **)(lVar14 + 8));
                  }
                }
                AnimationTreeEditor::get_base_path();
                String::operator+((String *)local_1c8,(String *)local_f0);
                String::operator+((String *)&local_c8,(String *)local_1c8);
                String::operator+((String *)&local_f8,(String *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
                CowData<char32_t>::_unref(local_f0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
                pOVar15 = (Object *)
                          EditorInspector::instantiate_property_editor
                                    (pLVar3,*puVar24,(String *)&local_f8,puVar24[6],puVar24 + 8,
                                     puVar24[10],0);
                if (pOVar15 != (Object *)0x0) {
                  EditorProperty::set_read_only(SUB81(pOVar15,0));
                  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
                  EditorProperty::set_object_and_property(pOVar15,(StringName *)pLVar3);
                  if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  (**(code **)(*(long *)pOVar15 + 0x380))(pOVar15);
                  EditorProperty::set_name_split_ratio(0.0);
                  pcVar6 = *(code **)(*(long *)pOVar15 + 0x108);
                  pCVar17 = (CallableCustom *)operator_new(0x48,"");
                  CallableCustom::CallableCustom(pCVar17);
                  *(AnimationNodeBlendTreeEditor **)(pCVar17 + 0x28) = this;
                  *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
                  *(undefined **)(pCVar17 + 0x20) = &_LC8;
                  *(undefined ***)pCVar17 = &PTR_hash_001289d8;
                  *(undefined8 *)(pCVar17 + 0x40) = 0;
                  uVar29 = *(undefined8 *)(this + 0x60);
                  *(undefined8 *)(pCVar17 + 0x10) = 0;
                  *(undefined8 *)(pCVar17 + 0x30) = uVar29;
                  *(code **)(pCVar17 + 0x38) = _property_changed;
                  CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
                  *(char **)(pCVar17 + 0x20) = "AnimationNodeBlendTreeEditor::_property_changed";
                  Callable::Callable((Callable *)&local_c8,pCVar17);
                  StringName::StringName((StringName *)local_d8,"property_changed",false);
                  (*pcVar6)(pOVar15,(CowData<char32_t> *)local_d8,(StringName *)&local_c8,0);
                  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
                    StringName::unref();
                  }
                  Callable::~Callable((Callable *)&local_c8);
                  if (puVar24[6] == 0x11) {
                    fVar28 = (float)EditorScale::get_scale();
                    local_a8._0_8_ = CONCAT44(fVar28 * _LC260._4_4_,fVar28 * (float)_LC260);
                    Control::set_custom_minimum_size((Vector2 *)pOVar15);
                    pcVar6 = *(code **)(*(long *)pOVar15 + 0x108);
                    StringName::StringName((StringName *)local_d8,"reset_size",false);
                    Callable::Callable((Callable *)&local_c8,(Object *)this_01,
                                       (StringName *)local_d8);
                    (*pcVar6)(pOVar15,SceneStringNames::singleton,(StringName *)&local_c8,0);
                    Callable::~Callable((Callable *)&local_c8);
                    auVar7._8_8_ = stack0xffffffffffffff60;
                    auVar7._0_8_ = local_a8._0_8_;
                    if ((StringName::configured != '\0') &&
                       (_local_a8 = auVar7, local_d8[0] != (Object *)0x0)) {
                      StringName::unref();
                    }
                  }
                  Node::add_child(this_01,pOVar15,0,0);
                  if (*(long *)(this + 0xab8) == 0) {
                    lVar14 = 1;
                  }
                  else {
                    lVar14 = *(long *)(*(long *)(this + 0xab8) + -8) + 1;
                  }
                  iVar23 = CowData<EditorProperty*>::resize<false>(this_00,lVar14);
                  if (iVar23 == 0) {
                    if (*(long *)(this + 0xab8) == 0) {
                      lVar27 = -1;
                      lVar14 = 0;
                    }
                    else {
                      lVar14 = *(long *)(*(long *)(this + 0xab8) + -8);
                      lVar27 = lVar14 + -1;
                      if (-1 < lVar27) {
                        CowData<EditorProperty*>::_copy_on_write(this_00);
                        *(Object **)(*(long *)(this + 0xab8) + lVar27 * 8) = pOVar15;
                        goto LAB_0010c496;
                      }
                    }
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar14,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    _err_print_error("push_back","./core/templates/vector.h",0x142,
                                     "Condition \"err\" is true. Returning: true",0);
                  }
                }
LAB_0010c496:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              }
              puVar24 = *(undefined4 **)(puVar24 + 0xc);
            } while (puVar24 != (undefined4 *)0x0);
          }
          local_1c0 = (StringName *)&local_e8;
          pcVar6 = *(code **)(*(long *)this_01 + 0x108);
          pCVar17 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar17);
          *(AnimationNodeBlendTreeEditor **)(pCVar17 + 0x28) = this;
          *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
          *(undefined **)(pCVar17 + 0x20) = &_LC8;
          *(undefined ***)pCVar17 = &PTR_hash_00128a68;
          *(undefined8 *)(pCVar17 + 0x40) = 0;
          uVar29 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(pCVar17 + 0x10) = 0;
          *(undefined8 *)(pCVar17 + 0x30) = uVar29;
          *(code **)(pCVar17 + 0x38) = _node_dragged;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
          *(char **)(pCVar17 + 0x20) = "AnimationNodeBlendTreeEditor::_node_dragged";
          Callable::Callable((Callable *)local_d8,pCVar17);
          StringName::StringName(local_1c0,local_1b0);
          Callable::bind<StringName>
                    ((StringName *)&local_c8,(CowData<char32_t> *)local_d8,local_1c0);
          StringName::StringName((StringName *)local_1c8,"dragged",false);
          (*pcVar6)(this_01,local_1c8,(StringName *)&local_c8,0);
          if ((StringName::configured != '\0') && (local_e0 != (long *)0x0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)&local_c8);
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)local_d8);
          cVar11 = AnimationTreeEditor::can_edit(AnimationTreeEditor::singleton);
          if (cVar11 != '\0') {
            pHVar18 = (HSeparator *)operator_new(0x9e0,"");
            HSeparator::HSeparator(pHVar18);
            postinitialize_handler((Object *)pHVar18);
            Node::add_child(this_01,pHVar18,0,0);
            pBVar19 = (Button *)operator_new(0xc10,"");
            local_c8 = (Object *)0x0;
            Button::Button(pBVar19,(String *)&local_c8);
            postinitialize_handler((Object *)pBVar19);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_d8[0] = (Object *)0x0;
            String::parse_latin1((String *)local_d8,"");
            local_e0 = (long *)0x0;
            String::parse_latin1((String *)local_1c8,"Open Editor");
            TTR((String *)&local_c8,(String *)local_1c8);
            Button::set_text((String *)pBVar19);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            if (update_graph()::{lambda()#4}::operator()()::sname == '\0') {
              iVar23 = __cxa_guard_acquire(&update_graph()::{lambda()#4}::operator()()::sname);
              if (iVar23 != 0) {
                _scs_create((char *)&update_graph()::{lambda()#4}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_graph()::{lambda()#4}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_graph()::{lambda()#4}::operator()()::sname);
              }
            }
            Control::get_editor_theme_icon((StringName *)&local_c8);
            Button::set_button_icon(pBVar19);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
            Node::add_child(this_01,pBVar19,0,0);
            pcVar6 = *(code **)(*(long *)pBVar19 + 0x108);
            create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&>
                      ((AnimationNodeBlendTreeEditor *)local_d8,(char *)this,
                       (_func_void_String_ptr *)"&AnimationNodeBlendTreeEditor::_open_in_editor");
            StringName::StringName((StringName *)local_1c8,local_1b0);
            Callable::bind<StringName>
                      ((StringName *)&local_c8,(CowData<char32_t> *)local_d8,local_1c8);
            (*pcVar6)(pBVar19,SceneStringNames::singleton + 0x238,(StringName *)&local_c8,1);
            Callable::~Callable((Callable *)&local_c8);
            if ((StringName::configured != '\0') && (local_e0 != (long *)0x0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)local_d8);
            Control::set_h_size_flags(pBVar19,4);
          }
          cVar11 = (**(code **)(*local_110 + 0x228))();
          if (cVar11 != '\0') {
            pHVar18 = (HSeparator *)operator_new(0x9e0,"");
            HSeparator::HSeparator(pHVar18);
            postinitialize_handler((Object *)pHVar18);
            Node::add_child(this_01,pHVar18,0,0);
            pBVar19 = (Button *)operator_new(0xc10,"");
            local_c8 = (Object *)0x0;
            Button::Button(pBVar19,(String *)&local_c8);
            postinitialize_handler((Object *)pBVar19);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_d8[0] = (Object *)0x0;
            if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
              String::parse_latin1((String *)local_d8,"");
              pcVar25 = "Edit Filters";
            }
            else {
              String::parse_latin1((String *)local_d8,"");
              pcVar25 = "Inspect Filters";
            }
            local_e0 = (long *)0x0;
            String::parse_latin1((String *)local_1c8,pcVar25);
            TTR((String *)&local_c8,(String *)local_1c8);
            Button::set_text((String *)pBVar19);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            if (update_graph()::{lambda()#5}::operator()()::sname == '\0') {
              iVar23 = __cxa_guard_acquire(&update_graph()::{lambda()#5}::operator()()::sname);
              if (iVar23 != 0) {
                _scs_create((char *)&update_graph()::{lambda()#5}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_graph()::{lambda()#5}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_graph()::{lambda()#5}::operator()()::sname);
              }
            }
            Control::get_editor_theme_icon((StringName *)&local_c8);
            Button::set_button_icon(pBVar19);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
            Node::add_child(this_01,pBVar19,0,0);
            pcVar6 = *(code **)(*(long *)pBVar19 + 0x108);
            create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&>
                      ((AnimationNodeBlendTreeEditor *)local_d8,(char *)this,
                       (_func_void_String_ptr *)"&AnimationNodeBlendTreeEditor::_inspect_filters");
            StringName::StringName((StringName *)local_1c8,local_1b0);
            Callable::bind<StringName>
                      ((StringName *)&local_c8,(CowData<char32_t> *)local_d8,local_1c8);
            (*pcVar6)(pBVar19,SceneStringNames::singleton + 0x238,(StringName *)&local_c8,1);
            Callable::~Callable((Callable *)&local_c8);
            if ((StringName::configured != '\0') && (local_e0 != (long *)0x0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)local_d8);
            Control::set_h_size_flags(pBVar19,4);
          }
          if (local_110 == (long *)0x0) {
LAB_0010b4a0:
            pOVar15 = (Object *)0x0;
          }
          else {
            pOVar15 = (Object *)
                      __dynamic_cast(local_110,&Object::typeinfo,&AnimationNodeAnimation::typeinfo,0
                                    );
            if (pOVar15 == (Object *)0x0) goto LAB_0010b4a0;
            cVar11 = RefCounted::reference();
            if (cVar11 == '\0') goto LAB_0010b4a0;
            this_04 = (MenuButton *)operator_new(0xc68,"");
            local_c8 = (Object *)0x0;
            MenuButton::MenuButton(this_04,(String *)&local_c8);
            postinitialize_handler((Object *)this_04);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            AnimationNodeAnimation::get_animation();
            if (local_d8[0] == (Object *)0x0) {
              local_c8 = (Object *)0x0;
            }
            else {
              local_c8 = (Object *)0x0;
              if (*(char **)(local_d8[0] + 8) == (char *)0x0) {
                if (*(long *)(local_d8[0] + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_c8,(CowData *)(local_d8[0] + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)&local_c8,*(char **)(local_d8[0] + 8));
              }
            }
            Button::set_text((String *)this_04);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
              StringName::unref();
            }
            if (update_graph()::{lambda()#6}::operator()()::sname == '\0') {
              iVar23 = __cxa_guard_acquire(&update_graph()::{lambda()#6}::operator()()::sname);
              if (iVar23 != 0) {
                _scs_create((char *)&update_graph()::{lambda()#6}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_graph()::{lambda()#6}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_graph()::{lambda()#6}::operator()()::sname);
              }
            }
            local_1b8 = (String *)local_a8;
            Control::get_editor_theme_icon((StringName *)&local_c8);
            Button::set_button_icon(this_04);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
            Node::set_auto_translate_mode(this_04,2);
            BaseButton::set_disabled(SUB81(this_04,0));
            Array::Array(local_100);
            pHVar18 = (HSeparator *)operator_new(0x9e0,"");
            HSeparator::HSeparator(pHVar18);
            postinitialize_handler((Object *)pHVar18);
            Node::add_child(this_01,pHVar18,0,0);
            Node::add_child(this_01,this_04,0,0);
            this_05 = (ProgressBar *)operator_new(0xa48,"");
            ProgressBar::ProgressBar(this_05);
            postinitialize_handler((Object *)this_05);
            local_f8 = (undefined8 *)0x0;
            AnimationMixer::get_animation_list(pLVar3);
            if (local_f8 != (undefined8 *)0x0) {
              for (pSVar26 = (StringName *)*local_f8; pSVar26 != (StringName *)0x0;
                  pSVar26 = *(StringName **)(pSVar26 + 8)) {
                uVar29 = MenuButton::get_popup();
                lVar14 = *(long *)pSVar26;
                if (lVar14 == 0) {
                  local_c8 = (Object *)0x0;
                }
                else {
                  local_c8 = (Object *)0x0;
                  if (*(char **)(lVar14 + 8) == (char *)0x0) {
                    if (*(long *)(lVar14 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c8,(CowData *)(lVar14 + 0x10));
                    }
                  }
                  else {
                    String::parse_latin1((String *)&local_c8,*(char **)(lVar14 + 8));
                  }
                }
                PopupMenu::add_item(uVar29,(StringName *)&local_c8,0xffffffff,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                Variant::Variant((Variant *)local_1b8,pSVar26);
                Array::push_back((Variant *)local_100);
                if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
              }
            }
            ProgressBar::set_show_percentage(SUB81(this_05,0));
            fVar28 = (float)EditorScale::get_scale();
            local_a8._0_8_ = CONCAT44(fVar28 * _LC268._4_4_,fVar28 * (float)_LC268);
            Control::set_custom_minimum_size((Vector2 *)this_05);
            puVar20 = (undefined8 *)
                      HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
                      ::operator[]((HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
                                    *)(this + 0xa80),local_1b0);
            *puVar20 = this_05;
            Node::add_child(this_01,this_05,0,0);
            plVar21 = (long *)MenuButton::get_popup();
            pcVar6 = *(code **)(*plVar21 + 0x108);
            pCVar17 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar17);
            *(AnimationNodeBlendTreeEditor **)(pCVar17 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar17 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar17 + 0x20) = &_LC8;
            *(undefined ***)pCVar17 = &PTR_hash_00128af8;
            *(undefined8 *)(pCVar17 + 0x40) = 0;
            uVar29 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar17 + 0x10) = 0;
            *(undefined8 *)(pCVar17 + 0x30) = uVar29;
            *(code **)(pCVar17 + 0x38) = _anim_selected;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar17,(int)pCVar17 + 0x28);
            *(char **)(pCVar17 + 0x20) = "AnimationNodeBlendTreeEditor::_anim_selected";
            Callable::Callable((Callable *)local_d8,pCVar17);
            StringName::StringName(local_1c0,local_1b0);
            Array::Array((Array *)local_f0,local_100);
            Variant::Variant((Variant *)local_88,(Array *)local_f0);
            Variant::Variant(local_70,local_1c0);
            local_58 = 0;
            local_50 = (undefined1  [16])0x0;
            local_a8._0_8_ = (Variant *)local_88;
            unique0x100033b6 = local_70;
            Callable::bindp((Variant **)&local_c8,(int)(CowData<char32_t> *)local_d8);
            pVVar22 = (Variant *)local_40;
            do {
              pVVar1 = pVVar22 + -0x18;
              pVVar22 = pVVar22 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar22 != (Variant *)local_88);
            StringName::StringName((StringName *)local_1c8,"index_pressed",false);
            (*pcVar6)(plVar21,local_1c8,(StringName *)&local_c8,1);
            if ((StringName::configured != '\0') && (local_e0 != (long *)0x0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)&local_c8);
            Array::~Array((Array *)local_f0);
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)local_d8);
            List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_f8)
            ;
            Array::~Array(local_100);
          }
          StringName::StringName((StringName *)local_1c8,"GraphNode",false);
          Control::get_theme_stylebox((StringName *)local_d8,(StringName *)this_01);
          (**(code **)(*(long *)local_d8[0] + 0x198))((StringName *)&local_c8,local_d8[0],0);
          local_e8 = (Object *)0x0;
          if (local_c8 != (Object *)0x0) {
            pOVar16 = (Object *)__dynamic_cast(local_c8,&Object::typeinfo,&StyleBox::typeinfo);
            if (pOVar16 != (Object *)0x0) {
              local_e8 = pOVar16;
              cVar11 = RefCounted::reference();
              if (cVar11 == '\0') {
                local_e8 = (Object *)0x0;
              }
              if (local_c8 == (Object *)0x0) goto LAB_0010b560;
            }
            cVar11 = RefCounted::unreference();
            pOVar16 = local_c8;
            if (cVar11 != '\0') {
              cVar11 = predelete_handler(local_c8);
              if (cVar11 != '\0') {
                (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
                Memory::free_static(pOVar16,false);
              }
            }
          }
LAB_0010b560:
          if (local_d8[0] != (Object *)0x0) {
            cVar11 = RefCounted::unreference();
            pOVar16 = local_d8[0];
            if (cVar11 != '\0') {
              cVar11 = predelete_handler(local_d8[0]);
              if (cVar11 != '\0') {
                (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
                Memory::free_static(pOVar16,false);
              }
            }
          }
          if ((StringName::configured != '\0') && (local_e0 != (long *)0x0)) {
            StringName::unref();
          }
          pOVar16 = local_e8;
          if (local_e8 != (Object *)0x0) {
            auVar30._0_8_ = EditorScale::get_scale();
            auVar30._8_8_ = extraout_XMM0_Qb;
            auVar31._4_12_ = auVar30._4_12_;
            auVar31._0_4_ = (float)auVar30._0_8_ * __LC272;
            StyleBox::set_content_margin(auVar31._0_8_,pOVar16,1);
            pOVar16 = local_e8;
            auVar32._0_8_ = EditorScale::get_scale();
            auVar32._8_8_ = extraout_XMM0_Qb_00;
            auVar33._4_12_ = auVar32._4_12_;
            auVar33._0_4_ = (float)auVar32._0_8_ * __LC272;
            StyleBox::set_content_margin(auVar33._0_8_,pOVar16,3);
            Control::add_theme_style_override
                      ((StringName *)this_01,(Ref *)(SceneStringNames::singleton + 600));
          }
          EditorScale::get_scale();
          StringName::StringName((StringName *)&local_c8,"separation",false);
          Control::add_theme_constant_override((StringName *)this_01,(int)(StringName *)&local_c8);
          if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
            StringName::unref();
          }
          if (local_e8 != (Object *)0x0) {
            cVar11 = RefCounted::unreference();
            pOVar16 = local_e8;
            if (cVar11 != '\0') {
              cVar11 = predelete_handler(local_e8);
              if (cVar11 != '\0') {
                (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
                Memory::free_static(pOVar16,false);
              }
            }
          }
          if (pOVar15 != (Object *)0x0) {
            cVar11 = RefCounted::unreference();
            if (cVar11 != '\0') {
              cVar11 = predelete_handler(pOVar15);
              if (cVar11 != '\0') {
                (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                Memory::free_static(pOVar15,false);
              }
            }
          }
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_108);
          Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_110);
        }
        local_1b0 = *(StringName **)(local_1b0 + 8);
      } while (local_1b0 != (StringName *)0x0);
    }
    local_1c8 = (List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_e0;
    local_1b8 = (String *)local_a8;
    local_e0 = (long *)0x0;
    AnimationNodeBlendTree::get_node_connections(*(List **)(this + 0xa10));
    if ((local_e0 != (long *)0x0) &&
       (pSVar26 = (StringName *)*local_e0, pSVar26 != (StringName *)0x0)) {
      do {
        StringName::StringName((StringName *)local_d8,pSVar26 + 0x10);
        StringName::StringName((StringName *)&local_c8,pSVar26);
        GraphEdit::connect_node
                  (*(StringName **)(this + 0xa20),(int)(StringName *)local_d8,(StringName *)0x0,
                   (int)(StringName *)&local_c8,SUB41(*(undefined4 *)(pSVar26 + 8),0));
        if (StringName::configured != '\0') {
          if (local_c8 != (Object *)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010b76c;
          }
          if (local_d8[0] != (Object *)0x0) {
            StringName::unref();
          }
        }
LAB_0010b76c:
        pSVar26 = *(StringName **)(pSVar26 + 0x18);
      } while (pSVar26 != (StringName *)0x0);
    }
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)&local_c8,"editors/visual_editors/minimap_opacity");
    _EDITOR_GET(local_1b8);
    fVar28 = Variant::operator_cast_to_float((Variant *)local_1b8);
    if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    GraphEdit::set_minimap_opacity(fVar28);
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)&local_c8,"editors/visual_editors/lines_curvature");
    _EDITOR_GET(local_1b8);
    fVar28 = Variant::operator_cast_to_float((Variant *)local_1b8);
    if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    GraphEdit::set_connection_lines_curvature(fVar28);
    List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator>::~List(local_1c8);
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_118);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_node_changed(StringName const&) */

void AnimationNodeBlendTreeEditor::_node_changed(StringName *param_1)

{
  update_graph((AnimationNodeBlendTreeEditor *)param_1);
  return;
}



/* AnimationNodeBlendTreeEditor::edit(Ref<AnimationNode> const&) */

void __thiscall AnimationNodeBlendTreeEditor::edit(AnimationNodeBlendTreeEditor *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  AnimationNodeBlendTreeEditor AVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58 [3];
  long local_40;
  
  plVar1 = *(long **)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    if ((*(long *)param_1 != 0) &&
       (lVar8 = __dynamic_cast(*(long *)param_1,&Object::typeinfo,&AnimationNodeBlendTree::typeinfo,
                               0), lVar8 != 0)) {
      *(long *)(this + 0xa10) = lVar8;
      pOVar7 = (Object *)0x0;
LAB_0010d8e5:
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0xa10) = 0;
      }
joined_r0x0010d903:
      if (pOVar7 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        goto joined_r0x0010d97a;
      }
LAB_0010d75e:
      pOVar7 = *(Object **)(this + 0xa10);
      goto LAB_0010d765;
    }
LAB_0010d948:
    this[0xa18] = (AnimationNodeBlendTreeEditor)0x0;
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,StringName_const&>
              ((AnimationNodeBlendTreeEditor *)local_58,(char *)this,
               (_func_void_StringName_ptr *)"&AnimationNodeBlendTreeEditor::_node_changed");
    StringName::StringName((StringName *)&local_60,"node_changed",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,(AnimationNodeBlendTreeEditor *)local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    pOVar7 = *(Object **)(this + 0xa10);
    if (*(long *)param_1 == 0) {
      if (pOVar7 != (Object *)0x0) {
        *(undefined8 *)(this + 0xa10) = 0;
        cVar4 = RefCounted::unreference();
joined_r0x0010d97a:
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        goto LAB_0010d75e;
      }
      goto LAB_0010d948;
    }
    pOVar6 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&AnimationNodeBlendTree::typeinfo,0);
    if (pOVar6 != pOVar7) {
      *(Object **)(this + 0xa10) = pOVar6;
      if (pOVar6 != (Object *)0x0) goto LAB_0010d8e5;
      goto joined_r0x0010d903;
    }
LAB_0010d765:
    this[0xa18] = (AnimationNodeBlendTreeEditor)0x0;
    uVar3 = EditorNode::singleton;
    if (pOVar7 != (Object *)0x0) {
      local_58[0] = (Object *)0x0;
      pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Resource::typeinfo,0);
      if ((pOVar7 != (Object *)0x0) &&
         (local_58[0] = pOVar7, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_58[0] = (Object *)0x0;
      }
      AVar5 = (AnimationNodeBlendTreeEditor)
              EditorNode::is_resource_read_only(uVar3,(AnimationNodeBlendTreeEditor *)local_58,0);
      this[0xa18] = AVar5;
      if (((local_58[0] != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar7 = local_58[0], cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_58[0]), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      plVar1 = *(long **)(this + 0xa10);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,StringName_const&>
                ((AnimationNodeBlendTreeEditor *)local_58,(char *)this,
                 (_func_void_StringName_ptr *)"&AnimationNodeBlendTreeEditor::_node_changed");
      StringName::StringName((StringName *)&local_60,"node_changed",false);
      (*pcVar2)(plVar1,(StringName *)&local_60,(AnimationNodeBlendTreeEditor *)local_58,0);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
      update_graph(this);
      goto LAB_0010d866;
    }
  }
  CanvasItem::hide();
LAB_0010d866:
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    GraphEdit::set_show_arrange_button(SUB81(*(undefined8 *)(this + 0xa20),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_notification(int) */

void AnimationNodeBlendTreeEditor::_notification(int param_1)

{
  long lVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  String *pSVar5;
  Object *pOVar6;
  long lVar7;
  undefined8 in_RDX;
  long lVar8;
  undefined8 in_RSI;
  undefined4 in_register_0000003c;
  AnimationNodeBlendTreeEditor *this;
  long *plVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  float fVar11;
  double dVar12;
  CowData<char32_t> *local_d8;
  String *local_c8;
  Object *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  long local_88;
  CowData<char32_t> local_80 [8];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  Object *local_60;
  undefined8 local_58 [3];
  long local_40;
  
  this = (AnimationNodeBlendTreeEditor *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (int)in_RSI;
  if (iVar4 == 0x1f) {
    CanvasItem::is_visible_in_tree();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process(SUB41(param_1,0));
      return;
    }
    goto LAB_0010e500;
  }
  if (iVar4 < 0x20) {
    if (iVar4 == 10) {
LAB_0010dcd0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_editor_settings(this);
        return;
      }
      goto LAB_0010e500;
    }
    if ((iVar4 == 0x11) &&
       (pSVar2 = *(StringName **)(AnimationTreeEditor::singleton + 0xa20),
       pSVar2 != (StringName *)0x0)) {
      local_a8 = (Object *)0x0;
      cVar3 = AnimationMixer::is_active();
      if (cVar3 == '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1
                  ((String *)&local_70,
                   "AnimationTree is inactive.\nActivate to enable playback, check node warnings if activation fails."
                  );
        TTR((String *)&local_60,(String *)&local_70);
        if (local_a8 != local_60) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          local_a8 = local_60;
          local_60 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      else {
        cVar3 = AnimationTree::is_state_invalid();
        if (cVar3 != '\0') {
          AnimationTree::get_invalid_state_reason();
          if (local_a8 != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            local_a8 = local_60;
            local_60 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
      }
      local_c8 = (String *)&local_a8;
      Label::get_text();
      cVar3 = String::operator!=(local_c8,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar3 != '\0') {
        Label::set_text(*(String **)(this + 0xa48));
        if ((local_a8 == (Object *)0x0) || (*(uint *)(local_a8 + -8) < 2)) {
          CanvasItem::hide();
        }
        else {
          CanvasItem::show();
        }
      }
      local_a0 = (long *)0x0;
      AnimationNodeBlendTree::get_node_connections(*(List **)(this + 0xa10));
      if ((local_a0 != (long *)0x0) && (plVar9 = (long *)*local_a0, plVar9 != (long *)0x0)) {
        do {
          lVar7 = *plVar9;
          if (lVar7 == 0) {
            local_68 = 0;
          }
          else {
            local_68 = 0;
            if (*(char **)(lVar7 + 8) == (char *)0x0) {
              if (*(long *)(lVar7 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar7 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_68,*(char **)(lVar7 + 8));
            }
          }
          AnimationTreeEditor::get_base_path();
          String::operator+((String *)&local_60,(String *)&local_70);
          StringName::StringName((StringName *)&local_78,(String *)&local_60,false);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          cVar3 = AnimationTree::is_state_invalid();
          fVar11 = 0.0;
          if (cVar3 == '\0') {
            fVar11 = (float)AnimationTree::get_connection_activity
                                      (pSVar2,(int)(StringName *)&local_78);
          }
          GraphEdit::set_connection_activity
                    (*(StringName **)(this + 0xa20),(int)plVar9 + 0x10,(StringName *)0x0,(int)plVar9
                     ,fVar11);
          if ((StringName::configured != '\0') && (local_78 != 0)) {
            StringName::unref();
          }
          plVar9 = (long *)plVar9[3];
        } while (plVar9 != (long *)0x0);
      }
      for (puVar10 = *(undefined8 **)(this + 0xa98); puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
        while (((AnimationNodeBlendTree::get_node((StringName *)&local_60),
                local_60 == (Object *)0x0 ||
                (pOVar6 = (Object *)
                          __dynamic_cast(local_60,&Object::typeinfo,
                                         &AnimationNodeAnimation::typeinfo,0),
                pOVar6 == (Object *)0x0)) || (cVar3 = RefCounted::reference(), cVar3 == '\0'))) {
          Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_60);
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) goto LAB_0010df73;
        }
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_60);
        AnimationNodeAnimation::get_animation();
        cVar3 = AnimationMixer::has_animation(pSVar2);
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          AnimationNodeAnimation::get_animation();
          AnimationMixer::get_animation((StringName *)&local_98);
          if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
            StringName::unref();
          }
          if (local_98 != 0) {
            local_68 = 0;
            String::parse_latin1((String *)&local_68,"/current_length");
            lVar7 = puVar10[2];
            if (lVar7 == 0) {
              local_78 = 0;
            }
            else {
              local_78 = 0;
              if (*(char **)(lVar7 + 8) == (char *)0x0) {
                if (*(long *)(lVar7 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar7 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)&local_78,*(char **)(lVar7 + 8));
              }
            }
            local_d8 = (CowData<char32_t> *)&local_78;
            AnimationTreeEditor::get_base_path();
            String::operator+((String *)&local_70,(String *)local_80);
            String::operator+((String *)&local_60,(String *)&local_70);
            StringName::StringName((StringName *)&local_90,(String *)&local_60,false);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref(local_80);
            CowData<char32_t>::_unref(local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            local_68 = 0;
            String::parse_latin1((String *)&local_68,"/current_position");
            lVar7 = puVar10[2];
            if (lVar7 == 0) {
              local_78 = 0;
            }
            else {
              local_78 = 0;
              if (*(char **)(lVar7 + 8) == (char *)0x0) {
                if (*(long *)(lVar7 + 0x10) != 0) {
                  CowData<char32_t>::_ref(local_d8,(CowData *)(lVar7 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)local_d8,*(char **)(lVar7 + 8));
              }
            }
            AnimationTreeEditor::get_base_path();
            String::operator+((String *)&local_70,(String *)local_80);
            String::operator+((String *)&local_60,(String *)&local_70);
            StringName::StringName((StringName *)&local_88,(String *)&local_60,false);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref(local_80);
            CowData<char32_t>::_unref(local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            Object::get((StringName *)local_58,(bool *)pSVar2);
            dVar12 = Variant::operator_cast_to_double((Variant *)local_58);
            Range::set_max(dVar12);
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Object::get((StringName *)local_58,(bool *)pSVar2);
            dVar12 = Variant::operator_cast_to_double((Variant *)local_58);
            Range::set_value(dVar12);
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') &&
               (((local_88 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                (local_90 != 0)))) {
              StringName::unref();
            }
          }
          Ref<Animation>::unref((Ref<Animation> *)&local_98);
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
LAB_0010df73:
      lVar7 = *(long *)(this + 0xab8);
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          if (*(long *)(lVar7 + -8) <= lVar8) break;
          lVar1 = lVar8 * 8;
          lVar8 = lVar8 + 1;
          (**(code **)(**(long **)(lVar7 + lVar1) + 0x380))();
          lVar7 = *(long *)(this + 0xab8);
        } while (lVar7 != 0);
      }
      List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator>::~List
                ((List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    }
  }
  else if (iVar4 == 0x2d) {
    pSVar2 = *(StringName **)(this + 0xa40);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                    in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_60,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_60 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar6 = local_60, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    pSVar2 = *(StringName **)(this + 0xa48);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    local_58[0] = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_notification(int)::{lambda()#2}::operator()()::sname);
    Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
    cVar3 = CanvasItem::is_visible_in_tree();
    if (cVar3 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        update_graph(this);
        return;
      }
      goto LAB_0010e500;
    }
  }
  else if (iVar4 == 10000) {
    pSVar5 = (String *)EditorSettings::get_singleton();
    local_60 = (Object *)0x0;
    String::parse_latin1((String *)&local_60,"editors/panning");
    cVar3 = EditorSettings::check_changed_settings_in_group(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_0010dcd0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e500:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_node_renamed(String const&, Ref<AnimationNode>) */

void AnimationNodeBlendTreeEditor::_node_renamed
               (AnimationNodeBlendTreeEditor *param_1,String *param_2)

{
  Variant *pVVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  NodePath *pNVar6;
  undefined8 uVar7;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  code *pcVar29;
  char cVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  String *pSVar34;
  Object *pOVar35;
  Variant *pVVar36;
  StringName *pSVar37;
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  long *plVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  Variant *pVVar50;
  long in_FS_OFFSET;
  bool bVar51;
  String *local_138;
  String *local_118;
  long local_e8;
  undefined *local_e0;
  String local_d8 [8];
  undefined8 local_d0;
  undefined8 *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_88 [3];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xa10) == 0) || (*(long *)(AnimationTreeEditor::singleton + 0xa20) == 0))
  goto LAB_0010e60a;
  AnimationNodeBlendTree::get_node_name((NodePath *)&local_b8);
  if (local_b8 == (undefined *)0x0) {
    local_e8 = 0;
LAB_0010e5da:
    _err_print_error("_node_renamed","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x424,
                     "Condition \"prev_name.is_empty()\" is true.",0,0);
  }
  else {
    local_e8 = 0;
    if (*(char **)(local_b8 + 8) == (char *)0x0) {
      if (*(long *)(local_b8 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(local_b8 + 0x10));
        goto LAB_0010e5ae;
      }
      if (StringName::configured == '\0') goto LAB_0010e5da;
LAB_0010e5c2:
      StringName::unref();
    }
    else {
      String::parse_latin1((String *)&local_e8,*(char **)(local_b8 + 8));
LAB_0010e5ae:
      if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) goto LAB_0010e5c2;
    }
    local_138 = (String *)&local_e8;
    if ((local_e8 == 0) || (*(uint *)(local_e8 + -8) < 2)) goto LAB_0010e5da;
    pNVar6 = *(NodePath **)(param_1 + 0xa20);
    NodePath::NodePath((NodePath *)&local_b8,local_138);
    lVar33 = Node::get_node(pNVar6);
    if (lVar33 == 0) {
      NodePath::~NodePath((NodePath *)&local_b8);
LAB_0010f338:
      _err_print_error("_node_renamed","editor/plugins/animation_blend_tree_editor_plugin.cpp",0x426
                       ,"Parameter \"gn\" is null.",0,0);
    }
    else {
      pSVar34 = (String *)__dynamic_cast(lVar33,&Object::typeinfo,&GraphNode::typeinfo,0);
      NodePath::~NodePath((NodePath *)&local_b8);
      if (pSVar34 == (String *)0x0) goto LAB_0010f338;
      if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
LAB_0010e6a4:
        _err_print_error("_node_renamed","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                         0x42a,
                         "Condition \"new_name.is_empty() || new_name.contains_char(\'.\') || new_name.contains_char(\'/\')\" is true."
                         ,0,0);
      }
      else {
        iVar31 = String::find_char((wchar32)param_2,0x2e);
        if ((iVar31 != -1) || (iVar31 = String::find_char((wchar32)param_2,0x2f), iVar31 != -1))
        goto LAB_0010e6a4;
        cVar30 = String::operator==(param_2,local_138);
        if (cVar30 == '\0') {
          local_e0 = (undefined *)0x0;
          if (*(long *)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)param_2);
          }
          while( true ) {
            pSVar37 = *(StringName **)(param_1 + 0xa10);
            StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
            cVar30 = AnimationNodeBlendTree::has_node(pSVar37);
            if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
              StringName::unref();
            }
            if (cVar30 == '\0') break;
            itos((long)&local_c0);
            local_d0 = 0;
            local_b8 = &_LC152;
            local_b0 = 1;
            String::parse_latin1((StrRange *)&local_d0);
            String::operator+((String *)&local_c8,param_2);
            String::operator+((String *)&local_b8,(String *)&local_c8);
            if (local_e0 != local_b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_b8;
              local_b8 = (undefined *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
          AnimationTreeEditor::get_base_path();
          param_1[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
          pOVar35 = (Object *)EditorUndoRedoManager::get_singleton();
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"");
          local_c8 = (undefined8 *)0x0;
          String::parse_latin1((String *)&local_c8,"Node Renamed");
          TTR((String *)&local_b8,(String *)&local_c8);
          EditorUndoRedoManager::create_action(pOVar35,(NodePath *)&local_b8,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_b8 = (undefined *)0x0;
          if (local_e0 != (undefined *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e0);
          }
          local_c0 = 0;
          if (local_e8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)local_138);
          }
          StringName::StringName((StringName *)&local_c8,"rename_node",false);
          pSVar37 = *(StringName **)(param_1 + 0xa10);
          Variant::Variant((Variant *)local_88,(String *)&local_c0);
          Variant::Variant(local_70,(String *)&local_b8);
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          local_a8 = (Variant *)local_88;
          pVStack_a0 = local_70;
          EditorUndoRedoManager::add_do_methodp
                    (pOVar35,pSVar37,(Variant **)&local_c8,(int)&local_a8);
          pVVar50 = (Variant *)local_40;
          pVVar36 = pVVar50;
          do {
            pVVar1 = pVVar36 + -0x18;
            pVVar36 = pVVar36 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar36 != (Variant *)local_88);
          if ((StringName::configured != '\0') && (local_c8 != (undefined8 *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          local_b8 = (undefined *)0x0;
          if (local_e8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_138);
          }
          local_c0 = 0;
          if (local_e0 != (undefined *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_e0);
          }
          StringName::StringName((StringName *)&local_c8,"rename_node",false);
          pSVar37 = *(StringName **)(param_1 + 0xa10);
          Variant::Variant((Variant *)local_88,(String *)&local_c0);
          Variant::Variant(local_70,(String *)&local_b8);
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          local_a8 = (Variant *)local_88;
          pVStack_a0 = local_70;
          EditorUndoRedoManager::add_undo_methodp
                    (pOVar35,pSVar37,(Variant **)&local_c8,(int)&local_a8);
          do {
            pVVar36 = pVVar50 + -0x18;
            pVVar50 = pVVar50 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar36] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar50 != (Variant *)local_88);
          if ((StringName::configured != '\0') && (local_c8 != (undefined8 *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          StringName::StringName((StringName *)&local_b8,"update_graph",false);
          EditorUndoRedoManager::add_do_method<>
                    ((EditorUndoRedoManager *)pOVar35,(Object *)param_1,(StringName *)&local_b8);
          if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_b8,"update_graph",false);
          EditorUndoRedoManager::add_undo_method<>
                    ((EditorUndoRedoManager *)pOVar35,(Object *)param_1,(StringName *)&local_b8);
          if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
            StringName::unref();
          }
          EditorUndoRedoManager::commit_action(SUB81(pOVar35,0));
          param_1[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
          Node::set_name(pSVar34);
          local_88[0] = (**(code **)(*(long *)pSVar34 + 0x2f8))(pSVar34);
          Control::set_size((Vector2 *)pSVar34,SUB81((Variant *)local_88,0));
          lVar33 = *(long *)(param_1 + 0xab8);
          for (lVar48 = 0;
              (lVar33 != 0 && (local_118 = (String *)&local_d0, lVar48 < *(long *)(lVar33 + -8)));
              lVar48 = lVar48 + 1) {
            EditorProperty::get_edited_property();
            if (local_b8 == (undefined *)0x0) {
              local_d0 = 0;
            }
            else {
              local_d0 = 0;
              if (*(char **)((long)local_b8 + 8) == (char *)0x0) {
                if (*(long *)((long)local_b8 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)local_118,(CowData *)((long)local_b8 + 0x10));
                  goto LAB_0010ec56;
                }
                if (StringName::configured == '\0') goto LAB_0010ec72;
              }
              else {
                String::parse_latin1(local_118,*(char **)((long)local_b8 + 8));
LAB_0010ec56:
                if ((StringName::configured == '\0') || (local_b8 == (undefined *)0x0))
                goto LAB_0010ec72;
              }
              StringName::unref();
            }
LAB_0010ec72:
            String::operator+((String *)&local_b8,local_d8);
            cVar30 = String::begins_with((String *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            if (cVar30 != '\0') {
              String::operator+((String *)&local_b8,local_d8);
              String::operator+((String *)&local_c0,local_d8);
              String::replace_first((String *)&local_c8,(String *)&local_d0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              lVar33 = *(long *)(param_1 + 0xab8);
              if (lVar33 != 0) {
                lVar41 = *(long *)(lVar33 + -8);
                if (lVar41 <= lVar48) goto LAB_0010ee23;
                pOVar35 = *(Object **)(lVar33 + lVar48 * 8);
                StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
                if (*(long *)(param_1 + 0xab8) != 0) {
                  lVar41 = *(long *)(*(long *)(param_1 + 0xab8) + -8);
                  if (lVar41 <= lVar48) goto LAB_0010ee23;
                  pSVar37 = (StringName *)EditorProperty::get_edited_object();
                  EditorProperty::set_object_and_property(pOVar35,pSVar37);
                  if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  goto LAB_0010ed7a;
                }
              }
              lVar41 = 0;
LAB_0010ee23:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar48,lVar41,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar29 = (code *)invalidInstructionException();
              (*pcVar29)();
            }
LAB_0010ed7a:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            lVar33 = *(long *)(param_1 + 0xab8);
          }
          GraphEdit::clear_connections();
          local_c8 = (undefined8 *)0x0;
          AnimationNodeBlendTree::get_node_connections(*(List **)(param_1 + 0xa10));
          if (local_c8 != (undefined8 *)0x0) {
            for (pSVar37 = (StringName *)*local_c8; pSVar37 != (StringName *)0x0;
                pSVar37 = *(StringName **)(pSVar37 + 0x18)) {
              StringName::StringName((StringName *)&local_c0,pSVar37 + 0x10);
              StringName::StringName((StringName *)&local_b8,pSVar37);
              GraphEdit::connect_node
                        (*(StringName **)(param_1 + 0xa20),(int)(CowData<char32_t> *)&local_c0,
                         (StringName *)0x0,(int)(NodePath *)&local_b8,
                         SUB41(*(undefined4 *)(pSVar37 + 8),0));
              if ((StringName::configured != '\0') &&
                 (((local_b8 == (undefined *)0x0 ||
                   (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))) {
                StringName::unref();
              }
            }
          }
          for (puVar38 = *(undefined8 **)(param_1 + 0xa98); puVar38 != (undefined8 *)0x0;
              puVar38 = (undefined8 *)*puVar38) {
            cVar30 = StringName::operator==((StringName *)(puVar38 + 2),local_138);
            if (cVar30 != '\0') {
              StringName::StringName((StringName *)&local_b8,local_138,false);
              puVar38 = (undefined8 *)
                        HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
                        ::operator[]((HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
                                      *)(param_1 + 0xa80),(StringName *)&local_b8);
              uVar7 = *puVar38;
              StringName::StringName((StringName *)&local_c0,param_2,false);
              puVar38 = (undefined8 *)
                        HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
                        ::operator[]((HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
                                      *)(param_1 + 0xa80),(StringName *)&local_c0);
              bVar51 = StringName::configured != '\0';
              *puVar38 = uVar7;
              if (((bVar51) &&
                  ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
                 (local_b8 != (undefined *)0x0)) {
                StringName::unref();
              }
              StringName::StringName((StringName *)&local_b8,local_138,false);
              if ((*(long *)(param_1 + 0xa88) == 0) || (*(int *)(param_1 + 0xaac) == 0))
              goto LAB_0010f260;
              uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xaa8) * 4);
              uVar47 = CONCAT44(0,uVar5);
              lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xaa8) * 8)
              ;
              if (local_b8 == (undefined *)0x0) {
                uVar32 = StringName::get_empty_hash();
              }
              else {
                uVar32 = *(uint *)((long)local_b8 + 0x20);
              }
              lVar48 = *(long *)(param_1 + 0xa90);
              uVar40 = 1;
              if (uVar32 != 0) {
                uVar40 = uVar32;
              }
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar40 * lVar33;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar47;
              lVar41 = SUB168(auVar9 * auVar19,8);
              uVar32 = *(uint *)(lVar48 + lVar41 * 4);
              uVar39 = SUB164(auVar9 * auVar19,8);
              if (uVar32 == 0) goto LAB_0010f260;
              uVar44 = 0;
              goto LAB_0010f0c2;
            }
          }
LAB_0010f27c:
          update_graph(param_1);
          local_b8 = (undefined *)0x0;
          if (*(long *)(param_1 + 0xae8) != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0xae8));
            *(undefined8 *)(param_1 + 0xae8) = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator>::~List
                    ((List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
          goto LAB_0010e60a;
        }
      }
    }
  }
  local_138 = (String *)&local_e8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
LAB_0010e60a:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0010f0c2:
  uVar43 = (ulong)uVar39;
  if ((uVar40 != uVar32) ||
     (lVar8 = *(long *)(param_1 + 0xa88),
     (undefined *)*(long *)(*(long *)(lVar8 + lVar41 * 8) + 0x10) != local_b8)) goto LAB_0010f078;
  lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xaa8) * 8);
  uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xaa8) * 4);
  uVar49 = CONCAT44(0,uVar5);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(uVar39 + 1) * lVar33;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar49;
  uVar42 = SUB168(auVar13 * auVar23,8);
  puVar45 = (uint *)(lVar48 + uVar42 * 4);
  uVar40 = SUB164(auVar13 * auVar23,8);
  uVar47 = (ulong)uVar40;
  uVar32 = *puVar45;
  if ((uVar32 != 0) &&
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar32 * lVar33, auVar24._8_8_ = 0,
     auVar24._0_8_ = uVar49, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar5 + uVar40) - SUB164(auVar14 * auVar24,8)) * lVar33,
     auVar25._8_8_ = 0, auVar25._0_8_ = uVar49, SUB164(auVar15 * auVar25,8) != 0)) {
    while( true ) {
      puVar2 = (uint *)(lVar48 + uVar43 * 4);
      *puVar45 = *puVar2;
      puVar38 = (undefined8 *)(lVar8 + uVar42 * 8);
      *puVar2 = uVar32;
      puVar3 = (undefined8 *)(lVar8 + uVar43 * 8);
      uVar7 = *puVar38;
      *puVar38 = *puVar3;
      *puVar3 = uVar7;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)((int)uVar47 + 1) * lVar33;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar49;
      uVar42 = SUB168(auVar18 * auVar28,8);
      puVar45 = (uint *)(lVar48 + uVar42 * 4);
      uVar32 = *puVar45;
      uVar43 = uVar47;
      if ((uVar32 == 0) ||
         (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar32 * lVar33, auVar26._8_8_ = 0,
         auVar26._0_8_ = uVar49, auVar17._8_8_ = 0,
         auVar17._0_8_ =
              (ulong)((SUB164(auVar18 * auVar28,8) + uVar5) - SUB164(auVar16 * auVar26,8)) * lVar33,
         auVar27._8_8_ = 0, auVar27._0_8_ = uVar49, SUB164(auVar17 * auVar27,8) == 0)) break;
      uVar47 = uVar42 & 0xffffffff;
    }
  }
  *(undefined4 *)(lVar48 + uVar43 * 4) = 0;
  plVar4 = (long *)(lVar8 + uVar43 * 8);
  plVar46 = (long *)*plVar4;
  if (*(long **)(param_1 + 0xa98) == plVar46) {
    *(long *)(param_1 + 0xa98) = *plVar46;
    plVar46 = (long *)*plVar4;
  }
  if (*(long **)(param_1 + 0xaa0) == plVar46) {
    *(long *)(param_1 + 0xaa0) = plVar46[1];
    plVar46 = (long *)*plVar4;
  }
  if ((long *)plVar46[1] != (long *)0x0) {
    *(long *)plVar46[1] = *plVar46;
    plVar46 = (long *)*plVar4;
  }
  if (*plVar46 != 0) {
    *(long *)(*plVar46 + 8) = plVar46[1];
    plVar46 = (long *)*plVar4;
  }
  if ((StringName::configured != '\0') && (plVar46[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar46,false);
  *(undefined8 *)(*(long *)(param_1 + 0xa88) + uVar43 * 8) = 0;
  *(int *)(param_1 + 0xaac) = *(int *)(param_1 + 0xaac) + -1;
LAB_0010f260:
  if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
    StringName::unref();
  }
  goto LAB_0010f27c;
LAB_0010f078:
  uVar44 = uVar44 + 1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)(uVar39 + 1) * lVar33;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar47;
  lVar41 = SUB168(auVar10 * auVar20,8);
  uVar32 = *(uint *)(lVar48 + lVar41 * 4);
  uVar39 = SUB164(auVar10 * auVar20,8);
  if ((uVar32 == 0) ||
     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar32 * lVar33, auVar21._8_8_ = 0,
     auVar21._0_8_ = uVar47, auVar12._8_8_ = 0,
     auVar12._0_8_ = (ulong)((uVar5 + uVar39) - SUB164(auVar11 * auVar21,8)) * lVar33,
     auVar22._8_8_ = 0, auVar22._0_8_ = uVar47, SUB164(auVar12 * auVar22,8) < uVar44))
  goto LAB_0010f260;
  goto LAB_0010f0c2;
}



/* AnimationNodeBlendTreeEditor::_node_renamed_focus_out(Ref<AnimationNode>) */

void __thiscall
AnimationNodeBlendTreeEditor::_node_renamed_focus_out
          (AnimationNodeBlendTreeEditor *this,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xae8) != 0) && (1 < *(uint *)(*(long *)(this + 0xae8) + -8))) {
    local_28 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_28,(Ref *)*param_2);
    _node_renamed(this,this + 0xae8,&local_28);
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_28;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
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



/* AnimationNodeBlendTreeEditor::_update_filters(Ref<AnimationNode> const&) */

undefined8 __thiscall
AnimationNodeBlendTreeEditor::_update_filters(AnimationNodeBlendTreeEditor *this,Ref *param_1)

{
  int *piVar1;
  uint uVar2;
  NodePath *pNVar3;
  Object *pOVar4;
  void *pvVar5;
  void *pvVar6;
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
  undefined8 uVar26;
  undefined4 *puVar27;
  char cVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  NodePath *pNVar32;
  RBSet<String,Comparator<String>,DefaultAllocator> *this_00;
  Element *pEVar33;
  Element *pEVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  String *pSVar38;
  Element *pEVar39;
  undefined4 *puVar40;
  undefined8 uVar41;
  undefined1 (*pauVar42) [16];
  CowData<char32_t> *pCVar43;
  Element *pEVar44;
  uint uVar45;
  long lVar46;
  int *piVar47;
  CowData<char32_t> *pCVar48;
  int iVar49;
  undefined8 *puVar50;
  ulong uVar51;
  int iVar52;
  uint uVar53;
  long in_FS_OFFSET;
  bool bVar54;
  CowData *local_1b0;
  String *local_1a8;
  long local_150;
  CowData<char32_t> *local_148;
  int local_134;
  CowData<char32_t> *local_120;
  Object *local_118;
  long local_110;
  char *local_108;
  undefined1 (*local_100) [16];
  Object *local_f8;
  size_t local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  char *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((this[0xaf0] == (AnimationNodeBlendTreeEditor)0x0) &&
      (*(long *)(this + 0xaf8) == *(long *)param_1)) &&
     (pNVar3 = *(NodePath **)(AnimationTreeEditor::singleton + 0xa20), pNVar3 != (NodePath *)0x0)) {
    AnimationMixer::get_root_node();
    pNVar32 = (NodePath *)Node::get_node(pNVar3);
    NodePath::~NodePath((NodePath *)&local_88);
    pSVar38 = EditorNode::singleton;
    if (pNVar32 != (NodePath *)0x0) {
      local_e8 = (undefined1  [16])0x0;
      this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
      local_120 = (CowData<char32_t> *)0x0;
      local_c8 = _LC174;
      local_90 = _LC174;
      local_d8 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
      local_a0 = (undefined1  [16])0x0;
      AnimationMixer::get_animation_list((List *)pNVar3);
      local_148 = local_120;
      if ((local_120 == (CowData<char32_t> *)0x0) ||
         (local_148 = *(CowData<char32_t> **)local_120, local_148 == (CowData<char32_t> *)0x0)) {
        local_134 = 0;
      }
      else {
        do {
          AnimationMixer::get_animation((StringName *)&local_118);
          for (iVar49 = 0; iVar29 = Animation::get_track_count(), iVar49 < iVar29;
              iVar49 = iVar49 + 1) {
            Animation::track_get_path((int)(NodePath *)&local_88);
            NodePath::operator_cast_to_String((NodePath *)&local_110);
            NodePath::~NodePath((NodePath *)&local_88);
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                      ((String *)&local_88);
            local_108 = (char *)0x0;
            cVar28 = Animation::track_get_type((int)local_118);
            if (cVar28 == '\a') {
              local_f8 = (Object *)0x0;
              local_88 = "";
              auVar25._8_8_ = 0;
              auVar25._0_8_ = local_80._8_8_;
              local_80 = auVar25 << 0x40;
              String::parse_latin1((StrRange *)&local_f8);
              local_88 = "Audio Clips";
              local_80._0_8_ = 0xb;
LAB_0010f74e:
              local_100 = (undefined1 (*) [16])0x0;
              String::parse_latin1((StrRange *)&local_100);
              TTR((String *)&local_88,(String *)&local_100);
              if (local_108 != local_88) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                local_108 = local_88;
                local_88 = (char *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            }
            else {
              if (cVar28 == '\b') {
                local_f8 = (Object *)0x0;
                local_88 = "";
                auVar24._8_8_ = 0;
                auVar24._0_8_ = local_80._8_8_;
                local_80 = auVar24 << 0x40;
                String::parse_latin1((StrRange *)&local_f8);
                local_88 = "Anim Clips";
                local_80._0_8_ = 10;
                goto LAB_0010f74e;
              }
              if (cVar28 == '\x05') {
                local_f8 = (Object *)0x0;
                local_88 = "";
                auVar23._8_8_ = 0;
                auVar23._0_8_ = local_80._8_8_;
                local_80 = auVar23 << 0x40;
                String::parse_latin1((StrRange *)&local_f8);
                local_88 = "Functions";
                local_80._0_8_ = 9;
                goto LAB_0010f74e;
              }
            }
            if ((local_108 != (char *)0x0) && (1 < *(uint *)(local_108 + -8))) {
              this_00 = (RBSet<String,Comparator<String>,DefaultAllocator> *)
                        HashMap<String,RBSet<String,Comparator<String>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,Comparator<String>,DefaultAllocator>>>>
                        ::operator[]((HashMap<String,RBSet<String,Comparator<String>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,Comparator<String>,DefaultAllocator>>>>
                                      *)&local_b8,(String *)&local_110);
              puVar40 = *(undefined4 **)this_00;
              if (puVar40 == (undefined4 *)0x0) {
                puVar40 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
                *(undefined1 (*) [16])(puVar40 + 8) = (undefined1  [16])0x0;
                uVar41 = *(undefined8 *)(this_00 + 8);
                *(undefined8 *)(puVar40 + 0xc) = 0;
                *(undefined4 **)this_00 = puVar40;
                *puVar40 = 1;
                *(undefined8 *)(puVar40 + 2) = uVar41;
                *(undefined8 *)(puVar40 + 4) = uVar41;
                *(undefined8 *)(puVar40 + 6) = uVar41;
              }
              else {
                puVar27 = *(undefined4 **)(puVar40 + 4);
                if (*(undefined4 **)(puVar40 + 4) != *(undefined4 **)(this_00 + 8)) {
                  do {
                    while( true ) {
                      puVar40 = puVar27;
                      cVar28 = String::operator<((String *)&local_108,(String *)(puVar40 + 0xc));
                      if (cVar28 != '\0') break;
                      cVar28 = String::operator<((String *)(puVar40 + 0xc),(String *)&local_108);
                      if (cVar28 == '\0') goto LAB_0010f640;
                      puVar27 = *(undefined4 **)(puVar40 + 2);
                      if (*(undefined4 **)(this_00 + 8) == *(undefined4 **)(puVar40 + 2))
                      goto LAB_0010f85e;
                    }
                    puVar27 = *(undefined4 **)(puVar40 + 4);
                  } while (*(undefined4 **)(this_00 + 8) != *(undefined4 **)(puVar40 + 4));
                }
              }
LAB_0010f85e:
              pEVar33 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
              *(undefined1 (*) [16])(pEVar33 + 0x20) = (undefined1  [16])0x0;
              uVar41 = *(undefined8 *)(this_00 + 8);
              *(undefined8 *)(pEVar33 + 0x30) = 0;
              *(undefined4 *)pEVar33 = 0;
              *(undefined4 **)(pEVar33 + 0x18) = puVar40;
              *(undefined8 *)(pEVar33 + 8) = uVar41;
              *(undefined8 *)(pEVar33 + 0x10) = uVar41;
              if (local_108 != (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(pEVar33 + 0x30),(CowData *)&local_108)
                ;
              }
              if ((puVar40 == *(undefined4 **)this_00) ||
                 (cVar28 = String::operator<((String *)&local_108,(String *)(puVar40 + 0xc)),
                 cVar28 != '\0')) {
                *(Element **)(puVar40 + 4) = pEVar33;
              }
              else {
                *(Element **)(puVar40 + 2) = pEVar33;
              }
              pEVar44 = *(Element **)(pEVar33 + 8);
              pEVar39 = pEVar33;
              if (*(Element **)(this_00 + 8) == pEVar44) {
                do {
                  pEVar34 = *(Element **)(pEVar39 + 0x18);
                  bVar54 = pEVar39 == *(Element **)(pEVar34 + 8);
                  pEVar39 = pEVar34;
                } while (bVar54);
                if (*(Element **)this_00 == pEVar34) {
                  pEVar34 = (Element *)0x0;
                }
              }
              else {
                do {
                  pEVar39 = pEVar44 + 0x10;
                  pEVar34 = pEVar44;
                  pEVar44 = *(Element **)pEVar39;
                } while (*(Element **)(this_00 + 8) != *(Element **)pEVar39);
              }
              *(Element **)(pEVar33 + 0x20) = pEVar34;
              pEVar44 = pEVar33;
              pEVar39 = *(Element **)(pEVar33 + 0x10);
              if (*(Element **)(this_00 + 8) == *(Element **)(pEVar33 + 0x10)) {
                do {
                  pEVar39 = pEVar44;
                  pEVar44 = *(Element **)(pEVar39 + 0x18);
                } while (pEVar39 == *(Element **)(pEVar44 + 0x10));
                if (*(Element **)this_00 != pEVar39) goto LAB_0010f91c;
                *(undefined8 *)(pEVar33 + 0x28) = 0;
                if (pEVar34 != (Element *)0x0) goto LAB_0010f925;
              }
              else {
                do {
                  pEVar44 = pEVar39;
                  pEVar39 = *(Element **)(pEVar44 + 8);
                } while (*(Element **)(this_00 + 8) != *(Element **)(pEVar44 + 8));
LAB_0010f91c:
                *(Element **)(pEVar33 + 0x28) = pEVar44;
                if (pEVar34 != (Element *)0x0) {
LAB_0010f925:
                  *(Element **)(pEVar34 + 0x28) = pEVar33;
                  pEVar44 = *(Element **)(pEVar33 + 0x28);
                  if (pEVar44 == (Element *)0x0) goto LAB_0010f936;
                }
                *(Element **)(pEVar44 + 0x20) = pEVar33;
              }
LAB_0010f936:
              *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
              RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(this_00,pEVar33);
            }
LAB_0010f640:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          }
          if (((local_118 != (Object *)0x0) &&
              (cVar28 = RefCounted::unreference(), pOVar4 = local_118, cVar28 != '\0')) &&
             (cVar28 = predelete_handler(local_118), cVar28 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          local_148 = *(CowData<char32_t> **)(local_148 + 8);
        } while (local_148 != (CowData<char32_t> *)0x0);
        local_134 = local_c8._4_4_;
        local_148 = (CowData<char32_t> *)local_e8._0_8_;
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_120);
      uVar41 = *(undefined8 *)(this + 0xa60);
      AnimationNode::is_filter_enabled();
      BaseButton::set_pressed(SUB81(uVar41,0));
      Tree::clear();
      iVar49 = Tree::create_item(*(TreeItem **)(this + 0xa58),0);
      local_80 = (undefined1  [16])0x0;
      local_60 = _LC174;
      local_70 = (undefined1  [16])0x0;
      if (local_134 != 0) {
        local_150 = 0;
LAB_0010fb48:
        NodePath::NodePath((NodePath *)&local_118,(String *)(local_148 + local_150 * 8));
        iVar29 = 0;
        lVar36 = 0;
        local_110 = 0;
        while( true ) {
          iVar30 = NodePath::get_name_count();
          iVar52 = (int)lVar36;
          if (iVar30 <= iVar29) break;
          NodePath::get_name((int)(StrRange *)&local_100);
          if (local_100 == (undefined1 (*) [16])0x0) {
            local_108 = (char *)0x0;
          }
          else {
            pOVar4 = *(Object **)(*local_100 + 8);
            local_108 = (char *)0x0;
            if (pOVar4 == (Object *)0x0) {
              if (*(long *)local_100[1] != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)(local_100 + 1));
                goto LAB_0010fc0e;
              }
              if (StringName::configured == '\0') goto LAB_0010fc2c;
            }
            else {
              local_f0 = strlen((char *)pOVar4);
              local_f8 = pOVar4;
              String::parse_latin1((StrRange *)&local_108);
LAB_0010fc0e:
              if ((StringName::configured == '\0') || (local_100 == (undefined1 (*) [16])0x0))
              goto LAB_0010fc2c;
            }
            StringName::unref();
          }
LAB_0010fc2c:
          local_1a8 = (String *)&local_108;
          if ((local_110 != 0) && (1 < *(uint *)(local_110 + -8))) {
            String::operator+=((String *)&local_110,"/");
          }
          String::operator+=((String *)&local_110,local_1a8);
          uVar41 = local_80._0_8_;
          if ((local_80._0_8_ != 0) && (local_60._4_4_ != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
            lVar37 = *(long *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
            uVar31 = String::hash();
            uVar51 = CONCAT44(0,uVar2);
            uVar26 = local_80._8_8_;
            uVar45 = 1;
            if (uVar31 != 0) {
              uVar45 = uVar31;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar45 * lVar37;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar51;
            lVar46 = SUB168(auVar7 * auVar15,8);
            uVar31 = *(uint *)(local_80._8_8_ + lVar46 * 4);
            iVar30 = SUB164(auVar7 * auVar15,8);
            if (uVar31 != 0) {
              uVar53 = 0;
              do {
                if ((uVar45 == uVar31) &&
                   (cVar28 = String::operator==((String *)(*(long *)(uVar41 + lVar46 * 8) + 0x10),
                                                (String *)&local_110), cVar28 != '\0')) {
                  plVar35 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                    ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                                  *)&local_88,(String *)&local_110);
                  lVar36 = *plVar35;
                  goto LAB_0010fd9b;
                }
                uVar53 = uVar53 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(iVar30 + 1) * lVar37;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar51;
                lVar46 = SUB168(auVar8 * auVar16,8);
                uVar31 = *(uint *)(uVar26 + lVar46 * 4);
                iVar30 = SUB164(auVar8 * auVar16,8);
              } while ((uVar31 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar31 * lVar37, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar51, auVar10._8_8_ = 0,
                      auVar10._0_8_ =
                           (ulong)((uVar2 + iVar30) - SUB164(auVar9 * auVar17,8)) * lVar37,
                      auVar18._8_8_ = 0, auVar18._0_8_ = uVar51,
                      uVar53 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          if (lVar36 == 0) {
            lVar36 = Tree::create_item(*(TreeItem **)(this + 0xa58),iVar49);
          }
          else {
            lVar36 = Tree::create_item(*(TreeItem **)(this + 0xa58),iVar52);
          }
          plVar35 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                            ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                          *)&local_88,(String *)&local_110);
          *plVar35 = lVar36;
          local_f8 = (Object *)0x0;
          if (local_108 != (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)local_1a8);
          }
          TreeItem::set_text(lVar36,0,(NodePath *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          iVar30 = (int)lVar36;
          TreeItem::set_selectable(iVar30,false);
          TreeItem::set_editable(iVar30,false);
          NodePath::NodePath((NodePath *)&local_f8,(String *)&local_110);
          cVar28 = Node::has_node(pNVar32);
          NodePath::~NodePath((NodePath *)&local_f8);
          if (cVar28 != '\0') {
            NodePath::NodePath((NodePath *)&local_f8,(String *)&local_110);
            Node::get_node(pNVar32);
            NodePath::~NodePath((NodePath *)&local_f8);
            pSVar38 = EditorNode::singleton;
            local_100 = (undefined1 (*) [16])0x0;
            local_f8 = (Object *)&_LC42;
            local_f0 = 4;
            String::parse_latin1((StrRange *)&local_100);
            EditorNode::get_object_icon((Object *)&local_f8,pSVar38);
            TreeItem::set_icon(iVar30,(Ref *)0x0);
            if (((local_f8 != (Object *)0x0) &&
                (cVar28 = RefCounted::unreference(), pOVar4 = local_f8, cVar28 != '\0')) &&
               (cVar28 = predelete_handler(local_f8), cVar28 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          }
LAB_0010fd9b:
          CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
          iVar29 = iVar29 + 1;
        }
        NodePath::NodePath((NodePath *)&local_f8,(String *)&local_110);
        cVar28 = Node::has_node(pNVar32);
        NodePath::~NodePath((NodePath *)&local_f8);
        if (cVar28 != '\0') {
          NodePath::NodePath((NodePath *)&local_f8,(String *)&local_110);
          lVar37 = Node::get_node(pNVar32);
          NodePath::~NodePath((NodePath *)&local_f8);
          if (lVar37 == 0) goto LAB_001103b6;
          iVar29 = NodePath::get_subname_count();
          if (iVar29 == 0) {
            if (lVar36 == 0) goto LAB_001103b6;
            local_1b0 = (CowData *)&local_100;
            local_100 = (undefined1 (*) [16])0x0;
            String::parse_latin1((String *)local_1b0,"[");
            NodePath::operator_cast_to_String((NodePath *)&local_f8);
            uVar41 = local_b0._0_8_;
            if ((local_b0._0_8_ == 0) || (local_90._4_4_ == 0)) {
LAB_0011074c:
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            }
            else {
              uVar2 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
              lVar36 = *(long *)(hash_table_size_primes_inv + (local_90 & 0xffffffff) * 8);
              uVar31 = String::hash();
              uVar51 = CONCAT44(0,uVar2);
              uVar26 = local_b0._8_8_;
              uVar45 = 1;
              if (uVar31 != 0) {
                uVar45 = uVar31;
              }
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)uVar45 * lVar36;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar51;
              lVar37 = SUB168(auVar11 * auVar19,8);
              uVar31 = *(uint *)(local_b0._8_8_ + lVar37 * 4);
              iVar29 = SUB164(auVar11 * auVar19,8);
              if (uVar31 == 0) goto LAB_0011074c;
              uVar53 = 0;
              do {
                if ((uVar31 == uVar45) &&
                   (cVar28 = String::operator==((String *)(*(long *)(uVar41 + lVar37 * 8) + 0x10),
                                                (String *)&local_f8), cVar28 != '\0')) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                  NodePath::operator_cast_to_String((NodePath *)&local_f8);
                  plVar35 = (long *)HashMap<String,RBSet<String,Comparator<String>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,Comparator<String>,DefaultAllocator>>>>
                                    ::operator[]((HashMap<String,RBSet<String,Comparator<String>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,Comparator<String>,DefaultAllocator>>>>
                                                  *)&local_b8,(String *)&local_f8);
                  if (*plVar35 != 0) {
                    lVar36 = *(long *)(*plVar35 + 0x10);
                    if (lVar36 != plVar35[1]) goto LAB_001101ae;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                  String::operator+=((String *)local_1b0,(String *)0x30);
                  goto LAB_00110754;
                }
                uVar53 = uVar53 + 1;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = (ulong)(iVar29 + 1) * lVar36;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = uVar51;
                lVar37 = SUB168(auVar12 * auVar20,8);
                uVar31 = *(uint *)(uVar26 + lVar37 * 4);
                iVar29 = SUB164(auVar12 * auVar20,8);
              } while ((uVar31 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar31 * lVar36, auVar21._8_8_ = 0,
                      auVar21._0_8_ = uVar51, auVar14._8_8_ = 0,
                      auVar14._0_8_ =
                           (ulong)((uVar2 + iVar29) - SUB164(auVar13 * auVar21,8)) * lVar36,
                      auVar22._8_8_ = 0, auVar22._0_8_ = uVar51,
                      uVar53 <= SUB164(auVar14 * auVar22,8)));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            }
            goto LAB_00110754;
          }
          NodePath::get_concatenated_subnames();
          if (local_f8 == (Object *)0x0) {
            local_108 = (char *)0x0;
          }
          else {
            local_108 = (char *)0x0;
            if (*(char **)(local_f8 + 8) == (char *)0x0) {
              if (*(long *)(local_f8 + 0x10) != 0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_108,(CowData *)(local_f8 + 0x10));
                goto LAB_00110265;
              }
              if (StringName::configured == '\0') goto LAB_00110281;
            }
            else {
              String::parse_latin1((String *)&local_108,*(char **)(local_f8 + 8));
LAB_00110265:
              if ((StringName::configured == '\0') || (local_f8 == (Object *)0x0))
              goto LAB_00110281;
            }
            StringName::unref();
          }
LAB_00110281:
          local_1b0 = (CowData *)&local_108;
          pSVar38 = (String *)__dynamic_cast(lVar37,&Object::typeinfo,&Skeleton3D::typeinfo,0);
          if ((pSVar38 == (String *)0x0) || (iVar29 = Skeleton3D::find_bone(pSVar38), iVar29 == -1))
          {
            uVar41 = Tree::create_item(*(TreeItem **)(this + 0xa58),iVar52);
            TreeItem::set_cell_mode(uVar41,0,1);
            local_f8 = (Object *)0x0;
            if (local_108 != (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,local_1b0);
            }
            TreeItem::set_text(uVar41,0,(NodePath *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            iVar29 = (int)uVar41;
            TreeItem::set_editable(iVar29,false);
            TreeItem::set_selectable(iVar29,false);
            AnimationNode::is_path_filtered(*(NodePath **)param_1);
            TreeItem::set_checked(iVar29,false);
            Variant::Variant((Variant *)local_58,(NodePath *)&local_118);
            TreeItem::set_metadata(iVar29,(Variant *)0x0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            iVar29 = Skeleton3D::find_bone(pSVar38);
            local_100 = (undefined1 (*) [16])0x0;
            local_1a8 = (String *)lVar36;
            if (iVar29 == -1) {
              String::operator+=((String *)&local_110,":");
            }
            else {
              iVar29 = (int)(NodePath *)&local_f8;
              Skeleton3D::get_bone_name(iVar29);
              pauVar42 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar42[1] = 0;
              *pauVar42 = (undefined1  [16])0x0;
              local_100 = pauVar42;
              while( true ) {
                pCVar43 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
                *(undefined1 (*) [16])pCVar43 = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(pCVar43 + 0x10) = (undefined1  [16])0x0;
                CowData<char32_t>::_ref(pCVar43,(CowData *)&local_f8);
                lVar37 = *(long *)*pauVar42;
                *(undefined1 (**) [16])(pCVar43 + 0x18) = pauVar42;
                *(undefined8 *)(pCVar43 + 0x10) = 0;
                *(long *)(pCVar43 + 8) = lVar37;
                if (lVar37 != 0) {
                  *(CowData<char32_t> **)(lVar37 + 0x10) = pCVar43;
                }
                lVar37 = *(long *)(*pauVar42 + 8);
                *(CowData<char32_t> **)*pauVar42 = pCVar43;
                if (lVar37 == 0) {
                  *(CowData<char32_t> **)(*pauVar42 + 8) = pCVar43;
                }
                *(int *)pauVar42[1] = *(int *)pauVar42[1] + 1;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                iVar30 = Skeleton3D::get_bone_parent((int)pSVar38);
                if (iVar30 == -1) break;
                Skeleton3D::get_bone_name(iVar29);
              }
              String::operator+=((String *)&local_110,":");
              pSVar38 = *(String **)*pauVar42;
              if (pSVar38 != (String *)0x0) {
                while( true ) {
                  String::operator+=((String *)&local_110,pSVar38);
                  local_f8 = (Object *)((ulong)local_f8 & 0xffffffff00000000);
                  cVar28 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                           ::_lookup_pos((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                          *)&local_88,(String *)&local_110,(uint *)&local_f8);
                  if (cVar28 == '\0') {
                    lVar36 = Tree::create_item(*(TreeItem **)(this + 0xa58),(int)lVar36);
                    plVar35 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                      ::operator[]((
                                                  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                                  *)&local_88,(String *)&local_110);
                    *plVar35 = lVar36;
                    local_f8 = (Object *)0x0;
                    if (*(long *)pSVar38 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)pSVar38);
                    }
                    TreeItem::set_text(lVar36,0,(NodePath *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    iVar29 = (int)lVar36;
                    TreeItem::set_selectable(iVar29,false);
                    TreeItem::set_editable(iVar29,false);
                    if ((_update_filters(Ref<AnimationNode>const&)::{lambda()#1}::operator()()::
                         sname == '\0') &&
                       (iVar30 = __cxa_guard_acquire(&_update_filters(Ref<AnimationNode>const&)::
                                                      {lambda()#1}::operator()()::sname),
                       iVar30 != 0)) {
                      _scs_create((char *)&_update_filters(Ref<AnimationNode>const&)::{lambda()#1}::
                                           operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &_update_filters(Ref<AnimationNode>const&)::{lambda()#1}::
                                    operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&_update_filters(Ref<AnimationNode>const&)::{lambda()#1}::
                                           operator()()::sname);
                    }
                    Control::get_editor_theme_icon((StringName *)&local_f8);
                    TreeItem::set_icon(iVar29,(Ref *)0x0);
                    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f8);
                  }
                  else {
                    plVar35 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                      ::operator[]((
                                                  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                                  *)&local_88,(String *)&local_110);
                    lVar36 = *plVar35;
                  }
                  pSVar38 = *(String **)(pSVar38 + 8);
                  local_1a8 = (String *)lVar36;
                  if (pSVar38 == (String *)0x0) break;
                  if (*(String **)*pauVar42 != pSVar38) {
                    String::operator+=((String *)&local_110,"/");
                  }
                }
              }
            }
            iVar29 = (int)local_1a8;
            TreeItem::set_editable(iVar29,false);
            TreeItem::set_selectable(iVar29,false);
            TreeItem::set_cell_mode(local_1a8,0,1);
            local_f8 = (Object *)0x0;
            if (local_108 != (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,local_1b0);
            }
            TreeItem::set_text(local_1a8,0,(NodePath *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            AnimationNode::is_path_filtered(*(NodePath **)param_1);
            TreeItem::set_checked(iVar29,false);
            if ((_update_filters(Ref<AnimationNode>const&)::{lambda()#2}::operator()()::sname ==
                 '\0') &&
               (iVar30 = __cxa_guard_acquire(&_update_filters(Ref<AnimationNode>const&)::
                                              {lambda()#2}::operator()()::sname), iVar30 != 0)) {
              _scs_create((char *)&_update_filters(Ref<AnimationNode>const&)::{lambda()#2}::
                                   operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_update_filters(Ref<AnimationNode>const&)::{lambda()#2}::operator()()::
                            sname,&__dso_handle);
              __cxa_guard_release(&_update_filters(Ref<AnimationNode>const&)::{lambda()#2}::
                                   operator()()::sname);
            }
            Control::get_editor_theme_icon((StringName *)&local_f8);
            TreeItem::set_icon(iVar29,(Ref *)0x0);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f8);
            Variant::Variant((Variant *)local_58,(NodePath *)&local_118);
            TreeItem::set_metadata(iVar29,(Variant *)0x0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_100);
          }
          goto LAB_001103ac;
        }
        goto LAB_001103b6;
      }
      this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
      goto LAB_0011048c;
    }
    local_88 = (char *)0x0;
    String::parse_latin1((String *)&local_88,"");
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"Warning!");
    TTR((String *)local_e8,(String *)&local_b8);
    local_100 = (undefined1 (*) [16])0x0;
    String::parse_latin1((String *)&local_100,"");
    local_108 = (char *)0x0;
    String::parse_latin1
              ((String *)&local_108,
               "Animation player has no valid root node path, so unable to retrieve track names.");
    TTR((String *)&local_f8,(String *)&local_108);
    EditorNode::show_warning(pSVar38,(String *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  uVar41 = 0;
  goto LAB_0010f4fc;
LAB_001101ae:
  do {
    lVar37 = lVar36;
    lVar36 = *(long *)(lVar37 + 0x10);
  } while (plVar35[1] != *(long *)(lVar37 + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  String::operator+=((String *)local_1b0,(String *)(lVar37 + 0x30));
  do {
    operator+((char *)&local_f8,(String *)&_LC295);
    String::operator+=((String *)local_1b0,(String *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    lVar37 = *(long *)(lVar37 + 0x20);
  } while (lVar37 != 0);
LAB_00110754:
  String::operator+=((String *)local_1b0,"]");
  uVar41 = Tree::create_item(*(TreeItem **)(this + 0xa58),iVar52);
  TreeItem::set_cell_mode(uVar41,0,1);
  local_f8 = (Object *)0x0;
  if (local_100 != (undefined1 (*) [16])0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,local_1b0);
  }
  TreeItem::set_text(uVar41,0,(NodePath *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  iVar29 = (int)uVar41;
  TreeItem::set_editable(iVar29,false);
  TreeItem::set_selectable(iVar29,false);
  AnimationNode::is_path_filtered(*(NodePath **)param_1);
  TreeItem::set_checked(iVar29,false);
  Variant::Variant((Variant *)local_58,(NodePath *)&local_118);
  TreeItem::set_metadata(iVar29,(Variant *)0x0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001103ac:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
LAB_001103b6:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  NodePath::~NodePath((NodePath *)&local_118);
  if (local_134 <= (int)local_150 + 1) goto code_r0x001103de;
  local_150 = local_150 + 1;
  goto LAB_0010fb48;
code_r0x001103de:
  uVar41 = local_80._0_8_;
  local_148 = (CowData<char32_t> *)local_e8._0_8_;
  this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
  if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
    uVar26 = local_80._8_8_;
    if ((local_60._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_80._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
      piVar47 = (int *)local_80._8_8_;
      puVar50 = (undefined8 *)local_80._0_8_;
      do {
        if (*piVar47 != 0) {
          pvVar5 = (void *)*puVar50;
          *piVar47 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
          Memory::free_static(pvVar5,false);
          *puVar50 = 0;
        }
        piVar47 = piVar47 + 1;
        puVar50 = puVar50 + 1;
      } while (piVar1 != piVar47);
    }
    Memory::free_static((void *)uVar41,false);
    Memory::free_static((void *)uVar26,false);
  }
LAB_0011048c:
  uVar41 = local_b0._0_8_;
  if ((undefined8 *)local_b0._0_8_ != (undefined8 *)0x0) {
    uVar26 = local_b0._8_8_;
    if ((local_90._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_b0._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4) * 4);
      piVar47 = (int *)local_b0._8_8_;
      puVar50 = (undefined8 *)local_b0._0_8_;
      do {
        if (*piVar47 != 0) {
          pvVar5 = (void *)*puVar50;
          *piVar47 = 0;
          RBSet<String,Comparator<String>,DefaultAllocator>::clear
                    ((RBSet<String,Comparator<String>,DefaultAllocator> *)((long)pvVar5 + 0x18));
          pvVar6 = *(void **)((long)pvVar5 + 0x18);
          if (pvVar6 != (void *)0x0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x30));
            Memory::free_static(pvVar6,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
          Memory::free_static(pvVar5,false);
          *puVar50 = 0;
        }
        piVar47 = piVar47 + 1;
        puVar50 = puVar50 + 1;
      } while (piVar47 != piVar1);
    }
    Memory::free_static((void *)uVar41,false);
    Memory::free_static((void *)uVar26,false);
  }
  if (local_148 != (CowData<char32_t> *)0x0) {
    uVar51 = (ulong)local_c8._4_4_;
    uVar41 = local_d8._8_8_;
    if (local_c8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_c8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_d8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_c8 & 0xffffffff) * 4) * 4);
      }
      pCVar43 = local_148;
      do {
        pCVar48 = pCVar43 + 8;
        CowData<char32_t>::_unref(pCVar43);
        pCVar43 = pCVar48;
      } while (pCVar48 != local_148 + uVar51 * 8);
    }
    Memory::free_static(local_148,false);
    Memory::free_static((void *)local_d8._0_8_,false);
    Memory::free_static((void *)local_e8._8_8_,false);
    Memory::free_static((void *)uVar41,false);
  }
  uVar41 = 1;
LAB_0010f4fc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar41;
}



/* AnimationNodeBlendTreeEditor::_filter_fill_selection() */

void __thiscall
AnimationNodeBlendTreeEditor::_filter_fill_selection(AnimationNodeBlendTreeEditor *this)

{
  Object *pOVar1;
  char cVar2;
  TreeItem *pTVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar3 = (TreeItem *)Tree::get_root();
  if (pTVar3 == (TreeItem *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a0 = 0;
    local_90 = 0;
    local_98 = (Object *)&_LC8;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = (Object *)0x112fd5;
    local_a8 = 0;
    local_90 = 0x1d;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    _filter_fill_selection_recursive(this,(EditorUndoRedoManager *)pOVar4,pTVar3,false);
    local_98 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_a0,"_update_filters",false);
    pOVar1 = local_98;
    Variant::Variant((Variant *)local_78,local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar4,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    local_98 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_a0,"_update_filters",false);
    pOVar1 = local_98;
    Variant::Variant((Variant *)local_78,local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar4,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_filters(this,this + 0xaf8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_filter_invert_selection() */

void __thiscall
AnimationNodeBlendTreeEditor::_filter_invert_selection(AnimationNodeBlendTreeEditor *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_root();
  if (lVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a0 = 0;
    local_90 = 0;
    local_98 = (Object *)&_LC8;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = (Object *)0x112ff3;
    local_a8 = 0;
    local_90 = 0x17;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    _filter_invert_selection_recursive((EditorUndoRedoManager *)this,(TreeItem *)pOVar4);
    local_98 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_a0,"_update_filters",false);
    pOVar1 = local_98;
    Variant::Variant((Variant *)local_78,local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar4,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    local_98 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_a0,"_update_filters",false);
    pOVar1 = local_98;
    Variant::Variant((Variant *)local_78,local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar4,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_filters(this,this + 0xaf8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_filter_clear_selection() */

void __thiscall
AnimationNodeBlendTreeEditor::_filter_clear_selection(AnimationNodeBlendTreeEditor *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_root();
  if (lVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a0 = 0;
    local_90 = 0;
    local_98 = (Object *)&_LC8;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = (Object *)0x11300b;
    local_a8 = 0;
    local_90 = 0x16;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    _filter_clear_selection_recursive((EditorUndoRedoManager *)this,(TreeItem *)pOVar4);
    local_98 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_a0,"_update_filters",false);
    pOVar1 = local_98;
    Variant::Variant((Variant *)local_78,local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar4,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    local_98 = (Object *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_98,*(Ref **)(this + 0xaf8));
    StringName::StringName((StringName *)&local_a0,"_update_filters",false);
    pOVar1 = local_98;
    Variant::Variant((Variant *)local_78,local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar4,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    this[0xaf0] = (AnimationNodeBlendTreeEditor)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_filters(this,this + 0xaf8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendTreeEditor::_inspect_filters(String const&) */

void __thiscall
AnimationNodeBlendTreeEditor::_inspect_filters(AnimationNodeBlendTreeEditor *this,String *param_1)

{
  String *pSVar1;
  Vector2i *pVVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  pSVar1 = *(String **)(this + 0xa50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = "";
  local_70 = (Object *)0x0;
  local_60 = 0;
  if (this[0xa18] == (AnimationNodeBlendTreeEditor)0x0) {
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Edit Filtered Tracks:";
    local_60 = 0x15;
  }
  else {
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Inspect Filtered Tracks:";
    local_60 = 0x18;
  }
  local_78 = 0;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Window::set_title(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
  StringName::StringName((StringName *)&local_68,param_1,false);
  AnimationNodeBlendTree::get_node((StringName *)&local_70);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_70 == (Object *)0x0) {
    _err_print_error("_inspect_filters","editor/plugins/animation_blend_tree_editor_plugin.cpp",
                     0x399,"Condition \"anode.is_null()\" is true.",0,0);
  }
  else {
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)(this + 0xaf8),local_70);
    cVar4 = _update_filters(this,(StrRange *)&local_70);
    if (cVar4 != '\0') {
      pVVar2 = *(Vector2i **)(this + 0xa50);
      fVar5 = (float)EditorScale::get_scale();
      local_50 = CONCAT44(fVar5 * __LC302,fVar5 * __LC302);
      local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
      Window::popup_centered(pVVar2);
      Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_70);
      goto LAB_00111b49;
    }
  }
  if (((local_70 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_70, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_70), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00111b49:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  
  return (uint)CONCAT71(0x1294,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1294,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1294,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1294,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* EditorInspectorPluginAnimationNodeAnimation::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginAnimationNodeAnimation::is_class_ptr
          (EditorInspectorPluginAnimationNodeAnimation *this,void *param_1)

{
  return (uint)CONCAT71(0x1293,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1293,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginAnimationNodeAnimation::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginAnimationNodeAnimation::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationNodeAnimation::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginAnimationNodeAnimation::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationNodeAnimation::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginAnimationNodeAnimation::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginAnimationNodeAnimation::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginAnimationNodeAnimation::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginAnimationNodeAnimation::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorInspectorPluginAnimationNodeAnimation::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationNodeAnimation::_notificationv(int, bool) */

void EditorInspectorPluginAnimationNodeAnimation::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AnimationNodeAnimationEditorDialog::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeAnimationEditorDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimationNodeAnimationEditorDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AnimationNodeAnimationEditorDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, Vector2
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, TypedArray<StringName>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, String
   const&, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int, Array const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&, Vector2 const&,
   StringName const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&, Variant
   const&, String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Ref<AnimationNode>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, Ref<AnimationNode>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>
           *this)

{
  return;
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<bool,Ref<AnimationNode>const&>::_gen_argument_type
          (MethodBindTR<bool,Ref<AnimationNode>const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x17U) + 1;
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool,Ref<AnimationNode>const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, Vector2
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, TypedArray<StringName>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   Object*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, String
   const&, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int, Array const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&, Vector2 const&,
   StringName const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&, Variant
   const&, String const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Ref<AnimationNode>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, Ref<AnimationNode>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, Ref<AnimationNode>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Ref<AnimationNode>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&, Variant
   const&, String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&, Vector2 const&,
   StringName const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int, Array const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, String
   const&, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, TypedArray<StringName>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, Vector2
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void> *this)

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



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127aa8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127aa8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00131018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeAnimationEditorDialog::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeAnimationEditorDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00131018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00131020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeAnimationEditorDialog::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeAnimationEditorDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00131020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00131028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00131028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeBlendTreeEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimationNodeBlendTreeEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00131028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeAnimationEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimationNodeAnimationEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00131028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00131030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00131030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeBlendTreeEditor::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeBlendTreeEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00131030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeAnimationEditor::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeAnimationEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00131030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127258;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127258;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001291b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001291b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Ref<AnimationNode>const&>::~MethodBindTR
          (MethodBindTR<bool,Ref<AnimationNode>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129218;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Ref<AnimationNode>const&>::~MethodBindTR
          (MethodBindTR<bool,Ref<AnimationNode>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129218;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<EditorProperty*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorProperty*>::_copy_on_write(void)

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



/* CowData<AnimationNodeBlendTreeEditor::AddOption>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<AnimationNodeBlendTreeEditor::AddOption>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&> *this)

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
      goto LAB_0011316d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011316d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011316d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AnimationNodeAnimationEditorDialog::_validate_propertyv(PropertyInfo&) const */

void AnimationNodeAnimationEditorDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00131038 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00131038 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int>::get_object
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int> *this)

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
      goto LAB_0011336d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011336d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011336d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool> *this)

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
      goto LAB_0011346d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011346d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011346d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int> *this)

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
      goto LAB_0011356d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011356d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011356d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&> *this)

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
      goto LAB_0011366d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011366d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011366d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void> *this)

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
      goto LAB_0011376d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011376d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011376d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Ref<AnimationNode>
   >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>> *this)

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
      goto LAB_0011386d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011386d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011386d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, TypedArray<StringName>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>::
get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>
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
      goto LAB_0011396d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011396d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011396d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, Vector2
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>::
get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>
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
      goto LAB_00113a6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113a6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113a6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&, Variant
   const&, String const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
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
      goto LAB_00113b6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113b6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113b6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, Ref<AnimationNode>
   >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>::
get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>
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
      goto LAB_00113c6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113c6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113c6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&, Vector2 const&,
   StringName const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
::get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
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
      goto LAB_00113d6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113d6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113d6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&> *this)

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
      goto LAB_00113e6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113e6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113e6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void>::get_object
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void> *this)

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
      goto LAB_00113f6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00113f6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00113f6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, String
   const&, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>::
get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>
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
      goto LAB_0011406d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011406d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011406d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*> *this)

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
      goto LAB_0011416d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011416d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011416d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int, Array const&, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>::
get_object(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>
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
      goto LAB_0011426d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011426d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011426d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00131040 != Window::_notification) {
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
  if ((code *)PTR__notification_00131040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00131048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationNodeAnimationEditor::_validate_propertyv(PropertyInfo&) const */

void AnimationNodeAnimationEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00131048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationNodeBlendTreeEditor::_validate_propertyv(PropertyInfo&) const */

void AnimationNodeBlendTreeEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00131048 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00131048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationNodeAnimationEditorDialog::is_class_ptr(void*) const */

uint AnimationNodeAnimationEditorDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1294,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1294,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1294,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1294,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1295,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1295,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1295,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AnimationNodeAnimationEditor::is_class_ptr(void*) const */

ulong AnimationNodeAnimationEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1294,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1295,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1295,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1295,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1295,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1295,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00131050 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00131050 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* AnimationNodeBlendTreeEditor::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeBlendTreeEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00131050 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* AnimationNodeAnimationEditor::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeAnimationEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00131050 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* AnimationNodeBlendTreeEditor::is_class_ptr(void*) const */

uint AnimationNodeBlendTreeEditor::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x1293,in_RSI == &AnimationTreeNodeEditorPlugin::get_class_ptr_static()::
                                           ptr) |
          (uint)CONCAT71(0x1293,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &VBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x1295,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* WARNING: Removing unreachable block (ram,0x00114ab8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00131058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00114b28) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00131058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00114b98) */
/* AnimationNodeBlendTreeEditor::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeBlendTreeEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00131058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00114c08) */
/* AnimationNodeAnimationEditor::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeAnimationEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00131058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* AnimationNodeAnimationEditorDialog::_notificationv(int, bool) */

void __thiscall
AnimationNodeAnimationEditorDialog::_notificationv
          (AnimationNodeAnimationEditorDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00131040 != Window::_notification) {
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
  if ((code *)PTR__notification_00131040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
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
      if (StringName::configured == '\0') goto LAB_00114d70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114d70:
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
      if (StringName::configured == '\0') goto LAB_00114dd0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114dd0:
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
      if (StringName::configured == '\0') goto LAB_00114e30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114e30:
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
      if (StringName::configured == '\0') goto LAB_00114ea0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114ea0:
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
    if ((code *)PTR__notification_00131060 != Container::_notification) {
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
  if ((code *)PTR__notification_00131060 == Container::_notification) {
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
    if ((code *)PTR__notification_00131060 != Container::_notification) {
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
  if ((code *)PTR__notification_00131060 == Container::_notification) {
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
LAB_001151b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001151b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011521e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011521e:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationNodeAnimationEditorDialog::_get_class_namev() const */

undefined8 * AnimationNodeAnimationEditorDialog::_get_class_namev(void)

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
LAB_001152b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001152b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationNodeAnimationEditorDialog");
      goto LAB_0011531e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "AnimationNodeAnimationEditorDialog");
LAB_0011531e:
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
LAB_00115393:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115393;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001153fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001153fe:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginAnimationNodeAnimation::_get_class_namev() const */

undefined8 * EditorInspectorPluginAnimationNodeAnimation::_get_class_namev(void)

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
LAB_001154a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001154a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginAnimationNodeAnimation");
      goto LAB_0011550e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginAnimationNodeAnimation");
LAB_0011550e:
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
LAB_00115593:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115593;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001155fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001155fe:
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
LAB_00115683:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115683;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_001156ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_001156ee:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationNodeBlendTreeEditor::_get_class_namev() const */

undefined8 * AnimationNodeBlendTreeEditor::_get_class_namev(void)

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
LAB_00115783:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115783;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationNodeBlendTreeEditor");
      goto LAB_001157ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeBlendTreeEditor");
LAB_001157ee:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationNodeAnimationEditor::_get_class_namev() const */

undefined8 * AnimationNodeAnimationEditor::_get_class_namev(void)

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
LAB_00115883:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115883;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationNodeAnimationEditor");
      goto LAB_001158ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeAnimationEditor");
LAB_001158ee:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
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



/* WARNING: Removing unreachable block (ram,0x00115aa0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00131060 != Container::_notification) {
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
  if ((code *)PTR__notification_00131060 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* AnimationNodeAnimationEditor::_notificationv(int, bool) */

void __thiscall
AnimationNodeAnimationEditor::_notificationv
          (AnimationNodeAnimationEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification((int)this);
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* Ref<Animation>::unref() */

void __thiscall Ref<Animation>::unref(Ref<Animation> *this)

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



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor, String
   const&>(AnimationNodeBlendTreeEditor*, char const*, void (AnimationNodeBlendTreeEditor::*)(String
   const&)) */

AnimationNodeBlendTreeEditor *
create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&>
          (AnimationNodeBlendTreeEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00128948;
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



/* Callable Callable::bind<StringName>(StringName) const */

Variant ** Callable::bind<StringName>(Variant **param_1,int param_2,StringName *param_3)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ProgressBar*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, ProgressBar*> > >::operator[](StringName const&)
    */

undefined8 * __thiscall
HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
::operator[](HashMap<StringName,ProgressBar*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProgressBar*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_001166d8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00116588;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011658c:
      if (iVar46 != 0) {
LAB_00116594:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              puVar42[3] = 0;
              goto LAB_0011618c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_001161c3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_001161c3;
    if (iVar46 != 0) goto LAB_00116594;
LAB_001161e9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011618c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0011618c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_001166d8;
LAB_00116588:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011658c;
    }
LAB_001161c3:
    if ((float)uVar40 * __LC25 < (float)(iVar46 + 1)) goto LAB_001161e9;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  puVar42[3] = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011669d;
LAB_00116477:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00116477;
LAB_0011669d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011618c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<AnimationNodeBlendTree::NodeConnection, DefaultAllocator>::~List() */

void __thiscall
List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator>::~List
          (List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (plVar4 == (long *)plVar1[5]) {
      lVar3 = plVar1[3];
      lVar2 = plVar1[4];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
        lVar3 = plVar1[3];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      if (StringName::configured != '\0') {
        if (plVar1[2] != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0011687a;
        }
        if (*plVar1 != 0) {
          StringName::unref();
        }
      }
LAB_0011687a:
      Memory::free_static(plVar1,false);
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



/* Ref<AnimationNode>::unref() */

void __thiscall Ref<AnimationNode>::unref(Ref<AnimationNode> *this)

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



/* void EditorUndoRedoManager::add_do_method<String, int, String>(Object*, StringName const&,
   String, int, String) */

void __thiscall
EditorUndoRedoManager::add_do_method<String,int,String>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4,
          int param_5,String *param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_4);
  Variant::Variant(local_90,param_5);
  Variant::Variant(local_78,param_6);
  local_58 = (undefined1  [16])0x0;
  pVVar2 = local_48;
  local_60 = 0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)&local_c8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor, StringName
   const&>(AnimationNodeBlendTreeEditor*, char const*, void
   (AnimationNodeBlendTreeEditor::*)(StringName const&)) */

AnimationNodeBlendTreeEditor *
create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,StringName_const&>
          (AnimationNodeBlendTreeEditor *param_1,char *param_2,_func_void_StringName_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00128b88;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_StringName_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor, String const&,
   int, String const&, int>(AnimationNodeBlendTreeEditor*, char const*, void
   (AnimationNodeBlendTreeEditor::*)(String const&, int, String const&, int)) */

AnimationNodeBlendTreeEditor *
create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&,int,String_const&,int>
          (AnimationNodeBlendTreeEditor *param_1,char *param_2,
          _func_void_String_ptr_int_String_ptr_int *param_3)

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
  *(undefined ***)this = &PTR_hash_00128c18;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr_int_String_ptr_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor, Vector2
   const&>(AnimationNodeBlendTreeEditor*, char const*, void
   (AnimationNodeBlendTreeEditor::*)(Vector2 const&)) */

AnimationNodeBlendTreeEditor *
create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,Vector2_const&>
          (AnimationNodeBlendTreeEditor *param_1,char *param_2,_func_void_Vector2_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00128d38;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Vector2_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor, String const&,
   int, Vector2 const&>(AnimationNodeBlendTreeEditor*, char const*, void
   (AnimationNodeBlendTreeEditor::*)(String const&, int, Vector2 const&)) */

AnimationNodeBlendTreeEditor *
create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor,String_const&,int,Vector2_const&>
          (AnimationNodeBlendTreeEditor *param_1,char *param_2,
          _func_void_String_ptr_int_Vector2_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00128e58;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr_int_Vector2_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable
   create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>(AnimationNodeBlendTreeEditor*,
   char const*, void (AnimationNodeBlendTreeEditor::*)()) */

AnimationNodeBlendTreeEditor *
create_custom_callable_function_pointer<AnimationNodeBlendTreeEditor>
          (AnimationNodeBlendTreeEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00128f78;
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



/* void Ref<EditorInspectorPluginAnimationNodeAnimation>::instantiate<>() */

void __thiscall
Ref<EditorInspectorPluginAnimationNodeAnimation>::instantiate<>
          (Ref<EditorInspectorPluginAnimationNodeAnimation> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x218,"");
  pRVar3 = this_00;
  for (lVar2 = 0x43; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(code **)this_00 = RefCounted::_bind_methods;
  StringName::StringName((StringName *)(this_00 + 0x188),"_can_handle",false);
  this_00[400] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1a0),"_parse_begin",false);
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b8),"_parse_category",false);
  this_00[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1d0),"_parse_group",false);
  this_00[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1e8),"_parse_property",false);
  this_00[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1f8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x200),"_parse_end",false);
  this_00[0x208] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x210) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00128420;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_00117bf5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00117bf5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00117bf5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeAnimationEditor,
   int>(AnimationNodeAnimationEditor*, char const*, void (AnimationNodeAnimationEditor::*)(int)) */

AnimationNodeAnimationEditor *
create_custom_callable_function_pointer<AnimationNodeAnimationEditor,int>
          (AnimationNodeAnimationEditor *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_00129098;
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



/* Callable
   create_custom_callable_function_pointer<AnimationNodeAnimationEditor>(AnimationNodeAnimationEditor*,
   char const*, void (AnimationNodeAnimationEditor::*)()) */

AnimationNodeAnimationEditor *
create_custom_callable_function_pointer<AnimationNodeAnimationEditor>
          (AnimationNodeAnimationEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00129128;
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



/* EditorInspectorPluginAnimationNodeAnimation::_initialize_classv() */

void EditorInspectorPluginAnimationNodeAnimation::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Object");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"RefCounted");
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
        if ((code *)PTR__bind_methods_00131010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorInspectorPlugin";
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
      if ((code *)PTR__bind_methods_00131068 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00131070 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginAnimationNodeAnimation";
    local_70 = 0;
    local_50 = 0x2b;
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



/* AnimationNodeAnimationEditorDialog::_initialize_classv() */

void AnimationNodeAnimationEditorDialog::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00131010 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00131078 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AcceptDialog");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"ConfirmationDialog");
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
      if ((code *)PTR__bind_methods_00131080 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AnimationNodeAnimationEditorDialog";
    local_70 = 0;
    local_50 = 0x22;
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



/* WARNING: Removing unreachable block (ram,0x00118978) */
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



/* AnimationNodeBlendTreeEditor::AddOption::~AddOption() */

void __thiscall AnimationNodeBlendTreeEditor::AddOption::~AddOption(AddOption *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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



/* AnimationNodeAnimationEditorDialog::get_class() const */

void AnimationNodeAnimationEditorDialog::get_class(void)

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



/* AnimationNodeAnimationEditor::get_class() const */

void AnimationNodeAnimationEditor::get_class(void)

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



/* AnimationNodeBlendTreeEditor::get_class() const */

void AnimationNodeBlendTreeEditor::get_class(void)

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



/* EditorInspectorPluginAnimationNodeAnimation::get_class() const */

void EditorInspectorPluginAnimationNodeAnimation::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
    if (*in_RSI != 0) goto LAB_001192bc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_001192bc:
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
              goto LAB_0011961b;
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
  if ((float)uVar28 * __LC25 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0011961b;
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
LAB_0011961b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
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
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119c50;
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
LAB_00119c50:
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
      goto LAB_0011a05f;
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
                    /* WARNING: Could not recover jumptable at 0x00119f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a05f:
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
      goto LAB_0011a21f;
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
                    /* WARNING: Could not recover jumptable at 0x0011a0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a21f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void>::call
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void> *this,Variant **param_1,
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
      goto LAB_0011a40f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011a40f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a4c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011a40f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a4c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void> *this,Variant **param_1,
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
      goto LAB_0011a61f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011a61f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a6d0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011a61f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011a6d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<bool,Ref<AnimationNode>const&>::validated_call
          (MethodBindTR<bool,Ref<AnimationNode>const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Variant VVar4;
  Object *pOVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x119ae0;
      local_60 = (Object *)0x0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a7de;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*param_2 + 0x10));
  local_60 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar2 = local_60;
  if (pOVar5 != local_60) {
    if (pOVar5 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
        local_58 = pOVar2;
        goto LAB_0011a79d;
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&AnimationNode::typeinfo,0);
      if (pOVar2 != pOVar5) {
        local_58 = pOVar2;
        local_60 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
LAB_0011a79d:
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_58);
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  VVar4 = (Variant)(*pcVar7)(param_1 + lVar1);
  param_3[8] = VVar4;
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011a7de:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool,Ref<AnimationNode>const&>::ptrcall
          (MethodBindTR<bool,Ref<AnimationNode>const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aa83;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  if ((long *)*param_2 == (long *)0x0) {
    local_50 = (Object *)0x0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    pOVar2 = **param_2;
    local_50 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      local_48 = (char *)0x0;
      local_50 = pOVar2;
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
        local_50 = (Object *)0x0;
      }
      Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_48);
    }
  }
  uVar4 = (*pcVar6)(param_1 + lVar1);
  *(undefined1 *)param_3 = uVar4;
  if (local_50 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_50);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011aa83:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Ref<AnimationNode>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>> *this,
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
          goto LAB_0011ad2e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011ad2e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC123;
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
LAB_0011adfd:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&AnimationNode::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0011adfd;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2),(Ref<AnimationNode> *)&local_38);
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_38);
        goto LAB_0011ad2e;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Ref<AnimationNode> *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011ad2e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011b138;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011b138;
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
        uVar3 = _LC124;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0011b1e9;
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
LAB_0011b138:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b1e9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int>::call
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011b3a8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011b3a8;
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
        uVar3 = _LC124;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0011b459;
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
LAB_0011b3a8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b459:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011b619;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0011b619;
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
        uVar3 = _LC125;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0011b6ca;
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
LAB_0011b619:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b6ca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&> *this,
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
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_40[0] = (String)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC126;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2(*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011b79e;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011b79e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, TypedArray<StringName>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>
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
  CowData<char32_t> aCStack_78 [8];
  Array local_70 [8];
  long local_68;
  Variant local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60[0] = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x1c);
            uVar3 = _LC127;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_Array(local_60);
            Array::Array(local_70);
            local_68 = 0;
            local_58 = 0;
            local_50 = (undefined1  [16])0x0;
            Array::set_typed((uint)local_70,(StringName *)0x15,(Variant *)&local_68);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            cVar4 = Array::is_same_typed(local_70);
            if (cVar4 == '\0') {
              Array::assign(local_70);
            }
            else {
              Array::_ref(local_70);
            }
            Array::~Array((Array *)local_60);
            (*pcVar7)((long *)(lVar1 + lVar2),local_70);
            Array::~Array(local_70);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011b9fe;
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
  uitos((ulong)aCStack_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)local_60,(String *)local_70);
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref(aCStack_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0011b9fe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Object*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*> *this,
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
      goto LAB_0011be39;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011be39;
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
LAB_0011bd90:
          uVar3 = _LC123;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_0011bd90;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011bdd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0011beea;
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
LAB_0011be39:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011beea:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&, Vector2 const&,
   StringName const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
::call(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48 = (Variant)0x0;
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
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x15);
            uVar3 = _LC128;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_48);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],5);
            uVar3 = _LC129;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_40 = Variant::operator_cast_to_Vector2(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC126;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2(*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38,&local_40,&local_48);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              StringName::unref();
            }
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
        goto LAB_0011bfb5;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011bfb5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&> *this,
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
  Variant local_38;
  undefined7 uStack_37;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38 = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar3 = _LC130;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_37,local_38) != 0)) {
              StringName::unref();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011c2ae;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011c2ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, Ref<AnimationNode>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>::
call(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  Object *local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
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
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0011c525;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0011c525;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1]);
        uVar3 = _LC131;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_50 = (Object *)0x0;
        pOVar6 = (Object *)Variant::get_validated_object();
        pOVar4 = local_50;
        if (pOVar6 != local_50) {
          if (pOVar6 == (Object *)0x0) {
            if (local_50 != (Object *)0x0) {
              local_50 = (Object *)0x0;
LAB_0011c620:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar4), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          else {
            pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&AnimationNode::typeinfo,0);
            if (pOVar4 != pOVar6) {
              local_50 = pOVar6;
              if ((pOVar6 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_50 = (Object *)0x0;
              }
              if (pOVar4 != (Object *)0x0) goto LAB_0011c620;
            }
          }
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
        uVar3 = _LC132;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_String(local_48);
        (*pcVar9)((long *)(lVar1 + lVar2),local_48,(Ref<AnimationNode> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_50);
        goto LAB_0011c525;
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
  String::operator+((String *)local_48,(String *)local_58);
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011c525:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&> *this,
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
            uVar3 = _LC132;
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
        goto LAB_0011c88e;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011c88e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&, Variant
   const&, String const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
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
            uVar3 = _LC133;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            bVar8 = Variant::operator_cast_to_bool(param_1[3]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar3 = _LC134;
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
            uVar3 = _LC130;
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
        goto LAB_0011caec;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0011caec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int, Array const&, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
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
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar3 = _LC134;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x1c);
            uVar3 = _LC136;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_Array(local_48);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar3 = _LC124;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            iVar5 = Variant::operator_cast_to_int(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),iVar5,local_48,(Variant *)&local_50);
            Array::~Array((Array *)local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        goto LAB_0011ce25;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011ce25:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, String
   const&, int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>::
call(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
            uVar3 = _LC137;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            iVar5 = Variant::operator_cast_to_int(param_1[3]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar3 = _LC134;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC138;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC132;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_48);
            (*pcVar9)((long *)(lVar1 + lVar2),local_48,iVar6,(Variant *)&local_50,iVar5);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        goto LAB_0011d10c;
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
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011d10c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, Vector2
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>::
call(CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> aCStack_68 [8];
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  Variant local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_50[0] = (Variant)0x0;
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
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],5);
            uVar3 = _LC139;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_48 = Variant::operator_cast_to_Vector2(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC138;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            iVar5 = Variant::operator_cast_to_int(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC132;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_50);
            (*pcVar8)((long *)(lVar1 + lVar2),local_50,iVar5,&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
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
        goto LAB_0011d415;
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
  String::operator+((String *)local_50,(String *)local_60);
  _err_print_error(&_LC115,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_50,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref(aCStack_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_0011d415:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
  return;
}



/* MethodBindTR<bool, Ref<AnimationNode> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<bool,Ref<AnimationNode>const&>::_gen_argument_type_info(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"AnimationNode");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_b0,0x11,
               (String *)&local_a8,6,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    lVar3 = local_78;
    uVar2 = local_90._8_8_;
    uVar1 = local_90._0_8_;
    local_90 = (undefined1  [16])0x0;
    *(undefined4 *)pPVar4 = (undefined4)local_98;
    *(undefined8 *)(pPVar4 + 8) = uVar1;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_80;
    local_78 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
    *(undefined4 *)(pPVar4 + 0x28) = local_70;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  }
  else {
    local_a0 = 0;
    local_60 = 0;
    local_68 = &_LC8;
    String::parse_latin1((StrRange *)&local_a0);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar4,1,(CowData<char32_t> *)&local_68,0,(StrRange *)&local_a0,6,&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
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
    if ((code *)PTR__bind_methods_00131088 != Object::_bind_methods) {
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
            if ((code *)PTR__bind_methods_00131010 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00131078 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00131080 != AcceptDialog::_bind_methods) {
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
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* AnimationNodeAnimationEditor::_initialize_classv() */

void AnimationNodeAnimationEditor::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      VBoxContainer::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xd;
    local_48 = "VBoxContainer";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimationNodeAnimationEditor";
    local_60 = 0;
    local_40 = 0x1c;
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
              if ((code *)PTR__bind_methods_00131010 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00131008 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_0011ef3b;
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
      if (cVar5 != '\0') goto LAB_0011ef3b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011ef3b:
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
    if (cVar5 != '\0') goto LAB_0011f13b;
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
      if (cVar5 != '\0') goto LAB_0011f13b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011f23e;
    }
  }
LAB_0011f13b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f23e:
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
    if (cVar5 != '\0') goto LAB_0011f34b;
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
      if (cVar5 != '\0') goto LAB_0011f34b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0011f44e;
    }
  }
LAB_0011f34b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f44e:
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
    if (cVar4 != '\0') goto LAB_0011f55b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011f55b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::is_class(String const&) const */

undefined8 __thiscall
AnimationNodeBlendTreeEditor::is_class(AnimationNodeBlendTreeEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011f6cb;
  }
  cVar5 = String::operator==(param_1,"AnimationNodeBlendTreeEditor");
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
      if (cVar5 != '\0') goto LAB_0011f6cb;
    }
    cVar5 = String::operator==(param_1,"AnimationTreeNodeEditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0011f7ce;
    }
  }
LAB_0011f6cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f7ce:
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
    if (cVar4 != '\0') goto LAB_0011f8db;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011f8db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeAnimationEditor::is_class(String const&) const */

undefined8 __thiscall
AnimationNodeAnimationEditor::is_class(AnimationNodeAnimationEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011fa2b;
  }
  cVar5 = String::operator==(param_1,"AnimationNodeAnimationEditor");
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
      if (cVar5 != '\0') goto LAB_0011fa2b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0011fb68;
    }
  }
LAB_0011fa2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011fb68:
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
    if (cVar5 != '\0') goto LAB_0011fc6b;
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
      if (cVar5 != '\0') goto LAB_0011fc6b;
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
        if (cVar5 != '\0') goto LAB_0011fc6b;
      }
      cVar5 = String::operator==(param_1,"Viewport");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0011fe0e;
      }
    }
  }
LAB_0011fc6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011fe0e:
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
    if (cVar4 != '\0') goto LAB_0011ff1b;
  }
  cVar4 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011ff1b:
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
    if (cVar5 != '\0') goto LAB_0012006b;
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
      if (cVar5 != '\0') goto LAB_0012006b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0012006b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationNodeAnimation::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginAnimationNodeAnimation::is_class
          (EditorInspectorPluginAnimationNodeAnimation *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0012026b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginAnimationNodeAnimation");
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
      if (cVar5 != '\0') goto LAB_0012026b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0012036e;
    }
  }
LAB_0012026b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0012036e:
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
        if (pvVar3 == (void *)0x0) goto LAB_0012046f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0012046f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* AnimationNodeAnimationEditorDialog::is_class(String const&) const */

undefined8 __thiscall
AnimationNodeAnimationEditorDialog::is_class
          (AnimationNodeAnimationEditorDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001205cb;
  }
  cVar5 = String::operator==(param_1,"AnimationNodeAnimationEditorDialog");
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
      if (cVar5 != '\0') goto LAB_001205cb;
    }
    cVar5 = String::operator==(param_1,"ConfirmationDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
        return uVar6;
      }
      goto LAB_001206ce;
    }
  }
LAB_001205cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001206ce:
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
      goto LAB_0012083c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012083c:
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
  local_78 = &_LC42;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC42;
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
      goto LAB_00120a8c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120a8c:
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



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPlugin";
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
      goto LAB_00120cf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120cf1:
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
      goto LAB_00120fa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120fa1:
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



/* EditorInspectorPluginAnimationNodeAnimation::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPluginAnimationNodeAnimation::_get_property_listv
          (EditorInspectorPluginAnimationNodeAnimation *this,List *param_1,bool param_2)

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
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPluginAnimationNodeAnimation";
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginAnimationNodeAnimation";
  local_98 = 0;
  local_70 = 0x2b;
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
      goto LAB_00121251;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121251:
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
  StringName::StringName
            ((StringName *)&local_78,"EditorInspectorPluginAnimationNodeAnimation",false);
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
  if ((code *)PTR__get_property_list_00131090 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00131098 != CanvasItem::_get_property_list) {
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
      goto LAB_001218e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001218e1:
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
      goto LAB_00121b91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121b91:
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
      goto LAB_00121e41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121e41:
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



/* AnimationTreeNodeEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTreeNodeEditorPlugin::_get_property_listv
          (AnimationTreeNodeEditorPlugin *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationTreeNodeEditorPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationTreeNodeEditorPlugin";
  local_98 = 0;
  local_70 = 0x1d;
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
      goto LAB_001220f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001220f1:
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
  StringName::StringName((StringName *)&local_78,"AnimationTreeNodeEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendTreeEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationNodeBlendTreeEditor::_get_property_listv
          (AnimationNodeBlendTreeEditor *this,List *param_1,bool param_2)

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
    AnimationTreeNodeEditorPlugin::_get_property_listv
              ((AnimationTreeNodeEditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNodeBlendTreeEditor";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeBlendTreeEditor";
  local_98 = 0;
  local_70 = 0x1c;
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
      goto LAB_001223a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001223a1:
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
  StringName::StringName((StringName *)&local_78,"AnimationNodeBlendTreeEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTreeNodeEditorPlugin::_get_property_listv
                ((AnimationTreeNodeEditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeAnimationEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationNodeAnimationEditor::_get_property_listv
          (AnimationNodeAnimationEditor *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNodeAnimationEditor";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeAnimationEditor";
  local_98 = 0;
  local_70 = 0x1c;
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
      goto LAB_00122651;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122651:
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
  StringName::StringName((StringName *)&local_78,"AnimationNodeAnimationEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
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
      goto LAB_00122901;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122901:
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
  if ((code *)PTR__get_property_list_001310a0 != Object::_get_property_list) {
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
      goto LAB_00122da1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122da1:
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
      goto LAB_00123051;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123051:
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



/* AnimationNodeAnimationEditorDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
AnimationNodeAnimationEditorDialog::_get_property_listv
          (AnimationNodeAnimationEditorDialog *this,List *param_1,bool param_2)

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
  local_78 = "AnimationNodeAnimationEditorDialog";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeAnimationEditorDialog";
  local_98 = 0;
  local_70 = 0x22;
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
      goto LAB_00123301;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123301:
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
  StringName::StringName((StringName *)&local_78,"AnimationNodeAnimationEditorDialog",false);
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



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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
      if ((float)uVar31 * __LC25 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00123be0;
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
LAB_00123be0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendTreeEditor>(void
   (AnimationNodeBlendTreeEditor::*)()) */

MethodBind * create_method_bind<AnimationNodeBlendTreeEditor>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_001291b8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendTreeEditor";
  local_30 = 0x1c;
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



/* MethodBind* create_method_bind<AnimationNodeBlendTreeEditor, bool, Ref<AnimationNode>
   const&>(bool (AnimationNodeBlendTreeEditor::*)(Ref<AnimationNode> const&)) */

MethodBind *
create_method_bind<AnimationNodeBlendTreeEditor,bool,Ref<AnimationNode>const&>
          (_func_bool_Ref_ptr *param_1)

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
  *(_func_bool_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129218;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendTreeEditor";
  local_30 = 0x1c;
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



/* EditorInspectorPluginAnimationNodeAnimation::~EditorInspectorPluginAnimationNodeAnimation() */

void __thiscall
EditorInspectorPluginAnimationNodeAnimation::~EditorInspectorPluginAnimationNodeAnimation
          (EditorInspectorPluginAnimationNodeAnimation *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001241f4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001241f4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001241f4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001241f4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001241f4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001241f4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00127258;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginAnimationNodeAnimation::~EditorInspectorPluginAnimationNodeAnimation() */

void __thiscall
EditorInspectorPluginAnimationNodeAnimation::~EditorInspectorPluginAnimationNodeAnimation
          (EditorInspectorPluginAnimationNodeAnimation *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001242f4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001242f4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001242f4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001242f4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001242f4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001242f4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00127258;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* AnimationNodeBlendTreeEditor::_initialize_classv() */

void AnimationNodeBlendTreeEditor::_initialize_classv(void)

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
    if (AnimationTreeNodeEditorPlugin::initialize_class()::initialized == '\0') {
      if (VBoxContainer::initialize_class()::initialized == '\0') {
        VBoxContainer::initialize_class();
      }
      local_58 = 0;
      local_40 = 0xd;
      local_48 = "VBoxContainer";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "AnimationTreeNodeEditorPlugin";
      local_60 = 0;
      local_40 = 0x1d;
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
      AnimationTreeNodeEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "AnimationTreeNodeEditorPlugin";
    local_58 = 0;
    local_40 = 0x1d;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimationNodeBlendTreeEditor";
    local_60 = 0;
    local_40 = 0x1c;
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



/* Ref<AnimationNode>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<AnimationNode>::operator=(Ref<AnimationNode> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&AnimationNode::typeinfo,0);
    if (pOVar1 == pOVar3) {
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



/* MethodBindTR<bool, Ref<AnimationNode> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<bool,Ref<AnimationNode>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00124888;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001248d0;
LAB_001248c0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001248d0:
        uVar7 = 4;
        goto LAB_0012487d;
      }
      if (in_R8D == 1) goto LAB_001248c0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x18);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = (char *)0x0;
    Ref<AnimationNode>::operator=((Ref<AnimationNode> *)&local_68,pVVar11);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),
                                     (Ref<AnimationNode> *)&local_68);
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0012487d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00124888:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::clear() */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::clear
          (RBSet<String,Comparator<String>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar7) {
            pEVar5 = *(Element **)(pEVar7 + 0x10);
            if (pEVar2 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar7 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          pEVar7 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar6) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar2) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar3 != pEVar7) {
            pEVar5 = *(Element **)(pEVar7 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar6) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x30));
    Memory::free_static(pvVar4,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_00124e5d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00124f80;
LAB_00124e06:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00124e06;
LAB_00124f80:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00124e43:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00125072:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00125072;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00125040;
LAB_00124ed0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00124ed0;
LAB_00125040:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00124e43;
    }
LAB_00124e5d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* CowData<AnimationNodeBlendTreeEditor::AddOption>::_unref() */

void __thiscall
CowData<AnimationNodeBlendTreeEditor::AddOption>::_unref
          (CowData<AnimationNodeBlendTreeEditor::AddOption> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  
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
        lVar9 = 0;
        plVar8 = plVar1;
        do {
          if (plVar8[2] != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              pOVar5 = (Object *)plVar8[2];
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar8 + 1));
          if (*plVar8 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar8;
              *plVar8 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 4;
        } while (lVar3 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<AnimationNodeBlendTreeEditor::AddOption>::_realloc(long) */

undefined8 __thiscall
CowData<AnimationNodeBlendTreeEditor::AddOption>::_realloc
          (CowData<AnimationNodeBlendTreeEditor::AddOption> *this,long param_1)

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
/* Error CowData<AnimationNodeBlendTreeEditor::AddOption>::resize<false>(long) */

undefined8 __thiscall
CowData<AnimationNodeBlendTreeEditor::AddOption>::resize<false>
          (CowData<AnimationNodeBlendTreeEditor::AddOption> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  CowData<char32_t> *pCVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    uVar7 = 0x1f;
    goto LAB_00125495;
  }
  if (*(long *)this == 0) {
    if (param_1 != 0) {
      _copy_on_write(this);
      lVar6 = 0;
      lVar10 = 0;
LAB_00125364:
      if (param_1 * 0x20 == 0) {
LAB_00125620:
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
      }
      else {
        uVar11 = param_1 * 0x20 - 1;
        uVar11 = uVar11 >> 1 | uVar11;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        uVar11 = uVar11 | uVar11 >> 0x20;
        lVar4 = uVar11 + 1;
        if (lVar4 == 0) goto LAB_00125620;
        uVar12 = param_1;
        if (param_1 <= lVar6) {
          while (lVar6 = *(long *)this, lVar6 != 0) {
            if (*(ulong *)(lVar6 + -8) <= uVar12) {
              if (lVar4 != lVar10) {
                uVar7 = _realloc(this,lVar4);
                if ((int)uVar7 != 0) goto LAB_00125495;
                lVar6 = *(long *)this;
                if (lVar6 == 0) goto LAB_001255ae;
              }
              *(long *)(lVar6 + -8) = param_1;
              goto LAB_00125493;
            }
            pCVar9 = (CowData<char32_t> *)(lVar6 + uVar12 * 0x20);
            if ((*(long *)(pCVar9 + 0x10) != 0) &&
               (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
              pOVar1 = *(Object **)(pCVar9 + 0x10);
              cVar3 = predelete_handler(pOVar1);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                Memory::free_static(pOVar1,false);
              }
            }
            CowData<char32_t>::_unref(pCVar9 + 8);
            CowData<char32_t>::_unref(pCVar9);
            uVar12 = uVar12 + 1;
          }
          goto LAB_0012567b;
        }
        if (lVar4 == lVar10) {
LAB_00125565:
          puVar8 = *(undefined8 **)this;
          if (puVar8 == (undefined8 *)0x0) {
LAB_0012567b:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar6 = puVar8[-1];
          if (lVar6 < param_1) goto LAB_0012540a;
LAB_0012548f:
          puVar8[-1] = param_1;
          goto LAB_00125493;
        }
        if (lVar6 != 0) {
          uVar7 = _realloc(this,lVar4);
          if ((int)uVar7 != 0) goto LAB_00125495;
          goto LAB_00125565;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
        if (puVar5 != (undefined8 *)0x0) {
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          puVar5[1] = 0;
          *(undefined8 **)this = puVar8;
          lVar6 = 0;
LAB_0012540a:
          do {
            local_48 = 0;
            lVar10 = lVar6 + 1;
            local_50 = 0;
            pCVar9 = (CowData<char32_t> *)(puVar8 + lVar6 * 4);
            *(undefined8 *)pCVar9 = 0;
            CowData<char32_t>::_ref(pCVar9,(CowData *)&local_50);
            *(undefined8 *)(pCVar9 + 8) = 0;
            CowData<char32_t>::_ref(pCVar9 + 8,(CowData *)&local_48);
            *(undefined8 *)(pCVar9 + 0x10) = 0;
            *(undefined4 *)(pCVar9 + 0x18) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            puVar8 = *(undefined8 **)this;
            lVar6 = lVar10;
          } while (param_1 != lVar10);
          if (puVar8 == (undefined8 *)0x0) {
LAB_001255ae:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          goto LAB_0012548f;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      uVar7 = 6;
      goto LAB_00125495;
    }
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 != lVar6) {
      if (param_1 != 0) {
        _copy_on_write(this);
        lVar10 = lVar6 * 0x20;
        if (lVar10 != 0) {
          uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
          uVar11 = uVar11 | uVar11 >> 2;
          uVar11 = uVar11 | uVar11 >> 4;
          uVar11 = uVar11 | uVar11 >> 8;
          uVar11 = uVar11 | uVar11 >> 0x10;
          lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
        }
        goto LAB_00125364;
      }
      _unref(this);
    }
  }
LAB_00125493:
  uVar7 = 0;
LAB_00125495:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* CowData<EditorProperty*>::_realloc(long) */

undefined8 __thiscall
CowData<EditorProperty*>::_realloc(CowData<EditorProperty*> *this,long param_1)

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
/* Error CowData<EditorProperty*>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorProperty*>::resize<false>(CowData<EditorProperty*> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00125910:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00125910;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00125821;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00125821:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AnimationNodeBlendTreeEditor::_notificationv(int, bool) */

void __thiscall
AnimationNodeBlendTreeEditor::_notificationv
          (AnimationNodeBlendTreeEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification((int)this);
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_copy_from(RBSet<String, Comparator<String>,
   DefaultAllocator> const&) */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_copy_from
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,RBSet *param_1)

{
  String *this_00;
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  char cVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  undefined4 *puVar8;
  Element *pEVar9;
  long lVar10;
  bool bVar11;
  
  clear(this);
  if (*(long *)param_1 != 0) {
    lVar2 = *(long *)(*(long *)param_1 + 0x10);
    if (lVar2 != *(long *)(param_1 + 8)) {
      do {
        lVar10 = lVar2;
        lVar2 = *(long *)(lVar10 + 0x10);
      } while (*(long *)(param_1 + 8) != *(long *)(lVar10 + 0x10));
      do {
        puVar8 = *(undefined4 **)this;
        this_00 = (String *)(lVar10 + 0x30);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(puVar8 + 8) = (undefined1  [16])0x0;
          uVar1 = *(undefined8 *)(this + 8);
          *(undefined8 *)(puVar8 + 0xc) = 0;
          *(undefined4 **)this = puVar8;
          *puVar8 = 1;
          *(undefined8 *)(puVar8 + 2) = uVar1;
          *(undefined8 *)(puVar8 + 4) = uVar1;
          *(undefined8 *)(puVar8 + 6) = uVar1;
        }
        else {
          puVar3 = *(undefined4 **)(puVar8 + 4);
          if (*(undefined4 **)(puVar8 + 4) != *(undefined4 **)(this + 8)) {
            do {
              while( true ) {
                puVar8 = puVar3;
                cVar4 = String::operator<(this_00,(String *)(puVar8 + 0xc));
                if (cVar4 != '\0') break;
                cVar4 = String::operator<((String *)(puVar8 + 0xc),this_00);
                if (cVar4 == '\0') goto LAB_00125b65;
                puVar3 = *(undefined4 **)(puVar8 + 2);
                if (*(undefined4 **)(this + 8) == *(undefined4 **)(puVar8 + 2)) goto LAB_00125a80;
              }
              puVar3 = *(undefined4 **)(puVar8 + 4);
            } while (*(undefined4 **)(this + 8) != *(undefined4 **)(puVar8 + 4));
          }
        }
LAB_00125a80:
        pEVar5 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(pEVar5 + 0x20) = (undefined1  [16])0x0;
        uVar1 = *(undefined8 *)(this + 8);
        *(undefined8 *)(pEVar5 + 0x30) = 0;
        lVar2 = *(long *)(lVar10 + 0x30);
        *(undefined4 *)pEVar5 = 0;
        *(undefined4 **)(pEVar5 + 0x18) = puVar8;
        *(undefined8 *)(pEVar5 + 8) = uVar1;
        *(undefined8 *)(pEVar5 + 0x10) = uVar1;
        if (lVar2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pEVar5 + 0x30),(CowData *)this_00);
        }
        if ((*(undefined4 **)this == puVar8) ||
           (cVar4 = String::operator<(this_00,(String *)(puVar8 + 0xc)), cVar4 != '\0')) {
          *(Element **)(puVar8 + 4) = pEVar5;
        }
        else {
          *(Element **)(puVar8 + 2) = pEVar5;
        }
        pEVar7 = pEVar5;
        pEVar9 = *(Element **)(pEVar5 + 8);
        if (*(Element **)(this + 8) == *(Element **)(pEVar5 + 8)) {
          do {
            pEVar6 = *(Element **)(pEVar7 + 0x18);
            bVar11 = pEVar7 == *(Element **)(pEVar6 + 8);
            pEVar7 = pEVar6;
          } while (bVar11);
          if (*(Element **)this == pEVar6) {
            pEVar6 = (Element *)0x0;
          }
        }
        else {
          do {
            pEVar7 = pEVar9 + 0x10;
            pEVar6 = pEVar9;
            pEVar9 = *(Element **)pEVar7;
          } while (*(Element **)(this + 8) != *(Element **)pEVar7);
        }
        *(Element **)(pEVar5 + 0x20) = pEVar6;
        pEVar9 = *(Element **)(pEVar5 + 0x10);
        pEVar7 = pEVar5;
        if (*(Element **)(this + 8) == *(Element **)(pEVar5 + 0x10)) {
          do {
            pEVar9 = pEVar7;
            pEVar7 = *(Element **)(pEVar9 + 0x18);
          } while (pEVar9 == *(Element **)(pEVar7 + 0x10));
          if (*(Element **)this != pEVar9) goto LAB_00125b3c;
          *(undefined8 *)(pEVar5 + 0x28) = 0;
          if (pEVar6 != (Element *)0x0) goto LAB_00125b45;
        }
        else {
          do {
            pEVar7 = pEVar9;
            pEVar9 = *(Element **)(pEVar7 + 8);
          } while (*(Element **)(this + 8) != *(Element **)(pEVar7 + 8));
LAB_00125b3c:
          *(Element **)(pEVar5 + 0x28) = pEVar7;
          if (pEVar6 != (Element *)0x0) {
LAB_00125b45:
            *(Element **)(pEVar6 + 0x28) = pEVar5;
            pEVar7 = *(Element **)(pEVar5 + 0x28);
            if (pEVar7 == (Element *)0x0) goto LAB_00125b56;
          }
          *(Element **)(pEVar7 + 0x20) = pEVar5;
        }
LAB_00125b56:
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
        _insert_rb_fix(this,pEVar5);
LAB_00125b65:
        lVar10 = *(long *)(lVar10 + 0x20);
      } while (lVar10 != 0);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, RBSet<String, Comparator<String>, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, RBSet<String,
   Comparator<String>, DefaultAllocator> > > >::operator[](String const&) */

RBSet<String,Comparator<String>,DefaultAllocator> * __thiscall
HashMap<String,RBSet<String,Comparator<String>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,Comparator<String>,DefaultAllocator>>>>
::operator[](HashMap<String,RBSet<String,Comparator<String>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,Comparator<String>,DefaultAllocator>>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
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
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined8 *puVar43;
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  long in_FS_OFFSET;
  RBSet<String,Comparator<String>,DefaultAllocator> *local_c8;
  RBSet<String,Comparator<String>,DefaultAllocator> *local_c0;
  void *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  long local_68;
  void *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00126390:
    local_88 = 0;
    local_90 = &_GlobalNilClass::_nil;
    local_98 = (void *)0x0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar4 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar4,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
      goto LAB_00125cd4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00125ebf;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00125ce3;
LAB_00125ee5:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (RBSet<String,Comparator<String>,DefaultAllocator> *)0x18;
      goto LAB_001262e1;
    }
    uVar41 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    pvVar4 = *(void **)(this + 0x10);
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
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar39);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar55 * lVar53;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar52;
          lVar46 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar13 * auVar29,8);
          uVar38 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar38 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar38 * lVar53;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar52;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar53;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar52;
            uVar54 = SUB164(auVar15 * auVar31,8);
            uVar50 = uVar42;
            if (uVar54 < uVar51) {
              *puVar1 = uVar55;
              puVar43 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar50 = *puVar43;
              *puVar43 = uVar42;
              uVar55 = uVar38;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar52;
            lVar46 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar16 * auVar32,8);
            uVar42 = uVar50;
            uVar38 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_98 = (void *)0x0;
      local_90 = &_GlobalNilClass::_nil;
      local_88 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    }
    else {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar41 = CONCAT44(0,uVar55);
      uVar39 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar40 = 1;
      if (uVar39 != 0) {
        uVar40 = uVar39;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar40 * lVar3;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      lVar46 = SUB168(auVar9 * auVar25,8);
      uVar39 = *(uint *)(lVar53 + lVar46 * 4);
      uVar38 = SUB164(auVar9 * auVar25,8);
      if (uVar39 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        lVar47 = *(long *)(this + 8);
        uVar51 = 0;
        do {
          if (uVar40 == uVar39) {
            cVar37 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar37 != '\0') {
              local_c0 = (RBSet<String,Comparator<String>,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar38 * 8) + 0x18);
              goto LAB_0012630d;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar51 = uVar51 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar38 + 1) * lVar3;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          lVar46 = SUB168(auVar10 * auVar26,8);
          uVar39 = *(uint *)(lVar53 + lVar46 * 4);
          uVar38 = SUB164(auVar10 * auVar26,8);
        } while ((uVar39 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar39 * lVar3, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar41, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar38 + uVar55) - SUB164(auVar11 * auVar27,8)) * lVar3,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar41, uVar51 <= SUB164(auVar12 * auVar28,8)));
      }
      local_98 = (void *)0x0;
      local_90 = &_GlobalNilClass::_nil;
      local_88 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_00126390;
    }
LAB_00125cd4:
    iVar45 = *(int *)(this + 0x2c);
    uVar48 = (ulong)uVar55;
    if (iVar45 != 0) {
LAB_00125ce3:
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      uVar41 = CONCAT44(0,uVar40);
      lVar53 = *(long *)(this + 0x10);
      uVar39 = 1;
      if (uVar38 != 0) {
        uVar39 = uVar38;
      }
      uVar54 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar41;
      lVar46 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar51 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        do {
          if (uVar39 == uVar38) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              RBSet<String,Comparator<String>,DefaultAllocator>::_copy_from
                        ((RBSet<String,Comparator<String>,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                         (RBSet *)&local_98);
              local_c0 = (RBSet<String,Comparator<String>,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_001262e1;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar41;
          lVar46 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar38 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar40 + uVar51) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar41, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      iVar45 = *(int *)(this + 0x2c);
      uVar48 = (ulong)uVar55;
    }
LAB_00125ebf:
    if ((float)uVar48 * __LC25 < (float)(iVar45 + 1)) goto LAB_00125ee5;
  }
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
  }
  local_60 = (void *)0x0;
  local_58 = &_GlobalNilClass::_nil;
  local_50 = 0;
  RBSet<String,Comparator<String>,DefaultAllocator>::_copy_from
            ((RBSet<String,Comparator<String>,DefaultAllocator> *)&local_60,(RBSet *)&local_98);
  puVar43 = (undefined8 *)operator_new(0x30,"");
  puVar43[2] = 0;
  *puVar43 = local_78._0_8_;
  puVar43[1] = local_78._8_8_;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar43 + 2),(CowData *)&local_68);
  }
  puVar43[3] = 0;
  *(undefined4 *)(puVar43 + 5) = 0;
  puVar43[4] = &_GlobalNilClass::_nil;
  local_c0 = (RBSet<String,Comparator<String>,DefaultAllocator> *)(puVar43 + 3);
  RBSet<String,Comparator<String>,DefaultAllocator>::_copy_from(local_c0,(RBSet *)&local_60);
  RBSet<String,Comparator<String>,DefaultAllocator>::clear
            ((RBSet<String,Comparator<String>,DefaultAllocator> *)&local_60);
  pvVar44 = local_60;
  if (local_60 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)local_60 + 0x30));
    Memory::free_static(pvVar44,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  puVar49 = *(undefined8 **)(this + 0x20);
  if (puVar49 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar43;
  }
  else {
    *puVar49 = puVar43;
    puVar43[1] = puVar49;
  }
  *(undefined8 **)(this + 0x20) = puVar43;
  uVar40 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar40 != 0) {
    uVar55 = uVar40;
  }
  uVar38 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar40);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (ulong)uVar55 * lVar53;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar41;
  lVar47 = SUB168(auVar17 * auVar33,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar17 * auVar33,8);
  uVar39 = *puVar1;
  while (uVar39 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar39 * lVar53;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar41;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar18 * auVar34,8)) * lVar53;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar41;
    uVar51 = SUB164(auVar19 * auVar35,8);
    puVar49 = puVar43;
    if (uVar51 < uVar38) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      puVar49 = (undefined8 *)*puVar2;
      *puVar2 = puVar43;
      uVar38 = uVar51;
      uVar55 = uVar39;
    }
    uVar38 = uVar38 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar41;
    lVar47 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar3 + lVar47 * 4);
    iVar45 = SUB164(auVar20 * auVar36,8);
    puVar43 = puVar49;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar47 * 8) = puVar43;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001262e1:
  local_c8 = (RBSet<String,Comparator<String>,DefaultAllocator> *)&local_98;
  RBSet<String,Comparator<String>,DefaultAllocator>::clear(local_c8);
  pvVar44 = local_98;
  if (local_98 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)local_98 + 0x30));
    Memory::free_static(pvVar44,false);
  }
LAB_0012630d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_c0;
}



/* AnimationNodeBlendTreeEditor::add_custom_type(String const&, Ref<Script> const&) */

void AnimationNodeBlendTreeEditor::_GLOBAL__sub_I_add_custom_type(void)

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
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper
                 ,&__dso_handle);
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
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
/* EditorInspectorPluginAnimationNodeAnimation::~EditorInspectorPluginAnimationNodeAnimation() */

void __thiscall
EditorInspectorPluginAnimationNodeAnimation::~EditorInspectorPluginAnimationNodeAnimation
          (EditorInspectorPluginAnimationNodeAnimation *this)

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
/* AnimationNodeBlendTreeEditor::AddOption::~AddOption() */

void __thiscall AnimationNodeBlendTreeEditor::AddOption::~AddOption(AddOption *this)

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
/* List<AnimationNodeBlendTree::NodeConnection, DefaultAllocator>::~List() */

void __thiscall
List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator>::~List
          (List<AnimationNodeBlendTree::NodeConnection,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* MethodBindTR<bool, Ref<AnimationNode> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<bool,Ref<AnimationNode>const&>::~MethodBindTR
          (MethodBindTR<bool,Ref<AnimationNode>const&> *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, Ref<AnimationNode>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,Ref<AnimationNode>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Ref<AnimationNode>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Ref<AnimationNode>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName const&, Variant
   const&, String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2 const&, Vector2 const&,
   StringName const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&,Vector2_const&,StringName_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, int, Array const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int,Array_const&,String_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, String
   const&, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,String_const&,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, Vector2
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, TypedArray<StringName>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,TypedArray<StringName>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void, String const&, int, Vector2
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,String_const&,int,Vector2_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendTreeEditor, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendTreeEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeAnimationEditor, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationNodeAnimationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeAnimationEditor,void> *this)

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


