
/* RendererRD::ParticlesStorage::ParticlesShaderData::casts_shadows() const */

undefined8 RendererRD::ParticlesStorage::ParticlesShaderData::casts_shadows(void)

{
  return 0;
}



/* RendererRD::ParticlesStorage::particles_collision_instance_set_transform(RID, Transform3D const&)
    */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_instance_set_transform
          (ParticlesStorage *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x9cc))) {
    lVar1 = *(long *)(*(long *)(this + 0x9b8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x9c8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x9c8)) * 0x48;
    if (*(int *)(lVar1 + 0x40) == (int)(param_2 >> 0x20)) {
      uVar2 = param_3[1];
      *(undefined8 *)(lVar1 + 8) = *param_3;
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      uVar2 = param_3[3];
      *(undefined8 *)(lVar1 + 0x18) = param_3[2];
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      uVar2 = param_3[5];
      *(undefined8 *)(lVar1 + 0x28) = param_3[4];
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      return;
    }
    if (*(int *)(lVar1 + 0x40) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_instance_set_transform",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x7c2,
                   "Parameter \"pci\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_instance_set_active(RID, bool) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_instance_set_active
          (ParticlesStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x9cc))) {
    lVar1 = *(long *)(*(long *)(this + 0x9b8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x9c8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x9c8)) * 0x48;
    iVar2 = *(int *)(lVar1 + 0x40);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x38) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_instance_set_active",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x7c8,
                   "Parameter \"pci\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_instance_free(RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_instance_free
          (ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(this + 0x9cc) <= (uint)param_2) {
    _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    return;
  }
  lVar1 = *(long *)(*(long *)(this + 0x9b8) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x9c8)) * 8) +
          ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x9c8)) * 0x48;
  iVar2 = *(int *)(lVar1 + 0x40);
  if (-1 < iVar2) {
    if ((int)(param_2 >> 0x20) == iVar2) {
      *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
      uVar3 = *(int *)(this + 0x9d0) - 1;
      *(uint *)(this + 0x9d0) = uVar3;
      *(uint *)(*(long *)(*(long *)(this + 0x9c0) +
                         ((ulong)uVar3 / (ulong)*(uint *)(this + 0x9c8)) * 8) +
               ((ulong)uVar3 % (ulong)*(uint *)(this + 0x9c8)) * 4) = (uint)param_2;
      return;
    }
    _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0);
    return;
  }
  _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                   "Attempted to free an uninitialized or invalid RID",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_emitting(RID, bool) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_emitting
          (ParticlesStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x10) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_emitting",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0xfe,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_get_emitting(RID) */

undefined1 __thiscall
RendererRD::ParticlesStorage::particles_get_emitting(ParticlesStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x10);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_emitting",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x105,
                   "Parameter \"particles\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_set_amount_ratio(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_amount_ratio
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x234) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_amount_ratio",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x15c,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_lifetime(RID, double) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_lifetime
          (undefined8 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x18) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_lifetime",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x163,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_one_shot(RID, bool) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_one_shot
          (ParticlesStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x11) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_one_shot",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x169,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_pre_process_time(RID, double) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_pre_process_time
          (undefined8 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x20) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_pre_process_time",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x16f,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_request_process_time(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_request_process_time
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x28) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_request_process_time",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x175,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_explosiveness_ratio(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_explosiveness_ratio
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x2c) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_explosiveness_ratio",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x17b,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_randomness_ratio(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_randomness_ratio
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x30) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_randomness_ratio",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x180,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_speed_scale(RID, double) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_speed_scale
          (undefined8 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x1c0) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_speed_scale",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x18d,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_interpolate(RID, bool) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_interpolate
          (ParticlesStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x1cc) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_interpolate",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1ab,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_fractional_delta(RID, bool) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_fractional_delta
          (ParticlesStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x1cd) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_fractional_delta",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1b2,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_collision_base_size(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_collision_base_size
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x1d8) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_collision_base_size",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1dd,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_transform_align(RID,
   RenderingServer::ParticlesTransformAlign) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_transform_align
          (ParticlesStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x94) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_transform_align",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1e4,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_get_process_material(RID) const */

undefined8 __thiscall
RendererRD::ParticlesStorage::particles_get_process_material(ParticlesStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x88);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_process_material",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",499,
                   "Parameter \"particles\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_set_draw_order(RID, RenderingServer::ParticlesDrawOrder)
    */

void __thiscall
RendererRD::ParticlesStorage::particles_set_draw_order
          (ParticlesStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x98) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_draw_order",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1fa,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_restart(RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_restart(ParticlesStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar2 + 0x34) = 1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_restart",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x20f,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_seed(RID, unsigned int) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_seed
          (ParticlesStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x1b8) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_seed",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x216,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_get_aabb(RID) const */

undefined8 *
RendererRD::ParticlesStorage::particles_get_aabb(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x91c))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(param_2 + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x918)) * 8);
    if (*(int *)(lVar3 + 0x2f0) == (int)(param_3 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x38);
      uVar2 = *(undefined8 *)(lVar3 + 0x40);
      param_1[2] = *(undefined8 *)(lVar3 + 0x48);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      return param_1;
    }
    if (*(int *)(lVar3 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_aabb",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2b0,
                   "Parameter \"particles\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererRD::ParticlesStorage::particles_set_emission_transform(RID, Transform3D const&) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_emission_transform
          (ParticlesStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar2 + 0x2f0) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 500) = *param_3;
      *(undefined8 *)(lVar2 + 0x1fc) = uVar1;
      uVar1 = param_3[3];
      *(undefined8 *)(lVar2 + 0x204) = param_3[2];
      *(undefined8 *)(lVar2 + 0x20c) = uVar1;
      uVar1 = param_3[5];
      *(undefined8 *)(lVar2 + 0x214) = param_3[4];
      *(undefined8 *)(lVar2 + 0x21c) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_emission_transform",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2b7,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_emitter_velocity(RID, Vector3 const&) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_emitter_velocity
          (ParticlesStorage *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x224) = *param_3;
      *(undefined4 *)(lVar1 + 0x22c) = *(undefined4 *)(param_3 + 1);
      return;
    }
    if (*(int *)(lVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_emitter_velocity",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2be,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_interp_to_end(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_interp_to_end
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x230) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_interp_to_end",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2c5,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_is_inactive(RID) const */

undefined1 __thiscall
RendererRD::ParticlesStorage::particles_is_inactive(ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
      if (*(char *)(lVar1 + 0x10) != '\0') {
        return 0;
      }
      return *(undefined1 *)(lVar1 + 4);
    }
    if (*(int *)(lVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_is_inactive",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x682,
                   "Parameter \"particles\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_collision_set_cull_mask(RID, unsigned int) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_cull_mask
          (ParticlesStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 4) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_cull_mask",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x739,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_get_height_field_mask(RID) const */

undefined4 __thiscall
RendererRD::ParticlesStorage::particles_collision_get_height_field_mask
          (ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x48);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_get_height_field_mask",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x73f,
                   "Parameter \"particles_collision\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_collision_set_height_field_mask(RID, unsigned int) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_height_field_mask
          (ParticlesStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x48) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_height_field_mask",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x745,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_attractor_strength(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_attractor_strength
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x18) = param_1;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_attractor_strength",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x75b,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_attractor_directionality(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_attractor_directionality
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x20) = param_1;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_attractor_directionality",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x762,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_attractor_attenuation(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_attractor_attenuation
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x1c) = param_1;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_attractor_attenuation",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x769,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_field_texture(RID, RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_field_texture
          (ParticlesStorage *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x28) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_field_texture",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x770,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_get_aabb(RID) const */

uint * RendererRD::ParticlesStorage::particles_collision_get_aabb
                 (uint *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x974))) {
    piVar1 = (int *)(*(long *)(*(long *)(param_2 + 0x960) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x970)) * 8) +
                    ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x970)) * 0x88);
    if (piVar1[0x20] == (int)(param_3 >> 0x20)) {
      if ((*piVar1 != 0) && (*piVar1 != 3)) {
        fVar2 = (float)piVar1[3];
        fVar3 = (float)*(undefined8 *)(piVar1 + 4);
        uVar5 = (uint)fVar2 ^ _LC44;
        fVar4 = (float)((ulong)*(undefined8 *)(piVar1 + 4) >> 0x20);
        uVar7 = (uint)fVar3 ^ _LC44;
        uVar6 = piVar1[5] ^ _LC44;
        *(ulong *)(param_1 + 4) = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
        *param_1 = uVar5;
        param_1[1] = uVar7;
        param_1[2] = uVar6;
        param_1[3] = (uint)(fVar2 + fVar2);
        return param_1;
      }
      fVar2 = (float)piVar1[2];
      fVar4 = fVar2 + fVar2;
      uVar5 = (uint)fVar2 ^ _LC44;
      *(ulong *)(param_1 + 4) = CONCAT44(fVar4,fVar4);
      *param_1 = uVar5;
      param_1[1] = uVar5;
      param_1[2] = uVar5;
      param_1[3] = (uint)fVar4;
      return param_1;
    }
    if (piVar1[0x20] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_get_aabb",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x78e,
                   "Parameter \"particles_collision\" is null.",0,0);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



/* RendererRD::ParticlesStorage::particles_collision_is_heightfield(RID) const */

undefined8 __thiscall
RendererRD::ParticlesStorage::particles_collision_is_heightfield
          (ParticlesStorage *this,ulong param_2)

{
  int *piVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    piVar1 = (int *)(*(long *)(*(long *)(this + 0x960) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
                    ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88);
    if (piVar1[0x20] == (int)(param_2 >> 0x20)) {
      return CONCAT71((int7)((ulong)piVar1 >> 8),*piVar1 == 6);
    }
    if (piVar1[0x20] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_is_heightfield",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x7a9,
                   "Parameter \"particles_collision\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_get_draw_passes(RID) const */

undefined4 __thiscall
RendererRD::ParticlesStorage::particles_get_draw_passes(ParticlesStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar3 + 0x2f0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar3 = *(long *)(lVar3 + 0xa8);
      if (lVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lVar3 + -8);
      }
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_draw_passes",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2cc,
                   "Parameter \"particles\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_get_draw_pass_mesh(RID, int) const */

undefined8 __thiscall
RendererRD::ParticlesStorage::particles_get_draw_pass_mesh
          (ParticlesStorage *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
LAB_00101eac:
    _err_print_error("particles_get_draw_pass_mesh",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2d3,
                     "Parameter \"particles\" is null.",0,0);
    return 0;
  }
  if (*(uint *)(this + 0x91c) <= (uint)param_2) goto LAB_00101eac;
  lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
          *(long *)(*(long *)(this + 0x908) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
  iVar1 = *(int *)(lVar2 + 0x2f0);
  if (iVar1 != (int)(param_2 >> 0x20)) {
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00101eac;
  }
  lVar2 = *(long *)(lVar2 + 0xa8);
  lVar3 = (long)param_3;
  if (param_3 < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00101e5d;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar4) {
      return *(undefined8 *)(lVar2 + lVar3 * 8);
    }
    goto LAB_00101e5d;
  }
  lVar4 = 0;
LAB_00101e5d:
  _err_print_index_error
            ("particles_get_draw_pass_mesh",
             "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2d4,lVar3,lVar4,
             "p_pass","particles->draw_passes.size()","",false,false);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_collision_set_height_field_resolution(RID,
   RenderingServer::ParticlesCollisionHeightfieldResolution) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_height_field_resolution
          (ParticlesStorage *this,ulong param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_2 >> 0x20)) {
      if (5 < param_3) {
        _err_print_index_error
                  ("particles_collision_set_height_field_resolution",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x77e,
                   (ulong)param_3,6,"p_resolution",
                   "RenderingServer::PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_MAX","",false,false)
        ;
        return;
      }
      if ((*(uint *)(lVar1 + 0x4c) != param_3) &&
         (*(uint *)(lVar1 + 0x4c) = param_3, *(long *)(lVar1 + 0x30) != 0)) {
        uVar2 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar2,*(undefined8 *)(lVar1 + 0x30));
        *(undefined8 *)(lVar1 + 0x30) = 0;
        return;
      }
      return;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_height_field_resolution",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x77d,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_subemitter(RID, RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_subemitter
          (ParticlesStorage *this,ulong param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar3 + 0x2f0) == (int)(param_2 >> 0x20)) {
      if (param_2 == param_3) {
        _err_print_error("particles_set_subemitter",
                         "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x23c,
                         "Condition \"p_particles == p_subemitter_particles\" is true.",0,0);
        return;
      }
      *(ulong *)(lVar3 + 0x198) = param_3;
      uVar2 = RenderingDevice::get_singleton();
      cVar1 = RenderingDevice::uniform_set_is_valid(uVar2,*(undefined8 *)(lVar3 + 0xf8));
      if (cVar1 == '\0') {
        return;
      }
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2,*(undefined8 *)(lVar3 + 0xf8));
      *(undefined8 *)(lVar3 + 0xf8) = 0;
      return;
    }
    if (*(int *)(lVar3 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_subemitter",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x23b,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_custom_aabb(RID, AABB const&) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_custom_aabb
          (ParticlesStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar2 + 0x2f0) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x38) = *param_3;
      *(undefined8 *)(lVar2 + 0x40) = uVar1;
      *(undefined8 *)(lVar2 + 0x48) = param_3[2];
      Dependency::changed_notify(lVar2 + 0x290,0);
      return;
    }
    if (*(int *)(lVar2 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_custom_aabb",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x186,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_use_local_coordinates(RID, bool) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_use_local_coordinates
          (ParticlesStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      if (*(int *)(lVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar1 + 0x50) = param_3;
        Dependency::changed_notify(lVar1 + 0x290,5);
        return;
      }
      if (*(int *)(lVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_use_local_coordinates",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x193,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_process_material(RID, RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_process_material
          (ParticlesStorage *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x88) = param_3;
      Dependency::changed_notify(lVar1 + 0x290,5);
      return;
    }
    if (*(int *)(lVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_process_material",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1eb,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_collision_type(RID,
   RenderingServer::ParticlesCollisionType) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_collision_type
          (ParticlesStorage *this,ulong param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    piVar1 = (int *)(*(long *)(*(long *)(this + 0x960) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
                    ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88);
    if (piVar1[0x20] == (int)(param_2 >> 0x20)) {
      if (*piVar1 != param_3) {
        if (*(long *)(piVar1 + 0xc) != 0) {
          uVar2 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar2,*(undefined8 *)(piVar1 + 0xc));
          piVar1[0xc] = 0;
          piVar1[0xd] = 0;
        }
        *piVar1 = param_3;
        Dependency::changed_notify(piVar1 + 0x14,0);
        return;
      }
      return;
    }
    if (piVar1[0x20] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_collision_type",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x729,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_sphere_radius(RID, float) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_sphere_radius
          (undefined4 param_1,ParticlesStorage *this,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar1 + 8) = param_1;
      Dependency::changed_notify(lVar1 + 0x50,0);
      return;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_sphere_radius",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x74b,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_set_box_extents(RID, Vector3 const&) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_set_box_extents
          (ParticlesStorage *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0xc) = *param_3;
      *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_3 + 1);
      Dependency::changed_notify(lVar1 + 0x50,0);
      return;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_set_box_extents",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x753,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_height_field_update(RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_height_field_update
          (ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      Dependency::changed_notify(lVar1 + 0x50,0);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_height_field_update",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x777,
                   "Parameter \"particles_collision\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::ParticlesShaderData::get_native_source_code() const */

void RendererRD::ParticlesStorage::ParticlesShaderData::get_native_source_code(void)

{
  long lVar1;
  long in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::version_get_native_source_code(in_RDI,singleton + 0x18,*(undefined8 *)(in_RSI + 0x78));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::ParticleProcessMaterialData::update_parameters(HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool) */

void __thiscall
RendererRD::ParticlesStorage::ParticleProcessMaterialData::update_parameters
          (ParticleProcessMaterialData *this,HashMap *param_1,bool param_2,bool param_3)

{
  Version *pVVar1;
  char cVar2;
  char *pcVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = singleton;
  uVar8 = *(ulong *)(*(long *)(this + 0xa8) + 0x78);
  if (*(long *)(singleton + 0x30) == 0) {
    lVar12 = 0;
LAB_00102a73:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar12,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar12 = *(long *)(*(long *)(singleton + 0x30) + -8);
    if (lVar12 < 1) goto LAB_00102a73;
    pcVar3 = *(char **)(singleton + 0x40);
    if (pcVar3 == (char *)0x0) {
LAB_00102b20:
      lVar12 = 0;
LAB_00102b23:
      uVar8 = 0;
LAB_00102b40:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar12 = *(long *)(pcVar3 + -8);
    if (lVar12 < 1) goto LAB_00102b23;
    if (*pcVar3 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar11 = 0;
      goto LAB_001029a7;
    }
    if ((uVar8 == 0) || (*(uint *)(singleton + 0xec) <= (uint)uVar8)) {
LAB_00102af0:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar11 = 0;
      goto LAB_001029a7;
    }
    lVar9 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(singleton + 0xe8)) * 0xa0 +
            *(long *)(*(long *)(singleton + 0xd8) +
                     ((uVar8 & 0xffffffff) / (ulong)*(uint *)(singleton + 0xe8)) * 8);
    if (*(int *)(lVar9 + 0x98) != (int)(uVar8 >> 0x20)) {
      if (*(int *)(lVar9 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00102af0;
    }
    pVVar1 = (Version *)(singleton + 0x18);
    iVar10 = (int)lVar9;
    if (*(char *)(lVar9 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar1);
      lVar12 = *(long *)(lVar5 + 0x90);
      if (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(lVar12 + -8) <= lVar13) break;
          if (*(char *)(lVar12 + lVar13) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar1,iVar10);
          }
          else {
            ShaderRD::_compile_version_start(pVVar1,iVar10);
          }
          lVar12 = *(long *)(lVar5 + 0x90);
          lVar13 = lVar13 + 1;
        } while (lVar12 != 0);
      }
    }
    puVar4 = *(uint **)(lVar5 + 0x50);
    if (puVar4 == (uint *)0x0) goto LAB_00102b20;
    lVar12 = *(long *)(puVar4 + -2);
    if (lVar12 < 1) goto LAB_00102b23;
    uVar8 = (ulong)*puVar4;
    lVar5 = *(long *)(lVar9 + 0x68);
    if (lVar5 == 0) {
      lVar12 = 0;
      goto LAB_00102b40;
    }
    lVar12 = *(long *)(lVar5 + -8);
    if (lVar12 <= (long)uVar8) goto LAB_00102b40;
    if (*(long *)(lVar5 + uVar8 * 8) == 0) {
      cVar2 = *(char *)(lVar9 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end(pVVar1,iVar10);
      cVar2 = *(char *)(lVar9 + 0x90);
    }
    if (cVar2 != '\0') {
      puVar6 = *(undefined8 **)(lVar9 + 0x88);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00102b20;
      lVar12 = puVar6[-1];
      if (0 < lVar12) {
        uVar11 = *puVar6;
        goto LAB_001029a7;
      }
      goto LAB_00102b23;
    }
  }
  uVar11 = 0;
LAB_001029a7:
  lVar5 = *(long *)(this + 0xa8);
  RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set
            (this,param_1,param_2,param_3,lVar5 + 0x10,*(undefined8 *)(lVar5 + 0xa0),lVar5 + 0x88,
             lVar5 + 0x40,*(undefined4 *)(lVar5 + 0xa8),this + 0xb0,uVar11,3,1,0);
  return;
}



/* RendererRD::ParticlesStorage::ParticleProcessMaterialData::~ParticleProcessMaterialData() */

void __thiscall
RendererRD::ParticlesStorage::ParticleProcessMaterialData::~ParticleProcessMaterialData
          (ParticleProcessMaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_001194d8;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  return;
}



/* RendererRD::ParticlesStorage::particles_request_process(RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_request_process(ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar3 + 0x2f0) == (int)(param_2 >> 0x20)) {
      if ((*(char *)(lVar3 + 0x170) == '\0') &&
         (*(undefined1 *)(lVar3 + 0x170) = 1, *(long *)(lVar3 + 0x178) == 0)) {
        lVar1 = lVar3 + 0x178;
        *(ParticlesStorage **)(lVar3 + 0x178) = this + 0x8f0;
        lVar2 = *(long *)(this + 0x8f0);
        *(undefined8 *)(lVar3 + 400) = 0;
        *(long *)(lVar3 + 0x188) = lVar2;
        if (lVar2 == 0) {
          *(long *)(this + 0x8f8) = lVar1;
        }
        else {
          *(long *)(lVar2 + 0x18) = lVar1;
        }
        *(long *)(this + 0x8f0) = lVar1;
      }
      return;
    }
    if (*(int *)(lVar3 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_request_process",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x270,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::ParticleProcessMaterialData::~ParticleProcessMaterialData() */

void __thiscall
RendererRD::ParticlesStorage::ParticleProcessMaterialData::~ParticleProcessMaterialData
          (ParticleProcessMaterialData *this)

{
  *(undefined ***)this = &PTR_set_render_priority_001194d8;
  RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
            (this,*(undefined8 *)(this + 0xb0));
  RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData *)this);
  operator_delete(this,0xb8);
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_free(RID) */

ulong __thiscall
RendererRD::ParticlesStorage::particles_collision_free(ParticlesStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 != 0) {
    uVar4 = (uint)param_2;
    if (uVar4 < *(uint *)(this + 0x974)) {
      lVar8 = *(long *)(*(long *)(this + 0x960) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
              ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
      iVar7 = (int)(param_2 >> 0x20);
      if (*(int *)(lVar8 + 0x80) == iVar7) {
        if (*(long *)(lVar8 + 0x30) != 0) {
          uVar5 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar5,*(undefined8 *)(lVar8 + 0x30));
        }
        Dependency::deleted_notify((RID *)(lVar8 + 0x50));
        __mutex = (pthread_mutex_t *)(this + 0x988);
        iVar2 = pthread_mutex_lock(__mutex);
        if (iVar2 == 0) {
          if (uVar4 < *(uint *)(this + 0x974)) {
            uVar6 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970);
            lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
            lVar9 = *(long *)(*(long *)(this + 0x960) + uVar6 * 8) + lVar8;
            iVar2 = *(int *)(lVar9 + 0x80);
            if (iVar2 < 0) {
              pthread_mutex_unlock(__mutex);
              uVar6 = 0;
              _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                               "Attempted to free an uninitialized or invalid RID",0);
            }
            else if (iVar7 == iVar2) {
              Dependency::~Dependency((Dependency *)(lVar9 + 0x50));
              lVar9 = *(long *)(this + 0x968);
              *(undefined4 *)(*(long *)(*(long *)(this + 0x960) + uVar6 * 8) + 0x80 + lVar8) =
                   0xffffffff;
              uVar3 = *(int *)(this + 0x978) - 1;
              *(uint *)(this + 0x978) = uVar3;
              *(uint *)(*(long *)(lVar9 + ((ulong)uVar3 / (ulong)*(uint *)(this + 0x970)) * 8) +
                       ((ulong)uVar3 % (ulong)*(uint *)(this + 0x970)) * 4) = uVar4;
              uVar4 = pthread_mutex_unlock(__mutex);
              uVar6 = (ulong)uVar4;
            }
            else {
              pthread_mutex_unlock(__mutex);
              uVar6 = _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x171,
                                       "Method/function failed.",0,0);
            }
          }
          else {
            pthread_mutex_unlock(__mutex);
            uVar6 = _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x161,
                                     "Method/function failed.",0,0);
          }
          return uVar6;
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar2);
      }
      if (*(int *)(lVar8 + 0x80) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,param_2 >> 0x20);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::ParticlesStorage::particles_remove_collision(RID, RID) */

ulong __thiscall
RendererRD::ParticlesStorage::particles_remove_collision
          (ParticlesStorage *this,ulong param_2,long param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
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
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  uint *puVar40;
  ulong uVar41;
  uint *puVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar37 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
             *(long *)(*(long *)(this + 0x908) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar37 + 0x2f0) == (int)(param_2 >> 0x20)) {
      uVar32 = *(ulong *)(lVar37 + 0x268);
      uVar31 = uVar32;
      if ((uVar32 != 0) &&
         (uVar31 = (ulong)*(uint *)(lVar37 + 0x28c), *(uint *)(lVar37 + 0x28c) != 0)) {
        lVar6 = *(long *)(lVar37 + 0x280);
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar37 + 0x288) * 4);
        uVar43 = CONCAT44(0,uVar30);
        lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar37 + 0x288) * 8);
        uVar31 = param_3 * 0x3ffff - 1;
        uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
        uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
        uVar31 = uVar31 >> 0x16 ^ uVar31;
        uVar41 = uVar31 & 0xffffffff;
        if ((int)uVar31 == 0) {
          uVar41 = 1;
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar41 * lVar7;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar43;
        auVar10 = auVar10 * auVar20;
        lVar38 = auVar10._8_8_;
        uVar31 = auVar10._0_8_;
        uVar45 = *(uint *)(lVar6 + lVar38 * 4);
        iVar35 = auVar10._8_4_;
        if (uVar45 != 0) {
          uVar33 = 0;
          do {
            if ((uint)uVar41 == uVar45) {
              lVar8 = *(long *)(lVar37 + 0x270);
              uVar45 = *(uint *)(lVar8 + lVar38 * 4);
              uVar31 = (ulong)uVar45;
              if (param_3 == *(long *)(uVar32 + uVar31 * 8)) {
                lVar9 = *(long *)(lVar37 + 0x278);
                puVar1 = (uint *)(lVar9 + uVar31 * 4);
                uVar33 = *puVar1;
                uVar41 = (ulong)uVar33;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = (ulong)(uVar33 + 1) * lVar7;
                auVar24._8_8_ = 0;
                auVar24._0_8_ = uVar43;
                lVar38 = SUB168(auVar14 * auVar24,8) * 4;
                uVar36 = SUB164(auVar14 * auVar24,8);
                uVar44 = (ulong)uVar36;
                puVar40 = (uint *)(lVar6 + lVar38);
                if ((*puVar40 == 0) ||
                   (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)*puVar40 * lVar7, auVar25._8_8_ = 0,
                   auVar25._0_8_ = uVar43, auVar16._8_8_ = 0,
                   auVar16._0_8_ = (ulong)((uVar36 + uVar30) - SUB164(auVar15 * auVar25,8)) * lVar7,
                   auVar26._8_8_ = 0, auVar26._0_8_ = uVar43, SUB164(auVar16 * auVar26,8) == 0)) {
                  uVar44 = (ulong)uVar33;
                }
                else {
                  while( true ) {
                    puVar34 = (uint *)(lVar38 + lVar8);
                    puVar4 = (uint *)(lVar8 + uVar41 * 4);
                    puVar42 = (uint *)(uVar41 * 4 + lVar6);
                    puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar34 * 4);
                    puVar3 = (undefined4 *)(lVar9 + (ulong)*puVar4 * 4);
                    uVar5 = *puVar3;
                    *puVar3 = *puVar2;
                    *puVar2 = uVar5;
                    uVar33 = *puVar40;
                    *puVar40 = *puVar42;
                    *puVar42 = uVar33;
                    uVar33 = *puVar34;
                    *puVar34 = *puVar4;
                    *puVar4 = uVar33;
                    auVar19._8_8_ = 0;
                    auVar19._0_8_ = (ulong)((int)uVar44 + 1) * lVar7;
                    auVar29._8_8_ = 0;
                    auVar29._0_8_ = uVar43;
                    uVar39 = SUB168(auVar19 * auVar29,8);
                    lVar38 = uVar39 * 4;
                    puVar40 = (uint *)(lVar6 + lVar38);
                    if ((*puVar40 == 0) ||
                       (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar40 * lVar7,
                       auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, auVar18._8_8_ = 0,
                       auVar18._0_8_ =
                            (ulong)((SUB164(auVar19 * auVar29,8) + uVar30) -
                                   SUB164(auVar17 * auVar27,8)) * lVar7, auVar28._8_8_ = 0,
                       auVar28._0_8_ = uVar43, SUB164(auVar18 * auVar28,8) == 0)) break;
                    uVar41 = uVar44;
                    uVar44 = uVar39 & 0xffffffff;
                  }
                }
                *(undefined4 *)(lVar6 + uVar44 * 4) = 0;
                uVar30 = *(int *)(lVar37 + 0x28c) - 1;
                uVar41 = (ulong)uVar30;
                *(uint *)(lVar37 + 0x28c) = uVar30;
                if (uVar30 <= uVar45) {
                  return uVar41;
                }
                uVar30 = *(uint *)(lVar9 + uVar41 * 4);
                *(undefined8 *)(uVar32 + uVar31 * 8) = *(undefined8 *)(uVar32 + uVar41 * 8);
                *puVar1 = uVar30;
                uVar32 = (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(lVar37 + 0x28c) * 4);
                *(uint *)(lVar8 + uVar32 * 4) = uVar45;
                return uVar32;
              }
            }
            uVar33 = uVar33 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar7;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar11 = auVar11 * auVar21;
            lVar38 = auVar11._8_8_;
            uVar31 = auVar11._0_8_;
            uVar45 = *(uint *)(lVar6 + lVar38 * 4);
            iVar35 = auVar11._8_4_;
          } while ((uVar45 != 0) &&
                  (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar45 * lVar7, auVar22._8_8_ = 0,
                  auVar22._0_8_ = uVar43, auVar13._8_8_ = 0,
                  auVar13._0_8_ = (ulong)((uVar30 + iVar35) - SUB164(auVar12 * auVar22,8)) * lVar7,
                  auVar23._8_8_ = 0, auVar23._0_8_ = uVar43, uVar31 = SUB168(auVar13 * auVar23,0),
                  uVar33 <= SUB164(auVar13 * auVar23,8)));
        }
      }
      return uVar31;
    }
    if (*(int *)(lVar37 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar32 = _err_print_error("particles_remove_collision",
                            "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2ee,
                            "Parameter \"particles\" is null.",0,0);
  return uVar32;
}



/* RendererRD::ParticlesStorage::_particles_ensure_unused_emission_buffer(RendererRD::ParticlesStorage::Particles*)
   [clone .part.0] */

void RendererRD::ParticlesStorage::_particles_ensure_unused_emission_buffer(Particles *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = RenderingDevice::get_singleton();
  local_20 = 0;
  uVar3 = RenderingDevice::storage_buffer_create(uVar3,0x80,auStack_28,0,0);
  lVar2 = local_20;
  *(undefined8 *)(param_1 + 600) = uVar3;
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
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* RendererRD::ParticlesStorage::particles_get_current_aabb(RID) */

float * RendererRD::ParticlesStorage::particles_get_current_aabb
                  (float *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_e0;
  undefined1 local_a8 [8];
  long local_a0;
  undefined1 local_98 [12];
  float local_8c;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x91c))) {
    lVar9 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(param_2 + 0x908) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x918)) * 8);
    if (*(int *)(lVar9 + 0x2f0) == (int)(param_3 >> 0x20)) {
      iVar8 = *(int *)(lVar9 + 0x14);
      if (((*(char *)(lVar9 + 0x2c8) != '\0') && (*(long *)(lVar9 + 0xb8) != 0)) &&
         (lVar6 = *(long *)(*(long *)(lVar9 + 0xb8) + -8), 1 < lVar6)) {
        iVar8 = iVar8 * (int)lVar6;
      }
      iVar12 = *(int *)(lVar9 + 0xf0);
      uVar3 = RenderingDevice::get_singleton();
      iVar12 = (iVar12 + 7) * 0x10;
      RenderingDevice::buffer_get_data(local_a8,uVar3,*(undefined8 *)(lVar9 + 0xd8),0);
      if (local_a0 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(local_a0 + -8);
      }
      if (iVar8 * iVar12 == lVar6) {
        Transform3D::affine_inverse();
        lVar6 = local_a0;
        if (((local_a0 == 0) || (*(long *)(local_a0 + -8) == 0)) || (iVar8 < 1)) {
          fVar19 = 0.0;
          fVar13 = 0.0;
          fVar23 = 0.0;
          fVar20 = 0.0;
          fVar17 = 0.0;
          fVar18 = 0.0;
        }
        else {
          uVar11 = 0;
          bVar2 = true;
          fVar13 = 0.0;
          fVar23 = 0.0;
          iVar7 = 0;
          fVar19 = 0.0;
          fVar17 = 0.0;
          fVar18 = 0.0;
          fVar16 = 0.0;
          do {
            while (lVar4 = (ulong)uVar11 + lVar6, fVar20 = fVar16, *(int *)(lVar4 + 0x4c) == 0) {
LAB_00103668:
              iVar7 = iVar7 + 1;
              uVar11 = uVar11 + iVar12;
              fVar16 = fVar20;
              if (iVar8 == iVar7) goto LAB_001037b8;
            }
            fVar21 = *(float *)(lVar4 + 0x38);
            fVar15 = *(float *)(lVar4 + 0x34);
            fVar14 = *(float *)(lVar4 + 0x30);
            fVar20 = fVar21;
            if (*(char *)(lVar9 + 0x50) == '\0') {
              fVar22 = fVar15 * local_74;
              fVar20 = local_58 * fVar21 + local_60 * fVar14 + local_5c * fVar15 + local_4c;
              fVar15 = local_6c * fVar14 + local_68 * fVar15 + local_64 * fVar21 + local_50;
              fVar14 = fVar14 * local_78 + fVar22 + fVar21 * local_70 + local_54;
            }
            if (!bVar2) {
              if (((fVar19 < 0.0) || (fVar13 < 0.0)) || (fVar23 < 0.0)) {
                _err_print_error("expand_to","./core/math/aabb.h",0x158,
                                 "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                                 ,0,0);
              }
              fVar19 = fVar19 + fVar17;
              fVar21 = fVar14;
              if (fVar17 <= fVar14) {
                fVar21 = fVar17;
              }
              fVar17 = fVar21;
              if (fVar14 <= fVar19) {
                fVar14 = fVar19;
              }
              fVar21 = fVar15;
              if (fVar15 <= fVar13 + fVar18) {
                fVar21 = fVar13 + fVar18;
              }
              if (fVar18 <= fVar15) {
                fVar15 = fVar18;
              }
              fVar18 = fVar15;
              fVar19 = fVar14 - fVar17;
              fVar15 = fVar20;
              if (fVar20 <= fVar23 + fVar16) {
                fVar15 = fVar23 + fVar16;
              }
              if (fVar16 <= fVar20) {
                fVar20 = fVar16;
              }
              fVar13 = fVar21 - fVar18;
              fVar23 = fVar15 - fVar20;
              goto LAB_00103668;
            }
            iVar7 = iVar7 + 1;
            bVar2 = false;
            uVar11 = uVar11 + iVar12;
            fVar17 = fVar14;
            fVar18 = fVar15;
            fVar16 = fVar20;
          } while (iVar8 != iVar7);
        }
LAB_001037b8:
        lVar6 = *(long *)(lVar9 + 0xa8);
        if (lVar6 == 0) {
          local_e0 = 0.0;
        }
        else {
          lVar4 = 0;
          local_e0 = 0.0;
          do {
            while( true ) {
              if (*(long *)(lVar6 + -8) <= lVar4) goto LAB_00103898;
              if (*(long *)(lVar6 + lVar4 * 8) != 0) break;
              lVar4 = lVar4 + 1;
              if (lVar6 == 0) goto LAB_00103898;
            }
            plVar5 = (long *)RendererRD::MeshStorage::get_singleton();
            lVar6 = *(long *)(lVar9 + 0xa8);
            if (lVar6 == 0) {
              lVar10 = 0;
LAB_0010394b:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar10,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar10 = *(long *)(lVar6 + -8);
            if (lVar10 <= lVar4) goto LAB_0010394b;
            (**(code **)(*plVar5 + 0x98))(local_98,plVar5,*(undefined8 *)(lVar6 + lVar4 * 8),0);
            fVar16 = local_88;
            if (local_88 <= local_8c) {
              fVar16 = local_8c;
            }
            fVar21 = local_84;
            if (local_84 <= fVar16) {
              fVar21 = fVar16;
            }
            if (local_e0 < fVar21) {
              local_e0 = fVar21;
            }
            lVar6 = *(long *)(lVar9 + 0xa8);
            lVar4 = lVar4 + 1;
          } while (lVar6 != 0);
LAB_00103898:
          fVar20 = fVar20 - local_e0;
          fVar17 = fVar17 - local_e0;
          fVar18 = fVar18 - local_e0;
          local_e0 = local_e0 + local_e0;
        }
        *(ulong *)(param_1 + 4) = CONCAT44(local_e0 + fVar23,local_e0 + fVar13);
        *param_1 = fVar17;
        param_1[1] = fVar18;
        param_1[2] = fVar20;
        param_1[3] = fVar19 + local_e0;
      }
      else {
        _err_print_error("particles_get_current_aabb",
                         "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x286,
                         "Condition \"buffer.size() != (int)(total_amount * particle_data_size)\" is true. Returning: AABB()"
                         ,0,0);
        param_1[0] = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        param_1[4] = 0.0;
        param_1[5] = 0.0;
      }
      lVar9 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar5 = (long *)(local_a0 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      goto LAB_00103916;
    }
    if (*(int *)(lVar9 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_current_aabb",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x27d,
                   "Parameter \"particles\" is null.",0,0);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
LAB_00103916:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* RendererRD::ParticlesStorage::particles_set_draw_pass_mesh(RID, int, RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_draw_pass_mesh
          (ParticlesStorage *this,ulong param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 == 0) || (*(uint *)(this + 0x91c) <= (uint)param_2)) {
LAB_00103e4c:
    _err_print_error("particles_set_draw_pass_mesh",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x208,
                     "Parameter \"particles\" is null.",0,0);
    return;
  }
  lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
          *(long *)(*(long *)(this + 0x908) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
  if (*(int *)(lVar1 + 0x2f0) != (int)(param_2 >> 0x20)) {
    if (*(int *)(lVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00103e4c;
  }
  lVar2 = *(long *)(lVar1 + 0xa8);
  lVar3 = (long)param_3;
  if (param_3 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00103e01;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar2) {
      CowData<RID>::_copy_on_write((CowData<RID> *)(lVar1 + 0xa8));
      *(undefined8 *)(*(long *)(lVar1 + 0xa8) + lVar3 * 8) = param_4;
      return;
    }
    goto LAB_00103e01;
  }
  lVar2 = 0;
LAB_00103e01:
  _err_print_index_error
            ("particles_set_draw_pass_mesh",
             "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x209,lVar3,lVar2,
             "p_pass","particles->draw_passes.size()","",false,false);
  return;
}



/* RendererRD::ParticlesStorage::get_singleton() */

undefined8 RendererRD::ParticlesStorage::get_singleton(void)

{
  return singleton;
}



/* RendererRD::ParticlesStorage::free(RID) */

undefined8 __thiscall RendererRD::ParticlesStorage::free(ParticlesStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  __mutex = (pthread_mutex_t *)(this + 0x930);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 == 0) {
    uVar3 = (uint)param_2;
    uVar4 = param_2 & 0xffffffff;
    uVar2 = (uint)(param_2 >> 0x20);
    if (((uVar3 < *(uint *)(this + 0x91c)) && (param_2 >> 0x20 != 0x7fffffff)) &&
       ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
                   *(long *)(*(long *)(this + 0x908) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8) + 0x2f0)
        & 0x7fffffff) == uVar2)) {
      pthread_mutex_unlock(__mutex);
      (**(code **)(*(long *)this + 0x20))(this,param_2);
    }
    else {
      __mutex_00 = (pthread_mutex_t *)(this + 0x988);
      pthread_mutex_unlock(__mutex);
      iVar1 = pthread_mutex_lock(__mutex_00);
      if (iVar1 != 0) goto LAB_001040a7;
      if (uVar3 < *(uint *)(this + 0x974)) {
        if (param_2 >> 0x20 == 0x7fffffff) {
          pthread_mutex_unlock(__mutex_00);
          return 0;
        }
        if ((*(uint *)(*(long *)(*(long *)(this + 0x960) + (uVar4 / *(uint *)(this + 0x970)) * 8) +
                       (uVar4 % (ulong)*(uint *)(this + 0x970)) * 0x88 + 0x80) & 0x7fffffff) ==
            uVar2) {
          pthread_mutex_unlock(__mutex_00);
          (**(code **)(*(long *)this + 400))(this,param_2);
          return 1;
        }
        pthread_mutex_unlock(__mutex_00);
        if (*(uint *)(this + 0x9cc) <= uVar3) {
          return 0;
        }
      }
      else {
        pthread_mutex_unlock(__mutex_00);
        if (*(uint *)(this + 0x9cc) <= uVar3) {
          return 0;
        }
        if (param_2 >> 0x20 == 0x7fffffff) {
          return 0;
        }
      }
      if ((*(uint *)(*(long *)(*(long *)(this + 0x9b8) + (uVar4 / *(uint *)(this + 0x9c8)) * 8) +
                     (uVar4 % (ulong)*(uint *)(this + 0x9c8)) * 0x48 + 0x40) & 0x7fffffff) != uVar2)
      {
        return 0;
      }
      (**(code **)(*(long *)this + 0x210))(this,param_2);
    }
    return 1;
  }
LAB_001040a7:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* RendererRD::ParticlesStorage::_particles_free_data(RendererRD::ParticlesStorage::Particles*) */

void __thiscall
RendererRD::ParticlesStorage::_particles_free_data(ParticlesStorage *this,Particles *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar4 = RenderingDevice::get_singleton();
  cVar3 = RenderingDevice::uniform_set_is_valid(uVar4,*(undefined8 *)(param_1 + 0xd0));
  if (cVar3 != '\0') {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0xd0));
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (*(long *)(param_1 + 200) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
  }
  uVar4 = RenderingDevice::get_singleton();
  cVar3 = RenderingDevice::uniform_set_is_valid(uVar4);
  if (cVar3 != '\0') {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (*(long *)(param_1 + 0x160) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4);
    *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    lVar2 = *(long *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x248) = 0;
    if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x240);
        *(undefined8 *)(param_1 + 0x240) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
      else {
        *(undefined8 *)(param_1 + 0x240) = 0;
      }
    }
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  if (*(long *)(param_1 + 600) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    uVar4 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0x260));
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  uVar4 = RenderingDevice::get_singleton();
  cVar3 = RenderingDevice::uniform_set_is_valid(uVar4,*(undefined8 *)(param_1 + 0xf8));
  if (cVar3 == '\0') {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return;
  }
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar4,*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



/* RendererRD::ParticlesStorage::particles_set_mode(RID, RenderingServer::ParticlesMode) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_mode(ParticlesStorage *this,ulong param_2,int param_3)

{
  Particles *pPVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    pPVar1 = (Particles *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
             *(long *)(*(long *)(this + 0x908) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
    if (*(int *)(pPVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
      if (*(int *)pPVar1 != param_3) {
        _particles_free_data(this,pPVar1);
        *(int *)pPVar1 = param_3;
      }
      return;
    }
    if (*(int *)(pPVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_mode",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0xf2,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_amount(RID, int) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_amount(ParticlesStorage *this,ulong param_2,int param_3)

{
  Particles *pPVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    pPVar1 = (Particles *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
             *(long *)(*(long *)(this + 0x908) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
    if (*(int *)(pPVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
      if (*(int *)(pPVar1 + 0x14) != param_3) {
        _particles_free_data(this,pPVar1);
        *(int *)(pPVar1 + 0x14) = param_3;
        *(undefined8 *)(pPVar1 + 0x1b0) = 0;
        pPVar1[0x1f1] = (Particles)0x1;
        *(undefined1 (*) [16])(pPVar1 + 0x1a0) = (undefined1  [16])0x0;
        Dependency::changed_notify(pPVar1 + 0x290,5);
        return;
      }
      return;
    }
    if (*(int *)(pPVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_amount",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x148,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_fixed_fps(RID, int) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_fixed_fps
          (ParticlesStorage *this,ulong param_2,undefined4 param_3)

{
  Particles *pPVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      pPVar1 = (Particles *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
               *(long *)(*(long *)(this + 0x908) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
      if (*(int *)(pPVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(pPVar1 + 0x1c8) = param_3;
        _particles_free_data(this,pPVar1);
        pPVar1[0x1f1] = (Particles)0x1;
        *(undefined8 *)(pPVar1 + 0x1b0) = 0;
        *(undefined1 (*) [16])(pPVar1 + 0x1a0) = (undefined1  [16])0x0;
        Dependency::changed_notify(pPVar1 + 0x290,5);
        return;
      }
      if (*(int *)(pPVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_fixed_fps",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x19b,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_trails(RID, bool, double) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_trails
          (double param_1,ParticlesStorage *this,ulong param_3,Particles param_4)

{
  Particles *pPVar1;
  double dVar2;
  
  dVar2 = _LC92;
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x91c))) {
    pPVar1 = (Particles *)
             (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
             *(long *)(*(long *)(this + 0x908) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
    if (*(int *)(pPVar1 + 0x2f0) == (int)(param_3 >> 0x20)) {
      if (_LC93 <= param_1) {
        pPVar1[0x2c8] = param_4;
        if (param_1 <= dVar2) {
          dVar2 = param_1;
        }
        *(double *)(pPVar1 + 0x2c0) = dVar2;
        _particles_free_data(this,pPVar1);
        pPVar1[0x1f1] = (Particles)0x1;
        *(undefined8 *)(pPVar1 + 0x1b0) = 0;
        *(undefined1 (*) [16])(pPVar1 + 0x1a0) = (undefined1  [16])0x0;
        Dependency::changed_notify(pPVar1 + 0x290,5);
        return;
      }
      _err_print_error("particles_set_trails",
                       "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1ba,
                       "Condition \"p_length < 0.01\" is true.",0,0);
      return;
    }
    if (*(int *)(pPVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_trails",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1b9,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_trail_bind_poses(RID, Vector<Transform3D> const&) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_trail_bind_poses
          (ParticlesStorage *this,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Particles *pPVar4;
  bool bVar5;
  
  if ((param_2 == 0) || (*(uint *)(this + 0x91c) <= (uint)param_2)) {
LAB_00104974:
    _err_print_error("particles_set_trail_bind_poses",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x1cc,
                     "Parameter \"particles\" is null.",0,0);
    return;
  }
  pPVar4 = (Particles *)
           (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
           *(long *)(*(long *)(this + 0x908) +
                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
  if (*(int *)(pPVar4 + 0x2f0) != (int)(param_2 >> 0x20)) {
    if (*(int *)(pPVar4 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00104974;
  }
  lVar2 = *(long *)(param_3 + 8);
  lVar1 = *(long *)(pPVar4 + 0xb8);
  if (*(long *)(pPVar4 + 200) == 0) {
LAB_001048e0:
    if (lVar2 == lVar1) goto LAB_00104886;
    if (lVar1 != 0) goto LAB_001048ea;
LAB_00104901:
    if (lVar2 == 0) goto LAB_00104886;
  }
  else {
    if (lVar1 != 0) {
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + -8) != 0) goto LAB_001048b0;
      }
      else {
        if (*(long *)(lVar2 + -8) != *(long *)(lVar1 + -8)) {
LAB_001048b0:
          _particles_free_data(this,pPVar4);
          pPVar4[0x1f1] = (Particles)0x1;
          lVar1 = *(long *)(pPVar4 + 0xb8);
          *(undefined8 *)(pPVar4 + 0x1b0) = 0;
          lVar2 = *(long *)(param_3 + 8);
          *(undefined1 (*) [16])(pPVar4 + 0x1a0) = (undefined1  [16])0x0;
          goto LAB_001048e0;
        }
        if (lVar1 == lVar2) goto LAB_00104886;
      }
LAB_001048ea:
      LOCK();
      plVar3 = (long *)(lVar1 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        lVar1 = *(long *)(pPVar4 + 0xb8);
        *(undefined8 *)(pPVar4 + 0xb8) = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
        lVar2 = *(long *)(param_3 + 8);
      }
      else {
        *(undefined8 *)(pPVar4 + 0xb8) = 0;
        lVar2 = *(long *)(param_3 + 8);
      }
      goto LAB_00104901;
    }
    if (lVar2 == 0) goto LAB_00104886;
    if (*(long *)(lVar2 + -8) != 0) goto LAB_001048b0;
  }
  plVar3 = (long *)(lVar2 + -0x10);
  do {
    lVar1 = *plVar3;
    if (lVar1 == 0) goto LAB_00104886;
    LOCK();
    lVar2 = *plVar3;
    bVar5 = lVar1 == lVar2;
    if (bVar5) {
      *plVar3 = lVar1 + 1;
      lVar2 = lVar1;
    }
    UNLOCK();
  } while (!bVar5);
  if (lVar2 != -1) {
    *(undefined8 *)(pPVar4 + 0xb8) = *(undefined8 *)(param_3 + 8);
  }
LAB_00104886:
  pPVar4[0xc0] = (Particles)0x1;
  Dependency::changed_notify(pPVar4 + 0x290,5);
  return;
}



/* RendererRD::ParticlesStorage::_particles_ensure_unused_emission_buffer(RendererRD::ParticlesStorage::Particles*)
    */

void __thiscall
RendererRD::ParticlesStorage::_particles_ensure_unused_emission_buffer
          (ParticlesStorage *this,Particles *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 600) == 0) {
    uVar3 = RenderingDevice::get_singleton();
    local_20 = 0;
    uVar3 = RenderingDevice::storage_buffer_create(uVar3,0x80,auStack_28,0,0);
    lVar2 = local_20;
    *(undefined8 *)(param_1 + 600) = uVar3;
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
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::_particles_ensure_unused_trail_buffer(RendererRD::ParticlesStorage::Particles*)
    */

void __thiscall
RendererRD::ParticlesStorage::_particles_ensure_unused_trail_buffer
          (ParticlesStorage *this,Particles *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x260) == 0) {
    uVar3 = RenderingDevice::get_singleton();
    local_20 = 0;
    uVar3 = RenderingDevice::storage_buffer_create(uVar3,0x40,auStack_28,0,0);
    lVar2 = local_20;
    *(undefined8 *)(param_1 + 0x260) = uVar3;
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
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::particles_get_instance_buffer_motion_vectors_offsets(RID, unsigned
   int&, unsigned int&) */

void __thiscall
RendererRD::ParticlesStorage::particles_get_instance_buffer_motion_vectors_offsets
          (ParticlesStorage *this,ulong param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar1 + 0x2f0) == (int)(param_2 >> 0x20)) {
      *param_3 = *(undefined4 *)(lVar1 + 0x1dc);
      *param_4 = *(undefined4 *)(lVar1 + 0x1e0);
      return;
    }
    if (*(int *)(lVar1 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_instance_buffer_motion_vectors_offsets",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2e1,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_set_canvas_sdf_collision(RID, bool, Transform2D const&,
   Rect2 const&, RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_canvas_sdf_collision
          (ParticlesStorage *this,ulong param_2,undefined1 param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar5 + 0x2f0) == (int)(param_2 >> 0x20)) {
      uVar1 = *param_4;
      uVar2 = param_4[1];
      uVar3 = *param_5;
      uVar4 = param_5[1];
      *(undefined1 *)(lVar5 + 0x52) = param_3;
      *(undefined8 *)(lVar5 + 0x54) = uVar1;
      *(undefined8 *)(lVar5 + 0x5c) = uVar2;
      uVar1 = param_4[2];
      *(undefined8 *)(lVar5 + 0x80) = param_6;
      *(undefined8 *)(lVar5 + 100) = uVar1;
      *(undefined8 *)(lVar5 + 0x6c) = uVar3;
      *(undefined8 *)(lVar5 + 0x74) = uVar4;
      return;
    }
    if (*(int *)(lVar5 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_set_canvas_sdf_collision",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2f4,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_get_dependency(RID) const */

long __thiscall
RendererRD::ParticlesStorage::particles_get_dependency(ParticlesStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
            *(long *)(*(long *)(this + 0x908) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2f0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return lVar2 + 0x290;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_get_dependency",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x67b,
                   "Parameter \"particles\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::_create_particles_shader_func() */

void RendererRD::ParticlesStorage::_create_particles_shader_func(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xd0,"");
  uVar1 = _LC74;
  puVar2[1] = 0;
  puVar2[7] = uVar1;
  puVar2[0xd] = uVar1;
  *puVar2 = &PTR_set_path_hint_00119468;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined4 *)(puVar2 + 0x15) = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *(undefined1 *)(puVar2 + 0x18) = 0;
  *(undefined4 *)((long)puVar2 + 0xc1) = 0;
  *(undefined2 *)((long)puVar2 + 0xc5) = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  *(undefined1 (*) [16])(puVar2 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xb) = (undefined1  [16])0x0;
  return;
}



/* RendererRD::ParticlesStorage::_create_particles_material_func(RendererRD::ParticlesStorage::ParticlesShaderData*)
    */

void __thiscall
RendererRD::ParticlesStorage::_create_particles_material_func
          (ParticlesStorage *this,ParticlesShaderData *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xb8,"");
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[0xc] = 2;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  *puVar1 = &PTR_set_render_priority_001194d8;
  puVar1[0x16] = 0;
  puVar1[0x15] = param_1;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x11) = (undefined1  [16])0x0;
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_get_extents(RID) const */

undefined1  [16] __thiscall
RendererRD::ParticlesStorage::particles_collision_get_extents(ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar1 + 0xc);
      local_14 = *(undefined4 *)(lVar1 + 0x14);
      goto LAB_00104f85;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_get_extents",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x7a3,
                   "Parameter \"particles_collision\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_00104f85:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::particles_collision_get_dependency(RID) const */

long __thiscall
RendererRD::ParticlesStorage::particles_collision_get_dependency
          (ParticlesStorage *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    lVar1 = *(long *)(*(long *)(this + 0x960) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return lVar1 + 0x50;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_get_dependency",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x7af,
                   "Parameter \"pc\" is null.",0,0);
  return 0;
}



/* RendererRD::ParticlesStorage::particles_free(RID) */

ulong __thiscall RendererRD::ParticlesStorage::particles_free(ParticlesStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  long lVar2;
  Particles *pPVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  Particles *pPVar10;
  long lVar11;
  
  if (param_2 != 0) {
    uVar7 = (uint)param_2;
    if (uVar7 < *(uint *)(this + 0x91c)) {
      pPVar10 = (Particles *)
                (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
                *(long *)(*(long *)(this + 0x908) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
      iVar9 = (int)(param_2 >> 0x20);
      if (*(int *)(pPVar10 + 0x2f0) == iVar9) {
        Dependency::deleted_notify(pPVar10 + 0x290);
        plVar1 = *(long **)(pPVar10 + 0x178);
        if (plVar1 != (long *)0x0) {
          lVar11 = *(long *)(pPVar10 + 0x188);
          if (lVar11 != 0) {
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(pPVar10 + 400);
          }
          lVar2 = *(long *)(pPVar10 + 400);
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x10) = lVar11;
          }
          if (pPVar10 + 0x178 == (Particles *)*plVar1) {
            *plVar1 = *(long *)(pPVar10 + 0x188);
            pPVar3 = (Particles *)plVar1[1];
          }
          else {
            pPVar3 = (Particles *)plVar1[1];
          }
          if (pPVar10 + 0x178 == pPVar3) {
            plVar1[1] = lVar2;
          }
          *(undefined8 *)(pPVar10 + 0x178) = 0;
          *(undefined1 (*) [16])(pPVar10 + 0x188) = (undefined1  [16])0x0;
        }
        __mutex = (pthread_mutex_t *)(this + 0x930);
        _particles_free_data(this,pPVar10);
        iVar5 = pthread_mutex_lock(__mutex);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar5);
        }
        if (uVar7 < *(uint *)(this + 0x91c)) {
          uVar8 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918);
          lVar11 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8;
          pPVar10 = (Particles *)(*(long *)(*(long *)(this + 0x908) + uVar8 * 8) + lVar11);
          iVar5 = *(int *)(pPVar10 + 0x2f0);
          if (iVar5 < 0) {
            pthread_mutex_unlock(__mutex);
            uVar8 = 0;
            _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0);
          }
          else if (iVar9 == iVar5) {
            Particles::~Particles(pPVar10);
            lVar2 = *(long *)(this + 0x910);
            *(undefined4 *)(*(long *)(*(long *)(this + 0x908) + uVar8 * 8) + 0x2f0 + lVar11) =
                 0xffffffff;
            uVar6 = *(int *)(this + 0x920) - 1;
            *(uint *)(this + 0x920) = uVar6;
            *(uint *)(*(long *)(lVar2 + ((ulong)uVar6 / (ulong)*(uint *)(this + 0x918)) * 8) +
                     ((ulong)uVar6 % (ulong)*(uint *)(this + 0x918)) * 4) = uVar7;
            uVar7 = pthread_mutex_unlock(__mutex);
            uVar8 = (ulong)uVar7;
          }
          else {
            pthread_mutex_unlock(__mutex);
            uVar8 = _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x171,
                                     "Method/function failed.",0,0);
          }
        }
        else {
          pthread_mutex_unlock(__mutex);
          uVar8 = _err_print_error(&_LC9,"./core/templates/rid_owner.h",0x161,
                                   "Method/function failed.",0,0);
        }
        return uVar8;
      }
      if (*(int *)(pPVar10 + 0x2f0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,param_2 >> 0x20);
      }
    }
  }
  Dependency::deleted_notify((RID *)0x290);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* RendererRD::ParticlesStorage::particles_add_collision(RID, RID) */

void RendererRD::ParticlesStorage::particles_add_collision(long param_1,ulong param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  RID local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x91c))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x918)) * 0x2f8 +
                     *(long *)(*(long *)(param_1 + 0x908) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x918)) * 8) +
                    0x2f0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_28);
      goto LAB_00105461;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_add_collision",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2e8,
                   "Parameter \"particles\" is null.",0,0);
LAB_00105461:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::~ParticlesStorage() */

void __thiscall RendererRD::ParticlesStorage::~ParticlesStorage(ParticlesStorage *this)

{
  long lVar1;
  uint uVar2;
  SortEffects *this_00;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  Particles *this_01;
  void *pvVar10;
  uint uVar11;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__ParticlesStorage_00119230;
  plVar4 = (long *)RendererRD::MaterialStorage::get_singleton();
  ShaderRD::version_free((ShaderRD *)(this + 0x6b8),*(undefined8 *)(this + 0x830));
  (**(code **)(*plVar4 + 0xd8))(plVar4,*(undefined8 *)(this + 0x6a0));
  (**(code **)(*plVar4 + 0x80))(plVar4);
  this_00 = *(SortEffects **)(this + 8);
  if (this_00 != (SortEffects *)0x0) {
    RendererRD::SortEffects::~SortEffects(this_00);
    Memory::free_static(this_00,false);
    *(undefined8 *)(this + 8) = 0;
  }
  uVar11 = *(uint *)(this + 0x9d0);
  singleton = 0;
  *(undefined ***)(this + 0x9b0) = &PTR__RID_Alloc_00119210;
  if (uVar11 != 0) {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar11);
    print_error((String *)&local_58);
    pcVar3 = local_58;
    lVar7 = local_60;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar4 = (long *)(local_58 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar7 = local_60;
      }
    }
    local_60 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar4 = (long *)(lVar7 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  uVar11 = *(uint *)(this + 0x9cc);
  uVar2 = *(uint *)(this + 0x9c8);
  lVar7 = 0;
  if (uVar2 <= uVar11) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x9b8) + lVar7 * 8),false);
      lVar1 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x9c0) + lVar1),false);
    } while ((uint)lVar7 < uVar11 / uVar2);
  }
  if (*(void **)(this + 0x9b8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x9b8),false);
    Memory::free_static(*(void **)(this + 0x9c0),false);
  }
  *(undefined ***)(this + 0x958) = &PTR__RID_Alloc_001191f0;
  uVar11 = *(uint *)(this + 0x978);
  if (uVar11 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x974);
    uVar9 = (ulong)*(uint *)(this + 0x970);
    puVar6 = *(undefined8 **)(this + 0x960);
LAB_001057f3:
    if ((uint)uVar9 <= (uint)uVar5) {
      lVar7 = 0;
      while( true ) {
        Memory::free_static((void *)puVar6[lVar7],false);
        lVar1 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x968) + lVar1),false);
        if ((uint)(uVar5 / uVar9) <= (uint)lVar7) break;
        puVar6 = *(undefined8 **)(this + 0x960);
      }
LAB_00105835:
      puVar6 = *(undefined8 **)(this + 0x960);
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar11);
    print_error((String *)&local_58);
    pcVar3 = local_58;
    lVar7 = local_60;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar4 = (long *)(local_58 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar7 = local_60;
      }
    }
    local_60 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar4 = (long *)(lVar7 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar9 = (ulong)*(uint *)(this + 0x970);
    puVar6 = *(undefined8 **)(this + 0x960);
    if (*(int *)(this + 0x974) != 0) {
      uVar8 = 0;
      do {
        lVar7 = puVar6[uVar8 / uVar9] + (uVar8 % uVar9) * 0x88;
        if (-1 < *(int *)(lVar7 + 0x80)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x50));
          uVar9 = (ulong)*(uint *)(this + 0x970);
          puVar6 = *(undefined8 **)(this + 0x960);
        }
        uVar5 = (ulong)*(uint *)(this + 0x974);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      goto LAB_001057f3;
    }
    if (*(uint *)(this + 0x970) == 0) {
      Memory::free_static((void *)*puVar6,false);
      Memory::free_static((void *)**(undefined8 **)(this + 0x968),false);
      goto LAB_00105835;
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    Memory::free_static(puVar6,false);
    Memory::free_static(*(void **)(this + 0x968),false);
  }
  *(undefined ***)(this + 0x900) = &PTR__RID_Alloc_001191d0;
  uVar11 = *(uint *)(this + 0x920);
  if (uVar11 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x91c);
    uVar11 = *(uint *)(this + 0x918);
    puVar6 = *(undefined8 **)(this + 0x908);
LAB_00105984:
    if (uVar11 <= (uint)uVar5) {
      lVar7 = 0;
      while( true ) {
        Memory::free_static((void *)puVar6[lVar7],false);
        lVar1 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x910) + lVar1),false);
        if ((uint)(uVar5 / uVar11) <= (uint)lVar7) break;
        puVar6 = *(undefined8 **)(this + 0x908);
      }
LAB_001059cd:
      puVar6 = *(undefined8 **)(this + 0x908);
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar11);
    print_error((String *)&local_58);
    pcVar3 = local_58;
    lVar7 = local_60;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar4 = (long *)(local_58 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar7 = local_60;
      }
    }
    local_60 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar4 = (long *)(lVar7 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar11 = *(uint *)(this + 0x918);
    puVar6 = *(undefined8 **)(this + 0x908);
    if (*(int *)(this + 0x91c) != 0) {
      uVar9 = 0;
      do {
        this_01 = (Particles *)((uVar9 % (ulong)uVar11) * 0x2f8 + puVar6[uVar9 / uVar11]);
        if (-1 < *(int *)(this_01 + 0x2f0)) {
          Particles::~Particles(this_01);
          uVar11 = *(uint *)(this + 0x918);
          puVar6 = *(undefined8 **)(this + 0x908);
        }
        uVar5 = (ulong)*(uint *)(this + 0x91c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      goto LAB_00105984;
    }
    if (uVar11 == 0) {
      Memory::free_static((void *)*puVar6,false);
      Memory::free_static((void *)**(undefined8 **)(this + 0x910),false);
      goto LAB_001059cd;
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    Memory::free_static(puVar6,false);
    Memory::free_static(*(void **)(this + 0x910),false);
  }
  if (*(void **)(this + 0x8e8) != (void *)0x0) {
    if (*(int *)(this + 0x8e0) != 0) {
      *(undefined4 *)(this + 0x8e0) = 0;
    }
    Memory::free_static(*(void **)(this + 0x8e8),false);
  }
  *(undefined ***)(this + 0x6b8) = &PTR__ParticlesCopyShaderRD_001191b0;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x6b8));
  if (*(long *)(this + 0x688) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x688) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar7 = *(long *)(this + 0x688);
      *(undefined8 *)(this + 0x688) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x680) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x680) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar7 = *(long *)(this + 0x680);
      *(undefined8 *)(this + 0x680) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x678) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x678) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar7 = *(long *)(this + 0x678);
      *(undefined8 *)(this + 0x678) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  pvVar10 = *(void **)(this + 0x640);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x664) != 0) {
      uVar11 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x660) * 4);
      if (uVar11 == 0) {
        *(undefined4 *)(this + 0x664) = 0;
        *(undefined1 (*) [16])(this + 0x650) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x648) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x648) + lVar7) = 0;
            if (*(long *)((long)pvVar10 + 0x18) != 0) {
              LOCK();
              plVar4 = (long *)(*(long *)((long)pvVar10 + 0x18) + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                lVar1 = *(long *)((long)pvVar10 + 0x18);
                *(undefined8 *)((long)pvVar10 + 0x18) = 0;
                Memory::free_static((void *)(lVar1 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x640);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar11 << 2 != lVar7);
        *(undefined4 *)(this + 0x664) = 0;
        *(undefined1 (*) [16])(this + 0x650) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105b63;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x648),false);
  }
LAB_00105b63:
  pvVar10 = *(void **)(this + 0x610);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x634) != 0) {
      uVar11 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x630) * 4);
      if (uVar11 == 0) {
        *(undefined4 *)(this + 0x634) = 0;
        *(undefined1 (*) [16])(this + 0x620) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x618) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x618) + lVar7) = 0;
            if (*(long *)((long)pvVar10 + 0x18) != 0) {
              LOCK();
              plVar4 = (long *)(*(long *)((long)pvVar10 + 0x18) + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                lVar1 = *(long *)((long)pvVar10 + 0x18);
                *(undefined8 *)((long)pvVar10 + 0x18) = 0;
                Memory::free_static((void *)(lVar1 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x610);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar11 << 2);
        *(undefined4 *)(this + 0x634) = 0;
        *(undefined1 (*) [16])(this + 0x620) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105c51;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x618),false);
  }
LAB_00105c51:
  pvVar10 = *(void **)(this + 0x5e0);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x604) != 0) {
      uVar11 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x600) * 4);
      if (uVar11 == 0) {
        *(undefined4 *)(this + 0x604) = 0;
        *(undefined1 (*) [16])(this + 0x5f0) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x5e8) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x5e8) + lVar7) = 0;
            if (*(long *)((long)pvVar10 + 0x18) != 0) {
              LOCK();
              plVar4 = (long *)(*(long *)((long)pvVar10 + 0x18) + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                lVar1 = *(long *)((long)pvVar10 + 0x18);
                *(undefined8 *)((long)pvVar10 + 0x18) = 0;
                Memory::free_static((void *)(lVar1 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x5e0);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar11 << 2);
        *(undefined4 *)(this + 0x604) = 0;
        *(undefined1 (*) [16])(this + 0x5f0) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105d39;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x5e8),false);
  }
LAB_00105d39:
  pvVar10 = *(void **)(this + 0x5b0);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x5d4) != 0) {
      uVar11 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5d0) * 4);
      if (uVar11 == 0) {
        *(undefined4 *)(this + 0x5d4) = 0;
        *(undefined1 (*) [16])(this + 0x5c0) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x5b8) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x5b8) + lVar7) = 0;
            if (*(long *)((long)pvVar10 + 0x18) != 0) {
              LOCK();
              plVar4 = (long *)(*(long *)((long)pvVar10 + 0x18) + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                lVar1 = *(long *)((long)pvVar10 + 0x18);
                *(undefined8 *)((long)pvVar10 + 0x18) = 0;
                Memory::free_static((void *)(lVar1 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x5b0);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar11 << 2 != lVar7);
        *(undefined4 *)(this + 0x5d4) = 0;
        *(undefined1 (*) [16])(this + 0x5c0) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105e2b;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x5b8),false);
  }
LAB_00105e2b:
  pvVar10 = *(void **)(this + 0x580);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x5a4) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5a0) * 4) == 0 ||
        (memset(*(void **)(this + 0x598),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5a0) * 4) * 4),
        *(int *)(this + 0x5a4) != 0)))) {
      lVar7 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + lVar7 * 8) != 0)) {
          StringName::unref();
          pvVar10 = *(void **)(this + 0x580);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x5a4));
      *(undefined4 *)(this + 0x5a4) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_00105ece;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x590),false);
    Memory::free_static(*(void **)(this + 0x588),false);
    Memory::free_static(*(void **)(this + 0x598),false);
  }
LAB_00105ece:
  pvVar10 = *(void **)(this + 0x558);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x57c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x578) * 4) == 0 ||
        (memset(*(void **)(this + 0x570),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x578) * 4) * 4),
        *(int *)(this + 0x57c) != 0)))) {
      lVar7 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + lVar7 * 8) != 0)) {
          StringName::unref();
          pvVar10 = *(void **)(this + 0x558);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x57c));
      *(undefined4 *)(this + 0x57c) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_00105f6e;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x568),false);
    Memory::free_static(*(void **)(this + 0x560),false);
    Memory::free_static(*(void **)(this + 0x570),false);
  }
LAB_00105f6e:
  pvVar10 = *(void **)(this + 0x530);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x554) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x550) * 4) == 0 ||
        (memset(*(void **)(this + 0x548),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x550) * 4) * 4),
        *(int *)(this + 0x554) != 0)))) {
      lVar7 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + lVar7 * 8) != 0)) {
          StringName::unref();
          pvVar10 = *(void **)(this + 0x530);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x554));
      *(undefined4 *)(this + 0x554) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_0010600e;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x540),false);
    Memory::free_static(*(void **)(this + 0x538),false);
    Memory::free_static(*(void **)(this + 0x548),false);
  }
LAB_0010600e:
  pvVar10 = *(void **)(this + 0x508);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x52c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x528) * 4) == 0 ||
        (memset(*(void **)(this + 0x520),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x528) * 4) * 4),
        *(int *)(this + 0x52c) != 0)))) {
      lVar7 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + lVar7 * 8) != 0)) {
          StringName::unref();
          pvVar10 = *(void **)(this + 0x508);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x52c));
      *(undefined4 *)(this + 0x52c) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_001060ae;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x518),false);
    Memory::free_static(*(void **)(this + 0x510),false);
    Memory::free_static(*(void **)(this + 0x520),false);
  }
LAB_001060ae:
  pvVar10 = *(void **)(this + 0x4e0);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x504) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x500) * 4) == 0 ||
        (memset(*(void **)(this + 0x4f8),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x500) * 4) * 4),
        *(int *)(this + 0x504) != 0)))) {
      lVar7 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + lVar7 * 8) != 0)) {
          StringName::unref();
          pvVar10 = *(void **)(this + 0x4e0);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x504));
      *(undefined4 *)(this + 0x504) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_0010614e;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x4f0),false);
    Memory::free_static(*(void **)(this + 0x4e8),false);
    Memory::free_static(*(void **)(this + 0x4f8),false);
  }
LAB_0010614e:
  pvVar10 = *(void **)(this + 0x4b8);
  if (pvVar10 != (void *)0x0) {
    if ((*(int *)(this + 0x4dc) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4d8) * 4) == 0 ||
        (memset(*(void **)(this + 0x4d0),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4d8) * 4) * 4),
        *(int *)(this + 0x4dc) != 0)))) {
      lVar7 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + lVar7 * 8) != 0)) {
          StringName::unref();
          pvVar10 = *(void **)(this + 0x4b8);
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x4dc));
      *(undefined4 *)(this + 0x4dc) = 0;
      if (pvVar10 == (void *)0x0) goto LAB_001061ee;
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x4c8),false);
    Memory::free_static(*(void **)(this + 0x4c0),false);
    Memory::free_static(*(void **)(this + 0x4d0),false);
  }
LAB_001061ee:
  if ((StringName::configured != '\0') &&
     (((*(long *)(this + 0x4b0) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x4a8) != 0)))) {
    StringName::unref();
  }
  ShaderLanguage::~ShaderLanguage((ShaderLanguage *)(this + 400));
  *(undefined ***)(this + 0x18) = &PTR__ParticlesShaderRD_00119190;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x18));
  return;
}



/* RendererRD::ParticlesStorage::~ParticlesStorage() */

void __thiscall RendererRD::ParticlesStorage::~ParticlesStorage(ParticlesStorage *this)

{
  ~ParticlesStorage(this);
  operator_delete(this,0xa08);
  return;
}



/* RendererRD::ParticlesStorage::particles_allocate() */

void __thiscall RendererRD::ParticlesStorage::particles_allocate(ParticlesStorage *this)

{
  RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::allocate_rid
            ((RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *)(this + 0x900));
  return;
}



/* RendererRD::ParticlesStorage::particles_initialize(RID) */

void RendererRD::ParticlesStorage::particles_initialize(long param_1)

{
  RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::initialize_rid
            ((RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *)(param_1 + 0x900));
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_allocate() */

void __thiscall RendererRD::ParticlesStorage::particles_collision_allocate(ParticlesStorage *this)

{
  RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::allocate_rid
            ((RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *)(this + 0x958));
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_instance_create(RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_instance_create
          (ParticlesStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0x3f800000;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_50 = ZEXT416(_LC135);
  local_40 = ZEXT416(_LC135);
  local_58 = param_2;
  RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false>::make_rid
            ((RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false> *)
             (this + 0x9b0),(ParticlesCollisionInstance *)&local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* RendererRD::ParticlesStorage::particles_set_draw_passes(RID, int) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_draw_passes
          (ParticlesStorage *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        CowData<RID>::resize<false>((CowData<RID> *)(lVar2 + 0xa8),(long)param_3);
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("particles_set_draw_passes",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x201,
                   "Parameter \"particles\" is null.",0,0);
  return;
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

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
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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



/* WARNING: Removing unreachable block (ram,0x00106cdb) */
/* WARNING: Removing unreachable block (ram,0x00106ce3) */
/* WARNING: Removing unreachable block (ram,0x00111464) */
/* WARNING: Removing unreachable block (ram,0x00106cf6) */
/* WARNING: Removing unreachable block (ram,0x00106d08) */
/* WARNING: Removing unreachable block (ram,0x00106d10) */
/* WARNING: Removing unreachable block (ram,0x00106d19) */
/* WARNING: Removing unreachable block (ram,0x00106d21) */
/* WARNING: Removing unreachable block (ram,0x00106d38) */
/* WARNING: Removing unreachable block (ram,0x00106d45) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::ParticlesStorage::particles_collision_get_heightfield_framebuffer(RID) const */

undefined8 __thiscall
RendererRD::ParticlesStorage::particles_collision_get_heightfield_framebuffer
          (ParticlesStorage *this,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  TextureFormat *pTVar6;
  undefined8 uVar7;
  Vector *pVVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long lStack_b0;
  undefined4 local_a8;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  long local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x974))) {
    piVar2 = (int *)(*(long *)(*(long *)(this + 0x960) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x970)) * 8) +
                    ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88);
    if (piVar2[0x20] == (int)(param_2 >> 0x20)) {
      if (*piVar2 == 6) {
        if (*(long *)(piVar2 + 0xc) == 0) {
          fVar3 = (float)piVar2[5];
          local_58 = __LC154;
          uStack_50 = _UNK_0011ffa8;
          fVar4 = (float)piVar2[3];
          local_48 = _LC155;
          if (fVar4 <= fVar3) {
            iVar9 = *(int *)((long)&local_58 + (long)piVar2[0x13] * 4);
            iVar10 = (int)((fVar4 / fVar3) * (float)iVar9);
          }
          else {
            iVar10 = *(int *)((long)&local_58 + (long)piVar2[0x13] * 4);
            iVar9 = (int)((fVar3 / fVar4) * (float)iVar10);
          }
          local_98 = 0x7d;
          local_60 = 0;
          local_8c = 0x100000001;
          local_84 = 0x100000001;
          local_68 = 0;
          local_7c = 0x500000000;
          local_94 = iVar10;
          local_90 = iVar9;
          pTVar6 = (TextureFormat *)RenderingDevice::get_singleton();
          local_a8 = 6;
          local_b8 = __LC156;
          lStack_b0 = _UNK_0011ffb8;
          uVar7 = RenderingDevice::texture_create
                            (pTVar6,(TextureView *)&local_98,(Vector *)&local_b8);
          *(undefined8 *)(piVar2 + 0xc) = uVar7;
          lStack_b0 = 0;
          Vector<RID>::push_back((Vector<RID> *)&local_b8,*(undefined8 *)(piVar2 + 0xc));
          pVVar8 = (Vector *)RenderingDevice::get_singleton();
          uVar7 = RenderingDevice::framebuffer_create(pVVar8,(long)&local_b8,0xffffffff);
          lVar5 = lStack_b0;
          piVar2[0x10] = iVar10;
          *(undefined8 *)(piVar2 + 0xe) = uVar7;
          piVar2[0x11] = iVar9;
          if (lStack_b0 != 0) {
            LOCK();
            plVar1 = (long *)(lStack_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lStack_b0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
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
        uVar7 = *(undefined8 *)(piVar2 + 0xe);
      }
      else {
        _err_print_error("particles_collision_get_heightfield_framebuffer",
                         "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x707,
                         "Condition \"particles_collision->type != RenderingServer::PARTICLES_COLLISION_TYPE_HEIGHTFIELD_COLLIDE\" is true. Returning: RID()"
                         ,0,0);
        uVar7 = 0;
      }
      goto LAB_00106dc4;
    }
    if (piVar2[0x20] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("particles_collision_get_heightfield_framebuffer",
                   "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x706,
                   "Parameter \"particles_collision\" is null.",0,0);
  uVar7 = 0;
LAB_00106dc4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
        uVar2 = puVar6[2];
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        puVar8[2] = uVar2;
        if (lVar3 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::ParticlesStorage::particles_update_dependency(RID, DependencyTracker*) */

void __thiscall
RendererRD::ParticlesStorage::particles_update_dependency
          (ParticlesStorage *this,ulong param_2,Dependency *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  Dependency *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x91c)) {
      lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
              *(long *)(*(long *)(this + 0x908) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
      iVar1 = *(int *)(lVar4 + 0x2f0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
                  (local_48);
        uVar2 = *(undefined4 *)(param_3 + 0x18);
        local_48[0] = param_3;
        puVar3 = (undefined4 *)
                 HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                 ::operator[]((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                               *)(lVar4 + 0x290),(DependencyTracker **)local_48);
        *puVar3 = uVar2;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001071b3;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("particles_update_dependency",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x2db,
                     "Parameter \"particles\" is null.",0,0);
    return;
  }
LAB_001071b3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::ParticlesShaderData::set_code(String const&) */

void __thiscall
RendererRD::ParticlesStorage::ParticlesShaderData::set_code
          (ParticlesShaderData *this,String *param_1)

{
  Version *pVVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ParticlesShaderData *pPVar16;
  long lVar17;
  undefined8 uVar18;
  void *pvVar19;
  ParticlesShaderData *pPVar20;
  long lVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
  local_1d8 [8];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  ulong local_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  ulong local_180;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  ulong local_150;
  HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
  local_148 [8];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  ulong local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  ulong local_f0;
  ParticlesShaderData *local_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0 [2];
  long local_c0 [2];
  long local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_40;
  
  lVar17 = singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xb0),(CowData *)param_1);
  }
  this[0x70] = (ParticlesShaderData)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
    lVar15 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x20) + lVar15) != 0) {
          *(int *)(*(long *)(this + 0x20) + lVar15) = 0;
          pvVar19 = *(void **)(*(long *)(this + 0x18) + lVar15 * 2);
          if (*(long *)((long)pvVar19 + 0x88) != 0) {
            LOCK();
            plVar10 = (long *)(*(long *)((long)pvVar19 + 0x88) + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              lVar22 = *(long *)((long)pvVar19 + 0x88);
              *(undefined8 *)((long)pvVar19 + 0x88) = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar19 + 0x80) != 0) {
            LOCK();
            plVar10 = (long *)(*(long *)((long)pvVar19 + 0x80) + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              lVar22 = *(long *)((long)pvVar19 + 0x80);
              *(undefined8 *)((long)pvVar19 + 0x80) = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)((long)pvVar19 + 0x70));
          if (*(long *)((long)pvVar19 + 0x40) != 0) {
            LOCK();
            plVar10 = (long *)(*(long *)((long)pvVar19 + 0x40) + -0x10);
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              lVar22 = *(long *)((long)pvVar19 + 0x40);
              *(undefined8 *)((long)pvVar19 + 0x40) = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar19 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar19,false);
          *(undefined8 *)(*(long *)(this + 0x18) + lVar15 * 2) = 0;
        }
        lVar15 = lVar15 + 4;
      } while (lVar15 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  }
  this[0x80] = (ParticlesShaderData)0x0;
  if ((*(long *)(this + 0xb0) == 0) || (*(uint *)(*(long *)(this + 0xb0) + -8) < 2))
  goto LAB_0010737f;
  local_d0[0] = 0;
  local_58 = _LC74;
  local_1b0 = _LC74;
  local_180 = _LC74;
  local_150 = _LC74;
  local_120 = _LC74;
  local_f0 = _LC74;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_1d0 = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  local_160 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  local_c0[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 0;
  local_e8 = (ParticlesShaderData *)0x0;
  StringName::StringName((StringName *)&local_1e8,"start",false);
  puVar9 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar23 = StringName::configured != '\0';
  *puVar9 = 2;
  if ((bVar23) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"process",false);
  puVar9 = (undefined4 *)
           HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
           ::operator[](local_1d8,(StringName *)&local_1e8);
  bVar23 = StringName::configured != '\0';
  *puVar9 = 2;
  if ((bVar23) && (local_1e8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"COLLIDED",false);
  plVar10 = (long *)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::operator[](local_148,(StringName *)&local_1e8);
  bVar23 = StringName::configured != '\0';
  *plVar10 = (long)(this + 0x80);
  if ((bVar23) && (local_1e8 != 0)) {
    StringName::unref();
  }
  lVar15 = 1;
  *(undefined4 *)(this + 200) = 0;
  pPVar20 = this + 0xc1;
  pPVar16 = pPVar20;
  do {
    *pPVar16 = (ParticlesShaderData)0x0;
    itos((long)&local_1f8);
    operator+((char *)&local_1f0,"USERDATA");
    StringName::StringName((StringName *)&local_1e8,(String *)&local_1f0,false);
    puVar11 = (undefined8 *)
              HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
              ::operator[](local_148,(StringName *)&local_1e8);
    bVar23 = StringName::configured != '\0';
    *puVar11 = pPVar16;
    if ((bVar23) && (local_1e8 != 0)) {
      StringName::unref();
    }
    lVar22 = local_1f0;
    if (local_1f0 != 0) {
      LOCK();
      plVar10 = (long *)(local_1f0 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_1f0 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_1f8;
    if (local_1f8 != 0) {
      LOCK();
      plVar10 = (long *)(local_1f8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_1f8 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar15 = lVar15 + 1;
    pPVar16 = pPVar16 + 1;
  } while (lVar15 != 7);
  local_e8 = this + 0x10;
  iVar8 = ShaderCompiler::compile
                    (lVar17 + 400,2,(CowData<char32_t> *)(this + 0xb0),local_1d8,this + 8,local_d8);
  if (iVar8 == 0) {
    pVVar1 = (Version *)(lVar17 + 0x18);
    if (*(long *)(this + 0x78) == 0) {
      uVar12 = ShaderRD::version_create();
      *(undefined8 *)(this + 0x78) = uVar12;
    }
    do {
      if (*pPVar20 != (ParticlesShaderData)0x0) {
        *(int *)(this + 200) = *(int *)(this + 200) + 1;
      }
      pPVar20 = pPVar20 + 1;
    } while (this + 199 != pPVar20);
    plVar10 = &local_80;
    ShaderRD::version_set_compute_code
              (pVVar1,*(undefined8 *)(this + 0x78),plVar10,local_a0,local_90 + 8,local_d8);
    cVar7 = ShaderRD::version_is_valid(pVVar1);
    if (cVar7 == '\0') {
      _err_print_error("set_code","servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",
                       0x6bc,
                       "Condition \"!particles_storage->particles_shader.shader.version_is_valid(version)\" is true."
                       ,0,0);
      goto LAB_00107cee;
    }
    *(undefined4 *)(this + 0xa8) = local_a8;
    lVar15 = *(long *)(this + 0xa0);
    if (lVar15 != local_b0) {
      if (lVar15 != 0) {
        LOCK();
        plVar14 = (long *)(lVar15 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          lVar15 = *(long *)(this + 0xa0);
          *(undefined8 *)(this + 0xa0) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0xa0) = 0;
        }
      }
      if (local_b0 != 0) {
        plVar14 = (long *)(local_b0 + -0x10);
        do {
          lVar15 = *plVar14;
          if (lVar15 == 0) goto LAB_001077a5;
          LOCK();
          lVar22 = *plVar14;
          bVar23 = lVar15 == lVar22;
          if (bVar23) {
            *plVar14 = lVar15 + 1;
            lVar22 = lVar15;
          }
          UNLOCK();
        } while (!bVar23);
        if (lVar22 != -1) {
          *(long *)(this + 0xa0) = local_b0;
        }
      }
    }
LAB_001077a5:
    if ((*(long *)(this + 0x90) != local_c0[0]) &&
       (CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
                  ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x90)),
       local_c0[0] != 0)) {
      plVar14 = (long *)(local_c0[0] + -0x10);
      do {
        lVar15 = *plVar14;
        if (lVar15 == 0) goto LAB_001077fb;
        LOCK();
        lVar22 = *plVar14;
        bVar23 = lVar15 == lVar22;
        if (bVar23) {
          *plVar14 = lVar15 + 1;
          lVar22 = lVar15;
        }
        UNLOCK();
      } while (!bVar23);
      if (lVar22 != -1) {
        *(long *)(this + 0x90) = local_c0[0];
      }
    }
LAB_001077fb:
    uVar12 = RenderingDevice::get_singleton();
    uVar13 = *(ulong *)(this + 0x78);
    local_1e0 = 0;
    if (*(long *)(lVar17 + 0x30) == 0) {
      lVar15 = 0;
LAB_00107b54:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar15,
                 "p_variant","variant_defines.size()","",false,false);
LAB_00107b8d:
      uVar18 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(lVar17 + 0x30) + -8);
      if (lVar15 < 1) goto LAB_00107b54;
      pcVar3 = *(char **)(lVar17 + 0x40);
      if (pcVar3 == (char *)0x0) {
LAB_00107c61:
        lVar15 = 0;
LAB_00107c64:
        uVar13 = 0;
LAB_00107c81:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar15,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar15 = *(long *)(pcVar3 + -8);
      if (lVar15 < 1) goto LAB_00107c64;
      if (*pcVar3 != '\0') {
        if ((uVar13 == 0) || (*(uint *)(lVar17 + 0xec) <= (uint)uVar13)) {
LAB_00107ef9:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar18 = 0;
          goto LAB_00107925;
        }
        lVar22 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(lVar17 + 0xe8)) * 0xa0 +
                 *(long *)(*(long *)(lVar17 + 0xd8) +
                          ((uVar13 & 0xffffffff) / (ulong)*(uint *)(lVar17 + 0xe8)) * 8);
        if (*(int *)(lVar22 + 0x98) != (int)(uVar13 >> 0x20)) {
          if (*(int *)(lVar22 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00107ef9;
        }
        iVar8 = (int)lVar22;
        if (*(char *)(lVar22 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar1);
          lVar15 = *(long *)(lVar17 + 0x90);
          if (lVar15 != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(lVar15 + -8) <= lVar21) break;
              if (*(char *)(lVar15 + lVar21) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar1,iVar8);
              }
              else {
                ShaderRD::_compile_version_start(pVVar1,iVar8);
              }
              lVar21 = lVar21 + 1;
              lVar15 = *(long *)(lVar17 + 0x90);
            } while (lVar15 != 0);
          }
        }
        puVar4 = *(uint **)(lVar17 + 0x50);
        if (puVar4 == (uint *)0x0) goto LAB_00107c61;
        lVar15 = *(long *)(puVar4 + -2);
        if (lVar15 < 1) goto LAB_00107c64;
        uVar13 = (ulong)*puVar4;
        lVar17 = *(long *)(lVar22 + 0x68);
        if (lVar17 == 0) {
          lVar15 = 0;
          goto LAB_00107c81;
        }
        lVar15 = *(long *)(lVar17 + -8);
        if (lVar15 <= (long)uVar13) goto LAB_00107c81;
        if (*(long *)(lVar17 + uVar13 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar1,iVar8);
        }
        if (*(char *)(lVar22 + 0x90) != '\0') {
          puVar11 = *(undefined8 **)(lVar22 + 0x88);
          if (puVar11 == (undefined8 *)0x0) goto LAB_00107c61;
          lVar15 = puVar11[-1];
          if (0 < lVar15) {
            uVar18 = *puVar11;
            goto LAB_00107925;
          }
          goto LAB_00107c64;
        }
        goto LAB_00107b8d;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar18 = 0;
    }
LAB_00107925:
    uVar12 = RenderingDevice::compute_pipeline_create(uVar12,uVar18,(StringName *)&local_1e8);
    lVar17 = local_1e0;
    *(undefined8 *)(this + 0xb8) = uVar12;
    if (local_1e0 != 0) {
      LOCK();
      plVar14 = (long *)(local_1e0 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_1e0 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
    this[0x70] = (ParticlesShaderData)0x1;
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_1d8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar19 = (void *)local_78._0_8_;
      if (local_58._4_4_ != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4);
        if (uVar2 == 0) {
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
        }
        else {
          lVar17 = 0;
          do {
            if (*(int *)(local_78._8_8_ + lVar17) != 0) {
              pvVar19 = *(void **)((long)pvVar19 + lVar17 * 2);
              *(int *)(local_78._8_8_ + lVar17) = 0;
              if (*(long *)((long)pvVar19 + 0x18) != 0) {
                LOCK();
                plVar14 = (long *)(*(long *)((long)pvVar19 + 0x18) + -0x10);
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (*plVar14 == 0) {
                  lVar15 = *(long *)((long)pvVar19 + 0x18);
                  *(undefined8 *)((long)pvVar19 + 0x18) = 0;
                  Memory::free_static((void *)(lVar15 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar19 + 0x10) != 0) {
                LOCK();
                plVar14 = (long *)(*(long *)((long)pvVar19 + 0x10) + -0x10);
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (*plVar14 == 0) {
                  lVar15 = *(long *)((long)pvVar19 + 0x10);
                  *(undefined8 *)((long)pvVar19 + 0x10) = 0;
                  Memory::free_static((void *)(lVar15 + -0x10),false);
                }
              }
              Memory::free_static(pvVar19,false);
              *(undefined8 *)(local_78._0_8_ + lVar17 * 2) = 0;
              pvVar19 = (void *)local_78._0_8_;
            }
            lVar17 = lVar17 + 4;
          } while (lVar17 != (ulong)uVar2 * 4);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar19 == (void *)0x0) goto LAB_00107a7d;
        }
      }
      Memory::free_static(pvVar19,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00107a7d:
    do {
      plVar14 = plVar10 + -1;
      plVar10 = plVar10 + -1;
      if (*plVar14 != 0) {
        LOCK();
        plVar14 = (long *)(*plVar14 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          lVar17 = *plVar10;
          *plVar10 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
    } while (plVar10 != (long *)(local_a0 + 8));
  }
  else {
    _err_print_error("set_code","servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",
                     0x6af,"Condition \"err != OK\" is true.","Shader compilation failed.",0,0);
LAB_00107cee:
    plVar10 = &local_80;
    ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions *)local_1d8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      pvVar19 = (void *)local_78._0_8_;
      if (local_58._4_4_ != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4);
        if (uVar2 == 0) {
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
        }
        else {
          lVar17 = 0;
          do {
            if (*(int *)(local_78._8_8_ + lVar17) != 0) {
              pvVar19 = *(void **)((long)pvVar19 + lVar17 * 2);
              *(int *)(local_78._8_8_ + lVar17) = 0;
              if (*(long *)((long)pvVar19 + 0x18) != 0) {
                LOCK();
                plVar14 = (long *)(*(long *)((long)pvVar19 + 0x18) + -0x10);
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (*plVar14 == 0) {
                  lVar15 = *(long *)((long)pvVar19 + 0x18);
                  *(undefined8 *)((long)pvVar19 + 0x18) = 0;
                  Memory::free_static((void *)(lVar15 + -0x10),false);
                }
              }
              if (*(long *)((long)pvVar19 + 0x10) != 0) {
                LOCK();
                plVar14 = (long *)(*(long *)((long)pvVar19 + 0x10) + -0x10);
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (*plVar14 == 0) {
                  lVar15 = *(long *)((long)pvVar19 + 0x10);
                  *(undefined8 *)((long)pvVar19 + 0x10) = 0;
                  Memory::free_static((void *)(lVar15 + -0x10),false);
                }
              }
              Memory::free_static(pvVar19,false);
              *(undefined8 *)(local_78._0_8_ + lVar17 * 2) = 0;
              pvVar19 = (void *)local_78._0_8_;
            }
            lVar17 = lVar17 + 4;
          } while ((ulong)uVar2 * 4 - lVar17 != 0);
          local_58 = local_58 & 0xffffffff;
          local_68 = (undefined1  [16])0x0;
          if (pvVar19 == (void *)0x0) goto LAB_00107df9;
        }
      }
      Memory::free_static(pvVar19,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00107df9:
    do {
      plVar14 = plVar10 + -1;
      plVar10 = plVar10 + -1;
      if (*plVar14 != 0) {
        LOCK();
        plVar14 = (long *)(*plVar14 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          lVar17 = *plVar10;
          *plVar10 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
    } while (plVar10 != (long *)(local_a0 + 8));
  }
  uVar12 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar10 = (long *)(local_a0._0_8_ + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_a0._8_8_;
      local_a0 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar12 + -0x10),false);
    }
  }
  lVar17 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar10 = (long *)(local_b0 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)local_c0);
  CowData<String>::_unref((CowData<String> *)local_d0);
LAB_0010737f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::ParticlesStorage::_particles_allocate_emission_buffer(RendererRD::ParticlesStorage::Particles*)
    */

void __thiscall
RendererRD::ParticlesStorage::_particles_allocate_emission_buffer
          (ParticlesStorage *this,Particles *param_1)

{
  Particles *pPVar1;
  CowData<unsigned_char> *this_00;
  char cVar2;
  int iVar3;
  ulong uVar4;
  Particles *pPVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  CowData<unsigned_char> *pCVar10;
  size_t sVar11;
  size_t __n;
  
  if (*(long *)(param_1 + 0x248) != 0) {
    _err_print_error("_particles_allocate_emission_buffer",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x21b,
                     "Condition \"particles->emission_buffer != nullptr\" is true.",0,0);
    return;
  }
  this_00 = (CowData<unsigned_char> *)(param_1 + 0x240);
  iVar3 = *(int *)(param_1 + 0x14);
  sVar11 = (long)iVar3 * 0x70 + 0x10;
  if ((long)sVar11 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    puVar8 = *(undefined8 **)(param_1 + 0x240);
LAB_001081a4:
    __n = 0;
    if (puVar8 == (undefined8 *)0x0) goto LAB_001080a8;
  }
  else {
    if (*(long *)(param_1 + 0x240) == 0) {
      CowData<unsigned_char>::_copy_on_write(this_00);
LAB_001081e8:
      __n = 0;
      pPVar5 = (Particles *)0x0;
    }
    else {
      __n = *(size_t *)(*(long *)(param_1 + 0x240) + -8);
      if (sVar11 == __n) goto LAB_001080a8;
      CowData<unsigned_char>::_copy_on_write(this_00);
      if (__n == 0) goto LAB_001081e8;
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pPVar5 = (Particles *)((uVar4 | uVar4 >> 0x20) + 1);
    }
    uVar4 = (long)iVar3 * 0x70 + 0xf;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar10 = (CowData<unsigned_char> *)(uVar4 | uVar4 >> 0x20);
    pPVar1 = (Particles *)pCVar10 + 1;
    if ((long)__n < (long)sVar11) {
      if (pPVar1 != pPVar5) {
        if (__n == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)((Particles *)pCVar10 + 0x11),false);
          if (puVar6 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            puVar8 = *(undefined8 **)(param_1 + 0x240);
            goto LAB_001081a4;
          }
          puVar8 = puVar6 + 2;
          *puVar6 = 1;
          puVar6[1] = 0;
          *(undefined8 **)(param_1 + 0x240) = puVar8;
          goto LAB_001080a0;
        }
        pCVar10 = this_00;
        iVar3 = CowData<unsigned_char>::_realloc(this_00,(long)pPVar1);
        if (iVar3 != 0) goto LAB_0010819c;
      }
      puVar8 = *(undefined8 **)(param_1 + 0x240);
      if (puVar8 == (undefined8 *)0x0) {
        _particles_allocate_emission_buffer((Particles *)pCVar10);
        return;
      }
    }
    else {
      if ((pPVar1 != pPVar5) &&
         (iVar3 = CowData<unsigned_char>::_realloc(this_00,(long)pPVar1), iVar3 != 0)) {
LAB_0010819c:
        puVar8 = *(undefined8 **)(param_1 + 0x240);
        goto LAB_001081a4;
      }
      puVar8 = *(undefined8 **)(param_1 + 0x240);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_00111484();
        return;
      }
    }
LAB_001080a0:
    puVar8[-1] = sVar11;
  }
  __n = puVar8[-1];
LAB_001080a8:
  CowData<unsigned_char>::_copy_on_write(this_00);
  memset(*(void **)(param_1 + 0x240),0,__n);
  CowData<unsigned_char>::_copy_on_write(this_00);
  *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x240);
  *(undefined4 *)(*(long *)(param_1 + 0x240) + 4) = *(undefined4 *)(param_1 + 0x14);
  uVar7 = RenderingDevice::get_singleton();
  if (*(long *)(param_1 + 0x240) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x240) + -8);
  }
  uVar7 = RenderingDevice::storage_buffer_create(uVar7,uVar9,param_1 + 0x238,0,0);
  *(undefined8 *)(param_1 + 0x250) = uVar7;
  uVar7 = RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::uniform_set_is_valid(uVar7,*(undefined8 *)(param_1 + 0xf8));
  if (cVar2 != '\0') {
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar7,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return;
  }
  return;
}



/* RendererRD::ParticlesStorage::particles_emit(RID, Transform3D const&, Vector3 const&, Color
   const&, Color const&, unsigned int) */

void __thiscall
RendererRD::ParticlesStorage::particles_emit
          (ParticlesStorage *this,ulong param_2,int *param_3,undefined8 *param_4,undefined8 *param_5
          ,undefined8 *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  Particles *pPVar7;
  long lVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    pPVar7 = (Particles *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
             *(long *)(*(long *)(this + 0x908) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
    if (*(int *)(pPVar7 + 0x2f0) == (int)(param_2 >> 0x20)) {
      if (*(int *)(pPVar7 + 0x14) != 0) {
        if (pPVar7[0x10] == (Particles)0x0) {
          piVar5 = *(int **)(pPVar7 + 0x248);
        }
        else {
          piVar5 = *(int **)(pPVar7 + 0x248);
          pPVar7[0x1f1] = (Particles)0x1;
          pPVar7[0x10] = (Particles)0x0;
        }
        if (piVar5 == (int *)0x0) {
          _particles_allocate_emission_buffer(this,pPVar7);
          piVar5 = *(int **)(pPVar7 + 0x248);
        }
        pPVar7[4] = (Particles)0x0;
        iVar3 = *piVar5;
        *(undefined8 *)(pPVar7 + 8) = 0;
        if (iVar3 < piVar5[1]) {
          lVar8 = (long)iVar3;
          piVar1 = piVar5 + lVar8 * 0x1c + 4;
          *piVar1 = *param_3;
          piVar1[1] = param_3[3];
          iVar2 = param_3[6];
          piVar1[3] = 0;
          piVar1[2] = iVar2;
          piVar1[4] = param_3[1];
          piVar1[5] = param_3[4];
          iVar2 = param_3[7];
          piVar1[7] = 0;
          piVar1[6] = iVar2;
          piVar1[8] = param_3[2];
          piVar1[9] = param_3[5];
          iVar2 = param_3[8];
          piVar1[0xb] = 0;
          piVar1[10] = iVar2;
          piVar1[0xc] = param_3[9];
          piVar1[0xd] = param_3[10];
          iVar2 = param_3[0xb];
          piVar1[0xf] = 0x3f800000;
          piVar1[0xe] = iVar2;
          *(undefined8 *)(piVar5 + lVar8 * 0x1c + 0x14) = *param_4;
          piVar5[lVar8 * 0x1c + 0x16] = *(int *)(param_4 + 1);
          uVar6 = param_6[1];
          *(undefined8 *)(piVar5 + (lVar8 + 1) * 0x1c) = *param_6;
          *(undefined8 *)(piVar5 + (lVar8 + 1) * 0x1c + 2) = uVar6;
          uVar6 = param_5[1];
          *(undefined8 *)(piVar5 + lVar8 * 0x1c + 0x18) = *param_5;
          *(undefined8 *)(piVar5 + lVar8 * 0x1c + 0x18 + 2) = uVar6;
          piVar5[lVar8 * 0x1c + 0x17] = param_7;
          *piVar5 = iVar3 + 1;
        }
        return;
      }
      uVar6 = 0x249;
      pcVar4 = "Condition \"particles->amount == 0\" is true.";
      goto LAB_001084aa;
    }
    if (*(int *)(pPVar7 + 0x2f0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar6 = 0x248;
  pcVar4 = "Parameter \"particles\" is null.";
LAB_001084aa:
  _err_print_error("particles_emit","servers/rendering/renderer_rd/storage_rd/particles_storage.cpp"
                   ,uVar6,pcVar4,0,0);
  return;
}



/* RendererRD::ParticlesStorage::ParticlesShaderData::~ParticlesShaderData() */

void __thiscall
RendererRD::ParticlesStorage::ParticlesShaderData::~ParticlesShaderData(ParticlesShaderData *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_set_path_hint_00119468;
  if (*(long *)(this + 0x78) != 0) {
    ShaderRD::version_free(singleton + 0x18);
  }
  if (*(long *)(this + 0xb0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x90));
  MaterialStorage::ShaderData::~ShaderData((ShaderData *)this);
  return;
}



/* RendererRD::ParticlesStorage::ParticlesShaderData::~ParticlesShaderData() */

void __thiscall
RendererRD::ParticlesStorage::ParticlesShaderData::~ParticlesShaderData(ParticlesShaderData *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_set_path_hint_00119468;
  if (*(long *)(this + 0x78) != 0) {
    ShaderRD::version_free(singleton + 0x18);
  }
  if (*(long *)(this + 0xb0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
            ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(this + 0x90));
  MaterialStorage::ShaderData::~ShaderData((ShaderData *)this);
  operator_delete(this,0xd0);
  return;
}



/* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */

void __thiscall
Vector<RenderingDevice::Uniform>::push_back
          (Vector<RenderingDevice::Uniform> *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)(this + 8));
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar4 * 0x28);
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
        puVar1[2] = param_2[2];
        if (puVar1[4] == param_2[4]) {
          return;
        }
        CowData<RID>::_ref((CowData<RID> *)(puVar1 + 4),(CowData *)(param_2 + 4));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RendererRD::ParticlesStorage::_particles_update_buffers(RendererRD::ParticlesStorage::Particles*)
    */

void __thiscall
RendererRD::ParticlesStorage::_particles_update_buffers(ParticlesStorage *this,Particles *param_1)

{
  long *plVar1;
  Version *pVVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  Particles PVar16;
  long lVar17;
  int iVar18;
  ulong __n;
  long in_FS_OFFSET;
  undefined1 local_88 [8];
  undefined8 *local_80;
  Vector<RenderingDevice::Uniform> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_00108826:
    iVar18 = 0;
  }
  else {
    lVar14 = RendererRD::MaterialStorage::get_singleton();
    uVar13 = *(ulong *)(param_1 + 0x88);
    if ((uVar13 == 0) || (*(uint *)(lVar14 + 0x26c) <= (uint)uVar13)) goto LAB_00108826;
    lVar14 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(lVar14 + 0x268)) * 0xc0 +
             *(long *)(*(long *)(lVar14 + 600) +
                      ((uVar13 & 0xffffffff) / (ulong)*(uint *)(lVar14 + 0x268)) * 8);
    if (*(int *)(lVar14 + 0xb8) != (int)(uVar13 >> 0x20)) {
      if (*(int *)(lVar14 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00108826;
    }
    if ((((*(int *)(lVar14 + 0x18) != 2) || (*(long *)(lVar14 + 8) == 0)) ||
        (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0xa8), *(long *)(lVar14 + 0x78) == 0)) ||
       (*(char *)(lVar14 + 0x70) == '\0')) goto LAB_00108826;
    iVar18 = *(int *)(lVar14 + 200);
  }
  iVar8 = RendererViewport::get_num_viewports_with_motion_vectors();
  if ((iVar8 < 1) && (*(int *)(RendererCompositorStorage::singleton + 8) < 1)) {
    PVar16 = (Particles)0x0;
    iVar8 = *(int *)(param_1 + 0xf0);
joined_r0x001088c5:
    if (iVar18 == iVar8) {
      if (*(long *)(param_1 + 0xd8) != 0) goto LAB_00108890;
    }
    else {
LAB_001088e6:
      _particles_free_data(this,param_1);
    }
    bVar7 = false;
    iVar8 = *(int *)(param_1 + 0x14);
  }
  else {
    if (*(int *)(param_1 + 0x98) != 0) {
      PVar16 = (Particles)0x1;
LAB_001088be:
      iVar8 = *(int *)(param_1 + 0xf0);
      goto joined_r0x001088c5;
    }
    PVar16 = param_1[0x1f0];
    if (PVar16 != (Particles)0x0) goto LAB_001088be;
    if (iVar18 != *(int *)(param_1 + 0xf0)) {
      PVar16 = (Particles)0x1;
      goto LAB_001088e6;
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar10 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar10);
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    PVar16 = (Particles)0x1;
    *(undefined8 *)(param_1 + 0x108) = 0;
    bVar7 = true;
  }
  if (iVar8 < 1) goto LAB_00108890;
  if (((param_1[0x2c8] != (Particles)0x0) && (*(long *)(param_1 + 0xb8) != 0)) &&
     (lVar14 = *(long *)(*(long *)(param_1 + 0xb8) + -8), 1 < lVar14)) {
    iVar8 = iVar8 * (int)lVar14;
  }
  iVar3 = *(int *)param_1;
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar10 = RenderingDevice::get_singleton();
    local_60 = 0;
    uVar10 = RenderingDevice::storage_buffer_create(uVar10,(iVar18 + 7) * iVar8 * 0x10,&local_68,0);
    uVar13 = local_60;
    *(undefined8 *)(param_1 + 0xd8) = uVar10;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(uVar13 - 0x10),false);
      }
    }
    *(int *)(param_1 + 0xf0) = iVar18;
  }
  local_80 = (undefined8 *)0x0;
  iVar8 = (5 - (uint)(iVar3 == 0)) * iVar8;
  if (PVar16 == (Particles)0x0) {
    uVar15 = iVar8 * 0x10;
  }
  else {
    param_1[0x1f0] = (Particles)0x1;
    uVar15 = iVar8 * 0x20;
  }
  if (uVar15 != 0) {
    __n = (ulong)uVar15;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
    uVar13 = __n - 1 | __n - 1 >> 1;
    uVar13 = uVar13 | uVar13 >> 2;
    uVar13 = uVar13 | uVar13 >> 4;
    uVar13 = uVar13 | uVar13 >> 8;
    puVar9 = (undefined8 *)Memory::alloc_static((uVar13 | uVar13 >> 0x10) + 0x11,false);
    if (puVar9 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      local_80 = puVar9 + 2;
      *puVar9 = 1;
      memset(local_80,0,__n);
      puVar9[1] = __n;
    }
  }
  uVar10 = RenderingDevice::get_singleton();
  uVar10 = RenderingDevice::storage_buffer_create(uVar10,uVar15,local_88,0);
  local_68 = _LC174;
  *(undefined8 *)(param_1 + 0xe0) = uVar10;
  local_58 = *(undefined8 *)(param_1 + 0xd8);
  local_70 = 0;
  local_60 = local_60 & 0xffffffffffffff00;
  local_48 = 0;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  local_60 = local_60 & 0xffffffffffffff00;
  local_58 = *(undefined8 *)(param_1 + 0xe0);
  local_48 = 0;
  local_68 = _LC175;
  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
  uVar10 = RenderingDevice::get_singleton();
  uVar13 = *(ulong *)(this + 0x830);
  if (*(long *)(this + 0x6d0) == 0) {
    lVar14 = 0;
LAB_00108e9b:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar14,
               "p_variant","variant_defines.size()","",false,false);
LAB_00108ed4:
    uVar12 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(this + 0x6d0) + -8);
    if (lVar14 < 1) goto LAB_00108e9b;
    pcVar4 = *(char **)(this + 0x6e0);
    if (pcVar4 == (char *)0x0) {
LAB_00108e50:
      lVar14 = 0;
LAB_00108e53:
      uVar13 = 0;
LAB_00108e70:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar14,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar14 = *(long *)(pcVar4 + -8);
    if (lVar14 < 1) goto LAB_00108e53;
    if (*pcVar4 != '\0') {
      if ((uVar13 == 0) || (*(uint *)(this + 0x78c) <= (uint)uVar13)) {
LAB_00108fa0:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar12 = 0;
        goto LAB_00108ba8;
      }
      lVar11 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(this + 0x788)) * 0xa0 +
               *(long *)(*(long *)(this + 0x778) +
                        ((uVar13 & 0xffffffff) / (ulong)*(uint *)(this + 0x788)) * 8);
      if (*(int *)(lVar11 + 0x98) != (int)(uVar13 >> 0x20)) {
        if (*(int *)(lVar11 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00108fa0;
      }
      pVVar2 = (Version *)(this + 0x6b8);
      iVar18 = (int)lVar11;
      if (*(char *)(lVar11 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar14 = *(long *)(this + 0x730);
        if (lVar14 != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(lVar14 + -8) <= lVar17) break;
            if (*(char *)(lVar14 + lVar17) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar18);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar18);
            }
            lVar14 = *(long *)(this + 0x730);
            lVar17 = lVar17 + 1;
          } while (lVar14 != 0);
        }
      }
      puVar5 = *(uint **)(this + 0x6f0);
      if (puVar5 == (uint *)0x0) goto LAB_00108e50;
      lVar14 = *(long *)(puVar5 + -2);
      if (lVar14 < 1) goto LAB_00108e53;
      uVar13 = (ulong)*puVar5;
      lVar17 = *(long *)(lVar11 + 0x68);
      if (lVar17 == 0) {
        lVar14 = 0;
        goto LAB_00108e70;
      }
      lVar14 = *(long *)(lVar17 + -8);
      if (lVar14 <= (long)uVar13) goto LAB_00108e70;
      if (*(long *)(lVar17 + uVar13 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar18);
      }
      if (*(char *)(lVar11 + 0x90) != '\0') {
        puVar9 = *(undefined8 **)(lVar11 + 0x88);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00108e50;
        lVar14 = puVar9[-1];
        if (0 < lVar14) {
          uVar12 = *puVar9;
          goto LAB_00108ba8;
        }
        goto LAB_00108e53;
      }
      goto LAB_00108ed4;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
    uVar12 = 0;
  }
LAB_00108ba8:
  uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar10,local_78,uVar12,0,0);
  *(undefined8 *)(param_1 + 0x100) = uVar10;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0xffffffffffffffff;
  if (bVar7) {
    Dependency::changed_notify(param_1 + 0x290);
  }
  puVar9 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_80 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (undefined8 *)0x0;
      Memory::free_static(puVar9 + -2,false);
    }
  }
LAB_00108890:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::ParticlesStorage::particles_set_view_axis(RID, Vector3 const&, Vector3 const&) */

void __thiscall
RendererRD::ParticlesStorage::particles_set_view_axis
          (ParticlesStorage *this,ulong param_2,uint *param_3,undefined8 *param_4)

{
  long *plVar1;
  Version *pVVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  Vector<RenderingDevice::Uniform> local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  float local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  byte local_8c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x91c))) {
    piVar14 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
                     *(long *)(*(long *)(this + 0x908) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
    if (piVar14[0xbc] == (int)(param_2 >> 0x20)) {
      iVar3 = piVar14[0x26];
      if (iVar3 == 3) {
        if ((*(long *)(piVar14 + 0x36) == 0) || (*(long *)(piVar14 + 0x34) == 0)) goto LAB_001090c9;
        local_bc = piVar14[5];
        if (*(long *)(piVar14 + 0x58) != 0) {
          iVar10 = piVar14[0x25];
          iVar16 = 3;
          goto LAB_00109112;
        }
        uVar7 = RenderingDevice::get_singleton();
        local_f0 = 0;
        uVar7 = RenderingDevice::storage_buffer_create
                          (uVar7,((local_bc + 1) - (uint)((local_bc & 1) == 0)) * 8,&local_f8,0);
        uVar12 = local_f0;
        *(undefined8 *)(piVar14 + 0x58) = uVar7;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(uVar12 - 0x10),false);
          }
        }
        local_e8 = *(undefined8 *)(piVar14 + 0x58);
        local_100 = 0;
        local_f8 = 8;
        local_f0 = local_f0 & 0xffffffffffffff00;
        local_d8 = 0;
        Vector<RenderingDevice::Uniform>::push_back(local_108,&local_f8);
        uVar9 = RenderingDevice::get_singleton();
        uVar12 = *(ulong *)(this + 0x830);
        uVar7 = 0;
        if (*(long *)(this + 0x6d0) == 0) {
          lVar8 = 0;
LAB_0010986a:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar8
                     ,"p_variant","variant_defines.size()","",false,false);
        }
        else {
          lVar8 = *(long *)(*(long *)(this + 0x6d0) + -8);
          if (lVar8 < 2) goto LAB_0010986a;
          lVar8 = *(long *)(this + 0x6e0);
          if (lVar8 == 0) {
LAB_00109962:
            lVar17 = 0;
LAB_00109965:
            uVar12 = 1;
LAB_00109985:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar17,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar17 = *(long *)(lVar8 + -8);
          if (lVar17 < 2) goto LAB_00109965;
          if (*(char *)(lVar8 + 1) == '\0') {
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                             ,0,0);
            goto LAB_001097eb;
          }
          if ((uVar12 == 0) || (*(uint *)(this + 0x78c) <= (uint)uVar12)) {
LAB_00109a30:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
          }
          else {
            lVar8 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(this + 0x788)) * 0xa0 +
                    *(long *)(*(long *)(this + 0x778) +
                             ((uVar12 & 0xffffffff) / (ulong)*(uint *)(this + 0x788)) * 8);
            if (*(int *)(lVar8 + 0x98) != (int)(uVar12 >> 0x20)) {
              uVar13 = *(int *)(lVar8 + 0x98) + 0x80000000;
              if (uVar13 < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar13);
              }
              goto LAB_00109a30;
            }
            pVVar2 = (Version *)(this + 0x6b8);
            iVar10 = (int)lVar8;
            if (*(char *)(lVar8 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar17 = *(long *)(this + 0x730);
              if (lVar17 != 0) {
                lVar11 = 0;
                do {
                  if (*(long *)(lVar17 + -8) <= lVar11) break;
                  if (*(char *)(lVar17 + lVar11) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar10);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar10);
                  }
                  lVar17 = *(long *)(this + 0x730);
                  lVar11 = lVar11 + 1;
                } while (lVar17 != 0);
              }
            }
            lVar11 = *(long *)(this + 0x6f0);
            if (lVar11 == 0) goto LAB_00109962;
            lVar17 = *(long *)(lVar11 + -8);
            if (lVar17 < 2) goto LAB_00109965;
            uVar12 = (ulong)*(uint *)(lVar11 + 4);
            lVar11 = *(long *)(lVar8 + 0x68);
            if (lVar11 == 0) {
              lVar17 = 0;
              goto LAB_00109985;
            }
            lVar17 = *(long *)(lVar11 + -8);
            if (lVar17 <= (long)uVar12) goto LAB_00109985;
            if (*(long *)(lVar11 + uVar12 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar10);
            }
            if (*(char *)(lVar8 + 0x90) != '\0') {
              lVar8 = *(long *)(lVar8 + 0x88);
              if (lVar8 == 0) goto LAB_00109962;
              lVar17 = *(long *)(lVar8 + -8);
              if (lVar17 < 2) goto LAB_00109965;
              uVar7 = *(undefined8 *)(lVar8 + 8);
            }
          }
        }
LAB_001097eb:
        uVar7 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                          (uVar9,local_108,uVar7,1,0);
        *(undefined8 *)(piVar14 + 0x5a) = uVar7;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_100);
        iVar16 = piVar14[0x26];
        iVar10 = piVar14[0x25];
        local_bc = piVar14[5];
LAB_00109112:
        cVar15 = (char)piVar14[0xb2];
        if (((cVar15 == '\0') || (*(long *)(piVar14 + 0x2e) == 0)) ||
           (lVar8 = *(long *)(*(long *)(piVar14 + 0x2e) + -8), lVar8 < 2)) {
          local_b8 = 1;
          local_b4 = 1;
          local_b0 = 0.0;
        }
        else {
          local_b0 = _LC176;
          if (0 < piVar14[0x72]) {
            local_b0 = (float)(_LC130 / (double)piVar14[0x72]);
          }
          local_b8 = (undefined4)lVar8;
          local_b4 = piVar14[0xb4];
        }
        local_ac = 0.0;
        iVar5 = (int)((double)(int)local_bc * *(double *)(piVar14 + 0x68));
        if ((int)(local_bc - 1) < (int)((double)(int)local_bc * *(double *)(piVar14 + 0x68))) {
          iVar5 = local_bc - 1;
        }
        local_98 = (iVar5 + 1) % (int)local_bc;
        local_94 = (uint)(iVar16 == 2);
        local_90 = piVar14[0x77];
        if ((char)piVar14[0x73] != '\0') {
          local_ac = (float)*(double *)(piVar14 + 0x74);
        }
        local_8c = local_8c & 0xfc | iVar16 - 1U < 2;
        local_c0 = (float)(param_3[2] ^ _LC44);
        fVar18 = (float)((uint)*(undefined8 *)param_3 ^ (uint)_LC179);
        fVar20 = (float)((uint)((ulong)*(undefined8 *)param_3 >> 0x20) ^ _LC179._4_4_);
        local_c8 = CONCAT44(fVar20,fVar18);
        if ((char)piVar14[0x14] != '\0') {
          fVar20 = (float)piVar14[0x7f] * fVar18 + fVar20 * (float)piVar14[0x82] +
                   (float)piVar14[0x85] * local_c0;
          auVar21._0_4_ =
               (float)*(undefined8 *)(piVar14 + 0x80) * (float)(param_3[1] ^ _LC44) +
               (float)*(undefined8 *)(piVar14 + 0x7d) * (float)(*param_3 ^ _LC44) +
               (float)*(undefined8 *)(piVar14 + 0x83) * local_c0;
          auVar21._4_4_ =
               (float)((ulong)*(undefined8 *)(piVar14 + 0x80) >> 0x20) * (float)(param_3[1] ^ _LC44)
               + (float)((ulong)*(undefined8 *)(piVar14 + 0x7d) >> 0x20) * (float)(*param_3 ^ _LC44)
               + (float)((ulong)*(undefined8 *)(piVar14 + 0x83) >> 0x20) * local_c0;
          auVar21._8_8_ = 0;
          fVar18 = auVar21._0_4_ * auVar21._0_4_ + auVar21._4_4_ * auVar21._4_4_ + fVar20 * fVar20;
          local_c8 = 0;
          local_c0 = 0.0;
          if (fVar18 != 0.0) {
            fVar18 = SQRT(fVar18);
            local_c0 = fVar20 / fVar18;
            auVar19._4_4_ = fVar18;
            auVar19._0_4_ = fVar18;
            auVar19._8_8_ = _LC180;
            auVar21 = divps(auVar21,auVar19);
            local_c8 = auVar21._0_8_;
          }
        }
        local_a8 = *param_4;
        local_a0 = *(undefined4 *)(param_4 + 1);
        local_9c = iVar10;
        if (iVar3 == 3) {
          RenderingDevice::get_singleton();
          pvVar6 = (void *)RenderingDevice::compute_list_begin();
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar7,pvVar6,*(undefined8 *)(this + (ulong)(piVar14[0x3c] * 3 + 1) * 8 + 0x838)
                    );
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar7,pvVar6,*(undefined8 *)(piVar14 + 0x40),0);
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar7,pvVar6,*(undefined8 *)(piVar14 + 0x5a),1);
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar7,pvVar6,*(undefined8 *)(piVar14 + 0x34),2);
          lVar8 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar8,pvVar6,(uint)&local_c8);
          lVar8 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar6,piVar14[5],1);
          RenderingDevice::get_singleton();
          RenderingDevice::compute_list_end();
          RendererRD::SortEffects::sort_buffer
                    (*(undefined8 *)(this + 8),*(undefined8 *)(piVar14 + 0x5a),piVar14[5]);
          cVar15 = (char)piVar14[0xb2];
        }
        if (((cVar15 != '\0') && (*(long *)(piVar14 + 0x2e) != 0)) &&
           (lVar8 = *(long *)(*(long *)(piVar14 + 0x2e) + -8), 1 < lVar8)) {
          local_bc = (int)lVar8 * local_bc;
        }
        RenderingDevice::get_singleton();
        pvVar6 = (void *)RenderingDevice::compute_list_begin();
        iVar10 = piVar14[0x3c];
        local_8c = local_8c & 0xfd | (*piVar14 == 0) * '\x02';
        uVar7 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (uVar7,pvVar6,
                   *(undefined8 *)(this + (ulong)(iVar10 * 3 + (uint)(iVar3 == 3) * 2) * 8 + 0x838))
        ;
        uVar7 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar7,pvVar6,*(undefined8 *)(piVar14 + 0x40),0);
        if (iVar3 == 3) {
          uVar7 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar7,pvVar6,*(undefined8 *)(piVar14 + 0x5a),1);
        }
        uVar7 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar7,pvVar6,*(undefined8 *)(piVar14 + 0x34),2);
        lVar8 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar8,pvVar6,(uint)&local_c8);
        lVar8 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_dispatch_threads(lVar8,(uint)pvVar6,local_bc,1);
        RenderingDevice::get_singleton();
        RenderingDevice::compute_list_end();
      }
      else {
        iVar10 = piVar14[0x25];
        if ((((iVar10 == 1) || (iVar10 == 3)) && (*(long *)(piVar14 + 0x36) != 0)) &&
           (*(long *)(piVar14 + 0x34) != 0)) {
          local_bc = piVar14[5];
          iVar16 = iVar3;
          goto LAB_00109112;
        }
      }
LAB_001090c9:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109a7d;
    }
    if (piVar14[0xbc] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("particles_set_view_axis",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x4be,
                     "Parameter \"particles\" is null.",0,0);
    return;
  }
LAB_00109a7d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00109d79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::ParticlesStorage::_particles_process(RendererRD::ParticlesStorage::Particles*,
   double) */

void __thiscall
RendererRD::ParticlesStorage::_particles_process
          (ParticlesStorage *this,Particles *param_1,double param_2)

{
  ulong *puVar1;
  float fVar2;
  Particles PVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [13];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint *puVar16;
  long *plVar17;
  void *pvVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  Particles *pPVar23;
  int *piVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  uint *puVar32;
  long in_FS_OFFSET;
  bool bVar33;
  byte bVar34;
  ushort in_FPUStatusWord;
  float fVar35;
  double __x;
  float fVar37;
  double dVar36;
  undefined1 auVar39 [12];
  uint local_1ec;
  long local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  Vector<RenderingDevice::Uniform> local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170;
  long local_168;
  Vector<RID> local_160 [8];
  long local_158 [2];
  float local_148;
  uint uStack_144;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  uint uStack_138;
  uint uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  long local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_f8 [12];
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  float fVar38;
  
  bVar34 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = RendererRD::TextureStorage::get_singleton();
  lVar14 = RendererRD::MaterialStorage::get_singleton();
  if (*(long *)(param_1 + 0xf8) == 0) {
LAB_00109bf0:
    local_180 = 0;
    local_148 = 1.12104e-44;
    uStack_144 = 0;
    uStack_138 = (uint)*(undefined8 *)(param_1 + 0xe8);
    uStack_134 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20);
    uStack_140 = 0;
    local_128[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back(local_188,&local_148);
    uStack_140 = 0;
    uStack_138 = (uint)*(undefined8 *)(param_1 + 0xd8);
    uStack_134 = (uint)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
    local_148 = (float)_LC174;
    uStack_144 = (uint)((ulong)_LC174 >> 0x20);
    local_128[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back(local_188,&local_148);
    local_168 = *(long *)(param_1 + 0x250);
    if ((local_168 == 0) && (local_168 = *(long *)(param_1 + 600), local_168 == 0)) {
      _particles_ensure_unused_emission_buffer(param_1);
      local_168 = *(long *)(param_1 + 600);
    }
    uStack_138 = (uint)local_168;
    uStack_134 = (uint)((ulong)local_168 >> 0x20);
    local_148 = (float)_LC175;
    uStack_144 = (uint)((ulong)_LC175 >> 0x20);
    uStack_140 = 0;
    local_128[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back(local_188,&local_148);
    local_170 = 0;
    local_168 = 0;
    local_158[0] = 0;
    local_178 = _LC181;
    if (*(long *)(param_1 + 0x198) == 0) {
      if (*(long *)(param_1 + 600) == 0) {
        _particles_ensure_unused_emission_buffer(param_1);
      }
      lVar19 = *(long *)(param_1 + 600);
LAB_00109f31:
      lVar31 = 0;
    }
    else {
      uVar25 = *(ulong *)(param_1 + 0x198);
      if ((uint)uVar25 < *(uint *)(this + 0x91c)) {
        pPVar23 = (Particles *)
                  (((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
                  *(long *)(*(long *)(this + 0x908) +
                           ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8));
        if (*(int *)(pPVar23 + 0x2f0) != (int)(uVar25 >> 0x20)) {
          if (*(int *)(pPVar23 + 0x2f0) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00109f58;
        }
        if (*(long *)(pPVar23 + 0x248) == 0) {
          _particles_allocate_emission_buffer(this,pPVar23);
        }
        lVar31 = 0;
        lVar19 = *(long *)(pPVar23 + 0x250);
        if (local_168 != 0) goto LAB_00109f81;
      }
      else {
LAB_00109f58:
        if (*(long *)(param_1 + 600) == 0) {
          _particles_ensure_unused_emission_buffer(param_1);
        }
        lVar19 = *(long *)(param_1 + 600);
        if (local_168 == 0) goto LAB_00109f31;
LAB_00109f81:
        Vector<RID>::push_back(local_160,local_168);
        Vector<RID>::push_back(local_160,lVar19);
        local_168 = 0;
        lVar31 = local_158[0];
        lVar19 = local_168;
      }
    }
    local_168 = lVar19;
    local_128[0] = 0;
    local_148 = (float)local_178;
    uStack_144 = (uint)((ulong)local_178 >> 0x20);
    uStack_140 = local_170;
    uStack_138 = (uint)local_168;
    uStack_134 = (uint)((ulong)local_168 >> 0x20);
    if (lVar31 == 0) {
      Vector<RenderingDevice::Uniform>::push_back(local_188,&local_148);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_128,(CowData *)local_158);
      lVar19 = local_128[0];
      Vector<RenderingDevice::Uniform>::push_back(local_188);
      if (lVar19 != 0) {
        LOCK();
        plVar17 = (long *)(lVar19 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          Memory::free_static((void *)(local_128[0] + -0x10),false);
        }
        lVar31 = local_158[0];
        if (local_158[0] == 0) goto LAB_00109e59;
      }
      LOCK();
      plVar17 = (long *)(lVar31 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        Memory::free_static((void *)(local_158[0] + -0x10),false);
      }
    }
LAB_00109e59:
    uVar15 = RenderingDevice::get_singleton();
    uVar15 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar15,local_188,*(undefined8 *)(this + 0x6a8),1,0);
    *(undefined8 *)(param_1 + 0xf8) = uVar15;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_180);
  }
  else {
    uVar15 = RenderingDevice::get_singleton();
    cVar10 = RenderingDevice::uniform_set_is_valid(uVar15,*(undefined8 *)(param_1 + 0xf8));
    if (cVar10 == '\0') goto LAB_00109bf0;
  }
  dVar36 = *(double *)(param_1 + 0x1a0);
  __x = param_2 / *(double *)(param_1 + 0x18) + dVar36;
  dVar6 = __x;
  do {
    dVar6 = dVar6 - (dVar6 / 1.0) * 1.0;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(dVar6)) {
    fmod(__x,_LC130);
  }
  auVar8._8_4_ = local_f8._8_4_;
  auVar8._0_8_ = local_f8._0_8_;
  auVar39._8_4_ = local_f8._8_4_;
  auVar39._0_8_ = local_f8._0_8_;
  uVar12 = *(uint *)(param_1 + 0x2d0);
  uVar25 = (ulong)uVar12;
  if (uVar12 - 1 != 0) {
    if (uVar12 < 2) {
      uVar20 = 0xfffffffe;
    }
    else {
      puVar32 = *(uint **)(param_1 + 0x2d8);
      puVar16 = puVar32 + (ulong)(uVar12 - 1) * 0x624;
      uVar30 = uVar12 - 2;
      do {
        uVar22 = uVar30;
        puVar26 = puVar32 + (ulong)uVar22 * 0x624;
        *(undefined8 *)puVar16 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar16 + 0x622) = *(undefined8 *)(puVar26 + 0x622);
        lVar19 = (long)puVar16 - (long)((ulong)(puVar16 + 2) & 0xfffffffffffffff8);
        puVar28 = (undefined8 *)((long)puVar26 - lVar19);
        puVar27 = (undefined8 *)((ulong)(puVar16 + 2) & 0xfffffffffffffff8);
        for (uVar20 = (ulong)((int)lVar19 + 0x1890U >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar27 = *puVar28;
          puVar28 = puVar28 + (ulong)bVar34 * -2 + 1;
          puVar27 = puVar27 + (ulong)bVar34 * -2 + 1;
        }
        if (uVar22 == 0) goto LAB_00109fef;
        uVar30 = uVar22 - 1;
        uVar20 = (ulong)uVar30;
        local_f8 = auVar39;
        if (uVar12 <= uVar30) goto LAB_00109eb5;
        bVar33 = puVar32 != puVar16;
        puVar16 = puVar16 + -0x624;
      } while (bVar33);
      uVar20 = (ulong)uVar22;
      local_f8 = auVar8;
    }
    goto LAB_00109eb5;
  }
  puVar32 = *(uint **)(param_1 + 0x2d8);
LAB_00109fef:
  if (param_1[0x1f1] == (Particles)0x0) {
    if (dVar36 <= dVar6) {
      uVar12 = (uint)(byte)param_1[0x10];
    }
    else {
      if (param_1[0x11] == (Particles)0x0) {
        uVar12 = (uint)(byte)param_1[0x10];
      }
      else {
        param_1[0x10] = (Particles)0x0;
        uVar12 = 0;
      }
      *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    uVar12 = (uint)(byte)param_1[0x10];
  }
  plVar17 = RendererCompositorRD::singleton;
  *puVar32 = uVar12;
  lVar19 = *plVar17;
  *(ulong *)(puVar32 + 1) = CONCAT44((float)dVar36,(float)dVar6);
  *(double *)(param_1 + 0x1a0) = dVar6;
  pcVar5 = *(code **)(lVar19 + 0x98);
  if (pcVar5 == RendererCompositorRD::get_total_time) {
    dVar36 = (double)plVar17[0x54];
  }
  else {
    dVar36 = (double)(*pcVar5)();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x2c);
  puVar32[0xc] = *(uint *)(param_1 + 0x1b8);
  PVar3 = param_1[0x50];
  *(undefined8 *)(puVar32 + 4) = uVar15;
  *(ulong *)(puVar32 + 6) = CONCAT44((float)param_2,(float)dVar36);
  uVar9 = _UNK_0011ffc8;
  uVar15 = _LC136;
  if (PVar3 == (Particles)0x0) {
    local_d8 = ZEXT416(_LC135);
    puVar32[0x10] = *(uint *)(param_1 + 500);
    puVar32[0x11] = *(uint *)(param_1 + 0x200);
    uVar12 = *(uint *)(param_1 + 0x20c);
    puVar32[0x13] = 0;
    puVar32[0x12] = uVar12;
    puVar32[0x14] = *(uint *)(param_1 + 0x1f8);
    puVar32[0x15] = *(uint *)(param_1 + 0x204);
    uVar12 = *(uint *)(param_1 + 0x210);
    puVar32[0x17] = 0;
    puVar32[0x16] = uVar12;
    puVar32[0x18] = *(uint *)(param_1 + 0x1fc);
    puVar32[0x19] = *(uint *)(param_1 + 0x208);
    uVar12 = *(uint *)(param_1 + 0x214);
    puVar32[0x1b] = 0;
    puVar32[0x1a] = uVar12;
    puVar32[0x1c] = *(uint *)(param_1 + 0x218);
    puVar32[0x1d] = *(uint *)(param_1 + 0x21c);
    uVar12 = *(uint *)(param_1 + 0x220);
  }
  else {
    puVar32[0x1c] = 0;
    puVar32[0x1d] = 0;
    local_d8 = ZEXT416(_LC135);
    *(undefined1 (*) [16])(puVar32 + 0x10) = local_d8;
    *(undefined8 *)(puVar32 + 0x14) = uVar15;
    *(undefined8 *)(puVar32 + 0x16) = uVar9;
    uVar15 = _UNK_0011ffd8;
    *(undefined8 *)(puVar32 + 0x18) = __LC187;
    *(undefined8 *)(puVar32 + 0x1a) = uVar15;
    uVar12 = 0;
  }
  uVar30 = *(uint *)(param_1 + 0x1bc);
  puVar32[0x1f] = 0x3f800000;
  puVar32[0x1e] = uVar12;
  uVar12 = *(uint *)(param_1 + 0x234);
  puVar32[3] = uVar30;
  uVar30 = *(uint *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = uVar30 + 1;
  puVar32[9] = uVar12;
  uVar12 = *(uint *)(param_1 + 0x224);
  puVar32[8] = uVar30;
  puVar32[0x20] = uVar12;
  uVar12 = *(uint *)(param_1 + 0x228);
  puVar32[10] = 0;
  puVar32[0xb] = 0;
  puVar32[0x21] = uVar12;
  local_b8 = 0x3f800000;
  puVar32[0x22] = *(uint *)(param_1 + 0x22c);
  uStack_b4 = 0;
  puVar32[0x23] = *(uint *)(param_1 + 0x230);
  uVar12 = *(uint *)(param_1 + 0x1d8);
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xf] = uVar12;
  local_48 = 0;
  uStack_ac = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_c8 = local_d8;
  if (PVar3 != (Particles)0x0) {
    Transform3D::affine_inverse();
    local_d8._8_8_ = uStack_1b0;
    local_d8._0_8_ = local_1b8;
    local_c8._8_8_ = uStack_1a0;
    local_c8._0_8_ = local_1a8;
    local_b8 = local_198;
    uStack_ac = uStack_18c;
    uStack_b4 = CONCAT44(uStack_190,uStack_194);
  }
  if (param_1[0x52] == (Particles)0x0) {
LAB_0010a1c3:
    local_1e8 = 0;
  }
  else {
    uVar15 = RenderingDevice::get_singleton();
    cVar10 = RenderingDevice::texture_is_valid(uVar15,*(undefined8 *)(param_1 + 0x80));
    if (cVar10 == '\0') goto LAB_0010a1c3;
    local_118 = *(undefined8 *)(param_1 + 0x54);
    uStack_110 = *(undefined8 *)(param_1 + 0x5c);
    local_108 = *(undefined8 *)(param_1 + 100);
    if (param_1[0x50] == (Particles)0x0) {
      local_f8._8_4_ = *(undefined4 *)(param_1 + 0x1f8);
      local_e8 = *(undefined8 *)(param_1 + 0x218);
      uStack_ec = *(undefined4 *)(param_1 + 0x204);
      local_f8._4_4_ = *(undefined4 *)(param_1 + 0x200);
      local_f8._0_4_ = *(undefined4 *)(param_1 + 500);
      Transform2D::affine_inverse();
      Transform2D::operator*((Transform2D *)&local_1d8,(Transform2D *)&local_118);
      local_108 = local_1c8;
      local_118 = local_1d8;
      uStack_110 = uStack_1d0;
    }
    Transform2D::affine_inverse();
    puVar32[0x326] = 0;
    puVar32[0x32a] = 0;
    *(undefined8 *)(puVar32 + 0x324) = local_118;
    puVar32[0x327] = (uint)local_108;
    *(undefined8 *)(puVar32 + 0x328) = uStack_110;
    puVar32[0x32b] = local_108._4_4_;
    puVar32[0x32e] = 0;
    *(ulong *)(puVar32 + 0x32c) = local_a8;
    puVar32[0xe] = 1;
    puVar32[0x32f] = (uint)local_98;
    puVar32[0x332] = 0;
    *(ulong *)(puVar32 + 0x330) = uStack_a0;
    local_1e8 = *(long *)(param_1 + 0x80);
    puVar32[0x333] = local_98._4_4_;
    puVar32[0x334] = *(uint *)(param_1 + 0x74);
    puVar32[0x335] = *(uint *)(param_1 + 0x78);
    puVar32[0x336] = *(uint *)(param_1 + 0x6c);
    uVar12 = *(uint *)(param_1 + 0x70);
    puVar32[0x337] = 4;
    puVar32[0x338] = 0;
    puVar32[0x339] = uVar12;
    lVar19 = *(long *)(param_1 + 0x2d8);
    lVar31 = (ulong)*(uint *)(param_1 + 0x2d0) * 0x1890 + lVar19;
    for (; lVar31 != lVar19; lVar19 = lVar19 + 0x1890) {
      if ((*(int *)(lVar19 + 0x38) != 0) && (*(int *)(lVar19 + 0xcdc) == 4)) {
        uVar15 = *(undefined8 *)(puVar32 + 0x326);
        *(undefined8 *)(lVar19 + 0xc90) = *(undefined8 *)(puVar32 + 0x324);
        *(undefined8 *)(lVar19 + 0xc98) = uVar15;
        uVar15 = *(undefined8 *)(puVar32 + 0x32a);
        *(undefined8 *)(lVar19 + 0xca0) = *(undefined8 *)(puVar32 + 0x328);
        *(undefined8 *)(lVar19 + 0xca8) = uVar15;
        uVar15 = *(undefined8 *)(puVar32 + 0x32e);
        *(undefined8 *)(lVar19 + 0xcb0) = *(undefined8 *)(puVar32 + 0x32c);
        *(undefined8 *)(lVar19 + 0xcb8) = uVar15;
        *(undefined1 (*) [16])(lVar19 + 0xcc0) = *(undefined1 (*) [16])(puVar32 + 0x330);
        uVar12 = puVar32[0x335];
        uVar30 = puVar32[0x336];
        uVar22 = puVar32[0x337];
        *(uint *)(lVar19 + 0xcd0) = puVar32[0x334];
        *(uint *)(lVar19 + 0xcd4) = uVar12;
        *(uint *)(lVar19 + 0xcd8) = uVar30;
        *(uint *)(lVar19 + 0xcdc) = uVar22;
        uVar15 = *(undefined8 *)(puVar32 + 0x33a);
        *(undefined8 *)(lVar19 + 0xce0) = *(undefined8 *)(puVar32 + 0x338);
        *(undefined8 *)(lVar19 + 0xce8) = uVar15;
      }
    }
  }
  uVar12 = *(uint *)(param_1 + 0x28c);
  local_1ec = uVar12;
  if (uVar12 != 0) {
    lVar19 = *(long *)(param_1 + 0x268);
    lVar31 = 0;
    local_1ec = 0;
    do {
      uVar25 = *(ulong *)(lVar19 + lVar31 * 8);
      if ((uVar25 != 0) && ((uint)uVar25 < *(uint *)(this + 0x9cc))) {
        puVar1 = (ulong *)(*(long *)(*(long *)(this + 0x9b8) +
                                    ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0x9c8)) * 8) +
                          ((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0x9c8)) * 0x48);
        if ((int)puVar1[8] == (int)(uVar25 >> 0x20)) {
          if ((char)puVar1[7] != '\0') {
            if (*puVar1 != 0) {
              uVar25 = *puVar1;
              if ((uint)uVar25 < *(uint *)(this + 0x974)) {
                puVar16 = (uint *)(*(long *)(*(long *)(this + 0x960) +
                                            ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0x970))
                                            * 8) +
                                  ((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0x970)) * 0x88);
                if (puVar16[0x20] == (uint)(uVar25 >> 0x20)) {
                  local_a8 = puVar1[1];
                  uStack_a0 = puVar1[2];
                  local_98 = puVar1[3];
                  uStack_90 = puVar1[4];
                  local_88 = puVar1[5];
                  uStack_80 = puVar1[6];
                  if (param_1[0x50] != (Particles)0x0) {
                    Transform3D::operator*((Transform3D *)&local_1b8,(Transform3D *)local_d8);
                    local_a8 = local_1b8;
                    uStack_a0 = uStack_1b0;
                    local_88 = CONCAT44(uStack_194,local_198);
                    uStack_80 = CONCAT44(uStack_18c,uStack_190);
                    local_98 = local_1a8;
                    uStack_90 = uStack_1a0;
                  }
                  auVar39 = Basis::get_scale();
                  fVar38 = auVar39._8_4_;
                  fVar35 = auVar39._0_4_;
                  fVar37 = auVar39._4_4_;
                  local_f8 = auVar39;
                  Basis::orthonormalize();
                  uVar30 = *puVar16;
                  if ((int)uVar30 < 3) {
                    uVar22 = puVar32[0xd];
                    if (uVar22 < 0x20) {
                      uVar25 = (ulong)uVar22;
                      puVar26 = puVar32 + uVar25 * 0x18 + 0x24;
                      *puVar26 = (uint)local_a8;
                      puVar26[1] = uStack_a0._4_4_;
                      puVar26[3] = 0;
                      puVar26[2] = (uint)uStack_90;
                      puVar26[4] = local_a8._4_4_;
                      puVar26[5] = (uint)local_98;
                      puVar26[7] = 0;
                      puVar26[6] = uStack_90._4_4_;
                      puVar26[8] = (uint)uStack_a0;
                      puVar26[9] = local_98._4_4_;
                      puVar26[0xb] = 0;
                      puVar26[10] = (uint)local_88;
                      puVar26[0xc] = local_88._4_4_;
                      puVar26[0xf] = 0x3f800000;
                      *(ulong *)(puVar26 + 0xd) = uStack_80;
                      uVar11 = puVar16[8];
                      *(undefined8 *)(puVar32 + uVar25 * 0x18 + 0x39) = *(undefined8 *)(puVar16 + 6)
                      ;
                      puVar32[uVar25 * 0x18 + 0x3b] = uVar11;
                      if (uVar30 == 1) {
                        uVar15 = *(undefined8 *)(puVar16 + 3);
                        puVar32[uVar25 * 0x18 + 0x37] = 1;
                        fVar2 = (float)puVar16[5];
                        *(ulong *)(puVar32 + uVar25 * 0x18 + 0x34) =
                             CONCAT44(fVar37 * (float)((ulong)uVar15 >> 0x20),fVar35 * (float)uVar15
                                     );
                        puVar32[uVar25 * 0x18 + 0x36] = (uint)(fVar38 * fVar2);
                      }
                      else if (uVar30 == 2) {
                        if (6 < local_1ec) goto LAB_0010a470;
                        uVar15 = *(undefined8 *)(puVar16 + 3);
                        puVar32[uVar25 * 0x18 + 0x37] = 2;
                        fVar2 = (float)puVar16[5];
                        *(ulong *)(puVar32 + uVar25 * 0x18 + 0x34) =
                             CONCAT44(fVar37 * (float)((ulong)uVar15 >> 0x20),fVar35 * (float)uVar15
                                     );
                        puVar32[uVar25 * 0x18 + 0x38] = local_1ec;
                        puVar32[uVar25 * 0x18 + 0x36] = (uint)(fVar38 * fVar2);
                        *(undefined8 *)(local_78 + (ulong)local_1ec * 8) =
                             *(undefined8 *)(puVar16 + 10);
                        local_1ec = local_1ec + 1;
                      }
                      else if (uVar30 == 0) {
                        puVar32[uVar25 * 0x18 + 0x37] = 0;
                        fVar35 = (float)(((double)(fVar35 + fVar37 + fVar38) / __LC191) *
                                        (double)(float)puVar16[2]);
                        *(ulong *)(puVar32 + uVar25 * 0x18 + 0x34) = CONCAT44(fVar35,fVar35);
                        puVar32[uVar25 * 0x18 + 0x36] = (uint)fVar35;
                      }
                      puVar32[0xd] = uVar22 + 1;
                    }
                  }
                  else {
                    uVar22 = puVar32[0xe];
                    if (uVar22 < 0x20) {
                      uVar25 = (ulong)uVar22;
                      puVar26 = puVar32 + uVar25 * 0x18 + 0x324;
                      *puVar26 = (uint)local_a8;
                      puVar26[1] = uStack_a0._4_4_;
                      puVar26[3] = 0;
                      puVar26[2] = (uint)uStack_90;
                      puVar26[4] = local_a8._4_4_;
                      puVar26[5] = (uint)local_98;
                      puVar26[7] = 0;
                      puVar26[6] = uStack_90._4_4_;
                      puVar26[8] = (uint)uStack_a0;
                      puVar26[9] = local_98._4_4_;
                      puVar26[0xb] = 0;
                      puVar26[10] = (uint)local_88;
                      puVar26[0xc] = local_88._4_4_;
                      puVar26[0xf] = 0x3f800000;
                      *(ulong *)(puVar26 + 0xd) = uStack_80;
                      if (uVar30 == 5) {
                        if (6 < local_1ec) goto LAB_0010a470;
                        uVar15 = *(undefined8 *)(puVar16 + 3);
                        fVar2 = (float)puVar16[5];
                        puVar32[uVar25 * 0x18 + 0x337] = 2;
                        *(ulong *)(puVar32 + uVar25 * 0x18 + 0x334) =
                             CONCAT44(fVar37 * (float)((ulong)uVar15 >> 0x20),fVar35 * (float)uVar15
                                     );
                        puVar32[uVar25 * 0x18 + 0x338] = local_1ec;
                        puVar32[uVar25 * 0x18 + 0x336] = (uint)(fVar2 * fVar38);
                        puVar32[uVar25 * 0x18 + 0x339] =
                             (uint)(float)((double)(fVar35 + fVar37 + fVar38) * __LC192);
                        *(undefined8 *)(local_78 + (ulong)local_1ec * 8) =
                             *(undefined8 *)(puVar16 + 10);
                        local_1ec = local_1ec + 1;
                      }
                      else if (uVar30 < 6) {
                        if (uVar30 == 3) {
                          fVar2 = (float)puVar16[2];
                          puVar32[uVar25 * 0x18 + 0x337] = 0;
                          fVar35 = (float)(((double)(fVar35 + fVar37 + fVar38) / __LC191) *
                                          (double)fVar2);
                          *(ulong *)(puVar32 + uVar25 * 0x18 + 0x334) = CONCAT44(fVar35,fVar35);
                          puVar32[uVar25 * 0x18 + 0x336] = (uint)fVar35;
                        }
                        else {
                          uVar15 = *(undefined8 *)(puVar16 + 3);
                          puVar32[uVar25 * 0x18 + 0x337] = 1;
                          fVar2 = (float)puVar16[5];
                          *(ulong *)(puVar32 + uVar25 * 0x18 + 0x334) =
                               CONCAT44(fVar37 * (float)((ulong)uVar15 >> 0x20),
                                        fVar35 * (float)uVar15);
                          puVar32[uVar25 * 0x18 + 0x336] = (uint)(fVar38 * fVar2);
                        }
                      }
                      else if (uVar30 == 6) {
                        if (local_1e8 != 0) goto LAB_0010a470;
                        uVar15 = *(undefined8 *)(puVar16 + 3);
                        puVar32[uVar25 * 0x18 + 0x337] = 3;
                        fVar2 = (float)puVar16[5];
                        *(ulong *)(puVar32 + uVar25 * 0x18 + 0x334) =
                             CONCAT44(fVar37 * (float)((ulong)uVar15 >> 0x20),fVar35 * (float)uVar15
                                     );
                        puVar32[uVar25 * 0x18 + 0x336] = (uint)(fVar38 * fVar2);
                        local_1e8 = *(long *)(puVar16 + 0xc);
                      }
                      puVar32[0xe] = uVar22 + 1;
                    }
                  }
                  goto LAB_0010a470;
                }
                if (puVar16[0x20] + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
            }
            _err_print_error("_particles_process",
                             "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x3a8,
                             "Condition \"!pc\" is true. Continuing.",0);
          }
        }
        else if ((int)puVar1[8] + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
LAB_0010a470:
      if ((int)uVar12 <= (int)lVar31 + 1) break;
      lVar31 = lVar31 + 1;
    } while( true );
  }
  if (*(uint *)(param_1 + 0x150) == local_1ec) {
    lVar19 = 0;
    do {
      if (*(long *)(param_1 + lVar19 + 0x118) != *(long *)(local_78 + lVar19)) goto LAB_0010a4ab;
      lVar19 = lVar19 + 8;
    } while (lVar19 != 0x38);
  }
  if (*(long *)(param_1 + 0x158) == local_1e8) {
    uVar15 = RenderingDevice::get_singleton();
    cVar10 = RenderingDevice::uniform_set_is_valid(uVar15,*(undefined8 *)(param_1 + 0x110));
    if (cVar10 == '\0') goto LAB_0010a4c7;
  }
  else {
LAB_0010a4ab:
    uVar15 = RenderingDevice::get_singleton();
    cVar10 = RenderingDevice::uniform_set_is_valid(uVar15,*(undefined8 *)(param_1 + 0x110));
    if (cVar10 != '\0') {
      uVar15 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar15,*(undefined8 *)(param_1 + 0x110));
    }
LAB_0010a4c7:
    uVar25 = 0;
    local_180 = 0;
    local_170 = 0;
    local_168 = 0;
    local_158[0] = 0;
    local_178 = 2;
    do {
      if ((uint)uVar25 < local_1ec) {
        lVar19 = RendererRD::TextureStorage::get_singleton();
        uVar20 = *(ulong *)(local_78 + uVar25 * 8);
        if ((uVar20 == 0) || (*(uint *)(lVar19 + 0x124) <= (uint)uVar20)) goto LAB_0010a54a;
        piVar24 = (int *)(((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar19 + 0x120)) * 0x118 +
                         *(long *)(*(long *)(lVar19 + 0x110) +
                                  ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar19 + 0x120)) * 8));
        iVar4 = piVar24[0x44];
        if (iVar4 != (int)(uVar20 >> 0x20)) {
          if (iVar4 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010a54a;
        }
        if (*piVar24 != 2) goto LAB_0010a54a;
        plVar17 = (long *)RendererRD::TextureStorage::get_singleton();
        lVar19 = (**(code **)(*plVar17 + 0x138))
                           (plVar17,*(undefined8 *)(local_78 + (uVar25 & 0xffffffff) * 8),0);
        if (lVar19 == 0) goto LAB_0010a54a;
      }
      else {
LAB_0010a54a:
        lVar19 = *(long *)(lVar13 + 0x70);
      }
      if (local_158[0] == 0) {
        if (local_168 != 0) {
          Vector<RID>::push_back(local_160,local_168);
          Vector<RID>::push_back(local_160,lVar19);
          local_168 = 0;
          lVar19 = local_168;
        }
      }
      else {
        Vector<RID>::push_back(local_160,lVar19);
        lVar19 = local_168;
      }
      local_168 = lVar19;
      lVar19 = local_158[0];
      uVar25 = uVar25 + 1;
    } while (uVar25 != 7);
    local_128[0] = 0;
    local_148 = (float)local_178;
    uStack_144 = (uint)((ulong)local_178 >> 0x20);
    uStack_140 = local_170;
    uStack_138 = (uint)local_168;
    uStack_134 = (uint)((ulong)local_168 >> 0x20);
    if (local_158[0] == 0) {
      Vector<RenderingDevice::Uniform>::push_back(local_188,&local_148);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_128,(CowData *)local_158);
      lVar31 = local_128[0];
      Vector<RenderingDevice::Uniform>::push_back(local_188);
      if (lVar31 != 0) {
        LOCK();
        plVar17 = (long *)(lVar31 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          Memory::free_static((void *)(local_128[0] + -0x10),false);
        }
        lVar19 = local_158[0];
        if (local_158[0] == 0) goto LAB_0010a8fc;
      }
      LOCK();
      plVar17 = (long *)(lVar19 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        Memory::free_static((void *)(local_158[0] + -0x10),false);
      }
    }
LAB_0010a8fc:
    lVar19 = local_1e8;
    if (local_1e8 == 0) {
      lVar19 = *(long *)(lVar13 + 0x20);
    }
    uStack_138 = (uint)lVar19;
    uStack_134 = (uint)((ulong)lVar19 >> 0x20);
    uStack_140 = 0;
    local_148 = (float)_LC193;
    uStack_144 = (uint)((ulong)_LC193 >> 0x20);
    local_128[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back(local_188,&local_148);
    uVar15 = RenderingDevice::get_singleton();
    uVar15 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar15,local_188,*(undefined8 *)(this + 0x6a8),2,0);
    *(undefined8 *)(param_1 + 0x110) = uVar15;
    *(long *)(param_1 + 0x158) = local_1e8;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_180);
  }
  uVar12 = *(uint *)(param_1 + 0x14);
  uVar30 = uVar12;
  if (((param_1[0x2c8] != (Particles)0x0) && (*(long *)(param_1 + 0xb8) != 0)) &&
     (lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + -8), 1 < lVar13)) {
    uVar30 = uVar12 * (int)lVar13;
  }
  local_148 = (float)*(double *)(param_1 + 0x18);
  uStack_144 = CONCAT31(0,param_1[0x1f1]);
  auVar7._4_4_ = uVar12;
  auVar7._0_4_ = uStack_144;
  auVar7[0xc] = param_1[0x1cd];
  auVar7._8_4_ = *(undefined4 *)(param_1 + 0x2e0);
  uStack_140 = (undefined1)uVar12;
  uStack_13f = auVar7._5_7_;
  uStack_138 = (uint)(byte)param_1[0x1cd];
  uStack_134 = 0;
  if (((param_1[0x10] == (Particles)0x0) &&
      (uStack_134 = 0, *(int **)(param_1 + 0x248) != (int *)0x0)) &&
     (uStack_134 = 1, **(int **)(param_1 + 0x248) < 1)) {
    uStack_134 = (uint)(byte)param_1[0x1f2];
  }
  local_12c = 0;
  param_1[0x1f2] = (Particles)0x0;
  if (*(long *)(param_1 + 0x198) == 0) {
LAB_0010aa8e:
    local_130 = 0;
  }
  else {
    uVar25 = *(ulong *)(param_1 + 0x198);
    if (*(uint *)(this + 0x91c) <= (uint)uVar25) goto LAB_0010aa8e;
    lVar13 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0x918)) * 0x2f8 +
             *(long *)(*(long *)(this + 0x908) +
                      ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0x918)) * 8);
    if (*(int *)(lVar13 + 0x2f0) != (int)(uVar25 >> 0x20)) {
      if (*(int *)(lVar13 + 0x2f0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010aa8e;
    }
    if (*(long *)(lVar13 + 0x250) == 0) goto LAB_0010aa8e;
    local_78 = ZEXT416(*(uint *)(lVar13 + 0x14)) << 0x20;
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update(uVar15,*(undefined8 *)(lVar13 + 0x250),0,0x10,local_78);
    local_130 = 1;
    if (*(char *)(lVar13 + 0x10) != '\0') {
      *(undefined1 *)(lVar13 + 0x10) = 0;
      *(undefined1 *)(lVar13 + 0x1f1) = 1;
    }
    *(undefined1 *)(lVar13 + 4) = 0;
    *(undefined8 *)(lVar13 + 8) = 0;
    *(undefined1 *)(lVar13 + 0x1f2) = 1;
  }
  if ((*(int **)(param_1 + 0x248) != (int *)0x0) && (**(int **)(param_1 + 0x248) != 0)) {
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update(uVar15,*(undefined8 *)(param_1 + 0x250),0);
    **(undefined4 **)(param_1 + 0x248) = 0;
  }
  uVar12 = *(uint *)(param_1 + 0x2e0);
  param_1[0x1f1] = (Particles)0x0;
  uVar22 = *(uint *)(param_1 + 0x2d0);
  uVar25 = (ulong)uVar22;
  if (1 < uVar12) {
    dVar36 = *(double *)(param_1 + 0x1c0);
    uVar29 = 0;
    uVar11 = 0;
    lVar13 = 0;
    if (0.0 < dVar36) goto LAB_0010ab5f;
    while (uVar11 < uVar22) {
      lVar19 = *(long *)(param_1 + 0x2d8);
      lVar31 = *(long *)(param_1 + 0x2e8);
      do {
        puVar28 = (undefined8 *)(lVar31 + lVar13);
        lVar13 = lVar13 + 0x1890;
        uVar29 = uVar29 + uVar22;
        puVar27 = (undefined8 *)((ulong)uVar11 * 0x1890 + lVar19);
        *puVar28 = *puVar27;
        puVar28[0x311] = puVar27[0x311];
        lVar21 = (long)puVar28 - (long)((ulong)(puVar28 + 1) & 0xfffffffffffffff8);
        puVar27 = (undefined8 *)((long)puVar27 - lVar21);
        puVar28 = (undefined8 *)((ulong)(puVar28 + 1) & 0xfffffffffffffff8);
        for (uVar20 = (ulong)((int)lVar21 + 0x1890U >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar28 = *puVar27;
          puVar27 = puVar27 + (ulong)bVar34 * -2 + 1;
          puVar28 = puVar28 + (ulong)bVar34 * -2 + 1;
        }
        if (lVar13 == (ulong)uVar12 * 0x1890) goto LAB_0010abc8;
        uVar11 = 0;
      } while (dVar36 <= 0.0);
LAB_0010ab5f:
      uVar11 = uVar29 / uVar12;
    }
    uVar20 = (ulong)uVar11;
LAB_00109eb5:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar20,uVar25,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((uVar22 == 0) || (puVar28 = *(undefined8 **)(param_1 + 0x2d8), uVar12 != 1)) {
    uVar25 = 0;
    uVar20 = 0;
    goto LAB_00109eb5;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x2e8);
  *puVar27 = *puVar28;
  puVar27[0x311] = puVar28[0x311];
  lVar13 = (long)puVar27 - (long)((ulong)(puVar27 + 1) & 0xfffffffffffffff8);
  puVar28 = (undefined8 *)((long)puVar28 - lVar13);
  puVar27 = (undefined8 *)((ulong)(puVar27 + 1) & 0xfffffffffffffff8);
  for (uVar25 = (ulong)((int)lVar13 + 0x1890U >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
    *puVar27 = *puVar28;
    puVar28 = puVar28 + (ulong)bVar34 * -2 + 1;
    puVar27 = puVar27 + (ulong)bVar34 * -2 + 1;
  }
LAB_0010abc8:
  uVar15 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update
            (uVar15,*(undefined8 *)(param_1 + 0xe8),0,*(int *)(param_1 + 0x2e0) * 0x1890,
             *(undefined8 *)(param_1 + 0x2e8));
  uVar25 = *(ulong *)(param_1 + 0x88);
  if ((uVar25 == 0) || (*(uint *)(lVar14 + 0x26c) <= (uint)uVar25)) {
LAB_0010af10:
    uVar25 = *(ulong *)(this + 0x6a0);
    if ((uVar25 != 0) && ((uint)uVar25 < *(uint *)(lVar14 + 0x26c))) {
      lVar13 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(lVar14 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar14 + 600) +
                        ((uVar25 & 0xffffffff) / (ulong)*(uint *)(lVar14 + 0x268)) * 8);
      if (*(int *)(lVar13 + 0xb8) == (int)(uVar25 >> 0x20)) {
        if ((*(int *)(lVar13 + 0x18) == 2) && (lVar13 = *(long *)(lVar13 + 8), lVar13 != 0))
        goto LAB_0010ac5a;
      }
      else if (*(int *)(lVar13 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("_particles_process",
                     "servers/rendering/renderer_rd/storage_rd/particles_storage.cpp",0x49a,
                     "Parameter \"m\" is null.",0,0);
  }
  else {
    lVar13 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(lVar14 + 0x268)) * 0xc0 +
             *(long *)(*(long *)(lVar14 + 600) +
                      ((uVar25 & 0xffffffff) / (ulong)*(uint *)(lVar14 + 0x268)) * 8);
    if (*(int *)(lVar13 + 0xb8) != (int)(uVar25 >> 0x20)) {
      if (*(int *)(lVar13 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010af10;
    }
    if ((*(int *)(lVar13 + 0x18) != 2) || (lVar13 = *(long *)(lVar13 + 8), lVar13 == 0))
    goto LAB_0010af10;
LAB_0010ac5a:
    param_1[0x51] = *(Particles *)(*(long *)(lVar13 + 0xa8) + 0x80);
    RenderingDevice::get_singleton();
    pvVar18 = (void *)RenderingDevice::compute_list_begin();
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_compute_pipeline
              (uVar15,pvVar18,*(undefined8 *)(*(long *)(lVar13 + 0xa8) + 0xb8));
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar15,pvVar18,*(undefined8 *)(this + 0x6b0),0);
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set(uVar15,pvVar18,*(undefined8 *)(param_1 + 0xf8),1)
    ;
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_bind_uniform_set
              (uVar15,pvVar18,*(undefined8 *)(param_1 + 0x110),2);
    if (*(long *)(lVar13 + 0xb0) != 0) {
      uVar15 = RenderingDevice::get_singleton();
      cVar10 = RenderingDevice::uniform_set_is_valid(uVar15,*(undefined8 *)(lVar13 + 0xb0));
      if (cVar10 != '\0') {
        uVar15 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar15,pvVar18,*(undefined8 *)(lVar13 + 0xb0),3);
        RendererRD::MaterialStorage::MaterialData::set_as_used();
      }
    }
    lVar13 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar13,pvVar18,(uint)&local_148);
    uVar12 = (uint)pvVar18;
    if (((param_1[0x2c8] == (Particles)0x0) || (*(long *)(param_1 + 0xb8) == 0)) ||
       (*(long *)(*(long *)(param_1 + 0xb8) + -8) < 2)) {
      lVar13 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar13,uVar12,uVar30,1);
    }
    else {
      lVar13 = RenderingDevice::get_singleton();
      if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      RenderingDevice::compute_list_dispatch_threads
                (lVar13,uVar12,(uint)((long)(int)uVar30 / *(long *)(*(long *)(param_1 + 0xb8) + -8))
                 ,1);
      lVar13 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar13);
      local_12c = 1;
      lVar13 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar13,pvVar18,(uint)&local_148);
      lVar13 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar13,uVar12,uVar30 - *(int *)(param_1 + 0x14),1);
    }
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::ParticlesStorage::update_particles() */

void __thiscall RendererRD::ParticlesStorage::update_particles(ParticlesStorage *this)

{
  long *plVar1;
  Version *pVVar2;
  undefined4 uVar3;
  Particles *pPVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint *puVar7;
  bool bVar8;
  code *pcVar9;
  Particles PVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  void *pvVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  long in_FS_OFFSET;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double local_190;
  ulong local_180;
  Vector<RenderingDevice::Uniform> *local_178;
  Vector<RenderingDevice::Uniform> local_168 [8];
  undefined8 local_160;
  char *local_158;
  undefined1 local_150;
  long local_148;
  Vector<RID> local_140 [8];
  long local_138 [2];
  char *local_128;
  ulong local_120;
  long local_118;
  long local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined4 local_90;
  byte local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  plVar1 = RenderingServerGlobals::utilities;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x8f0) == 0) {
LAB_0010bfb8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar9 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_158 = (char *)0x0;
    local_128 = "Update GPUParticles";
    local_120 = 0x13;
    String::parse_latin1((StrRange *)&local_158);
    (*pcVar9)(plVar1);
    pcVar6 = local_158;
    if (local_158 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_158 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_158 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
  }
  if (*(code **)(*RenderingServerGlobals::rasterizer + 0x88) ==
      RendererCompositorRD::get_frame_number) {
    local_180 = RendererCompositorRD::frame;
  }
  else {
    local_180 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
  }
  bVar8 = true;
  iVar11 = RendererViewport::get_num_viewports_with_motion_vectors();
  if (iVar11 < 1) {
    bVar8 = 0 < *(int *)(RendererCompositorStorage::singleton + 8);
  }
  lVar17 = *(long *)(this + 0x8f0);
joined_r0x0010b9ab:
  if (lVar17 != 0) {
    do {
      pPVar4 = *(Particles **)(lVar17 + 8);
      puVar5 = *(undefined8 **)(pPVar4 + 0x178);
      if (puVar5 != (undefined8 *)0x0) {
        lVar17 = *(long *)(pPVar4 + 0x188);
        if (lVar17 != 0) {
          *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(pPVar4 + 400);
        }
        lVar25 = *(long *)(pPVar4 + 400);
        if (lVar25 != 0) {
          *(long *)(lVar25 + 0x10) = lVar17;
        }
        if (pPVar4 + 0x178 == (Particles *)*puVar5) {
          *puVar5 = *(undefined8 *)(pPVar4 + 0x188);
        }
        if (pPVar4 + 0x178 == (Particles *)puVar5[1]) {
          puVar5[1] = lVar25;
        }
        *(undefined8 *)(pPVar4 + 0x178) = 0;
        *(undefined1 (*) [16])(pPVar4 + 0x188) = (undefined1  [16])0x0;
      }
      pPVar4[0x170] = (Particles)0x0;
      _particles_update_buffers(this,pPVar4);
      if (pPVar4[0x34] != (Particles)0x0) {
        *(undefined8 *)(pPVar4 + 0x1b0) = 0;
        pPVar4[0x1f1] = (Particles)0x1;
        pPVar4[0x34] = (Particles)0x0;
        *(undefined1 (*) [16])(pPVar4 + 0x1a0) = (undefined1  [16])0x0;
      }
      if (pPVar4[4] == (Particles)0x0) {
        if (pPVar4[0x10] != (Particles)0x0) goto LAB_0010ba76;
        dVar28 = *(double *)(pPVar4 + 0x1c0);
        if (*(code **)(*RendererCompositorRD::singleton + 0x90) ==
            RendererCompositorRD::get_frame_delta_time) {
          dVar30 = (double)RendererCompositorRD::singleton[0x55];
        }
        else {
          dVar30 = (double)(**(code **)(*RendererCompositorRD::singleton + 0x90))();
        }
        dVar27 = _LC202 * *(double *)(pPVar4 + 0x18);
        dVar28 = dVar30 * dVar28 + *(double *)(pPVar4 + 8);
        *(double *)(pPVar4 + 8) = dVar28;
        if (dVar27 < dVar28) goto code_r0x0010c03b;
LAB_0010ba83:
        iVar11 = *(int *)(pPVar4 + 0x1c8);
        if (iVar11 < 1) {
          if ((pPVar4[0x2c8] == (Particles)0x0) || (lVar17 = *(long *)(pPVar4 + 0xb8), lVar17 == 0))
          {
            iVar11 = 0;
            goto LAB_0010bac9;
          }
          iVar11 = 0;
          if (*(long *)(lVar17 + -8) < 2) goto LAB_0010baaa;
          lVar17 = *(long *)(lVar17 + -8);
          iVar11 = 0x3c;
LAB_0010bbde:
          uVar26 = (uint)lVar17;
          uVar22 = (int)((double)iVar11 * *(double *)(pPVar4 + 0x2c0));
          if ((int)((double)iVar11 * *(double *)(pPVar4 + 0x2c0)) < 1) {
            uVar22 = 1;
          }
          uVar13 = *(uint *)(pPVar4 + 0x2d0);
          uVar12 = uVar26;
          if (uVar13 != uVar22) goto LAB_0010bc12;
        }
        else {
          if ((pPVar4[0x2c8] != (Particles)0x0) && (lVar17 = *(long *)(pPVar4 + 0xb8), lVar17 != 0))
          {
LAB_0010baaa:
            lVar17 = *(long *)(lVar17 + -8);
            if (1 < lVar17) goto LAB_0010bbde;
          }
LAB_0010bac9:
          uVar26 = 1;
          uVar22 = 1;
          uVar13 = *(uint *)(pPVar4 + 0x2d0);
          uVar12 = 1;
          if (uVar13 != 1) {
LAB_0010bc12:
            uVar26 = uVar12;
            pvVar16 = *(void **)(pPVar4 + 0x2d8);
            if ((uVar13 <= uVar22) && (*(uint *)(pPVar4 + 0x2d4) < uVar22)) {
              uVar13 = uVar22 - 1 | uVar22 - 1 >> 1;
              uVar13 = uVar13 | uVar13 >> 2;
              uVar13 = uVar13 | uVar13 >> 4;
              uVar13 = uVar13 | uVar13 >> 8;
              uVar13 = (uVar13 | uVar13 >> 0x10) + 1;
              *(uint *)(pPVar4 + 0x2d4) = uVar13;
              pvVar16 = (void *)Memory::realloc_static(pvVar16,(ulong)uVar13 * 0x1890,false);
              *(void **)(pPVar4 + 0x2d8) = pvVar16;
              if (pvVar16 == (void *)0x0) goto LAB_0010c342;
            }
            *(uint *)(pPVar4 + 0x2d0) = uVar22;
            memset(pvVar16,0,(long)(int)uVar22 * 0x1890);
            lVar17 = 0;
            uVar12 = 0;
            uVar13 = *(uint *)(pPVar4 + 0x2d0);
            do {
              if (uVar13 == uVar12) {
                uVar19 = (ulong)uVar13;
                uVar20 = uVar19;
                goto LAB_0010bc98;
              }
              uVar12 = uVar12 + 1;
              *(undefined4 *)(*(long *)(pPVar4 + 0x2d8) + 0x20 + lVar17) = 0xffffffff;
              lVar17 = lVar17 + 0x1890;
            } while (uVar22 != uVar12);
          }
        }
        if (uVar26 == *(uint *)(pPVar4 + 0x2e0)) {
          if (*(long *)(pPVar4 + 0xe8) == 0) goto LAB_0010bb10;
        }
        else {
          if ((*(uint *)(pPVar4 + 0x2e0) <= uVar26) && (*(uint *)(pPVar4 + 0x2e4) < uVar26)) {
            uVar22 = uVar26 - 1 >> 1 | uVar26 - 1;
            uVar22 = uVar22 | uVar22 >> 2;
            uVar22 = uVar22 | uVar22 >> 4;
            uVar22 = uVar22 | uVar22 >> 8;
            uVar22 = (uVar22 | uVar22 >> 0x10) + 1;
            *(uint *)(pPVar4 + 0x2e4) = uVar22;
            lVar17 = Memory::realloc_static(*(void **)(pPVar4 + 0x2e8),(ulong)uVar22 * 0x1890,false)
            ;
            *(long *)(pPVar4 + 0x2e8) = lVar17;
            if (lVar17 == 0) goto LAB_0010c342;
          }
          *(uint *)(pPVar4 + 0x2e0) = uVar26;
          if (*(long *)(pPVar4 + 0xe8) != 0) {
            uVar14 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar14,*(undefined8 *)(pPVar4 + 0xe8));
          }
LAB_0010bb10:
          uVar14 = RenderingDevice::get_singleton();
          local_120 = 0;
          uVar14 = RenderingDevice::storage_buffer_create(uVar14,uVar26 * 0x1890,&local_128);
          uVar20 = local_120;
          *(undefined8 *)(pPVar4 + 0xe8) = uVar14;
          if (local_120 != 0) {
            LOCK();
            plVar1 = (long *)(local_120 - 0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_120 = 0;
              Memory::free_static((void *)(uVar20 - 0x10),false);
            }
          }
        }
        puVar15 = *(undefined4 **)(pPVar4 + 0xb8);
        lVar17 = *(long *)(pPVar4 + 200);
        if ((puVar15 == (undefined4 *)0x0) || (*(long *)(puVar15 + -2) < 2)) {
LAB_0010c0b8:
          lVar17 = *(long *)(pPVar4 + 200);
          if (*(long *)(pPVar4 + 0xd0) == 0) {
            local_158 = _LC178;
            local_150 = 0;
            local_160 = 0;
            local_148 = 0;
            local_138[0] = 0;
            if (lVar17 != 0) goto LAB_0010bd00;
            if (*(long *)(pPVar4 + 0x260) == 0) {
              uVar14 = RenderingDevice::get_singleton();
              local_120 = 0;
              uVar14 = RenderingDevice::storage_buffer_create(uVar14,0x40,&local_128,0);
              uVar20 = local_120;
              *(undefined8 *)(pPVar4 + 0x260) = uVar14;
              if (local_120 == 0) goto LAB_0010c115;
              LOCK();
              plVar1 = (long *)(local_120 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_120 = 0;
                Memory::free_static((void *)(uVar20 - 0x10),false);
              }
              lVar17 = *(long *)(pPVar4 + 0x260);
              if (local_138[0] == 0) {
                if (local_148 != 0) {
                  Vector<RID>::push_back(local_140,local_148);
                  Vector<RID>::push_back(local_140,lVar17);
                  local_148 = 0;
                  lVar25 = local_138[0];
                  goto LAB_0010c124;
                }
                goto LAB_0010c11c;
              }
              Vector<RID>::push_back(local_140,lVar17);
              lVar25 = local_138[0];
            }
            else {
LAB_0010c115:
              lVar17 = *(long *)(pPVar4 + 0x260);
LAB_0010c11c:
              lVar25 = 0;
              local_148 = lVar17;
            }
LAB_0010c124:
            local_128 = local_158;
            local_108[0] = 0;
            local_120 = CONCAT71(local_120._1_7_,local_150);
            local_118 = local_148;
            if (lVar25 == 0) goto LAB_0010bd28;
            CowData<RID>::_ref((CowData<RID> *)local_108,(CowData *)local_138);
            lVar17 = local_108[0];
            Vector<RenderingDevice::Uniform>::push_back();
            if (lVar17 != 0) {
              LOCK();
              plVar1 = (long *)(lVar17 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_108[0] + -0x10),false);
              }
              lVar25 = local_138[0];
              if (local_138[0] == 0) goto LAB_0010bd3a;
            }
            LOCK();
            plVar1 = (long *)(lVar25 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_138[0] + -0x10),false);
            }
LAB_0010bd3a:
            local_178 = local_168;
            uVar14 = RenderingDevice::get_singleton();
            uVar20 = *(ulong *)(this + 0x830);
            if (*(long *)(this + 0x6d0) == 0) {
              lVar17 = 0;
LAB_0010c9e3:
              _err_print_index_error
                        ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,
                         lVar17,"p_variant","variant_defines.size()","",false,false);
LAB_0010ca1c:
              uVar24 = 0;
            }
            else {
              lVar17 = *(long *)(*(long *)(this + 0x6d0) + -8);
              if (lVar17 < 1) goto LAB_0010c9e3;
              pcVar6 = *(char **)(this + 0x6e0);
              if (pcVar6 == (char *)0x0) {
LAB_0010ca60:
                lVar17 = 0;
LAB_0010ca63:
                uVar20 = 0;
LAB_0010ca80:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar17,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              lVar17 = *(long *)(pcVar6 + -8);
              if (lVar17 < 1) goto LAB_0010ca63;
              if (*pcVar6 != '\0') {
                if ((uVar20 == 0) || (*(uint *)(this + 0x78c) <= (uint)uVar20)) {
LAB_0010cdf8:
                  _err_print_error("version_get_shader",
                                   "./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                                   "Parameter \"version\" is null.",0,0);
                  uVar24 = 0;
                  goto LAB_0010be63;
                }
                lVar25 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(this + 0x788)) * 0xa0 +
                         *(long *)(*(long *)(this + 0x778) +
                                  ((uVar20 & 0xffffffff) / (ulong)*(uint *)(this + 0x788)) * 8);
                if (*(int *)(lVar25 + 0x98) != (int)(uVar20 >> 0x20)) {
                  if (*(int *)(lVar25 + 0x98) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_0010cdf8;
                }
                pVVar2 = (Version *)(this + 0x6b8);
                iVar18 = (int)lVar25;
                if (*(char *)(lVar25 + 0x91) != '\0') {
                  ShaderRD::_initialize_version(pVVar2);
                  lVar17 = *(long *)(this + 0x730);
                  if (lVar17 != 0) {
                    lVar21 = 0;
                    do {
                      if (*(long *)(lVar17 + -8) <= lVar21) break;
                      if (*(char *)(lVar17 + lVar21) == '\0') {
                        ShaderRD::_allocate_placeholders(pVVar2,iVar18);
                      }
                      else {
                        ShaderRD::_compile_version_start(pVVar2,iVar18);
                      }
                      lVar17 = *(long *)(this + 0x730);
                      lVar21 = lVar21 + 1;
                    } while (lVar17 != 0);
                  }
                }
                puVar7 = *(uint **)(this + 0x6f0);
                if (puVar7 == (uint *)0x0) goto LAB_0010ca60;
                lVar17 = *(long *)(puVar7 + -2);
                if (lVar17 < 1) goto LAB_0010ca63;
                uVar20 = (ulong)*puVar7;
                lVar21 = *(long *)(lVar25 + 0x68);
                if (lVar21 == 0) {
                  lVar17 = 0;
                  goto LAB_0010ca80;
                }
                lVar17 = *(long *)(lVar21 + -8);
                if (lVar17 <= (long)uVar20) goto LAB_0010ca80;
                if (*(long *)(lVar21 + uVar20 * 8) != 0) {
                  ShaderRD::_compile_version_end(pVVar2,iVar18);
                }
                if (*(char *)(lVar25 + 0x90) != '\0') {
                  puVar5 = *(undefined8 **)(lVar25 + 0x88);
                  if (puVar5 == (undefined8 *)0x0) goto LAB_0010ca60;
                  lVar17 = puVar5[-1];
                  if (0 < lVar17) {
                    uVar24 = *puVar5;
                    goto LAB_0010be63;
                  }
                  goto LAB_0010ca63;
                }
                goto LAB_0010ca1c;
              }
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                               ,0,0);
              uVar24 = 0;
            }
LAB_0010be63:
            uVar14 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                               (uVar14,local_178,uVar24);
            *(undefined8 *)(pPVar4 + 0xd0) = uVar14;
            CowData<RenderingDevice::Uniform>::_unref
                      ((CowData<RenderingDevice::Uniform> *)&local_160);
          }
          if ((*(long *)(pPVar4 + 200) != 0) && (pPVar4[0xc0] != (Particles)0x0)) {
            puVar15 = *(undefined4 **)(pPVar4 + 0xb8);
            uVar22 = *(uint *)(this + 0x8e0);
            if (puVar15 != (undefined4 *)0x0) {
LAB_0010c414:
              uVar26 = puVar15[-2] * 0x10;
              if (uVar22 < uVar26) {
                if (*(uint *)(this + 0x8e4) < uVar26) {
                  uVar22 = uVar26 - 1 >> 1 | uVar26 - 1;
                  uVar22 = uVar22 >> 2 | uVar22;
                  uVar22 = uVar22 | uVar22 >> 4;
                  uVar22 = uVar22 >> 8 | uVar22;
                  uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
                  *(uint *)(this + 0x8e4) = uVar22;
                  lVar17 = Memory::realloc_static(*(void **)(this + 0x8e8),(ulong)uVar22 * 4,false);
                  *(long *)(this + 0x8e8) = lVar17;
                  if (lVar17 == 0) {
LAB_0010c342:
                    _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                  puVar15 = *(undefined4 **)(pPVar4 + 0xb8);
                  *(uint *)(this + 0x8e0) = uVar26;
                  if (puVar15 == (undefined4 *)0x0) goto LAB_0010cce9;
                }
                else {
                  *(uint *)(this + 0x8e0) = uVar26;
                }
              }
              uVar22 = _LC135;
              lVar17 = *(long *)(puVar15 + -2);
              uVar19 = 0;
              for (lVar25 = 0; lVar25 < lVar17; lVar25 = lVar25 + 1) {
                uVar20 = (ulong)*(uint *)(this + 0x8e0);
                if (*(uint *)(this + 0x8e0) <= (uint)uVar19) {
LAB_0010bc98:
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xb2,uVar19,uVar20,
                             "p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                puVar23 = (undefined4 *)(lVar25 * 0x40 + *(long *)(this + 0x8e8));
                uVar19 = (ulong)((uint)uVar19 + 0x10);
                *puVar23 = *puVar15;
                puVar23[1] = puVar15[3];
                uVar3 = puVar15[6];
                puVar23[3] = 0;
                puVar23[2] = uVar3;
                puVar23[4] = puVar15[1];
                puVar23[5] = puVar15[4];
                uVar3 = puVar15[7];
                puVar23[7] = 0;
                puVar23[6] = uVar3;
                puVar23[8] = puVar15[2];
                puVar23[9] = puVar15[5];
                uVar3 = puVar15[8];
                puVar23[0xb] = 0;
                puVar23[10] = uVar3;
                puVar23[0xc] = puVar15[9];
                puVar23[0xd] = puVar15[10];
                uVar3 = puVar15[0xb];
                puVar23[0xf] = uVar22;
                puVar23[0xe] = uVar3;
                puVar15 = puVar15 + 0xc;
              }
            }
LAB_0010cce9:
            uVar14 = RenderingDevice::get_singleton();
            if (*(long *)(pPVar4 + 0xb8) == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = (int)*(undefined8 *)(*(long *)(pPVar4 + 0xb8) + -8) << 6;
            }
            RenderingDevice::buffer_update(uVar14,*(undefined8 *)(pPVar4 + 200),0,iVar18);
          }
        }
        else {
          if (lVar17 == 0) {
            uVar14 = RenderingDevice::get_singleton();
            local_120 = 0;
            if (*(long *)(pPVar4 + 0xb8) == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = (int)*(undefined8 *)(*(long *)(pPVar4 + 0xb8) + -8) << 6;
            }
            uVar14 = RenderingDevice::storage_buffer_create(uVar14,iVar18,&local_128);
            uVar20 = local_120;
            *(undefined8 *)(pPVar4 + 200) = uVar14;
            if (local_120 != 0) {
              LOCK();
              plVar1 = (long *)(local_120 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_120 = 0;
                Memory::free_static((void *)(uVar20 - 0x10),false);
                pPVar4[0xc0] = (Particles)0x1;
                goto LAB_0010c0b8;
              }
            }
            pPVar4[0xc0] = (Particles)0x1;
            goto LAB_0010c0b8;
          }
          if (*(long *)(pPVar4 + 0xd0) == 0) {
LAB_0010bd00:
            local_160 = 0;
            local_128 = _LC178;
            local_120 = local_120 & 0xffffffffffffff00;
            local_118 = lVar17;
LAB_0010bd28:
            local_108[0] = 0;
            local_148 = local_118;
            Vector<RenderingDevice::Uniform>::push_back(local_168,&local_128);
            goto LAB_0010bd3a;
          }
          if (pPVar4[0xc0] != (Particles)0x0) {
            uVar22 = *(uint *)(this + 0x8e0);
            goto LAB_0010c414;
          }
        }
        dVar28 = (double)*(float *)(pPVar4 + 0x28);
        if (pPVar4[0x1f1] != (Particles)0x0) {
          dVar28 = dVar28 + *(double *)(pPVar4 + 0x20);
        }
        dVar30 = *(double *)(pPVar4 + 0x1c0);
        if (0.0 < dVar28) {
          if (iVar11 == 0) {
            local_190 = _LC198;
          }
          else {
            local_190 = _LC130 / (double)iVar11;
          }
          *(double *)(pPVar4 + 0x1c0) = _LC130;
          do {
            _particles_process(this,pPVar4,local_190);
            dVar28 = dVar28 - local_190;
          } while (0.0 <= dVar28);
          *(undefined4 *)(pPVar4 + 0x28) = 0;
          dVar30 = (double)(float)dVar30;
          *(double *)(pPVar4 + 0x1c0) = dVar30;
        }
        if (dVar30 <= 0.0) {
          dVar30 = 0.0;
        }
        pcVar9 = *(code **)(*RendererCompositorRD::singleton + 0x90);
        if (iVar11 == 0) {
          if (pcVar9 == RendererCompositorRD::get_frame_delta_time) {
            dVar28 = (double)RendererCompositorRD::singleton[0x55];
          }
          else {
            dVar28 = (double)(*pcVar9)();
          }
          _particles_process(this,pPVar4,dVar28 * dVar30);
        }
        else {
          dVar28 = _LC130 / (double)iVar11;
          if (pcVar9 == RendererCompositorRD::get_frame_delta_time) {
            dVar27 = (double)RendererCompositorRD::singleton[0x55];
          }
          else {
            dVar27 = (double)(*pcVar9)();
          }
          dVar29 = _LC199;
          if ((dVar27 <= _LC199) && (dVar29 = dVar27, dVar27 <= 0.0)) {
            dVar29 = _LC200;
          }
          dVar30 = dVar29 * dVar30 + *(double *)(pPVar4 + 0x1d0);
          while ((dVar28 <= dVar30 || (pPVar4[0x1f1] != (Particles)0x0))) {
            _particles_process(this,pPVar4,dVar28);
            dVar30 = dVar30 - dVar28;
          }
          *(double *)(pPVar4 + 0x1d0) = dVar30;
        }
        uVar22 = *(uint *)(pPVar4 + 0x14);
        PVar10 = pPVar4[0x2c8];
        uVar26 = uVar22;
        if (((PVar10 != (Particles)0x0) && (*(long *)(pPVar4 + 0xb8) != 0)) &&
           (lVar17 = *(long *)(*(long *)(pPVar4 + 0xb8) + -8), 1 < lVar17)) {
          uVar26 = (int)lVar17 * uVar22;
        }
        iVar18 = *(int *)(pPVar4 + 0x98);
        uVar20 = local_180 & 0xffffffff;
        *(int *)(pPVar4 + 0x1e0) = *(int *)(pPVar4 + 0x1dc);
        if ((iVar18 == 0) && (bVar8)) {
          if ((pPVar4[0x1f0] == (Particles)0x0) || (uVar20 - *(long *)(pPVar4 + 0x1e8) != 1)) {
            *(ulong *)(pPVar4 + 0x1e8) = uVar20;
          }
          else {
            *(ulong *)(pPVar4 + 0x1e8) = uVar20;
            *(uint *)(pPVar4 + 0x1dc) = uVar26 - *(int *)(pPVar4 + 0x1dc);
          }
LAB_0010bf80:
          uVar13 = *(uint *)(pPVar4 + 0x94);
          if ((uVar13 & 0xfffffffd) != 1) {
            if (pPVar4[0x50] == (Particles)0x0) {
              Transform3D::affine_inverse();
              uVar13 = *(uint *)(pPVar4 + 0x94);
              iVar18 = *(int *)(pPVar4 + 0x98);
              uVar22 = *(uint *)(pPVar4 + 0x14);
              local_58 = local_d4;
              local_88._4_4_ = uStack_ec;
              local_88._0_4_ = local_f8;
              PVar10 = pPVar4[0x2c8];
              local_88._8_4_ = local_e0;
              local_88._12_4_ = 0;
              local_78 = CONCAT44(local_e8,uStack_f4);
              uStack_70 = (ulong)local_dc;
              local_68 = CONCAT44(local_e4,local_f0);
              uStack_60 = (ulong)local_d8;
              uStack_50 = CONCAT44(0x3f800000,local_cc);
            }
            else {
              local_88 = ZEXT416(_LC135);
              local_78 = _LC136;
              uStack_70 = _UNK_0011ffc8;
              local_68 = __LC187;
              uStack_60 = _UNK_0011ffd8;
              local_58 = __LC205;
              uStack_50 = _UNK_0011ffe8;
            }
            local_ac = 0.0;
            if (pPVar4[0x1cc] != (Particles)0x0) {
              local_ac = (float)*(double *)(pPVar4 + 0x1d0);
            }
            local_a8 = 0;
            local_a0 = 0;
            if (((PVar10 == (Particles)0x0) || (*(long *)(pPVar4 + 0xb8) == 0)) ||
               (lVar17 = *(long *)(*(long *)(pPVar4 + 0xb8) + -8), lVar17 < 2)) {
              local_b8 = 1;
              local_b4 = 1;
              local_b0 = 0.0;
            }
            else {
              local_b8 = (undefined4)lVar17;
              local_b4 = *(undefined4 *)(pPVar4 + 0x2d0);
              local_b0 = (float)(_LC130 / (double)iVar11);
            }
            local_8c = local_8c & 0xfe | iVar18 - 1U < 2;
            iVar11 = (int)((double)(int)uVar22 * *(double *)(pPVar4 + 0x1a0));
            if ((int)(uVar22 - 1) < (int)((double)(int)uVar22 * *(double *)(pPVar4 + 0x1a0))) {
              iVar11 = uVar22 - 1;
            }
            local_98 = (iVar11 + 1) % (int)uVar22;
            local_94 = (uint)(iVar18 == 2);
            local_90 = *(undefined4 *)(pPVar4 + 0x1dc);
            local_bc = uVar26;
            local_9c = uVar13;
            RenderingDevice::get_singleton();
            pvVar16 = (void *)RenderingDevice::compute_list_begin();
            local_8c = local_8c & 0xfd | (*(int *)pPVar4 == 0) * '\x02';
            uVar14 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_compute_pipeline
                      (uVar14,pvVar16,
                       *(undefined8 *)
                        (this + (ulong)(uint)(*(int *)(pPVar4 + 0xf0) * 3) * 8 + 0x838));
            uVar14 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_uniform_set
                      (uVar14,pvVar16,*(undefined8 *)(pPVar4 + 0x100),0);
            uVar14 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_uniform_set
                      (uVar14,pvVar16,*(undefined8 *)(pPVar4 + 0xd0),2);
            lVar17 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_set_push_constant(lVar17,pvVar16,(uint)local_c8);
            lVar17 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_dispatch_threads(lVar17,(uint)pvVar16,uVar26,1);
            RenderingDevice::get_singleton();
            RenderingDevice::compute_list_end();
          }
        }
        else {
          *(ulong *)(pPVar4 + 0x1e8) = uVar20;
          if (iVar18 != 3) goto LAB_0010bf80;
        }
        Dependency::changed_notify(pPVar4 + 0x290,0);
      }
      else if (pPVar4[0x10] != (Particles)0x0) {
        pPVar4[0x1f1] = (Particles)0x1;
        *(undefined8 *)(pPVar4 + 0x1b0) = 0;
        *(undefined1 (*) [16])(pPVar4 + 0x1a0) = (undefined1  [16])0x0;
LAB_0010ba76:
        pPVar4[4] = (Particles)0x0;
        *(undefined8 *)(pPVar4 + 8) = 0;
        goto LAB_0010ba83;
      }
      lVar17 = *(long *)(this + 0x8f0);
      if (lVar17 == 0) break;
    } while( true );
  }
  goto LAB_0010bfb8;
code_r0x0010c03b:
  lVar17 = *(long *)(this + 0x8f0);
  pPVar4[4] = (Particles)0x1;
  goto joined_r0x0010b9ab;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::ParticlesStorage::ParticlesStorage() */

void __thiscall RendererRD::ParticlesStorage::ParticlesStorage(ParticlesStorage *this)

{
  ShaderRD *this_00;
  long *plVar1;
  ulong uVar2;
  ShaderRD *this_01;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  uint *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [8];
  undefined8 uVar17;
  long *plVar18;
  SortEffects *this_02;
  StrRange *pSVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  long local_258;
  long local_250;
  long local_248;
  long local_240;
  long local_238;
  undefined8 local_230;
  long local_228;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined8 local_200;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_1f8 [8];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_1c8 [8];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  long local_148;
  undefined4 local_140;
  undefined2 local_13c;
  char *local_138;
  undefined1 local_130 [8];
  ulong uStack_128;
  undefined1 local_120 [16];
  ulong local_110;
  String local_108 [8];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  ulong local_e0;
  String local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  ulong local_b0;
  String local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  long local_40;
  
  local_220._8_8_ = local_220._0_8_;
  uStack_128 = (ulong)local_130;
  bVar30 = 0;
  this_00 = (ShaderRD *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 3;
  *(undefined ***)this = &PTR__ParticlesStorage_00119230;
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x18) = &PTR__ParticlesShaderRD_00119190;
  this_01 = (ShaderRD *)(this + 0x6b8);
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 64, local_size_y = 1, local_size_z = 1) in;\n\n#define SDF_MAX_LENGTH 16384.0\n\n/* SET 0: GLOBAL DATA */\n\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 0) uniform sampler SAMPLER_NEAREST_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 1) uniform sampler SAMPLER_LINEAR_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 2) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 3) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 4) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_ANISOTROPIC_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 5) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_ANISOTROPIC_CLAMP;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 6) uniform sampler SAMPLER_NEAREST_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 7) uniform sampler SAMPLER_LINEAR_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 8) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 9) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 10) uniform sampler SAMPLER_NEAREST_WITH_MIPMAPS_ANISOTROPIC_REPEAT;\nlayout(set = 0, binding = SAMPLERS_BINDING_FIRST_INDEX + 11) uniform sampler SAMPLER_LINEAR_WITH_MIPMAPS_ANISOTROPIC_REPEAT;\n\nlayout(set = 0, binding = 2, std430) restrict readonly buffer GlobalShaderUniformData {\n\tvec4 data[];\n}\nglobal_shader_uniforms;\n\n/* Set 1: FRAME AND PARTICLE DATA */\n\n\n\n#define MAX_ATTRACTORS 32\n\n#define ATTRACTOR_TYPE_SPHERE 0\n#define ATTRACTOR_TYPE_BOX 1\n#define ATTRACTOR_TYPE_VECTOR_FIELD 2\n\nstruct Attractor {\n\tmat4 transform;\n\tvec3 extents; \n\tuint type;\n\tuint texture_index; \n\tfloat strength;\n\tfloat attenuation;\n\tfloat directionality;\n};\n\n#define MAX_COLLIDERS 32\n\n#define COLLIDER_TYPE_SPHERE 0\n#define COLLIDER_TYPE_BOX 1\n#define COLLIDER..." /* TRUNCATED STRING LITERAL */
                 );
  ShaderCompiler::ShaderCompiler((ShaderCompiler *)(this + 400));
  *(undefined1 (*) [16])(this + 0x698) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x6b8) = &PTR__ParticlesCopyShaderRD_001191b0;
  ShaderRD::setup((char *)this_01,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 64, local_size_y = 1, local_size_z = 1) in;\n\n#define PARTICLE_FLAG_ACTIVE uint(1)\n#define PARTICLE_FLAG_STARTED uint(2)\n#define PARTICLE_FLAG_TRAILED uint(4)\n\nstruct ParticleData {\n\tmat4 xform;\n\tvec3 velocity;\n\tuint flags;\n\tvec4 color;\n\tvec4 custom;\n#ifdef USERDATA_COUNT\n\tvec4 userdata[USERDATA_COUNT];\n#endif\n};\n\nlayout(set = 0, binding = 1, std430) restrict readonly buffer Particles {\n\tParticleData data[];\n}\nparticles;\n\nlayout(set = 0, binding = 2, std430) restrict writeonly buffer Transforms {\n\tvec4 data[];\n}\ninstances;\n\n#ifdef USE_SORT_BUFFER\n\nlayout(set = 1, binding = 0, std430) restrict buffer SortBuffer {\n\tvec2 data[];\n}\nsort_buffer;\n\n#endif \n\nlayout(set = 2, binding = 0, std430) restrict readonly buffer TrailBindPoses {\n\tmat4 data[];\n}\ntrail_bind_poses;\n\n#define PARAMS_FLAG_ORDER_BY_LIFETIME 1\n#define PARAMS_FLAG_COPY_MODE_2D 2\n\nlayout(push_constant, std430) uniform Params {\n\tvec3 sort_direction;\n\tuint total_particles;\n\n\tuint trail_size;\n\tuint trail_total;\n\tfloat frame_delta;\n\tfloat frame_remainder;\n\n\tvec3 align_up;\n\tuint align_mode;\n\n\tuint lifetime_split;\n\tbool lifetime_reverse;\n\tuint motion_vectors_current_offset;\n\tuint flags;\n\n\tmat4 inv_emission_transform;\n}\nparams;\n\n#define TRANSFORM_ALIGN_DISABLED 0\n#define TRANSFORM_ALIGN_Z_BILLBOARD 1\n#define TRANSFORM_ALIGN_Y_TO_VELOCITY 2\n#define TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY 3\n\nvoid main() {\n#ifdef MODE_FILL_SORT_BUFFER\n\n\tuint particle = gl_GlobalInvocationID.x;\n\tif (particle >= params.total_particles) {\n\t\treturn; \n\t}\n\n\tuint src_particle = particle;\n\tif (params.trail_size > 1) {\n\t\tsrc_particle = src_particle * params.trail_size + params.trail_size / 2; \n\t}\n\tsort_buffer.data[particle].x = dot(params.sort_direction, particles.data[src_particle].xform[3].xyz);\n\tsort_buffer.data[particle].y = float(particle);\n#endif\n\n#ifdef MODE_FILL_INSTANCES\n\n\tuint particle = gl_GlobalInvocationID.x;\n\n\tif (particle >= params.total_particles) {\n\t\treturn; \n\t}\n\n#ifdef USE_SORT_BUFFER\n\n\tif (params.trail_size > 1) {\n\t\tpa..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x830) = 0;
  uVar24 = _UNK_0011fff8;
  uVar17 = __LC208;
  *(undefined8 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x8d8) = 0;
  puVar25 = (undefined8 *)((ulong)(this + 0x840) & 0xfffffffffffffff8);
  for (uVar21 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x840) & 0xfffffffffffffff8)
                        ) + 0x8e0U >> 3); uVar21 != 0; uVar21 = uVar21 - 1) {
    *puVar25 = 0;
    puVar25 = puVar25 + (ulong)bVar30 * -2 + 1;
  }
  *(undefined1 (*) [16])(this + 0x8e8) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x900) = &PTR__RID_Alloc_001191d0;
  *(undefined1 (*) [16])(this + 0x940) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x8e0) = 0;
  *(undefined8 *)(this + 0x8f8) = 0;
  *(undefined8 *)(this + 0x908) = 0;
  *(undefined8 *)(this + 0x910) = 0;
  *(undefined8 *)(this + 0x928) = 0;
  *(undefined8 *)(this + 0x950) = 0;
  *(undefined4 *)(this + 0x940) = 1;
  *(undefined1 (*) [16])(this + 0x930) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x918) = uVar17;
  *(undefined8 *)(this + 0x920) = uVar24;
  uVar17 = Memory::alloc_static(0x5e30,false);
  *(undefined8 *)(this + 0x908) = uVar17;
  uVar17 = Memory::alloc_static((ulong)*(uint *)(this + 0x924) << 3,false);
  *(undefined8 *)(this + 0x910) = uVar17;
  *(undefined ***)(this + 0x958) = &PTR__RID_Alloc_001191f0;
  *(undefined1 (*) [16])(this + 0x998) = (undefined1  [16])0x0;
  uVar24 = _UNK_00120008;
  uVar17 = __LC209;
  *(undefined8 *)(this + 0x960) = 0;
  *(undefined8 *)(this + 0x968) = 0;
  *(undefined8 *)(this + 0x980) = 0;
  *(undefined8 *)(this + 0x9a8) = 0;
  *(undefined4 *)(this + 0x998) = 1;
  *(undefined8 *)(this + 0x970) = uVar17;
  *(undefined8 *)(this + 0x978) = uVar24;
  *(undefined1 (*) [16])(this + 0x988) = (undefined1  [16])0x0;
  uVar17 = Memory::alloc_static(0x1008,false);
  *(undefined8 *)(this + 0x960) = uVar17;
  uVar17 = Memory::alloc_static((ulong)*(uint *)(this + 0x97c) << 3,false);
  *(undefined8 *)(this + 0x968) = uVar17;
  *(undefined ***)(this + 0x9b0) = &PTR__RID_Alloc_00119210;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  uVar24 = _UNK_00120018;
  uVar17 = __LC210;
  *(undefined8 *)(this + 0x9b8) = 0;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(undefined8 *)(this + 0x9d8) = 0;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined4 *)(this + 0x9f0) = 1;
  *(undefined8 *)(this + 0x9c8) = uVar17;
  *(undefined8 *)(this + 0x9d0) = uVar24;
  singleton = this;
  plVar18 = (long *)RendererRD::MaterialStorage::get_singleton();
  this_02 = (SortEffects *)operator_new(0x198,"");
  RendererRD::SortEffects::SortEffects(this_02);
  *(SortEffects **)(this + 8) = this_02;
  local_228 = 0;
  local_138 = "\n";
  local_130 = (undefined1  [8])0x1;
  String::parse_latin1((StrRange *)&local_228);
  itos((long)&local_138);
  operator+((char *)&local_238,"#define SAMPLERS_BINDING_FIRST_INDEX ");
  String::operator+((String *)&local_240,(StrRange *)&local_238);
  lVar27 = local_238;
  if (local_238 != 0) {
    LOCK();
    plVar20 = (long *)(local_238 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_238 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  pcVar5 = local_138;
  if (local_138 != (undefined *)0x0) {
    LOCK();
    plVar20 = (long *)(local_138 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_138 = (undefined *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar27 = local_228;
  if (local_228 != 0) {
    LOCK();
    plVar20 = (long *)(local_228 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_228 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_220._8_8_;
  local_220 = auVar13 << 0x40;
  local_138 = "";
  local_238 = 0;
  local_130 = (undefined1  [8])0x0;
  String::parse_latin1((StrRange *)&local_238);
  Vector<String>::push_back((Vector<String> *)&local_228);
  lVar27 = local_238;
  if (local_238 != 0) {
    LOCK();
    plVar20 = (long *)(local_238 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_238 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uStack_128;
  _local_130 = auVar14 << 0x40;
  ShaderRD::initialize((Vector *)this_00,(StrRange *)&local_228,(Vector *)&local_240);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_130);
  CowData<String>::_unref((CowData<String> *)local_220);
  lVar27 = local_240;
  if (local_240 != 0) {
    LOCK();
    plVar20 = (long *)(local_240 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_240 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  uVar17 = RendererRD::MaterialStorage::get_singleton();
  RendererRD::MaterialStorage::shader_set_data_request_function
            (uVar17,2,_create_particles_shader_funcs);
  uVar17 = RendererRD::MaterialStorage::get_singleton();
  RendererRD::MaterialStorage::material_set_data_request_function
            (uVar17,2,_create_particles_material_funcs);
  local_13c = 0;
  local_220 = (undefined1  [16])0x0;
  local_210 = (undefined1  [16])0x0;
  local_1f0 = (undefined1  [16])0x0;
  local_1e0 = (undefined1  [16])0x0;
  local_1c0 = (undefined1  [16])0x0;
  local_1b0 = (undefined1  [16])0x0;
  local_190 = (undefined1  [16])0x0;
  local_180 = (undefined1  [16])0x0;
  local_170 = _LC74;
  uStack_168 = _UNK_00120028;
  local_158 = (undefined1  [16])0x0;
  local_200 = _LC74;
  local_1d0 = _LC74;
  local_1a0 = _LC74;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  StringName::StringName((StringName *)&local_238,"COLOR",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xe;
  local_138 = "PARTICLE.color";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"VELOCITY",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x11;
  local_138 = "PARTICLE.velocity";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"MASS",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x4;
  local_138 = "mass";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"ACTIVE",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xf;
  local_138 = "particle_active";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RESTART",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x7;
  local_138 = "restart";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"CUSTOM",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xf;
  local_138 = "PARTICLE.custom";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"AMOUNT_RATIO",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x12;
  local_138 = "FRAME.amount_ratio";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  lVar27 = 1;
  do {
    itos((long)&local_138);
    operator+((char *)&local_258,"USERDATA");
    pcVar5 = local_138;
    if (local_138 != (char *)0x0) {
      LOCK();
      plVar20 = (long *)(local_138 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_138 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    itos((long)&local_138);
    operator+((char *)&local_238,"PARTICLE.userdata");
    StringName::StringName((StringName *)&local_240,(String *)&local_258,false);
    plVar20 = (long *)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                      ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                                    *)&local_228,(StringName *)&local_240);
    lVar28 = *plVar20;
    if (lVar28 != local_238) {
      if (lVar28 != 0) {
        LOCK();
        plVar1 = (long *)(lVar28 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar28 = *plVar20;
          *plVar20 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
        else {
          *plVar20 = 0;
        }
      }
      *plVar20 = local_238;
      local_238 = 0;
    }
    if ((StringName::configured != '\0') && (local_240 != 0)) {
      StringName::unref();
    }
    lVar28 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar20 = (long *)(local_238 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    pcVar5 = local_138;
    if (local_138 != (char *)0x0) {
      LOCK();
      plVar20 = (long *)(local_138 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_138 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    local_238 = 0;
    local_138 = "_USED\n";
    local_130 = (undefined1  [8])0x6;
    String::parse_latin1((StrRange *)&local_238);
    itos((long)&local_138);
    operator+((char *)&local_240,"#define USERDATA");
    String::operator+((String *)&local_248,(String *)&local_240);
    StringName::StringName((StringName *)&local_250,(String *)&local_258,false);
    plVar20 = (long *)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                      ::operator[](local_1c8,(StringName *)&local_250);
    lVar28 = *plVar20;
    if (lVar28 != local_248) {
      if (lVar28 != 0) {
        LOCK();
        plVar1 = (long *)(lVar28 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar28 = *plVar20;
          *plVar20 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
        else {
          *plVar20 = 0;
        }
      }
      *plVar20 = local_248;
      local_248 = 0;
    }
    if ((StringName::configured != '\0') && (local_250 != 0)) {
      StringName::unref();
    }
    lVar28 = local_248;
    if (local_248 != 0) {
      LOCK();
      plVar20 = (long *)(local_248 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_248 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_240;
    if (local_240 != 0) {
      LOCK();
      plVar20 = (long *)(local_240 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_240 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    pcVar5 = local_138;
    if (local_138 != (char *)0x0) {
      LOCK();
      plVar20 = (long *)(local_138 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_138 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar28 = local_238;
    if (local_238 != 0) {
      LOCK();
      plVar20 = (long *)(local_238 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_258;
    if (local_258 != 0) {
      LOCK();
      plVar20 = (long *)(local_258 + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        local_258 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 != 7);
  StringName::StringName((StringName *)&local_238,"TRANSFORM",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xe;
  local_138 = "PARTICLE.xform";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"TIME",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1a;
  local_138 = "frame_history.data[0].time";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"PI",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1e;
  local_138 = "3.1415926535897932384626433833";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"TAU",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1e;
  local_138 = "6.2831853071795864769252867666";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"E",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1e;
  local_138 = "2.7182818284590452353602874714";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"LIFETIME",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xf;
  local_138 = "params.lifetime";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"DELTA",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xb;
  local_138 = "local_delta";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"NUMBER",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xf;
  local_138 = "particle_number";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"INDEX",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x5;
  local_138 = "index";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"EMISSION_TRANSFORM",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x18;
  local_138 = "FRAME.emission_transform";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"EMITTER_VELOCITY",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x16;
  local_138 = "FRAME.emitter_velocity";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"INTERPOLATE_TO_END",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x13;
  local_138 = "FRAME.interp_to_end";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RANDOM_SEED",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x11;
  local_138 = "FRAME.random_seed";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"FLAG_EMIT_POSITION",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1a;
  local_138 = "EMISSION_FLAG_HAS_POSITION";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"FLAG_EMIT_ROT_SCALE",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x20;
  local_138 = "EMISSION_FLAG_HAS_ROTATION_SCALE";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"FLAG_EMIT_VELOCITY",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1a;
  local_138 = "EMISSION_FLAG_HAS_VELOCITY";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"FLAG_EMIT_COLOR",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x17;
  local_138 = "EMISSION_FLAG_HAS_COLOR";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"FLAG_EMIT_CUSTOM",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x18;
  local_138 = "EMISSION_FLAG_HAS_CUSTOM";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RESTART_POSITION",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x10;
  local_138 = "restart_position";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RESTART_ROT_SCALE",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x16;
  local_138 = "restart_rotation_scale";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RESTART_VELOCITY",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x10;
  local_138 = "restart_velocity";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RESTART_COLOR",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xd;
  local_138 = "restart_color";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"RESTART_CUSTOM",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xe;
  local_138 = "restart_custom";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"emit_subparticle",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_138 = "emit_subparticle";
  local_130 = (undefined1  [8])0x10;
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"COLLIDED",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x8;
  local_138 = "collided";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"COLLISION_NORMAL",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x10;
  local_138 = "collision_normal";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"COLLISION_DEPTH",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xf;
  local_138 = "collision_depth";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"ATTRACTOR_FORCE",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                          *)&local_228,(StringName *)&local_238);
  local_130 = (undefined1  [8])0xf;
  local_138 = "attractor_force";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"disable_force",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x16;
  local_138 = "#define DISABLE_FORCE\n";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"disable_velocity",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x19;
  local_138 = "#define DISABLE_VELOCITY\n";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"keep_data",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x19;
  local_138 = "#define ENABLE_KEEP_DATA\n";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"collision_use_scale",false);
  pSVar19 = (StrRange *)
            HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            ::operator[](local_1f8,(StringName *)&local_238);
  local_130 = (undefined1  [8])0x1c;
  local_138 = "#define USE_COLLISION_SCALE\n";
  String::parse_latin1(pSVar19);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  local_130 = (undefined1  [8])0x9;
  local_160 = _LC293;
  local_138 = "material.";
  String::parse_latin1((StrRange *)local_158);
  local_140 = 10;
  local_130 = (undefined1  [8])0x1b;
  uStack_168 = _LC295;
  local_138 = "global_shader_uniforms.data";
  String::parse_latin1((StrRange *)(local_158 + 8));
  local_110 = 0;
  _local_130 = (undefined1  [16])0x0;
  local_120 = (undefined1  [16])0x0;
  uVar21 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_200 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_200 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar21 * 4)) {
        local_110 = uVar21 & 0xffffffff;
        goto LAB_0010e77b;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010e77b:
  if (local_200._4_4_ != 0) {
    for (puVar25 = (undefined8 *)local_210._0_8_; puVar25 != (undefined8 *)0x0;
        puVar25 = (undefined8 *)*puVar25) {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_238,(DefaultIdentifierActions *)&local_138,
               (bool)((char)puVar25 + '\x10'));
    }
  }
  local_e0 = 0;
  local_100 = (undefined1  [16])0x0;
  local_f0 = (undefined1  [16])0x0;
  uVar21 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1d0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1d0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar21 * 4)) {
        local_e0 = uVar21 & 0xffffffff;
        goto LAB_0010e831;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010e831:
  if ((local_1d0._4_4_ != 0) && ((long *)local_1e0._0_8_ != (long *)0x0)) {
    plVar20 = (long *)local_1e0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_238,local_108,(bool)((char)plVar20 + '\x10'));
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  local_b0 = 0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  uVar21 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_1a0 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_1a0 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar21 * 4)) {
        local_b0 = uVar21 & 0xffffffff;
        goto LAB_0010e901;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010e901:
  if ((local_1a0._4_4_ != 0) && ((long *)local_1b0._0_8_ != (long *)0x0)) {
    plVar20 = (long *)local_1b0._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_238,local_d8,(bool)((char)plVar20 + '\x10'));
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  local_80 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  uVar21 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_170 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_170 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + uVar21 * 4)) {
        local_80 = uVar21 & 0xffffffff;
        goto LAB_0010e9d3;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010e9d3:
  if ((local_170._4_4_ != 0) && ((long *)local_180._0_8_ != (long *)0x0)) {
    plVar20 = (long *)local_180._0_8_;
    do {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
      ::insert((StringName *)&local_238,local_a8,(bool)((char)plVar20 + '\x10'));
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  local_68 = 0;
  local_78 = uStack_168;
  local_70 = local_160;
  if (local_158._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_158);
  }
  local_60 = 0;
  if (local_158._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(local_158 + 8));
  }
  local_58 = 0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_148);
  }
  local_50 = local_140;
  local_4c = local_13c;
  ShaderCompiler::initialize((ShaderCompiler *)(this + 400),(DefaultIdentifierActions *)&local_138);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_138);
  ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions
            ((DefaultIdentifierActions *)&local_228);
  uVar17 = (**(code **)(*plVar18 + 0x70))(plVar18);
  *(undefined8 *)(this + 0x698) = uVar17;
  (**(code **)(*plVar18 + 0x78))(plVar18,uVar17);
  pcVar4 = *(code **)(*plVar18 + 0x88);
  local_228 = 0;
  local_138 = 
  "\n// Default particles shader.\n\nshader_type particles;\n\nvoid process() {\n\tCOLOR = vec4(1.0);\n}\n"
  ;
  local_130 = (undefined1  [8])0x5e;
  String::parse_latin1((StrRange *)&local_228);
  (*pcVar4)(plVar18,*(undefined8 *)(this + 0x698),(StrRange *)&local_228);
  lVar27 = local_228;
  if (local_228 != 0) {
    LOCK();
    plVar20 = (long *)(local_228 + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      local_228 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  uVar17 = (**(code **)(*plVar18 + 200))(plVar18);
  *(undefined8 *)(this + 0x6a0) = uVar17;
  (**(code **)(*plVar18 + 0xd0))(plVar18,uVar17);
  plVar20 = plVar18;
  (**(code **)(*plVar18 + 0xe8))
            (plVar18,*(undefined8 *)(this + 0x6a0),*(undefined8 *)(this + 0x698));
  uVar21 = *(ulong *)(this + 0x6a0);
  if ((uVar21 == 0) || (*(uint *)((long)plVar18 + 0x26c) <= (uint)uVar21)) {
LAB_001114a0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar27 = ((uVar21 & 0xffffffff) % (ulong)*(uint *)(plVar18 + 0x4d)) * 0xc0 +
           *(long *)(plVar18[0x4b] + ((uVar21 & 0xffffffff) / (ulong)*(uint *)(plVar18 + 0x4d)) * 8)
  ;
  if (*(int *)(lVar27 + 0xb8) != (int)(uVar21 >> 0x20)) {
    if (*(int *)(lVar27 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,plVar20);
    }
    goto LAB_001114a0;
  }
  if (*(int *)(lVar27 + 0x18) != 2) goto LAB_001114a0;
  uVar21 = *(ulong *)(*(long *)(*(long *)(lVar27 + 8) + 0xa8) + 0x78);
  if (*(long *)(this + 0x30) == 0) {
    lVar27 = 0;
LAB_0010f803:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar27,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar27 = *(long *)(*(long *)(this + 0x30) + -8);
    if (lVar27 < 1) goto LAB_0010f803;
    pcVar5 = *(char **)(this + 0x40);
    if (pcVar5 == (char *)0x0) {
LAB_0010f929:
      lVar27 = 0;
LAB_0010f92c:
      uVar21 = 0;
LAB_0010f75c:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar21,lVar27,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar27 = *(long *)(pcVar5 + -8);
    if (lVar27 < 1) goto LAB_0010f92c;
    if (*pcVar5 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar17 = 0;
      goto LAB_0010ed35;
    }
    if ((uVar21 == 0) || (*(uint *)(this + 0xec) <= (uint)uVar21)) {
LAB_0010f878:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.",0,0);
      uVar17 = 0;
      goto LAB_0010ed35;
    }
    lVar28 = ((uVar21 & 0xffffffff) % (ulong)*(uint *)(this + 0xe8)) * 0xa0 +
             *(long *)(*(long *)(this + 0xd8) +
                      ((uVar21 & 0xffffffff) / (ulong)*(uint *)(this + 0xe8)) * 8);
    if (*(int *)(lVar28 + 0x98) != (int)(uVar21 >> 0x20)) {
      if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_0010f878;
    }
    iVar23 = (int)lVar28;
    if (*(char *)(lVar28 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)this_00);
      lVar27 = *(long *)(this + 0x90);
      if (lVar27 != 0) {
        lVar22 = 0;
        do {
          if (*(long *)(lVar27 + -8) <= lVar22) break;
          if (*(char *)(lVar27 + lVar22) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)this_00,iVar23);
          }
          else {
            ShaderRD::_compile_version_start((Version *)this_00,iVar23);
          }
          lVar27 = *(long *)(this + 0x90);
          lVar22 = lVar22 + 1;
        } while (lVar27 != 0);
      }
    }
    puVar6 = *(uint **)(this + 0x50);
    if (puVar6 == (uint *)0x0) goto LAB_0010f929;
    lVar27 = *(long *)(puVar6 + -2);
    if (lVar27 < 1) goto LAB_0010f92c;
    uVar21 = (ulong)*puVar6;
    lVar22 = *(long *)(lVar28 + 0x68);
    if (lVar22 == 0) {
LAB_0010f8a4:
      lVar27 = 0;
      goto LAB_0010f75c;
    }
    lVar27 = *(long *)(lVar22 + -8);
    if (lVar27 <= (long)uVar21) goto LAB_0010f75c;
    if (*(long *)(lVar22 + uVar21 * 8) == 0) {
      cVar3 = *(char *)(lVar28 + 0x90);
    }
    else {
      ShaderRD::_compile_version_end((Version *)this_00,iVar23);
      cVar3 = *(char *)(lVar28 + 0x90);
    }
    if (cVar3 != '\0') {
      puVar25 = *(undefined8 **)(lVar28 + 0x88);
      if (puVar25 == (undefined8 *)0x0) goto LAB_0010f929;
      lVar27 = puVar25[-1];
      if (0 < lVar27) {
        uVar17 = *puVar25;
        goto LAB_0010ed35;
      }
      goto LAB_0010f92c;
    }
  }
  uVar17 = 0;
LAB_0010ed35:
  *(undefined8 *)(this + 0x6a8) = uVar17;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = local_220._8_8_;
  local_220 = auVar15 << 0x40;
  uVar17 = RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer();
  uStack_128 = uVar17;
  local_138 = (char *)_LC175;
  auVar8[0xf] = 0;
  auVar8._0_15_ = stack0xfffffffffffffed1;
  _local_130 = auVar8 << 8;
  local_120._8_8_ = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_228,(DefaultIdentifierActions *)&local_138);
  lVar27 = 0;
  RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
            ((Vector *)(plVar18 + 1),(int)(StrRange *)&local_228);
  uVar17 = RenderingDevice::get_singleton();
  uVar17 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar17,(StrRange *)&local_228,*(undefined8 *)(this + 0x6a8),0);
  *(undefined8 *)(this + 0x6b0) = uVar17;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_220);
  local_230 = 0;
  do {
    if (lVar27 == 0) {
      local_228 = 0;
      local_138 = "\n#define MODE_FILL_INSTANCES\n";
      local_130 = (undefined1  [8])0x1d;
      String::parse_latin1((StrRange *)&local_228);
      Vector<String>::push_back((Vector<String> *)&local_238);
      lVar27 = local_228;
      if (local_228 != 0) {
        LOCK();
        plVar18 = (long *)(local_228 + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          local_228 = 0;
          Memory::free_static((void *)(lVar27 + -0x10),false);
        }
      }
      local_228 = 0;
      local_138 = "\n#define MODE_FILL_SORT_BUFFER\n#define USE_SORT_BUFFER\n";
      local_130 = (undefined1  [8])0x37;
      String::parse_latin1((StrRange *)&local_228);
      Vector<String>::push_back((Vector<String> *)&local_238);
      lVar27 = local_228;
      if (local_228 != 0) {
        LOCK();
        plVar18 = (long *)(local_228 + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          local_228 = 0;
          Memory::free_static((void *)(lVar27 + -0x10),false);
        }
      }
      local_228 = 0;
      local_138 = "\n#define MODE_FILL_INSTANCES\n#define USE_SORT_BUFFER\n";
      local_130 = (undefined1  [8])0x35;
      String::parse_latin1((StrRange *)&local_228);
      Vector<String>::push_back((Vector<String> *)&local_238);
      lVar27 = local_228;
      if (local_228 != 0) {
        LOCK();
        plVar18 = (long *)(local_228 + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          local_228 = 0;
          Memory::free_static((void *)(lVar27 + -0x10),false);
        }
      }
      lVar27 = 1;
    }
    local_228 = 0;
    local_138 = "\n";
    local_130 = (undefined1  [8])0x1;
    String::parse_latin1((StrRange *)&local_228);
    itos((long)&local_138);
    operator+((char *)&local_240,"\n#define MODE_FILL_INSTANCES\n#define USERDATA_COUNT ");
    String::operator+((String *)&local_248,(String *)&local_240);
    Vector<String>::push_back((Vector<String> *)&local_238);
    lVar28 = local_248;
    if (local_248 != 0) {
      LOCK();
      plVar18 = (long *)(local_248 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_248 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_240;
    if (local_240 != 0) {
      LOCK();
      plVar18 = (long *)(local_240 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_240 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    pcVar5 = local_138;
    if (local_138 != (undefined *)0x0) {
      LOCK();
      plVar18 = (long *)(local_138 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_138 = (undefined *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar28 = local_228;
    if (local_228 != 0) {
      LOCK();
      plVar18 = (long *)(local_228 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_228 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    local_228 = 0;
    local_138 = "\n";
    local_130 = (undefined1  [8])0x1;
    String::parse_latin1((StrRange *)&local_228);
    itos((long)&local_138);
    operator+((char *)&local_240,
              "\n#define MODE_FILL_SORT_BUFFER\n#define USE_SORT_BUFFER\n#define USERDATA_COUNT ");
    String::operator+((String *)&local_248,(String *)&local_240);
    Vector<String>::push_back((Vector<String> *)&local_238);
    lVar28 = local_248;
    if (local_248 != 0) {
      LOCK();
      plVar18 = (long *)(local_248 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_248 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_240;
    if (local_240 != 0) {
      LOCK();
      plVar18 = (long *)(local_240 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_240 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    pcVar5 = local_138;
    if (local_138 != (undefined *)0x0) {
      LOCK();
      plVar18 = (long *)(local_138 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_138 = (undefined *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar28 = local_228;
    if (local_228 != 0) {
      LOCK();
      plVar18 = (long *)(local_228 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_228 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    local_228 = 0;
    local_138 = "\n";
    local_130 = (undefined1  [8])0x1;
    String::parse_latin1((StrRange *)&local_228);
    itos((long)&local_138);
    operator+((char *)&local_240,
              "\n#define MODE_FILL_INSTANCES\n#define USE_SORT_BUFFER\n#define USERDATA_COUNT ");
    String::operator+((String *)&local_248,(String *)&local_240);
    Vector<String>::push_back((Vector<String> *)&local_238);
    lVar28 = local_248;
    if (local_248 != 0) {
      LOCK();
      plVar18 = (long *)(local_248 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_248 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_240;
    if (local_240 != 0) {
      LOCK();
      plVar18 = (long *)(local_240 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_240 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    pcVar5 = local_138;
    if (local_138 != (undefined *)0x0) {
      LOCK();
      plVar18 = (long *)(local_138 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_138 = (undefined *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar28 = local_228;
    if (local_228 != 0) {
      LOCK();
      plVar18 = (long *)(local_228 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_228 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 != 7);
  local_138 = "";
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_220._8_8_;
  local_220 = auVar9 << 0x40;
  local_240 = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uStack_128;
  _local_130 = auVar10 << 0x40;
  String::parse_latin1((StrRange *)&local_240);
  ShaderRD::initialize((Vector *)this_01,(StrRange *)&local_238,(Vector *)&local_240);
  lVar27 = local_240;
  if (local_240 != 0) {
    LOCK();
    plVar18 = (long *)(local_240 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_240 = 0;
      Memory::free_static((void *)(lVar27 + -0x10),false);
    }
  }
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_220);
  uVar17 = ShaderRD::version_create();
  uVar26 = 0;
  *(undefined8 *)(this + 0x830) = uVar17;
  do {
    uVar29 = uVar26 & 0xffffffff;
    uVar2 = uVar26 + 3;
    do {
      uVar17 = RenderingDevice::get_singleton();
      uVar7 = *(ulong *)(this + 0x830);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uStack_128;
      _local_130 = auVar11 << 0x40;
      if (*(long *)(this + 0x6d0) == 0) {
        lVar27 = 0;
LAB_0010f7bf:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar26,
                   lVar27,"p_variant","variant_defines.size()","",false,false);
        uVar24 = 0;
      }
      else {
        lVar27 = *(long *)(*(long *)(this + 0x6d0) + -8);
        if (lVar27 <= (long)uVar26) goto LAB_0010f7bf;
        lVar28 = *(long *)(this + 0x6e0);
        uVar21 = uVar26;
        if (lVar28 == 0) goto LAB_0010f738;
        lVar27 = *(long *)(lVar28 + -8);
        if (lVar27 <= (long)uVar26) goto LAB_0010f75c;
        if (*(char *)(lVar28 + uVar26) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          uVar24 = 0;
          goto LAB_0010f372;
        }
        if ((uVar7 == 0) || (*(uint *)(this + 0x78c) <= (uint)uVar7)) {
LAB_0010f960:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar24 = 0;
        }
        else {
          lVar28 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x788)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x778) +
                            ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x788)) * 8);
          if (*(int *)(lVar28 + 0x98) != (int)(uVar7 >> 0x20)) {
            if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_0010f960;
          }
          iVar23 = (int)lVar28;
          if (*(char *)(lVar28 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_01);
            lVar27 = *(long *)(this + 0x730);
            if (lVar27 != 0) {
              lVar22 = 0;
              do {
                if (*(long *)(lVar27 + -8) <= lVar22) break;
                if (*(char *)(lVar27 + lVar22) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_01,iVar23);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_01,iVar23);
                }
                lVar27 = *(long *)(this + 0x730);
                lVar22 = lVar22 + 1;
              } while (lVar27 != 0);
            }
          }
          lVar22 = *(long *)(this + 0x6f0);
          if (lVar22 == 0) {
LAB_0010f738:
            lVar27 = 0;
            uVar21 = uVar26;
            goto LAB_0010f75c;
          }
          lVar27 = *(long *)(lVar22 + -8);
          if (lVar27 <= (long)uVar26) goto LAB_0010f75c;
          uVar21 = (ulong)*(uint *)(lVar22 + uVar26 * 4);
          lVar22 = *(long *)(lVar28 + 0x68);
          if (lVar22 == 0) goto LAB_0010f8a4;
          lVar27 = *(long *)(lVar22 + -8);
          if (lVar27 <= (long)uVar21) goto LAB_0010f75c;
          if (*(long *)(lVar22 + uVar21 * 8) == 0) {
            cVar3 = *(char *)(lVar28 + 0x90);
          }
          else {
            ShaderRD::_compile_version_end((Version *)this_01,iVar23);
            cVar3 = *(char *)(lVar28 + 0x90);
          }
          if (cVar3 == '\0') {
            uVar24 = 0;
          }
          else {
            lVar28 = *(long *)(lVar28 + 0x88);
            if (lVar28 == 0) goto LAB_0010f738;
            lVar27 = *(long *)(lVar28 + -8);
            uVar21 = uVar26;
            if (lVar27 <= (long)uVar26) goto LAB_0010f75c;
            uVar24 = *(undefined8 *)(lVar28 + uVar26 * 8);
          }
        }
      }
LAB_0010f372:
      uVar17 = RenderingDevice::compute_pipeline_create
                         (uVar17,uVar24,(DefaultIdentifierActions *)&local_138);
      *(undefined8 *)(this + ((long)(int)uVar29 + 0x106) * 8 + 8) = uVar17;
      auVar16 = local_130;
      if (local_130 != (undefined1  [8])0x0) {
        LOCK();
        plVar18 = (long *)((long)local_130 + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uStack_128;
          _local_130 = auVar12 << 0x40;
          Memory::free_static((void *)((long)auVar16 + -0x10),false);
        }
      }
      uVar26 = uVar26 + 1;
      uVar29 = (ulong)((int)uVar29 + 1);
    } while (uVar26 != uVar2);
    if (uVar26 == 0x15) {
      CowData<String>::_unref((CowData<String> *)&local_230);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* RendererRD::ParticlesStorage::particles_collision_initialize(RID) */

void __thiscall
RendererRD::ParticlesStorage::particles_collision_initialize
          (ParticlesStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  Dependency local_48 [8];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_80 = _LC180;
  uStack_90._4_4_ = _LC135;
  uStack_90._0_4_ = _LC135;
  uStack_88 = _LC135;
  uStack_84 = _LC135;
  local_50 = _LC308;
  local_98 = 0xffffffff00000000;
  local_60 = 0;
  local_58 = 0;
  local_20 = 2;
  local_70 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::initialize_rid
            ((RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *)(this + 0x958),
             param_2,&local_98);
  Dependency::~Dependency(local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::ParticlesStorage::ParticleProcessMaterialData::set_render_priority(int) */

void RendererRD::ParticlesStorage::ParticleProcessMaterialData::set_render_priority(int param_1)

{
  return;
}



/* RendererRD::ParticlesStorage::ParticleProcessMaterialData::set_next_pass(RID) */

void RendererRD::ParticlesStorage::ParticleProcessMaterialData::set_next_pass(void)

{
  return;
}



/* RendererCompositorRD::get_frame_number() const */

undefined8 RendererCompositorRD::get_frame_number(void)

{
  return frame;
}



/* RendererCompositorRD::get_frame_delta_time() const */

undefined8 __thiscall RendererCompositorRD::get_frame_delta_time(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x2a8);
}



/* RendererCompositorRD::get_total_time() const */

undefined8 __thiscall RendererCompositorRD::get_total_time(RendererCompositorRD *this)

{
  return *(undefined8 *)(this + 0x2a0);
}



/* ParticlesShaderRD::~ParticlesShaderRD() */

void __thiscall ParticlesShaderRD::~ParticlesShaderRD(ParticlesShaderRD *this)

{
  *(undefined ***)this = &PTR__ParticlesShaderRD_00119190;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ParticlesShaderRD::~ParticlesShaderRD() */

void __thiscall ParticlesShaderRD::~ParticlesShaderRD(ParticlesShaderRD *this)

{
  *(undefined ***)this = &PTR__ParticlesShaderRD_00119190;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* ParticlesCopyShaderRD::~ParticlesCopyShaderRD() */

void __thiscall ParticlesCopyShaderRD::~ParticlesCopyShaderRD(ParticlesCopyShaderRD *this)

{
  *(undefined ***)this = &PTR__ParticlesCopyShaderRD_001191b0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* ParticlesCopyShaderRD::~ParticlesCopyShaderRD() */

void __thiscall ParticlesCopyShaderRD::~ParticlesCopyShaderRD(ParticlesCopyShaderRD *this)

{
  *(undefined ***)this = &PTR__ParticlesCopyShaderRD_001191b0;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* RendererRD::ParticlesStorage::_create_particles_shader_funcs() */

void RendererRD::ParticlesStorage::_create_particles_shader_funcs(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xd0,"");
  uVar1 = _LC74;
  puVar2[1] = 0;
  puVar2[7] = uVar1;
  puVar2[0xd] = uVar1;
  *puVar2 = &PTR_set_path_hint_00119468;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined4 *)(puVar2 + 0x15) = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *(undefined1 *)(puVar2 + 0x18) = 0;
  *(undefined4 *)((long)puVar2 + 0xc1) = 0;
  *(undefined2 *)((long)puVar2 + 0xc5) = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  *(undefined1 (*) [16])(puVar2 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xb) = (undefined1  [16])0x0;
  return;
}



/* RendererRD::ParticlesStorage::particles_collision_free(RID) [clone .cold] */

void RendererRD::ParticlesStorage::particles_collision_free(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::ParticlesStorage::particles_collision_get_heightfield_framebuffer(RID) const [clone
   .cold] */

void RendererRD::ParticlesStorage::particles_collision_get_heightfield_framebuffer(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::Uniform>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::ParticlesStorage::_particles_allocate_emission_buffer(RendererRD::ParticlesStorage::Particles*)
   [clone .cold] */

void RendererRD::ParticlesStorage::_particles_allocate_emission_buffer(Particles *param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111484(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::ParticlesStorage::_particles_process(RendererRD::ParticlesStorage::Particles*,
   double) [clone .cold] */

void RendererRD::ParticlesStorage::_particles_process(Particles *param_1,double param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::ParticlesStorage::ParticlesStorage() [clone .cold] */

void __thiscall RendererRD::ParticlesStorage::ParticlesStorage(ParticlesStorage *this)

{
  code *pcVar1;
  int in_EDX;
  
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,this);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */

void __thiscall
ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if (*(long *)(this + 0xe0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xe0);
      *(undefined8 *)(this + 0xe0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xd8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xd8);
      *(undefined8 *)(this + 0xd8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pvVar5 = *(void **)(this + 0x98);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xbc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xa0) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x98);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00111623;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_00111623:
  pvVar5 = *(void **)(this + 0x68);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x8c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x88) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x70) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x70) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x68);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00111702;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_00111702:
  pvVar5 = *(void **)(this + 0x38);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x5c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x40) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x40) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x38);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001117dd;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_001117dd:
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (*(long *)((long)pvVar5 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x18);
              *(undefined8 *)((long)pvVar5 + 0x18) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar5,false);
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* ShaderCompiler::IdentifierActions::~IdentifierActions() */

void __thiscall ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 200);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xd0) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xd0) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 200);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00111adc;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
LAB_00111adc:
  pvVar3 = *(void **)(this + 0x98);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xbc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa0) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xa0) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x98);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00111b9c;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_00111b9c:
  pvVar3 = *(void **)(this + 0x68);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x8c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x88) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x70) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x70) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x68);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00111c53;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_00111c53:
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x5c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x40) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x40) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x38);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x5c) = 0;
        *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00111cfe;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x40),false);
  }
LAB_00111cfe:
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
          bVar4 = StringName::configured != '\0';
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
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



/* RendererRD::ParticlesStorage::_create_particles_material_funcs(RendererRD::MaterialStorage::ShaderData*)
    */

void RendererRD::ParticlesStorage::_create_particles_material_funcs(ShaderData *param_1)

{
  _create_particles_material_func(singleton,(ParticlesShaderData *)param_1);
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
    if (local_88 != (Dependency *)0x0) goto LAB_00111fdf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_00111fdf:
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00112481;
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
  if ((float)uVar31 * __LC104 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Dependency *)*in_RSI;
      goto LAB_00112481;
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
LAB_00112481:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Removing unreachable block (ram,0x00112738) */
/* WARNING: Removing unreachable block (ram,0x00112868) */
/* WARNING: Removing unreachable block (ram,0x00112a30) */
/* WARNING: Removing unreachable block (ram,0x00112874) */
/* WARNING: Removing unreachable block (ram,0x0011287e) */
/* WARNING: Removing unreachable block (ram,0x00112a10) */
/* WARNING: Removing unreachable block (ram,0x0011288a) */
/* WARNING: Removing unreachable block (ram,0x00112894) */
/* WARNING: Removing unreachable block (ram,0x001129f0) */
/* WARNING: Removing unreachable block (ram,0x001128a0) */
/* WARNING: Removing unreachable block (ram,0x001128aa) */
/* WARNING: Removing unreachable block (ram,0x001129d0) */
/* WARNING: Removing unreachable block (ram,0x001128b6) */
/* WARNING: Removing unreachable block (ram,0x001128c0) */
/* WARNING: Removing unreachable block (ram,0x001129b0) */
/* WARNING: Removing unreachable block (ram,0x001128cc) */
/* WARNING: Removing unreachable block (ram,0x001128d6) */
/* WARNING: Removing unreachable block (ram,0x00112990) */
/* WARNING: Removing unreachable block (ram,0x001128e2) */
/* WARNING: Removing unreachable block (ram,0x001128ec) */
/* WARNING: Removing unreachable block (ram,0x00112970) */
/* WARNING: Removing unreachable block (ram,0x001128f4) */
/* WARNING: Removing unreachable block (ram,0x0011290a) */
/* WARNING: Removing unreachable block (ram,0x00112916) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RendererRD::ParticlesStorage::Particles::~Particles() */

void __thiscall RendererRD::ParticlesStorage::Particles::~Particles(Particles *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  if (*(void **)(this + 0x2e8) != (void *)0x0) {
    if (*(int *)(this + 0x2e0) != 0) {
      *(undefined4 *)(this + 0x2e0) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2e8),false);
  }
  if (*(void **)(this + 0x2d8) != (void *)0x0) {
    if (*(int *)(this + 0x2d0) != 0) {
      *(undefined4 *)(this + 0x2d0) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2d8),false);
  }
  Dependency::~Dependency((Dependency *)(this + 0x290));
  pvVar2 = *(void **)(this + 0x268);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x28c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) != 0) {
        memset(*(void **)(this + 0x280),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) << 2);
      }
      *(undefined4 *)(this + 0x28c) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x278),false);
    Memory::free_static(*(void **)(this + 0x270),false);
    Memory::free_static(*(void **)(this + 0x280),false);
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  plVar1 = *(long **)(this + 0x178);
  if (plVar1 != (long *)0x0) {
    lVar3 = *(long *)(this + 0x188);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(this + 400);
    }
    lVar4 = *(long *)(this + 400);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    if (this + 0x178 == (Particles *)*plVar1) {
      *plVar1 = *(long *)(this + 0x188);
    }
    if (this + 0x178 == (Particles *)plVar1[1]) {
      plVar1[1] = lVar4;
    }
  }
  if (*(long *)(this + 0xb8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xb8);
      *(undefined8 *)(this + 0xb8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xa8);
      *(undefined8 *)(this + 0xa8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */

undefined1  [16]
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1)

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
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
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
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_00112cdf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_00112cdf:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
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
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00113191;
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
  if ((float)uVar31 * __LC104 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00113191;
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
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
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
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00113191:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderCompiler::Stage, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderCompiler::Stage> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
::operator[](HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_00113988:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00113838;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011383c:
      if (iVar46 != 0) {
LAB_00113844:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_0011343c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00113473;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00113473;
    if (iVar46 != 0) goto LAB_00113844;
LAB_00113499:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011343c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0011343c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_00113988;
LAB_00113838:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011383c;
    }
LAB_00113473:
    if ((float)uVar40 * __LC104 < (float)(iVar46 + 1)) goto LAB_00113499;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011394d;
LAB_00113724:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00113724;
LAB_0011394d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011343c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, bool*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
::operator[](HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_001140f8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00113fa8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_00113fac:
      if (iVar46 != 0) {
LAB_00113fb4:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              puVar42[3] = 0;
              goto LAB_00113bac;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00113be3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00113be3;
    if (iVar46 != 0) goto LAB_00113fb4;
LAB_00113c09:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00113bac;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_00113bac;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_001140f8;
LAB_00113fa8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00113fac;
    }
LAB_00113be3:
    if ((float)uVar40 * __LC104 < (float)(iVar46 + 1)) goto LAB_00113c09;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  puVar42[3] = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_001140bd;
LAB_00113e97:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00113e97;
LAB_001140bd:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00113bac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00114360) */
/* WARNING: Removing unreachable block (ram,0x00114490) */
/* WARNING: Removing unreachable block (ram,0x00114609) */
/* WARNING: Removing unreachable block (ram,0x0011449c) */
/* WARNING: Removing unreachable block (ram,0x001144a6) */
/* WARNING: Removing unreachable block (ram,0x001145eb) */
/* WARNING: Removing unreachable block (ram,0x001144b2) */
/* WARNING: Removing unreachable block (ram,0x001144bc) */
/* WARNING: Removing unreachable block (ram,0x001145cd) */
/* WARNING: Removing unreachable block (ram,0x001144c8) */
/* WARNING: Removing unreachable block (ram,0x001144d2) */
/* WARNING: Removing unreachable block (ram,0x001145af) */
/* WARNING: Removing unreachable block (ram,0x001144de) */
/* WARNING: Removing unreachable block (ram,0x001144e8) */
/* WARNING: Removing unreachable block (ram,0x00114591) */
/* WARNING: Removing unreachable block (ram,0x001144f4) */
/* WARNING: Removing unreachable block (ram,0x001144fe) */
/* WARNING: Removing unreachable block (ram,0x00114573) */
/* WARNING: Removing unreachable block (ram,0x00114506) */
/* WARNING: Removing unreachable block (ram,0x00114510) */
/* WARNING: Removing unreachable block (ram,0x00114558) */
/* WARNING: Removing unreachable block (ram,0x00114518) */
/* WARNING: Removing unreachable block (ram,0x0011452e) */
/* WARNING: Removing unreachable block (ram,0x0011453a) */
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



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001191f0;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_0011479a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_001147db;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar8) <= (uint)lVar7) break;
      puVar9 = *(undefined8 **)(this + 8);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        lVar7 = puVar9[uVar6 / uVar8] + (uVar6 % uVar8) * 0x88;
        if (-1 < *(int *)(lVar7 + 0x80)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x50));
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      goto LAB_0011479a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_001147db;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_001147db:
  if (puVar9 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar9,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00119210;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::ParticlesStorage::Particles, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Particles *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001191d0;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_00114b9b:
    if ((uint)uVar4 < uVar8) goto LAB_00114bdb;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
    print_error((String *)&local_48);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        this_00 = (Particles *)((uVar6 % (ulong)uVar8) * 0x2f8 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x2f0)) {
          RendererRD::ParticlesStorage::Particles::~Particles(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_00114b9b;
    }
    if (uVar8 != 0) goto LAB_00114bdb;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_00114bdb:
  if (puVar5 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar5,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00119210;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::ParticlesStorage::Particles, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Particles *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001191d0;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_00114f7b:
    if ((uint)uVar4 < uVar8) goto LAB_00114fbb;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
    print_error((String *)&local_48);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        this_00 = (Particles *)((uVar6 % (ulong)uVar8) * 0x2f8 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x2f0)) {
          RendererRD::ParticlesStorage::Particles::~Particles(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_00114f7b;
    }
    if (uVar8 != 0) goto LAB_00114fbb;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_00114fbb:
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001191f0;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_0011519a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_001151db;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar8) <= (uint)lVar7) break;
      puVar9 = *(undefined8 **)(this + 8);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        lVar7 = puVar9[uVar6 / uVar8] + (uVar6 % uVar8) * 0x88;
        if (-1 < *(int *)(lVar7 + 0x80)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x50));
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      goto LAB_0011519a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_001151db;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_001151db:
  if (puVar9 != (undefined8 *)0x0) {
    Memory::free_static(puVar9,false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::ParticlesStorage::Particles, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::allocate_rid
          (RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
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
        lVar3 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
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
      }
      uVar13 = 0;
      goto LAB_001154b6;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x2f8,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x2f0);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0xbe;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x2f8 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x2f0) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_001154b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RID_Alloc<RendererRD::ParticlesStorage::Particles, true>::initialize_rid(RID) */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::initialize_rid
          (RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *this,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  uVar4 = _LC130;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    puVar5 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x2f8 +
             *(long *)(*(long *)(this + 8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)puVar5[0xbc] < 0) {
      uVar6 = (uint)(param_2 >> 0x20);
      if (uVar6 == (puVar5[0xbc] & 0x7fffffff)) {
        *(undefined1 *)(puVar5 + 1) = 1;
        uVar2 = _LC129;
        *(undefined2 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 6) = uVar4;
        *(undefined8 *)(puVar5 + 8) = 0;
        uVar1 = _UNK_0011ff88;
        uVar4 = __LC128;
        puVar5[0xbc] = uVar6;
        *(undefined8 *)(puVar5 + 0x12) = uVar2;
        *(undefined8 *)(puVar5 + 0xe) = uVar4;
        *(undefined8 *)(puVar5 + 0x10) = uVar1;
        *(undefined2 *)(puVar5 + 0x14) = 0;
        *(undefined8 *)(puVar5 + 0x17) = 0x3f80000000000000;
        *(undefined1 (*) [16])(puVar5 + 0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x32) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x36) = (undefined1  [16])0x0;
        *puVar5 = 1;
        *(undefined8 *)(puVar5 + 2) = 0;
        puVar5[5] = 0;
        *(undefined8 *)(puVar5 + 10) = 0;
        puVar5[0xc] = 0;
        *(undefined1 *)(puVar5 + 0xd) = 0;
        *(undefined1 *)((long)puVar5 + 0x52) = 0;
        *(undefined8 *)(puVar5 + 0x15) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x19) = 0;
        *(undefined8 *)(puVar5 + 0x1b) = 0;
        *(undefined8 *)(puVar5 + 0x1d) = 0;
        *(undefined8 *)(puVar5 + 0x24) = 0;
        puVar5[0x26] = 0;
        *(undefined8 *)(puVar5 + 0x2a) = 0;
        *(undefined8 *)(puVar5 + 0x2e) = 0;
        *(undefined1 *)(puVar5 + 0x30) = 0;
        *(undefined8 *)(puVar5 + 0x3a) = 0;
        puVar5[0x3c] = 0;
        *(undefined1 (*) [16])(puVar5 + 0x3e) = (undefined1  [16])0x0;
        uVar4 = _LC130;
        *(undefined1 (*) [16])(puVar5 + 0x46) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x4a) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x4e) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x68) = (undefined1  [16])0x0;
        auVar8 = ZEXT416(_LC135);
        *(undefined8 *)(puVar5 + 0x70) = uVar4;
        *(undefined2 *)(puVar5 + 0x73) = 1;
        *(undefined2 *)(puVar5 + 0x7c) = 0x100;
        *(undefined1 (*) [16])(puVar5 + 0x42) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x56) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x7d) = auVar8;
        *(undefined1 (*) [16])(puVar5 + 0x81) = auVar8;
        *(undefined8 *)(puVar5 + 0x52) = 0;
        puVar5[0x54] = 0;
        *(undefined8 *)(puVar5 + 0x5a) = 0;
        *(undefined1 *)(puVar5 + 0x5c) = 0;
        *(undefined8 *)(puVar5 + 0x5e) = 0;
        *(undefined8 *)(puVar5 + 0x62) = 0;
        *(undefined8 *)(puVar5 + 100) = 0;
        *(undefined4 **)(puVar5 + 0x60) = puVar5;
        *(undefined8 *)(puVar5 + 0x66) = 0;
        *(undefined8 *)(puVar5 + 0x6c) = 0;
        *(undefined8 *)(puVar5 + 0x6e) = 0;
        puVar5[0x72] = 0x1e;
        *(undefined8 *)(puVar5 + 0x74) = 0;
        puVar5[0x76] = 0x3c23d70a;
        *(undefined8 *)(puVar5 + 0x77) = 0;
        *(undefined8 *)(puVar5 + 0x7a) = 0xffffffffffffffff;
        *(undefined1 *)((long)puVar5 + 0x1f2) = 0;
        puVar5[0x85] = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x86) = 0;
        puVar5[0x88] = 0;
        uVar4 = _LC136;
        *(undefined8 *)(puVar5 + 0x89) = 0;
        *(undefined8 *)(puVar5 + 0x8c) = uVar4;
        uVar4 = _LC74;
        puVar5[0x8b] = 0;
        *(undefined8 *)(puVar5 + 0xa2) = uVar4;
        *(undefined8 *)(puVar5 + 0xae) = uVar4;
        uVar4 = _LC137;
        *(undefined8 *)(puVar5 + 0x98) = 0;
        *(undefined8 *)(puVar5 + 0xb0) = uVar4;
        *(undefined1 *)(puVar5 + 0xb2) = 0;
        *(undefined8 *)(puVar5 + 0xb4) = 0;
        *(undefined8 *)(puVar5 + 0xb6) = 0;
        *(undefined8 *)(puVar5 + 0xb8) = 0;
        *(undefined8 *)(puVar5 + 0xba) = 0;
        *(undefined1 (*) [16])(puVar5 + 0x90) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x94) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x9a) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0x9e) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0xa6) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar5 + 0xaa) = (undefined1  [16])0x0;
        uVar3 = Math::rand();
        puVar5[0x6e] = uVar3;
        return;
      }
      pcVar7 = "Attempting to initialize the wrong RID";
      uVar4 = 0xfc;
    }
    else {
      pcVar7 = "Initializing already initialized RID";
      uVar4 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar4,
                     "Method/function failed. Returning: nullptr",pcVar7,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::allocate_rid
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
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
        lVar3 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
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
      }
      uVar13 = 0;
      goto LAB_00115c5f;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x88,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x80);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x22;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(*(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
            ((ulong)uVar7 % (ulong)uVar2) * 0x88 + 0x80) = uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00115c5f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,
   false>::make_rid(RendererRD::ParticlesStorage::ParticlesCollisionInstance const&) */

ulong __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false>::make_rid
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false> *this,
          ParticlesCollisionInstance *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar5;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x48,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar12;
    lVar6 = Memory::realloc_static(pvVar2,uVar17,false);
    *(long *)(this + 0x10) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar5 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar16) = uVar12;
    if (uVar8 != 0) {
      lVar6 = *(long *)(lVar5 + lVar16);
      lVar7 = 0;
      puVar11 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x40);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 0x12;
        *(int *)(lVar6 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar13 / (ulong)uVar8) * 8) +
                    ((ulong)uVar13 % (ulong)uVar8) * 4);
  uVar17 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(*(long *)(lVar16 + (uVar17 / uVar8) * 8) + (uVar17 % (ulong)uVar8) * 0x48 + 0x40) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar9,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar1 = (undefined8 *)
               (*(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8) +
               (uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x48);
      if ((int)*(uint *)(puVar1 + 8) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar1 + 8) & 0x7fffffff)) {
          uVar12 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar1 + 8) = uVar13;
          *puVar1 = uVar12;
          puVar1[1] = uVar4;
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          puVar1[2] = *(undefined8 *)(param_1 + 0x10);
          puVar1[3] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          puVar1[4] = *(undefined8 *)(param_1 + 0x20);
          puVar1[5] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x38);
          puVar1[6] = *(undefined8 *)(param_1 + 0x30);
          puVar1[7] = uVar12;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar12 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar12 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar12,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
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
LAB_00116570:
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
  if (lVar10 == 0) goto LAB_00116570;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00116449:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00116449;
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
    goto LAB_001165c6;
  }
  if (lVar10 == lVar7) {
LAB_001164ef:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001165c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001164da;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001164ef;
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
LAB_001164da:
  puVar9[-1] = param_1;
  return 0;
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
LAB_00116880:
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
  if (lVar7 == 0) goto LAB_00116880;
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
LAB_001167ec:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00116781;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001167ec;
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
LAB_00116781:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::Uniform>::_unref() */

void __thiscall CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
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
    lStack_70 = 0x117040;
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
        lStack_70 = 0x11708a;
        memset(__s_00,0,uVar29);
        pDVar45 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
LAB_00117099:
      if (iVar36 == 0) goto LAB_00117130;
      uVar31 = (ulong)*(uint *)(this + 0x28);
      lVar39 = *(long *)(this + 0x10);
      goto LAB_00116d44;
    }
    pDVar45 = *param_1;
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00117099;
  }
  else {
    iVar36 = *(int *)(this + 0x2c);
    if (iVar36 == 0) {
LAB_00117130:
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
LAB_00116d44:
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
            goto LAB_00116e2e;
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
  if ((float)uVar43 * __LC104 < (float)(iVar36 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00116e2e;
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
LAB_00116e2e:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar30[1] + 8;
  return auVar47;
}



/* CowData<ShaderCompiler::GeneratedCode::Texture>::_unref() */

void __thiscall
CowData<ShaderCompiler::GeneratedCode::Texture>::_unref
          (CowData<ShaderCompiler::GeneratedCode::Texture> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 5;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::_resize_and_rehash
          (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
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
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */

CowData<char32_t> * __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::operator[](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *this,StringName *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong __n;
  long lVar4;
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
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  void *__s_00;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined8 *puVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  uint local_a8;
  CowData<char32_t> *local_88;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  lVar34 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar29);
  if (lVar34 == 0) {
LAB_00117988:
    local_70 = 0;
    uVar33 = uVar43 * 4;
    __n = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar43 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar43 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,__n);
      }
LAB_001175a1:
      iVar35 = *(int *)(this + 0x2c);
      if (iVar35 != 0) {
LAB_001175ad:
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar33 = CONCAT44(0,uVar29);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar30 = StringName::get_empty_hash();
        }
        else {
          uVar30 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar30 == 0) {
          uVar30 = 1;
        }
        uVar42 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar30 * lVar34;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar33;
        lVar37 = SUB168(auVar9 * auVar21,8);
        uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
        uVar41 = SUB164(auVar9 * auVar21,8);
        if (uVar40 != 0) {
          do {
            if ((uVar40 == uVar30) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10) == *(long *)param_1))
            {
              lVar34 = *(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8);
              if (*(long *)(lVar34 + 0x18) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar34 + 0x18),(CowData *)&local_70);
                lVar34 = *(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8);
              }
              goto LAB_00117548;
            }
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar41 + 1) * lVar34;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar33;
            lVar37 = SUB168(auVar10 * auVar22,8);
            uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
            uVar41 = SUB164(auVar10 * auVar22,8);
          } while ((uVar40 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar40 * lVar34, auVar23._8_8_ = 0,
                  auVar23._0_8_ = uVar33, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar29 + uVar41) - SUB164(auVar11 * auVar23,8)) * lVar34,
                  auVar24._8_8_ = 0, auVar24._0_8_ = uVar33, uVar42 <= SUB164(auVar12 * auVar24,8)))
          ;
        }
        iVar35 = *(int *)(this + 0x2c);
      }
      goto LAB_001176ac;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001176ac;
    if (*(int *)(this + 0x2c) != 0) goto LAB_001175ad;
LAB_001176ce:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      lVar34 = 0;
LAB_00117548:
      local_88 = (CowData<char32_t> *)(lVar34 + 0x18);
      goto LAB_00117551;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar30 = StringName::get_empty_hash();
        lVar34 = *(long *)(this + 8);
      }
      else {
        uVar30 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar36 = SUB168(auVar5 * auVar17,8);
      uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
      uVar41 = SUB164(auVar5 * auVar17,8);
      if (uVar40 != 0) {
        uVar42 = 0;
        do {
          if ((uVar40 == uVar30) &&
             (*(long *)(*(long *)(lVar34 + lVar36 * 8) + 0x10) == *(long *)param_1)) {
            lVar34 = *(long *)(lVar34 + (ulong)uVar41 * 8);
            goto LAB_00117548;
          }
          uVar42 = uVar42 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar41 + 1) * lVar37;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar36 = SUB168(auVar6 * auVar18,8);
          uVar40 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
          uVar41 = SUB164(auVar6 * auVar18,8);
        } while ((uVar40 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar40 * lVar37, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar41 + uVar29) - SUB164(auVar7 * auVar19,8)) * lVar37,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar42 <= SUB164(auVar8 * auVar20,8)));
      }
      local_70 = 0;
      uVar43 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar34 == 0) goto LAB_00117988;
      goto LAB_001175a1;
    }
    local_70 = 0;
    iVar35 = 0;
LAB_001176ac:
    if ((float)uVar43 * __LC104 < (float)(iVar35 + 1)) goto LAB_001176ce;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50[0] = 0;
  puVar31 = (undefined8 *)operator_new(0x20,"");
  *puVar31 = local_68._0_8_;
  puVar31[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar31 + 2),(StringName *)&local_58);
  puVar31[3] = 0;
  local_88 = (CowData<char32_t> *)(puVar31 + 3);
  if ((local_50[0] == 0) ||
     (CowData<char32_t>::_ref(local_88,(CowData *)local_50), lVar34 = local_50[0], local_50[0] == 0)
     ) {
    lVar37 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar37 = local_70;
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar34 + -0x10),false);
      lVar37 = local_70;
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar39 = *(undefined8 **)(this + 0x20);
  if (puVar39 == (undefined8 *)0x0) {
    lVar34 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar31;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar34 == 0) goto LAB_00117955;
LAB_001177c2:
    uVar29 = *(uint *)(lVar34 + 0x20);
  }
  else {
    *puVar39 = puVar31;
    puVar31[1] = puVar39;
    lVar34 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar34 != 0) goto LAB_001177c2;
LAB_00117955:
    uVar29 = StringName::get_empty_hash();
  }
  lVar34 = *(long *)(this + 0x10);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar43 = (ulong)uVar29;
  uVar41 = 0;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar30);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar43 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar33;
  lVar38 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar34 + lVar38 * 4);
  iVar35 = SUB164(auVar13 * auVar25,8);
  uVar40 = *puVar2;
  while (uVar40 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar40 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar33;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar35 + uVar30) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    local_a8 = SUB164(auVar15 * auVar27,8);
    puVar39 = puVar31;
    if (local_a8 < uVar41) {
      *puVar2 = (uint)uVar43;
      uVar43 = (ulong)uVar40;
      puVar3 = (undefined8 *)(lVar4 + lVar38 * 8);
      puVar39 = (undefined8 *)*puVar3;
      *puVar3 = puVar31;
      uVar41 = local_a8;
    }
    uVar29 = (uint)uVar43;
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar33;
    lVar38 = SUB168(auVar16 * auVar28,8);
    puVar2 = (uint *)(lVar34 + lVar38 * 4);
    iVar35 = SUB164(auVar16 * auVar28,8);
    puVar31 = puVar39;
    uVar40 = *puVar2;
  }
  *(undefined8 **)(lVar4 + lVar38 * 8) = puVar31;
  *puVar2 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar37 != 0) {
    LOCK();
    plVar1 = (long *)(lVar37 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00117551:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */

StringName *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName *param_1,String *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
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
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  CowData *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  long *local_80;
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar22 = (ulong)uVar23;
    uVar32 = uVar22 * 4;
    uVar34 = uVar22 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar22 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_00117ad2;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00117be9;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00117ade;
LAB_00117c0b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_00117ddb;
    }
    _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00117ad2:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_00117ade:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar24 * lVar25;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar32;
      lVar30 = SUB168(auVar6 * auVar14,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar6 * auVar14,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            if (local_80[3] != *(long *)in_RCX) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 3),in_RCX);
              local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            }
            goto LAB_00117ddb;
          }
          uVar35 = uVar35 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar32;
          lVar30 = SUB168(auVar7 * auVar15,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar7 * auVar15,8);
        } while ((uVar33 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar33 * lVar25, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar32, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar3 + uVar27) - SUB164(auVar8 * auVar16,8)) * lVar25,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar32, uVar35 <= SUB164(auVar9 * auVar17,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_00117be9:
    if ((float)uVar23 * __LC104 < (float)(iVar28 + 1)) goto LAB_00117c0b;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50[0] = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
  }
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  local_80[3] = 0;
  if ((local_50[0] != 0) &&
     (CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 3),(CowData *)local_50),
     lVar25 = local_50[0], local_50[0] != 0)) {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_00117cfc:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_00117d09;
LAB_00117e31:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar4 = local_80;
      local_80[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = local_80;
      goto LAB_00117cfc;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = local_80;
    *local_80 = lVar25;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x18) = local_80;
    if (lVar25 == 0) goto LAB_00117e31;
LAB_00117d09:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar3);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar32 * lVar30;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar34;
  lVar31 = SUB168(auVar10 * auVar18,8);
  lVar5 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar10 * auVar18,8);
  uVar24 = *puVar2;
  plVar1 = local_80;
  while (uVar24 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar24 * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((iVar28 + uVar3) - SUB164(auVar11 * auVar19,8)) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    uVar23 = SUB164(auVar12 * auVar20,8);
    plVar36 = plVar1;
    if (uVar23 < uVar33) {
      *puVar2 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar4 = (undefined8 *)(lVar5 + lVar31 * 8);
      plVar36 = (long *)*puVar4;
      *puVar4 = plVar1;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar34;
    lVar31 = SUB168(auVar13 * auVar21,8);
    puVar2 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar13 * auVar21,8);
    plVar1 = plVar36;
    uVar24 = *puVar2;
  }
  *(long **)(lVar5 + lVar31 * 8) = plVar1;
  *puVar2 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00117ddb:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* void memdelete<HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > >
   >(HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > >*) */

void memdelete<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>
               (HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00118097;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_00118097:
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(code **)this = RendererViewport::get_num_viewports_with_motion_vectors;
  pvVar5 = *(void **)(this + 0x48);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x6c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x6c) = 0;
        *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x50) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x50) + lVar4) = 0;
            memdelete<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>
                      (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
            pvVar5 = *(void **)(this + 0x48);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 0x6c) = 0;
        *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00118189;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x50),false);
  }
LAB_00118189:
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x88) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x88) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x88);
                *(undefined8 *)((long)pvVar5 + 0x88) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x80) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x80) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x80);
                *(undefined8 *)((long)pvVar5 + 0x80) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            CowData<String>::_unref((CowData<String> *)((long)pvVar5 + 0x70));
            if (*(long *)((long)pvVar5 + 0x40) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x40) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x40);
                *(undefined8 *)((long)pvVar5 + 0x40) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001182cf;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001182cf:
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
  ~ShaderData(this);
  operator_delete(this,0x70);
  return;
}



/* CowData<RenderingDevice::Uniform>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this,long param_1)

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
/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar8 * 0x28;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_001186c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x28 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_001186c0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00118551:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar2 = lVar8 + uVar10 * 0x28;
        if (*(long *)(lVar2 + 0x20) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00118551;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x20) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_00118716;
  }
  if (lVar11 == lVar9) {
LAB_00118633:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00118716:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00118610;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00118633;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar8 = 0;
  }
  uVar4 = _LC173;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00118610:
  puVar7[-1] = param_1;
  return 0;
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
        goto LAB_00118766;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      goto LAB_00118771;
    }
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_00118771;
  }
  else {
LAB_00118766:
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
LAB_00118771:
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
            goto LAB_00118a38;
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
  if ((float)uVar2 * __LC104 < (float)(uVar32 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pDVar25 = (DependencyTracker *)0x0;
      goto LAB_00118a38;
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
LAB_00118a38:
  *param_1 = pDVar25;
  return;
}



/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision, true>::initialize_rid(RID,
   RendererRD::ParticlesStorage::ParticlesCollision const&) */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::initialize_rid
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *this,ulong param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long in_FS_OFFSET;
  DependencyTracker *pDStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(this + 8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x88);
    if ((int)*(uint *)(puVar1 + 0x10) < 0) {
      uVar7 = (uint)(param_2 >> 0x20);
      if (uVar7 == (*(uint *)(puVar1 + 0x10) & 0x7fffffff)) {
        *(uint *)(puVar1 + 0x10) = uVar7;
        uVar2 = *(undefined4 *)(param_3 + 1);
        *puVar1 = *param_3;
        uVar4 = *(undefined8 *)((long)param_3 + 0xc);
        *(undefined4 *)(puVar1 + 1) = uVar2;
        uVar2 = *(undefined4 *)(param_3 + 4);
        *(undefined8 *)((long)puVar1 + 0xc) = uVar4;
        uVar3 = *(undefined4 *)((long)param_3 + 0x14);
        *(undefined4 *)(puVar1 + 4) = uVar2;
        *(undefined4 *)((long)puVar1 + 0x14) = uVar3;
        puVar1[3] = param_3[3];
        puVar1[5] = param_3[5];
        puVar1[6] = param_3[6];
        puVar1[7] = param_3[7];
        puVar1[8] = param_3[8];
        uVar4 = param_3[9];
        puVar1[0xf] = 0;
        puVar1[9] = uVar4;
        uVar7 = *(uint *)(param_3 + 0xf);
        *(undefined1 (*) [16])(puVar1 + 0xb) = (undefined1  [16])0x0;
        uVar7 = *(uint *)(hash_table_size_primes + (ulong)uVar7 * 4);
        *(undefined1 (*) [16])(puVar1 + 0xd) = (undefined1  [16])0x0;
        lVar5 = 1;
        if (5 < uVar7) {
          do {
            if (uVar7 <= *(uint *)(hash_table_size_primes + lVar5 * 4)) {
              *(int *)(puVar1 + 0xf) = (int)lVar5;
              goto LAB_00118ca0;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0);
        }
LAB_00118ca0:
        if ((*(int *)((long)param_3 + 0x7c) != 0) &&
           (plVar6 = (long *)param_3[0xd], plVar6 != (long *)0x0)) {
          do {
            HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
            ::insert(&pDStack_28,(uint *)(puVar1 + 10),(bool)((char)plVar6 + '\x10'));
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00118db0;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0xfc,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to initialize the wrong RID",0,0);
    }
    else {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0xf8,
                       "Method/function failed. Returning: nullptr",
                       "Initializing already initialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return;
  }
LAB_00118db0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */

void __thiscall RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::ParticlesStorage::Particles, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::Particles,true>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::Particles,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollisionInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true>::~RID_Alloc
          (RID_Alloc<RendererRD::ParticlesStorage::ParticlesCollision,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::ParticlesStorage::Particles::~Particles() */

void __thiscall RendererRD::ParticlesStorage::Particles::~Particles(Particles *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderCompiler::IdentifierActions::~IdentifierActions() */

void __thiscall ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */

void __thiscall
ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ParticlesCopyShaderRD::~ParticlesCopyShaderRD() */

void __thiscall ParticlesCopyShaderRD::~ParticlesCopyShaderRD(ParticlesCopyShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ParticlesShaderRD::~ParticlesShaderRD() */

void __thiscall ParticlesShaderRD::~ParticlesShaderRD(ParticlesShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


