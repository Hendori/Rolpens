
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



/* PluginConfigIOS::resolve_local_dependency_path(String, String) */

PluginConfigIOS * __thiscall
PluginConfigIOS::resolve_local_dependency_path
          (PluginConfigIOS *this,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  long in_FS_OFFSET;
  char *local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (char *)0x0;
  if ((*param_3 == 0) || (*(uint *)(*param_3 + -8) < 2)) {
    *(undefined8 *)this = 0;
  }
  else {
    cVar6 = String::is_absolute_path();
    if (cVar6 == '\0') {
      ProjectSettings::get_singleton();
      local_60 = 0;
      local_58 = "res://";
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_60);
      ProjectSettings::globalize_path((String *)&local_68);
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
      String::path_join((String *)&local_58);
      pcVar4 = local_58;
      pcVar3 = local_70;
      if (local_70 == local_58) {
        pcVar5 = local_70;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
            pcVar5 = local_70;
          }
        }
      }
      else {
        pcVar5 = local_58;
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          pcVar5 = local_58;
          if (*plVar1 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            pcVar5 = local_58;
          }
        }
      }
      local_70 = pcVar5;
      local_58 = "res://";
      local_60 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_60);
      String::replace(this,(String *)&local_70);
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
      lVar2 = *param_3;
      *param_3 = 0;
      *(long *)this = lVar2;
    }
    pcVar3 = local_70;
    if (local_70 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* PluginConfigIOS::resolve_system_dependency_path(String) */

PluginConfigIOS * __thiscall
PluginConfigIOS::resolve_system_dependency_path(PluginConfigIOS *this,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 == 0) || (*(uint *)(*param_2 + -8) < 2)) {
    *(undefined8 *)this = 0;
  }
  else {
    cVar3 = String::is_absolute_path();
    if (cVar3 == '\0') {
      local_40 = 0;
      local_38 = "/System/Library/Frameworks";
      local_30 = 0x1a;
      String::parse_latin1((StrRange *)&local_40);
      String::path_join(this);
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
    }
    else {
      lVar2 = *param_2;
      *param_2 = 0;
      *(long *)this = lVar2;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PluginConfigIOS::validate_plugin(PluginConfigIOS&) */

ulong PluginConfigIOS::validate_plugin(PluginConfigIOS *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  undefined8 in_RCX;
  undefined7 uVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  long local_98;
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
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar5 = false;
    uVar6 = 0;
  }
  else {
    bVar5 = 1 < *(uint *)(*(long *)(param_1 + 0x10) + -8);
    uVar6 = (undefined7)((ulong)in_RCX >> 8);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = 1 < *(uint *)(*(long *)(param_1 + 0x18) + -8);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)CONCAT71((int7)((ulong)unaff_R14 >> 8),
                           1 < *(uint *)(*(long *)(param_1 + 0x28) + -8));
  }
  uVar8 = 0;
  if (((*(long *)(param_1 + 0x30) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0x30) + -8))) &&
     (uVar8 = CONCAT71(uVar6,bVar5 & bVar7) & 0xffffffff, (bVar5 & bVar7) != 0)) {
    if ((char)uVar9 == '\0') {
      uVar8 = 0;
    }
    else {
      String::get_extension();
      String::to_lower();
      pcVar3 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      cVar4 = String::operator==((String *)&local_98,"a");
      if (((cVar4 == '\0') ||
          (cVar4 = FileAccess::exists((String *)(param_1 + 0x18)), cVar4 == '\0')) &&
         ((cVar4 = String::operator==((String *)&local_98,"xcframework"), cVar4 == '\0' ||
          (cVar4 = DirAccess::exists((String *)(param_1 + 0x18)), cVar4 == '\0')))) {
        String::get_base_dir();
        String::get_basename();
        String::get_file();
        pcVar3 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        String::get_extension();
        local_58 = ".release.";
        local_68 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_68);
        String::operator+((String *)&local_60,(String *)&local_88);
        String::operator+((String *)&local_58,(String *)&local_60);
        String::path_join((String *)&local_78);
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
        local_68 = 0;
        local_58 = ".debug.";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        String::operator+((String *)&local_60,(String *)&local_88);
        String::operator+((String *)&local_58,(String *)&local_60);
        String::path_join((String *)&local_70);
        pcVar3 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
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
        cVar4 = String::operator==((String *)&local_98,"a");
        if ((((cVar4 != '\0') && (cVar4 = FileAccess::exists((String *)&local_78), cVar4 != '\0'))
            && (cVar4 = FileAccess::exists((String *)&local_70), cVar4 != '\0')) ||
           (((cVar4 = String::operator==((String *)&local_98,"xcframework"), cVar4 != '\0' &&
             (cVar4 = DirAccess::exists((String *)&local_78), cVar4 != '\0')) &&
            (cVar4 = DirAccess::exists((String *)&local_70), cVar4 != '\0')))) {
          *(undefined2 *)param_1 = 0x101;
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
        uVar8 = (ulong)(byte)*param_1;
      }
      else {
        uVar8 = (ulong)uVar9;
        *(undefined2 *)param_1 = 1;
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
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WARNING: Type propagation algorithm not settling */
/* PluginConfigIOS::get_plugin_main_binary(PluginConfigIOS&, bool) */

PluginConfigIOS * __thiscall
PluginConfigIOS::get_plugin_main_binary(PluginConfigIOS *this,PluginConfigIOS *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
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
  if (param_1[1] == (PluginConfigIOS)0x0) {
    *(undefined8 *)this = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(param_1 + 0x18));
    }
  }
  else {
    String::get_base_dir();
    String::get_basename();
    String::get_file();
    pcVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    String::get_extension();
    local_58 = ".";
    local_60 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    local_50 = 5;
    local_70 = 0;
    local_58 = "debug";
    if (!param_2) {
      local_50 = 7;
      local_58 = "release";
    }
    String::parse_latin1((StrRange *)&local_70);
    local_58 = ".";
    local_80 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_80);
    String::operator+((String *)&local_78,(String *)&local_98);
    String::operator+((String *)&local_68,(String *)&local_78);
    String::operator+((String *)&local_58,(String *)&local_68);
    String::operator+((String *)&local_88,(String *)&local_58);
    pcVar4 = local_58;
    lVar2 = local_68;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar2 = local_68;
      }
    }
    lVar3 = local_78;
    local_68 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar3 = local_78;
      }
    }
    lVar2 = local_80;
    local_78 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_80;
      }
    }
    local_80 = lVar2;
    lVar3 = local_70;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar3 = local_70;
      }
    }
    local_70 = lVar3;
    lVar2 = local_60;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_60;
      }
    }
    local_60 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    String::path_join(this);
    lVar3 = local_88;
    lVar2 = local_90;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_90;
      }
    }
    lVar3 = local_98;
    local_90 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar3 = local_98;
      }
    }
    local_98 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_a0 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* PluginConfigIOS::get_plugin_modification_time(PluginConfigIOS const&, String const&) */

ulong PluginConfigIOS::get_plugin_modification_time(PluginConfigIOS *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
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
  uVar5 = FileAccess::get_modified_time((String *)param_2);
  if (param_1[1] == (PluginConfigIOS)0x0) {
    uVar6 = FileAccess::get_modified_time((String *)(param_1 + 0x18));
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
  }
  else {
    String::get_base_dir();
    String::get_basename();
    String::get_file();
    pcVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    String::get_extension();
    local_58 = ".release.";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    String::operator+((String *)&local_60,(String *)&local_88);
    String::operator+((String *)&local_58,(String *)&local_60);
    String::path_join((String *)&local_78);
    pcVar4 = local_58;
    lVar3 = local_60;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar3 = local_60;
      }
    }
    lVar2 = local_68;
    local_60 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_68;
      }
    }
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_68 = 0;
    local_58 = ".debug.";
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    String::operator+((String *)&local_60,(String *)&local_88);
    String::operator+((String *)&local_58,(String *)&local_60);
    String::path_join((String *)&local_70);
    pcVar4 = local_58;
    lVar3 = local_60;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar3 = local_60;
      }
    }
    lVar2 = local_68;
    local_60 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_68;
      }
    }
    local_68 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    uVar6 = FileAccess::get_modified_time((String *)&local_78);
    uVar7 = FileAccess::get_modified_time((String *)&local_70);
    lVar3 = local_70;
    if (uVar6 < uVar7) {
      uVar6 = uVar7;
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    lVar2 = local_78;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_78;
      }
    }
    lVar3 = local_80;
    local_78 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar3 = local_80;
      }
    }
    lVar2 = local_88;
    local_80 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_88;
      }
    }
    local_88 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_90 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] [clone .constprop.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* PluginConfigIOS::resolve_system_dependencies(Vector<String>) */

PluginConfigIOS * __thiscall
PluginConfigIOS::resolve_system_dependencies(PluginConfigIOS *this,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_50;
  long local_48;
  long local_40;
  
  lVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(param_2 + 8);
joined_r0x0010159e:
  do {
    if ((lVar3 == 0) || (*(long *)(lVar3 + -8) <= lVar5)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_48 = 0;
    plVar2 = (long *)(lVar3 + lVar5 * 8);
    lVar3 = *plVar2;
    plVar1 = (long *)(lVar3 + -0x10);
    if (lVar3 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_0010161e;
        LOCK();
        lVar4 = *plVar1;
        bVar6 = lVar3 == lVar4;
        if (bVar6) {
          *plVar1 = lVar3 + 1;
          lVar4 = lVar3;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar4 != -1) {
        local_48 = *plVar2;
      }
    }
LAB_0010161e:
    resolve_system_dependency_path((PluginConfigIOS *)&local_50);
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
    if (local_50 == 0) {
LAB_001015c9:
      lVar3 = *(long *)(param_2 + 8);
      lVar5 = lVar5 + 1;
      goto joined_r0x0010159e;
    }
    if (*(uint *)(local_50 + -8) < 2) {
LAB_001015a8:
      lVar3 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      goto LAB_001015c9;
    }
    local_48 = 0;
    plVar1 = (long *)(local_50 + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001016a5;
      LOCK();
      lVar4 = *plVar1;
      bVar6 = lVar3 == lVar4;
      if (bVar6) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar4 != -1) {
      local_48 = local_50;
    }
LAB_001016a5:
    lVar3 = local_48;
    Vector<String>::push_back((Vector<String> *)this);
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
    if (local_50 != 0) goto LAB_001015a8;
    lVar3 = *(long *)(param_2 + 8);
    lVar5 = lVar5 + 1;
  } while( true );
}



/* PluginConfigIOS::resolve_local_dependencies(String, Vector<String>) */

PluginConfigIOS * __thiscall
PluginConfigIOS::resolve_local_dependencies(PluginConfigIOS *this,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar5 = 0;
LAB_001017b2:
    do {
      if (*(long *)(lVar3 + -8) <= lVar5) break;
      local_48 = 0;
      plVar2 = (long *)(lVar3 + lVar5 * 8);
      lVar3 = *plVar2;
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_001017f6;
          LOCK();
          lVar4 = *plVar1;
          bVar6 = lVar3 == lVar4;
          if (bVar6) {
            *plVar1 = lVar3 + 1;
            lVar4 = lVar3;
          }
          UNLOCK();
        } while (!bVar6);
        if (lVar4 != -1) {
          local_48 = *plVar2;
        }
      }
LAB_001017f6:
      local_50 = 0;
      plVar1 = (long *)(*param_2 + -0x10);
      if (*param_2 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_0010182e;
          LOCK();
          lVar4 = *plVar1;
          bVar6 = lVar3 == lVar4;
          if (bVar6) {
            *plVar1 = lVar3 + 1;
            lVar4 = lVar3;
          }
          UNLOCK();
        } while (!bVar6);
        if (lVar4 != -1) {
          local_50 = *param_2;
        }
      }
LAB_0010182e:
      resolve_local_dependency_path((PluginConfigIOS *)&local_58,&local_50,&local_48);
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
      if (local_58 == 0) {
LAB_001017a1:
        lVar3 = *(long *)(param_3 + 8);
        lVar5 = lVar5 + 1;
        if (lVar3 == 0) break;
        goto LAB_001017b2;
      }
      if (*(uint *)(local_58 + -8) < 2) {
LAB_00101780:
        lVar3 = local_58;
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        goto LAB_001017a1;
      }
      local_48 = 0;
      plVar1 = (long *)(local_58 + -0x10);
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_001018e9;
        LOCK();
        lVar4 = *plVar1;
        bVar6 = lVar3 == lVar4;
        if (bVar6) {
          *plVar1 = lVar3 + 1;
          lVar4 = lVar3;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar4 != -1) {
        local_48 = local_58;
      }
LAB_001018e9:
      lVar3 = local_48;
      Vector<String>::push_back((Vector<String> *)this);
      if (lVar3 != 0) {
        LOCK();
        plVar1 = (long *)(lVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      if (local_58 != 0) goto LAB_00101780;
      lVar3 = *(long *)(param_3 + 8);
      lVar5 = lVar5 + 1;
    } while (lVar3 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* PluginConfigIOS::load_plugin_config(Ref<ConfigFile>, String const&) */

PluginConfigIOS * __thiscall
PluginConfigIOS::load_plugin_config(PluginConfigIOS *this,long *param_2,String *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  PluginConfigIOS PVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  int *piVar13;
  String *pSVar14;
  undefined8 uVar15;
  long lVar16;
  PluginConfigIOS *pPVar17;
  long lVar18;
  size_t sVar19;
  long in_FS_OFFSET;
  bool bVar20;
  CowData<String> *local_128;
  long local_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  CowData *local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pPVar17 = this;
  for (lVar16 = 0x19; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined8 *)pPVar17 = 0;
    pPVar17 = pPVar17 + 8;
  }
  *(undefined4 *)(this + 0xc0) = 2;
  if (*param_2 != 0) {
    ConfigFile::clear();
    iVar10 = ConfigFile::load((String *)*param_2);
    if (iVar10 == 0) {
      String::get_base_dir();
      pSVar14 = (String *)*param_2;
      local_b8 = 0;
      Variant::Variant((Variant *)local_78,(String *)&local_b8);
      local_88 = CONFIG_NAME_KEY;
      local_80 = 0;
      local_98 = 0;
      if (CONFIG_NAME_KEY != (undefined *)0x0) {
        local_80 = strlen(CONFIG_NAME_KEY);
      }
      String::parse_latin1((StrRange *)&local_98);
      puVar3 = CONFIG_SECTION;
      sVar12 = 0;
      local_a8 = 0;
      if (CONFIG_SECTION != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_a8);
      ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_88);
      pcVar6 = local_88;
      puVar3 = *(undefined **)(this + 0x10);
      if (puVar3 == local_88) {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
      }
      else {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar16 = *(long *)(this + 0x10);
            *(undefined8 *)(this + 0x10) = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        *(char **)(this + 0x10) = local_88;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      pSVar14 = (String *)*param_2;
      Variant::Variant((Variant *)local_78,false);
      puVar3 = CONFIG_USE_SWIFT_KEY;
      sVar12 = 0;
      local_98 = 0;
      if (CONFIG_USE_SWIFT_KEY != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_USE_SWIFT_KEY);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_98);
      puVar3 = CONFIG_SECTION;
      sVar12 = 0;
      local_a8 = 0;
      if (CONFIG_SECTION != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_a8);
      ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
      PVar8 = (PluginConfigIOS)Variant::operator_cast_to_bool((Variant *)local_58);
      this[0x20] = PVar8;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_b8 = 0;
      pSVar14 = (String *)*param_2;
      Variant::Variant((Variant *)local_78,(String *)&local_b8);
      puVar3 = CONFIG_INITIALIZE_KEY;
      sVar12 = 0;
      local_98 = 0;
      if (CONFIG_INITIALIZE_KEY != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_INITIALIZE_KEY);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_98);
      puVar3 = CONFIG_SECTION;
      sVar12 = 0;
      local_a8 = 0;
      if (CONFIG_SECTION != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_a8);
      ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_88);
      pcVar6 = local_88;
      puVar3 = *(undefined **)(this + 0x28);
      if (puVar3 == local_88) {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
      }
      else {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar16 = *(long *)(this + 0x28);
            *(undefined8 *)(this + 0x28) = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        *(char **)(this + 0x28) = local_88;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      local_b8 = 0;
      pSVar14 = (String *)*param_2;
      Variant::Variant((Variant *)local_78,(String *)&local_b8);
      puVar3 = CONFIG_DEINITIALIZE_KEY;
      sVar12 = 0;
      local_98 = 0;
      if (CONFIG_DEINITIALIZE_KEY != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_DEINITIALIZE_KEY);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_98);
      puVar3 = CONFIG_SECTION;
      sVar12 = 0;
      local_a8 = 0;
      if (CONFIG_SECTION != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_a8);
      ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_88);
      pcVar6 = local_88;
      puVar3 = *(undefined **)(this + 0x30);
      if (puVar3 == local_88) {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
      }
      else {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar16 = *(long *)(this + 0x30);
            *(undefined8 *)(this + 0x30) = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        *(char **)(this + 0x30) = local_88;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      local_b8 = 0;
      pSVar14 = (String *)*param_2;
      Variant::Variant((Variant *)local_78,(String *)&local_b8);
      puVar3 = CONFIG_BINARY_KEY;
      sVar12 = 0;
      local_98 = 0;
      if (CONFIG_BINARY_KEY != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_BINARY_KEY);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_98);
      puVar3 = CONFIG_SECTION;
      sVar12 = 0;
      local_a8 = 0;
      if (CONFIG_SECTION != (undefined *)0x0) {
        sVar12 = strlen(CONFIG_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_a8);
      ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_f0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      local_98 = 0;
      plVar1 = (long *)(local_f0 + -0x10);
      if (local_f0 != 0) {
        do {
          lVar16 = *plVar1;
          if (lVar16 == 0) goto LAB_001022ed;
          LOCK();
          lVar18 = *plVar1;
          bVar20 = lVar16 == lVar18;
          if (bVar20) {
            *plVar1 = lVar16 + 1;
            lVar18 = lVar16;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar18 != -1) {
          local_98 = local_f0;
        }
      }
LAB_001022ed:
      local_a8 = 0;
      plVar1 = (long *)(local_f8 + -0x10);
      if (local_f8 != 0) {
        do {
          lVar16 = *plVar1;
          if (lVar16 == 0) goto LAB_0010232d;
          LOCK();
          lVar18 = *plVar1;
          bVar20 = lVar16 == lVar18;
          if (bVar20) {
            *plVar1 = lVar16 + 1;
            lVar18 = lVar16;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar18 != -1) {
          local_a8 = local_f8;
        }
      }
LAB_0010232d:
      resolve_local_dependency_path
                ((PluginConfigIOS *)&local_88,(StrRange *)&local_a8,(StrRange *)&local_98);
      pcVar6 = local_88;
      puVar3 = *(undefined **)(this + 0x18);
      if (puVar3 == local_88) {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
      }
      else {
        if (puVar3 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar16 = *(long *)(this + 0x18);
            *(undefined8 *)(this + 0x18) = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        *(char **)(this + 0x18) = local_88;
      }
      lVar16 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      puVar3 = DEPENDENCIES_SECTION;
      pSVar14 = (String *)*param_2;
      sVar12 = 0;
      local_98 = 0;
      if (DEPENDENCIES_SECTION != (undefined *)0x0) {
        sVar12 = strlen(DEPENDENCIES_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_98);
      cVar9 = ConfigFile::has_section(pSVar14);
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (cVar9 != '\0') {
        pSVar14 = (String *)*param_2;
        local_90 = (CowData *)0x0;
        Variant::Variant((Variant *)local_78,(StrRange *)&local_98);
        puVar3 = DEPENDENCIES_LINKED_KEY;
        sVar12 = 0;
        local_a8 = 0;
        if (DEPENDENCIES_LINKED_KEY != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_LINKED_KEY);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_a8);
        puVar3 = DEPENDENCIES_SECTION;
        sVar12 = 0;
        local_b8 = 0;
        if (DEPENDENCIES_SECTION != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_b8);
        ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_b8);
        Variant::operator_cast_to_Vector((Variant *)&local_d8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar16 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        pSVar14 = (String *)*param_2;
        local_90 = (CowData *)0x0;
        Variant::Variant((Variant *)local_78,(StrRange *)&local_98);
        puVar3 = DEPENDENCIES_EMBEDDED_KEY;
        sVar12 = 0;
        local_a8 = 0;
        if (DEPENDENCIES_EMBEDDED_KEY != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_EMBEDDED_KEY);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_a8);
        puVar3 = DEPENDENCIES_SECTION;
        sVar12 = 0;
        local_b8 = 0;
        if (DEPENDENCIES_SECTION != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_b8);
        ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_b8);
        Variant::operator_cast_to_Vector((Variant *)&local_c8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar16 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        pSVar14 = (String *)*param_2;
        local_90 = (CowData *)0x0;
        Variant::Variant((Variant *)local_78,(StrRange *)&local_98);
        puVar3 = DEPENDENCIES_SYSTEM_KEY;
        sVar12 = 0;
        local_a8 = 0;
        if (DEPENDENCIES_SYSTEM_KEY != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SYSTEM_KEY);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_a8);
        puVar3 = DEPENDENCIES_SECTION;
        sVar12 = 0;
        local_e0 = 0;
        if (DEPENDENCIES_SECTION != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e0);
        ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_e0);
        Variant::operator_cast_to_Vector((Variant *)&local_b8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar16 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        pSVar14 = (String *)*param_2;
        local_90 = (CowData *)0x0;
        Variant::Variant((Variant *)local_78,(StrRange *)&local_98);
        puVar3 = DEPENDENCIES_FILES_KEY;
        sVar12 = 0;
        local_e0 = 0;
        if (DEPENDENCIES_FILES_KEY != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_FILES_KEY);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e0);
        puVar3 = DEPENDENCIES_SECTION;
        sVar12 = 0;
        local_e8 = (long *)0x0;
        if (DEPENDENCIES_SECTION != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e8);
        ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_e8);
        Variant::operator_cast_to_Vector((Variant *)&local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        plVar1 = local_e8;
        if (local_e8 != (long *)0x0) {
          LOCK();
          plVar2 = (long *)((long)local_e8 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_e8 = (long *)0x0;
            Memory::free_static((void *)((long)plVar1 + -0x10),false);
          }
        }
        lVar16 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        local_90 = (CowData *)0x0;
        if (local_d0 != 0) {
          CowData<String>::_ref((CowData<String> *)&local_90,(CowData *)&local_d0);
        }
        local_e0 = 0;
        if (local_f8 == 0) {
          resolve_local_dependencies
                    ((PluginConfigIOS *)&local_88,(StrRange *)&local_e0,(StrRange *)&local_98);
          sVar12 = local_80;
          if (local_80 != *(size_t *)(this + 0x40)) {
            CowData<String>::_unref((CowData<String> *)(this + 0x40));
            local_80 = 0;
            *(size_t *)(this + 0x40) = sVar12;
          }
          CowData<String>::_unref((CowData<String> *)&local_80);
        }
        else {
          plVar1 = (long *)(local_f8 + -0x10);
          do {
            lVar16 = *plVar1;
            if (lVar16 == 0) goto LAB_00103a68;
            LOCK();
            lVar18 = *plVar1;
            bVar20 = lVar16 == lVar18;
            if (bVar20) {
              *plVar1 = lVar16 + 1;
              lVar18 = lVar16;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar18 != -1) {
            local_e0 = local_f8;
          }
LAB_00103a68:
          lVar16 = local_e0;
          resolve_local_dependencies
                    ((PluginConfigIOS *)&local_88,(StrRange *)&local_e0,(StrRange *)&local_98);
          sVar12 = local_80;
          if (*(size_t *)(this + 0x40) != local_80) {
            CowData<String>::_unref((CowData<String> *)(this + 0x40));
            local_80 = 0;
            *(size_t *)(this + 0x40) = sVar12;
          }
          CowData<String>::_unref((CowData<String> *)&local_80);
          if (lVar16 != 0) {
            LOCK();
            plVar1 = (long *)(lVar16 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_e0 + -0x10),false);
            }
          }
        }
        local_128 = (CowData<String> *)&local_80;
        CowData<String>::_unref((CowData<String> *)&local_90);
        local_90 = (CowData *)0x0;
        if (local_c0 != 0) {
          CowData<String>::_ref((CowData<String> *)&local_90,(CowData *)&local_c0);
        }
        local_e0 = 0;
        if (local_f8 == 0) {
          resolve_local_dependencies
                    ((PluginConfigIOS *)&local_88,(StrRange *)&local_e0,(StrRange *)&local_98);
          sVar12 = local_80;
          if (*(size_t *)(this + 0x50) != local_80) {
            CowData<String>::_unref((CowData<String> *)(this + 0x50));
            local_80 = 0;
            *(size_t *)(this + 0x50) = sVar12;
          }
          CowData<String>::_unref(local_128);
        }
        else {
          plVar1 = (long *)(local_f8 + -0x10);
          do {
            lVar16 = *plVar1;
            if (lVar16 == 0) goto LAB_00103b6b;
            LOCK();
            lVar18 = *plVar1;
            bVar20 = lVar16 == lVar18;
            if (bVar20) {
              *plVar1 = lVar16 + 1;
              lVar18 = lVar16;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar18 != -1) {
            local_e0 = local_f8;
          }
LAB_00103b6b:
          lVar16 = local_e0;
          resolve_local_dependencies
                    ((PluginConfigIOS *)&local_88,(StrRange *)&local_e0,(StrRange *)&local_98);
          sVar12 = local_80;
          if (*(size_t *)(this + 0x50) != local_80) {
            CowData<String>::_unref((CowData<String> *)(this + 0x50));
            local_80 = 0;
            *(size_t *)(this + 0x50) = sVar12;
          }
          CowData<String>::_unref(local_128);
          if (lVar16 != 0) {
            LOCK();
            plVar1 = (long *)(lVar16 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_e0 + -0x10),false);
            }
          }
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        local_90 = (CowData *)0x0;
        if (local_b0 != 0) {
          CowData<String>::_ref((CowData<String> *)&local_90,(CowData *)&local_b0);
        }
        resolve_system_dependencies((PluginConfigIOS *)&local_88,(StrRange *)&local_98);
        sVar12 = local_80;
        if (*(size_t *)(this + 0x60) != local_80) {
          CowData<String>::_unref((CowData<String> *)(this + 0x60));
          local_80 = 0;
          *(size_t *)(this + 0x60) = sVar12;
        }
        CowData<String>::_unref(local_128);
        CowData<String>::_unref((CowData<String> *)&local_90);
        local_90 = (CowData *)0x0;
        if (local_a0 != 0) {
          CowData<String>::_ref((CowData<String> *)&local_90,(CowData *)&local_a0);
        }
        local_e0 = 0;
        if (local_f8 == 0) {
          resolve_local_dependencies
                    ((PluginConfigIOS *)&local_88,(StrRange *)&local_e0,(StrRange *)&local_98);
          sVar12 = local_80;
          if (*(size_t *)(this + 0x70) != local_80) {
            CowData<String>::_unref((CowData<String> *)(this + 0x70));
            local_80 = 0;
            *(size_t *)(this + 0x70) = sVar12;
          }
          CowData<String>::_unref(local_128);
        }
        else {
          plVar1 = (long *)(local_f8 + -0x10);
          do {
            lVar16 = *plVar1;
            if (lVar16 == 0) goto LAB_00103ce0;
            LOCK();
            lVar18 = *plVar1;
            bVar20 = lVar16 == lVar18;
            if (bVar20) {
              *plVar1 = lVar16 + 1;
              lVar18 = lVar16;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar18 != -1) {
            local_e0 = local_f8;
          }
LAB_00103ce0:
          lVar16 = local_e0;
          resolve_local_dependencies
                    ((PluginConfigIOS *)&local_88,(StrRange *)&local_e0,(StrRange *)&local_98);
          sVar12 = local_80;
          if (*(size_t *)(this + 0x70) != local_80) {
            CowData<String>::_unref((CowData<String> *)(this + 0x70));
            local_80 = 0;
            *(size_t *)(this + 0x70) = sVar12;
          }
          CowData<String>::_unref(local_128);
          if (lVar16 != 0) {
            LOCK();
            plVar1 = (long *)(lVar16 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_e0 + -0x10),false);
            }
          }
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        pSVar14 = (String *)*param_2;
        local_90 = (CowData *)0x0;
        Variant::Variant((Variant *)local_78,(StrRange *)&local_98);
        puVar3 = DEPENDENCIES_CAPABILITIES_KEY;
        sVar12 = 0;
        local_e0 = 0;
        if (DEPENDENCIES_CAPABILITIES_KEY != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_CAPABILITIES_KEY);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e0);
        puVar3 = DEPENDENCIES_SECTION;
        sVar12 = 0;
        local_e8 = (long *)0x0;
        if (DEPENDENCIES_SECTION != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e8);
        ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_e8);
        Variant::operator_cast_to_Vector((Variant *)&local_88);
        if (*(size_t *)(this + 0x80) != local_80) {
          CowData<String>::_unref((CowData<String> *)(this + 0x80));
          sVar12 = local_80;
          local_80 = 0;
          *(size_t *)(this + 0x80) = sVar12;
        }
        CowData<String>::_unref(local_128);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        plVar1 = local_e8;
        if (local_e8 != (long *)0x0) {
          LOCK();
          plVar2 = (long *)((long)local_e8 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_e8 = (long *)0x0;
            Memory::free_static((void *)((long)plVar1 + -0x10),false);
          }
        }
        lVar16 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        pSVar14 = (String *)*param_2;
        local_90 = (CowData *)0x0;
        Variant::Variant((Variant *)local_78,(StrRange *)&local_98);
        puVar3 = DEPENDENCIES_LINKER_FLAGS;
        sVar12 = 0;
        local_e0 = 0;
        if (DEPENDENCIES_LINKER_FLAGS != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_LINKER_FLAGS);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e0);
        puVar3 = DEPENDENCIES_SECTION;
        sVar12 = 0;
        local_e8 = (long *)0x0;
        if (DEPENDENCIES_SECTION != (undefined *)0x0) {
          sVar12 = strlen(DEPENDENCIES_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_e8);
        ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_e8);
        Variant::operator_cast_to_Vector((Variant *)&local_88);
        if (*(size_t *)(this + 0x90) != local_80) {
          CowData<String>::_unref((CowData<String> *)(this + 0x90));
          sVar12 = local_80;
          local_80 = 0;
          *(size_t *)(this + 0x90) = sVar12;
        }
        CowData<String>::_unref(local_128);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        plVar1 = local_e8;
        if (local_e8 != (long *)0x0) {
          LOCK();
          plVar2 = local_e8 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_e8 = (long *)0x0;
            Memory::free_static(plVar1 + -2,false);
          }
        }
        lVar16 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref((CowData<String> *)&local_90);
        CowData<String>::_unref((CowData<String> *)&local_a0);
        CowData<String>::_unref((CowData<String> *)&local_b0);
        CowData<String>::_unref((CowData<String> *)&local_c0);
        CowData<String>::_unref((CowData<String> *)&local_d0);
      }
      puVar3 = PLIST_SECTION;
      pSVar14 = (String *)*param_2;
      sVar12 = 0;
      local_98 = 0;
      if (PLIST_SECTION != (undefined *)0x0) {
        sVar12 = strlen(PLIST_SECTION);
      }
      local_88 = puVar3;
      local_80 = sVar12;
      String::parse_latin1((StrRange *)&local_98);
      cVar9 = ConfigFile::has_section(pSVar14);
      lVar16 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      puVar3 = PLIST_SECTION;
      if (cVar9 != '\0') {
        pSVar14 = (String *)*param_2;
        sVar12 = 0;
        local_e8 = (long *)0x0;
        local_98 = 0;
        if (PLIST_SECTION != (undefined *)0x0) {
          sVar12 = strlen(PLIST_SECTION);
        }
        local_88 = puVar3;
        local_80 = sVar12;
        String::parse_latin1((StrRange *)&local_98);
        ConfigFile::get_section_keys(pSVar14,(List *)&local_98);
        lVar16 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        if ((local_e8 != (long *)0x0) && (lVar16 = *local_e8, lVar16 != 0)) {
          do {
            String::split((char *)&local_98,SUB81(lVar16,0),0x10484b);
            local_e0 = 0;
            local_88 = "";
            local_80 = 0;
            String::parse_latin1((StrRange *)&local_e0);
            if (local_90 == (CowData *)0x0) {
LAB_001025e2:
              if (local_e0 != 0) {
LAB_001025ea:
                LOCK();
                plVar1 = (long *)(local_e0 + -0x10);
                *plVar1 = *plVar1 + -1;
                lVar18 = *plVar1;
                UNLOCK();
                lVar5 = local_e0;
joined_r0x001025f0:
                local_e0 = lVar5;
                if (lVar18 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
              }
            }
            else {
              if (*(long *)(local_90 + -8) == 1) {
                iVar10 = 1;
                if (*(long *)local_90 != local_e0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,local_90);
                }
                goto LAB_001026c6;
              }
              if (*(long *)(local_90 + -8) != 2) goto LAB_001025e2;
              if (local_e0 != *(long *)local_90) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,local_90);
                if (local_90 != (CowData *)0x0) {
                  lVar18 = *(long *)(local_90 + -8);
                  if (lVar18 < 2) goto LAB_00104113;
                  goto LAB_0010291c;
                }
LAB_00104110:
                lVar18 = 0;
LAB_00104113:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,1,lVar18,"p_index","size()","",
                           false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
LAB_0010291c:
              String::to_lower();
              cVar9 = String::operator==((String *)&local_88,"string");
              pcVar6 = local_88;
              if (local_88 != (undefined *)0x0) {
                LOCK();
                plVar1 = (long *)(local_88 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_88 = (undefined *)0x0;
                  Memory::free_static(pcVar6 + -0x10,false);
                }
              }
              if (cVar9 == '\0') {
                if (local_90 == (CowData *)0x0) goto LAB_00104110;
                lVar18 = *(long *)(local_90 + -8);
                if (lVar18 < 2) goto LAB_00104113;
                String::to_lower();
                cVar9 = String::operator==((String *)&local_88,"integer");
                pcVar6 = local_88;
                if (local_88 != (undefined *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_88 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_88 = (undefined *)0x0;
                    Memory::free_static(pcVar6 + -0x10,false);
                  }
                }
                if (cVar9 == '\0') {
                  if (local_90 == (CowData *)0x0) goto LAB_00104110;
                  lVar18 = *(long *)(local_90 + -8);
                  if (lVar18 < 2) goto LAB_00104113;
                  String::to_lower();
                  cVar9 = String::operator==((String *)&local_88,"boolean");
                  pcVar6 = local_88;
                  if (local_88 != (undefined *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_88 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_88 = (undefined *)0x0;
                      Memory::free_static(pcVar6 + -0x10,false);
                    }
                  }
                  if (cVar9 == '\0') {
                    if (local_90 == (CowData *)0x0) goto LAB_00104110;
                    lVar18 = *(long *)(local_90 + -8);
                    if (lVar18 < 2) goto LAB_00104113;
                    String::to_lower();
                    cVar9 = String::operator==((String *)&local_88,"raw");
                    pcVar6 = local_88;
                    if (local_88 != (undefined *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_88 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_88 = (undefined *)0x0;
                        Memory::free_static(pcVar6 + -0x10,false);
                      }
                    }
                    if (cVar9 == '\0') {
                      if (local_90 == (CowData *)0x0) goto LAB_00104110;
                      lVar18 = *(long *)(local_90 + -8);
                      if (lVar18 < 2) goto LAB_00104113;
                      String::to_lower();
                      cVar9 = String::operator==((String *)&local_88,"string_input");
                      pcVar6 = local_88;
                      if (local_88 != (undefined *)0x0) {
                        LOCK();
                        plVar1 = (long *)(local_88 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_88 = (undefined *)0x0;
                          Memory::free_static(pcVar6 + -0x10,false);
                        }
                      }
                      if (cVar9 == '\0') goto LAB_001025e2;
                      iVar10 = 5;
                    }
                    else {
                      iVar10 = 4;
                    }
                  }
                  else {
                    iVar10 = 3;
                  }
                }
                else {
                  iVar10 = 2;
                }
              }
              else {
                iVar10 = 1;
              }
LAB_001026c6:
              if (local_e0 != 0) {
                if (*(uint *)(local_e0 + -8) < 2) goto LAB_001025ea;
                local_d8 = (char *)0x0;
                pSVar14 = (String *)*param_2;
                if ((iVar10 == 4) || (iVar10 == 5)) {
                  local_b8 = 0;
                  Variant::Variant((Variant *)local_78,(String *)&local_b8);
                  puVar3 = PLIST_SECTION;
                  sVar12 = 0;
                  local_a8 = 0;
                  if (PLIST_SECTION != (undefined *)0x0) {
                    sVar12 = strlen(PLIST_SECTION);
                  }
                  local_88 = puVar3;
                  local_80 = sVar12;
                  String::parse_latin1((StrRange *)&local_a8);
                  ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
                  Variant::operator_cast_to_String((Variant *)&local_88);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_b8;
                  if (local_b8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_b8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_b8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  if (local_d8 != local_88) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_88);
                  }
                  pcVar6 = local_88;
                  if (local_88 != (char *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_88 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_88 = (char *)0x0;
                      Memory::free_static(pcVar6 + -0x10,false);
                    }
                  }
                }
                else if (iVar10 == 2) {
                  Variant::Variant((Variant *)local_78,0);
                  puVar3 = PLIST_SECTION;
                  sVar12 = 0;
                  local_a8 = 0;
                  if (PLIST_SECTION != (undefined *)0x0) {
                    sVar12 = strlen(PLIST_SECTION);
                  }
                  local_88 = puVar3;
                  local_80 = sVar12;
                  String::parse_latin1((StrRange *)&local_a8);
                  ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
                  iVar11 = Variant::operator_cast_to_int((Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  Dictionary::Dictionary((Dictionary *)&local_c8);
                  local_88 = "<integer>$value</integer>";
                  local_b8 = 0;
                  local_80 = 0x19;
                  String::parse_latin1((StrRange *)&local_b8);
                  Variant::Variant((Variant *)local_58,iVar11);
                  Variant::Variant((Variant *)local_78,"value");
                  pSVar14 = (String *)Dictionary::operator[]((Variant *)&local_c8);
                  if (pSVar14 != (String *)local_58) {
                    if (Variant::needs_deinit[*(int *)pSVar14] != '\0') {
                      Variant::_clear_internal();
                    }
                    *(undefined4 *)pSVar14 = 0;
                    *(int *)pSVar14 = local_58[0];
                    *(undefined8 *)(pSVar14 + 8) = local_50;
                    *(undefined8 *)(pSVar14 + 0x10) = uStack_48;
                    local_58[0] = 0;
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_a8 = 0;
                  local_88 = "$_";
                  local_80 = 2;
                  String::parse_latin1((StrRange *)&local_a8);
                  Variant::Variant((Variant *)local_58,(Dictionary *)&local_c8);
                  String::format((Variant *)&local_88,(String *)&local_b8);
                  pcVar7 = local_88;
                  pcVar6 = local_d8;
                  if (local_d8 == local_88) {
                    if (local_d8 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_d8 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_88 = (char *)0x0;
                        Memory::free_static(pcVar7 + -0x10,false);
                      }
                    }
                  }
                  else {
                    if (local_d8 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_d8 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_d8 = (char *)0x0;
                        Memory::free_static(pcVar6 + -0x10,false);
                      }
                    }
                    local_d8 = local_88;
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  lVar18 = local_b8;
                  if (local_b8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_b8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_b8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  Dictionary::~Dictionary((Dictionary *)&local_c8);
                }
                else if (iVar10 == 3) {
                  Variant::Variant((Variant *)local_78,false);
                  puVar3 = PLIST_SECTION;
                  sVar12 = 0;
                  local_a8 = 0;
                  if (PLIST_SECTION != (undefined *)0x0) {
                    sVar12 = strlen(PLIST_SECTION);
                  }
                  local_88 = puVar3;
                  local_80 = sVar12;
                  String::parse_latin1((StrRange *)&local_a8);
                  ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
                  bVar20 = Variant::operator_cast_to_bool((Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (bVar20) {
                    local_80 = 7;
                    local_88 = "<true/>";
                    String::parse_latin1((StrRange *)&local_d8);
                  }
                  else {
                    local_80 = 8;
                    local_88 = "<false/>";
                    String::parse_latin1((StrRange *)&local_d8);
                  }
                }
                else {
                  local_b8 = 0;
                  Variant::Variant((Variant *)local_78,(String *)&local_b8);
                  puVar3 = PLIST_SECTION;
                  sVar12 = 0;
                  local_a8 = 0;
                  if (PLIST_SECTION != (undefined *)0x0) {
                    sVar12 = strlen(PLIST_SECTION);
                  }
                  local_88 = puVar3;
                  local_80 = sVar12;
                  String::parse_latin1((StrRange *)&local_a8);
                  ConfigFile::get_value((String *)local_58,pSVar14,(Variant *)&local_a8);
                  Variant::operator_cast_to_String((Variant *)&local_c8);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar18 = local_b8;
                  if (local_b8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_b8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_b8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  local_a8 = 0;
                  local_88 = "</string>";
                  local_80 = 9;
                  String::parse_latin1((StrRange *)&local_a8);
                  operator+((char *)&local_b8,(String *)"<string>");
                  String::operator+((String *)&local_88,(String *)&local_b8);
                  pcVar7 = local_88;
                  pcVar6 = local_d8;
                  if (local_d8 == local_88) {
                    if (local_d8 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_d8 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_88 = (char *)0x0;
                        Memory::free_static(pcVar7 + -0x10,false);
                      }
                    }
                  }
                  else {
                    if (local_d8 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_d8 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_d8 = (char *)0x0;
                        Memory::free_static(pcVar6 + -0x10,false);
                      }
                    }
                    local_d8 = local_88;
                  }
                  lVar18 = local_b8;
                  if (local_b8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_b8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_b8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  lVar18 = local_a8;
                  if (local_a8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  lVar18 = local_c8;
                  if (local_c8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_c8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_c8 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                }
                local_88 = (char *)CONCAT44(local_88._4_4_,iVar10);
                local_80 = 0;
                if (local_d8 == (char *)0x0) {
                  piVar13 = (int *)HashMap<String,PluginConfigIOS::PlistItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PluginConfigIOS::PlistItem>>>
                                   ::operator[]((HashMap<String,PluginConfigIOS::PlistItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PluginConfigIOS::PlistItem>>>
                                                 *)(this + 0x98),(StrRange *)&local_e0);
                  sVar12 = *(size_t *)(piVar13 + 2);
                  *piVar13 = iVar10;
                  if (sVar12 != 0) {
LAB_00102ca8:
                    LOCK();
                    plVar1 = (long *)(sVar12 - 0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    sVar19 = local_80;
                    if (*plVar1 == 0) {
                      lVar18 = *(long *)(piVar13 + 2);
                      piVar13[2] = 0;
                      piVar13[3] = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                      sVar19 = local_80;
                    }
                    goto LAB_00102896;
                  }
                }
                else {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d8);
                  sVar19 = local_80;
                  iVar10 = (int)local_88;
                  piVar13 = (int *)HashMap<String,PluginConfigIOS::PlistItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PluginConfigIOS::PlistItem>>>
                                   ::operator[]((HashMap<String,PluginConfigIOS::PlistItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PluginConfigIOS::PlistItem>>>
                                                 *)(this + 0x98),(StrRange *)&local_e0);
                  sVar12 = *(size_t *)(piVar13 + 2);
                  *piVar13 = iVar10;
                  if (sVar12 == sVar19) {
                    if (sVar12 != 0) {
                      LOCK();
                      plVar1 = (long *)(sVar12 - 0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        Memory::free_static((void *)(local_80 - 0x10),false);
                      }
                    }
                  }
                  else {
                    if (sVar12 != 0) goto LAB_00102ca8;
LAB_00102896:
                    *(size_t *)(piVar13 + 2) = sVar19;
                  }
                }
                pcVar6 = local_d8;
                if (local_d8 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_d8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_d8 = (char *)0x0;
                    Memory::free_static(pcVar6 + -0x10,false);
                  }
                }
                if (local_e0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_e0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  lVar18 = *plVar1;
                  UNLOCK();
                  lVar5 = local_e0;
                  goto joined_r0x001025f0;
                }
              }
            }
            CowData<String>::_unref((CowData<String> *)&local_90);
            lVar16 = *(long *)(lVar16 + 8);
          } while (lVar16 != 0);
        }
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_e8);
      }
      cVar9 = validate_plugin(this);
      if (cVar9 != '\0') {
        uVar15 = get_plugin_modification_time(this,param_3);
        *(undefined8 *)(this + 8) = uVar15;
      }
      lVar16 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if (local_f8 != 0) {
        LOCK();
        plVar1 = (long *)(local_f8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_f8 + -0x10),false);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
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
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, PluginConfigIOS::PlistItem, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   PluginConfigIOS::PlistItem> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,PluginConfigIOS::PlistItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PluginConfigIOS::PlistItem>>>
::operator[](HashMap<String,PluginConfigIOS::PlistItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PluginConfigIOS::PlistItem>>>
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
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010529a:
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
LAB_0010516c:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_00105178:
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
                                          (String *)param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                lVar48 = *(long *)local_a0[2];
                *(undefined4 *)(local_a0[1] + 8) = 0;
                if (lVar48 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 2),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_00105030;
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
      goto LAB_00104c28;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00104c28;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00105178;
LAB_00104c4e:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_00105030;
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
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),
                                        (String *)param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_00105030;
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
      if (lVar52 == 0) goto LAB_0010529a;
      goto LAB_0010516c;
    }
    uVar45 = (ulong)uVar55;
    local_70 = 0;
    iVar42 = 0;
LAB_00104c28:
    if ((float)uVar45 * __LC16 < (float)(iVar42 + 1)) goto LAB_00104c4e;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_00105355:
    lVar48 = 0;
    *(undefined4 *)(local_a0[1] + 8) = 0;
    *(undefined8 *)local_a0[2] = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_00104efe;
LAB_00105378:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_58[1] = 0;
    local_58[2] = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_00105355;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined4 *)(local_a0[1] + 8) = 0;
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
    if (puVar40 == (undefined8 *)0x0) goto LAB_00105378;
LAB_00104efe:
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
LAB_00105030:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_001058c0:
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
  if (lVar10 == 0) goto LAB_001058c0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00105799:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00105799;
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
    goto LAB_00105916;
  }
  if (lVar10 == lVar7) {
LAB_0010583f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00105916:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010582a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010583f;
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
LAB_0010582a:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.