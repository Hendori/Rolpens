
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



/* OpenXRHTCViveTrackerExtension::on_event_polled(XrEventDataBuffer const&) */

undefined8 __thiscall
OpenXRHTCViveTrackerExtension::on_event_polled
          (OpenXRHTCViveTrackerExtension *this,XrEventDataBuffer *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (*(int *)param_1 == 0x3b9c5c59) {
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_38,"OpenXR EVENT: VIVE tracker connected");
      stringify_variants((Variant *)&local_40);
      __print_line((String *)&local_40);
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
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    uVar4 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHTCViveTrackerExtension::on_register_metadata() */

void OpenXRHTCViveTrackerExtension::on_register_metadata(void)

{
  long *plVar1;
  char *__s;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  String *pSVar12;
  long lVar13;
  size_t sVar14;
  long in_FS_OFFSET;
  char **local_148;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  size_t local_b0;
  char *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  char *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  char *local_48;
  long local_40;
  
  pSVar12 = OpenXRInteractionProfileMetadata::singleton;
  puVar11 = PTR__LC12_00104800;
  puVar10 = PTR__LC11_001047f8;
  puVar9 = PTR__LC10_001047f0;
  puVar8 = PTR__LC8_001047e8;
  puVar7 = PTR__LC7_001047e0;
  puVar6 = PTR__LC6_001047d8;
  puVar5 = PTR__LC5_001047d0;
  puVar4 = PTR__LC4_001047c8;
  puVar3 = PTR__LC3_001047c0;
  puVar2 = PTR__LC2_001047b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (OpenXRInteractionProfileMetadata::singleton == (String *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("on_register_metadata",
                       "modules/openxr/extensions/openxr_htc_vive_tracker_extension.cpp",0x46,
                       "Parameter \"metadata\" is null.",0,0);
      return;
    }
  }
  else {
    local_c0 = 0;
    local_b0 = 0x20;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/left_foot";
    local_c8 = 0;
    local_b0 = 0x26;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Left foot tracker";
    local_d0 = 0;
    local_b0 = 0x11;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/right_foot";
    local_c8 = 0;
    local_b0 = 0x27;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Right foot tracker";
    local_d0 = 0;
    local_b0 = 0x12;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/left_shoulder";
    local_c8 = 0;
    local_b0 = 0x2a;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Left shoulder tracker";
    local_d0 = 0;
    local_b0 = 0x15;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/right_shoulder";
    local_c8 = 0;
    local_b0 = 0x2b;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Right shoulder tracker";
    local_d0 = 0;
    local_b0 = 0x16;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/left_elbow";
    local_c8 = 0;
    local_b0 = 0x27;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Left elbow tracker";
    local_d0 = 0;
    local_b0 = 0x12;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/right_elbow";
    local_c8 = 0;
    local_b0 = 0x28;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Right elbow tracker";
    local_d0 = 0;
    local_b0 = 0x13;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/left_knee";
    local_c8 = 0;
    local_b0 = 0x26;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Left knee tracker";
    local_d0 = 0;
    local_b0 = 0x11;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/right_knee";
    local_c8 = 0;
    local_b0 = 0x27;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Right knee tracker";
    local_d0 = 0;
    local_b0 = 0x12;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_c8 = 0;
    local_b8 = "/user/vive_tracker_htcx/role/waist";
    local_b0 = 0x22;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Waist tracker";
    local_d0 = 0;
    local_b0 = 0xd;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/chest";
    local_c8 = 0;
    local_b0 = 0x22;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Chest tracker";
    local_d0 = 0;
    local_b0 = 0xd;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/camera";
    local_c8 = 0;
    local_b0 = 0x23;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Camera tracker";
    local_d0 = 0;
    local_b0 = 0xe;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "/user/vive_tracker_htcx/role/keyboard";
    local_c8 = 0;
    local_b0 = 0x25;
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Keyboard tracker";
    local_d0 = 0;
    local_b0 = 0x10;
    String::parse_latin1((StrRange *)&local_d0);
    OpenXRInteractionProfileMetadata::register_top_level_path
              (pSVar12,(String *)&local_d0,(String *)&local_c8);
    lVar13 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_e8 = 0;
    local_b8 = "/interaction_profiles/htc/vive_tracker_htcx";
    local_b0 = 0x2b;
    String::parse_latin1((StrRange *)&local_e8);
    local_c0 = 0;
    local_b8 = "XR_HTCX_vive_tracker_interaction";
    local_b0 = 0x20;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "HTC Vive tracker";
    local_c8 = 0;
    local_b0 = 0x10;
    String::parse_latin1((StrRange *)&local_c8);
    OpenXRInteractionProfileMetadata::register_interaction_profile
              (pSVar12,(String *)&local_c8,(String *)&local_e8);
    lVar13 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_148 = &local_a8;
    local_98 = puVar3;
    puStack_90 = puVar4;
    local_a8 = "/user/vive_tracker_htcx/role/left_foot";
    puStack_a0 = puVar2;
    local_78 = puVar7;
    puStack_70 = puVar8;
    local_88 = puVar5;
    puStack_80 = puVar6;
    local_68 = "/user/vive_tracker_htcx/role/waist";
    puStack_60 = puVar9;
    local_58 = puVar10;
    puStack_50 = puVar11;
    do {
      local_e0 = 0;
      __s = *local_148;
      sVar14 = 0;
      if (__s != (char *)0x0) {
        sVar14 = strlen(__s);
      }
      local_b8 = __s;
      local_b0 = sVar14;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "";
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/grip/pose";
      local_d8 = 0;
      local_b0 = 0x10;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Grip pose";
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,3);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/menu/click";
      local_d8 = 0;
      local_b0 = 0x11;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Menu click";
      local_b0 = 10;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trigger/value";
      local_d8 = 0;
      local_b0 = 0x14;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trigger";
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,1);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trigger/click";
      local_d8 = 0;
      local_b0 = 0x14;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trigger click";
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/squeeze/click";
      local_d8 = 0;
      local_b0 = 0x14;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Squeeze click";
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad";
      local_d8 = 0;
      local_b0 = 0xf;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad";
      local_b0 = 8;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,2);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/click";
      local_d8 = 0;
      local_b0 = 0x15;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad click";
      local_b0 = 0xe;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/touch";
      local_d8 = 0;
      local_b0 = 0x15;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad touch";
      local_b0 = 0xe;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "XR_EXT_dpad_binding";
      local_b0 = 0x13;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/dpad_up";
      local_d8 = 0;
      local_b0 = 0x17;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad Dpad Up";
      local_b0 = 0x10;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "XR_EXT_dpad_binding";
      local_b0 = 0x13;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/dpad_down";
      local_d8 = 0;
      local_b0 = 0x19;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad Dpad Down";
      local_b0 = 0x12;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "XR_EXT_dpad_binding";
      local_b0 = 0x13;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/dpad_left";
      local_d8 = 0;
      local_b0 = 0x19;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad Dpad Left";
      local_b0 = 0x12;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "XR_EXT_dpad_binding";
      local_b0 = 0x13;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/dpad_right";
      local_d8 = 0;
      local_b0 = 0x1a;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad Dpad Right";
      local_b0 = 0x13;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "XR_EXT_dpad_binding";
      local_b0 = 0x13;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/input/trackpad/dpad_center";
      local_d8 = 0;
      local_b0 = 0x1b;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Trackpad Dpad Center";
      local_b0 = 0x14;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "/output/haptic";
      local_d8 = 0;
      local_b0 = 0xe;
      String::parse_latin1((StrRange *)&local_d8);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      local_c8 = 0;
      local_b8 = "Haptic output";
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)&local_c8);
      OpenXRInteractionProfileMetadata::register_io_path
                (pSVar12,(StrRange *)&local_e8,(StrRange *)&local_c8,(StrRange *)&local_e0,
                 (StrRange *)&local_d0,(StrRange *)&local_c0,4);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_e8;
      local_148 = local_148 + 1;
    } while (&local_48 != local_148);
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHTCViveTrackerExtension::is_available() */

OpenXRHTCViveTrackerExtension __thiscall
OpenXRHTCViveTrackerExtension::is_available(OpenXRHTCViveTrackerExtension *this)

{
  return this[8];
}



/* OpenXRHTCViveTrackerExtension::get_requested_extensions() */

void OpenXRHTCViveTrackerExtension::get_requested_extensions(void)

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
  local_38 = "XR_HTCX_vive_tracker_interaction";
  local_40 = 0;
  local_30 = 0x20;
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



/* OpenXRHTCViveTrackerExtension::get_suggested_tracker_names() */

OpenXRHTCViveTrackerExtension * __thiscall
OpenXRHTCViveTrackerExtension::get_suggested_tracker_names(OpenXRHTCViveTrackerExtension *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  StrRange *pSVar6;
  undefined8 *puVar7;
  long lVar8;
  StrRange *pSVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte bVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  bVar11 = 0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  String::parse_latin1((StrRange *)&local_a8);
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = 0;
  String::parse_latin1((StrRange *)&local_98);
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = 0;
  String::parse_latin1((StrRange *)&local_88);
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = 0;
  String::parse_latin1((StrRange *)&local_48);
  *(undefined8 *)(this + 8) = 0;
  CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
  puVar2 = (undefined8 *)Memory::alloc_static(0x90,false);
  pSVar6 = (StrRange *)&local_48;
  if (puVar2 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
LAB_0010314b:
    do {
      if (*(long *)pSVar6 != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)pSVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar5 = *(long *)pSVar6;
          *(undefined8 *)pSVar6 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      bVar10 = pSVar6 != (StrRange *)&local_a8;
      pSVar6 = pSVar6 + -8;
    } while (bVar10);
    if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return this;
  }
  puVar4 = puVar2 + 2;
  lVar5 = 0;
  *puVar2 = 1;
  *(undefined8 **)(this + 8) = puVar4;
  puVar2[2] = 0;
  puVar2[0xe] = 0;
  puVar7 = (undefined8 *)((ulong)(puVar2 + 3) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)puVar4 - (int)(undefined8 *)((ulong)(puVar2 + 3) & 0xfffffffffffffff8))
                       + 0x68U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar11 * -2 + 1;
  }
  puVar2[1] = 0xd;
  pSVar9 = (StrRange *)&local_a8;
  do {
    if (puVar4 == (undefined8 *)0x0) {
      lVar8 = 0;
LAB_001031ab:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar8,"p_index","size()","",false,
                 false);
    }
    else {
      lVar8 = puVar4[-1];
      if (lVar8 <= lVar5) goto LAB_001031ab;
      CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar5 * 8);
      if (*(long *)this_00 != *(long *)pSVar9) {
        CowData<char32_t>::_ref(this_00,(CowData *)pSVar9);
      }
    }
    pSVar9 = (StrRange *)((CowData *)pSVar9 + 8);
    lVar5 = lVar5 + 1;
    if (pSVar9 == (StrRange *)local_40) goto LAB_0010314b;
    puVar4 = *(undefined8 **)(this + 8);
  } while( true );
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



/* OpenXRHTCViveTrackerExtension::~OpenXRHTCViveTrackerExtension() */

void __thiscall
OpenXRHTCViveTrackerExtension::~OpenXRHTCViveTrackerExtension(OpenXRHTCViveTrackerExtension *this)

{
  return;
}



/* OpenXRHTCViveTrackerExtension::~OpenXRHTCViveTrackerExtension() */

void __thiscall
OpenXRHTCViveTrackerExtension::~OpenXRHTCViveTrackerExtension(OpenXRHTCViveTrackerExtension *this)

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
LAB_00104228:
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
        goto LAB_001040ba;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_001040be:
      if (iVar45 != 0) {
LAB_001040c6:
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
                goto LAB_00103f6b;
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
      goto LAB_00103ba4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00103ba4;
    if (iVar45 != 0) goto LAB_001040c6;
LAB_00103bca:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103f6b;
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
              goto LAB_00103f6b;
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
      if (*(long *)(this + 8) == 0) goto LAB_00104228;
LAB_001040ba:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001040be;
    }
LAB_00103ba4:
    if ((float)uVar39 * __LC71 < (float)(iVar45 + 1)) goto LAB_00103bca;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_001041fb:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00103e53:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00103e60;
LAB_00104095:
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
    if (lVar3 == 0) goto LAB_001041fb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00103e53;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00104095;
LAB_00103e60:
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
LAB_00103f6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
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



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRHTCViveTrackerExtension::~OpenXRHTCViveTrackerExtension() */

void __thiscall
OpenXRHTCViveTrackerExtension::~OpenXRHTCViveTrackerExtension(OpenXRHTCViveTrackerExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


