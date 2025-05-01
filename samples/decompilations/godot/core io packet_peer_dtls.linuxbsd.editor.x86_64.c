
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



/* PacketPeerDTLS::create(bool) */

undefined8 PacketPeerDTLS::create(bool param_1)

{
  undefined8 uVar1;
  
  if (_create != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_create)(param_1);
    return uVar1;
  }
  return 0;
}



/* PacketPeerDTLS::is_available() */

undefined1 PacketPeerDTLS::is_available(void)

{
  return available;
}



/* PacketPeerDTLS::_bind_methods() */

void PacketPeerDTLS::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  MethodBind *pMVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  char *local_c8;
  long local_c0;
  long *local_b8;
  long local_a8;
  Variant *local_98;
  char *pcStack_90;
  char *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_c8,(char ***)&_LC11,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerDTLS>((_func_void *)0x191);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "client_options";
  auStack_70._8_8_ = &local_88;
  auStack_70._0_8_ = &pcStack_90;
  local_98 = (Variant *)0x1019f0;
  pcStack_90 = "hostname";
  local_80 = 0;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"connect_to_peer",(uint)(Variant *)&local_78);
  Variant::Variant((Variant *)&local_78,(Object *)0x0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<PacketPeerDTLS,Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>
                     ((_func_Error_Ref_String_ptr_Ref *)0x199);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_status",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerDTLS,PacketPeerDTLS::Status>((_func_Status *)0x1a9);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"disconnect_from_peer",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerDTLS>((_func_void *)0x1a1);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"STATUS_DISCONNECTED",false);
  local_c8 = "STATUS_DISCONNECTED";
  local_e0 = 0;
  local_c0 = 0x13;
  String::parse_latin1((StrRange *)&local_e0);
  GetTypeInfo<PacketPeerDTLS::Status,void>::get_class_info
            ((GetTypeInfo<PacketPeerDTLS::Status,void> *)&local_c8);
  lVar3 = local_a8;
  local_d8 = local_b8;
  local_b8 = (long *)0x0;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_c8 = "PacketPeerDTLS";
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_c8,(StringName *)&local_d8,(StringName *)&local_d0,0,false);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"STATUS_HANDSHAKING",false);
  local_c8 = "STATUS_HANDSHAKING";
  local_e0 = 0;
  local_c0 = 0x12;
  String::parse_latin1((StrRange *)&local_e0);
  GetTypeInfo<PacketPeerDTLS::Status,void>::get_class_info
            ((GetTypeInfo<PacketPeerDTLS::Status,void> *)&local_c8);
  lVar3 = local_a8;
  local_d8 = local_b8;
  local_b8 = (long *)0x0;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_c8 = "PacketPeerDTLS";
  local_e8 = 0;
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_c8,(StringName *)&local_d8,(StringName *)&local_d0,1,false);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"STATUS_CONNECTED",false);
  local_c8 = "STATUS_CONNECTED";
  local_e0 = 0;
  local_c0 = 0x10;
  String::parse_latin1((StrRange *)&local_e0);
  GetTypeInfo<PacketPeerDTLS::Status,void>::get_class_info
            ((GetTypeInfo<PacketPeerDTLS::Status,void> *)&local_c8);
  lVar3 = local_a8;
  local_d8 = local_b8;
  local_b8 = (long *)0x0;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_c8 = "PacketPeerDTLS";
  local_e8 = 0;
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_c8,(StringName *)&local_d8,(StringName *)&local_d0,2,false);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"STATUS_ERROR",false);
  local_c8 = "STATUS_ERROR";
  local_e0 = 0;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)&local_e0);
  GetTypeInfo<PacketPeerDTLS::Status,void>::get_class_info
            ((GetTypeInfo<PacketPeerDTLS::Status,void> *)&local_c8);
  lVar3 = local_a8;
  local_d8 = local_b8;
  local_b8 = (long *)0x0;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_c8 = "PacketPeerDTLS";
  local_e8 = 0;
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_c8,(StringName *)&local_d8,(StringName *)&local_d0,3,false);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"STATUS_ERROR_HOSTNAME_MISMATCH",false);
  local_c8 = "STATUS_ERROR_HOSTNAME_MISMATCH";
  local_e0 = 0;
  local_c0 = 0x1e;
  String::parse_latin1((StrRange *)&local_e0);
  GetTypeInfo<PacketPeerDTLS::Status,void>::get_class_info
            ((GetTypeInfo<PacketPeerDTLS::Status,void> *)&local_c8);
  lVar3 = local_a8;
  local_d8 = local_b8;
  local_b8 = (long *)0x0;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_c8 = "PacketPeerDTLS";
  local_e8 = 0;
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_c8,(StringName *)&local_d8,(StringName *)&local_d0,4,false);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* MethodBindTRC<PacketPeerDTLS::Status>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<PacketPeerDTLS::Status>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<PacketPeerDTLS::Status>::get_argument_meta(int) const */

undefined8 MethodBindTRC<PacketPeerDTLS::Status>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::_gen_argument_type(int)
   const */

undefined8 __thiscall
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::_gen_argument_type
          (MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (((uint)param_1 < 3) && (uVar1 = 0x18, param_1 == 1)) {
    uVar1 = 4;
  }
  return uVar1;
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::get_argument_meta(int)
   const */

undefined8
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::get_argument_meta(int param_1)

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



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001044b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001044b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<PacketPeerDTLS::Status>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PacketPeerDTLS::Status>::~MethodBindTRC(MethodBindTRC<PacketPeerDTLS::Status> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104518;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<PacketPeerDTLS::Status>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PacketPeerDTLS::Status>::~MethodBindTRC(MethodBindTRC<PacketPeerDTLS::Status> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104518;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x101115);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC1;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x001011ea;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC1;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x001011ea:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* MethodBindTRC<PacketPeerDTLS::Status>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<PacketPeerDTLS::Status>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "PacketPeerDTLS::Status";
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<PacketPeerDTLS::Status, void>::get_class_info() */

GetTypeInfo<PacketPeerDTLS::Status,void> * __thiscall
GetTypeInfo<PacketPeerDTLS::Status,void>::get_class_info
          (GetTypeInfo<PacketPeerDTLS::Status,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "PacketPeerDTLS::Status";
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PacketPeerDTLS>(void (PacketPeerDTLS::*)()) */

MethodBind * create_method_bind<PacketPeerDTLS>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00104458;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerDTLS";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PacketPeerDTLS, Error, Ref<PacketPeerUDP>, String const&,
   Ref<TLSOptions> >(Error (PacketPeerDTLS::*)(Ref<PacketPeerUDP>, String const&, Ref<TLSOptions>))
    */

MethodBind *
create_method_bind<PacketPeerDTLS,Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>
          (_func_Error_Ref_String_ptr_Ref *param_1)

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
  *(_func_Error_Ref_String_ptr_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001044b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "PacketPeerDTLS";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PacketPeerDTLS, PacketPeerDTLS::Status>(PacketPeerDTLS::Status
   (PacketPeerDTLS::*)() const) */

MethodBind * create_method_bind<PacketPeerDTLS,PacketPeerDTLS::Status>(_func_Status *param_1)

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
  *(_func_Status **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00104518;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerDTLS";
  local_30 = 0xe;
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



/* PacketPeerDTLS::_bind_methods() [clone .cold] */

void PacketPeerDTLS::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00101c68) */
/* WARNING: Removing unreachable block (ram,0x00101d98) */
/* WARNING: Removing unreachable block (ram,0x00101f60) */
/* WARNING: Removing unreachable block (ram,0x00101da4) */
/* WARNING: Removing unreachable block (ram,0x00101dae) */
/* WARNING: Removing unreachable block (ram,0x00101f40) */
/* WARNING: Removing unreachable block (ram,0x00101dba) */
/* WARNING: Removing unreachable block (ram,0x00101dc4) */
/* WARNING: Removing unreachable block (ram,0x00101f20) */
/* WARNING: Removing unreachable block (ram,0x00101dd0) */
/* WARNING: Removing unreachable block (ram,0x00101dda) */
/* WARNING: Removing unreachable block (ram,0x00101f00) */
/* WARNING: Removing unreachable block (ram,0x00101de6) */
/* WARNING: Removing unreachable block (ram,0x00101df0) */
/* WARNING: Removing unreachable block (ram,0x00101ee0) */
/* WARNING: Removing unreachable block (ram,0x00101dfc) */
/* WARNING: Removing unreachable block (ram,0x00101e06) */
/* WARNING: Removing unreachable block (ram,0x00101ec0) */
/* WARNING: Removing unreachable block (ram,0x00101e12) */
/* WARNING: Removing unreachable block (ram,0x00101e1c) */
/* WARNING: Removing unreachable block (ram,0x00101ea0) */
/* WARNING: Removing unreachable block (ram,0x00101e24) */
/* WARNING: Removing unreachable block (ram,0x00101e3a) */
/* WARNING: Removing unreachable block (ram,0x00101e46) */
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



/* MethodBindTRC<PacketPeerDTLS::Status>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<PacketPeerDTLS::Status>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC30,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00102130;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00102130:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PacketPeerDTLS::Status>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<PacketPeerDTLS::Status>::validated_call
          (MethodBindTRC<PacketPeerDTLS::Status> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00102424;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00102424:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PacketPeerDTLS::Status>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<PacketPeerDTLS::Status>::ptrcall
          (MethodBindTRC<PacketPeerDTLS::Status> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00102623;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00102623:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC30,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001028f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
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
LAB_001028f0:
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
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00102ceb;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00102ceb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00102edb;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00102edb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::ptrcall
          (MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>> *this,
          Object *param_1,void **param_2,void *param_3)

{
  Object *pOVar1;
  long lVar2;
  void *pvVar3;
  Object *pOVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x101f88;
      local_60 = (Object *)0x0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      pOVar4 = local_60;
      if (local_60 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_60 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_60 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00102fbc;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)param_2[2] == (long *)0x0) || (local_60 = *param_2[2], local_60 == (Object *)0x0)) {
LAB_00102f54:
    local_60 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') goto LAB_00102f54;
  }
  pvVar3 = param_2[1];
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_58 = **param_2, local_58 == (Object *)0x0)) {
LAB_00102fe0:
    local_58 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') goto LAB_00102fe0;
  }
  uVar6 = (*pcVar8)(param_1 + lVar2,(StringName *)&local_58,pvVar3,&local_60);
  *(ulong *)param_3 = (ulong)uVar6;
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
  if (local_60 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_60;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_60);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_00102fbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::validated_call
          (MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  Object *pOVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x101f88;
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0);
      pOVar3 = local_68;
      if (local_68 != (Object *)0x0) {
        LOCK();
        pOVar6 = local_68 + -0x10;
        *(long *)pOVar6 = *(long *)pOVar6 + -1;
        UNLOCK();
        if (*(long *)pOVar6 == 0) {
          local_68 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      pOVar3 = local_70;
      if (local_70 != (Object *)0x0) {
        LOCK();
        pOVar6 = local_70 + -0x10;
        *(long *)pOVar6 = *(long *)pOVar6 + -1;
        UNLOCK();
        if (*(long *)pOVar6 == 0) {
          local_70 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001033a1;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(param_2[2] + 0x10));
  local_70 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar3 = local_70;
  if (pOVar6 != local_70) {
    if (pOVar6 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_00103296:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&TLSOptions::typeinfo,0);
      if (pOVar3 != pOVar6) {
        local_70 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00103296;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pVVar2 = param_2[1];
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010333a:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&PacketPeerUDP::typeinfo,0);
      if (pOVar3 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0010333a;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar5 = (*pcVar8)(param_1 + lVar1,(StringName *)&local_68,pVVar2 + 8,&local_70);
  *(ulong *)(param_3 + 8) = (ulong)uVar5;
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001033a1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  Object *local_98;
  long local_90;
  Object *local_88;
  undefined8 local_80;
  undefined4 *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (Object *)0x101f88;
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC30,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0);
      pOVar5 = local_88;
      if (local_88 != (Object *)0x0) {
        LOCK();
        pOVar10 = local_88 + -0x10;
        *(long *)pOVar10 = *(long *)pOVar10 + -1;
        UNLOCK();
        if (*(long *)pOVar10 == 0) {
          local_88 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar15 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_001039a2;
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_78[lVar9] = (undefined4 *)pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*local_78[2]);
      uVar4 = _LC35;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_98 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_98;
      if (pOVar10 != local_98) {
        if (pOVar10 == (Object *)0x0) {
          if (local_98 != (Object *)0x0) {
            local_98 = (Object *)0x0;
LAB_001037e7:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&TLSOptions::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_98 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_98 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_001037e7;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*local_78[1],4);
      uVar4 = _LC36;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_90);
      cVar6 = Variant::can_convert_strict(*local_78[0]);
      uVar4 = _LC37;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_88 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_88;
      if (pOVar10 != local_88) {
        if (pOVar10 == (Object *)0x0) {
          if (local_88 != (Object *)0x0) {
            local_88 = (Object *)0x0;
LAB_001038bb:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&PacketPeerUDP::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_88 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_88 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_001038bb;
          }
        }
      }
      iVar8 = (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_88,
                                 (Variant *)&local_90,&local_98);
      Variant::Variant((Variant *)local_58,iVar8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_88 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_88;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_88);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      lVar15 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (local_98 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_98;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_98);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_001039a2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001039a2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >(int,
   PropertyInfo&) */

void call_get_argument_type_info<Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_58 = "PacketPeerUDP";
    local_50._0_8_ = 0xd;
LAB_00103d9f:
    local_68 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
    local_40 = 0x11;
    local_38 = 0;
    local_50 = (undefined1  [16])0x0;
    if ((local_70 == 0) ||
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70),
       local_40 == 0x11)) {
      local_30 = 6;
      StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
      if (local_50._8_8_ == local_60) {
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      else {
LAB_00103ff4:
        StringName::unref();
        local_50._8_8_ = local_60;
      }
    }
    else {
LAB_00103e02:
      local_30 = 6;
      StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
    }
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) goto LAB_00103d55;
      local_58 = "TLSOptions";
      local_50._0_8_ = 10;
      goto LAB_00103d9f;
    }
    local_68 = 0;
    local_58 = "";
    local_70 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_50._8_8_;
    local_50 = auVar4 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (char *)CONCAT44(local_58._4_4_,4);
    local_40 = 0;
    local_38 = 0;
    local_50 = (undefined1  [16])0x0;
    if (local_70 == 0) goto LAB_00103e02;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00103e02;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ != local_60) goto LAB_00103ff4;
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_58._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_2 + 8) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar7 = local_38;
  *(int *)(param_2 + 0x18) = local_40;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == local_38) {
    *(undefined4 *)(param_2 + 0x28) = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_2 + 0x20) = local_38;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00103d55:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions>
   >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>
              (in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_70;
    lVar2 = local_78;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_78;
      }
    }
    local_78 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<PacketPeerDTLS::Status>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PacketPeerDTLS::Status>::~MethodBindTRC(MethodBindTRC<PacketPeerDTLS::Status> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Ref<PacketPeerUDP>, String const&, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,Ref<PacketPeerUDP>,String_const&,Ref<TLSOptions>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


