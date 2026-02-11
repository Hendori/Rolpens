
/* RenderingContextDriverVulkanX11::_get_platform_surface_extension() const */

char * RenderingContextDriverVulkanX11::_get_platform_surface_extension(void)

{
  return "VK_KHR_xlib_surface";
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkanX11::surface_create(void const*) */

undefined8 * __thiscall
RenderingContextDriverVulkanX11::surface_create(RenderingContextDriverVulkanX11 *this,void *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  pcVar1 = _vkCreateXlibSurfaceKHR;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *(undefined8 *)((long)param_1 + 8);
  local_44 = (undefined1  [16])0x0;
  local_34 = 0;
                    /* WARNING: Load size is inaccurate */
  local_28 = *param_1;
  local_48 = 0x3b9ad9a0;
  local_50 = 0;
  uVar3 = RenderingContextDriverVulkan::get_allocation_callbacks(1000000000);
  uVar4 = RenderingContextDriverVulkan::instance_get();
  iVar2 = (*pcVar1)(uVar4,&local_48,uVar3,&local_50);
  if (iVar2 == 0) {
    puVar5 = (undefined8 *)operator_new(0x18,"");
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 1;
    *(undefined1 *)((long)puVar5 + 0x14) = 0;
    *puVar5 = local_50;
  }
  else {
    _err_print_error("surface_create",
                     "platform/linuxbsd/x11/rendering_context_driver_vulkan_x11.cpp",0x33,
                     "Condition \"err != VK_SUCCESS\" is true. Returning: SurfaceID()",0,0);
    puVar5 = (undefined8 *)0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingContextDriverVulkanX11::~RenderingContextDriverVulkanX11() */

void __thiscall
RenderingContextDriverVulkanX11::~RenderingContextDriverVulkanX11
          (RenderingContextDriverVulkanX11 *this)

{
  *(undefined ***)this = &PTR__RenderingContextDriverVulkanX11_00100270;
  RenderingContextDriverVulkan::~RenderingContextDriverVulkan((RenderingContextDriverVulkan *)this);
  return;
}



/* RenderingContextDriverVulkanX11::~RenderingContextDriverVulkanX11() */

void __thiscall
RenderingContextDriverVulkanX11::~RenderingContextDriverVulkanX11
          (RenderingContextDriverVulkanX11 *this)

{
  *(undefined ***)this = &PTR__RenderingContextDriverVulkanX11_00100270;
  RenderingContextDriverVulkan::~RenderingContextDriverVulkan((RenderingContextDriverVulkan *)this);
  operator_delete(this,0x178);
  return;
}



/* RenderingContextDriverVulkanX11::RenderingContextDriverVulkanX11() */

void __thiscall
RenderingContextDriverVulkanX11::RenderingContextDriverVulkanX11
          (RenderingContextDriverVulkanX11 *this)

{
  RenderingContextDriverVulkan::RenderingContextDriverVulkan((RenderingContextDriverVulkan *)this);
  *(undefined ***)this = &PTR__RenderingContextDriverVulkanX11_00100270;
  return;
}


