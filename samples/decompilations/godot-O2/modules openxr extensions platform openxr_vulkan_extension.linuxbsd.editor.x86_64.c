
/* OpenXRVulkanExtension::set_direct_queue_family_and_index(unsigned int, unsigned int) */

void __thiscall
OpenXRVulkanExtension::set_direct_queue_family_and_index
          (OpenXRVulkanExtension *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x28) = param_1;
  *(uint *)(this + 0x2c) = param_2;
  return;
}



/* OpenXRVulkanExtension::set_session_create_and_get_next_pointer(void*) */

undefined1 * __thiscall
OpenXRVulkanExtension::set_session_create_and_get_next_pointer
          (OpenXRVulkanExtension *this,void *param_1)

{
  graphics_binding_vulkan._0_4_ = 0x3b9b2ba8;
  graphics_binding_vulkan._8_8_ = param_1;
  graphics_binding_vulkan._16_8_ = *(undefined8 *)(this + 0x10);
  graphics_binding_vulkan._40_8_ = *(undefined8 *)(this + 0x28);
  graphics_binding_vulkan._24_8_ = *(undefined8 *)(this + 0x18);
  graphics_binding_vulkan._32_8_ = *(undefined8 *)(this + 0x20);
  return graphics_binding_vulkan;
}



/* OpenXRVulkanExtension::on_instance_created(XrInstance_T*) */

void OpenXRVulkanExtension::on_instance_created(XrInstance_T *param_1)

{
  int iVar1;
  
  if (OpenXRAPI::singleton == (char *)0x0) {
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x32,
                     "Parameter \"OpenXRAPI::get_singleton()\" is null.",0,0);
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrGetVulkanGraphicsRequirements2KHR");
  if (iVar1 < 0) {
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x36,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrCreateVulkanInstanceKHR");
  if (iVar1 < 0) {
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x37,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrGetVulkanGraphicsDevice2KHR");
  if (-1 < iVar1) {
    iVar1 = OpenXRAPI::get_instance_proc_addr
                      (OpenXRAPI::singleton,(_func_void *)"xrCreateVulkanDeviceKHR");
    if (iVar1 < 0) {
      _err_print_error("on_instance_created",
                       "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x39,
                       "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
      return;
    }
    iVar1 = OpenXRAPI::get_instance_proc_addr
                      (OpenXRAPI::singleton,(_func_void *)"xrEnumerateSwapchainImages");
    if (-1 < iVar1) {
      return;
    }
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x3a,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  _err_print_error("on_instance_created",
                   "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x38,
                   "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
  return;
}



/* OpenXRVulkanExtension::get_texture(void*, int) */

undefined8 __thiscall
OpenXRVulkanExtension::get_texture(OpenXRVulkanExtension *this,void *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (void *)0x0) {
    _err_print_error("get_texture","modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",
                     0x188,"Parameter \"data\" is null.",0,0);
    return 0;
  }
  lVar1 = *(long *)((long)param_1 + 0x10);
  lVar2 = (long)param_2;
  if (param_2 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100271;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined8 *)(lVar1 + lVar2 * 8);
    }
    goto LAB_00100271;
  }
  lVar3 = 0;
LAB_00100271:
  _err_print_index_error
            ("get_texture","modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x18a,
             lVar2,lVar3,"p_image_index","data->texture_rids.size()","",false,false);
  return 0;
}



/* OpenXRVulkanExtension::create_projection_fov(XrFovf, double, double, Projection&) */

undefined8
OpenXRVulkanExtension::create_projection_fov
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
          undefined8 *param_6)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  OpenXRUtil::XrMatrix4x4f_CreateProjectionFov
            (param_1,param_2,(float)param_3,(float)param_4,&local_58,1);
  *param_6 = local_58;
  param_6[1] = uStack_50;
  param_6[2] = local_48;
  param_6[3] = uStack_40;
  param_6[4] = local_38;
  param_6[5] = uStack_30;
  param_6[6] = local_28;
  param_6[7] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<long>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<long>::_copy_on_write(CowData<long> *this)

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



/* non-virtual thunk to OpenXRVulkanExtension::set_direct_queue_family_and_index(unsigned int,
   unsigned int) */

void __thiscall
OpenXRVulkanExtension::set_direct_queue_family_and_index
          (OpenXRVulkanExtension *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x20) = param_1;
  *(uint *)(this + 0x24) = param_2;
  return;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* OpenXRVulkanExtension::get_swapchain_format_name(long) const */

long OpenXRVulkanExtension::get_swapchain_format_name(long param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 0xb9) {
    if (-1 < in_EDX) {
      *(undefined8 *)param_1 = 0;
      switch(in_EDX) {
      default:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_UNDEFINED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 1:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_R4G4_UNORM_PACK8";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 2:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_R4G4B4A4_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 3:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_B4G4R4A4_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 4:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_R5G6B5_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 5:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_B5G6R5_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 6:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_R5G5B5A1_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 7:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_B5G5R5A1_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 8:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_A1R5G5B5_UNORM_PACK16";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 9:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R8_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 10:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R8_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R8_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xc:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R8_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xd:
        local_30 = 0x11;
        local_38 = "VK_FORMAT_R8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xe:
        local_30 = 0x11;
        local_38 = "VK_FORMAT_R8_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xf:
        local_30 = 0x11;
        local_38 = "VK_FORMAT_R8_SRGB";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x10:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R8G8_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x11:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R8G8_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x12:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_R8G8_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x13:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_R8G8_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x14:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_R8G8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x15:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_R8G8_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x16:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_R8G8_SRGB";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x17:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_R8G8B8_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x18:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_R8G8B8_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x19:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R8G8B8_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x1a:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R8G8B8_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x1b:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R8G8B8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x1c:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R8G8B8_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x1d:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R8G8B8_SRGB";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x1e:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_B8G8R8_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x1f:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_B8G8R8_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x20:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_B8G8R8_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x21:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_B8G8R8_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x22:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_B8G8R8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x23:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_B8G8R8_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x24:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_B8G8R8_SRGB";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x25:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R8G8B8A8_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x26:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R8G8B8A8_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x27:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_R8G8B8A8_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x28:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_R8G8B8A8_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x29:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_R8G8B8A8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x2a:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_R8G8B8A8_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x2b:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_R8G8B8A8_SRGB";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x2c:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_B8G8R8A8_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x2d:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_B8G8R8A8_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x2e:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_B8G8R8A8_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x2f:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_B8G8R8A8_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x30:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_B8G8R8A8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x31:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_B8G8R8A8_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x32:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_B8G8R8A8_SRGB";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x33:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_A8B8G8R8_UNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x34:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_A8B8G8R8_SNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x35:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_A8B8G8R8_USCALED_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x36:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_A8B8G8R8_SSCALED_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x37:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_A8B8G8R8_UINT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x38:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_A8B8G8R8_SINT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x39:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_A8B8G8R8_SRGB_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x3a:
        local_30 = 0x22;
        local_38 = "VK_FORMAT_A2R10G10B10_UNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x3b:
        local_30 = 0x22;
        local_38 = "VK_FORMAT_A2R10G10B10_SNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x3c:
        local_30 = 0x24;
        local_38 = "VK_FORMAT_A2R10G10B10_USCALED_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x3d:
        local_30 = 0x24;
        local_38 = "VK_FORMAT_A2R10G10B10_SSCALED_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x3e:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_A2R10G10B10_UINT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x3f:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_A2R10G10B10_SINT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x40:
        local_30 = 0x22;
        local_38 = "VK_FORMAT_A2B10G10R10_UNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x41:
        local_30 = 0x22;
        local_38 = "VK_FORMAT_A2B10G10R10_SNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x42:
        local_30 = 0x24;
        local_38 = "VK_FORMAT_A2B10G10R10_USCALED_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x43:
        local_30 = 0x24;
        local_38 = "VK_FORMAT_A2B10G10R10_SSCALED_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x44:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_A2B10G10R10_UINT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x45:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_A2B10G10R10_SINT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x46:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_R16_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x47:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_R16_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x48:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R16_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x49:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R16_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x4a:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R16_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x4b:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R16_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x4c:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R16_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x4d:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_R16G16_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x4e:
        local_30 = 0x16;
        local_38 = "VK_FORMAT_R16G16_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x4f:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R16G16_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x50:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R16G16_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x51:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R16G16_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x52:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R16G16_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x53:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_R16G16_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x54:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_R16G16B16_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x55:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_R16G16B16_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x56:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R16G16B16_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x57:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R16G16B16_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x58:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R16G16B16_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x59:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R16G16B16_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x5a:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_R16G16B16_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x5b:
        local_30 = 0x1c;
        local_38 = "VK_FORMAT_R16G16B16A16_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x5c:
        local_30 = 0x1c;
        local_38 = "VK_FORMAT_R16G16B16A16_SNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x5d:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_R16G16B16A16_USCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x5e:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_R16G16B16A16_SSCALED";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x5f:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R16G16B16A16_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x60:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R16G16B16A16_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x61:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_R16G16B16A16_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x62:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R32_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 99:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R32_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 100:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R32_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x65:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R32G32_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x66:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R32G32_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x67:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_R32G32_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x68:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R32G32B32_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x69:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R32G32B32_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x6a:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_R32G32B32_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x6b:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R32G32B32A32_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x6c:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R32G32B32A32_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x6d:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_R32G32B32A32_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x6e:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R64_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x6f:
        local_30 = 0x12;
        local_38 = "VK_FORMAT_R64_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x70:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_R64_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x71:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R64G64_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x72:
        local_30 = 0x15;
        local_38 = "VK_FORMAT_R64G64_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x73:
        local_30 = 0x17;
        local_38 = "VK_FORMAT_R64G64_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x74:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R64G64B64_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x75:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_R64G64B64_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x76:
        local_30 = 0x1a;
        local_38 = "VK_FORMAT_R64G64B64_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x77:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R64G64B64A64_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x78:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_R64G64B64A64_SINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x79:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_R64G64B64A64_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x7a:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_B10G11R11_UFLOAT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x7b:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x7c:
        local_30 = 0x13;
        local_38 = "VK_FORMAT_D16_UNORM";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x7d:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_X8_D24_UNORM_PACK32";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x7e:
        local_30 = 0x14;
        local_38 = "VK_FORMAT_D32_SFLOAT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x7f:
        local_30 = 0x11;
        local_38 = "VK_FORMAT_S8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x80:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_D16_UNORM_S8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x81:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_D24_UNORM_S8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x82:
        local_30 = 0x1c;
        local_38 = "VK_FORMAT_D32_SFLOAT_S8_UINT";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x83:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_BC1_RGB_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x84:
        local_30 = 0x1c;
        local_38 = "VK_FORMAT_BC1_RGB_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x85:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_BC1_RGBA_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x86:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_BC1_RGBA_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x87:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC2_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x88:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_BC2_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x89:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC3_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x8a:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_BC3_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x8b:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC4_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x8c:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC4_SNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x8d:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC5_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x8e:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC5_SNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x8f:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_BC6H_UFLOAT_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x90:
        local_30 = 0x1b;
        local_38 = "VK_FORMAT_BC6H_SFLOAT_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x91:
        local_30 = 0x19;
        local_38 = "VK_FORMAT_BC7_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x92:
        local_30 = 0x18;
        local_38 = "VK_FORMAT_BC7_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x93:
        local_30 = 0x21;
        local_38 = "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x94:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x95:
        local_30 = 0x23;
        local_38 = "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x96:
        local_30 = 0x22;
        local_38 = "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x97:
        local_30 = 0x23;
        local_38 = "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x98:
        local_30 = 0x22;
        local_38 = "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x99:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_EAC_R11_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x9a:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_EAC_R11_SNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x9b:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_EAC_R11G11_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x9c:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_EAC_R11G11_SNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x9d:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_4x4_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x9e:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_4x4_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0x9f:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_5x4_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa0:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_5x4_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa1:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_5x5_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa2:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_5x5_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa3:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_6x5_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa4:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_6x5_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa5:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_6x6_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa6:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_6x6_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa7:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_8x5_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa8:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_8x5_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xa9:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_8x6_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xaa:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_8x6_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xab:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_8x8_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xac:
        local_30 = 0x1d;
        local_38 = "VK_FORMAT_ASTC_8x8_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xad:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_ASTC_10x5_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xae:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_10x5_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xaf:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_ASTC_10x6_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb0:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_10x6_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb1:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_ASTC_10x8_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb2:
        local_30 = 0x1e;
        local_38 = "VK_FORMAT_ASTC_10x8_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb3:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_ASTC_10x10_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb4:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_ASTC_10x10_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb5:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_ASTC_12x10_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb6:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_ASTC_12x10_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb7:
        local_30 = 0x20;
        local_38 = "VK_FORMAT_ASTC_12x12_UNORM_BLOCK";
        String::parse_latin1((StrRange *)param_1);
        break;
      case 0xb8:
        local_30 = 0x1f;
        local_38 = "VK_FORMAT_ASTC_12x12_SRGB_BLOCK";
        String::parse_latin1((StrRange *)param_1);
      }
      goto LAB_001006c8;
    }
  }
  else if (in_EDX < 0x3b9d2b82) {
    if (0x3b9d2b5f < in_EDX) {
      if (in_EDX + 0xc462d49fU < 0x21) {
        *(undefined8 *)param_1 = 0;
        switch(in_EDX) {
        case 0x3b9d2b61:
          local_30 = 0x1c;
          local_38 = "VK_FORMAT_B8G8R8G8_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b62:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b63:
          local_30 = 0x22;
          local_38 = "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b64:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b65:
          local_30 = 0x22;
          local_38 = "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b66:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b67:
          local_30 = 0x1c;
          local_38 = "VK_FORMAT_R10X6_UNORM_PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b68:
          local_30 = 0x22;
          local_38 = "VK_FORMAT_R10X6G10X6_UNORM_2PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b69:
          local_30 = 0x2c;
          local_38 = "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b6a:
          local_30 = 0x30;
          local_38 = "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b6b:
          local_30 = 0x30;
          local_38 = "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b6c:
          local_30 = 0x34;
          local_38 = "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b6d:
          local_30 = 0x33;
          local_38 = "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b6e:
          local_30 = 0x34;
          local_38 = "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b6f:
          local_30 = 0x33;
          local_38 = "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b70:
          local_30 = 0x34;
          local_38 = "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b71:
          local_30 = 0x1c;
          local_38 = "VK_FORMAT_R12X4_UNORM_PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b72:
          local_30 = 0x22;
          local_38 = "VK_FORMAT_R12X4G12X4_UNORM_2PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b73:
          local_30 = 0x2c;
          local_38 = "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b74:
          local_30 = 0x30;
          local_38 = "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b75:
          local_30 = 0x30;
          local_38 = "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b76:
          local_30 = 0x34;
          local_38 = "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b77:
          local_30 = 0x33;
          local_38 = "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b78:
          local_30 = 0x34;
          local_38 = "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b79:
          local_30 = 0x33;
          local_38 = "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b7a:
          local_30 = 0x34;
          local_38 = "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b7b:
          local_30 = 0x20;
          local_38 = "VK_FORMAT_G16B16G16R16_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b7c:
          local_30 = 0x20;
          local_38 = "VK_FORMAT_B16G16R16G16_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b7d:
          local_30 = 0x26;
          local_38 = "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b7e:
          local_30 = 0x25;
          local_38 = "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b7f:
          local_30 = 0x26;
          local_38 = "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b80:
          local_30 = 0x25;
          local_38 = "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9d2b81:
          local_30 = 0x26;
          local_38 = "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM";
          String::parse_latin1((StrRange *)param_1);
        }
      }
      else {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_G8B8G8R8_422_UNORM";
        local_30 = 0x1c;
        String::parse_latin1((StrRange *)param_1);
      }
      goto LAB_001006c8;
    }
    if (in_EDX < 0x3b9b9cf8) {
      if (0x3b9b9cef < in_EDX) {
        if (in_EDX + 0xc464630fU < 7) {
          *(undefined8 *)param_1 = 0;
          switch(in_EDX) {
          case 0x3b9b9cf1:
            local_30 = 0x25;
            local_38 = "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
            break;
          case 0x3b9b9cf2:
            local_30 = 0x25;
            local_38 = "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
            break;
          case 0x3b9b9cf3:
            local_30 = 0x25;
            local_38 = "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
            break;
          case 0x3b9b9cf4:
            local_30 = 0x24;
            local_38 = "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
            break;
          case 0x3b9b9cf5:
            local_30 = 0x24;
            local_38 = "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
            break;
          case 0x3b9b9cf6:
            local_30 = 0x24;
            local_38 = "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
            break;
          case 0x3b9b9cf7:
            local_30 = 0x24;
            local_38 = "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG";
            String::parse_latin1((StrRange *)param_1);
          }
        }
        else {
          *(undefined8 *)param_1 = 0;
          local_38 = "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG";
          local_30 = 0x25;
          String::parse_latin1((StrRange *)param_1);
        }
        goto LAB_001006c8;
      }
    }
    else if (in_EDX + 0xc4643430U < 0xe) {
      if (in_EDX + 0xc464342fU < 0xd) {
        *(undefined8 *)param_1 = 0;
        switch(in_EDX) {
        case 0x3b9bcbd1:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd2:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd3:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd4:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd5:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd6:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd7:
          local_30 = 0x23;
          local_38 = "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd8:
          local_30 = 0x24;
          local_38 = "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbd9:
          local_30 = 0x24;
          local_38 = "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbda:
          local_30 = 0x24;
          local_38 = "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbdb:
          local_30 = 0x25;
          local_38 = "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbdc:
          local_30 = 0x25;
          local_38 = "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
          break;
        case 0x3b9bcbdd:
          local_30 = 0x25;
          local_38 = "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT";
          String::parse_latin1((StrRange *)param_1);
        }
      }
      else {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT";
        local_30 = 0x23;
        String::parse_latin1((StrRange *)param_1);
      }
      goto LAB_001006c8;
    }
  }
  else {
    if (in_EDX == 0x3b9fd313) {
      *(undefined8 *)param_1 = 0;
      local_38 = "VK_FORMAT_G16_B16R16_2PLANE_444_UNORM_EXT";
      local_30 = 0x29;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_001006c8;
    }
    if (in_EDX < 0x3b9fd314) {
      if (in_EDX == 0x3b9fd311) {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT";
        local_30 = 0x37;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006c8;
      }
      if (in_EDX == 0x3b9fd312) {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT";
        local_30 = 0x37;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006c8;
      }
      if (in_EDX == 0x3b9fd310) {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_G8_B8R8_2PLANE_444_UNORM_EXT";
        local_30 = 0x26;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006c8;
      }
    }
    else {
      if (in_EDX == 0x3b9ffa21) {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_A4B4G4R4_UNORM_PACK16_EXT";
        local_30 = 0x23;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006c8;
      }
      if (in_EDX == 0x7fffffff) {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_MAX_ENUM";
        local_30 = 0x12;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006c8;
      }
      if (in_EDX == 0x3b9ffa20) {
        *(undefined8 *)param_1 = 0;
        local_38 = "VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT";
        local_30 = 0x23;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006c8;
      }
    }
  }
  String::num_int64((long)&local_40,in_EDX,true);
  local_38 = "Swapchain format ";
  local_48 = 0;
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_48);
  String::operator+((String *)param_1,(String *)&local_48);
  lVar2 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
LAB_001006c8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRVulkanExtension::get_requested_extensions() */

OpenXRVulkanExtension * __thiscall
OpenXRVulkanExtension::get_requested_extensions(OpenXRVulkanExtension *this)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = 2;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  local_38 = "XR_KHR_vulkan_enable2";
  local_40 = 0;
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  puVar3 = (undefined8 *)
           HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
           ::operator[]((HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                         *)this,(String *)&local_40);
  lVar2 = local_40;
  *puVar3 = 0;
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRVulkanExtension::cleanup_swapchain_graphics_data(void**) */

void __thiscall
OpenXRVulkanExtension::cleanup_swapchain_graphics_data(OpenXRVulkanExtension *this,void **param_1)

{
  CowData<RID> *this_00;
  long *plVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 == 0) {
    uVar5 = 0x196;
    pcVar4 = "Parameter \"rendering_server\" is null.";
  }
  else {
    lVar3 = RenderingServer::get_rendering_device();
    if (lVar3 != 0) {
      this_00 = (CowData<RID> *)((long)pvVar2 + 0x10);
      CowData<RID>::_copy_on_write(this_00);
      lVar6 = *(long *)((long)pvVar2 + 0x10);
      CowData<RID>::_copy_on_write(this_00);
      lVar7 = *(long *)((long)pvVar2 + 0x10);
      if (lVar7 != 0) {
        lVar7 = lVar7 + *(long *)(lVar7 + -8) * 8;
      }
      for (; lVar6 != lVar7; lVar6 = lVar6 + 8) {
        RenderingDevice::free(lVar3);
      }
      CowData<RID>::resize<false>(this_00,0);
      if (*(long *)((long)pvVar2 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x10);
          *(undefined8 *)((long)pvVar2 + 0x10) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *param_1 = (void *)0x0;
      return;
    }
    uVar5 = 0x198;
    pcVar4 = "Parameter \"rendering_device\" is null.";
  }
  _err_print_error("cleanup_swapchain_graphics_data",
                   "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",uVar5,pcVar4,0,0
                  );
  return;
}



/* OpenXRVulkanExtension::check_graphics_api_support(unsigned long) */

undefined8 __thiscall
OpenXRVulkanExtension::check_graphics_api_support(OpenXRVulkanExtension *this,ulong param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (OpenXRAPI::singleton == 0) {
    _err_print_error("check_graphics_api_support",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x3e,
                     "Parameter \"OpenXRAPI::get_singleton()\" is null.",0,0);
    uVar5 = 0;
    goto LAB_00102f73;
  }
  local_68[0] = 0x3b9b2baa;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  if (*(code **)(this + 0x30) == (code *)0x0) {
    iVar4 = -0xc;
LAB_00102fa0:
    OpenXRAPI::get_error_string(&local_70,OpenXRAPI::singleton,iVar4);
    Variant::Variant((Variant *)local_48,"OpenXR: Failed to get vulkan graphics requirements [");
    print_line<String,char_const*>((Variant *)local_48,&local_70,&_LC286);
    cVar2 = Variant::needs_deinit[local_48[0]];
  }
  else {
    iVar4 = (**(code **)(this + 0x30))
                      (*(undefined8 *)(OpenXRAPI::singleton + 0xd0),
                       *(undefined8 *)(OpenXRAPI::singleton + 0xd8),local_68);
    if (iVar4 < 0) goto LAB_00102fa0;
    Variant::Variant((Variant *)local_48,"OpenXR: XrGraphicsRequirementsVulkan2KHR:");
    stringify_variants((Variant *)&local_70);
    __print_line((String *)&local_70);
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
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    OpenXRUtil::make_xr_version_string((ulong)&local_70);
    Variant::Variant((Variant *)local_48," - minApiVersionSupported: ");
    print_line<String>((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
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
    OpenXRUtil::make_xr_version_string((ulong)&local_70);
    Variant::Variant((Variant *)local_48," - maxApiVersionSupported: ");
    print_line<String>((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_70;
    if (local_70 == 0) {
LAB_00102f58:
    }
    else {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00102f58;
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
    if ((ulong)local_58._0_8_ <= param_1) {
      if ((ulong)local_58._8_8_ < param_1) {
        Variant::Variant((Variant *)local_48,
                         "OpenXR: Requested Vulkan version exceeds the maximum version this runtime has been tested on and is known to support."
                        );
        stringify_variants((Variant *)&local_70);
        __print_line((String *)&local_70);
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
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        OpenXRUtil::make_xr_version_string((ulong)&local_70);
        Variant::Variant((Variant *)local_48,"- desired_version ");
        print_line<String>((Variant *)local_48);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
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
        OpenXRUtil::make_xr_version_string((ulong)&local_70);
        Variant::Variant((Variant *)local_48,"- minApiVersionSupported ");
        print_line<String>((Variant *)local_48);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
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
        OpenXRUtil::make_xr_version_string((ulong)&local_70);
        Variant::Variant((Variant *)local_48,"- maxApiVersionSupported ");
        print_line<String>((Variant *)local_48);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
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
      }
      uVar5 = 1;
      goto LAB_00102f73;
    }
    Variant::Variant((Variant *)local_48,
                     "OpenXR: Requested Vulkan version does not meet the minimum version this runtime supports."
                    );
    stringify_variants((Variant *)&local_70);
    __print_line((String *)&local_70);
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
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    OpenXRUtil::make_xr_version_string((ulong)&local_70);
    Variant::Variant((Variant *)local_48,"- desired_version ");
    print_line<String>((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
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
    OpenXRUtil::make_xr_version_string((ulong)&local_70);
    Variant::Variant((Variant *)local_48,"- minApiVersionSupported ");
    print_line<String>((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
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
    OpenXRUtil::make_xr_version_string((ulong)&local_70);
    Variant::Variant((Variant *)local_48,"- maxApiVersionSupported ");
    print_line<String>((Variant *)local_48);
    cVar2 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
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
      uVar5 = 0;
      goto LAB_00102f73;
    }
  }
  uVar5 = 0;
LAB_00102f73:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRVulkanExtension::create_vulkan_instance(VkInstanceCreateInfo const*, VkInstance_T**) */

undefined4 __thiscall
OpenXRVulkanExtension::create_vulkan_instance
          (OpenXRVulkanExtension *this,VkInstanceCreateInfo *param_1,VkInstance_T **param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_94;
  long local_90;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  VkInstanceCreateInfo *pVStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0x2c);
  uVar4 = check_graphics_api_support
                    (this,(ulong)(uVar2 >> 0x16) << 0x30 | (ulong)(uVar2 & 0xfff) |
                          (ulong)(uVar2 >> 0xc & 0x3ff) << 0x20);
  if ((char)uVar4 != '\0') {
    local_54 = 0;
    uStack_70 = 0;
    local_84 = SUB1612((undefined1  [16])0x0,0);
    uStack_58 = 0;
    uStack_78 = (undefined4)*(undefined8 *)(OpenXRAPI::singleton + 0xd8);
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(OpenXRAPI::singleton + 0xd8) >> 0x20);
    local_88 = 0x3b9c2990;
    uStack_68 = (undefined4)_vkGetInstanceProcAddr;
    local_64 = (undefined4)((ulong)_vkGetInstanceProcAddr >> 0x20);
    local_94 = 0;
    pVStack_60 = param_1;
    if (*(code **)(this + 0x38) == (code *)0x0) {
      iVar5 = -0xc;
    }
    else {
      iVar5 = (**(code **)(this + 0x38))
                        (*(undefined8 *)(OpenXRAPI::singleton + 0xd0),&local_88,this + 0x10,
                         &local_94);
      if (-1 < iVar5) {
        if (local_94 == -9) {
          _err_print_error("create_vulkan_instance",
                           "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x83,
                           "Condition \"vk_result == VK_ERROR_INCOMPATIBLE_DRIVER\" is true. Returning: false"
                           ,
                           "Cannot find a compatible Vulkan installable client driver (ICD).\n\nvkCreateInstance Failure"
                           ,0,0);
        }
        else if (local_94 == -7) {
          _err_print_error("create_vulkan_instance",
                           "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x86,
                           "Condition \"vk_result == VK_ERROR_EXTENSION_NOT_PRESENT\" is true. Returning: false"
                           ,
                           "Cannot find a specified extension library.\nMake sure your layers path is set appropriately.\nvkCreateInstance Failure"
                           ,0,0);
        }
        else {
          if (local_94 == 0) {
            *param_2 = *(VkInstance_T **)(this + 0x10);
            goto LAB_001035ce;
          }
          _err_print_error("create_vulkan_instance",
                           "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x8a,
                           "Condition \"vk_result\" is true. Returning: false",
                           "vkCreateInstance failed.\n\nDo you have a compatible Vulkan installable client driver (ICD) installed?\nPlease look at the Getting Started guide for additional information.\nvkCreateInstance Failure"
                           ,0,0);
        }
        goto LAB_00103670;
      }
    }
    OpenXRAPI::get_error_string(&local_90,OpenXRAPI::singleton,iVar5);
    Variant::Variant((Variant *)local_48,"OpenXR: Failed to create vulkan instance [");
    print_line<String,char_const*>((Variant *)local_48,&local_90,&_LC286);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
LAB_00103670:
  uVar4 = 0;
LAB_001035ce:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* non-virtual thunk to OpenXRVulkanExtension::create_vulkan_instance(VkInstanceCreateInfo const*,
   VkInstance_T**) */

void __thiscall
OpenXRVulkanExtension::create_vulkan_instance
          (OpenXRVulkanExtension *this,VkInstanceCreateInfo *param_1,VkInstance_T **param_2)

{
  create_vulkan_instance(this + -8,param_1,param_2);
  return;
}



/* OpenXRVulkanExtension::get_physical_device(VkPhysicalDevice_T**) */

undefined8 __thiscall
OpenXRVulkanExtension::get_physical_device(OpenXRVulkanExtension *this,VkPhysicalDevice_T **param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (OpenXRAPI::singleton == 0) {
    _err_print_error("get_physical_device",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0x96,
                     "Parameter \"OpenXRAPI::get_singleton()\" is null.",0,0);
    uVar4 = 0;
  }
  else {
    local_48 = *(undefined8 *)(OpenXRAPI::singleton + 0xd8);
    local_54 = 0;
    local_4c = 0;
    local_40 = *(undefined8 *)(this + 0x10);
    local_58 = 0x3b9c2993;
    if (*(code **)(this + 0x40) == (code *)0x0) {
      iVar3 = -0xc;
    }
    else {
      iVar3 = (**(code **)(this + 0x40))
                        (*(undefined8 *)(OpenXRAPI::singleton + 0xd0),&local_58,this + 0x18);
      if (-1 < iVar3) {
        *param_1 = *(VkPhysicalDevice_T **)(this + 0x18);
        uVar4 = 1;
        goto LAB_001037f1;
      }
    }
    OpenXRAPI::get_error_string(&local_60,OpenXRAPI::singleton,iVar3);
    Variant::Variant((Variant *)local_38,"OpenXR: Failed to obtain vulkan physical device [");
    print_line<String,char_const*>((Variant *)local_38,&local_60,&_LC286);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
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
    uVar4 = 0;
  }
LAB_001037f1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* non-virtual thunk to OpenXRVulkanExtension::get_physical_device(VkPhysicalDevice_T**) */

void __thiscall
OpenXRVulkanExtension::get_physical_device(OpenXRVulkanExtension *this,VkPhysicalDevice_T **param_1)

{
  get_physical_device(this + -8,param_1);
  return;
}



/* OpenXRVulkanExtension::get_swapchain_image_data(XrSwapchain_T*, long, unsigned int, unsigned int,
   unsigned int, unsigned int, void**) */

undefined8 __thiscall
OpenXRVulkanExtension::get_swapchain_image_data
          (OpenXRVulkanExtension *this,XrSwapchain_T *param_1,long param_2,uint param_3,uint param_4
          ,uint param_5,uint param_6,void **param_7)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 local_8c;
  undefined4 *local_88;
  uint local_6c;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = RenderingServer::get_singleton();
  if (lVar5 == 0) {
    _err_print_error("get_swapchain_image_data",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0xf5,
                     "Parameter \"rendering_server\" is null.",0,0);
  }
  else {
    lVar5 = RenderingServer::get_rendering_device();
    if (lVar5 == 0) {
      _err_print_error("get_swapchain_image_data",
                       "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0xf7,
                       "Parameter \"rendering_device\" is null.",0,0);
    }
    else {
      if (*(code **)(this + 0x50) == (code *)0x0) {
        iVar3 = -0xc;
      }
      else {
        puVar15 = &local_6c;
        iVar3 = (**(code **)(this + 0x50))(param_1,0,puVar15,0);
        if (-1 < iVar3) {
          if (local_6c == 0) {
            local_88 = (undefined4 *)0x0;
            puVar12 = (undefined4 *)0x0;
          }
          else {
            uVar16 = (ulong)local_6c;
            uVar4 = local_6c - 1 | local_6c - 1 >> 1;
            uVar4 = uVar4 | uVar4 >> 2;
            uVar4 = uVar4 | uVar4 >> 4;
            uVar4 = uVar4 | uVar4 >> 8;
            local_88 = (undefined4 *)
                       Memory::realloc_static
                                 ((void *)0x0,(ulong)((uVar4 | uVar4 >> 0x10) + 1) * 0x18,false);
            if (local_88 == (undefined4 *)0x0) {
              _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar12 = local_88 + (uVar16 & 0xffffffff) * 6;
            puVar6 = local_88;
            do {
              *puVar6 = 0x3b9b2ba9;
              puVar7 = puVar6 + 6;
              *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
              puVar6 = puVar7;
            } while (puVar12 != puVar7);
          }
          if (*(code **)(this + 0x50) == (code *)0x0) {
            iVar3 = -0xc;
LAB_00103c98:
            OpenXRAPI::get_error_string(&local_68,OpenXRAPI::singleton,iVar3);
            Variant::Variant((Variant *)local_58,"OpenXR: Failed to get swapchaim images [");
            print_line<String,char_const*>((Variant *)local_58,&local_68,&_LC286);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar5 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
            }
            uVar17 = 0;
          }
          else {
            iVar3 = (**(code **)(this + 0x50))(param_1,local_6c,puVar15,local_88);
            if (iVar3 < 0) goto LAB_00103c98;
            pvVar8 = operator_new(0x18,"");
            *(undefined8 *)((long)pvVar8 + 0x10) = 0;
            *param_7 = pvVar8;
            *(bool *)pvVar8 = 1 < param_6;
            if (param_2 == 0x32) {
              uVar17 = 3;
              uVar16 = 0x2b;
            }
            else if (param_2 < 0x33) {
              uVar17 = 3;
              if (param_2 == 0x2b) {
                uVar16 = 0x24;
              }
              else if (param_2 == 0x30) {
                uVar16 = 0x2f;
              }
              else {
                uVar16 = 0x28;
                if (param_2 != 0x29) {
LAB_00103bd4:
                  Variant::Variant((Variant *)local_58,"OpenXR: Unsupported swapchain format");
                  stringify_variants<long>((Variant *)&local_68,(long)local_58);
                  __print_line((String *)&local_68);
                  lVar11 = local_68;
                  if (local_68 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_68 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_68 = 0;
                      Memory::free_static((void *)(lVar11 + -0x10),false);
                    }
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  uVar17 = 1;
                  uVar16 = 0x2a;
                }
              }
            }
            else {
              uVar17 = 5;
              if (param_2 == 0x81) {
                uVar16 = 0x80;
              }
              else if (param_2 == 0x82) {
                uVar16 = 0x81;
              }
              else {
                uVar16 = 0x7d;
                if (param_2 != 0x7e) goto LAB_00103bd4;
              }
            }
            if (param_5 < 0x21) {
              switch(param_5) {
              case 2:
                local_8c = 1;
                break;
              default:
switchD_00103ae6_caseD_3:
                Variant::Variant((Variant *)local_58,"OpenXR: Unsupported sample count");
                stringify_variants<unsigned_int>((Variant *)&local_68,(uint)(Variant *)local_58);
                __print_line((String *)&local_68);
                lVar11 = local_68;
                if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_68 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_68 = 0;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
              case 1:
                local_8c = 0;
                break;
              case 4:
                local_8c = 2;
                break;
              case 8:
                local_8c = 3;
                break;
              case 0x10:
                local_8c = 4;
                break;
              case 0x20:
                local_8c = 5;
              }
            }
            else {
              local_8c = 6;
              if (param_5 != 0x40) goto switchD_00103ae6_caseD_3;
            }
            local_60 = 0;
            if (puVar12 == local_88) {
              lVar5 = *(long *)((long)pvVar8 + 0x10);
              if (lVar5 != 0) {
LAB_00103ec2:
                LOCK();
                plVar1 = (long *)(lVar5 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = *(long *)((long)pvVar8 + 0x10);
                  *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
                else {
                  *(undefined8 *)((long)pvVar8 + 0x10) = 0;
                }
                goto LAB_00103ed6;
              }
            }
            else {
              lVar11 = 0;
              puVar6 = local_88;
              do {
                uVar9 = RenderingDevice::texture_create_from_extension
                                  (lVar5,(param_6 != 1) * '\x04' + '\x01',uVar16 & 0xffffffff,
                                   local_8c,uVar17,*(undefined8 *)(puVar6 + 4),param_3,param_4,1,
                                   param_6,uVar16,uVar17);
                if (lVar11 == 0) {
                  lVar11 = 1;
                }
                else {
                  lVar11 = *(long *)(lVar11 + -8) + 1;
                }
                iVar3 = CowData<RID>::resize<false>((CowData<RID> *)&local_60,lVar11);
                lVar11 = local_60;
                if (iVar3 == 0) {
                  if (local_60 == 0) {
                    lVar13 = -1;
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *(long *)(local_60 + -8);
                    lVar13 = lVar10 + -1;
                    if (-1 < lVar13) {
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_60);
                      *(undefined8 *)(local_60 + lVar13 * 8) = uVar9;
                      lVar11 = local_60;
                      goto LAB_00103e9f;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar10,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                  lVar11 = local_60;
                }
LAB_00103e9f:
                puVar6 = puVar6 + 6;
              } while (puVar12 != puVar6);
              lVar5 = *(long *)((long)pvVar8 + 0x10);
              if (lVar5 != lVar11) {
                if (lVar5 != 0) goto LAB_00103ec2;
LAB_00103ed6:
                plVar1 = (long *)(local_60 + -0x10);
                if (local_60 == 0) goto LAB_00103f27;
                do {
                  lVar5 = *plVar1;
                  lVar11 = local_60;
                  if (lVar5 == 0) goto LAB_00103f0a;
                  LOCK();
                  lVar10 = *plVar1;
                  bVar14 = lVar5 == lVar10;
                  if (bVar14) {
                    *plVar1 = lVar5 + 1;
                    lVar10 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar14);
                if (lVar10 != -1) {
                  *(long *)((long)pvVar8 + 0x10) = local_60;
                }
              }
LAB_00103f0a:
              if (lVar11 != 0) {
                LOCK();
                plVar1 = (long *)(lVar11 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_60 + -0x10),false);
                }
              }
            }
LAB_00103f27:
            uVar17 = 1;
          }
          if (local_88 != (undefined4 *)0x0) {
            Memory::free_static(local_88,false);
          }
          goto LAB_00103b5a;
        }
      }
      OpenXRAPI::get_error_string(&local_68,OpenXRAPI::singleton,iVar3);
      Variant::Variant((Variant *)local_58,"OpenXR: Failed to get swapchaim image count [");
      print_line<String,char_const*>((Variant *)local_58,&local_68,&_LC286);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar5 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
  }
  uVar17 = 0;
LAB_00103b5a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRVulkanExtension::create_vulkan_device(VkDeviceCreateInfo const*, VkDevice_T**) */

undefined8 __thiscall
OpenXRVulkanExtension::create_vulkan_device
          (OpenXRVulkanExtension *this,VkDeviceCreateInfo *param_1,VkDevice_T **param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_94;
  long local_90;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (OpenXRAPI::singleton == 0) {
    _err_print_error("create_vulkan_device",
                     "modules/openxr/extensions/platform/openxr_vulkan_extension.cpp",0xab,
                     "Parameter \"OpenXRAPI::get_singleton()\" is null.",0,0);
    uVar5 = 0;
  }
  else {
    uStack_70 = 0;
    local_84 = SUB1612((undefined1  [16])0x0,0);
    uStack_78 = (undefined4)*(undefined8 *)(OpenXRAPI::singleton + 0xd8);
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(OpenXRAPI::singleton + 0xd8) >> 0x20);
    uStack_60 = *(undefined8 *)(this + 0x18);
    uStack_68 = (undefined4)_vkGetInstanceProcAddr;
    uStack_64 = (undefined4)((ulong)_vkGetInstanceProcAddr >> 0x20);
    local_88 = 0x3b9c2991;
    local_94 = 0;
    local_58._8_8_ = 0;
    local_58._0_8_ = param_1;
    if (*(code **)(this + 0x48) == (code *)0x0) {
      iVar4 = -0xc;
    }
    else {
      iVar4 = (**(code **)(this + 0x48))
                        (*(undefined8 *)(OpenXRAPI::singleton + 0xd0),&local_88,this + 0x20,
                         &local_94);
      iVar2 = local_94;
      if (-1 < iVar4) {
        if (local_94 != 0) {
          Variant::Variant((Variant *)local_48,
                           "OpenXR: Failed to create vulkan device [vulkan error");
          print_line<VkResult,char_const*>((Variant *)local_48,iVar2,&_LC286);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        *param_2 = *(VkDevice_T **)(this + 0x20);
        uVar5 = 1;
        goto LAB_00104280;
      }
    }
    OpenXRAPI::get_error_string(&local_90,OpenXRAPI::singleton,iVar4);
    Variant::Variant((Variant *)local_48,"OpenXR: Failed to create vulkan device [");
    print_line<String,char_const*>((Variant *)local_48,&local_90,&_LC286);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    uVar5 = 0;
  }
LAB_00104280:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* non-virtual thunk to OpenXRVulkanExtension::create_vulkan_device(VkDeviceCreateInfo const*,
   VkDevice_T**) */

void __thiscall
OpenXRVulkanExtension::create_vulkan_device
          (OpenXRVulkanExtension *this,VkDeviceCreateInfo *param_1,VkDevice_T **param_2)

{
  create_vulkan_device(this + -8,param_1,param_2);
  return;
}



/* Vector<long>::push_back(long) [clone .isra.0] */

void __thiscall Vector<long>::push_back(Vector<long> *this,long param_1)

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
  iVar1 = CowData<long>::resize<false>((CowData<long> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<long>::_copy_on_write((CowData<long> *)(this + 8));
        *(long *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* OpenXRVulkanExtension::get_usable_depth_formats(Vector<long>&) */

void __thiscall
OpenXRVulkanExtension::get_usable_depth_formats(OpenXRVulkanExtension *this,Vector *param_1)

{
  Vector<long>::push_back((Vector<long> *)param_1,0x81);
  Vector<long>::push_back((Vector<long> *)param_1,0x82);
  Vector<long>::push_back((Vector<long> *)param_1,0x7e);
  return;
}



/* OpenXRVulkanExtension::get_usable_swapchain_formats(Vector<long>&) */

void __thiscall
OpenXRVulkanExtension::get_usable_swapchain_formats(OpenXRVulkanExtension *this,Vector *param_1)

{
  Vector<long>::push_back((Vector<long> *)param_1,0x2b);
  Vector<long>::push_back((Vector<long> *)param_1,0x32);
  Vector<long>::push_back((Vector<long> *)param_1,0x29);
  Vector<long>::push_back((Vector<long> *)param_1,0x30);
  return;
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



/* OpenXRVulkanExtension::~OpenXRVulkanExtension() */

void __thiscall OpenXRVulkanExtension::~OpenXRVulkanExtension(OpenXRVulkanExtension *this)

{
  *(undefined ***)this = &PTR_get_requested_extensions_001092a0;
  *(undefined ***)(this + 8) = &PTR__OpenXRVulkanExtension_00109420;
  VulkanHooks::~VulkanHooks((VulkanHooks *)(this + 8));
  return;
}



/* non-virtual thunk to OpenXRVulkanExtension::~OpenXRVulkanExtension() */

void __thiscall OpenXRVulkanExtension::~OpenXRVulkanExtension(OpenXRVulkanExtension *this)

{
  *(undefined ***)(this + -8) = &PTR_get_requested_extensions_001092a0;
  *(undefined ***)this = &PTR__OpenXRVulkanExtension_00109420;
  VulkanHooks::~VulkanHooks((VulkanHooks *)this);
  return;
}



/* OpenXRVulkanExtension::~OpenXRVulkanExtension() */

void __thiscall OpenXRVulkanExtension::~OpenXRVulkanExtension(OpenXRVulkanExtension *this)

{
  *(undefined ***)this = &PTR_get_requested_extensions_001092a0;
  *(undefined ***)(this + 8) = &PTR__OpenXRVulkanExtension_00109420;
  VulkanHooks::~VulkanHooks((VulkanHooks *)(this + 8));
  operator_delete(this,0x58);
  return;
}



/* non-virtual thunk to OpenXRVulkanExtension::~OpenXRVulkanExtension() */

void __thiscall OpenXRVulkanExtension::~OpenXRVulkanExtension(OpenXRVulkanExtension *this)

{
  *(undefined ***)(this + -8) = &PTR_get_requested_extensions_001092a0;
  *(undefined ***)this = &PTR__OpenXRVulkanExtension_00109420;
  VulkanHooks::~VulkanHooks((VulkanHooks *)this);
  operator_delete(this + -8,0x58);
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



/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<long>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00107cf8:
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
        goto LAB_00107b8a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00107b8e:
      if (iVar45 != 0) {
LAB_00107b96:
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
                goto LAB_00107a3b;
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
      goto LAB_00107674;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00107674;
    if (iVar45 != 0) goto LAB_00107b96;
LAB_0010769a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107a3b;
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
              goto LAB_00107a3b;
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
      if (*(long *)(this + 8) == 0) goto LAB_00107cf8;
LAB_00107b8a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00107b8e;
    }
LAB_00107674:
    if ((float)uVar39 * __LC268 < (float)(iVar45 + 1)) goto LAB_0010769a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00107ccb:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00107923:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00107930;
LAB_00107b65:
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
    if (lVar3 == 0) goto LAB_00107ccb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00107923;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00107b65;
LAB_00107930:
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
LAB_00107a3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String stringify_variants<String>(Variant const&, String) */

String * stringify_variants<String>(String *param_1,undefined8 param_2,String *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC276;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+(param_1,(String *)&local_68);
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



/* void print_line<String>(Variant const&, String) */

void print_line<String>(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010803f;
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
      local_20 = *param_2;
    }
  }
LAB_0010803f:
  stringify_variants<String>((String *)&local_18,param_1,&local_20);
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
  lVar2 = local_20;
  if (local_20 != 0) {
    LOCK();
    plVar1 = (long *)(local_20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_20 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* String stringify_variants<long>(Variant const&, long) */

Variant * stringify_variants<long>(Variant *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_RDX;
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
  local_68 = &_LC276;
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



/* String stringify_variants<unsigned int>(Variant const&, unsigned int) */

Variant * stringify_variants<unsigned_int>(Variant *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  uint in_EDX;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_EDX);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC276;
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



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_00108800:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00108800;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0010876c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00108701;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010876c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00108701:
  puVar9[-1] = param_1;
  return 0;
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
  local_68 = &_LC276;
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
      if (lVar2 == 0) goto LAB_00108aae;
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
LAB_00108aae:
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_68 = &_LC276;
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



/* void print_line<VkResult, char const*>(Variant const&, VkResult, char const*) */

void print_line<VkResult,char_const*>(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_2);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_68 = &_LC276;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<long>::_realloc(long) */

undefined8 __thiscall CowData<long>::_realloc(CowData<long> *this,long param_1)

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
/* Error CowData<long>::resize<false>(long) */

undefined8 __thiscall CowData<long>::resize<false>(CowData<long> *this,long param_1)

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
LAB_00109170:
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
  if (lVar8 == 0) goto LAB_00109170;
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
        goto LAB_00109081;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00109081:
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
/* OpenXRVulkanExtension::~OpenXRVulkanExtension() */

void __thiscall OpenXRVulkanExtension::~OpenXRVulkanExtension(OpenXRVulkanExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


