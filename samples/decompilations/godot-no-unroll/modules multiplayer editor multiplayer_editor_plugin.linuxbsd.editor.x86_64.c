
/* MultiplayerEditorDebugger::has_capture(String const&) const */

void __thiscall
MultiplayerEditorDebugger::has_capture(MultiplayerEditorDebugger *this,String *param_1)

{
  String::operator==(param_1,"multiplayer");
  return;
}



/* MultiplayerEditorPlugin::_open_request(String const&) */

void __thiscall
MultiplayerEditorPlugin::_open_request(MultiplayerEditorPlugin *this,String *param_1)

{
  EditorInterface::open_scene_from_path(EditorInterface::singleton,SUB81(param_1,0));
  return;
}



/* MultiplayerEditorPlugin::edit(Object*) */

void __thiscall MultiplayerEditorPlugin::edit(MultiplayerEditorPlugin *this,Object *param_1)

{
  MultiplayerSynchronizer *pMVar1;
  
  pMVar1 = *(MultiplayerSynchronizer **)(this + 0x668);
  if (param_1 != (Object *)0x0) {
    __dynamic_cast(param_1,&Object::typeinfo,&MultiplayerSynchronizer::typeinfo,0);
  }
  ReplicationEditor::edit(pMVar1);
  return;
}



/* MultiplayerEditorPlugin::_node_removed(Node*) */

void __thiscall MultiplayerEditorPlugin::_node_removed(MultiplayerEditorPlugin *this,Node *param_1)

{
  char cVar1;
  
  if (param_1 == (Node *)0x0) {
    return;
  }
  if (param_1 != *(Node **)(*(MultiplayerSynchronizer **)(this + 0x668) + 0xa10)) {
    return;
  }
  ReplicationEditor::edit(*(MultiplayerSynchronizer **)(this + 0x668));
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 != '\0') {
    EditorBottomPanel::hide_bottom_panel();
  }
  CanvasItem::hide();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(*(long *)(this + 0x668) + 0xa70),0));
  return;
}



/* MultiplayerEditorPlugin::make_visible(bool) */

void __thiscall MultiplayerEditorPlugin::make_visible(MultiplayerEditorPlugin *this,bool param_1)

{
  char cVar1;
  
  if (param_1) {
    CanvasItem::show();
    EditorBottomPanel::make_item_visible
              (*(Control **)(EditorNode::singleton + 0xa40),SUB81(*(undefined8 *)(this + 0x668),0),
               true);
    return;
  }
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 != '\0') {
    EditorBottomPanel::hide_bottom_panel();
  }
  CanvasItem::hide();
  return;
}



/* MultiplayerEditorPlugin::_pinned() */

void __thiscall MultiplayerEditorPlugin::_pinned(MultiplayerEditorPlugin *this)

{
  char cVar1;
  
  cVar1 = BaseButton::is_pressed();
  if ((cVar1 == '\0') && (*(long *)(*(long *)(this + 0x668) + 0xa10) == 0)) {
    cVar1 = CanvasItem::is_visible_in_tree();
    if (cVar1 != '\0') {
      EditorBottomPanel::hide_bottom_panel();
    }
    CanvasItem::hide();
    return;
  }
  return;
}



/* MultiplayerEditorPlugin::_notification(int) */

void __thiscall MultiplayerEditorPlugin::_notification(MultiplayerEditorPlugin *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  long local_50;
  Object *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar2 = *(code **)(*plVar1 + 0x108);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC9;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_00107f18;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar3;
    *(code **)(this_00 + 0x38) = _node_removed;
    *(MultiplayerEditorPlugin **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "MultiplayerEditorPlugin::_node_removed";
    Callable::Callable((Callable *)local_48,this_00);
    StringName::StringName((StringName *)&local_50,"node_removed",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,(Callable *)local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
    local_48[0] = (Object *)0x0;
    if (((*(long *)(this + 0x670) != 0) &&
        (pOVar5 = (Object *)
                  __dynamic_cast(*(long *)(this + 0x670),&Object::typeinfo,
                                 &EditorDebuggerPlugin::typeinfo,0), pOVar5 != (Object *)0x0)) &&
       (local_48[0] = pOVar5, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_48[0] = (Object *)0x0;
    }
    EditorPlugin::add_debugger_plugin((Ref *)this);
    if (local_48[0] == (Object *)0x0) goto LAB_001002b0;
    cVar4 = RefCounted::unreference();
    pOVar5 = local_48[0];
  }
  else {
    if (param_1 != 0xb) goto LAB_001002b0;
    local_48[0] = (Object *)0x0;
    if (((*(long *)(this + 0x670) != 0) &&
        (pOVar5 = (Object *)
                  __dynamic_cast(*(long *)(this + 0x670),&Object::typeinfo,
                                 &EditorDebuggerPlugin::typeinfo,0), pOVar5 != (Object *)0x0)) &&
       (local_48[0] = pOVar5, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_48[0] = (Object *)0x0;
    }
    EditorPlugin::remove_debugger_plugin((Ref *)this);
    if (local_48[0] == (Object *)0x0) goto LAB_001002b0;
    cVar4 = RefCounted::unreference();
    pOVar5 = local_48[0];
  }
  local_48[0] = pOVar5;
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_001002b0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerEditorPlugin::handles(Object*) const */

undefined4 __thiscall
MultiplayerEditorPlugin::handles(MultiplayerEditorPlugin *this,Object *param_1)

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
  local_30 = 0x17;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "MultiplayerSynchronizer";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerEditorDebugger::_profiler_activate(bool, int) */

void MultiplayerEditorDebugger::_profiler_activate(bool param_1,int param_2)

{
  String *pSVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long in_FS_OFFSET;
  String *local_60;
  undefined8 local_58;
  Array local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorDebuggerPlugin::get_session((int)&local_60);
  pSVar1 = local_60;
  if (local_60 == (String *)0x0) {
    _err_print_error("_profiler_activate","modules/multiplayer/editor/multiplayer_editor_plugin.cpp"
                     ,0x60,"Condition \"session.is_null()\" is true.",0,0);
  }
  else {
    uVar4 = param_2 & 0xff;
    Array::Array(local_50);
    local_48 = "multiplayer:bandwidth";
    local_58 = 0;
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_58);
    bVar3 = SUB81((StrRange *)&local_58,0);
    EditorDebuggerSession::toggle_profiler(pSVar1,bVar3,(Array *)(ulong)uVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    Array::~Array(local_50);
    pSVar1 = local_60;
    Array::Array(local_50);
    local_48 = "multiplayer:rpc";
    local_58 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_58);
    EditorDebuggerSession::toggle_profiler(pSVar1,bVar3,(Array *)(ulong)uVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    Array::~Array(local_50);
    pSVar1 = local_60;
    Array::Array(local_50);
    local_48 = "multiplayer:replication";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    EditorDebuggerSession::toggle_profiler(pSVar1,bVar3,(Array *)(ulong)uVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    Array::~Array(local_50);
  }
  if (((local_60 != (String *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler((Object *)local_60), cVar2 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* MultiplayerEditorDebugger::_open_request(String const&) */

void __thiscall
MultiplayerEditorDebugger::_open_request(MultiplayerEditorDebugger *this,String *param_1)

{
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)param_1);
  StringName::StringName((StringName *)&local_88,"open_request",false);
  Variant::Variant((Variant *)local_68,(String *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))(this,&local_88,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
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



/* MultiplayerEditorDebugger::setup_session(int) */

void __thiscall
MultiplayerEditorDebugger::setup_session(MultiplayerEditorDebugger *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  Control *pCVar3;
  char cVar4;
  EditorNetworkProfiler *this_00;
  CallableCustom *pCVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  int local_bc;
  Control *local_b8;
  long local_b0;
  long local_a8 [2];
  Callable local_98 [16];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc = param_1;
  EditorDebuggerPlugin::get_session((int)&local_b8);
  if (local_b8 == (Control *)0x0) {
    _err_print_error("setup_session","modules/multiplayer/editor/multiplayer_editor_plugin.cpp",0x68
                     ,"Condition \"session.is_null()\" is true.",0,0);
  }
  else {
    this_00 = (EditorNetworkProfiler *)operator_new(0xb60,"");
    EditorNetworkProfiler::EditorNetworkProfiler(this_00);
    postinitialize_handler((Object *)this_00);
    pcVar1 = *(code **)(*(long *)this_00 + 0x108);
    pCVar5 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar5);
    *(undefined **)(pCVar5 + 0x20) = &_LC9;
    *(MultiplayerEditorDebugger **)(pCVar5 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar5 = &PTR_hash_00107c48;
    *(undefined8 *)(pCVar5 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar5 + 0x10) = 0;
    *(undefined8 *)(pCVar5 + 0x30) = uVar2;
    *(code **)(pCVar5 + 0x38) = _profiler_activate;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
    *(char **)(pCVar5 + 0x20) = "MultiplayerEditorDebugger::_profiler_activate";
    Callable::Callable((Callable *)local_a8,pCVar5);
    Variant::Variant((Variant *)local_78,param_1);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88 = (Variant *)local_78;
    Callable::bindp((Variant **)local_98,(int)(Callable *)local_a8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_b0,"enable_profiling",false);
    (*pcVar1)(this_00,(StringName *)&local_b0,local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    Callable::~Callable((Callable *)local_a8);
    pcVar1 = *(code **)(*(long *)this_00 + 0x108);
    pCVar5 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar5);
    *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar5 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined ***)pCVar5 = &PTR_hash_00107cd8;
    *(undefined8 *)(pCVar5 + 0x30) = uVar2;
    *(code **)(pCVar5 + 0x38) = _open_request;
    *(undefined8 *)(pCVar5 + 0x10) = 0;
    *(undefined **)(pCVar5 + 0x20) = &_LC9;
    *(MultiplayerEditorDebugger **)(pCVar5 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
    *(char **)(pCVar5 + 0x20) = "MultiplayerEditorDebugger::_open_request";
    Callable::Callable(local_98,pCVar5);
    StringName::StringName((StringName *)local_a8,"open_request",false);
    (*pcVar1)(this_00,(Callable *)local_a8,local_98,0);
    if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    local_a8[0] = 0;
    String::parse_latin1((String *)local_a8,"");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"Network Profiler");
    TTR((String *)local_98,(String *)&local_b0);
    Node::set_name((String *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    pCVar3 = local_b8;
    pcVar1 = *(code **)(*(long *)local_b8 + 0x108);
    create_custom_callable_function_pointer<EditorNetworkProfiler>
              ((EditorNetworkProfiler *)local_98,(char *)this_00,
               (_func_void *)"&EditorNetworkProfiler::started");
    StringName::StringName((StringName *)local_a8,"started",false);
    (*pcVar1)(pCVar3,(Callable *)local_a8,local_98,0);
    if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    pCVar3 = local_b8;
    pcVar1 = *(code **)(*(long *)local_b8 + 0x108);
    create_custom_callable_function_pointer<EditorNetworkProfiler>
              ((EditorNetworkProfiler *)local_98,(char *)this_00,
               (_func_void *)"&EditorNetworkProfiler::stopped");
    StringName::StringName((StringName *)local_a8,"stopped",false);
    (*pcVar1)(pCVar3,(Callable *)local_a8,local_98,0);
    if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    EditorDebuggerSession::add_session_tab(local_b8);
    puVar6 = (undefined8 *)
             HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
             ::operator[]((HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
                           *)(this + 0x218),&local_bc);
    *puVar6 = this_00;
  }
  if (((local_b8 != (Control *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_b8), cVar4 != '\0')) {
    (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
    Memory::free_static(local_b8,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerEditorPlugin::MultiplayerEditorPlugin() */

void __thiscall MultiplayerEditorPlugin::MultiplayerEditorPlugin(MultiplayerEditorPlugin *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  ReplicationEditor *this_00;
  undefined8 uVar6;
  CallableCustom *pCVar7;
  EditorDebuggerPlugin *this_01;
  Object *pOVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  String local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  Object *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (MultiplayerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (MultiplayerEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001079a0;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  this_00 = (ReplicationEditor *)operator_new(0xa78,"");
  ReplicationEditor::ReplicationEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar4 = EditorNode::singleton;
  *(ReplicationEditor **)(this + 0x668) = this_00;
  uVar6 = *(undefined8 *)(lVar4 + 0xa40);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Toggle Replication Bottom Panel");
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"bottom_panels/toggle_replication_bottom_panel");
  ED_SHORTCUT_AND_COMMAND(&local_70,(String *)&local_68,(String *)&local_60,0);
  uVar1 = *(undefined8 *)(this + 0x668);
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Replication");
  TTR(local_88,(String *)&local_80);
  uVar6 = EditorBottomPanel::add_item(uVar6,local_88,uVar1,&local_70,0);
  *(undefined8 *)(this + 0x660) = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_70), cVar5 != '\0')) {
    (**(code **)(*(long *)local_70 + 0x140))(local_70);
    Memory::free_static(local_70,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CanvasItem::hide();
  plVar2 = *(long **)(*(long *)(this + 0x668) + 0xa70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC9;
  *(MultiplayerEditorPlugin **)(pCVar7 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_00107df8;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(undefined8 *)(pCVar7 + 0x30) = uVar6;
  *(code **)(pCVar7 + 0x38) = _pinned;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "MultiplayerEditorPlugin::_pinned";
  Callable::Callable((Callable *)local_58,pCVar7);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  this_01 = (EditorDebuggerPlugin *)operator_new(0x248,"");
  EditorDebuggerPlugin::EditorDebuggerPlugin(this_01);
  *(undefined ***)this_01 = &PTR__initialize_classv_00107810;
  *(undefined8 *)(this_01 + 0x240) = 2;
  *(undefined1 (*) [16])(this_01 + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0x230) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_01);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar9 = *(Object **)(this + 0x670);
    if (pOVar9 == (Object *)0x0) goto LAB_00101580;
    *(undefined8 *)(this + 0x670) = 0;
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      this_01 = (EditorDebuggerPlugin *)0x0;
      cVar5 = predelete_handler(pOVar9);
      if (cVar5 != '\0') {
LAB_00101763:
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        pOVar8 = (Object *)this_01;
        if (this_01 != (EditorDebuggerPlugin *)0x0) goto LAB_001016bd;
      }
    }
  }
  else {
    pOVar9 = *(Object **)(this + 0x670);
    pOVar8 = pOVar9;
    if (this_01 != (EditorDebuggerPlugin *)pOVar9) {
      *(EditorDebuggerPlugin **)(this + 0x670) = this_01;
      cVar5 = RefCounted::reference();
      pOVar8 = (Object *)this_01;
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x670) = 0;
        if (pOVar9 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x0010170f:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0'))
          goto LAB_00101763;
        }
      }
      else if (pOVar9 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x0010170f;
      }
    }
LAB_001016bd:
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
      pOVar9 = *(Object **)(this + 0x670);
      goto LAB_00101580;
    }
  }
  pOVar9 = *(Object **)(this + 0x670);
LAB_00101580:
  pcVar3 = *(code **)(*(long *)pOVar9 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC9;
  *(MultiplayerEditorPlugin **)(pCVar7 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_00107e88;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(undefined8 *)(pCVar7 + 0x30) = uVar6;
  *(code **)(pCVar7 + 0x38) = _open_request;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "MultiplayerEditorPlugin::_open_request";
  Callable::Callable((Callable *)local_58,pCVar7);
  StringName::StringName((StringName *)&local_60,"open_request",false);
  (*pcVar3)(pOVar9,(String *)&local_60,(String *)local_58,0);
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



/* MultiplayerEditorDebugger::capture(String const&, Array const&, int) */

undefined8 __thiscall
MultiplayerEditorDebugger::capture
          (MultiplayerEditorDebugger *this,String *param_1,Array *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  NodeInfo *pNVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  String *pSVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  Variant *pVVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  CowData<char32_t> *this_00;
  void *pvVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  long in_FS_OFFSET;
  int local_9c [3];
  Array local_90 [8];
  String *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c[0] = param_3;
  if ((*(long *)(this + 0x220) != 0) && (*(int *)(this + 0x244) != 0)) {
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x240) * 8);
    uVar17 = ((uint)param_3 >> 0x10 ^ param_3) * -0x7a143595;
    uVar17 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
    uVar30 = uVar17 ^ uVar17 >> 0x10;
    if (uVar17 == uVar17 >> 0x10) {
      uVar30 = 1;
      uVar24 = uVar2;
    }
    else {
      uVar24 = uVar30 * uVar2;
    }
    uVar28 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar28;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar24;
    lVar25 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(*(long *)(this + 0x228) + lVar25 * 4);
    iVar20 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar29 = 0;
LAB_001018e1:
      if ((uVar30 != uVar17) ||
         (param_3 != *(int *)(*(long *)(*(long *)(this + 0x220) + lVar25 * 8) + 0x10)))
      goto LAB_00101898;
      puVar21 = (undefined8 *)
                HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
                ::operator[]((HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
                              *)(this + 0x218),local_9c);
      pNVar3 = (NodeInfo *)*puVar21;
      cVar16 = String::operator==(param_1,"multiplayer:rpc");
      if (cVar16 != '\0') {
        lVar25 = 0;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_70._8_8_;
        local_70 = auVar13 << 0x40;
        MultiplayerDebugger::RPCFrame::deserialize((Array *)&local_78);
        if (local_70._0_8_ != 0) goto LAB_00101ac8;
        goto LAB_00101a72;
      }
      cVar16 = String::operator==(param_1,"multiplayer:syncs");
      if (cVar16 != '\0') {
        local_50 = 2;
        local_70 = (undefined1  [16])0x0;
        local_60 = (undefined1  [16])0x0;
        MultiplayerDebugger::ReplicationFrame::deserialize((Array *)&local_78);
        for (puVar21 = (undefined8 *)local_60._0_8_; puVar21 != (undefined8 *)0x0;
            puVar21 = (undefined8 *)*puVar21) {
          EditorNetworkProfiler::add_sync_frame_data((SyncInfo *)pNVar3);
        }
        EditorNetworkProfiler::pop_missing_node_data();
        iVar20 = Array::size();
        if (iVar20 != 0) {
          EditorDebuggerPlugin::get_session((int)&local_88);
          pSVar15 = local_88;
          local_80 = 0;
          String::parse_latin1((String *)&local_80,"multiplayer:cache");
          EditorDebuggerSession::send_message(pSVar15,(Array *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          if (((local_88 != (String *)0x0) && (cVar16 = RefCounted::unreference(), cVar16 != '\0'))
             && (cVar16 = predelete_handler((Object *)local_88), cVar16 != '\0')) {
            (**(code **)(*(long *)local_88 + 0x140))(local_88);
            Memory::free_static(local_88,false);
          }
        }
        Array::~Array(local_90);
        if ((void *)local_70._0_8_ != (void *)0x0) {
          pvVar27 = (void *)local_70._0_8_;
          if (local_50._4_4_ != 0) {
            uVar17 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
            if (uVar17 == 0) {
              local_50 = local_50 & 0xffffffff;
              local_60 = (undefined1  [16])0x0;
            }
            else {
              lVar25 = 0;
              do {
                if (*(int *)(local_70._8_8_ + lVar25) != 0) {
                  *(int *)(local_70._8_8_ + lVar25) = 0;
                  Memory::free_static(*(void **)((long)pvVar27 + lVar25 * 2),false);
                  *(undefined8 *)(local_70._0_8_ + lVar25 * 2) = 0;
                  pvVar27 = (void *)local_70._0_8_;
                }
                lVar25 = lVar25 + 4;
              } while (lVar25 != (ulong)uVar17 * 4);
              local_50 = local_50 & 0xffffffff;
              local_60 = (undefined1  [16])0x0;
              if (pvVar27 == (void *)0x0) goto LAB_00101a72;
            }
          }
          Memory::free_static(pvVar27,false);
          Memory::free_static((void *)local_70._8_8_,false);
        }
        goto LAB_00101a72;
      }
      cVar16 = String::operator==(param_1,"multiplayer:cache");
      iVar20 = (int)param_2;
      if (cVar16 != '\0') {
        iVar18 = Array::size();
        iVar18 = iVar18 % 3;
        if (iVar18 == 0) goto LAB_00101a62;
        _err_print_error("capture","modules/multiplayer/editor/multiplayer_editor_plugin.cpp",0x4d,
                         "Condition \"p_data.size() % 3\" is true. Returning: false",0,0);
        uVar23 = 0;
        goto LAB_00101a77;
      }
      cVar16 = String::operator==(param_1,"multiplayer:bandwidth");
      if (cVar16 == '\0') {
        uVar23 = 0;
        goto LAB_00101a77;
      }
      iVar18 = Array::size();
      if (1 < iVar18) {
        pVVar22 = (Variant *)Array::operator[](iVar20);
        Variant::operator_cast_to_int(pVVar22);
        pVVar22 = (Variant *)Array::operator[](iVar20);
        iVar20 = Variant::operator_cast_to_int(pVVar22);
        EditorNetworkProfiler::set_bandwidth((int)pNVar3,iVar20);
        goto LAB_00101a72;
      }
      _err_print_error("capture","modules/multiplayer/editor/multiplayer_editor_plugin.cpp",0x57,
                       "Condition \"p_data.size() < 2\" is true. Returning: false",0,0);
      uVar23 = 0;
      goto LAB_00101a77;
    }
  }
LAB_00101d70:
  _err_print_error("capture","modules/multiplayer/editor/multiplayer_editor_plugin.cpp",0x37,
                   "Condition \"!profilers.has(p_session)\" is true. Returning: false",0,0);
  uVar23 = 0;
  goto LAB_00101a77;
LAB_00101898:
  uVar29 = uVar29 + 1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (iVar20 + 1) * uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar28;
  lVar25 = SUB168(auVar5 * auVar9,8);
  uVar17 = *(uint *)(*(long *)(this + 0x228) + lVar25 * 4);
  iVar20 = SUB164(auVar5 * auVar9,8);
  if ((uVar17 == 0) ||
     (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * uVar2, auVar10._8_8_ = 0, auVar10._0_8_ = uVar28,
     auVar7._8_8_ = 0,
     auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4) +
                     iVar20) - SUB164(auVar6 * auVar10,8)) * uVar2, auVar11._8_8_ = 0,
     auVar11._0_8_ = uVar28, SUB164(auVar7 * auVar11,8) < uVar29)) goto LAB_00101d70;
  goto LAB_001018e1;
LAB_00101a62:
  for (; iVar19 = Array::size(), iVar18 < iVar19; iVar18 = iVar18 + 3) {
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    pVVar22 = (Variant *)Array::operator[](iVar20);
    local_78 = Variant::operator_cast_to_ObjectID(pVVar22);
    Array::operator[](iVar20);
    Variant::operator_cast_to_String((Variant *)&local_80);
    if (local_70._0_8_ != local_80) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      lVar25 = local_80;
      local_80 = 0;
      local_70._0_8_ = lVar25;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    Array::operator[](iVar20);
    Variant::operator_cast_to_String((Variant *)&local_80);
    if (local_70._8_8_ != local_80) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(local_70 + 8));
      lVar25 = local_80;
      local_80 = 0;
      local_70._8_8_ = lVar25;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    EditorNetworkProfiler::add_node_data(pNVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)(local_70 + 8));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  }
  goto LAB_00101a72;
  while( true ) {
    lVar25 = lVar25 + 1;
    EditorNetworkProfiler::add_rpc_frame_data((RPCNodeInfo *)pNVar3);
    if (local_70._0_8_ == 0) break;
LAB_00101ac8:
    if (*(long *)(local_70._0_8_ + -8) <= lVar25) {
      LOCK();
      plVar1 = (long *)(local_70._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uVar23 = local_70._0_8_;
        if (local_70._0_8_ == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        lVar25 = *(long *)(local_70._0_8_ + -8);
        this_00 = (CowData<char32_t> *)(local_70._0_8_ + 8);
        lVar26 = 0;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_70._8_8_;
        local_70 = auVar14 << 0x40;
        if (lVar25 != 0) {
          do {
            lVar26 = lVar26 + 1;
            CowData<char32_t>::_unref(this_00);
            this_00 = this_00 + 0x20;
          } while (lVar25 != lVar26);
        }
        Memory::free_static((void *)(uVar23 + -0x10),false);
      }
      break;
    }
  }
LAB_00101a72:
  uVar23 = 1;
LAB_00101a77:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerEditorDebugger::_bind_methods() */

void MultiplayerEditorDebugger::_bind_methods(void)

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
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
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
  local_108 = 0;
  local_b8 = "";
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = "path";
  local_118 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_118);
  local_e8[0] = 4;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  local_d8 = (undefined *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  local_c0 = 6;
  if (local_d0 == 0x11) {
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    if (local_d8 == local_b8) {
      if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_b8;
    }
  }
  else {
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_108);
  }
  local_100 = 0;
  local_b8 = "open_request";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_100);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_e8);
  local_f8 = "MultiplayerEditorDebugger";
  local_120 = 0;
  local_f0 = 0x19;
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
      lVar6 = 0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
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



/* MultiplayerEditorDebugger::is_class_ptr(void*) const */

uint __thiscall
MultiplayerEditorDebugger::is_class_ptr(MultiplayerEditorDebugger *this,void *param_1)

{
  return (uint)CONCAT71(0x1080,(undefined4 *)param_1 ==
                               &EditorDebuggerPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1080,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1080,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1080,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiplayerEditorDebugger::_getv(StringName const&, Variant&) const */

undefined8 MultiplayerEditorDebugger::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerEditorDebugger::_setv(StringName const&, Variant const&) */

undefined8 MultiplayerEditorDebugger::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerEditorDebugger::_validate_propertyv(PropertyInfo&) const */

void MultiplayerEditorDebugger::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MultiplayerEditorDebugger::_property_can_revertv(StringName const&) const */

undefined8 MultiplayerEditorDebugger::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiplayerEditorDebugger::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiplayerEditorDebugger::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerEditorDebugger::_notificationv(int, bool) */

void MultiplayerEditorDebugger::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MultiplayerEditorPlugin::is_class_ptr(void*) const */

uint __thiscall MultiplayerEditorPlugin::is_class_ptr(MultiplayerEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1080,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x107f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1080,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1080,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiplayerEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 MultiplayerEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 MultiplayerEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 MultiplayerEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiplayerEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiplayerEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, Node*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::get_argument_count
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, bool,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int>::get_argument_count
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MultiplayerEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void MultiplayerEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* MultiplayerEditorDebugger::~MultiplayerEditorDebugger() */

void __thiscall
MultiplayerEditorDebugger::~MultiplayerEditorDebugger(MultiplayerEditorDebugger *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00107810;
  pvVar3 = *(void **)(this + 0x220);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x244) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x244) = 0;
        *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x228) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x228) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x220);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x244) = 0;
        *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00102923;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x228),false);
    EditorDebuggerPlugin::~EditorDebuggerPlugin((EditorDebuggerPlugin *)this);
    return;
  }
LAB_00102923:
  EditorDebuggerPlugin::~EditorDebuggerPlugin((EditorDebuggerPlugin *)this);
  return;
}



/* HashMap<int, EditorNetworkProfiler*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, EditorNetworkProfiler*> > >::_lookup_pos(int const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
::_lookup_pos(HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*>::get_object
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*> *this)

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
      goto LAB_00102b7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102b7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102b7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, bool, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int>::get_object
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int> *this)

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
      goto LAB_00102c7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102c7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102c7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, String const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&>::get_object
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&> *this)

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
      goto LAB_00102d7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102d7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102d7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::get_object
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

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
      goto LAB_00102e7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102e7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102e7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&>::get_object
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&> *this)

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
      goto LAB_00102f7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102f7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102f7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void> *this)

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
      goto LAB_0010307d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010307d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010307d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerEditorDebugger::~MultiplayerEditorDebugger() */

void __thiscall
MultiplayerEditorDebugger::~MultiplayerEditorDebugger(MultiplayerEditorDebugger *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00107810;
  pvVar3 = *(void **)(this + 0x220);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x244) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x244) = 0;
        *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x228) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x228) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x220);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x244) = 0;
        *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00103193;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x228),false);
  }
LAB_00103193:
  EditorDebuggerPlugin::~EditorDebuggerPlugin((EditorDebuggerPlugin *)this);
  operator_delete(this,0x248);
  return;
}



/* MultiplayerEditorDebugger::_get_class_namev() const */

undefined8 * MultiplayerEditorDebugger::_get_class_namev(void)

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
LAB_00103233:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103233;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerEditorDebugger");
      goto LAB_0010329e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerEditorDebugger");
LAB_0010329e:
  return &_get_class_namev()::_class_name_static;
}



/* MultiplayerEditorPlugin::_get_class_namev() const */

undefined8 * MultiplayerEditorPlugin::_get_class_namev(void)

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
LAB_00103323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerEditorPlugin");
      goto LAB_0010338e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerEditorPlugin");
LAB_0010338e:
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



/* MultiplayerEditorPlugin::_notification(int) [clone .cold] */

void MultiplayerEditorPlugin::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiplayerEditorDebugger::capture(String const&, Array const&, int) [clone .cold] */

void MultiplayerEditorDebugger::capture(String *param_1,Array *param_2,int param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiplayerEditorDebugger::_bind_methods() [clone .cold] */

void MultiplayerEditorDebugger::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00103880) */
/* MultiplayerEditorPlugin::_notificationv(int, bool) */

void __thiscall
MultiplayerEditorPlugin::_notificationv(MultiplayerEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010b008 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010b008 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, EditorNetworkProfiler*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, EditorNetworkProfiler*> > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
::operator[](HashMap<int,EditorNetworkProfiler*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorNetworkProfiler*>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar26 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_48);
  if (cVar24 == '\0') {
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar27;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      pvVar31 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar31;
      if (uVar27 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar31 + uVar39)) &&
           (pvVar31 < (void *)((long)pvVar4 + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
            *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(pvVar4,0,uVar28);
          memset(pvVar31,0,uVar39);
        }
      }
      uVar26 = *param_1;
    }
    local_44 = 0;
    cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_44);
    if (cVar24 == '\0') {
      if ((float)uVar27 * __LC13 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar26 = *(uint *)(this + 0x28);
        if (uVar26 == 0x1c) {
          pauVar30 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00103d98;
        }
        uVar28 = (ulong)(uVar26 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
        if (uVar26 + 1 < 2) {
          uVar28 = 2;
        }
        uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
        uVar35 = (ulong)uVar26;
        *(int *)(this + 0x28) = (int)uVar28;
        pvVar31 = *(void **)(this + 8);
        uVar28 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar29 = Memory::alloc_static(uVar28,false);
        *(undefined8 *)(this + 0x10) = uVar29;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar26 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
            uVar28 = 0;
            do {
              *(undefined4 *)((long)__s + uVar28 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
              uVar28 = uVar28 + 1;
            } while (uVar35 != uVar28);
          }
          else {
            memset(__s,0,uVar28);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar27 == 0) {
          uVar26 = *param_1;
        }
        else {
          uVar28 = 0;
          do {
            uVar26 = *(uint *)((long)pvVar4 + uVar28 * 4);
            if (uVar26 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar26 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar33 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar33 * 4);
              iVar32 = SUB164(auVar7 * auVar15,8);
              uVar38 = *puVar1;
              uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
              while (uVar38 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar38 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar3 + iVar32) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                uVar25 = SUB164(auVar9 * auVar17,8);
                uVar36 = uVar29;
                if (uVar25 < uVar37) {
                  *puVar1 = uVar26;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar29;
                  uVar26 = uVar38;
                  uVar37 = uVar25;
                }
                uVar37 = uVar37 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar32 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar33 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar33 * 4);
                iVar32 = SUB164(auVar10 * auVar18,8);
                uVar29 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
              *puVar1 = uVar26;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar27 != uVar28);
          Memory::free_static(pvVar31,false);
          Memory::free_static(pvVar4,false);
          uVar26 = *param_1;
        }
      }
      pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar30[1] = uVar26;
      *(undefined8 *)(pauVar30[1] + 8) = 0;
      *pauVar30 = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar30;
      }
      else {
        *puVar2 = pauVar30;
        *(undefined8 **)(*pauVar30 + 8) = puVar2;
      }
      uVar26 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar30;
      uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
      uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar28 = 1;
        uVar26 = 1;
      }
      else {
        uVar28 = (ulong)uVar26;
      }
      uVar38 = 0;
      lVar5 = *(long *)(this + 0x10);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar39 = CONCAT44(0,uVar27);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar34 = SUB168(auVar11 * auVar19,8);
      lVar33 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar34 * 4);
      iVar32 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar30;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar39;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        uVar37 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (uVar37 < uVar38) {
          *puVar1 = uVar26;
          puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar26 = uVar3;
          uVar38 = uVar37;
        }
        uVar38 = uVar38 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar32 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        lVar34 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar34 * 4);
        iVar32 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar23;
      *puVar1 = uVar26;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_44 * 8);
      *(undefined8 *)(pauVar30[1] + 8) = 0;
    }
  }
  else {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_00103d98:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EditorNetworkProfiler>(EditorNetworkProfiler*,
   char const*, void (EditorNetworkProfiler::*)()) */

EditorNetworkProfiler *
create_custom_callable_function_pointer<EditorNetworkProfiler>
          (EditorNetworkProfiler *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00107d68;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010434a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010434a:
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



/* MultiplayerEditorPlugin::~MultiplayerEditorPlugin() */

void __thiscall MultiplayerEditorPlugin::~MultiplayerEditorPlugin(MultiplayerEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001079a0;
  if (*(long *)(this + 0x670) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x670);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorPlugin::~EditorPlugin((EditorPlugin *)this);
        return;
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* MultiplayerEditorPlugin::~MultiplayerEditorPlugin() */

void __thiscall MultiplayerEditorPlugin::~MultiplayerEditorPlugin(MultiplayerEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001079a0;
  if (*(long *)(this + 0x670) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x670);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x678);
  return;
}



/* MultiplayerEditorPlugin::_initialize_classv() */

void MultiplayerEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010b020 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010b010 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010b018 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"MultiplayerEditorPlugin");
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



/* MultiplayerEditorPlugin::get_class() const */

void MultiplayerEditorPlugin::get_class(void)

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
    String::parse_latin1(in_RDI,"MultiplayerEditorPlugin");
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



/* MultiplayerEditorDebugger::get_class() const */

void MultiplayerEditorDebugger::get_class(void)

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
    String::parse_latin1(in_RDI,"MultiplayerEditorDebugger");
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
LAB_00104a77:
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
      goto LAB_00104a77;
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
    if (cVar4 != '\0') goto LAB_00104b7b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00104b7b:
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
    if (cVar4 != '\0') goto LAB_00104cdb;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00104cdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void>::call
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void> *this,Variant **param_1,
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
      goto LAB_00104f1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00104f1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00104fd0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00104f1f:
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
LAB_00104fd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::call
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this,Variant **param_1,
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
      goto LAB_0010512f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010512f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001051e0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010512f:
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
LAB_001051e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, Node*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*>::call
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*> *this,Variant **param_1,
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
      goto LAB_00105425;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00105425;
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
LAB_00105330:
          uVar3 = _LC76;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_00105330;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001054d6;
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
LAB_00105425:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001054d6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, bool, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int>::call
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int> *this,
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
      goto LAB_001056ce;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001056ce;
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
        uVar3 = _LC77;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC78;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001056a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8,iVar5);
          return;
        }
        goto LAB_0010577f;
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
LAB_001056ce:
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
LAB_0010577f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&>::call
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&> *this,
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
            uVar3 = _LC79;
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
        goto LAB_0010585e;
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
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010585e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&>::call
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&> *this,
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
            uVar3 = _LC79;
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
        goto LAB_00105abe;
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
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00105abe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
MultiplayerEditorPlugin::is_class(MultiplayerEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00105d23;
  }
  cVar4 = String::operator==(param_1,"MultiplayerEditorPlugin");
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
      if (cVar4 != '\0') goto LAB_00105d23;
    }
    cVar4 = String::operator==(param_1,"EditorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_00105e2e;
    }
  }
LAB_00105d23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105e2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerEditorDebugger::is_class(String const&) const */

undefined8 __thiscall
MultiplayerEditorDebugger::is_class(MultiplayerEditorDebugger *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00105f23;
  }
  cVar4 = String::operator==(param_1,"MultiplayerEditorDebugger");
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
      if (cVar4 != '\0') goto LAB_00105f23;
    }
    cVar4 = String::operator==(param_1,"EditorDebuggerPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar5;
      }
      goto LAB_0010602e;
    }
  }
LAB_00105f23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010602e:
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
        if (pvVar3 == (void *)0x0) goto LAB_0010612f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010612f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
  local_78 = &_LC21;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC21;
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



/* EditorDebuggerPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorDebuggerPlugin::_get_property_listv(EditorDebuggerPlugin *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorDebuggerPlugin";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDebuggerPlugin";
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
  StringName::StringName((StringName *)&local_78,"EditorDebuggerPlugin",false);
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



/* MultiplayerEditorDebugger::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
MultiplayerEditorDebugger::_get_property_listv
          (MultiplayerEditorDebugger *this,List *param_1,bool param_2)

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
    EditorDebuggerPlugin::_get_property_listv((EditorDebuggerPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerEditorDebugger";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerEditorDebugger";
  local_98 = 0;
  local_70 = 0x19;
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
  StringName::StringName((StringName *)&local_78,"MultiplayerEditorDebugger",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorDebuggerPlugin::_get_property_listv((EditorDebuggerPlugin *)this,param_1,true);
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



/* MultiplayerEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
MultiplayerEditorPlugin::_get_property_listv
          (MultiplayerEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "MultiplayerEditorPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerEditorPlugin";
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
  StringName::StringName((StringName *)&local_78,"MultiplayerEditorPlugin",false);
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



/* MultiplayerEditorDebugger::_initialize_classv() */

void MultiplayerEditorDebugger::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorDebuggerPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
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
        if ((code *)PTR__bind_methods_0010b020 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorDebuggerPlugin");
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
      if ((code *)PTR__bind_methods_0010b028 != RefCounted::_bind_methods) {
        EditorDebuggerPlugin::_bind_methods();
      }
      EditorDebuggerPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorDebuggerPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"MultiplayerEditorDebugger");
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



/* MultiplayerEditorDebugger::_bind_methods() */

void MultiplayerEditorDebugger::_GLOBAL__sub_I__bind_methods(void)

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
/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MultiplayerEditorPlugin, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorPlugin,void,Node*> *this)

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
/* MultiplayerEditorPlugin::~MultiplayerEditorPlugin() */

void __thiscall MultiplayerEditorPlugin::~MultiplayerEditorPlugin(MultiplayerEditorPlugin *this)

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
/* MultiplayerEditorDebugger::~MultiplayerEditorDebugger() */

void __thiscall
MultiplayerEditorDebugger::~MultiplayerEditorDebugger(MultiplayerEditorDebugger *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<MultiplayerEditorDebugger, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MultiplayerEditorDebugger,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


