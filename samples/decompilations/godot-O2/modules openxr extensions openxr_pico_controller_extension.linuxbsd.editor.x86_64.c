
/* OpenXRPicoControllerExtension::is_available() */

OpenXRPicoControllerExtension __thiscall
OpenXRPicoControllerExtension::is_available(OpenXRPicoControllerExtension *this)

{
  return this[8];
}



/* OpenXRPicoControllerExtension::get_requested_extensions() */

void OpenXRPicoControllerExtension::get_requested_extensions(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
  *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(in_RDI + 0x28) = 2;
  *(undefined1 (*) [16])(in_RDI + 0x18) = (undefined1  [16])0x0;
  local_38 = "XR_BD_controller_interaction";
  local_40 = 0;
  local_30 = 0x1c;
  String::parse_latin1((StrRange *)&local_40);
  plVar2 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                   ::operator[](in_RDI,(String *)&local_40);
  lVar1 = local_40;
  *plVar2 = in_RSI + 8;
  if (local_40 != 0) {
    LOCK();
    plVar2 = (long *)(local_40 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRPicoControllerExtension::on_register_metadata() */

void OpenXRPicoControllerExtension::on_register_metadata(void)

{
  long *plVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  String *pSVar5;
  long lVar6;
  size_t sVar7;
  long in_FS_OFFSET;
  undefined4 uVar10;
  undefined8 uVar8;
  ulong uVar9;
  undefined **local_c8;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  
  pSVar5 = OpenXRInteractionProfileMetadata::singleton;
  puVar4 = PTR__LC10_00104a20;
  puVar3 = PTR__LC9_00104a18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (OpenXRInteractionProfileMetadata::singleton == (String *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("on_register_metadata",
                       "modules/openxr/extensions/openxr_pico_controller_extension.cpp",0x35,
                       "Parameter \"metadata\" is null.",0,0);
      return;
    }
  }
  else {
    local_70 = 0;
    local_60 = 0x34;
    local_68 = "/interaction_profiles/bytedance/pico_neo3_controller";
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/interaction_profiles/pico/neo3_controller";
    local_78 = 0;
    local_60 = 0x2a;
    String::parse_latin1((StrRange *)&local_78);
    OpenXRInteractionProfileMetadata::register_profile_rename(pSVar5,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "/interaction_profiles/bytedance/pico_neo3_controller";
    local_98 = 0;
    local_60 = 0x34;
    String::parse_latin1((StrRange *)&local_98);
    local_68 = "XR_BD_controller_interaction";
    local_70 = 0;
    local_60 = 0x1c;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Pico Neo3 controller";
    local_78 = 0;
    local_60 = 0x14;
    String::parse_latin1((StrRange *)&local_78);
    OpenXRInteractionProfileMetadata::register_interaction_profile
              (pSVar5,(String *)&local_78,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = puVar3;
    puStack_50 = puVar4;
    local_c8 = &local_58;
    do {
      local_90 = 0;
      pcVar2 = *local_c8;
      sVar7 = 0;
      if (pcVar2 != (char *)0x0) {
        sVar7 = strlen(pcVar2);
      }
      local_68 = pcVar2;
      local_60 = sVar7;
      String::parse_latin1((StrRange *)&local_90);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Grip pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange *)&local_78);
      uVar10 = 0;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Aim pose";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange *)&local_78);
      uVar8 = CONCAT44(uVar10,3);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar8);
      uVar10 = (undefined4)((ulong)uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "XR_EXT_palm_pose";
      local_70 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Palm pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = CONCAT44(uVar10,3);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/menu/click";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Menu click";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9 & 0xffffffff00000000);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/system/click";
      local_88 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "System click";
      local_60 = 0xc;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/trigger/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Trigger";
      local_60 = 7;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,1);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/trigger/touch";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Trigger touch";
      local_60 = 0xd;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/squeeze/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Squeeze";
      local_60 = 7;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,1);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = 0;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/click";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick click";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = uVar9 & 0xffffffff00000000;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/touch";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick touch";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = uVar9 & 0xffffffff00000000;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_up";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick Dpad Up";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = uVar9 & 0xffffffff00000000;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_down";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick Dpad Down";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = uVar9 & 0xffffffff00000000;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_left";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick Dpad Left";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = uVar9 & 0xffffffff00000000;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_right";
      local_88 = 0;
      local_60 = 0x1c;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Thumbstick Dpad Right";
      local_78 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = uVar9 & 0xffffffff00000000;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Haptic output";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,CONCAT44(uVar10,4));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_c8 = local_c8 + 1;
    } while (local_c8 != &local_48);
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/x/click";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "X click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = 0;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/x/touch";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "X touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/y/click";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Y click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/y/touch";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Y touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/a/click";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "A click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/a/touch";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "A touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/b/click";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "B click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/b/touch";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "B touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9 & 0xffffffff00000000);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    local_68 = "/interaction_profiles/bytedance/pico4_controller";
    local_98 = 0;
    local_60 = 0x30;
    String::parse_latin1((StrRange *)&local_98);
    local_68 = "XR_BD_controller_interaction";
    local_70 = 0;
    local_60 = 0x1c;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Pico 4 controller";
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    OpenXRInteractionProfileMetadata::register_interaction_profile
              (pSVar5,(String *)&local_78,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = puVar3;
    puStack_50 = puVar4;
    local_c8 = &local_58;
    do {
      local_90 = 0;
      pcVar2 = *local_c8;
      sVar7 = 0;
      if (pcVar2 != (char *)0x0) {
        sVar7 = strlen(pcVar2);
      }
      local_68 = pcVar2;
      local_60 = sVar7;
      String::parse_latin1((StrRange *)&local_90);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Grip pose";
      local_60 = 9;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,3);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Aim pose";
      local_60 = 8;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "XR_EXT_palm_pose";
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Palm pose";
      local_60 = 9;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/system/click";
      local_88 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "System click";
      local_60 = 0xc;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/trigger/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Trigger";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange *)&local_78);
      uVar9 = 0;
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/trigger/touch";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_68 = "Trigger touch";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,uVar9 & 0xffffffff00000000);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/squeeze/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Squeeze";
      local_60 = 7;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick";
      local_60 = 10;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,2);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/click";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick click";
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/touch";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick touch";
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "XR_EXT_dpad_binding";
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_up";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick Dpad Up";
      local_60 = 0x12;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "XR_EXT_dpad_binding";
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_down";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick Dpad Down";
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_left";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick Dpad Left";
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = 0;
      local_68 = "XR_EXT_dpad_binding";
      local_60 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/input/thumbstick/dpad_right";
      local_88 = 0;
      local_60 = 0x1c;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Thumbstick Dpad Right";
      local_60 = 0x15;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,0);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange *)&local_88);
      String::operator+((String *)&local_80,(String *)&local_90);
      local_78 = 0;
      local_68 = "Haptic output";
      local_60 = 0xd;
      String::parse_latin1((StrRange *)&local_78);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar5,(StrRange *)&local_98,(StrRange *)&local_78,(StrRange *)&local_90,
                 (String *)&local_80,(StrRange *)&local_70,4);
      lVar6 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 != &local_48);
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/menu/click";
    local_78 = 0;
    local_60 = 0x20;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Menu click";
    local_88 = 0;
    local_60 = 10;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = 0;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/x/click";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "X click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/x/touch";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "X touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/y/click";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Y click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/left/input/y/touch";
    local_78 = 0;
    local_60 = 0x1d;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/left";
    local_80 = 0;
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Y touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/a/click";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "A click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/a/touch";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "A touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/b/click";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "B click";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    uVar9 = uVar9 & 0xffffffff00000000;
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "/user/hand/right/input/b/touch";
    local_78 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "/user/hand/right";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "B touch";
    local_88 = 0;
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    OpenXRInteractionProfileMetadata::register_io_path
              (pSVar5,(StrRange *)&local_98,(StrRange *)&local_88,(String *)&local_80,
               (StrRange *)&local_78,(StrRange *)&local_70,uVar9 & 0xffffffff00000000);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_session_create_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_session_create_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::get_suggested_tracker_names() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* OpenXRExtensionWrapper::on_before_instance_created() */

void OpenXRExtensionWrapper::on_before_instance_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_instance_created(XrInstance_T*) */

void OpenXRExtensionWrapper::on_instance_created(XrInstance_T *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::on_instance_destroyed() */

void OpenXRExtensionWrapper::on_instance_destroyed(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_session_created(XrSession_T*) */

void OpenXRExtensionWrapper::on_session_created(XrSession_T *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::on_session_destroyed() */

void OpenXRExtensionWrapper::on_session_destroyed(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_process() */

void OpenXRExtensionWrapper::on_process(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_render() */

void OpenXRExtensionWrapper::on_pre_render(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_main_swapchains_created() */

void OpenXRExtensionWrapper::on_main_swapchains_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_pre_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_post_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_idle() */

void OpenXRExtensionWrapper::on_state_idle(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_ready() */

void OpenXRExtensionWrapper::on_state_ready(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_synchronized() */

void OpenXRExtensionWrapper::on_state_synchronized(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_visible() */

void OpenXRExtensionWrapper::on_state_visible(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_focused() */

void OpenXRExtensionWrapper::on_state_focused(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_stopping() */

void OpenXRExtensionWrapper::on_state_stopping(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_loss_pending() */

void OpenXRExtensionWrapper::on_state_loss_pending(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_exiting() */

void OpenXRExtensionWrapper::on_state_exiting(void)

{
  return;
}



/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */

void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer
               (XrCompositionLayerBaseHeader *param_1,Dictionary *param_2,void *param_3)

{
  return;
}



/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */

void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed
               (XrCompositionLayerBaseHeader *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */

void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,Dictionary *param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer const&) */

undefined8 OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer *param_1)

{
  return 0;
}



/* OpenXRPicoControllerExtension::~OpenXRPicoControllerExtension() */

void __thiscall
OpenXRPicoControllerExtension::~OpenXRPicoControllerExtension(OpenXRPicoControllerExtension *this)

{
  return;
}



/* OpenXRPicoControllerExtension::~OpenXRPicoControllerExtension() */

void __thiscall
OpenXRPicoControllerExtension::~OpenXRPicoControllerExtension(OpenXRPicoControllerExtension *this)

{
  operator_delete(this,0x10);
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this)

{
  Dictionary::Dictionary((Dictionary *)this);
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void CowData<char32_t>::_ref(CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *in_RSI;
  bool bVar4;
  
  if (*(long *)param_1 != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)param_1;
      *(undefined8 *)param_1 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)param_1 = 0;
    }
  }
  plVar1 = (long *)(*in_RSI + -0x10);
  if (*in_RSI != 0) {
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
      *(long *)param_1 = *in_RSI;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
::operator[](HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
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
LAB_00104078:
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
        goto LAB_00103f0a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00103f0e:
      if (iVar45 != 0) {
LAB_00103f16:
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
                goto LAB_00103dbb;
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
      goto LAB_001039f4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001039f4;
    if (iVar45 != 0) goto LAB_00103f16;
LAB_00103a1a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103dbb;
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
              goto LAB_00103dbb;
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
      if (*(long *)(this + 8) == 0) goto LAB_00104078;
LAB_00103f0a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00103f0e;
    }
LAB_001039f4:
    if ((float)uVar39 * __LC0 < (float)(iVar45 + 1)) goto LAB_00103a1a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_0010404b:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00103ca3:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00103cb0;
LAB_00103ee5:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData *)local_58);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_0010404b;
    CowData<char32_t>::_ref((CowData *)(pauVar41 + 1));
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00103ca3;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00103ee5;
LAB_00103cb0:
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
LAB_00103dbb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
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
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRPicoControllerExtension::~OpenXRPicoControllerExtension() */

void __thiscall
OpenXRPicoControllerExtension::~OpenXRPicoControllerExtension(OpenXRPicoControllerExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


