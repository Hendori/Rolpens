
/* FileAccessPack::is_open() const */

undefined8 __thiscall FileAccessPack::is_open(FileAccessPack *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x1e0) + 0x1a0))();
    return uVar1;
  }
  return 0;
}



/* FileAccessPack::get_position() const */

undefined8 __thiscall FileAccessPack::get_position(FileAccessPack *this)

{
  return *(undefined8 *)(this + 0x1c8);
}



/* FileAccessPack::get_length() const */

undefined8 __thiscall FileAccessPack::get_length(FileAccessPack *this)

{
  return *(undefined8 *)(this + 0x1a0);
}



/* FileAccessPack::eof_reached() const */

FileAccessPack __thiscall FileAccessPack::eof_reached(FileAccessPack *this)

{
  return this[0x1d0];
}



/* FileAccessPack::get_error() const */

byte __thiscall FileAccessPack::get_error(FileAccessPack *this)

{
  return -(this[0x1d0] != (FileAccessPack)0x0) & 0x12;
}



/* FileAccessPack::file_exists(String const&) */

undefined8 FileAccessPack::file_exists(String *param_1)

{
  return 0;
}



/* DirAccessPack::current_is_dir() const */

DirAccessPack __thiscall DirAccessPack::current_is_dir(DirAccessPack *this)

{
  return this[0x1a8];
}



/* DirAccessPack::current_is_hidden() const */

undefined8 DirAccessPack::current_is_hidden(void)

{
  return 0;
}



/* DirAccessPack::get_drive_count() */

undefined8 DirAccessPack::get_drive_count(void)

{
  return 0;
}



/* DirAccessPack::remove(String) */

undefined8 DirAccessPack::remove(void)

{
  return 2;
}



/* DirAccessPack::rename(String, String) */

undefined8 DirAccessPack::rename(void)

{
  return 2;
}



/* DirAccessPack::get_space_left() */

undefined8 DirAccessPack::get_space_left(void)

{
  return 0;
}



/* FileAccessPack::open_internal(String const&, int) */

undefined8 FileAccessPack::open_internal(String *param_1,int param_2)

{
  _err_print_error("open_internal","core/io/file_access_pack.cpp",0x175,
                   "Can\'t open pack-referenced file.",0,0);
  return 2;
}



/* FileAccessPack::flush() */

void FileAccessPack::flush(void)

{
  _err_print_error("flush","core/io/file_access_pack.cpp",0x1c5,"Method/function failed.",0,0);
  return;
}



/* FileAccessPack::store_buffer(unsigned char const*, unsigned long) */

undefined8 FileAccessPack::store_buffer(uchar *param_1,ulong param_2)

{
  _err_print_error("store_buffer","core/io/file_access_pack.cpp",0x1c9,
                   "Method/function failed. Returning: false",0,0);
  return 0;
}



/* FileAccessPack::get_buffer(unsigned char*, unsigned long) const */

ulong __thiscall FileAccessPack::get_buffer(FileAccessPack *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = *(long **)(this + 0x1e0);
  if (plVar2 == (long *)0x0) {
    _err_print_error("get_buffer","core/io/file_access_pack.cpp",0x19f,
                     "Condition \"f.is_null()\" is true. Returning: -1",
                     "File must be opened before use.",0,0);
  }
  else {
    if ((param_1 != (uchar *)0x0) || (param_2 == 0)) {
      if (this[0x1d0] != (FileAccessPack)0x0) {
        return 0;
      }
      uVar3 = *(ulong *)(this + 0x1a0);
      uVar1 = *(long *)(this + 0x1c8) + param_2;
      if (uVar3 < uVar1) {
        this[0x1d0] = (FileAccessPack)0x1;
        param_2 = uVar3 - *(long *)(this + 0x1c8);
        *(ulong *)(this + 0x1c8) = uVar3;
        if ((long)param_2 < 1) {
          return 0;
        }
      }
      else {
        *(ulong *)(this + 0x1c8) = uVar1;
        if ((long)param_2 < 1) {
          return 0;
        }
      }
      (**(code **)(*plVar2 + 0x220))(plVar2,param_1,param_2);
      return param_2;
    }
    _err_print_error("get_buffer","core/io/file_access_pack.cpp",0x1a0,
                     "Condition \"!p_dst && p_length > 0\" is true. Returning: -1",0,0);
  }
  return 0xffffffffffffffff;
}



/* PackedSourceDirectory::get_file(String const&, PackedData::PackedFile*) */

PackedSourceDirectory * __thiscall
PackedSourceDirectory::get_file(PackedSourceDirectory *this,String *param_1,PackedFile *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::create_for_path((String *)this);
  (**(code **)(**(long **)this + 0x2e8))(*(long **)this,param_2,1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessPack::seek(unsigned long) */

undefined8 __thiscall FileAccessPack::seek(FileAccessPack *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(this + 0x1e0);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    this[0x1d0] = (FileAccessPack)(*(ulong *)(this + 0x1a0) < param_1);
    uVar3 = (**(code **)(lVar2 + 0x1b8))(plVar1,*(long *)(this + 0x1d8) + param_1);
    *(ulong *)(this + 0x1c8) = param_1;
    return uVar3;
  }
  _err_print_error(&_LC12,"core/io/file_access_pack.cpp",0x182,"Condition \"f.is_null()\" is true.",
                   "File must be opened before use.",0);
  return 0;
}



/* FileAccessPack::set_big_endian(bool) */

void __thiscall FileAccessPack::set_big_endian(FileAccessPack *this,bool param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x1e0);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    this[0x17c] = (FileAccessPack)param_1;
                    /* WARNING: Could not recover jumptable at 0x001003b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x248))(plVar1,param_1,*(code **)(lVar2 + 0x248));
    return;
  }
  _err_print_error("set_big_endian","core/io/file_access_pack.cpp",0x1b7,
                   "Condition \"f.is_null()\" is true.","File must be opened before use.",0,0);
  return;
}



/* CowData<PackSource*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<PackSource*>::_copy_on_write(CowData<PackSource*> *this)

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
  __n = lVar2 * 8;
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



/* FileAccessPack::close() */

void __thiscall FileAccessPack::close(FileAccessPack *this)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)(this + 0x1e0);
  if (pOVar1 != (Object *)0x0) {
    *(undefined8 *)(this + 0x1e0) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* FileAccessPack::seek_end(long) */

undefined8 __thiscall FileAccessPack::seek_end(FileAccessPack *this,long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  uVar1 = param_1 + *(ulong *)(this + 0x1a0);
  if (*(code **)(*(long *)this + 0x1b8) == seek) {
    plVar2 = *(long **)(this + 0x1e0);
    if (plVar2 == (long *)0x0) {
      uStack_28 = 0;
      _err_print_error(&_LC12,"core/io/file_access_pack.cpp",0x182,
                       "Condition \"f.is_null()\" is true.","File must be opened before use.",0);
    }
    else {
      lVar3 = *plVar2;
      this[0x1d0] = (FileAccessPack)(*(ulong *)(this + 0x1a0) < uVar1);
      uStack_28 = (**(code **)(lVar3 + 0x1b8))(plVar2,*(long *)(this + 0x1d8) + uVar1);
      *(ulong *)(this + 0x1c8) = uVar1;
    }
    return uStack_28;
  }
                    /* WARNING: Could not recover jumptable at 0x001005f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)this + 0x1b8))(this,uVar1);
  return uVar4;
}



/* DirAccessPack::get_filesystem_type() const */

DirAccessPack * __thiscall DirAccessPack::get_filesystem_type(DirAccessPack *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessPack::get_drive(int) */

undefined8 DirAccessPack::get_drive(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
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



/* DirAccessPack::get_current_dir(bool) const */

DirAccessPack * __thiscall DirAccessPack::get_current_dir(DirAccessPack *this,bool param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  bool bVar5;
  long local_40;
  long local_38;
  long local_30;
  
  puVar2 = *(undefined8 **)(CONCAT71(in_register_00000031,param_1) + 400);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  if (puVar2[1] != 0) {
    plVar1 = (long *)(puVar2[1] + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001007d0;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_40 = puVar2[1];
    }
  }
LAB_001007d0:
  puVar2 = (undefined8 *)*puVar2;
  do {
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        operator+((char *)this,(String *)"res://");
        if (local_40 != 0) {
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_40 + -0x10),false);
          }
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return this;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      String::path_join((String *)&local_38);
      lVar3 = local_38;
      if (local_40 != local_38) break;
      if (local_40 == 0) goto LAB_00100820;
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00100820;
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      puVar2 = (undefined8 *)*puVar2;
    }
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_40 + -0x10),false);
      }
    }
    local_40 = local_38;
LAB_00100820:
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



/* DirAccessPack::list_dir_end() */

void __thiscall DirAccessPack::list_dir_end(DirAccessPack *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x198);
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      if (plVar2 == (long *)0x0) goto LAB_00100981;
      if ((long *)plVar2[3] == plVar5) {
        lVar4 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar5 = lVar4;
        if (plVar2 == (long *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = plVar2[1];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x198);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
    *(undefined8 *)(this + 0x198) = 0;
  }
LAB_00100981:
  plVar5 = *(long **)(this + 0x1a0);
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      if (plVar2 == (long *)0x0) {
        return;
      }
      if (plVar5 == (long *)plVar2[3]) {
        lVar4 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar5 = lVar4;
        if (plVar2 == (long *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = plVar2[1];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x1a0);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
    *(undefined8 *)(this + 0x1a0) = 0;
  }
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



/* DirAccessPack::list_dir_begin() */

undefined8 __thiscall DirAccessPack::list_dir_begin(DirAccessPack *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  CowData<char32_t> *pCVar7;
  long *plVar8;
  CowData *pCVar9;
  int iVar10;
  
  plVar8 = *(long **)(this + 0x198);
  if (plVar8 != (long *)0x0) {
    do {
      plVar3 = (long *)*plVar8;
      if (plVar3 == (long *)0x0) goto LAB_00100c92;
      if ((long *)plVar3[3] == plVar8) {
        lVar5 = plVar3[1];
        lVar4 = plVar3[2];
        *plVar8 = lVar5;
        if (plVar3 == (long *)plVar8[1]) {
          plVar8[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar5;
          lVar5 = plVar3[1];
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar4;
        }
        if (*plVar3 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar3;
            *plVar3 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        Memory::free_static(plVar3,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(this + 0x198);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
    *(undefined8 *)(this + 0x198) = 0;
  }
LAB_00100c92:
  plVar8 = *(long **)(this + 0x1a0);
  if (plVar8 != (long *)0x0) {
    do {
      plVar3 = (long *)*plVar8;
      if (plVar3 == (long *)0x0) goto LAB_00100d2f;
      if ((long *)plVar3[3] == plVar8) {
        lVar5 = plVar3[1];
        lVar4 = plVar3[2];
        *plVar8 = lVar5;
        if (plVar3 == (long *)plVar8[1]) {
          plVar8[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar5;
          lVar5 = plVar3[1];
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar4;
        }
        if (*plVar3 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar3;
            *plVar3 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        Memory::free_static(plVar3,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(this + 0x1a0);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
    *(undefined8 *)(this + 0x1a0) = 0;
  }
LAB_00100d2f:
  lVar5 = *(long *)(this + 400);
  plVar8 = *(long **)(lVar5 + 0x28);
  if (plVar8 != (long *)0x0) {
    if (*(long *)(this + 0x198) == 0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0x198) = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        pCVar7 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])pCVar7 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pCVar7 + 0x10) = (undefined1  [16])0x0;
        if (plVar8[2] != 0) {
          CowData<char32_t>::_ref(pCVar7,(CowData *)(plVar8 + 2));
        }
        plVar3 = *(long **)(this + 0x198);
        lVar5 = plVar3[1];
        *(undefined8 *)(pCVar7 + 8) = 0;
        *(long **)(pCVar7 + 0x18) = plVar3;
        *(long *)(pCVar7 + 0x10) = lVar5;
        if (lVar5 != 0) {
          *(CowData<char32_t> **)(lVar5 + 8) = pCVar7;
        }
        plVar3[1] = (long)pCVar7;
        if (*plVar3 == 0) break;
        plVar8 = (long *)*plVar8;
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        if (plVar8 == (long *)0x0) goto LAB_00100dfb;
      }
      plVar8 = (long *)*plVar8;
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      *plVar3 = (long)pCVar7;
    } while (plVar8 != (long *)0x0);
LAB_00100dfb:
    lVar5 = *(long *)(this + 400);
  }
  iVar2 = *(int *)(lVar5 + 100);
  if (iVar2 != 0) {
    plVar8 = *(long **)(this + 0x1a0);
    pCVar9 = *(CowData **)(lVar5 + 0x40);
    iVar10 = 1;
    while( true ) {
      if (plVar8 == (long *)0x0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0x1a0) = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      pCVar7 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar7 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar7 + 0x10) = (undefined1  [16])0x0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref(pCVar7,pCVar9);
      }
      plVar8 = *(long **)(this + 0x1a0);
      lVar5 = plVar8[1];
      *(undefined8 *)(pCVar7 + 8) = 0;
      *(long **)(pCVar7 + 0x18) = plVar8;
      *(long *)(pCVar7 + 0x10) = lVar5;
      if (lVar5 != 0) {
        *(CowData<char32_t> **)(lVar5 + 8) = pCVar7;
      }
      plVar8[1] = (long)pCVar7;
      if (*plVar8 == 0) {
        *plVar8 = (long)pCVar7;
      }
      *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
      if (iVar2 <= iVar10) break;
      iVar10 = iVar10 + 1;
      pCVar9 = pCVar9 + 8;
    }
  }
  return 0;
}



/* DirAccessPack::get_next() */

void DirAccessPack::get_next(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_RSI;
  long *in_RDI;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  plVar4 = *(long **)(in_RSI + 0x198);
  if ((plVar4 == (long *)0x0) || ((int)plVar4[2] == 0)) {
    plVar4 = *(long **)(in_RSI + 0x1a0);
    if ((plVar4 == (long *)0x0) || ((int)plVar4[2] == 0)) {
      *in_RDI = 0;
      return;
    }
    plVar6 = (long *)*plVar4;
    *(undefined1 *)(in_RSI + 0x1a8) = 0;
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + -0x10);
      do {
        lVar5 = *plVar4;
        if (lVar5 == 0) goto LAB_00101150;
        LOCK();
        lVar3 = *plVar4;
        bVar7 = lVar5 == lVar3;
        if (bVar7) {
          *plVar4 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar3 == -1) {
LAB_00101150:
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar6;
      }
      plVar4 = *(long **)(in_RSI + 0x1a0);
      if ((plVar4 == (long *)0x0) || (plVar6 = (long *)*plVar4, plVar6 == (long *)0x0))
      goto LAB_0010101d;
    }
    if (plVar4 == (long *)plVar6[3]) {
      lVar3 = plVar6[1];
      lVar2 = plVar6[2];
      *plVar4 = lVar3;
      if (plVar6 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar6[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if (*plVar6 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar6;
          *plVar6 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(plVar6,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(in_RSI + 0x1a0) + 0x10) == 0) {
      Memory::free_static(*(void **)(in_RSI + 0x1a0),false);
      *(undefined8 *)(in_RSI + 0x1a0) = 0;
    }
  }
  else {
    plVar6 = (long *)*plVar4;
    *(undefined1 *)(in_RSI + 0x1a8) = 1;
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + -0x10);
      do {
        lVar5 = *plVar4;
        if (lVar5 == 0) goto LAB_00101148;
        LOCK();
        lVar3 = *plVar4;
        bVar7 = lVar5 == lVar3;
        if (bVar7) {
          *plVar4 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar3 == -1) {
LAB_00101148:
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar6;
      }
      plVar4 = *(long **)(in_RSI + 0x198);
      if ((plVar4 == (long *)0x0) || (plVar6 = (long *)*plVar4, plVar6 == (long *)0x0))
      goto LAB_0010101d;
    }
    if ((long *)plVar6[3] == plVar4) {
      lVar3 = plVar6[1];
      lVar2 = plVar6[2];
      *plVar4 = lVar3;
      if ((long *)plVar4[1] == plVar6) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar6[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if (*plVar6 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar6;
          *plVar6 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(plVar6,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(in_RSI + 0x198) + 0x10) == 0) {
      Memory::free_static(*(void **)(in_RSI + 0x198),false);
      *(undefined8 *)(in_RSI + 0x198) = 0;
    }
  }
LAB_0010101d:
  *in_RDI = lVar5;
  return;
}



/* PackedData::add_pack(String const&, bool, unsigned long) */

undefined8 __thiscall
PackedData::add_pack(PackedData *this,String *param_1,bool param_2,ulong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x38);
  if (lVar3 == 0) {
    return 0xf;
  }
  lVar4 = 0;
  while( true ) {
    if (*(long *)(lVar3 + -8) <= lVar4) {
      return 0xf;
    }
    puVar1 = *(undefined8 **)(lVar3 + lVar4 * 8);
    cVar2 = (**(code **)*puVar1)(puVar1,param_1,param_2,param_3);
    if (cVar2 != '\0') break;
    lVar3 = *(long *)(this + 0x38);
    lVar4 = lVar4 + 1;
    if (lVar3 == 0) {
      return 0xf;
    }
  }
  return 0;
}



/* PackedData::get_file_hash(String const&) */

long PackedData::get_file_hash(String *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::simplify_path();
  String::trim_prefix((char *)&local_60);
  lVar20 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
    }
  }
  String::md5_buffer();
  plVar1 = local_50;
  if (local_50 == (long *)0x0) {
    lVar20 = 0;
  }
  else {
    lVar20 = local_50[-1];
    if (0 < lVar20) {
      lVar15 = *local_50;
      if (8 < lVar20) {
        lVar20 = local_50[1];
        LOCK();
        plVar2 = local_50 + -2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = (long *)0x0;
          Memory::free_static(plVar1 + -2,false);
        }
        lVar13 = local_60;
        lVar19 = *(long *)(param_1 + 8);
        if (lVar19 != 0) {
          if (*(int *)(param_1 + 0x2c) != 0) {
            uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_1 + 0x28) * 4));
            uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
            iVar22 = (int)lVar15;
            iVar23 = (int)lVar20;
            uVar14 = (iVar22 * 0x16a88000 | (uint)(iVar22 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                     0x7f07c65;
            uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64 ^
                     (iVar23 * 0x16a88000 | (uint)(iVar23 * -0x3361d2af) >> 0x11) * 0x1b873593;
            uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
            uVar14 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
            uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
            uVar24 = uVar14 ^ uVar14 >> 0x10;
            if (uVar14 == uVar14 >> 0x10) {
              uVar24 = 1;
              uVar17 = uVar3;
            }
            else {
              uVar17 = uVar24 * uVar3;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar25;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar18 = SUB168(auVar4 * auVar8,8);
            uVar14 = *(uint *)(*(long *)(param_1 + 0x10) + lVar18 * 4);
            uVar16 = SUB164(auVar4 * auVar8,8);
            if (uVar14 != 0) {
              uVar21 = 0;
              do {
                if (((uVar24 == uVar14) &&
                    (lVar18 = *(long *)(lVar19 + lVar18 * 8), *(long *)(lVar18 + 0x10) == lVar15))
                   && (*(long *)(lVar18 + 0x18) == lVar20)) {
                  lVar19 = *(long *)(lVar19 + (ulong)uVar16 * 8);
                  if (lVar19 != 0) {
                    lVar19 = lVar19 + 0x38;
                  }
                  if (local_60 == 0) goto LAB_001014b8;
                  goto LAB_001014ec;
                }
                uVar21 = uVar21 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (uVar16 + 1) * uVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar25;
                lVar18 = SUB168(auVar5 * auVar9,8);
                uVar14 = *(uint *)(*(long *)(param_1 + 0x10) + lVar18 * 4);
                uVar16 = SUB164(auVar5 * auVar9,8);
              } while ((uVar14 != 0) &&
                      (auVar6._8_8_ = 0, auVar6._0_8_ = uVar14 * uVar3, auVar10._8_8_ = 0,
                      auVar10._0_8_ = uVar25, auVar7._8_8_ = 0,
                      auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(param_1 + 0x28) * 4) + uVar16) -
                                     SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
                      auVar11._0_8_ = uVar25, uVar21 <= SUB164(auVar7 * auVar11,8)));
            }
          }
          lVar19 = 0;
        }
        if (local_60 != 0) {
LAB_001014ec:
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
LAB_001014b8:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return lVar19;
      }
      lVar15 = 8;
      goto LAB_00101570;
    }
  }
  lVar15 = 0;
LAB_00101570:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar20,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* DirAccessPack::DirAccessPack() */

void __thiscall DirAccessPack::DirAccessPack(DirAccessPack *this)

{
  undefined8 uVar1;
  long lVar2;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x17c) = 2;
  *(undefined ***)this = &PTR__initialize_classv_0010b558;
  lVar2 = PackedData::singleton;
  *(undefined8 *)(this + 0x188) = 0;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  this[0x1a8] = (DirAccessPack)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 400) = uVar1;
  return;
}



/* PackedData::_get_file_paths(PackedData::PackedDir*, String const&, HashSet<String,
   HashMapHasherDefault, HashMapComparatorDefault<String> >&) const */

void __thiscall
PackedData::_get_file_paths(PackedData *this,PackedDir *param_1,String *param_2,HashSet *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_60;
  long local_58 [3];
  long local_40;
  
  iVar2 = *(int *)(param_1 + 100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar2 != 0) {
    iVar5 = 1;
    while( true ) {
      String::path_join((String *)&local_60);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                ((String *)local_58);
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
      if (iVar2 <= iVar5) break;
      iVar5 = iVar5 + 1;
    }
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x28); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    String::path_join((String *)local_58);
    _get_file_paths(this,(PackedDir *)puVar3[3],(String *)local_58,param_3);
    lVar4 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_58[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58[0] = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PackedData::get_file_paths() const */

void PackedData::get_file_paths(void)

{
  PackedDir *pPVar1;
  PackedData *in_RSI;
  HashSet *in_RDI;
  
  *(undefined1 (*) [16])in_RDI = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x10) = (undefined1  [16])0x0;
  pPVar1 = *(PackedDir **)(in_RSI + 0x40);
  *(undefined8 *)(in_RDI + 0x20) = 2;
  _get_file_paths(in_RSI,pPVar1,(String *)(pPVar1 + 8),in_RDI);
  return;
}



/* PackedData::_free_packed_dirs(PackedData::PackedDir*) */

void __thiscall PackedData::_free_packed_dirs(PackedData *this,PackedDir *param_1)

{
  undefined8 *puVar1;
  PackedDir *pPVar2;
  undefined8 *puVar3;
  PackedDir *pPVar4;
  undefined8 *puVar5;
  PackedDir *pPVar6;
  undefined8 *puVar7;
  PackedDir *pPVar8;
  undefined8 *puVar9;
  PackedDir *pPVar10;
  undefined8 *puVar11;
  PackedDir *pPVar12;
  undefined8 *puVar13;
  PackedDir *pPVar14;
  undefined8 *puVar15;
  PackedDir *pPVar16;
  undefined8 *puVar17;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    pPVar2 = (PackedDir *)puVar1[3];
    for (puVar3 = *(undefined8 **)(pPVar2 + 0x28); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      pPVar4 = (PackedDir *)puVar3[3];
      for (puVar5 = *(undefined8 **)(pPVar4 + 0x28); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        pPVar6 = (PackedDir *)puVar5[3];
        for (puVar7 = *(undefined8 **)(pPVar6 + 0x28); puVar7 != (undefined8 *)0x0;
            puVar7 = (undefined8 *)*puVar7) {
          pPVar8 = (PackedDir *)puVar7[3];
          for (puVar9 = *(undefined8 **)(pPVar8 + 0x28); puVar9 != (undefined8 *)0x0;
              puVar9 = (undefined8 *)*puVar9) {
            pPVar10 = (PackedDir *)puVar9[3];
            for (puVar11 = *(undefined8 **)(pPVar10 + 0x28); puVar11 != (undefined8 *)0x0;
                puVar11 = (undefined8 *)*puVar11) {
              pPVar12 = (PackedDir *)puVar11[3];
              for (puVar13 = *(undefined8 **)(pPVar12 + 0x28); puVar13 != (undefined8 *)0x0;
                  puVar13 = (undefined8 *)*puVar13) {
                pPVar14 = (PackedDir *)puVar13[3];
                for (puVar15 = *(undefined8 **)(pPVar14 + 0x28); puVar15 != (undefined8 *)0x0;
                    puVar15 = (undefined8 *)*puVar15) {
                  pPVar16 = (PackedDir *)puVar15[3];
                  for (puVar17 = *(undefined8 **)(pPVar16 + 0x28); puVar17 != (undefined8 *)0x0;
                      puVar17 = (undefined8 *)*puVar17) {
                    _free_packed_dirs(this,(PackedDir *)puVar17[3]);
                  }
                  memdelete<PackedData::PackedDir>(pPVar16);
                }
                memdelete<PackedData::PackedDir>(pPVar14);
              }
              memdelete<PackedData::PackedDir>(pPVar12);
            }
            memdelete<PackedData::PackedDir>(pPVar10);
          }
          memdelete<PackedData::PackedDir>(pPVar8);
        }
        memdelete<PackedData::PackedDir>(pPVar6);
      }
      memdelete<PackedData::PackedDir>(pPVar4);
    }
    memdelete<PackedData::PackedDir>(pPVar2);
  }
  memdelete<PackedData::PackedDir>(param_1);
  return;
}



/* PackedData::clear() */

void __thiscall PackedData::clear(PackedData *this)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  PackedDir *pPVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 != 0) {
      lVar9 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar9) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar9) = 0;
          pvVar3 = *(void **)(*(long *)(this + 8) + lVar9 * 2);
          if (*(long *)((long)pvVar3 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar3 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar3 + 0x20);
              *(undefined8 *)((long)pvVar3 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 8) + lVar9 * 2) = 0;
        }
        lVar9 = lVar9 + 4;
      } while ((ulong)uVar2 << 2 != lVar9);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  }
  pPVar5 = *(PackedDir **)(this + 0x40);
  for (puVar6 = *(undefined8 **)(pPVar5 + 0x28); puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)*puVar6) {
    _free_packed_dirs(this,(PackedDir *)puVar6[3]);
  }
  memdelete<PackedData::PackedDir>(pPVar5);
  pauVar8 = (undefined1 (*) [16])operator_new(0x68,"");
  uVar7 = _LC49;
  *pauVar8 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar8[3] + 8) = uVar7;
  *(undefined8 *)pauVar8[6] = uVar7;
  *(undefined1 (*) [16])(pauVar8[1] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar8[2] + 8) = (undefined1  [16])0x0;
  pauVar8[4] = (undefined1  [16])0x0;
  pauVar8[5] = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(this + 0x40) = pauVar8;
  return;
}



/* PackedData::~PackedData() */

void __thiscall PackedData::~PackedData(PackedData *this)

{
  uint uVar1;
  long *plVar2;
  PackedDir *pPVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  if (singleton == this) {
    singleton = (PackedData *)0x0;
  }
  lVar6 = *(long *)(this + 0x38);
  for (lVar5 = 0; (lVar6 != 0 && (lVar5 < *(long *)(lVar6 + -8))); lVar5 = lVar5 + 1) {
    plVar2 = *(long **)(lVar6 + lVar5 * 8);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    Memory::free_static(plVar2,false);
    lVar6 = *(long *)(this + 0x38);
  }
  pPVar3 = *(PackedDir **)(this + 0x40);
  for (puVar4 = *(undefined8 **)(pPVar3 + 0x28); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    _free_packed_dirs(this,(PackedDir *)puVar4[3]);
  }
  memdelete<PackedData::PackedDir>(pPVar3);
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar6 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  pvVar7 = *(void **)(this + 8);
  if (pvVar7 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar6 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
          pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
          if (*(long *)((long)pvVar7 + 0x20) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)((long)pvVar7 + 0x20) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar5 = *(long *)((long)pvVar7 + 0x20);
              *(undefined8 *)((long)pvVar7 + 0x20) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          Memory::free_static(pvVar7,false);
          pvVar7 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
        }
        lVar6 = lVar6 + 4;
      } while (lVar6 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar7 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar7,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* PackedData::add_path(String const&, String const&, unsigned long, unsigned long, unsigned char
   const*, PackSource*, bool, bool) */

void __thiscall
PackedData::add_path
          (PackedData *this,String *param_1,String *param_2,ulong param_3,ulong param_4,
          uchar *param_5,PackSource *param_6,bool param_7,bool param_8)

{
  long *plVar1;
  long *plVar2;
  String *pSVar3;
  ulong uVar4;
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
  code *pcVar21;
  bool bVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar27) [16];
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined1 (*pauVar39) [16];
  long in_FS_OFFSET;
  bool bVar40;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  PackSource *local_50;
  CowData<char32_t> local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::simplify_path();
  String::trim_prefix((char *)&local_a8);
  lVar30 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar30 + -0x10),false);
    }
  }
  String::md5_buffer();
  plVar1 = local_80;
  local_90 = 0;
  if (local_80 == (long *)0x0) {
    lVar30 = 0;
  }
  else {
    lVar30 = local_80[-1];
    if (0 < lVar30) {
      local_98 = *local_80;
      if (8 < lVar30) {
        local_90 = local_80[1];
        LOCK();
        plVar2 = local_80 + -2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_80 = (long *)0x0;
          Memory::free_static(plVar1 + -2,false);
        }
        local_70 = param_3;
        local_68 = param_4;
        if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
          uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          uVar24 = ((int)local_98 * 0x16a88000 | (uint)((int)local_98 * -0x3361d2af) >> 0x11) *
                   0x1b873593 ^ 0x7f07c65;
          uVar24 = (uVar24 << 0xd | uVar24 >> 0x13) * 5 + 0xe6546b64 ^
                   ((int)local_90 * 0x16a88000 | (uint)((int)local_90 * -0x3361d2af) >> 0x11) *
                   0x1b873593;
          uVar24 = (uVar24 << 0xd | uVar24 >> 0x13) * 5 + 0xe6546b64;
          uVar24 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
          uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
          uVar32 = uVar24 ^ uVar24 >> 0x10;
          if (uVar24 == uVar24 >> 0x10) {
            uVar32 = 1;
            uVar29 = uVar4;
          }
          else {
            uVar29 = uVar32 * uVar4;
          }
          uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4))
          ;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar33;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar29;
          lVar30 = SUB168(auVar5 * auVar13,8);
          uVar24 = *(uint *)(*(long *)(this + 0x10) + lVar30 * 4);
          iVar25 = SUB164(auVar5 * auVar13,8);
          if (uVar24 != 0) {
            uVar26 = 0;
            do {
              if (((uVar32 == uVar24) &&
                  (lVar30 = *(long *)(*(long *)(this + 8) + lVar30 * 8),
                  local_98 == *(long *)(lVar30 + 0x10))) && (local_90 == *(long *)(lVar30 + 0x18)))
              {
                bVar22 = true;
                local_78 = 0;
                lVar30 = *(long *)param_1;
                if (lVar30 == 0) goto LAB_00101fb1;
                goto LAB_00101f7c;
              }
              uVar26 = uVar26 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (iVar25 + 1) * uVar4;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar33;
              lVar30 = SUB168(auVar6 * auVar14,8);
              uVar24 = *(uint *)(*(long *)(this + 0x10) + lVar30 * 4);
              iVar25 = SUB164(auVar6 * auVar14,8);
            } while ((uVar24 != 0) &&
                    (auVar7._8_8_ = 0, auVar7._0_8_ = uVar24 * uVar4, auVar15._8_8_ = 0,
                    auVar15._0_8_ = uVar33, auVar8._8_8_ = 0,
                    auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                              (ulong)*(uint *)(this + 0x28) * 4) + iVar25) -
                                   SUB164(auVar7 * auVar15,8)) * uVar4, auVar16._8_8_ = 0,
                    auVar16._0_8_ = uVar33, uVar26 <= SUB164(auVar8 * auVar16,8)));
          }
        }
        local_78 = 0;
        lVar30 = *(long *)param_1;
        if (lVar30 == 0) {
          bVar22 = false;
          uVar35 = *(undefined8 *)param_5;
          uVar38 = *(undefined8 *)(param_5 + 8);
        }
        else {
          param_7 = true;
          bVar22 = false;
LAB_00101f7c:
          local_78 = 0;
          plVar1 = (long *)(lVar30 + -0x10);
          do {
            lVar30 = *plVar1;
            if (lVar30 == 0) goto LAB_00101fb1;
            LOCK();
            lVar36 = *plVar1;
            bVar40 = lVar30 == lVar36;
            if (bVar40) {
              *plVar1 = lVar30 + 1;
              lVar36 = lVar30;
            }
            UNLOCK();
          } while (!bVar40);
          if (lVar36 != -1) {
            local_78 = *(long *)param_1;
          }
LAB_00101fb1:
          local_48 = (CowData<char32_t>)param_8;
          uVar35 = *(undefined8 *)param_5;
          uVar38 = *(undefined8 *)(param_5 + 8);
          local_50 = param_6;
          lVar30 = local_78;
          local_60 = uVar35;
          local_58 = uVar38;
          if (param_7 == false) goto LAB_00101fff;
        }
        lVar30 = local_78;
        local_48 = (CowData<char32_t>)param_8;
        local_50 = param_6;
        local_60 = uVar35;
        local_58 = uVar38;
        this_00 = (CowData<char32_t> *)
                  HashMap<PackedData::PathMD5,PackedData::PackedFile,PackedData::PathMD5,HashMapComparatorDefault<PackedData::PathMD5>,DefaultTypedAllocator<HashMapElement<PackedData::PathMD5,PackedData::PackedFile>>>
                  ::operator[]((HashMap<PackedData::PathMD5,PackedData::PackedFile,PackedData::PathMD5,HashMapComparatorDefault<PackedData::PathMD5>,DefaultTypedAllocator<HashMapElement<PackedData::PathMD5,PackedData::PackedFile>>>
                                *)this,(PathMD5 *)&local_98);
        if (*(long *)this_00 != lVar30) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_78);
        }
        *(undefined8 *)(this_00 + 0x18) = uVar35;
        *(undefined8 *)(this_00 + 0x20) = uVar38;
        *(ulong *)(this_00 + 8) = param_3;
        *(ulong *)(this_00 + 0x10) = param_4;
        *(PackSource **)(this_00 + 0x28) = param_6;
        this_00[0x30] = local_48;
        if (!bVar22) {
          pauVar39 = *(undefined1 (**) [16])(this + 0x40);
          iVar25 = String::find_char((wchar32)&local_a8,0x2f);
          if (iVar25 != -1) {
            String::get_base_dir();
            String::split((char *)&local_88,SUB81(&local_a0,0),0x105f19);
            lVar30 = local_a0;
            if (local_a0 != 0) {
              LOCK();
              plVar1 = (long *)(local_a0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_a0 = 0;
                Memory::free_static((void *)(lVar30 + -0x10),false);
              }
            }
            if (local_80 != (long *)0x0) {
              lVar36 = 0;
              do {
                if (local_80[-1] <= lVar36) break;
                if ((*(long *)(pauVar39[1] + 8) != 0) && (*(int *)(pauVar39[3] + 0xc) != 0)) {
                  pSVar3 = (String *)(local_80 + lVar36);
                  uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pauVar39[3] + 8) * 4)
                  ;
                  lVar30 = *(long *)(hash_table_size_primes_inv +
                                    (ulong)*(uint *)(pauVar39[3] + 8) * 8);
                  uVar26 = String::hash();
                  uVar4 = CONCAT44(0,uVar24);
                  lVar34 = *(long *)pauVar39[2];
                  uVar32 = 1;
                  if (uVar26 != 0) {
                    uVar32 = uVar26;
                  }
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar32 * lVar30;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar4;
                  lVar31 = SUB168(auVar9 * auVar17,8);
                  uVar26 = *(uint *)(lVar34 + lVar31 * 4);
                  iVar25 = SUB164(auVar9 * auVar17,8);
                  if (uVar26 != 0) {
                    uVar37 = 0;
                    do {
                      if (uVar26 == uVar32) {
                        cVar23 = String::operator==((String *)
                                                    (*(long *)(*(long *)(pauVar39[1] + 8) +
                                                              lVar31 * 8) + 0x10),pSVar3);
                        if (cVar23 != '\0') {
                          if (local_80 == (long *)0x0) goto LAB_001024cf;
                          lVar30 = local_80[-1];
                          if (lVar30 <= lVar36) goto LAB_0010248a;
                          puVar28 = (undefined8 *)
                                    HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                                    ::operator[]((HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                                                  *)(pauVar39 + 1),(String *)(local_80 + lVar36));
                          pauVar27 = (undefined1 (*) [16])*puVar28;
                          goto LAB_00102362;
                        }
                        lVar34 = *(long *)pauVar39[2];
                      }
                      uVar37 = uVar37 + 1;
                      auVar10._8_8_ = 0;
                      auVar10._0_8_ = (ulong)(iVar25 + 1) * lVar30;
                      auVar18._8_8_ = 0;
                      auVar18._0_8_ = uVar4;
                      lVar31 = SUB168(auVar10 * auVar18,8);
                      uVar26 = *(uint *)(lVar34 + lVar31 * 4);
                      iVar25 = SUB164(auVar10 * auVar18,8);
                    } while ((uVar26 != 0) &&
                            (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar26 * lVar30,
                            auVar19._8_8_ = 0, auVar19._0_8_ = uVar4, auVar12._8_8_ = 0,
                            auVar12._0_8_ =
                                 (ulong)((uVar24 + iVar25) - SUB164(auVar11 * auVar19,8)) * lVar30,
                            auVar20._8_8_ = 0, auVar20._0_8_ = uVar4,
                            uVar37 <= SUB164(auVar12 * auVar20,8)));
                  }
                }
                pauVar27 = (undefined1 (*) [16])operator_new(0x68,"");
                *pauVar27 = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(pauVar27[1] + 8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(pauVar27[2] + 8) = (undefined1  [16])0x0;
                uVar35 = _LC49;
                pauVar27[4] = (undefined1  [16])0x0;
                *(undefined8 *)(pauVar27[3] + 8) = uVar35;
                *(undefined8 *)pauVar27[6] = uVar35;
                pauVar27[5] = (undefined1  [16])0x0;
                if (local_80 == (long *)0x0) {
LAB_001024cf:
                  lVar30 = 0;
                  goto LAB_0010248a;
                }
                lVar30 = local_80[-1];
                if (lVar30 <= lVar36) goto LAB_0010248a;
                if (local_80[lVar36] != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(*pauVar27 + 8),(CowData *)(local_80 + lVar36));
                }
                *(undefined1 (**) [16])*pauVar27 = pauVar39;
                puVar28 = (undefined8 *)
                          HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                          ::operator[]((HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                                        *)(pauVar39 + 1),(String *)(*pauVar27 + 8));
                *puVar28 = pauVar27;
LAB_00102362:
                lVar36 = lVar36 + 1;
                pauVar39 = pauVar27;
              } while (local_80 != (long *)0x0);
            }
            CowData<String>::_unref((CowData<String> *)&local_80);
          }
          String::get_file();
          lVar30 = local_78;
          if ((local_a0 != 0) &&
             ((*(uint *)(local_a0 + -8) < 2 ||
              (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                         ((String *)&local_88), lVar30 = local_78, local_a0 != 0)))) {
            lVar36 = local_a0;
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar30 = local_78;
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar36 + -0x10),false);
              lVar30 = local_78;
            }
          }
        }
LAB_00101fff:
        if (lVar30 != 0) {
          LOCK();
          plVar1 = (long *)(lVar30 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_78 + -0x10),false);
          }
        }
        lVar30 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar30 + -0x10),false);
          }
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar36 = 8;
      goto LAB_0010248a;
    }
  }
  lVar36 = 0;
LAB_0010248a:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar36,lVar30,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar21 = (code *)invalidInstructionException();
  (*pcVar21)();
}



/* PackedData::remove_path(String const&) */

void PackedData::remove_path(String *param_1)

{
  String *pSVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this;
  CowData *pCVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  code *pcVar69;
  char cVar70;
  uint uVar71;
  int iVar72;
  uint uVar73;
  uint uVar74;
  long *plVar75;
  uint uVar77;
  ulong uVar78;
  uint *puVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  ulong uVar83;
  ulong uVar84;
  ulong uVar85;
  long *plVar86;
  uint *puVar87;
  uint uVar88;
  uint uVar89;
  ulong uVar90;
  uint *puVar91;
  long lVar92;
  uint uVar93;
  long in_FS_OFFSET;
  long local_c0;
  int local_b0;
  int local_90;
  uint local_88;
  long local_68;
  long local_60;
  long local_58;
  long *local_50 [2];
  long local_40;
  ulong uVar76;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::simplify_path();
  String::trim_prefix((char *)&local_68);
  lVar80 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar75 = (long *)(local_58 + -0x10);
    *plVar75 = *plVar75 + -1;
    UNLOCK();
    if (*plVar75 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar80 + -0x10),false);
    }
  }
  String::md5_buffer();
  plVar75 = local_50[0];
  if (local_50[0] == (long *)0x0) {
    lVar80 = 0;
  }
  else {
    lVar80 = local_50[0][-1];
    if (0 < lVar80) {
      lVar9 = *local_50[0];
      if (8 < lVar80) {
        lVar10 = local_50[0][1];
        LOCK();
        plVar86 = local_50[0] + -2;
        *plVar86 = *plVar86 + -1;
        UNLOCK();
        if (*plVar86 == 0) {
          local_50[0] = (long *)0x0;
          Memory::free_static(plVar75 + -2,false);
        }
        if ((*(long *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
          local_90 = (int)lVar10;
          uVar84 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_1 + 0x28) * 4));
          uVar76 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
          local_b0 = (int)lVar9;
          uVar71 = (local_b0 * 0x16a88000 | (uint)(local_b0 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                   0x7f07c65;
          uVar71 = (uVar71 << 0xd | uVar71 >> 0x13) * 5 + 0xe6546b64 ^
                   (local_90 * 0x16a88000 | (uint)(local_90 * -0x3361d2af) >> 0x11) * 0x1b873593;
          uVar71 = (uVar71 << 0xd | uVar71 >> 0x13) * 5 + 0xe6546b64;
          uVar71 = (uVar71 >> 0x10 ^ uVar71) * -0x7a143595;
          uVar88 = (uVar71 ^ uVar71 >> 0xd) * -0x3d4d51cb;
          uVar77 = uVar88 >> 0x10;
          uVar71 = uVar88 ^ uVar77;
          if (uVar88 == uVar77) {
            local_88 = 1;
            uVar78 = uVar76;
          }
          else {
            uVar78 = uVar71 * uVar76;
            local_88 = uVar71;
          }
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar84;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = uVar78;
          lVar80 = SUB168(auVar13 * auVar41,8);
          iVar72 = SUB164(auVar13 * auVar41,8);
          uVar89 = *(uint *)(*(long *)(param_1 + 0x10) + lVar80 * 4);
          if (uVar89 != 0) {
            uVar74 = 0;
            do {
              if (((uVar89 == local_88) &&
                  (lVar80 = *(long *)(*(long *)(param_1 + 8) + lVar80 * 8),
                  *(long *)(lVar80 + 0x10) == lVar9)) && (*(long *)(lVar80 + 0x18) == lVar10)) {
                local_c0 = *(long *)(param_1 + 0x40);
                iVar72 = String::find_char((wchar32)&local_68,0x2f);
                if (iVar72 == -1) goto LAB_00102a28;
                String::get_base_dir();
                String::split((char *)&local_58,SUB81(&local_60,0),0x105f19);
                lVar80 = local_60;
                if (local_60 != 0) {
                  LOCK();
                  plVar75 = (long *)(local_60 + -0x10);
                  *plVar75 = *plVar75 + -1;
                  UNLOCK();
                  if (*plVar75 == 0) {
                    local_60 = 0;
                    Memory::free_static((void *)(lVar80 + -0x10),false);
                  }
                }
                if (local_50[0] == (long *)0x0) goto LAB_00102a1e;
                lVar92 = 0;
                goto LAB_001027f0;
              }
              uVar74 = uVar74 + 1;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (iVar72 + 1) * uVar76;
              auVar42._8_8_ = 0;
              auVar42._0_8_ = uVar84;
              lVar80 = SUB168(auVar14 * auVar42,8);
              uVar89 = *(uint *)(*(long *)(param_1 + 0x10) + lVar80 * 4);
              iVar72 = SUB164(auVar14 * auVar42,8);
            } while ((uVar89 != 0) &&
                    (auVar15._8_8_ = 0, auVar15._0_8_ = uVar89 * uVar76, auVar43._8_8_ = 0,
                    auVar43._0_8_ = uVar84, auVar16._8_8_ = 0,
                    auVar16._0_8_ =
                         ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)
                          + iVar72) - SUB164(auVar15 * auVar43,8)) * uVar76, auVar44._8_8_ = 0,
                    auVar44._0_8_ = uVar84, uVar74 <= SUB164(auVar16 * auVar44,8)));
          }
        }
        goto LAB_0010292a;
      }
      lVar92 = 8;
      goto LAB_00102f44;
    }
  }
  lVar92 = 0;
LAB_00102f44:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar92,lVar80,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar69 = (code *)invalidInstructionException();
  (*pcVar69)();
LAB_001027f0:
  if (lVar92 < local_50[0][-1]) {
    if ((*(long *)(local_c0 + 0x18) != 0) && (*(int *)(local_c0 + 0x3c) != 0)) {
      pSVar1 = (String *)(local_50[0] + lVar92);
      uVar89 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_c0 + 0x38) * 4);
      uVar76 = CONCAT44(0,uVar89);
      lVar80 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_c0 + 0x38) * 8);
      uVar73 = String::hash();
      uVar74 = 1;
      if (uVar73 != 0) {
        uVar74 = uVar73;
      }
      lVar82 = *(long *)(local_c0 + 0x20);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar74 * lVar80;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar76;
      lVar81 = SUB168(auVar17 * auVar45,8);
      uVar73 = *(uint *)(lVar82 + lVar81 * 4);
      iVar72 = SUB164(auVar17 * auVar45,8);
      if (uVar73 != 0) {
        uVar93 = 0;
        do {
          if (uVar74 == uVar73) {
            cVar70 = String::operator==((String *)
                                        (*(long *)(*(long *)(local_c0 + 0x18) + lVar81 * 8) + 0x10),
                                        pSVar1);
            if (cVar70 != '\0') goto LAB_001029be;
            lVar82 = *(long *)(local_c0 + 0x20);
          }
          uVar93 = uVar93 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(iVar72 + 1) * lVar80;
          auVar46._8_8_ = 0;
          auVar46._0_8_ = uVar76;
          lVar81 = SUB168(auVar18 * auVar46,8);
          uVar73 = *(uint *)(lVar82 + lVar81 * 4);
          iVar72 = SUB164(auVar18 * auVar46,8);
          if ((uVar73 == 0) ||
             (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar73 * lVar80, auVar47._8_8_ = 0,
             auVar47._0_8_ = uVar76, auVar20._8_8_ = 0,
             auVar20._0_8_ = (ulong)((uVar89 + iVar72) - SUB164(auVar19 * auVar47,8)) * lVar80,
             auVar48._8_8_ = 0, auVar48._0_8_ = uVar76, SUB164(auVar20 * auVar48,8) < uVar93))
          break;
        } while( true );
      }
    }
    CowData<String>::_unref((CowData<String> *)local_50);
    goto LAB_0010292a;
  }
  goto LAB_00102a1e;
LAB_001029be:
  if (local_50[0] == (long *)0x0) {
    lVar80 = 0;
    goto LAB_00102f44;
  }
  lVar80 = local_50[0][-1];
  if (lVar80 <= lVar92) goto LAB_00102f44;
  plVar75 = (long *)HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                    ::operator[]((HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                                  *)(local_c0 + 0x10),(String *)(local_50[0] + lVar92));
  local_c0 = *plVar75;
  lVar92 = lVar92 + 1;
  if (local_50[0] == (long *)0x0) goto LAB_00102a1e;
  goto LAB_001027f0;
LAB_00102ad0:
  uVar73 = uVar73 + 1;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = (ulong)(iVar72 + 1) * lVar80;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar76;
  lVar82 = SUB168(auVar22 * auVar50,8);
  uVar93 = *(uint *)(lVar92 + lVar82 * 4);
  uVar84 = (ulong)uVar93;
  iVar72 = SUB164(auVar22 * auVar50,8);
  if ((uVar93 == 0) ||
     (auVar23._8_8_ = 0, auVar23._0_8_ = uVar84 * lVar80, auVar51._8_8_ = 0, auVar51._0_8_ = uVar76,
     auVar24._8_8_ = 0,
     auVar24._0_8_ = (ulong)((uVar89 + iVar72) - SUB164(auVar23 * auVar51,8)) * lVar80,
     auVar52._8_8_ = 0, auVar52._0_8_ = uVar76, SUB164(auVar24 * auVar52,8) < uVar73))
  goto LAB_00102cc5;
  goto LAB_00102b1e;
LAB_00102d78:
  uVar88 = uVar88 + 1;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = (uVar77 + 1) * uVar76;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar78;
  lVar82 = SUB168(auVar32 * auVar60,8);
  uVar71 = *(uint *)(lVar92 + lVar82 * 4);
  uVar77 = SUB164(auVar32 * auVar60,8);
  if ((uVar71 == 0) ||
     (auVar33._8_8_ = 0, auVar33._0_8_ = uVar71 * uVar76, auVar61._8_8_ = 0, auVar61._0_8_ = uVar78,
     auVar34._8_8_ = 0, auVar34._0_8_ = ((uVar89 + uVar77) - SUB164(auVar33 * auVar61,8)) * uVar76,
     auVar62._8_8_ = 0, auVar62._0_8_ = uVar78, SUB164(auVar34 * auVar62,8) < uVar88))
  goto LAB_0010292a;
  goto LAB_00102dc1;
LAB_00102a1e:
  CowData<String>::_unref((CowData<String> *)local_50);
LAB_00102a28:
  String::get_file();
  if ((*(long *)(local_c0 + 0x40) != 0) && (*(int *)(local_c0 + 100) != 0)) {
    uVar89 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_c0 + 0x60) * 4);
    lVar80 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_c0 + 0x60) * 8);
    uVar73 = String::hash();
    uVar76 = CONCAT44(0,uVar89);
    lVar92 = *(long *)(local_c0 + 0x58);
    uVar74 = 1;
    if (uVar73 != 0) {
      uVar74 = uVar73;
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)uVar74 * lVar80;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar76;
    lVar82 = SUB168(auVar21 * auVar49,8);
    uVar73 = *(uint *)(lVar92 + lVar82 * 4);
    uVar84 = (ulong)uVar73;
    iVar72 = SUB164(auVar21 * auVar49,8);
    if (uVar73 != 0) {
      uVar73 = 0;
LAB_00102b1e:
      if (uVar74 != (uint)uVar84) goto LAB_00102ad0;
      cVar70 = String::operator==((String *)
                                  (*(long *)(local_c0 + 0x40) +
                                  (ulong)*(uint *)(*(long *)(local_c0 + 0x48) + lVar82 * 4) * 8),
                                  (String *)&local_58);
      if (cVar70 == '\0') {
        lVar92 = *(long *)(local_c0 + 0x58);
        goto LAB_00102ad0;
      }
      lVar92 = *(long *)(local_c0 + 0x48);
      lVar81 = *(long *)(local_c0 + 0x50);
      lVar11 = *(long *)(local_c0 + 0x58);
      uVar89 = *(uint *)(lVar92 + lVar82 * 4);
      uVar85 = (ulong)uVar89;
      lVar82 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_c0 + 0x60) * 8);
      uVar74 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_c0 + 0x60) * 4);
      uVar78 = CONCAT44(0,uVar74);
      uVar73 = *(uint *)(lVar81 + uVar85 * 4);
      uVar76 = (ulong)uVar73;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = (ulong)(uVar73 + 1) * lVar82;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar78;
      lVar80 = SUB168(auVar25 * auVar53,8) * 4;
      uVar93 = SUB164(auVar25 * auVar53,8);
      uVar84 = (ulong)uVar93;
      puVar91 = (uint *)(lVar11 + lVar80);
      if ((*puVar91 == 0) ||
         (auVar26._8_8_ = 0, auVar26._0_8_ = (ulong)*puVar91 * lVar82, auVar54._8_8_ = 0,
         auVar54._0_8_ = uVar78, auVar27._8_8_ = 0,
         auVar27._0_8_ = (ulong)((uVar74 + uVar93) - SUB164(auVar26 * auVar54,8)) * lVar82,
         auVar55._8_8_ = 0, auVar55._0_8_ = uVar78, SUB164(auVar27 * auVar55,8) == 0)) {
        uVar84 = (ulong)uVar73;
      }
      else {
        while( true ) {
          puVar79 = (uint *)(lVar80 + lVar92);
          puVar2 = (uint *)(lVar92 + uVar76 * 4);
          puVar87 = (uint *)(uVar76 * 4 + lVar11);
          puVar6 = (undefined4 *)(lVar81 + (ulong)*puVar79 * 4);
          puVar7 = (undefined4 *)(lVar81 + (ulong)*puVar2 * 4);
          uVar8 = *puVar7;
          *puVar7 = *puVar6;
          *puVar6 = uVar8;
          uVar73 = *puVar91;
          *puVar91 = *puVar87;
          *puVar87 = uVar73;
          uVar73 = *puVar79;
          *puVar79 = *puVar2;
          *puVar2 = uVar73;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = (ulong)((int)uVar84 + 1) * lVar82;
          auVar58._8_8_ = 0;
          auVar58._0_8_ = uVar78;
          uVar83 = SUB168(auVar30 * auVar58,8);
          lVar80 = uVar83 * 4;
          puVar91 = (uint *)(lVar11 + lVar80);
          if ((*puVar91 == 0) ||
             (auVar28._8_8_ = 0, auVar28._0_8_ = (ulong)*puVar91 * lVar82, auVar56._8_8_ = 0,
             auVar56._0_8_ = uVar78, auVar29._8_8_ = 0,
             auVar29._0_8_ =
                  (ulong)((SUB164(auVar30 * auVar58,8) + uVar74) - SUB164(auVar28 * auVar56,8)) *
                  lVar82, auVar57._8_8_ = 0, auVar57._0_8_ = uVar78,
             SUB164(auVar29 * auVar57,8) == 0)) break;
          uVar76 = uVar84;
          uVar84 = uVar83 & 0xffffffff;
        }
      }
      *(undefined4 *)(lVar11 + uVar84 * 4) = 0;
      plVar75 = (long *)(*(long *)(local_c0 + 0x40) + uVar85 * 8);
      if (*plVar75 != 0) {
        LOCK();
        plVar86 = (long *)(*plVar75 + -0x10);
        *plVar86 = *plVar86 + -1;
        UNLOCK();
        if (*plVar86 == 0) {
          lVar80 = *plVar75;
          *plVar75 = 0;
          Memory::free_static((void *)(lVar80 + -0x10),false);
        }
      }
      uVar74 = *(int *)(local_c0 + 100) - 1;
      uVar76 = (ulong)uVar74;
      *(uint *)(local_c0 + 100) = uVar74;
      if (uVar89 < uVar74) {
        this = (CowData<char32_t> *)(*(long *)(local_c0 + 0x40) + uVar85 * 8);
        pCVar5 = (CowData *)(*(long *)(local_c0 + 0x40) + uVar76 * 8);
        *(undefined8 *)this = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this,pCVar5);
          uVar76 = (ulong)*(uint *)(local_c0 + 100);
          plVar75 = (long *)(*(long *)(local_c0 + 0x40) + uVar76 * 8);
          if (*plVar75 != 0) {
            LOCK();
            plVar86 = (long *)(*plVar75 + -0x10);
            *plVar86 = *plVar86 + -1;
            UNLOCK();
            if (*plVar86 == 0) {
              lVar80 = *plVar75;
              *plVar75 = 0;
              Memory::free_static((void *)(lVar80 + -0x10),false);
              uVar76 = (ulong)*(uint *)(local_c0 + 100);
            }
            else {
              uVar76 = (ulong)*(uint *)(local_c0 + 100);
            }
          }
        }
        lVar80 = *(long *)(local_c0 + 0x50);
        *(undefined4 *)(lVar80 + uVar85 * 4) = *(undefined4 *)(lVar80 + uVar76 * 4);
        *(uint *)(*(long *)(local_c0 + 0x48) +
                 (ulong)*(uint *)(lVar80 + (ulong)*(uint *)(local_c0 + 100) * 4) * 4) = uVar89;
      }
    }
  }
LAB_00102cc5:
  lVar80 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar75 = (long *)(local_58 + -0x10);
    *plVar75 = *plVar75 + -1;
    UNLOCK();
    if (*plVar75 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar80 + -0x10),false);
    }
  }
  lVar80 = *(long *)(param_1 + 8);
  if ((lVar80 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar89 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4);
    uVar78 = CONCAT44(0,uVar89);
    uVar76 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
    uVar84 = uVar76;
    if (uVar88 != uVar77) {
      uVar84 = uVar71 * uVar76;
    }
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar78;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar84;
    lVar82 = SUB168(auVar31 * auVar59,8);
    lVar92 = *(long *)(param_1 + 0x10);
    uVar77 = SUB164(auVar31 * auVar59,8);
    uVar71 = *(uint *)(lVar92 + lVar82 * 4);
    if (uVar71 != 0) {
      uVar88 = 0;
LAB_00102dc1:
      uVar84 = (ulong)uVar77;
      if (((local_88 != uVar71) ||
          (lVar82 = *(long *)(lVar80 + lVar82 * 8), lVar9 != *(long *)(lVar82 + 0x10))) ||
         (lVar10 != *(long *)(lVar82 + 0x18))) goto LAB_00102d78;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = (uVar77 + 1) * uVar76;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar78;
      uVar85 = SUB168(auVar35 * auVar63,8);
      puVar91 = (uint *)(lVar92 + uVar85 * 4);
      uVar77 = SUB164(auVar35 * auVar63,8);
      uVar71 = *puVar91;
      if ((uVar71 != 0) &&
         (auVar36._8_8_ = 0, auVar36._0_8_ = uVar71 * uVar76, auVar64._8_8_ = 0,
         auVar64._0_8_ = uVar78, auVar37._8_8_ = 0,
         auVar37._0_8_ = ((uVar77 + uVar89) - SUB164(auVar36 * auVar64,8)) * uVar76,
         auVar65._8_8_ = 0, auVar65._0_8_ = uVar78, uVar83 = (ulong)uVar77, uVar90 = uVar84,
         SUB164(auVar37 * auVar65,8) != 0)) {
        while( true ) {
          uVar84 = uVar83;
          puVar2 = (uint *)(lVar92 + uVar90 * 4);
          *puVar91 = *puVar2;
          puVar3 = (undefined8 *)(lVar80 + uVar85 * 8);
          *puVar2 = uVar71;
          puVar4 = (undefined8 *)(lVar80 + uVar90 * 8);
          uVar12 = *puVar3;
          *puVar3 = *puVar4;
          *puVar4 = uVar12;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = ((int)uVar84 + 1) * uVar76;
          auVar68._8_8_ = 0;
          auVar68._0_8_ = uVar78;
          uVar85 = SUB168(auVar40 * auVar68,8);
          puVar91 = (uint *)(lVar92 + uVar85 * 4);
          uVar71 = *puVar91;
          if ((uVar71 == 0) ||
             (auVar38._8_8_ = 0, auVar38._0_8_ = uVar71 * uVar76, auVar66._8_8_ = 0,
             auVar66._0_8_ = uVar78, auVar39._8_8_ = 0,
             auVar39._0_8_ =
                  ((SUB164(auVar40 * auVar68,8) + uVar89) - SUB164(auVar38 * auVar66,8)) * uVar76,
             auVar67._8_8_ = 0, auVar67._0_8_ = uVar78, SUB164(auVar39 * auVar67,8) == 0)) break;
          uVar83 = uVar85 & 0xffffffff;
          uVar90 = uVar84;
        }
      }
      plVar75 = (long *)(lVar80 + uVar84 * 8);
      *(undefined4 *)(lVar92 + uVar84 * 4) = 0;
      plVar86 = (long *)*plVar75;
      if (*(long **)(param_1 + 0x18) == plVar86) {
        *(long *)(param_1 + 0x18) = *plVar86;
        plVar86 = (long *)*plVar75;
      }
      if (*(long **)(param_1 + 0x20) == plVar86) {
        *(long *)(param_1 + 0x20) = plVar86[1];
        plVar86 = (long *)*plVar75;
      }
      if ((long *)plVar86[1] != (long *)0x0) {
        *(long *)plVar86[1] = *plVar86;
        plVar86 = (long *)*plVar75;
      }
      if (*plVar86 != 0) {
        *(long *)(*plVar86 + 8) = plVar86[1];
        plVar86 = (long *)*plVar75;
      }
      if (plVar86[4] != 0) {
        LOCK();
        plVar75 = (long *)(plVar86[4] + -0x10);
        *plVar75 = *plVar75 + -1;
        UNLOCK();
        if (*plVar75 == 0) {
          lVar80 = plVar86[4];
          plVar86[4] = 0;
          Memory::free_static((void *)(lVar80 + -0x10),false);
        }
      }
      Memory::free_static(plVar86,false);
      *(undefined8 *)(*(long *)(param_1 + 8) + uVar84 * 8) = 0;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      if (local_68 == 0) goto LAB_00102955;
      goto LAB_00102934;
    }
  }
LAB_0010292a:
  if (local_68 != 0) {
LAB_00102934:
    lVar80 = local_68;
    LOCK();
    plVar75 = (long *)(local_68 + -0x10);
    *plVar75 = *plVar75 + -1;
    UNLOCK();
    if (*plVar75 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar80 + -0x10),false);
    }
  }
LAB_00102955:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DirAccessPack::_find_dir(String const&) */

long * __thiscall DirAccessPack::_find_dir(DirAccessPack *this,String *param_1)

{
  long *plVar1;
  String *this_00;
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
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  char cVar16;
  char cVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  bool bVar24;
  long lVar25;
  uint uVar26;
  long in_FS_OFFSET;
  undefined *local_60;
  undefined *local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::replace((char *)&local_60,(char *)param_1);
  cVar16 = String::operator==(param_1,"..");
  if (cVar16 != '\0') {
    plVar19 = (long *)**(long **)(this + 400);
    goto LAB_00103154;
  }
  cVar16 = String::begins_with((char *)&local_60);
  puVar15 = local_60;
  if (cVar16 != '\0') {
    String::replace_first((char *)&local_58,(char *)&local_60);
    puVar14 = local_58;
    puVar13 = local_60;
    if (local_60 == local_58) {
      puVar15 = local_60;
      if (local_60 != (undefined *)0x0) {
        LOCK();
        plVar19 = (long *)(local_60 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar14 + -0x10,false);
          puVar15 = local_60;
        }
      }
    }
    else {
      puVar15 = local_58;
      if (local_60 != (undefined *)0x0) {
        LOCK();
        plVar19 = (long *)(local_60 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        puVar15 = local_58;
        if (*plVar19 == 0) {
          local_60 = (undefined *)0x0;
          Memory::free_static(puVar13 + -0x10,false);
          puVar15 = local_58;
        }
      }
    }
  }
  local_60 = puVar15;
  String::simplify_path();
  puVar13 = local_58;
  puVar15 = local_60;
  if (local_60 == local_58) {
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar19 = (long *)(local_58 + -0x10);
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (*plVar19 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar13 + -0x10,false);
      }
      goto LAB_0010320a;
    }
LAB_00103215:
    local_50[0] = 1;
    local_58 = &_LC34;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    if (local_60 != (undefined *)0x0) {
      LOCK();
      plVar19 = (long *)(local_60 + -0x10);
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (*plVar19 == 0) {
        local_60 = (undefined *)0x0;
        Memory::free_static(puVar15 + -0x10,false);
      }
    }
    local_60 = local_58;
LAB_0010320a:
    if ((local_60 == (undefined *)0x0) || (*(uint *)(local_60 + -8) < 2)) goto LAB_00103215;
  }
  cVar17 = String::begins_with((char *)&local_60);
  bVar24 = SUB81((StrRange *)&local_60,0);
  if (cVar17 == '\0') {
    String::split((char *)&local_58,bVar24,0x105f19);
    if (cVar16 != '\0') goto LAB_00103489;
    plVar19 = *(long **)(this + 400);
  }
  else {
    String::replace_first((char *)&local_58,(char *)&local_60);
    puVar13 = local_58;
    puVar15 = local_60;
    if (local_60 == local_58) {
      if (local_60 != (undefined *)0x0) {
        LOCK();
        plVar19 = (long *)(local_60 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar13 + -0x10,false);
        }
      }
    }
    else {
      if (local_60 != (undefined *)0x0) {
        LOCK();
        plVar19 = (long *)(local_60 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          local_60 = (undefined *)0x0;
          Memory::free_static(puVar15 + -0x10,false);
        }
      }
      local_60 = local_58;
    }
    String::split((char *)&local_58,bVar24,0x105f19);
LAB_00103489:
    plVar19 = *(long **)(PackedData::singleton + 0x40);
  }
  if (local_50[0] == 0) {
LAB_001033e3:
    CowData<String>::_unref((CowData<String> *)local_50);
LAB_00103154:
    puVar15 = local_60;
    if (local_60 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = (undefined *)0x0;
        Memory::free_static(puVar15 + -0x10,false);
      }
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return plVar19;
  }
  lVar23 = 0;
LAB_0010329c:
  if (*(long *)(local_50[0] + -8) <= lVar23) goto LAB_001033e3;
  this_00 = (String *)(local_50[0] + lVar23 * 8);
  cVar16 = String::operator==(this_00,".");
  if (cVar16 != '\0') goto LAB_0010328a;
  cVar16 = String::operator==(this_00,"..");
  if (cVar16 == '\0') {
    if ((plVar19[3] != 0) && (*(int *)((long)plVar19 + 0x3c) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar19 + 7) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar19 + 7) * 8);
      uVar18 = String::hash();
      uVar12 = CONCAT44(0,uVar2);
      lVar25 = plVar19[4];
      uVar20 = 1;
      if (uVar18 != 0) {
        uVar20 = uVar18;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar20 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar12;
      lVar22 = SUB168(auVar4 * auVar8,8);
      uVar18 = *(uint *)(lVar25 + lVar22 * 4);
      iVar21 = SUB164(auVar4 * auVar8,8);
      if (uVar18 != 0) {
        uVar26 = 0;
        do {
          if (uVar20 == uVar18) {
            cVar16 = String::operator==((String *)(*(long *)(plVar19[3] + lVar22 * 8) + 0x10),
                                        this_00);
            if (cVar16 != '\0') goto LAB_001033f2;
            lVar25 = plVar19[4];
          }
          uVar26 = uVar26 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar21 + 1) * lVar3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar12;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar18 = *(uint *)(lVar25 + lVar22 * 4);
          iVar21 = SUB164(auVar5 * auVar9,8);
          if ((uVar18 == 0) ||
             (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar3, auVar10._8_8_ = 0,
             auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
             auVar7._0_8_ = (ulong)((uVar2 + iVar21) - SUB164(auVar6 * auVar10,8)) * lVar3,
             auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar26)) break;
        } while( true );
      }
    }
    plVar19 = (long *)0x0;
    goto LAB_001033e3;
  }
  if ((long *)*plVar19 != (long *)0x0) {
    plVar19 = (long *)*plVar19;
  }
LAB_0010328a:
  lVar23 = lVar23 + 1;
  if (local_50[0] == 0) goto LAB_001033e3;
  goto LAB_0010329c;
LAB_001033f2:
  plVar19 = (long *)HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                    ::operator[]((HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
                                  *)(plVar19 + 2),this_00);
  plVar19 = (long *)*plVar19;
  goto LAB_0010328a;
}



/* DirAccessPack::change_dir(String) */

undefined8 __thiscall DirAccessPack::change_dir(DirAccessPack *this,String *param_2)

{
  long lVar1;
  
  lVar1 = _find_dir(this,param_2);
  if (lVar1 != 0) {
    *(long *)(this + 400) = lVar1;
    return 0;
  }
  return 0x1f;
}



/* DirAccessPack::file_exists(String) */

ulong DirAccessPack::file_exists(DirAccessPack *param_1)

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
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_base_dir();
  lVar13 = _find_dir(param_1,(String *)&local_48);
  lVar3 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  uVar14 = 0;
  if (lVar13 != 0) {
    String::get_file();
    if ((*(long *)(lVar13 + 0x40) != 0) && (*(int *)(lVar13 + 100) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar13 + 0x60) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar13 + 0x60) * 8);
      uVar12 = String::hash();
      uVar19 = CONCAT44(0,uVar2);
      lVar18 = *(long *)(lVar13 + 0x58);
      uVar15 = 1;
      if (uVar12 != 0) {
        uVar15 = uVar12;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar15 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar17 = SUB168(auVar4 * auVar8,8);
      uVar12 = *(uint *)(lVar18 + lVar17 * 4);
      iVar16 = SUB164(auVar4 * auVar8,8);
      if (uVar12 != 0) {
        uVar20 = 0;
        do {
          if (uVar15 == uVar12) {
            uVar14 = String::operator==((String *)
                                        (*(long *)(lVar13 + 0x40) +
                                        (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + lVar17 * 4) * 8)
                                        ,(String *)&local_48);
            if ((char)uVar14 != '\0') goto LAB_00103688;
            lVar18 = *(long *)(lVar13 + 0x58);
          }
          uVar20 = uVar20 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar16 + 1) * lVar3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar19;
          lVar17 = SUB168(auVar5 * auVar9,8);
          uVar12 = *(uint *)(lVar18 + lVar17 * 4);
          iVar16 = SUB164(auVar5 * auVar9,8);
        } while ((uVar12 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar12 * lVar3, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
                auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
      }
    }
    uVar14 = 0;
LAB_00103688:
    lVar3 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        uVar14 = uVar14 & 0xff;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccessPack::dir_exists(String) */

bool __thiscall DirAccessPack::dir_exists(DirAccessPack *this,String *param_2)

{
  long lVar1;
  
  lVar1 = _find_dir(this,param_2);
  return lVar1 != 0;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* PackedSourceDirectory::add_directory(String const&, bool) */

void __thiscall
PackedSourceDirectory::add_directory(PackedSourceDirectory *this,String *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_78;
  long local_70 [2];
  long local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::open((String *)&local_78,param_1);
  if (local_78 != (Object *)0x0) {
    DirAccess::set_include_hidden(SUB81(local_78,0));
    DirAccess::get_files();
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    lVar5 = local_60;
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      lVar4 = local_60 + *(long *)(local_60 + -8) * 8;
    }
    if (lVar5 != lVar4) {
      do {
        String::path_join((String *)local_70);
        local_58 = (undefined1  [16])0x0;
        PackedData::add_path
                  (PackedData::singleton,param_1,(String *)local_70,0,0,local_58,(PackSource *)this,
                   param_2,false);
        lVar2 = local_70[0];
        if (local_70[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_70[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70[0] = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 != lVar5);
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    DirAccess::get_directories();
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    lVar5 = local_60;
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      lVar4 = local_60 + *(long *)(local_60 + -8) * 8;
    }
    if (lVar5 != lVar4) {
      do {
        String::path_join((String *)local_70);
        add_directory(this,(String *)local_70,param_2);
        lVar2 = local_70[0];
        if (local_70[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_70[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70[0] = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 != lVar5);
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    if (local_78 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_78);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_78 + 0x140))(local_78);
          Memory::free_static(local_78,false);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PackedSourceDirectory::try_open_pack(String const&, bool, unsigned long) */

undefined8 __thiscall
PackedSourceDirectory::try_open_pack
          (PackedSourceDirectory *this,String *param_1,bool param_2,ulong param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = String::operator!=(param_1,"res://");
    if (cVar1 == '\0') {
      add_directory(this,param_1,param_2);
      return 1;
    }
  }
  else {
    _err_print_error("try_open_pack","core/io/file_access_pack.cpp",0x150,
                     "Condition \"p_offset != 0\" is true. Returning: false",
                     "Invalid PCK data. Note that loading files with a non-zero offset isn\'t supported with directories."
                     ,0,0);
  }
  return 0;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00103de6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00103de6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00105ff8();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00103d3c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00103d3c:
  puVar8[-1] = param_1;
  return;
}



/* FileAccessPack::FileAccessPack(String const&, PackedData::PackedFile const&) */

void __thiscall
FileAccessPack::FileAccessPack(FileAccessPack *this,String *param_1,PackedFile *param_2)

{
  PackedFile PVar1;
  undefined1 uVar2;
  long *plVar3;
  Object *pOVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  Object *pOVar12;
  long lVar13;
  long lVar14;
  Object *pOVar15;
  long in_FS_OFFSET;
  bool bVar16;
  Object *local_80;
  long local_78;
  Object *local_70;
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  lVar14 = *(long *)param_2;
  *(undefined2 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 2;
  *(undefined2 *)(this + 0x184) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b258;
  if (lVar14 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 400),(CowData *)param_2);
  }
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(param_2 + 0x28);
  PVar1 = param_2[0x30];
  *(undefined8 *)(this + 0x198) = uVar5;
  *(undefined8 *)(this + 0x1a0) = uVar6;
  *(PackedFile *)(this + 0x1c0) = PVar1;
  *(undefined8 *)(this + 0x1a8) = uVar7;
  *(undefined8 *)(this + 0x1b0) = uVar8;
  FileAccess::open((String *)(this + 0x1e0),(int)(CowData<char32_t> *)(this + 400),(Error *)0x1);
  plVar3 = *(long **)(this + 0x1e0);
  if (plVar3 == (long *)0x0) {
    local_68 = 0;
    plVar3 = (long *)(*(long *)(this + 400) + -0x10);
    if (*(long *)(this + 400) != 0) {
      do {
        lVar14 = *plVar3;
        if (lVar14 == 0) goto LAB_001041f6;
        LOCK();
        lVar13 = *plVar3;
        bVar16 = lVar14 == lVar13;
        if (bVar16) {
          *plVar3 = lVar14 + 1;
          lVar13 = lVar14;
        }
        UNLOCK();
      } while (!bVar16);
      if (lVar13 != -1) {
        local_68 = *(long *)(this + 400);
      }
    }
LAB_001041f6:
    local_70 = (Object *)0x0;
    local_50 = 0x25;
    local_58 = "Can\'t open pack-referenced file \'%s\'.";
    String::parse_latin1((StrRange *)&local_70);
    vformat<String>(&local_58,(StrRange *)&local_70,&local_68);
    _err_print_error("FileAccessPack","core/io/file_access_pack.cpp",0x1d7,
                     "Condition \"f.is_null()\" is true.",&local_58,0,0);
    pcVar9 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar3 = (long *)(local_58 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar9 + -0x10,false);
      }
    }
    pOVar15 = local_70;
    if (local_70 != (Object *)0x0) {
      LOCK();
      pOVar4 = local_70 + -0x10;
      *(long *)pOVar4 = *(long *)pOVar4 + -1;
      UNLOCK();
      if (*(long *)pOVar4 == 0) {
        local_70 = (Object *)0x0;
        Memory::free_static(pOVar15 + -0x10,false);
      }
    }
    lVar14 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar3 = (long *)(local_68 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
  }
  else {
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(this + 0x198));
    *(undefined8 *)(this + 0x1d8) = *(undefined8 *)(this + 0x198);
    if (this[0x1c0] == (FileAccessPack)0x0) {
LAB_00103f35:
      *(undefined8 *)(this + 0x1c8) = 0;
      this[0x1d0] = (FileAccessPack)0x0;
    }
    else {
      local_80 = (Object *)0x0;
      Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_80);
      pOVar15 = local_80;
      if (local_80 == (Object *)0x0) {
        local_68 = 0;
        plVar3 = (long *)(*(long *)(this + 400) + -0x10);
        if (*(long *)(this + 400) != 0) {
          do {
            lVar14 = *plVar3;
            if (lVar14 == 0) goto LAB_001043ae;
            LOCK();
            lVar13 = *plVar3;
            bVar16 = lVar14 == lVar13;
            if (bVar16) {
              *plVar3 = lVar14 + 1;
              lVar13 = lVar14;
            }
            UNLOCK();
          } while (!bVar16);
          if (lVar13 != -1) {
            local_68 = *(long *)(this + 400);
          }
        }
LAB_001043ae:
        local_70 = (Object *)0x0;
        local_50 = 0x2f;
        local_58 = "Can\'t open encrypted pack-referenced file \'%s\'.";
        String::parse_latin1((StrRange *)&local_70);
        vformat<String>(&local_58,(StrRange *)&local_70,&local_68);
        _err_print_error("FileAccessPack","core/io/file_access_pack.cpp",0x1df,
                         "Condition \"fae.is_null()\" is true.",&local_58,0,0);
        pcVar9 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar3 = (long *)(local_58 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar9 + -0x10,false);
          }
        }
        pOVar15 = local_70;
        if (local_70 != (Object *)0x0) {
          LOCK();
          pOVar4 = local_70 + -0x10;
          *(long *)pOVar4 = *(long *)pOVar4 + -1;
          UNLOCK();
          if (*(long *)pOVar4 == 0) {
            local_70 = (Object *)0x0;
            Memory::free_static(pOVar15 + -0x10,false);
          }
        }
        lVar14 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar3 = (long *)(local_68 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
      }
      else {
        local_60 = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,0x20);
        for (lVar14 = 0; (local_60 != 0 && (lVar14 < *(long *)(local_60 + -8))); lVar14 = lVar14 + 1
            ) {
          uVar2 = (&script_encryption_key)[lVar14];
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
          *(undefined1 *)(local_60 + lVar14) = uVar2;
        }
        local_50 = 0;
        local_70 = (Object *)0x0;
        if ((*(Object **)(this + 0x1e0) != (Object *)0x0) &&
           (local_70 = *(Object **)(this + 0x1e0), cVar10 = RefCounted::reference(), cVar10 == '\0')
           ) {
          local_70 = (Object *)0x0;
        }
        iVar11 = FileAccessEncrypted::open_and_parse(pOVar15,&local_70,&local_68,0,0,&local_58);
        if (((local_70 != (Object *)0x0) &&
            (cVar10 = RefCounted::unreference(), pOVar15 = local_70, cVar10 != '\0')) &&
           (cVar10 = predelete_handler(local_70), cVar10 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
        lVar14 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar3 = (long *)(local_50 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        pOVar15 = local_80;
        if (iVar11 == 0) {
          pOVar4 = *(Object **)(this + 0x1e0);
          if (local_80 == (Object *)0x0) {
            if (pOVar4 == (Object *)0x0) {
              *(undefined8 *)(this + 0x1d8) = 0;
              if (local_60 == 0) goto LAB_00103f35;
LAB_00104101:
              lVar14 = local_60;
              LOCK();
              plVar3 = (long *)(local_60 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              pOVar15 = local_80;
              if (*plVar3 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
                pOVar15 = local_80;
              }
            }
            else {
              *(undefined8 *)(this + 0x1e0) = 0;
LAB_00104184:
              cVar10 = RefCounted::unreference();
              if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar4), cVar10 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
              *(undefined8 *)(this + 0x1d8) = 0;
              if (local_60 != 0) goto LAB_00104101;
            }
            if (pOVar15 == (Object *)0x0) goto LAB_00103f35;
          }
          else {
            pOVar12 = (Object *)__dynamic_cast(local_80,&Object::typeinfo,&FileAccess::typeinfo,0);
            if (pOVar4 != pOVar12) {
              *(Object **)(this + 0x1e0) = pOVar12;
              if ((pOVar12 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0'))
              {
                *(undefined8 *)(this + 0x1e0) = 0;
              }
              if (pOVar4 != (Object *)0x0) goto LAB_00104184;
            }
            *(undefined8 *)(this + 0x1d8) = 0;
            if (local_60 != 0) goto LAB_00104101;
          }
          cVar10 = RefCounted::unreference();
          if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar15), cVar10 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
          goto LAB_00103f35;
        }
        local_70 = (Object *)0x0;
        plVar3 = (long *)(*(long *)(this + 400) + -0x10);
        if (*(long *)(this + 400) != 0) {
          do {
            lVar14 = *plVar3;
            if (lVar14 == 0) goto LAB_0010454e;
            LOCK();
            lVar13 = *plVar3;
            bVar16 = lVar14 == lVar13;
            if (bVar16) {
              *plVar3 = lVar14 + 1;
              lVar13 = lVar14;
            }
            UNLOCK();
          } while (!bVar16);
          if (lVar13 != -1) {
            local_70 = *(Object **)(this + 400);
          }
        }
LAB_0010454e:
        local_78 = 0;
        local_58 = "Can\'t open encrypted pack-referenced file \'%s\'.";
        local_50 = 0x2f;
        String::parse_latin1((StrRange *)&local_78);
        vformat<String>(&local_58,(StrRange *)&local_78,&local_70);
        _err_print_error("FileAccessPack","core/io/file_access_pack.cpp",0x1e8,
                         "Condition \"err\" is true.",&local_58,0,0);
        pcVar9 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar3 = (long *)(local_58 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar9 + -0x10,false);
          }
        }
        lVar14 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar3 = (long *)(local_78 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        pOVar15 = local_70;
        if (local_70 != (Object *)0x0) {
          LOCK();
          pOVar4 = local_70 + -0x10;
          *(long *)pOVar4 = *(long *)pOVar4 + -1;
          UNLOCK();
          if (*(long *)pOVar4 == 0) {
            local_70 = (Object *)0x0;
            Memory::free_static(pOVar15 + -0x10,false);
          }
        }
        lVar14 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar3 = (long *)(local_60 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
      }
      pOVar15 = local_80;
      if (((local_80 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
         (cVar10 = predelete_handler(pOVar15), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar15,false);
          return;
        }
        goto LAB_0010468e;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010468e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PackedSourcePCK::get_file(String const&, PackedData::PackedFile*) */

String * PackedSourcePCK::get_file(String *param_1,PackedFile *param_2)

{
  char cVar1;
  FileAccessPack *this;
  PackedFile *in_RCX;
  String *in_RDX;
  
  this = (FileAccessPack *)operator_new(0x1e8,"");
  FileAccessPack::FileAccessPack(this,in_RDX,in_RCX);
  postinitialize_handler((Object *)this);
  *(FileAccessPack **)param_1 = this;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}



/* PackedSourcePCK::try_open_pack(String const&, bool, unsigned long) */

undefined8 __thiscall
PackedSourcePCK::try_open_pack(PackedSourcePCK *this,String *param_1,bool param_2,ulong param_3)

{
  ulong *__src;
  undefined1 uVar1;
  code *pcVar2;
  size_t __n;
  Object *pOVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  Object *pOVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  Object *pOVar17;
  ulong uVar18;
  char *pcVar19;
  ulong uVar20;
  int iVar21;
  long in_FS_OFFSET;
  Object *local_b0;
  Object *local_a8;
  Object *local_a0;
  long local_98;
  long local_90;
  char *local_88;
  long local_80;
  int local_78 [8];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_b0,(int)param_1,(Error *)0x1);
  if (local_b0 == (Object *)0x0) {
    uVar16 = 0;
    goto LAB_00104d6f;
  }
  (**(code **)(*(long *)local_b0 + 0x1b8))(local_b0,param_3);
  iVar6 = (**(code **)(*(long *)local_b0 + 0x1f0))();
  if (iVar6 != 0x43504447) {
    if (param_3 == 0) {
      plVar9 = (long *)OS::get_singleton();
      lVar10 = (**(code **)(*plVar9 + 0x260))(plVar9);
      if (lVar10 != 0) {
        lVar11 = lVar10 + 8;
        do {
          (**(code **)(*(long *)local_b0 + 0x1b8))(local_b0,lVar10);
          iVar6 = (**(code **)(*(long *)local_b0 + 0x1f0))();
          if (iVar6 == 0x43504447) {
            cVar4 = is_print_verbose_enabled();
            if (cVar4 == '\0') goto LAB_001049c0;
            String::num_int64((long)&local_a0,(int)lVar10 + -4,true);
            pcVar19 = "PCK header found in executable pck section, loading from offset 0x";
            goto LAB_001048e9;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar11);
      }
      (**(code **)(*(long *)local_b0 + 0x1c0))(local_b0,0);
      pOVar3 = local_b0;
      pcVar2 = *(code **)(*(long *)local_b0 + 0x1b8);
      (**(code **)(*(long *)local_b0 + 0x1c8))(local_b0);
      (*pcVar2)(pOVar3);
      iVar6 = (**(code **)(*(long *)local_b0 + 0x1f0))();
      pOVar3 = local_b0;
      if (iVar6 == 0x43504447) {
        pcVar2 = *(code **)(*(long *)local_b0 + 0x1b8);
        lVar10 = (**(code **)(*(long *)local_b0 + 0x1c8))(local_b0);
        (*pcVar2)(pOVar3,lVar10 + -0xc);
        (**(code **)(*(long *)local_b0 + 0x1f8))();
        pOVar3 = local_b0;
        pcVar2 = *(code **)(*(long *)local_b0 + 0x1b8);
        (**(code **)(*(long *)local_b0 + 0x1c8))(local_b0);
        (*pcVar2)(pOVar3);
        iVar6 = (**(code **)(*(long *)local_b0 + 0x1f0))();
        if (iVar6 == 0x43504447) {
          cVar4 = is_print_verbose_enabled();
          if (cVar4 != '\0') {
            iVar6 = (**(code **)(*(long *)local_b0 + 0x1c8))();
            String::num_int64((long)&local_a0,iVar6 + -4,true);
            pcVar19 = "PCK header found at the end of executable, loading from offset 0x";
LAB_001048e9:
            operator+((char *)&local_98,(String *)pcVar19);
            Variant::Variant((Variant *)local_78,(String *)&local_98);
            stringify_variants((Variant *)&local_88);
            __print_line((String *)&local_88);
            pcVar19 = local_88;
            if (local_88 != (char *)0x0) {
              LOCK();
              plVar9 = (long *)(local_88 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_88 = (char *)0x0;
                Memory::free_static(pcVar19 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar10 = local_98;
            if (local_98 != 0) {
              LOCK();
              plVar9 = (long *)(local_98 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_98 = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            pOVar3 = local_a0;
            if (local_a0 != (Object *)0x0) {
              LOCK();
              pOVar17 = local_a0 + -0x10;
              *(long *)pOVar17 = *(long *)pOVar17 + -1;
              UNLOCK();
              if (*(long *)pOVar17 == 0) {
                local_a0 = (Object *)0x0;
                Memory::free_static(pOVar3 + -0x10,false);
              }
            }
          }
          goto LAB_001049c0;
        }
      }
    }
    else {
      _err_print_error("try_open_pack","core/io/file_access_pack.cpp",0xd1,
                       "Method/function failed. Returning: false",
                       "Loading self-contained executable with offset not supported.",0,0);
    }
    goto LAB_00104dd3;
  }
LAB_001049c0:
  lVar10 = (**(code **)(*(long *)local_b0 + 0x1c8))();
  iVar6 = (**(code **)(*(long *)local_b0 + 0x1f0))();
  uVar7 = (**(code **)(*(long *)local_b0 + 0x1f0))();
  uVar8 = (**(code **)(*(long *)local_b0 + 0x1f0))();
  (**(code **)(*(long *)local_b0 + 0x1f0))();
  if (iVar6 == 2) {
    if ((4 < uVar7) || ((uVar7 == 4 && (4 < uVar8)))) {
      local_98 = 0;
      local_80 = 0x37;
      local_88 = "Pack created with a newer version of the engine: %d.%d.";
      String::parse_latin1((StrRange *)&local_98);
      vformat<unsigned_int,unsigned_int>((String *)&local_88,(uint)(StrRange *)&local_98,uVar7);
      pcVar19 = 
      "Condition \"ver_major > 4 || (ver_major == 4 && ver_minor > 4)\" is true. Returning: false";
      uVar16 = 0x10b;
      goto LAB_00105014;
    }
    iVar6 = 0x10;
    uVar7 = (**(code **)(*(long *)local_b0 + 0x1f0))();
    lVar11 = (**(code **)(*(long *)local_b0 + 0x1f8))();
    do {
      (**(code **)(*(long *)local_b0 + 0x1f0))();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (**(code **)(*(long *)local_b0 + 0x1f0))();
    if ((uVar7 & 2) != 0) {
      lVar11 = lVar10 + -4 + lVar11;
    }
    if ((uVar7 & 1) != 0) {
      local_a8 = (Object *)0x0;
      Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_a8);
      pOVar3 = local_a8;
      if (local_a8 == (Object *)0x0) {
        _err_print_error("try_open_pack","core/io/file_access_pack.cpp",0x121,
                         "Condition \"fae.is_null()\" is true. Returning: false",
                         "Can\'t open encrypted pack directory.",0,0);
      }
      else {
        local_90 = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_90,0x20);
        for (lVar10 = 0; (local_90 != 0 && (lVar10 < *(long *)(local_90 + -8))); lVar10 = lVar10 + 1
            ) {
          uVar1 = (&script_encryption_key)[lVar10];
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_90);
          *(undefined1 *)(local_90 + lVar10) = uVar1;
        }
        local_80 = 0;
        local_a0 = (Object *)0x0;
        if ((local_b0 != (Object *)0x0) &&
           (local_a0 = local_b0, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_a0 = (Object *)0x0;
        }
        iVar21 = FileAccessEncrypted::open_and_parse(pOVar3,&local_a0,&local_98,0,0,&local_88);
        if (((local_a0 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar3 = local_a0, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_a0), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        lVar10 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar9 = (long *)(local_80 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        pOVar17 = local_a8;
        pOVar3 = local_b0;
        if (iVar21 == 0) {
          if (local_a8 == (Object *)0x0) {
            if (local_b0 == (Object *)0x0) {
              if (local_90 == 0) goto LAB_00104aa7;
LAB_00104f7c:
              lVar10 = local_90;
              LOCK();
              plVar9 = (long *)(local_90 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              pOVar17 = local_a8;
              if (*plVar9 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
                pOVar17 = local_a8;
              }
            }
            else {
              local_b0 = (Object *)0x0;
LAB_00105227:
              cVar4 = RefCounted::unreference();
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
              if (local_90 != 0) goto LAB_00104f7c;
            }
            if (pOVar17 == (Object *)0x0) goto LAB_00104aa7;
          }
          else {
            pOVar13 = (Object *)__dynamic_cast(local_a8,&Object::typeinfo,&FileAccess::typeinfo,0);
            if (pOVar13 != pOVar3) {
              local_b0 = pOVar13;
              if ((pOVar13 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
                local_b0 = (Object *)0x0;
              }
              if (pOVar3 != (Object *)0x0) goto LAB_00105227;
            }
            if (local_90 != 0) goto LAB_00104f7c;
          }
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar17), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
            Memory::free_static(pOVar17,false);
          }
          goto LAB_00104aa7;
        }
        _err_print_error("try_open_pack","core/io/file_access_pack.cpp",0x12a,
                         "Condition \"err\" is true. Returning: false",
                         "Can\'t open encrypted pack directory.",0);
        lVar10 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar9 = (long *)(local_90 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        pOVar3 = local_a8;
        if (((local_a8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      goto LAB_00104dd3;
    }
LAB_00104aa7:
    iVar21 = 0;
    if (0 < iVar6) {
      do {
        uVar7 = (**(code **)(*(long *)local_b0 + 0x1f0))();
        uVar8 = uVar7 + 1;
        if ((int)uVar8 < 0) {
          puVar15 = (ulong *)0x0;
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
          (**(code **)(*(long *)local_b0 + 0x220))(local_b0,0,uVar7);
          uVar20 = 0;
LAB_00104d0d:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,(long)(int)uVar7,uVar20,"p_index",
                     "size()","",false,false);
        }
        else {
          if (uVar8 == 0) {
            (**(code **)(*(long *)local_b0 + 0x220))(local_b0,0,0xffffffff);
LAB_0010518c:
            puVar15 = (ulong *)0x0;
            uVar20 = 0;
            goto LAB_00104d0d;
          }
          uVar18 = (ulong)uVar7;
          uVar20 = (ulong)uVar8 - 1;
          uVar20 = uVar20 | uVar20 >> 1;
          uVar20 = uVar20 | uVar20 >> 2;
          uVar20 = uVar20 | uVar20 >> 4;
          uVar20 = uVar20 | uVar20 >> 8;
          puVar12 = (ulong *)Memory::alloc_static((uVar20 | uVar20 >> 0x10) + 0x11,false);
          if (puVar12 == (ulong *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            (**(code **)(*(long *)local_b0 + 0x220))(local_b0,0,uVar18);
            goto LAB_0010518c;
          }
          __src = puVar12 + 2;
          *puVar12 = 1;
          puVar12[1] = (ulong)uVar8;
          (**(code **)(*(long *)local_b0 + 0x220))(local_b0,__src,uVar18);
          uVar20 = puVar12[1];
          puVar15 = __src;
          if ((long)uVar20 <= (long)(int)uVar7) goto LAB_00104d0d;
          if (1 < *puVar12) {
            __n = puVar12[1];
            uVar20 = 0x10;
            if (__n != 0) {
              uVar20 = __n - 1 | __n - 1 >> 1;
              uVar20 = uVar20 | uVar20 >> 2;
              uVar20 = uVar20 | uVar20 >> 4;
              uVar20 = uVar20 | uVar20 >> 8;
              uVar20 = uVar20 | uVar20 >> 0x10;
              uVar20 = (uVar20 | uVar20 >> 0x20) + 0x11;
            }
            puVar14 = (undefined8 *)Memory::alloc_static(uVar20,false);
            if (puVar14 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar15 = puVar14 + 2;
              *puVar14 = 1;
              puVar14[1] = __n;
              memcpy(puVar15,__src,__n);
              LOCK();
              *puVar12 = *puVar12 - 1;
              UNLOCK();
              if (*puVar12 == 0) {
                Memory::free_static(puVar12,false);
              }
            }
          }
          *(undefined1 *)((long)puVar15 + uVar18) = 0;
        }
        local_88 = (char *)0x0;
        String::parse_utf8((char *)&local_88,(int)puVar15,SUB41(uVar7,0));
        lVar10 = (**(code **)(*(long *)local_b0 + 0x1f8))();
        uVar20 = (**(code **)(*(long *)local_b0 + 0x1f8))();
        (**(code **)(*(long *)local_b0 + 0x220))(local_b0,local_58,0x10);
        bVar5 = (**(code **)(*(long *)local_b0 + 0x1f0))();
        if ((bVar5 & 2) == 0) {
          PackedData::add_path
                    ((PackedData *)PackedData::singleton,param_1,(String *)&local_88,
                     lVar11 + param_3 + lVar10,uVar20,local_58,(PackSource *)this,param_2,
                     (bool)(bVar5 & 1));
        }
        else {
          PackedData::remove_path(PackedData::singleton);
        }
        pcVar19 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar9 = (long *)(local_88 + -0x10);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar19 + -0x10,false);
          }
        }
        if (puVar15 != (ulong *)0x0) {
          puVar15 = puVar15 + -2;
          LOCK();
          *puVar15 = *puVar15 - 1;
          UNLOCK();
          if (*puVar15 == 0) {
            Memory::free_static(puVar15,false);
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar6 != iVar21);
    }
    uVar16 = 1;
  }
  else {
    local_98 = 0;
    local_80 = 0x1d;
    local_88 = "Pack version unsupported: %d.";
    String::parse_latin1((StrRange *)&local_98);
    vformat<unsigned_int>((String *)&local_88,(uint)(StrRange *)&local_98);
    pcVar19 = "Condition \"version != 2\" is true. Returning: false";
    uVar16 = 0x10a;
LAB_00105014:
    _err_print_error("try_open_pack","core/io/file_access_pack.cpp",uVar16,pcVar19,&local_88,0,0);
    pcVar19 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar9 = (long *)(local_88 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar19 + -0x10,false);
      }
    }
    lVar10 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar9 = (long *)(local_98 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
LAB_00104dd3:
    uVar16 = 0;
  }
  if (((local_b0 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_b0, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_b0), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00104d6f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<PackSource*>::push_back(PackSource*) [clone .isra.0] */

void __thiscall Vector<PackSource*>::push_back(Vector<PackSource*> *this,PackSource *param_1)

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
  iVar1 = CowData<PackSource*>::resize<false>((CowData<PackSource*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<PackSource*>::_copy_on_write((CowData<PackSource*> *)(this + 8));
        *(PackSource **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* PackedData::PackedData() */

void __thiscall PackedData::PackedData(PackedData *this)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  PackSource *pPVar3;
  
  uVar1 = _LC49;
  *(undefined8 *)(this + 0x28) = _LC49;
  this[0x48] = (PackedData)0x0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  singleton = this;
  pauVar2 = (undefined1 (*) [16])operator_new(0x68,"");
  *(undefined8 *)(pauVar2[3] + 8) = uVar1;
  *(undefined8 *)pauVar2[6] = uVar1;
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar2[1] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar2[2] + 8) = (undefined1  [16])0x0;
  pauVar2[4] = (undefined1  [16])0x0;
  pauVar2[5] = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(this + 0x40) = pauVar2;
  pPVar3 = (PackSource *)operator_new(8,"");
  *(undefined ***)pPVar3 = &PTR_try_open_pack_0010b1f8;
  Vector<PackSource*>::push_back((Vector<PackSource*> *)(this + 0x30),pPVar3);
  return;
}



/* PackedData::add_pack_source(PackSource*) */

void __thiscall PackedData::add_pack_source(PackedData *this,PackSource *param_1)

{
  if (param_1 != (PackSource *)0x0) {
    Vector<PackSource*>::push_back((Vector<PackSource*> *)(this + 0x30),param_1);
    return;
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



/* DirAccess::is_class_ptr(void*) const */

uint __thiscall DirAccess::is_class_ptr(DirAccess *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* DirAccess::_getv(StringName const&, Variant&) const */

undefined8 DirAccess::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DirAccess::_setv(StringName const&, Variant const&) */

undefined8 DirAccess::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DirAccess::_validate_propertyv(PropertyInfo&) const */

void DirAccess::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* DirAccess::_property_can_revertv(StringName const&) const */

undefined8 DirAccess::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DirAccess::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DirAccess::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DirAccess::_notificationv(int, bool) */

void DirAccess::_notificationv(int param_1,bool param_2)

{
  return;
}



/* DirAccess::is_readable(String) */

undefined8 DirAccess::is_readable(void)

{
  return 1;
}



/* DirAccess::is_writable(String) */

undefined8 DirAccess::is_writable(void)

{
  return 1;
}



/* DirAccess::is_bundle(String const&) const */

undefined8 DirAccess::is_bundle(String *param_1)

{
  return 0;
}



/* FileAccess::is_class_ptr(void*) const */

uint __thiscall FileAccess::is_class_ptr(FileAccess *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* FileAccessPack::_get_modified_time(String const&) */

undefined8 FileAccessPack::_get_modified_time(String *param_1)

{
  return 0;
}



/* FileAccessPack::_get_unix_permissions(String const&) */

undefined8 FileAccessPack::_get_unix_permissions(String *param_1)

{
  return 0;
}



/* FileAccessPack::_set_unix_permissions(String const&, BitField<FileAccess::UnixPermissionFlags>)
    */

undefined8 FileAccessPack::_set_unix_permissions(void)

{
  return 1;
}



/* FileAccessPack::_get_hidden_attribute(String const&) */

undefined8 FileAccessPack::_get_hidden_attribute(String *param_1)

{
  return 0;
}



/* FileAccessPack::_set_hidden_attribute(String const&, bool) */

undefined8 FileAccessPack::_set_hidden_attribute(String *param_1,bool param_2)

{
  return 2;
}



/* FileAccessPack::_get_read_only_attribute(String const&) */

undefined8 FileAccessPack::_get_read_only_attribute(String *param_1)

{
  return 0;
}



/* FileAccessPack::_set_read_only_attribute(String const&, bool) */

undefined8 FileAccessPack::_set_read_only_attribute(String *param_1,bool param_2)

{
  return 2;
}



/* FileAccessPack::resize(long) */

undefined8 FileAccessPack::resize(long param_1)

{
  return 2;
}



/* DirAccessPack::is_link(String) */

undefined8 DirAccessPack::is_link(void)

{
  return 0;
}



/* DirAccessPack::read_link(String) */

undefined8 * DirAccessPack::read_link(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_1 = uVar1;
  return param_1;
}



/* DirAccessPack::create_link(String, String) */

undefined8 DirAccessPack::create_link(void)

{
  return 1;
}



/* PackedSourceDirectory::~PackedSourceDirectory() */

void __thiscall PackedSourceDirectory::~PackedSourceDirectory(PackedSourceDirectory *this)

{
  return;
}



/* PackedSourcePCK::~PackedSourcePCK() */

void __thiscall PackedSourcePCK::~PackedSourcePCK(PackedSourcePCK *this)

{
  return;
}



/* PackedSourceDirectory::~PackedSourceDirectory() */

void __thiscall PackedSourceDirectory::~PackedSourceDirectory(PackedSourceDirectory *this)

{
  operator_delete(this,8);
  return;
}



/* PackedSourcePCK::~PackedSourcePCK() */

void __thiscall PackedSourcePCK::~PackedSourcePCK(PackedSourcePCK *this)

{
  operator_delete(this,8);
  return;
}



/* CowData<PackSource*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<PackSource*>::_copy_on_write(void)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105ff8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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
LAB_00106043:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106043;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
      goto LAB_001060ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
LAB_001060ae:
  return &_get_class_namev()::_class_name_static;
}



/* DirAccess::_get_class_namev() const */

undefined8 * DirAccess::_get_class_namev(void)

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
LAB_00106123:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106123;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DirAccess");
      goto LAB_0010618e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DirAccess");
LAB_0010618e:
  return &_get_class_namev()::_class_name_static;
}



/* FileAccess::get_path() const */

FileAccess * __thiscall FileAccess::get_path(FileAccess *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccess::get_path_absolute() const */

FileAccess * __thiscall FileAccess::get_path_absolute(FileAccess *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccess::get_class() const */

void DirAccess::get_class(void)

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



/* FileAccessPack::~FileAccessPack() */

void __thiscall FileAccessPack::~FileAccessPack(FileAccessPack *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b258;
  if (*(long *)(this + 0x1e0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1e0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      FileAccess::~FileAccess((FileAccess *)this);
      return;
    }
  }
  FileAccess::~FileAccess((FileAccess *)this);
  return;
}



/* FileAccessPack::~FileAccessPack() */

void __thiscall FileAccessPack::~FileAccessPack(FileAccessPack *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b258;
  if (*(long *)(this + 0x1e0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1e0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  FileAccess::~FileAccess((FileAccess *)this);
  operator_delete(this,0x1e8);
  return;
}



/* DirAccessPack::~DirAccessPack() */

void __thiscall DirAccessPack::~DirAccessPack(DirAccessPack *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x1a0);
  *(undefined ***)this = &PTR__initialize_classv_0010b558;
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      if (plVar2 == (long *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010665f;
        }
        break;
      }
      if ((long *)plVar2[3] == plVar5) {
        lVar4 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar5 = lVar4;
        if (plVar2 == (long *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = plVar2[1];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x1a0);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_0010665f:
  plVar5 = *(long **)(this + 0x198);
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      if (plVar2 == (long *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001066ea;
        }
        break;
      }
      if ((long *)plVar2[3] == plVar5) {
        lVar4 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar5 = lVar4;
        if (plVar2 == (long *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = plVar2[1];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x198);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_001066ea:
  DirAccess::~DirAccess((DirAccess *)this);
  return;
}



/* DirAccessPack::~DirAccessPack() */

void __thiscall DirAccessPack::~DirAccessPack(DirAccessPack *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x1a0);
  *(undefined ***)this = &PTR__initialize_classv_0010b558;
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      if (plVar2 == (long *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001068cf;
        }
        break;
      }
      if ((long *)plVar2[3] == plVar5) {
        lVar4 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar5 = lVar4;
        if (plVar2 == (long *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = plVar2[1];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x1a0);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_001068cf:
  plVar5 = *(long **)(this + 0x198);
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      if (plVar2 == (long *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010695a;
        }
        break;
      }
      if ((long *)plVar2[3] == plVar5) {
        lVar4 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar5 = lVar4;
        if (plVar2 == (long *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = plVar2[1];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x198);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_0010695a:
  DirAccess::~DirAccess((DirAccess *)this);
  operator_delete(this,0x1b0);
  return;
}



/* DirAccess::_initialize_classv() */

void DirAccess::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00106c2b;
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
LAB_00106d3a:
      if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
LAB_00106d4a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00106d3a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) goto LAB_00106d4a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "DirAccess";
  local_70 = 0;
  local_50 = 9;
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
    DirAccess::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00106c2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  if (initialize_class()::initialized != '\0') goto LAB_00106f40;
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
LAB_0010704e:
      if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
LAB_0010705e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010704e;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) goto LAB_0010705e;
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
  if ((code *)PTR__bind_methods_0010f010 != RefCounted::_bind_methods) {
    FileAccess::_bind_methods();
  }
  if ((code *)PTR__bind_compatibility_methods_0010f018 != Object::_bind_compatibility_methods) {
    FileAccess::_bind_compatibility_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00106f40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
            if (lVar5 == 0) goto LAB_0010713f;
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
LAB_0010713f:
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
    if (cVar6 != '\0') goto LAB_001071f3;
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
              if (lVar5 == 0) goto LAB_001072a3;
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
LAB_001072a3:
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
      if (cVar6 != '\0') goto LAB_001071f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001071f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccess::is_class(String const&) const */

undefined8 __thiscall DirAccess::is_class(DirAccess *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001073cf;
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
LAB_001073cf:
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
    if (cVar5 != '\0') goto LAB_00107483;
  }
  cVar5 = String::operator==(param_1,"DirAccess");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00107483:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccess::is_class(String const&) const */

undefined8 __thiscall FileAccess::is_class(FileAccess *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010754f;
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
LAB_0010754f:
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
    if (cVar5 != '\0') goto LAB_00107603;
  }
  cVar5 = String::operator==(param_1,"FileAccess");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00107603:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_001077c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001077c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001077e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001077e6:
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



/* DirAccess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall DirAccess::_get_property_listv(DirAccess *this,List *param_1,bool param_2)

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
  local_78 = "DirAccess";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DirAccess";
  local_98 = 0;
  local_70 = 9;
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
LAB_00107bc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107bc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107be5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107be5:
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
  StringName::StringName((StringName *)&local_78,"DirAccess",false);
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
LAB_00108018:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108018;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108035;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108035:
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



/* WARNING: Removing unreachable block (ram,0x00108478) */
/* WARNING: Removing unreachable block (ram,0x001085a8) */
/* WARNING: Removing unreachable block (ram,0x00108770) */
/* WARNING: Removing unreachable block (ram,0x001085b4) */
/* WARNING: Removing unreachable block (ram,0x001085be) */
/* WARNING: Removing unreachable block (ram,0x00108750) */
/* WARNING: Removing unreachable block (ram,0x001085ca) */
/* WARNING: Removing unreachable block (ram,0x001085d4) */
/* WARNING: Removing unreachable block (ram,0x00108730) */
/* WARNING: Removing unreachable block (ram,0x001085e0) */
/* WARNING: Removing unreachable block (ram,0x001085ea) */
/* WARNING: Removing unreachable block (ram,0x00108710) */
/* WARNING: Removing unreachable block (ram,0x001085f6) */
/* WARNING: Removing unreachable block (ram,0x00108600) */
/* WARNING: Removing unreachable block (ram,0x001086f0) */
/* WARNING: Removing unreachable block (ram,0x0010860c) */
/* WARNING: Removing unreachable block (ram,0x00108616) */
/* WARNING: Removing unreachable block (ram,0x001086d0) */
/* WARNING: Removing unreachable block (ram,0x00108622) */
/* WARNING: Removing unreachable block (ram,0x0010862c) */
/* WARNING: Removing unreachable block (ram,0x001086b0) */
/* WARNING: Removing unreachable block (ram,0x00108634) */
/* WARNING: Removing unreachable block (ram,0x0010864a) */
/* WARNING: Removing unreachable block (ram,0x00108656) */
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<PackedData::PathMD5, PackedData::PackedFile, PackedData::PathMD5,
   HashMapComparatorDefault<PackedData::PathMD5>,
   DefaultTypedAllocator<HashMapElement<PackedData::PathMD5, PackedData::PackedFile> >
   >::operator[](PackedData::PathMD5 const&) */

undefined1 (*) [16] __thiscall
HashMap<PackedData::PathMD5,PackedData::PackedFile,PackedData::PathMD5,HashMapComparatorDefault<PackedData::PathMD5>,DefaultTypedAllocator<HashMapElement<PackedData::PathMD5,PackedData::PackedFile>>>
::operator[](HashMap<PackedData::PathMD5,PackedData::PackedFile,PackedData::PathMD5,HashMapComparatorDefault<PackedData::PathMD5>,DefaultTypedAllocator<HashMapElement<PackedData::PathMD5,PackedData::PackedFile>>>
             *this,PathMD5 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_128;
  void *local_108;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_40;
  
  local_108 = *(void **)(this + 8);
  lVar49 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = *(long *)(param_1 + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar38);
  if (local_108 == (void *)0x0) {
    local_d8 = 0;
    uVar40 = uVar51 * 4;
    local_d0 = (undefined1  [16])0x0;
    uVar47 = uVar51 * 8;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_108 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = local_108;
    if (uVar38 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      lVar49 = *(long *)param_1;
      local_128 = *(long *)(param_1 + 8);
      if (local_108 == (void *)0x0) goto LAB_00108ba7;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_108 + uVar47)) &&
         (local_108 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_108 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(local_108,0,uVar47);
      }
      iVar44 = *(int *)(this + 0x2c);
      lVar49 = *(long *)param_1;
      local_128 = *(long *)(param_1 + 8);
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar50 = *(long *)(this + 0x10);
      goto LAB_00108a20;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 == 0) {
      local_d8 = 0;
      local_d0 = (undefined1  [16])0x0;
      local_c0 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
    }
    else {
      uVar47 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = ((int)lVar49 * 0x16a88000 | (uint)((int)lVar49 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar37 = (uVar37 << 0xd | uVar37 >> 0x13) * 5 + 0xe6546b64 ^
               ((int)local_128 * 0x16a88000 | (uint)((int)local_128 * -0x3361d2af) >> 0x11) *
               0x1b873593;
      uVar37 = (uVar37 << 0xd | uVar37 >> 0x13) * 5 + 0xe6546b64;
      uVar37 = (uVar37 >> 0x10 ^ uVar37) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar54 = 1;
        uVar43 = uVar47;
      }
      else {
        uVar43 = uVar54 * uVar47;
      }
      lVar50 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar43;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar50 + lVar45 * 4);
      uVar55 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar52 = 0;
        do {
          if (((uVar54 == uVar37) &&
              (lVar45 = *(long *)((long)local_108 + lVar45 * 8), lVar49 == *(long *)(lVar45 + 0x10))
              ) && (local_128 == *(long *)(lVar45 + 0x18))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_108 + (ulong)uVar55 * 8);
            goto LAB_001089d1;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar55 + 1) * uVar47;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar50 + lVar45 * 4);
          uVar55 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar47, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar55 + uVar38) - SUB164(auVar6 * auVar22,8)) * uVar47,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_d8 = 0;
      local_d0 = (undefined1  [16])0x0;
      local_c0 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
LAB_00108a20:
      uVar47 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar38 = ((int)lVar49 * 0x16a88000 | (uint)((int)lVar49 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar38 = (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64 ^
               ((int)local_128 * 0x16a88000 | (uint)((int)local_128 * -0x3361d2af) >> 0x11) *
               0x1b873593;
      uVar38 = (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64;
      uVar38 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar47;
      }
      else {
        uVar43 = uVar37 * uVar47;
      }
      uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar53;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar43;
      lVar45 = SUB168(auVar8 * auVar24,8);
      uVar38 = *(uint *)(lVar50 + lVar45 * 4);
      uVar54 = SUB164(auVar8 * auVar24,8);
      if (uVar38 != 0) {
        uVar55 = 0;
        do {
          if (((uVar37 == uVar38) &&
              (lVar45 = *(long *)((long)local_108 + lVar45 * 8), *(long *)(lVar45 + 0x10) == lVar49)
              ) && (*(long *)(lVar45 + 0x18) == local_128)) {
            lVar49 = *(long *)((long)local_108 + (ulong)uVar54 * 8);
            if (*(long *)(lVar49 + 0x20) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x20),(CowData *)&local_d8);
            }
            *(undefined8 *)(lVar49 + 0x48) = 0;
            *(undefined1 *)(lVar49 + 0x50) = 0;
            *(undefined8 *)(lVar49 + 0x38) = local_c0._0_8_;
            *(undefined8 *)(lVar49 + 0x40) = local_c0._8_8_;
            lVar50 = *(long *)(this + 8);
            *(undefined1 (*) [16])(lVar49 + 0x28) = (undefined1  [16])0x0;
            pauVar42 = *(undefined1 (**) [16])(lVar50 + (ulong)uVar54 * 8);
            goto LAB_001089d1;
          }
          uVar55 = uVar55 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (uVar54 + 1) * uVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar53;
          lVar45 = SUB168(auVar9 * auVar25,8);
          uVar38 = *(uint *)(lVar50 + lVar45 * 4);
          uVar54 = SUB164(auVar9 * auVar25,8);
        } while ((uVar38 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar38 * uVar47, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar53, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar54) -
                     SUB164(auVar10 * auVar26,8)) * uVar47, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar53, uVar55 <= SUB164(auVar11 * auVar27,8)));
      }
    }
  }
LAB_00108ba7:
  if ((float)uVar51 * __LC40 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001089d1;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar47 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar47 * 4;
    uVar51 = uVar47 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar47 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar37 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar49 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar54);
          lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar38 * lVar50;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar51;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar49 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar55 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_108 + uVar40 * 8);
          while (uVar55 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar55 * lVar50;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar51;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((iVar44 + uVar54) - SUB164(auVar13 * auVar29,8)) * lVar50;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar51;
            uVar39 = SUB164(auVar14 * auVar30,8);
            uVar48 = uVar41;
            if (uVar39 < uVar52) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar55;
              uVar52 = uVar39;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar50;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar51;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar49 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar41 = uVar48;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar37);
      Memory::free_static(local_108,false);
      Memory::free_static(pvVar3,false);
    }
  }
  local_88 = *(undefined8 *)param_1;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  local_60 = local_c0._0_8_;
  uStack_58 = local_c0._8_8_;
  pauVar42 = (undefined1 (*) [16])operator_new(0x58,"");
  *(undefined8 *)pauVar42[2] = 0;
  *(undefined8 *)(pauVar42[4] + 8) = 0;
  pauVar42[5][0] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar42[1] = local_88;
  *(undefined8 *)(pauVar42[1] + 8) = uStack_80;
  *(undefined1 (*) [16])(pauVar42[2] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar42[3] + 8) = local_60;
  *(undefined8 *)pauVar42[4] = uStack_58;
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    **(undefined8 **)(this + 0x20) = pauVar42;
    *(undefined8 *)(*pauVar42 + 8) = *(undefined8 *)(this + 0x20);
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = (*(int *)param_1 * 0x16a88000 | (uint)(*(int *)param_1 * -0x3361d2af) >> 0x11) *
           0x1b873593 ^ 0x7f07c65;
  uVar38 = (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(param_1 + 8) * 0x16a88000 | (uint)(*(int *)(param_1 + 8) * -0x3361d2af) >> 0x11
           ) * 0x1b873593;
  uVar38 = (uVar38 << 0xd | uVar38 >> 0x13) * 5 + 0xe6546b64;
  uVar38 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
  uVar37 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar37 ^ uVar37 >> 0x10;
  if (uVar37 == uVar37 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar55 = 0;
  lVar49 = *(long *)(this + 0x10);
  lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar37);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar40 * lVar50;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar51;
  lVar46 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar49 + lVar46 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar54 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar54 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar54 * lVar50;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar51;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar50;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar51;
    uVar52 = SUB164(auVar18 * auVar34,8);
    pauVar56 = pauVar36;
    if (uVar52 < uVar55) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar45 + lVar46 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar54;
      uVar55 = uVar52;
    }
    uVar55 = uVar55 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar50;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar51;
    lVar46 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar49 + lVar46 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    pauVar36 = pauVar56;
    uVar54 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001089d1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, PackedData::PackedDir*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, PackedData::PackedDir*> > >::operator[](String
   const&) */

undefined1 * __thiscall
HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
::operator[](HashMap<String,PackedData::PackedDir*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PackedData::PackedDir*>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  undefined1 auVar4 [16];
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
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00109848:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_001096da;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_001096de:
      if (iVar45 != 0) {
LAB_001096e6:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar38 == uVar52) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010958b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_001091c4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001091c4;
    if (iVar45 != 0) goto LAB_001096e6;
LAB_001091ea:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010958b;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_0010958b;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00109848;
LAB_001096da:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001096de;
    }
LAB_001091c4:
    if ((float)uVar39 * __LC40 < (float)(iVar45 + 1)) goto LAB_001091ea;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_0010981b:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00109473:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00109480;
LAB_001096b5:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_0010981b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00109473;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_001096b5;
LAB_00109480:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010958b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined1 auVar4 [16];
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00109a0c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_00109a0c:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_00109d89;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC40 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00109d89;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_00109d89:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
}



/* void memdelete<PackedData::PackedDir>(PackedData::PackedDir*) */

void memdelete<PackedData::PackedDir>(PackedDir *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x40);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(param_1 + 100) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x60) * 4) != 0) {
        memset(*(void **)(param_1 + 0x58),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x60) * 4) << 2)
        ;
        if (*(int *)(param_1 + 100) == 0) goto LAB_0010a1a0;
      }
      lVar5 = 0;
      do {
        plVar2 = (long *)((long)pvVar6 + lVar5 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
          pvVar6 = *(void **)(param_1 + 0x40);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(param_1 + 100));
      *(undefined4 *)(param_1 + 100) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_0010a0c6;
    }
LAB_0010a1a0:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(param_1 + 0x50),false);
    Memory::free_static(*(void **)(param_1 + 0x48),false);
    Memory::free_static(*(void **)(param_1 + 0x58),false);
  }
LAB_0010a0c6:
  pvVar6 = *(void **)(param_1 + 0x18);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x38) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x20) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(param_1 + 0x20) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar4 = *(long *)((long)pvVar6 + 0x10);
                *(undefined8 *)((long)pvVar6 + 0x10) = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(param_1 + 0x18);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar3 << 2 != lVar5);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010a177;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(param_1 + 0x20),false);
  }
LAB_0010a177:
  if (*(long *)(param_1 + 8) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(param_1 + 8) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar5 = *(long *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010a338) */
/* WARNING: Removing unreachable block (ram,0x0010a468) */
/* WARNING: Removing unreachable block (ram,0x0010a630) */
/* WARNING: Removing unreachable block (ram,0x0010a474) */
/* WARNING: Removing unreachable block (ram,0x0010a47e) */
/* WARNING: Removing unreachable block (ram,0x0010a610) */
/* WARNING: Removing unreachable block (ram,0x0010a48a) */
/* WARNING: Removing unreachable block (ram,0x0010a494) */
/* WARNING: Removing unreachable block (ram,0x0010a5f0) */
/* WARNING: Removing unreachable block (ram,0x0010a4a0) */
/* WARNING: Removing unreachable block (ram,0x0010a4aa) */
/* WARNING: Removing unreachable block (ram,0x0010a5d0) */
/* WARNING: Removing unreachable block (ram,0x0010a4b6) */
/* WARNING: Removing unreachable block (ram,0x0010a4c0) */
/* WARNING: Removing unreachable block (ram,0x0010a5b0) */
/* WARNING: Removing unreachable block (ram,0x0010a4cc) */
/* WARNING: Removing unreachable block (ram,0x0010a4d6) */
/* WARNING: Removing unreachable block (ram,0x0010a590) */
/* WARNING: Removing unreachable block (ram,0x0010a4e2) */
/* WARNING: Removing unreachable block (ram,0x0010a4ec) */
/* WARNING: Removing unreachable block (ram,0x0010a570) */
/* WARNING: Removing unreachable block (ram,0x0010a4f4) */
/* WARNING: Removing unreachable block (ram,0x0010a50a) */
/* WARNING: Removing unreachable block (ram,0x0010a516) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String * vformat<unsigned_int>(String *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
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



/* WARNING: Removing unreachable block (ram,0x0010a7b0) */
/* WARNING: Removing unreachable block (ram,0x0010a8e0) */
/* WARNING: Removing unreachable block (ram,0x0010aa59) */
/* WARNING: Removing unreachable block (ram,0x0010a8ec) */
/* WARNING: Removing unreachable block (ram,0x0010a8f6) */
/* WARNING: Removing unreachable block (ram,0x0010aa3b) */
/* WARNING: Removing unreachable block (ram,0x0010a902) */
/* WARNING: Removing unreachable block (ram,0x0010a90c) */
/* WARNING: Removing unreachable block (ram,0x0010aa1d) */
/* WARNING: Removing unreachable block (ram,0x0010a918) */
/* WARNING: Removing unreachable block (ram,0x0010a922) */
/* WARNING: Removing unreachable block (ram,0x0010a9ff) */
/* WARNING: Removing unreachable block (ram,0x0010a92e) */
/* WARNING: Removing unreachable block (ram,0x0010a938) */
/* WARNING: Removing unreachable block (ram,0x0010a9e1) */
/* WARNING: Removing unreachable block (ram,0x0010a944) */
/* WARNING: Removing unreachable block (ram,0x0010a94e) */
/* WARNING: Removing unreachable block (ram,0x0010a9c3) */
/* WARNING: Removing unreachable block (ram,0x0010a956) */
/* WARNING: Removing unreachable block (ram,0x0010a960) */
/* WARNING: Removing unreachable block (ram,0x0010a9a8) */
/* WARNING: Removing unreachable block (ram,0x0010a968) */
/* WARNING: Removing unreachable block (ram,0x0010a97e) */
/* WARNING: Removing unreachable block (ram,0x0010a98a) */
/* String vformat<unsigned int, unsigned int>(String const&, unsigned int const, unsigned int const)
    */

String * vformat<unsigned_int,unsigned_int>(String *param_1,uint param_2,uint param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  uint in_ECX;
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



/* void Ref<FileAccessEncrypted>::instantiate<>() */

void __thiscall Ref<FileAccessEncrypted>::instantiate<>(Ref<FileAccessEncrypted> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(0x1f0,"");
  RefCounted::RefCounted(this_00);
  *(undefined2 *)(this_00 + 0x17c) = 0;
  *(undefined4 *)(this_00 + 0x180) = 2;
  *(undefined2 *)(this_00 + 0x184) = 0;
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined8 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  this_00[0x1b0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b8) = 0;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  *(undefined2 *)(this_00 + 0x1e8) = 0x100;
  *(undefined1 (*) [16])(this_00 + 0x1c0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (RefCounted *)pOVar3) goto LAB_0010aba5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010aba5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0010aba5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* CowData<char>::_realloc(long) */

undefined8 __thiscall CowData<char>::_realloc(CowData<char> *this,long param_1)

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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
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



/* CowData<PackSource*>::_realloc(long) */

undefined8 __thiscall CowData<PackSource*>::_realloc(CowData<PackSource*> *this,long param_1)

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
/* Error CowData<PackSource*>::resize<false>(long) */

undefined8 __thiscall CowData<PackSource*>::resize<false>(CowData<PackSource*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010b0b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010b0b0;
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
        goto LAB_0010afc1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010afc1:
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
/* DirAccessPack::~DirAccessPack() */

void __thiscall DirAccessPack::~DirAccessPack(DirAccessPack *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FileAccessPack::~FileAccessPack() */

void __thiscall FileAccessPack::~FileAccessPack(FileAccessPack *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PackedSourcePCK::~PackedSourcePCK() */

void __thiscall PackedSourcePCK::~PackedSourcePCK(PackedSourcePCK *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PackedSourceDirectory::~PackedSourceDirectory() */

void __thiscall PackedSourceDirectory::~PackedSourceDirectory(PackedSourceDirectory *this)

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


