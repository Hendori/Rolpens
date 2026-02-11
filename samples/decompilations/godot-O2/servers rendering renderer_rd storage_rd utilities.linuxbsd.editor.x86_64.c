
/* RendererRD::Utilities::get_rendering_info(RenderingServer::RenderingInfo) */

undefined8 __thiscall RendererRD::Utilities::get_rendering_info(Utilities *this,int param_2)

{
  if (param_2 == 3) {
    return *(undefined8 *)(this + 0x68);
  }
  if (param_2 != 4) {
    if (param_2 != 5) {
      return 0;
    }
    return *(undefined8 *)(this + 0x78);
  }
  return *(undefined8 *)(this + 0x70);
}



/* RendererRD::Utilities::visibility_notifier_get_aabb(RID) const */

undefined8 *
RendererRD::Utilities::visibility_notifier_get_aabb(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x2c))) {
    puVar3 = (undefined8 *)
             (((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x28)) * 0x70 +
             *(long *)(*(long *)(param_2 + 0x18) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x28)) * 8));
    if (*(int *)(puVar3 + 0xd) == (int)(param_3 >> 0x20)) {
      uVar2 = puVar3[1];
      uVar1 = puVar3[2];
      *param_1 = *puVar3;
      param_1[1] = uVar2;
      param_1[2] = uVar1;
      return param_1;
    }
    if (*(int *)(puVar3 + 0xd) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("visibility_notifier_get_aabb",
                   "servers/rendering/renderer_rd/storage_rd/utilities.cpp",0xc0,
                   "Parameter \"vn\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererRD::Utilities::visibility_notifier_free(RID) */

long __thiscall RendererRD::Utilities::visibility_notifier_free(Utilities *this,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = (uint)param_2;
  iVar3 = (int)(param_2 >> 0x20);
  if ((param_2 != 0) && (uVar4 < *(uint *)(this + 0x2c))) {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x70 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    if (*(int *)(lVar5 + 0x68) == iVar3) goto LAB_0010018c;
    if (*(int *)(lVar5 + 0x68) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      lVar5 = 0;
      goto LAB_0010018c;
    }
  }
  lVar5 = 0;
LAB_0010018c:
  Dependency::deleted_notify((RID *)(lVar5 + 0x38));
  if (uVar4 < *(uint *)(this + 0x2c)) {
    uVar1 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28);
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x70;
    lVar6 = *(long *)(*(long *)(this + 0x18) + uVar1 * 8) + lVar5;
    if (*(int *)(lVar6 + 0x68) < 0) {
      lVar5 = 0;
      _err_print_error(&_LC8,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0);
    }
    else if (iVar3 == *(int *)(lVar6 + 0x68)) {
      Dependency::~Dependency((Dependency *)(lVar6 + 0x38));
      Callable::~Callable((Callable *)(lVar6 + 0x28));
      Callable::~Callable((Callable *)(lVar6 + 0x18));
      lVar6 = *(long *)(this + 0x20);
      *(undefined4 *)(*(long *)(*(long *)(this + 0x18) + uVar1 * 8) + 0x68 + lVar5) = 0xffffffff;
      uVar2 = *(int *)(this + 0x30) - 1;
      *(uint *)(this + 0x30) = uVar2;
      lVar5 = *(long *)(lVar6 + ((ulong)uVar2 / (ulong)*(uint *)(this + 0x28)) * 8);
      *(uint *)(lVar5 + ((ulong)uVar2 % (ulong)*(uint *)(this + 0x28)) * 4) = uVar4;
    }
    else {
      lVar5 = _err_print_error(&_LC8,"./core/templates/rid_owner.h",0x171,"Method/function failed.",
                               0,0);
    }
    return lVar5;
  }
  lVar5 = _err_print_error(&_LC8,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0)
  ;
  return lVar5;
}



/* RendererRD::Utilities::visibility_notifier_set_aabb(RID, AABB const&) */

void __thiscall
RendererRD::Utilities::visibility_notifier_set_aabb
          (Utilities *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    puVar2 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x70 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    if (*(int *)(puVar2 + 0xd) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *puVar2 = *param_3;
      puVar2[1] = uVar1;
      puVar2[2] = param_3[2];
      Dependency::changed_notify(puVar2 + 7,0);
      return;
    }
    if (*(int *)(puVar2 + 0xd) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("visibility_notifier_set_aabb",
                   "servers/rendering/renderer_rd/storage_rd/utilities.cpp",0xb2,
                   "Parameter \"vn\" is null.",0,0);
  return;
}



/* RendererRD::Utilities::visibility_notifier_set_callbacks(RID, Callable const&, Callable const&)
    */

void __thiscall
RendererRD::Utilities::visibility_notifier_set_callbacks
          (Utilities *this,ulong param_2,Callable *param_3,Callable *param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x70 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    if (*(int *)(lVar1 + 0x68) == (int)(param_2 >> 0x20)) {
      Callable::operator=((Callable *)(lVar1 + 0x18),param_3);
      Callable::operator=((Callable *)(lVar1 + 0x28),param_4);
      return;
    }
    if (*(int *)(lVar1 + 0x68) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("visibility_notifier_set_callbacks",
                   "servers/rendering/renderer_rd/storage_rd/utilities.cpp",0xb9,
                   "Parameter \"vn\" is null.",0,0);
  return;
}



/* RendererRD::Utilities::capture_timestamp(String const&) */

void RendererRD::Utilities::capture_timestamp(String *param_1)

{
  String *pSVar1;
  
  pSVar1 = (String *)RenderingDevice::get_singleton();
  RenderingDevice::capture_timestamp(pSVar1);
  return;
}



/* RendererRD::Utilities::get_captured_timestamps_count() const */

void RendererRD::Utilities::get_captured_timestamps_count(void)

{
  RenderingDevice::get_singleton();
  RenderingDevice::get_captured_timestamps_count();
  return;
}



/* RendererRD::Utilities::get_captured_timestamps_frame() const */

void RendererRD::Utilities::get_captured_timestamps_frame(void)

{
  RenderingDevice::get_singleton();
  RenderingDevice::get_captured_timestamps_frame();
  return;
}



/* RendererRD::Utilities::get_captured_timestamp_gpu_time(unsigned int) const */

void RendererRD::Utilities::get_captured_timestamp_gpu_time(uint param_1)

{
  uint uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::get_captured_timestamp_gpu_time(uVar1);
  return;
}



/* RendererRD::Utilities::get_captured_timestamp_cpu_time(unsigned int) const */

void RendererRD::Utilities::get_captured_timestamp_cpu_time(uint param_1)

{
  uint uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::get_captured_timestamp_cpu_time(uVar1);
  return;
}



/* RendererRD::Utilities::get_captured_timestamp_name(unsigned int) const */

undefined8 RendererRD::Utilities::get_captured_timestamp_name(uint param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RenderingDevice::get_singleton();
  RenderingDevice::get_captured_timestamp_name(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Utilities::update_dirty_resources() */

void RendererRD::Utilities::update_dirty_resources(void)

{
  RendererRD::MaterialStorage::get_singleton();
  RendererRD::MaterialStorage::_update_global_shader_uniforms();
  RendererRD::MaterialStorage::get_singleton();
  RendererRD::MaterialStorage::_update_queued_materials();
  RendererRD::MeshStorage::get_singleton();
  RendererRD::MeshStorage::_update_dirty_multimeshes();
  RendererRD::MeshStorage::get_singleton();
  RendererRD::MeshStorage::_update_dirty_skeletons();
  RendererRD::TextureStorage::get_singleton();
  RendererRD::TextureStorage::update_decal_atlas();
  return;
}



/* RendererRD::Utilities::has_os_feature(String const&) const */

undefined8 __thiscall RendererRD::Utilities::has_os_feature(Utilities *this,String *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = RenderingDevice::get_singleton();
  if (lVar2 != 0) {
    cVar1 = String::operator==(param_1,"rgtc");
    if (cVar1 != '\0') {
      uVar3 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar3,0x8c,1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    cVar1 = String::operator==(param_1,"s3tc");
    if (cVar1 != '\0') {
      uVar3 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar3,0x82,1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    cVar1 = String::operator==(param_1,"bptc");
    if (cVar1 != '\0') {
      uVar3 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar3,0x90,1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    cVar1 = String::operator==(param_1,"etc2");
    if (cVar1 != '\0') {
      uVar3 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar3,0x92,1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    cVar1 = String::operator==(param_1,"astc");
    if (cVar1 != '\0') {
      uVar3 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar3,0x9c,1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    cVar1 = String::operator==(param_1,"astc_hdr");
    if (cVar1 != '\0') {
      uVar3 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar3,0xda,1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



/* RendererRD::Utilities::update_memory_info() */

void __thiscall RendererRD::Utilities::update_memory_info(Utilities *this)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  uVar1 = RenderingDevice::get_memory_usage(uVar1,0);
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = RenderingDevice::get_singleton();
  uVar1 = RenderingDevice::get_memory_usage(uVar1,1);
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = RenderingDevice::get_singleton();
  uVar1 = RenderingDevice::get_memory_usage(uVar1,2);
  *(undefined8 *)(this + 0x78) = uVar1;
  return;
}



/* RendererRD::Utilities::get_video_adapter_name() const */

Utilities * __thiscall RendererRD::Utilities::get_video_adapter_name(Utilities *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RenderingDevice::get_singleton();
  RenderingDevice::get_device_name();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Utilities::get_video_adapter_vendor() const */

Utilities * __thiscall RendererRD::Utilities::get_video_adapter_vendor(Utilities *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RenderingDevice::get_singleton();
  RenderingDevice::get_device_vendor_name();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Utilities::get_video_adapter_type() const */

void RendererRD::Utilities::get_video_adapter_type(void)

{
  RenderingDevice::get_singleton();
  RenderingDevice::get_device_type();
  return;
}



/* RendererRD::Utilities::get_video_adapter_api_version() const */

Utilities * __thiscall RendererRD::Utilities::get_video_adapter_api_version(Utilities *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RenderingDevice::get_singleton();
  RenderingDevice::get_device_api_version();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Utilities::get_maximum_shader_varyings() const */

void RendererRD::Utilities::get_maximum_shader_varyings(void)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::limit_get(uVar1,0x30);
  return;
}



/* RendererRD::Utilities::get_maximum_uniform_buffer_size() const */

void RendererRD::Utilities::get_maximum_uniform_buffer_size(void)

{
  undefined8 uVar1;
  
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::limit_get(uVar1,0x15);
  return;
}



/* RendererRD::Utilities::get_maximum_viewport_size() const */

ulong RendererRD::Utilities::get_maximum_viewport_size(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = RenderingDevice::get_singleton();
  uVar2 = RenderingDevice::limit_get(uVar1,0x23);
  lVar3 = RenderingDevice::limit_get(uVar1,0x24);
  return uVar2 & 0xffffffff | lVar3 << 0x20;
}



/* RendererRD::Utilities::capture_timestamps_begin() */

void RendererRD::Utilities::capture_timestamps_begin(void)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = (String *)RenderingDevice::get_singleton();
  local_40 = 0;
  local_30 = 0xb;
  local_38 = "Frame Begin";
  String::parse_latin1((StrRange *)&local_40);
  RenderingDevice::capture_timestamp(pSVar3);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::Utilities::free(RID) */

undefined4 __thiscall RendererRD::Utilities::free(Utilities *this,ulong param_2)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  uVar7 = RendererRD::LightStorage::get_singleton();
  cVar4 = RendererRD::LightStorage::free(uVar7,param_2);
  if (cVar4 != '\0') {
    return 1;
  }
  uVar7 = RendererRD::MaterialStorage::get_singleton();
  cVar4 = RendererRD::MaterialStorage::free(uVar7,param_2);
  if (cVar4 != '\0') {
    return 1;
  }
  uVar7 = RendererRD::MeshStorage::get_singleton();
  cVar4 = RendererRD::MeshStorage::free(uVar7,param_2);
  if (cVar4 != '\0') {
    return 1;
  }
  uVar7 = RendererRD::ParticlesStorage::get_singleton();
  cVar4 = RendererRD::ParticlesStorage::free(uVar7,param_2);
  if (cVar4 == '\0') {
    uVar7 = RendererRD::TextureStorage::get_singleton();
    uVar11 = param_2;
    uVar5 = RendererRD::TextureStorage::free(uVar7);
    plVar3 = GI::singleton;
    if ((char)uVar5 != '\0') {
      return 1;
    }
    ppVar1 = (pthread_mutex_t *)(GI::singleton + 7);
    uVar6 = pthread_mutex_lock(ppVar1);
    if (uVar6 == 0) {
      uVar9 = (uint)param_2;
      uVar12 = param_2 & 0xffffffff;
      uVar10 = (uint)(param_2 >> 0x20);
      if (((uVar9 < *(uint *)((long)plVar3 + 0x24)) &&
          (uVar11 = (ulong)*(uint *)(plVar3 + 4), param_2 >> 0x20 != 0x7fffffff)) &&
         ((*(uint *)(((param_2 & 0xffffffff) % uVar11) * 0xe8 +
                     *(long *)(plVar3[2] + ((param_2 & 0xffffffff) / uVar11) * 8) + 0xe0) &
          0x7fffffff) == uVar10)) {
        pthread_mutex_unlock(ppVar1);
        (**(code **)(*GI::singleton + 0x18))(GI::singleton,param_2);
        return 1;
      }
      pthread_mutex_unlock(ppVar1);
      plVar3 = Fog::singleton;
      ppVar1 = (pthread_mutex_t *)(Fog::singleton + 7);
      uVar6 = pthread_mutex_lock(ppVar1);
      if (uVar6 == 0) {
        if (uVar9 < *(uint *)((long)plVar3 + 0x24)) {
          if (param_2 >> 0x20 == 0x7fffffff) {
            pthread_mutex_unlock(ppVar1);
            return uVar5;
          }
          if ((*(uint *)((uVar12 % (ulong)*(uint *)(plVar3 + 4)) * 0x50 +
                         *(long *)(plVar3[2] + (uVar12 / *(uint *)(plVar3 + 4)) * 8) + 0x48) &
              0x7fffffff) == uVar10) {
            pthread_mutex_unlock(ppVar1);
            (**(code **)(*Fog::singleton + 0x20))(Fog::singleton,param_2);
            return 1;
          }
          pthread_mutex_unlock(ppVar1);
          if (*(uint *)(this + 0x2c) <= uVar9) {
            return uVar5;
          }
        }
        else {
          pthread_mutex_unlock(ppVar1);
          if (*(uint *)(this + 0x2c) <= uVar9) {
            return uVar5;
          }
          if (param_2 >> 0x20 == 0x7fffffff) {
            return uVar5;
          }
        }
        if ((*(uint *)((uVar12 % (ulong)*(uint *)(this + 0x28)) * 0x70 +
                       *(long *)(*(long *)(this + 0x18) + (uVar12 / *(uint *)(this + 0x28)) * 8) +
                      0x68) & 0x7fffffff) == uVar10) {
          (**(code **)(*(long *)this + 0x38))(this,param_2);
          return 1;
        }
        return uVar5;
      }
    }
    uVar12 = (ulong)uVar6;
    std::__throw_system_error(uVar6);
    lVar8 = RendererRD::MeshStorage::get_singleton();
    ppVar1 = (pthread_mutex_t *)(lVar8 + 0xe0);
    uVar6 = pthread_mutex_lock(ppVar1);
    if (uVar6 == 0) {
      uVar10 = (uint)uVar11;
      uVar14 = uVar11 & 0xffffffff;
      uVar9 = (uint)(uVar11 >> 0x20);
      if (((uVar10 < *(uint *)(lVar8 + 0xcc)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
         ((*(uint *)(((uVar11 & 0xffffffff) % (ulong)*(uint *)(lVar8 + 200)) * 0xe0 +
                     *(long *)(*(long *)(lVar8 + 0xb8) +
                              ((uVar11 & 0xffffffff) / (ulong)*(uint *)(lVar8 + 200)) * 8) + 0xd8) &
          0x7fffffff) == uVar9)) {
        pthread_mutex_unlock(ppVar1);
        return 1;
      }
      pthread_mutex_unlock(ppVar1);
      lVar8 = RendererRD::MeshStorage::get_singleton();
      ppVar1 = (pthread_mutex_t *)(lVar8 + 0x1b0);
      uVar6 = pthread_mutex_lock(ppVar1);
      if (uVar6 == 0) {
        if (((uVar10 < *(uint *)(lVar8 + 0x19c)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
           ((*(uint *)((uVar14 % (ulong)*(uint *)(lVar8 + 0x198)) * 0x160 +
                       *(long *)(*(long *)(lVar8 + 0x188) + (uVar14 / *(uint *)(lVar8 + 0x198)) * 8)
                      + 0x158) & 0x7fffffff) == uVar9)) {
          pthread_mutex_unlock(ppVar1);
          return 2;
        }
        pthread_mutex_unlock(ppVar1);
        lVar8 = RendererRD::LightStorage::get_singleton();
        ppVar1 = (pthread_mutex_t *)(lVar8 + 0x148);
        uVar6 = pthread_mutex_lock(ppVar1);
        if (uVar6 == 0) {
          if (((uVar10 < *(uint *)(lVar8 + 0x134)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
             ((*(uint *)((uVar14 % (ulong)*(uint *)(lVar8 + 0x130)) * 0x90 +
                         *(long *)(*(long *)(lVar8 + 0x120) +
                                  (uVar14 / *(uint *)(lVar8 + 0x130)) * 8) + 0x88) & 0x7fffffff) ==
              uVar9)) {
            pthread_mutex_unlock(ppVar1);
            return 6;
          }
          pthread_mutex_unlock(ppVar1);
          lVar8 = RendererRD::TextureStorage::get_singleton();
          ppVar1 = (pthread_mutex_t *)(lVar8 + 0x1f0);
          uVar6 = pthread_mutex_lock(ppVar1);
          if (uVar6 == 0) {
            if (((uVar10 < *(uint *)(lVar8 + 0x1dc)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
               ((*(uint *)((uVar14 % (ulong)*(uint *)(lVar8 + 0x1d8)) * 0xa0 +
                           *(long *)(*(long *)(lVar8 + 0x1c8) +
                                    (uVar14 / *(uint *)(lVar8 + 0x1d8)) * 8) + 0x98) & 0x7fffffff)
                == uVar9)) {
              pthread_mutex_unlock(ppVar1);
              return 7;
            }
            pthread_mutex_unlock(ppVar1);
            plVar3 = GI::singleton;
            ppVar1 = (pthread_mutex_t *)(GI::singleton + 7);
            uVar6 = pthread_mutex_lock(ppVar1);
            if (uVar6 == 0) {
              if (((uVar10 < *(uint *)((long)plVar3 + 0x24)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
                 ((*(uint *)((uVar14 % (ulong)*(uint *)(plVar3 + 4)) * 0xe8 +
                             *(long *)(plVar3[2] + (uVar14 / *(uint *)(plVar3 + 4)) * 8) + 0xe0) &
                  0x7fffffff) == uVar9)) {
                pthread_mutex_unlock(ppVar1);
                return 8;
              }
              pthread_mutex_unlock(ppVar1);
              lVar8 = RendererRD::LightStorage::get_singleton();
              ppVar1 = (pthread_mutex_t *)(lVar8 + 0x40);
              uVar6 = pthread_mutex_lock(ppVar1);
              if (uVar6 == 0) {
                if (((uVar10 < *(uint *)(lVar8 + 0x2c)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
                   ((*(uint *)((uVar14 % (ulong)*(uint *)(lVar8 + 0x28)) * 0xe8 +
                               *(long *)(*(long *)(lVar8 + 0x18) +
                                        (uVar14 / *(uint *)(lVar8 + 0x28)) * 8) + 0xe0) & 0x7fffffff
                    ) == uVar9)) {
                  pthread_mutex_unlock(ppVar1);
                  return 5;
                }
                pthread_mutex_unlock(ppVar1);
                lVar8 = RendererRD::LightStorage::get_singleton();
                ppVar1 = (pthread_mutex_t *)(lVar8 + 0x298);
                uVar6 = pthread_mutex_lock(ppVar1);
                if (uVar6 == 0) {
                  if (((uVar10 < *(uint *)(lVar8 + 0x284)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
                     ((*(uint *)((uVar14 % (ulong)*(uint *)(lVar8 + 0x280)) * 0xb8 +
                                 *(long *)(*(long *)(lVar8 + 0x270) +
                                          (uVar14 / *(uint *)(lVar8 + 0x280)) * 8) + 0xb0) &
                      0x7fffffff) == uVar9)) {
                    pthread_mutex_unlock(ppVar1);
                    return 9;
                  }
                  pthread_mutex_unlock(ppVar1);
                  lVar8 = RendererRD::ParticlesStorage::get_singleton();
                  ppVar1 = (pthread_mutex_t *)(lVar8 + 0x930);
                  uVar6 = pthread_mutex_lock(ppVar1);
                  if (uVar6 == 0) {
                    if (((uVar10 < *(uint *)(lVar8 + 0x91c)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
                       ((*(uint *)((uVar14 % (ulong)*(uint *)(lVar8 + 0x918)) * 0x2f8 +
                                   *(long *)(*(long *)(lVar8 + 0x908) +
                                            (uVar14 / *(uint *)(lVar8 + 0x918)) * 8) + 0x2f0) &
                        0x7fffffff) == uVar9)) {
                      pthread_mutex_unlock(ppVar1);
                      return 3;
                    }
                    pthread_mutex_unlock(ppVar1);
                    lVar8 = RendererRD::ParticlesStorage::get_singleton();
                    ppVar1 = (pthread_mutex_t *)(lVar8 + 0x988);
                    uVar6 = pthread_mutex_lock(ppVar1);
                    if (uVar6 == 0) {
                      if (((uVar10 < *(uint *)(lVar8 + 0x974)) && (uVar11 >> 0x20 != 0x7fffffff)) &&
                         ((*(uint *)(*(long *)(*(long *)(lVar8 + 0x960) +
                                              (uVar14 / *(uint *)(lVar8 + 0x970)) * 8) +
                                     (uVar14 % (ulong)*(uint *)(lVar8 + 0x970)) * 0x88 + 0x80) &
                          0x7fffffff) == uVar9)) {
                        pthread_mutex_unlock(ppVar1);
                        return 4;
                      }
                      pthread_mutex_unlock(ppVar1);
                      plVar3 = Fog::singleton;
                      ppVar1 = (pthread_mutex_t *)(Fog::singleton + 7);
                      uVar6 = pthread_mutex_lock(ppVar1);
                      if (uVar6 == 0) {
                        if (uVar10 < *(uint *)((long)plVar3 + 0x24)) {
                          if (uVar11 >> 0x20 == 0x7fffffff) {
                            pthread_mutex_unlock(ppVar1);
                            return 0;
                          }
                          if ((*(uint *)((uVar14 % (ulong)*(uint *)(plVar3 + 4)) * 0x50 +
                                         *(long *)(plVar3[2] + (uVar14 / *(uint *)(plVar3 + 4)) * 8)
                                        + 0x48) & 0x7fffffff) == uVar9) {
                            pthread_mutex_unlock(ppVar1);
                            return 0xc;
                          }
                          pthread_mutex_unlock(ppVar1);
                          if (*(uint *)(uVar12 + 0x2c) <= uVar10) {
                            return 0;
                          }
                        }
                        else {
                          pthread_mutex_unlock(ppVar1);
                          if (*(uint *)(uVar12 + 0x2c) <= uVar10) {
                            return 0;
                          }
                          if (uVar11 >> 0x20 == 0x7fffffff) {
                            return 0;
                          }
                        }
                        if ((*(uint *)((uVar14 % (ulong)*(uint *)(uVar12 + 0x28)) * 0x70 +
                                       *(long *)(*(long *)(uVar12 + 0x18) +
                                                (uVar14 / *(uint *)(uVar12 + 0x28)) * 8) + 0x68) &
                            0x7fffffff) != uVar9) {
                          return 0;
                        }
                        return 0xb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar13 = (undefined8 *)(ulong)uVar6;
    std::__throw_system_error(uVar6);
    *(undefined1 *)(puVar13 + 1) = 0;
    *(undefined1 (*) [16])(puVar13 + 10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar13 + 8) = (undefined1  [16])0x0;
    uVar2 = _UNK_00104428;
    uVar7 = __LC19;
    *puVar13 = &PTR__Utilities_00104158;
    puVar13[5] = uVar7;
    puVar13[6] = uVar2;
    puVar13[2] = &PTR__RID_Alloc_00104138;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[0xc] = 0;
    *(undefined4 *)(puVar13 + 10) = 1;
    puVar13[0xf] = 0;
    singleton = puVar13;
    *(undefined1 (*) [16])(puVar13 + 0xd) = (undefined1  [16])0x0;
    return 0x104138;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::Utilities::get_base_type(RID) const */

undefined ** __thiscall RendererRD::Utilities::get_base_type(Utilities *this,ulong param_2)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar5 = RendererRD::MeshStorage::get_singleton();
  ppVar1 = (pthread_mutex_t *)(lVar5 + 0xe0);
  uVar4 = pthread_mutex_lock(ppVar1);
  if (uVar4 == 0) {
    uVar6 = (uint)param_2;
    uVar9 = param_2 & 0xffffffff;
    uVar7 = (uint)(param_2 >> 0x20);
    if (((uVar6 < *(uint *)(lVar5 + 0xcc)) && (param_2 >> 0x20 != 0x7fffffff)) &&
       ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar5 + 200)) * 0xe0 +
                   *(long *)(*(long *)(lVar5 + 0xb8) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar5 + 200)) * 8) + 0xd8) &
        0x7fffffff) == uVar7)) {
      pthread_mutex_unlock(ppVar1);
      return (undefined **)0x1;
    }
    pthread_mutex_unlock(ppVar1);
    lVar5 = RendererRD::MeshStorage::get_singleton();
    ppVar1 = (pthread_mutex_t *)(lVar5 + 0x1b0);
    uVar4 = pthread_mutex_lock(ppVar1);
    if (uVar4 == 0) {
      if (((uVar6 < *(uint *)(lVar5 + 0x19c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
         ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x198)) * 0x160 +
                     *(long *)(*(long *)(lVar5 + 0x188) + (uVar9 / *(uint *)(lVar5 + 0x198)) * 8) +
                    0x158) & 0x7fffffff) == uVar7)) {
        pthread_mutex_unlock(ppVar1);
        return (undefined **)0x2;
      }
      pthread_mutex_unlock(ppVar1);
      lVar5 = RendererRD::LightStorage::get_singleton();
      ppVar1 = (pthread_mutex_t *)(lVar5 + 0x148);
      uVar4 = pthread_mutex_lock(ppVar1);
      if (uVar4 == 0) {
        if (((uVar6 < *(uint *)(lVar5 + 0x134)) && (param_2 >> 0x20 != 0x7fffffff)) &&
           ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x130)) * 0x90 +
                       *(long *)(*(long *)(lVar5 + 0x120) + (uVar9 / *(uint *)(lVar5 + 0x130)) * 8)
                      + 0x88) & 0x7fffffff) == uVar7)) {
          pthread_mutex_unlock(ppVar1);
          return (undefined **)0x6;
        }
        pthread_mutex_unlock(ppVar1);
        lVar5 = RendererRD::TextureStorage::get_singleton();
        ppVar1 = (pthread_mutex_t *)(lVar5 + 0x1f0);
        uVar4 = pthread_mutex_lock(ppVar1);
        if (uVar4 == 0) {
          if (((uVar6 < *(uint *)(lVar5 + 0x1dc)) && (param_2 >> 0x20 != 0x7fffffff)) &&
             ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x1d8)) * 0xa0 +
                         *(long *)(*(long *)(lVar5 + 0x1c8) + (uVar9 / *(uint *)(lVar5 + 0x1d8)) * 8
                                  ) + 0x98) & 0x7fffffff) == uVar7)) {
            pthread_mutex_unlock(ppVar1);
            return (undefined **)0x7;
          }
          pthread_mutex_unlock(ppVar1);
          lVar5 = GI::singleton;
          ppVar1 = (pthread_mutex_t *)(GI::singleton + 0x38);
          uVar4 = pthread_mutex_lock(ppVar1);
          if (uVar4 == 0) {
            if (((uVar6 < *(uint *)(lVar5 + 0x24)) && (param_2 >> 0x20 != 0x7fffffff)) &&
               ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x20)) * 0xe8 +
                           *(long *)(*(long *)(lVar5 + 0x10) + (uVar9 / *(uint *)(lVar5 + 0x20)) * 8
                                    ) + 0xe0) & 0x7fffffff) == uVar7)) {
              pthread_mutex_unlock(ppVar1);
              return (undefined **)0x8;
            }
            pthread_mutex_unlock(ppVar1);
            lVar5 = RendererRD::LightStorage::get_singleton();
            ppVar1 = (pthread_mutex_t *)(lVar5 + 0x40);
            uVar4 = pthread_mutex_lock(ppVar1);
            if (uVar4 == 0) {
              if (((uVar6 < *(uint *)(lVar5 + 0x2c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
                 ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x28)) * 0xe8 +
                             *(long *)(*(long *)(lVar5 + 0x18) +
                                      (uVar9 / *(uint *)(lVar5 + 0x28)) * 8) + 0xe0) & 0x7fffffff)
                  == uVar7)) {
                pthread_mutex_unlock(ppVar1);
                return (undefined **)0x5;
              }
              pthread_mutex_unlock(ppVar1);
              lVar5 = RendererRD::LightStorage::get_singleton();
              ppVar1 = (pthread_mutex_t *)(lVar5 + 0x298);
              uVar4 = pthread_mutex_lock(ppVar1);
              if (uVar4 == 0) {
                if (((uVar6 < *(uint *)(lVar5 + 0x284)) && (param_2 >> 0x20 != 0x7fffffff)) &&
                   ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x280)) * 0xb8 +
                               *(long *)(*(long *)(lVar5 + 0x270) +
                                        (uVar9 / *(uint *)(lVar5 + 0x280)) * 8) + 0xb0) & 0x7fffffff
                    ) == uVar7)) {
                  pthread_mutex_unlock(ppVar1);
                  return (undefined **)0x9;
                }
                pthread_mutex_unlock(ppVar1);
                lVar5 = RendererRD::ParticlesStorage::get_singleton();
                ppVar1 = (pthread_mutex_t *)(lVar5 + 0x930);
                uVar4 = pthread_mutex_lock(ppVar1);
                if (uVar4 == 0) {
                  if (((uVar6 < *(uint *)(lVar5 + 0x91c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
                     ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x918)) * 0x2f8 +
                                 *(long *)(*(long *)(lVar5 + 0x908) +
                                          (uVar9 / *(uint *)(lVar5 + 0x918)) * 8) + 0x2f0) &
                      0x7fffffff) == uVar7)) {
                    pthread_mutex_unlock(ppVar1);
                    return (undefined **)0x3;
                  }
                  pthread_mutex_unlock(ppVar1);
                  lVar5 = RendererRD::ParticlesStorage::get_singleton();
                  ppVar1 = (pthread_mutex_t *)(lVar5 + 0x988);
                  uVar4 = pthread_mutex_lock(ppVar1);
                  if (uVar4 == 0) {
                    if (((uVar6 < *(uint *)(lVar5 + 0x974)) && (param_2 >> 0x20 != 0x7fffffff)) &&
                       ((*(uint *)(*(long *)(*(long *)(lVar5 + 0x960) +
                                            (uVar9 / *(uint *)(lVar5 + 0x970)) * 8) +
                                   (uVar9 % (ulong)*(uint *)(lVar5 + 0x970)) * 0x88 + 0x80) &
                        0x7fffffff) == uVar7)) {
                      pthread_mutex_unlock(ppVar1);
                      return (undefined **)0x4;
                    }
                    pthread_mutex_unlock(ppVar1);
                    lVar5 = Fog::singleton;
                    ppVar1 = (pthread_mutex_t *)(Fog::singleton + 0x38);
                    uVar4 = pthread_mutex_lock(ppVar1);
                    if (uVar4 == 0) {
                      if (uVar6 < *(uint *)(lVar5 + 0x24)) {
                        if (param_2 >> 0x20 == 0x7fffffff) {
                          pthread_mutex_unlock(ppVar1);
                          return (undefined **)0x0;
                        }
                        if ((*(uint *)((uVar9 % (ulong)*(uint *)(lVar5 + 0x20)) * 0x50 +
                                       *(long *)(*(long *)(lVar5 + 0x10) +
                                                (uVar9 / *(uint *)(lVar5 + 0x20)) * 8) + 0x48) &
                            0x7fffffff) == uVar7) {
                          pthread_mutex_unlock(ppVar1);
                          return (undefined **)0xc;
                        }
                        pthread_mutex_unlock(ppVar1);
                        if (*(uint *)(this + 0x2c) <= uVar6) {
                          return (undefined **)0x0;
                        }
                      }
                      else {
                        pthread_mutex_unlock(ppVar1);
                        if (*(uint *)(this + 0x2c) <= uVar6) {
                          return (undefined **)0x0;
                        }
                        if (param_2 >> 0x20 == 0x7fffffff) {
                          return (undefined **)0x0;
                        }
                      }
                      if ((*(uint *)((uVar9 % (ulong)*(uint *)(this + 0x28)) * 0x70 +
                                     *(long *)(*(long *)(this + 0x18) +
                                              (uVar9 / *(uint *)(this + 0x28)) * 8) + 0x68) &
                          0x7fffffff) != uVar7) {
                        return (undefined **)0x0;
                      }
                      return (undefined **)0xb;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar8 = (undefined8 *)(ulong)uVar4;
  std::__throw_system_error(uVar4);
  *(undefined1 *)(puVar8 + 1) = 0;
  *(undefined1 (*) [16])(puVar8 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 8) = (undefined1  [16])0x0;
  uVar3 = _UNK_00104428;
  uVar2 = __LC19;
  *puVar8 = &PTR__Utilities_00104158;
  puVar8[5] = uVar2;
  puVar8[6] = uVar3;
  puVar8[2] = &PTR__RID_Alloc_00104138;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 10) = 1;
  puVar8[0xf] = 0;
  singleton = puVar8;
  *(undefined1 (*) [16])(puVar8 + 0xd) = (undefined1  [16])0x0;
  return &PTR__RID_Alloc_00104138;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::Utilities::Utilities() */

void __thiscall RendererRD::Utilities::Utilities(Utilities *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  this[8] = (Utilities)0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  uVar2 = _UNK_00104428;
  uVar1 = __LC19;
  *(undefined ***)this = &PTR__Utilities_00104158;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined ***)(this + 0x10) = &PTR__RID_Alloc_00104138;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined8 *)(this + 0x78) = 0;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  return;
}



/* RendererRD::Utilities::visibility_notifier_call(RID, bool, bool) */

void __thiscall
RendererRD::Utilities::visibility_notifier_call
          (Utilities *this,ulong param_2,char param_3,char param_4)

{
  char cVar1;
  long lVar2;
  Variant **ppVVar3;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x70 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    if (*(int *)(lVar2 + 0x68) == (int)(param_2 >> 0x20)) {
      if (param_3 == '\0') {
        ppVVar3 = (Variant **)(lVar2 + 0x28);
        cVar1 = Callable::is_valid();
        if (cVar1 != '\0') {
          if (param_4 == '\0') goto LAB_001013d0;
LAB_00101370:
          Variant::Variant((Variant *)local_38,0);
          Callable::call_deferredp(ppVVar3,0);
          cVar1 = Variant::needs_deinit[local_38[0]];
joined_r0x001013ea:
          if (cVar1 != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      else {
        ppVVar3 = (Variant **)(lVar2 + 0x18);
        cVar1 = Callable::is_valid();
        if (cVar1 != '\0') {
          if (param_4 != '\0') goto LAB_00101370;
LAB_001013d0:
          Callable::call<>();
          cVar1 = Variant::needs_deinit[local_38[0]];
          goto joined_r0x001013ea;
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00101483;
    }
    if (*(int *)(lVar2 + 0x68) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("visibility_notifier_call",
                     "servers/rendering/renderer_rd/storage_rd/utilities.cpp",0xc6,
                     "Parameter \"vn\" is null.",0,0);
    return;
  }
LAB_00101483:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Utilities::~Utilities() */

void __thiscall RendererRD::Utilities::~Utilities(Utilities *this)

{
  *(undefined ***)this = &PTR__Utilities_00104158;
  singleton = 0;
  RID_Alloc<RendererRD::VisibilityNotifier,false>::~RID_Alloc
            ((RID_Alloc<RendererRD::VisibilityNotifier,false> *)(this + 0x10));
  return;
}



/* RendererRD::Utilities::~Utilities() */

void __thiscall RendererRD::Utilities::~Utilities(Utilities *this)

{
  *(undefined ***)this = &PTR__Utilities_00104158;
  singleton = 0;
  RID_Alloc<RendererRD::VisibilityNotifier,false>::~RID_Alloc
            ((RID_Alloc<RendererRD::VisibilityNotifier,false> *)(this + 0x10));
  operator_delete(this,0x80);
  return;
}



/* RendererRD::Utilities::visibility_notifier_allocate() */

void __thiscall RendererRD::Utilities::visibility_notifier_allocate(Utilities *this)

{
  RID_Alloc<RendererRD::VisibilityNotifier,false>::allocate_rid
            ((RID_Alloc<RendererRD::VisibilityNotifier,false> *)(this + 0x10));
  return;
}



/* RendererRD::Utilities::base_update_dependency(RID, DependencyTracker*) */

void __thiscall
RendererRD::Utilities::base_update_dependency
          (Utilities *this,ulong param_2,DependencyTracker *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
  *pHVar7;
  Dependency *pDVar8;
  uint uVar9;
  uint uVar10;
  pthread_mutex_t *ppVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  DependencyTracker *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = RendererRD::MeshStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0xe0);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) {
LAB_00101c20:
    ppVar11 = (pthread_mutex_t *)(ulong)uVar2;
    std::__throw_system_error(uVar2);
LAB_00101c27:
    pthread_mutex_unlock(ppVar11);
    pDVar8 = (Dependency *)RendererRD::Fog::fog_volume_get_dependency(Fog::singleton,param_2);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101a17;
    goto LAB_00101c52;
  }
  uVar9 = (uint)param_2;
  uVar12 = param_2 & 0xffffffff;
  uVar10 = (uint)(param_2 >> 0x20);
  if (((uVar9 < *(uint *)(lVar3 + 0xcc)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 200)) * 0xe0 +
                 *(long *)(*(long *)(lVar3 + 0xb8) +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 200)) * 8) + 0xd8) &
      0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::MeshStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::MeshStorage::mesh_get_dependency(uVar6,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::MeshStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x1b0);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x19c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x198)) * 0x160 +
                 *(long *)(*(long *)(lVar3 + 0x188) + (uVar12 / *(uint *)(lVar3 + 0x198)) * 8) +
                0x158) & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::MeshStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::MeshStorage::multimesh_get_dependency(uVar6,param_2);
    HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
              ((Dependency **)local_58);
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    local_58[0] = param_3;
    puVar4 = (undefined4 *)
             HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             ::operator[](pHVar7,local_58);
    *puVar4 = uVar1;
    plVar5 = (long *)RendererRD::MeshStorage::get_singleton();
    lVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,param_2);
    if (lVar3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x20))(this,lVar3,param_3);
        return;
      }
      goto LAB_00101c52;
    }
    goto LAB_00101a7f;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::LightStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x148);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x134)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x130)) * 0x90 +
                 *(long *)(*(long *)(lVar3 + 0x120) + (uVar12 / *(uint *)(lVar3 + 0x130)) * 8) +
                0x88) & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::LightStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::LightStorage::reflection_probe_get_dependency(uVar6,param_2);
LAB_00101a48:
    HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
              ((Dependency **)local_58);
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    local_58[0] = param_3;
    puVar4 = (undefined4 *)
             HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             ::operator[](pHVar7,local_58);
    *puVar4 = uVar1;
    goto LAB_00101a7f;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::TextureStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x1f0);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x1dc)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x1d8)) * 0xa0 +
                 *(long *)(*(long *)(lVar3 + 0x1c8) + (uVar12 / *(uint *)(lVar3 + 0x1d8)) * 8) +
                0x98) & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::TextureStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::TextureStorage::decal_get_dependency(uVar6,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = GI::singleton;
  ppVar11 = (pthread_mutex_t *)(GI::singleton + 0x38);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x24)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x20)) * 0xe8 +
                 *(long *)(*(long *)(lVar3 + 0x10) + (uVar12 / *(uint *)(lVar3 + 0x20)) * 8) + 0xe0)
      & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::GI::voxel_gi_get_dependency(GI::singleton,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::LightStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x298);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x284)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x280)) * 0xb8 +
                 *(long *)(*(long *)(lVar3 + 0x270) + (uVar12 / *(uint *)(lVar3 + 0x280)) * 8) +
                0xb0) & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::LightStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::LightStorage::lightmap_get_dependency(uVar6,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::LightStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x40);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x2c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x28)) * 0xe8 +
                 *(long *)(*(long *)(lVar3 + 0x18) + (uVar12 / *(uint *)(lVar3 + 0x28)) * 8) + 0xe0)
      & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::LightStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::LightStorage::light_get_dependency(uVar6,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::ParticlesStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x930);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x91c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x918)) * 0x2f8 +
                 *(long *)(*(long *)(lVar3 + 0x908) + (uVar12 / *(uint *)(lVar3 + 0x918)) * 8) +
                0x2f0) & 0x7fffffff) == uVar10)) {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::ParticlesStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::ParticlesStorage::particles_get_dependency(uVar6,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = RendererRD::ParticlesStorage::get_singleton();
  ppVar11 = (pthread_mutex_t *)(lVar3 + 0x988);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (((uVar9 < *(uint *)(lVar3 + 0x974)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)(*(long *)(*(long *)(lVar3 + 0x960) + (uVar12 / *(uint *)(lVar3 + 0x970)) * 8) +
                 (uVar12 % (ulong)*(uint *)(lVar3 + 0x970)) * 0x88 + 0x80) & 0x7fffffff) == uVar10))
  {
    pthread_mutex_unlock(ppVar11);
    uVar6 = RendererRD::ParticlesStorage::get_singleton();
    pHVar7 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              *)RendererRD::ParticlesStorage::particles_collision_get_dependency(uVar6,param_2);
    goto LAB_00101a48;
  }
  pthread_mutex_unlock(ppVar11);
  lVar3 = Fog::singleton;
  ppVar11 = (pthread_mutex_t *)(Fog::singleton + 0x38);
  uVar2 = pthread_mutex_lock(ppVar11);
  if (uVar2 != 0) goto LAB_00101c20;
  if (uVar9 < *(uint *)(lVar3 + 0x24)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock(ppVar11);
        return;
      }
      goto LAB_00101c52;
    }
    if ((*(uint *)((uVar12 % (ulong)*(uint *)(lVar3 + 0x20)) * 0x50 +
                   *(long *)(*(long *)(lVar3 + 0x10) + (uVar12 / *(uint *)(lVar3 + 0x20)) * 8) +
                  0x48) & 0x7fffffff) != uVar10) {
      pthread_mutex_unlock(ppVar11);
      if (uVar9 < *(uint *)(this + 0x2c)) goto LAB_001019c1;
      goto LAB_00101a7f;
    }
    goto LAB_00101c27;
  }
  pthread_mutex_unlock(ppVar11);
  if ((uVar9 < *(uint *)(this + 0x2c)) && (param_2 >> 0x20 != 0x7fffffff)) {
LAB_001019c1:
    lVar3 = (uVar12 % (ulong)*(uint *)(this + 0x28)) * 0x70 +
            *(long *)(*(long *)(this + 0x18) + (uVar12 / *(uint *)(this + 0x28)) * 8);
    if ((*(uint *)(lVar3 + 0x68) & 0x7fffffff) == uVar10) {
      if (param_2 == 0) {
LAB_00101cd0:
        lVar3 = 0;
      }
      else if ((int)*(uint *)(lVar3 + 0x68) < 0) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,lVar3);
        goto LAB_00101cd0;
      }
      pDVar8 = (Dependency *)(lVar3 + 0x38);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101a17:
        DependencyTracker::update_dependency(param_3,pDVar8);
        return;
      }
      goto LAB_00101c52;
    }
  }
LAB_00101a7f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101c52:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Utilities::visibility_notifier_initialize(RID) */

void __thiscall RendererRD::Utilities::visibility_notifier_initialize(Utilities *this,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  DependencyTracker *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  Dependency local_60 [8];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_90 = 0;
  local_98 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 2;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    puVar4 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x70 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    if ((int)*(uint *)(puVar4 + 0xd) < 0) {
      uVar5 = (uint)(param_2 >> 0x20);
      if (uVar5 == (*(uint *)(puVar4 + 0xd) & 0x7fffffff)) {
        *(uint *)(puVar4 + 0xd) = uVar5;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        Callable::Callable((Callable *)(puVar4 + 3),(Callable *)&local_80);
        Callable::Callable((Callable *)(puVar4 + 5),(Callable *)&local_70);
        puVar4[0xc] = 0;
        uVar5 = *(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4);
        *(undefined1 (*) [16])(puVar4 + 8) = (undefined1  [16])0x0;
        lVar1 = 1;
        *(undefined1 (*) [16])(puVar4 + 10) = (undefined1  [16])0x0;
        if (5 < uVar5) {
          do {
            if (uVar5 <= *(uint *)(hash_table_size_primes + lVar1 * 4)) {
              *(int *)(puVar4 + 0xc) = (int)lVar1;
              goto LAB_00101e58;
            }
            lVar1 = lVar1 + 1;
          } while (lVar1 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_00101e58:
        if ((local_38._4_4_ != 0) && ((long *)local_48._0_8_ != (long *)0x0)) {
          plVar3 = (long *)local_48._0_8_;
          do {
            HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
            ::insert(&local_a0,(uint *)(puVar4 + 7),(bool)((char)plVar3 + '\x10'));
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
        }
        goto LAB_00101e96;
      }
      pcVar6 = "Attempting to initialize the wrong RID";
      uVar2 = 0xfc;
    }
    else {
      pcVar6 = "Initializing already initialized RID";
      uVar2 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar2,
                     "Method/function failed. Returning: nullptr",pcVar6,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_00101e96:
  Dependency::~Dependency(local_60);
  Callable::~Callable((Callable *)&local_70);
  Callable::~Callable((Callable *)&local_80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::Utilities::set_debug_generate_wireframes(bool) */

void RendererRD::Utilities::set_debug_generate_wireframes(bool param_1)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Dependency*, HashMapHasherDefault, HashMapComparatorDefault<Dependency*>
   >::insert(Dependency* const&) */

undefined1  [16]
HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
          (Dependency **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  Dependency *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Dependency *)*in_RSI;
  if (local_88 == (Dependency *)0x0) {
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
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (Dependency *)*in_RSI;
    if (local_88 != (Dependency *)0x0) goto LAB_0010232f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0010232f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_001027d1;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC22 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Dependency *)*in_RSI;
      goto LAB_001027d1;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
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
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (Dependency *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_001027d1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* Variant Callable::call<>() const */

void Callable::call<>(void)

{
  Variant **in_RSI;
  CallError *in_RDI;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,0);
  *(undefined4 *)in_RDI = 0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  Callable::callp(in_RSI,0,(Variant *)0x0,in_RDI);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102b70) */
/* WARNING: Removing unreachable block (ram,0x00102ca0) */
/* WARNING: Removing unreachable block (ram,0x00102e19) */
/* WARNING: Removing unreachable block (ram,0x00102cac) */
/* WARNING: Removing unreachable block (ram,0x00102cb6) */
/* WARNING: Removing unreachable block (ram,0x00102dfb) */
/* WARNING: Removing unreachable block (ram,0x00102cc2) */
/* WARNING: Removing unreachable block (ram,0x00102ccc) */
/* WARNING: Removing unreachable block (ram,0x00102ddd) */
/* WARNING: Removing unreachable block (ram,0x00102cd8) */
/* WARNING: Removing unreachable block (ram,0x00102ce2) */
/* WARNING: Removing unreachable block (ram,0x00102dbf) */
/* WARNING: Removing unreachable block (ram,0x00102cee) */
/* WARNING: Removing unreachable block (ram,0x00102cf8) */
/* WARNING: Removing unreachable block (ram,0x00102da1) */
/* WARNING: Removing unreachable block (ram,0x00102d04) */
/* WARNING: Removing unreachable block (ram,0x00102d0e) */
/* WARNING: Removing unreachable block (ram,0x00102d83) */
/* WARNING: Removing unreachable block (ram,0x00102d16) */
/* WARNING: Removing unreachable block (ram,0x00102d20) */
/* WARNING: Removing unreachable block (ram,0x00102d68) */
/* WARNING: Removing unreachable block (ram,0x00102d28) */
/* WARNING: Removing unreachable block (ram,0x00102d3e) */
/* WARNING: Removing unreachable block (ram,0x00102d4a) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String * vformat<unsigned_int,char_const*>(String *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
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



/* RID_Alloc<RendererRD::VisibilityNotifier, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::VisibilityNotifier,false>::~RID_Alloc
          (RID_Alloc<RendererRD::VisibilityNotifier,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00104138;
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
LAB_00102fba:
    if ((uint)uVar5 < (uint)uVar7) goto LAB_00102ffb;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar8[lVar6],false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar7) <= (uint)lVar6) break;
      puVar8 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar9 = 0;
      do {
        lVar6 = (uVar9 % uVar7) * 0x70 + puVar8[uVar9 / uVar7];
        if (-1 < *(int *)(lVar6 + 0x68)) {
          Dependency::~Dependency((Dependency *)(lVar6 + 0x38));
          Callable::~Callable((Callable *)(lVar6 + 0x28));
          Callable::~Callable((Callable *)(lVar6 + 0x18));
          uVar7 = (ulong)*(uint *)(this + 0x18);
          puVar8 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      goto LAB_00102fba;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00102ffb;
    Memory::free_static((void *)*puVar8,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar8 = *(undefined8 **)(this + 8);
LAB_00102ffb:
  if (puVar8 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar8,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::VisibilityNotifier, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::VisibilityNotifier,false>::~RID_Alloc
          (RID_Alloc<RendererRD::VisibilityNotifier,false> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::VisibilityNotifier, false>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::VisibilityNotifier,false>::allocate_rid
          (RID_Alloc<RendererRD::VisibilityNotifier,false> *this)

{
  void *pvVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == *(uint *)(this + 0x1c)) {
    if (uVar3 == 0) {
      lVar12 = 0;
      uVar13 = 8;
    }
    else {
      uVar13 = (ulong)((int)((ulong)uVar3 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar12 = ((ulong)uVar3 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar4 = Memory::realloc_static(*(void **)(this + 8),uVar13,false);
    *(long *)(this + 8) = lVar4;
    uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x70,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar12) = uVar5;
    lVar6 = Memory::realloc_static(pvVar1,uVar13,false);
    *(long *)(this + 0x10) = lVar6;
    uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar12) = uVar5;
    if (uVar8 != 0) {
      lVar6 = *(long *)(lVar4 + lVar12);
      lVar7 = 0;
      puVar11 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar12) + 0x68);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 0x1c;
        *(int *)(lVar6 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar3 = *(uint *)(this + 0x20);
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar3 = *(uint *)(*(long *)(lVar4 + ((ulong)uVar3 / (ulong)uVar8) * 8) +
                   ((ulong)uVar3 % (ulong)uVar8) * 4);
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(((ulong)uVar3 % (ulong)uVar8) * 0x70 +
              *(long *)(*(long *)(this + 8) + ((ulong)uVar3 / (ulong)uVar8) * 8) + 0x68) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    return CONCAT44(uVar9,uVar3) & 0x7fffffffffffffff;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
::_resize_and_rehash
          (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::operator[](DependencyTracker* const&) */

undefined1  [16] __thiscall
HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
::operator[](HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             *this,DependencyTracker **param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__s;
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
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined1 (*pauVar44) [16];
  DependencyTracker *pDVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_70;
  uint local_68;
  
  uVar31 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  pDVar45 = *param_1;
  uVar37 = *(uint *)(hash_table_size_primes + uVar31 * 4);
  uVar43 = CONCAT44(0,uVar37);
  if (__s_00 == (void *)0x0) {
    uVar31 = uVar43 * 4;
    uVar29 = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    lStack_70 = 0x103a10;
    __s_00 = (void *)Memory::alloc_static(uVar29,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar29)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar43 != uVar31);
        pDVar45 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar31);
        lStack_70 = 0x103a5a;
        memset(__s_00,0,uVar29);
        pDVar45 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
LAB_00103a69:
      if (iVar36 == 0) goto LAB_00103b00;
      uVar31 = (ulong)*(uint *)(this + 0x28);
      lVar39 = *(long *)(this + 0x10);
      goto LAB_00103714;
    }
    pDVar45 = *param_1;
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00103a69;
  }
  else {
    iVar36 = *(int *)(this + 0x2c);
    if (iVar36 == 0) {
LAB_00103b00:
      iVar36 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = (long)pDVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar43;
      lVar34 = SUB168(auVar4 * auVar16,8);
      lVar39 = *(long *)(this + 0x10);
      uVar40 = SUB164(auVar4 * auVar16,8);
      uVar33 = *(uint *)(lVar39 + lVar34 * 4);
      if (uVar33 != 0) {
        uVar38 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar41 == uVar33) &&
             (pDVar45 == *(DependencyTracker **)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar40 * 8) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar43;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar33 = *(uint *)(lVar39 + lVar34 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar43, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar37) - SUB164(auVar6 * auVar18,8)) * lVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar43, lVar35 = SUB168(auVar7 * auVar19,8),
                uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_00103714:
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar31 * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = (long)pDVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar42 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar42 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      lVar34 = SUB168(auVar8 * auVar20,8);
      uVar37 = *(uint *)(lVar39 + lVar34 * 4);
      uVar33 = SUB164(auVar8 * auVar20,8);
      if (uVar37 != 0) {
        uVar40 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar42 == uVar37) &&
             (*(DependencyTracker **)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10) == pDVar45)) {
            pauVar30 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined4 *)(pauVar30[1] + 8) = 0;
            lStack_70 = lVar35;
            goto LAB_001037fe;
          }
          uVar40 = uVar40 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar41;
          lVar34 = SUB168(auVar9 * auVar21,8);
          uVar37 = *(uint *)(lVar39 + lVar34 * 4);
          uVar33 = SUB164(auVar9 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar37 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar41, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar31 * 4) + uVar33) -
                            SUB164(auVar10 * auVar22,8)) * lVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, lVar35 = SUB168(auVar11 * auVar23,8),
                uVar40 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar43 * __LC22 < (float)(iVar36 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001037fe;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  pDVar45 = *param_1;
  pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
  *(DependencyTracker **)pauVar30[1] = pDVar45;
  *(undefined4 *)(pauVar30[1] + 8) = 0;
  *pauVar30 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar30;
  }
  else {
    *puVar3 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar3;
  }
  pDVar45 = *param_1;
  lVar39 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar30;
  uVar31 = (long)pDVar45 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar43 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar43 = 1;
  }
  uVar38 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = (uint)uVar43;
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar37);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar43 * lVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lStack_70 = SUB168(auVar12 * auVar24,8);
  lVar34 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lStack_70 * 4);
  iVar36 = SUB164(auVar12 * auVar24,8);
  uVar33 = *puVar1;
  pauVar28 = pauVar30;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar2;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar37 + iVar36) - SUB164(auVar13 * auVar25,8)) * lVar2;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    local_68 = SUB164(auVar14 * auVar26,8);
    pauVar44 = pauVar28;
    if (local_68 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar34 + lStack_70 * 8);
      pauVar44 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_68;
    }
    uVar40 = (uint)uVar43;
    uVar38 = uVar38 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar36 + 1) * lVar2;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lStack_70 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar39 + lStack_70 * 4);
    iVar36 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar44;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar34 + lStack_70 * 8) = pauVar28;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001037fe:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar30[1] + 8;
  return auVar47;
}



/* DependencyTracker::update_dependency(Dependency*) */

void __thiscall DependencyTracker::update_dependency(DependencyTracker *this,Dependency *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  DependencyTracker *local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
            ((Dependency **)local_38);
  uVar1 = *(undefined4 *)(this + 0x18);
  local_38[0] = this;
  puVar2 = (undefined4 *)
           HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
           ::operator[]((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                         *)param_1,local_38);
  *puVar2 = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::insert(DependencyTracker* const&, unsigned int const&, bool) */

void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
     ::insert(DependencyTracker **param_1,uint *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  void *__s;
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
  DependencyTracker *pDVar22;
  uint uVar23;
  ulong uVar24;
  DependencyTracker *pDVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  DependencyTracker *pDVar37;
  
  plVar28 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar34 = (ulong)uVar2;
    uVar24 = uVar34 * 4;
    uVar31 = uVar34 * 8;
    uVar26 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 4) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar31)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar34 != uVar24);
        goto LAB_00103c06;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      goto LAB_00103c11;
    }
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_00103c11;
  }
  else {
LAB_00103c06:
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
LAB_00103c11:
    if (uVar32 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
      uVar24 = lVar36 * 0x3ffff - 1;
      uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
      uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
      uVar24 = uVar24 >> 0x16 ^ uVar24;
      uVar31 = uVar24 & 0xffffffff;
      if ((int)uVar24 == 0) {
        uVar31 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar31 * lVar4;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      lVar29 = SUB168(auVar6 * auVar14,8);
      uVar23 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
      uVar33 = SUB164(auVar6 * auVar14,8);
      if (uVar23 != 0) {
        uVar35 = 0;
        do {
          if (((uint)uVar31 == uVar23) &&
             (*(long *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == lVar36)) {
            pDVar25 = *(DependencyTracker **)((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined4 *)(pDVar25 + 0x18) = *in_RCX;
            goto LAB_00103ed8;
          }
          uVar35 = uVar35 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar33 + 1) * lVar4;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          lVar29 = SUB168(auVar7 * auVar15,8);
          uVar23 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
          uVar33 = SUB164(auVar7 * auVar15,8);
        } while ((uVar23 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar23 * lVar4, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar34, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4) +
                                       uVar33) - SUB164(auVar8 * auVar16,8)) * lVar4,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar34, uVar35 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar2 * __LC22 < (float)(uVar32 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pDVar25 = (DependencyTracker *)0x0;
      goto LAB_00103ed8;
    }
    _resize_and_rehash((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                        *)param_2,param_2[10] + 1);
  }
  lVar36 = *plVar28;
  uVar3 = *in_RCX;
  pDVar25 = (DependencyTracker *)operator_new(0x20,"");
  *(long *)(pDVar25 + 0x10) = lVar36;
  *(undefined4 *)(pDVar25 + 0x18) = uVar3;
  *(undefined1 (*) [16])pDVar25 = (undefined1  [16])0x0;
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    *(DependencyTracker **)(param_2 + 6) = pDVar25;
    *(DependencyTracker **)(param_2 + 8) = pDVar25;
  }
  else if (in_R8B == '\0') {
    *puVar5 = pDVar25;
    *(undefined8 **)(pDVar25 + 8) = puVar5;
    *(DependencyTracker **)(param_2 + 8) = pDVar25;
  }
  else {
    lVar36 = *(long *)(param_2 + 6);
    *(DependencyTracker **)(lVar36 + 8) = pDVar25;
    *(long *)pDVar25 = lVar36;
    *(DependencyTracker **)(param_2 + 6) = pDVar25;
  }
  lVar36 = *(long *)(param_2 + 4);
  uVar24 = *plVar28 * 0x3ffff - 1;
  uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
  uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
  uVar24 = uVar24 >> 0x16 ^ uVar24;
  uVar31 = uVar24 & 0xffffffff;
  if ((int)uVar24 == 0) {
    uVar31 = 1;
  }
  uVar33 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
  uVar23 = (uint)uVar31;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  uVar24 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31 * lVar4;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24;
  lVar30 = SUB168(auVar10 * auVar18,8);
  lVar29 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar36 + lVar30 * 4);
  iVar27 = SUB164(auVar10 * auVar18,8);
  uVar32 = *puVar1;
  pDVar22 = pDVar25;
  while (uVar32 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar32 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar24;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar11 * auVar19,8)) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    uVar23 = SUB164(auVar12 * auVar20,8);
    pDVar37 = pDVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar32;
      puVar5 = (undefined8 *)(lVar29 + lVar30 * 8);
      pDVar37 = (DependencyTracker *)*puVar5;
      *puVar5 = pDVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar31;
    uVar33 = uVar33 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar27 + 1) * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    lVar30 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar36 + lVar30 * 4);
    iVar27 = SUB164(auVar13 * auVar21,8);
    pDVar22 = pDVar37;
    uVar32 = *puVar1;
  }
  *(DependencyTracker **)(lVar29 + lVar30 * 8) = pDVar22;
  *puVar1 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00103ed8:
  *param_1 = pDVar25;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::VisibilityNotifier, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::VisibilityNotifier,false>::~RID_Alloc
          (RID_Alloc<RendererRD::VisibilityNotifier,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


