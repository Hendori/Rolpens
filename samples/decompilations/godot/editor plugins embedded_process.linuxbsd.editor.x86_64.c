
/* EmbeddedProcess::_draw() [clone .part.0] */

void __thiscall EmbeddedProcess::_draw(EmbeddedProcess *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Control::has_focus();
  if ((cVar1 != '\0') && (*(long *)(this + 0xa28) != 0)) {
    local_20 = Control::get_size();
    local_28 = 0;
    (**(code **)(**(long **)(this + 0xa28) + 0x1d8))
              (*(long **)(this + 0xa28),*(undefined8 *)(this + 0x428),&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* EmbeddedProcess::set_window_size(Vector2i) */

void __thiscall EmbeddedProcess::set_window_size(EmbeddedProcess *this,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = param_2;
  cVar1 = Vector2i::operator!=((Vector2i *)(this + 0xa20),(Vector2i *)&local_10);
  if (cVar1 != '\0') {
    this[0x9f8] = (EmbeddedProcess)0x1;
    *(undefined8 *)(this + 0xa20) = local_10;
  }
  return;
}



/* EmbeddedProcess::set_keep_aspect(bool) */

void __thiscall EmbeddedProcess::set_keep_aspect(EmbeddedProcess *this,bool param_1)

{
  if (this[0xa1c] != (EmbeddedProcess)param_1) {
    this[0xa1c] = (EmbeddedProcess)param_1;
    this[0x9f8] = (EmbeddedProcess)0x1;
  }
  return;
}



/* EmbeddedProcess::get_adjusted_embedded_window_rect(Rect2i) */

undefined8
EmbeddedProcess::get_adjusted_embedded_window_rect
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int iStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_2;
  local_70 = param_3;
  local_58 = Vector2i::operator+((Vector2i *)(param_1 + 0xa30),(Vector2i *)(param_1 + 0xa38));
  local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
  local_60 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
  lVar3 = Vector2i::operator-((Vector2i *)&local_70,(Vector2i *)&local_60);
  iVar2 = (int)((ulong)lVar3 >> 0x20);
  iStack_4c = 1;
  if (iVar2 != 0 && -1 < lVar3) {
    iStack_4c = iVar2;
  }
  iVar2 = 1;
  if (0 < (int)lVar3) {
    iVar2 = (int)lVar3;
  }
  local_58 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)(param_1 + 0xa30));
  local_50 = iVar2;
  if (*(long *)(param_1 + 0xa00) != 0) {
    local_60 = Window::get_position();
    Vector2i::operator+=((Vector2i *)&local_58,(Vector2i *)&local_60);
  }
  local_60 = 0;
  cVar1 = Vector2i::operator!=((Vector2i *)(param_1 + 0xa20),(Vector2i *)&local_60);
  uVar4 = local_58;
  if (cVar1 != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0xa20);
    if (((*(char *)(param_1 + 0xa1c) != '\0') || (local_50 < (int)uVar4)) ||
       (iStack_4c < (int)((ulong)uVar4 >> 0x20))) {
      fVar6 = (float)iStack_4c / (float)*(int *)(param_1 + 0xa24);
      fVar7 = (float)local_50 / (float)*(int *)(param_1 + 0xa20);
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      iVar2 = (int)((float)*(int *)(param_1 + 0xa20) * fVar7);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      iVar5 = (int)((float)*(int *)(param_1 + 0xa24) * fVar7);
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      uVar4 = CONCAT44(iVar5,iVar2);
    }
    iVar2 = local_50 - (int)uVar4;
    iVar5 = iStack_4c - (int)((ulong)uVar4 >> 0x20);
    uVar4 = CONCAT44(((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) + (int)((ulong)local_58 >> 0x20),
                     ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + (int)local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* EmbeddedProcess::get_screen_embedded_window_rect() */

void EmbeddedProcess::get_screen_embedded_window_rect(void)

{
  long in_FS_OFFSET;
  undefined8 local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = Control::get_global_rect();
  Rect2::operator_cast_to_Rect2i((Rect2 *)local_28);
  get_adjusted_embedded_window_rect();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::get_margin_size(Side) const */

undefined4 __thiscall EmbeddedProcess::get_margin_size(EmbeddedProcess *this,uint param_2)

{
  if (3 < param_2) {
    _err_print_index_error
              ("get_margin_size","editor/plugins/embedded_process.cpp",0x7d,(long)(int)param_2,4,
               "(int)p_side","4","",false,false);
    return 0;
  }
  if (param_2 == 2) {
    return *(undefined4 *)(this + 0xa38);
  }
  if (param_2 == 3) {
    return *(undefined4 *)(this + 0xa3c);
  }
  if (param_2 != 1) {
    return *(undefined4 *)(this + 0xa30);
  }
  return *(undefined4 *)(this + 0xa34);
}



/* EmbeddedProcess::get_margins_size() */

void __thiscall EmbeddedProcess::get_margins_size(EmbeddedProcess *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = Vector2i::operator+((Vector2i *)(this + 0xa30),(Vector2i *)(this + 0xa38));
  Vector2i::operator_cast_to_Vector2((Vector2i *)&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::is_embedding_in_progress() */

uint EmbeddedProcess::is_embedding_in_progress(void)

{
  uint uVar1;
  
  uVar1 = Timer::is_stopped();
  return uVar1 ^ 1;
}



/* EmbeddedProcess::is_embedding_completed() */

EmbeddedProcess __thiscall EmbeddedProcess::is_embedding_completed(EmbeddedProcess *this)

{
  return this[0x9e9];
}



/* EmbeddedProcess::get_embedded_pid() const */

undefined4 __thiscall EmbeddedProcess::get_embedded_pid(EmbeddedProcess *this)

{
  return *(undefined4 *)(this + 0x9e0);
}



/* EmbeddedProcess::reset() */

void __thiscall EmbeddedProcess::reset(EmbeddedProcess *this)

{
  if ((*(long *)(this + 0x9e0) != 0) && (this[0x9e9] != (EmbeddedProcess)0x0)) {
    (**(code **)(*DisplayServer::singleton + 0x6b0))();
  }
  *(undefined8 *)(this + 0x9e0) = 0;
  *(undefined2 *)(this + 0x9e8) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  Timer::stop();
  Timer::stop();
  Node::set_process(SUB81(this,0));
  CanvasItem::set_notify_transform(SUB81(this,0));
  CanvasItem::queue_redraw();
  return;
}



/* EmbeddedProcess::~EmbeddedProcess() */

void __thiscall EmbeddedProcess::~EmbeddedProcess(EmbeddedProcess *this)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00105d80;
  if (*(long *)(this + 0x9e0) != 0) {
    plVar3 = (long *)OS::get_singleton();
    (**(code **)(*plVar3 + 0x128))(plVar3);
    reset(this);
  }
  if (*(long *)(this + 0xa28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Control::~Control((Control *)this);
        return;
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* EmbeddedProcess::~EmbeddedProcess() */

void __thiscall EmbeddedProcess::~EmbeddedProcess(EmbeddedProcess *this)

{
  ~EmbeddedProcess(this);
  operator_delete(this,0xa50);
  return;
}



/* EmbeddedProcess::request_close() */

void __thiscall EmbeddedProcess::request_close(EmbeddedProcess *this)

{
  if ((*(long *)(this + 0x9e0) != 0) && (this[0x9e9] != (EmbeddedProcess)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001007c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DisplayServer::singleton + 0x6a8))();
    return;
  }
  return;
}



/* EmbeddedProcess::_try_embed_process() */

void EmbeddedProcess::_try_embed_process(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined1 uVar9;
  EmbeddedProcess *in_RDI;
  undefined1 *puVar10;
  EmbeddedProcess EVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_50._8_8_ = local_50._0_8_;
  EVar11 = (EmbeddedProcess)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = CanvasItem::is_visible_in_tree();
  plVar3 = DisplayServer::singleton;
  pcVar1 = *(code **)(*DisplayServer::singleton + 0x6a0);
  if ((cVar4 != '\0') && (in_RDI[0x9c8] != (EmbeddedProcess)0x0)) {
    EVar11 = in_RDI[0x9e8];
  }
  local_58 = Control::get_global_rect();
  Rect2::operator_cast_to_Rect2i((Rect2 *)&local_58);
  auVar12 = get_adjusted_embedded_window_rect();
  local_58 = auVar12._0_8_;
  local_50._0_8_ = auVar12._8_8_;
  uVar2 = *(undefined8 *)(in_RDI + 0x9e0);
  uVar5 = (**(code **)(**(long **)(in_RDI + 0xa00) + 0x1e0))();
  iVar6 = (*pcVar1)(plVar3,uVar5,uVar2,(Rect2 *)&local_58,cVar4,EVar11);
  if (iVar6 == 0) {
    in_RDI[0x9e9] = (EmbeddedProcess)0x1;
    CanvasItem::queue_redraw();
    if (_try_embed_process()::{lambda()#1}::operator()()::sname == '\0') {
      puVar10 = &_try_embed_process()::{lambda()#1}::operator()()::sname;
      pcVar8 = (char *)&_try_embed_process()::{lambda()#1}::operator()()::sname;
      iVar6 = __cxa_guard_acquire(&_try_embed_process()::{lambda()#1}::operator()()::sname);
      uVar9 = 0x9e;
      if (iVar6 != 0) {
LAB_001009ef:
        _scs_create(pcVar8,(bool)uVar9);
        __cxa_atexit(StringName::~StringName,pcVar8,&__dso_handle);
        __cxa_guard_release(puVar10);
      }
    }
  }
  else if (iVar6 == 0x21) {
    OS::get_singleton();
    lVar7 = OS::get_ticks_msec();
    if ((ulong)(lVar7 - *(long *)(in_RDI + 0x9f0)) < (ulong)(long)*(int *)(in_RDI + 0xa18)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Timer::start(_LC24);
        return;
      }
      goto LAB_00100a9d;
    }
    reset(in_RDI);
    if (_try_embed_process()::{lambda()#2}::operator()()::sname == '\0') {
      puVar10 = &_try_embed_process()::{lambda()#2}::operator()()::sname;
      pcVar8 = (char *)&_try_embed_process()::{lambda()#2}::operator()()::sname;
      iVar6 = __cxa_guard_acquire(&_try_embed_process()::{lambda()#2}::operator()()::sname);
      goto joined_r0x00100a56;
    }
  }
  else {
    reset(in_RDI);
    if (_try_embed_process()::{lambda()#3}::operator()()::sname == '\0') {
      puVar10 = &_try_embed_process()::{lambda()#3}::operator()()::sname;
      pcVar8 = (char *)&_try_embed_process()::{lambda()#3}::operator()()::sname;
      iVar6 = __cxa_guard_acquire(&_try_embed_process()::{lambda()#3}::operator()()::sname);
joined_r0x00100a56:
      if (iVar6 != 0) {
        uVar9 = 0xb2;
        goto LAB_001009ef;
      }
    }
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)in_RDI + 0xd0))();
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a9d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::embed_process(long) */

void __thiscall EmbeddedProcess::embed_process(EmbeddedProcess *this,long param_1)

{
  double dVar1;
  char cVar2;
  EmbeddedProcess EVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (*(long *)(this + 0xa00) == 0) {
    return;
  }
  cVar2 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
  if (cVar2 != '\0') {
    if (*(long *)(this + 0x9e0) != 0) {
      plVar5 = (long *)OS::get_singleton();
      (**(code **)(*plVar5 + 0x128))(plVar5,this + 0x9e0);
    }
    reset(this);
    *(long *)(this + 0x9e0) = param_1;
    OS::get_singleton();
    uVar4 = OS::get_ticks_msec();
    *(undefined8 *)(this + 0x9f0) = uVar4;
    EVar3 = (EmbeddedProcess)Control::has_focus();
    dVar1 = _LC24;
    this[0x9e8] = EVar3;
    Timer::start(dVar1);
    Node::set_process(SUB81(this,0));
    CanvasItem::set_notify_transform(SUB81(this,0));
    _try_embed_process();
    return;
  }
  _err_print_error("embed_process","editor/plugins/embedded_process.cpp",0xa2,
                   "Condition \"!DisplayServer::get_singleton()->has_feature(DisplayServer::FEATURE_WINDOW_EMBEDDING)\" is true."
                   ,"Embedded process not supported by this display server.",0,0);
  return;
}



/* EmbeddedProcess::_timer_embedding_timeout() */

void EmbeddedProcess::_timer_embedding_timeout(void)

{
  _try_embed_process();
  return;
}



/* EmbeddedProcess::_is_embedded_process_updatable() */

EmbeddedProcess __thiscall EmbeddedProcess::_is_embedded_process_updatable(EmbeddedProcess *this)

{
  EmbeddedProcess EVar1;
  
  EVar1 = (EmbeddedProcess)0x0;
  if ((*(long *)(this + 0xa00) != 0) && (*(long *)(this + 0x9e0) != 0)) {
    EVar1 = this[0x9e9];
  }
  return EVar1;
}



/* EmbeddedProcess::queue_update_embedded_process() */

void __thiscall EmbeddedProcess::queue_update_embedded_process(EmbeddedProcess *this)

{
  this[0x9f8] = (EmbeddedProcess)0x1;
  return;
}



/* EmbeddedProcess::_update_embedded_process() */

void EmbeddedProcess::_update_embedded_process(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *in_RDI;
  char cVar8;
  long in_FS_OFFSET;
  undefined1 auVar9 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((in_RDI[0x140] != 0) && (in_RDI[0x13c] != 0)) && (*(char *)((long)in_RDI + 0x9e9) != '\0')) {
    cVar4 = Control::has_focus();
    cVar8 = '\0';
    if (cVar4 != *(char *)((long)in_RDI + 0x9f9)) {
      *(char *)((long)in_RDI + 0x9f9) = cVar4;
      cVar8 = cVar4;
    }
    plVar3 = DisplayServer::singleton;
    pcVar1 = *(code **)(*DisplayServer::singleton + 0x6a0);
    uVar5 = CanvasItem::is_visible_in_tree();
    local_58 = Control::get_global_rect();
    Rect2::operator_cast_to_Rect2i((Rect2 *)&local_58);
    auVar9 = get_adjusted_embedded_window_rect();
    local_58 = auVar9._0_8_;
    lVar2 = in_RDI[0x13c];
    local_50._0_8_ = auVar9._8_8_;
    uVar6 = (**(code **)(*(long *)in_RDI[0x140] + 0x1e0))();
    (*pcVar1)(plVar3,uVar6,lVar2,(Rect2 *)&local_58,uVar5,cVar8);
    if (_update_embedded_process()::{lambda()#1}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_update_embedded_process()::{lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_update_embedded_process()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_embedded_process()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_embedded_process()::{lambda()#1}::operator()()::sname);
      }
    }
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    (**(code **)(*in_RDI + 0xd0))();
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::_notification(int) */

void __thiscall EmbeddedProcess::_notification(EmbeddedProcess *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  Object *pOVar5;
  undefined8 uVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x2e) {
    if (9 < param_1) {
      switch(param_1) {
      case 10:
        uVar6 = Node::get_window();
        *(undefined8 *)(this + 0xa00) = uVar6;
        break;
      case 0x11:
        if (this[0x9f8] != (EmbeddedProcess)0x0) {
          this[0x9f8] = (EmbeddedProcess)0x0;
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            _update_embedded_process();
            return;
          }
          goto LAB_00101204;
        }
        break;
      case 0x1e:
        if (*(long *)(this + 0x9e0) == *(long *)(this + 0x9d8)) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            _draw(this);
            return;
          }
          goto LAB_00101204;
        }
        break;
      case 0x1f:
      case 0x28:
      case 0x2b:
switchD_00100e21_caseD_1f:
        this[0x9f8] = (EmbeddedProcess)0x1;
        break;
      case 0x2d:
        if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
           iVar4 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
        Control::get_theme_stylebox((StringName *)&local_38,(StringName *)this);
        pOVar5 = *(Object **)(this + 0xa28);
        pOVar7 = pOVar5;
        if (local_38 == pOVar5) {
LAB_00100eff:
          if (((pOVar7 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
             (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
          if (*(long *)(this + 0xa28) != 0) {
            pOVar5 = (Object *)
                     __dynamic_cast(*(long *)(this + 0xa28),&Object::typeinfo,
                                    &StyleBoxFlat::typeinfo,0);
            if ((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
              if (*(long *)(this + 0xa28) == 0) goto LAB_00101139;
              fVar8 = (float)StyleBox::get_margin(*(long *)(this + 0xa28),1);
              fVar9 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xa28),0);
              *(ulong *)(this + 0xa30) = CONCAT44((int)fVar8,(int)fVar9);
              fVar8 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xa28),3);
              fVar9 = (float)StyleBox::get_margin(*(undefined8 *)(this + 0xa28),2);
              *(ulong *)(this + 0xa38) = CONCAT44((int)fVar8,(int)fVar9);
            }
            else {
              uVar2 = StyleBoxFlat::get_border_width(pOVar5,1);
              uVar3 = StyleBoxFlat::get_border_width(pOVar5,0);
              *(undefined4 *)(this + 0xa34) = uVar2;
              *(undefined4 *)(this + 0xa30) = uVar3;
              uVar2 = StyleBoxFlat::get_border_width(pOVar5,3);
              uVar3 = StyleBoxFlat::get_border_width(pOVar5);
              *(undefined4 *)(this + 0xa3c) = uVar2;
              *(undefined4 *)(this + 0xa38) = uVar3;
              cVar1 = RefCounted::unreference();
              if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                  Memory::free_static(pOVar5,false);
                  return;
                }
                goto LAB_00101204;
              }
            }
            break;
          }
        }
        else {
          *(Object **)(this + 0xa28) = local_38;
          if (local_38 != (Object *)0x0) {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
              *(undefined8 *)(this + 0xa28) = 0;
            }
            pOVar7 = local_38;
            if (pOVar5 != (Object *)0x0) goto LAB_00100eeb;
            goto LAB_00100eff;
          }
          if (pOVar5 != (Object *)0x0) {
LAB_00100eeb:
            cVar1 = RefCounted::unreference();
            pOVar7 = local_38;
            if ((cVar1 != '\0') &&
               (cVar1 = predelete_handler(pOVar5), pOVar7 = local_38, cVar1 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
              pOVar7 = local_38;
            }
            goto LAB_00100eff;
          }
        }
LAB_00101139:
        *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
      }
    }
  }
  else if (param_1 == 0x7e0) {
    this[0x9c8] = (EmbeddedProcess)0x1;
    OS::get_singleton();
    uVar6 = OS::get_ticks_msec();
    *(undefined8 *)(this + 0x9d0) = uVar6;
  }
  else if (param_1 == 0x7e1) {
    this[0x9c8] = (EmbeddedProcess)0x0;
  }
  else if (param_1 == 0x3f4) goto switchD_00100e21_caseD_1f;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101204:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::_draw() */

void __thiscall EmbeddedProcess::_draw(EmbeddedProcess *this)

{
  if (*(long *)(this + 0x9d8) != *(long *)(this + 0x9e0)) {
    return;
  }
  _draw(this);
  return;
}



/* EmbeddedProcess::_get_current_modal_window() */

long EmbeddedProcess::_get_current_modal_window(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  int *local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*DisplayServer::singleton + 0x490))(auStack_38);
  CowData<int>::_copy_on_write((CowData<int> *)local_30);
  piVar4 = local_30[0];
  CowData<int>::_copy_on_write((CowData<int> *)local_30);
  if (local_30[0] == (int *)0x0) {
    piVar5 = (int *)0x0;
    if (piVar4 == (int *)0x0) {
      lVar3 = 0;
      goto LAB_001012d9;
    }
LAB_001012a0:
    do {
      lVar3 = Window::get_from_id(*piVar4);
      if ((lVar3 != 0) && (cVar2 = Window::is_exclusive(), cVar2 != '\0')) goto LAB_001012c7;
      piVar4 = piVar4 + 1;
    } while (piVar5 != piVar4);
    lVar3 = 0;
LAB_001012c7:
    if (local_30[0] == (int *)0x0) goto LAB_001012d9;
  }
  else {
    piVar5 = local_30[0] + *(long *)(local_30[0] + -2);
    if (piVar4 != piVar5) goto LAB_001012a0;
    lVar3 = 0;
  }
  piVar4 = local_30[0];
  LOCK();
  plVar1 = (long *)(local_30[0] + -4);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    local_30[0] = (int *)0x0;
    Memory::free_static(piVar4 + -4,false);
  }
LAB_001012d9:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* EmbeddedProcess::_check_focused_process_id() */

void __thiscall EmbeddedProcess::_check_focused_process_id(EmbeddedProcess *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [16];
  int local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = (**(code **)(*DisplayServer::singleton + 0x6b8))();
  if (*(long *)(this + 0x9d8) != lVar4) {
    *(long *)(this + 0x9d8) = lVar4;
    if (*(long *)(this + 0x9e0) == lVar4) {
      lVar4 = _get_current_modal_window();
      if (lVar4 == 0) {
        if (_check_focused_process_id()::{lambda()#1}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_check_focused_process_id()::{lambda()#1}::operator()()::
                                       sname);
          if (iVar3 != 0) {
            _scs_create((char *)&_check_focused_process_id()::{lambda()#1}::operator()()::sname,true
                       );
            __cxa_atexit(StringName::~StringName,
                         &_check_focused_process_id()::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_check_focused_process_id()::{lambda()#1}::operator()()::sname);
          }
        }
        local_38[0] = 0;
        local_38[1] = 0;
        local_30 = (undefined1  [16])0x0;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_check_focused_process_id()::{lambda()#1}::operator()()::sname,0,0);
        if (Variant::needs_deinit[local_38[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar2 = Control::has_focus();
        if (cVar2 == '\0') {
          Control::grab_focus();
        }
        else {
          CanvasItem::queue_redraw();
        }
      }
    }
    else {
      cVar2 = Control::has_focus();
      if (cVar2 != '\0') {
        Control::release_focus();
      }
    }
  }
  if ((this[0x9c8] == (EmbeddedProcess)0x0) && (*(long *)(this + 0x9d8) == *(long *)(this + 0x9e0)))
  {
    lVar4 = _get_current_modal_window();
    if (lVar4 != 0) {
      iVar3 = Window::get_mode();
      if (iVar3 == 1) {
        Window::set_mode(lVar4,0);
      }
      this_00 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_00);
      *(long *)(this_00 + 0x28) = lVar4;
      *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this_00 = &PTR_hash_001060e8;
      *(undefined8 *)(this_00 + 0x40) = 0;
      uVar1 = *(undefined8 *)(lVar4 + 0x60);
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x30) = uVar1;
      *(undefined **)(this_00 + 0x20) = &_LC20;
      *(code **)(this_00 + 0x38) = Window::grab_focus;
      CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
      *(char **)(this_00 + 0x20) = "Window::grab_focus";
      Callable::Callable(aCStack_48,this_00);
      Variant::Variant((Variant *)local_38,0);
      Callable::call_deferredp((Variant **)aCStack_48,0);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable(aCStack_48);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::_bind_methods() */

void EmbeddedProcess::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  local_b0 = 0x13;
  local_b8 = "embedding_completed";
  String::parse_latin1((StrRange *)&local_d0);
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
  local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0xf;
  local_c8 = "EmbeddedProcess";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  piVar10 = local_68;
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
        lVar11 = 0;
        piVar12 = piVar10;
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar11);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_a8._8_8_;
      local_a8 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  pcVar8 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_d0 = 0;
  local_b8 = "embedding_failed";
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d0);
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
  local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "EmbeddedProcess";
  local_d8 = 0;
  local_c0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  piVar10 = local_68;
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
        lVar11 = 0;
        piVar12 = piVar10;
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar11);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_a8._8_8_;
      local_a8 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  pcVar8 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_d0 = 0;
  local_b8 = "embedded_process_updated";
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d0);
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
  local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "EmbeddedProcess";
  local_d8 = 0;
  local_c0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  piVar10 = local_68;
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
        lVar11 = 0;
        piVar12 = piVar10;
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar11);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_a8._8_8_;
      local_a8 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  pcVar8 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_d0 = 0;
  local_b8 = "embedded_process_focused";
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d0);
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
  local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "EmbeddedProcess";
  local_d8 = 0;
  local_c0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  piVar10 = local_68;
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
        lVar11 = 0;
        piVar12 = piVar10;
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar11);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_a8._8_8_;
      local_a8 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  pcVar8 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::EmbeddedProcess() */

void __thiscall EmbeddedProcess::EmbeddedProcess(EmbeddedProcess *this)

{
  long *plVar1;
  code *pcVar2;
  Timer *pTVar3;
  long in_FS_OFFSET;
  long local_60;
  EmbeddedProcess local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined2 *)(this + 0x9f8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00105d80;
  this[0x9c8] = (EmbeddedProcess)0x1;
  *(undefined8 *)(this + 0x9d0) = 0;
  *(undefined2 *)(this + 0x9e8) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined4 *)(this + 0xa18) = 45000;
  this[0xa1c] = (EmbeddedProcess)0x0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa48) = 0;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa00) = (undefined1  [16])0x0;
  pTVar3 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar3);
  postinitialize_handler((Object *)pTVar3);
  *(Timer **)(this + 0xa08) = pTVar3;
  Timer::set_wait_time(_LC39);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xa08),0));
  Node::add_child(this,*(undefined8 *)(this + 0xa08),0,0);
  plVar1 = *(long **)(this + 0xa08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EmbeddedProcess>
            (local_58,(char *)this,(_func_void *)"&EmbeddedProcess::_timer_embedding_timeout");
  StringName::StringName((StringName *)&local_60,"timeout",false);
  (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pTVar3 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar3);
  postinitialize_handler((Object *)pTVar3);
  *(Timer **)(this + 0xa10) = pTVar3;
  Timer::set_wait_time(_LC39);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  plVar1 = *(long **)(this + 0xa10);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EmbeddedProcess>
            (local_58,(char *)this,
             (_func_void *)"&EmbeddedProcess::_timer_update_embedded_process_timeout");
  StringName::StringName((StringName *)&local_60,"timeout",false);
  (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_focus_mode(this,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::_check_mouse_over() */

void EmbeddedProcess::_check_mouse_over(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long in_RDI;
  int *piVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 local_78 [8];
  int *local_70 [2];
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((*(char *)(in_RDI + 0x9e9) != '\0') && (*(char *)(in_RDI + 0x9c8) != '\0')) &&
       (*(long *)(in_RDI + 0xa00) != 0)) &&
      ((cVar2 = Control::has_focus(), cVar2 == '\0' &&
       (cVar2 = CanvasItem::is_visible_in_tree(), cVar2 != '\0')))) &&
     (cVar2 = Window::has_focus(), cVar2 != '\0')) {
    uVar5 = Input::get_singleton();
    cVar2 = Input::is_mouse_button_pressed(uVar5,1);
    if (cVar2 == '\0') {
      uVar5 = Input::get_singleton();
      cVar2 = Input::is_mouse_button_pressed(uVar5,2);
      if (cVar2 == '\0') {
        OS::get_singleton();
        lVar6 = OS::get_ticks_msec();
        if ((499 < (ulong)(lVar6 - *(long *)(in_RDI + 0x9d0))) &&
           (lVar6 = (**(code **)(*DisplayServer::singleton + 0x3a8))(), lVar6 == 0)) {
          lVar6 = Viewport::gui_get_focus_owner();
          if (lVar6 != 0) {
            plVar7 = (long *)Viewport::gui_get_focus_owner();
            cVar2 = (**(code **)(*plVar7 + 0x2f0))(plVar7);
            if (cVar2 != '\0') goto LAB_00102600;
          }
          local_58[0] = (**(code **)(*DisplayServer::singleton + 0x3a0))();
          local_60 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
          local_58[0] = Control::get_global_rect();
          Rect2::operator_cast_to_Rect2i((Rect2 *)local_58);
          auVar10 = get_adjusted_embedded_window_rect();
          uVar5 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
          if ((int)(auVar10._12_4_ | auVar10._8_4_) < 0) {
            _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                             "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                             ,0,0);
          }
          plVar7 = DisplayServer::singleton;
          if (auVar10._0_4_ <= (int)uVar5) {
            iVar3 = (int)((ulong)uVar5 >> 0x20);
            if (((auVar10._4_4_ <= iVar3) && ((int)uVar5 < (int)(auVar10._8_4_ + auVar10._0_4_))) &&
               (iVar3 < (int)(auVar10._12_4_ + auVar10._4_4_))) {
              pcVar1 = *(code **)(*DisplayServer::singleton + 0x4d0);
              local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
              iVar3 = (*pcVar1)(plVar7,(Vector2i *)local_58);
              if ((iVar3 < 1) ||
                 (iVar4 = (**(code **)(**(long **)(in_RDI + 0xa00) + 0x1e0))(), iVar4 == iVar3)) {
                (**(code **)(*DisplayServer::singleton + 0x490))(local_78);
                CowData<int>::_copy_on_write((CowData<int> *)local_70);
                piVar9 = local_70[0];
                CowData<int>::_copy_on_write((CowData<int> *)local_70);
                lVar6 = 0;
                if (local_70[0] != (int *)0x0) {
                  lVar6 = *(long *)(local_70[0] + -2);
                }
                for (; local_70[0] + lVar6 != piVar9; piVar9 = piVar9 + 1) {
                  lVar8 = Window::get_from_id(*piVar9);
                  if ((lVar8 != 0) &&
                     ((cVar2 = Window::is_exclusive(), cVar2 != '\0' ||
                      (cVar2 = Window::get_flag(lVar8,5), cVar2 != '\0')))) goto LAB_00102874;
                }
                *(undefined1 *)(in_RDI + 0x9f9) = 0;
                Control::grab_focus();
                CanvasItem::queue_redraw();
LAB_00102874:
                CowData<int>::_unref((CowData<int> *)local_70);
              }
            }
          }
        }
      }
    }
  }
LAB_00102600:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::_timer_update_embedded_process_timeout() */

void EmbeddedProcess::_timer_update_embedded_process_timeout(void)

{
  char cVar1;
  EmbeddedProcess *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined8 local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _check_focused_process_id(in_RDI);
  _check_mouse_over();
  if (in_RDI[0x9f8] == (EmbeddedProcess)0x0) {
    local_28[0] = Control::get_global_rect();
    local_38 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_28);
    cVar1 = Vector2i::operator!=((Vector2i *)(in_RDI + 0xa40),local_38);
    if (cVar1 == '\0') {
      cVar1 = Vector2i::operator!=((Vector2i *)(in_RDI + 0xa48),local_38 + 8);
      if (cVar1 == '\0') goto LAB_001028f2;
    }
    in_RDI[0x9f8] = (EmbeddedProcess)0x1;
    *(undefined1 (*) [16])(in_RDI + 0xa40) = local_38;
  }
LAB_001028f2:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EmbeddedProcess::is_class_ptr(void*) const */

uint __thiscall EmbeddedProcess::is_class_ptr(EmbeddedProcess *this,void *param_1)

{
  return (uint)CONCAT71(0x1062,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1062,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1062,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1062,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1062,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<EmbeddedProcess, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EmbeddedProcess,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EmbeddedProcess,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EmbeddedProcess, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EmbeddedProcess,void>::get_argument_count
          (CallableCustomMethodPointer<EmbeddedProcess,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Window, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void>::get_argument_count
          (CallableCustomMethodPointer<Window,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EmbeddedProcess, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EmbeddedProcess,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EmbeddedProcess,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* EmbeddedProcess::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EmbeddedProcess::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EmbeddedProcess::_property_can_revertv(StringName const&) const */

undefined8 EmbeddedProcess::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00109008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EmbeddedProcess, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EmbeddedProcess,void>::get_object
          (CallableCustomMethodPointer<EmbeddedProcess,void> *this)

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
      goto LAB_00102d0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102d0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102d0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Window, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void>::get_object(CallableCustomMethodPointer<Window,void> *this)

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
      goto LAB_00102e0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102e0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102e0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EmbeddedProcess::_validate_propertyv(PropertyInfo&) const */

void EmbeddedProcess::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00109010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EmbeddedProcess::_setv(StringName const&, Variant const&) */

undefined8 EmbeddedProcess::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00109018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00102fc8) */
/* EmbeddedProcess::_getv(StringName const&, Variant&) const */

undefined8 EmbeddedProcess::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00109020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EmbeddedProcess::_get_class_namev() const */

undefined8 * EmbeddedProcess::_get_class_namev(void)

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
LAB_00103023:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103023;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EmbeddedProcess");
      goto LAB_0010308e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EmbeddedProcess");
LAB_0010308e:
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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EmbeddedProcess::_bind_methods() [clone .cold] */

void EmbeddedProcess::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EmbeddedProcess::get_class() const */

void EmbeddedProcess::get_class(void)

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



/* CallableCustomMethodPointer<Window, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Window,void>::call
          (CallableCustomMethodPointer<Window,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010353f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010353f;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001036a5;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010353f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC12,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001036a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EmbeddedProcess, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EmbeddedProcess,void>::call
          (CallableCustomMethodPointer<EmbeddedProcess,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001037ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001037ff;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001037d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00103965;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001037ff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC12,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103965:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC13;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC13;
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
  if (local_90 == 0) {
LAB_00103ad8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103ad8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103af6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103af6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
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
  if (local_90 == 0) {
LAB_00103ed8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103ed8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103ef5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103ef5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00109028 != Object::_get_property_list) {
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



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_0010425f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_0010425f:
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
    if (cVar6 != '\0') goto LAB_00104313;
  }
  cVar6 = String::operator==(param_1,"Control");
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
              if (lVar5 == 0) goto LAB_00104483;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_00104483:
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
      if (cVar6 != '\0') goto LAB_00104313;
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
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_00104563;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
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
LAB_00104563:
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
        if (cVar6 != '\0') goto LAB_00104313;
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
                  if (lVar5 == 0) goto LAB_001043eb;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_001043eb:
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
          if (cVar6 != '\0') goto LAB_00104313;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00104679;
      }
    }
  }
LAB_00104313:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104679:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EmbeddedProcess::is_class(String const&) const */

undefined8 __thiscall EmbeddedProcess::is_class(EmbeddedProcess *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001046ef;
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
LAB_001046ef:
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
    if (cVar5 != '\0') goto LAB_001047a3;
  }
  cVar5 = String::operator==(param_1,"EmbeddedProcess");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001047a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
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
  if (local_90 == 0) {
LAB_00104978:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104978;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104995;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104995:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00109030 != CanvasItem::_get_property_list) {
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



/* EmbeddedProcess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EmbeddedProcess::_get_property_listv(EmbeddedProcess *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EmbeddedProcess";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EmbeddedProcess";
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
  if (local_90 == 0) {
LAB_00104df8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104df8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104e15;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104e15:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EmbeddedProcess",false);
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



/* WARNING: Removing unreachable block (ram,0x00105370) */
/* EmbeddedProcess::_notificationv(int, bool) */

void __thiscall EmbeddedProcess::_notificationv(EmbeddedProcess *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00109038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00109038 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* EmbeddedProcess::_initialize_classv() */

void EmbeddedProcess::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
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
          lVar2 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((code *)PTR__bind_methods_00109050 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00109040 != Object::_bind_compatibility_methods)
        {
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
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_00109048 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EmbeddedProcess";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EmbeddedProcess>(EmbeddedProcess*, char const*,
   void (EmbeddedProcess::*)()) */

EmbeddedProcess *
create_custom_callable_function_pointer<EmbeddedProcess>
          (EmbeddedProcess *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC20;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00106178;
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



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Window, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EmbeddedProcess, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EmbeddedProcess,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EmbeddedProcess,void> *this)

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


