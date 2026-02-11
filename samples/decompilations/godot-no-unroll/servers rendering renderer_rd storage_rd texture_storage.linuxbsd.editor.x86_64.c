
/* RendererRD::TextureStorage::texture_external_update(RID, int, int, unsigned long) */

void RendererRD::TextureStorage::texture_external_update(void)

{
  return;
}



/* RendererRD::TextureStorage::texture_2d_placeholder_initialize(RID) */

void __thiscall
RendererRD::TextureStorage::texture_2d_placeholder_initialize
          (TextureStorage *this,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010001e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x58))(this,param_2,this + 0x498);
  return;
}



/* RendererRD::TextureStorage::texture_2d_layered_placeholder_initialize(RID,
   RenderingServer::TextureLayeredType) */

void __thiscall
RendererRD::TextureStorage::texture_2d_layered_placeholder_initialize
          (TextureStorage *this,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x60))(this,param_2,this + 0x4a0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(this,param_2,this + 0x4b0,param_3);
  return;
}



/* RendererRD::TextureStorage::texture_3d_placeholder_initialize(RID) */

void __thiscall
RendererRD::TextureStorage::texture_3d_placeholder_initialize
          (TextureStorage *this,undefined8 param_2)

{
  (**(code **)(*(long *)this + 0x68))(this,param_2,5,4,4,4,0,this + 0x4c0);
  return;
}



/* RendererRD::TextureStorage::render_target_set_direct_to_screen(RID, bool) */

void RendererRD::TextureStorage::render_target_set_direct_to_screen(void)

{
  return;
}



/* RendererRD::TextureStorage::render_target_set_position(RID, int, int) */

void RendererRD::TextureStorage::render_target_set_position(void)

{
  return;
}



/* RendererRD::TextureStorage::render_target_get_position(RID) const */

undefined8 RendererRD::TextureStorage::render_target_get_position(void)

{
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_direct_to_screen(RID) const */

undefined8 RendererRD::TextureStorage::render_target_get_direct_to_screen(void)

{
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_size(RID) const */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_size(TextureStorage *this,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    puVar2 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    iVar1 = *(int *)(puVar2 + 0x2a);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_size",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdb3,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_texture(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_texture(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x130);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdba,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_override(RID, RID, RID, RID, RID) */

void RendererRD::TextureStorage::render_target_set_override
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x2ac))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(param_1 + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x2a8)) * 8);
    if (*(int *)(lVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0xe8) = param_3;
      *(undefined8 *)(lVar1 + 0xf0) = param_4;
      *(undefined8 *)(lVar1 + 0xf8) = param_5;
      return;
    }
    if (*(int *)(lVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_override",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdc1,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_override_color(RID) const */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_override_color(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0xe8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_override_color",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdca,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_override_depth(RID) const */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_override_depth(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0xf0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_override_depth",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdd1,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_override_velocity(RID) const */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_override_velocity(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0xf8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_override_velocity",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdeb,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_render_region(RID, Rect2i const&) */

void __thiscall
RendererRD::TextureStorage::render_target_set_render_region
          (TextureStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar2 + 0x150) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0xd8) = *param_3;
      *(undefined8 *)(lVar2 + 0xe0) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_render_region",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe05,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_render_region(RID) const */

undefined1  [16] __thiscall
RendererRD::TextureStorage::render_target_get_render_region(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0xd8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_render_region",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe0c,
                   "Parameter \"rt\" is null.",0,0);
  return ZEXT816(0);
}



/* RendererRD::TextureStorage::render_target_get_transparent(RID) const */

undefined1 __thiscall
RendererRD::TextureStorage::render_target_get_transparent(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x44);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_transparent",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe1a,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_was_used(RID) const */

undefined1 __thiscall
RendererRD::TextureStorage::render_target_was_used(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x138);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_was_used",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe28,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_as_unused(RID) */

void __thiscall
RendererRD::TextureStorage::render_target_set_as_unused(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar2 + 0x138) = 0;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_as_unused",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe2e,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_msaa(RID) const */

undefined4 __thiscall
RendererRD::TextureStorage::render_target_get_msaa(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x30);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_msaa",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe3f,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_msaa_needs_resolve(RID, bool) */

void __thiscall
RendererRD::TextureStorage::render_target_set_msaa_needs_resolve
          (TextureStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar2 + 0x34) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_msaa_needs_resolve",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe46,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_msaa_needs_resolve(RID) const */

undefined1 __thiscall
RendererRD::TextureStorage::render_target_get_msaa_needs_resolve(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x34);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_msaa_needs_resolve",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe4d,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_is_using_hdr(RID) const */

undefined1 __thiscall
RendererRD::TextureStorage::render_target_is_using_hdr(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x45);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_is_using_hdr",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe6b,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_request_clear(RID, Color const&) */

void __thiscall
RendererRD::TextureStorage::render_target_request_clear
          (TextureStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar3 + 0x150) == (int)(param_2 >> 0x20)) {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      *(undefined1 *)(lVar3 + 0x139) = 1;
      *(undefined8 *)(lVar3 + 0x13c) = uVar1;
      *(undefined8 *)(lVar3 + 0x144) = uVar2;
      return;
    }
    if (*(int *)(lVar3 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_request_clear",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xeae,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_is_clear_requested(RID) */

undefined1 __thiscall
RendererRD::TextureStorage::render_target_is_clear_requested(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x139);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_is_clear_requested",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xeb5,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_disable_clear_request(RID) */

void __thiscall
RendererRD::TextureStorage::render_target_disable_clear_request(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar2 + 0x139) = 0;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_disable_clear_request",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xec1,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_mark_sdf_enabled(RID, bool) */

void __thiscall
RendererRD::TextureStorage::render_target_mark_sdf_enabled
          (TextureStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar2 + 0x46) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_mark_sdf_enabled",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xf08,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_set_vrs_mode(RID, RenderingServer::ViewportVRSMode) */

void __thiscall
RendererRD::TextureStorage::render_target_set_vrs_mode
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 200) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_vrs_mode",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x108d,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_vrs_mode(RID) const */

undefined4 __thiscall
RendererRD::TextureStorage::render_target_get_vrs_mode(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 200);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_vrs_mode",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x1094,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_vrs_update_mode(RID,
   RenderingServer::ViewportVRSUpdateMode) */

void __thiscall
RendererRD::TextureStorage::render_target_set_vrs_update_mode
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0xcc) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_vrs_update_mode",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x109b,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_vrs_update_mode(RID) const */

undefined4 __thiscall
RendererRD::TextureStorage::render_target_get_vrs_update_mode(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xcc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_vrs_update_mode",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x10a2,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_vrs_texture(RID, RID) */

void __thiscall
RendererRD::TextureStorage::render_target_set_vrs_texture
          (TextureStorage *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0xd0) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_vrs_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x10a9,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_vrs_texture(RID) const */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_vrs_texture(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0xd0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_vrs_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x10b0,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::decal_instance_set_transform(RID, Transform3D const&) */

void __thiscall
RendererRD::TextureStorage::decal_instance_set_transform
          (TextureStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x234))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x230)) * 0x50 +
            *(long *)(*(long *)(this + 0x220) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x230)) * 8);
    if (*(int *)(lVar2 + 0x48) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 8) = *param_3;
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      uVar1 = param_3[3];
      *(undefined8 *)(lVar2 + 0x18) = param_3[2];
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
      uVar1 = param_3[5];
      *(undefined8 *)(lVar2 + 0x28) = param_3[4];
      *(undefined8 *)(lVar2 + 0x30) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x48) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_instance_set_transform",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xbe5,
                   "Parameter \"di\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_instance_set_sorting_offset(RID, float) */

void __thiscall
RendererRD::TextureStorage::decal_instance_set_sorting_offset
          (undefined4 param_1,TextureStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x234))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x230)) * 0x50 +
            *(long *)(*(long *)(this + 0x220) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x230)) * 8);
    iVar1 = *(int *)(lVar2 + 0x48);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x38) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_instance_set_sorting_offset",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xbeb,
                   "Parameter \"di\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_set_size_override(RID, int, int) */

void __thiscall
RendererRD::TextureStorage::texture_set_size_override
          (TextureStorage *this,ulong param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    piVar1 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                    *(long *)(*(long *)(this + 0x110) +
                             ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
    if (piVar1[0x44] == (int)(param_2 >> 0x20)) {
      if (*piVar1 == 0) {
        piVar1[0x17] = param_3;
        piVar1[0x16] = param_4;
        return;
      }
      _err_print_error("texture_set_size_override",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x639,
                       "Condition \"tex->type != TextureStorage::TYPE_2D\" is true.",0,0);
      return;
    }
    if (piVar1[0x44] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_set_size_override",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x638,
                   "Parameter \"tex\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_get_format(RID) const */

undefined4 __thiscall
RendererRD::TextureStorage::texture_get_format(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    iVar1 = *(int *)(lVar2 + 0x110);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x3c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_get_format",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x64f,
                   "Parameter \"tex\" is null.",0,0);
  return 0x27;
}



/* RendererRD::TextureStorage::texture_set_detect_3d_callback(RID, void (*)(void*), void*) */

void __thiscall
RendererRD::TextureStorage::texture_set_detect_3d_callback
          (TextureStorage *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    if (*(int *)(lVar1 + 0x110) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0xe0) = param_4;
      *(undefined8 *)(lVar1 + 0xd8) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_set_detect_3d_callback",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x656,
                   "Parameter \"tex\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_set_detect_normal_callback(RID, void (*)(void*), void*) */

void __thiscall
RendererRD::TextureStorage::texture_set_detect_normal_callback
          (TextureStorage *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    if (*(int *)(lVar1 + 0x110) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0xf0) = param_4;
      *(undefined8 *)(lVar1 + 0xe8) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_set_detect_normal_callback",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x65e,
                   "Parameter \"tex\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_set_detect_roughness_callback(RID, void (*)(void*, String
   const&, RenderingServer::TextureDetectRoughnessChannel), void*) */

void __thiscall
RendererRD::TextureStorage::texture_set_detect_roughness_callback
          (TextureStorage *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    if (*(int *)(lVar1 + 0x110) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x100) = param_4;
      *(undefined8 *)(lVar1 + 0xf8) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_set_detect_roughness_callback",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x666,
                   "Parameter \"tex\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_get_rd_texture(RID, bool) const */

undefined8 __thiscall
RendererRD::TextureStorage::texture_get_rd_texture(TextureStorage *this,ulong param_2,char param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x124)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
              *(long *)(*(long *)(this + 0x110) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
      if (*(int *)(lVar1 + 0x110) == (int)(param_2 >> 0x20)) {
        if ((param_3 != '\0') && (*(long *)(lVar1 + 0x18) != 0)) {
          return *(undefined8 *)(lVar1 + 0x18);
        }
        return *(undefined8 *)(lVar1 + 0x10);
      }
      if (*(int *)(lVar1 + 0x110) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
        return 0;
      }
    }
  }
  return 0;
}



/* RendererRD::TextureStorage::decal_set_emission_energy(RID, float) */

void __thiscall
RendererRD::TextureStorage::decal_set_emission_energy
          (undefined4 param_1,TextureStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x98);
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
  _err_print_error("decal_set_emission_energy",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xaa4,
                   "Parameter \"decal\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_set_albedo_mix(RID, float) */

void __thiscall
RendererRD::TextureStorage::decal_set_albedo_mix
          (undefined4 param_1,TextureStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x98);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x34) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_albedo_mix",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xaaa,
                   "Parameter \"decal\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_set_modulate(RID, Color const&) */

void __thiscall
RendererRD::TextureStorage::decal_set_modulate
          (TextureStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    if (*(int *)(lVar2 + 0x98) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x38) = *param_3;
      *(undefined8 *)(lVar2 + 0x40) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x98) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_modulate",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xab0,
                   "Parameter \"decal\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_set_distance_fade(RID, bool, float, float) */

void __thiscall
RendererRD::TextureStorage::decal_set_distance_fade
          (undefined4 param_1,undefined4 param_2,TextureStorage *this,ulong param_4,
          undefined1 param_5)

{
  long lVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x1dc))) {
    lVar1 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    if (*(int *)(lVar1 + 0x98) == (int)(param_4 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x54) = param_5;
      *(ulong *)(lVar1 + 0x58) = CONCAT44(param_2,param_1);
      return;
    }
    if (*(int *)(lVar1 + 0x98) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_distance_fade",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xabd,
                   "Parameter \"decal\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_set_fade(RID, float, float) */

void __thiscall
RendererRD::TextureStorage::decal_set_fade
          (undefined4 param_1,undefined4 param_2,TextureStorage *this,ulong param_4)

{
  int iVar1;
  long lVar2;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x98);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      *(ulong *)(lVar2 + 0x4c) = CONCAT44(param_2,param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_fade","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",
                   0xac5,"Parameter \"decal\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_set_normal_fade(RID, float) */

void __thiscall
RendererRD::TextureStorage::decal_set_normal_fade
          (undefined4 param_1,TextureStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x98);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x60) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_normal_fade",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xacc,
                   "Parameter \"decal\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::decal_get_aabb(RID) const */

undefined8 *
RendererRD::TextureStorage::decal_get_aabb(undefined8 *param_1,long param_2,ulong param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  
  fVar6 = _UNK_00128c9c;
  fVar4 = _LC52;
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1dc))) {
    puVar7 = (undefined8 *)
             (((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1d8)) * 0xa0 +
             *(long *)(*(long *)(param_2 + 0x1c8) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1d8)) * 8));
    if (*(int *)(puVar7 + 0x13) == (int)(param_3 >> 0x20)) {
      uVar2 = *puVar7;
      uVar3 = *puVar7;
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(puVar7 + 1);
      fVar5 = _LC52;
      *(undefined8 *)((long)param_1 + 0xc) = uVar3;
      fVar1 = *(float *)(puVar7 + 1);
      *param_1 = CONCAT44(fVar6 * (float)((ulong)uVar2 >> 0x20),fVar4 * (float)uVar2);
      *(float *)(param_1 + 1) = fVar5 * fVar1;
      return param_1;
    }
    if (*(int *)(puVar7 + 0x13) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_get_aabb","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",
                   0xae1,"Parameter \"decal\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererRD::TextureStorage::decal_get_cull_mask(RID) const */

undefined4 __thiscall
RendererRD::TextureStorage::decal_get_cull_mask(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x98);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x48);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_get_cull_mask",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xae8,
                   "Parameter \"decal\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::canvas_texture_set_shading_parameters(RID, Color const&, float) */

void __thiscall
RendererRD::TextureStorage::canvas_texture_set_shading_parameters
          (undefined4 param_1,TextureStorage *this,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xcc))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90 +
            *(long *)(*(long *)(this + 0xb8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 200)) * 8);
    if (*(int *)(lVar3 + 0x88) == (int)(param_3 >> 0x20)) {
      uVar1 = param_4[1];
      uVar2 = param_4[2];
      *(undefined4 *)(lVar3 + 0x18) = *param_4;
      *(undefined4 *)(lVar3 + 0x1c) = uVar1;
      *(undefined4 *)(lVar3 + 0x20) = uVar2;
      *(undefined4 *)(lVar3 + 0x24) = param_1;
      return;
    }
    if (*(int *)(lVar3 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_texture_set_shading_parameters",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x279,
                   "Parameter \"ct\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::canvas_texture_set_texture_filter(RID,
   RenderingServer::CanvasItemTextureFilter) */

void __thiscall
RendererRD::TextureStorage::canvas_texture_set_texture_filter
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xcc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90 +
            *(long *)(*(long *)(this + 0xb8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 200)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x2c) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_texture_set_texture_filter",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x283,
                   "Parameter \"ct\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::canvas_texture_set_texture_repeat(RID,
   RenderingServer::CanvasItemTextureRepeat) */

void __thiscall
RendererRD::TextureStorage::canvas_texture_set_texture_repeat
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xcc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90 +
            *(long *)(*(long *)(this + 0xb8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 200)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x30) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("canvas_texture_set_texture_repeat",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x28a,
                   "Parameter \"ct\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_size_with_proxy(RID) */

void __thiscall
RendererRD::TextureStorage::texture_size_with_proxy(TextureStorage *this,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    iVar2 = *(int *)(lVar3 + 0x110);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x58);
      local_18 = CONCAT44((int)uVar1,(int)((ulong)uVar1 >> 0x20));
      goto LAB_00102518;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  local_18 = 0;
LAB_00102518:
  Vector2i::operator_cast_to_Vector2((Vector2i *)&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::texture_get_native_handle(RID, bool) const */

undefined8 __thiscall
RendererRD::TextureStorage::texture_get_native_handle
          (TextureStorage *this,ulong param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x124)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
              *(long *)(*(long *)(this + 0x110) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
      if (*(int *)(lVar2 + 0x110) == (int)(param_2 >> 0x20)) {
        if ((param_3 != '\0') && (*(long *)(lVar2 + 0x18) != 0)) {
          uVar1 = RenderingDevice::get_singleton();
          uVar1 = RenderingDevice::get_driver_resource(uVar1,5,*(undefined8 *)(lVar2 + 0x18),0);
          return uVar1;
        }
        uVar1 = RenderingDevice::get_singleton();
        uVar1 = RenderingDevice::get_driver_resource(uVar1,5,*(undefined8 *)(lVar2 + 0x10),0);
        return uVar1;
      }
      if (*(int *)(lVar2 + 0x110) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("texture_get_native_handle",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x6f1,
                   "Parameter \"tex\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::decal_set_size(RID, Vector3 const&) */

void __thiscall
RendererRD::TextureStorage::decal_set_size(TextureStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1dc))) {
    puVar1 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
             *(long *)(*(long *)(this + 0x1c8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8));
    if (*(int *)(puVar1 + 0x13) == (int)(param_2 >> 0x20)) {
      *puVar1 = *param_3;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      Dependency::changed_notify(puVar1 + 0xd,0);
      return;
    }
    if (*(int *)(puVar1 + 0x13) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_size","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",
                   0xa85,"Parameter \"decal\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_set_cull_mask(RID, unsigned int) */

void __thiscall
RendererRD::TextureStorage::decal_set_cull_mask
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1dc))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    if (*(int *)(lVar1 + 0x98) == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x48) = param_3;
      Dependency::changed_notify(lVar1 + 0x68,7);
      return;
    }
    if (*(int *)(lVar1 + 0x98) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_set_cull_mask",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xab6,
                   "Parameter \"decal\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_get_clear_request_color(RID) */

undefined1  [16] __thiscall
RendererRD::TextureStorage::render_target_get_clear_request_color
          (TextureStorage *this,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar2 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(char *)(lVar2 + 0x45) == '\0') {
        local_28 = (float)*(undefined8 *)(lVar2 + 0x13c);
        fStack_24 = (float)((ulong)*(undefined8 *)(lVar2 + 0x13c) >> 0x20);
        fStack_20 = (float)*(undefined8 *)(lVar2 + 0x144);
        uStack_1c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x144) >> 0x20);
        goto LAB_00102964;
      }
      fStack_20 = *(float *)(lVar2 + 0x144);
      uStack_1c = *(undefined4 *)(lVar2 + 0x148);
      if (_LC62 <= fStack_20) {
        fStack_20 = powf((float)(((double)fStack_20 + __LC64) * __LC65),_LC66);
        fStack_24 = *(float *)(lVar2 + 0x140);
        if (fStack_24 < _LC62) goto LAB_0010291e;
LAB_001029c3:
        fStack_24 = powf((float)(((double)fStack_24 + __LC64) * __LC65),_LC66);
        local_28 = *(float *)(lVar2 + 0x13c);
        if (_LC62 <= local_28) {
LAB_00102a1a:
          local_28 = powf((float)(((double)local_28 + __LC64) * __LC65),_LC66);
          goto LAB_00102964;
        }
      }
      else {
        fStack_20 = _LC63 * fStack_20;
        fStack_24 = *(float *)(lVar2 + 0x140);
        if (_LC62 <= fStack_24) goto LAB_001029c3;
LAB_0010291e:
        fStack_24 = _LC63 * fStack_24;
        local_28 = *(float *)(lVar2 + 0x13c);
        if (_LC62 <= local_28) goto LAB_00102a1a;
      }
      local_28 = local_28 * _LC63;
      goto LAB_00102964;
    }
    if (*(int *)(lVar2 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_clear_request_color",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xebb,
                   "Parameter \"rt\" is null.",0,0);
  local_28 = 0.0;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  uStack_1c = 0x3f800000;
LAB_00102964:
  auVar1._4_4_ = fStack_24;
  auVar1._0_4_ = local_28;
  auVar1._8_4_ = fStack_20;
  auVar1._12_4_ = uStack_1c;
  return auVar1;
}



/* RendererRD::TextureStorage::decal_instance_free(RID) */

undefined1  [16] __thiscall
RendererRD::TextureStorage::decal_instance_free(TextureStorage *this,ulong param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  ulong uStack_30;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar6 = (uint)param_2;
  if (*(uint *)(this + 0x234) <= uVar6) {
LAB_00102c88:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x230)) * 0x50 +
          *(long *)(*(long *)(this + 0x220) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x230)) * 8);
  iVar1 = *(int *)(lVar4 + 0x48);
  if (iVar1 != (int)(param_2 >> 0x20)) {
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    goto LAB_00102c88;
  }
  if (*(code **)(*ForwardIDStorage::singleton + 0x18) == ForwardIDStorage::free_forward_id) {
    if (iVar1 < 0) {
LAB_00102c30:
      lVar4 = 0;
      _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0);
      goto LAB_00102bb0;
    }
  }
  else {
    uStack_30 = 0x102bc9;
    (**(code **)(*ForwardIDStorage::singleton + 0x18))
              (ForwardIDStorage::singleton,3,*(undefined4 *)(lVar4 + 0x40));
    if (*(uint *)(this + 0x234) <= uVar6) {
      uVar5 = 0x161;
LAB_00102c12:
      auVar7 = _err_print_error(&_LC68,"./core/templates/rid_owner.h",uVar5,
                                "Method/function failed.",0,0);
      return auVar7;
    }
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x230)) * 0x50 +
            *(long *)(*(long *)(this + 0x220) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x230)) * 8);
    if (*(int *)(lVar4 + 0x48) < 0) goto LAB_00102c30;
    if (iVar1 != *(int *)(lVar4 + 0x48)) {
      uVar5 = 0x171;
      goto LAB_00102c12;
    }
  }
  *(undefined4 *)(lVar4 + 0x48) = 0xffffffff;
  uVar3 = *(int *)(this + 0x238) - 1;
  *(uint *)(this + 0x238) = uVar3;
  uStack_30 = (ulong)uVar3 % (ulong)*(uint *)(this + 0x230);
  lVar4 = *(long *)(*(long *)(this + 0x228) + ((ulong)uVar3 / (ulong)*(uint *)(this + 0x230)) * 8);
  *(uint *)(lVar4 + uStack_30 * 4) = uVar6;
LAB_00102bb0:
  auVar7._8_8_ = uStack_30;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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
  __n = lVar2 * 0x10;
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



/* CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::_copy_on_write
          (CowData<RendererRD::TextureStorage::DecalAtlas::MipMap> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0x18;
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



/* RendererRD::TextureStorage::canvas_texture_initialize(RID) */

void __thiscall
RendererRD::TextureStorage::canvas_texture_initialize(TextureStorage *this,ulong param_2)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = _LC78;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xcc))) {
    pauVar2 = (undefined1 (*) [16])
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90 +
              *(long *)(*(long *)(this + 0xb8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 200)) * 8));
    if ((int)*(uint *)(pauVar2[8] + 8) < 0) {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar4 == (*(uint *)(pauVar2[8] + 8) & 0x7fffffff)) {
        *(uint *)(pauVar2[8] + 8) = uVar4;
        *(undefined8 *)pauVar2[1] = 0;
        uVar1 = _LC77;
        *(undefined4 *)(pauVar2[2] + 8) = 0x3f800000;
        *(undefined8 *)(pauVar2[2] + 0xc) = 0;
        *(undefined8 *)(pauVar2[6] + 8) = 0;
        *(undefined8 *)pauVar2[7] = 0;
        *(undefined8 *)(pauVar2[7] + 8) = uVar3;
        *(undefined2 *)pauVar2[8] = 0;
        *pauVar2 = (undefined1  [16])0x0;
        *(undefined4 *)(pauVar2[1] + 8) = uVar1;
        *(undefined4 *)(pauVar2[1] + 0xc) = uVar1;
        *(undefined4 *)pauVar2[2] = uVar1;
        *(undefined4 *)(pauVar2[2] + 4) = uVar1;
        *(undefined1 (*) [16])(pauVar2[3] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar2[4] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar2[5] + 8) = (undefined1  [16])0x0;
        return;
      }
      pcVar5 = "Attempting to initialize the wrong RID";
      uVar3 = 0xfc;
    }
    else {
      pcVar5 = "Initializing already initialized RID";
      uVar3 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar3,
                     "Method/function failed. Returning: nullptr",pcVar5,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::canvas_texture_set_channel(RID,
   RenderingServer::CanvasTextureChannel, RID) */

void __thiscall
RendererRD::TextureStorage::canvas_texture_set_channel
          (TextureStorage *this,ulong param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0xcc)) {
      puVar1 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90 +
               *(long *)(*(long *)(this + 0xb8) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 200)) * 8));
      if (*(int *)(puVar1 + 0x11) == (int)(param_2 >> 0x20)) {
        if (param_3 == 1) {
          puVar1[1] = param_4;
        }
        else if (param_3 == 2) {
          puVar1[2] = param_4;
        }
        else if (param_3 == 0) {
          *puVar1 = param_4;
        }
        *(undefined1 (*) [16])(puVar1 + 7) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar1 + 9) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar1 + 0xb) = (undefined1  [16])0x0;
        if ((code *)puVar1[0xd] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00103119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar1[0xd])(0,puVar1[0xe]);
          return;
        }
        return;
      }
      if (*(int *)(puVar1 + 0x11) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("canvas_texture_set_channel",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x267,
                   "Parameter \"ct\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::canvas_texture_free(RID) */

int __thiscall RendererRD::TextureStorage::canvas_texture_free(TextureStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  __mutex = (pthread_mutex_t *)(this + 0xe0);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  if ((uint)param_2 < *(uint *)(this + 0xcc)) {
    uVar1 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 200);
    lVar5 = *(long *)(this + 0xb8);
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90;
    lVar4 = *(long *)(lVar5 + uVar1 * 8) + lVar7;
    if (*(int *)(lVar4 + 0x88) < 0) {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0);
      return 0;
    }
    if ((int)(param_2 >> 0x20) == *(int *)(lVar4 + 0x88)) {
      if (*(code **)(lVar4 + 0x68) != (code *)0x0) {
        (**(code **)(lVar4 + 0x68))(1,*(undefined8 *)(lVar4 + 0x70));
        lVar5 = *(long *)(this + 0xb8);
      }
      lVar4 = *(long *)(this + 0xc0);
      *(undefined4 *)(*(long *)(lVar5 + uVar1 * 8) + 0x88 + lVar7) = 0xffffffff;
      uVar3 = *(int *)(this + 0xd0) - 1;
      *(uint *)(this + 0xd0) = uVar3;
      *(uint *)(*(long *)(lVar4 + ((ulong)uVar3 / (ulong)*(uint *)(this + 200)) * 8) +
               ((ulong)uVar3 % (ulong)*(uint *)(this + 200)) * 4) = (uint)param_2;
      iVar2 = pthread_mutex_unlock(__mutex);
      return iVar2;
    }
    pthread_mutex_unlock(__mutex);
    uVar6 = 0x171;
  }
  else {
    pthread_mutex_unlock(__mutex);
    uVar6 = 0x161;
  }
  iVar2 = _err_print_error(&_LC68,"./core/templates/rid_owner.h",uVar6,"Method/function failed.",0,0
                          );
  return iVar2;
}



/* SortArray<RendererRD::TextureStorage::DecalInstanceSort,
   _DefaultComparator<RendererRD::TextureStorage::DecalInstanceSort>, true>::introsort(long, long,
   RendererRD::TextureStorage::DecalInstanceSort*, long) const [clone .isra.0] */

void SortArray<RendererRD::TextureStorage::DecalInstanceSort,_DefaultComparator<RendererRD::TextureStorage::DecalInstanceSort>,true>
     ::introsort(long param_1,long param_2,DecalInstanceSort *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  DecalInstanceSort *pDVar11;
  long lVar12;
  long lVar13;
  DecalInstanceSort *pDVar14;
  long lVar15;
  DecalInstanceSort *pDVar16;
  DecalInstanceSort *pDVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  long local_58;
  
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar19 = param_2;
    local_58 = param_4;
LAB_001033a7:
    local_58 = local_58 + -1;
    fVar1 = *(float *)(param_3 + param_1 * 0x18);
    fVar2 = *(float *)(param_3 + ((lVar13 >> 1) + param_1) * 0x18);
    fVar3 = *(float *)(param_3 + lVar19 * 0x18 + -0x18);
    if (fVar2 <= fVar1) {
      fVar20 = fVar1;
      if ((fVar3 <= fVar1) && (fVar20 = fVar3, fVar3 <= fVar2)) {
        fVar20 = fVar2;
      }
    }
    else {
      fVar20 = fVar2;
      if ((fVar3 <= fVar2) && (fVar20 = fVar3, fVar3 <= fVar1)) {
        fVar20 = fVar1;
      }
    }
    lVar13 = lVar19;
    pDVar14 = param_3 + param_1 * 0x18;
    param_2 = param_1;
    do {
      if (*(float *)pDVar14 <= fVar20 && fVar20 != *(float *)pDVar14) {
        if (lVar19 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0);
          goto LAB_0010342c;
        }
      }
      else {
LAB_0010342c:
        lVar13 = lVar13 + -1;
        pDVar16 = param_3 + lVar13 * 0x18;
        if (fVar20 < *(float *)pDVar16) {
          pDVar17 = param_3 + lVar13 * 0x18 + -0x18;
          while (param_1 != lVar13) {
            lVar13 = lVar13 + -1;
            pDVar16 = pDVar17;
            if (*(float *)pDVar17 <= fVar20) goto LAB_001034ac;
            pDVar17 = pDVar17 + -0x18;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0);
        }
LAB_001034ac:
        if (lVar13 <= param_2) goto LAB_001034e0;
        uVar6 = *(undefined8 *)(pDVar16 + 8);
        auVar4 = *(undefined1 (*) [16])(pDVar14 + 8);
        fVar1 = *(float *)pDVar14;
        *(undefined8 *)pDVar14 = *(undefined8 *)pDVar16;
        *(undefined8 *)(pDVar14 + 8) = uVar6;
        *(undefined8 *)(pDVar14 + 0x10) = *(undefined8 *)(pDVar16 + 0x10);
        *(float *)pDVar16 = fVar1;
        *(undefined1 (*) [16])(pDVar16 + 8) = auVar4;
      }
      pDVar14 = pDVar14 + 0x18;
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_001035ac:
  lVar18 = lVar13 + -2 >> 1;
  lVar19 = lVar18 * 2 + 2;
  pDVar14 = param_3 + (param_1 + lVar18) * 0x18;
  do {
    fVar1 = *(float *)pDVar14;
    uVar6 = *(undefined8 *)(pDVar14 + 8);
    uVar7 = *(undefined8 *)(pDVar14 + 0x10);
    lVar9 = lVar19;
    lVar15 = lVar18;
    if (lVar19 < lVar13) {
      do {
        pDVar17 = param_3 + (param_1 + lVar9) * 0x18;
        fVar2 = *(float *)(param_3 + (param_1 + lVar9 + -1) * 0x18);
        lVar10 = lVar9 + -1;
        lVar12 = lVar9;
        pDVar16 = param_3 + (param_1 + lVar9 + -1) * 0x18;
        if (fVar2 < *(float *)pDVar17 || fVar2 == *(float *)pDVar17) {
          lVar12 = lVar9 + 1;
          lVar10 = lVar9;
          pDVar16 = pDVar17;
        }
        uVar8 = *(undefined8 *)(pDVar16 + 8);
        lVar9 = lVar12 * 2;
        pDVar17 = param_3 + (lVar15 + param_1) * 0x18;
        *(undefined8 *)pDVar17 = *(undefined8 *)pDVar16;
        *(undefined8 *)(pDVar17 + 8) = uVar8;
        *(undefined8 *)(pDVar17 + 0x10) = *(undefined8 *)(pDVar16 + 0x10);
        lVar15 = lVar10;
      } while (lVar13 != lVar9 && SBORROW8(lVar13,lVar9) == lVar13 + lVar12 * -2 < 0);
      pDVar17 = pDVar16;
      if (lVar13 == lVar9) {
LAB_00103827:
        lVar10 = lVar9 + -1;
        pDVar16 = param_3 + (param_1 + lVar10) * 0x18;
        uVar8 = *(undefined8 *)(pDVar16 + 8);
        *(undefined8 *)pDVar17 = *(undefined8 *)pDVar16;
        *(undefined8 *)(pDVar17 + 8) = uVar8;
        *(undefined8 *)(pDVar17 + 0x10) = *(undefined8 *)(pDVar16 + 0x10);
      }
      lVar9 = lVar10 + -1;
      if (lVar10 <= lVar18) goto LAB_00103885;
      do {
        lVar15 = lVar9 >> 1;
        pDVar16 = param_3 + (param_1 + lVar15) * 0x18;
        pDVar17 = param_3 + (lVar10 + param_1) * 0x18;
        if (fVar1 < *(float *)pDVar16 || fVar1 == *(float *)pDVar16) {
          *(float *)pDVar17 = fVar1;
          *(undefined8 *)(pDVar17 + 8) = uVar6;
          *(undefined8 *)(pDVar17 + 0x10) = uVar7;
          goto joined_r0x001036b5;
        }
        uVar8 = *(undefined8 *)(pDVar16 + 8);
        *(undefined8 *)pDVar17 = *(undefined8 *)pDVar16;
        *(undefined8 *)(pDVar17 + 8) = uVar8;
        *(undefined8 *)(pDVar17 + 0x10) = *(undefined8 *)(pDVar16 + 0x10);
        lVar9 = (lVar15 + -1) - (lVar15 + -1 >> 0x3f);
        lVar10 = lVar15;
      } while (lVar18 < lVar15);
      *(float *)pDVar16 = fVar1;
      *(undefined8 *)(pDVar16 + 8) = uVar6;
      *(undefined8 *)(pDVar16 + 0x10) = uVar7;
joined_r0x001036b5:
      if (lVar18 == 0) goto LAB_001036d8;
    }
    else {
      pDVar17 = pDVar14;
      pDVar16 = pDVar14;
      if (lVar19 == lVar13) goto LAB_00103827;
LAB_00103885:
      *(float *)pDVar16 = fVar1;
      *(undefined8 *)(pDVar16 + 8) = uVar6;
      *(undefined8 *)(pDVar16 + 0x10) = uVar7;
    }
    lVar18 = lVar18 + -1;
    pDVar14 = pDVar14 + -0x18;
    lVar19 = lVar19 + -2;
  } while( true );
LAB_001034e0:
  introsort(param_2,lVar19,param_3,local_58);
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  lVar19 = param_2;
  if (local_58 == 0) goto LAB_001035ac;
  goto LAB_001033a7;
LAB_001036d8:
  pDVar14 = param_3 + param_1 * 0x18;
  pDVar16 = param_3 + param_2 * 0x18 + -0x18;
  lVar13 = (param_2 + -1) - param_1;
LAB_001036f8:
  do {
    uVar6 = *(undefined8 *)(pDVar14 + 8);
    uVar7 = *(undefined8 *)(pDVar16 + 8);
    uVar8 = *(undefined8 *)(pDVar16 + 0x10);
    fVar1 = *(float *)pDVar16;
    *(undefined8 *)pDVar16 = *(undefined8 *)pDVar14;
    *(undefined8 *)(pDVar16 + 8) = uVar6;
    *(undefined8 *)(pDVar16 + 0x10) = *(undefined8 *)(pDVar14 + 0x10);
    if (lVar13 < 3) {
      if (lVar13 != 2) {
        *(float *)pDVar14 = fVar1;
        *(undefined8 *)(pDVar14 + 8) = uVar7;
        *(undefined8 *)(pDVar14 + 0x10) = uVar8;
        return;
      }
      lVar18 = 0;
      lVar19 = 1;
      pDVar17 = pDVar14;
LAB_00103864:
      lVar15 = param_1 + lVar19;
      pDVar11 = param_3 + lVar15 * 0x18;
      uVar6 = *(undefined8 *)(pDVar11 + 8);
      *(undefined8 *)pDVar17 = *(undefined8 *)pDVar11;
      *(undefined8 *)(pDVar17 + 8) = uVar6;
      *(undefined8 *)(pDVar17 + 0x10) = *(undefined8 *)(pDVar11 + 0x10);
    }
    else {
      lVar19 = 2;
      lVar18 = 0;
      do {
        fVar2 = *(float *)(param_3 + (param_1 + lVar19 + -1) * 0x18);
        pDVar11 = param_3 + (param_1 + lVar19) * 0x18;
        lVar9 = lVar19 + -1;
        lVar15 = lVar19;
        pDVar17 = param_3 + (param_1 + lVar19 + -1) * 0x18;
        if (fVar2 < *(float *)pDVar11 || fVar2 == *(float *)pDVar11) {
          lVar15 = lVar19 + 1;
          lVar9 = lVar19;
          pDVar17 = pDVar11;
        }
        uVar6 = *(undefined8 *)(pDVar17 + 8);
        lVar19 = lVar15 * 2;
        pDVar11 = param_3 + (param_1 + lVar18) * 0x18;
        *(undefined8 *)pDVar11 = *(undefined8 *)pDVar17;
        *(undefined8 *)(pDVar11 + 8) = uVar6;
        *(undefined8 *)(pDVar11 + 0x10) = *(undefined8 *)(pDVar17 + 0x10);
        lVar18 = lVar9;
      } while (lVar13 != lVar19 && SBORROW8(lVar13,lVar19) == lVar13 + lVar15 * -2 < 0);
      if (lVar13 == lVar19) {
        lVar19 = lVar13 + -1;
        lVar18 = lVar13 + -2 >> 1;
        goto LAB_00103864;
      }
      lVar15 = param_1 + lVar9;
      lVar19 = lVar13 + -1;
      lVar18 = (lVar9 + -1) / 2;
      if (lVar9 < 1) {
        *(float *)pDVar17 = fVar1;
        pDVar16 = pDVar16 + -0x18;
        *(undefined8 *)(pDVar17 + 8) = uVar7;
        *(undefined8 *)(pDVar17 + 0x10) = uVar8;
        lVar13 = lVar19;
        goto LAB_001036f8;
      }
    }
    while( true ) {
      pDVar17 = param_3 + (param_1 + lVar18) * 0x18;
      pDVar11 = param_3 + lVar15 * 0x18;
      if (fVar1 < *(float *)pDVar17 || fVar1 == *(float *)pDVar17) break;
      uVar6 = *(undefined8 *)(pDVar17 + 8);
      *(undefined8 *)pDVar11 = *(undefined8 *)pDVar17;
      *(undefined8 *)(pDVar11 + 8) = uVar6;
      *(undefined8 *)(pDVar11 + 0x10) = *(undefined8 *)(pDVar17 + 0x10);
      pDVar11 = pDVar17;
      if (lVar18 == 0) break;
      lVar15 = param_1 + lVar18;
      lVar18 = (lVar18 + -1) / 2;
    }
    *(float *)pDVar11 = fVar1;
    pDVar16 = pDVar16 + -0x18;
    *(undefined8 *)(pDVar11 + 8) = uVar7;
    *(undefined8 *)(pDVar11 + 0x10) = uVar8;
    bVar5 = lVar13 < 2;
    lVar13 = lVar19;
    if (bVar5) {
      return;
    }
  } while( true );
}



/* RendererRD::TextureStorage::decal_free(RID) */

ulong __thiscall RendererRD::TextureStorage::decal_free(TextureStorage *this,ulong param_2)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = (uint)param_2;
  iVar6 = (int)(param_2 >> 0x20);
  if (param_2 != 0) {
    if (uVar4 < *(uint *)(this + 0x1dc)) {
      lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
              *(long *)(*(long *)(this + 0x1c8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
      if (*(int *)(lVar8 + 0x98) == iVar6) goto LAB_00103936;
      if (*(int *)(lVar8 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  lVar8 = 0;
LAB_00103936:
  lVar7 = 0;
  ppVar1 = (pthread_mutex_t *)(this + 0x138);
  do {
    uVar5 = *(ulong *)(lVar8 + 0x10 + lVar7 * 8);
    if (uVar5 != 0) {
      iVar2 = pthread_mutex_lock(ppVar1);
      if (iVar2 != 0) goto LAB_00103bd8;
      if ((uint)uVar5 < *(uint *)(this + 0x124)) {
        if ((uVar5 >> 0x20 == 0x7fffffff) ||
           ((*(uint *)(((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                       *(long *)(*(long *)(this + 0x110) +
                                ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8) + 0x110
                      ) & 0x7fffffff) != (uint)(uVar5 >> 0x20))) {
          pthread_mutex_unlock(ppVar1);
        }
        else {
          pthread_mutex_unlock(ppVar1);
          (**(code **)(*(long *)this + 0x1c0))
                    (this,*(undefined8 *)(lVar8 + 0x10 + (long)(int)lVar7 * 8),0);
        }
      }
      else {
        pthread_mutex_unlock(ppVar1);
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  Dependency::deleted_notify((RID *)(lVar8 + 0x68));
  ppVar1 = (pthread_mutex_t *)(this + 0x1f0);
  iVar2 = pthread_mutex_lock(ppVar1);
  if (iVar2 == 0) {
    if (uVar4 < *(uint *)(this + 0x1dc)) {
      uVar5 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8);
      lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0;
      lVar8 = *(long *)(*(long *)(this + 0x1c8) + uVar5 * 8) + lVar7;
      iVar2 = *(int *)(lVar8 + 0x98);
      if (iVar2 < 0) {
        pthread_mutex_unlock(ppVar1);
        uVar5 = 0;
        _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0);
      }
      else if (iVar6 == iVar2) {
        Dependency::~Dependency((Dependency *)(lVar8 + 0x68));
        lVar8 = *(long *)(this + 0x1d0);
        *(undefined4 *)(*(long *)(*(long *)(this + 0x1c8) + uVar5 * 8) + 0x98 + lVar7) = 0xffffffff;
        uVar3 = *(int *)(this + 0x1e0) - 1;
        *(uint *)(this + 0x1e0) = uVar3;
        *(uint *)(*(long *)(lVar8 + ((ulong)uVar3 / (ulong)*(uint *)(this + 0x1d8)) * 8) +
                 ((ulong)uVar3 % (ulong)*(uint *)(this + 0x1d8)) * 4) = uVar4;
        uVar4 = pthread_mutex_unlock(ppVar1);
        uVar5 = (ulong)uVar4;
      }
      else {
        pthread_mutex_unlock(ppVar1);
        uVar5 = _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x171,
                                 "Method/function failed.",0,0);
      }
    }
    else {
      pthread_mutex_unlock(ppVar1);
      uVar5 = _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x161,"Method/function failed."
                               ,0,0);
    }
    return uVar5;
  }
LAB_00103bd8:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_ref(CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>
   const&) [clone .part.0] */

void __thiscall
CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_ref
          (CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *this,CowData *param_1)

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



/* RendererRD::TextureStorage::decal_set_texture(RID, RenderingServer::DecalTexture, RID) */

void __thiscall
RendererRD::TextureStorage::decal_set_texture
          (TextureStorage *this,ulong param_2,uint param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  pthread_mutex_t *ppVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1dc))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    if (*(int *)(lVar4 + 0x98) == (int)(param_2 >> 0x20)) {
      if (3 < param_3) {
        _err_print_index_error
                  ("decal_set_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xa8d,
                   (ulong)param_3,4,"p_type","RenderingServer::DECAL_TEXTURE_MAX","",false,false);
        return;
      }
      lVar6 = (long)(int)param_3;
      uVar5 = *(ulong *)(lVar4 + (lVar6 + 2) * 8);
      if (param_4 == uVar5) {
        return;
      }
      if (param_4 == 0) {
        if (uVar5 == 0) {
          *(undefined8 *)(lVar4 + (lVar6 + 2) * 8) = 0;
          goto LAB_00103d05;
        }
LAB_00103d28:
        ppVar7 = (pthread_mutex_t *)(this + 0x138);
        iVar1 = pthread_mutex_lock(ppVar7);
        if (iVar1 != 0) {
LAB_00103f76:
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar1);
        }
        if ((uint)uVar5 < *(uint *)(this + 0x124)) {
          if ((uVar5 >> 0x20 == 0x7fffffff) ||
             ((*(uint *)(((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                         *(long *)(*(long *)(this + 0x110) +
                                  ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8) +
                        0x110) & 0x7fffffff) != (uint)(uVar5 >> 0x20))) {
            pthread_mutex_unlock(ppVar7);
          }
          else {
            pthread_mutex_unlock(ppVar7);
            (**(code **)(*(long *)this + 0x1c0))(this,*(undefined8 *)(lVar4 + 0x10 + lVar6 * 8),0);
          }
        }
        else {
          pthread_mutex_unlock(ppVar7);
        }
        *(ulong *)(lVar4 + 0x10 + lVar6 * 8) = param_4;
        if (param_4 == 0) goto LAB_00103d05;
      }
      else {
        ppVar7 = (pthread_mutex_t *)(this + 0x138);
        iVar1 = pthread_mutex_lock(ppVar7);
        if (iVar1 != 0) goto LAB_00103f76;
        if (((*(uint *)(this + 0x124) <= (uint)param_4) || (param_4 >> 0x20 == 0x7fffffff)) ||
           ((*(uint *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                       *(long *)(*(long *)(this + 0x110) +
                                ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8) +
                      0x110) & 0x7fffffff) != (uint)(param_4 >> 0x20))) {
          pthread_mutex_unlock(ppVar7);
          uVar3 = 0xa93;
          pcVar2 = "Condition \"p_texture.is_valid() && !owns_texture(p_texture)\" is true.";
          goto LAB_00103e5a;
        }
        pthread_mutex_unlock(ppVar7);
        uVar5 = *(ulong *)(lVar4 + (lVar6 + 2) * 8);
        if (uVar5 != 0) goto LAB_00103d28;
        *(ulong *)(lVar4 + (lVar6 + 2) * 8) = param_4;
      }
      (**(code **)(*(long *)this + 0x1b8))(this,*(undefined8 *)(lVar4 + 0x10 + lVar6 * 8),0);
LAB_00103d05:
      Dependency::changed_notify(lVar4 + 0x68,7);
      return;
    }
    if (*(int *)(lVar4 + 0x98) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar3 = 0xa8c;
  pcVar2 = "Parameter \"decal\" is null.";
LAB_00103e5a:
  _err_print_error("decal_set_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar3,pcVar2,0,0);
  return;
}



/* CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write
          (CowData<RendererRD::TextureStorage::DecalAtlas::SortItem> *this)

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
  __n = lVar2 * 0x20;
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



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* RendererRD::TextureStorage::texture_set_path(RID, String const&) */

void __thiscall
RendererRD::TextureStorage::texture_set_path(TextureStorage *this,ulong param_2,CowData *param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    if (*(int *)(lVar1 + 0x110) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar1 + 0x90) != *(long *)param_3) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(lVar1 + 0x90),param_3);
        return;
      }
      return;
    }
    if (*(int *)(lVar1 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_set_path","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp"
                   ,0x641,"Parameter \"tex\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_get_path(RID) const */

CowData<char32_t> *
RendererRD::TextureStorage::texture_get_path(CowData<char32_t> *param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x124))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
            *(long *)(*(long *)(param_2 + 0x110) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
    if (*(int *)(lVar1 + 0x110) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)param_1 = 0;
      if (*(long *)(lVar1 + 0x90) != 0) {
        CowData<char32_t>::_ref(param_1,(CowData *)(lVar1 + 0x90));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_get_path","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp"
                   ,0x648,"Parameter \"tex\" is null.",0,0);
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* HashMap<RID, RendererRD::TextureStorage::DecalAtlas::Texture, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RendererRD::TextureStorage::DecalAtlas::Texture> > >::erase(RID const&) [clone .isra.0] */

void __thiscall
HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
::erase(HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
        *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
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
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(this + 0x10);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = *(long *)param_1 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar32 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar32 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar8;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    uVar29 = SUB168(auVar11 * auVar20,8);
    uVar37 = *(uint *)(lVar7 + uVar29 * 4);
    uVar33 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar37 != 0) {
      uVar36 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        uVar31 = SUB168(auVar14 * auVar23,8);
        uVar30 = SUB164(auVar14 * auVar23,8);
        if (((uint)uVar32 == uVar37) &&
           (*(long *)param_1 == *(long *)(*(long *)(lVar6 + uVar29 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar7 + uVar31 * 4);
          uVar37 = *puVar38;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar35, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar15 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar35, uVar29 = (ulong)uVar30, uVar32 = uVar33,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar33 = uVar29;
              puVar1 = (uint *)(lVar7 + uVar32 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar6 + uVar32 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar35;
              uVar31 = SUB168(auVar19 * auVar28,8);
              puVar38 = (uint *)(lVar7 + uVar31 * 4);
              uVar37 = *puVar38;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar35, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) *
                      lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar35,
                 SUB164(auVar18 * auVar27,8) == 0)) break;
              uVar29 = uVar31 & 0xffffffff;
              uVar32 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar7 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar34) goto LAB_001045d9;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_001045d9:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x001045e0;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x001045e0:
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar37 = *(uint *)(lVar7 + uVar31 * 4);
        uVar33 = uVar31 & 0xffffffff;
        uVar36 = uVar36 + 1;
      } while ((uVar37 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar37 * lVar8, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar35, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar12 * auVar21,8)) * lVar8,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar35, uVar29 = uVar31,
              uVar36 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* RendererRD::TextureStorage::texture_remove_from_decal_atlas(RID, bool) */

void __thiscall
RendererRD::TextureStorage::texture_remove_from_decal_atlas
          (TextureStorage *this,long param_2,char param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long local_40 [2];
  
  lVar1 = *(long *)(this + 0x168);
  local_40[0] = param_2;
  if ((lVar1 != 0) && (*(int *)(this + 0x18c) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x188) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
    uVar12 = param_2 * 0x3ffff - 1;
    uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
    uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
    uVar12 = uVar12 >> 0x16 ^ uVar12;
    uVar15 = uVar12 & 0xffffffff;
    if ((int)uVar12 == 0) {
      uVar15 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar15 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x170) + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar18 = 0;
      do {
        if ((uVar16 == (uint)uVar15) && (param_2 == *(long *)(*(long *)(lVar1 + lVar14 * 8) + 0x10))
           ) {
          lVar1 = *(long *)(lVar1 + (ulong)uVar13 * 8);
          iVar11 = *(int *)(lVar1 + 0x1c) + -1;
          *(int *)(lVar1 + 0x1c) = iVar11;
          if (param_3 != '\0') {
            if (*(int *)(lVar1 + 0x18) == 0) {
              _err_print_error("texture_remove_from_decal_atlas",
                               "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xbcb,
                               "Condition \"t->panorama_to_dp_users == 0\" is true.",0,0);
              return;
            }
            *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
          }
          if (iVar11 != 0) {
            return;
          }
          HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
          ::erase((HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
                   *)(this + 0x160),(RID *)local_40);
          return;
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x170) + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x188) * 4) + uVar13) -
                                    SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("texture_remove_from_decal_atlas",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xbc8,
                   "Parameter \"t\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::texture_debug_usage(List<RenderingServer::TextureInfo,
   DefaultAllocator>*) */

void __thiscall RendererRD::TextureStorage::texture_debug_usage(TextureStorage *this,List *param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  int *piVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_58;
  long local_50;
  long local_48;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x138);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  pauVar12 = (undefined1 (*) [16])0x0;
  uVar14 = 0;
  if (*(int *)(this + 0x124) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    do {
      uVar2 = *(uint *)((uVar14 % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                        *(long *)(*(long *)(this + 0x110) + (uVar14 / *(uint *)(this + 0x120)) * 8)
                       + 0x110);
      if (uVar2 != 0xffffffff) {
        if (pauVar12 == (undefined1 (*) [16])0x0) {
          pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar12[1] = 0;
          *pauVar12 = (undefined1  [16])0x0;
        }
        puVar7 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar3 = *(ulong *)(*pauVar12 + 8);
        puVar7[1] = 0;
        *puVar7 = (ulong)uVar2 << 0x20 | uVar14;
        puVar7[2] = uVar3;
        puVar7[3] = (ulong)pauVar12;
        if (uVar3 != 0) {
          *(ulong **)(uVar3 + 8) = puVar7;
        }
        lVar10 = *(long *)*pauVar12;
        *(ulong **)(*pauVar12 + 8) = puVar7;
        if (lVar10 == 0) {
          *(ulong **)*pauVar12 = puVar7;
        }
        *(int *)pauVar12[1] = *(int *)pauVar12[1] + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(this + 0x124));
    pthread_mutex_unlock(__mutex);
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      for (puVar7 = *(ulong **)*pauVar12; puVar7 != (ulong *)0x0; puVar7 = (ulong *)puVar7[1]) {
        if (*puVar7 != 0) {
          uVar14 = *puVar7;
          if ((uint)uVar14 < *(uint *)(this + 0x124)) {
            piVar13 = (int *)(((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                             *(long *)(*(long *)(this + 0x110) +
                                      ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8))
            ;
            if (piVar13[0x44] == (int)(uVar14 >> 0x20)) {
              lVar10 = *(long *)(piVar13 + 0x24);
              local_48 = 0;
              if (lVar10 != 0) {
                plVar1 = (long *)(lVar10 + -0x10);
                do {
                  lVar5 = *plVar1;
                  lVar10 = local_48;
                  if (lVar5 == 0) goto LAB_00104b20;
                  LOCK();
                  lVar9 = *plVar1;
                  bVar15 = lVar5 == lVar9;
                  if (bVar15) {
                    *plVar1 = lVar5 + 1;
                    lVar9 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar15);
                if (lVar9 != -1) {
                  local_48 = *(long *)(piVar13 + 0x24);
                  lVar10 = local_48;
                }
              }
LAB_00104b20:
              uVar14 = *(ulong *)(piVar13 + 0x11);
              iVar6 = piVar13[0xf];
              local_50 = Image::get_image_data_size(uVar14 & 0xffffffff,uVar14 >> 0x20,iVar6);
              if (*piVar13 == 1) {
                local_58 = piVar13[0x14];
                local_50 = local_50 * local_58;
              }
              else if (*piVar13 == 2) {
                local_58 = piVar13[0x13];
                local_50 = local_50 * local_58;
              }
              else {
                local_58 = 0;
              }
              if (*(long *)param_1 == 0) {
                pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined1 (**) [16])param_1 = pauVar11;
                *(undefined4 *)pauVar11[1] = 0;
                *pauVar11 = (undefined1  [16])0x0;
              }
              puVar8 = (undefined8 *)operator_new(0x40,DefaultAllocator::alloc);
              *(undefined1 (*) [16])(puVar8 + 4) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar8 + 6) = (undefined1  [16])0x0;
              *(int *)(puVar8 + 2) = local_58;
              *puVar8 = 0;
              *(int *)((long)puVar8 + 0x14) = iVar6;
              puVar8[1] = uVar14;
              puVar8[3] = local_50;
              if (lVar10 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 4),(CowData *)&local_48);
              }
              plVar1 = *(long **)param_1;
              lVar5 = plVar1[1];
              puVar8[5] = 0;
              puVar8[7] = plVar1;
              puVar8[6] = lVar5;
              if (lVar5 != 0) {
                *(undefined8 **)(lVar5 + 0x28) = puVar8;
              }
              plVar1[1] = (long)puVar8;
              if (*plVar1 == 0) {
                *plVar1 = (long)puVar8;
              }
              *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
              if (lVar10 != 0) {
                LOCK();
                plVar1 = (long *)(lVar10 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_48 + -0x10),false);
                }
              }
            }
            else if (piVar13[0x44] + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
        }
      }
      if (pauVar12 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar4 = *(void **)*pauVar12;
            if (pvVar4 == (void *)0x0) {
              if (*(int *)pauVar12[1] != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  return;
                }
                goto LAB_00104dd6;
              }
              goto LAB_00104c18;
            }
            if (*(undefined1 (**) [16])((long)pvVar4 + 0x18) != pauVar12) break;
            lVar10 = *(long *)((long)pvVar4 + 8);
            lVar5 = *(long *)((long)pvVar4 + 0x10);
            *(long *)*pauVar12 = lVar10;
            if (pvVar4 == *(void **)(*pauVar12 + 8)) {
              *(long *)(*pauVar12 + 8) = lVar5;
            }
            if (lVar5 != 0) {
              *(long *)(lVar5 + 8) = lVar10;
              lVar10 = *(long *)((long)pvVar4 + 8);
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x10) = lVar5;
            }
            Memory::free_static(pvVar4,false);
            pauVar11 = pauVar12 + 1;
            *(int *)*pauVar11 = *(int *)*pauVar11 + -1;
            if (*(int *)*pauVar11 == 0) goto LAB_00104c18;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar12[1] != 0);
LAB_00104c18:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar12,false);
          return;
        }
        goto LAB_00104dd6;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00104dd6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_copy_on_write
          (CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *this)

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
  __n = lVar2 * 0x10;
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



/* CowData<RenderingDeviceCommons::DataFormat>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::DataFormat>::_copy_on_write
          (CowData<RenderingDeviceCommons::DataFormat> *this)

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
  __n = lVar2 * 4;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00105436:
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + -8);
    if (param_1 == lVar7) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar7 == 0) goto LAB_00105436;
    uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    lVar4 = (uVar3 | uVar3 >> 0x20) + 1;
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00105490:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
    }
    puVar5[-1] = param_1;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_0011e498();
      return;
    }
  }
  else {
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00105490;
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
  return;
}



/* RendererRD::TextureStorage::CanvasTexture::clear_cache() */

void __thiscall RendererRD::TextureStorage::CanvasTexture::clear_cache(CanvasTexture *this)

{
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  if (*(code **)(this + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00105513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x68))(0,*(undefined8 *)(this + 0x70));
    return;
  }
  return;
}



/* RendererRD::TextureStorage::CanvasTexture::~CanvasTexture() */

void __thiscall RendererRD::TextureStorage::CanvasTexture::~CanvasTexture(CanvasTexture *this)

{
  if (*(code **)(this + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00105536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x68))(1,*(undefined8 *)(this + 0x70));
    return;
  }
  return;
}



/* RendererRD::TextureStorage::Texture::cleanup() */

void __thiscall RendererRD::TextureStorage::Texture::cleanup(Texture *this)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::texture_is_valid(uVar3,*(undefined8 *)(this + 0x18));
  if (cVar2 != '\0') {
    uVar3 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar3,*(undefined8 *)(this + 0x18));
  }
  uVar3 = RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::texture_is_valid(uVar3);
  if (cVar2 != '\0') {
    uVar3 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar3);
  }
  pvVar1 = *(void **)(this + 0x108);
  if (pvVar1 != (void *)0x0) {
    if (*(code **)((long)pvVar1 + 0x68) != (code *)0x0) {
      (**(code **)((long)pvVar1 + 0x68))(1);
    }
    Memory::free_static(pvVar1,false);
    return;
  }
  return;
}



/* RendererRD::TextureStorage::get_singleton() */

undefined8 RendererRD::TextureStorage::get_singleton(void)

{
  return singleton;
}



/* RendererRD::TextureStorage::free(RID) */

undefined8 __thiscall RendererRD::TextureStorage::free(TextureStorage *this,ulong param_2)

{
  pthread_mutex_t *ppVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  ppVar1 = (pthread_mutex_t *)(this + 0x138);
  iVar2 = pthread_mutex_lock(ppVar1);
  if (iVar2 != 0) {
LAB_001058df:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  uVar5 = (uint)param_2;
  uVar6 = param_2 & 0xffffffff;
  uVar3 = (uint)(param_2 >> 0x20);
  if (((uVar5 < *(uint *)(this + 0x124)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                 *(long *)(*(long *)(this + 0x110) +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8) + 0x110) &
      0x7fffffff) == uVar3)) {
    pthread_mutex_unlock(ppVar1);
    (**(code **)(*(long *)this + 0x50))(this,param_2);
    return 1;
  }
  __mutex = (pthread_mutex_t *)(this + 0xe0);
  pthread_mutex_unlock(ppVar1);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) goto LAB_001058df;
  if (((uVar5 < *(uint *)(this + 0xcc)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)((uVar6 % (ulong)*(uint *)(this + 200)) * 0x90 +
                 *(long *)(*(long *)(this + 0xb8) + (uVar6 / *(uint *)(this + 200)) * 8) + 0x88) &
      0x7fffffff) == uVar3)) {
    pthread_mutex_unlock(__mutex);
    (**(code **)(*(long *)this + 0x10))(this,param_2);
    return 1;
  }
  ppVar1 = (pthread_mutex_t *)(this + 0x1f0);
  pthread_mutex_unlock(__mutex);
  iVar2 = pthread_mutex_lock(ppVar1);
  if (iVar2 != 0) goto LAB_001058df;
  if (uVar5 < *(uint *)(this + 0x1dc)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(ppVar1);
      return 0;
    }
    if ((*(uint *)((uVar6 % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x1c8) + (uVar6 / *(uint *)(this + 0x1d8)) * 8) + 0x98
                  ) & 0x7fffffff) == uVar3) {
      pthread_mutex_unlock(ppVar1);
      (**(code **)(*(long *)this + 0x158))(this,param_2);
      return 1;
    }
    pthread_mutex_unlock(ppVar1);
    if (*(uint *)(this + 0x234) <= uVar5) {
      if (*(uint *)(this + 0x2ac) <= uVar5) {
        return 0;
      }
      uVar5 = (uint)(uVar6 / *(uint *)(this + 0x2a8));
      uVar4 = (uint)(uVar6 % (ulong)*(uint *)(this + 0x2a8));
      goto LAB_001057b3;
    }
  }
  else {
    pthread_mutex_unlock(ppVar1);
    if (*(uint *)(this + 0x234) <= uVar5) {
      if (*(uint *)(this + 0x2ac) <= uVar5) {
        return 0;
      }
      uVar5 = (uint)(uVar6 / *(uint *)(this + 0x2a8));
      uVar4 = (uint)(uVar6 % (ulong)*(uint *)(this + 0x2a8));
      if (param_2 >> 0x20 == 0x7fffffff) {
        return 0;
      }
      goto LAB_001057b3;
    }
    if (param_2 >> 0x20 == 0x7fffffff) {
      return 0;
    }
  }
  if (uVar3 == (*(uint *)((uVar6 % (ulong)*(uint *)(this + 0x230)) * 0x50 +
                          *(long *)(*(long *)(this + 0x220) + (uVar6 / *(uint *)(this + 0x230)) * 8)
                         + 0x48) & 0x7fffffff)) {
    (**(code **)(*(long *)this + 0x1d0))(this,param_2);
    return 1;
  }
  if (*(uint *)(this + 0x2ac) <= uVar5) {
    return 0;
  }
  uVar5 = (uint)(uVar6 / *(uint *)(this + 0x2a8));
  uVar4 = (uint)(uVar6 % (ulong)*(uint *)(this + 0x2a8));
LAB_001057b3:
  if ((*(uint *)((ulong)uVar4 * 0x158 + *(long *)(*(long *)(this + 0x298) + (ulong)uVar5 * 8) +
                0x150) & 0x7fffffff) == uVar3) {
    (**(code **)(*(long *)this + 0x1f0))(this,param_2);
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::canvas_texture_get_info(RID,
   RenderingServer::CanvasItemTextureFilter, RenderingServer::CanvasItemTextureRepeat, bool, bool)
    */

undefined1 (*) [16]
RendererRD::TextureStorage::canvas_texture_get_info
          (undefined1 (*param_1) [16],long param_2,ulong param_3,int param_4,int param_5,
          uint param_6,char param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined1 uVar15;
  int iVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined6 uStack_4e;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = RendererRD::MaterialStorage::get_singleton();
  if (param_3 != 0) {
    iVar16 = (int)(param_3 >> 0x20);
    if ((uint)param_3 < *(uint *)(param_2 + 0x124)) {
      lVar19 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
               *(long *)(*(long *)(param_2 + 0x110) +
                        ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
      if (*(int *)(lVar19 + 0x110) != iVar16) {
        if (*(int *)(lVar19 + 0x110) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00105d50;
      }
      puVar14 = *(ulong **)(lVar19 + 0x108);
      if (puVar14 == (ulong *)0x0) {
        puVar14 = (ulong *)operator_new(0x88,"");
        uVar9 = _LC77;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        *(undefined4 *)(puVar14 + 3) = uVar9;
        *(undefined4 *)((long)puVar14 + 0x1c) = uVar9;
        *(undefined4 *)(puVar14 + 4) = uVar9;
        *(undefined4 *)((long)puVar14 + 0x24) = uVar9;
        puVar14[1] = 0;
        puVar14[2] = 0;
        *(undefined4 *)(puVar14 + 5) = 0x3f800000;
        puVar14[0xd] = 0;
        puVar14[0xe] = 0;
        *(undefined1 (*) [16])(puVar14 + 7) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar14 + 9) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar14 + 0xb) = (undefined1  [16])0x0;
        uVar21 = _LC78;
        *(undefined2 *)(puVar14 + 0x10) = 0;
        puVar14[0xf] = uVar21;
        lVar5 = *(long *)(lVar19 + 0x78);
        *(ulong **)(lVar19 + 0x108) = puVar14;
        *puVar14 = param_3;
      }
      else {
        lVar5 = *(long *)(lVar19 + 0x78);
      }
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x138) = 1;
      }
LAB_001059dd:
      iVar16 = *(int *)((long)puVar14 + 0x2c);
      if ((*(int *)((long)puVar14 + 0x2c) == 0) && (iVar16 = param_4, param_4 == 0)) {
        uVar13 = 0x2a9;
        pcVar18 = 
        "Condition \"filter == RenderingServer::CANVAS_ITEM_TEXTURE_FILTER_DEFAULT\" is true. Returning: CanvasTextureInfo()"
        ;
      }
      else {
        iVar20 = (int)puVar14[6];
        if (((int)puVar14[6] != 0) || (iVar20 = param_5, param_5 != 0)) {
          uVar11 = param_6 & 0xff;
          uVar21 = (ulong)(-param_6 & 0x18);
          puVar1 = (undefined8 *)((long)puVar14 + uVar21 + 0x38);
          uVar13 = RenderingDevice::get_singleton();
          cVar10 = RenderingDevice::texture_is_valid(uVar13,*puVar1);
          if (cVar10 == '\0') {
LAB_00105a3a:
            uVar17 = *puVar14;
            if ((uVar17 == 0) || (*(uint *)(param_2 + 0x124) <= (uint)uVar17)) {
LAB_00105e68:
              puVar14[(long)(int)uVar11 * 3 + 7] = *(ulong *)(param_2 + 0x18);
              uVar17 = puVar14[1];
              puVar14[0xf] = _LC78;
              if (uVar17 == 0) goto LAB_00105e93;
LAB_00105ad1:
              if (*(uint *)(param_2 + 0x124) <= (uint)uVar17) goto LAB_00105e93;
              lVar19 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
                       *(long *)(*(long *)(param_2 + 0x110) +
                                ((uVar17 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
              if (*(int *)(lVar19 + 0x110) != (int)(uVar17 >> 0x20)) {
                if (*(int *)(lVar19 + 0x110) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_00105e93;
              }
              puVar14[(long)(int)uVar11 * 3 + 8] = *(ulong *)(lVar19 + 0x10);
              lVar19 = *(long *)(lVar19 + 0x78);
              *(undefined1 *)(puVar14 + 0x10) = 1;
              if (lVar19 != 0) {
                *(undefined1 *)(lVar19 + 0x138) = 1;
              }
              uVar17 = puVar14[2];
            }
            else {
              lVar19 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
                       *(long *)(*(long *)(param_2 + 0x110) +
                                ((uVar17 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
              if (*(int *)(lVar19 + 0x110) != (int)(uVar17 >> 0x20)) {
                if (*(int *)(lVar19 + 0x110) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_00105e68;
              }
              if (((*(long *)(lVar19 + 0x18) == 0) || (param_7 == '\x01')) ||
                 ((char)param_6 == '\0')) {
                puVar14[(long)(int)uVar11 * 3 + 7] = *(ulong *)(lVar19 + 0x10);
              }
              else {
                puVar14[10] = *(ulong *)(lVar19 + 0x18);
              }
              lVar5 = *(long *)(lVar19 + 0x78);
              puVar14[0xf] = CONCAT44((int)*(undefined8 *)(lVar19 + 0x58),
                                      (int)((ulong)*(undefined8 *)(lVar19 + 0x58) >> 0x20));
              if (lVar5 != 0) {
                *(undefined1 *)(lVar5 + 0x138) = 1;
              }
              uVar17 = puVar14[1];
              if (uVar17 != 0) goto LAB_00105ad1;
LAB_00105e93:
              puVar14[(long)(int)uVar11 * 3 + 8] = *(ulong *)(param_2 + 0x30);
              uVar17 = puVar14[2];
              *(undefined1 *)(puVar14 + 0x10) = 0;
            }
            if (uVar17 != 0) {
              if ((uint)uVar17 < *(uint *)(param_2 + 0x124)) {
                lVar19 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
                         *(long *)(*(long *)(param_2 + 0x110) +
                                  ((uVar17 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
                if (*(int *)(lVar19 + 0x110) == (int)(uVar17 >> 0x20)) {
                  puVar14[(long)(int)uVar11 * 3 + 9] = *(ulong *)(lVar19 + 0x10);
                  lVar19 = *(long *)(lVar19 + 0x78);
                  *(undefined1 *)((long)puVar14 + 0x81) = 1;
                  if (lVar19 != 0) {
                    *(undefined1 *)(lVar19 + 0x138) = 1;
                  }
                  uVar15 = 1;
                  goto LAB_00105baf;
                }
                if (*(int *)(lVar19 + 0x110) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
            }
            uVar15 = 0;
            puVar14[(long)(int)uVar11 * 3 + 9] = *(ulong *)(param_2 + 0x18);
            *(undefined1 *)((long)puVar14 + 0x81) = 0;
          }
          else {
            uVar13 = RenderingDevice::get_singleton();
            cVar10 = RenderingDevice::texture_is_valid(uVar13,puVar1[1]);
            if (cVar10 == '\0') goto LAB_00105a3a;
            uVar13 = RenderingDevice::get_singleton();
            cVar10 = RenderingDevice::texture_is_valid(uVar13,puVar1[2]);
            if (cVar10 == '\0') goto LAB_00105a3a;
            uVar15 = *(undefined1 *)((long)puVar14 + 0x81);
          }
LAB_00105baf:
          uVar6 = puVar14[3];
          uVar7 = puVar14[4];
          uVar13 = *(undefined8 *)((long)puVar14 + uVar21 + 0x48);
          uVar17 = puVar14[0xf];
          uVar8 = puVar14[0x10];
          uVar2 = *(undefined8 *)((long)puVar14 + uVar21 + 0x40);
          uVar3 = *(undefined8 *)(lVar12 + 8 + ((long)iVar20 + (long)iVar16 * 4) * 8);
          *(ulong *)*param_1 = puVar14[(long)(int)uVar11 * 3 + 7];
          *(undefined8 *)(*param_1 + 8) = uVar2;
          *(undefined8 *)param_1[1] = uVar13;
          *(undefined8 *)(param_1[1] + 8) = uVar3;
          *(ulong *)param_1[2] = uVar17;
          *(ulong *)(param_1[2] + 8) = uVar6;
          *(ulong *)param_1[3] = uVar7;
          *(ulong *)(param_1[3] + 8) = CONCAT62(uStack_4e,CONCAT11(uVar15,(char)uVar8));
          goto LAB_00105c19;
        }
        uVar13 = 0x2ac;
        pcVar18 = 
        "Condition \"repeat == RenderingServer::CANVAS_ITEM_TEXTURE_REPEAT_DEFAULT\" is true. Returning: CanvasTextureInfo()"
        ;
      }
      _err_print_error("canvas_texture_get_info",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar13,pcVar18
                       ,0,0);
    }
    else {
LAB_00105d50:
      if ((uint)param_3 < *(uint *)(param_2 + 0xcc)) {
        puVar14 = (ulong *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 200)) * 0x90 +
                           *(long *)(*(long *)(param_2 + 0xb8) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 200)) * 8))
        ;
        if ((int)puVar14[0x11] == iVar16) goto LAB_001059dd;
        if ((int)puVar14[0x11] + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
  }
  *(undefined8 *)(param_1[3] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  uVar2 = __LC122;
  uVar13 = CONCAT44(_LC77,_UNK_00128d08);
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = uVar2;
  *(undefined8 *)param_1[3] = uVar13;
LAB_00105c19:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RendererRD::TextureStorage::canvas_texture_set_invalidation_callback(RID, void (*)(bool, void*),
   void*) */

void __thiscall
RendererRD::TextureStorage::canvas_texture_set_invalidation_callback
          (TextureStorage *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xcc))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 200)) * 0x90 +
            *(long *)(*(long *)(this + 0xb8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 200)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x68) = param_3;
      *(undefined8 *)(lVar1 + 0x70) = param_4;
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_texture_format_from_rd(RenderingDeviceCommons::DataFormat,
   RendererRD::TextureStorage::TextureFromRDFormat&) */

void __thiscall
RendererRD::TextureStorage::_texture_format_from_rd
          (undefined8 param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ulong uVar39;
  
  uVar38 = _UNK_00128e38;
  uVar37 = _LC237;
  uVar36 = _UNK_00128e28;
  uVar35 = _LC236;
  uVar34 = _UNK_00128e18;
  uVar33 = _LC234;
  uVar32 = _UNK_00128e08;
  uVar31 = _LC233;
  uVar30 = _UNK_00128df8;
  uVar29 = _LC232;
  uVar28 = _UNK_00128de8;
  uVar27 = _LC231;
  uVar26 = _UNK_00128dd8;
  uVar25 = _LC230;
  uVar24 = _UNK_00128dc8;
  uVar23 = _LC229;
  uVar22 = _UNK_00128db8;
  uVar21 = _LC228;
  uVar20 = _LC131;
  uVar19 = __LC137;
  uVar18 = _LC129;
  uVar17 = __LC136;
  uVar16 = _UNK_00128d88;
  uVar15 = __LC135;
  uVar14 = _UNK_00128d78;
  uVar13 = _LC360;
  uVar12 = _UNK_00128d68;
  uVar11 = __LC133;
  uVar10 = _UNK_00128d58;
  uVar9 = __LC132;
  uVar8 = _UNK_00128d48;
  uVar7 = _LC227;
  uVar6 = _UNK_00128d38;
  uVar5 = __LC128;
  uVar4 = _LC363;
  uVar3 = __LC127;
  uVar2 = _LC361;
  uVar1 = _LC126;
  if (param_2 < 0xe2) {
    if (param_2 < 0x4b) {
      if (param_2 == 0xf) {
        *param_3 = 0xf00000001;
        *(undefined8 *)((long)param_3 + 0xc) = uVar3;
        *(undefined8 *)((long)param_3 + 0x14) = uVar4;
        return;
      }
      if (param_2 < 0x10) {
        if (param_2 == 4) {
          *param_3 = 0x400000007;
          *(undefined8 *)((long)param_3 + 0xc) = uVar11;
          *(undefined8 *)((long)param_3 + 0x14) = uVar12;
          return;
        }
        if (param_2 == 8) {
          *param_3 = 0x800000000;
          *(undefined8 *)((long)param_3 + 0xc) = uVar1;
          *(undefined8 *)((long)param_3 + 0x14) = uVar2;
          return;
        }
        if (param_2 == 2) {
          *param_3 = 0x200000006;
          *(undefined8 *)((long)param_3 + 0xc) = uVar11;
          *(undefined8 *)((long)param_3 + 0x14) = uVar12;
          return;
        }
      }
      else if (param_2 - 0x16 < 0x1c) {
        uVar39 = 1L << ((byte)param_2 & 0x3f);
        if ((uVar39 & 0x2080000000000) != 0) {
          *(undefined4 *)param_3 = 5;
          *(undefined8 *)((long)param_3 + 0x14) = uVar20;
          *(undefined8 *)((long)param_3 + 4) = uVar9;
          *(undefined8 *)((long)param_3 + 0xc) = uVar10;
          return;
        }
        if ((uVar39 & 0x41000000000) != 0) {
          *(undefined4 *)param_3 = 5;
          *(undefined8 *)((long)param_3 + 0x14) = uVar20;
          *(undefined8 *)((long)param_3 + 4) = uVar7;
          *(undefined8 *)((long)param_3 + 0xc) = uVar8;
          return;
        }
        if ((uVar39 & 0x10400000) != 0) {
          *(undefined4 *)param_3 = 4;
          *(undefined8 *)((long)param_3 + 0x14) = uVar18;
          *(undefined8 *)((long)param_3 + 4) = uVar5;
          *(undefined8 *)((long)param_3 + 0xc) = uVar6;
          return;
        }
      }
    }
    else {
      switch(param_2) {
      case 0x4b:
        *param_3 = 0x4b0000000c;
        *(undefined8 *)((long)param_3 + 0xc) = uVar13;
        *(undefined8 *)((long)param_3 + 0x14) = uVar14;
        return;
      case 0x52:
        *param_3 = 0x520000000d;
        *(undefined8 *)((long)param_3 + 0xc) = uVar15;
        *(undefined8 *)((long)param_3 + 0x14) = uVar16;
        return;
      case 0x59:
        *param_3 = 0x590000000e;
        *(undefined8 *)((long)param_3 + 0xc) = uVar17;
        *(undefined8 *)((long)param_3 + 0x14) = uVar18;
        return;
      case 0x60:
        *param_3 = 0x600000000f;
        *(undefined8 *)((long)param_3 + 0xc) = uVar19;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        return;
      case 99:
        *param_3 = 0x6300000008;
        *(undefined8 *)((long)param_3 + 0xc) = uVar13;
        *(undefined8 *)((long)param_3 + 0x14) = uVar14;
        return;
      case 0x66:
        *param_3 = 0x6600000009;
        *(undefined8 *)((long)param_3 + 0xc) = uVar15;
        *(undefined8 *)((long)param_3 + 0x14) = uVar16;
        return;
      case 0x69:
        *param_3 = 0x690000000a;
        *(undefined8 *)((long)param_3 + 0xc) = uVar17;
        *(undefined8 *)((long)param_3 + 0x14) = uVar18;
        return;
      case 0x6c:
        *param_3 = 0x6c0000000b;
        *(undefined8 *)((long)param_3 + 0xc) = uVar19;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        return;
      case 0x7a:
        *param_3 = 0x7a00000010;
        *(undefined1 (*) [16])((long)param_3 + 0xc) = (undefined1  [16])0x0;
        return;
      case 0x82:
      case 0x83:
        *(undefined4 *)param_3 = 0x11;
        *(undefined8 *)((long)param_3 + 0x14) = uVar18;
        *(undefined8 *)((long)param_3 + 4) = uVar21;
        *(undefined8 *)((long)param_3 + 0xc) = uVar22;
        return;
      case 0x86:
      case 0x87:
        *(undefined4 *)param_3 = 0x12;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar23;
        *(undefined8 *)((long)param_3 + 0xc) = uVar24;
        return;
      case 0x88:
      case 0x89:
        *(undefined4 *)param_3 = 0x13;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar25;
        *(undefined8 *)((long)param_3 + 0xc) = uVar26;
        return;
      case 0x8a:
        *param_3 = 0x8a00000014;
        *(undefined8 *)((long)param_3 + 0xc) = uVar13;
        *(undefined8 *)((long)param_3 + 0x14) = uVar14;
        return;
      case 0x8c:
        *param_3 = 0x8c00000015;
        *(undefined8 *)((long)param_3 + 0xc) = uVar15;
        *(undefined8 *)((long)param_3 + 0x14) = uVar16;
        return;
      case 0x8e:
        *param_3 = 0x8e00000018;
        *(undefined8 *)((long)param_3 + 0xc) = uVar17;
        *(undefined8 *)((long)param_3 + 0x14) = uVar18;
        return;
      case 0x8f:
        *param_3 = 0x8f00000017;
        *(undefined8 *)((long)param_3 + 0xc) = uVar17;
        *(undefined8 *)((long)param_3 + 0x14) = uVar18;
        return;
      case 0x90:
      case 0x91:
        *(undefined4 *)param_3 = 0x16;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar27;
        *(undefined8 *)((long)param_3 + 0xc) = uVar28;
        return;
      case 0x92:
      case 0x93:
        *(undefined4 *)param_3 = 0x1e;
        *(undefined8 *)((long)param_3 + 0x14) = uVar18;
        *(undefined8 *)((long)param_3 + 4) = uVar29;
        *(undefined8 *)((long)param_3 + 0xc) = uVar30;
        return;
      case 0x94:
      case 0x95:
        *(undefined4 *)param_3 = 0x20;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar33;
        *(undefined8 *)((long)param_3 + 0xc) = uVar34;
        return;
      case 0x96:
      case 0x97:
        *(undefined4 *)param_3 = 0x1f;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar31;
        *(undefined8 *)((long)param_3 + 0xc) = uVar32;
        return;
      case 0x98:
        *param_3 = 0x980000001a;
        *(undefined8 *)((long)param_3 + 0xc) = uVar13;
        *(undefined8 *)((long)param_3 + 0x14) = uVar14;
        return;
      case 0x99:
        *param_3 = 0x990000001b;
        *(undefined8 *)((long)param_3 + 0xc) = uVar13;
        *(undefined8 *)((long)param_3 + 0x14) = uVar14;
        return;
      case 0x9a:
        *param_3 = 0x9a0000001c;
        *(undefined8 *)((long)param_3 + 0xc) = uVar15;
        *(undefined8 *)((long)param_3 + 0x14) = uVar16;
        return;
      case 0x9b:
        *param_3 = 0x9b0000001d;
        *(undefined8 *)((long)param_3 + 0xc) = uVar15;
        *(undefined8 *)((long)param_3 + 0x14) = uVar16;
        return;
      case 0x9c:
        *param_3 = 0x9c00000023;
        *(undefined8 *)((long)param_3 + 0xc) = uVar19;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        return;
      case 0x9d:
        *(undefined4 *)param_3 = 0x23;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar35;
        *(undefined8 *)((long)param_3 + 0xc) = uVar36;
        return;
      case 0xaa:
        *param_3 = 0xaa00000025;
        *(undefined8 *)((long)param_3 + 0xc) = uVar19;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        return;
      case 0xab:
        *(undefined4 *)param_3 = 0x25;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        *(undefined8 *)((long)param_3 + 4) = uVar37;
        *(undefined8 *)((long)param_3 + 0xc) = uVar38;
        return;
      case 0xda:
        *param_3 = 0xda00000024;
        *(undefined8 *)((long)param_3 + 0xc) = uVar19;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        return;
      case 0xe1:
        *param_3 = 0xe100000026;
        *(undefined8 *)((long)param_3 + 0xc) = uVar19;
        *(undefined8 *)((long)param_3 + 0x14) = uVar20;
        return;
      }
    }
  }
  _err_print_error("_texture_format_from_rd",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xa61,
                   "Method/function failed.","Unsupported image format",0,0);
  return;
}



/* RendererRD::TextureStorage::decal_atlas_get_texture() const */

undefined8 __thiscall RendererRD::TextureStorage::decal_atlas_get_texture(TextureStorage *this)

{
  return *(undefined8 *)(this + 0x198);
}



/* RendererRD::TextureStorage::decal_atlas_get_texture_srgb() const */

undefined8 __thiscall RendererRD::TextureStorage::decal_atlas_get_texture_srgb(TextureStorage *this)

{
  return *(undefined8 *)(this + 0x1a0);
}



/* RendererRD::TextureStorage::decal_atlas_mark_dirty_on_texture(RID) */

void __thiscall
RendererRD::TextureStorage::decal_atlas_mark_dirty_on_texture(TextureStorage *this,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 0x168) != 0) && (*(int *)(this + 0x18c) != 0)) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x188) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
    uVar10 = param_2 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x170) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      while (((uint)uVar13 != uVar14 ||
             (param_2 != *(long *)(*(long *)(*(long *)(this + 0x168) + lVar12 * 8) + 0x10)))) {
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x170) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x188) * 4) + iVar11) -
                              SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
        if (SUB164(auVar5 * auVar9,8) < uVar16) {
          return;
        }
      }
      this[400] = (TextureStorage)0x1;
    }
  }
  return;
}



/* RendererRD::TextureStorage::decal_atlas_remove_texture(RID) */

void __thiscall
RendererRD::TextureStorage::decal_atlas_remove_texture(TextureStorage *this,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long local_40 [2];
  
  if ((*(long *)(this + 0x168) != 0) && (*(int *)(this + 0x18c) != 0)) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x188) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
    uVar10 = param_2 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(*(long *)(this + 0x170) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar15 != 0) {
      uVar14 = 0;
      while (((uint)uVar13 != uVar15 ||
             (param_2 != *(long *)(*(long *)(*(long *)(this + 0x168) + lVar12 * 8) + 0x10)))) {
        uVar14 = uVar14 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(this + 0x170) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar15 == 0) {
          return;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar15 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x188) * 4) + iVar11) -
                              SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
        if (SUB164(auVar5 * auVar9,8) < uVar14) {
          return;
        }
      }
      local_40[0] = param_2;
      HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
      ::erase((HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
               *)(this + 0x160),(RID *)local_40);
    }
  }
  return;
}



/* RendererRD::TextureStorage::decal_get_dependency(RID) */

long __thiscall RendererRD::TextureStorage::decal_get_dependency(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1dc))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1d8)) * 0xa0 +
            *(long *)(*(long *)(this + 0x1c8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1d8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x98);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return lVar2 + 0x68;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("decal_get_dependency",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xaef,
                   "Parameter \"decal\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::free_decal_data() */

void __thiscall RendererRD::TextureStorage::free_decal_data(TextureStorage *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x288) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x288));
    *(undefined8 *)(this + 0x288) = 0;
  }
  if (*(void **)(this + 0x278) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x278),true);
    *(undefined8 *)(this + 0x278) = 0;
  }
  if (*(void **)(this + 0x280) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x280),true);
    *(undefined8 *)(this + 0x280) = 0;
  }
  return;
}



/* RendererRD::TextureStorage::set_max_decals(unsigned int) */

void __thiscall RendererRD::TextureStorage::set_max_decals(TextureStorage *this,uint param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  long local_30;
  long local_20;
  
  uVar5 = (ulong)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(this + 0x270) = param_1;
  if (uVar5 == 0) {
    *(undefined8 *)(this + 0x278) = 0;
  }
  else {
    lVar3 = Memory::alloc_static(uVar5 * 0xf0,true);
    if (lVar3 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      uVar2 = *(uint *)(this + 0x270);
    }
    else {
      *(ulong *)(lVar3 + -8) = uVar5;
      uVar2 = *(uint *)(this + 0x270);
    }
    uVar5 = (ulong)uVar2;
    *(long *)(this + 0x278) = lVar3;
    if (uVar5 != 0) {
      lVar3 = Memory::alloc_static(uVar5 * 0x18,true);
      if (lVar3 == 0) {
        _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,
                         "Parameter \"mem\" is null.",0,0);
        lVar3 = 0;
      }
      else {
        *(ulong *)(lVar3 + -8) = uVar5;
      }
      goto LAB_00106ac1;
    }
  }
  lVar3 = 0;
LAB_00106ac1:
  *(long *)(this + 0x280) = lVar3;
  uVar4 = RenderingDevice::get_singleton();
  local_30 = 0;
  uVar4 = RenderingDevice::storage_buffer_create(uVar4,param_1 * 0xf0,local_38,0,0);
  lVar3 = local_30;
  *(undefined8 *)(this + 0x288) = uVar4;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::update_decal_buffer(PagedArray<RID> const&, Transform3D const&) */

void RendererRD::TextureStorage::update_decal_buffer(PagedArray *param_1,Transform3D *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  DecalInstanceSort *__src;
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
  undefined8 uVar39;
  size_t sVar40;
  long *plVar41;
  long *plVar42;
  code *pcVar43;
  undefined8 uVar44;
  ulong uVar45;
  DecalInstanceSort *pDVar46;
  long lVar47;
  ulong *puVar48;
  uint uVar49;
  long in_RDX;
  long lVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  DecalInstanceSort *pDVar54;
  size_t sVar55;
  uint uVar56;
  uint uVar57;
  undefined8 in_R9;
  uint uVar58;
  ulong uVar59;
  long lVar60;
  long in_FS_OFFSET;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  long local_288;
  float local_254;
  char local_1dd;
  undefined8 local_1d8;
  float local_1d0;
  Vector3 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  Vector3 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  Transform3D local_d8 [48];
  Transform3D local_a8 [48];
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  long local_40;
  
  plVar41 = ForwardIDStorage::singleton;
  local_1c8 = (Vector3  [16])ZEXT416(_LC154);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a8 = 0x3f800000;
  local_1a4 = 0;
  local_19c = 0;
  local_70 = 2.0;
  local_78 = _LC155;
  local_1b8 = (undefined1  [16])local_1c8;
  Basis::scale(local_1c8);
  local_1a4 = _LC157;
  uVar45 = *(ulong *)(param_2 + 0x28);
  local_19c = 0xbf800000;
  *(undefined4 *)(param_1 + 0x274) = 0;
  if ((int)uVar45 == 0) {
LAB_00106e78:
    pcVar43 = *(code **)(*plVar41 + 0x28);
    if (pcVar43 == ForwardIDStorage::uses_forward_ids) goto LAB_00107d48;
LAB_00106e97:
    local_1dd = (*pcVar43)(plVar41);
  }
  else {
    uVar53 = 0;
    uVar56 = 0;
    do {
      if (*(uint *)(param_1 + 0x270) == uVar56) break;
      if (*(ulong *)(param_2 + 0x28) <= uVar53) {
        _err_print_index_error
                  ("operator[]","./core/templates/paged_array.h",0xa9,uVar53,
                   *(ulong *)(param_2 + 0x28),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar43 = (code *)invalidInstructionException();
        (*pcVar43)();
      }
      uVar59 = *(ulong *)(*(long *)(*(long *)(param_2 + 8) +
                                   (uVar53 >> ((byte)*(undefined4 *)(param_2 + 0x1c) & 0x3f)) * 8) +
                         (ulong)((uint)uVar53 & *(uint *)(param_2 + 0x20)) * 8);
      if ((uVar59 != 0) && ((uint)uVar59 < *(uint *)(param_1 + 0x234))) {
        puVar48 = (ulong *)(((uVar59 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x230)) * 0x50 +
                           *(long *)(*(long *)(param_1 + 0x220) +
                                    ((uVar59 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x230)) * 8)
                           );
        if ((int)puVar48[9] == (int)(uVar59 >> 0x20)) {
          if (*puVar48 == 0) {
LAB_0011e4b2:
                    /* WARNING: Does not return */
            pcVar43 = (code *)invalidInstructionException();
            (*pcVar43)();
          }
          uVar59 = *puVar48;
          if (*(uint *)(param_1 + 0x1dc) <= (uint)uVar59) goto LAB_0011e4b2;
          lVar50 = ((uVar59 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1d8)) * 0xa0 +
                   *(long *)(*(long *)(param_1 + 0x1c8) +
                            ((uVar59 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1d8)) * 8);
          if (*(int *)(lVar50 + 0x98) != (int)(uVar59 >> 0x20)) {
            if (*(int *)(lVar50 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,in_R9);
            }
            goto LAB_0011e4b2;
          }
          fVar65 = *(float *)(puVar48 + 6) - *(float *)(in_RDX + 0x28);
          fVar64 = *(float *)((long)puVar48 + 0x2c) - *(float *)(in_RDX + 0x24);
          fVar61 = *(float *)((long)puVar48 + 0x34) - *(float *)(in_RDX + 0x2c);
          uVar56 = *(uint *)(param_1 + 0x274);
          fVar61 = SQRT(fVar61 * fVar61 + fVar64 * fVar64 + fVar65 * fVar65);
          if (((*(char *)(lVar50 + 0x54) == '\0') || (fVar61 <= *(float *)(lVar50 + 0x58))) ||
             (fVar61 <= *(float *)(lVar50 + 0x58) + *(float *)(lVar50 + 0x5c))) {
            uVar59 = (ulong)uVar56;
            fVar64 = *(float *)(puVar48 + 7);
            uVar56 = uVar56 + 1;
            pfVar1 = (float *)(*(long *)(param_1 + 0x280) + uVar59 * 0x18);
            *(ulong **)(pfVar1 + 2) = puVar48;
            *(long *)(pfVar1 + 4) = lVar50;
            *pfVar1 = fVar61 - fVar64;
            *(uint *)(param_1 + 0x274) = uVar56;
          }
        }
        else if ((int)puVar48[9] + 0x80000000U < 0x7fffffff) {
          in_R9 = 0;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
          uVar56 = *(uint *)(param_1 + 0x274);
        }
      }
      uVar53 = uVar53 + 1;
    } while (uVar53 != (uVar45 & 0xffffffff));
    if (uVar56 == 0) goto LAB_00106e78;
    __src = *(DecalInstanceSort **)(param_1 + 0x280);
    uVar45 = (ulong)uVar56;
    if (uVar56 == 1) {
      SortArray<RendererRD::TextureStorage::DecalInstanceSort,_DefaultComparator<RendererRD::TextureStorage::DecalInstanceSort>,true>
      ::introsort(0,1,__src,0);
    }
    else {
      lVar50 = 0;
      uVar53 = uVar45;
      do {
        uVar53 = (long)uVar53 >> 1;
        lVar50 = lVar50 + 1;
      } while (uVar53 != 1);
      SortArray<RendererRD::TextureStorage::DecalInstanceSort,_DefaultComparator<RendererRD::TextureStorage::DecalInstanceSort>,true>
      ::introsort(0,uVar45,__src,lVar50 * 2);
      if (uVar45 < 0x11) {
        sVar55 = 0x18;
        uVar53 = 1;
        pDVar54 = __src;
        do {
          fVar61 = *(float *)(pDVar54 + 0x18);
          uVar44 = *(undefined8 *)(pDVar54 + 0x20);
          uVar63 = *(undefined8 *)(pDVar54 + 0x28);
          if (fVar61 < *(float *)__src) {
            memmove(__src + 0x18,__src,sVar55);
            *(float *)__src = fVar61;
            *(undefined8 *)(__src + 8) = uVar44;
            *(undefined8 *)(__src + 0x10) = uVar63;
          }
          else {
            pDVar46 = __src + sVar55;
            sVar40 = sVar55;
            uVar59 = uVar53;
            if (fVar61 < *(float *)pDVar54) {
              while (uVar59 = uVar59 - 1, uVar59 != 0) {
                fVar64 = *(float *)(__src + (sVar40 - 0x30));
                *(undefined1 (*) [16])(__src + sVar40) =
                     *(undefined1 (*) [16])(pDVar54 + (sVar40 - sVar55));
                *(undefined8 *)(__src + sVar40 + 0x10) =
                     *(undefined8 *)(pDVar54 + sVar40 + (0x10 - sVar55));
                if (fVar64 <= fVar61) {
                  pDVar46 = __src + uVar59 * 0x18;
                  goto LAB_00108101;
                }
                sVar40 = sVar40 - 0x18;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pDVar46 = __src + 0x18;
            }
LAB_00108101:
            *(float *)pDVar46 = fVar61;
            *(undefined8 *)(pDVar46 + 8) = uVar44;
            *(undefined8 *)(pDVar46 + 0x10) = uVar63;
          }
          uVar53 = uVar53 + 1;
          pDVar54 = pDVar54 + 0x18;
          sVar55 = sVar55 + 0x18;
        } while (uVar45 != uVar53);
      }
      else {
        sVar55 = 0x18;
        pDVar54 = __src;
        lVar50 = 0;
        do {
          fVar61 = *(float *)(pDVar54 + 0x18);
          lVar60 = lVar50 + 1;
          uVar44 = *(undefined8 *)(pDVar54 + 0x20);
          uVar63 = *(undefined8 *)(pDVar54 + 0x28);
          if (fVar61 < *(float *)__src) {
            memmove(__src + 0x18,__src,sVar55);
            *(float *)__src = fVar61;
            *(undefined8 *)(__src + 8) = uVar44;
            *(undefined8 *)(__src + 0x10) = uVar63;
          }
          else {
            pDVar46 = __src + sVar55;
            sVar40 = sVar55;
            if (fVar61 < *(float *)pDVar54) {
              while (lVar50 != 0) {
                uVar39 = *(undefined8 *)(pDVar54 + (sVar40 - sVar55) + 8);
                fVar64 = *(float *)(__src + (sVar40 - 0x30));
                *(undefined8 *)(__src + sVar40) = *(undefined8 *)(pDVar54 + (sVar40 - sVar55));
                *(undefined8 *)(__src + sVar40 + 8) = uVar39;
                *(undefined8 *)(__src + sVar40 + 0x10) =
                     *(undefined8 *)(pDVar54 + sVar40 + (0x10 - sVar55));
                if (fVar64 <= fVar61) {
                  pDVar46 = __src + lVar50 * 0x18;
                  goto LAB_00107fd9;
                }
                sVar40 = sVar40 - 0x18;
                lVar50 = lVar50 + -1;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pDVar46 = __src + 0x18;
            }
LAB_00107fd9:
            *(float *)pDVar46 = fVar61;
            *(undefined8 *)(pDVar46 + 8) = uVar44;
            *(undefined8 *)(pDVar46 + 0x10) = uVar63;
          }
          pDVar54 = pDVar54 + 0x18;
          sVar55 = sVar55 + 0x18;
          lVar50 = lVar60;
        } while (lVar60 != 0xf);
        pDVar54 = __src + 0x180;
        uVar53 = 0x10;
        lVar50 = -0x180;
        do {
          fVar61 = *(float *)pDVar54;
          lVar60 = uVar53 - 1;
          lVar47 = -lVar50;
          uVar44 = *(undefined8 *)(pDVar54 + 8);
          uVar63 = *(undefined8 *)(pDVar54 + 0x10);
          pDVar46 = pDVar54;
          if (fVar61 < *(float *)(pDVar54 + -0x18)) {
            do {
              uVar39 = *(undefined8 *)(pDVar54 + lVar47 + lVar50 + -0x18 + 8);
              fVar64 = *(float *)(__src + lVar47 + -0x30);
              *(undefined8 *)(__src + lVar47) = *(undefined8 *)(pDVar54 + lVar47 + lVar50 + -0x18);
              *(undefined8 *)(__src + lVar47 + 8) = uVar39;
              *(undefined8 *)(__src + lVar47 + 0x10) =
                   *(undefined8 *)(pDVar54 + lVar47 + lVar50 + -8);
              lVar52 = lVar60 + -1;
              if (fVar64 <= fVar61) {
                pDVar46 = __src + lVar60 * 0x18;
                goto LAB_001081e1;
              }
              lVar47 = lVar47 + -0x18;
              lVar60 = lVar52;
            } while (lVar52 != 0);
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pDVar46 = __src + 0x18;
          }
LAB_001081e1:
          uVar53 = uVar53 + 1;
          *(float *)pDVar46 = fVar61;
          pDVar54 = pDVar54 + 0x18;
          lVar50 = lVar50 + -0x18;
          *(undefined8 *)(pDVar46 + 8) = uVar44;
          *(undefined8 *)(pDVar46 + 0x10) = uVar63;
        } while (uVar45 != uVar53);
      }
    }
    pcVar43 = *(code **)(*plVar41 + 0x28);
    if (pcVar43 != ForwardIDStorage::uses_forward_ids) goto LAB_00106e97;
    local_1dd = '\0';
  }
  if (*(int *)(param_1 + 0x274) != 0) {
    local_288 = 0;
    uVar56 = 0;
    do {
      lVar50 = *(long *)(local_288 + *(long *)(param_1 + 0x280) + 8);
      puVar6 = *(undefined8 **)(local_288 + *(long *)(param_1 + 0x280) + 0x10);
      if (local_1dd != '\0') {
        pcVar43 = *(code **)(*plVar41 + 0x20);
        uVar44 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
        if (pcVar43 != ForwardIDStorage::map_forward_id) {
          (*pcVar43)(plVar41,3,*(undefined4 *)(lVar50 + 0x40),uVar56,uVar44);
        }
      }
      cVar4 = *(char *)((long)puVar6 + 0x54);
      local_254 = 1.0;
      *(undefined4 *)(lVar50 + 0x3c) = *(undefined4 *)(puVar6 + 9);
      if (cVar4 != '\0') {
        fVar61 = *(float *)(*(long *)(param_1 + 0x280) + local_288) + *(float *)(lVar50 + 0x38);
        if (*(float *)(puVar6 + 0xb) < fVar61) {
          local_254 = 0.0;
          fVar61 = _LC77 - (fVar61 - *(float *)(puVar6 + 0xb)) / *(float *)((long)puVar6 + 0x5c);
          if ((0.0 <= fVar61) && (local_254 = 1.0, fVar61 <= _LC77)) {
            local_254 = (_LC163 - (fVar61 + fVar61)) * fVar61 * fVar61;
          }
        }
      }
      local_1d0 = (float)_LC50 * *(float *)(puVar6 + 1);
      local_178 = 0x3f800000;
      local_174 = 0;
      local_1d8 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * _LC50._4_4_,
                           (float)*puVar6 * (float)_LC50);
      local_198 = (Vector3  [16])ZEXT416(_LC154);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x278) + local_288 * 10);
      local_16c = 0;
      local_188 = (undefined1  [16])local_198;
      Basis::scale(local_198);
      local_168 = *(undefined8 *)(lVar50 + 8);
      uStack_160 = *(undefined8 *)(lVar50 + 0x10);
      local_158 = *(undefined8 *)(lVar50 + 0x18);
      uStack_150 = *(undefined8 *)(lVar50 + 0x20);
      local_148 = *(undefined8 *)(lVar50 + 0x28);
      uStack_140 = *(undefined8 *)(lVar50 + 0x30);
      Transform3D::affine_inverse();
      Transform3D::operator*(local_d8,(Transform3D *)&local_138);
      Transform3D::operator*(local_a8,local_d8);
      Transform3D::operator*((Transform3D *)&local_78,local_a8);
      Transform3D::affine_inverse();
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      *(undefined4 *)((long)puVar2 + 0x1c) = 0;
      *(undefined4 *)((long)puVar2 + 0x2c) = 0;
      puVar2[6] = local_e4;
      *(undefined4 *)((long)puVar2 + 0x3c) = 0x3f800000;
      *puVar2 = CONCAT44(uStack_fc,local_108);
      *(undefined4 *)(puVar2 + 1) = local_f0;
      *(undefined4 *)(puVar2 + 2) = uStack_104;
      *(undefined4 *)((long)puVar2 + 0x14) = local_f8;
      *(undefined4 *)(puVar2 + 3) = local_ec;
      *(undefined4 *)(puVar2 + 4) = local_100;
      *(undefined4 *)((long)puVar2 + 0x24) = local_f4;
      *(undefined4 *)(puVar2 + 5) = local_e8;
      *(undefined4 *)(puVar2 + 7) = local_dc;
      fVar61 = local_168._4_4_ * local_168._4_4_ + (float)local_158 * (float)local_158 +
               uStack_150._4_4_ * uStack_150._4_4_;
      if (fVar61 == 0.0) {
        fVar61 = 0.0;
        fVar65 = 0.0;
        fVar64 = 0.0;
      }
      else {
        fVar61 = SQRT(fVar61);
        fVar64 = local_168._4_4_ / fVar61;
        fVar65 = (float)local_158 / fVar61;
        fVar61 = uStack_150._4_4_ / fVar61;
      }
      lVar50 = puVar6[5];
      lVar60 = puVar6[2];
      uVar3 = *(undefined4 *)(puVar6 + 0xc);
      puVar2[0x1c] = CONCAT44(local_12c * fVar64 + local_128 * fVar65 + local_124 * fVar61,
                              local_138 * fVar64 + local_134 * fVar65 + local_130 * fVar61);
      puVar2[0x1d] = CONCAT44(uVar3,fVar64 * local_120 + fVar65 * local_11c + fVar61 * local_118);
      if (lVar60 == 0) {
        if (lVar50 != 0) goto LAB_00106f40;
      }
      else {
        lVar47 = *(long *)(param_1 + 0x168);
        if ((lVar47 != 0) && (*(int *)(param_1 + 0x18c) != 0)) {
          uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_1 + 0x188) * 4));
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x188) * 8);
          uVar45 = lVar60 * 0x3ffff - 1;
          uVar45 = (uVar45 ^ uVar45 >> 0x1f) * 0x15;
          uVar45 = (uVar45 ^ uVar45 >> 0xb) * 0x41;
          uVar45 = uVar45 >> 0x16 ^ uVar45;
          uVar59 = uVar45 & 0xffffffff;
          if ((int)uVar45 == 0) {
            uVar59 = 1;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar59 * lVar52;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar53;
          lVar51 = SUB168(auVar7 * auVar23,8);
          uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar51 * 4);
          uVar49 = SUB164(auVar7 * auVar23,8);
          if (uVar57 != 0) {
            uVar58 = 0;
            do {
              if (((uint)uVar59 == uVar57) &&
                 (lVar60 == *(long *)(*(long *)(lVar47 + lVar51 * 8) + 0x10))) {
                lVar60 = *(long *)(lVar47 + (ulong)uVar49 * 8);
                lVar47 = puVar6[3];
                uVar44 = *(undefined8 *)(lVar60 + 0x28);
                puVar2[10] = *(undefined8 *)(lVar60 + 0x20);
                puVar2[0xb] = uVar44;
                goto joined_r0x00107584;
              }
              uVar58 = uVar58 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)(uVar49 + 1) * lVar52;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar53;
              lVar51 = SUB168(auVar8 * auVar24,8);
              uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar51 * 4);
              uVar49 = SUB164(auVar8 * auVar24,8);
            } while ((uVar57 != 0) &&
                    (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar57 * lVar52, auVar25._8_8_ = 0,
                    auVar25._0_8_ = uVar53, auVar10._8_8_ = 0,
                    auVar10._0_8_ =
                         (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(param_1 + 0x188) * 4) + uVar49) -
                                SUB164(auVar9 * auVar25,8)) * lVar52, auVar26._8_8_ = 0,
                    auVar26._0_8_ = uVar53, uVar58 <= SUB164(auVar10 * auVar26,8)));
          }
        }
LAB_00106f40:
        lVar47 = puVar6[3];
        *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
joined_r0x00107584:
        if (lVar47 == 0) {
          lVar60 = puVar6[4];
          *(undefined1 (*) [16])(puVar2 + 0xc) = (undefined1  [16])0x0;
        }
        else {
          lVar60 = *(long *)(param_1 + 0x168);
          if ((lVar60 != 0) && (*(int *)(param_1 + 0x18c) != 0)) {
            uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_1 + 0x188) * 4));
            lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x188) * 8);
            uVar45 = lVar47 * 0x3ffff - 1;
            uVar45 = (uVar45 ^ uVar45 >> 0x1f) * 0x15;
            uVar45 = (uVar45 ^ uVar45 >> 0xb) * 0x41;
            uVar45 = uVar45 >> 0x16 ^ uVar45;
            uVar59 = uVar45 & 0xffffffff;
            if ((int)uVar45 == 0) {
              uVar59 = 1;
            }
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar59 * lVar52;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar53;
            lVar51 = SUB168(auVar11 * auVar27,8);
            uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar51 * 4);
            uVar49 = SUB164(auVar11 * auVar27,8);
            if (uVar57 != 0) {
              uVar58 = 0;
              do {
                if (((uint)uVar59 == uVar57) &&
                   (lVar47 == *(long *)(*(long *)(lVar60 + lVar51 * 8) + 0x10))) {
                  lVar60 = *(long *)(lVar60 + (ulong)uVar49 * 8);
                  uVar44 = *(undefined8 *)(lVar60 + 0x20);
                  uVar63 = *(undefined8 *)(lVar60 + 0x28);
                  goto LAB_001076e1;
                }
                uVar58 = uVar58 + 1;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = (ulong)(uVar49 + 1) * lVar52;
                auVar28._8_8_ = 0;
                auVar28._0_8_ = uVar53;
                lVar51 = SUB168(auVar12 * auVar28,8);
                uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar51 * 4);
                uVar49 = SUB164(auVar12 * auVar28,8);
              } while ((uVar57 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar57 * lVar52, auVar29._8_8_ = 0,
                      auVar29._0_8_ = uVar53, auVar14._8_8_ = 0,
                      auVar14._0_8_ =
                           (ulong)((*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(param_1 + 0x188) * 4) + uVar49) -
                                  SUB164(auVar13 * auVar29,8)) * lVar52, auVar30._8_8_ = 0,
                      auVar30._0_8_ = uVar53, uVar58 <= SUB164(auVar14 * auVar30,8)));
            }
          }
          uVar44 = 0;
          uVar63 = 0;
LAB_001076e1:
          puVar2[0xc] = uVar44;
          puVar2[0xd] = uVar63;
          Basis::orthonormalized();
          *(undefined4 *)((long)puVar2 + 0xbc) = 0;
          *(undefined4 *)((long)puVar2 + 0xcc) = 0;
          *(float *)(puVar2 + 0x16) =
               local_6c * local_134 + (float)local_78 * local_138 + local_60 * local_130;
          *(float *)((long)puVar2 + 0xb4) =
               local_6c * local_128 + (float)local_78 * local_12c + local_124 * local_60;
          *(float *)(puVar2 + 0x17) =
               local_6c * local_11c + (float)local_78 * local_120 + local_60 * local_118;
          *(float *)(puVar2 + 0x18) =
               local_68 * local_134 + local_78._4_4_ * local_138 + local_5c * local_130;
          *(float *)(puVar2 + 0x1a) =
               local_138 * local_70 + local_134 * local_64 + local_130 * local_58;
          *(float *)((long)puVar2 + 0xc4) =
               local_68 * local_128 + local_78._4_4_ * local_12c + local_124 * local_5c;
          *(float *)(puVar2 + 0x19) =
               local_78._4_4_ * local_120 + local_68 * local_11c + local_5c * local_118;
          *(float *)((long)puVar2 + 0xd4) =
               local_12c * local_70 + local_128 * local_64 + local_124 * local_58;
          lVar60 = puVar6[4];
          *(undefined4 *)((long)puVar2 + 0xdc) = 0;
          *(float *)(puVar2 + 0x1b) =
               local_70 * local_120 + local_64 * local_11c + local_58 * local_118;
        }
        if (((lVar60 != 0) && (lVar47 = *(long *)(param_1 + 0x168), lVar47 != 0)) &&
           (*(int *)(param_1 + 0x18c) != 0)) {
          uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_1 + 0x188) * 4));
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x188) * 8);
          uVar45 = lVar60 * 0x3ffff - 1;
          uVar45 = (uVar45 ^ uVar45 >> 0x1f) * 0x15;
          uVar45 = (uVar45 ^ uVar45 >> 0xb) * 0x41;
          uVar45 = uVar45 >> 0x16 ^ uVar45;
          uVar59 = uVar45 & 0xffffffff;
          if ((int)uVar45 == 0) {
            uVar59 = 1;
          }
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar59 * lVar52;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar53;
          lVar51 = SUB168(auVar15 * auVar31,8);
          uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar51 * 4);
          uVar49 = SUB164(auVar15 * auVar31,8);
          if (uVar57 != 0) {
            uVar58 = 0;
            do {
              if (((uint)uVar59 == uVar57) &&
                 (lVar60 == *(long *)(*(long *)(lVar47 + lVar51 * 8) + 0x10))) {
                lVar60 = *(long *)(lVar47 + (ulong)uVar49 * 8);
                uVar44 = *(undefined8 *)(lVar60 + 0x28);
                puVar2[0xe] = *(undefined8 *)(lVar60 + 0x20);
                puVar2[0xf] = uVar44;
                goto joined_r0x00107a9f;
              }
              uVar58 = uVar58 + 1;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar52;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar53;
              lVar51 = SUB168(auVar16 * auVar32,8);
              uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar51 * 4);
              uVar49 = SUB164(auVar16 * auVar32,8);
            } while ((uVar57 != 0) &&
                    (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar57 * lVar52, auVar33._8_8_ = 0,
                    auVar33._0_8_ = uVar53, auVar18._8_8_ = 0,
                    auVar18._0_8_ =
                         (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(param_1 + 0x188) * 4) + uVar49) -
                                SUB164(auVar17 * auVar33,8)) * lVar52, auVar34._8_8_ = 0,
                    auVar34._0_8_ = uVar53, uVar58 <= SUB164(auVar18 * auVar34,8)));
          }
        }
        *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
joined_r0x00107a9f:
        uVar63 = 0;
        uVar44 = 0;
        if (lVar50 != 0) {
          lVar60 = *(long *)(param_1 + 0x168);
          if ((lVar60 != 0) && (*(int *)(param_1 + 0x18c) != 0)) {
            uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_1 + 0x188) * 4));
            lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x188) * 8);
            uVar45 = lVar50 * 0x3ffff - 1;
            uVar45 = (uVar45 ^ uVar45 >> 0x1f) * 0x15;
            uVar45 = (uVar45 ^ uVar45 >> 0xb) * 0x41;
            uVar45 = uVar45 >> 0x16 ^ uVar45;
            uVar59 = uVar45 & 0xffffffff;
            if ((int)uVar45 == 0) {
              uVar59 = 1;
            }
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar59 * lVar47;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar53;
            lVar52 = SUB168(auVar19 * auVar35,8);
            uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar52 * 4);
            uVar49 = SUB164(auVar19 * auVar35,8);
            if (uVar57 != 0) {
              uVar58 = 0;
              do {
                if (((uint)uVar59 == uVar57) &&
                   (lVar50 == *(long *)(*(long *)(lVar60 + lVar52 * 8) + 0x10))) {
                  lVar50 = *(long *)(lVar60 + (ulong)uVar49 * 8);
                  uVar44 = *(undefined8 *)(lVar50 + 0x20);
                  uVar63 = *(undefined8 *)(lVar50 + 0x28);
                  goto LAB_00106f7e;
                }
                uVar58 = uVar58 + 1;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)(uVar49 + 1) * lVar47;
                auVar36._8_8_ = 0;
                auVar36._0_8_ = uVar53;
                lVar52 = SUB168(auVar20 * auVar36,8);
                uVar57 = *(uint *)(*(long *)(param_1 + 0x170) + lVar52 * 4);
                uVar49 = SUB164(auVar20 * auVar36,8);
              } while ((uVar57 != 0) &&
                      (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar57 * lVar47, auVar37._8_8_ = 0,
                      auVar37._0_8_ = uVar53, auVar22._8_8_ = 0,
                      auVar22._0_8_ =
                           (ulong)((*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(param_1 + 0x188) * 4) + uVar49) -
                                  SUB164(auVar21 * auVar37,8)) * lVar47, auVar38._8_8_ = 0,
                      auVar38._0_8_ = uVar53, uVar58 <= SUB164(auVar22 * auVar38,8)));
            }
          }
          uVar44 = 0;
          uVar63 = 0;
        }
LAB_00106f7e:
        puVar2[0x10] = uVar44;
        puVar2[0x11] = uVar63;
        fVar61 = *(float *)(puVar6 + 8);
        fVar64 = *(float *)((long)puVar6 + 0x44);
        if (_LC62 <= fVar61) {
          fVar61 = powf((float)(((double)fVar61 + __LC64) * __LC65),_LC66);
        }
        else {
          fVar61 = fVar61 * _LC63;
        }
        fVar65 = *(float *)((long)puVar6 + 0x3c);
        if (_LC62 <= fVar65) {
          fVar65 = powf((float)(((double)fVar65 + __LC64) * __LC65),_LC66);
        }
        else {
          fVar65 = _LC63 * fVar65;
        }
        fVar62 = *(float *)(puVar6 + 7);
        if (_LC62 <= fVar62) {
          fVar62 = powf((float)(((double)fVar62 + __LC64) * __LC65),_LC66);
        }
        else {
          fVar62 = fVar62 * _LC63;
        }
        plVar42 = RendererSceneRenderRD::singleton;
        uVar5 = *(undefined4 *)(puVar6 + 9);
        puVar2[0x12] = CONCAT44(fVar65,fVar62);
        puVar2[0x13] = CONCAT44(fVar64 * local_254,fVar61);
        fVar61 = *(float *)(puVar6 + 6);
        uVar3 = *(undefined4 *)((long)puVar6 + 0x34);
        *(undefined4 *)((long)puVar2 + 0xa4) = uVar5;
        *(undefined4 *)((long)puVar2 + 0x4c) = uVar3;
        *(float *)(puVar2 + 0x14) = local_254 * fVar61;
        puVar2[0x15] = *(undefined8 *)((long)puVar6 + 0x4c);
        pcVar43 = *(code **)(*plVar42 + 0x238);
        if (pcVar43 != RendererSceneRenderRD::setup_added_decal) {
          (*pcVar43)(plVar42,&local_168,&local_1d8);
        }
      }
      uVar56 = uVar56 + 1;
      local_288 = local_288 + 0x18;
    } while (uVar56 < *(uint *)(param_1 + 0x274));
    if (*(uint *)(param_1 + 0x274) != 0) {
      uVar44 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update
                (uVar44,*(undefined8 *)(param_1 + 0x288),0,*(int *)(param_1 + 0x274) * 0xf0,
                 *(undefined8 *)(param_1 + 0x278));
    }
  }
LAB_00107d48:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_get_rd_texture(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_rd_texture(TextureStorage *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar1 + 0xe8) == 0) {
        return *(undefined8 *)(lVar1 + 0x10);
      }
      return *(undefined8 *)(lVar1 + 0xe8);
    }
    if (*(int *)(lVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_rd_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe79,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_rd_texture_msaa(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_rd_texture_msaa(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x28);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_rd_texture_msaa",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe96,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_rd_backbuffer(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_rd_backbuffer(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x48);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_rd_backbuffer",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe9d,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::_render_target_get_sdf_rect(RendererRD::TextureStorage::RenderTarget
   const*) const */

undefined8 __thiscall
RendererRD::TextureStorage::_render_target_get_sdf_rect(TextureStorage *this,RenderTarget *param_1)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_1 + 0xb8);
  local_48 = 0;
  if (uVar1 == 2) {
    iVar2 = 0x96;
  }
  else {
    if (uVar1 < 3) {
      iVar2 = 0x78;
      if (uVar1 != 0) goto LAB_00108539;
    }
    else {
      iVar2 = 200;
      if (uVar1 == 3) goto LAB_00108539;
      _err_print_error("_render_target_get_sdf_rect",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xef1,
                       "Invalid viewport SDF oversize, defaulting to 100%.",0,0);
    }
    iVar2 = 100;
  }
LAB_00108539:
  local_40 = Vector2i::operator*((Vector2i *)param_1,iVar2);
  local_38 = Vector2i::operator/((Vector2i *)&local_40,100);
  local_48 = Vector2i::operator-((Vector2i *)&local_38,(Vector2i *)param_1);
  local_38 = 0;
  local_30[0] = *(undefined8 *)param_1;
  Vector2i::operator-=((Vector2i *)&local_38,(Vector2i *)&local_48);
  local_40 = Vector2i::operator*((Vector2i *)&local_48,2);
  Vector2i::operator+=((Vector2i *)local_30,(Vector2i *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_get_sdf_rect(RID) const */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_sdf_rect(TextureStorage *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  RenderTarget *pRVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar3 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    iVar1 = *(int *)(pRVar3 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = _render_target_get_sdf_rect(this,pRVar3);
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_sdf_rect",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xf01,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_is_sdf_enabled(RID) const */

undefined1 __thiscall
RendererRD::TextureStorage::render_target_is_sdf_enabled(TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x46);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_is_sdf_enabled",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xf0f,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::_render_target_clear_sdf(RendererRD::TextureStorage::RenderTarget*)
    */

void __thiscall
RendererRD::TextureStorage::_render_target_clear_sdf(TextureStorage *this,RenderTarget *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(param_1 + 0x80));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(param_1 + 0x90));
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(param_1 + 0x98));
  *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xa8) = (undefined1  [16])0x0;
  return;
}



/* RendererRD::TextureStorage::render_target_set_sdf_size_and_scale(RID,
   RenderingServer::ViewportSDFOversize, RenderingServer::ViewportSDFScale) */

void __thiscall
RendererRD::TextureStorage::render_target_set_sdf_size_and_scale
          (TextureStorage *this,ulong param_2,int param_3,int param_4)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if ((*(int *)(pRVar1 + 0xb8) == param_3) && (*(int *)(pRVar1 + 0xbc) == param_4)) {
        return;
      }
      *(int *)(pRVar1 + 0xb8) = param_3;
      *(int *)(pRVar1 + 0xbc) = param_4;
      _render_target_clear_sdf(this,pRVar1);
      return;
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_sdf_size_and_scale",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xed5,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_clear_render_target(RendererRD::TextureStorage::RenderTarget*) */

void __thiscall
RendererRD::TextureStorage::_clear_render_target(TextureStorage *this,RenderTarget *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 (*) [16])(param_1 + 0xe8) = (undefined1  [16])0x0;
  if ((*(long *)(param_1 + 0x108) != 0) && (*(int *)(param_1 + 300) != 0)) {
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x128) * 4);
    if (uVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x110) + lVar7) != 0) {
          *(int *)(*(long *)(param_1 + 0x110) + lVar7) = 0;
          Memory::free_static(*(void **)(*(long *)(param_1 + 0x108) + lVar7 * 2),false);
          *(undefined8 *)(*(long *)(param_1 + 0x108) + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar6 << 2);
    }
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined1 (*) [16])(param_1 + 0x118) = (undefined1  [16])0x0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar5);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if ((lVar7 != 0) && (*(long *)(lVar7 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar7 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
      lVar7 = *(long *)(param_1 + 0x28);
      goto joined_r0x00108a74;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x28);
joined_r0x00108a74:
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 0x48);
  }
  else {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar5,*(undefined8 *)(param_1 + 0x28));
    lVar7 = *(long *)(param_1 + 0x48);
  }
  if (lVar7 != 0) {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar5);
    lVar7 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if ((lVar7 != 0) && (*(long *)(lVar7 + -8) != 0)) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      else {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  _render_target_clear_sdf(this,param_1);
  uVar3 = *(ulong *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar3 == 0) {
    return;
  }
  if ((uint)uVar3 < *(uint *)(this + 0x124)) {
    lVar7 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
            *(long *)(*(long *)(this + 0x110) +
                     ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    iVar2 = *(int *)(lVar7 + 0x110);
    if (iVar2 == (int)(uVar3 >> 0x20)) {
      *(undefined8 *)(lVar7 + 0x78) = 0;
      return;
    }
    uVar6 = iVar2 + 0x80000000;
    if (uVar6 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,uVar6);
    }
  }
  _DAT_00000078 = 0;
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* RendererRD::TextureStorage::render_target_free(RID) */

void __thiscall RendererRD::TextureStorage::render_target_free(TextureStorage *this,ulong param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  RenderTarget *pRVar9;
  long lVar10;
  uint uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  
  if (param_2 != 0) {
    uVar11 = (uint)param_2;
    if (uVar11 < *(uint *)(this + 0x2ac)) {
      pRVar9 = (RenderTarget *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
               *(long *)(*(long *)(this + 0x298) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
      iVar2 = *(int *)(pRVar9 + 0x150);
      if (iVar2 == (int)(param_2 >> 0x20)) {
        _clear_render_target(this,pRVar9);
        uVar4 = *(ulong *)(pRVar9 + 0x130);
        if (uVar4 == 0) {
          uVar6 = *(uint *)(this + 0x2ac);
        }
        else {
          if (*(uint *)(this + 0x124) <= (uint)uVar4) {
LAB_0011e577:
            DAT_00000080 = 0;
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar13 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                   *(long *)(*(long *)(this + 0x110) +
                            ((uVar4 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
          iVar3 = *(int *)(lVar13 + 0x110);
          if (iVar3 != (int)(uVar4 >> 0x20)) {
            if (iVar3 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,iVar2);
            }
            goto LAB_0011e577;
          }
          *(undefined1 *)(lVar13 + 0x80) = 0;
          (**(code **)(*(long *)this + 0x50))(this);
          uVar6 = *(uint *)(this + 0x2ac);
        }
        if (uVar11 < uVar6) {
          uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8);
          lVar14 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158;
          lVar13 = *(long *)(*(long *)(this + 0x298) + uVar4 * 8) + lVar14;
          if (*(int *)(lVar13 + 0x150) < 0) {
            _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0,0);
            return;
          }
          if (iVar2 == *(int *)(lVar13 + 0x150)) {
            pvVar12 = *(void **)(lVar13 + 0x108);
            if (pvVar12 != (void *)0x0) {
              if (*(int *)(lVar13 + 300) != 0) {
                uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar13 + 0x128) * 4);
                if (uVar6 == 0) {
                  *(undefined4 *)(lVar13 + 300) = 0;
                  *(undefined1 (*) [16])(lVar13 + 0x118) = (undefined1  [16])0x0;
                }
                else {
                  lVar10 = 0;
                  do {
                    piVar7 = (int *)(*(long *)(lVar13 + 0x110) + lVar10);
                    if (*piVar7 != 0) {
                      *piVar7 = 0;
                      Memory::free_static(*(void **)((long)pvVar12 + lVar10 * 2),false);
                      pvVar12 = *(void **)(lVar13 + 0x108);
                      *(undefined8 *)((long)pvVar12 + lVar10 * 2) = 0;
                    }
                    lVar10 = lVar10 + 4;
                  } while (lVar10 != (ulong)uVar6 * 4);
                  *(undefined4 *)(lVar13 + 300) = 0;
                  *(undefined1 (*) [16])(lVar13 + 0x118) = (undefined1  [16])0x0;
                  if (pvVar12 == (void *)0x0) goto LAB_00108d5d;
                }
              }
              Memory::free_static(pvVar12,false);
              Memory::free_static(*(void **)(lVar13 + 0x110),false);
            }
LAB_00108d5d:
            if (*(long *)(lVar13 + 0x68) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(lVar13 + 0x68) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)(lVar13 + 0x68);
                *(undefined8 *)(lVar13 + 0x68) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            if (*(long *)(lVar13 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(lVar13 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar10 = *(long *)(lVar13 + 0x20);
                *(undefined8 *)(lVar13 + 0x20) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            lVar13 = *(long *)(this + 0x2a0);
            *(undefined4 *)(*(long *)(*(long *)(this + 0x298) + uVar4 * 8) + 0x150 + lVar14) =
                 0xffffffff;
            uVar6 = *(int *)(this + 0x2b0) - 1;
            *(uint *)(this + 0x2b0) = uVar6;
            *(uint *)(*(long *)(lVar13 + ((ulong)uVar6 / (ulong)*(uint *)(this + 0x2a8)) * 8) +
                     ((ulong)uVar6 % (ulong)*(uint *)(this + 0x2a8)) * 4) = uVar11;
            return;
          }
          uVar8 = 0x171;
        }
        else {
          uVar8 = 0x161;
        }
        _err_print_error(&_LC68,"./core/templates/rid_owner.h",uVar8,"Method/function failed.",0,0);
        return;
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _clear_render_target(this,(RenderTarget *)0x0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* RendererRD::TextureStorage::render_target_sdf_process(RID) */

void __thiscall
RendererRD::TextureStorage::render_target_sdf_process(TextureStorage *this,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 extraout_RDX;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  RenderTarget *pRVar11;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar11 = (RenderTarget *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
              *(long *)(*(long *)(this + 0x298) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar11 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(long *)(pRVar11 + 0x88) == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = 0xfab;
          pcVar4 = "Condition \"rt->sdf_buffer_write_fb.is_null()\" is true.";
          goto LAB_00109316;
        }
        goto LAB_001093a6;
      }
      _render_target_get_sdf_rect(this,pRVar11);
      local_60 = 0;
      iVar8 = (int)((ulong)extraout_RDX >> 0x20);
      local_58 = extraout_RDX;
      if (*(int *)(pRVar11 + 0xbc) == 1) {
        local_68 = CONCAT44(iVar8 >> 1,(int)extraout_RDX >> 1);
        local_60 = 0x100000000;
LAB_00109086:
        RenderingDevice::get_singleton();
        pvVar1 = (void *)RenderingDevice::compute_list_begin();
        uVar2 = RenderingDevice::get_singleton();
        local_6c = 5;
        lVar6 = 1;
      }
      else {
        if (*(int *)(pRVar11 + 0xbc) == 2) {
          local_60 = 0x200000000;
          local_68 = CONCAT44(iVar8 >> 2,(int)extraout_RDX >> 2);
          goto LAB_00109086;
        }
        local_68 = extraout_RDX;
        RenderingDevice::get_singleton();
        pvVar1 = (void *)RenderingDevice::compute_list_begin();
        uVar2 = RenderingDevice::get_singleton();
        local_6c = 4;
        lVar6 = 0;
      }
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar2,pvVar1,*(undefined8 *)(this + lVar6 * 8 + 0x468));
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar2,pvVar1,*(undefined8 *)(pRVar11 + 0xb0),0)
      ;
      lVar6 = RenderingDevice::get_singleton();
      uVar5 = (uint)&local_68;
      RenderingDevice::compute_list_set_push_constant(lVar6,pvVar1,uVar5);
      lVar6 = RenderingDevice::get_singleton();
      uVar9 = (uint)pvVar1;
      RenderingDevice::compute_list_dispatch_threads(lVar6,uVar9,(uint)local_68,local_68._4_4_);
      iVar8 = local_68._4_4_;
      if ((int)local_68._4_4_ < (int)(uint)local_68) {
        iVar8 = (uint)local_68;
      }
      uVar7 = iVar8 / 2 - 1;
      uVar7 = uVar7 | (int)uVar7 >> 1;
      uVar7 = uVar7 | (int)uVar7 >> 2;
      uVar7 = uVar7 | (int)uVar7 >> 4;
      uVar7 = uVar7 | (int)uVar7 >> 8;
      uVar2 = RenderingDevice::get_singleton();
      iVar8 = (uVar7 | (int)uVar7 >> 0x10) + 1;
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar2,pvVar1,*(undefined8 *)(this + 0x478));
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar6);
      if (iVar8 < 1) {
        uVar3 = 0;
      }
      else {
        bVar10 = 0;
        do {
          uVar2 = RenderingDevice::get_singleton();
          uVar3 = (ulong)bVar10;
          bVar10 = bVar10 ^ 1;
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar2,pvVar1,*(undefined8 *)(pRVar11 + uVar3 * 8 + 0xa8),0);
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          iVar8 = iVar8 >> 1;
          lVar6 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar6,pvVar1,uVar5);
          lVar6 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads(lVar6,uVar9,(uint)local_68,local_68._4_4_);
          lVar6 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_add_barrier(lVar6);
        } while (iVar8 != 0);
        uVar3 = (ulong)bVar10;
      }
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar2,pvVar1,*(undefined8 *)(this + (long)local_6c * 8 + 0x468));
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set
                (uVar2,pvVar1,*(undefined8 *)(pRVar11 + uVar3 * 8 + 0xa8),0);
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar6,pvVar1,uVar5);
      lVar6 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar6,uVar9,(uint)local_68,local_68._4_4_);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001093a6;
    }
    if (*(int *)(pRVar11 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar2 = 0xfaa;
    pcVar4 = "Parameter \"rt\" is null.";
LAB_00109316:
    _err_print_error("render_target_sdf_process",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar2,pcVar4,0,0
                    );
    return;
  }
LAB_001093a6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_get_framebuffer_uniform_set(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_framebuffer_uniform_set
          (TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x70);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_framebuffer_uniform_set",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x1076,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_backbuffer_uniform_set(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_backbuffer_uniform_set
          (TextureStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x78);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_backbuffer_uniform_set",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x107b,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_framebuffer_uniform_set(RID, RID) */

void __thiscall
RendererRD::TextureStorage::render_target_set_framebuffer_uniform_set
          (TextureStorage *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x70) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_framebuffer_uniform_set",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x1081,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_set_backbuffer_uniform_set(RID, RID) */

void __thiscall
RendererRD::TextureStorage::render_target_set_backbuffer_uniform_set
          (TextureStorage *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x78) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_backbuffer_uniform_set",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x1087,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_get_color_format(bool, bool) */

ulong RendererRD::TextureStorage::render_target_get_color_format(bool param_1,bool param_2)

{
  ulong uVar1;
  
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x001096e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*RendererSceneRenderRD::singleton + 0x250))();
    return uVar1;
  }
  return (ulong)((-(uint)!param_2 & 0xfffffffa) + 0x2a);
}



/* RendererRD::TextureStorage::render_target_get_color_usage_bits(bool) */

int RendererRD::TextureStorage::render_target_get_color_usage_bits(bool param_1)

{
  return (-(uint)!param_1 & 0x89) + 2;
}



/* RendererRD::TextureStorage::texture_add_to_decal_atlas(RID, bool) */

void __thiscall
RendererRD::TextureStorage::texture_add_to_decal_atlas
          (TextureStorage *this,long param_2,byte param_3)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
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
  code *pcVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  long in_FS_OFFSET;
  long local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0x168);
  local_60 = param_2;
  if ((lVar3 != 0) && (*(int *)(this + 0x18c) != 0)) {
    lVar4 = *(long *)(this + 0x170);
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x188) * 4);
    uVar29 = CONCAT44(0,uVar2);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
    uVar21 = param_2 * 0x3ffff - 1;
    uVar21 = (uVar21 ^ uVar21 >> 0x1f) * 0x15;
    uVar21 = (uVar21 ^ uVar21 >> 0xb) * 0x41;
    uVar21 = uVar21 >> 0x16 ^ uVar21;
    uVar26 = uVar21 & 0xffffffff;
    if ((int)uVar21 == 0) {
      uVar26 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar26 * lVar5;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar29;
    uVar21 = SUB168(auVar6 * auVar13,8);
    uVar27 = *(uint *)(lVar4 + uVar21 * 4);
    if (uVar27 != 0) {
      uVar23 = SUB164(auVar6 * auVar13,8);
      uVar31 = 0;
      uVar25 = uVar21;
      uVar30 = uVar21;
      uVar28 = uVar27;
      do {
        if (((uint)uVar26 == uVar28) && (param_2 == *(long *)(*(long *)(lVar3 + uVar25 * 8) + 0x10))
           ) {
          uVar28 = 0;
          while (((uint)uVar26 != uVar27 ||
                 (param_2 != *(long *)(*(long *)(lVar3 + uVar21 * 8) + 0x10)))) {
            uVar28 = uVar28 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar23 + 1) * lVar5;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar29;
            uVar21 = SUB168(auVar10 * auVar17,8);
            uVar27 = *(uint *)(lVar4 + uVar21 * 4);
            uVar23 = SUB164(auVar10 * auVar17,8);
            if ((uVar27 == 0) ||
               (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar27 * lVar5, auVar18._8_8_ = 0,
               auVar18._0_8_ = uVar29, auVar12._8_8_ = 0,
               auVar12._0_8_ = (ulong)((uVar2 + uVar23) - SUB164(auVar11 * auVar18,8)) * lVar5,
               auVar19._8_8_ = 0, auVar19._0_8_ = uVar29, SUB164(auVar12 * auVar19,8) < uVar28)) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)invalidInstructionException();
              (*pcVar20)();
            }
          }
          lVar3 = *(long *)(lVar3 + (ulong)uVar23 * 8);
          piVar1 = (int *)(lVar3 + 0x1c);
          *piVar1 = *piVar1 + 1;
          if (param_3 != 0) {
            piVar1 = (int *)(lVar3 + 0x18);
            *piVar1 = *piVar1 + 1;
          }
          goto LAB_00109962;
        }
        uVar31 = uVar31 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)((int)uVar30 + 1) * lVar5;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar29;
        uVar25 = SUB168(auVar7 * auVar14,8);
        uVar28 = *(uint *)(lVar4 + uVar25 * 4);
        uVar24 = SUB164(auVar7 * auVar14,8);
        uVar30 = (ulong)uVar24;
      } while ((uVar28 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar28 * lVar5, auVar15._8_8_ = 0,
              auVar15._0_8_ = uVar29, auVar9._8_8_ = 0,
              auVar9._0_8_ = (ulong)((uVar2 + uVar24) - SUB164(auVar8 * auVar15,8)) * lVar5,
              auVar16._8_8_ = 0, auVar16._0_8_ = uVar29, uVar31 <= SUB164(auVar9 * auVar16,8)));
    }
  }
  uStack_50 = 0;
  local_48 = 0;
  puVar22 = (undefined8 *)
            HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
            ::operator[]((HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
                          *)(this + 0x160),(RID *)&local_60);
  uStack_54 = 1;
  local_58 = (uint)param_3;
  puVar22[2] = local_48;
  *puVar22 = CONCAT44(1,local_58);
  puVar22[1] = uStack_50;
  this[400] = (TextureStorage)0x1;
LAB_00109962:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_get_rd_texture_slice(RID, unsigned int) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_rd_texture_slice
          (TextureStorage *this,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar4 + 0x150) == (int)(param_2 >> 0x20)) {
      uVar5 = *(uint *)(lVar4 + 8);
      if (uVar5 == 1) {
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
      }
      else {
        uVar8 = (ulong)param_3;
        if (uVar5 <= param_3) {
          _err_print_index_error
                    ("render_target_get_rd_texture_slice",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe89,uVar8,
                     (ulong)uVar5,"p_layer","rt->view_count","",false,false);
          uVar3 = 0;
          goto LAB_00109b30;
        }
        lVar2 = *(long *)(lVar4 + 0x20);
        if ((lVar2 == 0) || (lVar7 = *(long *)(lVar2 + -8), lVar7 == 0)) {
          uVar5 = 0;
          do {
            uVar3 = RenderingDevice::get_singleton();
            uVar6 = uVar5 + 1;
            local_38 = 6;
            local_48 = __LC202;
            uStack_40 = _UNK_00128e58;
            uVar3 = RenderingDevice::texture_create_shared_from_slice
                              (uVar3,&local_48,*(undefined8 *)(lVar4 + 0x10),uVar5,0,1,0,0);
            Vector<RID>::push_back((Vector<RID> *)(lVar4 + 0x18),uVar3);
            uVar5 = uVar6;
          } while (uVar6 < *(uint *)(lVar4 + 8));
          lVar2 = *(long *)(lVar4 + 0x20);
          if (lVar2 == 0) {
            lVar7 = 0;
            goto LAB_00109c6b;
          }
          lVar7 = *(long *)(lVar2 + -8);
        }
        if (lVar7 <= (long)uVar8) {
LAB_00109c6b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)(lVar2 + uVar8 * 8);
      }
      goto LAB_00109b30;
    }
    if (*(int *)(lVar4 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_rd_texture_slice",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe84,
                   "Parameter \"rt\" is null.",0,0);
  uVar3 = 0;
LAB_00109b30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::canvas_texture_allocate() */

void __thiscall RendererRD::TextureStorage::canvas_texture_allocate(TextureStorage *this)

{
  RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true>::allocate_rid
            ((RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true> *)(this + 0xb0));
  return;
}



/* RendererRD::TextureStorage::texture_allocate() */

void __thiscall RendererRD::TextureStorage::texture_allocate(TextureStorage *this)

{
  RID_Alloc<RendererRD::TextureStorage::Texture,true>::allocate_rid
            ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108));
  return;
}



/* RendererRD::TextureStorage::texture_create_from_native_handle(RenderingServer::TextureType,
   Image::Format, unsigned long, int, int, int, int, RenderingServer::TextureLayeredType) */

undefined8 __thiscall
RendererRD::TextureStorage::texture_create_from_native_handle
          (TextureStorage *this,int param_2,uint param_3,undefined8 param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    cVar2 = '\x05';
    if ((param_9 != 0) && (cVar2 = '\x03', param_9 != 1)) {
      cVar2 = (param_9 == 2) + '\x05';
    }
  }
  else {
    cVar2 = (param_2 == 2) + '\x01';
  }
  uVar3 = 0x24;
  if (param_3 < 0x27) {
    uVar3 = CSWTCH_2602[param_3];
  }
  uVar1 = RenderingDevice::get_singleton();
  local_48 = RenderingDevice::texture_create_from_extension
                       (uVar1,cVar2,uVar3,0,3,param_4,(long)param_5,(long)param_6,(long)param_7,
                        (long)param_8);
  if (*(code **)(*(long *)this + 0x48) == texture_allocate) {
    uVar1 = RID_Alloc<RendererRD::TextureStorage::Texture,true>::allocate_rid
                      ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108));
  }
  else {
    uVar1 = (**(code **)(*(long *)this + 0x48))(this);
  }
  (**(code **)(*(long *)this + 0x130))(this,uVar1,&local_48,param_9);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::Texture::TEMPNAMEPLACEHOLDERVALUE(RendererRD::TextureStorage::Texture
   const&) [clone .isra.0] */

void __thiscall RendererRD::TextureStorage::Texture::operator=(Texture *this,Texture *param_1)

{
  ulong uVar1;
  uint uVar2;
  Image *pIVar3;
  Image *pIVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar13;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x54);
  uVar10 = *(undefined8 *)(param_1 + 0x3c);
  uVar11 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(this + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)(this + 0x54) = uVar13;
  *(undefined8 *)(this + 0x3c) = uVar10;
  *(undefined8 *)(this + 0x44) = uVar11;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  if (*(long *)(this + 0x68) != *(long *)(param_1 + 0x68)) {
    CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_ref
              ((CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *)(this + 0x68),
               (CowData *)(param_1 + 0x68));
  }
  pIVar3 = *(Image **)(param_1 + 0x88);
  pIVar4 = *(Image **)(this + 0x88);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined2 *)(this + 0x80) = *(undefined2 *)(param_1 + 0x80);
  if (pIVar3 != pIVar4) {
    *(Image **)(this + 0x88) = pIVar3;
    if ((pIVar3 != (Image *)0x0) && (cVar12 = RefCounted::reference(), cVar12 == '\0')) {
      *(undefined8 *)(this + 0x88) = 0;
    }
    if ((pIVar4 != (Image *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) {
      memdelete<Image>(pIVar4);
    }
  }
  if (*(long *)(this + 0x90) != *(long *)(param_1 + 0x90)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x90),(CowData *)(param_1 + 0x90));
  }
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  if (*(long *)(this + 0xa8) != *(long *)(param_1 + 0xa8)) {
    CowData<RID>::_ref((CowData<RID> *)(this + 0xa8),(CowData *)(param_1 + 0xa8));
  }
  if (param_1 + 0xb0 != this + 0xb0) {
    pvVar5 = *(void **)(this + 0xb0);
    if (pvVar5 != (void *)0x0) {
      if (*(int *)(this + 0xd4) != 0) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd0) * 4) != 0) {
          memset(*(void **)(this + 200),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd0) * 4) << 2);
        }
        *(undefined4 *)(this + 0xd4) = 0;
      }
      Memory::free_static(pvVar5,false);
      Memory::free_static(*(void **)(this + 0xc0),false);
      Memory::free_static(*(void **)(this + 0xb8),false);
      Memory::free_static(*(void **)(this + 200),false);
      *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
    }
    uVar1 = *(ulong *)(param_1 + 0xd0);
    *(ulong *)(this + 0xd0) = uVar1;
    if ((int)(uVar1 >> 0x20) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
      uVar1 = (ulong)uVar2 * 4;
      uVar13 = Memory::alloc_static(uVar1,false);
      *(undefined8 *)(this + 200) = uVar13;
      uVar13 = Memory::alloc_static((ulong)uVar2 * 8,false);
      *(undefined8 *)(this + 0xb0) = uVar13;
      uVar13 = Memory::alloc_static(uVar1,false);
      *(undefined8 *)(this + 0xc0) = uVar13;
      lVar14 = Memory::alloc_static(uVar1,false);
      *(long *)(this + 0xb8) = lVar14;
      if (*(int *)(this + 0xd4) != 0) {
        lVar6 = *(long *)(this + 0xb0);
        lVar7 = *(long *)(param_1 + 0xb0);
        lVar15 = 0;
        lVar8 = *(long *)(param_1 + 0xc0);
        lVar9 = *(long *)(this + 0xc0);
        do {
          *(undefined8 *)(lVar6 + lVar15 * 8) = *(undefined8 *)(lVar7 + lVar15 * 8);
          *(undefined4 *)(lVar9 + lVar15 * 4) = *(undefined4 *)(lVar8 + lVar15 * 4);
          lVar15 = lVar15 + 1;
        } while ((uint)lVar15 < *(uint *)(this + 0xd4));
      }
      if (uVar2 != 0) {
        lVar6 = *(long *)(param_1 + 200);
        lVar7 = *(long *)(this + 200);
        uVar16 = 0;
        lVar8 = *(long *)(param_1 + 0xb8);
        do {
          *(undefined4 *)(lVar7 + uVar16) = *(undefined4 *)(lVar6 + uVar16);
          *(undefined4 *)(lVar14 + uVar16) = *(undefined4 *)(lVar8 + uVar16);
          uVar16 = uVar16 + 4;
        } while (uVar16 != uVar1);
      }
    }
  }
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  uVar13 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(this + 0x108) = uVar13;
  return;
}



/* RendererRD::TextureStorage::texture_proxy_update(RID, RID) */

void __thiscall
RendererRD::TextureStorage::texture_proxy_update(TextureStorage *this,ulong param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  Texture *this_00;
  long lVar9;
  Texture *pTVar10;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    this_00 = (Texture *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
              *(long *)(*(long *)(this + 0x110) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
    if (*(int *)(this_00 + 0x110) == (int)(param_2 >> 0x20)) {
      if (this_00[0x81] == (Texture)0x0) {
        uVar5 = 0x563;
        pcVar6 = "Condition \"!tex->is_proxy\" is true.";
      }
      else {
        if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x124))) {
          pTVar10 = (Texture *)
                    (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                    *(long *)(*(long *)(this + 0x110) +
                             ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
          if (*(int *)(pTVar10 + 0x110) == (int)(param_3 >> 0x20)) {
            if (pTVar10[0x81] == (Texture)0x0) {
              if (*(long *)(this_00 + 0x98) == 0) {
LAB_0010a3c0:
                uVar5 = *(undefined8 *)(this_00 + 0x108);
                Texture::operator=(this_00,pTVar10);
                *(ulong *)(this_00 + 0x98) = param_3;
                *(undefined2 *)(this_00 + 0x80) = 0x100;
                lVar8 = *(long *)(this_00 + 0xa8);
                if ((lVar8 != 0) && (*(long *)(lVar8 + -8) != 0)) {
                  LOCK();
                  plVar1 = (long *)(lVar8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar8 = *(long *)(this_00 + 0xa8);
                    *(undefined8 *)(this_00 + 0xa8) = 0;
                    Memory::free_static((void *)(lVar8 + -0x10),false);
                  }
                  else {
                    *(undefined8 *)(this_00 + 0xa8) = 0;
                  }
                }
                Vector<RID>::push_back((Vector<RID> *)(pTVar10 + 0xa0),param_2);
                *(undefined8 *)(this_00 + 0x108) = uVar5;
                *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this_00 + 0x20);
                uVar5 = RenderingDevice::get_singleton();
                uVar5 = RenderingDevice::texture_create_shared
                                  (uVar5,this_00 + 0x28,*(undefined8 *)(pTVar10 + 0x10));
                *(undefined8 *)(this_00 + 0x10) = uVar5;
                if (*(long *)(this_00 + 0x18) != 0) {
                  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this_00 + 0x24);
                  uVar5 = RenderingDevice::get_singleton();
                  uVar5 = RenderingDevice::texture_create_shared
                                    (uVar5,this_00 + 0x28,*(undefined8 *)(pTVar10 + 0x10));
                  *(undefined8 *)(this_00 + 0x18) = uVar5;
                  return;
                }
                return;
              }
              uVar5 = RenderingDevice::get_singleton();
              cVar4 = RenderingDevice::texture_is_valid(uVar5,*(undefined8 *)(this_00 + 0x10));
              if (cVar4 != '\0') {
                uVar5 = RenderingDevice::get_singleton();
                RenderingDevice::free(uVar5,*(undefined8 *)(this_00 + 0x10));
                *(undefined8 *)(this_00 + 0x10) = 0;
              }
              uVar5 = RenderingDevice::get_singleton();
              cVar4 = RenderingDevice::texture_is_valid(uVar5,*(undefined8 *)(this_00 + 0x18));
              if (cVar4 != '\0') {
                uVar5 = RenderingDevice::get_singleton();
                RenderingDevice::free(uVar5,*(undefined8 *)(this_00 + 0x18));
                *(undefined8 *)(this_00 + 0x18) = 0;
              }
              if (*(long *)(this_00 + 0x98) != 0) {
                uVar2 = *(ulong *)(this_00 + 0x98);
                if ((uint)uVar2 < *(uint *)(this + 0x124)) {
                  lVar8 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                          *(long *)(*(long *)(this + 0x110) +
                                   ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
                  if (*(int *)(lVar8 + 0x110) == (int)(uVar2 >> 0x20)) {
                    lVar3 = *(long *)(lVar8 + 0xa8);
                    if ((lVar3 != 0) && (lVar7 = *(long *)(lVar3 + -8), 0 < lVar7)) {
                      lVar9 = 0;
                      do {
                        if (param_2 == *(ulong *)(lVar3 + lVar9 * 8)) {
                          if (lVar9 < lVar7) {
                            CowData<RID>::_copy_on_write((CowData<RID> *)(lVar8 + 0xa8));
                            lVar3 = *(long *)(lVar8 + 0xa8);
                            if (lVar3 == 0) {
                              lVar7 = -1;
                            }
                            else {
                              lVar7 = *(long *)(lVar3 + -8) + -1;
                              if (lVar9 < lVar7) {
                                memmove((void *)(lVar3 + lVar9 * 8),(void *)(lVar3 + 8 + lVar9 * 8),
                                        (lVar7 - lVar9) * 8);
                              }
                            }
                            CowData<RID>::resize<false>((CowData<RID> *)(lVar8 + 0xa8),lVar7);
                          }
                          else {
                            _err_print_index_error
                                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar9,lVar7,
                                       "p_index","size()","",false,false);
                          }
                          break;
                        }
                        lVar9 = lVar9 + 1;
                      } while (lVar7 != lVar9);
                    }
                    goto LAB_0010a3c0;
                  }
                  if (*(int *)(lVar8 + 0x110) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
              }
              uVar5 = 0x573;
              pcVar6 = "Parameter \"prev_tex\" is null.";
            }
            else {
              uVar5 = 0x566;
              pcVar6 = "Condition \"proxy_to->is_proxy\" is true.";
            }
            goto LAB_0010a4e2;
          }
          if (*(int *)(pTVar10 + 0x110) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        uVar5 = 0x565;
        pcVar6 = "Parameter \"proxy_to\" is null.";
      }
      goto LAB_0010a4e2;
    }
    if (*(int *)(this_00 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar5 = 0x562;
  pcVar6 = "Parameter \"tex\" is null.";
LAB_0010a4e2:
  _err_print_error("texture_proxy_update",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar5,pcVar6,0,0);
  return;
}



/* RendererRD::TextureStorage::texture_proxy_initialize(RID, RID) */

void __thiscall
RendererRD::TextureStorage::texture_proxy_initialize
          (TextureStorage *this,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  long local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  Image *local_d0;
  long local_c8;
  ulong local_c0;
  long local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x124))) {
    puVar10 = (undefined8 *)
              (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
              *(long *)(*(long *)(this + 0x110) +
                       ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
    if (*(int *)(puVar10 + 0x22) == (int)(param_3 >> 0x20)) {
      local_158 = *puVar10;
      local_130 = puVar10[5];
      uStack_128 = puVar10[6];
      local_11c = *(undefined8 *)((long)puVar10 + 0x3c);
      uStack_114 = *(undefined8 *)((long)puVar10 + 0x44);
      local_10c = *(undefined8 *)((long)puVar10 + 0x4c);
      uStack_104 = *(undefined8 *)((long)puVar10 + 0x54);
      local_150 = *(undefined4 *)(puVar10 + 1);
      local_148 = puVar10[2];
      local_140 = puVar10[3];
      local_138 = puVar10[4];
      local_120 = *(undefined4 *)(puVar10 + 7);
      local_fc = *(undefined4 *)((long)puVar10 + 0x5c);
      local_f0 = 0;
      if (puVar10[0xd] != 0) {
        CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_ref
                  ((CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *)&local_f0,
                   (CowData *)(puVar10 + 0xd));
      }
      local_e8 = *(undefined4 *)(puVar10 + 0xe);
      local_e0 = puVar10[0xf];
      local_d8 = *(undefined2 *)(puVar10 + 0x10);
      local_d0 = (Image *)0x0;
      if (((Image *)puVar10[0x11] != (Image *)0x0) &&
         (local_d0 = (Image *)puVar10[0x11], cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_d0 = (Image *)0x0;
      }
      local_c8 = 0;
      if (puVar10[0x12] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(puVar10 + 0x12));
      }
      local_c0 = puVar10[0x13];
      local_b0 = 0;
      if (puVar10[0x15] != 0) {
        CowData<RID>::_ref((CowData<RID> *)&local_b0,(CowData *)(puVar10 + 0x15));
      }
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = puVar10[0x1a];
      if ((int)(local_88 >> 0x20) != 0) {
        uVar3 = *(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4);
        uVar2 = (ulong)uVar3 * 4;
        uVar7 = Memory::alloc_static(uVar2,false);
        local_98._8_8_ = uVar7;
        uVar7 = Memory::alloc_static((ulong)uVar3 * 8,false);
        local_a8._0_8_ = uVar7;
        local_98._0_8_ = Memory::alloc_static(uVar2,false);
        lVar8 = Memory::alloc_static(uVar2,false);
        local_a8._8_8_ = lVar8;
        if (local_88._4_4_ != 0) {
          lVar4 = puVar10[0x16];
          lVar9 = 0;
          lVar5 = puVar10[0x18];
          do {
            *(undefined8 *)(local_a8._0_8_ + lVar9 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
            *(undefined4 *)(local_98._0_8_ + lVar9 * 4) = *(undefined4 *)(lVar5 + lVar9 * 4);
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < local_88._4_4_);
        }
        if (uVar3 != 0) {
          lVar4 = puVar10[0x19];
          lVar9 = 0;
          lVar5 = puVar10[0x17];
          do {
            *(undefined4 *)(local_98._8_8_ + lVar9) = *(undefined4 *)(lVar4 + lVar9);
            *(undefined4 *)(lVar8 + lVar9) = *(undefined4 *)(lVar5 + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar2 - lVar9 != 0);
        }
      }
      local_80 = puVar10[0x1b];
      local_58 = puVar10[0x20];
      uStack_50 = puVar10[0x21];
      local_78 = puVar10[0x1c];
      local_70 = puVar10[0x1d];
      local_68 = puVar10[0x1e];
      local_60 = puVar10[0x1f];
      local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(puVar10 + 4));
      uVar7 = RenderingDevice::get_singleton();
      local_148 = RenderingDevice::texture_create_shared(uVar7,&local_130,puVar10[2]);
      if (local_140 != 0) {
        local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)((long)puVar10 + 0x24));
        uVar7 = RenderingDevice::get_singleton();
        local_140 = RenderingDevice::texture_create_shared(uVar7,&local_130,puVar10[2]);
      }
      lVar8 = local_b0;
      local_d8 = 0x100;
      local_c0 = param_3;
      if ((local_b0 != 0) && (*(long *)(local_b0 + -8) != 0)) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
        else {
          local_b0 = 0;
        }
      }
      RID_Alloc<RendererRD::TextureStorage::Texture,true>::initialize_rid
                ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108),param_2,
                 &local_158);
      Vector<RID>::push_back((Vector<RID> *)(puVar10 + 0x14));
      uVar7 = local_a8._0_8_;
      if ((void *)local_a8._0_8_ != (void *)0x0) {
        if (local_88._4_4_ != 0) {
          if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0) {
            memset((void *)local_98._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) << 2);
          }
          local_88 = local_88 & 0xffffffff;
        }
        Memory::free_static((void *)uVar7,false);
        Memory::free_static((void *)local_98._0_8_,false);
        Memory::free_static((void *)local_a8._8_8_,false);
        Memory::free_static((void *)local_98._8_8_,false);
      }
      lVar8 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if ((local_d0 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
        memdelete<Image>(local_d0);
      }
      lVar8 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ad4d;
    }
    if (*(int *)(puVar10 + 0x22) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("texture_proxy_initialize",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x442,
                     "Parameter \"tex\" is null.",0,0);
    return;
  }
LAB_0010ad4d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::texture_2d_layer_get(RID, int) const */

undefined8 *
RendererRD::TextureStorage::texture_2d_layer_get
          (undefined8 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Image *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined1 local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x124))) {
    lVar7 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
            *(long *)(*(long *)(param_2 + 0x110) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
    if (*(int *)(lVar7 + 0x110) == (int)(param_3 >> 0x20)) {
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::texture_get_data(local_58,uVar4,*(undefined8 *)(lVar7 + 0x10),param_4);
      if (local_50 == 0) {
        _err_print_error("texture_2d_layer_get",
                         "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5db,
                         "Condition \"data.is_empty()\" is true. Returning: Ref<Image>()",0,0);
        *param_1 = 0;
      }
      else {
        Image::create_from_data
                  (&local_78,*(undefined4 *)(lVar7 + 0x44),*(undefined4 *)(lVar7 + 0x48),
                   1 < *(int *)(lVar7 + 0x54),*(undefined4 *)(lVar7 + 0x40),local_58);
        cVar3 = Image::is_empty();
        if (cVar3 == '\0') {
          if (*(int *)(lVar7 + 0x3c) != *(int *)(lVar7 + 0x40)) {
            Image::convert(local_78);
          }
          *param_1 = 0;
          if (local_78 == (Image *)0x0) goto LAB_0010af89;
          *param_1 = local_78;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *param_1 = 0;
          }
        }
        else {
          lVar5 = *(long *)(lVar7 + 0x90);
          if ((lVar5 == 0) || (*(uint *)(lVar5 + -8) < 2)) {
            local_70 = 0;
            local_48 = "with no path";
            local_40 = 0xc;
            String::parse_latin1((StrRange *)&local_70);
          }
          else {
            local_60 = 0;
            plVar1 = (long *)(lVar5 + -0x10);
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010b162;
              LOCK();
              lVar6 = *plVar1;
              bVar8 = lVar5 == lVar6;
              if (bVar8) {
                *plVar1 = lVar5 + 1;
                lVar6 = lVar5;
              }
              UNLOCK();
            } while (!bVar8);
            if (lVar6 != -1) {
              local_60 = *(long *)(lVar7 + 0x90);
            }
LAB_0010b162:
            local_68 = 0;
            local_48 = "with path \'%s\'";
            local_40 = 0xe;
            String::parse_latin1((StrRange *)&local_68);
            vformat<String>(&local_70,(StrRange *)&local_68,&local_60);
            lVar7 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
          }
          local_60 = 0;
          plVar1 = (long *)(local_70 + -0x10);
          if (local_70 != 0) {
            do {
              lVar7 = *plVar1;
              if (lVar7 == 0) goto LAB_0010aeaf;
              LOCK();
              lVar5 = *plVar1;
              bVar8 = lVar7 == lVar5;
              if (bVar8) {
                *plVar1 = lVar7 + 1;
                lVar5 = lVar7;
              }
              UNLOCK();
            } while (!bVar8);
            if (lVar5 != -1) {
              local_60 = local_70;
            }
          }
LAB_0010aeaf:
          local_68 = 0;
          local_48 = "Texture %s has no data.";
          local_40 = 0x17;
          String::parse_latin1((StrRange *)&local_68);
          vformat<String>(&local_48,(StrRange *)&local_68,&local_60);
          _err_print_error("texture_2d_layer_get",
                           "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5df,
                           "Method/function failed. Returning: Ref<Image>()",&local_48,0,0);
          pcVar2 = local_48;
          if (local_48 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          lVar7 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_70;
          *param_1 = 0;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
        }
        if ((local_78 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
          memdelete<Image>(local_78);
        }
      }
LAB_0010af89:
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
      goto LAB_0010afb4;
    }
    if (*(int *)(lVar7 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_2d_layer_get",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5d8,
                   "Parameter \"tex\" is null.",0,0);
  *param_1 = 0;
LAB_0010afb4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RendererRD::TextureStorage::texture_free(RID) */

void __thiscall RendererRD::TextureStorage::texture_free(TextureStorage *this,ulong param_2)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  ulong *puVar2;
  int iVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  Texture *this_00;
  long lVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    uVar22 = (uint)param_2;
    if (uVar22 < *(uint *)(this + 0x124)) {
      this_00 = (Texture *)
                (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                *(long *)(*(long *)(this + 0x110) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
      iVar3 = *(int *)(this_00 + 0x110);
      if (iVar3 == (int)(param_2 >> 0x20)) {
        if (this_00[0x80] == (Texture)0x0) {
          Texture::cleanup(this_00);
          if ((this_00[0x81] != (Texture)0x0) && (*(long *)(this_00 + 0x98) != 0)) {
            uVar16 = *(ulong *)(this_00 + 0x98);
            if ((uint)uVar16 < *(uint *)(this + 0x124)) {
              lVar21 = ((uVar16 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                       *(long *)(*(long *)(this + 0x110) +
                                ((uVar16 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
              if (*(int *)(lVar21 + 0x110) == (int)(uVar16 >> 0x20)) {
                lVar18 = *(long *)(lVar21 + 0xa8);
                if ((lVar18 != 0) && (lVar19 = *(long *)(lVar18 + -8), 0 < lVar19)) {
                  lVar28 = 0;
                  do {
                    if (param_2 == *(ulong *)(lVar18 + lVar28 * 8)) {
                      if (lVar28 < lVar19) {
                        CowData<RID>::_copy_on_write((CowData<RID> *)(lVar21 + 0xa8));
                        lVar18 = *(long *)(lVar21 + 0xa8);
                        if (lVar18 == 0) {
                          lVar19 = -1;
                        }
                        else {
                          lVar19 = *(long *)(lVar18 + -8) + -1;
                          if (lVar28 < lVar19) {
                            memmove((void *)(lVar18 + lVar28 * 8),(void *)(lVar18 + 8 + lVar28 * 8),
                                    (lVar19 - lVar28) * 8);
                          }
                        }
                        CowData<RID>::resize<false>((CowData<RID> *)(lVar21 + 0xa8),lVar19);
                      }
                      else {
                        _err_print_index_error
                                  ("remove_at","./core/templates/cowdata.h",0xe4,lVar28,lVar19,
                                   "p_index","size()","",false,false);
                      }
                      break;
                    }
                    lVar28 = lVar28 + 1;
                  } while (lVar19 != lVar28);
                }
              }
              else if (*(int *)(lVar21 + 0x110) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
          }
          local_48 = param_2;
          if ((*(long *)(this + 0x168) != 0) && (*(int *)(this + 0x18c) != 0)) {
            uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x188) * 4));
            lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
            uVar16 = param_2 * 0x3ffff - 1;
            uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
            uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
            uVar16 = uVar16 >> 0x16 ^ uVar16;
            uVar27 = uVar16 & 0xffffffff;
            if ((int)uVar16 == 0) {
              uVar27 = 1;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar27 * lVar21;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar25;
            lVar18 = SUB168(auVar5 * auVar9,8);
            uVar15 = *(uint *)(*(long *)(this + 0x170) + lVar18 * 4);
            iVar14 = SUB164(auVar5 * auVar9,8);
            if (uVar15 != 0) {
              uVar26 = 0;
              while ((uVar15 != (uint)uVar27 ||
                     (param_2 != *(ulong *)(*(long *)(*(long *)(this + 0x168) + lVar18 * 8) + 0x10))
                     )) {
                uVar26 = uVar26 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)(iVar14 + 1) * lVar21;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar25;
                lVar18 = SUB168(auVar6 * auVar10,8);
                uVar15 = *(uint *)(*(long *)(this + 0x170) + lVar18 * 4);
                iVar14 = SUB164(auVar6 * auVar10,8);
                if ((uVar15 == 0) ||
                   (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar15 * lVar21, auVar11._8_8_ = 0,
                   auVar11._0_8_ = uVar25, auVar8._8_8_ = 0,
                   auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                    (ulong)*(uint *)(this + 0x188) * 4) + iVar14) -
                                         SUB164(auVar7 * auVar11,8)) * lVar21, auVar12._8_8_ = 0,
                   auVar12._0_8_ = uVar25, SUB164(auVar8 * auVar12,8) < uVar26)) goto LAB_0010b426;
              }
              HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
              ::erase((HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
                       *)(this + 0x160),(RID *)&local_48);
            }
          }
LAB_0010b426:
          lVar21 = *(long *)(this_00 + 0xa8);
          lVar18 = 0;
joined_r0x0010b43c:
          if (lVar21 != 0) {
            do {
              if (*(long *)(lVar21 + -8) <= lVar18) break;
              puVar2 = (ulong *)(lVar21 + lVar18 * 8);
              if (*puVar2 != 0) {
                uVar16 = *puVar2;
                if ((uint)uVar16 < *(uint *)(this + 0x124)) {
                  lVar19 = ((uVar16 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                           *(long *)(*(long *)(this + 0x110) +
                                    ((uVar16 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
                  if (*(int *)(lVar19 + 0x110) == (int)(uVar16 >> 0x20)) goto code_r0x0010b482;
                  if (*(int *)(lVar19 + 0x110) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
              }
              lVar18 = lVar18 + 1;
              _err_print_error("texture_free",
                               "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x30a,
                               "Condition \"!p\" is true. Continuing.",0);
              lVar21 = *(long *)(this_00 + 0xa8);
              if (lVar21 == 0) break;
            } while( true );
          }
          __mutex = (pthread_mutex_t *)(this + 0x138);
          iVar14 = pthread_mutex_lock(__mutex);
          if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar14);
          }
          if (*(uint *)(this + 0x124) <= uVar22) {
            pthread_mutex_unlock(__mutex);
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010bae8;
            pcVar17 = "Method/function failed.";
            uVar20 = 0x161;
            pcVar23 = "./core/templates/rid_owner.h";
            pcVar24 = "free";
            goto LAB_0010b8f4;
          }
          uVar16 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120);
          lVar21 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118;
          lVar18 = *(long *)(*(long *)(this + 0x110) + uVar16 * 8) + lVar21;
          if (*(int *)(lVar18 + 0x110) < 0) {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0,0);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
            goto LAB_0010bae8;
          }
          if (iVar3 != *(int *)(lVar18 + 0x110)) {
            pthread_mutex_unlock(__mutex);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              pcVar17 = "Method/function failed.";
              uVar20 = 0x171;
              pcVar23 = "./core/templates/rid_owner.h";
              pcVar24 = "free";
              goto LAB_0010b8f4;
            }
            goto LAB_0010bae8;
          }
          pvVar4 = *(void **)(lVar18 + 0xb0);
          if (pvVar4 != (void *)0x0) {
            if (*(int *)(lVar18 + 0xd4) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar18 + 0xd0) * 4) != 0) {
                memset(*(void **)(lVar18 + 200),0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar18 + 0xd0) * 4
                                       ) * 4);
              }
              *(undefined4 *)(lVar18 + 0xd4) = 0;
            }
            Memory::free_static(pvVar4,false);
            Memory::free_static(*(void **)(lVar18 + 0xc0),false);
            Memory::free_static(*(void **)(lVar18 + 0xb8),false);
            Memory::free_static(*(void **)(lVar18 + 200),false);
          }
          if (*(long *)(lVar18 + 0xa8) == 0) {
LAB_0010b5f6:
            lVar19 = *(long *)(lVar18 + 0x90);
            if (lVar19 == 0) goto LAB_0010b60e;
LAB_0010b602:
            LOCK();
            plVar1 = (long *)(lVar19 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_0010b60e;
            lVar19 = *(long *)(lVar18 + 0x90);
            *(undefined8 *)(lVar18 + 0x90) = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
            if (*(long *)(lVar18 + 0x88) != 0) goto LAB_0010b61a;
LAB_0010b627:
            lVar19 = *(long *)(lVar18 + 0x68);
          }
          else {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar18 + 0xa8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_0010b5f6;
            lVar19 = *(long *)(lVar18 + 0xa8);
            *(undefined8 *)(lVar18 + 0xa8) = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
            lVar19 = *(long *)(lVar18 + 0x90);
            if (lVar19 != 0) goto LAB_0010b602;
LAB_0010b60e:
            if (*(long *)(lVar18 + 0x88) == 0) goto LAB_0010b627;
LAB_0010b61a:
            cVar13 = RefCounted::unreference();
            if (cVar13 == '\0') goto LAB_0010b627;
            memdelete<Image>(*(Image **)(lVar18 + 0x88));
            lVar19 = *(long *)(lVar18 + 0x68);
          }
          if (lVar19 != 0) {
            LOCK();
            plVar1 = (long *)(lVar19 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar19 = *(long *)(lVar18 + 0x68);
              *(undefined8 *)(lVar18 + 0x68) = 0;
              Memory::free_static((void *)(lVar19 + -0x10),false);
            }
          }
          lVar18 = *(long *)(this + 0x118);
          *(undefined4 *)(*(long *)(*(long *)(this + 0x110) + uVar16 * 8) + 0x110 + lVar21) =
               0xffffffff;
          uVar15 = *(int *)(this + 0x128) - 1;
          *(uint *)(this + 0x128) = uVar15;
          *(uint *)(*(long *)(lVar18 + ((ulong)uVar15 / (ulong)*(uint *)(this + 0x120)) * 8) +
                   ((ulong)uVar15 % (ulong)*(uint *)(this + 0x120)) * 4) = uVar22;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            pthread_mutex_unlock(__mutex);
            return;
          }
          goto LAB_0010bae8;
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010bae8;
        uVar20 = 0x2fb;
        pcVar17 = "Condition \"t->is_render_target\" is true.";
        goto LAB_0010b8e6;
      }
      if (iVar3 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010bae8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar20 = 0x2fa;
  pcVar17 = "Parameter \"t\" is null.";
LAB_0010b8e6:
  pcVar23 = "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp";
  pcVar24 = "texture_free";
LAB_0010b8f4:
  _err_print_error(pcVar24,pcVar23,uVar20,pcVar17,0,0);
  return;
code_r0x0010b482:
  lVar21 = *(long *)(this_00 + 0xa8);
  *(undefined1 (*) [16])(lVar19 + 0x10) = (undefined1  [16])0x0;
  lVar18 = lVar18 + 1;
  *(undefined8 *)(lVar19 + 0x98) = 0;
  goto joined_r0x0010b43c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_validate_texture_format(Ref<Image> const&,
   RendererRD::TextureStorage::TextureToRDFormat&) */

Ref * RendererRD::TextureStorage::_validate_texture_format(Ref *param_1,TextureToRDFormat *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *in_RCX;
  undefined8 *in_RDX;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)*in_RDX + 0x198))(&local_38,(long *)*in_RDX,0);
  *(undefined8 *)param_1 = 0;
  if (local_38 != (Object *)0x0) {
    lVar15 = __dynamic_cast(local_38,&Object::typeinfo,&Image::typeinfo,0);
    if (lVar15 != 0) {
      *(long *)param_1 = lVar15;
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
        *(undefined8 *)param_1 = 0;
      }
      if (local_38 == (Object *)0x0) goto LAB_0010bb94;
    }
    cVar13 = RefCounted::unreference();
    if ((cVar13 != '\0') && (cVar13 = predelete_handler(local_38), cVar13 != '\0')) {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
  }
LAB_0010bb94:
  uVar14 = Image::get_format();
  uVar12 = _LC131;
  uVar11 = __LC137;
  uVar10 = _UNK_00128d88;
  uVar9 = __LC135;
  uVar8 = _UNK_00128d78;
  uVar7 = _LC360;
  uVar6 = _UNK_00128d68;
  uVar5 = __LC133;
  uVar4 = _UNK_00128d48;
  uVar3 = _LC363;
  uVar2 = __LC127;
  uVar1 = _LC361;
  uVar16 = _LC126;
  switch(uVar14) {
  case 0:
    *(undefined4 *)in_RCX = 8;
    in_RCX[1] = uVar16;
    in_RCX[2] = uVar1;
    break;
  case 1:
    *(undefined4 *)in_RCX = 0xf;
    in_RCX[1] = uVar2;
    in_RCX[2] = uVar3;
    break;
  case 2:
    *(undefined4 *)in_RCX = 8;
    in_RCX[1] = uVar7;
    in_RCX[2] = uVar8;
    break;
  case 3:
    *(undefined4 *)in_RCX = 0xf;
    in_RCX[1] = uVar9;
    in_RCX[2] = uVar10;
    break;
  case 4:
    uVar16 = *(undefined8 *)param_1;
    *in_RCX = _LC227;
    Image::convert(uVar16,5);
    uVar16 = _LC129;
    in_RCX[1] = __LC136;
    in_RCX[2] = uVar16;
    break;
  case 5:
    *in_RCX = _LC227;
    in_RCX[1] = uVar4;
    in_RCX[2] = uVar12;
    break;
  case 6:
    *(undefined4 *)in_RCX = 2;
    in_RCX[1] = uVar5;
    in_RCX[2] = uVar6;
    break;
  case 7:
    *(undefined4 *)in_RCX = 4;
    in_RCX[1] = uVar5;
    in_RCX[2] = uVar6;
    break;
  case 8:
    *(undefined4 *)in_RCX = 99;
    in_RCX[1] = uVar7;
    in_RCX[2] = uVar8;
    break;
  case 9:
    *(undefined4 *)in_RCX = 0x66;
    in_RCX[1] = uVar9;
    in_RCX[2] = uVar10;
    break;
  case 10:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x69,0x41);
    if (cVar13 == '\0') {
      *(undefined4 *)in_RCX = 0x6c;
      Image::convert(*(undefined8 *)param_1,0xb);
    }
    else {
      *(undefined4 *)in_RCX = 0x69;
    }
    goto LAB_0010bc80;
  case 0xb:
    *(undefined4 *)in_RCX = 0x6c;
    in_RCX[1] = uVar11;
    in_RCX[2] = uVar12;
    break;
  case 0xc:
    *(undefined4 *)in_RCX = 0x4b;
    in_RCX[1] = uVar7;
    in_RCX[2] = uVar8;
    break;
  case 0xd:
    *(undefined4 *)in_RCX = 0x52;
    in_RCX[1] = uVar9;
    in_RCX[2] = uVar10;
    break;
  case 0xe:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x59,0x41);
    if (cVar13 == '\0') {
      *(undefined4 *)in_RCX = 0x60;
      Image::convert(*(undefined8 *)param_1,0xf);
    }
    else {
      *(undefined4 *)in_RCX = 0x59;
    }
    goto LAB_0010bc80;
  case 0xf:
    *(undefined4 *)in_RCX = 0x60;
    in_RCX[1] = uVar11;
    in_RCX[2] = uVar12;
    break;
  case 0x10:
    *(undefined4 *)in_RCX = 0x7a;
    *(undefined1 (*) [16])(in_RCX + 1) = (undefined1  [16])0x0;
    break;
  case 0x11:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x82,0x41);
    if (cVar13 == '\0') {
LAB_0010c330:
      *in_RCX = _LC227;
      Image::decompress();
      Image::convert(*(undefined8 *)param_1,5);
    }
    else {
      *in_RCX = _LC228;
    }
    goto LAB_0010bc80;
  case 0x12:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x86,0x41);
    if (cVar13 == '\0') {
LAB_0010c290:
      *in_RCX = _LC227;
      Image::decompress();
      Image::convert(*(undefined8 *)param_1,5);
    }
    else {
      *in_RCX = _LC229;
    }
    goto LAB_0010bbe8;
  case 0x13:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x88,0x41);
    if (cVar13 == '\0') goto LAB_0010c290;
    *in_RCX = _LC230;
    goto LAB_0010bbe8;
  case 0x14:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x8a,0x41);
    if (cVar13 == '\0') {
LAB_0010c308:
      *(undefined4 *)in_RCX = 8;
LAB_0010c30f:
      Image::decompress();
      Image::convert(*(undefined8 *)param_1,2);
    }
    else {
      *(undefined4 *)in_RCX = 0x8a;
    }
    goto LAB_0010bcbe;
  case 0x15:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x8c,0x41);
    if (cVar13 == '\0') {
LAB_0010c2e0:
      *(undefined4 *)in_RCX = 0xf;
LAB_0010c2e7:
      Image::decompress();
      Image::convert(*(undefined8 *)param_1,3);
    }
    else {
      *(undefined4 *)in_RCX = 0x8c;
    }
    goto LAB_0010bea6;
  case 0x16:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x90,0x41);
    if (cVar13 == '\0') goto LAB_0010c290;
    *in_RCX = _LC231;
    goto LAB_0010bbe8;
  case 0x17:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x8f,0x41);
    if (cVar13 == '\0') {
LAB_0010c3a8:
      *(undefined4 *)in_RCX = 0x60;
      Image::decompress();
      Image::convert(*(undefined8 *)param_1,0xf);
    }
    else {
      *(undefined4 *)in_RCX = 0x8f;
    }
    goto LAB_0010bc80;
  case 0x18:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x8e,0x41);
    if (cVar13 == '\0') goto LAB_0010c3a8;
    *(undefined4 *)in_RCX = 0x8e;
    goto LAB_0010bc80;
  case 0x19:
  case 0x1e:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x92,0x41);
    if (cVar13 == '\0') goto LAB_0010c330;
    *in_RCX = _LC232;
LAB_0010bc80:
    uVar16 = _LC129;
    in_RCX[1] = __LC136;
    in_RCX[2] = uVar16;
    break;
  case 0x1a:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x98,0x41);
    if (cVar13 == '\0') goto LAB_0010c308;
    *(undefined4 *)in_RCX = 0x98;
    goto LAB_0010bcbe;
  case 0x1b:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x99,0x41);
    if (cVar13 == '\0') {
      *(undefined4 *)in_RCX = 9;
      goto LAB_0010c30f;
    }
    *(undefined4 *)in_RCX = 0x99;
LAB_0010bcbe:
    uVar16 = _UNK_00128d78;
    in_RCX[1] = _LC360;
    in_RCX[2] = uVar16;
    break;
  case 0x1c:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x9a,0x41);
    if (cVar13 == '\0') goto LAB_0010c2e0;
    *(undefined4 *)in_RCX = 0x9a;
    goto LAB_0010bea6;
  case 0x1d:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x9b,0x41);
    if (cVar13 == '\0') {
      *(undefined4 *)in_RCX = 0x10;
      goto LAB_0010c2e7;
    }
    *(undefined4 *)in_RCX = 0x9b;
LAB_0010bea6:
    uVar16 = _UNK_00128d88;
    in_RCX[1] = __LC135;
    in_RCX[2] = uVar16;
    break;
  case 0x1f:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x96,0x41);
    if (cVar13 == '\0') goto LAB_0010c290;
    *in_RCX = _LC233;
    goto LAB_0010bbe8;
  case 0x20:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x94,0x41);
    if (cVar13 == '\0') goto LAB_0010c290;
    *in_RCX = _LC234;
    goto LAB_0010bbe8;
  case 0x21:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x96,0x41);
    if (cVar13 == '\0') {
LAB_0010c358:
      *in_RCX = _LC227;
      Image::decompress();
      Image::convert(*(undefined8 *)param_1,5);
    }
    else {
      *in_RCX = _LC233;
    }
    goto LAB_0010c07a;
  case 0x22:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x88,0x41);
    if (cVar13 == '\0') goto LAB_0010c358;
    *in_RCX = _LC230;
LAB_0010c07a:
    uVar16 = _UNK_00128e68;
    in_RCX[1] = __LC235;
    in_RCX[2] = uVar16;
    break;
  case 0x23:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0x9c,0x41);
    if (cVar13 == '\0') {
LAB_0010c2b8:
      Image::decompress();
      uVar16 = *(undefined8 *)param_1;
      *in_RCX = _LC227;
      Image::convert(uVar16,5);
    }
    else {
      *in_RCX = _LC236;
    }
    goto LAB_0010bbe8;
  case 0x24:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0xda,0x41);
    if (cVar13 == '\0') {
LAB_0010c380:
      Image::decompress();
      *(undefined4 *)in_RCX = 0x60;
      Image::convert(*(undefined8 *)param_1,0xf);
    }
    else {
      *(undefined4 *)in_RCX = 0xda;
    }
    goto LAB_0010bbe8;
  case 0x25:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0xaa,0x41);
    if (cVar13 == '\0') goto LAB_0010c2b8;
    *in_RCX = _LC237;
    goto LAB_0010bbe8;
  case 0x26:
    uVar16 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::texture_is_format_supported_for_usage(uVar16,0xe1,0x41);
    if (cVar13 == '\0') goto LAB_0010c380;
    *(undefined4 *)in_RCX = 0xe1;
LAB_0010bbe8:
    uVar16 = _LC131;
    in_RCX[1] = __LC137;
    in_RCX[2] = uVar16;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RendererRD::TextureStorage::_texture_2d_update(RID, Ref<Image> const&, int, bool) */

void RendererRD::TextureStorage::_texture_2d_update
               (TextureToRDFormat *param_1,ulong param_2,long *param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  int *piVar7;
  Image *pIVar8;
  long in_FS_OFFSET;
  Image *local_60;
  undefined1 local_58 [8];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_3 == 0) || (cVar3 = Image::is_empty(), cVar3 != '\0')) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x51e;
      pcVar6 = "Condition \"p_image.is_null() || p_image->is_empty()\" is true.";
      goto LAB_0010c65e;
    }
    goto LAB_0010c7c6;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x124))) {
    piVar7 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x120)) * 0x118 +
                    *(long *)(*(long *)(param_1 + 0x110) +
                             ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x120)) * 8));
    if (piVar7[0x44] == (int)(param_2 >> 0x20)) {
      if ((char)piVar7[0x20] != '\0') {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010c7c6;
        uVar5 = 0x522;
        pcVar6 = "Condition \"tex->is_render_target\" is true.";
        goto LAB_0010c65e;
      }
      iVar4 = Image::get_width();
      if ((iVar4 != piVar7[0x11]) || (iVar4 = Image::get_height(), iVar4 != piVar7[0x12])) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = 0x523;
          pcVar6 = 
          "Condition \"p_image->get_width() != tex->width || p_image->get_height() != tex->height\" is true."
          ;
          goto LAB_0010c65e;
        }
        goto LAB_0010c7c6;
      }
      iVar4 = Image::get_format();
      if (iVar4 != piVar7[0xf]) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = 0x524;
          pcVar6 = "Condition \"p_image->get_format() != tex->format\" is true.";
          goto LAB_0010c65e;
        }
        goto LAB_0010c7c6;
      }
      if (*piVar7 == 1) {
        if ((-1 < param_4) && (param_4 < piVar7[0x14])) goto LAB_0010c514;
        _err_print_index_error
                  ("_texture_2d_update",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x527,
                   (long)param_4,(long)piVar7[0x14],"p_layer","tex->layers","",false,false);
      }
      else {
LAB_0010c514:
        if ((*(long *)(piVar7 + 0x22) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
          memdelete<Image>(*(Image **)(piVar7 + 0x22));
        }
        piVar7[0x22] = 0;
        piVar7[0x23] = 0;
        _validate_texture_format((Ref *)&local_60,param_1);
        uVar5 = RenderingDevice::get_singleton();
        pIVar8 = local_60;
        Image::get_data();
        RenderingDevice::texture_update(uVar5,*(undefined8 *)(piVar7 + 4),param_4,local_58);
        lVar2 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
          pIVar8 = local_60;
          if (local_60 == (Image *)0x0) goto LAB_0010c598;
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            memdelete<Image>(pIVar8);
            return;
          }
          goto LAB_0010c7c6;
        }
      }
LAB_0010c598:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c7c6;
    }
    if (piVar7[0x44] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar5 = 0x521;
    pcVar6 = "Parameter \"tex\" is null.";
LAB_0010c65e:
    _err_print_error("_texture_2d_update",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar5,pcVar6,0,0
                    );
    return;
  }
LAB_0010c7c6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::texture_2d_update(RID, Ref<Image> const&, int) */

void RendererRD::TextureStorage::texture_2d_update(void)

{
  _texture_2d_update();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::texture_rd_initialize(RID, RID const&,
   RenderingServer::TextureLayeredType) */

void __thiscall
RendererRD::TextureStorage::texture_rd_initialize
          (TextureStorage *this,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  int local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  uint local_180;
  byte local_178;
  long local_168;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  undefined1 local_148 [16];
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = RenderingDevice::get_singleton();
  cVar3 = RenderingDevice::texture_is_valid(uVar5,*param_3);
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("texture_rd_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x698,
                       "Condition \"!RD::get_singleton()->texture_is_valid(p_rd_texture)\" is true."
                       ,0,0);
      return;
    }
    goto LAB_0010cd68;
  }
  uVar5 = RenderingDevice::get_singleton();
  cVar3 = RenderingDevice::texture_is_shared(uVar5,*param_3);
  if (cVar3 == '\0') {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::texture_get_format(&local_198,uVar5,*param_3);
    if ((local_178 & 1) == 0) {
      _err_print_error("texture_rd_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x69e,
                       "Condition \"!(tf.usage_bits & RD::TEXTURE_USAGE_SAMPLING_BIT)\" is true.",0,
                       0);
      lVar2 = local_168;
    }
    else {
      local_1b8 = 0x27;
      local_1a4 = _LC131;
      local_1b4 = __LC249;
      uStack_1ac = _UNK_00128e78;
      _texture_format_from_rd(this,local_198,&local_1b8);
      if (local_1b8 == 0x27) {
        _err_print_error("texture_rd_initialize",
                         "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x6a2,
                         "Condition \"imfmt.image_format == Image::FORMAT_MAX\" is true.",0,0);
        lVar2 = local_168;
      }
      else {
        local_154 = 0;
        local_120 = 6;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_c0 = 0;
        local_90 = 0;
        local_88 = 2;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_148 = (undefined1  [16])0x0;
        local_130 = __LC202;
        uStack_128 = _UNK_00128e58;
        local_d0 = (undefined1  [16])0x0;
        local_b0 = (undefined1  [16])0x0;
        local_a0 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        if (local_180 == 2) {
          if (local_188 == 1) {
            local_158 = 2;
LAB_0010cba6:
            local_188 = 1;
LAB_0010c9e7:
            iVar6 = (int)local_1b4;
            local_150 = local_180;
            local_10c = CONCAT44(local_188,local_18c);
            iVar4 = 0xe8;
            if ((int)local_1b4 != local_198) {
              iVar4 = (int)local_1b4;
            }
            local_11c = CONCAT44(local_1b8,local_1b8);
            local_104 = local_184;
            uStack_1d0 = CONCAT44((undefined4)local_1a4,uStack_1ac._4_4_);
            local_1d8 = CONCAT44((undefined4)uStack_1ac,iVar4);
            local_138 = (int)local_1b4;
            local_1c8 = local_1a4._4_4_;
            local_120 = local_1a4._4_4_;
            local_130 = local_1d8;
            uStack_128 = uStack_1d0;
            uVar5 = RenderingDevice::get_singleton();
            uVar5 = RenderingDevice::texture_create_shared(uVar5,&local_1d8,*param_3);
            local_148._0_8_ = uVar5;
            if (local_1b4._4_4_ != 0xe8) {
              local_134 = local_1b4._4_4_;
              if (local_1b4._4_4_ == local_198) {
                iVar6 = 0xe8;
              }
              local_1d8 = CONCAT44(local_1d8._4_4_,iVar6);
              uVar5 = RenderingDevice::get_singleton();
              uVar5 = RenderingDevice::texture_create_shared(uVar5,&local_1d8,*param_3);
              local_148._8_8_ = uVar5;
            }
            local_fc = local_194;
            local_100 = local_190;
            local_d8 = 0;
            RID_Alloc<RendererRD::TextureStorage::Texture,true>::initialize_rid
                      ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108),param_2
                       ,&local_158);
            lVar2 = local_168;
          }
          else {
            _err_print_error("texture_rd_initialize",
                             "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x6b5,
                             "Condition \"tf.array_layers != 1\" is true.",0,0);
            lVar2 = local_168;
          }
        }
        else if (local_180 < 3) {
          if (local_180 == 1) {
            if (local_188 == 1) {
              local_158 = 0;
              goto LAB_0010cba6;
            }
            _err_print_error("texture_rd_initialize",
                             "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x6a8,
                             "Condition \"tf.array_layers != 1\" is true.",0,0);
            lVar2 = local_168;
          }
          else {
LAB_0010cbb8:
            _err_print_error("texture_rd_initialize",
                             "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x6b9,
                             "Method/function failed.",
                             "This RD texture can\'t be used as a render texture",0);
            lVar2 = local_168;
          }
        }
        else {
          if ((local_180 != 3) && (1 < local_180 - 5)) goto LAB_0010cbb8;
          if (local_188 != 1) {
            local_158 = 1;
            local_154 = param_4;
            goto LAB_0010c9e7;
          }
          _err_print_error("texture_rd_initialize",
                           "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x6b0,
                           "Condition \"tf.array_layers == 1\" is true.",0,0);
          lVar2 = local_168;
        }
      }
    }
    local_168 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    _err_print_error("texture_rd_initialize",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x69b,
                     "Condition \"RD::get_singleton()->texture_is_shared(p_rd_texture)\" is true.",
                     "Please create the texture object using the original texture",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cd68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::texture_replace(RID, RID) */

void __thiscall
RendererRD::TextureStorage::texture_replace(TextureStorage *this,ulong param_2,ulong param_3)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  int iVar18;
  Texture *pTVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  Texture *this_00;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    this_00 = (Texture *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
              *(long *)(*(long *)(this + 0x110) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
    if (*(int *)(this_00 + 0x110) == (int)(param_2 >> 0x20)) {
      if (*(long *)(this_00 + 0x98) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar15 = 0x60c;
          pcVar17 = "Condition \"tex->proxy_to.is_valid()\" is true.";
          goto LAB_0010d3f6;
        }
        goto LAB_0010d5d7;
      }
      if ((param_3 != 0) && (uVar20 = (uint)param_3, uVar20 < *(uint *)(this + 0x124))) {
        pTVar19 = (Texture *)
                  (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                  *(long *)(*(long *)(this + 0x110) +
                           ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
        iVar18 = *(int *)(pTVar19 + 0x110);
        if (iVar18 == (int)(param_3 >> 0x20)) {
          if (*(long *)(pTVar19 + 0x98) != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar15 = 0x60f;
              pcVar17 = "Condition \"by_tex->proxy_to.is_valid()\" is true.";
              goto LAB_0010d3f6;
            }
            goto LAB_0010d5d7;
          }
          if (pTVar19 != this_00) {
            if (*(long *)(this_00 + 0x18) != 0) {
              uVar15 = RenderingDevice::get_singleton();
              RenderingDevice::free(uVar15,*(undefined8 *)(this_00 + 0x18));
            }
            uVar15 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar15);
            pvVar3 = *(void **)(this_00 + 0x108);
            if (pvVar3 != (void *)0x0) {
              if (*(code **)((long)pvVar3 + 0x68) != (code *)0x0) {
                (**(code **)((long)pvVar3 + 0x68))(1);
              }
              Memory::free_static(pvVar3,false);
              *(undefined8 *)(this_00 + 0x108) = 0;
            }
            local_50[0] = 0;
            plVar1 = (long *)(*(long *)(this_00 + 0xa8) + -0x10);
            if (*(long *)(this_00 + 0xa8) != 0) {
              do {
                lVar22 = *plVar1;
                if (lVar22 == 0) goto LAB_0010cefb;
                LOCK();
                lVar23 = *plVar1;
                bVar26 = lVar22 == lVar23;
                if (bVar26) {
                  *plVar1 = lVar22 + 1;
                  lVar23 = lVar22;
                }
                UNLOCK();
              } while (!bVar26);
              if (lVar23 != -1) {
                local_50[0] = *(long *)(this_00 + 0xa8);
              }
            }
LAB_0010cefb:
            plVar1 = (long *)(*(long *)(pTVar19 + 0xa8) + -0x10);
            if (*(long *)(pTVar19 + 0xa8) == 0) {
LAB_0010cf30:
              lVar22 = 0;
            }
            else {
              do {
                lVar22 = *plVar1;
                if (lVar22 == 0) goto LAB_0010cf30;
                LOCK();
                lVar23 = *plVar1;
                bVar26 = lVar22 == lVar23;
                if (bVar26) {
                  *plVar1 = lVar22 + 1;
                  lVar23 = lVar22;
                }
                UNLOCK();
              } while (!bVar26);
              if (lVar23 == -1) goto LAB_0010cf30;
              lVar22 = *(long *)(pTVar19 + 0xa8);
            }
            Texture::operator=(this_00,pTVar19);
            lVar23 = local_50[0];
            if (*(long *)(this_00 + 0xa8) != local_50[0]) {
              CowData<RID>::_ref((CowData<RID> *)(this_00 + 0xa8),(CowData *)local_50);
            }
            if (*(ulong **)(this_00 + 0x108) != (ulong *)0x0) {
              **(ulong **)(this_00 + 0x108) = param_2;
            }
            if ((lVar23 != 0) && (lVar25 = 0, 0 < *(long *)(lVar23 + -8))) {
              do {
                lVar2 = lVar25 * 8;
                lVar25 = lVar25 + 1;
                (**(code **)(*(long *)this + 0xa0))(this,*(undefined8 *)(lVar23 + lVar2),param_2);
              } while (lVar25 < *(long *)(lVar23 + -8));
            }
            if ((lVar22 != 0) && (0 < *(long *)(lVar22 + -8))) {
              lVar23 = 0;
              do {
                lVar25 = lVar23 * 8;
                lVar23 = lVar23 + 1;
                (**(code **)(*(long *)this + 0xa0))(this,*(undefined8 *)(lVar22 + lVar25),param_2);
              } while (lVar23 < *(long *)(lVar22 + -8));
            }
            __mutex = (pthread_mutex_t *)(this + 0x138);
            iVar13 = pthread_mutex_lock(__mutex);
            if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              std::__throw_system_error(iVar13);
            }
            if (uVar20 < *(uint *)(this + 0x124)) {
              uVar16 = (param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120);
              lVar23 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118;
              lVar25 = *(long *)(*(long *)(this + 0x110) + uVar16 * 8) + lVar23;
              if (*(int *)(lVar25 + 0x110) < 0) {
                pthread_mutex_unlock(__mutex);
                _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x16c,
                                 "Method/function failed.",
                                 "Attempted to free an uninitialized or invalid RID",0,0);
              }
              else if (iVar18 == *(int *)(lVar25 + 0x110)) {
                pvVar3 = *(void **)(lVar25 + 0xb0);
                if (pvVar3 != (void *)0x0) {
                  if (*(int *)(lVar25 + 0xd4) != 0) {
                    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar25 + 0xd0) * 4) != 0
                       ) {
                      memset(*(void **)(lVar25 + 200),0,
                             (ulong)*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(lVar25 + 0xd0) * 4) * 4);
                    }
                    *(undefined4 *)(lVar25 + 0xd4) = 0;
                  }
                  Memory::free_static(pvVar3,false);
                  Memory::free_static(*(void **)(lVar25 + 0xc0),false);
                  Memory::free_static(*(void **)(lVar25 + 0xb8),false);
                  Memory::free_static(*(void **)(lVar25 + 200),false);
                }
                if (*(long *)(lVar25 + 0xa8) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)(lVar25 + 0xa8) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar2 = *(long *)(lVar25 + 0xa8);
                    *(undefined8 *)(lVar25 + 0xa8) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                if (*(long *)(lVar25 + 0x90) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)(lVar25 + 0x90) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar2 = *(long *)(lVar25 + 0x90);
                    *(undefined8 *)(lVar25 + 0x90) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                if ((*(long *)(lVar25 + 0x88) != 0) &&
                   (cVar12 = RefCounted::unreference(), cVar12 != '\0')) {
                  memdelete<Image>(*(Image **)(lVar25 + 0x88));
                }
                if (*(long *)(lVar25 + 0x68) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)(lVar25 + 0x68) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar2 = *(long *)(lVar25 + 0x68);
                    *(undefined8 *)(lVar25 + 0x68) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                lVar25 = *(long *)(this + 0x118);
                *(undefined4 *)(*(long *)(*(long *)(this + 0x110) + uVar16 * 8) + 0x110 + lVar23) =
                     0xffffffff;
                uVar14 = *(int *)(this + 0x128) - 1;
                *(uint *)(this + 0x128) = uVar14;
                *(uint *)(*(long *)(lVar25 + ((ulong)uVar14 / (ulong)*(uint *)(this + 0x120)) * 8) +
                         ((ulong)uVar14 % (ulong)*(uint *)(this + 0x120)) * 4) = uVar20;
                pthread_mutex_unlock(__mutex);
              }
              else {
                pthread_mutex_unlock(__mutex);
                _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x171,
                                 "Method/function failed.",0,0);
              }
            }
            else {
              pthread_mutex_unlock(__mutex);
              _err_print_error(&_LC68,"./core/templates/rid_owner.h",0x161,"Method/function failed."
                               ,0,0);
            }
            if ((*(long *)(this + 0x168) != 0) && (*(int *)(this + 0x18c) != 0)) {
              uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x188) * 4));
              lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
              uVar16 = param_2 * 0x3ffff - 1;
              uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
              uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
              uVar16 = uVar16 >> 0x16 ^ uVar16;
              uVar24 = uVar16 & 0xffffffff;
              if ((int)uVar16 == 0) {
                uVar24 = 1;
              }
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar24 * lVar23;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar21;
              lVar25 = SUB168(auVar4 * auVar8,8);
              uVar20 = *(uint *)(*(long *)(this + 0x170) + lVar25 * 4);
              iVar18 = SUB164(auVar4 * auVar8,8);
              if (uVar20 != 0) {
                uVar14 = 0;
                while (((uint)uVar24 != uVar20 ||
                       (param_2 !=
                        *(ulong *)(*(long *)(*(long *)(this + 0x168) + lVar25 * 8) + 0x10)))) {
                  uVar14 = uVar14 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)(iVar18 + 1) * lVar23;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar21;
                  lVar25 = SUB168(auVar5 * auVar9,8);
                  uVar20 = *(uint *)(*(long *)(this + 0x170) + lVar25 * 4);
                  iVar18 = SUB164(auVar5 * auVar9,8);
                  if ((uVar20 == 0) ||
                     (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar20 * lVar23, auVar10._8_8_ = 0,
                     auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                     auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                      (ulong)*(uint *)(this + 0x188) * 4) + iVar18)
                                           - SUB164(auVar6 * auVar10,8)) * lVar23, auVar11._8_8_ = 0
                     , auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar14))
                  goto LAB_0010d28a;
                }
                this[400] = (TextureStorage)0x1;
              }
            }
LAB_0010d28a:
            if (lVar22 != 0) {
              plVar1 = (long *)(lVar22 + -0x10);
              LOCK();
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(plVar1,false);
              }
            }
            if (local_50[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_50[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  Memory::free_static((void *)(local_50[0] + -0x10),false);
                  return;
                }
                goto LAB_0010d5d7;
              }
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_0010d5d7;
        }
        if (iVar18 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = 0x60e;
        pcVar17 = "Parameter \"by_tex\" is null.";
        goto LAB_0010d3f6;
      }
      goto LAB_0010d5d7;
    }
    if (*(int *)(this_00 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar15 = 0x60b;
    pcVar17 = "Parameter \"tex\" is null.";
LAB_0010d3f6:
    _err_print_error("texture_replace",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar15,pcVar17,0
                     ,0);
    return;
  }
LAB_0010d5d7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::texture_2d_get(RID) const */

long * RendererRD::TextureStorage::texture_2d_get(long *param_1,long param_2,ulong param_3)

{
  Image *pIVar1;
  Image *pIVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  Image *pIVar16;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  Image *local_70;
  long local_68;
  Image *local_60;
  undefined1 local_58 [8];
  long local_50;
  Image *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x124))) {
    lVar14 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
             *(long *)(*(long *)(param_2 + 0x110) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8);
    if (*(int *)(lVar14 + 0x110) == (int)(param_3 >> 0x20)) {
      if ((*(long *)(lVar14 + 0x88) == 0) || (*(char *)(lVar14 + 0x80) != '\0')) {
        uVar10 = RenderingDevice::get_singleton();
        RenderingDevice::texture_get_data(local_58,uVar10,*(undefined8 *)(lVar14 + 0x10),0);
        if (local_50 == 0) {
          _err_print_error("texture_2d_get",
                           "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5a6,
                           "Condition \"data.is_empty()\" is true. Returning: Ref<Image>()",0,0);
          *param_1 = 0;
        }
        else {
          if (*(int *)(lVar14 + 0x20) == 0x3f) {
            local_40[0] = 0;
            CowData<unsigned_char>::resize<false>
                      ((CowData<unsigned_char> *)local_40,*(long *)(local_50 + -8) * 2);
            fVar6 = _LC260;
            fVar5 = _LC163;
            if (local_50 != 0) {
              lVar11 = *(long *)(local_50 + -8);
              lVar12 = lVar11 + 3;
              if (-1 < lVar11) {
                lVar12 = lVar11;
              }
              if ((int)(lVar12 >> 2) != 0) {
                uVar13 = 0;
                do {
                  uVar8 = *(uint *)(local_50 + uVar13);
                  fVar18 = (float)(uVar8 & 0x3ff) / fVar6;
                  uVar9 = (uint)fVar18 & 0x7f800000;
                  if (uVar9 < 0x47800000) {
                    uVar15 = 0;
                    if (0x38000000 < uVar9) {
                      uVar15 = (ushort)(uVar9 + 0xc8000000 >> 0xd) |
                               (ushort)(((uint)fVar18 >> 0x1f) << 0xf) |
                               (ushort)(((uint)fVar18 & 0x7fffff) >> 0xd);
                    }
                  }
                  else {
                    if ((uVar9 != 0x7f800000) || (uVar15 = 0x3ff, ((uint)fVar18 & 0x7fffff) == 0)) {
                      uVar15 = 0;
                    }
                    uVar15 = (ushort)(((uint)fVar18 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                  }
                  iVar4 = (int)uVar13;
                  *(ushort *)(local_40[0] + (uVar13 & 0xffffffff) * 2) = uVar15;
                  fVar18 = (float)(uVar8 >> 10 & 0x3ff) / fVar6;
                  uVar9 = (uint)fVar18 & 0x7f800000;
                  if (uVar9 < 0x47800000) {
                    uVar15 = 0;
                    if (0x38000000 < uVar9) {
                      uVar15 = (ushort)(uVar9 + 0xc8000000 >> 0xd) |
                               (ushort)(((uint)fVar18 >> 0x1f) << 0xf) |
                               (ushort)(((uint)fVar18 & 0x7fffff) >> 0xd);
                    }
                  }
                  else {
                    if ((((uint)fVar18 & 0x7fffff) == 0) || (uVar9 != 0x7f800000)) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = 0x3ff;
                    }
                    uVar15 = (ushort)(((uint)fVar18 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                  }
                  *(ushort *)(local_40[0] + (ulong)(iVar4 + 1) * 2) = uVar15;
                  fVar18 = (float)(uVar8 >> 0x14 & 0x3ff) / fVar6;
                  uVar9 = (uint)fVar18 & 0x7f800000;
                  if (uVar9 < 0x47800000) {
                    uVar15 = 0;
                    if (0x38000000 < uVar9) {
                      uVar15 = (ushort)(uVar9 + 0xc8000000 >> 0xd) |
                               (ushort)(((uint)fVar18 >> 0x1f) << 0xf) |
                               (ushort)(((uint)fVar18 & 0x7fffff) >> 0xd);
                    }
                  }
                  else {
                    if ((uVar9 != 0x7f800000) || (uVar15 = 0x3ff, ((uint)fVar18 & 0x7fffff) == 0)) {
                      uVar15 = 0;
                    }
                    uVar15 = (ushort)(((uint)fVar18 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                  }
                  *(ushort *)(local_40[0] + (ulong)(iVar4 + 2) * 2) = uVar15;
                  fVar18 = (float)(uVar8 >> 0x1e) / fVar5;
                  uVar8 = (uint)fVar18 & 0x7f800000;
                  if (uVar8 < 0x47800000) {
                    uVar15 = 0;
                    if (0x38000000 < uVar8) {
                      uVar15 = (ushort)(uVar8 + 0xc8000000 >> 0xd) |
                               (ushort)(((uint)fVar18 >> 0x1f) << 0xf) |
                               (ushort)(((uint)fVar18 & 0x7fffff) >> 0xd);
                    }
                  }
                  else {
                    if ((((uint)fVar18 & 0x7fffff) == 0) || (uVar8 != 0x7f800000)) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = 0x3ff;
                    }
                    uVar15 = (ushort)(((uint)fVar18 >> 0x1f) << 0xf) | uVar15 | 0x7c00;
                  }
                  uVar13 = uVar13 + 4;
                  *(ushort *)(local_40[0] + (ulong)(iVar4 + 3) * 2) = uVar15;
                } while ((lVar12 >> 2 & 0xffffffffU) << 2 != uVar13);
              }
            }
            Image::create_from_data
                      (&local_60,*(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                       1 < *(int *)(lVar14 + 0x54),*(undefined4 *)(lVar14 + 0x40),&local_48);
            pIVar16 = local_60;
            if (local_60 != (Image *)0x0) {
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                pIVar16 = (Image *)0x0;
              }
              if ((local_60 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0'))
              {
                memdelete<Image>(local_60);
              }
            }
            lVar11 = local_40[0];
            if (local_40[0] != 0) {
              LOCK();
              plVar3 = (long *)(local_40[0] + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_40[0] = 0;
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
          }
          else {
            Image::create_from_data
                      (&local_48,*(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                       1 < *(int *)(lVar14 + 0x54),*(undefined4 *)(lVar14 + 0x40),local_58);
            pIVar16 = local_48;
            if (local_48 != (Image *)0x0) {
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                pIVar16 = (Image *)0x0;
              }
              if ((local_48 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0'))
              {
                memdelete<Image>(local_48);
              }
            }
          }
          cVar7 = Image::is_empty();
          if (cVar7 == '\0') {
            if (*(int *)(lVar14 + 0x3c) == *(int *)(lVar14 + 0x40)) {
              lVar11 = Engine::get_singleton();
              cVar7 = *(char *)(lVar11 + 0xc0);
            }
            else {
              Image::convert(pIVar16);
              lVar11 = Engine::get_singleton();
              cVar7 = *(char *)(lVar11 + 0xc0);
            }
            if (((cVar7 != '\0') && (*(char *)(lVar14 + 0x80) == '\0')) &&
               (pIVar1 = *(Image **)(lVar14 + 0x88), pIVar1 != pIVar16)) {
              *(Image **)(lVar14 + 0x88) = pIVar16;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                *(undefined8 *)(lVar14 + 0x88) = 0;
              }
              if ((pIVar1 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
                memdelete<Image>(pIVar1);
              }
            }
            *param_1 = (long)pIVar16;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              *param_1 = 0;
            }
          }
          else {
            lVar11 = *(long *)(lVar14 + 0x90);
            if ((lVar11 == 0) || (*(uint *)(lVar11 + -8) < 2)) {
              local_70 = (Image *)0x0;
              local_48 = (Image *)0x11e091;
              local_40[0] = 0xc;
              String::parse_latin1((StrRange *)&local_70);
            }
            else {
              local_60 = (Image *)0x0;
              plVar3 = (long *)(lVar11 + -0x10);
              do {
                lVar11 = *plVar3;
                if (lVar11 == 0) goto LAB_0010df22;
                LOCK();
                lVar12 = *plVar3;
                bVar17 = lVar11 == lVar12;
                if (bVar17) {
                  *plVar3 = lVar11 + 1;
                  lVar12 = lVar11;
                }
                UNLOCK();
              } while (!bVar17);
              if (lVar12 != -1) {
                local_60 = *(Image **)(lVar14 + 0x90);
              }
LAB_0010df22:
              local_68 = 0;
              local_48 = (Image *)0x11e09e;
              local_40[0] = 0xe;
              String::parse_latin1((StrRange *)&local_68);
              vformat<String>(&local_70,(StrRange *)&local_68,&local_60);
              lVar14 = local_68;
              if (local_68 != 0) {
                LOCK();
                plVar3 = (long *)(local_68 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_68 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              pIVar1 = local_60;
              if (local_60 != (Image *)0x0) {
                LOCK();
                local_60 = local_60 + -0x10;
                *(long *)local_60 = *(long *)local_60 + -1;
                UNLOCK();
                if (*(long *)local_60 == 0) {
                  local_60 = (Image *)0x0;
                  Memory::free_static(pIVar1 + -0x10,false);
                }
              }
            }
            local_60 = (Image *)0x0;
            pIVar1 = local_70 + -0x10;
            if (local_70 != (Image *)0x0) {
              do {
                lVar14 = *(long *)pIVar1;
                if (lVar14 == 0) goto LAB_0010d793;
                LOCK();
                lVar11 = *(long *)pIVar1;
                bVar17 = lVar14 == lVar11;
                if (bVar17) {
                  *(long *)pIVar1 = lVar14 + 1;
                  lVar11 = lVar14;
                }
                UNLOCK();
              } while (!bVar17);
              if (lVar11 != -1) {
                local_60 = local_70;
              }
            }
LAB_0010d793:
            local_68 = 0;
            local_48 = (Image *)0x11e0ad;
            local_40[0] = 0x17;
            String::parse_latin1((StrRange *)&local_68);
            vformat<String>(&local_48,(StrRange *)&local_68,&local_60);
            _err_print_error("texture_2d_get",
                             "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5c6,
                             "Method/function failed. Returning: Ref<Image>()",&local_48,0,0);
            pIVar1 = local_48;
            if (local_48 != (Image *)0x0) {
              LOCK();
              pIVar2 = local_48 + -0x10;
              *(long *)pIVar2 = *(long *)pIVar2 + -1;
              UNLOCK();
              if (*(long *)pIVar2 == 0) {
                local_48 = (Image *)0x0;
                Memory::free_static(pIVar1 + -0x10,false);
              }
            }
            lVar14 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar3 = (long *)(local_68 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            pIVar1 = local_60;
            if (local_60 != (Image *)0x0) {
              LOCK();
              pIVar2 = local_60 + -0x10;
              *(long *)pIVar2 = *(long *)pIVar2 + -1;
              UNLOCK();
              if (*(long *)pIVar2 == 0) {
                local_60 = (Image *)0x0;
                Memory::free_static(pIVar1 + -0x10,false);
              }
            }
            pIVar1 = local_70;
            *param_1 = 0;
            if (local_70 != (Image *)0x0) {
              LOCK();
              pIVar2 = local_70 + -0x10;
              *(long *)pIVar2 = *(long *)pIVar2 + -1;
              UNLOCK();
              if (*(long *)pIVar2 == 0) {
                local_70 = (Image *)0x0;
                Memory::free_static(pIVar1 + -0x10,false);
              }
            }
          }
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            memdelete<Image>(pIVar16);
          }
        }
        lVar14 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar3 = (long *)(local_50 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
      }
      else {
        *param_1 = 0;
        if (*(long *)(lVar14 + 0x88) != 0) {
          *param_1 = *(long *)(lVar14 + 0x88);
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            *param_1 = 0;
          }
        }
      }
      goto LAB_0010d891;
    }
    if (*(int *)(lVar14 + 0x110) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("texture_2d_get","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",
                   0x59e,"Parameter \"tex\" is null.",0,0);
  *param_1 = 0;
LAB_0010d891:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::decal_allocate() */

void __thiscall RendererRD::TextureStorage::decal_allocate(TextureStorage *this)

{
  RID_Alloc<RendererRD::TextureStorage::Decal,true>::allocate_rid
            ((RID_Alloc<RendererRD::TextureStorage::Decal,true> *)(this + 0x1c0));
  return;
}



/* RendererRD::TextureStorage::decal_instance_create(RID) */

void __thiscall
RendererRD::TextureStorage::decal_instance_create(TextureStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = ZEXT416(_LC154);
  local_30 = 0x3f800000;
  local_40 = ZEXT416(_LC154);
  local_18 = 0xffffffff;
  local_28 = 0;
  local_20 = 0;
  local_58 = param_2;
  if (*(code **)(*ForwardIDStorage::singleton + 0x10) != ForwardIDStorage::allocate_forward_id) {
    local_18 = (**(code **)(*ForwardIDStorage::singleton + 0x10))(ForwardIDStorage::singleton,3);
  }
  RID_Alloc<RendererRD::TextureStorage::DecalInstance,false>::make_rid
            ((RID_Alloc<RendererRD::TextureStorage::DecalInstance,false> *)(this + 0x218),
             (DecalInstance *)&local_58);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_create_render_target_backbuffer(RendererRD::TextureStorage::RenderTarget*)
    */

void __thiscall
RendererRD::TextureStorage::_create_render_target_backbuffer
          (TextureStorage *this,RenderTarget *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  TextureFormat *pTVar6;
  undefined8 uVar7;
  Vector *pVVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x48) != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_create_render_target_backbuffer",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xd61,
                       "Condition \"rt->backbuffer.is_valid()\" is true.",0,0);
      return;
    }
    goto LAB_0010e739;
  }
  uVar5 = Image::get_image_required_mipmaps(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),5);
  local_50 = 0;
  local_88 = CONCAT44(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x38));
  local_68 = 0x10b;
  local_7c = _LC78;
  local_80 = *(undefined4 *)(param_1 + 4);
  local_58 = 0;
  local_70 = 1;
  local_74 = uVar5;
  pTVar6 = (TextureFormat *)RenderingDevice::get_singleton();
  local_b0 = 0;
  local_98 = 6;
  local_a8 = __LC202;
  lStack_a0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar6,(TextureView *)&local_88,(Vector *)&local_a8);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_b0);
  uVar7 = RenderingDevice::get_singleton();
  local_b8 = 0;
  lStack_a0 = 0x19;
  local_a8 = "Render Target Back Buffer";
  String::parse_latin1((StrRange *)&local_b8);
  RenderingDevice::set_resource_name(uVar7,*(undefined8 *)(param_1 + 0x48),(StrRange *)&local_b8);
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  uVar7 = RenderingDevice::get_singleton();
  local_98 = 6;
  local_a8 = __LC202;
  lStack_a0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create_shared_from_slice
                    (uVar7,(Vector *)&local_a8,*(undefined8 *)(param_1 + 0x48),0,0,1,0,0);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  uVar7 = RenderingDevice::get_singleton();
  local_b8 = 0;
  lStack_a0 = 0x1a;
  local_a8 = "Back Buffer slice mipmap 0";
  String::parse_latin1((StrRange *)&local_b8);
  RenderingDevice::set_resource_name(uVar7,*(undefined8 *)(param_1 + 0x58),(StrRange *)&local_b8);
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lStack_a0 = 0;
  Vector<RID>::push_back((Vector<RID> *)&local_a8,*(undefined8 *)(param_1 + 0x58));
  pVVar8 = (Vector *)RenderingDevice::get_singleton();
  uVar7 = RenderingDevice::framebuffer_create(pVVar8,(long)&local_a8,0xffffffff);
  lVar2 = lStack_a0;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  if (lStack_a0 == 0) {
LAB_0010e4db:
    lVar2 = *(long *)(param_1 + 0x70);
  }
  else {
    LOCK();
    plVar1 = (long *)(lStack_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010e4db;
    lStack_a0 = 0;
    Memory::free_static((void *)(lVar2 + -0x10),false);
    lVar2 = *(long *)(param_1 + 0x70);
  }
  if (lVar2 != 0) {
    uVar7 = RenderingDevice::get_singleton();
    cVar4 = RenderingDevice::uniform_set_is_valid(uVar7);
    if (cVar4 != '\0') {
      uVar7 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar7);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  if (1 < uVar5) {
    uVar11 = 1;
    do {
      uVar9 = RenderingDevice::get_singleton();
      local_98 = 6;
      local_a8 = __LC202;
      lStack_a0 = _UNK_00128e58;
      uVar7 = 0;
      uVar9 = RenderingDevice::texture_create_shared_from_slice
                        (uVar9,(Vector *)&local_a8,*(undefined8 *)(param_1 + 0x48),0,
                         uVar11 & 0xffffffff,1,0,0);
      uVar10 = RenderingDevice::get_singleton();
      itos((long)&local_b8);
      operator+((char *)&local_a8,(String *)"Back Buffer slice mip: ");
      RenderingDevice::set_resource_name(uVar10,uVar9,(Vector *)&local_a8);
      pcVar3 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
          uVar7 = extraout_RDX;
        }
      }
      lVar2 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          uVar7 = extraout_RDX_00;
        }
      }
      uVar11 = uVar11 + 1;
      Vector<RID>::push_back((Vector<RID> *)(param_1 + 0x60),uVar9,uVar7);
    } while (uVar5 != uVar11);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e739:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_get_rd_backbuffer_framebuffer(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_rd_backbuffer_framebuffer
          (TextureStorage *this,ulong param_2)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(long *)(pRVar1 + 0x48) == 0) {
        _create_render_target_backbuffer(this,pRVar1);
      }
      return *(undefined8 *)(pRVar1 + 0x50);
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_rd_backbuffer_framebuffer",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xea3,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::render_target_copy_to_back_buffer(RID, Rect2i const&, bool) */

void __thiscall
RendererRD::TextureStorage::render_target_copy_to_back_buffer
          (TextureStorage *this,ulong param_2,Vector2i *param_3,char param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  Vector2i *this_00;
  long lVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *local_b0;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = RendererRD::CopyEffects::get_singleton();
  if (lVar5 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0xff5;
      pcVar9 = "Parameter \"copy_effects\" is null.";
      goto LAB_0010ed6e;
    }
    goto LAB_0010edff;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    this_00 = (Vector2i *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
              *(long *)(*(long *)(this + 0x298) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(this_00 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(long *)(this_00 + 0x48) == 0) {
        _create_render_target_backbuffer(this,(RenderTarget *)this_00);
      }
      local_78 = 0;
      uStack_70 = 0;
      local_58._0_8_ = 0;
      local_58._8_8_ = 0;
      cVar2 = Vector2i::operator==(param_3,(Vector2i *)local_58);
      if ((cVar2 == '\0') ||
         (cVar2 = Vector2i::operator==(param_3 + 8,(Vector2i *)(local_58 + 8)), cVar2 == '\0')) {
        local_68 = 0;
        local_60 = *(undefined8 *)this_00;
        local_58._0_8_ = *(undefined8 *)param_3;
        uVar7 = *(undefined8 *)(param_3 + 8);
        if ((int)((uint)((ulong)local_60 >> 0x20) | (uint)local_60) < 0) {
LAB_0010ed10:
          local_58._8_8_ = uVar7;
          _err_print_error("intersects","./core/math/rect2i.h",0x38,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
          uVar7 = local_58._8_8_;
        }
        else {
          local_58._8_4_ = (undefined4)uVar7;
          local_68._0_4_ = 0;
          local_58._12_4_ = (undefined4)((ulong)uVar7 >> 0x20);
          if ((int)(local_58._8_4_ | local_58._12_4_) < 0) goto LAB_0010ed10;
        }
        local_58._8_8_ = uVar7;
        iVar3 = local_58._8_4_ + local_58._0_4_;
        if (((int)local_68 < iVar3) && ((int)local_58._0_4_ < (int)local_60 + (int)local_68)) {
          if (((int)(local_58._12_4_ + local_58._4_4_) <= local_68._4_4_) ||
             (local_60._4_4_ + local_68._4_4_ <= (int)local_58._4_4_)) goto LAB_0010ed00;
          local_58._4_4_ = local_68._4_4_;
          if (local_68._4_4_ < *(int *)(param_3 + 4)) {
            local_58._4_4_ = *(int *)(param_3 + 4);
          }
          local_58._0_4_ = *(int *)param_3;
          if (*(int *)param_3 < (int)local_68) {
            local_58._0_4_ = (int)local_68;
          }
          uVar6 = Vector2i::operator+(param_3,param_3 + 8);
          uVar7 = Vector2i::operator+((Vector2i *)&local_68,(Vector2i *)&local_60);
          local_7c = (int)((ulong)uVar7 >> 0x20);
          iVar3 = (int)((ulong)uVar6 >> 0x20);
          if (iVar3 < local_7c) {
            local_7c = iVar3;
          }
          if ((int)uVar6 < (int)uVar7) {
            uVar7 = uVar6;
          }
          local_80 = (undefined4)uVar7;
          uStack_70 = Vector2i::operator-((Vector2i *)&local_80,(Vector2i *)local_58);
          local_78 = local_58._0_8_;
          local_58._8_8_ = uStack_70;
        }
        else {
LAB_0010ed00:
          local_78 = 0;
          uStack_70 = 0;
        }
        local_58._0_8_ = 0;
        cVar2 = Vector2i::operator==((Vector2i *)&uStack_70,(Vector2i *)local_58);
        if (cVar2 == '\0') goto LAB_0010ea3e;
      }
      else {
        uStack_70 = *(undefined8 *)this_00;
LAB_0010ea3e:
        cVar2 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
        if (cVar2 == '\0') {
          local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_78);
          auVar13._0_8_ = Vector2i::operator_cast_to_Vector2(this_00);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_58._0_8_;
          auVar13._8_8_ = _LC273;
          auVar13 = divps(auVar12,auVar13);
          local_58._0_8_ = auVar13._0_8_;
          auVar11._0_8_ = Vector2i::operator_cast_to_Vector2(this_00);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_58._8_8_;
          auVar11._8_8_ = _LC273;
          auVar13 = divps(auVar14,auVar11);
          local_58._8_8_ = auVar13._0_8_;
          RendererRD::CopyEffects::copy_to_fb_rect
                    (lVar5,*(undefined8 *)(this_00 + 0x10),*(undefined8 *)(this_00 + 0x50),
                     (Rect2i *)&local_78,0,0,0,0,0,0,1,0,0,(Vector2i *)local_58);
        }
        else {
          RendererRD::CopyEffects::copy_to_rect
                    (lVar5,*(undefined8 *)(this_00 + 0x10),*(undefined8 *)(this_00 + 0x58),&local_78
                     ,0,0,0,(byte)this_00[0x45] ^ 1,1);
        }
        local_b0 = &local_78;
        if (param_4 != '\0') {
          uVar7 = RenderingDevice::get_singleton();
          local_a0 = 0;
          local_98 = "Gaussian Blur Mipmaps";
          local_90 = 0x15;
          local_58._4_4_ = _LC77;
          local_58._0_4_ = _LC77;
          local_58._12_4_ = _LC77;
          local_58._8_4_ = _LC77;
          String::parse_latin1((StrRange *)&local_a0);
          RenderingDevice::draw_command_begin_label
                    (uVar7,(StrRange *)&local_a0,(Vector2i *)local_58);
          lVar8 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          local_58._0_8_ = *(undefined8 *)this_00;
          lVar10 = 0;
          uVar7 = *(undefined8 *)(this_00 + 0x10);
          lVar8 = *(long *)(this_00 + 0x68);
          while (uVar6 = uVar7, lVar8 != 0) {
            while( true ) {
              if (*(long *)(lVar8 + -8) <= lVar10) goto LAB_0010ec20;
              local_78 = CONCAT44(local_78._4_4_ >> 1,(int)local_78 >> 1);
              iVar3 = (int)uStack_70 >> 1;
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              uStack_70._4_4_ = uStack_70._4_4_ >> 1;
              if (uStack_70._4_4_ < 1) {
                uStack_70._4_4_ = 1;
              }
              iVar4 = (int)local_58._4_4_ >> 1;
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              local_58._0_4_ = (int)local_58._0_4_ >> 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
              uVar7 = *(undefined8 *)(lVar8 + lVar10 * 8);
              if ((int)local_58._0_4_ < 1) {
                local_58._0_4_ = 1;
              }
              local_58._4_4_ = iVar4;
              cVar2 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
              if (cVar2 != '\0') break;
              lVar10 = lVar10 + 1;
              RendererRD::CopyEffects::gaussian_blur_raster
                        (lVar5,uVar6,uVar7,local_b0,(Vector2i *)local_58);
              lVar8 = *(long *)(this_00 + 0x68);
              uVar6 = uVar7;
              if (lVar8 == 0) goto LAB_0010ec20;
            }
            lVar10 = lVar10 + 1;
            RendererRD::CopyEffects::gaussian_blur
                      (lVar5,uVar6,uVar7,local_b0,(Vector2i *)local_58,(byte)this_00[0x45] ^ 1);
            lVar8 = *(long *)(this_00 + 0x68);
          }
LAB_0010ec20:
          RenderingDevice::get_singleton();
          RenderingDevice::draw_command_end_label();
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010edff;
    }
    if (*(int *)(this_00 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar7 = 0xff8;
    pcVar9 = "Parameter \"rt\" is null.";
LAB_0010ed6e:
    _err_print_error("render_target_copy_to_back_buffer",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar7,pcVar9,0,0
                    );
    return;
  }
LAB_0010edff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_clear_back_buffer(RID, Rect2i const&, Color const&) */

void __thiscall
RendererRD::TextureStorage::render_target_clear_back_buffer
          (TextureStorage *this,ulong param_2,Vector2i *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  RenderTarget *pRVar9;
  long in_FS_OFFSET;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar9 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar9 + 0x150) == (int)(param_2 >> 0x20)) {
      lVar3 = RendererRD::CopyEffects::get_singleton();
      if (lVar3 == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = 0x1031;
          pcVar8 = "Parameter \"copy_effects\" is null.";
          goto LAB_0010f10e;
        }
        goto LAB_0010f18e;
      }
      if (*(long *)(pRVar9 + 0x48) == 0) {
        _create_render_target_backbuffer(this,pRVar9);
      }
      local_68 = 0;
      local_60 = 0;
      local_48 = 0;
      uStack_40 = 0;
      cVar1 = Vector2i::operator==(param_3,(Vector2i *)&local_48);
      if ((cVar1 == '\0') ||
         (cVar1 = Vector2i::operator==(param_3 + 8,(Vector2i *)&uStack_40), cVar1 == '\0')) {
        local_58[0] = 0;
        local_58[1] = 0;
        local_50 = *(undefined8 *)pRVar9;
        local_48 = *(undefined8 *)param_3;
        uVar5 = *(undefined8 *)(param_3 + 8);
        if ((int)((uint)((ulong)local_50 >> 0x20) | (uint)local_50) < 0) {
LAB_0010f0a0:
          uStack_40 = uVar5;
          _err_print_error("intersects","./core/math/rect2i.h",0x38,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
          iVar7 = local_58[0];
          uVar5 = uStack_40;
        }
        else {
          uStack_40._0_4_ = (uint)uVar5;
          uStack_40._4_4_ = (uint)((ulong)uVar5 >> 0x20);
          iVar7 = 0;
          if ((int)((uint)uStack_40 | uStack_40._4_4_) < 0) goto LAB_0010f0a0;
        }
        uStack_40 = uVar5;
        iVar2 = (uint)uStack_40 + (int)local_48;
        if ((iVar7 < iVar2) && ((int)local_48 < (int)local_50 + iVar7)) {
          if (((int)(uStack_40._4_4_ + local_48._4_4_) <= local_58[1]) ||
             (local_50._4_4_ + local_58[1] <= local_48._4_4_)) goto LAB_0010f090;
          iVar2 = local_58[1];
          if (local_58[1] < *(int *)(param_3 + 4)) {
            iVar2 = *(int *)(param_3 + 4);
          }
          iVar6 = *(int *)param_3;
          if (*(int *)param_3 < iVar7) {
            iVar6 = iVar7;
          }
          local_48 = CONCAT44(iVar2,iVar6);
          uVar4 = Vector2i::operator+(param_3,param_3 + 8);
          uVar5 = Vector2i::operator+((Vector2i *)local_58,(Vector2i *)&local_50);
          local_6c = (int)((ulong)uVar5 >> 0x20);
          iVar7 = (int)((ulong)uVar4 >> 0x20);
          if (iVar7 < local_6c) {
            local_6c = iVar7;
          }
          if ((int)uVar4 < (int)uVar5) {
            uVar5 = uVar4;
          }
          local_70 = (undefined4)uVar5;
          local_60 = Vector2i::operator-((Vector2i *)&local_70,(Vector2i *)&local_48);
          local_68 = local_48;
          uStack_40 = local_60;
        }
        else {
LAB_0010f090:
          local_68 = 0;
          local_60 = 0;
        }
        local_48 = 0;
        cVar1 = Vector2i::operator==((Vector2i *)&local_60,(Vector2i *)&local_48);
        if (cVar1 == '\0') goto LAB_0010f00f;
      }
      else {
        local_60 = *(undefined8 *)pRVar9;
LAB_0010f00f:
        cVar1 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
        if (cVar1 == '\0') {
          RendererRD::CopyEffects::set_color_raster
                    (lVar3,*(undefined8 *)(pRVar9 + 0x58),param_4,&local_68);
        }
        else {
          RendererRD::CopyEffects::set_color
                    (lVar3,*(undefined8 *)(pRVar9 + 0x58),param_4,&local_68,(byte)pRVar9[0x45] ^ 1);
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f18e;
    }
    if (*(int *)(pRVar9 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar5 = 0x102e;
    pcVar8 = "Parameter \"rt\" is null.";
LAB_0010f10e:
    _err_print_error("render_target_clear_back_buffer",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar5,pcVar8,0,0
                    );
    return;
  }
LAB_0010f18e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_gen_back_buffer_mipmaps(RID, Rect2i const&) */

void __thiscall
RendererRD::TextureStorage::render_target_gen_back_buffer_mipmaps
          (TextureStorage *this,ulong param_2,Vector2i *param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  RenderTarget *pRVar11;
  long in_FS_OFFSET;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar11 = (RenderTarget *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
              *(long *)(*(long *)(this + 0x298) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar11 + 0x150) == (int)(param_2 >> 0x20)) {
      lVar5 = RendererRD::CopyEffects::get_singleton();
      if (lVar5 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = 0x104e;
          pcVar9 = "Parameter \"copy_effects\" is null.";
          goto LAB_0010f61e;
        }
        goto LAB_0010f6a2;
      }
      if (*(long *)(pRVar11 + 0x48) == 0) {
        _create_render_target_backbuffer(this,pRVar11);
      }
      local_78 = 0;
      uStack_70 = 0;
      local_58 = 0;
      uStack_50 = 0;
      cVar2 = Vector2i::operator==(param_3,(Vector2i *)&local_58);
      if ((cVar2 == '\0') ||
         (cVar2 = Vector2i::operator==(param_3 + 8,(Vector2i *)&uStack_50), cVar2 == '\0')) {
        local_68 = 0;
        local_60 = *(undefined8 *)pRVar11;
        local_58 = *(undefined8 *)param_3;
        uVar7 = *(undefined8 *)(param_3 + 8);
        if ((int)((uint)((ulong)local_60 >> 0x20) | (uint)local_60) < 0) {
LAB_0010f5b0:
          uStack_50 = uVar7;
          _err_print_error("intersects","./core/math/rect2i.h",0x38,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
          uVar7 = uStack_50;
        }
        else {
          uStack_50._0_4_ = (uint)uVar7;
          local_68._0_4_ = 0;
          uStack_50._4_4_ = (uint)((ulong)uVar7 >> 0x20);
          if ((int)((uint)uStack_50 | uStack_50._4_4_) < 0) goto LAB_0010f5b0;
        }
        uStack_50 = uVar7;
        iVar3 = (uint)uStack_50 + (int)local_58;
        if (((int)local_68 < iVar3) && ((int)local_58 < (int)local_60 + (int)local_68)) {
          if (((int)(uStack_50._4_4_ + local_58._4_4_) <= local_68._4_4_) ||
             (local_60._4_4_ + local_68._4_4_ <= local_58._4_4_)) goto LAB_0010f5a0;
          iVar3 = local_68._4_4_;
          if (local_68._4_4_ < *(int *)(param_3 + 4)) {
            iVar3 = *(int *)(param_3 + 4);
          }
          iVar4 = *(int *)param_3;
          if (*(int *)param_3 < (int)local_68) {
            iVar4 = (int)local_68;
          }
          local_58 = CONCAT44(iVar3,iVar4);
          uVar6 = Vector2i::operator+(param_3,param_3 + 8);
          uVar7 = Vector2i::operator+((Vector2i *)&local_68,(Vector2i *)&local_60);
          local_7c = (int)((ulong)uVar7 >> 0x20);
          iVar3 = (int)((ulong)uVar6 >> 0x20);
          if (iVar3 < local_7c) {
            local_7c = iVar3;
          }
          if ((int)uVar6 < (int)uVar7) {
            uVar7 = uVar6;
          }
          local_80 = (undefined4)uVar7;
          uStack_70 = Vector2i::operator-((Vector2i *)&local_80,(Vector2i *)&local_58);
          local_78 = local_58;
          uStack_50 = uStack_70;
        }
        else {
LAB_0010f5a0:
          local_78 = 0;
          uStack_70 = 0;
        }
        local_58 = 0;
        cVar2 = Vector2i::operator==((Vector2i *)&uStack_70,(Vector2i *)&local_58);
        if (cVar2 == '\0') goto LAB_0010f39f;
      }
      else {
        uStack_70 = *(undefined8 *)pRVar11;
LAB_0010f39f:
        uVar7 = RenderingDevice::get_singleton();
        local_a0 = 0;
        local_98 = "Gaussian Blur Mipmaps2";
        local_90 = 0x16;
        local_58 = CONCAT44(_LC77,_LC77);
        uStack_50 = CONCAT44(_LC77,_LC77);
        String::parse_latin1((StrRange *)&local_a0);
        RenderingDevice::draw_command_begin_label(uVar7,(StrRange *)&local_a0,(Vector2i *)&local_58)
        ;
        lVar8 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        local_58 = *(undefined8 *)pRVar11;
        lVar10 = 0;
        uVar7 = *(undefined8 *)(pRVar11 + 0x58);
        lVar8 = *(long *)(pRVar11 + 0x68);
        while (uVar6 = uVar7, lVar8 != 0) {
          while( true ) {
            if (*(long *)(lVar8 + -8) <= lVar10) goto LAB_0010f550;
            local_78 = CONCAT44(local_78._4_4_ >> 1,(int)local_78 >> 1);
            iVar3 = (int)uStack_70 >> 1;
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            uStack_70._4_4_ = uStack_70._4_4_ >> 1;
            if (uStack_70._4_4_ < 1) {
              uStack_70._4_4_ = 1;
            }
            iVar4 = local_58._4_4_ >> 1;
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            local_58._0_4_ = (int)local_58 >> 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
            uVar7 = *(undefined8 *)(lVar8 + lVar10 * 8);
            if ((int)local_58 < 1) {
              local_58._0_4_ = 1;
            }
            local_58 = CONCAT44(iVar4,(int)local_58);
            cVar2 = (**(code **)(*RendererSceneRenderRD::singleton + 600))();
            if (cVar2 != '\0') break;
            lVar10 = lVar10 + 1;
            RendererRD::CopyEffects::gaussian_blur_raster
                      (lVar5,uVar6,uVar7,&local_78,(Vector2i *)&local_58);
            lVar8 = *(long *)(pRVar11 + 0x68);
            uVar6 = uVar7;
            if (lVar8 == 0) goto LAB_0010f550;
          }
          lVar10 = lVar10 + 1;
          RendererRD::CopyEffects::gaussian_blur
                    (lVar5,uVar6,uVar7,&local_78,(Vector2i *)&local_58,(byte)pRVar11[0x45] ^ 1);
          lVar8 = *(long *)(pRVar11 + 0x68);
        }
LAB_0010f550:
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f6a2;
    }
    if (*(int *)(pRVar11 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar7 = 0x104b;
    pcVar9 = "Parameter \"rt\" is null.";
LAB_0010f61e:
    _err_print_error("render_target_gen_back_buffer_mipmaps",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar7,pcVar9,0,0
                    );
    return;
  }
LAB_0010f6a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_get_sdf_texture(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_sdf_texture(TextureStorage *this,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  long lVar3;
  TextureFormat *pTVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 (*local_a0 [2]) [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  undefined2 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar6 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar6 + 0xa0) == 0) {
        local_30 = 0;
        local_68 = __LC279;
        uStack_60 = _UNK_00128e88;
        local_38 = 0;
        local_58 = _LC78;
        uStack_50 = _UNK_00128e98;
        local_48 = 1;
        local_a0[0] = (undefined1 (*) [16])0x0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_a0,0x40);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_a0);
        pauVar1 = local_a0[0];
        *local_a0[0] = (undefined1  [16])0x0;
        local_a0[0][1] = (undefined1  [16])0x0;
        local_a0[0][2] = (undefined1  [16])0x0;
        local_a0[0][3] = (undefined1  [16])0x0;
        local_90 = 0;
        pTVar4 = (TextureFormat *)RenderingDevice::get_singleton();
        local_78 = 6;
        local_88 = __LC202;
        uStack_80 = _UNK_00128e58;
        uVar5 = RenderingDevice::texture_create(pTVar4,(TextureView *)&local_68,(Vector *)&local_88)
        ;
        *(undefined8 *)(lVar6 + 0xa0) = uVar5;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_90);
        LOCK();
        pauVar1 = pauVar1 + -1;
        *(long *)*pauVar1 = *(long *)*pauVar1 + -1;
        UNLOCK();
        if (*(long *)*pauVar1 == 0) {
          Memory::free_static(local_a0[0] + -1,false);
        }
        lVar3 = local_38;
        if (local_38 != 0) {
          LOCK();
          plVar2 = (long *)(local_38 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_38 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar5 = *(undefined8 *)(lVar6 + 0xa0);
      goto LAB_0010f726;
    }
    if (*(int *)(lVar6 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_sdf_texture",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xf16,
                   "Parameter \"rt\" is null.",0,0);
  uVar5 = 0;
LAB_0010f726:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<unsigned_char>>::_copy_on_write(CowData<Vector<unsigned_char>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<unsigned_char> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<unsigned_char> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<unsigned_char>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
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



/* RendererRD::TextureStorage::~TextureStorage() */

void __thiscall RendererRD::TextureStorage::~TextureStorage(TextureStorage *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_canvas_texture_allocate_001279e0;
  ShaderRD::version_free((ShaderRD *)(this + 0x2e8),*(undefined8 *)(this + 0x460));
  free_decal_data(this);
  if (*(int *)(this + 0x18c) != 0) {
    local_50 = 0;
    local_40 = 0x2a;
    local_48 = " textures were not removed from the atlas.";
    String::parse_latin1((StrRange *)&local_50);
    itos((long)&local_48);
    operator+((char *)&local_58,(String *)"Decal Atlas: ");
    String::operator+((String *)&local_60,(String *)&local_58);
    _err_print_error("~TextureStorage",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x231,
                     (String *)&local_60,0,0);
    lVar10 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
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
    lVar10 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    uVar6 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar6,*(undefined8 *)(this + 0x198));
  }
  lVar10 = 0;
  do {
    while (*(long *)(this + lVar10 * 8 + 0x18) == 0) {
      lVar10 = lVar10 + 1;
      if (lVar10 == 0x13) goto LAB_0010fc11;
    }
    uVar6 = RenderingDevice::get_singleton();
    iVar9 = (int)lVar10;
    lVar10 = lVar10 + 1;
    RenderingDevice::free(uVar6,*(undefined8 *)(this + (long)iVar9 * 8 + 0x18));
  } while (lVar10 != 0x13);
LAB_0010fc11:
  singleton = 0;
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)(this + 0x4c8));
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)(this + 0x4b8));
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)(this + 0x4a8));
  if ((*(long *)(this + 0x498) != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
    memdelete<Image>(*(Image **)(this + 0x498));
  }
  *(undefined ***)(this + 0x2e8) = &PTR__CanvasSdfShaderRD_00127920;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x2e8));
  RID_Alloc<RendererRD::TextureStorage::RenderTarget,false>::~RID_Alloc
            ((RID_Alloc<RendererRD::TextureStorage::RenderTarget,false> *)(this + 0x290));
  uVar13 = *(uint *)(this + 0x238);
  *(undefined ***)(this + 0x218) = &PTR__RID_Alloc_001279a0;
  if (uVar13 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar13);
    print_error((String *)&local_48);
    pcVar4 = local_48;
    lVar10 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar10 = local_50;
      }
    }
    local_50 = lVar10;
    if (lVar10 != 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  uVar13 = *(uint *)(this + 0x234);
  uVar3 = *(uint *)(this + 0x230);
  lVar10 = 0;
  if (uVar3 <= uVar13) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x220) + lVar10 * 8),false);
      lVar2 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x228) + lVar2),false);
    } while ((uint)lVar10 < uVar13 / uVar3);
  }
  if (*(void **)(this + 0x220) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x220),false);
    Memory::free_static(*(void **)(this + 0x228),false);
  }
  *(undefined ***)(this + 0x1c0) = &PTR__RID_Alloc_00127980;
  uVar13 = *(uint *)(this + 0x1e0);
  if (uVar13 == 0) {
    uVar7 = (ulong)*(uint *)(this + 0x1dc);
    uVar13 = *(uint *)(this + 0x1d8);
    puVar8 = *(undefined8 **)(this + 0x1c8);
LAB_0010fec4:
    if (uVar13 <= (uint)uVar7) {
      lVar10 = 0;
      while( true ) {
        Memory::free_static((void *)puVar8[lVar10],false);
        lVar2 = lVar10 * 8;
        lVar10 = lVar10 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x1d0) + lVar2),false);
        if ((uint)(uVar7 / uVar13) <= (uint)lVar10) break;
        puVar8 = *(undefined8 **)(this + 0x1c8);
      }
LAB_0010ff0d:
      puVar8 = *(undefined8 **)(this + 0x1c8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar13);
    print_error((String *)&local_48);
    pcVar4 = local_48;
    lVar10 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
        lVar10 = local_50;
      }
    }
    local_50 = lVar10;
    if (lVar10 != 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uVar13 = *(uint *)(this + 0x1d8);
    puVar8 = *(undefined8 **)(this + 0x1c8);
    if (*(int *)(this + 0x1dc) != 0) {
      uVar11 = 0;
      do {
        lVar10 = (uVar11 % (ulong)uVar13) * 0xa0 + puVar8[uVar11 / uVar13];
        if (-1 < *(int *)(lVar10 + 0x98)) {
          Dependency::~Dependency((Dependency *)(lVar10 + 0x68));
          uVar13 = *(uint *)(this + 0x1d8);
          puVar8 = *(undefined8 **)(this + 0x1c8);
        }
        uVar7 = (ulong)*(uint *)(this + 0x1dc);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
      goto LAB_0010fec4;
    }
    if (uVar13 == 0) {
      Memory::free_static((void *)*puVar8,false);
      Memory::free_static((void *)**(undefined8 **)(this + 0x1d0),false);
      goto LAB_0010ff0d;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    Memory::free_static(puVar8,false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
  }
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar10 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  pvVar12 = *(void **)(this + 0x168);
  if (pvVar12 != (void *)0x0) {
    if (*(int *)(this + 0x18c) != 0) {
      uVar13 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x188) * 4);
      if (uVar13 == 0) {
        *(undefined4 *)(this + 0x18c) = 0;
        *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x170) + lVar10) != 0) {
            *(int *)(*(long *)(this + 0x170) + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar12 + lVar10 * 2),false);
            pvVar12 = *(void **)(this + 0x168);
            *(undefined8 *)((long)pvVar12 + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar13 << 2);
        *(undefined4 *)(this + 0x18c) = 0;
        *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
        if (pvVar12 == (void *)0x0) goto LAB_0010ffe3;
      }
    }
    Memory::free_static(pvVar12,false);
    Memory::free_static(*(void **)(this + 0x170),false);
  }
LAB_0010ffe3:
  RID_Alloc<RendererRD::TextureStorage::Texture,true>::~RID_Alloc
            ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108));
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true>::~RID_Alloc
            ((RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true> *)(this + 0xb0));
  return;
}



/* RendererRD::TextureStorage::~TextureStorage() */

void __thiscall RendererRD::TextureStorage::~TextureStorage(TextureStorage *this)

{
  ~TextureStorage(this);
  operator_delete(this,0x4d0);
  return;
}



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* RendererRD::TextureStorage::texture_3d_update(RID, Vector<Ref<Image> > const&) */

void __thiscall
RendererRD::TextureStorage::texture_3d_update(TextureStorage *this,ulong param_2,long param_3)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  long lVar4;
  Object *pOVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  Image *pIVar10;
  undefined8 uVar11;
  char *pcVar12;
  uint uVar13;
  Image *pIVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  size_t local_a8;
  int local_a0;
  undefined1 local_78 [8];
  long local_70 [2];
  long local_60;
  Object *local_58;
  void *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x124))) {
    piVar17 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                     *(long *)(*(long *)(this + 0x110) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8));
    if (piVar17[0x44] == (int)(param_2 >> 0x20)) {
      if (*piVar17 != 2) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00110b52;
        uVar11 = 0x53a;
        pcVar12 = "Condition \"tex->type != TextureStorage::TYPE_3D\" is true.";
        goto LAB_00110a46;
      }
      iVar8 = Image::validate_3d_image
                        (piVar17[0xf],piVar17[0x11],piVar17[0x12],piVar17[0x13],1 < piVar17[0x15],
                         param_3);
      if (iVar8 == 0) {
        local_70[0] = 0;
        local_60 = 0;
        if (*(long *)(param_3 + 8) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(*(long *)(param_3 + 8) + -8);
        }
        CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)&local_60,lVar9);
        lVar9 = *(long *)(param_3 + 8);
        if (lVar9 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          uVar13 = 0;
          do {
            if (*(long *)(lVar9 + -8) <= (long)uVar18) break;
            pIVar14 = *(Image **)(lVar9 + uVar18 * 8);
            if ((pIVar14 != (Image *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
              pIVar14 = (Image *)0x0;
            }
            iVar8 = Image::get_format();
            if (iVar8 != piVar17[0x10]) {
              (**(code **)(*(long *)pIVar14 + 0x198))(&local_58,pIVar14,0);
              if (local_58 == (Object *)0x0) {
LAB_001106a3:
                pIVar10 = (Image *)0x0;
LAB_001106a6:
                cVar7 = RefCounted::unreference();
                if (cVar7 != '\0') {
                  memdelete<Image>(pIVar14);
                }
                pIVar14 = pIVar10;
                if (local_58 != (Object *)0x0) goto LAB_001106c7;
              }
              else {
                pIVar10 = (Image *)__dynamic_cast(local_58,&Object::typeinfo,&Image::typeinfo,0);
                if (pIVar14 != pIVar10) {
                  if ((pIVar10 != (Image *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0'))
                  goto LAB_001106a3;
                  goto LAB_001106a6;
                }
LAB_001106c7:
                cVar7 = RefCounted::unreference();
                pOVar5 = local_58;
                pIVar14 = pIVar10;
                if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_58), cVar7 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
              }
              Image::convert(pIVar14,piVar17[0x10]);
            }
            Image::get_data();
            pvVar6 = local_50;
            if (local_50 != (void *)0x0) {
              uVar11 = *(undefined8 *)((long)local_50 + -8);
              LOCK();
              plVar1 = (long *)((long)local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = (void *)0x0;
                Memory::free_static((void *)((long)pvVar6 + -0x10),false);
              }
              uVar13 = uVar13 + (int)uVar11;
            }
            if (local_60 == 0) {
              lVar9 = 0;
              goto LAB_00110751;
            }
            lVar9 = *(long *)(local_60 + -8);
            if (lVar9 <= (long)uVar18) goto LAB_00110751;
            CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)&local_60);
            puVar15 = (undefined8 *)(uVar18 * 8 + local_60);
            pIVar10 = (Image *)*puVar15;
            if (pIVar10 != pIVar14) {
              *puVar15 = pIVar14;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                *puVar15 = 0;
              }
              if ((pIVar10 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
                memdelete<Image>(pIVar10);
              }
            }
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              memdelete<Image>(pIVar14);
            }
            uVar18 = uVar18 + 1;
            lVar9 = *(long *)(param_3 + 8);
          } while (lVar9 != 0);
          uVar18 = (ulong)uVar13;
        }
        uVar13 = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_70,uVar18);
        lVar9 = *(long *)(param_3 + 8);
        lVar4 = local_60;
        for (lVar16 = 0; (local_60 = lVar4, lVar9 != 0 && (lVar16 < *(long *)(lVar9 + -8)));
            lVar16 = lVar16 + 1) {
          if (lVar4 == 0) {
            lVar9 = 0;
LAB_001109cb:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar9 = *(long *)(lVar4 + -8);
          if (lVar9 <= lVar16) goto LAB_001109cb;
          Image::get_data();
          pvVar6 = local_50;
          if (local_50 == (void *)0x0) {
            local_a0 = 0;
            local_a8 = 0;
          }
          else {
            local_a8 = *(ulong *)((long)local_50 + -8);
            LOCK();
            plVar1 = (long *)((long)local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = (void *)0x0;
              Memory::free_static((void *)((long)pvVar6 + -0x10),false);
            }
            local_a0 = (int)local_a8;
            local_a8 = local_a8 & 0xffffffff;
          }
          lVar9 = *(long *)(lVar4 + -8);
          if (lVar9 <= lVar16) goto LAB_001109cb;
          uVar18 = (ulong)uVar13;
          Image::get_data();
          pvVar6 = local_50;
          if (local_70[0] == 0) {
            lVar9 = 0;
LAB_00110751:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar18,lVar9,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar9 = *(long *)(local_70[0] + -8);
          if (lVar9 <= (long)uVar18) goto LAB_00110751;
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_70);
          memcpy((void *)(local_70[0] + uVar18),pvVar6,local_a8);
          pvVar6 = local_50;
          if (local_50 != (void *)0x0) {
            LOCK();
            plVar1 = (long *)((long)local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = (void *)0x0;
              Memory::free_static((void *)((long)pvVar6 + -0x10),false);
            }
          }
          uVar13 = uVar13 + local_a0;
          lVar9 = *(long *)(param_3 + 8);
          lVar4 = local_60;
        }
        CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_60);
        uVar11 = RenderingDevice::get_singleton();
        RenderingDevice::texture_update(uVar11,*(undefined8 *)(piVar17 + 4),0,local_78);
        lVar9 = local_70[0];
        if (local_70[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_70[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70[0] = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
      }
      else {
        Image::get_3d_image_validation_error_text(&local_58,iVar8);
        _err_print_error("texture_3d_update",
                         "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x53e,
                         "Method/function failed.",&local_58,0);
        pOVar5 = local_58;
        if (local_58 != (Object *)0x0) {
          LOCK();
          pOVar2 = local_58 + -0x10;
          *(long *)pOVar2 = *(long *)pOVar2 + -1;
          UNLOCK();
          if (*(long *)pOVar2 == 0) {
            local_58 = (Object *)0x0;
            Memory::free_static(pOVar5 + -0x10,false);
          }
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110b52;
    }
    if (piVar17[0x44] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar11 = 0x539;
    pcVar12 = "Parameter \"tex\" is null.";
LAB_00110a46:
    _err_print_error("texture_3d_update",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar11,pcVar12,0
                     ,0);
    return;
  }
LAB_00110b52:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Ref<Image> >::push_back(Ref<Image>) [clone .isra.0] */

void __thiscall Vector<Ref<Image>>::push_back(Vector<Ref<Image>> *this,long *param_2)

{
  long *plVar1;
  Image *pIVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(this + 8));
      pIVar2 = (Image *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pIVar3 = (Image *)*plVar1;
      if (pIVar2 == pIVar3) {
        return;
      }
      *plVar1 = (long)pIVar2;
      if ((pIVar2 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pIVar3 == (Image *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      memdelete<Image>(pIVar3);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* RendererRD::TextureStorage::texture_3d_get(RID) const */

long RendererRD::TextureStorage::texture_3d_get(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  Image *pIVar2;
  uint uVar3;
  ulong uVar4;
  Image *pIVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined4 *puVar17;
  long in_FS_OFFSET;
  bool bVar18;
  Image *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined1 local_88 [8];
  long local_80;
  Vector<Ref<Image>> local_78 [8];
  long local_70 [2];
  long local_60;
  Image *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) || (*(uint *)(param_2 + 0x124) <= (uint)param_3)) {
LAB_00111158:
    uVar7 = 0x5ea;
    pcVar11 = "Parameter \"tex\" is null.";
  }
  else {
    piVar15 = (int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x120)) * 0x118 +
                     *(long *)(*(long *)(param_2 + 0x110) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x120)) * 8));
    if (piVar15[0x44] != (int)(param_3 >> 0x20)) {
      if (piVar15[0x44] + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00111158;
    }
    if (*piVar15 == 2) {
      uVar7 = RenderingDevice::get_singleton();
      RenderingDevice::texture_get_data(local_88,uVar7,*(undefined8 *)(piVar15 + 4),0);
      if (local_80 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(local_80 + -8);
      }
      if (piVar15[0x1c] == lVar9) {
        local_70[0] = 0;
        lVar9 = *(long *)(piVar15 + 0x1a);
        lVar14 = lVar9;
        if (lVar9 != 0) {
          lVar16 = 0;
          do {
            lVar14 = local_70[0];
            if (*(long *)(lVar9 + -8) <= lVar16) break;
            puVar17 = (undefined4 *)(lVar9 + lVar16 * 0x10);
            uVar3 = puVar17[2];
            uVar12 = (ulong)uVar3;
            if (local_80 == 0) {
LAB_00110ff0:
              uVar7 = 0x5f5;
              pcVar11 = 
              "Condition \"bs.offset >= (uint32_t)all_data.size()\" is true. Returning: Vector<Ref<Image>>()"
              ;
LAB_00111002:
              _err_print_error("texture_3d_get",
                               "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar7,
                               pcVar11,0,0);
              *(undefined8 *)(param_1 + 8) = 0;
              goto LAB_00111022;
            }
            uVar4 = *(ulong *)(local_80 + -8);
            if ((uint)uVar4 <= uVar3) goto LAB_00110ff0;
            uVar10 = (ulong)(uVar3 + puVar17[3]);
            if ((uint)uVar4 < uVar3 + puVar17[3]) {
              uVar7 = 0x5f6;
              pcVar11 = 
              "Condition \"bs.offset + bs.buffer_size > (uint32_t)all_data.size()\" is true. Returning: Vector<Ref<Image>>()"
              ;
              goto LAB_00111002;
            }
            local_60 = 0;
            uVar13 = -uVar4;
            if (SBORROW8(uVar12,uVar13) == (long)(uVar12 + uVar4) < 0) {
              if ((long)uVar4 < (long)uVar12) {
                uVar12 = uVar4;
              }
              if ((long)uVar12 < 0) {
                uVar12 = uVar12 + uVar4;
              }
              if (SBORROW8(uVar10,uVar13) == (long)(uVar10 + uVar4) < 0) {
                uVar13 = uVar10;
                if ((long)uVar4 < (long)uVar10) {
                  uVar13 = uVar4;
                }
                if ((long)uVar13 < 0) {
                  uVar13 = uVar13 + uVar4;
                }
              }
              if ((long)uVar13 < (long)uVar12) goto LAB_00110df8;
              lVar14 = uVar13 - uVar12;
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,lVar14);
              lVar9 = local_80;
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
              if (lVar14 != 0) {
                lVar8 = 0;
                do {
                  *(undefined1 *)(local_60 + lVar8) = *(undefined1 *)(lVar9 + uVar12 + lVar8);
                  lVar8 = lVar8 + 1;
                } while (lVar14 != lVar8);
              }
            }
            else if (SBORROW8(uVar10,uVar13) == (long)(uVar10 + uVar4) < 0) {
LAB_00110df8:
              _err_print_error("slice","./core/templates/vector.h",0xb8,
                               "Condition \"begin > end\" is true. Returning: result",0,0);
            }
            else {
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,0);
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
            }
            Image::create_from_data(&local_a8,*puVar17,puVar17[1],0);
            cVar6 = Image::is_empty();
            if (cVar6 != '\0') {
              _err_print_error("texture_3d_get",
                               "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5fa,
                               "Condition \"img->is_empty()\" is true. Returning: Vector<Ref<Image>>()"
                               ,0,0);
              *(undefined8 *)(param_1 + 8) = 0;
              goto LAB_001110f2;
            }
            cVar6 = Image::is_empty();
            if (cVar6 != '\0') {
              lVar9 = *(long *)(piVar15 + 0x24);
              if ((lVar9 != 0) && (1 < *(uint *)(lVar9 + -8))) {
                local_90 = 0;
                plVar1 = (long *)(lVar9 + -0x10);
                goto LAB_001113e7;
              }
              local_a0 = 0;
              local_58 = (Image *)0x11e091;
              local_50 = 0xc;
              String::parse_latin1((StrRange *)&local_a0);
              goto LAB_00111276;
            }
            if (piVar15[0xf] != piVar15[0x10]) {
              Image::convert(local_a8);
            }
            pIVar5 = local_a8;
            if (local_a8 == (Image *)0x0) {
LAB_00110ea3:
              local_58 = (Image *)0x0;
              Vector<Ref<Image>>::push_back(local_78);
            }
            else {
              local_58 = local_a8;
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') goto LAB_00110ea3;
              Vector<Ref<Image>>::push_back(local_78);
              cVar6 = RefCounted::unreference();
              if (cVar6 != '\0') {
                memdelete<Image>(pIVar5);
              }
            }
            if ((local_a8 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
              memdelete<Image>(local_a8);
            }
            lVar9 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            lVar9 = *(long *)(piVar15 + 0x1a);
            lVar16 = lVar16 + 1;
            lVar14 = local_70[0];
          } while (lVar9 != 0);
        }
        local_70[0] = 0;
        *(long *)(param_1 + 8) = lVar14;
        goto LAB_00111022;
      }
      _err_print_error("texture_3d_get",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x5ef,
                       "Condition \"all_data.size() != (int)tex->buffer_size_3d\" is true. Returning: Vector<Ref<Image>>()"
                       ,0,0);
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_0011102c;
    }
    uVar7 = 0x5eb;
    pcVar11 = 
    "Condition \"tex->type != TextureStorage::TYPE_3D\" is true. Returning: Vector<Ref<Image>>()";
  }
  _err_print_error("texture_3d_get","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",
                   uVar7,pcVar11,0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_00111057:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
  while( true ) {
    LOCK();
    lVar14 = *plVar1;
    bVar18 = lVar9 == lVar14;
    if (bVar18) {
      *plVar1 = lVar9 + 1;
      lVar14 = lVar9;
    }
    UNLOCK();
    if (bVar18) break;
LAB_001113e7:
    lVar9 = *plVar1;
    if (lVar9 == 0) goto LAB_0011140c;
  }
  if (lVar14 != -1) {
    local_90 = *(long *)(piVar15 + 0x24);
  }
LAB_0011140c:
  local_98 = 0;
  local_58 = (Image *)0x11e09e;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  vformat<String>(&local_a0,(StrRange *)&local_98,&local_90);
  lVar9 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
LAB_00111276:
  local_90 = 0;
  plVar1 = (long *)(local_a0 + -0x10);
  if (local_a0 != 0) {
    do {
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_001112b0;
      LOCK();
      lVar14 = *plVar1;
      bVar18 = lVar9 == lVar14;
      if (bVar18) {
        *plVar1 = lVar9 + 1;
        lVar14 = lVar9;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar14 != -1) {
      local_90 = local_a0;
    }
  }
LAB_001112b0:
  local_98 = 0;
  local_58 = (Image *)0x11e0ad;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_98);
  vformat<String>(&local_58,(StrRange *)&local_98,&local_90);
  _err_print_error("texture_3d_get","servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",
                   0x5fd,"Method/function failed. Returning: Vector<Ref<Image>>()",&local_58,0,0);
  pIVar5 = local_58;
  if (local_58 != (Image *)0x0) {
    LOCK();
    pIVar2 = local_58 + -0x10;
    *(long *)pIVar2 = *(long *)pIVar2 + -1;
    UNLOCK();
    if (*(long *)pIVar2 == 0) {
      local_58 = (Image *)0x0;
      Memory::free_static(pIVar5 + -0x10,false);
    }
  }
  lVar9 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_a0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
LAB_001110f2:
  if ((local_a8 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
    memdelete<Image>(local_a8);
  }
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
LAB_00111022:
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_70);
LAB_0011102c:
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  goto LAB_00111057;
}



/* Vector<RenderingDeviceCommons::DataFormat>::push_back(RenderingDeviceCommons::DataFormat) [clone
   .isra.0] */

void __thiscall
Vector<RenderingDeviceCommons::DataFormat>::push_back
          (Vector<RenderingDeviceCommons::DataFormat> *this,undefined4 param_2)

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
  iVar1 = CowData<RenderingDeviceCommons::DataFormat>::resize<false>
                    ((CowData<RenderingDeviceCommons::DataFormat> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RenderingDeviceCommons::DataFormat>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::DataFormat> *)(this + 8));
        *(undefined4 *)(*(long *)(this + 8) + lVar3 * 4) = param_2;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_update_render_target(RendererRD::TextureStorage::RenderTarget*) */

void __thiscall
RendererRD::TextureStorage::_update_render_target(TextureStorage *this,RenderTarget *param_1)

{
  RenderTarget RVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  TextureFormat *pTVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 in_R11;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  char *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  Vector<RenderingDeviceCommons::DataFormat> local_a0 [8];
  long local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  long local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x130) == 0) {
    if (*(code **)(*(long *)this + 0x48) == texture_allocate) {
      uVar9 = RID_Alloc<RendererRD::TextureStorage::Texture,true>::allocate_rid
                        ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108));
      *(undefined8 *)(param_1 + 0x130) = uVar9;
    }
    else {
      uVar9 = (**(code **)(*(long *)this + 0x48))();
      *(undefined8 *)(param_1 + 0x130) = uVar9;
    }
    pcVar2 = *(code **)(*(long *)this + 0xa8);
    if (pcVar2 == texture_2d_placeholder_initialize) {
      (**(code **)(*(long *)this + 0x58))(this,*(undefined8 *)(param_1 + 0x130),this + 0x498);
    }
    else {
      (*pcVar2)(this,*(undefined8 *)(param_1 + 0x130));
    }
    uVar3 = *(ulong *)(param_1 + 0x130);
    if ((uVar3 == 0) || (*(uint *)(this + 0x124) <= (uint)uVar3)) {
LAB_0011e5e5:
      DAT_00000080 = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar13 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
             *(long *)(*(long *)(this + 0x110) +
                      ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    if (*(int *)(lVar13 + 0x110) != (int)(uVar3 >> 0x20)) {
      if (*(int *)(lVar13 + 0x110) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,in_R11);
      }
      goto LAB_0011e5e5;
    }
    *(undefined1 *)(lVar13 + 0x80) = 1;
    local_88 = "Render Target (Internal)";
    uStack_80 = 0x18;
    String::parse_latin1((StrRange *)(lVar13 + 0x90));
  }
  _clear_render_target(this,param_1);
  if ((*(int *)param_1 == 0) || (*(int *)(param_1 + 4) == 0)) goto LAB_00111b68;
  if (param_1[0x45] == (RenderTarget)0x0) {
    uVar5 = 0x24;
    *(undefined8 *)(param_1 + 0x38) = 0x2a00000024;
    uVar8 = (uint)(byte)param_1[0x44];
LAB_00111ba7:
    iVar7 = uVar8 + 4;
  }
  else {
    uVar5 = (**(code **)(*RendererSceneRenderRD::singleton + 0x250))();
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    if (param_1[0x45] == (RenderTarget)0x0) {
      *(undefined4 *)(param_1 + 0x3c) = 0x2a;
      uVar8 = (uint)(byte)param_1[0x44];
      goto LAB_00111ba7;
    }
    uVar6 = (**(code **)(*RendererSceneRenderRD::singleton + 0x250))();
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
    uVar8 = (uint)(byte)param_1[0x44];
    if (param_1[0x45] == (RenderTarget)0x0) goto LAB_00111ba7;
    iVar7 = (byte)param_1[0x44] + 0xe;
  }
  *(int *)(param_1 + 0x40) = iVar7;
  uStack_c0 = *(undefined4 *)(param_1 + 4);
  local_90 = 0;
  local_b8 = *(uint *)(param_1 + 8);
  local_c8 = (char *)CONCAT44(*(undefined4 *)param_1,uVar5);
  local_108 = __LC202;
  uStack_100 = _UNK_00128e58;
  uStack_bc = 1;
  iStack_b0 = (-(uint)(local_b8 < 2) & 0xfffffffc) + 5;
  uStack_b4 = 1;
  uStack_ac = 0;
  local_98 = 0;
  local_f8 = 6;
  local_a8 = 0x8b;
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_a0);
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_a0,*(undefined4 *)(param_1 + 0x3c));
  if (*(int *)(param_1 + 0x30) != 0) {
    local_90 = CONCAT11(local_90._1_1_,1);
  }
  pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
  uStack_80 = 0;
  uVar9 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_c8,(Vector *)&local_108);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_80);
  if (*(long *)(param_1 + 0x10) == 0) {
    _err_print_error("_update_render_target",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xd20,
                     "Condition \"rt->color.is_null()\" is true.",0,0);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x30);
    if (iVar7 != 0) {
      uStack_80 = CONCAT44(uStack_bc,uStack_c0);
      local_58 = 0;
      local_78 = CONCAT44(uStack_b4,local_b8);
      local_88 = local_c8;
      if (local_98 != 0) {
        plVar12 = (long *)(local_98 + -0x10);
        do {
          lVar13 = *plVar12;
          if (lVar13 == 0) goto LAB_001118b2;
          LOCK();
          lVar14 = *plVar12;
          bVar15 = lVar13 == lVar14;
          if (bVar15) {
            *plVar12 = lVar13 + 1;
            lVar14 = lVar13;
          }
          UNLOCK();
        } while (!bVar15);
        if (lVar14 != -1) {
          local_58 = local_98;
        }
LAB_001118b2:
        iVar7 = *(int *)(param_1 + 0x30);
      }
      local_68 = 2;
      local_d8 = 6;
      local_48 = _LC373;
      uStack_40 = _UNK_00128ea8;
      local_e8 = __LC202;
      uStack_e0 = _UNK_00128e58;
      local_4f = local_90._1_1_;
      _iStack_70 = CONCAT44(*(undefined4 *)((long)&local_48 + (long)iVar7 * 4),iStack_b0);
      local_50 = 0;
      pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
      local_110 = 0;
      uVar9 = RenderingDevice::texture_create(pTVar10,(TextureView *)&local_88,(Vector *)&local_e8);
      *(undefined8 *)(param_1 + 0x28) = uVar9;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_110);
      lVar13 = local_58;
      if (*(long *)(param_1 + 0x28) == 0) {
        _err_print_error("_update_render_target",
                         "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xd30,
                         "Condition \"rt->color_multisample.is_null()\" is true.",0,0);
        lVar13 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar12 = (long *)(local_58 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        goto LAB_00111b4d;
      }
      if (local_58 != 0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
    }
    uVar3 = *(ulong *)(param_1 + 0x130);
    if ((uVar3 == 0) || (*(uint *)(this + 0x124) <= (uint)uVar3)) {
LAB_00111cba:
      uVar9 = RenderingDevice::get_singleton();
      RenderingDevice::texture_is_valid(uVar9,_DAT_00000010);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar13 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
             *(long *)(*(long *)(this + 0x110) +
                      ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
    if (*(int *)(lVar13 + 0x110) != (int)(uVar3 >> 0x20)) {
      uVar8 = *(int *)(lVar13 + 0x110) + 0x80000000;
      if (uVar8 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,uVar8);
      }
      goto LAB_00111cba;
    }
    uVar9 = RenderingDevice::get_singleton();
    cVar4 = RenderingDevice::texture_is_valid(uVar9,*(undefined8 *)(lVar13 + 0x10));
    if (cVar4 != '\0') {
      uVar9 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar9,*(undefined8 *)(lVar13 + 0x10));
    }
    uVar9 = RenderingDevice::get_singleton();
    cVar4 = RenderingDevice::texture_is_valid(uVar9,*(undefined8 *)(lVar13 + 0x18));
    if (cVar4 != '\0') {
      uVar9 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar9,*(undefined8 *)(lVar13 + 0x18));
    }
    *(RenderTarget **)(lVar13 + 0x78) = param_1;
    RVar1 = param_1[0x44];
    *(undefined1 (*) [16])(lVar13 + 0x10) = (undefined1  [16])0x0;
    uStack_80 = 0x500000004;
    local_88 = (char *)CONCAT44(3,*(undefined4 *)(param_1 + 0x38));
    local_78 = CONCAT44(local_78._4_4_,(-(uint)(RVar1 == (RenderTarget)0x0) & 0xfffffffc) + 6);
    uVar9 = RenderingDevice::get_singleton();
    uVar9 = RenderingDevice::texture_create_shared
                      (uVar9,(TextureView *)&local_88,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(lVar13 + 0x10) = uVar9;
    iVar7 = *(int *)(param_1 + 0x3c);
    if (iVar7 != 0xe8) {
      local_88 = (char *)CONCAT44(local_88._4_4_,iVar7);
      uVar9 = RenderingDevice::get_singleton();
      uVar9 = RenderingDevice::texture_create_shared
                        (uVar9,(TextureView *)&local_88,*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(lVar13 + 0x18) = uVar9;
      iVar7 = *(int *)(param_1 + 0x3c);
    }
    uVar9 = *(undefined8 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    RVar1 = param_1[0x45];
    *(char **)(lVar13 + 0x28) = local_88;
    *(undefined8 *)(lVar13 + 0x30) = uStack_80;
    *(undefined8 *)(lVar13 + 0x44) = uVar9;
    *(ulong *)(lVar13 + 0x58) = CONCAT44((int)uVar9,(int)((ulong)uVar9 >> 0x20));
    uVar6 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(lVar13 + 0x3c) = uVar5;
    *(undefined4 *)(lVar13 + 0x38) = (undefined4)local_78;
    *(ulong *)(lVar13 + 0x20) = CONCAT44(iVar7,uVar6);
    *(uint *)(lVar13 + 0x40) = (-(uint)(RVar1 == (RenderTarget)0x0) & 0xfffffff6) + 0xf;
    plVar12 = (long *)(*(long *)(lVar13 + 0xa8) + -0x10);
    if (*(long *)(lVar13 + 0xa8) != 0) {
      do {
        lVar14 = *plVar12;
        if (lVar14 == 0) goto LAB_00111b4d;
        LOCK();
        lVar11 = *plVar12;
        bVar15 = lVar14 == lVar11;
        if (bVar15) {
          *plVar12 = lVar14 + 1;
          lVar11 = lVar14;
        }
        UNLOCK();
      } while (!bVar15);
      if ((lVar11 != -1) && (lVar13 = *(long *)(lVar13 + 0xa8), lVar13 != 0)) {
        if (0 < *(long *)(lVar13 + -8)) {
          lVar14 = 0;
          do {
            lVar11 = lVar14 * 8;
            lVar14 = lVar14 + 1;
            (**(code **)(*(long *)this + 0xa0))
                      (this,*(undefined8 *)(lVar13 + lVar11),*(undefined8 *)(param_1 + 0x130));
          } while (lVar14 < *(long *)(lVar13 + -8));
        }
        plVar12 = (long *)(lVar13 + -0x10);
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          Memory::free_static(plVar12,false);
        }
      }
    }
  }
LAB_00111b4d:
  lVar13 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar12 = (long *)(local_98 + -0x10);
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
LAB_00111b68:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::TextureStorage::render_target_set_size(RID, int, int, unsigned int) */

void __thiscall
RendererRD::TextureStorage::render_target_set_size
          (TextureStorage *this,ulong param_2,int param_3,int param_4,int param_5)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if (((*(int *)pRVar1 == param_3) && (*(int *)(pRVar1 + 4) == param_4)) &&
         (*(int *)(pRVar1 + 8) == param_5)) {
        return;
      }
      *(int *)pRVar1 = param_3;
      *(int *)(pRVar1 + 4) = param_4;
      *(int *)(pRVar1 + 8) = param_5;
      _update_render_target(this,pRVar1);
      return;
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_size",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xda8,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_set_transparent(RID, bool) */

void __thiscall
RendererRD::TextureStorage::render_target_set_transparent
          (TextureStorage *this,ulong param_2,RenderTarget param_3)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      pRVar1[0x44] = param_3;
      _update_render_target(this,pRVar1);
      return;
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_transparent",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe13,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_set_msaa(RID, RenderingServer::ViewportMSAA) */

void __thiscall
RendererRD::TextureStorage::render_target_set_msaa(TextureStorage *this,ulong param_2,int param_3)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(int *)(pRVar1 + 0x30) != param_3) {
        *(int *)(pRVar1 + 0x30) = param_3;
        _update_render_target(this,pRVar1);
        return;
      }
      return;
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_msaa",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe34,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* RendererRD::TextureStorage::render_target_set_use_hdr(RID, bool) */

void __thiscall
RendererRD::TextureStorage::render_target_set_use_hdr
          (TextureStorage *this,ulong param_2,RenderTarget param_3)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if (pRVar1[0x45] != param_3) {
        pRVar1[0x45] = param_3;
        _update_render_target(this,pRVar1);
        return;
      }
      return;
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_set_use_hdr",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe5f,
                   "Parameter \"rt\" is null.",0,0);
  return;
}



/* Vector<Vector<unsigned char> >::push_back(Vector<unsigned char>) [clone .isra.0] */

void __thiscall
Vector<Vector<unsigned_char>>::push_back(Vector<Vector<unsigned_char>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<unsigned_char>>::resize<false>
                    ((CowData<Vector<unsigned_char>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>> *)(this + 8))
        ;
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(lVar3 + 8),(CowData *)(param_2 + 8))
        ;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::texture_2d_layered_initialize(RID, Vector<Ref<Image> > const&,
   RenderingServer::TextureLayeredType) */

void __thiscall
RendererRD::TextureStorage::texture_2d_layered_initialize
          (TextureStorage *this,undefined8 param_2,long param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  Image *pIVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  TextureFormat *pTVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  int local_230;
  char local_229;
  Vector<Ref<Image>> local_218 [8];
  long local_210;
  Vector<Vector<unsigned_char>> local_208 [8];
  undefined8 local_200 [2];
  long local_1f0;
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  ulong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined4 local_180;
  undefined8 local_17c;
  Vector<RenderingDeviceCommons::DataFormat> local_170 [8];
  long local_168;
  undefined2 local_160;
  undefined4 local_158;
  int iStack_154;
  undefined4 local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x359;
      pcVar14 = "Condition \"p_layers.is_empty()\" is true.";
LAB_001125b9:
      _err_print_error("texture_2d_layered_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",uVar13,pcVar14
                       ,0,0);
      return;
    }
    goto LAB_00112d00;
  }
  lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
  if (param_4 == 1) {
    if (lVar18 != 6) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar13 = 0x35b;
        pcVar14 = 
        "Condition \"p_layered_type == RenderingServer::TEXTURE_LAYERED_CUBEMAP && p_layers.size() != 6\" is true."
        ;
        goto LAB_001125b9;
      }
      goto LAB_00112d00;
    }
  }
  else if ((param_4 == 2) &&
          ((lVar18 < 6 ||
           (uVar15 = lVar18 * -0x5555555555555555 + 0x2aaaaaaaaaaaaaaa,
           0x2aaaaaaaaaaaaaaa < (uVar15 >> 1 | (ulong)((uVar15 & 1) != 0) << 0x3f))))) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x35c;
      pcVar14 = 
      "Condition \"p_layered_type == RenderingServer::TEXTURE_LAYERED_CUBEMAP_ARRAY && (p_layers.size() < 6 || (p_layers.size() % 6) != 0)\" is true."
      ;
      goto LAB_001125b9;
    }
    goto LAB_00112d00;
  }
  lVar17 = 0;
  iVar7 = 0;
  iVar6 = 0;
  local_230 = 0x27;
  local_1a8 = _LC131;
  local_210 = 0;
  local_229 = '\0';
  local_1b8 = __LC249;
  uStack_1b0 = _UNK_00128e78;
  while (lVar17 < lVar18) {
    cVar5 = Image::is_empty();
    if (cVar5 != '\0') {
      _err_print_error("texture_2d_layered_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x367,
                       "Condition \"p_layers[i]->is_empty()\" is true.",0,0);
      goto LAB_00112545;
    }
    lVar18 = *(long *)(param_3 + 8);
    if (lVar17 != 0) {
      if (lVar18 != 0) {
        lVar18 = *(long *)(lVar18 + -8);
        if (lVar18 <= lVar17) goto LAB_001124d1;
        iVar8 = Image::get_width();
        if (iVar8 != iVar6) {
          _err_print_error("texture_2d_layered_initialize",
                           "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x36f,
                           "Condition \"p_layers[i]->get_width() != valid_width\" is true.",0,0);
          goto LAB_00112545;
        }
        if (*(long *)(param_3 + 8) != 0) {
          lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
          if (lVar18 <= lVar17) goto LAB_001124d1;
          iVar8 = Image::get_height();
          if (iVar8 != iVar7) {
            _err_print_error("texture_2d_layered_initialize",
                             "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x370,
                             "Condition \"p_layers[i]->get_height() != valid_height\" is true.",0,0)
            ;
            goto LAB_00112545;
          }
          if (*(long *)(param_3 + 8) != 0) {
            lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
            if (lVar18 <= lVar17) goto LAB_001124d1;
            iVar8 = Image::get_format();
            if (local_230 != iVar8) {
              _err_print_error("texture_2d_layered_initialize",
                               "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x371,
                               "Condition \"p_layers[i]->get_format() != valid_format\" is true.",0,
                               0);
              goto LAB_00112545;
            }
            if (*(long *)(param_3 + 8) != 0) {
              lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
              if (lVar18 <= lVar17) goto LAB_001124d1;
              cVar5 = Image::has_mipmaps();
              if (cVar5 == local_229) goto LAB_0011242e;
              _err_print_error("texture_2d_layered_initialize",
                               "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x372,
                               "Condition \"p_layers[i]->has_mipmaps() != valid_mipmaps\" is true.",
                               0,0);
              goto LAB_00112545;
            }
          }
        }
      }
LAB_001124b0:
      lVar18 = 0;
      goto LAB_001124d1;
    }
    if (lVar18 == 0) goto LAB_001124f8;
    lVar18 = *(long *)(lVar18 + -8);
    if (lVar18 < 1) goto LAB_001124fb;
    iVar6 = Image::get_width();
    if (*(long *)(param_3 + 8) == 0) goto LAB_001124f8;
    lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
    if (lVar18 < 1) goto LAB_001124fb;
    iVar7 = Image::get_height();
    if (*(long *)(param_3 + 8) == 0) goto LAB_001124f8;
    lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
    if (lVar18 < 1) goto LAB_001124fb;
    local_230 = Image::get_format();
    if (*(long *)(param_3 + 8) == 0) goto LAB_001124f8;
    lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
    if (lVar18 < 1) goto LAB_001124fb;
    local_229 = Image::has_mipmaps();
LAB_0011242e:
    if (*(long *)(param_3 + 8) == 0) goto LAB_001124b0;
    lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
    if (lVar18 <= lVar17) goto LAB_001124d1;
    _validate_texture_format((Ref *)&local_158,(TextureToRDFormat *)this);
    Vector<Ref<Image>>::push_back(local_218,(Ref *)&local_158);
    pIVar4 = (Image *)CONCAT44(iStack_154,local_158);
    if ((pIVar4 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
      memdelete<Image>(pIVar4);
    }
    lVar17 = lVar17 + 1;
    if (*(long *)(param_3 + 8) == 0) {
      lVar18 = 0;
      break;
    }
    lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
  }
  local_130 = __LC202;
  uStack_128 = _UNK_00128e58;
  local_120 = 6;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_90 = 0;
  local_88 = 2;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_158 = 1;
  local_148 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iStack_154 = param_4;
  if (lVar18 < 1) goto LAB_001124fb;
  uVar9 = Image::get_width();
  local_114 = uVar9;
  if (*(long *)(param_3 + 8) == 0) {
LAB_001124f8:
    lVar18 = 0;
LAB_001124fb:
    lVar17 = 0;
LAB_001124d1:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar18,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
  if (lVar18 < 1) goto LAB_001124fb;
  uVar10 = Image::get_height();
  uStack_110 = uVar10;
  if (*(long *)(param_3 + 8) == 0) goto LAB_001124f8;
  lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
  uVar16 = (undefined4)lVar18;
  local_108 = uVar16;
  if (lVar18 < 1) goto LAB_001124fb;
  iVar6 = Image::get_mipmap_count();
  local_10c = 1;
  iVar6 = iVar6 + 1;
  local_104 = iVar6;
  if (*(long *)(param_3 + 8) == 0) goto LAB_001124f8;
  lVar18 = *(long *)(*(long *)(param_3 + 8) + -8);
  if (lVar18 < 1) goto LAB_001124fb;
  local_11c = Image::get_format();
  lVar17 = local_210;
  if (local_210 == 0) goto LAB_001124f8;
  lVar18 = *(long *)(local_210 + -8);
  if (lVar18 < 1) goto LAB_001124fb;
  local_118 = Image::get_format();
  if (param_4 == 1) {
    local_180 = 3;
LAB_0011294f:
    local_198 = CONCAT44(uVar9,(undefined4)local_1b8);
    iVar7 = (int)(local_1b8 >> 0x20);
    local_18c = 1;
    local_168 = 0;
    local_160 = 0;
    local_1c8 = 6;
    local_17c = 0xc100000000;
    local_138 = local_1b8;
    local_1d8 = (int)__LC202;
    uStack_1d4 = (undefined4)((ulong)__LC202 >> 0x20);
    uStack_1d0 = (undefined4)_UNK_00128e58;
    uStack_1cc = (undefined4)((ulong)_UNK_00128e58 >> 0x20);
    local_190 = uVar10;
    local_188 = uVar16;
    local_184 = iVar6;
    local_150 = local_180;
    if (iVar7 != 0xe8) {
      Vector<RenderingDeviceCommons::DataFormat>::push_back(local_170,local_1b8 & 0xffffffff);
      Vector<RenderingDeviceCommons::DataFormat>::push_back(local_170,iVar7);
    }
    local_200[0] = 0;
    uStack_1d4 = (undefined4)uStack_1b0;
    uStack_1d0 = (undefined4)((ulong)uStack_1b0 >> 0x20);
    uStack_1cc = (undefined4)local_1a8;
    local_1c8 = (undefined4)((ulong)local_1a8 >> 0x20);
    if (0 < *(long *)(lVar17 + -8)) {
      lVar18 = 0;
      do {
        Image::get_data();
        local_1e0 = 0;
        plVar1 = (long *)(local_1f0 + -0x10);
        if (local_1f0 == 0) {
          Vector<Vector<unsigned_char>>::push_back(local_208);
        }
        else {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00112a83;
            LOCK();
            lVar11 = *plVar1;
            bVar19 = lVar2 == lVar11;
            if (bVar19) {
              *plVar1 = lVar2 + 1;
              lVar11 = lVar2;
            }
            UNLOCK();
          } while (!bVar19);
          if (lVar11 != -1) {
            local_1e0 = local_1f0;
          }
LAB_00112a83:
          lVar2 = local_1e0;
          Vector<Vector<unsigned_char>>::push_back(local_208);
          if (lVar2 != 0) {
            LOCK();
            plVar1 = (long *)(lVar2 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_1e0 + -0x10),false);
            }
          }
        }
        lVar2 = local_1f0;
        if (local_1f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_1f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1f0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(long *)(lVar17 + -8));
    }
    pTVar12 = (TextureFormat *)RenderingDevice::get_singleton();
    lVar18 = RenderingDevice::texture_create(pTVar12,(TextureView *)&local_198,(Vector *)&local_1d8)
    ;
    local_148._0_8_ = lVar18;
    if (lVar18 == 0) {
      _err_print_error("texture_2d_layered_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x3b4,
                       "Condition \"texture.rd_texture.is_null()\" is true.",0,0);
LAB_00112c90:
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)local_200);
      lVar18 = local_168;
      if (local_168 != 0) {
        LOCK();
        plVar1 = (long *)(local_168 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_168 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      goto LAB_001128a8;
    }
    if (local_138._4_4_ != 0xe8) {
      local_1d8 = local_138._4_4_;
      uVar13 = RenderingDevice::get_singleton();
      lVar18 = RenderingDevice::texture_create_shared(uVar13,(Vector *)&local_1d8,local_148._0_8_);
      local_148._8_8_ = lVar18;
      if (lVar18 == 0) {
        uVar13 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar13,local_148._0_8_);
        _err_print_error("texture_2d_layered_initialize",
                         "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x3ba,
                         "Condition \"texture.rd_texture_srgb.is_null()\" is true.",0,0);
        goto LAB_00112c90;
      }
    }
    local_130 = CONCAT44(uStack_1d4,local_1d8);
    uStack_128 = CONCAT44(uStack_1cc,uStack_1d0);
    local_d8 = 0;
    local_100 = CONCAT44(local_114,uStack_110);
    local_120 = local_1c8;
    RID_Alloc<RendererRD::TextureStorage::Texture,true>::initialize_rid
              ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108),param_2,
               (Texture *)&local_158);
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)local_200);
    lVar18 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar1 = (long *)(local_168 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    Texture::~Texture((Texture *)&local_158);
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_210);
  }
  else {
    if (param_4 == 2) {
      local_180 = 6;
      goto LAB_0011294f;
    }
    if (param_4 == 0) {
      local_180 = 5;
      goto LAB_0011294f;
    }
    _err_print_error("texture_2d_layered_initialize",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x391,
                     "Method/function failed.",0,0);
LAB_001128a8:
    Texture::~Texture((Texture *)&local_158);
LAB_00112545:
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_210);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112d00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::texture_2d_initialize(RID, Ref<Image> const&) */

void __thiscall
RendererRD::TextureStorage::texture_2d_initialize
          (TextureStorage *this,undefined8 param_2,long *param_3)

{
  long *plVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  TextureFormat *pTVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  int iVar12;
  Image *local_210 [2];
  long local_200;
  Vector<Vector<unsigned_char>> local_1f8 [8];
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  ulong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  int local_184;
  undefined8 local_180;
  undefined4 local_178;
  Vector<RenderingDeviceCommons::DataFormat> local_170 [8];
  long local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined8 local_10c;
  int local_104;
  undefined8 local_100;
  long local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("texture_2d_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x314,
                       "Condition \"p_image.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00113434;
  }
  local_1a8 = _LC131;
  local_1b8 = __LC249;
  uStack_1b0 = _UNK_00128e78;
  _validate_texture_format((Ref *)local_210,(TextureToRDFormat *)this);
  local_148 = (undefined1  [16])0x0;
  local_130 = __LC202;
  uStack_128 = _UNK_00128e58;
  local_d0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_120 = 6;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_90 = (void *)0x0;
  local_88 = 2;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_158 = 0;
  uVar4 = Image::get_width();
  local_114 = uVar4;
  uVar5 = Image::get_height();
  uStack_110 = uVar5;
  iVar6 = Image::get_mipmap_count();
  iVar6 = iVar6 + 1;
  local_10c = 0x100000001;
  local_104 = iVar6;
  local_11c = Image::get_format();
  local_118 = Image::get_format();
  local_1d8 = (int)__LC202;
  uStack_1d4 = (undefined4)((ulong)__LC202 >> 0x20);
  uStack_1d0 = (undefined4)_UNK_00128e58;
  uStack_1cc = (undefined4)((ulong)_UNK_00128e58 >> 0x20);
  iVar12 = (int)(local_1b8 >> 0x20);
  local_160 = 0;
  local_198 = CONCAT44(uVar4,(undefined4)local_1b8);
  local_150 = 1;
  local_18c = _LC78;
  local_168 = 0;
  local_1c8 = 6;
  local_180 = 1;
  local_178 = 0xc1;
  local_138 = local_1b8;
  local_190 = uVar5;
  local_184 = iVar6;
  if (iVar12 != 0xe8) {
    Vector<RenderingDeviceCommons::DataFormat>::push_back(local_170,local_1b8 & 0xffffffff);
    Vector<RenderingDeviceCommons::DataFormat>::push_back(local_170,iVar12);
  }
  uStack_1d4 = (undefined4)uStack_1b0;
  uStack_1d0 = (undefined4)((ulong)uStack_1b0 >> 0x20);
  uStack_1cc = (undefined4)local_1a8;
  local_1c8 = (undefined4)((ulong)local_1a8 >> 0x20);
  Image::get_data();
  local_1f0 = 0;
  local_1e0 = 0;
  plVar1 = (long *)(local_200 + -0x10);
  if (local_200 == 0) {
    Vector<Vector<unsigned_char>>::push_back(local_1f8,local_1e8);
  }
  else {
    do {
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_00112fcf;
      LOCK();
      lVar7 = *plVar1;
      bVar11 = lVar9 == lVar7;
      if (bVar11) {
        *plVar1 = lVar9 + 1;
        lVar7 = lVar9;
      }
      UNLOCK();
    } while (!bVar11);
    if (lVar7 != -1) {
      local_1e0 = local_200;
    }
LAB_00112fcf:
    lVar9 = local_1e0;
    Vector<Vector<unsigned_char>>::push_back(local_1f8);
    if (lVar9 != 0) {
      LOCK();
      plVar1 = (long *)(lVar9 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_1e0 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  lVar9 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_198,(Vector *)&local_1d8);
  local_148._0_8_ = lVar9;
  if (lVar9 == 0) {
    _err_print_error("texture_2d_initialize",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x344,
                     "Condition \"texture.rd_texture.is_null()\" is true.",0,0);
LAB_0011330a:
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1f0);
    lVar9 = local_200;
    if (local_200 != 0) {
      LOCK();
      plVar1 = (long *)(local_200 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_200 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar1 = (long *)(local_168 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Texture::~Texture((Texture *)&local_158);
  }
  else {
    if (local_138._4_4_ != 0xe8) {
      local_1d8 = local_138._4_4_;
      uVar10 = RenderingDevice::get_singleton();
      lVar9 = RenderingDevice::texture_create_shared(uVar10,(Vector *)&local_1d8,local_148._0_8_);
      local_148._8_8_ = lVar9;
      if (lVar9 == 0) {
        uVar10 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar10,local_148._0_8_);
        _err_print_error("texture_2d_initialize",
                         "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x34a,
                         "Condition \"texture.rd_texture_srgb.is_null()\" is true.",0,0);
        goto LAB_0011330a;
      }
    }
    local_130 = CONCAT44(uStack_1d4,local_1d8);
    uStack_128 = CONCAT44(uStack_1cc,uStack_1d0);
    local_d8 = 0;
    local_120 = local_1c8;
    local_100 = CONCAT44(local_114,uStack_110);
    RID_Alloc<RendererRD::TextureStorage::Texture,true>::initialize_rid
              ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108),param_2,
               &local_158);
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1f0);
    lVar9 = local_200;
    if (local_200 != 0) {
      LOCK();
      plVar1 = (long *)(local_200 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_200 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar1 = (long *)(local_168 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    pvVar2 = local_90;
    uVar10 = local_b0._8_8_;
    if ((void *)local_b0._8_8_ != (void *)0x0) {
      if ((local_88._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0)) {
        memset(local_90,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) << 2);
      }
      Memory::free_static((void *)uVar10,false);
      Memory::free_static((void *)local_a0._8_8_,false);
      Memory::free_static((void *)local_a0._0_8_,false);
      Memory::free_static(pvVar2,false);
    }
    if (local_b0._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b0._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b0._0_8_ + -0x10),false);
      }
    }
    if (local_d0._8_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_d0._8_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_d0._8_8_ + -0x10),false);
      }
    }
    uVar10 = local_d0._0_8_;
    if (((Image *)local_d0._0_8_ != (Image *)0x0) &&
       (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
      memdelete<Image>((Image *)uVar10);
    }
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_f0 + -0x10),false);
      }
    }
  }
  if ((local_210[0] != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>(local_210[0]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00113434:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::TextureStorage() */

void __thiscall RendererRD::TextureStorage::TextureStorage(TextureStorage *this)

{
  long *plVar1;
  ShaderRD *this_00;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  TextureFormat *pTVar8;
  Resource *pRVar9;
  Object *pOVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  Image *pIVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  Resource *pRVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  Image *pIVar25;
  long lVar26;
  long in_FS_OFFSET;
  bool bVar27;
  byte bVar28;
  Vector<Vector<unsigned_char>> *local_168;
  Vector *local_158;
  undefined1 local_128 [8];
  long local_120;
  undefined1 local_118 [8];
  undefined8 *local_110;
  long local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  Resource *local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long local_a8;
  undefined2 local_a0;
  Image *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  uVar4 = _UNK_00128eb8;
  uVar19 = __LC322;
  uVar7 = _UNK_00128d08;
  bVar28 = 0;
  lVar23 = 0;
  this_00 = (ShaderRD *)(this + 0x2e8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = __LC122;
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined ***)this = &PTR_canvas_texture_allocate_001279e0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  puVar20 = (undefined8 *)((ulong)(this + 0x20) & 0xfffffffffffffff8);
  for (uVar11 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x20) & 0xfffffffffffffff8))
                        + 0xb0U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  *(undefined1 (*) [16])(this + 0xf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0xb0) = &PTR__RID_Alloc_00127940;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0xf0) = 1;
  *(undefined8 *)(this + 200) = uVar19;
  *(undefined8 *)(this + 0xd0) = uVar4;
  uVar7 = Memory::alloc_static(0x1108,false);
  *(undefined8 *)(this + 0xb8) = uVar7;
  uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0xd4) << 3,false);
  *(undefined8 *)(this + 0xc0) = uVar7;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x108) = &PTR__RID_Alloc_00127960;
  uVar19 = _UNK_00128ec8;
  uVar7 = __LC323;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x148) = 1;
  *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x120) = uVar7;
  *(undefined8 *)(this + 0x128) = uVar19;
  uVar7 = Memory::alloc_static(0x2228,false);
  *(undefined8 *)(this + 0x110) = uVar7;
  uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 300) << 3,false);
  *(undefined8 *)(this + 0x118) = uVar7;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x1c0) = &PTR__RID_Alloc_00127980;
  uVar19 = _UNK_00128ed8;
  uVar7 = __LC324;
  *(undefined8 *)(this + 0x188) = 2;
  this[400] = (TextureStorage)0x1;
  *(undefined4 *)(this + 0x194) = 5;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x200) = 1;
  *(undefined1 (*) [16])(this + 0x168) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1d8) = uVar7;
  *(undefined8 *)(this + 0x1e0) = uVar19;
  uVar7 = Memory::alloc_static(0x1308,false);
  *(undefined8 *)(this + 0x1c8) = uVar7;
  uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x1e4) << 3,false);
  *(undefined8 *)(this + 0x1d0) = uVar7;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  uVar19 = _UNK_00128ee8;
  uVar7 = __LC325;
  *(undefined ***)(this + 0x218) = &PTR__RID_Alloc_001279a0;
  *(undefined ***)(this + 0x290) = &PTR__RID_Alloc_001279c0;
  *(undefined1 (*) [16])(this + 0x278) = (undefined1  [16])0x0;
  uVar5 = _UNK_00128ef8;
  uVar4 = __LC326;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 600) = 1;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2d0) = 1;
  *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x230) = uVar7;
  *(undefined8 *)(this + 0x238) = uVar19;
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2a8) = uVar4;
  *(undefined8 *)(this + 0x2b0) = uVar5;
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x2e8) = &PTR__CanvasSdfShaderRD_00127920;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\nlayout(r8, set = 0, binding = 1) uniform restrict readonly image2D src_pixels;\nlayout(r16_snorm, set = 0, binding = 2) uniform restrict writeonly image2D dst_sdf;\n\nlayout(rg16i, set = 0, binding = 3) uniform restrict readonly iimage2D src_process;\nlayout(rg16i, set = 0, binding = 4) uniform restrict writeonly iimage2D dst_process;\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 size;\n\tint stride;\n\tint shift;\n\tivec2 base_size;\n\tuvec2 pad;\n}\nparams;\n\n#define SDF_MAX_LENGTH 16384.0\n\nvoid main() {\n\tivec2 pos = ivec2(gl_GlobalInvocationID.xy);\n\tif (any(greaterThanEqual(pos, params.size))) { \n\t\treturn;\n\t}\n\n#ifdef MODE_LOAD\n\n\tbool solid = imageLoad(src_pixels, pos).r > 0.5;\n\timageStore(dst_process, pos, solid ? ivec4(ivec2(-32767), 0, 0) : ivec4(ivec2(32767), 0, 0));\n#endif\n\n#ifdef MODE_LOAD_SHRINK\n\n\tint s = 1 << params.shift;\n\tivec2 base = pos << params.shift;\n\tivec2 center = base + ivec2(params.shift);\n\n\tivec2 rel = ivec2(32767);\n\tfloat d = 1e20;\n\tint found = 0;\n\tint solid_found = 0;\n\tfor (int i = 0; i < s; i++) {\n\t\tfor (int j = 0; j < s; j++) {\n\t\t\tivec2 src_pos = base + ivec2(i, j);\n\t\t\tif (any(greaterThanEqual(src_pos, params.base_size))) {\n\t\t\t\tcontinue;\n\t\t\t}\n\t\t\tbool solid = imageLoad(src_pixels, src_pos).r > 0.5;\n\t\t\tif (solid) {\n\t\t\t\tfloat dist = length(vec2(src_pos - center));\n\t\t\t\tif (dist < d) {\n\t\t\t\t\td = dist;\n\t\t\t\t\trel = src_pos;\n\t\t\t\t}\n\t\t\t\tsolid_found++;\n\t\t\t}\n\t\t\tfound++;\n\t\t}\n\t}\n\n\tif (solid_found == found) {\n\t\t\n\t\trel = ivec2(-32767);\n\t}\n\n\timageStore(dst_process, pos, ivec4(rel, 0, 0));\n#endif\n\n#ifdef MODE_PROCESS\n\n\tivec2 base = pos << params.shift;\n\tivec2 center = base + ivec2(params.shift);\n\n\tivec2 rel = imageLoad(src_process, pos).xy;\n\n\tbool solid = rel.x < 0;\n\n\tif (solid) {\n\t\trel = -rel - ivec2(1);\n\t}\n\n\tif (center != rel) {\n\t\t\n\t\tconst int ofs_table_size = 8;\n\t\tconst ivec2 ofs_table[ofs_table_size] = ivec2[](\n\t\t\t\tivec2(-1, -1),\n\t\t\t\tivec2(0, -1),\n\t\t\t\tivec2(+1, -1),\n\n\t\t\t\tivec2(-1, 0),\n\t\t\t\tivec2(+1, 0),\n\n\t\t\t\tivec..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x460) = 0;
  lStack_d0 = _UNK_00128e88;
  local_d8 = (Resource *)__LC279;
  *(undefined8 *)(this + 0x498) = 0;
  uStack_c0 = _UNK_00128e98;
  local_c8 = _LC78;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined1 (*) [16])(this + 0x468) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x488) = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0x41;
  local_120 = 0;
  singleton = this;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_120,0x40);
  lVar24 = 3;
  do {
    while (local_120 == 0) {
      lVar26 = 0;
LAB_00115d8b:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      if (local_120 != 0) goto LAB_00113960;
LAB_00115dd0:
      lVar26 = 0;
LAB_0011396d:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_001139b0;
LAB_001138c4:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24 + -1) goto LAB_001139b3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24 + -1) = 0xff;
      if (local_120 != 0) goto LAB_001138f1;
LAB_001139f8:
      lVar26 = 0;
LAB_001139fb:
      lVar15 = lVar24 + 4;
      lVar23 = lVar23 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
                 false);
      lVar24 = lVar15;
      if (lVar15 == 0x43) goto LAB_00113a40;
    }
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_00115d8b;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0xff;
    if (local_120 == 0) goto LAB_00115dd0;
LAB_00113960:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar24 + -2) goto LAB_0011396d;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar24 + -2) = 0xff;
    if (local_120 != 0) goto LAB_001138c4;
LAB_001139b0:
    lVar26 = 0;
LAB_001139b3:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_001139f8;
LAB_001138f1:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar24) goto LAB_001139fb;
    lVar23 = lVar23 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar24) = 0xff;
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0x43);
LAB_00113a40:
  uStack_f0 = 0;
  lStack_90 = 0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<Vector<unsigned_char>>::push_back((Vector<Vector<unsigned_char>> *)&local_f8);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_00113a95;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_90 = local_120;
    }
LAB_00113a95:
    lVar23 = lStack_90;
    Vector<Vector<unsigned_char>>::push_back((Vector<Vector<unsigned_char>> *)&local_f8);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_90 + -0x10),false);
      }
    }
  }
  local_158 = (Vector *)&local_98;
  local_168 = (Vector<Vector<unsigned_char>> *)&local_f8;
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_88 = CONCAT44(local_88._4_4_,6);
  lVar24 = 0;
  local_98 = (Image *)__LC202;
  lStack_90 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_d8,local_158);
  *(undefined8 *)(this + 0x18) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  lVar23 = 3;
  do {
    while (local_120 != 0) {
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24) goto LAB_00113c1d;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24) = 0;
      if (local_120 != 0) goto LAB_00113b74;
LAB_00113c60:
      lVar26 = 0;
LAB_00113c63:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_00113ca8;
LAB_00113ba5:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_00113cab;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar23 + -1) = 0;
      if (local_120 != 0) goto LAB_00113bd2;
LAB_00113cf0:
      lVar26 = 0;
LAB_00113cf3:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00113d38;
    }
    lVar26 = 0;
LAB_00113c1d:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (local_120 == 0) goto LAB_00113c60;
LAB_00113b74:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00113c63;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23 + -2) = 0;
    if (local_120 != 0) goto LAB_00113ba5;
LAB_00113ca8:
    lVar26 = 0;
LAB_00113cab:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_00113cf0;
LAB_00113bd2:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_00113cf3;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0xff;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00113d38:
  uStack_f0 = 0;
  lStack_90 = 0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,local_158);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_00113d8d;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_90 = local_120;
    }
LAB_00113d8d:
    lVar23 = lStack_90;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_90 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  lVar24 = 0;
  local_88 = CONCAT44(local_88._4_4_,6);
  local_98 = (Image *)__LC202;
  lStack_90 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_d8,local_158);
  *(undefined8 *)(this + 0x20) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  lVar23 = 3;
  do {
    while (local_120 != 0) {
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24) goto LAB_00113eed;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24) = 0;
      if (local_120 != 0) goto LAB_00113e44;
LAB_00113f30:
      lVar26 = 0;
LAB_00113f33:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_00113f78;
LAB_00113e75:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_00113f7b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar23 + -1) = 0;
      if (local_120 != 0) goto LAB_00113ea2;
LAB_00113fc0:
      lVar26 = 0;
LAB_00113fc3:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00114008;
    }
    lVar26 = 0;
LAB_00113eed:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (local_120 == 0) goto LAB_00113f30;
LAB_00113e44:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00113f33;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23 + -2) = 0;
    if (local_120 != 0) goto LAB_00113e75;
LAB_00113f78:
    lVar26 = 0;
LAB_00113f7b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_00113fc0;
LAB_00113ea2:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_00113fc3;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00114008:
  uStack_f0 = 0;
  lStack_90 = 0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,local_158);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_0011405d;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_90 = local_120;
    }
LAB_0011405d:
    lVar23 = lStack_90;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_90 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  lVar24 = 0;
  local_88 = CONCAT44(local_88._4_4_,6);
  local_98 = (Image *)__LC202;
  lStack_90 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_d8,local_158);
  *(undefined8 *)(this + 0x28) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  lVar23 = 3;
  do {
    while (local_120 != 0) {
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24) goto LAB_001141bd;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24) = 0x80;
      if (local_120 != 0) goto LAB_00114114;
LAB_00114200:
      lVar26 = 0;
LAB_00114203:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_00114248;
LAB_00114145:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_0011424b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar23 + -1) = 0xff;
      if (local_120 != 0) goto LAB_00114172;
LAB_00114290:
      lVar26 = 0;
LAB_00114293:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_001142d8;
    }
    lVar26 = 0;
LAB_001141bd:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (local_120 == 0) goto LAB_00114200;
LAB_00114114:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00114203;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23 + -2) = 0x80;
    if (local_120 != 0) goto LAB_00114145;
LAB_00114248:
    lVar26 = 0;
LAB_0011424b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_00114290;
LAB_00114172:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_00114293;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0xff;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_001142d8:
  uStack_f0 = 0;
  lStack_90 = 0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,local_158);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_0011432d;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_90 = local_120;
    }
LAB_0011432d:
    lVar23 = lStack_90;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_90 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  lVar24 = 0;
  local_88 = CONCAT44(local_88._4_4_,6);
  local_98 = (Image *)__LC202;
  lStack_90 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_d8,local_158);
  *(undefined8 *)(this + 0x30) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  lVar23 = 3;
  do {
    while (local_120 != 0) {
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24) goto LAB_0011448d;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24) = 0xff;
      if (local_120 != 0) goto LAB_001143e4;
LAB_001144d0:
      lVar26 = 0;
LAB_001144d3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_00114518;
LAB_00114415:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_0011451b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar23 + -1) = 0xff;
      if (local_120 != 0) goto LAB_00114442;
LAB_00114560:
      lVar26 = 0;
LAB_00114563:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_001145a8;
    }
    lVar26 = 0;
LAB_0011448d:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (local_120 == 0) goto LAB_001144d0;
LAB_001143e4:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_001144d3;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23 + -2) = 0x80;
    if (local_120 != 0) goto LAB_00114415;
LAB_00114518:
    lVar26 = 0;
LAB_0011451b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_00114560;
LAB_00114442:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_00114563;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0xff;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_001145a8:
  uStack_f0 = 0;
  lStack_90 = 0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,local_158);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_001145fd;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_90 = local_120;
    }
LAB_001145fd:
    lVar23 = lStack_90;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_90 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_88 = CONCAT44(local_88._4_4_,6);
  local_98 = (Image *)__LC202;
  lStack_90 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_d8,local_158);
  *(undefined8 *)(this + 0x38) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  local_60 = 0;
  local_68 = 0;
  local_88 = _LC78;
  uStack_80 = _UNK_00128e98;
  local_98 = (Image *)__LC328;
  lStack_90 = _UNK_00128f08;
  local_78 = 0x45;
  local_110 = (undefined8 *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_110,0x20);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_110);
  uVar19 = _UNK_00128f18;
  uVar7 = __LC329;
  *local_110 = __LC329;
  local_110[1] = uVar19;
  local_110[2] = uVar7;
  local_110[3] = uVar19;
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_100 = (undefined8 *)0x0;
  local_f8 = __LC202;
  uStack_f0 = _UNK_00128e58;
  local_e8 = 6;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)local_168);
  *(undefined8 *)(this + 0x40) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_100);
  uVar7 = RenderingDevice::get_singleton();
  RenderingDevice::texture_update(uVar7,*(undefined8 *)(this + 0x40),0,local_118);
  puVar20 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_110 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = (undefined8 *)0x0;
      Memory::free_static(puVar20 + -2,false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  lVar23 = 3;
  do {
    while (local_120 != 0) {
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24) goto LAB_001148ae;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24) = 0;
      if (local_120 != 0) goto LAB_00114805;
LAB_001148f8:
      lVar26 = 0;
LAB_001148fb:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_00114940;
LAB_00114836:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_00114943;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar23 + -1) = 0;
      if (local_120 != 0) goto LAB_00114862;
LAB_00114988:
      lVar26 = 0;
LAB_0011498b:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_001149d0;
    }
    lVar26 = 0;
LAB_001148ae:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (local_120 == 0) goto LAB_001148f8;
LAB_00114805:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_001148fb;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23 + -2) = 0;
    if (local_120 != 0) goto LAB_00114836;
LAB_00114940:
    lVar26 = 0;
LAB_00114943:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_00114988;
LAB_00114862:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_0011498b;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_001149d0:
  lVar24 = 0;
  uVar7 = RenderingDevice::get_singleton();
  uVar7 = RenderingDevice::texture_buffer_create(uVar7,0x10,0x24,local_128);
  *(undefined8 *)(this + 0x48) = uVar7;
  lVar23 = 3;
  do {
    while (local_120 != 0) {
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar24) goto LAB_00114aee;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar24) = 0;
      if (local_120 != 0) goto LAB_00114a45;
LAB_00114b38:
      lVar26 = 0;
LAB_00114b3b:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (local_120 == 0) goto LAB_00114b80;
LAB_00114a76:
      lVar26 = *(long *)(local_120 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_00114b83;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
      *(undefined1 *)(local_120 + lVar23 + -1) = 0;
      if (local_120 != 0) goto LAB_00114aa2;
LAB_00114bc8:
      lVar26 = 0;
LAB_00114bcb:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00114c10;
    }
    lVar26 = 0;
LAB_00114aee:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (local_120 == 0) goto LAB_00114b38;
LAB_00114a45:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00114b3b;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23 + -2) = 0;
    if (local_120 != 0) goto LAB_00114a76;
LAB_00114b80:
    lVar26 = 0;
LAB_00114b83:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (local_120 == 0) goto LAB_00114bc8;
LAB_00114aa2:
    lVar26 = *(long *)(local_120 + -8);
    if (lVar26 <= lVar23) goto LAB_00114bcb;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_120);
    *(undefined1 *)(local_120 + lVar23) = 0;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00114c10:
  local_d8 = (Resource *)CONCAT44(local_d8._4_4_,0x28);
  uStack_f0 = 0;
  lStack_90 = 0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,local_158);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_00114c75;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_90 = local_120;
    }
LAB_00114c75:
    lVar23 = lStack_90;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_90 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_88 = CONCAT44(local_88._4_4_,6);
  local_98 = (Image *)__LC202;
  lStack_90 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)&local_d8,local_158);
  *(undefined8 *)(this + 0xa0) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  lVar23 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar23 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0x41;
  local_100 = (undefined8 *)0x0;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC330;
  uStack_80 = _UNK_00128f28;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  lVar23 = 3;
  do {
    while (puVar20 = local_100, local_100 != (undefined8 *)0x0) {
      lVar26 = *(long *)((long)local_100 + -8);
      if (lVar26 <= lVar24) goto LAB_00114e7e;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00114ddf;
LAB_00114ec0:
      lVar26 = 0;
LAB_00114ec3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00114f08;
LAB_00114e0b:
      lVar26 = *(long *)((long)puVar20 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_00114f0b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23 + -1) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00114e33;
LAB_00114f50:
      lVar26 = 0;
LAB_00114f53:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00114fa0;
    }
    lVar26 = 0;
LAB_00114e7e:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
               false);
    if (puVar20 == (undefined8 *)0x0) goto LAB_00114ec0;
LAB_00114ddf:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00114ec3;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23 + -2) = 0;
    puVar20 = local_100;
    if (local_100 != (undefined8 *)0x0) goto LAB_00114e0b;
LAB_00114f08:
    lVar26 = 0;
LAB_00114f0b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (puVar20 == (undefined8 *)0x0) goto LAB_00114f50;
LAB_00114e33:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23) goto LAB_00114f53;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23) = 0;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00114fa0:
  uStack_f0 = 0;
  iVar16 = 6;
  do {
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_00117dcc;
    while( true ) {
      lStack_d0 = 0;
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
      lVar23 = lStack_d0;
      Vector<Vector<unsigned_char>>::push_back(local_168);
      if (lVar23 != 0) break;
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) goto LAB_0011502c;
    }
    LOCK();
    plVar1 = (long *)(lVar23 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(lStack_d0 + -0x10),false);
    }
    iVar16 = iVar16 + -1;
    puVar20 = local_100;
  } while (iVar16 != 0);
LAB_0011502c:
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x58) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  if (puVar20 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  local_60 = 0;
  local_100 = (undefined8 *)0x0;
  local_68 = 0;
  local_78 = 0x41;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC330;
  uStack_80 = _UNK_00128f28;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  lVar23 = 3;
  do {
    while (puVar20 = local_100, local_100 == (undefined8 *)0x0) {
      lVar26 = 0;
LAB_001151f6:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
                 false);
      if (puVar20 != (undefined8 *)0x0) goto LAB_00115157;
LAB_00115240:
      lVar26 = 0;
LAB_00115243:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00115288;
LAB_00115183:
      lVar26 = *(long *)((long)puVar20 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_0011528b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23 + -1) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_001151ab;
LAB_001152d0:
      lVar26 = 0;
LAB_001152d3:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00115320;
    }
    lVar26 = *(long *)((long)local_100 + -8);
    if (lVar26 <= lVar24) goto LAB_001151f6;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar24) = 0xff;
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_00115240;
LAB_00115157:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00115243;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23 + -2) = 0xff;
    puVar20 = local_100;
    if (local_100 != (undefined8 *)0x0) goto LAB_00115183;
LAB_00115288:
    lVar26 = 0;
LAB_0011528b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (puVar20 == (undefined8 *)0x0) goto LAB_001152d0;
LAB_001151ab:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23) goto LAB_001152d3;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23) = 0xff;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00115320:
  iVar16 = 6;
  uStack_f0 = 0;
  do {
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_00117d94;
    while( true ) {
      lStack_d0 = 0;
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
      lVar23 = lStack_d0;
      Vector<Vector<unsigned_char>>::push_back(local_168);
      if (lVar23 != 0) break;
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) goto LAB_0011539f;
    }
    LOCK();
    plVar1 = (long *)(lVar23 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(lStack_d0 + -0x10),false);
    }
    iVar16 = iVar16 + -1;
    puVar20 = local_100;
  } while (iVar16 != 0);
LAB_0011539f:
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x68) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  if (puVar20 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  local_60 = 0;
  lVar24 = 0;
  local_100 = (undefined8 *)0x0;
  local_68 = 0;
  local_78 = 0x41;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC331;
  uStack_80 = _LC356;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  lVar23 = 3;
  do {
    while (puVar20 = local_100, local_100 == (undefined8 *)0x0) {
      lVar26 = 0;
LAB_0011556e:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
                 false);
      if (puVar20 != (undefined8 *)0x0) goto LAB_001154cf;
LAB_001155b0:
      lVar26 = 0;
LAB_001155b3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_001155f8;
LAB_001154fb:
      lVar26 = *(long *)((long)puVar20 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_001155fb;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23 + -1) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115523;
LAB_00115640:
      lVar26 = 0;
LAB_00115643:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00115690;
    }
    lVar26 = *(long *)((long)local_100 + -8);
    if (lVar26 <= lVar24) goto LAB_0011556e;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar24) = 0;
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_001155b0;
LAB_001154cf:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_001155b3;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23 + -2) = 0;
    puVar20 = local_100;
    if (local_100 != (undefined8 *)0x0) goto LAB_001154fb;
LAB_001155f8:
    lVar26 = 0;
LAB_001155fb:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (puVar20 == (undefined8 *)0x0) goto LAB_00115640;
LAB_00115523:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23) goto LAB_00115643;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23) = 0;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00115690:
  iVar16 = 6;
  uStack_f0 = 0;
  do {
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_00117d5c;
    while( true ) {
      lStack_d0 = 0;
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
      lVar23 = lStack_d0;
      Vector<Vector<unsigned_char>>::push_back(local_168);
      if (lVar23 != 0) break;
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) goto LAB_0011570f;
    }
    LOCK();
    plVar1 = (long *)(lVar23 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(lStack_d0 + -0x10),false);
    }
    iVar16 = iVar16 + -1;
    puVar20 = local_100;
  } while (iVar16 != 0);
LAB_0011570f:
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x50) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  if (puVar20 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  local_60 = 0;
  local_78 = 0x41;
  local_68 = 0;
  local_100 = (undefined8 *)0x0;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC331;
  uStack_80 = _LC356;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  lVar23 = 3;
  do {
    while (puVar20 = local_100, local_100 == (undefined8 *)0x0) {
      lVar26 = 0;
LAB_001158d6:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar26,"p_index","size()","",false,
                 false);
      if (puVar20 != (undefined8 *)0x0) goto LAB_00115837;
LAB_00115920:
      lVar26 = 0;
LAB_00115923:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23 + -2,lVar26,"p_index","size()","",
                 false,false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00115968;
LAB_00115863:
      lVar26 = *(long *)((long)puVar20 + -8);
      if (lVar26 <= lVar23 + -1) goto LAB_0011596b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23 + -1) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_0011588b;
LAB_001159b0:
      lVar26 = 0;
LAB_001159b3:
      lVar15 = lVar23 + 4;
      lVar24 = lVar24 + 4;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar26,"p_index","size()","",false,
                 false);
      lVar23 = lVar15;
      if (lVar15 == 0x43) goto LAB_00115a00;
    }
    lVar26 = *(long *)((long)local_100 + -8);
    if (lVar26 <= lVar24) goto LAB_001158d6;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar24) = 0xff;
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_00115920;
LAB_00115837:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23 + -2) goto LAB_00115923;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23 + -2) = 0xff;
    puVar20 = local_100;
    if (local_100 != (undefined8 *)0x0) goto LAB_00115863;
LAB_00115968:
    lVar26 = 0;
LAB_0011596b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23 + -1,lVar26,"p_index","size()","",
               false,false);
    if (puVar20 == (undefined8 *)0x0) goto LAB_001159b0;
LAB_0011588b:
    lVar26 = *(long *)((long)puVar20 + -8);
    if (lVar26 <= lVar23) goto LAB_001159b3;
    lVar24 = lVar24 + 4;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23) = 0xff;
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x43);
LAB_00115a00:
  iVar16 = 6;
  uStack_f0 = 0;
  do {
    puVar20 = local_100;
    if (local_100 == (undefined8 *)0x0) goto LAB_00117d24;
    while( true ) {
      lStack_d0 = 0;
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
      lVar23 = lStack_d0;
      Vector<Vector<unsigned_char>>::push_back(local_168);
      if (lVar23 != 0) break;
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) goto LAB_00115a7f;
    }
    LOCK();
    plVar1 = (long *)(lVar23 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(lStack_d0 + -0x10),false);
    }
    iVar16 = iVar16 + -1;
    puVar20 = local_100;
  } while (iVar16 != 0);
LAB_00115a7f:
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x60) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  if (puVar20 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  lVar23 = 3;
  local_68 = 0;
  lVar15 = 1;
  local_60 = 0;
  lVar26 = 2;
  local_98 = (Image *)__LC332;
  lStack_90 = _UNK_00128f48;
  local_78 = 0x41;
  local_100 = (undefined8 *)0x0;
  local_88 = __LC333;
  uStack_80 = _LC251;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x100);
  puVar20 = local_100;
  do {
    if (puVar20 == (undefined8 *)0x0) {
      lVar22 = 0;
LAB_00115c55:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00115ca0;
LAB_00115bb3:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar15) goto LAB_00115ca3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar15) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115bdb;
LAB_00115cf0:
      lVar22 = 0;
LAB_00115cf3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00115d40;
LAB_00115c03:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar23) goto LAB_00115d43;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23) = 0;
      puVar20 = local_100;
    }
    else {
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar24) goto LAB_00115c55;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115bb3;
LAB_00115ca0:
      lVar22 = 0;
LAB_00115ca3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00115cf0;
LAB_00115bdb:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar26) goto LAB_00115cf3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar26) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115c03;
LAB_00115d40:
      lVar22 = 0;
LAB_00115d43:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",false,
                 false);
    }
    lVar23 = lVar23 + 4;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 4;
    lVar15 = lVar15 + 4;
  } while (lVar23 != 0x103);
  uStack_f0 = 0;
  plVar1 = (long *)((long)puVar20 + -0x10);
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_00115ee0;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_d0 = (long)local_100;
    }
LAB_00115ee0:
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  lVar24 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,6);
  lVar15 = 1;
  lVar26 = 2;
  lVar23 = 3;
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x78) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  puVar20 = local_100;
  do {
    if (puVar20 == (undefined8 *)0x0) {
      lVar22 = 0;
LAB_00116035:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116080;
LAB_00115f93:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar15) goto LAB_00116083;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar15) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115fbb;
LAB_001160d0:
      lVar22 = 0;
LAB_001160d3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116120;
LAB_00115fe3:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar23) goto LAB_00116123;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23) = 0xff;
      puVar20 = local_100;
    }
    else {
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar24) goto LAB_00116035;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115f93;
LAB_00116080:
      lVar22 = 0;
LAB_00116083:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_001160d0;
LAB_00115fbb:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar26) goto LAB_001160d3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar26) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00115fe3;
LAB_00116120:
      lVar22 = 0;
LAB_00116123:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",false,
                 false);
    }
    lVar23 = lVar23 + 4;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 4;
    lVar15 = lVar15 + 4;
  } while (lVar23 != 0x103);
  uStack_f0 = 0;
  plVar1 = (long *)((long)puVar20 + -0x10);
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_001161c0;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_d0 = (long)local_100;
    }
LAB_001161c0:
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x70) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  lVar15 = 1;
  local_68 = 0;
  local_60 = 0;
  lVar26 = 2;
  lVar23 = 3;
  local_78 = 0x41;
  local_100 = (undefined8 *)0x0;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC334;
  uStack_80 = _UNK_00128f68;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  puVar20 = local_100;
  do {
    if (puVar20 == (undefined8 *)0x0) {
      lVar22 = 0;
LAB_001163c2:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116408;
LAB_00116323:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar15) goto LAB_0011640b;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar15) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_0011634b;
LAB_00116450:
      lVar22 = 0;
LAB_00116453:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_001164a0;
LAB_00116373:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar23) goto LAB_001164a3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23) = 0xff;
      puVar20 = local_100;
    }
    else {
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar24) goto LAB_001163c2;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116323;
LAB_00116408:
      lVar22 = 0;
LAB_0011640b:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116450;
LAB_0011634b:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar26) goto LAB_00116453;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar26) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116373;
LAB_001164a0:
      lVar22 = 0;
LAB_001164a3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",false,
                 false);
    }
    lVar23 = lVar23 + 4;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 4;
    lVar15 = lVar15 + 4;
  } while (lVar23 != 0x43);
  uStack_f0 = 0;
  plVar1 = (long *)((long)puVar20 + -0x10);
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
  }
  else {
    do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_00116540;
      LOCK();
      lVar24 = *plVar1;
      bVar27 = lVar23 == lVar24;
      if (bVar27) {
        *plVar1 = lVar23 + 1;
        lVar24 = lVar23;
      }
      UNLOCK();
    } while (!bVar27);
    if (lVar24 != -1) {
      lStack_d0 = (long)local_100;
    }
LAB_00116540:
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 != 0) {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
    }
  }
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x80) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  lVar15 = 1;
  local_68 = 0;
  local_60 = 0;
  lVar26 = 2;
  lVar23 = 3;
  local_78 = 0x41;
  local_100 = (undefined8 *)0x0;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC334;
  uStack_80 = _UNK_00128f68;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  puVar20 = local_100;
  do {
    if (puVar20 == (undefined8 *)0x0) {
      lVar22 = 0;
LAB_0011674a:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116790;
LAB_001166ab:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar15) goto LAB_00116793;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar15) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_001166d3;
LAB_001167e0:
      lVar22 = 0;
LAB_001167e3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116830;
LAB_001166fb:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar23) goto LAB_00116833;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23) = 0;
      puVar20 = local_100;
    }
    else {
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar24) goto LAB_0011674a;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_001166ab;
LAB_00116790:
      lVar22 = 0;
LAB_00116793:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_001167e0;
LAB_001166d3:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar26) goto LAB_001167e3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar26) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_001166fb;
LAB_00116830:
      lVar22 = 0;
LAB_00116833:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",false,
                 false);
    }
    lVar23 = lVar23 + 4;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 4;
    lVar15 = lVar15 + 4;
  } while (lVar23 != 0x43);
  uStack_f0 = 0;
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
    local_c8 = CONCAT44(local_c8._4_4_,6);
    local_d8 = (Resource *)__LC202;
    lStack_d0 = _UNK_00128e58;
    uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
    *(undefined8 *)(this + 0x88) = uVar7;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  }
  else {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 == 0) {
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0x88) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
    }
    else {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
      puVar20 = local_100;
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0x88) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116953;
    }
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
LAB_00116953:
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  lVar15 = 1;
  local_68 = 0;
  local_60 = 0;
  lVar26 = 2;
  lVar23 = 3;
  local_78 = 0x41;
  local_100 = (undefined8 *)0x0;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = __LC334;
  uStack_80 = _UNK_00128f68;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  puVar20 = local_100;
  do {
    if (puVar20 == (undefined8 *)0x0) {
      lVar22 = 0;
LAB_00116aba:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116b00;
LAB_00116a1b:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar15) goto LAB_00116b03;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar15) = 0x80;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116a43;
LAB_00116b50:
      lVar22 = 0;
LAB_00116b53:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116ba0;
LAB_00116a6b:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar23) goto LAB_00116ba3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23) = 0xff;
      puVar20 = local_100;
    }
    else {
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar24) goto LAB_00116aba;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0x80;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116a1b;
LAB_00116b00:
      lVar22 = 0;
LAB_00116b03:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116b50;
LAB_00116a43:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar26) goto LAB_00116b53;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar26) = 0xff;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116a6b;
LAB_00116ba0:
      lVar22 = 0;
LAB_00116ba3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",false,
                 false);
    }
    lVar23 = lVar23 + 4;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 4;
    lVar15 = lVar15 + 4;
  } while (lVar23 != 0x43);
  uStack_f0 = 0;
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
    local_c8 = CONCAT44(local_c8._4_4_,6);
    local_d8 = (Resource *)__LC202;
    lStack_d0 = _UNK_00128e58;
    uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
    *(undefined8 *)(this + 0x90) = uVar7;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  }
  else {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 == 0) {
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0x90) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
    }
    else {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
      puVar20 = local_100;
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0x90) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116cc3;
    }
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
LAB_00116cc3:
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  local_60 = 0;
  local_98 = (Image *)__LC328;
  lStack_90 = _UNK_00128f08;
  local_88 = __LC334;
  uStack_80 = _UNK_00128f68;
  local_68 = 0;
  local_78 = 0x45;
  local_100 = (undefined8 *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x20);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
  uVar19 = _UNK_00128f18;
  uVar7 = __LC329;
  *local_100 = __LC329;
  local_100[1] = uVar19;
  local_100[2] = uVar7;
  local_100[3] = uVar19;
  pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
  uStack_f0 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,6);
  local_d8 = (Resource *)__LC202;
  lStack_d0 = _UNK_00128e58;
  uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
  *(undefined8 *)(this + 0x98) = uVar7;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  uVar7 = RenderingDevice::get_singleton();
  RenderingDevice::texture_update(uVar7,*(undefined8 *)(this + 0x98),0,(StrRange *)&local_108);
  puVar20 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_100 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = (undefined8 *)0x0;
      Memory::free_static(puVar20 + -2,false);
    }
  }
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  lVar24 = 0;
  lVar23 = 3;
  local_60 = 0;
  local_100 = (undefined8 *)0x0;
  lVar15 = 1;
  lVar26 = 2;
  local_68 = 0;
  local_78 = 0x41;
  local_98 = (Image *)__LC279;
  lStack_90 = _UNK_00128e88;
  local_88 = _LC78;
  uStack_80 = _UNK_00128e98;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x40);
  puVar20 = local_100;
  do {
    if (puVar20 == (undefined8 *)0x0) {
      lVar22 = 0;
LAB_00116f6a:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00116fb0;
LAB_00116ecb:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar15) goto LAB_00116fb3;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar15) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116ef3;
LAB_00117000:
      lVar22 = 0;
LAB_00117003:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00117050;
LAB_00116f1b:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar23) goto LAB_00117053;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar23) = 0xff;
      puVar20 = local_100;
    }
    else {
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar24) goto LAB_00116f6a;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar24) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116ecb;
LAB_00116fb0:
      lVar22 = 0;
LAB_00116fb3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",false,
                 false);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00117000;
LAB_00116ef3:
      lVar22 = *(long *)((long)puVar20 + -8);
      if (lVar22 <= lVar26) goto LAB_00117003;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
      *(undefined1 *)((long)local_100 + lVar26) = 0;
      puVar20 = local_100;
      if (local_100 != (undefined8 *)0x0) goto LAB_00116f1b;
LAB_00117050:
      lVar22 = 0;
LAB_00117053:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",false,
                 false);
    }
    lVar23 = lVar23 + 4;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 4;
    lVar15 = lVar15 + 4;
  } while (lVar23 != 0x43);
  uStack_f0 = 0;
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
    local_c8 = CONCAT44(local_c8._4_4_,6);
    local_d8 = (Resource *)__LC202;
    lStack_d0 = _UNK_00128e58;
    uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
    *(undefined8 *)(this + 0x198) = uVar7;
    *(undefined8 *)(this + 0x1a0) = uVar7;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  }
  else {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 == 0) {
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0x198) = uVar7;
      *(undefined8 *)(this + 0x1a0) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
    }
    else {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
      puVar20 = local_100;
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0x198) = uVar7;
      *(undefined8 *)(this + 0x1a0) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
      if (puVar20 == (undefined8 *)0x0) goto LAB_0011717a;
    }
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
LAB_0011717a:
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  local_68 = 0;
  local_60 = 0;
  local_78 = 1099;
  local_98 = (Image *)__LC335;
  lStack_90 = _UNK_00128f78;
  local_88 = _LC78;
  uStack_80 = _UNK_00128e98;
  uVar7 = RenderingDevice::get_singleton();
  cVar6 = RenderingDevice::has_feature(uVar7,2);
  if (cVar6 == '\0') {
    local_78 = 0x43;
  }
  local_100 = (undefined8 *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_100,0x10);
  lVar23 = 0;
  puVar20 = local_100;
  do {
    while (puVar20 == (undefined8 *)0x0) {
      lVar24 = 0;
LAB_00117276:
      lVar26 = lVar23 + 1;
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar24,"p_index","size()","",false,
                 false);
      lVar23 = lVar26;
      if (lVar26 == 0x10) goto LAB_001172b0;
    }
    lVar24 = *(long *)((long)puVar20 + -8);
    if (lVar24 <= lVar23) goto LAB_00117276;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_100);
    *(undefined1 *)((long)local_100 + lVar23) = 0;
    lVar23 = lVar23 + 1;
    puVar20 = local_100;
  } while (lVar23 != 0x10);
LAB_001172b0:
  uStack_f0 = 0;
  lStack_d0 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
    local_c8 = CONCAT44(local_c8._4_4_,6);
    local_d8 = (Resource *)__LC202;
    lStack_d0 = _UNK_00128e58;
    uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
    *(undefined8 *)(this + 0xa8) = uVar7;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
  }
  else {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&lStack_d0,(CowData *)&local_100);
    lVar23 = lStack_d0;
    Vector<Vector<unsigned_char>>::push_back(local_168);
    if (lVar23 == 0) {
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0xa8) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
    }
    else {
      LOCK();
      plVar1 = (long *)(lVar23 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_d0 + -0x10),false);
      }
      puVar20 = local_100;
      pTVar8 = (TextureFormat *)RenderingDevice::get_singleton();
      local_c8 = CONCAT44(local_c8._4_4_,6);
      local_d8 = (Resource *)__LC202;
      lStack_d0 = _UNK_00128e58;
      uVar7 = RenderingDevice::texture_create(pTVar8,(TextureView *)local_158,(Vector *)&local_d8);
      *(undefined8 *)(this + 0xa8) = uVar7;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_f0);
      if (puVar20 == (undefined8 *)0x0) goto LAB_00117383;
    }
    LOCK();
    plVar1 = (long *)((long)puVar20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_100 + -0x10),false);
    }
  }
LAB_00117383:
  lVar23 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  uStack_f0 = 0;
  local_98 = (Image *)0x11e31a;
  local_d8 = (Resource *)0x0;
  lStack_90 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  Vector<String>::push_back((Vector<String> *)local_168);
  pRVar21 = local_d8;
  if (local_d8 != (Resource *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (Resource *)0x0;
      Memory::free_static((void *)((long)pRVar21 + -0x10),false);
    }
  }
  local_d8 = (Resource *)0x0;
  local_98 = (Image *)0x11e32e;
  lStack_90 = 0x1a;
  String::parse_latin1((StrRange *)&local_d8);
  Vector<String>::push_back((Vector<String> *)local_168);
  pRVar21 = local_d8;
  if (local_d8 != (Resource *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (Resource *)0x0;
      Memory::free_static((void *)((long)pRVar21 + -0x10),false);
    }
  }
  local_d8 = (Resource *)0x0;
  local_98 = (Image *)0x11e349;
  lStack_90 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  Vector<String>::push_back((Vector<String> *)local_168);
  pRVar21 = local_d8;
  if (local_d8 != (Resource *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (Resource *)0x0;
      Memory::free_static((void *)((long)pRVar21 + -0x10),false);
    }
  }
  local_d8 = (Resource *)0x0;
  local_98 = (Image *)0x11d840;
  lStack_90 = 0x20;
  String::parse_latin1((StrRange *)&local_d8);
  Vector<String>::push_back((Vector<String> *)local_168);
  pRVar21 = local_d8;
  if (local_d8 != (Resource *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (Resource *)0x0;
      Memory::free_static((void *)((long)pRVar21 + -0x10),false);
    }
  }
  local_d8 = (Resource *)0x0;
  local_98 = (Image *)0x11e360;
  lStack_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  Vector<String>::push_back((Vector<String> *)local_168);
  pRVar21 = local_d8;
  if (local_d8 != (Resource *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (Resource *)0x0;
      Memory::free_static((void *)((long)pRVar21 + -0x10),false);
    }
  }
  local_d8 = (Resource *)0x0;
  local_98 = (Image *)0x11e375;
  lStack_90 = 0x1b;
  String::parse_latin1((StrRange *)&local_d8);
  Vector<String>::push_back((Vector<String> *)local_168);
  pRVar21 = local_d8;
  if (local_d8 != (Resource *)0x0) {
    LOCK();
    pRVar9 = local_d8 + -0x10;
    *(long *)pRVar9 = *(long *)pRVar9 + -1;
    UNLOCK();
    if (*(long *)pRVar9 == 0) {
      local_d8 = (Resource *)0x0;
      Memory::free_static(pRVar21 + -0x10,false);
    }
  }
  lStack_d0 = 0;
  local_98 = (Image *)&_LC89;
  local_108 = 0;
  lStack_90 = 0;
  String::parse_latin1((StrRange *)&local_108);
  ShaderRD::initialize((Vector *)this_00,(String *)local_168,(Vector *)&local_108);
  lVar23 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  uVar11 = 0;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_d0);
  uVar7 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x460) = uVar7;
  do {
    uVar7 = RenderingDevice::get_singleton();
    uVar2 = *(ulong *)(this + 0x460);
    lStack_90 = 0;
    if (*(long *)(this + 0x300) == 0) {
      lVar23 = 0;
LAB_00118195:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar11,
                 lVar23,"p_variant","variant_defines.size()","",false,false);
      uVar19 = 0;
    }
    else {
      lVar23 = *(long *)(*(long *)(this + 0x300) + -8);
      if (lVar23 <= (long)uVar11) goto LAB_00118195;
      lVar23 = *(long *)(this + 0x310);
      uVar12 = uVar11;
      if (lVar23 == 0) {
LAB_00117cc6:
        lVar24 = 0;
        uVar12 = uVar11;
LAB_00117ce7:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar24,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar24 = *(long *)(lVar23 + -8);
      if (lVar24 <= (long)uVar11) goto LAB_00117ce7;
      if (*(char *)(lVar23 + uVar11) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar19 = 0;
        goto LAB_0011786c;
      }
      if ((uVar2 == 0) || (*(uint *)(this + 0x3bc) <= (uint)uVar2)) {
LAB_001182a7:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar19 = 0;
      }
      else {
        lVar23 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x3a8) +
                          ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b8)) * 8);
        if (*(int *)(lVar23 + 0x98) != (int)(uVar2 >> 0x20)) {
          if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001182a7;
        }
        iVar16 = (int)lVar23;
        if (*(char *)(lVar23 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)this_00);
          lVar24 = *(long *)(this + 0x360);
          if (lVar24 != 0) {
            lVar26 = 0;
            do {
              if (*(long *)(lVar24 + -8) <= lVar26) break;
              if (*(char *)(lVar24 + lVar26) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)this_00,iVar16);
              }
              else {
                ShaderRD::_compile_version_start((Version *)this_00,iVar16);
              }
              lVar24 = *(long *)(this + 0x360);
              lVar26 = lVar26 + 1;
            } while (lVar24 != 0);
          }
        }
        lVar26 = *(long *)(this + 800);
        if (lVar26 == 0) goto LAB_00117cc6;
        lVar24 = *(long *)(lVar26 + -8);
        if (lVar24 <= (long)uVar11) goto LAB_00117ce7;
        uVar12 = (ulong)*(uint *)(lVar26 + uVar11 * 4);
        lVar26 = *(long *)(lVar23 + 0x68);
        if (lVar26 == 0) {
          lVar24 = 0;
          goto LAB_00117ce7;
        }
        lVar24 = *(long *)(lVar26 + -8);
        if (lVar24 <= (long)uVar12) goto LAB_00117ce7;
        if (*(long *)(lVar26 + uVar12 * 8) == 0) {
          cVar6 = *(char *)(lVar23 + 0x90);
        }
        else {
          ShaderRD::_compile_version_end((Version *)this_00,iVar16);
          cVar6 = *(char *)(lVar23 + 0x90);
        }
        if (cVar6 == '\0') {
          uVar19 = 0;
        }
        else {
          lVar23 = *(long *)(lVar23 + 0x88);
          if (lVar23 == 0) goto LAB_00117cc6;
          lVar24 = *(long *)(lVar23 + -8);
          uVar12 = uVar11;
          if (lVar24 <= (long)uVar11) goto LAB_00117ce7;
          uVar19 = *(undefined8 *)(lVar23 + uVar11 * 8);
        }
      }
    }
LAB_0011786c:
    uVar7 = RenderingDevice::compute_pipeline_create(uVar7,uVar19,local_158);
    lVar23 = lStack_90;
    *(undefined8 *)(this + ((long)(int)uVar11 + 0x8c) * 8 + 8) = uVar7;
    if (lStack_90 != 0) {
      LOCK();
      plVar1 = (long *)(lStack_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lStack_90 = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 6);
  CowData<String>::_unref((CowData<String> *)&uStack_f0);
  Image::create_empty(local_158,4,4,0,5);
  pIVar25 = *(Image **)(this + 0x498);
  pIVar17 = pIVar25;
  if (local_98 != pIVar25) {
    *(Image **)(this + 0x498) = local_98;
    if (local_98 == (Image *)0x0) {
      if (pIVar25 == (Image *)0x0) {
        uVar7 = 0;
        goto LAB_00117968;
      }
    }
    else {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(this + 0x498) = 0;
      }
      pIVar17 = local_98;
      if (pIVar25 == (Image *)0x0) goto LAB_00117947;
    }
    cVar6 = RefCounted::unreference();
    pIVar17 = local_98;
    if (cVar6 != '\0') {
      memdelete<Image>(pIVar25);
      pIVar17 = local_98;
    }
  }
LAB_00117947:
  if ((pIVar17 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
    memdelete<Image>(local_98);
  }
  uVar7 = *(undefined8 *)(this + 0x498);
LAB_00117968:
  uVar14 = 0;
  while( true ) {
    uVar18 = uVar14 & 3;
    uVar13 = (int)uVar14 >> 2;
    if ((uVar18 + uVar13 & 1) == 0) {
      local_58 = __LC348;
      uStack_50 = _LC273;
      Image::set_pixel((int)uVar7,uVar18,(Color *)(ulong)uVar13);
    }
    else {
      local_58 = __LC122;
      uStack_50 = _UNK_00128d08;
      Image::set_pixel((int)uVar7,uVar18,(Color *)(ulong)uVar13);
    }
    if (uVar14 == 0xf) break;
    uVar14 = uVar14 + 1;
    uVar7 = *(undefined8 *)(this + 0x498);
  }
  pIVar25 = *(Image **)(this + 0x498);
  if ((pIVar25 == (Image *)0x0) ||
     (local_98 = pIVar25, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_98 = (Image *)0x0;
    Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(this + 0x4a0),local_158);
  }
  else {
    Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(this + 0x4a0),local_158);
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<Image>(pIVar25);
    }
  }
  iVar16 = 6;
  do {
    pIVar25 = *(Image **)(this + 0x498);
    if ((pIVar25 == (Image *)0x0) ||
       (local_98 = pIVar25, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_98 = (Image *)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(this + 0x4b0),local_158);
    }
    else {
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(this + 0x4b0),local_158);
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        memdelete<Image>(pIVar25);
      }
    }
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  pRVar9 = (Resource *)operator_new(0x268,"");
  pRVar21 = pRVar9;
  for (lVar23 = 0x4d; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined8 *)pRVar21 = 0;
    pRVar21 = pRVar21 + (ulong)bVar28 * -0x10 + 8;
  }
  Resource::Resource(pRVar9);
  pRVar9[0x260] = (Resource)0x0;
  *(code **)pRVar9 = operator_new;
  *(undefined4 *)(pRVar9 + 0x240) = 0;
  *(undefined8 *)(pRVar9 + 0x250) = 0;
  *(undefined8 *)(pRVar9 + 600) = 0;
  postinitialize_handler((Object *)pRVar9);
  cVar6 = RefCounted::init_ref();
  pIVar25 = (Image *)0x0;
  if (cVar6 != '\0') {
    local_d8 = pRVar9;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      local_d8 = (Resource *)0x0;
    }
    cVar6 = RefCounted::unreference();
    pIVar25 = (Image *)local_d8;
    if (cVar6 != '\0') {
      memdelete<Image>((Image *)pRVar9);
      pIVar25 = (Image *)local_d8;
    }
  }
  pcVar3 = *(code **)(*(long *)pIVar25 + 0x178);
  local_98 = (Image *)0x0;
  if (((*(long *)(this + 0x498) != 0) &&
      (pOVar10 = (Object *)
                 __dynamic_cast(*(long *)(this + 0x498),&Object::typeinfo,&Resource::typeinfo,0),
      pOVar10 != (Object *)0x0)) &&
     (local_98 = (Image *)pOVar10, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_98 = (Image *)0x0;
  }
  (*pcVar3)(pIVar25);
  if (((local_98 != (Image *)0x0) &&
      (cVar6 = RefCounted::unreference(), pIVar17 = local_98, cVar6 != '\0')) &&
     (cVar6 = predelete_handler((Object *)local_98), cVar6 != '\0')) {
    (**(code **)(*(long *)pIVar17 + 0x140))(pIVar17);
    Memory::free_static(pIVar17,false);
  }
  Image::rotate_90(pIVar25,0);
  uVar14 = 0;
LAB_00117bf8:
  pIVar17 = *(Image **)(this + 0x498);
  uVar13 = uVar14;
  if (*(Image **)(this + 0x498) == (Image *)0x0) goto LAB_00117c1e;
  do {
    local_98 = pIVar17;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') goto LAB_00117c1e;
    Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(this + 0x4c0),local_158);
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<Image>(pIVar17);
    }
    while( true ) {
      uVar13 = uVar13 + 1;
      if (uVar13 == 4) {
        cVar6 = RefCounted::unreference();
        if (cVar6 == '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          memdelete<Image>(pIVar25);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar14 = 2;
      if ((uVar13 & 1) == 0) goto LAB_00117bf8;
      pIVar17 = pIVar25;
      if (pIVar25 != (Image *)0x0) break;
LAB_00117c1e:
      local_98 = (Image *)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)(this + 0x4c0),local_158);
    }
  } while( true );
LAB_00117dcc:
  do {
    lStack_d0 = 0;
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  goto LAB_0011502c;
LAB_00117d94:
  do {
    lStack_d0 = 0;
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  goto LAB_0011539f;
LAB_00117d5c:
  do {
    lStack_d0 = 0;
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  goto LAB_0011570f;
LAB_00117d24:
  do {
    lStack_d0 = 0;
    Vector<Vector<unsigned_char>>::push_back(local_168,(TextureView *)&local_d8);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  goto LAB_00115a7f;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::texture_3d_initialize(RID, Image::Format, int, int, int, bool,
   Vector<Ref<Image> > const&) */

void __thiscall
RendererRD::TextureStorage::texture_3d_initialize
          (TextureStorage *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined1 param_7,long param_8)

{
  long *plVar1;
  Image *pIVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  Image *pIVar6;
  void *pvVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TextureFormat *pTVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  size_t __n;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  ulong local_270;
  void *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  int local_244;
  uint local_238;
  undefined4 local_234;
  int local_210;
  long local_200 [2];
  long local_1f0;
  Vector<Vector<unsigned_char>> local_1e8 [8];
  undefined8 local_1e0 [2];
  long local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  Image *local_1a8;
  long lStack_1a0;
  undefined4 local_198;
  int local_194;
  undefined8 local_190;
  undefined4 local_188;
  Vector<RenderingDeviceCommons::DataFormat> local_180 [8];
  long local_178;
  undefined2 local_170;
  undefined8 local_168;
  void *pvStack_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  int local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  int local_114;
  undefined8 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_8 + 8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("texture_3d_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x3c9,
                       "Condition \"p_data.is_empty()\" is true.",0,0);
      return;
    }
    goto LAB_001192ab;
  }
  iVar9 = Image::validate_3d_image(param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar9 == 0) {
    local_200[0] = 0;
    local_1f0 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    if (*(long *)(param_8 + 8) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(*(long *)(param_8 + 8) + -8);
    }
    CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)&uStack_1c0,lVar14);
    lVar14 = *(long *)(param_8 + 8);
    if (lVar14 == 0) {
      local_258 = __LC137;
      uStack_250 = _LC131;
      local_234 = 0x27;
      uVar18 = 0;
      local_244 = 0xe8;
      local_248 = 0xe8;
    }
    else {
      local_238 = 0;
      local_270 = 0;
      local_234 = 0x27;
      local_244 = 0xe8;
      local_248 = 0xe8;
      local_258 = __LC137;
      uStack_250 = _LC131;
      do {
        if (*(long *)(lVar14 + -8) <= (long)local_270) break;
        local_158._0_8_ = _LC131;
        local_168 = __LC249;
        pvStack_160 = _UNK_00128e78;
        _validate_texture_format((Ref *)&local_1a8,(TextureToRDFormat *)this);
        if (CONCAT44(uStack_1bc,uStack_1c0) == 0) {
          lVar14 = 0;
          goto LAB_00118f51;
        }
        lVar14 = *(long *)(CONCAT44(uStack_1bc,uStack_1c0) + -8);
        if (lVar14 <= (long)local_270) goto LAB_00118f51;
        CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)&uStack_1c0);
        pIVar6 = local_1a8;
        lVar14 = CONCAT44(uStack_1bc,uStack_1c0);
        puVar17 = (undefined8 *)(local_270 * 8 + lVar14);
        pIVar2 = (Image *)*puVar17;
        if (local_1a8 == pIVar2) {
          if (local_1a8 != (Image *)0x0) {
            cVar8 = RefCounted::unreference();
            goto joined_r0x00118f13;
          }
        }
        else {
          *puVar17 = local_1a8;
          if (local_1a8 == (Image *)0x0) {
            if ((pIVar2 != (Image *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              memdelete<Image>(pIVar2);
            }
          }
          else {
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
              *puVar17 = 0;
            }
            if ((pIVar2 != (Image *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              memdelete<Image>(pIVar2);
            }
            cVar8 = RefCounted::unreference();
joined_r0x00118f13:
            if (cVar8 != '\0') {
              memdelete<Image>(pIVar6);
            }
          }
        }
        uVar18 = local_270;
        if (local_270 == 0) {
          local_248 = (undefined4)local_168;
          local_258 = pvStack_160;
          uStack_250 = local_158._0_8_;
          local_244 = local_168._4_4_;
          if (lVar14 == 0) goto LAB_00119028;
          lVar15 = *(long *)(lVar14 + -8);
          if (lVar15 < 1) goto LAB_0011902b;
          local_234 = Image::get_format();
        }
        else if (lVar14 == 0) {
          lVar15 = 0;
          goto LAB_00118eaa;
        }
        lVar15 = *(long *)(lVar14 + -8);
        if (lVar15 <= (long)local_270) goto LAB_00118eaa;
        Image::get_data();
        lVar14 = lStack_1a0;
        if (lStack_1a0 != 0) {
          uVar13 = *(undefined8 *)(lStack_1a0 + -8);
          LOCK();
          plVar1 = (long *)(lStack_1a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lStack_1a0 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
          local_238 = local_238 + (int)uVar13;
        }
        local_270 = local_270 + 1;
        lVar14 = *(long *)(param_8 + 8);
      } while (lVar14 != 0);
      uVar18 = (ulong)local_238;
    }
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_200,uVar18);
    lVar14 = *(long *)(param_8 + 8);
    local_50 = 0;
    if (lVar14 == 0) {
      local_210 = 0;
    }
    else {
      uVar18 = 0;
      local_270 = 0;
      local_210 = 0;
      do {
        if (*(long *)(lVar14 + -8) <= (long)uVar18) break;
        lVar5 = CONCAT44(uStack_1bc,uStack_1c0);
        if (lVar5 == 0) {
          lVar15 = 0;
          goto LAB_00118eaa;
        }
        lVar15 = *(long *)(lVar5 + -8);
        if (lVar15 <= (long)uVar18) goto LAB_00118eaa;
        Image::get_data();
        pvVar7 = pvStack_160;
        if (pvStack_160 == (void *)0x0) {
          local_238 = 0;
          __n = 0;
        }
        else {
          uVar3 = *(ulong *)((long)pvStack_160 + -8);
          LOCK();
          plVar1 = (long *)((long)pvStack_160 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            pvStack_160 = (void *)0x0;
            Memory::free_static((void *)((long)pvVar7 + -0x10),false);
          }
          local_238 = (uint)uVar3;
          __n = uVar3 & 0xffffffff;
        }
        lVar15 = *(long *)(lVar5 + -8);
        if (lVar15 <= (long)uVar18) goto LAB_00118eaa;
        Image::get_data();
        pvVar7 = pvStack_160;
        if (local_200[0] == 0) {
          lVar14 = 0;
LAB_00118f51:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,local_270,lVar14,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar14 = *(long *)(local_200[0] + -8);
        if (lVar14 <= (long)local_270) goto LAB_00118f51;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_200);
        memcpy((void *)(local_200[0] + local_270),pvVar7,__n);
        pvVar7 = pvStack_160;
        if (pvStack_160 != (void *)0x0) {
          LOCK();
          plVar1 = (long *)((long)pvStack_160 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            pvStack_160 = (void *)0x0;
            Memory::free_static((void *)((long)pvVar7 + -0x10),false);
          }
        }
        lVar15 = *(long *)(lVar5 + -8);
        if (lVar15 <= (long)uVar18) goto LAB_00118eaa;
        uVar10 = Image::get_width();
        lVar15 = *(long *)(lVar5 + -8);
        if (lVar15 <= (long)uVar18) goto LAB_00118eaa;
        uVar11 = Image::get_height();
        if (local_1f0 == 0) {
          lVar14 = 1;
        }
        else {
          lVar14 = *(long *)(local_1f0 + -8) + 1;
        }
        iVar9 = CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::resize<false>
                          ((CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *)&local_1f0
                           ,lVar14);
        if (iVar9 == 0) {
          if (local_1f0 == 0) {
            lVar15 = -1;
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(local_1f0 + -8);
            lVar15 = lVar14 + -1;
            if (-1 < lVar15) {
              CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_copy_on_write
                        ((CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *)&local_1f0);
              puVar16 = (undefined4 *)(lVar15 * 0x10 + local_1f0);
              *puVar16 = uVar10;
              puVar16[2] = (int)local_270;
              puVar16[1] = uVar11;
              puVar16[3] = local_238;
              goto LAB_00118997;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar14,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00118997:
        lVar15 = *(long *)(lVar5 + -8);
        local_270 = (ulong)((int)local_270 + local_238);
        if (lVar15 <= (long)uVar18) goto LAB_00118eaa;
        uVar10 = Image::get_height();
        lVar15 = *(long *)(lVar5 + -8);
        if (lVar15 <= (long)uVar18) goto LAB_00118eaa;
        local_48 = Image::get_width();
        uStack_44 = uVar10;
        cVar8 = Vector2i::operator!=((Vector2i *)&local_48,(Vector2i *)&local_50);
        local_50 = CONCAT44(uStack_44,local_48);
        local_210 = (local_210 + 1) - (uint)(cVar8 == '\0');
        uVar18 = uVar18 + 1;
        lVar14 = *(long *)(param_8 + 8);
      } while (lVar14 != 0);
    }
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&uStack_1c0);
    local_130 = 6;
    local_98 = _LC251;
    local_168 = _LC251;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_d0 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_158 = (undefined1  [16])0x0;
    local_140 = __LC202;
    uStack_138 = _UNK_00128e58;
    local_e0 = (undefined1  [16])0x0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_124 = param_4;
    uStack_120 = param_5;
    local_11c = param_6;
    local_114 = local_210;
    if (*(long *)(param_8 + 8) == 0) {
LAB_00119028:
      lVar15 = 0;
LAB_0011902b:
      uVar18 = 0;
LAB_00118eaa:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar18,lVar15,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar15 = *(long *)(*(long *)(param_8 + 8) + -8);
    if (lVar15 < 1) goto LAB_0011902b;
    local_12c = Image::get_format();
    lVar14 = local_200[0];
    local_128 = local_234;
    if (local_200[0] == 0) {
      local_f8 = 0;
    }
    else {
      local_f8 = (undefined4)*(undefined8 *)(local_200[0] + -8);
    }
    if (local_1f0 != 0) {
      CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_ref
                ((CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *)&local_100,
                 (CowData *)&local_1f0);
    }
    pvStack_160 = (void *)CONCAT44(pvStack_160._4_4_,2);
    local_198 = 1;
    local_1c8 = (int)__LC202;
    uStack_1c4 = (undefined4)((ulong)__LC202 >> 0x20);
    uStack_1c0 = (undefined4)_UNK_00128e58;
    uStack_1bc = (undefined4)((ulong)_UNK_00128e58 >> 0x20);
    local_148 = local_248;
    lStack_1a0 = CONCAT44(local_11c,uStack_120);
    local_1a8 = (Image *)CONCAT44(local_124,local_248);
    local_144 = local_244;
    local_178 = 0;
    local_170 = 0;
    local_1b8 = 6;
    local_194 = local_114;
    local_190 = 2;
    local_188 = 0xc1;
    if (local_244 != 0xe8) {
      Vector<RenderingDeviceCommons::DataFormat>::push_back(local_180,local_248);
      Vector<RenderingDeviceCommons::DataFormat>::push_back(local_180,local_244);
    }
    plVar1 = (long *)(lVar14 + -0x10);
    local_1e0[0] = 0;
    local_1d0 = 0;
    uStack_1c4 = SUB84(local_258,0);
    uStack_1c0 = (undefined4)((ulong)local_258 >> 0x20);
    uStack_1bc = (undefined4)uStack_250;
    local_1b8 = (undefined4)((ulong)uStack_250 >> 0x20);
    if (lVar14 != 0) {
      do {
        lVar14 = *plVar1;
        if (lVar14 == 0) goto LAB_00118cd0;
        LOCK();
        lVar15 = *plVar1;
        bVar19 = lVar14 == lVar15;
        if (bVar19) {
          *plVar1 = lVar14 + 1;
          lVar15 = lVar14;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar15 != -1) {
        local_1d0 = local_200[0];
      }
    }
LAB_00118cd0:
    Vector<Vector<unsigned_char>>::push_back(local_1e8);
    if (local_1d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_1d0 + -0x10),false);
      }
    }
    pTVar12 = (TextureFormat *)RenderingDevice::get_singleton();
    lVar14 = RenderingDevice::texture_create(pTVar12,(TextureView *)&local_1a8,(Vector *)&local_1c8)
    ;
    local_158._0_8_ = lVar14;
    if (lVar14 == 0) {
      _err_print_error("texture_3d_initialize",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x429,
                       "Condition \"texture.rd_texture.is_null()\" is true.",0,0);
LAB_00119218:
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)local_1e0);
      lVar14 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar1 = (long *)(local_178 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      Texture::~Texture((Texture *)&local_168);
    }
    else {
      if (local_144 != 0xe8) {
        local_1c8 = local_144;
        uVar13 = RenderingDevice::get_singleton();
        lVar14 = RenderingDevice::texture_create_shared(uVar13,(Vector *)&local_1c8,local_158._0_8_)
        ;
        local_158._8_8_ = lVar14;
        if (lVar14 == 0) {
          uVar13 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar13,local_158._0_8_);
          _err_print_error("texture_3d_initialize",
                           "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x42f,
                           "Condition \"texture.rd_texture_srgb.is_null()\" is true.",0,0);
          goto LAB_00119218;
        }
      }
      local_e8 = 0;
      local_140 = CONCAT44(uStack_1c4,local_1c8);
      uStack_138 = CONCAT44(uStack_1bc,uStack_1c0);
      local_110 = CONCAT44(local_124,uStack_120);
      local_130 = local_1b8;
      RID_Alloc<RendererRD::TextureStorage::Texture,true>::initialize_rid
                ((RID_Alloc<RendererRD::TextureStorage::Texture,true> *)(this + 0x108),param_2,
                 (Texture *)&local_168);
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)local_1e0);
      lVar14 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar1 = (long *)(local_178 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      Texture::~Texture((Texture *)&local_168);
    }
    if (local_1f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_1f0 + -0x10),false);
      }
    }
    if (local_200[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_200[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_200[0] + -0x10),false);
      }
    }
  }
  else {
    Image::get_3d_image_validation_error_text(&local_168,iVar9);
    _err_print_error("texture_3d_initialize",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0x3cd,
                     "Method/function failed.",&local_168,0,0);
    lVar14 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar1 = (long *)(local_168 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001192ab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::update_decal_atlas() */

void __thiscall RendererRD::TextureStorage::update_decal_atlas(TextureStorage *this)

{
  ulong *__src;
  Vector2i *this_00;
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
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
  code *pcVar19;
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  TextureFormat *pTVar25;
  undefined8 uVar26;
  Vector *pVVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long *plVar32;
  long *plVar33;
  ulong *puVar34;
  long *plVar35;
  byte bVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  int iVar42;
  int *piVar43;
  ulong *puVar44;
  long lVar45;
  uint uVar46;
  size_t __n_00;
  uint uVar47;
  int iVar48;
  ulong uVar49;
  long in_FS_OFFSET;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  ulong uVar55;
  undefined1 *local_130;
  undefined8 local_f0;
  undefined8 local_e8;
  long lStack_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  Vector<RenderingDeviceCommons::DataFormat> local_a0 [8];
  long local_98;
  undefined2 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int iStack_64;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar24 = RendererRD::CopyEffects::get_singleton();
  if (lVar24 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_decal_atlas",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xaf6,
                       "Parameter \"copy_effects\" is null.",0,0);
      return;
    }
    goto LAB_0011a5d4;
  }
  if (this[400] != (TextureStorage)0x0) {
    this[400] = (TextureStorage)0x0;
    if (*(long *)(this + 0x198) != 0) {
      uVar26 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar26);
      *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::resize<false>
                ((CowData<RendererRD::TextureStorage::DecalAtlas::MipMap> *)(this + 0x1b0),0);
    }
    local_b4 = *(undefined4 *)(this + 0x194);
    uVar55 = (ulong)*(uint *)(this + 0x18c);
    bVar36 = (byte)local_b4;
    iVar21 = 1 << (bVar36 & 0x1f);
    if (*(uint *)(this + 0x18c) == 0) {
      *(ulong *)(this + 0x1b8) = CONCAT44(iVar21,iVar21);
      local_c4 = iVar21;
    }
    else {
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write
                ((CowData<RendererRD::TextureStorage::DecalAtlas::SortItem> *)&local_c0);
      uVar30 = uVar55 * 0x20 - 1;
      uVar30 = uVar30 | uVar30 >> 1;
      uVar30 = uVar30 | uVar30 >> 2;
      uVar30 = uVar30 | uVar30 >> 4;
      uVar30 = uVar30 | uVar30 >> 8;
      uVar30 = uVar30 | uVar30 >> 0x10;
      puVar31 = (undefined8 *)Memory::alloc_static((uVar30 | uVar30 >> 0x20) + 0x11,false);
      if (puVar31 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.");
      }
      else {
        local_c0 = puVar31 + 2;
        *puVar31 = 1;
        plVar32 = local_c0;
        do {
          *plVar32 = 0;
          plVar33 = plVar32 + 4;
          plVar32[1] = 0;
          plVar32[2] = 0;
          plVar32[3] = 0;
          plVar32 = plVar33;
        } while (plVar33 != puVar31 + uVar55 * 4 + 2);
        puVar31[1] = uVar55;
      }
      plVar32 = *(long **)(this + 0x178);
      if (plVar32 == (long *)0x0) {
        uVar39 = 8;
      }
      else {
        lVar45 = 0;
        uVar39 = 8;
        do {
          if (local_c0 == (long *)0x0) {
            lVar38 = 0;
LAB_00119de0:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar45,lVar38,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          lVar38 = local_c0[-1];
          if (lVar38 <= lVar45) goto LAB_00119de0;
          CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write
                    ((CowData<RendererRD::TextureStorage::DecalAtlas::SortItem> *)&local_c0);
          uVar55 = plVar32[2];
          if ((uVar55 == 0) || (*(uint *)(this + 0x124) <= (uint)uVar55)) {
LAB_0011a49e:
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          lVar38 = ((uVar55 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                   *(long *)(*(long *)(this + 0x110) +
                            ((uVar55 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
          if (*(int *)(lVar38 + 0x110) != (int)(uVar55 >> 0x20)) {
            if (*(int *)(lVar38 + 0x110) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_0011a49e;
          }
          iVar42 = *(int *)(lVar38 + 0x48);
          plVar33 = local_c0 + lVar45 * 4;
          uVar23 = *(int *)(lVar38 + 0x44) / iVar21;
          plVar33[1] = *(long *)(lVar38 + 0x44);
          plVar33[2] = CONCAT44(iVar42 / iVar21 + 1,uVar23 + 1);
          if (uVar39 < uVar23 + 1) {
            uVar23 = (int)uVar23 >> 1 | uVar23;
            uVar23 = (int)uVar23 >> 2 | uVar23;
            uVar23 = (int)uVar23 >> 4 | uVar23;
            uVar23 = uVar23 | (int)uVar23 >> 8;
            uVar39 = ((int)uVar23 >> 0x10 | uVar23) + 1;
          }
          plVar35 = plVar32 + 2;
          plVar32 = (long *)*plVar32;
          lVar45 = lVar45 + 1;
          *plVar33 = *plVar35;
        } while (plVar32 != (long *)0x0);
      }
      Vector<RendererRD::TextureStorage::DecalAtlas::SortItem>::
      sort_custom<_DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>,true>
                ((Vector<RendererRD::TextureStorage::DecalAtlas::SortItem> *)&local_c8);
      if (local_c0 == (long *)0x0) {
        iVar42 = 0;
      }
      else {
        iVar42 = (int)local_c0[-1];
      }
      CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write
                ((CowData<RendererRD::TextureStorage::DecalAtlas::SortItem> *)&local_c0);
      plVar32 = local_c0;
      plVar33 = local_c0 + (long)iVar42 * 4;
LAB_00119f26:
      __n = (ulong)uVar39 * 4;
      if (uVar39 == 0) {
LAB_0011a5cd:
        puVar44 = (ulong *)0x0;
      }
      else {
        uVar55 = __n - 1;
        uVar55 = uVar55 | uVar55 >> 1;
        uVar55 = uVar55 | uVar55 >> 2;
        uVar55 = uVar55 | uVar55 >> 4;
        uVar55 = uVar55 | uVar55 >> 8;
        uVar55 = uVar55 | uVar55 >> 0x10;
        puVar34 = (ulong *)Memory::alloc_static((uVar55 | uVar55 >> 0x20) + 0x11,false);
        if (puVar34 == (ulong *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0);
          goto LAB_0011a5cd;
        }
        __src = puVar34 + 2;
        *puVar34 = 1;
        puVar34[1] = (ulong)uVar39;
        puVar44 = __src;
        if (1 < *puVar34) {
          uVar30 = puVar34[1];
          uVar55 = 0x10;
          __n_00 = uVar30 * 4;
          if (__n_00 != 0) {
            uVar55 = __n_00 - 1 | __n_00 - 1 >> 1;
            uVar55 = uVar55 | uVar55 >> 2;
            uVar55 = uVar55 | uVar55 >> 4;
            uVar55 = uVar55 | uVar55 >> 8;
            uVar55 = uVar55 | uVar55 >> 0x10;
            uVar55 = (uVar55 | uVar55 >> 0x20) + 0x11;
          }
          puVar31 = (undefined8 *)Memory::alloc_static(uVar55,false);
          if (puVar31 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0);
          }
          else {
            puVar44 = puVar31 + 2;
            *puVar31 = 1;
            puVar31[1] = uVar30;
            memcpy(puVar44,__src,__n_00);
            LOCK();
            *puVar34 = *puVar34 - 1;
            UNLOCK();
            if (*puVar34 == 0) {
              Memory::free_static(puVar34,false);
            }
          }
        }
      }
      memset(puVar44,0,__n);
      if (iVar42 < 1) {
        puVar34 = puVar44 + -2;
        LOCK();
        *puVar34 = *puVar34 - 1;
        UNLOCK();
        if (*puVar34 == 0) {
          iVar48 = 0;
          goto LAB_0011a0b5;
        }
        *(uint *)(this + 0x1b8) = uVar39 << (bVar36 & 0x1f);
        *(undefined4 *)(this + 0x1bc) = 0;
        goto LAB_0011a311;
      }
      uVar23 = 0;
      plVar35 = plVar32;
      do {
        uVar47 = *(uint *)(plVar35 + 2);
        uVar30 = 0;
        iVar48 = 0x7fffffff;
        uVar55 = 0xffffffff;
        uVar46 = uVar47;
        do {
          iVar22 = 0;
          uVar29 = uVar30;
          if (0 < (int)uVar47) {
            do {
              iVar1 = *(int *)((long)puVar44 + uVar29 * 4);
              if ((iVar22 < iVar1) && (iVar22 = iVar1, iVar48 < iVar1)) goto LAB_0011a024;
              uVar37 = (int)uVar29 + 1;
              uVar29 = (ulong)uVar37;
            } while (uVar37 != uVar46);
          }
          if (iVar22 < iVar48) {
            uVar55 = uVar30;
            iVar48 = iVar22;
          }
LAB_0011a024:
          uVar37 = (int)uVar30 + 1;
          uVar30 = (ulong)uVar37;
          uVar46 = uVar46 + 1;
        } while (uVar37 <= uVar39 - uVar47);
        if (0 < (int)uVar47) {
          lVar45 = 0;
          do {
            *(int *)((long)puVar44 + lVar45 * 4 + (long)(int)uVar55 * 4) =
                 *(int *)((long)plVar35 + 0x14) + iVar48;
            lVar45 = lVar45 + 1;
          } while ((int)lVar45 < (int)plVar35[2]);
        }
        *(int *)((long)plVar35 + 0x1c) = iVar48;
        uVar47 = iVar48 + *(int *)((long)plVar35 + 0x14);
        *(int *)(plVar35 + 3) = (int)uVar55;
        if ((int)uVar23 < (int)uVar47) {
          uVar23 = uVar47;
        }
        plVar35 = plVar35 + 4;
      } while (plVar33 != plVar35);
      uVar47 = uVar39 * 2;
      if (uVar47 < uVar23) {
        puVar44 = puVar44 + -2;
        LOCK();
        *puVar44 = *puVar44 - 1;
        UNLOCK();
        uVar39 = uVar47;
        if (*puVar44 == 0) {
          Memory::free_static(puVar44,false);
        }
        goto LAB_00119f26;
      }
      puVar34 = puVar44 + -2;
      uVar23 = (uVar23 << (bVar36 & 0x1f)) - 1;
      uVar23 = (int)uVar23 >> 1 | uVar23;
      uVar23 = (int)uVar23 >> 2 | uVar23;
      uVar23 = (int)uVar23 >> 4 | uVar23;
      uVar23 = (int)uVar23 >> 8 | uVar23;
      iVar48 = (uVar23 | (int)uVar23 >> 0x10) + 1;
      LOCK();
      *puVar34 = *puVar34 - 1;
      UNLOCK();
      if (*puVar34 == 0) {
LAB_0011a0b5:
        Memory::free_static(puVar44 + -2,false);
        *(uint *)(this + 0x1b8) = uVar39 << (bVar36 & 0x1f);
        *(int *)(this + 0x1bc) = iVar48;
        if (0 < iVar42) goto LAB_0011a0e8;
      }
      else {
        *(uint *)(this + 0x1b8) = uVar39 << (bVar36 & 0x1f);
        *(int *)(this + 0x1bc) = iVar48;
LAB_0011a0e8:
        uVar26 = CONCAT44(iVar21 / 2,iVar21 / 2);
        do {
          lVar45 = *(long *)(this + 0x168);
          if ((lVar45 == 0) || (*(int *)(this + 0x18c) == 0)) {
LAB_0011a35c:
            local_88._0_8_ = uVar26;
            local_78 = Vector2i::operator*((Vector2i *)(plVar32 + 3),iVar21);
            uVar26 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)local_88);
            local_58._0_8_ = uVar26;
            _DAT_00000008 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          uVar29 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x188) * 4)
                           );
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
          uVar55 = *plVar32 * 0x3ffff - 1;
          uVar55 = (uVar55 ^ uVar55 >> 0x1f) * 0x15;
          uVar55 = (uVar55 ^ uVar55 >> 0xb) * 0x41;
          uVar55 = uVar55 >> 0x16 ^ uVar55;
          uVar30 = uVar55 & 0xffffffff;
          if ((int)uVar55 == 0) {
            uVar30 = 1;
          }
          auVar51._8_8_ = 0;
          auVar51._0_8_ = uVar30 * lVar38;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar29;
          lVar40 = SUB168(auVar51 * auVar14,8);
          uVar39 = *(uint *)(*(long *)(this + 0x170) + lVar40 * 4);
          uVar23 = SUB164(auVar51 * auVar14,8);
          if (uVar39 == 0) goto LAB_0011a35c;
          uVar47 = 0;
          while ((uVar39 != (uint)uVar30 ||
                 (*plVar32 != *(long *)(*(long *)(lVar45 + lVar40 * 8) + 0x10)))) {
            uVar47 = uVar47 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(uVar23 + 1) * lVar38;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar29;
            lVar40 = SUB168(auVar7 * auVar15,8);
            uVar39 = *(uint *)(*(long *)(this + 0x170) + lVar40 * 4);
            uVar23 = SUB164(auVar7 * auVar15,8);
            if ((uVar39 == 0) ||
               (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar39 * lVar38, auVar16._8_8_ = 0,
               auVar16._0_8_ = uVar29, auVar9._8_8_ = 0,
               auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(this + 0x188) * 4) + uVar23) -
                                     SUB164(auVar8 * auVar16,8)) * lVar38, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar29, SUB164(auVar9 * auVar17,8) < uVar47)) goto LAB_0011a35c;
          }
          lVar45 = *(long *)(lVar45 + (ulong)uVar23 * 8);
          local_88._0_8_ = uVar26;
          local_78 = Vector2i::operator*((Vector2i *)(plVar32 + 3),iVar21);
          uVar28 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)local_88);
          local_58._0_8_ = uVar28;
          uVar28 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
          this_00 = (Vector2i *)(plVar32 + 1);
          plVar32 = plVar32 + 4;
          *(undefined8 *)(lVar45 + 0x20) = uVar28;
          uVar28 = Vector2i::operator_cast_to_Vector2(this_00);
          *(undefined8 *)(lVar45 + 0x28) = uVar28;
          uVar28 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0x1b8));
          auVar50._8_8_ = 0;
          auVar50._0_8_ = *(ulong *)(lVar45 + 0x20);
          auVar53._8_8_ = _LC273;
          auVar53._0_8_ = uVar28;
          auVar51 = divps(auVar50,auVar53);
          *(long *)(lVar45 + 0x20) = auVar51._0_8_;
          uVar28 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0x1b8));
          auVar52._8_8_ = 0;
          auVar52._0_8_ = *(ulong *)(lVar45 + 0x28);
          auVar54._8_8_ = _LC273;
          auVar54._0_8_ = uVar28;
          auVar51 = divps(auVar52,auVar54);
          *(long *)(lVar45 + 0x28) = auVar51._0_8_;
        } while (plVar33 != plVar32);
      }
LAB_0011a311:
      if (local_c0 != (long *)0x0) {
        LOCK();
        plVar32 = local_c0 + -2;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (*plVar32 == 0) {
          Memory::free_static(local_c0 + -2,false);
        }
      }
      local_c4 = *(int *)(this + 0x1b8);
      iVar21 = *(int *)(this + 0x1bc);
      local_b4 = *(undefined4 *)(this + 0x194);
    }
    local_130 = local_58;
    local_c0._4_4_ = 1;
    uStack_b8 = 1;
    local_90 = 0;
    iVar48 = 0;
    local_98 = 0;
    local_c8 = 0x24;
    local_b0 = 1;
    local_a8 = 0x103;
    local_c0._0_4_ = iVar21;
    Vector<RenderingDeviceCommons::DataFormat>::push_back(local_a0,0x24);
    Vector<RenderingDeviceCommons::DataFormat>::push_back(local_a0,0x2a);
    pTVar25 = (TextureFormat *)RenderingDevice::get_singleton();
    local_f0 = 0;
    local_d8 = 6;
    local_e8 = __LC202;
    lStack_e0 = _UNK_00128e58;
    uVar26 = RenderingDevice::texture_create(pTVar25,(TextureView *)&local_c8,(Vector *)&local_e8);
    *(undefined8 *)(this + 0x198) = uVar26;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_f0);
    uVar26 = RenderingDevice::get_singleton();
    local_58 = (undefined1  [16])0x0;
    uVar55 = 1;
    RenderingDevice::texture_clear
              (uVar26,*(undefined8 *)(this + 0x198),local_130,0,*(undefined4 *)(this + 0x194),0,1);
    iVar21 = *(int *)(this + 0x1b8);
    iVar42 = *(int *)(this + 0x1bc);
    if (0 < *(int *)(this + 0x194)) {
      do {
        uVar26 = RenderingDevice::get_singleton();
        local_d8 = 6;
        local_e8 = __LC202;
        lStack_e0 = _UNK_00128e58;
        uStack_70 = RenderingDevice::texture_create_shared_from_slice
                              (uVar26,(Vector *)&local_e8,*(undefined8 *)(this + 0x198),0,iVar48,1,0
                               ,0);
        lStack_e0 = 0;
        Vector<RID>::push_back((Vector<RID> *)&local_e8,uStack_70);
        pVVar27 = (Vector *)RenderingDevice::get_singleton();
        local_78 = RenderingDevice::framebuffer_create(pVVar27,(long)&local_e8,0xffffffff);
        local_48 = CONCAT44(iVar42,iVar21);
        local_58._8_8_ = uStack_70;
        local_58._0_8_ = local_78;
        if (*(long *)(this + 0x1b0) == 0) {
          lVar45 = 1;
        }
        else {
          lVar45 = *(long *)(*(long *)(this + 0x1b0) + -8) + 1;
        }
        local_68 = iVar21;
        iStack_64 = iVar42;
        iVar22 = CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::resize<false>
                           ((CowData<RendererRD::TextureStorage::DecalAtlas::MipMap> *)
                            (this + 0x1b0),lVar45);
        if (iVar22 == 0) {
          if (*(long *)(this + 0x1b0) == 0) {
            lVar38 = -1;
            lVar45 = 0;
          }
          else {
            lVar45 = *(long *)(*(long *)(this + 0x1b0) + -8);
            lVar38 = lVar45 + -1;
            if (-1 < lVar38) {
              CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::_copy_on_write
                        ((CowData<RendererRD::TextureStorage::DecalAtlas::MipMap> *)(this + 0x1b0));
              puVar31 = (undefined8 *)(*(long *)(this + 0x1b0) + lVar38 * 0x18);
              *puVar31 = local_58._0_8_;
              puVar31[1] = local_58._8_8_;
              puVar31[2] = local_48;
              goto LAB_001196eb;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar38,lVar45,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_001196eb:
        lVar45 = lStack_e0;
        iVar42 = iVar42 >> 1;
        if (iVar42 < 1) {
          iVar42 = 1;
        }
        iVar21 = iVar21 >> 1;
        if (iVar21 < 1) {
          iVar21 = 1;
        }
        if (lStack_e0 != 0) {
          LOCK();
          plVar32 = (long *)(lStack_e0 + -0x10);
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (*plVar32 == 0) {
            lStack_e0 = 0;
            Memory::free_static((void *)(lVar45 + -0x10),false);
          }
        }
        iVar48 = iVar48 + 1;
      } while (iVar48 < *(int *)(this + 0x194));
    }
    local_d8 = 6;
    uVar26 = 0;
    local_e8 = __LC352;
    lStack_e0 = _UNK_00128f98;
    uVar28 = RenderingDevice::get_singleton();
    uVar28 = RenderingDevice::texture_create_shared
                       (uVar28,(Vector *)&local_e8,*(undefined8 *)(this + 0x198));
    *(undefined8 *)(this + 0x1a0) = uVar28;
    lVar45 = *(long *)(this + 0x1b0);
    if (lVar45 != 0) {
      lVar38 = 0;
      do {
        while( true ) {
          if (*(long *)(lVar45 + -8) <= lVar38) goto LAB_00119882;
          puVar31 = (undefined8 *)(lVar45 + lVar38 * 0x18);
          local_88 = (undefined1  [16])0x0;
          if (*(int *)(this + 0x18c) != 0) break;
          uVar28 = RenderingDevice::get_singleton();
          lVar38 = lVar38 + 1;
          RenderingDevice::texture_clear(uVar28,puVar31[1],local_88,0,1,0,1);
          lVar45 = *(long *)(this + 0x1b0);
          if (lVar45 == 0) goto LAB_00119882;
        }
        if (lVar38 == 0) {
          lStack_e0 = 0;
          Vector<Color>::push_back(0,0,(Vector *)&local_e8);
          uVar26 = 0x1198ec;
          uVar28 = RenderingDevice::get_singleton();
          local_58 = ZEXT816(0);
          uVar28 = RenderingDevice::draw_list_begin
                             (uVar28,*puVar31,0x500ff,(Vector *)&local_e8,0,local_130,0);
          for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            auVar20._8_8_ = uVar26;
            auVar20._0_8_ = puVar2;
            auVar18._8_8_ = uVar26;
            auVar18._0_8_ = puVar2;
            piVar43 = *(int **)(this + 0x168);
            uVar30 = puVar2[2];
            if (piVar43 != (int *)0x0) {
              if (*(int *)(this + 0x18c) != 0) {
                uVar55 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(this + 0x188) * 4));
                lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x188) * 8);
                uVar29 = uVar30 * 0x3ffff - 1;
                uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
                uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
                uVar29 = uVar29 >> 0x16 ^ uVar29;
                uVar49 = uVar29 & 0xffffffff;
                if ((int)uVar29 == 0) {
                  uVar49 = 1;
                }
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar49 * lVar45;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar55;
                auVar18 = auVar3 * auVar10;
                lVar40 = auVar18._8_8_;
                uVar39 = *(uint *)(*(long *)(this + 0x170) + lVar40 * 4);
                uVar23 = auVar18._8_4_;
                if (uVar39 != 0) {
                  uVar47 = 0;
                  lVar41 = lVar40;
                  do {
                    if ((uVar39 == (uint)uVar49) &&
                       (auVar20._8_8_ = lVar41, auVar20._0_8_ = *(long *)(piVar43 + lVar40 * 2),
                       uVar30 == *(ulong *)(*(long *)(piVar43 + lVar40 * 2) + 0x10))) {
                      piVar43 = (int *)(*(long *)(piVar43 + (ulong)uVar23 * 2) + 0x18);
                      goto LAB_00119a78;
                    }
                    uVar47 = uVar47 + 1;
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = (ulong)(uVar23 + 1) * lVar45;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = uVar55;
                    auVar18 = auVar4 * auVar11;
                    lVar40 = auVar18._8_8_;
                    uVar39 = *(uint *)(*(long *)(this + 0x170) + lVar40 * 4);
                    uVar23 = auVar18._8_4_;
                    if (uVar39 == 0) break;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (ulong)uVar39 * lVar45;
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ = uVar55;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(this + 0x188) * 4) + uVar23) -
                                          SUB164(auVar5 * auVar12,8)) * lVar45;
                    auVar13._8_8_ = 0;
                    auVar13._0_8_ = uVar55;
                    auVar18 = auVar6 * auVar13;
                    lVar41 = auVar18._8_8_;
                  } while (uVar47 <= auVar18._8_4_);
                }
              }
              piVar43 = (int *)0x0;
              auVar20 = auVar18;
            }
LAB_00119a78:
            uVar29 = auVar20._8_8_;
            if (uVar30 == 0) {
LAB_0011e62e:
              RendererRD::CopyEffects::copy_to_atlas_fb
                        (lVar24,_DAT_00000010,*puVar31,piVar43 + 2,uVar28,0,0 < *piVar43,uVar29);
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
            uVar29 = (ulong)*(uint *)(this + 0x124);
            if (*(uint *)(this + 0x124) <= (uint)uVar30) goto LAB_0011e62e;
            lVar45 = ((uVar30 & 0xffffffff) % (ulong)*(uint *)(this + 0x120)) * 0x118 +
                     *(long *)(*(long *)(this + 0x110) +
                              ((uVar30 & 0xffffffff) / (ulong)*(uint *)(this + 0x120)) * 8);
            iVar21 = *(int *)(lVar45 + 0x110);
            if (iVar21 != (int)(uVar30 >> 0x20)) {
              uVar39 = iVar21 + 0x80000000;
              uVar29 = (ulong)uVar39;
              if (uVar39 < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar55);
                uVar29 = extraout_RDX_00;
              }
              goto LAB_0011e62e;
            }
            RendererRD::CopyEffects::copy_to_atlas_fb
                      (lVar24,*(undefined8 *)(lVar45 + 0x10),*puVar31,piVar43 + 2,uVar28,0,
                       0 < *piVar43);
            uVar26 = extraout_RDX;
          }
          RenderingDevice::get_singleton();
          RenderingDevice::draw_list_end();
          lVar45 = lStack_e0;
          uVar26 = puVar31[1];
          if (lStack_e0 != 0) {
            LOCK();
            plVar32 = (long *)(lStack_e0 + -0x10);
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (*plVar32 == 0) {
              lStack_e0 = 0;
              Memory::free_static((void *)(lVar45 + -0x10),false);
            }
          }
        }
        else {
          local_78 = 0;
          uStack_70 = puVar31[2];
          local_58 = ZEXT816(0);
          RendererRD::CopyEffects::copy_to_fb_rect
                    (lVar24,uVar26,*puVar31,&local_78,0,0,0,0,0,0,0,0,0,local_130);
          uVar26 = puVar31[1];
        }
        lVar45 = *(long *)(this + 0x1b0);
        lVar38 = lVar38 + 1;
      } while (lVar45 != 0);
    }
LAB_00119882:
    lVar24 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar32 = (long *)(local_98 + -0x10);
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (*plVar32 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a5d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_get_override_depth_slice(RID, unsigned int) const */

long __thiscall
RendererRD::TextureStorage::render_target_get_override_depth_slice
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
  *this_00;
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_58;
  undefined4 local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar7 + 0x150) == (int)(param_2 >> 0x20)) {
      lVar1 = *(long *)(lVar7 + 0xf0);
      lVar6 = 0;
      if ((lVar1 != 0) && (lVar6 = lVar1, *(int *)(lVar7 + 8) != 1)) {
        local_48 = local_48 & 0xffffffff00000000;
        this_00 = (HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                   *)(lVar7 + 0x100);
        local_58 = lVar1;
        local_50 = param_3;
        cVar2 = HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                ::_lookup_pos(this_00,(SliceKey *)&local_58,(uint *)&local_48);
        if (cVar2 == '\0') {
          uVar4 = RenderingDevice::get_singleton();
          local_38 = 6;
          local_48 = __LC202;
          uStack_40 = _UNK_00128e58;
          uVar4 = RenderingDevice::texture_create_shared_from_slice
                            (uVar4,&local_48,*(undefined8 *)(lVar7 + 0xf0),param_3,0,1,0,0);
          puVar5 = (undefined8 *)
                   HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                   ::operator[](this_00,(SliceKey *)&local_58);
          *puVar5 = uVar4;
        }
        plVar3 = (long *)HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                         ::operator[](this_00,(SliceKey *)&local_58);
        lVar6 = *plVar3;
      }
      goto LAB_0011a665;
    }
    if (*(int *)(lVar7 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_override_depth_slice",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdd8,
                   "Parameter \"rt\" is null.",0,0);
  lVar6 = 0;
LAB_0011a665:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_get_override_velocity_slice(RID, unsigned int) const */

long __thiscall
RendererRD::TextureStorage::render_target_get_override_velocity_slice
          (TextureStorage *this,ulong param_2,undefined4 param_3)

{
  HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
  *this_00;
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_58;
  undefined4 local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
            *(long *)(*(long *)(this + 0x298) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8);
    if (*(int *)(lVar7 + 0x150) == (int)(param_2 >> 0x20)) {
      lVar1 = *(long *)(lVar7 + 0xf8);
      lVar6 = 0;
      if ((lVar1 != 0) && (lVar6 = lVar1, *(int *)(lVar7 + 8) != 1)) {
        local_48 = local_48 & 0xffffffff00000000;
        this_00 = (HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                   *)(lVar7 + 0x100);
        local_58 = lVar1;
        local_50 = param_3;
        cVar2 = HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                ::_lookup_pos(this_00,(SliceKey *)&local_58,(uint *)&local_48);
        if (cVar2 == '\0') {
          uVar4 = RenderingDevice::get_singleton();
          local_38 = 6;
          local_48 = __LC202;
          uStack_40 = _UNK_00128e58;
          uVar4 = RenderingDevice::texture_create_shared_from_slice
                            (uVar4,&local_48,*(undefined8 *)(lVar7 + 0xf8),param_3,0,1,0,0);
          puVar5 = (undefined8 *)
                   HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                   ::operator[](this_00,(SliceKey *)&local_58);
          *puVar5 = uVar4;
        }
        plVar3 = (long *)HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                         ::operator[](this_00,(SliceKey *)&local_58);
        lVar6 = *plVar3;
      }
      goto LAB_0011a825;
    }
    if (*(int *)(lVar7 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_override_velocity_slice",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xdf2,
                   "Parameter \"rt\" is null.",0,0);
  lVar6 = 0;
LAB_0011a825:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_render_target_allocate_sdf(RendererRD::TextureStorage::RenderTarget*)
    */

void __thiscall
RendererRD::TextureStorage::_render_target_allocate_sdf(TextureStorage *this,RenderTarget *param_1)

{
  long *plVar1;
  Version *pVVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  TextureFormat *pTVar9;
  undefined8 uVar10;
  Vector *pVVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 extraout_RDX;
  long lVar16;
  undefined8 uVar17;
  long in_FS_OFFSET;
  undefined8 local_e8;
  Vector<RenderingDevice::Uniform> local_d8 [8];
  long local_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  long local_68;
  undefined2 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x88) != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_render_target_allocate_sdf",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xf2c,
                       "Condition \"rt->sdf_buffer_write_fb.is_valid()\" is true.",0,0);
      return;
    }
    goto LAB_0011b73a;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar10 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar10,*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  _render_target_get_sdf_rect(this,param_1);
  local_8c = 0x100000001;
  local_84 = 0x100000001;
  local_60 = 0;
  local_98 = 8;
  local_68 = 0;
  local_7c = 0xb00000000;
  local_94 = extraout_RDX;
  local_50 = extraout_RDX;
  pTVar9 = (TextureFormat *)RenderingDevice::get_singleton();
  local_d0 = 0;
  local_b8 = CONCAT44(local_b8._4_4_,6);
  local_c8 = __LC202;
  uStack_c0 = _UNK_00128e58;
  uVar10 = RenderingDevice::texture_create(pTVar9,(TextureView *)&local_98,(Vector *)&local_c8);
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_d0);
  uStack_c0 = 0;
  Vector<RID>::push_back((Vector<RID> *)&local_c8,*(undefined8 *)(param_1 + 0x80));
  pVVar11 = (Vector *)RenderingDevice::get_singleton();
  uVar10 = RenderingDevice::framebuffer_create(pVVar11,(long)&local_c8,0xffffffff);
  uVar14 = uStack_c0;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  if (uStack_c0 != 0) {
    LOCK();
    plVar1 = (long *)(uStack_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uStack_c0 = 0;
      Memory::free_static((void *)(uVar14 + -0x10),false);
    }
  }
  iVar13 = *(int *)(param_1 + 0xbc);
  iVar8 = 0x32;
  if ((iVar13 != 1) && (iVar8 = 0x19, iVar13 != 2)) {
    if (iVar13 != 0) {
      _err_print_error("_render_target_allocate_sdf",
                       "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xf4f,
                       "Invalid viewport SDF scale, defaulting to 100%.",0,0);
    }
    iVar8 = 100;
  }
  local_48 = Vector2i::operator*((Vector2i *)&local_50,iVar8);
  lVar12 = Vector2i::operator/((Vector2i *)&local_48,100);
  local_98 = 0x51;
  local_7c = CONCAT44(8,(undefined4)local_7c);
  iVar13 = (int)((ulong)lVar12 >> 0x20);
  if (iVar13 == 0 || lVar12 < 0) {
    iVar13 = 1;
  }
  iVar8 = (int)lVar12;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  *(int *)(param_1 + 0xc4) = iVar13;
  *(int *)(param_1 + 0xc0) = iVar8;
  local_94 = CONCAT44(iVar13,iVar8);
  pTVar9 = (TextureFormat *)RenderingDevice::get_singleton();
  local_d0 = 0;
  local_b8._0_4_ = 6;
  local_c8 = __LC202;
  uStack_c0 = _UNK_00128e58;
  uVar10 = RenderingDevice::texture_create(pTVar9,(TextureView *)&local_98,(Vector *)&local_c8);
  *(undefined8 *)(param_1 + 0x90) = uVar10;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_d0);
  pTVar9 = (TextureFormat *)RenderingDevice::get_singleton();
  local_d0 = 0;
  local_b8._0_4_ = 6;
  local_c8 = __LC202;
  uStack_c0 = _UNK_00128e58;
  uVar10 = RenderingDevice::texture_create(pTVar9,(TextureView *)&local_98,(Vector *)&local_c8);
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_d0);
  local_98 = 0x46;
  local_7c = CONCAT44(9,(undefined4)local_7c);
  pTVar9 = (TextureFormat *)RenderingDevice::get_singleton();
  local_d0 = 0;
  local_b8 = CONCAT44(local_b8._4_4_,6);
  local_c8 = __LC202;
  uStack_c0 = _UNK_00128e58;
  uVar10 = RenderingDevice::texture_create(pTVar9,(TextureView *)&local_98,(Vector *)&local_c8);
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_d0);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  local_b8 = *(undefined8 *)(param_1 + 0x80);
  local_d0 = 0;
  local_a8 = 0;
  local_c8 = _LC360;
  Vector<RenderingDevice::Uniform>::push_back(local_d8,(Vector *)&local_c8);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  local_b8 = *(undefined8 *)(param_1 + 0xa0);
  local_a8 = 0;
  local_c8 = _LC361;
  Vector<RenderingDevice::Uniform>::push_back(local_d8,(Vector *)&local_c8);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  local_b8 = *(undefined8 *)(param_1 + 0x90);
  local_a8 = 0;
  local_c8 = _LC126;
  Vector<RenderingDevice::Uniform>::push_back(local_d8,(Vector *)&local_c8);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  local_b8 = *(undefined8 *)(param_1 + 0x98);
  local_a8 = 0;
  pVVar2 = (Version *)(this + 0x2e8);
  local_c8 = _LC363;
  Vector<RenderingDevice::Uniform>::push_back(local_d8,(Vector *)&local_c8);
  uVar10 = RenderingDevice::get_singleton();
  uVar14 = *(ulong *)(this + 0x460);
  if (*(long *)(this + 0x300) != 0) {
    lVar12 = *(long *)(*(long *)(this + 0x300) + -8);
    if (lVar12 < 1) goto LAB_0011b36b;
    pcVar3 = *(char **)(this + 0x310);
    if (pcVar3 != (char *)0x0) {
      lVar12 = *(long *)(pcVar3 + -8);
      if (lVar12 < 1) goto LAB_0011b2ab;
      if (*pcVar3 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar17 = 0;
        goto LAB_0011af6b;
      }
      if ((uVar14 == 0) || (*(uint *)(this + 0x3bc) <= (uint)uVar14)) {
LAB_0011b400:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        uVar17 = 0;
        goto LAB_0011af6b;
      }
      lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b8)) * 0xa0 +
               *(long *)(*(long *)(this + 0x3a8) +
                        ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b8)) * 8);
      if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
        if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0011b400;
      }
      iVar13 = (int)lVar16;
      if (*(char *)(lVar16 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar12 = *(long *)(this + 0x360);
        if (lVar12 != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(lVar12 + -8) <= lVar15) break;
            if (*(char *)(lVar12 + lVar15) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar13);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar13);
            }
            lVar12 = *(long *)(this + 0x360);
            lVar15 = lVar15 + 1;
          } while (lVar12 != 0);
        }
      }
      puVar4 = *(uint **)(this + 800);
      if (puVar4 == (uint *)0x0) goto LAB_0011b2a8;
      lVar12 = *(long *)(puVar4 + -2);
      if (lVar12 < 1) goto LAB_0011b2ab;
      uVar14 = (ulong)*puVar4;
      lVar15 = *(long *)(lVar16 + 0x68);
      if (lVar15 != 0) {
        lVar12 = *(long *)(lVar15 + -8);
        if (lVar12 <= (long)uVar14) goto LAB_0011b2c8;
        if (*(long *)(lVar15 + uVar14 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar13);
        }
        if (*(char *)(lVar16 + 0x90) != '\0') {
          puVar5 = *(undefined8 **)(lVar16 + 0x88);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0011b2a8;
          lVar12 = puVar5[-1];
          if (0 < lVar12) {
            uVar17 = *puVar5;
            goto LAB_0011af6b;
          }
          goto LAB_0011b2ab;
        }
        goto LAB_0011b3a4;
      }
LAB_0011b5c0:
      lVar12 = 0;
      goto LAB_0011b2c8;
    }
    goto LAB_0011b2a8;
  }
  lVar12 = 0;
LAB_0011b36b:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar12,
             "p_variant","variant_defines.size()","",false,false);
LAB_0011b3a4:
  uVar17 = 0;
LAB_0011af6b:
  uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar10,local_d8,uVar17);
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  if (local_d0 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(local_d0 + -8);
    if (2 < lVar12) {
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&local_d0);
      lVar16 = *(long *)(local_d0 + 0x60);
      if (lVar16 == 0) {
        plVar1 = *(long **)(local_d0 + 0x70);
        if (plVar1 == (long *)0x0) goto LAB_0011b2a8;
        lVar12 = plVar1[-1];
        if (0 < lVar12) {
          lVar16 = *plVar1;
          goto LAB_0011afd3;
        }
        goto LAB_0011b2ab;
      }
LAB_0011afd3:
      lVar12 = *(long *)(local_d0 + -8);
      if (lVar12 < 4) {
LAB_0011b33f:
        lVar16 = 3;
        goto LAB_0011b4db;
      }
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&local_d0);
      lVar15 = *(long *)(local_d0 + 0x88);
      if (lVar15 == 0) {
        plVar1 = *(long **)(local_d0 + 0x98);
        if (plVar1 == (long *)0x0) goto LAB_0011b2a8;
        lVar12 = plVar1[-1];
        if (lVar12 < 1) goto LAB_0011b2ab;
        lVar15 = *plVar1;
      }
      lVar12 = *(long *)(local_d0 + -8);
      if (lVar12 < 3) goto LAB_0011b4bb;
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&local_d0);
      lVar7 = local_d0;
      if (*(long *)(local_d0 + 0x60) == 0) {
        if (*(long *)(local_d0 + 0x70) == 0) {
LAB_0011b630:
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(*(long *)(local_d0 + 0x70) + -8);
          if (0 < lVar12) {
            CowData<RID>::_copy_on_write((CowData<RID> *)(local_d0 + 0x70));
            **(long **)(lVar7 + 0x70) = lVar15;
            if (local_d0 == 0) {
              lVar12 = 0;
              goto LAB_0011b33f;
            }
            goto LAB_0011b04e;
          }
        }
LAB_0011b633:
        lVar16 = 0;
        goto LAB_0011b4db;
      }
      *(long *)(local_d0 + 0x60) = lVar15;
LAB_0011b04e:
      lVar12 = *(long *)(local_d0 + -8);
      if (lVar12 < 4) goto LAB_0011b33f;
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&local_d0);
      lVar15 = local_d0;
      if (*(long *)(local_d0 + 0x88) == 0) {
        if (*(long *)(local_d0 + 0x98) == 0) goto LAB_0011b630;
        lVar12 = *(long *)(*(long *)(local_d0 + 0x98) + -8);
        if (lVar12 < 1) goto LAB_0011b633;
        CowData<RID>::_copy_on_write((CowData<RID> *)(local_d0 + 0x98));
        **(long **)(lVar15 + 0x98) = lVar16;
      }
      else {
        *(long *)(local_d0 + 0x88) = lVar16;
      }
      uVar10 = RenderingDevice::get_singleton();
      uVar14 = *(ulong *)(this + 0x460);
      local_e8 = 0;
      if (*(long *)(this + 0x300) == 0) {
        lVar12 = 0;
LAB_0011b65b:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar12,
                   "p_variant","variant_defines.size()","",false,false);
      }
      else {
        lVar12 = *(long *)(*(long *)(this + 0x300) + -8);
        if (lVar12 < 1) goto LAB_0011b65b;
        pcVar3 = *(char **)(this + 0x310);
        if (pcVar3 == (char *)0x0) {
LAB_0011b2a8:
          lVar12 = 0;
LAB_0011b2ab:
          uVar14 = 0;
LAB_0011b2c8:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar12 = *(long *)(pcVar3 + -8);
        if (lVar12 < 1) goto LAB_0011b2ab;
        if (*pcVar3 == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_0011b1d2;
        }
        if ((uVar14 == 0) || (*(uint *)(this + 0x3bc) <= (uint)uVar14)) {
LAB_0011b710:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
        }
        else {
          lVar16 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b8)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x3a8) +
                            ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b8)) * 8);
          if (*(int *)(lVar16 + 0x98) != (int)(uVar14 >> 0x20)) {
            if (*(int *)(lVar16 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_0011b710;
          }
          iVar13 = (int)lVar16;
          if (*(char *)(lVar16 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            lVar12 = *(long *)(this + 0x360);
            if (lVar12 != 0) {
              lVar15 = 0;
              do {
                if (*(long *)(lVar12 + -8) <= lVar15) break;
                if (*(char *)(lVar12 + lVar15) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2,iVar13);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar2,iVar13);
                }
                lVar12 = *(long *)(this + 0x360);
                lVar15 = lVar15 + 1;
              } while (lVar12 != 0);
            }
          }
          puVar4 = *(uint **)(this + 800);
          if (puVar4 == (uint *)0x0) goto LAB_0011b2a8;
          lVar12 = *(long *)(puVar4 + -2);
          if (lVar12 < 1) goto LAB_0011b2ab;
          uVar14 = (ulong)*puVar4;
          lVar15 = *(long *)(lVar16 + 0x68);
          if (lVar15 == 0) goto LAB_0011b5c0;
          lVar12 = *(long *)(lVar15 + -8);
          if (lVar12 <= (long)uVar14) goto LAB_0011b2c8;
          if (*(long *)(lVar15 + uVar14 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar2,iVar13);
          }
          if (*(char *)(lVar16 + 0x90) != '\0') {
            puVar5 = *(undefined8 **)(lVar16 + 0x88);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0011b2a8;
            lVar12 = puVar5[-1];
            if (lVar12 < 1) goto LAB_0011b2ab;
            local_e8 = *puVar5;
          }
        }
      }
LAB_0011b1d2:
      uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                         (uVar10,local_d8,local_e8,0,0);
      *(undefined8 *)(param_1 + 0xb0) = uVar10;
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_d0);
      lVar12 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_0011b73a:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_0011b4bb:
  lVar16 = 2;
LAB_0011b4db:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar16,lVar12,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* RendererRD::TextureStorage::render_target_get_sdf_framebuffer(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_sdf_framebuffer(TextureStorage *this,ulong param_2)

{
  RenderTarget *pRVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    pRVar1 = (RenderTarget *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
             *(long *)(*(long *)(this + 0x298) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(pRVar1 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(long *)(pRVar1 + 0x88) == 0) {
        _render_target_allocate_sdf(this,pRVar1);
      }
      return *(undefined8 *)(pRVar1 + 0x88);
    }
    if (*(int *)(pRVar1 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_sdf_framebuffer",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",4000,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* RendererRD::TextureStorage::decal_initialize(RID) */

void __thiscall
RendererRD::TextureStorage::decal_initialize(TextureStorage *this,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_48;
  Dependency local_40 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  local_48 = 0;
  puVar2 = (undefined8 *)auStack_98;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  auStack_98._0_4_ = 0;
  auStack_98._4_12_ = SUB1612((undefined1  [16])0x0,4);
  local_a0 = 0x40000000;
  local_a8 = _LC367;
  local_60 = 0xfffff;
  local_68 = _LC273;
  local_18 = 2;
  local_5c = _LC368;
  local_88 = (undefined1  [16])0x0;
  local_50 = _LC369;
  local_78 = _LC77;
  uStack_74 = _LC77;
  uStack_70 = _LC77;
  uStack_6c = _LC77;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  RID_Alloc<RendererRD::TextureStorage::Decal,true>::initialize_rid
            ((RID_Alloc<RendererRD::TextureStorage::Decal,true> *)(this + 0x1c0),param_2,&local_a8);
  Dependency::~Dependency(local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::RenderTarget::get_framebuffer() */

void __thiscall RendererRD::TextureStorage::RenderTarget::get_framebuffer(RenderTarget *this)

{
  RenderTarget *pRVar1;
  
  pRVar1 = this + 0x10;
  if (*(long *)(this + 0xe8) != 0) {
    pRVar1 = this + 0xe8;
  }
  if (*(int *)(this + 0x30) != 0) {
    FramebufferCacheRD::get_cache_multiview<RID,RID>
              (FramebufferCacheRD::singleton,*(undefined4 *)(this + 8),*(undefined8 *)(this + 0x28),
               *(undefined8 *)pRVar1);
    return;
  }
  FramebufferCacheRD::get_cache_multiview<RID>
            (FramebufferCacheRD::singleton,*(undefined4 *)(this + 8),*(undefined8 *)pRVar1);
  return;
}



/* RendererRD::TextureStorage::render_target_do_msaa_resolve(RID) */

void __thiscall
RendererRD::TextureStorage::render_target_do_msaa_resolve(TextureStorage *this,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RenderTarget *this_00;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    this_00 = (RenderTarget *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
              *(long *)(*(long *)(this + 0x298) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(this_00 + 0x150) == (int)(param_2 >> 0x20)) {
      if (this_00[0x34] != (RenderTarget)0x0) {
        uVar3 = RenderingDevice::get_singleton();
        local_38 = 0;
        local_30 = 0;
        local_40 = 0;
        uVar4 = RenderTarget::get_framebuffer(this_00);
        RenderingDevice::draw_list_begin(_LC77,uVar3,uVar4,0,auStack_48,0,&local_38,0);
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
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        this_00[0x34] = (RenderTarget)0x0;
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bb13;
    }
    if (*(int *)(this_00 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("render_target_do_msaa_resolve",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe54,
                     "Parameter \"rt\" is null.",0,0);
    return;
  }
LAB_0011bb13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::TextureStorage::render_target_get_rd_framebuffer(RID) */

undefined8 __thiscall
RendererRD::TextureStorage::render_target_get_rd_framebuffer(TextureStorage *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  RenderTarget *this_00;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    this_00 = (RenderTarget *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
              *(long *)(*(long *)(this + 0x298) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    iVar1 = *(int *)(this_00 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = RenderTarget::get_framebuffer(this_00);
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("render_target_get_rd_framebuffer",
                   "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xe72,
                   "Parameter \"rt\" is null.",0,0);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_do_clear_request(RID) */

void __thiscall
RendererRD::TextureStorage::render_target_do_clear_request(TextureStorage *this,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RenderTarget *this_00;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_48 [8];
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2ac))) {
    this_00 = (RenderTarget *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2a8)) * 0x158 +
              *(long *)(*(long *)(this + 0x298) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2a8)) * 8));
    if (*(int *)(this_00 + 0x150) == (int)(param_2 >> 0x20)) {
      if (this_00[0x139] != (RenderTarget)0x0) {
        local_40 = 0;
        if (this_00[0x45] == (RenderTarget)0x0) {
          local_68 = *(undefined8 *)(this_00 + 0x13c);
          uStack_60 = *(undefined8 *)(this_00 + 0x144);
        }
        else {
          fVar7 = *(float *)(this_00 + 0x144);
          uVar2 = *(undefined4 *)(this_00 + 0x148);
          if (_LC62 <= fVar7) {
            fVar7 = powf((float)(((double)fVar7 + __LC64) * __LC65),_LC66);
          }
          else {
            fVar7 = _LC63 * fVar7;
          }
          fVar8 = *(float *)(this_00 + 0x140);
          if (_LC62 <= fVar8) {
            fVar8 = powf((float)(((double)fVar8 + __LC64) * __LC65),_LC66);
          }
          else {
            fVar8 = _LC63 * fVar8;
          }
          fVar6 = *(float *)(this_00 + 0x13c);
          if (_LC62 <= fVar6) {
            fVar6 = powf((float)(((double)fVar6 + __LC64) * __LC65),_LC66);
          }
          else {
            fVar6 = fVar6 * _LC63;
          }
          local_68 = CONCAT44(fVar8,fVar6);
          uStack_60 = CONCAT44(uVar2,fVar7);
        }
        Vector<Color>::push_back(local_68,uStack_60,local_48);
        uVar4 = RenderingDevice::get_singleton();
        local_38 = 0;
        local_30 = 0;
        uVar5 = RenderTarget::get_framebuffer(this_00);
        RenderingDevice::draw_list_begin(uVar4,uVar5,1,local_48,0,&local_38);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        lVar3 = local_40;
        this_00[0x139] = (RenderTarget)0x0;
        this_00[0x34] = (RenderTarget)0x0;
        if (local_40 != 0) {
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bf2e;
    }
    if (*(int *)(this_00 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("render_target_do_clear_request",
                     "servers/rendering/renderer_rd/storage_rd/texture_storage.cpp",0xec7,
                     "Parameter \"rt\" is null.",0,0);
    return;
  }
LAB_0011bf2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::render_target_create() */

undefined8 __thiscall RendererRD::TextureStorage::render_target_create(TextureStorage *this)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  undefined8 local_178 [2];
  undefined8 local_168;
  long local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined1 local_132;
  undefined1 local_130 [16];
  undefined8 local_120;
  long local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_c0 = _LC78;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_134 = 0;
  local_178[0] = 0;
  local_168 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_138 = 0;
  local_132 = 0;
  local_120 = 0;
  local_110 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = _LC373;
  local_40 = 0;
  local_90 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_3c = __LC122;
  uStack_34 = _UNK_00128d08;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_50 = 2;
  local_48 = 0;
  _update_render_target(this,(RenderTarget *)local_178);
  uVar3 = RID_Alloc<RendererRD::TextureStorage::RenderTarget,false>::make_rid
                    ((RID_Alloc<RendererRD::TextureStorage::RenderTarget,false> *)(this + 0x290),
                     (RenderTarget *)local_178);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar5 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar2 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar4) != 0) {
            *(int *)(local_70._8_8_ + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar4 * 2) = 0;
            pvVar5 = (void *)local_70._0_8_;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011c157;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_0011c157:
  lVar4 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_158;
  if (local_158 != 0) {
    LOCK();
    plVar1 = (long *)(local_158 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_158 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* RendererRD::ForwardIDStorage::allocate_forward_id(RendererRD::ForwardIDType) */

undefined8 RendererRD::ForwardIDStorage::allocate_forward_id(void)

{
  return 0xffffffff;
}



/* RendererRD::ForwardIDStorage::free_forward_id(RendererRD::ForwardIDType, int) */

void RendererRD::ForwardIDStorage::free_forward_id(void)

{
  return;
}



/* RendererRD::ForwardIDStorage::map_forward_id(RendererRD::ForwardIDType, int, unsigned int,
   unsigned long) */

void RendererRD::ForwardIDStorage::map_forward_id(void)

{
  return;
}



/* RendererRD::ForwardIDStorage::uses_forward_ids() const */

undefined8 RendererRD::ForwardIDStorage::uses_forward_ids(void)

{
  return 0;
}



/* RendererRD::TextureStorage::render_target_get_override_velocity_depth(RID) const */

undefined8 RendererRD::TextureStorage::render_target_get_override_velocity_depth(void)

{
  return 0;
}



/* RendererRD::TextureStorage::render_target_set_velocity_target_size(RID, Vector2i const&) */

void RendererRD::TextureStorage::render_target_set_velocity_target_size(void)

{
  return;
}



/* RendererRD::TextureStorage::render_target_get_velocity_target_size(RID) const */

undefined8 RendererRD::TextureStorage::render_target_get_velocity_target_size(void)

{
  return 0;
}



/* RendererSceneRenderRD::setup_added_decal(Transform3D const&, Vector3 const&) */

void RendererSceneRenderRD::setup_added_decal(Transform3D *param_1,Vector3 *param_2)

{
  return;
}



/* CanvasSdfShaderRD::~CanvasSdfShaderRD() */

void __thiscall CanvasSdfShaderRD::~CanvasSdfShaderRD(CanvasSdfShaderRD *this)

{
  *(undefined ***)this = &PTR__CanvasSdfShaderRD_00127920;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* CanvasSdfShaderRD::~CanvasSdfShaderRD() */

void __thiscall CanvasSdfShaderRD::~CanvasSdfShaderRD(CanvasSdfShaderRD *this)

{
  *(undefined ***)this = &PTR__CanvasSdfShaderRD_00127920;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDeviceCommons::DataFormat>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::DataFormat>::_copy_on_write(void)

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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e498(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::TextureStorage::update_decal_buffer(PagedArray<RID> const&, Transform3D const&)
   [clone .cold] */

void RendererRD::TextureStorage::update_decal_buffer(PagedArray *param_1,Transform3D *param_2)

{
  code *pcVar1;
  int in_EDX;
  
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::_clear_render_target(RendererRD::TextureStorage::RenderTarget*)
   [clone .cold] */

void RendererRD::TextureStorage::_clear_render_target(RenderTarget *param_1)

{
  code *pcVar1;
  int in_EDX;
  
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_EDX + 0x80000000U);
  }
  _DAT_00000078 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::TextureStorage::render_target_free(RID) [clone .cold] */

void RendererRD::TextureStorage::render_target_free
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_5);
  }
  DAT_00000080 = 0;
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



/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<unsigned_char>>::_copy_on_write(void)

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



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Image>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::TextureStorage::_update_render_target(RendererRD::TextureStorage::RenderTarget*)
   [clone .cold] */

void RendererRD::TextureStorage::_update_render_target(RenderTarget *param_1)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
  DAT_00000080 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::TextureStorage::update_decal_atlas() [clone .cold] */

void RendererRD::TextureStorage::update_decal_atlas(void)

{
  code *pcVar1;
  int in_EDX;
  ulong uVar2;
  ulong extraout_RDX;
  int *unaff_RBX;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  
  uVar2 = (ulong)(in_EDX + 0x80000000U);
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
    uVar2 = extraout_RDX;
  }
  RendererRD::CopyEffects::copy_to_atlas_fb
            (in_stack_00000010,_DAT_00000010,*in_stack_00000008,unaff_RBX + 2,in_stack_00000020,0,
             0 < *unaff_RBX,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SortArray<RendererRD::TextureStorage::DecalAtlas::SortItem,
   _DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>, true>::introsort(long,
   long, RendererRD::TextureStorage::DecalAtlas::SortItem*, long) const [clone .isra.0] */

void SortArray<RendererRD::TextureStorage::DecalAtlas::SortItem,_DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>,true>
     ::introsort(long param_1,long param_2,SortItem *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  SortItem *pSVar11;
  long lVar12;
  long lVar13;
  SortItem *pSVar14;
  SortItem *pSVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  SortItem *pSVar19;
  long in_FS_OFFSET;
  bool bVar20;
  int iVar21;
  long local_e0;
  long local_c0;
  
  lVar10 = param_2 - param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar10) {
    if (param_4 != 0) {
      pSVar19 = param_3 + param_1 * 0x20;
      lVar18 = param_2;
      local_c0 = param_4;
LAB_0011e71e:
      iVar21 = *(int *)(pSVar19 + 0x14);
      local_c0 = local_c0 + -1;
      pSVar11 = param_3 + ((lVar10 >> 1) + param_1) * 0x20;
      iVar1 = *(int *)(pSVar11 + 0x14);
      bVar20 = iVar1 < iVar21;
      if (iVar21 == iVar1) {
        bVar20 = *(int *)(pSVar11 + 0x10) < *(int *)(pSVar19 + 0x10);
      }
      pSVar14 = param_3 + lVar18 * 0x20 + -0x20;
      iVar2 = *(int *)(pSVar14 + 0x14);
      if (bVar20) {
        bVar20 = iVar2 < iVar1;
        if (iVar1 == iVar2) {
          bVar20 = *(int *)(pSVar14 + 0x10) < *(int *)(pSVar11 + 0x10);
        }
        pSVar15 = pSVar11;
        iVar17 = iVar1;
        if (!bVar20) {
          bVar20 = iVar2 < iVar21;
          if (iVar21 == iVar2) {
            bVar20 = *(int *)(pSVar14 + 0x10) < *(int *)(pSVar19 + 0x10);
          }
          pSVar15 = pSVar14;
          iVar17 = iVar2;
          if (!bVar20) {
            pSVar15 = pSVar19;
            iVar17 = iVar21;
          }
        }
      }
      else {
        bVar20 = iVar2 < iVar21;
        if (iVar21 == iVar2) {
          bVar20 = *(int *)(pSVar14 + 0x10) < *(int *)(pSVar19 + 0x10);
        }
        pSVar15 = pSVar19;
        iVar17 = iVar21;
        if (!bVar20) {
          bVar20 = iVar2 < iVar1;
          if (iVar1 == iVar2) {
            bVar20 = *(int *)(pSVar14 + 0x10) < *(int *)(pSVar11 + 0x10);
          }
          pSVar15 = pSVar14;
          iVar17 = iVar2;
          if (!bVar20) {
            pSVar15 = pSVar11;
            iVar17 = iVar1;
          }
        }
      }
      iVar21 = *(int *)(pSVar15 + 0x10);
      pSVar11 = pSVar19;
      param_2 = param_1;
      lVar10 = lVar18;
      do {
        if (*(int *)(pSVar11 + 0x14) == iVar17) {
          if (*(int *)(pSVar11 + 0x10) <= iVar21) goto LAB_0011e7f4;
LAB_0011e7d2:
          if (lVar18 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_0011e7f4;
          }
        }
        else {
          if (iVar17 < *(int *)(pSVar11 + 0x14)) goto LAB_0011e7d2;
LAB_0011e7f4:
          lVar10 = lVar10 + -1;
          pSVar14 = param_3 + lVar10 * 0x20;
          while( true ) {
            bVar20 = *(int *)(pSVar14 + 0x14) < iVar17;
            if (*(int *)(pSVar14 + 0x14) == iVar17) {
              bVar20 = *(int *)(pSVar14 + 0x10) < iVar21;
            }
            if (!bVar20) goto joined_r0x0011e835;
            if (param_1 == lVar10) break;
            lVar10 = lVar10 + -1;
            pSVar14 = pSVar14 + -0x20;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
joined_r0x0011e835:
          if (lVar10 <= param_2) goto LAB_0011e8ca;
          uVar4 = *(undefined8 *)(pSVar14 + 8);
          uVar6 = *(undefined8 *)pSVar11;
          uVar7 = *(undefined8 *)(pSVar11 + 8);
          uVar8 = *(undefined8 *)(pSVar11 + 0x10);
          uVar5 = *(undefined8 *)(pSVar11 + 0x18);
          *(undefined8 *)pSVar11 = *(undefined8 *)pSVar14;
          *(undefined8 *)(pSVar11 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pSVar14 + 0x18);
          *(undefined8 *)(pSVar11 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
          *(undefined8 *)(pSVar11 + 0x18) = uVar4;
          *(undefined8 *)pSVar14 = uVar6;
          *(undefined8 *)(pSVar14 + 8) = uVar7;
          *(undefined8 *)(pSVar14 + 0x10) = uVar8;
          *(undefined8 *)(pSVar14 + 0x18) = uVar5;
        }
        pSVar11 = pSVar11 + 0x20;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_0011ea0e:
    local_e0 = lVar10 + -2 >> 1;
    lVar18 = local_e0 * 2 + 2;
    pSVar19 = param_3 + (param_1 + lVar10 + -1) * 0x20;
    pSVar11 = param_3 + (param_1 + local_e0) * 0x20;
    do {
      uVar4 = *(undefined8 *)pSVar11;
      uVar6 = *(undefined8 *)(pSVar11 + 8);
      uVar7 = *(undefined8 *)(pSVar11 + 0x10);
      uVar8 = *(undefined8 *)(pSVar11 + 0x18);
      pSVar14 = pSVar11;
      lVar16 = lVar18;
      lVar9 = local_e0;
      while (lVar16 < lVar10) {
        pSVar15 = param_3 + (param_1 + lVar16) * 0x20;
        pSVar14 = param_3 + (param_1 + lVar16 + -1) * 0x20;
        bVar20 = *(int *)(pSVar14 + 0x14) < *(int *)(pSVar15 + 0x14);
        if (*(int *)(pSVar14 + 0x14) == *(int *)(pSVar15 + 0x14)) {
          bVar20 = *(int *)(pSVar14 + 0x10) < *(int *)(pSVar15 + 0x10);
        }
        lVar13 = lVar16 + -1;
        lVar12 = lVar16;
        if (!bVar20) {
          lVar12 = lVar16 + 1;
          lVar13 = lVar16;
          pSVar14 = pSVar15;
        }
        uVar5 = *(undefined8 *)(pSVar14 + 8);
        pSVar15 = param_3 + (lVar9 + param_1) * 0x20;
        *(undefined8 *)pSVar15 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar15 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pSVar14 + 0x18);
        *(undefined8 *)(pSVar15 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
        *(undefined8 *)(pSVar15 + 0x18) = uVar5;
        lVar9 = lVar13;
        lVar16 = lVar12 * 2;
      }
      if (lVar16 == lVar10) {
        uVar5 = *(undefined8 *)(pSVar19 + 8);
        *(undefined8 *)pSVar14 = *(undefined8 *)pSVar19;
        *(undefined8 *)(pSVar14 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pSVar19 + 0x18);
        *(undefined8 *)(pSVar14 + 0x10) = *(undefined8 *)(pSVar19 + 0x10);
        *(undefined8 *)(pSVar14 + 0x18) = uVar5;
        lVar9 = lVar10 + -1;
        pSVar14 = pSVar19;
      }
      iVar21 = (int)((ulong)uVar7 >> 0x20);
      lVar16 = lVar9 + -1 >> 1;
      if (local_e0 < lVar9) {
        do {
          pSVar14 = param_3 + (param_1 + lVar16) * 0x20;
          bVar20 = iVar21 < *(int *)(pSVar14 + 0x14);
          if (*(int *)(pSVar14 + 0x14) == iVar21) {
            bVar20 = (int)uVar7 < *(int *)(pSVar14 + 0x10);
          }
          pSVar15 = param_3 + (lVar9 + param_1) * 0x20;
          if (!bVar20) break;
          uVar5 = *(undefined8 *)(pSVar14 + 8);
          *(undefined8 *)pSVar15 = *(undefined8 *)pSVar14;
          *(undefined8 *)(pSVar15 + 8) = uVar5;
          uVar5 = *(undefined8 *)(pSVar14 + 0x18);
          *(undefined8 *)(pSVar15 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
          *(undefined8 *)(pSVar15 + 0x18) = uVar5;
          bVar20 = local_e0 < lVar16;
          pSVar15 = pSVar14;
          lVar9 = lVar16;
          lVar16 = (lVar16 + -1) / 2;
        } while (bVar20);
        *(undefined8 *)pSVar15 = uVar4;
        *(undefined8 *)(pSVar15 + 8) = uVar6;
        *(undefined8 *)(pSVar15 + 0x10) = uVar7;
        *(undefined8 *)(pSVar15 + 0x18) = uVar8;
        if (local_e0 == 0) goto LAB_0011ebf1;
      }
      else {
        *(undefined8 *)pSVar14 = uVar4;
        *(undefined8 *)(pSVar14 + 8) = uVar6;
        *(undefined8 *)(pSVar14 + 0x10) = uVar7;
        *(undefined8 *)(pSVar14 + 0x18) = uVar8;
      }
      local_e0 = local_e0 + -1;
      pSVar11 = pSVar11 + -0x20;
      lVar18 = lVar18 + -2;
    } while( true );
  }
  goto LAB_0011e9dc;
LAB_0011e8ca:
  introsort(param_2,lVar18,param_3,local_c0);
  lVar10 = param_2 - param_1;
  if (lVar10 < 0x11) goto LAB_0011e9dc;
  lVar18 = param_2;
  if (local_c0 == 0) goto LAB_0011ea0e;
  goto LAB_0011e71e;
LAB_0011ebf1:
  pSVar11 = param_3 + param_1 * 0x20;
  pSVar19 = param_3 + (param_2 + -2) * 0x20;
  lVar10 = (param_2 + -1) - param_1;
  do {
    uVar4 = *(undefined8 *)(pSVar11 + 8);
    uVar6 = *(undefined8 *)(pSVar19 + 0x20);
    uVar7 = *(undefined8 *)(pSVar19 + 0x28);
    uVar8 = *(undefined8 *)(pSVar19 + 0x30);
    uVar5 = *(undefined8 *)(pSVar19 + 0x38);
    *(undefined8 *)(pSVar19 + 0x20) = *(undefined8 *)pSVar11;
    *(undefined8 *)(pSVar19 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(pSVar11 + 0x18);
    *(undefined8 *)(pSVar19 + 0x30) = *(undefined8 *)(pSVar11 + 0x10);
    *(undefined8 *)(pSVar19 + 0x38) = uVar4;
    iVar21 = (int)((ulong)uVar8 >> 0x20);
    if (lVar10 < 3) {
      pSVar14 = pSVar11;
      if (lVar10 == 2) goto LAB_0011ed9f;
    }
    else {
      lVar18 = 2;
      lVar16 = 0;
      do {
        pSVar15 = param_3 + (param_1 + lVar18) * 0x20;
        pSVar14 = param_3 + (param_1 + lVar18 + -1) * 0x20;
        bVar20 = *(int *)(pSVar14 + 0x14) < *(int *)(pSVar15 + 0x14);
        if (*(int *)(pSVar14 + 0x14) == *(int *)(pSVar15 + 0x14)) {
          bVar20 = *(int *)(pSVar14 + 0x10) < *(int *)(pSVar15 + 0x10);
        }
        lVar9 = lVar18 + -1;
        lVar13 = lVar18;
        if (!bVar20) {
          lVar13 = lVar18 + 1;
          lVar9 = lVar18;
          pSVar14 = pSVar15;
        }
        uVar4 = *(undefined8 *)(pSVar14 + 8);
        lVar18 = lVar13 * 2;
        pSVar15 = param_3 + (param_1 + lVar16) * 0x20;
        *(undefined8 *)pSVar15 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar15 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pSVar14 + 0x18);
        *(undefined8 *)(pSVar15 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
        *(undefined8 *)(pSVar15 + 0x18) = uVar4;
        lVar16 = lVar9;
      } while (lVar10 != lVar18 && SBORROW8(lVar10,lVar18) == lVar10 + lVar13 * -2 < 0);
      if (lVar10 == lVar18) {
LAB_0011ed9f:
        uVar4 = *(undefined8 *)(pSVar19 + 8);
        *(undefined8 *)pSVar14 = *(undefined8 *)pSVar19;
        *(undefined8 *)(pSVar14 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pSVar19 + 0x18);
        *(undefined8 *)(pSVar14 + 0x10) = *(undefined8 *)(pSVar19 + 0x10);
        *(undefined8 *)(pSVar14 + 0x18) = uVar4;
        lVar9 = lVar10 + -1;
        lVar18 = lVar10 + -2 >> 1;
      }
      else {
        lVar18 = (lVar9 + -1) / 2;
        if (lVar9 == 0) goto LAB_0011e9a9;
      }
      do {
        pSVar15 = param_3 + (param_1 + lVar18) * 0x20;
        bVar20 = iVar21 < *(int *)(pSVar15 + 0x14);
        if (*(int *)(pSVar15 + 0x14) == iVar21) {
          bVar20 = (int)uVar8 < *(int *)(pSVar15 + 0x10);
        }
        pSVar14 = param_3 + (lVar9 + param_1) * 0x20;
        if (!bVar20) break;
        uVar4 = *(undefined8 *)(pSVar15 + 8);
        *(undefined8 *)pSVar14 = *(undefined8 *)pSVar15;
        *(undefined8 *)(pSVar14 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pSVar15 + 0x18);
        *(undefined8 *)(pSVar14 + 0x10) = *(undefined8 *)(pSVar15 + 0x10);
        *(undefined8 *)(pSVar14 + 0x18) = uVar4;
        bVar20 = lVar18 != 0;
        lVar9 = lVar18;
        pSVar14 = pSVar15;
        lVar18 = (lVar18 + -1) / 2;
      } while (bVar20);
    }
LAB_0011e9a9:
    pSVar19 = pSVar19 + -0x20;
    *(undefined8 *)pSVar14 = uVar6;
    *(undefined8 *)(pSVar14 + 8) = uVar7;
    *(undefined8 *)(pSVar14 + 0x10) = uVar8;
    *(undefined8 *)(pSVar14 + 0x18) = uVar5;
    bVar20 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar20);
LAB_0011e9dc:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* FramebufferCacheRD::_allocate_from_data(unsigned int, unsigned int, unsigned int, Vector<RID>
   const&, Vector<RenderingDevice::FramebufferPass> const&) */

long __thiscall
FramebufferCacheRD::_allocate_from_data
          (FramebufferCacheRD *this,uint param_1,uint param_2,uint param_3,Vector *param_4,
          Vector *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  Vector *pVVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint local_48;
  
  if ((*(long *)(param_5 + 8) == 0) || (*(long *)(*(long *)(param_5 + 8) + -8) == 0)) {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create(pVVar9,(long)param_4,0xffffffff);
  }
  else {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create_multipass(pVVar9,param_4,(long)param_5,0xffffffff);
  }
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_data",
                     "servers/rendering/renderer_rd/storage_rd/../framebuffer_cache_rd.h",0xab,
                     "Condition \"rid.is_null()\" is true. Returning: rid",0,0);
    return 0;
  }
  iVar8 = *(int *)(this + 0x18c);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x188);
    uVar6 = uVar7 + 1;
    *(uint *)(this + 0x188) = uVar6;
    uVar14 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
    *(undefined8 *)(this + 0x178) = uVar14;
    uVar14 = Memory::realloc_static
                       (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
    lVar20 = *(long *)(this + 0x178);
    *(undefined8 *)(this + 0x180) = uVar14;
    lVar11 = (ulong)uVar7 * 8;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) * 0x48,false);
    uVar6 = *(uint *)(this + 0x198);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    lVar20 = *(long *)(this + 0x180);
    uVar14 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    uVar6 = *(uint *)(this + 0x198);
    if (uVar6 == 0) {
      plVar18 = *(long **)(this + 0x180);
    }
    else {
      plVar18 = *(long **)(this + 0x180);
      lVar20 = *(long *)(this + 0x178);
      plVar3 = (long *)*plVar18;
      lVar15 = 0;
      plVar16 = plVar3;
      do {
        plVar17 = plVar16 + 1;
        lVar13 = *(long *)(lVar20 + lVar11) + lVar15;
        lVar15 = lVar15 + 0x48;
        *plVar16 = lVar13;
        plVar16 = plVar17;
      } while (plVar3 + uVar6 != plVar17);
    }
    iVar8 = uVar6 + *(int *)(this + 0x18c);
  }
  else {
    plVar18 = *(long **)(this + 0x180);
  }
  uVar6 = iVar8 - 1;
  *(uint *)(this + 0x18c) = uVar6;
  pauVar1 = *(undefined1 (**) [16])
             (plVar18[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
  pauVar1[1] = (undefined1  [16])0x0;
  *(long *)(pauVar1[1] + 8) = lVar10;
  lVar11 = *(long *)(param_4 + 8);
  *(undefined8 *)pauVar1[4] = 0;
  *(uint *)pauVar1[1] = param_2;
  *(uint *)pauVar1[4] = param_1;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  pauVar1[3] = (undefined1  [16])0x0;
  if (lVar11 == 0) {
LAB_0011f348:
    lVar11 = *(long *)(param_5 + 8);
    if ((lVar11 == 0) || (local_48 = (uint)*(undefined8 *)(lVar11 + -8), local_48 == 0)) {
LAB_0011f530:
      *(undefined8 *)*pauVar1 = 0;
      puVar2 = *(undefined8 **)(this + (ulong)param_3 * 8 + 0x1e0);
      *(undefined8 **)(*pauVar1 + 8) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
      }
      *(undefined1 (**) [16])(this + (ulong)param_3 * 8 + 0x1e0) = pauVar1;
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::framebuffer_set_invalidation_callback
                (uVar14,lVar10,FramebufferCacheRD::_framebuffer_invalidation_callback,pauVar1);
      *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
      return lVar10;
    }
    uVar6 = 0;
LAB_0011f36d:
    uVar7 = local_48 - 1;
    if (*(uint *)(pauVar1[3] + 4) < local_48) {
      pvVar4 = *(void **)(pauVar1[3] + 8);
      uVar6 = uVar7 >> 1 | uVar7;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
      *(uint *)(pauVar1[3] + 4) = uVar6;
      lVar11 = Memory::realloc_static(pvVar4,(ulong)uVar6 * 0x48,false);
      *(long *)(pauVar1[3] + 8) = lVar11;
      if (lVar11 == 0) {
LAB_0011f731:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar6 = *(uint *)pauVar1[3];
      lVar11 = *(long *)(param_5 + 8);
      if (uVar6 < local_48) goto LAB_0011f37b;
    }
    else {
LAB_0011f37b:
      uVar14 = _LC120;
      lVar20 = *(long *)(pauVar1[3] + 8);
      lVar15 = lVar20 + (ulong)uVar6 * 0x48;
      do {
        *(undefined8 *)(lVar15 + 8) = 0;
        lVar13 = lVar15 + 0x48;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *(undefined8 *)(lVar15 + 0x28) = 0;
        *(undefined8 *)(lVar15 + 0x38) = 0;
        *(undefined8 *)(lVar15 + 0x40) = uVar14;
        lVar15 = lVar13;
      } while (lVar20 + 0x48 + ((ulong)uVar6 + (ulong)(uVar7 - uVar6)) * 0x48 != lVar13);
    }
    *(uint *)pauVar1[3] = local_48;
  }
  else {
    uVar21 = *(ulong *)(lVar11 + -8);
    uVar6 = (uint)uVar21;
    if (uVar6 == 0) goto LAB_0011f348;
    uVar19 = uVar6 - 1;
    uVar7 = uVar19 >> 1 | uVar19;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    *(uint *)(pauVar1[2] + 4) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 8,false);
    *(long *)(pauVar1[2] + 8) = lVar11;
    if (lVar11 == 0) goto LAB_0011f731;
    uVar7 = *(uint *)pauVar1[2];
    if (uVar7 < uVar6) {
      memset((void *)(lVar11 + (ulong)uVar7 * 8),0,(ulong)(uVar19 - uVar7) * 8 + 8);
    }
    lVar20 = *(long *)(param_4 + 8);
    *(uint *)pauVar1[2] = uVar6;
    if (lVar20 == 0) {
      uVar12 = 0;
      lVar15 = 0;
      goto LAB_0011f4ae;
    }
    uVar12 = 0;
    do {
      lVar15 = *(long *)(lVar20 + -8);
      if (lVar15 <= (long)uVar12) goto LAB_0011f4ae;
      *(undefined8 *)(lVar11 + uVar12 * 8) = *(undefined8 *)(lVar20 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uVar21 & 0xffffffff));
    uVar6 = *(uint *)pauVar1[3];
    lVar11 = *(long *)(param_5 + 8);
    if (lVar11 != 0) {
      local_48 = (uint)*(undefined8 *)(lVar11 + -8);
      if (local_48 < uVar6) goto LAB_0011f24e;
      if (local_48 <= uVar6) goto LAB_0011f32d;
      goto LAB_0011f36d;
    }
    if (uVar6 == 0) goto LAB_0011f530;
    local_48 = 0;
LAB_0011f24e:
    uVar21 = (ulong)local_48;
    lVar11 = uVar21 * 0x48;
    do {
      lVar20 = *(long *)(pauVar1[3] + 8) + lVar11;
      if (*(long *)(lVar20 + 0x38) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x38) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x38);
          *(undefined8 *)(lVar20 + 0x38) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x28) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x28) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x28);
          *(undefined8 *)(lVar20 + 0x28) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x18) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x18) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x18);
          *(undefined8 *)(lVar20 + 0x18) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 8) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 8) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 8);
          *(undefined8 *)(lVar20 + 8) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      uVar6 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar6;
      lVar11 = lVar11 + 0x48;
    } while (uVar6 < *(uint *)pauVar1[3]);
    *(uint *)pauVar1[3] = local_48;
    uVar6 = local_48;
LAB_0011f32d:
    if (uVar6 == 0) goto LAB_0011f530;
    lVar11 = *(long *)(param_5 + 8);
  }
  uVar12 = 0;
  while (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + -8);
    if (lVar15 <= (long)uVar12) goto LAB_0011f4ae;
    lVar11 = lVar11 + uVar12 * 0x48;
    lVar20 = uVar12 * 0x48 + *(long *)(pauVar1[3] + 8);
    if (*(long *)(lVar20 + 8) != *(long *)(lVar11 + 8)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 8),(CowData *)(lVar11 + 8));
    }
    if (*(long *)(lVar20 + 0x18) != *(long *)(lVar11 + 0x18)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x18),(CowData *)(lVar11 + 0x18));
    }
    if (*(long *)(lVar20 + 0x28) != *(long *)(lVar11 + 0x28)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x28),(CowData *)(lVar11 + 0x28));
    }
    if (*(long *)(lVar20 + 0x38) != *(long *)(lVar11 + 0x38)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x38),(CowData *)(lVar11 + 0x38));
    }
    uVar12 = uVar12 + 1;
    *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
    if (*(uint *)pauVar1[3] <= (uint)uVar12) goto LAB_0011f530;
    lVar11 = *(long *)(param_5 + 8);
  }
  lVar15 = 0;
LAB_0011f4ae:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar15,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* WARNING: Removing unreachable block (ram,0x0011fc58) */
/* WARNING: Removing unreachable block (ram,0x0011fd88) */
/* WARNING: Removing unreachable block (ram,0x0011ff50) */
/* WARNING: Removing unreachable block (ram,0x0011fd94) */
/* WARNING: Removing unreachable block (ram,0x0011fd9e) */
/* WARNING: Removing unreachable block (ram,0x0011ff30) */
/* WARNING: Removing unreachable block (ram,0x0011fdaa) */
/* WARNING: Removing unreachable block (ram,0x0011fdb4) */
/* WARNING: Removing unreachable block (ram,0x0011ff10) */
/* WARNING: Removing unreachable block (ram,0x0011fdc0) */
/* WARNING: Removing unreachable block (ram,0x0011fdca) */
/* WARNING: Removing unreachable block (ram,0x0011fef0) */
/* WARNING: Removing unreachable block (ram,0x0011fdd6) */
/* WARNING: Removing unreachable block (ram,0x0011fde0) */
/* WARNING: Removing unreachable block (ram,0x0011fed0) */
/* WARNING: Removing unreachable block (ram,0x0011fdec) */
/* WARNING: Removing unreachable block (ram,0x0011fdf6) */
/* WARNING: Removing unreachable block (ram,0x0011feb0) */
/* WARNING: Removing unreachable block (ram,0x0011fe02) */
/* WARNING: Removing unreachable block (ram,0x0011fe0c) */
/* WARNING: Removing unreachable block (ram,0x0011fe90) */
/* WARNING: Removing unreachable block (ram,0x0011fe14) */
/* WARNING: Removing unreachable block (ram,0x0011fe2a) */
/* WARNING: Removing unreachable block (ram,0x0011fe36) */
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, RendererRD::TextureStorage::DecalAtlas::Texture, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RendererRD::TextureStorage::DecalAtlas::Texture> > >::operator[](RID const&) */

undefined1 * __thiscall
HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
::operator[](HashMap<RID,RendererRD::TextureStorage::DecalAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererRD::TextureStorage::DecalAtlas::Texture>>>
             *this,RID *param_1)

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
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  void *local_b0;
  
  local_b0 = *(void **)(this + 8);
  lVar56 = *(long *)param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_b0 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_b0 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_b0;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      lVar56 = *(long *)param_1;
      if (local_b0 == (void *)0x0) goto LAB_001201bb;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_b0 + uVar39)) &&
         (local_b0 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_b0 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        lVar56 = *(long *)param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        memset(local_b0,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        lVar56 = *(long *)param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00120563;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = lVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar46;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        do {
          if (((uint)uVar54 == uVar44) &&
             (lVar56 == *(long *)(*(long *)((long)local_b0 + lVar45 * 8) + 0x10))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_b0 + (ulong)uVar53 * 8);
            goto LAB_0012018b;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar46;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar46, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar46,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00120563:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = lVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(long *)(*(long *)((long)local_b0 + lVar45 * 8) + 0x10) == lVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_b0 + (ulong)uVar44 * 8);
            *(undefined8 *)(pauVar42[1] + 8) = 0;
            pauVar42[2] = (undefined1  [16])0x0;
            goto LAB_0012018b;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar46;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar46, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar46, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_001201bb:
  if ((float)uVar55 * __LC189 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0012018b;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar56 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar52;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar46 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar56 + lVar46 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_b0 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar52;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar52;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar52;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar46 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar56 + lVar46 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_b0,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar41 = *(undefined8 *)param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x30,"");
  *pauVar42 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  *(undefined8 *)pauVar42[1] = uVar41;
  puVar2 = *(undefined8 **)(this + 0x20);
  pauVar42[2] = (undefined1  [16])0x0;
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar56 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = *(long *)param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar52;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lVar45 = SUB168(auVar13 * auVar29,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar56 + lVar45 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar52;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar52;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar46 + lVar45 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar52;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lVar45 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar56 + lVar45 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar45 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0012018b:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  undefined8 *puVar6;
  long lVar7;
  
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
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + -8);
    if (param_1 == lVar7) {
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
    lVar3 = lVar7 * 8;
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
LAB_00120ac8:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_00120ac8;
  if (param_1 <= lVar7) {
    puVar6 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar6 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00120b00:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
    }
    puVar6[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar6[-1];
LAB_00120a09:
    if (param_1 <= lVar3) goto LAB_00120981;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00120b00;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_00120a09;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar3 = 0;
  }
  memset(puVar6 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00120981:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00120cc0) */
/* WARNING: Removing unreachable block (ram,0x00120df0) */
/* WARNING: Removing unreachable block (ram,0x00120f69) */
/* WARNING: Removing unreachable block (ram,0x00120dfc) */
/* WARNING: Removing unreachable block (ram,0x00120e06) */
/* WARNING: Removing unreachable block (ram,0x00120f4b) */
/* WARNING: Removing unreachable block (ram,0x00120e12) */
/* WARNING: Removing unreachable block (ram,0x00120e1c) */
/* WARNING: Removing unreachable block (ram,0x00120f2d) */
/* WARNING: Removing unreachable block (ram,0x00120e28) */
/* WARNING: Removing unreachable block (ram,0x00120e32) */
/* WARNING: Removing unreachable block (ram,0x00120f0f) */
/* WARNING: Removing unreachable block (ram,0x00120e3e) */
/* WARNING: Removing unreachable block (ram,0x00120e48) */
/* WARNING: Removing unreachable block (ram,0x00120ef1) */
/* WARNING: Removing unreachable block (ram,0x00120e54) */
/* WARNING: Removing unreachable block (ram,0x00120e5e) */
/* WARNING: Removing unreachable block (ram,0x00120ed3) */
/* WARNING: Removing unreachable block (ram,0x00120e66) */
/* WARNING: Removing unreachable block (ram,0x00120e70) */
/* WARNING: Removing unreachable block (ram,0x00120eb8) */
/* WARNING: Removing unreachable block (ram,0x00120e78) */
/* WARNING: Removing unreachable block (ram,0x00120e8e) */
/* WARNING: Removing unreachable block (ram,0x00120e9a) */
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



/* RID_Alloc<RendererRD::TextureStorage::CanvasTexture, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00127940;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar11 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_00121113:
    if ((uint)uVar5 < (uint)uVar11) goto LAB_0012115b;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar6],false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar11) <= (uint)lVar6) break;
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
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
    uVar3 = *(uint *)(this + 0x18);
    uVar8 = (ulong)uVar3;
    puVar9 = *(undefined8 **)(this + 8);
    uVar11 = (ulong)uVar3;
    if (*(int *)(this + 0x1c) != 0) {
      uVar7 = 0;
      puVar10 = puVar9;
      do {
        lVar6 = (uVar7 % uVar8) * 0x90 + puVar10[uVar7 / uVar8];
        if ((-1 < *(int *)(lVar6 + 0x88)) &&
           (puVar9 = puVar10, uVar11 = uVar8, *(code **)(lVar6 + 0x68) != (code *)0x0)) {
          (**(code **)(lVar6 + 0x68))(1,*(undefined8 *)(lVar6 + 0x70));
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
          puVar10 = puVar9;
          uVar11 = uVar8;
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      goto LAB_00121113;
    }
    if (uVar3 != 0) goto LAB_0012115b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_0012115b:
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



/* RID_Alloc<RendererRD::TextureStorage::CanvasTexture, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::TextureStorage::Decal, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Decal,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::Decal,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00127980;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0012138b:
    if ((uint)uVar4 < uVar8) goto LAB_001213cb;
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
        lVar7 = (uVar6 % (ulong)uVar8) * 0xa0 + puVar5[uVar6 / uVar8];
        if (-1 < *(int *)(lVar7 + 0x98)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x68));
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0012138b;
    }
    if (uVar8 != 0) goto LAB_001213cb;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_001213cb:
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



/* RID_Alloc<RendererRD::TextureStorage::DecalInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::DecalInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::DecalInstance,false> *this)

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
  *(undefined ***)this = &PTR__RID_Alloc_001279a0;
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



/* RID_Alloc<RendererRD::TextureStorage::RenderTarget, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::RenderTarget,false>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::RenderTarget,false> *this)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar2 = *(uint *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001279c0;
  if (uVar2 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar10 = *(undefined8 **)(this + 8);
LAB_0012187a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_001218bd;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar10[lVar6],false);
      lVar7 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar7),false);
      if ((uint)(uVar5 / uVar8) <= (uint)lVar6) break;
      puVar10 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar2);
    print_error((String *)&local_58);
    pcVar3 = local_58;
    lVar6 = local_60;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar6 = local_60;
      }
    }
    local_60 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar10 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar11 = 0;
      do {
        lVar6 = (uVar11 % uVar8) * 0x158 + puVar10[uVar11 / uVar8];
        if (-1 < *(int *)(lVar6 + 0x150)) {
          pvVar9 = *(void **)(lVar6 + 0x108);
          if (pvVar9 != (void *)0x0) {
            if (*(int *)(lVar6 + 300) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x128) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)(lVar6 + 300) = 0;
                *(undefined1 (*) [16])(lVar6 + 0x118) = (undefined1  [16])0x0;
              }
              else {
                lVar7 = 0;
                do {
                  piVar4 = (int *)(*(long *)(lVar6 + 0x110) + lVar7);
                  if (*piVar4 != 0) {
                    *piVar4 = 0;
                    Memory::free_static(*(void **)((long)pvVar9 + lVar7 * 2),false);
                    pvVar9 = *(void **)(lVar6 + 0x108);
                    *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
                  }
                  lVar7 = lVar7 + 4;
                } while ((ulong)uVar2 << 2 != lVar7);
                *(undefined4 *)(lVar6 + 300) = 0;
                *(undefined1 (*) [16])(lVar6 + 0x118) = (undefined1  [16])0x0;
                if (pvVar9 == (void *)0x0) goto LAB_001217f7;
              }
            }
            Memory::free_static(pvVar9,false);
            Memory::free_static(*(void **)(lVar6 + 0x110),false);
          }
LAB_001217f7:
          if (*(long *)(lVar6 + 0x68) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x68) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(lVar6 + 0x68);
              *(undefined8 *)(lVar6 + 0x68) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar10 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar5);
      goto LAB_0012187a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_001218bd;
    Memory::free_static((void *)*puVar10,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar10 = *(undefined8 **)(this + 8);
LAB_001218bd:
  if (puVar10 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar10,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::TextureStorage::RenderTarget, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::RenderTarget,false>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::RenderTarget,false> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::TextureStorage::DecalInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::DecalInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::DecalInstance,false> *this)

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
  *(undefined ***)this = &PTR__RID_Alloc_001279a0;
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



/* RID_Alloc<RendererRD::TextureStorage::Decal, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Decal,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::Decal,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00127980;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_00121ccb:
    if ((uint)uVar4 < uVar8) goto LAB_00121d0b;
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
        lVar7 = (uVar6 % (ulong)uVar8) * 0xa0 + puVar5[uVar6 / uVar8];
        if (-1 < *(int *)(lVar7 + 0x98)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x68));
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_00121ccb;
    }
    if (uVar8 != 0) goto LAB_00121d0b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_00121d0b:
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



/* RID_Alloc<RendererRD::TextureStorage::CanvasTexture, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true>::allocate_rid
          (RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true> *this)

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
      goto LAB_00121ff7;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x90,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x88);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x24;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x90 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x88) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00121ff7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::TextureStorage::Texture, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::TextureStorage::Texture,true>::allocate_rid
          (RID_Alloc<RendererRD::TextureStorage::Texture,true> *this)

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
      goto LAB_00122356;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x118,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x110);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x46;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x118 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x110) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00122356:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = operator_new;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* RID_Alloc<RendererRD::TextureStorage::Texture, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Texture,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::Texture,true> *this)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  char *pcVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00127960;
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 == 0) {
    uVar8 = (ulong)*(uint *)(this + 0x1c);
    uVar10 = (ulong)*(uint *)(this + 0x18);
    puVar11 = *(undefined8 **)(this + 8);
LAB_00122852:
    if ((uint)uVar8 < (uint)uVar10) goto LAB_00122893;
    lVar9 = 0;
    while( true ) {
      Memory::free_static((void *)puVar11[lVar9],false);
      lVar5 = lVar9 * 8;
      lVar9 = lVar9 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar5),false);
      if ((uint)(uVar8 / uVar10) <= (uint)lVar9) break;
      puVar11 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar2);
    print_error((String *)&local_48);
    pcVar6 = local_48;
    if (local_48 == (char *)0x0) {
LAB_001226a9:
      if (local_50 == 0) goto LAB_001226bf;
LAB_001226b3:
      lVar9 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001226bf;
      local_50 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
      iVar3 = *(int *)(this + 0x1c);
      uVar2 = *(uint *)(this + 0x18);
      puVar11 = *(undefined8 **)(this + 8);
    }
    else {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001226a9;
      local_48 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
      if (local_50 != 0) goto LAB_001226b3;
LAB_001226bf:
      iVar3 = *(int *)(this + 0x1c);
      uVar2 = *(uint *)(this + 0x18);
      puVar11 = *(undefined8 **)(this + 8);
    }
    if (iVar3 != 0) {
      uVar10 = (ulong)uVar2;
      uVar12 = 0;
      do {
        lVar9 = (uVar12 % uVar10) * 0x118 + puVar11[uVar12 / uVar10];
        if (-1 < *(int *)(lVar9 + 0x110)) {
          pvVar4 = *(void **)(lVar9 + 0xb0);
          if (pvVar4 != (void *)0x0) {
            if (*(int *)(lVar9 + 0xd4) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar9 + 0xd0) * 4) != 0) {
                memset(*(void **)(lVar9 + 200),0,
                       (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar9 + 0xd0) * 4)
                       << 2);
              }
              *(undefined4 *)(lVar9 + 0xd4) = 0;
            }
            Memory::free_static(pvVar4,false);
            Memory::free_static(*(void **)(lVar9 + 0xc0),false);
            Memory::free_static(*(void **)(lVar9 + 0xb8),false);
            Memory::free_static(*(void **)(lVar9 + 200),false);
          }
          if (*(long *)(lVar9 + 0xa8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar9 + 0xa8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar5 = *(long *)(lVar9 + 0xa8);
              *(undefined8 *)(lVar9 + 0xa8) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          if (*(long *)(lVar9 + 0x90) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar9 + 0x90) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar5 = *(long *)(lVar9 + 0x90);
              *(undefined8 *)(lVar9 + 0x90) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          if ((*(long *)(lVar9 + 0x88) != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0'))
          {
            memdelete<Image>(*(Image **)(lVar9 + 0x88));
          }
          if (*(long *)(lVar9 + 0x68) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar9 + 0x68) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar5 = *(long *)(lVar9 + 0x68);
              *(undefined8 *)(lVar9 + 0x68) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          uVar10 = (ulong)*(uint *)(this + 0x18);
          puVar11 = *(undefined8 **)(this + 8);
        }
        uVar8 = (ulong)*(uint *)(this + 0x1c);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar8);
      goto LAB_00122852;
    }
    if (uVar2 != 0) goto LAB_00122893;
    Memory::free_static((void *)*puVar11,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar11 = *(undefined8 **)(this + 8);
LAB_00122893:
  if (puVar11 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar11,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::TextureStorage::Texture, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Texture,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::Texture,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RendererRD::TextureStorage::Texture::~Texture() */

void __thiscall RendererRD::TextureStorage::Texture::~Texture(Texture *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  
  pvVar2 = *(void **)(this + 0xb0);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0xd4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd0) * 4) != 0) {
        memset(*(void **)(this + 200),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd0) * 4) << 2);
      }
      *(undefined4 *)(this + 0xd4) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0xc0),false);
    Memory::free_static(*(void **)(this + 0xb8),false);
    Memory::free_static(*(void **)(this + 200),false);
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
    }
  }
  if (*(long *)(this + 0x90) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x90) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x90);
      *(undefined8 *)(this + 0x90) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x88) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x88));
    }
  }
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* RID_Alloc<RendererRD::TextureStorage::Texture, true>::initialize_rid(RID,
   RendererRD::TextureStorage::Texture const&) */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Texture,true>::initialize_rid
          (RID_Alloc<RendererRD::TextureStorage::Texture,true> *this,ulong param_2,
          undefined8 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  char *pcVar19;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    puVar18 = (undefined8 *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x118 +
              *(long *)(*(long *)(this + 8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(puVar18 + 0x22) < 0) {
      uVar13 = *(uint *)(puVar18 + 0x22) & 0x7fffffff;
      if (uVar13 == (uint)(param_2 >> 0x20)) {
        *(uint *)(puVar18 + 0x22) = uVar13;
        uVar14 = *(undefined8 *)((long)param_3 + 0x3c);
        uVar7 = *(undefined8 *)((long)param_3 + 0x44);
        uVar8 = *(undefined8 *)((long)param_3 + 0x4c);
        uVar9 = *(undefined8 *)((long)param_3 + 0x54);
        *puVar18 = *param_3;
        uVar3 = *(undefined4 *)(param_3 + 1);
        uVar10 = param_3[5];
        uVar11 = param_3[6];
        *(undefined8 *)((long)puVar18 + 0x3c) = uVar14;
        *(undefined8 *)((long)puVar18 + 0x44) = uVar7;
        *(undefined4 *)(puVar18 + 1) = uVar3;
        uVar14 = param_3[2];
        *(undefined8 *)((long)puVar18 + 0x4c) = uVar8;
        *(undefined8 *)((long)puVar18 + 0x54) = uVar9;
        puVar18[2] = uVar14;
        uVar14 = param_3[3];
        puVar18[5] = uVar10;
        puVar18[6] = uVar11;
        puVar18[3] = uVar14;
        puVar18[4] = param_3[4];
        *(undefined4 *)(puVar18 + 7) = *(undefined4 *)(param_3 + 7);
        uVar3 = *(undefined4 *)((long)param_3 + 0x5c);
        puVar18[0xd] = 0;
        lVar15 = param_3[0xd];
        *(undefined4 *)((long)puVar18 + 0x5c) = uVar3;
        if (lVar15 != 0) {
          CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::_ref
                    ((CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *)(puVar18 + 0xd),
                     (CowData *)(param_3 + 0xd));
        }
        *(undefined4 *)(puVar18 + 0xe) = *(undefined4 *)(param_3 + 0xe);
        puVar18[0xf] = param_3[0xf];
        uVar2 = *(undefined2 *)(param_3 + 0x10);
        puVar18[0x11] = 0;
        lVar15 = param_3[0x11];
        *(undefined2 *)(puVar18 + 0x10) = uVar2;
        if (lVar15 != 0) {
          puVar18[0x11] = lVar15;
          cVar12 = RefCounted::reference();
          if (cVar12 == '\0') {
            puVar18[0x11] = 0;
          }
        }
        puVar18[0x12] = 0;
        if (param_3[0x12] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar18 + 0x12),(CowData *)(param_3 + 0x12))
          ;
        }
        uVar14 = param_3[0x13];
        puVar18[0x15] = 0;
        lVar15 = param_3[0x15];
        puVar18[0x13] = uVar14;
        if (lVar15 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar18 + 0x15),(CowData *)(param_3 + 0x15));
        }
        puVar18[0x1a] = 0;
        *(undefined1 (*) [16])(puVar18 + 0x16) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar18 + 0x18) = (undefined1  [16])0x0;
        uVar1 = param_3[0x1a];
        puVar18[0x1a] = uVar1;
        if ((int)(uVar1 >> 0x20) != 0) {
          uVar13 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
          uVar1 = (ulong)uVar13 * 4;
          uVar14 = Memory::alloc_static(uVar1,false);
          puVar18[0x19] = uVar14;
          uVar14 = Memory::alloc_static((ulong)uVar13 * 8,false);
          puVar18[0x16] = uVar14;
          uVar14 = Memory::alloc_static(uVar1,false);
          puVar18[0x18] = uVar14;
          lVar15 = Memory::alloc_static(uVar1,false);
          puVar18[0x17] = lVar15;
          if (*(int *)((long)puVar18 + 0xd4) != 0) {
            lVar4 = puVar18[0x16];
            lVar5 = param_3[0x16];
            lVar16 = 0;
            lVar6 = param_3[0x18];
            lVar17 = puVar18[0x18];
            do {
              *(undefined8 *)(lVar4 + lVar16 * 8) = *(undefined8 *)(lVar5 + lVar16 * 8);
              *(undefined4 *)(lVar17 + lVar16 * 4) = *(undefined4 *)(lVar6 + lVar16 * 4);
              lVar16 = lVar16 + 1;
            } while ((uint)lVar16 < *(uint *)((long)puVar18 + 0xd4));
          }
          if (uVar13 != 0) {
            lVar4 = param_3[0x19];
            lVar5 = puVar18[0x19];
            lVar17 = 0;
            lVar6 = param_3[0x17];
            do {
              *(undefined4 *)(lVar5 + lVar17) = *(undefined4 *)(lVar4 + lVar17);
              *(undefined4 *)(lVar15 + lVar17) = *(undefined4 *)(lVar6 + lVar17);
              lVar17 = lVar17 + 4;
            } while (uVar1 - lVar17 != 0);
          }
        }
        uVar7 = param_3[0x20];
        uVar8 = param_3[0x21];
        puVar18[0x1b] = param_3[0x1b];
        uVar14 = param_3[0x1c];
        puVar18[0x20] = uVar7;
        puVar18[0x21] = uVar8;
        puVar18[0x1c] = uVar14;
        puVar18[0x1d] = param_3[0x1d];
        puVar18[0x1e] = param_3[0x1e];
        puVar18[0x1f] = param_3[0x1f];
        return;
      }
      pcVar19 = "Attempting to initialize the wrong RID";
      uVar14 = 0xfc;
    }
    else {
      pcVar19 = "Initializing already initialized RID";
      uVar14 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar14,
                     "Method/function failed. Returning: nullptr",pcVar19,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* RID_Alloc<RendererRD::TextureStorage::Decal, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::TextureStorage::Decal,true>::allocate_rid
          (RID_Alloc<RendererRD::TextureStorage::Decal,true> *this)

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
      goto LAB_00123007;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xa0,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x98);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x28;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xa0 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x98) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00123007:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void 
   Vector<RendererRD::TextureStorage::DecalAtlas::SortItem>::sort_custom<_DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>,
   true>() */

void __thiscall
Vector<RendererRD::TextureStorage::DecalAtlas::SortItem>::
sort_custom<_DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>,true>
          (Vector<RendererRD::TextureStorage::DecalAtlas::SortItem> *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  SortItem *__src;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  SortItem *pSVar11;
  SortItem *pSVar12;
  long lVar13;
  SortItem *pSVar14;
  SortItem *pSVar15;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar4 = *(long *)(*(long *)(this + 8) + -8), lVar4 != 0)) {
    CowData<RendererRD::TextureStorage::DecalAtlas::SortItem>::_copy_on_write
              ((CowData<RendererRD::TextureStorage::DecalAtlas::SortItem> *)(this + 8));
    __src = *(SortItem **)(this + 8);
    if (lVar4 == 1) {
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<RendererRD::TextureStorage::DecalAtlas::SortItem,_DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>,true>
        ::introsort(0,1,__src,0);
        return;
      }
      goto LAB_001235be;
    }
    lVar10 = 0;
    lVar13 = lVar4;
    do {
      lVar13 = lVar13 >> 1;
      lVar10 = lVar10 + 1;
    } while (lVar13 != 1);
    SortArray<RendererRD::TextureStorage::DecalAtlas::SortItem,_DefaultComparator<RendererRD::TextureStorage::DecalAtlas::SortItem>,true>
    ::introsort(0,lVar4,__src,lVar10 * 2);
    pSVar15 = __src + 0x20;
    lVar13 = 1;
    pSVar14 = pSVar15;
    if (lVar4 < 0x11) {
      lVar13 = 1;
      do {
        uVar6 = *(undefined8 *)pSVar14;
        uVar7 = *(undefined8 *)(pSVar14 + 8);
        uVar8 = *(undefined8 *)(pSVar14 + 0x10);
        uVar9 = *(undefined8 *)(pSVar14 + 0x18);
        iVar1 = *(int *)(pSVar14 + 0x10);
        iVar2 = *(int *)(pSVar14 + 0x14);
        pSVar12 = pSVar14;
        lVar10 = lVar13;
        if (iVar2 == *(int *)(__src + 0x14)) {
          if (*(int *)(__src + 0x10) < iVar1) goto LAB_0012343a;
LAB_001234d6:
          while( true ) {
            bVar5 = *(int *)(pSVar12 + -0xc) < iVar2;
            if (iVar2 == *(int *)(pSVar12 + -0xc)) {
              bVar5 = *(int *)(pSVar12 + -0x10) < iVar1;
            }
            if (!bVar5) goto LAB_001234ee;
            if (lVar10 + -1 == 0) break;
            *(undefined8 *)pSVar12 = *(undefined8 *)(pSVar12 + -0x20);
            *(undefined8 *)(pSVar12 + 8) = *(undefined8 *)(pSVar12 + -0x18);
            *(undefined8 *)(pSVar12 + 0x10) = *(undefined8 *)(pSVar12 + -0x10);
            *(undefined8 *)(pSVar12 + 0x18) = *(undefined8 *)(pSVar12 + -8);
            pSVar12 = pSVar12 + -0x20;
            lVar10 = lVar10 + -1;
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
LAB_001234ee:
          *(undefined8 *)pSVar12 = uVar6;
          *(undefined8 *)(pSVar12 + 8) = uVar7;
          *(undefined8 *)(pSVar12 + 0x10) = uVar8;
          *(undefined8 *)(pSVar12 + 0x18) = uVar9;
        }
        else {
          if (iVar2 <= *(int *)(__src + 0x14)) goto LAB_001234d6;
LAB_0012343a:
          memmove(pSVar15,__src,lVar13 << 5);
          *(undefined8 *)__src = uVar6;
          *(undefined8 *)(__src + 8) = uVar7;
          *(undefined8 *)(__src + 0x10) = uVar8;
          *(undefined8 *)(__src + 0x18) = uVar9;
        }
        lVar13 = lVar13 + 1;
        pSVar14 = pSVar14 + 0x20;
      } while (lVar4 != lVar13);
    }
    else {
      do {
        while( true ) {
          lVar10 = lVar13;
          uVar6 = *(undefined8 *)pSVar14;
          uVar7 = *(undefined8 *)(pSVar14 + 8);
          uVar8 = *(undefined8 *)(pSVar14 + 0x10);
          uVar9 = *(undefined8 *)(pSVar14 + 0x18);
          iVar1 = *(int *)(pSVar14 + 0x10);
          iVar2 = *(int *)(pSVar14 + 0x14);
          pSVar12 = pSVar14;
          if (iVar2 != *(int *)(__src + 0x14)) break;
          if (*(int *)(__src + 0x10) < iVar1) goto LAB_001232c2;
LAB_0012335b:
          while( true ) {
            bVar5 = *(int *)(pSVar12 + -0xc) < iVar2;
            if (iVar2 == *(int *)(pSVar12 + -0xc)) {
              bVar5 = *(int *)(pSVar12 + -0x10) < iVar1;
            }
            if (!bVar5) goto LAB_00123373;
            pSVar11 = pSVar12 + -0x20;
            if (__src == pSVar11) break;
            *(undefined8 *)pSVar12 = *(undefined8 *)pSVar11;
            *(undefined8 *)(pSVar12 + 8) = *(undefined8 *)(pSVar12 + -0x18);
            *(undefined8 *)(pSVar12 + 0x10) = *(undefined8 *)(pSVar12 + -0x10);
            *(undefined8 *)(pSVar12 + 0x18) = *(undefined8 *)(pSVar12 + -8);
            pSVar12 = pSVar11;
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
LAB_00123373:
          pSVar14 = pSVar14 + 0x20;
          *(undefined8 *)pSVar12 = uVar6;
          *(undefined8 *)(pSVar12 + 8) = uVar7;
          *(undefined8 *)(pSVar12 + 0x10) = uVar8;
          *(undefined8 *)(pSVar12 + 0x18) = uVar9;
          lVar13 = lVar10 + 1;
          if (lVar10 + 1 == 0x10) goto LAB_0012339a;
        }
        if (iVar2 <= *(int *)(__src + 0x14)) goto LAB_0012335b;
LAB_001232c2:
        pSVar14 = pSVar14 + 0x20;
        memmove(pSVar15,__src,lVar10 << 5);
        *(undefined8 *)__src = uVar6;
        *(undefined8 *)(__src + 8) = uVar7;
        *(undefined8 *)(__src + 0x10) = uVar8;
        *(undefined8 *)(__src + 0x18) = uVar9;
        lVar13 = lVar10 + 1;
      } while (lVar10 + 1 != 0x10);
LAB_0012339a:
      lVar10 = lVar10 + 1;
      pSVar15 = __src + 0x200;
      do {
        uVar6 = *(undefined8 *)pSVar15;
        uVar7 = *(undefined8 *)(pSVar15 + 8);
        iVar1 = *(int *)(pSVar15 + 0x10);
        uVar8 = *(undefined8 *)(pSVar15 + 0x10);
        uVar9 = *(undefined8 *)(pSVar15 + 0x18);
        iVar2 = *(int *)(pSVar15 + 0x14);
        pSVar14 = pSVar15;
        lVar13 = lVar10;
        while( true ) {
          if (*(int *)(pSVar14 + -0xc) == iVar2) {
            if (iVar1 <= *(int *)(pSVar14 + -0x10)) goto LAB_00123408;
          }
          else if (iVar2 <= *(int *)(pSVar14 + -0xc)) goto LAB_00123408;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) break;
          *(undefined8 *)pSVar14 = *(undefined8 *)(pSVar14 + -0x20);
          *(undefined8 *)(pSVar14 + 8) = *(undefined8 *)(pSVar14 + -0x18);
          *(undefined8 *)(pSVar14 + 0x10) = *(undefined8 *)(pSVar14 + -0x10);
          *(undefined8 *)(pSVar14 + 0x18) = *(undefined8 *)(pSVar14 + -8);
          pSVar14 = pSVar14 + -0x20;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        lVar13 = 1;
LAB_00123408:
        lVar10 = lVar10 + 1;
        pSVar15 = pSVar15 + 0x20;
        pSVar14 = __src + lVar13 * 0x20;
        *(undefined8 *)pSVar14 = uVar6;
        *(undefined8 *)(pSVar14 + 8) = uVar7;
        *(undefined8 *)(pSVar14 + 0x10) = uVar8;
        *(undefined8 *)(pSVar14 + 0x18) = uVar9;
      } while (lVar4 != lVar10);
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001235be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::TextureStorage::DecalInstance,
   false>::make_rid(RendererRD::TextureStorage::DecalInstance const&) */

ulong __thiscall
RID_Alloc<RendererRD::TextureStorage::DecalInstance,false>::make_rid
          (RID_Alloc<RendererRD::TextureStorage::DecalInstance,false> *this,DecalInstance *param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar10 = *(uint *)(this + 0x20);
  if (uVar10 == *(uint *)(this + 0x1c)) {
    if (uVar10 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar10 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar10 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar4 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar4;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x50,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar16) = uVar13;
    lVar5 = Memory::realloc_static(pvVar1,uVar17,false);
    *(long *)(this + 0x10) = lVar5;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar13;
    if (uVar7 != 0) {
      lVar5 = *(long *)(lVar4 + lVar16);
      lVar6 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x48);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x14;
        *(int *)(lVar5 + lVar6 * 4) = *(int *)(this + 0x20) + (int)lVar6;
        uVar7 = *(uint *)(this + 0x18);
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar7;
    uVar10 = *(uint *)(this + 0x20);
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(this + 0x18);
  }
  uVar10 = *(uint *)(*(long *)(lVar4 + ((ulong)uVar10 / (ulong)uVar7) * 8) +
                    ((ulong)uVar10 % (ulong)uVar7) * 4);
  uVar17 = (ulong)uVar10;
  LOCK();
  UNLOCK();
  uVar8 = (int)RID_AllocBase::base_id + 1;
  uVar9 = uVar8 & 0x7fffffff;
  if (uVar9 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar17 % (ulong)uVar7) * 0x50 + *(long *)(lVar16 + (uVar17 / uVar7) * 8) + 0x48) =
         uVar9 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar8,uVar10) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar11 = (undefined8 *)
                ((uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x50 +
                *(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar11 + 9) < 0) {
        uVar10 = (uint)(uVar14 >> 0x20);
        if (uVar10 == (*(uint *)(puVar11 + 9) & 0x7fffffff)) {
          uVar13 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar11 + 9) = uVar10;
          *puVar11 = uVar13;
          puVar11[1] = uVar3;
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          puVar11[2] = *(undefined8 *)(param_1 + 0x10);
          puVar11[3] = uVar13;
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          puVar11[4] = *(undefined8 *)(param_1 + 0x20);
          puVar11[5] = uVar13;
          uVar13 = *(undefined8 *)(param_1 + 0x38);
          puVar11[6] = *(undefined8 *)(param_1 + 0x30);
          puVar11[7] = uVar13;
          puVar11[8] = *(undefined8 *)(param_1 + 0x40);
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar13 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar13 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar13,
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
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey, RID,
   RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,
   DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   RID> > >::_lookup_pos(RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
::_lookup_pos(HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
              *this,SliceKey *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar12 = *(long *)param_1 * 0x3ffff - 1;
  uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
  uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
  uVar11 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
           (uint)uVar12 ^ (uint)(uVar12 >> 0x16);
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
  uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  uVar15 = uVar11 ^ uVar11 >> 0x10;
  if (uVar11 == uVar11 >> 0x10) {
    uVar15 = 1;
    uVar12 = uVar2;
  }
  else {
    uVar12 = uVar15 * uVar2;
  }
  uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar16;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  lVar14 = SUB168(auVar3 * auVar7,8);
  uVar11 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
  uVar13 = SUB164(auVar3 * auVar7,8);
  if (uVar11 != 0) {
    uVar17 = 0;
    do {
      if (((uVar15 == uVar11) &&
          (lVar14 = *(long *)(*(long *)(this + 8) + lVar14 * 8),
          *(long *)(lVar14 + 0x10) == *(long *)param_1)) && (*(int *)(lVar14 + 0x18) == iVar1)) {
        *param_2 = uVar13;
        return 1;
      }
      uVar17 = uVar17 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (uVar13 + 1) * uVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar16;
      lVar14 = SUB168(auVar4 * auVar8,8);
      uVar11 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
      uVar13 = SUB164(auVar4 * auVar8,8);
    } while ((uVar11 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
            auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar13) - SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
  }
  return 0;
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



/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar9 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00123d90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_00123d90;
  if (param_1 <= lVar9) {
    puVar7 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar8) {
LAB_00123c19:
        if (uVar6 + 1 != lVar5) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar6 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00123dbf;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = puVar7 + uVar8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if ((ulong)puVar7[-1] <= uVar8) goto LAB_00123c19;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar7 = *(undefined8 **)this;
    }
LAB_00123e0d:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar6 + 1 == lVar5) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00123e0d;
    lVar9 = puVar7[-1];
LAB_00123cf0:
    if (param_1 <= lVar9) goto LAB_00123ca5;
  }
  else {
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00123dbf:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar7;
      lVar9 = puVar4[1];
      goto LAB_00123cf0;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar9 = 0;
  }
  memset(puVar7 + lVar9,0,(param_1 - lVar9) * 8);
LAB_00123ca5:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Vector<unsigned char> >::_unref() */

void __thiscall CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this)

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
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
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



/* CowData<Ref<Image> >::_unref() */

void __thiscall CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this)

{
  long *plVar1;
  long lVar2;
  Image *pIVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00124235:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pIVar3 = (Image *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<Image>(pIVar3);
          if (lVar2 == lVar7) break;
          goto LAB_00124235;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* Error CowData<Ref<Image> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Image>>::resize<false>(CowData<Ref<Image>> *this,long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
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
    lVar4 = 0;
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
    lVar4 = lVar8 * 8;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00124560:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 8 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00124560;
  if (param_1 <= lVar8) {
    puVar6 = *(undefined8 **)this;
    uVar7 = param_1;
    while (puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar7) {
LAB_001243fa:
        if (uVar5 + 1 != lVar4) {
          puVar3 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar5 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_0012458f;
          puVar6 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar6;
        }
        puVar6[-1] = param_1;
        return 0;
      }
      while (puVar6[uVar7] == 0) {
        uVar7 = uVar7 + 1;
        if ((ulong)puVar6[-1] <= uVar7) goto LAB_001243fa;
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>((Image *)puVar6[uVar7]);
      }
      uVar7 = uVar7 + 1;
      puVar6 = *(undefined8 **)this;
    }
LAB_001243ca:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar5 + 1 == lVar4) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_001243ca;
    lVar8 = puVar6[-1];
LAB_001244c0:
    if (param_1 <= lVar8) goto LAB_00124477;
  }
  else {
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
LAB_0012458f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      *(undefined8 **)this = puVar6;
      lVar8 = puVar3[1];
      goto LAB_001244c0;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar8 = 0;
  }
  memset(puVar6 + lVar8,0,(param_1 - lVar8) * 8);
LAB_00124477:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDeviceCommons::DataFormat>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::DataFormat>::resize<false>
          (CowData<RenderingDeviceCommons::DataFormat> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
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
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + -8);
    if (param_1 == lVar7) {
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
    lVar3 = lVar7 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (lVar7 < param_1) {
        if (uVar4 + 1 == lVar3) {
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) goto LAB_00124779;
        }
        else {
          if (lVar7 == 0) {
            puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              return 6;
            }
            *puVar5 = 1;
            puVar5[1] = 0;
          }
          else {
            puVar5 = (undefined8 *)
                     Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) goto LAB_00124860;
            *puVar5 = 1;
          }
          puVar5 = puVar5 + 2;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      else {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
LAB_00124779:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00124860:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return 6;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      return 0;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                   "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                   ,0,0);
  return 6;
}



/* Error CowData<Vector<unsigned char> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
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
    lVar7 = lVar6 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00124b88:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_00124b88;
  if (param_1 <= lVar6) {
    puVar4 = *(undefined8 **)this;
    uVar5 = param_1;
    while (puVar4 != (undefined8 *)0x0) {
      if ((ulong)puVar4[-1] <= uVar5) {
LAB_00124a02:
        if (uVar8 + 1 != lVar7) {
          puVar3 = (undefined8 *)Memory::realloc_static(puVar4 + -2,uVar8 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_00124bb7;
          puVar4 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar4;
        }
        puVar4[-1] = param_1;
        return 0;
      }
      while (puVar4[uVar5 * 2 + 1] == 0) {
        uVar5 = uVar5 + 1;
        if ((ulong)puVar4[-1] <= uVar5) goto LAB_00124a02;
      }
      LOCK();
      plVar1 = (long *)(puVar4[uVar5 * 2 + 1] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = puVar4[uVar5 * 2 + 1];
        puVar4[uVar5 * 2 + 1] = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar5 = uVar5 + 1;
      puVar4 = *(undefined8 **)this;
    }
LAB_00124c05:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar8 + 1 == lVar7) {
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) goto LAB_00124c05;
    lVar6 = puVar4[-1];
LAB_00124ae8:
    if (param_1 <= lVar6) goto LAB_00124a99;
  }
  else {
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar8 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
LAB_00124bb7:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar4 = puVar3 + 2;
      *puVar3 = 1;
      *(undefined8 **)this = puVar4;
      lVar6 = puVar3[1];
      goto LAB_00124ae8;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar6 = 0;
  }
  puVar3 = puVar4 + lVar6 * 2;
  do {
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar4 + param_1 * 2);
LAB_00124a99:
  puVar4[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererRD::TextureStorage::Texture::BufferSlice3D>::resize<false>
          (CowData<RendererRD::TextureStorage::Texture::BufferSlice3D> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar3 = lVar8 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00124eb8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  if (uVar4 == 0xffffffffffffffff) goto LAB_00124eb8;
  if (param_1 <= lVar8) {
    puVar7 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar7 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00124ef0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar7;
    }
    puVar7[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar7[-1];
LAB_00124df9:
    if (param_1 <= lVar3) goto LAB_00124d68;
  }
  else {
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00124ef0;
      puVar7 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar7;
      lVar3 = puVar5[1];
      goto LAB_00124df9;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar3 = 0;
  }
  puVar5 = puVar7 + lVar3 * 2;
  do {
    *puVar5 = 0;
    puVar6 = puVar5 + 2;
    puVar5[1] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 2);
LAB_00124d68:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererRD::TextureStorage::DecalAtlas::MipMap>::resize<false>
          (CowData<RendererRD::TextureStorage::DecalAtlas::MipMap> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar4 = 0;
  }
  else {
    lVar9 = *(long *)(lVar4 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar9 * 0x18;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00125208:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x18 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00125208;
  if (param_1 <= lVar9) {
    puVar8 = *(undefined8 **)this;
    if (uVar5 + 1 == lVar4) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00125240:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar5 + 1 == lVar4) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
LAB_00125149:
    if (param_1 <= lVar4) goto LAB_001250b5;
  }
  else {
    if (lVar9 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00125240;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_00125149;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  pauVar7 = (undefined1 (*) [16])(puVar8 + lVar4 * 3);
  do {
    *(undefined8 *)pauVar7[1] = 0;
    pauVar3 = pauVar7 + 1;
    *pauVar7 = (undefined1  [16])0x0;
    pauVar7 = (undefined1 (*) [16])(*pauVar3 + 8);
  } while ((undefined1 (*) [16])(*pauVar3 + 8) != (undefined1 (*) [16])(puVar8 + param_1 * 3));
LAB_001250b5:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar5 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar10 * 0x10;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00125548:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 0x10 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_00125548;
  if (param_1 <= lVar10) {
    puVar8 = *(undefined8 **)this;
    if (uVar6 + 1 == lVar5) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar7 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) {
LAB_00125580:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar6 + 1 == lVar5) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = puVar8[-1];
LAB_00125489:
    if (param_1 <= lVar5) goto LAB_00125404;
  }
  else {
    if (lVar10 != 0) {
      puVar7 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00125580;
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      *(undefined8 **)this = puVar8;
      lVar5 = puVar7[1];
      goto LAB_00125489;
    }
    puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar7 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar5 = 0;
  }
  uVar4 = _UNK_00128d08;
  uVar3 = __LC122;
  puVar7 = puVar8 + lVar5 * 2;
  puVar9 = puVar7 + (param_1 - lVar5) * 2;
  do {
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    puVar7 = puVar7 + 2;
  } while (puVar7 != puVar9);
LAB_00125404:
  puVar8[-1] = param_1;
  return 0;
}



/* HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey, RID,
   RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,
   DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   RID> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
::_resize_and_rehash
          (HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
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
/* HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey, RID,
   RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,
   DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   RID> > >::operator[](RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey const&) */

undefined1 (*) [16] __thiscall
HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
::operator[](HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
             *this,SliceKey *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  undefined8 uVar21;
  void *__s_00;
  int iVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  long in_FS_OFFSET;
  uint local_98;
  uint local_70;
  uint local_6c [5];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,param_1,&local_70);
  if (cVar16 == '\0') {
    uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar26 = (ulong)uVar17;
      uVar20 = uVar26 * 4;
      uVar25 = uVar26 * 8;
      uVar21 = Memory::alloc_static(uVar20,false);
      *(undefined8 *)(this + 0x10) = uVar21;
      __s_00 = (void *)Memory::alloc_static(uVar25,false);
      *(void **)(this + 8) = __s_00;
      if (uVar17 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar20))) {
          uVar20 = 0;
          do {
            *(undefined4 *)((long)__s + uVar20 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar20 * 8) = 0;
            uVar20 = uVar20 + 1;
          } while (uVar26 != uVar20);
        }
        else {
          memset(__s,0,uVar20);
          memset(__s_00,0,uVar25);
        }
      }
    }
    local_6c[0] = 0;
    cVar16 = _lookup_pos(this,param_1,local_6c);
    if (cVar16 == '\0') {
      if ((float)uVar17 * __LC189 < (float)(*(int *)(this + 0x2c) + 1)) {
        if (*(int *)(this + 0x28) == 0x1c) {
          pauVar19 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00125aa3;
        }
        _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
      }
      local_58 = *(undefined8 *)param_1;
      uStack_50 = *(undefined8 *)(param_1 + 8);
      pauVar19 = (undefined1 (*) [16])operator_new(0x28,"");
      *(undefined8 *)pauVar19[2] = 0;
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar19[1] = local_58;
      *(undefined8 *)(pauVar19[1] + 8) = uStack_50;
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar19;
      }
      else {
        *puVar3 = pauVar19;
        *(undefined8 **)(*pauVar19 + 8) = puVar3;
      }
      lVar4 = *(long *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar19;
      uVar20 = lVar4 * 0x3ffff - 1;
      uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
      uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
      uVar17 = (*(int *)(param_1 + 8) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 8) * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uint)uVar20 ^ (uint)(uVar20 >> 0x16);
      uVar17 = (uVar17 << 0xd | uVar17 >> 0x13) * 5 + 0xe6546b64;
      uVar17 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
      uVar18 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
      uVar17 = uVar18 ^ uVar18 >> 0x10;
      if (uVar18 == uVar18 >> 0x10) {
        uVar20 = 1;
        uVar17 = 1;
      }
      else {
        uVar20 = (ulong)uVar17;
      }
      uVar24 = 0;
      lVar4 = *(long *)(this + 0x10);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar25 = CONCAT44(0,uVar18);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar20 * lVar5;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar25;
      lVar23 = SUB168(auVar7 * auVar11,8);
      lVar6 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar4 + lVar23 * 4);
      iVar22 = SUB164(auVar7 * auVar11,8);
      uVar2 = *puVar1;
      pauVar15 = pauVar19;
      while (uVar2 != 0) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar2 * lVar5;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)((uVar18 + iVar22) - SUB164(auVar8 * auVar12,8)) * lVar5;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar25;
        local_98 = SUB164(auVar9 * auVar13,8);
        pauVar27 = pauVar15;
        if (local_98 < uVar24) {
          *puVar1 = uVar17;
          puVar3 = (undefined8 *)(lVar6 + lVar23 * 8);
          pauVar27 = (undefined1 (*) [16])*puVar3;
          *puVar3 = pauVar15;
          uVar17 = uVar2;
          uVar24 = local_98;
        }
        uVar24 = uVar24 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar22 + 1) * lVar5;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar23 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar4 + lVar23 * 4);
        iVar22 = SUB164(auVar10 * auVar14,8);
        pauVar15 = pauVar27;
        uVar2 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar6 + lVar23 * 8) = pauVar15;
      *puVar1 = uVar17;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined8 *)pauVar19[2] = 0;
    }
  }
  else {
    pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_00125aa3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar19 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
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
    lVar9 = 0;
    lVar6 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar9 * 0x28;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00125f18:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x28 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  if (uVar7 == 0xffffffffffffffff) goto LAB_00125f18;
  if (param_1 <= lVar9) {
    puVar10 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar10 != (undefined8 *)0x0) {
      if ((ulong)puVar10[-1] <= uVar8) {
LAB_00125d69:
        if (uVar7 + 1 != lVar6) {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar10 + -2,uVar7 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00125f47;
          puVar10 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar10;
        }
        puVar10[-1] = param_1;
        return 0;
      }
      while (puVar10[uVar8 * 5 + 4] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar10[-1] <= uVar8) goto LAB_00125d69;
      }
      LOCK();
      plVar1 = (long *)(puVar10[uVar8 * 5 + 4] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = puVar10[uVar8 * 5 + 4];
        puVar10[uVar8 * 5 + 4] = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar10 = *(undefined8 **)this;
    }
LAB_00125f95:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar7 + 1 == lVar6) {
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) goto LAB_00125f95;
    lVar9 = puVar10[-1];
LAB_00125e70:
    if (param_1 <= lVar9) goto LAB_00125e20;
  }
  else {
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar7 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00125f47:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar10 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar10;
      lVar9 = puVar5[1];
      goto LAB_00125e70;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar9 = 0;
  }
  uVar3 = _LC356;
  puVar5 = puVar10 + lVar9 * 5;
  do {
    *puVar5 = uVar3;
    puVar4 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar4;
  } while (puVar10 + param_1 * 5 != puVar4);
LAB_00125e20:
  puVar10[-1] = param_1;
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
        goto LAB_00125fe6;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      goto LAB_00125ff1;
    }
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_00125ff1;
  }
  else {
LAB_00125fe6:
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
LAB_00125ff1:
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
            goto LAB_001262b8;
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
  if ((float)uVar2 * __LC189 < (float)(uVar32 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pDVar25 = (DependencyTracker *)0x0;
      goto LAB_001262b8;
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
LAB_001262b8:
  *param_1 = pDVar25;
  return;
}



/* RID_Alloc<RendererRD::TextureStorage::Decal, true>::initialize_rid(RID,
   RendererRD::TextureStorage::Decal const&) */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Decal,true>::initialize_rid
          (RID_Alloc<RendererRD::TextureStorage::Decal,true> *this,ulong param_2,undefined8 *param_3
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long in_FS_OFFSET;
  DependencyTracker *pDStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1c)) {
      puVar8 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0xa0 +
               *(long *)(*(long *)(this + 8) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar8 + 0x13) < 0) {
        uVar9 = (uint)(param_2 >> 0x20);
        if (uVar9 == (*(uint *)(puVar8 + 0x13) & 0x7fffffff)) {
          uVar3 = *param_3;
          *(uint *)(puVar8 + 0x13) = uVar9;
          *puVar8 = uVar3;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_3 + 1);
          memmove(puVar8 + 2,param_3 + 2,0x20);
          uVar1 = *(undefined4 *)(param_3 + 0xc);
          uVar4 = param_3[7];
          uVar5 = param_3[8];
          puVar8[6] = param_3[6];
          uVar2 = *(undefined4 *)(param_3 + 9);
          *(undefined4 *)(puVar8 + 0xc) = uVar1;
          *(undefined4 *)(puVar8 + 9) = uVar2;
          uVar3 = *(undefined8 *)((long)param_3 + 0x4c);
          puVar8[7] = uVar4;
          puVar8[8] = uVar5;
          *(undefined8 *)((long)puVar8 + 0x4c) = uVar3;
          *(undefined1 *)((long)puVar8 + 0x54) = *(undefined1 *)((long)param_3 + 0x54);
          uVar3 = param_3[0xb];
          puVar8[0x12] = 0;
          puVar8[0xb] = uVar3;
          uVar9 = *(uint *)(param_3 + 0x12);
          *(undefined1 (*) [16])(puVar8 + 0xe) = (undefined1  [16])0x0;
          uVar9 = *(uint *)(hash_table_size_primes + (ulong)uVar9 * 4);
          *(undefined1 (*) [16])(puVar8 + 0x10) = (undefined1  [16])0x0;
          lVar6 = 1;
          if (5 < uVar9) {
            do {
              if (uVar9 <= *(uint *)(hash_table_size_primes + lVar6 * 4)) {
                *(int *)(puVar8 + 0x12) = (int)lVar6;
                goto LAB_00126570;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x1d);
            _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                             "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                             ,0,0);
          }
LAB_00126570:
          if ((*(int *)((long)param_3 + 0x94) != 0) &&
             (plVar7 = (long *)param_3[0x10], plVar7 != (long *)0x0)) {
            do {
              HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              ::insert(&pDStack_28,(uint *)(puVar8 + 0xd),(bool)((char)plVar7 + '\x10'));
              plVar7 = (long *)*plVar7;
            } while (plVar7 != (long *)0x0);
          }
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00126688;
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return;
  }
LAB_00126688:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RenderingDevice::FramebufferPass>::_unref() */

void __thiscall
CowData<RenderingDevice::FramebufferPass>::_unref(CowData<RenderingDevice::FramebufferPass> *this)

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
          if (*(long *)(lVar6 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x38);
              *(undefined8 *)(lVar6 + 0x38) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x48;
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



/* RID FramebufferCacheRD::get_cache_multiview<RID, RID>(unsigned int, RID, RID) */

undefined8 __thiscall
FramebufferCacheRD::get_cache_multiview<RID,RID>
          (FramebufferCacheRD *this,uint param_1,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Vector aVStack_68 [8];
  long local_60;
  Vector local_58 [8];
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (param_1 * 0x16a88000 | param_1 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^ 0xebddb4ba;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
          ((int)param_3 * 0x16a88000 | (uint)((int)param_3 * -0x3361d2af) >> 0x11) * 0x1b873593;
  iVar4 = (int)((ulong)param_3 >> 0x20);
  uVar3 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
          ((int)param_4 * 0x16a88000 | (uint)((int)param_4 * -0x3361d2af) >> 0x11) * 0x1b873593;
  iVar4 = (int)((ulong)param_4 >> 0x20);
  uVar3 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  lVar2 = *(long *)(this + (ulong)(uVar3 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar2 == 0) {
      local_60 = 0;
      Vector<RID>::push_back((Vector<RID> *)aVStack_68);
      Vector<RID>::push_back((Vector<RID> *)aVStack_68,param_4);
      local_50[0] = 0;
      uVar5 = _allocate_from_data(this,param_1,uVar3,uVar3 % 0x3ffd,aVStack_68,local_58);
      CowData<RenderingDevice::FramebufferPass>::_unref
                ((CowData<RenderingDevice::FramebufferPass> *)local_50);
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
LAB_00126940:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((((*(uint *)(lVar2 + 0x10) == uVar3) && (*(int *)(lVar2 + 0x30) == 0)) &&
        (*(int *)(lVar2 + 0x20) == 2)) &&
       (((*(uint *)(lVar2 + 0x40) == param_1 && (**(long **)(lVar2 + 0x28) == param_3)) &&
        (param_4 == (*(long **)(lVar2 + 0x28))[1])))) {
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      goto LAB_00126940;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* RID FramebufferCacheRD::get_cache_multiview<RID>(unsigned int, RID) */

undefined8 __thiscall
FramebufferCacheRD::get_cache_multiview<RID>(FramebufferCacheRD *this,uint param_1,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  Vector aVStack_58 [8];
  long local_50;
  Vector local_48 [8];
  undefined8 local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (param_1 * 0x16a88000 | param_1 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^ 0xc3539a5d;
  uVar3 = ((int)param_3 * 0x16a88000 | (uint)((int)param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  iVar5 = (int)((ulong)param_3 >> 0x20);
  uVar3 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  lVar2 = *(long *)(this + (ulong)(uVar3 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar2 == 0) {
      local_50 = 0;
      Vector<RID>::push_back((Vector<RID> *)aVStack_58);
      local_40[0] = 0;
      uVar4 = _allocate_from_data(this,param_1,uVar3,uVar3 % 0x3ffd,aVStack_58,local_48);
      CowData<RenderingDevice::FramebufferPass>::_unref
                ((CowData<RenderingDevice::FramebufferPass> *)local_40);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
LAB_00126b30:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((((*(uint *)(lVar2 + 0x10) == uVar3) && (*(int *)(lVar2 + 0x30) == 0)) &&
        (*(int *)(lVar2 + 0x20) == 1)) &&
       ((*(uint *)(lVar2 + 0x40) == param_1 && (**(long **)(lVar2 + 0x28) == param_3)))) {
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      goto LAB_00126b30;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey, RID,
   RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,
   DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,
   RID> > >::insert(RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey const&, RID
   const&, bool) */

SliceKey *
HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
::insert(SliceKey *param_1,RID *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  undefined8 uVar21;
  void *__s_00;
  undefined8 *in_RCX;
  int iVar22;
  undefined7 in_register_00000011;
  SliceKey *pSVar23;
  long lVar24;
  char in_R8B;
  uint uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long in_FS_OFFSET;
  uint local_a8;
  uint local_6c [5];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  pSVar23 = (SliceKey *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar28 = (ulong)uVar17;
    uVar20 = uVar28 * 4;
    uVar21 = Memory::alloc_static(uVar20,false);
    *(undefined8 *)(param_2 + 0x10) = uVar21;
    uVar26 = uVar28 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar26,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar26 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar20))) {
        uVar20 = 0;
        do {
          *(undefined4 *)((long)__s + uVar20 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar28 != uVar20);
      }
      else {
        memset(__s,0,uVar20);
        memset(__s_00,0,uVar26);
      }
    }
  }
  local_6c[0] = 0;
  cVar16 = _lookup_pos((HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                        *)param_2,pSVar23,local_6c);
  if (cVar16 == '\0') {
    if ((float)uVar17 * __LC189 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pauVar19 = (undefined1 (*) [16])0x0;
        goto LAB_00126e55;
      }
      _resize_and_rehash((HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_58 = *(undefined8 *)pSVar23;
    uStack_50 = *(undefined8 *)(pSVar23 + 8);
    local_48 = *in_RCX;
    pauVar19 = (undefined1 (*) [16])operator_new(0x28,"");
    *pauVar19 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar19[1] = local_58;
    *(undefined8 *)(pauVar19[1] + 8) = uStack_50;
    *(undefined8 *)pauVar19[2] = local_48;
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar19;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar19;
    }
    else if (in_R8B == '\0') {
      *puVar3 = pauVar19;
      *(undefined8 **)(*pauVar19 + 8) = puVar3;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar19;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar4 + 8) = pauVar19;
      *(long *)*pauVar19 = lVar4;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar19;
    }
    uVar20 = *(long *)pSVar23 * 0x3ffff - 1;
    uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
    uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
    uVar17 = (*(int *)(pSVar23 + 8) * 0x16a88000 |
             (uint)(*(int *)(pSVar23 + 8) * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uint)uVar20 ^ (uint)(uVar20 >> 0x16);
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x13) * 5 + 0xe6546b64;
    uVar17 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
    uVar18 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar18 ^ uVar18 >> 0x10;
    if (uVar18 == uVar18 >> 0x10) {
      uVar20 = 1;
      uVar17 = 1;
    }
    else {
      uVar20 = (ulong)uVar17;
    }
    lVar4 = *(long *)(param_2 + 0x10);
    uVar25 = 0;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar18);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20 * lVar5;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar26;
    lVar24 = SUB168(auVar7 * auVar11,8);
    lVar6 = *(long *)(param_2 + 8);
    puVar1 = (uint *)(lVar4 + lVar24 * 4);
    iVar22 = SUB164(auVar7 * auVar11,8);
    uVar2 = *puVar1;
    pauVar15 = pauVar19;
    while (uVar2 != 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar2 * lVar5;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar26;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar18 + iVar22) - SUB164(auVar8 * auVar12,8)) * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      local_a8 = SUB164(auVar9 * auVar13,8);
      pauVar27 = pauVar15;
      if (local_a8 < uVar25) {
        *puVar1 = uVar17;
        puVar3 = (undefined8 *)(lVar6 + lVar24 * 8);
        pauVar27 = (undefined1 (*) [16])*puVar3;
        *puVar3 = pauVar15;
        uVar17 = uVar2;
        uVar25 = local_a8;
      }
      uVar25 = uVar25 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar22 + 1) * lVar5;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar26;
      lVar24 = SUB168(auVar10 * auVar14,8);
      puVar1 = (uint *)(lVar4 + lVar24 * 4);
      iVar22 = SUB164(auVar10 * auVar14,8);
      pauVar15 = pauVar27;
      uVar2 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar6 + lVar24 * 8) = pauVar15;
    *puVar1 = uVar17;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    pauVar19 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)local_6c[0] * 8);
    *(undefined8 *)pauVar19[2] = *in_RCX;
  }
LAB_00126e55:
  *(undefined1 (**) [16])param_1 = pauVar19;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::TextureStorage::RenderTarget,
   false>::make_rid(RendererRD::TextureStorage::RenderTarget const&) */

ulong __thiscall
RID_Alloc<RendererRD::TextureStorage::RenderTarget,false>::make_rid
          (RID_Alloc<RendererRD::TextureStorage::RenderTarget,false> *this,RenderTarget *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  SliceKey aSStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = *(uint *)(this + 0x20);
  if (uVar16 == *(uint *)(this + 0x1c)) {
    if (uVar16 == 0) {
      lVar12 = 0;
      uVar20 = 8;
    }
    else {
      uVar20 = (ulong)((int)((ulong)uVar16 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar12 = ((ulong)uVar16 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar6 = Memory::realloc_static(*(void **)(this + 8),uVar20,false);
    *(long *)(this + 8) = lVar6;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x158,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar12) = uVar14;
    lVar7 = Memory::realloc_static(pvVar2,uVar20,false);
    *(long *)(this + 0x10) = lVar7;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar9 = *(uint *)(this + 0x18);
    lVar6 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar7 + lVar12) = uVar14;
    if (uVar9 != 0) {
      lVar7 = *(long *)(lVar6 + lVar12);
      lVar8 = 0;
      puVar13 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar12) + 0x150);
      do {
        *puVar13 = 0xffffffff;
        puVar13 = puVar13 + 0x56;
        *(int *)(lVar7 + lVar8 * 4) = *(int *)(this + 0x20) + (int)lVar8;
        uVar9 = *(uint *)(this + 0x18);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < uVar9);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar9;
    uVar16 = *(uint *)(this + 0x20);
  }
  else {
    lVar6 = *(long *)(this + 0x10);
    uVar9 = *(uint *)(this + 0x18);
  }
  uVar16 = *(uint *)(*(long *)(lVar6 + ((ulong)uVar16 / (ulong)uVar9) * 8) +
                    ((ulong)uVar16 % (ulong)uVar9) * 4);
  uVar20 = (ulong)uVar16;
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
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar12 = *(long *)(this + 8);
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)((uVar20 % (ulong)uVar9) * 0x158 + *(long *)(lVar12 + (uVar20 / uVar9) * 8) + 0x150) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  uVar19 = CONCAT44(uVar10,uVar16) & 0x7fffffffffffffff;
  if ((uVar19 != 0) && ((uint)uVar19 < *(uint *)(this + 0x1c))) {
    puVar15 = (undefined8 *)
              ((uVar20 % (ulong)*(uint *)(this + 0x18)) * 0x158 +
              *(long *)(lVar12 + (uVar20 / *(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(puVar15 + 0x2a) < 0) {
      uVar16 = (uint)(uVar19 >> 0x20);
      if (uVar16 == (*(uint *)(puVar15 + 0x2a) & 0x7fffffff)) {
        uVar14 = *(undefined8 *)param_1;
        *(uint *)(puVar15 + 0x2a) = uVar16;
        *puVar15 = uVar14;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(param_1 + 8);
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        puVar15[4] = 0;
        lVar12 = *(long *)(param_1 + 0x20);
        puVar15[2] = uVar14;
        if (lVar12 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar15 + 4),(CowData *)(param_1 + 0x20));
        }
        puVar15[5] = *(undefined8 *)(param_1 + 0x28);
        *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_1 + 0x30);
        *(RenderTarget *)((long)puVar15 + 0x34) = param_1[0x34];
        puVar15[7] = *(undefined8 *)(param_1 + 0x38);
        *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(param_1 + 0x40);
        *(undefined2 *)((long)puVar15 + 0x44) = *(undefined2 *)(param_1 + 0x44);
        *(RenderTarget *)((long)puVar15 + 0x46) = param_1[0x46];
        puVar15[9] = *(undefined8 *)(param_1 + 0x48);
        puVar15[10] = *(undefined8 *)(param_1 + 0x50);
        uVar14 = *(undefined8 *)(param_1 + 0x58);
        puVar15[0xd] = 0;
        lVar12 = *(long *)(param_1 + 0x68);
        puVar15[0xb] = uVar14;
        if (lVar12 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar15 + 0xd),(CowData *)(param_1 + 0x68));
        }
        uVar4 = *(undefined8 *)(param_1 + 0xd8);
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        lVar12 = 1;
        puVar15[0xe] = *(undefined8 *)(param_1 + 0x70);
        uVar14 = *(undefined8 *)(param_1 + 0x78);
        puVar15[0x1b] = uVar4;
        puVar15[0x1c] = uVar5;
        puVar15[0xf] = uVar14;
        puVar15[0x10] = *(undefined8 *)(param_1 + 0x80);
        puVar15[0x11] = *(undefined8 *)(param_1 + 0x88);
        puVar15[0x12] = *(undefined8 *)(param_1 + 0x90);
        puVar15[0x13] = *(undefined8 *)(param_1 + 0x98);
        puVar15[0x14] = *(undefined8 *)(param_1 + 0xa0);
        puVar15[0x15] = *(undefined8 *)(param_1 + 0xa8);
        puVar15[0x16] = *(undefined8 *)(param_1 + 0xb0);
        puVar15[0x17] = *(undefined8 *)(param_1 + 0xb8);
        puVar15[0x18] = *(undefined8 *)(param_1 + 0xc0);
        puVar15[0x19] = *(undefined8 *)(param_1 + 200);
        puVar15[0x1a] = *(undefined8 *)(param_1 + 0xd0);
        puVar15[0x1d] = *(undefined8 *)(param_1 + 0xe8);
        puVar15[0x1e] = *(undefined8 *)(param_1 + 0xf0);
        uVar14 = *(undefined8 *)(param_1 + 0xf8);
        puVar15[0x25] = 0;
        puVar15[0x1f] = uVar14;
        uVar16 = *(uint *)(param_1 + 0x128);
        *(undefined1 (*) [16])(puVar15 + 0x21) = (undefined1  [16])0x0;
        uVar16 = *(uint *)(hash_table_size_primes + (ulong)uVar16 * 4);
        *(undefined1 (*) [16])(puVar15 + 0x23) = (undefined1  [16])0x0;
        if (5 < uVar16) {
          do {
            if (uVar16 <= *(uint *)(hash_table_size_primes + lVar12 * 4)) {
              *(int *)(puVar15 + 0x25) = (int)lVar12;
              goto LAB_001272d8;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0);
        }
LAB_001272d8:
        if ((*(int *)(param_1 + 300) != 0) &&
           (plVar18 = *(long **)(param_1 + 0x118), plVar18 != (long *)0x0)) {
          do {
            HashMap<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID,RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,HashMapComparatorDefault<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey>,DefaultTypedAllocator<HashMapElement<RendererRD::TextureStorage::RenderTarget::RTOverridden::SliceKey,RID>>>
            ::insert(aSStack_48,(RID *)(puVar15 + 0x20),(bool)((char)plVar18 + '\x10'));
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        uVar14 = *(undefined8 *)(param_1 + 0x13c);
        uVar4 = *(undefined8 *)(param_1 + 0x144);
        puVar15[0x26] = *(undefined8 *)(param_1 + 0x130);
        uVar1 = *(undefined2 *)(param_1 + 0x138);
        *(undefined8 *)((long)puVar15 + 0x13c) = uVar14;
        *(undefined8 *)((long)puVar15 + 0x144) = uVar4;
        *(undefined2 *)(puVar15 + 0x27) = uVar1;
        goto LAB_0012734c;
      }
      pcVar17 = "Attempting to initialize the wrong RID";
      uVar14 = 0xfc;
    }
    else {
      pcVar17 = "Initializing already initialized RID";
      uVar14 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar14,
                     "Method/function failed. Returning: nullptr",pcVar17,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_0012734c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::TextureStorage::Texture::~Texture() */

void __thiscall RendererRD::TextureStorage::Texture::~Texture(Texture *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::TextureStorage::Texture, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Texture,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::Texture,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::TextureStorage::RenderTarget, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::RenderTarget,false>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::RenderTarget,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::TextureStorage::DecalInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::DecalInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::DecalInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::TextureStorage::Decal, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::Decal,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::Decal,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::TextureStorage::CanvasTexture, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true>::~RID_Alloc
          (RID_Alloc<RendererRD::TextureStorage::CanvasTexture,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CanvasSdfShaderRD::~CanvasSdfShaderRD() */

void __thiscall CanvasSdfShaderRD::~CanvasSdfShaderRD(CanvasSdfShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


