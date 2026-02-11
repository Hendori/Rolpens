
/* FileAccessUnixPipe::is_open() const */

uint __thiscall FileAccessUnixPipe::is_open(FileAccessUnixPipe *this)

{
  if (-1 < *(int *)(this + 0x194)) {
    return 1;
  }
  return ~*(uint *)(this + 0x198) >> 0x1f;
}



/* FileAccessUnixPipe::get_error() const */

undefined4 __thiscall FileAccessUnixPipe::get_error(FileAccessUnixPipe *this)

{
  return *(undefined4 *)(this + 0x19c);
}



/* FileAccessUnixPipe::get_length() const */

long __thiscall FileAccessUnixPipe::get_length(FileAccessUnixPipe *this)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x194) < 0) {
    _err_print_error("get_length","drivers/unix/file_access_unix_pipe.cpp",0x89,
                     "Condition \"fd[0] < 0\" is true. Returning: 0",
                     "Pipe must be opened before use.",0,0);
    lVar2 = 0;
  }
  else {
    local_14 = 0;
    iVar1 = ioctl(*(int *)(this + 0x194),0x541b,&local_14);
    if (iVar1 == 0) {
      lVar2 = (long)local_14;
    }
    else {
      _err_print_error("get_length","drivers/unix/file_access_unix_pipe.cpp",0x8c,
                       "Condition \"ioctl(fd[0], 0x541B, &buf_rem) != 0\" is true. Returning: 0",0,0
                      );
      lVar2 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessUnixPipe::get_buffer(unsigned char*, unsigned long) const */

ulong __thiscall
FileAccessUnixPipe::get_buffer(FileAccessUnixPipe *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x194) < 0) {
    _err_print_error("get_buffer","drivers/unix/file_access_unix_pipe.cpp",0x91,
                     "Condition \"fd[0] < 0\" is true. Returning: -1",
                     "Pipe must be opened before use.",0,0);
  }
  else {
    if ((param_1 != (uchar *)0x0) || (param_2 == 0)) {
      uVar1 = read(*(int *)(this + 0x194),param_1,param_2);
      if (uVar1 == 0xffffffffffffffff) {
        uVar2 = 0xe;
        uVar1 = 0;
      }
      else {
        uVar2 = 0xe;
        if (param_2 == uVar1) {
          uVar2 = 0;
        }
      }
      *(undefined4 *)(this + 0x19c) = uVar2;
      return uVar1;
    }
    _err_print_error("get_buffer","drivers/unix/file_access_unix_pipe.cpp",0x92,
                     "Condition \"!p_dst && p_length > 0\" is true. Returning: -1",0,0);
  }
  return 0xffffffffffffffff;
}



/* FileAccessUnixPipe::store_buffer(unsigned char const*, unsigned long) */

undefined8 __thiscall
FileAccessUnixPipe::store_buffer(FileAccessUnixPipe *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(this + 0x198) < 0) {
    _err_print_error("store_buffer","drivers/unix/file_access_unix_pipe.cpp",0xa5,
                     "Condition \"fd[1] < 0\" is true. Returning: false",
                     "Pipe must be opened before use.",0,0);
    uVar2 = 0;
  }
  else if ((param_1 == (uchar *)0x0) && (param_2 != 0)) {
    _err_print_error("store_buffer","drivers/unix/file_access_unix_pipe.cpp",0xa6,
                     "Condition \"!p_src && p_length > 0\" is true. Returning: false",0,0);
    uVar2 = 0;
  }
  else {
    uVar1 = write(*(int *)(this + 0x198),param_1,param_2);
    if (uVar1 == param_2) {
      *(undefined4 *)(this + 0x19c) = 0;
      uVar2 = 1;
    }
    else {
      *(undefined4 *)(this + 0x19c) = 0xd;
      uVar2 = 0;
    }
  }
  return uVar2;
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



/* FileAccessUnixPipe::get_path_absolute() const */

void FileAccessUnixPipe::get_path_absolute(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1a8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1a8));
  }
  return;
}



/* FileAccessUnixPipe::_close() */

void __thiscall FileAccessUnixPipe::_close(FileAccessUnixPipe *this)

{
  long *plVar1;
  long lVar2;
  int __fd;
  long in_FS_OFFSET;
  char *local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < *(int *)(this + 0x194)) {
    __fd = *(int *)(this + 0x198);
    if (*(int *)(this + 0x194) != __fd) {
      ::close(__fd);
      __fd = *(int *)(this + 0x194);
    }
    ::close(__fd);
    *(undefined8 *)(this + 0x194) = 0xffffffffffffffff;
    if (this[400] != (FileAccessUnixPipe)0x0) {
      String::utf8();
      unlink(local_18);
      if (local_18 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_18 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_18 + -0x10,false);
        }
      }
    }
    this[400] = (FileAccessUnixPipe)0x0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessUnixPipe::close() */

void __thiscall FileAccessUnixPipe::close(FileAccessUnixPipe *this)

{
  _close(this);
  return;
}



/* FileAccessUnixPipe::open_existing(int, int, bool) */

undefined8 __thiscall
FileAccessUnixPipe::open_existing(FileAccessUnixPipe *this,int param_1,int param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  _close(this);
  if (*(long *)(this + 0x1a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    *(undefined8 *)(this + 0x1a8) = 0;
  }
  this[400] = (FileAccessUnixPipe)0x0;
  if ((*(int *)(this + 0x194) < 0) && (*(int *)(this + 0x198) < 0)) {
    *(int *)(this + 0x194) = param_1;
    *(int *)(this + 0x198) = param_2;
    if (!param_3) {
      uVar3 = fcntl64(param_1,3);
      fcntl64(*(undefined4 *)(this + 0x194),4,uVar3 | 0x800);
      uVar3 = fcntl64(*(undefined4 *)(this + 0x198),3);
      fcntl64(*(undefined4 *)(this + 0x198),4,uVar3 | 0x800);
    }
    *(undefined4 *)(this + 0x19c) = 0;
    return 0;
  }
  _err_print_error("open_existing","drivers/unix/file_access_unix_pipe.cpp",0x33,
                   "Condition \"fd[0] >= 0 || fd[1] >= 0\" is true. Returning: ERR_ALREADY_IN_USE",
                   "Pipe is already in use.",0,0);
  return 0x16;
}



/* FileAccessUnixPipe::open_internal(String const&, int) */

int FileAccessUnixPipe::open_internal(String *param_1,int param_2)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  undefined4 in_register_00000034;
  CowData *pCVar8;
  stat64 *psVar9;
  long in_FS_OFFSET;
  byte bVar10;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  stat64 local_c8;
  long local_30;
  
  pCVar8 = (CowData *)CONCAT44(in_register_00000034,param_2);
  bVar10 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _close((FileAccessUnixPipe *)param_1);
  if (*(long *)(param_1 + 0x1a8) != *(long *)pCVar8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x1a8),pCVar8);
  }
  if ((-1 < *(int *)(param_1 + 0x194)) || (-1 < *(int *)(param_1 + 0x198))) {
    iVar3 = 0x16;
    _err_print_error("open_internal","drivers/unix/file_access_unix_pipe.cpp",0x44,
                     "Condition \"fd[0] >= 0 || fd[1] >= 0\" is true. Returning: ERR_ALREADY_IN_USE"
                     ,"Pipe is already in use.",0,0);
    goto LAB_00100790;
  }
  String::replace((char *)&local_e8,(char *)pCVar8);
  String::replace((char *)&local_e0,(char *)&local_e8);
  local_d8 = "/tmp/";
  local_f0 = 0;
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_f0);
  String::operator+((String *)&local_d8,(String *)&local_f0);
  pcVar2 = local_d8;
  pcVar5 = *(char **)(param_1 + 0x1a0);
  if (pcVar5 == local_d8) {
    if (pcVar5 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
  }
  else {
    if (pcVar5 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(param_1 + 0x1a0);
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    *(char **)(param_1 + 0x1a0) = local_d8;
  }
  lVar7 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  lVar7 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  lVar7 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  String::utf8();
  psVar9 = &local_c8;
  for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
    psVar9->st_dev = 0;
    psVar9 = (stat64 *)((long)psVar9 + ((ulong)bVar10 * -2 + 1) * 8);
  }
  pcVar5 = (char *)CharString::get_data();
  iVar3 = stat64(pcVar5,&local_c8);
  if (iVar3 == 0) {
    if ((local_c8.st_mode & 0xf000) == 0x1000) {
LAB_00100729:
      pcVar5 = (char *)CharString::get_data();
      iVar4 = open64(pcVar5,0x80802);
      if (iVar4 < 0) {
        piVar6 = __errno_location();
        iVar3 = (uint)(*piVar6 != 2) * 5 + 7;
        *(int *)(param_1 + 0x19c) = iVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x19c) = 0;
        iVar3 = 0;
        *(ulong *)(param_1 + 0x194) = CONCAT44(iVar4,iVar4);
      }
    }
    else {
      iVar3 = 0x16;
      _err_print_error("open_internal","drivers/unix/file_access_unix_pipe.cpp",0x52,
                       "Condition \"!((((st.st_mode)) & 0170000) == (0010000))\" is true. Returning: ERR_ALREADY_IN_USE"
                       ,"Pipe name is already used by file.",0,0);
    }
  }
  else {
    pcVar5 = (char *)CharString::get_data();
    iVar3 = mkfifo(pcVar5,0x180);
    if (iVar3 == 0) {
      param_1[400] = (String)0x1;
      goto LAB_00100729;
    }
    *(undefined4 *)(param_1 + 0x19c) = 0xc;
    iVar3 = 0xc;
  }
  pcVar5 = local_d8;
  if (local_d8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
LAB_00100790:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* FileAccessUnixPipe::~FileAccessUnixPipe() */

void __thiscall FileAccessUnixPipe::~FileAccessUnixPipe(FileAccessUnixPipe *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00102090;
  _close(this);
  if (*(long *)(this + 0x1a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      FileAccess::~FileAccess((FileAccess *)this);
      return;
    }
  }
  FileAccess::~FileAccess((FileAccess *)this);
  return;
}



/* FileAccessUnixPipe::~FileAccessUnixPipe() */

void __thiscall FileAccessUnixPipe::~FileAccessUnixPipe(FileAccessUnixPipe *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00102090;
  _close(this);
  if (*(long *)(this + 0x1a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  FileAccess::~FileAccess((FileAccess *)this);
  operator_delete(this,0x1b0);
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



/* FileAccess::is_class_ptr(void*) const */

uint __thiscall FileAccess::is_class_ptr(FileAccess *this,void *param_1)

{
  return (uint)CONCAT71(0x1023,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1023,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1023,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FileAccess::_getv(StringName const&, Variant&) const */

undefined8 FileAccess::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FileAccess::_setv(StringName const&, Variant const&) */

undefined8 FileAccess::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FileAccess::_validate_propertyv(PropertyInfo&) const */

void FileAccess::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* FileAccess::_property_can_revertv(StringName const&) const */

undefined8 FileAccess::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FileAccess::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FileAccess::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FileAccess::_notificationv(int, bool) */

void FileAccess::_notificationv(int param_1,bool param_2)

{
  return;
}



/* FileAccess::set_big_endian(bool) */

void __thiscall FileAccess::set_big_endian(FileAccess *this,bool param_1)

{
  this[0x17c] = (FileAccess)param_1;
  return;
}



/* FileAccessUnixPipe::seek(unsigned long) */

void FileAccessUnixPipe::seek(ulong param_1)

{
  return;
}



/* FileAccessUnixPipe::seek_end(long) */

void FileAccessUnixPipe::seek_end(long param_1)

{
  return;
}



/* FileAccessUnixPipe::get_position() const */

undefined8 FileAccessUnixPipe::get_position(void)

{
  return 0;
}



/* FileAccessUnixPipe::eof_reached() const */

undefined8 FileAccessUnixPipe::eof_reached(void)

{
  return 0;
}



/* FileAccessUnixPipe::resize(long) */

undefined8 FileAccessUnixPipe::resize(long param_1)

{
  return 2;
}



/* FileAccessUnixPipe::flush() */

void FileAccessUnixPipe::flush(void)

{
  return;
}



/* FileAccessUnixPipe::file_exists(String const&) */

undefined8 FileAccessUnixPipe::file_exists(String *param_1)

{
  return 0;
}



/* FileAccessUnixPipe::_get_modified_time(String const&) */

undefined8 FileAccessUnixPipe::_get_modified_time(String *param_1)

{
  return 0;
}



/* FileAccessUnixPipe::_get_unix_permissions(String const&) */

undefined8 FileAccessUnixPipe::_get_unix_permissions(String *param_1)

{
  return 0;
}



/* FileAccessUnixPipe::_set_unix_permissions(String const&,
   BitField<FileAccess::UnixPermissionFlags>) */

undefined8 FileAccessUnixPipe::_set_unix_permissions(void)

{
  return 2;
}



/* FileAccessUnixPipe::_get_hidden_attribute(String const&) */

undefined8 FileAccessUnixPipe::_get_hidden_attribute(String *param_1)

{
  return 0;
}



/* FileAccessUnixPipe::_set_hidden_attribute(String const&, bool) */

undefined8 FileAccessUnixPipe::_set_hidden_attribute(String *param_1,bool param_2)

{
  return 2;
}



/* FileAccessUnixPipe::_get_read_only_attribute(String const&) */

undefined8 FileAccessUnixPipe::_get_read_only_attribute(String *param_1)

{
  return 0;
}



/* FileAccessUnixPipe::_set_read_only_attribute(String const&, bool) */

undefined8 FileAccessUnixPipe::_set_read_only_attribute(String *param_1,bool param_2)

{
  return 2;
}



/* FileAccess::_get_class_namev() const */

undefined8 * FileAccess::_get_class_namev(void)

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
LAB_00100fe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100fe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
      goto LAB_0010104e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
LAB_0010104e:
  return &_get_class_namev()::_class_name_static;
}



/* FileAccess::get_class() const */

void FileAccess::get_class(void)

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



/* FileAccess::is_class(String const&) const */

undefined8 __thiscall FileAccess::is_class(FileAccess *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001011df;
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
LAB_001011df:
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
    if (cVar6 != '\0') goto LAB_00101293;
  }
  cVar6 = String::operator==(param_1,"FileAccess");
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
              if (lVar5 == 0) goto LAB_0010136b;
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
LAB_0010136b:
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
      if (cVar6 != '\0') goto LAB_00101293;
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
                if (lVar5 == 0) goto LAB_0010144b;
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
LAB_0010144b:
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
        if (cVar6 != '\0') goto LAB_00101293;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001014f4;
    }
  }
LAB_00101293:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001014f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccess::_initialize_classv() */

void FileAccess::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00101680;
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
    if (local_68 == 0) {
LAB_0010178e:
      if ((code *)PTR__bind_methods_00104010 != RefCounted::_bind_methods) {
LAB_0010179e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010178e;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00104010 != RefCounted::_bind_methods) goto LAB_0010179e;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "FileAccess";
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    FileAccess::_bind_methods();
  }
  if ((code *)PTR__bind_compatibility_methods_00104008 != Object::_bind_compatibility_methods) {
    FileAccess::_bind_compatibility_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00101680:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_00101978:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101978;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101996;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101996:
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



/* FileAccess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FileAccess::_get_property_listv(FileAccess *this,List *param_1,bool param_2)

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
  local_78 = "FileAccess";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FileAccess";
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
LAB_00101d78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101d78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00101d95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00101d95:
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
  StringName::StringName((StringName *)&local_78,"FileAccess",false);
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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


