
/* Ref<DAPeer>::TEMPNAMEPLACEHOLDERVALUE(Ref<DAPeer> const&) [clone .isra.0] */

void __thiscall Ref<DAPeer>::operator=(Ref<DAPeer> *this,Ref *param_1)

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



/* DebugAdapterParser::prepare_base_event() const */

DebugAdapterParser * __thiscall DebugAdapterParser::prepare_base_event(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  Variant::Variant((Variant *)local_48,"event");
  Variant::Variant((Variant *)local_68,"type");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DebugAdapterParser::prepare_success_response(Dictionary const&) const */

Dictionary * DebugAdapterParser::prepare_success_response(Dictionary *param_1)

{
  char cVar1;
  Variant *pVVar2;
  Variant *pVVar3;
  Variant *in_RDX;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(param_1);
  Variant::Variant((Variant *)local_58,"response");
  Variant::Variant((Variant *)local_78,"type");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"seq");
  pVVar2 = (Variant *)Dictionary::operator[](in_RDX);
  Variant::Variant((Variant *)local_78,"request_seq");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar3,pVVar2);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"command");
  pVVar2 = (Variant *)Dictionary::operator[](in_RDX);
  Variant::Variant((Variant *)local_78,"command");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar3,pVVar2);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,true);
  Variant::Variant((Variant *)local_78,"success");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
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



/* DebugAdapterParser::req_terminate(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_terminate(Dictionary *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorRunBar::stop_playing();
  prepare_success_response(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_pause(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_pause(Dictionary *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(EditorRunBar::singleton + 0xa58),0));
  EditorDebuggerNode::_paused();
  DebugAdapterProtocol::notify_stopped_paused();
  prepare_success_response(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_continue(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_continue(Dictionary *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(EditorRunBar::singleton + 0xa58),0));
  EditorDebuggerNode::_paused();
  DebugAdapterProtocol::notify_continued();
  prepare_success_response(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_breakpointLocations(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_breakpointLocations(Dictionary *param_1)

{
  char cVar1;
  int iVar2;
  Variant *pVVar3;
  Variant *in_RDX;
  long in_FS_OFFSET;
  int local_b0;
  Dictionary local_98 [8];
  Variant local_90 [8];
  Array local_88 [8];
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_success_response(param_1);
  Dictionary::Dictionary(local_98);
  Variant::Variant((Variant *)local_58,local_98);
  Variant::Variant((Variant *)local_78,"body");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)param_1);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_88);
  Variant::Variant((Variant *)local_58,"line");
  pVVar3 = (Variant *)Dictionary::operator[](local_90);
  iVar2 = Variant::operator_cast_to_int(pVVar3);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"endLine");
  cVar1 = Dictionary::has(local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_b0 = -1;
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"endLine");
    pVVar3 = (Variant *)Dictionary::operator[](local_90);
    local_b0 = Variant::operator_cast_to_int(pVVar3);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,iVar2);
  Variant::Variant((Variant *)local_78,"line");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (-1 < local_b0) {
    Variant::Variant((Variant *)local_58,local_b0);
    Variant::Variant((Variant *)local_78,"endLine");
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
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
  }
  Variant::Variant((Variant *)local_58,local_80);
  Array::push_back((Variant *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"breakpoints");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_98);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_88);
  Dictionary::~Dictionary((Dictionary *)local_90);
  Dictionary::~Dictionary(local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_next(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_next(Dictionary *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorDebuggerNode::get_default_debugger();
  ScriptEditorDebugger::debug_next();
  *(undefined1 *)(DebugAdapterProtocol::singleton + 0x192) = 1;
  prepare_success_response(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_stepIn(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_stepIn(Dictionary *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorDebuggerNode::get_default_debugger();
  ScriptEditorDebugger::debug_step();
  *(undefined1 *)(DebugAdapterProtocol::singleton + 0x192) = 1;
  prepare_success_response(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_disconnect(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_disconnect(Dictionary *param_1)

{
  Object OVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar5 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar5 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar5 = (Object *)0x0;
  }
  OVar1 = pOVar5[0x4001b5];
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar5);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (OVar1 == (Object)0x0) {
    EditorRunBar::stop_playing();
  }
  prepare_success_response(param_1);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_initialized() const */

DebugAdapterParser * __thiscall DebugAdapterParser::ev_initialized(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event(this);
  Variant::Variant((Variant *)local_48,"initialized");
  Variant::Variant((Variant *)local_68,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DebugAdapterParser::ev_terminated() const */

DebugAdapterParser * __thiscall DebugAdapterParser::ev_terminated(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event(this);
  Variant::Variant((Variant *)local_48,"terminated");
  Variant::Variant((Variant *)local_68,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DebugAdapterParser::ev_exited(int const&) const */

int * DebugAdapterParser::ev_exited(int *param_1)

{
  char cVar1;
  Variant *pVVar2;
  int *in_RDX;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event((DebugAdapterParser *)param_1);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,"exited");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*in_RDX);
  Variant::Variant((Variant *)local_78,"exitCode");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_stopped() const */

DebugAdapterParser * __thiscall DebugAdapterParser::ev_stopped(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event(this);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,"stopped");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,1);
  Variant::Variant((Variant *)local_78,"threadId");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DebugAdapterParser::ev_stopped_paused() const */

DebugAdapterParser * __thiscall DebugAdapterParser::ev_stopped_paused(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ev_stopped(this);
  Variant::Variant((Variant *)local_58,"body");
  Dictionary::operator[]((Variant *)this);
  Variant::operator_cast_to_Dictionary(local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"paused");
  Variant::Variant((Variant *)local_78,"reason");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"Paused");
  Variant::Variant((Variant *)local_78,"description");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_stopped_exception(String const&) const */

String * DebugAdapterParser::ev_stopped_exception(String *param_1)

{
  char cVar1;
  Variant *pVVar2;
  String *in_RDX;
  long in_FS_OFFSET;
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ev_stopped((DebugAdapterParser *)param_1);
  Variant::Variant((Variant *)local_58,"body");
  Dictionary::operator[]((Variant *)param_1);
  Variant::operator_cast_to_Dictionary(local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"exception");
  Variant::Variant((Variant *)local_78,"reason");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"Exception");
  Variant::Variant((Variant *)local_78,"description");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,in_RDX);
  Variant::Variant((Variant *)local_78,"text");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_stopped_breakpoint(int const&) const */

int * DebugAdapterParser::ev_stopped_breakpoint(int *param_1)

{
  char cVar1;
  Variant *pVVar2;
  int *in_RDX;
  long in_FS_OFFSET;
  Variant local_88 [8];
  Array local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ev_stopped((DebugAdapterParser *)param_1);
  Variant::Variant((Variant *)local_58,"body");
  Dictionary::operator[]((Variant *)param_1);
  Variant::operator_cast_to_Dictionary(local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"breakpoint");
  Variant::Variant((Variant *)local_78,"reason");
  pVVar2 = (Variant *)Dictionary::operator[](local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"Breakpoint");
  Variant::Variant((Variant *)local_78,"description");
  pVVar2 = (Variant *)Dictionary::operator[](local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_80);
  Variant::Variant((Variant *)local_58,*in_RDX);
  Array::push_back((Variant *)local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"hitBreakpointIds");
  pVVar2 = (Variant *)Dictionary::operator[](local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_80);
  Dictionary::~Dictionary((Dictionary *)local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DebugAdapterParser::ev_stopped_step() const */

DebugAdapterParser * __thiscall DebugAdapterParser::ev_stopped_step(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ev_stopped(this);
  Variant::Variant((Variant *)local_58,"body");
  Dictionary::operator[]((Variant *)this);
  Variant::operator_cast_to_Dictionary(local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"step");
  Variant::Variant((Variant *)local_78,"reason");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"Breakpoint");
  Variant::Variant((Variant *)local_78,"description");
  pVVar2 = (Variant *)Dictionary::operator[](local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_continued() const */

DebugAdapterParser * __thiscall DebugAdapterParser::ev_continued(DebugAdapterParser *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event(this);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,"continued");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,1);
  Variant::Variant((Variant *)local_78,"threadId");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DebugAdapterParser::ev_breakpoint(DAP::Breakpoint const&, bool const&) const */

Breakpoint * DebugAdapterParser::ev_breakpoint(Breakpoint *param_1,bool *param_2)

{
  char cVar1;
  Variant *pVVar2;
  char *in_RCX;
  int *in_RDX;
  char *pcVar3;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  Dictionary local_88 [8];
  Dictionary local_80 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event((DebugAdapterParser *)param_1);
  Dictionary::Dictionary(local_90);
  Variant::Variant((Variant *)local_58,"breakpoint");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_90);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  pcVar3 = "removed";
  if (*in_RCX != '\0') {
    pcVar3 = "new";
  }
  Variant::Variant((Variant *)local_58,pcVar3);
  Variant::Variant((Variant *)local_78,"reason");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_88);
  Variant::Variant((Variant *)local_58,*in_RDX);
  Variant::Variant((Variant *)local_78,"id");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,SUB41(in_RDX[1],0));
  Variant::Variant((Variant *)local_78,"verified");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_78,(String *)(in_RDX + 4));
  Variant::Variant((Variant *)local_58,"name");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_78[0];
    *(undefined8 *)(pVVar2 + 8) = local_70;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(String *)(in_RDX + 6));
  Variant::Variant((Variant *)local_58,"path");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_78[0];
    *(undefined8 *)(pVVar2 + 8) = local_70;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Array *)(in_RDX + 2));
  Variant::Variant((Variant *)local_58,"checksums");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_78[0];
    *(undefined8 *)(pVVar2 + 8) = local_70;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"source");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  Variant::Variant((Variant *)local_58,in_RDX[8]);
  Variant::Variant((Variant *)local_78,"line");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"breakpoint");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_88);
  Dictionary::~Dictionary(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_custom_data(String const&, Array const&) const */

String * DebugAdapterParser::ev_custom_data(String *param_1,Array *param_2)

{
  char cVar1;
  Variant *pVVar2;
  Array *in_RCX;
  String *in_RDX;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event((DebugAdapterParser *)param_1);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,"godot/custom_data");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,in_RDX);
  Variant::Variant((Variant *)local_78,"message");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,in_RCX);
  Variant::Variant((Variant *)local_78,"data");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::prepare_error_response(Dictionary const&, DAP::ErrorType, Dictionary const&)
   const */

Dictionary *
DebugAdapterParser::prepare_error_response
          (Dictionary *param_1,undefined8 param_2,Variant *param_3,int param_4,Dictionary *param_5)

{
  char cVar1;
  Variant *pVVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  String *local_d0;
  CowData *local_c8;
  Dictionary local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  Dictionary local_a0 [8];
  int local_98;
  undefined8 local_90;
  undefined2 local_88;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(param_1);
  Dictionary::Dictionary(local_b8);
  Variant::Variant((Variant *)local_58,"response");
  Variant::Variant((Variant *)local_78,"type");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"seq");
  pVVar2 = (Variant *)Dictionary::operator[](param_3);
  Variant::Variant((Variant *)local_78,"request_seq");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar3,pVVar2);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"command");
  pVVar2 = (Variant *)Dictionary::operator[](param_3);
  Variant::Variant((Variant *)local_78,"command");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar3,pVVar2);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,false);
  Variant::Variant((Variant *)local_78,"success");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_b8);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  Dictionary::Dictionary(local_80);
  local_b0 = 0;
  local_a8 = 0;
  switch(param_4) {
  default:
    String::parse_latin1((String *)&local_b0,"unknown");
    String::parse_latin1
              ((String *)&local_a8,"An unknown error has occurred when processing the request.");
    break;
  case 1:
    String::parse_latin1((String *)&local_b0,"wrong_path");
    String::parse_latin1
              ((String *)&local_a8,
               "The editor and client are working on different paths; the client is on \"{clientPath}\", but the editor is on \"{editorPath}\""
              );
    break;
  case 2:
    String::parse_latin1((String *)&local_b0,"not_running");
    String::parse_latin1
              ((String *)&local_a8,"Can\'t attach to a running session since there isn\'t one.");
    break;
  case 3:
    String::parse_latin1((String *)&local_b0,"timeout");
    String::parse_latin1((String *)&local_a8,"Timeout reached while processing a request.");
    break;
  case 4:
    String::parse_latin1((String *)&local_b0,"unknown_platform");
    String::parse_latin1((String *)&local_a8,"The specified platform is unknown.");
    break;
  case 5:
    String::parse_latin1((String *)&local_b0,"missing_device");
    String::parse_latin1((String *)&local_a8,"There\'s no connected device with specified id.");
  }
  local_c8 = (CowData *)&local_a8;
  local_d0 = (String *)&local_b0;
  local_98 = param_4;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,local_c8);
  Dictionary::operator=(local_80,param_5);
  Variant::Variant((Variant *)local_58,local_d0);
  Variant::Variant((Variant *)local_78,"message");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_a0);
  Variant::Variant((Variant *)local_58,local_98);
  Variant::Variant((Variant *)local_78,"id");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  Variant::Variant((Variant *)local_78,"format");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_88._0_1_);
  Variant::Variant((Variant *)local_78,"sendTelemetry");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_88._1_1_);
  Variant::Variant((Variant *)local_78,"showUser");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"variables");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_a0);
  Variant::Variant((Variant *)local_78,"error");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  Dictionary::~Dictionary(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Dictionary::~Dictionary(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_attach(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_attach(Dictionary *param_1)

{
  char cVar1;
  long lVar2;
  Dictionary *pDVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Dictionary aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorDebuggerNode::get_default_debugger();
  pDVar3 = *(Dictionary **)(lVar2 + 0xb68);
  if (pDVar3 != (Dictionary *)0x0) {
    cVar1 = (**(code **)(*(long *)pDVar3 + 0x150))();
    if (cVar1 != '\0') {
      pOVar4 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
      if (pOVar4 == (Object *)0x0) {
        pDVar3 = (Dictionary *)req_attach(pDVar3);
        return pDVar3;
      }
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      pOVar4[0x4001b5] = (Object)0x1;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar4);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      DebugAdapterProtocol::notify_process();
      prepare_success_response(param_1);
      goto LAB_00103bf9;
    }
  }
  Dictionary::Dictionary(aDStack_38);
  prepare_error_response(param_1);
  Dictionary::~Dictionary(aDStack_38);
LAB_00103bf9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_variables(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_variables(Dictionary *param_1)

{
  Object OVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  Variant *pVVar17;
  uint uVar18;
  Variant *in_RDX;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  undefined8 in_RSI;
  ulong uVar23;
  uint uVar24;
  Object *pOVar25;
  long in_FS_OFFSET;
  Variant local_98 [8];
  Dictionary local_90 [8];
  long local_88;
  Array local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(DebugAdapterProtocol::singleton + 0x194) < 1) {
    Variant::Variant((Variant *)local_58,"arguments");
    Dictionary::operator[](in_RDX);
    Variant::operator_cast_to_Dictionary(local_98);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"variablesReference");
    pVVar17 = (Variant *)Dictionary::operator[](local_98);
    uVar14 = Variant::operator_cast_to_int(pVVar17);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = *(long *)(DebugAdapterProtocol::singleton + 0x210);
    if ((lVar2 != 0) && (*(int *)(DebugAdapterProtocol::singleton + 0x234) != 0)) {
      uVar3 = *(ulong *)(hash_table_size_primes_inv +
                        (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x230) * 8);
      uVar15 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
      uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
      uVar21 = uVar15 ^ uVar15 >> 0x10;
      if (uVar15 == uVar15 >> 0x10) {
        uVar21 = 1;
        uVar19 = uVar3;
      }
      else {
        uVar19 = uVar21 * uVar3;
      }
      uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                   (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x230) * 4));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar23;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar20 = SUB168(auVar4 * auVar8,8);
      uVar18 = SUB164(auVar4 * auVar8,8);
      uVar15 = *(uint *)(*(long *)(DebugAdapterProtocol::singleton + 0x218) + lVar20 * 4);
      if (uVar15 != 0) {
        uVar24 = 0;
LAB_00103e6a:
        if ((uVar21 != uVar15) || (uVar14 != *(uint *)(*(long *)(lVar2 + lVar20 * 8) + 0x10)))
        goto LAB_00103e20;
        lVar2 = *(long *)(lVar2 + (ulong)uVar18 * 8);
        if (lVar2 != 0) {
          prepare_success_response(local_90);
          Dictionary::Dictionary((Dictionary *)&local_88);
          Variant::Variant((Variant *)local_58,(Dictionary *)&local_88);
          Variant::Variant((Variant *)local_78,"body");
          pVVar17 = (Variant *)Dictionary::operator[]((Variant *)local_90);
          Variant::operator=(pVVar17,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          pOVar25 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
          if (pOVar25 == (Object *)0x0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          cVar13 = RefCounted::reference();
          if (cVar13 == '\0') {
            pOVar25 = (Object *)0x0;
          }
          OVar1 = pOVar25[0x4001b2];
          cVar13 = RefCounted::unreference();
          if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar25), cVar13 != '\0')) {
            (**(code **)(*(long *)pOVar25 + 0x140))(pOVar25);
            Memory::free_static(pOVar25,false);
          }
          if (OVar1 == (Object)0x0) {
            for (iVar22 = 0; iVar16 = Array::size(), iVar22 < iVar16; iVar22 = iVar22 + 1) {
              Array::operator[]((int)lVar2 + 0x18);
              Variant::operator_cast_to_Dictionary((Variant *)local_80);
              Variant::Variant((Variant *)local_58,"type");
              Dictionary::erase((Variant *)local_80);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              Dictionary::~Dictionary((Dictionary *)local_80);
            }
          }
          Array::Array(local_80,(Array *)(lVar2 + 0x18));
          Variant::Variant((Variant *)local_58,local_80);
          Variant::Variant((Variant *)local_78,"variables");
          pVVar17 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
          Variant::operator=(pVVar17,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::~Array(local_80);
          Dictionary::Dictionary(param_1,local_90);
          Dictionary::~Dictionary((Dictionary *)&local_88);
          Dictionary::~Dictionary(local_90);
          goto LAB_00103ff8;
        }
      }
    }
LAB_00104088:
    local_88 = DebugAdapterProtocol::search_object_id((int)DebugAdapterProtocol::singleton);
    if (local_88 == 0) {
      Dictionary::Dictionary((Dictionary *)local_80);
      prepare_error_response(param_1,in_RSI,in_RDX,0,(Dictionary *)local_80);
      Dictionary::~Dictionary((Dictionary *)local_80);
    }
    else {
      DebugAdapterProtocol::request_remote_object(DebugAdapterProtocol::singleton);
      Dictionary::Dictionary(param_1);
    }
LAB_00103ff8:
    Dictionary::~Dictionary((Dictionary *)local_98);
  }
  else {
    Dictionary::Dictionary(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_00103e20:
  uVar24 = uVar24 + 1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (uVar18 + 1) * uVar3;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar23;
  lVar20 = SUB168(auVar5 * auVar9,8);
  uVar15 = *(uint *)(*(long *)(DebugAdapterProtocol::singleton + 0x218) + lVar20 * 4);
  uVar18 = SUB164(auVar5 * auVar9,8);
  if ((uVar15 == 0) ||
     (auVar6._8_8_ = 0, auVar6._0_8_ = uVar15 * uVar3, auVar10._8_8_ = 0, auVar10._0_8_ = uVar23,
     auVar7._8_8_ = 0,
     auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                               (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x230) * 4) +
                     uVar18) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
     auVar11._0_8_ = uVar23, SUB164(auVar7 * auVar11,8) < uVar24)) goto LAB_00104088;
  goto LAB_00103e6a;
}



/* DebugAdapterParser::req_threads(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_threads(Dictionary *param_1)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Dictionary local_a8 [8];
  Array local_a0 [8];
  int local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_success_response(param_1);
  Dictionary::Dictionary(local_a8);
  Variant::Variant((Variant *)local_58,local_a8);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_a0);
  local_90 = 0;
  local_88 = &_LC62;
  local_98 = 1;
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_90);
  Dictionary::Dictionary((Dictionary *)&local_88);
  Variant::Variant((Variant *)local_58,local_98);
  Variant::Variant((Variant *)local_78,"id");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  Variant::Variant((Variant *)local_78,"name");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Dictionary *)&local_88);
  Array::push_back((Variant *)local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_88);
  Variant::Variant((Variant *)local_58,local_a0);
  Variant::Variant((Variant *)local_78,"threads");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Array::~Array(local_a0);
  Dictionary::~Dictionary(local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_godot_put_msg(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_godot_put_msg(Dictionary *param_1)

{
  String *pSVar1;
  Variant *in_RDX;
  long in_FS_OFFSET;
  Variant local_70 [8];
  Variant local_68 [8];
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"message");
  Dictionary::operator[](local_70);
  Variant::operator_cast_to_String(local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"data");
  Dictionary::operator[](local_70);
  Variant::operator_cast_to_Array(local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = (String *)EditorDebuggerNode::get_default_debugger();
  ScriptEditorDebugger::_put_msg(pSVar1,(Array *)local_68,(ulong)local_60);
  prepare_success_response(param_1);
  Array::~Array((Array *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Dictionary::~Dictionary((Dictionary *)local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_process(String const&) const */

String * DebugAdapterParser::ev_process(String *param_1)

{
  char cVar1;
  Variant *pVVar2;
  long *plVar3;
  String *in_RDX;
  long in_FS_OFFSET;
  Dictionary local_88 [8];
  CowData<char32_t> local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event((DebugAdapterParser *)param_1);
  Dictionary::Dictionary(local_88);
  Variant::Variant((Variant *)local_58,"process");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = (long *)OS::get_singleton();
  (**(code **)(*plVar3 + 0x100))(local_80,plVar3);
  Variant::Variant((Variant *)local_58,(String *)local_80);
  Variant::Variant((Variant *)local_78,"name");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_80);
  Variant::Variant((Variant *)local_58,in_RDX);
  Variant::Variant((Variant *)local_78,"startMethod");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::ev_output(String const&, RemoteDebugger::MessageType) const */

DebugAdapterParser *
DebugAdapterParser::ev_output
          (DebugAdapterParser *param_1,undefined8 param_2,String *param_3,int param_4)

{
  char cVar1;
  Variant *pVVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  Dictionary local_98 [8];
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_base_event(param_1);
  Dictionary::Dictionary(local_98);
  Variant::Variant((Variant *)local_58,"output");
  Variant::Variant((Variant *)local_78,"event");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_98);
  Variant::Variant((Variant *)local_78,"body");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  pcVar3 = "stdout";
  if (param_4 == 1) {
    pcVar3 = "stderr";
  }
  Variant::Variant((Variant *)local_58,pcVar3);
  Variant::Variant((Variant *)local_78,"category");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_98);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_90 = 0;
  local_80 = 2;
  local_88 = &_LC70;
  String::parse_latin1((StrRange *)&local_90);
  String::operator+((String *)&local_88,param_3);
  Variant::Variant((Variant *)local_58,(String *)&local_88);
  Variant::Variant((Variant *)local_78,"output");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_98);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Dictionary::~Dictionary(local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_launch(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_launch(Dictionary *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object OVar3;
  int iVar4;
  Variant *this;
  Variant *pVVar5;
  Variant *in_RDX;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  String *local_c0;
  Variant local_98 [8];
  Variant local_90 [8];
  CowData<char32_t> local_88 [8];
  Object *local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"project");
  cVar2 = Dictionary::has(local_98);
  if (cVar2 == '\0') {
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    Variant::Variant((Variant *)local_58,"project");
    Dictionary::operator[](local_98);
    Variant::operator_cast_to_String(local_90);
    iVar4 = String::find_char((wchar32)local_90,0x5c);
    if (iVar4 == -1) {
      ProjectSettings::get_singleton();
      ProjectSettings::get_resource_path();
      cVar2 = String::begins_with((String *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    else {
      ProjectSettings::get_singleton();
      ProjectSettings::get_resource_path();
      String::replace((char *)&local_80,(char *)local_90);
      iVar4 = String::findn((String *)&local_80,(int)local_88);
      cVar2 = iVar4 != -1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_88);
    }
    local_c0 = (String *)&local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      Dictionary::Dictionary((Dictionary *)local_88);
      Variant::Variant((Variant *)local_58,"project");
      pVVar5 = (Variant *)Dictionary::operator[](local_98);
      Variant::Variant((Variant *)local_78,"clientPath");
      this = (Variant *)Dictionary::operator[]((Variant *)local_88);
      Variant::operator=(this,pVVar5);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      ProjectSettings::get_singleton();
      ProjectSettings::get_resource_path();
      Variant::Variant((Variant *)local_58,local_c0);
      Variant::Variant((Variant *)local_78,"editorPath");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_88);
      if (pVVar5 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar5 = 0;
        *(int *)pVVar5 = local_58[0];
        *(undefined8 *)(pVVar5 + 8) = local_50;
        *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      prepare_error_response(param_1,in_RSI);
      Dictionary::~Dictionary((Dictionary *)local_88);
      goto LAB_00105053;
    }
  }
  Variant::Variant((Variant *)local_58,"godot/custom_data");
  cVar2 = Dictionary::has(local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 != '\0') {
    Variant::Variant((Variant *)local_58,"godot/custom_data");
    pVVar5 = (Variant *)Dictionary::operator[](local_98);
    OVar3 = (Object)Variant::operator_cast_to_bool(pVVar5);
    local_80 = (Object *)0x0;
    Ref<DAPeer>::operator=
              ((Ref<DAPeer> *)&local_80,*(Ref **)(DebugAdapterProtocol::singleton + 0x1b8));
    pOVar1 = local_80;
    local_80[0x4001b4] = OVar3;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  pOVar1 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar1 == (Object *)0x0) {
LAB_001052b8:
    Dictionary::operator=((Dictionary *)0x4001b8,(Dictionary *)in_RDX);
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_001052b8;
    Dictionary::operator=((Dictionary *)(pOVar1 + 0x4001b8),(Dictionary *)in_RDX);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Dictionary::Dictionary(param_1);
LAB_00105053:
  Dictionary::~Dictionary((Dictionary *)local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::_launch_process(Dictionary const&) const */

Dictionary * DebugAdapterParser::_launch_process(Dictionary *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  Variant *this;
  undefined8 uVar6;
  Variant *in_RDX;
  int iVar7;
  Object *pOVar8;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  Variant local_b8 [8];
  Variant local_b0 [8];
  Object *local_a8;
  String local_a0 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_b8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorDebuggerNode::get_default_debugger();
  Variant::Variant((Variant *)local_58,"noDebug");
  this = (Variant *)Dictionary::operator[](local_b8);
  bVar2 = Variant::operator_cast_to_bool(this);
  cVar3 = ScriptEditorDebugger::is_skip_breakpoints();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar2 != (bool)cVar3) {
    ScriptEditorDebugger::debug_skip_breakpoints();
  }
  Variant::Variant((Variant *)local_78,"host");
  Variant::Variant((Variant *)local_98,"platform");
  Dictionary::get((Variant *)local_58,local_b8);
  Variant::operator_cast_to_String(local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_98[0]] == '\0') {
    cVar3 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  cVar3 = String::operator==((String *)local_b0,"host");
  if (cVar3 == '\0') {
    Variant::Variant((Variant *)local_78,-1);
    Variant::Variant((Variant *)local_98,"device");
    Dictionary::get((Variant *)local_58,local_b8);
    Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar7 = 0;
    cVar3 = String::operator==((String *)local_b0,"android");
    if (cVar3 == '\0') {
      cVar3 = String::operator==((String *)local_b0,"web");
      if (cVar3 != '\0') {
        for (; iVar5 = EditorExport::get_export_platform_count(), iVar7 < iVar5; iVar7 = iVar7 + 1)
        {
          EditorExport::get_export_platform((int)&local_a8);
          (**(code **)(*(long *)local_a8 + 0x1e0))(local_a0);
          cVar3 = String::operator==(local_a0,"Web");
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          if (((local_a8 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar8 = local_a8, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_a8), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))();
            Memory::free_static(pOVar8,false);
          }
          if (cVar3 != '\0') goto LAB_001058e2;
        }
      }
    }
    else {
      for (; iVar5 = EditorExport::get_export_platform_count(), iVar7 < iVar5; iVar7 = iVar7 + 1) {
        EditorExport::get_export_platform((int)&local_a8);
        (**(code **)(*(long *)local_a8 + 0x1e0))(local_a0);
        cVar3 = String::operator==(local_a0,"Android");
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        if (((local_a8 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar8 = local_a8, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_a8), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))();
          Memory::free_static(pOVar8,false);
        }
        if (cVar3 != '\0') goto LAB_001058e2;
      }
    }
    Dictionary::Dictionary((Dictionary *)local_a0);
    uVar6 = 4;
    goto LAB_00105940;
  }
  EditorRunBar::play_main_scene(SUB81(EditorRunBar::singleton,0));
LAB_00105646:
  pOVar8 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar8 == (Object *)0x0) {
    DAT_004001b5 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar8 = (Object *)0x0;
  }
  pOVar8[0x4001b5] = (Object)0x0;
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
  DebugAdapterProtocol::notify_process();
  prepare_success_response(param_1);
LAB_001056a7:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  Dictionary::~Dictionary((Dictionary *)local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_001058e2:
  uVar6 = EditorRunBar::singleton;
  cVar3 = String::operator==((String *)local_b0,"android");
  if (cVar3 == '\0') {
    iVar7 = EditorRunBar::start_native_device((int)uVar6);
  }
  else {
    iVar7 = EditorRunBar::start_native_device((int)uVar6);
  }
  if (iVar7 != 0) {
    if ((iVar7 == 0x1f) && (cVar3 = String::operator==((String *)local_b0,"android"), cVar3 != '\0')
       ) {
      Dictionary::Dictionary((Dictionary *)local_a0);
      uVar6 = 5;
    }
    else {
      Dictionary::Dictionary((Dictionary *)local_a0);
      uVar6 = 0;
    }
LAB_00105940:
    prepare_error_response(param_1,in_RSI,in_RDX,uVar6,local_a0);
    Dictionary::~Dictionary((Dictionary *)local_a0);
    goto LAB_001056a7;
  }
  goto LAB_00105646;
}



/* DebugAdapterParser::req_restart(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_restart(Dictionary *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  Variant *pVVar4;
  Variant *this;
  Dictionary *in_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  Dictionary local_88 [8];
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_90,in_RDX);
  Dictionary::Dictionary(local_88);
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[]((Variant *)local_90);
  Variant::operator_cast_to_Dictionary(local_80);
  Dictionary::operator=(local_88,(Dictionary *)local_80);
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[]((Variant *)local_88);
  Variant::operator_cast_to_Dictionary(local_80);
  Dictionary::operator=(local_88,(Dictionary *)local_80);
  Dictionary::~Dictionary((Dictionary *)local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"arguments");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pOVar5 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar5 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    if (pOVar5[0x4001b5] == (Object)0x0) {
      _launch_process((Dictionary *)local_80);
      cVar2 = RefCounted::unreference();
    }
    else {
      req_attach((Dictionary *)local_80);
      cVar2 = RefCounted::unreference();
    }
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    Variant::Variant((Variant *)local_58,"success");
    pVVar4 = (Variant *)Dictionary::operator[](local_80);
    bVar3 = Variant::operator_cast_to_bool(pVVar4);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (bVar3) {
      prepare_success_response(param_1);
    }
    else {
      Variant::Variant((Variant *)local_58,"command");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)in_RDX);
      Variant::Variant((Variant *)local_78,"command");
      this = (Variant *)Dictionary::operator[](local_80);
      Variant::operator=(this,pVVar4);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary(param_1,(Dictionary *)local_80);
    }
    Dictionary::~Dictionary((Dictionary *)local_80);
    Dictionary::~Dictionary(local_88);
    Dictionary::~Dictionary(local_90);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_configurationDone(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_configurationDone(Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Dictionary *pDVar4;
  undefined1 (*pauVar5) [16];
  Object *pOVar6;
  long in_FS_OFFSET;
  Dictionary local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar6 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar6 == (Object *)0x0) {
    pDVar4 = (Dictionary *)0x4001b8;
    cVar3 = Dictionary::is_empty();
    if (cVar3 == '\0') {
      pDVar4 = (Dictionary *)req_configurationDone(pDVar4);
      return pDVar4;
    }
LAB_00105fb2:
    prepare_success_response(param_1);
    goto LAB_00105f76;
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    cVar3 = Dictionary::is_empty();
    if (cVar3 != '\0') goto LAB_00105fb2;
    pOVar6 = (Object *)0x0;
LAB_00105eb7:
    _launch_process(local_48);
    if (*(long *)(pOVar6 + 0x400198) == 0) {
      pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(pOVar6 + 0x400198) = pauVar5;
      *(undefined4 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
    }
    pDVar4 = (Dictionary *)operator_new(0x20,DefaultAllocator::alloc);
    Dictionary::Dictionary(pDVar4);
    *(undefined8 *)(pDVar4 + 0x18) = 0;
    *(undefined1 (*) [16])(pDVar4 + 8) = (undefined1  [16])0x0;
    Dictionary::operator=(pDVar4,local_48);
    plVar1 = *(long **)(pOVar6 + 0x400198);
    lVar2 = plVar1[1];
    *(undefined8 *)(pDVar4 + 8) = 0;
    *(long **)(pDVar4 + 0x18) = plVar1;
    *(long *)(pDVar4 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(Dictionary **)(lVar2 + 8) = pDVar4;
    }
    plVar1[1] = (long)pDVar4;
    if (*plVar1 == 0) {
      *plVar1 = (long)pDVar4;
    }
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    Dictionary::~Dictionary(local_48);
    Dictionary::clear();
  }
  else {
    cVar3 = Dictionary::is_empty();
    if (cVar3 == '\0') goto LAB_00105eb7;
  }
  prepare_success_response(param_1);
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar6);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00105f76:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* DebugAdapterParser::req_initialize(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_initialize(Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined2 uVar4;
  char cVar5;
  Object OVar6;
  Variant *pVVar7;
  long lVar8;
  Variant *in_RDX;
  long *plVar9;
  wchar32 wVar10;
  Object *pOVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined4 local_dc;
  Variant local_d8 [8];
  long *local_d0;
  long local_c8;
  Dictionary local_c0 [8];
  char *local_b8;
  undefined8 local_b0;
  int local_a8 [8];
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_success_response(param_1);
  Variant::Variant((Variant *)&local_68,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_d8);
  if (Variant::needs_deinit[local_68] != '\0') {
    Variant::_clear_internal();
  }
  pOVar11 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar11 == (Object *)0x0) {
    Variant::Variant((Variant *)local_88,false);
    Variant::Variant((Variant *)local_a8,"linesStartAt1");
    Dictionary::get((Variant *)&local_68,local_d8);
    Variant::operator_cast_to_bool((Variant *)&local_68);
    DAT_004001b0 = 0;
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar11 = (Object *)0x0;
  }
  Variant::Variant((Variant *)local_88,false);
  Variant::Variant((Variant *)local_a8,"linesStartAt1");
  Dictionary::get((Variant *)&local_68,local_d8);
  OVar6 = (Object)Variant::operator_cast_to_bool((Variant *)&local_68);
  pOVar11[0x4001b0] = OVar6;
  if (Variant::needs_deinit[local_68] == '\0') {
    cVar5 = Variant::needs_deinit[local_a8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_a8[0]];
  }
  if (cVar5 == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,false);
  Variant::Variant((Variant *)local_a8,"columnsStartAt1");
  Dictionary::get((Variant *)&local_68,local_d8);
  OVar6 = (Object)Variant::operator_cast_to_bool((Variant *)&local_68);
  pOVar11[0x4001b1] = OVar6;
  if (Variant::needs_deinit[local_68] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,false);
  Variant::Variant((Variant *)local_a8,"supportsVariableType");
  Dictionary::get((Variant *)&local_68,local_d8);
  OVar6 = (Object)Variant::operator_cast_to_bool((Variant *)&local_68);
  pOVar11[0x4001b2] = OVar6;
  if (Variant::needs_deinit[local_68] == '\0') {
    cVar5 = Variant::needs_deinit[local_a8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_a8[0]];
  }
  if (cVar5 == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,false);
  Variant::Variant((Variant *)local_a8,"supportsInvalidatedEvent");
  Dictionary::get((Variant *)&local_68,local_d8);
  OVar6 = (Object)Variant::operator_cast_to_bool((Variant *)&local_68);
  pOVar11[0x4001b3] = OVar6;
  if (Variant::needs_deinit[local_68] == '\0') {
    cVar5 = Variant::needs_deinit[local_a8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_a8[0]];
  }
  local_68._3_1_ = (undefined1)((uint)local_68 >> 0x18);
  if (cVar5 == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = _LC96;
  local_68 = CONCAT13(local_68._3_1_,0x10000);
  local_b8 = "MD5";
  local_68 = CONCAT22(local_68._2_2_,_LC96);
  local_60 = 0;
  local_b0 = 3;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = 0;
  local_b8 = "SHA256";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_58);
  local_4c = uVar4;
  local_50 = 0x1010101;
  Dictionary::Dictionary(local_c0);
  Variant::Variant((Variant *)local_88,(bool)local_68._0_1_);
  Variant::Variant((Variant *)local_a8,"supportsConfigurationDoneRequest");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_68._1_1_);
  Variant::Variant((Variant *)local_a8,"supportsEvaluateForHovers");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  Variant::operator=(pVVar7,(Variant *)local_88);
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_68._2_1_);
  Variant::Variant((Variant *)local_a8,"supportsSetVariable");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  Variant::operator=(pVVar7,(Variant *)local_88);
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_50._0_1_);
  Variant::Variant((Variant *)local_a8,"supportsRestartRequest");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_50._1_1_);
  Variant::Variant((Variant *)local_a8,"supportsValueFormattingOptions");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_50._2_1_);
  Variant::Variant((Variant *)local_a8,"supportTerminateDebuggee");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_50._3_1_);
  Variant::Variant((Variant *)local_a8,"supportSuspendDebuggee");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  Variant::operator=(pVVar7,(Variant *)local_88);
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_4c._0_1_);
  Variant::Variant((Variant *)local_a8,"supportsTerminateRequest");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,local_4c._1_1_);
  Variant::Variant((Variant *)local_a8,"supportsBreakpointLocationsRequest");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_b8);
  Variant::Variant((Variant *)local_88,(String *)&local_60);
  Array::push_back((Variant *)&local_b8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,(String *)&local_58);
  Array::push_back((Variant *)&local_b8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,(Array *)&local_b8);
  Variant::Variant((Variant *)local_a8,"supportedChecksumAlgorithms");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_b8);
  Variant::Variant((Variant *)local_88,local_c0);
  Variant::Variant((Variant *)local_a8,"body");
  pVVar7 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar7 != (Variant *)local_88) {
    if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar7 = 0;
    *(int *)pVVar7 = local_88[0];
    *(undefined8 *)(pVVar7 + 8) = local_80;
    *(undefined8 *)(pVVar7 + 0x10) = uStack_78;
    local_88[0] = 0;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar5 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar5 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_c0);
  DebugAdapterProtocol::notify_initialized();
  if (DebugAdapterProtocol::singleton[0x1a8] == (String)0x0) {
    EditorDebuggerNode::get_default_debugger();
    ScriptEditorDebugger::_clear_breakpoints();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    cVar5 = RefCounted::unreference();
  }
  else {
    local_d0 = (long *)0x0;
    ScriptEditor::get_breakpoints(ScriptEditor::script_editor);
    if ((local_d0 != (long *)0x0) && (plVar9 = (long *)*local_d0, plVar9 != (long *)0x0)) {
      do {
        local_c8 = 0;
        plVar1 = (long *)(*plVar9 + -0x10);
        if (*plVar9 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_001069d8;
            LOCK();
            lVar8 = *plVar1;
            bVar12 = lVar2 == lVar8;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar8 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar8 != -1) {
            local_c8 = *plVar9;
          }
        }
LAB_001069d8:
        wVar10 = (wchar32)(CowData<char32_t> *)&local_c8;
        String::find_char(wVar10,0x3a);
        String::left((int)local_c0);
        String::substr((int)(Array *)&local_b8,wVar10);
        local_dc = String::to_int();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        local_b8 = (char *)CONCAT71(local_b8._1_7_,1);
        DebugAdapterProtocol::on_debug_breakpoint_toggled
                  (DebugAdapterProtocol::singleton,(int *)local_c0,(bool *)&local_dc);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != (long *)0x0);
    }
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    cVar5 = RefCounted::unreference();
  }
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar11), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  Dictionary::~Dictionary((Dictionary *)local_d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_evaluate(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_evaluate(Dictionary *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
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
  String *pSVar36;
  char cVar37;
  uint uVar38;
  Variant *pVVar39;
  uint uVar40;
  uint uVar41;
  Variant *in_RDX;
  long lVar42;
  long lVar43;
  long *plVar44;
  ulong uVar45;
  long lVar46;
  uint *puVar47;
  uint uVar48;
  long in_FS_OFFSET;
  Variant local_b8 [8];
  Variant local_b0 [8];
  Dictionary local_a8 [8];
  Dictionary local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_b8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"expression");
  Dictionary::operator[](local_b8);
  Variant::operator_cast_to_String(local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"frameId");
  cVar37 = Dictionary::has(local_b8);
  if (cVar37 != '\0') {
    Variant::Variant((Variant *)local_58,"frameId");
    pVVar39 = (Variant *)Dictionary::operator[](local_b8);
    Variant::operator_cast_to_int(pVVar39);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar36 = DebugAdapterProtocol::singleton;
  if ((*(long *)(DebugAdapterProtocol::singleton + 0x298) != 0) &&
     (*(int *)(DebugAdapterProtocol::singleton + 700) != 0)) {
    uVar5 = *(uint *)(hash_table_size_primes +
                     (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x2b8) * 4);
    lVar6 = *(long *)(hash_table_size_primes_inv +
                     (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x2b8) * 8);
    uVar38 = String::hash();
    uVar45 = CONCAT44(0,uVar5);
    uVar40 = 1;
    if (uVar38 != 0) {
      uVar40 = uVar38;
    }
    lVar46 = *(long *)(pSVar36 + 0x2a0);
    uVar48 = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar40 * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar45;
    lVar42 = SUB168(auVar8 * auVar22,8);
    uVar38 = *(uint *)(lVar46 + lVar42 * 4);
    uVar41 = SUB164(auVar8 * auVar22,8);
    if (uVar38 != 0) {
      do {
        if (uVar40 == uVar38) {
          cVar37 = String::operator==((String *)
                                      (*(long *)(*(long *)(pSVar36 + 0x298) + lVar42 * 8) + 0x10),
                                      (String *)local_b0);
          if (cVar37 != '\0') {
            lVar6 = *(long *)(*(long *)(pSVar36 + 0x298) + (ulong)uVar41 * 8);
            if (lVar6 != 0) {
              prepare_success_response(local_a8);
              Dictionary::Dictionary(local_a0);
              Variant::Variant((Variant *)local_58,local_a0);
              Variant::Variant((Variant *)local_78,"body");
              pVVar39 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
              if (pVVar39 != (Variant *)local_58) {
                if (Variant::needs_deinit[*(int *)pVVar39] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar39 = 0;
                *(int *)pVVar39 = local_58[0];
                *(undefined8 *)(pVVar39 + 8) = local_50;
                *(undefined8 *)(pVVar39 + 0x10) = uStack_48;
                local_58[0] = 0;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_98 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(lVar6 + 0x18));
              local_90 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(lVar6 + 0x20));
              local_88 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(lVar6 + 0x28));
              local_80 = *(int *)(lVar6 + 0x30);
              Variant::Variant((Variant *)local_58,(String *)&local_90);
              Variant::Variant((Variant *)local_78,"result");
              pVVar39 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
              if (pVVar39 != (Variant *)local_58) {
                if (Variant::needs_deinit[*(int *)pVVar39] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar39 = 0;
                *(int *)pVVar39 = local_58[0];
                *(undefined8 *)(pVVar39 + 8) = local_50;
                *(undefined8 *)(pVVar39 + 0x10) = uStack_48;
                local_58[0] = 0;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)local_58,local_80);
              Variant::Variant((Variant *)local_78,"variablesReference");
              pVVar39 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
              if (pVVar39 != (Variant *)local_58) {
                if (Variant::needs_deinit[*(int *)pVVar39] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar39 = 0;
                *(int *)pVVar39 = local_58[0];
                *(undefined8 *)(pVVar39 + 8) = local_50;
                *(undefined8 *)(pVVar39 + 0x10) = uStack_48;
                local_58[0] = 0;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              pSVar36 = DebugAdapterProtocol::singleton;
              if ((*(long *)(DebugAdapterProtocol::singleton + 0x298) == 0) ||
                 (*(int *)(DebugAdapterProtocol::singleton + 700) == 0)) goto LAB_0010776f;
              uVar5 = *(uint *)(hash_table_size_primes +
                               (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x2b8) * 4);
              uVar45 = CONCAT44(0,uVar5);
              lVar46 = *(long *)(hash_table_size_primes_inv +
                                (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x2b8) * 8);
              uVar38 = String::hash();
              uVar40 = 1;
              if (uVar38 != 0) {
                uVar40 = uVar38;
              }
              lVar42 = *(long *)(pSVar36 + 0x2a0);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (ulong)uVar40 * lVar46;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = uVar45;
              lVar43 = SUB168(auVar12 * auVar26,8);
              uVar38 = *(uint *)(lVar42 + lVar43 * 4);
              uVar41 = SUB164(auVar12 * auVar26,8);
              if (uVar38 == 0) goto LAB_0010776f;
              uVar48 = 0;
              goto LAB_001075a7;
            }
            break;
          }
          lVar46 = *(long *)(pSVar36 + 0x2a0);
        }
        uVar48 = uVar48 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar41 + 1) * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar45;
        lVar42 = SUB168(auVar9 * auVar23,8);
        uVar38 = *(uint *)(lVar46 + lVar42 * 4);
        uVar41 = SUB164(auVar9 * auVar23,8);
        if ((uVar38 == 0) ||
           (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar38 * lVar6, auVar24._8_8_ = 0,
           auVar24._0_8_ = uVar45, auVar11._8_8_ = 0,
           auVar11._0_8_ = (ulong)((uVar5 + uVar41) - SUB164(auVar10 * auVar24,8)) * lVar6,
           auVar25._8_8_ = 0, auVar25._0_8_ = uVar45, SUB164(auVar11 * auVar25,8) < uVar48)) break;
      } while( true );
    }
  }
  DebugAdapterProtocol::request_remote_evaluate(DebugAdapterProtocol::singleton,(int)local_b0);
  Dictionary::Dictionary(param_1);
  goto LAB_001070fb;
  while( true ) {
    uVar48 = uVar48 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar41 + 1) * lVar46;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    lVar43 = SUB168(auVar13 * auVar27,8);
    uVar38 = *(uint *)(lVar42 + lVar43 * 4);
    uVar41 = SUB164(auVar13 * auVar27,8);
    if ((uVar38 == 0) ||
       (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar46, auVar28._8_8_ = 0,
       auVar28._0_8_ = uVar45, auVar15._8_8_ = 0,
       auVar15._0_8_ = (ulong)((uVar5 + uVar41) - SUB164(auVar14 * auVar28,8)) * lVar46,
       auVar29._8_8_ = 0, auVar29._0_8_ = uVar45, SUB164(auVar15 * auVar29,8) < uVar48)) break;
LAB_001075a7:
    if (uVar38 == uVar40) {
      cVar37 = String::operator==((String *)
                                  (*(long *)(*(long *)(pSVar36 + 0x298) + lVar43 * 8) + 0x10),
                                  (String *)(lVar6 + 0x10));
      if (cVar37 != '\0') {
        lVar6 = *(long *)(pSVar36 + 0x2a0);
        lVar46 = *(long *)(pSVar36 + 0x298);
        uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pSVar36 + 0x2b8) * 4);
        uVar45 = CONCAT44(0,uVar5);
        lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pSVar36 + 0x2b8) * 8);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)(uVar41 + 1) * lVar42;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar45;
        lVar43 = SUB168(auVar16 * auVar30,8);
        puVar47 = (uint *)(lVar6 + lVar43 * 4);
        uVar38 = SUB164(auVar16 * auVar30,8);
        uVar40 = *puVar47;
        if ((uVar40 == 0) ||
           (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar40 * lVar42, auVar31._8_8_ = 0,
           auVar31._0_8_ = uVar45, auVar18._8_8_ = 0,
           auVar18._0_8_ = (ulong)((uVar5 + uVar38) - SUB164(auVar17 * auVar31,8)) * lVar42,
           auVar32._8_8_ = 0, auVar32._0_8_ = uVar45, uVar48 = uVar41,
           SUB164(auVar18 * auVar32,8) == 0)) goto LAB_001076ce;
        goto LAB_00107685;
      }
      lVar42 = *(long *)(pSVar36 + 0x2a0);
    }
  }
  goto LAB_0010776f;
  while (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar40 * lVar42, auVar33._8_8_ = 0,
        auVar33._0_8_ = uVar45, auVar20._8_8_ = 0,
        auVar20._0_8_ = (ulong)((uVar38 + uVar5) - SUB164(auVar19 * auVar33,8)) * lVar42,
        auVar34._8_8_ = 0, auVar34._0_8_ = uVar45, uVar48 = uVar41, SUB164(auVar20 * auVar34,8) != 0
        ) {
LAB_00107685:
    uVar41 = uVar38;
    puVar4 = (uint *)(lVar6 + (ulong)uVar48 * 4);
    *puVar47 = *puVar4;
    puVar1 = (undefined8 *)(lVar46 + lVar43 * 8);
    *puVar4 = uVar40;
    puVar2 = (undefined8 *)(lVar46 + (ulong)uVar48 * 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(uVar41 + 1) * lVar42;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    lVar43 = SUB168(auVar21 * auVar35,8);
    puVar47 = (uint *)(lVar6 + lVar43 * 4);
    uVar38 = SUB164(auVar21 * auVar35,8);
    uVar40 = *puVar47;
    if (uVar40 == 0) break;
  }
LAB_001076ce:
  uVar45 = (ulong)uVar41;
  *(undefined4 *)(lVar6 + uVar45 * 4) = 0;
  plVar3 = (long *)(lVar46 + uVar45 * 8);
  plVar44 = (long *)*plVar3;
  if (*(long **)(pSVar36 + 0x2a8) == plVar44) {
    *(long *)(pSVar36 + 0x2a8) = *plVar44;
    plVar44 = (long *)*plVar3;
  }
  if (*(long **)(pSVar36 + 0x2b0) == plVar44) {
    *(long *)(pSVar36 + 0x2b0) = plVar44[1];
    plVar44 = (long *)*plVar3;
  }
  if ((long *)plVar44[1] != (long *)0x0) {
    *(long *)plVar44[1] = *plVar44;
    plVar44 = (long *)*plVar3;
  }
  if (*plVar44 != 0) {
    *(long *)(*plVar44 + 8) = plVar44[1];
    plVar44 = (long *)*plVar3;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar44 + 5));
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar44 + 4));
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar44 + 3));
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar44 + 2));
  Memory::free_static(plVar44,false);
  *(undefined8 *)(*(long *)(pSVar36 + 0x298) + uVar45 * 8) = 0;
  *(int *)(pSVar36 + 700) = *(int *)(pSVar36 + 700) + -1;
LAB_0010776f:
  Dictionary::Dictionary(param_1,local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Dictionary::~Dictionary(local_a0);
  Dictionary::~Dictionary(local_a8);
LAB_001070fb:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  Dictionary::~Dictionary((Dictionary *)local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DebugAdapterParser::req_setBreakpoints(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_setBreakpoints(Dictionary *param_1)

{
  Object OVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Variant *pVVar6;
  Variant *in_RDX;
  undefined8 in_RSI;
  wchar32 wVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  Dictionary local_d0 [8];
  Dictionary local_c8 [8];
  Variant local_c0 [8];
  CowData<char32_t> local_b8 [8];
  Variant local_b0 [8];
  Variant local_a8 [8];
  long local_a0;
  Array local_98 [8];
  long local_90;
  long alStack_88 [2];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_success_response(local_d0);
  Dictionary::Dictionary(local_c8);
  Variant::Variant((Variant *)local_58,local_c8);
  Variant::Variant((Variant *)local_78,"body");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d0);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_c0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_98);
  local_90 = 0;
  alStack_88[0] = 0;
  Variant::Variant((Variant *)local_78,"source");
  Dictionary::operator[](local_c0);
  Variant::operator_cast_to_Dictionary(local_a8);
  Variant::Variant((Variant *)local_58,"name");
  Dictionary::operator[](local_a8);
  Variant::operator_cast_to_String((Variant *)&local_a0);
  if (local_90 != local_a0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_90 = local_a0;
    local_a0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"path");
  Dictionary::operator[](local_a8);
  Variant::operator_cast_to_String((Variant *)&local_a0);
  if (alStack_88[0] != local_a0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)alStack_88);
    alStack_88[0] = local_a0;
    local_a0 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"checksums");
  Dictionary::operator[](local_a8);
  Variant::operator_cast_to_Array((Variant *)&local_a0);
  Array::operator=(local_98,(Array *)&local_a0);
  Array::~Array((Array *)&local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pOVar8 = *(Object **)(DebugAdapterProtocol::singleton + 0x1b8);
  if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar8 = (Object *)0x0;
  }
  OVar1 = pOVar8[0x4001b0];
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar8);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
  }
  wVar7 = (wchar32)(String *)alStack_88;
  iVar4 = String::find_char(wVar7,0x5c);
  iVar5 = (int)local_a8;
  if (iVar4 == -1) {
    ProjectSettings::get_singleton();
    ProjectSettings::get_resource_path();
    cVar3 = String::begins_with((String *)alStack_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (cVar3 != '\0') goto LAB_00107e89;
  }
  else {
    ProjectSettings::get_singleton();
    ProjectSettings::get_resource_path();
    String::replace((char *)&local_a0,(char *)alStack_88);
    iVar4 = String::findn((String *)&local_a0,iVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    if (iVar4 != -1) {
LAB_00107e89:
      iVar4 = String::find_char(wVar7,0x5c);
      if (iVar4 != -1) {
        String::replace((char *)&local_a0,(char *)alStack_88);
        if (alStack_88[0] != local_a0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)alStack_88);
          alStack_88[0] = local_a0;
          local_a0 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        String::substr(iVar5,wVar7);
        String::substr((int)local_b8,wVar7);
        String::to_upper();
        String::operator+((String *)&local_a0,(String *)local_b0);
        if (alStack_88[0] != local_a0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)alStack_88);
          alStack_88[0] = local_a0;
          local_a0 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        CowData<char32_t>::_unref(local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      }
      Variant::Variant((Variant *)local_58,"breakpoints");
      Dictionary::operator[](local_c0);
      Variant::operator_cast_to_Array(local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar4 = 0;
      Array::Array((Array *)local_a8);
      while( true ) {
        iVar5 = Array::size();
        if (iVar5 <= iVar4) break;
        Array::operator[]((int)local_b0);
        Variant::operator_cast_to_Dictionary((Variant *)&local_a0);
        Variant::Variant((Variant *)local_58,"line");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
        iVar5 = Variant::operator_cast_to_int(pVVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_a0);
        Variant::Variant((Variant *)local_58,(uint)((byte)OVar1 ^ 1) + iVar5);
        Array::push_back(local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar4 = iVar4 + 1;
      }
      DebugAdapterProtocol::update_breakpoints((String *)&local_a0,DebugAdapterProtocol::singleton);
      Variant::Variant((Variant *)local_58,(Array *)&local_a0);
      Variant::Variant((Variant *)local_78,"breakpoints");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_c8);
      Variant::operator=(pVVar6,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary(param_1,local_d0);
      Array::~Array((Array *)&local_a0);
      Array::~Array((Array *)local_a8);
      Array::~Array((Array *)local_b0);
      goto LAB_00107de6;
    }
  }
  Dictionary::Dictionary((Dictionary *)local_a8);
  Variant::Variant((Variant *)local_58,(String *)alStack_88);
  Variant::Variant((Variant *)local_78,"clientPath");
  pVVar6 = (Variant *)Dictionary::operator[](local_a8);
  Variant::operator=(pVVar6,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  ProjectSettings::get_singleton();
  ProjectSettings::get_resource_path();
  Variant::Variant((Variant *)local_58,(String *)&local_a0);
  Variant::Variant((Variant *)local_78,"editorPath");
  pVVar6 = (Variant *)Dictionary::operator[](local_a8);
  Variant::operator=(pVVar6,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  prepare_error_response(param_1,in_RSI);
  Dictionary::~Dictionary((Dictionary *)local_a8);
LAB_00107de6:
  CowData<char32_t>::_unref((CowData<char32_t> *)alStack_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Array::~Array(local_98);
  Dictionary::~Dictionary((Dictionary *)local_c0);
  Dictionary::~Dictionary(local_c8);
  Dictionary::~Dictionary(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_stackTrace(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_stackTrace(Dictionary *param_1)

{
  Object OVar1;
  Object OVar2;
  Object *pOVar3;
  char cVar4;
  Variant *pVVar5;
  long *plVar6;
  long in_FS_OFFSET;
  int iVar7;
  Dictionary local_d0 [8];
  Dictionary local_c8 [8];
  Array local_c0 [8];
  Dictionary local_b8 [8];
  Dictionary local_b0 [8];
  Object *local_a8;
  undefined8 local_a0;
  Array local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(DebugAdapterProtocol::singleton + 0x193) == '\0') {
    prepare_success_response(local_d0);
    Dictionary::Dictionary(local_c8);
    Variant::Variant((Variant *)local_58,local_c8);
    Variant::Variant((Variant *)local_78,"body");
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_d0);
    Variant::operator=(pVVar5,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_a8 = (Object *)0x0;
    Ref<DAPeer>::operator=
              ((Ref<DAPeer> *)&local_a8,*(Ref **)(DebugAdapterProtocol::singleton + 0x1b8));
    pOVar3 = local_a8;
    OVar1 = local_a8[0x4001b0];
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    local_a8 = (Object *)0x0;
    Ref<DAPeer>::operator=
              ((Ref<DAPeer> *)&local_a8,*(Ref **)(DebugAdapterProtocol::singleton + 0x1b8));
    pOVar3 = local_a8;
    OVar2 = local_a8[0x4001b1];
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    Array::Array(local_c0);
    plVar6 = *(long **)(DebugAdapterProtocol::singleton + 0x1f0);
    if (plVar6 != (long *)0x0) {
      do {
        local_a0 = 0;
        local_a8 = (Object *)CONCAT44(local_a8._4_4_,(int)plVar6[2]);
        if (plVar6[3] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(plVar6 + 3));
        }
        Array::Array(local_98,(Array *)(plVar6 + 4));
        local_90 = 0;
        if (plVar6[5] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(plVar6 + 5));
        }
        local_88 = 0;
        if (plVar6[6] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(plVar6 + 6));
        }
        local_80 = plVar6[7];
        iVar7 = (int)((ulong)local_80 >> 0x20);
        if (OVar1 == (Object)0x0) {
          local_80 = CONCAT44(iVar7,(int)local_80 + -1);
        }
        if (OVar2 == (Object)0x0) {
          local_80 = CONCAT44(iVar7 + -1,(int)local_80);
        }
        Dictionary::Dictionary(local_b8);
        Variant::Variant((Variant *)local_58,(int)local_a8);
        Variant::Variant((Variant *)local_78,"id");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] == '\0') {
          cVar4 = Variant::needs_deinit[local_58[0]];
        }
        else {
          Variant::_clear_internal();
          cVar4 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar4 != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(String *)&local_a0);
        Variant::Variant((Variant *)local_78,"name");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::Dictionary(local_b0);
        Variant::Variant((Variant *)local_78,(String *)&local_90);
        Variant::Variant((Variant *)local_58,"name");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
        if (pVVar5 != (Variant *)local_78) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_78[0];
          *(undefined8 *)(pVVar5 + 8) = local_70;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_68;
          local_78[0] = 0;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,(String *)&local_88);
        Variant::Variant((Variant *)local_58,"path");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
        if (pVVar5 != (Variant *)local_78) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_78[0];
          *(undefined8 *)(pVVar5 + 8) = local_70;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_68;
          local_78[0] = 0;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,local_98);
        Variant::Variant((Variant *)local_58,"checksums");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
        if (pVVar5 != (Variant *)local_78) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_78[0];
          *(undefined8 *)(pVVar5 + 8) = local_70;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_68;
          local_78[0] = 0;
        }
        if (Variant::needs_deinit[local_58[0]] == '\0') {
          cVar4 = Variant::needs_deinit[local_78[0]];
        }
        else {
          Variant::_clear_internal();
          cVar4 = Variant::needs_deinit[local_78[0]];
        }
        if (cVar4 != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_b0);
        Variant::Variant((Variant *)local_78,"source");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_b0);
        Variant::Variant((Variant *)local_58,(int)local_80);
        Variant::Variant((Variant *)local_78,"line");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_80._4_4_);
        Variant::Variant((Variant *)local_78,"column");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_b8);
        Array::push_back((Variant *)local_c0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        Array::~Array(local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    Variant::Variant((Variant *)local_58,local_c0);
    Variant::Variant((Variant *)local_78,"stackFrames");
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_c8);
    Variant::operator=(pVVar5,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::Dictionary(param_1,local_d0);
    Array::~Array(local_c0);
    Dictionary::~Dictionary(local_c8);
    Dictionary::~Dictionary(local_d0);
  }
  else {
    Dictionary::Dictionary(param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::req_scopes(Dictionary const&) const */

Dictionary * DebugAdapterParser::req_scopes(Dictionary *param_1)

{
  StrRange *this;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  uint uVar13;
  Variant *pVVar14;
  int *piVar15;
  uint uVar16;
  Variant *in_RDX;
  long lVar17;
  undefined8 in_RSI;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long in_FS_OFFSET;
  Dictionary local_f8 [8];
  Dictionary local_f0 [8];
  Variant local_e8 [8];
  Array local_e0 [8];
  char *local_d8;
  undefined8 local_d0;
  StrRange local_c8 [16];
  int local_b8;
  bool local_b4;
  int local_a8;
  undefined8 local_a0;
  Array local_98 [8];
  CowData<char32_t> local_90 [16];
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prepare_success_response(local_f8);
  Dictionary::Dictionary(local_f0);
  Variant::Variant((Variant *)local_58,local_f0);
  Variant::Variant((Variant *)local_78,"body");
  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_f8);
  if (pVVar14 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar14 = 0;
    *(int *)pVVar14 = local_58[0];
    *(undefined8 *)(pVVar14 + 8) = local_50;
    *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"arguments");
  Dictionary::operator[](in_RDX);
  Variant::operator_cast_to_Dictionary(local_e8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"frameId");
  pVVar14 = (Variant *)Dictionary::operator[](local_e8);
  iVar12 = Variant::operator_cast_to_int(pVVar14);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_e0);
  local_a8 = 0;
  local_a0 = 0;
  Array::Array(local_98);
  local_80 = 0;
  lVar1 = *(long *)(DebugAdapterProtocol::singleton + 0x1e0);
  local_90[0] = (CowData<char32_t>)0x0;
  local_90[1] = (CowData<char32_t>)0x0;
  local_90[2] = (CowData<char32_t>)0x0;
  local_90[3] = (CowData<char32_t>)0x0;
  local_90[4] = (CowData<char32_t>)0x0;
  local_90[5] = (CowData<char32_t>)0x0;
  local_90[6] = (CowData<char32_t>)0x0;
  local_90[7] = (CowData<char32_t>)0x0;
  local_90[8] = (CowData<char32_t>)0x0;
  local_90[9] = (CowData<char32_t>)0x0;
  local_90[10] = (CowData<char32_t>)0x0;
  local_90[0xb] = (CowData<char32_t>)0x0;
  local_90[0xc] = (CowData<char32_t>)0x0;
  local_90[0xd] = (CowData<char32_t>)0x0;
  local_90[0xe] = (CowData<char32_t>)0x0;
  local_90[0xf] = (CowData<char32_t>)0x0;
  local_a8 = iVar12;
  if ((lVar1 != 0) && (*(int *)(DebugAdapterProtocol::singleton + 0x204) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                 (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x200) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv +
                     (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x200) * 8);
    uVar13 = (iVar12 * 0x16a88000 | (uint)(iVar12 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar20 = (ulong)uVar13;
    if (uVar13 == 0) {
      uVar20 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20 * lVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar13 = *(uint *)(*(long *)(DebugAdapterProtocol::singleton + 0x1e8) + lVar17 * 4);
    uVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar13 != 0) {
      uVar19 = 0;
      while (((uint)uVar20 != uVar13 || (iVar12 != *(int *)(*(long *)(lVar1 + lVar17 * 8) + 0x10))))
      {
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar13 = *(uint *)(*(long *)(DebugAdapterProtocol::singleton + 0x1e8) + lVar17 * 4);
        uVar16 = SUB164(auVar5 * auVar9,8);
        if ((uVar13 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar13 * lVar2, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(DebugAdapterProtocol::singleton + 0x200
                                                            ) * 4) + uVar16) -
                                 SUB164(auVar6 * auVar10,8)) * lVar2, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar18, SUB164(auVar7 * auVar11,8) < uVar19)) goto LAB_001093d2;
      }
      lVar1 = *(long *)(lVar1 + (ulong)uVar16 * 8);
      if (lVar1 != 0) {
        puVar3 = *(undefined8 **)(lVar1 + 0x40);
        if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 2) != 3)) {
          _err_print_error("req_scopes","editor/debugger/debug_adapter/debug_adapter_parser.cpp",
                           0x19a,
                           "Condition \"E->value.size() != 3\" is true. Returning: prepare_error_response(p_params, DAP::ErrorType::UNKNOWN)"
                           ,0,0);
          Dictionary::Dictionary((Dictionary *)local_c8);
          prepare_error_response(param_1,in_RSI,in_RDX,0,(Dictionary *)local_c8);
          Dictionary::~Dictionary((Dictionary *)local_c8);
          goto LAB_0010949a;
        }
        piVar15 = (int *)*puVar3;
        iVar21 = 0;
        this = local_c8 + 8;
        goto LAB_001090c1;
      }
    }
  }
LAB_001093d2:
  piVar15 = (int *)EditorDebuggerNode::get_default_debugger();
  ScriptEditorDebugger::request_stack_dump(piVar15);
  *(int *)(DebugAdapterProtocol::singleton + 0x198) = iVar12;
  Variant::Variant((Variant *)local_58,local_e0);
  Variant::Variant((Variant *)local_78,"scopes");
  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
  if (pVVar14 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar14 = 0;
    *(int *)pVVar14 = local_58[0];
    *(undefined8 *)(pVVar14 + 8) = local_50;
    *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(param_1,local_f8);
LAB_0010949a:
  CowData<char32_t>::_unref(local_90 + 8);
  CowData<char32_t>::_unref(local_90);
  Array::~Array(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  Array::~Array(local_e0);
  Dictionary::~Dictionary((Dictionary *)local_e8);
  Dictionary::~Dictionary(local_f0);
  Dictionary::~Dictionary(local_f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_001090c1:
  local_b8 = *piVar15;
  local_b4 = false;
  local_c8[0] = (StrRange)0x0;
  local_c8[1] = (StrRange)0x0;
  local_c8[2] = (StrRange)0x0;
  local_c8[3] = (StrRange)0x0;
  local_c8[4] = (StrRange)0x0;
  local_c8[5] = (StrRange)0x0;
  local_c8[6] = (StrRange)0x0;
  local_c8[7] = (StrRange)0x0;
  local_c8[8] = (StrRange)0x0;
  local_c8[9] = (StrRange)0x0;
  local_c8[10] = (StrRange)0x0;
  local_c8[0xb] = (StrRange)0x0;
  local_c8[0xc] = (StrRange)0x0;
  local_c8[0xd] = (StrRange)0x0;
  local_c8[0xe] = (StrRange)0x0;
  local_c8[0xf] = (StrRange)0x0;
  if (iVar21 == 1) {
    local_d0 = 7;
    local_d8 = "Members";
    String::parse_latin1(local_c8);
    local_d8 = "members";
LAB_00109557:
    local_d0 = 7;
    String::parse_latin1(this);
  }
  else {
    if (iVar21 == 2) {
      local_d0 = 7;
      local_d8 = "Globals";
      String::parse_latin1(local_c8);
      local_d8 = "globals";
      goto LAB_00109557;
    }
    local_d0 = 6;
    local_d8 = "Locals";
    String::parse_latin1(local_c8);
    local_d8 = "locals";
    local_d0 = 6;
    String::parse_latin1(this);
  }
  Dictionary::Dictionary((Dictionary *)&local_d8);
  Variant::Variant((Variant *)local_58,(String *)local_c8);
  Variant::Variant((Variant *)local_78,"name");
  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_d8);
  if (pVVar14 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar14 = 0;
    *(int *)pVVar14 = local_58[0];
    *(undefined8 *)(pVVar14 + 8) = local_50;
    *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(String *)this);
  Variant::Variant((Variant *)local_78,"presentationHint");
  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_d8);
  if (pVVar14 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar14 = 0;
    *(int *)pVVar14 = local_58[0];
    *(undefined8 *)(pVVar14 + 8) = local_50;
    *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_b8);
  Variant::Variant((Variant *)local_78,"variablesReference");
  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_d8);
  if (pVVar14 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar14 = 0;
    *(int *)pVVar14 = local_58[0];
    *(undefined8 *)(pVVar14 + 8) = local_50;
    *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_b4);
  Variant::Variant((Variant *)local_78,"expensive");
  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_d8);
  if (pVVar14 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar14 = 0;
    *(int *)pVVar14 = local_58[0];
    *(undefined8 *)(pVVar14 + 8) = local_50;
    *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Dictionary *)&local_d8);
  Array::push_back((Variant *)local_e0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar21 = iVar21 + 1;
  Dictionary::~Dictionary((Dictionary *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  if (iVar21 == 3) goto LAB_001093d2;
  piVar15 = *(int **)(piVar15 + 2);
  goto LAB_001090c1;
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, Dictionary (DebugAdapterParser::*)(Dictionary
   const&) const>(MethodDefinition, Dictionary (DebugAdapterParser::*)(Dictionary const&) const)
   [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
          (MethodDefinition *param_1,_func_Dictionary_Dictionary_ptr *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<DebugAdapterParser,Dictionary,Dictionary_const&>(param_2);
  ClassDB::bind_methodfi(1,pMVar2,false,param_1,(Variant **)0x0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::_bind_methods() */

void DebugAdapterParser::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "params";
  uVar4 = (uint)local_58;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_initialize",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_initialize,0);
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_disconnect",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_disconnect,0);
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_launch",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_launch,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_attach",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_attach,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_restart",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_restart,0);
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_terminate",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_terminate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_configurationDone",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_configurationDone,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_pause",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_pause,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_continue",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_continue,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_threads",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_threads,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_stackTrace",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_stackTrace,0);
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_setBreakpoints",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_setBreakpoints,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_breakpointLocations",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_breakpointLocations,0);
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_scopes",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_scopes,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_variables",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_variables,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_next",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_next,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_stepIn",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_stepIn,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_evaluate",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_evaluate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
  local_68 = "params";
  local_60 = 0;
  local_58[0] = &local_68;
  D_METHODP((char *)local_88,(char ***)"req_godot/put_msg",uVar4);
  ClassDB::bind_method<MethodDefinition,Dictionary(DebugAdapterParser::*)(Dictionary_const&)const>
            ((MethodDefinition *)local_88,req_godot_put_msg,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_88);
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



/* MethodBindTRC<Dictionary, Dictionary const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary,Dictionary_const&>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary, Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary,Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Dictionary, Dictionary const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,Dictionary_const&>::~MethodBindTRC
          (MethodBindTRC<Dictionary,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c350;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary, Dictionary const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,Dictionary_const&>::~MethodBindTRC
          (MethodBindTRC<Dictionary,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c350;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* DebugAdapterParser::req_disconnect(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_disconnect(Dictionary *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_attach(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_attach(Dictionary *param_1)

{
  code *pcVar1;
  
  DAT_004001b5 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_variables(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_variables(Dictionary *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::_launch_process(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::_launch_process(Dictionary *param_1)

{
  code *pcVar1;
  
  DAT_004001b5 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_restart(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_restart(Dictionary *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_configurationDone(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_configurationDone(Dictionary *param_1)

{
  code *pcVar1;
  
  _launch_process((Dictionary *)&stack0x00000010);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_initialize(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_initialize(Dictionary *param_1)

{
  code *pcVar1;
  Variant *unaff_R12;
  Variant *in_stack_00000008;
  
  Variant::Variant((Variant *)&stack0x00000090,false);
  Variant::Variant((Variant *)&stack0x00000070,"linesStartAt1");
  Dictionary::get(unaff_R12,in_stack_00000008);
  Variant::operator_cast_to_bool(unaff_R12);
  DAT_004001b0 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::req_setBreakpoints(Dictionary const&) const [clone .cold] */

void DebugAdapterParser::req_setBreakpoints(Dictionary *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DebugAdapterParser::_bind_methods() [clone .cold] */

void DebugAdapterParser::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
        if (pvVar5 == (void *)0x0) goto LAB_0010ad34;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010ad34:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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



/* MethodBind* create_method_bind<DebugAdapterParser, Dictionary, Dictionary const&>(Dictionary
   (DebugAdapterParser::*)(Dictionary const&) const) */

MethodBind *
create_method_bind<DebugAdapterParser,Dictionary,Dictionary_const&>
          (_func_Dictionary_Dictionary_ptr *param_1)

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
  *(_func_Dictionary_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c350;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "DebugAdapterParser";
  local_30 = 0x12;
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



/* WARNING: Removing unreachable block (ram,0x0010b1d8) */
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



/* MethodBindTRC<Dictionary, Dictionary const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Dictionary,Dictionary_const&>::validated_call
          (MethodBindTRC<Dictionary,Dictionary_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b4f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b4f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary,Dictionary_const&>::ptrcall
          (MethodBindTRC<Dictionary,Dictionary_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b6db;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b6db:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, Dictionary const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Dictionary,Dictionary_const&>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC163,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ba80;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010bad0;
LAB_0010bac0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010bad0:
        uVar6 = 4;
        goto LAB_0010ba75;
      }
      if (in_R8D == 1) goto LAB_0010bac0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC168;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_68);
    (*(code *)pVVar11)((Dictionary *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_70);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_70);
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_0010ba75:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010ba80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<Dictionary const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Dictionary_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_78 = &_LC129;
    local_90 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1b);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
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
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary,Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Dictionary_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010bff8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC129;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x1b;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010c0df:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010c0df;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010bff8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebugAdapterParser::_bind_methods() */

void DebugAdapterParser::_GLOBAL__sub_I__bind_methods(void)

{
  undefined8 uStack_18;
  
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
  if (EditorExport::_export_presets_runnable_updated != '\0') {
    return;
  }
  EditorExport::_export_presets_runnable_updated = 1;
  EditorExport::_export_presets_runnable_updated = 0;
  __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,&__dso_handle
               ,uStack_18);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* MethodBindTRC<Dictionary, Dictionary const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,Dictionary_const&>::~MethodBindTRC
          (MethodBindTRC<Dictionary,Dictionary_const&> *this)

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


