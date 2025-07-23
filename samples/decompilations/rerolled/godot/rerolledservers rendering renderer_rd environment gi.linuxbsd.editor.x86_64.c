/* RendererRD::GI::sdfgi_reset() */

void __thiscall RendererRD::GI::sdfgi_reset(GI *this)

{
  *(int *)(this + 0x168c) = *(int *)(this + 0x168c) + 1;
  return;
}



/* RendererRD::GI::SDFGI::free_data() */

void RendererRD::GI::SDFGI::free_data(void)

{
  return;
}



/* RendererRD::GI::voxel_gi_get_bounds(RID) const */

undefined8 * RendererRD::GI::voxel_gi_get_bounds(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar3 + 0xe0) == (int)(param_3 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar3 + 100);
      uVar2 = *(undefined8 *)(lVar3 + 0x6c);
      param_1[2] = *(undefined8 *)(lVar3 + 0x74);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      return param_1;
    }
    if (*(int *)(lVar3 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_bounds","servers/rendering/renderer_rd/environment/gi.cpp",0xc2,
                   "Parameter \"voxel_gi\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererRD::GI::voxel_gi_get_octree_size(RID) const */

undefined8 __thiscall RendererRD::GI::voxel_gi_get_octree_size(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_1c;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar3 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar3 + 0x7c);
      goto LAB_0010016d;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_octree_size","servers/rendering/renderer_rd/environment/gi.cpp",
                   0xc9,"Parameter \"voxel_gi\" is null.",0,0);
  local_1c = 0;
LAB_0010016d:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::voxel_gi_get_to_cell_xform(RID) const */

undefined1 (*) [16]
RendererRD::GI::voxel_gi_get_to_cell_xform(undefined1 (*param_1) [16],long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar7 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar7 + 0xe0) == (int)(param_3 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar7 + 0x3c);
      uVar2 = *(undefined8 *)(lVar7 + 0x44);
      uVar3 = *(undefined8 *)(lVar7 + 0x4c);
      uVar4 = *(undefined8 *)(lVar7 + 0x54);
      uVar5 = *(undefined8 *)(lVar7 + 0x5c);
      *(undefined8 *)*param_1 = *(undefined8 *)(lVar7 + 0x34);
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar2;
      *(undefined8 *)(param_1[1] + 8) = uVar3;
      *(undefined8 *)param_1[2] = uVar4;
      *(undefined8 *)(param_1[2] + 8) = uVar5;
      return param_1;
    }
    if (*(int *)(lVar7 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_to_cell_xform","servers/rendering/renderer_rd/environment/gi.cpp",
                   0xf4,"Parameter \"voxel_gi\" is null.",0,0);
  uVar6 = _LC17;
  *(undefined4 *)param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *param_1 = ZEXT416(uVar6);
  param_1[1] = ZEXT416(uVar6);
  return param_1;
}



/* RendererRD::GI::voxel_gi_set_dynamic_range(RID, float) */

void __thiscall
RendererRD::GI::voxel_gi_set_dynamic_range(undefined4 param_1,GI *this,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar1 + 0xe0) == (int)(param_3 >> 0x20)) {
      *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + 1;
      *(undefined4 *)(lVar1 + 0x88) = param_1;
      return;
    }
    if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_set_dynamic_range","servers/rendering/renderer_rd/environment/gi.cpp",
                   0xfb,"Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_get_dynamic_range(RID) const */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_dynamic_range(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x88);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_dynamic_range","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x103,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_set_propagation(RID, float) */

void __thiscall RendererRD::GI::voxel_gi_set_propagation(undefined4 param_1,GI *this,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar1 + 0xe0) == (int)(param_3 >> 0x20)) {
      *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + 1;
      *(undefined4 *)(lVar1 + 0x9c) = param_1;
      return;
    }
    if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_set_propagation","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x10a,"Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_get_propagation(RID) const */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_propagation(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x9c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_propagation","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x112,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_set_energy(RID, float) */

void __thiscall RendererRD::GI::voxel_gi_set_energy(undefined4 param_1,GI *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x8c) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_set_energy","servers/rendering/renderer_rd/environment/gi.cpp",0x118,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_get_energy(RID) const */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_energy(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x8c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_energy","servers/rendering/renderer_rd/environment/gi.cpp",0x11f,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_set_baked_exposure_normalization(RID, float) */

void __thiscall
RendererRD::GI::voxel_gi_set_baked_exposure_normalization(undefined4 param_1,GI *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x90) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_set_baked_exposure_normalization",
                   "servers/rendering/renderer_rd/environment/gi.cpp",0x125,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_get_baked_exposure_normalization(RID) const */

undefined4 __thiscall
RendererRD::GI::voxel_gi_get_baked_exposure_normalization(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x90);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_baked_exposure_normalization",
                   "servers/rendering/renderer_rd/environment/gi.cpp",300,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_set_bias(RID, float) */

void __thiscall RendererRD::GI::voxel_gi_set_bias(undefined4 param_1,GI *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x94) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_set_bias","servers/rendering/renderer_rd/environment/gi.cpp",0x132,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_get_bias(RID) const */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_bias(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x94);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_bias","servers/rendering/renderer_rd/environment/gi.cpp",0x139,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_set_normal_bias(RID, float) */

void __thiscall RendererRD::GI::voxel_gi_set_normal_bias(undefined4 param_1,GI *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x98) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_set_normal_bias","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x13f,"Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_get_normal_bias(RID) const */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_normal_bias(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x98);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_normal_bias","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x146,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_set_interior(RID, bool) */

void __thiscall RendererRD::GI::voxel_gi_set_interior(GI *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      iVar1 = *(int *)(lVar2 + 0xe0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0xa0) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("voxel_gi_set_interior","servers/rendering/renderer_rd/environment/gi.cpp",0x14c,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_set_use_two_bounces(RID, bool) */

void __thiscall
RendererRD::GI::voxel_gi_set_use_two_bounces(GI *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + 1;
        *(undefined1 *)(lVar1 + 0xa1) = param_3;
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("voxel_gi_set_use_two_bounces","servers/rendering/renderer_rd/environment/gi.cpp"
                   ,0x153,"Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_is_using_two_bounces(RID) const */

undefined1 __thiscall RendererRD::GI::voxel_gi_is_using_two_bounces(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0xa1);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_is_using_two_bounces",
                   "servers/rendering/renderer_rd/environment/gi.cpp",0x15b,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_is_interior(RID) const */

undefined1 __thiscall RendererRD::GI::voxel_gi_is_interior(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0xa0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_is_interior","servers/rendering/renderer_rd/environment/gi.cpp",0x161,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_get_version(RID) const */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_version(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xa4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_version","servers/rendering/renderer_rd/environment/gi.cpp",0x167,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_get_octree_cells(RID) const */

long RendererRD::GI::voxel_gi_get_octree_cells(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
                     *(long *)(*(long *)(param_2 + 0x10) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8));
    if ((int)plVar3[0x1c] == (int)(param_3 >> 0x20)) {
      if (*plVar3 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        uVar2 = RenderingDevice::get_singleton();
        RenderingDevice::buffer_get_data(param_1,uVar2,*plVar3,0,0);
      }
      goto LAB_001010c8;
    }
    if ((int)plVar3[0x1c] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_octree_cells","servers/rendering/renderer_rd/environment/gi.cpp",
                   0xcf,"Parameter \"voxel_gi\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_001010c8:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::voxel_gi_get_data_cells(RID) const */

long RendererRD::GI::voxel_gi_get_data_cells(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar3 + 0xe0) == (int)(param_3 >> 0x20)) {
      if (*(long *)(lVar3 + 8) == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        uVar2 = RenderingDevice::get_singleton();
        RenderingDevice::buffer_get_data(param_1,uVar2,*(undefined8 *)(lVar3 + 8),0,0);
      }
      goto LAB_001011f9;
    }
    if (*(int *)(lVar3 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_data_cells","servers/rendering/renderer_rd/environment/gi.cpp",0xd9
                   ,"Parameter \"voxel_gi\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_001011f9:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::voxel_gi_get_distance_field(RID) const */

long RendererRD::GI::voxel_gi_get_distance_field(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar3 + 0xe0) == (int)(param_3 >> 0x20)) {
      if (*(long *)(lVar3 + 8) == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        uVar2 = RenderingDevice::get_singleton();
        RenderingDevice::texture_get_data(param_1,uVar2,*(undefined8 *)(lVar3 + 0x10),0);
      }
      goto LAB_00101325;
    }
    if (*(int *)(lVar3 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_distance_field","servers/rendering/renderer_rd/environment/gi.cpp",
                   0xe3,"Parameter \"voxel_gi\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_00101325:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::RenderBuffersGI::free_data() */

void __thiscall RendererRD::GI::RenderBuffersGI::free_data(RenderBuffersGI *this)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::uniform_set_is_valid(uVar1,*(undefined8 *)(this + 0x1e8));
  if (cVar2 != '\0') {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1e8));
  }
  *(undefined8 *)(this + 0x1e8) = 0;
  uVar1 = RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::uniform_set_is_valid(uVar1,*(undefined8 *)(this + 0x1f0));
  if (cVar2 != '\0') {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1f0));
  }
  *(undefined8 *)(this + 0x1f0) = 0;
  if (*(long *)(this + 0x1f8) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1f8));
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  if (*(long *)(this + 0x180) == 0) {
    return;
  }
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x180));
  *(undefined8 *)(this + 0x180) = 0;
  return;
}



/* CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::_copy_on_write
          (CowData<RendererRD::GI::VoxelGIInstance::DynamicMap> *this)

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
  __n = lVar2 * 0x48;
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



/* CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::_copy_on_write
          (CowData<RendererRD::GI::VoxelGIInstance::Mipmap> *this)

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
  __n = lVar2 * 0x30;
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



/* RendererRD::GI::voxel_gi_get_level_counts(RID) const */

long RendererRD::GI::voxel_gi_get_level_counts(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar1 + 0xe0) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x28) != 0) {
        CowData<int>::_ref((CowData<int> *)(param_1 + 8),(CowData *)(lVar1 + 0x28));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_level_counts","servers/rendering/renderer_rd/environment/gi.cpp",
                   0xed,"Parameter \"voxel_gi\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererRD::GI::SDFGI::~SDFGI() */

void __thiscall RendererRD::GI::SDFGI::~SDFGI(SDFGI *this)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(this + 0x260);
  *(undefined ***)this = &PTR__initialize_classv_001298e0;
  puVar6 = puVar5 + (ulong)*(uint *)(this + 600) * 0x18;
  for (; puVar6 != puVar5; puVar5 = puVar5 + 0x18) {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[4]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[2]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[3]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*puVar5);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[7]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[8]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[9]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[10]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[0xb]);
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,puVar5[0x16]);
  }
  uVar2 = RenderingDevice::get_singleton();
  iVar4 = 0;
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x188));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 400));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x198));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x1e8));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x1f0));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x1f8));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x200));
  do {
    uVar2 = RenderingDevice::get_singleton();
    lVar3 = (long)iVar4;
    iVar4 = iVar4 + 1;
    RenderingDevice::free(uVar2,*(undefined8 *)(this + lVar3 * 8 + 0x1a0));
  } while (iVar4 != 8);
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x1e0));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x270));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x290));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x298));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x280));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x288));
  uVar2 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x2d8));
  uVar2 = RenderingDevice::get_singleton();
  cVar1 = RenderingDevice::uniform_set_is_valid(uVar2,*(undefined8 *)(this + 0x2b8));
  if (cVar1 != '\0') {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x2b8));
  }
  *(undefined8 *)(this + 0x2b8) = 0;
  uVar2 = RenderingDevice::get_singleton();
  cVar1 = RenderingDevice::uniform_set_is_valid(uVar2,*(undefined8 *)(this + 0x2c0));
  if (cVar1 != '\0') {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2,*(undefined8 *)(this + 0x2c0));
  }
  *(undefined8 *)(this + 0x2c0) = 0;
  uVar2 = RenderingDevice::get_singleton();
  cVar1 = RenderingDevice::uniform_set_is_valid(uVar2);
  if (cVar1 != '\0') {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2);
  }
  *(undefined8 *)(this + 0x2d0) = 0;
  if (*(long *)(this + 0x2c8) != 0) {
    uVar2 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar2);
    *(undefined8 *)(this + 0x2c8) = 0;
  }
  if (*(void **)(this + 0x260) != (void *)0x0) {
    if (*(int *)(this + 600) != 0) {
      *(undefined4 *)(this + 600) = 0;
    }
    Memory::free_static(*(void **)(this + 0x260),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_00129538;
  Object::~Object((Object *)this);
  return;
}



/* RendererRD::GI::SDFGI::~SDFGI() */

void __thiscall RendererRD::GI::SDFGI::~SDFGI(SDFGI *this)

{
  ~SDFGI(this);
  operator_delete(this,0x330);
  return;
}



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this)

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



/* RendererRD::GI::voxel_gi_free(RID) */

void __thiscall RendererRD::GI::voxel_gi_free(GI *this,ulong param_2)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 local_e8 [8];
  long local_e0;
  undefined1 local_d8 [8];
  long local_d0;
  undefined1 local_c8 [8];
  long local_c0;
  undefined1 local_b8 [8];
  long local_b0;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  int iVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_84 = 0;
  local_78 = ZEXT416(_LC17);
  local_68 = ZEXT416(_LC17);
  local_58 = 0x3f800000;
  local_54 = 0;
  local_4c = 0;
  (**(code **)(*(long *)this + 0x28))
            (this,param_2,local_78,&local_98,&local_a4,local_e8,local_d8,local_c8,local_b8);
  lVar8 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_b0;
  uVar6 = (uint)param_2;
  iVar7 = (int)(param_2 >> 0x20);
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
  if ((param_2 != 0) && (uVar6 < *(uint *)(this + 0x24))) {
    lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar8 + 0xe0) == iVar7) goto LAB_0010219e;
    if (*(int *)(lVar8 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      lVar8 = 0;
      goto LAB_0010219e;
    }
  }
  lVar8 = 0;
LAB_0010219e:
  __mutex = (pthread_mutex_t *)(this + 0x38);
  Dependency::deleted_notify((RID *)(lVar8 + 0xb0));
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 == 0) {
    if (uVar6 < *(uint *)(this + 0x24)) {
      uVar3 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20);
      lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8;
      lVar9 = *(long *)(*(long *)(this + 0x10) + uVar3 * 8) + lVar8;
      if (*(int *)(lVar9 + 0xe0) < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC52,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if (iVar7 == *(int *)(lVar9 + 0xe0)) {
        Dependency::~Dependency((Dependency *)(lVar9 + 0xb0));
        if (*(long *)(lVar9 + 0x28) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar9 + 0x28) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *(long *)(lVar9 + 0x28);
            *(undefined8 *)(lVar9 + 0x28) = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar9 = *(long *)(this + 0x18);
        *(undefined4 *)(*(long *)(*(long *)(this + 0x10) + uVar3 * 8) + 0xe0 + lVar8) = 0xffffffff;
        uVar5 = *(int *)(this + 0x28) - 1;
        *(uint *)(this + 0x28) = uVar5;
        *(uint *)(*(long *)(lVar9 + ((ulong)uVar5 / (ulong)*(uint *)(this + 0x20)) * 8) +
                 ((ulong)uVar5 % (ulong)*(uint *)(this + 0x20)) * 4) = uVar6;
        pthread_mutex_unlock(__mutex);
      }
      else {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC52,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0);
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC52,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_system_error(iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
    */

void __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this)

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
  __n = lVar2 * 0xc;
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



/* RendererRD::GI::voxel_gi_get_data_version(RID) */

undefined4 __thiscall RendererRD::GI::voxel_gi_get_data_version(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xa8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_data_version","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x16d,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_get_octree_buffer(RID) const */

undefined8 __thiscall RendererRD::GI::voxel_gi_get_octree_buffer(GI *this,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    puVar2 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
             *(long *)(*(long *)(this + 0x10) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
    iVar1 = *(int *)(puVar2 + 0x1c);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_octree_buffer","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x173,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_get_data_buffer(RID) const */

undefined8 __thiscall RendererRD::GI::voxel_gi_get_data_buffer(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_data_buffer","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x179,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_get_sdf_texture(RID) */

undefined8 __thiscall RendererRD::GI::voxel_gi_get_sdf_texture(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x10);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_sdf_texture","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x17f,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::voxel_gi_get_dependency(RID) const */

long __thiscall RendererRD::GI::voxel_gi_get_dependency(GI *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return lVar2 + 0xb0;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_get_dependency","servers/rendering/renderer_rd/environment/gi.cpp",
                   0x186,"Parameter \"voxel_gi\" is null.",0,0);
  return 0;
}



/* RendererRD::GI::SDFGI::update(RID, Vector3 const&) */

void __thiscall RendererRD::GI::SDFGI::update(SDFGI *this,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar10;
  SDFGI SVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  long *plVar16;
  uint *puVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 local_58;
  float local_50;
  undefined1 local_4c [12];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = RendererSceneRender::environment_get_sdfgi_bounce_feedback
                     (RendererSceneRenderRD::singleton);
  uVar10 = RendererSceneRenderRD::singleton;
  *(undefined4 *)(this + 0x2e4) = uVar19;
  uVar19 = RendererSceneRender::environment_get_sdfgi_energy(uVar10,param_2);
  uVar10 = RendererSceneRenderRD::singleton;
  *(undefined4 *)(this + 0x2ec) = uVar19;
  uVar19 = RendererSceneRender::environment_get_sdfgi_normal_bias(uVar10,param_2);
  uVar10 = RendererSceneRenderRD::singleton;
  *(undefined4 *)(this + 0x2f0) = uVar19;
  uVar19 = RendererSceneRender::environment_get_sdfgi_probe_bias(uVar10,param_2);
  uVar10 = RendererSceneRenderRD::singleton;
  *(undefined4 *)(this + 0x2f4) = uVar19;
  SVar11 = (SDFGI)RendererSceneRender::environment_get_sdfgi_read_sky_light(uVar10,param_2);
  auVar22._8_4_ = local_4c._8_4_;
  auVar22._0_8_ = local_4c._0_8_;
  puVar8 = *(uint **)(this + 0x260);
  this[0x2e8] = SVar11;
  uVar6 = *(uint *)(this + 600);
  uVar18 = *(uint *)(this + 0x250) >> 5;
  if (puVar8 != puVar8 + (ulong)uVar6 * 0x30) {
    puVar17 = puVar8 + 0x1c;
    do {
      fVar1 = *param_3;
      fVar2 = *(float *)(this + 0x2fc);
      puVar17[0] = 0;
      puVar17[1] = 0;
      fVar3 = param_3[1];
      fVar4 = param_3[2];
      puVar17[2] = 0;
      fVar5 = (float)puVar17[-4];
      local_50 = (fVar4 + 0.0) / fVar5;
      auVar20._0_4_ = fVar1 + 0.0;
      auVar20._4_4_ = fVar2 * fVar3 + 0.0;
      auVar20._8_8_ = 0;
      auVar21._4_4_ = fVar5;
      auVar21._0_4_ = fVar5;
      auVar21._8_4_ = (int)_LC61;
      auVar21._12_4_ = (int)((ulong)_LC61 >> 0x20);
      auVar21 = divps(auVar20,auVar21);
      local_58 = auVar21._0_8_;
      local_4c = auVar22;
      auVar22 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_58);
      puVar15 = puVar17;
      plVar16 = (long *)local_4c;
      do {
        iVar7 = (int)*plVar16;
        uVar14 = puVar15[-3];
        uVar13 = *puVar15;
        if (iVar7 < (int)uVar14) {
          if (iVar7 < (int)(uVar14 - uVar18)) {
            uVar14 = uVar14 + uVar18 * -2;
            do {
              uVar12 = uVar14;
              uVar13 = uVar13 + uVar18 * 2;
              uVar14 = uVar12 + uVar18 * -2;
            } while (iVar7 < (int)(uVar12 - uVar18));
            puVar15[-3] = uVar12;
            *puVar15 = uVar13;
          }
        }
        else if (((int)uVar14 < iVar7) && ((int)(uVar14 + uVar18) < iVar7)) {
          uVar12 = uVar13 + uVar18 * -2;
          do {
            uVar13 = uVar12;
            uVar14 = uVar14 + uVar18 * 2;
            uVar12 = uVar13 + uVar18 * -2;
          } while ((int)(uVar18 + uVar14) < iVar7);
          puVar15[-3] = uVar14;
          *puVar15 = uVar13;
        }
        if (uVar13 != 0) {
          uVar14 = -uVar13;
          if (0 < (int)uVar13) {
            uVar14 = uVar13;
          }
          if (*(uint *)(this + 0x250) <= uVar14) {
            *(ulong *)puVar17 = CONCAT44(DAT_001200ec,Cascade::DIRTY_ALL);
            puVar17[2] = DAT_001200f0;
            break;
          }
        }
        plVar16 = (long *)((long)plVar16 + 4);
        puVar15 = puVar15 + 1;
      } while (local_40 != plVar16);
      uVar14 = *puVar17;
      if ((uVar14 == 0) && (puVar17[1] == 0)) {
        if (puVar17[2] != 0) {
          if (Cascade::DIRTY_ALL == 0) goto LAB_00102d50;
          goto LAB_00102c22;
        }
      }
      else {
        if (uVar14 == Cascade::DIRTY_ALL) {
LAB_00102d50:
          if ((puVar17[1] == DAT_001200ec) && (puVar17[2] == DAT_001200f0)) goto LAB_00102c84;
        }
LAB_00102c22:
        uVar13 = puVar17[1];
        iVar7 = *(int *)(this + 0x250);
        uVar12 = -uVar13;
        if (0 < (int)uVar13) {
          uVar12 = uVar13;
        }
        if ((int)uVar14 < 1) {
          uVar14 = -uVar14;
        }
        uVar13 = puVar17[2];
        uVar9 = -uVar13;
        if (0 < (int)uVar13) {
          uVar9 = uVar13;
        }
        uVar14 = (iVar7 - uVar9) * (iVar7 - uVar12) * (iVar7 - uVar14);
        if (uVar14 >> 1 < iVar7 * iVar7 * iVar7 - uVar14) {
          *(ulong *)puVar17 = CONCAT44(DAT_001200ec,Cascade::DIRTY_ALL);
          puVar17[2] = DAT_001200f0;
        }
      }
LAB_00102c84:
      puVar15 = puVar17 + 0x14;
      puVar17 = puVar17 + 0x30;
    } while (puVar8 + (ulong)uVar6 * 0x30 != puVar15);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
    local_4c = auVar22;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::GI::SDFGI::update_light() */

void __thiscall RendererRD::GI::SDFGI::update_light(SDFGI *this)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = RenderingDevice::get_singleton();
  local_90 = 0;
  local_88 = "SDFGI Update dynamic Light";
  local_80 = 0x1a;
  local_78 = CONCAT44(_LC17,_LC17);
  fStack_70 = _LC17;
  fStack_6c = _LC17;
  String::parse_latin1((StrRange *)&local_90);
  RenderingDevice::draw_command_begin_label(uVar4,(StrRange *)&local_90,&local_78);
  lVar8 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(int *)(this + 600) != 0) {
    uVar9 = 0;
    do {
      uVar4 = RenderingDevice::get_singleton();
      uVar2 = *(uint *)(this + 600);
      if (uVar2 <= (uint)uVar9) {
        uVar9 = uVar9 & 0xffffffff;
        goto LAB_00102ed7;
      }
      lVar8 = uVar9 * 0xc0 + *(long *)(this + 0x260);
      uVar9 = uVar9 + 1;
      RenderingDevice::buffer_copy
                (uVar4,*(undefined8 *)(lVar8 + 0x38),*(undefined8 *)(lVar8 + 0x40),0,0,0x10);
    } while ((uint)uVar9 < *(uint *)(this + 600));
  }
  RenderingDevice::get_singleton();
  pvVar5 = (void *)RenderingDevice::compute_list_begin();
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline
            (uVar4,pvVar5,*(undefined8 *)(*(long *)(this + 0x180) + 0x14a0));
  local_58 = *(undefined4 *)(this + 0x2b4);
  fStack_70 = (float)*(uint *)(this + 0x250);
  fStack_6c = *(float *)(this + 600);
  local_4c = (uint)(byte)this[0x2e0];
  local_78 = CONCAT44(fStack_70,fStack_70);
  local_54 = CONCAT44(*(undefined4 *)(this + 0x2fc),*(undefined4 *)(this + 0x2e4));
  if (fStack_6c != 0.0) {
    uVar9 = 0;
    do {
      lVar8 = uVar9 * 0xc0;
      lVar11 = *(long *)(this + 0x260) + lVar8;
      local_68 = CONCAT44(*(undefined4 *)(this + uVar9 * 4 + 0x308),(uint)uVar9);
      if (*(char *)(lVar11 + 0xbc) == '\0') {
        uVar10 = 1;
        iVar7 = *(int *)(*(long *)(this + 0x180) + 0x165c);
        if (iVar7 != 0) {
          uVar10 = *(uint *)(update_light()::frames_to_update_table + (long)iVar7 * 4);
          uVar6 = RendererCompositorRD::frame;
          if (*(code **)(*RenderingServerGlobals::rasterizer + 0x88) !=
              RendererCompositorRD::get_frame_number) {
            uVar6 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
          }
          iVar7 = (int)(uVar6 % (ulong)uVar10);
        }
      }
      else {
        iVar7 = 0;
        uVar10 = 1;
      }
      uVar2 = *(uint *)(this + 600);
      local_60 = iVar7;
      local_5c = uVar10;
      if (uVar2 <= (uint)uVar9) {
LAB_00102ed7:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar2,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = uVar9 + 1;
      *(undefined1 *)(*(long *)(this + 0x260) + 0xbc + lVar8) = 0;
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar4,pvVar5,*(undefined8 *)(lVar11 + 0x90),0);
      lVar8 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar8,pvVar5,(uint)&local_78);
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_indirect(uVar4,pvVar5,*(undefined8 *)(lVar11 + 0x40),0)
      ;
    } while ((uint)uVar9 < *(uint *)(this + 600));
  }
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::GI::SDFGI::store_probes() */

void __thiscall RendererRD::GI::SDFGI::store_probes(SDFGI *this)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined8 uStack_ac;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int iStack_8c;
  undefined4 local_7c;
  undefined4 local_5c;
  undefined4 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = RenderingDevice::get_singleton();
  local_d0 = 0;
  local_c8 = "SDFGI Store Probes";
  local_c0 = 0x12;
  local_b8 = CONCAT44(_LC17,_LC17);
  fStack_b0 = (float)_LC17;
  uStack_ac = CONCAT44(uStack_ac._4_4_,_LC17);
  String::parse_latin1((StrRange *)&local_d0);
  RenderingDevice::draw_command_begin_label(uVar5,(StrRange *)&local_d0,&local_b8);
  lVar8 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = RenderingServerGlobals::utilities;
  iStack_8c = *(int *)(this + 0x2b4);
  fStack_b0 = (float)*(uint *)(this + 0x250);
  local_b8 = CONCAT44(fStack_b0,fStack_b0);
  local_90 = (int)((ulong)*(undefined8 *)(this + 0x2b0) >> 0x20);
  uStack_ac = CONCAT44(local_90,(int)*(undefined8 *)(this + 600));
  local_90 = local_90 * local_90;
  local_58 = 0;
  local_a0 = CONCAT44(*(undefined4 *)(this + 0x2a0),
                      *(uint *)(this + 0x304) % *(uint *)(this + 0x2a0));
  local_7c = 0;
  local_94 = *(undefined4 *)(this + 0x2f4);
  local_98 = *(undefined4 *)
              (update_probes(RID,RendererRD::SkyRD::Sky*)::ray_count +
              (long)*(int *)(*(long *)(this + 0x180) + 0x1654) * 4);
  local_5c = *(undefined4 *)(this + 0x2fc);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar4 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_d0 = 0;
    local_c8 = "Average SDFGI Probes";
    local_c0 = 0x14;
    String::parse_latin1((StrRange *)&local_d0);
    (*pcVar4)(plVar1);
    lVar8 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  RenderingDevice::get_singleton();
  pvVar6 = (void *)RenderingDevice::compute_list_begin();
  uVar5 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline
            (uVar5,pvVar6,*(undefined8 *)(*(long *)(this + 0x180) + 0x1630));
  _local_90 = CONCAT44(iStack_8c * 6,local_90 * 6);
  if (*(int *)(this + 600) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      local_a4 = uVar9;
      uVar5 = RenderingDevice::get_singleton();
      if (*(uint *)(this + 600) <= uVar9) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar9,
                   (ulong)*(uint *)(this + 600),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar9 = uVar9 + 1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x260) + 0xa8 + lVar8);
      lVar8 = lVar8 + 0xc0;
      RenderingDevice::compute_list_bind_uniform_set(uVar5,pvVar6,*puVar2,0);
      uVar5 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set
                (uVar5,pvVar6,*(undefined8 *)(*(long *)(this + 0x180) + 0x1648),1);
      lVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar7,pvVar6,(uint)&local_b8);
      lVar7 = RenderingDevice::get_singleton();
      iVar3 = *(int *)(this + 0x2b4);
      RenderingDevice::compute_list_dispatch_threads(lVar7,(uint)pvVar6,iVar3 * iVar3 * 6,iVar3 * 6)
      ;
    } while (uVar9 < *(uint *)(this + 600));
  }
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::SDFGI::get_pending_region_data(int, Vector3i&, Vector3i&, AABB&) const */

int __thiscall
RendererRD::GI::SDFGI::get_pending_region_data
          (SDFGI *this,int param_1,Vector3i *param_2,Vector3i *param_3,AABB *param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  float fVar12;
  undefined1 auVar13 [12];
  float local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c [8];
  undefined4 local_34;
  long local_30;
  
  auVar13._8_4_ = local_34;
  auVar13._0_8_ = local_3c;
  iVar7 = *(int *)(this + 600);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar7 == 0) {
LAB_0010359f:
    iVar10 = -1;
LAB_00103777:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
      _local_3c = auVar13;
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar10;
  }
  iVar10 = 0;
  iVar11 = 0;
  lVar9 = *(long *)(this + 0x260);
LAB_00103570:
  do {
    lVar8 = 0;
    if (((*(int *)(lVar9 + 0x70) != Cascade::DIRTY_ALL) || (DAT_001200ec != *(int *)(lVar9 + 0x74)))
       || (DAT_001200f0 != *(int *)(lVar9 + 0x78))) {
LAB_00103578:
      iVar3 = *(int *)(lVar9 + 0x70 + lVar8 * 4);
      if (iVar3 == 0) goto LAB_00103587;
      if (param_1 != iVar11) {
        iVar11 = iVar11 + 1;
        goto LAB_00103587;
      }
      local_50 = *(int *)(this + 0x250);
      iVar7 = (int)lVar8;
      local_68 = 0;
      lVar8 = (long)iVar7;
      local_60 = 0;
      local_58 = CONCAT44(local_50,local_50);
      if (iVar3 < 1) {
        *(int *)((long)&local_68 + lVar8 * 4) = iVar3 + *(int *)((long)&local_58 + lVar8 * 4);
        iVar11 = local_50 - local_60;
      }
      else {
        *(int *)((long)&local_58 + lVar8 * 4) = iVar3;
        iVar11 = local_50;
      }
      iVar3 = local_60;
      lVar8 = 0;
      if (iVar7 != 0) {
        do {
          iVar4 = *(int *)(lVar9 + 0x70 + lVar8 * 4);
          if (iVar4 < 1) {
            if (iVar4 != 0) {
              piVar1 = (int *)((long)&local_58 + lVar8 * 4);
              *piVar1 = *piVar1 + iVar4;
            }
          }
          else {
            piVar1 = (int *)((long)&local_68 + lVar8 * 4);
            *piVar1 = *piVar1 + iVar4;
          }
          lVar8 = lVar8 + 1;
        } while (iVar7 != lVar8);
      }
      fVar2 = *(float *)(lVar9 + 0x60);
      *(undefined8 *)param_2 = local_68;
      iVar7 = (int)((ulong)local_68 >> 0x20);
      fVar12 = _LC17 / *(float *)(this + 0x2fc);
      *(int *)(param_2 + 8) = local_60;
      *(int *)(param_3 + 8) = iVar11;
      *(ulong *)param_3 =
           CONCAT44((int)((ulong)local_58 >> 0x20) - iVar7,(int)local_58 - (int)local_68);
      uVar6 = *(uint *)(this + 0x250) >> 1;
      local_40 = (iVar3 - uVar6) + *(int *)(lVar9 + 0x6c);
      local_48 = CONCAT44((iVar7 - uVar6) + (int)((ulong)*(undefined8 *)(lVar9 + 100) >> 0x20),
                          ((int)local_68 - uVar6) + (int)*(undefined8 *)(lVar9 + 100));
      _local_3c = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_48);
      local_70 = _LC17;
      *(float *)(param_4 + 8) = SUB124(_local_3c,8) * fVar2;
      *(ulong *)param_4 =
           CONCAT44(fVar2 * (float)local_3c._4_4_ * fVar12,(float)local_3c._0_4_ * fVar2);
      local_70 = local_70 / *(float *)(this + 0x2fc);
      goto LAB_00103722;
    }
    if (param_1 == iVar11) {
      *(undefined8 *)param_2 = 0;
      fVar2 = *(float *)(lVar9 + 0x60);
      *(undefined4 *)(param_2 + 8) = 0;
      fVar12 = _LC17 / *(float *)(this + 0x2fc);
      uVar5 = *(undefined4 *)(this + 0x250);
      *(undefined4 *)(param_3 + 8) = uVar5;
      *(ulong *)param_3 = CONCAT44(uVar5,uVar5);
      uVar6 = *(uint *)(this + 0x250) >> 1;
      local_40 = *(int *)(lVar9 + 0x6c) - uVar6;
      local_48 = CONCAT44((int)((ulong)*(undefined8 *)(lVar9 + 100) >> 0x20) - uVar6,
                          (int)*(undefined8 *)(lVar9 + 100) - uVar6);
      _local_3c = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_48);
      local_70 = _LC17;
      *(float *)(param_4 + 8) = SUB124(_local_3c,8) * fVar2;
      *(ulong *)param_4 =
           CONCAT44(fVar2 * (float)local_3c._4_4_ * fVar12,(float)local_3c._0_4_ * fVar2);
      local_70 = local_70 / *(float *)(this + 0x2fc);
LAB_00103722:
      fVar2 = *(float *)(lVar9 + 0x60);
      auVar13 = Vector3i::operator_cast_to_Vector3(param_3);
      local_3c._0_4_ = auVar13._0_4_;
      local_3c._4_4_ = auVar13._4_4_;
      *(float *)(param_4 + 0x14) = auVar13._8_4_ * fVar2;
      *(ulong *)(param_4 + 0xc) =
           CONCAT44(fVar2 * (float)local_3c._4_4_ * local_70,(float)local_3c._0_4_ * fVar2);
      goto LAB_00103777;
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 1;
    lVar9 = lVar9 + 0xc0;
  } while (iVar7 != iVar10);
  goto LAB_0010359f;
LAB_00103587:
  lVar8 = lVar8 + 1;
  if (lVar8 == 3) goto code_r0x00103591;
  goto LAB_00103578;
code_r0x00103591:
  iVar10 = iVar10 + 1;
  lVar9 = lVar9 + 0xc0;
  if (iVar7 == iVar10) goto LAB_0010359f;
  goto LAB_00103570;
}



/* RendererRD::GI::SDFGI::update_cascades() */

void __thiscall RendererRD::GI::SDFGI::update_cascades(SDFGI *this)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long in_FS_OFFSET;
  float extraout_XMM1_Da;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8 [49];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(this + 0x250);
  uVar10 = uVar4 >> 4;
  if (*(int *)(this + 600) != 0) {
    lVar6 = *(long *)(this + 0x260);
    lVar9 = 0;
    puVar7 = local_1c8;
    while( true ) {
      uVar4 = uVar4 >> 1;
      lVar8 = lVar9 * 0xc0;
      lVar6 = lVar6 + lVar8;
      fVar1 = *(float *)(lVar6 + 0x60);
      local_1e8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar6 + 100) >> 0x20) - uVar4,
                           (int)*(undefined8 *)(lVar6 + 100) - uVar4);
      local_1e0 = *(int *)(lVar6 + 0x6c) - uVar4;
      local_1d8 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_1e8);
      uVar4 = *(uint *)(this + 600);
      *(float *)(puVar7 + 1) = fVar1 * extraout_XMM1_Da;
      *puVar7 = CONCAT44(fVar1 * (float)((ulong)local_1d8 >> 0x20),fVar1 * (float)local_1d8);
      local_1d0 = extraout_XMM1_Da;
      if (uVar4 <= (uint)lVar9) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar9,(ulong)uVar4,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar6 = *(long *)(this + 0x260);
      lVar9 = lVar9 + 1;
      lVar8 = lVar6 + lVar8;
      iVar2 = *(int *)(lVar8 + 100);
      *(float *)((long)puVar7 + 0xc) = _LC17 / *(float *)(lVar8 + 0x60);
      *(int *)(puVar7 + 2) = iVar2 / (int)uVar10;
      *(int *)((long)puVar7 + 0x14) = *(int *)(lVar8 + 0x68) / (int)uVar10;
      iVar2 = *(int *)(lVar8 + 0x6c);
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      *(int *)(puVar7 + 3) = iVar2 / (int)uVar10;
      if (uVar4 <= (uint)lVar9) break;
      uVar4 = *(uint *)(this + 0x250);
      puVar7 = puVar7 + 6;
    }
  }
  local_1f0 = local_1c8;
  uVar5 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar5,*(undefined8 *)(this + 0x2d8),0,0x180,local_1f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::SDFGI::pre_process_gi(Transform3D const&, RenderDataRD*) */

void RendererRD::GI::SDFGI::pre_process_gi(Transform3D *param_1,RenderDataRD *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long in_RDX;
  long lVar19;
  float *pfVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  code *in_R9;
  code *pcVar25;
  code *in_R11;
  ulong uVar26;
  long lVar27;
  long in_FS_OFFSET;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined8 *local_22b0;
  long local_2290;
  undefined8 local_2258;
  int local_2250;
  undefined1 local_2248 [8];
  int local_2240;
  undefined8 local_2238;
  float local_2230;
  ulong local_222c;
  int local_2224;
  undefined8 local_2220;
  float fStack_2218;
  float fStack_2214;
  undefined4 local_2210;
  undefined4 local_220c;
  float local_2208;
  float local_2204;
  float local_2200;
  undefined4 local_21fc;
  float local_21f8;
  float local_21f4;
  float local_21f0;
  undefined8 local_21e8;
  float local_21e0;
  undefined8 local_21d8;
  float local_21d0;
  float local_21c8 [96];
  undefined1 local_2048 [8];
  float local_2040 [2];
  undefined8 uStack_2038;
  float local_2030;
  uint uStack_202c;
  undefined8 uStack_2028;
  float afStack_2020 [2040];
  long local_40;
  
  auVar38._8_4_ = local_2240;
  auVar38._0_8_ = local_2248;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RDX + 0x288) != 0) {
    lVar16 = RendererRD::LightStorage::get_singleton();
    uVar23 = *(uint *)(param_1 + 600);
    uVar18 = (ulong)uVar23;
    local_2210 = 0x3f800000;
    local_2230 = (float)*(uint *)(param_1 + 0x250);
    local_2224 = *(int *)(param_1 + 0x2b4);
    uVar22 = *(uint *)(param_1 + 0x250) >> 4;
    local_21d0 = (float)(local_2224 + -1);
    local_2238 = CONCAT44(local_2230,local_2230);
    local_21d8 = CONCAT44(local_21d0,local_21d0);
    local_222c = (ulong)CONCAT14(param_1[0x2e0],uVar23);
    local_21fc = *(undefined4 *)(param_1 + 0x2fc);
    local_21f8 = (float)(((double)(local_2230 / local_21d0) - __LC71) /
                        (double)(local_2230 / local_21d0));
    fStack_2218 = (float)(_LC72 / (double)(uint)(local_2224 * local_2224 * 8));
    fStack_2214 = (float)(_LC72 / (double)(uint)(local_2224 * 8));
    local_2220 = CONCAT44((*(float *)(param_1 + 0x2f0) / local_2230) * local_21d0,_LC17 / local_21d0
                         );
    local_220c = *(undefined4 *)(param_1 + 0x2ec);
    local_2204 = fStack_2214 * _LC73;
    local_2208 = fStack_2218 * _LC73;
    local_21e8 = _LC144;
    local_2200 = (float)(uint)(local_2224 * 8) * fStack_2218;
    local_21e0 = _LC17 / (float)uVar23;
    local_21f4 = local_21f8;
    local_21f0 = local_21f8;
    if (uVar23 != 0) {
      pfVar20 = local_21c8;
      lVar27 = 0;
      do {
        uVar23 = (uint)lVar27;
        if ((uint)uVar18 <= uVar23) {
LAB_001043a0:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,lVar27,uVar18,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar25 = (code *)invalidInstructionException();
          (*pcVar25)();
        }
        lVar19 = *(long *)(param_1 + 0x260);
        pcVar25 = (code *)(lVar27 * 0xc0);
        uVar13 = *(uint *)(param_1 + 0x250) >> 1;
        fVar32 = *(float *)(pcVar25 + lVar19 + 0x60);
        local_2248 = (undefined1  [8])
                     CONCAT44((int)((ulong)*(undefined8 *)(pcVar25 + lVar19 + 100) >> 0x20) - uVar13
                              ,(int)*(undefined8 *)(pcVar25 + lVar19 + 100) - uVar13);
        local_2240 = *(int *)(pcVar25 + lVar19 + 0x6c) - uVar13;
        in_R9 = pcVar25;
        auVar38 = Vector3i::operator_cast_to_Vector3((Vector3i *)local_2248);
        fVar34 = *(float *)(param_2 + 0x24);
        fVar28 = *(float *)(param_1 + 0x2fc);
        fVar30 = *(float *)(param_2 + 0x28);
        uVar13 = *(uint *)(param_1 + 600);
        uVar18 = (ulong)uVar13;
        _local_2048 = auVar38;
        pfVar20[2] = fVar32 * auVar38._8_4_ - *(float *)(param_2 + 0x2c);
        *pfVar20 = fVar32 * auVar38._0_4_ - fVar34;
        pfVar20[1] = fVar32 * auVar38._4_4_ - fVar28 * fVar30;
        uVar6 = *(uint *)(param_1 + 0x250);
        if (uVar13 <= uVar23) goto LAB_001043a0;
        iVar14 = *(int *)(param_1 + 0x2b4);
        in_R11 = pcVar25 + *(long *)(param_1 + 0x260);
        fVar32 = *(float *)(in_R11 + 0x60);
        iVar7 = *(int *)(in_R11 + 0x68);
        iVar8 = *(int *)(in_R11 + 100);
        pfVar20[6] = (float)(*(int *)(in_R11 + 0x6c) / (int)uVar22);
        pfVar20[5] = (float)(iVar7 / (int)uVar22);
        pfVar20[0xb] = 1.0;
        pfVar20[3] = _LC17 / (((float)uVar6 * fVar32) / (float)(iVar14 - 1));
        pfVar20[7] = _LC17 / fVar32;
        pfVar20[4] = (float)(iVar8 / (int)uVar22);
        if (*(long *)(in_RDX + 0x1c8) != 0) {
          fVar32 = (float)RendererCameraAttributes::
                          camera_attributes_get_exposure_normalization_factor
                                    (RenderingServerGlobals::camera_attributes,
                                     *(undefined8 *)(in_RDX + 0x1c8),
                                     (long)iVar8 % (long)(int)uVar22 & 0xffffffff);
          uVar18 = (ulong)*(uint *)(param_1 + 600);
          if (*(uint *)(param_1 + 600) <= uVar23) goto LAB_001043a0;
          pfVar20[0xb] = fVar32 / *(float *)(pcVar25 + *(long *)(param_1 + 0x260) + 0xb8);
        }
        lVar27 = lVar27 + 1;
        pfVar20 = pfVar20 + 0xc;
      } while ((uint)lVar27 < (uint)local_222c);
    }
    uVar17 = RenderingDevice::get_singleton();
    local_22b0 = &local_2238;
    RenderingDevice::buffer_update
              (uVar17,*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x1690),0,0x1f0);
    auVar38._8_4_ = local_2240;
    auVar38._0_8_ = local_2248;
    local_2290 = 0;
    if (*(int *)(param_1 + 600) != 0) {
      do {
        lVar27 = *(long *)(param_1 + 0x260);
        lVar19 = *(long *)(*(long *)(*(long *)(in_RDX + 0x288) + 0x18) + 8);
        if (lVar19 == 0) {
          uVar23 = 0;
        }
        else {
          uVar18 = 0;
          uVar23 = 0;
          do {
            local_22b0 = *(undefined8 **)(lVar19 + -8);
            if (((uint)local_22b0 <= (uint)uVar18) || (uVar23 == 0x80)) break;
            _local_2248 = auVar38;
            if ((long)local_22b0 <= (long)uVar18) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar18,(long)local_22b0,"p_index",
                         "size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar25 = (code *)invalidInstructionException();
              (*pcVar25)();
            }
            uVar9 = *(ulong *)(lVar19 + uVar18 * 8);
            if (((uint)uVar9 < *(uint *)(lVar16 + 0x84)) && (uVar9 >> 0x20 != 0x7fffffff)) {
              lVar19 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(lVar16 + 0x80)) * 0x498 +
                       *(long *)(*(long *)(lVar16 + 0x70) +
                                ((uVar9 & 0xffffffff) / (ulong)*(uint *)(lVar16 + 0x80)) * 8);
              if ((*(uint *)(lVar19 + 0x490) & 0x7fffffff) != (uint)(uVar9 >> 0x20))
              goto LAB_00103f00;
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)invalidInstructionException();
                (*pcVar25)();
              }
              if ((int)*(uint *)(lVar19 + 0x490) < 0) goto LAB_00104ef8;
              uVar9 = *(ulong *)(lVar19 + 0x3d0);
              fVar32 = *(float *)(lVar19 + 0x3e0);
              uVar22 = *(uint *)(lVar19 + 0x3ec);
              fVar34 = *(float *)(lVar19 + 0x3f8);
              iVar14 = (**(code **)(*RenderingServerGlobals::light_storage + 0xd0))
                                 (RenderingServerGlobals::light_storage,uVar9);
              auVar38 = _local_2248;
              if (iVar14 != 2) {
                fVar30 = (float)(uVar22 ^ _LC79) * *(float *)(param_1 + 0x2fc);
                fVar28 = fVar32 * fVar32 + fVar30 * fVar30 + fVar34 * fVar34;
                fVar29 = 0.0;
                uVar17 = 0;
                if (fVar28 != 0.0) {
                  fVar28 = SQRT(fVar28);
                  auVar31._4_4_ = fVar30;
                  auVar31._0_4_ = (uint)fVar32 ^ _LC79;
                  auVar31._8_4_ = _UNK_00146754;
                  auVar31._12_4_ = _UNK_00146754;
                  auVar37._4_4_ = fVar28;
                  auVar37._0_4_ = fVar28;
                  auVar37._8_8_ = _LC61;
                  auVar31 = divps(auVar31,auVar37);
                  fVar29 = (float)((uint)fVar34 ^ _LC79) / fVar28;
                  uVar17 = auVar31._0_8_;
                }
                uVar26 = (ulong)uVar23;
                (&uStack_2038)[uVar26 * 8] = uVar17;
                (&local_2030)[uVar26 * 0x10] = fVar29;
                uVar22 = (uint)uVar9;
                iVar14 = (int)(uVar9 >> 0x20);
                if (*(code **)(*RenderingServerGlobals::light_storage + 0x110) ==
                    LightStorage::light_get_color) {
                  if ((uVar9 != 0) &&
                     (uVar22 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                    lVar19 = ((uVar9 & 0xffffffff) %
                             (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      ((uVar9 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8);
                    if (*(int *)(lVar19 + 0xe0) == iVar14) {
                      fVar32 = *(float *)(lVar19 + 0x58);
                      fVar34 = *(float *)(lVar19 + 0x5c);
                      fVar28 = *(float *)(lVar19 + 0x60);
                      goto LAB_001040fe;
                    }
                    if (*(int *)(lVar19 + 0xe0) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  in_R9 = (code *)0x0;
                  local_22b0 = (undefined8 *)0x0;
                  _err_print_error("light_get_color",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x215,"Parameter \"light\" is null.");
                  fVar28 = 0.0;
                  fVar32 = 0.0;
                  fVar34 = 0.0;
LAB_00104141:
                  fVar32 = fVar32 * _LC81;
                }
                else {
                  auVar38 = (**(code **)(*RenderingServerGlobals::light_storage + 0x110))
                                      (RenderingServerGlobals::light_storage,uVar9);
                  fVar28 = auVar38._8_4_;
                  fVar32 = auVar38._0_4_;
                  fVar34 = auVar38._4_4_;
LAB_001040fe:
                  if (_LC80 <= fVar28) {
                    fVar28 = powf((float)(((double)fVar28 + __LC82) * __LC83),_LC84);
                  }
                  else {
                    fVar28 = fVar28 * _LC81;
                  }
                  if (_LC80 <= fVar34) {
                    fVar34 = powf((float)(((double)fVar34 + __LC82) * __LC83),_LC84);
                  }
                  else {
                    fVar34 = fVar34 * _LC81;
                  }
                  if (fVar32 < _LC80) goto LAB_00104141;
                  fVar32 = powf((float)(((double)fVar32 + __LC82) * __LC83),_LC84);
                }
                afStack_2020[uVar26 * 0x10 + 2] = 0.0;
                *(ulong *)(local_2048 + uVar26 * 0x40) = CONCAT44(fVar34,fVar32);
                local_2040[uVar26 * 0x10] = fVar28;
                if (*(code **)(*RenderingServerGlobals::light_storage + 0x108) ==
                    LightStorage::light_get_param) {
                  if ((uVar9 == 0) ||
                     (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)) {
LAB_001050f0:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar32 = 0.0;
                    goto LAB_00104fac;
                  }
                  lVar19 = ((uVar9 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    ((uVar9 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  iVar7 = *(int *)(lVar19 + 0xe0);
                  if (iVar7 != iVar14) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_001050f0;
                  }
                  fVar32 = *(float *)(lVar19 + 4);
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_001041f2;
LAB_00104f70:
                  fVar34 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,uVar9,1);
                }
                else {
                  fVar32 = (float)(**(code **)(*RenderingServerGlobals::light_storage + 0x108))
                                            (RenderingServerGlobals::light_storage,uVar9,0);
LAB_00104fac:
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_00104f70;
                  if (uVar9 == 0) {
LAB_00104fcb:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar34 = 0.0;
                  }
                  else {
LAB_001041f2:
                    if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                    goto LAB_00104fcb;
                    lVar19 = ((uVar9 & 0xffffffff) %
                             (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      ((uVar9 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8);
                    iVar7 = *(int *)(lVar19 + 0xe0);
                    if (iVar7 != iVar14) {
                      if (iVar7 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                      goto LAB_00104fcb;
                    }
                    fVar34 = *(float *)(lVar19 + 8);
                  }
                }
                in_R11 = LightStorage::light_get_param;
                local_2040[uVar26 * 0x10 + 1] = fVar34 * fVar32;
                if (*(char *)(RendererSceneRenderRD::singleton + 0x179) != '\0') {
                  if (*(code **)(*RenderingServerGlobals::light_storage + 0x108) ==
                      LightStorage::light_get_param) {
                    if ((uVar9 != 0) &&
                       (uVar22 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                      lVar19 = ((uVar9 & 0xffffffff) %
                               (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                               *(long *)(RenderingServerGlobals::light_storage[3] +
                                        ((uVar9 & 0xffffffff) /
                                        (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5))
                                        * 8);
                      iVar7 = *(int *)(lVar19 + 0xe0);
                      if (iVar7 == iVar14) {
                        fVar32 = *(float *)(lVar19 + 0x54);
                        goto LAB_001042ba;
                      }
                      if (iVar7 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                    }
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar32 = 0.0;
                  }
                  else {
                    fVar32 = (float)(**(code **)(*RenderingServerGlobals::light_storage + 0x108))
                                              (RenderingServerGlobals::light_storage,uVar9,0x14);
                  }
LAB_001042ba:
                  local_2040[uVar26 * 0x10 + 1] = fVar32 * local_2040[uVar26 * 0x10 + 1];
                }
                if (*(long *)(in_RDX + 0x1c8) != 0) {
                  fVar32 = (float)RendererCameraAttributes::
                                  camera_attributes_get_exposure_normalization_factor
                                            (RenderingServerGlobals::camera_attributes,
                                             *(undefined8 *)(in_RDX + 0x1c8));
                  local_2040[uVar26 * 0x10 + 1] = fVar32 * local_2040[uVar26 * 0x10 + 1];
                }
                if (*(code **)(*RenderingServerGlobals::light_storage + 0xe8) ==
                    LightStorage::light_has_shadow) {
                  if ((uVar9 != 0) &&
                     (uVar22 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                    lVar19 = ((uVar9 & 0xffffffff) %
                             (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      ((uVar9 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8);
                    iVar7 = *(int *)(lVar19 + 0xe0);
                    if (iVar7 == iVar14) {
                      uVar22 = (uint)*(byte *)(lVar19 + 0x70);
                      goto LAB_0010434a;
                    }
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  in_R9 = (code *)0x0;
                  local_22b0 = (undefined8 *)0x0;
                  _err_print_error("light_has_shadow",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x230,"Parameter \"light\" is null.");
                  uVar22 = 0;
                }
                else {
                  bVar12 = (**(code **)(*RenderingServerGlobals::light_storage + 0xe8))
                                     (RenderingServerGlobals::light_storage,uVar9);
                  uVar22 = (uint)bVar12;
                }
LAB_0010434a:
                uVar23 = uVar23 + 1;
                (&uStack_202c)[uVar26 * 0x10] = uVar22;
                auVar38 = _local_2248;
              }
            }
            else {
LAB_00103f00:
              in_R9 = (code *)0x0;
              local_22b0 = (undefined8 *)0x0;
              _err_print_error("pre_process_gi","servers/rendering/renderer_rd/environment/gi.cpp",
                               0x767,
                               "Condition \"!light_storage->owns_light_instance(light_instance)\" is true. Continuing."
                              );
              auVar38 = _local_2248;
            }
            uVar18 = (ulong)((uint)uVar18 + 1);
            lVar19 = *(long *)(*(long *)(*(long *)(in_RDX + 0x288) + 0x18) + 8);
          } while (lVar19 != 0);
        }
        lVar27 = lVar27 + local_2290 * 0xc0;
        uVar22 = *(uint *)(param_1 + 0x250) >> 1;
        fVar32 = *(float *)(lVar27 + 0x60);
        local_2250 = *(int *)(lVar27 + 0x6c) - uVar22;
        local_2258 = CONCAT44((int)((ulong)*(undefined8 *)(lVar27 + 100) >> 0x20) - uVar22,
                              (int)*(undefined8 *)(lVar27 + 100) - uVar22);
        _local_2248 = auVar38;
        auVar38 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_2258);
        fVar28 = auVar38._8_4_ * fVar32;
        lVar19 = *(long *)(in_RDX + 0x288);
        fVar34 = (float)*(uint *)(param_1 + 0x250) * *(float *)(lVar27 + 0x60);
        local_2248._4_4_ = auVar38._4_4_;
        fVar30 = (float)local_2248._4_4_ * fVar32;
        local_2248._0_4_ = auVar38._0_4_;
        fVar32 = fVar32 * (float)local_2248._0_4_;
        if (*(int *)(lVar19 + 0x28) == 0) {
LAB_0010520f:
          uVar22 = 0;
          if (uVar23 != 0) {
            iVar14 = uVar23 << 6;
            uVar22 = uVar23;
            goto LAB_00104d15;
          }
        }
        else {
          if (uVar23 != 0x80) {
            lVar21 = 0;
            do {
              uVar18 = *(ulong *)(*(long *)(lVar19 + 0x20) + lVar21 * 8);
              _local_2248 = auVar38;
              if (((uint)uVar18 < *(uint *)(lVar16 + 0x84)) &&
                 ((RenderDataRD *)(uVar18 >> 0x20) != (RenderDataRD *)0x7fffffff)) {
                lVar19 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(lVar16 + 0x80)) * 0x498 +
                         *(long *)(*(long *)(lVar16 + 0x70) +
                                  ((uVar18 & 0xffffffff) / (ulong)*(uint *)(lVar16 + 0x80)) * 8);
                uVar22 = *(uint *)(lVar19 + 0x490) & 0x7fffffff;
                if (uVar22 != (uint)(uVar18 >> 0x20)) goto LAB_001044e0;
                if (uVar18 == 0) {
                  pre_process_gi((Transform3D *)(ulong)uVar22,(RenderDataRD *)(uVar18 >> 0x20));
                  return;
                }
                if ((int)*(uint *)(lVar19 + 0x490) < 0) {
LAB_00104ef8:
                  _local_2248 = auVar38;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
                  pcVar25 = (code *)invalidInstructionException();
                  (*pcVar25)();
                }
                uVar1 = *(undefined4 *)(lVar19 + 0x3fc);
                fVar29 = *(float *)(lVar19 + 0x3ac);
                fVar33 = *(float *)(lVar19 + 0x3b0);
                fVar35 = *(float *)(lVar19 + 0x400);
                pcVar10 = *(char **)(lVar19 + 0x3d0);
                fVar36 = *(float *)(lVar19 + 0x3b4);
                fVar2 = *(float *)(lVar19 + 0x3c0);
                fVar3 = *(float *)(lVar19 + 0x404);
                fVar4 = *(float *)(lVar19 + 0x3b8);
                uVar22 = *(uint *)(lVar19 + 0x3e0);
                fVar5 = *(float *)(lVar19 + 0x3bc);
                uVar13 = *(uint *)(lVar19 + 0x3ec);
                uVar6 = *(uint *)(lVar19 + 0x3f8);
                uVar15 = (**(code **)(*RenderingServerGlobals::light_storage + 0x128))
                                   (RenderingServerGlobals::light_storage,pcVar10);
                auVar38 = _local_2248;
                if (uVar15 < (uint)local_2290) goto LAB_00104505;
                if ((((fVar34 < 0.0) || (fVar4 < 0.0)) || (fVar5 < 0.0)) || (fVar2 < 0.0)) {
                  in_R9 = (code *)0x0;
                  local_22b0 = (undefined8 *)0x0;
                  _err_print_error("intersects","./core/math/aabb.h",0x8e,
                                   "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                                  );
                }
                auVar38 = _local_2248;
                if ((((fVar4 + fVar29 <= fVar32) || (fVar34 + fVar32 <= fVar29)) ||
                    ((fVar5 + fVar33 <= fVar30 ||
                     ((fVar34 + fVar30 <= fVar33 || (fVar2 + fVar36 <= fVar28)))))) ||
                   (fVar34 + fVar28 <= fVar36)) goto LAB_00104505;
                uVar18 = (ulong)uVar23;
                (&uStack_2038)[uVar18 * 8] = CONCAT44(uVar13 ^ _LC88._4_4_,uVar22 ^ (uint)_LC88);
                fVar29 = *(float *)(param_1 + 0x2fc);
                afStack_2020[uVar18 * 0x10] = fVar3;
                (&local_2030)[uVar18 * 0x10] = (float)(uVar6 ^ _LC79);
                (&uStack_2028)[uVar18 * 8] = CONCAT44(fVar35 * fVar29,uVar1);
                uVar22 = (uint)pcVar10;
                fVar29 = (float)((ulong)pcVar10 >> 0x20);
                if (*(code **)(*RenderingServerGlobals::light_storage + 0x110) ==
                    LightStorage::light_get_color) {
                  if ((pcVar10 != (char *)0x0) &&
                     (uVar22 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                    lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                             (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      (((ulong)pcVar10 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8);
                    if (*(float *)(lVar19 + 0xe0) == fVar29) {
                      fVar33 = *(float *)(lVar19 + 0x58);
                      fVar35 = *(float *)(lVar19 + 0x5c);
                      fVar36 = *(float *)(lVar19 + 0x60);
                      goto LAB_0010480a;
                    }
                    if ((int)*(float *)(lVar19 + 0xe0) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,in_R11);
                    }
                  }
                  in_R9 = (code *)0x0;
                  local_22b0 = (undefined8 *)0x0;
                  _err_print_error("light_get_color",
                                   "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                   0x215,"Parameter \"light\" is null.");
                  fVar36 = 0.0;
                  fVar35 = 0.0;
                  fVar33 = 0.0;
LAB_0010483d:
                  fVar33 = fVar33 * _LC81;
                }
                else {
                  auVar38 = (**(code **)(*RenderingServerGlobals::light_storage + 0x110))
                                      (RenderingServerGlobals::light_storage,pcVar10);
                  fVar36 = auVar38._8_4_;
                  fVar33 = auVar38._0_4_;
                  fVar35 = auVar38._4_4_;
LAB_0010480a:
                  if (_LC80 <= fVar36) {
                    fVar36 = powf((float)(((double)fVar36 + __LC82) * __LC83),_LC84);
                  }
                  else {
                    fVar36 = fVar36 * _LC81;
                  }
                  if (_LC80 <= fVar35) {
                    fVar35 = powf((float)(((double)fVar35 + __LC82) * __LC83),_LC84);
                  }
                  else {
                    fVar35 = fVar35 * _LC81;
                  }
                  if (fVar33 < _LC80) goto LAB_0010483d;
                  fVar33 = powf((float)(((double)fVar33 + __LC82) * __LC83),_LC84);
                }
                lVar19 = *RenderingServerGlobals::light_storage;
                *(ulong *)(local_2048 + uVar18 * 0x40) = CONCAT44(fVar35,fVar33);
                local_2040[uVar18 * 0x10] = fVar36;
                if (*(code **)(lVar19 + 0xf8) == LightStorage::light_get_type) {
                  if ((pcVar10 == (char *)0x0) ||
                     (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)) {
LAB_0010578c:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_get_type",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x1ff,"Parameter \"light\" is null.");
                    fVar33 = 0.0;
                    goto LAB_00105430;
                  }
                  pfVar20 = (float *)((((ulong)pcVar10 & 0xffffffff) %
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      0xe8 + *(long *)(RenderingServerGlobals::light_storage[3] +
                                                      (((ulong)pcVar10 & 0xffffffff) /
                                                      (ulong)*(uint *)(RenderingServerGlobals::
                                                                       light_storage + 5)) * 8));
                  fVar33 = pfVar20[0x38];
                  pcVar24 = (char *)((ulong)pcVar10 >> 0x20);
                  if (fVar33 != fVar29) {
                    if ((int)fVar33 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,local_22b0);
                    }
                    goto LAB_0010578c;
                  }
                  afStack_2020[uVar18 * 0x10 + 2] = *pfVar20;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_001048f8;
LAB_00105711:
                  pcVar24 = pcVar10;
                  fVar33 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,pcVar10,0);
LAB_00105498:
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_001056f6;
                  if (pcVar10 == (char *)0x0) {
LAB_001054c0:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar35 = 0.0;
                  }
                  else {
LAB_00104959:
                    if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                    goto LAB_001054c0;
                    lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                             (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      (((ulong)pcVar10 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8);
                    fVar35 = *(float *)(lVar19 + 0xe0);
                    if (fVar35 != fVar29) {
                      if ((int)fVar35 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0,in_R11);
                      }
                      goto LAB_001054c0;
                    }
                    fVar35 = *(float *)(lVar19 + 8);
                  }
                }
                else {
                  pcVar24 = pcVar10;
                  fVar33 = (float)(**(code **)(lVar19 + 0xf8))();
LAB_00105430:
                  afStack_2020[uVar18 * 0x10 + 2] = fVar33;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_00105711;
                  if (pcVar10 == (char *)0x0) {
LAB_0010546f:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar33 = 0.0;
                    goto LAB_00105498;
                  }
LAB_001048f8:
                  if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                  goto LAB_0010546f;
                  lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    (((ulong)pcVar10 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  fVar33 = *(float *)(lVar19 + 0xe0);
                  if (fVar33 != fVar29) {
                    if ((int)fVar33 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,
                                       (ulong)pcVar10 >> 0x20);
                    }
                    goto LAB_0010546f;
                  }
                  fVar33 = *(float *)(lVar19 + 4);
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_00104959;
LAB_001056f6:
                  pcVar24 = pcVar10;
                  fVar35 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,pcVar10,1);
                }
                local_2040[uVar18 * 0x10 + 1] = fVar35 * fVar33;
                if (*(char *)(RendererSceneRenderRD::singleton + 0x179) != '\0') {
                  if (*(code **)(*RenderingServerGlobals::light_storage + 0x108) ==
                      LightStorage::light_get_param) {
                    if ((pcVar10 != (char *)0x0) &&
                       (uVar22 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                      lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                               (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                               *(long *)(RenderingServerGlobals::light_storage[3] +
                                        (((ulong)pcVar10 & 0xffffffff) /
                                        (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5))
                                        * 8);
                      fVar33 = *(float *)(lVar19 + 0xe0);
                      if (fVar33 == fVar29) {
                        fVar33 = *(float *)(lVar19 + 0x54);
                        goto LAB_00104a2f;
                      }
                      if ((int)fVar33 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0,local_22b0);
                      }
                    }
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar33 = 0.0;
                  }
                  else {
                    pcVar24 = pcVar10;
                    fVar33 = (float)(**(code **)(*RenderingServerGlobals::light_storage + 0x108))
                                              (RenderingServerGlobals::light_storage,pcVar10,0x14);
                  }
LAB_00104a2f:
                  fVar33 = fVar33 * local_2040[uVar18 * 0x10 + 1];
                  fVar35 = afStack_2020[uVar18 * 0x10 + 2];
                  local_2040[uVar18 * 0x10 + 1] = fVar33;
                  if (fVar35 == 1.4013e-45) {
                    local_2040[uVar18 * 0x10 + 1] = (float)((double)fVar33 * __LC89);
                  }
                  else if (fVar35 == 2.8026e-45) {
                    local_2040[uVar18 * 0x10 + 1] = (float)((double)fVar33 * __LC90);
                  }
                }
                if (*(long *)(in_RDX + 0x1c8) != 0) {
                  pcVar24 = *(char **)(in_RDX + 0x1c8);
                  fVar33 = (float)RendererCameraAttributes::
                                  camera_attributes_get_exposure_normalization_factor
                                            (RenderingServerGlobals::camera_attributes);
                  local_2040[uVar18 * 0x10 + 1] = fVar33 * local_2040[uVar18 * 0x10 + 1];
                }
                if (*(code **)(*RenderingServerGlobals::light_storage + 0xe8) ==
                    LightStorage::light_has_shadow) {
                  if ((pcVar10 == (char *)0x0) ||
                     (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)) {
LAB_00105865:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_has_shadow",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x230,"Parameter \"light\" is null.");
                    uVar13 = 0;
                    goto LAB_00105502;
                  }
                  lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    (((ulong)pcVar10 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  fVar33 = *(float *)(lVar19 + 0xe0);
                  if (fVar33 != fVar29) {
                    if ((int)fVar33 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,
                                       (ulong)pcVar10 >> 0x20);
                    }
                    goto LAB_00105865;
                  }
                  (&uStack_202c)[uVar18 * 0x10] = (uint)*(byte *)(lVar19 + 0x70);
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_00104b20;
LAB_001056c8:
                  pcVar24 = pcVar10;
                  fVar33 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,pcVar10,6);
LAB_00105563:
                  afStack_2020[uVar18 * 0x10 + 1] = fVar33;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_001056b9;
                  if (pcVar10 == (char *)0x0) {
LAB_0010559d:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar33 = 0.0;
                    goto LAB_001055c6;
                  }
LAB_00104b93:
                  if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                  goto LAB_0010559d;
                  lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    (((ulong)pcVar10 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  fVar33 = *(float *)(lVar19 + 0xe0);
                  if (fVar33 != fVar29) {
                    if ((int)fVar33 + 0x80000000U < 0x7fffffff) {
                      in_R11 = in_R9;
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,in_R9);
                    }
                    goto LAB_0010559d;
                  }
                  lVar11 = *RenderingServerGlobals::light_storage;
                  afStack_2020[uVar18 * 0x10 + 5] = *(float *)(lVar19 + 0x14);
                  pcVar25 = *(code **)(lVar11 + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_00104c06;
LAB_00105691:
                  fVar33 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,pcVar10,7);
                  fVar33 = cosf(fVar33 * _LC91);
LAB_0010562d:
                  afStack_2020[uVar18 * 0x10 + 3] = fVar33;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_001056aa;
                  if (pcVar10 == (char *)0x0) {
LAB_00105663:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar29 = 0.0;
                    auVar38 = _local_2248;
                  }
                  else {
LAB_00104c86:
                    if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                    goto LAB_00105663;
                    lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                             (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      (((ulong)pcVar10 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8);
                    if (*(float *)(lVar19 + 0xe0) != fVar29) {
                      if ((int)*(float *)(lVar19 + 0xe0) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0,lVar19);
                      }
                      goto LAB_00105663;
                    }
                    fVar29 = *(float *)(lVar19 + 0x24);
                    auVar38 = _local_2248;
                  }
                }
                else {
                  pcVar24 = pcVar10;
                  bVar12 = (**(code **)(*RenderingServerGlobals::light_storage + 0xe8))();
                  uVar13 = (uint)bVar12;
LAB_00105502:
                  (&uStack_202c)[uVar18 * 0x10] = uVar13;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_001056c8;
                  if (pcVar10 == (char *)0x0) {
LAB_0010553a:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    pcVar24 = "./servers/rendering/renderer_rd/storage_rd/light_storage.h";
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar33 = 0.0;
                    goto LAB_00105563;
                  }
LAB_00104b20:
                  if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                  goto LAB_0010553a;
                  lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    (((ulong)pcVar10 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  if (*(float *)(lVar19 + 0xe0) != fVar29) {
                    if ((int)*(float *)(lVar19 + 0xe0) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,lVar19);
                    }
                    goto LAB_0010553a;
                  }
                  lVar11 = *RenderingServerGlobals::light_storage;
                  afStack_2020[uVar18 * 0x10 + 1] = *(float *)(lVar19 + 0x1c);
                  pcVar25 = *(code **)(lVar11 + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_00104b93;
LAB_001056b9:
                  pcVar24 = pcVar10;
                  fVar33 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,pcVar10,4);
LAB_001055c6:
                  afStack_2020[uVar18 * 0x10 + 5] = fVar33;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 != LightStorage::light_get_param) goto LAB_00105691;
                  if (pcVar10 == (char *)0x0) {
LAB_00105600:
                    in_R9 = (code *)0x0;
                    local_22b0 = (undefined8 *)0x0;
                    _err_print_error("light_get_param",
                                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                     0x207,"Parameter \"light\" is null.");
                    fVar33 = _LC17;
                    goto LAB_0010562d;
                  }
LAB_00104c06:
                  if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar22)
                  goto LAB_00105600;
                  lVar19 = (((ulong)pcVar10 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    (((ulong)pcVar10 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  fVar33 = *(float *)(lVar19 + 0xe0);
                  if (fVar33 != fVar29) {
                    if ((int)fVar33 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,pcVar24);
                    }
                    goto LAB_00105600;
                  }
                  fVar33 = cosf(_LC91 * *(float *)(lVar19 + 0x20));
                  afStack_2020[uVar18 * 0x10 + 3] = fVar33;
                  pcVar25 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
                  if (pcVar25 == LightStorage::light_get_param) goto LAB_00104c86;
LAB_001056aa:
                  fVar29 = (float)(*pcVar25)(RenderingServerGlobals::light_storage,pcVar10,8);
                  auVar38 = _local_2248;
                }
                uVar23 = uVar23 + 1;
                afStack_2020[uVar18 * 0x10 + 4] = _LC17 / fVar29;
                lVar19 = *(long *)(in_RDX + 0x288);
                if (*(uint *)(lVar19 + 0x28) <= (int)lVar21 + 1U) goto LAB_0010520f;
                if (uVar23 == 0x80) break;
              }
              else {
LAB_001044e0:
                in_R9 = (code *)0x0;
                local_22b0 = (undefined8 *)0x0;
                _err_print_error("pre_process_gi","servers/rendering/renderer_rd/environment/gi.cpp"
                                 ,0x794,
                                 "Condition \"!light_storage->owns_light_instance(light_instance)\" is true. Continuing."
                                );
                auVar38 = _local_2248;
LAB_00104505:
                lVar19 = *(long *)(in_RDX + 0x288);
                if (*(uint *)(lVar19 + 0x28) <= (int)lVar21 + 1U) goto LAB_0010520f;
              }
              lVar21 = lVar21 + 1;
            } while( true );
          }
          iVar14 = 0x2000;
          uVar22 = 0x80;
LAB_00104d15:
          local_22b0 = (undefined8 *)local_2048;
          _local_2248 = auVar38;
          uVar17 = RenderingDevice::get_singleton();
          RenderingDevice::buffer_update(uVar17,*(undefined8 *)(lVar27 + 0xb0),0,iVar14);
          auVar38 = _local_2248;
        }
        *(uint *)(param_1 + local_2290 * 4 + 0x308) = uVar22;
        local_2290 = local_2290 + 1;
      } while ((uint)local_2290 < *(uint *)(param_1 + 600));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  _local_2248 = auVar38;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::SDFGI::render_region(Ref<RenderSceneBuffersRD>, int,
   PagedArray<RenderGeometryInstance*> const&, float) */

void __thiscall
RendererRD::GI::SDFGI::render_region
          (undefined4 param_1,SDFGI *this,long *param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  Object *pOVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined4 uVar28;
  undefined8 uVar27;
  uint local_198;
  uint local_188;
  uint local_180;
  long local_150;
  Object *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined1 local_e8 [16];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int iStack_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("render_region","servers/rendering/renderer_rd/environment/gi.cpp",0x7db,
                       "Condition \"p_render_buffers.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00107167;
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_130 = 0;
  local_128 = 0;
  local_124 = 0;
  local_11c = 0;
  fVar9 = (float)get_pending_region_data
                           (this,param_4 + -1,(Vector3i *)&local_130,(Vector3i *)&local_124,
                            (AABB *)&local_108);
  fVar10 = (float)get_pending_region_data
                            (this,param_4 + 1,(Vector3i *)&local_130,(Vector3i *)&local_124,
                             (AABB *)&local_108);
  fVar11 = (float)get_pending_region_data
                            (this,param_4,(Vector3i *)&local_130,(Vector3i *)&local_124,
                             (AABB *)&local_108);
  if ((int)fVar11 < 0) {
    _err_print_error("render_region","servers/rendering/renderer_rd/environment/gi.cpp",0x7e3,
                     "Condition \"cascade < 0\" is true.",0,0);
  }
  else {
    if (fVar9 != fVar11) {
      uVar14 = RenderingDevice::get_singleton();
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      uVar28 = 0;
      RenderingDevice::texture_clear(uVar14,*(undefined8 *)(this + 0x188),&local_b8,0,1,0,1);
      uVar14 = RenderingDevice::get_singleton();
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      uVar27 = CONCAT44(uVar28,1);
      RenderingDevice::texture_clear(uVar14,*(undefined8 *)(this + 400),&local_b8,0,1,0,uVar27);
      uVar28 = (undefined4)((ulong)uVar27 >> 0x20);
      uVar14 = RenderingDevice::get_singleton();
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      uVar27 = CONCAT44(uVar28,1);
      RenderingDevice::texture_clear(uVar14,*(undefined8 *)(this + 0x198),&local_b8,0,1,0,uVar27);
      uVar28 = (undefined4)((ulong)uVar27 >> 0x20);
      uVar14 = RenderingDevice::get_singleton();
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      RenderingDevice::texture_clear
                (uVar14,*(undefined8 *)(this + 0x1e0),&local_b8,0,1,0,CONCAT44(uVar28,1));
    }
    plVar1 = RendererSceneRenderRD::singleton;
    pcVar6 = *(code **)(*RendererSceneRenderRD::singleton + 0x200);
    local_148 = (Object *)0x0;
    if (((Object *)*param_3 != (Object *)0x0) &&
       (local_148 = (Object *)*param_3, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
      local_148 = (Object *)0x0;
    }
    (*pcVar6)(plVar1,&local_148,(Vector3i *)&local_130,(Vector3i *)&local_124,(AABB *)&local_108,
              param_5,this + 0x188,this + 400,this + 0x198,this + 0x1e0);
    if (((local_148 != (Object *)0x0) &&
        (cVar8 = RefCounted::unreference(), pOVar7 = local_148, cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_148), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (fVar10 != fVar11) {
      uVar14 = RenderingDevice::get_singleton();
      local_150 = 0;
      local_148 = (Object *)0x120d88;
      local_b8 = _LC17;
      fStack_b4 = _LC17;
      fStack_b0 = _LC17;
      fStack_ac = _LC17;
      local_140 = 0x19;
      String::parse_latin1((StrRange *)&local_150);
      RenderingDevice::draw_command_begin_label(uVar14,(StrRange *)&local_150,&local_b8);
      lVar15 = local_150;
      if (local_150 == 0) {
LAB_00105e52:
        cVar8 = (char)RenderingServerGlobals::utilities[1];
        plVar1 = RenderingServerGlobals::utilities;
      }
      else {
        LOCK();
        plVar1 = (long *)(local_150 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_00105e52;
        local_150 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
        cVar8 = (char)RenderingServerGlobals::utilities[1];
        plVar1 = RenderingServerGlobals::utilities;
      }
      RenderingServerGlobals::utilities = plVar1;
      if (cVar8 != '\0') {
        pcVar6 = *(code **)(*plVar1 + 0x68);
        local_150 = 0;
        local_148 = (Object *)0x120da2;
        local_140 = 0x12;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar15 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
      }
      plVar1 = RenderingServerGlobals::utilities;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      fStack_c0 = 0.0;
      uStack_bc = 0;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_150 = 0;
        local_148 = (Object *)0x120db5;
        local_140 = 0x10;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar15 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
      }
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
      local_e8._12_4_ = *(undefined4 *)(this + 0x250);
      lVar15 = (long)(int)fVar11 * 0xc0;
      lVar20 = *(long *)(this + 0x260) + lVar15;
      local_e8._0_4_ = *(int *)(lVar20 + 0x70);
      fStack_c0 = fVar11;
      if (Cascade::DIRTY_ALL == local_e8._0_4_) {
        if ((DAT_001200ec == *(int *)(lVar20 + 0x74)) && (DAT_001200f0 == *(int *)(lVar20 + 0x78)))
        {
          local_e8._0_12_ = ZEXT812(0);
          *(undefined1 *)(lVar20 + 0xbc) = 1;
          *(undefined4 *)(lVar20 + 0xb8) = param_1;
        }
        else {
          *(undefined1 *)(lVar20 + 0xbc) = 1;
          bVar26 = DAT_001200ec != *(int *)(lVar20 + 0x74);
          local_e8._8_4_ = *(undefined4 *)(lVar20 + 0x78);
          local_e8._4_4_ = *(int *)(lVar20 + 0x74);
          *(undefined4 *)(lVar20 + 0xb8) = param_1;
          if (bVar26) goto LAB_00105f15;
        }
        if (*(int *)(lVar20 + 0x78) != DAT_001200f0) goto LAB_00105f15;
      }
      else {
        *(undefined1 *)(lVar20 + 0xbc) = 1;
        local_e8._8_4_ = *(undefined4 *)(lVar20 + 0x78);
        local_e8._4_4_ = *(undefined4 *)(lVar20 + 0x74);
        *(undefined4 *)(lVar20 + 0xb8) = param_1;
LAB_00105f15:
        uVar14 = RenderingDevice::get_singleton();
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        RenderingDevice::buffer_copy
                  (uVar14,*(undefined8 *)(lVar15 + *(long *)(this + 0x260) + 0x38),
                   *(undefined8 *)(lVar15 + *(long *)(this + 0x260) + 0x40),0,0,0x10);
        RenderingDevice::get_singleton();
        pvVar16 = (void *)RenderingDevice::compute_list_begin();
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xad8));
        uVar14 = RenderingDevice::get_singleton();
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0x98 + lVar15),0);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,(uint)local_e8);
        uVar14 = RenderingDevice::get_singleton();
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        RenderingDevice::compute_list_dispatch_indirect
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0x40 + lVar15),0);
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xae0));
        uVar14 = RenderingDevice::get_singleton();
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0xa0 + lVar15),0);
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        lVar20 = lVar15 + *(long *)(this + 0x260);
        iVar2 = *(int *)(lVar20 + 0x70);
        iVar3 = *(int *)(lVar20 + 0x74);
        iVar4 = *(int *)(lVar20 + 0x78);
        iVar5 = *(int *)(this + 0x250);
        iVar12 = -iVar2;
        if (0 < iVar2) {
          iVar12 = iVar2;
        }
        iVar13 = -iVar3;
        if (0 < iVar3) {
          iVar13 = iVar3;
        }
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,(uint)local_e8);
        lVar20 = RenderingDevice::get_singleton();
        uVar19 = (uint)pvVar16;
        RenderingDevice::compute_list_dispatch_threads(lVar20,uVar19,iVar5 - iVar12,iVar5 - iVar13);
        local_9c = *(undefined4 *)(this + 0x2a0);
        local_a0 = 0;
        local_b8 = (float)*(uint *)(this + 0x250);
        fStack_ac = (float)*(ulong *)(this + 600);
        uVar21 = *(ulong *)(this + 600) & 0xffffffff;
        local_98 = 0;
        uVar17 = *(uint *)(this + 0x250) >> 4;
        local_7c = 0;
        local_58 = 0;
        iStack_a8 = (int)((ulong)*(undefined8 *)(this + 0x2b0) >> 0x20);
        local_6c = (undefined1  [16])0x0;
        local_5c = *(undefined4 *)(this + 0x2fc);
        local_90 = CONCAT44(*(undefined4 *)(this + 0x2b4),iStack_a8 * iStack_a8);
        fStack_b4 = local_b8;
        fStack_b0 = local_b8;
        local_a4 = fVar11;
        if ((uint)fStack_ac <= (uint)fVar11) goto LAB_00106bd0;
        lVar20 = lVar15 + *(long *)(this + 0x260);
        local_88 = *(int *)(lVar20 + 100) / (int)uVar17;
        local_84 = *(int *)(lVar20 + 0x68) / (int)uVar17;
        local_80 = *(int *)(lVar20 + 0x6c) / (int)uVar17;
        local_78 = iVar2 / (int)uVar17;
        local_74 = iVar3 / (int)uVar17;
        local_70 = iVar4 / (int)uVar17;
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1638));
        uVar14 = RenderingDevice::get_singleton();
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0xa8 + lVar15),0);
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1648),1);
        lVar20 = RenderingDevice::get_singleton();
        uVar18 = (uint)&local_b8;
        RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar18);
        lVar20 = RenderingDevice::get_singleton();
        uVar17 = *(uint *)(this + 0x2b4);
        RenderingDevice::compute_list_dispatch_threads(lVar20,uVar19,uVar17 * uVar17,uVar17);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_add_barrier(lVar20);
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1640));
        uVar14 = RenderingDevice::get_singleton();
        uVar21 = (ulong)(uint)*(float *)(this + 600);
        if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0xa8 + lVar15),0);
        uVar14 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1648),1);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar18);
        lVar20 = RenderingDevice::get_singleton();
        uVar17 = *(uint *)(this + 0x2b4);
        RenderingDevice::compute_list_dispatch_threads(lVar20,uVar19,uVar17 * uVar17,uVar17);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_add_barrier(lVar20);
        if (0.0 < *(float *)(this + 0x2e4)) {
          uVar14 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1630));
          local_90 = CONCAT44(local_90._4_4_ * 6,(int)local_90 * 6);
          uVar14 = RenderingDevice::get_singleton();
          uVar21 = (ulong)(uint)*(float *)(this + 600);
          if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0xa8 + lVar15),0);
          uVar14 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1648),1);
          lVar20 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar18);
          lVar20 = RenderingDevice::get_singleton();
          iVar2 = *(int *)(this + 0x2b4);
          RenderingDevice::compute_list_dispatch_threads(lVar20,uVar19,iVar2 * iVar2 * 6,iVar2 * 6);
        }
        RenderingDevice::get_singleton();
        RenderingDevice::compute_list_end();
      }
      local_118 = (undefined1  [16])0x0;
      uVar14 = RenderingDevice::get_singleton();
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) {
LAB_00106bd0:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)fVar11,uVar21,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      RenderingDevice::buffer_update
                (uVar14,*(undefined8 *)(*(long *)(this + 0x260) + 0x38 + lVar15),0,0x10,local_118);
      RenderingDevice::get_singleton();
      pvVar16 = (void *)RenderingDevice::compute_list_begin();
      uVar17 = *(uint *)(this + 0x250);
      local_e8._12_4_ = (int)local_e8._12_4_ >> 1;
      uVar14 = RenderingDevice::get_singleton();
      uVar17 = uVar17 >> 1;
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xaf0));
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar16,*(undefined8 *)(this + 0x210),0)
      ;
      lVar20 = RenderingDevice::get_singleton();
      uVar19 = (uint)local_e8;
      RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
      lVar20 = RenderingDevice::get_singleton();
      uVar18 = (uint)pvVar16;
      RenderingDevice::compute_list_dispatch_threads(lVar20,uVar18,uVar17,uVar17);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar20);
      plVar1 = RenderingServerGlobals::utilities;
      uStack_c8 = 1;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_150 = 0;
        local_148 = (Object *)0x120dc6;
        local_140 = 0x1c;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar20 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
      }
      uVar14 = RenderingDevice::get_singleton();
      uVar23 = 0;
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xaf8));
      uVar24 = uVar17;
      do {
        if (uVar24 < 2) break;
        uVar25 = uVar24 >> 2;
        uVar24 = uVar24 >> 1;
        uStack_cc = uVar24;
        uVar14 = RenderingDevice::get_singleton();
        lVar20 = (long)(int)uVar23;
        uVar23 = uVar23 ^ 1;
        RenderingDevice::compute_list_bind_uniform_set
                  (uVar14,pvVar16,*(undefined8 *)(this + lVar20 * 8 + 0x228),0);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_dispatch_threads(lVar20,uVar18,uVar17,uVar17);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_add_barrier(lVar20);
      } while (uVar17 / uVar25 < 8);
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_148 = (Object *)0x121710;
        local_150 = 0;
        local_140 = 0x26;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar20 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
      }
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xb00));
      if (1 < uVar24) {
        do {
          uVar24 = uVar24 >> 1;
          uStack_cc = uVar24;
          uVar14 = RenderingDevice::get_singleton();
          lVar20 = (long)(int)uVar23;
          uVar23 = uVar23 ^ 1;
          RenderingDevice::compute_list_bind_uniform_set
                    (uVar14,pvVar16,*(undefined8 *)(this + lVar20 * 8 + 0x228),0);
          lVar20 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
          lVar20 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_dispatch_threads(lVar20,uVar18,uVar17,uVar17);
          lVar20 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_add_barrier(lVar20);
        } while (uVar24 != 1);
      }
      local_e8._12_4_ = *(undefined4 *)(this + 0x250);
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xb08));
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar16,*(undefined8 *)(this + 0x238),0)
      ;
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar20,uVar18,*(uint *)(this + 0x250),*(uint *)(this + 0x250));
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar20);
      uStack_cc = 1;
      uStack_c8 = 0;
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xb00));
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set
                (uVar14,pvVar16,*(undefined8 *)(this + (long)*(int *)(this + 0x240) * 8 + 0x218),0);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar20,uVar18,*(uint *)(this + 0x250),*(uint *)(this + 0x250));
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar20);
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_150 = 0;
        local_148 = (Object *)0x120de3;
        local_140 = 0xf;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar20 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
      }
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      uVar17 = *(uint *)(this + 0x250) >> 4;
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
      lVar20 = lVar15 + *(long *)(this + 0x260);
      iVar2 = *(int *)(lVar20 + 0x6c);
      iVar3 = *(int *)(lVar20 + 0x68);
      iVar4 = *(int *)(lVar20 + 100);
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xb10));
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar14,pvVar16,*(undefined8 *)(this + 0x248),0)
      ;
      local_188 = iVar3 / (int)uVar17 & 1;
      local_180 = iVar4 / (int)uVar17 & 1;
      local_198 = iVar2 / (int)uVar17 & 1;
      uVar24 = 0;
      do {
        uVar25 = uVar24 & 1 ^ local_180;
        uVar23 = (int)uVar24 >> 1 & 1U ^ local_188;
        uStack_d0 = (int)uVar24 >> 2;
        if (local_198 != 0) {
          uStack_d0 = ((int)uVar24 >> 2) + 1U & 1;
        }
        uVar22 = uVar24 + 1;
        local_d8 = uVar25;
        uStack_d4 = uVar23;
        uStack_c4 = uVar24;
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
        lVar20 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_dispatch
                  (lVar20,uVar18,(uVar17 + 1) - uVar25,(uVar17 + 1) - uVar23);
        uVar24 = uVar22;
      } while (uVar22 != 8);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar20);
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_150 = 0;
        local_148 = (Object *)0x120df3;
        local_140 = 0xb;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar20 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar20 + -0x10),false);
          }
        }
      }
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0xb18));
      uVar14 = RenderingDevice::get_singleton();
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
      RenderingDevice::compute_list_bind_uniform_set
                (uVar14,pvVar16,*(undefined8 *)(*(long *)(this + 0x260) + 0x80 + lVar15),0);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar20,pvVar16,uVar19);
      lVar20 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads
                (lVar20,uVar18,*(uint *)(this + 0x250),*(uint *)(this + 0x250));
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      uVar14 = RenderingDevice::get_singleton();
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
      RenderingDevice::texture_clear
                (uVar14,*(undefined8 *)(*(long *)(this + 0x260) + 8 + lVar15),&local_b8,0,1,0,1);
      uVar14 = RenderingDevice::get_singleton();
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
      RenderingDevice::texture_clear
                (uVar14,*(undefined8 *)(*(long *)(this + 0x260) + 0x10 + lVar15),&local_b8,0,1,0,1);
      uVar14 = RenderingDevice::get_singleton();
      uVar21 = (ulong)(uint)*(float *)(this + 600);
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      if ((uint)*(float *)(this + 600) <= (uint)fVar11) goto LAB_00106bd0;
      RenderingDevice::texture_clear
                (uVar14,*(undefined8 *)(*(long *)(this + 0x260) + 0x18 + lVar15),&local_b8,0,1,0,1);
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_150 = 0;
        local_148 = (Object *)0x120dff;
        local_140 = 0x12;
        String::parse_latin1((StrRange *)&local_150);
        (*pcVar6)(plVar1);
        lVar15 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar15 + -0x10),false);
          }
        }
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107167:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::SDFGI::render_static_lights(RenderDataRD*, Ref<RenderSceneBuffersRD>, unsigned
   int, unsigned int const*, PagedArray<RID> const*) */

void __thiscall
RendererRD::GI::SDFGI::render_static_lights
          (SDFGI *this,undefined8 param_1,long *param_3,undefined4 param_4,undefined8 param_5,
          long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  code *pcVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  uint uVar35;
  float fVar36;
  undefined1 auVar37 [12];
  undefined1 auStack_11030 [69632];
  
  puVar8 = &stack0xffffffffffffffd0;
  do {
    puVar24 = puVar8;
    *(undefined8 *)(puVar24 + -0x1000) = *(undefined8 *)(puVar24 + -0x1000);
    puVar8 = puVar24 + -0x1000;
  } while (puVar24 + -0x1000 != auStack_11030);
  *(undefined8 *)(puVar24 + -0x1090) = param_1;
  *(undefined4 *)(puVar24 + -0x10bc) = param_4;
  *(undefined8 *)(puVar24 + -0x10a8) = param_5;
  *(undefined8 *)(puVar24 + 0xfff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    if (*(long *)(puVar24 + 0xfff0) == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("render_static_lights","servers/rendering/renderer_rd/environment/gi.cpp",
                       0x943,"Condition \"p_render_buffers.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00108a78;
  }
  *(undefined8 *)(puVar24 + -0x1120) = 0x1071df;
  lVar12 = RendererRD::LightStorage::get_singleton();
  *(undefined8 *)(puVar24 + -0x1120) = 0x1071e7;
  uVar13 = RenderingDevice::get_singleton();
  *(undefined8 *)(puVar24 + -0x1070) = 0;
  *(char **)(puVar24 + -0x1068) = "SDFGI Render Static Lights";
  *(float *)(puVar24 + -0x18) = _LC17;
  *(float *)(puVar24 + -0x14) = _LC17;
  *(float *)(puVar24 + -0x10) = _LC17;
  *(float *)(puVar24 + -0xc) = _LC17;
  *(undefined8 *)(puVar24 + -0x1060) = 0x1a;
  *(undefined8 *)(puVar24 + -0x1120) = 0x107235;
  String::parse_latin1((StrRange *)(puVar24 + -0x1070));
  *(undefined1 **)(puVar24 + -0x10a0) = puVar24 + -0x18;
  *(undefined8 *)(puVar24 + -0x1120) = 0x107250;
  RenderingDevice::draw_command_begin_label(uVar13,(StrRange *)(puVar24 + -0x1070),puVar24 + -0x18);
  if (*(long *)(puVar24 + -0x1070) != 0) {
    LOCK();
    plVar27 = (long *)(*(long *)(puVar24 + -0x1070) + -0x10);
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (*plVar27 == 0) {
      lVar23 = *(long *)(puVar24 + -0x1070);
      *(undefined8 *)(puVar24 + -0x1070) = 0;
      *(undefined8 *)(puVar24 + -0x1120) = 0x107dd7;
      Memory::free_static((void *)(lVar23 + -0x10),false);
    }
  }
  *(undefined8 *)(puVar24 + -0x1120) = 0x107271;
  update_cascades(this);
  if (*(int *)(puVar24 + -0x10bc) != 0) {
    *(SDFGI **)(puVar24 + -0x10c8) = this;
    *(undefined1 **)(puVar24 + -0x10b0) = puVar24 + -0x1018;
    plVar27 = (long *)(param_6 + 8);
    *(long *)(puVar24 + -0x1108) = *(long *)(puVar24 + -0x10a8);
    *(ulong *)(puVar24 + -0x1088) = (ulong)*(uint *)(puVar24 + -0x10bc) * 4;
    *(ulong *)(puVar24 + -0x1098) =
         *(long *)(puVar24 + -0x10a8) + (ulong)*(uint *)(puVar24 + -0x10bc) * 4;
    *(undefined1 **)(puVar24 + -0x1080) = puVar24 + -0x1018;
LAB_001072c1:
    if (**(uint **)(puVar24 + -0x1108) < *(uint *)(*(long *)(puVar24 + -0x10c8) + 600)) {
      lVar23 = *(long *)(puVar24 + -0x10c8);
      uVar10 = *(uint *)(lVar23 + 0x250);
      lVar28 = (ulong)**(uint **)(puVar24 + -0x1108) * 0xc0 + *(long *)(lVar23 + 0x260);
      uVar13 = *(undefined8 *)(lVar28 + 100);
      iVar19 = *(int *)(lVar28 + 0x6c);
      *(uint *)(puVar24 + -0x1118) = uVar10;
      uVar10 = uVar10 >> 1;
      *(undefined4 *)(puVar24 + -0x1110) = *(undefined4 *)(lVar28 + 0x60);
      *(uint *)(puVar24 + -0x1050) = iVar19 - uVar10;
      *(ulong *)(puVar24 + -0x1058) =
           CONCAT44((int)((ulong)uVar13 >> 0x20) - uVar10,(int)uVar13 - uVar10);
      *(undefined8 *)(puVar24 + -0x1120) = 0x10733a;
      auVar37 = Vector3i::operator_cast_to_Vector3((Vector3i *)(puVar24 + -0x1058));
      fVar30 = *(float *)(puVar24 + -0x1110);
      uVar10 = *(uint *)(lVar23 + 0x250);
      uVar22 = 0;
      uVar26 = plVar27[4];
      *(undefined1 (*) [12])(puVar24 + -0x1048) = auVar37;
      fVar36 = *(float *)(lVar28 + 0x60);
      *(undefined4 *)(puVar24 + -0x10b8) = 0;
      *(float *)(puVar24 + -0x10f0) = (float)uVar10 * fVar36;
      *(float *)(puVar24 + -0x10c0) = *(float *)(puVar24 + -0x1044) * fVar30;
      *(float *)(puVar24 + -0x10b4) = *(float *)(puVar24 + -0x1040) * fVar30;
      *(float *)(puVar24 + -0x10e8) = fVar30 * *(float *)(puVar24 + -0x1048);
      if ((int)uVar26 != 0) {
        do {
          uVar10 = (uint)uVar22;
          if (uVar26 <= uVar22) {
            *(undefined8 *)(puVar24 + -0x1120) = 1;
            *(undefined8 *)(puVar24 + -0x1128) = 0;
            *(undefined **)(puVar24 + -0x1130) = &_LC67;
            *(char **)(puVar24 + -0x1138) = "count";
            *(undefined8 *)(puVar24 + -0x1140) = 0x107d66;
            _err_print_index_error
                      ("operator[]","./core/templates/paged_array.h",0xa9,uVar22,uVar26,"p_index",
                       *(char **)(puVar24 + -0x1138),*(char **)(puVar24 + -0x1130),
                       (bool)puVar24[-0x1128],(bool)puVar24[-0x1120]);
            *(undefined8 *)(puVar24 + -0x1120) = 0x107d6f;
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          uVar26 = *(ulong *)(*(long *)(*plVar27 +
                                       (uVar22 >>
                                       ((byte)*(undefined4 *)((long)plVar27 + 0x14) & 0x3f)) * 8) +
                             (ulong)(uVar10 & *(uint *)(plVar27 + 3)) * 8);
          if (((uint)uVar26 < *(uint *)(lVar12 + 0x84)) && (uVar26 >> 0x20 != 0x7fffffff)) {
            lVar23 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x80)) * 0x498 +
                     *(long *)(*(long *)(lVar12 + 0x70) +
                              ((uVar26 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x80)) * 8);
            if ((*(uint *)(lVar23 + 0x490) & 0x7fffffff) != (uint)(uVar26 >> 0x20))
            goto LAB_001073c0;
            if (uVar26 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            if ((int)*(uint *)(lVar23 + 0x490) < 0) {
              *(undefined8 *)(puVar24 + -0x1128) = 0;
              *(undefined8 *)(puVar24 + -0x1130) = 0x107da7;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0);
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            uVar31 = *(undefined4 *)(lVar23 + 0x3b4);
            uVar1 = *(undefined4 *)(lVar23 + 0x3b0);
            *(undefined4 *)(puVar24 + -0x1100) = *(undefined4 *)(lVar23 + 0x3ac);
            uVar2 = *(undefined4 *)(lVar23 + 0x3fc);
            uVar26 = *(ulong *)(lVar23 + 0x3d0);
            *(undefined4 *)(puVar24 + -0x10e4) = uVar31;
            uVar31 = *(undefined4 *)(lVar23 + 0x400);
            uVar3 = *(undefined4 *)(lVar23 + 0x3b8);
            *(undefined4 *)(puVar24 + -0x10ec) = uVar1;
            lVar25 = *RenderingServerGlobals::light_storage;
            uVar1 = *(undefined4 *)(lVar23 + 0x3bc);
            uVar4 = *(undefined4 *)(lVar23 + 0x3c0);
            uVar5 = *(undefined4 *)(lVar23 + 0x3e0);
            *(undefined4 *)(puVar24 + -0x10d0) = uVar2;
            uVar2 = *(undefined4 *)(lVar23 + 0x3f8);
            uVar6 = *(undefined4 *)(lVar23 + 0x404);
            *(undefined4 *)(puVar24 + -0x1118) = uVar3;
            *(undefined4 *)(puVar24 + -0x10cc) = uVar31;
            uVar31 = *(undefined4 *)(lVar23 + 0x3ec);
            *(undefined4 *)(puVar24 + -0x1110) = uVar1;
            *(undefined4 *)(puVar24 + -0x10f4) = uVar4;
            *(undefined4 *)(puVar24 + -0x10d8) = uVar6;
            *(undefined4 *)(puVar24 + -0x10e0) = uVar5;
            *(undefined4 *)(puVar24 + -0x10d4) = uVar31;
            *(undefined4 *)(puVar24 + -0x10dc) = uVar2;
            pcVar18 = *(code **)(lVar25 + 0x128);
            *(undefined8 *)(puVar24 + -0x1120) = 0x107540;
            uVar11 = (*pcVar18)(RenderingServerGlobals::light_storage,uVar26);
            if (uVar11 < **(uint **)(puVar24 + -0x1108)) goto LAB_001073e5;
            if ((((*(float *)(puVar24 + -0x10f0) <= 0.0 && *(float *)(puVar24 + -0x10f0) != 0.0) ||
                 (*(float *)(puVar24 + -0x1118) <= 0.0 && *(float *)(puVar24 + -0x1118) != 0.0)) ||
                (*(float *)(puVar24 + -0x1110) <= 0.0 && *(float *)(puVar24 + -0x1110) != 0.0)) ||
               (*(float *)(puVar24 + -0x10f4) <= 0.0 && *(float *)(puVar24 + -0x10f4) != 0.0)) {
              *(undefined8 *)(puVar24 + -0x1120) = 0x107d25;
              _err_print_error("intersects","./core/math/aabb.h",0x8e,
                               "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                               ,0);
            }
            if ((*(float *)(puVar24 + -0x1118) + *(float *)(puVar24 + -0x1100) <=
                 *(float *)(puVar24 + -0x10e8)) ||
               (fVar30 = *(float *)(puVar24 + -0x10f0),
               fVar30 + *(float *)(puVar24 + -0x10e8) <= *(float *)(puVar24 + -0x1100)))
            goto LAB_001073e5;
            if ((*(float *)(puVar24 + -0x1110) + *(float *)(puVar24 + -0x10ec) <=
                 *(float *)(puVar24 + -0x10c0)) ||
               (fVar30 + *(float *)(puVar24 + -0x10c0) <= *(float *)(puVar24 + -0x10ec)))
            goto LAB_001073e5;
            if ((*(float *)(puVar24 + -0x10f4) + *(float *)(puVar24 + -0x10e4) <=
                 *(float *)(puVar24 + -0x10b4)) ||
               (fVar30 + *(float *)(puVar24 + -0x10b4) <= *(float *)(puVar24 + -0x10e4)))
            goto LAB_001073e5;
            pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0xf8);
            uVar11 = (uint)uVar26;
            iVar19 = (int)(uVar26 >> 0x20);
            if (pcVar18 == LightStorage::light_get_type) {
              if ((uVar26 != 0) &&
                 (uVar11 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                piVar20 = (int *)(((uVar26 & 0xffffffff) %
                                  (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                  0xe8 + *(long *)(RenderingServerGlobals::light_storage[3] +
                                                  ((uVar26 & 0xffffffff) /
                                                  (ulong)*(uint *)(RenderingServerGlobals::
                                                                   light_storage + 5)) * 8));
                iVar21 = piVar20[0x38];
                if (iVar21 == iVar19) {
                  iVar21 = *piVar20;
                  goto LAB_00107677;
                }
                if (iVar21 + 0x80000000U < 0x7fffffff) {
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x1085e0;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID");
                }
              }
              *(undefined8 *)(puVar24 + -0x1120) = 0x10860d;
              _err_print_error("light_get_type",
                               "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x1ff,
                               "Parameter \"light\" is null.",0);
              lVar23 = (long)*(int *)(puVar24 + -0x10b8);
              fVar36 = (float)(*(uint *)(puVar24 + -0x10dc) ^ _LC79);
              fVar33 = (float)(*(uint *)(puVar24 + -0x10d4) ^ _LC79);
              uVar35 = *(uint *)(puVar24 + -0x10e0) ^ _LC79;
              *(undefined4 *)(puVar24 + lVar23 * 0x40 + 0x18) = 0;
              fVar30 = *(float *)(*(long *)(puVar24 + -0x10c8) + 0x2fc);
LAB_00107e42:
              fVar33 = fVar33 * fVar30;
              fVar29 = *(float *)(puVar24 + -0x10e0) * *(float *)(puVar24 + -0x10e0) +
                       fVar33 * fVar33 +
                       *(float *)(puVar24 + -0x10dc) * *(float *)(puVar24 + -0x10dc);
              if (fVar29 == 0.0) {
                uVar13 = 0;
                fVar36 = 0.0;
              }
              else {
                fVar29 = SQRT(fVar29);
                auVar32._4_4_ = fVar33;
                auVar32._0_4_ = uVar35;
                auVar32._8_8_ = 0;
                fVar36 = fVar36 / fVar29;
                auVar34._4_4_ = fVar29;
                auVar34._0_4_ = fVar29;
                auVar34._8_8_ = _LC61;
                auVar32 = divps(auVar32,auVar34);
                uVar13 = auVar32._0_8_;
              }
            }
            else {
              *(undefined8 *)(puVar24 + -0x1120) = 0x1084b0;
              iVar21 = (*pcVar18)(RenderingServerGlobals::light_storage,uVar26);
LAB_00107677:
              lVar23 = (long)*(int *)(puVar24 + -0x10b8);
              fVar36 = (float)(*(uint *)(puVar24 + -0x10dc) ^ _LC79);
              fVar30 = *(float *)(*(long *)(puVar24 + -0x10c8) + 0x2fc);
              *(int *)(puVar24 + lVar23 * 0x40 + 0x18) = iVar21;
              if (iVar21 == 0) {
                fVar33 = (float)(*(uint *)(puVar24 + -0x10d4) ^ _LC79);
                uVar35 = *(uint *)(puVar24 + -0x10e0) ^ _LC79;
                goto LAB_00107e42;
              }
              uVar13 = CONCAT44(*(uint *)(puVar24 + -0x10d4) ^ _LC88._4_4_,
                                *(uint *)(puVar24 + -0x10e0) ^ (uint)_LC88);
            }
            plVar7 = RenderingServerGlobals::light_storage;
            fVar33 = *(float *)(puVar24 + -0x10cc);
            uVar31 = *(undefined4 *)(puVar24 + -0x10d0);
            lVar25 = *(long *)(puVar24 + -0x10a0);
            uVar1 = *(undefined4 *)(puVar24 + -0x10d8);
            lVar14 = lVar23 * 0x40;
            *(undefined8 *)(lVar25 + 0x10 + lVar14) = uVar13;
            *(float *)(puVar24 + lVar14) = fVar36;
            *(ulong *)(lVar25 + 0x20 + lVar14) = CONCAT44(fVar30 * fVar33,uVar31);
            *(undefined4 *)(puVar24 + lVar14 + 0x10) = uVar1;
            pcVar18 = *(code **)(*plVar7 + 0x110);
            if (pcVar18 == LightStorage::light_get_color) {
              if ((uVar26 != 0) && (uVar11 < *(uint *)((long)plVar7 + 0x2c))) {
                lVar25 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 5)) * 0xe8 +
                         *(long *)(plVar7[3] +
                                  ((uVar26 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 5)) * 8);
                if (*(int *)(lVar25 + 0xe0) == iVar19) {
                  fVar33 = *(float *)(lVar25 + 0x58);
                  fVar36 = *(float *)(lVar25 + 0x5c);
                  fVar30 = *(float *)(lVar25 + 0x60);
                  goto LAB_0010777d;
                }
                if (*(int *)(lVar25 + 0xe0) + 0x80000000U < 0x7fffffff) {
                  *(long *)(puVar24 + -0x1118) = lVar23;
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x108774;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID");
                  lVar23 = *(long *)(puVar24 + -0x1118);
                }
              }
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x1087a9;
              _err_print_error("light_get_color",
                               "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x215,
                               "Parameter \"light\" is null.",0);
              fVar33 = 0.0;
              lVar23 = *(long *)(puVar24 + -0x1118);
              fVar36 = 0.0;
              fVar30 = 0.0;
LAB_001077b0:
              fVar33 = fVar33 * _LC81;
            }
            else {
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x108543;
              auVar37 = (*pcVar18)(plVar7,uVar26);
              fVar30 = auVar37._8_4_;
              fVar33 = auVar37._0_4_;
              lVar23 = *(long *)(puVar24 + -0x1118);
              fVar36 = auVar37._4_4_;
LAB_0010777d:
              if (_LC80 <= fVar30) {
                *(long *)(puVar24 + -0x1100) = lVar23;
                *(float *)(puVar24 + -0x1110) = fVar33;
                *(float *)(puVar24 + -0x1118) = fVar36;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108141;
                fVar30 = powf((float)(((double)fVar30 + __LC82) * __LC83),_LC84);
                lVar23 = *(long *)(puVar24 + -0x1100);
                fVar33 = *(float *)(puVar24 + -0x1110);
                fVar36 = *(float *)(puVar24 + -0x1118);
              }
              else {
                fVar30 = fVar30 * _LC81;
              }
              if (_LC80 <= fVar36) {
                *(long *)(puVar24 + -0x1100) = lVar23;
                *(float *)(puVar24 + -0x1110) = fVar30;
                *(float *)(puVar24 + -0x1118) = fVar33;
                *(undefined8 *)(puVar24 + -0x1120) = 0x1080e1;
                fVar36 = powf((float)(((double)fVar36 + __LC82) * __LC83),_LC84);
                lVar23 = *(long *)(puVar24 + -0x1100);
                fVar30 = *(float *)(puVar24 + -0x1110);
                fVar33 = *(float *)(puVar24 + -0x1118);
              }
              else {
                fVar36 = fVar36 * _LC81;
              }
              if (fVar33 < _LC80) goto LAB_001077b0;
              *(long *)(puVar24 + -0x1100) = lVar23;
              *(float *)(puVar24 + -0x1110) = fVar30;
              *(float *)(puVar24 + -0x1118) = fVar36;
              *(undefined8 *)(puVar24 + -0x1120) = 0x108089;
              fVar33 = powf((float)(((double)fVar33 + __LC82) * __LC83),_LC84);
              lVar23 = *(long *)(puVar24 + -0x1100);
              fVar30 = *(float *)(puVar24 + -0x1110);
              fVar36 = *(float *)(puVar24 + -0x1118);
            }
            plVar7 = RenderingServerGlobals::light_storage;
            *(ulong *)(*(long *)(puVar24 + -0x10a0) + lVar23 * 0x40) = CONCAT44(fVar36,fVar33);
            *(float *)(puVar24 + lVar23 * 0x40 + -0x10) = fVar30;
            pcVar18 = *(code **)(*plVar7 + 0x108);
            if (pcVar18 == LightStorage::light_get_param) {
              if ((uVar26 == 0) || (*(uint *)((long)plVar7 + 0x2c) <= uVar11)) {
LAB_00108808:
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108831;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                lVar23 = *(long *)(puVar24 + -0x1118);
                fVar30 = 0.0;
                goto LAB_00108419;
              }
              lVar25 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 5)) * 0xe8 +
                       *(long *)(plVar7[3] +
                                ((uVar26 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 5)) * 8);
              iVar21 = *(int *)(lVar25 + 0xe0);
              if (iVar21 != iVar19) {
                if (iVar21 + 0x80000000U < 0x7fffffff) {
                  *(long *)(puVar24 + -0x1118) = lVar23;
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x1087fd;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0);
                  lVar23 = *(long *)(puVar24 + -0x1118);
                }
                goto LAB_00108808;
              }
              fVar30 = *(float *)(lVar25 + 4);
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 == LightStorage::light_get_param) goto LAB_0010785a;
LAB_00108481:
              *(long *)(puVar24 + -0x1110) = lVar23;
              *(float *)(puVar24 + -0x1118) = fVar30;
              *(undefined8 *)(puVar24 + -0x1120) = 0x108495;
              fVar36 = (float)(*pcVar18)(RenderingServerGlobals::light_storage,uVar26,1);
              lVar23 = *(long *)(puVar24 + -0x1110);
              fVar30 = *(float *)(puVar24 + -0x1118);
            }
            else {
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x10840b;
              fVar30 = (float)(*pcVar18)(plVar7,uVar26,0);
              lVar23 = *(long *)(puVar24 + -0x1118);
LAB_00108419:
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 != LightStorage::light_get_param) goto LAB_00108481;
              if (uVar26 == 0) {
LAB_00108438:
                *(long *)(puVar24 + -0x1110) = lVar23;
                *(float *)(puVar24 + -0x1118) = fVar30;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108467;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                fVar30 = *(float *)(puVar24 + -0x1118);
                fVar36 = 0.0;
                lVar23 = *(long *)(puVar24 + -0x1110);
              }
              else {
LAB_0010785a:
                if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar11)
                goto LAB_00108438;
                lVar25 = ((uVar26 & 0xffffffff) %
                         (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                         *(long *)(RenderingServerGlobals::light_storage[3] +
                                  ((uVar26 & 0xffffffff) /
                                  (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
                iVar21 = *(int *)(lVar25 + 0xe0);
                if (iVar21 != iVar19) {
                  if (iVar21 + 0x80000000U < 0x7fffffff) {
                    *(long *)(puVar24 + -0x1110) = lVar23;
                    *(float *)(puVar24 + -0x1118) = fVar30;
                    *(undefined8 *)(puVar24 + -0x1128) = 0;
                    *(undefined8 *)(puVar24 + -0x1130) = 0x108933;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID");
                    fVar30 = *(float *)(puVar24 + -0x1118);
                    lVar23 = *(long *)(puVar24 + -0x1110);
                  }
                  goto LAB_00108438;
                }
                fVar36 = *(float *)(lVar25 + 8);
              }
            }
            *(float *)(puVar24 + lVar23 * 0x40 + -0xc) = fVar36 * fVar30;
            if (*(char *)(RendererSceneRenderRD::singleton + 0x179) != '\0') {
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 == LightStorage::light_get_param) {
                if ((uVar26 != 0) &&
                   (uVar11 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
                  lVar25 = ((uVar26 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                           *(long *)(RenderingServerGlobals::light_storage[3] +
                                    ((uVar26 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8
                                    );
                  iVar21 = *(int *)(lVar25 + 0xe0);
                  if (iVar21 == iVar19) {
                    fVar30 = *(float *)(lVar25 + 0x54);
                    goto LAB_00107929;
                  }
                  if (iVar21 + 0x80000000U < 0x7fffffff) {
                    *(long *)(puVar24 + -0x1118) = lVar23;
                    *(undefined8 *)(puVar24 + -0x1128) = 0;
                    *(undefined8 *)(puVar24 + -0x1130) = 0x108a35;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID");
                    lVar23 = *(long *)(puVar24 + -0x1118);
                  }
                }
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108a64;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                lVar23 = *(long *)(puVar24 + -0x1118);
                fVar30 = 0.0;
              }
              else {
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x10869b;
                fVar30 = (float)(*pcVar18)(RenderingServerGlobals::light_storage,uVar26,0x14);
                lVar23 = *(long *)(puVar24 + -0x1118);
              }
LAB_00107929:
              lVar25 = lVar23 * 0x40;
              fVar30 = fVar30 * *(float *)(puVar24 + lVar25 + -0xc);
              *(float *)(puVar24 + lVar25 + -0xc) = fVar30;
              if (*(int *)(puVar24 + lVar25 + 0x18) == 1) {
                *(float *)(puVar24 + lVar25 + -0xc) = (float)((double)fVar30 * __LC89);
              }
              else if (*(int *)(puVar24 + lVar25 + 0x18) == 2) {
                *(float *)(puVar24 + lVar25 + -0xc) = (float)((double)fVar30 * __LC90);
              }
            }
            if (*(long *)(*(long *)(puVar24 + -0x1090) + 0x1c8) != 0) {
              uVar13 = *(undefined8 *)(*(long *)(puVar24 + -0x1090) + 0x1c8);
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x108027;
              fVar30 = (float)RendererCameraAttributes::
                              camera_attributes_get_exposure_normalization_factor
                                        (RenderingServerGlobals::camera_attributes,uVar13);
              lVar23 = *(long *)(puVar24 + -0x1118);
              *(float *)(puVar24 + lVar23 * 0x40 + -0xc) =
                   fVar30 * *(float *)(puVar24 + lVar23 * 0x40 + -0xc);
            }
            pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0xe8);
            if (pcVar18 == LightStorage::light_has_shadow) {
              if ((uVar26 == 0) ||
                 (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar11)) {
LAB_001086f8:
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108721;
                _err_print_error("light_has_shadow",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x230,
                                 "Parameter \"light\" is null.",0);
                lVar23 = *(long *)(puVar24 + -0x1118);
                uVar35 = 0;
                goto LAB_001084cc;
              }
              lVar25 = ((uVar26 & 0xffffffff) %
                       (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                       *(long *)(RenderingServerGlobals::light_storage[3] +
                                ((uVar26 & 0xffffffff) /
                                (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
              iVar21 = *(int *)(lVar25 + 0xe0);
              if (iVar21 != iVar19) {
                if (iVar21 + 0x80000000U < 0x7fffffff) {
                  *(long *)(puVar24 + -0x1118) = lVar23;
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x1086ec;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID");
                  lVar23 = *(long *)(puVar24 + -0x1118);
                }
                goto LAB_001086f8;
              }
              *(uint *)(puVar24 + lVar23 * 0x40 + 4) = (uint)*(byte *)(lVar25 + 0x70);
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 == LightStorage::light_get_param) goto LAB_00107a19;
LAB_00108225:
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x108233;
              uVar31 = (*pcVar18)(RenderingServerGlobals::light_storage,uVar26,6);
              lVar23 = *(long *)(puVar24 + -0x1118);
LAB_0010823e:
              *(undefined4 *)(puVar24 + lVar23 * 0x40 + 0x14) = uVar31;
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 != LightStorage::light_get_param) goto LAB_001083e2;
              if (uVar26 == 0) {
LAB_00108271:
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x10829a;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                lVar23 = *(long *)(puVar24 + -0x1118);
                uVar31 = 0;
                goto LAB_001082a9;
              }
LAB_00107a85:
              if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar11)
              goto LAB_00108271;
              lVar25 = ((uVar26 & 0xffffffff) %
                       (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                       *(long *)(RenderingServerGlobals::light_storage[3] +
                                ((uVar26 & 0xffffffff) /
                                (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
              iVar21 = *(int *)(lVar25 + 0xe0);
              if (iVar21 != iVar19) {
                if (iVar21 + 0x80000000U < 0x7fffffff) {
                  *(long *)(puVar24 + -0x1118) = lVar23;
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x10888a;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0);
                  lVar23 = *(long *)(puVar24 + -0x1118);
                }
                goto LAB_00108271;
              }
              *(undefined4 *)(puVar24 + lVar23 * 0x40 + 0x24) = *(undefined4 *)(lVar25 + 0x14);
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 == LightStorage::light_get_param) goto LAB_00107af1;
LAB_001083af:
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x1083bd;
              fVar30 = (float)(*pcVar18)(RenderingServerGlobals::light_storage,uVar26,7);
              *(undefined8 *)(puVar24 + -0x1120) = 0x1083ca;
              fVar30 = cosf(fVar30 * _LC91);
              lVar23 = *(long *)(puVar24 + -0x1118);
LAB_0010831b:
              *(float *)(puVar24 + lVar23 * 0x40 + 0x1c) = fVar30;
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 != LightStorage::light_get_param) goto LAB_0010838c;
              fVar30 = _LC17;
              if (uVar26 == 0) {
LAB_0010834a:
                *(long *)(puVar24 + -0x1110) = lVar23;
                *(float *)(puVar24 + -0x1118) = fVar30;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108379;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                fVar36 = *(float *)(puVar24 + -0x1118);
                lVar23 = *(long *)(puVar24 + -0x1110);
                fVar30 = 0.0;
              }
              else {
LAB_00107b81:
                fVar30 = _LC17;
                if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar11)
                goto LAB_0010834a;
                lVar25 = ((uVar26 & 0xffffffff) %
                         (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                         *(long *)(RenderingServerGlobals::light_storage[3] +
                                  ((uVar26 & 0xffffffff) /
                                  (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
                iVar21 = *(int *)(lVar25 + 0xe0);
                if (iVar21 != iVar19) {
                  if (iVar21 + 0x80000000U < 0x7fffffff) {
                    *(long *)(puVar24 + -0x1110) = lVar23;
                    *(float *)(puVar24 + -0x1118) = _LC17;
                    *(undefined8 *)(puVar24 + -0x1128) = 0;
                    *(undefined8 *)(puVar24 + -0x1130) = 0x1089e3;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID");
                    lVar23 = *(long *)(puVar24 + -0x1110);
                    fVar30 = *(float *)(puVar24 + -0x1118);
                  }
                  goto LAB_0010834a;
                }
                fVar30 = *(float *)(lVar25 + 0x24);
                fVar36 = _LC17;
              }
            }
            else {
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x1084be;
              bVar9 = (*pcVar18)(RenderingServerGlobals::light_storage,uVar26);
              lVar23 = *(long *)(puVar24 + -0x1118);
              uVar35 = (uint)bVar9;
LAB_001084cc:
              *(uint *)(puVar24 + lVar23 * 0x40 + 4) = uVar35;
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 != LightStorage::light_get_param) goto LAB_00108225;
              if (uVar26 == 0) {
LAB_001084fd:
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108526;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                lVar23 = *(long *)(puVar24 + -0x1118);
                uVar31 = 0;
                goto LAB_0010823e;
              }
LAB_00107a19:
              if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar11)
              goto LAB_001084fd;
              lVar25 = ((uVar26 & 0xffffffff) %
                       (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                       *(long *)(RenderingServerGlobals::light_storage[3] +
                                ((uVar26 & 0xffffffff) /
                                (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
              iVar21 = *(int *)(lVar25 + 0xe0);
              if (iVar21 != iVar19) {
                if (iVar21 + 0x80000000U < 0x7fffffff) {
                  *(long *)(puVar24 + -0x1118) = lVar23;
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x10898a;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID");
                  lVar23 = *(long *)(puVar24 + -0x1118);
                }
                goto LAB_001084fd;
              }
              *(undefined4 *)(puVar24 + lVar23 * 0x40 + 0x14) = *(undefined4 *)(lVar25 + 0x1c);
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 == LightStorage::light_get_param) goto LAB_00107a85;
LAB_001083e2:
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x1083f0;
              uVar31 = (*pcVar18)(RenderingServerGlobals::light_storage,uVar26,4);
              lVar23 = *(long *)(puVar24 + -0x1118);
LAB_001082a9:
              *(undefined4 *)(puVar24 + lVar23 * 0x40 + 0x24) = uVar31;
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 != LightStorage::light_get_param) goto LAB_001083af;
              if (uVar26 == 0) {
LAB_001082dc:
                *(long *)(puVar24 + -0x1118) = lVar23;
                *(undefined8 *)(puVar24 + -0x1120) = 0x108305;
                _err_print_error("light_get_param",
                                 "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                                 "Parameter \"light\" is null.",0);
                lVar23 = *(long *)(puVar24 + -0x1118);
                fVar30 = _LC17;
                goto LAB_0010831b;
              }
LAB_00107af1:
              if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar11)
              goto LAB_001082dc;
              lVar25 = ((uVar26 & 0xffffffff) %
                       (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                       *(long *)(RenderingServerGlobals::light_storage[3] +
                                ((uVar26 & 0xffffffff) /
                                (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
              iVar21 = *(int *)(lVar25 + 0xe0);
              if (iVar21 != iVar19) {
                if (iVar21 + 0x80000000U < 0x7fffffff) {
                  *(long *)(puVar24 + -0x1118) = lVar23;
                  *(undefined8 *)(puVar24 + -0x1128) = 0;
                  *(undefined8 *)(puVar24 + -0x1130) = 0x1088dc;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID");
                  lVar23 = *(long *)(puVar24 + -0x1118);
                }
                goto LAB_001082dc;
              }
              fVar30 = *(float *)(lVar25 + 0x20);
              *(long *)(puVar24 + -0x1118) = lVar23;
              *(undefined8 *)(puVar24 + -0x1120) = 0x107b44;
              fVar30 = cosf(_LC91 * fVar30);
              lVar23 = *(long *)(puVar24 + -0x1118);
              *(float *)(puVar24 + lVar23 * 0x40 + 0x1c) = fVar30;
              pcVar18 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
              if (pcVar18 == LightStorage::light_get_param) goto LAB_00107b81;
LAB_0010838c:
              *(long *)(puVar24 + -0x1110) = lVar23;
              *(float *)(puVar24 + -0x1118) = _LC17;
              *(undefined8 *)(puVar24 + -0x1120) = 0x1083a0;
              fVar30 = (float)(*pcVar18)(RenderingServerGlobals::light_storage,uVar26,8);
              lVar23 = *(long *)(puVar24 + -0x1110);
              fVar36 = *(float *)(puVar24 + -0x1118);
            }
            uVar26 = plVar27[4];
            *(int *)(puVar24 + -0x10b8) = *(int *)(puVar24 + -0x10b8) + 1;
            *(float *)(puVar24 + lVar23 * 0x40 + 0x20) = fVar36 / fVar30;
            if ((uint)uVar26 <= uVar10 + 1) goto LAB_00107de0;
            if (*(int *)(puVar24 + -0x10b8) == 0x400) goto code_r0x00107bf6;
          }
          else {
LAB_001073c0:
            *(undefined8 *)(puVar24 + -0x1120) = 0x1073e5;
            _err_print_error("render_static_lights",
                             "servers/rendering/renderer_rd/environment/gi.cpp",0x961,
                             "Condition \"!light_storage->owns_light_instance(light_instance)\" is true. Continuing."
                             ,0,0);
LAB_001073e5:
            uVar26 = plVar27[4];
            if ((uint)uVar26 <= uVar10 + 1) {
LAB_00107de0:
              iVar19 = *(int *)(puVar24 + -0x10b8);
              if (iVar19 < 1) goto LAB_00107c1d;
              iVar21 = iVar19 << 6;
              goto LAB_00107c00;
            }
          }
          uVar22 = uVar22 + 1;
        } while( true );
      }
      iVar19 = 0;
      goto LAB_00107c1d;
    }
    *(undefined8 *)(puVar24 + -0x1120) = 0x107e25;
    _err_print_error("render_static_lights","servers/rendering/renderer_rd/environment/gi.cpp",0x94f
                     ,"Condition \"p_cascade_indices[i] >= cascades.size()\" is true. Continuing.",0
                     ,0);
    goto LAB_00107c24;
  }
  goto LAB_00107e90;
code_r0x00107bf6:
  iVar21 = 0x10000;
  iVar19 = 0x400;
LAB_00107c00:
  *(undefined8 *)(puVar24 + -0x1120) = 0x107c05;
  uVar17 = RenderingDevice::get_singleton();
  uVar13 = *(undefined8 *)(lVar28 + 0xb0);
  *(undefined8 *)(puVar24 + -0x1120) = 0x107c1d;
  RenderingDevice::buffer_update(uVar17,uVar13,0,iVar21);
LAB_00107c1d:
  **(int **)(puVar24 + -0x10b0) = iVar19;
LAB_00107c24:
  *(long *)(puVar24 + -0x1108) = *(long *)(puVar24 + -0x1108) + 4;
  plVar27 = plVar27 + 6;
  *(long *)(puVar24 + -0x10b0) = *(long *)(puVar24 + -0x10b0) + 4;
  if (*(long *)(puVar24 + -0x1108) == *(long *)(puVar24 + -0x1098)) goto code_r0x00107c4a;
  goto LAB_001072c1;
code_r0x00107c4a:
  lVar12 = *(long *)(puVar24 + -0x1088);
  this = *(SDFGI **)(puVar24 + -0x10c8);
  lVar25 = 0;
  lVar23 = *(long *)(puVar24 + -0x1080);
  lVar28 = *(long *)(puVar24 + -0x10a8);
  do {
    uVar10 = *(uint *)(lVar28 + lVar25);
    if (uVar10 < *(uint *)(this + 600)) {
      if (*(int *)(lVar23 + lVar25) != 0) {
        uVar13 = *(undefined8 *)(this + 0x260);
        *(long *)(puVar24 + -0x1108) = lVar23;
        *(long *)(puVar24 + -0x1110) = lVar28;
        *(undefined8 *)(puVar24 + -0x1118) = uVar13;
        *(undefined8 *)(puVar24 + -0x1120) = 0x107cc0;
        uVar15 = RenderingDevice::get_singleton();
        lVar23 = *(long *)(puVar24 + -0x1118) + (ulong)uVar10 * 0xc0;
        uVar13 = *(undefined8 *)(lVar23 + 0x40);
        uVar17 = *(undefined8 *)(lVar23 + 0x38);
        *(undefined8 *)(puVar24 + -0x1120) = 0x107cec;
        RenderingDevice::buffer_copy(uVar15,uVar17,uVar13,0);
        lVar23 = *(long *)(puVar24 + -0x1108);
        lVar28 = *(long *)(puVar24 + -0x1110);
      }
    }
    else {
      *(long *)(puVar24 + -0x1110) = lVar23;
      *(long *)(puVar24 + -0x1118) = lVar28;
      *(undefined8 *)(puVar24 + -0x1120) = 0x10867f;
      _err_print_error("render_static_lights","servers/rendering/renderer_rd/environment/gi.cpp",
                       0x9a9,
                       "Condition \"p_cascade_indices[i] >= cascades.size()\" is true. Continuing.",
                       0,0);
      lVar28 = *(long *)(puVar24 + -0x1118);
      lVar23 = *(long *)(puVar24 + -0x1110);
    }
    lVar25 = lVar25 + 4;
  } while (lVar25 != lVar12);
LAB_00107e90:
  *(undefined8 *)(puVar24 + -0x1120) = 0x107e95;
  RenderingDevice::get_singleton();
  *(undefined8 *)(puVar24 + -0x1120) = 0x107e9d;
  pvVar16 = (void *)RenderingDevice::compute_list_begin();
  *(undefined8 *)(puVar24 + -0x1120) = 0x107ea5;
  uVar17 = RenderingDevice::get_singleton();
  uVar13 = *(undefined8 *)(*(long *)(this + 0x180) + 0x1498);
  *(undefined8 *)(puVar24 + -0x1120) = 0x107ebe;
  RenderingDevice::compute_list_bind_compute_pipeline(uVar17,pvVar16,uVar13);
  uVar10 = *(uint *)(this + 0x250);
  uVar11 = *(uint *)(this + 600);
  *(undefined4 *)(puVar24 + -0x1024) = 0;
  fVar30 = (float)uVar10;
  uVar31 = *(undefined4 *)(this + 0x2b4);
  *(uint *)(puVar24 + -0x103c) = uVar11;
  *(undefined4 *)(puVar24 + -0x1028) = uVar31;
  *(uint *)(puVar24 + -0x101c) = (uint)(byte)this[0x2e0];
  *(float *)(puVar24 + -0x1040) = fVar30;
  uVar31 = *(undefined4 *)(this + 0x2fc);
  *(undefined8 *)(puVar24 + -0x1030) = _LC110;
  uVar10 = *(uint *)(puVar24 + -0x10bc);
  *(ulong *)(puVar24 + -0x1048) = CONCAT44(fVar30,fVar30);
  *(undefined4 *)(puVar24 + -0x1020) = uVar31;
  if (uVar10 != 0) {
    lVar23 = 0;
    *(undefined1 **)(puVar24 + -0x1118) = puVar24 + -0x1048;
    lVar12 = *(long *)(puVar24 + -0x10a8);
    while( true ) {
      uVar35 = *(uint *)(lVar12 + lVar23);
      if (uVar35 < uVar11) {
        iVar19 = *(int *)(puVar24 + lVar23 + -0x1018);
        lVar28 = *(long *)(this + 0x260);
        *(ulong *)(puVar24 + -0x1038) = CONCAT44(iVar19,uVar35);
        if (iVar19 != 0) {
          lVar28 = lVar28 + (ulong)uVar35 * 0xc0;
          *(undefined8 *)(puVar24 + -0x1120) = 0x107fc7;
          uVar17 = RenderingDevice::get_singleton();
          uVar13 = *(undefined8 *)(lVar28 + 0x88);
          *(undefined8 *)(puVar24 + -0x1120) = 0x107fdb;
          RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar16,uVar13,0);
          *(undefined8 *)(puVar24 + -0x1120) = 0x107fe0;
          lVar25 = RenderingDevice::get_singleton();
          *(undefined8 *)(puVar24 + -0x1120) = 0x107ff4;
          RenderingDevice::compute_list_set_push_constant
                    (lVar25,pvVar16,(uint)*(undefined8 *)(puVar24 + -0x1118));
          *(undefined8 *)(puVar24 + -0x1120) = 0x107ff9;
          uVar17 = RenderingDevice::get_singleton();
          uVar13 = *(undefined8 *)(lVar28 + 0x40);
          *(undefined8 *)(puVar24 + -0x1120) = 0x10800a;
          RenderingDevice::compute_list_dispatch_indirect(uVar17,pvVar16,uVar13);
        }
      }
      else {
        *(undefined8 *)(puVar24 + -0x1120) = 0x108220;
        _err_print_error("render_static_lights","servers/rendering/renderer_rd/environment/gi.cpp",
                         0x9c6,
                         "Condition \"p_cascade_indices[i] >= cascades.size()\" is true. Continuing."
                         ,0,0);
      }
      lVar23 = lVar23 + 4;
      if (lVar23 == (ulong)uVar10 * 4) break;
      uVar11 = *(uint *)(this + 600);
    }
  }
  *(undefined8 *)(puVar24 + -0x1120) = 0x1081bd;
  RenderingDevice::get_singleton();
  *(undefined8 *)(puVar24 + -0x1120) = 0x1081c5;
  RenderingDevice::compute_list_end();
  *(undefined8 *)(puVar24 + -0x1120) = 0x1081ca;
  RenderingDevice::get_singleton();
  *(undefined8 *)(puVar24 + -0x1120) = 0x1081d2;
  RenderingDevice::draw_command_end_label();
  if (*(long *)(puVar24 + 0xfff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108a78:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + -0x1120) = &UNK_00108a7d;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::GI() */

void __thiscall RendererRD::GI::GI(GI *this)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  GI *pGVar4;
  GI *pGVar5;
  PipelineCacheRD *pPVar6;
  PipelineCacheRD *pPVar7;
  ShaderRD *this_00;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar1 = _UNK_00146768;
  uVar3 = __LC114;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined ***)this = &PTR__GI_001297d8;
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_00129798;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  uVar3 = Memory::alloc_static(0x1c10,false);
  *(undefined8 *)(this + 0x10) = uVar3;
  uVar3 = Memory::alloc_static((ulong)*(uint *)(this + 0x2c) << 3,false);
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x60) = &PTR__RID_Alloc_001297b8;
  uVar1 = _UNK_00146778;
  uVar3 = __LC115;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0x20;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x80) = uVar1;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0xd0));
  *(undefined ***)(this + 0xd0) = &PTR__VoxelGiShaderRD_00129758;
  ShaderRD::setup((char *)(this + 0xd0),(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef MODE_DYNAMIC\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n#else\nlayout(local_size_x = 64, local_size_y = 1, local_size_z = 1) in;\n#endif\n\n#ifndef MODE_DYNAMIC\n\n#define NO_CHILDREN 0xFFFFFFFF\n\nstruct CellChildren {\n\tuint children[8];\n};\n\nlayout(set = 0, binding = 1, std430) buffer CellChildrenBuffer {\n\tCellChildren data[];\n}\ncell_children;\n\nstruct CellData {\n\tuint position; \n\tuint albedo; \n\tuint emission; \n\tuint normal; \n};\n\nlayout(set = 0, binding = 2, std430) buffer CellDataBuffer {\n\tCellData data[];\n}\ncell_data;\n\n#endif \n\n#define LIGHT_TYPE_DIRECTIONAL 0\n#define LIGHT_TYPE_OMNI 1\n#define LIGHT_TYPE_SPOT 2\n\n#if defined(MODE_COMPUTE_LIGHT) || defined(MODE_DYNAMIC_LIGHTING)\n\nstruct Light {\n\tuint type;\n\tfloat energy;\n\tfloat radius;\n\tfloat attenuation;\n\n\tvec3 color;\n\tfloat cos_spot_angle;\n\n\tvec3 position;\n\tfloat inv_spot_attenuation;\n\n\tvec3 direction;\n\tbool has_shadow;\n};\n\nlayout(set = 0, binding = 3, std140) uniform Lights {\n\tLight data[MAX_LIGHTS];\n}\nlights;\n\n#endif \n\n#ifdef MODE_SECOND_BOUNCE\n\nlayout(set = 0, binding = 5) uniform texture3D color_texture;\n\n#endif \n\n#ifndef MODE_DYNAMIC\n\nlayout(push_constant, std430) uniform Params {\n\tivec3 limits;\n\tuint stack_size;\n\n\tfloat emission_scale;\n\tfloat propagation;\n\tfloat dynamic_range;\n\n\tuint light_count;\n\tuint cell_offset;\n\tuint cell_count;\n\tfloat aniso_strength;\n\tuint pad;\n}\nparams;\n\nlayout(set = 0, binding = 4, std430) buffer Outputs {\n\tvec4 data[];\n}\noutputs;\n\n#endif \n\nlayout(set = 0, binding = 9) uniform texture3D texture_sdf;\nlayout(set = 0, binding = 10) uniform sampler texture_sampler;\n\n#ifdef MODE_WRITE_TEXTURE\n\nlayout(rgba8, set = 0, binding = 5) uniform restrict writeonly image3D color_tex;\n\n#endif\n\n#ifdef MODE_DYNAMIC\n\nlayout(push_constant, std430) uniform Params {\n\tivec3 limits;\n\tuint light_count; \n\tivec3 x_dir;\n\tfloat z_base;\n\tivec3 y_dir;\n\tfloat z_sign;\n\tivec3 z_dir;\n\tfloat pos_multiplier;\n\tivec2 rect_pos;\n\tivec2 rect_size;\n\tivec2 prev_rect_ofs;\n\tivec2 prev_rect_size;\n\tbool flip_x;\n\tbool flip_y;\n..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0x2d0));
  *(undefined ***)(this + 0x2d0) = &PTR__VoxelGiDebugShaderRD_00129778;
  ShaderRD::setup((char *)(this + 0x2d0),
                  "\n#version 450\n\n#VERSION_DEFINES\n\nstruct CellData {\n\tuint position; \n\tuint albedo; \n\tuint emission; \n\tuint normal; \n};\n\nlayout(set = 0, binding = 1, std140) buffer CellDataBuffer {\n\tCellData data[];\n}\ncell_data;\n\nlayout(set = 0, binding = 2) uniform texture3D color_tex;\n\nlayout(set = 0, binding = 3) uniform sampler tex_sampler;\n\nlayout(push_constant, std430) uniform Params {\n\tmat4 projection;\n\tuint cell_offset;\n\tfloat dynamic_range;\n\tfloat alpha;\n\tuint level;\n\tivec3 bounds;\n\tuint pad;\n}\nparams;\n\nlayout(location = 0) out vec4 color_interp;\n\nvoid main() {\n\tconst vec3 cube_triangles[36] = vec3[](\n\t\t\tvec3(-1.0f, -1.0f, -1.0f),\n\t\t\tvec3(-1.0f, -1.0f, 1.0f),\n\t\t\tvec3(-1.0f, 1.0f, 1.0f),\n\t\t\tvec3(1.0f, 1.0f, -1.0f),\n\t\t\tvec3(-1.0f, -1.0f, -1.0f),\n\t\t\tvec3(-1.0f, 1.0f, -1.0f),\n\t\t\tvec3(1.0f, -1.0f, 1.0f),\n\t\t\tvec3(-1.0f, -1.0f, -1.0f),\n\t\t\tvec3(1.0f, -1.0f, -1.0f),\n\t\t\tvec3(1.0f, 1.0f, -1.0f),\n\t\t\tvec3(1.0f, -1.0f, -1.0f),\n\t\t\tvec3(-1.0f, -1.0f, -1.0f),\n\t\t\tvec3(-1.0f, -1.0f, -1.0f),\n\t\t\tvec3(-1.0f, 1.0f, 1.0f),\n\t\t\tvec3(-1.0f, 1.0f, -1.0f),\n\t\t\tvec3(1.0f, -1.0f, 1.0f),\n\t\t\tvec3(-1.0f, -1.0f, 1.0f),\n\t\t\tvec3(-1.0f, -1.0f, -1.0f),\n\t\t\tvec3(-1.0f, 1.0f, 1.0f),\n\t\t\tvec3(-1.0f, -1.0f, 1.0f),\n\t\t\tvec3(1.0f, -1.0f, 1.0f),\n\t\t\tvec3(1.0f, 1.0f, 1.0f),\n\t\t\tvec3(1.0f, -1.0f, -1.0f),\n\t\t\tvec3(1.0f, 1.0f, -1.0f),\n\t\t\tvec3(1.0f, -1.0f, -1.0f),\n\t\t\tvec3(1.0f, 1.0f, 1.0f),\n\t\t\tvec3(1.0f, -1.0f, 1.0f),\n\t\t\tvec3(1.0f, 1.0f, 1.0f),\n\t\t\tvec3(1.0f, 1.0f, -1.0f),\n\t\t\tvec3(-1.0f, 1.0f, -1.0f),\n\t\t\tvec3(1.0f, 1.0f, 1.0f),\n\t\t\tvec3(-1.0f, 1.0f, -1.0f),\n\t\t\tvec3(-1.0f, 1.0f, 1.0f),\n\t\t\tvec3(1.0f, 1.0f, 1.0f),\n\t\t\tvec3(-1.0f, 1.0f, 1.0f),\n\t\t\tvec3(1.0f, -1.0f, 1.0f));\n\n\tvec3 vertex = cube_triangles[gl_VertexIndex] * 0.5 + 0.5;\n#ifdef MODE_DEBUG_LIGHT_FULL\n\tuvec3 posu = uvec3(gl_InstanceIndex % params.bounds.x, (gl_InstanceIndex / params.bounds.x) % params.bounds.y, gl_InstanceIndex / (params.bounds.y * params.bounds.x));\n#else\n\tuint cell_index = gl_InstanceIndex + params.cell_offset;\n\n\tuvec3 posu = uvec3(cell_data.data[cell_index].position & 0x7FF, (cell_data.data[cell_index].posit..." /* TRUNCATED STRING LITERAL */
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(location = 0) in vec4 color_interp;\nlayout(location = 0) out vec4 frag_color;\n\nvoid main() {\n\tfrag_color = color_interp;\n\n#ifdef MODE_DEBUG_LIGHT_FULL\n\n\t\n\n\tint x = int(gl_FragCoord.x) % 4;\n\tint y = int(gl_FragCoord.y) % 4;\n\tint index = x + y * 4;\n\tfloat limit = 0.0;\n\tif (x < 8) {\n\t\tif (index == 0) {\n\t\t\tlimit = 0.0625;\n\t\t}\n\t\tif (index == 1) {\n\t\t\tlimit = 0.5625;\n\t\t}\n\t\tif (index == 2) {\n\t\t\tlimit = 0.1875;\n\t\t}\n\t\tif (index == 3) {\n\t\t\tlimit = 0.6875;\n\t\t}\n\t\tif (index == 4) {\n\t\t\tlimit = 0.8125;\n\t\t}\n\t\tif (index == 5) {\n\t\t\tlimit = 0.3125;\n\t\t}\n\t\tif (index == 6) {\n\t\t\tlimit = 0.9375;\n\t\t}\n\t\tif (index == 7) {\n\t\t\tlimit = 0.4375;\n\t\t}\n\t\tif (index == 8) {\n\t\t\tlimit = 0.25;\n\t\t}\n\t\tif (index == 9) {\n\t\t\tlimit = 0.75;\n\t\t}\n\t\tif (index == 10) {\n\t\t\tlimit = 0.125;\n\t\t}\n\t\tif (index == 11) {\n\t\t\tlimit = 0.625;\n\t\t}\n\t\tif (index == 12) {\n\t\t\tlimit = 1.0;\n\t\t}\n\t\tif (index == 13) {\n\t\t\tlimit = 0.5;\n\t\t}\n\t\tif (index == 14) {\n\t\t\tlimit = 0.875;\n\t\t}\n\t\tif (index == 15) {\n\t\t\tlimit = 0.375;\n\t\t}\n\t}\n\tif (frag_color.a < limit) {\n\t\tdiscard;\n\t}\n#endif\n}\n"
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined1 (*) [16])(this + 0x448) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x458) = (undefined1  [16])0x0;
  pPVar7 = (PipelineCacheRD *)(this + 0x470);
  do {
    pPVar6 = pPVar7 + 0x138;
    PipelineCacheRD::PipelineCacheRD(pPVar7);
    pPVar7 = pPVar6;
  } while (pPVar6 != (PipelineCacheRD *)(this + 0x950));
  *(undefined8 *)(this + 0x950) = 0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0x958));
  *(undefined ***)(this + 0x958) = &PTR__SdfgiPreprocessShaderRD_00129738;
  ShaderRD::setup((char *)(this + 0x958),(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef MODE_JUMPFLOOD_OPTIMIZED\n#define GROUP_SIZE 8\n\nlayout(local_size_x = GROUP_SIZE, local_size_y = GROUP_SIZE, local_size_z = GROUP_SIZE) in;\n\n#elif defined(MODE_OCCLUSION) || defined(MODE_SCROLL)\n\nlayout(local_size_x = 64, local_size_y = 1, local_size_z = 1) in;\n\n#else\n\nlayout(local_size_x = 4, local_size_y = 4, local_size_z = 4) in;\n\n#endif\n\n#if defined(MODE_INITIALIZE_JUMP_FLOOD) || defined(MODE_INITIALIZE_JUMP_FLOOD_HALF)\nlayout(r16ui, set = 0, binding = 1) uniform restrict readonly uimage3D src_color;\nlayout(rgba8ui, set = 0, binding = 2) uniform restrict writeonly uimage3D dst_positions;\n#endif\n\n#ifdef MODE_UPSCALE_JUMP_FLOOD\nlayout(r16ui, set = 0, binding = 1) uniform restrict readonly uimage3D src_color;\nlayout(rgba8ui, set = 0, binding = 2) uniform restrict readonly uimage3D src_positions_half;\nlayout(rgba8ui, set = 0, binding = 3) uniform restrict writeonly uimage3D dst_positions;\n#endif\n\n#if defined(MODE_JUMPFLOOD) || defined(MODE_JUMPFLOOD_OPTIMIZED)\nlayout(rgba8ui, set = 0, binding = 1) uniform restrict readonly uimage3D src_positions;\nlayout(rgba8ui, set = 0, binding = 2) uniform restrict writeonly uimage3D dst_positions;\n#endif\n\n#ifdef MODE_JUMPFLOOD_OPTIMIZED\n\nshared uvec4 group_positions[(GROUP_SIZE + 2) * (GROUP_SIZE + 2) * (GROUP_SIZE + 2)]; \n\nvoid group_store(ivec3 p_pos, uvec4 p_value) {\n\tuint offset = uint(p_pos.z * (GROUP_SIZE + 2) * (GROUP_SIZE + 2) + p_pos.y * (GROUP_SIZE + 2) + p_pos.x);\n\tgroup_positions[offset] = p_value;\n}\n\nuvec4 group_load(ivec3 p_pos) {\n\tuint offset = uint(p_pos.z * (GROUP_SIZE + 2) * (GROUP_SIZE + 2) + p_pos.y * (GROUP_SIZE + 2) + p_pos.x);\n\treturn group_positions[offset];\n}\n\n#endif\n\n#ifdef MODE_OCCLUSION\n\nlayout(r16ui, set = 0, binding = 1) uniform restrict readonly uimage3D src_color;\nlayout(r8, set = 0, binding = 2) uniform restrict image3D dst_occlusion[8];\nlayout(r32ui, set = 0, binding = 3) uniform restrict readonly uimage3D src_facing;\n\nconst uvec2 group_size_offset[11] = uvec2[](uvec2(1, 0), uvec2(3, 1), uvec2(6, 4), uvec..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xb18) = 0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0xb20));
  *(undefined ***)(this + 0xb20) = &PTR__SdfgiDebugShaderRD_001296b8;
  ShaderRD::setup((char *)(this + 0xb20),(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#define MAX_CASCADES 8\n\nlayout(set = 0, binding = 1) uniform texture3D sdf_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 2) uniform texture3D light_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 3) uniform texture3D aniso0_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 4) uniform texture3D aniso1_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 5) uniform texture3D occlusion_texture;\n\nlayout(set = 0, binding = 8) uniform sampler linear_sampler;\n\nstruct CascadeData {\n\tvec3 offset; \n\tfloat to_cell; \n\tivec3 probe_world_offset;\n\tuint pad;\n\tvec4 pad2;\n};\n\nlayout(set = 0, binding = 9, std140) uniform Cascades {\n\tCascadeData data[MAX_CASCADES];\n}\ncascades;\n\nlayout(rgba16f, set = 0, binding = 10) uniform restrict writeonly image2D screen_buffer;\n\nlayout(set = 0, binding = 11) uniform texture2DArray lightprobe_texture;\n\nlayout(push_constant, std430) uniform Params {\n\tvec3 grid_size;\n\tuint max_cascades;\n\n\tivec2 screen_size;\n\tfloat y_mult;\n\n\tfloat z_near;\n\n\tmat3x4 inv_projection;\n\t\n\tfloat cam_basis[3][3];\n\tfloat cam_origin[3];\n}\nparams;\n\nvec3 linear_to_srgb(vec3 color) {\n\t\n\tcolor = clamp(color, vec3(0.0), vec3(1.0));\n\tconst vec3 a = vec3(0.055f);\n\treturn mix((vec3(1.0f) + a) * pow(color.rgb, vec3(1.0f / 2.4f)) - a, 12.92f * color.rgb, lessThan(color.rgb, vec3(0.0031308f)));\n}\n\nvec2 octahedron_wrap(vec2 v) {\n\tvec2 signVal;\n\tsignVal.x = v.x >= 0.0 ? 1.0 : -1.0;\n\tsignVal.y = v.y >= 0.0 ? 1.0 : -1.0;\n\treturn (1.0 - abs(v.yx)) * signVal;\n}\n\nvec2 octahedron_encode(vec3 n) {\n\t\n\tn /= (abs(n.x) + abs(n.y) + abs(n.z));\n\tn.xy = n.z >= 0.0 ? n.xy : octahedron_wrap(n.xy);\n\tn.xy = n.xy * 0.5 + 0.5;\n\treturn n.xy;\n}\n\nvoid main() {\n\t\n\tivec2 screen_pos = ivec2(gl_GlobalInvocationID.xy);\n\tif (any(greaterThanEqual(screen_pos, params.screen_size))) { \n\t\treturn;\n\t}\n\n\tvec3 ray_pos;\n\tvec3 ray_dir;\n\t{\n\t\tray_pos = vec3(params.cam_origin[0], params.cam_origin[1], params.cam_origin[2]);\n\n\t\tray_dir.xy = ((vec2(screen_pos) / vec2(params.screen_s..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0xca8) = 0;
  *(undefined1 (*) [16])(this + 0xc98) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0xcb0));
  *(undefined ***)(this + 0xcb0) = &PTR__SdfgiDebugProbesShaderRD_001296d8;
  ShaderRD::setup((char *)(this + 0xcb0),
                  "\n#version 450\n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#define ViewIndex gl_ViewIndex\n#else \n\n#define ViewIndex 0\n#endif \n#else \n\n#define ViewIndex 0\n#endif \n\n#VERSION_DEFINES\n\n#define MAX_CASCADES 8\n#define MAX_VIEWS 2\n\nlayout(push_constant, std430) uniform Params {\n\tuint band_power;\n\tuint sections_in_band;\n\tuint band_mask;\n\tfloat section_arc;\n\n\tvec3 grid_size;\n\tuint cascade;\n\n\tuint pad;\n\tfloat y_mult;\n\tuint probe_debug_index;\n\tint probe_axis_size;\n}\nparams;\n\n\n\nvec3 get_sphere_vertex(uint p_vertex_id) {\n\tfloat x_angle = float(p_vertex_id & 1u) + (p_vertex_id >> params.band_power);\n\n\tfloat y_angle =\n\t\t\tfloat((p_vertex_id & params.band_mask) >> 1) + ((p_vertex_id >> params.band_power) * params.sections_in_band);\n\n\tx_angle *= params.section_arc * 0.5f; \n\ty_angle *= -params.section_arc;\n\n\tvec3 point = vec3(sin(x_angle) * sin(y_angle), cos(x_angle), sin(x_angle) * cos(y_angle));\n\n\treturn point;\n}\n\n#ifdef MODE_PROBES\n\nlayout(location = 0) out vec3 normal_interp;\nlayout(location = 1) out flat uint probe_index;\n\n#endif\n\n#ifdef MODE_VISIBILITY\n\nlayout(location = 0) out float visibility;\n\n#endif\n\nstruct CascadeData {\n\tvec3 offset; \n\tfloat to_cell; \n\tivec3 probe_world_offset;\n\tuint pad;\n\tvec4 pad2;\n};\n\nlayout(set = 0, binding = 1, std140) uniform Cascades {\n\tCascadeData data[MAX_CASCADES];\n}\ncascades;\n\nlayout(set = 0, binding = 4) uniform texture3D occlusion_texture;\nlayout(set = 0, binding = 3) uniform sampler linear_sampler;\n\nlayout(set = 0, binding = 5, std140) uniform SceneData {\n\tmat4 projection[MAX_VIEWS];\n}\nscene_data;\n\nvoid main() {\n#ifdef MODE_PROBES\n\tprobe_index = gl_InstanceIndex;\n\n\tnormal_interp = get_sphere_vertex(gl_VertexIndex);\n\n\tvec3 vertex = normal_interp * 0.2;\n\n\tfloat probe_cell_size = float(params.grid_size / float(params.probe_axis_size - 1)) / cascades.data[params.cascade].to_cell;\n\n\tivec3 probe_cell;\n\tprobe_cell.x = int(probe_index % params.probe_axis_size);\n\tprobe_cell.y = int(probe_ind..." /* TRUNCATED STRING LITERAL */
                  ,
                  "\n#version 450\n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#define ViewIndex gl_ViewIndex\n#else \n\n#define ViewIndex 0\n#endif \n#else \n\n#define ViewIndex 0\n#endif \n\n#VERSION_DEFINES\n\n#define MAX_VIEWS 2\n\nlayout(location = 0) out vec4 frag_color;\n\nlayout(set = 0, binding = 2) uniform texture2DArray lightprobe_texture;\nlayout(set = 0, binding = 3) uniform sampler linear_sampler;\n\nlayout(push_constant, std430) uniform Params {\n\tuint band_power;\n\tuint sections_in_band;\n\tuint band_mask;\n\tfloat section_arc;\n\n\tvec3 grid_size;\n\tuint cascade;\n\n\tuint pad;\n\tfloat y_mult;\n\tuint probe_debug_index;\n\tint probe_axis_size;\n}\nparams;\n\n#ifdef MODE_PROBES\n\nlayout(location = 0) in vec3 normal_interp;\nlayout(location = 1) in flat uint probe_index;\n\n#endif\n\n#ifdef MODE_VISIBILITY\nlayout(location = 0) in float visibility;\n#endif\n\nvec2 octahedron_wrap(vec2 v) {\n\tvec2 signVal;\n\tsignVal.x = v.x >= 0.0 ? 1.0 : -1.0;\n\tsignVal.y = v.y >= 0.0 ? 1.0 : -1.0;\n\treturn (1.0 - abs(v.yx)) * signVal;\n}\n\nvec2 octahedron_encode(vec3 n) {\n\t\n\tn /= (abs(n.x) + abs(n.y) + abs(n.z));\n\tn.xy = n.z >= 0.0 ? n.xy : octahedron_wrap(n.xy);\n\tn.xy = n.xy * 0.5 + 0.5;\n\treturn n.xy;\n}\n\nvoid main() {\n#ifdef MODE_PROBES\n\n\tivec3 tex_pos;\n\ttex_pos.x = int(probe_index) % params.probe_axis_size; \n\ttex_pos.y = int(probe_index) / (params.probe_axis_size * params.probe_axis_size);\n\ttex_pos.x += params.probe_axis_size * ((int(probe_index) / params.probe_axis_size) % params.probe_axis_size); \n\ttex_pos.z = int(params.cascade);\n\n\tvec3 tex_pos_ofs = vec3(octahedron_encode(normal_interp) * float(OCT_SIZE), 0.0);\n\tvec3 tex_posf = vec3(vec2(tex_pos.xy * (OCT_SIZE + 2) + ivec2(1)), float(tex_pos.z)) + tex_pos_ofs;\n\n\ttex_posf.xy /= vec2(ivec2(params.probe_axis_size * params.probe_axis_size * (OCT_SIZE + 2), params.probe_axis_size * (OCT_SIZE + 2)));\n\n\tvec4 indirect_light = textureLod(sampler2DArray(lightprobe_texture, linear_sampler), tex_posf, 0.0);\n\n\tfrag_color = indirect_light;..." /* TRUNCATED STRING LITERAL */
                  ,(char *)0x0);
  *(undefined1 (*) [16])(this + 0xe28) = (undefined1  [16])0x0;
  pPVar7 = (PipelineCacheRD *)(this + 0xe38);
  do {
    this_00 = (ShaderRD *)(pPVar7 + 0x138);
    PipelineCacheRD::PipelineCacheRD(pPVar7);
    pPVar7 = (PipelineCacheRD *)this_00;
  } while (this_00 != (ShaderRD *)(this + 0x1318));
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 0x1318) = &PTR__SdfgiDirectLightShaderRD_001296f8;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 64, local_size_y = 1, local_size_z = 1) in;\n\n#define MAX_CASCADES 8\n\nlayout(set = 0, binding = 1) uniform texture3D sdf_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 2) uniform sampler linear_sampler;\n\nlayout(set = 0, binding = 3, std430) restrict readonly buffer DispatchData {\n\tuint x;\n\tuint y;\n\tuint z;\n\tuint total_count;\n}\ndispatch_data;\n\nstruct ProcessVoxel {\n\tuint position; \n\tuint albedo; \n\tuint light; \n\tuint light_aniso; \n\t\n};\n\n#ifdef MODE_PROCESS_STATIC\nlayout(set = 0, binding = 4, std430) restrict buffer ProcessVoxels {\n#else\nlayout(set = 0, binding = 4, std430) restrict buffer readonly ProcessVoxels {\n#endif\n\tProcessVoxel data[];\n}\nprocess_voxels;\n\nlayout(r32ui, set = 0, binding = 5) uniform restrict uimage3D dst_light;\nlayout(rgba8, set = 0, binding = 6) uniform restrict image3D dst_aniso0;\nlayout(rg8, set = 0, binding = 7) uniform restrict image3D dst_aniso1;\n\nstruct CascadeData {\n\tvec3 offset; \n\tfloat to_cell; \n\tivec3 probe_world_offset;\n\tuint pad;\n\tvec4 pad2;\n};\n\nlayout(set = 0, binding = 8, std140) uniform Cascades {\n\tCascadeData data[MAX_CASCADES];\n}\ncascades;\n\n#define LIGHT_TYPE_DIRECTIONAL 0\n#define LIGHT_TYPE_OMNI 1\n#define LIGHT_TYPE_SPOT 2\n\nstruct Light {\n\tvec3 color;\n\tfloat energy;\n\n\tvec3 direction;\n\tbool has_shadow;\n\n\tvec3 position;\n\tfloat attenuation;\n\n\tuint type;\n\tfloat cos_spot_angle;\n\tfloat inv_spot_attenuation;\n\tfloat radius;\n};\n\nlayout(set = 0, binding = 9, std140) buffer restrict readonly Lights {\n\tLight data[];\n}\nlights;\n\nlayout(set = 0, binding = 10) uniform texture2DArray lightprobe_texture;\nlayout(set = 0, binding = 11) uniform texture3D occlusion_texture;\n\nlayout(push_constant, std430) uniform Params {\n\tvec3 grid_size;\n\tuint max_cascades;\n\n\tuint cascade;\n\tuint light_count;\n\tuint process_offset;\n\tuint process_increment;\n\n\tint probe_axis_size;\n\tfloat bounce_feedback;\n\tfloat y_mult;\n\tbool use_occlusion;\n}\nparams;\n\nvec2 octahedron_wrap(vec2 v) {\n\tvec2 signVal;\n\tsignVal.x = v.x >= 0.0 ? 1.0 : -1.0;\n\tsignVal.y = v.y >= 0.0 ? 1.0..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x14a0) = 0;
  *(undefined1 (*) [16])(this + 0x1490) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0x14a8));
  *(undefined ***)(this + 0x14a8) = &PTR__SdfgiIntegrateShaderRD_00129718;
  ShaderRD::setup((char *)(this + 0x14a8),(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#define MAX_CASCADES 8\n\nlayout(set = 0, binding = 1) uniform texture3D sdf_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 2) uniform texture3D light_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 3) uniform texture3D aniso0_cascades[MAX_CASCADES];\nlayout(set = 0, binding = 4) uniform texture3D aniso1_cascades[MAX_CASCADES];\n\nlayout(set = 0, binding = 6) uniform sampler linear_sampler;\n\nstruct CascadeData {\n\tvec3 offset; \n\tfloat to_cell; \n\tivec3 probe_world_offset;\n\tuint pad;\n\tvec4 pad2;\n};\n\nlayout(set = 0, binding = 7, std140) uniform Cascades {\n\tCascadeData data[MAX_CASCADES];\n}\ncascades;\n\nlayout(r32ui, set = 0, binding = 8) uniform restrict uimage2DArray lightprobe_texture_data;\nlayout(rgba16i, set = 0, binding = 9) uniform restrict iimage2DArray lightprobe_history_texture;\nlayout(rgba32i, set = 0, binding = 10) uniform restrict iimage2D lightprobe_average_texture;\n\n\nlayout(rgba16i, set = 0, binding = 11) uniform restrict iimage2DArray lightprobe_history_scroll_texture;\nlayout(rgba32i, set = 0, binding = 12) uniform restrict iimage2D lightprobe_average_scroll_texture;\n\nlayout(rgba32i, set = 0, binding = 13) uniform restrict iimage2D lightprobe_average_parent_texture;\n\nlayout(rgba16f, set = 0, binding = 14) uniform restrict writeonly image2DArray lightprobe_ambient_texture;\n\n#ifdef USE_CUBEMAP_ARRAY\nlayout(set = 1, binding = 0) uniform textureCubeArray sky_irradiance;\n#else\nlayout(set = 1, binding = 0) uniform textureCube sky_irradiance;\n#endif\nlayout(set = 1, binding = 1) uniform sampler linear_sampler_mipmaps;\n\n#define HISTORY_BITS 10\n\n#define SKY_FLAGS_MODE_COLOR 0x01\n#define SKY_FLAGS_MODE_SKY 0x02\n#define SKY_FLAGS_ORIENTATION_SIGN 0x04\n\nlayout(push_constant, std430) uniform Params {\n\tvec3 grid_size;\n\tuint max_cascades;\n\n\tuint probe_axis_size;\n\tuint cascade;\n\tuint history_index;\n\tuint history_size;\n\n\tuint ray_count;\n\tfloat ray_bias;\n\tivec2 image_size;\n\n\tivec3 world_offset;\n\tuint sky_flags;\n\n\tivec3 scroll..." /* TRUNCATED STRING LITERAL */
                 );
  uVar1 = _UNK_00146788;
  uVar3 = _LC267;
  *(undefined4 *)(this + 0x1660) = 0x3e800000;
  *(undefined8 *)(this + 0x1664) = 0;
  *(undefined4 *)(this + 0x166c) = 0;
  *(undefined8 *)(this + 0x1670) = 0;
  *(undefined4 *)(this + 0x1678) = 0;
  this[0x167c] = (GI)0x0;
  *(undefined8 *)(this + 0x1680) = 0;
  *(undefined4 *)(this + 0x1688) = 0;
  *(undefined4 *)(this + 0x168c) = 0;
  this[0x16a0] = (GI)0x0;
  *(undefined1 (*) [16])(this + 0x1620) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1630) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1640) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1690) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1650) = uVar3;
  *(undefined8 *)(this + 0x1658) = uVar1;
  ShaderRD::ShaderRD((ShaderRD *)(this + 0x16a8));
  *(undefined ***)(this + 0x16a8) = &PTR__GiShaderRD_00129698;
  ShaderRD::setup((char *)(this + 0x16a8),(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef SAMPLE_VOXEL_GI_NEAREST\n#extension GL_EXT_samplerless_texture_functions : enable\n#endif\n\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n\n#define M_PI 3.141592\n\n/* Specialization Constants (Toggles) */\n\nlayout(constant_id = 0) const bool sc_half_res = false;\nlayout(constant_id = 1) const bool sc_use_full_projection_matrix = false;\nlayout(constant_id = 2) const bool sc_use_vrs = false;\n\n#define SDFGI_MAX_CASCADES 8\n\n\n\nlayout(set = 0, binding = 1) uniform texture3D sdf_cascades[SDFGI_MAX_CASCADES];\nlayout(set = 0, binding = 2) uniform texture3D light_cascades[SDFGI_MAX_CASCADES];\nlayout(set = 0, binding = 3) uniform texture3D aniso0_cascades[SDFGI_MAX_CASCADES];\nlayout(set = 0, binding = 4) uniform texture3D aniso1_cascades[SDFGI_MAX_CASCADES];\nlayout(set = 0, binding = 5) uniform texture3D occlusion_texture;\n\nlayout(set = 0, binding = 6) uniform sampler linear_sampler;\nlayout(set = 0, binding = 7) uniform sampler linear_sampler_with_mipmaps;\n\nstruct ProbeCascadeData {\n\tvec3 position;\n\tfloat to_probe;\n\tivec3 probe_world_offset;\n\tfloat to_cell; \n\tvec3 pad;\n\tfloat exposure_normalization;\n};\n\nlayout(rgba16f, set = 0, binding = 9) uniform restrict writeonly image2D ambient_buffer;\nlayout(rgba16f, set = 0, binding = 10) uniform restrict writeonly image2D reflection_buffer;\n\nlayout(set = 0, binding = 11) uniform texture2DArray lightprobe_texture;\n\nlayout(set = 0, binding = 12) uniform texture2D depth_buffer;\nlayout(set = 0, binding = 13) uniform texture2D normal_roughness_buffer;\nlayout(set = 0, binding = 14) uniform utexture2D voxel_gi_buffer;\n\nlayout(set = 0, binding = 15, std140) uniform SDFGI {\n\tvec3 grid_size;\n\tuint max_cascades;\n\n\tbool use_occlusion;\n\tint probe_axis_size;\n\tfloat probe_to_uvw;\n\tfloat normal_bias;\n\n\tvec3 lightprobe_tex_pixel_size;\n\tfloat energy;\n\n\tvec3 lightprobe_uv_offset;\n\tfloat y_mult;\n\n\tvec3 occlusion_clamp;\n\tuint pad3;\n\n\tvec3 occlusion_renormalize;\n\tuint pad4;\n\n\tvec3 cascade_probe_size;\n\tuint pad5;\n\n\tProbeCascadeData cascades[SDFGI_MAX_CAS..." /* TRUNCATED STRING LITERAL */
                 );
  *(undefined8 *)(this + 0x1820) = 0;
  pGVar4 = this + 0x1828;
  do {
    *(undefined1 (*) [16])pGVar4 = (undefined1  [16])0x0;
    pGVar5 = pGVar4 + 0x30;
    *(undefined1 (*) [16])(pGVar4 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar4 + 0x20) = (undefined1  [16])0x0;
    pGVar4 = pGVar5;
  } while (pGVar5 != this + 0x18e8);
  singleton = this;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/global_illumination/sdfgi/probe_ray_count",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  if (6 < iVar2) {
    iVar2 = 6;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(this + 0x1654) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/global_illumination/sdfgi/frames_to_converge",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  if (5 < iVar2) {
    iVar2 = 5;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(this + 0x1658) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/global_illumination/sdfgi/frames_to_update_lights",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  if (4 < iVar2) {
    iVar2 = 4;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(this + 0x165c) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::free() */

void __thiscall RendererRD::GI::free(GI *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1698) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1698));
  }
  if (*(long *)(this + 200) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 200));
  }
  if (*(long *)(this + 0x1690) != 0) {
    uVar1 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar1,*(undefined8 *)(this + 0x1690));
  }
  if (*(long *)(this + 0x448) != 0) {
    ShaderRD::version_free(this + 0x2d0,*(undefined8 *)(this + 0x448));
  }
  if (*(long *)(this + 0x248) != 0) {
    ShaderRD::version_free(this + 0xd0,*(undefined8 *)(this + 0x248));
  }
  if (*(long *)(this + 0x1820) != 0) {
    ShaderRD::version_free(this + 0x16a8,*(undefined8 *)(this + 0x1820));
  }
  if (*(long *)(this + 0xe28) != 0) {
    ShaderRD::version_free(this + 0xcb0,*(undefined8 *)(this + 0xe28));
  }
  if (*(long *)(this + 0xc98) != 0) {
    ShaderRD::version_free(this + 0xb20,*(undefined8 *)(this + 0xc98));
  }
  if (*(long *)(this + 0x1490) != 0) {
    ShaderRD::version_free(this + 0x1318,*(undefined8 *)(this + 0x1490));
  }
  if (*(long *)(this + 0x1620) != 0) {
    ShaderRD::version_free(this + 0x14a8,*(undefined8 *)(this + 0x1620));
  }
  if (*(long *)(this + 0xad0) != 0) {
    ShaderRD::version_free(this + 0x958,*(undefined8 *)(this + 0xad0));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0xb8),true);
    return;
  }
  return;
}



/* RendererRD::GI::setup_voxel_gi_instances(RenderDataRD*, Ref<RenderSceneBuffersRD>, Transform3D
   const&, PagedArray<RID> const&, unsigned int&) */

void __thiscall
RendererRD::GI::setup_voxel_gi_instances
          (GI *this,long param_1,long *param_3,long param_4,long param_5,int *param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  StringName *pSVar4;
  code *pcVar5;
  bool bVar6;
  Object *pOVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  Object *pOVar12;
  Object *pOVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [12];
  long local_4d0;
  Object *local_4c8;
  long local_4c0;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined4 local_498;
  undefined8 local_494;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  Transform3D local_458 [48];
  undefined1 local_428 [12];
  undefined1 local_3f8 [12];
  uint uStack_3ec;
  undefined8 local_3c8 [113];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00109e25;
    uVar16 = 0xe47;
    pcVar14 = "Condition \"p_render_buffers.is_null()\" is true.";
    goto LAB_00109429;
  }
  lVar11 = RendererRD::TextureStorage::get_singleton();
  if (lVar11 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar16 = 0xe4a;
      pcVar14 = "Parameter \"texture_storage\" is null.";
      goto LAB_00109429;
    }
    goto LAB_00109e25;
  }
  *param_6 = 0;
  if ((setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                    ::{lambda()#1}::operator()()::sname), iVar10 != 0)) {
    _scs_create((char *)&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                         ::{lambda()#1}::operator()()::sname);
  }
  RenderSceneBuffersRD::get_custom_data((StringName *)&local_4c8);
  if (local_4c8 != (Object *)0x0) {
    pOVar12 = (Object *)__dynamic_cast(local_4c8,&Object::typeinfo,&RenderBuffersGI::typeinfo,0);
    if (pOVar12 == (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar13 = local_4c8;
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_4c8);
joined_r0x00109e1a:
        if (cVar8 != '\0') {
LAB_001093dc:
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
          if (pOVar12 != (Object *)0x0) goto LAB_00109462;
        }
      }
    }
    else {
      cVar8 = RefCounted::reference();
      if (cVar8 != '\0') {
        if (((local_4c8 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar13 = local_4c8, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_4c8), cVar8 != '\0')) goto LAB_001093dc;
LAB_00109462:
        lVar19 = *(long *)(pOVar12 + 0x180);
        if (lVar19 == 0) {
          uVar16 = RenderingDevice::get_singleton();
          local_4c0 = 0;
          uVar16 = RenderingDevice::uniform_buffer_create(uVar16,0x380,(StringName *)&local_4c8,0);
          lVar19 = local_4c0;
          *(undefined8 *)(pOVar12 + 0x180) = uVar16;
          if (local_4c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_4c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_4c0 = 0;
              Memory::free_static((void *)(lVar19 + -0x10),false);
            }
          }
          lVar19 = *(long *)(pOVar12 + 0x180);
        }
        local_494 = *(undefined8 *)(param_4 + 0x24);
        uVar20 = 0;
        bVar6 = false;
        local_4b8 = ZEXT416(_LC17);
        local_48c = *(undefined4 *)(param_4 + 0x2c);
        local_498 = 0x3f800000;
        puVar17 = local_3c8;
        local_4a8 = local_4b8;
        do {
          uVar3 = *(ulong *)(param_5 + 0x28);
          uVar9 = (uint)uVar20;
          if ((int)uVar3 <= (int)uVar9) goto LAB_001097bb;
          if (uVar3 <= uVar20) {
            _err_print_index_error
                      ("operator[]","./core/templates/paged_array.h",0xa9,(long)(int)uVar9,uVar3,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar3 = *(ulong *)(*(long *)(*(long *)(param_5 + 8) +
                                      (uVar20 >> ((byte)*(undefined4 *)(param_5 + 0x1c) & 0x3f)) * 8
                                      ) + (ulong)(uVar9 & *(uint *)(param_5 + 0x20)) * 8);
          if ((uVar3 == 0) || (*(uint *)(this + 0x7c) <= (uint)uVar3)) {
LAB_001097e0:
            *param_6 = *param_6 + 1;
            lVar18 = *(long *)(lVar11 + 0x70);
          }
          else {
            lVar15 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x90 +
                     *(long *)(*(long *)(this + 0x68) +
                              ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
            if (*(int *)(lVar15 + 0x88) == (int)(uVar3 >> 0x20)) {
              lVar18 = *(long *)(lVar15 + 0x10);
              uVar16 = *(undefined8 *)(lVar15 + 8);
              Transform3D::affine_inverse();
              (**(code **)(*(long *)this + 0x60))(local_458,this,*(undefined8 *)(lVar15 + 8));
              Transform3D::operator*((Transform3D *)local_3f8,local_458);
              Transform3D::operator*((Transform3D *)&local_488,(Transform3D *)local_3f8);
              lVar2 = *(long *)this;
              *(undefined4 *)((long)puVar17 + 0xc) = 0;
              *(undefined4 *)((long)puVar17 + 0x1c) = 0;
              *(undefined4 *)((long)puVar17 + 0x2c) = 0;
              *(undefined4 *)((long)puVar17 + 0x3c) = 0x3f800000;
              *puVar17 = CONCAT44(uStack_47c,local_488);
              *(undefined4 *)(puVar17 + 1) = local_470;
              *(undefined4 *)(puVar17 + 2) = uStack_484;
              *(undefined4 *)((long)puVar17 + 0x14) = local_478;
              *(undefined4 *)(puVar17 + 3) = local_46c;
              *(undefined4 *)(puVar17 + 4) = local_480;
              *(undefined4 *)((long)puVar17 + 0x24) = local_474;
              *(undefined4 *)(puVar17 + 5) = local_468;
              *(undefined4 *)(puVar17 + 6) = local_464;
              *(undefined4 *)((long)puVar17 + 0x34) = local_460;
              *(undefined4 *)(puVar17 + 7) = local_45c;
              auVar24 = (**(code **)(lVar2 + 0x38))(this,uVar16);
              local_3f8 = auVar24;
              auVar24 = Vector3i::operator_cast_to_Vector3((Vector3i *)local_3f8);
              lVar2 = *(long *)this;
              *(undefined1 (*) [12])(puVar17 + 8) = auVar24;
              local_428 = auVar24;
              fVar21 = (float)(**(code **)(lVar2 + 0x70))(this,uVar16);
              fVar22 = (float)(**(code **)(*(long *)this + 0x90))(this,uVar16);
              lVar2 = *(long *)this;
              *(float *)((long)puVar17 + 0x4c) = fVar22 * fVar21;
              uVar23 = (**(code **)(lVar2 + 0xb0))(this,uVar16);
              lVar2 = *(long *)this;
              *(undefined4 *)(puVar17 + 10) = uVar23;
              uVar23 = (**(code **)(lVar2 + 0xc0))(this,uVar16);
              lVar2 = *(long *)this;
              *(undefined4 *)((long)puVar17 + 0x54) = uVar23;
              uVar9 = (**(code **)(lVar2 + 0xd0))(this);
              *(uint *)(puVar17 + 0xb) = (uVar9 ^ 1) & 0xff;
              if (*(long *)(lVar15 + 0x28) == 0) {
                uVar23 = 0;
              }
              else {
                uVar23 = *(undefined4 *)(*(long *)(lVar15 + 0x28) + -8);
              }
              *(undefined4 *)((long)puVar17 + 0x5c) = uVar23;
              *(undefined4 *)((long)puVar17 + 0x6c) = 0x3f800000;
              if (*(long *)(param_1 + 0x1c8) != 0) {
                fVar21 = (float)RendererCameraAttributes::
                                camera_attributes_get_exposure_normalization_factor
                                          (RenderingServerGlobals::camera_attributes,
                                           *(undefined8 *)(param_1 + 0x1c8));
                fVar22 = (float)(**(code **)(*(long *)this + 0xa0))(this);
                *(float *)((long)puVar17 + 0x6c) = fVar21 / fVar22;
              }
              *param_6 = *param_6 + 1;
              if (lVar18 != 0) goto LAB_00109788;
            }
            else {
              if (0x7ffffffe < *(int *)(lVar15 + 0x88) + 0x80000000U) goto LAB_001097e0;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
              *param_6 = *param_6 + 1;
            }
LAB_001097bb:
            lVar18 = *(long *)(lVar11 + 0x70);
          }
LAB_00109788:
          if (lVar18 != *(long *)(pOVar12 + uVar20 * 8 + 0x188)) {
            *(long *)(pOVar12 + uVar20 * 8 + 0x188) = lVar18;
            bVar6 = true;
          }
          uVar20 = uVar20 + 1;
          puVar17 = puVar17 + 0xe;
        } while (uVar20 != 8);
        if (bVar6) {
          uVar16 = RenderingDevice::get_singleton();
          cVar8 = RenderingDevice::uniform_set_is_valid(uVar16,*(undefined8 *)(pOVar12 + 0x1e8));
          if (cVar8 != '\0') {
            uVar16 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar16,*(undefined8 *)(pOVar12 + 0x1e8));
          }
          *(undefined8 *)(pOVar12 + 0x1e8) = 0;
          uVar16 = RenderingDevice::get_singleton();
          cVar8 = RenderingDevice::uniform_set_is_valid(uVar16,*(undefined8 *)(pOVar12 + 0x1f0));
          if (cVar8 != '\0') {
            uVar16 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar16,*(undefined8 *)(pOVar12 + 0x1f0));
          }
          *(undefined8 *)(pOVar12 + 0x1f0) = 0;
          pSVar4 = (StringName *)*param_3;
          if (setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
              ::{lambda()#2}::operator()()::sname == '\0') {
            iVar10 = __cxa_guard_acquire(&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                          ::{lambda()#2}::operator()()::sname);
            if (iVar10 != 0) {
              _scs_create((char *)&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                   ::{lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                            ::{lambda()#2}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                   ::{lambda()#2}::operator()()::sname);
            }
          }
          cVar8 = RenderSceneBuffersRD::has_custom_data(pSVar4);
          if (cVar8 != '\0') {
            if (setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                ::{lambda()#3}::operator()()::sname == '\0') {
              iVar10 = __cxa_guard_acquire(&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                            ::{lambda()#3}::operator()()::sname);
              if (iVar10 != 0) {
                _scs_create((char *)&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                     ::{lambda()#3}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                              ::{lambda()#3}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&setup_voxel_gi_instances(RenderDataRD*,Ref<RenderSceneBuffersRD>,Transform3D_const&,PagedArray<RID>const&,unsigned_int&)
                                     ::{lambda()#3}::operator()()::sname);
              }
            }
            RenderSceneBuffersRD::get_custom_data((StringName *)&local_4c8);
            if (local_4c8 == (Object *)0x0) {
              pOVar13 = (Object *)0x0;
            }
            else {
              pOVar13 = (Object *)
                        __dynamic_cast(local_4c8,&Object::typeinfo,&Fog::VolumetricFog::typeinfo,0);
              if (pOVar13 != (Object *)0x0) {
                cVar8 = RefCounted::reference();
                if (cVar8 == '\0') {
                  pOVar13 = (Object *)0x0;
                }
                if (local_4c8 == (Object *)0x0) goto LAB_00109af0;
              }
              cVar8 = RefCounted::unreference();
              pOVar7 = local_4c8;
              if (cVar8 != '\0') {
                cVar8 = predelete_handler(local_4c8);
                if (cVar8 != '\0') {
                  (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                  Memory::free_static(pOVar7,false);
                }
              }
            }
LAB_00109af0:
            RendererRD::Fog::VolumetricFog::sync_gi_dependent_sets_validity(SUB81(pOVar13,0));
            cVar8 = RefCounted::unreference();
            if (cVar8 != '\0') {
              cVar8 = predelete_handler(pOVar13);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
              }
            }
          }
        }
        if (*(long *)(param_5 + 0x28) == 0) {
          cVar8 = RefCounted::unreference();
        }
        else {
          uVar16 = RenderingDevice::get_singleton();
          local_4d0 = 0;
          local_4c8 = (Object *)0x120f08;
          local_4c0 = 0xe;
          local_3f8._4_4_ = _LC17;
          local_3f8._0_4_ = _LC17;
          local_3f8._8_4_ = _LC17;
          uStack_3ec = _LC17;
          String::parse_latin1((StrRange *)&local_4d0);
          RenderingDevice::draw_command_begin_label(uVar16,(StrRange *)&local_4d0,local_3f8);
          lVar11 = local_4d0;
          if (local_4d0 != 0) {
            LOCK();
            plVar1 = (long *)(local_4d0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_4d0 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          uVar16 = RenderingDevice::get_singleton();
          uVar20 = *(ulong *)(param_5 + 0x28);
          if (8 < uVar20) {
            uVar20 = 8;
          }
          RenderingDevice::buffer_update(uVar16,lVar19,0,(int)uVar20 * 0x70,local_3c8);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_command_end_label();
          cVar8 = RefCounted::unreference();
        }
        if (cVar8 != '\0') {
          cVar8 = predelete_handler(pOVar12);
          if (cVar8 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00109e25;
      }
      if ((local_4c8 != (Object *)0x0) &&
         (cVar8 = RefCounted::unreference(), pOVar13 = local_4c8, cVar8 != '\0')) {
        pOVar12 = (Object *)0x0;
        cVar8 = predelete_handler(local_4c8);
        goto joined_r0x00109e1a;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar16 = 0xe4f;
    pcVar14 = "Condition \"rbgi.is_null()\" is true.";
LAB_00109429:
    _err_print_error("setup_voxel_gi_instances","servers/rendering/renderer_rd/environment/gi.cpp",
                     uVar16,pcVar14,0,0);
    return;
  }
LAB_00109e25:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::RenderBuffersGI::get_voxel_gi_buffer() */

undefined8 __thiscall RendererRD::GI::RenderBuffersGI::get_voxel_gi_buffer(RenderBuffersGI *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    uVar3 = RenderingDevice::get_singleton();
    local_20 = 0;
    uVar3 = RenderingDevice::uniform_buffer_create(uVar3,0x380,auStack_28,0);
    lVar2 = local_20;
    *(undefined8 *)(this + 0x180) = uVar3;
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
    return *(undefined8 *)(this + 0x180);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::voxel_gi_instance_set_transform_to_data(RID, Transform3D const&) */

void __thiscall
RendererRD::GI::voxel_gi_instance_set_transform_to_data(GI *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x90 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar2 + 0x88) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x54) = *param_3;
      *(undefined8 *)(lVar2 + 0x5c) = uVar1;
      uVar1 = param_3[3];
      *(undefined8 *)(lVar2 + 100) = param_3[2];
      *(undefined8 *)(lVar2 + 0x6c) = uVar1;
      uVar1 = param_3[5];
      *(undefined8 *)(lVar2 + 0x74) = param_3[4];
      *(undefined8 *)(lVar2 + 0x7c) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_instance_set_transform_to_data",
                   "servers/rendering/renderer_rd/environment/gi.cpp",0x1003,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* RendererRD::GI::voxel_gi_needs_update(RID) const */

bool __thiscall RendererRD::GI::voxel_gi_needs_update(GI *this,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x90 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar3 + 0x88) == (int)(param_2 >> 0x20)) {
      iVar1 = *(int *)(lVar3 + 0x44);
      iVar2 = (**(code **)(*(long *)this + 0xe8))(this,*(undefined8 *)(lVar3 + 8));
      return iVar1 != iVar2;
    }
    if (*(int *)(lVar3 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_needs_update","servers/rendering/renderer_rd/environment/gi.cpp",0x100a
                   ,"Parameter \"voxel_gi\" is null.",0,0);
  return false;
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



/* RendererRD::GI::~GI() */

void __thiscall RendererRD::GI::~GI(GI *this)

{
  PipelineCacheRD *pPVar1;
  PipelineCacheRD *pPVar2;
  
  *(undefined ***)this = &PTR__GI_001297d8;
  *(undefined ***)(this + 0x16a8) = &PTR__GiShaderRD_00129698;
  singleton = 0;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x16a8));
  *(undefined ***)(this + 0x14a8) = &PTR__SdfgiIntegrateShaderRD_00129718;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x14a8));
  *(undefined ***)(this + 0x1318) = &PTR__SdfgiDirectLightShaderRD_001296f8;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x1318));
  pPVar2 = (PipelineCacheRD *)(this + 0x11e0);
  do {
    pPVar1 = pPVar2 + -0x138;
    PipelineCacheRD::~PipelineCacheRD(pPVar2);
    pPVar2 = pPVar1;
  } while (pPVar1 != (PipelineCacheRD *)(this + 0xd00));
  *(undefined ***)(this + 0xcb0) = &PTR__SdfgiDebugProbesShaderRD_001296d8;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xcb0));
  *(undefined ***)(this + 0xb20) = &PTR__SdfgiDebugShaderRD_001296b8;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xb20));
  *(undefined ***)(this + 0x958) = &PTR__SdfgiPreprocessShaderRD_00129738;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x958));
  pPVar2 = (PipelineCacheRD *)(this + 0x818);
  do {
    pPVar1 = pPVar2 + -0x138;
    PipelineCacheRD::~PipelineCacheRD(pPVar2);
    pPVar2 = pPVar1;
  } while ((PipelineCacheRD *)(this + 0x338) != pPVar1);
  *(undefined ***)(this + 0x2d0) = &PTR__VoxelGiDebugShaderRD_00129778;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x2d0));
  *(undefined ***)(this + 0xd0) = &PTR__VoxelGiShaderRD_00129758;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0xd0));
  RID_Alloc<RendererRD::GI::VoxelGIInstance,false>::~RID_Alloc
            ((RID_Alloc<RendererRD::GI::VoxelGIInstance,false> *)(this + 0x60));
  RID_Alloc<RendererRD::GI::VoxelGI,true>::~RID_Alloc
            ((RID_Alloc<RendererRD::GI::VoxelGI,true> *)(this + 8));
  return;
}



/* RendererRD::GI::~GI() */

void __thiscall RendererRD::GI::~GI(GI *this)

{
  ~GI(this);
  operator_delete(this,0x18e8);
  return;
}



/* RendererRD::GI::voxel_gi_allocate() */

void __thiscall RendererRD::GI::voxel_gi_allocate(GI *this)

{
  RID_Alloc<RendererRD::GI::VoxelGI,true>::allocate_rid
            ((RID_Alloc<RendererRD::GI::VoxelGI,true> *)(this + 8));
  return;
}



/* RendererRD::GI::voxel_gi_instance_create(RID) */

void __thiscall RendererRD::GI::voxel_gi_instance_create(GI *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  GI *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_44 = ZEXT416(_LC17);
  local_70 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_48 = 0;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_18 = 0;
  local_98 = this;
  local_90 = param_2;
  local_34 = local_44;
  RID_Alloc<RendererRD::GI::VoxelGIInstance,false>::make_rid
            ((RID_Alloc<RendererRD::GI::VoxelGIInstance,false> *)(this + 0x60),
             (VoxelGIInstance *)&local_98);
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
/* create_clear_texture(RenderingDeviceCommons::TextureFormat const&, String const&) */

long create_clear_texture(TextureFormat *param_1,String *param_2)

{
  long *plVar1;
  char *pcVar2;
  TextureFormat *pTVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar3 = (TextureFormat *)RenderingDevice::get_singleton();
  local_58 = 6;
  local_70 = 0;
  local_68 = __LC168;
  uStack_60 = _UNK_00146798;
  lVar4 = RenderingDevice::texture_create(pTVar3,(TextureView *)param_1,(Vector *)&local_68);
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_70);
  if (lVar4 == 0) {
    local_78 = 0;
    local_68 = "Cannot create texture: ";
    uStack_60 = 0x17;
    String::parse_latin1((StrRange *)&local_78);
    String::operator+((String *)&local_68,(String *)&local_78);
    _err_print_error("create_clear_texture","servers/rendering/renderer_rd/environment/gi.cpp",0x194
                     ,"Condition \"texture.is_null()\" is true. Returning: RID()",
                     (String *)&local_68,0,0);
    pcVar2 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
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
        lVar4 = 0;
        goto LAB_0010a6d7;
      }
    }
    lVar4 = 0;
  }
  else {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::set_resource_name(uVar5,lVar4,param_2);
    uVar5 = RenderingDevice::get_singleton();
    local_48 = (undefined1  [16])0x0;
    RenderingDevice::texture_clear
              (uVar5,lVar4,local_48,0,*(undefined4 *)(param_1 + 0x14),0,
               *(undefined4 *)(param_1 + 0x10));
  }
LAB_0010a6d7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
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



/* CowData<RenderingDevice::Uniform>::_ref(CowData<RenderingDevice::Uniform> const&) [clone .part.0]
    */

void __thiscall
CowData<RenderingDevice::Uniform>::_ref(CowData<RenderingDevice::Uniform> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* RendererRD::GI::process_gi(Ref<RenderSceneBuffersRD>, RID const*, RID, RID, unsigned int,
   Projection const*, Vector3 const*, Transform3D const&, PagedArray<RID> const&) */

void __thiscall
RendererRD::GI::process_gi
          (GI *this,long *param_2,long param_3,long param_4,undefined8 param_5,uint param_6,
          float *param_7,undefined8 *param_8,undefined8 *param_9,long param_10)

{
  long *plVar1;
  Version *pVVar2;
  undefined4 uVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  Object *pOVar19;
  Object *pOVar20;
  undefined8 uVar21;
  char *pcVar22;
  float *pfVar23;
  Object *pOVar24;
  long lVar25;
  undefined8 *puVar26;
  uint uVar27;
  StringName *pSVar28;
  float *pfVar29;
  long lVar30;
  long in_FS_OFFSET;
  uint uVar31;
  undefined1 auVar32 [16];
  Object *local_300;
  ulong local_2f8;
  uint local_2b0;
  Vector<RenderingDevice::Uniform> local_268 [8];
  undefined8 local_260;
  Object *local_258;
  undefined1 local_250;
  long local_248;
  Vector<RID> local_240 [8];
  long local_238 [2];
  Object *local_228;
  ulong local_220;
  long local_218;
  long local_208 [2];
  Projection local_1f8 [64];
  Projection local_1b8 [64];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  float local_7c;
  undefined8 local_78;
  undefined4 local_70 [6];
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = RendererRD::TextureStorage::get_singleton();
  lVar14 = RendererRD::MaterialStorage::get_singleton();
  if (2 < param_6) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("process_gi","servers/rendering/renderer_rd/environment/gi.cpp",0xecc,
                       "Condition \"p_view_count > 2\" is true.",
                       "Maximum of 2 views supported for Processing GI.",0);
      return;
    }
    goto LAB_0010d790;
  }
  uVar15 = RenderingDevice::get_singleton();
  local_258 = (Object *)0x0;
  local_220 = 9;
  local_228 = (Object *)0x120f8d;
  local_138 = _LC17;
  fStack_134 = _LC17;
  fStack_130 = _LC17;
  fStack_12c = _LC17;
  String::parse_latin1((StrRange *)&local_258);
  RenderingDevice::draw_command_begin_label(uVar15,(StrRange *)&local_258,&local_138);
  pOVar20 = local_258;
  if (local_258 != (Object *)0x0) {
    LOCK();
    pOVar24 = local_258 + -0x10;
    *(long *)pOVar24 = *(long *)pOVar24 + -1;
    UNLOCK();
    if (*(long *)pOVar24 == 0) {
      local_258 = (Object *)0x0;
      Memory::free_static(pOVar20 + -0x10,false);
    }
  }
  if (*param_2 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010d790;
    uVar15 = 0xed0;
    pcVar22 = "Condition \"p_render_buffers.is_null()\" is true.";
    goto LAB_0010af09;
  }
  if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                    ::{lambda()#1}::operator()()::sname), iVar10 != 0)) {
    _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                         ::{lambda()#1}::operator()()::sname);
  }
  RenderSceneBuffersRD::get_custom_data((StringName *)&local_228);
  if (local_228 != (Object *)0x0) {
    local_300 = (Object *)__dynamic_cast(local_228,&Object::typeinfo,&RenderBuffersGI::typeinfo,0);
    if (local_300 == (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar20 = local_228;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_228);
joined_r0x0010d768:
        if (cVar7 != '\0') {
LAB_0010aeb8:
          (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
          Memory::free_static(pOVar20,false);
          if (local_300 != (Object *)0x0) goto LAB_0010af42;
        }
      }
    }
    else {
      cVar7 = RefCounted::reference();
      if (cVar7 != '\0') {
        if (((local_228 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar20 = local_228, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_228), cVar7 != '\0')) goto LAB_0010aeb8;
LAB_0010af42:
        pSVar28 = (StringName *)*param_2;
        uVar15 = *(undefined8 *)(pSVar28 + 0x1ac);
        uVar9 = (uint)uVar15;
        uVar31 = (uint)((ulong)uVar15 >> 0x20);
        if (*(GI *)(local_300 + 0x1e0) != this[0x16a0]) {
          if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
               ::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                            ::{lambda()#2}::operator()()::sname), iVar10 != 0)) {
            _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                          ::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#2}::operator()()::sname);
          }
          RenderSceneBuffersRD::clear_context(pSVar28);
          pSVar28 = (StringName *)*param_2;
        }
        if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
             ::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                          ::{lambda()#4}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                        ::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#4}::operator()()::sname);
        }
        if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
             ::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                          ::{lambda()#3}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                        ::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#3}::operator()()::sname);
        }
        cVar7 = RenderSceneBuffersRD::has_texture
                          (pSVar28,(StringName *)
                                   &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                    ::{lambda()#3}::operator()()::sname);
        if (cVar7 == '\0') {
          uVar21 = uVar15;
          if (this[0x16a0] != (GI)0x0) {
            uVar21 = CONCAT44((int)uVar31 >> 1,(int)uVar9 >> 1);
          }
          lVar18 = *param_2;
          if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
               ::{lambda()#6}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                            ::{lambda()#6}::operator()()::sname), iVar10 != 0)) {
            _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#6}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                          ::{lambda()#6}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#6}::operator()()::sname);
          }
          if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
               ::{lambda()#5}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                            ::{lambda()#5}::operator()()::sname), iVar10 != 0)) {
            _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#5}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                          ::{lambda()#5}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#5}::operator()()::sname);
          }
          RenderSceneBuffersRD::create_texture
                    (lVar18,&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                             ::{lambda()#5}::operator()()::sname,
                     &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                      ::{lambda()#6}::operator()()::sname,0x60,9,0,uVar21,0,1,1,0);
          lVar18 = *param_2;
          if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
               ::{lambda()#8}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                            ::{lambda()#8}::operator()()::sname), iVar10 != 0)) {
            _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#8}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                          ::{lambda()#8}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#8}::operator()()::sname);
          }
          if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
               ::{lambda()#7}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                            ::{lambda()#7}::operator()()::sname), iVar10 != 0)) {
            _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#7}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                          ::{lambda()#7}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#7}::operator()()::sname);
          }
          RenderSceneBuffersRD::create_texture
                    (lVar18,&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                             ::{lambda()#7}::operator()()::sname,
                     &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                      ::{lambda()#8}::operator()()::sname,0x60,9,0,uVar21,0,1,1,0);
          *(GI *)(local_300 + 0x1e0) = this[0x16a0];
        }
        if (*(long *)(local_300 + 0x1f8) == 0) {
          uVar21 = RenderingDevice::get_singleton();
          local_220 = 0;
          uVar21 = RenderingDevice::uniform_buffer_create(uVar21,0xf0,(StringName *)&local_228,0);
          uVar17 = local_220;
          *(undefined8 *)(local_300 + 0x1f8) = uVar21;
          if (local_220 != 0) {
            LOCK();
            plVar1 = (long *)(local_220 - 0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_220 = 0;
              Memory::free_static((void *)(uVar17 - 0x10),false);
            }
          }
        }
        Projection::Projection(local_1f8);
        Projection::set_depth_correction(SUB81(local_1f8,0),false,true);
        if (param_6 != 0) {
          pfVar23 = param_7;
          puVar26 = &local_78;
          pfVar29 = &local_138;
          do {
            pfVar23 = pfVar23 + 0x10;
            Projection::operator*(local_1b8,local_1f8);
            Projection::inverse();
            *(undefined8 *)pfVar29 = local_178;
            *(undefined8 *)(pfVar29 + 2) = uStack_170;
            *(undefined8 *)(pfVar29 + 4) = local_168;
            *(undefined8 *)(pfVar29 + 6) = uStack_160;
            *(undefined8 *)(pfVar29 + 8) = local_158;
            *(undefined8 *)(pfVar29 + 10) = uStack_150;
            *(undefined8 *)(pfVar29 + 0xc) = local_148;
            *(undefined8 *)(pfVar29 + 0xe) = uStack_140;
            Projection::~Projection((Projection *)&local_178);
            *puVar26 = *param_8;
            uVar3 = *(undefined4 *)(param_8 + 1);
            *(undefined4 *)((long)puVar26 + 0xc) = 0;
            *(undefined4 *)(puVar26 + 1) = uVar3;
            Projection::~Projection(local_1b8);
            puVar26 = puVar26 + 2;
            param_8 = (undefined8 *)((long)param_8 + 0xc);
            pfVar29 = pfVar29 + 0x10;
          } while (pfVar23 != param_7 + (ulong)param_6 * 0x10);
        }
        local_88 = *(undefined8 *)((long)param_9 + 0x24);
        local_ac = 0;
        local_9c = 0;
        local_8c = 0;
        local_b8 = CONCAT44((int)((ulong)param_9[1] >> 0x20),(int)*param_9);
        local_b0 = *(undefined4 *)(param_9 + 3);
        local_7c = _LC17;
        local_a8 = *(undefined4 *)((long)param_9 + 4);
        local_a4 = *(undefined4 *)(param_9 + 2);
        local_a0 = *(undefined4 *)((long)param_9 + 0x1c);
        local_98 = *(undefined4 *)(param_9 + 1);
        local_94 = *(undefined4 *)((long)param_9 + 0x14);
        local_90 = *(undefined4 *)(param_9 + 4);
        local_80 = *(undefined4 *)((long)param_9 + 0x2c);
        local_58 = uVar15;
        uVar15 = RenderingDevice::get_singleton();
        RenderingDevice::buffer_update(uVar15,*(undefined8 *)(local_300 + 0x1f8),0,0xf0,&local_138);
        Projection::~Projection(local_1f8);
        RenderingDevice::get_singleton();
        pvVar16 = (void *)RenderingDevice::compute_list_begin();
        uVar17 = *(ulong *)(param_10 + 0x28);
        if (8 < uVar17) {
          uVar17 = 8;
        }
        local_138 = (float)uVar17;
        fStack_134 = (float)(uint)(*(int *)(this + 0x1650) == 1);
        bVar8 = Projection::is_orthogonal();
        fStack_130 = (float)(uint)bVar8;
        local_118 = Projection::get_z_near();
        uStack_114 = Projection::get_z_far();
        pSVar28 = (StringName *)*param_2;
        local_128 = CONCAT44(_LC181 / ((float)(int)uVar31 * param_7[5]),
                             _LC181 / ((float)(int)uVar9 * *param_7));
        uStack_120 = CONCAT44((_LC17 + param_7[6]) / param_7[5],(_LC17 - param_7[2]) / *param_7);
        if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
             ::{lambda()#9}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                          ::{lambda()#9}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#9}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                        ::{lambda()#9}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#9}::operator()()::sname);
        }
        pOVar20 = (Object *)0x0;
        bVar8 = RenderSceneBuffersRD::has_custom_data(pSVar28);
        fVar11 = local_138;
        if (bVar8 != 0) {
          if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
               ::{lambda()#10}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                            ::{lambda()#10}::operator()()::sname), iVar10 != 0)) {
            _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#10}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                          ::{lambda()#10}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                 ::{lambda()#10}::operator()()::sname);
          }
          RenderSceneBuffersRD::get_custom_data((StringName *)&local_228);
          if (local_228 == (Object *)0x0) {
            pOVar20 = (Object *)0x0;
          }
          else {
            pOVar20 = (Object *)__dynamic_cast(local_228,&Object::typeinfo,&SDFGI::typeinfo,0);
            if (pOVar20 != (Object *)0x0) {
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                pOVar20 = (Object *)0x0;
              }
              if (local_228 == (Object *)0x0) goto LAB_0010b456;
            }
            cVar7 = RefCounted::unreference();
            pOVar24 = local_228;
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_228), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
              Memory::free_static(pOVar24,false);
            }
          }
        }
LAB_0010b456:
        uVar6 = (uint)(byte)local_300[0x1e0];
        if (param_6 == 2) {
          uVar6 = (byte)local_300[0x1e0] | 2;
        }
        pSVar28 = (StringName *)*param_2;
        if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
             ::{lambda()#12}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                          ::{lambda()#12}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#12}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                        ::{lambda()#12}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#12}::operator()()::sname);
        }
        if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
             ::{lambda()#11}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                          ::{lambda()#11}::operator()()::sname), iVar10 != 0)) {
          _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#11}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                        ::{lambda()#11}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                               ::{lambda()#11}::operator()()::sname);
        }
        iVar10 = RenderSceneBuffersRD::has_texture
                           (pSVar28,(StringName *)
                                    &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#11}::operator()()::sname);
        if ((bVar8 != 1) || (local_2b0 = 2, fVar11 == 0.0)) {
          local_2b0 = (uint)bVar8;
        }
        local_2f8 = 0;
        if (param_6 != 0) {
          do {
            fVar11 = (float)local_2f8;
            fStack_12c = fVar11;
            if (*(long *)(local_300 + local_2f8 * 8 + 0x1e8) == 0) {
LAB_0010b688:
              lVar30 = 0;
              local_260 = 0;
              uVar27 = 0;
              local_250 = 0;
              local_258 = (Object *)_LC185;
              lVar18 = 0;
              local_248 = 0;
              local_238[0] = 0;
              do {
                if ((bVar8 == 0) || (*(uint *)(pOVar20 + 600) <= uVar27)) {
                  lVar25 = *(long *)(lVar13 + 0x70);
                  if (lVar18 != 0) goto LAB_0010b6f1;
LAB_0010b722:
                  if (local_248 != 0) {
                    Vector<RID>::push_back(local_240,local_248);
                    Vector<RID>::push_back(local_240,lVar25);
                    local_248 = 0;
                    lVar18 = local_238[0];
                    lVar25 = local_248;
                  }
                }
                else {
                  lVar25 = *(long *)(*(long *)(pOVar20 + 0x260) + lVar30);
                  if (lVar18 == 0) goto LAB_0010b722;
LAB_0010b6f1:
                  Vector<RID>::push_back(local_240,lVar25);
                  lVar18 = local_238[0];
                  lVar25 = local_248;
                }
                local_248 = lVar25;
                uVar27 = uVar27 + 1;
                lVar30 = lVar30 + 0xc0;
              } while (uVar27 != 8);
              local_208[0] = 0;
              local_228 = local_258;
              local_220 = CONCAT71(local_220._1_7_,local_250);
              local_218 = local_248;
              if (lVar18 == 0) {
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] == 0) goto LAB_0010b84f;
                }
                LOCK();
                plVar1 = (long *)(lVar18 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_238[0] + -0x10),false);
                }
              }
LAB_0010b84f:
              lVar30 = 0;
              lVar18 = 0;
              uVar27 = 0;
              local_250 = 0;
              local_258 = (Object *)_LC186;
              local_248 = 0;
              local_238[0] = 0;
              do {
                if ((bVar8 == 0) || (*(uint *)(pOVar20 + 600) <= uVar27)) {
                  lVar25 = *(long *)(lVar13 + 0x70);
                  if (lVar18 != 0) goto LAB_0010b8b2;
LAB_0010b8e5:
                  if (local_248 != 0) {
                    Vector<RID>::push_back(local_240,local_248);
                    Vector<RID>::push_back(local_240,lVar25);
                    local_248 = 0;
                    lVar18 = local_238[0];
                    lVar25 = local_248;
                  }
                }
                else {
                  lVar25 = *(long *)(*(long *)(pOVar20 + 0x260) + 8 + lVar30);
                  if (lVar18 == 0) goto LAB_0010b8e5;
LAB_0010b8b2:
                  Vector<RID>::push_back(local_240,lVar25);
                  lVar18 = local_238[0];
                  lVar25 = local_248;
                }
                local_248 = lVar25;
                uVar27 = uVar27 + 1;
                lVar30 = lVar30 + 0xc0;
              } while (uVar27 != 8);
              local_208[0] = 0;
              local_228 = local_258;
              local_220 = CONCAT71(local_220._1_7_,local_250);
              local_218 = local_248;
              if (lVar18 == 0) {
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] == 0) goto LAB_0010ba07;
                }
                LOCK();
                plVar1 = (long *)(lVar18 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_238[0] + -0x10),false);
                }
              }
LAB_0010ba07:
              lVar30 = 0;
              lVar18 = 0;
              uVar27 = 0;
              local_250 = 0;
              local_258 = (Object *)_LC187;
              local_248 = 0;
              local_238[0] = 0;
              do {
                if ((bVar8 == 0) || (*(uint *)(pOVar20 + 600) <= uVar27)) {
                  lVar25 = *(long *)(lVar13 + 0x70);
                  if (lVar18 != 0) goto LAB_0010ba6a;
LAB_0010ba9d:
                  if (local_248 != 0) {
                    Vector<RID>::push_back(local_240,local_248);
                    Vector<RID>::push_back(local_240,lVar25);
                    local_248 = 0;
                    lVar18 = local_238[0];
                    lVar25 = local_248;
                  }
                }
                else {
                  lVar25 = *(long *)(*(long *)(pOVar20 + 0x260) + 0x10 + lVar30);
                  if (lVar18 == 0) goto LAB_0010ba9d;
LAB_0010ba6a:
                  Vector<RID>::push_back(local_240,lVar25);
                  lVar18 = local_238[0];
                  lVar25 = local_248;
                }
                local_248 = lVar25;
                uVar27 = uVar27 + 1;
                lVar30 = lVar30 + 0xc0;
              } while (uVar27 != 8);
              local_208[0] = 0;
              local_228 = local_258;
              local_220 = CONCAT71(local_220._1_7_,local_250);
              local_218 = local_248;
              if (lVar18 == 0) {
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] == 0) goto LAB_0010bbbf;
                }
                LOCK();
                plVar1 = (long *)(lVar18 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_238[0] + -0x10),false);
                }
              }
LAB_0010bbbf:
              lVar30 = 0;
              lVar18 = 0;
              uVar27 = 0;
              local_250 = 0;
              local_258 = (Object *)_LC188;
              local_248 = 0;
              local_238[0] = 0;
              do {
                if ((bVar8 == 0) || (*(uint *)(pOVar20 + 600) <= uVar27)) {
                  lVar25 = *(long *)(lVar13 + 0x70);
                  if (lVar18 != 0) goto LAB_0010bc22;
LAB_0010bc55:
                  if (local_248 != 0) {
                    Vector<RID>::push_back(local_240,local_248);
                    Vector<RID>::push_back(local_240,lVar25);
                    local_248 = 0;
                    lVar18 = local_238[0];
                    lVar25 = local_248;
                  }
                }
                else {
                  lVar25 = *(long *)(*(long *)(pOVar20 + 0x260) + 0x18 + lVar30);
                  if (lVar18 == 0) goto LAB_0010bc55;
LAB_0010bc22:
                  Vector<RID>::push_back(local_240,lVar25);
                  lVar18 = local_238[0];
                  lVar25 = local_248;
                }
                local_248 = lVar25;
                uVar27 = uVar27 + 1;
                lVar30 = lVar30 + 0xc0;
              } while (uVar27 != 8);
              local_208[0] = 0;
              local_228 = local_258;
              local_220 = CONCAT71(local_220._1_7_,local_250);
              local_218 = local_248;
              if (lVar18 == 0) {
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] == 0) goto LAB_0010bd77;
                }
                LOCK();
                plVar1 = (long *)(lVar18 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_238[0] + -0x10),false);
                }
              }
LAB_0010bd77:
              if (bVar8 == 0) {
                local_218 = *(undefined8 *)(lVar13 + 0x70);
              }
              else {
                local_218 = *(long *)(pOVar20 + 0x278);
              }
              local_220 = local_220 & 0xffffffffffffff00;
              local_228 = (Object *)_LC189;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_218 = *(undefined8 *)(lVar14 + 0x50);
              local_220 = local_220 & 0xffffffffffffff00;
              local_228 = (Object *)_LC190;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_218 = *(undefined8 *)(lVar14 + 0x90);
              local_220 = local_220 & 0xffffffffffffff00;
              local_228 = (Object *)_LC191;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_250 = 0;
              local_248 = 0;
              local_258 = (Object *)_LC192;
              local_238[0] = 0;
              pSVar28 = (StringName *)*param_2;
              if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                   ::{lambda()#14}::operator()()::sname == '\0') &&
                 (iVar12 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                ::{lambda()#14}::operator()()::sname), iVar12 != 0))
              {
                _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#14}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                              ::{lambda()#14}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#14}::operator()()::sname);
              }
              if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                   ::{lambda()#13}::operator()()::sname == '\0') &&
                 (iVar12 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                ::{lambda()#13}::operator()()::sname), iVar12 != 0))
              {
                _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#13}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                              ::{lambda()#13}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#13}::operator()()::sname);
              }
              lVar18 = RenderSceneBuffersRD::get_texture_slice
                                 (pSVar28,(StringName *)
                                          &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                           ::{lambda()#13}::operator()()::sname,0x120140,
                                  (uint)fVar11,0,1);
              if (local_238[0] == 0) {
                if (local_248 != 0) {
                  Vector<RID>::push_back(local_240,local_248);
                  Vector<RID>::push_back(local_240,lVar18);
                  local_248 = 0;
                  goto LAB_0010beeb;
                }
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_248 = lVar18;
LAB_0010c82a:
                local_208[0] = 0;
                local_228 = local_258;
                local_218 = local_248;
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                Vector<RID>::push_back(local_240,lVar18);
LAB_0010beeb:
                lVar18 = local_238[0];
                local_208[0] = 0;
                local_228 = local_258;
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_218 = local_248;
                if (local_238[0] == 0) goto LAB_0010c82a;
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 == 0) {
LAB_0010bf85:
                  LOCK();
                  plVar1 = (long *)(lVar18 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_238[0] + -0x10),false);
                  }
                }
                else {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] != 0) goto LAB_0010bf85;
                }
              }
              local_250 = 0;
              local_248 = 0;
              local_258 = (Object *)_LC193;
              local_238[0] = 0;
              pSVar28 = (StringName *)*param_2;
              if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                   ::{lambda()#16}::operator()()::sname == '\0') &&
                 (iVar12 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                ::{lambda()#16}::operator()()::sname), iVar12 != 0))
              {
                _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#16}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                              ::{lambda()#16}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#16}::operator()()::sname);
              }
              if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                   ::{lambda()#15}::operator()()::sname == '\0') &&
                 (iVar12 = __cxa_guard_acquire(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                ::{lambda()#15}::operator()()::sname), iVar12 != 0))
              {
                _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#15}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                              ::{lambda()#15}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                     ::{lambda()#15}::operator()()::sname);
              }
              lVar18 = RenderSceneBuffersRD::get_texture_slice
                                 (pSVar28,(StringName *)
                                          &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                           ::{lambda()#15}::operator()()::sname,0x120120,
                                  (uint)fVar11,0,1);
              if (local_238[0] == 0) {
                if (local_248 != 0) {
                  Vector<RID>::push_back(local_240,local_248);
                  Vector<RID>::push_back(local_240,lVar18);
                  local_248 = 0;
                  goto LAB_0010c04e;
                }
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_248 = lVar18;
LAB_0010c88a:
                local_208[0] = 0;
                local_228 = local_258;
                local_218 = local_248;
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                Vector<RID>::push_back(local_240,lVar18);
LAB_0010c04e:
                lVar18 = local_238[0];
                local_208[0] = 0;
                local_228 = local_258;
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_218 = local_248;
                if (local_238[0] == 0) goto LAB_0010c88a;
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 == 0) {
LAB_0010c0e8:
                  LOCK();
                  plVar1 = (long *)(lVar18 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_238[0] + -0x10),false);
                  }
                }
                else {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] != 0) goto LAB_0010c0e8;
                }
              }
              if (bVar8 == 0) {
                local_218 = *(undefined8 *)(lVar13 + 0x80);
              }
              else {
                local_218 = *(long *)(pOVar20 + 0x268);
              }
              local_220 = local_220 & 0xffffffffffffff00;
              local_228 = (Object *)_LC194;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_218 = RenderSceneBuffersRD::get_depth_texture((uint)*param_2);
              local_228 = (Object *)_LC195;
              local_220 = local_220 & 0xffffffffffffff00;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_220 = local_220 & 0xffffffffffffff00;
              local_208[0] = 0;
              local_218 = *(undefined8 *)(param_3 + local_2f8 * 8);
              local_228 = (Object *)_LC196;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_218 = param_4;
              if (param_4 == 0) {
                local_218 = *(long *)(lVar13 + 0x20);
              }
              local_220 = local_220 & 0xffffffffffffff00;
              local_228 = (Object *)_LC197;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_220 = local_220 & 0xffffffffffffff00;
              local_218 = *(long *)(this + 0x1690);
              local_208[0] = 0;
              local_228 = (Object *)_LC198;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              local_248 = 0;
              local_250 = 0;
              local_258 = (Object *)_LC199;
              local_238[0] = 0;
              lVar18 = *(long *)(local_300 + 0x180);
              if (lVar18 == 0) {
                uVar15 = RenderingDevice::get_singleton();
                local_220 = 0;
                lVar18 = RenderingDevice::uniform_buffer_create
                                   (uVar15,0x380,(StringName *)&local_228,0);
                uVar17 = local_220;
                *(long *)(local_300 + 0x180) = lVar18;
                if (local_220 == 0) goto LAB_0010c2b1;
                LOCK();
                plVar1 = (long *)(local_220 - 0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_220 = 0;
                  Memory::free_static((void *)(uVar17 - 0x10),false);
                }
                lVar18 = *(long *)(local_300 + 0x180);
                if (local_238[0] == 0) {
                  if (local_248 == 0) goto LAB_0010c2b1;
                  Vector<RID>::push_back(local_240,local_248);
                  Vector<RID>::push_back(local_240,lVar18);
                  local_248 = 0;
                }
                else {
                  Vector<RID>::push_back(local_240,lVar18);
                }
                lVar18 = local_238[0];
                local_208[0] = 0;
                local_228 = local_258;
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_218 = local_248;
                if (local_238[0] == 0) goto LAB_0010c2ec;
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 == 0) {
LAB_0010cb63:
                  LOCK();
                  plVar1 = (long *)(lVar18 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_238[0] + -0x10),false);
                  }
                }
                else {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] != 0) goto LAB_0010cb63;
                }
              }
              else {
LAB_0010c2b1:
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_218 = lVar18;
LAB_0010c2ec:
                local_208[0] = 0;
                local_248 = local_218;
                local_228 = local_258;
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              local_250 = 0;
              local_258 = _LC200;
              local_248 = 0;
              pOVar24 = local_300 + 0x188;
              pOVar19 = local_300 + 0x1c8;
              local_238[0] = 0;
              do {
                while (lVar18 = *(long *)pOVar24, local_238[0] == 0) {
                  while (local_248 == 0) {
                    pOVar24 = pOVar24 + 8;
                    local_248 = lVar18;
                    if (pOVar19 == pOVar24) goto LAB_0010c3e0;
                    lVar18 = *(long *)pOVar24;
                  }
                  pOVar24 = pOVar24 + 8;
                  Vector<RID>::push_back(local_240,local_248);
                  Vector<RID>::push_back(local_240,lVar18);
                  local_248 = 0;
                  if (pOVar19 == pOVar24) goto LAB_0010c3e0;
                }
                pOVar24 = pOVar24 + 8;
                Vector<RID>::push_back(local_240,lVar18);
              } while (pOVar19 != pOVar24);
LAB_0010c3e0:
              lVar18 = local_238[0];
              local_208[0] = 0;
              local_228 = local_258;
              local_220 = CONCAT71(local_220._1_7_,local_250);
              local_218 = local_248;
              if (local_238[0] == 0) {
                Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              }
              else {
                CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                lVar30 = local_208[0];
                Vector<RenderingDevice::Uniform>::push_back(local_268);
                if (lVar30 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar30 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_208[0] + -0x10),false);
                  }
                  lVar18 = local_238[0];
                  if (local_238[0] == 0) goto LAB_0010c4a9;
                }
                LOCK();
                plVar1 = (long *)(lVar18 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_238[0] + -0x10),false);
                }
              }
LAB_0010c4a9:
              local_218 = *(long *)(local_300 + 0x1f8);
              local_228 = _LC201;
              local_220 = local_220 & 0xffffffffffffff00;
              local_208[0] = 0;
              Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
              cVar7 = (**(code **)(*RendererSceneRenderRD::singleton + 0x278))();
              if (cVar7 != '\0') {
                local_250 = 0;
                local_248 = 0;
                local_238[0] = 0;
                local_258 = _LC202;
                if ((char)iVar10 == '\0') {
                  lVar18 = *(long *)(lVar13 + 0xa8);
                }
                else {
                  pSVar28 = (StringName *)*param_2;
                  if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                       ::{lambda()#18}::operator()()::sname == '\0') &&
                     (iVar12 = __cxa_guard_acquire(&
                                                  process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                  ::{lambda()#18}::operator()()::sname), iVar12 != 0
                     )) {
                    _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                         ::{lambda()#18}::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                  ::{lambda()#18}::operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                         ::{lambda()#18}::operator()()::sname);
                  }
                  if ((process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                       ::{lambda()#17}::operator()()::sname == '\0') &&
                     (iVar12 = __cxa_guard_acquire(&
                                                  process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                  ::{lambda()#17}::operator()()::sname), iVar12 != 0
                     )) {
                    _scs_create((char *)&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                         ::{lambda()#17}::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                  ::{lambda()#17}::operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                         ::{lambda()#17}::operator()()::sname);
                  }
                  uVar15 = 1;
                  auVar32 = RenderSceneBuffersRD::get_texture_slice
                                      (pSVar28,(StringName *)
                                               &process_gi(Ref<RenderSceneBuffersRD>,RID_const*,RID,RID,unsigned_int,Projection_const*,Vector3_const*,Transform3D_const&,PagedArray<RID>const&)
                                                ::{lambda()#17}::operator()()::sname,0x120100,
                                       (uint)fVar11,0,1);
                  lVar18 = auVar32._0_8_;
                  if (local_238[0] == 0) {
                    if (local_248 != 0) {
                      Vector<RID>::push_back(local_240,local_248,auVar32._8_8_,uVar15);
                      Vector<RID>::push_back(local_240,lVar18);
                      local_248 = 0;
                      lVar18 = local_248;
                    }
                  }
                  else {
                    Vector<RID>::push_back(local_240,lVar18,auVar32._8_8_,uVar15);
                    lVar18 = local_248;
                  }
                }
                local_248 = lVar18;
                lVar18 = local_238[0];
                local_208[0] = 0;
                local_228 = local_258;
                local_220 = CONCAT71(local_220._1_7_,local_250);
                local_218 = local_248;
                if (local_238[0] == 0) {
                  Vector<RenderingDevice::Uniform>::push_back(local_268,(StringName *)&local_228);
                }
                else {
                  CowData<RID>::_ref((CowData<RID> *)local_208,(CowData *)local_238);
                  lVar30 = local_208[0];
                  Vector<RenderingDevice::Uniform>::push_back(local_268);
                  if (lVar30 != 0) {
                    LOCK();
                    plVar1 = (long *)(lVar30 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      Memory::free_static((void *)(local_208[0] + -0x10),false);
                    }
                    lVar18 = local_238[0];
                    if (local_238[0] == 0) goto LAB_0010c610;
                  }
                  LOCK();
                  plVar1 = (long *)(lVar18 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_238[0] + -0x10),false);
                  }
                }
              }
LAB_0010c610:
              uVar15 = RenderingDevice::get_singleton();
              uVar17 = *(ulong *)(this + 0x1820);
              if (*(long *)(this + 0x16c0) == 0) {
                lVar18 = 0;
LAB_0010c782:
                _err_print_index_error
                          ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0
                           ,lVar18,"p_variant","variant_defines.size()","",false,false);
LAB_0010c7bb:
                uVar21 = 0;
              }
              else {
                lVar18 = *(long *)(*(long *)(this + 0x16c0) + -8);
                if (lVar18 < 1) goto LAB_0010c782;
                pcVar22 = *(char **)(this + 0x16d0);
                if (pcVar22 == (char *)0x0) {
LAB_0010cca8:
                  lVar18 = 0;
LAB_0010ccab:
                  uVar17 = 0;
LAB_0010ccc8:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,uVar17,lVar18,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                lVar18 = *(long *)(pcVar22 + -8);
                if (lVar18 < 1) goto LAB_0010ccab;
                if (*pcVar22 != '\0') {
                  if ((uVar17 == 0) || (*(uint *)(this + 0x177c) <= (uint)uVar17)) {
LAB_0010d2a0:
                    _err_print_error("version_get_shader",
                                     "./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                                     "Parameter \"version\" is null.",0,0);
                    uVar21 = 0;
                    goto LAB_0010c749;
                  }
                  lVar30 = ((uVar17 & 0xffffffff) % (ulong)*(uint *)(this + 0x1778)) * 0xa0 +
                           *(long *)(*(long *)(this + 0x1768) +
                                    ((uVar17 & 0xffffffff) / (ulong)*(uint *)(this + 0x1778)) * 8);
                  if (*(int *)(lVar30 + 0x98) != (int)(uVar17 >> 0x20)) {
                    if (*(int *)(lVar30 + 0x98) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_0010d2a0;
                  }
                  pVVar2 = (Version *)(this + 0x16a8);
                  iVar12 = (int)lVar30;
                  if (*(char *)(lVar30 + 0x91) != '\0') {
                    ShaderRD::_initialize_version(pVVar2);
                    lVar18 = *(long *)(this + 0x1720);
                    if (lVar18 != 0) {
                      lVar25 = 0;
                      do {
                        while( true ) {
                          if (*(long *)(lVar18 + -8) <= lVar25) goto LAB_0010c6cf;
                          if (*(char *)(lVar18 + lVar25) != '\0') break;
                          ShaderRD::_allocate_placeholders(pVVar2,iVar12);
                          lVar18 = *(long *)(this + 0x1720);
                          lVar25 = lVar25 + 1;
                          if (lVar18 == 0) goto LAB_0010c6cf;
                        }
                        ShaderRD::_compile_version_start(pVVar2,iVar12);
                        lVar18 = *(long *)(this + 0x1720);
                        lVar25 = lVar25 + 1;
                      } while (lVar18 != 0);
                    }
                  }
LAB_0010c6cf:
                  puVar4 = *(uint **)(this + 0x16e0);
                  if (puVar4 == (uint *)0x0) goto LAB_0010cca8;
                  lVar18 = *(long *)(puVar4 + -2);
                  if (lVar18 < 1) goto LAB_0010ccab;
                  uVar17 = (ulong)*puVar4;
                  lVar25 = *(long *)(lVar30 + 0x68);
                  if (lVar25 == 0) {
                    lVar18 = 0;
                    goto LAB_0010ccc8;
                  }
                  lVar18 = *(long *)(lVar25 + -8);
                  if (lVar18 <= (long)uVar17) goto LAB_0010ccc8;
                  if (*(long *)(lVar25 + uVar17 * 8) != 0) {
                    ShaderRD::_compile_version_end(pVVar2,iVar12);
                  }
                  if (*(char *)(lVar30 + 0x90) != '\0') {
                    puVar26 = *(undefined8 **)(lVar30 + 0x88);
                    if (puVar26 == (undefined8 *)0x0) goto LAB_0010cca8;
                    lVar18 = puVar26[-1];
                    if (0 < lVar18) {
                      uVar21 = *puVar26;
                      goto LAB_0010c749;
                    }
                    goto LAB_0010ccab;
                  }
                  goto LAB_0010c7bb;
                }
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xa7,
                                 "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                                 ,0,0);
                uVar21 = 0;
              }
LAB_0010c749:
              uVar15 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                 (uVar15,local_268,uVar21,0,0);
              *(undefined8 *)(local_300 + local_2f8 * 8 + 0x1e8) = uVar15;
              CowData<RenderingDevice::Uniform>::_unref
                        ((CowData<RenderingDevice::Uniform> *)&local_260);
            }
            else {
              uVar15 = RenderingDevice::get_singleton();
              cVar7 = RenderingDevice::uniform_set_is_valid
                                (uVar15,*(undefined8 *)
                                         (local_300 + (local_2f8 & 0xffffffff) * 8 + 0x1e8));
              if (cVar7 == '\0') goto LAB_0010b688;
            }
            uVar15 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_compute_pipeline
                      (uVar15,pvVar16,
                       *(undefined8 *)
                        (this + ((long)(int)local_2b0 + 0x304 + (ulong)(-iVar10 & 4U | uVar6) * 3) *
                                8 + 8));
            uVar15 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_bind_uniform_set
                      (uVar15,pvVar16,
                       *(undefined8 *)(local_300 + (local_2f8 & 0xffffffff) * 8 + 0x1e8),0);
            lVar18 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_set_push_constant(lVar18,pvVar16,(uint)&local_138);
            if (local_300[0x1e0] == (Object)0x0) {
              lVar18 = RenderingDevice::get_singleton();
              RenderingDevice::compute_list_dispatch_threads(lVar18,(uint)pvVar16,uVar9,uVar31);
            }
            else {
              lVar18 = RenderingDevice::get_singleton();
              RenderingDevice::compute_list_dispatch_threads
                        (lVar18,(uint)pvVar16,(int)uVar9 >> 1,(int)uVar31 >> 1);
            }
            local_2f8 = local_2f8 + 1;
          } while (local_2f8 != param_6);
        }
        RenderingDevice::get_singleton();
        RenderingDevice::compute_list_end();
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
        if (((pOVar20 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
           (cVar7 = predelete_handler(pOVar20), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
          Memory::free_static(pOVar20,false);
        }
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_300), cVar7 != '\0')) {
          (**(code **)(*(long *)local_300 + 0x140))(local_300);
          Memory::free_static(local_300,false);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010d790;
      }
      if ((local_228 != (Object *)0x0) &&
         (cVar7 = RefCounted::unreference(), pOVar20 = local_228, cVar7 != '\0')) {
        cVar7 = predelete_handler(local_228);
        local_300 = (Object *)0x0;
        goto joined_r0x0010d768;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar15 = 0xed3;
    pcVar22 = "Condition \"rbgi.is_null()\" is true.";
LAB_0010af09:
    _err_print_error("process_gi","servers/rendering/renderer_rd/environment/gi.cpp",uVar15,pcVar22,
                     0,0);
    return;
  }
LAB_0010d790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::VoxelGIInstance::debug(long, RID, Projection const&, bool, bool, float) */

void __thiscall
RendererRD::GI::VoxelGIInstance::debug
          (undefined4 param_1_00,VoxelGIInstance *this,void *param_1,undefined8 param_4,
          Projection *param_5,char param_6,char param_7)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  GI *pGVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  uint local_210;
  Vector<RenderingDevice::Uniform> local_208 [8];
  undefined8 local_200;
  ulong local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined1 local_1c8 [48];
  Transform3D local_198 [48];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  Projection local_128 [64];
  undefined1 local_e8 [5] [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = RendererRD::MaterialStorage::get_singleton();
  auVar6._8_4_ = local_58._8_4_;
  auVar6._0_8_ = local_58._0_8_;
  auVar5._8_4_ = local_e8[0]._8_4_;
  auVar5._0_8_ = local_e8[0]._0_8_;
  if ((*(long *)(this + 0x28) == 0) ||
     (local_e8[0] = auVar5, local_58 = auVar6, *(long *)(*(long *)(this + 0x28) + -8) == 0))
  goto LAB_0010dc3b;
  (**(code **)(**(long **)this + 0x60))(local_1c8,*(long **)this,*(undefined8 *)(this + 8));
  Transform3D::affine_inverse();
  Projection::Projection((Projection *)&local_a8,local_198);
  Projection::Projection(local_128,(Transform3D *)(this + 0x54));
  Projection::operator*((Projection *)local_e8,param_5);
  Projection::operator*((Projection *)&local_168,(Projection *)local_e8);
  Projection::~Projection((Projection *)local_e8);
  Projection::~Projection(local_128);
  Projection::~Projection((Projection *)&local_a8);
  local_e8[0] = (**(code **)(**(long **)this + 0x38))(*(long **)this,*(undefined8 *)(this + 8));
  local_60 = param_1_00;
  local_64 = (**(code **)(**(long **)this + 0x70))(*(long **)this,*(undefined8 *)(this + 8));
  lVar14 = *(long *)(this + 0x28);
  if (lVar14 == 0) {
LAB_0010dd25:
    lVar13 = 0;
LAB_0010dd28:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar13,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar13 = *(long *)(lVar14 + -8);
  if (lVar13 < 1) goto LAB_0010dd28;
  local_68 = *(undefined4 *)(lVar14 + 0x24);
  pGVar11 = *(GI **)this;
  local_5c = 0;
  local_4c = 0;
  local_a8 = local_168;
  uStack_a0 = uStack_160;
  local_98 = local_158;
  uStack_90 = uStack_150;
  local_88 = local_148;
  uStack_80 = uStack_140;
  local_78 = local_138;
  uStack_70 = uStack_130;
  local_58 = local_e8[0];
  if (*(long *)(pGVar11 + 0x950) != 0) {
    uVar8 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar8,*(undefined8 *)(*(long *)this + 0x950));
    pGVar11 = *(GI **)this;
  }
  local_200 = 0;
  local_1e8 = voxel_gi_get_data_buffer(pGVar11,*(undefined8 *)(this + 8));
  local_1f0 = 0;
  local_1d8 = 0;
  local_1f8 = _LC209;
  Vector<RenderingDevice::Uniform>::push_back(local_208,&local_1f8);
  local_1e8 = *(undefined8 *)(this + 0x10);
  local_1f0 = 0;
  local_1f8 = _LC186;
  local_1d8 = 0;
  Vector<RenderingDevice::Uniform>::push_back(local_208,&local_1f8);
  local_1e8 = *(undefined8 *)(lVar7 + 0x30);
  local_1f0 = 0;
  local_1f8 = _LC210;
  local_1d8 = 0;
  Vector<RenderingDevice::Uniform>::push_back(local_208,&local_1f8);
  if (((param_7 == '\x01') || (param_6 == '\0')) || (this[0x50] == (VoxelGIInstance)0x0)) {
    lVar7 = *(long *)(this + 0x28);
    if (lVar7 == 0) goto LAB_0010dd25;
    lVar13 = *(long *)(lVar7 + -8);
    if (lVar13 < 1) goto LAB_0010dd28;
    local_210 = *(uint *)(lVar7 + 0x28);
    uVar8 = RenderingDevice::get_singleton();
    lVar7 = *(long *)this;
    lVar14 = 0x6e0;
    uVar8 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                      (uVar8,local_208,*(undefined8 *)(lVar7 + 0x450),0,0);
    iVar12 = 2;
    *(undefined8 *)(lVar7 + 0x950) = uVar8;
    if (param_7 == '\0') {
      if (param_6 != '\0') goto LAB_0010dcde;
      lVar14 = 0x470;
      iVar12 = 0;
    }
  }
  else {
    local_210 = local_58._0_4_ * local_58._4_4_ * local_58._8_4_;
    uVar8 = RenderingDevice::get_singleton();
    lVar7 = *(long *)this;
    uVar8 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                      (uVar8,local_208,*(undefined8 *)(lVar7 + 0x450),0);
    *(undefined8 *)(lVar7 + 0x950) = uVar8;
LAB_0010dcde:
    lVar14 = (-(ulong)(this[0x50] == (VoxelGIInstance)0x0) & 0xfffffffffffffd90) + 0x818;
    iVar12 = (-(uint)(this[0x50] == (VoxelGIInstance)0x0) & 0xfffffffe) + 3;
  }
  uVar8 = RenderingDevice::get_singleton();
  lVar7 = *(long *)this;
  uVar9 = RenderingDevice::get_singleton();
  pcVar15 = (char *)(lVar14 + lVar7);
  lVar14 = RenderingDevice::framebuffer_get_format(uVar9,param_4);
  if (*(long *)(pcVar15 + 0x40) == 0) {
    _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                     0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                     "Attempted to use an unused shader variant (shader is null),",0,0);
    lVar7 = 0;
  }
  else {
    while( true ) {
      uVar4 = local_1f8 >> 8;
      local_1f8 = uVar4 << 8;
      LOCK();
      cVar2 = *pcVar15;
      if (cVar2 == '\0') {
        *pcVar15 = '\x01';
      }
      UNLOCK();
      if (cVar2 == '\0') break;
      local_1f8 = uVar4 << 8;
      do {
      } while (*pcVar15 != '\0');
    }
    lVar7 = lVar7 + (long)iVar12 * 0x138;
    if (*(uint *)(lVar7 + 0x5a0) != 0) {
      plVar10 = *(long **)(lVar7 + 0x598);
      plVar1 = plVar10 + (ulong)*(uint *)(lVar7 + 0x5a0) * 5;
      do {
        if (((*plVar10 == -1) && (lVar14 == plVar10[1])) &&
           ((*(byte *)(lVar7 + 0x4be) == *(byte *)((long)plVar10 + 0x14) &&
            (((int)plVar10[2] == 0 && ((int)plVar10[3] == 0)))))) {
          lVar7 = plVar10[4];
          *pcVar15 = '\0';
          goto LAB_0010dbc5;
        }
        plVar10 = plVar10 + 5;
      } while (plVar1 != plVar10);
    }
    lVar7 = PipelineCacheRD::_generate_version
                      ((long)pcVar15,-1,SUB81(lVar14,0),(uint)*(byte *)(lVar7 + 0x4be),0);
    *pcVar15 = '\0';
  }
LAB_0010dbc5:
  RenderingDevice::draw_list_bind_render_pipeline(uVar8,param_1,lVar7);
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set
            (uVar8,param_1,*(undefined8 *)(*(long *)this + 0x950),0);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_set_push_constant(lVar7,param_1,(uint)(Projection *)&local_a8);
  lVar7 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_draw(lVar7,SUB81(param_1,0),0,local_210);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_200);
  Projection::~Projection((Projection *)&local_168);
LAB_0010dc3b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::GI::debug_voxel_gi(RID, long, RID, Projection const&, bool, bool, float) */

void RendererRD::GI::debug_voxel_gi
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  VoxelGIInstance *pVVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x7c))) {
    pVVar2 = (VoxelGIInstance *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x78)) * 0x90 +
             *(long *)(*(long *)(param_1 + 0x68) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x78)) * 8));
    iVar1 = *(int *)(pVVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      VoxelGIInstance::debug(pVVar2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("debug_voxel_gi","servers/rendering/renderer_rd/environment/gi.cpp",0x1018,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::SDFGI::debug_probes(RID, unsigned int, Projection const*) */

void __thiscall
RendererRD::GI::SDFGI::debug_probes(SDFGI *this,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  long *plVar1;
  Version *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  code *pcVar10;
  float fVar11;
  char cVar12;
  float fVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  void *pvVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  long in_FS_OFFSET;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  long local_128;
  undefined8 local_120;
  char *local_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = RendererRD::MaterialStorage::get_singleton();
  if (*(long *)(this + 0x2c8) == 0) {
    uVar16 = RenderingDevice::get_singleton();
    local_110 = 0;
    uVar16 = RenderingDevice::uniform_buffer_create(uVar16,0x80,&local_118,0);
    uVar20 = local_110;
    *(undefined8 *)(this + 0x2c8) = uVar16;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(uVar20 - 0x10),false);
      }
    }
  }
  puVar15 = &local_c8;
  puVar28 = param_4;
  if (param_3 != 0) {
    do {
      uVar16 = puVar28[1];
      puVar29 = puVar28 + 8;
      *puVar15 = *puVar28;
      puVar15[1] = uVar16;
      uVar16 = puVar28[3];
      puVar15[2] = puVar28[2];
      puVar15[3] = uVar16;
      uVar16 = puVar28[5];
      puVar15[4] = puVar28[4];
      puVar15[5] = uVar16;
      uVar16 = puVar28[7];
      puVar15[6] = puVar28[6];
      puVar15[7] = uVar16;
      puVar15 = puVar15 + 8;
      puVar28 = puVar29;
    } while (puVar29 != param_4 + (ulong)param_3 * 8);
  }
  uVar16 = RenderingDevice::get_singleton();
  RenderingDevice::buffer_update(uVar16,*(undefined8 *)(this + 0x2c8),0);
  uStack_a4 = *(undefined4 *)(this + 0x2fc);
  uStack_ac = 0;
  local_c8 = _LC217;
  uStack_c0 = 0x3f65c8fa0000000e;
  iStack_9c = *(int *)(this + 0x2b4);
  uVar22 = iStack_9c * iStack_9c * iStack_9c;
  local_b8 = (float)*(uint *)(this + 0x250);
  fStack_b4 = local_b8;
  fStack_b0 = local_b8;
  if (*(long *)(this + 0x2d0) == 0) {
LAB_0010dffe:
    local_108 = *(undefined8 *)(this + 0x2d8);
    local_120 = 0;
    local_110 = local_110 & 0xffffffffffffff00;
    local_118 = _LC218;
    local_f8 = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_128,&local_118);
    local_110 = local_110 & 0xffffffffffffff00;
    local_108 = *(undefined8 *)(this + 0x268);
    local_f8 = 0;
    local_118 = _LC186;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_128,&local_118);
    local_108 = *(undefined8 *)(lVar14 + 0x50);
    local_110 = local_110 & 0xffffffffffffff00;
    local_118 = _LC210;
    local_f8 = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_128,&local_118);
    local_110 = local_110 & 0xffffffffffffff00;
    local_108 = *(undefined8 *)(this + 0x278);
    local_f8 = 0;
    local_118 = _LC188;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_128,&local_118);
    local_110 = local_110 & 0xffffffffffffff00;
    local_108 = *(undefined8 *)(this + 0x2c8);
    local_f8 = 0;
    local_118 = _LC219;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_128,&local_118);
    uVar16 = RenderingDevice::get_singleton();
    lVar14 = *(long *)(this + 0x180);
    uVar20 = *(ulong *)(lVar14 + 0xe28);
    if (*(long *)(lVar14 + 0xcc8) == 0) {
      lVar19 = 0;
LAB_0010eb96:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar19,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0010ebcf:
      uVar18 = 0;
    }
    else {
      lVar19 = *(long *)(*(long *)(lVar14 + 0xcc8) + -8);
      if (lVar19 < 1) goto LAB_0010eb96;
      pcVar8 = *(char **)(lVar14 + 0xcd8);
      if (pcVar8 == (char *)0x0) {
LAB_0010ecc3:
        lVar19 = 0;
LAB_0010ecc6:
        uVar20 = 0;
LAB_0010ece3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar19,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      lVar19 = *(long *)(pcVar8 + -8);
      if (lVar19 < 1) goto LAB_0010ecc6;
      if (*pcVar8 != '\0') {
        if ((uVar20 == 0) || (*(uint *)(lVar14 + 0xd84) <= (uint)uVar20)) {
LAB_0010ed6f:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar18 = 0;
          goto LAB_0010e232;
        }
        lVar35 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar14 + 0xd80)) * 0xa0 +
                 *(long *)(*(long *)(lVar14 + 0xd70) +
                          ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar14 + 0xd80)) * 8);
        if (*(int *)(lVar35 + 0x98) != (int)(uVar20 >> 0x20)) {
          if (*(int *)(lVar35 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010ed6f;
        }
        pVVar2 = (Version *)(lVar14 + 0xcb0);
        iVar30 = (int)lVar35;
        if (*(char *)(lVar35 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar19 = *(long *)(lVar14 + 0xd28);
          if (lVar19 != 0) {
            lVar26 = 0;
            do {
              if (*(long *)(lVar19 + -8) <= lVar26) break;
              if (*(char *)(lVar19 + lVar26) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar30);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar30);
              }
              lVar19 = *(long *)(lVar14 + 0xd28);
              lVar26 = lVar26 + 1;
            } while (lVar19 != 0);
          }
        }
        puVar9 = *(uint **)(lVar14 + 0xce8);
        if (puVar9 == (uint *)0x0) goto LAB_0010ecc3;
        lVar19 = *(long *)(puVar9 + -2);
        if (lVar19 < 1) goto LAB_0010ecc6;
        uVar20 = (ulong)*puVar9;
        lVar14 = *(long *)(lVar35 + 0x68);
        if (lVar14 == 0) {
          lVar19 = 0;
          goto LAB_0010ece3;
        }
        lVar19 = *(long *)(lVar14 + -8);
        if (lVar19 <= (long)uVar20) goto LAB_0010ece3;
        if (*(long *)(lVar14 + uVar20 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar30);
        }
        if (*(char *)(lVar35 + 0x90) != '\0') {
          puVar15 = *(undefined8 **)(lVar35 + 0x88);
          if (puVar15 == (undefined8 *)0x0) goto LAB_0010ecc3;
          lVar19 = puVar15[-1];
          if (0 < lVar19) {
            uVar18 = *puVar15;
            goto LAB_0010e232;
          }
          goto LAB_0010ecc6;
        }
        goto LAB_0010ebcf;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar18 = 0;
    }
LAB_0010e232:
    uVar16 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar16,(Vector<RenderingDevice::Uniform> *)&local_128,uVar18,0);
    *(undefined8 *)(this + 0x2d0) = uVar16;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_120);
  }
  else {
    uVar16 = RenderingDevice::get_singleton();
    cVar12 = RenderingDevice::uniform_set_is_valid(uVar16,*(undefined8 *)(this + 0x2d0));
    if (cVar12 == '\0') goto LAB_0010dffe;
  }
  uVar16 = RenderingDevice::get_singleton();
  local_110 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  pvVar17 = (void *)RenderingDevice::draw_list_begin(uVar16,param_2,0,&local_118,0,&local_d8,0);
  uVar20 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(uVar20 + -0x10),false);
    }
  }
  uVar16 = RenderingDevice::get_singleton();
  local_118 = "Debug SDFGI";
  local_128 = 0;
  local_d8 = CONCAT44(_LC17,_LC17);
  uStack_d0 = CONCAT44(_LC17,_LC17);
  local_110 = 0xb;
  String::parse_latin1((StrRange *)&local_128);
  RenderingDevice::draw_command_begin_label(uVar16,(StrRange *)&local_128,&local_d8);
  lVar14 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar1 = (long *)(local_128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  uVar16 = RenderingDevice::get_singleton();
  lVar14 = *(long *)(this + 0x180);
  pcVar8 = (char *)(lVar14 + 0xe38 +
                   (ulong)((uint)((long)((ulong)(1 < param_3) << 0x3f) >> 0x3f) & 0x138));
  uVar18 = RenderingDevice::get_singleton();
  lVar19 = RenderingDevice::framebuffer_get_format(uVar18,param_2);
  if (*(long *)(pcVar8 + 0x40) == 0) {
    _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                     0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                     "Attempted to use an unused shader variant (shader is null),",0,0);
    lVar14 = 0;
  }
  else {
    while( true ) {
      local_118 = (char *)((ulong)local_118 & 0xffffffffffffff00);
      LOCK();
      cVar12 = *pcVar8;
      bVar36 = cVar12 == '\0';
      if (bVar36) {
        *pcVar8 = '\x01';
        cVar12 = '\0';
      }
      UNLOCK();
      if (bVar36) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_118._0_1_ = cVar12;
      do {
      } while (*pcVar8 != '\0');
    }
    lVar14 = lVar14 + (long)(int)(uint)(1 < param_3) * 0x138;
    if (*(uint *)(lVar14 + 0xf68) != 0) {
      plVar21 = *(long **)(lVar14 + 0xf60);
      plVar1 = plVar21 + (ulong)*(uint *)(lVar14 + 0xf68) * 5;
      do {
        if ((((*plVar21 == -1) && (lVar19 == plVar21[1])) &&
            (*(byte *)(lVar14 + 0xe86) == *(byte *)((long)plVar21 + 0x14))) &&
           (((int)plVar21[2] == 0 && ((int)plVar21[3] == 0)))) {
          lVar14 = plVar21[4];
          *pcVar8 = '\0';
          goto LAB_0010e44e;
        }
        plVar21 = plVar21 + 5;
      } while (plVar1 != plVar21);
    }
    lVar14 = PipelineCacheRD::_generate_version
                       ((long)pcVar8,-1,SUB81(lVar19,0),(uint)*(byte *)(lVar14 + 0xe86),0);
    *pcVar8 = '\0';
  }
LAB_0010e44e:
  RenderingDevice::draw_list_bind_render_pipeline(uVar16,pvVar17,lVar14);
  uVar16 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_bind_uniform_set(uVar16,pvVar17,*(undefined8 *)(this + 0x2d0),0);
  lVar14 = RenderingDevice::get_singleton();
  uVar23 = (uint)&local_c8;
  RenderingDevice::draw_list_set_push_constant(lVar14,pvVar17,uVar23);
  lVar14 = RenderingDevice::get_singleton();
  RenderingDevice::draw_list_draw(lVar14,SUB81(pvVar17,0),0,uVar22);
  lVar14 = *(long *)(this + 0x180);
  if (((*(float *)(lVar14 + 0x1670) != 0.0) || (*(float *)(lVar14 + 0x1674) != 0.0)) ||
     (*(float *)(lVar14 + 0x1678) != 0.0)) {
    fVar49 = _LC17 / *(float *)(this + 0x2fc);
    if (*(int *)(this + 600) == 0) goto LAB_0010ec40;
    lVar14 = *(long *)(this + 0x260);
    fVar13 = (float)(*(uint *)(this + 0x250) >> 1);
    fVar3 = *(float *)(lVar14 + 0x60);
    local_e0 = *(int *)(lVar14 + 0x6c) - (int)fVar13;
    local_e8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar14 + 100) >> 0x20) - (int)fVar13,
                        (int)*(undefined8 *)(lVar14 + 100) - (int)fVar13);
    uVar16 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_e8);
    fVar11 = _LC222;
    fVar54 = _LC221;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar13);
    fVar40 = _LC17 / *(float *)(this + 0x2fc);
    local_d8._0_4_ = (float)uVar16;
    fVar47 = (float)local_d8 * fVar3;
    local_d8._4_4_ = (float)((ulong)uVar16 >> 0x20);
    fVar42 = fVar3 * local_d8._4_4_;
    local_d8 = uVar16;
    if (*(int *)(this + 600) == 0) goto LAB_0010ec40;
    iVar27 = 0;
    lVar19 = *(long *)(this + 0x260);
    lVar14 = *(long *)(this + 0x180);
    fVar44 = (float)*(uint *)(this + 0x250);
    iVar30 = *(int *)(lVar19 + 0x6c);
    uVar22 = *(uint *)(this + 0x250) >> 4;
    fVar51 = *(float *)(lVar19 + 0x60);
    *(undefined1 *)(lVar14 + 0x167c) = 0;
    fVar4 = *(float *)(lVar14 + 0x1668);
    fVar5 = *(float *)(lVar14 + 0x1664);
    fVar6 = *(float *)(lVar14 + 0x166c);
    fVar50 = (float)uVar22 * fVar51;
    iVar7 = *(int *)(lVar19 + 0x68);
    fVar55 = (*(float *)(lVar14 + 0x1674) * fVar51 * fVar54 * fVar44 + fVar4) - fVar4;
    fVar37 = (fVar51 * *(float *)(lVar14 + 0x1670) * fVar54 * fVar44 + fVar5) - fVar5;
    fVar51 = (*(float *)(lVar14 + 0x1678) * fVar51 * fVar54 * fVar44 + fVar6) - fVar6;
    uVar20 = (long)*(int *)(lVar19 + 100) / (long)(int)uVar22 & 0xffffffff;
    fVar44 = SQRT(fVar37 * fVar37 + fVar55 * fVar55 + fVar51 * fVar51);
    fVar54 = _LC216;
    do {
      iVar34 = 0;
      fVar53 = ((float)iVar27 * fVar50 + fVar47) - fVar5;
      uVar33 = (long)iVar7 / (long)(int)uVar22 & 0xffffffff;
      do {
        iVar24 = 0;
        fVar52 = ((float)iVar34 * fVar40 * fVar50 + fVar42 * fVar49) - fVar4;
        do {
          if (fVar11 <= fVar44) {
            fVar41 = fVar55 / fVar44;
            fVar38 = ((float)iVar24 * fVar50 + fVar13 * fVar3) - fVar6;
            fVar46 = fVar37 / fVar44;
            fVar45 = fVar51 / fVar44;
            fVar43 = fVar52 * fVar41 + fVar53 * fVar46 + fVar38 * fVar45;
            fVar38 = fVar45 * fVar43 - fVar38;
            fVar48 = fVar46 * fVar43 - fVar53;
            fVar39 = fVar41 * fVar43 - fVar52;
            fVar38 = SQRT(fVar39 * fVar39 + fVar48 * fVar48 + fVar38 * fVar38);
            if (fVar38 < __LC223) {
              fVar38 = _LC224 - fVar38 * fVar38;
              if (_LC222 <= fVar38) {
                fVar43 = fVar43 - SQRT(fVar38);
              }
              if (((0.0 <= fVar43) && (fVar43 <= fVar44)) &&
                 (fVar38 = (fVar41 * fVar43 + fVar4) - fVar4,
                 fVar41 = (fVar46 * fVar43 + fVar5) - fVar5,
                 fVar39 = (fVar45 * fVar43 + fVar6) - fVar6,
                 fVar38 = SQRT(fVar38 * fVar38 + fVar41 * fVar41 + fVar39 * fVar39), fVar38 < fVar54
                 )) {
                *(undefined1 *)(lVar14 + 0x167c) = 1;
                *(int *)(lVar14 + 0x1680) = (int)uVar20;
                *(int *)(lVar14 + 0x1684) = (int)uVar33;
                *(int *)(lVar14 + 0x1688) = iVar24 + iVar30 / (int)uVar22;
                lVar14 = *(long *)(this + 0x180);
                fVar54 = fVar38;
              }
            }
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 != 0x11);
        iVar34 = iVar34 + 1;
        uVar33 = (ulong)((int)uVar33 + 1);
      } while (iVar34 != 0x11);
      iVar27 = iVar27 + 1;
      uVar20 = (ulong)((int)uVar20 + 1);
    } while (iVar27 != 0x11);
    *(undefined8 *)(lVar14 + 0x1670) = 0;
    *(undefined4 *)(lVar14 + 0x1678) = 0;
  }
  if (*(char *)(lVar14 + 0x167c) != '\0') {
    uVar22 = *(uint *)(this + 0x250) >> 4;
    if (*(int *)(this + 600) == 0) {
LAB_0010ec40:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    lVar19 = *(long *)(this + 0x260);
    uVar31 = *(int *)(lVar14 + 0x1680) - *(int *)(lVar19 + 100) / (int)uVar22;
    uVar32 = *(int *)(lVar14 + 0x1684) - *(int *)(lVar19 + 0x68) / (int)uVar22;
    uVar25 = *(int *)(lVar14 + 0x1688) - *(int *)(lVar19 + 0x6c) / (int)uVar22;
    if ((0x10 < uVar31 || 0x10 < uVar32) || (0x10 < uVar25)) goto LAB_0010e948;
    iStack_a0 = (uVar25 * 0x11 + uVar32) * 0x11 + uVar31;
    uVar16 = RenderingDevice::get_singleton();
    lVar14 = *(long *)(this + 0x180);
    pcVar8 = (char *)(lVar14 + 0x11e0 + (-(ulong)(param_3 < 2) & 0xfffffffffffffec8));
    uVar18 = RenderingDevice::get_singleton();
    lVar19 = RenderingDevice::framebuffer_get_format(uVar18,param_2);
    if (*(long *)(pcVar8 + 0x40) == 0) {
      _err_print_error("get_render_pipeline","./servers/rendering/renderer_rd/pipeline_cache_rd.h",
                       0x49,"Condition \"shader.is_null()\" is true. Returning: RID()",
                       "Attempted to use an unused shader variant (shader is null),",0,0);
      lVar14 = 0;
    }
    else {
      while( true ) {
        local_118 = (char *)((ulong)local_118 & 0xffffffffffffff00);
        LOCK();
        cVar12 = *pcVar8;
        bVar36 = cVar12 == '\0';
        if (bVar36) {
          *pcVar8 = '\x01';
          cVar12 = '\0';
        }
        UNLOCK();
        if (bVar36) break;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_118._0_1_ = cVar12;
        do {
        } while (*pcVar8 != '\0');
      }
      lVar14 = lVar14 + (long)(int)(3 - (uint)(param_3 < 2)) * 0x138;
      if (*(uint *)(lVar14 + 0xf68) != 0) {
        plVar21 = *(long **)(lVar14 + 0xf60);
        plVar1 = plVar21 + (ulong)*(uint *)(lVar14 + 0xf68) * 5;
        do {
          if (((*plVar21 == -1) && (lVar19 == plVar21[1])) &&
             ((*(byte *)(lVar14 + 0xe86) == *(byte *)((long)plVar21 + 0x14) &&
              (((int)plVar21[2] == 0 && ((int)plVar21[3] == 0)))))) {
            lVar14 = plVar21[4];
            *pcVar8 = '\0';
            goto LAB_0010eab8;
          }
          plVar21 = plVar21 + 5;
        } while (plVar21 != plVar1);
      }
      lVar14 = PipelineCacheRD::_generate_version
                         ((long)pcVar8,-1,SUB81(lVar19,0),(uint)*(byte *)(lVar14 + 0xe86),0);
      *pcVar8 = '\0';
    }
LAB_0010eab8:
    RenderingDevice::draw_list_bind_render_pipeline(uVar16,pvVar17,lVar14);
    uVar16 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar16,pvVar17,*(undefined8 *)(this + 0x2d0),0);
    lVar14 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_set_push_constant(lVar14,pvVar17,uVar23);
    lVar14 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_draw(lVar14,SUB81(pvVar17,0),0,uVar22 * uVar22 * uVar22 * 8);
  }
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  RenderingDevice::get_singleton();
  RenderingDevice::draw_list_end();
LAB_0010e948:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::GI::SDFGI::debug_draw(unsigned int, Projection const*, Transform3D const&, int, int,
   RID, RID, Vector<RID> const&) */

void __thiscall
RendererRD::GI::SDFGI::debug_draw
          (SDFGI *this,uint param_1,undefined8 param_3_00,undefined8 *param_3,uint param_4,
          uint param_5,undefined8 param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  float fVar17;
  Vector<RenderingDevice::Uniform> *local_1d8;
  undefined8 *local_1d0;
  Vector<RenderingDevice::Uniform> local_178 [8];
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  long local_158;
  Vector<RID> local_150 [8];
  long local_148 [2];
  undefined8 local_138;
  undefined1 local_130;
  long local_128;
  long local_118 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)RendererRD::TextureStorage::get_singleton();
  lVar5 = RendererRD::MaterialStorage::get_singleton();
  uVar6 = RendererRD::CopyEffects::get_singleton();
  if (param_1 != 0) {
    uVar16 = 0;
    do {
      if (*(long *)(this + uVar16 * 8 + 0x2b8) == 0) {
LAB_0010f1f0:
        lVar15 = 0;
        local_170 = 0;
        uVar14 = 0;
        local_160 = 0;
        local_168 = _LC185;
        lVar11 = 0;
        local_158 = 0;
        local_148[0] = 0;
        do {
          if (uVar14 < *(uint *)(this + 600)) {
            lVar12 = *(long *)(*(long *)(this + 0x260) + lVar15);
            if (lVar11 == 0) goto LAB_0010f27e;
LAB_0010f248:
            Vector<RID>::push_back(local_150,lVar12);
            lVar11 = local_148[0];
            lVar12 = local_158;
          }
          else {
            lVar12 = plVar4[0xe];
            if (lVar11 != 0) goto LAB_0010f248;
LAB_0010f27e:
            if (local_158 != 0) {
              Vector<RID>::push_back(local_150,local_158);
              Vector<RID>::push_back(local_150,lVar12);
              local_158 = 0;
              lVar11 = local_148[0];
              lVar12 = local_158;
            }
          }
          local_158 = lVar12;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0xc0;
        } while (uVar14 != 8);
        local_118[0] = 0;
        local_138 = local_168;
        local_130 = local_160;
        local_128 = local_158;
        if (lVar11 == 0) {
          Vector<RenderingDevice::Uniform>::push_back(local_178,&local_138);
        }
        else {
          CowData<RID>::_ref((CowData<RID> *)local_118,(CowData *)local_148);
          lVar15 = local_118[0];
          Vector<RenderingDevice::Uniform>::push_back();
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_118[0] + -0x10),false);
            }
            lVar11 = local_148[0];
            if (local_148[0] == 0) goto LAB_0010f3ab;
          }
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_148[0] + -0x10),false);
          }
        }
LAB_0010f3ab:
        local_1d0 = &local_138;
        local_1d8 = local_178;
        lVar15 = 0;
        lVar11 = 0;
        uVar14 = 0;
        local_160 = 0;
        local_168 = _LC186;
        local_158 = 0;
        local_148[0] = 0;
        do {
          if (uVar14 < *(uint *)(this + 600)) {
            lVar12 = *(long *)(*(long *)(this + 0x260) + 8 + lVar15);
            if (lVar11 == 0) goto LAB_0010f439;
LAB_0010f401:
            Vector<RID>::push_back(local_150,lVar12);
            lVar11 = local_148[0];
            lVar12 = local_158;
          }
          else {
            lVar12 = plVar4[0xe];
            if (lVar11 != 0) goto LAB_0010f401;
LAB_0010f439:
            if (local_158 != 0) {
              Vector<RID>::push_back(local_150,local_158);
              Vector<RID>::push_back(local_150,lVar12);
              local_158 = 0;
              lVar11 = local_148[0];
              lVar12 = local_158;
            }
          }
          local_158 = lVar12;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0xc0;
        } while (uVar14 != 8);
        local_118[0] = 0;
        local_138 = local_168;
        local_130 = local_160;
        local_128 = local_158;
        if (lVar11 == 0) {
          Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        }
        else {
          CowData<RID>::_ref((CowData<RID> *)local_118,(CowData *)local_148);
          lVar15 = local_118[0];
          Vector<RenderingDevice::Uniform>::push_back(local_1d8);
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_118[0] + -0x10),false);
            }
            lVar11 = local_148[0];
            if (local_148[0] == 0) goto LAB_0010f542;
          }
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_148[0] + -0x10),false);
          }
        }
LAB_0010f542:
        lVar15 = 0;
        lVar11 = 0;
        uVar14 = 0;
        local_160 = 0;
        local_168 = _LC187;
        local_158 = 0;
        local_148[0] = 0;
        do {
          if (uVar14 < *(uint *)(this + 600)) {
            lVar12 = *(long *)(*(long *)(this + 0x260) + 0x10 + lVar15);
            if (lVar11 == 0) goto LAB_0010f5d1;
LAB_0010f599:
            Vector<RID>::push_back(local_150,lVar12);
            lVar11 = local_148[0];
            lVar12 = local_158;
          }
          else {
            lVar12 = plVar4[0xe];
            if (lVar11 != 0) goto LAB_0010f599;
LAB_0010f5d1:
            if (local_158 != 0) {
              Vector<RID>::push_back(local_150,local_158);
              Vector<RID>::push_back(local_150,lVar12);
              local_158 = 0;
              lVar11 = local_148[0];
              lVar12 = local_158;
            }
          }
          local_158 = lVar12;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0xc0;
        } while (uVar14 != 8);
        local_118[0] = 0;
        local_138 = local_168;
        local_130 = local_160;
        local_128 = local_158;
        if (lVar11 == 0) {
          Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        }
        else {
          CowData<RID>::_ref((CowData<RID> *)local_118,(CowData *)local_148);
          lVar15 = local_118[0];
          Vector<RenderingDevice::Uniform>::push_back(local_1d8);
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_118[0] + -0x10),false);
            }
            lVar11 = local_148[0];
            if (local_148[0] == 0) goto LAB_0010f6e9;
          }
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_148[0] + -0x10),false);
          }
        }
LAB_0010f6e9:
        lVar15 = 0;
        lVar11 = 0;
        uVar14 = 0;
        local_160 = 0;
        local_158 = 0;
        local_148[0] = 0;
        local_168 = _LC188;
        do {
          if (uVar14 < *(uint *)(this + 600)) {
            lVar12 = *(long *)(*(long *)(this + 0x260) + 0x18 + lVar15);
            if (lVar11 == 0) goto LAB_0010f76f;
LAB_0010f739:
            Vector<RID>::push_back(local_150,lVar12);
            lVar11 = local_148[0];
            lVar12 = local_158;
          }
          else {
            lVar12 = plVar4[0xe];
            if (lVar11 != 0) goto LAB_0010f739;
LAB_0010f76f:
            if (local_158 != 0) {
              Vector<RID>::push_back(local_150,local_158);
              Vector<RID>::push_back(local_150,lVar12);
              local_158 = 0;
              lVar11 = local_148[0];
              lVar12 = local_158;
            }
          }
          local_158 = lVar12;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0xc0;
        } while (uVar14 != 8);
        local_118[0] = 0;
        local_138 = local_168;
        local_130 = local_160;
        local_128 = local_158;
        if (lVar11 == 0) {
          Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        }
        else {
          CowData<RID>::_ref((CowData<RID> *)local_118,(CowData *)local_148);
          lVar15 = local_118[0];
          Vector<RenderingDevice::Uniform>::push_back(local_1d8);
          if (lVar15 != 0) {
            LOCK();
            plVar1 = (long *)(lVar15 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_118[0] + -0x10),false);
            }
            lVar11 = local_148[0];
            if (local_148[0] == 0) goto LAB_0010f88b;
          }
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_148[0] + -0x10),false);
          }
        }
LAB_0010f88b:
        local_130 = 0;
        local_128 = *(long *)(this + 0x278);
        local_118[0] = 0;
        local_138 = _LC189;
        Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        local_130 = 0;
        local_118[0] = 0;
        local_128 = *(undefined8 *)(lVar5 + 0x50);
        local_138 = _LC225;
        Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        local_128 = *(long *)(this + 0x2d8);
        local_130 = 0;
        local_138 = _LC226;
        local_118[0] = 0;
        Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        lVar11 = *(long *)(param_9 + 8);
        if (lVar11 == 0) {
          lVar15 = 0;
LAB_0010fa9e:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar16,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar15 = *(long *)(lVar11 + -8);
        if (lVar15 <= (long)uVar16) goto LAB_0010fa9e;
        local_130 = 0;
        local_128 = *(undefined8 *)(lVar11 + uVar16 * 8);
        local_118[0] = 0;
        local_138 = _LC193;
        Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        local_128 = *(long *)(this + 0x268);
        local_130 = 0;
        local_138 = _LC194;
        local_118[0] = 0;
        Vector<RenderingDevice::Uniform>::push_back(local_1d8,local_1d0);
        uVar7 = RenderingDevice::get_singleton();
        uVar7 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                          (uVar7,local_1d8,*(undefined8 *)(*(long *)(this + 0x180) + 0xca0),0,0);
        *(undefined8 *)(this + ((uVar16 & 0xffffffff) + 0x56) * 8 + 8) = uVar7;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_170);
      }
      else {
        uVar7 = RenderingDevice::get_singleton();
        cVar3 = RenderingDevice::uniform_set_is_valid
                          (uVar7,*(undefined8 *)(this + (uVar16 & 0xffffffff) * 8 + 0x2b8));
        if (cVar3 == '\0') goto LAB_0010f1f0;
      }
      RenderingDevice::get_singleton();
      pvVar8 = (void *)RenderingDevice::compute_list_begin();
      uVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar7,pvVar8,*(undefined8 *)(*(long *)(this + 0x180) + 0xca8));
      uVar7 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set
                (uVar7,pvVar8,*(undefined8 *)(this + (uVar16 & 0xffffffff) * 8 + 0x2b8),0);
      fVar17 = (float)*(uint *)(this + 0x250);
      local_c0 = CONCAT44(*(undefined4 *)(this + 600),fVar17);
      local_c8 = CONCAT44(fVar17,fVar17);
      local_b0 = *(undefined4 *)(this + 0x2fc);
      local_b8 = param_4;
      local_b4 = param_5;
      local_ac = Projection::get_z_near();
      local_ac = local_ac ^ _LC79;
      puVar9 = &local_c8;
      puVar13 = param_3;
      do {
        puVar10 = (undefined8 *)((long)puVar9 + 0xc);
        puVar9[10] = CONCAT44((int)((ulong)puVar13[1] >> 0x20),(int)*puVar13);
        *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar13 + 3);
        puVar9 = puVar10;
        puVar13 = (undefined8 *)((long)puVar13 + 4);
      } while ((undefined8 *)&uStack_a4 != puVar10);
      uVar16 = uVar16 + 1;
      local_4c = *(undefined4 *)((long)param_3 + 0x2c);
      local_54 = *(undefined8 *)((long)param_3 + 0x24);
      Projection::inverse();
      local_a8 = (undefined4)local_108;
      uStack_a4 = local_f8;
      uStack_a0 = local_e8;
      uStack_9c = local_d8;
      local_88 = (undefined4)uStack_100;
      uStack_84 = uStack_f0;
      uStack_80 = uStack_e0;
      uStack_7c = uStack_d0;
      local_98 = local_108._4_4_;
      uStack_94 = uStack_f4;
      uStack_90 = uStack_e4;
      uStack_8c = uStack_d4;
      lVar11 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar11,pvVar8,(uint)&local_c8);
      lVar11 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar11,(uint)pvVar8,param_4,param_5);
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      Projection::~Projection((Projection *)&local_108);
    } while (param_1 != uVar16);
  }
  uStack_100 = (**(code **)(*plVar4 + 0x210))(plVar4,param_7);
  local_c8 = 0;
  local_c0 = 0;
  local_108 = 0;
  uVar7 = RendererRD::TextureStorage::render_target_get_rd_framebuffer(plVar4,param_7);
  RendererRD::CopyEffects::copy_to_fb_rect
            (uVar6,param_8,uVar7,&local_108,1,0,0,0,0,1 < param_1,0,0,0,&local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::SDFGI::update_probes(RID, RendererRD::SkyRD::Sky*) */

void __thiscall RendererRD::GI::SDFGI::update_probes(SDFGI *this,long param_2,long *param_3)

{
  long *plVar1;
  Version *pVVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  byte bVar12;
  char cVar13;
  int iVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  long local_148;
  undefined8 local_140;
  char *local_138;
  ulong local_130;
  long local_128;
  undefined8 local_118;
  undefined8 local_108;
  undefined4 local_100;
  float local_fc;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  float fStack_b0;
  undefined8 uStack_ac;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 local_6c;
  undefined1 local_68 [12];
  undefined4 local_5c;
  uint local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = RenderingDevice::get_singleton();
  local_148 = 0;
  local_138 = "SDFGI Update Probes";
  local_b8 = CONCAT44(_LC17,_LC17);
  fStack_b0 = (float)_LC17;
  uStack_ac = CONCAT44(uStack_ac._4_4_,_LC17);
  local_130 = 0x13;
  String::parse_latin1((StrRange *)&local_148);
  RenderingDevice::draw_command_begin_label(uVar15,(StrRange *)&local_148,&local_b8);
  lVar22 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  fStack_b0 = (float)*(uint *)(this + 0x250);
  local_b8 = CONCAT44(fStack_b0,fStack_b0);
  iVar14 = (int)((ulong)*(undefined8 *)(this + 0x2b0) >> 0x20);
  uStack_ac = CONCAT44(iVar14,(int)*(undefined8 *)(this + 600));
  local_a0 = CONCAT44(*(undefined4 *)(this + 0x2a0),
                      *(uint *)(this + 0x304) % *(uint *)(this + 0x2a0));
  local_98 = *(undefined4 *)
              (update_probes(RID,RendererRD::SkyRD::Sky*)::ray_count +
              (long)*(int *)(*(long *)(this + 0x180) + 0x1654) * 4);
  local_94 = *(undefined4 *)(this + 0x2f4);
  local_90 = CONCAT44(*(undefined4 *)(this + 0x2b4),iVar14 * iVar14);
  bVar12 = RendererSceneRender::environment_get_volumetric_fog_enabled
                     (RendererSceneRenderRD::singleton,param_2);
  auVar9._8_4_ = local_68._8_4_;
  auVar9._0_8_ = local_68._0_8_;
  local_5c = *(undefined4 *)(this + 0x2fc);
  local_58 = (uint)bVar12;
  uVar15 = *(undefined8 *)(*(long *)(this + 0x180) + 0x1648);
  local_7c = 0;
  if ((this[0x2e8] == (SDFGI)0x0) || (local_68 = auVar9, param_2 == 0)) goto LAB_0010fcc3;
  local_6c = RendererSceneRender::environment_get_bg_energy_multiplier
                       (RendererSceneRenderRD::singleton,param_2);
  iVar14 = RendererSceneRender::environment_get_background(RendererSceneRenderRD::singleton,param_2)
  ;
  if (iVar14 == 0) {
    local_7c = local_7c | 1;
    fVar27 = *(float *)(RenderingServerGlobals::texture_storage + 0x10);
    fVar26 = (float)*(undefined8 *)(RenderingServerGlobals::texture_storage + 8);
    fVar25 = (float)((ulong)*(undefined8 *)(RenderingServerGlobals::texture_storage + 8) >> 0x20);
    if (_LC80 <= fVar27) {
      fVar27 = powf((float)(((double)fVar27 + __LC82) * __LC83),_LC84);
    }
    else {
      fVar27 = _LC81 * fVar27;
    }
    if (_LC80 <= fVar25) {
      fVar25 = powf((float)(((double)fVar25 + __LC82) * __LC83),_LC84);
    }
    else {
      fVar25 = fVar25 * _LC81;
    }
    if (_LC80 <= fVar26) {
      fVar26 = powf((float)(((double)fVar26 + __LC82) * __LC83),_LC84);
    }
    else {
      fVar26 = fVar26 * _LC81;
    }
    local_68._4_4_ = fVar25;
    local_68._0_4_ = fVar26;
    local_68._8_4_ = fVar27;
    goto LAB_0010fcc3;
  }
  iVar14 = RendererSceneRender::environment_get_background(RendererSceneRenderRD::singleton,param_2)
  ;
  if (iVar14 == 1) {
    local_7c = local_7c | 1;
    local_68 = RendererSceneRender::environment_get_bg_color
                         (RendererSceneRenderRD::singleton,param_2);
    goto LAB_0010fcc3;
  }
  iVar14 = RendererSceneRender::environment_get_background(RendererSceneRenderRD::singleton,param_2)
  ;
  auVar11._8_4_ = local_68._8_4_;
  auVar11._0_8_ = local_68._0_8_;
  auVar10._8_4_ = local_68._8_4_;
  auVar10._0_8_ = local_68._0_8_;
  if (((param_3 == (long *)0x0) || (local_68 = auVar10, iVar14 != 2)) ||
     (lVar22 = *param_3, local_68 = auVar11, lVar22 == 0)) goto LAB_0010fcc3;
  if (*(long *)(this + 0x328) == 0) {
LAB_0010ffc8:
    local_140 = 0;
    local_138 = (char *)0x2;
    local_130 = local_130 & 0xffffffffffffff00;
    local_118 = 0;
    local_128 = lVar22;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_148,&local_138);
    lVar22 = RendererRD::MaterialStorage::get_singleton();
    local_128 = *(undefined8 *)(lVar22 + 0x90);
    local_130 = local_130 & 0xffffffffffffff00;
    local_138 = _LC110;
    local_118 = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_148,&local_138);
    uVar15 = RenderingDevice::get_singleton();
    lVar22 = *(long *)(this + 0x180);
    uVar20 = *(ulong *)(lVar22 + 0x1620);
    if (*(long *)(lVar22 + 0x14c0) == 0) {
      lVar19 = 0;
LAB_00110231:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar19,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0011026a:
      uVar17 = 0;
    }
    else {
      lVar19 = *(long *)(*(long *)(lVar22 + 0x14c0) + -8);
      if (lVar19 < 1) goto LAB_00110231;
      pcVar5 = *(char **)(lVar22 + 0x14d0);
      if (pcVar5 == (char *)0x0) {
LAB_00110401:
        lVar19 = 0;
LAB_00110404:
        uVar20 = 0;
LAB_00110421:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar19,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      lVar19 = *(long *)(pcVar5 + -8);
      if (lVar19 < 1) goto LAB_00110404;
      if (*pcVar5 != '\0') {
        if ((uVar20 == 0) || (*(uint *)(lVar22 + 0x157c) <= (uint)uVar20)) {
LAB_00110455:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar17 = 0;
          goto LAB_0011015c;
        }
        uVar7 = (uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar22 + 0x1578);
        lVar24 = uVar7 * 0xa0 +
                 *(long *)(*(long *)(lVar22 + 0x1568) +
                          ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar22 + 0x1578)) * 8);
        if (*(int *)(lVar24 + 0x98) != (int)(uVar20 >> 0x20)) {
          if (*(int *)(lVar24 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar7);
          }
          goto LAB_00110455;
        }
        pVVar2 = (Version *)(lVar22 + 0x14a8);
        iVar14 = (int)lVar24;
        if (*(char *)(lVar24 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar19 = *(long *)(lVar22 + 0x1520);
          if (lVar19 != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(lVar19 + -8) <= lVar18) break;
              if (*(char *)(lVar19 + lVar18) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar14);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar14);
              }
              lVar19 = *(long *)(lVar22 + 0x1520);
              lVar18 = lVar18 + 1;
            } while (lVar19 != 0);
          }
        }
        puVar6 = *(uint **)(lVar22 + 0x14e0);
        if (puVar6 == (uint *)0x0) goto LAB_00110401;
        lVar19 = *(long *)(puVar6 + -2);
        if (lVar19 < 1) goto LAB_00110404;
        uVar20 = (ulong)*puVar6;
        lVar22 = *(long *)(lVar24 + 0x68);
        if (lVar22 == 0) {
          lVar19 = 0;
          goto LAB_00110421;
        }
        lVar19 = *(long *)(lVar22 + -8);
        if (lVar19 <= (long)uVar20) goto LAB_00110421;
        if (*(long *)(lVar22 + uVar20 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar14);
        }
        if (*(char *)(lVar24 + 0x90) != '\0') {
          puVar3 = *(undefined8 **)(lVar24 + 0x88);
          if (puVar3 == (undefined8 *)0x0) goto LAB_00110401;
          lVar19 = puVar3[-1];
          if (0 < lVar19) {
            uVar17 = *puVar3;
            goto LAB_0011015c;
          }
          goto LAB_00110404;
        }
        goto LAB_0011026a;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar17 = 0;
    }
LAB_0011015c:
    uVar15 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar15,(StrRange *)&local_148,uVar17,1,0);
    *(undefined8 *)(this + 0x328) = uVar15;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_140);
  }
  else {
    uVar15 = RenderingDevice::get_singleton();
    cVar13 = RenderingDevice::uniform_set_is_valid(uVar15,*(undefined8 *)(this + 0x328));
    if (cVar13 == '\0') {
      lVar22 = *param_3;
      goto LAB_0010ffc8;
    }
  }
  local_7c = local_7c | 2;
  uVar15 = *(undefined8 *)(this + 0x328);
  RendererSceneRender::environment_get_sky_orientation
            (local_e8,RendererSceneRenderRD::singleton,param_2);
  Basis::get_quaternion();
  Quaternion::inverse();
  local_68._8_4_ = local_100;
  local_68._0_8_ = local_108;
  local_7c = local_7c | (uint)(0.0 <= local_fc) << 2;
LAB_0010fcc3:
  *(int *)(this + 0x304) = *(int *)(this + 0x304) + 1;
  lVar22 = 0;
  uVar23 = 0;
  RenderingDevice::get_singleton();
  pvVar16 = (void *)RenderingDevice::compute_list_begin();
  uVar17 = RenderingDevice::get_singleton();
  RenderingDevice::compute_list_bind_compute_pipeline
            (uVar17,pvVar16,*(undefined8 *)(*(long *)(this + 0x180) + 0x1628));
  uVar21 = *(uint *)(this + 0x250) >> 4;
  if (*(int *)(this + 600) != 0) {
    do {
      lVar19 = *(long *)(this + 0x260) + lVar22;
      local_88 = *(int *)(lVar19 + 100) / (int)uVar21;
      local_84 = *(int *)(lVar19 + 0x68) / (int)uVar21;
      local_80 = *(int *)(lVar19 + 0x6c) / (int)uVar21;
      local_a4 = uVar23;
      uVar17 = RenderingDevice::get_singleton();
      if (*(uint *)(this + 600) <= uVar23) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar23,
                   (ulong)*(uint *)(this + 600),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar23 = uVar23 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 0x260) + 0xa8 + lVar22);
      lVar22 = lVar22 + 0xc0;
      RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar16,*puVar3,0);
      uVar17 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar17,pvVar16,uVar15,1);
      lVar19 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_set_push_constant(lVar19,pvVar16,(uint)&local_b8);
      lVar19 = RenderingDevice::get_singleton();
      uVar4 = *(uint *)(this + 0x2b4);
      RenderingDevice::compute_list_dispatch_threads(lVar19,(uint)pvVar16,uVar4 * uVar4,uVar4);
    } while (uVar23 < *(uint *)(this + 600));
  }
  RenderingDevice::get_singleton();
  RenderingDevice::compute_list_end();
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::SDFGI::create(RID, Vector3 const&, unsigned int, RendererRD::GI*) */

void __thiscall
RendererRD::GI::SDFGI::create
          (SDFGI *this,undefined8 param_2,float *param_3,undefined4 param_4,undefined8 param_5)

{
  SDFGI *pSVar1;
  Version *pVVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  SDFGI SVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  undefined8 uVar21;
  TextureFormat *pTVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  SDFGI *pSVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  char *pcVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long in_FS_OFFSET;
  bool bVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [12];
  char *pcVar46;
  undefined8 uVar47;
  float local_3f0;
  long local_320;
  char *local_318;
  undefined8 local_310;
  long local_308;
  long lStack_300;
  undefined4 local_2f8;
  undefined4 local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  long local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  Vector<RenderingDeviceCommons::DataFormat> local_280 [8];
  long local_278;
  undefined2 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  Vector<RenderingDeviceCommons::DataFormat> local_240 [8];
  long local_238;
  undefined2 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  long local_1f8;
  undefined2 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  long local_1b8;
  undefined2 local_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  long local_178;
  undefined2 local_170;
  undefined8 local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  Vector<RenderingDeviceCommons::DataFormat> local_c0 [8];
  long local_b8;
  undefined2 local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88 [2];
  long local_78;
  undefined2 local_70;
  undefined1 local_64 [12];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = RendererRD::TextureStorage::get_singleton();
  lVar17 = RendererRD::MaterialStorage::get_singleton();
  *(undefined8 *)(this + 0x180) = param_5;
  uVar14 = RendererSceneRender::environment_get_sdfgi_cascades
                     (RendererSceneRenderRD::singleton,param_2);
  uVar20 = RendererSceneRenderRD::singleton;
  *(undefined4 *)(this + 0x2ac) = uVar14;
  uVar14 = RendererSceneRender::environment_get_sdfgi_min_cell_size(uVar20,param_2);
  uVar20 = RendererSceneRenderRD::singleton;
  *(undefined4 *)(this + 0x2b0) = uVar14;
  SVar13 = (SDFGI)RendererSceneRender::environment_get_sdfgi_use_occlusion(uVar20,param_2);
  uVar20 = RendererSceneRenderRD::singleton;
  this[0x2e0] = SVar13;
  iVar15 = RendererSceneRender::environment_get_sdfgi_y_scale(uVar20,param_2);
  uVar39 = *(uint *)(this + 0x2ac);
  uVar37 = *(uint *)(this + 600);
  *(int *)(this + 0x2f8) = iVar15;
  lVar32 = *(long *)(this + 0x180);
  uVar14 = *(undefined4 *)(lVar32 + 0x168c);
  *(undefined4 *)(this + 0x2fc) =
       *(undefined4 *)
        (create(RID,Vector3_const&,unsigned_int,RendererRD::GI*)::y_scale + (long)iVar15 * 4);
  *(undefined4 *)(this + 0x300) = uVar14;
  if (uVar39 < uVar37) {
LAB_00110692:
    *(uint *)(this + 600) = uVar39;
  }
  else if (uVar37 < uVar39) {
    uVar4 = uVar39 - 1;
    if (*(uint *)(this + 0x25c) < uVar39) {
      uVar37 = uVar4 >> 1 | uVar4;
      uVar37 = uVar37 | uVar37 >> 2;
      uVar37 = uVar37 | uVar37 >> 4;
      uVar37 = uVar37 >> 8 | uVar37;
      uVar37 = (uVar37 >> 0x10 | uVar37) + 1;
      *(uint *)(this + 0x25c) = uVar37;
      lVar32 = Memory::realloc_static(*(void **)(this + 0x260),(ulong)uVar37 * 0xc0,false);
      *(long *)(this + 0x260) = lVar32;
      if (lVar32 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar37 = *(uint *)(this + 600);
      lVar32 = *(long *)(this + 0x180);
      if (uVar39 <= uVar37) goto LAB_00110692;
    }
    uVar9 = _LC17;
    lVar40 = *(long *)(this + 0x260);
    pauVar18 = (undefined1 (*) [16])((ulong)uVar37 * 0xc0 + lVar40);
    do {
      *(undefined8 *)(pauVar18[6] + 4) = 0;
      pauVar19 = pauVar18 + 0xc;
      *pauVar18 = (undefined1  [16])0x0;
      pauVar18[1] = (undefined1  [16])0x0;
      pauVar18[2] = (undefined1  [16])0x0;
      pauVar18[3] = (undefined1  [16])0x0;
      pauVar18[4] = (undefined1  [16])0x0;
      pauVar18[5] = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar18[6] + 0xc) = 0;
      *(undefined8 *)pauVar18[7] = 0;
      *(undefined4 *)(pauVar18[7] + 8) = 0;
      pauVar18[8] = (undefined1  [16])0x0;
      pauVar18[9] = (undefined1  [16])0x0;
      pauVar18[10] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar18[0xb] = 0;
      *(uint *)(pauVar18[0xb] + 8) = uVar9;
      pauVar18[0xb][0xc] = 1;
      pauVar18 = pauVar19;
    } while ((undefined1 (*) [16])(lVar40 + 0xc0 + ((ulong)(uVar4 - uVar37) + (ulong)uVar37) * 0xc0)
             != pauVar19);
    goto LAB_00110692;
  }
  uStack_2e4 = *(uint *)(this + 0x250);
  fVar44 = *(float *)(lVar32 + 0x1660);
  local_3f0 = *(float *)(this + 0x2b0);
  *(undefined4 *)(this + 0x2b4) = 0x11;
  local_e8 = "SDFGI Render Albedo";
  *(float *)(this + 0x2a4) = fVar44;
  local_70 = 0;
  local_2e8 = 8;
  local_2b8 = 0;
  uStack_2d0 = 2;
  local_2c8 = 0x189;
  local_88[0] = CONCAT44(local_88[0]._4_4_,0x189);
  uStack_90 = 2;
  local_78 = 0;
  local_a8 = 0x49;
  *(int *)(this + 0x2a8) = (int)(long)((float)(uStack_2e4 * uStack_2e4 * uStack_2e4) * fVar44);
  local_2b0 = 0;
  local_2d8 = 0x100000001;
  local_98 = 0x100000001;
  local_128 = 0;
  uStack_e0 = 0x13;
  uStack_2e0 = uStack_2e4;
  uStack_2dc = uStack_2e4;
  uStack_a4 = uStack_2e4;
  uStack_a0 = uStack_2e4;
  uStack_9c = uStack_2e4;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x188) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_a8 = 0x61;
  local_e8 = "SDFGI Render Emission";
  local_128 = 0;
  uStack_e0 = 0x15;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 400) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_128 = 0;
  local_e8 = "SDFGI Render Emission Aniso";
  uStack_e0 = 0x1b;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x198) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  lVar32 = 0;
  local_a8 = 8;
  do {
    itos((long)&local_128);
    local_168 = 0;
    local_e8 = "SDFGI Render Occlusion ";
    uStack_e0 = 0x17;
    String::parse_latin1((StrRange *)&local_168);
    String::operator+((String *)&local_e8,(String *)&local_168);
    uVar20 = create_clear_texture((TextureFormat *)&local_a8,(String *)&local_e8);
    pcVar35 = local_e8;
    *(undefined8 *)(this + ((long)(int)lVar32 + 0x34) * 8) = uVar20;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)(local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar35 + -0x10,false);
      }
    }
    lVar40 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar26 = (long *)(local_168 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar40 + -0x10),false);
      }
    }
    lVar40 = local_128;
    if (local_128 != 0) {
      LOCK();
      plVar26 = (long *)(local_128 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar40 + -0x10),false);
      }
    }
    lVar32 = lVar32 + 1;
  } while (lVar32 != 8);
  local_a8 = 0x61;
  local_e8 = "SDFGI Render Geometry Facing";
  local_128 = 0;
  uStack_e0 = 0x1c;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x1e0) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_a8 = 0x28;
  local_e8 = "SDFGI Render SDF 0";
  local_128 = 0;
  uStack_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x1e8) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_128 = 0;
  local_e8 = "SDFGI Render SDF 1";
  uStack_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x1f0) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_128 = 0;
  local_e8 = "SDFGI Render SDF Half 0";
  uStack_a4 = uStack_a4 >> 1;
  uStack_a0 = uStack_a0 >> 1;
  uStack_e0 = 0x17;
  uStack_9c = uStack_9c >> 1;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x1f8) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_128 = 0;
  local_e8 = "SDFGI Render SDF Half 1";
  uStack_e0 = 0x17;
  String::parse_latin1((StrRange *)&local_128);
  uVar20 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_128);
  lVar32 = local_128;
  *(undefined8 *)(this + 0x200) = uVar20;
  if (local_128 != 0) {
    LOCK();
    plVar26 = (long *)(local_128 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  lVar32 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar26 = (long *)(local_78 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  uStack_2a0._0_4_ = uStack_2e0;
  uStack_2a0._4_4_ = uStack_2dc;
  local_278 = 0;
  local_288 = local_2c8;
  local_298 = local_2d8;
  uStack_290 = uStack_2d0;
  plVar26 = (long *)(local_2b8 + -0x10);
  if (local_2b8 != 0) {
    do {
      lVar32 = *plVar26;
      if (lVar32 == 0) goto LAB_00110cec;
      LOCK();
      lVar40 = *plVar26;
      bVar42 = lVar32 == lVar40;
      if (bVar42) {
        *plVar26 = lVar32 + 1;
        lVar40 = lVar32;
      }
      UNLOCK();
    } while (!bVar42);
    if (lVar40 != -1) {
      local_278 = local_2b8;
    }
  }
LAB_00110cec:
  local_2a8._0_4_ = 0x49;
  local_2a8._4_4_ = uStack_2e4;
  local_270 = local_2b0;
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_280,0x49);
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_280,1);
  local_238 = 0;
  uStack_260 = CONCAT44(uStack_2dc,uStack_2e0);
  local_2a8 = CONCAT44(local_2a8._4_4_ << 1,(undefined4)local_2a8);
  uStack_2a0 = CONCAT44(uStack_2a0._4_4_ * *(int *)(this + 600),(uint)uStack_2a0);
  local_248 = local_2c8;
  local_258 = local_2d8;
  uStack_250 = uStack_2d0;
  plVar26 = (long *)(local_2b8 + -0x10);
  if (local_2b8 != 0) {
    do {
      lVar32 = *plVar26;
      if (lVar32 == 0) goto LAB_00110dbb;
      LOCK();
      lVar40 = *plVar26;
      bVar42 = lVar32 == lVar40;
      if (bVar42) {
        *plVar26 = lVar32 + 1;
        lVar40 = lVar32;
      }
      UNLOCK();
    } while (!bVar42);
    if (lVar40 != -1) {
      local_238 = local_2b8;
    }
  }
LAB_00110dbb:
  local_268 = CONCAT44(uStack_2e4,0x61);
  local_230 = local_2b0;
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_240,0x61);
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_240,0x7a);
  uStack_220 = CONCAT44(uStack_2dc,uStack_2e0);
  local_1f8 = 0;
  local_208 = local_2c8;
  local_218 = local_2d8;
  uStack_210 = uStack_2d0;
  if (local_2b8 != 0) {
    plVar26 = (long *)(local_2b8 + -0x10);
    do {
      lVar32 = *plVar26;
      if (lVar32 == 0) goto LAB_00110e8b;
      LOCK();
      lVar40 = *plVar26;
      bVar42 = lVar32 == lVar40;
      if (bVar42) {
        *plVar26 = lVar32 + 1;
        lVar40 = lVar32;
      }
      UNLOCK();
    } while (!bVar42);
    if (lVar40 != -1) {
      local_1f8 = local_2b8;
    }
  }
LAB_00110e8b:
  uStack_1e0 = CONCAT44(uStack_2dc,uStack_2e0);
  local_228 = CONCAT44(uStack_2e4,0x24);
  local_1c8 = local_2c8;
  local_1f0 = local_2b0;
  local_1b8 = 0;
  local_1d8 = local_2d8;
  uStack_1d0 = uStack_2d0;
  if (local_2b8 != 0) {
    plVar26 = (long *)(local_2b8 + -0x10);
    do {
      lVar32 = *plVar26;
      if (lVar32 == 0) goto LAB_00110f03;
      LOCK();
      lVar40 = *plVar26;
      bVar42 = lVar32 == lVar40;
      if (bVar42) {
        *plVar26 = lVar32 + 1;
        lVar40 = lVar32;
      }
      UNLOCK();
    } while (!bVar42);
    if (lVar40 != -1) {
      local_1b8 = local_2b8;
    }
  }
LAB_00110f03:
  local_1b0 = local_2b0;
  local_1e8 = CONCAT44(uStack_2e4,0xf);
  if ((*(uint *)(this + 0x250) & 0x40000000) == 0) {
    uVar37 = 0x1e;
    do {
      uVar39 = uVar37;
      if (uVar39 == 0) {
        uVar37 = 0xffffffff;
        uVar39 = 0;
        goto LAB_00110f5a;
      }
      uVar37 = uVar39 - 1;
    } while ((1 << ((byte)(uVar39 - 1) & 0x1f) & *(uint *)(this + 0x250)) == 0);
    uVar37 = uVar39 - 1;
  }
  else {
    uVar37 = 0;
    uVar39 = 0x1f;
  }
LAB_00110f5a:
  iStack_1a0 = *(int *)(this + 0x2b4);
  uVar20 = 0;
  *(undefined4 *)(this + 0x2a0) = param_4;
  uStack_194 = 1;
  uStack_190 = 5;
  iStack_1a4 = iStack_1a0 * iStack_1a0;
  iStack_1a0 = iStack_1a0 << 4;
  local_f0 = 0;
  local_154 = 0x500000001;
  local_170 = 0;
  uStack_19c = 1;
  uStack_198 = 1;
  uStack_18c = 0;
  uStack_188 = 0x189;
  local_14c = 0x18900000000;
  local_11c = 0x100000001;
  local_114 = 0x100000001;
  local_10c = 0x18900000000;
  local_a8 = 0x121ae0;
  uStack_a4 = 0;
  local_178 = 0;
  local_1a8 = 0x60;
  local_15c = 1;
  local_138 = 0;
  local_130 = 0;
  local_168 = CONCAT44(iStack_1a4,0x5f);
  local_f8 = 0;
  local_128 = CONCAT44(iStack_1a4,0x6b);
  local_e8 = (char *)0x0;
  uStack_a0 = 0x1f;
  uStack_9c = 0;
  local_160 = iStack_1a0;
  local_158 = param_4;
  local_120 = iStack_1a0;
  String::parse_latin1((StrRange *)&local_e8);
  uVar21 = create_clear_texture((TextureFormat *)&local_168,(String *)&local_e8);
  lVar32 = (long)local_e8;
  *(undefined8 *)(this + 0x290) = uVar21;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar26 = (long *)((long)local_e8 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_e8 = (char *)0x0;
  local_a8 = 0x121b00;
  uStack_a4 = 0;
  uStack_a0 = 0x1f;
  uStack_9c = 0;
  String::parse_latin1((StrRange *)&local_e8);
  uVar21 = create_clear_texture((TextureFormat *)&local_128,(String *)&local_e8);
  lVar32 = (long)local_e8;
  *(undefined8 *)(this + 0x298) = uVar21;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar26 = (long *)((long)local_e8 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_b8 = 0;
  uStack_d0 = CONCAT44(uStack_18c,uStack_190);
  local_c8 = CONCAT44(local_c8._4_4_,uStack_188);
  plVar26 = (long *)(local_178 + -0x10);
  if (local_178 != 0) {
    do {
      lVar32 = *plVar26;
      if (lVar32 == 0) goto LAB_001111af;
      LOCK();
      lVar40 = *plVar26;
      bVar42 = lVar32 == lVar40;
      if (bVar42) {
        *plVar26 = lVar32 + 1;
        lVar40 = lVar32;
      }
      UNLOCK();
    } while (!bVar42);
    if (lVar40 != -1) {
      local_b8 = local_178;
    }
  }
LAB_001111af:
  local_b0 = local_170;
  local_d8 = CONCAT44(uStack_194,*(int *)(this + 600) * 2);
  iVar15 = *(int *)(this + 0x2b4);
  uStack_e0 = CONCAT44(uStack_19c,iVar15 << 3);
  local_e8 = (char *)CONCAT44(iVar15 * iVar15 * 8,0x61);
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_c0,0x61);
  Vector<RenderingDeviceCommons::DataFormat>::push_back(local_c0,0x7a);
  local_308 = 0;
  local_a8 = 0x12112f;
  uStack_a4 = 0;
  uStack_a0 = 0x15;
  uStack_9c = 0;
  String::parse_latin1((StrRange *)&local_308);
  uVar21 = create_clear_texture((TextureFormat *)&local_e8,(StrRange *)&local_308);
  lVar32 = local_308;
  *(undefined8 *)(this + 0x270) = uVar21;
  if (local_308 != 0) {
    LOCK();
    plVar26 = (long *)(local_308 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_308 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_2f8 = 6;
  local_308 = __LC243;
  lStack_300 = _UNK_001467a8;
  uVar21 = RenderingDevice::get_singleton();
  uVar21 = RenderingDevice::texture_create_shared
                     (uVar21,(StrRange *)&local_308,*(undefined8 *)(this + 0x270));
  local_78 = 0;
  *(undefined8 *)(this + 0x268) = uVar21;
  uStack_9c = uStack_19c;
  local_88[0] = CONCAT44(local_88[0]._4_4_,uStack_188);
  plVar26 = (long *)(local_178 + -0x10);
  if (local_178 != 0) {
    do {
      lVar32 = *plVar26;
      if (lVar32 == 0) goto LAB_0011133a;
      LOCK();
      lVar40 = *plVar26;
      bVar42 = lVar32 == lVar40;
      if (bVar42) {
        *plVar26 = lVar32 + 1;
        lVar40 = lVar32;
      }
      UNLOCK();
    } while (!bVar42);
    if (lVar40 != -1) {
      local_78 = local_178;
    }
  }
LAB_0011133a:
  local_a8 = 0x60;
  uStack_90 = CONCAT44(uStack_18c,5);
  local_70 = local_170;
  local_320 = 0;
  local_98 = CONCAT44(uStack_194,*(undefined4 *)(this + 600));
  uStack_a0 = *(uint *)(this + 0x2b4);
  local_310 = 0x15;
  uStack_a4 = uStack_a0 * uStack_a0;
  local_318 = "SDFGI Ambient Texture";
  String::parse_latin1((StrRange *)&local_320);
  uVar21 = create_clear_texture((TextureFormat *)&local_a8,(StrRange *)&local_320);
  lVar32 = local_320;
  *(undefined8 *)(this + 0x288) = uVar21;
  if (local_320 != 0) {
    LOCK();
    plVar26 = (long *)(local_320 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_320 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  lVar32 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar26 = (long *)(local_78 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  lVar32 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar26 = (long *)(local_b8 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  uVar21 = RenderingDevice::get_singleton();
  uStack_a0 = 0;
  uStack_9c = 0;
  uVar21 = RenderingDevice::uniform_buffer_create(uVar21,0x180,(TextureFormat *)&local_a8,0);
  *(undefined8 *)(this + 0x2d8) = uVar21;
  if (CONCAT44(uStack_9c,uStack_a0) != 0) {
    LOCK();
    plVar26 = (long *)(CONCAT44(uStack_9c,uStack_a0) + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      lVar32 = CONCAT44(uStack_9c,uStack_a0);
      uStack_a0 = 0;
      uStack_9c = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_e8 = (char *)0x0;
  local_a8 = 0x12115b;
  uStack_a4 = 0;
  uStack_a0 = 0x14;
  uStack_9c = 0;
  String::parse_latin1((StrRange *)&local_e8);
  uVar21 = create_clear_texture((TextureFormat *)&local_2a8,(String *)&local_e8);
  lVar32 = (long)local_e8;
  *(undefined8 *)(this + 0x280) = uVar21;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar26 = (long *)((long)local_e8 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
  }
  local_98 = CONCAT44(local_98._4_4_,6);
  local_a8 = (undefined4)__LC246;
  uStack_a4 = (uint)((ulong)__LC246 >> 0x20);
  uStack_a0 = (uint)_UNK_001467b8;
  uStack_9c = (uint)((ulong)_UNK_001467b8 >> 0x20);
  uVar21 = RenderingDevice::get_singleton();
  uVar21 = RenderingDevice::texture_create_shared
                     (uVar21,(TextureFormat *)&local_a8,*(undefined8 *)(this + 0x280));
  puVar5 = *(undefined8 **)(this + 0x260);
  *(undefined8 *)(this + 0x278) = uVar21;
  lVar29 = _LC257;
  lVar40 = _LC256;
  lVar32 = _LC255;
  uVar4 = *(uint *)(this + 600);
  local_a8 = (undefined4)_LC255;
  uVar14 = local_a8;
  uStack_a4 = (uint)((ulong)_LC255 >> 0x20);
  uVar9 = uStack_a4;
  uStack_a4 = (uint)((ulong)_LC256 >> 0x20);
  uVar11 = uStack_a4;
  local_a8 = (undefined4)_LC256;
  uVar10 = local_a8;
  if (puVar5 + (ulong)uVar4 * 0x18 != puVar5) {
    pSVar1 = this + 0x1e0;
    puVar33 = puVar5;
LAB_001115ea:
    local_e8 = (char *)0x0;
    local_a8 = 0x121170;
    uStack_a4 = 0;
    uStack_a0 = 0x19;
    uStack_9c = 0;
    String::parse_latin1((StrRange *)&local_e8);
    uVar21 = create_clear_texture((TextureFormat *)&local_2e8,(String *)&local_e8);
    lVar23 = (long)local_e8;
    *puVar33 = uVar21;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)((long)local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    local_e8 = (char *)0x0;
    local_a8 = 0x12118a;
    uStack_a4 = 0;
    uStack_a0 = 0x18;
    uStack_9c = 0;
    String::parse_latin1((StrRange *)&local_e8);
    uVar21 = create_clear_texture((TextureFormat *)&local_268,(String *)&local_e8);
    lVar23 = (long)local_e8;
    puVar33[4] = uVar21;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)((long)local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    local_e8 = (char *)0x0;
    local_a8 = 0x121b20;
    uStack_a4 = 0;
    uStack_a0 = 0x23;
    uStack_9c = 0;
    String::parse_latin1((StrRange *)&local_e8);
    uVar21 = create_clear_texture((TextureFormat *)&local_228,(String *)&local_e8);
    lVar23 = (long)local_e8;
    puVar33[2] = uVar21;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)((long)local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    local_e8 = (char *)0x0;
    local_a8 = 0x121b48;
    uStack_a4 = 0;
    uStack_a0 = 0x23;
    uStack_9c = 0;
    String::parse_latin1((StrRange *)&local_e8);
    uVar21 = create_clear_texture((TextureFormat *)&local_1e8,(String *)&local_e8);
    lVar23 = (long)local_e8;
    puVar33[3] = uVar21;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)((long)local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    local_98._0_4_ = 6;
    local_a8 = (undefined4)__LC243;
    uStack_a4 = (uint)((ulong)__LC243 >> 0x20);
    uStack_a0 = (uint)_UNK_001467a8;
    uStack_9c = (uint)((ulong)_UNK_001467a8 >> 0x20);
    uVar21 = RenderingDevice::get_singleton();
    uVar21 = RenderingDevice::texture_create_shared(uVar21,(TextureFormat *)&local_a8,puVar33[4]);
    auVar12 = local_58._0_16_;
    uVar38 = *(uint *)(this + 0x250);
    puVar33[1] = uVar21;
    uVar38 = uVar38 >> 4;
    *(float *)(puVar33 + 0xc) = local_3f0;
    fVar44 = (float)uVar38 * local_3f0;
    local_58._8_4_ = param_3[2] / fVar44 + (float)_LC144;
    if ((float)(_LC279 & local_58._8_4_) < _LC251) {
      local_58._8_4_ =
           (uint)((float)(int)(float)local_58._8_4_ -
                 (float)(-(uint)((float)local_58._8_4_ < (float)(int)(float)local_58._8_4_) & _LC17)
                 ) | ~_LC279 & local_58._8_4_;
    }
    fVar43 = (*(float *)(this + 0x2fc) * param_3[1]) / fVar44 + (float)_LC144;
    if ((float)(_LC279 & (uint)fVar43) < _LC251) {
      fVar43 = (float)((uint)((float)(int)fVar43 -
                             (float)(-(uint)(fVar43 < (float)(int)fVar43) & _LC17)) |
                      ~_LC279 & (uint)fVar43);
    }
    fVar44 = *param_3 / fVar44 + (float)_LC144;
    if ((float)(_LC279 & (uint)fVar44) < _LC251) {
      fVar44 = (float)((uint)((float)(int)fVar44 -
                             (float)(-(uint)(fVar44 < (float)(int)fVar44) & _LC17)) |
                      ~_LC279 & (uint)fVar44);
    }
    local_58._4_4_ = fVar43;
    local_58._0_4_ = fVar44;
    uVar21 = local_58._0_8_;
    local_58._12_4_ = auVar12._12_4_;
    local_58._0_8_ = auVar12._0_8_;
    local_58._0_16_ = CONCAT88(local_58._8_8_,uVar21);
    auVar45 = Vector3::operator_cast_to_Vector3i((Vector3 *)local_58);
    uVar21 = _DIRTY_ALL;
    local_3f0 = local_3f0 + local_3f0;
    *(uint *)((long)puVar33 + 0x6c) = auVar45._8_4_ * uVar38;
    *(uint *)(puVar33 + 0xd) = auVar45._4_4_ * uVar38;
    puVar33[0xe] = uVar21;
    uVar8 = DAT_001200f0;
    *(uint *)((long)puVar33 + 100) = uVar38 * auVar45._0_4_;
    *(undefined4 *)(puVar33 + 0xf) = uVar8;
    local_64 = auVar45;
    pTVar22 = (TextureFormat *)RenderingDevice::get_singleton();
    uStack_e0 = 0;
    local_98 = CONCAT44(local_98._4_4_,6);
    local_a8 = (undefined4)__LC168;
    uStack_a4 = (uint)((ulong)__LC168 >> 0x20);
    uStack_a0 = (uint)_UNK_00146798;
    uStack_9c = (uint)((ulong)_UNK_00146798 >> 0x20);
    uVar21 = RenderingDevice::texture_create(pTVar22,(TextureView *)&local_168,(Vector *)&local_a8);
    puVar33[10] = uVar21;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_e0);
    uVar21 = RenderingDevice::get_singleton();
    local_e8 = (char *)0x0;
    uStack_a0 = 0x28;
    uStack_9c = 0;
    local_a8 = 0x121b70;
    uStack_a4 = 0;
    String::parse_latin1((StrRange *)&local_e8);
    RenderingDevice::set_resource_name(uVar21,puVar33[10],(String *)&local_e8);
    lVar23 = (long)local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)((long)local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    uVar21 = RenderingDevice::get_singleton();
    local_58._0_16_ = (undefined1  [16])0x0;
    RenderingDevice::texture_clear(uVar21,puVar33[10],(Vector3 *)local_58,0,1,0,local_158);
    pTVar22 = (TextureFormat *)RenderingDevice::get_singleton();
    uStack_e0 = 0;
    local_98 = CONCAT44(local_98._4_4_,6);
    local_a8 = (undefined4)__LC168;
    uStack_a4 = (uint)((ulong)__LC168 >> 0x20);
    uStack_a0 = (uint)_UNK_00146798;
    uStack_9c = (uint)((ulong)_UNK_00146798 >> 0x20);
    uVar21 = RenderingDevice::texture_create(pTVar22,(TextureView *)&local_128,(Vector *)&local_a8);
    puVar33[0xb] = uVar21;
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_e0);
    uVar21 = RenderingDevice::get_singleton();
    local_e8 = (char *)0x0;
    uStack_a0 = 0x28;
    uStack_9c = 0;
    local_a8 = 0x121ba0;
    uStack_a4 = 0;
    String::parse_latin1((StrRange *)&local_e8);
    RenderingDevice::set_resource_name(uVar21,puVar33[0xb],(String *)&local_e8);
    lVar23 = (long)local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar26 = (long *)((long)local_e8 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    uVar21 = RenderingDevice::get_singleton();
    local_58._0_16_ = (undefined1  [16])0x0;
    RenderingDevice::texture_clear(uVar21,puVar33[0xb],(Vector3 *)local_58,0,1,0,1);
    uVar21 = RenderingDevice::get_singleton();
    uStack_a0 = 0;
    uStack_9c = 0;
    uVar21 = RenderingDevice::storage_buffer_create
                       (uVar21,*(int *)(this + 0x2a8) << 4,(TextureFormat *)&local_a8,0,0);
    puVar33[9] = uVar21;
    if (CONCAT44(uStack_9c,uStack_a0) != 0) {
      LOCK();
      plVar26 = (long *)(CONCAT44(uStack_9c,uStack_a0) + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        lVar23 = CONCAT44(uStack_9c,uStack_a0);
        uStack_a0 = 0;
        uStack_9c = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    uVar21 = RenderingDevice::get_singleton();
    uStack_a0 = 0;
    uStack_9c = 0;
    uVar21 = RenderingDevice::storage_buffer_create(uVar21,0x10,(TextureFormat *)&local_a8,0);
    puVar33[7] = uVar21;
    if (CONCAT44(uStack_9c,uStack_a0) != 0) {
      LOCK();
      plVar26 = (long *)(CONCAT44(uStack_9c,uStack_a0) + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        lVar23 = CONCAT44(uStack_9c,uStack_a0);
        uStack_a0 = 0;
        uStack_9c = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    uVar21 = RenderingDevice::get_singleton();
    uStack_a0 = 0;
    uStack_9c = 0;
    uVar21 = RenderingDevice::storage_buffer_create(uVar21,0x10,(TextureFormat *)&local_a8,1);
    puVar33[8] = uVar21;
    if (CONCAT44(uStack_9c,uStack_a0) != 0) {
      LOCK();
      plVar26 = (long *)(CONCAT44(uStack_9c,uStack_a0) + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        lVar23 = CONCAT44(uStack_9c,uStack_a0);
        uStack_a0 = 0;
        uStack_9c = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    uVar21 = RenderingDevice::get_singleton();
    uStack_a0 = 0;
    uStack_9c = 0;
    uVar21 = RenderingDevice::storage_buffer_create(uVar21,0x10000,(TextureFormat *)&local_a8,0);
    puVar33[0x16] = uVar21;
    if (CONCAT44(uStack_9c,uStack_a0) != 0) {
      LOCK();
      plVar26 = (long *)(CONCAT44(uStack_9c,uStack_a0) + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        lVar23 = CONCAT44(uStack_9c,uStack_a0);
        uStack_a0 = 0;
        uStack_9c = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    lStack_300 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_98 = *(long *)(this + (ulong)(uVar37 & 1) * 8 + 0x1e8);
    local_88[0] = 0;
    local_a8 = uVar14;
    uStack_a4 = uVar9;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 0x188);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_88[0] = 0;
    local_a8 = uVar10;
    uStack_a4 = uVar11;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_e8 = (char *)lVar29;
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
    local_d8 = 0;
    local_c8 = 0;
    pSVar30 = this + 0x1a0;
    do {
      while (lVar23 = *(long *)pSVar30, local_c8 == 0) {
        while (local_d8 == 0) {
          pSVar30 = pSVar30 + 8;
          local_d8 = lVar23;
          if (pSVar30 == pSVar1) goto LAB_00111ed0;
          lVar23 = *(long *)pSVar30;
        }
        pSVar30 = pSVar30 + 8;
        Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
        Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar23);
        local_d8 = 0;
        if (pSVar30 == pSVar1) goto LAB_00111ed0;
      }
      pSVar30 = pSVar30 + 8;
      Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar23);
    } while (pSVar30 != pSVar1);
LAB_00111ed0:
    lVar23 = local_c8;
    local_88[0] = 0;
    local_a8 = SUB84(local_e8,0);
    uStack_a4 = (uint)((ulong)local_e8 >> 0x20);
    uStack_a0 = CONCAT31(uStack_a0._1_3_,uStack_e0._0_1_);
    local_98 = local_d8;
    if (local_c8 == 0) {
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)&local_c8);
      lVar27 = local_88[0];
      Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)&local_308);
      if (lVar27 != 0) {
        LOCK();
        plVar26 = (long *)(lVar27 + -0x10);
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 == 0) {
          Memory::free_static((void *)(local_88[0] + -0x10),false);
        }
        lVar23 = local_c8;
        if (local_c8 == 0) goto LAB_00111fa9;
      }
      LOCK();
      plVar26 = (long *)(lVar23 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        Memory::free_static((void *)(local_c8 + -0x10),false);
      }
    }
LAB_00111fa9:
    local_98 = *(long *)(this + 400);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_88[0] = 0;
    local_a8 = (undefined4)_LC258;
    uStack_a4 = (uint)((ulong)_LC258 >> 0x20);
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 0x198);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC259;
    uStack_a4 = (uint)((ulong)_LC259 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 0x1e0);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC260;
    uStack_a4 = (uint)((ulong)_LC260 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = *puVar33;
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC261;
    uStack_a4 = (uint)((ulong)_LC261 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 0x280);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC262;
    uStack_a4 = (uint)((ulong)_LC262 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = puVar33[7];
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC263;
    uStack_a4 = (uint)((ulong)_LC263 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    local_98 = puVar33[9];
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC264;
    uStack_a4 = (uint)((ulong)_LC264 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    uVar21 = RenderingDevice::get_singleton();
    lVar23 = *(long *)(this + 0x180);
    uVar36 = *(ulong *)(lVar23 + 0xad0);
    if (*(long *)(lVar23 + 0x970) == 0) {
      lVar27 = 0;
LAB_001130b0:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,8,lVar27,
                 "p_variant","variant_defines.size()","",false,false);
      uVar47 = 0;
    }
    else {
      lVar27 = *(long *)(*(long *)(lVar23 + 0x970) + -8);
      if (lVar27 < 9) goto LAB_001130b0;
      lVar27 = *(long *)(lVar23 + 0x980);
      if (lVar27 == 0) goto LAB_00112d70;
      lVar41 = *(long *)(lVar27 + -8);
      if (lVar41 < 9) goto LAB_00112d73;
      if (*(char *)(lVar27 + 8) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar47 = 0;
        goto LAB_00112289;
      }
      if ((uVar36 == 0) || (*(uint *)(lVar23 + 0xa2c) <= (uint)uVar36)) {
LAB_00113178:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar47 = 0;
      }
      else {
        lVar27 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar23 + 0xa28)) * 0xa0 +
                 *(long *)(*(long *)(lVar23 + 0xa18) +
                          ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar23 + 0xa28)) * 8);
        if (*(int *)(lVar27 + 0x98) != (int)(uVar36 >> 0x20)) {
          if (*(int *)(lVar27 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00113178;
        }
        pVVar2 = (Version *)(lVar23 + 0x958);
        iVar15 = (int)lVar27;
        if (*(char *)(lVar27 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar41 = *(long *)(lVar23 + 0x9d0);
          if (lVar41 != 0) {
            lVar28 = 0;
            do {
              while( true ) {
                if (*(long *)(lVar41 + -8) <= lVar28) goto LAB_00112214;
                if (*(char *)(lVar41 + lVar28) != '\0') break;
                ShaderRD::_allocate_placeholders(pVVar2,iVar15);
                lVar41 = *(long *)(lVar23 + 0x9d0);
                lVar28 = lVar28 + 1;
                if (lVar41 == 0) goto LAB_00112214;
              }
              ShaderRD::_compile_version_start(pVVar2,iVar15);
              lVar41 = *(long *)(lVar23 + 0x9d0);
              lVar28 = lVar28 + 1;
            } while (lVar41 != 0);
          }
        }
LAB_00112214:
        lVar23 = *(long *)(lVar23 + 0x990);
        if (lVar23 == 0) {
LAB_00112d70:
          lVar41 = 0;
LAB_00112d73:
          uVar36 = 8;
          goto LAB_00112d93;
        }
        lVar41 = *(long *)(lVar23 + -8);
        if (lVar41 < 9) goto LAB_00112d73;
        lVar28 = *(long *)(lVar27 + 0x68);
        uVar36 = (ulong)*(uint *)(lVar23 + 0x20);
        if (lVar28 == 0) goto LAB_00112f10;
        lVar41 = *(long *)(lVar28 + -8);
        if (lVar41 <= (long)uVar36) goto LAB_00112d93;
        if (*(long *)(lVar28 + uVar36 * 8) == 0) {
          cVar3 = *(char *)(lVar27 + 0x90);
        }
        else {
          ShaderRD::_compile_version_end(pVVar2,iVar15);
          cVar3 = *(char *)(lVar27 + 0x90);
        }
        if (cVar3 == '\0') {
          uVar47 = 0;
        }
        else {
          lVar23 = *(long *)(lVar27 + 0x88);
          if (lVar23 == 0) goto LAB_00112d70;
          lVar41 = *(long *)(lVar23 + -8);
          if (lVar41 < 9) goto LAB_00112d73;
          uVar47 = *(undefined8 *)(lVar23 + 0x40);
        }
      }
    }
LAB_00112289:
    uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar21,(StrRange *)&local_308,uVar47,0);
    puVar33[0x10] = uVar21;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
    local_98 = *(long *)(this + 0x188);
    uStack_e0 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_88[0] = 0;
    local_a8 = uVar14;
    uStack_a4 = uVar9;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 0x1e0);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_88[0] = 0;
    local_a8 = uVar10;
    uStack_a4 = uVar11;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 400);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)lVar29;
    uStack_a4 = (uint)((ulong)lVar29 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
    local_98 = *(long *)(this + 0x198);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC258;
    uStack_a4 = (uint)((ulong)_LC258 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
    local_98 = puVar33[7];
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC265;
    uStack_a4 = (uint)((ulong)_LC265 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
    local_98 = puVar33[9];
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8 = (undefined4)_LC266;
    uStack_a4 = (uint)((ulong)_LC266 >> 0x20);
    local_88[0] = 0;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
    uVar21 = RenderingDevice::get_singleton();
    lVar23 = *(long *)(this + 0x180);
    uVar36 = *(ulong *)(lVar23 + 0xad0);
    if (*(long *)(lVar23 + 0x970) == 0) {
      lVar27 = 0;
LAB_00113122:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar27,
                 "p_variant","variant_defines.size()","",false,false);
      uVar47 = 0;
    }
    else {
      lVar27 = *(long *)(*(long *)(lVar23 + 0x970) + -8);
      if (lVar27 < 1) goto LAB_00113122;
      pcVar35 = *(char **)(lVar23 + 0x980);
      if (pcVar35 == (char *)0x0) goto LAB_00112ee8;
      lVar41 = *(long *)(pcVar35 + -8);
      if (lVar41 < 1) goto LAB_00112eeb;
      if (*pcVar35 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar47 = 0;
      }
      else {
        if ((uVar36 != 0) && ((uint)uVar36 < *(uint *)(lVar23 + 0xa2c))) {
          lVar27 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar23 + 0xa28)) * 0xa0 +
                   *(long *)(*(long *)(lVar23 + 0xa18) +
                            ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar23 + 0xa28)) * 8);
          if (*(int *)(lVar27 + 0x98) == (int)(uVar36 >> 0x20)) {
            pVVar2 = (Version *)(lVar23 + 0x958);
            iVar15 = (int)lVar27;
            if (*(char *)(lVar27 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar41 = *(long *)(lVar23 + 0x9d0);
              if (lVar41 != 0) {
                lVar28 = 0;
                do {
                  while( true ) {
                    if (*(long *)(lVar41 + -8) <= lVar28) goto LAB_001124df;
                    if (*(char *)(lVar41 + lVar28) != '\0') break;
                    ShaderRD::_allocate_placeholders(pVVar2,iVar15);
                    lVar41 = *(long *)(lVar23 + 0x9d0);
                    lVar28 = lVar28 + 1;
                    if (lVar41 == 0) goto LAB_001124df;
                  }
                  ShaderRD::_compile_version_start(pVVar2,iVar15);
                  lVar41 = *(long *)(lVar23 + 0x9d0);
                  lVar28 = lVar28 + 1;
                } while (lVar41 != 0);
              }
            }
LAB_001124df:
            puVar6 = *(uint **)(lVar23 + 0x990);
            if (puVar6 == (uint *)0x0) goto LAB_00112ee8;
            lVar41 = *(long *)(puVar6 + -2);
            if (lVar41 < 1) goto LAB_00112eeb;
            lVar23 = *(long *)(lVar27 + 0x68);
            uVar36 = (ulong)*puVar6;
            if (lVar23 == 0) goto LAB_00112f10;
            lVar41 = *(long *)(lVar23 + -8);
            if (lVar41 <= (long)uVar36) goto LAB_00112d93;
            if (*(long *)(lVar23 + uVar36 * 8) == 0) {
              cVar3 = *(char *)(lVar27 + 0x90);
            }
            else {
              ShaderRD::_compile_version_end(pVVar2,iVar15);
              cVar3 = *(char *)(lVar27 + 0x90);
            }
            if (cVar3 == '\0') {
              uVar47 = 0;
              goto LAB_00112550;
            }
            puVar34 = *(undefined8 **)(lVar27 + 0x88);
            if (puVar34 == (undefined8 *)0x0) goto LAB_00112ee8;
            lVar41 = puVar34[-1];
            if (lVar41 < 1) goto LAB_00112eeb;
            uVar47 = *puVar34;
            goto LAB_00112550;
          }
          if (*(int *)(lVar27 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar47 = 0;
      }
    }
LAB_00112550:
    uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar21,(String *)&local_e8,uVar47,0);
    puVar33[0x13] = uVar21;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
    local_e8 = (char *)lVar32;
    lStack_300 = 0;
    local_d8 = 0;
    local_c8 = 0;
    pSVar30 = this + 0x1a0;
    do {
      while (lVar23 = *(long *)pSVar30, local_c8 == 0) {
        while (local_d8 == 0) {
          pSVar30 = pSVar30 + 8;
          local_d8 = lVar23;
          if (pSVar30 == pSVar1) goto LAB_00112650;
          lVar23 = *(long *)pSVar30;
        }
        pSVar30 = pSVar30 + 8;
        Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
        Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar23);
        local_d8 = 0;
        if (pSVar30 == pSVar1) goto LAB_00112650;
      }
      pSVar30 = pSVar30 + 8;
      Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar23);
    } while (pSVar30 != pSVar1);
LAB_00112650:
    lVar23 = local_c8;
    local_88[0] = 0;
    local_a8 = SUB84(local_e8,0);
    uStack_a4 = (uint)((ulong)local_e8 >> 0x20);
    uStack_a0 = CONCAT31(uStack_a0._1_3_,uStack_e0._0_1_);
    local_98 = local_d8;
    if (local_c8 == 0) {
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    }
    else {
      CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)&local_c8);
      lVar27 = local_88[0];
      Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)&local_308);
      if (lVar27 != 0) {
        LOCK();
        plVar26 = (long *)(lVar27 + -0x10);
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 == 0) {
          Memory::free_static((void *)(local_88[0] + -0x10),false);
        }
        lVar23 = local_c8;
        if (local_c8 == 0) goto LAB_0011271a;
      }
      LOCK();
      plVar26 = (long *)(lVar23 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        Memory::free_static((void *)(local_c8 + -0x10),false);
      }
    }
LAB_0011271a:
    local_98 = *(long *)(this + 0x280);
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_88[0] = 0;
    local_a8 = uVar10;
    uStack_a4 = uVar11;
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
    uVar21 = RenderingDevice::get_singleton();
    lVar23 = *(long *)(this + 0x180);
    uVar36 = *(ulong *)(lVar23 + 0xad0);
    if (*(long *)(lVar23 + 0x970) == 0) {
      lVar27 = 0;
LAB_00112fff:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar27,
                 "p_variant","variant_defines.size()","",false,false);
LAB_0011303b:
      uVar47 = 0;
    }
    else {
      lVar27 = *(long *)(*(long *)(lVar23 + 0x970) + -8);
      if (lVar27 < 2) goto LAB_00112fff;
      lVar27 = *(long *)(lVar23 + 0x980);
      if (lVar27 == 0) goto LAB_00113070;
      lVar41 = *(long *)(lVar27 + -8);
      if (lVar41 < 2) goto LAB_00113073;
      if (*(char *)(lVar27 + 1) != '\0') {
        if ((uVar36 == 0) || (*(uint *)(lVar23 + 0xa2c) <= (uint)uVar36)) {
LAB_00113258:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar47 = 0;
          goto LAB_00112889;
        }
        lVar27 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar23 + 0xa28)) * 0xa0 +
                 *(long *)(*(long *)(lVar23 + 0xa18) +
                          ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar23 + 0xa28)) * 8);
        if (*(int *)(lVar27 + 0x98) != (int)(uVar36 >> 0x20)) {
          if (*(int *)(lVar27 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00113258;
        }
        pVVar2 = (Version *)(lVar23 + 0x958);
        iVar15 = (int)lVar27;
        if (*(char *)(lVar27 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar41 = *(long *)(lVar23 + 0x9d0);
          if (lVar41 != 0) {
            lVar28 = 0;
            do {
              if (*(long *)(lVar41 + -8) <= lVar28) break;
              if (*(char *)(lVar41 + lVar28) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar15);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar15);
              }
              lVar41 = *(long *)(lVar23 + 0x9d0);
              lVar28 = lVar28 + 1;
            } while (lVar41 != 0);
          }
        }
        lVar23 = *(long *)(lVar23 + 0x990);
        if (lVar23 != 0) {
          lVar41 = *(long *)(lVar23 + -8);
          if (1 < lVar41) {
            lVar28 = *(long *)(lVar27 + 0x68);
            uVar36 = (ulong)*(uint *)(lVar23 + 4);
            if (lVar28 != 0) {
              lVar41 = *(long *)(lVar28 + -8);
              if ((long)uVar36 < lVar41) {
                if (*(long *)(lVar28 + uVar36 * 8) != 0) {
                  ShaderRD::_compile_version_end(pVVar2,iVar15);
                }
                if (*(char *)(lVar27 + 0x90) == '\0') goto LAB_0011303b;
                lVar23 = *(long *)(lVar27 + 0x88);
                if (lVar23 != 0) {
                  lVar41 = *(long *)(lVar23 + -8);
                  if (1 < lVar41) {
                    uVar47 = *(undefined8 *)(lVar23 + 8);
                    goto LAB_00112889;
                  }
                  goto LAB_00113073;
                }
                goto LAB_00113070;
              }
              goto LAB_00112d93;
            }
            goto LAB_00112f10;
          }
          goto LAB_00113073;
        }
        goto LAB_00113070;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar47 = 0;
    }
LAB_00112889:
    puVar34 = puVar33 + 0x18;
    uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                       (uVar21,(StrRange *)&local_308,uVar47,0);
    puVar33[0x14] = uVar21;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
    puVar33 = puVar34;
    if (puVar5 + (ulong)uVar4 * 0x18 == puVar34) goto code_r0x001128c0;
    goto LAB_001115ea;
  }
  goto LAB_00113a88;
LAB_00113373:
  local_88[0] = 0;
  local_a8 = SUB84(local_e8,0);
  uStack_a4 = (uint)((ulong)local_e8 >> 0x20);
  uStack_a0 = CONCAT31(uStack_a0._1_3_,uStack_e0._0_1_);
  local_98 = local_d8;
  if (lVar27 == 0) {
    Vector<RenderingDevice::Uniform>::push_back
              ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  }
  else {
    CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)&local_c8);
    lVar41 = local_88[0];
    Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)&local_308);
    if (lVar41 != 0) {
      LOCK();
      plVar26 = (long *)(lVar41 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        Memory::free_static((void *)(local_88[0] + -0x10),false);
      }
      lVar27 = local_c8;
      if (local_c8 == 0) goto LAB_00113443;
    }
    LOCK();
    plVar26 = (long *)(lVar27 + -0x10);
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (*plVar26 == 0) {
      Memory::free_static((void *)(local_c8 + -0x10),false);
    }
  }
LAB_00113443:
  local_98 = *(undefined8 *)(lVar17 + 0x50);
  local_a8 = (undefined4)_LC267;
  uStack_a4 = (uint)((ulong)_LC267 >> 0x20);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(undefined8 *)(lVar29 + 0x38);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC268;
  uStack_a4 = (uint)((ulong)_LC268 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(undefined8 *)(lVar29 + 0x48);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC269;
  uStack_a4 = (uint)((ulong)_LC269 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(undefined8 *)(lVar29 + 0x20);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC259;
  uStack_a4 = (uint)((ulong)_LC259 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(undefined8 *)(lVar29 + 0x10);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC260;
  uStack_a4 = (uint)((ulong)_LC260 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(undefined8 *)(lVar29 + 0x18);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC261;
  uStack_a4 = (uint)((ulong)_LC261 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(long *)(this + 0x2d8);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC270;
  uStack_a4 = (uint)((ulong)_LC270 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(undefined8 *)(lVar29 + 0xb0);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC271;
  uStack_a4 = (uint)((ulong)_LC271 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(long *)(this + 0x268);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC272;
  uStack_a4 = (uint)((ulong)_LC272 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  local_98 = *(long *)(this + 0x278);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_a8 = (undefined4)_LC194;
  uStack_a4 = (uint)((ulong)_LC194 >> 0x20);
  local_88[0] = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  uVar47 = 0x1136a0;
  uVar21 = RenderingDevice::get_singleton();
  lVar27 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar27 + 0x1490);
  if (*(long *)(lVar27 + 0x1330) == 0) {
    lVar41 = 0;
LAB_00113952:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar41,
               "p_variant","variant_defines.size()","",false,false);
LAB_0011398b:
    uVar47 = 0;
  }
  else {
    lVar41 = *(long *)(*(long *)(lVar27 + 0x1330) + -8);
    if (lVar41 < 1) goto LAB_00113952;
    pcVar35 = *(char **)(lVar27 + 0x1340);
    if (pcVar35 == (char *)0x0) goto LAB_00112ee8;
    lVar41 = *(long *)(pcVar35 + -8);
    if (lVar41 < 1) goto LAB_00112eeb;
    if (*pcVar35 != '\0') {
      if ((uVar36 == 0) || (*(uint *)(lVar27 + 0x13ec) <= (uint)uVar36)) {
LAB_00114c99:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar47 = 0;
        goto LAB_001137c4;
      }
      lVar28 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar27 + 0x13e8)) * 0xa0 +
               *(long *)(*(long *)(lVar27 + 0x13d8) +
                        ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar27 + 0x13e8)) * 8);
      if (*(int *)(lVar28 + 0x98) != (int)(uVar36 >> 0x20)) {
        if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
          uVar20 = uVar47;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00114c99;
      }
      pVVar2 = (Version *)(lVar27 + 0x1318);
      iVar15 = (int)lVar28;
      if (*(char *)(lVar28 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar41 = *(long *)(lVar27 + 0x1390);
        if (lVar41 != 0) {
          lVar31 = 0;
          do {
            if (*(long *)(lVar41 + -8) <= lVar31) break;
            if (*(char *)(lVar41 + lVar31) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar15);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar15);
            }
            lVar41 = *(long *)(lVar27 + 0x1390);
            lVar31 = lVar31 + 1;
          } while (lVar41 != 0);
        }
      }
      puVar6 = *(uint **)(lVar27 + 0x1350);
      if (puVar6 == (uint *)0x0) goto LAB_00112ee8;
      lVar41 = *(long *)(puVar6 + -2);
      if (lVar41 < 1) goto LAB_00112eeb;
      lVar27 = *(long *)(lVar28 + 0x68);
      uVar36 = (ulong)*puVar6;
      if (lVar27 == 0) goto LAB_00112f10;
      lVar41 = *(long *)(lVar27 + -8);
      if (lVar41 <= (long)uVar36) goto LAB_00112d93;
      if (*(long *)(lVar27 + uVar36 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar15);
      }
      if (*(char *)(lVar28 + 0x90) != '\0') {
        puVar5 = *(undefined8 **)(lVar28 + 0x88);
        if (puVar5 == (undefined8 *)0x0) goto LAB_00112ee8;
        lVar41 = puVar5[-1];
        if (lVar41 < 1) goto LAB_00112eeb;
        uVar47 = *puVar5;
        goto LAB_001137c4;
      }
      goto LAB_0011398b;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
    uVar47 = 0;
  }
LAB_001137c4:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(StrRange *)&local_308,uVar47,0);
  *(undefined8 *)(lVar29 + 0x88) = uVar21;
  uVar21 = RenderingDevice::get_singleton();
  lVar27 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar27 + 0x1490);
  if (*(long *)(lVar27 + 0x1330) == 0) {
    lVar41 = 0;
LAB_0011399b:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,lVar41,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar41 = *(long *)(*(long *)(lVar27 + 0x1330) + -8);
    if (lVar41 < 2) goto LAB_0011399b;
    lVar28 = *(long *)(lVar27 + 0x1340);
    if (lVar28 == 0) goto LAB_00113070;
    lVar41 = *(long *)(lVar28 + -8);
    if (lVar41 < 2) goto LAB_00113073;
    if (*(char *)(lVar28 + 1) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar47 = 0;
      goto LAB_00113912;
    }
    if ((uVar36 == 0) || (*(uint *)(lVar27 + 0x13ec) <= (uint)uVar36)) {
LAB_00114d06:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.");
      uVar47 = 0;
      goto LAB_00113912;
    }
    lVar28 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar27 + 0x13e8)) * 0xa0 +
             *(long *)(*(long *)(lVar27 + 0x13d8) +
                      ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar27 + 0x13e8)) * 8);
    if (*(int *)(lVar28 + 0x98) != (int)(uVar36 >> 0x20)) {
      if (*(int *)(lVar28 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00114d06;
    }
    pVVar2 = (Version *)(lVar27 + 0x1318);
    iVar15 = (int)lVar28;
    if (*(char *)(lVar28 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar41 = *(long *)(lVar27 + 0x1390);
      if (lVar41 != 0) {
        lVar31 = 0;
        do {
          if (*(long *)(lVar41 + -8) <= lVar31) break;
          if (*(char *)(lVar41 + lVar31) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar15);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar15);
          }
          lVar41 = *(long *)(lVar27 + 0x1390);
          lVar31 = lVar31 + 1;
        } while (lVar41 != 0);
      }
    }
    lVar27 = *(long *)(lVar27 + 0x1350);
    if (lVar27 == 0) goto LAB_00113070;
    lVar41 = *(long *)(lVar27 + -8);
    if (lVar41 < 2) goto LAB_00113073;
    uVar36 = (ulong)*(uint *)(lVar27 + 4);
    lVar27 = *(long *)(lVar28 + 0x68);
    if (lVar27 == 0) {
      lVar41 = 0;
      goto LAB_00112d93;
    }
    lVar41 = *(long *)(lVar27 + -8);
    if (lVar41 <= (long)uVar36) goto LAB_00112d93;
    if (*(long *)(lVar27 + uVar36 * 8) != 0) {
      ShaderRD::_compile_version_end(pVVar2,iVar15);
    }
    if (*(char *)(lVar28 + 0x90) != '\0') {
      lVar27 = *(long *)(lVar28 + 0x88);
      if (lVar27 == 0) goto LAB_00113070;
      lVar41 = *(long *)(lVar27 + -8);
      if (lVar41 < 2) goto LAB_00113073;
      uVar47 = *(undefined8 *)(lVar27 + 8);
      goto LAB_00113912;
    }
  }
  uVar47 = 0;
LAB_00113912:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(StrRange *)&local_308,uVar47,0);
  *(undefined8 *)(lVar29 + 0x90) = uVar21;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
  if (lVar23 == lVar29 + 0xc0) goto LAB_00113a88;
  uVar36 = (ulong)*(uint *)(this + 600);
  lVar29 = lVar29 + 0xc0;
  goto LAB_00112909;
LAB_00112f10:
  lVar41 = 0;
  goto LAB_00112d93;
LAB_00113070:
  lVar41 = 0;
LAB_00113073:
  uVar36 = 1;
  goto LAB_00112d93;
code_r0x001128c0:
  uVar36 = (ulong)*(uint *)(this + 600);
  lVar29 = *(long *)(this + 0x260);
  lVar23 = uVar36 * 0xc0 + lVar29;
  if (lVar23 != lVar29) {
LAB_00112909:
    lVar41 = 0;
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
    local_e8 = (char *)_LC185;
    lVar27 = 0;
    lStack_300 = 0;
    local_d8 = 0;
    local_c8 = 0;
    do {
      if ((uint)lVar41 < (uint)uVar36) {
        lVar28 = *(long *)(lVar41 * 0xc0 + *(long *)(this + 0x260));
        if (lVar27 != 0) goto LAB_00112977;
LAB_001129ac:
        if (local_d8 != 0) {
          Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
          Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar28);
          local_d8 = 0;
          lVar27 = local_c8;
          lVar28 = local_d8;
        }
      }
      else {
        lVar28 = *(long *)(lVar16 + 0x70);
        if (lVar27 == 0) goto LAB_001129ac;
LAB_00112977:
        Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar28);
        lVar27 = local_c8;
        lVar28 = local_d8;
      }
      local_d8 = lVar28;
      lVar41 = lVar41 + 1;
      if (lVar41 == 8) goto LAB_00113373;
      uVar36 = (ulong)*(uint *)(this + 600);
    } while( true );
  }
LAB_00113a88:
  local_98 = *(long *)(this + 0x188);
  uStack_e0 = 0;
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_88[0] = 0;
  local_a8 = uVar14;
  uStack_a4 = uVar9;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
  local_98 = *(long *)(this + 0x1e8);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_88[0] = 0;
  local_a8 = uVar10;
  uStack_a4 = uVar11;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
  uVar21 = RenderingDevice::get_singleton();
  lVar29 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar29 + 0xad0);
  if (*(long *)(lVar29 + 0x970) != 0) {
    lVar23 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
    if (lVar23 < 3) goto LAB_00114dc7;
    lVar23 = *(long *)(lVar29 + 0x980);
    if (lVar23 == 0) {
LAB_0011683d:
      lVar41 = 0;
LAB_00116840:
      uVar36 = 2;
      goto LAB_00112d93;
    }
    lVar41 = *(long *)(lVar23 + -8);
    if (lVar41 < 3) goto LAB_00116840;
    if (*(char *)(lVar23 + 2) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar47 = 0;
      goto LAB_00113c48;
    }
    if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_00116807:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.");
      uVar47 = 0;
      goto LAB_00113c48;
    }
    lVar23 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
             *(long *)(*(long *)(lVar29 + 0xa18) +
                      ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
    if (*(int *)(lVar23 + 0x98) != (int)(uVar36 >> 0x20)) {
      if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,uVar36);
      }
      goto LAB_00116807;
    }
    pVVar2 = (Version *)(lVar29 + 0x958);
    iVar15 = (int)lVar23;
    if (*(char *)(lVar23 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      lVar27 = *(long *)(lVar29 + 0x9d0);
      if (lVar27 != 0) {
        lVar41 = 0;
        do {
          if (*(long *)(lVar27 + -8) <= lVar41) break;
          if (*(char *)(lVar27 + lVar41) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar15);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar15);
          }
          lVar27 = *(long *)(lVar29 + 0x9d0);
          lVar41 = lVar41 + 1;
        } while (lVar27 != 0);
      }
    }
    lVar29 = *(long *)(lVar29 + 0x990);
    if (lVar29 == 0) goto LAB_0011683d;
    lVar41 = *(long *)(lVar29 + -8);
    if (lVar41 < 3) goto LAB_00116840;
    uVar36 = (ulong)*(uint *)(lVar29 + 8);
    lVar29 = *(long *)(lVar23 + 0x68);
    if (lVar29 != 0) {
      lVar41 = *(long *)(lVar29 + -8);
      if (lVar41 <= (long)uVar36) goto LAB_00112d93;
      if (*(long *)(lVar29 + uVar36 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar15);
      }
      if (*(char *)(lVar23 + 0x90) != '\0') {
        lVar29 = *(long *)(lVar23 + 0x88);
        if (lVar29 == 0) goto LAB_0011683d;
        lVar41 = *(long *)(lVar29 + -8);
        if (2 < lVar41) {
          uVar47 = *(undefined8 *)(lVar29 + 0x10);
          goto LAB_00113c48;
        }
        goto LAB_00116840;
      }
      goto LAB_00114e03;
    }
LAB_00116775:
    lVar41 = 0;
    goto LAB_00112d93;
  }
  lVar23 = 0;
LAB_00114dc7:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,lVar23,
             "p_variant","variant_defines.size()","",false,false);
LAB_00114e03:
  uVar47 = 0;
LAB_00113c48:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(String *)&local_e8,uVar47,0);
  *(undefined8 *)(this + 0x208) = uVar21;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
  local_98 = *(long *)(this + 0x188);
  uStack_e0 = 0;
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_88[0] = 0;
  local_a8 = uVar14;
  uStack_a4 = uVar9;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
  local_98 = *(long *)(this + 0x1f8);
  uStack_a0 = uStack_a0 & 0xffffff00;
  local_88[0] = 0;
  local_a8 = uVar10;
  uStack_a4 = uVar11;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_e8,(TextureFormat *)&local_a8);
  uVar21 = RenderingDevice::get_singleton();
  lVar29 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar29 + 0xad0);
  if (*(long *)(lVar29 + 0x970) == 0) {
    lVar23 = 0;
LAB_00114e1f:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,3,lVar23,
               "p_variant","variant_defines.size()","",false,false);
LAB_00114e5b:
    uVar47 = 0;
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
    if (lVar23 < 4) goto LAB_00114e1f;
    lVar23 = *(long *)(lVar29 + 0x980);
    if (lVar23 == 0) {
LAB_0011674d:
      lVar41 = 0;
LAB_00116750:
      uVar36 = 3;
      goto LAB_00112d93;
    }
    lVar41 = *(long *)(lVar23 + -8);
    if (lVar41 < 4) goto LAB_00116750;
    if (*(char *)(lVar23 + 3) != '\0') {
      if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_001166bb:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar47 = 0;
        goto LAB_00113e34;
      }
      lVar23 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
               *(long *)(*(long *)(lVar29 + 0xa18) +
                        ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
      if (*(int *)(lVar23 + 0x98) != (int)(uVar36 >> 0x20)) {
        if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,uVar36 >> 0x20);
        }
        goto LAB_001166bb;
      }
      pVVar2 = (Version *)(lVar29 + 0x958);
      iVar15 = (int)lVar23;
      if (*(char *)(lVar23 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar27 = *(long *)(lVar29 + 0x9d0);
        if (lVar27 != 0) {
          lVar41 = 0;
          do {
            if (*(long *)(lVar27 + -8) <= lVar41) break;
            if (*(char *)(lVar27 + lVar41) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar15);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar15);
            }
            lVar27 = *(long *)(lVar29 + 0x9d0);
            lVar41 = lVar41 + 1;
          } while (lVar27 != 0);
        }
      }
      lVar29 = *(long *)(lVar29 + 0x990);
      if (lVar29 == 0) goto LAB_0011674d;
      lVar41 = *(long *)(lVar29 + -8);
      if (lVar41 < 4) goto LAB_00116750;
      uVar36 = (ulong)*(uint *)(lVar29 + 0xc);
      lVar29 = *(long *)(lVar23 + 0x68);
      if (lVar29 == 0) goto LAB_00116775;
      lVar41 = *(long *)(lVar29 + -8);
      if (lVar41 <= (long)uVar36) goto LAB_00112d93;
      if (*(long *)(lVar29 + uVar36 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar15);
      }
      if (*(char *)(lVar23 + 0x90) != '\0') {
        lVar29 = *(long *)(lVar23 + 0x88);
        if (lVar29 == 0) goto LAB_0011674d;
        lVar41 = *(long *)(lVar29 + -8);
        if (3 < lVar41) {
          uVar47 = *(undefined8 *)(lVar29 + 0x18);
          goto LAB_00113e34;
        }
        goto LAB_00116750;
      }
      goto LAB_00114e5b;
    }
    _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                     "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
    uVar47 = 0;
  }
LAB_00113e34:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(String *)&local_e8,uVar47,0);
  *(undefined8 *)(this + 0x210) = uVar21;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
  local_c8 = 0;
  lStack_300 = 0;
  local_e8 = (char *)lVar32;
  local_d8 = *(long *)(this + 0x1e8);
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  CowData<RID>::_unref((CowData<RID> *)local_88);
  CowData<RID>::_unref((CowData<RID> *)&local_c8);
  local_c8 = 0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  local_e8 = (char *)lVar40;
  local_d8 = *(long *)(this + 0x1f0);
  RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  CowData<RID>::_unref((CowData<RID> *)local_88);
  CowData<RID>::_unref((CowData<RID> *)&local_c8);
  uVar21 = RenderingDevice::get_singleton();
  lVar29 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar29 + 0xad0);
  if (*(long *)(lVar29 + 0x970) != 0) {
    lVar23 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
    if (lVar23 < 5) goto LAB_001164c4;
    lVar23 = *(long *)(lVar29 + 0x980);
    if (lVar23 != 0) {
      lVar41 = *(long *)(lVar23 + -8);
      if (lVar41 < 5) goto LAB_00116623;
      if (*(char *)(lVar23 + 4) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
        uVar47 = 0;
        goto LAB_00114064;
      }
      if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_0011658c:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
        uVar47 = 0;
        goto LAB_00114064;
      }
      lVar23 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
               *(long *)(*(long *)(lVar29 + 0xa18) +
                        ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
      if (*(int *)(lVar23 + 0x98) != (int)(uVar36 >> 0x20)) {
        if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,uVar20);
        }
        goto LAB_0011658c;
      }
      pVVar2 = (Version *)(lVar29 + 0x958);
      iVar15 = (int)lVar23;
      if (*(char *)(lVar23 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        lVar27 = *(long *)(lVar29 + 0x9d0);
        if (lVar27 != 0) {
          lVar41 = 0;
          do {
            if (*(long *)(lVar27 + -8) <= lVar41) break;
            if (*(char *)(lVar27 + lVar41) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar15);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar15);
            }
            lVar27 = *(long *)(lVar29 + 0x9d0);
            lVar41 = lVar41 + 1;
          } while (lVar27 != 0);
        }
      }
      lVar29 = *(long *)(lVar29 + 0x990);
      if (lVar29 == 0) goto LAB_00116620;
      lVar41 = *(long *)(lVar29 + -8);
      if (4 < lVar41) {
        uVar36 = (ulong)*(uint *)(lVar29 + 0x10);
        lVar29 = *(long *)(lVar23 + 0x68);
        if (lVar29 == 0) goto LAB_00116775;
        lVar41 = *(long *)(lVar29 + -8);
        if (lVar41 <= (long)uVar36) goto LAB_00112d93;
        if (*(long *)(lVar29 + uVar36 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar15);
        }
        if (*(char *)(lVar23 + 0x90) != '\0') {
          lVar29 = *(long *)(lVar23 + 0x88);
          if (lVar29 == 0) goto LAB_00116620;
          lVar41 = *(long *)(lVar29 + -8);
          if (4 < lVar41) {
            uVar47 = *(undefined8 *)(lVar29 + 0x20);
            goto LAB_00114064;
          }
          goto LAB_00116623;
        }
        goto LAB_00116500;
      }
      goto LAB_00116623;
    }
    goto LAB_00116620;
  }
  lVar23 = 0;
LAB_001164c4:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,4,lVar23,
             "p_variant","variant_defines.size()","",false,false);
LAB_00116500:
  uVar47 = 0;
LAB_00114064:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(StrRange *)&local_308,uVar47);
  *(undefined8 *)(this + 0x218) = uVar21;
  if (lStack_300 == 0) goto LAB_00116490;
  uVar36 = *(ulong *)(lStack_300 + -8);
  if ((long)uVar36 < 1) goto LAB_00116493;
  CowData<RenderingDevice::Uniform>::_copy_on_write
            ((CowData<RenderingDevice::Uniform> *)&lStack_300);
  lVar29 = *(long *)(lStack_300 + 0x10);
  if (lVar29 == 0) {
    plVar26 = *(long **)(lStack_300 + 0x20);
    if (plVar26 == (long *)0x0) {
LAB_00112ee8:
      lVar41 = 0;
    }
    else {
      lVar41 = plVar26[-1];
      if (0 < lVar41) {
        lVar29 = *plVar26;
        goto LAB_001140de;
      }
    }
LAB_00112eeb:
    uVar36 = 0;
    goto LAB_00112d93;
  }
LAB_001140de:
  uVar36 = *(ulong *)(lStack_300 + -8);
  if ((long)uVar36 < 2) {
LAB_00114eb2:
    uVar24 = 1;
    iVar15 = 0x38;
    pcVar35 = "./core/templates/vector.h";
    pcVar46 = "((Vector<T> *)(this))->_cowdata.size()";
    goto LAB_00114ede;
  }
  CowData<RenderingDevice::Uniform>::_copy_on_write
            ((CowData<RenderingDevice::Uniform> *)&lStack_300);
  lVar23 = *(long *)(lStack_300 + 0x38);
  if (lVar23 == 0) {
    plVar26 = *(long **)(lStack_300 + 0x48);
    if (plVar26 == (long *)0x0) goto LAB_00112ee8;
    lVar41 = plVar26[-1];
    if (lVar41 < 1) goto LAB_00112eeb;
    lVar23 = *plVar26;
  }
  uVar36 = *(ulong *)(lStack_300 + -8);
  if ((long)uVar36 < 1) goto LAB_00116493;
  CowData<RenderingDevice::Uniform>::_copy_on_write
            ((CowData<RenderingDevice::Uniform> *)&lStack_300);
  lVar27 = lStack_300;
  if (*(long *)(lStack_300 + 0x10) == 0) {
    if (*(long *)(lStack_300 + 0x20) == 0) goto LAB_00116490;
    uVar36 = *(ulong *)(*(long *)(lStack_300 + 0x20) + -8);
    if ((long)uVar36 < 1) goto LAB_00116493;
    CowData<RID>::_copy_on_write((CowData<RID> *)(lStack_300 + 0x20));
    **(long **)(lVar27 + 0x20) = lVar23;
    if (lStack_300 != 0) goto LAB_00114152;
LAB_00114eaf:
    uVar36 = 0;
    goto LAB_00114eb2;
  }
  *(long *)(lStack_300 + 0x10) = lVar23;
LAB_00114152:
  uVar36 = *(ulong *)(lStack_300 + -8);
  if ((long)uVar36 < 2) goto LAB_00114eb2;
  CowData<RenderingDevice::Uniform>::_copy_on_write
            ((CowData<RenderingDevice::Uniform> *)&lStack_300);
  lVar23 = lStack_300;
  if (*(long *)(lStack_300 + 0x38) == 0) {
    if (*(long *)(lStack_300 + 0x48) == 0) goto LAB_00116490;
    uVar36 = *(ulong *)(*(long *)(lStack_300 + 0x48) + -8);
    if ((long)uVar36 < 1) goto LAB_00116493;
    CowData<RID>::_copy_on_write((CowData<RID> *)(lStack_300 + 0x48));
    **(long **)(lVar23 + 0x48) = lVar29;
  }
  else {
    *(long *)(lStack_300 + 0x38) = lVar29;
  }
  uVar21 = RenderingDevice::get_singleton();
  lVar29 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar29 + 0xad0);
  if (*(long *)(lVar29 + 0x970) != 0) {
    lVar23 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
    if (lVar23 < 5) goto LAB_00114ef8;
    lVar23 = *(long *)(lVar29 + 0x980);
    if (lVar23 != 0) {
      lVar41 = *(long *)(lVar23 + -8);
      if (lVar41 < 5) goto LAB_00116623;
      if (*(char *)(lVar23 + 4) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
        uVar47 = 0;
        goto LAB_001142ba;
      }
      if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_0011639c:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
        uVar47 = 0;
        goto LAB_001142ba;
      }
      lVar23 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
               *(long *)(*(long *)(lVar29 + 0xa18) +
                        ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
      if (*(int *)(lVar23 + 0x98) != (int)(uVar36 >> 0x20)) {
        if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,lVar41);
        }
        goto LAB_0011639c;
      }
      pVVar2 = (Version *)(lVar29 + 0x958);
      iVar15 = (int)lVar23;
      if (*(char *)(lVar23 + 0x91) != '\0') {
        ShaderRD::_initialize_version(pVVar2);
        for (lVar27 = 0;
            (lVar41 = *(long *)(lVar29 + 0x9d0), lVar41 != 0 && (lVar27 < *(long *)(lVar41 + -8)));
            lVar27 = lVar27 + 1) {
          if (*(char *)(lVar41 + lVar27) == '\0') {
            ShaderRD::_allocate_placeholders(pVVar2,iVar15);
          }
          else {
            ShaderRD::_compile_version_start(pVVar2,iVar15);
          }
        }
      }
      lVar29 = *(long *)(lVar29 + 0x990);
      if (lVar29 == 0) goto LAB_00116620;
      lVar41 = *(long *)(lVar29 + -8);
      if (4 < lVar41) {
        uVar36 = (ulong)*(uint *)(lVar29 + 0x10);
        lVar29 = *(long *)(lVar23 + 0x68);
        if (lVar29 == 0) goto LAB_00116775;
        lVar41 = *(long *)(lVar29 + -8);
        if (lVar41 <= (long)uVar36) goto LAB_00112d93;
        if (*(long *)(lVar29 + uVar36 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar15);
        }
        if (*(char *)(lVar23 + 0x90) != '\0') {
          lVar29 = *(long *)(lVar23 + 0x88);
          if (lVar29 == 0) goto LAB_00116620;
          lVar41 = *(long *)(lVar29 + -8);
          if (4 < lVar41) {
            uVar47 = *(undefined8 *)(lVar29 + 0x20);
            goto LAB_001142ba;
          }
          goto LAB_00116623;
        }
        goto LAB_00114f34;
      }
      goto LAB_00116623;
    }
    goto LAB_00116620;
  }
  lVar23 = 0;
LAB_00114ef8:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,4,lVar23,
             "p_variant","variant_defines.size()","",false,false);
LAB_00114f34:
  uVar47 = 0;
LAB_001142ba:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(StrRange *)&local_308,uVar47);
  *(undefined8 *)(this + 0x220) = uVar21;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
  local_c8 = 0;
  local_e8 = (char *)lVar32;
  local_d8 = *(long *)(this + 0x1f8);
  lStack_300 = 0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  CowData<RID>::_unref((CowData<RID> *)local_88);
  CowData<RID>::_unref((CowData<RID> *)&local_c8);
  local_c8 = 0;
  local_e8 = (char *)lVar40;
  local_d8 = *(long *)(this + 0x200);
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
  CowData<RID>::_unref((CowData<RID> *)local_88);
  CowData<RID>::_unref((CowData<RID> *)&local_c8);
  uVar21 = RenderingDevice::get_singleton();
  lVar29 = *(long *)(this + 0x180);
  uVar36 = *(ulong *)(lVar29 + 0xad0);
  if (*(long *)(lVar29 + 0x970) != 0) {
    lVar23 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
    if (lVar23 < 5) goto LAB_00114f50;
    lVar23 = *(long *)(lVar29 + 0x980);
    if (lVar23 == 0) goto LAB_00116620;
    lVar41 = *(long *)(lVar23 + -8);
    if (lVar41 < 5) goto LAB_00116623;
    if (*(char *)(lVar23 + 4) == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
      uVar47 = 0;
      goto LAB_001144d9;
    }
    if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_00114ff6:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
      uVar47 = 0;
      goto LAB_001144d9;
    }
    lVar23 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
             *(long *)(*(long *)(lVar29 + 0xa18) +
                      ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
    if (*(int *)(lVar23 + 0x98) != (int)(uVar36 >> 0x20)) {
      if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,uVar36 >> 0x20);
      }
      goto LAB_00114ff6;
    }
    pVVar2 = (Version *)(lVar29 + 0x958);
    iVar15 = (int)lVar23;
    if (*(char *)(lVar23 + 0x91) != '\0') {
      ShaderRD::_initialize_version(pVVar2);
      for (lVar27 = 0;
          (lVar41 = *(long *)(lVar29 + 0x9d0), lVar41 != 0 && (lVar27 < *(long *)(lVar41 + -8)));
          lVar27 = lVar27 + 1) {
        if (*(char *)(lVar41 + lVar27) == '\0') {
          ShaderRD::_allocate_placeholders(pVVar2,iVar15);
        }
        else {
          ShaderRD::_compile_version_start(pVVar2,iVar15);
        }
      }
    }
    lVar29 = *(long *)(lVar29 + 0x990);
    if (lVar29 == 0) goto LAB_00116620;
    lVar41 = *(long *)(lVar29 + -8);
    if (4 < lVar41) {
      uVar36 = (ulong)*(uint *)(lVar29 + 0x10);
      lVar29 = *(long *)(lVar23 + 0x68);
      if (lVar29 == 0) goto LAB_00116775;
      lVar41 = *(long *)(lVar29 + -8);
      if (lVar41 <= (long)uVar36) goto LAB_00112d93;
      if (*(long *)(lVar29 + uVar36 * 8) != 0) {
        ShaderRD::_compile_version_end(pVVar2,iVar15);
      }
      if (*(char *)(lVar23 + 0x90) != '\0') {
        lVar29 = *(long *)(lVar23 + 0x88);
        if (lVar29 == 0) goto LAB_00116620;
        lVar41 = *(long *)(lVar29 + -8);
        if (4 < lVar41) {
          uVar47 = *(undefined8 *)(lVar29 + 0x20);
          goto LAB_001144d9;
        }
        goto LAB_00116623;
      }
      goto LAB_00114f8c;
    }
    goto LAB_00116623;
  }
  lVar23 = 0;
LAB_00114f50:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,4,lVar23,
             "p_variant","variant_defines.size()","",false,false);
LAB_00114f8c:
  uVar47 = 0;
LAB_001144d9:
  uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar21,(StrRange *)&local_308,uVar47);
  *(undefined8 *)(this + 0x228) = uVar21;
  if (lStack_300 == 0) {
LAB_00116490:
    uVar36 = 0;
  }
  else {
    uVar36 = *(ulong *)(lStack_300 + -8);
    if (0 < (long)uVar36) {
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&lStack_300);
      lVar29 = *(long *)(lStack_300 + 0x10);
      if (lVar29 == 0) {
        plVar26 = *(long **)(lStack_300 + 0x20);
        if (plVar26 == (long *)0x0) goto LAB_00112ee8;
        lVar41 = plVar26[-1];
        if (lVar41 < 1) goto LAB_00112eeb;
        lVar29 = *plVar26;
      }
      uVar36 = *(ulong *)(lStack_300 + -8);
      if ((long)uVar36 < 2) goto LAB_00114eb2;
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&lStack_300);
      lVar23 = *(long *)(lStack_300 + 0x38);
      if (lVar23 == 0) {
        plVar26 = *(long **)(lStack_300 + 0x48);
        if (plVar26 == (long *)0x0) goto LAB_00112ee8;
        lVar41 = plVar26[-1];
        if (lVar41 < 1) goto LAB_00112eeb;
        lVar23 = *plVar26;
      }
      uVar36 = *(ulong *)(lStack_300 + -8);
      if ((long)uVar36 < 1) goto LAB_00116493;
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&lStack_300);
      lVar27 = lStack_300;
      if (*(long *)(lStack_300 + 0x10) == 0) {
        if (*(long *)(lStack_300 + 0x20) == 0) goto LAB_00116490;
        uVar36 = *(ulong *)(*(long *)(lStack_300 + 0x20) + -8);
        if ((long)uVar36 < 1) goto LAB_00116493;
        CowData<RID>::_copy_on_write((CowData<RID> *)(lStack_300 + 0x20));
        **(long **)(lVar27 + 0x20) = lVar23;
        if (lStack_300 == 0) goto LAB_00114eaf;
      }
      else {
        *(long *)(lStack_300 + 0x10) = lVar23;
      }
      uVar36 = *(ulong *)(lStack_300 + -8);
      if ((long)uVar36 < 2) goto LAB_00114eb2;
      CowData<RenderingDevice::Uniform>::_copy_on_write
                ((CowData<RenderingDevice::Uniform> *)&lStack_300);
      lVar23 = lStack_300;
      if (*(long *)(lStack_300 + 0x38) == 0) {
        if (*(long *)(lStack_300 + 0x48) == 0) goto LAB_00116490;
        uVar36 = *(ulong *)(*(long *)(lStack_300 + 0x48) + -8);
        if ((long)uVar36 < 1) goto LAB_00116493;
        CowData<RID>::_copy_on_write((CowData<RID> *)(lStack_300 + 0x48));
        **(long **)(lVar23 + 0x48) = lVar29;
      }
      else {
        *(long *)(lStack_300 + 0x38) = lVar29;
      }
      uVar21 = RenderingDevice::get_singleton();
      lVar29 = *(long *)(this + 0x180);
      uVar36 = *(ulong *)(lVar29 + 0xad0);
      if (*(long *)(lVar29 + 0x970) == 0) {
        lVar23 = 0;
LAB_00115093:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,4,lVar23,
                   "p_variant","variant_defines.size()","",false,false);
LAB_001150cf:
        uVar47 = 0;
      }
      else {
        lVar23 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
        if (lVar23 < 5) goto LAB_00115093;
        lVar23 = *(long *)(lVar29 + 0x980);
        if (lVar23 == 0) {
LAB_00116620:
          lVar41 = 0;
LAB_00116623:
          uVar36 = 4;
          goto LAB_00112d93;
        }
        lVar41 = *(long *)(lVar23 + -8);
        if (lVar41 < 5) goto LAB_00116623;
        if (*(char *)(lVar23 + 4) != '\0') {
          if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_0011626c:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.");
            uVar47 = 0;
            goto LAB_00114724;
          }
          lVar23 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
                   *(long *)(*(long *)(lVar29 + 0xa18) +
                            ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
          if (*(int *)(lVar23 + 0x98) != (int)(uVar36 >> 0x20)) {
            if (*(int *)(lVar23 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,uVar20);
            }
            goto LAB_0011626c;
          }
          pVVar2 = (Version *)(lVar29 + 0x958);
          iVar15 = (int)lVar23;
          if (*(char *)(lVar23 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            for (lVar27 = 0;
                (lVar41 = *(long *)(lVar29 + 0x9d0), lVar41 != 0 &&
                (lVar27 < *(long *)(lVar41 + -8))); lVar27 = lVar27 + 1) {
              if (*(char *)(lVar41 + lVar27) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar15);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar15);
              }
            }
          }
          lVar29 = *(long *)(lVar29 + 0x990);
          if (lVar29 == 0) goto LAB_00116620;
          lVar41 = *(long *)(lVar29 + -8);
          if (lVar41 < 5) goto LAB_00116623;
          uVar36 = (ulong)*(uint *)(lVar29 + 0x10);
          lVar29 = *(long *)(lVar23 + 0x68);
          if (lVar29 == 0) goto LAB_00116775;
          lVar41 = *(long *)(lVar29 + -8);
          if (lVar41 <= (long)uVar36) goto LAB_00112d93;
          if (*(long *)(lVar29 + uVar36 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar2,iVar15);
          }
          if (*(char *)(lVar23 + 0x90) != '\0') {
            lVar29 = *(long *)(lVar23 + 0x88);
            if (lVar29 == 0) goto LAB_00116620;
            lVar41 = *(long *)(lVar29 + -8);
            if (4 < lVar41) {
              uVar47 = *(undefined8 *)(lVar29 + 0x20);
              goto LAB_00114724;
            }
            goto LAB_00116623;
          }
          goto LAB_001150cf;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar47 = 0;
      }
LAB_00114724:
      uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                         (uVar21,(StrRange *)&local_308,uVar47,0);
      *(undefined8 *)(this + 0x230) = uVar21;
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
      lStack_300 = 0;
      local_e8 = (char *)lVar32;
      local_d8 = *(long *)(this + 0x188);
      local_c8 = 0;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
      CowData<RID>::_unref((CowData<RID> *)local_88);
      CowData<RID>::_unref((CowData<RID> *)&local_c8);
      local_c8 = 0;
      local_e8 = (char *)lVar40;
      local_d8 = *(long *)(this + (ulong)(uVar39 & 1) * 8 + 0x1f8);
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
      CowData<RID>::_unref((CowData<RID> *)local_88);
      CowData<RID>::_unref((CowData<RID> *)&local_c8);
      lVar23 = _LC257;
      local_c8 = 0;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      local_e8 = (char *)_LC257;
      local_d8 = *(long *)(this + (ulong)(uVar39 & 1) * 8 + 0x1e8);
      RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
      CowData<RID>::_unref((CowData<RID> *)local_88);
      CowData<RID>::_unref((CowData<RID> *)&local_c8);
      *(uint *)(this + 0x240) = uVar39 & 1;
      uVar21 = RenderingDevice::get_singleton();
      lVar29 = *(long *)(this + 0x180);
      uVar36 = *(ulong *)(lVar29 + 0xad0);
      if (*(long *)(lVar29 + 0x970) == 0) {
        lVar27 = 0;
LAB_001150eb:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,6,lVar27,
                   "p_variant","variant_defines.size()","",false,false);
LAB_00115127:
        uVar47 = 0;
      }
      else {
        lVar27 = *(long *)(*(long *)(lVar29 + 0x970) + -8);
        if (lVar27 < 7) goto LAB_001150eb;
        lVar27 = *(long *)(lVar29 + 0x980);
        if (lVar27 == 0) {
LAB_001161e1:
          lVar41 = 0;
LAB_001161e4:
          uVar36 = 6;
          goto LAB_00112d93;
        }
        lVar41 = *(long *)(lVar27 + -8);
        if (lVar41 < 7) goto LAB_001161e4;
        if (*(char *)(lVar27 + 6) != '\0') {
          if ((uVar36 == 0) || (*(uint *)(lVar29 + 0xa2c) <= (uint)uVar36)) {
LAB_00116156:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.");
            uVar47 = 0;
            goto LAB_001149b9;
          }
          lVar27 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar29 + 0xa28)) * 0xa0 +
                   *(long *)(*(long *)(lVar29 + 0xa18) +
                            ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar29 + 0xa28)) * 8);
          if (*(int *)(lVar27 + 0x98) != (int)(uVar36 >> 0x20)) {
            uVar39 = *(int *)(lVar27 + 0x98) + 0x80000000;
            if (uVar39 < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,uVar39);
            }
            goto LAB_00116156;
          }
          pVVar2 = (Version *)(lVar29 + 0x958);
          iVar15 = (int)lVar27;
          if (*(char *)(lVar27 + 0x91) != '\0') {
            ShaderRD::_initialize_version(pVVar2);
            for (lVar41 = 0;
                (lVar28 = *(long *)(lVar29 + 0x9d0), lVar28 != 0 &&
                (lVar41 < *(long *)(lVar28 + -8))); lVar41 = lVar41 + 1) {
              if (*(char *)(lVar28 + lVar41) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar15);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar15);
              }
            }
          }
          lVar29 = *(long *)(lVar29 + 0x990);
          if (lVar29 == 0) goto LAB_001161e1;
          lVar41 = *(long *)(lVar29 + -8);
          if (lVar41 < 7) goto LAB_001161e4;
          uVar36 = (ulong)*(uint *)(lVar29 + 0x18);
          lVar29 = *(long *)(lVar27 + 0x68);
          if (lVar29 == 0) goto LAB_00116775;
          lVar41 = *(long *)(lVar29 + -8);
          if (lVar41 <= (long)uVar36) goto LAB_00112d93;
          if (*(long *)(lVar29 + uVar36 * 8) != 0) {
            ShaderRD::_compile_version_end(pVVar2,iVar15);
          }
          if (*(char *)(lVar27 + 0x90) != '\0') {
            lVar29 = *(long *)(lVar27 + 0x88);
            if (lVar29 == 0) goto LAB_001161e1;
            lVar41 = *(long *)(lVar29 + -8);
            if (6 < lVar41) {
              uVar47 = *(undefined8 *)(lVar29 + 0x30);
              goto LAB_001149b9;
            }
            goto LAB_001161e4;
          }
          goto LAB_00115127;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar47 = 0;
      }
LAB_001149b9:
      uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                         (uVar21,(StrRange *)&local_308,uVar47,0);
      *(undefined8 *)(this + 0x238) = uVar21;
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
      lStack_300 = 0;
      local_c8 = 0;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      local_e8 = (char *)lVar32;
      local_d8 = *(long *)(this + 0x188);
      RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
      lVar32 = 0;
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
      CowData<RID>::_unref((CowData<RID> *)local_88);
      CowData<RID>::_unref((CowData<RID> *)&local_c8);
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      local_d8 = 0;
      local_c8 = 0;
      local_e8 = (char *)lVar40;
      do {
        lVar40 = *(long *)(this + lVar32 + 0x1a0);
        if (local_c8 == 0) {
          if (local_d8 != 0) {
            Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
            Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
            local_d8 = 0;
            lVar40 = local_d8;
          }
        }
        else {
          Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
          lVar40 = local_d8;
        }
        local_d8 = lVar40;
        lVar32 = lVar32 + 8;
      } while (lVar32 != 0x40);
      RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
      CowData<RID>::_unref((CowData<RID> *)local_88);
      CowData<RID>::_unref((CowData<RID> *)&local_c8);
      local_c8 = 0;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      local_e8 = (char *)lVar23;
      local_d8 = *(long *)(this + 0x1e0);
      RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
      CowData<RID>::_unref((CowData<RID> *)local_88);
      CowData<RID>::_unref((CowData<RID> *)&local_c8);
      uVar21 = RenderingDevice::get_singleton();
      lVar32 = *(long *)(this + 0x180);
      uVar36 = *(ulong *)(lVar32 + 0xad0);
      if (*(long *)(lVar32 + 0x970) == 0) {
        lVar40 = 0;
LAB_001157f3:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,7,lVar40,
                   "p_variant","variant_defines.size()","",false,false);
      }
      else {
        lVar40 = *(long *)(*(long *)(lVar32 + 0x970) + -8);
        if (lVar40 < 8) goto LAB_001157f3;
        lVar40 = *(long *)(lVar32 + 0x980);
        if (lVar40 == 0) {
LAB_001160d2:
          lVar41 = 0;
LAB_001160d5:
          uVar36 = 7;
LAB_00112d93:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar36,lVar41,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar41 = *(long *)(lVar40 + -8);
        if (lVar41 < 8) goto LAB_001160d5;
        if (*(char *)(lVar40 + 7) == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7);
          uVar20 = 0;
          goto LAB_00115307;
        }
        if ((uVar36 == 0) || (*(uint *)(lVar32 + 0xa2c) <= (uint)uVar36)) {
LAB_00116045:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa);
          uVar20 = 0;
          goto LAB_00115307;
        }
        lVar40 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar32 + 0xa28)) * 0xa0 +
                 *(long *)(*(long *)(lVar32 + 0xa18) +
                          ((uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar32 + 0xa28)) * 8);
        if (*(int *)(lVar40 + 0x98) != (int)(uVar36 >> 0x20)) {
          if (*(int *)(lVar40 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar20);
          }
          goto LAB_00116045;
        }
        pVVar2 = (Version *)(lVar32 + 0x958);
        iVar15 = (int)lVar40;
        if (*(char *)(lVar40 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          for (lVar29 = 0;
              (lVar23 = *(long *)(lVar32 + 0x9d0), lVar23 != 0 && (lVar29 < *(long *)(lVar23 + -8)))
              ; lVar29 = lVar29 + 1) {
            if (*(char *)(lVar23 + lVar29) == '\0') {
              ShaderRD::_allocate_placeholders(pVVar2,iVar15);
            }
            else {
              ShaderRD::_compile_version_start(pVVar2,iVar15);
            }
          }
        }
        lVar32 = *(long *)(lVar32 + 0x990);
        if (lVar32 == 0) goto LAB_001160d2;
        lVar41 = *(long *)(lVar32 + -8);
        if (lVar41 < 8) goto LAB_001160d5;
        uVar36 = (ulong)*(uint *)(lVar32 + 0x1c);
        lVar32 = *(long *)(lVar40 + 0x68);
        if (lVar32 == 0) goto LAB_00116775;
        lVar41 = *(long *)(lVar32 + -8);
        if (lVar41 <= (long)uVar36) goto LAB_00112d93;
        if (*(long *)(lVar32 + uVar36 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar15);
        }
        if (*(char *)(lVar40 + 0x90) != '\0') {
          lVar32 = *(long *)(lVar40 + 0x88);
          if (lVar32 == 0) goto LAB_001160d2;
          lVar41 = *(long *)(lVar32 + -8);
          if (7 < lVar41) {
            uVar20 = *(undefined8 *)(lVar32 + 0x38);
            goto LAB_00115307;
          }
          goto LAB_001160d5;
        }
      }
      uVar20 = 0;
LAB_00115307:
      uVar39 = 0;
      uVar20 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                         (uVar21,(StrRange *)&local_308,uVar20);
      *(undefined8 *)(this + 0x248) = uVar20;
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
      do {
        if (*(uint *)(this + 600) <= uVar39) {
          uVar14 = RendererSceneRender::environment_get_sdfgi_bounce_feedback
                             (RendererSceneRenderRD::singleton,param_2);
          uVar20 = RendererSceneRenderRD::singleton;
          *(undefined4 *)(this + 0x2e4) = uVar14;
          uVar14 = RendererSceneRender::environment_get_sdfgi_energy(uVar20,param_2);
          uVar20 = RendererSceneRenderRD::singleton;
          *(undefined4 *)(this + 0x2ec) = uVar14;
          uVar14 = RendererSceneRender::environment_get_sdfgi_normal_bias(uVar20,param_2);
          uVar20 = RendererSceneRenderRD::singleton;
          *(undefined4 *)(this + 0x2f0) = uVar14;
          uVar14 = RendererSceneRender::environment_get_sdfgi_probe_bias(uVar20,param_2);
          uVar20 = RendererSceneRenderRD::singleton;
          *(undefined4 *)(this + 0x2f4) = uVar14;
          SVar13 = (SDFGI)RendererSceneRender::environment_get_sdfgi_read_sky_light(uVar20,param_2);
          this[0x2e8] = SVar13;
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_f8);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_138);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_178);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_1b8);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_1f8);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_238);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_278);
          CowData<RenderingDeviceCommons::DataFormat>::_unref
                    ((CowData<RenderingDeviceCommons::DataFormat> *)&local_2b8);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar32 = 0;
        lStack_300 = 0;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_d8 = 0;
        local_c8 = 0;
        local_e8 = (char *)_LC185;
        do {
          if ((uint)lVar32 < *(uint *)(this + 600)) {
            lVar40 = *(long *)(lVar32 * 0xc0 + *(long *)(this + 0x260));
            if (local_c8 != 0) goto LAB_00115395;
LAB_001153cc:
            if (local_d8 != 0) {
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
              local_d8 = 0;
              lVar40 = local_d8;
            }
          }
          else {
            lVar40 = *(long *)(lVar16 + 0x70);
            if (local_c8 == 0) goto LAB_001153cc;
LAB_00115395:
            Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
            lVar40 = local_d8;
          }
          local_d8 = lVar40;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 8);
        lVar32 = 0;
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_d8 = 0;
        local_c8 = 0;
        local_e8 = (char *)_LC186;
        do {
          if ((uint)lVar32 < *(uint *)(this + 600)) {
            lVar40 = *(long *)(lVar32 * 0xc0 + *(long *)(this + 0x260) + 8);
            if (local_c8 != 0) goto LAB_00115480;
LAB_001154b7:
            if (local_d8 != 0) {
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0);
              local_d8 = 0;
              lVar40 = local_d8;
            }
          }
          else {
            lVar40 = *(long *)(lVar16 + 0x70);
            if (local_c8 == 0) goto LAB_001154b7;
LAB_00115480:
            Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
            lVar40 = local_d8;
          }
          local_d8 = lVar40;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 8);
        lVar32 = 0;
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_d8 = 0;
        local_c8 = 0;
        local_e8 = (char *)_LC187;
        do {
          if ((uint)lVar32 < *(uint *)(this + 600)) {
            lVar40 = *(long *)(lVar32 * 0xc0 + *(long *)(this + 0x260) + 0x10);
            if (local_c8 != 0) goto LAB_00115541;
LAB_00115578:
            if (local_d8 != 0) {
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
              local_d8 = 0;
              lVar40 = local_d8;
            }
          }
          else {
            lVar40 = *(long *)(lVar16 + 0x70);
            if (local_c8 == 0) goto LAB_00115578;
LAB_00115541:
            Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
            lVar40 = local_d8;
          }
          local_d8 = lVar40;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 8);
        lVar32 = 0;
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_d8 = 0;
        local_c8 = 0;
        local_e8 = (char *)_LC188;
        do {
          if ((uint)lVar32 < *(uint *)(this + 600)) {
            lVar40 = *(long *)(lVar32 * 0xc0 + *(long *)(this + 0x260) + 0x18);
            if (local_c8 != 0) goto LAB_00115634;
LAB_0011566f:
            if (local_d8 != 0) {
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,local_d8);
              Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
              local_d8 = 0;
              lVar40 = local_d8;
            }
          }
          else {
            lVar40 = *(long *)(lVar16 + 0x70);
            if (local_c8 == 0) goto LAB_0011566f;
LAB_00115634:
            Vector<RID>::push_back((Vector<RID> *)&uStack_d0,lVar40);
            lVar40 = local_d8;
          }
          local_d8 = lVar40;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 8);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        local_c8 = 0;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_e8 = (char *)_LC190;
        local_d8 = *(undefined8 *)(lVar17 + 0x50);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        local_c8 = 0;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_e8 = (char *)_LC274;
        local_d8 = *(long *)(this + 0x2d8);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        local_c8 = 0;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_e8 = (char *)_LC262;
        local_d8 = *(long *)(this + 0x270);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uVar37 = *(uint *)(this + 600);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_c8 = 0;
        local_e8 = (char *)_LC192;
        if (uVar37 <= uVar39) {
          uVar25 = (ulong)uVar39;
LAB_00115f56:
          local_c8 = 0;
          uVar36 = (ulong)uVar37;
          uVar24 = uVar25;
LAB_00115f71:
          pcVar46 = "count";
          iVar15 = 0xb2;
          pcVar35 = "./core/templates/local_vector.h";
          goto LAB_00114ede;
        }
        uVar24 = (ulong)uVar39;
        lVar32 = uVar24 * 0xc0;
        local_d8 = *(long *)(*(long *)(this + 0x260) + 0x50 + lVar32);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uVar37 = *(uint *)(this + 600);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_c8 = 0;
        local_e8 = (char *)_LC193;
        if (uVar37 <= uVar39) {
LAB_00115f97:
          uVar36 = (ulong)uVar37;
          goto LAB_00115f71;
        }
        local_d8 = *(undefined8 *)(*(long *)(this + 0x260) + 0x58 + lVar32);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        local_c8 = 0;
        local_e8 = (char *)_LC275;
        local_d8 = *(long *)(this + 0x290);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        local_c8 = 0;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_e8 = (char *)_LC276;
        local_d8 = *(long *)(this + 0x298);
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uVar37 = *(uint *)(this + 600);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        local_d8 = 0;
        local_c8 = 0;
        local_e8 = (char *)_LC277;
        if (uVar37 == 1) {
          if (uVar39 != 0) {
            uVar36 = 1;
            goto LAB_00115f71;
          }
          local_d8 = *(undefined8 *)(*(long *)(this + 0x260) + 0x58);
        }
        else {
          if (uVar39 < uVar37 - 1) {
            uVar4 = uVar39 + 1;
          }
          else {
            uVar4 = uVar39 - 1;
          }
          uVar25 = (ulong)uVar4;
          if (uVar37 <= uVar4) goto LAB_00115f56;
          local_d8 = *(undefined8 *)(uVar25 * 0xc0 + *(long *)(this + 0x260) + 0x58);
        }
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)&local_308);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        local_c8 = 0;
        local_e8 = (char *)_LC278;
        local_d8 = *(long *)(this + 0x288);
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        RenderingDevice::Uniform::Uniform((Uniform *)&local_a8,(String *)&local_e8);
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_308,(TextureFormat *)&local_a8);
        CowData<RID>::_unref((CowData<RID> *)local_88);
        CowData<RID>::_unref((CowData<RID> *)&local_c8);
        uVar20 = RenderingDevice::get_singleton();
        lVar40 = *(long *)(this + 0x180);
        uVar36 = *(ulong *)(lVar40 + 0x1620);
        if (*(long *)(lVar40 + 0x14c0) == 0) {
          lVar29 = 0;
LAB_00115ded:
          _err_print_index_error
                    ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,
                     lVar29,"p_variant","variant_defines.size()","",false,false);
LAB_00115e26:
          uVar21 = 0;
        }
        else {
          lVar29 = *(long *)(*(long *)(lVar40 + 0x14c0) + -8);
          if (lVar29 < 1) goto LAB_00115ded;
          pcVar35 = *(char **)(lVar40 + 0x14d0);
          if (pcVar35 == (char *)0x0) goto LAB_00112ee8;
          lVar41 = *(long *)(pcVar35 + -8);
          if (lVar41 < 1) goto LAB_00112eeb;
          if (*pcVar35 != '\0') {
            if ((uVar36 == 0) || (*(uint *)(lVar40 + 0x157c) <= (uint)uVar36)) {
LAB_00115ead:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.",0);
              uVar21 = 0;
              goto LAB_00115d70;
            }
            uVar25 = (uVar36 & 0xffffffff) / (ulong)*(uint *)(lVar40 + 0x1578);
            lVar29 = ((uVar36 & 0xffffffff) % (ulong)*(uint *)(lVar40 + 0x1578)) * 0xa0 +
                     *(long *)(*(long *)(lVar40 + 0x1568) + uVar25 * 8);
            if (*(int *)(lVar29 + 0x98) != (int)(uVar36 >> 0x20)) {
              if (*(int *)(lVar29 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar25);
              }
              goto LAB_00115ead;
            }
            pVVar2 = (Version *)(lVar40 + 0x14a8);
            iVar15 = (int)lVar29;
            if (*(char *)(lVar29 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              for (lVar23 = 0;
                  (lVar27 = *(long *)(lVar40 + 0x1520), lVar27 != 0 &&
                  (lVar23 < *(long *)(lVar27 + -8))); lVar23 = lVar23 + 1) {
                if (*(char *)(lVar27 + lVar23) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2,iVar15);
                }
                else {
                  ShaderRD::_compile_version_start(pVVar2,iVar15);
                }
              }
            }
            puVar6 = *(uint **)(lVar40 + 0x14e0);
            if (puVar6 != (uint *)0x0) {
              lVar41 = *(long *)(puVar6 + -2);
              if (0 < lVar41) {
                uVar36 = (ulong)*puVar6;
                lVar40 = *(long *)(lVar29 + 0x68);
                if (lVar40 != 0) {
                  lVar41 = *(long *)(lVar40 + -8);
                  if ((long)uVar36 < lVar41) {
                    if (*(long *)(lVar40 + uVar36 * 8) != 0) {
                      ShaderRD::_compile_version_end(pVVar2,iVar15);
                    }
                    if (*(char *)(lVar29 + 0x90) == '\0') goto LAB_00115e26;
                    puVar5 = *(undefined8 **)(lVar29 + 0x88);
                    if (puVar5 != (undefined8 *)0x0) {
                      lVar41 = puVar5[-1];
                      if (0 < lVar41) {
                        uVar21 = *puVar5;
                        goto LAB_00115d70;
                      }
                      goto LAB_00112eeb;
                    }
                    goto LAB_00112ee8;
                  }
                  goto LAB_00112d93;
                }
                goto LAB_00116775;
              }
              goto LAB_00112eeb;
            }
            goto LAB_00112ee8;
          }
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0)
          ;
          uVar21 = 0;
        }
LAB_00115d70:
        uVar20 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                           (uVar20,(StrRange *)&local_308,uVar21,0,0);
        uVar37 = *(uint *)(this + 600);
        if (uVar37 <= uVar39) goto LAB_00115f97;
        uVar39 = uVar39 + 1;
        *(undefined8 *)(*(long *)(this + 0x260) + 0xa8 + lVar32) = uVar20;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&lStack_300);
      } while( true );
    }
  }
LAB_00116493:
  uVar24 = 0;
  iVar15 = 0x38;
  pcVar35 = "./core/templates/vector.h";
  pcVar46 = "((Vector<T> *)(this))->_cowdata.size()";
LAB_00114ede:
  _err_print_index_error("operator[]",pcVar35,iVar15,uVar24,uVar36,"p_index",pcVar46,"",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* RendererRD::GI::create_sdfgi(RID, Vector3 const&, unsigned int) */

Ref<RendererRD::GI::SDFGI> *
RendererRD::GI::create_sdfgi
          (Ref<RendererRD::GI::SDFGI> *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined4 param_5)

{
  *(undefined8 *)param_1 = 0;
  Ref<RendererRD::GI::SDFGI>::instantiate<>(param_1);
  SDFGI::create(*(SDFGI **)param_1,param_3,param_4,param_5,param_2);
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00116c47) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::voxel_gi_allocate_data(RID, Transform3D const&, AABB const&, Vector3i const&,
   Vector<unsigned char> const&, Vector<unsigned char> const&, Vector<unsigned char> const&,
   Vector<int> const&) */

void __thiscall
RendererRD::GI::voxel_gi_allocate_data
          (GI *this,ulong param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
          long param_6,long param_7,long param_8,long param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  TextureFormat *pTVar10;
  char *pcVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_c0 [2];
  long local_b0;
  char *local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    pauVar13 = (undefined1 (*) [16])
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
               *(long *)(*(long *)(this + 0x10) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
    if (*(int *)pauVar13[0xe] == (int)(param_2 >> 0x20)) {
      if (*(long *)*pauVar13 != 0) {
        uVar9 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar9,*(undefined8 *)*pauVar13);
        uVar9 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar9,*(undefined8 *)(*pauVar13 + 8));
        if (*(long *)pauVar13[1] != 0) {
          uVar9 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar9,*(undefined8 *)pauVar13[1]);
        }
        *(undefined8 *)pauVar13[1] = 0;
        *(undefined8 *)(pauVar13[1] + 8) = 0;
        *(undefined4 *)pauVar13[3] = 0;
        *pauVar13 = (undefined1  [16])0x0;
      }
      uVar9 = param_3[1];
      uVar2 = *param_4;
      uVar3 = param_4[1];
      *(undefined8 *)(pauVar13[3] + 4) = *param_3;
      *(undefined8 *)(pauVar13[3] + 0xc) = uVar9;
      uVar9 = param_3[3];
      *(undefined8 *)(pauVar13[4] + 4) = param_3[2];
      *(undefined8 *)(pauVar13[4] + 0xc) = uVar9;
      uVar4 = param_3[4];
      uVar5 = param_3[5];
      *(undefined8 *)(pauVar13[6] + 4) = uVar2;
      *(undefined8 *)(pauVar13[6] + 0xc) = uVar3;
      uVar9 = param_4[2];
      *(undefined8 *)(pauVar13[5] + 4) = uVar4;
      *(undefined8 *)(pauVar13[5] + 0xc) = uVar5;
      *(undefined8 *)(pauVar13[7] + 4) = uVar9;
      *(undefined8 *)(pauVar13[7] + 0xc) = *param_5;
      *(undefined4 *)(pauVar13[8] + 4) = *(undefined4 *)(param_5 + 1);
      if (*(long *)(pauVar13[2] + 8) != *(long *)(param_9 + 8)) {
        CowData<int>::_ref((CowData<int> *)(pauVar13[2] + 8),(CowData *)(param_9 + 8));
      }
      if ((*(long *)(param_6 + 8) != 0) &&
         (uVar8 = *(ulong *)(*(long *)(param_6 + 8) + -8), uVar8 != 0)) {
        if ((uVar8 & 0x1f) != 0) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00116fbd;
          uVar9 = 0x5a;
          pcVar11 = "Condition \"p_octree_cells.size() % 32 != 0\" is true.";
          goto LAB_00116e19;
        }
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 0x1f;
        }
        if (*(long *)(param_7 + 8) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(*(long *)(param_7 + 8) + -8);
        }
        iVar7 = (int)((long)uVar8 >> 5);
        if (iVar7 << 4 != lVar12) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar9 = 0x5e;
            pcVar11 = "Condition \"p_data_cells.size() != (int)cell_count * 16\" is true.";
            goto LAB_00116e19;
          }
          goto LAB_00116fbd;
        }
        *(int *)pauVar13[3] = iVar7;
        uVar9 = RenderingDevice::get_singleton();
        if (*(long *)(param_6 + 8) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(param_6 + 8) + -8);
        }
        uVar9 = RenderingDevice::storage_buffer_create(uVar9,uVar6,param_6,0);
        *(undefined8 *)*pauVar13 = uVar9;
        if (*(long *)(param_6 + 8) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(param_6 + 8) + -8);
        }
        *(undefined4 *)(pauVar13[1] + 8) = uVar6;
        uVar9 = RenderingDevice::get_singleton();
        if (*(long *)(param_7 + 8) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(param_7 + 8) + -8);
        }
        uVar9 = RenderingDevice::storage_buffer_create(uVar9,uVar6,param_7,0);
        *(undefined8 *)(*pauVar13 + 8) = uVar9;
        if (*(long *)(param_7 + 8) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(param_7 + 8) + -8);
        }
        *(undefined4 *)(pauVar13[1] + 0xc) = uVar6;
        lVar12 = *(long *)(param_8 + 8);
        if ((lVar12 == 0) || (*(long *)(lVar12 + -8) == 0)) goto LAB_00116aeb;
        local_88 = 8;
        local_50 = 0;
        local_84 = *(undefined8 *)(pauVar13[7] + 0xc);
        local_58 = 0;
        local_7c = *(undefined4 *)(pauVar13[8] + 4);
        local_78 = 0x100000001;
        local_70 = 2;
        local_68 = 0xc1;
        local_b0 = 0;
        lStack_a0 = 0;
        plVar1 = (long *)(lVar12 + -0x10);
        do {
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_00116c39;
          LOCK();
          lVar15 = *plVar1;
          bVar16 = lVar12 == lVar15;
          if (bVar16) {
            *plVar1 = lVar12 + 1;
            lVar15 = lVar12;
          }
          UNLOCK();
        } while (!bVar16);
        if (lVar15 != -1) {
          lStack_a0 = *(long *)(param_8 + 8);
        }
LAB_00116c39:
        lVar12 = lStack_a0;
        iVar7 = CowData<Vector<unsigned_char>>::resize<false>
                          ((CowData<Vector<unsigned_char>> *)&local_b0,1);
        if (iVar7 == 0) {
          if (local_b0 == 0) {
            lVar14 = -1;
            lVar15 = 0;
          }
          else {
            lVar15 = *(long *)(local_b0 + -8);
            lVar14 = lVar15 + -1;
            if (-1 < lVar14) {
              CowData<Vector<unsigned_char>>::_copy_on_write
                        ((CowData<Vector<unsigned_char>> *)&local_b0);
              lVar15 = lVar14 * 0x10 + local_b0;
              if (*(long *)(lVar15 + 8) != lVar12) {
                CowData<unsigned_char>::_ref
                          ((CowData<unsigned_char> *)(lVar15 + 8),(CowData *)&lStack_a0);
              }
              goto LAB_00116cab;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar14,lVar15,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00116cab:
        if (lVar12 != 0) {
          LOCK();
          plVar1 = (long *)(lVar12 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(lStack_a0 + -0x10),false);
          }
        }
        pTVar10 = (TextureFormat *)RenderingDevice::get_singleton();
        local_a8 = (char *)__LC168;
        lStack_a0 = _UNK_00146798;
        local_98 = 6;
        uVar9 = RenderingDevice::texture_create
                          (pTVar10,(TextureView *)&local_88,(Vector *)&local_a8);
        *(undefined8 *)pauVar13[1] = uVar9;
        uVar9 = RenderingDevice::get_singleton();
        local_c0[0] = 0;
        lStack_a0 = 0x13;
        local_a8 = "VoxelGI SDF Texture";
        String::parse_latin1((StrRange *)local_c0);
        RenderingDevice::set_resource_name(uVar9,*(undefined8 *)pauVar13[1],(StrRange *)local_c0);
        lVar12 = local_c0[0];
        if (local_c0[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_c0[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0[0] = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_b0);
        lVar12 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
      }
LAB_00116aeb:
      *(ulong *)(pauVar13[10] + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(pauVar13[10] + 4) >> 0x20) +
                    (int)((ulong)_LC284 >> 0x20),
                    (int)*(undefined8 *)(pauVar13[10] + 4) + (int)_LC284);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Dependency::changed_notify(pauVar13 + 0xb,0);
        return;
      }
      goto LAB_00116fbd;
    }
    if (*(int *)pauVar13[0xe] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar9 = 0x43;
    pcVar11 = "Parameter \"voxel_gi\" is null.";
LAB_00116e19:
    _err_print_error("voxel_gi_allocate_data","servers/rendering/renderer_rd/environment/gi.cpp",
                     uVar9,pcVar11,0,0);
    return;
  }
LAB_00116fbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::VoxelGIInstance::free_resources() */

void __thiscall RendererRD::GI::VoxelGIInstance::free_resources(VoxelGIInstance *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(this + 0x10) != 0) {
    uVar3 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar3,*(undefined8 *)(this + 0x10));
    uVar3 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar3);
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
    CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::resize<false>
              ((CowData<RendererRD::GI::VoxelGIInstance::Mipmap> *)(this + 0x28),0);
  }
  lVar4 = *(long *)(this + 0x38);
  lVar5 = 0;
  while( true ) {
    if ((lVar4 == 0) || (*(long *)(lVar4 + -8) <= lVar5)) {
      CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::resize<false>
                ((CowData<RendererRD::GI::VoxelGIInstance::DynamicMap> *)(this + 0x38),0);
      return;
    }
    uVar3 = RenderingDevice::get_singleton();
    lVar4 = *(long *)(this + 0x38);
    if (lVar4 == 0) goto LAB_00117110;
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 <= lVar5) goto LAB_00117113;
    lVar1 = lVar5 * 0x48;
    RenderingDevice::free(uVar3,*(undefined8 *)(lVar4 + lVar5 * 0x48));
    uVar3 = RenderingDevice::get_singleton();
    if (*(long *)(this + 0x38) == 0) goto LAB_00117110;
    lVar6 = *(long *)(*(long *)(this + 0x38) + -8);
    if (lVar6 <= lVar5) goto LAB_00117113;
    RenderingDevice::free(uVar3);
    lVar4 = *(long *)(this + 0x38);
    if (lVar4 == 0) goto LAB_00117110;
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 <= lVar5) goto LAB_00117113;
    if (*(long *)(lVar4 + 8 + lVar1) != 0) break;
LAB_00117088:
    if (*(long *)(lVar4 + 0x20 + lVar1) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      if (*(long *)(this + 0x38) != 0) {
        lVar6 = *(long *)(*(long *)(this + 0x38) + -8);
        if (lVar6 <= lVar5) goto LAB_00117113;
        RenderingDevice::free(uVar3);
        lVar4 = *(long *)(this + 0x38);
        if (lVar4 != 0) goto LAB_00117090;
      }
      goto LAB_00117110;
    }
LAB_00117090:
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 <= lVar5) goto LAB_00117113;
    if (*(long *)(lVar4 + 0x18 + lVar1) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      if (*(long *)(this + 0x38) != 0) {
        lVar6 = *(long *)(*(long *)(this + 0x38) + -8);
        if (lVar6 <= lVar5) goto LAB_00117113;
        RenderingDevice::free(uVar3);
        lVar4 = *(long *)(this + 0x38);
        if (lVar4 != 0) goto LAB_001170a5;
      }
      goto LAB_00117110;
    }
LAB_001170a5:
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 <= lVar5) goto LAB_00117113;
    if (*(long *)(lVar4 + 0x28 + lVar1) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      if (*(long *)(this + 0x38) == 0) goto LAB_00117110;
      lVar6 = *(long *)(*(long *)(this + 0x38) + -8);
      if (lVar6 <= lVar5) goto LAB_00117113;
      RenderingDevice::free(uVar3);
      lVar4 = *(long *)(this + 0x38);
    }
    lVar5 = lVar5 + 1;
  }
  uVar3 = RenderingDevice::get_singleton();
  if (*(long *)(this + 0x38) != 0) {
    lVar6 = *(long *)(*(long *)(this + 0x38) + -8);
    if (lVar6 <= lVar5) goto LAB_00117113;
    RenderingDevice::free(uVar3);
    lVar4 = *(long *)(this + 0x38);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + -8);
      if (lVar6 <= lVar5) goto LAB_00117113;
      goto LAB_00117088;
    }
  }
LAB_00117110:
  lVar6 = 0;
LAB_00117113:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RendererRD::GI::voxel_gi_instance_free(RID) */

undefined1  [16] __thiscall RendererRD::GI::voxel_gi_instance_free(GI *this,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  VoxelGIInstance *this_00;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  ulong uStack_30;
  
  uVar7 = (uint)param_2;
  iVar5 = (int)(param_2 >> 0x20);
  if ((param_2 == 0) || (*(uint *)(this + 0x7c) <= uVar7)) {
LAB_00117420:
    this_00 = (VoxelGIInstance *)0x0;
  }
  else {
    this_00 = (VoxelGIInstance *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x90 +
              *(long *)(*(long *)(this + 0x68) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8));
    if (*(int *)(this_00 + 0x88) != iVar5) {
      if (0x7ffffffe < *(int *)(this_00 + 0x88) + 0x80000000U) goto LAB_00117420;
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      this_00 = (VoxelGIInstance *)0x0;
    }
  }
  uStack_30 = 0x1172ba;
  VoxelGIInstance::free_resources(this_00);
  if (uVar7 < *(uint *)(this + 0x7c)) {
    uVar3 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78);
    lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x90;
    lVar9 = *(long *)(*(long *)(this + 0x68) + uVar3 * 8) + lVar8;
    if (*(int *)(lVar9 + 0x88) < 0) {
      lVar8 = 0;
      _err_print_error(&_LC52,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0);
    }
    else {
      if (iVar5 != *(int *)(lVar9 + 0x88)) {
        uVar6 = 0x171;
        goto LAB_001173ba;
      }
      if (*(long *)(lVar9 + 0x38) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar9 + 0x38) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar9 + 0x38);
          *(undefined8 *)(lVar9 + 0x38) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar9 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar9 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar9 + 0x28);
          *(undefined8 *)(lVar9 + 0x28) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar9 = *(long *)(this + 0x70);
      *(undefined4 *)(*(long *)(*(long *)(this + 0x68) + uVar3 * 8) + 0x88 + lVar8) = 0xffffffff;
      uVar4 = *(int *)(this + 0x80) - 1;
      *(uint *)(this + 0x80) = uVar4;
      uStack_30 = (ulong)uVar4 % (ulong)*(uint *)(this + 0x78);
      lVar8 = *(long *)(lVar9 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x78)) * 8);
      *(uint *)(lVar8 + uStack_30 * 4) = uVar7;
    }
    auVar10._8_8_ = uStack_30;
    auVar10._0_8_ = lVar8;
    return auVar10;
  }
  uVar6 = 0x161;
LAB_001173ba:
  auVar10 = _err_print_error(&_LC52,"./core/templates/rid_owner.h",uVar6,"Method/function failed.",0
                             ,0);
  return auVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::VoxelGIInstance::update(bool, Vector<RID> const&,
   PagedArray<RenderGeometryInstance*> const&) */

void RendererRD::GI::VoxelGIInstance::update(bool param_1,Vector *param_2,PagedArray *param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  float fVar47;
  undefined4 uVar48;
  byte bVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  undefined4 uVar53;
  int iVar54;
  float fVar55;
  float fVar56;
  uint uVar57;
  long lVar58;
  long lVar59;
  void *pvVar60;
  undefined8 uVar61;
  ulong uVar62;
  TextureFormat *pTVar63;
  code *pcVar64;
  undefined8 *puVar65;
  undefined8 uVar66;
  int *piVar67;
  Vector *pVVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  long in_RCX;
  long lVar71;
  Transform3D *pTVar72;
  int iVar73;
  int *piVar74;
  uint *puVar75;
  Vector3i *pVVar76;
  undefined7 in_register_00000039;
  VoxelGIInstance *this;
  long *plVar77;
  long *plVar78;
  Vector3i *pVVar79;
  long *plVar80;
  char *in_R9;
  ulong uVar81;
  ulong uVar82;
  ulong uVar83;
  long lVar84;
  long in_FS_OFFSET;
  bool bVar85;
  byte bVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  undefined1 auVar103 [12];
  undefined1 auVar104 [12];
  float *local_4c0;
  undefined8 local_4b0;
  float local_4a8;
  uint local_498;
  int local_490;
  CowData<RenderingDevice::Uniform> *local_488;
  CowData *local_480;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 *local_458;
  int local_3f8;
  undefined1 local_3a8 [8];
  int *local_3a0;
  Vector<RID> local_398 [8];
  long local_390;
  long local_388;
  long local_380;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined8 local_358;
  undefined4 local_348;
  undefined1 local_344 [12];
  undefined4 local_338;
  int local_334;
  undefined8 local_330;
  undefined4 local_328;
  long local_318;
  undefined2 local_310;
  uint local_308;
  uint uStack_304;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  long local_2d8;
  undefined2 local_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_280 [16];
  undefined1 local_270 [12];
  undefined1 local_260 [12];
  int local_254;
  undefined8 local_250;
  float local_248;
  undefined1 local_244 [12];
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [12];
  undefined1 local_20c [12];
  Vector3 local_1f8 [16];
  undefined1 local_1e8 [16];
  float local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  Transform3D local_1c8 [48];
  Transform3D local_198 [48];
  Transform3D local_168 [48];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  undefined8 local_a8;
  int local_a0;
  uint local_9c;
  undefined8 local_98;
  int local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  uint local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_40;
  
  this = (VoxelGIInstance *)CONCAT71(in_register_00000039,param_1);
  bVar86 = 0;
  local_490._0_1_ = SUB81(param_2,0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar58 = RendererRD::LightStorage::get_singleton();
  lVar59 = RendererRD::MaterialStorage::get_singleton();
  iVar50 = voxel_gi_get_data_version(*(GI **)this,*(undefined8 *)(this + 8));
  if (*(int *)(this + 0x48) == iVar50) {
    if (this[0x50] != (VoxelGIInstance)0x0) {
LAB_001188ed:
      local_4c0 = &local_c8;
      uVar61 = RenderingDevice::get_singleton();
      in_R9 = (char *)0x0;
      local_c8 = 0.0;
      fStack_c4 = 0.0;
      fStack_c0 = 0.0;
      uStack_bc = 0;
      RenderingDevice::texture_clear(uVar61,*(undefined8 *)(this + 0x10),local_4c0);
    }
    if (local_490._0_1_ != (VoxelGIInstance)0x0) goto LAB_001177b5;
    bVar85 = false;
    if (*(long *)(in_RCX + 0x28) != 0) goto LAB_001177ba;
    if (this[0x50] != (VoxelGIInstance)0x0) {
      uVar51 = 0;
      goto LAB_0011752e;
    }
  }
  else {
    free_resources(this);
    auVar103 = (**(code **)(**(long **)this + 0x38))(*(long **)this,*(undefined8 *)(this + 8));
    uVar51 = auVar103._8_4_;
    uVar100 = auVar103._0_4_;
    uVar101 = auVar103._4_4_;
    if ((uVar100 != 0 || uVar101 != 0) || uVar51 != 0) {
      local_244 = auVar103;
      (**(code **)(**(long **)this + 0x58))(local_3a8,*(long **)this,*(undefined8 *)(this + 8));
      local_338 = 1;
      local_318 = 0;
      local_310 = 0;
      local_348 = 0x24;
      local_330 = 2;
      if (local_3a0 == (int *)0x0) {
        local_334 = 0;
      }
      else {
        local_334 = local_3a0[-2];
      }
      local_328 = 0x109;
      local_344 = auVar103;
      pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
      local_2c8._8_8_ = _UNK_00146798;
      local_2c8._0_8_ = __LC168;
      uStack_300 = 0;
      uStack_2fc = 0;
      local_2b8 = CONCAT44(local_2b8._4_4_,6);
      uVar61 = RenderingDevice::texture_create
                         (pTVar63,(TextureView *)&local_348,(Vector *)local_2c8);
      *(undefined8 *)(this + 0x10) = uVar61;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&uStack_300);
      uVar61 = RenderingDevice::get_singleton();
      local_308 = 0;
      uStack_304 = 0;
      local_2c8._8_8_ = 0x18;
      local_2c8._0_8_ = "VoxelGI Instance Texture";
      String::parse_latin1((StrRange *)&local_308);
      RenderingDevice::set_resource_name(uVar61,*(undefined8 *)(this + 0x10),(StrRange *)&local_308)
      ;
      if (CONCAT44(uStack_304,local_308) != 0) {
        LOCK();
        plVar78 = (long *)(CONCAT44(uStack_304,local_308) + -0x10);
        *plVar78 = *plVar78 + -1;
        UNLOCK();
        if (*plVar78 == 0) {
          lVar84 = CONCAT44(uStack_304,local_308);
          local_308 = 0;
          uStack_304 = 0;
          Memory::free_static((void *)(lVar84 + -0x10),false);
        }
      }
      uVar61 = RenderingDevice::get_singleton();
      in_R9 = (char *)0x0;
      local_c8 = 0.0;
      fStack_c4 = 0.0;
      fStack_c0 = 0.0;
      uStack_bc = 0;
      RenderingDevice::texture_clear(uVar61,*(undefined8 *)(this + 0x10),&local_c8);
      if (local_3a0 == (int *)0x0) {
        iVar73 = 0;
      }
      else {
        if (*(long *)(local_3a0 + -2) < 1) {
          iVar73 = 0;
        }
        else {
          iVar73 = 0;
          piVar67 = local_3a0;
          do {
            iVar73 = iVar73 + *piVar67;
            piVar67 = piVar67 + 1;
          } while (local_3a0 + *(long *)(local_3a0 + -2) != piVar67);
        }
        iVar73 = iVar73 << 4;
      }
      uVar61 = RenderingDevice::get_singleton();
      local_2c8._8_8_ = 0;
      uVar61 = RenderingDevice::storage_buffer_create(uVar61,iVar73,(Vector *)local_2c8);
      *(undefined8 *)(this + 0x18) = uVar61;
      uVar61 = local_2c8._8_8_;
      if (local_2c8._8_8_ != 0) {
        LOCK();
        plVar78 = (long *)(local_2c8._8_8_ + -0x10);
        *plVar78 = *plVar78 + -1;
        UNLOCK();
        if (*plVar78 == 0) {
          local_2c8._8_8_ = 0;
          Memory::free_static((void *)(uVar61 + -0x10),false);
        }
      }
      for (uVar62 = 0; (local_3a0 != (int *)0x0 && ((long)uVar62 < *(long *)(local_3a0 + -2)));
          uVar62 = uVar62 + 1) {
        uVar61 = RenderingDevice::get_singleton();
        in_R9 = (char *)0x1;
        uStack_2f8 = 6;
        local_308 = (uint)__LC168;
        uStack_304 = (uint)((ulong)__LC168 >> 0x20);
        uStack_300 = (uint)_UNK_00146798;
        uStack_2fc = (undefined4)((ulong)_UNK_00146798 >> 0x20);
        uVar61 = RenderingDevice::texture_create_shared_from_slice
                           (uVar61,(StrRange *)&local_308,*(undefined8 *)(this + 0x10),0,
                            uVar62 & 0xffffffff,1,2,0);
        auVar37._8_4_ = local_280._8_4_;
        auVar37._0_8_ = local_280._0_8_;
        auVar36._8_4_ = local_280._8_4_;
        auVar36._0_8_ = local_280._0_8_;
        auVar34._8_4_ = local_280._8_4_;
        auVar34._0_8_ = local_280._0_8_;
        auVar29._8_4_ = local_100;
        auVar29._0_8_ = local_108;
        auVar28._8_4_ = local_100;
        auVar28._0_8_ = local_108;
        auVar26._8_4_ = local_100;
        auVar26._0_8_ = local_108;
        auVar23._8_4_ = local_20c._8_4_;
        auVar23._0_8_ = local_20c._0_8_;
        auVar22._8_4_ = local_20c._8_4_;
        auVar22._0_8_ = local_20c._0_8_;
        auVar20._8_4_ = local_20c._8_4_;
        auVar20._0_8_ = local_20c._0_8_;
        auVar17._8_4_ = local_218._8_4_;
        auVar17._0_8_ = local_218._0_8_;
        auVar16._8_4_ = local_218._8_4_;
        auVar16._0_8_ = local_218._0_8_;
        auVar14._8_4_ = local_218._8_4_;
        auVar14._0_8_ = local_218._0_8_;
        auVar11._8_4_ = local_260._8_4_;
        auVar11._0_8_ = local_260._0_8_;
        auVar10._8_4_ = local_260._8_4_;
        auVar10._0_8_ = local_260._0_8_;
        auVar8._8_4_ = local_260._8_4_;
        auVar8._0_8_ = local_260._0_8_;
        auVar5._8_4_ = local_270._8_4_;
        auVar5._0_8_ = local_270._0_8_;
        auVar104._8_4_ = local_270._8_4_;
        auVar104._0_8_ = local_270._0_8_;
        auVar103._8_4_ = local_270._8_4_;
        auVar103._0_8_ = local_270._0_8_;
        local_2c8._0_8_ = uVar61;
        if (local_3a0 == (int *)0x0) {
          uVar81 = 0;
          uVar83 = 0;
          goto LAB_001188a1;
        }
        uVar81 = *(ulong *)(local_3a0 + -2);
        uVar102 = ((int)uVar81 + -1) - (int)uVar62;
        if (uVar102 == 0) {
          iVar73 = 0;
          uVar82 = 0;
        }
        else {
          if ((long)uVar81 < 1) {
            uVar83 = 0;
            local_270 = auVar104;
            local_260 = auVar10;
            local_218 = auVar16;
            local_20c = auVar22;
            _local_108 = auVar28;
            local_280._0_12_ = auVar36;
            goto LAB_001188a1;
          }
          iVar73 = 0;
          uVar82 = 1;
          while (iVar73 = iVar73 + local_3a0[uVar82 - 1], uVar82 != uVar102) {
            bVar85 = uVar82 == uVar81;
            uVar83 = uVar81;
            uVar82 = uVar82 + 1;
            local_270 = auVar5;
            local_260 = auVar11;
            local_218 = auVar17;
            local_20c = auVar23;
            _local_108 = auVar29;
            local_280._0_12_ = auVar37;
            if (bVar85) goto LAB_001188a1;
          }
        }
        uVar83 = uVar82;
        local_270 = auVar103;
        local_260 = auVar8;
        local_218 = auVar14;
        local_20c = auVar20;
        _local_108 = auVar26;
        local_280._0_12_ = auVar34;
        if ((long)uVar81 <= (long)uVar82) goto LAB_001188a1;
        iVar52 = local_3a0[uVar102];
        local_380 = 0;
        uVar70 = voxel_gi_get_octree_buffer(*(GI **)this,*(undefined8 *)(this + 8));
        uStack_2f8 = (undefined4)uVar70;
        uStack_2f4 = (undefined4)((ulong)uVar70 >> 0x20);
        local_308 = (uint)_LC209;
        uStack_304 = (uint)((ulong)_LC209 >> 0x20);
        uStack_300 = uStack_300 & 0xffffff00;
        local_2e8 = 0;
        uStack_2e4 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(StrRange *)&local_308);
        uVar70 = voxel_gi_get_data_buffer(*(GI **)this,*(undefined8 *)(this + 8));
        uStack_2f8 = (undefined4)uVar70;
        uStack_2f4 = (undefined4)((ulong)uVar70 >> 0x20);
        local_308 = (uint)_LC287;
        uStack_304 = (uint)((ulong)_LC287 >> 0x20);
        uStack_300 = uStack_300 & 0xffffff00;
        local_2e8 = 0;
        uStack_2e4 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(StrRange *)&local_308);
        uStack_300 = uStack_300 & 0xffffff00;
        uStack_2f8 = (undefined4)*(undefined8 *)(this + 0x18);
        uStack_2f4 = (undefined4)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
        local_308 = (uint)_LC269;
        uStack_304 = (uint)((ulong)_LC269 >> 0x20);
        local_2e8 = 0;
        uStack_2e4 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(StrRange *)&local_308);
        uVar70 = voxel_gi_get_sdf_texture(*(GI **)this,*(undefined8 *)(this + 8));
        uStack_2f8 = (undefined4)uVar70;
        uStack_2f4 = (undefined4)((ulong)uVar70 >> 0x20);
        local_308 = (uint)_LC288;
        uStack_304 = (uint)(_LC288 >> 0x20);
        uStack_300 = uStack_300 & 0xffffff00;
        local_2e8 = 0;
        uStack_2e4 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(StrRange *)&local_308);
        uStack_300 = uStack_300 & 0xffffff00;
        local_308 = (uint)_LC289;
        uStack_304 = (uint)((ulong)_LC289 >> 0x20);
        uStack_2f8 = (undefined4)*(undefined8 *)(lVar59 + 0x90);
        uStack_2f4 = (undefined4)((ulong)*(undefined8 *)(lVar59 + 0x90) >> 0x20);
        local_2e8 = 0;
        uStack_2e4 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(StrRange *)&local_308);
        local_378._8_8_ = 0;
        if (local_380 != 0) {
          CowData<RenderingDevice::Uniform>::_ref
                    ((CowData<RenderingDevice::Uniform> *)(local_378 + 8),(CowData *)&local_380);
        }
        local_480 = (CowData *)&local_380;
        local_488 = (CowData<RenderingDevice::Uniform> *)(local_378 + 8);
        if (uVar62 == 0) {
          local_308 = (uint)_LC290;
          uStack_304 = (uint)(_LC290 >> 0x20);
          uStack_300 = uStack_300 & 0xffffff00;
          uStack_2f8 = (undefined4)*(undefined8 *)(*(long *)this + 200);
          uStack_2f4 = (undefined4)((ulong)*(undefined8 *)(*(long *)this + 200) >> 0x20);
          local_2e8 = 0;
          uStack_2e4 = 0;
          Vector<RenderingDevice::Uniform>::push_back
                    ((Vector<RenderingDevice::Uniform> *)local_378,(StrRange *)&local_308);
          uVar70 = RenderingDevice::get_singleton();
          local_458 = (undefined8 *)
                      RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                (uVar70,(Vector<RenderingDevice::Uniform> *)local_378,
                                 *(undefined8 *)(*(long *)this + 0x250),0);
          local_2c8._8_8_ = local_458;
          if (local_378._8_8_ != local_380) {
            CowData<RenderingDevice::Uniform>::_ref(local_488,local_480);
          }
          uStack_300 = uStack_300 & 0xffffff00;
          local_2e8 = 0;
          uStack_2e4 = 0;
          local_308 = (uint)_LC189;
          uStack_304 = (uint)((ulong)_LC189 >> 0x20);
          uStack_2f8 = (undefined4)*(undefined8 *)(this + 0x10);
          uStack_2f4 = (undefined4)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
          Vector<RenderingDevice::Uniform>::push_back
                    ((Vector<RenderingDevice::Uniform> *)local_378,(StrRange *)&local_308);
          uVar70 = RenderingDevice::get_singleton();
          local_470 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                (uVar70,(Vector<RenderingDevice::Uniform> *)local_378,
                                 *(undefined8 *)(*(long *)this + 600),0);
          local_2b8 = local_470;
        }
        else {
          uVar70 = RenderingDevice::get_singleton();
          local_458 = (undefined8 *)
                      RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                (uVar70,local_378,*(undefined8 *)(*(long *)this + 0x260),0);
          local_470 = 0;
          local_2c8._8_8_ = local_458;
        }
        CowData<RenderingDevice::Uniform>::_unref(local_488);
        uStack_300 = uStack_300 & 0xffffff00;
        local_308 = (uint)_LC259;
        uStack_304 = (uint)((ulong)_LC259 >> 0x20);
        uStack_2f8 = (undefined4)uVar61;
        uStack_2f4 = (undefined4)((ulong)uVar61 >> 0x20);
        local_2e8 = 0;
        uStack_2e4 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(StrRange *)&local_308);
        uVar70 = RenderingDevice::get_singleton();
        uVar70 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                           (uVar70,(Vector<RenderingDevice::Uniform> *)&local_388,
                            *(undefined8 *)(*(long *)this + 0x268),0);
        if (*(long *)(this + 0x28) == 0) {
          lVar84 = 1;
        }
        else {
          lVar84 = *(long *)(*(long *)(this + 0x28) + -8) + 1;
        }
        local_2b0 = uVar70;
        iVar54 = CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::resize<false>
                           ((CowData<RendererRD::GI::VoxelGIInstance::Mipmap> *)(this + 0x28),lVar84
                           );
        if (iVar54 == 0) {
          if (*(long *)(this + 0x28) == 0) {
            lVar71 = -1;
            lVar84 = 0;
          }
          else {
            lVar84 = *(long *)(*(long *)(this + 0x28) + -8);
            lVar71 = lVar84 + -1;
            if (-1 < lVar71) {
              CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::_copy_on_write
                        ((CowData<RendererRD::GI::VoxelGIInstance::Mipmap> *)(this + 0x28));
              puVar65 = (undefined8 *)(lVar71 * 0x30 + *(long *)(this + 0x28));
              puVar65[1] = local_458;
              *puVar65 = uVar61;
              puVar65[2] = local_470;
              puVar65[3] = uVar70;
              *(uint *)(puVar65 + 4) = uVar102;
              *(int *)((long)puVar65 + 0x24) = iVar73;
              *(int *)(puVar65 + 5) = iVar52;
              goto LAB_00118d34;
            }
          }
          in_R9 = "p_index";
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar71,lVar84,"p_index","size()","",
                     false,false);
        }
        else {
          in_R9 = (char *)0x0;
          _err_print_error("push_back","./core/templates/vector.h",0x142);
        }
LAB_00118d34:
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)local_480);
      }
      iVar73 = 0;
      local_3f8 = 4;
      if ((int)uVar100 <= (int)uVar101) {
        uVar100 = uVar101;
      }
      if ((int)uVar51 <= (int)uVar100) {
        uVar51 = uVar100;
      }
LAB_00118d98:
      lVar84 = local_318;
      if (*(long *)(this + 0x28) == 0) {
        lVar71 = 0;
      }
      else {
        lVar71 = *(long *)(*(long *)(this + 0x28) + -8);
      }
      if (lVar71 <= iVar73) {
        if (local_318 != 0) {
          LOCK();
          plVar78 = (long *)(local_318 + -0x10);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_318 = 0;
            Memory::free_static((void *)(lVar84 + -0x10),false);
          }
        }
        piVar67 = local_3a0;
        auVar103 = local_244;
        if (local_3a0 != (int *)0x0) {
          LOCK();
          plVar78 = (long *)(local_3a0 + -4);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_3a0 = (int *)0x0;
            Memory::free_static(piVar67 + -4,false);
            auVar103 = local_244;
          }
        }
        goto LAB_0011b4a5;
      }
      if (local_3f8 == 0) {
        uVar100 = uVar51 >> ((byte)iVar73 & 0x1f);
        local_490 = iVar73;
        iVar73 = iVar73 + 1;
      }
      else {
        local_490 = -1;
        uVar100 = uVar51 << ((byte)local_3f8 & 0x1f);
        local_3f8 = local_3f8 + -1;
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_308 = 0x60;
      uStack_2fc = 1;
      uStack_2f8 = 1;
      uStack_2f4 = 1;
      uStack_2f0 = 1;
      uStack_2ec = 0;
      local_2e8 = 8;
      if ((*(long *)(this + 0x38) == 0) || (*(long *)(*(long *)(this + 0x38) + -8) == 0)) {
        local_2e8 = 10;
      }
      uStack_304 = uVar100;
      uStack_300 = uVar100;
      pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
      local_378._8_8_ = _UNK_00146798;
      local_378._0_8_ = __LC168;
      local_380 = 0;
      local_368 = CONCAT44(local_368._4_4_,6);
      uVar61 = RenderingDevice::texture_create
                         (pTVar63,(TextureView *)&local_308,(Vector *)local_378);
      local_2c8._0_8_ = uVar61;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_380);
      uVar70 = RenderingDevice::get_singleton();
      local_388 = 0;
      local_378._8_8_ = 0x1d;
      local_378._0_8_ = "VoxelGI Instance DMap Texture";
      String::parse_latin1((StrRange *)&local_388);
      RenderingDevice::set_resource_name(uVar70,local_2c8._0_8_,(StrRange *)&local_388);
      lVar84 = local_388;
      if (local_388 != 0) {
        LOCK();
        plVar78 = (long *)(local_388 + -0x10);
        *plVar78 = *plVar78 + -1;
        UNLOCK();
        if (*plVar78 == 0) {
          local_388 = 0;
          Memory::free_static((void *)(lVar84 + -0x10),false);
        }
      }
      if ((*(long *)(this + 0x38) == 0) ||
         (local_4b0 = 0, *(long *)(*(long *)(this + 0x38) + -8) == 0)) {
        uVar70 = RenderingDevice::get_singleton();
        bVar49 = RenderingDevice::texture_is_format_supported_for_usage(uVar70,0x7b,4);
        local_2e8 = 4;
        local_308 = 0x7c - (uint)bVar49;
        pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
        local_380 = 0;
        local_368 = CONCAT44(local_368._4_4_,6);
        local_378._8_8_ = _UNK_00146798;
        local_378._0_8_ = __LC168;
        local_4b0 = RenderingDevice::texture_create
                              (pTVar63,(TextureView *)&local_308,(Vector *)local_378);
        local_2c8._8_8_ = local_4b0;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_380);
        uVar70 = RenderingDevice::get_singleton();
        local_388 = 0;
        local_378._8_8_ = 0x1e;
        local_378._0_8_ = "VoxelGI Instance DMap FB Depth";
        String::parse_latin1((StrRange *)&local_388);
        RenderingDevice::set_resource_name(uVar70,local_2c8._8_8_,(StrRange *)&local_388);
        lVar84 = local_388;
        if (local_388 != 0) {
          LOCK();
          plVar78 = (long *)(local_388 + -0x10);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_388 = 0;
            Memory::free_static((void *)(lVar84 + -0x10),false);
          }
        }
      }
      local_308 = 99;
      local_2e8 = 10;
      pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
      local_378._8_8_ = _UNK_00146798;
      local_378._0_8_ = __LC168;
      local_380 = 0;
      local_368 = CONCAT44(local_368._4_4_,6);
      uVar70 = RenderingDevice::texture_create
                         (pTVar63,(TextureView *)&local_308,(Vector *)local_378);
      local_2b8 = uVar70;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_380);
      uVar66 = RenderingDevice::get_singleton();
      local_388 = 0;
      local_378._8_8_ = 0x1b;
      local_378._0_8_ = "VoxelGI Instance DMap Depth";
      String::parse_latin1((StrRange *)&local_388);
      RenderingDevice::set_resource_name(uVar66,local_2b8,(StrRange *)&local_388);
      lVar84 = local_388;
      if (local_388 != 0) {
        LOCK();
        plVar78 = (long *)(local_388 + -0x10);
        *plVar78 = *plVar78 + -1;
        UNLOCK();
        if (*plVar78 == 0) {
          local_388 = 0;
          Memory::free_static((void *)(lVar84 + -0x10),false);
        }
      }
      lVar84 = *(long *)(this + 0x38);
      if ((lVar84 == 0) || (uVar81 = *(ulong *)(lVar84 + -8), uVar81 == 0)) {
        local_308 = 0x24;
        local_2e8 = 10;
        pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
        local_380 = 0;
        local_368 = CONCAT44(local_368._4_4_,6);
        local_378._8_8_ = _UNK_00146798;
        local_378._0_8_ = __LC168;
        local_468 = RenderingDevice::texture_create
                              (pTVar63,(TextureView *)&local_308,(Vector *)local_378);
        local_2a8 = local_468;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_380);
        uVar66 = RenderingDevice::get_singleton();
        local_388 = 0;
        local_378._8_8_ = 0x1c;
        local_378._0_8_ = "VoxelGI Instance DMap Albedo";
        String::parse_latin1((StrRange *)&local_388);
        RenderingDevice::set_resource_name(uVar66,local_2a8,(StrRange *)&local_388);
        lVar84 = local_388;
        if (local_388 != 0) {
          LOCK();
          plVar78 = (long *)(local_388 + -0x10);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_388 = 0;
            Memory::free_static((void *)(lVar84 + -0x10),false);
          }
        }
        pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
        local_378._8_8_ = _UNK_00146798;
        local_378._0_8_ = __LC168;
        local_380 = 0;
        local_368 = CONCAT44(local_368._4_4_,6);
        local_458 = (undefined8 *)
                    RenderingDevice::texture_create
                              (pTVar63,(TextureView *)&local_308,(Vector *)local_378);
        local_2b0 = local_458;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_380);
        uVar66 = RenderingDevice::get_singleton();
        local_388 = 0;
        local_378._8_8_ = 0x1c;
        local_378._0_8_ = "VoxelGI Instance DMap Normal";
        String::parse_latin1((StrRange *)&local_388);
        RenderingDevice::set_resource_name(uVar66,local_2b0,(StrRange *)&local_388);
        lVar84 = local_388;
        if (local_388 != 0) {
          LOCK();
          plVar78 = (long *)(local_388 + -0x10);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_388 = 0;
            Memory::free_static((void *)(lVar84 + -0x10),false);
          }
        }
        pTVar63 = (TextureFormat *)RenderingDevice::get_singleton();
        local_378._8_8_ = _UNK_00146798;
        local_378._0_8_ = __LC168;
        local_380 = 0;
        local_368 = CONCAT44(local_368._4_4_,6);
        local_470 = RenderingDevice::texture_create
                              (pTVar63,(TextureView *)&local_308,(Vector *)local_378);
        local_2a0 = local_470;
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_380);
        uVar66 = RenderingDevice::get_singleton();
        local_388 = 0;
        local_378._8_8_ = 0x19;
        local_378._0_8_ = "VoxelGI Instance DMap ORM";
        String::parse_latin1((StrRange *)&local_388);
        RenderingDevice::set_resource_name(uVar66,local_2a0,(StrRange *)&local_388);
        lVar84 = local_388;
        if (local_388 != 0) {
          LOCK();
          plVar78 = (long *)(local_388 + -0x10);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_388 = 0;
            Memory::free_static((void *)(lVar84 + -0x10),false);
          }
        }
        local_390 = 0;
        Vector<RID>::push_back(local_398,local_2a8);
        Vector<RID>::push_back(local_398,local_2b0);
        Vector<RID>::push_back(local_398,local_2a0);
        Vector<RID>::push_back(local_398,local_2c8._0_8_);
        Vector<RID>::push_back(local_398,local_2b8);
        local_2c8._8_8_ = local_4b0;
        Vector<RID>::push_back(local_398,local_4b0);
        pVVar68 = (Vector *)RenderingDevice::get_singleton();
        uVar69 = RenderingDevice::framebuffer_create(pVVar68,(long)local_398,0xffffffff);
        local_380 = 0;
        local_368 = *(undefined8 *)(*(long *)this + 200);
        local_378[8] = 0;
        local_378._0_8_ = _LC290;
        local_358 = 0;
        local_298 = uVar69;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_378[8] = 0;
        local_378._0_8_ = _LC259;
        local_358 = 0;
        local_368 = local_468;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_378[8] = 0;
        local_378._0_8_ = _LC260;
        local_358 = 0;
        local_368 = local_458;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_378[8] = 0;
        local_378._0_8_ = _LC261;
        local_358 = 0;
        local_368 = local_470;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_378[8] = 0;
        local_378._0_8_ = _LC297;
        local_358 = 0;
        local_368 = local_4b0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_368 = voxel_gi_get_sdf_texture(*(GI **)this,*(undefined8 *)(this + 8));
        local_378[8] = 0;
        local_378._0_8_ = _LC288;
        local_358 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_368 = *(undefined8 *)(lVar59 + 0x90);
        local_378[8] = 0;
        local_378._0_8_ = _LC289;
        local_358 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_378[8] = 0;
        local_378._0_8_ = _LC275;
        local_358 = 0;
        local_368 = uVar61;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_378[8] = 0;
        local_378._0_8_ = _LC276;
        local_358 = 0;
        local_368 = uVar70;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        uVar66 = RenderingDevice::get_singleton();
        uVar66 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                           (uVar66,(StrRange *)&local_388,*(undefined8 *)(*(long *)this + 0x270));
        local_290 = uVar66;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_380);
        lVar84 = local_390;
        if (local_390 != 0) {
          LOCK();
          plVar78 = (long *)(local_390 + -0x10);
          *plVar78 = *plVar78 + -1;
          UNLOCK();
          if (*plVar78 == 0) {
            local_390 = 0;
            Memory::free_static((void *)(lVar84 + -0x10),false);
          }
        }
      }
      else {
        uVar62 = (ulong)local_490;
        if (*(long *)(this + 0x28) == 0) {
          lVar71 = -1;
        }
        else {
          lVar71 = *(long *)(*(long *)(this + 0x28) + -8) + -1;
        }
        local_380 = 0;
        uVar83 = uVar81 - 1;
        if ((long)uVar83 < 0) goto LAB_001188a1;
        local_368 = *(undefined8 *)(lVar84 + uVar83 * 0x48);
        local_378[8] = 0;
        local_358 = 0;
        local_378._0_8_ = _LC259;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        auVar35._8_4_ = local_280._8_4_;
        auVar35._0_8_ = local_280._0_8_;
        auVar27._8_4_ = local_100;
        auVar27._0_8_ = local_108;
        auVar21._8_4_ = local_20c._8_4_;
        auVar21._0_8_ = local_20c._0_8_;
        auVar15._8_4_ = local_218._8_4_;
        auVar15._0_8_ = local_218._0_8_;
        auVar9._8_4_ = local_260._8_4_;
        auVar9._0_8_ = local_260._0_8_;
        auVar4._8_4_ = local_270._8_4_;
        auVar4._0_8_ = local_270._0_8_;
        lVar84 = *(long *)(this + 0x38);
        if (lVar84 == 0) {
          uVar81 = 0;
          uVar83 = 0xffffffffffffffff;
          goto LAB_001188a1;
        }
        uVar81 = *(ulong *)(lVar84 + -8);
        uVar83 = uVar81 - 1;
        local_270 = auVar4;
        local_260 = auVar9;
        local_218 = auVar15;
        local_20c = auVar21;
        _local_108 = auVar27;
        local_280._0_12_ = auVar35;
        if ((long)uVar83 < 0) goto LAB_001188a1;
        local_368 = *(undefined8 *)(lVar84 + 0x10 + uVar83 * 0x48);
        local_378[8] = 0;
        local_358 = 0;
        local_378._0_8_ = _LC260;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        if ((long)uVar62 < lVar71) {
          local_378[8] = 0;
          local_358 = 0;
          local_378._0_8_ = _LC261;
          local_368 = uVar61;
          Vector<RenderingDevice::Uniform>::push_back
                    ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
          local_378[8] = 0;
          local_378._0_8_ = _LC262;
          local_358 = 0;
          local_368 = uVar70;
          Vector<RenderingDevice::Uniform>::push_back
                    ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        }
        local_368 = voxel_gi_get_sdf_texture(*(GI **)this,*(undefined8 *)(this + 8));
        local_378[8] = 0;
        local_378._0_8_ = _LC288;
        local_358 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        local_368 = *(undefined8 *)(lVar59 + 0x90);
        local_378[8] = 0;
        local_378._0_8_ = _LC289;
        local_358 = 0;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
        auVar33._8_4_ = local_280._8_4_;
        auVar33._0_8_ = local_280._0_8_;
        auVar25._8_4_ = local_100;
        auVar25._0_8_ = local_108;
        auVar19._8_4_ = local_20c._8_4_;
        auVar19._0_8_ = local_20c._0_8_;
        auVar13._8_4_ = local_218._8_4_;
        auVar13._0_8_ = local_218._0_8_;
        auVar7._8_4_ = local_260._8_4_;
        auVar7._0_8_ = local_260._0_8_;
        auVar3._8_4_ = local_270._8_4_;
        auVar3._0_8_ = local_270._0_8_;
        if (local_490 < 0) {
          uVar66 = RenderingDevice::get_singleton();
          lVar84 = *(long *)this;
          iVar52 = (lVar71 <= (long)uVar62) + 5;
        }
        else {
          lVar84 = *(long *)(this + 0x28);
          uVar83 = uVar62;
          if (lVar84 == 0) {
            uVar81 = 0;
            goto LAB_001188a1;
          }
          uVar81 = *(ulong *)(lVar84 + -8);
          local_270 = auVar3;
          local_260 = auVar7;
          local_218 = auVar13;
          local_20c = auVar19;
          _local_108 = auVar25;
          local_280._0_12_ = auVar33;
          if ((long)uVar81 <= (long)uVar62) goto LAB_001188a1;
          local_368 = *(undefined8 *)(lVar84 + uVar62 * 0x30);
          local_378[8] = 0;
          local_358 = 0;
          local_378._0_8_ = _LC275;
          Vector<RenderingDevice::Uniform>::push_back
                    ((Vector<RenderingDevice::Uniform> *)&local_388,(Vector *)local_378);
          uVar66 = RenderingDevice::get_singleton();
          lVar84 = *(long *)this;
          iVar52 = ((long)uVar62 < lVar71) + 6;
        }
        uVar69 = 0;
        uVar66 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                           (uVar66,(StrRange *)&local_388,
                            *(undefined8 *)(lVar84 + 0x250 + (long)iVar52 * 8));
        local_290 = uVar66;
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_380);
        local_470 = 0;
        local_468 = 0;
        local_458 = (undefined8 *)0x0;
      }
      if (*(long *)(this + 0x38) == 0) {
        lVar84 = 1;
      }
      else {
        lVar84 = *(long *)(*(long *)(this + 0x38) + -8) + 1;
      }
      iVar52 = CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::resize<false>
                         ((CowData<RendererRD::GI::VoxelGIInstance::DynamicMap> *)(this + 0x38),
                          lVar84);
      if (iVar52 == 0) {
        if (*(long *)(this + 0x38) == 0) {
          lVar71 = -1;
          lVar84 = 0;
        }
        else {
          lVar84 = *(long *)(*(long *)(this + 0x38) + -8);
          lVar71 = lVar84 + -1;
          if (-1 < lVar71) {
            CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::_copy_on_write
                      ((CowData<RendererRD::GI::VoxelGIInstance::DynamicMap> *)(this + 0x38));
            puVar65 = (undefined8 *)(*(long *)(this + 0x38) + lVar71 * 0x48);
            *puVar65 = uVar61;
            puVar65[6] = uVar69;
            puVar65[1] = local_4b0;
            puVar65[7] = uVar66;
            puVar65[2] = uVar70;
            puVar65[3] = local_458;
            puVar65[4] = local_468;
            puVar65[5] = local_470;
            *(uint *)(puVar65 + 8) = uVar100;
            *(int *)((long)puVar65 + 0x44) = local_490;
            goto LAB_00119434;
          }
        }
        in_R9 = "p_index";
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar71,lVar84,"p_index","size()","",false
                   ,false);
      }
      else {
        in_R9 = (char *)0x0;
        _err_print_error("push_back","./core/templates/vector.h",0x142);
      }
LAB_00119434:
      lVar84 = local_2d8;
      if (local_2d8 != 0) {
        LOCK();
        plVar78 = (long *)(local_2d8 + -0x10);
        *plVar78 = *plVar78 + -1;
        UNLOCK();
        if (*plVar78 == 0) {
          local_2d8 = 0;
          Memory::free_static((void *)(lVar84 + -0x10),false);
        }
      }
      goto LAB_00118d98;
    }
LAB_0011b4a5:
    plVar78 = RendererSceneRenderRD::singleton;
    *(int *)(this + 0x48) = iVar50;
    local_244 = auVar103;
    (**(code **)(*plVar78 + 0x260))();
    local_490._0_1_ = this[0x50];
    if (local_490._0_1_ != (VoxelGIInstance)0x0) goto LAB_001188ed;
LAB_001177b5:
    bVar85 = true;
LAB_001177ba:
    if (*(long *)(param_3 + 8) == 0) {
      uVar100 = 0;
    }
    else {
      uVar100 = *(uint *)(*(long *)(param_3 + 8) + -8);
    }
    plVar78 = *(long **)this;
    uVar51 = *(uint *)(plVar78 + 0x18);
    if (uVar100 <= *(uint *)(plVar78 + 0x18)) {
      uVar51 = uVar100;
    }
    (**(code **)(*plVar78 + 0x60))((Transform3D *)&local_138,plVar78,*(undefined8 *)(this + 8));
    Transform3D::affine_inverse();
    Transform3D::operator*((Transform3D *)local_108,(Transform3D *)&local_138);
    fVar47 = local_100;
    uVar53 = local_108._0_4_;
    uVar48 = local_108._4_4_;
    if (uVar51 == 0) {
      uVar51 = 0;
    }
    else {
      uVar83 = 0;
LAB_00117fd4:
      do {
        auVar38._8_4_ = local_280._8_4_;
        auVar38._0_8_ = local_280._0_8_;
        auVar30._8_4_ = local_100;
        auVar30._0_8_ = local_108;
        auVar24._8_4_ = local_20c._8_4_;
        auVar24._0_8_ = local_20c._0_8_;
        auVar18._8_4_ = local_218._8_4_;
        auVar18._0_8_ = local_218._0_8_;
        auVar12._8_4_ = local_260._8_4_;
        auVar12._0_8_ = local_260._0_8_;
        auVar6._8_4_ = local_270._8_4_;
        auVar6._0_8_ = local_270._0_8_;
        lVar59 = *(long *)(param_3 + 8);
        if (lVar59 == 0) {
          uVar81 = 0;
          goto LAB_001188a1;
        }
        uVar81 = *(ulong *)(lVar59 + -8);
        local_270 = auVar6;
        local_260 = auVar12;
        local_218 = auVar18;
        local_20c = auVar24;
        _local_108 = auVar30;
        local_280._0_12_ = auVar38;
        if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
        uVar62 = *(ulong *)(lVar59 + uVar83 * 8);
        if ((uVar62 == 0) || (*(uint *)(lVar58 + 0x84) <= (uint)uVar62)) {
LAB_00122440:
                    /* WARNING: Does not return */
          pcVar64 = (code *)invalidInstructionException();
          (*pcVar64)();
        }
        lVar59 = ((uVar62 & 0xffffffff) % (ulong)*(uint *)(lVar58 + 0x80)) * 0x498 +
                 *(long *)(*(long *)(lVar58 + 0x70) +
                          ((uVar62 & 0xffffffff) / (ulong)*(uint *)(lVar58 + 0x80)) * 8);
        iVar50 = *(int *)(lVar59 + 0x490);
        if (iVar50 != (int)(uVar62 >> 0x20)) {
          if (iVar50 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,in_R9);
          }
          goto LAB_00122440;
        }
        uVar81 = *(ulong *)(lVar59 + 0x3d0);
        piVar67 = (int *)(*(long *)(*(long *)this + 0xb8) + uVar83 * 0x40);
        uVar100 = (uint)uVar81;
        iVar73 = (int)(uVar81 >> 0x20);
        if (*(code **)(*RenderingServerGlobals::light_storage + 0xf8) ==
            LightStorage::light_get_type) {
          if ((uVar81 != 0) &&
             (uVar100 < *(uint *)((long)RenderingServerGlobals::light_storage + 0x2c))) {
            piVar74 = (int *)(((uVar81 & 0xffffffff) %
                              (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                             *(long *)(RenderingServerGlobals::light_storage[3] +
                                      ((uVar81 & 0xffffffff) /
                                      (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) *
                                      8));
            iVar52 = piVar74[0x38];
            if (iVar52 == iVar73) {
              iVar52 = *piVar74;
              goto LAB_001180ce;
            }
            if (iVar52 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          in_R9 = (char *)0x0;
          _err_print_error("light_get_type",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x1ff,
                           "Parameter \"light\" is null.");
          *piVar67 = 0;
LAB_001180d9:
          iVar52 = (**(code **)(*RenderingServerGlobals::light_storage + 0xd0))
                             (RenderingServerGlobals::light_storage,uVar81);
          if (iVar52 == 2) {
            uVar51 = uVar51 - 1;
            uVar83 = uVar83 + 1;
            if (uVar51 <= (uint)uVar83) break;
            goto LAB_00117fd4;
          }
        }
        else {
          iVar52 = (**(code **)(*RenderingServerGlobals::light_storage + 0xf8))
                             (RenderingServerGlobals::light_storage,uVar81);
LAB_001180ce:
          *piVar67 = iVar52;
          if (iVar52 == 0) goto LAB_001180d9;
        }
        plVar78 = RenderingServerGlobals::light_storage;
        if (*(code **)(*RenderingServerGlobals::light_storage + 0x108) ==
            LightStorage::light_get_param) {
          if ((uVar81 == 0) ||
             (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar100)) {
LAB_00119600:
            in_R9 = (char *)0x0;
            _err_print_error("light_get_param",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                             "Parameter \"light\" is null.");
            iVar52 = 0;
            goto LAB_001187fa;
          }
          lVar59 = ((uVar81 & 0xffffffff) %
                   (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                   *(long *)(RenderingServerGlobals::light_storage[3] +
                            ((uVar81 & 0xffffffff) /
                            (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
          iVar52 = *(int *)(lVar59 + 0xe0);
          if (iVar52 != iVar73) {
            if (iVar52 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00119600;
          }
          lVar84 = *RenderingServerGlobals::light_storage;
          piVar67[3] = *(int *)(lVar59 + 0x1c);
          pcVar64 = *(code **)(lVar84 + 0x108);
          if (pcVar64 == LightStorage::light_get_param) goto LAB_00117959;
LAB_00118738:
          fVar97 = (float)(*pcVar64)(plVar78,uVar81,0);
LAB_00118742:
          pcVar64 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
          if (pcVar64 != LightStorage::light_get_param) goto LAB_00118710;
          if (uVar81 == 0) {
LAB_00118761:
            in_R9 = (char *)0x0;
            _err_print_error("light_get_param",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                             "Parameter \"light\" is null.");
            fVar93 = 0.0;
          }
          else {
LAB_001179b2:
            if (*(uint *)((long)RenderingServerGlobals::light_storage + 0x2c) <= uVar100)
            goto LAB_00118761;
            lVar59 = ((uVar81 & 0xffffffff) %
                     (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 0xe8 +
                     *(long *)(RenderingServerGlobals::light_storage[3] +
                              ((uVar81 & 0xffffffff) /
                              (ulong)*(uint *)(RenderingServerGlobals::light_storage + 5)) * 8);
            iVar52 = *(int *)(lVar59 + 0xe0);
            if (iVar52 != iVar73) {
              if (iVar52 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00118761;
            }
            fVar93 = *(float *)(lVar59 + 8);
          }
        }
        else {
          iVar52 = (**(code **)(*RenderingServerGlobals::light_storage + 0x108))
                             (RenderingServerGlobals::light_storage,uVar81,6);
LAB_001187fa:
          plVar78 = RenderingServerGlobals::light_storage;
          piVar67[3] = iVar52;
          pcVar64 = *(code **)(*plVar78 + 0x108);
          if (pcVar64 != LightStorage::light_get_param) goto LAB_00118738;
          if (uVar81 == 0) {
LAB_00118823:
            in_R9 = (char *)0x0;
            _err_print_error("light_get_param",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                             "Parameter \"light\" is null.");
            fVar97 = 0.0;
            goto LAB_00118742;
          }
LAB_00117959:
          if (*(uint *)((long)plVar78 + 0x2c) <= uVar100) goto LAB_00118823;
          lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar78 + 5)) * 0xe8 +
                   *(long *)(plVar78[3] +
                            ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar78 + 5)) * 8);
          iVar52 = *(int *)(lVar59 + 0xe0);
          if (iVar52 != iVar73) {
            if (iVar52 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00118823;
          }
          fVar97 = *(float *)(lVar59 + 4);
          pcVar64 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
          if (pcVar64 == LightStorage::light_get_param) goto LAB_001179b2;
LAB_00118710:
          fVar93 = (float)(*pcVar64)(RenderingServerGlobals::light_storage,uVar81,1);
        }
        plVar77 = RenderingServerGlobals::light_storage;
        plVar78 = RendererSceneRenderRD::singleton;
        pcVar64 = *(code **)(*RenderingServerGlobals::light_storage + 0x108);
        piVar67[1] = (int)(fVar93 * fVar97);
        if (*(char *)((long)plVar78 + 0x179) != '\0') {
          if (pcVar64 == LightStorage::light_get_param) {
            if ((uVar81 != 0) && (uVar100 < *(uint *)((long)plVar77 + 0x2c))) {
              lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar77 + 5)) * 0xe8 +
                       *(long *)(plVar77[3] +
                                ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar77 + 5)) * 8);
              iVar52 = *(int *)(lVar59 + 0xe0);
              if (iVar52 == iVar73) {
                fVar97 = *(float *)(lVar59 + 0x54);
                goto LAB_00117a71;
              }
              if (iVar52 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            in_R9 = (char *)0x0;
            _err_print_error("light_get_param",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                             "Parameter \"light\" is null.");
            fVar97 = 0.0;
          }
          else {
            fVar97 = (float)(*pcVar64)(plVar77,uVar81,0x14);
          }
LAB_00117a71:
          plVar78 = *(long **)this;
          uVar61 = *(undefined8 *)(this + 8);
          lVar59 = *plVar78;
          piVar67[1] = (int)(fVar97 * (float)piVar67[1]);
          fVar97 = (float)(**(code **)(lVar59 + 0xa0))(plVar78,uVar61);
          fVar97 = fVar97 * (float)piVar67[1];
          piVar67[1] = (int)fVar97;
          plVar77 = RenderingServerGlobals::light_storage;
          if (*piVar67 == 1) {
            piVar67[1] = (int)(float)((double)fVar97 * __LC89);
          }
          else if (*piVar67 == 2) {
            piVar67[1] = (int)(float)((double)fVar97 * __LC90);
          }
        }
        if (*(code **)(*plVar77 + 0x108) == LightStorage::light_get_param) {
          if ((uVar81 != 0) && (uVar100 < *(uint *)((long)plVar77 + 0x2c))) {
            lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar77 + 5)) * 0xe8 +
                     *(long *)(plVar77[3] +
                              ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar77 + 5)) * 8);
            iVar52 = *(int *)(lVar59 + 0xe0);
            if (iVar52 == iVar73) {
              fVar97 = *(float *)(lVar59 + 0x14);
              goto LAB_00117b33;
            }
            if (iVar52 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          in_R9 = (char *)0x0;
          _err_print_error("light_get_param",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                           "Parameter \"light\" is null.");
          fVar97 = 0.0;
        }
        else {
          fVar97 = (float)(**(code **)(*plVar77 + 0x108))(plVar77,uVar81,4);
        }
LAB_00117b33:
        plVar78 = RenderingServerGlobals::light_storage;
        pcVar64 = *(code **)(*RenderingServerGlobals::light_storage + 0x110);
        fVar93 = fStack_120 * fVar97 + fStack_11c * 0.0 + local_118 * 0.0;
        fVar95 = fStack_12c * fVar97 + fStack_128 * 0.0 + fStack_124 * 0.0;
        fVar97 = fVar97 * local_138 + fStack_134 * 0.0 + fStack_130 * 0.0;
        piVar67[2] = (int)SQRT(fVar97 * fVar97 + fVar95 * fVar95 + fVar93 * fVar93);
        if (pcVar64 == LightStorage::light_get_color) {
          if ((uVar81 != 0) && (uVar100 < *(uint *)((long)plVar78 + 0x2c))) {
            lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar78 + 5)) * 0xe8 +
                     *(long *)(plVar78[3] +
                              ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar78 + 5)) * 8);
            if (*(int *)(lVar59 + 0xe0) == iVar73) {
              fVar97 = *(float *)(lVar59 + 0x58);
              fVar93 = *(float *)(lVar59 + 0x5c);
              fVar95 = *(float *)(lVar59 + 0x60);
              goto LAB_00117c4d;
            }
            if (*(int *)(lVar59 + 0xe0) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          in_R9 = (char *)0x0;
          _err_print_error("light_get_color",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x215,
                           "Parameter \"light\" is null.");
          fVar97 = 0.0;
          fVar95 = 0.0;
          fVar93 = 0.0;
LAB_00117c80:
          fVar97 = fVar97 * _LC81;
        }
        else {
          auVar103 = (*pcVar64)(plVar78,uVar81);
          fVar95 = auVar103._8_4_;
          fVar97 = auVar103._0_4_;
          fVar93 = auVar103._4_4_;
LAB_00117c4d:
          if (_LC80 <= fVar95) {
            fVar95 = powf((float)(((double)fVar95 + __LC82) * __LC83),_LC84);
          }
          else {
            fVar95 = fVar95 * _LC81;
          }
          if (_LC80 <= fVar93) {
            fVar93 = powf((float)(((double)fVar93 + __LC82) * __LC83),_LC84);
          }
          else {
            fVar93 = fVar93 * _LC81;
          }
          if (fVar97 < _LC80) goto LAB_00117c80;
          fVar97 = powf((float)(((double)fVar97 + __LC82) * __LC83),_LC84);
        }
        plVar78 = RenderingServerGlobals::light_storage;
        piVar67[6] = (int)fVar95;
        *(ulong *)(piVar67 + 4) = CONCAT44(fVar93,fVar97);
        if (*(code **)(*plVar78 + 0x108) == LightStorage::light_get_param) {
          if ((uVar81 == 0) || (*(uint *)((long)plVar78 + 0x2c) <= uVar100)) {
LAB_00119530:
            in_R9 = (char *)0x0;
            _err_print_error("light_get_param",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                             "Parameter \"light\" is null.");
            fVar97 = _LC17;
            goto LAB_001186a7;
          }
          lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar78 + 5)) * 0xe8 +
                   *(long *)(plVar78[3] +
                            ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar78 + 5)) * 8);
          iVar52 = *(int *)(lVar59 + 0xe0);
          if (iVar52 != iVar73) {
            if (iVar52 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00119530;
          }
          fVar97 = cosf(_LC91 * *(float *)(lVar59 + 0x20));
          plVar78 = RenderingServerGlobals::light_storage;
          fVar93 = _LC17;
          piVar67[7] = (int)fVar97;
          pcVar64 = *(code **)(*plVar78 + 0x108);
          if (pcVar64 == LightStorage::light_get_param) goto LAB_00117d2d;
LAB_00118660:
          fVar97 = (float)(*pcVar64)(plVar78,uVar81,8);
        }
        else {
          fVar97 = (float)(**(code **)(*plVar78 + 0x108))(plVar78,uVar81,7);
          fVar97 = cosf(fVar97 * _LC91);
LAB_001186a7:
          plVar78 = RenderingServerGlobals::light_storage;
          fVar93 = _LC17;
          piVar67[7] = (int)fVar97;
          pcVar64 = *(code **)(*plVar78 + 0x108);
          if (pcVar64 != LightStorage::light_get_param) goto LAB_00118660;
          if (uVar81 == 0) {
LAB_001186cc:
            in_R9 = (char *)0x0;
            _err_print_error("light_get_param",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                             "Parameter \"light\" is null.");
            fVar97 = 0.0;
          }
          else {
LAB_00117d2d:
            if (*(uint *)((long)plVar78 + 0x2c) <= uVar100) goto LAB_001186cc;
            lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar78 + 5)) * 0xe8 +
                     *(long *)(plVar78[3] +
                              ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar78 + 5)) * 8);
            iVar52 = *(int *)(lVar59 + 0xe0);
            if (iVar52 != iVar73) {
              if (iVar52 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_001186cc;
            }
            fVar97 = *(float *)(lVar59 + 0x24);
          }
        }
        piVar67[0xb] = (int)(fVar93 / fVar97);
        plVar78 = RenderingServerGlobals::light_storage;
        if (*(uint *)(lVar58 + 0x84) <= (uint)uVar62) {
LAB_00122420:
                    /* WARNING: Does not return */
          pcVar64 = (code *)invalidInstructionException();
          (*pcVar64)();
        }
        lVar59 = ((uVar62 & 0xffffffff) % (ulong)*(uint *)(lVar58 + 0x80)) * 0x498 +
                 *(long *)(*(long *)(lVar58 + 0x70) +
                          ((uVar62 & 0xffffffff) / (ulong)*(uint *)(lVar58 + 0x80)) * 8);
        if (iVar50 != *(int *)(lVar59 + 0x490)) {
          if (*(int *)(lVar59 + 0x490) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,in_R9);
          }
          goto LAB_00122420;
        }
        fVar97 = *(float *)(lVar59 + 0x3fc);
        fVar93 = *(float *)(lVar59 + 0x400);
        fVar95 = *(float *)(lVar59 + 0x404);
        fVar87 = (float)(*(uint *)(lVar59 + 0x3ec) ^ _LC79);
        fVar89 = (float)(*(uint *)(lVar59 + 0x3f8) ^ _LC79);
        fVar91 = (float)(*(uint *)(lVar59 + 0x3e0) ^ _LC79);
        fVar96 = local_f0 * fVar91 + local_ec * fVar87 + local_e8 * fVar89;
        fVar55 = local_fc * fVar91 + local_f8 * fVar87 + local_f4 * fVar89;
        fVar91 = fVar91 * (float)uVar53 + fVar87 * (float)uVar48 + fVar89 * fVar47;
        fVar89 = fVar91 * fVar91 + fVar55 * fVar55 + fVar96 * fVar96;
        if (fVar89 == 0.0) {
          fVar96 = 0.0;
          fVar55 = 0.0;
          fVar91 = 0.0;
        }
        else {
          fVar89 = SQRT(fVar89);
          fVar91 = fVar91 / fVar89;
          fVar55 = fVar55 / fVar89;
          fVar96 = fVar96 / fVar89;
        }
        piVar67[8] = (int)(local_e4 +
                          fVar97 * (float)uVar53 + fVar93 * (float)uVar48 + fVar95 * fVar47);
        piVar67[9] = (int)(local_fc * fVar97 + local_f8 * fVar93 + local_f4 * fVar95 + local_e0);
        lVar59 = *plVar78;
        piVar67[10] = (int)(local_f0 * fVar97 + local_ec * fVar93 + local_e8 * fVar95 + local_dc);
        piVar67[0xc] = (int)fVar91;
        pcVar64 = *(code **)(lVar59 + 0xe8);
        piVar67[0xd] = (int)fVar55;
        piVar67[0xe] = (int)fVar96;
        if (pcVar64 == LightStorage::light_has_shadow) {
          if ((uVar81 != 0) && (uVar100 < *(uint *)((long)plVar78 + 0x2c))) {
            lVar59 = ((uVar81 & 0xffffffff) % (ulong)*(uint *)(plVar78 + 5)) * 0xe8 +
                     *(long *)(plVar78[3] +
                              ((uVar81 & 0xffffffff) / (ulong)*(uint *)(plVar78 + 5)) * 8);
            iVar50 = *(int *)(lVar59 + 0xe0);
            if (iVar50 == iVar73) {
              uVar100 = (uint)*(byte *)(lVar59 + 0x70);
              goto LAB_00117fbf;
            }
            if (iVar50 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          in_R9 = (char *)0x0;
          _err_print_error("light_has_shadow",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x230,
                           "Parameter \"light\" is null.");
          uVar100 = 0;
        }
        else {
          bVar49 = (*pcVar64)(plVar78,uVar81);
          uVar100 = (uint)bVar49;
        }
LAB_00117fbf:
        piVar67[0xf] = uVar100;
        uVar83 = uVar83 + 1;
      } while ((uint)uVar83 < uVar51);
    }
    uVar61 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update(uVar61,*(undefined8 *)(*(long *)this + 200),0);
    if (((this[0x50] != (VoxelGIInstance)0x0) || (bVar85)) || (*(long *)(in_RCX + 0x28) != 0)) {
LAB_0011752e:
      plVar78 = *(long **)this;
      if ((*(long *)(this + 0x28) != 0) && (*(long *)(*(long *)(this + 0x28) + -8) != 0)) {
        _local_108 = (**(code **)(*plVar78 + 0x38))(plVar78,*(undefined8 *)(this + 8));
        fStack_c0 = SUB124(_local_108,8);
        local_c8 = SUB124(_local_108,0);
        fStack_c4 = SUB124(_local_108,4);
        if (*(long *)(this + 0x28) == 0) {
          uStack_bc = 0;
        }
        else {
          uStack_bc = *(undefined4 *)(*(long *)(this + 0x28) + -8);
        }
        iStack_b8 = 0x3f800000;
        local_b4 = (**(code **)(**(long **)this + 0x80))(*(long **)this,*(undefined8 *)(this + 8));
        local_b0 = (**(code **)(**(long **)this + 0x70))(*(long **)this,*(undefined8 *)(this + 8));
        local_a0 = 0;
        local_ac = uVar51;
        RenderingDevice::get_singleton();
        pvVar60 = (void *)RenderingDevice::compute_list_begin();
        if (bVar85) {
          bVar49 = (**(code **)(**(long **)this + 0xe0))(*(long **)this,*(undefined8 *)(this + 8));
          local_498 = bVar49 + 1;
          uVar61 = RenderingDevice::get_singleton();
          uVar62 = RenderingDevice::limit_get(uVar61,0x1c);
        }
        else {
          uVar61 = RenderingDevice::get_singleton();
          uVar62 = RenderingDevice::limit_get(uVar61,0x1c);
          local_498 = 1;
        }
        uVar100 = 0;
        do {
          if (bVar85) {
            lVar58 = *(long *)(this + 0x28);
            uVar83 = 0;
            if (lVar58 != 0) {
              local_4c0 = (float *)0x0;
LAB_0011ae9b:
              do {
                if (*(long *)(lVar58 + -8) <= (long)uVar83) break;
                if (uVar83 == 0) {
                  uVar61 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_bind_compute_pipeline
                            (uVar61,pvVar60,
                             *(undefined8 *)(*(long *)this + 0x290 + (long)(int)uVar100 * 8));
                  if ((uVar100 & 1) == 0) goto LAB_0011aed0;
                  lVar58 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_add_barrier(lVar58);
                  uVar61 = RenderingDevice::get_singleton();
                  lVar58 = *(long *)(this + 0x28);
                  if (lVar58 == 0) goto LAB_0011b42d;
                  uVar81 = *(ulong *)(lVar58 + -8);
                  if ((long)uVar81 < 1) goto LAB_0011b430;
                  RenderingDevice::compute_list_bind_uniform_set
                            (uVar61,pvVar60,*(undefined8 *)(lVar58 + 0x10 + (long)local_4c0));
                }
                else {
                  if (uVar83 == 1) {
                    uVar61 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_bind_compute_pipeline
                              (uVar61,pvVar60,*(undefined8 *)(*(long *)this + 0x2a0));
                  }
                  lVar58 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_add_barrier(lVar58);
LAB_0011aed0:
                  uVar61 = RenderingDevice::get_singleton();
                  lVar58 = *(long *)(this + 0x28);
                  if (lVar58 == 0) goto LAB_0011b340;
                  uVar81 = *(ulong *)(lVar58 + -8);
                  if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
                  RenderingDevice::compute_list_bind_uniform_set
                            (uVar61,pvVar60,*(undefined8 *)(lVar58 + 8 + (long)local_4c0));
                }
                lVar58 = *(long *)(this + 0x28);
                if (lVar58 == 0) goto LAB_0011b340;
                uVar81 = *(ulong *)(lVar58 + -8);
                if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
                local_a8 = *(undefined8 *)(lVar58 + 0x24 + (long)local_4c0);
                uVar51 = (int)((ulong)local_a8 >> 0x20) + 0x3fU >> 6;
                uVar81 = (ulong)uVar51;
                if (uVar51 == 0) {
                  local_4c0 = (float *)((long)local_4c0 + 0x30);
                  uVar83 = uVar83 + 1;
                  goto LAB_0011ae9b;
                }
                do {
                  uVar82 = uVar62;
                  if ((long)uVar81 <= (long)uVar62) {
                    uVar82 = uVar81;
                  }
                  lVar58 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_set_push_constant(lVar58,pvVar60,(uint)&local_c8);
                  lVar58 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_dispatch(lVar58,(uint)pvVar60,(uint)uVar82,1);
                  local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + (uint)uVar82 * 0x40);
                  uVar81 = uVar81 - uVar82;
                } while (uVar81 != 0);
                lVar58 = *(long *)(this + 0x28);
                local_4c0 = (float *)((long)local_4c0 + 0x30);
                uVar83 = uVar83 + 1;
              } while (lVar58 != 0);
            }
            lVar58 = RenderingDevice::get_singleton();
            RenderingDevice::compute_list_add_barrier(lVar58);
          }
          uVar61 = RenderingDevice::get_singleton();
          uVar83 = 0;
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar61,pvVar60,*(undefined8 *)(*(long *)this + 0x2a8));
          lVar58 = *(long *)(this + 0x28);
joined_r0x00117659:
          if (lVar58 != 0) {
            do {
              if (*(long *)(lVar58 + -8) <= (long)uVar83) break;
              uVar61 = RenderingDevice::get_singleton();
              lVar58 = *(long *)(this + 0x28);
              if (lVar58 == 0) {
LAB_0011ae38:
                uVar81 = 0;
                goto LAB_001188a1;
              }
              uVar81 = *(ulong *)(lVar58 + -8);
              if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
              RenderingDevice::compute_list_bind_uniform_set
                        (uVar61,pvVar60,*(undefined8 *)(lVar58 + 0x18 + uVar83 * 0x30));
              lVar58 = *(long *)(this + 0x28);
              if (lVar58 == 0) goto LAB_0011ae38;
              uVar81 = *(ulong *)(lVar58 + -8);
              if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
              local_a8 = *(undefined8 *)(lVar58 + 0x24 + uVar83 * 0x30);
              uVar51 = (int)((ulong)local_a8 >> 0x20) + 0x3fU >> 6;
              uVar81 = (ulong)uVar51;
              if (uVar51 != 0) goto LAB_00117700;
              uVar83 = uVar83 + 1;
            } while( true );
          }
          uVar100 = uVar100 + 1;
          if (uVar100 == local_498) {
            RenderingDevice::get_singleton();
            RenderingDevice::compute_list_end();
            plVar78 = *(long **)this;
            lVar58 = *(long *)(in_RCX + 0x28);
            goto LAB_0011963c;
          }
        } while( true );
      }
      lVar58 = *(long *)(in_RCX + 0x28);
LAB_0011963c:
      auVar46._8_4_ = local_20c._8_4_;
      auVar46._0_8_ = local_20c._0_8_;
      auVar45._8_4_ = local_20c._8_4_;
      auVar45._0_8_ = local_20c._0_8_;
      auVar44._8_4_ = local_218._8_4_;
      auVar44._0_8_ = local_218._0_8_;
      auVar43._8_4_ = local_218._8_4_;
      auVar43._0_8_ = local_218._0_8_;
      auVar42._8_4_ = local_260._8_4_;
      auVar42._0_8_ = local_260._0_8_;
      auVar41._8_4_ = local_260._8_4_;
      auVar41._0_8_ = local_260._0_8_;
      auVar40._8_4_ = local_270._8_4_;
      auVar40._0_8_ = local_270._0_8_;
      auVar39._8_4_ = local_270._8_4_;
      auVar39._0_8_ = local_270._0_8_;
      auVar32._8_4_ = local_280._8_4_;
      auVar32._0_8_ = local_280._0_8_;
      auVar31._8_4_ = local_280._8_4_;
      auVar31._0_8_ = local_280._0_8_;
      this[0x50] = (VoxelGIInstance)0x0;
      if (((lVar58 == 0) ||
          (local_280._0_12_ = auVar31, local_270 = auVar39, local_260 = auVar41, local_218 = auVar43
          , local_20c = auVar45, *(long *)(this + 0x38) == 0)) ||
         (local_280._0_12_ = auVar32, local_270 = auVar40, local_260 = auVar42, local_218 = auVar44,
         local_20c = auVar46, *(long *)(*(long *)(this + 0x38) + -8) == 0)) goto LAB_00118173;
      local_280._0_12_ = (**(code **)(*plVar78 + 0x38))(plVar78,*(undefined8 *)(this + 8));
      fVar47 = _LC17;
      lVar58 = *(long *)(this + 0x38);
      if (lVar58 == 0) {
LAB_0011b42d:
        uVar81 = 0;
      }
      else {
        uVar81 = *(ulong *)(lVar58 + -8);
        if (0 < (long)uVar81) {
          local_1f8 = (Vector3  [16])ZEXT416((uint)_LC17);
          uVar100 = SUB124(local_280._0_12_,8);
          if ((int)SUB124(local_280._0_12_,8) < (int)local_280._4_4_) {
            uVar100 = local_280._4_4_;
          }
          local_1d8 = _LC17;
          local_1d4 = 0;
          uVar51 = local_280._0_4_;
          if ((int)local_280._0_4_ <= (int)uVar100) {
            uVar51 = uVar100;
          }
          local_1cc = 0;
          uVar51 = *(uint *)(lVar58 + 0x40) / uVar51;
          fVar97 = (float)(int)uVar51;
          local_1e8 = (undefined1  [16])local_1f8;
          local_c8 = fVar97;
          fStack_c4 = fVar97;
          fStack_c0 = fVar97;
          Basis::scale(local_1f8);
          (**(code **)(**(long **)this + 0x60))
                    ((Transform3D *)&local_c8,*(long **)this,*(undefined8 *)(this + 8));
          Transform3D::operator*(local_1c8,(Transform3D *)local_1f8);
          Transform3D::affine_inverse();
          Transform3D::operator*(local_198,(Transform3D *)(this + 0x54));
          Transform3D::affine_inverse();
          Vector3i::operator_cast_to_Vector3((Vector3i *)local_280);
          uVar62 = *(ulong *)(in_RCX + 0x28);
          if (0 < (int)uVar62) {
            uVar82 = 0;
            do {
              if (uVar62 <= uVar82) {
                lVar58 = (long)(int)(uint)uVar82;
                iVar50 = 0xa9;
LAB_0011b72f:
                _err_print_index_error
                          ("operator[]","./core/templates/paged_array.h",iVar50,lVar58,uVar62,
                           "p_index","count","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar64 = (code *)invalidInstructionException();
                (*pcVar64)();
              }
              plVar78 = *(long **)(*(long *)(*(long *)(in_RCX + 8) +
                                            (uVar82 >> ((byte)*(undefined4 *)(in_RCX + 0x1c) & 0x3f)
                                            ) * 8) +
                                  (ulong)((uint)uVar82 & *(uint *)(in_RCX + 0x20)) * 8);
              (**(code **)(*plVar78 + 0xa8))((Projection *)local_108,plVar78);
              Transform3D::operator*((Transform3D *)&local_c8,local_168);
              (**(code **)(*plVar78 + 0xb0))((Vector3i *)&local_138,plVar78);
              lVar58 = 0;
              local_228 = CONCAT44(fStack_134,local_138);
              local_250 = 0;
              local_220 = CONCAT44(local_220._4_4_,fStack_130);
              local_248 = 0.0;
              local_238 = 0;
              local_230 = 0.0;
              local_260._0_8_ = CONCAT44(fStack_128 + fStack_134,fStack_12c + local_138);
              local_260._8_4_ = fStack_130 + fStack_124;
              pTVar72 = (Transform3D *)&local_c8;
              do {
                fVar93 = *(float *)((long)&local_a8 + lVar58 + 4);
                lVar59 = 0;
                fVar95 = fVar93;
                do {
                  fVar89 = *(float *)((long)&local_228 + lVar59) * *(float *)(pTVar72 + lVar59);
                  fVar87 = *(float *)(pTVar72 + lVar59) * *(float *)(lVar59 + (long)local_260);
                  fVar91 = fVar87;
                  if (fVar89 < fVar87) {
                    fVar91 = fVar89;
                    fVar89 = fVar87;
                  }
                  fVar95 = fVar95 + fVar89;
                  fVar93 = fVar93 + fVar91;
                  lVar59 = lVar59 + 4;
                } while (lVar59 != 0xc);
                *(float *)((long)&local_238 + lVar58) = fVar95;
                pTVar72 = pTVar72 + 0xc;
                *(float *)((Vector3 *)&local_250 + lVar58) = fVar93;
                lVar58 = lVar58 + 4;
              } while (lVar58 != 0xc);
              fVar93 = local_230 - local_248;
              fStack_130 = 1.4013e-45;
              local_218._0_8_ = local_250;
              local_218._8_4_ = local_248;
              fVar95 = (float)local_238;
              fVar91 = (float)local_250;
              uVar62 = (ulong)local_250 >> 0x20;
              uVar81 = (ulong)local_238 >> 0x20;
              local_138 = (float)_LC284;
              fStack_134 = (float)((ulong)_LC284 >> 0x20);
              auVar103 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_138);
              uVar53 = local_218._8_4_;
              fVar89 = (float)local_218._0_8_;
              fVar87 = SUB84(local_218._0_8_,4);
              local_c8 = fVar89 - auVar103._0_4_;
              fStack_c4 = fVar87 - auVar103._4_4_;
              fStack_c0 = (float)local_218._8_4_ - auVar103._8_4_;
              _local_108 = auVar103;
              auVar103 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_c8);
              fStack_130 = 1.4013e-45;
              local_138 = (float)_LC284;
              fStack_134 = (float)((ulong)_LC284 >> 0x20);
              local_270 = auVar103;
              auVar103 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_138);
              fStack_c0 = (float)uVar53 + fVar93 + auVar103._8_4_;
              local_c8 = (fVar95 - fVar91) + fVar89 + auVar103._0_4_;
              fStack_c4 = ((float)uVar81 - (float)uVar62) + fVar87 + auVar103._4_4_;
              _local_108 = auVar103;
              local_260 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_c8);
              piVar67 = (int *)local_260;
              pVVar76 = (Vector3i *)local_270;
              pVVar79 = (Vector3i *)local_280;
              do {
                iVar50 = *(int *)pVVar76;
                iVar73 = (*piVar67 + 1) - (uint)((*piVar67 - iVar50 & 1U) == 0);
                if (iVar50 < 0) {
                  iVar50 = 0;
                }
                *(int *)pVVar76 = iVar50;
                iVar50 = *(int *)pVVar79 * uVar51;
                if (iVar73 < iVar50) {
                  iVar50 = iVar73;
                }
                piVar74 = piVar67 + 1;
                pVVar76 = pVVar76 + 4;
                pVVar79 = pVVar79 + 4;
                *piVar67 = iVar50;
                piVar67 = piVar74;
              } while (piVar74 != &local_254);
              local_218 = Vector3i::operator_cast_to_Vector3((Vector3i *)local_270);
              fStack_c0 = (float)(local_260._8_4_ - local_270._8_4_);
              local_c8 = (float)(local_260._0_4_ - local_270._0_4_);
              fStack_c4 = (float)(local_260._4_4_ - local_270._4_4_);
              auVar104 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_c8);
              auVar103 = local_218;
              uVar53 = local_218._8_4_;
              local_488 = (CowData<RenderingDevice::Uniform> *)
                          &update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)
                           ::render_z;
              local_458 = &update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)
                           ::render_up;
              local_20c = auVar104;
              do {
                if (update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)::
                    render_z == '\0') {
                  iVar50 = __cxa_guard_acquire(&update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)
                                                ::render_z);
                  if (iVar50 != 0) {
                    _DAT_001202e0 = CONCAT44(_LC285,__LC298);
                    _render_z = ZEXT416((uint)_LC17);
                    uRam00000000001202e8 = _UNK_001467c8;
                    _DAT_00120300 = _LC300;
                    _DAT_001202f0 = _LC300;
                    uRam00000000001202f8 = _UNK_001467d8;
                    _DAT_001202d0 = _render_z;
                    __cxa_guard_release(&update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)
                                         ::render_z);
                  }
                }
                if (update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)::
                    render_up == '\0') {
                  iVar50 = __cxa_guard_acquire(&update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)
                                                ::render_up);
                  if (iVar50 != 0) {
                    _DAT_001202a0 = 0x3f800000;
                    update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)::
                    render_up = __LC301;
                    _DAT_00120268 = _UNK_001467e8;
                    _DAT_00120270 = __LC302;
                    uRam0000000000120278 = _UNK_001467f8;
                    _DAT_00120280 = __LC303;
                    uRam0000000000120288 = _UNK_00146808;
                    _DAT_00120290 = __LC303;
                    uRam0000000000120298 = _UNK_00146808;
                    __cxa_guard_release(&update(bool,Vector<RID>const&,PagedArray<RenderGeometryInstance*>const&)
                                         ::render_up);
                  }
                }
                local_114 = 0;
                local_238 = *local_458;
                local_10c = 0;
                fVar93 = auVar104._0_4_ * (float)_LC305;
                fVar91 = auVar104._4_4_ * _LC305._4_4_;
                local_230 = *(float *)(local_458 + 1);
                local_138 = _LC17;
                fStack_134 = 0.0;
                fStack_130 = 0.0;
                fStack_12c = 0.0;
                fStack_128 = _LC17;
                fStack_124 = 0.0;
                fStack_120 = 0.0;
                fStack_11c = 0.0;
                local_118 = fVar47;
                local_c8 = auVar103._0_4_ + fVar93;
                fStack_c4 = auVar103._4_4_ + fVar91;
                local_250 = CONCAT44(fStack_c4,local_c8);
                fVar95 = (float)_LC144 * auVar104._8_4_;
                local_c8 = local_c8 - (float)*(undefined8 *)local_488 * fVar93;
                fStack_c4 = fStack_c4 - (float)((ulong)*(undefined8 *)local_488 >> 0x20) * fVar91;
                local_248 = (float)uVar53 + fVar95;
                fStack_c0 = local_248 - fVar95 * *(float *)((long)local_488 + 8);
                Transform3D::set_look_at
                          ((Vector3 *)&local_138,(Vector3 *)&local_c8,(Vector3 *)&local_250,
                           SUB81(&local_238,0));
                fVar91 = ABS(fStack_120);
                fVar55 = ABS(fStack_12c);
                fVar89 = ABS(local_138);
                fVar87 = ABS(fStack_11c);
                local_4a8 = ABS(fStack_128);
                fVar96 = ABS(fStack_134);
                fVar90 = (float)((uint)fStack_130 ^ (uint)_LC88);
                fVar92 = (float)((uint)fStack_124 ^ _LC88._4_4_);
                fVar98 = (float)((uint)local_118 ^ _LC79);
                fVar94 = fStack_124 + fStack_130 + local_118;
                lVar59 = (long)(int)(fVar96 * 0.0 + local_4a8 + fVar87 + fVar87);
                fVar56 = ABS(fVar98);
                lVar58 = (long)(int)(fVar89 * 0.0 + fVar55 + fVar91 + fVar91);
                fVar93 = *(float *)(local_20c + lVar58 * 4);
                fVar95 = *(float *)(local_20c + lVar59 * 4);
                uVar101 = (uint)fVar93;
                uVar102 = (uint)fVar95;
                uVar61 = CONCAT44(uVar102,uVar101);
                lVar84 = (long)(int)(ABS(fVar90) * 0.0 + ABS(fVar92) + fVar56 + fVar56);
                uVar99 = (uint)*(float *)(local_218 + lVar58 * 4);
                uVar100 = (uint)*(float *)(local_218 + lVar59 * 4);
                local_468 = CONCAT44(uVar100,uVar99);
                fVar56 = fStack_12c + local_138 + fStack_120;
                fVar88 = fStack_128 + fStack_134 + fStack_11c;
                Projection::Projection((Projection *)local_108);
                Projection::set_orthogonal
                          ((float)-((int)uVar101 / 2),(float)((int)uVar101 / 2),
                           (float)-((int)uVar102 / 2),(float)((int)uVar102 / 2),_LC306,
                           *(float *)(local_20c + lVar84 * 4));
                plVar77 = RendererSceneRenderRD::singleton;
                if (RendererSceneRenderRD::singleton[0x41] == 0) {
                  plVar80 = (long *)RendererSceneRenderRD::singleton[0x3c];
                  if ((int)RendererSceneRenderRD::singleton[0x3f] == 0) {
                    if (plVar80 != (long *)0x0) {
                      plVar80 = RendererSceneRenderRD::singleton + 0x3d;
                      *(undefined4 *)(RendererSceneRenderRD::singleton + 0x3f) = 1;
                      lVar58 = Memory::realloc_static((void *)*plVar80,8,false);
                      plVar77[0x3d] = lVar58;
                      lVar58 = Memory::realloc_static
                                         ((void *)plVar77[0x3e],
                                          (ulong)*(uint *)(plVar77 + 0x3f) << 2,false);
                      plVar80 = (long *)plVar77[0x3c];
                      plVar77[0x3e] = lVar58;
                      goto LAB_00119fd9;
                    }
                    _err_print_error("push_back","./core/templates/paged_array.h",0xbf,
                                     "Parameter \"page_pool\" is null.",0,0);
                  }
                  else {
LAB_00119fd9:
                    plVar1 = plVar80 + 4;
                    while( true ) {
                      uVar57 = local_308 >> 8;
                      local_308 = uVar57 << 8;
                      LOCK();
                      bVar85 = (char)*plVar1 == '\0';
                      if (bVar85) {
                        *(char *)plVar1 = '\x01';
                      }
                      UNLOCK();
                      if (bVar85) break;
                      local_308 = uVar57 << 8;
                      do {
                      } while ((char)*plVar1 != '\0');
                    }
                    if ((int)plVar80[3] == 0) {
                      uVar57 = *(uint *)(plVar80 + 1);
                      *(uint *)(plVar80 + 1) = uVar57 + 1;
                      lVar58 = Memory::realloc_static
                                         ((void *)*plVar80,(ulong)(uVar57 + 1) * 8,false);
                      *plVar80 = lVar58;
                      lVar58 = Memory::realloc_static
                                         ((void *)plVar80[2],(ulong)*(uint *)(plVar80 + 1) << 2,
                                          false);
                      plVar80[2] = lVar58;
                      lVar58 = *plVar80;
                      uVar70 = Memory::alloc_static
                                         ((ulong)*(uint *)((long)plVar80 + 0x1c) << 3,false);
                      *(undefined8 *)(lVar58 + (ulong)uVar57 * 8) = uVar70;
                      puVar75 = (uint *)plVar80[2];
                      *puVar75 = uVar57;
                      uVar57 = *(uint *)(plVar80 + 3);
                    }
                    else {
                      puVar75 = (uint *)plVar80[2];
                      uVar57 = (int)plVar80[3] - 1;
                    }
                    *(uint *)(plVar80 + 3) = uVar57;
                    uVar57 = puVar75[uVar57];
                    uVar70 = *(undefined8 *)(*plVar80 + (ulong)uVar57 * 8);
                    *(char *)plVar1 = '\0';
                    puVar65 = (undefined8 *)plVar77[0x3d];
                    *puVar65 = uVar70;
                    *(uint *)plVar77[0x3e] = uVar57;
                    uVar62 = plVar77[0x41];
                    *(undefined8 *)
                     (puVar65[uVar62 >> ((byte)*(undefined4 *)((long)plVar77 + 0x1fc) & 0x3f) &
                              0xffffffff] + (ulong)((uint)uVar62 & *(uint *)(plVar77 + 0x40)) * 8) =
                         0;
                    plVar77[0x41] = uVar62 + 1;
                  }
                  if (RendererSceneRenderRD::singleton[0x41] == 0) {
                    uVar62 = 0;
                    lVar58 = 0;
                    iVar50 = 0xb0;
                    goto LAB_0011b72f;
                  }
                }
                plVar77 = RendererSceneRenderRD::singleton;
                cVar2 = *(char *)((long)RendererSceneRenderRD::singleton + 0x179);
                **(undefined8 **)RendererSceneRenderRD::singleton[0x3d] = plVar78;
                if (cVar2 != '\0') {
                  (**(code **)(**(long **)this + 0xa0))(*(long **)this,*(undefined8 *)(this + 8));
                  plVar77 = RendererSceneRenderRD::singleton;
                }
                pcVar64 = *(code **)(*plVar77 + 0x1f0);
                local_228 = 0;
                local_220 = uVar61;
                if (*(long *)(this + 0x38) == 0) goto LAB_0011b42d;
                uVar81 = *(ulong *)(*(long *)(this + 0x38) + -8);
                if ((long)uVar81 < 1) goto LAB_0011b430;
                Transform3D::operator*((Transform3D *)&local_c8,local_198);
                puVar65 = &local_228;
                (*pcVar64)(plVar77,(Transform3D *)&local_c8,(Projection *)local_108,1);
                iStack_b8 = 0;
                local_50 = 0;
                piVar67 = &iStack_b8;
                for (lVar58 = 0xe; lVar58 != 0; lVar58 = lVar58 + -1) {
                  piVar67[0] = 0;
                  piVar67[1] = 0;
                  piVar67 = piVar67 + ((ulong)bVar86 * -2 + 1) * 2;
                }
                local_c8 = SUB124(local_280._0_12_,0);
                fStack_c4 = SUB124(local_280._0_12_,4);
                fStack_c0 = (float)local_280._8_4_;
                if (*(long *)(param_3 + 8) == 0) {
                  uStack_bc = 0;
                }
                else {
                  uStack_bc = *(undefined4 *)(*(long *)(param_3 + 8) + -8);
                }
                iStack_b8 = (int)fVar89;
                local_ac = *(uint *)((long)&local_114 + lVar84 * 4);
                local_b4 = (int)fVar55;
                uVar57 = -(uint)(0.0 < fVar94);
                local_8c = fVar47 / fVar97;
                local_b0 = (int)fVar91;
                local_9c = _LC285 & uVar57 | ~uVar57 & (uint)fVar47;
                local_a8 = CONCAT44((int)local_4a8,(int)fVar96);
                local_a0 = (int)fVar87;
                local_90 = (int)fVar98;
                local_98 = CONCAT44((int)fVar92,(int)fVar90);
                local_60 = (**(code **)(**(long **)this + 0x70))
                                     (*(long **)this,*(undefined8 *)(this + 8),puVar65);
                local_5c = 0;
                uStack_80 = CONCAT44((int)fVar95,(int)fVar93);
                local_64 = (uint)(fVar88 < 0.0);
                local_88 = local_468;
                local_68 = (uint)(fVar56 < 0.0);
                local_78 = (undefined1  [16])0x0;
                local_58 = (**(code **)(**(long **)this + 0x80))
                                     (*(long **)this,*(undefined8 *)(this + 8));
                local_54 = 0;
                local_50 = 0;
                RenderingDevice::get_singleton();
                pvVar60 = (void *)RenderingDevice::compute_list_begin();
                uVar61 = RenderingDevice::get_singleton();
                RenderingDevice::compute_list_bind_compute_pipeline
                          (uVar61,pvVar60,*(undefined8 *)(*(long *)this + 0x2b0));
                uVar61 = RenderingDevice::get_singleton();
                lVar58 = *(long *)(this + 0x38);
                if (lVar58 == 0) goto LAB_0011b42d;
                uVar81 = *(ulong *)(lVar58 + -8);
                if ((long)uVar81 < 1) goto LAB_0011b430;
                RenderingDevice::compute_list_bind_uniform_set
                          (uVar61,pvVar60,*(undefined8 *)(lVar58 + 0x38),0);
                lVar58 = RenderingDevice::get_singleton();
                uVar57 = (uint)(Transform3D *)&local_c8;
                RenderingDevice::compute_list_set_push_constant(lVar58,pvVar60,uVar57);
                lVar58 = RenderingDevice::get_singleton();
                iVar50 = uVar102 + 0xe;
                if (-1 < (int)(uVar102 + 7)) {
                  iVar50 = uVar102 + 7;
                }
                iVar73 = uVar101 + 0xe;
                if (-1 < (int)(uVar101 + 7)) {
                  iVar73 = uVar101 + 7;
                }
                RenderingDevice::compute_list_dispatch(lVar58,(uint)pvVar60,iVar73 >> 3,iVar50 >> 3)
                ;
                lVar58 = *(long *)(this + 0x38);
                if (lVar58 != 0) {
                  uVar83 = 1;
                  do {
                    if (*(long *)(lVar58 + -8) <= (long)uVar83) break;
                    local_78[0] = (uVar99 & 1) != 0;
                    if ((bool)local_78[0]) {
                      uVar101 = uVar101 + 1;
                    }
                    local_78._1_3_ = 0;
                    uVar99 = (int)uVar99 >> 1;
                    uVar101 = (int)((uVar101 + 1) - (uint)((uVar101 & 1) == 0)) >> 1;
                    if ((int)uVar101 < 1) {
                      uVar101 = 1;
                    }
                    local_78[4] = (uVar100 & 1) != 0;
                    if ((bool)local_78[4]) {
                      uVar102 = uVar102 + 1;
                    }
                    local_78._5_3_ = 0;
                    uVar100 = (int)uVar100 >> 1;
                    uVar102 = (int)((uVar102 + 1) - (uint)((uVar102 & 1) == 0)) >> 1;
                    if ((int)uVar102 < 1) {
                      uVar102 = 1;
                    }
                    lVar59 = uVar83 * 0x48;
                    iVar50 = *(int *)(lVar58 + 0x44 + lVar59);
                    local_88 = CONCAT44(uVar100,uVar99);
                    if (0 < iVar50) {
                      local_c8 = (float)((int)local_c8 >> 1);
                      if ((int)local_c8 < 1) {
                        local_c8 = 1.4013e-45;
                      }
                      fStack_c4 = (float)((int)fStack_c4 >> 1);
                      if ((int)fStack_c4 < 1) {
                        fStack_c4 = 1.4013e-45;
                      }
                      fStack_c0 = (float)((int)fStack_c0 >> 1);
                      if ((int)fStack_c0 < 1) {
                        fStack_c0 = 1.4013e-45;
                      }
                    }
                    local_78._8_8_ = uStack_80;
                    local_5c = (uint)(0 < iVar50);
                    uStack_80 = CONCAT44(uVar102,uVar101);
                    lVar58 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_add_barrier(lVar58);
                    lVar58 = *(long *)(this + 0x38);
                    if (lVar58 == 0) goto LAB_0011b340;
                    uVar81 = *(ulong *)(lVar58 + -8);
                    if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
                    if (*(int *)(lVar58 + 0x44 + lVar59) < 0) {
                      uVar61 = RenderingDevice::get_singleton();
                      RenderingDevice::compute_list_bind_compute_pipeline
                                (uVar61,pvVar60,*(undefined8 *)(*(long *)this + 0x2b8));
                    }
                    else if ((long)uVar83 < (long)(uVar81 - 1)) {
                      uVar61 = RenderingDevice::get_singleton();
                      RenderingDevice::compute_list_bind_compute_pipeline
                                (uVar61,pvVar60,*(undefined8 *)(*(long *)this + 0x2c8));
                    }
                    else {
                      uVar61 = RenderingDevice::get_singleton();
                      RenderingDevice::compute_list_bind_compute_pipeline
                                (uVar61,pvVar60,*(undefined8 *)(*(long *)this + 0x2c0));
                    }
                    uVar61 = RenderingDevice::get_singleton();
                    lVar58 = *(long *)(this + 0x38);
                    if (lVar58 == 0) goto LAB_0011b340;
                    uVar81 = *(ulong *)(lVar58 + -8);
                    if ((long)uVar81 <= (long)uVar83) goto LAB_001188a1;
                    uVar83 = uVar83 + 1;
                    RenderingDevice::compute_list_bind_uniform_set
                              (uVar61,pvVar60,*(undefined8 *)(lVar58 + 0x38 + lVar59),0);
                    lVar58 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_set_push_constant(lVar58,pvVar60,uVar57);
                    lVar58 = RenderingDevice::get_singleton();
                    RenderingDevice::compute_list_dispatch
                              (lVar58,(uint)pvVar60,(int)(uVar101 + 7) >> 3,(int)(uVar102 + 7) >> 3)
                    ;
                    lVar58 = *(long *)(this + 0x38);
                  } while (lVar58 != 0);
                }
                RenderingDevice::get_singleton();
                RenderingDevice::compute_list_end();
                Projection::~Projection((Projection *)local_108);
                local_488 = (CowData<RenderingDevice::Uniform> *)((long)local_488 + 0xc);
                local_458 = (undefined8 *)((long)local_458 + 0xc);
              } while (local_488 != (CowData<RenderingDevice::Uniform> *)0x120308);
              uVar62 = *(ulong *)(in_RCX + 0x28);
              uVar82 = uVar82 + 1;
            } while ((int)uVar82 < (int)uVar62);
          }
          this[0x50] = (VoxelGIInstance)0x1;
          goto LAB_00118170;
        }
      }
LAB_0011b430:
      uVar83 = 0;
LAB_001188a1:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar83,uVar81,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar64 = (code *)invalidInstructionException();
      (*pcVar64)();
    }
  }
LAB_00118170:
  plVar78 = *(long **)this;
LAB_00118173:
  uVar53 = (**(code **)(*plVar78 + 0xe8))(plVar78,*(undefined8 *)(this + 8));
  *(undefined4 *)(this + 0x44) = uVar53;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00117700:
  do {
    uVar82 = uVar62;
    if ((long)uVar81 <= (long)uVar62) {
      uVar82 = uVar81;
    }
    lVar58 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_set_push_constant(lVar58,pvVar60,(uint)&local_c8);
    lVar58 = RenderingDevice::get_singleton();
    RenderingDevice::compute_list_dispatch(lVar58,(uint)pvVar60,(uint)uVar82,1);
    local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + (uint)uVar82 * 0x40);
    uVar81 = uVar81 - uVar82;
  } while (uVar81 != 0);
  lVar58 = *(long *)(this + 0x28);
  uVar83 = uVar83 + 1;
  goto joined_r0x00117659;
LAB_0011b340:
  uVar81 = 0;
  goto LAB_001188a1;
}



/* RendererRD::GI::voxel_gi_update(RID, bool, Vector<RID> const&,
   PagedArray<RenderGeometryInstance*> const&) */

void RendererRD::GI::voxel_gi_update(long param_1,ulong param_2,byte param_3,PagedArray *param_4)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x7c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x78)) * 0x90 +
            *(long *)(*(long *)(param_1 + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x78)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      VoxelGIInstance::update(SUB81(lVar2,0),(Vector *)(ulong)param_3,param_4);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("voxel_gi_update","servers/rendering/renderer_rd/environment/gi.cpp",0x1011,
                   "Parameter \"voxel_gi\" is null.",0,0);
  return;
}



/* Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back(RenderingDeviceCommons::PipelineSpecializationConstant)
   [clone .isra.0] */

void Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
                    ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)
                     (param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
                  ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)(param_1 + 8))
        ;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0xc);
        *puVar1 = param_2;
        *(undefined4 *)(puVar1 + 1) = param_3;
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
/* RendererRD::GI::init(RendererRD::SkyRD*) */

void __thiscall RendererRD::GI::init(GI *this,SkyRD *param_1)

{
  long *plVar1;
  Vector *pVVar2;
  ulong uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  char cVar9;
  GI GVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  GI *pGVar26;
  long in_FS_OFFSET;
  long local_160;
  String local_158 [8];
  undefined8 local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined2 local_118;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined4 uStack_114;
  undefined4 local_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined2 local_c8;
  undefined8 local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68 [4];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = RendererRD::TextureStorage::get_singleton();
  lVar14 = RendererRD::MaterialStorage::get_singleton();
  uVar25 = (ulong)*(uint *)(this + 0xc0);
  if (uVar25 != 0) {
    lVar15 = Memory::alloc_static(uVar25 << 6,true);
    if (lVar15 != 0) {
      *(ulong *)(lVar15 + -8) = uVar25;
      goto LAB_0011bb01;
    }
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  lVar15 = 0;
LAB_0011bb01:
  *(long *)(this + 0xb8) = lVar15;
  uVar16 = RenderingDevice::get_singleton();
  local_b0 = 0;
  uStack_ac = 0;
  uVar16 = RenderingDevice::uniform_buffer_create
                     (uVar16,*(int *)(this + 0xc0) << 6,(StringName *)&local_b8,0);
  *(undefined8 *)(this + 200) = uVar16;
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_ac,local_b0);
      local_b0 = 0;
      uStack_ac = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_b8,"rendering/global_illumination/voxel_gi/quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_68);
  iVar11 = Variant::operator_cast_to_int((Variant *)local_68);
  if (0 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  *(int *)(this + 0x1650) = iVar11;
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = 0;
  local_b8 = &_LC314;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_118);
  operator+((char *)&local_b8,(String *)"\n#define MAX_LIGHTS ");
  String::operator+((String *)&local_138,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  uStack_e0 = 0;
  local_b8 = "\n#define MODE_COMPUTE_LIGHT\n";
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b0 = 0x1c;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_SECOND_BOUNCE\n";
  local_b0 = 0x1c;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_UPDATE_MIPMAPS\n";
  local_b0 = 0x1d;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_WRITE_TEXTURE\n";
  local_b0 = 0x1c;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_DYNAMIC\n#define MODE_DYNAMIC_LIGHTING\n";
  local_b0 = 0x34;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = 
  "\n#define MODE_DYNAMIC\n#define MODE_DYNAMIC_SHRINK\n#define MODE_DYNAMIC_SHRINK_WRITE\n";
  local_b0 = 0x54;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = 
  "\n#define MODE_DYNAMIC\n#define MODE_DYNAMIC_SHRINK\n#define MODE_DYNAMIC_SHRINK_PLOT\n";
  local_b0 = 0x53;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = 
  "\n#define MODE_DYNAMIC\n#define MODE_DYNAMIC_SHRINK\n#define MODE_DYNAMIC_SHRINK_PLOT\n#define MODE_DYNAMIC_SHRINK_WRITE\n"
  ;
  local_b0 = 0x75;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar25 = 0;
  pVVar2 = (Vector *)(this + 0xd0);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,(String *)&local_e8,(Vector *)&local_138);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar16 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x248) = uVar16;
  do {
    uVar3 = *(ulong *)(this + 0x248);
    if (*(long *)(this + 0xe8) == 0) {
      lVar15 = 0;
LAB_0011d433:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                 lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_0011d46d:
      uVar16 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0xe8) + -8);
      if (lVar15 <= (long)uVar25) goto LAB_0011d433;
      lVar15 = *(long *)(this + 0xf8);
      if (lVar15 == 0) goto LAB_0011d380;
      lVar22 = *(long *)(lVar15 + -8);
      uVar17 = uVar25;
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      if (*(char *)(lVar15 + uVar25) != '\0') {
        if ((uVar3 == 0) || (*(uint *)(this + 0x1a4) <= (uint)uVar3)) {
LAB_0011d7f0:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar16 = 0;
          goto LAB_0011c118;
        }
        lVar15 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1a0)) * 0xa0 +
                 *(long *)(*(long *)(this + 400) +
                          ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1a0)) * 8);
        if (*(int *)(lVar15 + 0x98) != (int)(uVar3 >> 0x20)) {
          if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011d7f0;
        }
        iVar11 = (int)lVar15;
        if (*(char *)(lVar15 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar22 = *(long *)(this + 0x148);
          if (lVar22 != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(lVar22 + -8) <= lVar24) break;
              if (*(char *)(lVar22 + lVar24) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
              }
              lVar22 = *(long *)(this + 0x148);
              lVar24 = lVar24 + 1;
            } while (lVar22 != 0);
          }
        }
        lVar24 = *(long *)(this + 0x108);
        if (lVar24 == 0) {
LAB_0011d380:
          lVar22 = 0;
          uVar17 = uVar25;
        }
        else {
          lVar22 = *(long *)(lVar24 + -8);
          if ((long)uVar25 < lVar22) {
            uVar17 = (ulong)*(uint *)(lVar24 + uVar25 * 4);
            lVar24 = *(long *)(lVar15 + 0x68);
            if (lVar24 != 0) {
              lVar22 = *(long *)(lVar24 + -8);
              if ((long)uVar17 < lVar22) {
                if (*(long *)(lVar24 + uVar17 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
                }
                if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_0011d46d;
                lVar15 = *(long *)(lVar15 + 0x88);
                if (lVar15 != 0) {
                  lVar22 = *(long *)(lVar15 + -8);
                  uVar17 = uVar25;
                  if ((long)uVar25 < lVar22) {
                    uVar16 = *(undefined8 *)(lVar15 + uVar25 * 8);
                    goto LAB_0011c118;
                  }
                  goto LAB_0011d3a1;
                }
                goto LAB_0011d380;
              }
              goto LAB_0011d3a1;
            }
            goto LAB_0011d670;
          }
        }
        goto LAB_0011d3a1;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar16 = 0;
    }
LAB_0011c118:
    *(undefined8 *)(this + uVar25 * 8 + 0x250) = uVar16;
    uVar16 = RenderingDevice::get_singleton();
    local_b0 = 0;
    uStack_ac = 0;
    uVar16 = RenderingDevice::compute_pipeline_create
                       (uVar16,*(undefined8 *)(this + (long)(int)uVar25 * 8 + 0x250),
                        (StringName *)&local_b8);
    *(undefined8 *)(this + ((long)(int)uVar25 + 0x52) * 8) = uVar16;
    if (CONCAT44(uStack_ac,local_b0) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar15 = CONCAT44(uStack_ac,local_b0);
        local_b0 = 0;
        uStack_ac = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    uVar25 = uVar25 + 1;
  } while (uVar25 != 8);
  CowData<String>::_unref((CowData<String> *)&uStack_e0);
  lVar15 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_b8 = "\n#define MODE_DEBUG_COLOR\n";
  local_160 = 0;
  local_150 = 0;
  local_e8 = 0;
  local_b0 = 0x1a;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_DEBUG_LIGHT\n";
  local_b0 = 0x1a;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_DEBUG_EMISSION\n";
  local_b0 = 0x1d;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_DEBUG_LIGHT\n#define MODE_DEBUG_LIGHT_FULL\n";
  local_b0 = 0x38;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0x2d0);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,local_158,(Vector *)&local_160);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar25 = 0;
  uVar16 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x448) = uVar16;
  pGVar26 = this + 0x470;
  do {
    uVar3 = *(ulong *)(this + 0x448);
    if (*(long *)(this + 0x2e8) == 0) {
      lVar15 = 0;
LAB_0011d6cb:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                 lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_0011d705:
      uVar16 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0x2e8) + -8);
      if (lVar15 <= (long)uVar25) goto LAB_0011d6cb;
      lVar15 = *(long *)(this + 0x2f8);
      if (lVar15 == 0) goto LAB_0011d820;
      lVar22 = *(long *)(lVar15 + -8);
      uVar17 = uVar25;
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      if (*(char *)(lVar15 + uVar25) != '\0') {
        if ((uVar3 == 0) || (*(uint *)(this + 0x3a4) <= (uint)uVar3)) {
LAB_0011da20:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          uVar16 = 0;
          goto LAB_0011c4e4;
        }
        lVar15 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3a0)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x390) +
                          ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3a0)) * 8);
        if (*(int *)(lVar15 + 0x98) != (int)(uVar3 >> 0x20)) {
          if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011da20;
        }
        iVar11 = (int)lVar15;
        if (*(char *)(lVar15 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar22 = *(long *)(this + 0x348);
          if (lVar22 != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(lVar22 + -8) <= lVar24) break;
              if (*(char *)(lVar22 + lVar24) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
              }
              lVar22 = *(long *)(this + 0x348);
              lVar24 = lVar24 + 1;
            } while (lVar22 != 0);
          }
        }
        lVar24 = *(long *)(this + 0x308);
        if (lVar24 != 0) {
          lVar22 = *(long *)(lVar24 + -8);
          if ((long)uVar25 < lVar22) {
            uVar17 = (ulong)*(uint *)(lVar24 + uVar25 * 4);
            lVar24 = *(long *)(lVar15 + 0x68);
            if (lVar24 != 0) {
              lVar22 = *(long *)(lVar24 + -8);
              if ((long)uVar17 < lVar22) {
                if (*(long *)(lVar24 + uVar17 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
                }
                if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_0011d705;
                lVar15 = *(long *)(lVar15 + 0x88);
                if (lVar15 != 0) {
                  lVar22 = *(long *)(lVar15 + -8);
                  uVar17 = uVar25;
                  if ((long)uVar25 < lVar22) {
                    uVar16 = *(undefined8 *)(lVar15 + uVar25 * 8);
                    goto LAB_0011c4e4;
                  }
                  goto LAB_0011d3a1;
                }
                goto LAB_0011d820;
              }
              goto LAB_0011d3a1;
            }
            goto LAB_0011d670;
          }
          goto LAB_0011d3a1;
        }
        goto LAB_0011d820;
      }
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0);
      uVar16 = 0;
    }
LAB_0011c4e4:
    *(undefined8 *)(this + uVar25 * 8 + 0x450) = uVar16;
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_e0 = 0;
    local_118 = 0;
    uStack_116 = 0;
    uStack_10c = uStack_10c & 0xffffff00;
    local_f8 = 1;
    uStack_114 = 1;
    local_110 = 0;
    local_b0 = local_b0 & 0xffffff00;
    uStack_ac = 0;
    local_a8 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    local_70 = 0;
    local_b8._0_4_ = (undefined4)CONCAT62(local_b8._2_6_,(short)_LC332);
    local_b8 = (char *)CONCAT44(6,(undefined4)local_b8);
    local_140 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_68[1] = 0;
    local_58 = 0;
    uStack_11c = _LC332;
    local_108 = __LC328;
    uStack_100 = _UNK_00146818;
    local_a0 = _LC284;
    uStack_98 = _UNK_00146828;
    local_90 = __LC330;
    pcStack_88 = _LC110;
    local_80 = __LC331;
    uStack_78 = _UNK_00146848;
    local_50 = __LC328;
    uStack_48 = _UNK_00146818;
    local_e8 = 0;
    uStack_d0 = (ulong)_LC332 << 0x20;
    local_d8 = 0;
    iVar11 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                       ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                        &local_58,1);
    if (iVar11 == 0) {
      if (local_58 == 0) {
        lVar15 = 0;
        lVar22 = -1;
      }
      else {
        lVar15 = *(long *)(local_58 + -8);
        lVar22 = lVar15 + -1;
        if (-1 < lVar22) {
          CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                    ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                     &local_58);
          puVar23 = (ulong *)(lVar22 * 0x20 + local_58);
          *puVar23 = local_e8;
          puVar23[1] = uStack_e0;
          puVar23[2] = local_d8;
          puVar23[3] = uStack_d0;
          goto LAB_0011c684;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar22,lVar15,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_0011c684:
    local_e8 = local_e8 & 0xffffff0000000000;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    local_c8 = 0;
    uStack_d0 = 0;
    pcVar20 = (char *)&local_b8;
    PipelineCacheRD::setup
              (pGVar26,*(undefined8 *)(this + (long)(int)uVar25 * 8 + 0x450),5,
               (StrRange *)&local_118,(StrRange *)&local_e8,(StringName *)&local_b8,
               (StringName *)local_68,0,(String *)&local_148);
    uVar3 = uStack_d0;
    if (uStack_d0 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_d0 = 0;
        Memory::free_static((void *)(uVar3 + -0x10),false);
      }
    }
    lVar15 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar1 = (long *)(local_140 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    uVar25 = uVar25 + 1;
    pGVar26 = pGVar26 + 0x138;
  } while (uVar25 != 4);
  CowData<String>::_unref((CowData<String> *)&local_150);
  lVar15 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uStack_e0 = 0;
  local_b8 = "\n#define MODE_SCROLL\n";
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b0 = 0x15;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_SCROLL_OCCLUSION\n";
  local_b0 = 0x1f;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_INITIALIZE_JUMP_FLOOD\n";
  local_b0 = 0x24;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_INITIALIZE_JUMP_FLOOD_HALF\n";
  local_b0 = 0x29;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_JUMPFLOOD\n";
  local_b0 = 0x18;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_JUMPFLOOD_OPTIMIZED\n";
  local_b0 = 0x22;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_UPSCALE_JUMP_FLOOD\n";
  local_b0 = 0x21;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_OCCLUSION\n";
  local_b0 = 0x18;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_STORE\n";
  local_b0 = 0x14;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n";
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  itos((long)&local_138);
  operator+((char *)&local_b8,(String *)"\n#define OCCLUSION_SIZE ");
  String::operator+((String *)&local_148,(String *)&local_b8);
  pcVar4 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar15 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0x958);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,(String *)&local_e8,(Vector *)&local_148);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar25 = 0;
  uVar16 = ShaderRD::version_create();
  *(undefined8 *)(this + 0xad0) = uVar16;
  do {
    uVar16 = RenderingDevice::get_singleton();
    uVar3 = *(ulong *)(this + 0xad0);
    local_b0 = 0;
    uStack_ac = 0;
    if (*(long *)(this + 0x970) == 0) {
      lVar15 = 0;
LAB_0011da4f:
      pcVar20 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                 lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_0011da89:
      uVar18 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0x970) + -8);
      if (lVar15 <= (long)uVar25) goto LAB_0011da4f;
      lVar15 = *(long *)(this + 0x980);
      if (lVar15 == 0) goto LAB_0011d820;
      lVar22 = *(long *)(lVar15 + -8);
      uVar17 = uVar25;
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      if (*(char *)(lVar15 + uVar25) != '\0') {
        if ((uVar3 == 0) || (*(uint *)(this + 0xa2c) <= (uint)uVar3)) {
LAB_0011f7f0:
          pcVar20 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar18 = 0;
          goto LAB_0011cee3;
        }
        lVar15 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0xa28)) * 0xa0 +
                 *(long *)(*(long *)(this + 0xa18) +
                          ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0xa28)) * 8);
        if (*(int *)(lVar15 + 0x98) != (int)(uVar3 >> 0x20)) {
          if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011f7f0;
        }
        iVar11 = (int)lVar15;
        if (*(char *)(lVar15 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar22 = *(long *)(this + 0x9d0);
          if (lVar22 != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(lVar22 + -8) <= lVar24) break;
              if (*(char *)(lVar22 + lVar24) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
              }
              lVar22 = *(long *)(this + 0x9d0);
              lVar24 = lVar24 + 1;
            } while (lVar22 != 0);
          }
        }
        lVar24 = *(long *)(this + 0x990);
        if (lVar24 != 0) {
          lVar22 = *(long *)(lVar24 + -8);
          if ((long)uVar25 < lVar22) {
            uVar17 = (ulong)*(uint *)(lVar24 + uVar25 * 4);
            lVar24 = *(long *)(lVar15 + 0x68);
            if (lVar24 != 0) {
              lVar22 = *(long *)(lVar24 + -8);
              if ((long)uVar17 < lVar22) {
                if (*(long *)(lVar24 + uVar17 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
                }
                if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_0011da89;
                lVar15 = *(long *)(lVar15 + 0x88);
                if (lVar15 != 0) {
                  lVar22 = *(long *)(lVar15 + -8);
                  uVar17 = uVar25;
                  if ((long)uVar25 < lVar22) {
                    uVar18 = *(undefined8 *)(lVar15 + uVar25 * 8);
                    goto LAB_0011cee3;
                  }
                  goto LAB_0011d3a1;
                }
                goto LAB_0011d820;
              }
              goto LAB_0011d3a1;
            }
            goto LAB_0011d670;
          }
          goto LAB_0011d3a1;
        }
        goto LAB_0011d820;
      }
      pcVar20 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar18 = 0;
    }
LAB_0011cee3:
    uVar16 = RenderingDevice::compute_pipeline_create(uVar16,uVar18,(StringName *)&local_b8);
    *(undefined8 *)(this + ((long)(int)uVar25 + 0x15a) * 8 + 8) = uVar16;
    if (CONCAT44(uStack_ac,local_b0) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar15 = CONCAT44(uStack_ac,local_b0);
        local_b0 = 0;
        uStack_ac = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    lVar15 = local_148;
    uVar25 = uVar25 + 1;
  } while (uVar25 != 9);
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&uStack_e0);
  local_b8 = &_LC314;
  local_e8 = 0;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_118);
  operator+((char *)&local_b8,(String *)"\n#define OCT_SIZE ");
  String::operator+((String *)&local_138,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  uStack_e0 = 0;
  local_b8 = "\n#define MODE_PROCESS_STATIC\n";
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b0 = 0x1d;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b8 = "\n#define MODE_PROCESS_DYNAMIC\n";
  local_b0 = 0x1e;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0x1318);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,(String *)&local_e8,(Vector *)&local_138);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar25 = 0;
  uVar16 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1490) = uVar16;
  do {
    uVar16 = RenderingDevice::get_singleton();
    uVar3 = *(ulong *)(this + 0x1490);
    local_b0 = 0;
    uStack_ac = 0;
    if (*(long *)(this + 0x1330) == 0) {
      lVar15 = 0;
LAB_0011dacb:
      pcVar20 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                 lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_0011db05:
      uVar18 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0x1330) + -8);
      if (lVar15 <= (long)uVar25) goto LAB_0011dacb;
      lVar15 = *(long *)(this + 0x1340);
      uVar17 = uVar25;
      if (lVar15 == 0) goto LAB_0011f929;
      lVar22 = *(long *)(lVar15 + -8);
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      if (*(char *)(lVar15 + uVar25) != '\0') {
        if ((uVar3 == 0) || (*(uint *)(this + 0x13ec) <= (uint)uVar3)) {
LAB_0011db50:
          pcVar20 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar18 = 0;
          goto LAB_0011d31a;
        }
        lVar15 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x13e8)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x13d8) +
                          ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x13e8)) * 8);
        if (*(int *)(lVar15 + 0x98) != (int)(uVar3 >> 0x20)) {
          if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011db50;
        }
        iVar11 = (int)lVar15;
        if (*(char *)(lVar15 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar22 = *(long *)(this + 0x1390);
          if (lVar22 != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(lVar22 + -8) <= lVar24) break;
              if (*(char *)(lVar22 + lVar24) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
              }
              lVar22 = *(long *)(this + 0x1390);
              lVar24 = lVar24 + 1;
            } while (lVar22 != 0);
          }
        }
        lVar24 = *(long *)(this + 0x1350);
        if (lVar24 == 0) {
LAB_0011f929:
          lVar22 = 0;
          uVar17 = uVar25;
        }
        else {
          lVar22 = *(long *)(lVar24 + -8);
          if ((long)uVar25 < lVar22) {
            uVar17 = (ulong)*(uint *)(lVar24 + uVar25 * 4);
            lVar24 = *(long *)(lVar15 + 0x68);
            if (lVar24 != 0) {
              lVar22 = *(long *)(lVar24 + -8);
              if ((long)uVar17 < lVar22) {
                if (*(long *)(lVar24 + uVar17 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
                }
                if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_0011db05;
                lVar15 = *(long *)(lVar15 + 0x88);
                if (lVar15 == 0) goto LAB_0011f929;
                lVar22 = *(long *)(lVar15 + -8);
                uVar17 = uVar25;
                if ((long)uVar25 < lVar22) {
                  uVar18 = *(undefined8 *)(lVar15 + uVar25 * 8);
                  goto LAB_0011d31a;
                }
              }
              goto LAB_0011d3a1;
            }
            goto LAB_0011d670;
          }
        }
        goto LAB_0011d3a1;
      }
      pcVar20 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar18 = 0;
    }
LAB_0011d31a:
    uVar16 = RenderingDevice::compute_pipeline_create(uVar16,uVar18,(StringName *)&local_b8);
    *(undefined8 *)(this + ((long)(int)uVar25 + 0x292) * 8 + 8) = uVar16;
    if (CONCAT44(uStack_ac,local_b0) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar15 = CONCAT44(uStack_ac,local_b0);
        local_b0 = 0;
        uStack_ac = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    if (uVar25 != 0) break;
    uVar25 = 1;
  } while( true );
  CowData<String>::_unref((CowData<String> *)&uStack_e0);
  lVar15 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = &_LC314;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_118);
  operator+((char *)&local_b8,(String *)"\n#define OCT_SIZE ");
  String::operator+((String *)&local_148,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = &_LC314;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_138);
  operator+((char *)&local_118,(String *)"\n#define SH_SIZE ");
  String::operator+((String *)&local_b8,(String *)&local_118);
  String::operator+=((String *)&local_148,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar15 != 0) {
    LOCK();
    plVar1 = (long *)(lVar15 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  if (param_1[0x8d4] != (SkyRD)0x0) {
    String::operator+=((String *)&local_148,"\n#define USE_CUBEMAP_ARRAY\n");
  }
  local_110 = 0;
  uStack_10c = 0;
  local_b8 = "\n#define MODE_PROCESS\n";
  local_e8 = 0;
  local_b0 = 0x16;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_STORE\n";
  local_b0 = 0x14;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_SCROLL\n";
  local_b0 = 0x15;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_SCROLL_STORE\n";
  local_b0 = 0x1b;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0x14a8);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,(String *)&local_118,(Vector *)&local_148);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar25 = 0;
  uVar16 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1620) = uVar16;
  do {
    uVar16 = RenderingDevice::get_singleton();
    uVar3 = *(ulong *)(this + 0x1620);
    local_b0 = 0;
    uStack_ac = 0;
    if (*(long *)(this + 0x14c0) == 0) {
      lVar15 = 0;
LAB_0011f692:
      pcVar20 = "p_variant";
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                 lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_0011f6cc:
      uVar18 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0x14c0) + -8);
      if (lVar15 <= (long)uVar25) goto LAB_0011f692;
      lVar15 = *(long *)(this + 0x14d0);
      if (lVar15 == 0) goto LAB_0011d820;
      lVar22 = *(long *)(lVar15 + -8);
      uVar17 = uVar25;
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      if (*(char *)(lVar15 + uVar25) != '\0') {
        if ((uVar3 == 0) || (*(uint *)(this + 0x157c) <= (uint)uVar3)) {
LAB_0011fa69:
          pcVar20 = (char *)0x0;
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.");
          uVar18 = 0;
          goto LAB_0011e219;
        }
        lVar15 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1578)) * 0xa0 +
                 *(long *)(*(long *)(this + 0x1568) +
                          ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1578)) * 8);
        if (*(int *)(lVar15 + 0x98) != (int)(uVar3 >> 0x20)) {
          if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0011fa69;
        }
        iVar11 = (int)lVar15;
        if (*(char *)(lVar15 + 0x91) != '\0') {
          ShaderRD::_initialize_version((Version *)pVVar2);
          lVar22 = *(long *)(this + 0x1520);
          if (lVar22 != 0) {
            lVar24 = 0;
            do {
              if (*(long *)(lVar22 + -8) <= lVar24) break;
              if (*(char *)(lVar22 + lVar24) == '\0') {
                ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
              }
              else {
                ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
              }
              lVar22 = *(long *)(this + 0x1520);
              lVar24 = lVar24 + 1;
            } while (lVar22 != 0);
          }
        }
        lVar24 = *(long *)(this + 0x14e0);
        if (lVar24 == 0) {
LAB_0011d820:
          lVar22 = 0;
          uVar17 = uVar25;
        }
        else {
          lVar22 = *(long *)(lVar24 + -8);
          if ((long)uVar25 < lVar22) {
            uVar17 = (ulong)*(uint *)(lVar24 + uVar25 * 4);
            lVar24 = *(long *)(lVar15 + 0x68);
            if (lVar24 != 0) {
              lVar22 = *(long *)(lVar24 + -8);
              if ((long)uVar17 < lVar22) {
                if (*(long *)(lVar24 + uVar17 * 8) != 0) {
                  ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
                }
                if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_0011f6cc;
                lVar15 = *(long *)(lVar15 + 0x88);
                if (lVar15 != 0) {
                  lVar22 = *(long *)(lVar15 + -8);
                  uVar17 = uVar25;
                  if ((long)uVar25 < lVar22) {
                    uVar18 = *(undefined8 *)(lVar15 + uVar25 * 8);
                    goto LAB_0011e219;
                  }
                  goto LAB_0011d3a1;
                }
                goto LAB_0011d820;
              }
              goto LAB_0011d3a1;
            }
            goto LAB_0011d670;
          }
        }
        goto LAB_0011d3a1;
      }
      pcVar20 = (char *)0x0;
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar18 = 0;
    }
LAB_0011e219:
    uVar16 = RenderingDevice::compute_pipeline_create(uVar16,uVar18,(StringName *)&local_b8);
    *(undefined8 *)(this + ((long)(int)uVar25 + 0x2c4) * 8 + 8) = uVar16;
    if (CONCAT44(uStack_ac,local_b0) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar15 = CONCAT44(uStack_ac,local_b0);
        local_b0 = 0;
        uStack_ac = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
    uVar25 = uVar25 + 1;
  } while (uVar25 != 4);
  uStack_e0 = 0;
  if (param_1[0x8d4] == (SkyRD)0x0) {
    uVar16 = *(undefined8 *)(lVar13 + 0x60);
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x68);
  }
  local_a8 = (undefined4)uVar16;
  uStack_a4 = (uint)((ulong)uVar16 >> 0x20);
  local_b8 = (char *)0x2;
  local_b0 = local_b0 & 0xffffff00;
  uStack_98 = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_e8,(StringName *)&local_b8);
  local_b0 = local_b0 & 0xffffff00;
  local_b8 = _LC110;
  local_a8 = (undefined4)*(undefined8 *)(lVar14 + 0x90);
  uStack_a4 = (uint)((ulong)*(undefined8 *)(lVar14 + 0x90) >> 0x20);
  uStack_98 = 0;
  Vector<RenderingDevice::Uniform>::push_back
            ((Vector<RenderingDevice::Uniform> *)&local_e8,(StringName *)&local_b8);
  uVar16 = RenderingDevice::get_singleton();
  uVar25 = *(ulong *)(this + 0x1620);
  if (*(long *)(this + 0x14c0) != 0) {
    lVar13 = *(long *)(*(long *)(this + 0x14c0) + -8);
    if (lVar13 < 1) goto LAB_0011f723;
    pcVar4 = *(char **)(this + 0x14d0);
    if (pcVar4 != (char *)0x0) {
      lVar22 = *(long *)(pcVar4 + -8);
      if (lVar22 < 1) goto LAB_0011fac0;
      if (*pcVar4 == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar18 = 0;
        goto LAB_0011e442;
      }
      if ((uVar25 == 0) || (*(uint *)(this + 0x157c) <= (uint)uVar25)) {
LAB_0011fc9e:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.");
        uVar18 = 0;
        goto LAB_0011e442;
      }
      lVar13 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0x1578)) * 0xa0 +
               *(long *)(*(long *)(this + 0x1568) +
                        ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0x1578)) * 8);
      if (*(int *)(lVar13 + 0x98) != (int)(uVar25 >> 0x20)) {
        if (*(int *)(lVar13 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,pcVar20);
        }
        goto LAB_0011fc9e;
      }
      iVar11 = (int)lVar13;
      if (*(char *)(lVar13 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)pVVar2);
        lVar14 = *(long *)(this + 0x1520);
        if (lVar14 != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(lVar14 + -8) <= lVar15) break;
            if (*(char *)(lVar14 + lVar15) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
            }
            else {
              ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
            }
            lVar14 = *(long *)(this + 0x1520);
            lVar15 = lVar15 + 1;
          } while (lVar14 != 0);
        }
      }
      puVar5 = *(uint **)(this + 0x14e0);
      if (puVar5 == (uint *)0x0) goto LAB_0011fabd;
      lVar22 = *(long *)(puVar5 + -2);
      if (0 < lVar22) {
        uVar17 = (ulong)*puVar5;
        lVar14 = *(long *)(lVar13 + 0x68);
        if (lVar14 != 0) {
          lVar22 = *(long *)(lVar14 + -8);
          if (lVar22 <= (long)uVar17) goto LAB_0011d3a1;
          if (*(long *)(lVar14 + uVar17 * 8) != 0) {
            ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
          }
          if (*(char *)(lVar13 + 0x90) != '\0') {
            puVar6 = *(undefined8 **)(lVar13 + 0x88);
            if (puVar6 == (undefined8 *)0x0) goto LAB_0011fabd;
            lVar22 = puVar6[-1];
            if (0 < lVar22) {
              uVar18 = *puVar6;
              goto LAB_0011e442;
            }
            goto LAB_0011fac0;
          }
          goto LAB_0011f75c;
        }
LAB_0011d670:
        lVar22 = 0;
        goto LAB_0011d3a1;
      }
      goto LAB_0011fac0;
    }
LAB_0011fabd:
    lVar22 = 0;
LAB_0011fac0:
    uVar17 = 0;
LAB_0011d3a1:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar17,lVar22,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar13 = 0;
LAB_0011f723:
  _err_print_index_error
            ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar13,
             "p_variant","variant_defines.size()","",false,false);
LAB_0011f75c:
  uVar18 = 0;
LAB_0011e442:
  uVar16 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar16,(StrRange *)&local_e8,uVar18,1);
  *(undefined8 *)(this + 0x1648) = uVar16;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
  CowData<String>::_unref((CowData<String> *)&local_110);
  lVar13 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = &_LC314;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_118);
  operator+((char *)&local_b8,(String *)"\n#define SDFGI_OCT_SIZE ");
  String::operator+((String *)&local_138,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar13 != 0) {
    LOCK();
    plVar1 = (long *)(lVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  cVar9 = (**(code **)(*RendererSceneRenderRD::singleton + 0x278))();
  if (cVar9 != '\0') {
    String::operator+=((String *)&local_138,"\n#define USE_VRS\n");
  }
  uVar16 = RenderingDevice::get_singleton();
  cVar9 = RenderingDevice::sampler_is_format_supported_for_filter(uVar16,0x13,1);
  if (cVar9 == '\0') {
    String::operator+=((String *)&local_138,"\n#define SAMPLE_VOXEL_GI_NEAREST\n");
  }
  local_110 = 0;
  uStack_10c = 0;
  local_b8 = "\n#define USE_VOXEL_GI_INSTANCES\n";
  local_e8 = 0;
  local_b0 = 0x20;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define USE_SDFGI\n";
  local_b0 = 0x13;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define USE_SDFGI\n\n#define USE_VOXEL_GI_INSTANCES\n";
  local_b0 = 0x33;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)&local_118);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0x16a8);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,(String *)&local_118,(Vector *)&local_138);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar16 = ShaderRD::version_create();
  *(undefined8 *)(this + 0x1820) = uVar16;
  uStack_e0 = 0;
  local_b0 = 0;
  local_b8 = (char *)0x0;
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            ((StrRange *)&local_e8,0,0);
  local_b8 = (char *)CONCAT44(1,(undefined4)local_b8);
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            ((StrRange *)&local_e8,local_b8,local_b0);
  local_b8 = (char *)CONCAT44(2,(undefined4)local_b8);
  Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back
            ((StrRange *)&local_e8,local_b8,local_b0);
  iVar11 = 0;
  do {
    uVar25 = 0;
    CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
              ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&uStack_e0);
    *(byte *)(uStack_e0 + 8) = -((byte)iVar11 & 1);
    *(byte *)(uStack_e0 + 8) = *(byte *)(uStack_e0 + 8) & 1;
    CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
              ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&uStack_e0);
    *(char *)(uStack_e0 + 0x14) = (char)(iVar11 >> 1);
    *(byte *)(uStack_e0 + 0x14) = *(byte *)(uStack_e0 + 0x14) & 1;
    CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write
              ((CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *)&uStack_e0);
    *(char *)(uStack_e0 + 0x20) = (char)(iVar11 >> 2);
    *(byte *)(uStack_e0 + 0x20) = *(byte *)(uStack_e0 + 0x20) & 1;
    do {
      uVar16 = RenderingDevice::get_singleton();
      iVar21 = (int)uVar25;
      uVar3 = *(ulong *)(this + 0x1820);
      if (*(long *)(this + 0x16c0) == 0) {
        lVar13 = 0;
LAB_0011f6db:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                   lVar13,"p_variant","variant_defines.size()","",false,false);
LAB_0011f715:
        uVar18 = 0;
      }
      else {
        lVar13 = *(long *)(*(long *)(this + 0x16c0) + -8);
        if (lVar13 <= (long)uVar25) goto LAB_0011f6db;
        lVar13 = *(long *)(this + 0x16d0);
        if (lVar13 == 0) goto LAB_0011d380;
        lVar22 = *(long *)(lVar13 + -8);
        uVar17 = uVar25;
        if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
        if (*(char *)(lVar13 + uVar25) != '\0') {
          if ((uVar3 == 0) || (*(uint *)(this + 0x177c) <= (uint)uVar3)) {
LAB_0011fbd8:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.");
            uVar18 = 0;
            goto LAB_0011e9d7;
          }
          lVar13 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1778)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x1768) +
                            ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1778)) * 8);
          if (*(int *)(lVar13 + 0x98) != (int)(uVar3 >> 0x20)) {
            if (*(int *)(lVar13 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,*(long *)(this + 0x1768)
                              );
            }
            goto LAB_0011fbd8;
          }
          iVar19 = (int)lVar13;
          if (*(char *)(lVar13 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)pVVar2);
            lVar14 = *(long *)(this + 0x1720);
            if (lVar14 != 0) {
              lVar15 = 0;
              do {
                if (*(long *)(lVar14 + -8) <= lVar15) break;
                if (*(char *)(lVar14 + lVar15) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar19);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)pVVar2,iVar19);
                }
                lVar14 = *(long *)(this + 0x1720);
                lVar15 = lVar15 + 1;
              } while (lVar14 != 0);
            }
          }
          lVar14 = *(long *)(this + 0x16e0);
          if (lVar14 != 0) {
            lVar22 = *(long *)(lVar14 + -8);
            if ((long)uVar25 < lVar22) {
              uVar17 = (ulong)*(uint *)(lVar14 + uVar25 * 4);
              lVar14 = *(long *)(lVar13 + 0x68);
              if (lVar14 != 0) {
                lVar22 = *(long *)(lVar14 + -8);
                if ((long)uVar17 < lVar22) {
                  if (*(long *)(lVar14 + uVar17 * 8) != 0) {
                    ShaderRD::_compile_version_end((Version *)pVVar2,iVar19);
                  }
                  if (*(char *)(lVar13 + 0x90) == '\0') goto LAB_0011f715;
                  lVar13 = *(long *)(lVar13 + 0x88);
                  if (lVar13 != 0) {
                    lVar22 = *(long *)(lVar13 + -8);
                    uVar17 = uVar25;
                    if ((long)uVar25 < lVar22) {
                      uVar18 = *(undefined8 *)(lVar13 + uVar25 * 8);
                      goto LAB_0011e9d7;
                    }
                    goto LAB_0011d3a1;
                  }
                  goto LAB_0011d380;
                }
                goto LAB_0011d3a1;
              }
              goto LAB_0011d670;
            }
            goto LAB_0011d3a1;
          }
          goto LAB_0011d380;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
        uVar18 = 0;
      }
LAB_0011e9d7:
      uVar25 = uVar25 + 1;
      uVar16 = RenderingDevice::compute_pipeline_create(uVar16,uVar18,(StrRange *)&local_e8);
      *(undefined8 *)(this + ((long)iVar21 + 0x304 + (long)iVar11 * 3) * 8 + 8) = uVar16;
    } while (uVar25 != 3);
    iVar11 = iVar11 + 1;
  } while (iVar11 != 8);
  uVar16 = RenderingDevice::get_singleton();
  local_b0 = 0;
  uStack_ac = 0;
  uVar16 = RenderingDevice::uniform_buffer_create(uVar16,0x1f0,(StringName *)&local_b8,0);
  *(undefined8 *)(this + 0x1690) = uVar16;
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar13 = CONCAT44(uStack_ac,local_b0);
      local_b0 = 0;
      uStack_ac = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  uVar25 = uStack_e0;
  if (uStack_e0 != 0) {
    LOCK();
    plVar1 = (long *)(uStack_e0 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uStack_e0 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_110);
  lVar13 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = &_LC314;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_118);
  operator+((char *)&local_b8,(String *)"\n#define OCT_SIZE ");
  String::operator+((String *)&local_138,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar13 != 0) {
    LOCK();
    plVar1 = (long *)(lVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  uStack_e0 = 0;
  local_b8 = "";
  local_118 = 0;
  uStack_116 = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_118);
  Vector<String>::push_back((Vector<String> *)&local_e8);
  lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar13 != 0) {
    LOCK();
    plVar1 = (long *)(lVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0xb20);
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,(String *)&local_e8,(Vector *)&local_138);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar25 = ShaderRD::version_create();
  *(ulong *)(this + 0xc98) = uVar25;
  if (*(long *)(this + 0xb38) == 0) {
    lVar13 = 0;
LAB_0011f766:
    _err_print_index_error
              ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar13,
               "p_variant","variant_defines.size()","",false,false);
  }
  else {
    lVar13 = *(long *)(*(long *)(this + 0xb38) + -8);
    if (lVar13 < 1) goto LAB_0011f766;
    pcVar20 = *(char **)(this + 0xb48);
    if (pcVar20 == (char *)0x0) goto LAB_0011fabd;
    lVar22 = *(long *)(pcVar20 + -8);
    if (lVar22 < 1) goto LAB_0011fac0;
    if (*pcVar20 == '\0') {
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                       "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()");
      uVar16 = 0;
      goto LAB_0011edd8;
    }
    if ((uVar25 == 0) || (*(uint *)(this + 0xbf4) <= (uint)uVar25)) {
LAB_0011ff88:
      _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                       "Parameter \"version\" is null.");
      uVar16 = 0;
      goto LAB_0011edd8;
    }
    lVar13 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0xbf0)) * 0xa0 +
             *(long *)(*(long *)(this + 0xbe0) +
                      ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0xbf0)) * 8);
    if (*(int *)(lVar13 + 0x98) != (int)(uVar25 >> 0x20)) {
      uVar12 = *(int *)(lVar13 + 0x98) + 0x80000000;
      if (uVar12 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,uVar12);
      }
      goto LAB_0011ff88;
    }
    iVar11 = (int)lVar13;
    if (*(char *)(lVar13 + 0x91) != '\0') {
      ShaderRD::_initialize_version((Version *)pVVar2);
      lVar14 = *(long *)(this + 0xb98);
      if (lVar14 != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(lVar14 + -8) <= lVar15) break;
          if (*(char *)(lVar14 + lVar15) == '\0') {
            ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
          }
          else {
            ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
          }
          lVar14 = *(long *)(this + 0xb98);
          lVar15 = lVar15 + 1;
        } while (lVar14 != 0);
      }
    }
    puVar5 = *(uint **)(this + 0xb58);
    if (puVar5 == (uint *)0x0) goto LAB_0011fabd;
    lVar22 = *(long *)(puVar5 + -2);
    if (lVar22 < 1) goto LAB_0011fac0;
    uVar17 = (ulong)*puVar5;
    lVar14 = *(long *)(lVar13 + 0x68);
    if (lVar14 == 0) goto LAB_0011d670;
    lVar22 = *(long *)(lVar14 + -8);
    if (lVar22 <= (long)uVar17) goto LAB_0011d3a1;
    if (*(long *)(lVar14 + uVar17 * 8) != 0) {
      ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
    }
    if (*(char *)(lVar13 + 0x90) != '\0') {
      puVar6 = *(undefined8 **)(lVar13 + 0x88);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0011fabd;
      lVar22 = puVar6[-1];
      if (0 < lVar22) {
        uVar16 = *puVar6;
        goto LAB_0011edd8;
      }
      goto LAB_0011fac0;
    }
  }
  uVar16 = 0;
LAB_0011edd8:
  *(undefined8 *)(this + 0xca0) = uVar16;
  uVar16 = RenderingDevice::get_singleton();
  local_b0 = 0;
  uStack_ac = 0;
  uVar16 = RenderingDevice::compute_pipeline_create
                     (uVar16,*(undefined8 *)(this + 0xca0),(StringName *)&local_b8);
  *(undefined8 *)(this + 0xca8) = uVar16;
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar13 = CONCAT44(uStack_ac,local_b0);
      local_b0 = 0;
      uStack_ac = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&uStack_e0);
  lVar13 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = &_LC314;
  local_b0 = 1;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  itos((long)&local_118);
  operator+((char *)&local_b8,(String *)"\n#define OCT_SIZE ");
  String::operator+((String *)&local_160,(String *)&local_b8);
  puVar8 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static(puVar8 + -0x10,false);
    }
  }
  lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
  if (lVar13 != 0) {
    LOCK();
    plVar1 = (long *)(lVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar13 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT12(uStack_116,local_118)));
      local_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_150 = 0;
  local_b8 = "\n#define MODE_PROBES\n";
  local_e8 = 0;
  local_b0 = 0x15;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_PROBES\n#define USE_MULTIVIEW\n";
  local_b0 = 0x2b;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_VISIBILITY\n";
  local_b0 = 0x19;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 + -0x10),false);
    }
  }
  local_e8 = 0;
  local_b8 = "\n#define MODE_VISIBILITY\n#define USE_MULTIVIEW\n";
  local_b0 = 0x2f;
  uStack_ac = 0;
  String::parse_latin1((StrRange *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_158);
  uVar25 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(uVar25 - 0x10),false);
    }
  }
  pVVar2 = (Vector *)(this + 0xcb0);
  pGVar26 = this + 0xe38;
  local_b0 = 0;
  uStack_ac = 0;
  ShaderRD::initialize(pVVar2,local_158,(Vector *)&local_160);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_b0);
  uVar25 = 0;
  uVar16 = ShaderRD::version_create();
  uStack_98 = _UNK_00146828;
  local_a0 = _LC284;
  uStack_100 = _UNK_00146818;
  local_108 = __LC328;
  *(undefined8 *)(this + 0xe28) = uVar16;
  local_118 = 0;
  uStack_116 = 0;
  uStack_114 = 0;
  local_110 = 0;
  uStack_10c = uStack_10c & 0xffffff00;
  local_f8 = 1;
  local_b0 = local_b0 & 0xffffff00;
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = uStack_a4 & 0xffffff00;
  local_70 = 0;
  local_b8._0_4_ = (undefined4)CONCAT62(local_b8._2_6_,(short)_LC332);
  local_b8 = (char *)CONCAT44(6,(undefined4)local_b8);
  local_90 = __LC330;
  pcStack_88 = _LC110;
  local_80 = __LC331;
  uStack_78 = _UNK_00146848;
  do {
    uVar3 = *(ulong *)(this + 0xe28);
    if (*(long *)(this + 0xcc8) == 0) {
      lVar13 = 0;
LAB_0011feb1:
      _err_print_index_error
                ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar25,
                 lVar13,"p_variant","variant_defines.size()","",false,false);
LAB_0011f35d:
      uVar16 = 0;
    }
    else {
      lVar13 = *(long *)(*(long *)(this + 0xcc8) + -8);
      if (lVar13 <= (long)uVar25) goto LAB_0011feb1;
      lVar13 = *(long *)(this + 0xcd8);
      uVar17 = uVar25;
      if (lVar13 == 0) goto LAB_0011fd44;
      lVar22 = *(long *)(lVar13 + -8);
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      if (*(char *)(lVar13 + uVar25) == '\0') {
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        goto LAB_0011f35d;
      }
      if ((uVar3 == 0) || (*(uint *)(this + 0xd84) <= (uint)uVar3)) {
LAB_0011fd7c:
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                         "Parameter \"version\" is null.",0,0);
        goto LAB_0011f35d;
      }
      lVar13 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd80)) * 0xa0 +
               *(long *)(*(long *)(this + 0xd70) +
                        ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd80)) * 8);
      if (*(int *)(lVar13 + 0x98) != (int)(uVar3 >> 0x20)) {
        if (*(int *)(lVar13 + 0x98) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,*(long *)(this + 0xd70));
        }
        goto LAB_0011fd7c;
      }
      iVar11 = (int)lVar13;
      if (*(char *)(lVar13 + 0x91) != '\0') {
        ShaderRD::_initialize_version((Version *)pVVar2);
        lVar14 = *(long *)(this + 0xd28);
        if (lVar14 != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(lVar14 + -8) <= lVar15) break;
            if (*(char *)(lVar14 + lVar15) == '\0') {
              ShaderRD::_allocate_placeholders((Version *)pVVar2,iVar11);
            }
            else {
              ShaderRD::_compile_version_start((Version *)pVVar2,iVar11);
            }
            lVar14 = *(long *)(this + 0xd28);
            lVar15 = lVar15 + 1;
          } while (lVar14 != 0);
        }
      }
      lVar14 = *(long *)(this + 0xce8);
      if (lVar14 == 0) {
LAB_0011fd44:
        lVar22 = 0;
        uVar17 = uVar25;
        goto LAB_0011d3a1;
      }
      lVar22 = *(long *)(lVar14 + -8);
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      uVar17 = (ulong)*(uint *)(lVar14 + uVar25 * 4);
      lVar14 = *(long *)(lVar13 + 0x68);
      if (lVar14 == 0) goto LAB_0011d670;
      lVar22 = *(long *)(lVar14 + -8);
      if (lVar22 <= (long)uVar17) goto LAB_0011d3a1;
      if (*(long *)(lVar14 + uVar17 * 8) != 0) {
        ShaderRD::_compile_version_end((Version *)pVVar2,iVar11);
      }
      if (*(char *)(lVar13 + 0x90) == '\0') goto LAB_0011f35d;
      lVar13 = *(long *)(lVar13 + 0x88);
      if (lVar13 == 0) goto LAB_0011fd44;
      lVar22 = *(long *)(lVar13 + -8);
      uVar17 = uVar25;
      if (lVar22 <= (long)uVar25) goto LAB_0011d3a1;
      uVar16 = *(undefined8 *)(lVar13 + uVar25 * 8);
    }
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_e0 = 0;
    uStack_11c = _LC332;
    uStack_d0 = (ulong)_LC332 << 0x20;
    local_140 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_68[1] = 0;
    local_58 = 0;
    local_50 = __LC328;
    uStack_48 = _UNK_00146818;
    local_e8 = 0;
    local_d8 = 0;
    iVar11 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                       ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                        &local_58,1);
    if (iVar11 == 0) {
      if (local_58 == 0) {
        lVar13 = 0;
        lVar14 = -1;
      }
      else {
        lVar13 = *(long *)(local_58 + -8);
        lVar14 = lVar13 + -1;
        if (-1 < lVar14) {
          CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                    ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                     &local_58);
          puVar23 = (ulong *)(lVar14 * 0x20 + local_58);
          *puVar23 = local_e8;
          puVar23[1] = uStack_e0;
          puVar23[2] = local_d8;
          puVar23[3] = uStack_d0;
          goto LAB_0011f448;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar14,lVar13,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_0011f448:
    local_e8 = local_e8 & 0xffffff0000000000;
    local_c8 = 0;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    uStack_d0 = 0;
    PipelineCacheRD::setup
              (pGVar26,uVar16,7,(StrRange *)&local_118,(StrRange *)&local_e8,(StringName *)&local_b8
               ,(StringName *)local_68,0,(String *)&local_148);
    uVar3 = uStack_d0;
    if (uStack_d0 != 0) {
      LOCK();
      plVar1 = (long *)(uStack_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uStack_d0 = 0;
        Memory::free_static((void *)(uVar3 + -0x10),false);
      }
    }
    lVar13 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    lVar13 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar1 = (long *)(local_140 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    uVar25 = uVar25 + 1;
    pGVar26 = pGVar26 + 0x138;
    if (uVar25 == 4) {
      CowData<String>::_unref((CowData<String> *)&local_150);
      lVar13 = local_160;
      if (local_160 != 0) {
        LOCK();
        plVar1 = (long *)(local_160 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_160 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      uVar16 = RenderingDevice::get_singleton();
      local_b0 = 0;
      uStack_ac = 0;
      uVar16 = RenderingDevice::uniform_buffer_create(uVar16,0x380,(StringName *)&local_b8,0);
      *(undefined8 *)(this + 0x1698) = uVar16;
      if (CONCAT44(uStack_ac,local_b0) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_ac,local_b0) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar13 = CONCAT44(uStack_ac,local_b0);
          local_b0 = 0;
          uStack_ac = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_b8,"rendering/global_illumination/gi/use_half_resolution",
                 false);
      ProjectSettings::get_setting_with_override((StringName *)local_68);
      GVar10 = (GI)Variant::operator_cast_to_bool((Variant *)local_68);
      this[0x16a0] = GVar10;
      if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::voxel_gi_initialize(RID) */

void __thiscall RendererRD::GI::voxel_gi_initialize(GI *this,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  long local_e0 [3];
  undefined1 local_c4 [16];
  undefined1 local_b4 [16];
  undefined4 local_a4;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  undefined1 local_57;
  undefined8 local_54;
  Dependency local_48 [8];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_20 = 2;
  plVar2 = local_e0;
  for (lVar1 = 0x13; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar2 = 0;
    plVar2 = plVar2 + 1;
  }
  local_c4 = ZEXT416(_LC17);
  local_b4 = ZEXT416(_LC17);
  local_54 = _LC284;
  local_70 = __LC368;
  uStack_6c = _UNK_00146854;
  uStack_68 = _UNK_00146858;
  uStack_64 = _UNK_0014685c;
  local_a4 = 0x3f800000;
  local_5c = 0x3f000000;
  local_57 = 1;
  RID_Alloc<RendererRD::GI::VoxelGI,true>::initialize_rid
            ((RID_Alloc<RendererRD::GI::VoxelGI,true> *)(this + 8),param_2,local_f8);
  Dependency::~Dependency(local_48);
  lVar1 = local_e0[2];
  if (local_e0[2] != 0) {
    LOCK();
    plVar2 = (long *)(local_e0[2] + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0[2] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1465,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1465,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RendererRD::GI::RenderBuffersGI::is_class_ptr(void*) const */

uint __thiscall RendererRD::GI::RenderBuffersGI::is_class_ptr(RenderBuffersGI *this,void *param_1)

{
  return (uint)CONCAT71(0x1465,(undefined4 *)param_1 ==
                               &RenderBufferCustomDataRD::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1465,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1465,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RendererRD::GI::RenderBuffersGI::_getv(StringName const&, Variant&) const */

undefined8 RendererRD::GI::RenderBuffersGI::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::GI::RenderBuffersGI::_setv(StringName const&, Variant const&) */

undefined8 RendererRD::GI::RenderBuffersGI::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::GI::RenderBuffersGI::_validate_propertyv(PropertyInfo&) const */

void RendererRD::GI::RenderBuffersGI::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RendererRD::GI::RenderBuffersGI::_property_can_revertv(StringName const&) const */

undefined8 RendererRD::GI::RenderBuffersGI::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RendererRD::GI::RenderBuffersGI::_property_get_revertv(StringName const&, Variant&) const */

undefined8
RendererRD::GI::RenderBuffersGI::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::GI::RenderBuffersGI::_notificationv(int, bool) */

void RendererRD::GI::RenderBuffersGI::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RendererRD::GI::RenderBuffersGI::configure(RenderSceneBuffersRD*) */

void RendererRD::GI::RenderBuffersGI::configure(RenderSceneBuffersRD *param_1)

{
  return;
}



/* RendererRD::GI::SDFGI::is_class_ptr(void*) const */

uint __thiscall RendererRD::GI::SDFGI::is_class_ptr(SDFGI *this,void *param_1)

{
  return (uint)CONCAT71(0x1465,(undefined4 *)param_1 ==
                               &RenderBufferCustomDataRD::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1465,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1465,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RendererRD::GI::SDFGI::_getv(StringName const&, Variant&) const */

undefined8 RendererRD::GI::SDFGI::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::GI::SDFGI::_setv(StringName const&, Variant const&) */

undefined8 RendererRD::GI::SDFGI::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::GI::SDFGI::_validate_propertyv(PropertyInfo&) const */

void RendererRD::GI::SDFGI::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RendererRD::GI::SDFGI::_property_can_revertv(StringName const&) const */

undefined8 RendererRD::GI::SDFGI::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RendererRD::GI::SDFGI::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RendererRD::GI::SDFGI::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::GI::SDFGI::_notificationv(int, bool) */

void RendererRD::GI::SDFGI::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RendererRD::GI::SDFGI::configure(RenderSceneBuffersRD*) */

void RendererRD::GI::SDFGI::configure(RenderSceneBuffersRD *param_1)

{
  return;
}



/* RendererCompositorRD::get_frame_number() const */

undefined8 RendererCompositorRD::get_frame_number(void)

{
  return frame;
}



/* RendererRD::LightStorage::light_get_color(RID) */

undefined1  [16] __thiscall
RendererRD::LightStorage::light_get_color(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0x58);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_color","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x215,"Parameter \"light\" is null.",0,0);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererRD::LightStorage::light_get_type(RID) const */

undefined4 __thiscall RendererRD::LightStorage::light_get_type(LightStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    iVar1 = puVar2[0x38];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_type","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x1ff,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* RendererRD::LightStorage::light_has_shadow(RID) const */

undefined1 __thiscall RendererRD::LightStorage::light_has_shadow(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
            *(long *)(*(long *)(this + 0x18) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x70);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_has_shadow","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x230,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* RendererRD::LightStorage::light_get_param(RID, RenderingServer::LightParam) */

undefined4 __thiscall
RendererRD::LightStorage::light_get_param(LightStorage *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x2c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0xe8 +
              *(long *)(*(long *)(this + 0x18) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
      iVar1 = *(int *)(lVar2 + 0xe0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        return *(undefined4 *)(lVar2 + 4 + (long)param_3 * 4);
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_get_param","./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                   0x207,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129538;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129538;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* RendererRD::GI::RenderBuffersGI::~RenderBuffersGI() */

void __thiscall RendererRD::GI::RenderBuffersGI::~RenderBuffersGI(RenderBuffersGI *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129538;
  Object::~Object((Object *)this);
  return;
}



/* RendererRD::GI::RenderBuffersGI::~RenderBuffersGI() */

void __thiscall RendererRD::GI::RenderBuffersGI::~RenderBuffersGI(RenderBuffersGI *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129538;
  Object::~Object((Object *)this);
  operator_delete(this,0x200);
  return;
}



/* VoxelGiShaderRD::~VoxelGiShaderRD() */

void __thiscall VoxelGiShaderRD::~VoxelGiShaderRD(VoxelGiShaderRD *this)

{
  *(undefined ***)this = &PTR__VoxelGiShaderRD_00129758;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* VoxelGiShaderRD::~VoxelGiShaderRD() */

void __thiscall VoxelGiShaderRD::~VoxelGiShaderRD(VoxelGiShaderRD *this)

{
  *(undefined ***)this = &PTR__VoxelGiShaderRD_00129758;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* VoxelGiDebugShaderRD::~VoxelGiDebugShaderRD() */

void __thiscall VoxelGiDebugShaderRD::~VoxelGiDebugShaderRD(VoxelGiDebugShaderRD *this)

{
  *(undefined ***)this = &PTR__VoxelGiDebugShaderRD_00129778;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* VoxelGiDebugShaderRD::~VoxelGiDebugShaderRD() */

void __thiscall VoxelGiDebugShaderRD::~VoxelGiDebugShaderRD(VoxelGiDebugShaderRD *this)

{
  *(undefined ***)this = &PTR__VoxelGiDebugShaderRD_00129778;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SdfgiPreprocessShaderRD::~SdfgiPreprocessShaderRD() */

void __thiscall SdfgiPreprocessShaderRD::~SdfgiPreprocessShaderRD(SdfgiPreprocessShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiPreprocessShaderRD_00129738;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SdfgiPreprocessShaderRD::~SdfgiPreprocessShaderRD() */

void __thiscall SdfgiPreprocessShaderRD::~SdfgiPreprocessShaderRD(SdfgiPreprocessShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiPreprocessShaderRD_00129738;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SdfgiDebugShaderRD::~SdfgiDebugShaderRD() */

void __thiscall SdfgiDebugShaderRD::~SdfgiDebugShaderRD(SdfgiDebugShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiDebugShaderRD_001296b8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SdfgiDebugShaderRD::~SdfgiDebugShaderRD() */

void __thiscall SdfgiDebugShaderRD::~SdfgiDebugShaderRD(SdfgiDebugShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiDebugShaderRD_001296b8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SdfgiDebugProbesShaderRD::~SdfgiDebugProbesShaderRD() */

void __thiscall SdfgiDebugProbesShaderRD::~SdfgiDebugProbesShaderRD(SdfgiDebugProbesShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiDebugProbesShaderRD_001296d8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SdfgiDebugProbesShaderRD::~SdfgiDebugProbesShaderRD() */

void __thiscall SdfgiDebugProbesShaderRD::~SdfgiDebugProbesShaderRD(SdfgiDebugProbesShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiDebugProbesShaderRD_001296d8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SdfgiDirectLightShaderRD::~SdfgiDirectLightShaderRD() */

void __thiscall SdfgiDirectLightShaderRD::~SdfgiDirectLightShaderRD(SdfgiDirectLightShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiDirectLightShaderRD_001296f8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SdfgiDirectLightShaderRD::~SdfgiDirectLightShaderRD() */

void __thiscall SdfgiDirectLightShaderRD::~SdfgiDirectLightShaderRD(SdfgiDirectLightShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiDirectLightShaderRD_001296f8;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* SdfgiIntegrateShaderRD::~SdfgiIntegrateShaderRD() */

void __thiscall SdfgiIntegrateShaderRD::~SdfgiIntegrateShaderRD(SdfgiIntegrateShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiIntegrateShaderRD_00129718;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* SdfgiIntegrateShaderRD::~SdfgiIntegrateShaderRD() */

void __thiscall SdfgiIntegrateShaderRD::~SdfgiIntegrateShaderRD(SdfgiIntegrateShaderRD *this)

{
  *(undefined ***)this = &PTR__SdfgiIntegrateShaderRD_00129718;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* GiShaderRD::~GiShaderRD() */

void __thiscall GiShaderRD::~GiShaderRD(GiShaderRD *this)

{
  *(undefined ***)this = &PTR__GiShaderRD_00129698;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* GiShaderRD::~GiShaderRD() */

void __thiscall GiShaderRD::~GiShaderRD(GiShaderRD *this)

{
  *(undefined ***)this = &PTR__GiShaderRD_00129698;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(void)

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



/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write(void)

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



/* RendererRD::GI::SDFGI::pre_process_gi(Transform3D const&, RenderDataRD*) [clone .cold] */

void RendererRD::GI::SDFGI::pre_process_gi(Transform3D *param_1,RenderDataRD *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::GI::SDFGI::render_static_lights(RenderDataRD*, Ref<RenderSceneBuffersRD>, unsigned
   int, unsigned int const*, PagedArray<RID> const*) [clone .cold] */

void RendererRD::GI::SDFGI::render_static_lights(void)

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



/* RendererRD::GI::VoxelGIInstance::update(bool, Vector<RID> const&,
   PagedArray<RenderGeometryInstance*> const&) [clone .cold] */

void RendererRD::GI::VoxelGIInstance::update(bool param_1,Vector *param_2,PagedArray *param_3)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::GI::RenderBuffersGI::_get_class_namev() const */

undefined8 * RendererRD::GI::RenderBuffersGI::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00122503:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00122503;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderBuffersGI");
      goto LAB_0012256e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderBuffersGI");
LAB_0012256e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_001225e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001225e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0012264e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0012264e:
  return &_get_class_namev()::_class_name_static;
}



/* RendererRD::GI::SDFGI::_get_class_namev() const */

undefined8 * RendererRD::GI::SDFGI::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_001226c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001226c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SDFGI");
      goto LAB_0012272e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SDFGI");
LAB_0012272e:
  return &_get_class_namev()::_class_name_static;
}



/* RendererRD::GI::RenderBuffersGI::get_class() const */

void RendererRD::GI::RenderBuffersGI::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::SDFGI::get_class() const */

void RendererRD::GI::SDFGI::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00122a5f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00122a5f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00122b13;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00122bc3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00122bc3:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00122b13;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00122b13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::RenderBuffersGI::is_class(String const&) const */

undefined8 __thiscall
RendererRD::GI::RenderBuffersGI::is_class(RenderBuffersGI *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00122cff;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00122cff:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00122db3;
  }
  cVar6 = String::operator==((String *)param_1,"RenderBuffersGI");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00122e73;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00122e73:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00122db3;
    }
    cVar6 = String::operator==((String *)param_1,"RenderBufferCustomDataRD");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00122f1c;
    }
  }
LAB_00122db3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00122f1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::SDFGI::is_class(String const&) const */

undefined8 __thiscall RendererRD::GI::SDFGI::is_class(SDFGI *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00122f9f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00122f9f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00123053;
  }
  cVar6 = String::operator==((String *)param_1,"SDFGI");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00123113;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00123113:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00123053;
    }
    cVar6 = String::operator==((String *)param_1,"RenderBufferCustomDataRD");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001231bc;
    }
  }
LAB_00123053:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001231bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
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
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001234d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001234d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001234f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001234f6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::RenderBuffersGI::_initialize_classv() */

void RendererRD::GI::RenderBuffersGI::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_001239ba;
  if (RenderBufferCustomDataRD::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
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
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RenderBufferCustomDataRD";
    local_60 = 0;
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
        RenderBufferCustomDataRD::initialize_class()::initialized = '\x01';
        goto LAB_001238bb;
      }
    }
    RenderBufferCustomDataRD::initialize_class()::initialized = '\x01';
  }
LAB_001238bb:
  local_48 = "RenderBufferCustomDataRD";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "RenderBuffersGI";
  local_60 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
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
  initialize_class()::initialized = '\x01';
LAB_001239ba:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::GI::SDFGI::_initialize_classv() */

void RendererRD::GI::SDFGI::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00123dca;
  if (RenderBufferCustomDataRD::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
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
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RenderBufferCustomDataRD";
    local_60 = 0;
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
        RenderBufferCustomDataRD::initialize_class()::initialized = '\x01';
        goto LAB_00123ccb;
      }
    }
    RenderBufferCustomDataRD::initialize_class()::initialized = '\x01';
  }
LAB_00123ccb:
  local_48 = "RenderBufferCustomDataRD";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "SDFGI";
  local_60 = 0;
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
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
  initialize_class()::initialized = '\x01';
LAB_00123dca:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderBufferCustomDataRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
RenderBufferCustomDataRD::_get_property_listv
          (RenderBufferCustomDataRD *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderBufferCustomDataRD";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderBufferCustomDataRD";
  local_98 = 0;
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001240f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001240f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00124115;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00124115:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RenderBufferCustomDataRD",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::RenderBuffersGI::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
RendererRD::GI::RenderBuffersGI::_get_property_listv
          (RenderBuffersGI *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderBuffersGI";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderBuffersGI";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00124548:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00124548;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00124565;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00124565:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RenderBuffersGI",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::GI::SDFGI::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RendererRD::GI::SDFGI::_get_property_listv(SDFGI *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SDFGI";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SDFGI";
  local_98 = 0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00124998:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00124998;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001249b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001249b5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SDFGI",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingDevice::Uniform::Uniform(RenderingDevice::Uniform const&) */

void __thiscall RenderingDevice::Uniform::Uniform(Uniform *this,Uniform *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = *(Uniform *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x10) = uVar1;
  if (lVar2 != 0) {
    CowData<RID>::_ref((CowData<RID> *)(this + 0x20),(CowData *)(param_1 + 0x20));
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00124e38) */
/* WARNING: Removing unreachable block (ram,0x00124f68) */
/* WARNING: Removing unreachable block (ram,0x00125130) */
/* WARNING: Removing unreachable block (ram,0x00124f74) */
/* WARNING: Removing unreachable block (ram,0x00124f7e) */
/* WARNING: Removing unreachable block (ram,0x00125110) */
/* WARNING: Removing unreachable block (ram,0x00124f8a) */
/* WARNING: Removing unreachable block (ram,0x00124f94) */
/* WARNING: Removing unreachable block (ram,0x001250f0) */
/* WARNING: Removing unreachable block (ram,0x00124fa0) */
/* WARNING: Removing unreachable block (ram,0x00124faa) */
/* WARNING: Removing unreachable block (ram,0x001250d0) */
/* WARNING: Removing unreachable block (ram,0x00124fb6) */
/* WARNING: Removing unreachable block (ram,0x00124fc0) */
/* WARNING: Removing unreachable block (ram,0x001250b0) */
/* WARNING: Removing unreachable block (ram,0x00124fcc) */
/* WARNING: Removing unreachable block (ram,0x00124fd6) */
/* WARNING: Removing unreachable block (ram,0x00125090) */
/* WARNING: Removing unreachable block (ram,0x00124fe2) */
/* WARNING: Removing unreachable block (ram,0x00124fec) */
/* WARNING: Removing unreachable block (ram,0x00125070) */
/* WARNING: Removing unreachable block (ram,0x00124ff4) */
/* WARNING: Removing unreachable block (ram,0x0012500a) */
/* WARNING: Removing unreachable block (ram,0x00125016) */
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



/* void Ref<RendererRD::GI::SDFGI>::instantiate<>() */

void __thiscall Ref<RendererRD::GI::SDFGI>::instantiate<>(Ref<RendererRD::GI::SDFGI> *this)

{
  undefined8 uVar1;
  char cVar2;
  RefCounted *this_00;
  long lVar3;
  RefCounted *pRVar4;
  Object *pOVar5;
  Object *pOVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_00 = (RefCounted *)operator_new(0x330,"");
  pRVar4 = this_00;
  for (lVar3 = 0x66; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar7 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR__initialize_classv_001298e0;
  *(undefined8 *)(this_00 + 0x2a8) = 0x600000000;
  uVar1 = _LC145;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x230) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x268) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x278) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x288) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2c8) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 0x248) = 0;
  *(undefined4 *)(this_00 + 0x250) = 0x80;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined8 *)(this_00 + 0x298) = 0;
  *(undefined8 *)(this_00 + 0x2a0) = 0;
  *(undefined8 *)(this_00 + 0x2b0) = 0;
  *(undefined8 *)(this_00 + 0x2d8) = 0;
  this_00[0x2e0] = (RefCounted)0x0;
  *(undefined4 *)(this_00 + 0x2e4) = 0x3f000000;
  this_00[0x2e8] = (RefCounted)0x1;
  *(undefined8 *)(this_00 + 0x2ec) = uVar1;
  *(undefined4 *)(this_00 + 0x2f4) = 0x3f8ccccd;
  *(undefined8 *)(this_00 + 0x2f8) = 0x3f80000000000001;
  *(undefined8 *)(this_00 + 0x300) = 0;
  *(undefined8 *)(this_00 + 0x328) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)this;
    if (pOVar6 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar2 = predelete_handler(pOVar6);
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    pOVar6 = *(Object **)this;
    pOVar5 = pOVar6;
    if (this_00 == (RefCounted *)pOVar6) goto LAB_00125365;
    *(RefCounted **)this = this_00;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar5 = (Object *)this_00;
    if (((pOVar6 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(pOVar6), cVar2 == '\0')) goto LAB_00125365;
  }
  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
  Memory::free_static(pOVar6,false);
  pOVar5 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00125365:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    return;
  }
  return;
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
LAB_00125738:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_00125738;
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
LAB_00125770:
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
LAB_00125679:
    if (param_1 <= lVar3) goto LAB_001255f1;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00125770;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_00125679;
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
LAB_001255f1:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00125930) */
/* WARNING: Removing unreachable block (ram,0x00125a60) */
/* WARNING: Removing unreachable block (ram,0x00125bd9) */
/* WARNING: Removing unreachable block (ram,0x00125a6c) */
/* WARNING: Removing unreachable block (ram,0x00125a76) */
/* WARNING: Removing unreachable block (ram,0x00125bbb) */
/* WARNING: Removing unreachable block (ram,0x00125a82) */
/* WARNING: Removing unreachable block (ram,0x00125a8c) */
/* WARNING: Removing unreachable block (ram,0x00125b9d) */
/* WARNING: Removing unreachable block (ram,0x00125a98) */
/* WARNING: Removing unreachable block (ram,0x00125aa2) */
/* WARNING: Removing unreachable block (ram,0x00125b7f) */
/* WARNING: Removing unreachable block (ram,0x00125aae) */
/* WARNING: Removing unreachable block (ram,0x00125ab8) */
/* WARNING: Removing unreachable block (ram,0x00125b61) */
/* WARNING: Removing unreachable block (ram,0x00125ac4) */
/* WARNING: Removing unreachable block (ram,0x00125ace) */
/* WARNING: Removing unreachable block (ram,0x00125b43) */
/* WARNING: Removing unreachable block (ram,0x00125ad6) */
/* WARNING: Removing unreachable block (ram,0x00125ae0) */
/* WARNING: Removing unreachable block (ram,0x00125b28) */
/* WARNING: Removing unreachable block (ram,0x00125ae8) */
/* WARNING: Removing unreachable block (ram,0x00125afe) */
/* WARNING: Removing unreachable block (ram,0x00125b0a) */
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



/* RID_Alloc<RendererRD::GI::VoxelGI, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGI,true>::~RID_Alloc(RID_Alloc<RendererRD::GI::VoxelGI,true> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00129798;
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
LAB_00125d92:
    if ((uint)uVar5 < (uint)uVar7) goto LAB_00125dd3;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar8[lVar6],false);
      lVar3 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar3),false);
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
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar2);
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
        lVar6 = (uVar9 % uVar7) * 0xe8 + puVar8[uVar9 / uVar7];
        if (-1 < *(int *)(lVar6 + 0xe0)) {
          Dependency::~Dependency((Dependency *)(lVar6 + 0xb0));
          if (*(long *)(lVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          uVar7 = (ulong)*(uint *)(this + 0x18);
          puVar8 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      goto LAB_00125d92;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00125dd3;
    Memory::free_static((void *)*puVar8,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar8 = *(undefined8 **)(this + 8);
LAB_00125dd3:
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



/* RID_Alloc<RendererRD::GI::VoxelGI, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGI,true>::~RID_Alloc(RID_Alloc<RendererRD::GI::VoxelGI,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::GI::VoxelGIInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGIInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::GI::VoxelGIInstance,false> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
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
  
  uVar2 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001297b8;
  if (uVar2 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
LAB_00126032:
    if ((uint)uVar5 < (uint)uVar7) goto LAB_00126073;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar8[lVar6],false);
      lVar3 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar3),false);
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
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar2);
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
        lVar6 = (uVar9 % uVar7) * 0x90 + puVar8[uVar9 / uVar7];
        if (-1 < *(int *)(lVar6 + 0x88)) {
          if (*(long *)(lVar6 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x38);
              *(undefined8 *)(lVar6 + 0x38) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          uVar7 = (ulong)*(uint *)(this + 0x18);
          puVar8 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      goto LAB_00126032;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00126073;
    Memory::free_static((void *)*puVar8,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar8 = *(undefined8 **)(this + 8);
LAB_00126073:
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



/* RID_Alloc<RendererRD::GI::VoxelGIInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGIInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::GI::VoxelGIInstance,false> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::GI::VoxelGI, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::GI::VoxelGI,true>::allocate_rid(RID_Alloc<RendererRD::GI::VoxelGI,true> *this)

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
    std::__throw_system_error(iVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
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
      goto LAB_00126396;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xe8,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0xe0);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x3a;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xe8 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0xe0) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00126396:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::GI::VoxelGIInstance, false>::make_rid(RendererRD::GI::VoxelGIInstance
   const&) */

ulong __thiscall
RID_Alloc<RendererRD::GI::VoxelGIInstance,false>::make_rid
          (RID_Alloc<RendererRD::GI::VoxelGIInstance,false> *this,VoxelGIInstance *param_1)

{
  long *plVar1;
  VoxelGIInstance VVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  
  uVar17 = *(uint *)(this + 0x20);
  if (uVar17 == *(uint *)(this + 0x1c)) {
    if (uVar17 == 0) {
      lVar23 = 0;
      uVar24 = 8;
    }
    else {
      uVar24 = (ulong)((int)((ulong)uVar17 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar23 = ((ulong)uVar17 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar11 = Memory::realloc_static(*(void **)(this + 8),uVar24,false);
    *(long *)(this + 8) = lVar11;
    uVar20 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x90,false);
    pvVar3 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar11 + lVar23) = uVar20;
    lVar12 = Memory::realloc_static(pvVar3,uVar24,false);
    *(long *)(this + 0x10) = lVar12;
    uVar20 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar14 = *(uint *)(this + 0x18);
    lVar11 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar12 + lVar23) = uVar20;
    if (uVar14 != 0) {
      lVar12 = *(long *)(lVar11 + lVar23);
      lVar13 = 0;
      puVar19 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar23) + 0x88);
      do {
        *puVar19 = 0xffffffff;
        puVar19 = puVar19 + 0x24;
        *(int *)(lVar12 + lVar13 * 4) = *(int *)(this + 0x20) + (int)lVar13;
        uVar14 = *(uint *)(this + 0x18);
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < uVar14);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar14;
    uVar17 = *(uint *)(this + 0x20);
  }
  else {
    lVar11 = *(long *)(this + 0x10);
    uVar14 = *(uint *)(this + 0x18);
  }
  uVar17 = *(uint *)(*(long *)(lVar11 + ((ulong)uVar17 / (ulong)uVar14) * 8) +
                    ((ulong)uVar17 % (ulong)uVar14) * 4);
  uVar24 = (ulong)uVar17;
  LOCK();
  UNLOCK();
  uVar15 = (int)RID_AllocBase::base_id + 1;
  uVar16 = uVar15 & 0x7fffffff;
  if (uVar16 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar23 = *(long *)(this + 8);
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)((uVar24 % (ulong)uVar14) * 0x90 + *(long *)(lVar23 + (uVar24 / uVar14) * 8) + 0x88) =
       uVar16 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  uVar21 = CONCAT44(uVar15,uVar17) & 0x7fffffffffffffff;
  if ((uVar21 != 0) && ((uint)uVar21 < *(uint *)(this + 0x1c))) {
    puVar18 = (undefined8 *)
              ((uVar24 % (ulong)*(uint *)(this + 0x18)) * 0x90 +
              *(long *)(lVar23 + (uVar24 / *(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(puVar18 + 0x11) < 0) {
      uVar17 = (uint)(uVar21 >> 0x20);
      if (uVar17 == (*(uint *)(puVar18 + 0x11) & 0x7fffffff)) {
        uVar20 = *(undefined8 *)param_1;
        *(uint *)(puVar18 + 0x11) = uVar17;
        *puVar18 = uVar20;
        puVar18[1] = *(undefined8 *)(param_1 + 8);
        puVar18[2] = *(undefined8 *)(param_1 + 0x10);
        uVar20 = *(undefined8 *)(param_1 + 0x18);
        puVar18[5] = 0;
        puVar18[3] = uVar20;
        plVar1 = (long *)(*(long *)(param_1 + 0x28) + -0x10);
        if (*(long *)(param_1 + 0x28) != 0) {
          do {
            lVar23 = *plVar1;
            if (lVar23 == 0) goto LAB_00126754;
            LOCK();
            lVar11 = *plVar1;
            bVar25 = lVar23 == lVar11;
            if (bVar25) {
              *plVar1 = lVar23 + 1;
              lVar11 = lVar23;
            }
            UNLOCK();
          } while (!bVar25);
          if (lVar11 != -1) {
            puVar18[5] = *(undefined8 *)(param_1 + 0x28);
          }
        }
LAB_00126754:
        puVar18[7] = 0;
        plVar1 = (long *)(*(long *)(param_1 + 0x38) + -0x10);
        if (*(long *)(param_1 + 0x38) != 0) {
          do {
            lVar23 = *plVar1;
            if (lVar23 == 0) goto LAB_0012678a;
            LOCK();
            lVar11 = *plVar1;
            bVar25 = lVar23 == lVar11;
            if (bVar25) {
              *plVar1 = lVar23 + 1;
              lVar11 = lVar23;
            }
            UNLOCK();
          } while (!bVar25);
          if (lVar11 != -1) {
            puVar18[7] = *(undefined8 *)(param_1 + 0x38);
          }
        }
LAB_0012678a:
        VVar2 = param_1[0x50];
        uVar5 = *(undefined8 *)(param_1 + 0x54);
        uVar6 = *(undefined8 *)(param_1 + 0x5c);
        uVar7 = *(undefined8 *)(param_1 + 100);
        uVar8 = *(undefined8 *)(param_1 + 0x6c);
        puVar18[8] = *(undefined8 *)(param_1 + 0x40);
        uVar20 = *(undefined8 *)(param_1 + 0x48);
        uVar9 = *(undefined8 *)(param_1 + 0x74);
        uVar10 = *(undefined8 *)(param_1 + 0x7c);
        *(VoxelGIInstance *)(puVar18 + 10) = VVar2;
        puVar18[9] = uVar20;
        *(undefined8 *)((long)puVar18 + 0x54) = uVar5;
        *(undefined8 *)((long)puVar18 + 0x5c) = uVar6;
        *(undefined8 *)((long)puVar18 + 100) = uVar7;
        *(undefined8 *)((long)puVar18 + 0x6c) = uVar8;
        *(undefined8 *)((long)puVar18 + 0x74) = uVar9;
        *(undefined8 *)((long)puVar18 + 0x7c) = uVar10;
        return uVar21;
      }
      pcVar22 = "Attempting to initialize the wrong RID";
      uVar20 = 0xfc;
    }
    else {
      pcVar22 = "Initializing already initialized RID";
      uVar20 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar20,
                     "Method/function failed. Returning: nullptr",pcVar22,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
  return uVar21;
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
LAB_00126ce0:
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
  if (uVar6 == 0xffffffffffffffff) goto LAB_00126ce0;
  if (param_1 <= lVar9) {
    puVar7 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar8) {
LAB_00126b69:
        if (uVar6 + 1 != lVar5) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar6 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00126d0f;
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
        if ((ulong)puVar7[-1] <= uVar8) goto LAB_00126b69;
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
LAB_00126d5d:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar6 + 1 == lVar5) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00126d5d;
    lVar9 = puVar7[-1];
LAB_00126c40:
    if (param_1 <= lVar9) goto LAB_00126bf5;
  }
  else {
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00126d0f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar7;
      lVar9 = puVar4[1];
      goto LAB_00126c40;
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
LAB_00126bf5:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<RID>::_unref() */

void __thiscall CowData<RID>::_unref(CowData<RID> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>(long)
    */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
    lVar4 = lVar9 * 0x20;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00127058:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x20 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00127058;
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
LAB_00127090:
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
LAB_00126f99:
    if (param_1 <= lVar4) goto LAB_00126f13;
  }
  else {
    if (lVar9 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00127090;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_00126f99;
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
  uVar3 = _LC332;
  puVar6 = puVar8 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar8 + param_1 * 4);
LAB_00126f13:
  puVar8[-1] = param_1;
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



/* CowData<RenderingDeviceCommons::DataFormat>::_unref() */

void __thiscall
CowData<RenderingDeviceCommons::DataFormat>::_unref
          (CowData<RenderingDeviceCommons::DataFormat> *this)

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
          if (puVar5 == (undefined8 *)0x0) goto LAB_00127699;
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
            if (puVar5 == (undefined8 *)0x0) goto LAB_00127780;
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
LAB_00127699:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00127780:
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
LAB_00127ad8:
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
  if (uVar7 == 0xffffffffffffffff) goto LAB_00127ad8;
  if (param_1 <= lVar9) {
    puVar10 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar10 != (undefined8 *)0x0) {
      if ((ulong)puVar10[-1] <= uVar8) {
LAB_00127929:
        if (uVar7 + 1 != lVar6) {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar10 + -2,uVar7 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00127b07;
          puVar10 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar10;
        }
        puVar10[-1] = param_1;
        return 0;
      }
      while (puVar10[uVar8 * 5 + 4] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar10[-1] <= uVar8) goto LAB_00127929;
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
LAB_00127b55:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar7 + 1 == lVar6) {
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) goto LAB_00127b55;
    lVar9 = puVar10[-1];
LAB_00127a30:
    if (param_1 <= lVar9) goto LAB_001279e0;
  }
  else {
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar7 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00127b07:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar10 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar10;
      lVar9 = puVar5[1];
      goto LAB_00127a30;
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
  uVar3 = _LC174;
  puVar5 = puVar10 + lVar9 * 5;
  do {
    *puVar5 = uVar3;
    puVar4 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar4;
  } while (puVar10 + param_1 * 5 != puVar4);
LAB_001279e0:
  puVar10[-1] = param_1;
  return 0;
}



/* Error CowData<Vector<unsigned char> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x10;
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
LAB_00127e68:
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
  if (uVar8 == 0xffffffffffffffff) goto LAB_00127e68;
  if (param_1 <= lVar10) {
    puVar6 = *(undefined8 **)this;
    uVar9 = param_1;
    while (puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar9) {
LAB_00127cb2:
        if (uVar8 + 1 != lVar7) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar8 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00127e97;
          puVar6 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar6;
        }
        puVar6[-1] = param_1;
        return 0;
      }
      while (puVar6[uVar9 * 2 + 1] == 0) {
        uVar9 = uVar9 + 1;
        if ((ulong)puVar6[-1] <= uVar9) goto LAB_00127cb2;
      }
      LOCK();
      plVar1 = (long *)(puVar6[uVar9 * 2 + 1] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = puVar6[uVar9 * 2 + 1];
        puVar6[uVar9 * 2 + 1] = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      uVar9 = uVar9 + 1;
      puVar6 = *(undefined8 **)this;
    }
LAB_00127ee5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar8 + 1 == lVar7) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00127ee5;
    lVar10 = puVar6[-1];
LAB_00127dc0:
    if (param_1 <= lVar10) goto LAB_00127d71;
  }
  else {
    if (lVar10 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar8 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00127e97:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar6;
      lVar10 = puVar4[1];
      goto LAB_00127dc0;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  puVar5 = puVar6 + param_1 * 2;
  puVar4 = puVar6 + lVar10 * 2;
  if (((int)puVar5 - (int)puVar4 & 0x10U) != 0) {
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
    if (puVar4 == puVar5) goto LAB_00127d71;
  }
  do {
    puVar4[1] = 0;
    puVar3 = puVar4 + 4;
    puVar4[3] = 0;
    puVar4 = puVar3;
  } while (puVar3 != puVar5);
LAB_00127d71:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererRD::GI::VoxelGIInstance::Mipmap>::resize<false>
          (CowData<RendererRD::GI::VoxelGIInstance::Mipmap> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
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
    lVar3 = lVar9 * 0x30;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_00128198:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x30 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  if (uVar4 == 0xffffffffffffffff) goto LAB_00128198;
  if (param_1 <= lVar9) {
    puVar8 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar8 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_001281d0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar8;
    }
    puVar8[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
LAB_001280d9:
    if (param_1 <= lVar3) goto LAB_00128048;
  }
  else {
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001281d0;
      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar8;
      lVar3 = puVar5[1];
      goto LAB_001280d9;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar8 + lVar3 * 6);
  do {
    *pauVar6 = (undefined1  [16])0x0;
    pauVar7 = pauVar6 + 3;
    pauVar6[1] = (undefined1  [16])0x0;
    pauVar6 = pauVar7;
  } while (pauVar7 != (undefined1 (*) [16])(puVar8 + param_1 * 6));
LAB_00128048:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererRD::GI::VoxelGIInstance::DynamicMap>::resize<false>
          (CowData<RendererRD::GI::VoxelGIInstance::DynamicMap> *this,long param_1)

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
    lVar4 = lVar9 * 0x48;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x48 == 0) {
LAB_001284e8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x48 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_001284e8;
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
LAB_00128520:
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
LAB_00128429:
    if (param_1 <= lVar4) goto LAB_00128398;
  }
  else {
    if (lVar9 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00128520;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_00128429;
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
  pauVar7 = (undefined1 (*) [16])(puVar8 + lVar4 * 9);
  do {
    *pauVar7 = (undefined1  [16])0x0;
    pauVar3 = pauVar7 + 4;
    pauVar7[1] = (undefined1  [16])0x0;
    pauVar7[2] = (undefined1  [16])0x0;
    pauVar7[3] = (undefined1  [16])0x0;
    pauVar7 = (undefined1 (*) [16])(*pauVar3 + 8);
  } while ((undefined1 (*) [16])(*pauVar3 + 8) != (undefined1 (*) [16])(puVar8 + param_1 * 9));
LAB_00128398:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>
          (CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
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
    lVar4 = lVar10 * 0xc;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  lVar9 = param_1 * 0xc;
  if (lVar9 == 0) {
LAB_00128838:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = lVar9 - 1U >> 1 | lVar9 - 1U;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  if (uVar5 == 0xffffffffffffffff) goto LAB_00128838;
  if (param_1 <= lVar10) {
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
LAB_00128870:
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
LAB_00128779:
    if (param_1 <= lVar4) goto LAB_001286eb;
  }
  else {
    if (lVar10 != 0) {
      puVar6 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) goto LAB_00128870;
      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar8;
      lVar4 = puVar6[1];
      goto LAB_00128779;
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
  uVar3 = _LC310;
  puVar6 = (undefined8 *)((long)puVar8 + lVar4 * 0xc);
  do {
    *puVar6 = uVar3;
    puVar7 = (undefined8 *)((long)puVar6 + 0xc);
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6 = puVar7;
  } while (puVar7 != (undefined8 *)(lVar9 + (long)puVar8));
LAB_001286eb:
  puVar8[-1] = param_1;
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
        goto LAB_001289d6;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      goto LAB_001289e1;
    }
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_001289e1;
  }
  else {
LAB_001289d6:
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
LAB_001289e1:
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
            goto LAB_00128ca8;
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
  if ((float)uVar2 * __LC361 < (float)(uVar32 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pDVar25 = (DependencyTracker *)0x0;
      goto LAB_00128ca8;
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
LAB_00128ca8:
  *param_1 = pDVar25;
  return;
}



/* RID_Alloc<RendererRD::GI::VoxelGI, true>::initialize_rid(RID, RendererRD::GI::VoxelGI const&) */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGI,true>::initialize_rid
          (RID_Alloc<RendererRD::GI::VoxelGI,true> *this,ulong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  long in_FS_OFFSET;
  DependencyTracker *pDStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1c)) {
      puVar16 = (undefined8 *)
                (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0xe8 +
                *(long *)(*(long *)(this + 8) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar16 + 0x1c) < 0) {
        uVar18 = (uint)(param_2 >> 0x20);
        if (uVar18 == (*(uint *)(puVar16 + 0x1c) & 0x7fffffff)) {
          uVar2 = *param_3;
          *(uint *)(puVar16 + 0x1c) = uVar18;
          *puVar16 = uVar2;
          puVar16[1] = param_3[1];
          puVar16[2] = param_3[2];
          uVar2 = param_3[3];
          puVar16[5] = 0;
          lVar15 = param_3[5];
          puVar16[3] = uVar2;
          if (lVar15 != 0) {
            CowData<int>::_ref((CowData<int> *)(puVar16 + 5),(CowData *)(param_3 + 5));
          }
          uVar3 = *(undefined8 *)((long)param_3 + 0x34);
          uVar4 = *(undefined8 *)((long)param_3 + 0x3c);
          uVar5 = *(undefined8 *)((long)param_3 + 0x44);
          uVar6 = *(undefined8 *)((long)param_3 + 0x4c);
          uVar7 = *(undefined8 *)((long)param_3 + 0x54);
          uVar8 = *(undefined8 *)((long)param_3 + 0x5c);
          uVar9 = *(undefined8 *)((long)param_3 + 100);
          uVar10 = *(undefined8 *)((long)param_3 + 0x6c);
          uVar11 = *(undefined4 *)(param_3 + 0x11);
          uVar12 = *(undefined4 *)((long)param_3 + 0x8c);
          uVar13 = *(undefined4 *)(param_3 + 0x12);
          uVar14 = *(undefined4 *)((long)param_3 + 0x94);
          *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(param_3 + 6);
          uVar2 = *(undefined8 *)((long)param_3 + 0x74);
          *(undefined8 *)((long)puVar16 + 0x34) = uVar3;
          *(undefined8 *)((long)puVar16 + 0x3c) = uVar4;
          *(undefined8 *)((long)puVar16 + 0x44) = uVar5;
          *(undefined8 *)((long)puVar16 + 0x4c) = uVar6;
          *(undefined8 *)((long)puVar16 + 0x74) = uVar2;
          uVar2 = *(undefined8 *)((long)param_3 + 0x7c);
          *(undefined8 *)((long)puVar16 + 0x54) = uVar7;
          *(undefined8 *)((long)puVar16 + 0x5c) = uVar8;
          *(undefined8 *)((long)puVar16 + 0x7c) = uVar2;
          uVar1 = *(undefined4 *)((long)param_3 + 0x84);
          *(undefined8 *)((long)puVar16 + 100) = uVar9;
          *(undefined8 *)((long)puVar16 + 0x6c) = uVar10;
          *(undefined4 *)((long)puVar16 + 0x84) = uVar1;
          uVar2 = param_3[0x13];
          *(undefined4 *)(puVar16 + 0x11) = uVar11;
          *(undefined4 *)((long)puVar16 + 0x8c) = uVar12;
          *(undefined4 *)(puVar16 + 0x12) = uVar13;
          *(undefined4 *)((long)puVar16 + 0x94) = uVar14;
          puVar16[0x13] = uVar2;
          *(undefined2 *)(puVar16 + 0x14) = *(undefined2 *)(param_3 + 0x14);
          uVar2 = *(undefined8 *)((long)param_3 + 0xa4);
          puVar16[0x1b] = 0;
          *(undefined8 *)((long)puVar16 + 0xa4) = uVar2;
          uVar18 = *(uint *)(param_3 + 0x1b);
          *(undefined1 (*) [16])(puVar16 + 0x17) = (undefined1  [16])0x0;
          uVar18 = *(uint *)(hash_table_size_primes + (ulong)uVar18 * 4);
          *(undefined1 (*) [16])(puVar16 + 0x19) = (undefined1  [16])0x0;
          lVar15 = 1;
          if (5 < uVar18) {
            do {
              if (uVar18 <= *(uint *)(hash_table_size_primes + lVar15 * 4)) {
                *(int *)(puVar16 + 0x1b) = (int)lVar15;
                goto LAB_00128fc0;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0x1d);
            _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                             "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                             ,0,0);
          }
LAB_00128fc0:
          if ((*(int *)((long)param_3 + 0xdc) != 0) &&
             (plVar17 = (long *)param_3[0x19], plVar17 != (long *)0x0)) {
            do {
              HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              ::insert(&pDStack_28,(uint *)(puVar16 + 0x16),(bool)((char)plVar17 + '\x10'));
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_001290d8;
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
LAB_001290d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::GI::SDFGI::Cascade::DIRTY_ALL */

void RendererRD::GI::SDFGI::Cascade::_GLOBAL__sub_I_DIRTY_ALL(void)

{
  DAT_001200f0 = 0x7fffffff;
  _DIRTY_ALL = __LC279;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderingDevice::Uniform::Uniform(RenderingDevice::Uniform const&) */

void __thiscall RenderingDevice::Uniform::Uniform(Uniform *this,Uniform *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GiShaderRD::~GiShaderRD() */

void __thiscall GiShaderRD::~GiShaderRD(GiShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SdfgiIntegrateShaderRD::~SdfgiIntegrateShaderRD() */

void __thiscall SdfgiIntegrateShaderRD::~SdfgiIntegrateShaderRD(SdfgiIntegrateShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SdfgiDirectLightShaderRD::~SdfgiDirectLightShaderRD() */

void __thiscall SdfgiDirectLightShaderRD::~SdfgiDirectLightShaderRD(SdfgiDirectLightShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SdfgiDebugProbesShaderRD::~SdfgiDebugProbesShaderRD() */

void __thiscall SdfgiDebugProbesShaderRD::~SdfgiDebugProbesShaderRD(SdfgiDebugProbesShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SdfgiDebugShaderRD::~SdfgiDebugShaderRD() */

void __thiscall SdfgiDebugShaderRD::~SdfgiDebugShaderRD(SdfgiDebugShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SdfgiPreprocessShaderRD::~SdfgiPreprocessShaderRD() */

void __thiscall SdfgiPreprocessShaderRD::~SdfgiPreprocessShaderRD(SdfgiPreprocessShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VoxelGiDebugShaderRD::~VoxelGiDebugShaderRD() */

void __thiscall VoxelGiDebugShaderRD::~VoxelGiDebugShaderRD(VoxelGiDebugShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VoxelGiShaderRD::~VoxelGiShaderRD() */

void __thiscall VoxelGiShaderRD::~VoxelGiShaderRD(VoxelGiShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::GI::RenderBuffersGI::~RenderBuffersGI() */

void __thiscall RendererRD::GI::RenderBuffersGI::~RenderBuffersGI(RenderBuffersGI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::GI::VoxelGIInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGIInstance,false>::~RID_Alloc
          (RID_Alloc<RendererRD::GI::VoxelGIInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::GI::VoxelGI, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::GI::VoxelGI,true>::~RID_Alloc(RID_Alloc<RendererRD::GI::VoxelGI,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



