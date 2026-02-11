
/* OpenXRFBFoveationExtension::on_instance_destroyed() */

void __thiscall OpenXRFBFoveationExtension::on_instance_destroyed(OpenXRFBFoveationExtension *this)

{
  *(undefined2 *)(this + 0x10) = 0;
  return;
}



/* OpenXRFBFoveationExtension::on_instance_created(XrInstance_T*) */

void OpenXRFBFoveationExtension::on_instance_created(XrInstance_T *param_1)

{
  int iVar1;
  
  if (param_1[0x10] == (XrInstance_T)0x0) {
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrCreateFoveationProfileFB");
  if (-1 < iVar1) {
    iVar1 = OpenXRAPI::get_instance_proc_addr
                      (OpenXRAPI::singleton,(_func_void *)"xrDestroyFoveationProfileFB");
    if (-1 < iVar1) {
      return;
    }
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/openxr_fb_foveation_extension.cpp",0x4e,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  _err_print_error("on_instance_created",
                   "modules/openxr/extensions/openxr_fb_foveation_extension.cpp",0x4d,
                   "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
  return;
}



/* OpenXRFBFoveationExtension::on_main_swapchains_created() */

void OpenXRFBFoveationExtension::on_main_swapchains_created(void)

{
  code *pcVar1;
  long *plVar2;
  CallableCustom *this;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)RenderingServer::get_singleton();
  if (plVar2 == (long *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_profile","modules/openxr/extensions/openxr_fb_foveation_extension.h",
                       0x5a,"Parameter \"rendering_server\" is null.",0,0);
      return;
    }
  }
  else {
    pcVar1 = *(code **)(*plVar2 + 0x12e0);
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC8;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR_hash_001022a0;
    *(code **)(this + 0x28) = _update_profile;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "OpenXRFBFoveationExtension::_update_profile";
    Callable::Callable(aCStack_48,this);
    (*pcVar1)(plVar2,aCStack_48);
    Callable::~Callable(aCStack_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRFBFoveationExtension::set_swapchain_create_info_and_get_next_pointer(void*) */

OpenXRFBFoveationExtension * __thiscall
OpenXRFBFoveationExtension::set_swapchain_create_info_and_get_next_pointer
          (OpenXRFBFoveationExtension *this,void *param_1)

{
  char cVar1;
  
  if (*(long *)(this + 0x38) != 0) {
    cVar1 = OpenXRFBUpdateSwapchainExtension::is_enabled();
    if (((cVar1 != '\0') && (this[0x10] != (OpenXRFBFoveationExtension)0x0)) &&
       (this[0x11] != (OpenXRFBFoveationExtension)0x0)) {
      *(void **)(this + 0x28) = param_1;
      return this + 0x20;
    }
  }
  return (OpenXRFBFoveationExtension *)param_1;
}



/* OpenXRFBFoveationExtension::~OpenXRFBFoveationExtension() */

void __thiscall
OpenXRFBFoveationExtension::~OpenXRFBFoveationExtension(OpenXRFBFoveationExtension *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_get_requested_extensions_00102178;
  singleton = 0;
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* OpenXRFBFoveationExtension::~OpenXRFBFoveationExtension() */

void __thiscall
OpenXRFBFoveationExtension::~OpenXRFBFoveationExtension(OpenXRFBFoveationExtension *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_requested_extensions_00102178;
  singleton = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x50);
      return;
    }
  }
  operator_delete(this,0x50);
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



/* OpenXRFBFoveationExtension::get_singleton() */

undefined8 OpenXRFBFoveationExtension::get_singleton(void)

{
  return singleton;
}



/* OpenXRFBFoveationExtension::OpenXRFBFoveationExtension(String const&) */

void __thiscall
OpenXRFBFoveationExtension::OpenXRFBFoveationExtension
          (OpenXRFBFoveationExtension *this,String *param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR_get_requested_extensions_00102178;
  lVar1 = *(long *)param_1;
  *(undefined2 *)(this + 0x10) = 0;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)param_1);
  }
  uVar4 = OpenXRFBUpdateSwapchainExtension::get_singleton();
  *(undefined8 *)(this + 0x38) = uVar4;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"xr/openxr/foveation_level",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  uVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (uVar3 < 4) {
    *(uint *)(this + 0x14) = uVar3;
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"xr/openxr/foveation_dynamic",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  *(uint *)(this + 0x18) = (uint)bVar2;
  *(undefined4 *)(this + 0x20) = 0x3b9c8751;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRFBFoveationExtension::is_enabled() const */

OpenXRFBFoveationExtension __thiscall
OpenXRFBFoveationExtension::is_enabled(OpenXRFBFoveationExtension *this)

{
  char cVar1;
  
  if (*(long *)(this + 0x38) != 0) {
    cVar1 = OpenXRFBUpdateSwapchainExtension::is_enabled();
    if ((cVar1 != '\0') && (this[0x10] != (OpenXRFBFoveationExtension)0x0)) {
      return this[0x11];
    }
  }
  return (OpenXRFBFoveationExtension)0x0;
}



/* OpenXRFBFoveationExtension::get_foveation_level() const */

undefined4 __thiscall
OpenXRFBFoveationExtension::get_foveation_level(OpenXRFBFoveationExtension *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* OpenXRFBFoveationExtension::set_foveation_level(XrFoveationLevelFB) */

void __thiscall
OpenXRFBFoveationExtension::set_foveation_level(OpenXRFBFoveationExtension *this,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x14) = param_2;
  plVar2 = (long *)RenderingServer::get_singleton();
  if (plVar2 == (long *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_profile","modules/openxr/extensions/openxr_fb_foveation_extension.h",
                       0x5a,"Parameter \"rendering_server\" is null.",0,0);
      return;
    }
  }
  else {
    pcVar1 = *(code **)(*plVar2 + 0x12e0);
    this_00 = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC8;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined ***)this_00 = &PTR_hash_001022a0;
    *(code **)(this_00 + 0x28) = _update_profile;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "OpenXRFBFoveationExtension::_update_profile";
    Callable::Callable(aCStack_48,this_00);
    (*pcVar1)(plVar2,aCStack_48);
    Callable::~Callable(aCStack_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRFBFoveationExtension::get_foveation_dynamic() const */

undefined4 __thiscall
OpenXRFBFoveationExtension::get_foveation_dynamic(OpenXRFBFoveationExtension *this)

{
  return *(undefined4 *)(this + 0x18);
}



/* OpenXRFBFoveationExtension::set_foveation_dynamic(XrFoveationDynamicFB) */

void __thiscall
OpenXRFBFoveationExtension::set_foveation_dynamic
          (OpenXRFBFoveationExtension *this,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x18) = param_2;
  plVar2 = (long *)RenderingServer::get_singleton();
  if (plVar2 == (long *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_profile","modules/openxr/extensions/openxr_fb_foveation_extension.h",
                       0x5a,"Parameter \"rendering_server\" is null.",0,0);
      return;
    }
  }
  else {
    pcVar1 = *(code **)(*plVar2 + 0x12e0);
    this_00 = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC8;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined ***)this_00 = &PTR_hash_001022a0;
    *(code **)(this_00 + 0x28) = _update_profile;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "OpenXRFBFoveationExtension::_update_profile";
    Callable::Callable(aCStack_48,this_00);
    (*pcVar1)(plVar2,aCStack_48);
    Callable::~Callable(aCStack_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRFBFoveationExtension::get_requested_extensions() */

void OpenXRFBFoveationExtension::get_requested_extensions(void)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long in_RSI;
  HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
  *in_RDI;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 0x28) = 2;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x18) = (undefined1  [16])0x0;
  cVar2 = String::operator==((String *)(in_RSI + 8),"vulkan");
  if (cVar2 == '\0') {
    cVar2 = String::operator==((String *)(in_RSI + 8),"opengl3");
    if (cVar2 != '\0') {
      local_50 = 0;
      local_40 = 0xf;
      local_48 = "XR_FB_foveation";
      String::parse_latin1((StrRange *)&local_50);
      plVar3 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                       ::operator[](in_RDI,(String *)&local_50);
      lVar1 = local_50;
      *plVar3 = in_RSI + 0x10;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      local_50 = 0;
      local_48 = "XR_FB_foveation_configuration";
      local_40 = 0x1d;
      String::parse_latin1((StrRange *)&local_50);
      plVar3 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                       ::operator[](in_RDI,(String *)&local_50);
      lVar1 = local_50;
      *plVar3 = in_RSI + 0x11;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRFBFoveationExtension::_update_profile() */

void OpenXRFBFoveationExtension::_update_profile(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98 [2];
  undefined4 *local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  long local_68 [3];
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)RenderingServer::get_singleton();
  if (plVar6 == (long *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x84;
      pcVar8 = "Parameter \"rendering_server\" is null.";
LAB_00100be6:
      _err_print_error("_update_profile",
                       "modules/openxr/extensions/openxr_fb_foveation_extension.cpp",uVar9,pcVar8,0,
                       0);
      return;
    }
    goto LAB_00100d84;
  }
  cVar4 = (**(code **)(*plVar6 + 0x12d8))(plVar6);
  lVar2 = singleton;
  if (cVar4 == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x84;
      pcVar8 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
      goto LAB_00100be6;
    }
    goto LAB_00100d84;
  }
  if (singleton == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x87;
      pcVar8 = "Parameter \"fov_ext\" is null.";
      goto LAB_00100be6;
    }
    goto LAB_00100d84;
  }
  if ((((*(long *)(singleton + 0x38) != 0) &&
       (cVar4 = OpenXRFBUpdateSwapchainExtension::is_enabled(), lVar3 = OpenXRAPI::singleton,
       cVar4 != '\0')) && (*(char *)(lVar2 + 0x10) != '\0')) && (*(char *)(lVar2 + 0x11) != '\0')) {
    if (OpenXRAPI::singleton == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar9 = 0x8e;
        pcVar8 = "Parameter \"openxr_api\" is null.";
        goto LAB_00100be6;
      }
      goto LAB_00100d84;
    }
    lVar7 = OpenXRAPI::get_color_swapchain();
    if (lVar7 == 0) goto LAB_00100b08;
    local_78 = *(undefined4 *)(lVar2 + 0x14);
    local_88[0] = 0x3b9c8b38;
    local_80 = 0;
    local_70 = *(undefined4 *)(lVar2 + 0x18);
    local_74 = 0;
    local_90 = local_88;
    local_98[0] = 0x3b9c8750;
    if (*(code **)(lVar2 + 0x40) == (code *)0x0) {
      iVar5 = -0xc;
    }
    else {
      iVar5 = (**(code **)(lVar2 + 0x40))(*(undefined8 *)(lVar3 + 0xf8),local_98,&local_a8);
      if (-1 < iVar5) {
        local_68[0] = CONCAT44(local_68[0]._4_4_,0x3b9c8752);
        local_50 = local_a8;
        pcVar1 = *(code **)(*(long *)(lVar2 + 0x38) + 0x18);
        if (pcVar1 == (code *)0x0) {
          iVar5 = -0xc;
LAB_00100b30:
          OpenXRAPI::get_error_string(&local_a0,lVar3,iVar5);
          Variant::Variant((Variant *)local_48,"OpenXR: Unable to update the swapchain [");
          print_line<String,char_const*>((Variant *)local_48,&local_a0,&_LC30);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar6 = (long *)(local_a0 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
        }
        else {
          iVar5 = (*pcVar1)(lVar7,local_68);
          if (iVar5 < 0) goto LAB_00100b30;
        }
        if (*(code **)(lVar2 + 0x48) == (code *)0x0) {
          iVar5 = -0xc;
        }
        else {
          iVar5 = (**(code **)(lVar2 + 0x48))(local_a8);
          if (-1 < iVar5) goto LAB_00100b08;
        }
        OpenXRAPI::get_error_string(&local_a0,lVar3,iVar5);
        Variant::Variant((Variant *)local_48,"OpenXR: Unable to destroy the foveation profile [");
        print_line<String,char_const*>((Variant *)local_48,&local_a0,&_LC30);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar2 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar6 = (long *)(local_a0 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        goto LAB_00100b08;
      }
    }
    OpenXRAPI::get_error_string(local_68,lVar3,iVar5);
    Variant::Variant((Variant *)local_48,"OpenXR: Unable to create the foveation profile [");
    print_line<String,char_const*>((Variant *)local_48,local_68,&_LC30);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_68[0];
    if (local_68[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_68[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_68[0] = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
LAB_00100b08:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100d84:
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



/* OpenXRExtensionWrapper::on_register_metadata() */

void OpenXRExtensionWrapper::on_register_metadata(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_before_instance_created() */

void OpenXRExtensionWrapper::on_before_instance_created(void)

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



/* CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void> *this)

{
  return;
}



/* CallableCustomStaticMethodPointer<void>::is_valid() const */

undefined8 CallableCustomStaticMethodPointer<void>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void>::get_object() const */

undefined8 CallableCustomStaticMethodPointer<void>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void>::get_argument_count
          (CallableCustomStaticMethodPointer<void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
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



/* CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CallableCustomStaticMethodPointer<void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void>::call
          (CallableCustomStaticMethodPointer<void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x28);
  if (param_2 == 0) {
    *(undefined4 *)param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00101313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(undefined4 *)param_4 = 3;
  *(undefined4 *)(param_4 + 8) = 0;
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00101b28:
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
        goto LAB_001019ba;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_001019be:
      if (iVar45 != 0) {
LAB_001019c6:
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
                goto LAB_0010186b;
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
      goto LAB_001014a4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001014a4;
    if (iVar45 != 0) goto LAB_001019c6;
LAB_001014ca:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010186b;
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
              goto LAB_0010186b;
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
      if (*(long *)(this + 8) == 0) goto LAB_00101b28;
LAB_001019ba:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001019be;
    }
LAB_001014a4:
    if ((float)uVar39 * __LC12 < (float)(iVar45 + 1)) goto LAB_001014ca;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00101afb:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00101753:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00101760;
LAB_00101995:
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
    if (lVar3 == 0) goto LAB_00101afb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00101753;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00101995;
LAB_00101760:
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
LAB_0010186b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String stringify_variants<char const*>(Variant const&, char const*) */

Variant * stringify_variants<char_const*>(Variant *param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char *in_RDX;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC23;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)param_1,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void print_line<String, char const*>(Variant const&, String, char const*) */

void print_line<String,char_const*>(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101e7e;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_90 = *param_2;
    }
  }
LAB_00101e7e:
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_68 = &_LC23;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  __print_line((String *)&local_88);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


