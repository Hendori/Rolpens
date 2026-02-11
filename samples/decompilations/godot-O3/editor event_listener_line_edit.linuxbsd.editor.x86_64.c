
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



/* EventListenerLineEdit::_on_focus() */

void __thiscall EventListenerLineEdit::_on_focus(EventListenerLineEdit *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Listening for Input";
  local_58 = 0;
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  LineEdit::set_placeholder(this);
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::_on_unfocus() */

void __thiscall EventListenerLineEdit::_on_unfocus(EventListenerLineEdit *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xbb4] = (EventListenerLineEdit)0x1;
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Filter by Event";
  local_58 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  LineEdit::set_placeholder(this);
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::clear_event() [clone .part.0] */

void __thiscall EventListenerLineEdit::clear_event(EventListenerLineEdit *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  pOVar4 = *(Object **)(this + 3000);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar4 != (Object *)0x0) {
    *(undefined8 *)(this + 3000) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar4);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  local_90 = 0;
  local_80 = 0;
  local_88 = &_LC4;
  String::parse_latin1((StrRange *)&local_90);
  LineEdit::set_text(this);
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
  pOVar4 = *(Object **)(this + 3000);
  if (pOVar4 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar4 = (Object *)0x0;
    }
  }
  StringName::StringName((StringName *)&local_88,"event_changed",false);
  Variant::Variant((Variant *)local_68,pOVar4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_88,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (pOVar4 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar4);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_0010056f;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010056f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::_on_text_changed(String const&) */

void __thiscall EventListenerLineEdit::_on_text_changed(EventListenerLineEdit *this,String *param_1)

{
  if (((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) &&
     (*(long *)(this + 3000) != 0)) {
    clear_event(this);
    return;
  }
  return;
}



/* EventListenerLineEdit::get_device_string(int) */

EventListenerLineEdit * __thiscall
EventListenerLineEdit::get_device_string(EventListenerLineEdit *this,int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)InputMap::ALL_DEVICES == param_1) {
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "All Devices";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)this,(String *)&local_68);
    lVar2 = local_68;
  }
  else {
    itos((long)&local_60);
    local_68 = 0;
    local_58 = " ";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "";
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "Device";
    local_80 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_58,(String *)&local_70);
    String::operator+((String *)this,(String *)&local_58);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
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
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar3 = local_78;
    lVar2 = local_68;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_68;
      }
    }
  }
  local_68 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* EventListenerLineEdit::_is_event_allowed(Ref<InputEvent> const&) const */

uint __thiscall EventListenerLineEdit::_is_event_allowed(EventListenerLineEdit *this,Ref *param_1)

{
  char cVar1;
  uint uVar2;
  Object *pOVar3;
  Object *pOVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  
  lVar7 = *(long *)param_1;
  if (lVar7 == 0) {
LAB_00100bf8:
    pOVar3 = (Object *)0x0;
LAB_00100bfb:
    uVar2 = 0;
    goto LAB_00100a29;
  }
  pOVar3 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
  if (pOVar3 == (Object *)0x0) {
LAB_001008e7:
    pOVar4 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      lVar7 = *(long *)param_1;
      if (cVar1 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      if (lVar7 != 0) goto LAB_00100927;
      pOVar5 = (Object *)0x0;
LAB_00100a62:
      if (pOVar3 != (Object *)0x0) goto LAB_0010099b;
      goto LAB_00100a70;
    }
LAB_00100927:
    pOVar5 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      lVar7 = *(long *)param_1;
      if (cVar1 == '\0') {
        pOVar5 = (Object *)0x0;
      }
      if (lVar7 == 0) goto LAB_00100a62;
    }
    pOVar6 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventJoypadMotion::typeinfo,0);
    if ((pOVar6 != (Object *)0x0) && (uVar2 = RefCounted::reference(), (char)uVar2 != '\0')) {
      if ((pOVar3 == (Object *)0x0) || (((byte)this[0xbb0] & 2) == 0)) goto LAB_00100a73;
LAB_001009ff:
      cVar1 = RefCounted::unreference();
joined_r0x00100ac9:
      if (cVar1 != '\0') {
LAB_00100acf:
        cVar1 = predelete_handler(pOVar6);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      goto joined_r0x00100a12;
    }
    if (pOVar3 != (Object *)0x0) goto LAB_0010099b;
    pOVar6 = (Object *)0x0;
    pOVar3 = (Object *)0x0;
LAB_00100a73:
    if (pOVar4 == (Object *)0x0) {
      if (pOVar5 == (Object *)0x0) {
        if (pOVar6 == (Object *)0x0) goto LAB_00100bfb;
        uVar2 = *(uint *)(this + 0xbb0);
      }
      else {
        uVar2 = *(uint *)(this + 0xbb0);
        if ((uVar2 & 4) != 0) goto LAB_00100a98;
LAB_00100b00:
        if (pOVar6 == (Object *)0x0) {
          uVar2 = 0;
          goto LAB_001009b8;
        }
      }
LAB_00100b09:
      uVar2 = uVar2 >> 3 & 1;
      goto LAB_001009ff;
    }
    uVar2 = *(uint *)(this + 0xbb0);
    if ((uVar2 & 1) != 0) {
      uVar2 = 1;
      if (pOVar6 == (Object *)0x0) goto joined_r0x00100a12;
      cVar1 = RefCounted::unreference();
      goto joined_r0x00100ac9;
    }
    if (pOVar5 != (Object *)0x0) {
      if ((uVar2 & 4) == 0) goto LAB_00100b00;
LAB_00100a98:
      if ((pOVar6 != (Object *)0x0) && (uVar2 = RefCounted::unreference(), (char)uVar2 != '\0'))
      goto LAB_00100acf;
      uVar2 = 1;
      goto LAB_001009b8;
    }
    if (pOVar6 != (Object *)0x0) goto LAB_00100b09;
    uVar2 = 0;
  }
  else {
    cVar1 = RefCounted::reference();
    lVar7 = *(long *)param_1;
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
      if (lVar7 == 0) goto LAB_00100bf8;
      goto LAB_001008e7;
    }
    pOVar4 = (Object *)0x0;
    if (lVar7 != 0) goto LAB_001008e7;
    pOVar5 = (Object *)0x0;
LAB_0010099b:
    if (((byte)this[0xbb0] & 2) == 0) {
LAB_00100a70:
      pOVar6 = (Object *)0x0;
      goto LAB_00100a73;
    }
    uVar2 = 1;
joined_r0x00100a12:
    if (pOVar5 != (Object *)0x0) {
LAB_001009b8:
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    if (pOVar4 == (Object *)0x0) goto LAB_00100a29;
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_00100a29:
  if (((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  return uVar2;
}



/* EventListenerLineEdit::get_event() const */

void EventListenerLineEdit::get_event(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 3000) != 0) {
    *in_RDI = *(long *)(in_RSI + 3000);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* EventListenerLineEdit::clear_event() */

void __thiscall EventListenerLineEdit::clear_event(EventListenerLineEdit *this)

{
  if (*(long *)(this + 3000) != 0) {
    clear_event(this);
    return;
  }
  return;
}



/* EventListenerLineEdit::set_allowed_input_types(int) */

void __thiscall
EventListenerLineEdit::set_allowed_input_types(EventListenerLineEdit *this,int param_1)

{
  *(int *)(this + 0xbb0) = param_1;
  return;
}



/* EventListenerLineEdit::get_allowed_input_types() const */

undefined4 __thiscall EventListenerLineEdit::get_allowed_input_types(EventListenerLineEdit *this)

{
  return *(undefined4 *)(this + 0xbb0);
}



/* EventListenerLineEdit::grab_focus() */

void __thiscall EventListenerLineEdit::grab_focus(EventListenerLineEdit *this)

{
  this[0xbb4] = (EventListenerLineEdit)0x0;
  Control::grab_focus();
  return;
}



/* EventListenerLineEdit::EventListenerLineEdit() */

void __thiscall EventListenerLineEdit::EventListenerLineEdit(EventListenerLineEdit *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)0x0;
  LineEdit::LineEdit((LineEdit *)this,(String *)&local_48);
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_001087c8;
  *(undefined2 *)(this + 0xbb4) = 1;
  *(undefined4 *)(this + 0xbb0) = 0xf;
  *(undefined8 *)(this + 3000) = 0;
  LineEdit::set_caret_blink_enabled(SUB81(this,0));
  local_48 = "";
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Filter by Event";
  local_58 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  LineEdit::set_placeholder(this);
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::_bind_methods() */

void EventListenerLineEdit::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  long local_e0;
  char *local_d8;
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78 [2]) [16];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_b8 = "InputEvent";
  local_110 = 0;
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "event";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_118);
  local_e8 = 0x18;
  local_e0 = 0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  }
  local_d8 = (char *)0x0;
  local_d0 = 0x11;
  local_c8 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 != 0x11) {
      StringName::operator=((StringName *)&local_d8,(StringName *)&local_108);
      goto LAB_00100fa3;
    }
  }
  local_c0 = 6;
  StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
  if (local_d8 == local_b8) {
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_d8 = local_b8;
  }
LAB_00100fa3:
  local_100 = 0;
  local_b8 = "event_changed";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_a8 = (undefined1  [16])0x0;
  if ((local_100 == 0) ||
     (CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100),
     local_78[0] == (undefined1 (*) [16])0x0)) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar8 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
  *puVar8 = local_e8;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 2),(CowData *)&local_e0);
  }
  StringName::operator=((StringName *)(puVar8 + 4),(StringName *)&local_d8);
  puVar8[6] = local_d0;
  if (*(long *)(puVar8 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 8),(CowData *)&local_c8);
  }
  puVar8[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar8 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar8 + 0x10) = local_78[0];
  *(long *)(puVar8 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar8;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar8;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar8;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  local_120 = 0;
  local_f8 = "EventListenerLineEdit";
  local_f0 = 0x15;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
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
  piVar7 = local_68;
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
      lVar10 = 0;
      local_68 = (int *)0x0;
      piVar9 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar7 + -4,false);
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
  uVar6 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_a8._8_8_;
      local_a8 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  pcVar5 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar5 + -0x10),false);
    }
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EventListenerLineEdit::get_event_text(Ref<InputEvent> const&, bool) */

EventListenerLineEdit * __thiscall
EventListenerLineEdit::get_event_text(EventListenerLineEdit *this,Ref *param_1,bool param_2)

{
  char *pcVar1;
  Object *pOVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  Object *pOVar11;
  long lVar12;
  size_t sVar13;
  String *pSVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  long in_FS_OFFSET;
  bool bVar18;
  float fVar19;
  String *local_f8;
  StrRange *local_f0;
  EventListenerLineEdit *local_e8;
  StrRange *local_c8;
  char *local_b0;
  char *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  char *local_80;
  long local_78;
  char *local_70;
  long local_68;
  char *local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  plVar17 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar17 == (long *)0x0) {
    _err_print_error("get_event_text","editor/event_listener_line_edit.cpp",0x3c,
                     "Condition \"p_event.is_null()\" is true. Returning: String()",
                     "Provided event is not a valid instance of InputEvent",0);
    *(undefined8 *)this = 0;
    goto LAB_0010193e;
  }
  local_b0 = (char *)0x0;
  pOVar8 = (Object *)__dynamic_cast(plVar17,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if (pOVar8 == (Object *)0x0) {
LAB_0010162e:
    (**(code **)(*plVar17 + 0x1d0))(&local_58);
    pcVar4 = local_58;
    pcVar1 = local_b0;
    if (local_b0 == local_58) {
      if (local_b0 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_b0 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
    }
    else {
      if (local_b0 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_b0 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_b0 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      local_b0 = local_58;
    }
    pOVar8 = (Object *)0x0;
LAB_00101692:
    lVar16 = *(long *)param_1;
    if (lVar16 == 0) goto LAB_00102368;
LAB_0010169e:
    pOVar9 = (Object *)__dynamic_cast(lVar16,&Object::typeinfo,&InputEventMouse::typeinfo,0);
    if (pOVar9 == (Object *)0x0) {
LAB_001016dd:
      pOVar10 = (Object *)
                __dynamic_cast(lVar16,&Object::typeinfo,&InputEventJoypadMotion::typeinfo,0);
      pOVar2 = pOVar9;
      if (pOVar10 == (Object *)0x0) {
        pOVar11 = (Object *)
                  __dynamic_cast(lVar16,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0);
        if (pOVar11 == (Object *)0x0) {
LAB_00101751:
          if (!param_2) {
LAB_001033c8:
            *(char **)this = local_b0;
            local_b0 = (char *)0x0;
            goto LAB_001018e9;
          }
          pOVar11 = (Object *)0x0;
joined_r0x0010385e:
          if (pOVar2 != (Object *)0x0) goto LAB_00101767;
          goto LAB_00102368;
        }
LAB_001023c5:
        cVar5 = RefCounted::reference();
        pcVar1 = local_b0;
        if (cVar5 == '\0') {
          pOVar11 = (Object *)0x0;
        }
        if (pOVar10 != (Object *)0x0) goto LAB_001023e1;
        if (param_2) {
          pOVar2 = pOVar11;
          if (pOVar9 != (Object *)0x0) goto LAB_00101767;
          goto joined_r0x0010385e;
        }
        local_b0 = (char *)0x0;
        *(char **)this = pcVar1;
        if (pOVar11 == (Object *)0x0) goto LAB_001018e9;
LAB_00102a51:
        local_b0 = (char *)0x0;
        cVar5 = RefCounted::unreference();
        if (cVar5 == '\0') goto LAB_001018e9;
        pOVar10 = (Object *)0x0;
LAB_001026c6:
        cVar5 = predelete_handler(pOVar11);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
LAB_001018d4:
        if (pOVar10 == (Object *)0x0) goto LAB_001018e9;
      }
      else {
        cVar5 = RefCounted::reference();
        pOVar11 = *(Object **)param_1;
        if (cVar5 == '\0') {
          if (pOVar11 == (Object *)0x0) {
            if (!param_2) goto LAB_00103890;
          }
          else {
            pOVar11 = (Object *)
                      __dynamic_cast(pOVar11,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0);
            if (pOVar11 != (Object *)0x0) {
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') goto LAB_00101751;
              if (param_2) goto LAB_00101767;
              *(char **)this = local_b0;
              goto LAB_00102a51;
            }
            if (!param_2) goto LAB_001033c8;
          }
          goto joined_r0x0010385e;
        }
        if ((pOVar11 != (Object *)0x0) &&
           (pOVar11 = (Object *)
                      __dynamic_cast(pOVar11,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0),
           pOVar11 != (Object *)0x0)) goto LAB_001023c5;
LAB_001023e1:
        local_60 = (char *)0x0;
        local_58 = "";
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_60);
        local_68 = 0;
        local_58 = "Unknown Joypad Axis";
        local_50 = 0x13;
        String::parse_latin1((StrRange *)&local_68);
        TTR((String *)&local_80,(String *)&local_68);
        lVar16 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar17 = (long *)(local_68 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_60;
        local_f0 = (StrRange *)&local_68;
        local_f8 = (String *)&local_60;
        if (local_60 == (char *)0x0) {
LAB_001024b0:
          iVar6 = InputEventJoypadMotion::get_axis();
        }
        else {
          LOCK();
          plVar17 = (long *)(local_60 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 != 0) goto LAB_001024b0;
          local_60 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
          iVar6 = InputEventJoypadMotion::get_axis();
        }
        if (iVar6 < 10) {
          local_60 = (char *)0x0;
          local_50 = 0;
          local_58 = "";
          String::parse_latin1((StrRange *)local_f8);
          iVar6 = InputEventJoypadMotion::get_axis();
          fVar19 = (float)InputEventJoypadMotion::get_axis_value();
          local_68 = 0;
          pcVar1 = *(char **)(_joy_axis_descriptions +
                             ((ulong)(0.0 <= fVar19) + (long)iVar6 * 2) * 8);
          sVar13 = 0;
          if (pcVar1 != (char *)0x0) {
            sVar13 = strlen(pcVar1);
          }
          local_58 = pcVar1;
          local_50 = sVar13;
          String::parse_latin1(local_f0);
          TTR((String *)&local_58,(String *)local_f0);
          pcVar4 = local_58;
          pcVar1 = local_80;
          if (local_80 == local_58) {
            if (local_80 != (char *)0x0) {
              LOCK();
              plVar17 = (long *)(local_80 + -0x10);
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (*plVar17 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar4 + -0x10,false);
              }
            }
          }
          else {
            if (local_80 != (char *)0x0) {
              LOCK();
              plVar17 = (long *)(local_80 + -0x10);
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (*plVar17 == 0) {
                local_80 = (char *)0x0;
                Memory::free_static(pcVar1 + -0x10,false);
              }
            }
            local_80 = local_58;
          }
          lVar16 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar17 = (long *)(local_68 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          pcVar1 = local_60;
          if (local_60 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_60 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_60 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
        }
        local_60 = (char *)0x0;
        plVar17 = (long *)(local_80 + -0x10);
        if (local_80 != (char *)0x0) {
          do {
            lVar16 = *plVar17;
            if (lVar16 == 0) goto LAB_00102501;
            LOCK();
            lVar12 = *plVar17;
            bVar18 = lVar16 == lVar12;
            if (bVar18) {
              *plVar17 = lVar16 + 1;
              lVar12 = lVar16;
            }
            UNLOCK();
          } while (!bVar18);
          if (lVar12 != -1) {
            local_60 = local_80;
          }
        }
LAB_00102501:
        fVar19 = (float)InputEventJoypadMotion::get_axis_value();
        puVar15 = &_LC37;
        if (0.0 <= fVar19) {
          puVar15 = &_LC38;
        }
        iVar6 = InputEventJoypadMotion::get_axis();
        local_70 = (char *)0x0;
        local_58 = "";
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_70);
        local_58 = "Joypad Axis %d %s (%s)";
        local_78 = 0;
        local_50 = 0x16;
        String::parse_latin1((StrRange *)&local_78);
        TTR((String *)local_f0,(String *)&local_78);
        vformat<long,char_const*,String>((String *)&local_58,local_f0,(long)iVar6,puVar15,local_f8);
        pcVar1 = local_b0;
        if (local_b0 == local_58) {
          if (local_b0 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_b0 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              Memory::free_static(local_58 + -0x10,false);
            }
          }
        }
        else {
          if (local_b0 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_b0 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_b0 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          local_b0 = local_58;
        }
        lVar16 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar17 = (long *)(local_68 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar17 = (long *)(local_78 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_70 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        pcVar1 = local_60;
        if (local_60 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_60 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_60 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        pcVar1 = local_80;
        if (local_80 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_80 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_80 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        pcVar1 = local_b0;
        if (param_2) {
LAB_00101798:
          local_e8 = (EventListenerLineEdit *)&local_70;
          local_f0 = (StrRange *)&local_68;
          local_f8 = (String *)&local_60;
          iVar6 = InputEvent::get_device();
          get_device_string(local_e8,iVar6);
          local_60 = (char *)0x0;
          plVar17 = (long *)(local_70 + -0x10);
          if (local_70 != (char *)0x0) {
            do {
              lVar16 = *plVar17;
              if (lVar16 == 0) goto LAB_001017f2;
              LOCK();
              lVar12 = *plVar17;
              bVar18 = lVar16 == lVar12;
              if (bVar18) {
                *plVar17 = lVar16 + 1;
                lVar12 = lVar16;
              }
              UNLOCK();
            } while (!bVar18);
            if (lVar12 != -1) {
              local_60 = local_70;
            }
          }
LAB_001017f2:
          local_68 = 0;
          local_58 = " - %s";
          local_50 = 5;
          String::parse_latin1(local_f0);
          vformat<String>((String *)&local_58,local_f0,local_f8);
          String::operator+=((String *)&local_b0,(String *)&local_58);
          pcVar1 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_58 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          lVar16 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar17 = (long *)(local_68 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          pcVar1 = local_60;
          if (local_60 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_60 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_60 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          pcVar1 = local_70;
          if (local_70 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_70 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_70 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          pcVar1 = local_b0;
          local_b0 = (char *)0x0;
          *(char **)this = pcVar1;
          if (pOVar11 != (Object *)0x0) {
            cVar5 = RefCounted::unreference();
joined_r0x001026c0:
            if (cVar5 != '\0') goto LAB_001026c6;
          }
          goto LAB_001018d4;
        }
        local_b0 = (char *)0x0;
        *(char **)this = pcVar1;
        if (pOVar11 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
          goto joined_r0x001026c0;
        }
      }
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
    else {
      cVar5 = RefCounted::reference();
      lVar16 = *(long *)param_1;
      if (cVar5 == '\0') {
        if (lVar16 == 0) {
          pOVar9 = (Object *)0x0;
          if (!param_2) goto LAB_00103890;
          goto LAB_00102368;
        }
        pOVar9 = (Object *)0x0;
        goto LAB_001016dd;
      }
      if (lVar16 != 0) goto LAB_001016dd;
      pOVar11 = (Object *)0x0;
      if (param_2) {
LAB_00101767:
        pOVar10 = (Object *)0x0;
        goto LAB_00101798;
      }
LAB_00103890:
      *(char **)this = local_b0;
      local_b0 = (char *)0x0;
    }
LAB_001018e9:
    if (((pOVar9 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  else {
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      plVar17 = *(long **)param_1;
      goto LAB_0010162e;
    }
    InputEventWithModifiers::as_text();
    if (local_a8 != (char *)0x0) {
      if (((int)*(undefined8 *)(local_a8 + -8) == 0) || ((int)*(undefined8 *)(local_a8 + -8) == 1))
      {
        local_58 = (char *)0x0;
        plVar17 = (long *)(local_a8 + -0x10);
        do {
          lVar16 = *plVar17;
          if (lVar16 == 0) goto LAB_00102bf8;
          LOCK();
          lVar12 = *plVar17;
          bVar18 = lVar16 == lVar12;
          if (bVar18) {
            *plVar17 = lVar16 + 1;
            lVar12 = lVar16;
          }
          UNLOCK();
        } while (!bVar18);
        if (lVar12 == -1) {
LAB_00102bf8:
          if (local_a8 != (char *)0x0) {
            cVar5 = '\0';
            if (local_a8 != (char *)0x0) goto LAB_00102c14;
            local_a8 = (char *)0x0;
          }
        }
        else {
          local_58 = local_a8;
          if (local_a8 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_a8 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(local_a8 + -0x10,false);
            }
          }
        }
      }
      else {
        local_60 = (char *)0x0;
        local_58 = "+";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_60);
        String::operator+((String *)&local_58,(String *)&local_a8);
        pcVar1 = local_58;
        if (local_a8 == local_58) {
          pcVar4 = local_a8;
          if (local_a8 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_a8 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
              pcVar4 = local_a8;
            }
          }
        }
        else {
          pcVar4 = local_58;
          if (local_a8 != (char *)0x0) {
LAB_00102c14:
            pcVar1 = local_a8;
            LOCK();
            plVar17 = (long *)(local_a8 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_a8 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
            local_a8 = local_58;
            pcVar4 = local_a8;
            if (cVar5 == '\0') goto LAB_00101a08;
          }
        }
        local_a8 = pcVar4;
        pcVar1 = local_60;
        if (local_60 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_60 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_60 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
      }
    }
LAB_00101a08:
    cVar5 = InputEventWithModifiers::is_command_or_control_autoremap();
    pcVar1 = local_a8;
    if (cVar5 != '\0') {
      pSVar14 = (String *)OS::get_singleton();
      local_70 = (char *)0x0;
      local_50 = 5;
      local_58 = "macos";
      String::parse_latin1((StrRange *)&local_70);
      cVar5 = OS::has_feature(pSVar14);
      if (cVar5 == '\0') {
        pSVar14 = (String *)OS::get_singleton();
        local_68 = 0;
        local_50 = 9;
        local_58 = "web_macos";
        String::parse_latin1((StrRange *)&local_68);
        cVar5 = OS::has_feature(pSVar14);
        if (cVar5 == '\0') {
          pSVar14 = (String *)OS::get_singleton();
          local_60 = (char *)0x0;
          local_50 = 7;
          local_58 = "web_ios";
          String::parse_latin1((StrRange *)&local_60);
          OS::has_feature(pSVar14);
          pcVar1 = local_60;
          if (local_60 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_60 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_60 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          if (local_68 != 0) goto LAB_00103453;
        }
        else {
          if (local_68 == 0) goto LAB_001031e0;
LAB_00103453:
          lVar16 = local_68;
          LOCK();
          plVar17 = (long *)(local_68 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_70 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
      }
      else {
LAB_001031e0:
        pcVar1 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_70 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
      }
      String::replace((char *)&local_58,(char *)&local_a8);
      pcVar3 = local_58;
      pcVar4 = local_a8;
      if (local_a8 == local_58) {
        pcVar1 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_a8 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            pcVar1 = local_a8;
          }
        }
      }
      else {
        pcVar1 = local_58;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_a8 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          pcVar1 = local_58;
          if (*plVar17 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
            pcVar1 = local_58;
          }
        }
      }
    }
    local_a8 = pcVar1;
    iVar6 = InputEventKey::get_keycode();
    if (iVar6 != 0) {
      uVar7 = InputEventKey::get_keycode();
      keycode_get_string(&local_60,uVar7);
      String::operator+((String *)&local_58,(String *)&local_a8);
      String::operator+=((String *)&local_b0,(String *)&local_58);
      pcVar1 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_58 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      pcVar1 = local_60;
      if (local_60 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_60 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_60 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
    }
    iVar6 = InputEventKey::get_physical_keycode();
    if (iVar6 != 0) {
      if ((local_b0 != (char *)0x0) && (1 < *(uint *)(local_b0 + -8))) {
        local_60 = (char *)0x0;
        local_58 = " ";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_60);
        local_58 = "";
        local_78 = 0;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_78);
        local_80 = (char *)0x0;
        local_58 = "or";
        local_50 = 2;
        String::parse_latin1((StrRange *)&local_80);
        TTR((String *)&local_70,(String *)&local_80);
        operator+((char *)&local_68,(String *)&_LC20);
        String::operator+((String *)&local_58,(String *)&local_68);
        String::operator+=((String *)&local_b0,(String *)&local_58);
        pcVar1 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_58 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        lVar16 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar17 = (long *)(local_68 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_70 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        pcVar1 = local_80;
        if (local_80 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_80 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_80 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        lVar16 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar17 = (long *)(local_78 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_60;
        if (local_60 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_60 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_60 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
      }
      local_c8 = (StrRange *)&local_80;
      local_e8 = (EventListenerLineEdit *)&local_70;
      local_f0 = (StrRange *)&local_68;
      local_f8 = (String *)&local_60;
      local_68 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1(local_f0);
      local_58 = "Physical";
      local_70 = (char *)0x0;
      local_50 = 8;
      String::parse_latin1((StrRange *)local_e8);
      TTR(local_f8,(String *)local_e8);
      local_58 = " (";
      local_80 = (char *)0x0;
      local_50 = 2;
      String::parse_latin1(local_c8);
      uVar7 = InputEventKey::get_physical_keycode();
      keycode_get_string(&local_90,uVar7);
      String::operator+((String *)&local_88,(String *)&local_a8);
      String::operator+((String *)&local_78,(String *)&local_88);
      String::operator+((String *)&local_58,(String *)&local_78);
      String::operator+=((String *)&local_b0,(String *)&local_58);
      pcVar1 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_58 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar16 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar17 = (long *)(local_78 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar17 = (long *)(local_88 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar17 = (long *)(local_90 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      pcVar1 = local_80;
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_80 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      pcVar1 = local_60;
      if (local_60 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_60 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_60 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      pcVar1 = local_70;
      if (local_70 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_70 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_70 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar16 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar17 = (long *)(local_68 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      iVar6 = InputEventKey::get_location();
      if (iVar6 != 0) {
        (**(code **)(*(long *)pOVar8 + 0x218))(local_f8,pOVar8);
        operator+((char *)&local_58,(String *)&_LC20);
        String::operator+=((String *)&local_b0,(String *)&local_58);
        pcVar1 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_58 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        pcVar1 = local_60;
        if (local_60 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_60 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_60 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
      }
      String::operator+=((String *)&local_b0,")");
    }
    iVar6 = InputEventKey::get_key_label();
    if (iVar6 != 0) {
      if ((local_b0 != (char *)0x0) && (1 < *(uint *)(local_b0 + -8))) {
        local_60 = (char *)0x0;
        local_58 = " ";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_60);
        local_58 = "";
        local_78 = 0;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_78);
        local_80 = (char *)0x0;
        local_58 = "or";
        local_50 = 2;
        String::parse_latin1((StrRange *)&local_80);
        TTR((String *)&local_70,(String *)&local_80);
        operator+((char *)&local_68,(String *)&_LC20);
        String::operator+((String *)&local_58,(String *)&local_68);
        String::operator+=((String *)&local_b0,(String *)&local_58);
        pcVar1 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_58 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        lVar16 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar17 = (long *)(local_68 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_70 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        pcVar1 = local_80;
        if (local_80 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_80 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_80 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        lVar16 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar17 = (long *)(local_78 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar1 = local_60;
        if (local_60 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_60 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_60 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
      }
      local_c8 = (StrRange *)&local_80;
      local_e8 = (EventListenerLineEdit *)&local_70;
      local_f0 = (StrRange *)&local_68;
      local_f8 = (String *)&local_60;
      local_60 = (char *)0x0;
      local_58 = ")";
      local_50 = 1;
      String::parse_latin1((StrRange *)local_f8);
      local_78 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_58 = "Unicode";
      local_80 = (char *)0x0;
      local_50 = 7;
      String::parse_latin1(local_c8);
      TTR((String *)local_e8,(String *)local_c8);
      local_58 = " (";
      local_90 = 0;
      local_50 = 2;
      String::parse_latin1((StrRange *)&local_90);
      uVar7 = InputEventKey::get_key_label();
      keycode_get_string(&local_a0,uVar7);
      String::operator+((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+((String *)local_f0,(String *)&local_88);
      String::operator+((String *)&local_58,(String *)local_f0);
      String::operator+=((String *)&local_b0,(String *)&local_58);
      pcVar1 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_58 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar16 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar17 = (long *)(local_68 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar17 = (long *)(local_88 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar17 = (long *)(local_98 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar17 = (long *)(local_a0 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar17 = (long *)(local_90 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      pcVar1 = local_70;
      if (local_70 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_70 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_70 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      pcVar1 = local_80;
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_80 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar16 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar17 = (long *)(local_78 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      pcVar1 = local_60;
      if (local_60 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_60 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_60 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
    }
    if ((local_b0 == (char *)0x0) || (*(uint *)(local_b0 + -8) < 2)) {
      local_60 = (char *)0x0;
      local_50 = 1;
      local_58 = ")";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "";
      local_78 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_58 = "Unset";
      local_80 = (char *)0x0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_80);
      TTR((String *)&local_70,(String *)&local_80);
      operator+((char *)&local_68,(String *)&_LC55);
      String::operator+((String *)&local_58,(String *)&local_68);
      pcVar4 = local_58;
      pcVar1 = local_b0;
      if (local_b0 == local_58) {
        if (local_b0 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_b0 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
      }
      else {
        if (local_b0 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_b0 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_b0 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        local_b0 = local_58;
      }
      lVar16 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar17 = (long *)(local_68 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      pcVar1 = local_70;
      if (local_70 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_70 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_70 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      pcVar1 = local_80;
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_80 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar16 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar17 = (long *)(local_78 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      pcVar1 = local_60;
      if (local_60 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_60 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_60 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
    }
    pcVar1 = local_a8;
    if (local_a8 == (char *)0x0) goto LAB_00101692;
    LOCK();
    plVar17 = (long *)(local_a8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 != 0) goto LAB_00101692;
    local_a8 = (char *)0x0;
    Memory::free_static(pcVar1 + -0x10,false);
    lVar16 = *(long *)param_1;
    if (lVar16 != 0) goto LAB_0010169e;
LAB_00102368:
    *(char **)this = local_b0;
    local_b0 = (char *)0x0;
  }
  if (((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
  pcVar1 = local_b0;
  if (local_b0 != (char *)0x0) {
    LOCK();
    plVar17 = (long *)((long)local_b0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_b0 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar1 + -0x10),false);
    }
  }
LAB_0010193e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::_notification(int) [clone .part.0] */

void EventListenerLineEdit::_notification(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  CallableCustom *this;
  undefined4 in_register_0000003c;
  Ref *pRVar5;
  long in_FS_OFFSET;
  Object *local_48 [3];
  long local_30;
  
  pRVar5 = (Ref *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)pRVar5 + 0x108);
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00108b30;
  uVar2 = *(undefined8 *)(pRVar5 + 0x60);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(code **)(this + 0x38) = _on_text_changed;
  *(Ref **)(this + 0x28) = pRVar5;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(char **)(this + 0x20) = "EventListenerLineEdit::_on_text_changed";
  Callable::Callable((Callable *)local_48,this);
  (*pcVar1)(pRVar5,SceneStringNames::singleton + 0x270,local_48,0);
  Callable::~Callable((Callable *)local_48);
  pcVar1 = *(code **)(*(long *)pRVar5 + 0x108);
  create_custom_callable_function_pointer<EventListenerLineEdit>
            ((EventListenerLineEdit *)local_48,(char *)pRVar5,
             (_func_void *)"&EventListenerLineEdit::_on_focus");
  (*pcVar1)(pRVar5,SceneStringNames::singleton + 0xd8,local_48,0);
  Callable::~Callable((Callable *)local_48);
  pcVar1 = *(code **)(*(long *)pRVar5 + 0x108);
  create_custom_callable_function_pointer<EventListenerLineEdit>
            ((EventListenerLineEdit *)local_48,(char *)pRVar5,
             (_func_void *)"&EventListenerLineEdit::_on_unfocus");
  (*pcVar1)(pRVar5,SceneStringNames::singleton + 0xe0,local_48,0);
  Callable::~Callable((Callable *)local_48);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)local_48);
  LineEdit::set_right_icon(pRVar5);
  if (local_48[0] != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48[0]);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_48[0] + 0x140))(local_48[0]);
        Memory::free_static(local_48[0],false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    LineEdit::set_clear_button_enabled(SUB41(param_1,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::_notification(int) */

void __thiscall EventListenerLineEdit::_notification(EventListenerLineEdit *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* EventListenerLineEdit::gui_input(Ref<InputEvent> const&) */

void __thiscall EventListenerLineEdit::gui_input(EventListenerLineEdit *this,Ref *param_1)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Object *pOVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  lVar6 = *(long *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == 0) {
LAB_00103be1:
    if (this[0xbb4] == (EventListenerLineEdit)0x0) {
      Control::accept_event();
      cVar3 = InputEvent::is_pressed();
      if (cVar3 != '\0') {
        pOVar4 = (Object *)0x0;
        cVar3 = (**(code **)(**(long **)param_1 + 0x1c8))();
        if (cVar3 == '\0') {
LAB_00103d06:
          cVar3 = (**(code **)(**(long **)param_1 + 0x1e8))
                            (*(long **)param_1,(Ref *)(this + 3000),1);
          if ((cVar3 == '\0') && (cVar3 = _is_event_allowed(this,param_1), cVar3 != '\0')) {
            pOVar5 = *(Object **)param_1;
            pOVar2 = *(Object **)(this + 3000);
            if (pOVar5 != pOVar2) {
              *(Object **)(this + 3000) = pOVar5;
              if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
                *(undefined8 *)(this + 3000) = 0;
              }
              if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
                 && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            get_event_text((EventListenerLineEdit *)&local_80,(Ref *)(this + 3000),false);
            LineEdit::set_text(this);
            lVar6 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            pOVar5 = *(Object **)(this + 3000);
            if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              pOVar5 = (Object *)0x0;
            }
            StringName::StringName((StringName *)&local_80,"event_changed",false);
            Variant::Variant((Variant *)local_68,pOVar5);
            local_50 = 0;
            local_48 = (undefined1  [16])0x0;
            local_78[0] = (Variant *)local_68;
            (**(code **)(*(long *)this + 0xd0))(this,(EventListenerLineEdit *)&local_80,local_78,1);
            if (Variant::needs_deinit[(int)local_50] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
            if (((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
               (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          if (pOVar4 != (Object *)0x0) goto LAB_00103cbd;
        }
      }
    }
    else {
      this[0xbb4] = (EventListenerLineEdit)0x0;
    }
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_00103bb5:
      pOVar4 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
      if ((pOVar4 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0'))
      goto LAB_00103be1;
      local_68[0] = InputEventMouse::get_position();
      cVar3 = LineEdit::_is_over_clear_button((Vector2 *)this);
      if (cVar3 == '\0') {
        if (this[0xbb4] == (EventListenerLineEdit)0x0) {
          Control::accept_event();
          cVar3 = InputEvent::is_pressed();
          if ((cVar3 != '\0') &&
             (cVar3 = (**(code **)(**(long **)param_1 + 0x1c8))(), cVar3 == '\0'))
          goto LAB_00103d06;
        }
        else {
          this[0xbb4] = (EventListenerLineEdit)0x0;
        }
      }
      else {
        LineEdit::gui_input((Ref *)this);
      }
LAB_00103cbd:
      cVar3 = RefCounted::unreference();
    }
    else {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        lVar6 = *(long *)param_1;
        if (lVar6 == 0) goto LAB_00103be1;
        goto LAB_00103bb5;
      }
      LineEdit::gui_input((Ref *)this);
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_00103f49;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103f49:
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EventListenerLineEdit::is_class_ptr(void*) const */

uint EventListenerLineEdit::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x108c,in_RSI == &LineEdit::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108c,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108d,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108d,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

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



/* EventListenerLineEdit::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EventListenerLineEdit::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EventListenerLineEdit::_property_can_revertv(StringName const&) const */

undefined8 EventListenerLineEdit::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EventListenerLineEdit::_get_class_namev() const */

undefined8 * EventListenerLineEdit::_get_class_namev(void)

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
LAB_001041f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001041f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EventListenerLineEdit");
      goto LAB_0010425e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EventListenerLineEdit");
LAB_0010425e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&>::get_object
          (CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&> *this)

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
      goto LAB_0010438d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010438d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010438d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::get_object
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

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
      goto LAB_0010448d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010448d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010448d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EventListenerLineEdit::_validate_propertyv(PropertyInfo&) const */

void EventListenerLineEdit::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010b010 == Control::_validate_property) {
    return;
  }
  LineEdit::_validate_property(param_1);
  return;
}



/* EventListenerLineEdit::_setv(StringName const&, Variant const&) */

undefined8 EventListenerLineEdit::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010b018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104658) */
/* EventListenerLineEdit::_getv(StringName const&, Variant&) const */

undefined8 EventListenerLineEdit::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EventListenerLineEdit::~EventListenerLineEdit() */

void __thiscall EventListenerLineEdit::~EventListenerLineEdit(EventListenerLineEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001087c8;
  if (*(long *)(this + 3000) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 3000);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        LineEdit::~LineEdit((LineEdit *)this);
        return;
      }
    }
  }
  LineEdit::~LineEdit((LineEdit *)this);
  return;
}



/* EventListenerLineEdit::~EventListenerLineEdit() */

void __thiscall EventListenerLineEdit::~EventListenerLineEdit(EventListenerLineEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001087c8;
  if (*(long *)(this + 3000) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 3000);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  LineEdit::~LineEdit((LineEdit *)this);
  operator_delete(this,0xbc0);
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



/* EventListenerLineEdit::get_class() const */

void EventListenerLineEdit::get_class(void)

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
        if (pvVar5 == (void *)0x0) goto LAB_00104bd4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104bd4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::call
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00104e4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00104e4f;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00104fb5;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00104e4f:
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
LAB_00104fb5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&>::call
          (CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar4 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar2 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar3 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar10 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)(lVar2 + lVar3) + -1);
            }
            cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar5 = _LC13;
            if (cVar7 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar10)((long *)(lVar2 + lVar3));
            pcVar6 = local_48;
            if (local_48 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = (char *)0x0;
                Memory::free_static(pcVar6 + -0x10,false);
              }
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010508e;
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
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)&local_60);
  operator+((char *)&local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)&local_58);
  _err_print_error(&_LC12,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0);
  pcVar6 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
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
LAB_0010508e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  local_78 = &_LC14;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC14;
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
LAB_00105478:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105478;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105496;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105496:
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
            if (lVar5 == 0) goto LAB_0010577f;
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
LAB_0010577f:
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
    if (cVar6 != '\0') goto LAB_00105833;
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
              if (lVar5 == 0) goto LAB_0010590b;
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
LAB_0010590b:
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
      if (cVar6 != '\0') goto LAB_00105833;
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
                if (lVar5 == 0) goto LAB_001059eb;
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
LAB_001059eb:
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
        if (cVar6 != '\0') goto LAB_00105833;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00105a94;
    }
  }
LAB_00105833:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105a94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EventListenerLineEdit::is_class(String const&) const */

undefined8 __thiscall EventListenerLineEdit::is_class(EventListenerLineEdit *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00105b1f;
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
LAB_00105b1f:
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
    if (cVar6 != '\0') goto LAB_00105bd3;
  }
  cVar6 = String::operator==(param_1,"EventListenerLineEdit");
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
              if (lVar5 == 0) goto LAB_00105cbb;
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
LAB_00105cbb:
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
      if (cVar6 != '\0') goto LAB_00105bd3;
    }
    cVar6 = String::operator==(param_1,"LineEdit");
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
                if (lVar5 == 0) goto LAB_00105d9b;
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
LAB_00105d9b:
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
        if (cVar6 != '\0') goto LAB_00105bd3;
      }
      cVar6 = String::operator==(param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar7;
        }
        goto LAB_00105e44;
      }
    }
  }
LAB_00105bd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105e44:
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
LAB_00105fc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105fc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105fe5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105fe5:
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
  if ((code *)PTR__get_property_list_0010b028 != Object::_get_property_list) {
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
LAB_00106448:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106448;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106465;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106465:
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
  if ((code *)PTR__get_property_list_0010b030 != CanvasItem::_get_property_list) {
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



/* LineEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall LineEdit::_get_property_listv(LineEdit *this,List *param_1,bool param_2)

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
  local_78 = "LineEdit";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LineEdit";
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
  if (local_90 == 0) {
LAB_001068c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001068c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001068e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001068e5:
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
  StringName::StringName((StringName *)&local_78,"LineEdit",false);
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



/* EventListenerLineEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EventListenerLineEdit::_get_property_listv(EventListenerLineEdit *this,List *param_1,bool param_2)

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
    LineEdit::_get_property_listv((LineEdit *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EventListenerLineEdit";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EventListenerLineEdit";
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
  if (local_90 == 0) {
LAB_00106d18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106d18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106d35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106d35:
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
  StringName::StringName((StringName *)&local_78,"EventListenerLineEdit",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      LineEdit::_get_property_listv((LineEdit *)this,param_1,true);
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



/* EventListenerLineEdit::_bind_methods() [clone .cold] */

void EventListenerLineEdit::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EventListenerLineEdit::_initialize_classv() */

void EventListenerLineEdit::_initialize_classv(void)

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
    if (LineEdit::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0010b048 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
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
          if ((code *)PTR__bind_compatibility_methods_0010b038 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "CanvasItem";
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
        Control::_bind_methods();
        Control::initialize_class()::initialized = '\x01';
      }
      local_58 = "Control";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "LineEdit";
      local_70 = 0;
      local_50 = 8;
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
      if ((code *)PTR__bind_methods_0010b040 != Control::_bind_methods) {
        LineEdit::_bind_methods();
      }
      LineEdit::initialize_class()::initialized = '\x01';
    }
    local_58 = "LineEdit";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EventListenerLineEdit";
    local_70 = 0;
    local_50 = 0x15;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107aa8) */
/* WARNING: Removing unreachable block (ram,0x00107bd8) */
/* WARNING: Removing unreachable block (ram,0x00107d50) */
/* WARNING: Removing unreachable block (ram,0x00107be4) */
/* WARNING: Removing unreachable block (ram,0x00107bee) */
/* WARNING: Removing unreachable block (ram,0x00107d32) */
/* WARNING: Removing unreachable block (ram,0x00107bfa) */
/* WARNING: Removing unreachable block (ram,0x00107c04) */
/* WARNING: Removing unreachable block (ram,0x00107d14) */
/* WARNING: Removing unreachable block (ram,0x00107c10) */
/* WARNING: Removing unreachable block (ram,0x00107c1a) */
/* WARNING: Removing unreachable block (ram,0x00107cf6) */
/* WARNING: Removing unreachable block (ram,0x00107c26) */
/* WARNING: Removing unreachable block (ram,0x00107c30) */
/* WARNING: Removing unreachable block (ram,0x00107cd8) */
/* WARNING: Removing unreachable block (ram,0x00107c3c) */
/* WARNING: Removing unreachable block (ram,0x00107c46) */
/* WARNING: Removing unreachable block (ram,0x00107cba) */
/* WARNING: Removing unreachable block (ram,0x00107c4e) */
/* WARNING: Removing unreachable block (ram,0x00107c58) */
/* WARNING: Removing unreachable block (ram,0x00107c9f) */
/* WARNING: Removing unreachable block (ram,0x00107c60) */
/* WARNING: Removing unreachable block (ram,0x00107c75) */
/* WARNING: Removing unreachable block (ram,0x00107c81) */
/* String vformat<long, char const*, String>(String const&, long const, char const* const, String
   const) */

undefined8 *
vformat<long,char_const*,String>
          (undefined8 *param_1,bool *param_2,long param_3,char *param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00107e98) */
/* WARNING: Removing unreachable block (ram,0x00107fc8) */
/* WARNING: Removing unreachable block (ram,0x00108190) */
/* WARNING: Removing unreachable block (ram,0x00107fd4) */
/* WARNING: Removing unreachable block (ram,0x00107fde) */
/* WARNING: Removing unreachable block (ram,0x00108170) */
/* WARNING: Removing unreachable block (ram,0x00107fea) */
/* WARNING: Removing unreachable block (ram,0x00107ff4) */
/* WARNING: Removing unreachable block (ram,0x00108150) */
/* WARNING: Removing unreachable block (ram,0x00108000) */
/* WARNING: Removing unreachable block (ram,0x0010800a) */
/* WARNING: Removing unreachable block (ram,0x00108130) */
/* WARNING: Removing unreachable block (ram,0x00108016) */
/* WARNING: Removing unreachable block (ram,0x00108020) */
/* WARNING: Removing unreachable block (ram,0x00108110) */
/* WARNING: Removing unreachable block (ram,0x0010802c) */
/* WARNING: Removing unreachable block (ram,0x00108036) */
/* WARNING: Removing unreachable block (ram,0x001080f0) */
/* WARNING: Removing unreachable block (ram,0x00108042) */
/* WARNING: Removing unreachable block (ram,0x0010804c) */
/* WARNING: Removing unreachable block (ram,0x001080d0) */
/* WARNING: Removing unreachable block (ram,0x00108054) */
/* WARNING: Removing unreachable block (ram,0x0010806a) */
/* WARNING: Removing unreachable block (ram,0x00108076) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* Callable create_custom_callable_function_pointer<EventListenerLineEdit>(EventListenerLineEdit*,
   char const*, void (EventListenerLineEdit::*)()) */

EventListenerLineEdit *
create_custom_callable_function_pointer<EventListenerLineEdit>
          (EventListenerLineEdit *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00108bc0;
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



/* EventListenerLineEdit::_notificationv(int, bool) */

void __thiscall
EventListenerLineEdit::_notificationv(EventListenerLineEdit *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0010b050 != Control::_notification) {
      LineEdit::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_0010b050 != Control::_notification) {
    LineEdit::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  _notification(iVar1);
  return;
}



/* EventListenerLineEdit::get_event_text(Ref<InputEvent> const&, bool) */

void EventListenerLineEdit::_GLOBAL__sub_I_get_event_text(void)

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
/* EventListenerLineEdit::~EventListenerLineEdit() */

void __thiscall EventListenerLineEdit::~EventListenerLineEdit(EventListenerLineEdit *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EventListenerLineEdit, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

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


