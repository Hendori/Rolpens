
/* FileAccessCompressed::is_open() const */

bool __thiscall FileAccessCompressed::is_open(FileAccessCompressed *this)

{
  return *(long *)(this + 0x220) != 0;
}



/* FileAccessCompressed::get_error() const */

byte __thiscall FileAccessCompressed::get_error(FileAccessCompressed *this)

{
  return -(this[0x1bc] != (FileAccessCompressed)0x0) & 0x12;
}



/* FileAccessCompressed::seek_end(long) */

void __thiscall FileAccessCompressed::seek_end(FileAccessCompressed *this,long param_1)

{
  if (*(long *)(this + 0x220) == 0) {
    _err_print_error("seek_end","core/io/file_access_compressed.cpp",0xd6,
                     "Condition \"f.is_null()\" is true.","File must be opened before use.",0,0);
    return;
  }
  if (this[0x194] != (FileAccessCompressed)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x1b8))(this,param_1 + *(long *)(this + 0x1b0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1b8))(this,param_1 + *(long *)(this + 0x200));
  return;
}



/* FileAccessCompressed::eof_reached() const */

FileAccessCompressed __thiscall FileAccessCompressed::eof_reached(FileAccessCompressed *this)

{
  if (*(long *)(this + 0x220) == 0) {
    _err_print_error("eof_reached","core/io/file_access_compressed.cpp",0xf1,
                     "Condition \"f.is_null()\" is true. Returning: false",
                     "File must be opened before use.",0,0);
    return (FileAccessCompressed)0x0;
  }
  if (this[0x194] != (FileAccessCompressed)0x0) {
    return (FileAccessCompressed)0x0;
  }
  return this[0x1bc];
}



/* FileAccessCompressed::_get_modified_time(String const&) */

undefined8 __thiscall
FileAccessCompressed::_get_modified_time(FileAccessCompressed *this,String *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x220) != 0) {
    uVar1 = FileAccess::get_modified_time(param_1);
    return uVar1;
  }
  return 0;
}



/* FileAccessCompressed::get_position() const */

long __thiscall FileAccessCompressed::get_position(FileAccessCompressed *this)

{
  if (*(long *)(this + 0x220) == 0) {
    _err_print_error("get_position","core/io/file_access_compressed.cpp",0xdf,
                     "Condition \"f.is_null()\" is true. Returning: 0",
                     "File must be opened before use.",0,0);
    return 0;
  }
  if (this[0x194] != (FileAccessCompressed)0x0) {
    return *(long *)(this + 0x198);
  }
  return (ulong)*(uint *)(this + 0x1d8) * (ulong)*(uint *)(this + 0x1b8) + *(long *)(this + 0x1e8);
}



/* FileAccessCompressed::get_length() const */

undefined8 __thiscall FileAccessCompressed::get_length(FileAccessCompressed *this)

{
  if (*(long *)(this + 0x220) == 0) {
    _err_print_error("get_length","core/io/file_access_compressed.cpp",0xe8,
                     "Condition \"f.is_null()\" is true. Returning: 0",
                     "File must be opened before use.",0,0);
    return 0;
  }
  if (this[0x194] != (FileAccessCompressed)0x0) {
    return *(undefined8 *)(this + 0x1b0);
  }
  return *(undefined8 *)(this + 0x200);
}



/* FileAccessCompressed::flush() */

void __thiscall FileAccessCompressed::flush(FileAccessCompressed *this)

{
  if (*(long *)(this + 0x220) != 0) {
    if (this[0x194] == (FileAccessCompressed)0x0) {
      _err_print_error("flush","core/io/file_access_compressed.cpp",0x125,
                       "Condition \"!writing\" is true.","File has not been opened in write mode.",0
                       ,0);
    }
    return;
  }
  _err_print_error("flush","core/io/file_access_compressed.cpp",0x124,
                   "Condition \"f.is_null()\" is true.","File must be opened before use.",0,0);
  return;
}



/* CowData<FileAccessCompressed::ReadBlock>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<FileAccessCompressed::ReadBlock>::_copy_on_write
          (CowData<FileAccessCompressed::ReadBlock> *this)

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
  __n = lVar2 * 0x10;
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



/* FileAccessCompressed::get_buffer(unsigned char*, unsigned long) const */

ulong __thiscall
FileAccessCompressed::get_buffer(FileAccessCompressed *this,uchar *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  
  if ((param_1 == (uchar *)0x0) && (param_2 != 0)) {
    _err_print_error("get_buffer","core/io/file_access_compressed.cpp",0xfa,
                     "Condition \"!p_dst && p_length > 0\" is true. Returning: -1",0,0);
  }
  else if (*(long *)(this + 0x220) == 0) {
    _err_print_error("get_buffer","core/io/file_access_compressed.cpp",0xfb,
                     "Condition \"f.is_null()\" is true. Returning: -1",
                     "File must be opened before use.",0,0);
  }
  else {
    if (this[0x194] == (FileAccessCompressed)0x0) {
      if (this[0x1bd] == (FileAccessCompressed)0x0) {
        uVar11 = 0;
        if (param_2 != 0) {
          while( true ) {
            param_1[uVar11] = *(uchar *)(*(long *)(this + 0x1d0) + *(long *)(this + 0x1e8));
            lVar2 = *(long *)(this + 0x1e8);
            *(ulong *)(this + 0x1e8) = lVar2 + 1U;
            if ((ulong)*(uint *)(this + 0x1e0) <= lVar2 + 1U) break;
LAB_001005e0:
            uVar11 = uVar11 + 1;
            if (param_2 == uVar11) {
              return param_2;
            }
          }
          iVar6 = *(int *)(this + 0x1d8);
          uVar8 = iVar6 + 1;
          uVar7 = (ulong)uVar8;
          *(uint *)(this + 0x1d8) = uVar8;
          if (*(uint *)(this + 0x1dc) <= uVar8) {
            *(int *)(this + 0x1d8) = iVar6;
            uVar11 = uVar11 + 1;
            this[0x1bd] = (FileAccessCompressed)0x1;
            if (uVar11 < param_2) {
              this[0x1bc] = (FileAccessCompressed)0x1;
              return uVar11;
            }
            return uVar11;
          }
          plVar3 = *(long **)(this + 0x220);
          pcVar4 = *(code **)(*plVar3 + 0x220);
          lVar2 = *(long *)(this + 0x1f8);
          if (lVar2 != 0) {
            lVar10 = *(long *)(lVar2 + -8);
            if (lVar10 <= (long)uVar7) goto LAB_00100703;
            uVar1 = *(undefined4 *)(lVar2 + uVar7 * 0x10);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1c8));
            (*pcVar4)(plVar3,*(undefined8 *)(this + 0x1c8),uVar1);
            lVar2 = *(long *)(this + 0x1f8);
            uVar7 = (ulong)*(uint *)(this + 0x1d8);
            if (lVar2 != 0) {
              lVar10 = *(long *)(lVar2 + -8);
              if (lVar10 <= (long)uVar7) goto LAB_00100703;
              uVar1 = *(undefined4 *)(lVar2 + uVar7 * 0x10);
              uVar5 = *(undefined8 *)(this + 0x1c8);
              if (lVar10 == 1) {
                uVar9 = *(undefined4 *)(this + 0x200);
              }
              else {
                uVar9 = *(undefined4 *)(this + 0x1b8);
              }
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x218));
              iVar6 = Compression::decompress(*(undefined8 *)(this + 0x218),uVar9,uVar5,uVar1);
              if (iVar6 == -1) {
                _err_print_error("get_buffer","core/io/file_access_compressed.cpp",0x10d,
                                 "Condition \"ret == -1\" is true. Returning: -1",
                                 "Compressed file is corrupt.",0,0);
                return 0xffffffffffffffff;
              }
              uVar8 = *(uint *)(this + 0x1b8);
              if (*(int *)(this + 0x1d8) == *(int *)(this + 0x1dc) + -1) {
                uVar8 = (uint)(*(ulong *)(this + 0x200) % (ulong)uVar8);
              }
              *(uint *)(this + 0x1e0) = uVar8;
              *(undefined8 *)(this + 0x1e8) = 0;
              goto LAB_001005e0;
            }
          }
          lVar10 = 0;
LAB_00100703:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar10,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
      else {
        this[0x1bc] = (FileAccessCompressed)0x1;
      }
      return 0;
    }
    _err_print_error("get_buffer","core/io/file_access_compressed.cpp",0xfc,
                     "Condition \"writing\" is true. Returning: -1",
                     "File has not been opened in read mode.",0,0);
  }
  return 0xffffffffffffffff;
}



/* FileAccessCompressed::seek(unsigned long) */

ulong FileAccessCompressed::seek(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  ulong in_RAX;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong in_RSI;
  long lVar12;
  undefined4 uVar13;
  
  plVar3 = *(long **)(param_1 + 0x220);
  if (plVar3 == (long *)0x0) {
    uVar8 = _err_print_error(&_LC28,"core/io/file_access_compressed.cpp",0xb8,
                             "Condition \"f.is_null()\" is true.","File must be opened before use.",
                             0,0);
    return uVar8;
  }
  if (*(char *)(param_1 + 0x194) == '\0') {
    if (in_RSI <= *(ulong *)(param_1 + 0x200)) {
      if (*(ulong *)(param_1 + 0x200) == in_RSI) {
        *(undefined1 *)(param_1 + 0x1bd) = 1;
        return in_RAX;
      }
      *(undefined2 *)(param_1 + 0x1bc) = 0;
      uVar8 = (ulong)*(uint *)(param_1 + 0x1b8);
      iVar7 = (int)(in_RSI / uVar8);
      if (*(int *)(param_1 + 0x1d8) == iVar7) {
LAB_00100a38:
        *(ulong *)(param_1 + 0x1e8) = in_RSI % uVar8;
        return in_RSI / uVar8;
      }
      lVar4 = *plVar3;
      *(int *)(param_1 + 0x1d8) = iVar7;
      uVar8 = in_RSI / uVar8 & 0xffffffff;
      lVar5 = *(long *)(param_1 + 0x1f8);
      if (lVar5 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(lVar5 + -8);
        if ((long)uVar8 < lVar12) {
          (**(code **)(lVar4 + 0x1b8))(plVar3,*(undefined8 *)(lVar5 + 8 + uVar8 * 0x10));
          plVar3 = *(long **)(param_1 + 0x220);
          uVar8 = (ulong)*(uint *)(param_1 + 0x1d8);
          pcVar6 = *(code **)(*plVar3 + 0x220);
          lVar4 = *(long *)(param_1 + 0x1f8);
          if (lVar4 != 0) {
            lVar12 = *(long *)(lVar4 + -8);
            if (lVar12 <= (long)uVar8) goto LAB_00100b3e;
            uVar1 = *(undefined4 *)(lVar4 + uVar8 * 0x10);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x1c8));
            (*pcVar6)(plVar3,*(undefined8 *)(param_1 + 0x1c8),uVar1);
            lVar4 = *(long *)(param_1 + 0x1f8);
            uVar1 = *(undefined4 *)(param_1 + 400);
            uVar8 = (ulong)*(uint *)(param_1 + 0x1d8);
            if (lVar4 != 0) {
              lVar12 = *(long *)(lVar4 + -8);
              if ((long)uVar8 < lVar12) {
                uVar11 = *(undefined8 *)(param_1 + 0x1c8);
                uVar2 = *(undefined4 *)(lVar4 + uVar8 * 0x10);
                if (lVar12 == 1) {
                  uVar13 = *(undefined4 *)(param_1 + 0x200);
                }
                else {
                  uVar13 = *(undefined4 *)(param_1 + 0x1b8);
                }
                CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x218));
                iVar7 = Compression::decompress
                                  (*(undefined8 *)(param_1 + 0x218),uVar13,uVar11,uVar2,uVar1);
                if (iVar7 == -1) {
                  uVar8 = 0;
                  _err_print_error(&_LC28,"core/io/file_access_compressed.cpp",0xcc,
                                   "Condition \"ret == -1\" is true.","Compressed file is corrupt.",
                                   0);
                  return uVar8;
                }
                uVar10 = *(uint *)(param_1 + 0x1b8);
                uVar8 = (ulong)uVar10;
                if (*(int *)(param_1 + 0x1d8) == *(int *)(param_1 + 0x1dc) + -1) {
                  uVar10 = (uint)(*(ulong *)(param_1 + 0x200) % uVar8);
                }
                *(uint *)(param_1 + 0x1e0) = uVar10;
                goto LAB_00100a38;
              }
              goto LAB_00100b3e;
            }
          }
          lVar12 = 0;
        }
      }
LAB_00100b3e:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar11 = 0xc0;
    pcVar9 = "Condition \"p_position > read_total\" is true.";
  }
  else {
    if (in_RSI <= *(ulong *)(param_1 + 0x1b0)) {
      *(ulong *)(param_1 + 0x198) = in_RSI;
      return in_RAX;
    }
    uVar11 = 0xbb;
    pcVar9 = "Condition \"p_position > write_max\" is true.";
  }
  uVar8 = _err_print_error(&_LC28,"core/io/file_access_compressed.cpp",uVar11,pcVar9,0,0);
  return uVar8;
}



/* FileAccessCompressed::get_path_absolute() const */

void FileAccessCompressed::get_path_absolute(void)

{
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(in_RSI + 0x220) == (long *)0x0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    (**(code **)(**(long **)(in_RSI + 0x220) + 0x1b0))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessCompressed::get_path() const */

void FileAccessCompressed::get_path(void)

{
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(in_RSI + 0x220) == (long *)0x0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    (**(code **)(**(long **)(in_RSI + 0x220) + 0x1a8))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessCompressed::file_exists(String const&) */

undefined8 __thiscall FileAccessCompressed::file_exists(FileAccessCompressed *this,String *param_1)

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



/* FileAccessCompressed::_get_hidden_attribute(String const&) */

undefined8 FileAccessCompressed::_get_hidden_attribute(String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x160);
    if (UNRECOVERED_JUMPTABLE != _get_hidden_attribute) {
LAB_00100de0:
                    /* WARNING: Could not recover jumptable at 0x00100de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x44];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x160) != _get_hidden_attribute) {
                    /* WARNING: Could not recover jumptable at 0x00100de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x160))();
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x44];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x160);
        if (UNRECOVERED_JUMPTABLE != _get_hidden_attribute) goto LAB_00100de0;
        if ((long *)plVar1[0x44] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x44] + 0x160))();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



/* FileAccessCompressed::_get_read_only_attribute(String const&) */

undefined8 FileAccessCompressed::_get_read_only_attribute(String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
    if (UNRECOVERED_JUMPTABLE != _get_read_only_attribute) {
LAB_00100e70:
                    /* WARNING: Could not recover jumptable at 0x00100e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x44];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x170) != _get_read_only_attribute) {
                    /* WARNING: Could not recover jumptable at 0x00100e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x170))();
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x44];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE != _get_read_only_attribute) goto LAB_00100e70;
        if ((long *)plVar1[0x44] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x44] + 0x170))();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



/* FileAccessCompressed::_get_unix_permissions(String const&) */

undefined8 FileAccessCompressed::_get_unix_permissions(String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(code **)(*plVar1 + 0x150) == _get_unix_permissions) {
    plVar1 = (long *)plVar1[0x44];
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x150) == _get_unix_permissions) {
        plVar1 = (long *)plVar1[0x44];
        if (plVar1 != (long *)0x0) {
          if (*(code **)(*plVar1 + 0x150) == _get_unix_permissions) {
            if ((long *)plVar1[0x44] != (long *)0x0) {
              uVar2 = (**(code **)(*(long *)plVar1[0x44] + 0x150))();
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
                    /* WARNING: Could not recover jumptable at 0x00100f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x150))();
  return uVar2;
}



/* FileAccessCompressed::_set_unix_permissions(String const&,
   BitField<FileAccess::UnixPermissionFlags>) */

undefined8 FileAccessCompressed::_set_unix_permissions(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x158);
    if (UNRECOVERED_JUMPTABLE != _set_unix_permissions) {
LAB_00100fb0:
                    /* WARNING: Could not recover jumptable at 0x00100fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x44];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x158) != _set_unix_permissions) {
                    /* WARNING: Could not recover jumptable at 0x00100fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x158))();
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x44];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x158);
        if (UNRECOVERED_JUMPTABLE != _set_unix_permissions) goto LAB_00100fb0;
        if ((long *)plVar1[0x44] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x44] + 0x158))();
          return uVar2;
        }
      }
    }
  }
  return 1;
}



/* FileAccessCompressed::_set_hidden_attribute(String const&, bool) */

undefined8 __thiscall
FileAccessCompressed::_set_hidden_attribute(FileAccessCompressed *this,String *param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(this + 0x220);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x168);
    if (UNRECOVERED_JUMPTABLE != _set_hidden_attribute) {
LAB_00101040:
                    /* WARNING: Could not recover jumptable at 0x00101040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x44];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x168) != _set_hidden_attribute) {
                    /* WARNING: Could not recover jumptable at 0x00101048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,param_1,param_2);
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x44];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x168);
        if (UNRECOVERED_JUMPTABLE != _set_hidden_attribute) goto LAB_00101040;
        if ((long *)plVar1[0x44] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010102e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x44] + 0x168))();
          return uVar2;
        }
      }
    }
  }
  return 1;
}



/* FileAccessCompressed::_set_read_only_attribute(String const&, bool) */

undefined8 __thiscall
FileAccessCompressed::_set_read_only_attribute
          (FileAccessCompressed *this,String *param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(this + 0x220);
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
    if (UNRECOVERED_JUMPTABLE != _set_read_only_attribute) {
LAB_001010d0:
                    /* WARNING: Could not recover jumptable at 0x001010d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    plVar1 = (long *)plVar1[0x44];
    if (plVar1 != (long *)0x0) {
      if (*(code **)(*plVar1 + 0x178) != _set_read_only_attribute) {
                    /* WARNING: Could not recover jumptable at 0x001010d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,param_1,param_2);
        return uVar2;
      }
      plVar1 = (long *)plVar1[0x44];
      if (plVar1 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
        if (UNRECOVERED_JUMPTABLE != _set_read_only_attribute) goto LAB_001010d0;
        if ((long *)plVar1[0x44] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001010be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)plVar1[0x44] + 0x178))();
          return uVar2;
        }
      }
    }
  }
  return 1;
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



/* FileAccessCompressed::configure(String const&, Compression::Mode, unsigned int) */

void __thiscall
FileAccessCompressed::configure
          (FileAccessCompressed *this,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::ascii(SUB81((String *)&local_60,0));
  local_58 = (char *)CharString::get_data();
  local_50 = 0;
  if (local_58 != (char *)0x0) {
    local_50 = strlen(local_58);
  }
  String::parse_latin1((StrRange *)(this + 0x208));
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
  local_68 = 0;
  local_58 = "    ";
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+((String *)&local_60,(String *)(this + 0x208));
  String::substr((int)&local_58,(int)(String *)&local_60);
  pcVar4 = local_58;
  pcVar2 = *(char **)(this + 0x208);
  if (pcVar2 == local_58) {
    if (pcVar2 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
  }
  else {
    if (pcVar2 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x208);
        *(undefined8 *)(this + 0x208) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(char **)(this + 0x208) = local_58;
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
  *(undefined4 *)(this + 400) = param_3;
  *(undefined4 *)(this + 0x1b8) = param_4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FileAccessCompressed::store_buffer(unsigned char const*, unsigned long) */

FileAccessCompressed __thiscall
FileAccessCompressed::store_buffer(FileAccessCompressed *this,uchar *param_1,ulong param_2)

{
  FileAccessCompressed FVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(this + 0x220) == 0) {
    _err_print_error("store_buffer","core/io/file_access_compressed.cpp",299,
                     "Condition \"f.is_null()\" is true. Returning: false",
                     "File must be opened before use.",0,0);
  }
  else {
    FVar1 = this[0x194];
    if (FVar1 != (FileAccessCompressed)0x0) {
      lVar6 = *(long *)(this + 0x198);
      uVar5 = lVar6 + param_2;
      uVar4 = *(ulong *)(this + 0x1b0);
      if (*(ulong *)(this + 0x1b0) < uVar5) {
        *(ulong *)(this + 0x1b0) = uVar5;
        uVar4 = uVar5;
      }
      if (*(uint *)(this + 0x1a8) < uVar4) {
        uVar2 = (uint)uVar4;
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar2 = uVar2 - 1 >> 1 | uVar2 - 1;
          uVar2 = uVar2 | uVar2 >> 2;
          uVar2 = uVar2 | uVar2 >> 4;
          uVar2 = uVar2 | uVar2 >> 8;
          uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
          uVar5 = (ulong)uVar2;
        }
        *(uint *)(this + 0x1a8) = uVar2;
        iVar3 = CowData<unsigned_char>::resize<false>
                          ((CowData<unsigned_char> *)(this + 0x218),uVar5);
        if (iVar3 != 0) {
          _err_print_error("store_buffer","core/io/file_access_compressed.cpp",0x133,
                           "Condition \"buffer.resize(write_buffer_size) != OK\" is true. Returning: false"
                           ,0,0);
          return (FileAccessCompressed)0x0;
        }
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x218));
        lVar6 = *(long *)(this + 0x198);
        *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(this + 0x218);
      }
      if (param_2 != 0) {
        memcpy((void *)(lVar6 + *(long *)(this + 0x1a0)),param_1,param_2);
        lVar6 = *(long *)(this + 0x198);
      }
      *(ulong *)(this + 0x198) = lVar6 + param_2;
      return FVar1;
    }
    _err_print_error("store_buffer","core/io/file_access_compressed.cpp",300,
                     "Condition \"!writing\" is true. Returning: false",
                     "File has not been opened in write mode.",0,0);
  }
  return (FileAccessCompressed)0x0;
}



/* FileAccessCompressed::open_after_magic(Ref<FileAccess>) */

long __thiscall FileAccessCompressed::open_after_magic(FileAccessCompressed *this,long *param_2)

{
  CowData<unsigned_char> *this_00;
  uint uVar1;
  undefined4 uVar2;
  Object *pOVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined4 uVar16;
  Object *pOVar17;
  long lVar18;
  uint *puVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  pOVar3 = (Object *)*param_2;
  pOVar17 = *(Object **)(this + 0x220);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar3 != pOVar17) {
    *(Object **)(this + 0x220) = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
      *(undefined8 *)(this + 0x220) = 0;
    }
    if (((pOVar17 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
       (cVar9 = predelete_handler(pOVar17), cVar9 != '\0')) {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
    pOVar17 = *(Object **)(this + 0x220);
  }
  uVar10 = (**(code **)(*(long *)pOVar17 + 0x1f0))(pOVar17);
  *(undefined4 *)(this + 400) = uVar10;
  iVar11 = (**(code **)(**(long **)(this + 0x220) + 0x1f0))();
  *(int *)(this + 0x1b8) = iVar11;
  if (iVar11 != 0) {
    uVar12 = (**(code **)(**(long **)(this + 0x220) + 0x1f0))();
    uVar1 = *(uint *)(this + 0x1b8);
    plVar4 = *(long **)(this + 0x220);
    *(ulong *)(this + 0x200) = (ulong)uVar12;
    iVar11 = uVar12 / uVar1 + 1;
    if (*(code **)(*plVar4 + 0x1c8) == get_position) {
      if (plVar4[0x44] == 0) {
        _err_print_error("get_position","core/io/file_access_compressed.cpp",0xdf,
                         "Condition \"f.is_null()\" is true. Returning: 0",
                         "File must be opened before use.",0,0);
        lVar15 = 0;
      }
      else if (*(char *)((long)plVar4 + 0x194) == '\0') {
        lVar15 = (ulong)*(uint *)(plVar4 + 0x3b) * (ulong)*(uint *)(plVar4 + 0x37) + plVar4[0x3d];
      }
      else {
        lVar15 = plVar4[0x33];
      }
    }
    else {
      lVar15 = (**(code **)(*plVar4 + 0x1c8))();
    }
    if (iVar11 == 0) {
      uVar22 = 0;
    }
    else {
      uVar20 = 0;
      lVar15 = (ulong)(uint)(iVar11 * 4) + lVar15;
      uVar23 = 0;
      do {
        uVar13 = (**(code **)(**(long **)(this + 0x220) + 0x1f0))();
        if (uVar20 < uVar13) {
          uVar20 = uVar13;
        }
        if (*(long *)(this + 0x1f8) == 0) {
          lVar21 = 1;
        }
        else {
          lVar21 = *(long *)(*(long *)(this + 0x1f8) + -8) + 1;
        }
        iVar14 = CowData<FileAccessCompressed::ReadBlock>::resize<false>
                           ((CowData<FileAccessCompressed::ReadBlock> *)(this + 0x1f8),lVar21);
        if (iVar14 == 0) {
          if (*(long *)(this + 0x1f8) == 0) {
            lVar18 = -1;
            lVar21 = 0;
          }
          else {
            lVar21 = *(long *)(*(long *)(this + 0x1f8) + -8);
            lVar18 = lVar21 + -1;
            if (-1 < lVar18) {
              CowData<FileAccessCompressed::ReadBlock>::_copy_on_write
                        ((CowData<FileAccessCompressed::ReadBlock> *)(this + 0x1f8));
              puVar19 = (uint *)(lVar18 * 0x10 + *(long *)(this + 0x1f8));
              *puVar19 = uVar13;
              *(long *)(puVar19 + 2) = lVar15;
              goto LAB_0010184b;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar21,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_0010184b:
        bVar24 = uVar12 / uVar1 != uVar23;
        lVar15 = lVar15 + (ulong)uVar13;
        uVar23 = uVar23 + 1;
      } while (bVar24);
      uVar22 = (ulong)uVar20;
    }
    this_00 = (CowData<unsigned_char> *)(this + 0x218);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1c8),uVar22);
    CowData<unsigned_char>::resize<false>(this_00,(ulong)*(uint *)(this + 0x1b8));
    CowData<unsigned_char>::_copy_on_write(this_00);
    plVar4 = *(long **)(this + 0x220);
    *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x218);
    pcVar5 = *(code **)(*plVar4 + 0x220);
    puVar6 = *(undefined4 **)(this + 0x1f8);
    if (puVar6 == (undefined4 *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(puVar6 + -2);
      if (0 < lVar15) {
        uVar10 = *puVar6;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1c8));
        (*pcVar5)(plVar4,*(undefined8 *)(this + 0x1c8),uVar10);
        *(undefined2 *)(this + 0x1bc) = 0;
        *(int *)(this + 0x1dc) = iVar11;
        puVar6 = *(undefined4 **)(this + 0x1f8);
        if (puVar6 != (undefined4 *)0x0) {
          lVar15 = *(long *)(puVar6 + -2);
          uVar10 = *(undefined4 *)(this + 400);
          if (lVar15 == 1) {
            uVar16 = (undefined4)*(undefined8 *)(this + 0x200);
            *(undefined4 *)(this + 0x1e0) = uVar16;
          }
          else {
            uVar16 = *(undefined4 *)(this + 0x1b8);
            *(undefined4 *)(this + 0x1e0) = uVar16;
            if (lVar15 < 1) goto LAB_00101ba5;
          }
          uVar2 = *puVar6;
          uVar7 = *(undefined8 *)(this + 0x1c8);
          CowData<unsigned_char>::_copy_on_write(this_00);
          iVar11 = Compression::decompress(*(undefined8 *)(this + 0x218),uVar16,uVar7,uVar2,uVar10);
          *(undefined4 *)(this + 0x1d8) = 0;
          *(undefined8 *)(this + 0x1e8) = 0;
          lVar15 = (ulong)(iVar11 == -1) << 4;
          goto LAB_0010197d;
        }
        lVar15 = 0;
        *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(this + 0x1b8);
      }
    }
LAB_00101ba5:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar15,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((*(long **)(this + 0x220) != (long *)0x0) &&
     (cVar9 = RefCounted::unreference(), cVar9 != '\0')) {
    pOVar3 = *(Object **)(this + 0x220);
    cVar9 = predelete_handler(pOVar3);
    if (cVar9 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  *(undefined8 *)(this + 0x220) = 0;
  (**(code **)(*(long *)*param_2 + 0x1a8))(&local_68);
  local_58 = "Can\'t open compressed file \'%s\' with block size 0, it is corrupted.";
  local_60 = 0;
  local_50 = 0x43;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>(&local_58,(StrRange *)&local_60,&local_68);
  _err_print_error("open_after_magic","core/io/file_access_compressed.cpp",0x2f,
                   "Method/function failed. Returning: ERR_FILE_CORRUPT",&local_58,0,0);
  pcVar8 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_58 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar8 + -0x10,false);
    }
  }
  lVar15 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar4 = (long *)(local_60 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar4 = (long *)(local_68 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = 0x10;
LAB_0010197d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar15;
}



/* FileAccessCompressed::_close() */

void __thiscall FileAccessCompressed::_close(FileAccessCompressed *this)

{
  uint uVar1;
  Object *pOVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_70;
  long local_60 [2];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x220) != 0) {
    if (this[0x194] == (FileAccessCompressed)0x0) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1c8),0);
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x218),0);
      CowData<FileAccessCompressed::ReadBlock>::resize<false>
                ((CowData<FileAccessCompressed::ReadBlock> *)(this + 0x1f8),0);
    }
    else {
      String::utf8();
      plVar15 = *(long **)(this + 0x220);
      pcVar11 = *(code **)(*plVar15 + 0x2d0);
      if (local_70 == 0) {
        lVar14 = 0;
      }
      else {
        iVar7 = (int)*(undefined8 *)(local_70 + -8);
        lVar14 = (long)(iVar7 + -1);
        if (iVar7 == 0) {
          lVar14 = 0;
        }
      }
      uVar10 = CharString::get_data();
      (*pcVar11)(plVar15,uVar10,lVar14);
      (**(code **)(**(long **)(this + 0x220) + 0x278))
                (*(long **)(this + 0x220),*(undefined4 *)(this + 400));
      (**(code **)(**(long **)(this + 0x220) + 0x278))
                (*(long **)(this + 0x220),*(undefined4 *)(this + 0x1b8));
      (**(code **)(**(long **)(this + 0x220) + 0x278))
                (*(long **)(this + 0x220),*(undefined4 *)(this + 0x1b0));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,*(uint *)(this + 0x1b8));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulong *)(this + 0x1b0);
      iVar7 = SUB164(auVar4 / auVar3,0);
      if (iVar7 != -1) {
        iVar13 = 0;
        do {
          (**(code **)(**(long **)(this + 0x220) + 0x278))(*(long **)(this + 0x220),0);
          bVar17 = iVar7 != iVar13;
          iVar13 = iVar13 + 1;
        } while (bVar17);
        local_60[0] = 0;
        iVar13 = 0;
        do {
          lVar14 = local_60[0];
          uVar1 = *(uint *)(this + 0x1b8);
          uVar12 = (ulong)uVar1;
          if (iVar7 == iVar13) {
            uVar12 = *(ulong *)(this + 0x1b0) % (ulong)uVar1;
          }
          local_50[0] = 0;
          lVar16 = *(long *)(this + 0x1a0);
          iVar8 = Compression::get_max_compressed_buffer_size(uVar12,*(undefined4 *)(this + 400));
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,(long)iVar8);
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
          lVar5 = local_50[0];
          uVar9 = Compression::compress(local_50[0],(ulong)(uVar1 * iVar13) + lVar16,uVar12);
          (**(code **)(**(long **)(this + 0x220) + 0x2d0))(*(long **)(this + 0x220),lVar5);
          if (lVar14 == 0) {
            lVar14 = 1;
          }
          else {
            lVar14 = *(long *)(lVar14 + -8) + 1;
          }
          iVar8 = CowData<int>::resize<false>((CowData<int> *)local_60,lVar14);
          if (iVar8 == 0) {
            if (local_60[0] == 0) {
              lVar16 = -1;
              lVar14 = 0;
            }
            else {
              lVar14 = *(long *)(local_60[0] + -8);
              lVar16 = lVar14 + -1;
              if (-1 < lVar16) {
                CowData<int>::_copy_on_write((CowData<int> *)local_60);
                *(undefined4 *)(local_60[0] + lVar16 * 4) = uVar9;
                goto LAB_00101ef5;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar14,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_00101ef5:
          if (lVar5 != 0) {
            LOCK();
            plVar15 = (long *)(lVar5 + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              Memory::free_static((void *)(local_50[0] + -0x10),false);
            }
          }
          lVar14 = local_60[0];
          bVar17 = iVar7 != iVar13;
          iVar13 = iVar13 + 1;
        } while (bVar17);
        (**(code **)(**(long **)(this + 0x220) + 0x1b8))(*(long **)(this + 0x220),0x10);
        plVar15 = *(long **)(this + 0x220);
        pcVar11 = *(code **)(*plVar15 + 0x278);
        if (lVar14 == 0) {
          uVar12 = 0;
          lVar16 = 0;
        }
        else {
          uVar12 = 0;
          while (lVar16 = *(long *)(lVar14 + -8), (long)uVar12 < lVar16) {
            (*pcVar11)(plVar15,*(undefined4 *)(lVar14 + uVar12 * 4));
            plVar15 = *(long **)(this + 0x220);
            if ((SUB168(auVar4 / auVar3,0) & 0xffffffff) == uVar12) {
              (**(code **)(*plVar15 + 0x1c0))(plVar15,0);
              plVar15 = *(long **)(this + 0x220);
              pcVar11 = *(code **)(*plVar15 + 0x2d0);
              if (local_70 != 0) goto LAB_00102061;
              uVar10 = CharString::get_data();
              (*pcVar11)(plVar15,uVar10,0);
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x218),0);
              goto LAB_0010209f;
            }
            pcVar11 = *(code **)(*plVar15 + 0x278);
            uVar12 = uVar12 + 1;
          }
        }
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar16,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      local_60[0] = 0;
      (**(code **)(**(long **)(this + 0x220) + 0x1b8))
                (*(long **)(this + 0x220),0x10,
                 *(ulong *)(this + 0x1b0) % CONCAT44(0,*(uint *)(this + 0x1b8)));
      (**(code **)(**(long **)(this + 0x220) + 0x1c0))(*(long **)(this + 0x220),0);
      plVar15 = *(long **)(this + 0x220);
      pcVar11 = *(code **)(*plVar15 + 0x2d0);
      if (local_70 == 0) {
        uVar10 = CharString::get_data();
        (*pcVar11)(plVar15,uVar10,0);
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x218),0);
      }
      else {
        lVar14 = 0;
LAB_00102061:
        iVar7 = (int)*(undefined8 *)(local_70 + -8);
        lVar16 = (long)(iVar7 + -1);
        if (iVar7 == 0) {
          lVar16 = 0;
        }
        uVar10 = CharString::get_data();
        (*pcVar11)(plVar15,uVar10,lVar16);
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x218),0);
        if (lVar14 != 0) {
LAB_0010209f:
          LOCK();
          plVar15 = (long *)(lVar14 + -0x10);
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            Memory::free_static((void *)(local_60[0] + -0x10),false);
          }
        }
      }
      if (local_70 != 0) {
        LOCK();
        plVar15 = (long *)(local_70 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          Memory::free_static((void *)(local_70 + -0x10),false);
        }
      }
    }
    if ((*(long *)(this + 0x220) != 0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
      pOVar2 = *(Object **)(this + 0x220);
      cVar6 = predelete_handler(pOVar2);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    *(undefined8 *)(this + 0x220) = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FileAccessCompressed::open_internal(String const&, int) */

int __thiscall
FileAccessCompressed::open_internal(FileAccessCompressed *this,String *param_1,int param_2)

{
  CowData<unsigned_char> *this_00;
  Object *pOVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  int local_44;
  Object *local_40;
  char local_35 [4];
  undefined1 local_31;
  long local_30;
  
  iVar3 = local_44;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 3) {
    iVar3 = 2;
    _err_print_error("open_internal","core/io/file_access_compressed.cpp",0x4f,
                     "Condition \"p_mode_flags == READ_WRITE\" is true. Returning: ERR_UNAVAILABLE",
                     0,0);
    goto LAB_00102483;
  }
  _close(this);
  FileAccess::open((String *)&local_40,(int)param_1,(Error *)(ulong)(uint)param_2);
  pOVar1 = *(Object **)(this + 0x220);
  pOVar4 = pOVar1;
  if (local_40 == pOVar1) {
LAB_00102343:
    if (((pOVar4 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar1 = local_40, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_40), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  else {
    *(Object **)(this + 0x220) = local_40;
    if (local_40 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x220) = 0;
      }
      pOVar4 = local_40;
      if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x001023f3;
      }
      goto LAB_00102343;
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
joined_r0x001023f3:
      pOVar4 = local_40;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), pOVar4 = local_40, cVar2 != '\0'))
      {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        pOVar4 = local_40;
      }
      goto LAB_00102343;
    }
  }
  if (local_44 == 0) {
    if ((param_2 & 2U) == 0) {
      (**(code **)(**(long **)(this + 0x220) + 0x220))(*(long **)(this + 0x220),local_35,4);
      local_31 = 0;
      local_44 = 0xf;
      cVar2 = String::operator!=((String *)(this + 0x208),local_35);
      if (cVar2 == '\0') {
        pOVar1 = *(Object **)(this + 0x220);
        if ((pOVar1 == (Object *)0x0) ||
           (local_40 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          local_40 = (Object *)0x0;
          local_44 = open_after_magic(this);
          if (local_44 == 0) goto LAB_00102483;
        }
        else {
          local_44 = open_after_magic(this);
          if (local_44 == 0) {
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
            goto LAB_00102483;
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      if ((*(long *)(this + 0x220) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        pOVar1 = *(Object **)(this + 0x220);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      *(undefined8 *)(this + 0x220) = 0;
      iVar3 = local_44;
    }
    else {
      this_00 = (CowData<unsigned_char> *)(this + 0x218);
      CowData<unsigned_char>::resize<false>(this_00,0);
      this[0x194] = (FileAccessCompressed)0x1;
      *(undefined8 *)(this + 0x198) = 0;
      *(undefined4 *)(this + 0x1a8) = 0x100;
      CowData<unsigned_char>::resize<false>(this_00,0x100);
      *(undefined8 *)(this + 0x1b0) = 0;
      CowData<unsigned_char>::_copy_on_write(this_00);
      *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(this + 0x218);
    }
  }
  else {
    if ((*(long *)(this + 0x220) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
      pOVar1 = *(Object **)(this + 0x220);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    *(undefined8 *)(this + 0x220) = 0;
  }
LAB_00102483:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessCompressed::close() */

void __thiscall FileAccessCompressed::close(FileAccessCompressed *this)

{
  _close(this);
  return;
}



/* FileAccessCompressed::~FileAccessCompressed() */

void __thiscall FileAccessCompressed::~FileAccessCompressed(FileAccessCompressed *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00104d80;
  _close(this);
  if (*(long *)(this + 0x220) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x220);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x218) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x218) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x218);
      *(undefined8 *)(this + 0x218) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x208) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x208) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x208);
      *(undefined8 *)(this + 0x208) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x1f8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c8);
      *(undefined8 *)(this + 0x1c8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      FileAccess::~FileAccess((FileAccess *)this);
      return;
    }
  }
  FileAccess::~FileAccess((FileAccess *)this);
  return;
}



/* FileAccessCompressed::~FileAccessCompressed() */

void __thiscall FileAccessCompressed::~FileAccessCompressed(FileAccessCompressed *this)

{
  ~FileAccessCompressed(this);
  operator_delete(this,0x228);
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
  return (uint)CONCAT71(0x1050,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1050,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1050,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* FileAccessCompressed::resize(long) */

undefined8 FileAccessCompressed::resize(long param_1)

{
  return 2;
}



/* CowData<FileAccessCompressed::ReadBlock>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FileAccessCompressed::ReadBlock>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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
LAB_00102f23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102f23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
      goto LAB_00102f8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
LAB_00102f8e:
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
  if (initialize_class()::initialized != '\0') goto LAB_00103230;
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
LAB_0010333e:
      if ((code *)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
LAB_0010334e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010333e;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00107010 != RefCounted::_bind_methods) goto LAB_0010334e;
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
  if ((code *)PTR__bind_compatibility_methods_00107008 != Object::_bind_compatibility_methods) {
    FileAccess::_bind_compatibility_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00103230:
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
            if (lVar5 == 0) goto LAB_0010342f;
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
LAB_0010342f:
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
    if (cVar6 != '\0') goto LAB_001034e3;
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
              if (lVar5 == 0) goto LAB_001035bb;
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
LAB_001035bb:
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
      if (cVar6 != '\0') goto LAB_001034e3;
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
                if (lVar5 == 0) goto LAB_0010369b;
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
LAB_0010369b:
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
        if (cVar6 != '\0') goto LAB_001034e3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00103744;
    }
  }
LAB_001034e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103744:
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
LAB_001038b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001038b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001038d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001038d6:
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
LAB_00103cb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103cb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103cd5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103cd5:
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



/* WARNING: Removing unreachable block (ram,0x00104118) */
/* WARNING: Removing unreachable block (ram,0x00104248) */
/* WARNING: Removing unreachable block (ram,0x00104410) */
/* WARNING: Removing unreachable block (ram,0x00104254) */
/* WARNING: Removing unreachable block (ram,0x0010425e) */
/* WARNING: Removing unreachable block (ram,0x001043f0) */
/* WARNING: Removing unreachable block (ram,0x0010426a) */
/* WARNING: Removing unreachable block (ram,0x00104274) */
/* WARNING: Removing unreachable block (ram,0x001043d0) */
/* WARNING: Removing unreachable block (ram,0x00104280) */
/* WARNING: Removing unreachable block (ram,0x0010428a) */
/* WARNING: Removing unreachable block (ram,0x001043b0) */
/* WARNING: Removing unreachable block (ram,0x00104296) */
/* WARNING: Removing unreachable block (ram,0x001042a0) */
/* WARNING: Removing unreachable block (ram,0x00104390) */
/* WARNING: Removing unreachable block (ram,0x001042ac) */
/* WARNING: Removing unreachable block (ram,0x001042b6) */
/* WARNING: Removing unreachable block (ram,0x00104370) */
/* WARNING: Removing unreachable block (ram,0x001042c2) */
/* WARNING: Removing unreachable block (ram,0x001042cc) */
/* WARNING: Removing unreachable block (ram,0x00104350) */
/* WARNING: Removing unreachable block (ram,0x001042d4) */
/* WARNING: Removing unreachable block (ram,0x001042ea) */
/* WARNING: Removing unreachable block (ram,0x001042f6) */
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
LAB_001046be:
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
    if (lVar9 == 0) goto LAB_001046be;
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
        goto LAB_001045fc;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_001045fc:
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



/* CowData<FileAccessCompressed::ReadBlock>::_realloc(long) */

undefined8 __thiscall
CowData<FileAccessCompressed::ReadBlock>::_realloc
          (CowData<FileAccessCompressed::ReadBlock> *this,long param_1)

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
/* Error CowData<FileAccessCompressed::ReadBlock>::resize<false>(long) */

undefined8 __thiscall
CowData<FileAccessCompressed::ReadBlock>::resize<false>
          (CowData<FileAccessCompressed::ReadBlock> *this,long param_1)

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
    lVar3 = lVar9 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00104a00:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00104a00;
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
        goto LAB_00104911;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00104911:
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
LAB_00104ce0:
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
  if (lVar8 == 0) goto LAB_00104ce0;
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
        goto LAB_00104bf1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00104bf1:
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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


