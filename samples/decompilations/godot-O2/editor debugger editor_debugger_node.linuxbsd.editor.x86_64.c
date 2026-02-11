
/* EditorDebuggerNode::_remote_tree_select_requested(ObjectID, int) */

void __thiscall
EditorDebuggerNode::_remote_tree_select_requested
          (EditorDebuggerNode *this,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = TabContainer::get_current_tab();
  if (iVar1 != param_3) {
    return;
  }
  EditorDebuggerTree::select_node(*(undefined8 *)(this + 0xa48),param_2);
  return;
}



/* EditorDebuggerNode::_breakpoints_cleared_in_tree(int) */

void __thiscall
EditorDebuggerNode::_breakpoints_cleared_in_tree(EditorDebuggerNode *this,int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = TabContainer::get_current_tab();
  if (iVar2 == param_1) {
    if (_breakpoints_cleared_in_tree(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_breakpoints_cleared_in_tree(int)::{lambda()#1}::operator()()::
                                   sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_breakpoints_cleared_in_tree(int)::{lambda()#1}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &_breakpoints_cleared_in_tree(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_breakpoints_cleared_in_tree(int)::{lambda()#1}::operator()()::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&_breakpoints_cleared_in_tree(int)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::live_debug_remove_node(NodePath const&) */

void EditorDebuggerNode::live_debug_remove_node(NodePath *param_1)

{
  undefined8 uVar1;
  int iVar2;
  NodePath *pNVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pNVar3 = (NodePath *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pNVar3 == (NodePath *)0x0) break;
    iVar5 = iVar5 + 1;
    ScriptEditorDebugger::live_debug_remove_node(pNVar3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::live_debug_duplicate_node(NodePath const&, String const&) */

void EditorDebuggerNode::live_debug_duplicate_node(NodePath *param_1,String *param_2)

{
  undefined8 uVar1;
  int iVar2;
  NodePath *pNVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pNVar3 = (NodePath *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pNVar3 == (NodePath *)0x0) break;
    iVar5 = iVar5 + 1;
    ScriptEditorDebugger::live_debug_duplicate_node(pNVar3,param_2);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::live_debug_remove_and_keep_node(NodePath const&, ObjectID) */

void __thiscall
EditorDebuggerNode::live_debug_remove_and_keep_node
          (EditorDebuggerNode *this,undefined8 param_1,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined8 *)(this + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar4) {
      return;
    }
    lVar3 = TabContainer::get_tab_control((int)uVar1);
    if (lVar3 == 0) break;
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar3 == 0) break;
    iVar4 = iVar4 + 1;
    ScriptEditorDebugger::live_debug_remove_and_keep_node(lVar3,param_1,param_3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::live_debug_create_node(NodePath const&, String const&, String const&) */

void EditorDebuggerNode::live_debug_create_node(NodePath *param_1,String *param_2,String *param_3)

{
  undefined8 uVar1;
  int iVar2;
  NodePath *pNVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pNVar3 = (NodePath *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pNVar3 == (NodePath *)0x0) break;
    iVar5 = iVar5 + 1;
    ScriptEditorDebugger::live_debug_create_node(pNVar3,param_2,param_3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::live_debug_instantiate_node(NodePath const&, String const&, String const&) */

void EditorDebuggerNode::live_debug_instantiate_node
               (NodePath *param_1,String *param_2,String *param_3)

{
  undefined8 uVar1;
  int iVar2;
  NodePath *pNVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pNVar3 = (NodePath *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pNVar3 == (NodePath *)0x0) break;
    iVar5 = iVar5 + 1;
    ScriptEditorDebugger::live_debug_instantiate_node(pNVar3,param_2,param_3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::live_debug_restore_node(ObjectID, NodePath const&, int) */

void EditorDebuggerNode::live_debug_restore_node(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar4) {
      return;
    }
    lVar3 = TabContainer::get_tab_control((int)uVar1);
    if (lVar3 == 0) break;
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar3 == 0) break;
    iVar4 = iVar4 + 1;
    ScriptEditorDebugger::live_debug_restore_node(lVar3,param_2,param_3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::live_debug_reparent_node(NodePath const&, NodePath const&, String const&,
   int) */

void EditorDebuggerNode::live_debug_reparent_node
               (NodePath *param_1,NodePath *param_2,String *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  NodePath *pNVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pNVar3 = (NodePath *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pNVar3 == (NodePath *)0x0) break;
    ScriptEditorDebugger::live_debug_reparent_node(pNVar3,param_2,param_3,param_4);
    iVar5 = iVar5 + 1;
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::_paused() */

void __thiscall EditorDebuggerNode::_paused(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  cVar2 = BaseButton::is_pressed();
  uVar1 = *(undefined8 *)(this + 0xa18);
  iVar5 = 0;
  while( true ) {
    iVar3 = TabContainer::get_tab_count();
    if (iVar3 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar4 == 0) break;
    if (cVar2 == '\0') {
      if (*(int *)(lVar4 + 0xc3c) != 0) {
        ScriptEditorDebugger::debug_continue();
      }
    }
    else if (*(int *)(lVar4 + 0xc3c) == 0) {
      ScriptEditorDebugger::debug_break();
    }
    iVar5 = iVar5 + 1;
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* Ref<Theme>::TEMPNAMEPLACEHOLDERVALUE(Ref<Theme> const&) [clone .isra.0] */

void __thiscall Ref<Theme>::operator=(Ref<Theme> *this,Ref *param_1)

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



/* EditorDebuggerNode::_properties_changed(void*, Object*, StringName const&, Variant const&) */

void EditorDebuggerNode::_properties_changed
               (void *param_1,Object *param_2,StringName *param_3,Variant *param_4)

{
  undefined8 uVar1;
  int iVar2;
  Object *pOVar3;
  long lVar4;
  int iVar5;
  
  if (singleton == 0) {
    return;
  }
  iVar5 = 0;
  uVar1 = *(undefined8 *)(singleton + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pOVar3 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pOVar3 == (Object *)0x0) break;
    iVar5 = iVar5 + 1;
    ScriptEditorDebugger::_property_changed(pOVar3,(StringName *)param_2,(Variant *)param_3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::_methods_changed(void*, Object*, StringName const&, Variant const**, int) */

void EditorDebuggerNode::_methods_changed
               (void *param_1,Object *param_2,StringName *param_3,Variant **param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  Object *pOVar3;
  long lVar4;
  int iVar5;
  
  if (singleton == 0) {
    return;
  }
  iVar5 = 0;
  uVar1 = *(undefined8 *)(singleton + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pOVar3 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pOVar3 == (Object *)0x0) break;
    ScriptEditorDebugger::_method_changed
              (pOVar3,(StringName *)param_2,(Variant **)param_3,(int)param_4);
    iVar5 = iVar5 + 1;
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::_debugger_wants_stop(int) */

void EditorDebuggerNode::_debugger_wants_stop(int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  CallableCustom *this;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Callable aCStack_88 [16];
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = TabContainer::get_tab_control
                    ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa18));
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar5 = __dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  lVar4 = EditorNode::singleton;
  iVar3 = (int)*(undefined8 *)(lVar5 + 0xbf8);
  if (iVar3 != 0) {
    this = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC11;
    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this = &PTR_hash_0011a5e0;
    *(undefined8 *)(this + 0x40) = 0;
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    *(long *)(this + 0x28) = lVar4;
    *(undefined8 *)(this + 0x30) = uVar1;
    *(undefined8 *)(this + 0x10) = 0;
    *(code **)(this + 0x38) = EditorNode::stop_child_process;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "EditorNode::stop_child_process";
    Callable::Callable(aCStack_88,this);
    Variant::Variant((Variant *)local_68,iVar3);
    Variant::Variant((Variant *)local_50,0);
    local_78[0] = (Variant *)local_68;
    Callable::call_deferredp((Variant **)aCStack_88,(int)local_78);
    if (Variant::needs_deinit[local_50[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(aCStack_88);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_debugger_stopped(int) */

void EditorDebuggerNode::_debugger_stopped(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 in_register_0000003c;
  char cVar6;
  
  lVar4 = TabContainer::get_tab_control
                    ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa18));
  if (lVar4 != 0) {
    lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa18);
      cVar6 = '\0';
      iVar5 = 0;
      do {
        iVar3 = TabContainer::get_tab_count();
        if (iVar3 <= iVar5) {
LAB_00100c13:
          if (cVar6 != '\0') {
            return;
          }
          BaseButton::set_pressed(SUB81(*(undefined8 *)(EditorRunBar::singleton + 0xa58),0));
          BaseButton::set_disabled(SUB81(*(undefined8 *)(EditorRunBar::singleton + 0xa58),0));
          SceneTreeDock::hide_remote_tree();
          SceneTreeDock::hide_tab_buttons();
          EditorNode::notify_all_debug_sessions_exited();
          return;
        }
        lVar4 = TabContainer::get_tab_control((int)uVar1);
        if (lVar4 == 0) {
LAB_00100bee:
          _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                           "Parameter \"dbg\" is null.",0,0);
          goto LAB_00100c13;
        }
        lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
        if (lVar4 == 0) goto LAB_00100bee;
        if (*(long **)(lVar4 + 0xb68) != (long *)0x0) {
          cVar2 = (**(code **)(**(long **)(lVar4 + 0xb68) + 0x150))();
          if (cVar2 != '\0') {
            cVar6 = cVar2;
          }
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
  }
  _err_print_error("_debugger_stopped","editor/debugger/editor_debugger_node.cpp",0x1c3,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::_breakpoint_set_in_tree(Ref<RefCounted>, int, bool, int) */

void __thiscall
EditorDebuggerNode::_breakpoint_set_in_tree
          (EditorDebuggerNode *this,long *param_2,int param_3,bool param_4,int param_5)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  Variant *pVVar4;
  Object *pOVar5;
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
  iVar3 = TabContainer::get_current_tab();
  if (iVar3 == param_5) {
    pOVar5 = (Object *)*param_2;
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar5 = (Object *)0x0;
      }
    }
    if (_breakpoint_set_in_tree(Ref<RefCounted>,int,bool,int)::{lambda()#1}::operator()()::sname ==
        '\0') {
      iVar3 = __cxa_guard_acquire(&_breakpoint_set_in_tree(Ref<RefCounted>,int,bool,int)::
                                   {lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_breakpoint_set_in_tree(Ref<RefCounted>,int,bool,int)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_breakpoint_set_in_tree(Ref<RefCounted>,int,bool,int)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_breakpoint_set_in_tree(Ref<RefCounted>,int,bool,int)::{lambda()#1}::
                             operator()()::sname);
      }
    }
    Variant::Variant(local_a8,pOVar5);
    Variant::Variant(local_90,param_3);
    Variant::Variant(local_78,param_4);
    local_58 = (undefined1  [16])0x0;
    pVVar4 = local_48;
    local_60 = 0;
    local_c8 = local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_breakpoint_set_in_tree(Ref<RefCounted>,int,bool,int)::{lambda()#1}::
                     operator()()::sname,&local_c8,3);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != local_a8);
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar5,false);
            return;
          }
          goto LAB_00100ecd;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100ecd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::request_remote_tree() */

void __thiscall EditorDebuggerNode::request_remote_tree(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar2 = TabContainer::get_tab_control((int)uVar1);
  if (lVar2 != 0) {
    __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::request_remote_tree();
  return;
}



/* EditorDebuggerNode::_save_node_requested(ObjectID, String const&, int) */

void __thiscall
EditorDebuggerNode::_save_node_requested
          (EditorDebuggerNode *this,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = TabContainer::get_current_tab();
  if (iVar2 != param_4) {
    return;
  }
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar3 = TabContainer::get_tab_control((int)uVar1);
  if (lVar3 != 0) {
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::save_node(lVar3,param_2,param_3);
  return;
}



/* EditorDebuggerNode::_remote_object_requested(ObjectID, int) */

void __thiscall
EditorDebuggerNode::_remote_object_requested
          (EditorDebuggerNode *this,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = TabContainer::get_current_tab();
  if (iVar2 != param_3) {
    return;
  }
  *(undefined4 *)(this + 0xa44) = 0x3f333333;
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar3 = TabContainer::get_tab_control((int)uVar1);
  if (lVar3 != 0) {
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::request_remote_object(lVar3,param_2);
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



/* EditorDebuggerNode::_remote_tree_updated(int) */

void __thiscall EditorDebuggerNode::_remote_tree_updated(EditorDebuggerNode *this,int param_1)

{
  SceneDebuggerTree *pSVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = TabContainer::get_current_tab();
  if (iVar3 != param_1) {
    return;
  }
  Tree::clear();
  pSVar1 = *(SceneDebuggerTree **)(this + 0xa48);
  uVar2 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar4 = TabContainer::get_tab_control((int)uVar2);
  if (lVar4 != 0) {
    __dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  iVar3 = ScriptEditorDebugger::get_remote_tree();
  EditorDebuggerTree::update_scene_tree(pSVar1,iVar3);
  return;
}



/* EditorDebuggerNode::register_undo_redo(UndoRedo*) */

void __thiscall EditorDebuggerNode::register_undo_redo(EditorDebuggerNode *this,UndoRedo *param_1)

{
  UndoRedo::set_method_notify_callback
            ((_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr_ptr_int *)param_1,
             _methods_changed);
  UndoRedo::set_property_notify_callback
            ((_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr *)param_1,
             _properties_changed);
  return;
}



/* EditorDebuggerNode::get_inspected_remote_object() */

undefined8 EditorDebuggerNode::get_inspected_remote_object(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EditorSelectionHistory::get_current();
  uVar4 = (uint)uVar2 & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
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
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((uVar2 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      uVar2 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (uVar2 != 0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&EditorDebuggerRemoteObject::typeinfo,0);
          return uVar3;
        }
        goto LAB_001013c7;
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001013c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_remote_object_property_updated(ObjectID, String const&, int) */

void __thiscall
EditorDebuggerNode::_remote_object_property_updated
          (undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = TabContainer::get_current_tab();
  if (iVar1 == param_4) {
    lVar2 = get_inspected_remote_object();
    if ((lVar2 != 0) && (param_2 == *(long *)(lVar2 + 0x178))) {
      EditorInspector::update_property(*(String **)(InspectorDock::singleton + 0xa18));
      return;
    }
  }
  return;
}



/* EditorDebuggerNode::get_debugger(int) const */

undefined8 EditorDebuggerNode::get_debugger(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 in_register_0000003c;
  
  lVar1 = TabContainer::get_tab_control
                    ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa18));
  if (lVar1 != 0) {
    uVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    return uVar2;
  }
  return 0;
}



/* EditorDebuggerNode::get_previous_debugger() const */

undefined8 __thiscall EditorDebuggerNode::get_previous_debugger(EditorDebuggerNode *this)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_previous_tab();
  lVar1 = TabContainer::get_tab_control((int)uVar2);
  if (lVar1 != 0) {
    uVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    return uVar2;
  }
  return 0;
}



/* EditorDebuggerNode::get_current_debugger() const */

undefined8 __thiscall EditorDebuggerNode::get_current_debugger(EditorDebuggerNode *this)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar1 = TabContainer::get_tab_control((int)uVar2);
  if (lVar1 != 0) {
    uVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    return uVar2;
  }
  return 0;
}



/* EditorDebuggerNode::get_default_debugger() const */

undefined8 __thiscall EditorDebuggerNode::get_default_debugger(EditorDebuggerNode *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa18));
  if (lVar1 != 0) {
    uVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    return uVar2;
  }
  return 0;
}



/* EditorDebuggerNode::get_server_uri() const */

void EditorDebuggerNode::get_server_uri(void)

{
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(in_RSI + 0xa10) == (long *)0x0) {
    _err_print_error("get_server_uri","editor/debugger/editor_debugger_node.cpp",0xf6,
                     "Condition \"server.is_null()\" is true. Returning: \"\"",0,0);
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    (**(code **)(**(long **)(in_RSI + 0xa10) + 0x150))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_break_state_changed() */

void __thiscall EditorDebuggerNode::_break_state_changed(EditorDebuggerNode *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  
  lVar13 = get_current_debugger(this);
  iVar12 = *(int *)(lVar13 + 0xc3c);
  lVar13 = get_current_debugger(this);
  if (*(int *)(lVar13 + 0xc3c) != 0) {
    if (*(long *)(lVar13 + 0xc18) != 0) {
      uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar13 + 0xc38) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar13 + 0xc38) * 8);
      uVar14 = *(long *)(lVar13 + 0xc08) * 0x3ffff - 1;
      uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
      uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
      uVar14 = uVar14 >> 0x16 ^ uVar14;
      uVar20 = uVar14 & 0xffffffff;
      if ((int)uVar14 == 0) {
        uVar20 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar20 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar18;
      lVar16 = SUB168(auVar2 * auVar6,8);
      uVar17 = *(uint *)(*(long *)(lVar13 + 0xc20) + lVar16 * 4);
      iVar15 = SUB164(auVar2 * auVar6,8);
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          if ((uVar17 == (uint)uVar20) &&
             (*(long *)(lVar13 + 0xc08) ==
              *(long *)(*(long *)(*(long *)(lVar13 + 0xc18) + lVar16 * 8) + 0x10)))
          goto joined_r0x0010182c;
          uVar19 = uVar19 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar15 + 1) * lVar1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar18;
          lVar16 = SUB168(auVar3 * auVar7,8);
          uVar17 = *(uint *)(*(long *)(lVar13 + 0xc20) + lVar16 * 4);
          iVar15 = SUB164(auVar3 * auVar7,8);
        } while ((uVar17 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar17 * lVar1, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar18, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(lVar13 + 0xc38) * 4) + iVar15) -
                                      SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar18, uVar19 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
joined_r0x0010182c:
  if (iVar12 == 0) {
    lVar13 = *(long *)(this + 0xa28);
  }
  else {
    EditorBottomPanel::make_item_visible
              (*(Control **)(EditorNode::singleton + 0xa40),SUB81(this,0),true);
    lVar13 = *(long *)(this + 0xa28);
  }
  if (lVar13 == 0) {
    return;
  }
  iVar12 = MenuButton::get_popup();
  bVar11 = (bool)PopupMenu::get_item_index(iVar12);
  PopupMenu::set_item_disabled(iVar12,bVar11);
  bVar11 = (bool)PopupMenu::get_item_index(iVar12);
  PopupMenu::set_item_disabled(iVar12,bVar11);
  bVar11 = (bool)PopupMenu::get_item_index(iVar12);
  PopupMenu::set_item_disabled(iVar12,bVar11);
  bVar11 = (bool)PopupMenu::get_item_index(iVar12);
  PopupMenu::set_item_disabled(iVar12,bVar11);
  return;
}



/* EditorDebuggerNode::_breaked(bool, bool, String const&, bool, int) */

void EditorDebuggerNode::_breaked
               (bool param_1,bool param_2,String *param_3,bool param_4,int param_5)

{
  Variant *pVVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Variant *pVVar7;
  undefined7 in_register_00000039;
  EditorDebuggerNode *this;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  this = (EditorDebuggerNode *)CONCAT71(in_register_00000039,param_1);
  uVar3 = *(undefined8 *)(this + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TabContainer::get_current_tab();
  lVar5 = TabContainer::get_tab_control((int)uVar3);
  if (lVar5 == 0) {
    lVar6 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa18));
    lVar5 = 0;
    if (lVar6 != 0) goto LAB_00101931;
  }
  else {
    lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    lVar6 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa18));
    if (lVar6 != 0) {
LAB_00101931:
      lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    }
    if (lVar5 != lVar6) {
      if (!param_2) goto LAB_00101948;
      TabContainer::set_current_tab((int)*(undefined8 *)(this + 0xa18));
    }
  }
  _break_state_changed(this);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(EditorRunBar::singleton + 0xa58),0));
  if ((_breaked(bool,bool,String_const&,bool,int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_breaked(bool,bool,String_const&,bool,int)::{lambda()#1}::
                                   operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_breaked(bool,bool,String_const&,bool,int)::{lambda()#1}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_breaked(bool,bool,String_const&,bool,int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_breaked(bool,bool,String_const&,bool,int)::{lambda()#1}::operator()()::
                         sname);
  }
  Variant::Variant(local_88,param_2);
  Variant::Variant(local_70,SUB81(param_3,0));
  local_50 = (undefined1  [16])0x0;
  pVVar7 = (Variant *)&local_58;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_breaked(bool,bool,String_const&,bool,int)::{lambda()#1}::operator()()::sname,
             &local_a8,2);
  cVar2 = Variant::needs_deinit[(int)local_58];
  while( true ) {
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
    if (pVVar7 == local_88) break;
    pVVar1 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    cVar2 = Variant::needs_deinit[*(int *)pVVar1];
  }
LAB_00101948:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::is_skip_breakpoints() const */

void __thiscall EditorDebuggerNode::is_skip_breakpoints(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar2 = TabContainer::get_tab_control((int)uVar1);
  if (lVar2 != 0) {
    __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::is_skip_breakpoints();
  return;
}



/* EditorDebuggerNode::reload_all_scripts() */

void __thiscall EditorDebuggerNode::reload_all_scripts(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined8 *)(this + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar4) {
      return;
    }
    lVar3 = TabContainer::get_tab_control((int)uVar1);
    if (lVar3 == 0) break;
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar3 == 0) break;
    ScriptEditorDebugger::reload_all_scripts();
    iVar4 = iVar4 + 1;
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::reload_scripts(Vector<String> const&) */

void EditorDebuggerNode::reload_scripts(Vector *param_1)

{
  undefined8 uVar1;
  int iVar2;
  Vector *pVVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar5) {
      return;
    }
    lVar4 = TabContainer::get_tab_control((int)uVar1);
    if (lVar4 == 0) break;
    pVVar3 = (Vector *)__dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (pVVar3 == (Vector *)0x0) break;
    iVar5 = iVar5 + 1;
    ScriptEditorDebugger::reload_scripts(pVVar3);
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::debug_next() */

void __thiscall EditorDebuggerNode::debug_next(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar2 = TabContainer::get_tab_control((int)uVar1);
  if (lVar2 != 0) {
    __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::debug_next();
  return;
}



/* EditorDebuggerNode::debug_step() */

void __thiscall EditorDebuggerNode::debug_step(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar2 = TabContainer::get_tab_control((int)uVar1);
  if (lVar2 != 0) {
    __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::debug_step();
  return;
}



/* EditorDebuggerNode::debug_break() */

void __thiscall EditorDebuggerNode::debug_break(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar2 = TabContainer::get_tab_control((int)uVar1);
  if (lVar2 != 0) {
    __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::debug_break();
  return;
}



/* EditorDebuggerNode::debug_continue() */

void __thiscall EditorDebuggerNode::debug_continue(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar2 = TabContainer::get_tab_control((int)uVar1);
  if (lVar2 != 0) {
    __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::debug_continue();
  return;
}



/* EditorDebuggerNode::get_var_value(String const&) const */

EditorDebuggerNode * __thiscall
EditorDebuggerNode::get_var_value(EditorDebuggerNode *this,String *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa18);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  TabContainer::get_current_tab();
  lVar3 = TabContainer::get_tab_control((int)uVar1);
  if (lVar3 != 0) {
    __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
  }
  ScriptEditorDebugger::get_var_value((String *)this);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::set_live_debugging(bool) */

void EditorDebuggerNode::set_live_debugging(bool param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined7 in_register_00000039;
  
  iVar4 = 0;
  uVar1 = *(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar4) {
      return;
    }
    lVar3 = TabContainer::get_tab_control((int)uVar1);
    if (lVar3 == 0) break;
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar3 == 0) break;
    iVar4 = iVar4 + 1;
    ScriptEditorDebugger::set_live_debugging(SUB81(lVar3,0));
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::update_live_edit_root() */

void __thiscall EditorDebuggerNode::update_live_edit_root(EditorDebuggerNode *this)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined8 *)(this + 0xa18);
  while( true ) {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar4) {
      return;
    }
    lVar3 = TabContainer::get_tab_control((int)uVar1);
    if (lVar3 == 0) break;
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar3 == 0) break;
    ScriptEditorDebugger::update_live_edit_root();
    iVar4 = iVar4 + 1;
  }
  _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::set_camera_override(EditorDebuggerNode::CameraOverride) */

void __thiscall EditorDebuggerNode::set_camera_override(EditorDebuggerNode *this,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined8 *)(this + 0xa18);
  do {
    iVar2 = TabContainer::get_tab_count();
    if (iVar2 <= iVar4) {
LAB_0010205b:
      *(undefined4 *)(this + 0xa60) = param_2;
      return;
    }
    lVar3 = TabContainer::get_tab_control((int)uVar1);
    if (lVar3 == 0) {
LAB_00102036:
      _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                       "Parameter \"dbg\" is null.",0,0);
      goto LAB_0010205b;
    }
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar3 == 0) goto LAB_00102036;
    iVar4 = iVar4 + 1;
    ScriptEditorDebugger::set_camera_override(lVar3,param_2);
  } while( true );
}



/* EditorDebuggerNode::get_camera_override() */

undefined4 __thiscall EditorDebuggerNode::get_camera_override(EditorDebuggerNode *this)

{
  return *(undefined4 *)(this + 0xa60);
}



/* EditorDebuggerNode::remove_debugger_plugin(Ref<EditorDebuggerPlugin> const&) */

undefined8 __thiscall
EditorDebuggerNode::remove_debugger_plugin(EditorDebuggerNode *this,Ref *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  char cVar35;
  uint uVar36;
  ulong uVar37;
  undefined8 uVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  uint *puVar45;
  long *plVar46;
  Object *pOVar47;
  uint uVar48;
  uint uVar49;
  uint *puVar50;
  uint uVar51;
  uint *puVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar38;
  
  pOVar47 = *(Object **)param_1;
  if (pOVar47 == (Object *)0x0) {
    uVar39 = _err_print_error("remove_debugger_plugin","editor/debugger/editor_debugger_node.cpp",
                              0x343,"Condition \"p_plugin.is_null()\" is true.",
                              "Debugger plugin is null.",0,0);
    return uVar39;
  }
  lVar5 = *(long *)(this + 0xa98);
  if ((lVar5 != 0) && (*(int *)(this + 0xabc) != 0)) {
    lVar6 = *(long *)(this + 0xab0);
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4);
    uVar38 = CONCAT44(0,uVar36);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab8) * 8);
    uVar37 = (long)pOVar47 * 0x3ffff - 1;
    uVar37 = (uVar37 ^ uVar37 >> 0x1f) * 0x15;
    uVar37 = (uVar37 ^ uVar37 >> 0xb) * 0x41;
    uVar37 = uVar37 >> 0x16 ^ uVar37;
    uVar53 = uVar37 & 0xffffffff;
    if ((int)uVar37 == 0) {
      uVar53 = 1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar53 * lVar7;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar38;
    uVar37 = SUB168(auVar9 * auVar22,8);
    uVar48 = *(uint *)(lVar6 + uVar37 * 4);
    lVar43 = uVar37 * 4;
    if (uVar48 != 0) {
      uVar51 = 0;
      iVar40 = SUB164(auVar9 * auVar22,8);
      lVar42 = lVar43;
      uVar49 = uVar48;
      do {
        if ((uVar49 == (uint)uVar53) &&
           (lVar8 = *(long *)(this + 0xaa0),
           pOVar47 == *(Object **)(lVar5 + (ulong)*(uint *)(lVar8 + lVar42) * 8))) {
          uVar49 = 0;
          goto LAB_0010226f;
        }
        uVar51 = uVar51 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((int)uVar37 + 1) * lVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar42 = SUB168(auVar10 * auVar23,8);
        uVar49 = *(uint *)(lVar6 + lVar42 * 4);
        uVar41 = SUB164(auVar10 * auVar23,8);
        uVar37 = (ulong)uVar41;
        lVar42 = lVar42 * 4;
      } while ((uVar49 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar49 * lVar7, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar38, auVar12._8_8_ = 0,
              auVar12._0_8_ = (ulong)((uVar36 + uVar41) - SUB164(auVar11 * auVar24,8)) * lVar7,
              auVar25._8_8_ = 0, auVar25._0_8_ = uVar38, uVar51 <= SUB164(auVar12 * auVar25,8)));
    }
  }
  uVar39 = 0;
  _err_print_error("remove_debugger_plugin","editor/debugger/editor_debugger_node.cpp",0x344,
                   "Condition \"!debugger_plugins.has(p_plugin)\" is true.",
                   "Debugger plugin doesn\'t exists.",0);
  return uVar39;
LAB_0010226f:
  if ((uint)uVar53 == uVar48) {
    uVar48 = *(uint *)(lVar8 + lVar43);
    uVar37 = (ulong)uVar48;
    if (pOVar47 == *(Object **)(lVar5 + uVar37 * 8)) {
      lVar42 = *(long *)(this + 0xaa8);
      uVar49 = *(uint *)(lVar42 + uVar37 * 4);
      uVar53 = (ulong)uVar49;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar38;
      lVar43 = SUB168(auVar16 * auVar29,8) * 4;
      uVar51 = SUB164(auVar16 * auVar29,8);
      uVar54 = (ulong)uVar51;
      puVar45 = (uint *)(lVar6 + lVar43);
      if ((*puVar45 == 0) ||
         (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar45 * lVar7, auVar30._8_8_ = 0,
         auVar30._0_8_ = uVar38, auVar18._8_8_ = 0,
         auVar18._0_8_ = (ulong)((uVar36 + uVar51) - SUB164(auVar17 * auVar30,8)) * lVar7,
         auVar31._8_8_ = 0, auVar31._0_8_ = uVar38, SUB164(auVar18 * auVar31,8) == 0)) {
        uVar54 = (ulong)uVar49;
      }
      else {
        while( true ) {
          puVar50 = (uint *)(lVar43 + lVar8);
          puVar1 = (uint *)(lVar8 + uVar53 * 4);
          puVar52 = (uint *)(uVar53 * 4 + lVar6);
          puVar2 = (undefined4 *)(lVar42 + (ulong)*puVar50 * 4);
          puVar3 = (undefined4 *)(lVar42 + (ulong)*puVar1 * 4);
          uVar4 = *puVar3;
          *puVar3 = *puVar2;
          *puVar2 = uVar4;
          uVar49 = *puVar45;
          *puVar45 = *puVar52;
          *puVar52 = uVar49;
          uVar49 = *puVar50;
          *puVar50 = *puVar1;
          *puVar1 = uVar49;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = (ulong)((int)uVar54 + 1) * lVar7;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar38;
          uVar44 = SUB168(auVar21 * auVar34,8);
          lVar43 = uVar44 * 4;
          puVar45 = (uint *)(lVar6 + lVar43);
          if ((*puVar45 == 0) ||
             (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)*puVar45 * lVar7, auVar32._8_8_ = 0,
             auVar32._0_8_ = uVar38, auVar20._8_8_ = 0,
             auVar20._0_8_ =
                  (ulong)((SUB164(auVar21 * auVar34,8) + uVar36) - SUB164(auVar19 * auVar32,8)) *
                  lVar7, auVar33._8_8_ = 0, auVar33._0_8_ = uVar38, SUB164(auVar20 * auVar33,8) == 0
             )) break;
          uVar53 = uVar54;
          uVar54 = uVar44 & 0xffffffff;
        }
      }
      *(undefined4 *)(lVar6 + uVar54 * 4) = 0;
      plVar46 = (long *)(lVar5 + uVar37 * 8);
      if ((*plVar46 != 0) && (cVar35 = RefCounted::unreference(), cVar35 != '\0')) {
        pOVar47 = (Object *)*plVar46;
        cVar35 = predelete_handler(pOVar47);
        if (cVar35 != '\0') {
          (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
          Memory::free_static(pOVar47,false);
        }
      }
      uVar36 = *(int *)(this + 0xabc) - 1;
      uVar38 = (ulong)uVar36;
      *(uint *)(this + 0xabc) = uVar36;
      if (uVar48 < uVar36) {
        lVar5 = *(long *)(this + 0xa98);
        plVar46 = (long *)(uVar37 * 8 + lVar5);
        *plVar46 = 0;
        lVar5 = *(long *)(lVar5 + uVar38 * 8);
        if (lVar5 != 0) {
          *plVar46 = lVar5;
          cVar35 = RefCounted::reference();
          if (cVar35 == '\0') {
            *plVar46 = 0;
          }
          uVar38 = (ulong)*(uint *)(this + 0xabc);
          plVar46 = (long *)(*(long *)(this + 0xa98) + uVar38 * 8);
          if (*plVar46 != 0) {
            cVar35 = RefCounted::unreference();
            if (cVar35 == '\0') {
              uVar38 = (ulong)*(uint *)(this + 0xabc);
            }
            else {
              pOVar47 = (Object *)*plVar46;
              cVar35 = predelete_handler(pOVar47);
              if (cVar35 == '\0') {
                uVar38 = (ulong)*(uint *)(this + 0xabc);
              }
              else {
                (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
                Memory::free_static(pOVar47,false);
                uVar38 = (ulong)*(uint *)(this + 0xabc);
              }
            }
          }
        }
        lVar5 = *(long *)(this + 0xaa8);
        *(undefined4 *)(lVar5 + uVar37 * 4) = *(undefined4 *)(lVar5 + uVar38 * 4);
        *(uint *)(*(long *)(this + 0xaa0) +
                 (ulong)*(uint *)(lVar5 + (ulong)*(uint *)(this + 0xabc) * 4) * 4) = uVar48;
      }
      pOVar47 = *(Object **)param_1;
      if (pOVar47 != (Object *)0x0) {
LAB_001023ea:
        cVar35 = RefCounted::reference();
        if (cVar35 == '\0') {
          pOVar47 = (Object *)0x0;
        }
      }
      EditorDebuggerPlugin::clear();
      uVar39 = RefCounted::unreference();
      if ((char)uVar39 == '\0') {
        return uVar39;
      }
      uVar39 = predelete_handler(pOVar47);
      if ((char)uVar39 == '\0') {
        return uVar39;
      }
      (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
      uVar39 = Memory::free_static(pOVar47,false);
      return uVar39;
    }
  }
  uVar49 = uVar49 + 1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(iVar40 + 1) * lVar7;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar43 = SUB168(auVar13 * auVar26,8);
  uVar48 = *(uint *)(lVar6 + lVar43 * 4);
  iVar40 = SUB164(auVar13 * auVar26,8);
  lVar43 = lVar43 * 4;
  if ((uVar48 == 0) ||
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar48 * lVar7, auVar27._8_8_ = 0,
     auVar27._0_8_ = uVar38, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar36 + iVar40) - SUB164(auVar14 * auVar27,8)) * lVar7,
     auVar28._8_8_ = 0, auVar28._0_8_ = uVar38, SUB164(auVar15 * auVar28,8) < uVar49))
  goto LAB_001023ea;
  goto LAB_0010226f;
}



/* EditorDebuggerNode::add_debugger_plugin(Ref<EditorDebuggerPlugin> const&) */

void __thiscall EditorDebuggerNode::add_debugger_plugin(EditorDebuggerNode *this,Ref *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ScriptEditorDebugger *pSVar19;
  long in_FS_OFFSET;
  Ref local_58 [24];
  long local_40;
  
  lVar12 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar12 == 0) {
    _err_print_error("add_debugger_plugin","editor/debugger/editor_debugger_node.cpp",0x338,
                     "Condition \"p_plugin.is_null()\" is true.","Debugger plugin is null.",0,0);
  }
  else {
    if ((*(long *)(this + 0xa98) != 0) && (*(int *)(this + 0xabc) != 0)) {
      uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab8) * 8);
      uVar11 = lVar12 * 0x3ffff - 1;
      uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
      uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar18 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
        uVar18 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar18 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      lVar14 = SUB168(auVar2 * auVar6,8);
      uVar15 = *(uint *)(*(long *)(this + 0xab0) + lVar14 * 4);
      iVar13 = SUB164(auVar2 * auVar6,8);
      if (uVar15 != 0) {
        uVar17 = 0;
        do {
          if ((uVar15 == (uint)uVar18) &&
             (lVar12 == *(long *)(*(long *)(this + 0xa98) +
                                 (ulong)*(uint *)(*(long *)(this + 0xaa0) + lVar14 * 4) * 8))) {
            _err_print_error("add_debugger_plugin","editor/debugger/editor_debugger_node.cpp",0x339,
                             "Condition \"debugger_plugins.has(p_plugin)\" is true.",
                             "Debugger plugin already exists.",0,0);
            goto LAB_001027b0;
          }
          uVar17 = uVar17 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar16;
          lVar14 = SUB168(auVar3 * auVar7,8);
          uVar15 = *(uint *)(*(long *)(this + 0xab0) + lVar14 * 4);
          iVar13 = SUB164(auVar3 * auVar7,8);
        } while ((uVar15 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar1, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0xab8) * 4) + iVar13) -
                                      SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar16, uVar17 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    HashSet<Ref<EditorDebuggerPlugin>,HashMapHasherDefault,HashMapComparatorDefault<Ref<EditorDebuggerPlugin>>>
    ::insert(local_58);
    pSVar19 = *(ScriptEditorDebugger **)param_1;
    if ((pSVar19 != (ScriptEditorDebugger *)0x0) &&
       (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
      pSVar19 = (ScriptEditorDebugger *)0x0;
    }
    while ((lVar12 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa18)), lVar12 != 0
           && (lVar12 = __dynamic_cast(lVar12,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0),
              lVar12 != 0))) {
      lVar12 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa18));
      if (lVar12 != 0) {
        __dynamic_cast(lVar12,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
      }
      EditorDebuggerPlugin::create_session(pSVar19);
    }
    if ((pSVar19 != (ScriptEditorDebugger *)0x0) &&
       ((cVar10 = RefCounted::unreference(), cVar10 != '\0' &&
        (cVar10 = predelete_handler((Object *)pSVar19), cVar10 != '\0')))) {
      (**(code **)(*(long *)pSVar19 + 0x140))(pSVar19);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar19,false);
        return;
      }
      goto LAB_00102917;
    }
  }
LAB_001027b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102917:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_menu_option(int) [clone .part.0] */

void EditorDebuggerNode::_menu_option(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  String *pSVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = MenuButton::get_popup();
  iVar4 = MenuButton::get_popup();
  PopupMenu::get_item_index(iVar4);
  bVar1 = PopupMenu::is_item_checked(iVar3);
  *(byte *)(CONCAT44(in_register_0000003c,param_1) + 0xa55) = bVar1 ^ 1;
  iVar3 = MenuButton::get_popup();
  iVar4 = MenuButton::get_popup();
  bVar2 = (bool)PopupMenu::get_item_index(iVar4);
  PopupMenu::set_item_checked(iVar3,bVar2);
  if (*(char *)(CONCAT44(in_register_0000003c,param_1) + 0xa38) == '\0') {
    pSVar5 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_48,(bool)(bVar1 ^ 1));
    local_58 = "debug_with_external_editor";
    local_60 = 0;
    local_50 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "debug_options";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    EditorSettings::set_project_metadata(pSVar5,(String *)&local_68,(Variant *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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



/* EditorDebuggerNode::_menu_option(int) */

void __thiscall EditorDebuggerNode::_menu_option(EditorDebuggerNode *this,int param_1)

{
  switch(param_1) {
  case 0:
    get_current_debugger(this);
    ScriptEditorDebugger::debug_next();
    return;
  case 1:
    get_current_debugger(this);
    ScriptEditorDebugger::debug_step();
    return;
  case 2:
    get_current_debugger(this);
    ScriptEditorDebugger::debug_break();
    return;
  case 3:
    get_current_debugger(this);
    ScriptEditorDebugger::debug_continue();
    return;
  case 4:
    _menu_option((int)this);
    return;
  default:
    return;
  }
}



/* EditorDebuggerNode::_update_debug_options() */

void __thiscall EditorDebuggerNode::_update_debug_options(EditorDebuggerNode *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar4 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "debug_with_external_editor";
  local_90 = 0;
  local_80 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar4,(Variant *)&local_98);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _menu_option((int)this);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_remote_object_updated(ObjectID, int) */

void __thiscall
EditorDebuggerNode::_remote_object_updated(EditorDebuggerNode *this,long param_2,int param_3)

{
  Object *pOVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  String *pSVar5;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = TabContainer::get_current_tab();
  if (iVar2 == param_3) {
    lVar3 = get_inspected_remote_object();
    pOVar1 = EditorNode::singleton;
    if ((lVar3 == 0) || (param_2 != *(long *)(lVar3 + 0x178))) {
      local_50 = 0;
      local_40 = 0;
      local_48 = &_LC11;
      String::parse_latin1((StrRange *)&local_50);
      uVar4 = get_current_debugger(this);
      pSVar5 = (String *)ScriptEditorDebugger::get_remote_object(uVar4,param_2);
      EditorNode::push_item(pOVar1,pSVar5,SUB81((StrRange *)&local_50,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_remote_tree_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
EditorDebuggerNode::_remote_tree_button_pressed
          (EditorDebuggerNode *this,long param_1,undefined8 param_3_00,int param_3,int param_5)

{
  code *pcVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  Variant *local_c8 [2];
  int local_b8 [8];
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if (param_1 != 0) {
      plVar5 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
      if (plVar5 != (long *)0x0) {
        if (param_3 == 0) {
          plVar2 = *(long **)(this + 0xa48);
          pcVar1 = *(code **)(*plVar5 + 0xb8);
          local_90 = (undefined1  [16])0x0;
          local_98[0] = 0;
          local_98[1] = 0;
          StringName::StringName((StringName *)&local_d0,"scene_file_path",false);
          (*pcVar1)((Variant *)local_b8,plVar5,(StringName *)&local_d0,local_98);
          if (_remote_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::operator()()::
              sname == '\0') {
            iVar4 = __cxa_guard_acquire(&_remote_tree_button_pressed(Object*,int,int,MouseButton)::
                                         {lambda()#1}::operator()()::sname);
            if (iVar4 != 0) {
              _scs_create((char *)&_remote_tree_button_pressed(Object*,int,int,MouseButton)::
                                   {lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_remote_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                            operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_remote_tree_button_pressed(Object*,int,int,MouseButton)::
                                   {lambda()#1}::operator()()::sname);
            }
          }
          Variant::Variant((Variant *)local_78,(Variant *)local_b8);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_c8[0] = (Variant *)local_78;
          (**(code **)(*plVar2 + 0xd0))
                    (plVar2,&_remote_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}
                             ::operator()()::sname,local_c8,1);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_d0 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else if (param_3 == 1) {
          TreeItem::get_metadata((int)(Variant *)local_78);
          lVar6 = Variant::operator_cast_to_ObjectID((Variant *)local_78);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (lVar6 == 0) {
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103256;
            uVar7 = 0x2a4;
            pcVar8 = "Condition \"obj_id.is_null()\" is true.";
            goto LAB_00102e79;
          }
          uVar7 = get_current_debugger(this);
          pcVar1 = *(code **)(*plVar5 + 0xb8);
          local_70 = (undefined1  [16])0x0;
          local_78[0] = 0;
          local_78[1] = 0;
          StringName::StringName((StringName *)&local_d8,"visible",false);
          (*pcVar1)((Variant *)local_98,plVar5,(StringName *)&local_d8,(Variant *)local_78);
          bVar3 = Variant::operator_cast_to_bool((Variant *)local_98);
          Variant::Variant((Variant *)local_b8,!bVar3);
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"visible");
          ScriptEditorDebugger::update_remote_object
                    (uVar7,lVar6,(String *)&local_d0,(Variant *)local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_d8 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          get_current_debugger(this);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            ScriptEditorDebugger::request_remote_tree();
            return;
          }
          goto LAB_00103256;
        }
        goto LAB_00102e25;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x29e;
      pcVar8 = "Parameter \"item\" is null.";
LAB_00102e79:
      _err_print_error("_remote_tree_button_pressed","editor/debugger/editor_debugger_node.cpp",
                       uVar7,pcVar8,0,0);
      return;
    }
  }
  else {
LAB_00102e25:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00103256:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_error_selected(String const&, int, int) */

void EditorDebuggerNode::_error_selected(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  Variant *pVVar5;
  undefined4 in_register_00000034;
  Object *pOVar6;
  long in_FS_OFFSET;
  undefined8 local_c0;
  Object *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = (Object *)&_LC11;
  String::parse_latin1((StrRange *)&local_c0);
  ResourceLoader::load(&local_b8,CONCAT44(in_register_00000034,param_2),(StrRange *)&local_c0,1,0);
  if (local_b8 == (Object *)0x0) {
LAB_00103470:
    pOVar4 = (Object *)0x0;
    pOVar6 = (Object *)0x0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_0010335b:
      cVar2 = RefCounted::unreference();
      pOVar6 = local_b8;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_b8);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (pOVar4 == (Object *)0x0) {
        pOVar6 = (Object *)0x0;
        goto LAB_0010338d;
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
        if (local_b8 == (Object *)0x0) goto LAB_00103470;
        goto LAB_0010335b;
      }
      if (local_b8 != (Object *)0x0) goto LAB_0010335b;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    }
    cVar2 = RefCounted::reference();
    pOVar6 = (Object *)0x0;
    if (cVar2 != '\0') {
      pOVar6 = pOVar4;
    }
  }
LAB_0010338d:
  if (_error_selected(String_const&,int,int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_error_selected(String_const&,int,int)::{lambda()#1}::operator()()
                                 ::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_error_selected(String_const&,int,int)::{lambda()#1}::operator()()::sname
                  ,true);
      __cxa_atexit(StringName::~StringName,
                   &_error_selected(String_const&,int,int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_error_selected(String_const&,int,int)::{lambda()#1}::operator()()::sname
                         );
    }
  }
  Variant::Variant(local_88,pOVar6);
  pVVar5 = (Variant *)local_40;
  Variant::Variant(local_70,param_3 + -1);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)param_1 + 0xd0))
            (param_1,&_error_selected(String_const&,int,int)::{lambda()#1}::operator()()::sname,
             &local_a8,2);
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != local_88);
  if (pOVar6 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar6);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
  if (pOVar4 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_001035a4;
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001035a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_update_errors() */

void EditorDebuggerNode::_update_errors(void)

{
  undefined8 uVar1;
  String *pSVar2;
  Ref *pRVar3;
  int iVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  StringName *pSVar10;
  StringName *pSVar11;
  undefined1 uVar12;
  StringName *in_RDI;
  undefined1 *puVar13;
  long in_FS_OFFSET;
  int iVar14;
  undefined8 local_e8;
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  iVar8 = 0;
  uVar1 = *(undefined8 *)(in_RDI + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  while( true ) {
    iVar7 = TabContainer::get_tab_count();
    iVar14 = (int)local_e8;
    iVar4 = (int)((ulong)local_e8 >> 0x20);
    if (iVar7 <= iVar8) break;
    lVar9 = TabContainer::get_tab_control((int)uVar1);
    if ((lVar9 == 0) ||
       (lVar9 = __dynamic_cast(lVar9,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0),
       lVar9 == 0)) {
      _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                       "Parameter \"dbg\" is null.",0,0);
      break;
    }
    iVar8 = iVar8 + 1;
    local_e8 = CONCAT44(iVar4 + (int)((ulong)*(undefined8 *)(lVar9 + 0xa94) >> 0x20),
                        iVar14 + (int)*(undefined8 *)(lVar9 + 0xa94));
  }
  if ((*(int *)(in_RDI + 0xa3c) == iVar14) && (*(int *)(in_RDI + 0xa40) == iVar4))
  goto LAB_001039ef;
  uVar1 = *(undefined8 *)(in_RDI + 0xa18);
  for (iVar8 = 0; iVar7 = TabContainer::get_tab_count(), iVar8 < iVar7; iVar8 = iVar8 + 1) {
    lVar9 = TabContainer::get_tab_control((int)uVar1);
    if ((lVar9 == 0) ||
       (lVar9 = __dynamic_cast(lVar9,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0),
       lVar9 == 0)) {
      _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                       "Parameter \"dbg\" is null.",0,0);
      break;
    }
    ScriptEditorDebugger::update_tabs();
  }
  pSVar2 = *(String **)(in_RDI + 0xa20);
  local_70 = 0;
  if (iVar4 == 0 && iVar14 == 0) {
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Debugger");
    TTR((String *)&local_68,(String *)&local_78);
    Button::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Control::remove_theme_color_override(*(StringName **)(in_RDI + 0xa20));
    local_68 = (Object *)0x0;
    Button::set_button_icon(*(Ref **)(in_RDI + 0xa20));
    if (((local_68 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  else {
    local_60 = 1;
    local_68 = (Object *)&_LC54;
    String::parse_latin1((StrRange *)&local_70);
    itos((long)local_80);
    local_90 = 0;
    local_68 = (Object *)&_LC55;
    local_60 = 2;
    String::parse_latin1((StrRange *)&local_90);
    local_a0 = 0;
    local_68 = (Object *)&_LC11;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    local_68 = (Object *)0x10b2c3;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_a8);
    TTR(local_98,(String *)&local_a8);
    String::operator+(local_88,local_98);
    String::operator+((String *)&local_78,local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    Button::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref(local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (iVar14 < 1) {
      pRVar3 = *(Ref **)(in_RDI + 0xa20);
      if ((_update_errors()::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&_update_errors()::{lambda()#5}::operator()()::sname),
         iVar8 != 0)) {
        _scs_create((char *)&_update_errors()::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_errors()::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_errors()::{lambda()#5}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_68);
      Button::set_button_icon(pRVar3);
      if (((local_68 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      pSVar11 = *(StringName **)(in_RDI + 0xa20);
      pSVar10 = (StringName *)&_update_errors()::{lambda()#6}::operator()()::sname;
      if (_update_errors()::{lambda()#6}::operator()()::sname == '\0') {
        puVar13 = &_update_errors()::{lambda()#6}::operator()()::sname;
        pSVar10 = (StringName *)&_update_errors()::{lambda()#6}::operator()()::sname;
        iVar8 = __cxa_guard_acquire(&_update_errors()::{lambda()#6}::operator()()::sname);
        if (iVar8 != 0) {
          uVar12 = 0xf8;
LAB_00103b4a:
          _scs_create((char *)pSVar10,(bool)uVar12);
          __cxa_atexit(StringName::~StringName,pSVar10,&__dso_handle);
          __cxa_guard_release(puVar13);
        }
      }
    }
    else {
      pRVar3 = *(Ref **)(in_RDI + 0xa20);
      if (iVar4 < 1) {
        if ((_update_errors()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_update_errors()::{lambda()#3}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_update_errors()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_update_errors()::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_errors()::{lambda()#3}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_68);
        Button::set_button_icon(pRVar3);
        if (((local_68 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        pSVar11 = *(StringName **)(in_RDI + 0xa20);
        pSVar10 = (StringName *)&_update_errors()::{lambda()#4}::operator()()::sname;
        if (_update_errors()::{lambda()#4}::operator()()::sname == '\0') {
          puVar13 = &_update_errors()::{lambda()#4}::operator()()::sname;
          pSVar10 = (StringName *)&_update_errors()::{lambda()#4}::operator()()::sname;
          iVar8 = __cxa_guard_acquire(&_update_errors()::{lambda()#4}::operator()()::sname);
joined_r0x00103cf6:
          if (iVar8 != 0) {
            uVar12 = 0xde;
            goto LAB_00103b4a;
          }
        }
      }
      else {
        if ((_update_errors()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_update_errors()::{lambda()#1}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_update_errors()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_update_errors()::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_errors()::{lambda()#1}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_68);
        Button::set_button_icon(pRVar3);
        if (((local_68 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        pSVar11 = *(StringName **)(in_RDI + 0xa20);
        pSVar10 = (StringName *)&_update_errors()::{lambda()#2}::operator()()::sname;
        if (_update_errors()::{lambda()#2}::operator()()::sname == '\0') {
          puVar13 = &_update_errors()::{lambda()#2}::operator()()::sname;
          pSVar10 = (StringName *)&_update_errors()::{lambda()#2}::operator()()::sname;
          iVar8 = __cxa_guard_acquire(&_update_errors()::{lambda()#2}::operator()()::sname);
          goto joined_r0x00103cf6;
        }
      }
    }
    local_58 = Control::get_theme_color(in_RDI,pSVar10);
    Control::add_theme_color_override(pSVar11,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  *(undefined8 *)(in_RDI + 0xa3c) = local_e8;
LAB_001039ef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::set_script_debug_button(MenuButton*) */

void __thiscall
EditorDebuggerNode::set_script_debug_button(EditorDebuggerNode *this,MenuButton *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  Ref *pRVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(MenuButton **)(this + 0xa28) = param_1;
  local_48 = (Object *)&_LC11;
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = (Object *)0x10b306;
  local_58 = 0;
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  Button::set_text((String *)param_1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0xa28),0));
  pRVar4 = (Ref *)MenuButton::get_popup();
  local_50 = 0;
  local_40 = 0x12;
  local_48 = (Object *)0x10b30c;
  String::parse_latin1((StrRange *)&local_50);
  ED_GET_SHORTCUT((String *)&local_48);
  iVar5 = (int)(String *)&local_48;
  PopupMenu::add_shortcut(pRVar4,iVar5,true,false);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = (Object *)0x10b31f;
  local_50 = 0;
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_50);
  ED_GET_SHORTCUT((String *)&local_48);
  PopupMenu::add_shortcut(pRVar4,iVar5,false,false);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = (Object *)0x0;
  PopupMenu::add_separator((String *)pRVar4,iVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = (Object *)0x10b332;
  local_50 = 0;
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_50);
  ED_GET_SHORTCUT((String *)&local_48);
  PopupMenu::add_shortcut(pRVar4,iVar5,true,false);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = (Object *)0x10b341;
  local_50 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_50);
  ED_GET_SHORTCUT((String *)&local_48);
  PopupMenu::add_shortcut(pRVar4,iVar5,true,false);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = (Object *)0x0;
  PopupMenu::add_separator((String *)pRVar4,iVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = (Object *)0x10c450;
  local_50 = 0;
  local_40 = 0x23;
  String::parse_latin1((StrRange *)&local_50);
  ED_GET_SHORTCUT((String *)&local_48);
  PopupMenu::add_check_shortcut(pRVar4,iVar5,true);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  pcVar1 = *(code **)(*(long *)pRVar4 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)&local_48,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_menu_option");
  (*pcVar1)(pRVar4,SceneStringNames::singleton + 0x240,(String *)&local_48,0);
  Callable::~Callable((Callable *)&local_48);
  _break_state_changed(this);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_text_editor_stack_goto(ScriptEditorDebugger const*) */

void EditorDebuggerNode::_text_editor_stack_goto(ScriptEditorDebugger *param_1)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Object *pOVar5;
  Object *pOVar6;
  Variant *pVVar7;
  Object *pOVar8;
  wchar32 wVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  Object *local_c8;
  CowData<char32_t> local_c0 [8];
  undefined8 local_b8;
  Object *local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  ScriptEditorDebugger::get_stack_script_file();
  if ((local_c8 == (Object *)0x0) || (*(uint *)(local_c8 + -8) < 2)) goto LAB_0010430e;
  cVar2 = String::is_resource_file();
  if (cVar2 == '\0') {
    String::find((char *)&local_c8,0x10b353);
    wVar9 = (wchar32)(CowData<char32_t> *)&local_c8;
    iVar3 = String::rfind_char(wVar9,0x28);
    if (-1 < iVar3) {
      String::find_char(wVar9,0x29);
      String::substr((int)(CowData<char32_t> *)&local_b0,wVar9);
      if (local_c8 != local_b0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        local_c8 = local_b0;
        local_b0 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    }
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    String::get_slice((char *)local_c0,wVar9);
    ResourceLoader::load((CowData<char32_t> *)&local_b0,local_c0,(String *)&local_b8,1,0);
    if (local_b0 == (Object *)0x0) {
      pOVar5 = (Object *)0x0;
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&PackedScene::typeinfo,0);
      if (pOVar5 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          pOVar5 = (Object *)0x0;
        }
        if (local_b0 == (Object *)0x0) goto LAB_00104430;
      }
      cVar2 = RefCounted::unreference();
      pOVar8 = local_b0;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_b0), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))();
        Memory::free_static(pOVar8,false);
      }
    }
LAB_00104430:
    CowData<char32_t>::_unref(local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    ResourceLoader::load
              ((CowData<char32_t> *)&local_b0,(CowData<char32_t> *)&local_c8,(String *)&local_b8,1,0
              );
    if (local_b0 == (Object *)0x0) {
      pOVar8 = *(Object **)(param_1 + 0xa30);
      if (pOVar8 != (Object *)0x0) {
        *(undefined8 *)(param_1 + 0xa30) = 0;
        goto LAB_0010499b;
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&Script::typeinfo,0);
      pOVar8 = *(Object **)(param_1 + 0xa30);
      if (pOVar8 != pOVar6) {
        *(Object **)(param_1 + 0xa30) = pOVar6;
        if (pOVar6 == (Object *)0x0) {
          if (pOVar8 != (Object *)0x0) goto LAB_0010499b;
        }
        else {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            *(undefined8 *)(param_1 + 0xa30) = 0;
          }
          if (pOVar8 != (Object *)0x0) {
LAB_0010499b:
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
          }
          if (local_b0 == (Object *)0x0) goto LAB_001044eb;
        }
      }
      cVar2 = RefCounted::unreference();
      pOVar8 = local_b0;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_b0), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
LAB_001044eb:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  else {
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    ResourceLoader::load(&local_b0,(CowData<char32_t> *)&local_c8,(String *)&local_b8,1,0);
    if (local_b0 == (Object *)0x0) {
      pOVar5 = *(Object **)(param_1 + 0xa30);
      if (pOVar5 != (Object *)0x0) {
        *(undefined8 *)(param_1 + 0xa30) = 0;
        goto LAB_0010493b;
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&Script::typeinfo,0);
      pOVar5 = *(Object **)(param_1 + 0xa30);
      if (pOVar5 != pOVar8) {
        *(Object **)(param_1 + 0xa30) = pOVar8;
        if (pOVar8 == (Object *)0x0) {
          if (pOVar5 != (Object *)0x0) goto LAB_0010493b;
        }
        else {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            *(undefined8 *)(param_1 + 0xa30) = 0;
          }
          if (pOVar5 != (Object *)0x0) {
LAB_0010493b:
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          if (local_b0 == (Object *)0x0) goto LAB_00104795;
        }
      }
      cVar2 = RefCounted::unreference();
      pOVar5 = local_b0;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_b0), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
LAB_00104795:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
  iVar3 = ScriptEditorDebugger::get_stack_script_line();
  pOVar5 = *(Object **)(param_1 + 0xa30);
  if ((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if ((_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#1}::operator()()::sname ==
       '\0') &&
     (iVar4 = __cxa_guard_acquire(&_text_editor_stack_goto(ScriptEditorDebugger_const*)::
                                   {lambda()#1}::operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#1}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#1}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#1}::
                         operator()()::sname);
  }
  Variant::Variant(local_88,pOVar5);
  Variant::Variant(local_70,iVar3 + -1);
  local_50 = (undefined1  [16])0x0;
  pVVar10 = (Variant *)local_40;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)param_1 + 0xd0))
            (param_1,&_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#1}::
                      operator()()::sname,&local_a8,2);
  pVVar7 = pVVar10;
  do {
    pVVar1 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar7 != local_88);
  if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  pOVar5 = *(Object **)(param_1 + 0xa30);
  if ((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if ((_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#2}::operator()()::sname ==
       '\0') &&
     (iVar4 = __cxa_guard_acquire(&_text_editor_stack_goto(ScriptEditorDebugger_const*)::
                                   {lambda()#2}::operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#2}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#2}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#2}::
                         operator()()::sname);
  }
  Variant::Variant(local_88,pOVar5);
  Variant::Variant(local_70,iVar3 + -1);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)param_1 + 0xd0))
            (param_1,&_text_editor_stack_goto(ScriptEditorDebugger_const*)::{lambda()#2}::
                      operator()()::sname,&local_a8,2);
  do {
    pVVar7 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != local_88);
  if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if ((*(long *)(param_1 + 0xa30) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar5 = *(Object **)(param_1 + 0xa30);
    cVar2 = predelete_handler(pOVar5);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  *(undefined8 *)(param_1 + 0xa30) = 0;
LAB_0010430e:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDebuggerNode::_stack_frame_selected(int) */

void EditorDebuggerNode::_stack_frame_selected(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 in_register_0000003c;
  ScriptEditorDebugger *pSVar4;
  
  pSVar4 = (ScriptEditorDebugger *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = TabContainer::get_tab_control((int)*(undefined8 *)(pSVar4 + 0xa18));
  if (lVar2 != 0) {
    lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(pSVar4 + 0xa18);
      TabContainer::get_current_tab();
      lVar3 = TabContainer::get_tab_control((int)uVar1);
      if (lVar3 != 0) {
        lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
        if (lVar2 == lVar3) {
          _text_editor_stack_goto(pSVar4);
          return;
        }
      }
      return;
    }
  }
  _err_print_error("_stack_frame_selected","editor/debugger/editor_debugger_node.cpp",0x91,
                   "Parameter \"dbg\" is null.",0,0);
  return;
}



/* EditorDebuggerNode::_add_debugger() */

ScriptEditorDebugger * __thiscall EditorDebuggerNode::_add_debugger(EditorDebuggerNode *this)

{
  code *pcVar1;
  undefined8 uVar2;
  StringName *pSVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  ScriptEditorDebugger *this_00;
  CallableCustom *pCVar7;
  long lVar8;
  ScriptEditorDebugger *pSVar9;
  long lVar10;
  Object *pOVar11;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  long local_68 [2];
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (ScriptEditorDebugger *)operator_new(0xc48,"");
  ScriptEditorDebugger::ScriptEditorDebugger(this_00);
  postinitialize_handler((Object *)this_00);
  TabContainer::get_tab_count();
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_debugger_wants_stop");
  iVar6 = (int)(Callable *)&local_58;
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"stop_requested",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_debugger_stopped");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"stopped",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_stack_frame_selected");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"stack_frame_selected",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,String_const&,int,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_String_ptr_int_int *)"&EditorDebuggerNode::_error_selected");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"error_selected",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,String_const&,int,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_String_ptr_int_int *)"&EditorDebuggerNode::_error_selected");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"breakpoint_selected",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar7 + 0x20) = &_LC11;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar7 = &PTR_hash_0011a430;
  *(undefined8 *)(pCVar7 + 0x30) = uVar2;
  *(code **)(pCVar7 + 0x38) = _clear_execution;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(EditorDebuggerNode **)(pCVar7 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorDebuggerNode::_clear_execution";
  Callable::Callable((Callable *)&local_58,pCVar7);
  StringName::StringName((StringName *)local_68,"clear_execution",false);
  (*pcVar1)(this_00,(EditorDebuggerNode *)local_68,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar7 + 0x20) = &_LC11;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar7 = &PTR_hash_0011a4c0;
  *(undefined8 *)(pCVar7 + 0x30) = uVar2;
  *(code **)(pCVar7 + 0x38) = _breaked;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(EditorDebuggerNode **)(pCVar7 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorDebuggerNode::_breaked";
  Callable::Callable((Callable *)local_68,pCVar7);
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"breaked",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_ObjectID_int *)"&EditorDebuggerNode::_remote_tree_select_requested");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"remote_tree_select_requested",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_remote_tree_updated");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"remote_tree_updated",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_ObjectID_int *)"&EditorDebuggerNode::_remote_object_updated");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"remote_object_updated",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,String_const&,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_ObjectID_String_ptr_int *)
             "&EditorDebuggerNode::_remote_object_property_updated");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"remote_object_property_updated",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_ObjectID_int *)"&EditorDebuggerNode::_remote_object_requested");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"remote_object_requested",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar7 + 0x20) = &_LC11;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar7 = &PTR_hash_0011a550;
  *(undefined8 *)(pCVar7 + 0x30) = uVar2;
  *(code **)(pCVar7 + 0x38) = _breakpoint_set_in_tree;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(EditorDebuggerNode **)(pCVar7 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorDebuggerNode::_breakpoint_set_in_tree";
  Callable::Callable((Callable *)local_68,pCVar7);
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"set_breakpoint",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)local_68,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_breakpoints_cleared_in_tree");
  Callable::bind<int>(iVar6);
  StringName::StringName((StringName *)&local_70,"clear_breakpoints",false);
  (*pcVar1)(this_00,(StringName *)&local_70,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode>
            ((EditorDebuggerNode *)&local_58,(char *)this,
             (_func_void *)"&EditorDebuggerNode::_update_errors");
  StringName::StringName((StringName *)local_68,"errors_cleared",false);
  (*pcVar1)(this_00,(EditorDebuggerNode *)local_68,(Callable *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  iVar6 = TabContainer::get_tab_count();
  if (0 < iVar6) {
    lVar8 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa18));
    if (lVar8 != 0) {
      __dynamic_cast(lVar8,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    }
    ScriptEditorDebugger::clear_style();
  }
  Node::add_child(*(undefined8 *)(this + 0xa18),this_00,0,0);
  TabContainer::get_tab_count();
  local_58 = (Object *)&_LC11;
  local_70 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (Object *)0x10b476;
  local_78 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)local_68,(String *)&local_78);
  vformat<int>((String *)&local_58,(int)(EditorDebuggerNode *)local_68);
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  iVar6 = TabContainer::get_tab_count();
  if (1 < iVar6) {
    ScriptEditorDebugger::clear_style();
    TabContainer::set_tabs_visible(SUB81(*(undefined8 *)(this + 0xa18),0));
    pSVar3 = *(StringName **)(this + 0xa18);
    pOVar11 = *(Object **)(EditorNode::singleton + 0x838);
    if (pOVar11 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      pOVar11 = (Object *)0x0;
    }
    pcVar1 = *(code **)(*(long *)pOVar11 + 0x1d0);
    lVar8 = EditorStringNames::singleton + 0x18;
    if (_add_debugger()::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_add_debugger()::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_add_debugger()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_add_debugger()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_add_debugger()::{lambda()#1}::operator()()::sname);
      }
    }
    (*pcVar1)((Callable *)&local_58,pOVar11,&_add_debugger()::{lambda()#1}::operator()()::sname,
              lVar8);
    Control::add_theme_style_override(pSVar3,(Ref *)(SceneStringNames::singleton + 600));
    if (local_58 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_58;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_58);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(pOVar11);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
    }
  }
  iVar6 = *(int *)(this + 0xabc);
  if (iVar6 != 0) {
    lVar8 = *(long *)(this + 0xa98);
    lVar10 = 0;
    while( true ) {
      pSVar9 = *(ScriptEditorDebugger **)(lVar8 + lVar10 * 8);
      if (pSVar9 != (ScriptEditorDebugger *)0x0) {
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          pSVar9 = (ScriptEditorDebugger *)0x0;
        }
      }
      EditorDebuggerPlugin::create_session(pSVar9);
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler((Object *)pSVar9);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
          Memory::free_static(pSVar9,false);
        }
      }
      if (iVar6 <= (int)lVar10 + 1) break;
      lVar10 = lVar10 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::EditorDebuggerNode() */

void __thiscall EditorDebuggerNode::EditorDebuggerNode(EditorDebuggerNode *this)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  Control *pCVar4;
  Object *pOVar5;
  char cVar6;
  EditorDebuggerNode EVar7;
  int iVar8;
  int iVar9;
  TabContainer *this_00;
  StyleBox *this_01;
  EditorDebuggerTree *this_02;
  CallableCustom *this_03;
  long lVar10;
  Object *pOVar11;
  StringName *pSVar12;
  long in_FS_OFFSET;
  bool bVar13;
  float fVar14;
  Object *local_98;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00119d58;
  bVar13 = singleton == (EditorDebuggerNode *)0x0;
  *(undefined2 *)(this + 0xa54) = 0;
  uVar3 = _LC101;
  this[0xa38] = (EditorDebuggerNode)0x1;
  *(undefined8 *)(this + 0xa3c) = 0;
  *(undefined8 *)(this + 0xa44) = 0;
  *(undefined8 *)(this + 0xa4c) = 0;
  this[0xa56] = (EditorDebuggerNode)0x0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined4 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa90) = uVar3;
  *(undefined8 *)(this + 0xab8) = uVar3;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  if (bVar13) {
    singleton = this;
  }
  pOVar11 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar11 == (Object *)0x0) {
EditorDebuggerNode_EditorDebuggerNode:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar6 = RefCounted::reference();
  if (cVar6 == '\0') {
    pOVar11 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar11 + 0x1d0);
  lVar10 = EditorStringNames::singleton + 0x18;
  if ((EditorDebuggerNode()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&EditorDebuggerNode()::{lambda()#1}::operator()()::sname),
     iVar9 != 0)) {
    _scs_create((char *)&EditorDebuggerNode()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&EditorDebuggerNode()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&EditorDebuggerNode()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar1)((EditorDebuggerNode *)&local_68,pOVar11,
            &EditorDebuggerNode()::{lambda()#1}::operator()()::sname,lVar10);
  StyleBox::get_margin(local_68,0);
  StringName::StringName((StringName *)&local_70,"margin_left",false);
  iVar9 = (int)(StringName *)&local_70;
  Control::add_theme_constant_override((StringName *)this,iVar9);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (((local_68 == (Object *)0x0) ||
      (cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 == '\0')) ||
     (cVar6 = predelete_handler(local_68), cVar6 == '\0')) {
    cVar6 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    cVar6 = RefCounted::unreference();
  }
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar11), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  pOVar11 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar11 == (Object *)0x0) goto EditorDebuggerNode_EditorDebuggerNode;
  cVar6 = RefCounted::reference();
  if (cVar6 == '\0') {
    pOVar11 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar11 + 0x1d0);
  lVar10 = EditorStringNames::singleton + 0x18;
  if ((EditorDebuggerNode()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&EditorDebuggerNode()::{lambda()#2}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&EditorDebuggerNode()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&EditorDebuggerNode()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&EditorDebuggerNode()::{lambda()#2}::operator()()::sname);
  }
  (*pcVar1)((EditorDebuggerNode *)&local_68,pOVar11,
            &EditorDebuggerNode()::{lambda()#2}::operator()()::sname,lVar10);
  StyleBox::get_margin(local_68,2);
  StringName::StringName((StringName *)&local_70,"margin_right",false);
  Control::add_theme_constant_override((StringName *)this,iVar9);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (((local_68 == (Object *)0x0) || (cVar6 = RefCounted::unreference(), cVar6 == '\0')) ||
     (cVar6 = predelete_handler(local_68), cVar6 == '\0')) {
    cVar6 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
    cVar6 = RefCounted::unreference();
  }
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar11), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  this_00 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(TabContainer **)(this + 0xa18) = this_00;
  TabContainer::set_tabs_visible(SUB81(this_00,0));
  plVar2 = *(long **)(this + 0xa18);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,int>
            ((EditorDebuggerNode *)&local_68,(char *)this,
             (_func_void_int *)"&EditorDebuggerNode::_debugger_changed");
  StringName::StringName((StringName *)&local_70,"tab_changed",false);
  (*pcVar1)(plVar2,(StringName *)&local_70,(EditorDebuggerNode *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  this_01 = (StyleBox *)operator_new(0x2b0,"");
  StyleBox::StyleBox(this_01);
  *(undefined ***)this_01 = &PTR__initialize_classv_00119b58;
  postinitialize_handler((Object *)this_01);
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
LAB_00105cb2:
    local_68 = (Object *)0x0;
    pSVar12 = *(StringName **)(this + 0xa18);
    local_98 = (Object *)0x0;
  }
  else {
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      cVar6 = RefCounted::unreference();
      if (cVar6 == '\0') goto LAB_00105cb2;
      cVar6 = predelete_handler((Object *)this_01);
      local_98 = (Object *)0x0;
      if (cVar6 == '\0') {
        local_68 = (Object *)0x0;
        pSVar12 = *(StringName **)(this + 0xa18);
        goto LAB_00105cca;
      }
LAB_001061f5:
      (**(code **)(*(long *)this_01 + 0x140))(this_01);
      Memory::free_static(this_01,false);
      local_68 = (Object *)0x0;
      pSVar12 = *(StringName **)(this + 0xa18);
      if (local_98 == (Object *)0x0) goto LAB_00105cca;
    }
    else {
      cVar6 = RefCounted::unreference();
      local_98 = (Object *)this_01;
      if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)this_01), cVar6 != '\0'))
      goto LAB_001061f5;
      pSVar12 = *(StringName **)(this + 0xa18);
    }
    local_68 = (Object *)0x0;
    pOVar11 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&StyleBox::typeinfo,0);
    if ((pOVar11 != (Object *)0x0) &&
       (local_68 = pOVar11, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_68 = (Object *)0x0;
    }
  }
LAB_00105cca:
  Control::add_theme_style_override(pSVar12,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_68 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar11 = local_68, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  local_68 = (Object *)0x10c750;
  local_70 = 0;
  local_60 = 0x29;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  EVar7 = (EditorDebuggerNode)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0xa54] = EVar7;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  _add_debugger(this);
  this_02 = (EditorDebuggerTree *)operator_new(0xe18,"");
  EditorDebuggerTree::EditorDebuggerTree(this_02);
  postinitialize_handler((Object *)this_02);
  lVar10 = *(long *)this_02;
  *(EditorDebuggerTree **)(this + 0xa48) = this_02;
  pcVar1 = *(code **)(lVar10 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,int>
            ((EditorDebuggerNode *)&local_68,(char *)this,
             (_func_void_ObjectID_int *)"&EditorDebuggerNode::_remote_object_requested");
  StringName::StringName((StringName *)&local_70,"object_selected",false);
  (*pcVar1)(this_02,(StringName *)&local_70,(EditorDebuggerNode *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar2 = *(long **)(this + 0xa48);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,String_const&,int>
            ((EditorDebuggerNode *)&local_68,(char *)this,
             (_func_void_ObjectID_String_ptr_int *)"&EditorDebuggerNode::_save_node_requested");
  StringName::StringName((StringName *)&local_70,"save_node",false);
  (*pcVar1)(plVar2,(StringName *)&local_70,(EditorDebuggerNode *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar2 = *(long **)(this + 0xa48);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  this_03 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_03);
  *(undefined1 (*) [16])(this_03 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_03 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)this_03 = &PTR_hash_0011a280;
  *(undefined8 *)(this_03 + 0x30) = uVar3;
  *(code **)(this_03 + 0x38) = _remote_tree_button_pressed;
  *(undefined8 *)(this_03 + 0x10) = 0;
  *(undefined **)(this_03 + 0x20) = &_LC11;
  *(EditorDebuggerNode **)(this_03 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_03,(int)this_03 + 0x28);
  *(char **)(this_03 + 0x20) = "EditorDebuggerNode::_remote_tree_button_pressed";
  Callable::Callable((Callable *)&local_68,this_03);
  StringName::StringName((StringName *)&local_70,"button_clicked",false);
  (*pcVar1)(plVar2,(StringName *)&local_70,(EditorDebuggerNode *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  SceneTreeDock::add_remote_tree_editor(SceneTreeDock::singleton);
  pCVar4 = SceneTreeDock::singleton;
  pcVar1 = *(code **)(*(long *)SceneTreeDock::singleton + 0x108);
  create_custom_callable_function_pointer<EditorDebuggerNode>
            ((EditorDebuggerNode *)&local_68,(char *)this,
             (_func_void *)"&EditorDebuggerNode::request_remote_tree");
  StringName::StringName((StringName *)&local_70,"remote_tree_selected",false);
  (*pcVar1)(pCVar4,(StringName *)&local_70,(EditorDebuggerNode *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  local_68 = (Object *)0x10c818;
  local_70 = 0;
  local_60 = 0x2b;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(this + 0xa50) = fVar14;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Object *)0x10c848;
  local_70 = 0;
  local_60 = 0x28;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(this + 0xa44) = fVar14;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  lVar10 = Engine::get_singleton();
  if (*(char *)(lVar10 + 0xc4) == '\0') {
    plVar2 = *(long **)(EditorRunBar::singleton + 0xa58);
    pcVar1 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<EditorDebuggerNode>
              ((EditorDebuggerNode *)&local_68,(char *)this,
               (_func_void *)"&EditorDebuggerNode::_paused");
    (*pcVar1)(plVar2,SceneStringNames::singleton + 0x238,(EditorDebuggerNode *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
  }
  if (((local_98 == (Object *)0x0) || (cVar6 = RefCounted::unreference(), cVar6 == '\0')) ||
     (cVar6 = predelete_handler(local_98), cVar6 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_98,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::plugins_capture(ScriptEditorDebugger*, String const&, Array const&) */

ulong __thiscall
EditorDebuggerNode::plugins_capture
          (EditorDebuggerNode *this,ScriptEditorDebugger *param_1,String *param_2,Array *param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  Array *extraout_RDX;
  Array *pAVar8;
  Array *extraout_RDX_00;
  Array *extraout_RDX_01;
  long lVar9;
  uint uVar10;
  CowData<char32_t> *pCVar11;
  Object *pOVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = TabContainer::get_tab_idx_from_control(*(Control **)(this + 0xa18));
  if (iVar4 < 0) {
    uVar10 = 0;
    _err_print_error("plugins_capture","editor/debugger/editor_debugger_node.cpp",0x34b,
                     "Condition \"session_index < 0\" is true. Returning: false",0,0);
  }
  else {
    iVar5 = String::find_char((wchar32)param_2,0x3a);
    if (iVar5 < 1) {
      uVar10 = 0;
      _err_print_error("plugins_capture","editor/debugger/editor_debugger_node.cpp",0x34d,
                       "Condition \"colon_index < 1\" is true. Returning: false",
                       "Invalid message received.",0,0);
    }
    else {
      String::substr((int)local_48,(wchar32)param_2);
      iVar5 = *(int *)(this + 0xabc);
      if (iVar5 == 0) {
        uVar10 = 0;
      }
      else {
        plVar1 = *(long **)(this + 0xa98);
        lVar9 = 0;
        uVar10 = 0;
        pOVar13 = (Object *)*plVar1;
        if (pOVar13 == (Object *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        while( true ) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar13 = (Object *)0x0;
          }
          pCVar11 = local_48;
          cVar3 = (**(code **)(*(long *)pOVar13 + 0x160))(pOVar13);
          if (cVar3 != '\0') {
            pCVar11 = (CowData<char32_t> *)param_2;
            uVar6 = (**(code **)(*(long *)pOVar13 + 0x158))(pOVar13,param_2,param_3,iVar4);
            uVar10 = uVar10 | uVar6;
          }
          pOVar12 = pOVar13;
          cVar3 = RefCounted::unreference();
          pAVar8 = extraout_RDX;
          if (cVar3 != '\0') {
            pOVar12 = pOVar13;
            cVar3 = predelete_handler(pOVar13);
            pAVar8 = extraout_RDX_00;
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
              pCVar11 = (CowData<char32_t> *)0x0;
              Memory::free_static(pOVar13,false);
              pAVar8 = extraout_RDX_01;
              pOVar12 = pOVar13;
            }
          }
          if (iVar5 <= (int)lVar9 + 1) break;
          lVar9 = lVar9 + 1;
          pOVar13 = (Object *)plVar1[lVar9];
          if (pOVar13 == (Object *)0x0) {
            uVar7 = plugins_capture((ScriptEditorDebugger *)pOVar12,(String *)pCVar11,pAVar8);
            return uVar7;
          }
        }
      }
      CowData<char32_t>::_unref(local_48);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::set_breakpoint(String const&, int, bool) */

void __thiscall
EditorDebuggerNode::set_breakpoint
          (EditorDebuggerNode *this,String *param_1,int param_2,bool param_3)

{
  long *plVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  String *pSVar6;
  long lVar7;
  long lVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 local_d8;
  int local_d0;
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
  local_d8 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_00106736;
      LOCK();
      lVar8 = *plVar1;
      bVar10 = lVar7 == lVar8;
      if (bVar10) {
        *plVar1 = lVar7 + 1;
        lVar8 = lVar7;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar8 != -1) {
      local_d8 = *(undefined8 *)param_1;
    }
  }
LAB_00106736:
  local_d0 = param_2;
  uVar5 = HashMap<EditorDebuggerNode::Breakpoint,bool,EditorDebuggerNode::Breakpoint,HashMapComparatorDefault<EditorDebuggerNode::Breakpoint>,DefaultTypedAllocator<HashMapElement<EditorDebuggerNode::Breakpoint,bool>>>
          ::operator[]((HashMap<EditorDebuggerNode::Breakpoint,bool,EditorDebuggerNode::Breakpoint,HashMapComparatorDefault<EditorDebuggerNode::Breakpoint>,DefaultTypedAllocator<HashMapElement<EditorDebuggerNode::Breakpoint,bool>>>
                        *)(this + 0xa68),(Breakpoint *)&local_d8);
  *(bool *)uVar5 = param_3;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  uVar5 = *(undefined8 *)(this + 0xa18);
  for (iVar4 = 0; iVar3 = TabContainer::get_tab_count(), iVar4 < iVar3; iVar4 = iVar4 + 1) {
    lVar7 = TabContainer::get_tab_control((int)uVar5);
    if ((lVar7 == 0) ||
       (pSVar6 = (String *)__dynamic_cast(lVar7,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0)
       , pSVar6 == (String *)0x0)) {
      _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                       "Parameter \"dbg\" is null.",0,0);
      break;
    }
    ScriptEditorDebugger::set_breakpoint(pSVar6,(int)param_1,SUB41(param_2,0));
  }
  local_d8 = 0;
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_00106819;
      LOCK();
      lVar8 = *plVar1;
      bVar10 = lVar7 == lVar8;
      if (bVar10) {
        *plVar1 = lVar7 + 1;
        lVar8 = lVar7;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar8 != -1) {
      local_d8 = *(undefined8 *)param_1;
    }
  }
LAB_00106819:
  if ((set_breakpoint(String_const&,int,bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&set_breakpoint(String_const&,int,bool)::{lambda()#1}::
                                   operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&set_breakpoint(String_const&,int,bool)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &set_breakpoint(String_const&,int,bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&set_breakpoint(String_const&,int,bool)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant(local_a8,(String *)&local_d8);
  Variant::Variant(local_90,param_2);
  Variant::Variant(local_78,param_3);
  local_58 = (undefined1  [16])0x0;
  pVVar9 = local_48;
  local_60 = 0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_breakpoint(String_const&,int,bool)::{lambda()#1}::operator()()::sname,
             &local_c8,3);
  do {
    pVVar2 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar9 != local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDebuggerNode::set_breakpoints(String const&, Array const&) */

void __thiscall
EditorDebuggerNode::set_breakpoints(EditorDebuggerNode *this,String *param_1,Array *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  Variant *this_00;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_68;
  int local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (iVar7 = 0; iVar5 = Array::size(), iVar7 < iVar5; iVar7 = iVar7 + 1) {
    this_00 = (Variant *)Array::operator[]((int)param_2);
    iVar5 = Variant::operator_cast_to_int(this_00);
    set_breakpoint(this,param_1,iVar5,true);
  }
  puVar2 = *(undefined8 **)(this + 0xa80);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_68 = 0;
    plVar1 = (long *)(puVar2[2] + -0x10);
    if (puVar2[2] != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00106a5a;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar3 == lVar6;
        if (bVar8) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_68 = puVar2[2];
      }
    }
LAB_00106a5a:
    local_60 = *(int *)(puVar2 + 3);
    cVar4 = String::operator==((String *)&local_68,param_1);
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_58,local_60);
      cVar4 = Array::has((Variant *)param_2);
      if (cVar4 == '\0') {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        set_breakpoint(this,param_1,local_60,false);
      }
      else if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



/* EditorDebuggerNode::_text_editor_stack_clear(ScriptEditorDebugger const*) */

void EditorDebuggerNode::_text_editor_stack_clear(ScriptEditorDebugger *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  Object *pOVar4;
  Object *pOVar5;
  wchar32 wVar6;
  long in_FS_OFFSET;
  Object *local_a8;
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  Object *local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ScriptEditorDebugger::get_stack_script_file();
  if ((local_a8 == (Object *)0x0) || (*(uint *)(local_a8 + -8) < 2)) goto LAB_00106b58;
  cVar1 = String::is_resource_file();
  if (cVar1 == '\0') {
    String::find((char *)&local_a8,0x10b353);
    wVar6 = (wchar32)(CowData<char32_t> *)&local_a8;
    iVar2 = String::rfind_char(wVar6,0x28);
    if (-1 < iVar2) {
      String::find_char(wVar6,0x29);
      String::substr((int)(CowData<char32_t> *)&local_90,wVar6);
      if (local_a8 != local_90) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        local_a8 = local_90;
        local_90 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    String::get_slice((char *)local_a0,wVar6);
    ResourceLoader::load((CowData<char32_t> *)&local_90,local_a0,(String *)&local_98,1,0);
    if (local_90 == (Object *)0x0) {
      pOVar3 = (Object *)0x0;
    }
    else {
      pOVar3 = (Object *)__dynamic_cast(local_90,&Object::typeinfo,&PackedScene::typeinfo,0);
      if (pOVar3 != (Object *)0x0) {
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          pOVar3 = (Object *)0x0;
        }
        if (local_90 == (Object *)0x0) goto LAB_00106c72;
      }
      cVar1 = RefCounted::unreference();
      pOVar5 = local_90;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_90);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))();
          Memory::free_static(pOVar5,false);
        }
      }
    }
LAB_00106c72:
    CowData<char32_t>::_unref(local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    ResourceLoader::load
              ((CowData<char32_t> *)&local_90,(CowData<char32_t> *)&local_a8,(String *)&local_98,1,0
              );
    if (local_90 == (Object *)0x0) {
      pOVar5 = *(Object **)(param_1 + 0xa30);
      if (pOVar5 != (Object *)0x0) {
        *(undefined8 *)(param_1 + 0xa30) = 0;
        goto LAB_0010704b;
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(local_90,&Object::typeinfo,&Script::typeinfo,0);
      pOVar5 = *(Object **)(param_1 + 0xa30);
      if (pOVar5 != pOVar4) {
        *(Object **)(param_1 + 0xa30) = pOVar4;
        if (pOVar4 == (Object *)0x0) {
          if (pOVar5 != (Object *)0x0) goto LAB_0010704b;
        }
        else {
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *(undefined8 *)(param_1 + 0xa30) = 0;
          }
          if (pOVar5 != (Object *)0x0) {
LAB_0010704b:
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
              cVar1 = predelete_handler(pOVar5);
              if (cVar1 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          if (local_90 == (Object *)0x0) goto LAB_00106d24;
        }
      }
      cVar1 = RefCounted::unreference();
      pOVar5 = local_90;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_90);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
LAB_00106d24:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (pOVar3 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar3);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
  }
  else {
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    ResourceLoader::load(&local_90,(CowData<char32_t> *)&local_a8,(String *)&local_98,1,0);
    if (local_90 == (Object *)0x0) {
      pOVar3 = *(Object **)(param_1 + 0xa30);
      if (pOVar3 != (Object *)0x0) {
        *(undefined8 *)(param_1 + 0xa30) = 0;
        goto LAB_00106ff3;
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(local_90,&Object::typeinfo,&Script::typeinfo,0);
      pOVar3 = *(Object **)(param_1 + 0xa30);
      if (pOVar3 != pOVar5) {
        *(Object **)(param_1 + 0xa30) = pOVar5;
        if (pOVar5 == (Object *)0x0) {
          if (pOVar3 != (Object *)0x0) goto LAB_00106ff3;
        }
        else {
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *(undefined8 *)(param_1 + 0xa30) = 0;
          }
          if (pOVar3 != (Object *)0x0) {
LAB_00106ff3:
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
              cVar1 = predelete_handler(pOVar3);
              if (cVar1 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          if (local_90 == (Object *)0x0) goto LAB_00106ecd;
        }
      }
      cVar1 = RefCounted::unreference();
      pOVar3 = local_90;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_90);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
LAB_00106ecd:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  pOVar3 = *(Object **)(param_1 + 0xa30);
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
    }
  }
  if (_text_editor_stack_clear(ScriptEditorDebugger_const*)::{lambda()#1}::operator()()::sname ==
      '\0') {
    iVar2 = __cxa_guard_acquire(&_text_editor_stack_clear(ScriptEditorDebugger_const*)::{lambda()#1}
                                 ::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_text_editor_stack_clear(ScriptEditorDebugger_const*)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_text_editor_stack_clear(ScriptEditorDebugger_const*)::{lambda()#1}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_text_editor_stack_clear(ScriptEditorDebugger_const*)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  Variant::Variant((Variant *)local_78,pOVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)param_1 + 0xd0))
            (param_1,&_text_editor_stack_clear(ScriptEditorDebugger_const*)::{lambda()#1}::
                      operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(param_1 + 0xa30) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      pOVar3 = *(Object **)(param_1 + 0xa30);
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa30) = 0;
LAB_00106b58:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_debugger_changed(int) */

void EditorDebuggerNode::_debugger_changed(int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined4 in_register_0000003c;
  ScriptEditorDebugger *this;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  this = (ScriptEditorDebugger *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = get_inspected_remote_object();
  pOVar3 = EditorNode::singleton;
  if (lVar5 != 0) {
    local_50 = 0;
    local_40 = 0;
    local_48 = &_LC11;
    String::parse_latin1((StrRange *)&local_50);
    EditorNode::push_item(pOVar3,(String *)0x0,SUB81((StrRange *)&local_50,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_previous_tab();
  lVar5 = TabContainer::get_tab_control((int)uVar1);
  if (lVar5 != 0) {
    lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(this + 0xa18);
      TabContainer::get_previous_tab();
      lVar5 = TabContainer::get_tab_control((int)uVar1);
      if (lVar5 != 0) {
        __dynamic_cast(lVar5,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
      }
      _text_editor_stack_clear(this);
    }
  }
  cVar4 = CanvasItem::is_visible_in_tree();
  if (cVar4 != '\0') {
    get_current_debugger((EditorDebuggerNode *)this);
    ScriptEditorDebugger::request_remote_tree();
  }
  uVar1 = *(undefined8 *)(this + 0xa18);
  TabContainer::get_current_tab();
  lVar5 = TabContainer::get_tab_control((int)uVar1);
  if (lVar5 != 0) {
    lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
    if (*(int *)(lVar5 + 0xc3c) != 0) {
      get_current_debugger((EditorDebuggerNode *)this);
      _text_editor_stack_goto(this);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _break_state_changed((EditorDebuggerNode *)this);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* EditorDebuggerNode::stop(bool) */

void __thiscall EditorDebuggerNode::stop(EditorDebuggerNode *this,bool param_1)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xa56] != (EditorDebuggerNode)0x1) || (param_1)) {
    if ((*(long *)(this + 0xa58) != 0) && (*(long *)(*(long *)(this + 0xa58) + -8) != 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
    }
    if (*(long **)(this + 0xa10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xa10) + 0x168))();
      local_60 = 0;
      local_50 = 0x21;
      uVar2 = *(undefined8 *)(EditorNode::singleton + 0x5d0);
      local_58 = "--- Debugging process stopped ---";
      String::parse_latin1((StrRange *)&local_60);
      EditorLog::add_message(uVar2,(StrRange *)&local_60,4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      cVar5 = EditorRunBar::is_movie_maker_enabled();
      if (cVar5 != '\0') {
        (**(code **)(*DisplayServer::singleton + 0x5d0))();
      }
      if (*(long *)(this + 0xa10) != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar4 = *(Object **)(this + 0xa10);
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      *(undefined8 *)(this + 0xa10) = 0;
    }
    uVar2 = *(undefined8 *)(this + 0xa18);
    iVar7 = 0;
    while( true ) {
      iVar6 = TabContainer::get_tab_count();
      if (iVar6 <= iVar7) break;
      lVar8 = TabContainer::get_tab_control((int)uVar2);
      if (lVar8 == 0) {
LAB_0010751f:
        _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                         "Parameter \"dbg\" is null.",0,0);
        break;
      }
      lVar8 = __dynamic_cast(lVar8,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
      if (lVar8 == 0) goto LAB_0010751f;
      if (*(long **)(lVar8 + 0xb68) != (long *)0x0) {
        cVar5 = (**(code **)(**(long **)(lVar8 + 0xb68) + 0x150))();
        if (cVar5 != '\0') {
          ScriptEditorDebugger::_stop_and_notify();
        }
      }
      iVar7 = iVar7 + 1;
    }
    _break_state_changed(this);
    if ((*(long *)(this + 0xa70) != 0) && (*(int *)(this + 0xa94) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4);
      if (uVar1 != 0) {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa78) + lVar8) != 0) {
            *(int *)(*(long *)(this + 0xa78) + lVar8) = 0;
            pvVar3 = *(void **)(*(long *)(this + 0xa70) + lVar8 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            *(undefined8 *)(*(long *)(this + 0xa70) + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar1 << 2);
      }
      *(undefined4 *)(this + 0xa94) = 0;
      *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
    }
    iVar7 = EditorUndoRedoManager::get_singleton();
    EditorUndoRedoManager::clear_history(iVar7,true);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process(SUB81(this,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::start(String const&) [clone .part.0] */

int __thiscall EditorDebuggerNode::start(EditorDebuggerNode *this,String *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = String::find((char *)param_1,0x10b568);
  if (iVar3 == -1) {
    iVar3 = 0x1f;
    _err_print_error("start","editor/debugger/editor_debugger_node.cpp",0x112,
                     "Condition \"!p_uri.contains(\"://\")\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    goto LAB_001077e3;
  }
  if (((this[0xa56] != (EditorDebuggerNode)0x0) &&
      (cVar2 = String::operator==((String *)(this + 0xa58),param_1), cVar2 != '\0')) &&
     (iVar3 = 0, *(long *)(this + 0xa10) != 0)) goto LAB_001077e3;
  stop(this,true);
  if (*(long *)(this + 0xa58) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa58),(CowData *)param_1);
  }
  String::find((char *)param_1,0x10b568);
  String::substr((int)(String *)&local_58,(int)param_1);
  pOVar4 = (Object *)EditorDebuggerServer::create((String *)&local_58);
  if ((pOVar4 == (Object *)0x0) || (cVar2 = RefCounted::init_ref(), cVar2 == '\0')) {
    pOVar6 = *(Object **)(this + 0xa10);
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)(this + 0xa10) = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar4 = (Object *)0x0;
        cVar2 = predelete_handler(pOVar6);
        if (cVar2 != '\0') goto LAB_00107903;
      }
    }
  }
  else {
    pOVar6 = *(Object **)(this + 0xa10);
    pOVar5 = pOVar6;
    if (pOVar4 != pOVar6) {
      *(Object **)(this + 0xa10) = pOVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xa10) = 0;
      }
      pOVar5 = pOVar4;
      if (((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
LAB_00107903:
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar5 = pOVar4;
        if (pOVar4 == (Object *)0x0) goto LAB_00107760;
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00107760:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  iVar3 = (**(code **)(**(long **)(this + 0xa10) + 0x160))(*(long **)(this + 0xa10),param_1);
  if (iVar3 == 0) {
    Node::set_process(SUB81(this,0));
    local_60 = 0;
    uVar1 = *(undefined8 *)(EditorNode::singleton + 0x5d0);
    local_50 = 0x21;
    local_58 = "--- Debugging process started ---";
    String::parse_latin1((StrRange *)&local_60);
    EditorLog::add_message(uVar1,(StrRange *)&local_60,4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
LAB_001077e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* EditorDebuggerNode::start(String const&) */

undefined8 __thiscall EditorDebuggerNode::start(EditorDebuggerNode *this,String *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc4) == '\0') {
    uVar2 = start(this,param_1);
    return uVar2;
  }
  return 2;
}



/* EditorDebuggerNode::set_keep_open(bool) */

void __thiscall EditorDebuggerNode::set_keep_open(EditorDebuggerNode *this,bool param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa56] = (EditorDebuggerNode)param_1;
  if (param_1) {
    if (*(long **)(this + 0xa10) != (long *)0x0) {
      cVar2 = (**(code **)(**(long **)(this + 0xa10) + 0x170))();
      if (cVar2 != '\0') goto LAB_00107a2f;
    }
    local_60 = 0;
    local_58 = "tcp://";
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_60);
    lVar4 = Engine::get_singleton();
    if (*(char *)(lVar4 + 0xc4) == '\0') {
      start(this,(String *)&local_60);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xa18);
    iVar5 = 0;
    while( true ) {
      iVar3 = TabContainer::get_tab_count();
      if (iVar3 <= iVar5) break;
      lVar4 = TabContainer::get_tab_control((int)uVar1);
      if (lVar4 == 0) {
LAB_00107ac6:
        _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                         "Parameter \"dbg\" is null.",0,0);
        break;
      }
      lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0);
      if (lVar4 == 0) goto LAB_00107ac6;
      if (*(long **)(lVar4 + 0xb68) != (long *)0x0) {
        cVar2 = (**(code **)(**(long **)(lVar4 + 0xb68) + 0x150))();
        if (cVar2 != '\0') {
          param_1 = (bool)cVar2;
        }
      }
      iVar5 = iVar5 + 1;
    }
    if (param_1 == false) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        stop(this,false);
        return;
      }
      goto LAB_00107b1c;
    }
  }
LAB_00107a2f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107b1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_notification(int) */

void __thiscall EditorDebuggerNode::_notification(EditorDebuggerNode *this,int param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  StringName *pSVar4;
  Object *pOVar5;
  char cVar6;
  EditorDebuggerNode EVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  String *pSVar11;
  String *pSVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  float fVar14;
  double dVar15;
  Object *local_70;
  long *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x11) {
    if (*(long **)(this + 0xa10) != (long *)0x0) {
      cVar6 = (**(code **)(**(long **)(this + 0xa10) + 0x170))();
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          stop(this,false);
          return;
        }
        goto LAB_00108477;
      }
      (**(code **)(**(long **)(this + 0xa10) + 0x158))();
      _update_errors();
      dVar15 = (double)Node::get_process_delta_time();
      fVar14 = *(float *)(this + 0xa50);
      *(float *)(this + 0xa50) = (float)((double)fVar14 - dVar15);
      if ((float)((double)fVar14 - dVar15) < 0.0) {
        local_60 = (Object *)0x0;
        String::parse_latin1((String *)&local_60,"debugger/remote_scene_tree_refresh_interval");
        _EDITOR_GET((String *)local_58);
        fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
        *(float *)(this + 0xa50) = fVar14;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        cVar6 = CanvasItem::is_visible_in_tree();
        if (cVar6 != '\0') {
          get_current_debugger(this);
          ScriptEditorDebugger::request_remote_tree();
        }
      }
      dVar15 = (double)Node::get_process_delta_time();
      fVar14 = *(float *)(this + 0xa44);
      *(float *)(this + 0xa44) = (float)((double)fVar14 - dVar15);
      if ((float)((double)fVar14 - dVar15) < 0.0) {
        local_60 = (Object *)0x0;
        String::parse_latin1((String *)&local_60,"debugger/remote_inspect_refresh_interval");
        _EDITOR_GET((String *)local_58);
        fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
        *(float *)(this + 0xa44) = fVar14;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        lVar10 = get_inspected_remote_object();
        if (lVar10 != 0) {
          uVar13 = get_current_debugger(this);
          ScriptEditorDebugger::request_remote_object(uVar13,*(undefined8 *)(lVar10 + 0x178));
        }
      }
      cVar6 = (**(code **)(**(long **)(this + 0xa10) + 0x178))();
      if (cVar6 != '\0') {
        uVar13 = *(undefined8 *)(this + 0xa18);
        pSVar12 = (String *)0x0;
        for (iVar8 = 0; iVar9 = TabContainer::get_tab_count(), iVar8 < iVar9; iVar8 = iVar8 + 1) {
          lVar10 = TabContainer::get_tab_control((int)uVar13);
          if ((lVar10 == 0) ||
             (pSVar11 = (String *)
                        __dynamic_cast(lVar10,&Object::typeinfo,&ScriptEditorDebugger::typeinfo,0),
             pSVar11 == (String *)0x0)) {
            _err_print_error("_for_all","editor/debugger/editor_debugger_node.cpp",0x38,
                             "Parameter \"dbg\" is null.",0,0);
            break;
          }
          if ((pSVar12 == (String *)0x0) &&
             ((*(long **)(pSVar11 + 0xb68) == (long *)0x0 ||
              (cVar6 = (**(code **)(**(long **)(pSVar11 + 0xb68) + 0x150))(), cVar6 == '\0')))) {
            pSVar12 = pSVar11;
          }
        }
        if (pSVar12 == (String *)0x0) {
          iVar8 = TabContainer::get_tab_count();
          if (4 < iVar8) {
            (**(code **)(**(long **)(this + 0xa10) + 0x180))(&local_60);
            (**(code **)(*(long *)local_60 + 0x178))();
            if (((local_60 != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar5 = local_60, cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_60), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
            goto LAB_00107b77;
          }
          pSVar12 = (String *)_add_debugger(this);
        }
        BaseButton::set_disabled(SUB81(*(undefined8 *)(EditorRunBar::singleton + 0xa58),0));
        local_60 = (Object *)0x0;
        String::parse_latin1((String *)&local_60,"debugger/auto_switch_to_remote_scene_tree");
        _EDITOR_GET((String *)local_58);
        EVar7 = (EditorDebuggerNode)Variant::operator_cast_to_bool((Variant *)local_58);
        this[0xa54] = EVar7;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (this[0xa54] != (EditorDebuggerNode)0x0) {
          SceneTreeDock::show_remote_tree();
        }
        SceneTreeDock::show_tab_buttons();
        plVar1 = *(long **)(this + 0xa10);
        *(undefined8 *)(pSVar12 + 0xae8) = *(undefined8 *)(this + 0xa48);
        (**(code **)(*plVar1 + 0x180))((String *)&local_60);
        ScriptEditorDebugger::start(pSVar12);
        if (((local_60 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_60, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_60), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        for (puVar2 = *(undefined8 **)(this + 0xa80); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          ScriptEditorDebugger::set_breakpoint
                    (pSVar12,(int)puVar2 + 0x10,SUB41(*(undefined4 *)(puVar2 + 3),0));
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          ScriptEditorDebugger::update_live_edit_root();
          return;
        }
        goto LAB_00108477;
      }
    }
  }
  else if (param_1 == 10000) {
    cVar6 = EditorThemeManager::is_generated_theme_outdated();
    if (cVar6 != '\0') {
      iVar8 = TabContainer::get_tab_count();
      if (1 < iVar8) {
        local_70 = (Object *)0x0;
        Ref<Theme>::operator=((Ref<Theme> *)&local_70,*(Ref **)(EditorNode::singleton + 0x838));
        pOVar5 = local_70;
        pcVar3 = *(code **)(*(long *)local_70 + 0x1d0);
        lVar10 = EditorStringNames::singleton + 0x18;
        if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
        (*pcVar3)((Ref<StyleBox> *)&local_68,pOVar5,
                  &_notification(int)::{lambda()#1}::operator()()::sname,lVar10);
        StyleBox::get_margin(local_68,0);
        StringName::StringName((StringName *)&local_60,"margin_left",false);
        iVar8 = (int)(StringName *)&local_60;
        Control::add_theme_constant_override((StringName *)this,iVar8);
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        Ref<StyleBox>::unref((Ref<StyleBox> *)&local_68);
        Ref<Theme>::unref((Ref<Theme> *)&local_70);
        local_70 = (Object *)0x0;
        Ref<Theme>::operator=((Ref<Theme> *)&local_70,*(Ref **)(EditorNode::singleton + 0x838));
        pOVar5 = local_70;
        pcVar3 = *(code **)(*(long *)local_70 + 0x1d0);
        lVar10 = EditorStringNames::singleton + 0x18;
        if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
           iVar9 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
        (*pcVar3)((Ref<StyleBox> *)&local_68,pOVar5,
                  &_notification(int)::{lambda()#2}::operator()()::sname,lVar10);
        StyleBox::get_margin(local_68,2);
        StringName::StringName((StringName *)&local_60,"margin_right",false);
        Control::add_theme_constant_override((StringName *)this,iVar8);
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        Ref<StyleBox>::unref((Ref<StyleBox> *)&local_68);
        pOVar5 = local_70;
        if (((local_70 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        local_68 = (long *)0x0;
        pSVar4 = *(StringName **)(this + 0xa18);
        Ref<Theme>::operator=((Ref<Theme> *)&local_68,*(Ref **)(EditorNode::singleton + 0x838));
        plVar1 = local_68;
        pcVar3 = *(code **)(*local_68 + 0x1d0);
        lVar10 = EditorStringNames::singleton + 0x18;
        if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
        }
        (*pcVar3)((StringName *)&local_60,plVar1,
                  &_notification(int)::{lambda()#3}::operator()()::sname,lVar10);
        Control::add_theme_style_override(pSVar4,(Ref *)(SceneStringNames::singleton + 600));
        Ref<StyleBox>::unref((Ref<StyleBox> *)&local_60);
        Ref<Theme>::unref((Ref<Theme> *)&local_68);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorDebuggerTree::update_icon_max_width();
        return;
      }
      goto LAB_00108477;
    }
  }
  else if (param_1 == 0xd) {
    _update_debug_options(this);
    this[0xa38] = (EditorDebuggerNode)0x0;
  }
LAB_00107b77:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108477:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::_bind_methods() */

void EditorDebuggerNode::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  MethodBind *pMVar10;
  long in_FS_OFFSET;
  long local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  long local_2d0;
  long local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  StringName local_298 [8];
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  long local_270;
  StringName local_268 [8];
  undefined4 local_260;
  long local_258;
  undefined4 local_250;
  long local_248;
  long local_240;
  StringName local_238 [8];
  undefined4 local_230;
  long local_228;
  undefined4 local_220;
  undefined8 local_218;
  long local_210;
  StringName local_208 [8];
  undefined4 local_200;
  long local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  StringName local_1d8 [8];
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  long local_1b8;
  long local_1b0;
  StringName local_1a8 [8];
  undefined4 local_1a0;
  long local_198;
  undefined4 local_190;
  long local_188;
  long local_180;
  StringName local_178 [8];
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  StringName local_148 [8];
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  char *local_128;
  long local_120;
  StringName local_118 [8];
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 local_f0;
  StringName local_e8 [8];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_b8._8_8_ = local_b8._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar10 = create_method_bind<EditorDebuggerNode,NodePath_const&,String_const&,String_const&>
                      (live_debug_create_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_create_node",false);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_b8._8_8_;
  local_b8 = auVar8 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar10 = create_method_bind<EditorDebuggerNode,NodePath_const&,String_const&,String_const&>
                      (live_debug_instantiate_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_instantiate_node",false);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_b8._8_8_;
  local_b8 = auVar2 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar10 = create_method_bind<EditorDebuggerNode,NodePath_const&>(live_debug_remove_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_remove_node",false);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_b8._8_8_;
  local_b8 = auVar3 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar10 = create_method_bind<EditorDebuggerNode,NodePath_const&,ObjectID>
                      (live_debug_remove_and_keep_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_remove_and_keep_node",false);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_b8._8_8_;
  local_b8 = auVar4 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar10 = create_method_bind<EditorDebuggerNode,ObjectID,NodePath_const&,int>
                      (live_debug_restore_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_restore_node",false);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_b8._8_8_;
  local_b8 = auVar5 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar10 = create_method_bind<EditorDebuggerNode,NodePath_const&,String_const&>
                      (live_debug_duplicate_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_duplicate_node",false);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_b8._8_8_;
  local_b8 = auVar6 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar10 = create_method_bind<EditorDebuggerNode,NodePath_const&,NodePath_const&,String_const&,int>
                      (live_debug_reparent_node);
  StringName::StringName((StringName *)&local_c8,"live_debug_reparent_node",false);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_b8._8_8_;
  local_b8 = auVar7 << 0x40;
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_128 = (char *)0x0;
  local_c8 = "goto_script_line";
  local_c0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_128);
  local_f8 = "EditorDebuggerNode";
  local_158 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_f8,(String *)&local_158,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  local_1b8 = 0;
  local_1e8 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_1e8);
  local_218 = 0;
  local_c8 = "line";
  local_c0 = 4;
  String::parse_latin1((StrRange *)&local_218);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,2,(StrRange *)&local_218,0,(StrRange *)&local_1e8,6,
             (StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_248,"script",false);
  local_158 = CONCAT44(local_158._4_4_,0x18);
  local_150 = 0;
  StringName::StringName(local_148,(StringName *)&local_248);
  local_140 = 0;
  local_c8 = "set_execution";
  local_138 = 0;
  local_130 = 6;
  local_188 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_188);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_188);
  local_f0 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,local_128._0_4_);
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
  }
  StringName::StringName(local_e8,local_118);
  local_d8 = 0;
  local_e0 = local_110;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  local_d0 = local_100;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_278 = 0;
  local_f8 = "EditorDebuggerNode";
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_278);
  StringName::StringName((StringName *)&local_f8,(String *)&local_278,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"script",false);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0x18);
  local_f0 = 0;
  StringName::StringName(local_e8,(StringName *)&local_188);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 6;
  local_158 = 0;
  String::parse_latin1((String *)&local_158,"clear_execution");
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  local_128 = "EditorDebuggerNode";
  local_1b8 = 0;
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_128,(String *)&local_1b8,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_1e8 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_1e8);
  local_c8 = "can_debug";
  local_218 = 0;
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_218);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,1,(StrRange *)&local_218,0,(StrRange *)&local_1e8,6,
             (StrRange *)&local_1b8);
  local_248 = 0;
  local_278 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_2a8 = 0;
  local_c8 = "reallydid";
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_2a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,1,(StrRange *)&local_2a8,0,(StrRange *)&local_278,6,
             (StringName *)&local_248);
  local_188 = 0;
  String::parse_latin1((String *)&local_188,"breaked");
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_188);
  local_f0 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,local_128._0_4_);
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
  }
  StringName::StringName(local_e8,local_118);
  local_d8 = 0;
  local_e0 = local_110;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  local_d0 = local_100;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_2b0 = 0;
  local_f8 = "EditorDebuggerNode";
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_2b0);
  StringName::StringName((StringName *)&local_f8,(String *)&local_2b0,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b0);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_248 = 0;
  local_278 = 0;
  String::parse_latin1((String *)&local_278,"");
  local_2a8 = 0;
  local_c8 = "enabled";
  local_c0 = 7;
  String::parse_latin1((StrRange *)&local_2a8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_188,1,(StrRange *)&local_2a8,0,(StrRange *)&local_278,6,
             (StringName *)&local_248);
  local_2b0 = 0;
  local_2b8 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2b8);
  local_2c0 = 0;
  local_c8 = "line";
  local_c0 = 4;
  String::parse_latin1((StrRange *)&local_2c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1b8,2,(StrRange *)&local_2c0,0,(StrRange *)&local_2b8,6,
             (StrRange *)&local_2b0);
  local_2c8 = 0;
  local_2d0 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2d0);
  local_2d8 = 0;
  String::parse_latin1((String *)&local_2d8,"path");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1e8,4,(String *)&local_2d8,0,(StrRange *)&local_2d0,6,
             (StrRange *)&local_2c8);
  local_c8 = "breakpoint_toggled";
  local_218 = 0;
  local_c0 = 0x12;
  String::parse_latin1((StrRange *)&local_218);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_218);
  local_120 = 0;
  local_128 = (char *)CONCAT44(local_128._4_4_,(undefined4)local_188);
  if (local_180 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_180);
  }
  StringName::StringName(local_118,local_178);
  local_108 = 0;
  local_110 = local_170;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_168);
  }
  local_150 = 0;
  local_100 = local_160;
  local_158 = CONCAT44(local_158._4_4_,(undefined4)local_1b8);
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_1b0);
  }
  StringName::StringName(local_148,local_1a8);
  local_138 = 0;
  local_140 = local_1a0;
  if (local_198 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_198);
  }
  local_130 = local_190;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_1e8);
  local_f0 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,local_128._0_4_);
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
  }
  StringName::StringName(local_e8,local_118);
  local_d8 = 0;
  local_e0 = local_110;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  local_d0 = local_100;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_f8 = "EditorDebuggerNode";
  local_128 = (char *)0x0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_f8,(String *)&local_128,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d0);
  if ((StringName::configured != '\0') && (local_2c8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
  if ((StringName::configured != '\0') && (local_2b0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  local_2b8 = 0;
  local_2c0 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2c0);
  local_c8 = "debugger";
  local_2c8 = 0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_2c8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_218,2,(StrRange *)&local_2c8,0,(StrRange *)&local_2c0,6,
             (StrRange *)&local_2b8);
  local_2d0 = 0;
  local_2d8 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2d8);
  local_2e0 = 0;
  local_c8 = "enabled";
  local_c0 = 7;
  String::parse_latin1((StrRange *)&local_2e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,1,(StrRange *)&local_2e0,0,(String *)&local_2d8,6,
             (StrRange *)&local_2d0);
  local_2e8 = 0;
  local_2f0 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_2f0);
  local_2f8 = 0;
  local_c8 = "line";
  local_c0 = 4;
  String::parse_latin1((StrRange *)&local_2f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_278,2,(StrRange *)&local_2f8,0,(StrRange *)&local_2f0,6,
             &local_2e8);
  StringName::StringName((StringName *)&local_300,"script",false);
  local_2a8 = CONCAT44(local_2a8._4_4_,0x18);
  local_2a0 = 0;
  StringName::StringName(local_298,(StringName *)&local_300);
  local_c8 = "breakpoint_set_in_tree";
  local_290 = 0;
  local_288 = 0;
  local_280 = 6;
  local_2b0 = 0;
  local_c0 = 0x16;
  String::parse_latin1((StrRange *)&local_2b0);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_2b0);
  local_180 = 0;
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_218);
  if (local_210 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,(CowData *)&local_210);
  }
  StringName::StringName(local_178,local_208);
  local_168 = 0;
  local_170 = local_200;
  if (local_1f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1f8);
  }
  local_1b0 = 0;
  local_160 = local_1f0;
  local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_248);
  if (local_240 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b0,(CowData *)&local_240);
  }
  StringName::StringName(local_1a8,local_238);
  local_198 = 0;
  local_1a0 = local_230;
  if (local_228 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_228);
  }
  local_1e0 = 0;
  local_190 = local_220;
  local_1e8 = CONCAT44(local_1e8._4_4_,(undefined4)local_278);
  if (local_270 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e0,(CowData *)&local_270);
  }
  StringName::StringName(local_1d8,local_268);
  local_1c8 = 0;
  local_1d0 = local_260;
  if (local_258 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_258);
  }
  local_1c0 = local_250;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_2a8);
  local_120 = 0;
  local_128 = (char *)CONCAT44(local_128._4_4_,(undefined4)local_188);
  if (local_180 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_180);
  }
  StringName::StringName(local_118,local_178);
  local_108 = 0;
  local_110 = local_170;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_168);
  }
  local_150 = 0;
  local_100 = local_160;
  local_158 = CONCAT44(local_158._4_4_,(undefined4)local_1b8);
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_1b0);
  }
  StringName::StringName(local_148,local_1a8);
  local_138 = 0;
  local_140 = local_1a0;
  if (local_198 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_198);
  }
  local_130 = local_190;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_1e8);
  local_f0 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,local_128._0_4_);
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
  }
  StringName::StringName(local_e8,local_118);
  local_d8 = 0;
  local_e0 = local_110;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  local_d0 = local_100;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  local_f8 = "EditorDebuggerNode";
  local_128 = (char *)0x0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_f8,(String *)&local_128,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_2a8);
  if ((StringName::configured != '\0') && (local_300 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f0);
  if ((StringName::configured != '\0') && (local_2e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
  if ((StringName::configured != '\0') && (local_2d0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c0);
  if ((StringName::configured != '\0') && (local_2b8 != 0)) {
    StringName::unref();
  }
  local_c8 = "";
  local_188 = 0;
  local_1b8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_1b8);
  local_c8 = "debugger";
  local_1e8 = 0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_1e8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,2,(StrRange *)&local_1e8,0,(StrRange *)&local_1b8,6,
             (StrRange *)&local_188);
  local_c8 = "breakpoints_cleared_in_tree";
  local_158 = 0;
  local_c0 = 0x1b;
  String::parse_latin1((StrRange *)&local_158);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"EditorDebuggerNode");
  StringName::StringName((StringName *)&local_128,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
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



/* StyleBoxEmpty::is_class_ptr(void*) const */

uint __thiscall StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this,void *param_1)

{
  return (uint)CONCAT71(0x11ac,(undefined4 *)param_1 == &StyleBox::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ac,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ad,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ad,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11ad,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */

undefined8 StyleBoxEmpty::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */

void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */

undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_notificationv(int, bool) */

void StyleBoxEmpty::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StyleBoxEmpty::get_style_margin(Side) const */

undefined8 StyleBoxEmpty::get_style_margin(void)

{
  return 0;
}



/* StyleBoxEmpty::draw(RID, Rect2 const&) const */

void StyleBoxEmpty::draw(void)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<EditorNode, void, long>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,long>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNode,void,long> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>, int, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, bool, bool, String const&, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, String const&, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,int> *this)

{
  return;
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::get_argument_meta(int) const
    */

char __thiscall
MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::get_argument_meta
          (MethodBindT<NodePath_const&,NodePath_const&,String_const&,int> *this,int param_1)

{
  return (param_1 == 3) * '\x03';
}



/* MethodBindT<NodePath const&, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<NodePath_const&,String_const&>::_gen_argument_type
          (MethodBindT<NodePath_const&,String_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x12U) + 4;
  }
  return cVar1;
}



/* MethodBindT<NodePath const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<ObjectID, NodePath const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<ObjectID,NodePath_const&,int>::get_argument_meta
          (MethodBindT<ObjectID,NodePath_const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\b';
  if (param_1 != 0) {
    cVar1 = (param_1 == 2) * '\x03';
  }
  return cVar1;
}



/* MethodBindT<NodePath const&, ObjectID>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<NodePath_const&,ObjectID>::_gen_argument_type
          (MethodBindT<NodePath_const&,ObjectID> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x14U) + 2;
  }
  return cVar1;
}



/* MethodBindT<NodePath const&, ObjectID>::get_argument_meta(int) const */

long __thiscall
MethodBindT<NodePath_const&,ObjectID>::get_argument_meta
          (MethodBindT<NodePath_const&,ObjectID> *this,int param_1)

{
  return (ulong)(param_1 == 1) << 3;
}



/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x16;
}



/* MethodBindT<NodePath const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&, String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&,String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorNode, void, long>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNode,void,long>::get_argument_count
          (CallableCustomMethodPointer<EditorNode,void,long> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>, int, bool,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>::
get_argument_count(CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, bool, bool, String const&, bool,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>::
get_argument_count(CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 5;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, String const&, int,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, String const&,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerNode,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorDebuggerNode, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, String const&, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, bool, bool, String const&, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>, int, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorNode, void, long>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,long>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNode,void,long> *this)

{
  operator_delete(this,0x48);
  return;
}



/* EditorDebuggerNode::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorDebuggerNode::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorDebuggerNode::_property_can_revertv(StringName const&) const */

undefined8 EditorDebuggerNode::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00120008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<NodePath const&, String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,String_const&,String_const&>::~MethodBindT
          (MethodBindT<NodePath_const&,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a670;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&, String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,String_const&,String_const&>::~MethodBindT
          (MethodBindT<NodePath_const&,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a670;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a6d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a6d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&, ObjectID>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,ObjectID>::~MethodBindT(MethodBindT<NodePath_const&,ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a730;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&, ObjectID>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,ObjectID>::~MethodBindT(MethodBindT<NodePath_const&,ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a730;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<ObjectID, NodePath const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<ObjectID,NodePath_const&,int>::~MethodBindT
          (MethodBindT<ObjectID,NodePath_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a790;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<ObjectID, NodePath const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<ObjectID,NodePath_const&,int>::~MethodBindT
          (MethodBindT<ObjectID,NodePath_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a790;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,String_const&>::~MethodBindT
          (MethodBindT<NodePath_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a7f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,String_const&>::~MethodBindT
          (MethodBindT<NodePath_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a7f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::~MethodBindT
          (MethodBindT<NodePath_const&,NodePath_const&,String_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::~MethodBindT
          (MethodBindT<NodePath_const&,NodePath_const&,String_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011a850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&, String const&, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<NodePath_const&,String_const&,String_const&>::_gen_argument_type
          (MethodBindT<NodePath_const&,String_const&,String_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (-(param_1 == 0) & 0x12U) + 4;
  }
  return cVar1;
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::_gen_argument_type(int) const
    */

char __thiscall
MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::_gen_argument_type
          (MethodBindT<NodePath_const&,NodePath_const&,String_const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 4) && (cVar1 = '\x16', 1 < (uint)param_1)) {
    return (param_1 == 2) * '\x02' + '\x02';
  }
  return cVar1;
}



/* MethodBindT<ObjectID, NodePath const&, int>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<ObjectID,NodePath_const&,int>::_gen_argument_type
          (MethodBindT<ObjectID,NodePath_const&,int> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((uint)param_1 < 3) && (uVar1 = 2, param_1 == 1)) {
    uVar1 = 0x16;
  }
  return uVar1;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int> *this)

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
      goto LAB_0010b75d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b75d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b75d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorDebuggerNode::_validate_propertyv(PropertyInfo&) const */

void EditorDebuggerNode::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00120010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, String const&, int>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int> *this)

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
      goto LAB_0010b8dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b8dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b8dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>, int, bool,
   int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int> *this)

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
      goto LAB_0010b9dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b9dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b9dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorNode, void, long>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNode,void,long>::get_object
          (CallableCustomMethodPointer<EditorNode,void,long> *this)

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
      goto LAB_0010badd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010badd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010badd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010bbdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bbdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bbdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, bool, bool, String const&, bool,
   int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>
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
      goto LAB_0010bcdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bcdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bcdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted> >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>> *this)

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
      goto LAB_0010bddd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bddd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bddd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void> *this)

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
      goto LAB_0010bedd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bedd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bedd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, String const&, int, int>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int> *this)

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
      goto LAB_0010bfdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bfdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bfdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerNode,void,int> *this)

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
      goto LAB_0010c0dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c0dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c0dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorDebuggerNode::_setv(StringName const&, Variant const&) */

undefined8 EditorDebuggerNode::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00120018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c218) */
/* EditorDebuggerNode::_getv(StringName const&, Variant&) const */

undefined8 EditorDebuggerNode::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00120020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EditorDebuggerNode::is_class_ptr(void*) const */

uint EditorDebuggerNode::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11ac,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11ac,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11ac,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11ac,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11ac,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorDebuggerNode::_clear_execution(Ref<RefCounted>) */

void __thiscall EditorDebuggerNode::_clear_execution(EditorDebuggerNode *this,long *param_2)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  pOVar3 = (Object *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
    }
  }
  if (_clear_execution(Ref<RefCounted>)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_clear_execution(Ref<RefCounted>)::{lambda()#1}::operator()()::
                                 sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_clear_execution(Ref<RefCounted>)::{lambda()#1}::operator()()::sname,true
                 );
      __cxa_atexit(StringName::~StringName,
                   &_clear_execution(Ref<RefCounted>)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_clear_execution(Ref<RefCounted>)::{lambda()#1}::operator()()::sname);
    }
  }
  Variant::Variant((Variant *)local_68,pOVar3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_clear_execution(Ref<RefCounted>)::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar3,false);
          return;
        }
        goto LAB_0010cb6f;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cb6f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBox::get_base_extension() const */

StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this)

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



/* StyleBox::get_save_class() const */

StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this)

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



/* EditorDebuggerNode::_debugger_wants_stop(int) [clone .cold] */

void EditorDebuggerNode::_debugger_wants_stop(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorDebuggerNode::_add_debugger() [clone .cold] */

void EditorDebuggerNode::_add_debugger(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorDebuggerNode::EditorDebuggerNode() [clone .cold] */

void __thiscall EditorDebuggerNode::EditorDebuggerNode(EditorDebuggerNode *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorDebuggerNode::plugins_capture(ScriptEditorDebugger*, String const&, Array const&) [clone
   .cold] */

void EditorDebuggerNode::plugins_capture
               (ScriptEditorDebugger *param_1,String *param_2,Array *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorDebuggerNode::_debugger_changed(int) [clone .cold] */

void EditorDebuggerNode::_debugger_changed(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BaseButton::set_pressed;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd0e;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd0e;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd0e;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0010cd0e:
  Resource::~Resource((Resource *)this);
  return;
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BaseButton::set_pressed;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cdae;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cdae;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cdae;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0010cdae:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b0);
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



/* EditorDebuggerNode::_get_class_namev() const */

undefined8 * EditorDebuggerNode::_get_class_namev(void)

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
LAB_0010ce83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ce83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerNode");
      goto LAB_0010ceee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerNode");
LAB_0010ceee:
  return &_get_class_namev()::_class_name_static;
}



/* StyleBoxEmpty::_get_class_namev() const */

undefined8 * StyleBoxEmpty::_get_class_namev(void)

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
LAB_0010cf73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cf73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
      goto LAB_0010cfde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
LAB_0010cfde:
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



/* EditorDebuggerNode::get_class() const */

void EditorDebuggerNode::get_class(void)

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



/* StyleBoxEmpty::get_class() const */

void StyleBoxEmpty::get_class(void)

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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorDebuggerNode, int>(EditorDebuggerNode*,
   char const*, void (EditorDebuggerNode::*)(int)) */

EditorDebuggerNode *
create_custom_callable_function_pointer<EditorDebuggerNode,int>
          (EditorDebuggerNode *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_0011a0d0;
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



/* Callable create_custom_callable_function_pointer<EditorDebuggerNode, ObjectID,
   int>(EditorDebuggerNode*, char const*, void (EditorDebuggerNode::*)(ObjectID, int)) */

EditorDebuggerNode *
create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,int>
          (EditorDebuggerNode *param_1,char *param_2,_func_void_ObjectID_int *param_3)

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
  *(undefined ***)this = &PTR_hash_0011a160;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorDebuggerNode, ObjectID, String const&,
   int>(EditorDebuggerNode*, char const*, void (EditorDebuggerNode::*)(ObjectID, String const&,
   int)) */

EditorDebuggerNode *
create_custom_callable_function_pointer<EditorDebuggerNode,ObjectID,String_const&,int>
          (EditorDebuggerNode *param_1,char *param_2,_func_void_ObjectID_String_ptr_int *param_3)

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
  *(undefined ***)this = &PTR_hash_0011a1f0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID_String_ptr_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorDebuggerNode>(EditorDebuggerNode*, char
   const*, void (EditorDebuggerNode::*)()) */

EditorDebuggerNode *
create_custom_callable_function_pointer<EditorDebuggerNode>
          (EditorDebuggerNode *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_0011a310;
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



/* Callable Callable::bind<int>(int) const */

Variant ** Callable::bind<int>(int param_1)

{
  char cVar1;
  int in_EDX;
  int in_ESI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_EDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT44(in_register_0000003c,param_1),in_ESI);
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
  return (Variant **)CONCAT44(in_register_0000003c,param_1);
}



/* Callable create_custom_callable_function_pointer<EditorDebuggerNode, String const&, int,
   int>(EditorDebuggerNode*, char const*, void (EditorDebuggerNode::*)(String const&, int, int)) */

EditorDebuggerNode *
create_custom_callable_function_pointer<EditorDebuggerNode,String_const&,int,int>
          (EditorDebuggerNode *param_1,char *param_2,_func_void_String_ptr_int_int *param_3)

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
  *(undefined ***)this = &PTR_hash_0011a3a0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr_int_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<EditorDebuggerPlugin>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<EditorDebuggerPlugin> > >::insert(Ref<EditorDebuggerPlugin> const&)
    */

undefined1  [16]
HashSet<Ref<EditorDebuggerPlugin>,HashMapHasherDefault,HashMapComparatorDefault<Ref<EditorDebuggerPlugin>>>
::insert(Ref *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
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
  char cVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  long *in_RDX;
  long lVar39;
  ulong uVar40;
  long *in_RSI;
  ulong uVar41;
  uint uVar42;
  undefined4 uVar43;
  ulong uVar44;
  uint uVar45;
  undefined1 auVar46 [16];
  ulong uStack_98;
  ulong local_88;
  ulong local_70;
  
  lVar35 = *in_RSI;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar35 == 0) {
    uVar34 = (ulong)uVar33 * 4;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[3] = lVar35;
    lVar35 = Memory::alloc_static((ulong)uVar33 * 8,false);
    *in_RSI = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[2] = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[1] = lVar35;
    if (uVar33 != 0) {
      memset((void *)in_RSI[3],0,uVar34);
    }
    lVar35 = *in_RSI;
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (ulong)uVar3;
    if (lVar35 != 0) goto LAB_0010d998;
  }
  else {
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
LAB_0010d998:
    local_88 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar34 = lVar36 * 0x3ffff - 1;
      uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
      uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
      uVar34 = uVar34 >> 0x16 ^ uVar34;
      uVar44 = uVar34 & 0xffffffff;
      if ((int)uVar34 == 0) {
        uVar44 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar44 * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar39 = SUB168(auVar8 * auVar20,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar34 = (ulong)uVar42;
      iVar38 = SUB164(auVar8 * auVar20,8);
      if (uVar42 != 0) {
        uVar42 = 0;
        do {
          if ((int)uVar34 == (int)uVar44) {
            uVar45 = *(uint *)(in_RSI[1] + lVar39 * 4);
            uStack_98 = (ulong)uVar45;
            if (*(long *)(lVar35 + uStack_98 * 8) == lVar36) goto LAB_0010daaa;
          }
          uVar42 = uVar42 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(iVar38 + 1) * lVar4;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar39 = SUB168(auVar9 * auVar21,8);
          uVar45 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar34 = (ulong)uVar45;
          iVar38 = SUB164(auVar9 * auVar21,8);
        } while ((uVar45 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar34 * lVar4, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4) +
                             iVar38) - SUB164(auVar10 * auVar22,8)) * lVar4, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, uVar42 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar33 * __LC30 < (float)(uVar3 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      lVar35 = *in_RSI;
      uVar45 = 0xffffffff;
      uVar3 = *(uint *)((long)in_RSI + 0x24);
      goto LAB_0010daaa;
    }
    uVar33 = (int)in_RSI[4] + 1;
    uVar34 = (ulong)uVar33;
    if (uVar33 < 2) {
      uVar34 = 2;
    }
    uVar33 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    *(int *)(in_RSI + 4) = (int)uVar34;
    pvVar5 = (void *)in_RSI[3];
    uVar34 = (ulong)uVar33 * 4;
    pvVar6 = (void *)in_RSI[2];
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[3] = lVar35;
    lVar35 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar33 * 8,false);
    *in_RSI = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[2] = lVar35;
    lVar35 = Memory::realloc_static((void *)in_RSI[1],uVar34,false);
    in_RSI[1] = lVar35;
    if (uVar33 != 0) {
      memset((void *)in_RSI[3],0,uVar34);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar36 = in_RSI[2];
      lVar4 = in_RSI[3];
      local_70 = 0;
      do {
        uVar45 = 0;
        uVar40 = local_70 & 0xffffffff;
        uVar43 = (undefined4)local_70;
        uVar33 = *(uint *)((long)pvVar5 + (ulong)*(uint *)((long)pvVar6 + local_70 * 4) * 4);
        uVar34 = (ulong)uVar33;
        lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar3);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar34 * lVar7;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar41;
        lVar39 = SUB168(auVar12 * auVar24,8) * 4;
        iVar38 = SUB164(auVar12 * auVar24,8);
        puVar1 = (uint *)(lVar4 + lVar39);
        uVar42 = *puVar1;
        uVar44 = local_70;
        while (uVar42 != 0) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar42 * lVar7;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)((iVar38 + uVar3) - SUB164(auVar13 * auVar25,8)) * lVar7;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          uVar33 = SUB164(auVar14 * auVar26,8);
          if (uVar33 < uVar45) {
            *(int *)(lVar36 + uVar40 * 4) = iVar38;
            uVar42 = *puVar1;
            *puVar1 = (uint)uVar34;
            uVar45 = *(uint *)(lVar39 + lVar35);
            uVar34 = (ulong)uVar42;
            *(uint *)(lVar39 + lVar35) = (uint)uVar40;
            uVar40 = (ulong)uVar45;
            uVar45 = uVar33;
          }
          uVar43 = (undefined4)uVar40;
          uVar33 = (uint)uVar34;
          uVar45 = uVar45 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(iVar38 + 1) * lVar7;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar41;
          lVar39 = SUB168(auVar15 * auVar27,8) * 4;
          iVar38 = SUB164(auVar15 * auVar27,8);
          puVar1 = (uint *)(lVar4 + lVar39);
          uVar44 = uVar40;
          uVar42 = *puVar1;
        }
        *puVar1 = uVar33;
        *(int *)(lVar36 + uVar44 * 4) = iVar38;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar35 + lVar39) = uVar43;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(pvVar6,false);
    lVar35 = *in_RSI;
    local_88 = (ulong)*(uint *)((long)in_RSI + 0x24);
  }
  lVar36 = *in_RDX;
  plVar2 = (long *)(lVar35 + local_88 * 8);
  *plVar2 = 0;
  uVar34 = lVar36 * 0x3ffff - 1;
  uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
  uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
  uVar34 = uVar34 >> 0x16 ^ uVar34;
  uVar40 = uVar34 & 0xffffffff;
  if ((int)uVar34 == 0) {
    uVar40 = 1;
  }
  uVar33 = (uint)uVar40;
  if (*in_RDX != 0) {
    *plVar2 = *in_RDX;
    cVar32 = RefCounted::reference();
    if (cVar32 == '\0') {
      *plVar2 = 0;
    }
    lVar35 = *in_RSI;
    local_88 = (ulong)*(uint *)((long)in_RSI + 0x24);
  }
  uVar45 = 0;
  lVar4 = in_RSI[3];
  lVar39 = in_RSI[1];
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar41 = CONCAT44(0,uVar3);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar40 * lVar7;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar41;
  lVar36 = SUB168(auVar16 * auVar28,8) * 4;
  iVar38 = SUB164(auVar16 * auVar28,8);
  uVar34 = in_RSI[2];
  puVar1 = (uint *)(lVar4 + lVar36);
  uVar42 = *puVar1;
  uStack_98 = uVar34;
  uVar44 = local_88;
  while (uVar42 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar42 * lVar7;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar41;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar3 + iVar38) - SUB164(auVar17 * auVar29,8)) * lVar7;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar41;
    uVar33 = SUB164(auVar18 * auVar30,8);
    if (uVar33 < uVar45) {
      puVar37 = (uint *)(lVar36 + lVar39);
      *(int *)(uVar34 + uVar44 * 4) = iVar38;
      uVar42 = *puVar1;
      *puVar1 = (uint)uVar40;
      uVar45 = *puVar37;
      uVar40 = (ulong)uVar42;
      *puVar37 = (uint)local_88;
      local_88 = (ulong)uVar45;
      uVar44 = local_88;
      uVar45 = uVar33;
    }
    uVar33 = (uint)uVar40;
    uVar45 = uVar45 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar38 + 1) * lVar7;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar41;
    uStack_98 = SUB168(auVar19 * auVar31,8);
    lVar36 = uStack_98 * 4;
    iVar38 = SUB164(auVar19 * auVar31,8);
    puVar1 = (uint *)(lVar4 + lVar36);
    uVar42 = *puVar1;
  }
  *puVar1 = uVar33;
  *(int *)(uVar34 + uVar44 * 4) = iVar38;
  *(uint *)(lVar39 + lVar36) = (uint)local_88;
  uVar45 = *(uint *)((long)in_RSI + 0x24);
  *(uint *)((long)in_RSI + 0x24) = uVar45 + 1;
  uVar3 = uVar45 + 1;
LAB_0010daaa:
  local_88._0_4_ = uVar3;
  *(uint *)(param_1 + 0xc) = uVar45;
  *(long *)param_1 = lVar35;
  *(uint *)(param_1 + 8) = (uint)local_88;
  auVar46._8_8_ = uStack_98;
  auVar46._0_8_ = param_1;
  return auVar46;
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



/* WARNING: Removing unreachable block (ram,0x0010e188) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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
        if (pvVar5 == (void *)0x0) goto LAB_0010e4c4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010e4c4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorDebuggerNode::~EditorDebuggerNode() */

void __thiscall EditorDebuggerNode::~EditorDebuggerNode(EditorDebuggerNode *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  pvVar6 = *(void **)(this + 0xa98);
  *(undefined ***)this = &PTR__initialize_classv_00119d58;
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xabc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4) != 0) {
        memset(*(void **)(this + 0xab0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab8) * 4) << 2);
        if (*(int *)(this + 0xabc) == 0) goto LAB_0010e5f7;
      }
      lVar5 = 0;
      do {
        plVar1 = (long *)((long)pvVar6 + lVar5 * 8);
        if (*plVar1 != 0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            pOVar3 = (Object *)*plVar1;
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
          pvVar6 = *(void **)(this + 0xa98);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0xabc));
      *(undefined4 *)(this + 0xabc) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_0010e62b;
    }
LAB_0010e5f7:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xaa8),false);
    Memory::free_static(*(void **)(this + 0xaa0),false);
    Memory::free_static(*(void **)(this + 0xab0),false);
  }
LAB_0010e62b:
  pvVar6 = *(void **)(this + 0xa70);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xa94) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xa94) = 0;
        *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa78) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xa78) + lVar5) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xa70);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xa94) = 0;
        *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010e6d3;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa78),false);
  }
LAB_0010e6d3:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
  if (*(long *)(this + 0xa30) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa30);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
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
  *(code **)this = ScriptEditorDebugger::get_stack_script_file;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e759;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010e759:
  Control::~Control((Control *)this);
  return;
}



/* EditorDebuggerNode::~EditorDebuggerNode() */

void __thiscall EditorDebuggerNode::~EditorDebuggerNode(EditorDebuggerNode *this)

{
  ~EditorDebuggerNode(this);
  operator_delete(this,0xac0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<EditorDebuggerNode::Breakpoint, bool, EditorDebuggerNode::Breakpoint,
   HashMapComparatorDefault<EditorDebuggerNode::Breakpoint>,
   DefaultTypedAllocator<HashMapElement<EditorDebuggerNode::Breakpoint, bool> >
   >::operator[](EditorDebuggerNode::Breakpoint const&) */

undefined8 * __thiscall
HashMap<EditorDebuggerNode::Breakpoint,bool,EditorDebuggerNode::Breakpoint,HashMapComparatorDefault<EditorDebuggerNode::Breakpoint>,DefaultTypedAllocator<HashMapElement<EditorDebuggerNode::Breakpoint,bool>>>
::operator[](HashMap<EditorDebuggerNode::Breakpoint,bool,EditorDebuggerNode::Breakpoint,HashMapComparatorDefault<EditorDebuggerNode::Breakpoint>,DefaultTypedAllocator<HashMapElement<EditorDebuggerNode::Breakpoint,bool>>>
             *this,Breakpoint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  undefined8 *puVar6;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  char cVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  void *pvVar45;
  ulong uVar46;
  int iVar47;
  uint uVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  long lVar55;
  undefined8 *puVar56;
  long in_FS_OFFSET;
  uint local_b8;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010efd8:
    uVar42 = (ulong)uVar40;
    uVar46 = uVar42 * 4;
    uVar51 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar46,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar45 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar45;
    if (uVar40 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar45 + uVar51)) && (pvVar45 < (void *)((long)pvVar4 + uVar46))
         ) {
        uVar46 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar46 * 4) = 0;
          *(undefined8 *)((long)pvVar45 + uVar46 * 8) = 0;
          uVar46 = uVar46 + 1;
        } while (uVar42 != uVar46);
        goto LAB_0010ee2f;
      }
      memset(pvVar4,0,uVar46);
      memset(pvVar45,0,uVar51);
      iVar47 = *(int *)(this + 0x2c);
LAB_0010ee37:
      if (iVar47 != 0) {
LAB_0010ee3f:
        uVar48 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar41 = String::hash();
        uVar42 = CONCAT44(0,uVar48);
        lVar55 = *(long *)(this + 0x10);
        uVar41 = (*(int *)(param_1 + 8) * 0x16a88000 |
                 (uint)(*(int *)(param_1 + 8) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar41;
        uVar41 = (uVar41 << 0xd | uVar41 >> 0x13) * 5 + 0xe6546b64;
        uVar46 = (ulong)uVar41;
        if (uVar41 == 0) {
          uVar46 = 1;
        }
        uVar53 = 0;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar46 * lVar5;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar42;
        lVar49 = SUB168(auVar19 * auVar35,8);
        uVar41 = *(uint *)(lVar55 + lVar49 * 4);
        uVar54 = SUB164(auVar19 * auVar35,8);
        if (uVar41 != 0) {
          do {
            if (((uint)uVar46 == uVar41) &&
               (lVar49 = *(long *)(*(long *)(this + 8) + lVar49 * 8),
               *(int *)(lVar49 + 0x18) == *(int *)(param_1 + 8))) {
              cVar39 = String::operator==((String *)(lVar49 + 0x10),(String *)param_1);
              if (cVar39 != '\0') {
                puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar54 * 8);
                *(undefined1 *)(puVar44 + 4) = 0;
                goto LAB_0010ecdb;
              }
              lVar55 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = (ulong)(uVar54 + 1) * lVar5;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = uVar42;
            lVar49 = SUB168(auVar20 * auVar36,8);
            uVar41 = *(uint *)(lVar55 + lVar49 * 4);
            uVar54 = SUB164(auVar20 * auVar36,8);
          } while ((uVar41 != 0) &&
                  (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar41 * lVar5, auVar37._8_8_ = 0,
                  auVar37._0_8_ = uVar42, auVar22._8_8_ = 0,
                  auVar22._0_8_ = (ulong)((uVar48 + uVar54) - SUB164(auVar21 * auVar37,8)) * lVar5,
                  auVar38._8_8_ = 0, auVar38._0_8_ = uVar42, uVar53 <= SUB164(auVar22 * auVar38,8)))
          ;
        }
        iVar47 = *(int *)(this + 0x2c);
      }
      uVar42 = (ulong)uVar40;
      goto LAB_0010e8f7;
    }
    iVar47 = *(int *)(this + 0x2c);
    if (pvVar45 == (void *)0x0) goto LAB_0010e8f7;
    if (iVar47 != 0) goto LAB_0010ee3f;
LAB_0010e91d:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar44 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010ecdb;
    }
    uVar42 = (ulong)(uVar40 + 1);
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar45 = *(void **)(this + 8);
    uVar51 = (ulong)uVar40;
    uVar42 = uVar51 * 4;
    pvVar4 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    uVar46 = uVar51 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar46,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar46)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar51 != uVar42);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar46);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar4 + uVar42 * 4);
        if (uVar40 != 0) {
          uVar53 = 0;
          lVar5 = *(long *)(this + 0x10);
          uVar48 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar46 = CONCAT44(0,uVar48);
          lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)uVar40 * lVar55;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar46;
          lVar49 = SUB168(auVar7 * auVar23,8);
          puVar1 = (uint *)(lVar5 + lVar49 * 4);
          iVar47 = SUB164(auVar7 * auVar23,8);
          uVar54 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar45 + uVar42 * 8);
          while (uVar54 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar54 * lVar55;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar46;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar48 + iVar47) - SUB164(auVar8 * auVar24,8)) * lVar55;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar46;
            local_b8 = SUB164(auVar9 * auVar25,8);
            uVar52 = uVar43;
            if (local_b8 < uVar53) {
              *puVar1 = uVar40;
              puVar44 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar52 = *puVar44;
              *puVar44 = uVar43;
              uVar40 = uVar54;
              uVar53 = local_b8;
            }
            uVar53 = uVar53 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar47 + 1) * lVar55;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar46;
            lVar49 = SUB168(auVar10 * auVar26,8);
            puVar1 = (uint *)(lVar5 + lVar49 * 4);
            iVar47 = SUB164(auVar10 * auVar26,8);
            uVar43 = uVar52;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar42 != uVar41);
      Memory::free_static(pvVar45,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    iVar47 = *(int *)(this + 0x2c);
    uVar42 = CONCAT44(0,uVar40);
    if (iVar47 != 0) {
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar41 = String::hash();
      lVar55 = *(long *)(this + 0x10);
      uVar41 = (*(int *)(param_1 + 8) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 8) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar41;
      uVar41 = (uVar41 << 0xd | uVar41 >> 0x13) * 5 + 0xe6546b64;
      uVar46 = (ulong)uVar41;
      if (uVar41 == 0) {
        uVar46 = 1;
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar46 * lVar5;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar42;
      lVar50 = SUB168(auVar15 * auVar31,8);
      lVar49 = *(long *)(this + 8);
      uVar41 = *(uint *)(lVar55 + lVar50 * 4);
      uVar48 = SUB164(auVar15 * auVar31,8);
      if (uVar41 != 0) {
        uVar54 = 0;
        do {
          if ((uVar41 == (uint)uVar46) &&
             (lVar50 = *(long *)(lVar49 + lVar50 * 8),
             *(int *)(lVar50 + 0x18) == *(int *)(param_1 + 8))) {
            cVar39 = String::operator==((String *)(lVar50 + 0x10),(String *)param_1);
            if (cVar39 != '\0') {
              puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar48 * 8);
              goto LAB_0010ecdb;
            }
            lVar49 = *(long *)(this + 8);
            lVar55 = *(long *)(this + 0x10);
          }
          uVar54 = uVar54 + 1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (ulong)(uVar48 + 1) * lVar5;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar42;
          lVar50 = SUB168(auVar16 * auVar32,8);
          uVar41 = *(uint *)(lVar55 + lVar50 * 4);
          uVar48 = SUB164(auVar16 * auVar32,8);
        } while ((uVar41 != 0) &&
                (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar41 * lVar5, auVar33._8_8_ = 0,
                auVar33._0_8_ = uVar42, auVar18._8_8_ = 0,
                auVar18._0_8_ = (ulong)((uVar48 + uVar40) - SUB164(auVar17 * auVar33,8)) * lVar5,
                auVar34._8_8_ = 0, auVar34._0_8_ = uVar42, uVar54 <= SUB164(auVar18 * auVar34,8)));
      }
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar49 == 0) goto LAB_0010efd8;
LAB_0010ee2f:
      iVar47 = *(int *)(this + 0x2c);
      goto LAB_0010ee37;
    }
LAB_0010e8f7:
    if ((float)uVar42 * __LC30 < (float)(iVar47 + 1)) goto LAB_0010e91d;
  }
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
  uVar3 = *(undefined4 *)(param_1 + 8);
  local_48 = 0;
  local_50 = uVar3;
  puVar44 = (undefined8 *)operator_new(0x28,"");
  puVar44[2] = 0;
  *puVar44 = 0;
  puVar44[1] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar44 + 2),(CowData *)&local_58);
  *(undefined4 *)(puVar44 + 3) = uVar3;
  *(undefined1 *)(puVar44 + 4) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar6 = *(undefined8 **)(this + 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar44;
  }
  else {
    *puVar6 = puVar44;
    puVar44[1] = puVar6;
  }
  *(undefined8 **)(this + 0x20) = puVar44;
  uVar40 = String::hash();
  lVar5 = *(long *)(this + 0x10);
  uVar40 = (*(int *)(param_1 + 8) * 0x16a88000 | (uint)(*(int *)(param_1 + 8) * -0x3361d2af) >> 0x11
           ) * 0x1b873593 ^ uVar40;
  uVar40 = (uVar40 << 0xd | uVar40 >> 0x13) * 5 + 0xe6546b64;
  uVar42 = (ulong)uVar40;
  if (uVar40 == 0) {
    uVar42 = 1;
  }
  uVar54 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar46 = CONCAT44(0,uVar40);
  uVar48 = (uint)uVar42;
  lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar42 * lVar55;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar46;
  lVar50 = SUB168(auVar11 * auVar27,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar5 + lVar50 * 4);
  iVar47 = SUB164(auVar11 * auVar27,8);
  uVar41 = *puVar1;
  puVar6 = puVar44;
  while (uVar41 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar41 * lVar55;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar46;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar40 + iVar47) - SUB164(auVar12 * auVar28,8)) * lVar55;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar46;
    local_b8 = SUB164(auVar13 * auVar29,8);
    puVar56 = puVar6;
    if (local_b8 < uVar54) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar41;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar56 = (undefined8 *)*puVar2;
      *puVar2 = puVar6;
      uVar54 = local_b8;
    }
    uVar48 = (uint)uVar42;
    uVar54 = uVar54 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar47 + 1) * lVar55;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar46;
    lVar50 = SUB168(auVar14 * auVar30,8);
    puVar1 = (uint *)(lVar5 + lVar50 * 4);
    iVar47 = SUB164(auVar14 * auVar30,8);
    puVar6 = puVar56;
    uVar41 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar6;
  *puVar1 = uVar48;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010ecdb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar44 + 4;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f2ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f2ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f3b1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f2ef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f3b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,int>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010f578;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010f578;
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
        uVar4 = _LC134;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010f63a;
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
LAB_0010f578:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f63a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
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
      goto LAB_0010f82e;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010f82e;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar6 = _LC135;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar6 = _LC134;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        uVar6 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar6,iVar5);
          return;
        }
        goto LAB_0010f8f0;
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
LAB_0010f82e:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f8f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorNode, void, long>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,long>::call
          (CallableCustomMethodPointer<EditorNode,void,long> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
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
      goto LAB_0010fab9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010fab9;
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
        uVar4 = _LC134;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        lVar6 = Variant::operator_cast_to_long(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),lVar6);
          return;
        }
        goto LAB_0010fb7b;
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
LAB_0010fab9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fb7b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted> >::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>> *this,
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
          goto LAB_0010fc4e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010fc4e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC136;
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
LAB_0010fd1d:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&RefCounted::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010fd1d;
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
        goto LAB_0010fc4e;
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
  _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010fc4e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>, int, bool,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (Object *)(uVar3 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (Object *)(uVar3 << 8);
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
        if (4 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_0010ffbc;
        }
        if (param_2 != 4) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_0010ffbc;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar12 & 1) != 0) {
          pcVar12 = *(code **)(pcVar12 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar4 = _LC137;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[3]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
        uVar4 = _LC138;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar13 = Variant::operator_cast_to_bool(param_1[2]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC135;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar8 = Variant::operator_cast_to_int(param_1[1]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC136;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_58 = (Object *)0x0;
        pOVar9 = (Object *)Variant::get_validated_object();
        pOVar5 = local_58;
        if (pOVar9 != local_58) {
          if (pOVar9 == (Object *)0x0) {
            if (local_58 != (Object *)0x0) {
              local_58 = (Object *)0x0;
LAB_00110145:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&RefCounted::typeinfo,0);
            if (pOVar5 != pOVar9) {
              local_58 = pOVar9;
              if ((pOVar9 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_58 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_00110145;
            }
          }
        }
        (*pcVar12)((long *)(lVar1 + lVar2),(String *)&local_58,iVar8,bVar13,iVar7);
        if (((local_58 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010ffbc;
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
  local_60 = 0;
  local_58 = (Object *)0x10f0fa;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010ffbc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton> *this,
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
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00110560;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_00110560;
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
        uVar3 = _LC137;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC139;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC135;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_001104e8:
          uVar3 = _LC136;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_001104e8;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0011065b;
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
LAB_00110560:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011065b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, String const&, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_58 = (char *)(uVar3 << 8);
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
            uVar6 = _LC139;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar6;
            }
            iVar5 = Variant::operator_cast_to_int(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar6 = _LC140;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar6;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar6 = _LC134;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar6;
            }
            uVar6 = Variant::operator_cast_to_ObjectID(*param_1);
            (*pcVar9)((long *)(lVar1 + lVar2),uVar6,(Variant *)&local_58,iVar5);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
        goto LAB_00110725;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00110725:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, String const&, int, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
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
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar10 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
            uVar4 = _LC139;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC135;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC141;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar10)((long *)(lVar1 + lVar2),(Variant *)&local_58,iVar7,iVar6);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
        goto LAB_00110a04;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00110a04:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerNode, void, bool, bool, String const&, bool,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>::call
          (CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
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
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 6) {
          if (param_2 == 5) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar11 & 1) != 0) {
              pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[4],2);
            uVar4 = _LC142;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar8 = Variant::operator_cast_to_int(param_1[4]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar4 = _LC143;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar12 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC144;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
            uVar4 = _LC145;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar6 = Variant::operator_cast_to_bool(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
            uVar4 = _LC146;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar7 = Variant::operator_cast_to_bool(*param_1);
            (*pcVar11)((long *)(lVar1 + lVar2),bVar7,bVar6,(Variant *)&local_58,bVar12,iVar8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 5;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 5;
        }
        goto LAB_00110cec;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC133,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00110cec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00110fef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00110fef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001110a3;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
  if (cVar6 == '\0') {
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001110a3;
    }
    cVar6 = String::operator==(param_1,"Node");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_00111203;
                LOCK();
                lVar8 = *plVar1;
                bVar9 = lVar5 == lVar8;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar8 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar8 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_00111203:
        cVar6 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_001110a3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001112ac;
    }
  }
LAB_001110a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001112ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011133f;
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
LAB_0011133f:
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
    if (cVar6 != '\0') goto LAB_001113f3;
  }
  cVar6 = String::operator==(param_1,"Container");
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
      if (cVar6 != '\0') goto LAB_001113f3;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_001114fe;
    }
  }
LAB_001113f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001114fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerNode::is_class(String const&) const */

undefined8 __thiscall EditorDebuggerNode::is_class(EditorDebuggerNode *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011158f;
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
LAB_0011158f:
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
    if (cVar6 != '\0') goto LAB_00111643;
  }
  cVar6 = String::operator==(param_1,"EditorDebuggerNode");
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
      if (cVar6 != '\0') goto LAB_00111643;
    }
    cVar6 = String::operator==(param_1,"MarginContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011174e;
    }
  }
LAB_00111643:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011174e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::_initialize_classv() */

void StyleBoxEmpty::_initialize_classv(void)

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
    if (StyleBox::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00120030 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
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
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "StyleBox";
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
      if ((code *)PTR__bind_methods_00120028 != Resource::_bind_methods) {
        StyleBox::_bind_methods();
      }
      StyleBox::initialize_class()::initialized = '\x01';
    }
    local_58 = "StyleBox";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StyleBoxEmpty";
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
            if (lVar3 == 0) goto LAB_00111c1f;
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
LAB_00111c1f:
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
    if (cVar6 != '\0') goto LAB_00111cd3;
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
      if (cVar6 != '\0') goto LAB_00111cd3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00111cd3:
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
            if (lVar4 == 0) goto LAB_00111e4f;
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
LAB_00111e4f:
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
    if (cVar5 != '\0') goto LAB_00111f03;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00111f03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::is_class(String const&) const */

undefined8 __thiscall StyleBoxEmpty::is_class(StyleBoxEmpty *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00111fcf;
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
LAB_00111fcf:
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
    if (cVar6 != '\0') goto LAB_00112083;
  }
  cVar6 = String::operator==(param_1,"StyleBoxEmpty");
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
      if (cVar6 != '\0') goto LAB_00112083;
    }
    cVar6 = String::operator==(param_1,"StyleBox");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_0011218e;
    }
  }
LAB_00112083:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011218e:
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
      goto LAB_001122fc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001122fc:
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
      goto LAB_00112561;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112561:
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



/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBox::_get_property_listv(StyleBox *this,List *param_1,bool param_2)

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
  local_78 = "StyleBox";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBox";
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
      goto LAB_00112811;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112811:
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
  StringName::StringName((StringName *)&local_78,"StyleBox",false);
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



/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this,List *param_1,bool param_2)

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
    StyleBox::_get_property_listv((StyleBox *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBoxEmpty";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBoxEmpty";
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
      goto LAB_00112ac1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112ac1:
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
  StringName::StringName((StringName *)&local_78,"StyleBoxEmpty",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StyleBox::_get_property_listv((StyleBox *)this,param_1,true);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_a8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
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
    CowData<char32_t>::_ref(local_a8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00112f1f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112f1f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00120038 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_00113431;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113431:
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
  if ((code *)PTR__get_property_list_00120040 != CanvasItem::_get_property_list) {
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
      goto LAB_00113701;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113701:
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



/* MarginContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MarginContainer::_get_property_listv(MarginContainer *this,List *param_1,bool param_2)

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
  local_78 = "MarginContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MarginContainer";
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
      goto LAB_001139b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001139b1:
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
  StringName::StringName((StringName *)&local_78,"MarginContainer",false);
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



/* EditorDebuggerNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorDebuggerNode::_get_property_listv(EditorDebuggerNode *this,List *param_1,bool param_2)

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
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorDebuggerNode";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDebuggerNode";
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
      goto LAB_00113c61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113c61:
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
  StringName::StringName((StringName *)&local_78,"EditorDebuggerNode",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarginContainer::_get_property_listv((MarginContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_realloc(long) */

undefined8 __thiscall CowData<char32_t>::_realloc(CowData<char32_t> *this,long param_1)

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



/* Ref<StyleBox>::unref() */

void __thiscall Ref<StyleBox>::unref(Ref<StyleBox> *this)

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



/* Ref<Theme>::unref() */

void __thiscall Ref<Theme>::unref(Ref<Theme> *this)

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



/* WARNING: Removing unreachable block (ram,0x00113fd0) */
/* EditorDebuggerNode::_notificationv(int, bool) */

void __thiscall
EditorDebuggerNode::_notificationv(EditorDebuggerNode *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00120048 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00120048 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<EditorDebuggerNode, NodePath const&, String const&, String
   const&>(void (EditorDebuggerNode::*)(NodePath const&, String const&, String const&)) */

MethodBind *
create_method_bind<EditorDebuggerNode,NodePath_const&,String_const&,String_const&>
          (_func_void_NodePath_ptr_String_ptr_String_ptr *param_1)

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
  *(_func_void_NodePath_ptr_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a670;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorDebuggerNode";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<EditorDebuggerNode, NodePath const&>(void
   (EditorDebuggerNode::*)(NodePath const&)) */

MethodBind *
create_method_bind<EditorDebuggerNode,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(_func_void_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a6d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorDebuggerNode";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<EditorDebuggerNode, NodePath const&, ObjectID>(void
   (EditorDebuggerNode::*)(NodePath const&, ObjectID)) */

MethodBind *
create_method_bind<EditorDebuggerNode,NodePath_const&,ObjectID>
          (_func_void_NodePath_ptr_ObjectID *param_1)

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
  *(_func_void_NodePath_ptr_ObjectID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a730;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorDebuggerNode";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<EditorDebuggerNode, ObjectID, NodePath const&, int>(void
   (EditorDebuggerNode::*)(ObjectID, NodePath const&, int)) */

MethodBind *
create_method_bind<EditorDebuggerNode,ObjectID,NodePath_const&,int>
          (_func_void_ObjectID_NodePath_ptr_int *param_1)

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
  *(_func_void_ObjectID_NodePath_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a790;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorDebuggerNode";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<EditorDebuggerNode, NodePath const&, String const&>(void
   (EditorDebuggerNode::*)(NodePath const&, String const&)) */

MethodBind *
create_method_bind<EditorDebuggerNode,NodePath_const&,String_const&>
          (_func_void_NodePath_ptr_String_ptr *param_1)

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
  *(_func_void_NodePath_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a7f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorDebuggerNode";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<EditorDebuggerNode, NodePath const&, NodePath const&, String
   const&, int>(void (EditorDebuggerNode::*)(NodePath const&, NodePath const&, String const&, int))
    */

MethodBind *
create_method_bind<EditorDebuggerNode,NodePath_const&,NodePath_const&,String_const&,int>
          (_func_void_NodePath_ptr_NodePath_ptr_String_ptr_int *param_1)

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
  *(_func_void_NodePath_ptr_NodePath_ptr_String_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011a850;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "EditorDebuggerNode";
  local_30 = 0x12;
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



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
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



/* EditorDebuggerNode::_initialize_classv() */

void EditorDebuggerNode::_initialize_classv(void)

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
    if (MarginContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00120030 != Node::_bind_methods) {
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
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "MarginContainer";
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
      if ((code *)PTR__bind_methods_00120058 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MarginContainer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorDebuggerNode";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00114fa8) */
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



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011542f;
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
                    /* WARNING: Could not recover jumptable at 0x001152db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(long *)(param_3 + 0x10) + 8,
               *(undefined4 *)(*(long *)(param_3 + 0x18) + 8));
    return;
  }
LAB_0011542f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00115621;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x001154ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10),
               **(undefined4 **)((long)param_3 + 0x18));
    return;
  }
LAB_00115621:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<NodePath_const&,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001157ef;
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
                    /* WARNING: Could not recover jumptable at 0x0011569a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001157ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001159d9;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00115860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_001159d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID, NodePath const&, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<ObjectID,NodePath_const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00115baf;
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
                    /* WARNING: Could not recover jumptable at 0x00115a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_00115baf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID, NodePath const&, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<ObjectID,NodePath_const&,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00115da1;
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
                    /* WARNING: Load size is inaccurate */
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10));
    return;
  }
LAB_00115da1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, ObjectID>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<NodePath_const&,ObjectID>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00115f91;
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
                    /* WARNING: Could not recover jumptable at 0x00115e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined8 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00115f91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, ObjectID>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&,ObjectID>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116179;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00116003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined8 **)((long)param_3 + 8));
    return;
  }
LAB_00116179:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<NodePath_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116351;
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
                    /* WARNING: Could not recover jumptable at 0x001161dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00116351:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116531;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001163b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00116531:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<NodePath_const&,String_const&,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00116707;
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
                    /* WARNING: Could not recover jumptable at 0x001165b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(long *)(param_3 + 0x10) + 8);
    return;
  }
LAB_00116707:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&, String const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<NodePath_const&,String_const&,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001168f1;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00116774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_001168f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<NodePath_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC133,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116ab0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116b00;
LAB_00116af0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116b00:
        uVar6 = 4;
        goto LAB_00116aa5;
      }
      if (in_R8D == 1) goto LAB_00116af0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x16);
    uVar4 = _LC193;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_NodePath((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    NodePath::~NodePath((NodePath *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00116aa5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00116ab0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<NodePath_const&,String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58 [3];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
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
      _err_print_error(&_LC133,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00116e82;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar10 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar10 = (int)lVar13;
    }
    if ((int)(3 - in_R8D) <= iVar10) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar9 = iVar10 + -3 + (int)lVar7;
          if (lVar13 <= (int)uVar9) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar9,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar9 * 0x18;
        }
        local_58[lVar7] = (undefined4 *)pVVar12;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*local_58[2],4);
      uVar4 = _LC144;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_78);
      cVar5 = Variant::can_convert_strict(*local_58[1],4);
      uVar4 = _LC140;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_70);
      cVar5 = Variant::can_convert_strict(*local_58[0],0x16);
      uVar4 = _LC193;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_NodePath((Variant *)&local_68);
      (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,
                         (Variant *)&local_70,(Variant *)&local_78);
      NodePath::~NodePath((NodePath *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_00116e82;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00116e82:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC133,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001172a0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar6) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar6 + -4 + (int)lVar8;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_68[lVar8] = pVVar12;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar13 & 1) != 0) {
        pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC137;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],4);
      uVar4 = _LC144;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0x16);
      uVar4 = _LC195;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_NodePath((Variant *)&local_80);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x16);
      uVar4 = _LC193;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_NodePath((Variant *)&local_78);
      (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_78,
                         (Variant *)&local_80,(Variant *)&local_88,iVar6);
      NodePath::~NodePath((NodePath *)&local_78);
      NodePath::~NodePath((NodePath *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      goto LAB_001172a0;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_001172a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID, NodePath const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<ObjectID,NodePath_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC133,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00117632;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar5 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar13;
    }
    if ((int)(3 - in_R8D) <= iVar6) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar6 + -3 + (int)lVar7;
          if (lVar13 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_58[lVar7] = pVVar11;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_58[2],2);
      uVar8 = _LC139;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      iVar6 = Variant::operator_cast_to_int(local_58[2]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_58[1],0x16);
      uVar8 = _LC195;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      Variant::operator_cast_to_NodePath((Variant *)&local_68);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar8 = _LC134;
      if (cVar4 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar8;
      }
      uVar8 = Variant::operator_cast_to_ObjectID(local_58[0]);
      (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),uVar8,(Variant *)&local_68,iVar6)
      ;
      NodePath::~NodePath((NodePath *)&local_68);
      goto LAB_00117632;
    }
    uVar5 = 4;
  }
  *in_R9 = uVar5;
  in_R9[2] = 3;
LAB_00117632:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, NodePath const&, String
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(NodePath const&, String const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,NodePath_const&,String_const&>
               (__UnexistingClass *param_1,_func_void_NodePath_ptr_String_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant local_50 [8];
  Variant local_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001179b8;
      puVar10 = (undefined4 *)*plVar8;
LAB_00117a0d:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_001179b8:
        uVar7 = 4;
        goto LAB_001179bd;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00117a28;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_00117a0d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00117a28:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_NodePath_ptr_String_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,4);
    uVar4 = _LC140;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    cVar5 = Variant::can_convert_strict(*puVar10,0x16);
    uVar4 = _LC193;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_NodePath(local_48);
    (*param_2)((NodePath *)(param_1 + (long)param_3),(String *)local_48);
    NodePath::~NodePath((NodePath *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar7 = 3;
LAB_001179bd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<NodePath_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC133,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00117ac6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,NodePath_const&,String_const&>
            (p_Var2,(_func_void_NodePath_ptr_String_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00117ac6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, NodePath const&, ObjectID>(__UnexistingClass*,
   void (__UnexistingClass::*)(NodePath const&, ObjectID), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,NodePath_const&,ObjectID>
               (__UnexistingClass *param_1,_func_void_NodePath_ptr_ObjectID *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_38 [8];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00117dd8;
      puVar10 = (undefined4 *)*plVar8;
LAB_00117e2d:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00117dd8:
        uVar7 = 4;
        goto LAB_00117ddd;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00117e48;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_00117e2d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00117e48:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_NodePath_ptr_ObjectID **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC135;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_ObjectID(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x16);
    uVar4 = _LC193;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_NodePath(aVStack_38);
    (*param_2)((NodePath *)(param_1 + (long)param_3),(char)aVStack_38);
    NodePath::~NodePath((NodePath *)aVStack_38);
  }
  else {
    uVar7 = 3;
LAB_00117ddd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, ObjectID>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<NodePath_const&,ObjectID>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC133,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00117ee6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,NodePath_const&,ObjectID>
            (p_Var2,(_func_void_NodePath_ptr_ObjectID *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00117ee6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<NodePath const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<NodePath_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC11;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x16,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC11;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&, String const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<NodePath_const&,String_const&,String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<NodePath_const&,String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC11;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<ObjectID>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<ObjectID>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC11;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0x1d,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, ObjectID>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<NodePath_const&,ObjectID>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<ObjectID>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID, NodePath const&, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<ObjectID,NodePath_const&,int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<ObjectID>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_00118e09;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00118e09:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* EditorDebuggerNode::singleton */

void EditorDebuggerNode::_GLOBAL__sub_I_singleton(void)

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
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated == '\0') {
    EditorExport::_export_presets_runnable_updated = '\x01';
    EditorExport::_export_presets_runnable_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,
                 &__dso_handle);
  }
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
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
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
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
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

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
/* EditorDebuggerNode::~EditorDebuggerNode() */

void __thiscall EditorDebuggerNode::~EditorDebuggerNode(EditorDebuggerNode *this)

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
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&, NodePath const&, String const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,NodePath_const&,String_const&,int>::~MethodBindT
          (MethodBindT<NodePath_const&,NodePath_const&,String_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,String_const&>::~MethodBindT
          (MethodBindT<NodePath_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<ObjectID, NodePath const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<ObjectID,NodePath_const&,int>::~MethodBindT
          (MethodBindT<ObjectID,NodePath_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&, ObjectID>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,ObjectID>::~MethodBindT(MethodBindT<NodePath_const&,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&, String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,String_const&,String_const&>::~MethodBindT
          (MethodBindT<NodePath_const&,String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, ObjectID, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,ObjectID,String_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, String const&, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,String_const&,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, bool, bool, String const&, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,bool,bool,String_const&,bool,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerNode, void, Ref<RefCounted>, int, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerNode,void,Ref<RefCounted>,int,bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorNode, void, long>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,long>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNode,void,long> *this)

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


