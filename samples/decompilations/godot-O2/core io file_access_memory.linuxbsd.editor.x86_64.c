
/* FileAccessMemory::open_custom(unsigned char const*, unsigned long) */

undefined8 __thiscall
FileAccessMemory::open_custom(FileAccessMemory *this,uchar *param_1,ulong param_2)

{
  *(uchar **)(this + 400) = param_1;
  *(ulong *)(this + 0x198) = param_2;
  *(undefined8 *)(this + 0x1a0) = 0;
  return 0;
}



/* FileAccessMemory::is_open() const */

bool __thiscall FileAccessMemory::is_open(FileAccessMemory *this)

{
  return *(long *)(this + 400) != 0;
}



/* FileAccessMemory::eof_reached() const */

undefined8 __thiscall FileAccessMemory::eof_reached(FileAccessMemory *this)

{
  return CONCAT71((int7)(*(ulong *)(this + 0x198) >> 8),
                  *(ulong *)(this + 0x198) <= *(ulong *)(this + 0x1a0));
}



/* FileAccessMemory::get_error() const */

byte __thiscall FileAccessMemory::get_error(FileAccessMemory *this)

{
  return ~-(*(ulong *)(this + 0x1a0) < *(ulong *)(this + 0x198)) & 0x12;
}



/* FileAccessMemory::store_buffer(unsigned char const*, unsigned long) */

undefined8 __thiscall
FileAccessMemory::store_buffer(FileAccessMemory *this,uchar *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong __n;
  
  if (param_2 != 0) {
    if (param_1 == (uchar *)0x0) {
      _err_print_error("store_buffer","core/io/file_access_memory.cpp",0x9d,
                       "Parameter \"p_src\" is null.",0,0);
      uVar1 = 0;
    }
    else {
      __n = *(long *)(this + 0x198) - *(long *)(this + 0x1a0);
      if (param_2 < __n) {
        __n = param_2;
      }
      memcpy((void *)(*(long *)(this + 0x1a0) + *(long *)(this + 400)),param_1,__n);
      *(ulong *)(this + 0x1a0) = *(long *)(this + 0x1a0) + __n;
      uVar1 = 1;
      if (__n < param_2) {
        _err_print_error("store_buffer","core/io/file_access_memory.cpp",0xa5,
                         "Condition \"write < p_length\" is true. Returning: false",
                         "Writing less data than requested.",0,0);
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 1;
}



/* FileAccessMemory::seek(unsigned long) */

void __thiscall FileAccessMemory::seek(FileAccessMemory *this,ulong param_1)

{
  if (*(long *)(this + 400) != 0) {
    *(ulong *)(this + 0x1a0) = param_1;
    return;
  }
  _err_print_error(&_LC6,"core/io/file_access_memory.cpp",100,"Parameter \"data\" is null.",0,0);
  return;
}



/* FileAccessMemory::seek_end(long) */

void __thiscall FileAccessMemory::seek_end(FileAccessMemory *this,long param_1)

{
  if (*(long *)(this + 400) != 0) {
    *(long *)(this + 0x1a0) = param_1 + *(long *)(this + 0x198);
    return;
  }
  _err_print_error("seek_end","core/io/file_access_memory.cpp",0x69,"Parameter \"data\" is null.",0,
                   0);
  return;
}



/* FileAccessMemory::get_position() const */

undefined8 __thiscall FileAccessMemory::get_position(FileAccessMemory *this)

{
  if (*(long *)(this + 400) != 0) {
    return *(undefined8 *)(this + 0x1a0);
  }
  _err_print_error("get_position","core/io/file_access_memory.cpp",0x6e,
                   "Parameter \"data\" is null.",0,0);
  return 0;
}



/* FileAccessMemory::get_length() const */

undefined8 __thiscall FileAccessMemory::get_length(FileAccessMemory *this)

{
  if (*(long *)(this + 400) != 0) {
    return *(undefined8 *)(this + 0x198);
  }
  _err_print_error("get_length","core/io/file_access_memory.cpp",0x73,"Parameter \"data\" is null.",
                   0,0);
  return 0;
}



/* FileAccessMemory::flush() */

void __thiscall FileAccessMemory::flush(FileAccessMemory *this)

{
  if (*(long *)(this + 400) != 0) {
    return;
  }
  _err_print_error("flush","core/io/file_access_memory.cpp",0x95,"Parameter \"data\" is null.",0,0);
  return;
}



/* FileAccessMemory::get_buffer(unsigned char*, unsigned long) const */

ulong __thiscall FileAccessMemory::get_buffer(FileAccessMemory *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_1 == (uchar *)0x0) {
      _err_print_error("get_buffer","core/io/file_access_memory.cpp",0x80,
                       "Parameter \"p_dst\" is null.",0,0);
    }
    else {
      lVar3 = *(long *)(this + 400);
      if (lVar3 != 0) {
        lVar1 = *(long *)(this + 0x1a0);
        uVar2 = *(long *)(this + 0x198) - lVar1;
        if (param_2 < (ulong)(*(long *)(this + 0x198) - lVar1)) {
          uVar2 = param_2;
        }
        if (uVar2 < param_2) {
          _err_print_error("get_buffer","core/io/file_access_memory.cpp",0x87,
                           "Reading less data than requested",0,1);
          lVar3 = *(long *)(this + 400);
          lVar1 = *(long *)(this + 0x1a0);
        }
        memcpy(param_1,(void *)(lVar3 + lVar1),uVar2);
        *(ulong *)(this + 0x1a0) = *(long *)(this + 0x1a0) + uVar2;
        return uVar2;
      }
      _err_print_error("get_buffer","core/io/file_access_memory.cpp",0x81,
                       "Parameter \"data\" is null.",0,0);
    }
    uVar2 = 0xffffffffffffffff;
  }
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



/* FileAccessMemory::file_exists(String const&) */

undefined4 __thiscall FileAccessMemory::file_exists(FileAccessMemory *this,String *param_1)

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
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined4 uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x180))((String *)&local_48,this,param_1);
  lVar12 = files;
  if ((files != 0) && (*(long *)(files + 8) != 0)) {
    uVar18 = 0;
    if (*(int *)(files + 0x2c) == 0) goto LAB_00100612;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(files + 0x28) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(files + 0x28) * 8);
    uVar14 = String::hash();
    uVar20 = CONCAT44(0,uVar2);
    lVar19 = *(long *)(lVar12 + 0x10);
    uVar15 = 1;
    if (uVar14 != 0) {
      uVar15 = uVar14;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar15 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar20;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(lVar19 + lVar17 * 4);
    uVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar14 != 0) {
      uVar21 = 0;
      do {
        if (uVar15 == uVar14) {
          cVar13 = String::operator==((String *)
                                      (*(long *)(*(long *)(lVar12 + 8) + lVar17 * 8) + 0x10),
                                      (String *)&local_48);
          if (cVar13 != '\0') {
            uVar18 = CONCAT31((int3)(uVar16 >> 8),
                              *(long *)(*(long *)(lVar12 + 8) + (ulong)uVar16 * 8) != 0);
            goto LAB_00100612;
          }
          lVar19 = *(long *)(lVar12 + 0x10);
        }
        uVar21 = uVar21 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar14 = *(uint *)(lVar19 + lVar17 * 4);
        uVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar14 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar21 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar18 = 0;
LAB_00100612:
  lVar12 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccessMemory::create() */

FileAccessMemory * __thiscall FileAccessMemory::create(FileAccessMemory *this)

{
  char cVar1;
  RefCounted *this_00;
  
  this_00 = (RefCounted *)operator_new(0x1a8,"");
  RefCounted::RefCounted(this_00);
  *(undefined2 *)(this_00 + 0x17c) = 0;
  *(undefined4 *)(this_00 + 0x180) = 2;
  *(undefined2 *)(this_00 + 0x184) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00103280;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  *(RefCounted **)this = this_00;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    *(undefined8 *)this = 0;
  }
  return this;
}



/* FileAccessMemory::register_file(String const&, Vector<unsigned char> const&) */

void FileAccessMemory::register_file(String *param_1,Vector *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>
  *pHVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (files == (HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>
                *)0x0) {
    pHVar4 = (HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>
              *)operator_new(0x30,"");
    *(undefined8 *)(pHVar4 + 0x28) = 2;
    files = pHVar4;
    *(undefined1 (*) [16])(pHVar4 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pHVar4 + 0x18) = (undefined1  [16])0x0;
  }
  local_30 = 0;
  lVar3 = ProjectSettings::get_singleton();
  if (lVar3 == 0) {
    if (local_30 != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_30,(CowData *)param_1);
    }
  }
  else {
    ProjectSettings::get_singleton();
    ProjectSettings::globalize_path((String *)&local_28);
    lVar2 = local_28;
    lVar3 = local_30;
    if (local_30 == local_28) {
      if (local_30 != 0) {
        LOCK();
        plVar1 = (long *)(local_30 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_28 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      if (local_30 != 0) {
        LOCK();
        plVar1 = (long *)(local_30 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_30 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_30 = local_28;
    }
  }
  lVar3 = HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>
          ::operator[](files,(String *)&local_30);
  if (*(long *)(lVar3 + 8) != *(long *)(param_2 + 8)) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(lVar3 + 8),(CowData *)(param_2 + 8));
  }
  lVar3 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FileAccessMemory::cleanup() */

void FileAccessMemory::cleanup(void)

{
  if (files != (HashMap *)0x0) {
    memdelete<HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>>
              (files);
    return;
  }
  return;
}



/* FileAccessMemory::open_internal(String const&, int) */

undefined8 FileAccessMemory::open_internal(String *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  size_t __n;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *__dest;
  undefined4 in_register_00000034;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar22 = (long *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (files == 0) {
    uVar21 = 7;
    _err_print_error("open_internal","core/io/file_access_memory.cpp",0x50,
                     "Parameter \"files\" is null.",0,0);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x180))((String *)&local_70,param_1,plVar22);
    lVar3 = files;
    if ((*(long *)(files + 8) != 0) && (*(int *)(files + 0x2c) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(files + 0x28) * 4);
      lVar16 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(files + 0x28) * 8);
      uVar15 = String::hash();
      uVar23 = CONCAT44(0,uVar2);
      uVar18 = 1;
      if (uVar15 != 0) {
        uVar18 = uVar15;
      }
      lVar24 = *(long *)(lVar3 + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar18 * lVar16;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar23;
      lVar20 = SUB168(auVar4 * auVar8,8);
      uVar15 = *(uint *)(lVar24 + lVar20 * 4);
      uVar19 = SUB164(auVar4 * auVar8,8);
      if (uVar15 != 0) {
        uVar25 = 0;
        do {
          if (uVar18 == uVar15) {
            cVar14 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar3 + 8) + lVar20 * 8) + 0x10),
                                        (String *)&local_70);
            if (cVar14 != '\0') {
              lVar3 = *(long *)(*(long *)(lVar3 + 8) + (ulong)uVar19 * 8);
              if (lVar3 != 0) {
                if (*(long *)(lVar3 + 0x20) == 0) {
                  *(undefined8 *)(param_1 + 400) = 0;
LAB_00100c5b:
                  uVar21 = 0;
                }
                else {
                  if (*(ulong *)(*(long *)(lVar3 + 0x20) + -0x10) < 2) {
LAB_00100b9a:
                    __dest = *(undefined8 **)(lVar3 + 0x20);
                    *(undefined8 **)(param_1 + 400) = __dest;
                    if (__dest == (undefined8 *)0x0) goto LAB_00100c5b;
                  }
                  else {
                    if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)invalidInstructionException();
                      (*pcVar12)();
                    }
                    __n = *(size_t *)(*(long *)(lVar3 + 0x20) + -8);
                    uVar23 = 0x10;
                    if (__n != 0) {
                      uVar23 = __n - 1 | __n - 1 >> 1;
                      uVar23 = uVar23 | uVar23 >> 2;
                      uVar23 = uVar23 | uVar23 >> 4;
                      uVar23 = uVar23 | uVar23 >> 8;
                      uVar23 = uVar23 | uVar23 >> 0x10;
                      uVar23 = (uVar23 | uVar23 >> 0x20) + 0x11;
                    }
                    puVar17 = (undefined8 *)Memory::alloc_static(uVar23,false);
                    if (puVar17 == (undefined8 *)0x0) {
                      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                       "Parameter \"mem_new\" is null.",0,0);
                      goto LAB_00100b9a;
                    }
                    __dest = puVar17 + 2;
                    *puVar17 = 1;
                    puVar17[1] = __n;
                    memcpy(__dest,*(void **)(lVar3 + 0x20),__n);
                    if (*(long *)(lVar3 + 0x20) != 0) {
                      LOCK();
                      plVar22 = (long *)(*(long *)(lVar3 + 0x20) + -0x10);
                      *plVar22 = *plVar22 + -1;
                      UNLOCK();
                      if (*plVar22 == 0) {
                        lVar16 = *(long *)(lVar3 + 0x20);
                        *(undefined8 *)(lVar3 + 0x20) = 0;
                        Memory::free_static((void *)(lVar16 + -0x10),false);
                      }
                    }
                    *(undefined8 **)(lVar3 + 0x20) = __dest;
                    *(undefined8 **)(param_1 + 400) = __dest;
                  }
                  uVar21 = __dest[-1];
                }
                *(undefined8 *)(param_1 + 0x198) = uVar21;
                uVar21 = 0;
                *(undefined8 *)(param_1 + 0x1a0) = 0;
                goto LAB_00100bc6;
              }
              break;
            }
            lVar24 = *(long *)(lVar3 + 0x10);
          }
          uVar25 = uVar25 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar19 + 1) * lVar16;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar23;
          lVar20 = SUB168(auVar5 * auVar9,8);
          uVar15 = *(uint *)(lVar24 + lVar20 * 4);
          uVar19 = SUB164(auVar5 * auVar9,8);
          if ((uVar15 == 0) ||
             (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar15 * lVar16, auVar10._8_8_ = 0,
             auVar10._0_8_ = uVar23, auVar7._8_8_ = 0,
             auVar7._0_8_ = (ulong)((uVar2 + uVar19) - SUB164(auVar6 * auVar10,8)) * lVar16,
             auVar11._8_8_ = 0, auVar11._0_8_ = uVar23, SUB164(auVar7 * auVar11,8) < uVar25)) break;
        } while( true );
      }
    }
    local_60 = 0;
    plVar1 = (long *)(*plVar22 + -0x10);
    if (*plVar22 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_001009b0;
        LOCK();
        lVar16 = *plVar1;
        bVar26 = lVar3 == lVar16;
        if (bVar26) {
          *plVar1 = lVar3 + 1;
          lVar16 = lVar3;
        }
        UNLOCK();
      } while (!bVar26);
      if (lVar16 != -1) {
        local_60 = *plVar22;
      }
    }
LAB_001009b0:
    local_68 = 0;
    local_50 = 0x15;
    local_58 = "Can\'t find file \'%s\'.";
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>(&local_58,(StrRange *)&local_68,&local_60);
    _err_print_error("open_internal","core/io/file_access_memory.cpp",0x56,
                     "Condition \"!E\" is true. Returning: ERR_FILE_NOT_FOUND",&local_58,0,0);
    pcVar13 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar22 = (long *)(local_58 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar13 + -0x10,false);
      }
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar22 = (long *)(local_68 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar22 = (long *)(local_60 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    uVar21 = 7;
LAB_00100bc6:
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar22 = (long *)(local_70 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar21;
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
  return (uint)CONCAT71(0x1035,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1035,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1035,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* FileAccessMemory::resize(long) */

undefined8 FileAccessMemory::resize(long param_1)

{
  return 2;
}



/* FileAccessMemory::_get_modified_time(String const&) */

undefined8 FileAccessMemory::_get_modified_time(String *param_1)

{
  return 0;
}



/* FileAccessMemory::_get_unix_permissions(String const&) */

undefined8 FileAccessMemory::_get_unix_permissions(String *param_1)

{
  return 0;
}



/* FileAccessMemory::_set_unix_permissions(String const&, BitField<FileAccess::UnixPermissionFlags>)
    */

undefined8 FileAccessMemory::_set_unix_permissions(void)

{
  return 1;
}



/* FileAccessMemory::_get_hidden_attribute(String const&) */

undefined8 FileAccessMemory::_get_hidden_attribute(String *param_1)

{
  return 0;
}



/* FileAccessMemory::_set_hidden_attribute(String const&, bool) */

undefined8 FileAccessMemory::_set_hidden_attribute(String *param_1,bool param_2)

{
  return 2;
}



/* FileAccessMemory::_get_read_only_attribute(String const&) */

undefined8 FileAccessMemory::_get_read_only_attribute(String *param_1)

{
  return 0;
}



/* FileAccessMemory::_set_read_only_attribute(String const&, bool) */

undefined8 FileAccessMemory::_set_read_only_attribute(String *param_1,bool param_2)

{
  return 2;
}



/* FileAccessMemory::close() */

void FileAccessMemory::close(void)

{
  return;
}



/* FileAccessMemory::~FileAccessMemory() */

void __thiscall FileAccessMemory::~FileAccessMemory(FileAccessMemory *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103280;
  FileAccess::~FileAccess((FileAccess *)this);
  return;
}



/* FileAccessMemory::~FileAccessMemory() */

void __thiscall FileAccessMemory::~FileAccessMemory(FileAccessMemory *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103280;
  FileAccess::~FileAccess((FileAccess *)this);
  operator_delete(this,0x1a8);
  return;
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
LAB_00101203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
      goto LAB_0010126e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FileAccess");
LAB_0010126e:
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
  if (initialize_class()::initialized != '\0') goto LAB_001015d0;
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
LAB_001016de:
      if ((code *)PTR__bind_methods_00105010 != RefCounted::_bind_methods) {
LAB_001016ee:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001016de;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00105010 != RefCounted::_bind_methods) goto LAB_001016ee;
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
  if ((code *)PTR__bind_compatibility_methods_00105008 != Object::_bind_compatibility_methods) {
    FileAccess::_bind_compatibility_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001015d0:
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
            if (lVar5 == 0) goto LAB_001017cf;
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
LAB_001017cf:
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
    if (cVar6 != '\0') goto LAB_00101883;
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
              if (lVar5 == 0) goto LAB_0010195b;
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
LAB_0010195b:
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
      if (cVar6 != '\0') goto LAB_00101883;
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
                if (lVar5 == 0) goto LAB_00101a3b;
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
LAB_00101a3b:
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
        if (cVar6 != '\0') goto LAB_00101883;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00101ae4;
    }
  }
LAB_00101883:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101ae4:
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
LAB_00101c58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101c58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101c76;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101c76:
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
LAB_00102058:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102058;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102075;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102075:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Vector<unsigned char>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<unsigned char> > > >::operator[](String
   const&) */

undefined1 * __thiscall
HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>
::operator[](HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  undefined1 auVar3 [16];
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
  char cVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  undefined8 uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00102a94:
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar51)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar45 != uVar38);
      }
      else {
        memset(pvVar2,0,uVar38);
        memset(pvVar41,0,uVar51);
      }
LAB_00102974:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_00102980:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar53 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar50 != 0) {
          uVar37 = uVar50;
        }
        uVar54 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar50 = *(uint *)(lVar53 + lVar43 * 4);
        uVar49 = SUB164(auVar15 * auVar31,8);
        if (uVar50 != 0) {
          do {
            if (uVar50 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                if (*(long *)local_a0[2] != 0) {
                  CowData<unsigned_char>::_ref
                            ((CowData<unsigned_char> *)(local_a0 + 2),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_00102840;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar50 = *(uint *)(lVar53 + lVar43 * 4);
            uVar49 = SUB164(auVar16 * auVar32,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar49) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar54 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar55;
      goto LAB_00102440;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00102440;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00102980;
LAB_00102466:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_00102840;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar55 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar55 * lVar53;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar51;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar50 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar50 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar50 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar51;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            uVar54 = SUB164(auVar5 * auVar21,8);
            uVar47 = uVar39;
            if (uVar54 < uVar49) {
              *puVar46 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar47;
            uVar50 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar36 != uVar38);
      Memory::free_static(pvVar41,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar38 = CONCAT44(0,uVar55);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar53 + lVar43 * 4);
      uVar50 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar37 == uVar36) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_00102840;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar50 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar53 + lVar43 * 4);
          uVar50 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar49 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar52 == 0) goto LAB_00102a94;
      goto LAB_00102974;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_00102440:
    if ((float)uVar45 * __LC18 < (float)(iVar42 + 1)) goto LAB_00102466;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_00102b45:
    lVar48 = 0;
    *(undefined8 *)local_a0[2] = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_0010270d;
LAB_00102b61:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_48 = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_00102b45;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined8 *)local_a0[2] = 0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_70;
    if (puVar40 == (undefined8 *)0x0) goto LAB_00102b61;
LAB_0010270d:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar53 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar36 != 0) {
    uVar55 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar55 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar52 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar53 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar57 = local_a0;
  if (uVar37 != 0) {
    uVar50 = 0;
    pauVar56 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar42) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25,8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
        *puVar46 = uVar55;
        puVar40 = (undefined8 *)(lVar52 + lVar44 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar56;
        uVar50 = uVar49;
        uVar55 = uVar37;
      }
      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar53 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar52 + lVar44 * 8) = pauVar57;
  *puVar46 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00102840:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMap<String, Vector<unsigned char>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Vector<unsigned
   char> > > > >(HashMap<String, Vector<unsigned char>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Vector<unsigned
   char> > > >*) */

void memdelete<HashMap<String,Vector<unsigned_char>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<unsigned_char>>>>>
               (HashMap *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x10) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x10) + lVar4) = 0;
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
            pvVar5 = *(void **)(param_1 + 8);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00102d40;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x10),false);
  }
LAB_00102d40:
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102f18) */
/* WARNING: Removing unreachable block (ram,0x00103048) */
/* WARNING: Removing unreachable block (ram,0x00103210) */
/* WARNING: Removing unreachable block (ram,0x00103054) */
/* WARNING: Removing unreachable block (ram,0x0010305e) */
/* WARNING: Removing unreachable block (ram,0x001031f0) */
/* WARNING: Removing unreachable block (ram,0x0010306a) */
/* WARNING: Removing unreachable block (ram,0x00103074) */
/* WARNING: Removing unreachable block (ram,0x001031d0) */
/* WARNING: Removing unreachable block (ram,0x00103080) */
/* WARNING: Removing unreachable block (ram,0x0010308a) */
/* WARNING: Removing unreachable block (ram,0x001031b0) */
/* WARNING: Removing unreachable block (ram,0x00103096) */
/* WARNING: Removing unreachable block (ram,0x001030a0) */
/* WARNING: Removing unreachable block (ram,0x00103190) */
/* WARNING: Removing unreachable block (ram,0x001030ac) */
/* WARNING: Removing unreachable block (ram,0x001030b6) */
/* WARNING: Removing unreachable block (ram,0x00103170) */
/* WARNING: Removing unreachable block (ram,0x001030c2) */
/* WARNING: Removing unreachable block (ram,0x001030cc) */
/* WARNING: Removing unreachable block (ram,0x00103150) */
/* WARNING: Removing unreachable block (ram,0x001030d4) */
/* WARNING: Removing unreachable block (ram,0x001030ea) */
/* WARNING: Removing unreachable block (ram,0x001030f6) */
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



/* FileAccessMemory::open_internal(String const&, int) [clone .cold] */

void FileAccessMemory::open_internal(String *param_1,int param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* FileAccessMemory::~FileAccessMemory() */

void __thiscall FileAccessMemory::~FileAccessMemory(FileAccessMemory *this)

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


