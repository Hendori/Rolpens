
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



/* uninitialize_webrtc_module(ModuleInitializationLevel) */

void uninitialize_webrtc_module(void)

{
  return;
}



/* initialize_webrtc_module(ModuleInitializationLevel) */

void initialize_webrtc_module(int param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  long local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00100525;
  }
  Variant::Variant((Variant *)local_68,0x40);
  local_98 = "2,4096,1,or_greater";
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_98 = "network/limits/webrtc/max_channel_in_buffer_kb";
  local_90 = 0x2e;
  String::parse_latin1((StrRange *)&local_b8);
  local_98 = (char *)CONCAT44(local_98._4_4_,2);
  local_90 = 0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_b8);
  }
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  if (local_b0 == 0) {
LAB_00100328:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_b0);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00100328;
    StringName::StringName((StringName *)&local_a0,(String *)&local_78,false);
    if (local_88 == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = local_a0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_48,(Variant *)&local_98,SUB81((Variant *)local_68,0),false,false
              ,false);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
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
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  ClassDB::register_custom_instance_class<WebRTCPeerConnection>();
  ClassDB::register_class<WebRTCPeerConnectionExtension>(false);
  ClassDB::register_abstract_class<WebRTCDataChannel>();
  ClassDB::register_class<WebRTCDataChannelExtension>(false);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    ClassDB::register_class<WebRTCMultiplayerPeer>(false);
    return;
  }
LAB_00100525:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

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
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* WebRTCPeerConnectionExtension::is_class_ptr(void*) const */

uint __thiscall
WebRTCPeerConnectionExtension::is_class_ptr(WebRTCPeerConnectionExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x10e7,(undefined4 *)param_1 ==
                               &WebRTCPeerConnection::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* WebRTCPeerConnectionExtension::_getv(StringName const&, Variant&) const */

undefined8 WebRTCPeerConnectionExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCPeerConnectionExtension::_setv(StringName const&, Variant const&) */

undefined8 WebRTCPeerConnectionExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCPeerConnectionExtension::_validate_propertyv(PropertyInfo&) const */

void WebRTCPeerConnectionExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* WebRTCPeerConnectionExtension::_property_can_revertv(StringName const&) const */

undefined8 WebRTCPeerConnectionExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* WebRTCPeerConnectionExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8
WebRTCPeerConnectionExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCPeerConnectionExtension::_notificationv(int, bool) */

void WebRTCPeerConnectionExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object* ClassDB::_create_ptr_func<WebRTCPeerConnection>(bool) */

Object * ClassDB::_create_ptr_func<WebRTCPeerConnection>(bool param_1)

{
  Object *pOVar1;
  
  pOVar1 = (Object *)WebRTCPeerConnection::create(param_1);
  return pOVar1;
}



/* Object* ClassDB::creator<WebRTCPeerConnectionExtension>(bool) */

Object * ClassDB::creator<WebRTCPeerConnectionExtension>(bool param_1)

{
  WebRTCPeerConnection *this;
  
  this = (WebRTCPeerConnection *)operator_new(0x288,"");
  WebRTCPeerConnection::WebRTCPeerConnection(this);
  *(undefined ***)this = &PTR__initialize_classv_0010e568;
  StringName::StringName((StringName *)(this + 0x180),"_get_connection_state",false);
  this[0x188] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_gathering_state",false);
  this[0x1a0] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_get_signaling_state",false);
  this[0x1b8] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_initialize",false);
  this[0x1d0] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_create_data_channel",false);
  this[0x1e8] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  StringName::StringName((StringName *)(this + 0x1f8),"_create_offer",false);
  this[0x200] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x208) = 0;
  StringName::StringName((StringName *)(this + 0x210),"_set_remote_description",false);
  this[0x218] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  StringName::StringName((StringName *)(this + 0x228),"_set_local_description",false);
  this[0x230] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x238) = 0;
  StringName::StringName((StringName *)(this + 0x240),"_add_ice_candidate",false);
  this[0x248] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_poll",false);
  this[0x260] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_close",false);
  this[0x278] = (WebRTCPeerConnection)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension() */

void __thiscall
WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension(WebRTCPeerConnectionExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010e568;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bc3;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00100bc3:
  WebRTCPeerConnection::~WebRTCPeerConnection((WebRTCPeerConnection *)this);
  return;
}



/* WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension() */

void __thiscall
WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension(WebRTCPeerConnectionExtension *this)

{
  ~WebRTCPeerConnectionExtension(this);
  operator_delete(this,0x288);
  return;
}



/* Object* ClassDB::creator<WebRTCDataChannelExtension>(bool) */

Object * ClassDB::creator<WebRTCDataChannelExtension>(bool param_1)

{
  WebRTCDataChannel *this;
  
  this = (WebRTCDataChannel *)operator_new(0x350,"");
  WebRTCDataChannel::WebRTCDataChannel(this);
  *(undefined **)this = &WebRTCMultiplayerPeer::vtable;
  StringName::StringName((StringName *)(this + 0x1a0),"_poll",false);
  this[0x1a8] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_close",false);
  this[0x1c0] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_set_write_mode",false);
  this[0x1d8] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_get_write_mode",false);
  this[0x1f0] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_was_string_packet",false);
  this[0x208] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  StringName::StringName((StringName *)(this + 0x218),"_get_ready_state",false);
  this[0x220] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  StringName::StringName((StringName *)(this + 0x230),"_get_label",false);
  this[0x238] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  StringName::StringName((StringName *)(this + 0x248),"_is_ordered",false);
  this[0x250] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 600) = 0;
  StringName::StringName((StringName *)(this + 0x260),"_get_id",false);
  this[0x268] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x270) = 0;
  StringName::StringName((StringName *)(this + 0x278),"_get_max_packet_life_time",false);
  this[0x280] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x288) = 0;
  StringName::StringName((StringName *)(this + 0x290),"_get_max_retransmits",false);
  this[0x298] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x2a0) = 0;
  StringName::StringName((StringName *)(this + 0x2a8),"_get_protocol",false);
  this[0x2b0] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x2b8) = 0;
  StringName::StringName((StringName *)(this + 0x2c0),"_is_negotiated",false);
  this[0x2c8] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x2d0) = 0;
  StringName::StringName((StringName *)(this + 0x2d8),"_get_buffered_amount",false);
  this[0x2e0] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x2e8) = 0;
  StringName::StringName((StringName *)(this + 0x2f0),"_get_available_packet_count",false);
  this[0x2f8] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x300) = 0;
  StringName::StringName((StringName *)(this + 0x308),"_get_max_packet_size",false);
  this[0x310] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x318) = 0;
  StringName::StringName((StringName *)(this + 800),"_get_packet",false);
  this[0x328] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x330) = 0;
  StringName::StringName((StringName *)(this + 0x338),"_put_packet",false);
  this[0x340] = (WebRTCDataChannel)0x0;
  *(undefined8 *)(this + 0x348) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<WebRTCMultiplayerPeer>(bool) */

Object * ClassDB::creator<WebRTCMultiplayerPeer>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x200,"");
  RefCounted::RefCounted(this);
  this[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x17c) = 0x80000000000000;
  *(undefined8 *)(this + 0x198) = 0x200000000;
  *(code **)this = Memory::free_static;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1e8) = 2;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WebRTCPeerConnectionExtension::_get_class_namev() const */

undefined8 * WebRTCPeerConnectionExtension::_get_class_namev(void)

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
LAB_001011f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001011f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "WebRTCPeerConnectionExtension");
      goto LAB_0010125e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"WebRTCPeerConnectionExtension");
LAB_0010125e:
  return &_get_class_namev()::_class_name_static;
}



/* WebRTCPeerConnectionExtension::get_class() const */

void WebRTCPeerConnectionExtension::get_class(void)

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



/* WebRTCPeerConnectionExtension::_initialize_classv() */

void WebRTCPeerConnectionExtension::_initialize_classv(void)

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
    if (WebRTCPeerConnection::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "WebRTCPeerConnection";
      local_70 = 0;
      local_50 = 0x14;
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
      WebRTCPeerConnection::_bind_methods();
      WebRTCPeerConnection::initialize_class()::initialized = '\x01';
    }
    local_58 = "WebRTCPeerConnection";
    local_68 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "WebRTCPeerConnectionExtension";
    local_70 = 0;
    local_50 = 0x1d;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != WebRTCPeerConnection::_bind_methods) {
      WebRTCPeerConnectionExtension::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCPeerConnectionExtension::is_class(String const&) const */

undefined8 __thiscall
WebRTCPeerConnectionExtension::is_class(WebRTCPeerConnectionExtension *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010185f;
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
LAB_0010185f:
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
    if (cVar6 != '\0') goto LAB_00101913;
  }
  cVar6 = String::operator==(param_1,"WebRTCPeerConnectionExtension");
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
              if (lVar5 == 0) goto LAB_00101a83;
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
LAB_00101a83:
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
      if (cVar6 != '\0') goto LAB_00101913;
    }
    cVar6 = String::operator==(param_1,"WebRTCPeerConnection");
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
                if (lVar5 == 0) goto LAB_00101b63;
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
LAB_00101b63:
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
        if (cVar6 != '\0') goto LAB_00101913;
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
                  if (lVar5 == 0) goto LAB_001019eb;
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
LAB_001019eb:
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
          if (cVar6 != '\0') goto LAB_00101913;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00101c79;
      }
    }
  }
LAB_00101913:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101c79:
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



/* GetTypeInfo<String, void>::get_class_info() */

GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00101e1c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00101e1c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Dictionary, void>::get_class_info() */

GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1b;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00101f9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00101f9c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  String::split(local_58,SUB81(param_1,0),0x101fdd);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC39;
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
        goto joined_r0x0010209a;
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
  local_48 = &_LC39;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x0010209a:
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

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
  local_48 = "Error";
  local_40 = 5;
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
LAB_00102528:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102528;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102546;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102546:
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



/* WebRTCPeerConnection::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
WebRTCPeerConnection::_get_property_listv(WebRTCPeerConnection *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "WebRTCPeerConnection";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WebRTCPeerConnection";
  local_98 = 0;
  local_70 = 0x14;
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
LAB_00102928:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102928;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102945;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102945:
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
  StringName::StringName((StringName *)&local_78,"WebRTCPeerConnection",false);
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



/* WebRTCPeerConnectionExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
WebRTCPeerConnectionExtension::_get_property_listv
          (WebRTCPeerConnectionExtension *this,List *param_1,bool param_2)

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
    WebRTCPeerConnection::_get_property_listv((WebRTCPeerConnection *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "WebRTCPeerConnectionExtension";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WebRTCPeerConnectionExtension";
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
  if (local_90 == 0) {
LAB_00102d78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102d78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102d95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102d95:
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
  StringName::StringName((StringName *)&local_78,"WebRTCPeerConnectionExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      WebRTCPeerConnection::_get_property_listv((WebRTCPeerConnection *)this,param_1,true);
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_custom_instance_class<WebRTCPeerConnection>() */

void ClassDB::register_custom_instance_class<WebRTCPeerConnection>(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (WebRTCPeerConnection::initialize_class()::initialized == '\0') {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar3 = local_68;
      if (local_68 == 0) {
LAB_001038ae:
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
LAB_001038be:
          RefCounted::_bind_methods();
        }
      }
      else {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_001038ae;
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) goto LAB_001038be;
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "WebRTCPeerConnection";
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    if ((code *)PTR__bind_methods_00111010 != RefCounted::_bind_methods) {
      WebRTCPeerConnection::_bind_methods();
    }
    WebRTCPeerConnection::initialize_class()::initialized = '\x01';
  }
  local_58 = "WebRTCPeerConnection";
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0011018c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_0010372f;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_0010372f;
          goto LAB_00103705;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_00103705:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_0010372f:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = _create_ptr_func<WebRTCPeerConnection>;
        *(undefined4 **)(puVar16 + 4) = &WebRTCPeerConnection::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103917;
        goto LAB_0010376b;
      }
    }
  }
  _err_print_error("register_custom_instance_class","./core/object/class_db.h",0x11a,
                   "Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00103917:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0010376b:
  _global_unlock();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<WebRTCPeerConnectionExtension>(bool) */

void ClassDB::register_class<WebRTCPeerConnectionExtension>(bool param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (WebRTCPeerConnectionExtension::initialize_class()::initialized == '\0') {
    if (WebRTCPeerConnection::initialize_class()::initialized == '\0') {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
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
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "WebRTCPeerConnection";
      local_70 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      WebRTCPeerConnection::_bind_methods();
      WebRTCPeerConnection::initialize_class()::initialized = '\x01';
    }
    local_58 = "WebRTCPeerConnection";
    local_68 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "WebRTCPeerConnectionExtension";
    local_50 = 0x1d;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != WebRTCPeerConnection::_bind_methods) {
      WebRTCPeerConnectionExtension::_bind_methods();
    }
    WebRTCPeerConnectionExtension::initialize_class()::initialized = '\x01';
  }
  local_58 = "WebRTCPeerConnectionExtension";
  local_60 = 0;
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0011018c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_00103e2f;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_00103e2f;
          goto LAB_00103e05;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_00103e05:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_00103e2f:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<WebRTCPeerConnectionExtension>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &WebRTCPeerConnectionExtension::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104057;
        goto LAB_00103e77;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00104057:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00103e77:
  _global_unlock();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_abstract_class<WebRTCDataChannel>() */

void ClassDB::register_abstract_class<WebRTCDataChannel>(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (WebRTCDataChannel::initialize_class()::initialized == '\0') {
    if (PacketPeer::initialize_class()::initialized == '\0') {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
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
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "PacketPeer";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      PacketPeer::_bind_methods();
      PacketPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PacketPeer";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "WebRTCDataChannel";
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    if ((code *)PTR__bind_methods_00111018 != PacketPeer::_bind_methods) {
      WebRTCDataChannel::_bind_methods();
    }
    WebRTCDataChannel::initialize_class()::initialized = '\x01';
  }
  local_58 = "WebRTCDataChannel";
  local_60 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0011018c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_0010457f;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_0010457f;
          goto LAB_00104555;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_00104555:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_0010457f:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(undefined4 **)(puVar16 + 4) = &WebRTCDataChannel::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104787;
        goto LAB_001045ae;
      }
    }
  }
  _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                   "Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00104787:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001045ae:
  _global_unlock();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<WebRTCDataChannelExtension>(bool) */

void ClassDB::register_class<WebRTCDataChannelExtension>(bool param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (WebRTCDataChannelExtension::initialize_class()::initialized == '\0') {
    if (WebRTCDataChannel::initialize_class()::initialized == '\0') {
      if (PacketPeer::initialize_class()::initialized == '\0') {
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
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
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
          if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_58 = "RefCounted";
        local_68 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "PacketPeer";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
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
        PacketPeer::_bind_methods();
        PacketPeer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "PacketPeer";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "WebRTCDataChannel";
      local_70 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      WebRTCDataChannel::_bind_methods();
      WebRTCDataChannel::initialize_class()::initialized = '\x01';
    }
    local_58 = "WebRTCDataChannel";
    local_68 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "WebRTCDataChannelExtension";
    local_50 = 0x1a;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    if ((code *)PTR__bind_methods_00111020 != WebRTCDataChannel::_bind_methods) {
      WebRTCDataChannelExtension::_bind_methods();
    }
    WebRTCDataChannelExtension::initialize_class()::initialized = '\x01';
  }
  local_58 = "WebRTCDataChannelExtension";
  local_60 = 0;
  local_50 = 0x1a;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0011018c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar13 == uVar17) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_00104dcf;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_00104dcf;
          goto LAB_00104da5;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_00104da5:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_00104dcf:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<WebRTCDataChannelExtension>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &WebRTCDataChannelExtension::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104eaf;
        goto LAB_00104e17;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00104eaf:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00104e17:
  _global_unlock();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<WebRTCMultiplayerPeer>(bool) */

void ClassDB::register_class<WebRTCMultiplayerPeer>(bool param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (WebRTCMultiplayerPeer::initialize_class()::initialized == '\0') {
    if (MultiplayerPeer::initialize_class()::initialized == '\0') {
      if (PacketPeer::initialize_class()::initialized == '\0') {
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
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
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
          if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_58 = "RefCounted";
        local_68 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "PacketPeer";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
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
        PacketPeer::_bind_methods();
        PacketPeer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "PacketPeer";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "MultiplayerPeer";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      MultiplayerPeer::_bind_methods();
      MultiplayerPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerPeer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "WebRTCMultiplayerPeer";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    if ((code *)PTR__bind_methods_00111028 != MultiplayerPeer::_bind_methods) {
      WebRTCMultiplayerPeer::_bind_methods();
    }
    WebRTCMultiplayerPeer::initialize_class()::initialized = '\x01';
  }
  local_58 = "WebRTCMultiplayerPeer";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0011018c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar13 == uVar17) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_0010563f;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_0010563f;
          goto LAB_00105615;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_00105615:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_0010563f:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<WebRTCMultiplayerPeer>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &WebRTCMultiplayerPeer::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010571f;
        goto LAB_00105687;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010571f:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00105687:
  _global_unlock();
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



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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



/* WebRTCPeerConnectionExtension::close() */

void __thiscall WebRTCPeerConnectionExtension::close(WebRTCPeerConnectionExtension *this)

{
  char *pcVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_00105b2b:
    if ((*(long *)(this + 8) != 0) && (this[0x278] == (WebRTCPeerConnectionExtension)0x0)) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      local_d8 = "_close";
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_d0 = 6;
      String::parse_latin1((StrRange *)&local_c8);
      local_90 = CONCAT44(local_90._4_4_,0x88);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x280) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"WebRTCPeerConnectionExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar5 = 0, local_e0 != 0)) goto LAB_001060ef;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00106104:
          lVar5 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_00105fd0;
          uVar4 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar5 + 0xa0),this + 0x270);
          *(undefined8 *)(this + 0x280) = uVar4;
        }
        else {
          lVar5 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_001060ef:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar5 == 0) goto LAB_00106104;
        }
        lVar5 = *(long *)(this + 8);
      }
      else {
        uVar4 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar5 + 0xa0),this + 0x270,uVar2);
        *(undefined8 *)(this + 0x280) = uVar4;
        lVar5 = *(long *)(this + 8);
      }
LAB_00105fd0:
      if (*(char *)(lVar5 + 0x29) != '\0') {
        plVar6 = (long *)operator_new(0x18,"");
        *plVar6 = (long)(this + 0x280);
        plVar6[1] = (long)(this + 0x278);
        plVar6[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar6;
      }
      this[0x278] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x280);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x270,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_00106177;
    }
    if (_gdvirtual__close_call()::first_print != '\0') {
      local_d8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x105a10;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_d8);
      local_c8 = 0x100815;
      uStack_c4 = 0;
      local_e8 = 0;
      uStack_c0 = 6;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_e8);
      local_c8 = 0x101fdd;
      uStack_c4 = 0;
      local_f8 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_108 = 0;
          local_c8 = 0x1011a0;
          uStack_c4 = 0;
          uStack_c0 = 0x1d;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_108);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_108 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar5 + 8);
            local_108 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar3 = strlen(pcVar1);
              local_c8 = (int)pcVar1;
              uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_108);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_108,this);
      }
      operator+((char *)&local_100,(String *)"Required virtual method ");
      String::operator+((String *)&local_f0,(String *)&local_100);
      String::operator+((String *)&local_e0,(String *)&local_f0);
      String::operator+((String *)&local_c8,(String *)&local_e0);
      _err_print_error("_gdvirtual__close_call","modules/webrtc/webrtc_peer_connection_extension.h",
                       0x39,(String *)&local_c8,0,0);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar6 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          lVar5 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar6 = (long *)(local_e0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar6 = (long *)(local_f0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar6 = (long *)(local_100 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar6 = (long *)(local_108 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_f8;
      if (local_f8 != 0) {
        LOCK();
        plVar6 = (long *)(local_f8 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_f8 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_e8;
      if (local_e8 != 0) {
        LOCK();
        plVar6 = (long *)(local_e8 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      pcVar1 = local_d8;
      if (local_d8 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_d8 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_d8 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      _gdvirtual__close_call()::first_print = '\0';
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,this + 0x270,0,0,&local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8 != 0) goto LAB_00105b2b;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106177:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCPeerConnectionExtension::poll() */

ulong __thiscall WebRTCPeerConnectionExtension::poll(WebRTCPeerConnectionExtension *this)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined4 uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar9 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar9 + 0x60))((Variant *)local_58,plVar9,this + 600,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar6 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar6 = uVar6 & 0xffffffff;
      }
      goto LAB_001062b6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x260] == (WebRTCPeerConnectionExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_poll";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 5;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar7 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar9 = (long *)(local_b8._0_8_ + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar7 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar8 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar8;
    }
    lVar3 = local_a0;
    lVar8 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar9 = (long *)(local_a0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar9 = (long *)(local_a0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar8 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar9 = (long *)(local_f0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar4 = MethodInfo::get_compatibility_hash();
    lVar8 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x268) = 0;
    pcVar10 = *(code **)(lVar8 + 0xd8);
    if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
       (pcVar10 = *(code **)(lVar8 + 0xd0), pcVar10 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar8 = 0, local_100 != 0)) goto LAB_001069b2;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001069c7:
        lVar8 = *(long *)(this + 8);
        pcVar10 = *(code **)(lVar8 + 200);
        if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
           (pcVar10 = *(code **)(lVar8 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00106876;
        uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 600);
        *(undefined8 *)(this + 0x268) = uVar7;
      }
      else {
        lVar8 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001069b2:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar8 == 0) goto LAB_001069c7;
      }
      lVar8 = *(long *)(this + 8);
    }
    else {
      uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 600,uVar4);
      *(undefined8 *)(this + 0x268) = uVar7;
      lVar8 = *(long *)(this + 8);
    }
LAB_00106876:
    if (*(char *)(lVar8 + 0x29) != '\0') {
      plVar9 = (long *)operator_new(0x18,"");
      *plVar9 = (long)(this + 0x268);
      plVar9[1] = (long)(this + 0x260);
      plVar9[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar9;
    }
    this[0x260] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar10 = *(code **)(this + 0x268);
  if (pcVar10 == (code *)0x0) {
    if (_gdvirtual__poll_call(Error&)::first_print == '\0') {
      uVar6 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x105a10;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10080f;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 5;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x101fdd;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x1011a0;
          uStack_c4 = 0;
          uStack_c0 = 0x1d;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar8 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar8 == 0) {
            local_128 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar8 + 8);
            local_128 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar8 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar8 + 0x10));
              }
            }
            else {
              sVar5 = strlen(pcVar1);
              local_c8 = (uint)pcVar1;
              uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_c0 = (undefined4)sVar5;
              uStack_bc = (undefined4)(sVar5 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+((String *)&local_110,(String *)&local_120);
      String::operator+((String *)&local_100,(String *)&local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__poll_call","modules/webrtc/webrtc_peer_connection_extension.h",
                       0x38,(String *)&local_c8,0,0);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar9 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          lVar8 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar9 = (long *)(local_100 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_110;
      if (local_110 != 0) {
        LOCK();
        plVar9 = (long *)(local_110 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar9 = (long *)(local_120 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar9 = (long *)(local_128 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar9 = (long *)(local_118 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar9 = (long *)(local_108 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      pcVar1 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_f8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      _gdvirtual__poll_call(Error&)::first_print = '\0';
      uVar6 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar10)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar6 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 600,pcVar10,0,&local_c8);
    uVar6 = (ulong)local_c8;
  }
LAB_001062b6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WebRTCPeerConnectionExtension::create_offer() */

ulong __thiscall WebRTCPeerConnectionExtension::create_offer(WebRTCPeerConnectionExtension *this)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined4 uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar9 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar9 + 0x60))((Variant *)local_58,plVar9,this + 0x1f8,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar6 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar6 = uVar6 & 0xffffffff;
      }
      goto LAB_00106bc6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x200] == (WebRTCPeerConnectionExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_create_offer";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 0xd;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar7 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar9 = (long *)(local_b8._0_8_ + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar7 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar8 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar8;
    }
    lVar3 = local_a0;
    lVar8 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar9 = (long *)(local_a0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar9 = (long *)(local_a0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar8 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar9 = (long *)(local_f0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar4 = MethodInfo::get_compatibility_hash();
    lVar8 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x208) = 0;
    pcVar10 = *(code **)(lVar8 + 0xd8);
    if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
       (pcVar10 = *(code **)(lVar8 + 0xd0), pcVar10 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar8 = 0, local_100 != 0)) goto LAB_001072c2;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001072d7:
        lVar8 = *(long *)(this + 8);
        pcVar10 = *(code **)(lVar8 + 200);
        if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
           (pcVar10 = *(code **)(lVar8 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00107186;
        uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 0x1f8);
        *(undefined8 *)(this + 0x208) = uVar7;
      }
      else {
        lVar8 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001072c2:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar8 == 0) goto LAB_001072d7;
      }
      lVar8 = *(long *)(this + 8);
    }
    else {
      uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 0x1f8,uVar4);
      *(undefined8 *)(this + 0x208) = uVar7;
      lVar8 = *(long *)(this + 8);
    }
LAB_00107186:
    if (*(char *)(lVar8 + 0x29) != '\0') {
      plVar9 = (long *)operator_new(0x18,"");
      *plVar9 = (long)(this + 0x208);
      plVar9[1] = (long)(this + 0x200);
      plVar9[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar9;
    }
    this[0x200] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar10 = *(code **)(this + 0x208);
  if (pcVar10 == (code *)0x0) {
    if (_gdvirtual__create_offer_call(Error&)::first_print == '\0') {
      uVar6 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x105a10;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x1007bf;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0xd;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x101fdd;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x1011a0;
          uStack_c4 = 0;
          uStack_c0 = 0x1d;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar8 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar8 == 0) {
            local_128 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar8 + 8);
            local_128 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar8 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar8 + 0x10));
              }
            }
            else {
              sVar5 = strlen(pcVar1);
              local_c8 = (uint)pcVar1;
              uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_c0 = (undefined4)sVar5;
              uStack_bc = (undefined4)(sVar5 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+((String *)&local_110,(String *)&local_120);
      String::operator+((String *)&local_100,(String *)&local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__create_offer_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x34,(String *)&local_c8,
                       0,0);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar9 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          lVar8 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar9 = (long *)(local_100 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_110;
      if (local_110 != 0) {
        LOCK();
        plVar9 = (long *)(local_110 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar9 = (long *)(local_120 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar9 = (long *)(local_128 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar9 = (long *)(local_118 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar9 = (long *)(local_108 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      pcVar1 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_f8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      _gdvirtual__create_offer_call(Error&)::first_print = '\0';
      uVar6 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar10)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar6 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1f8,pcVar10,0,&local_c8);
    uVar6 = (ulong)local_c8;
  }
LAB_00106bc6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WebRTCPeerConnectionExtension::get_signaling_state() const */

ulong __thiscall
WebRTCPeerConnectionExtension::get_signaling_state(WebRTCPeerConnectionExtension *this)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined4 uVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  long local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar11 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar11 + 0x60))((Variant *)local_58,plVar11,this + 0x1b0,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar8 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar8 = uVar8 & 0xffffffff;
      }
      goto LAB_00107506;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1b8] == (WebRTCPeerConnectionExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_signaling_state";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0._0_8_ = 0x14;
    String::parse_latin1((StrRange *)&local_c8);
    local_f8 = "WebRTCPeerConnection::SignalingState";
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    local_110 = 0;
    local_f0._0_8_ = 0x24;
    String::parse_latin1((StrRange *)&local_110);
    godot::details::enum_qualified_name_to_class_info_name
              ((details *)&local_108,(String *)&local_110);
    StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
    local_f0 = (undefined1  [16])0x0;
    local_118 = 0;
    local_f8 = (char *)0x2;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0x10006;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    if ((StringName::configured != '\0') && (local_100 != 0)) {
      StringName::unref();
    }
    lVar10 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar11 = (long *)(local_108 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar11 = (long *)(local_110 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack_c0 = local_f8._0_4_;
    uVar9 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar11 = (long *)(local_b8._0_8_ + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar9 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f0._8_8_;
      local_f0 = auVar4 << 0x40;
    }
    if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      uVar9 = local_f0._8_8_;
      local_f0._8_8_ = 0;
      local_b8._8_8_ = uVar9;
    }
    lVar5 = local_a0;
    lVar10 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,(undefined4)local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
      StringName::unref();
    }
    uVar9 = local_f0._0_8_;
    if (local_f0._0_8_ != 0) {
      LOCK();
      plVar11 = (long *)(local_f0._0_8_ + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_f0._8_8_;
        local_f0 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar9 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar6 = MethodInfo::get_compatibility_hash();
    lVar10 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1c0) = 0;
    pcVar12 = *(code **)(lVar10 + 0xd8);
    if (((pcVar12 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
       (pcVar12 = *(code **)(lVar10 + 0xd0), pcVar12 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0._0_8_ == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar10 = 0, local_100 != 0)) goto LAB_00107d00;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00107d15:
        lVar10 = *(long *)(this + 8);
        pcVar12 = *(code **)(lVar10 + 200);
        if (((pcVar12 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
           (pcVar12 = *(code **)(lVar10 + 0xc0), pcVar12 == (code *)0x0)) goto LAB_00107bca;
        uVar9 = (*pcVar12)(*(undefined8 *)(lVar10 + 0xa0),this + 0x1b0);
        *(undefined8 *)(this + 0x1c0) = uVar9;
      }
      else {
        lVar10 = *(long *)(local_f0._0_8_ + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00107d00:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar10 == 0) goto LAB_00107d15;
      }
      lVar10 = *(long *)(this + 8);
    }
    else {
      uVar9 = (*pcVar12)(*(undefined8 *)(lVar10 + 0xa0),this + 0x1b0,uVar6);
      *(undefined8 *)(this + 0x1c0) = uVar9;
      lVar10 = *(long *)(this + 8);
    }
LAB_00107bca:
    if (*(char *)(lVar10 + 0x29) != '\0') {
      plVar11 = (long *)operator_new(0x18,"");
      *plVar11 = (long)(this + 0x1c0);
      plVar11[1] = (long)(this + 0x1b8);
      plVar11[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar11;
    }
    this[0x1b8] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar12 = *(code **)(this + 0x1c0);
  if (pcVar12 == (code *)0x0) {
    if (_gdvirtual__get_signaling_state_call(WebRTCPeerConnection::SignalingState&)::first_print ==
        '\0') {
      uVar8 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x105a10;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x100789;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x14;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x101fdd;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x1011a0;
          uStack_c4 = 0;
          uStack_c0 = 0x1d;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar10 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar10 == 0) {
            local_128 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar10 + 8);
            local_128 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              sVar7 = strlen(pcVar1);
              local_c8 = (uint)pcVar1;
              uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_c0 = (undefined4)sVar7;
              uStack_bc = (undefined4)(sVar7 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+((String *)&local_110,(String *)&local_120);
      String::operator+((String *)&local_100,(String *)&local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_signaling_state_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x31,(String *)&local_c8,
                       0,0);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar11 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          lVar10 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar11 = (long *)(local_100 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_110;
      if (local_110 != 0) {
        LOCK();
        plVar11 = (long *)(local_110 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar11 = (long *)(local_120 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar11 = (long *)(local_128 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar11 = (long *)(local_118 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar11 = (long *)(local_108 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      pcVar1 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)((long)local_f8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar1 + -0x10),false);
        }
      }
      _gdvirtual__get_signaling_state_call(WebRTCPeerConnection::SignalingState&)::first_print =
           '\0';
      uVar8 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar12)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar8 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1b0,pcVar12,0,&local_c8);
    uVar8 = (ulong)local_c8;
  }
LAB_00107506:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WebRTCPeerConnectionExtension::get_gathering_state() const */

ulong __thiscall
WebRTCPeerConnectionExtension::get_gathering_state(WebRTCPeerConnectionExtension *this)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined4 uVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  long local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar11 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar11 + 0x60))((Variant *)local_58,plVar11,this + 0x198,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar8 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar8 = uVar8 & 0xffffffff;
      }
      goto LAB_00107f46;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1a0] == (WebRTCPeerConnectionExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_gathering_state";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0._0_8_ = 0x14;
    String::parse_latin1((StrRange *)&local_c8);
    local_f8 = "WebRTCPeerConnection::GatheringState";
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    local_110 = 0;
    local_f0._0_8_ = 0x24;
    String::parse_latin1((StrRange *)&local_110);
    godot::details::enum_qualified_name_to_class_info_name
              ((details *)&local_108,(String *)&local_110);
    StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
    local_f0 = (undefined1  [16])0x0;
    local_118 = 0;
    local_f8 = (char *)0x2;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0x10006;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    if ((StringName::configured != '\0') && (local_100 != 0)) {
      StringName::unref();
    }
    lVar10 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar11 = (long *)(local_108 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar11 = (long *)(local_110 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack_c0 = local_f8._0_4_;
    uVar9 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar11 = (long *)(local_b8._0_8_ + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar9 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f0._8_8_;
      local_f0 = auVar4 << 0x40;
    }
    if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      uVar9 = local_f0._8_8_;
      local_f0._8_8_ = 0;
      local_b8._8_8_ = uVar9;
    }
    lVar5 = local_a0;
    lVar10 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,(undefined4)local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
      StringName::unref();
    }
    uVar9 = local_f0._0_8_;
    if (local_f0._0_8_ != 0) {
      LOCK();
      plVar11 = (long *)(local_f0._0_8_ + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_f0._8_8_;
        local_f0 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar9 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar6 = MethodInfo::get_compatibility_hash();
    lVar10 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1a8) = 0;
    pcVar12 = *(code **)(lVar10 + 0xd8);
    if (((pcVar12 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
       (pcVar12 = *(code **)(lVar10 + 0xd0), pcVar12 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0._0_8_ == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar10 = 0, local_100 != 0)) goto LAB_00108740;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00108755:
        lVar10 = *(long *)(this + 8);
        pcVar12 = *(code **)(lVar10 + 200);
        if (((pcVar12 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
           (pcVar12 = *(code **)(lVar10 + 0xc0), pcVar12 == (code *)0x0)) goto LAB_0010860a;
        uVar9 = (*pcVar12)(*(undefined8 *)(lVar10 + 0xa0),this + 0x198);
        *(undefined8 *)(this + 0x1a8) = uVar9;
      }
      else {
        lVar10 = *(long *)(local_f0._0_8_ + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00108740:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar10 == 0) goto LAB_00108755;
      }
      lVar10 = *(long *)(this + 8);
    }
    else {
      uVar9 = (*pcVar12)(*(undefined8 *)(lVar10 + 0xa0),this + 0x198,uVar6);
      *(undefined8 *)(this + 0x1a8) = uVar9;
      lVar10 = *(long *)(this + 8);
    }
LAB_0010860a:
    if (*(char *)(lVar10 + 0x29) != '\0') {
      plVar11 = (long *)operator_new(0x18,"");
      *plVar11 = (long)(this + 0x1a8);
      plVar11[1] = (long)(this + 0x1a0);
      plVar11[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar11;
    }
    this[0x1a0] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar12 = *(code **)(this + 0x1a8);
  if (pcVar12 == (code *)0x0) {
    if (_gdvirtual__get_gathering_state_call(WebRTCPeerConnection::GatheringState&)::first_print ==
        '\0') {
      uVar8 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x105a10;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x100774;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x14;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x101fdd;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x1011a0;
          uStack_c4 = 0;
          uStack_c0 = 0x1d;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar10 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar10 == 0) {
            local_128 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar10 + 8);
            local_128 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              sVar7 = strlen(pcVar1);
              local_c8 = (uint)pcVar1;
              uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_c0 = (undefined4)sVar7;
              uStack_bc = (undefined4)(sVar7 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+((String *)&local_110,(String *)&local_120);
      String::operator+((String *)&local_100,(String *)&local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_gathering_state_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x30,(String *)&local_c8,
                       0,0);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar11 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          lVar10 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar11 = (long *)(local_100 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_110;
      if (local_110 != 0) {
        LOCK();
        plVar11 = (long *)(local_110 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar11 = (long *)(local_120 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar11 = (long *)(local_128 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar11 = (long *)(local_118 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar11 = (long *)(local_108 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      pcVar1 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)((long)local_f8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar1 + -0x10),false);
        }
      }
      _gdvirtual__get_gathering_state_call(WebRTCPeerConnection::GatheringState&)::first_print =
           '\0';
      uVar8 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar12)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar8 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x198,pcVar12,0,&local_c8);
    uVar8 = (ulong)local_c8;
  }
LAB_00107f46:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WebRTCPeerConnectionExtension::get_connection_state() const */

ulong __thiscall
WebRTCPeerConnectionExtension::get_connection_state(WebRTCPeerConnectionExtension *this)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined4 uVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  long local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar11 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar11 + 0x60))((Variant *)local_58,plVar11,this + 0x180,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar8 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar8 = uVar8 & 0xffffffff;
      }
      goto LAB_00108986;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x188] == (WebRTCPeerConnectionExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_connection_state";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0._0_8_ = 0x15;
    String::parse_latin1((StrRange *)&local_c8);
    local_f8 = "WebRTCPeerConnection::ConnectionState";
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    local_110 = 0;
    local_f0._0_8_ = 0x25;
    String::parse_latin1((StrRange *)&local_110);
    godot::details::enum_qualified_name_to_class_info_name
              ((details *)&local_108,(String *)&local_110);
    StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
    local_f8 = (char *)0x2;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0x10006;
    local_f0 = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_100);
    if ((StringName::configured != '\0') && (local_100 != 0)) {
      StringName::unref();
    }
    lVar10 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar11 = (long *)(local_108 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar11 = (long *)(local_110 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack_c0 = local_f8._0_4_;
    uVar9 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar11 = (long *)(local_b8._0_8_ + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar9 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f0._8_8_;
      local_f0 = auVar4 << 0x40;
    }
    if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      uVar9 = local_f0._8_8_;
      local_f0._8_8_ = 0;
      local_b8._8_8_ = uVar9;
    }
    lVar5 = local_a0;
    lVar10 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,(undefined4)local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
      StringName::unref();
    }
    uVar9 = local_f0._0_8_;
    if (local_f0._0_8_ != 0) {
      LOCK();
      plVar11 = (long *)(local_f0._0_8_ + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_f0._8_8_;
        local_f0 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar9 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar6 = MethodInfo::get_compatibility_hash();
    lVar10 = *(long *)(this + 8);
    *(undefined8 *)(this + 400) = 0;
    pcVar12 = *(code **)(lVar10 + 0xd8);
    if (((pcVar12 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
       (pcVar12 = *(code **)(lVar10 + 0xd0), pcVar12 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0._0_8_ == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar10 = 0, local_100 != 0)) goto LAB_00109168;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010917d:
        lVar10 = *(long *)(this + 8);
        pcVar12 = *(code **)(lVar10 + 200);
        if (((pcVar12 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
           (pcVar12 = *(code **)(lVar10 + 0xc0), pcVar12 == (code *)0x0)) goto LAB_00109037;
        uVar9 = (*pcVar12)(*(undefined8 *)(lVar10 + 0xa0),this + 0x180);
        *(undefined8 *)(this + 400) = uVar9;
      }
      else {
        lVar10 = *(long *)(local_f0._0_8_ + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00109168:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar10 == 0) goto LAB_0010917d;
      }
      lVar10 = *(long *)(this + 8);
    }
    else {
      uVar9 = (*pcVar12)(*(undefined8 *)(lVar10 + 0xa0),this + 0x180,uVar6);
      *(undefined8 *)(this + 400) = uVar9;
      lVar10 = *(long *)(this + 8);
    }
LAB_00109037:
    if (*(char *)(lVar10 + 0x29) != '\0') {
      plVar11 = (long *)operator_new(0x18,"");
      *plVar11 = (long)(this + 400);
      plVar11[1] = (long)(this + 0x188);
      plVar11[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar11;
    }
    this[0x188] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar12 = *(code **)(this + 400);
  if (pcVar12 == (code *)0x0) {
    if (_gdvirtual__get_connection_state_call(WebRTCPeerConnection::ConnectionState&)::first_print
        == '\0') {
      uVar8 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x105a10;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10075e;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x15;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x101fdd;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x1011a0;
          uStack_c4 = 0;
          uStack_c0 = 0x1d;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar10 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar10 == 0) {
            local_128 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar10 + 8);
            local_128 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              sVar7 = strlen(pcVar1);
              local_c8 = (uint)pcVar1;
              uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_c0 = (undefined4)sVar7;
              uStack_bc = (undefined4)(sVar7 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+((String *)&local_110,(String *)&local_120);
      String::operator+((String *)&local_100,(String *)&local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_connection_state_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x2f,(String *)&local_c8,
                       0,0);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar11 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          lVar10 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar11 = (long *)(local_100 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_110;
      if (local_110 != 0) {
        LOCK();
        plVar11 = (long *)(local_110 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar11 = (long *)(local_120 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar11 = (long *)(local_128 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar11 = (long *)(local_118 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar11 = (long *)(local_108 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      pcVar1 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)((long)local_f8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar1 + -0x10),false);
        }
      }
      _gdvirtual__get_connection_state_call(WebRTCPeerConnection::ConnectionState&)::first_print =
           '\0';
      uVar8 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar12)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar8 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x180,pcVar12,0,&local_c8);
    uVar8 = (ulong)local_c8;
  }
LAB_00108986:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_001095c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_001095c0;
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
        goto LAB_001094d1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001094d1:
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



/* WebRTCPeerConnectionExtension::initialize(Dictionary) */

ulong __thiscall
WebRTCPeerConnectionExtension::initialize(WebRTCPeerConnectionExtension *this,Dictionary *param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined4 uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  Dictionary local_160 [8];
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  char *local_128;
  long local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8) [16];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  Dictionary *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_160,param_2);
  plVar10 = *(long **)(this + 0x98);
  if (plVar10 != (long *)0x0) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,local_160);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar10 + 0x60))((Variant *)local_58,plVar10,this + 0x1c8,&local_80,1,&local_f8);
    if (local_f8 == 0) {
      uVar6 = Variant::operator_cast_to_long((Variant *)local_58);
      uVar6 = uVar6 & 0xffffffff;
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010974d;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1d0] == (WebRTCPeerConnectionExtension)0x0)) {
    local_f8 = 0;
    uStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_initialize";
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8 = (undefined1 (*) [16])0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120 = 0xb;
    String::parse_latin1((StrRange *)&local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_128);
    uStack_f0 = local_128._0_4_;
    uVar8 = local_e8._0_8_;
    if (local_e8._0_8_ != local_120) {
      if (local_e8._0_8_ != 0) {
        LOCK();
        plVar10 = (long *)(local_e8._0_8_ + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_e8._8_8_;
          local_e8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar8 + -0x10),false);
        }
      }
      local_e8._0_8_ = local_120;
      local_120 = 0;
    }
    if (local_e8._8_8_ != local_118) {
      StringName::unref();
      lVar9 = local_118;
      local_118 = 0;
      local_e8._8_8_ = lVar9;
    }
    lVar3 = local_d0;
    lVar9 = local_108;
    local_d8 = CONCAT44(local_d8._4_4_,local_110);
    if (local_d0 == local_108) {
      local_c8 = CONCAT44(local_c8._4_4_,local_100);
      if (local_d0 != 0) {
        LOCK();
        plVar10 = (long *)(local_d0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
    }
    else {
      if (local_d0 != 0) {
        LOCK();
        plVar10 = (long *)(local_d0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_d0 = local_108;
      local_c8 = CONCAT44(local_c8._4_4_,local_100);
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
    }
    lVar9 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar10 = (long *)(local_120 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_128);
    if (local_b8 == (undefined1 (*) [16])0x0) {
      local_b8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_b8[1] = 0;
      *local_b8 = (undefined1  [16])0x0;
    }
    puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    *puVar7 = 0;
    puVar7[6] = 0;
    puVar7[10] = 6;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
    *puVar7 = local_128._0_4_;
    if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_120);
    }
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_118);
    puVar7[6] = local_110;
    if (*(long *)(puVar7 + 8) != local_108) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_108);
    }
    lVar3 = local_108;
    puVar7[10] = local_100;
    lVar9 = *(long *)(*local_b8 + 8);
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar7 + 0x10) = local_b8;
    *(long *)(puVar7 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(undefined4 **)(lVar9 + 0x30) = puVar7;
    }
    lVar9 = *(long *)*local_b8;
    *(undefined4 **)(*local_b8 + 8) = puVar7;
    if (lVar9 == 0) {
      *(undefined4 **)*local_b8 = puVar7;
    }
    *(int *)local_b8[1] = *(int *)local_b8[1] + 1;
    if (local_108 != 0) {
      LOCK();
      plVar10 = (long *)(local_108 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
    }
    lVar9 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar10 = (long *)(local_120 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_98,0);
    uVar4 = MethodInfo::get_compatibility_hash();
    lVar9 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1d8) = 0;
    pcVar11 = *(code **)(lVar9 + 0xd8);
    if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
       (pcVar11 = *(code **)(lVar9 + 0xd0), pcVar11 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120 == 0) {
        lVar9 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') goto LAB_0010a093;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010a0b2:
        lVar9 = *(long *)(this + 8);
        pcVar11 = *(code **)(lVar9 + 200);
        if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
           (pcVar11 = *(code **)(lVar9 + 0xc0), pcVar11 == (code *)0x0)) goto LAB_00109f31;
        uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0),this + 0x1c8);
        *(undefined8 *)(this + 0x1d8) = uVar8;
      }
      else {
        lVar9 = *(long *)(local_120 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') {
LAB_0010a093:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar9 == 0) goto LAB_0010a0b2;
      }
      lVar9 = *(long *)(this + 8);
    }
    else {
      uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0),this + 0x1c8,uVar4);
      *(undefined8 *)(this + 0x1d8) = uVar8;
      lVar9 = *(long *)(this + 8);
    }
LAB_00109f31:
    if (*(char *)(lVar9 + 0x29) != '\0') {
      plVar10 = (long *)operator_new(0x18,"");
      *plVar10 = (long)(this + 0x1d8);
      plVar10[1] = (long)(this + 0x1d0);
      plVar10[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar10;
    }
    this[0x1d0] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  if (*(long *)(this + 0x1d8) != 0) {
    Dictionary::Dictionary((Dictionary *)&local_128,local_160);
    local_58[0] = (Dictionary *)&local_128;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x1d8))(*(undefined8 *)(this + 0x10),local_58,&local_f8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1c8,*(undefined8 *)(this + 0x1d8),local_58,
                 &local_f8);
    }
    uVar6 = (ulong)local_f8;
    Dictionary::~Dictionary((Dictionary *)&local_128);
    goto LAB_0010974d;
  }
  if (_gdvirtual__initialize_call(Dictionary,Error&)::first_print != '\0') {
    local_128 = (char *)0x0;
    uStack_f0 = 0x23;
    uStack_ec = 0;
    local_f8 = 0x105a10;
    uStack_f4 = 0;
    String::parse_latin1((StrRange *)&local_128);
    local_f8 = 0x10079e;
    uStack_f4 = 0;
    local_138 = 0;
    uStack_f0 = 0xb;
    uStack_ec = 0;
    String::parse_latin1((StrRange *)&local_138);
    local_f8 = 0x101fdd;
    uStack_f4 = 0;
    local_148 = 0;
    uStack_f0 = 2;
    uStack_ec = 0;
    String::parse_latin1((StrRange *)&local_148);
    if (*(code **)(*(long *)this + 0x48) == get_class) {
      if (*(long *)(this + 8) == 0) {
        local_158 = 0;
        local_f8 = 0x1011a0;
        uStack_f4 = 0;
        uStack_f0 = 0x1d;
        uStack_ec = 0;
LAB_001098f3:
        String::parse_latin1((StrRange *)&local_158);
      }
      else {
        lVar9 = *(long *)(*(long *)(this + 8) + 0x20);
        if (lVar9 == 0) {
          local_158 = 0;
        }
        else {
          pcVar1 = *(char **)(lVar9 + 8);
          local_158 = 0;
          if (pcVar1 != (char *)0x0) {
            sVar5 = strlen(pcVar1);
            local_f8 = (uint)pcVar1;
            uStack_f4 = (undefined4)((ulong)pcVar1 >> 0x20);
            uStack_f0 = (undefined4)sVar5;
            uStack_ec = (undefined4)(sVar5 >> 0x20);
            goto LAB_001098f3;
          }
          if (*(long *)(lVar9 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(lVar9 + 0x10));
          }
        }
      }
    }
    else {
      (**(code **)(*(long *)this + 0x48))(&local_158,this);
    }
    operator+((char *)&local_150,(String *)"Required virtual method ");
    String::operator+((String *)&local_140,(String *)&local_150);
    String::operator+((String *)&local_130,(String *)&local_140);
    String::operator+((String *)&local_f8,(String *)&local_130);
    _err_print_error("_gdvirtual__initialize_call",
                     "modules/webrtc/webrtc_peer_connection_extension.h",0x32,(String *)&local_f8,0,
                     0);
    if (CONCAT44(uStack_f4,local_f8) != 0) {
      LOCK();
      plVar10 = (long *)(CONCAT44(uStack_f4,local_f8) + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        lVar9 = CONCAT44(uStack_f4,local_f8);
        local_f8 = 0;
        uStack_f4 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_130;
    if (local_130 != 0) {
      LOCK();
      plVar10 = (long *)(local_130 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_130 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_150;
    if (local_150 != 0) {
      LOCK();
      plVar10 = (long *)(local_150 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_150 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar10 = (long *)(local_158 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar10 = (long *)(local_148 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_138;
    if (local_138 != 0) {
      LOCK();
      plVar10 = (long *)(local_138 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_138 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    pcVar1 = local_128;
    if (local_128 != (char *)0x0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
    _gdvirtual__initialize_call(Dictionary,Error&)::first_print = '\0';
  }
  uVar6 = 0;
LAB_0010974d:
  Dictionary::~Dictionary(local_160);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WebRTCPeerConnectionExtension::create_data_channel(String, Dictionary) */

long * WebRTCPeerConnectionExtension::create_data_channel
                 (long *param_1,long *param_2,long *param_3,Dictionary *param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  long lVar10;
  size_t sVar11;
  Object *pOVar12;
  undefined4 *puVar13;
  long lVar14;
  long *plVar15;
  code *pcVar16;
  Object *pOVar17;
  long in_FS_OFFSET;
  bool bVar18;
  StringName *local_1a0;
  CowData *local_198;
  long local_188;
  Dictionary local_180 [8];
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  char *local_148;
  undefined1 local_140 [16];
  int local_130;
  long local_128;
  undefined4 local_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 (*local_d8) [16];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  long *local_78;
  Dictionary *pDStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  Dictionary::Dictionary(local_180,param_4);
  local_188 = 0;
  if (*param_3 != 0) {
    plVar15 = (long *)(*param_3 + -0x10);
    do {
      lVar14 = *plVar15;
      if (lVar14 == 0) goto LAB_0010a290;
      LOCK();
      lVar10 = *plVar15;
      bVar18 = lVar14 == lVar10;
      if (bVar18) {
        *plVar15 = lVar14 + 1;
        lVar10 = lVar14;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar10 != -1) {
      local_188 = *param_3;
    }
  }
LAB_0010a290:
  plVar15 = (long *)param_2[0x13];
  if (plVar15 != (long *)0x0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(String *)&local_188);
    Variant::Variant((Variant *)local_60,local_180);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar15 + 0x60))(local_98,plVar15,param_2 + 0x3c,&local_a8,2,&local_118);
    if (local_118 == 0) {
      lVar14 = Variant::get_validated_object();
      if (lVar14 == 0) {
        pOVar17 = (Object *)*param_1;
        if (pOVar17 != (Object *)0x0) {
          *param_1 = 0;
          cVar8 = RefCounted::unreference();
          if (cVar8 != '\0') {
            cVar8 = predelete_handler(pOVar17);
            pOVar12 = (Object *)0x0;
            if (cVar8 == '\0') goto LAB_0010a9f0;
LAB_0010a99a:
            (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
            Memory::free_static(pOVar17,false);
            if (pOVar12 != (Object *)0x0) goto LAB_0010a9c0;
          }
        }
      }
      else {
        pOVar12 = (Object *)__dynamic_cast(lVar14,&Object::typeinfo,&WebRTCDataChannel::typeinfo,0);
        if (pOVar12 == (Object *)0x0) {
          pOVar17 = (Object *)*param_1;
LAB_0010a973:
          if (pOVar17 != (Object *)0x0) {
            *param_1 = 0;
            cVar8 = RefCounted::unreference();
            if (cVar8 != '\0') {
              pOVar12 = (Object *)0x0;
              cVar8 = predelete_handler(pOVar17);
              if (cVar8 != '\0') goto LAB_0010a99a;
            }
          }
        }
        else {
          cVar8 = RefCounted::reference();
          pOVar17 = (Object *)*param_1;
          if (cVar8 == '\0') goto LAB_0010a973;
          if (pOVar12 != pOVar17) {
            *param_1 = (long)pOVar12;
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
              *param_1 = 0;
            }
            if (((pOVar17 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0'))
               && (cVar8 = predelete_handler(pOVar17), cVar8 != '\0')) goto LAB_0010a99a;
          }
LAB_0010a9c0:
          cVar8 = RefCounted::unreference();
          if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar12), cVar8 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
      }
LAB_0010a9f0:
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a398;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((param_2[1] != 0) && ((char)param_2[0x3d] == '\0')) {
    local_118 = 0;
    uStack_114 = 0;
    local_108 = (undefined1  [16])0x0;
    local_148 = "_create_data_channel";
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8 = (undefined1 (*) [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140._0_8_ = 0x14;
    String::parse_latin1((StrRange *)&local_118);
    local_e0 = CONCAT44(local_e0._4_4_,0x88);
    local_158 = 0;
    local_160 = 0;
    local_148 = "WebRTCDataChannel";
    local_140._0_8_ = 0x11;
    String::parse_latin1((StrRange *)&local_160);
    local_168 = 0;
    local_148 = (char *)CONCAT44(local_148._4_4_,0x18);
    local_130 = 0x11;
    local_128 = 0;
    local_140 = (undefined1  [16])0x0;
    if (local_160 == 0) {
LAB_0010b370:
      local_198 = (CowData *)&local_128;
      local_120 = 6;
      StringName::StringName((StringName *)&local_150,(String *)local_198,false);
      if (local_140._8_8_ == local_150) {
        if ((StringName::configured != '\0') && (local_150 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_140._8_8_ = local_150;
      }
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_160);
      local_120 = 6;
      if (local_130 == 0x11) goto LAB_0010b370;
      StringName::operator=((StringName *)(local_140 + 8),(StringName *)&local_158);
    }
    local_1a0 = (StringName *)(local_140 + 8);
    local_198 = (CowData *)&local_128;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
    if ((StringName::configured != '\0') && (local_158 != 0)) {
      StringName::unref();
    }
    uStack_110 = local_148._0_4_;
    uVar7 = local_108._0_8_;
    if (local_108._0_8_ != local_140._0_8_) {
      if (local_108._0_8_ != 0) {
        LOCK();
        plVar15 = (long *)(local_108._0_8_ + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_108._8_8_;
          local_108 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar7 + -0x10),false);
        }
      }
      local_108._0_8_ = local_140._0_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_140._8_8_;
      local_140 = auVar6 << 0x40;
    }
    if (local_108._8_8_ != local_140._8_8_) {
      StringName::unref();
      uVar7 = local_140._8_8_;
      local_140._8_8_ = 0;
      local_108._8_8_ = uVar7;
    }
    lVar10 = local_f0;
    lVar14 = local_128;
    local_f8 = CONCAT44(local_f8._4_4_,local_130);
    if (local_f0 == local_128) {
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
      if (local_f0 != 0) {
        LOCK();
        plVar15 = (long *)(local_f0 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
    }
    else {
      if (local_f0 != 0) {
        LOCK();
        plVar15 = (long *)(local_f0 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      local_f0 = local_128;
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
    }
    if ((StringName::configured != '\0') && (local_140._8_8_ != 0)) {
      StringName::unref();
    }
    uVar7 = local_140._0_8_;
    if (local_140._0_8_ != 0) {
      LOCK();
      plVar15 = (long *)(local_140._0_8_ + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_140._8_8_;
        local_140 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar7 + -0x10),false);
      }
    }
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar13 + 8) = 0;
    *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
    *puVar13 = 0;
    puVar13[6] = 0;
    puVar13[10] = 6;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
    *puVar13 = local_148._0_4_;
    if (local_140._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)local_140);
    }
    StringName::operator=((StringName *)(puVar13 + 4),local_1a0);
    puVar13[6] = local_130;
    if (*(long *)(puVar13 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),local_198);
    }
    lVar10 = local_128;
    puVar13[10] = local_120;
    lVar14 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar13 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar13 + 0x10) = local_d8;
    *(long *)(puVar13 + 0xe) = lVar14;
    if (lVar14 != 0) {
      *(undefined4 **)(lVar14 + 0x30) = puVar13;
    }
    lVar14 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar13;
    if (lVar14 == 0) {
      *(undefined4 **)*local_d8 = puVar13;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar15 = (long *)(local_128 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_140._8_8_ != 0)) {
      StringName::unref();
    }
    uVar7 = local_140._0_8_;
    if (local_140._0_8_ != 0) {
      LOCK();
      plVar15 = (long *)(local_140._0_8_ + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_140._8_8_;
        local_140 = auVar4 << 0x40;
        Memory::free_static((void *)(uVar7 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar13 + 8) = 0;
    *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
    *puVar13 = 0;
    puVar13[6] = 0;
    puVar13[10] = 6;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
    *puVar13 = local_148._0_4_;
    if (local_140._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)local_140);
    }
    StringName::operator=((StringName *)(puVar13 + 4),local_1a0);
    puVar13[6] = local_130;
    if (*(long *)(puVar13 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),local_198);
    }
    lVar10 = local_128;
    puVar13[10] = local_120;
    lVar14 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar13 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar13 + 0x10) = local_d8;
    *(long *)(puVar13 + 0xe) = lVar14;
    if (lVar14 != 0) {
      *(undefined4 **)(lVar14 + 0x30) = puVar13;
    }
    lVar14 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar13;
    if (lVar14 == 0) {
      *(undefined4 **)*local_d8 = puVar13;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar15 = (long *)(local_128 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_140._8_8_ != 0)) {
      StringName::unref();
    }
    uVar7 = local_140._0_8_;
    if (local_140._0_8_ != 0) {
      LOCK();
      plVar15 = (long *)(local_140._0_8_ + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_140._8_8_;
        local_140 = auVar5 << 0x40;
        Memory::free_static((void *)(uVar7 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    uVar9 = MethodInfo::get_compatibility_hash();
    param_2[0x3e] = 0;
    lVar14 = param_2[1];
    pcVar16 = *(code **)(lVar14 + 0xd8);
    if (((pcVar16 == (code *)0x0) || (*(long *)(lVar14 + 0xe0) == 0)) &&
       (pcVar16 = *(code **)(lVar14 + 0xd0), pcVar16 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140._0_8_ == 0) {
        lVar14 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_0010b2f9;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010b318:
        lVar14 = param_2[1];
        pcVar16 = *(code **)(lVar14 + 200);
        if (((pcVar16 == (code *)0x0) || (*(long *)(lVar14 + 0xe0) == 0)) &&
           (pcVar16 = *(code **)(lVar14 + 0xc0), pcVar16 == (code *)0x0)) goto LAB_0010b07e;
        lVar14 = (*pcVar16)(*(undefined8 *)(lVar14 + 0xa0));
        param_2[0x3e] = lVar14;
      }
      else {
        lVar14 = *(long *)(local_140._0_8_ + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_0010b2f9:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar14 == 0) goto LAB_0010b318;
      }
      lVar14 = param_2[1];
    }
    else {
      lVar14 = (*pcVar16)(*(undefined8 *)(lVar14 + 0xa0),param_2 + 0x3c,uVar9);
      param_2[0x3e] = lVar14;
      lVar14 = param_2[1];
    }
LAB_0010b07e:
    if (*(char *)(lVar14 + 0x29) != '\0') {
      plVar15 = (long *)operator_new(0x18,"");
      *plVar15 = (long)(param_2 + 0x3e);
      plVar15[1] = (long)(param_2 + 0x3d);
      plVar15[2] = param_2[0x2d];
      param_2[0x2d] = (long)plVar15;
    }
    *(undefined1 *)(param_2 + 0x3d) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  if (param_2[0x3e] == 0) {
    if (_gdvirtual__create_data_channel_call(String,Dictionary,Ref<WebRTCDataChannel>&)::first_print
        == '\0') goto LAB_0010a398;
    local_148 = (char *)0x0;
    uStack_110 = 0x23;
    uStack_10c = 0;
    local_118 = 0x105a10;
    uStack_114 = 0;
    String::parse_latin1((StrRange *)&local_148);
    local_158 = 0;
    local_118 = 0x1007aa;
    uStack_114 = 0;
    uStack_110 = 0x14;
    uStack_10c = 0;
    String::parse_latin1((StrRange *)&local_158);
    local_118 = 0x101fdd;
    uStack_114 = 0;
    local_168 = 0;
    uStack_110 = 2;
    uStack_10c = 0;
    String::parse_latin1((StrRange *)&local_168);
    if (*(code **)(*param_2 + 0x48) == get_class) {
      if (param_2[1] == 0) {
        local_178 = 0;
        local_118 = 0x1011a0;
        uStack_114 = 0;
        uStack_110 = 0x1d;
        uStack_10c = 0;
LAB_0010a679:
        String::parse_latin1((StrRange *)&local_178);
      }
      else {
        lVar14 = *(long *)(param_2[1] + 0x20);
        if (lVar14 == 0) {
          local_178 = 0;
        }
        else {
          pcVar1 = *(char **)(lVar14 + 8);
          local_178 = 0;
          if (pcVar1 != (char *)0x0) {
            sVar11 = strlen(pcVar1);
            local_118 = (int)pcVar1;
            uStack_114 = (undefined4)((ulong)pcVar1 >> 0x20);
            uStack_110 = (undefined4)sVar11;
            uStack_10c = (undefined4)(sVar11 >> 0x20);
            goto LAB_0010a679;
          }
          if (*(long *)(lVar14 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)(lVar14 + 0x10));
          }
        }
      }
    }
    else {
      (**(code **)(*param_2 + 0x48))(&local_178,param_2);
    }
    operator+((char *)&local_170,(String *)"Required virtual method ");
    String::operator+((String *)&local_160,(String *)&local_170);
    String::operator+((String *)&local_150,(String *)&local_160);
    String::operator+((String *)&local_118,(String *)&local_150);
    _err_print_error("_gdvirtual__create_data_channel_call",
                     "modules/webrtc/webrtc_peer_connection_extension.h",0x33,(String *)&local_118,0
                     ,0);
    if (CONCAT44(uStack_114,local_118) != 0) {
      LOCK();
      plVar15 = (long *)(CONCAT44(uStack_114,local_118) + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        lVar14 = CONCAT44(uStack_114,local_118);
        local_118 = 0;
        uStack_114 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_150;
    if (local_150 != 0) {
      LOCK();
      plVar15 = (long *)(local_150 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_150 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_160;
    if (local_160 != 0) {
      LOCK();
      plVar15 = (long *)(local_160 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_160 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_170;
    if (local_170 != 0) {
      LOCK();
      plVar15 = (long *)(local_170 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_178;
    if (local_178 != 0) {
      LOCK();
      plVar15 = (long *)(local_178 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_178 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar15 = (long *)(local_168 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar15 = (long *)(local_158 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    pcVar1 = local_148;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar15 = (long *)((long)local_148 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static((void *)((long)pcVar1 + -0x10),false);
      }
    }
    _gdvirtual__create_data_channel_call(String,Dictionary,Ref<WebRTCDataChannel>&)::first_print =
         '\0';
    goto LAB_0010a398;
  }
  local_150 = 0;
  plVar15 = (long *)(local_188 + -0x10);
  if (local_188 != 0) {
    do {
      lVar14 = *plVar15;
      if (lVar14 == 0) goto LAB_0010a43a;
      LOCK();
      lVar10 = *plVar15;
      bVar18 = lVar14 == lVar10;
      if (bVar18) {
        *plVar15 = lVar14 + 1;
        lVar10 = lVar14;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar10 != -1) {
      local_150 = local_188;
    }
  }
LAB_0010a43a:
  Dictionary::Dictionary((Dictionary *)&local_148,local_180);
  local_78 = &local_150;
  local_118 = 0;
  uStack_114 = 0;
  pDStack_70 = (Dictionary *)&local_148;
  if (*(code **)(param_2[1] + 0xe0) == (code *)0x0) {
    (*(code *)param_2[0x3e])(param_2[2],&local_78,&local_118);
    pOVar17 = (Object *)CONCAT44(uStack_114,local_118);
    if (pOVar17 != (Object *)0x0) goto LAB_0010a4ba;
LAB_0010a95c:
    pOVar17 = (Object *)*param_1;
    if (pOVar17 != (Object *)0x0) {
LAB_0010a884:
      *param_1 = 0;
LAB_0010a4fd:
      cVar8 = RefCounted::unreference();
      if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar17), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
        Memory::free_static(pOVar17,false);
      }
      goto LAB_0010a50d;
    }
  }
  else {
    (**(code **)(param_2[1] + 0xe0))(param_2[2],param_2 + 0x3c,param_2[0x3e],&local_78,&local_118);
    pOVar17 = (Object *)CONCAT44(uStack_114,local_118);
    if (pOVar17 == (Object *)0x0) goto LAB_0010a95c;
LAB_0010a4ba:
    cVar8 = RefCounted::reference();
    if (cVar8 != '\0') {
      pOVar12 = (Object *)*param_1;
      if (pOVar12 != pOVar17) {
        *param_1 = (long)pOVar17;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          *param_1 = 0;
        }
        if (((pOVar12 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(pOVar12), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
      }
      goto LAB_0010a4fd;
    }
    pOVar17 = (Object *)*param_1;
    if (pOVar17 != (Object *)0x0) goto LAB_0010a884;
LAB_0010a50d:
    if ((CONCAT44(uStack_114,local_118) != 0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0'))
    {
      pOVar17 = (Object *)CONCAT44(uStack_114,local_118);
      cVar8 = predelete_handler(pOVar17);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
        Memory::free_static(pOVar17,false);
      }
    }
  }
  Dictionary::~Dictionary((Dictionary *)&local_148);
  lVar14 = local_150;
  if (local_150 != 0) {
    LOCK();
    plVar15 = (long *)(local_150 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_150 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
LAB_0010a398:
  lVar14 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar15 = (long *)(local_188 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  Dictionary::~Dictionary(local_180);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WebRTCPeerConnectionExtension::set_remote_description(String, String) */

ulong __thiscall
WebRTCPeerConnectionExtension::set_remote_description
          (WebRTCPeerConnectionExtension *this,long *param_2,long *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_188;
  char *local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  char *local_148;
  long local_140;
  long local_138;
  undefined4 local_130;
  long local_128;
  undefined4 local_120;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 (*local_d8) [16];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  long *local_78;
  char **ppcStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_180 = (char *)0x0;
  if (*param_3 != 0) {
    plVar10 = (long *)(*param_3 + -0x10);
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_0010b5a4;
      LOCK();
      lVar4 = *plVar10;
      bVar12 = lVar9 == lVar4;
      if (bVar12) {
        *plVar10 = lVar9 + 1;
        lVar4 = lVar9;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar4 != -1) {
      local_180 = (char *)*param_3;
    }
  }
LAB_0010b5a4:
  local_188 = 0;
  plVar10 = (long *)(*param_2 + -0x10);
  if (*param_2 != 0) {
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_0010b5d8;
      LOCK();
      lVar4 = *plVar10;
      bVar12 = lVar9 == lVar4;
      if (bVar12) {
        *plVar10 = lVar9 + 1;
        lVar4 = lVar9;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar4 != -1) {
      local_188 = *param_2;
    }
  }
LAB_0010b5d8:
  plVar10 = *(long **)(this + 0x98);
  if (plVar10 != (long *)0x0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(String *)&local_188);
    Variant::Variant((Variant *)local_60,(String *)&local_180);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar10 + 0x60))((Variant *)local_98,plVar10,this + 0x210,&local_a8,2,&local_118);
    if (local_118 == 0) {
      uVar6 = Variant::operator_cast_to_long((Variant *)local_98);
      uVar6 = uVar6 & 0xffffffff;
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b6da;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x218] == (WebRTCPeerConnectionExtension)0x0)) {
    local_118 = 0;
    uStack_114 = 0;
    local_108 = (undefined1  [16])0x0;
    local_148 = "_set_remote_description";
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8 = (undefined1 (*) [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140 = 0x17;
    String::parse_latin1((StrRange *)&local_118);
    local_e0 = CONCAT44(local_e0._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
    uStack_110 = local_148._0_4_;
    uVar8 = local_108._0_8_;
    if (local_108._0_8_ != local_140) {
      if (local_108._0_8_ != 0) {
        LOCK();
        plVar10 = (long *)(local_108._0_8_ + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_108._8_8_;
          local_108 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar8 + -0x10),false);
        }
      }
      local_108._0_8_ = local_140;
      local_140 = 0;
    }
    if (local_108._8_8_ != local_138) {
      StringName::unref();
      lVar9 = local_138;
      local_138 = 0;
      local_108._8_8_ = lVar9;
    }
    lVar4 = local_f0;
    lVar9 = local_128;
    local_f8 = CONCAT44(local_f8._4_4_,local_130);
    if (local_f0 == local_128) {
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
      if (local_f0 != 0) {
        LOCK();
        plVar10 = (long *)(local_f0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
    }
    else {
      if (local_f0 != 0) {
        LOCK();
        plVar10 = (long *)(local_f0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      local_f0 = local_128;
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    *puVar7 = 0;
    puVar7[6] = 0;
    puVar7[10] = 6;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
    *puVar7 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_138);
    puVar7[6] = local_130;
    if (*(long *)(puVar7 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_128);
    }
    lVar4 = local_128;
    puVar7[10] = local_120;
    lVar9 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar7 + 0x10) = local_d8;
    *(long *)(puVar7 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(undefined4 **)(lVar9 + 0x30) = puVar7;
    }
    lVar9 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar7;
    if (lVar9 == 0) {
      *(undefined4 **)*local_d8 = puVar7;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    *puVar7 = 0;
    puVar7[6] = 0;
    puVar7[10] = 6;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
    *puVar7 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_138);
    puVar7[6] = local_130;
    if (*(long *)(puVar7 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_128);
    }
    lVar4 = local_128;
    puVar7[10] = local_120;
    lVar9 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar7 + 0x10) = local_d8;
    *(long *)(puVar7 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(undefined4 **)(lVar9 + 0x30) = puVar7;
    }
    lVar9 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar7;
    if (lVar9 == 0) {
      *(undefined4 **)*local_d8 = puVar7;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    uVar3 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x220) = 0;
    lVar9 = *(long *)(this + 8);
    pcVar11 = *(code **)(lVar9 + 0xd8);
    if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
       (pcVar11 = *(code **)(lVar9 + 0xd0), pcVar11 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140 == 0) {
        lVar9 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') goto LAB_0010c282;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010c29f:
        lVar9 = *(long *)(this + 8);
        pcVar11 = *(code **)(lVar9 + 200);
        if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
           (pcVar11 = *(code **)(lVar9 + 0xc0), pcVar11 == (code *)0x0)) goto LAB_0010c113;
        uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0));
        *(undefined8 *)(this + 0x220) = uVar8;
      }
      else {
        lVar9 = *(long *)(local_140 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') {
LAB_0010c282:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar9 == 0) goto LAB_0010c29f;
      }
      lVar9 = *(long *)(this + 8);
    }
    else {
      uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0),this + 0x210,uVar3);
      *(undefined8 *)(this + 0x220) = uVar8;
      lVar9 = *(long *)(this + 8);
    }
LAB_0010c113:
    if (*(char *)(lVar9 + 0x29) != '\0') {
      plVar10 = (long *)operator_new(0x18,"");
      *plVar10 = (long)(this + 0x220);
      plVar10[1] = (long)(this + 0x218);
      plVar10[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar10;
    }
    this[0x218] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  if (*(long *)(this + 0x220) == 0) {
    if (_gdvirtual__set_remote_description_call(String,String,Error&)::first_print != '\0') {
      local_148 = (char *)0x0;
      uStack_110 = 0x23;
      uStack_10c = 0;
      local_118 = 0x105a10;
      uStack_114 = 0;
      String::parse_latin1((StrRange *)&local_148);
      local_118 = 0x1007cd;
      uStack_114 = 0;
      local_158 = 0;
      uStack_110 = 0x17;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_158);
      local_118 = 0x101fdd;
      uStack_114 = 0;
      local_168 = 0;
      uStack_110 = 2;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_168);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_178 = 0;
          local_118 = 0x1011a0;
          uStack_114 = 0;
          uStack_110 = 0x1d;
          uStack_10c = 0;
          String::parse_latin1((StrRange *)&local_178);
        }
        else {
          lVar9 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar9 == 0) {
            local_178 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar9 + 8);
            local_178 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar9 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)(lVar9 + 0x10));
              }
            }
            else {
              sVar5 = strlen(pcVar1);
              local_118 = (uint)pcVar1;
              uStack_114 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_110 = (undefined4)sVar5;
              uStack_10c = (undefined4)(sVar5 >> 0x20);
              String::parse_latin1((StrRange *)&local_178);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_178,this);
      }
      operator+((char *)&local_170,(String *)"Required virtual method ");
      String::operator+((String *)&local_160,(String *)&local_170);
      String::operator+((String *)&local_150,(String *)&local_160);
      String::operator+((String *)&local_118,(String *)&local_150);
      _err_print_error("_gdvirtual__set_remote_description_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x35,(String *)&local_118
                       ,0,0);
      if (CONCAT44(uStack_114,local_118) != 0) {
        LOCK();
        plVar10 = (long *)(CONCAT44(uStack_114,local_118) + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          lVar9 = CONCAT44(uStack_114,local_118);
          local_118 = 0;
          uStack_114 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_150;
      if (local_150 != 0) {
        LOCK();
        plVar10 = (long *)(local_150 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_150 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_160;
      if (local_160 != 0) {
        LOCK();
        plVar10 = (long *)(local_160 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_160 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_170;
      if (local_170 != 0) {
        LOCK();
        plVar10 = (long *)(local_170 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_170 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar10 = (long *)(local_178 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_168;
      if (local_168 != 0) {
        LOCK();
        plVar10 = (long *)(local_168 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_168 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_158;
      if (local_158 != 0) {
        LOCK();
        plVar10 = (long *)(local_158 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_158 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      pcVar1 = local_148;
      if (local_148 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_148 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_148 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      _gdvirtual__set_remote_description_call(String,String,Error&)::first_print = '\0';
    }
    uVar6 = 0;
  }
  else {
    local_150 = 0;
    plVar10 = (long *)(local_188 + -0x10);
    if (local_188 != 0) {
      do {
        lVar9 = *plVar10;
        if (lVar9 == 0) goto LAB_0010b798;
        LOCK();
        lVar4 = *plVar10;
        bVar12 = lVar9 == lVar4;
        if (bVar12) {
          *plVar10 = lVar9 + 1;
          lVar4 = lVar9;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar4 != -1) {
        local_150 = local_188;
      }
    }
LAB_0010b798:
    local_148 = (char *)0x0;
    plVar10 = (long *)(local_180 + -0x10);
    if (local_180 != (char *)0x0) {
      do {
        lVar9 = *plVar10;
        if (lVar9 == 0) goto LAB_0010b7d2;
        LOCK();
        lVar4 = *plVar10;
        bVar12 = lVar9 == lVar4;
        if (bVar12) {
          *plVar10 = lVar9 + 1;
          lVar4 = lVar9;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar4 != -1) {
        local_148 = local_180;
      }
    }
LAB_0010b7d2:
    local_78 = &local_150;
    ppcStack_70 = &local_148;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x220))(*(undefined8 *)(this + 0x10),&local_78,&local_118);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x210,*(code **)(this + 0x220),&local_78,
                 &local_118);
    }
    pcVar1 = local_148;
    uVar6 = (ulong)local_118;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar10 = (long *)(local_148 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
    lVar9 = local_150;
    if (local_150 != 0) {
      LOCK();
      plVar10 = (long *)(local_150 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_150 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
LAB_0010b6da:
  lVar9 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar10 = (long *)(local_188 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  pcVar1 = local_180;
  if (local_180 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)(local_180 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_180 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WebRTCPeerConnectionExtension::set_local_description(String, String) */

ulong __thiscall
WebRTCPeerConnectionExtension::set_local_description
          (WebRTCPeerConnectionExtension *this,long *param_2,long *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_188;
  char *local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  char *local_148;
  long local_140;
  long local_138;
  undefined4 local_130;
  long local_128;
  undefined4 local_120;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 (*local_d8) [16];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  long *local_78;
  char **ppcStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_180 = (char *)0x0;
  if (*param_3 != 0) {
    plVar10 = (long *)(*param_3 + -0x10);
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_0010c494;
      LOCK();
      lVar4 = *plVar10;
      bVar12 = lVar9 == lVar4;
      if (bVar12) {
        *plVar10 = lVar9 + 1;
        lVar4 = lVar9;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar4 != -1) {
      local_180 = (char *)*param_3;
    }
  }
LAB_0010c494:
  local_188 = 0;
  plVar10 = (long *)(*param_2 + -0x10);
  if (*param_2 != 0) {
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_0010c4c8;
      LOCK();
      lVar4 = *plVar10;
      bVar12 = lVar9 == lVar4;
      if (bVar12) {
        *plVar10 = lVar9 + 1;
        lVar4 = lVar9;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar4 != -1) {
      local_188 = *param_2;
    }
  }
LAB_0010c4c8:
  plVar10 = *(long **)(this + 0x98);
  if (plVar10 != (long *)0x0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(String *)&local_188);
    Variant::Variant((Variant *)local_60,(String *)&local_180);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar10 + 0x60))((Variant *)local_98,plVar10,this + 0x228,&local_a8,2,&local_118);
    if (local_118 == 0) {
      uVar6 = Variant::operator_cast_to_long((Variant *)local_98);
      uVar6 = uVar6 & 0xffffffff;
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010c5ca;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x230] == (WebRTCPeerConnectionExtension)0x0)) {
    local_118 = 0;
    uStack_114 = 0;
    local_108 = (undefined1  [16])0x0;
    local_148 = "_set_local_description";
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8 = (undefined1 (*) [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140 = 0x16;
    String::parse_latin1((StrRange *)&local_118);
    local_e0 = CONCAT44(local_e0._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
    uStack_110 = local_148._0_4_;
    uVar8 = local_108._0_8_;
    if (local_108._0_8_ != local_140) {
      if (local_108._0_8_ != 0) {
        LOCK();
        plVar10 = (long *)(local_108._0_8_ + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_108._8_8_;
          local_108 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar8 + -0x10),false);
        }
      }
      local_108._0_8_ = local_140;
      local_140 = 0;
    }
    if (local_108._8_8_ != local_138) {
      StringName::unref();
      lVar9 = local_138;
      local_138 = 0;
      local_108._8_8_ = lVar9;
    }
    lVar4 = local_f0;
    lVar9 = local_128;
    local_f8 = CONCAT44(local_f8._4_4_,local_130);
    if (local_f0 == local_128) {
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
      if (local_f0 != 0) {
        LOCK();
        plVar10 = (long *)(local_f0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
    }
    else {
      if (local_f0 != 0) {
        LOCK();
        plVar10 = (long *)(local_f0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      local_f0 = local_128;
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    *puVar7 = 0;
    puVar7[6] = 0;
    puVar7[10] = 6;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
    *puVar7 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_138);
    puVar7[6] = local_130;
    if (*(long *)(puVar7 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_128);
    }
    lVar4 = local_128;
    puVar7[10] = local_120;
    lVar9 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar7 + 0x10) = local_d8;
    *(long *)(puVar7 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(undefined4 **)(lVar9 + 0x30) = puVar7;
    }
    lVar9 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar7;
    if (lVar9 == 0) {
      *(undefined4 **)*local_d8 = puVar7;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    *puVar7 = 0;
    puVar7[6] = 0;
    puVar7[10] = 6;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
    *puVar7 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_138);
    puVar7[6] = local_130;
    if (*(long *)(puVar7 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_128);
    }
    lVar4 = local_128;
    puVar7[10] = local_120;
    lVar9 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar7 + 0x10) = local_d8;
    *(long *)(puVar7 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(undefined4 **)(lVar9 + 0x30) = puVar7;
    }
    lVar9 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar7;
    if (lVar9 == 0) {
      *(undefined4 **)*local_d8 = puVar7;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar9 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar10 = (long *)(local_140 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    uVar3 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x238) = 0;
    lVar9 = *(long *)(this + 8);
    pcVar11 = *(code **)(lVar9 + 0xd8);
    if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
       (pcVar11 = *(code **)(lVar9 + 0xd0), pcVar11 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140 == 0) {
        lVar9 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') goto LAB_0010d172;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010d18f:
        lVar9 = *(long *)(this + 8);
        pcVar11 = *(code **)(lVar9 + 200);
        if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
           (pcVar11 = *(code **)(lVar9 + 0xc0), pcVar11 == (code *)0x0)) goto LAB_0010d003;
        uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0));
        *(undefined8 *)(this + 0x238) = uVar8;
      }
      else {
        lVar9 = *(long *)(local_140 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') {
LAB_0010d172:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar9 == 0) goto LAB_0010d18f;
      }
      lVar9 = *(long *)(this + 8);
    }
    else {
      uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0),this + 0x228,uVar3);
      *(undefined8 *)(this + 0x238) = uVar8;
      lVar9 = *(long *)(this + 8);
    }
LAB_0010d003:
    if (*(char *)(lVar9 + 0x29) != '\0') {
      plVar10 = (long *)operator_new(0x18,"");
      *plVar10 = (long)(this + 0x238);
      plVar10[1] = (long)(this + 0x230);
      plVar10[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar10;
    }
    this[0x230] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  if (*(long *)(this + 0x238) == 0) {
    if (_gdvirtual__set_local_description_call(String,String,Error&)::first_print != '\0') {
      local_148 = (char *)0x0;
      uStack_110 = 0x23;
      uStack_10c = 0;
      local_118 = 0x105a10;
      uStack_114 = 0;
      String::parse_latin1((StrRange *)&local_148);
      local_118 = 0x1007e5;
      uStack_114 = 0;
      local_158 = 0;
      uStack_110 = 0x16;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_158);
      local_118 = 0x101fdd;
      uStack_114 = 0;
      local_168 = 0;
      uStack_110 = 2;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_168);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_178 = 0;
          local_118 = 0x1011a0;
          uStack_114 = 0;
          uStack_110 = 0x1d;
          uStack_10c = 0;
          String::parse_latin1((StrRange *)&local_178);
        }
        else {
          lVar9 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar9 == 0) {
            local_178 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar9 + 8);
            local_178 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar9 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)(lVar9 + 0x10));
              }
            }
            else {
              sVar5 = strlen(pcVar1);
              local_118 = (uint)pcVar1;
              uStack_114 = (undefined4)((ulong)pcVar1 >> 0x20);
              uStack_110 = (undefined4)sVar5;
              uStack_10c = (undefined4)(sVar5 >> 0x20);
              String::parse_latin1((StrRange *)&local_178);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_178,this);
      }
      operator+((char *)&local_170,(String *)"Required virtual method ");
      String::operator+((String *)&local_160,(String *)&local_170);
      String::operator+((String *)&local_150,(String *)&local_160);
      String::operator+((String *)&local_118,(String *)&local_150);
      _err_print_error("_gdvirtual__set_local_description_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x36,(String *)&local_118
                       ,0,0);
      if (CONCAT44(uStack_114,local_118) != 0) {
        LOCK();
        plVar10 = (long *)(CONCAT44(uStack_114,local_118) + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          lVar9 = CONCAT44(uStack_114,local_118);
          local_118 = 0;
          uStack_114 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_150;
      if (local_150 != 0) {
        LOCK();
        plVar10 = (long *)(local_150 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_150 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_160;
      if (local_160 != 0) {
        LOCK();
        plVar10 = (long *)(local_160 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_160 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_170;
      if (local_170 != 0) {
        LOCK();
        plVar10 = (long *)(local_170 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_170 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar10 = (long *)(local_178 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_168;
      if (local_168 != 0) {
        LOCK();
        plVar10 = (long *)(local_168 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_168 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_158;
      if (local_158 != 0) {
        LOCK();
        plVar10 = (long *)(local_158 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_158 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      pcVar1 = local_148;
      if (local_148 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_148 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_148 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      _gdvirtual__set_local_description_call(String,String,Error&)::first_print = '\0';
    }
    uVar6 = 0;
  }
  else {
    local_150 = 0;
    plVar10 = (long *)(local_188 + -0x10);
    if (local_188 != 0) {
      do {
        lVar9 = *plVar10;
        if (lVar9 == 0) goto LAB_0010c688;
        LOCK();
        lVar4 = *plVar10;
        bVar12 = lVar9 == lVar4;
        if (bVar12) {
          *plVar10 = lVar9 + 1;
          lVar4 = lVar9;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar4 != -1) {
        local_150 = local_188;
      }
    }
LAB_0010c688:
    local_148 = (char *)0x0;
    plVar10 = (long *)(local_180 + -0x10);
    if (local_180 != (char *)0x0) {
      do {
        lVar9 = *plVar10;
        if (lVar9 == 0) goto LAB_0010c6c2;
        LOCK();
        lVar4 = *plVar10;
        bVar12 = lVar9 == lVar4;
        if (bVar12) {
          *plVar10 = lVar9 + 1;
          lVar4 = lVar9;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar4 != -1) {
        local_148 = local_180;
      }
    }
LAB_0010c6c2:
    local_78 = &local_150;
    ppcStack_70 = &local_148;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x238))(*(undefined8 *)(this + 0x10),&local_78,&local_118);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x228,*(code **)(this + 0x238),&local_78,
                 &local_118);
    }
    pcVar1 = local_148;
    uVar6 = (ulong)local_118;
    if (local_148 != (char *)0x0) {
      LOCK();
      plVar10 = (long *)(local_148 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_148 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
    lVar9 = local_150;
    if (local_150 != 0) {
      LOCK();
      plVar10 = (long *)(local_150 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_150 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
LAB_0010c5ca:
  lVar9 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar10 = (long *)(local_188 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  pcVar1 = local_180;
  if (local_180 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)(local_180 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_180 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WebRTCPeerConnectionExtension::add_ice_candidate(String, int, String) */

ulong __thiscall
WebRTCPeerConnectionExtension::add_ice_candidate
          (WebRTCPeerConnectionExtension *this,long *param_2,int param_3,long *param_4)

{
  Variant *pVVar1;
  StringName *this_00;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  code *pcVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_1a8;
  char *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  char *local_168;
  undefined1 local_160 [16];
  int local_150;
  long local_148;
  undefined4 local_140;
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 (*local_f8) [16];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  long *local_88;
  long *plStack_80;
  char **local_78;
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = (char *)0x0;
  if (*param_4 != 0) {
    plVar14 = (long *)(*param_4 + -0x10);
    do {
      lVar13 = *plVar14;
      if (lVar13 == 0) goto LAB_0010d384;
      LOCK();
      lVar8 = *plVar14;
      bVar17 = lVar13 == lVar8;
      if (bVar17) {
        *plVar14 = lVar13 + 1;
        lVar8 = lVar13;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar8 != -1) {
      local_1a0 = (char *)*param_4;
    }
  }
LAB_0010d384:
  local_1a8 = 0;
  plVar14 = (long *)(*param_2 + -0x10);
  if (*param_2 != 0) {
    do {
      lVar13 = *plVar14;
      if (lVar13 == 0) goto LAB_0010d3ba;
      LOCK();
      lVar8 = *plVar14;
      bVar17 = lVar13 == lVar8;
      if (bVar17) {
        *plVar14 = lVar13 + 1;
        lVar8 = lVar13;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar8 != -1) {
      local_1a8 = *param_2;
    }
  }
LAB_0010d3ba:
  plVar14 = *(long **)(this + 0x98);
  if (plVar14 != (long *)0x0) {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)&local_88,(String *)&local_1a8);
    Variant::Variant(local_70,param_3);
    Variant::Variant(local_58,(String *)&local_1a0);
    local_c8 = (Variant *)&local_88;
    pVStack_c0 = local_70;
    local_b8 = local_58;
    (**(code **)(*plVar14 + 0x60))((Variant *)local_a8,plVar14,this + 0x240,&local_c8,3,&local_138);
    if (local_138 == 0) {
      uVar10 = Variant::operator_cast_to_long((Variant *)local_a8);
      uVar10 = uVar10 & 0xffffffff;
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar16 = (Variant *)local_40;
      do {
        pVVar1 = pVVar16 + -0x18;
        pVVar16 = pVVar16 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar16 != (Variant *)&local_88);
      goto LAB_0010d4e0;
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar16 = (Variant *)local_40;
    do {
      pVVar1 = pVVar16 + -0x18;
      pVVar16 = pVVar16 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar16 != (Variant *)&local_88);
  }
  if ((*(long *)(this + 8) != 0) && (this[0x248] == (WebRTCPeerConnectionExtension)0x0)) {
    local_138 = 0;
    uStack_134 = 0;
    local_128 = (undefined1  [16])0x0;
    local_168 = "_add_ice_candidate";
    uStack_130 = 0;
    uStack_12c = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 6;
    local_100 = 1;
    local_f8 = (undefined1 (*) [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_160._0_8_ = 0x12;
    String::parse_latin1((StrRange *)&local_138);
    local_100 = CONCAT44(local_100._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_168);
    uStack_130 = local_168._0_4_;
    uVar12 = local_128._0_8_;
    if (local_128._0_8_ != local_160._0_8_) {
      if (local_128._0_8_ != 0) {
        LOCK();
        plVar14 = (long *)(local_128._0_8_ + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_128._8_8_;
          local_128 = auVar3 << 0x40;
          Memory::free_static((void *)(uVar12 + -0x10),false);
        }
      }
      local_128._0_8_ = local_160._0_8_;
      local_160._0_8_ = 0;
    }
    if (local_128._8_8_ != local_160._8_8_) {
      StringName::unref();
      uVar12 = local_160._8_8_;
      local_160._8_8_ = 0;
      local_128._8_8_ = uVar12;
    }
    lVar8 = local_110;
    lVar13 = local_148;
    local_118 = CONCAT44(local_118._4_4_,local_150);
    if (local_110 == local_148) {
      local_108 = CONCAT44(local_108._4_4_,local_140);
      if (local_110 != 0) {
        LOCK();
        plVar14 = (long *)(local_110 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_148 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
    }
    else {
      if (local_110 != 0) {
        LOCK();
        plVar14 = (long *)(local_110 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      local_110 = local_148;
      local_108 = CONCAT44(local_108._4_4_,local_140);
    }
    this_00 = (StringName *)(local_160 + 8);
    if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
      StringName::unref();
    }
    uVar12 = local_160._0_8_;
    if (local_160._0_8_ != 0) {
      LOCK();
      plVar14 = (long *)(local_160._0_8_ + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_160._0_8_ = 0;
        Memory::free_static((void *)(uVar12 + -0x10),false);
      }
    }
    local_e0 = local_e0 & 0xffffffff00000000;
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_168);
    if (local_f8 == (undefined1 (*) [16])0x0) {
      local_f8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_f8[1] = 0;
      *local_f8 = (undefined1  [16])0x0;
    }
    puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar11 + 8) = 0;
    *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
    *puVar11 = 0;
    puVar11[6] = 0;
    puVar11[10] = 6;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
    *puVar11 = local_168._0_4_;
    if (local_160._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)local_160);
    }
    StringName::operator=((StringName *)(puVar11 + 4),this_00);
    puVar11[6] = local_150;
    if (*(long *)(puVar11 + 8) != local_148) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_148);
    }
    lVar8 = local_148;
    puVar11[10] = local_140;
    lVar13 = *(long *)(*local_f8 + 8);
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar11 + 0x10) = local_f8;
    *(long *)(puVar11 + 0xe) = lVar13;
    if (lVar13 != 0) {
      *(undefined4 **)(lVar13 + 0x30) = puVar11;
    }
    lVar13 = *(long *)*local_f8;
    *(undefined4 **)(*local_f8 + 8) = puVar11;
    if (lVar13 == 0) {
      *(undefined4 **)*local_f8 = puVar11;
    }
    *(int *)local_f8[1] = *(int *)local_f8[1] + 1;
    if (local_148 != 0) {
      LOCK();
      plVar14 = (long *)(local_148 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
      StringName::unref();
    }
    uVar12 = local_160._0_8_;
    if (local_160._0_8_ != 0) {
      LOCK();
      plVar14 = (long *)(local_160._0_8_ + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_160._0_8_ = 0;
        Memory::free_static((void *)(uVar12 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_d8,0);
    local_178 = 0;
    local_180 = 0;
    local_168 = "";
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_160._8_8_;
    local_160 = auVar6 << 0x40;
    String::parse_latin1((StrRange *)&local_180);
    local_188 = 0;
    local_168 = (char *)CONCAT44(local_168._4_4_,2);
    local_150 = 0;
    local_148 = 0;
    local_160 = (undefined1  [16])0x0;
    if (local_180 == 0) {
LAB_0010e2a6:
      local_140 = 6;
      StringName::operator=(this_00,(StringName *)&local_178);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_180);
      local_140 = 6;
      if (local_150 != 0x11) goto LAB_0010e2a6;
      StringName::StringName((StringName *)&local_170,(String *)&local_148,false);
      if (local_160._8_8_ == local_170) {
        if ((StringName::configured != '\0') && (local_170 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_160._8_8_ = local_170;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    if (local_f8 == (undefined1 (*) [16])0x0) {
      local_f8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_f8[1] = 0;
      *local_f8 = (undefined1  [16])0x0;
    }
    puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar11 + 8) = 0;
    *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
    *puVar11 = 0;
    puVar11[6] = 0;
    puVar11[10] = 6;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
    *puVar11 = local_168._0_4_;
    if (local_160._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)local_160);
    }
    StringName::operator=((StringName *)(puVar11 + 4),this_00);
    puVar11[6] = local_150;
    if (*(long *)(puVar11 + 8) != local_148) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_148);
    }
    lVar8 = local_148;
    puVar11[10] = local_140;
    lVar13 = *(long *)(*local_f8 + 8);
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar11 + 0x10) = local_f8;
    *(long *)(puVar11 + 0xe) = lVar13;
    if (lVar13 != 0) {
      *(undefined4 **)(lVar13 + 0x30) = puVar11;
    }
    lVar13 = *(long *)*local_f8;
    *(undefined4 **)(*local_f8 + 8) = puVar11;
    if (lVar13 == 0) {
      *(undefined4 **)*local_f8 = puVar11;
    }
    *(int *)local_f8[1] = *(int *)local_f8[1] + 1;
    if (local_148 != 0) {
      LOCK();
      plVar14 = (long *)(local_148 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
      StringName::unref();
    }
    uVar12 = local_160._0_8_;
    if (local_160._0_8_ != 0) {
      LOCK();
      plVar14 = (long *)(local_160._0_8_ + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_160._8_8_;
        local_160 = auVar4 << 0x40;
        Memory::free_static((void *)(uVar12 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_d8,3);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_168);
    if (local_f8 == (undefined1 (*) [16])0x0) {
      local_f8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_f8[1] = 0;
      *local_f8 = (undefined1  [16])0x0;
    }
    puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar11 + 8) = 0;
    *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
    *puVar11 = 0;
    puVar11[6] = 0;
    puVar11[10] = 6;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
    *puVar11 = local_168._0_4_;
    if (local_160._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)local_160);
    }
    StringName::operator=((StringName *)(puVar11 + 4),this_00);
    puVar11[6] = local_150;
    if (*(long *)(puVar11 + 8) != local_148) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_148);
    }
    lVar8 = local_148;
    puVar11[10] = local_140;
    lVar13 = *(long *)(*local_f8 + 8);
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar11 + 0x10) = local_f8;
    *(long *)(puVar11 + 0xe) = lVar13;
    if (lVar13 != 0) {
      *(undefined4 **)(lVar13 + 0x30) = puVar11;
    }
    lVar13 = *(long *)*local_f8;
    *(undefined4 **)(*local_f8 + 8) = puVar11;
    if (lVar13 == 0) {
      *(undefined4 **)*local_f8 = puVar11;
    }
    *(int *)local_f8[1] = *(int *)local_f8[1] + 1;
    if (local_148 != 0) {
      LOCK();
      plVar14 = (long *)(local_148 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
      StringName::unref();
    }
    uVar12 = local_160._0_8_;
    if (local_160._0_8_ != 0) {
      LOCK();
      plVar14 = (long *)(local_160._0_8_ + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_160._8_8_;
        local_160 = auVar5 << 0x40;
        Memory::free_static((void *)(uVar12 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_d8,0);
    uVar7 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x250) = 0;
    lVar13 = *(long *)(this + 8);
    pcVar15 = *(code **)(lVar13 + 0xd8);
    if (((pcVar15 == (code *)0x0) || (*(long *)(lVar13 + 0xe0) == 0)) &&
       (pcVar15 = *(code **)(lVar13 + 0xd0), pcVar15 == (code *)0x0)) {
      local_178 = 0;
      String::parse_latin1((String *)&local_178,"WebRTCPeerConnectionExtension");
      StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_168,(StringName *)&local_170);
      if (local_160._0_8_ == 0) {
        lVar13 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
        if (StringName::configured != '\0') goto LAB_0010e334;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_0010e351:
        lVar13 = *(long *)(this + 8);
        pcVar15 = *(code **)(lVar13 + 200);
        if (((pcVar15 == (code *)0x0) || (*(long *)(lVar13 + 0xe0) == 0)) &&
           (pcVar15 = *(code **)(lVar13 + 0xc0), pcVar15 == (code *)0x0)) goto LAB_0010e1be;
        uVar12 = (*pcVar15)(*(undefined8 *)(lVar13 + 0xa0));
        *(undefined8 *)(this + 0x250) = uVar12;
      }
      else {
        lVar13 = *(long *)(local_160._0_8_ + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
        if (StringName::configured != '\0') {
LAB_0010e334:
          if (local_170 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        if (lVar13 == 0) goto LAB_0010e351;
      }
      lVar13 = *(long *)(this + 8);
    }
    else {
      uVar12 = (*pcVar15)(*(undefined8 *)(lVar13 + 0xa0),this + 0x240,uVar7);
      *(undefined8 *)(this + 0x250) = uVar12;
      lVar13 = *(long *)(this + 8);
    }
LAB_0010e1be:
    if (*(char *)(lVar13 + 0x29) != '\0') {
      plVar14 = (long *)operator_new(0x18,"");
      *plVar14 = (long)(this + 0x250);
      plVar14[1] = (long)(this + 0x248);
      plVar14[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar14;
    }
    this[0x248] = (WebRTCPeerConnectionExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_138);
  }
  if (*(long *)(this + 0x250) == 0) {
    if (_gdvirtual__add_ice_candidate_call(String,int,String,Error&)::first_print != '\0') {
      local_168 = (char *)0x0;
      uStack_130 = 0x23;
      uStack_12c = 0;
      local_138 = 0x105a10;
      uStack_134 = 0;
      String::parse_latin1((StrRange *)&local_168);
      local_138 = 0x1007fc;
      uStack_134 = 0;
      local_178 = 0;
      uStack_130 = 0x12;
      uStack_12c = 0;
      String::parse_latin1((StrRange *)&local_178);
      local_138 = 0x101fdd;
      uStack_134 = 0;
      local_188 = 0;
      uStack_130 = 2;
      uStack_12c = 0;
      String::parse_latin1((StrRange *)&local_188);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_198 = 0;
          local_138 = 0x1011a0;
          uStack_134 = 0;
          uStack_130 = 0x1d;
          uStack_12c = 0;
          String::parse_latin1((StrRange *)&local_198);
        }
        else {
          lVar13 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar13 == 0) {
            local_198 = 0;
          }
          else {
            pcVar2 = *(char **)(lVar13 + 8);
            local_198 = 0;
            if (pcVar2 == (char *)0x0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)(lVar13 + 0x10));
              }
            }
            else {
              sVar9 = strlen(pcVar2);
              local_138 = (uint)pcVar2;
              uStack_134 = (undefined4)((ulong)pcVar2 >> 0x20);
              uStack_130 = (undefined4)sVar9;
              uStack_12c = (undefined4)(sVar9 >> 0x20);
              String::parse_latin1((StrRange *)&local_198);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_198,this);
      }
      operator+((char *)&local_190,(String *)"Required virtual method ");
      String::operator+((String *)&local_180,(String *)&local_190);
      String::operator+((String *)&local_170,(String *)&local_180);
      String::operator+((String *)&local_138,(String *)&local_170);
      _err_print_error("_gdvirtual__add_ice_candidate_call",
                       "modules/webrtc/webrtc_peer_connection_extension.h",0x37,(String *)&local_138
                       ,0,0);
      if (CONCAT44(uStack_134,local_138) != 0) {
        LOCK();
        plVar14 = (long *)(CONCAT44(uStack_134,local_138) + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          lVar13 = CONCAT44(uStack_134,local_138);
          local_138 = 0;
          uStack_134 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_170;
      if (local_170 != 0) {
        LOCK();
        plVar14 = (long *)(local_170 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_170 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_180;
      if (local_180 != 0) {
        LOCK();
        plVar14 = (long *)(local_180 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_180 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_190;
      if (local_190 != 0) {
        LOCK();
        plVar14 = (long *)(local_190 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_190 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_198;
      if (local_198 != 0) {
        LOCK();
        plVar14 = (long *)(local_198 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_198 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_188;
      if (local_188 != 0) {
        LOCK();
        plVar14 = (long *)(local_188 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_188 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar14 = (long *)(local_178 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      pcVar2 = local_168;
      if (local_168 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_168 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_168 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      _gdvirtual__add_ice_candidate_call(String,int,String,Error&)::first_print = '\0';
    }
    uVar10 = 0;
  }
  else {
    local_178 = 0;
    plVar14 = (long *)(local_1a8 + -0x10);
    if (local_1a8 != 0) {
      do {
        lVar13 = *plVar14;
        if (lVar13 == 0) goto LAB_0010d5a2;
        LOCK();
        lVar8 = *plVar14;
        bVar17 = lVar13 == lVar8;
        if (bVar17) {
          *plVar14 = lVar13 + 1;
          lVar8 = lVar13;
        }
        UNLOCK();
      } while (!bVar17);
      if (lVar8 != -1) {
        local_178 = local_1a8;
      }
    }
LAB_0010d5a2:
    local_168 = (char *)0x0;
    plVar14 = (long *)(local_1a0 + -0x10);
    if (local_1a0 != (char *)0x0) {
      do {
        lVar13 = *plVar14;
        if (lVar13 == 0) goto LAB_0010d5e1;
        LOCK();
        lVar8 = *plVar14;
        bVar17 = lVar13 == lVar8;
        if (bVar17) {
          *plVar14 = lVar13 + 1;
          lVar8 = lVar13;
        }
        UNLOCK();
      } while (!bVar17);
      if (lVar8 != -1) {
        local_168 = local_1a0;
      }
    }
LAB_0010d5e1:
    local_88 = &local_178;
    plStack_80 = &local_170;
    local_78 = &local_168;
    local_170 = (long)param_3;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x250))(*(undefined8 *)(this + 0x10),&local_88,&local_138);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x240,*(code **)(this + 0x250),&local_88,
                 &local_138);
    }
    pcVar2 = local_168;
    uVar10 = (ulong)local_138;
    if (local_168 != (char *)0x0) {
      LOCK();
      plVar14 = (long *)(local_168 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_168 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar13 = local_178;
    if (local_178 != 0) {
      LOCK();
      plVar14 = (long *)(local_178 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_178 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
  }
LAB_0010d4e0:
  lVar13 = local_1a8;
  if (local_1a8 != 0) {
    LOCK();
    plVar14 = (long *)(local_1a8 + -0x10);
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      local_1a8 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  pcVar2 = local_1a0;
  if (local_1a0 != (char *)0x0) {
    LOCK();
    plVar14 = (long *)(local_1a0 + -0x10);
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      local_1a0 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension() */

void __thiscall
WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension(WebRTCPeerConnectionExtension *this)

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


