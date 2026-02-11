
/* RenderingContextDriverVulkan::get_tracked_object_name(unsigned int) const */

undefined8 __thiscall
RenderingContextDriverVulkan::get_tracked_object_name
          (RenderingContextDriverVulkan *this,uint param_1)

{
  return *(undefined8 *)
          (get_tracked_object_name(unsigned_int)::vkTrackedObjectTypeNames + (ulong)param_1 * 8);
}



/* RenderingContextDriverVulkan::get_tracked_object_type_count() const */

undefined8 RenderingContextDriverVulkan::get_tracked_object_type_count(void)

{
  return 0x21;
}



/* _FUN(void*, unsigned long, VkInternalAllocationType, VkSystemAllocationScope) */

void RenderingContextDriverVulkan::get_allocation_callbacks(VkObjectType)::
     {lambda(void*,unsigned_long,VkInternalAllocationType,VkSystemAllocationScope)#1}::_FUN(void)

{
  return;
}



/* RenderingContextDriverVulkan::device_get_count() const */

undefined4 __thiscall
RenderingContextDriverVulkan::device_get_count(RenderingContextDriverVulkan *this)

{
  return *(undefined4 *)(this + 0xa0);
}



/* RenderingContextDriverVulkan::surface_create(void const*) */

undefined8 RenderingContextDriverVulkan::surface_create(void *param_1)

{
  return 0;
}



/* RenderingContextDriverVulkan::surface_set_size(unsigned long, unsigned int, unsigned int) */

void __thiscall
RenderingContextDriverVulkan::surface_set_size
          (RenderingContextDriverVulkan *this,ulong param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



/* RenderingContextDriverVulkan::surface_set_vsync_mode(unsigned long, DisplayServer::VSyncMode) */

void __thiscall
RenderingContextDriverVulkan::surface_set_vsync_mode
          (undefined8 param_1_00,long param_1,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



/* RenderingContextDriverVulkan::surface_get_vsync_mode(unsigned long) const */

undefined4 __thiscall
RenderingContextDriverVulkan::surface_get_vsync_mode
          (RenderingContextDriverVulkan *this,ulong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* RenderingContextDriverVulkan::surface_get_width(unsigned long) const */

undefined4 __thiscall
RenderingContextDriverVulkan::surface_get_width(RenderingContextDriverVulkan *this,ulong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* RenderingContextDriverVulkan::surface_get_height(unsigned long) const */

undefined4 __thiscall
RenderingContextDriverVulkan::surface_get_height(RenderingContextDriverVulkan *this,ulong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* RenderingContextDriverVulkan::surface_set_needs_resize(unsigned long, bool) */

void __thiscall
RenderingContextDriverVulkan::surface_set_needs_resize
          (RenderingContextDriverVulkan *this,ulong param_1,bool param_2)

{
  *(bool *)(param_1 + 0x14) = param_2;
  return;
}



/* RenderingContextDriverVulkan::surface_get_needs_resize(unsigned long) const */

undefined1 __thiscall
RenderingContextDriverVulkan::surface_get_needs_resize
          (RenderingContextDriverVulkan *this,ulong param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* RenderingContextDriverVulkan::get_device_total_memory() const */

undefined8 RenderingContextDriverVulkan::get_device_total_memory(void)

{
  return memory_report_total_memory;
}



/* RenderingContextDriverVulkan::get_device_allocation_count() const */

undefined8 RenderingContextDriverVulkan::get_device_allocation_count(void)

{
  return memory_report_total_alloc_count;
}



/* RenderingContextDriverVulkan::get_device_memory_by_object_type(unsigned int) const */

undefined8 __thiscall
RenderingContextDriverVulkan::get_device_memory_by_object_type
          (RenderingContextDriverVulkan *this,uint param_1)

{
  return (&memory_report_mem_usage)[param_1];
}



/* RenderingContextDriverVulkan::get_device_allocs_by_object_type(unsigned int) const */

undefined8 __thiscall
RenderingContextDriverVulkan::get_device_allocs_by_object_type
          (RenderingContextDriverVulkan *this,uint param_1)

{
  return (&memory_report_allocation_count)[param_1];
}



/* RenderingContextDriverVulkan::get_driver_total_memory() const */

undefined8 RenderingContextDriverVulkan::get_driver_total_memory(void)

{
  return driver_memory_total_memory;
}



/* RenderingContextDriverVulkan::get_driver_allocation_count() const */

undefined8 RenderingContextDriverVulkan::get_driver_allocation_count(void)

{
  return driver_memory_total_alloc_count;
}



/* RenderingContextDriverVulkan::get_driver_memory_by_object_type(unsigned int) const */

long __thiscall
RenderingContextDriverVulkan::get_driver_memory_by_object_type
          (RenderingContextDriverVulkan *this,uint param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = &driver_memory_tracker + (ulong)param_1 * 5;
  lVar3 = 0;
  do {
    lVar1 = *plVar2;
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + lVar1;
  } while (plVar2 != &DAT_00107028 + (ulong)param_1 * 5);
  return lVar3;
}



/* RenderingContextDriverVulkan::get_driver_allocs_by_object_type(unsigned int) const */

long __thiscall
RenderingContextDriverVulkan::get_driver_allocs_by_object_type
          (RenderingContextDriverVulkan *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  
  lVar3 = 0;
  puVar2 = &driver_memory_allocation_count + (ulong)param_1 * 5;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + (ulong)uVar1;
  } while (puVar2 != &DAT_00106d74 + (ulong)param_1 * 5);
  return lVar3;
}



/* RenderingContextDriverVulkan::device_get(unsigned int) const */

long __thiscall
RenderingContextDriverVulkan::device_get(RenderingContextDriverVulkan *this,uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0xa0)) {
    return *(long *)(this + 0xa8) + (ulong)param_1 * 0x18;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)param_1,
             (ulong)*(uint *)(this + 0xa0),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderingContextDriverVulkan::_use_validation_layers() const */

void RenderingContextDriverVulkan::_use_validation_layers(void)

{
  Engine::get_singleton();
  Engine::is_validation_layers_enabled();
  return;
}



/* RenderingContextDriverVulkan::driver_create() */

RenderingDeviceDriverVulkan * __thiscall
RenderingContextDriverVulkan::driver_create(RenderingContextDriverVulkan *this)

{
  RenderingDeviceDriverVulkan *this_00;
  
  this_00 = (RenderingDeviceDriverVulkan *)operator_new(0x940,"");
  RenderingDeviceDriverVulkan::RenderingDeviceDriverVulkan(this_00,this);
  postinitialize_handler((Object *)this_00);
  return this_00;
}



/* LocalVector<VkLayerProperties, unsigned int, false, true>::resize(unsigned int) [clone .part.0]
    */

void LocalVector<VkLayerProperties,unsigned_int,false,true>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderingContextDriverVulkan::driver_free(RenderingDeviceDriver*) */

void __thiscall
RenderingContextDriverVulkan::driver_free
          (RenderingContextDriverVulkan *this,RenderingDeviceDriver *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    Memory::free_static(param_1,false);
    return;
  }
  return;
}



/* _FUN(void*, unsigned long, VkInternalAllocationType, VkSystemAllocationScope) */

void RenderingContextDriverVulkan::get_allocation_callbacks(VkObjectType)::
     {lambda(void*,unsigned_long,VkInternalAllocationType,VkSystemAllocationScope)#2}::_FUN(void)

{
  return;
}



/* _FUN(void*, void*) */

void RenderingContextDriverVulkan::get_allocation_callbacks(VkObjectType)::{lambda(void*,void*)#1}::
     _FUN(void *param_1,void *param_2)

{
  long *plVar1;
  
  if (param_2 != (void *)0x0) {
    plVar1 = (long *)((long)param_2 - *(long *)((long)param_2 + -8));
    LOCK();
    driver_memory_total_alloc_count = driver_memory_total_alloc_count + -1;
    UNLOCK();
    LOCK();
    driver_memory_total_memory = driver_memory_total_memory - *plVar1;
    UNLOCK();
    LOCK();
    (&driver_memory_tracker)[(long)*(int *)((long)plVar1 + 0xc) * 5 + (long)(int)plVar1[1]] =
         (&driver_memory_tracker)[(long)*(int *)((long)plVar1 + 0xc) * 5 + (long)(int)plVar1[1]] -
         *plVar1;
    UNLOCK();
    LOCK();
    (&driver_memory_allocation_count)[(long)*(int *)((long)plVar1 + 0xc) * 5 + (long)(int)plVar1[1]]
         = (&driver_memory_allocation_count)
           [(long)*(int *)((long)plVar1 + 0xc) * 5 + (long)(int)plVar1[1]] + -1;
    UNLOCK();
    Memory::free_aligned_static(plVar1);
    return;
  }
  return;
}



/* _FUN(void*, unsigned long, unsigned long, VkSystemAllocationScope) */

long * RenderingContextDriverVulkan::get_allocation_callbacks(VkObjectType)::
       {lambda(void*,unsigned_long,unsigned_long,VkSystemAllocationScope)#1}::_FUN
                 (int *param_1,long param_2,ulong param_3,int param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar1 = *param_1;
  LOCK();
  driver_memory_total_memory = driver_memory_total_memory + param_2;
  UNLOCK();
  LOCK();
  driver_memory_total_alloc_count = driver_memory_total_alloc_count + 1;
  UNLOCK();
  lVar2 = (long)iVar1 * 5 + (long)param_4;
  LOCK();
  (&driver_memory_tracker)[lVar2] = (&driver_memory_tracker)[lVar2] + param_2;
  UNLOCK();
  LOCK();
  (&driver_memory_allocation_count)[lVar2] = (&driver_memory_allocation_count)[lVar2] + 1;
  UNLOCK();
  uVar3 = 0x20;
  if (0x1f < param_3) {
    uVar3 = param_3;
  }
  plVar4 = (long *)Memory::alloc_aligned_static(param_2 + uVar3,uVar3);
  if (plVar4 != (long *)0x0) {
    *plVar4 = param_2;
    plVar4[1] = CONCAT44(iVar1,param_4);
    *(ulong *)((long)plVar4 + (uVar3 - 8)) = uVar3;
    plVar4 = (long *)((long)plVar4 + uVar3);
  }
  return plVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::device_supports_present(unsigned int, unsigned long) const */

undefined8 __thiscall
RenderingContextDriverVulkan::device_supports_present
          (RenderingContextDriverVulkan *this,uint param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  uVar1 = *(uint *)(this + 0xb0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < uVar1) {
    uVar1 = *(uint *)(this + 0xc0);
    uVar4 = *(undefined8 *)(*(long *)(this + 0xb8) + (ulong)param_1 * 8);
    if (param_1 < uVar1) {
      puVar6 = (uint *)((ulong)param_1 * 0x10 + *(long *)(this + 200));
      if (*puVar6 != 0) {
        uVar5 = 0;
        do {
          if ((*(byte *)(*(long *)(puVar6 + 2) + uVar5 * 0x18) & 1) != 0) {
            local_34 = 0;
            iVar3 = (*_vkGetPhysicalDeviceSurfaceSupportKHR)
                              (uVar4,uVar5 & 0xffffffff,*(undefined8 *)param_2,&local_34);
            if ((iVar3 == 0) && (local_34 != 0)) {
              uVar4 = 1;
              goto LAB_001004e5;
            }
          }
          uVar5 = uVar5 + 1;
        } while ((uint)uVar5 < *puVar6);
      }
      uVar4 = 0;
LAB_001004e5:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar4;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)param_1,(ulong)uVar1,
             "p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */

void __thiscall CowData<char>::_ref(CowData<char> *this,CowData *param_1)

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



/* RenderingContextDriverVulkan::is_debug_utils_enabled() const */

ulong __thiscall
RenderingContextDriverVulkan::is_debug_utils_enabled(RenderingContextDriverVulkan *this)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *pbVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  CharString::copy_from((char *)&local_48);
  if ((*(long *)(this + 0x78) != 0) && (*(int *)(this + 0x9c) != 0)) {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x98) * 8);
    pbVar13 = (byte *)CharString::get_data();
    bVar2 = *pbVar13;
    if (bVar2 == 0) {
      uVar17 = 0x1505;
      uVar16 = 0x1505;
    }
    else {
      uVar16 = 0x1505;
      do {
        pbVar13 = pbVar13 + 1;
        uVar16 = uVar16 * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar13;
      } while (bVar2 != 0);
      if (uVar16 == 0) {
        uVar16 = 1;
      }
      uVar17 = (ulong)uVar16;
    }
    uVar20 = CONCAT44(0,uVar3);
    lVar18 = *(long *)(this + 0x90);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17 * lVar4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar20;
    lVar15 = SUB168(auVar5 * auVar9,8);
    uVar19 = *(uint *)(lVar18 + lVar15 * 4);
    iVar14 = SUB164(auVar5 * auVar9,8);
    if (uVar19 != 0) {
      uVar21 = 0;
      do {
        if (uVar19 == uVar16) {
          uVar17 = CharString::operator==
                             ((CharString *)
                              (*(long *)(this + 0x78) +
                              (ulong)*(uint *)(*(long *)(this + 0x80) + lVar15 * 4) * 8),
                              (CharString *)&local_48);
          if ((char)uVar17 != '\0') goto LAB_00100657;
          lVar18 = *(long *)(this + 0x90);
        }
        uVar21 = uVar21 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar14 + 1) * lVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar20;
        lVar15 = SUB168(auVar6 * auVar10,8);
        uVar19 = *(uint *)(lVar18 + lVar15 * 4);
        iVar14 = SUB164(auVar6 * auVar10,8);
      } while ((uVar19 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar19 * lVar4, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar20, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar3 + iVar14) - SUB164(auVar7 * auVar11,8)) * lVar4,
              auVar12._8_8_ = 0, auVar12._0_8_ = uVar20, uVar21 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  uVar17 = 0;
LAB_00100657:
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      uVar17 = uVar17 & 0xff;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* vk_object_to_tracked_object(VkObjectType) [clone .part.0] */

undefined8 vk_object_to_tracked_object(uint param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x3b9c1608) {
    uVar4 = 0x1a;
  }
  else {
    if (param_1 < 0x3b9c1609) {
      uVar4 = 0x1c;
      if (((param_1 == 0x3b9acde8) || (uVar4 = 0x1e, param_1 == 0x3b9af4f8)) ||
         (uVar4 = 0x1b, param_1 == 1000000000)) goto LAB_00100858;
    }
    else {
      uVar4 = 0x1f;
      if (((param_1 == 0x3b9d13f0) || (param_1 == 0x3b9d4e88)) ||
         (uVar4 = 0x1d, param_1 == 0x3b9cbe00)) goto LAB_00100858;
    }
    local_50 = 0;
    local_48 = 
    ".Please add it to VkTrackedObjectType, switch statement in vk_object_to_tracked_object and get_tracked_object_name."
    ;
    local_40 = 0x73;
    String::parse_latin1((StrRange *)&local_50);
    itos((long)&local_60);
    operator+((char *)&local_58,(String *)"Unknown VkObjectType enum value ");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("vk_object_to_tracked_object",
                     "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x89,(String *)&local_48,1
                     ,0);
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
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        uVar4 = 0;
        goto LAB_00100858;
      }
    }
    uVar4 = 0;
  }
LAB_00100858:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingContextDriverVulkan::_debug_report_callback(unsigned int, VkDebugReportObjectTypeEXT,
   unsigned long, unsigned long, int, char const*, char const*, void*) */

undefined8
RenderingContextDriverVulkan::_debug_report_callback
          (undefined4 param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char *in_stack_00000008;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_70 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    local_60 = strlen(in_stack_00000008);
  }
  local_68 = in_stack_00000008;
  String::parse_latin1((StrRange *)&local_70);
  local_78 = 0;
  local_68 = "\n";
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  String::num_int64((long)&local_88,param_3,true);
  local_68 = "Vulkan Debug Report: object - ";
  local_90 = 0;
  local_60 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_98,(String *)&local_68);
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
  switch(param_1) {
  case 1:
  case 0x10:
    Variant::Variant((Variant *)local_58,(String *)&local_98);
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
    break;
  case 2:
  case 4:
    _err_print_error("_debug_report_callback","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                     0x296,(String *)&local_98,0,1);
    break;
  case 8:
    _err_print_error("_debug_report_callback","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                     0x299,(String *)&local_98,0,0);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingContextDriverVulkan::_debug_messenger_callback(VkDebugUtilsMessageSeverityFlagBitsEXT,
   unsigned int, VkDebugUtilsMessengerCallbackDataEXT const*, void*) */

undefined8
RenderingContextDriverVulkan::_debug_messenger_callback(uint param_1,uint param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  String *local_168;
  String *local_160;
  String *local_158;
  StrRange *local_150;
  StrRange *local_148;
  StrRange *local_140;
  StrRange *local_138;
  String *local_130;
  String *local_120;
  String *local_118;
  String *local_100;
  long local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  pcVar7 = *(char **)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = strstr(pcVar7,"Mapping an image with layout");
  if (((((pcVar6 != (char *)0x0) &&
        (pcVar6 = strstr(pcVar7,
                         "can result in undefined behavior if this memory is used by the device"),
        pcVar6 != (char *)0x0)) ||
       (pcVar6 = strstr(pcVar7,"Invalid SPIR-V binary version 1.3"), pcVar6 != (char *)0x0)) ||
      (pcVar6 = strstr(pcVar7,"Shader requires flag"), pcVar6 != (char *)0x0)) ||
     (((pcVar6 = strstr(pcVar7,"SPIR-V module not valid: Pointer operand"), pcVar6 != (char *)0x0 &&
       (pcVar7 = strstr(pcVar7,"must be a memory object"), pcVar7 != (char *)0x0)) ||
      ((*(char **)(param_3 + 0x18) != (char *)0x0 &&
       (pcVar7 = strstr(*(char **)(param_3 + 0x18),
                        "UNASSIGNED-CoreValidation-DrawState-ClearCmdBeforeDraw"),
       pcVar7 != (char *)0x0)))))) goto LAB_00100e0d;
  local_e8 = 0;
  if (param_2 == 2) {
    local_60 = 10;
    local_68 = "VALIDATION";
LAB_00100ef2:
    String::parse_latin1((StrRange *)&local_e8);
  }
  else {
    if (param_2 < 3) {
      if (param_2 == 0) {
        local_60 = 0x16;
        local_68 = "VALIDATION|PERFORMANCE";
      }
      else {
        local_60 = 7;
        local_68 = "GENERAL";
      }
      goto LAB_00100ef2;
    }
    if (param_2 == 4) {
      local_60 = 0xb;
      local_68 = "PERFORMANCE";
      goto LAB_00100ef2;
    }
  }
  local_e0 = (char *)0x0;
  if (*(int *)(param_3 + 0x50) != 0) {
    String::num_int64((long)&local_70,*(int *)(param_3 + 0x50),true);
    operator+((char *)&local_68,(String *)"\n\tObjects - ");
    pcVar6 = local_68;
    pcVar7 = local_e0;
    if (local_e0 == local_68) {
      if (local_e0 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
    }
    else {
      if (local_e0 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
        }
      }
      local_e0 = local_68;
    }
    lVar12 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    if (*(int *)(param_3 + 0x50) != 0) {
      lVar12 = 0;
      do {
        local_100 = (String *)&local_e0;
        local_118 = (String *)&local_b8;
        local_120 = (String *)&local_c0;
        local_130 = (String *)&local_b0;
        local_138 = (StrRange *)&local_88;
        local_140 = (StrRange *)&local_98;
        local_148 = (StrRange *)&local_a8;
        local_150 = (StrRange *)&local_78;
        local_158 = (String *)&local_90;
        local_160 = (String *)&local_a0;
        local_168 = (String *)&local_80;
        lVar11 = lVar12 * 0x28;
        String::num_int64((long)&local_70,
                          (int)*(undefined8 *)(*(long *)(param_3 + 0x58) + 0x18 + lVar11),true);
        local_80 = 0;
        local_68 = ", Handle ";
        local_60 = 9;
        String::parse_latin1((StrRange *)local_168);
        uVar2 = *(uint *)(*(long *)(param_3 + 0x58) + 0x10 + lVar11);
        switch(uVar2) {
        case 0:
          local_60 = 0x16;
          local_68 = "VK_OBJECT_TYPE_UNKNOWN";
          break;
        case 1:
          local_60 = 0x17;
          local_68 = "VK_OBJECT_TYPE_INSTANCE";
          break;
        case 2:
          local_60 = 0x1e;
          local_68 = "VK_OBJECT_TYPE_PHYSICAL_DEVICE";
          break;
        case 3:
          local_60 = 0x15;
          local_68 = "VK_OBJECT_TYPE_DEVICE";
          break;
        case 4:
          local_60 = 0x14;
          local_68 = "VK_OBJECT_TYPE_QUEUE";
          break;
        case 5:
          local_60 = 0x18;
          local_68 = "VK_OBJECT_TYPE_SEMAPHORE";
          break;
        case 6:
          local_60 = 0x1d;
          local_68 = "VK_OBJECT_TYPE_COMMAND_BUFFER";
          break;
        case 7:
          local_60 = 0x14;
          local_68 = "VK_OBJECT_TYPE_FENCE";
          break;
        case 8:
          local_60 = 0x1c;
          local_68 = "VK_OBJECT_TYPE_DEVICE_MEMORY";
          break;
        case 9:
          local_60 = 0x15;
          local_68 = "VK_OBJECT_TYPE_BUFFER";
          break;
        case 10:
          local_60 = 0x14;
          local_68 = "VK_OBJECT_TYPE_IMAGE";
          break;
        case 0xb:
          local_60 = 0x14;
          local_68 = "VK_OBJECT_TYPE_EVENT";
          break;
        case 0xc:
          local_60 = 0x19;
          local_68 = "VK_OBJECT_TYPE_QUERY_POOL";
          break;
        case 0xd:
          local_60 = 0x1a;
          local_68 = "VK_OBJECT_TYPE_BUFFER_VIEW";
          break;
        case 0xe:
          local_60 = 0x19;
          local_68 = "VK_OBJECT_TYPE_IMAGE_VIEW";
          break;
        case 0xf:
          local_60 = 0x1c;
          local_68 = "VK_OBJECT_TYPE_SHADER_MODULE";
          break;
        case 0x10:
          local_60 = 0x1d;
          local_68 = "VK_OBJECT_TYPE_PIPELINE_CACHE";
          break;
        case 0x11:
          local_60 = 0x1e;
          local_68 = "VK_OBJECT_TYPE_PIPELINE_LAYOUT";
          break;
        case 0x12:
          local_60 = 0x1a;
          local_68 = "VK_OBJECT_TYPE_RENDER_PASS";
          break;
        case 0x13:
          local_60 = 0x17;
          local_68 = "VK_OBJECT_TYPE_PIPELINE";
          break;
        case 0x14:
          local_60 = 0x24;
          local_68 = "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT";
          break;
        case 0x15:
          local_60 = 0x16;
          local_68 = "VK_OBJECT_TYPE_SAMPLER";
          break;
        case 0x16:
          local_60 = 0x1e;
          local_68 = "VK_OBJECT_TYPE_DESCRIPTOR_POOL";
          break;
        case 0x17:
          local_60 = 0x1d;
          local_68 = "VK_OBJECT_TYPE_DESCRIPTOR_SET";
          break;
        case 0x18:
          local_60 = 0x1a;
          local_68 = "VK_OBJECT_TYPE_FRAMEBUFFER";
          break;
        case 0x19:
          local_60 = 0x1b;
          local_68 = "VK_OBJECT_TYPE_COMMAND_POOL";
          break;
        default:
          if (uVar2 == 0x3b9d2b60) {
            local_60 = 0x27;
            local_68 = "VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION";
          }
          else if (uVar2 < 0x3b9d2b61) {
            if (uVar2 == 0x3b9b23d9) {
              local_60 = 0x2b;
              local_68 = "VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR";
            }
            else if (uVar2 < 0x3b9b23da) {
              if (uVar2 == 0x3b9ad1d1) {
                local_60 = 0x1f;
                local_68 = "VK_OBJECT_TYPE_DISPLAY_MODE_KHR";
              }
              else if (uVar2 < 0x3b9ad1d2) {
                if (uVar2 == 0x3b9acde8) {
                  local_60 = 0x1c;
                  local_68 = "VK_OBJECT_TYPE_SWAPCHAIN_KHR";
                }
                else if (uVar2 == 0x3b9ad1d0) {
                  local_60 = 0x1a;
                  local_68 = "VK_OBJECT_TYPE_DISPLAY_KHR";
                }
                else {
                  if (uVar2 != 1000000000) goto LAB_00102909;
                  local_60 = 0x1a;
                  local_68 = "VK_OBJECT_TYPE_SURFACE_KHR";
                }
              }
              else if (uVar2 == 0x3b9af4f8) {
                local_60 = 0x28;
                local_68 = "VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT";
              }
              else {
                if (uVar2 != 0x3b9b23d8) goto LAB_00102909;
                local_60 = 0x20;
                local_68 = "VK_OBJECT_TYPE_VIDEO_SESSION_KHR";
              }
            }
            else if (uVar2 == 0x3b9c1608) {
              local_60 = 0x29;
              local_68 = "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE";
            }
            else if (uVar2 < 0x3b9c1609) {
              if (uVar2 == 0x3b9b3b48) {
                local_60 = 0x1c;
                local_68 = "VK_OBJECT_TYPE_CU_MODULE_NVX";
              }
              else if (uVar2 == 0x3b9b3b49) {
                local_60 = 0x1e;
                local_68 = "VK_OBJECT_TYPE_CU_FUNCTION_NVX";
              }
              else {
LAB_00102909:
                local_60 = 0x16;
                local_68 = "Unhandled VkObjectType";
              }
            }
            else if (uVar2 == 0x3b9cbe00) {
              local_60 = 0x28;
              local_68 = "VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT";
            }
            else {
              if (uVar2 != 0x3b9d13f0) goto LAB_00102909;
              local_60 = 0x29;
              local_68 = "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR";
            }
          }
          else if (uVar2 == 0x3b9f7938) {
            local_60 = 0x1d;
            local_68 = "VK_OBJECT_TYPE_CUDA_MODULE_NV";
          }
          else if (uVar2 < 0x3b9f7939) {
            if (uVar2 == 0x3b9ee0e0) {
              local_60 = 0x25;
              local_68 = "VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR";
            }
            else if (uVar2 < 0x3b9ee0e1) {
              if (uVar2 == 0x3b9d4e88) {
                local_60 = 0x28;
                local_68 = "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV";
              }
              else if (uVar2 == 0x3b9dfe50) {
                local_60 = 0x2e;
                local_68 = "VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL";
              }
              else {
                if (uVar2 != 0x3b9d3b00) goto LAB_00102909;
                local_60 = 0x23;
                local_68 = "VK_OBJECT_TYPE_VALIDATION_CACHE_EXT";
              }
            }
            else if (uVar2 == 0x3b9f0408) {
              local_60 = 0x2a;
              local_68 = "VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV";
            }
            else {
              if (uVar2 != 0x3b9f4a58) goto LAB_00102909;
              local_60 = 0x20;
              local_68 = "VK_OBJECT_TYPE_PRIVATE_DATA_SLOT";
            }
          }
          else if (uVar2 == 0x3ba0d4e0) {
            local_60 = 0x1b;
            local_68 = "VK_OBJECT_TYPE_MICROMAP_EXT";
          }
          else if (uVar2 < 0x3ba0d4e1) {
            if (uVar2 == 0x3b9f7939) {
              local_60 = 0x1f;
              local_68 = "VK_OBJECT_TYPE_CUDA_FUNCTION_NV";
            }
            else {
              if (uVar2 != 0x3ba05fb0) goto LAB_00102909;
              local_60 = 0x28;
              local_68 = "VK_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA";
            }
          }
          else if (uVar2 == 0x3ba1de80) {
            local_60 = 0x26;
            local_68 = "VK_OBJECT_TYPE_OPTICAL_FLOW_SESSION_NV";
          }
          else {
            if (uVar2 != 0x3ba224d0) goto LAB_00102909;
            local_60 = 0x19;
            local_68 = "VK_OBJECT_TYPE_SHADER_EXT";
          }
        }
        local_90 = 0;
        String::parse_latin1((StrRange *)local_158);
        local_a0 = 0;
        local_68 = " - ";
        local_60 = 3;
        String::parse_latin1((StrRange *)local_160);
        local_b0 = 0;
        local_68 = "]";
        local_60 = 1;
        String::parse_latin1((StrRange *)local_130);
        String::num_int64((long)local_120,(int)lVar12,true);
        operator+((char *)local_118,(String *)"\n\t\tObject[");
        String::operator+((String *)local_148,local_118);
        String::operator+((String *)local_140,(String *)local_148);
        String::operator+((String *)local_138,(String *)local_140);
        String::operator+((String *)local_150,(String *)local_138);
        String::operator+((String *)&local_68,(String *)local_150);
        String::operator+=(local_100,(String *)&local_68);
        pcVar7 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar4 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        pcVar7 = *(char **)(*(long *)(param_3 + 0x58) + 0x20 + lVar11);
        if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
          local_70 = 0;
          local_68 = "\"";
          local_60 = 1;
          String::parse_latin1((StrRange *)&local_70);
          pcVar7 = *(char **)(*(long *)(param_3 + 0x58) + 0x20 + lVar11);
          sVar8 = 0;
          local_80 = 0;
          if (pcVar7 != (char *)0x0) {
            sVar8 = strlen(pcVar7);
          }
          local_68 = pcVar7;
          local_60 = sVar8;
          String::parse_latin1((StrRange *)local_168);
          operator+((char *)local_150,(String *)", Name \"");
          String::operator+((String *)&local_68,(String *)local_150);
          String::operator+=(local_100,(String *)&local_68);
          pcVar7 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar7 + -0x10,false);
            }
          }
          lVar11 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
        }
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(param_3 + 0x50));
    }
  }
  local_118 = (String *)&local_b8;
  local_120 = (String *)&local_c0;
  local_130 = (String *)&local_b0;
  local_138 = (StrRange *)&local_88;
  local_140 = (StrRange *)&local_98;
  local_148 = (StrRange *)&local_a8;
  local_150 = (StrRange *)&local_78;
  local_158 = (String *)&local_90;
  local_160 = (String *)&local_a0;
  local_168 = (String *)&local_80;
  local_d8 = (char *)0x0;
  if (*(int *)(param_3 + 0x40) != 0) {
    String::num_int64((long)&local_70,*(int *)(param_3 + 0x40),true);
    operator+((char *)&local_68,(String *)"\n\tCommand Buffer Labels - ");
    pcVar6 = local_68;
    pcVar7 = local_d8;
    if (local_d8 == local_68) {
      if (local_d8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
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
          Memory::free_static(pcVar7 + -0x10,false);
        }
      }
      local_d8 = local_68;
    }
    lVar12 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    if (*(int *)(param_3 + 0x40) != 0) {
      lVar12 = 0;
      do {
        local_70 = 0;
        local_68 = "{ ";
        local_60 = 2;
        String::parse_latin1((StrRange *)&local_70);
        pcVar7 = *(char **)(*(long *)(param_3 + 0x48) + 0x10 + lVar12 * 0x28);
        sVar8 = 0;
        local_80 = 0;
        if (pcVar7 != (char *)0x0) {
          sVar8 = strlen(pcVar7);
        }
        local_68 = pcVar7;
        local_60 = sVar8;
        String::parse_latin1((StrRange *)local_168);
        local_90 = 0;
        local_68 = " - ";
        local_60 = 3;
        String::parse_latin1((StrRange *)local_158);
        local_a0 = 0;
        local_68 = "]";
        local_60 = 1;
        String::parse_latin1((StrRange *)local_160);
        String::num_int64((long)local_130,(int)lVar12,true);
        operator+((char *)local_148,(String *)"\n\t\tLabel[");
        String::operator+((String *)local_140,(String *)local_148);
        String::operator+((String *)local_138,(String *)local_140);
        String::operator+((String *)local_150,(String *)local_138);
        String::operator+((String *)&local_68,(String *)local_150);
        String::operator+=((String *)&local_d8,(String *)&local_68);
        pcVar7 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar11 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        lVar11 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        iVar10 = 0;
        while( true ) {
          String::num((double)*(float *)(lVar12 * 0x28 +
                                        (long)iVar10 * 4 + 0x18 + *(long *)(param_3 + 0x48)),
                      (int)(String *)&local_68);
          String::operator+=((String *)&local_d8,(String *)&local_68);
          pcVar7 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar7 + -0x10,false);
            }
          }
          if (iVar10 == 3) break;
          iVar10 = iVar10 + 1;
          String::operator+=((String *)&local_d8,", ");
        }
        lVar12 = lVar12 + 1;
        String::operator+=((String *)&local_d8," }");
      } while ((uint)lVar12 < *(uint *)(param_3 + 0x40));
    }
  }
  pcVar7 = *(char **)(param_3 + 0x28);
  sVar8 = 0;
  local_78 = 0;
  if (pcVar7 != (char *)0x0) {
    sVar8 = strlen(pcVar7);
  }
  local_68 = pcVar7;
  local_60 = sVar8;
  String::parse_latin1(local_150);
  local_68 = "\n\t";
  local_88 = 0;
  local_60 = 2;
  String::parse_latin1(local_138);
  pcVar7 = *(char **)(param_3 + 0x18);
  sVar8 = 0;
  local_98 = 0;
  if (pcVar7 != (char *)0x0) {
    sVar8 = strlen(pcVar7);
  }
  local_68 = pcVar7;
  local_60 = sVar8;
  String::parse_latin1(local_140);
  local_68 = " | Message Id Name: ";
  local_a8 = 0;
  local_60 = 0x14;
  String::parse_latin1(local_148);
  String::num_int64((long)local_118,*(int *)(param_3 + 0x20),true);
  local_68 = " - Message Id Number: ";
  local_c8 = 0;
  local_60 = 0x16;
  String::parse_latin1((StrRange *)&local_c8);
  String::operator+(local_120,(String *)&local_e8);
  String::operator+(local_130,local_120);
  String::operator+(local_160,local_130);
  String::operator+(local_158,local_160);
  String::operator+(local_168,local_158);
  String::operator+((String *)&local_70,local_168);
  String::operator+((String *)&local_68,(String *)&local_70);
  String::operator+((String *)&local_d0,(String *)&local_68);
  pcVar7 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
  lVar12 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  if (param_1 == 0x100) {
    _err_print_error("_debug_messenger_callback",
                     "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x27f,(String *)&local_d0,
                     0,1);
  }
  else if (param_1 < 0x101) {
    if (param_1 == 1) {
      cVar5 = is_print_verbose_enabled();
      if (cVar5 != '\0') goto LAB_00101476;
    }
    else if (param_1 == 0x10) {
LAB_00101476:
      Variant::Variant((Variant *)local_58,(String *)&local_d0);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      pcVar7 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else if (param_1 == 0x1000) {
    _err_print_error("_debug_messenger_callback",
                     "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x282,(String *)&local_d0,
                     0,0);
    Engine::get_singleton();
    uVar9 = Engine::is_abort_on_gpu_errors_enabled();
    if ((char)uVar9 != '\0') {
      _err_print_error("_debug_messenger_callback",
                       "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x283,
                       "FATAL: Condition \"Engine::get_singleton()->is_abort_on_gpu_errors_enabled()\" is true."
                       ,"Crashing, because abort on GPU errors is enabled.",0,0,uVar9);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  lVar12 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  pcVar7 = local_d8;
  if (local_d8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
  pcVar7 = local_e0;
  if (local_e0 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
  lVar12 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
LAB_00100e0d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* vk_object_to_tracked_object(VkObjectType) */

ulong vk_object_to_tracked_object(uint param_1)

{
  ulong uVar1;
  
  if ((0x19 < (int)param_1) && (param_1 != 0x20)) {
    uVar1 = vk_object_to_tracked_object();
    return uVar1;
  }
  return (ulong)param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::get_allocation_callbacks(VkObjectType) */

undefined8 * RenderingContextDriverVulkan::get_allocation_callbacks(uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar4;
  
  uVar7 = (ulong)param_1;
  Engine::get_singleton();
  cVar1 = Engine::is_extra_gpu_memory_tracking_enabled();
  if (cVar1 == '\0') {
    return (undefined8 *)0x0;
  }
  if (_DAT_001075e8 == 0) {
    puVar8 = &get_allocation_callbacks(VkObjectType)::object_callbacks;
    lVar9 = 0;
    puVar10 = &get_allocation_callbacks(VkObjectType)::object_user_data;
    puVar11 = &driver_memory_allocation_count;
    puVar5 = &DAT_00107028;
    do {
      puVar8[5] = get_allocation_callbacks(VkObjectType)::
                  {lambda(void*,unsigned_long,VkInternalAllocationType,VkSystemAllocationScope)#2}::
                  _FUN;
      puVar8[1] = get_allocation_callbacks(VkObjectType)::
                  {lambda(void*,unsigned_long,unsigned_long,VkSystemAllocationScope)#1}::_FUN;
      puVar8[2] = get_allocation_callbacks(VkObjectType)::
                  {lambda(void*,void*,unsigned_long,unsigned_long,VkSystemAllocationScope)#1}::_FUN;
      puVar8[3] = get_allocation_callbacks(VkObjectType)::{lambda(void*,void*)#1}::_FUN;
      puVar8[4] = get_allocation_callbacks(VkObjectType)::
                  {lambda(void*,unsigned_long,VkInternalAllocationType,VkSystemAllocationScope)#1}::
                  _FUN;
      *puVar10 = (int)lVar9;
      *puVar8 = puVar10;
      puVar3 = puVar5 + -5;
      puVar6 = puVar11;
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = 0;
        *puVar6 = 0;
        puVar3 = puVar4;
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar5);
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 6;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 5;
      puVar5 = puVar5 + 5;
    } while (lVar9 != 0x21);
  }
  if ((0x19 < (int)param_1) && (param_1 != 0x20)) {
    uVar2 = vk_object_to_tracked_object(param_1);
    uVar7 = (ulong)uVar2;
  }
  return &get_allocation_callbacks(VkObjectType)::object_callbacks + uVar7 * 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::_create_vulkan_instance(VkInstanceCreateInfo const*,
   VkInstance_T**) */

undefined8 __thiscall
RenderingContextDriverVulkan::_create_vulkan_instance
          (RenderingContextDriverVulkan *this,VkInstanceCreateInfo *param_1,VkInstance_T **param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  pcVar1 = _vkCreateInstance;
  if (VulkanHooks::singleton == (long *)0x0) {
    uVar4 = get_allocation_callbacks(1);
    iVar3 = (*pcVar1)(param_1,uVar4,param_2);
    if (iVar3 == -9) {
      _err_print_error("_create_vulkan_instance",
                       "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x382,
                       "Condition \"err == VK_ERROR_INCOMPATIBLE_DRIVER\" is true. Returning: ERR_CANT_CREATE"
                       ,
                       "Cannot find a compatible Vulkan installable client driver (ICD).\n\nvkCreateInstance Failure"
                       ,0,0);
    }
    else if (iVar3 == -7) {
      _err_print_error("_create_vulkan_instance",
                       "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x385,
                       "Condition \"err == VK_ERROR_EXTENSION_NOT_PRESENT\" is true. Returning: ERR_CANT_CREATE"
                       ,
                       "Cannot find a specified extension library.\nMake sure your layers path is set appropriately.\nvkCreateInstance Failure"
                       ,0,0);
    }
    else {
      if (iVar3 == 0) {
        return 0;
      }
      _err_print_error("_create_vulkan_instance",
                       "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x389,
                       "Condition \"err\" is true. Returning: ERR_CANT_CREATE",
                       "vkCreateInstance failed.\n\nDo you have a compatible Vulkan installable client driver (ICD) installed?\nPlease look at the Getting Started guide for additional information.\nvkCreateInstance Failure"
                       ,0,0);
    }
  }
  else {
    cVar2 = (**(code **)(*VulkanHooks::singleton + 0x10))();
    if (cVar2 != '\0') {
      return 0;
    }
  }
  return 0x14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::surface_destroy(unsigned long) */

void __thiscall
RenderingContextDriverVulkan::surface_destroy(RenderingContextDriverVulkan *this,ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = _vkDestroySurfaceKHR;
  uVar2 = get_allocation_callbacks(1000000000);
  (*pcVar1)(*(undefined8 *)(this + 0x38),*(undefined8 *)param_1,uVar2);
  Memory::free_static((void *)param_1,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::~RenderingContextDriverVulkan() */

void __thiscall
RenderingContextDriverVulkan::~RenderingContextDriverVulkan(RenderingContextDriverVulkan *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  void *pvVar9;
  
  *(undefined ***)this = &PTR__RenderingContextDriverVulkan_0010b048;
  if ((*(long *)(this + 0xd0) != 0) && (pcVar4 = *(code **)(this + 0x120), pcVar4 != (code *)0x0)) {
    uVar6 = get_allocation_callbacks(0x3b9cbe00);
    (*pcVar4)(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0xd0),uVar6);
  }
  if ((*(long *)(this + 0xd8) != 0) && (pcVar4 = *(code **)(this + 0x150), pcVar4 != (code *)0x0)) {
    uVar6 = get_allocation_callbacks(0x3b9af4f8);
    (*pcVar4)(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0xd8),uVar6);
  }
  pcVar4 = _vkDestroyInstance;
  if (*(long *)(this + 0x38) != 0) {
    get_allocation_callbacks(1);
    (*pcVar4)(*(undefined8 *)(this + 0x38));
  }
  pvVar9 = *(void **)(this + 200);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xc0) != 0) {
      lVar8 = 0;
      do {
        piVar7 = (int *)(lVar8 * 0x10 + (long)pvVar9);
        if (*(void **)(piVar7 + 2) != (void *)0x0) {
          if (*piVar7 != 0) {
            *piVar7 = 0;
          }
          Memory::free_static(*(void **)(piVar7 + 2),false);
          pvVar9 = *(void **)(this + 200);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0xc0));
      *(undefined4 *)(this + 0xc0) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_00102d91;
    }
    Memory::free_static(pvVar9,false);
  }
LAB_00102d91:
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    if (*(int *)(this + 0xb0) != 0) {
      *(undefined4 *)(this + 0xb0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xb8),false);
  }
  pvVar9 = *(void **)(this + 0xa8);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xa0) != 0) {
      lVar8 = 0;
      do {
        plVar2 = (long *)((long)pvVar9 + lVar8 * 0x18);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
          pvVar9 = *(void **)(this + 0xa8);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0xa0));
      *(undefined4 *)(this + 0xa0) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_00102e2c;
    }
    Memory::free_static(pvVar9,false);
  }
LAB_00102e2c:
  pvVar9 = *(void **)(this + 0x78);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x9c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4) != 0) {
        memset(*(void **)(this + 0x90),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4) << 2);
        if (*(int *)(this + 0x9c) == 0) goto LAB_00102f90;
      }
      lVar8 = 0;
      do {
        plVar2 = (long *)((long)pvVar9 + lVar8 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
          pvVar9 = *(void **)(this + 0x78);
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x9c));
      *(undefined4 *)(this + 0x9c) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_00102ecc;
    }
LAB_00102f90:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x88),false);
    Memory::free_static(*(void **)(this + 0x80),false);
    Memory::free_static(*(void **)(this + 0x90),false);
  }
LAB_00102ecc:
  pvVar9 = *(void **)(this + 0x50);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x74) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x74) = 0;
        *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x58) + lVar8) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x58) + lVar8) = 0;
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)((long)pvVar9 + 0x10) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar5 = *(long *)((long)pvVar9 + 0x10);
                *(undefined8 *)((long)pvVar9 + 0x10) = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar9 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar3 << 2 != lVar8);
        *(undefined4 *)(this + 0x74) = 0;
        *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00102f7f;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x58),false);
    RenderingContextDriver::~RenderingContextDriver((RenderingContextDriver *)this);
    return;
  }
LAB_00102f7f:
  RenderingContextDriver::~RenderingContextDriver((RenderingContextDriver *)this);
  return;
}



/* RenderingContextDriverVulkan::~RenderingContextDriverVulkan() */

void __thiscall
RenderingContextDriverVulkan::~RenderingContextDriverVulkan(RenderingContextDriverVulkan *this)

{
  ~RenderingContextDriverVulkan(this);
  operator_delete(this,0x178);
  return;
}



/* _FUN(void*, void*, unsigned long, unsigned long, VkSystemAllocationScope) */

long * RenderingContextDriverVulkan::get_allocation_callbacks(VkObjectType)::
       {lambda(void*,void*,unsigned_long,unsigned_long,VkSystemAllocationScope)#1}::_FUN
                 (undefined4 *param_1,long param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    uVar1 = *(ulong *)(param_2 + -8);
    plVar3 = (long *)(param_2 - uVar1);
    LOCK();
    driver_memory_total_memory = driver_memory_total_memory - *plVar3;
    UNLOCK();
    LOCK();
    driver_memory_total_memory = driver_memory_total_memory + param_3;
    UNLOCK();
    LOCK();
    (&driver_memory_tracker)[(long)*(int *)((long)plVar3 + 0xc) * 5 + (long)(int)plVar3[1]] =
         (&driver_memory_tracker)[(long)*(int *)((long)plVar3 + 0xc) * 5 + (long)(int)plVar3[1]] -
         *plVar3;
    UNLOCK();
    LOCK();
    (&driver_memory_tracker)[(long)*(int *)((long)plVar3 + 0xc) * 5 + (long)(int)plVar3[1]] =
         (&driver_memory_tracker)[(long)*(int *)((long)plVar3 + 0xc) * 5 + (long)(int)plVar3[1]] +
         param_3;
    UNLOCK();
    plVar3 = (long *)Memory::realloc_aligned_static(plVar3,param_3 + uVar1,*plVar3 + uVar1,uVar1);
    if (plVar3 != (long *)0x0) {
      *plVar3 = param_3;
      plVar3 = (long *)((long)plVar3 + uVar1);
    }
    return plVar3;
  }
  lVar2 = get_allocation_callbacks(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0010311a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar3 = (long *)(**(code **)(lVar2 + 8))(param_1,param_3,param_4,param_5);
  return plVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::RenderingContextDriverVulkan() */

void __thiscall
RenderingContextDriverVulkan::RenderingContextDriverVulkan(RenderingContextDriverVulkan *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_0010b428;
  uVar1 = _LC104;
  *(undefined ***)this = &PTR__RenderingContextDriverVulkan_0010b048;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0x400000;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x98) = uVar1;
  *(undefined8 *)(this + 0xa0) = uVar2;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x150) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::_initialize_vulkan_version() */

undefined8 __thiscall
RenderingContextDriverVulkan::_initialize_vulkan_version(RenderingContextDriverVulkan *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = (code *)(*_vkGetInstanceProcAddr)(0,"vkEnumerateInstanceVersion");
  if (pcVar4 == (code *)0x0) {
    Variant::Variant((Variant *)local_38,
                     "vkEnumerateInstanceVersion not available, assuming Vulkan 1.0.");
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
    *(undefined4 *)(this + 0x40) = 0x400000;
  }
  else {
    iVar3 = (*pcVar4)(&local_40);
    if (iVar3 != 0) {
      _err_print_error("_initialize_vulkan_version",
                       "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x198,
                       "Method/function failed. Returning: ERR_CANT_CREATE",0,0);
      uVar5 = 0x14;
      goto LAB_0010325b;
    }
    *(undefined4 *)(this + 0x40) = (undefined4)local_40;
  }
  uVar5 = 0;
LAB_0010325b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::_find_validation_layers(LocalVector<char const*, unsigned int,
   false, true>&) const */

undefined8 __thiscall
RenderingContextDriverVulkan::_find_validation_layers
          (RenderingContextDriverVulkan *this,LocalVector *param_1)

{
  char **ppcVar1;
  char **ppcVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  char **ppcVar12;
  char ***pppcVar13;
  char *__s1;
  long in_FS_OFFSET;
  char **local_e0;
  uint local_d0;
  uint local_bc;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  char **local_78 [5];
  undefined8 local_50;
  char **local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != 0) {
    *(undefined4 *)param_1 = 0;
  }
  local_bc = 0;
  iVar5 = (*_vkEnumerateInstanceLayerProperties)(&local_bc,0);
  if (iVar5 == 0) {
    uVar6 = (ulong)local_bc;
    if (local_bc != 0) {
      uVar10 = 0;
      pcVar7 = (char *)Memory::realloc_static((void *)0x0,uVar6 * 0x208,false);
      if (pcVar7 == (char *)0x0) {
        LocalVector<VkLayerProperties,unsigned_int,false,true>::resize(uVar10);
        goto LAB_001036be;
      }
      iVar5 = (*_vkEnumerateInstanceLayerProperties)(&local_bc);
      if (iVar5 == 0) {
        local_78[1] = (char **)0x1;
        local_b8 = "VK_LAYER_KHRONOS_validation";
        local_b0 = "VK_LAYER_LUNARG_standard_validation";
        pppcVar13 = local_78;
        local_78[3] = (char **)0x1;
        local_50 = 5;
        local_88 = "VK_LAYER_GOOGLE_unique_objects";
        local_78[0] = &local_b8;
        local_78[2] = &local_b0;
        local_78[4] = &local_a8;
        local_a8 = "VK_LAYER_GOOGLE_threading";
        pcStack_a0 = "VK_LAYER_LUNARG_parameter_validation";
        local_98 = "VK_LAYER_LUNARG_object_tracker";
        pcStack_90 = "VK_LAYER_LUNARG_core_validation";
LAB_001034e0:
        ppcVar2 = pppcVar13[1];
        local_e0 = *pppcVar13;
        ppcVar1 = local_e0 + (long)ppcVar2;
        ppcVar12 = local_e0;
        if (ppcVar1 == local_e0) goto LAB_001035d0;
        do {
          pcVar3 = *ppcVar12;
          __s1 = pcVar7;
          while (iVar5 = strcmp(__s1,pcVar3), iVar5 != 0) {
            __s1 = __s1 + 0x208;
            if (pcVar7 + uVar6 * 0x208 == __s1) goto LAB_001035d0;
          }
          ppcVar12 = ppcVar12 + 1;
        } while (ppcVar1 != ppcVar12);
        uVar10 = *(uint *)(param_1 + 4);
        pvVar8 = *(void **)(param_1 + 8);
        local_d0 = (uint)ppcVar2;
        if (uVar10 < local_d0) {
          *(uint *)(param_1 + 4) = local_d0;
          pvVar8 = (void *)Memory::realloc_static(pvVar8,((ulong)ppcVar2 & 0xffffffff) << 3,false);
          *(void **)(param_1 + 8) = pvVar8;
          if (pvVar8 == (void *)0x0) {
            _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar10 = *(uint *)(param_1 + 4);
        }
        uVar11 = *(uint *)param_1;
        while( true ) {
          pcVar3 = *local_e0;
          if (uVar11 == uVar10) {
            *(uint *)(param_1 + 4) = uVar11 + 1;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,(ulong)(uVar11 + 1) * 8,false);
            *(void **)(param_1 + 8) = pvVar8;
            if (pvVar8 == (void *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar11 = *(uint *)param_1;
          }
          uVar6 = (ulong)uVar11;
          uVar11 = uVar11 + 1;
          local_e0 = local_e0 + 1;
          *(uint *)param_1 = uVar11;
          *(char **)((long)pvVar8 + uVar6 * 8) = pcVar3;
          if (ppcVar1 == local_e0) break;
          uVar10 = *(uint *)(param_1 + 4);
        }
LAB_001035e2:
        Memory::free_static(pcVar7,false);
        goto LAB_001033a1;
      }
      _err_print_error("_find_validation_layers",
                       "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x1fb,
                       "Condition \"err != VK_SUCCESS\" is true. Returning: ERR_CANT_CREATE",0,0);
      Memory::free_static(pcVar7,false);
      goto LAB_00103618;
    }
LAB_001033a1:
    uVar9 = 0;
  }
  else {
    _err_print_error("_find_validation_layers","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                     0x1f6,"Condition \"err != VK_SUCCESS\" is true. Returning: ERR_CANT_CREATE",0,0
                    );
LAB_00103618:
    uVar9 = 0x14;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
LAB_001036be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001035d0:
  pppcVar13 = pppcVar13 + 2;
  if (pppcVar13 == &local_48) goto LAB_001035e2;
  goto LAB_001034e0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::_initialize_instance() */

int __thiscall
RenderingContextDriverVulkan::_initialize_instance(RenderingContextDriverVulkan *this)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
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
  char cVar29;
  char cVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  void *pvVar34;
  byte *pbVar35;
  long lVar36;
  void *pvVar37;
  ulong uVar38;
  undefined4 uVar39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  uint uVar47;
  long in_FS_OFFSET;
  char local_170;
  long local_148;
  long local_140;
  undefined8 local_138;
  void *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  RenderingContextDriverVulkan *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  StringName *pSStack_90;
  undefined4 uStack_88;
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined4 local_64;
  void *local_60;
  int local_58 [6];
  long local_40;
  
  pvVar37 = (void *)0x0;
  uVar47 = *(uint *)(this + 0x9c);
  uVar46 = (ulong)uVar47;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar47 == 0) {
LAB_0010373e:
    iVar32 = 0;
  }
  else {
    pvVar37 = (void *)Memory::realloc_static((void *)0x0,uVar46 << 3,false);
    if (pvVar37 == (void *)0x0) {
      _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iVar31 = *(int *)(this + 0x9c);
    if (iVar31 == 0) goto LAB_0010373e;
    puVar4 = *(undefined8 **)(this + 0x78);
    uVar41 = 0;
    uVar33 = *puVar4;
    uVar38 = uVar41;
    if (uVar47 == 0) goto LAB_001043f0;
    while( true ) {
      uVar47 = (uint)uVar46;
      iVar32 = (int)uVar38 + 1;
      *(undefined8 *)((long)pvVar37 + uVar41 * 8) = uVar33;
      if (iVar31 <= iVar32) break;
      uVar41 = uVar41 + 1;
      uVar33 = puVar4[uVar41];
      uVar38 = uVar41 & 0xffffffff;
      if (uVar47 == (uint)uVar41) {
LAB_001043f0:
        uVar46 = (ulong)(uVar47 + 1);
        pvVar37 = (void *)Memory::realloc_static(pvVar37,uVar46 << 3,false);
        if (pvVar37 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
  }
  iVar31 = *(int *)(this + 0x40);
  if (*(int *)(this + 0x40) != 0x400000) {
    iVar31 = 0x402000;
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)local_c8,"application/config/name",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_98);
  String::utf8();
  if (CONCAT44(uStack_94,local_98) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_94,local_98) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar36 = CONCAT44(uStack_94,local_98);
      local_98 = 0;
      uStack_94 = 0;
      Memory::free_static((void *)(lVar36 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8._0_8_ != 0)) {
    StringName::unref();
  }
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  uVar33 = CharString::get_data();
  local_d8._8_4_ = 0x1004001;
  local_e8._0_8_ = uVar33;
  local_d8._0_8_ = "Godot Engine";
  local_d8._12_4_ = iVar31;
  local_138 = 0;
  local_130 = (void *)0x0;
  if (*(code **)(*(long *)this + 0xe8) == _use_validation_layers) {
    Engine::get_singleton();
    cVar29 = Engine::is_validation_layers_enabled();
  }
  else {
    cVar29 = (**(code **)(*(long *)this + 0xe8))(this);
  }
  if (cVar29 == '\0') {
    pvVar34 = (void *)0x0;
    uVar39 = 0;
  }
  else {
    iVar31 = _find_validation_layers(this,(LocalVector *)&local_138);
    if (iVar31 != 0) {
      _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x2b8,"Condition \"err != OK\" is true. Returning: err",0,0);
      goto LAB_00104118;
    }
    pvVar34 = local_130;
    uVar39 = (undefined4)local_138;
  }
  local_64 = 0;
  local_98 = 1;
  local_74._8_4_ = iVar32;
  local_74._0_8_ = pvVar34;
  local_74._12_4_ = 0;
  local_74 = local_74 << 0x20;
  local_84._8_4_ = uVar39;
  local_84._0_8_ = local_f8;
  local_84._12_4_ = 0;
  local_84 = local_84 << 0x20;
  local_108 = (RenderingContextDriverVulkan *)0x0;
  local_140 = 0;
  uStack_94 = 0;
  pSStack_90 = (StringName *)0x0;
  uStack_88 = 0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_60 = pvVar37;
  CharString::copy_from((char *)&local_140);
  if ((*(long *)(this + 0x78) != 0) && (*(int *)(this + 0x9c) != 0)) {
    uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4);
    lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x98) * 8);
    pbVar35 = (byte *)CharString::get_data();
    bVar2 = *pbVar35;
    if (bVar2 == 0) {
      uVar46 = 0x1505;
      uVar44 = 0x1505;
    }
    else {
      uVar44 = 0x1505;
      do {
        pbVar35 = pbVar35 + 1;
        uVar44 = uVar44 * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar35;
      } while (bVar2 != 0);
      if (uVar44 == 0) {
        uVar44 = 1;
      }
      uVar46 = (ulong)uVar44;
    }
    uVar38 = CONCAT44(0,uVar47);
    lVar42 = *(long *)(this + 0x90);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar46 * lVar36;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar38;
    lVar40 = SUB168(auVar5 * auVar17,8);
    uVar43 = *(uint *)(lVar42 + lVar40 * 4);
    if (uVar43 != 0) {
      uVar45 = 0;
      iVar31 = SUB164(auVar5 * auVar17,8);
      do {
        if (uVar43 == uVar44) {
          local_170 = CharString::operator==
                                ((CharString *)
                                 (*(long *)(this + 0x78) +
                                 (ulong)*(uint *)(*(long *)(this + 0x80) + lVar40 * 4) * 8),
                                 (CharString *)&local_140);
          if (local_170 != '\0') goto LAB_00103b2a;
          lVar42 = *(long *)(this + 0x90);
        }
        uVar45 = uVar45 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar31 + 1) * lVar36;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar38;
        lVar40 = SUB168(auVar6 * auVar18,8);
        uVar43 = *(uint *)(lVar42 + lVar40 * 4);
        iVar31 = SUB164(auVar6 * auVar18,8);
      } while ((uVar43 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar43 * lVar36, auVar19._8_8_ = 0,
              auVar19._0_8_ = uVar38, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar47 + iVar31) - SUB164(auVar7 * auVar19,8)) * lVar36,
              auVar20._8_8_ = 0, auVar20._0_8_ = uVar38, uVar45 <= SUB164(auVar8 * auVar20,8)));
    }
  }
  local_170 = '\0';
LAB_00103b2a:
  lVar36 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar36 + -0x10),false);
    }
  }
  local_140 = 0;
  CharString::copy_from((char *)&local_140);
  if ((*(long *)(this + 0x78) != 0) && (*(int *)(this + 0x9c) != 0)) {
    uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4);
    lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x98) * 8);
    pbVar35 = (byte *)CharString::get_data();
    bVar2 = *pbVar35;
    if (bVar2 == 0) {
      uVar46 = 0x1505;
      uVar44 = 0x1505;
    }
    else {
      uVar44 = 0x1505;
      do {
        pbVar35 = pbVar35 + 1;
        uVar44 = uVar44 * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar35;
      } while (bVar2 != 0);
      if (uVar44 == 0) {
        uVar44 = 1;
      }
      uVar46 = (ulong)uVar44;
    }
    uVar38 = CONCAT44(0,uVar47);
    lVar42 = *(long *)(this + 0x90);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar46 * lVar36;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar38;
    lVar40 = SUB168(auVar9 * auVar21,8);
    uVar43 = *(uint *)(lVar42 + lVar40 * 4);
    if (uVar43 != 0) {
      uVar45 = 0;
      iVar31 = SUB164(auVar9 * auVar21,8);
      do {
        if (uVar43 == uVar44) {
          cVar29 = CharString::operator==
                             ((CharString *)
                              (*(long *)(this + 0x78) +
                              (ulong)*(uint *)(*(long *)(this + 0x80) + lVar40 * 4) * 8),
                              (CharString *)&local_140);
          if (cVar29 != '\0') {
            if (local_140 != 0) goto LAB_00103cfe;
            cVar29 = local_170;
            if (local_170 != '\0') goto LAB_0010423e;
            goto LAB_00103d33;
          }
          lVar42 = *(long *)(this + 0x90);
        }
        uVar45 = uVar45 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar31 + 1) * lVar36;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar38;
        lVar40 = SUB168(auVar10 * auVar22,8);
        uVar43 = *(uint *)(lVar42 + lVar40 * 4);
        iVar31 = SUB164(auVar10 * auVar22,8);
      } while ((uVar43 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar43 * lVar36, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar38, auVar12._8_8_ = 0,
              auVar12._0_8_ = (ulong)((uVar47 + iVar31) - SUB164(auVar11 * auVar23,8)) * lVar36,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar38, uVar45 <= SUB164(auVar12 * auVar24,8)));
    }
  }
  cVar29 = '\0';
  if (local_140 == 0) {
    if (local_170 != '\0') {
      cVar29 = '\0';
      goto LAB_0010423e;
    }
LAB_00104458:
    cVar29 = '\0';
  }
  else {
LAB_00103cfe:
    lVar36 = local_140;
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar36 + -0x10),false);
    }
    if (local_170 == '\0') {
      if (cVar29 == '\0') goto LAB_00104458;
LAB_00103d33:
      local_128._0_4_ = 0x3b9af4f8;
      cVar29 = '\x01';
      local_118._8_8_ = _debug_report_callback;
      local_118._0_4_ = 0x1f;
      local_108 = this;
      pSStack_90 = (StringName *)local_128;
    }
    else {
LAB_0010423e:
      local_c8._0_4_ = 0x3b9cbe04;
      local_c8._8_8_ = 0;
      local_b8._8_4_ = 7;
      local_b8._0_8_ = _LC127;
      local_a8._8_8_ = this;
      local_a8._0_8_ = _debug_messenger_callback;
      pSStack_90 = (StringName *)local_c8;
    }
  }
  iVar31 = (**(code **)(*(long *)this + 0xf0))(this,(Variant *)&local_98,this + 0x38);
  if (iVar31 != 0) {
    _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                     0x2df,"Condition \"err != OK\" is true. Returning: err",0,0);
    goto LAB_00104118;
  }
  volkLoadInstance(*(undefined8 *)(this + 0x38));
  local_140 = 0;
  CharString::copy_from((char *)&local_140);
  if ((*(long *)(this + 0x78) != 0) && (*(int *)(this + 0x9c) != 0)) {
    uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4);
    lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x98) * 8);
    pbVar35 = (byte *)CharString::get_data();
    bVar2 = *pbVar35;
    if (bVar2 == 0) {
      uVar46 = 0x1505;
      uVar44 = 0x1505;
    }
    else {
      uVar44 = 0x1505;
      do {
        pbVar35 = pbVar35 + 1;
        uVar44 = uVar44 * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar35;
      } while (bVar2 != 0);
      if (uVar44 == 0) {
        uVar44 = 1;
      }
      uVar46 = (ulong)uVar44;
    }
    uVar38 = CONCAT44(0,uVar47);
    lVar42 = *(long *)(this + 0x90);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar46 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar38;
    lVar40 = SUB168(auVar13 * auVar25,8);
    uVar43 = *(uint *)(lVar42 + lVar40 * 4);
    if (uVar43 != 0) {
      uVar45 = 0;
      iVar32 = SUB164(auVar13 * auVar25,8);
      do {
        if (uVar43 == uVar44) {
          cVar30 = CharString::operator==
                             ((CharString *)
                              (*(long *)(this + 0x78) +
                              (ulong)*(uint *)(*(long *)(this + 0x80) + lVar40 * 4) * 8),
                              (CharString *)&local_140);
          lVar42 = local_140;
          if (cVar30 != '\0') {
            if (local_140 != 0) {
              LOCK();
              plVar1 = (long *)(local_140 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_140 = 0;
                Memory::free_static((void *)(lVar42 + -0x10),false);
              }
            }
            uVar33 = (*_vkGetInstanceProcAddr)
                               (*(undefined8 *)(this + 0x38),"vkGetPhysicalDeviceFeatures2");
            *(undefined8 *)(this + 0xe0) = uVar33;
            lVar36 = (*_vkGetInstanceProcAddr)
                               (*(undefined8 *)(this + 0x38),"vkGetPhysicalDeviceProperties2");
            *(long *)(this + 0xe8) = lVar36;
            if (*(long *)(this + 0xe0) == 0) {
              uVar33 = (*_vkGetInstanceProcAddr)
                                 (*(undefined8 *)(this + 0x38),"vkGetPhysicalDeviceFeatures2KHR");
              *(undefined8 *)(this + 0xe0) = uVar33;
              lVar36 = *(long *)(this + 0xe8);
            }
            uVar33 = *(undefined8 *)(this + 0x38);
            if (lVar36 != 0) goto LAB_00103f4c;
            uVar33 = (*_vkGetInstanceProcAddr)(uVar33,"vkGetPhysicalDeviceProperties2KHR");
            *(undefined8 *)(this + 0xe8) = uVar33;
            goto LAB_00104216;
          }
          lVar42 = *(long *)(this + 0x90);
        }
        uVar45 = uVar45 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar32 + 1) * lVar36;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar38;
        lVar40 = SUB168(auVar14 * auVar26,8);
        uVar43 = *(uint *)(lVar42 + lVar40 * 4);
        iVar32 = SUB164(auVar14 * auVar26,8);
      } while ((uVar43 != 0) &&
              (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar43 * lVar36, auVar27._8_8_ = 0,
              auVar27._0_8_ = uVar38, auVar16._8_8_ = 0,
              auVar16._0_8_ = (ulong)((uVar47 + iVar32) - SUB164(auVar15 * auVar27,8)) * lVar36,
              auVar28._8_8_ = 0, auVar28._0_8_ = uVar38, uVar45 <= SUB164(auVar16 * auVar28,8)));
    }
  }
  lVar36 = local_140;
  if (local_140 == 0) {
LAB_00104216:
    uVar33 = *(undefined8 *)(this + 0x38);
  }
  else {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00104216;
    local_140 = 0;
    Memory::free_static((void *)(lVar36 + -0x10),false);
    uVar33 = *(undefined8 *)(this + 0x38);
  }
LAB_00103f4c:
  uVar33 = (*_vkGetInstanceProcAddr)(uVar33,"vkGetDeviceProcAddr");
  *(undefined8 *)(this + 0xf0) = uVar33;
  uVar33 = (*_vkGetInstanceProcAddr)
                     (*(undefined8 *)(this + 0x38),"vkGetPhysicalDeviceSurfaceSupportKHR");
  *(undefined8 *)(this + 0xf8) = uVar33;
  uVar33 = (*_vkGetInstanceProcAddr)
                     (*(undefined8 *)(this + 0x38),"vkGetPhysicalDeviceSurfaceFormatsKHR");
  *(undefined8 *)(this + 0x100) = uVar33;
  uVar33 = (*_vkGetInstanceProcAddr)
                     (*(undefined8 *)(this + 0x38),"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
  *(undefined8 *)(this + 0x108) = uVar33;
  uVar33 = (*_vkGetInstanceProcAddr)(*(undefined8 *)(this + 0x38));
  *(undefined8 *)(this + 0x110) = uVar33;
  if (local_170 == '\0') {
    if (cVar29 == '\0') goto LAB_00104118;
    uVar33 = (*_vkGetInstanceProcAddr)
                       (*(undefined8 *)(this + 0x38),"vkCreateDebugReportCallbackEXT");
    *(undefined8 *)(this + 0x140) = uVar33;
    uVar33 = (*_vkGetInstanceProcAddr)(*(undefined8 *)(this + 0x38),"vkDebugReportMessageEXT");
    *(undefined8 *)(this + 0x148) = uVar33;
    lVar36 = (*_vkGetInstanceProcAddr)
                       (*(undefined8 *)(this + 0x38),"vkDestroyDebugReportCallbackEXT");
    pcVar3 = *(code **)(this + 0x140);
    *(long *)(this + 0x150) = lVar36;
    if (((pcVar3 == (code *)0x0) || (*(long *)(this + 0x148) == 0)) || (lVar36 == 0)) {
      _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x31b,"Method/function failed. Returning: ERR_CANT_CREATE",
                       "GetProcAddr: Failed to init VK_EXT_debug_report\nGetProcAddr: Failure",0,0);
    }
    else {
      uVar33 = get_allocation_callbacks(0x3b9af4f8);
      iVar32 = (*pcVar3)(*(undefined8 *)(this + 0x38),local_128,uVar33,this + 0xd8);
      if (iVar32 == -1) {
        _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp"
                         ,0x323,"Method/function failed. Returning: ERR_CANT_CREATE",
                         "CreateDebugReportCallbackEXT: out of host memory\nCreateDebugReportCallbackEXT Failure"
                         ,0,0);
      }
      else {
        if (iVar32 == 0) goto LAB_00104118;
        _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp"
                         ,0x326,"Method/function failed. Returning: ERR_CANT_CREATE",
                         "CreateDebugReportCallbackEXT: unknown failure\nCreateDebugReportCallbackEXT Failure"
                         ,0,0);
      }
    }
  }
  else {
    uVar33 = (*_vkGetInstanceProcAddr)
                       (*(undefined8 *)(this + 0x38),"vkCreateDebugUtilsMessengerEXT");
    *(undefined8 *)(this + 0x118) = uVar33;
    uVar33 = (*_vkGetInstanceProcAddr)
                       (*(undefined8 *)(this + 0x38),"vkDestroyDebugUtilsMessengerEXT");
    *(undefined8 *)(this + 0x120) = uVar33;
    uVar33 = (*_vkGetInstanceProcAddr)(*(undefined8 *)(this + 0x38),"vkCmdBeginDebugUtilsLabelEXT");
    *(undefined8 *)(this + 0x128) = uVar33;
    uVar33 = (*_vkGetInstanceProcAddr)(*(undefined8 *)(this + 0x38),"vkCmdEndDebugUtilsLabelEXT");
    *(undefined8 *)(this + 0x130) = uVar33;
    lVar36 = (*_vkGetInstanceProcAddr)(*(undefined8 *)(this + 0x38),"vkSetDebugUtilsObjectNameEXT");
    pcVar3 = *(code **)(this + 0x118);
    *(long *)(this + 0x138) = lVar36;
    if (((pcVar3 == (code *)0x0) || (*(long *)(this + 0x120) == 0)) ||
       ((*(long *)(this + 0x128) == 0 || ((*(long *)(this + 0x130) == 0 || (lVar36 == 0)))))) {
      _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x307,"Method/function failed. Returning: ERR_CANT_CREATE",
                       "GetProcAddr: Failed to init VK_EXT_debug_utils\nGetProcAddr: Failure",0,0);
    }
    else {
      uVar33 = get_allocation_callbacks(0x3b9cbe00);
      iVar32 = (*pcVar3)(*(undefined8 *)(this + 0x38),(StringName *)local_c8,uVar33,this + 0xd0);
      if (iVar32 == -1) {
        _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp"
                         ,0x30f,"Method/function failed. Returning: ERR_CANT_CREATE",
                         "CreateDebugUtilsMessengerEXT: out of host memory\nCreateDebugUtilsMessengerEXT Failure"
                         ,0,0);
      }
      else {
        if (iVar32 == 0) goto LAB_00104118;
        _err_print_error("_initialize_instance","drivers/vulkan/rendering_context_driver_vulkan.cpp"
                         ,0x312,"Method/function failed. Returning: ERR_CANT_CREATE",
                         "CreateDebugUtilsMessengerEXT: unknown failure\nCreateDebugUtilsMessengerEXT Failure"
                         ,0,0);
      }
    }
  }
  iVar31 = 0x14;
LAB_00104118:
  if (local_130 != (void *)0x0) {
    Memory::free_static(local_130,false);
  }
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_148 + -0x10),false);
    }
  }
  if (pvVar37 != (void *)0x0) {
    Memory::free_static(pvVar37,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar31;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::_initialize_devices() */

undefined8 __thiscall
RenderingContextDriverVulkan::_initialize_devices(RenderingContextDriverVulkan *this)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int *piVar10;
  byte extraout_var;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  StrRange *pSVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  uint uVar23;
  long in_FS_OFFSET;
  uint local_390;
  undefined4 uStack_38c;
  char *local_388;
  undefined8 local_380;
  undefined1 local_378 [4];
  uint local_374;
  int local_370;
  uint local_36c;
  undefined4 local_368;
  undefined1 local_364 [804];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (VulkanHooks::singleton == (long *)0x0) {
    local_390 = 0;
    iVar9 = (*_vkEnumeratePhysicalDevices)(*(undefined8 *)(this + 0x38),&local_390,0);
    uVar17 = local_390;
    if (iVar9 != 0) {
      _err_print_error("_initialize_devices","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x33d,"Condition \"err != VK_SUCCESS\" is true. Returning: ERR_CANT_CREATE",0
                       ,0);
LAB_00104dc5:
      uVar13 = 0x14;
LAB_00104dca:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar13;
      }
LAB_001050d8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_390 == 0) {
      _err_print_error("_initialize_devices","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x33e,
                       "Condition \"physical_device_count == 0\" is true. Returning: ERR_CANT_CREATE"
                       ,
                       "vkEnumeratePhysicalDevices reported zero accessible devices.\n\nDo you have a compatible Vulkan installable client driver (ICD) installed?\nvkEnumeratePhysicalDevices Failure."
                       ,0,0);
      goto LAB_00104dc5;
    }
    uVar23 = *(uint *)(this + 0xa0);
    if (uVar23 <= local_390) {
      if (local_390 <= uVar23) goto LAB_00104bbc;
      if (local_390 <= *(uint *)(this + 0xa4)) {
LAB_00104c7e:
        lVar22 = (ulong)uVar23 * 0x18;
        do {
          pSVar15 = (StrRange *)(*(long *)(this + 0xa8) + lVar22);
          lVar22 = lVar22 + 0x18;
          *(undefined8 *)pSVar15 = 0;
          local_388 = "Unknown";
          local_380 = 7;
          String::parse_latin1(pSVar15);
          pSVar15[0x10] = (StrRange)0x0;
          *(undefined8 *)(pSVar15 + 8) = 0;
        } while (lVar22 != ((ulong)uVar23 + 1 + (ulong)((uVar17 - 1) - uVar23)) * 0x18);
        goto LAB_00104bb0;
      }
      *(uint *)(this + 0xa4) = local_390;
      pvVar19 = *(void **)(this + 0xa8);
      lVar22 = Memory::realloc_static(pvVar19,(ulong)local_390 * 0x18,false);
      uVar23 = (uint)pvVar19;
      *(long *)(this + 0xa8) = lVar22;
      if (lVar22 != 0) {
        uVar23 = *(uint *)(this + 0xa0);
        if (uVar17 <= uVar23) goto LAB_00104bb0;
        goto LAB_00104c7e;
      }
      LocalVector<VkLayerProperties,unsigned_int,false,true>::resize(uVar23);
LAB_001050ce:
      LocalVector<VkLayerProperties,unsigned_int,false,true>::resize(uVar23);
LAB_001050d3:
      LocalVector<VkLayerProperties,unsigned_int,false,true>::resize(uVar23);
      goto LAB_001050d8;
    }
    lVar22 = (ulong)local_390 * 0x18;
    uVar23 = local_390;
    do {
      plVar16 = (long *)(*(long *)(this + 0xa8) + lVar22);
      if (*plVar16 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar16 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar16;
          *plVar16 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 0x18;
    } while (uVar23 < *(uint *)(this + 0xa0));
LAB_00104bb0:
    *(uint *)(this + 0xa0) = uVar17;
LAB_00104bbc:
    uVar17 = local_390;
    if (*(uint *)(this + 0xb0) <= local_390) {
      if (local_390 <= *(uint *)(this + 0xb0)) goto LAB_00104bd2;
      if (local_390 <= *(uint *)(this + 0xb4)) {
LAB_00104d29:
        *(uint *)(this + 0xb0) = uVar17;
        goto LAB_00104bd2;
      }
      *(uint *)(this + 0xb4) = local_390;
      pvVar19 = *(void **)(this + 0xb8);
      lVar22 = Memory::realloc_static(pvVar19,(ulong)local_390 << 3,false);
      uVar23 = (uint)pvVar19;
      *(long *)(this + 0xb8) = lVar22;
      if (lVar22 != 0) goto LAB_00104d29;
      goto LAB_001050d3;
    }
    *(uint *)(this + 0xb0) = local_390;
LAB_00104bd2:
    uVar3 = local_390;
    uVar17 = *(uint *)(this + 0xc0);
    if (local_390 < uVar17) {
      lVar22 = (ulong)local_390 << 4;
      uVar17 = local_390;
      do {
        piVar10 = (int *)(*(long *)(this + 200) + lVar22);
        if (*(void **)(piVar10 + 2) != (void *)0x0) {
          if (*piVar10 != 0) {
            *piVar10 = 0;
          }
          Memory::free_static(*(void **)(piVar10 + 2),false);
        }
        uVar17 = uVar17 + 1;
        lVar22 = lVar22 + 0x10;
      } while (uVar17 < *(uint *)(this + 0xc0));
LAB_00104c27:
      *(uint *)(this + 0xc0) = uVar3;
    }
    else if (uVar17 < local_390) {
      if (*(uint *)(this + 0xc4) < local_390) {
        *(uint *)(this + 0xc4) = local_390;
        pvVar19 = *(void **)(this + 200);
        lVar22 = Memory::realloc_static(pvVar19,(ulong)local_390 << 4,false);
        uVar23 = (uint)pvVar19;
        *(long *)(this + 200) = lVar22;
        if (lVar22 == 0) goto LAB_001050ce;
        uVar17 = *(uint *)(this + 0xc0);
        if (uVar3 <= uVar17) goto LAB_00104c27;
      }
      lVar22 = *(long *)(this + 200);
      puVar14 = (undefined8 *)((ulong)uVar17 * 0x10 + lVar22);
      do {
        *puVar14 = 0;
        puVar12 = puVar14 + 2;
        puVar14[1] = 0;
        puVar14 = puVar12;
      } while (puVar12 !=
               (undefined8 *)
               (lVar22 + 0x10 + ((ulong)((uVar3 - 1) - uVar17) + (ulong)uVar17) * 0x10));
      goto LAB_00104c27;
    }
    iVar9 = (*_vkEnumeratePhysicalDevices)
                      (*(undefined8 *)(this + 0x38),&local_390,*(undefined8 *)(this + 0xb8));
    if (iVar9 != 0) {
      _err_print_error("_initialize_devices","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x344,"Condition \"err != VK_SUCCESS\" is true. Returning: ERR_CANT_CREATE",0
                       ,0);
      goto LAB_00104dc5;
    }
    if (*(int *)(this + 0xb0) == 0) {
LAB_00104ef0:
      uVar13 = 0;
      goto LAB_00104dca;
    }
    puVar14 = *(undefined8 **)(this + 0xb8);
  }
  else {
    cVar7 = (**(code **)(*VulkanHooks::singleton + 0x18))();
    if (cVar7 == '\0') {
      _err_print_error("_initialize_devices","drivers/vulkan/rendering_context_driver_vulkan.cpp",
                       0x332,"Condition \"!device_retrieved\" is true. Returning: ERR_CANT_CREATE",0
                       ,0);
      goto LAB_00104dc5;
    }
    if (*(uint *)(this + 0xa0) < 2) {
      if (*(uint *)(this + 0xa0) == 0) {
        pSVar15 = *(StrRange **)(this + 0xa8);
        if (*(int *)(this + 0xa4) == 0) {
          *(undefined4 *)(this + 0xa4) = 1;
          pSVar15 = (StrRange *)Memory::realloc_static(pSVar15,0x18,false);
          *(StrRange **)(this + 0xa8) = pSVar15;
          if (pSVar15 == (StrRange *)0x0) goto LAB_00104eb5;
          if (*(int *)(this + 0xa0) != 0) goto LAB_00104740;
        }
        *(undefined8 *)pSVar15 = 0;
        local_388 = "Unknown";
        local_380 = 7;
        String::parse_latin1(pSVar15);
        *(undefined8 *)(pSVar15 + 8) = 0;
        pSVar15[0x10] = (StrRange)0x0;
        goto LAB_00104740;
      }
    }
    else {
      lVar22 = 0x18;
      uVar17 = 1;
      do {
        plVar16 = (long *)(*(long *)(this + 0xa8) + lVar22);
        if (*plVar16 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar16 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar16;
            *plVar16 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        uVar17 = uVar17 + 1;
        lVar22 = lVar22 + 0x18;
      } while (uVar17 < *(uint *)(this + 0xa0));
LAB_00104740:
      *(undefined4 *)(this + 0xa0) = 1;
    }
    if (*(uint *)(this + 0xb0) < 2) {
      if (*(uint *)(this + 0xb0) == 0) {
        if (*(int *)(this + 0xb4) == 0) {
          *(undefined4 *)(this + 0xb4) = 1;
          lVar22 = Memory::realloc_static(*(void **)(this + 0xb8),8,false);
          *(long *)(this + 0xb8) = lVar22;
          if (lVar22 == 0) goto LAB_00104eb5;
        }
        goto LAB_00104aa0;
      }
      uVar17 = *(uint *)(this + 0xc0);
      if (uVar17 < 2) goto LAB_00104ab9;
LAB_00104770:
      lVar22 = 0;
      do {
        lVar22 = lVar22 + 1;
        piVar10 = (int *)(lVar22 * 0x10 + *(long *)(this + 200));
        if (*(void **)(piVar10 + 2) != (void *)0x0) {
          if (*piVar10 != 0) {
            *piVar10 = 0;
          }
          Memory::free_static(*(void **)(piVar10 + 2),false);
        }
      } while ((int)lVar22 + 1U < *(uint *)(this + 0xc0));
LAB_001047c0:
      *(undefined4 *)(this + 0xc0) = 1;
    }
    else {
LAB_00104aa0:
      *(undefined4 *)(this + 0xb0) = 1;
      uVar17 = *(uint *)(this + 0xc0);
      if (1 < uVar17) goto LAB_00104770;
LAB_00104ab9:
      if (uVar17 == 0) {
        puVar14 = *(undefined8 **)(this + 200);
        if (*(int *)(this + 0xc4) == 0) {
          *(undefined4 *)(this + 0xc4) = 1;
          puVar14 = (undefined8 *)Memory::realloc_static(puVar14,0x10,false);
          *(undefined8 **)(this + 200) = puVar14;
          if (puVar14 == (undefined8 *)0x0) {
LAB_00104eb5:
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          if (*(int *)(this + 0xc0) == 0) goto LAB_00104ad8;
        }
        else {
LAB_00104ad8:
          *puVar14 = 0;
          puVar14[1] = 0;
        }
        goto LAB_001047c0;
      }
    }
    if (*(int *)(this + 0xb0) == 0) {
      uVar20 = 0;
      uVar18 = 0;
      goto LAB_00104a45;
    }
    puVar14 = *(undefined8 **)(this + 0xb8);
    *puVar14 = CONCAT44(uStack_38c,local_390);
  }
  uVar18 = 0;
  while( true ) {
    uVar17 = (uint)uVar18;
    (*_vkGetPhysicalDeviceProperties)(puVar14[uVar18],local_378);
    uVar20 = (ulong)*(uint *)(this + 0xa0);
    if (*(uint *)(this + 0xa0) <= uVar17) break;
    puVar2 = (ulong *)(*(long *)(this + 0xa8) + uVar18 * 0x18);
    String::utf8((char *)&local_388,(int)local_364);
    pcVar6 = local_388;
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == local_388) {
      if (pcVar5 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(pcVar5 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_388 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar5 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(pcVar5 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          uVar20 = *puVar2;
          *puVar2 = 0;
          Memory::free_static((void *)(uVar20 - 0x10),false);
        }
        else {
          *puVar2 = 0;
        }
      }
      *puVar2 = (ulong)local_388;
    }
    *(char *)(puVar2 + 2) = '\0';
    puVar2[1] = CONCAT44(local_368,local_370);
    bVar8 = 0;
    if (((local_370 == 0x5143) && (bVar8 = 0, 0x5ffffff < local_36c)) && (local_374 < 0x801f7000)) {
      String::find((char *)puVar2,0x10832b);
      bVar8 = extraout_var >> 7;
    }
    uVar23 = *(uint *)(this + 0xb0);
    uVar20 = (ulong)uVar23;
    *(byte *)(puVar2 + 2) = bVar8;
    local_388 = (char *)((ulong)local_388 & 0xffffffff00000000);
    if (uVar23 <= uVar17) break;
    (*_vkGetPhysicalDeviceQueueFamilyProperties)
              (*(undefined8 *)(*(long *)(this + 0xb8) + uVar18 * 8),&local_388,0);
    uVar23 = (uint)local_388;
    if ((uint)local_388 != 0) {
      uVar20 = (ulong)*(uint *)(this + 0xc0);
      if (*(uint *)(this + 0xc0) <= uVar17) break;
      lVar22 = *(long *)(this + 200);
      puVar21 = (uint *)(lVar22 + uVar18 * 0x10);
      if ((uint)local_388 < *puVar21) {
        *puVar21 = (uint)local_388;
        pcVar11 = _vkGetPhysicalDeviceQueueFamilyProperties;
      }
      else {
        pcVar11 = _vkGetPhysicalDeviceQueueFamilyProperties;
        if (*puVar21 < (uint)local_388) {
          if (puVar21[1] < (uint)local_388) {
            puVar21[1] = (uint)local_388;
            lVar22 = Memory::realloc_static
                               (*(void **)(puVar21 + 2),((ulong)local_388 & 0xffffffff) * 0x18,false
                               );
            *(long *)(puVar21 + 2) = lVar22;
            pcVar11 = _vkGetPhysicalDeviceQueueFamilyProperties;
            if (lVar22 == 0) goto LAB_00104eb5;
            uVar3 = *(uint *)(this + 0xc0);
            uVar20 = (ulong)uVar3;
            *puVar21 = uVar23;
            if (uVar3 <= uVar17) break;
            lVar22 = *(long *)(this + 200);
          }
          else {
            *puVar21 = (uint)local_388;
            pcVar11 = _vkGetPhysicalDeviceQueueFamilyProperties;
          }
          puVar21 = (uint *)(lVar22 + uVar18 * 0x10);
        }
      }
      uVar20 = (ulong)*(uint *)(this + 0xb0);
      if (*(uint *)(this + 0xb0) <= uVar17) break;
      (*pcVar11)(*(undefined8 *)(*(long *)(this + 0xb8) + uVar18 * 8),&local_388,
                 *(undefined8 *)(puVar21 + 2));
    }
    uVar18 = uVar18 + 1;
    if (*(uint *)(this + 0xb0) <= (uint)uVar18) goto LAB_00104ef0;
    puVar14 = *(undefined8 **)(this + 0xb8);
  }
  uVar18 = uVar18 & 0xffffffff;
LAB_00104a45:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar18,uVar20,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* RenderingContextDriverVulkan::_check_driver_workarounds(VkPhysicalDeviceProperties const&,
   RenderingContextDriver::Device&) */

void __thiscall
RenderingContextDriverVulkan::_check_driver_workarounds
          (RenderingContextDriverVulkan *this,VkPhysicalDeviceProperties *param_1,Device *param_2)

{
  Device DVar1;
  byte extraout_var;
  
  DVar1 = (Device)0x0;
  if (((*(int *)(param_2 + 8) == 0x5143) && (0x5ffffff < *(uint *)(param_1 + 0xc))) &&
     (*(uint *)(param_1 + 4) < 0x801f7000)) {
    String::find((char *)param_2,0x10832b);
    DVar1 = (Device)(extraout_var >> 7);
  }
  param_2[0x10] = DVar1;
  return;
}



/* RenderingContextDriverVulkan::instance_get() const */

undefined8 __thiscall RenderingContextDriverVulkan::instance_get(RenderingContextDriverVulkan *this)

{
  return *(undefined8 *)(this + 0x38);
}



/* RenderingContextDriverVulkan::physical_device_get(unsigned int) const */

undefined8 __thiscall
RenderingContextDriverVulkan::physical_device_get(RenderingContextDriverVulkan *this,uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0xb0)) {
    return *(undefined8 *)(*(long *)(this + 0xb8) + (ulong)param_1 * 8);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)param_1,
             (ulong)*(uint *)(this + 0xb0),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderingContextDriverVulkan::queue_family_get_count(unsigned int) const */

undefined4 __thiscall
RenderingContextDriverVulkan::queue_family_get_count
          (RenderingContextDriverVulkan *this,uint param_1)

{
  code *pcVar1;
  
  if (param_1 < *(uint *)(this + 0xc0)) {
    return *(undefined4 *)((ulong)param_1 * 0x10 + *(long *)(this + 200));
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)param_1,
             (ulong)*(uint *)(this + 0xc0),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderingContextDriverVulkan::queue_family_get(unsigned int, unsigned int) const */

undefined8 * RenderingContextDriverVulkan::queue_family_get(uint param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint in_ECX;
  ulong uVar6;
  uint in_EDX;
  uint *puVar7;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  uVar2 = *(uint *)(CONCAT44(in_register_00000034,param_2) + 0xc0);
  if (in_EDX < uVar2) {
    puVar7 = (uint *)((ulong)in_EDX * 0x10 + *(long *)(CONCAT44(in_register_00000034,param_2) + 200)
                     );
    uVar2 = *puVar7;
    uVar6 = (ulong)in_ECX;
    if (in_ECX < uVar2) {
      puVar1 = (undefined8 *)(*(long *)(puVar7 + 2) + uVar6 * 0x18);
      uVar5 = puVar1[1];
      uVar3 = puVar1[2];
      *puVar8 = *puVar1;
      puVar8[1] = uVar5;
      puVar8[2] = uVar3;
      return puVar8;
    }
  }
  else {
    uVar6 = (ulong)in_EDX;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,uVar6,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::queue_family_supports_present(VkPhysicalDevice_T*, unsigned int,
   unsigned long) const */

bool __thiscall
RenderingContextDriverVulkan::queue_family_supports_present
          (RenderingContextDriverVulkan *this,VkPhysicalDevice_T *param_1,uint param_2,ulong param_3
          )

{
  int iVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  iVar1 = (*_vkGetPhysicalDeviceSurfaceSupportKHR)(param_1,param_2,*(undefined8 *)param_3,&local_14)
  ;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 == 0 && local_14 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingContextDriverVulkan::functions_get() const */

RenderingContextDriverVulkan * __thiscall
RenderingContextDriverVulkan::functions_get(RenderingContextDriverVulkan *this)

{
  return this + 0xe0;
}



/* RenderingContextDriverVulkan::memory_report_callback(VkDeviceMemoryReportCallbackDataEXT const*,
   void*) */

void RenderingContextDriverVulkan::memory_report_callback
               (VkDeviceMemoryReportCallbackDataEXT *param_1,void *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  int iVar49;
  long *plVar50;
  undefined8 *puVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  ulong uVar56;
  long lVar57;
  ulong uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  ulong uVar63;
  uint *puVar64;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (VkDeviceMemoryReportCallbackDataEXT *)0x0) {
    iVar49 = *(int *)(param_1 + 0x28);
    lVar57 = (long)iVar49;
    if ((0x19 < iVar49) && (iVar49 != 0x20)) {
      iVar49 = vk_object_to_tracked_object(iVar49);
      lVar57 = (long)iVar49;
    }
    local_48 = *(ulong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((memory_report_table._8_8_ != 0) && (memory_report_table._44_4_ != 0)) {
        uVar58 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                     (ulong)(uint)memory_report_table._40_4_ * 4));
        lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)memory_report_table._40_4_ * 8)
        ;
        uVar52 = local_48 * 0x3ffff - 1;
        uVar52 = (uVar52 ^ uVar52 >> 0x1f) * 0x15;
        uVar52 = (uVar52 ^ uVar52 >> 0xb) * 0x41;
        uVar52 = uVar52 >> 0x16 ^ uVar52;
        uVar63 = uVar52 & 0xffffffff;
        if ((int)uVar52 == 0) {
          uVar63 = 1;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar63 * lVar54;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar58;
        lVar53 = SUB168(auVar6 * auVar27,8);
        uVar59 = *(uint *)(memory_report_table._16_8_ + lVar53 * 4);
        iVar49 = SUB164(auVar6 * auVar27,8);
        if (uVar59 != 0) {
          uVar62 = 0;
          do {
            if (((uint)uVar63 == uVar59) &&
               (local_48 == *(ulong *)(*(long *)(memory_report_table._8_8_ + lVar53 * 8) + 0x10))) {
              plVar3 = &memory_report_mem_usage + lVar57;
              plVar50 = (long *)HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                                ::operator[]((HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                                              *)memory_report_table,&local_48);
              LOCK();
              memory_report_total_memory = memory_report_total_memory - *plVar50;
              UNLOCK();
              plVar50 = (long *)HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                                ::operator[]((HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                                              *)memory_report_table,&local_48);
              LOCK();
              *plVar3 = *plVar3 - *plVar50;
              UNLOCK();
              LOCK();
              memory_report_total_memory = memory_report_total_memory + *(long *)(param_1 + 0x20);
              UNLOCK();
              LOCK();
              *plVar3 = *plVar3 + *(long *)(param_1 + 0x20);
              UNLOCK();
              uVar4 = *(undefined8 *)(param_1 + 0x20);
              puVar51 = (undefined8 *)
                        HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                        ::operator[]((HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                                      *)memory_report_table,(ulong *)(param_1 + 0x18));
              *puVar51 = uVar4;
              goto LAB_0010538b;
            }
            uVar62 = uVar62 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar49 + 1) * lVar54;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar58;
            lVar53 = SUB168(auVar7 * auVar28,8);
            uVar59 = *(uint *)(memory_report_table._16_8_ + lVar53 * 4);
            iVar49 = SUB164(auVar7 * auVar28,8);
          } while ((uVar59 != 0) &&
                  (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar59 * lVar54, auVar29._8_8_ = 0,
                  auVar29._0_8_ = uVar58, auVar9._8_8_ = 0,
                  auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)(uint)memory_report_table._40_4_ * 4) +
                                         iVar49) - SUB164(auVar8 * auVar29,8)) * lVar54,
                  auVar30._8_8_ = 0, auVar30._0_8_ = uVar58, uVar62 <= SUB164(auVar9 * auVar30,8)));
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar51 = (undefined8 *)
                HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                ::operator[]((HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
                              *)memory_report_table,&local_48);
      *puVar51 = uVar4;
      LOCK();
      memory_report_total_alloc_count = memory_report_total_alloc_count + 1;
      UNLOCK();
      LOCK();
      (&memory_report_allocation_count)[lVar57] = (&memory_report_allocation_count)[lVar57] + 1;
      UNLOCK();
      LOCK();
      (&memory_report_mem_usage)[lVar57] =
           (&memory_report_mem_usage)[lVar57] + *(long *)(param_1 + 0x20);
      UNLOCK();
      LOCK();
      memory_report_total_memory = memory_report_total_memory + *(long *)(param_1 + 0x20);
      UNLOCK();
    }
    else if (((*(int *)(param_1 + 0x14) == 1) && (memory_report_table._8_8_ != 0)) &&
            (memory_report_table._44_4_ != 0)) {
      uVar58 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                   (ulong)(uint)memory_report_table._40_4_ * 4));
      lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)memory_report_table._40_4_ * 8);
      uVar52 = local_48 * 0x3ffff - 1;
      uVar52 = (uVar52 ^ uVar52 >> 0x1f) * 0x15;
      uVar52 = (uVar52 ^ uVar52 >> 0xb) * 0x41;
      uVar52 = uVar52 >> 0x16 ^ uVar52;
      uVar63 = uVar52 & 0xffffffff;
      if ((int)uVar52 == 0) {
        uVar63 = 1;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar63 * lVar54;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar58;
      lVar53 = SUB168(auVar10 * auVar31,8);
      uVar59 = *(uint *)(memory_report_table._16_8_ + lVar53 * 4);
      iVar49 = SUB164(auVar10 * auVar31,8);
      if (uVar59 != 0) {
        uVar62 = 0;
        while (((uint)uVar63 != uVar59 ||
               (local_48 != *(ulong *)(*(long *)(memory_report_table._8_8_ + lVar53 * 8) + 0x10))))
        {
          uVar62 = uVar62 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(iVar49 + 1) * lVar54;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar58;
          lVar53 = SUB168(auVar11 * auVar32,8);
          uVar59 = *(uint *)(memory_report_table._16_8_ + lVar53 * 4);
          iVar49 = SUB164(auVar11 * auVar32,8);
          if ((uVar59 == 0) ||
             (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar59 * lVar54, auVar33._8_8_ = 0,
             auVar33._0_8_ = uVar58, auVar13._8_8_ = 0,
             auVar13._0_8_ =
                  (ulong)((*(uint *)(hash_table_size_primes +
                                    (ulong)(uint)memory_report_table._40_4_ * 4) + iVar49) -
                         SUB164(auVar12 * auVar33,8)) * lVar54, auVar34._8_8_ = 0,
             auVar34._0_8_ = uVar58, SUB164(auVar13 * auVar34,8) < uVar62)) goto LAB_0010538b;
        }
        LOCK();
        memory_report_total_alloc_count = memory_report_total_alloc_count + -1;
        UNLOCK();
        LOCK();
        (&memory_report_allocation_count)[lVar57] = (&memory_report_allocation_count)[lVar57] + -1;
        UNLOCK();
        LOCK();
        (&memory_report_mem_usage)[lVar57] =
             (&memory_report_mem_usage)[lVar57] - *(long *)(param_1 + 0x20);
        uVar48 = memory_report_table._16_8_;
        uVar4 = memory_report_table._8_8_;
        UNLOCK();
        LOCK();
        memory_report_total_memory = memory_report_total_memory - *(long *)(param_1 + 0x20);
        UNLOCK();
        if ((memory_report_table._8_8_ != 0) && (memory_report_table._44_4_ != 0)) {
          uVar59 = *(uint *)(hash_table_size_primes + (ulong)(uint)memory_report_table._40_4_ * 4);
          uVar63 = CONCAT44(0,uVar59);
          lVar57 = *(long *)(hash_table_size_primes_inv +
                            (ulong)(uint)memory_report_table._40_4_ * 8);
          uVar52 = local_48 * 0x3ffff - 1;
          uVar52 = (uVar52 ^ uVar52 >> 0x1f) * 0x15;
          uVar52 = (uVar52 ^ uVar52 >> 0xb) * 0x41;
          uVar52 = uVar52 >> 0x16 ^ uVar52;
          uVar58 = uVar52 & 0xffffffff;
          if ((int)uVar52 == 0) {
            uVar58 = 1;
          }
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar58 * lVar57;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = uVar63;
          lVar54 = SUB168(auVar14 * auVar35,8);
          uVar62 = *(uint *)(memory_report_table._16_8_ + lVar54 * 4);
          uVar61 = SUB164(auVar14 * auVar35,8);
          if (uVar62 != 0) {
            uVar60 = 0;
            goto LAB_00105793;
          }
        }
      }
    }
  }
  goto LAB_0010538b;
LAB_00105793:
  if (((uint)uVar58 == uVar62) &&
     (local_48 == *(ulong *)(*(long *)(memory_report_table._8_8_ + lVar54 * 8) + 0x10))) {
    lVar54 = *(long *)(memory_report_table._8_8_ + (ulong)uVar61 * 8);
    if (lVar54 != 0) {
      lVar54 = *(long *)(lVar54 + 0x10);
      uVar52 = lVar54 * 0x3ffff - 1;
      uVar52 = (uVar52 ^ uVar52 >> 0x1f) * 0x15;
      uVar52 = (uVar52 ^ uVar52 >> 0xb) * 0x41;
      uVar52 = uVar52 >> 0x16 ^ uVar52;
      uVar58 = uVar52 & 0xffffffff;
      if ((int)uVar52 == 0) {
        uVar58 = 1;
      }
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar58 * lVar57;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar63;
      uVar55 = SUB168(auVar18 * auVar39,8);
      uVar62 = *(uint *)(memory_report_table._16_8_ + uVar55 * 4);
      uVar52 = (ulong)SUB164(auVar18 * auVar39,8);
      if (uVar62 != 0) {
        uVar61 = 0;
        goto LAB_0010585d;
      }
    }
    goto LAB_0010538b;
  }
  uVar60 = uVar60 + 1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulong)(uVar61 + 1) * lVar57;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar63;
  lVar54 = SUB168(auVar15 * auVar36,8);
  uVar62 = *(uint *)(memory_report_table._16_8_ + lVar54 * 4);
  uVar61 = SUB164(auVar15 * auVar36,8);
  if ((uVar62 == 0) ||
     (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar62 * lVar57, auVar37._8_8_ = 0,
     auVar37._0_8_ = uVar63, auVar17._8_8_ = 0,
     auVar17._0_8_ = (ulong)((uVar59 + uVar61) - SUB164(auVar16 * auVar37,8)) * lVar57,
     auVar38._8_8_ = 0, auVar38._0_8_ = uVar63, SUB164(auVar17 * auVar38,8) < uVar60))
  goto LAB_0010538b;
  goto LAB_00105793;
  while( true ) {
    uVar62 = *(uint *)(memory_report_table._16_8_ + uVar56 * 4);
    uVar52 = uVar56 & 0xffffffff;
    uVar61 = uVar61 + 1;
    if ((uVar62 == 0) ||
       (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar62 * lVar57, auVar40._8_8_ = 0,
       auVar40._0_8_ = uVar63, auVar20._8_8_ = 0,
       auVar20._0_8_ = (ulong)((uVar59 + uVar60) - SUB164(auVar19 * auVar40,8)) * lVar57,
       auVar41._8_8_ = 0, auVar41._0_8_ = uVar63, uVar55 = uVar56,
       SUB164(auVar20 * auVar41,8) < uVar61)) break;
LAB_0010585d:
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)((int)uVar52 + 1) * lVar57;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar63;
    uVar56 = SUB168(auVar21 * auVar42,8);
    uVar60 = SUB164(auVar21 * auVar42,8);
    if (((uint)uVar58 == uVar62) &&
       (lVar54 == *(long *)(*(long *)(memory_report_table._8_8_ + uVar55 * 8) + 0x10))) {
      puVar64 = (uint *)(memory_report_table._16_8_ + uVar56 * 4);
      uVar62 = *puVar64;
      if ((uVar62 != 0) &&
         (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar62 * lVar57, auVar43._8_8_ = 0,
         auVar43._0_8_ = uVar63, auVar23._8_8_ = 0,
         auVar23._0_8_ = (ulong)((uVar59 + uVar60) - SUB164(auVar22 * auVar43,8)) * lVar57,
         auVar44._8_8_ = 0, auVar44._0_8_ = uVar63, uVar58 = (ulong)uVar60,
         SUB164(auVar23 * auVar44,8) != 0)) {
        while( true ) {
          puVar1 = (uint *)(uVar48 + uVar52 * 4);
          *puVar64 = *puVar1;
          puVar51 = (undefined8 *)(uVar4 + uVar56 * 8);
          *puVar1 = uVar62;
          puVar2 = (undefined8 *)(uVar4 + uVar52 * 8);
          uVar5 = *puVar51;
          *puVar51 = *puVar2;
          *puVar2 = uVar5;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = (ulong)((int)uVar58 + 1) * lVar57;
          auVar47._8_8_ = 0;
          auVar47._0_8_ = uVar63;
          uVar56 = SUB168(auVar26 * auVar47,8);
          puVar64 = (uint *)(uVar48 + uVar56 * 4);
          uVar62 = *puVar64;
          uVar52 = uVar58;
          if ((uVar62 == 0) ||
             (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar62 * lVar57, auVar45._8_8_ = 0,
             auVar45._0_8_ = uVar63, auVar25._8_8_ = 0,
             auVar25._0_8_ =
                  (ulong)((SUB164(auVar26 * auVar47,8) + uVar59) - SUB164(auVar24 * auVar45,8)) *
                  lVar57, auVar46._8_8_ = 0, auVar46._0_8_ = uVar63,
             SUB164(auVar25 * auVar46,8) == 0)) break;
          uVar58 = uVar56 & 0xffffffff;
        }
      }
      plVar3 = (long *)(uVar4 + uVar52 * 8);
      *(undefined4 *)(uVar48 + uVar52 * 4) = 0;
      plVar50 = (long *)*plVar3;
      if ((long *)memory_report_table._24_8_ == plVar50) {
        memory_report_table._24_8_ = *plVar50;
        plVar50 = (long *)*plVar3;
      }
      if ((long *)memory_report_table._32_8_ == plVar50) {
        memory_report_table._32_8_ = plVar50[1];
        plVar50 = (long *)*plVar3;
      }
      if ((long *)plVar50[1] != (long *)0x0) {
        *(long *)plVar50[1] = *plVar50;
        plVar50 = (long *)*plVar3;
      }
      if (*plVar50 != 0) {
        *(long *)(*plVar50 + 8) = plVar50[1];
        plVar50 = (long *)*plVar3;
      }
      Memory::free_static(plVar50,false);
      *(undefined8 *)(memory_report_table._8_8_ + uVar52 * 8) = 0;
      memory_report_table._44_4_ = memory_report_table._44_4_ + -1;
      break;
    }
  }
LAB_0010538b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderingContextDriverVulkan::_register_requested_instance_extension(CharString const&, bool) */

void __thiscall
RenderingContextDriverVulkan::_register_requested_instance_extension
          (RenderingContextDriverVulkan *this,CharString *param_1,bool param_2)

{
  byte bVar1;
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
  char cVar12;
  undefined8 uVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  
  if ((*(long *)(this + 0x50) != 0) && (*(int *)(this + 0x74) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x70) * 8);
    pbVar14 = (byte *)CharString::get_data();
    bVar1 = *pbVar14;
    if (bVar1 == 0) {
      uVar18 = 0x1505;
      uVar17 = 0x1505;
    }
    else {
      uVar17 = 0x1505;
      do {
        pbVar14 = pbVar14 + 1;
        uVar17 = uVar17 * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar14;
      } while (bVar1 != 0);
      if (uVar17 == 0) {
        uVar17 = 1;
      }
      uVar18 = (ulong)uVar17;
    }
    uVar21 = CONCAT44(0,uVar2);
    lVar20 = *(long *)(this + 0x58);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar18 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar21;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar19 = *(uint *)(lVar20 + lVar16 * 4);
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar19 != 0) {
      uVar22 = 0;
      do {
        if (uVar19 == uVar17) {
          cVar12 = CharString::operator==
                             ((CharString *)(*(long *)(*(long *)(this + 0x50) + lVar16 * 8) + 0x10),
                              param_1);
          if (cVar12 != '\0') {
            _err_print_error("_register_requested_instance_extension",
                             "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x1a3,
                             "Condition \"requested_instance_extensions.has(p_extension_name)\" is true."
                             ,0,0);
            return;
          }
          lVar20 = *(long *)(this + 0x58);
        }
        uVar22 = uVar22 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar21;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar19 = *(uint *)(lVar20 + lVar16 * 4);
        iVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar19 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar15) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar22 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  uVar13 = HashMap<CharString,bool,HashMapHasherDefault,HashMapComparatorDefault<CharString>,DefaultTypedAllocator<HashMapElement<CharString,bool>>>
           ::operator[]((HashMap<CharString,bool,HashMapHasherDefault,HashMapComparatorDefault<CharString>,DefaultTypedAllocator<HashMapElement<CharString,bool>>>
                         *)(this + 0x48),param_1);
  *(bool *)uVar13 = param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriverVulkan::_initialize_instance_extensions() */

undefined8 __thiscall
RenderingContextDriverVulkan::_initialize_instance_extensions(RenderingContextDriverVulkan *this)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
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
  code *pcVar23;
  char *pcVar24;
  char cVar25;
  int iVar26;
  long lVar27;
  void *pvVar28;
  byte *pbVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  uint local_94;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar27 = *(long *)(this + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar27 != 0) && (*(int *)(this + 0x9c) != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4) == 0) ||
       (memset(*(void **)(this + 0x90),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4) * 4),
       *(int *)(this + 0x9c) != 0)) {
      lVar32 = 0;
      while( true ) {
        plVar2 = (long *)(lVar27 + lVar32 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar27 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar27 + -0x10),false);
          }
        }
        lVar32 = lVar32 + 1;
        if (*(uint *)(this + 0x9c) <= (uint)lVar32) break;
        lVar27 = *(long *)(this + 0x78);
      }
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  local_68 = (char *)0x0;
  CharString::copy_from((char *)&local_68);
  _register_requested_instance_extension(this,(CharString *)&local_68,true);
  pcVar24 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar2 = (long *)((long)local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar24 + -0x10),false);
    }
  }
  lVar27 = *(long *)this;
  if (*(code **)(lVar27 + 0xe0) != _get_platform_surface_extension) {
    lVar32 = (**(code **)(lVar27 + 0xe0))(this);
    lVar27 = *(long *)this;
    if (lVar32 != 0) {
      if (*(code **)(lVar27 + 0xe0) != _get_platform_surface_extension) {
        (**(code **)(lVar27 + 0xe0))(this,0);
      }
      local_68 = (char *)0x0;
      CharString::copy_from((char *)&local_68);
      _register_requested_instance_extension(this,(CharString *)&local_68,true);
      pcVar24 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)((long)local_68 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar24 + -0x10),false);
        }
      }
      lVar27 = *(long *)this;
    }
  }
  if (*(code **)(lVar27 + 0xe8) == _use_validation_layers) {
    Engine::get_singleton();
    cVar25 = Engine::is_validation_layers_enabled();
  }
  else {
    cVar25 = (**(code **)(lVar27 + 0xe8))(this);
  }
  if (cVar25 != '\0') {
    local_68 = (char *)0x0;
    CharString::copy_from((char *)&local_68);
    _register_requested_instance_extension(this,(CharString *)&local_68,false);
    pcVar24 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)((long)local_68 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static((void *)((long)pcVar24 + -0x10),false);
      }
    }
  }
  local_68 = (char *)0x0;
  CharString::copy_from((char *)&local_68);
  _register_requested_instance_extension(this,(CharString *)&local_68,false);
  pcVar24 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar24 + -0x10,false);
    }
  }
  OS::get_singleton();
  cVar25 = OS::is_stdout_verbose();
  if (cVar25 != '\0') {
    local_68 = (char *)0x0;
    CharString::copy_from((char *)&local_68);
    _register_requested_instance_extension(this,(CharString *)&local_68,false);
    pcVar24 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_68 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar24 + -0x10,false);
      }
    }
  }
  local_94 = 0;
  iVar26 = (*_vkEnumerateInstanceExtensionProperties)(0,&local_94,0);
  uVar5 = local_94;
  if ((iVar26 == 0) || (iVar26 == 5)) {
    if (local_94 != 0) {
      uVar34 = (ulong)local_94;
      pvVar28 = (void *)Memory::realloc_static((void *)0x0,uVar34 * 0x104,false);
      if (pvVar28 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar23 = (code *)invalidInstructionException();
        (*pcVar23)();
      }
      iVar26 = (*_vkEnumerateInstanceExtensionProperties)(0,&local_94,pvVar28);
      if ((iVar26 == 0) || (iVar26 == 5)) {
        if (local_94 != 0) {
          uVar36 = 0;
          do {
            local_70 = 0;
            CharString::copy_from((char *)&local_70);
            if ((*(long *)(this + 0x50) != 0) && (*(int *)(this + 0x74) != 0)) {
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4);
              lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x70) * 8);
              pbVar29 = (byte *)CharString::get_data();
              bVar3 = *pbVar29;
              if (bVar3 == 0) {
                uVar33 = 0x1505;
              }
              else {
                uVar31 = 0x1505;
                do {
                  pbVar29 = pbVar29 + 1;
                  uVar31 = uVar31 * 0x21 ^ (uint)bVar3;
                  bVar3 = *pbVar29;
                } while (bVar3 != 0);
                if (uVar31 == 0) {
                  uVar31 = 1;
                }
                uVar33 = (ulong)uVar31;
              }
              uVar38 = CONCAT44(0,uVar4);
              lVar32 = *(long *)(this + 0x58);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar33 * lVar27;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar38;
              lVar30 = SUB168(auVar7 * auVar15,8);
              uVar31 = *(uint *)(lVar32 + lVar30 * 4);
              if (uVar31 != 0) {
                uVar37 = 0;
                iVar26 = SUB164(auVar7 * auVar15,8);
                do {
                  if ((uint)uVar33 == uVar31) {
                    cVar25 = CharString::operator==
                                       ((CharString *)
                                        (*(long *)(*(long *)(this + 0x50) + lVar30 * 8) + 0x10),
                                        (CharString *)&local_70);
                    if (cVar25 != '\0') {
                      HashSet<CharString,HashMapHasherDefault,HashMapComparatorDefault<CharString>>
                      ::insert((CharString *)&local_68);
                      break;
                    }
                    lVar32 = *(long *)(this + 0x58);
                  }
                  uVar37 = uVar37 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)(iVar26 + 1) * lVar27;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar38;
                  lVar30 = SUB168(auVar8 * auVar16,8);
                  uVar31 = *(uint *)(lVar32 + lVar30 * 4);
                  iVar26 = SUB164(auVar8 * auVar16,8);
                  if ((uVar31 == 0) ||
                     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar31 * lVar27, auVar17._8_8_ = 0,
                     auVar17._0_8_ = uVar38, auVar10._8_8_ = 0,
                     auVar10._0_8_ = (ulong)((uVar4 + iVar26) - SUB164(auVar9 * auVar17,8)) * lVar27
                     , auVar18._8_8_ = 0, auVar18._0_8_ = uVar38,
                     SUB164(auVar10 * auVar18,8) < uVar37)) break;
                } while( true );
              }
            }
            lVar27 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar2 = (long *)(local_70 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            uVar36 = uVar36 + 1;
            if (local_94 <= uVar36) break;
            if (uVar5 == uVar36) {
              _err_print_index_error
                        ("operator[]","./core/templates/local_vector.h",0xb2,uVar34,uVar34,"p_index"
                         ,"count","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar23 = (code *)invalidInstructionException();
              (*pcVar23)();
            }
          } while( true );
        }
        for (puVar6 = *(undefined8 **)(this + 0x60); puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)*puVar6) {
          if ((*(long *)(this + 0x78) != 0) && (*(int *)(this + 0x9c) != 0)) {
            uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4);
            lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x98) * 8);
            pbVar29 = (byte *)CharString::get_data();
            bVar3 = *pbVar29;
            if (bVar3 == 0) {
              uVar34 = 0x1505;
            }
            else {
              uVar36 = 0x1505;
              do {
                pbVar29 = pbVar29 + 1;
                uVar36 = uVar36 * 0x21 ^ (uint)bVar3;
                bVar3 = *pbVar29;
              } while (bVar3 != 0);
              if (uVar36 == 0) {
                uVar36 = 1;
              }
              uVar34 = (ulong)uVar36;
            }
            uVar38 = CONCAT44(0,uVar5);
            lVar32 = *(long *)(this + 0x90);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar34 * lVar27;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar30 = SUB168(auVar11 * auVar19,8);
            uVar36 = *(uint *)(lVar32 + lVar30 * 4);
            uVar33 = (ulong)uVar36;
            if (uVar36 != 0) {
              uVar36 = 0;
              iVar26 = SUB164(auVar11 * auVar19,8);
              do {
                if ((int)uVar33 == (int)uVar34) {
                  cVar25 = CharString::operator==
                                     ((CharString *)
                                      (*(long *)(this + 0x78) +
                                      (ulong)*(uint *)(*(long *)(this + 0x80) + lVar30 * 4) * 8),
                                      (CharString *)(puVar6 + 2));
                  if (cVar25 != '\0') goto LAB_0010632b;
                  lVar32 = *(long *)(this + 0x90);
                }
                uVar36 = uVar36 + 1;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = (ulong)(iVar26 + 1) * lVar27;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = uVar38;
                lVar30 = SUB168(auVar12 * auVar20,8);
                uVar4 = *(uint *)(lVar32 + lVar30 * 4);
                uVar33 = (ulong)uVar4;
                iVar26 = SUB164(auVar12 * auVar20,8);
              } while ((uVar4 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = uVar33 * lVar27, auVar21._8_8_ = 0,
                      auVar21._0_8_ = uVar38, auVar14._8_8_ = 0,
                      auVar14._0_8_ =
                           (ulong)((uVar5 + iVar26) - SUB164(auVar13 * auVar21,8)) * lVar27,
                      auVar22._8_8_ = 0, auVar22._0_8_ = uVar38,
                      uVar36 <= SUB164(auVar14 * auVar22,8)));
            }
          }
          if (*(char *)(puVar6 + 3) != '\0') {
            local_70 = 0;
            local_68 = " not found.";
            local_60 = 0xb;
            String::parse_latin1((StrRange *)&local_70);
            iVar26 = CharString::get_data();
            String::utf8((char *)&local_80,iVar26);
            local_68 = "Required extension ";
            local_88 = 0;
            local_60 = 0x13;
            String::parse_latin1((StrRange *)&local_88);
            String::operator+((String *)&local_78,(String *)&local_88);
            String::operator+((String *)&local_68,(String *)&local_78);
            _err_print_error("_initialize_instance_extensions",
                             "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x1e7,
                             "Method/function failed. Returning: ERR_BUG",(CharString *)&local_68,0,
                             0);
            pcVar24 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar24 + -0x10,false);
              }
            }
            lVar27 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar2 = (long *)(local_78 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar2 = (long *)(local_88 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar2 = (long *)(local_70 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            uVar35 = 0x2f;
            goto LAB_001065bc;
          }
          cVar25 = is_print_verbose_enabled();
          if (cVar25 != '\0') {
            local_78 = 0;
            local_68 = " not found.";
            local_60 = 0xb;
            String::parse_latin1((StrRange *)&local_78);
            iVar26 = CharString::get_data();
            String::utf8((char *)&local_88,iVar26);
            local_68 = "Optional extension ";
            local_90 = 0;
            local_60 = 0x13;
            String::parse_latin1((StrRange *)&local_90);
            String::operator+((String *)&local_80,(String *)&local_90);
            String::operator+((String *)&local_70,(String *)&local_80);
            Variant::Variant((Variant *)local_58,(String *)&local_70);
            stringify_variants((Variant *)&local_68);
            __print_line((String *)&local_68);
            pcVar24 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar24 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar27 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar2 = (long *)(local_70 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar2 = (long *)(local_90 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar2 = (long *)(local_88 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
            lVar27 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar2 = (long *)(local_78 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              }
            }
          }
LAB_0010632b:
        }
        uVar35 = 0;
      }
      else {
        uVar35 = 0x14;
        _err_print_error("_initialize_instance_extensions",
                         "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x1d2,
                         "Method/function failed. Returning: ERR_CANT_CREATE",0,0);
      }
LAB_001065bc:
      Memory::free_static(pvVar28,false);
      goto LAB_001065c6;
    }
    _err_print_error("_initialize_instance_extensions",
                     "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x1cc,
                     "Condition \"instance_extension_count == 0\" is true. Returning: ERR_CANT_CREATE"
                     ,"No instance extensions were found.",0,0);
  }
  else {
    _err_print_error("_initialize_instance_extensions",
                     "drivers/vulkan/rendering_context_driver_vulkan.cpp",0x1cb,
                     "Condition \"err != VK_SUCCESS && err != VK_INCOMPLETE\" is true. Returning: ERR_CANT_CREATE"
                     ,0,0);
  }
  uVar35 = 0x14;
LAB_001065c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar35;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingContextDriverVulkan::initialize() */

ulong __thiscall RenderingContextDriverVulkan::initialize(RenderingContextDriverVulkan *this)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = volkInitialize();
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar2 = _initialize_vulkan_version(this);
    if (uVar2 == 0) {
      uVar2 = _initialize_instance_extensions(this);
      if (uVar2 == 0) {
        uVar2 = _initialize_instance(this);
        if (uVar2 == 0) {
          uVar3 = _initialize_devices(this);
          if ((int)uVar3 != 0) {
            _err_print_error("initialize","drivers/vulkan/rendering_context_driver_vulkan.cpp",0x3a6
                             ,"Condition \"err != OK\" is true. Returning: err",0,0);
            uVar3 = uVar3 & 0xffffffff;
          }
        }
        else {
          _err_print_error("initialize","drivers/vulkan/rendering_context_driver_vulkan.cpp",0x3a3,
                           "Condition \"err != OK\" is true. Returning: err",0,0);
          uVar3 = (ulong)uVar2;
        }
      }
      else {
        _err_print_error("initialize","drivers/vulkan/rendering_context_driver_vulkan.cpp",0x3a0,
                         "Condition \"err != OK\" is true. Returning: err",0,0);
        uVar3 = (ulong)uVar2;
      }
    }
    else {
      _err_print_error("initialize","drivers/vulkan/rendering_context_driver_vulkan.cpp",0x39d,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
      uVar3 = (ulong)uVar2;
    }
  }
  return uVar3;
}



/* RenderingContextDriverVulkan::_get_platform_surface_extension() const */

undefined8 RenderingContextDriverVulkan::_get_platform_surface_extension(void)

{
  return 0;
}



/* HashMap<unsigned long, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, unsigned long> > >::~HashMap() */

void __thiscall
HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
::~HashMap(HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, unsigned long> >
   >::operator[](unsigned long const&) */

undefined1  [16] __thiscall
HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
::operator[](HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar56 = (ulong)*(uint *)(this + 0x28);
  uVar40 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar56 * 4);
  uVar48 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x109dd2;
    local_70 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      uVar40 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_001098fb;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar56)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x109e1a;
        memset(local_70,0,uVar56);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar56 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00109ca3;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar53 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar55 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar48;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar53 + lVar45 * 4);
      uVar54 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar51 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar55 == uVar44) &&
             (uVar40 == *(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar54 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar48;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar53 + lVar45 * 4);
          uVar54 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar48, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar54 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar48, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00109ca3:
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar56 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar55 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar52;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar53 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar54 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar55 == uVar47) &&
             (*(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == uVar40)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined8 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_00109c8c;
          }
          uVar54 = uVar54 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar52;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar53 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar52, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar56 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar52, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar54 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_001098fb:
  if ((float)uVar48 * __LC159 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00109c8c;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar56)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar56);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar56 = CONCAT44(0,uVar54);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar56;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar51 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar56;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar54 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar56;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar49 = uVar41;
            if (uVar38 < uVar50) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar51;
              uVar50 = uVar38;
            }
            uVar50 = uVar50 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar56;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar40 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(ulong *)pauVar42[1] = uVar40;
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar53 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = *param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar56 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar56 = 1;
  }
  uVar51 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar54 = (uint)uVar56;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar56 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar54 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar54 < uVar51) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar54;
    }
    uVar54 = (uint)uVar56;
    uVar51 = uVar51 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00109c8c:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<CharString, bool, HashMapHasherDefault, HashMapComparatorDefault<CharString>,
   DefaultTypedAllocator<HashMapElement<CharString, bool> > >::operator[](CharString const&) */

undefined1 * __thiscall
HashMap<CharString,bool,HashMapHasherDefault,HashMapComparatorDefault<CharString>,DefaultTypedAllocator<HashMapElement<CharString,bool>>>
::operator[](HashMap<CharString,bool,HashMapHasherDefault,HashMapComparatorDefault<CharString>,DefaultTypedAllocator<HashMapElement<CharString,bool>>>
             *this,CharString *param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [16];
  char cVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  undefined8 *puVar44;
  byte *pbVar45;
  void *pvVar46;
  int iVar47;
  long lVar48;
  long lVar49;
  uint uVar50;
  ulong uVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  long lVar57;
  uint uVar58;
  undefined1 (*pauVar59) [16];
  long in_FS_OFFSET;
  long local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010a670:
    uVar41 = (ulong)uVar54;
    uVar52 = uVar41 * 4;
    uVar51 = uVar41 * 8;
    uVar42 = Memory::alloc_static(uVar52,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar46 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar46;
    if (uVar54 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar46 + uVar51)) && (pvVar46 < (void *)((long)pvVar4 + uVar52))
         ) {
        uVar52 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar52 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar52 * 8) = 0;
          uVar52 = uVar52 + 1;
        } while (uVar41 != uVar52);
        goto LAB_0010a4da;
      }
      memset(pvVar4,0,uVar52);
      memset(pvVar46,0,uVar51);
      iVar47 = *(int *)(this + 0x2c);
LAB_0010a4de:
      if (iVar47 != 0) {
LAB_0010a4e6:
        uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        pbVar45 = (byte *)CharString::get_data();
        bVar3 = *pbVar45;
        if (bVar3 == 0) {
          uVar41 = 0x1505;
          uVar56 = 0x1505;
        }
        else {
          uVar56 = 0x1505;
          do {
            pbVar45 = pbVar45 + 1;
            uVar56 = uVar56 * 0x21 ^ (uint)bVar3;
            bVar3 = *pbVar45;
          } while (bVar3 != 0);
          if (uVar56 == 0) {
            uVar56 = 1;
          }
          uVar41 = (ulong)uVar56;
        }
        uVar52 = CONCAT44(0,uVar50);
        lVar57 = *(long *)(this + 0x10);
        uVar58 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar41 * lVar5;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar52;
        lVar48 = SUB168(auVar18 * auVar34,8);
        uVar40 = *(uint *)(lVar57 + lVar48 * 4);
        uVar55 = SUB164(auVar18 * auVar34,8);
        if (uVar40 != 0) {
          do {
            if (uVar40 == uVar56) {
              cVar39 = CharString::operator==
                                 ((CharString *)(*(long *)(*(long *)(this + 8) + lVar48 * 8) + 0x10)
                                  ,param_1);
              if (cVar39 != '\0') {
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar55 * 8);
                pauVar43[1][8] = 0;
                goto LAB_0010a363;
              }
              lVar57 = *(long *)(this + 0x10);
            }
            uVar58 = uVar58 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar55 + 1) * lVar5;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar52;
            lVar48 = SUB168(auVar19 * auVar35,8);
            uVar40 = *(uint *)(lVar57 + lVar48 * 4);
            uVar55 = SUB164(auVar19 * auVar35,8);
          } while ((uVar40 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar40 * lVar5, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar52, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar20 * auVar36,8)) * lVar5,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar52, uVar58 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar47 = *(int *)(this + 0x2c);
      }
      uVar41 = (ulong)uVar54;
      goto LAB_00109f78;
    }
    iVar47 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_00109f78;
    if (iVar47 != 0) goto LAB_0010a4e6;
LAB_00109f9e:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a363;
    }
    uVar41 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar50 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar41 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar51 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar46 = *(void **)(this + 8);
    uVar41 = uVar51 * 4;
    uVar52 = uVar51 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar51);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar50 != 0) {
      uVar41 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar54 != 0) {
          lVar5 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar56);
          lVar57 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar54 * lVar57;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar52;
          lVar48 = SUB168(auVar6 * auVar22,8);
          puVar2 = (uint *)(lVar5 + lVar48 * 4);
          iVar47 = SUB164(auVar6 * auVar22,8);
          uVar40 = *puVar2;
          uVar42 = *(undefined8 *)((long)pvVar46 + uVar41 * 8);
          while (uVar40 != 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar40 * lVar57;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)((uVar56 + iVar47) - SUB164(auVar7 * auVar23,8)) * lVar57;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            uVar58 = SUB164(auVar8 * auVar24,8);
            uVar53 = uVar42;
            if (uVar58 < uVar55) {
              *puVar2 = uVar54;
              puVar44 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar53 = *puVar44;
              *puVar44 = uVar42;
              uVar54 = uVar40;
              uVar55 = uVar58;
            }
            uVar55 = uVar55 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar47 + 1) * lVar57;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar52;
            lVar48 = SUB168(auVar9 * auVar25,8);
            puVar2 = (uint *)(lVar5 + lVar48 * 4);
            iVar47 = SUB164(auVar9 * auVar25,8);
            uVar42 = uVar53;
            uVar40 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar2 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar50 != uVar41);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    iVar47 = *(int *)(this + 0x2c);
    uVar41 = (ulong)uVar54;
    if (iVar47 != 0) {
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      pbVar45 = (byte *)CharString::get_data();
      uVar41 = CONCAT44(0,uVar54);
      bVar3 = *pbVar45;
      if (bVar3 == 0) {
        uVar52 = 0x1505;
        uVar50 = 0x1505;
      }
      else {
        uVar50 = 0x1505;
        do {
          pbVar45 = pbVar45 + 1;
          uVar50 = uVar50 * 0x21 ^ (uint)bVar3;
          bVar3 = *pbVar45;
        } while (bVar3 != 0);
        if (uVar50 == 0) {
          uVar50 = 1;
        }
        uVar52 = (ulong)uVar50;
      }
      lVar57 = *(long *)(this + 0x10);
      uVar55 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar52 * lVar5;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar41;
      lVar48 = SUB168(auVar14 * auVar30,8);
      uVar56 = *(uint *)(lVar57 + lVar48 * 4);
      uVar40 = SUB164(auVar14 * auVar30,8);
      if (uVar56 != 0) {
        do {
          if (uVar56 == uVar50) {
            cVar39 = CharString::operator==
                               ((CharString *)(*(long *)(*(long *)(this + 8) + lVar48 * 8) + 0x10),
                                param_1);
            if (cVar39 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar40 * 8);
              goto LAB_0010a363;
            }
            lVar57 = *(long *)(this + 0x10);
          }
          uVar55 = uVar55 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(uVar40 + 1) * lVar5;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar41;
          lVar48 = SUB168(auVar15 * auVar31,8);
          uVar56 = *(uint *)(lVar57 + lVar48 * 4);
          uVar40 = SUB164(auVar15 * auVar31,8);
        } while ((uVar56 != 0) &&
                (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar56 * lVar5, auVar32._8_8_ = 0,
                auVar32._0_8_ = uVar41, auVar17._8_8_ = 0,
                auVar17._0_8_ = (ulong)((uVar40 + uVar54) - SUB164(auVar16 * auVar32,8)) * lVar5,
                auVar33._8_8_ = 0, auVar33._0_8_ = uVar41, uVar55 <= SUB164(auVar17 * auVar33,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010a670;
LAB_0010a4da:
      iVar47 = *(int *)(this + 0x2c);
      goto LAB_0010a4de;
    }
LAB_00109f78:
    if ((float)uVar41 * __LC159 < (float)(iVar47 + 1)) goto LAB_00109f9e;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
LAB_0010a64b:
    pauVar43[1][8] = 0;
LAB_0010a21b:
    puVar44 = *(undefined8 **)(this + 0x20);
    if (puVar44 != (undefined8 *)0x0) goto LAB_0010a228;
LAB_0010a4b5:
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    CowData<char>::_ref((CowData<char> *)&local_58,(CowData *)param_1);
    lVar5 = local_58;
    local_50 = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = 0;
    *(undefined8 *)(*pauVar43 + 8) = 0;
    if (lVar5 == 0) goto LAB_0010a64b;
    CowData<char>::_ref((CowData<char> *)(pauVar43 + 1),(CowData *)&local_58);
    pauVar43[1][8] = 0;
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010a21b;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar44 = *(undefined8 **)(this + 0x20);
    if (puVar44 == (undefined8 *)0x0) goto LAB_0010a4b5;
LAB_0010a228:
    *puVar44 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar44;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  pbVar45 = (byte *)CharString::get_data();
  bVar3 = *pbVar45;
  if (bVar3 == 0) {
    uVar41 = 0x1505;
  }
  else {
    uVar54 = 0x1505;
    do {
      pbVar45 = pbVar45 + 1;
      uVar54 = uVar54 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar45;
    } while (bVar3 != 0);
    if (uVar54 == 0) {
      uVar54 = 1;
    }
    uVar41 = (ulong)uVar54;
  }
  uVar40 = (uint)uVar41;
  uVar56 = 0;
  lVar5 = *(long *)(this + 0x10);
  lVar57 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar54);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar41 * lVar57;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar52;
  lVar49 = SUB168(auVar10 * auVar26,8);
  lVar48 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar5 + lVar49 * 4);
  iVar47 = SUB164(auVar10 * auVar26,8);
  uVar50 = *puVar2;
  pauVar38 = pauVar43;
  while (uVar50 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar50 * lVar57;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar52;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar54 + iVar47) - SUB164(auVar11 * auVar27,8)) * lVar57;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar52;
    uVar40 = SUB164(auVar12 * auVar28,8);
    pauVar59 = pauVar38;
    if (uVar40 < uVar56) {
      *puVar2 = (uint)uVar41;
      uVar41 = (ulong)uVar50;
      puVar44 = (undefined8 *)(lVar48 + lVar49 * 8);
      pauVar59 = (undefined1 (*) [16])*puVar44;
      *puVar44 = pauVar38;
      uVar56 = uVar40;
    }
    uVar40 = (uint)uVar41;
    uVar56 = uVar56 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar47 + 1) * lVar57;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar52;
    lVar49 = SUB168(auVar13 * auVar29,8);
    puVar2 = (uint *)(lVar5 + lVar49 * 4);
    iVar47 = SUB164(auVar13 * auVar29,8);
    pauVar38 = pauVar59;
    uVar50 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar48 + lVar49 * 8) = pauVar38;
  *puVar2 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a363:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<CharString, HashMapHasherDefault, HashMapComparatorDefault<CharString>
   >::insert(CharString const&) */

CharString *
HashSet<CharString,HashMapHasherDefault,HashMapComparatorDefault<CharString>>::insert
          (CharString *param_1)

{
  CowData<char> *this;
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
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
  char cVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  long lVar37;
  uint *puVar38;
  int iVar39;
  CharString *in_RDX;
  ulong uVar40;
  long lVar41;
  uint uVar42;
  long *in_RSI;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  undefined4 uVar46;
  uint uVar47;
  uint uVar48;
  uint local_88;
  
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    iVar39 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010a87c;
  }
  else {
    iVar39 = *(int *)((long)in_RSI + 0x24);
LAB_0010a87c:
    if (iVar39 != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      pbVar36 = (byte *)CharString::get_data();
      bVar1 = *pbVar36;
      if (bVar1 == 0) {
        uVar33 = 0x1505;
        uVar42 = 0x1505;
      }
      else {
        uVar42 = 0x1505;
        do {
          pbVar36 = pbVar36 + 1;
          uVar42 = uVar42 * 0x21 ^ (uint)bVar1;
          bVar1 = *pbVar36;
        } while (bVar1 != 0);
        if (uVar42 == 0) {
          uVar42 = 1;
        }
        uVar33 = (ulong)uVar42;
      }
      uVar40 = CONCAT44(0,uVar2);
      uVar48 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar33 * lVar34;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      lVar41 = SUB168(auVar14 * auVar26,8);
      lVar43 = in_RSI[3];
      iVar39 = SUB164(auVar14 * auVar26,8);
      uVar47 = *(uint *)(lVar43 + lVar41 * 4);
      if (uVar47 != 0) {
        do {
          if (uVar47 == uVar42) {
            cVar30 = CharString::operator==
                               ((CharString *)
                                (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar41 * 4) * 8),in_RDX);
            if (cVar30 != '\0') {
              iVar39 = *(int *)((long)in_RSI + 0x24);
              lVar34 = *in_RSI;
              iVar32 = *(int *)(in_RSI[1] + lVar41 * 4);
              goto LAB_0010ac31;
            }
            lVar43 = in_RSI[3];
          }
          uVar48 = uVar48 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(iVar39 + 1) * lVar34;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar40;
          lVar41 = SUB168(auVar15 * auVar27,8);
          uVar47 = *(uint *)(lVar43 + lVar41 * 4);
          iVar39 = SUB164(auVar15 * auVar27,8);
        } while ((uVar47 != 0) &&
                (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar47 * lVar34, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar40, auVar17._8_8_ = 0,
                auVar17._0_8_ = (ulong)((uVar2 + iVar39) - SUB164(auVar16 * auVar28,8)) * lVar34,
                auVar29._8_8_ = 0, auVar29._0_8_ = uVar40, uVar48 <= SUB164(auVar17 * auVar29,8)));
      }
      iVar39 = *(int *)((long)in_RSI + 0x24);
    }
  }
  if ((float)uVar31 * __LC159 < (float)(iVar39 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar39 = *(int *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      iVar32 = -1;
      goto LAB_0010ac31;
    }
    uVar31 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar31;
    if (uVar31 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar3 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar4 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar33 = 0;
      lVar43 = in_RSI[3];
      lVar41 = in_RSI[2];
      do {
        uVar45 = uVar33 & 0xffffffff;
        uVar46 = (undefined4)uVar33;
        uVar47 = 0;
        uVar31 = *(uint *)((long)pvVar3 + (ulong)*(uint *)((long)pvVar4 + uVar33 * 4) * 4);
        uVar40 = (ulong)uVar31;
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar44 = CONCAT44(0,uVar2);
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar40 * lVar35;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar44;
        lVar37 = SUB168(auVar6 * auVar18,8) * 4;
        iVar39 = SUB164(auVar6 * auVar18,8);
        puVar38 = (uint *)(lVar43 + lVar37);
        uVar42 = *puVar38;
        if (uVar42 == 0) {
          lVar35 = uVar33 * 4;
        }
        else {
          do {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar42 * lVar35;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar44;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)((uVar2 + iVar39) - SUB164(auVar7 * auVar19,8)) * lVar35;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar44;
            local_88 = SUB164(auVar8 * auVar20,8);
            if (local_88 < uVar47) {
              *(int *)(lVar41 + uVar45 * 4) = iVar39;
              uVar31 = *puVar38;
              *puVar38 = (uint)uVar40;
              uVar42 = *(uint *)(lVar37 + lVar34);
              uVar40 = (ulong)uVar31;
              *(uint *)(lVar37 + lVar34) = (uint)uVar45;
              uVar45 = (ulong)uVar42;
              uVar47 = local_88;
            }
            uVar46 = (undefined4)uVar45;
            uVar31 = (uint)uVar40;
            uVar47 = uVar47 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar39 + 1) * lVar35;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            lVar37 = SUB168(auVar9 * auVar21,8) * 4;
            iVar39 = SUB164(auVar9 * auVar21,8);
            puVar38 = (uint *)(lVar43 + lVar37);
            uVar42 = *puVar38;
          } while (uVar42 != 0);
          lVar35 = uVar45 << 2;
        }
        *puVar38 = uVar31;
        uVar33 = uVar33 + 1;
        *(int *)(lVar41 + lVar35) = iVar39;
        *(undefined4 *)(lVar34 + lVar37) = uVar46;
      } while ((uint)uVar33 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(pvVar4,false);
  }
  pbVar36 = (byte *)CharString::get_data();
  bVar1 = *pbVar36;
  if (bVar1 == 0) {
    uVar33 = 0x1505;
  }
  else {
    uVar31 = 0x1505;
    do {
      pbVar36 = pbVar36 + 1;
      uVar31 = uVar31 * 0x21 ^ (uint)bVar1;
      bVar1 = *pbVar36;
    } while (bVar1 != 0);
    if (uVar31 == 0) {
      uVar31 = 1;
    }
    uVar33 = (ulong)uVar31;
  }
  uVar31 = (uint)uVar33;
  uVar40 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar34 = *in_RSI;
  this = (CowData<char> *)(lVar34 + uVar40 * 8);
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char>::_ref(this,(CowData *)in_RDX);
    uVar40 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar46 = (undefined4)uVar40;
  uVar47 = 0;
  lVar41 = in_RSI[3];
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar45 = CONCAT44(0,uVar2);
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar33 * lVar37;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar45;
  lVar43 = SUB168(auVar10 * auVar22,8) * 4;
  iVar39 = SUB164(auVar10 * auVar22,8);
  lVar35 = in_RSI[2];
  lVar5 = in_RSI[1];
  puVar38 = (uint *)(lVar41 + lVar43);
  uVar42 = *puVar38;
  uVar44 = uVar40;
  while (uVar42 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar42 * lVar37;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar45;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar39) - SUB164(auVar11 * auVar23,8)) * lVar37;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar45;
    local_88 = SUB164(auVar12 * auVar24,8);
    if (local_88 < uVar47) {
      *(int *)(lVar35 + uVar44 * 4) = iVar39;
      uVar31 = *puVar38;
      *puVar38 = (uint)uVar33;
      puVar38 = (uint *)(lVar43 + lVar5);
      uVar42 = *puVar38;
      uVar33 = (ulong)uVar31;
      *puVar38 = (uint)uVar40;
      uVar40 = (ulong)uVar42;
      uVar44 = uVar40;
      uVar47 = local_88;
    }
    uVar46 = (undefined4)uVar40;
    uVar31 = (uint)uVar33;
    uVar47 = uVar47 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar39 + 1) * lVar37;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar45;
    lVar43 = SUB168(auVar13 * auVar25,8) * 4;
    iVar39 = SUB164(auVar13 * auVar25,8);
    puVar38 = (uint *)(lVar41 + lVar43);
    uVar42 = *puVar38;
  }
  *puVar38 = uVar31;
  *(int *)(lVar35 + uVar44 * 4) = iVar39;
  *(undefined4 *)(lVar5 + lVar43) = uVar46;
  iVar32 = *(int *)((long)in_RSI + 0x24);
  iVar39 = iVar32 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar39;
LAB_0010ac31:
  *(int *)(param_1 + 0xc) = iVar32;
  *(long *)param_1 = lVar34;
  *(int *)(param_1 + 8) = iVar39;
  return param_1;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<unsigned long, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, unsigned long> > >::~HashMap() */

void __thiscall
HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
::~HashMap(HashMap<unsigned_long,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_long>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


