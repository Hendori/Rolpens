
/* create_directory(String const&) */

undefined8 create_directory(String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  Object *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = DirAccess::exists(param_1);
  if (cVar4 == '\0') {
    DirAccess::create(&local_60,0);
    if (local_60 == (Object *)0x0) {
      local_50 = 0;
      local_48 = &_LC16;
      local_40 = 2;
      String::parse_latin1((StrRange *)&local_50);
      operator+((char *)&local_58,(String *)"Cannot create directory \'");
      String::operator+((String *)&local_48,(String *)&local_58);
      pcVar6 = "Condition \"filesystem_da.is_null()\" is true. Returning: ERR_CANT_CREATE";
      uVar7 = 0x81;
    }
    else {
      iVar5 = (**(code **)(*(long *)local_60 + 0x1c0))();
      if (iVar5 == 0) {
        if (local_60 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_60);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)local_60 + 0x140))(local_60);
              Memory::free_static(local_60,false);
            }
          }
        }
        goto LAB_0010031a;
      }
      local_50 = 0;
      local_48 = &_LC16;
      local_40 = 2;
      String::parse_latin1((StrRange *)&local_50);
      operator+((char *)&local_58,(String *)"Cannot create directory \'");
      String::operator+((String *)&local_48,(String *)&local_58);
      pcVar6 = "Condition \"err\" is true. Returning: ERR_CANT_CREATE";
      uVar7 = 0x83;
    }
    _err_print_error("create_directory","platform/android/export/gradle_export_util.cpp",uVar7,
                     pcVar6,&local_48,0,0);
    puVar3 = local_48;
    if (local_48 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
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
    if (local_60 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_60);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_60 + 0x140))(local_60);
          Memory::free_static(local_60,false);
        }
      }
    }
    uVar7 = 0x14;
  }
  else {
LAB_0010031a:
    uVar7 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* store_file_at_path(String const&, Vector<unsigned char> const&) */

int store_file_at_path(String *param_1,Vector *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_base_dir();
  iVar5 = create_directory((String *)&local_68);
  if (iVar5 == 0) {
    FileAccess::open((String *)&local_60,(int)param_1,(Error *)0x2);
    if (local_60 == (Object *)0x0) {
      local_50 = 0;
      local_48 = &_LC16;
      local_40 = 2;
      String::parse_latin1((StrRange *)&local_50);
      operator+((char *)&local_58,(String *)"Cannot create file \'");
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("store_file_at_path","platform/android/export/gradle_export_util.cpp",0x91,
                       "Condition \"fa.is_null()\" is true. Returning: ERR_CANT_CREATE",
                       (String *)&local_48,0,0);
      puVar3 = local_48;
      if (local_48 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
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
      iVar5 = 0x14;
    }
    else {
      lVar2 = *(long *)(param_2 + 8);
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar2 + -8);
      }
      (**(code **)(*(long *)local_60 + 0x2d0))(local_60,lVar2,uVar6);
    }
    if (local_60 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_60);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_60 + 0x140))(local_60);
          Memory::free_static(local_60,false);
        }
      }
    }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* store_string_at_path(String const&, String const&) */

int store_string_at_path(String *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_base_dir();
  iVar5 = create_directory((String *)&local_68);
  if (iVar5 == 0) {
    FileAccess::open((String *)&local_60,(int)param_1,(Error *)0x2);
    if (local_60 == (Object *)0x0) {
      local_50 = 0;
      local_48 = &_LC16;
      local_40 = 2;
      String::parse_latin1((StrRange *)&local_50);
      operator+((char *)&local_58,(String *)"Cannot create file \'");
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("store_string_at_path","platform/android/export/gradle_export_util.cpp",0xa2,
                       "Condition \"fa.is_null()\" is true. Returning: ERR_CANT_CREATE",
                       (String *)&local_48,0,0);
      puVar3 = local_48;
      if (local_48 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
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
      iVar5 = 0x14;
    }
    else {
      (**(code **)(*(long *)local_60 + 0x2a8))();
    }
    if (local_60 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_60);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_60 + 0x140))(local_60);
          Memory::free_static(local_60,false);
        }
      }
    }
  }
  else {
    OS::get_singleton();
    cVar4 = OS::is_stdout_verbose();
    if (cVar4 != '\0') {
      operator+((char *)&local_48,(String *)"Unable to write data into ");
      print_error((String *)&local_48);
      puVar3 = local_48;
      if (local_48 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
    }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* rename_and_store_file_in_gradle_project(void*, String const&, Vector<unsigned char> const&, int,
   int, Vector<String> const&, Vector<String> const&, Vector<unsigned char> const&, unsigned long)
    */

undefined4
rename_and_store_file_in_gradle_project
          (void *param_1,String *param_2,Vector *param_3,int param_4,int param_5,Vector *param_6,
          Vector *param_7,Vector *param_8,ulong param_9)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ResourceUID::ensure_path((String *)&local_98);
  local_68 = "/";
  local_80 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_80);
  String::operator+((String *)&local_78,(String *)param_1);
  local_68 = "res://";
  local_70 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  String::replace_first((String *)&local_90,(String *)&local_98);
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
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      cVar4 = is_print_verbose_enabled();
      goto joined_r0x00100c40;
    }
  }
  cVar4 = is_print_verbose_enabled();
joined_r0x00100c40:
  if (cVar4 != '\0') {
    local_80 = 0;
    local_68 = " into ";
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_80);
    operator+((char *)&local_88,(String *)"Saving project files from ");
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_70,(String *)&local_78);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
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
    lVar2 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  uVar5 = store_file_at_path((String *)&local_90,param_3);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* bool_to_string(bool) */

StrRange * bool_to_string(bool param_1)

{
  long lVar1;
  undefined7 in_register_00000039;
  StrRange *pSVar2;
  long in_FS_OFFSET;
  
  pSVar2 = (StrRange *)CONCAT71(in_register_00000039,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)pSVar2 = 0;
  String::parse_latin1(pSVar2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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
        if (pvVar5 == (void *)0x0) goto LAB_001034d4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001034d4:
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



/* WARNING: Removing unreachable block (ram,0x00104398) */
/* WARNING: Removing unreachable block (ram,0x001044c8) */
/* WARNING: Removing unreachable block (ram,0x00104690) */
/* WARNING: Removing unreachable block (ram,0x001044d4) */
/* WARNING: Removing unreachable block (ram,0x001044de) */
/* WARNING: Removing unreachable block (ram,0x00104670) */
/* WARNING: Removing unreachable block (ram,0x001044ea) */
/* WARNING: Removing unreachable block (ram,0x001044f4) */
/* WARNING: Removing unreachable block (ram,0x00104650) */
/* WARNING: Removing unreachable block (ram,0x00104500) */
/* WARNING: Removing unreachable block (ram,0x0010450a) */
/* WARNING: Removing unreachable block (ram,0x00104630) */
/* WARNING: Removing unreachable block (ram,0x00104516) */
/* WARNING: Removing unreachable block (ram,0x00104520) */
/* WARNING: Removing unreachable block (ram,0x00104610) */
/* WARNING: Removing unreachable block (ram,0x0010452c) */
/* WARNING: Removing unreachable block (ram,0x00104536) */
/* WARNING: Removing unreachable block (ram,0x001045f0) */
/* WARNING: Removing unreachable block (ram,0x00104542) */
/* WARNING: Removing unreachable block (ram,0x0010454c) */
/* WARNING: Removing unreachable block (ram,0x001045d0) */
/* WARNING: Removing unreachable block (ram,0x00104554) */
/* WARNING: Removing unreachable block (ram,0x0010456a) */
/* WARNING: Removing unreachable block (ram,0x00104576) */
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



/* WARNING: Removing unreachable block (ram,0x00104810) */
/* WARNING: Removing unreachable block (ram,0x00104940) */
/* WARNING: Removing unreachable block (ram,0x00104ab9) */
/* WARNING: Removing unreachable block (ram,0x0010494c) */
/* WARNING: Removing unreachable block (ram,0x00104956) */
/* WARNING: Removing unreachable block (ram,0x00104a9b) */
/* WARNING: Removing unreachable block (ram,0x00104962) */
/* WARNING: Removing unreachable block (ram,0x0010496c) */
/* WARNING: Removing unreachable block (ram,0x00104a7d) */
/* WARNING: Removing unreachable block (ram,0x00104978) */
/* WARNING: Removing unreachable block (ram,0x00104982) */
/* WARNING: Removing unreachable block (ram,0x00104a5f) */
/* WARNING: Removing unreachable block (ram,0x0010498e) */
/* WARNING: Removing unreachable block (ram,0x00104998) */
/* WARNING: Removing unreachable block (ram,0x00104a41) */
/* WARNING: Removing unreachable block (ram,0x001049a4) */
/* WARNING: Removing unreachable block (ram,0x001049ae) */
/* WARNING: Removing unreachable block (ram,0x00104a23) */
/* WARNING: Removing unreachable block (ram,0x001049b6) */
/* WARNING: Removing unreachable block (ram,0x001049c0) */
/* WARNING: Removing unreachable block (ram,0x00104a08) */
/* WARNING: Removing unreachable block (ram,0x001049c8) */
/* WARNING: Removing unreachable block (ram,0x001049de) */
/* WARNING: Removing unreachable block (ram,0x001049ea) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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



/* WARNING: Removing unreachable block (ram,0x00104c38) */
/* WARNING: Removing unreachable block (ram,0x00104d68) */
/* WARNING: Removing unreachable block (ram,0x00104ee0) */
/* WARNING: Removing unreachable block (ram,0x00104d74) */
/* WARNING: Removing unreachable block (ram,0x00104d7e) */
/* WARNING: Removing unreachable block (ram,0x00104ec2) */
/* WARNING: Removing unreachable block (ram,0x00104d8a) */
/* WARNING: Removing unreachable block (ram,0x00104d94) */
/* WARNING: Removing unreachable block (ram,0x00104ea4) */
/* WARNING: Removing unreachable block (ram,0x00104da0) */
/* WARNING: Removing unreachable block (ram,0x00104daa) */
/* WARNING: Removing unreachable block (ram,0x00104e86) */
/* WARNING: Removing unreachable block (ram,0x00104db6) */
/* WARNING: Removing unreachable block (ram,0x00104dc0) */
/* WARNING: Removing unreachable block (ram,0x00104e68) */
/* WARNING: Removing unreachable block (ram,0x00104dcc) */
/* WARNING: Removing unreachable block (ram,0x00104dd6) */
/* WARNING: Removing unreachable block (ram,0x00104e4a) */
/* WARNING: Removing unreachable block (ram,0x00104dde) */
/* WARNING: Removing unreachable block (ram,0x00104de8) */
/* WARNING: Removing unreachable block (ram,0x00104e2f) */
/* WARNING: Removing unreachable block (ram,0x00104df0) */
/* WARNING: Removing unreachable block (ram,0x00104e05) */
/* WARNING: Removing unreachable block (ram,0x00104e11) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00105080) */
/* WARNING: Removing unreachable block (ram,0x001051b0) */
/* WARNING: Removing unreachable block (ram,0x00105328) */
/* WARNING: Removing unreachable block (ram,0x001051bc) */
/* WARNING: Removing unreachable block (ram,0x001051c6) */
/* WARNING: Removing unreachable block (ram,0x0010530a) */
/* WARNING: Removing unreachable block (ram,0x001051d2) */
/* WARNING: Removing unreachable block (ram,0x001051dc) */
/* WARNING: Removing unreachable block (ram,0x001052ec) */
/* WARNING: Removing unreachable block (ram,0x001051e8) */
/* WARNING: Removing unreachable block (ram,0x001051f2) */
/* WARNING: Removing unreachable block (ram,0x001052ce) */
/* WARNING: Removing unreachable block (ram,0x001051fe) */
/* WARNING: Removing unreachable block (ram,0x00105208) */
/* WARNING: Removing unreachable block (ram,0x001052b0) */
/* WARNING: Removing unreachable block (ram,0x00105214) */
/* WARNING: Removing unreachable block (ram,0x0010521e) */
/* WARNING: Removing unreachable block (ram,0x00105292) */
/* WARNING: Removing unreachable block (ram,0x00105226) */
/* WARNING: Removing unreachable block (ram,0x00105230) */
/* WARNING: Removing unreachable block (ram,0x00105277) */
/* WARNING: Removing unreachable block (ram,0x00105238) */
/* WARNING: Removing unreachable block (ram,0x0010524d) */
/* WARNING: Removing unreachable block (ram,0x00105259) */
/* String vformat<String, String, String, String>(String const&, String const, String const, String
   const, String const) */

undefined8 *
vformat<String,String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5,
          String *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<Ref<EditorExportPlugin> >::_unref() */

void __thiscall CowData<Ref<EditorExportPlugin>>::_unref(CowData<Ref<EditorExportPlugin>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_001053ad:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001053ad;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
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
/* String::~String() */

void __thiscall String::~String(String *this)

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


