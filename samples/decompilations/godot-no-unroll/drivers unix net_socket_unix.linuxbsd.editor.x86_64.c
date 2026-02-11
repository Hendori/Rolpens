
/* NetSocketUnix::is_open() const */

bool __thiscall NetSocketUnix::is_open(NetSocketUnix *this)

{
  return *(int *)(this + 0x17c) != -1;
}



/* NetSocketUnix::_create_func() */

RefCounted * NetSocketUnix::_create_func(void)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x188,"");
  RefCounted::RefCounted(this);
  this[0x184] = (RefCounted)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001041c8;
  *(undefined8 *)(this + 0x17c) = 0xffffffff;
  postinitialize_handler((Object *)this);
  return this;
}



/* NetSocketUnix::close() */

void __thiscall NetSocketUnix::close(NetSocketUnix *this)

{
  if (*(int *)(this + 0x17c) != -1) {
    ::close(*(int *)(this + 0x17c));
  }
  this[0x184] = (NetSocketUnix)0x0;
  *(undefined8 *)(this + 0x17c) = 0xffffffff;
  return;
}



/* NetSocketUnix::open(NetSocket::Type, IP::Type&) */

undefined8 __thiscall NetSocketUnix::open(NetSocketUnix *this,int param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int __protocol;
  int iVar5;
  int __type;
  
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) != -1) {
LAB_0010020a:
      _err_print_error(&_LC4,"drivers/unix/net_socket_unix.cpp",0xfa,
                       "Condition \"is_open()\" is true. Returning: ERR_ALREADY_IN_USE",0,0);
      return 0x16;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 != '\0') goto LAB_0010020a;
  }
  if (3 < *param_3) {
    _err_print_error(&_LC4,"drivers/unix/net_socket_unix.cpp",0xfb,
                     "Condition \"ip_type > IP::TYPE_ANY || ip_type < IP::TYPE_NONE\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    return 0x1f;
  }
  iVar5 = (uint)(*param_3 != 1) * 8 + 2;
  __type = (param_2 != 1) + 1;
  __protocol = 0x11;
  if (param_2 == 1) {
    __protocol = 6;
  }
  iVar2 = socket(iVar5,__type,__protocol);
  *(int *)(this + 0x17c) = iVar2;
  if (iVar2 == -1) {
    if (*param_3 == 3) {
      *param_3 = 1;
      iVar5 = socket(2,__type,__protocol);
      *(int *)(this + 0x17c) = iVar5;
      if (iVar5 != -1) {
        *(uint *)(this + 0x180) = *param_3;
        goto joined_r0x001001a9;
      }
    }
    _err_print_error(&_LC4,"drivers/unix/net_socket_unix.cpp",0x111,
                     "Condition \"_sock == -1\" is true. Returning: FAILED",0,0);
    uVar4 = 1;
  }
  else {
    uVar3 = *param_3;
    *(uint *)(this + 0x180) = uVar3;
    if (iVar5 == 10) {
      (**(code **)(*(long *)this + 0x1d0))(this,uVar3 != 3);
    }
joined_r0x001001a9:
    if (__protocol == 0x11) {
      (**(code **)(*(long *)this + 0x1c0))(this,0);
    }
    this[0x184] = (NetSocketUnix)(param_2 == 1);
    uVar3 = fcntl64(*(undefined4 *)(this + 0x17c),1);
    fcntl64(*(undefined4 *)(this + 0x17c),2,uVar3 | 1);
    uVar4 = 0;
  }
  return uVar4;
}



/* NetSocketUnix::set_broadcasting_enabled(bool) */

int __thiscall NetSocketUnix::set_broadcasting_enabled(NetSocketUnix *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_00100356:
      _err_print_error("set_broadcasting_enabled","drivers/unix/net_socket_unix.cpp",0x200,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      iVar3 = 3;
      goto LAB_00100337;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_00100356;
  }
  iVar3 = *(int *)(this + 0x180);
  if (iVar3 != 2) {
    local_24 = (uint)param_1;
    iVar2 = setsockopt(*(int *)(this + 0x17c),1,6,&local_24,4);
    iVar3 = 0;
    if (iVar2 != 0) {
      _err_print_error("set_broadcasting_enabled","drivers/unix/net_socket_unix.cpp",0x208,
                       "Unable to change broadcast setting.",0,1);
      iVar3 = 1;
    }
  }
LAB_00100337:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::set_blocking_enabled(bool) */

void __thiscall NetSocketUnix::set_blocking_enabled(NetSocketUnix *this,bool param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_0010048a:
      uVar6 = 0;
      uVar5 = 0x20f;
      pcVar4 = "Condition \"!is_open()\" is true.";
      goto LAB_0010045e;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_0010048a;
  }
  uVar2 = fcntl64(*(undefined4 *)(this + 0x17c),3);
  if (param_1) {
    iVar3 = fcntl64(*(undefined4 *)(this + 0x17c),4,uVar2 & 0xfffff7ff);
  }
  else {
    iVar3 = fcntl64(*(undefined4 *)(this + 0x17c),4,uVar2 | 0x800);
  }
  if (iVar3 == 0) {
    return;
  }
  uVar6 = 1;
  uVar5 = 0x21a;
  pcVar4 = "Unable to change non-block mode.";
LAB_0010045e:
  _err_print_error("set_blocking_enabled","drivers/unix/net_socket_unix.cpp",uVar5,pcVar4,0,uVar6);
  return;
}



/* NetSocketUnix::set_ipv6_only_enabled(bool) */

void __thiscall NetSocketUnix::set_ipv6_only_enabled(NetSocketUnix *this,bool param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_0010057a:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0x21f;
        pcVar3 = "Condition \"!is_open()\" is true.";
        goto LAB_0010059c;
      }
      goto LAB_001005dc;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_0010057a;
  }
  if (*(int *)(this + 0x180) == 1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x221;
      pcVar3 = "Condition \"_ip_type == IP::TYPE_IPV4\" is true.";
LAB_0010059c:
      _err_print_error("set_ipv6_only_enabled","drivers/unix/net_socket_unix.cpp",uVar4,pcVar3,0,0);
      return;
    }
  }
  else {
    local_24 = (uint)param_1;
    iVar2 = setsockopt(*(int *)(this + 0x17c),0x29,0x1a,&local_24,4);
    if (iVar2 != 0) {
      _err_print_error("set_ipv6_only_enabled","drivers/unix/net_socket_unix.cpp",0x225,
                       "Unable to change IPv4 address mapping over IPv6 option.",0,1);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001005dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::set_tcp_no_delay_enabled(bool) */

void __thiscall NetSocketUnix::set_tcp_no_delay_enabled(NetSocketUnix *this,bool param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_001006ca:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0x22a;
        pcVar3 = "Condition \"!is_open()\" is true.";
        goto LAB_001006ec;
      }
      goto LAB_0010072c;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_001006ca;
  }
  if (this[0x184] == (NetSocketUnix)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x22b;
      pcVar3 = "Condition \"!_is_stream\" is true.";
LAB_001006ec:
      _err_print_error("set_tcp_no_delay_enabled","drivers/unix/net_socket_unix.cpp",uVar4,pcVar3,0,
                       0);
      return;
    }
  }
  else {
    local_24 = (uint)param_1;
    iVar2 = setsockopt(*(int *)(this + 0x17c),6,1,&local_24,4);
    if (iVar2 < 0) {
      _err_print_error("set_tcp_no_delay_enabled","drivers/unix/net_socket_unix.cpp",0x22f,
                       "Unable to set TCP no delay option.",0,1);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010072c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::set_reuse_address_enabled(bool) */

void __thiscall NetSocketUnix::set_reuse_address_enabled(NetSocketUnix *this,bool param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_001007f6:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("set_reuse_address_enabled","drivers/unix/net_socket_unix.cpp",0x234,
                         "Condition \"!is_open()\" is true.",0,0);
        return;
      }
      goto LAB_00100831;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_001007f6;
  }
  local_24 = (uint)param_1;
  iVar2 = setsockopt(*(int *)(this + 0x17c),1,2,&local_24,4);
  if (iVar2 < 0) {
    _err_print_error("set_reuse_address_enabled","drivers/unix/net_socket_unix.cpp",0x238,
                     "Unable to set socket REUSEADDR option.",0,1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100831:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::~NetSocketUnix() */

void __thiscall NetSocketUnix::~NetSocketUnix(NetSocketUnix *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001041c8;
  if (*(int *)(this + 0x17c) != -1) {
    ::close(*(int *)(this + 0x17c));
  }
  this[0x184] = (NetSocketUnix)0x0;
  *(undefined8 *)(this + 0x17c) = 0xffffffff;
  *(undefined ***)this = &PTR__initialize_classv_00104068;
  Object::~Object((Object *)this);
  return;
}



/* NetSocketUnix::~NetSocketUnix() */

void __thiscall NetSocketUnix::~NetSocketUnix(NetSocketUnix *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001041c8;
  if (*(int *)(this + 0x17c) != -1) {
    ::close(*(int *)(this + 0x17c));
  }
  this[0x184] = (NetSocketUnix)0x0;
  *(undefined8 *)(this + 0x17c) = 0xffffffff;
  *(undefined ***)this = &PTR__initialize_classv_00104068;
  Object::~Object((Object *)this);
  operator_delete(this,0x188);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetSocketUnix::_set_addr_storage(sockaddr_storage*, IPAddress const&, unsigned short, IP::Type)
    */

undefined8
NetSocketUnix::_set_addr_storage(undefined8 *param_1,long param_2,ushort param_3,int param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[0xf] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x80U >> 3)
      ; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (1 < param_4 - 2U) {
    if ((*(char *)(param_2 + 0x11) == '\0') && (cVar2 = IPAddress::is_ipv4(), cVar2 == '\0')) {
      _err_print_error("_set_addr_storage","drivers/unix/net_socket_unix.cpp",0x52,
                       "Condition \"!p_ip.is_wildcard() && !p_ip.is_ipv4()\" is true. Returning: 0",
                       0,0);
      return 0;
    }
    cVar2 = *(char *)(param_2 + 0x10);
    *(undefined2 *)param_1 = 2;
    *(ushort *)((long)param_1 + 2) = param_3 << 8 | param_3 >> 8;
    if (cVar2 == '\0') {
      *(undefined4 *)((long)param_1 + 4) = 0;
    }
    else {
      puVar3 = (undefined4 *)IPAddress::get_ipv4();
      *(undefined4 *)((long)param_1 + 4) = *puVar3;
    }
    return 0x10;
  }
  if (((*(char *)(param_2 + 0x11) != '\x01') && (param_4 == 2)) &&
     (cVar2 = IPAddress::is_ipv4(), cVar2 != '\0')) {
    _err_print_error("_set_addr_storage","drivers/unix/net_socket_unix.cpp",0x44,
                     "Condition \"!p_ip.is_wildcard() && p_ip_type == IP::TYPE_IPV6 && p_ip.is_ipv4()\" is true. Returning: 0"
                     ,0,0);
    return 0;
  }
  *(undefined2 *)param_1 = 10;
  cVar2 = *(char *)(param_2 + 0x10);
  *(ushort *)((long)param_1 + 2) = param_3 << 8 | param_3 >> 8;
  uVar1 = _get_ipv4;
  if (cVar2 == '\0') {
    param_1[1] = _in6addr_any;
    param_1[2] = uVar1;
  }
  else {
    puVar4 = (undefined8 *)IPAddress::get_ipv6();
    uVar1 = puVar4[1];
    param_1[1] = *puVar4;
    param_1[2] = uVar1;
  }
  return 0x1c;
}



/* NetSocketUnix::_set_ip_port(sockaddr_storage*, IPAddress*, unsigned short*) */

void NetSocketUnix::_set_ip_port(sockaddr_storage *param_1,IPAddress *param_2,ushort *param_3)

{
  if (*(short *)param_1 == 2) {
    if (param_2 != (IPAddress *)0x0) {
      IPAddress::set_ipv4((uchar *)param_2);
    }
  }
  else {
    if (*(short *)param_1 != 10) {
      return;
    }
    if (param_2 != (IPAddress *)0x0) {
      IPAddress::set_ipv6((uchar *)param_2);
    }
  }
  if (param_3 == (ushort *)0x0) {
    return;
  }
  *param_3 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  return;
}



/* NetSocketUnix::make_default() */

void NetSocketUnix::make_default(void)

{
  NetSocket::_create = _create_func;
  return;
}



/* NetSocketUnix::cleanup() */

void NetSocketUnix::cleanup(void)

{
  return;
}



/* NetSocketUnix::NetSocketUnix() */

void __thiscall NetSocketUnix::NetSocketUnix(NetSocketUnix *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  this[0x184] = (NetSocketUnix)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001041c8;
  *(undefined8 *)(this + 0x17c) = 0xffffffff;
  return;
}



/* NetSocketUnix::_get_socket_error() const */

undefined8 NetSocketUnix::_get_socket_error(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  int *piVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar2 = *piVar6;
  if (iVar2 < 100) {
    if (0x61 < iVar2) {
      uVar7 = 3;
      goto LAB_00100c20;
    }
    uVar7 = 4;
    if (((iVar2 == 0xd) || (uVar7 = 3, iVar2 == 0x16)) || (uVar7 = 0, iVar2 == 0xb))
    goto LAB_00100c20;
  }
  else {
    uVar7 = 1;
    if (iVar2 == 0x6a) goto LAB_00100c20;
    if (iVar2 < 0x6b) {
      uVar7 = 5;
      if (iVar2 == 0x69) goto LAB_00100c20;
    }
    else {
      uVar7 = 2;
      if (iVar2 - 0x72U < 2) goto LAB_00100c20;
    }
  }
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    local_68 = 0;
    local_50 = 1;
    local_58 = &_LC25;
    String::parse_latin1((StrRange *)&local_68);
    itos((long)&local_78);
    operator+((char *)&local_70,(String *)"Socket error: ");
    String::operator+((String *)&local_60,(String *)&local_70);
    Variant::Variant((Variant *)local_48,(String *)&local_60);
    stringify_variants((Variant *)&local_58);
    __print_line((String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
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
  }
  uVar7 = 6;
LAB_00100c20:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* NetSocketUnix::recv(unsigned char*, int, int&) */

char __thiscall NetSocketUnix::recv(NetSocketUnix *this,uchar *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_00100ed0:
      _err_print_error(&_LC27,"drivers/unix/net_socket_unix.cpp",0x195,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      return '\x03';
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_00100ed0;
  }
  sVar3 = ::recv(*(int *)(this + 0x17c),param_1,(long)param_2,0);
  cVar1 = '\0';
  *param_3 = (int)sVar3;
  if ((int)sVar3 < 0) {
    iVar2 = _get_socket_error();
    cVar1 = ',';
    if (iVar2 != 0) {
      return (iVar2 == 5) * '\x05' + '\x01';
    }
  }
  return cVar1;
}



/* NetSocketUnix::recvfrom(unsigned char*, int, int&, IPAddress&, unsigned short&, bool) */

undefined8 __thiscall
NetSocketUnix::recvfrom
          (NetSocketUnix *this,uchar *param_1,int param_2,int *param_3,IPAddress *param_4,
          ushort *param_5,bool param_6)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  undefined8 uVar4;
  long lVar5;
  sockaddr *psVar6;
  long in_FS_OFFSET;
  byte bVar7;
  socklen_t local_cc;
  sockaddr local_c8 [8];
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_00101074:
      _err_print_error("recvfrom","drivers/unix/net_socket_unix.cpp",0x1aa,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      uVar4 = 3;
      goto LAB_00100ff1;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_00101074;
  }
  local_cc = 0x80;
  psVar6 = local_c8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    psVar6->sa_family = 0;
    psVar6->sa_data[0] = '\0';
    psVar6->sa_data[1] = '\0';
    psVar6->sa_data[2] = '\0';
    psVar6->sa_data[3] = '\0';
    psVar6->sa_data[4] = '\0';
    psVar6->sa_data[5] = '\0';
    psVar6 = (sockaddr *)(psVar6[-(ulong)bVar7].sa_data + 6);
  }
  sVar3 = ::recvfrom(*(int *)(this + 0x17c),param_1,(long)param_2,(uint)param_6 * 2,local_c8,
                     &local_cc);
  *param_3 = (int)sVar3;
  if ((int)sVar3 < 0) {
    iVar2 = _get_socket_error();
    uVar4 = 0x2c;
    if ((iVar2 == 0) || (uVar4 = 6, iVar2 == 5)) goto LAB_00100ff1;
  }
  else {
    if (local_c8[0].sa_family == 2) {
      IPAddress::set_ipv4((uchar *)param_4);
      *param_5 = local_c8[0].sa_data._0_2_ << 8 | (ushort)local_c8[0].sa_data._0_2_ >> 8;
      uVar4 = 0;
      goto LAB_00100ff1;
    }
    if (local_c8[0].sa_family == 10) {
      IPAddress::set_ipv6((uchar *)param_4);
      *param_5 = local_c8[0].sa_data._0_2_ << 8 | (ushort)local_c8[0].sa_data._0_2_ >> 8;
      uVar4 = 0;
      goto LAB_00100ff1;
    }
    _err_print_error("recvfrom","drivers/unix/net_socket_unix.cpp",0x1c9,
                     "Method/function failed. Returning: FAILED",0,0);
  }
  uVar4 = 1;
LAB_00100ff1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* NetSocketUnix::send(unsigned char const*, int, int&) */

char __thiscall NetSocketUnix::send(NetSocketUnix *this,uchar *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_00101170:
      _err_print_error(&_LC30,"drivers/unix/net_socket_unix.cpp",0x1d0,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      return '\x03';
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar1 == '\0') goto LAB_00101170;
  }
  sVar3 = ::send(*(int *)(this + 0x17c),param_1,(long)param_2,(uint)(byte)this[0x184] << 0xe);
  cVar1 = '\0';
  *param_3 = (int)sVar3;
  if ((int)sVar3 < 0) {
    iVar2 = _get_socket_error();
    cVar1 = ',';
    if (iVar2 != 0) {
      return (iVar2 == 5) * '\x05' + '\x01';
    }
  }
  return cVar1;
}



/* NetSocketUnix::sendto(unsigned char const*, int, int&, IPAddress, unsigned short) */

char NetSocketUnix::sendto(long *param_1,void *param_2,int param_3,int *param_4,undefined2 param_5)

{
  char cVar1;
  socklen_t __addr_len;
  int iVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  sockaddr asStack_b8 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_1 + 0x1a8) == is_open) {
    if (*(int *)((long)param_1 + 0x17c) == -1) {
LAB_0010129a:
      _err_print_error("sendto","drivers/unix/net_socket_unix.cpp",0x1ea,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      cVar1 = '\x03';
      goto LAB_00101249;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1a8))();
    if (cVar1 == '\0') goto LAB_0010129a;
  }
  __addr_len = _set_addr_storage(asStack_b8,&stack0x00000008,param_5);
  sVar3 = ::sendto(*(int *)((long)param_1 + 0x17c),param_2,(long)param_3,0,asStack_b8,__addr_len);
  cVar1 = '\0';
  *param_4 = (int)sVar3;
  if ((int)sVar3 < 0) {
    iVar2 = _get_socket_error();
    cVar1 = ',';
    if (iVar2 != 0) {
      cVar1 = (iVar2 == 5) * '\x05' + '\x01';
    }
  }
LAB_00101249:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::listen(int) */

undefined8 __thiscall NetSocketUnix::listen(NetSocketUnix *this,int param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_0010134e:
      _err_print_error("listen","drivers/unix/net_socket_unix.cpp",0x14a,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      uVar5 = 3;
      goto LAB_0010131f;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar3 == '\0') goto LAB_0010134e;
  }
  iVar4 = ::listen(*(int *)(this + 0x17c),param_1);
  uVar5 = 0;
  if (iVar4 != 0) {
    _get_socket_error();
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_38,"Failed to listen from socket.");
      stringify_variants((Variant *)&local_40);
      __print_line((String *)&local_40);
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
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (*(code **)(*(long *)this + 0x158) == close) {
      if (*(int *)(this + 0x17c) != -1) {
        ::close(*(int *)(this + 0x17c));
      }
      this[0x184] = (NetSocketUnix)0x0;
      *(undefined8 *)(this + 0x17c) = 0xffffffff;
    }
    else {
      (**(code **)(*(long *)this + 0x158))(this);
    }
    uVar5 = 1;
  }
LAB_0010131f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::poll(NetSocket::PollType, int) const */

byte __thiscall NetSocketUnix::poll(NetSocketUnix *this,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_48;
  pollfd local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_00101562:
      _err_print_error(&_LC34,"drivers/unix/net_socket_unix.cpp",0x173,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      bVar3 = 3;
      goto LAB_001014f2;
    }
  }
  else {
    cVar4 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar4 == '\0') goto LAB_00101562;
  }
  local_40.fd = *(int *)(this + 0x17c);
  local_40.events = 1;
  local_40.revents = 0;
  if (param_2 == 1) {
    local_40.events = 4;
    local_40.revents = 0;
  }
  else if (param_2 == 2) {
    local_40.events = 5;
    local_40.revents = 0;
  }
  iVar5 = ::poll(&local_40,1,param_3);
  if ((iVar5 < 0) || ((local_40._4_4_ & 0x80000) != 0)) {
    _get_socket_error();
    cVar4 = is_print_verbose_enabled();
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_38,"Error when polling socket.");
      stringify_variants((Variant *)&local_48);
      __print_line((String *)&local_48);
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
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    bVar3 = 1;
  }
  else {
    bVar3 = -(iVar5 == 0) & 0x2c;
  }
LAB_001014f2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::get_available_bytes() const */

undefined4 __thiscall NetSocketUnix::get_available_bytes(NetSocketUnix *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) goto LAB_0010169e;
LAB_0010165a:
    iVar4 = ioctl(*(int *)(this + 0x17c),0x541b,&local_44);
    if (iVar4 != -1) goto LAB_0010167a;
    _get_socket_error();
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_38,"Error when checking available bytes on socket.");
      stringify_variants((Variant *)&local_40);
      __print_line((String *)&local_40);
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
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar3 != '\0') goto LAB_0010165a;
LAB_0010169e:
    _err_print_error("get_available_bytes","drivers/unix/net_socket_unix.cpp",0x241,
                     "Condition \"!is_open()\" is true. Returning: -1",0,0);
  }
  local_44 = 0xffffffff;
LAB_0010167a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_44;
}



/* NetSocketUnix::get_socket_address(IPAddress*, unsigned short*) const */

undefined8 __thiscall
NetSocketUnix::get_socket_address(NetSocketUnix *this,IPAddress *param_1,ushort *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  socklen_t local_e4;
  long local_e0;
  int local_d8 [8];
  sockaddr local_b8 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) != -1) goto LAB_001017aa;
LAB_00101826:
    _err_print_error("get_socket_address","drivers/unix/net_socket_unix.cpp",0x24e,
                     "Condition \"!is_open()\" is true. Returning: FAILED",0,0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x1a8))();
    if (cVar3 == '\0') goto LAB_00101826;
LAB_001017aa:
    local_e4 = 0x80;
    iVar4 = getsockname(*(int *)(this + 0x17c),local_b8,&local_e4);
    if (iVar4 == 0) {
      _set_ip_port((sockaddr_storage *)local_b8,param_1,param_2);
      uVar5 = 0;
      goto LAB_001017de;
    }
    _get_socket_error();
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_d8,"Error when reading local socket address.");
      stringify_variants((Variant *)&local_e0);
      __print_line((String *)&local_e0);
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
      if (Variant::needs_deinit[local_d8[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  uVar5 = 1;
LAB_001017de:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::_can_use_ip(IPAddress const&, bool) const */

byte __thiscall NetSocketUnix::_can_use_ip(NetSocketUnix *this,IPAddress *param_1,bool param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2) {
    if ((param_1[0x10] == (IPAddress)0x0) && (param_1[0x11] == (IPAddress)0x0)) {
      return 0;
    }
  }
  else if (param_1[0x10] == (IPAddress)0x0) {
    return 0;
  }
  uVar2 = IPAddress::is_ipv4();
  bVar1 = 1;
  if (*(int *)(this + 0x180) != 3) {
    bVar1 = 2 - (uVar2 & 0xff) == *(int *)(this + 0x180) | (byte)param_1[0x11];
  }
  return bVar1;
}



/* NetSocketUnix::connect_to_host(IPAddress, unsigned short) */

undefined8 NetSocketUnix::connect_to_host(NetSocketUnix *param_1,undefined2 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  socklen_t __len;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_d0;
  int local_c8 [8];
  sockaddr local_a8 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x1a8) == is_open) {
    if (*(int *)(param_1 + 0x17c) == -1) {
LAB_00101a8a:
      _err_print_error("connect_to_host","drivers/unix/net_socket_unix.cpp",0x157,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      uVar6 = 3;
      goto LAB_001019ea;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)param_1 + 0x1a8))();
    if (cVar3 == '\0') goto LAB_00101a8a;
  }
  cVar3 = _can_use_ip(param_1,(IPAddress *)&stack0x00000008,false);
  if (cVar3 == '\0') {
    _err_print_error("connect_to_host","drivers/unix/net_socket_unix.cpp",0x158,
                     "Condition \"!_can_use_ip(p_host, false)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    uVar6 = 0x1f;
  }
  else {
    __len = _set_addr_storage(local_a8,&stack0x00000008,param_2,*(undefined4 *)(param_1 + 0x180));
    iVar4 = connect(*(int *)(param_1 + 0x17c),local_a8,__len);
    if (iVar4 != 0) {
      uVar5 = _get_socket_error();
      if (uVar5 != 1) {
        uVar6 = 0x2c;
        if ((uVar5 & 0xfffffffd) != 0) {
          cVar3 = is_print_verbose_enabled();
          if (cVar3 != '\0') {
            Variant::Variant((Variant *)local_c8,"Connection to remote host failed.");
            stringify_variants((Variant *)&local_d0);
            __print_line((String *)&local_d0);
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
            if (Variant::needs_deinit[local_c8[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if (*(code **)(*(long *)param_1 + 0x158) == close) {
            if (*(int *)(param_1 + 0x17c) != -1) {
              ::close(*(int *)(param_1 + 0x17c));
            }
            param_1[0x184] = (NetSocketUnix)0x0;
            *(undefined8 *)(param_1 + 0x17c) = 0xffffffff;
          }
          else {
            (**(code **)(*(long *)param_1 + 0x158))(param_1);
          }
          uVar6 = 1;
        }
        goto LAB_001019ea;
      }
    }
    uVar6 = 0;
  }
LAB_001019ea:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::bind(IPAddress, unsigned short) */

undefined8 NetSocketUnix::bind(NetSocketUnix *param_1,undefined2 param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  socklen_t __len;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  int local_d8 [8];
  sockaddr local_b8 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x1a8) == is_open) {
    if (*(int *)(param_1 + 0x17c) == -1) {
LAB_00101c6a:
      _err_print_error(&_LC46,"drivers/unix/net_socket_unix.cpp",0x139,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      uVar6 = 3;
      goto LAB_00101c33;
    }
  }
  else {
    cVar4 = (**(code **)(*(long *)param_1 + 0x1a8))();
    if (cVar4 == '\0') goto LAB_00101c6a;
  }
  cVar4 = _can_use_ip(param_1,(IPAddress *)&stack0x00000008,true);
  if (cVar4 == '\0') {
    _err_print_error(&_LC46,"drivers/unix/net_socket_unix.cpp",0x13a,
                     "Condition \"!_can_use_ip(p_addr, true)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    uVar6 = 0x1f;
  }
  else {
    __len = _set_addr_storage(local_b8,&stack0x00000008,param_2,*(undefined4 *)(param_1 + 0x180));
    iVar5 = ::bind(*(int *)(param_1 + 0x17c),local_b8,__len);
    uVar6 = 0;
    if (iVar5 != 0) {
      _get_socket_error();
      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') {
        local_f8 = 0;
        local_e0 = 1;
        local_e8 = &_LC25;
        String::parse_latin1((StrRange *)&local_f8);
        itos((long)&local_108);
        operator+((char *)&local_100,(String *)"Failed to bind socket. Error: ");
        String::operator+((String *)&local_f0,(String *)&local_100);
        Variant::Variant((Variant *)local_d8,(String *)&local_f0);
        stringify_variants((Variant *)&local_e8);
        __print_line((String *)&local_e8);
        puVar3 = local_e8;
        if (local_e8 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar2 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
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
        lVar2 = local_108;
        if (local_108 != 0) {
          LOCK();
          plVar1 = (long *)(local_108 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_f8;
        if (local_f8 != 0) {
          LOCK();
          plVar1 = (long *)(local_f8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      if (*(code **)(*(long *)param_1 + 0x158) == close) {
        if (*(int *)(param_1 + 0x17c) != -1) {
          ::close(*(int *)(param_1 + 0x17c));
        }
        param_1[0x184] = (NetSocketUnix)0x0;
        *(undefined8 *)(param_1 + 0x17c) = 0xffffffff;
      }
      else {
        (**(code **)(*(long *)param_1 + 0x158))(param_1);
      }
      uVar6 = 2;
    }
  }
LAB_00101c33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::_set_socket(int, IP::Type, bool) */

void __thiscall
NetSocketUnix::_set_socket
          (NetSocketUnix *this,undefined4 param_1,undefined4 param_3,NetSocketUnix param_4)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x17c) = param_1;
  *(undefined4 *)(this + 0x180) = param_3;
  this[0x184] = param_4;
  uVar1 = fcntl64(param_1,1);
  fcntl64(*(undefined4 *)(this + 0x17c),2,uVar1 | 1);
  return;
}



/* NetSocketUnix::join_multicast_group(IPAddress const&, String const&) */

undefined8 __thiscall
NetSocketUnix::join_multicast_group(NetSocketUnix *this,IPAddress *param_1,String *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_e4;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
  local_c8 [8];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  if (*(long *)param_2 != 0) {
    plVar6 = (long *)(*(long *)param_2 + -0x10);
    do {
      lVar1 = *plVar6;
      if (lVar1 == 0) goto LAB_00101f91;
      LOCK();
      lVar5 = *plVar6;
      bVar10 = lVar1 == lVar5;
      if (bVar10) {
        *plVar6 = lVar1 + 1;
        lVar5 = lVar1;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar5 != -1) {
      local_d8 = *(long *)param_2;
    }
  }
LAB_00101f91:
  local_88 = *(undefined4 *)(param_1 + 0x10);
  local_98 = *(undefined8 *)param_1;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_00102205:
      uVar9 = 3;
      _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xb6,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      goto LAB_001020d3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x1a8))(this);
    if (cVar2 == '\0') goto LAB_00102205;
  }
  cVar2 = _can_use_ip(this,(IPAddress *)&local_98,false);
  if (cVar2 == '\0') {
    uVar9 = 0x1f;
    _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xb7,
                     "Condition \"!_can_use_ip(p_ip, false)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    goto LAB_001020d3;
  }
  iVar3 = *(int *)(this + 0x180);
  if (iVar3 == 3) {
    cVar2 = IPAddress::is_ipv4();
    if (cVar2 == '\0') {
      iVar3 = *(int *)(this + 0x180);
      goto LAB_00101ff1;
    }
    local_e4 = 0;
    iVar3 = 1;
  }
  else {
LAB_00101ff1:
    local_e4 = 0x29;
    if (iVar3 == 1) {
      local_e4 = 0;
    }
  }
  IPAddress::clear();
  local_a0 = 2;
  local_c0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  plVar6 = (long *)IP::get_singleton();
  (**(code **)(*plVar6 + 0x160))(plVar6);
  for (puVar7 = (undefined8 *)local_b0._0_8_; puVar7 != (undefined8 *)0x0;
      puVar7 = (undefined8 *)*puVar7) {
    cVar2 = String::operator!=((String *)(puVar7 + 3),(String *)&local_d8);
    if (cVar2 == '\0') {
      uVar4 = String::to_int();
      if (((iVar3 == 2) || ((long *)puVar7[6] == (long *)0x0)) ||
         (puVar7 = *(undefined8 **)puVar7[6], puVar7 == (undefined8 *)0x0)) goto joined_r0x00102188;
      goto LAB_00102160;
    }
  }
  uVar4 = 0;
  goto joined_r0x00102188;
  while (puVar7 = (undefined8 *)puVar7[3], puVar7 != (undefined8 *)0x0) {
LAB_00102160:
    cVar2 = IPAddress::is_ipv4();
    if (cVar2 != '\0') {
      local_78 = *puVar7;
      uStack_70 = puVar7[1];
      local_68 = *(undefined2 *)(puVar7 + 2);
      break;
    }
  }
joined_r0x00102188:
  if (local_e4 == 0) {
    if ((char)local_68 != '\0') {
      puVar8 = (undefined4 *)IPAddress::get_ipv4();
      local_d0 = *puVar8;
      puVar8 = (undefined4 *)IPAddress::get_ipv4();
      local_cc = *puVar8;
      iVar3 = setsockopt(*(int *)(this + 0x17c),0,0x23,&local_d0,8);
      goto LAB_001020c1;
    }
    uVar9 = 0x1f;
    _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xd9,
                     "Condition \"!if_ip.is_valid()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    puVar7 = (undefined8 *)IPAddress::get_ipv6();
    local_58 = *puVar7;
    uStack_50 = puVar7[1];
    local_48 = uVar4;
    iVar3 = setsockopt(*(int *)(this + 0x17c),0x29,0x14,&local_58,0x14);
LAB_001020c1:
    uVar9 = 0;
    if (iVar3 != 0) {
      uVar9 = 1;
      _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xe6,
                       "Condition \"ret != 0\" is true. Returning: FAILED",0,0);
    }
  }
  HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
  ::~HashMap(local_c8);
LAB_001020d3:
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar6 = (long *)(local_d8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::leave_multicast_group(IPAddress const&, String const&) */

undefined8 __thiscall
NetSocketUnix::leave_multicast_group(NetSocketUnix *this,IPAddress *param_1,String *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_e4;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
  local_c8 [8];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  if (*(long *)param_2 != 0) {
    plVar6 = (long *)(*(long *)param_2 + -0x10);
    do {
      lVar1 = *plVar6;
      if (lVar1 == 0) goto LAB_00102371;
      LOCK();
      lVar5 = *plVar6;
      bVar10 = lVar1 == lVar5;
      if (bVar10) {
        *plVar6 = lVar1 + 1;
        lVar5 = lVar1;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar5 != -1) {
      local_d8 = *(long *)param_2;
    }
  }
LAB_00102371:
  local_88 = *(undefined4 *)(param_1 + 0x10);
  local_98 = *(undefined8 *)param_1;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  if (*(code **)(*(long *)this + 0x1a8) == is_open) {
    if (*(int *)(this + 0x17c) == -1) {
LAB_001025e5:
      uVar9 = 3;
      _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xb6,
                       "Condition \"!is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0);
      goto LAB_001024b3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x1a8))(this);
    if (cVar2 == '\0') goto LAB_001025e5;
  }
  cVar2 = _can_use_ip(this,(IPAddress *)&local_98,false);
  if (cVar2 == '\0') {
    uVar9 = 0x1f;
    _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xb7,
                     "Condition \"!_can_use_ip(p_ip, false)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    goto LAB_001024b3;
  }
  iVar3 = *(int *)(this + 0x180);
  if (iVar3 == 3) {
    cVar2 = IPAddress::is_ipv4();
    if (cVar2 == '\0') {
      iVar3 = *(int *)(this + 0x180);
      goto LAB_001023d1;
    }
    local_e4 = 0;
    iVar3 = 1;
  }
  else {
LAB_001023d1:
    local_e4 = 0x29;
    if (iVar3 == 1) {
      local_e4 = 0;
    }
  }
  IPAddress::clear();
  local_a0 = 2;
  local_c0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  plVar6 = (long *)IP::get_singleton();
  (**(code **)(*plVar6 + 0x160))(plVar6);
  for (puVar7 = (undefined8 *)local_b0._0_8_; puVar7 != (undefined8 *)0x0;
      puVar7 = (undefined8 *)*puVar7) {
    cVar2 = String::operator!=((String *)(puVar7 + 3),(String *)&local_d8);
    if (cVar2 == '\0') {
      uVar4 = String::to_int();
      if (((iVar3 == 2) || ((long *)puVar7[6] == (long *)0x0)) ||
         (puVar7 = *(undefined8 **)puVar7[6], puVar7 == (undefined8 *)0x0)) goto joined_r0x00102568;
      goto LAB_00102540;
    }
  }
  uVar4 = 0;
  goto joined_r0x00102568;
  while (puVar7 = (undefined8 *)puVar7[3], puVar7 != (undefined8 *)0x0) {
LAB_00102540:
    cVar2 = IPAddress::is_ipv4();
    if (cVar2 != '\0') {
      local_78 = *puVar7;
      uStack_70 = puVar7[1];
      local_68 = *(undefined2 *)(puVar7 + 2);
      break;
    }
  }
joined_r0x00102568:
  if (local_e4 == 0) {
    if ((char)local_68 != '\0') {
      puVar8 = (undefined4 *)IPAddress::get_ipv4();
      local_d0 = *puVar8;
      puVar8 = (undefined4 *)IPAddress::get_ipv4();
      local_cc = *puVar8;
      iVar3 = setsockopt(*(int *)(this + 0x17c),0,0x24,&local_d0,8);
      goto LAB_001024a1;
    }
    uVar9 = 0x1f;
    _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xd9,
                     "Condition \"!if_ip.is_valid()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    puVar7 = (undefined8 *)IPAddress::get_ipv6();
    local_58 = *puVar7;
    uStack_50 = puVar7[1];
    local_48 = uVar4;
    iVar3 = setsockopt(*(int *)(this + 0x17c),0x29,0x15,&local_58,0x14);
LAB_001024a1:
    uVar9 = 0;
    if (iVar3 != 0) {
      uVar9 = 1;
      _err_print_error("_change_multicast_group","drivers/unix/net_socket_unix.cpp",0xe6,
                       "Condition \"ret != 0\" is true. Returning: FAILED",0,0);
    }
  }
  HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
  ::~HashMap(local_c8);
LAB_001024b3:
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar6 = (long *)(local_d8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NetSocketUnix::accept(IPAddress&, unsigned short&) */

IPAddress * NetSocketUnix::accept(IPAddress *param_1,ushort *param_2)

{
  long *plVar1;
  RefCounted RVar2;
  undefined4 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  RefCounted *this;
  ushort *in_RCX;
  IPAddress *in_RDX;
  long in_FS_OFFSET;
  socklen_t local_f4;
  long local_f0;
  int local_e8 [8];
  sockaddr local_c8 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_2 + 0x1a8) == is_open) {
    if (*(int *)(param_2 + 0xbe) == -1) {
LAB_00102885:
      _err_print_error("accept","drivers/unix/net_socket_unix.cpp",0x25d,
                       "Condition \"!is_open()\" is true. Returning: out",0,0);
      *(undefined8 *)param_1 = 0;
      goto LAB_00102828;
    }
  }
  else {
    cVar5 = (**(code **)(*(long *)param_2 + 0x1a8))(param_2);
    if (cVar5 == '\0') goto LAB_00102885;
  }
  local_f4 = 0x80;
  iVar6 = ::accept(*(int *)(param_2 + 0xbe),local_c8,&local_f4);
  if (iVar6 == -1) {
    _get_socket_error();
    cVar5 = is_print_verbose_enabled();
    if (cVar5 != '\0') {
      Variant::Variant((Variant *)local_e8,"Error when accepting socket connection.");
      stringify_variants((Variant *)&local_f0);
      __print_line((String *)&local_f0);
      lVar4 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else {
    _set_ip_port((sockaddr_storage *)local_c8,in_RDX,in_RCX);
    this = (RefCounted *)operator_new(0x188,"");
    RefCounted::RefCounted(this);
    this[0x184] = (RefCounted)0x0;
    *(undefined ***)this = &PTR__initialize_classv_001041c8;
    *(undefined8 *)(this + 0x17c) = 0xffffffff;
    postinitialize_handler((Object *)this);
    RVar2 = *(RefCounted *)(param_2 + 0xc2);
    uVar3 = *(undefined4 *)(param_2 + 0xc0);
    *(int *)(this + 0x17c) = iVar6;
    this[0x184] = RVar2;
    *(undefined4 *)(this + 0x180) = uVar3;
    uVar7 = fcntl64(iVar6,1);
    fcntl64(*(undefined4 *)(this + 0x17c),2,uVar7 | 1);
    (**(code **)(*(long *)this + 0x1c8))(this,0);
    *(RefCounted **)param_1 = this;
    cVar5 = RefCounted::init_ref();
    if (cVar5 != '\0') goto LAB_00102828;
  }
  *(undefined8 *)param_1 = 0;
LAB_00102828:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
  return (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104068;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104068;
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
LAB_00102c33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102c33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00102c9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00102c9e:
  return &_get_class_namev()::_class_name_static;
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
            if (lVar5 == 0) goto LAB_0010348f;
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
LAB_0010348f:
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
    if (cVar6 != '\0') goto LAB_00103543;
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
              if (lVar5 == 0) goto LAB_001035f3;
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
LAB_001035f3:
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
      if (cVar6 != '\0') goto LAB_00103543;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103543:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_001039b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001039b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001039d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001039d6:
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



/* HashMap<String, IP::Interface_Info, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, IP::Interface_Info> > >::~HashMap() */

void __thiscall
HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
::~HashMap(HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          puVar5 = *(undefined8 **)((long)pvVar6 + 0x30);
          if (puVar5 != (undefined8 *)0x0) {
            do {
              pvVar3 = (void *)*puVar5;
              if (pvVar3 == (void *)0x0) {
                if (*(int *)(puVar5 + 2) != 0) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  goto LAB_00103da2;
                }
                break;
              }
              if (*(undefined8 **)((long)pvVar3 + 0x28) == puVar5) {
                *puVar5 = *(undefined8 *)((long)pvVar3 + 0x18);
                if (pvVar3 == (void *)puVar5[1]) {
                  puVar5[1] = *(undefined8 *)((long)pvVar3 + 0x20);
                }
                if (*(long *)((long)pvVar3 + 0x20) != 0) {
                  *(undefined8 *)(*(long *)((long)pvVar3 + 0x20) + 0x18) =
                       *(undefined8 *)((long)pvVar3 + 0x18);
                }
                if (*(long *)((long)pvVar3 + 0x18) != 0) {
                  *(undefined8 *)(*(long *)((long)pvVar3 + 0x18) + 0x20) =
                       *(undefined8 *)((long)pvVar3 + 0x20);
                }
                Memory::free_static(pvVar3,false);
                *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              puVar5 = *(undefined8 **)((long)pvVar6 + 0x30);
            } while (*(int *)(puVar5 + 2) != 0);
            Memory::free_static(puVar5,false);
          }
LAB_00103da2:
          if (*(long *)((long)pvVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar6 + 0x28);
              *(undefined8 *)((long)pvVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar6 + 0x20);
              *(undefined8 *)((long)pvVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar6 + 0x18);
              *(undefined8 *)((long)pvVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar6 + 0x10);
              *(undefined8 *)((long)pvVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar2 << 2);
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



/* void memdelete<NetSocket>(NetSocket*) */

void memdelete<NetSocket>(NetSocket *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == NetSocketUnix::~NetSocketUnix) {
    *(undefined ***)param_1 = &PTR__initialize_classv_001041c8;
    if (*(int *)(param_1 + 0x17c) != -1) {
      close(*(int *)(param_1 + 0x17c));
    }
    param_1[0x184] = (NetSocket)0x0;
    *(undefined8 *)(param_1 + 0x17c) = 0xffffffff;
    *(undefined ***)param_1 = &PTR__initialize_classv_00104068;
    Object::~Object((Object *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<String, IP::Interface_Info, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, IP::Interface_Info> > >::~HashMap() */

void __thiscall
HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
::~HashMap(HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
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


