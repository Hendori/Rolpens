
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] [clone .constprop.0] */

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



/* RemoteFilesystemClient::_remove_file(String const&) */

undefined4 RemoteFilesystemClient::_remove_file(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "remote_filesystem_files";
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_58);
  String::path_join((String *)&local_50);
  String::path_join((String *)&local_48);
  uVar4 = DirAccess::remove_absolute((String *)&local_48);
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteFilesystemClient::_update_cache_path(String&) */

void __thiscall
RemoteFilesystemClient::_update_cache_path(RemoteFilesystemClient *this,String *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 0x17;
  local_48 = "remote_filesystem_files";
  String::parse_latin1((StrRange *)&local_50);
  String::path_join((String *)&local_48);
  pcVar4 = local_48;
  pcVar2 = *(char **)param_1;
  if (pcVar2 == local_48) {
    if (pcVar2 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(pcVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
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
        lVar3 = *(long *)param_1;
        *(undefined8 *)param_1 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(char **)param_1 = local_48;
  }
  lVar3 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RemoteFilesystemClient::synchronize_with_server(String const&, int, String const&, String&) */

undefined4
RemoteFilesystemClient::synchronize_with_server
          (String *param_1,int param_2,String *param_3,String *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  
  uVar4 = (**(code **)(*(long *)param_1 + 0x28))();
  pvVar6 = *(void **)(param_1 + 0x10);
  if (pvVar6 == (void *)0x0) goto LAB_00100492;
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4) != 0) {
      memset(*(void **)(param_1 + 0x28),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4) << 2);
      if (*(int *)(param_1 + 0x34) == 0) goto LAB_001004c0;
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
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        pvVar6 = *(void **)(param_1 + 0x10);
      }
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (pvVar6 == (void *)0x0) goto LAB_00100492;
  }
LAB_001004c0:
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(param_1 + 0x20),false);
  Memory::free_static(*(void **)(param_1 + 0x18),false);
  Memory::free_static(*(void **)(param_1 + 0x28),false);
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
LAB_00100492:
  *(undefined4 *)(param_1 + 0x30) = 2;
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
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar4;
}



/* RemoteFilesystemClient::_store_cache_file(Vector<RemoteFilesystemClient::FileCache> const&) */

uint __thiscall
RemoteFilesystemClient::_store_cache_file(RemoteFilesystemClient *this,Vector *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  Object *pOVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  uint local_ac;
  long local_a8;
  long local_a0;
  Object *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "remote_filesystem.cache";
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_60);
  String::path_join((String *)&local_a8);
  lVar8 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  String::get_base_dir();
  local_ac = DirAccess::make_dir_recursive_absolute((String *)&local_a0);
  if ((local_ac & 0xffffffdf) == 0) {
    FileAccess::open((String *)&local_98,(int)(String *)&local_a8,(Error *)0x2);
    pOVar4 = local_98;
    if (local_98 == (Object *)0x0) {
      local_60 = 0;
      plVar1 = (long *)(local_a8 + -0x10);
      if (local_a8 != 0) {
        do {
          lVar8 = *plVar1;
          if (lVar8 == 0) goto LAB_00100b42;
          LOCK();
          lVar7 = *plVar1;
          bVar9 = lVar8 == lVar7;
          if (bVar9) {
            *plVar1 = lVar8 + 1;
            lVar7 = lVar8;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar7 != -1) {
          local_60 = local_a8;
        }
      }
LAB_00100b42:
      local_68 = 0;
      local_58 = "Unable to open the remote cache file for writing: \'%s\'.";
      local_50 = 0x37;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60);
      _err_print_error("_store_cache_file","core/io/remote_filesystem_client.cpp",0x79,
                       "Condition \"f.is_null()\" is true. Returning: ERR_FILE_CANT_OPEN",
                       (String *)&local_58,0,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar8 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      local_ac = 0xc;
    }
    else {
      pcVar2 = *(code **)(*(long *)local_98 + 0x2b0);
      itos((long)&local_58);
      (*pcVar2)(pOVar4);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar8 = *(long *)(param_1 + 8);
      for (lVar7 = 0; (local_ac = 0, lVar8 != 0 && (lVar7 < *(long *)(lVar8 + -8)));
          lVar7 = lVar7 + 1) {
        itos((long)&local_60);
        local_58 = "::";
        local_68 = 0;
        local_50 = 2;
        String::parse_latin1((StrRange *)&local_68);
        if (*(long *)(param_1 + 8) == 0) {
LAB_00100940:
          lVar8 = 0;
LAB_00100943:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 8) + -8);
        if (lVar8 <= lVar7) goto LAB_00100943;
        itos((long)&local_78);
        local_58 = "::";
        local_88 = 0;
        local_50 = 2;
        String::parse_latin1((StrRange *)&local_88);
        lVar3 = *(long *)(param_1 + 8);
        if (lVar3 == 0) goto LAB_00100940;
        lVar8 = *(long *)(lVar3 + -8);
        if (lVar8 <= lVar7) goto LAB_00100943;
        String::operator+((String *)&local_80,(String *)(lVar3 + lVar7 * 0x18));
        String::operator+((String *)&local_70,(String *)&local_80);
        String::operator+((String *)&local_58,(String *)&local_70);
        String::operator+((String *)&local_90,(String *)&local_58);
        pcVar5 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
        lVar8 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        (**(code **)(*(long *)local_98 + 0x2b0))();
        lVar8 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = *(long *)(param_1 + 8);
      }
    }
    if (((local_98 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
      (**(code **)(*(long *)local_98 + 0x140))(local_98);
      Memory::free_static(local_98,false);
    }
  }
  else {
    local_60 = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_00100a4a;
        LOCK();
        lVar7 = *plVar1;
        bVar9 = lVar8 == lVar7;
        if (bVar9) {
          *plVar1 = lVar8 + 1;
          lVar7 = lVar8;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar7 != -1) {
        local_60 = local_a0;
      }
    }
LAB_00100a4a:
    local_68 = 0;
    local_58 = "Unable to create base directory to store cache file: \'%s\'.";
    local_50 = 0x3a;
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60);
    _err_print_error("_store_cache_file","core/io/remote_filesystem_client.cpp",0x76,
                     "Condition \"err != OK && err != ERR_ALREADY_EXISTS\" is true. Returning: err",
                     (String *)&local_58,0,0);
    pcVar5 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar8 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  lVar8 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ac;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteFilesystemClient::_store_file(String const&, LocalVector<unsigned char, unsigned int,
   false, false> const&, unsigned long&) */

int __thiscall
RemoteFilesystemClient::_store_file
          (RemoteFilesystemClient *this,String *param_1,LocalVector *param_2,ulong *param_3)

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
  Object *pOVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  long local_80;
  long local_78;
  Object *local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_58 = "remote_filesystem_files";
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_60);
  String::path_join((String *)&local_58);
  String::path_join((String *)&local_80);
  pcVar13 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar13 + -0x10,false);
    }
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
  String::get_base_dir();
  if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar16 = String::hash();
    uVar17 = CONCAT44(0,uVar2);
    lVar18 = *(long *)(this + 0x28);
    uVar19 = 1;
    if (uVar16 != 0) {
      uVar19 = uVar16;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar19 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar20 = SUB168(auVar4 * auVar8,8);
    uVar16 = *(uint *)(lVar18 + lVar20 * 4);
    if (uVar16 != 0) {
      iVar15 = SUB164(auVar4 * auVar8,8);
      uVar21 = 0;
      do {
        if (uVar19 == uVar16) {
          cVar14 = String::operator==((String *)
                                      (*(long *)(this + 0x10) +
                                      (ulong)*(uint *)(*(long *)(this + 0x18) + lVar20 * 4) * 8),
                                      (String *)&local_78);
          if (cVar14 != '\0') goto LAB_00100dfb;
          lVar18 = *(long *)(this + 0x28);
        }
        uVar21 = uVar21 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar17;
        lVar20 = SUB168(auVar5 * auVar9,8);
        uVar16 = *(uint *)(lVar18 + lVar20 * 4);
        iVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar16 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar17, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar15) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar17, uVar21 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  DirAccess::make_dir_recursive_absolute((String *)&local_78);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
LAB_00100dfb:
  FileAccess::open((String *)&local_70,(int)(String *)&local_80,(Error *)0x2);
  if (local_70 == (Object *)0x0) {
    local_60 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00101148;
        LOCK();
        lVar18 = *plVar1;
        bVar22 = lVar3 == lVar18;
        if (bVar22) {
          *plVar1 = lVar3 + 1;
          lVar18 = lVar3;
        }
        UNLOCK();
      } while (!bVar22);
      if (lVar18 != -1) {
        local_60 = *(long *)param_1;
      }
    }
LAB_00101148:
    local_68 = 0;
    local_58 = "Unable to open file for writing to remote filesystem cache: \'%s\'.";
    local_50 = 0x41;
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60);
    _err_print_error("_store_file","core/io/remote_filesystem_client.cpp",99,
                     "Condition \"f.is_null()\" is true. Returning: ERR_FILE_CANT_OPEN",
                     (String *)&local_58,0,0);
    pcVar13 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar13 + -0x10,false);
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
    iVar15 = 0xc;
  }
  else {
    (**(code **)(*(long *)local_70 + 0x2d0))
              (local_70,*(undefined8 *)(param_2 + 8),*(undefined4 *)param_2);
    iVar15 = (**(code **)(*(long *)local_70 + 0x250))();
    if (iVar15 == 0) {
      if (((local_70 != (Object *)0x0) && (cVar14 = RefCounted::unreference(), cVar14 != '\0')) &&
         (cVar14 = predelete_handler(local_70), cVar14 != '\0')) {
        (**(code **)(*(long *)local_70 + 0x140))(local_70);
        Memory::free_static(local_70,false);
      }
      local_70 = (Object *)0x0;
      uVar17 = FileAccess::get_modified_time((String *)&local_80);
      *param_3 = uVar17;
    }
  }
  if (((local_70 != (Object *)0x0) &&
      (cVar14 = RefCounted::unreference(), pOVar12 = local_70, cVar14 != '\0')) &&
     (cVar14 = predelete_handler(local_70), cVar14 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
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
  return iVar15;
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* CowData<RemoteFilesystemClient::FileCache>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RemoteFilesystemClient::FileCache>::_copy_on_write
          (CowData<RemoteFilesystemClient::FileCache> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this_00;
  ulong uVar5;
  CowData *pCVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar5 = lVar1 * 0x18 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar4));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        uVar3 = *(undefined8 *)(pCVar6 + 0x10);
        lVar7 = lVar7 + 1;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar6 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar3;
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
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
LAB_001017a6:
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
    if (lVar10 == 0) goto LAB_001017a6;
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
    FUN_00104280();
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
      goto LAB_001016fc;
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
LAB_001016fc:
  puVar8[-1] = param_1;
  return;
}



/* Vector<RemoteFilesystemClient::FileCache>::push_back(RemoteFilesystemClient::FileCache) [clone
   .isra.0] */

void __thiscall
Vector<RemoteFilesystemClient::FileCache>::push_back
          (Vector<RemoteFilesystemClient::FileCache> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<RemoteFilesystemClient::FileCache>::resize<false>
                    ((CowData<RemoteFilesystemClient::FileCache> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RemoteFilesystemClient::FileCache>::_copy_on_write
                  ((CowData<RemoteFilesystemClient::FileCache> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar4 * 0x18);
        if (*(long *)this_00 != *(long *)param_2) {
          CowData<char32_t>::_ref(this_00,param_2);
        }
        uVar1 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102ef4) */
/* WARNING: Removing unreachable block (ram,0x00103992) */
/* RemoteFilesystemClient::_synchronize_with_server(String const&, int, String const&, String&) */

int __thiscall
RemoteFilesystemClient::_synchronize_with_server
          (RemoteFilesystemClient *this,String *param_1,int param_2,String *param_3,String *param_4)

{
  Object *pOVar1;
  Object *pOVar2;
  String *pSVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char *pcVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  StreamPeerTCP *this_00;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  undefined1 uVar27;
  undefined4 uVar28;
  undefined8 *puVar29;
  long lVar30;
  char *pcVar31;
  Object **ppOVar32;
  uchar uVar33;
  ulong uVar34;
  undefined8 in_R10;
  uint uVar35;
  uint uVar36;
  long *plVar37;
  long in_FS_OFFSET;
  bool bVar38;
  Object *local_1d8;
  char *local_1c0;
  long local_180;
  long local_178;
  long local_170;
  Vector<String> local_168 [8];
  long local_160;
  undefined1 local_158 [8];
  long local_150 [2];
  long local_140;
  undefined8 local_138;
  void *local_130;
  Vector<RemoteFilesystemClient::FileCache> local_128 [8];
  long local_120;
  Object *local_118;
  undefined8 local_110;
  Object *local_108;
  long local_100;
  long lStack_f8;
  char *local_e8;
  void *pvStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  IPAddress local_a8 [16];
  char local_98;
  int local_88 [8];
  undefined1 local_68 [40];
  long local_40;
  
  pvStack_e0 = local_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) != *(long *)param_4) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)param_4);
  }
  DirAccess::create((String *)&local_108,2);
  pcVar25 = *(code **)(*(long *)local_108 + 0x1a8);
  local_e8 = (char *)0x0;
  plVar22 = (long *)(*(long *)(this + 8) + -0x10);
  if (*(long *)(this + 8) != 0) {
    do {
      lVar23 = *plVar22;
      if (lVar23 == 0) goto LAB_001019e2;
      LOCK();
      lVar30 = *plVar22;
      bVar38 = lVar23 == lVar30;
      if (bVar38) {
        *plVar22 = lVar23 + 1;
        lVar30 = lVar23;
      }
      UNLOCK();
    } while (!bVar38);
    if (lVar30 != -1) {
      local_e8 = *(char **)(this + 8);
    }
  }
LAB_001019e2:
  (*pcVar25)();
  pcVar31 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar22 = (long *)(local_e8 + -0x10);
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (*plVar22 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static(pcVar31 + -0x10,false);
    }
  }
  (**(code **)(*(long *)local_108 + 0x1b0))((Variant *)&local_e8,local_108,1);
  pcVar13 = local_e8;
  pcVar31 = *(char **)(this + 8);
  if (pcVar31 == local_e8) {
    if (pcVar31 != (char *)0x0) {
      LOCK();
      plVar22 = (long *)(pcVar31 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar13 + -0x10,false);
      }
    }
  }
  else {
    if (pcVar31 != (char *)0x0) {
      LOCK();
      plVar22 = (long *)(pcVar31 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        lVar23 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    *(char **)(this + 8) = local_e8;
  }
  if (((local_108 != (Object *)0x0) &&
      (cVar14 = RefCounted::unreference(), pOVar2 = local_108, cVar14 != '\0')) &&
     (cVar14 = predelete_handler(local_108), cVar14 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  this_00 = (StreamPeerTCP *)operator_new(0x1b0,"");
  StreamPeerTCP::StreamPeerTCP(this_00);
  postinitialize_handler((Object *)this_00);
  cVar14 = RefCounted::init_ref();
  local_1d8 = (Object *)0x0;
  if (cVar14 != '\0') {
    cVar14 = RefCounted::reference();
    local_1d8 = (Object *)(StreamPeerTCP *)0x0;
    if (cVar14 != '\0') {
      local_1d8 = (Object *)this_00;
    }
    cVar14 = RefCounted::unreference();
    if ((cVar14 != '\0') && (cVar14 = predelete_handler((Object *)this_00), cVar14 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
  }
  cVar14 = String::is_valid_ip_address();
  if (cVar14 == '\0') {
    uVar20 = IP::get_singleton();
    IP::resolve_hostname(local_a8,uVar20,param_1);
    cVar14 = local_98;
    if (local_98 == '\0') goto LAB_00101d4c;
LAB_00101b1f:
    cVar15 = is_print_verbose_enabled();
    if (cVar15 != '\0') {
      local_118 = (Object *)0x0;
      local_e8 = "Remote Filesystem: Connecting to host %s, port %d.";
      pvStack_e0 = (void *)0x32;
      String::parse_latin1((StrRange *)&local_118);
      vformat<IPAddress,int>((String *)&local_108,(StrRange *)&local_118,param_2);
      Variant::Variant((Variant *)local_88,(String *)&local_108);
      stringify_variants((Variant *)&local_e8);
      __print_line((String *)&local_e8);
      pcVar31 = local_e8;
      if (local_e8 != (char *)0x0) {
        LOCK();
        plVar22 = (long *)(local_e8 + -0x10);
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (*plVar22 == 0) {
          local_e8 = (char *)0x0;
          Memory::free_static(pcVar31 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      pOVar2 = local_108;
      if (local_108 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_108 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_108 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
      pOVar2 = local_118;
      if (local_118 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_118 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_118 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
    }
    iVar16 = StreamPeerTCP::connect_to_host(local_1d8,(int)local_a8);
    if (iVar16 == 0) {
      while (iVar16 = StreamPeerTCP::get_status(), iVar16 == 1) {
        StreamPeerTCP::poll();
        plVar22 = (long *)OS::get_singleton();
        (**(code **)(*plVar22 + 0x1f8))(plVar22,100);
      }
      iVar16 = StreamPeerTCP::get_status();
      if (iVar16 == 2) {
        cVar15 = is_print_verbose_enabled();
        if (cVar15 != '\0') {
          Variant::Variant((Variant *)local_88,"Remote Filesystem: Connection OK.");
          stringify_variants((Variant *)&local_e8);
          __print_line((String *)&local_e8);
          pcVar31 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar22 = (long *)(local_e8 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar31 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        cVar15 = is_print_verbose_enabled();
        if (cVar15 != '\0') {
          Variant::Variant((Variant *)local_88,"Remote Filesystem: Sending header");
          stringify_variants((Variant *)&local_e8);
          __print_line((String *)&local_e8);
          pcVar31 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar22 = (long *)(local_e8 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar31 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        uVar33 = (uchar)local_1d8;
        StreamPeer::put_u8(uVar33);
        StreamPeer::put_u8(uVar33);
        StreamPeer::put_u8(uVar33);
        StreamPeer::put_u8(uVar33);
        iVar16 = (int)local_1d8;
        StreamPeer::put_32(iVar16);
        cVar15 = is_print_verbose_enabled();
        if (cVar15 != '\0') {
          Variant::Variant((Variant *)local_88,"Remote Filesystem: Sending password");
          stringify_variants((Variant *)&local_e8);
          __print_line((String *)&local_e8);
          pcVar31 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar22 = (long *)(local_e8 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar31 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        puVar4 = *(undefined8 **)param_3;
        uVar26 = 0;
        puVar21 = puVar4;
        do {
          if (puVar4 == (undefined8 *)0x0) {
LAB_00101f2c:
            uVar27 = 0;
          }
          else {
            uVar34 = puVar4[-1];
            if (((int)uVar34 == 0) || ((int)uVar34 + -1 <= (int)uVar26)) goto LAB_00101f2c;
            if (uVar34 == uVar26) {
              puVar29 = &String::_null;
            }
            else {
              puVar29 = puVar21;
              if ((long)uVar34 <= (long)uVar26) goto LAB_001020a7;
            }
            uVar27 = *(undefined1 *)puVar29;
          }
          local_68[uVar26] = uVar27;
          uVar26 = uVar26 + 1;
          puVar21 = (undefined8 *)((long)puVar21 + 4);
        } while (uVar26 != 0x20);
        (**(code **)(*(long *)local_1d8 + 0x150))(local_1d8,local_68,0x20);
        cVar15 = is_print_verbose_enabled();
        if (cVar15 != '\0') {
          Variant::Variant((Variant *)local_88,"Remote Filesystem: Tags.");
          stringify_variants((Variant *)&local_e8);
          __print_line((String *)&local_e8);
          pcVar31 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar22 = (long *)(local_e8 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar31 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        local_160 = 0;
        plVar22 = (long *)OS::get_singleton();
        (**(code **)(*plVar22 + 400))((Variant *)&local_e8,plVar22);
        Vector<String>::push_back(local_168);
        pcVar31 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar22 = (long *)(local_e8 + -0x10);
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (*plVar22 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar31 + -0x10,false);
          }
        }
        plVar22 = (long *)OS::get_singleton();
        iVar17 = (**(code **)(*plVar22 + 0x340))(plVar22);
        if (iVar17 == 0) {
          local_108 = (Object *)0x0;
          local_e8 = "bptc";
          pvStack_e0 = (void *)0x4;
          String::parse_latin1((StrRange *)&local_108);
          Vector<String>::push_back(local_168);
          pOVar2 = local_108;
          if (local_108 != (Object *)0x0) {
            LOCK();
            plVar22 = (long *)((long)local_108 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_108 = (Object *)0x0;
              Memory::free_static((void *)((long)pOVar2 + -0x10),false);
            }
          }
          local_e8 = "s3tc";
LAB_00102331:
          local_108 = (Object *)0x0;
          pvStack_e0 = (void *)0x4;
          String::parse_latin1((StrRange *)&local_108);
          Vector<String>::push_back(local_168);
          pOVar2 = local_108;
          if (local_108 != (Object *)0x0) {
            LOCK();
            pOVar1 = local_108 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 == 0) {
              local_108 = (Object *)0x0;
              Memory::free_static(pOVar2 + -0x10,false);
            }
          }
        }
        else if (iVar17 == 1) {
          local_108 = (Object *)0x0;
          local_e8 = "etc2";
          pvStack_e0 = (void *)0x4;
          String::parse_latin1((StrRange *)&local_108);
          Vector<String>::push_back(local_168);
          pOVar2 = local_108;
          if (local_108 != (Object *)0x0) {
            LOCK();
            plVar22 = (long *)((long)local_108 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_108 = (Object *)0x0;
              Memory::free_static((void *)((long)pOVar2 + -0x10),false);
            }
          }
          local_e8 = "astc";
          goto LAB_00102331;
        }
        lVar23 = local_160;
        if (local_160 == 0) {
          StreamPeer::put_32(iVar16);
        }
        else {
          lVar30 = 0;
          StreamPeer::put_32(iVar16);
          if (0 < *(long *)(lVar23 + -8)) {
            do {
              lVar30 = lVar30 + 1;
              StreamPeer::put_utf8_string((String *)local_1d8);
            } while (lVar30 < *(long *)(lVar23 + -8));
          }
        }
        cVar15 = is_print_verbose_enabled();
        if (cVar15 != '\0') {
          Variant::Variant((Variant *)local_88,"Remote Filesystem: Sending file list");
          stringify_variants((Variant *)&local_e8);
          __print_line((String *)&local_e8);
          pcVar31 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar22 = (long *)(local_e8 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar31 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        (**(code **)(*(long *)this + 8))(local_158);
        local_140 = 0;
        if ((local_150[0] == 0) || (lVar23 = *(long *)(local_150[0] + -8), lVar23 == 0)) {
          StreamPeer::put_32(iVar16);
        }
        else {
          uVar26 = 0;
          local_e8 = (char *)0x0;
          pvStack_e0 = (void *)0x0;
          local_d8 = ZEXT816(0);
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          while ((long)uVar26 < lVar23) {
            StringBuilder::append((String *)&local_e8);
            StringBuilder::append((char *)&local_e8);
            if (local_150[0] == 0) goto LAB_00102536;
            uVar34 = *(ulong *)(local_150[0] + -8);
            if ((long)uVar34 <= (long)uVar26) goto LAB_001020a7;
            itos((long)&local_108);
            StringBuilder::append((String *)&local_e8);
            pOVar2 = local_108;
            if (local_108 != (Object *)0x0) {
              LOCK();
              pOVar1 = local_108 + -0x10;
              *(long *)pOVar1 = *(long *)pOVar1 + -1;
              UNLOCK();
              if (*(long *)pOVar1 == 0) {
                local_108 = (Object *)0x0;
                Memory::free_static(pOVar2 + -0x10,false);
              }
            }
            uVar26 = uVar26 + 1;
            StringBuilder::append((char *)&local_e8);
            if (local_150[0] == 0) break;
            lVar23 = *(long *)(local_150[0] + -8);
          }
          StringBuilder::as_string();
          String::utf8();
          if (local_108 == (Object *)0x0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (int)*(long *)(local_108 + -8) + -1 +
                     (uint)((int)*(long *)(local_108 + -8) == 0);
          }
          iVar17 = Compression::get_max_compressed_buffer_size(iVar17,2);
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_140,(long)iVar17);
          pOVar2 = local_108;
          if (local_108 == (Object *)0x0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (int)*(long *)(local_108 + -8) + -1 +
                     (uint)((int)*(long *)(local_108 + -8) == 0);
          }
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_140);
          iVar17 = Compression::compress(local_140,pOVar2,iVar17,2);
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_140,(long)iVar17);
          StreamPeer::put_32(iVar16);
          lVar23 = local_140;
          if (local_140 == 0) {
            StreamPeer::put_32(iVar16);
            uVar28 = 0;
            pcVar25 = *(code **)(*(long *)local_1d8 + 0x150);
          }
          else {
            StreamPeer::put_32(iVar16);
            uVar28 = *(undefined4 *)(lVar23 + -8);
            pcVar25 = *(code **)(*(long *)local_1d8 + 0x150);
          }
          (*pcVar25)(local_1d8,lVar23,uVar28);
          pOVar2 = local_108;
          if (local_108 != (Object *)0x0) {
            LOCK();
            pOVar1 = local_108 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 == 0) {
              local_108 = (Object *)0x0;
              Memory::free_static(pOVar2 + -0x10,false);
            }
          }
          pOVar2 = local_118;
          if (local_118 != (Object *)0x0) {
            LOCK();
            pOVar1 = local_118 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 == 0) {
              local_118 = (Object *)0x0;
              Memory::free_static(pOVar2 + -0x10,false);
            }
          }
          StringBuilder::~StringBuilder((StringBuilder *)&local_e8);
        }
        StreamPeerTCP::poll();
        iVar16 = StreamPeerTCP::get_status();
        if (iVar16 == 2) {
          uVar18 = StreamPeer::get_u32();
          iVar16 = StreamPeerTCP::get_status();
          if (iVar16 != 2) {
            _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",0xf2,
                             "Condition \"tcp_client->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true. Returning: ERR_CONNECTION_ERROR"
                             ,"Remote filesystem server disconnected while waiting for file list",0,
                             0);
            goto LAB_001036d0;
          }
          local_138 = 0;
          local_130 = (void *)0x0;
          local_120 = 0;
          local_c8 = 2;
          local_e8 = (char *)0x0;
          pvStack_e0 = (void *)0x0;
          local_d8 = (undefined1  [16])0x0;
          if (uVar18 == 0) {
            local_110 = 0;
          }
          else {
            uVar35 = 0;
            do {
              StreamPeer::get_utf8_string((int)(String *)&local_118);
              local_108 = (Object *)0x0;
              cVar15 = String::operator==((String *)&local_118,(String *)&local_108);
              pOVar2 = local_108;
              if (local_108 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_108 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_108 = (Object *)0x0;
                  Memory::free_static(pOVar2 + -0x10,false);
                }
              }
              if (cVar15 != '\0') {
                _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",
                                 0xfb,
                                 "Condition \"file == String()\" is true. Returning: ERR_CONNECTION_ERROR"
                                 ,"Invalid file name received from remote filesystem.",0,0);
LAB_001033b6:
                pOVar2 = local_118;
                if (local_118 != (Object *)0x0) {
                  LOCK();
                  pOVar1 = local_118 + -0x10;
                  *(long *)pOVar1 = *(long *)pOVar1 + -1;
                  UNLOCK();
                  if (*(long *)pOVar1 == 0) {
                    local_118 = (Object *)0x0;
                    Memory::free_static(pOVar2 + -0x10,false);
                  }
                }
                iVar16 = 0x1b;
                goto LAB_00102d50;
              }
              lVar23 = StreamPeer::get_u64();
              iVar16 = StreamPeerTCP::get_status();
              pOVar2 = local_118;
              if (iVar16 != 2) {
                _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",
                                 0xfd,
                                 "Condition \"tcp_client->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true. Returning: ERR_CONNECTION_ERROR"
                                 ,
                                 "Remote filesystem server disconnected while waiting for file info."
                                 ,0,0);
                goto LAB_001033b6;
              }
              pOVar1 = local_118 + -0x10;
              local_100 = lVar23;
              if (local_118 == (Object *)0x0) {
LAB_00102e7c:
                local_108 = (Object *)0x0;
                lStack_f8 = 0;
                Vector<RemoteFilesystemClient::FileCache>::push_back(local_128,(String *)&local_108)
                ;
                HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)&local_108);
              }
              else {
                do {
                  lVar23 = *(long *)pOVar1;
                  if (lVar23 == 0) goto LAB_00102e7c;
                  LOCK();
                  lVar30 = *(long *)pOVar1;
                  bVar38 = lVar23 == lVar30;
                  if (bVar38) {
                    *(long *)pOVar1 = lVar23 + 1;
                    lVar30 = lVar23;
                  }
                  UNLOCK();
                } while (!bVar38);
                if ((lVar30 == -1) || (local_108 = (Object *)0x0, local_118 == (Object *)0x0))
                goto LAB_00102e7c;
                pOVar1 = local_118 + -0x10;
                do {
                  lVar23 = *(long *)pOVar1;
                  if (lVar23 == 0) goto LAB_00102eb8;
                  LOCK();
                  lVar30 = *(long *)pOVar1;
                  bVar38 = lVar23 == lVar30;
                  if (bVar38) {
                    *(long *)pOVar1 = lVar23 + 1;
                    lVar30 = lVar23;
                  }
                  UNLOCK();
                } while (!bVar38);
                if (lVar30 == -1) {
LAB_00102eb8:
                  lStack_f8 = 0;
                  Vector<RemoteFilesystemClient::FileCache>::push_back(local_128);
                }
                else {
                  local_108 = local_118;
                  lStack_f8 = 0;
                  Vector<RemoteFilesystemClient::FileCache>::push_back(local_128);
                  LOCK();
                  pOVar2 = pOVar2 + -0x10;
                  *(long *)pOVar2 = *(long *)pOVar2 + -1;
                  UNLOCK();
                  if (*(long *)pOVar2 == 0) {
                    Memory::free_static(local_108 + -0x10,false);
                  }
                }
                HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)&local_108);
                LOCK();
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  Memory::free_static(pOVar1,false);
                }
              }
              pOVar2 = local_118;
              if (local_118 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_118 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_118 = (Object *)0x0;
                  Memory::free_static(pOVar2 + -0x10,false);
                }
              }
              uVar35 = uVar35 + 1;
            } while (uVar18 != uVar35);
            uVar26 = 0;
            local_110 = 0;
            cVar15 = '\0';
            do {
              lVar23 = local_120;
              if (local_120 == 0) goto LAB_00102536;
              uVar34 = *(ulong *)(local_120 + -8);
              if ((long)uVar34 <= (long)uVar26) goto LAB_001020a7;
              local_180 = 0;
              plVar22 = (long *)(local_120 + uVar26 * 0x18);
              if (*plVar22 != 0) {
                plVar37 = (long *)(*plVar22 + -0x10);
                do {
                  lVar30 = *plVar37;
                  if (lVar30 == 0) goto LAB_00102b06;
                  LOCK();
                  lVar24 = *plVar37;
                  bVar38 = lVar30 == lVar24;
                  if (bVar38) {
                    *plVar37 = lVar30 + 1;
                    lVar24 = lVar30;
                  }
                  UNLOCK();
                } while (!bVar38);
                if (lVar24 != -1) {
                  local_180 = *plVar22;
                }
LAB_00102b06:
                uVar34 = *(ulong *)(local_120 + -8);
                if ((long)uVar34 <= (long)uVar26) goto LAB_001020a7;
              }
              if (plVar22[1] == 0 || cVar15 != '\0') {
                (**(code **)(*(long *)this + 0x18))(this);
LAB_00102b32:
                lVar23 = local_180;
                if (local_180 != 0) {
                  LOCK();
                  plVar22 = (long *)(local_180 + -0x10);
                  *plVar22 = *plVar22 + -1;
                  UNLOCK();
                  if (*plVar22 == 0) {
                    local_180 = 0;
                    Memory::free_static((void *)(lVar23 + -0x10),false);
                  }
                }
              }
              else {
                uVar35 = StreamPeer::get_u64();
                if (uVar35 < (uint)local_138) {
                  local_138 = CONCAT44(local_138._4_4_,uVar35);
                }
                else if ((uint)local_138 < uVar35) {
                  if (local_138._4_4_ < uVar35) {
                    uVar19 = uVar35 - 1 >> 1 | uVar35 - 1;
                    uVar19 = uVar19 >> 2 | uVar19;
                    uVar19 = uVar19 >> 4 | uVar19;
                    uVar19 = uVar19 | uVar19 >> 8;
                    uVar19 = (uVar19 | uVar19 >> 0x10) + 1;
                    local_138 = CONCAT44(uVar19,(uint)local_138);
                    local_130 = (void *)Memory::realloc_static(local_130,(ulong)uVar19,false);
                    if (local_130 == (void *)0x0) {
                      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0,
                                       in_R10);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar25 = (code *)invalidInstructionException();
                      (*pcVar25)();
                    }
                  }
                  local_138 = CONCAT44(local_138._4_4_,uVar35);
                }
                iVar16 = (**(code **)(*(long *)local_1d8 + 0x160))(local_1d8,local_130,uVar35);
                cVar15 = cVar14;
                if (iVar16 != 0) {
                  local_170 = 0;
                  plVar22 = (long *)(local_180 + -0x10);
                  if (local_180 != 0) {
                    do {
                      lVar23 = *plVar22;
                      if (lVar23 == 0) goto LAB_001034ba;
                      LOCK();
                      lVar30 = *plVar22;
                      bVar38 = lVar23 == lVar30;
                      if (bVar38) {
                        *plVar22 = lVar23 + 1;
                        lVar30 = lVar23;
                      }
                      UNLOCK();
                    } while (!bVar38);
                    if (lVar30 != -1) {
                      local_170 = local_180;
                    }
                  }
LAB_001034ba:
                  local_178 = 0;
                  local_108 = (Object *)0x1050a8;
                  local_100 = 0x33;
                  String::parse_latin1((StrRange *)&local_178);
                  vformat<String>((String *)&local_108,(StrRange *)&local_178,&local_170);
                  _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp"
                                   ,0x11b,(String *)&local_108);
                  pOVar2 = local_108;
                  if (local_108 != (Object *)0x0) {
                    LOCK();
                    pOVar1 = local_108 + -0x10;
                    *(long *)pOVar1 = *(long *)pOVar1 + -1;
                    UNLOCK();
                    if (*(long *)pOVar1 == 0) {
                      local_108 = (Object *)0x0;
                      Memory::free_static(pOVar2 + -0x10,false);
                    }
                  }
                  lVar23 = local_178;
                  if (local_178 != 0) {
                    LOCK();
                    plVar22 = (long *)(local_178 + -0x10);
                    *plVar22 = *plVar22 + -1;
                    UNLOCK();
                    if (*plVar22 == 0) {
                      local_178 = 0;
                      Memory::free_static((void *)(lVar23 + -0x10),false);
                    }
                  }
                  lVar23 = local_170;
                  if (local_170 != 0) {
                    LOCK();
                    plVar22 = (long *)(local_170 + -0x10);
                    *plVar22 = *plVar22 + -1;
                    UNLOCK();
                    if (*plVar22 == 0) {
                      local_170 = 0;
                      Memory::free_static((void *)(lVar23 + -0x10),false);
                    }
                  }
                  StreamPeerTCP::get_status();
LAB_001035b7:
                  (**(code **)(*(long *)this + 0x18))(this);
                  goto LAB_00102b32;
                }
                iVar16 = StreamPeerTCP::get_status();
                if (iVar16 != 2) goto LAB_001035b7;
                local_170 = 0;
                iVar16 = (**(code **)(*(long *)this + 0x10))(this,&local_180,&local_138,&local_170);
                if (iVar16 != 0) goto LAB_00102b32;
                uVar34 = *(ulong *)(lVar23 + -8);
                if ((long)uVar34 <= (long)uVar26) goto LAB_001020a7;
                plVar37 = (long *)(*plVar22 + -0x10);
                if (*plVar22 == 0) {
                  local_100 = plVar22[1];
LAB_0010391d:
                  local_108 = (Object *)0x0;
                  lStack_f8 = local_170;
                  Vector<RemoteFilesystemClient::FileCache>::push_back
                            ((Vector<RemoteFilesystemClient::FileCache> *)&local_118);
                }
                else {
                  do {
                    lVar23 = *plVar37;
                    if (lVar23 == 0) {
                      local_100 = plVar22[1];
                      goto LAB_0010391d;
                    }
                    LOCK();
                    lVar30 = *plVar37;
                    bVar38 = lVar23 == lVar30;
                    if (bVar38) {
                      *plVar37 = lVar23 + 1;
                      lVar30 = lVar23;
                    }
                    UNLOCK();
                  } while (!bVar38);
                  local_100 = plVar22[1];
                  if (lVar30 == -1) goto LAB_0010391d;
                  pOVar2 = (Object *)*plVar22;
                  local_108 = (Object *)0x0;
                  if (pOVar2 == (Object *)0x0) goto LAB_0010391d;
                  pOVar1 = pOVar2 + -0x10;
                  do {
                    lVar23 = *(long *)pOVar1;
                    if (lVar23 == 0) goto LAB_0010396a;
                    LOCK();
                    lVar30 = *(long *)pOVar1;
                    bVar38 = lVar23 == lVar30;
                    if (bVar38) {
                      *(long *)pOVar1 = lVar23 + 1;
                      lVar30 = lVar23;
                    }
                    UNLOCK();
                  } while (!bVar38);
                  if (lVar30 == -1) {
LAB_0010396a:
                    lStack_f8 = local_170;
                    Vector<RemoteFilesystemClient::FileCache>::push_back
                              ((Vector<RemoteFilesystemClient::FileCache> *)&local_118);
                  }
                  else {
                    lStack_f8 = local_170;
                    local_108 = pOVar2;
                    Vector<RemoteFilesystemClient::FileCache>::push_back
                              ((Vector<RemoteFilesystemClient::FileCache> *)&local_118);
                    LOCK();
                    pOVar2 = pOVar2 + -0x10;
                    *(long *)pOVar2 = *(long *)pOVar2 + -1;
                    UNLOCK();
                    if (*(long *)pOVar2 == 0) {
                      Memory::free_static(local_108 + -0x10,false);
                    }
                  }
                  LOCK();
                  *(long *)pOVar1 = *(long *)pOVar1 + -1;
                  UNLOCK();
                  if (*(long *)pOVar1 == 0) {
                    Memory::free_static(pOVar1,false);
                  }
                }
                lVar23 = local_180;
                if (local_180 != 0) {
                  LOCK();
                  plVar22 = (long *)(local_180 + -0x10);
                  *plVar22 = *plVar22 + -1;
                  UNLOCK();
                  if (*plVar22 == 0) {
                    local_180 = 0;
                    Memory::free_static((void *)(lVar23 + -0x10),false);
                  }
                }
                cVar15 = '\0';
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar18);
          }
          local_1c0 = local_e8;
          cVar14 = is_print_verbose_enabled();
          if (cVar14 != '\0') {
            Variant::Variant((Variant *)local_88,"Remote Filesystem: Updating the cache file.");
            print_line((Variant *)local_88);
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if (local_150[0] != 0) {
            uVar26 = 0;
            do {
              if (*(long *)(local_150[0] + -8) <= (long)uVar26) break;
              if ((local_1c0 != (char *)0x0) && (local_c8._4_4_ != 0)) {
                pSVar3 = (String *)(local_150[0] + uVar26 * 0x18);
                uVar18 = *(uint *)(hash_table_size_primes + (local_c8 & 0xffffffff) * 4);
                lVar23 = *(long *)(hash_table_size_primes_inv + (local_c8 & 0xffffffff) * 8);
                uVar19 = String::hash();
                uVar34 = CONCAT44(0,uVar18);
                uVar20 = local_d8._8_8_;
                uVar35 = 1;
                if (uVar19 != 0) {
                  uVar35 = uVar19;
                }
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)uVar35 * lVar23;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar34;
                lVar30 = SUB168(auVar5 * auVar9,8);
                uVar19 = *(uint *)(local_d8._8_8_ + lVar30 * 4);
                if (uVar19 != 0) {
                  uVar36 = 0;
                  iVar16 = SUB164(auVar5 * auVar9,8);
                  do {
                    if ((uVar35 == uVar19) &&
                       (cVar14 = String::operator==((String *)
                                                    (local_1c0 +
                                                    (ulong)*(uint *)((long)pvStack_e0 + lVar30 * 4)
                                                    * 8),pSVar3), cVar14 != '\0'))
                    goto LAB_00102ce5;
                    uVar36 = uVar36 + 1;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = (ulong)(iVar16 + 1) * lVar23;
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = uVar34;
                    lVar30 = SUB168(auVar6 * auVar10,8);
                    uVar19 = *(uint *)(uVar20 + lVar30 * 4);
                    iVar16 = SUB164(auVar6 * auVar10,8);
                  } while ((uVar19 != 0) &&
                          (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar19 * lVar23,
                          auVar11._8_8_ = 0, auVar11._0_8_ = uVar34, auVar8._8_8_ = 0,
                          auVar8._0_8_ = (ulong)((uVar18 + iVar16) - SUB164(auVar7 * auVar11,8)) *
                                         lVar23, auVar12._8_8_ = 0, auVar12._0_8_ = uVar34,
                          uVar36 <= SUB164(auVar8 * auVar12,8)));
                }
              }
              if (local_150[0] == 0) {
                uVar34 = 0;
                goto LAB_001020a7;
              }
              uVar34 = *(ulong *)(local_150[0] + -8);
              if ((long)uVar34 <= (long)uVar26) goto LAB_001020a7;
              local_108 = (Object *)0x0;
              plVar37 = (long *)(uVar26 * 0x18 + local_150[0]);
              plVar22 = (long *)(*plVar37 + -0x10);
              if (*plVar37 == 0) {
                local_100 = plVar37[1];
                lStack_f8 = plVar37[2];
                Vector<RemoteFilesystemClient::FileCache>::push_back
                          ((Vector<RemoteFilesystemClient::FileCache> *)&local_118,
                           (String *)&local_108);
              }
              else {
                do {
                  lVar23 = *plVar22;
                  if (lVar23 == 0) goto LAB_00103645;
                  LOCK();
                  lVar30 = *plVar22;
                  bVar38 = lVar23 == lVar30;
                  if (bVar38) {
                    *plVar22 = lVar23 + 1;
                    lVar30 = lVar23;
                  }
                  UNLOCK();
                } while (!bVar38);
                if (lVar30 != -1) {
                  local_108 = (Object *)*plVar37;
                }
LAB_00103645:
                pOVar2 = local_108;
                local_100 = plVar37[1];
                lStack_f8 = plVar37[2];
                Vector<RemoteFilesystemClient::FileCache>::push_back
                          ((Vector<RemoteFilesystemClient::FileCache> *)&local_118);
                if (pOVar2 != (Object *)0x0) {
                  LOCK();
                  pOVar2 = pOVar2 + -0x10;
                  *(long *)pOVar2 = *(long *)pOVar2 + -1;
                  UNLOCK();
                  if (*(long *)pOVar2 == 0) {
                    Memory::free_static(local_108 + -0x10,false);
                  }
                }
              }
LAB_00102ce5:
              local_1c0 = local_e8;
              uVar26 = uVar26 + 1;
            } while (local_150[0] != 0);
          }
          ppOVar32 = &local_118;
          iVar16 = (**(code **)(*(long *)this + 0x20))();
          if (iVar16 == 0) {
            cVar14 = is_print_verbose_enabled();
            if (cVar14 != '\0') {
              Variant::Variant((Variant *)local_88,"Remote Filesystem: Update success.");
              print_line((Variant *)local_88);
              if (Variant::needs_deinit[local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            (**(code **)(*(long *)this + 0x30))();
            iVar16 = 0;
          }
          else {
            iVar16 = 0xc;
            _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",0x143
                             ,"Condition \"err != OK\" is true. Returning: ERR_FILE_CANT_OPEN",
                             "Error writing the remote filesystem file cache.",0,0,ppOVar32);
          }
          CowData<RemoteFilesystemClient::FileCache>::_unref
                    ((CowData<RemoteFilesystemClient::FileCache> *)&local_110);
LAB_00102d50:
          pcVar31 = local_e8;
          if (local_e8 != (char *)0x0) {
            if (local_c8._4_4_ != 0) {
              if (*(uint *)(hash_table_size_primes + (local_c8 & 0xffffffff) * 4) != 0) {
                memset((void *)local_d8._8_8_,0,
                       (ulong)*(uint *)(hash_table_size_primes + (local_c8 & 0xffffffff) * 4) * 4);
              }
              lVar23 = 0;
              do {
                plVar22 = (long *)(pcVar31 + lVar23 * 8);
                if (*plVar22 != 0) {
                  LOCK();
                  plVar37 = (long *)(*plVar22 + -0x10);
                  *plVar37 = *plVar37 + -1;
                  UNLOCK();
                  pcVar31 = local_e8;
                  if (*plVar37 == 0) {
                    lVar30 = *plVar22;
                    *plVar22 = 0;
                    Memory::free_static((void *)(lVar30 + -0x10),false);
                    pcVar31 = local_e8;
                  }
                }
                lVar23 = lVar23 + 1;
              } while ((uint)lVar23 < local_c8._4_4_);
              local_c8 = local_c8 & 0xffffffff;
              if (pcVar31 == (char *)0x0) goto LAB_00102df3;
            }
            Memory::free_static(pcVar31,false);
            Memory::free_static((void *)local_d8._0_8_,false);
            Memory::free_static(pvStack_e0,false);
            Memory::free_static((void *)local_d8._8_8_,false);
          }
LAB_00102df3:
          CowData<RemoteFilesystemClient::FileCache>::_unref
                    ((CowData<RemoteFilesystemClient::FileCache> *)&local_120);
          if (local_130 != (void *)0x0) {
            if ((uint)local_138 != 0) {
              local_138 = local_138 & 0xffffffff00000000;
            }
            Memory::free_static(local_130,false);
          }
        }
        else {
          _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",0xee,
                           "Condition \"tcp_client->get_status() != StreamPeerTCP::STATUS_CONNECTED\" is true. Returning: ERR_CONNECTION_ERROR"
                           ,"Remote filesystem server disconnected after sending header.",0,0);
LAB_001036d0:
          iVar16 = 0x1b;
        }
        if (local_140 != 0) {
          LOCK();
          plVar22 = (long *)(local_140 + -0x10);
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (*plVar22 == 0) {
            Memory::free_static((void *)(local_140 + -0x10),false);
          }
        }
        CowData<RemoteFilesystemClient::FileCache>::_unref
                  ((CowData<RemoteFilesystemClient::FileCache> *)local_150);
        CowData<String>::_unref((CowData<String> *)&local_160);
      }
      else {
        local_118 = (Object *)0x0;
        plVar22 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar23 = *plVar22;
            if (lVar23 == 0) goto LAB_00101bcb;
            LOCK();
            lVar30 = *plVar22;
            bVar38 = lVar23 == lVar30;
            if (bVar38) {
              *plVar22 = lVar23 + 1;
              lVar30 = lVar23;
            }
            UNLOCK();
          } while (!bVar38);
          if (lVar30 != -1) {
            local_118 = *(Object **)param_1;
          }
        }
LAB_00101bcb:
        local_108 = (Object *)0x0;
        local_e8 = "Connection to remote file server (%s, port %d) failed.";
        pvStack_e0 = (void *)0x36;
        String::parse_latin1((StrRange *)&local_108);
        vformat<String,int>((Variant *)&local_e8,(String *)&local_108,&local_118,param_2);
        _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",0xa5,
                         "Method/function failed. Returning: ERR_CANT_CONNECT",(Variant *)&local_e8,
                         0,0);
        pcVar31 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar22 = (long *)(local_e8 + -0x10);
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (*plVar22 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar31 + -0x10,false);
          }
        }
        pOVar2 = local_108;
        if (local_108 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_108 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_108 = (Object *)0x0;
            Memory::free_static(pOVar2 + -0x10,false);
          }
        }
        pOVar2 = local_118;
        if (local_118 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_118 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_118 = (Object *)0x0;
            Memory::free_static(pOVar2 + -0x10,false);
          }
        }
        iVar16 = 0x19;
      }
    }
    else {
      local_118 = (Object *)0x0;
      plVar22 = (long *)(*(long *)param_1 + -0x10);
      if (*(long *)param_1 != 0) {
        do {
          lVar23 = *plVar22;
          if (lVar23 == 0) goto LAB_0010271e;
          LOCK();
          lVar30 = *plVar22;
          bVar38 = lVar23 == lVar30;
          if (bVar38) {
            *plVar22 = lVar23 + 1;
            lVar30 = lVar23;
          }
          UNLOCK();
        } while (!bVar38);
        if (lVar30 != -1) {
          local_118 = *(Object **)param_1;
        }
      }
LAB_0010271e:
      local_108 = (Object *)0x0;
      local_e8 = "Unable to open connection to remote file server (%s, port %d) failed.";
      pvStack_e0 = (void *)0x45;
      String::parse_latin1((StrRange *)&local_108);
      vformat<String,int>((Variant *)&local_e8,(String *)&local_108,&local_118,param_2);
      _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",0x9d,
                       "Condition \"err != OK\" is true. Returning: err",(Variant *)&local_e8,0,0);
      pcVar31 = local_e8;
      if (local_e8 != (char *)0x0) {
        LOCK();
        plVar22 = (long *)(local_e8 + -0x10);
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (*plVar22 == 0) {
          local_e8 = (char *)0x0;
          Memory::free_static(pcVar31 + -0x10,false);
        }
      }
      pOVar2 = local_108;
      if (local_108 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_108 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_108 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
      pOVar2 = local_118;
      if (local_118 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_118 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_118 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
    }
  }
  else {
    IPAddress::IPAddress(local_a8,param_1);
    cVar14 = local_98;
    if (local_98 != '\0') goto LAB_00101b1f;
LAB_00101d4c:
    local_108 = (Object *)0x0;
    plVar22 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar23 = *plVar22;
        if (lVar23 == 0) goto LAB_00101d8a;
        LOCK();
        lVar30 = *plVar22;
        bVar38 = lVar23 == lVar30;
        if (bVar38) {
          *plVar22 = lVar23 + 1;
          lVar30 = lVar23;
        }
        UNLOCK();
      } while (!bVar38);
      if (lVar30 != -1) {
        local_108 = *(Object **)param_1;
      }
    }
LAB_00101d8a:
    local_118 = (Object *)0x0;
    local_e8 = "Unable to resolve remote filesystem server hostname: \'%s\'.";
    pvStack_e0 = (void *)0x3a;
    String::parse_latin1((StrRange *)&local_118);
    vformat<String>((Variant *)&local_e8,(StrRange *)&local_118,(String *)&local_108);
    _err_print_error("_synchronize_with_server","core/io/remote_filesystem_client.cpp",0x9a,
                     "Condition \"!ip.is_valid()\" is true. Returning: ERR_INVALID_PARAMETER",
                     (Variant *)&local_e8,0,0);
    pcVar31 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar22 = (long *)(local_e8 + -0x10);
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar31 + -0x10,false);
      }
    }
    pOVar2 = local_118;
    if (local_118 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_118 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_118 = (Object *)0x0;
        Memory::free_static(pOVar2 + -0x10,false);
      }
    }
    pOVar2 = local_108;
    if (local_108 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_108 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_108 = (Object *)0x0;
        Memory::free_static(pOVar2 + -0x10,false);
      }
    }
    iVar16 = 0x1f;
    if (local_1d8 == (Object *)0x0) goto LAB_00101ca7;
  }
  cVar14 = RefCounted::unreference();
  if ((cVar14 != '\0') && (cVar14 = predelete_handler(local_1d8), cVar14 != '\0')) {
    (**(code **)(*(long *)local_1d8 + 0x140))(local_1d8);
    Memory::free_static(local_1d8,false);
  }
LAB_00101ca7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102536:
  uVar34 = 0;
LAB_001020a7:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar26,uVar34,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar25 = (code *)invalidInstructionException();
  (*pcVar25)();
}



/* RemoteFilesystemClient::_load_cache_file() */

RemoteFilesystemClient * __thiscall
RemoteFilesystemClient::_load_cache_file(RemoteFilesystemClient *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  Object *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  Vector<RemoteFilesystemClient::FileCache> local_98 [8];
  undefined8 local_90;
  char local_88 [8];
  long *local_80;
  char *local_78;
  undefined1 local_70 [16];
  char *local_58;
  undefined8 local_50;
  long lStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (char *)0x0;
  local_50 = 0x17;
  local_58 = "remote_filesystem.cache";
  String::parse_latin1((StrRange *)&local_78);
  String::path_join((String *)&local_58);
  FileAccess::open((String *)&local_b8,(int)(String *)&local_58,(Error *)0x1);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  pcVar3 = local_78;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  if (local_b8 == (Object *)0x0) {
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    (**(code **)(*(long *)local_b8 + 0x228))((String *)&local_58);
    iVar5 = String::to_int();
    pcVar3 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (iVar5 == 1) {
      local_58 = "remote_filesystem_files";
      local_78 = (char *)0x0;
      local_50 = 0x17;
      String::parse_latin1((StrRange *)&local_78);
      String::path_join((String *)&local_b0);
      pcVar3 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      local_90 = 0;
      while (cVar4 = (**(code **)(*(long *)local_b8 + 0x1d8))(), cVar4 == '\0') {
        (**(code **)(*(long *)local_b8 + 0x228))(&local_a8);
        String::split(local_88,SUB81(&local_a8,0),0x1041b4);
        if ((local_80 == (long *)0x0) || (local_80[-1] != 3)) {
          CowData<String>::_unref((CowData<String> *)&local_80);
          lVar7 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          break;
        }
        local_78 = (char *)0x0;
        local_70 = (undefined1  [16])0x0;
        lVar7 = local_80[-1];
        if (lVar7 < 1) {
          lVar8 = 0;
          goto LAB_0010407d;
        }
        plVar1 = (long *)(*local_80 + -0x10);
        if (*local_80 != 0) {
          do {
            lVar7 = *plVar1;
            if (lVar7 == 0) goto LAB_00103dee;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar7 == lVar8;
            if (bVar9) {
              *plVar1 = lVar7 + 1;
              lVar8 = lVar7;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_78 = (char *)*local_80;
          }
LAB_00103dee:
          if (local_80 != (long *)0x0) {
            lVar7 = local_80[-1];
            goto LAB_00103e00;
          }
          lVar7 = 0;
LAB_001040a3:
          lVar8 = 1;
LAB_0010407d:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
LAB_00103e00:
        if (lVar7 < 2) goto LAB_001040a3;
        uVar6 = String::to_int();
        local_70._0_8_ = uVar6;
        if (local_80 == (long *)0x0) {
          lVar7 = 0;
LAB_001040cb:
          lVar8 = 2;
          goto LAB_0010407d;
        }
        lVar7 = local_80[-1];
        if (lVar7 < 3) goto LAB_001040cb;
        uVar6 = String::to_int();
        local_70._8_8_ = uVar6;
        String::path_join((String *)&local_a0);
        cVar4 = FileAccess::exists((String *)&local_a0);
        if (cVar4 != '\0') {
          lVar7 = FileAccess::get_modified_time((String *)&local_a0);
          if (lVar7 == local_70._8_8_) {
            local_58 = (char *)0x0;
            plVar1 = (long *)(local_78 + -0x10);
            if (local_78 == (char *)0x0) {
              local_50 = local_70._0_8_;
              lStack_48 = lVar7;
              Vector<RemoteFilesystemClient::FileCache>::push_back(local_98);
            }
            else {
              do {
                lVar7 = *plVar1;
                if (lVar7 == 0) goto LAB_00103f64;
                LOCK();
                lVar8 = *plVar1;
                bVar9 = lVar7 == lVar8;
                if (bVar9) {
                  *plVar1 = lVar7 + 1;
                  lVar8 = lVar7;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar8 != -1) {
                local_58 = local_78;
              }
LAB_00103f64:
              pcVar3 = local_58;
              local_50 = local_70._0_8_;
              lStack_48 = local_70._8_8_;
              Vector<RemoteFilesystemClient::FileCache>::push_back(local_98);
              if (pcVar3 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(pcVar3 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static(local_58 + -0x10,false);
                }
              }
            }
          }
          else {
            DirAccess::remove_absolute((String *)&local_a0);
          }
        }
        lVar7 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        pcVar3 = local_78;
        if (local_78 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        CowData<String>::_unref((CowData<String> *)&local_80);
        lVar7 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
      }
      lVar7 = local_b0;
      *(undefined8 *)(this + 8) = local_90;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      *(undefined8 *)(this + 8) = 0;
    }
    if (((local_b8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_b8), cVar4 != '\0')) {
      (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
      Memory::free_static(local_b8,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteFilesystemClient::_is_configured() */

undefined8 __thiscall RemoteFilesystemClient::_is_configured(RemoteFilesystemClient *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulong)lVar1 >> 8),1 < *(uint *)(lVar1 + -8));
  }
  return 0;
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



/* CowData<RemoteFilesystemClient::FileCache>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RemoteFilesystemClient::FileCache>::_copy_on_write(void)

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

void FUN_00104280(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RemoteFilesystemClient::~RemoteFilesystemClient() */

void __thiscall RemoteFilesystemClient::~RemoteFilesystemClient(RemoteFilesystemClient *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x10);
  *(undefined ***)this = &PTR__is_configured_00106a70;
  if (pvVar5 == (void *)0x0) goto LAB_0010432a;
  if (*(int *)(this + 0x34) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) != 0) {
      memset(*(void **)(this + 0x28),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) << 2);
      if (*(int *)(this + 0x34) == 0) goto LAB_00104340;
    }
    lVar4 = 0;
    do {
      plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        pvVar5 = *(void **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0010432a;
  }
LAB_00104340:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x20),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  Memory::free_static(*(void **)(this + 0x28),false);
LAB_0010432a:
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* RemoteFilesystemClient::~RemoteFilesystemClient() */

void __thiscall RemoteFilesystemClient::~RemoteFilesystemClient(RemoteFilesystemClient *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x10);
  *(undefined ***)this = &PTR__is_configured_00106a70;
  if (pvVar5 == (void *)0x0) goto LAB_0010442a;
  if (*(int *)(this + 0x34) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) != 0) {
      memset(*(void **)(this + 0x28),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) << 2);
      if (*(int *)(this + 0x34) == 0) goto LAB_00104450;
    }
    lVar4 = 0;
    do {
      plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        pvVar5 = *(void **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0010442a;
  }
LAB_00104450:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x20),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  Memory::free_static(*(void **)(this + 0x28),false);
LAB_0010442a:
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  operator_delete(this,0x38);
  return;
}



/* print_line(Variant const&) */

void print_line(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stringify_variants((Variant *)&local_18);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    Memory::free_static(*(void **)(this + 0x30),false);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    if (*(int *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    Memory::free_static(*(void **)(this + 0x20),false);
  }
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 8) != 0) {
    lVar4 = 0;
    do {
      plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        pvVar5 = *(void **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
    if (pvVar5 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar5,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104788) */
/* WARNING: Removing unreachable block (ram,0x001048b8) */
/* WARNING: Removing unreachable block (ram,0x00104a80) */
/* WARNING: Removing unreachable block (ram,0x001048c4) */
/* WARNING: Removing unreachable block (ram,0x001048ce) */
/* WARNING: Removing unreachable block (ram,0x00104a60) */
/* WARNING: Removing unreachable block (ram,0x001048da) */
/* WARNING: Removing unreachable block (ram,0x001048e4) */
/* WARNING: Removing unreachable block (ram,0x00104a40) */
/* WARNING: Removing unreachable block (ram,0x001048f0) */
/* WARNING: Removing unreachable block (ram,0x001048fa) */
/* WARNING: Removing unreachable block (ram,0x00104a20) */
/* WARNING: Removing unreachable block (ram,0x00104906) */
/* WARNING: Removing unreachable block (ram,0x00104910) */
/* WARNING: Removing unreachable block (ram,0x00104a00) */
/* WARNING: Removing unreachable block (ram,0x0010491c) */
/* WARNING: Removing unreachable block (ram,0x00104926) */
/* WARNING: Removing unreachable block (ram,0x001049e0) */
/* WARNING: Removing unreachable block (ram,0x00104932) */
/* WARNING: Removing unreachable block (ram,0x0010493c) */
/* WARNING: Removing unreachable block (ram,0x001049c0) */
/* WARNING: Removing unreachable block (ram,0x00104944) */
/* WARNING: Removing unreachable block (ram,0x0010495a) */
/* WARNING: Removing unreachable block (ram,0x00104966) */
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
    if (*in_RSI != 0) goto LAB_0010529c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_0010529c:
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
              goto LAB_00105619;
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
  if ((float)uVar29 * __LC23 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00105619;
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
LAB_00105619:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00105a10) */
/* WARNING: Removing unreachable block (ram,0x00105b40) */
/* WARNING: Removing unreachable block (ram,0x00105cb9) */
/* WARNING: Removing unreachable block (ram,0x00105b4c) */
/* WARNING: Removing unreachable block (ram,0x00105b56) */
/* WARNING: Removing unreachable block (ram,0x00105c9b) */
/* WARNING: Removing unreachable block (ram,0x00105b62) */
/* WARNING: Removing unreachable block (ram,0x00105b6c) */
/* WARNING: Removing unreachable block (ram,0x00105c7d) */
/* WARNING: Removing unreachable block (ram,0x00105b78) */
/* WARNING: Removing unreachable block (ram,0x00105b82) */
/* WARNING: Removing unreachable block (ram,0x00105c5f) */
/* WARNING: Removing unreachable block (ram,0x00105b8e) */
/* WARNING: Removing unreachable block (ram,0x00105b98) */
/* WARNING: Removing unreachable block (ram,0x00105c41) */
/* WARNING: Removing unreachable block (ram,0x00105ba4) */
/* WARNING: Removing unreachable block (ram,0x00105bae) */
/* WARNING: Removing unreachable block (ram,0x00105c23) */
/* WARNING: Removing unreachable block (ram,0x00105bb6) */
/* WARNING: Removing unreachable block (ram,0x00105bc0) */
/* WARNING: Removing unreachable block (ram,0x00105c08) */
/* WARNING: Removing unreachable block (ram,0x00105bc8) */
/* WARNING: Removing unreachable block (ram,0x00105bde) */
/* WARNING: Removing unreachable block (ram,0x00105bea) */
/* String vformat<IPAddress, int>(String const&, IPAddress const, int const) */

undefined8 * vformat<IPAddress,int>(undefined8 *param_1,bool *param_2,int param_3)

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
  Variant::Variant(local_88,&stack0x00000008);
  Variant::Variant(local_70,param_3);
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



/* WARNING: Removing unreachable block (ram,0x00105e30) */
/* WARNING: Removing unreachable block (ram,0x00105f60) */
/* WARNING: Removing unreachable block (ram,0x001060d9) */
/* WARNING: Removing unreachable block (ram,0x00105f6c) */
/* WARNING: Removing unreachable block (ram,0x00105f76) */
/* WARNING: Removing unreachable block (ram,0x001060bb) */
/* WARNING: Removing unreachable block (ram,0x00105f82) */
/* WARNING: Removing unreachable block (ram,0x00105f8c) */
/* WARNING: Removing unreachable block (ram,0x0010609d) */
/* WARNING: Removing unreachable block (ram,0x00105f98) */
/* WARNING: Removing unreachable block (ram,0x00105fa2) */
/* WARNING: Removing unreachable block (ram,0x0010607f) */
/* WARNING: Removing unreachable block (ram,0x00105fae) */
/* WARNING: Removing unreachable block (ram,0x00105fb8) */
/* WARNING: Removing unreachable block (ram,0x00106061) */
/* WARNING: Removing unreachable block (ram,0x00105fc4) */
/* WARNING: Removing unreachable block (ram,0x00105fce) */
/* WARNING: Removing unreachable block (ram,0x00106043) */
/* WARNING: Removing unreachable block (ram,0x00105fd6) */
/* WARNING: Removing unreachable block (ram,0x00105fe0) */
/* WARNING: Removing unreachable block (ram,0x00106028) */
/* WARNING: Removing unreachable block (ram,0x00105fe8) */
/* WARNING: Removing unreachable block (ram,0x00105ffe) */
/* WARNING: Removing unreachable block (ram,0x0010600a) */
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



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106550:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00106550;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00106429:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00106429;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_001065a6;
  }
  if (lVar10 == lVar7) {
LAB_001064cf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001065a6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001064ba;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001064cf;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_001064ba:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RemoteFilesystemClient::FileCache>::_unref() */

void __thiscall
CowData<RemoteFilesystemClient::FileCache>::_unref(CowData<RemoteFilesystemClient::FileCache> *this)

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
          plVar6 = plVar6 + 3;
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



/* CowData<RemoteFilesystemClient::FileCache>::_realloc(long) */

undefined8 __thiscall
CowData<RemoteFilesystemClient::FileCache>::_realloc
          (CowData<RemoteFilesystemClient::FileCache> *this,long param_1)

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
/* Error CowData<RemoteFilesystemClient::FileCache>::resize<false>(long) */

undefined8 __thiscall
CowData<RemoteFilesystemClient::FileCache>::resize<false>
          (CowData<RemoteFilesystemClient::FileCache> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar8 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar11 * 0x18;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_001069d0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x18 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_001069d0;
  if (param_1 <= lVar11) {
    puVar7 = *(undefined8 **)this;
    uVar9 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar9) {
LAB_0010688e:
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          puVar7 = *(undefined8 **)this;
          if (puVar7 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        goto LAB_0010693c;
      }
      while( true ) {
        plVar2 = puVar7 + uVar9 * 3;
        if (*plVar2 != 0) break;
        uVar9 = uVar9 + 1;
        if ((ulong)puVar7[-1] <= uVar9) goto LAB_0010688e;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar11 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
      uVar9 = uVar9 + 1;
      puVar7 = *(undefined8 **)this;
    }
    goto LAB_00106a26;
  }
  if (lVar10 == lVar8) {
LAB_0010695b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00106a26:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar11 = puVar7[-1];
    if (param_1 <= lVar11) goto LAB_0010693c;
  }
  else {
    if (lVar11 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010695b;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar11 = 0;
  }
  puVar5 = puVar7 + lVar11 * 3;
  do {
    *puVar5 = 0;
    puVar6 = puVar5 + 3;
    *(undefined1 (*) [16])(puVar5 + 1) = (undefined1  [16])0x0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 3);
LAB_0010693c:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RemoteFilesystemClient::~RemoteFilesystemClient() */

void __thiscall RemoteFilesystemClient::~RemoteFilesystemClient(RemoteFilesystemClient *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


