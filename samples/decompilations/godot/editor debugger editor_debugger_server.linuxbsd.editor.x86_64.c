
/* EditorDebuggerServerTCP::stop() */

void EditorDebuggerServerTCP::stop(void)

{
  TCPServer::stop();
  return;
}



/* EditorDebuggerServerTCP::is_active() const */

void EditorDebuggerServerTCP::is_active(void)

{
  TCPServer::is_listening();
  return;
}



/* EditorDebuggerServerTCP::is_connection_available() const */

undefined8 EditorDebuggerServerTCP::is_connection_available(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = TCPServer::is_listening();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = TCPServer::is_connection_available();
  return uVar2;
}



/* EditorDebuggerServerTCP::take_connection() */

void EditorDebuggerServerTCP::take_connection(void)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  long *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*in_RSI + 0x178) == is_connection_available) {
    cVar2 = TCPServer::is_listening();
    if (cVar2 != '\0') {
      cVar2 = TCPServer::is_connection_available();
      goto joined_r0x001001a7;
    }
  }
  else {
    cVar2 = (**(code **)(*in_RSI + 0x178))();
joined_r0x001001a7:
    if (cVar2 != '\0') {
      pOVar3 = (Object *)operator_new(0x208,"");
      TCPServer::take_connection();
      RemoteDebuggerPeerTCP::RemoteDebuggerPeerTCP((RemoteDebuggerPeerTCP *)pOVar3);
      postinitialize_handler(pOVar3);
      *in_RDI = pOVar3;
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *in_RDI = 0;
      }
      if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
      goto LAB_001000c9;
    }
  }
  _err_print_error("take_connection","editor/debugger/editor_debugger_server.cpp",0x76,
                   "Condition \"!is_connection_available()\" is true. Returning: Ref<RemoteDebuggerPeer>()"
                   ,0,0);
  *in_RDI = 0;
LAB_001000c9:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorDebuggerServerTCP::get_uri() const */

void EditorDebuggerServerTCP::get_uri(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x188) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x188));
  }
  return;
}



/* EditorDebuggerServerTCP::EditorDebuggerServerTCP() */

void __thiscall EditorDebuggerServerTCP::EditorDebuggerServerTCP(EditorDebuggerServerTCP *this)

{
  char cVar1;
  TCPServer *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00103c28;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  this_00 = (TCPServer *)operator_new(0x188,"");
  TCPServer::TCPServer(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)(this + 0x180);
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(this + 0x180) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (TCPServer *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)(this + 0x180);
    pOVar2 = pOVar3;
    if (this_00 == (TCPServer *)pOVar3) goto LAB_0010033e;
    *(TCPServer **)(this + 0x180) = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)(this + 0x180) = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010033e;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (TCPServer *)0x0) {
    return;
  }
LAB_0010033e:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* EditorDebuggerServerTCP::create(String const&) */

EditorDebuggerServerTCP * EditorDebuggerServerTCP::create(String *param_1)

{
  char cVar1;
  EditorDebuggerServerTCP *this;
  
  cVar1 = String::operator!=(param_1,"tcp://");
  if (cVar1 == '\0') {
    this = (EditorDebuggerServerTCP *)operator_new(400,"");
    EditorDebuggerServerTCP(this);
    postinitialize_handler((Object *)this);
    return this;
  }
  _err_print_error("create","editor/debugger/editor_debugger_server.cpp",0x3b,
                   "Condition \"p_protocol != \"tcp://\"\" is true. Returning: nullptr",0,0);
  return (EditorDebuggerServerTCP *)0x0;
}



/* EditorDebuggerServer::deinitialize() */

void EditorDebuggerServer::deinitialize(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  
  if ((protocols._8_8_ != 0) && (protocols._44_4_ != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)protocols._40_4_ * 4);
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(protocols._16_8_ + lVar3) != 0) {
          *(int *)(protocols._16_8_ + lVar3) = 0;
          pvVar2 = *(void **)(protocols._8_8_ + lVar3 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(protocols._8_8_ + lVar3 * 2) = 0;
        }
        lVar3 = lVar3 + 4;
      } while ((ulong)uVar1 << 2 != lVar3);
    }
    protocols._44_4_ = 0;
    protocols._24_16_ = (undefined1  [16])0x0;
    return;
  }
  return;
}



/* EditorDebuggerServerTCP::start(String const&) */

int __thiscall EditorDebuggerServerTCP::start(EditorDebuggerServerTCP *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  int local_84;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "network/debug/remote_host";
  local_60 = 0x19;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_70 = 0;
  local_68 = "network/debug/remote_port";
  local_60 = 0x19;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  local_84 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) ||
     (cVar6 = String::operator!=(param_1,"tcp://"), cVar6 == '\0')) {
LAB_00100648:
    iVar10 = 5;
    while( true ) {
      uVar2 = *(undefined8 *)(this + 0x180);
      IPAddress::IPAddress((IPAddress *)local_58,(String *)&local_80);
      iVar7 = TCPServer::listen((ushort)uVar2,(IPAddress *)(ulong)(ushort)local_84);
      iVar5 = local_84;
      if (iVar7 == 0) break;
      uVar2 = *(undefined8 *)(EditorNode::singleton + 0x5d0);
      iVar10 = iVar10 + -1;
      iVar9 = (int)(StrRange *)&local_70;
      if (iVar10 == 0) {
        local_68 = "Cannot listen on port %d, remote debugging unavailable.";
        local_70 = 0;
        local_60 = 0x37;
        String::parse_latin1((StrRange *)&local_70);
        vformat<int>((String *)&local_68,iVar9);
        EditorLog::add_message(uVar2,(String *)&local_68,1);
        pcVar4 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        goto LAB_001007c7;
      }
      local_84 = local_84 + 1;
      local_68 = "Cannot listen on port %d, trying %d instead.";
      local_70 = 0;
      local_60 = 0x2c;
      String::parse_latin1((StrRange *)&local_70);
      vformat<int,int>((String *)&local_68,iVar9,iVar5);
      EditorLog::add_message(uVar2,(String *)&local_68,3);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar3 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    local_70 = 0;
    plVar1 = (long *)(local_80 + -0x10);
    if (local_80 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_001009ee;
        LOCK();
        lVar8 = *plVar1;
        bVar11 = lVar3 == lVar8;
        if (bVar11) {
          *plVar1 = lVar3 + 1;
          lVar8 = lVar3;
        }
        UNLOCK();
      } while (!bVar11);
      if (lVar8 != -1) {
        local_70 = local_80;
      }
    }
LAB_001009ee:
    local_68 = "tcp://%s:%d";
    local_78 = 0;
    local_60 = 0xb;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String,int>((String *)&local_68,(StrRange *)&local_78,(StrRange *)&local_70,iVar5);
    pcVar4 = *(char **)(this + 0x188);
    if (pcVar4 == local_68) {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_68 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(this + 0x188);
          *(undefined8 *)(this + 0x188) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      *(char **)(this + 0x188) = local_68;
    }
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
LAB_001007c7:
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x0;
    iVar7 = String::parse_url(param_1,(String *)&local_78,(int *)&local_80,(String *)&local_84,
                              (String *)&local_70);
    if (iVar7 == 0) {
      cVar6 = String::is_valid_ip_address();
      if ((cVar6 != '\0') || (cVar6 = String::operator!=((String *)&local_80,"*"), cVar6 == '\0')) {
        pcVar4 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        goto LAB_00100648;
      }
      _err_print_error("start","editor/debugger/editor_debugger_server.cpp",0x51,
                       "Condition \"!bind_host.is_valid_ip_address() && bind_host != \"*\"\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
    }
    else {
      _err_print_error("start","editor/debugger/editor_debugger_server.cpp",0x50,
                       "Condition \"err != OK\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    iVar7 = 0x1f;
  }
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* EditorDebuggerServer::create(String const&) */

undefined8 EditorDebuggerServer::create(String *param_1)

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
  bool bVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  if ((protocols._8_8_ == 0) || (protocols._44_4_ == 0)) {
joined_r0x00100db7:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)protocols._40_4_ * 4);
    uVar19 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)protocols._40_4_ * 8);
    if (local_48 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(local_48 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar19;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar17 = *(uint *)(protocols._16_8_ + lVar16 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar17 == 0) goto joined_r0x00100db7;
    uVar18 = 0;
    do {
      if ((uVar12 == uVar17) &&
         (*(long *)(*(long *)(protocols._8_8_ + lVar16 * 8) + 0x10) == local_48)) {
        bVar11 = false;
        goto LAB_00100e2b;
      }
      uVar18 = uVar18 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar16 = SUB168(auVar4 * auVar8,8);
      uVar17 = *(uint *)(protocols._16_8_ + lVar16 * 4);
      iVar15 = SUB164(auVar4 * auVar8,8);
    } while ((uVar17 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
            auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
            auVar10._8_8_ = 0, auVar10._0_8_ = uVar19, uVar18 <= SUB164(auVar6 * auVar10,8)));
    bVar11 = true;
LAB_00100e2b:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (!bVar11) {
      StringName::StringName((StringName *)&local_48,param_1,false);
      puVar13 = (undefined8 *)
                HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
                ::operator[]((HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
                              *)protocols,(StringName *)&local_48);
      uVar14 = (*(code *)*puVar13)(param_1);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00100df0;
    }
  }
  uVar14 = 0;
  _err_print_error("create","editor/debugger/editor_debugger_server.cpp",0x7e,
                   "Condition \"!protocols.has(p_protocol)\" is true. Returning: nullptr",0,0);
LAB_00100df0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* EditorDebuggerServer::register_protocol_handler(String const&, EditorDebuggerServer* (*)(String
   const&)) */

void EditorDebuggerServer::register_protocol_handler
               (String *param_1,_func_EditorDebuggerServer_ptr_String_ptr *param_2)

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
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  if ((protocols._8_8_ == 0) || (protocols._44_4_ == 0)) {
joined_r0x00101007:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)protocols._40_4_ * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)protocols._40_4_ * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(protocols._16_8_ + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 == 0) goto joined_r0x00101007;
    uVar16 = 0;
    do {
      if ((uVar11 == uVar15) &&
         (*(long *)(*(long *)(protocols._8_8_ + lVar14 * 8) + 0x10) == local_48)) {
        bVar18 = true;
        goto LAB_00101087;
      }
      uVar16 = uVar16 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar14 = SUB168(auVar4 * auVar8,8);
      uVar15 = *(uint *)(protocols._16_8_ + lVar14 * 4);
      iVar13 = SUB164(auVar4 * auVar8,8);
    } while ((uVar15 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
            auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
            auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    bVar18 = false;
LAB_00101087:
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (bVar18) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("register_protocol_handler","editor/debugger/editor_debugger_server.cpp",
                         0x83,"Condition \"protocols.has(p_protocol)\" is true.",0,0);
        return;
      }
      goto LAB_00101103;
    }
  }
  StringName::StringName((StringName *)&local_48,param_1,false);
  puVar12 = (undefined8 *)
            HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
            ::operator[]((HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
                          *)protocols,(StringName *)&local_48);
  bVar18 = StringName::configured != '\0';
  *puVar12 = param_2;
  if ((bVar18) && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101103:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerServer::initialize() */

void EditorDebuggerServer::initialize(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_30;
  char *local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = "tcp://";
  local_20 = 6;
  String::parse_latin1((StrRange *)&local_30);
  register_protocol_handler((String *)&local_30,EditorDebuggerServerTCP::create);
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x103e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x103e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorDebuggerServerTCP::poll() */

void EditorDebuggerServerTCP::poll(void)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103ac8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00101393:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101393;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001013fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001013fe:
  return &_get_class_namev()::_class_name_static;
}



/* HashMap<StringName, EditorDebuggerServer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorDebuggerServer* (*)(String const&)> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
::~HashMap(HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
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
          bVar4 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
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



/* EditorDebuggerServerTCP::~EditorDebuggerServerTCP() */

void __thiscall EditorDebuggerServerTCP::~EditorDebuggerServerTCP(EditorDebuggerServerTCP *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00103c28;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00103ac8;
  Object::~Object((Object *)this);
  return;
}



/* EditorDebuggerServerTCP::~EditorDebuggerServerTCP() */

void __thiscall EditorDebuggerServerTCP::~EditorDebuggerServerTCP(EditorDebuggerServerTCP *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00103c28;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00103ac8;
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00101abf;
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
LAB_00101abf:
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
    if (cVar6 != '\0') goto LAB_00101b73;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00101c23;
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
LAB_00101c23:
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
      if (cVar6 != '\0') goto LAB_00101b73;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101b73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
        if (pvVar5 == (void *)0x0) goto LAB_00101e34;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00101e34:
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



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
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
  local_78 = "RefCounted";
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
  if (local_90 == 0) {
LAB_001021c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001021c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001021e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001021e6:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001025d8) */
/* WARNING: Removing unreachable block (ram,0x00102708) */
/* WARNING: Removing unreachable block (ram,0x001028d0) */
/* WARNING: Removing unreachable block (ram,0x00102714) */
/* WARNING: Removing unreachable block (ram,0x0010271e) */
/* WARNING: Removing unreachable block (ram,0x001028b0) */
/* WARNING: Removing unreachable block (ram,0x0010272a) */
/* WARNING: Removing unreachable block (ram,0x00102734) */
/* WARNING: Removing unreachable block (ram,0x00102890) */
/* WARNING: Removing unreachable block (ram,0x00102740) */
/* WARNING: Removing unreachable block (ram,0x0010274a) */
/* WARNING: Removing unreachable block (ram,0x00102870) */
/* WARNING: Removing unreachable block (ram,0x00102756) */
/* WARNING: Removing unreachable block (ram,0x00102760) */
/* WARNING: Removing unreachable block (ram,0x00102850) */
/* WARNING: Removing unreachable block (ram,0x0010276c) */
/* WARNING: Removing unreachable block (ram,0x00102776) */
/* WARNING: Removing unreachable block (ram,0x00102830) */
/* WARNING: Removing unreachable block (ram,0x00102782) */
/* WARNING: Removing unreachable block (ram,0x0010278c) */
/* WARNING: Removing unreachable block (ram,0x00102810) */
/* WARNING: Removing unreachable block (ram,0x00102794) */
/* WARNING: Removing unreachable block (ram,0x001027aa) */
/* WARNING: Removing unreachable block (ram,0x001027b6) */
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



/* WARNING: Removing unreachable block (ram,0x00102a50) */
/* WARNING: Removing unreachable block (ram,0x00102b80) */
/* WARNING: Removing unreachable block (ram,0x00102cf9) */
/* WARNING: Removing unreachable block (ram,0x00102b8c) */
/* WARNING: Removing unreachable block (ram,0x00102b96) */
/* WARNING: Removing unreachable block (ram,0x00102cdb) */
/* WARNING: Removing unreachable block (ram,0x00102ba2) */
/* WARNING: Removing unreachable block (ram,0x00102bac) */
/* WARNING: Removing unreachable block (ram,0x00102cbd) */
/* WARNING: Removing unreachable block (ram,0x00102bb8) */
/* WARNING: Removing unreachable block (ram,0x00102bc2) */
/* WARNING: Removing unreachable block (ram,0x00102c9f) */
/* WARNING: Removing unreachable block (ram,0x00102bce) */
/* WARNING: Removing unreachable block (ram,0x00102bd8) */
/* WARNING: Removing unreachable block (ram,0x00102c81) */
/* WARNING: Removing unreachable block (ram,0x00102be4) */
/* WARNING: Removing unreachable block (ram,0x00102bee) */
/* WARNING: Removing unreachable block (ram,0x00102c63) */
/* WARNING: Removing unreachable block (ram,0x00102bf6) */
/* WARNING: Removing unreachable block (ram,0x00102c00) */
/* WARNING: Removing unreachable block (ram,0x00102c48) */
/* WARNING: Removing unreachable block (ram,0x00102c08) */
/* WARNING: Removing unreachable block (ram,0x00102c1e) */
/* WARNING: Removing unreachable block (ram,0x00102c2a) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00102e70) */
/* WARNING: Removing unreachable block (ram,0x00102fa0) */
/* WARNING: Removing unreachable block (ram,0x00103119) */
/* WARNING: Removing unreachable block (ram,0x00102fac) */
/* WARNING: Removing unreachable block (ram,0x00102fb6) */
/* WARNING: Removing unreachable block (ram,0x001030fb) */
/* WARNING: Removing unreachable block (ram,0x00102fc2) */
/* WARNING: Removing unreachable block (ram,0x00102fcc) */
/* WARNING: Removing unreachable block (ram,0x001030dd) */
/* WARNING: Removing unreachable block (ram,0x00102fd8) */
/* WARNING: Removing unreachable block (ram,0x00102fe2) */
/* WARNING: Removing unreachable block (ram,0x001030bf) */
/* WARNING: Removing unreachable block (ram,0x00102fee) */
/* WARNING: Removing unreachable block (ram,0x00102ff8) */
/* WARNING: Removing unreachable block (ram,0x001030a1) */
/* WARNING: Removing unreachable block (ram,0x00103004) */
/* WARNING: Removing unreachable block (ram,0x0010300e) */
/* WARNING: Removing unreachable block (ram,0x00103083) */
/* WARNING: Removing unreachable block (ram,0x00103016) */
/* WARNING: Removing unreachable block (ram,0x00103020) */
/* WARNING: Removing unreachable block (ram,0x00103068) */
/* WARNING: Removing unreachable block (ram,0x00103028) */
/* WARNING: Removing unreachable block (ram,0x0010303e) */
/* WARNING: Removing unreachable block (ram,0x0010304a) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EditorDebuggerServer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorDebuggerServer* (*)(String const&)> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
::operator[](HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
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
LAB_00103858:
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
        goto LAB_00103708;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010370c:
      if (iVar46 != 0) {
LAB_00103714:
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
              goto LAB_0010330c;
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
      goto LAB_00103343;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00103343;
    if (iVar46 != 0) goto LAB_00103714;
LAB_00103369:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010330c;
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
            goto LAB_0010330c;
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
      if (lVar43 == 0) goto LAB_00103858;
LAB_00103708:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010370c;
    }
LAB_00103343:
    if ((float)uVar40 * __LC24 < (float)(iVar46 + 1)) goto LAB_00103369;
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
    if (lVar43 == 0) goto LAB_0010381d;
LAB_001035f7:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_001035f7;
LAB_0010381d:
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
LAB_0010330c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerServerTCP::create(String const&) */

void EditorDebuggerServerTCP::_GLOBAL__sub_I_create(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC33;
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper._56_8_ = _LC33;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  EditorDebuggerServer::protocols._40_8_ = uVar1;
  EditorDebuggerServer::protocols._8_16_ = (undefined1  [16])0x0;
  EditorDebuggerServer::protocols._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
               ::~HashMap,EditorDebuggerServer::protocols,&__dso_handle);
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
/* EditorDebuggerServerTCP::~EditorDebuggerServerTCP() */

void __thiscall EditorDebuggerServerTCP::~EditorDebuggerServerTCP(EditorDebuggerServerTCP *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorDebuggerServer* (*)(String const&), HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorDebuggerServer* (*)(String const&)> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
::~HashMap(HashMap<StringName,EditorDebuggerServer*(*)(String_const&),HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorDebuggerServer*(*)(String_const&)>>>
           *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


