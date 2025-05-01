
/* ProjectZIPPacker::get_project_zip_safe_name() */

ProjectZIPPacker * __thiscall ProjectZIPPacker::get_project_zip_safe_name(ProjectZIPPacker *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_58,"application/config/name",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  Variant::operator_cast_to_String((Variant *)&local_88);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  String::to_lower();
  String::replace((char *)&local_80,(char *)&local_58);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  bVar4 = (bool)Time::get_singleton();
  Time::get_datetime_string_from_system(SUB81((StringName *)&local_58,0),bVar4);
  String::replace((char *)&local_78,(char *)&local_58);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  bVar4 = (bool)OS::get_singleton();
  local_60 = 0;
  plVar1 = (long *)(local_78 + -0x10);
  if (local_78 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100153;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar2 == lVar5;
      if (bVar6) {
        *plVar1 = lVar2 + 1;
        lVar5 = lVar2;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_60 = local_78;
    }
  }
LAB_00100153:
  local_68 = 0;
  plVar1 = (long *)(local_80 + -0x10);
  if (local_80 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010018d;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar2 == lVar5;
      if (bVar6) {
        *plVar1 = lVar2 + 1;
        lVar5 = lVar2;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_68 = local_80;
    }
  }
LAB_0010018d:
  local_70 = 0;
  local_58 = "%s_%s.zip";
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,String>((StringName *)&local_58,(StrRange *)&local_70,&local_68,&local_60);
  OS::get_safe_dir_name((String *)this,bVar4);
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
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ProjectZIPPacker::_zip_file(String const&, String const&, void*) */

void ProjectZIPPacker::_zip_file(String *param_1,String *param_2,void *param_3)

{
  long *plVar1;
  ulong *__dest;
  size_t __n;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  ulong *puVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  Object *local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_70,(int)param_1,(Error *)0x1);
  if (local_70 == (Object *)0x0) {
    operator+((char *)&local_58,(String *)"Unable to open file for zipping: ");
    _err_print_error("_zip_file","editor/export/project_zip_packer.cpp",0x43,&local_58,0,1);
    puVar3 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    goto LAB_001005cb;
  }
  uVar5 = (**(code **)(*(long *)local_70 + 0x1d0))();
  if ((long)uVar5 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_001006a5:
    puVar11 = (ulong *)0x0;
    pcVar10 = *(code **)(*(long *)local_70 + 0x220);
    pOVar12 = local_70;
  }
  else {
    if (uVar5 == 0) goto LAB_001006a5;
    uVar9 = uVar5 - 1 | uVar5 - 1 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    puVar6 = (ulong *)Memory::alloc_static((uVar9 | uVar9 >> 0x20) + 0x11,false);
    pOVar12 = local_70;
    if (puVar6 == (ulong *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      goto LAB_001006a5;
    }
    puVar11 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = uVar5;
    pcVar10 = *(code **)(*(long *)local_70 + 0x220);
    if (1 < *puVar6) {
      __n = puVar6[1];
      uVar9 = 0x10;
      if (__n != 0) {
        uVar9 = __n - 1 | __n - 1 >> 1;
        uVar9 = uVar9 | uVar9 >> 2;
        uVar9 = uVar9 | uVar9 >> 4;
        uVar9 = uVar9 | uVar9 >> 8;
        uVar9 = uVar9 | uVar9 >> 0x10;
        uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
      }
      puVar8 = (undefined8 *)Memory::alloc_static(uVar9,false);
      if (puVar8 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        __dest = puVar8 + 2;
        *puVar8 = 1;
        puVar8[1] = __n;
        memcpy(__dest,puVar11,__n);
        LOCK();
        *puVar6 = *puVar6 - 1;
        UNLOCK();
        puVar11 = __dest;
        if (*puVar6 == 0) {
          Memory::free_static(puVar6,false);
        }
      }
    }
  }
  (*pcVar10)(pOVar12,puVar11,uVar5);
  local_58 = &_LC19;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  String::replace_first((String *)&local_68,param_1);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::utf8();
  uVar7 = CharString::get_data();
  zipOpenNewFileInZip(param_3,uVar7,0,0,0,0,0,0,8,0xffffffffffffffff);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  if (puVar11 == (ulong *)0x0) {
    zipWriteInFileInZip(param_3,0,0);
    zipCloseFileInZip(param_3);
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
  }
  else {
    zipWriteInFileInZip(param_3,puVar11,(int)puVar11[-1]);
    zipCloseFileInZip(param_3);
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
    puVar11 = puVar11 + -2;
    LOCK();
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if (*puVar11 == 0) {
      Memory::free_static(puVar11,false);
    }
  }
LAB_001005cb:
  if (((local_70 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_70), cVar4 != '\0')) {
    (**(code **)(*(long *)local_70 + 0x140))(local_70);
    Memory::free_static(local_70,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectZIPPacker::_zip_recursive(String const&, String const&, void*) */

void ProjectZIPPacker::_zip_recursive(String *param_1,String *param_2,void *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  Object *local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::open((String *)&local_90,(Error *)param_1);
  if (local_90 == (Object *)0x0) {
    operator+((char *)&local_58,(String *)"Unable to open directory for zipping: ");
    _err_print_error("_zip_recursive","editor/export/project_zip_packer.cpp",0x5d,&local_58,0,1);
    puVar3 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
  }
  else {
    (**(code **)(*(long *)local_90 + 0x160))();
    (**(code **)(*(long *)local_90 + 0x168))((String *)&local_88);
    ProjectSettings::get_singleton();
    ProjectSettings::get_project_data_dir_name();
    lVar2 = local_80;
    while ((local_80 = lVar2, local_88 != (undefined *)0x0 && (1 < *(uint *)(local_88 + -8)))) {
      String::path_join((String *)&local_78);
      cVar6 = String::operator==((String *)&local_88,".");
      if ((cVar6 == '\0') && (cVar6 = String::operator==((String *)&local_88,".."), cVar6 == '\0'))
      {
        cVar6 = String::operator==((String *)&local_88,(String *)&local_80);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(*(long *)local_90 + 0x170))();
          if (cVar6 == '\0') {
            _zip_file((String *)&local_78,param_2,param_3);
          }
          else {
            local_60 = 0;
            local_58 = &_LC23;
            local_50 = 1;
            String::parse_latin1((StrRange *)&local_60);
            local_58 = &_LC19;
            local_68 = 0;
            local_50 = 0;
            String::parse_latin1((StrRange *)&local_68);
            String::replace_first((String *)&local_58,(String *)&local_78);
            String::operator+((String *)&local_70,(String *)&local_58);
            puVar3 = local_58;
            if (local_58 != (undefined *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (undefined *)0x0;
                Memory::free_static(puVar3 + -0x10,false);
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
            lVar2 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            String::utf8();
            uVar7 = CharString::get_data();
            zipOpenNewFileInZip(param_3,uVar7,0,0,0,0,0,0,8,0xffffffffffffffff);
            puVar3 = local_58;
            if (local_58 != (undefined *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (undefined *)0x0;
                Memory::free_static(puVar3 + -0x10,false);
              }
            }
            zipCloseFileInZip(param_3);
            _zip_recursive((String *)&local_78,param_2,param_3);
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
          }
        }
      }
      (**(code **)(*(long *)local_90 + 0x168))(&local_58);
      puVar5 = local_58;
      puVar3 = local_88;
      if (local_88 == local_58) {
        if (local_88 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
          }
        }
      }
      else {
        if (local_88 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
        local_88 = local_58;
      }
      lVar4 = local_78;
      lVar2 = local_80;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
          lVar2 = local_80;
        }
      }
    }
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    puVar3 = local_88;
    if (local_88 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
  }
  if (((local_90 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
    (**(code **)(*(long *)local_90 + 0x140))(local_90);
    Memory::free_static(local_90,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100fab) */
/* WARNING: Removing unreachable block (ram,0x00101090) */
/* WARNING: Removing unreachable block (ram,0x001010a4) */
/* ProjectZIPPacker::pack_project_zip(String const&) */

void ProjectZIPPacker::pack_project_zip(String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  wchar32 wVar6;
  long in_FS_OFFSET;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  Ref local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  zipio_create_io(local_98);
  ProjectSettings::get_singleton();
  ProjectSettings::get_resource_path();
  local_a8 = &_LC23;
  local_b0 = 0;
  local_a0 = 1;
  String::parse_latin1((StrRange *)&local_b0);
  wVar6 = (wchar32)(String *)&local_c0;
  String::rfind_char(wVar6,0x2f);
  String::substr((int)(String *)&local_a8,wVar6);
  String::operator+((String *)&local_b8,(String *)&local_a8);
  puVar3 = local_a8;
  if (local_a8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  String::utf8();
  uVar4 = CharString::get_data();
  pvVar5 = (void *)zipOpen2(uVar4,0,0,local_98);
  puVar3 = local_a8;
  if (local_a8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  _zip_recursive((String *)&local_c0,(String *)&local_b8,pvVar5);
  zipClose(pvVar5);
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
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101290) */
/* WARNING: Removing unreachable block (ram,0x001013c0) */
/* WARNING: Removing unreachable block (ram,0x00101539) */
/* WARNING: Removing unreachable block (ram,0x001013cc) */
/* WARNING: Removing unreachable block (ram,0x001013d6) */
/* WARNING: Removing unreachable block (ram,0x0010151b) */
/* WARNING: Removing unreachable block (ram,0x001013e2) */
/* WARNING: Removing unreachable block (ram,0x001013ec) */
/* WARNING: Removing unreachable block (ram,0x001014fd) */
/* WARNING: Removing unreachable block (ram,0x001013f8) */
/* WARNING: Removing unreachable block (ram,0x00101402) */
/* WARNING: Removing unreachable block (ram,0x001014df) */
/* WARNING: Removing unreachable block (ram,0x0010140e) */
/* WARNING: Removing unreachable block (ram,0x00101418) */
/* WARNING: Removing unreachable block (ram,0x001014c1) */
/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x0010142e) */
/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x00101436) */
/* WARNING: Removing unreachable block (ram,0x00101440) */
/* WARNING: Removing unreachable block (ram,0x00101488) */
/* WARNING: Removing unreachable block (ram,0x00101448) */
/* WARNING: Removing unreachable block (ram,0x0010145e) */
/* WARNING: Removing unreachable block (ram,0x0010146a) */
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


