
/* MIDIDriver::get_singleton() */

undefined8 MIDIDriver::get_singleton(void)

{
  return singleton;
}



/* MIDIDriver::MIDIDriver() */

void __thiscall MIDIDriver::MIDIDriver(MIDIDriver *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = &DAT_00100858;
  singleton = this;
  return;
}



/* MIDIDriver::Parser::category(unsigned char) */

uint MIDIDriver::Parser::category(uchar param_1)

{
  uint uVar1;
  
  uVar1 = 5;
  if (param_1 < 0xf8) {
    if (param_1 < 0xf0) {
      return (uint)(int)(char)param_1 >> 0x1f;
    }
    if (param_1 != 0xf0) {
      return (param_1 == 0xf7) + 3;
    }
    uVar1 = 2;
  }
  return uVar1;
}



/* MIDIDriver::Parser::status_to_msg_enum(unsigned char) */

byte MIDIDriver::Parser::status_to_msg_enum(uchar param_1)

{
  if (-1 < (char)param_1) {
    return 0;
  }
  if (param_1 < 0xf0) {
    param_1 = param_1 >> 4;
  }
  return param_1;
}



/* MIDIDriver::Parser::expected_data(unsigned char) */

undefined1 MIDIDriver::Parser::expected_data(uchar param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((char)param_1 < '\0') {
    if (param_1 < 0xf0) {
      if (param_1 >> 4 != 0xe) {
        return (param_1 >> 4 < 0xc) + '\x01';
      }
      return 2;
    }
    uVar1 = 1;
    if (param_1 != 0xf1) {
      if (param_1 < 0xf2) {
        return false;
      }
      uVar1 = 2;
      if (param_1 != 0xf2) {
        return param_1 == 0xf3;
      }
    }
  }
  return uVar1;
}



/* MIDIDriver::Parser::expected_data(MIDIMessage) */

char MIDIDriver::Parser::expected_data(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0xf1) {
    uVar1 = 1;
  }
  else if (param_1 < 0xf2) {
    if (0xd < param_1) {
      return (param_1 == 0xe) * '\x02';
    }
    uVar1 = 1;
    if (param_1 < 0xc) {
      return (param_1 - 8U < 4) * '\x02';
    }
  }
  else {
    uVar1 = 2;
    if (param_1 != 0xf2) {
      return param_1 == 0xf3;
    }
  }
  return uVar1;
}



/* MIDIDriver::Parser::channel(unsigned char) */

byte MIDIDriver::Parser::channel(uchar param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((byte)(param_1 + 0x80) < 0x70) {
    bVar1 = param_1 & 0xf;
  }
  return bVar1;
}



/* MIDIDriver::send_event(int, unsigned char, unsigned char const*, unsigned long) */

void MIDIDriver::send_event(int param_1,uchar param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  Resource *this;
  Ref *pRVar3;
  Object *pOVar4;
  ulong uVar5;
  int iVar6;
  byte bVar7;
  Resource *pRVar8;
  long in_FS_OFFSET;
  Object *local_48;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar7 = 0;
  if ((char)param_2 < '\0') {
    if (param_2 < 0xf0) {
      param_2 = param_2 >> 4;
      if (param_2 == 0xe) {
LAB_001005d0:
        uVar5 = 2;
        bVar7 = param_2;
      }
      else {
        uVar5 = (ulong)(param_2 < 0xc) + 1;
        bVar7 = param_2;
      }
      if (param_4 < uVar5) {
LAB_00100408:
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("send_event","core/os/midi_driver.cpp",0x6c,
                           "Condition \"p_data_len < Parser::expected_data(msg)\" is true.",0,0);
          return;
        }
        goto LAB_001005da;
      }
    }
    else {
      bVar7 = param_2;
      if (param_2 == 0xf1) {
LAB_0010053a:
        if (param_4 == 0) goto LAB_00100408;
      }
      else if (param_2 < 0xf2) {
        bVar7 = 0xf0;
      }
      else {
        if (param_2 == 0xf2) goto LAB_001005d0;
        if (param_2 == 0xf3) goto LAB_0010053a;
      }
    }
  }
  pRVar8 = (Resource *)0x0;
  this = (Resource *)operator_new(0x268,"");
  Resource::Resource(this);
  *(undefined2 *)(this + 0x244) = 0;
  *(code **)this = RefCounted::init_ref;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 != '\0') {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pRVar8 = this;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  iVar6 = (int)pRVar8;
  InputEvent::set_device(iVar6);
  InputEventMIDI::set_channel(iVar6);
  InputEventMIDI::set_message(pRVar8,bVar7);
  switch(bVar7) {
  case 8:
  case 9:
    InputEventMIDI::set_pitch(iVar6);
    InputEventMIDI::set_velocity(iVar6);
    pRVar3 = (Ref *)Input::get_singleton();
    break;
  case 10:
    InputEventMIDI::set_pitch(iVar6);
    goto LAB_001004ad;
  case 0xb:
    InputEventMIDI::set_controller_number(iVar6);
    InputEventMIDI::set_controller_value(iVar6);
    pRVar3 = (Ref *)Input::get_singleton();
    break;
  case 0xc:
    InputEventMIDI::set_instrument(iVar6);
    pRVar3 = (Ref *)Input::get_singleton();
    break;
  case 0xd:
LAB_001004ad:
    InputEventMIDI::set_pressure(iVar6);
    pRVar3 = (Ref *)Input::get_singleton();
    break;
  case 0xe:
    InputEventMIDI::set_pitch(iVar6);
  default:
    pRVar3 = (Ref *)Input::get_singleton();
  }
  local_48 = (Object *)0x0;
  pOVar4 = (Object *)__dynamic_cast(pRVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
  if ((pOVar4 != (Object *)0x0) &&
     (cVar2 = RefCounted::reference(), local_48 = pOVar4, cVar2 == '\0')) {
    local_48 = (Object *)0x0;
  }
  Input::parse_input_event(pRVar3);
  if (((local_48 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 == '\0') || (cVar2 = predelete_handler((Object *)pRVar8), cVar2 == '\0')) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pRVar8 + 0x140))(pRVar8);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pRVar8,false);
      return;
    }
  }
LAB_001005da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MIDIDriver::Parser::parse_fragment(unsigned char) */

void __thiscall MIDIDriver::Parser::parse_fragment(Parser *this,uchar param_1)

{
  ulong uVar1;
  ulong uVar2;
  Parser PVar3;
  uchar uVar4;
  
  uVar4 = param_1;
  if (param_1 < 0xf8) {
    if (param_1 < 0xf0) {
      if (-1 < (char)param_1) {
        if (this[0x18] != (Parser)0x0) {
          return;
        }
        PVar3 = this[0xc];
        uVar2 = expected_data((uchar)PVar3);
        uVar1 = *(ulong *)(this + 0x10);
        if (uVar2 <= uVar1) {
          return;
        }
        this[uVar1 + 0xd] = (Parser)param_1;
        uVar1 = uVar1 + 1;
        *(ulong *)(this + 0x10) = uVar1;
        if (uVar1 != uVar2) {
          return;
        }
        send_event(*(int *)(this + 8),(uchar)PVar3,(uchar *)(this + 0xd),uVar1);
        *(undefined8 *)(this + 0x10) = 0;
        if ((byte)((char)this[0xc] + 0x80U) < 0x70) {
          return;
        }
        this[0xc] = (Parser)0x0;
        return;
      }
    }
    else {
      if (param_1 == 0xf0) {
        this[0xc] = (Parser)0xf0;
        this[0x18] = (Parser)0x1;
        return;
      }
      if (param_1 == 0xf7) {
        this[0xc] = (Parser)0x0;
        this[0x18] = (Parser)0x0;
        return;
      }
    }
    this[0x18] = (Parser)0x0;
    *(undefined8 *)(this + 0x10) = 0;
    this[0xc] = (Parser)0x0;
    uVar1 = expected_data(param_1);
    if (2 < uVar1) {
      _err_print_error("parse_fragment","core/os/midi_driver.cpp",0xa9,
                       "Condition \"expected_data(p_fragment) > DATA_BUFFER_SIZE\" is true.",0,0);
      return;
    }
    if (uVar1 != 0) {
      this[0xc] = (Parser)param_1;
      return;
    }
  }
  send_event(*(int *)(this + 8),uVar4,(uchar *)0x0,0);
  return;
}



/* MIDIDriver::get_connected_inputs() const */

void MIDIDriver::get_connected_inputs(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_RSI;
  long in_RDI;
  bool bVar4;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  plVar1 = (long *)(*(long *)(in_RSI + 0x10) + -0x10);
  if (*(long *)(in_RSI + 0x10) != 0) {
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
      *(undefined8 *)(in_RDI + 8) = *(undefined8 *)(in_RSI + 0x10);
    }
  }
  return;
}


