
/* FileAccessEncrypted::open_internal(String const&, int) */

undefined8 FileAccessEncrypted::open_internal(String *param_1,int param_2)

{
  return 0;
}



/* FileAccessEncrypted::is_open() const */

bool __thiscall FileAccessEncrypted::is_open(FileAccessEncrypted *this)

{
  return *(long *)(this + 0x1b8) != 0;
}



/* FileAccessEncrypted::get_position() const */

undefined8 __thiscall FileAccessEncrypted::get_position(FileAccessEncrypted *this)

{
  return *(undefined8 *)(this + 0x1e0);
}



/* FileAccessEncrypted::get_length() const */

undefined8 __thiscall FileAccessEncrypted::get_length(FileAccessEncrypted *this)

{
  if (*(long *)(this + 0x1d8) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x1d8) + -8);
  }
  return 0;
}



/* FileAccessEncrypted::eof_reached() const */

FileAccessEncrypted __thiscall FileAccessEncrypted::eof_reached(FileAccessEncrypted *this)

{
  return this[0x1e8];
}



/* FileAccessEncrypted::get_error() const */

byte __thiscall FileAccessEncrypted::get_error(FileAccessEncrypted *this)

{
  return -(this[0x1e8] != (FileAccessEncrypted)0x0) & 0x12;
}



/* FileAccessEncrypted::_get_modified_time(String const&) */

undefined8 FileAccessEncrypted::_get_modified_time(String *param_1)

{
  return 0;
}



/* FileAccessEncrypted::flush() */

void __thiscall FileAccessEncrypted::flush(FileAccessEncrypted *this)

{
  if (this[0x1b0] != (FileAccessEncrypted)0x0) {
    return;
  }
  _err_print_error("flush","core/io/file_access_encrypted.cpp",0x10c,
                   "Condition \"!writing\" is true.","File has not been opened in write mode.",0,0);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* FileAccessEncrypted::seek_end(long) */

void __thiscall FileAccessEncrypted::seek_end(FileAccessEncrypted *this,long param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar1;
  long lVar2;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)this + 0x1b8);
  pcVar1 = *(code **)(*(long *)this + 0x1d0);
  if (pcVar1 == get_length) {
    if (*(long *)(this + 0x1d8) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 0x1d8) + -8);
    }
                    /* WARNING: Could not recover jumptable at 0x00100227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(this,param_1 + lVar2);
    return;
  }
  lVar2 = (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00100249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(this,param_1 + lVar2);
  return;
}



/* FileAccessEncrypted::seek(unsigned long) */

void __thiscall FileAccessEncrypted::seek(FileAccessEncrypted *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(code **)(*(long *)this + 0x1d0) == get_length) {
    lVar1 = *(long *)(this + 0x1d8);
    if (lVar1 == 0) {
      if (param_1 == 0) goto LAB_0010029a;
LAB_001002d5:
      param_1 = 0;
      goto LAB_0010029a;
    }
    if (param_1 <= *(ulong *)(lVar1 + -8)) goto LAB_0010029a;
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x1d0))();
    if (param_1 <= uVar2) goto LAB_0010029a;
    if (*(code **)(*(long *)this + 0x1d0) != get_length) {
      param_1 = (**(code **)(*(long *)this + 0x1d0))(this);
      goto LAB_0010029a;
    }
    lVar1 = *(long *)(this + 0x1d8);
    if (lVar1 == 0) goto LAB_001002d5;
  }
  param_1 = *(ulong *)(lVar1 + -8);
LAB_0010029a:
  *(ulong *)(this + 0x1e0) = param_1;
  this[0x1e8] = (FileAccessEncrypted)0x0;
  return;
}



/* FileAccessEncrypted::get_buffer(unsigned char*, unsigned long) const */

ulong __thiscall
FileAccessEncrypted::get_buffer(FileAccessEncrypted *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  ulong __n;
  long lVar2;
  
  if (this[0x1b0] == (FileAccessEncrypted)0x0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_1 != (uchar *)0x0) {
      if (*(code **)(*(long *)this + 0x1d0) == get_length) {
        lVar2 = *(long *)(this + 0x1d8);
        if (lVar2 == 0) {
          lVar1 = 0;
        }
        else {
          lVar1 = *(long *)(lVar2 + -8);
        }
      }
      else {
        lVar1 = (**(code **)(*(long *)this + 0x1d0))();
        lVar2 = *(long *)(this + 0x1d8);
      }
      __n = lVar1 - *(long *)(this + 0x1e0);
      if (param_2 < __n) {
        __n = param_2;
      }
      memcpy(param_1,(void *)(lVar2 + *(long *)(this + 0x1e0)),__n);
      *(ulong *)(this + 0x1e0) = *(long *)(this + 0x1e0) + __n;
      if (param_2 <= __n) {
        return __n;
      }
      this[0x1e8] = (FileAccessEncrypted)0x1;
      return __n;
    }
    _err_print_error("get_buffer","core/io/file_access_encrypted.cpp",0xe6,
                     "Parameter \"p_dst\" is null.",0,0);
  }
  else {
    _err_print_error("get_buffer","core/io/file_access_encrypted.cpp",0xe0,
                     "Condition \"writing\" is true. Returning: -1",
                     "File has not been opened in read mode.",0,0);
  }
  return 0xffffffffffffffff;
}



/* FileAccessEncrypted::file_exists(String const&) */

undefined8 __thiscall FileAccessEncrypted::file_exists(FileAccessEncrypted *this,String *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  Object *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_18,(int)param_1,(Error *)0x1);
  if (local_18 == (Object *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_18);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_18 + 0x140))(local_18);
        Memory::free_static(local_18,false);
      }
    }
    uVar2 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessEncrypted::get_path() const */

void FileAccessEncrypted::get_path(void)

{
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(in_RSI + 0x1b8) == (long *)0x0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    (**(code **)(**(long **)(in_RSI + 0x1b8) + 0x1a8))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessEncrypted::get_path_absolute() const */

void FileAccessEncrypted::get_path_absolute(void)

{
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(in_RSI + 0x1b8) == (long *)0x0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    (**(code **)(**(long **)(in_RSI + 0x1b8) + 0x1b0))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessEncrypted::_get_hidden_attribute(String const&) */

undefined8 FileAccessEncrypted::_get_hidden_attribute(String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x1b8);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x160);
    if (UNRECOVERED_JUMPTABLE != _get_hidden_attribute) {
LAB_00100630:
                    /* WARNING: Could not recover jumptable at 0x00100630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x37];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x160) != _get_hidden_attribute) {
                    /* WARNING: Could not recover jumptable at 0x00100638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x160))();
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x37];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x160);
        if (UNRECOVERED_JUMPTABLE != _get_hidden_attribute) goto LAB_00100630;
        if ((long *)plVar1[0x37] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010061b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x37] + 0x160))();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



/* FileAccessEncrypted::_get_read_only_attribute(String const&) */

undefined8 FileAccessEncrypted::_get_read_only_attribute(String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x1b8);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
    if (UNRECOVERED_JUMPTABLE != _get_read_only_attribute) {
LAB_001006c0:
                    /* WARNING: Could not recover jumptable at 0x001006c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x37];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x170) != _get_read_only_attribute) {
                    /* WARNING: Could not recover jumptable at 0x001006c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x170))();
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x37];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE != _get_read_only_attribute) goto LAB_001006c0;
        if ((long *)plVar1[0x37] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001006ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x37] + 0x170))();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



/* FileAccessEncrypted::_get_unix_permissions(String const&) */

undefined8 FileAccessEncrypted::_get_unix_permissions(String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1b8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(code **)(*plVar1 + 0x150) == _get_unix_permissions) {
    plVar1 = (long *)plVar1[0x37];
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x150) == _get_unix_permissions) {
        plVar1 = (long *)plVar1[0x37];
        if (plVar1 != (long *)0x0) {
          if (*(code **)(*plVar1 + 0x150) == _get_unix_permissions) {
            if ((long *)plVar1[0x37] != (long *)0x0) {
              uVar2 = (**(code **)(*(long *)plVar1[0x37] + 0x150))();
            }
          }
          else {
            uVar2 = (**(code **)(*plVar1 + 0x150))();
          }
        }
      }
      else {
        uVar2 = (**(code **)(*plVar1 + 0x150))();
      }
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00100760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x150))();
  return uVar2;
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* FileAccessEncrypted::_set_unix_permissions(String const&,
   BitField<FileAccess::UnixPermissionFlags>) */

undefined8 FileAccessEncrypted::_set_unix_permissions(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x1b8);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x158);
    if (UNRECOVERED_JUMPTABLE != _set_unix_permissions) {
LAB_00100880:
                    /* WARNING: Could not recover jumptable at 0x00100880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x37];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x158) != _set_unix_permissions) {
                    /* WARNING: Could not recover jumptable at 0x00100888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x158))();
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x37];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x158);
        if (UNRECOVERED_JUMPTABLE != _set_unix_permissions) goto LAB_00100880;
        if ((long *)plVar1[0x37] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010086b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x37] + 0x158))();
          return uVar2;
        }
      }
    }
  }
  return 1;
}



/* FileAccessEncrypted::_set_read_only_attribute(String const&, bool) */

undefined8 __thiscall
FileAccessEncrypted::_set_read_only_attribute
          (FileAccessEncrypted *this,String *param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(this + 0x1b8);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
    if (UNRECOVERED_JUMPTABLE != _set_read_only_attribute) {
LAB_00100910:
                    /* WARNING: Could not recover jumptable at 0x00100910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x37];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x178) != _set_read_only_attribute) {
                    /* WARNING: Could not recover jumptable at 0x00100918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,param_1,param_2);
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x37];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
        if (UNRECOVERED_JUMPTABLE != _set_read_only_attribute) goto LAB_00100910;
        if ((long *)plVar1[0x37] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001008fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x37] + 0x178))();
          return uVar2;
        }
      }
    }
  }
  return 1;
}



/* FileAccessEncrypted::_set_hidden_attribute(String const&, bool) */

undefined8 __thiscall
FileAccessEncrypted::_set_hidden_attribute(FileAccessEncrypted *this,String *param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(this + 0x1b8);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x168);
    if (UNRECOVERED_JUMPTABLE != _set_hidden_attribute) {
LAB_001009a0:
                    /* WARNING: Could not recover jumptable at 0x001009a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x37];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x168) != _set_hidden_attribute) {
                    /* WARNING: Could not recover jumptable at 0x001009a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,param_1,param_2);
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x37];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x168);
        if (UNRECOVERED_JUMPTABLE != _set_hidden_attribute) goto LAB_001009a0;
        if ((long *)plVar1[0x37] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010098e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x37] + 0x168))();
          return uVar2;
        }
      }
    }
  }
  return 1;
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



/* FileAccessEncrypted::deinitialize() */

void FileAccessEncrypted::deinitialize(void)

{
  RandomGenerator *pRVar1;
  
  pRVar1 = _fae_static_rng;
  if (_fae_static_rng != (RandomGenerator *)0x0) {
    CryptoCore::RandomGenerator::~RandomGenerator(_fae_static_rng);
    Memory::free_static(pRVar1,false);
    _fae_static_rng = (RandomGenerator *)0x0;
  }
  return;
}



/* FileAccessEncrypted::open_and_parse(Ref<FileAccess>, Vector<unsigned char> const&,
   FileAccessEncrypted::Mode, bool, Vector<unsigned char> const&) */

ulong __thiscall
FileAccessEncrypted::open_and_parse
          (FileAccessEncrypted *this,long *param_2,long param_3,int param_4,
          FileAccessEncrypted param_5,long param_6)

{
  CowData<unsigned_char> *this_00;
  CowData<unsigned_char> *this_01;
  code *pcVar1;
  Object *pOVar2;
  Object *pOVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  uchar *puVar8;
  long lVar9;
  ulong uVar10;
  RandomGenerator *pRVar11;
  long lVar12;
  long *plVar13;
  uchar *puVar14;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 0x1b0))(&local_88);
    local_78 = "Can\'t open file while another file from path \'%s\' is open.";
    local_80 = 0;
    local_70 = 0x3a;
    String::parse_latin1((StrRange *)&local_80);
    vformat<String>(&local_78,(StrRange *)&local_80,&local_88);
    _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x2d,
                     "Condition \"file.is_valid()\" is true. Returning: ERR_ALREADY_IN_USE",
                     &local_78,0,0);
    pcVar4 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar13 = (long *)(local_78 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar12 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar13 = (long *)(local_80 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar13 = (long *)(local_88 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    uVar10 = 0x16;
    goto LAB_00100dd2;
  }
  lVar12 = *(long *)(param_3 + 8);
  if ((lVar12 == 0) || (*(long *)(lVar12 + -8) != 0x20)) {
    _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x2e,
                     "Condition \"p_key.size() != 32\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
LAB_00100fc5:
    uVar10 = 0x1f;
  }
  else {
    this[0x1e8] = (FileAccessEncrypted)0x0;
    *(undefined8 *)(this + 0x1e0) = 0;
    this[0x1e9] = param_5;
    if (param_4 == 1) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1d8),0);
      pOVar2 = (Object *)*param_2;
      pOVar3 = *(Object **)(this + 0x1b8);
      this[0x1b0] = (FileAccessEncrypted)0x1;
      if (pOVar2 != pOVar3) {
        *(Object **)(this + 0x1b8) = pOVar2;
        if (pOVar2 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *(undefined8 *)(this + 0x1b8) = 0;
          }
        }
        if (pOVar3 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
          if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar3);
            if (cVar5 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
        }
      }
      if (*(long *)(this + 0x1a8) != *(long *)(param_3 + 8)) {
        CowData<unsigned_char>::_ref
                  ((CowData<unsigned_char> *)(this + 0x1a8),(CowData *)(param_3 + 8));
      }
      lVar12 = *(long *)(param_6 + 8);
      if (lVar12 == 0) {
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x198),0x10);
        if (_fae_static_rng == (RandomGenerator *)0x0) {
          pRVar11 = (RandomGenerator *)operator_new(0x10,"");
          CryptoCore::RandomGenerator::RandomGenerator(pRVar11);
          _fae_static_rng = pRVar11;
          iVar6 = CryptoCore::RandomGenerator::init();
          pRVar11 = _fae_static_rng;
          if (iVar6 != 0) {
            CryptoCore::RandomGenerator::~RandomGenerator(_fae_static_rng);
            uVar7 = 0;
            Memory::free_static(pRVar11,false);
            _fae_static_rng = (RandomGenerator *)0x0;
            _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x40,
                             "Method/function failed. Returning: FAILED",
                             "Failed to initialize random number generator.",0,0,uVar7);
            uVar10 = 1;
            goto LAB_00100dd2;
          }
        }
        pRVar11 = _fae_static_rng;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x198));
        uVar10 = CryptoCore::RandomGenerator::get_random_bytes
                           ((uchar *)pRVar11,*(ulong *)(this + 0x198));
        if ((int)uVar10 != 0) {
          _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x44,
                           "Condition \"err != OK\" is true. Returning: err",0,0);
          uVar10 = uVar10 & 0xffffffff;
        }
        goto LAB_00100dd2;
      }
      if (*(long *)(lVar12 + -8) != 0x10) {
        _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x46,
                         "Condition \"p_iv.size() != 16\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,0,0);
        goto LAB_00100fc5;
      }
      if (lVar12 != *(long *)(this + 0x198)) {
        CowData<unsigned_char>::_ref
                  ((CowData<unsigned_char> *)(this + 0x198),(CowData *)(param_6 + 8));
      }
    }
    else if (param_4 == 0) {
      this[0x1b0] = (FileAccessEncrypted)0x0;
      if (lVar12 != *(long *)(this + 0x1a8)) {
        CowData<unsigned_char>::_ref
                  ((CowData<unsigned_char> *)(this + 0x1a8),(CowData *)(param_3 + 8));
        param_5 = this[0x1e9];
      }
      plVar13 = (long *)*param_2;
      if (param_5 != (FileAccessEncrypted)0x0) {
        iVar6 = (**(code **)(*plVar13 + 0x1f0))();
        if (iVar6 != 0x43454447) {
          _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x50,
                           "Condition \"magic != 0x43454447\" is true. Returning: ERR_FILE_UNRECOGNIZED"
                           ,0,0);
          uVar10 = 0xf;
          goto LAB_00100dd2;
        }
        plVar13 = (long *)*param_2;
      }
      this_00 = (CowData<unsigned_char> *)(this + 0x198);
      (**(code **)(*plVar13 + 0x220))(plVar13,local_68,0x10);
      uVar7 = (**(code **)(*(long *)*param_2 + 0x1f8))();
      *(undefined8 *)(this + 0x1c8) = uVar7;
      CowData<unsigned_char>::resize<false>(this_00,0x10);
      plVar13 = (long *)*param_2;
      pcVar1 = *(code **)(*plVar13 + 0x220);
      CowData<unsigned_char>::_copy_on_write(this_00);
      (*pcVar1)(plVar13,*(undefined8 *)(this + 0x198),0x10);
      plVar13 = (long *)*param_2;
      lVar12 = *plVar13;
      if (*(code **)(lVar12 + 0x1c8) == get_position) {
        lVar9 = plVar13[0x3c];
      }
      else {
        lVar9 = (**(code **)(lVar12 + 0x1c8))();
        plVar13 = (long *)*param_2;
        lVar12 = *plVar13;
      }
      pcVar1 = *(code **)(lVar12 + 0x1d0);
      *(long *)(this + 0x1c0) = lVar9;
      if (pcVar1 == get_length) {
        if (plVar13[0x3b] == 0) {
          puVar8 = (uchar *)0x0;
        }
        else {
          puVar8 = *(uchar **)(plVar13[0x3b] + -8);
        }
      }
      else {
        puVar8 = (uchar *)(*pcVar1)();
        lVar9 = *(long *)(this + 0x1c0);
      }
      puVar14 = *(uchar **)(this + 0x1c8);
      if (puVar8 < puVar14 + lVar9) {
        _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x5b,
                         "Condition \"p_base->get_length() < base + length\" is true. Returning: ERR_FILE_CORRUPT"
                         ,0,0);
      }
      else {
        this_01 = (CowData<unsigned_char> *)(this + 0x1d8);
        if (((ulong)puVar14 & 0xf) != 0) {
          puVar14 = (uchar *)(((ulong)puVar14 & 0xfffffffffffffff0) + 0x10);
        }
        CowData<unsigned_char>::resize<false>(this_01,(long)puVar14);
        plVar13 = (long *)*param_2;
        pcVar1 = *(code **)(*plVar13 + 0x220);
        CowData<unsigned_char>::_copy_on_write(this_01);
        puVar8 = (uchar *)(*pcVar1)(plVar13,*(undefined8 *)(this + 0x1d8),puVar14);
        if (puVar14 == puVar8) {
          CryptoCore::AESContext::AESContext((AESContext *)&local_78);
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1a8));
          CryptoCore::AESContext::set_encode_key((uchar *)&local_78,*(ulong *)(this + 0x1a8));
          CowData<unsigned_char>::_copy_on_write(this_01);
          CowData<unsigned_char>::_copy_on_write(this_01);
          puVar8 = *(uchar **)(this + 0x1d8);
          CowData<unsigned_char>::_copy_on_write(this_00);
          CryptoCore::AESContext::decrypt_cfb
                    ((ulong)&local_78,puVar14,*(uchar **)(this + 0x198),puVar8);
          CryptoCore::AESContext::~AESContext((AESContext *)&local_78);
          CowData<unsigned_char>::resize<false>(this_01,*(long *)(this + 0x1c8));
          puVar8 = *(uchar **)(this + 0x1d8);
          iVar6 = 0;
          if (puVar8 != (uchar *)0x0) {
            iVar6 = *(int *)(puVar8 + -8);
          }
          iVar6 = CryptoCore::md5(puVar8,iVar6,local_58);
          if (iVar6 != 0) {
            _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x6f,
                             "Condition \"CryptoCore::md5(data.ptr(), data.size(), hash) != OK\" is true. Returning: ERR_BUG"
                             ,0,0);
            uVar10 = 0x2f;
            goto LAB_00100dd2;
          }
          String::md5((uchar *)&local_78);
          String::md5((uchar *)&local_80);
          cVar5 = String::operator!=((String *)&local_80,(String *)&local_78);
          lVar12 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar13 = (long *)(local_80 + -0x10);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
          pcVar4 = local_78;
          if (local_78 != (char *)0x0) {
            LOCK();
            plVar13 = (long *)(local_78 + -0x10);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_78 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          if (cVar5 == '\0') {
            pOVar2 = (Object *)*param_2;
            pOVar3 = *(Object **)(this + 0x1b8);
            if (pOVar2 != pOVar3) {
              *(Object **)(this + 0x1b8) = pOVar2;
              if (pOVar2 != (Object *)0x0) {
                cVar5 = RefCounted::reference();
                if (cVar5 == '\0') {
                  *(undefined8 *)(this + 0x1b8) = 0;
                }
              }
              if (pOVar3 != (Object *)0x0) {
                cVar5 = RefCounted::unreference();
                if (cVar5 != '\0') {
                  cVar5 = predelete_handler(pOVar3);
                  if (cVar5 != '\0') {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
              }
            }
            goto LAB_00100dd0;
          }
          _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",0x71,
                           "Condition \"String::md5(hash) != String::md5(md5d)\" is true. Returning: ERR_FILE_CORRUPT"
                           ,
                           "The MD5 sum of the decrypted file does not match the expected value. It could be that the file is corrupt, or that the provided decryption key is invalid."
                           ,0,0);
        }
        else {
          _err_print_error("open_and_parse","core/io/file_access_encrypted.cpp",99,
                           "Condition \"blen != ds\" is true. Returning: ERR_FILE_CORRUPT",0,0);
        }
      }
      uVar10 = 0x10;
      goto LAB_00100dd2;
    }
LAB_00100dd0:
    uVar10 = 0;
  }
LAB_00100dd2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessEncrypted::open_and_parse_password(Ref<FileAccess>, String const&,
   FileAccessEncrypted::Mode) */

undefined4 __thiscall
FileAccessEncrypted::open_and_parse_password
          (FileAccessEncrypted *this,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::md5_text();
  if ((local_78 == 0) || (*(int *)(local_78 + -8) != 0x21)) {
    uVar5 = 0x1f;
    _err_print_error("open_and_parse_password","core/io/file_access_encrypted.cpp",0x7b,
                     "Condition \"cs.length() != 32\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    lVar6 = 0;
    local_60 = 0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,0x20);
    do {
      if (local_78 == 0) {
        if (lVar6 != 0) {
          lVar7 = 0;
LAB_00101508:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
LAB_001014a0:
        uVar8 = 0;
      }
      else {
        lVar7 = *(long *)(local_78 + -8);
        if (lVar6 == lVar7) goto LAB_001014a0;
        if (lVar7 <= lVar6) goto LAB_00101508;
        uVar8 = *(undefined1 *)(local_78 + lVar6 * 4);
      }
      if (local_60 == 0) {
        lVar7 = 0;
LAB_001014bb:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = *(long *)(local_60 + -8);
      if (lVar7 <= lVar6) goto LAB_001014bb;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      lVar7 = local_60;
      *(undefined1 *)(local_60 + lVar6) = uVar8;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x20);
    local_50 = 0;
    pOVar2 = (Object *)*param_2;
    if ((pOVar2 == (Object *)0x0) ||
       (local_70 = pOVar2, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_70 = (Object *)0x0;
      uVar5 = open_and_parse(this,&local_70,local_68,param_4,1,local_58);
    }
    else {
      uVar5 = open_and_parse(this,&local_70,local_68,param_4,1,local_58);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
      }
    }
  }
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_78 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessEncrypted::_close() */

void __thiscall FileAccessEncrypted::_close(FileAccessEncrypted *this)

{
  uchar uVar1;
  uchar *puVar2;
  long *plVar3;
  Object *pOVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uchar *__n;
  long in_FS_OFFSET;
  AESContext local_70 [16];
  uchar *local_60;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1b8) == 0) goto LAB_001018db;
  if (this[0x1b0] == (FileAccessEncrypted)0x0) {
LAB_00101900:
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      pOVar4 = *(Object **)(this + 0x1b8);
      cVar6 = predelete_handler(pOVar4);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  else {
    local_60 = (uchar *)0x0;
    puVar2 = *(uchar **)(this + 0x1d8);
    if (puVar2 == (uchar *)0x0) {
      iVar7 = 0;
      __n = (uchar *)0x0;
    }
    else {
      __n = *(uchar **)(puVar2 + -8);
      iVar7 = (int)__n;
      if (((ulong)__n & 0xf) != 0) {
        __n = (uchar *)(((ulong)__n & 0xfffffffffffffff0) + 0x10);
      }
    }
    iVar7 = CryptoCore::md5(puVar2,iVar7,local_58);
    if (iVar7 != 0) {
      _err_print_error("_close","core/io/file_access_encrypted.cpp",0x96,
                       "Condition \"CryptoCore::md5(data.ptr(), data.size(), hash) != OK\" is true."
                       ,0,0);
      goto LAB_001018db;
    }
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,(long)__n);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    memset(local_60,0,(size_t)__n);
    lVar10 = *(long *)(this + 0x1d8);
    for (lVar8 = 0; (lVar10 != 0 && (lVar8 < *(long *)(lVar10 + -8))); lVar8 = lVar8 + 1) {
      uVar1 = *(uchar *)(lVar10 + lVar8);
      if (local_60 == (uchar *)0x0) {
        lVar10 = 0;
LAB_0010175a:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar10,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar10 = *(long *)(local_60 + -8);
      if (lVar10 <= lVar8) goto LAB_0010175a;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      local_60[lVar8] = uVar1;
      lVar10 = *(long *)(this + 0x1d8);
    }
    CryptoCore::AESContext::AESContext(local_70);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1a8));
    CryptoCore::AESContext::set_encode_key((uchar *)local_70,*(ulong *)(this + 0x1a8));
    if (this[0x1e9] != (FileAccessEncrypted)0x0) {
      (**(code **)(**(long **)(this + 0x1b8) + 0x278))(*(long **)(this + 0x1b8),0x43454447);
    }
    (**(code **)(**(long **)(this + 0x1b8) + 0x2d0))(*(long **)(this + 0x1b8),local_58,0x10);
    if (*(long *)(this + 0x1d8) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(this + 0x1d8) + -8);
    }
    (**(code **)(**(long **)(this + 0x1b8) + 0x280))(*(long **)(this + 0x1b8),uVar9);
    (**(code **)(**(long **)(this + 0x1b8) + 0x2d0))
              (*(long **)(this + 0x1b8),*(undefined8 *)(this + 0x198),0x10);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    puVar2 = local_60;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x198));
    CryptoCore::AESContext::encrypt_cfb((ulong)local_70,__n,*(uchar **)(this + 0x198),puVar2);
    plVar3 = *(long **)(this + 0x1b8);
    if (puVar2 == (uchar *)0x0) {
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,0);
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1d8),0);
      CryptoCore::AESContext::~AESContext(local_70);
    }
    else {
      (**(code **)(*plVar3 + 0x2d0))(plVar3,puVar2,*(undefined8 *)(puVar2 + -8));
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1d8),0);
      CryptoCore::AESContext::~AESContext(local_70);
      LOCK();
      plVar3 = (long *)(puVar2 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        Memory::free_static(local_60 + -0x10,false);
      }
    }
    if (*(long *)(this + 0x1b8) != 0) goto LAB_00101900;
  }
  *(undefined8 *)(this + 0x1b8) = 0;
LAB_001018db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessEncrypted::close() */

void __thiscall FileAccessEncrypted::close(FileAccessEncrypted *this)

{
  _close(this);
  return;
}



/* FileAccessEncrypted::~FileAccessEncrypted() */

void __thiscall FileAccessEncrypted::~FileAccessEncrypted(FileAccessEncrypted *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00103d70;
  _close(this);
  if (*(long *)(this + 0x1d8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1d8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1d8);
      *(undefined8 *)(this + 0x1d8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
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
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      FileAccess::~FileAccess((FileAccess *)this);
      return;
    }
  }
  FileAccess::~FileAccess((FileAccess *)this);
  return;
}



/* FileAccessEncrypted::~FileAccessEncrypted() */

void __thiscall FileAccessEncrypted::~FileAccessEncrypted(FileAccessEncrypted *this)

{
  ~FileAccessEncrypted(this);
  operator_delete(this,0x1f0);
  return;
}



/* FileAccessEncrypted::store_buffer(unsigned char const*, unsigned long) */

FileAccessEncrypted __thiscall
FileAccessEncrypted::store_buffer(FileAccessEncrypted *this,uchar *param_1,ulong param_2)

{
  FileAccessEncrypted FVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  FVar1 = this[0x1b0];
  if (FVar1 == (FileAccessEncrypted)0x0) {
    _err_print_error("store_buffer","core/io/file_access_encrypted.cpp",0xf9,
                     "Condition \"!writing\" is true. Returning: false",
                     "File has not been opened in write mode.",0,0);
    return (FileAccessEncrypted)0x0;
  }
  if (param_2 == 0) {
    return FVar1;
  }
  if (param_1 == (uchar *)0x0) {
    _err_print_error("store_buffer","core/io/file_access_encrypted.cpp",0xff,
                     "Parameter \"p_src\" is null.",0,0);
    return (FileAccessEncrypted)0x0;
  }
  uVar4 = *(long *)(this + 0x1e0) + param_2;
  if (*(code **)(*(long *)this + 0x1d0) == get_length) {
    if (*(long *)(this + 0x1d8) != 0) {
      uVar3 = *(ulong *)(*(long *)(this + 0x1d8) + -8);
      goto LAB_00101b9e;
    }
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 0x1d0))();
LAB_00101b9e:
    if (uVar4 < uVar3) goto LAB_00101baa;
    uVar4 = *(long *)(this + 0x1e0) + param_2;
  }
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1d8),uVar4);
  if (iVar2 != 0) {
    _err_print_error("store_buffer","core/io/file_access_encrypted.cpp",0x102,
                     "Condition \"data.resize(pos + p_length) != OK\" is true. Returning: false",0,0
                    );
    return (FileAccessEncrypted)0x0;
  }
LAB_00101baa:
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1d8));
  memcpy((void *)(*(long *)(this + 0x1e0) + *(long *)(this + 0x1d8)),param_1,param_2);
  *(ulong *)(this + 0x1e0) = *(long *)(this + 0x1e0) + param_2;
  return FVar1;
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
  return (uint)CONCAT71(0x1040,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1040,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1040,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* FileAccessEncrypted::resize(long) */

undefined8 FileAccessEncrypted::resize(long param_1)

{
  return 2;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00102533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
      goto LAB_0010259e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
LAB_0010259e:
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
  if (initialize_class()::initialized != '\0') goto LAB_00102840;
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
LAB_0010294e:
      if ((code *)PTR__bind_methods_00106010 != RefCounted::_bind_methods) {
LAB_0010295e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010294e;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00106010 != RefCounted::_bind_methods) goto LAB_0010295e;
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
  if ((code *)PTR__bind_compatibility_methods_00106008 != Object::_bind_compatibility_methods) {
    FileAccess::_bind_compatibility_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00102840:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
            if (lVar5 == 0) goto LAB_00102a3f;
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
LAB_00102a3f:
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
    if (cVar6 != '\0') goto LAB_00102af3;
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
              if (lVar5 == 0) goto LAB_00102bcb;
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
LAB_00102bcb:
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
      if (cVar6 != '\0') goto LAB_00102af3;
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
                if (lVar5 == 0) goto LAB_00102cab;
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
LAB_00102cab:
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
        if (cVar6 != '\0') goto LAB_00102af3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00102d54;
    }
  }
LAB_00102af3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102d54:
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
LAB_00102ec8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102ec8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102ee6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102ee6:
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
LAB_001032c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001032c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001032e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001032e5:
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



/* WARNING: Removing unreachable block (ram,0x00103728) */
/* WARNING: Removing unreachable block (ram,0x00103858) */
/* WARNING: Removing unreachable block (ram,0x00103a20) */
/* WARNING: Removing unreachable block (ram,0x00103864) */
/* WARNING: Removing unreachable block (ram,0x0010386e) */
/* WARNING: Removing unreachable block (ram,0x00103a00) */
/* WARNING: Removing unreachable block (ram,0x0010387a) */
/* WARNING: Removing unreachable block (ram,0x00103884) */
/* WARNING: Removing unreachable block (ram,0x001039e0) */
/* WARNING: Removing unreachable block (ram,0x00103890) */
/* WARNING: Removing unreachable block (ram,0x0010389a) */
/* WARNING: Removing unreachable block (ram,0x001039c0) */
/* WARNING: Removing unreachable block (ram,0x001038a6) */
/* WARNING: Removing unreachable block (ram,0x001038b0) */
/* WARNING: Removing unreachable block (ram,0x001039a0) */
/* WARNING: Removing unreachable block (ram,0x001038bc) */
/* WARNING: Removing unreachable block (ram,0x001038c6) */
/* WARNING: Removing unreachable block (ram,0x00103980) */
/* WARNING: Removing unreachable block (ram,0x001038d2) */
/* WARNING: Removing unreachable block (ram,0x001038dc) */
/* WARNING: Removing unreachable block (ram,0x00103960) */
/* WARNING: Removing unreachable block (ram,0x001038e4) */
/* WARNING: Removing unreachable block (ram,0x001038fa) */
/* WARNING: Removing unreachable block (ram,0x00103906) */
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



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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
/* Error CowData<unsigned char>::resize<false>(long) */

undefined8 __thiscall
CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
LAB_00103cce:
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(lVar5 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar5 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    if (lVar9 == 0) goto LAB_00103cce;
    uVar4 = lVar9 - 1U | lVar9 - 1U >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    lVar5 = (uVar4 | uVar4 >> 0x20) + 1;
  }
  uVar4 = param_1 - 1U | param_1 - 1U >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar1 = uVar4 + 1;
  if (lVar9 < param_1) {
    if (lVar1 != lVar5) {
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar8 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar8;
        goto LAB_00103c0c;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_00103c0c:
      puVar8[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar1 != lVar5) && (uVar7 = _realloc(this,lVar1), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


