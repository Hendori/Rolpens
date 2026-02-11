
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FreeDesktopScreenSaver::inhibit() */

void __thiscall FreeDesktopScreenSaver::inhibit(FreeDesktopScreenSaver *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_100;
  long local_f8;
  char *local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined1 local_c8 [32];
  long local_a8 [10];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[4] == (FreeDesktopScreenSaver)0x0) {
    (*_dbus_error_init_dylibloader_wrapper_dbus)(local_c8);
    uVar5 = (*_dbus_bus_get_dylibloader_wrapper_dbus)(0,local_c8);
    iVar4 = (*_dbus_error_is_set_dylibloader_wrapper_dbus)(local_c8);
    if (iVar4 == 0) {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)local_a8,"application/config/name",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_String((Variant *)&local_100);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
        StringName::unref();
      }
      String::utf8();
      local_f0 = "Godot Engine";
      if ((local_100 != 0) && (1 < *(uint *)(local_100 + -8))) {
        local_f0 = (char *)CharString::get_data();
      }
      local_e8 = "Running Godot Engine project";
      uVar6 = (*_dbus_message_new_method_call_dylibloader_wrapper_dbus)
                        ("org.freedesktop.ScreenSaver","/org/freedesktop/ScreenSaver",
                         "org.freedesktop.ScreenSaver","Inhibit");
      (*_dbus_message_append_args_dylibloader_wrapper_dbus)(uVar6,0x73,&local_f0,0x73,&local_e8,0);
      uVar7 = (*_dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus)
                        (uVar5,uVar6,0x32,local_c8);
      (*_dbus_message_unref_dylibloader_wrapper_dbus)(uVar6);
      iVar4 = (*_dbus_error_is_set_dylibloader_wrapper_dbus)(local_c8);
      if (iVar4 == 0) {
        (*_dbus_message_iter_init_dylibloader_wrapper_dbus)(uVar7,(StringName *)local_a8);
        (*_dbus_message_iter_get_basic_dylibloader_wrapper_dbus)((StringName *)local_a8);
        cVar3 = is_print_verbose_enabled();
        if (cVar3 != '\0') {
          uitos((ulong)&local_e0);
          operator+((char *)&local_d8,
                    (String_conflict *)
                    "FreeDesktopScreenSaver: Acquired screensaver inhibition cookie: ");
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_d8);
          stringify_variants((Variant *)&local_d0);
          __print_line((String_conflict *)&local_d0);
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
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar2 = local_d8;
          if (local_d8 != 0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
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
        }
        (*_dbus_message_unref_dylibloader_wrapper_dbus)(uVar7);
        (*_dbus_connection_unref_dylibloader_wrapper_dbus)(uVar5);
        lVar2 = local_f8;
      }
      else {
        (*_dbus_error_free_dylibloader_wrapper_dbus)(local_c8);
        (*_dbus_connection_unref_dylibloader_wrapper_dbus)(uVar5);
        this[4] = (FreeDesktopScreenSaver)0x0;
        lVar2 = local_f8;
      }
      local_f8 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f8 = 0;
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
    }
    else {
      (*_dbus_error_free_dylibloader_wrapper_dbus)(local_c8);
      this[4] = (FreeDesktopScreenSaver)0x1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FreeDesktopScreenSaver::uninhibit() */

void __thiscall FreeDesktopScreenSaver::uninhibit(FreeDesktopScreenSaver *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  undefined1 local_78 [32];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[4] == (FreeDesktopScreenSaver)0x0) {
    (*_dbus_error_init_dylibloader_wrapper_dbus)(local_78);
    uVar5 = (*_dbus_bus_get_dylibloader_wrapper_dbus)(0,local_78);
    iVar4 = (*_dbus_error_is_set_dylibloader_wrapper_dbus)(local_78);
    if (iVar4 == 0) {
      uVar6 = (*_dbus_message_new_method_call_dylibloader_wrapper_dbus)
                        ("org.freedesktop.ScreenSaver","/org/freedesktop/ScreenSaver",
                         "org.freedesktop.ScreenSaver","UnInhibit");
      (*_dbus_message_append_args_dylibloader_wrapper_dbus)(uVar6,0x75,this,0);
      uVar7 = (*_dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus)
                        (uVar5,uVar6,0x32,local_78);
      iVar4 = (*_dbus_error_is_set_dylibloader_wrapper_dbus)(local_78);
      if (iVar4 == 0) {
        cVar3 = is_print_verbose_enabled();
        if (cVar3 != '\0') {
          uitos((ulong)&local_90);
          operator+((char *)&local_88,
                    (String_conflict *)
                    "FreeDesktopScreenSaver: Released screensaver inhibition cookie: ");
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_88);
          stringify_variants((Variant *)&local_80);
          __print_line((String_conflict *)&local_80);
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
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
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
        }
        (*_dbus_message_unref_dylibloader_wrapper_dbus)(uVar6);
        (*_dbus_message_unref_dylibloader_wrapper_dbus)(uVar7);
        (*_dbus_connection_unref_dylibloader_wrapper_dbus)(uVar5);
      }
      else {
        (*_dbus_error_free_dylibloader_wrapper_dbus)(local_78);
        (*_dbus_connection_unref_dylibloader_wrapper_dbus)(uVar5);
        this[4] = (FreeDesktopScreenSaver)0x1;
      }
    }
    else {
      (*_dbus_error_free_dylibloader_wrapper_dbus)(local_78);
      this[4] = (FreeDesktopScreenSaver)0x1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FreeDesktopScreenSaver::FreeDesktopScreenSaver() */

void __thiscall FreeDesktopScreenSaver::FreeDesktopScreenSaver(FreeDesktopScreenSaver *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_84;
  int local_80 [2];
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  this[4] = (FreeDesktopScreenSaver)0x0;
  iVar6 = initialize_dbus(1);
  this[4] = (FreeDesktopScreenSaver)(iVar6 != 0);
  if (iVar6 != 0) goto LAB_00100672;
  local_84 = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  (*_dbus_get_version_dylibloader_wrapper_dbus)(&local_84,local_80,local_80 + 1);
  if (local_84 == 1) {
    if (9 < local_80[0]) goto LAB_00100667;
LAB_0010069f:
    cVar5 = is_print_verbose_enabled();
    if (cVar5 != '\0') {
      cVar5 = '\0';
      goto LAB_001006c2;
    }
  }
  else {
    if (local_84 < 2) goto LAB_0010069f;
LAB_00100667:
    cVar5 = is_print_verbose_enabled();
    if (cVar5 == '\0') goto LAB_00100672;
LAB_001006c2:
    iVar2 = local_80[0];
    iVar6 = local_84;
    local_68 = "ScreenSaver: DBus %d.%d.%d detected.";
    local_70 = 0;
    local_60 = 0x24;
    String::parse_latin1((StrRange *)&local_70);
    vformat<int,int,int>((String_conflict *)&local_78,(int)(StrRange *)&local_70,iVar6,iVar2);
    Variant::Variant((Variant *)local_58,(String_conflict *)&local_78);
    stringify_variants((Variant *)&local_68);
    __print_line((String_conflict *)&local_68);
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
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
    if (cVar5 != '\0') goto LAB_00100672;
  }
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    Variant::Variant((Variant *)local_58,"ScreenSaver:: Unsupported DBus library version!");
    stringify_variants((Variant *)&local_68);
    __print_line((String_conflict *)&local_68);
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  this[4] = (FreeDesktopScreenSaver)0x1;
LAB_00100672:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100bc0) */
/* WARNING: Removing unreachable block (ram,0x00100cf0) */
/* WARNING: Removing unreachable block (ram,0x00100e68) */
/* WARNING: Removing unreachable block (ram,0x00100cfc) */
/* WARNING: Removing unreachable block (ram,0x00100d06) */
/* WARNING: Removing unreachable block (ram,0x00100e4a) */
/* WARNING: Removing unreachable block (ram,0x00100d12) */
/* WARNING: Removing unreachable block (ram,0x00100d1c) */
/* WARNING: Removing unreachable block (ram,0x00100e2c) */
/* WARNING: Removing unreachable block (ram,0x00100d28) */
/* WARNING: Removing unreachable block (ram,0x00100d32) */
/* WARNING: Removing unreachable block (ram,0x00100e0e) */
/* WARNING: Removing unreachable block (ram,0x00100d3e) */
/* WARNING: Removing unreachable block (ram,0x00100d48) */
/* WARNING: Removing unreachable block (ram,0x00100df0) */
/* WARNING: Removing unreachable block (ram,0x00100d54) */
/* WARNING: Removing unreachable block (ram,0x00100d5e) */
/* WARNING: Removing unreachable block (ram,0x00100dd2) */
/* WARNING: Removing unreachable block (ram,0x00100d66) */
/* WARNING: Removing unreachable block (ram,0x00100d70) */
/* WARNING: Removing unreachable block (ram,0x00100db7) */
/* WARNING: Removing unreachable block (ram,0x00100d78) */
/* WARNING: Removing unreachable block (ram,0x00100d8d) */
/* WARNING: Removing unreachable block (ram,0x00100d99) */
/* String vformat<int, int, int>(String const&, int const, int const, int const) */

String_conflict * vformat<int,int,int>(String_conflict *param_1,int param_2,int param_3,int param_4)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  undefined4 in_register_00000034;
  int iVar4;
  int in_R8D;
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
  Variant::Variant(local_78,in_R8D);
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
  String::sprintf((Array *)local_f0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_f0[0];
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


