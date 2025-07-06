/* GodotNavigationServer3D::get_process_info(NavigationServer3D::ProcessInfo) const */

undefined4 __thiscall
GodotNavigationServer3D::get_process_info(GodotNavigationServer3D *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(undefined4 *)(this + 0x500);
  case 1:
    return *(undefined4 *)(this + 0x528);
  case 2:
    return *(undefined4 *)(this + 0x52c);
  case 3:
    return *(undefined4 *)(this + 0x530);
  case 4:
    return *(undefined4 *)(this + 0x534);
  case 5:
    return *(undefined4 *)(this + 0x538);
  case 6:
    return *(undefined4 *)(this + 0x53c);
  case 7:
    return *(undefined4 *)(this + 0x540);
  case 8:
    return *(undefined4 *)(this + 0x544);
  case 9:
    return *(undefined4 *)(this + 0x548);
  default:
    return 0;
  }
}



/* GodotNavigationServer3D::map_get_up(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::map_get_up(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    if (*(int *)(lVar2 + 0x2a8) == (int)(param_2 >> 0x20)) {
      local_28 = *(undefined8 *)(lVar2 + 8);
      local_20 = *(undefined4 *)(lVar2 + 0x10);
      goto LAB_0010012a;
    }
    if (*(int *)(lVar2 + 0x2a8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_up","modules/navigation/3d/godot_navigation_server_3d.cpp",0x97,
                   "Parameter \"map\" is null.",0,0);
  local_20 = 0;
  local_28 = 0;
LAB_0010012a:
  auVar3._8_4_ = local_20;
  auVar3._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_get_cell_size(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::map_get_cell_size(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x14);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_cell_size","modules/navigation/3d/godot_navigation_server_3d.cpp",0xa5,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_cell_height(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::map_get_cell_height(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x18);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_cell_height","modules/navigation/3d/godot_navigation_server_3d.cpp",0xb3
                   ,"Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_merge_rasterizer_cell_scale(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::map_get_merge_rasterizer_cell_scale
          (GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x28);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_merge_rasterizer_cell_scale",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xc1,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_use_edge_connections(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::map_get_use_edge_connections(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x2c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_use_edge_connections",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xcf,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_edge_connection_margin(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::map_get_edge_connection_margin(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x30);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_edge_connection_margin",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xdd,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_link_connection_radius(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::map_get_link_connection_radius(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x34);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_link_connection_radius",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xeb,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_iteration_id(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::map_get_iteration_id(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x130);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_iteration_id","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x544,"Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_map(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::region_get_map(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar3 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x68);
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_map","modules/navigation/3d/godot_navigation_server_3d.cpp",0x15d,
                   "Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_enabled(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::region_get_enabled(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0xa0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_enabled","modules/navigation/3d/godot_navigation_server_3d.cpp",0x195
                   ,"Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_transform(RID) const */

undefined1 (*) [16]
GodotNavigationServer3D::region_get_transform(undefined1 (*param_1) [16],long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x40c))) {
    lVar7 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x408)) * 0x158 +
            *(long *)(*(long *)(param_2 + 0x3f8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x408)) * 8);
    if (*(int *)(lVar7 + 0x150) == (int)(param_3 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar7 + 0x78);
      uVar2 = *(undefined8 *)(lVar7 + 0x80);
      uVar3 = *(undefined8 *)(lVar7 + 0x88);
      uVar4 = *(undefined8 *)(lVar7 + 0x90);
      uVar5 = *(undefined8 *)(lVar7 + 0x98);
      *(undefined8 *)*param_1 = *(undefined8 *)(lVar7 + 0x70);
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar2;
      *(undefined8 *)(param_1[1] + 8) = uVar3;
      *(undefined8 *)param_1[2] = uVar4;
      *(undefined8 *)(param_1[2] + 8) = uVar5;
      return param_1;
    }
    if (*(int *)(lVar7 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_transform","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x1ba,"Parameter \"region\" is null.",0,0);
  uVar6 = _LC21;
  *(undefined4 *)param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *param_1 = ZEXT416(uVar6);
  param_1[1] = ZEXT416(uVar6);
  return param_1;
}



/* GodotNavigationServer3D::region_get_enter_cost(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::region_get_enter_cost(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x14);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_enter_cost","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x1c9,"Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_travel_cost(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::region_get_travel_cost(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x18);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_travel_cost","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x1d8,"Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_owner_id(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::region_get_owner_id(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x20);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_owner_id","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x1e6,"Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_owns_point(RID, Vector3 const&) const */

bool __thiscall
GodotNavigationServer3D::region_owns_point
          (GodotNavigationServer3D *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    if (*(int *)(lVar2 + 0x150) == (int)(param_2 >> 0x20)) {
      if (*(undefined8 **)(lVar2 + 0x68) == (undefined8 *)0x0) {
        return false;
      }
      lVar1 = (**(code **)(*(long *)this + 0x200))(this,**(undefined8 **)(lVar2 + 0x68),param_3);
      return *(long *)(lVar2 + 8) == lVar1;
    }
    if (*(int *)(lVar2 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_owns_point","modules/navigation/3d/godot_navigation_server_3d.cpp",0x1ed,
                   "Parameter \"region\" is null.",0,0);
  return false;
}



/* GodotNavigationServer3D::region_get_navigation_layers(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::region_get_navigation_layers(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x10);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_navigation_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1ff,
                   "Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_bounds(RID) const */

undefined8 *
GodotNavigationServer3D::region_get_bounds(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x40c))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x408)) * 0x158 +
            *(long *)(*(long *)(param_2 + 0x3f8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x408)) * 8);
    if (*(int *)(lVar3 + 0x150) == (int)(param_3 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar3 + 0xbc);
      uVar2 = *(undefined8 *)(lVar3 + 0xc4);
      param_1[2] = *(undefined8 *)(lVar3 + 0xcc);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      return param_1;
    }
    if (*(int *)(lVar3 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_bounds","modules/navigation/3d/godot_navigation_server_3d.cpp",600,
                   "Parameter \"region\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* GodotNavigationServer3D::agent_get_map(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::agent_get_map(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      puVar3 = *(undefined8 **)(lVar1 + 0x68);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      return *puVar3;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_map","modules/navigation/3d/godot_navigation_server_3d.cpp",0x167,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_avoidance_enabled(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::agent_get_avoidance_enabled(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar1 + 0x1b1);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_avoidance_enabled",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x2fb,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_use_3d_avoidance(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::agent_get_use_3d_avoidance(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar1 + 0x1b0);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_use_3d_avoidance",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x309,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_neighbor_distance(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_neighbor_distance(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x50);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_neighbor_distance",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x32e,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_max_neighbors(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_max_neighbors(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x4c);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_max_neighbors","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x33c,"Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_time_horizon_agents(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_time_horizon_agents(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x44);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_time_horizon_agents",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x34b,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_time_horizon_obstacles(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_time_horizon_obstacles
          (GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x48);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_time_horizon_obstacles",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x35a,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_radius(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_radius(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x3c);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_radius","modules/navigation/3d/godot_navigation_server_3d.cpp",0x369,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_height(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_height(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x38);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_height","modules/navigation/3d/godot_navigation_server_3d.cpp",0x378,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_max_speed(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_max_speed(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x40);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_max_speed","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x387,"Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_velocity(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::agent_get_velocity(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    if (*(int *)(lVar1 + 0x200) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar1 + 0x20);
      local_14 = *(undefined4 *)(lVar1 + 0x28);
      goto LAB_001017f0;
    }
    if (*(int *)(lVar1 + 0x200) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_velocity","modules/navigation/3d/godot_navigation_server_3d.cpp",0x395
                   ,"Parameter \"agent\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_001017f0:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar3._12_4_ = 0;
  return auVar3;
}



/* GodotNavigationServer3D::agent_get_position(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::agent_get_position(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    if (*(int *)(lVar1 + 0x200) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar1 + 8);
      local_14 = *(undefined4 *)(lVar1 + 0x10);
      goto LAB_00101920;
    }
    if (*(int *)(lVar1 + 0x200) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_position","modules/navigation/3d/godot_navigation_server_3d.cpp",0x3aa
                   ,"Parameter \"agent\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_00101920:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar3._12_4_ = 0;
  return auVar3;
}



/* GodotNavigationServer3D::agent_get_avoidance_layers(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_avoidance_layers(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x1b4);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_avoidance_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3d4,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_avoidance_mask(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_avoidance_mask(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x1b8);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_avoidance_mask","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x3e1,"Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_get_avoidance_priority(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::agent_get_avoidance_priority(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x1bc);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_avoidance_priority",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3f0,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_get_map(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::link_get_map(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar3 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x30);
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_map","modules/navigation/3d/godot_navigation_server_3d.cpp",0x271,
                   "Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_get_enabled(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::link_get_enabled(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x54);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_enabled","modules/navigation/3d/godot_navigation_server_3d.cpp",0x282,
                   "Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_is_bidirectional(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::link_is_bidirectional(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x38);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_is_bidirectional","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x290,"Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_get_navigation_layers(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::link_get_navigation_layers(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x10);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_navigation_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x29e,
                   "Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_get_start_position(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::link_get_start_position(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    if (*(int *)(lVar2 + 0x78) == (int)(param_2 >> 0x20)) {
      local_28 = *(undefined8 *)(lVar2 + 0x3c);
      local_20 = *(undefined4 *)(lVar2 + 0x44);
      goto LAB_00101fc0;
    }
    if (*(int *)(lVar2 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_start_position","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x2ac,"Parameter \"link\" is null.",0,0);
  local_20 = 0;
  local_28 = 0;
LAB_00101fc0:
  auVar3._8_4_ = local_20;
  auVar3._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::link_get_end_position(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::link_get_end_position(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    if (*(int *)(lVar2 + 0x78) == (int)(param_2 >> 0x20)) {
      local_28 = *(undefined8 *)(lVar2 + 0x48);
      local_20 = *(undefined4 *)(lVar2 + 0x50);
      goto LAB_001020d0;
    }
    if (*(int *)(lVar2 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_end_position","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x2ba,"Parameter \"link\" is null.",0,0);
  local_20 = 0;
  local_28 = 0;
LAB_001020d0:
  auVar3._8_4_ = local_20;
  auVar3._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::link_get_enter_cost(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::link_get_enter_cost(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x14);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_enter_cost","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x2c8,"Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_get_travel_cost(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::link_get_travel_cost(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x18);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_travel_cost","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x2d6,"Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::link_get_owner_id(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::link_get_owner_id(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x20);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("link_get_owner_id","modules/navigation/3d/godot_navigation_server_3d.cpp",0x2e4,
                   "Parameter \"link\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_avoidance_enabled(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::obstacle_get_avoidance_enabled(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar1 + 0x48);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_avoidance_enabled",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x40e,
                   "Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_use_3d_avoidance(RID) const */

undefined1 __thiscall
GodotNavigationServer3D::obstacle_get_use_3d_avoidance(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar1 + 0x49);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_use_3d_avoidance",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x41c,
                   "Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_map(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::obstacle_get_map(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      puVar3 = *(undefined8 **)(lVar1 + 0x10);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      return *puVar3;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_map","modules/navigation/3d/godot_navigation_server_3d.cpp",0x42c,
                   "Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_radius(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::obstacle_get_radius(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x40);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_radius","modules/navigation/3d/godot_navigation_server_3d.cpp",1099
                   ,"Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_height(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::obstacle_get_height(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x44);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_height","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x458,"Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_velocity(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::obstacle_get_velocity(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar1 + 0x18);
      local_14 = *(undefined4 *)(lVar1 + 0x20);
      goto LAB_00102850;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_velocity","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x466,"Parameter \"obstacle\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_00102850:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar3._12_4_ = 0;
  return auVar3;
}



/* GodotNavigationServer3D::obstacle_get_position(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer3D::obstacle_get_position(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar1 + 0x24);
      local_14 = *(undefined4 *)(lVar1 + 0x2c);
      goto LAB_00102980;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_position","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x473,"Parameter \"obstacle\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_00102980:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar3._12_4_ = 0;
  return auVar3;
}



/* GodotNavigationServer3D::obstacle_get_avoidance_layers(RID) const */

undefined4 __thiscall
GodotNavigationServer3D::obstacle_get_avoidance_layers(GodotNavigationServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(this + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar1 + 0x4c);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_avoidance_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x48d,
                   "Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_closest_point_to_segment(RID, Vector3 const&, Vector3 const&,
   bool) const */

undefined8
GodotNavigationServer3D::map_get_closest_point_to_segment
          (long param_1,ulong param_2,Vector3 *param_3,bool param_4)

{
  int iVar1;
  long lVar2;
  Vector3 *pVVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    pVVar3 = (Vector3 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
             *(long *)(*(long *)(param_1 + 0x3a0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8));
    iVar1 = *(int *)(pVVar3 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = NavMap::get_closest_point_to_segment(pVVar3,param_3,param_4);
        return uVar4;
      }
      goto LAB_00102c1b;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_closest_point_to_segment",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x10b,
                   "Parameter \"map\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102c1b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_get_closest_point(RID, Vector3 const&) const */

undefined8 GodotNavigationServer3D::map_get_closest_point(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  Vector3 *pVVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    pVVar3 = (Vector3 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
             *(long *)(*(long *)(param_1 + 0x3a0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8));
    iVar1 = *(int *)(pVVar3 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = NavMap::get_closest_point(pVVar3);
        return uVar4;
      }
      goto LAB_00102d23;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_closest_point","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x112,"Parameter \"map\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102d23:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_get_closest_point_normal(RID, Vector3 const&) const */

undefined8 GodotNavigationServer3D::map_get_closest_point_normal(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  Vector3 *pVVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    pVVar3 = (Vector3 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
             *(long *)(*(long *)(param_1 + 0x3a0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8));
    iVar1 = *(int *)(pVVar3 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = NavMap::get_closest_point_normal(pVVar3);
        return uVar4;
      }
      goto LAB_00102e33;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_closest_point_normal",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x119,
                   "Parameter \"map\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102e33:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_get_closest_point_owner(RID, Vector3 const&) const */

undefined8 GodotNavigationServer3D::map_get_closest_point_owner(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  Vector3 *pVVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    pVVar3 = (Vector3 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
             *(long *)(*(long *)(param_1 + 0x3a0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8));
    iVar1 = *(int *)(pVVar3 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = NavMap::get_closest_point_owner(pVVar3);
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_closest_point_owner",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x120,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_use_async_iterations(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::map_get_use_async_iterations(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = NavMap::get_use_async_iterations();
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_use_async_iterations",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x177,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::map_get_random_point(RID, unsigned int, bool) const */

undefined8 GodotNavigationServer3D::map_get_random_point(long param_1,ulong param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_1 + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar3 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = NavMap::get_random_point((uint)lVar3,param_3);
        return uVar4;
      }
      goto LAB_001030eb;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_random_point","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x17e,"Parameter \"map\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001030eb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_get_connections_count(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::region_get_connections_count(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  NavRegion *pNVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar4 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pNVar2 = *(NavRegion **)(lVar4 + 0x68);
      if (pNVar2 == (NavRegion *)0x0) {
        return 0;
      }
      uVar3 = NavMap::get_region_connections_count(pNVar2);
      return uVar3;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_connections_count",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x21e,
                   "Parameter \"region\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_connection_pathway_start(RID, int) const */

undefined8 GodotNavigationServer3D::region_get_connection_pathway_start(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(uint *)(param_1 + 0x40c) <= (uint)param_2)) {
LAB_001032b0:
    _err_print_error("region_get_connection_pathway_start",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x228,
                     "Parameter \"region\" is null.",0,0);
  }
  else {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
            *(long *)(*(long *)(param_1 + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8);
    if (*(int *)(lVar2 + 0x150) != (int)(param_2 >> 0x20)) {
      if (*(int *)(lVar2 + 0x150) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001032b0;
    }
    if (*(NavRegion **)(lVar2 + 0x68) != (NavRegion *)0x0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = NavMap::get_region_connection_pathway_start
                          (*(NavRegion **)(lVar2 + 0x68),(int)lVar2);
        return uVar3;
      }
      goto LAB_00103323;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00103323:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_get_connection_pathway_end(RID, int) const */

undefined8 GodotNavigationServer3D::region_get_connection_pathway_end(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(uint *)(param_1 + 0x40c) <= (uint)param_2)) {
LAB_00103410:
    _err_print_error("region_get_connection_pathway_end",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x232,
                     "Parameter \"region\" is null.",0,0);
  }
  else {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
            *(long *)(*(long *)(param_1 + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8);
    if (*(int *)(lVar2 + 0x150) != (int)(param_2 >> 0x20)) {
      if (*(int *)(lVar2 + 0x150) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00103410;
    }
    if (*(NavRegion **)(lVar2 + 0x68) != (NavRegion *)0x0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = NavMap::get_region_connection_pathway_end(*(NavRegion **)(lVar2 + 0x68),(int)lVar2);
        return uVar3;
      }
      goto LAB_00103483;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00103483:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_get_closest_point_to_segment(RID, Vector3 const&, Vector3 const&,
   bool) const */

undefined8
GodotNavigationServer3D::region_get_closest_point_to_segment
          (long param_1,ulong param_2,Vector3 *param_3,bool param_4)

{
  int iVar1;
  long lVar2;
  Vector3 *pVVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x40c))) {
    pVVar3 = (Vector3 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
             *(long *)(*(long *)(param_1 + 0x3f8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8));
    iVar1 = *(int *)(pVVar3 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = NavRegion::get_closest_point_to_segment(pVVar3,param_3,param_4);
        return uVar4;
      }
      goto LAB_0010359b;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_closest_point_to_segment",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x23c,
                   "Parameter \"region\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010359b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_get_closest_point(RID, Vector3 const&) const */

undefined1  [16] GodotNavigationServer3D::region_get_closest_point(long param_1,ulong param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x40c))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
                     *(long *)(*(long *)(param_1 + 0x3f8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8) +
                    0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavRegion::get_closest_point_info((Vector3 *)&local_38);
      local_44 = local_38;
      local_3c = local_30;
      goto LAB_00103621;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_closest_point","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x243,"Parameter \"region\" is null.",0,0);
  local_3c = 0;
  local_44 = 0;
LAB_00103621:
  auVar2._8_4_ = local_3c;
  auVar2._0_8_ = local_44;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_get_closest_point_normal(RID, Vector3 const&) const */

undefined1  [16]
GodotNavigationServer3D::region_get_closest_point_normal(long param_1,ulong param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_44;
  undefined4 local_3c;
  Vector3 local_38 [12];
  undefined8 local_2c;
  undefined4 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x40c))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
                     *(long *)(*(long *)(param_1 + 0x3f8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8) +
                    0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavRegion::get_closest_point_info(local_38);
      local_44 = local_2c;
      local_3c = local_24;
      goto LAB_00103761;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_closest_point_normal",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x24a,
                   "Parameter \"region\" is null.",0,0);
  local_3c = 0;
  local_44 = 0;
LAB_00103761:
  auVar2._8_4_ = local_3c;
  auVar2._0_8_ = local_44;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_get_random_point(RID, unsigned int, bool) const */

undefined8 GodotNavigationServer3D::region_get_random_point(long param_1,ulong param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x40c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
            *(long *)(*(long *)(param_1 + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8);
    iVar1 = *(int *)(lVar3 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = NavRegion::get_random_point((uint)lVar3,param_3);
        return uVar4;
      }
      goto LAB_0010392b;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_random_point","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x251,"Parameter \"region\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010392b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::agent_get_paused(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::agent_get_paused(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = NavAgent::get_paused();
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_get_paused","modules/navigation/3d/godot_navigation_server_3d.cpp",800,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_is_map_changed(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::agent_is_map_changed(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = NavAgent::is_map_changed();
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_is_map_changed","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x3b1,"Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::agent_has_avoidance_callback(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::agent_has_avoidance_callback(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = NavAgent::has_avoidance_callback();
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("agent_has_avoidance_callback",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3c7,
                   "Parameter \"agent\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_get_paused(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::obstacle_get_paused(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x4a8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
                     ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88 + 0x80);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      uVar2 = NavObstacle::get_paused();
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_paused","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x43c,"Parameter \"obstacle\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::obstacle_set_vertices(RID, Vector<Vector3> const&) */

void GodotNavigationServer3D::obstacle_set_vertices(long param_1,ulong param_2)

{
  Vector *pVVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x4bc))) {
    pVVar1 = (Vector *)
             (*(long *)(*(long *)(param_1 + 0x4a8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x4b8)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x4b8)) * 0x88);
    iVar2 = *(int *)(pVVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavObstacle::set_vertices(pVVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_set_vertices","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x47a,"Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::sync() */

void __thiscall GodotNavigationServer3D::sync(GodotNavigationServer3D *this)

{
  if (*(long *)(this + 0x520) != 0) {
    NavMeshGenerator3D::sync();
    return;
  }
  return;
}



/* LocalVector<Vector3, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<Vector3,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotNavigationServer3D::get_maps() const */

void GodotNavigationServer3D::get_maps(void)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  RID *pRVar6;
  ulong *puVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  long in_RSI;
  Array *in_RDI;
  ulong uVar10;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_58 = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)in_RDI,(StringName *)0x17,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (*(int *)(in_RSI + 0x3b4) != 0) {
    pauVar9 = (undefined1 (*) [16])0x0;
    uVar10 = 0;
    do {
      uVar2 = *(uint *)((uVar10 % (ulong)*(uint *)(in_RSI + 0x3b0)) * 0x2b0 +
                        *(long *)(*(long *)(in_RSI + 0x3a0) +
                                 (uVar10 / *(uint *)(in_RSI + 0x3b0)) * 8) + 0x2a8);
      if (uVar2 != 0xffffffff) {
        if (pauVar9 == (undefined1 (*) [16])0x0) {
          pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar9[1] = 0;
          *pauVar9 = (undefined1  [16])0x0;
        }
        puVar7 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
        uVar3 = *(ulong *)(*pauVar9 + 8);
        puVar7[1] = 0;
        *puVar7 = (ulong)uVar2 << 0x20 | uVar10;
        puVar7[2] = uVar3;
        puVar7[3] = (ulong)pauVar9;
        if (uVar3 != 0) {
          *(ulong **)(uVar3 + 8) = puVar7;
        }
        lVar8 = *(long *)*pauVar9;
        *(ulong **)(*pauVar9 + 8) = puVar7;
        if (lVar8 == 0) {
          *(ulong **)*pauVar9 = puVar7;
        }
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(in_RSI + 0x3b4));
    if (pauVar9 != (undefined1 (*) [16])0x0) {
      if (*(int *)pauVar9[1] != 0) {
        for (pRVar6 = *(RID **)*pauVar9; pRVar6 != (RID *)0x0; pRVar6 = *(RID **)(pRVar6 + 8)) {
          Variant::Variant((Variant *)&local_58,pRVar6);
          Array::push_back((Variant *)in_RDI);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      if (pauVar9 != (undefined1 (*) [16])0x0) {
        do {
          while( true ) {
            pvVar4 = *(void **)*pauVar9;
            if (pvVar4 == (void *)0x0) {
              if (*(int *)pauVar9[1] != 0) {
                _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
                goto LAB_00103f16;
              }
              goto LAB_00103f0c;
            }
            if (*(undefined1 (**) [16])((long)pvVar4 + 0x18) != pauVar9) break;
            lVar8 = *(long *)((long)pvVar4 + 8);
            lVar5 = *(long *)((long)pvVar4 + 0x10);
            *(long *)*pauVar9 = lVar8;
            if (pvVar4 == *(void **)(*pauVar9 + 8)) {
              *(long *)(*pauVar9 + 8) = lVar5;
            }
            if (lVar5 != 0) {
              *(long *)(lVar5 + 8) = lVar8;
              lVar8 = *(long *)((long)pvVar4 + 8);
            }
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x10) = lVar5;
            }
            Memory::free_static(pvVar4,false);
            pauVar1 = pauVar9 + 1;
            *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
            if (*(int *)*pauVar1 == 0) {
              Memory::free_static(pauVar9,false);
              goto LAB_00103f16;
            }
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while (*(int *)pauVar9[1] != 0);
LAB_00103f0c:
        Memory::free_static(pauVar9,false);
      }
    }
  }
LAB_00103f16:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_is_active(RID) const */

undefined8 __thiscall
GodotNavigationServer3D::map_is_active(GodotNavigationServer3D *this,ulong param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(this + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    iVar2 = *(int *)(lVar4 + 0x2a8);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      plVar3 = *(long **)(this + 0x508);
      plVar1 = plVar3 + *(uint *)(this + 0x500);
      if (*(uint *)(this + 0x500) == 0) {
        return 0;
      }
      do {
        if (*plVar3 == lVar4) {
          return 1;
        }
        plVar3 = plVar3 + 1;
      } while (plVar1 != plVar3);
      return 0;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_is_active","modules/navigation/3d/godot_navigation_server_3d.cpp",0x89,
                   "Parameter \"map\" is null.",0,0);
  return 0;
}



/* GodotNavigationServer3D::region_get_use_edge_connections(RID) const */

ulong __thiscall
GodotNavigationServer3D::region_get_use_edge_connections
          (GodotNavigationServer3D *this,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
                     *(long *)(*(long *)(this + 0x3f8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    if ((int)plVar2[0x2a] == (int)(param_2 >> 0x20)) {
      if (*(code **)(*plVar2 + 8) == NavRegion::get_use_edge_connections) {
        return (ulong)*(byte *)((long)plVar2 + 0xa1);
      }
                    /* WARNING: Could not recover jumptable at 0x00104234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 8))();
      return uVar1;
    }
    if ((int)plVar2[0x2a] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("region_get_use_edge_connections",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1a3,
                   "Parameter \"region\" is null.",0,0);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::source_geometry_parser_set_callback(RID, Callable const&) */

void __thiscall
GodotNavigationServer3D::source_geometry_parser_set_callback
          (undefined8 param_1,ulong param_2,Callable *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
  if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if ((param_2 != 0) && ((uint)param_2 < _DAT_0011f174)) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)___throw_system_error) * 0x20 +
            *(long *)(_operator_ + ((param_2 & 0xffffffff) / (ulong)___throw_system_error) * 8);
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      Callable::operator=((Callable *)(lVar2 + 8),param_3);
      goto LAB_00104328;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("source_geometry_parser_set_callback",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x5b7,
                   "Parameter \"parser\" is null.",0,0);
LAB_00104328:
  pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
  return;
}



/* GodotNavigationServer3D::map_get_links(RID) const */

Array * GodotNavigationServer3D::map_get_links(Array *param_1,long param_2,ulong param_3)

{
  Variant *pVVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(param_1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar3 = (uint)param_1;
  Array::set_typed(uVar3,(StringName *)0x17,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x3b4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_2 + 0x3a0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x3b0)) * 8);
    if (*(int *)(lVar2 + 0x2a8) == (int)(param_3 >> 0x20)) {
      lVar4 = 0;
      Array::resize(uVar3);
      if (*(int *)(lVar2 + 0x50) != 0) {
        do {
          local_60 = *(long *)(*(long *)(*(long *)(lVar2 + 0x58) + lVar4 * 8) + 8);
          Variant::Variant((Variant *)local_58,(Variant *)&local_60);
          pVVar1 = (Variant *)Array::operator[](uVar3);
          if (pVVar1 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar1 = 0;
            *(int *)pVVar1 = local_58[0];
            *(undefined8 *)(pVVar1 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar1 + 0x10) = local_50._8_8_;
          }
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *(uint *)(lVar2 + 0x50));
      }
      goto LAB_0010450b;
    }
    if (*(int *)(lVar2 + 0x2a8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_links","modules/navigation/3d/godot_navigation_server_3d.cpp",0x128,
                   "Parameter \"map\" is null.",0,0);
LAB_0010450b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GodotNavigationServer3D::map_get_agents(RID) const */

Array * GodotNavigationServer3D::map_get_agents(Array *param_1,long param_2,ulong param_3)

{
  Variant *pVVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(param_1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar3 = (uint)param_1;
  Array::set_typed(uVar3,(StringName *)0x17,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x3b4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_2 + 0x3a0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x3b0)) * 8);
    if (*(int *)(lVar2 + 0x2a8) == (int)(param_3 >> 0x20)) {
      lVar4 = 0;
      Array::resize(uVar3);
      if (*(int *)(lVar2 + 0x108) != 0) {
        do {
          local_60 = **(long **)(*(long *)(lVar2 + 0x110) + lVar4 * 8);
          Variant::Variant((Variant *)local_58,(Variant *)&local_60);
          pVVar1 = (Variant *)Array::operator[](uVar3);
          if (pVVar1 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar1 = 0;
            *(int *)pVVar1 = local_58[0];
            *(undefined8 *)(pVVar1 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar1 + 0x10) = local_50._8_8_;
          }
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *(uint *)(lVar2 + 0x108));
      }
      goto LAB_00104760;
    }
    if (*(int *)(lVar2 + 0x2a8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_agents","modules/navigation/3d/godot_navigation_server_3d.cpp",0x144,
                   "Parameter \"map\" is null.",0,0);
LAB_00104760:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GodotNavigationServer3D::map_get_regions(RID) const */

Array * GodotNavigationServer3D::map_get_regions(Array *param_1,long param_2,ulong param_3)

{
  Variant *pVVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(param_1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar3 = (uint)param_1;
  Array::set_typed(uVar3,(StringName *)0x17,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x3b4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_2 + 0x3a0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x3b0)) * 8);
    if (*(int *)(lVar2 + 0x2a8) == (int)(param_3 >> 0x20)) {
      lVar4 = 0;
      Array::resize(uVar3);
      if (*(int *)(lVar2 + 0x40) != 0) {
        do {
          local_60 = *(long *)(*(long *)(*(long *)(lVar2 + 0x48) + lVar4 * 8) + 8);
          Variant::Variant((Variant *)local_58,(Variant *)&local_60);
          pVVar1 = (Variant *)Array::operator[](uVar3);
          if (pVVar1 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar1 = 0;
            *(int *)pVVar1 = local_58[0];
            *(undefined8 *)(pVVar1 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar1 + 0x10) = local_50._8_8_;
          }
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *(uint *)(lVar2 + 0x40));
      }
      goto LAB_001049ab;
    }
    if (*(int *)(lVar2 + 0x2a8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_regions","modules/navigation/3d/godot_navigation_server_3d.cpp",0x136,
                   "Parameter \"map\" is null.",0,0);
LAB_001049ab:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GodotNavigationServer3D::set_active(bool) */

void __thiscall GodotNavigationServer3D::set_active(GodotNavigationServer3D *this,bool param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
  if (iVar1 == 0) {
    this[0x4f8] = (GodotNavigationServer3D)param_1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* GodotNavigationServer3D::query_path(Ref<NavigationPathQueryParameters3D> const&,
   Ref<NavigationPathQueryResult3D>, Callable const&) */

void __thiscall
GodotNavigationServer3D::query_path
          (GodotNavigationServer3D *this,long *param_1,long *param_3,undefined8 param_4)

{
  int iVar1;
  Object *pOVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x59b;
      pcVar5 = "Condition \"p_query_parameters.is_null()\" is true.";
      goto LAB_00104c16;
    }
  }
  else if (*param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x59c;
      pcVar5 = "Condition \"p_query_result.is_null()\" is true.";
      goto LAB_00104c16;
    }
  }
  else {
    uVar4 = NavigationPathQueryParameters3D::get_map();
    if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)(this + 0x3b4))) {
      lVar7 = ((uVar4 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
              *(long *)(*(long *)(this + 0x3a0) +
                       ((uVar4 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
      iVar1 = *(int *)(lVar7 + 0x2a8);
      if (iVar1 == (int)(uVar4 >> 0x20)) {
        local_38 = (Object *)0x0;
        if ((Object *)*param_3 != (Object *)0x0) {
          local_38 = (Object *)*param_3;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_38 = (Object *)0x0;
          }
        }
        NavMeshQueries3D::map_query_path(lVar7,param_1,&local_38,param_4);
        if (local_38 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
          pOVar2 = local_38;
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_38);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00104ccb;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x59f;
      pcVar5 = "Parameter \"map\" is null.";
LAB_00104c16:
      _err_print_error("query_path","modules/navigation/3d/godot_navigation_server_3d.cpp",uVar6,
                       pcVar5,0,0);
      return;
    }
  }
LAB_00104ccb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* GodotNavigationServer3D::obstacle_get_vertices(RID) const */

long GodotNavigationServer3D::obstacle_get_vertices(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x4a8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x4b8)) * 8) +
            ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x4b8)) * 0x88;
    if (*(int *)(lVar1 + 0x80) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x38) != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)(param_1 + 8),(CowData *)(lVar1 + 0x38));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("obstacle_get_vertices","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x480,"Parameter \"obstacle\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* GodotNavigationServer3D::is_baking_navigation_mesh(Ref<NavigationMesh>) const */

undefined4 __thiscall
GodotNavigationServer3D::is_baking_navigation_mesh(undefined8 param_1,long *param_2)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  NavMeshGenerator3D::get_singleton();
  local_28 = (Object *)0x0;
  if ((Object *)*param_2 != (Object *)0x0) {
    local_28 = (Object *)*param_2;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_28 = (Object *)0x0;
    }
  }
  uVar3 = NavMeshGenerator3D::is_baking(&local_28);
  if (local_28 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_28;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_28);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_get_path(RID, Vector3, Vector3, bool, unsigned int) */

long GodotNavigationServer3D::map_get_path
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               long param_5,long *param_6,ulong param_7,char param_8)

{
  int iVar1;
  Object *pOVar2;
  char cVar3;
  RefCounted *pRVar4;
  long lVar5;
  code *pcVar6;
  RefCounted *pRVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  byte bVar9;
  Object *local_78;
  RefCounted *local_70;
  long local_68 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_7 != 0) && ((uint)param_7 < *(uint *)((long)param_6 + 0x3b4))) {
    iVar1 = *(int *)(((param_7 & 0xffffffff) % (ulong)*(uint *)(param_6 + 0x76)) * 0x2b0 +
                     *(long *)(param_6[0x74] +
                              ((param_7 & 0xffffffff) / (ulong)*(uint *)(param_6 + 0x76)) * 8) +
                    0x2a8);
    if (iVar1 == (int)(param_7 >> 0x20)) {
      local_78 = (Object *)0x0;
      pRVar4 = (RefCounted *)operator_new(0x1c0,"");
      pRVar7 = pRVar4;
      for (lVar5 = 0x38; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)pRVar7 = 0;
        pRVar7 = pRVar7 + (ulong)bVar9 * -0x10 + 8;
      }
      RefCounted::RefCounted(pRVar4);
      pRVar4[0x1b8] = (RefCounted)0x0;
      *(undefined ***)pRVar4 = &PTR__initialize_classv_00118960;
      *(undefined8 *)(pRVar4 + 0x17c) = 0;
      *(undefined8 *)(pRVar4 + 0x188) = 0;
      *(undefined8 *)(pRVar4 + 400) = 0;
      *(undefined4 *)(pRVar4 + 0x198) = 0;
      *(undefined8 *)(pRVar4 + 0x19c) = 0;
      *(undefined4 *)(pRVar4 + 0x1a4) = 0;
      *(undefined4 *)(pRVar4 + 0x1a8) = 1;
      *(undefined8 *)(pRVar4 + 0x1b0) = 7;
      *(undefined4 *)(pRVar4 + 0x1bc) = 0;
      postinitialize_handler((Object *)pRVar4);
      cVar3 = RefCounted::init_ref();
      pOVar2 = local_78;
      if (cVar3 == '\0') {
        if (local_78 != (Object *)0x0) {
          local_78 = (Object *)0x0;
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pRVar4 = (RefCounted *)0x0;
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') goto LAB_0010548a;
          }
        }
      }
      else {
        pOVar8 = local_78;
        if (pRVar4 != (RefCounted *)local_78) {
          local_78 = (Object *)pRVar4;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_78 = (Object *)0x0;
          }
          pOVar8 = (Object *)pRVar4;
          if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
LAB_0010548a:
            (**(code **)(*(long *)pOVar2 + 0x140))();
            Memory::free_static(pOVar2,false);
            pOVar8 = (Object *)pRVar4;
            if (pRVar4 == (RefCounted *)0x0) goto LAB_00105085;
          }
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
LAB_00105085:
      NavigationPathQueryParameters3D::set_map(local_78,param_7);
      NavigationPathQueryParameters3D::set_start_position(param_1,param_2,local_78);
      NavigationPathQueryParameters3D::set_target_position(param_3,param_4,local_78);
      NavigationPathQueryParameters3D::set_navigation_layers((uint)local_78);
      NavigationPathQueryParameters3D::set_pathfinding_algorithm(local_78,0);
      NavigationPathQueryParameters3D::set_path_postprocessing(local_78,0);
      if (param_8 == '\0') {
        NavigationPathQueryParameters3D::set_path_postprocessing(local_78,1);
      }
      pRVar4 = (RefCounted *)operator_new(0x1b8,"");
      pRVar7 = pRVar4;
      for (lVar5 = 0x37; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)pRVar7 = 0;
        pRVar7 = pRVar7 + (ulong)bVar9 * -0x10 + 8;
      }
      RefCounted::RefCounted(pRVar4);
      *(undefined8 *)(pRVar4 + 0x188) = 0;
      *(undefined ***)pRVar4 = &PTR__initialize_classv_00118ac0;
      *(undefined8 *)(pRVar4 + 0x198) = 0;
      Array::Array((Array *)(pRVar4 + 0x1a0));
      local_58 = 0;
      local_68[0] = 0;
      local_50 = (undefined1  [16])0x0;
      Array::set_typed((uint)(Array *)(pRVar4 + 0x1a0),(StringName *)0x17,(Variant *)local_68);
      if ((StringName::configured != '\0') && (local_68[0] != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58] == '\0') {
        *(undefined8 *)(pRVar4 + 0x1b0) = 0;
        postinitialize_handler((Object *)pRVar4);
      }
      else {
        Variant::_clear_internal();
        *(undefined8 *)(pRVar4 + 0x1b0) = 0;
        postinitialize_handler((Object *)pRVar4);
      }
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
        local_70 = (RefCounted *)0x0;
        pRVar7 = (RefCounted *)0x0;
        pcVar6 = *(code **)(*param_6 + 0x5c8);
        local_68[0] = 0;
        local_68[1] = 0;
      }
      else {
        cVar3 = RefCounted::reference();
        pRVar7 = (RefCounted *)0x0;
        if (cVar3 != '\0') {
          pRVar7 = pRVar4;
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pRVar4), cVar3 != '\0')) {
          (**(code **)(*(long *)pRVar4 + 0x140))(pRVar4);
          Memory::free_static(pRVar4,false);
        }
        pcVar6 = *(code **)(*param_6 + 0x5c8);
        local_68[0] = 0;
        local_68[1] = 0;
        if ((pRVar7 == (RefCounted *)0x0) ||
           (local_70 = pRVar7, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_70 = (RefCounted *)0x0;
        }
      }
      (*pcVar6)(param_6,&local_78,&local_70,(Callable *)local_68);
      if (((local_70 != (RefCounted *)0x0) &&
          (cVar3 = RefCounted::unreference(), pRVar4 = local_70, cVar3 != '\0')) &&
         (cVar3 = predelete_handler((Object *)local_70), cVar3 != '\0')) {
        (**(code **)(*(long *)pRVar4 + 0x140))(pRVar4);
        Memory::free_static(pRVar4,false);
      }
      Callable::~Callable((Callable *)local_68);
      lVar5 = NavigationPathQueryResult3D::get_path();
      *(undefined8 *)(param_5 + 8) = 0;
      if (*(long *)(lVar5 + 8) != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)(param_5 + 8),(CowData *)(lVar5 + 8));
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pRVar7), cVar3 != '\0')) {
        (**(code **)(*(long *)pRVar7 + 0x140))(pRVar7);
        Memory::free_static(pRVar7,false);
      }
      if (((local_78 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar2 = local_78, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_0010526e;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_path","modules/navigation/3d/godot_navigation_server_3d.cpp",0xf2,
                   "Parameter \"map\" is null.",0,0);
  *(undefined8 *)(param_5 + 8) = 0;
LAB_0010526e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_5;
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
/* GodotNavigationServer3D::init() */

void __thiscall GodotNavigationServer3D::init(GodotNavigationServer3D *this)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  NavMeshGenerator3D *this_00;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint local_38;
  uint uStack_34;
  void *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (NavMeshGenerator3D *)operator_new(0x178,"");
  NavMeshGenerator3D::NavMeshGenerator3D(this_00);
  postinitialize_handler((Object *)this_00);
  *(NavMeshGenerator3D **)(this + 0x520) = this_00;
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
    uVar2 = (uint)NavigationServer3D::generator_parsers;
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  local_38 = 0;
  uStack_34 = 0;
  local_30 = (void *)0x0;
  if ((uint)NavigationServer3D::generator_parsers != 0) {
    uVar5 = (uint)NavigationServer3D::generator_parsers - 1 |
            (uint)NavigationServer3D::generator_parsers - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 >> 8 | uVar5;
    uStack_34 = (uVar5 | uVar5 >> 0x10) + 1;
    local_38 = 0;
    local_30 = (void *)Memory::realloc_static((void *)0x0,(ulong)uStack_34 * 8,false);
    lVar3 = _realloc_static;
    if (local_30 == (void *)0x0) {
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar7 = (ulong)(uint)NavigationServer3D::generator_parsers;
    local_38 = uVar2;
    if ((uint)NavigationServer3D::generator_parsers != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)((long)local_30 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != uVar7 << 3);
    }
  }
  NavMeshGenerator3D::set_generator_parsers(&local_38);
  if (local_30 != (void *)0x0) {
    if (local_38 != 0) {
      local_38 = 0;
    }
    Memory::free_static(local_30,false);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_get_obstacles(RID) const */

Array * GodotNavigationServer3D::map_get_obstacles(Array *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  Variant *pVVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(param_1);
  local_58 = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar8 = (uint)param_1;
  Array::set_typed(uVar8,(StringName *)0x17,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x3b4))) {
    lVar7 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_2 + 0x3a0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x3b0)) * 8);
    if (*(int *)(lVar7 + 0x2a8) == (int)(param_3 >> 0x20)) {
      uVar1 = *(uint *)(lVar7 + 0x118);
      if (uVar1 == 0) {
        Array::resize(uVar8);
      }
      else {
        uVar3 = uVar1 - 1 | uVar1 - 1 >> 1;
        uVar3 = uVar3 >> 2 | uVar3;
        uVar3 = uVar3 >> 4 | uVar3;
        uVar3 = uVar3 | uVar3 >> 8;
        pvVar4 = (void *)Memory::realloc_static
                                   ((void *)0x0,(ulong)((uVar3 | uVar3 >> 0x10) + 1) << 3,false);
        if (pvVar4 == (void *)0x0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar3 = *(uint *)(lVar7 + 0x118);
        if (uVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x120);
          lVar5 = 0;
          do {
            *(undefined8 *)((long)pvVar4 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
            lVar5 = lVar5 + 8;
          } while ((ulong)uVar3 << 3 != lVar5);
        }
        Array::resize(uVar8);
        uVar9 = 0;
        do {
          local_60 = **(long **)((long)pvVar4 + uVar9 * 8);
          Variant::Variant((Variant *)&local_58,(Variant *)&local_60);
          pVVar6 = (Variant *)Array::operator[](uVar8);
          if (pVVar6 == (Variant *)&local_58) {
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar6 = 0;
            *(int *)pVVar6 = (int)local_58;
            *(undefined8 *)(pVVar6 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar6 + 0x10) = local_50._8_8_;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar1);
        Memory::free_static(pvVar4,false);
      }
      goto LAB_0010598a;
    }
    if (*(int *)(lVar7 + 0x2a8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_get_obstacles","modules/navigation/3d/godot_navigation_server_3d.cpp",0x152,
                   "Parameter \"map\" is null.",0,0);
LAB_0010598a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::GodotNavigationServer3D() */

void __thiscall GodotNavigationServer3D::GodotNavigationServer3D(GodotNavigationServer3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  NavigationServer3D::NavigationServer3D((NavigationServer3D *)this);
  uVar2 = _UNK_00119e28;
  uVar1 = __LC113;
  *(undefined ***)this = &PTR__initialize_classv_00118e98;
  *(undefined ***)(this + 0x340) = &PTR__RID_Alloc_00118df8;
  *(undefined8 *)(this + 0x358) = uVar1;
  *(undefined8 *)(this + 0x360) = uVar2;
  uVar2 = _UNK_00119e38;
  uVar1 = __LC114;
  *(undefined ***)(this + 0x398) = &PTR__RID_Alloc_00118e18;
  *(undefined1 (*) [16])(this + 0x2f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x380) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3d8) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x3f0) = &PTR__RID_Alloc_00118e38;
  *(undefined1 (*) [16])(this + 0x2e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x308) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3c8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x3b0) = uVar1;
  *(undefined8 *)(this + 0x3b8) = uVar2;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x2f0) = 1;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x318) = 1;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined4 *)(this + 0x380) = 1;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3d8) = 1;
  *(undefined8 *)(this + 0x3f8) = 0;
  uVar2 = _UNK_00119e48;
  uVar1 = __LC115;
  *(undefined1 (*) [16])(this + 0x430) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x488) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4d0) = (undefined1  [16])0x0;
  uVar4 = _UNK_00119e68;
  uVar3 = __LC117;
  *(undefined8 *)(this + 0x408) = uVar1;
  *(undefined8 *)(this + 0x410) = uVar2;
  uVar2 = _UNK_00119e58;
  uVar1 = __LC116;
  *(undefined ***)(this + 0x448) = &PTR__RID_Alloc_00118e58;
  *(undefined8 *)(this + 0x4b8) = uVar3;
  *(undefined8 *)(this + 0x4c0) = uVar4;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x430) = 1;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined4 *)(this + 0x488) = 1;
  *(undefined ***)(this + 0x4a0) = &PTR__RID_Alloc_00118e78;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4e0) = 1;
  this[0x4f8] = (GodotNavigationServer3D)0x1;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x460) = uVar1;
  *(undefined8 *)(this + 0x468) = uVar2;
  *(undefined1 (*) [16])(this + 0x518) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x548) = 0;
  *(undefined1 (*) [16])(this + 0x528) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x538) = (undefined1  [16])0x0;
  return;
}



/* GodotNavigationServer3D::add_command(SetCommand*) */

void __thiscall
GodotNavigationServer3D::add_command(GodotNavigationServer3D *this,SetCommand *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x2e0));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar1 = *(uint *)(this + 0x330);
  pvVar4 = *(void **)(this + 0x338);
  if (uVar1 == *(uint *)(this + 0x334)) {
    uVar5 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar5 = 1;
    }
    *(int *)(this + 0x334) = (int)uVar5;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 8,false);
    *(void **)(this + 0x338) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x330);
  }
  *(uint *)(this + 0x330) = uVar1 + 1;
  *(SetCommand **)((long)pvVar4 + (ulong)uVar1 * 8) = param_1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2e0));
  return;
}



/* GodotNavigationServer3D::map_set_active(RID, bool) */

void __thiscall
GodotNavigationServer3D::map_set_active
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_active_command_001194b8;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_up(RID, Vector3) */

void GodotNavigationServer3D::map_set_up
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__map_set_up_command_001194e0;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::map_set_cell_size(RID, float) */

void __thiscall
GodotNavigationServer3D::map_set_cell_size
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_cell_size_command_00119508;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_cell_height(RID, float) */

void __thiscall
GodotNavigationServer3D::map_set_cell_height
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_cell_height_command_00119530;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_merge_rasterizer_cell_scale(RID, float) */

void __thiscall
GodotNavigationServer3D::map_set_merge_rasterizer_cell_scale
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_merge_rasterizer_cell_scale_command_00119558;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_use_edge_connections(RID, bool) */

void __thiscall
GodotNavigationServer3D::map_set_use_edge_connections
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_use_edge_connections_command_00119580;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_edge_connection_margin(RID, float) */

void __thiscall
GodotNavigationServer3D::map_set_edge_connection_margin
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_edge_connection_margin_command_001195a8;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_link_connection_radius(RID, float) */

void __thiscall
GodotNavigationServer3D::map_set_link_connection_radius
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_link_connection_radius_command_001195d0;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::map_set_use_async_iterations(RID, bool) */

void __thiscall
GodotNavigationServer3D::map_set_use_async_iterations
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__map_set_use_async_iterations_command_001195f8;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_enabled(RID, bool) */

void __thiscall
GodotNavigationServer3D::region_set_enabled
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_enabled_command_00119620;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_use_edge_connections(RID, bool) */

void __thiscall
GodotNavigationServer3D::region_set_use_edge_connections
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_use_edge_connections_command_00119648;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::region_set_map
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_map_command_00119670;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined8 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_transform(RID, Transform3D) */

void GodotNavigationServer3D::region_set_transform
               (GodotNavigationServer3D *param_1,undefined8 param_2)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x40,"");
  *(undefined ***)pSVar2 = &PTR__region_set_transform_command_00119698;
  *(undefined8 *)(pSVar2 + 8) = param_2;
  *(undefined8 *)(pSVar2 + 0x10) = in_stack_00000008;
  *(undefined8 *)(pSVar2 + 0x18) = in_stack_00000010;
  *(undefined8 *)(pSVar2 + 0x20) = in_stack_00000018;
  *(undefined8 *)(pSVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(pSVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(pSVar2 + 0x38) = in_stack_00000030;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_1,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_set_enter_cost(RID, float) */

void __thiscall
GodotNavigationServer3D::region_set_enter_cost
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_enter_cost_command_001196c0;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_travel_cost(RID, float) */

void __thiscall
GodotNavigationServer3D::region_set_travel_cost
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_travel_cost_command_001196e8;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_owner_id(RID, ObjectID) */

void __thiscall
GodotNavigationServer3D::region_set_owner_id
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_owner_id_command_00119710;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined8 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_navigation_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::region_set_navigation_layers
          (GodotNavigationServer3D *this,undefined8 param_2,undefined4 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__region_set_navigation_layers_command_00119738;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined4 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::link_set_map
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_map_command_00119788;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined8 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_enabled(RID, bool) */

void __thiscall
GodotNavigationServer3D::link_set_enabled
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_enabled_command_001197b0;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_bidirectional(RID, bool) */

void __thiscall
GodotNavigationServer3D::link_set_bidirectional
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_bidirectional_command_001197d8;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_navigation_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::link_set_navigation_layers
          (GodotNavigationServer3D *this,undefined8 param_2,undefined4 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_navigation_layers_command_00119800;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined4 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_start_position(RID, Vector3) */

void GodotNavigationServer3D::link_set_start_position
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__link_set_start_position_command_00119828;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::link_set_end_position(RID, Vector3) */

void GodotNavigationServer3D::link_set_end_position
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__link_set_end_position_command_00119850;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::link_set_enter_cost(RID, float) */

void __thiscall
GodotNavigationServer3D::link_set_enter_cost
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_enter_cost_command_00119878;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_travel_cost(RID, float) */

void __thiscall
GodotNavigationServer3D::link_set_travel_cost
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_travel_cost_command_001198a0;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::link_set_owner_id(RID, ObjectID) */

void __thiscall
GodotNavigationServer3D::link_set_owner_id
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__link_set_owner_id_command_001198c8;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined8 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_avoidance_enabled(RID, bool) */

void __thiscall
GodotNavigationServer3D::agent_set_avoidance_enabled
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_avoidance_enabled_command_001198f0;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_use_3d_avoidance(RID, bool) */

void __thiscall
GodotNavigationServer3D::agent_set_use_3d_avoidance
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_use_3d_avoidance_command_00119918;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::agent_set_map
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_map_command_00119940;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined8 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_paused(RID, bool) */

void __thiscall
GodotNavigationServer3D::agent_set_paused
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_paused_command_00119968;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_neighbor_distance(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_neighbor_distance
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_neighbor_distance_command_00119990;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_max_neighbors(RID, int) */

void __thiscall
GodotNavigationServer3D::agent_set_max_neighbors
          (GodotNavigationServer3D *this,undefined8 param_2,undefined4 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_max_neighbors_command_001199b8;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined4 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_time_horizon_agents(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_time_horizon_agents
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_time_horizon_agents_command_001199e0;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_time_horizon_obstacles(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_time_horizon_obstacles
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_time_horizon_obstacles_command_00119a08;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_radius(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_radius
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_radius_command_00119a30;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_height(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_height
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_height_command_00119a58;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_max_speed(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_max_speed
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_max_speed_command_00119a80;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_velocity(RID, Vector3) */

void GodotNavigationServer3D::agent_set_velocity
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__agent_set_velocity_command_00119aa8;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::agent_set_velocity_forced(RID, Vector3) */

void GodotNavigationServer3D::agent_set_velocity_forced
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__agent_set_velocity_forced_command_00119ad0;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::agent_set_position(RID, Vector3) */

void GodotNavigationServer3D::agent_set_position
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__agent_set_position_command_00119af8;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::agent_set_avoidance_callback(RID, Callable) */

void __thiscall
GodotNavigationServer3D::agent_set_avoidance_callback
          (GodotNavigationServer3D *this,undefined8 param_2,Callable *param_3)

{
  SetCommand *pSVar1;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (SetCommand *)operator_new(0x20,"");
  Callable::Callable(aCStack_48,param_3);
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined ***)pSVar1 = &PTR__agent_set_avoidance_callback_command_00119b20;
  Callable::Callable((Callable *)(pSVar1 + 0x10),aCStack_48);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(this,pSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::agent_set_avoidance_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::agent_set_avoidance_layers
          (GodotNavigationServer3D *this,undefined8 param_2,undefined4 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_avoidance_layers_command_00119b48;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined4 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_avoidance_mask(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::agent_set_avoidance_mask
          (GodotNavigationServer3D *this,undefined8 param_2,undefined4 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_avoidance_mask_command_00119b70;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined4 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::agent_set_avoidance_priority(RID, float) */

void __thiscall
GodotNavigationServer3D::agent_set_avoidance_priority
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__agent_set_avoidance_priority_command_00119b98;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_avoidance_enabled(RID, bool) */

void __thiscall
GodotNavigationServer3D::obstacle_set_avoidance_enabled
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_avoidance_enabled_command_00119bc0;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_use_3d_avoidance(RID, bool) */

void __thiscall
GodotNavigationServer3D::obstacle_set_use_3d_avoidance
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_use_3d_avoidance_command_00119be8;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::obstacle_set_map
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_map_command_00119c10;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined8 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_paused(RID, bool) */

void __thiscall
GodotNavigationServer3D::obstacle_set_paused
          (GodotNavigationServer3D *this,undefined8 param_2,SetCommand param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_paused_command_00119c38;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  pSVar1[0x10] = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_radius(RID, float) */

void __thiscall
GodotNavigationServer3D::obstacle_set_radius
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_radius_command_00119c60;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_height(RID, float) */

void __thiscall
GodotNavigationServer3D::obstacle_set_height
          (undefined4 param_1,GodotNavigationServer3D *this,undefined8 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_height_command_00119c88;
  *(undefined8 *)(pSVar1 + 8) = param_3;
  *(undefined4 *)(pSVar1 + 0x10) = param_1;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::obstacle_set_velocity(RID, Vector3) */

void GodotNavigationServer3D::obstacle_set_velocity
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__obstacle_set_velocity_command_00119cb0;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::obstacle_set_position(RID, Vector3) */

void GodotNavigationServer3D::obstacle_set_position
               (undefined8 param_1,undefined4 param_2,GodotNavigationServer3D *param_3,
               undefined8 param_4)

{
  long lVar1;
  SetCommand *pSVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SetCommand *)operator_new(0x20,"");
  *(undefined ***)pSVar2 = &PTR__obstacle_set_position_command_00119cd8;
  *(undefined8 *)(pSVar2 + 8) = param_4;
  *(undefined8 *)(pSVar2 + 0x10) = param_1;
  *(undefined4 *)(pSVar2 + 0x18) = param_2;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_command(param_3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::obstacle_set_avoidance_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::obstacle_set_avoidance_layers
          (GodotNavigationServer3D *this,undefined8 param_2,undefined4 param_3)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x18,"");
  *(undefined ***)pSVar1 = &PTR__obstacle_set_avoidance_layers_command_00119d00;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  *(undefined4 *)(pSVar1 + 0x10) = param_3;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::free(RID) */

void __thiscall GodotNavigationServer3D::free(GodotNavigationServer3D *this,undefined8 param_2)

{
  SetCommand *pSVar1;
  
  pSVar1 = (SetCommand *)operator_new(0x10,"");
  *(undefined ***)pSVar1 = &PTR__free_command_00119d28;
  *(undefined8 *)(pSVar1 + 8) = param_2;
  add_command(this,pSVar1);
  return;
}



/* GodotNavigationServer3D::region_set_navigation_mesh(RID, Ref<NavigationMesh>) */

void __thiscall
GodotNavigationServer3D::region_set_navigation_mesh
          (GodotNavigationServer3D *this,undefined8 param_2,undefined8 *param_3)

{
  Object *pOVar1;
  char cVar2;
  SetCommand *pSVar3;
  
  pSVar3 = (SetCommand *)operator_new(0x18,"");
  pOVar1 = (Object *)*param_3;
  if (pOVar1 == (Object *)0x0) {
    *(undefined8 *)(pSVar3 + 8) = param_2;
    *(undefined ***)pSVar3 = &PTR__region_set_navigation_mesh_command_00119760;
    *(undefined8 *)(pSVar3 + 0x10) = 0;
  }
  else {
    cVar2 = RefCounted::reference();
    *(undefined8 *)(pSVar3 + 8) = param_2;
    *(undefined ***)pSVar3 = &PTR__region_set_navigation_mesh_command_00119760;
    if (cVar2 == '\0') {
      *(undefined8 *)(pSVar3 + 0x10) = 0;
    }
    else {
      *(Object **)(pSVar3 + 0x10) = pOVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(pSVar3 + 0x10) = 0;
        cVar2 = RefCounted::unreference();
      }
      else {
        cVar2 = RefCounted::unreference();
      }
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  add_command(this,pSVar3);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_active(RID, bool) */

void __thiscall
GodotNavigationServer3D::_cmd_map_set_active
          (GodotNavigationServer3D *this,ulong param_2,char param_3)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar9;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    lVar13 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
             *(long *)(*(long *)(this + 0x3a0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8);
    if (*(int *)(lVar13 + 0x2a8) == (int)(param_2 >> 0x20)) {
      if (param_3 != '\0') {
        cVar4 = (**(code **)(*(long *)this + 0x168))(this);
        if (cVar4 == '\0') {
          uVar8 = *(uint *)(this + 0x500);
          pvVar6 = *(void **)(this + 0x508);
          if (uVar8 == *(uint *)(this + 0x504)) {
            uVar11 = (ulong)(uVar8 * 2);
            if (uVar8 * 2 == 0) {
              uVar11 = 1;
            }
            *(int *)(this + 0x504) = (int)uVar11;
            pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar11 * 8,false);
            *(void **)(this + 0x508) = pvVar6;
            if (pvVar6 == (void *)0x0) goto LAB_00107616;
            uVar8 = *(uint *)(this + 0x500);
          }
          *(uint *)(this + 0x500) = uVar8 + 1;
          uVar1 = *(undefined4 *)(lVar13 + 0x130);
          *(long *)((long)pvVar6 + (ulong)uVar8 * 8) = lVar13;
          uVar8 = *(uint *)(this + 0x510);
          pvVar6 = *(void **)(this + 0x518);
          if (uVar8 == *(uint *)(this + 0x514)) {
            uVar11 = (ulong)(uVar8 * 2);
            if (uVar8 * 2 == 0) {
              uVar11 = 1;
            }
            *(int *)(this + 0x514) = (int)uVar11;
            pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar11 * 4,false);
            *(void **)(this + 0x518) = pvVar6;
            if (pvVar6 == (void *)0x0) {
LAB_00107616:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar8 = *(uint *)(this + 0x510);
          }
          *(uint *)(this + 0x510) = uVar8 + 1;
          *(undefined4 *)((long)pvVar6 + (ulong)uVar8 * 4) = uVar1;
        }
        return;
      }
      uVar8 = *(uint *)(this + 0x500);
      if (uVar8 != 0) {
        lVar2 = *(long *)(this + 0x508);
        uVar11 = 0;
        do {
          if (*(long *)(lVar2 + uVar11 * 8) == lVar13) {
            uVar12 = (uint)uVar11;
            if (-1 < (int)uVar12) {
              uVar9 = uVar11 & 0xffffffff;
              if (uVar12 < uVar8) {
                *(uint *)(this + 0x500) = uVar8 - 1;
                if (uVar12 < uVar8 - 1) {
                  memmove((void *)(lVar2 + uVar11 * 8),(void *)(lVar2 + (ulong)(uVar12 + 1) * 8),
                          (ulong)((uVar8 - 2) - uVar12) * 8 + 8);
                }
              }
              else {
                _err_print_index_error
                          ("remove_at","./core/templates/local_vector.h",0x4c,uVar11,(ulong)uVar8,
                           "p_index","count","",false,false);
              }
              uVar8 = *(uint *)(this + 0x510);
              if (uVar12 < uVar8) {
                *(uint *)(this + 0x510) = uVar8 - 1;
                if (uVar8 - 1 <= uVar12) {
                  return;
                }
                lVar13 = *(long *)(this + 0x518);
                puVar5 = (undefined4 *)(lVar13 + uVar11 * 4);
                do {
                  uVar8 = (int)uVar9 + 1;
                  uVar9 = (ulong)uVar8;
                  *puVar5 = *(undefined4 *)(lVar13 + uVar9 * 4);
                  puVar5 = puVar5 + 1;
                } while (uVar8 < *(uint *)(this + 0x510));
                return;
              }
              _err_print_index_error
                        ("remove_at","./core/templates/local_vector.h",0x4c,uVar11,(ulong)uVar8,
                         "p_index","count","",false,false);
              return;
            }
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar8);
      }
      uVar10 = 0x81;
      pcVar7 = "Condition \"map_index < 0\" is true.";
      goto LAB_001074c2;
    }
    if (*(int *)(lVar13 + 0x2a8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar10 = 0x78;
  pcVar7 = "Parameter \"map\" is null.";
LAB_001074c2:
  _err_print_error("_cmd_map_set_active","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   uVar10,pcVar7,0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_up(RID, Vector3) */

void GodotNavigationServer3D::_cmd_map_set_up
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x3b4))) {
    iVar1 = *(int *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(param_3 + 0x3a0) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x3b0)) * 8) +
                    0x2a8);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavMap::set_up(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_up","modules/navigation/3d/godot_navigation_server_3d.cpp",0x90,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_cell_size(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_map_set_cell_size
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavMap::set_cell_size(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_cell_size","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x9e,"Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_cell_height(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_map_set_cell_height
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavMap::set_cell_height(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_cell_height","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0xac,"Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_merge_rasterizer_cell_scale(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_map_set_merge_rasterizer_cell_scale
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavMap::set_merge_rasterizer_cell_scale(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_merge_rasterizer_cell_scale",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xba,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_use_edge_connections(RID, bool) */

void GodotNavigationServer3D::_cmd_map_set_use_edge_connections(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_1 + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavMap::set_use_edge_connections(SUB81(lVar2,0));
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_use_edge_connections",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",200,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_edge_connection_margin(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_map_set_edge_connection_margin
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavMap::set_edge_connection_margin(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_edge_connection_margin",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xd6,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_link_connection_radius(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_map_set_link_connection_radius
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavMap::set_link_connection_radius(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_link_connection_radius",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0xe4,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_map_set_use_async_iterations(RID, bool) */

void GodotNavigationServer3D::_cmd_map_set_use_async_iterations(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x3b4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x3b0)) * 0x2b0 +
            *(long *)(*(long *)(param_1 + 0x3a0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x3b0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2a8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavMap::set_use_async_iterations(SUB81(lVar2,0));
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_map_set_use_async_iterations",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x171,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_enabled(RID, bool) */

void GodotNavigationServer3D::_cmd_region_set_enabled(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x40c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
            *(long *)(*(long *)(param_1 + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8);
    iVar1 = *(int *)(lVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavRegion::set_enabled(SUB81(lVar2,0));
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_enabled","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x18e,"Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_use_edge_connections(RID, bool) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_use_edge_connections
          (GodotNavigationServer3D *this,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    uVar1 = (param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408);
    puVar2 = (undefined8 *)
             (uVar1 * 0x158 +
             *(long *)(*(long *)(this + 0x3f8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    if (*(int *)(puVar2 + 0x2a) == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00107d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_3 & 0xff,uVar1,param_3);
      return;
    }
    if (*(int *)(puVar2 + 0x2a) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_use_edge_connections",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x19c,
                   "Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_map
          (GodotNavigationServer3D *this,ulong param_2,ulong param_3)

{
  int iVar1;
  NavMap *pNVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    pNVar2 = (NavMap *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
             *(long *)(*(long *)(this + 0x3f8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    iVar1 = *(int *)(pNVar2 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if ((((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) &&
          (iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                            *(long *)(*(long *)(this + 0x3a0) +
                                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8)
                           + 0x2a8), iVar1 != (int)(param_3 >> 0x20))) &&
         (iVar1 + 0x80000000U < 0x7fffffff)) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      NavRegion::set_map(pNVar2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_map","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x1aa,"Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_transform(RID, Transform3D) */

void GodotNavigationServer3D::_cmd_region_set_transform(long param_1,ulong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x40c))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x408)) * 0x158 +
                     *(long *)(*(long *)(param_1 + 0x3f8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x408)) * 8) +
                    0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavRegion::set_transform();
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_transform",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1b3,
                   "Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_enter_cost(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_enter_cost
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x40c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
                     *(long *)(*(long *)(this + 0x3f8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    iVar1 = (int)plVar2[0x2a];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (0.0 <= param_1) {
                    /* WARNING: Could not recover jumptable at 0x00108065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
      _err_print_error("_cmd_region_set_enter_cost",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1c2,
                       "Condition \"p_enter_cost < 0.0\" is true.",0,0);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_enter_cost",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1c1,
                   "Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_travel_cost(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_travel_cost
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x40c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
                     *(long *)(*(long *)(this + 0x3f8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    iVar1 = (int)plVar2[0x2a];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (0.0 <= param_1) {
                    /* WARNING: Could not recover jumptable at 0x00108165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))();
        return;
      }
      _err_print_error("_cmd_region_set_travel_cost",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1d1,
                       "Condition \"p_travel_cost < 0.0\" is true.",0,0);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_travel_cost",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1d0,
                   "Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_owner_id(RID, ObjectID) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_owner_id
          (GodotNavigationServer3D *this,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    plVar1 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
                     *(long *)(*(long *)(this + 0x3f8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    if ((int)plVar1[0x2a] == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00108262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
      return;
    }
    if ((int)plVar1[0x2a] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_owner_id","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x1df,"Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_navigation_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_navigation_layers
          (GodotNavigationServer3D *this,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    plVar1 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
                     *(long *)(*(long *)(this + 0x3f8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    if ((int)plVar1[0x2a] == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00108330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
      return;
    }
    if ((int)plVar1[0x2a] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_region_set_navigation_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x1f8,
                   "Parameter \"region\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_region_set_navigation_mesh(RID, Ref<NavigationMesh>) */

void __thiscall
GodotNavigationServer3D::_cmd_region_set_navigation_mesh
          (GodotNavigationServer3D *this,ulong param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x40c))) {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    iVar1 = *(int *)(lVar5 + 0x150);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pOVar3 = (Object *)*param_3;
      local_18 = (Object *)0x0;
      if (pOVar3 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        local_18 = pOVar3;
        if (cVar4 == '\0') {
          local_18 = (Object *)0x0;
        }
      }
      NavRegion::set_navigation_mesh(lVar5);
      if (local_18 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_18);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)local_18 + 0x140))(local_18);
            Memory::free_static(local_18,false);
          }
        }
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108523;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_cmd_region_set_navigation_mesh",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x206,
                     "Parameter \"region\" is null.",0,0);
    return;
  }
LAB_00108523:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::_cmd_link_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::_cmd_link_set_map
          (GodotNavigationServer3D *this,ulong param_2,ulong param_3)

{
  int iVar1;
  NavMap *pNVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    pNVar2 = (NavMap *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
             *(long *)(*(long *)(this + 0x348) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8));
    iVar1 = *(int *)(pNVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if ((((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) &&
          (iVar1 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                            *(long *)(*(long *)(this + 0x3a0) +
                                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8)
                           + 0x2a8), iVar1 != (int)(param_3 >> 0x20))) &&
         (iVar1 + 0x80000000U < 0x7fffffff)) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      NavLink::set_map(pNVar2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_map","modules/navigation/3d/godot_navigation_server_3d.cpp",0x268,
                   "Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_enabled(RID, bool) */

void GodotNavigationServer3D::_cmd_link_set_enabled(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x358)) * 0x80 +
            *(long *)(*(long *)(param_1 + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavLink::set_enabled(SUB81(lVar2,0));
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_enabled","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x27b,"Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_bidirectional(RID, bool) */

void GodotNavigationServer3D::_cmd_link_set_bidirectional(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x35c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x358)) * 0x80 +
            *(long *)(*(long *)(param_1 + 0x348) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x358)) * 8);
    iVar1 = *(int *)(lVar2 + 0x78);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      NavLink::set_bidirectional(SUB81(lVar2,0));
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_bidirectional",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x289,
                   "Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_navigation_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer3D::_cmd_link_set_navigation_layers
          (GodotNavigationServer3D *this,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    plVar1 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
                     *(long *)(*(long *)(this + 0x348) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8));
    if ((int)plVar1[0xf] == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x0010884a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
      return;
    }
    if ((int)plVar1[0xf] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_navigation_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x297,
                   "Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_start_position(RID, Vector3) */

void GodotNavigationServer3D::_cmd_link_set_start_position
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x35c))) {
    iVar1 = *(int *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x358)) * 0x80 +
                     *(long *)(*(long *)(param_3 + 0x348) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x358)) * 8) +
                    0x78);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavLink::set_start_position(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_start_position",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x2a5,
                   "Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_end_position(RID, Vector3) */

void GodotNavigationServer3D::_cmd_link_set_end_position
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x35c))) {
    iVar1 = *(int *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x358)) * 0x80 +
                     *(long *)(*(long *)(param_3 + 0x348) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x358)) * 8) +
                    0x78);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavLink::set_end_position(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_end_position",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x2b3,
                   "Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_enter_cost(RID, float) */

void GodotNavigationServer3D::_cmd_link_set_enter_cost(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x35c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x358)) * 0x80 +
                     *(long *)(*(long *)(param_1 + 0x348) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x358)) * 8));
    iVar1 = (int)plVar2[0xf];
    if (iVar1 == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00108aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_enter_cost","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x2c1,"Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_travel_cost(RID, float) */

void GodotNavigationServer3D::_cmd_link_set_travel_cost(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x35c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x358)) * 0x80 +
                     *(long *)(*(long *)(param_1 + 0x348) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x358)) * 8));
    iVar1 = (int)plVar2[0xf];
    if (iVar1 == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00108b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))();
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_travel_cost",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x2cf,
                   "Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_link_set_owner_id(RID, ObjectID) */

void __thiscall
GodotNavigationServer3D::_cmd_link_set_owner_id
          (GodotNavigationServer3D *this,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x35c))) {
    plVar1 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
                     *(long *)(*(long *)(this + 0x348) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8));
    if ((int)plVar1[0xf] == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00108c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
      return;
    }
    if ((int)plVar1[0xf] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_link_set_owner_id","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x2dd,"Parameter \"link\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_avoidance_enabled(RID, bool) */

void GodotNavigationServer3D::_cmd_agent_set_avoidance_enabled(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x464))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavAgent::set_avoidance_enabled(SUB81(lVar1,0));
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_avoidance_enabled",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x2f4,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_use_3d_avoidance(RID, bool) */

void GodotNavigationServer3D::_cmd_agent_set_use_3d_avoidance(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x464))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavAgent::set_use_3d_avoidance(SUB81(lVar1,0));
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_use_3d_avoidance",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x302,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_map
          (GodotNavigationServer3D *this,ulong param_2,ulong param_3)

{
  NavMap *pNVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    pNVar1 = (NavMap *)
             (*(long *)(*(long *)(this + 0x450) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208);
    iVar2 = *(int *)(pNVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      if ((((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) &&
          (iVar2 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                            *(long *)(*(long *)(this + 0x3a0) +
                                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8)
                           + 0x2a8), iVar2 != (int)(param_3 >> 0x20))) &&
         (iVar2 + 0x80000000U < 0x7fffffff)) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      NavAgent::set_map(pNVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_map","modules/navigation/3d/godot_navigation_server_3d.cpp",0x310
                   ,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_paused(RID, bool) */

void GodotNavigationServer3D::_cmd_agent_set_paused(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x464))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavAgent::set_paused(SUB81(lVar1,0));
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_paused","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x319,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_neighbor_distance(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_neighbor_distance
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavAgent::set_neighbor_distance(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_neighbor_distance",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x327,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_max_neighbors(RID, int) */

void GodotNavigationServer3D::_cmd_agent_set_max_neighbors(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x464))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavAgent::set_max_neighbors((int)lVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_max_neighbors",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x335,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_time_horizon_agents(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_time_horizon_agents
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_agent_set_time_horizon_agents",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x342,
                     "Condition \"p_time_horizon < 0.0\" is true.","Time horizon must be positive.",
                     0,0);
    return;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavAgent::set_time_horizon_agents(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_time_horizon_agents",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x344,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_time_horizon_obstacles(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_time_horizon_obstacles
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_agent_set_time_horizon_obstacles",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x351,
                     "Condition \"p_time_horizon < 0.0\" is true.","Time horizon must be positive.",
                     0,0);
    return;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavAgent::set_time_horizon_obstacles(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_time_horizon_obstacles",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x353,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_radius(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_radius
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_agent_set_radius","modules/navigation/3d/godot_navigation_server_3d.cpp",
                     0x360,"Condition \"p_radius < 0.0\" is true.","Radius must be positive.",0,0);
    return;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavAgent::set_radius(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_radius","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x362,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_height(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_height
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_agent_set_height","modules/navigation/3d/godot_navigation_server_3d.cpp",
                     0x36f,"Condition \"p_height < 0.0\" is true.","Height must be positive.",0,0);
    return;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavAgent::set_height(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_height","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x371,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_max_speed(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_max_speed
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_agent_set_max_speed",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x37e,
                     "Condition \"p_max_speed < 0.0\" is true.","Max speed must be positive.",0,0);
    return;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavAgent::set_max_speed(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_max_speed","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x380,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_velocity(RID, Vector3) */

void GodotNavigationServer3D::_cmd_agent_set_velocity
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(param_3 + 0x450) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x460)) * 8) +
                     ((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavAgent::set_velocity(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_velocity","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x38e,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_velocity_forced(RID, Vector3) */

void GodotNavigationServer3D::_cmd_agent_set_velocity_forced
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(param_3 + 0x450) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x460)) * 8) +
                     ((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavAgent::set_velocity_forced(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_velocity_forced",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x39c,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_position(RID, Vector3) */

void GodotNavigationServer3D::_cmd_agent_set_position
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x464))) {
    iVar1 = *(int *)(*(long *)(*(long *)(param_3 + 0x450) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x460)) * 8) +
                     ((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x460)) * 0x208 + 0x200);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavAgent::set_position(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_position","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x3a3,"Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_avoidance_callback(RID, Callable) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_avoidance_callback
          (GodotNavigationServer3D *this,ulong param_2,Callable *param_3)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  Callable aCStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x464))) {
    lVar1 = *(long *)(*(long *)(this + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
    if (*(int *)(lVar1 + 0x200) == (int)(param_2 >> 0x20)) {
      Callable::Callable(aCStack_38,param_3);
      NavAgent::set_avoidance_callback(lVar1,aCStack_38);
      Callable::~Callable(aCStack_38);
      if (*(long *)(lVar1 + 0x68) == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
        cVar2 = Callable::is_valid();
        if (cVar2 == '\0') {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            NavMap::remove_agent_as_controlled(*(NavAgent **)(lVar1 + 0x68));
            return;
          }
        }
        else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          NavMap::set_agent_as_controlled(*(NavAgent **)(lVar1 + 0x68));
          return;
        }
      }
      goto LAB_00109ba3;
    }
    if (*(int *)(lVar1 + 0x200) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_cmd_agent_set_avoidance_callback",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3b8,
                     "Parameter \"agent\" is null.",0,0);
    return;
  }
LAB_00109ba3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::_cmd_agent_set_avoidance_layers(RID, unsigned int) */

void GodotNavigationServer3D::_cmd_agent_set_avoidance_layers(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x464))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavAgent::set_avoidance_layers((uint)lVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_avoidance_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3ce,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_avoidance_mask(RID, unsigned int) */

void GodotNavigationServer3D::_cmd_agent_set_avoidance_mask(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x464))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x450) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x460)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x460)) * 0x208;
    iVar2 = *(int *)(lVar1 + 0x200);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavAgent::set_avoidance_mask((uint)lVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_agent_set_avoidance_mask",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3db,
                   "Parameter \"agent\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_agent_set_avoidance_priority(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_agent_set_avoidance_priority
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_agent_set_avoidance_priority",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",999,
                     "Condition \"p_priority < 0.0\" is true.",
                     "Avoidance priority must be between 0.0 and 1.0 inclusive.",0,0);
  }
  else {
    if (param_1 <= _LC21) {
      if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x464))) {
        iVar1 = *(int *)(*(long *)(*(long *)(this + 0x450) +
                                  ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                         ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200);
        if (iVar1 == (int)(param_3 >> 0x20)) {
          NavAgent::set_avoidance_priority(param_1);
          return;
        }
        if (iVar1 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("_cmd_agent_set_avoidance_priority",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x3ea,
                       "Parameter \"agent\" is null.",0,0);
      return;
    }
    _err_print_error("_cmd_agent_set_avoidance_priority",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",1000,
                     "Condition \"p_priority > 1.0\" is true.",
                     "Avoidance priority must be between 0.0 and 1.0 inclusive.",0,0);
  }
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_avoidance_enabled(RID, bool) */

void GodotNavigationServer3D::_cmd_obstacle_set_avoidance_enabled(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavObstacle::set_avoidance_enabled(SUB81(lVar1,0));
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_avoidance_enabled",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x407,
                   "Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_use_3d_avoidance(RID, bool) */

void GodotNavigationServer3D::_cmd_obstacle_set_use_3d_avoidance(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavObstacle::set_use_3d_avoidance(SUB81(lVar1,0));
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_use_3d_avoidance",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x415,
                   "Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_map(RID, RID) */

void __thiscall
GodotNavigationServer3D::_cmd_obstacle_set_map
          (GodotNavigationServer3D *this,ulong param_2,ulong param_3)

{
  NavMap *pNVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x4bc))) {
    pNVar1 = (NavMap *)
             (*(long *)(*(long *)(this + 0x4a8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88);
    iVar2 = *(int *)(pNVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      if ((((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x3b4))) &&
          (iVar2 = *(int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                            *(long *)(*(long *)(this + 0x3a0) +
                                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8)
                           + 0x2a8), iVar2 != (int)(param_3 >> 0x20))) &&
         (iVar2 + 0x80000000U < 0x7fffffff)) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      NavObstacle::set_map(pNVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_map","modules/navigation/3d/godot_navigation_server_3d.cpp",
                   0x423,"Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_paused(RID, bool) */

void GodotNavigationServer3D::_cmd_obstacle_set_paused(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavObstacle::set_paused(SUB81(lVar1,0));
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_paused","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x435,"Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_radius(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_obstacle_set_radius
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("_cmd_obstacle_set_radius",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x442,
                     "Condition \"p_radius < 0.0\" is true.","Radius must be positive.",0,0);
    return;
  }
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x4bc))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x4a8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88 + 0x80);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavObstacle::set_radius(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_radius","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x444,"Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_height(RID, float) */

void __thiscall
GodotNavigationServer3D::_cmd_obstacle_set_height
          (float param_1,GodotNavigationServer3D *this,ulong param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x4bc))) {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x4a8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88 + 0x80);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      NavObstacle::set_height(param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_height","modules/navigation/3d/godot_navigation_server_3d.cpp"
                   ,0x452,"Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_velocity(RID, Vector3) */

void GodotNavigationServer3D::_cmd_obstacle_set_velocity
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x4bc))) {
    iVar1 = *(int *)(*(long *)(*(long *)(param_3 + 0x4a8) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x4b8)) * 8) +
                     ((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x4b8)) * 0x88 + 0x80);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavObstacle::set_velocity(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_velocity",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x45f,
                   "Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_position(RID, Vector3) */

void GodotNavigationServer3D::_cmd_obstacle_set_position
               (undefined8 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(param_3 + 0x4bc))) {
    iVar1 = *(int *)(*(long *)(*(long *)(param_3 + 0x4a8) +
                              ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x4b8)) * 8) +
                     ((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x4b8)) * 0x88 + 0x80);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      NavObstacle::set_position(param_1,param_2);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_position",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x46d,
                   "Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::_cmd_obstacle_set_avoidance_layers(RID, unsigned int) */

void GodotNavigationServer3D::_cmd_obstacle_set_avoidance_layers(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x4bc))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4a8) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x4b8)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x4b8)) * 0x88;
    iVar2 = *(int *)(lVar1 + 0x80);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      NavObstacle::set_avoidance_layers((uint)lVar1);
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_cmd_obstacle_set_avoidance_layers",
                   "modules/navigation/3d/godot_navigation_server_3d.cpp",0x487,
                   "Parameter \"obstacle\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::internal_free_agent(RID) */

void __thiscall
GodotNavigationServer3D::internal_free_agent(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  NavAgent *this_00;
  
  if (param_2 == 0) {
    return;
  }
  uVar7 = (uint)param_2;
  if (*(uint *)(this + 0x464) <= uVar7) {
    return;
  }
  uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460);
  lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
  this_00 = (NavAgent *)(*(long *)(*(long *)(this + 0x450) + uVar4 * 8) + lVar6);
  iVar1 = *(int *)((NavMap *)this_00 + 0x200);
  if (iVar1 != (int)(param_2 >> 0x20)) {
    if (0x7ffffffe < iVar1 + 0x80000000U) {
      return;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
    return;
  }
  if (*(NavAgent **)((NavMap *)this_00 + 0x68) != (NavAgent *)0x0) {
    NavMap::remove_agent(*(NavAgent **)((NavMap *)this_00 + 0x68));
    NavAgent::set_map((NavMap *)this_00);
    if (uVar7 < *(uint *)(this + 0x464)) {
      uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460);
      lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208;
      this_00 = (NavAgent *)(*(long *)(*(long *)(this + 0x450) + uVar4 * 8) + lVar6);
      if (*(int *)(this_00 + 0x200) < 0) goto LAB_0010a834;
      if (iVar1 == *(int *)(this_00 + 0x200)) goto LAB_0010a7db;
      uVar5 = 0x171;
    }
    else {
      uVar5 = 0x161;
    }
    _err_print_error(&_LC194,"./core/templates/rid_owner.h",uVar5,"Method/function failed.",0,0);
    return;
  }
  if (-1 < iVar1) {
LAB_0010a7db:
    NavAgent::~NavAgent(this_00);
    lVar2 = *(long *)(this + 0x458);
    *(undefined4 *)(*(long *)(*(long *)(this + 0x450) + uVar4 * 8) + 0x200 + lVar6) = 0xffffffff;
    uVar3 = *(int *)(this + 0x468) - 1;
    *(uint *)(this + 0x468) = uVar3;
    *(uint *)(*(long *)(lVar2 + ((ulong)uVar3 / (ulong)*(uint *)(this + 0x460)) * 8) +
             ((ulong)uVar3 % (ulong)*(uint *)(this + 0x460)) * 4) = uVar7;
    return;
  }
LAB_0010a834:
  _err_print_error(&_LC194,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                   "Attempted to free an uninitialized or invalid RID",0,0);
  return;
}



/* GodotNavigationServer3D::internal_free_obstacle(RID) */

void __thiscall
GodotNavigationServer3D::internal_free_obstacle(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  NavObstacle *pNVar8;
  NavObstacle *this_00;
  
  if (param_2 == 0) {
    return;
  }
  uVar7 = (uint)param_2;
  if (*(uint *)(this + 0x4bc) <= uVar7) {
    return;
  }
  uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8);
  lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
  this_00 = (NavObstacle *)(*(long *)(*(long *)(this + 0x4a8) + uVar4 * 8) + lVar6);
  iVar1 = *(int *)((NavAgent *)this_00 + 0x80);
  if (iVar1 != (int)(param_2 >> 0x20)) {
    if (0x7ffffffe < iVar1 + 0x80000000U) {
      return;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
    return;
  }
  if (*(undefined8 **)((NavAgent *)this_00 + 8) == (undefined8 *)0x0) {
    pNVar8 = *(NavObstacle **)((NavAgent *)this_00 + 0x10);
    if (pNVar8 == (NavObstacle *)0x0) {
      if (iVar1 < 0) goto LAB_0010aa92;
      goto LAB_0010aa25;
    }
LAB_0010a9b9:
    NavMap::remove_obstacle(pNVar8);
    NavObstacle::set_map((NavMap *)this_00);
  }
  else {
    internal_free_agent(this,**(undefined8 **)((NavAgent *)this_00 + 8));
    NavObstacle::set_agent((NavAgent *)this_00);
    pNVar8 = *(NavObstacle **)((NavAgent *)this_00 + 0x10);
    if (pNVar8 != (NavObstacle *)0x0) goto LAB_0010a9b9;
  }
  if (uVar7 < *(uint *)(this + 0x4bc)) {
    uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8);
    lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88;
    this_00 = (NavObstacle *)(*(long *)(*(long *)(this + 0x4a8) + uVar4 * 8) + lVar6);
    if (*(int *)(this_00 + 0x80) < 0) {
LAB_0010aa92:
      _err_print_error(&_LC194,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0,0);
      return;
    }
    if (iVar1 == *(int *)(this_00 + 0x80)) {
LAB_0010aa25:
      NavObstacle::~NavObstacle(this_00);
      lVar2 = *(long *)(this + 0x4b0);
      *(undefined4 *)(*(long *)(*(long *)(this + 0x4a8) + uVar4 * 8) + 0x80 + lVar6) = 0xffffffff;
      uVar3 = *(int *)(this + 0x4c0) - 1;
      *(uint *)(this + 0x4c0) = uVar3;
      *(uint *)(*(long *)(lVar2 + ((ulong)uVar3 / (ulong)*(uint *)(this + 0x4b8)) * 8) +
               ((ulong)uVar3 % (ulong)*(uint *)(this + 0x4b8)) * 4) = uVar7;
      return;
    }
    uVar5 = 0x171;
  }
  else {
    uVar5 = 0x161;
  }
  _err_print_error(&_LC194,"./core/templates/rid_owner.h",uVar5,"Method/function failed.",0,0);
  return;
}



/* GodotNavigationServer3D::flush_queries() */

void __thiscall GodotNavigationServer3D::flush_queries(GodotNavigationServer3D *this)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x2e0));
  if (iVar3 == 0) {
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
    if (iVar3 == 0) {
      uVar4 = *(uint *)(this + 0x330);
      puVar5 = *(undefined8 **)(this + 0x338);
      puVar1 = puVar5 + uVar4;
      if (puVar1 != puVar5) {
        do {
          plVar2 = (long *)*puVar5;
          puVar5 = puVar5 + 1;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          (**(code **)*plVar2)(plVar2);
          Memory::free_static(plVar2,false);
        } while (puVar1 != puVar5);
        uVar4 = *(uint *)(this + 0x330);
      }
      if (uVar4 != 0) {
        *(undefined4 *)(this + 0x330) = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2e0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar3);
}



/* GodotNavigationServer3D::map_force_update(RID) */

void __thiscall
GodotNavigationServer3D::map_force_update(GodotNavigationServer3D *this,ulong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x3b4))) {
    iVar1 = *(int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                     *(long *)(*(long *)(this + 0x3a0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8) + 0x2a8
                    );
    if (iVar1 == (int)(param_2 >> 0x20)) {
      flush_queries(this);
      NavMap::sync();
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("map_force_update","modules/navigation/3d/godot_navigation_server_3d.cpp",0x53b,
                   "Parameter \"map\" is null.",0,0);
  return;
}



/* GodotNavigationServer3D::finish() */

void __thiscall GodotNavigationServer3D::finish(GodotNavigationServer3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  flush_queries(this);
  if (*(long *)(this + 0x520) != 0) {
    NavMeshGenerator3D::finish();
    pOVar1 = *(Object **)(this + 0x520);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    *(undefined8 *)(this + 0x520) = 0;
  }
  return;
}



/* GodotNavigationServer3D::process(float) */

void __thiscall GodotNavigationServer3D::process(GodotNavigationServer3D *this,float param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  flush_queries(this);
  if (this[0x4f8] == (GodotNavigationServer3D)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
    }
    if (*(int *)(this + 0x500) == 0) {
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      iVar5 = 0;
    }
    else {
      uVar10 = 0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      iVar5 = 0;
      do {
        uVar9 = (uint)uVar10;
        NavMap::sync();
        uVar8 = (ulong)*(uint *)(this + 0x500);
        if (*(uint *)(this + 0x500) <= uVar9) {
LAB_0010b01e:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar10 & 0xffffffff,uVar8,
                     "p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        NavMap::step(param_1);
        uVar8 = (ulong)*(uint *)(this + 0x500);
        if (*(uint *)(this + 0x500) <= uVar9) goto LAB_0010b01e;
        NavMap::dispatch_callbacks();
        uVar7 = *(uint *)(this + 0x500);
        uVar8 = (ulong)uVar7;
        if (uVar7 <= uVar9) goto LAB_0010b01e;
        puVar2 = *(undefined8 **)(*(long *)(this + 0x508) + uVar10 * 8);
        iVar1 = *(int *)(puVar2 + 0x26);
        iVar5 = iVar5 + *(int *)(puVar2 + 0x2b);
        local_c8._4_4_ = *(int *)((long)puVar2 + 0x13c) + local_c8._4_4_;
        local_c8._0_4_ = *(int *)(puVar2 + 0x27) + local_c8._0_4_;
        local_c8._8_4_ = *(int *)(puVar2 + 0x28) + local_c8._8_4_;
        local_c8._12_4_ = *(int *)((long)puVar2 + 0x144) + local_c8._12_4_;
        local_d8._4_4_ = *(int *)((long)puVar2 + 0x14c) + local_d8._4_4_;
        local_d8._0_4_ = *(int *)(puVar2 + 0x29) + local_d8._0_4_;
        local_d8._8_4_ = *(int *)(puVar2 + 0x2a) + local_d8._8_4_;
        local_d8._12_4_ = *(int *)((long)puVar2 + 0x154) + local_d8._12_4_;
        if (*(uint *)(this + 0x510) <= uVar9) {
          uVar8 = (ulong)*(uint *)(this + 0x510);
          goto LAB_0010b01e;
        }
        if (iVar1 != *(int *)(*(long *)(this + 0x518) + uVar10 * 4)) {
          uVar3 = *puVar2;
          if ((process(float)::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&process(float)::{lambda()#1}::operator()()::sname),
             iVar6 != 0)) {
            _scs_create((char *)&process(float)::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&process(float)::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&process(float)::{lambda()#1}::operator()()::sname);
          }
          local_90 = uVar3;
          Variant::Variant((Variant *)local_78,(RID *)&local_90);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          (**(code **)(*(long *)this + 0xd0))
                    (this,&process(float)::{lambda()#1}::operator()()::sname,local_88,1);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          uVar8 = (ulong)*(uint *)(this + 0x510);
          if (*(uint *)(this + 0x510) <= uVar9) goto LAB_0010b01e;
          *(int *)(*(long *)(this + 0x518) + uVar10 * 4) = iVar1;
          uVar7 = *(uint *)(this + 0x500);
        }
        uVar10 = uVar10 + 1;
      } while ((uint)uVar10 < uVar7);
    }
    *(int *)(this + 0x548) = iVar5;
    *(undefined8 *)(this + 0x528) = local_c8._0_8_;
    *(undefined8 *)(this + 0x530) = local_c8._8_8_;
    *(undefined8 *)(this + 0x538) = local_d8._0_8_;
    *(undefined8 *)(this + 0x540) = local_d8._8_8_;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::map_create() */

ulong __thiscall GodotNavigationServer3D::map_create(GodotNavigationServer3D *this)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  uVar3 = RID_Alloc<NavMap,false>::make_rid((RID_Alloc<NavMap,false> *)(this + 0x398));
  if ((uVar3 != 0) && ((uint)uVar3 < *(uint *)(this + 0x3b4))) {
    puVar4 = (ulong *)(((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
                      *(long *)(*(long *)(this + 0x3a0) +
                               ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8));
    if ((int)puVar4[0x55] == (int)(uVar3 >> 0x20)) {
      *puVar4 = uVar3;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
      return uVar3;
    }
    if ((int)puVar4[0x55] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,puVar4);
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::region_create() */

ulong __thiscall GodotNavigationServer3D::region_create(GodotNavigationServer3D *this)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  uVar3 = RID_Alloc<NavRegion,false>::make_rid((RID_Alloc<NavRegion,false> *)(this + 0x3f0));
  if ((uVar3 != 0) && ((uint)uVar3 < *(uint *)(this + 0x40c))) {
    lVar4 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
            *(long *)(*(long *)(this + 0x3f8) +
                     ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8);
    if (*(int *)(lVar4 + 0x150) == (int)(uVar3 >> 0x20)) {
      *(ulong *)(lVar4 + 8) = uVar3;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
      return uVar3;
    }
    if (*(int *)(lVar4 + 0x150) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,lVar4);
    }
  }
  _DAT_00000008 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::link_create() */

ulong __thiscall GodotNavigationServer3D::link_create(GodotNavigationServer3D *this)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  uVar3 = RID_Alloc<NavLink,false>::make_rid((RID_Alloc<NavLink,false> *)(this + 0x340));
  if ((uVar3 != 0) && ((uint)uVar3 < *(uint *)(this + 0x35c))) {
    lVar4 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
            *(long *)(*(long *)(this + 0x348) +
                     ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8);
    if (*(int *)(lVar4 + 0x78) == (int)(uVar3 >> 0x20)) {
      *(ulong *)(lVar4 + 8) = uVar3;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
      return uVar3;
    }
    if (*(int *)(lVar4 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,lVar4);
    }
  }
  _DAT_00000008 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::agent_create() */

ulong __thiscall GodotNavigationServer3D::agent_create(GodotNavigationServer3D *this)

{
  ulong *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar4 = RID_Alloc<NavAgent,false>::make_rid((RID_Alloc<NavAgent,false> *)(this + 0x448));
  if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)(this + 0x464))) {
    puVar1 = (ulong *)(*(long *)(*(long *)(this + 0x450) +
                                ((uVar4 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                      ((uVar4 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208);
    iVar3 = (int)puVar1[0x40];
    if (iVar3 == (int)(uVar4 >> 0x20)) {
      *puVar1 = uVar4;
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
      return uVar4;
    }
    uVar5 = iVar3 + 0x80000000;
    if (uVar5 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,uVar5);
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::obstacle_create() */

ulong __thiscall GodotNavigationServer3D::obstacle_create(GodotNavigationServer3D *this)

{
  NavAgent *pNVar1;
  ulong *puVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  RID_Alloc<NavObstacle,false> *this_00;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x308));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  this_00 = (RID_Alloc<NavObstacle,false> *)(this + 0x4a0);
  uVar5 = RID_Alloc<NavObstacle,false>::make_rid(this_00);
  if ((uVar5 != 0) && ((uint)uVar5 < *(uint *)(this + 0x4bc))) {
    pNVar1 = (NavAgent *)
             (*(long *)(*(long *)(this + 0x4a8) +
                       ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
             ((uVar5 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88);
    if (*(int *)(pNVar1 + 0x80) == (int)(uVar5 >> 0x20)) {
      *(ulong *)pNVar1 = uVar5;
      uVar6 = RID_Alloc<NavAgent,false>::make_rid((RID_Alloc<NavAgent,false> *)(this + 0x448));
      if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x464))) {
        puVar2 = (ulong *)(*(long *)(*(long *)(this + 0x450) +
                                    ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                          ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208);
        iVar4 = (int)puVar2[0x40];
        if (iVar4 == (int)(uVar6 >> 0x20)) {
          *puVar2 = uVar6;
          NavObstacle::set_agent(pNVar1);
          pthread_mutex_unlock((pthread_mutex_t *)(this + 0x308));
          return uVar5;
        }
        if (iVar4 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,uVar6 >> 0x20);
        }
      }
    }
    else if (*(int *)(pNVar1 + 0x80) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,this_00);
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::source_geometry_parser_create() */

ulong GodotNavigationServer3D::source_geometry_parser_create(void)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 in_RCX;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  uint local_38;
  uint uStack_34;
  void *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar5 = RID_Alloc<NavMeshGeometryParser3D,false>::make_rid
                    ((RID_Alloc<NavMeshGeometryParser3D,false> *)
                     &NavigationServer3D::geometry_parser_owner);
  uVar6 = (uint)NavigationServer3D::generator_parsers;
  if ((uVar5 != 0) && ((uint)uVar5 < _DAT_0011f174)) {
    puVar9 = (ulong *)(((uVar5 & 0xffffffff) % (ulong)___throw_system_error) * 0x20 +
                      *(long *)(_operator_ +
                               ((uVar5 & 0xffffffff) / (ulong)___throw_system_error) * 8));
    if ((int)puVar9[3] == (int)(uVar5 >> 0x20)) {
      bVar10 = (uint)NavigationServer3D::generator_parsers ==
               NavigationServer3D::generator_parsers._4_4_;
      *puVar9 = uVar5;
      if (bVar10) {
        uVar6 = uVar6 * 2;
        uVar8 = (ulong)uVar6;
        if (uVar6 == 0) {
          uVar8 = 1;
        }
        NavigationServer3D::generator_parsers._4_4_ = (uint)uVar8;
        _realloc_static = (void *)Memory::realloc_static(_realloc_static,uVar8 * 8,false);
        uVar6 = (uint)NavigationServer3D::generator_parsers;
        if (_realloc_static == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      NavigationServer3D::generator_parsers._0_4_ = uVar6 + 1;
      *(ulong **)((long)_realloc_static + (ulong)uVar6 * 8) = puVar9;
      NavMeshGenerator3D::get_singleton();
      uVar6 = (uint)NavigationServer3D::generator_parsers;
      local_38 = 0;
      uStack_34 = 0;
      local_30 = (void *)0x0;
      if ((uint)NavigationServer3D::generator_parsers != 0) {
        uVar4 = (uint)NavigationServer3D::generator_parsers - 1 |
                (uint)NavigationServer3D::generator_parsers - 1 >> 1;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 >> 4 | uVar4;
        uVar4 = uVar4 >> 8 | uVar4;
        uStack_34 = (uVar4 | uVar4 >> 0x10) + 1;
        local_38 = 0;
        local_30 = (void *)Memory::realloc_static((void *)0x0,(ulong)uStack_34 * 8,false);
        pvVar2 = _realloc_static;
        if (local_30 == (void *)0x0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = (ulong)(uint)NavigationServer3D::generator_parsers;
        local_38 = uVar6;
        if ((uint)NavigationServer3D::generator_parsers != 0) {
          lVar7 = 0;
          do {
            *(undefined8 *)((long)local_30 + lVar7) = *(undefined8 *)((long)pvVar2 + lVar7);
            lVar7 = lVar7 + 8;
          } while (lVar7 != uVar8 << 3);
        }
      }
      NavMeshGenerator3D::set_generator_parsers(&local_38);
      if (local_30 != (void *)0x0) {
        if (local_38 != 0) {
          local_38 = 0;
        }
        Memory::free_static(local_30,false);
      }
      pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
    if ((int)puVar9[3] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,in_RCX);
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotNavigationServer3D::simplify_path(Vector<Vector3> const&, float) */

Vector * GodotNavigationServer3D::simplify_path(Vector *param_1,float param_2)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_RDX;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *__s;
  size_t __n;
  long in_FS_OFFSET;
  void *local_60;
  uint local_58 [2];
  void *local_50;
  long local_40;
  
  lVar10 = *(long *)(in_RDX + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar10 == 0) || (*(long *)(lVar10 + -8) < 3)) {
    *(undefined8 *)(param_1 + 8) = 0;
    if (*(long *)(in_RDX + 8) != 0) {
      CowData<Vector3>::_ref((CowData<Vector3> *)(param_1 + 8),(CowData *)(in_RDX + 8));
    }
    goto LAB_0010b934;
  }
  uVar4 = (uint)*(long *)(lVar10 + -8);
  local_60 = (void *)0x0;
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  uVar5 = 0;
  if (uVar4 == 0) {
LAB_0010b960:
    lVar2 = *(long *)(lVar10 + -8);
    lVar8 = 0;
    for (uVar12 = 0; (long)uVar12 < lVar2; uVar12 = (ulong)((uint)uVar12 + 1)) {
      uVar13 = (ulong)uVar5;
      if (uVar5 == (uint)uVar12) goto LAB_0010b9c6;
      *(undefined8 *)((long)local_60 + lVar8) = *(undefined8 *)(lVar10 + lVar8);
      *(undefined4 *)((long)local_60 + lVar8 + 8) = *(undefined4 *)(lVar10 + 8 + lVar8);
      lVar8 = lVar8 + 0xc;
    }
  }
  else {
    uVar5 = uVar4 - 1 | uVar4 - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 >> 4 | uVar5;
    uVar5 = uVar5 | uVar5 >> 8;
    local_60 = (void *)Memory::realloc_static
                                 ((void *)0x0,(ulong)((uVar5 >> 0x10 | uVar5) + 1) * 0xc,false);
    if (local_60 == (void *)0x0) {
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar4 != 0) {
      memset(local_60,0,((ulong)(uVar4 - 1) * 3 + 3) * 4);
    }
    lVar10 = *(long *)(in_RDX + 8);
    uVar5 = uVar4;
    if (lVar10 != 0) goto LAB_0010b960;
  }
  NavMeshQueries3D::get_simplified_path_indices((LocalVector *)local_58,param_2);
  uVar11 = (ulong)local_58[0];
  if (local_58[0] == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    if (local_50 != (void *)0x0) goto LAB_0010b9f4;
  }
  else {
    uVar12 = uVar11 * 0xc - 1;
    uVar12 = uVar12 | uVar12 >> 1;
    uVar12 = uVar12 | uVar12 >> 2;
    uVar12 = uVar12 | uVar12 >> 4;
    uVar12 = uVar12 | uVar12 >> 8;
    uVar12 = uVar12 | uVar12 >> 0x10;
    puVar6 = (ulong *)Memory::alloc_static((uVar12 | uVar12 >> 0x20) + 0x11,false);
    if (puVar6 == (ulong *)0x0) {
      __s = (ulong *)0x0;
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      __s = puVar6 + 2;
      *puVar6 = 1;
      memset(__s,0,uVar11 * 0xc);
      puVar6[1] = uVar11;
      if (1 < *puVar6) {
        uVar12 = puVar6[1];
        uVar13 = 0x10;
        __n = uVar12 * 0xc;
        if (__n != 0) {
          uVar13 = __n - 1 | __n - 1 >> 1;
          uVar13 = uVar13 | uVar13 >> 2;
          uVar13 = uVar13 | uVar13 >> 4;
          uVar13 = uVar13 | uVar13 >> 8;
          uVar13 = uVar13 | uVar13 >> 0x10;
          uVar13 = (uVar13 | uVar13 >> 0x20) + 0x11;
        }
        puVar9 = (undefined8 *)Memory::alloc_static(uVar13,false);
        if (puVar9 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          puVar1 = puVar9 + 2;
          *puVar9 = 1;
          puVar9[1] = uVar12;
          memcpy(puVar1,__s,__n);
          LOCK();
          *puVar6 = *puVar6 - 1;
          UNLOCK();
          __s = puVar1;
          if (*puVar6 == 0) {
            Memory::free_static(puVar6,false);
          }
        }
      }
    }
    uVar7 = 0;
    uVar12 = (ulong)local_58[0];
    puVar6 = __s;
    do {
      uVar13 = uVar12;
      if (uVar12 == uVar7) {
LAB_0010b9c6:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar12,uVar13,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar10 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      puVar1 = (ulong *)((long)local_60 + (ulong)*(uint *)((long)local_50 + lVar10) * 0xc);
      *puVar6 = *puVar1;
      *(int *)(puVar6 + 1) = (int)puVar1[1];
      puVar6 = (ulong *)((long)puVar6 + 0xc);
    } while (uVar11 != uVar7);
    *(ulong **)(param_1 + 8) = __s;
LAB_0010b9f4:
    if (local_58[0] != 0) {
      local_58[0] = 0;
    }
    Memory::free_static(local_50,false);
  }
  if (local_60 != (void *)0x0) {
    Memory::free_static(local_60,false);
  }
LAB_0010b934:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::bake_from_source_geometry_data_async(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D> const&, Callable const&) */

void __thiscall
GodotNavigationServer3D::bake_from_source_geometry_data_async
          (GodotNavigationServer3D *this,Ref *param_1,Ref *param_2,Callable *param_3)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("bake_from_source_geometry_data_async",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x4aa,
                     "Condition \"p_navigation_mesh.is_null()\" is true.","Invalid navigation mesh."
                     ,0,0);
  }
  else if (*(long *)param_2 == 0) {
    _err_print_error("bake_from_source_geometry_data_async",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x4ab,
                     "Condition \"p_source_geometry_data.is_null()\" is true.",
                     "Invalid NavigationMeshSourceGeometryData3D.",0,0);
  }
  else {
    lVar3 = NavMeshGenerator3D::get_singleton();
    if (lVar3 == 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("bake_from_source_geometry_data_async",
                         "modules/navigation/3d/godot_navigation_server_3d.cpp",0x4ad,
                         "Parameter \"NavMeshGenerator3D::get_singleton()\" is null.",0,0);
        return;
      }
      goto LAB_0010bdad;
    }
    NavMeshGenerator3D::get_singleton();
    local_28 = (Object *)0x0;
    if (*(Object **)param_2 != (Object *)0x0) {
      local_28 = *(Object **)param_2;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_28 = (Object *)0x0;
      }
    }
    local_30 = (Object *)0x0;
    if (*(Object **)param_1 != (Object *)0x0) {
      local_30 = *(Object **)param_1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_30 = (Object *)0x0;
      }
    }
    NavMeshGenerator3D::bake_from_source_geometry_data_async(&local_30,&local_28,param_3);
    if (local_30 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_30;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_30);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_28;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bdad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::bake_from_source_geometry_data(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D> const&, Callable const&) */

void __thiscall
GodotNavigationServer3D::bake_from_source_geometry_data
          (GodotNavigationServer3D *this,Ref *param_1,Ref *param_2,Callable *param_3)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("bake_from_source_geometry_data",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x4a0,
                     "Condition \"p_navigation_mesh.is_null()\" is true.","Invalid navigation mesh."
                     ,0,0);
  }
  else if (*(long *)param_2 == 0) {
    _err_print_error("bake_from_source_geometry_data",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x4a1,
                     "Condition \"p_source_geometry_data.is_null()\" is true.",
                     "Invalid NavigationMeshSourceGeometryData3D.",0,0);
  }
  else {
    lVar3 = NavMeshGenerator3D::get_singleton();
    if (lVar3 == 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("bake_from_source_geometry_data",
                         "modules/navigation/3d/godot_navigation_server_3d.cpp",0x4a3,
                         "Parameter \"NavMeshGenerator3D::get_singleton()\" is null.",0,0);
        return;
      }
      goto LAB_0010bfdd;
    }
    NavMeshGenerator3D::get_singleton();
    local_28 = (Object *)0x0;
    if (*(Object **)param_2 != (Object *)0x0) {
      local_28 = *(Object **)param_2;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_28 = (Object *)0x0;
      }
    }
    local_30 = (Object *)0x0;
    if (*(Object **)param_1 != (Object *)0x0) {
      local_30 = *(Object **)param_1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_30 = (Object *)0x0;
      }
    }
    NavMeshGenerator3D::bake_from_source_geometry_data(&local_30,&local_28,param_3);
    if (local_30 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_30;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_30);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_28;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bfdd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::parse_source_geometry_data(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D> const&, Node*, Callable const&) */

void __thiscall
GodotNavigationServer3D::parse_source_geometry_data
          (GodotNavigationServer3D *this,Ref *param_1,Ref *param_2,Node *param_3,Callable *param_4)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_40;
  NavigationMeshSourceGeometryData3D *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam000000000010c030) == 1) {
    if (*(long *)param_1 == 0) {
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x495,
                       "Condition \"p_navigation_mesh.is_null()\" is true.",
                       "Invalid navigation mesh.",0,0);
    }
    else if (param_3 == (Node *)0x0) {
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x496,
                       "Parameter \"p_root_node\" is null.","No parsing root node specified.",0,0);
    }
    else if (((byte)param_3[0x2fa] & 0x40) == 0) {
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x497,
                       "Condition \"!p_root_node->is_inside_tree()\" is true.",
                       "The root node needs to be inside the SceneTree.",0,0);
    }
    else {
      lVar3 = NavMeshGenerator3D::get_singleton();
      if (lVar3 == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("parse_source_geometry_data",
                           "modules/navigation/3d/godot_navigation_server_3d.cpp",0x499,
                           "Parameter \"NavMeshGenerator3D::get_singleton()\" is null.",0,0);
          return;
        }
        goto LAB_0010c29f;
      }
      NavMeshGenerator3D::get_singleton();
      local_38 = (NavigationMeshSourceGeometryData3D *)0x0;
      if (*(NavigationMeshSourceGeometryData3D **)param_2 !=
          (NavigationMeshSourceGeometryData3D *)0x0) {
        local_38 = *(NavigationMeshSourceGeometryData3D **)param_2;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_38 = (NavigationMeshSourceGeometryData3D *)0x0;
        }
      }
      local_40 = (Object *)0x0;
      if (*(Object **)param_1 != (Object *)0x0) {
        local_40 = *(Object **)param_1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_40 = (Object *)0x0;
        }
      }
      NavMeshGenerator3D::parse_source_geometry_data(&local_40,&local_38,param_3,param_4);
      if (local_40 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        pOVar1 = local_40;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_40);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      if (local_38 != (NavigationMeshSourceGeometryData3D *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<NavigationMeshSourceGeometryData3D>(local_38);
        }
      }
    }
  }
  else {
    _err_print_error("parse_source_geometry_data",
                     "modules/navigation/3d/godot_navigation_server_3d.cpp",0x494,
                     "Condition \"!Thread::is_main_thread()\" is true.",
                     "The SceneTree can only be parsed on the main thread. Call this function from the main thread or use call_deferred()."
                     ,0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c29f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::region_bake_navigation_mesh(Ref<NavigationMesh>, Node*) */

void __thiscall
GodotNavigationServer3D::region_bake_navigation_mesh
          (GodotNavigationServer3D *this,long *param_2,long param_3)

{
  NavigationMeshSourceGeometryData3D *pNVar1;
  char cVar2;
  Resource *this_00;
  char *pcVar3;
  undefined8 uVar4;
  NavigationMeshSourceGeometryData3D *pNVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  NavigationMeshSourceGeometryData3D *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x20d;
      pcVar3 = "Condition \"p_navigation_mesh.is_null()\" is true.";
LAB_0010c5b2:
      _err_print_error("region_bake_navigation_mesh",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",uVar4,pcVar3,0,0);
      return;
    }
  }
  else if (param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x20e;
      pcVar3 = "Parameter \"p_root_node\" is null.";
      goto LAB_0010c5b2;
    }
  }
  else {
    if (region_bake_navigation_mesh(Ref<NavigationMesh>,Node*)::first_print != '\0') {
      _err_print_error("region_bake_navigation_mesh",
                       "modules/navigation/3d/godot_navigation_server_3d.cpp",0x210,
                       "NavigationServer3D::region_bake_navigation_mesh() is deprecated due to core threading changes. To upgrade existing code, first create a NavigationMeshSourceGeometryData3D resource. Use this resource with method parse_source_geometry_data() to parse the SceneTree for nodes that should contribute to the navigation mesh baking. The SceneTree parsing needs to happen on the main thread. After the parsing is finished use the resource with method bake_from_source_geometry_data() to bake a navigation mesh.."
                       ,0,1);
      region_bake_navigation_mesh(Ref<NavigationMesh>,Node*)::first_print = '\0';
    }
    NavigationMesh::clear();
    local_50 = (NavigationMeshSourceGeometryData3D *)0x0;
    this_00 = (Resource *)operator_new(0x2f8,"");
    Resource::Resource(this_00);
    *(undefined ***)this_00 = &PTR__initialize_classv_00118c20;
    *(undefined8 *)(this_00 + 0x270) = 0;
    *(undefined8 *)(this_00 + 0x280) = 0;
    *(undefined8 *)(this_00 + 0x290) = 0;
    *(undefined8 *)(this_00 + 0x298) = 0;
    *(undefined4 *)(this_00 + 0x2a0) = 0;
    *(undefined8 *)(this_00 + 0x2a4) = 0;
    *(undefined4 *)(this_00 + 0x2ac) = 0;
    this_00[0x2b0] = (Resource)0x1;
    *(undefined8 *)(this_00 + 0x2c0) = 0;
    *(undefined4 *)(this_00 + 0x2e8) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x2ec) = 0;
    *(undefined4 *)(this_00 + 0x2f4) = 0;
    *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x260) = (undefined1  [16])0x0;
    auVar6 = ZEXT416(_LC21);
    *(undefined1 (*) [16])(this_00 + 0x2c8) = auVar6;
    *(undefined1 (*) [16])(this_00 + 0x2d8) = auVar6;
    postinitialize_handler((Object *)this_00);
    cVar2 = RefCounted::init_ref();
    pNVar1 = local_50;
    if (cVar2 == '\0') {
      if (local_50 != (NavigationMeshSourceGeometryData3D *)0x0) {
        local_50 = (NavigationMeshSourceGeometryData3D *)0x0;
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<NavigationMeshSourceGeometryData3D>(pNVar1);
        }
      }
    }
    else {
      pNVar5 = local_50;
      if (this_00 != (Resource *)local_50) {
        local_50 = (NavigationMeshSourceGeometryData3D *)this_00;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_50 = (NavigationMeshSourceGeometryData3D *)0x0;
        }
        pNVar5 = (NavigationMeshSourceGeometryData3D *)this_00;
        if ((pNVar1 != (NavigationMeshSourceGeometryData3D *)0x0) &&
           (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
          memdelete<NavigationMeshSourceGeometryData3D>(pNVar1);
        }
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<NavigationMeshSourceGeometryData3D>(pNVar5);
      }
    }
    local_48 = 0;
    local_40 = 0;
    (**(code **)(*(long *)this + 0x5d0))(this,param_2,&local_50,param_3,(Callable *)&local_48);
    Callable::~Callable((Callable *)&local_48);
    local_48 = 0;
    local_40 = 0;
    (**(code **)(*(long *)this + 0x5d8))(this,param_2,&local_50,(Callable *)&local_48);
    Callable::~Callable((Callable *)&local_48);
    if ((local_50 != (NavigationMeshSourceGeometryData3D *)0x0) &&
       (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
      memdelete<NavigationMeshSourceGeometryData3D>(local_50);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::_cmd_free(RID) */

void __thiscall GodotNavigationServer3D::_cmd_free(GodotNavigationServer3D *this,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar12;
  NavRegion *pNVar13;
  NavMap *pNVar14;
  ulong *puVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  NavLink *this_00;
  uint uVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  undefined8 local_58;
  void *local_50;
  long local_40;
  ulong uVar11;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_2;
  uVar4 = (uint)(param_2 >> 0x20);
  if (uVar8 < *(uint *)(this + 0x3b4)) {
    if (param_2 >> 0x20 == 0x7fffffff) goto LAB_0010ccf0;
    pNVar13 = (NavRegion *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0 +
              *(long *)(*(long *)(this + 0x3a0) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0)) * 8));
    uVar10 = *(uint *)(pNVar13 + 0x2a8);
    if (uVar4 != (uVar10 & 0x7fffffff)) {
      if (uVar8 < *(uint *)(this + 0x40c)) goto LAB_0010c6b2;
      if (uVar8 < *(uint *)(this + 0x35c)) goto LAB_0010c6f7;
      if (uVar8 < *(uint *)(this + 0x464)) goto LAB_0010c736;
      uVar10 = *(uint *)(this + 0x4bc);
joined_r0x0010d09f:
      if (uVar8 < uVar10) {
LAB_0010c77f:
        if ((*(uint *)(*(long *)(*(long *)(this + 0x4a8) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x4b8)) * 8) +
                       ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x4b8)) * 0x88 + 0x80) &
            0x7fffffff) == uVar4) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            internal_free_obstacle(this,param_2);
            return;
          }
          goto LAB_0010cf99;
        }
joined_r0x0010d0de:
        if (uVar8 < _DAT_0011f174) goto LAB_0010c7c8;
      }
      else {
LAB_0010d0a1:
        if ((uVar8 < _DAT_0011f174) && (param_2 >> 0x20 != 0x7fffffff)) {
LAB_0010c7c8:
          if ((*(uint *)(((param_2 & 0xffffffff) % (ulong)___throw_system_error) * 0x20 +
                         *(long *)(_operator_ +
                                  ((param_2 & 0xffffffff) / (ulong)___throw_system_error) * 8) +
                        0x18) & 0x7fffffff) == uVar4) {
            iVar3 = pthread_rwlock_wrlock
                              ((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock);
            if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
              std::__throw_system_error(0x23);
            }
            if ((param_2 != 0) && (uVar8 < _DAT_0011f174)) {
              puVar15 = (ulong *)(((param_2 & 0xffffffff) % (ulong)___throw_system_error) * 0x20 +
                                 *(long *)(_operator_ +
                                          ((param_2 & 0xffffffff) / (ulong)___throw_system_error) *
                                          8));
              if ((uint)puVar15[3] == uVar4) {
                uVar5 = 0;
                uVar8 = (uint)NavigationServer3D::generator_parsers;
                if ((uint)NavigationServer3D::generator_parsers != 0) {
                  do {
                    if (*(ulong **)(_realloc_static + uVar5 * 8) == puVar15) {
                      uVar8 = (uint)NavigationServer3D::generator_parsers - 1;
                      uVar4 = (uint)uVar5;
                      if (uVar4 < uVar8) {
                        iVar3 = (uint)NavigationServer3D::generator_parsers - 2;
                        NavigationServer3D::generator_parsers._0_4_ = uVar8;
                        memmove((void *)(_realloc_static + uVar5 * 8),
                                (void *)(_realloc_static + (ulong)(uVar4 + 1) * 8),
                                (ulong)(iVar3 - uVar4) * 8 + 8);
                        uVar8 = (uint)NavigationServer3D::generator_parsers;
                      }
                      break;
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 != (uint)NavigationServer3D::generator_parsers);
                }
                NavigationServer3D::generator_parsers._0_4_ = uVar8;
                NavMeshGenerator3D::get_singleton();
                uVar8 = (uint)NavigationServer3D::generator_parsers;
                local_58 = 0;
                local_50 = (void *)0x0;
                if ((uint)NavigationServer3D::generator_parsers != 0) {
                  uVar4 = (uint)NavigationServer3D::generator_parsers - 1 |
                          (uint)NavigationServer3D::generator_parsers - 1 >> 1;
                  uVar4 = uVar4 | uVar4 >> 2;
                  uVar4 = uVar4 >> 4 | uVar4;
                  uVar4 = uVar4 >> 8 | uVar4;
                  local_58._4_4_ = (uVar4 | uVar4 >> 0x10) + 1;
                  uVar5 = (ulong)local_58._4_4_ * 8;
                  local_58._0_4_ = 0;
                  local_50 = (void *)Memory::realloc_static((void *)0x0,uVar5,false);
                  lVar16 = _realloc_static;
                  if (local_50 == (void *)0x0) {
                    _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0,uVar5
                                    );
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  uVar5 = (ulong)(uint)NavigationServer3D::generator_parsers;
                  local_58 = CONCAT44(local_58._4_4_,uVar8);
                  if ((uint)NavigationServer3D::generator_parsers != 0) {
                    lVar6 = 0;
                    do {
                      *(undefined8 *)((long)local_50 + lVar6) = *(undefined8 *)(lVar16 + lVar6);
                      lVar6 = lVar6 + 8;
                    } while (lVar6 != uVar5 << 3);
                  }
                }
                NavMeshGenerator3D::set_generator_parsers(&local_58);
                if (local_50 != (void *)0x0) {
                  if ((int)local_58 != 0) {
                    local_58 = local_58 & 0xffffffff00000000;
                  }
                  Memory::free_static(local_50,false);
                }
                uVar5 = *puVar15;
                if ((uint)uVar5 < _DAT_0011f174) {
                  uVar11 = (uVar5 & 0xffffffff) / (ulong)___throw_system_error;
                  lVar16 = ((uVar5 & 0xffffffff) % (ulong)___throw_system_error) * 0x20;
                  lVar6 = *(long *)(_operator_ + uVar11 * 8) + lVar16;
                  iVar3 = *(int *)(lVar6 + 0x18);
                  if (iVar3 < 0) {
                    _err_print_error(&_LC194,"./core/templates/rid_owner.h",0x16c,
                                     "Method/function failed.",
                                     "Attempted to free an uninitialized or invalid RID",0,0);
                  }
                  else if ((int)(uVar5 >> 0x20) == iVar3) {
                    Callable::~Callable((Callable *)(lVar6 + 8));
                    lVar6 = _pthread_rwlock_unlock;
                    *(undefined4 *)(*(long *)(_operator_ + uVar11 * 8) + 0x18 + lVar16) = 0xffffffff
                    ;
                    _resize = _resize - 1;
                    *(uint *)(*(long *)(lVar6 + ((ulong)_resize / (ulong)___throw_system_error) * 8)
                             + ((ulong)_resize % (ulong)___throw_system_error) * 4) = (uint)uVar5;
                  }
                  else {
                    _err_print_error(&_LC194,"./core/templates/rid_owner.h",0x171,
                                     "Method/function failed.",0,0);
                  }
                }
                else {
                  _err_print_error(&_LC194,"./core/templates/rid_owner.h",0x161,
                                   "Method/function failed.",0,0);
                }
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010ca21;
                goto LAB_0010cf99;
              }
              if ((uint)puVar15[3] + 0x80000000 < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            _err_print_error("_cmd_free","modules/navigation/3d/godot_navigation_server_3d.cpp",
                             0x4fd,"Parameter \"parser\" is null.",0,0);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010ca21:
              pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer3D::geometry_parser_rwlock)
              ;
              return;
            }
            goto LAB_0010cf99;
          }
        }
      }
      goto LAB_0010ccf0;
    }
    if (param_2 == 0) {
LAB_0010e086:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar10 != uVar4) {
      if (uVar10 + 0x80000000 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,pNVar13);
      }
      goto LAB_0010e086;
    }
    puVar20 = *(undefined8 **)(pNVar13 + 0x48);
    puVar1 = puVar20 + *(uint *)(pNVar13 + 0x40);
    for (; puVar1 != puVar20; puVar20 = puVar20 + 1) {
      pNVar14 = (NavMap *)*puVar20;
      NavMap::remove_region(pNVar13);
      NavRegion::set_map(pNVar14);
    }
    puVar20 = *(undefined8 **)(pNVar13 + 0x58);
    puVar1 = puVar20 + *(uint *)(pNVar13 + 0x50);
    for (; puVar1 != puVar20; puVar20 = puVar20 + 1) {
      pNVar14 = (NavMap *)*puVar20;
      NavMap::remove_link((NavLink *)pNVar13);
      NavLink::set_map(pNVar14);
    }
    puVar20 = *(undefined8 **)(pNVar13 + 0x110);
    puVar1 = puVar20 + *(uint *)(pNVar13 + 0x108);
    for (; puVar1 != puVar20; puVar20 = puVar20 + 1) {
      pNVar14 = (NavMap *)*puVar20;
      NavMap::remove_agent((NavAgent *)pNVar13);
      NavAgent::set_map(pNVar14);
    }
    puVar20 = *(undefined8 **)(pNVar13 + 0x120);
    puVar1 = puVar20 + *(uint *)(pNVar13 + 0x118);
    for (; puVar1 != puVar20; puVar20 = puVar20 + 1) {
      pNVar14 = (NavMap *)*puVar20;
      NavMap::remove_obstacle((NavObstacle *)pNVar13);
      NavObstacle::set_map(pNVar14);
    }
    uVar10 = *(uint *)(this + 0x500);
    if (uVar10 != 0) {
      lVar16 = *(long *)(this + 0x508);
      uVar5 = 0;
      do {
        if (pNVar13 == *(NavRegion **)(lVar16 + uVar5 * 8)) {
          uVar19 = (uint)uVar5;
          if (-1 < (int)uVar19) {
            uVar11 = uVar5 & 0xffffffff;
            if (uVar19 < uVar10) {
              *(uint *)(this + 0x500) = uVar10 - 1;
              if (uVar19 < uVar10 - 1) {
                memmove((void *)(lVar16 + uVar5 * 8),(void *)(lVar16 + (ulong)(uVar19 + 1) * 8),
                        (ulong)((uVar10 - 2) - uVar19) * 8 + 8);
              }
            }
            else {
              _err_print_index_error
                        ("remove_at","./core/templates/local_vector.h",0x4c,uVar5,(ulong)uVar10,
                         "p_index","count","",false,false);
            }
            uVar10 = *(uint *)(this + 0x510);
            if (uVar19 < uVar10) {
              *(uint *)(this + 0x510) = uVar10 - 1;
              if (uVar19 < uVar10 - 1) {
                lVar16 = *(long *)(this + 0x518);
                puVar7 = (undefined4 *)(lVar16 + uVar5 * 4);
                do {
                  uVar10 = (int)uVar11 + 1;
                  uVar11 = (ulong)uVar10;
                  *puVar7 = *(undefined4 *)(lVar16 + uVar11 * 4);
                  puVar7 = puVar7 + 1;
                } while (uVar10 < *(uint *)(this + 0x510));
              }
            }
            else {
              _err_print_index_error
                        ("remove_at","./core/templates/local_vector.h",0x4c,uVar5,(ulong)uVar10,
                         "p_index","count","",false,false);
            }
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar10);
    }
    if (*(uint *)(this + 0x3b4) <= uVar8) goto LAB_0010cfa0;
    uVar5 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x3b0);
    lVar16 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x3b0)) * 0x2b0;
    pNVar14 = (NavMap *)(*(long *)(*(long *)(this + 0x3a0) + uVar5 * 8) + lVar16);
    uVar10 = *(uint *)(pNVar14 + 0x2a8);
    if (-1 < (int)uVar10) {
      if (uVar4 != uVar10) goto LAB_0010d010;
      NavMap::~NavMap(pNVar14);
      lVar6 = *(long *)(this + 0x3a8);
      *(undefined4 *)(*(long *)(*(long *)(this + 0x3a0) + uVar5 * 8) + 0x2a8 + lVar16) = 0xffffffff;
      uVar4 = *(int *)(this + 0x3b8) - 1;
      *(uint *)(this + 0x3b8) = uVar4;
      *(uint *)(*(long *)(lVar6 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x3b0)) * 8) +
               ((ulong)uVar4 % (ulong)*(uint *)(this + 0x3b0)) * 4) = uVar8;
      goto LAB_0010cca5;
    }
LAB_0010cfd8:
    _err_print_error(&_LC194,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                     "Attempted to free an uninitialized or invalid RID",0,0);
  }
  else {
    if (*(uint *)(this + 0x40c) <= uVar8) {
      if (uVar8 < *(uint *)(this + 0x35c)) {
        if (param_2 >> 0x20 != 0x7fffffff) {
LAB_0010c6f7:
          lVar16 = *(long *)(this + 0x348);
          pNVar14 = (NavMap *)
                    (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80 +
                    *(long *)(lVar16 + ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358)) * 8
                             ));
          uVar10 = *(uint *)(pNVar14 + 0x78);
          if ((uVar10 & 0x7fffffff) != uVar4) {
            if (*(uint *)(this + 0x464) <= uVar8) {
              uVar10 = *(uint *)(this + 0x4bc);
              goto joined_r0x0010d09f;
            }
LAB_0010c736:
            if ((*(uint *)(*(long *)(*(long *)(this + 0x450) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x460)) * 8) +
                           ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x460)) * 0x208 + 0x200
                          ) & 0x7fffffff) == uVar4) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                internal_free_agent(this,param_2);
                return;
              }
              goto LAB_0010cf99;
            }
            uVar10 = *(uint *)(this + 0x4bc);
            goto joined_r0x0010d083;
          }
          if (param_2 == 0) {
            FUN_0010e09a();
            return;
          }
          if (uVar10 != uVar4) {
            if (0x7ffffffe < uVar10 + 0x80000000) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (*(NavLink **)(pNVar14 + 0x30) != (NavLink *)0x0) {
            NavMap::remove_link(*(NavLink **)(pNVar14 + 0x30));
            NavLink::set_map(pNVar14);
            if (*(uint *)(this + 0x35c) <= uVar8) goto LAB_0010cfa0;
            lVar16 = *(long *)(this + 0x348);
          }
          uVar5 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x358);
          lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x358)) * 0x80;
          this_00 = (NavLink *)(*(long *)(lVar16 + uVar5 * 8) + lVar6);
          uVar10 = *(uint *)(this_00 + 0x78);
          if ((int)uVar10 < 0) goto LAB_0010cfd8;
          if (uVar10 == uVar4) {
            NavLink::~NavLink(this_00);
            lVar16 = *(long *)(this + 0x350);
            *(undefined4 *)(*(long *)(*(long *)(this + 0x348) + uVar5 * 8) + 0x78 + lVar6) =
                 0xffffffff;
            uVar4 = *(int *)(this + 0x360) - 1;
            *(uint *)(this + 0x360) = uVar4;
            *(uint *)(*(long *)(lVar16 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x358)) * 8) +
                     ((ulong)uVar4 % (ulong)*(uint *)(this + 0x358)) * 4) = uVar8;
            goto LAB_0010cca5;
          }
LAB_0010d010:
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010cf99;
          uVar12 = 0x171;
LAB_0010cfc2:
          pcVar9 = "Method/function failed.";
          pcVar17 = "./core/templates/rid_owner.h";
          pcVar18 = "free";
          goto LAB_0010cd24;
        }
      }
      else if (uVar8 < *(uint *)(this + 0x464)) {
        if (param_2 >> 0x20 != 0x7fffffff) goto LAB_0010c736;
      }
      else {
        if (*(uint *)(this + 0x4bc) <= uVar8) goto LAB_0010d0a1;
        if (param_2 >> 0x20 != 0x7fffffff) goto LAB_0010c77f;
      }
LAB_0010ccf0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar9 = 
        "Attempted to free a NavigationServer RID that did not exist (or was already freed).";
        uVar12 = 0x506;
        pcVar17 = "modules/navigation/3d/godot_navigation_server_3d.cpp";
        pcVar18 = "_cmd_free";
LAB_0010cd24:
        _err_print_error(pcVar18,pcVar17,uVar12,pcVar9,0,0);
        return;
      }
      goto LAB_0010cf99;
    }
    if (param_2 >> 0x20 == 0x7fffffff) goto LAB_0010ccf0;
LAB_0010c6b2:
    lVar16 = *(long *)(this + 0x3f8);
    pNVar14 = (NavMap *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158 +
              *(long *)(lVar16 + ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408)) * 8));
    uVar10 = *(uint *)(pNVar14 + 0x150);
    if ((uVar10 & 0x7fffffff) != uVar4) {
      if (uVar8 < *(uint *)(this + 0x35c)) goto LAB_0010c6f7;
      if (uVar8 < *(uint *)(this + 0x464)) goto LAB_0010c736;
      uVar10 = *(uint *)(this + 0x4bc);
joined_r0x0010d083:
      if (uVar8 < uVar10) goto LAB_0010c77f;
      goto joined_r0x0010d0de;
    }
    if (param_2 == 0) {
      FUN_0010e090();
      return;
    }
    if (uVar10 != uVar4) {
      if (0x7ffffffe < uVar10 + 0x80000000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(NavRegion **)(pNVar14 + 0x68) != (NavRegion *)0x0) {
      NavMap::remove_region(*(NavRegion **)(pNVar14 + 0x68));
      NavRegion::set_map(pNVar14);
      if (uVar8 < *(uint *)(this + 0x40c)) {
        lVar16 = *(long *)(this + 0x3f8);
        goto LAB_0010cdb1;
      }
LAB_0010cfa0:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010cf99;
      uVar12 = 0x161;
      goto LAB_0010cfc2;
    }
LAB_0010cdb1:
    uVar5 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x408);
    lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x408)) * 0x158;
    pNVar13 = (NavRegion *)(*(long *)(lVar16 + uVar5 * 8) + lVar6);
    uVar10 = *(uint *)(pNVar13 + 0x150);
    if ((int)uVar10 < 0) goto LAB_0010cfd8;
    if (uVar10 != uVar4) goto LAB_0010d010;
    NavRegion::~NavRegion(pNVar13);
    lVar16 = *(long *)(this + 0x400);
    *(undefined4 *)(*(long *)(*(long *)(this + 0x3f8) + uVar5 * 8) + 0x150 + lVar6) = 0xffffffff;
    uVar4 = *(int *)(this + 0x410) - 1;
    *(uint *)(this + 0x410) = uVar4;
    *(uint *)(*(long *)(lVar16 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x408)) * 8) +
             ((ulong)uVar4 % (ulong)*(uint *)(this + 0x408)) * 4) = uVar8;
  }
LAB_0010cca5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cf99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer3D::~GodotNavigationServer3D() */

void __thiscall GodotNavigationServer3D::~GodotNavigationServer3D(GodotNavigationServer3D *this)

{
  long *plVar1;
  long lVar2;
  NavObstacle *this_00;
  NavAgent *this_01;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  NavMap *this_02;
  uint uVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_00118e98;
  flush_queries(this);
  if (*(void **)(this + 0x518) != (void *)0x0) {
    if (*(int *)(this + 0x510) != 0) {
      *(undefined4 *)(this + 0x510) = 0;
    }
    Memory::free_static(*(void **)(this + 0x518),false);
  }
  if (*(void **)(this + 0x508) != (void *)0x0) {
    if (*(int *)(this + 0x500) != 0) {
      *(undefined4 *)(this + 0x500) = 0;
    }
    Memory::free_static(*(void **)(this + 0x508),false);
  }
  uVar9 = *(uint *)(this + 0x4c0);
  *(undefined ***)(this + 0x4a0) = &PTR__RID_Alloc_00118e78;
  if (uVar9 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x4bc);
    uVar8 = (ulong)*(uint *)(this + 0x4b8);
    puVar5 = *(undefined8 **)(this + 0x4a8);
LAB_0010d4fb:
    if ((uint)uVar8 <= (uint)uVar4) {
      lVar7 = 0;
      while( true ) {
        Memory::free_static((void *)puVar5[lVar7],false);
        lVar2 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x4b0) + lVar2),false);
        if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
        puVar5 = *(undefined8 **)(this + 0x4a8);
      }
LAB_0010d53d:
      puVar5 = *(undefined8 **)(this + 0x4a8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
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
    uVar8 = (ulong)*(uint *)(this + 0x4b8);
    puVar5 = *(undefined8 **)(this + 0x4a8);
    if (*(int *)(this + 0x4bc) != 0) {
      uVar6 = 0;
      do {
        this_00 = (NavObstacle *)(puVar5[uVar6 / uVar8] + (uVar6 % uVar8) * 0x88);
        if (-1 < *(int *)(this_00 + 0x80)) {
          NavObstacle::~NavObstacle(this_00);
          uVar8 = (ulong)*(uint *)(this + 0x4b8);
          puVar5 = *(undefined8 **)(this + 0x4a8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x4bc);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0010d4fb;
    }
    if (*(uint *)(this + 0x4b8) == 0) {
      Memory::free_static((void *)*puVar5,false);
      Memory::free_static((void *)**(undefined8 **)(this + 0x4b0),false);
      goto LAB_0010d53d;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x4b0),false);
  }
  uVar9 = *(uint *)(this + 0x468);
  *(undefined ***)(this + 0x448) = &PTR__RID_Alloc_00118e58;
  if (uVar9 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x464);
    uVar8 = (ulong)*(uint *)(this + 0x460);
    puVar5 = *(undefined8 **)(this + 0x450);
LAB_0010d693:
    if ((uint)uVar8 <= (uint)uVar4) {
      lVar7 = 0;
      while( true ) {
        Memory::free_static((void *)puVar5[lVar7],false);
        lVar2 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 0x458) + lVar2),false);
        if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
        puVar5 = *(undefined8 **)(this + 0x450);
      }
LAB_0010d6d5:
      puVar5 = *(undefined8 **)(this + 0x450);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
    print_error((String *)&local_48);
    pcVar3 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar7 = local_50;
      }
    }
    local_50 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = (ulong)*(uint *)(this + 0x460);
    puVar5 = *(undefined8 **)(this + 0x450);
    if (*(int *)(this + 0x464) != 0) {
      uVar6 = 0;
      do {
        this_01 = (NavAgent *)(puVar5[uVar6 / uVar8] + (uVar6 % uVar8) * 0x208);
        if (-1 < *(int *)(this_01 + 0x200)) {
          NavAgent::~NavAgent(this_01);
          uVar8 = (ulong)*(uint *)(this + 0x460);
          puVar5 = *(undefined8 **)(this + 0x450);
        }
        uVar4 = (ulong)*(uint *)(this + 0x464);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0010d693;
    }
    if (*(uint *)(this + 0x460) == 0) {
      Memory::free_static((void *)*puVar5,false);
      Memory::free_static((void *)**(undefined8 **)(this + 0x458),false);
      goto LAB_0010d6d5;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x458),false);
  }
  RID_Alloc<NavRegion,false>::~RID_Alloc((RID_Alloc<NavRegion,false> *)(this + 0x3f0));
  uVar9 = *(uint *)(this + 0x3b8);
  *(undefined ***)(this + 0x398) = &PTR__RID_Alloc_00118e18;
  if (uVar9 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x3b4);
    uVar9 = *(uint *)(this + 0x3b0);
    puVar5 = *(undefined8 **)(this + 0x3a0);
LAB_0010d834:
    if ((uint)uVar4 < uVar9) goto LAB_0010d884;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x3a8) + lVar2),false);
      if ((uint)(uVar4 / uVar9) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 0x3a0);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
    print_error((String *)&local_48);
    pcVar3 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar7 = local_50;
      }
    }
    local_50 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar9 = *(uint *)(this + 0x3b0);
    puVar5 = *(undefined8 **)(this + 0x3a0);
    if (*(int *)(this + 0x3b4) != 0) {
      uVar8 = 0;
      do {
        this_02 = (NavMap *)((uVar8 % (ulong)uVar9) * 0x2b0 + puVar5[uVar8 / uVar9]);
        if (-1 < *(int *)(this_02 + 0x2a8)) {
          NavMap::~NavMap(this_02);
          uVar9 = *(uint *)(this + 0x3b0);
          puVar5 = *(undefined8 **)(this + 0x3a0);
        }
        uVar4 = (ulong)*(uint *)(this + 0x3b4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
      goto LAB_0010d834;
    }
    if (uVar9 != 0) goto LAB_0010d884;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x3a8),false);
  }
  puVar5 = *(undefined8 **)(this + 0x3a0);
LAB_0010d884:
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x3a8),false);
  }
  RID_Alloc<NavLink,false>::~RID_Alloc((RID_Alloc<NavLink,false> *)(this + 0x340));
  if (*(void **)(this + 0x338) != (void *)0x0) {
    if (*(int *)(this + 0x330) != 0) {
      *(undefined4 *)(this + 0x330) = 0;
    }
    Memory::free_static(*(void **)(this + 0x338),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  NavigationServer3D::~NavigationServer3D((NavigationServer3D *)this);
  return;
}



/* GodotNavigationServer3D::~GodotNavigationServer3D() */

void __thiscall GodotNavigationServer3D::~GodotNavigationServer3D(GodotNavigationServer3D *this)

{
  ~GodotNavigationServer3D(this);
  operator_delete(this,0x550);
  return;
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
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
  return (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* NavigationPathQueryParameters3D::is_class_ptr(void*) const */

uint __thiscall
NavigationPathQueryParameters3D::is_class_ptr(NavigationPathQueryParameters3D *this,void *param_1)

{
  return (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationPathQueryParameters3D::_getv(StringName const&, Variant&) const */

undefined8 NavigationPathQueryParameters3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPathQueryParameters3D::_setv(StringName const&, Variant const&) */

undefined8 NavigationPathQueryParameters3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPathQueryParameters3D::_validate_propertyv(PropertyInfo&) const */

void NavigationPathQueryParameters3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationPathQueryParameters3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationPathQueryParameters3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationPathQueryParameters3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationPathQueryParameters3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPathQueryParameters3D::_notificationv(int, bool) */

void NavigationPathQueryParameters3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationPathQueryResult3D::is_class_ptr(void*) const */

uint __thiscall
NavigationPathQueryResult3D::is_class_ptr(NavigationPathQueryResult3D *this,void *param_1)

{
  return (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationPathQueryResult3D::_getv(StringName const&, Variant&) const */

undefined8 NavigationPathQueryResult3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPathQueryResult3D::_setv(StringName const&, Variant const&) */

undefined8 NavigationPathQueryResult3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPathQueryResult3D::_validate_propertyv(PropertyInfo&) const */

void NavigationPathQueryResult3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationPathQueryResult3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationPathQueryResult3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationPathQueryResult3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationPathQueryResult3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPathQueryResult3D::_notificationv(int, bool) */

void NavigationPathQueryResult3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* NavRegion::get_use_edge_connections() const */

NavRegion __thiscall NavRegion::get_use_edge_connections(NavRegion *this)

{
  return this[0xa1];
}



/* NavigationMeshSourceGeometryData3D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData3D::is_class_ptr
          (NavigationMeshSourceGeometryData3D *this,void *param_1)

{
  return (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationServer3D::is_class_ptr(void*) const */

uint __thiscall NavigationServer3D::is_class_ptr(NavigationServer3D *this,void *param_1)

{
  return (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* NavigationServer3D::_getv(StringName const&, Variant&) const */

undefined8 NavigationServer3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationServer3D::_setv(StringName const&, Variant const&) */

undefined8 NavigationServer3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationServer3D::_validate_propertyv(PropertyInfo&) const */

void NavigationServer3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationServer3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationServer3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationServer3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationServer3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationServer3D::_notificationv(int, bool) */

void NavigationServer3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GodotNavigationServer3D::get_process_info(NavigationServer3D::ProcessInfo) const [clone .cold] */

undefined8 GodotNavigationServer3D::get_process_info(void)

{
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::map_create() [clone .cold] */

void GodotNavigationServer3D::map_create(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::region_create() [clone .cold] */

void GodotNavigationServer3D::region_create(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
  _DAT_00000008 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::link_create() [clone .cold] */

void GodotNavigationServer3D::link_create(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
  _DAT_00000008 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::agent_create() [clone .cold] */

void GodotNavigationServer3D::agent_create(void)

{
  code *pcVar1;
  int in_EDX;
  
  if (in_EDX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_EDX + 0x80000000U);
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::obstacle_create() [clone .cold] */

void GodotNavigationServer3D::obstacle_create(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer3D::source_geometry_parser_create() [clone .cold] */

void GodotNavigationServer3D::source_geometry_parser_create(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotNavigationServer3D::_cmd_free(RID) [clone .cold] */

void GodotNavigationServer3D::_cmd_free(void)

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



void FUN_0010e090(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010e09a(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* free_command::~free_command() */

void __thiscall free_command::~free_command(free_command *this)

{
  return;
}



/* obstacle_set_avoidance_layers_command::~obstacle_set_avoidance_layers_command() */

void __thiscall
obstacle_set_avoidance_layers_command::~obstacle_set_avoidance_layers_command
          (obstacle_set_avoidance_layers_command *this)

{
  return;
}



/* obstacle_set_position_command::~obstacle_set_position_command() */

void __thiscall
obstacle_set_position_command::~obstacle_set_position_command(obstacle_set_position_command *this)

{
  return;
}



/* obstacle_set_velocity_command::~obstacle_set_velocity_command() */

void __thiscall
obstacle_set_velocity_command::~obstacle_set_velocity_command(obstacle_set_velocity_command *this)

{
  return;
}



/* obstacle_set_height_command::~obstacle_set_height_command() */

void __thiscall
obstacle_set_height_command::~obstacle_set_height_command(obstacle_set_height_command *this)

{
  return;
}



/* obstacle_set_radius_command::~obstacle_set_radius_command() */

void __thiscall
obstacle_set_radius_command::~obstacle_set_radius_command(obstacle_set_radius_command *this)

{
  return;
}



/* obstacle_set_paused_command::~obstacle_set_paused_command() */

void __thiscall
obstacle_set_paused_command::~obstacle_set_paused_command(obstacle_set_paused_command *this)

{
  return;
}



/* obstacle_set_map_command::~obstacle_set_map_command() */

void __thiscall obstacle_set_map_command::~obstacle_set_map_command(obstacle_set_map_command *this)

{
  return;
}



/* obstacle_set_use_3d_avoidance_command::~obstacle_set_use_3d_avoidance_command() */

void __thiscall
obstacle_set_use_3d_avoidance_command::~obstacle_set_use_3d_avoidance_command
          (obstacle_set_use_3d_avoidance_command *this)

{
  return;
}



/* obstacle_set_avoidance_enabled_command::~obstacle_set_avoidance_enabled_command() */

void __thiscall
obstacle_set_avoidance_enabled_command::~obstacle_set_avoidance_enabled_command
          (obstacle_set_avoidance_enabled_command *this)

{
  return;
}



/* agent_set_avoidance_priority_command::~agent_set_avoidance_priority_command() */

void __thiscall
agent_set_avoidance_priority_command::~agent_set_avoidance_priority_command
          (agent_set_avoidance_priority_command *this)

{
  return;
}



/* agent_set_avoidance_mask_command::~agent_set_avoidance_mask_command() */

void __thiscall
agent_set_avoidance_mask_command::~agent_set_avoidance_mask_command
          (agent_set_avoidance_mask_command *this)

{
  return;
}



/* agent_set_avoidance_layers_command::~agent_set_avoidance_layers_command() */

void __thiscall
agent_set_avoidance_layers_command::~agent_set_avoidance_layers_command
          (agent_set_avoidance_layers_command *this)

{
  return;
}



/* agent_set_position_command::~agent_set_position_command() */

void __thiscall
agent_set_position_command::~agent_set_position_command(agent_set_position_command *this)

{
  return;
}



/* agent_set_velocity_forced_command::~agent_set_velocity_forced_command() */

void __thiscall
agent_set_velocity_forced_command::~agent_set_velocity_forced_command
          (agent_set_velocity_forced_command *this)

{
  return;
}



/* agent_set_velocity_command::~agent_set_velocity_command() */

void __thiscall
agent_set_velocity_command::~agent_set_velocity_command(agent_set_velocity_command *this)

{
  return;
}



/* agent_set_max_speed_command::~agent_set_max_speed_command() */

void __thiscall
agent_set_max_speed_command::~agent_set_max_speed_command(agent_set_max_speed_command *this)

{
  return;
}



/* agent_set_height_command::~agent_set_height_command() */

void __thiscall agent_set_height_command::~agent_set_height_command(agent_set_height_command *this)

{
  return;
}



/* agent_set_radius_command::~agent_set_radius_command() */

void __thiscall agent_set_radius_command::~agent_set_radius_command(agent_set_radius_command *this)

{
  return;
}



/* agent_set_time_horizon_obstacles_command::~agent_set_time_horizon_obstacles_command() */

void __thiscall
agent_set_time_horizon_obstacles_command::~agent_set_time_horizon_obstacles_command
          (agent_set_time_horizon_obstacles_command *this)

{
  return;
}



/* agent_set_time_horizon_agents_command::~agent_set_time_horizon_agents_command() */

void __thiscall
agent_set_time_horizon_agents_command::~agent_set_time_horizon_agents_command
          (agent_set_time_horizon_agents_command *this)

{
  return;
}



/* agent_set_max_neighbors_command::~agent_set_max_neighbors_command() */

void __thiscall
agent_set_max_neighbors_command::~agent_set_max_neighbors_command
          (agent_set_max_neighbors_command *this)

{
  return;
}



/* agent_set_neighbor_distance_command::~agent_set_neighbor_distance_command() */

void __thiscall
agent_set_neighbor_distance_command::~agent_set_neighbor_distance_command
          (agent_set_neighbor_distance_command *this)

{
  return;
}



/* agent_set_paused_command::~agent_set_paused_command() */

void __thiscall agent_set_paused_command::~agent_set_paused_command(agent_set_paused_command *this)

{
  return;
}



/* agent_set_map_command::~agent_set_map_command() */

void __thiscall agent_set_map_command::~agent_set_map_command(agent_set_map_command *this)

{
  return;
}



/* agent_set_use_3d_avoidance_command::~agent_set_use_3d_avoidance_command() */

void __thiscall
agent_set_use_3d_avoidance_command::~agent_set_use_3d_avoidance_command
          (agent_set_use_3d_avoidance_command *this)

{
  return;
}



/* agent_set_avoidance_enabled_command::~agent_set_avoidance_enabled_command() */

void __thiscall
agent_set_avoidance_enabled_command::~agent_set_avoidance_enabled_command
          (agent_set_avoidance_enabled_command *this)

{
  return;
}



/* link_set_owner_id_command::~link_set_owner_id_command() */

void __thiscall
link_set_owner_id_command::~link_set_owner_id_command(link_set_owner_id_command *this)

{
  return;
}



/* link_set_travel_cost_command::~link_set_travel_cost_command() */

void __thiscall
link_set_travel_cost_command::~link_set_travel_cost_command(link_set_travel_cost_command *this)

{
  return;
}



/* link_set_enter_cost_command::~link_set_enter_cost_command() */

void __thiscall
link_set_enter_cost_command::~link_set_enter_cost_command(link_set_enter_cost_command *this)

{
  return;
}



/* link_set_end_position_command::~link_set_end_position_command() */

void __thiscall
link_set_end_position_command::~link_set_end_position_command(link_set_end_position_command *this)

{
  return;
}



/* link_set_start_position_command::~link_set_start_position_command() */

void __thiscall
link_set_start_position_command::~link_set_start_position_command
          (link_set_start_position_command *this)

{
  return;
}



/* link_set_navigation_layers_command::~link_set_navigation_layers_command() */

void __thiscall
link_set_navigation_layers_command::~link_set_navigation_layers_command
          (link_set_navigation_layers_command *this)

{
  return;
}



/* link_set_bidirectional_command::~link_set_bidirectional_command() */

void __thiscall
link_set_bidirectional_command::~link_set_bidirectional_command
          (link_set_bidirectional_command *this)

{
  return;
}



/* link_set_enabled_command::~link_set_enabled_command() */

void __thiscall link_set_enabled_command::~link_set_enabled_command(link_set_enabled_command *this)

{
  return;
}



/* link_set_map_command::~link_set_map_command() */

void __thiscall link_set_map_command::~link_set_map_command(link_set_map_command *this)

{
  return;
}



/* region_set_navigation_layers_command::~region_set_navigation_layers_command() */

void __thiscall
region_set_navigation_layers_command::~region_set_navigation_layers_command
          (region_set_navigation_layers_command *this)

{
  return;
}



/* region_set_owner_id_command::~region_set_owner_id_command() */

void __thiscall
region_set_owner_id_command::~region_set_owner_id_command(region_set_owner_id_command *this)

{
  return;
}



/* region_set_travel_cost_command::~region_set_travel_cost_command() */

void __thiscall
region_set_travel_cost_command::~region_set_travel_cost_command
          (region_set_travel_cost_command *this)

{
  return;
}



/* region_set_enter_cost_command::~region_set_enter_cost_command() */

void __thiscall
region_set_enter_cost_command::~region_set_enter_cost_command(region_set_enter_cost_command *this)

{
  return;
}



/* region_set_transform_command::~region_set_transform_command() */

void __thiscall
region_set_transform_command::~region_set_transform_command(region_set_transform_command *this)

{
  return;
}



/* region_set_map_command::~region_set_map_command() */

void __thiscall region_set_map_command::~region_set_map_command(region_set_map_command *this)

{
  return;
}



/* region_set_use_edge_connections_command::~region_set_use_edge_connections_command() */

void __thiscall
region_set_use_edge_connections_command::~region_set_use_edge_connections_command
          (region_set_use_edge_connections_command *this)

{
  return;
}



/* region_set_enabled_command::~region_set_enabled_command() */

void __thiscall
region_set_enabled_command::~region_set_enabled_command(region_set_enabled_command *this)

{
  return;
}



/* map_set_use_async_iterations_command::~map_set_use_async_iterations_command() */

void __thiscall
map_set_use_async_iterations_command::~map_set_use_async_iterations_command
          (map_set_use_async_iterations_command *this)

{
  return;
}



/* map_set_link_connection_radius_command::~map_set_link_connection_radius_command() */

void __thiscall
map_set_link_connection_radius_command::~map_set_link_connection_radius_command
          (map_set_link_connection_radius_command *this)

{
  return;
}



/* map_set_edge_connection_margin_command::~map_set_edge_connection_margin_command() */

void __thiscall
map_set_edge_connection_margin_command::~map_set_edge_connection_margin_command
          (map_set_edge_connection_margin_command *this)

{
  return;
}



/* map_set_use_edge_connections_command::~map_set_use_edge_connections_command() */

void __thiscall
map_set_use_edge_connections_command::~map_set_use_edge_connections_command
          (map_set_use_edge_connections_command *this)

{
  return;
}



/* map_set_merge_rasterizer_cell_scale_command::~map_set_merge_rasterizer_cell_scale_command() */

void __thiscall
map_set_merge_rasterizer_cell_scale_command::~map_set_merge_rasterizer_cell_scale_command
          (map_set_merge_rasterizer_cell_scale_command *this)

{
  return;
}



/* map_set_cell_height_command::~map_set_cell_height_command() */

void __thiscall
map_set_cell_height_command::~map_set_cell_height_command(map_set_cell_height_command *this)

{
  return;
}



/* map_set_cell_size_command::~map_set_cell_size_command() */

void __thiscall
map_set_cell_size_command::~map_set_cell_size_command(map_set_cell_size_command *this)

{
  return;
}



/* map_set_up_command::~map_set_up_command() */

void __thiscall map_set_up_command::~map_set_up_command(map_set_up_command *this)

{
  return;
}



/* map_set_active_command::~map_set_active_command() */

void __thiscall map_set_active_command::~map_set_active_command(map_set_active_command *this)

{
  return;
}



/* map_set_active_command::~map_set_active_command() */

void __thiscall map_set_active_command::~map_set_active_command(map_set_active_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_up_command::~map_set_up_command() */

void __thiscall map_set_up_command::~map_set_up_command(map_set_up_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* map_set_cell_size_command::~map_set_cell_size_command() */

void __thiscall
map_set_cell_size_command::~map_set_cell_size_command(map_set_cell_size_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_cell_height_command::~map_set_cell_height_command() */

void __thiscall
map_set_cell_height_command::~map_set_cell_height_command(map_set_cell_height_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_merge_rasterizer_cell_scale_command::~map_set_merge_rasterizer_cell_scale_command() */

void __thiscall
map_set_merge_rasterizer_cell_scale_command::~map_set_merge_rasterizer_cell_scale_command
          (map_set_merge_rasterizer_cell_scale_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_use_edge_connections_command::~map_set_use_edge_connections_command() */

void __thiscall
map_set_use_edge_connections_command::~map_set_use_edge_connections_command
          (map_set_use_edge_connections_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_edge_connection_margin_command::~map_set_edge_connection_margin_command() */

void __thiscall
map_set_edge_connection_margin_command::~map_set_edge_connection_margin_command
          (map_set_edge_connection_margin_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_link_connection_radius_command::~map_set_link_connection_radius_command() */

void __thiscall
map_set_link_connection_radius_command::~map_set_link_connection_radius_command
          (map_set_link_connection_radius_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* map_set_use_async_iterations_command::~map_set_use_async_iterations_command() */

void __thiscall
map_set_use_async_iterations_command::~map_set_use_async_iterations_command
          (map_set_use_async_iterations_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_enabled_command::~region_set_enabled_command() */

void __thiscall
region_set_enabled_command::~region_set_enabled_command(region_set_enabled_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_use_edge_connections_command::~region_set_use_edge_connections_command() */

void __thiscall
region_set_use_edge_connections_command::~region_set_use_edge_connections_command
          (region_set_use_edge_connections_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_map_command::~region_set_map_command() */

void __thiscall region_set_map_command::~region_set_map_command(region_set_map_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_transform_command::~region_set_transform_command() */

void __thiscall
region_set_transform_command::~region_set_transform_command(region_set_transform_command *this)

{
  operator_delete(this,0x40);
  return;
}



/* region_set_enter_cost_command::~region_set_enter_cost_command() */

void __thiscall
region_set_enter_cost_command::~region_set_enter_cost_command(region_set_enter_cost_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_travel_cost_command::~region_set_travel_cost_command() */

void __thiscall
region_set_travel_cost_command::~region_set_travel_cost_command
          (region_set_travel_cost_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_owner_id_command::~region_set_owner_id_command() */

void __thiscall
region_set_owner_id_command::~region_set_owner_id_command(region_set_owner_id_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* region_set_navigation_layers_command::~region_set_navigation_layers_command() */

void __thiscall
region_set_navigation_layers_command::~region_set_navigation_layers_command
          (region_set_navigation_layers_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_map_command::~link_set_map_command() */

void __thiscall link_set_map_command::~link_set_map_command(link_set_map_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_enabled_command::~link_set_enabled_command() */

void __thiscall link_set_enabled_command::~link_set_enabled_command(link_set_enabled_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_bidirectional_command::~link_set_bidirectional_command() */

void __thiscall
link_set_bidirectional_command::~link_set_bidirectional_command
          (link_set_bidirectional_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_navigation_layers_command::~link_set_navigation_layers_command() */

void __thiscall
link_set_navigation_layers_command::~link_set_navigation_layers_command
          (link_set_navigation_layers_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_start_position_command::~link_set_start_position_command() */

void __thiscall
link_set_start_position_command::~link_set_start_position_command
          (link_set_start_position_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* link_set_end_position_command::~link_set_end_position_command() */

void __thiscall
link_set_end_position_command::~link_set_end_position_command(link_set_end_position_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* link_set_enter_cost_command::~link_set_enter_cost_command() */

void __thiscall
link_set_enter_cost_command::~link_set_enter_cost_command(link_set_enter_cost_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_travel_cost_command::~link_set_travel_cost_command() */

void __thiscall
link_set_travel_cost_command::~link_set_travel_cost_command(link_set_travel_cost_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* link_set_owner_id_command::~link_set_owner_id_command() */

void __thiscall
link_set_owner_id_command::~link_set_owner_id_command(link_set_owner_id_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_avoidance_enabled_command::~agent_set_avoidance_enabled_command() */

void __thiscall
agent_set_avoidance_enabled_command::~agent_set_avoidance_enabled_command
          (agent_set_avoidance_enabled_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_use_3d_avoidance_command::~agent_set_use_3d_avoidance_command() */

void __thiscall
agent_set_use_3d_avoidance_command::~agent_set_use_3d_avoidance_command
          (agent_set_use_3d_avoidance_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_map_command::~agent_set_map_command() */

void __thiscall agent_set_map_command::~agent_set_map_command(agent_set_map_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_paused_command::~agent_set_paused_command() */

void __thiscall agent_set_paused_command::~agent_set_paused_command(agent_set_paused_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_neighbor_distance_command::~agent_set_neighbor_distance_command() */

void __thiscall
agent_set_neighbor_distance_command::~agent_set_neighbor_distance_command
          (agent_set_neighbor_distance_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_max_neighbors_command::~agent_set_max_neighbors_command() */

void __thiscall
agent_set_max_neighbors_command::~agent_set_max_neighbors_command
          (agent_set_max_neighbors_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_time_horizon_agents_command::~agent_set_time_horizon_agents_command() */

void __thiscall
agent_set_time_horizon_agents_command::~agent_set_time_horizon_agents_command
          (agent_set_time_horizon_agents_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_time_horizon_obstacles_command::~agent_set_time_horizon_obstacles_command() */

void __thiscall
agent_set_time_horizon_obstacles_command::~agent_set_time_horizon_obstacles_command
          (agent_set_time_horizon_obstacles_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_radius_command::~agent_set_radius_command() */

void __thiscall agent_set_radius_command::~agent_set_radius_command(agent_set_radius_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_height_command::~agent_set_height_command() */

void __thiscall agent_set_height_command::~agent_set_height_command(agent_set_height_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_max_speed_command::~agent_set_max_speed_command() */

void __thiscall
agent_set_max_speed_command::~agent_set_max_speed_command(agent_set_max_speed_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_velocity_command::~agent_set_velocity_command() */

void __thiscall
agent_set_velocity_command::~agent_set_velocity_command(agent_set_velocity_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* agent_set_velocity_forced_command::~agent_set_velocity_forced_command() */

void __thiscall
agent_set_velocity_forced_command::~agent_set_velocity_forced_command
          (agent_set_velocity_forced_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* agent_set_position_command::~agent_set_position_command() */

void __thiscall
agent_set_position_command::~agent_set_position_command(agent_set_position_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* agent_set_avoidance_layers_command::~agent_set_avoidance_layers_command() */

void __thiscall
agent_set_avoidance_layers_command::~agent_set_avoidance_layers_command
          (agent_set_avoidance_layers_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_avoidance_mask_command::~agent_set_avoidance_mask_command() */

void __thiscall
agent_set_avoidance_mask_command::~agent_set_avoidance_mask_command
          (agent_set_avoidance_mask_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* agent_set_avoidance_priority_command::~agent_set_avoidance_priority_command() */

void __thiscall
agent_set_avoidance_priority_command::~agent_set_avoidance_priority_command
          (agent_set_avoidance_priority_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_avoidance_enabled_command::~obstacle_set_avoidance_enabled_command() */

void __thiscall
obstacle_set_avoidance_enabled_command::~obstacle_set_avoidance_enabled_command
          (obstacle_set_avoidance_enabled_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_use_3d_avoidance_command::~obstacle_set_use_3d_avoidance_command() */

void __thiscall
obstacle_set_use_3d_avoidance_command::~obstacle_set_use_3d_avoidance_command
          (obstacle_set_use_3d_avoidance_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_map_command::~obstacle_set_map_command() */

void __thiscall obstacle_set_map_command::~obstacle_set_map_command(obstacle_set_map_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_paused_command::~obstacle_set_paused_command() */

void __thiscall
obstacle_set_paused_command::~obstacle_set_paused_command(obstacle_set_paused_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_radius_command::~obstacle_set_radius_command() */

void __thiscall
obstacle_set_radius_command::~obstacle_set_radius_command(obstacle_set_radius_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_height_command::~obstacle_set_height_command() */

void __thiscall
obstacle_set_height_command::~obstacle_set_height_command(obstacle_set_height_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* obstacle_set_velocity_command::~obstacle_set_velocity_command() */

void __thiscall
obstacle_set_velocity_command::~obstacle_set_velocity_command(obstacle_set_velocity_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* obstacle_set_position_command::~obstacle_set_position_command() */

void __thiscall
obstacle_set_position_command::~obstacle_set_position_command(obstacle_set_position_command *this)

{
  operator_delete(this,0x20);
  return;
}



/* obstacle_set_avoidance_layers_command::~obstacle_set_avoidance_layers_command() */

void __thiscall
obstacle_set_avoidance_layers_command::~obstacle_set_avoidance_layers_command
          (obstacle_set_avoidance_layers_command *this)

{
  operator_delete(this,0x18);
  return;
}



/* free_command::~free_command() */

void __thiscall free_command::~free_command(free_command *this)

{
  operator_delete(this,0x10);
  return;
}



/* agent_set_avoidance_callback_command::~agent_set_avoidance_callback_command() */

void __thiscall
agent_set_avoidance_callback_command::~agent_set_avoidance_callback_command
          (agent_set_avoidance_callback_command *this)

{
  *(undefined ***)this = &PTR__agent_set_avoidance_callback_command_00119b20;
  Callable::~Callable((Callable *)(this + 0x10));
  return;
}



/* agent_set_avoidance_callback_command::~agent_set_avoidance_callback_command() */

void __thiscall
agent_set_avoidance_callback_command::~agent_set_avoidance_callback_command
          (agent_set_avoidance_callback_command *this)

{
  *(undefined ***)this = &PTR__agent_set_avoidance_callback_command_00119b20;
  Callable::~Callable((Callable *)(this + 0x10));
  operator_delete(this,0x20);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118800;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118800;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D() */

void __thiscall
NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D
          (NavigationPathQueryParameters3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118800;
  Object::~Object((Object *)this);
  return;
}



/* NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D() */

void __thiscall
NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D
          (NavigationPathQueryParameters3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118800;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c0);
  return;
}



/* NavigationMeshSourceGeometryData3D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData3D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00120008 != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData3D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00120010 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData3D::_get_class_namev(void)

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
LAB_00110133:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110133;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData3D");
      goto LAB_0011019e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData3D");
LAB_0011019e:
  return &_get_class_namev()::_class_name_static;
}



/* region_set_navigation_mesh_command::~region_set_navigation_mesh_command() */

void __thiscall
region_set_navigation_mesh_command::~region_set_navigation_mesh_command
          (region_set_navigation_mesh_command *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__region_set_navigation_mesh_command_00119760;
  if (*(long *)(this + 0x10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* region_set_navigation_mesh_command::~region_set_navigation_mesh_command() */

void __thiscall
region_set_navigation_mesh_command::~region_set_navigation_mesh_command
          (region_set_navigation_mesh_command *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__region_set_navigation_mesh_command_00119760;
  if (*(long *)(this + 0x10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  operator_delete(this,0x18);
  return;
}



/* NavigationPathQueryParameters3D::_get_class_namev() const */

undefined8 * NavigationPathQueryParameters3D::_get_class_namev(void)

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
LAB_00110303:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110303;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationPathQueryParameters3D");
      goto LAB_0011036e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPathQueryParameters3D"
            );
LAB_0011036e:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationPathQueryResult3D::_get_class_namev() const */

undefined8 * NavigationPathQueryResult3D::_get_class_namev(void)

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
LAB_001103f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001103f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPathQueryResult3D"
                );
      goto LAB_0011045e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPathQueryResult3D");
LAB_0011045e:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationServer3D::_get_class_namev() const */

undefined8 * NavigationServer3D::_get_class_namev(void)

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
LAB_001104e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001104e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationServer3D");
      goto LAB_0011054e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationServer3D");
LAB_0011054e:
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
LAB_001105c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001105c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011062e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011062e:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00118c20;
  NavigationMeshSourceGeometryData3D::clear();
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2c0);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2c0) = 0;
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
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00118c20;
  NavigationMeshSourceGeometryData3D::clear();
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2c0);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2c0) = 0;
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
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2f8);
  return;
}



/* NavigationPathQueryResult3D::~NavigationPathQueryResult3D() */

void __thiscall
NavigationPathQueryResult3D::~NavigationPathQueryResult3D(NavigationPathQueryResult3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00118ac0;
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Array::~Array((Array *)(this + 0x1a0));
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00118800;
  Object::~Object((Object *)this);
  return;
}



/* NavigationPathQueryResult3D::~NavigationPathQueryResult3D() */

void __thiscall
NavigationPathQueryResult3D::~NavigationPathQueryResult3D(NavigationPathQueryResult3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00118ac0;
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Array::~Array((Array *)(this + 0x1a0));
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00118800;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b8);
  return;
}



/* NavigationPathQueryParameters3D::get_class() const */

void NavigationPathQueryParameters3D::get_class(void)

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



/* NavigationPathQueryResult3D::get_class() const */

void NavigationPathQueryResult3D::get_class(void)

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



/* NavigationServer3D::get_class() const */

void NavigationServer3D::get_class(void)

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



/* NavigationMeshSourceGeometryData3D::get_class() const */

void NavigationMeshSourceGeometryData3D::get_class(void)

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
            if (lVar5 == 0) goto LAB_00110fbf;
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
LAB_00110fbf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00111073;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00111123;
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
LAB_00111123:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00111073;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00111073:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPathQueryParameters3D::is_class(String const&) const */

undefined8 __thiscall
NavigationPathQueryParameters3D::is_class(NavigationPathQueryParameters3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0011124f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011124f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00111303;
  }
  cVar5 = String::operator==(param_1,"NavigationPathQueryParameters3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00111303:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPathQueryResult3D::is_class(String const&) const */

undefined8 __thiscall
NavigationPathQueryResult3D::is_class(NavigationPathQueryResult3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001113cf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001113cf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00111483;
  }
  cVar5 = String::operator==(param_1,"NavigationPathQueryResult3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00111483:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationServer3D::is_class(String const&) const */

undefined8 __thiscall NavigationServer3D::is_class(NavigationServer3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011154f;
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
LAB_0011154f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00111603;
  }
  cVar6 = String::operator==(param_1,"NavigationServer3D");
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
              if (lVar5 == 0) goto LAB_001116b3;
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
LAB_001116b3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00111603;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00111603:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData3D::is_class
          (NavigationMeshSourceGeometryData3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001117df;
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
LAB_001117df:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00111893;
  }
  cVar6 = String::operator==(param_1,"NavigationMeshSourceGeometryData3D");
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
              if (lVar5 == 0) goto LAB_00111953;
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
LAB_00111953:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00111893;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001119fc;
    }
  }
LAB_00111893:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001119fc:
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
    if ((code *)PTR__bind_methods_00120018 != Object::_bind_methods) {
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



/* NavigationServer3D::_initialize_classv() */

void NavigationServer3D::_initialize_classv(void)

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
    local_38 = "NavigationServer3D";
    local_50 = 0;
    local_30 = 0x12;
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
    if ((code *)PTR__bind_methods_00120020 != Object::_bind_methods) {
      NavigationServer3D::_bind_methods();
    }
    if ((code *)PTR__bind_compatibility_methods_00120028 != Object::_bind_compatibility_methods) {
      NavigationServer3D::_bind_compatibility_methods();
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
LAB_00111ed8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111ed8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00111ef6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00111ef6:
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



/* NavigationServer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void NavigationServer3D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "NavigationServer3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationServer3D";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_001122c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001122c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001122e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001122e6:
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
  StringName::StringName((StringName *)&local_78,"NavigationServer3D",false);
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



/* NavigationPathQueryResult3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
NavigationPathQueryResult3D::_get_property_listv
          (NavigationPathQueryResult3D *this,List *param_1,bool param_2)

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
  local_78 = "NavigationPathQueryResult3D";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationPathQueryResult3D";
  local_98 = 0;
  local_70 = 0x1b;
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
LAB_001126c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001126c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001126e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001126e5:
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
  StringName::StringName((StringName *)&local_78,"NavigationPathQueryResult3D",false);
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



/* NavigationPathQueryParameters3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
NavigationPathQueryParameters3D::_get_property_listv
          (NavigationPathQueryParameters3D *this,List *param_1,bool param_2)

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
  local_78 = "NavigationPathQueryParameters3D";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationPathQueryParameters3D";
  local_98 = 0;
  local_70 = 0x1f;
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
LAB_00112b18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112b18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112b35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112b35:
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
  StringName::StringName((StringName *)&local_78,"NavigationPathQueryParameters3D",false);
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



/* NavigationPathQueryParameters3D::_initialize_classv() */

void NavigationPathQueryParameters3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00112f5b;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_0011306a:
      if ((code *)PTR__bind_methods_00120038 != RefCounted::_bind_methods) {
LAB_0011307a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011306a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00120038 != RefCounted::_bind_methods) goto LAB_0011307a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "NavigationPathQueryParameters3D";
  local_70 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00120030 != RefCounted::_bind_methods) {
    NavigationPathQueryParameters3D::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00112f5b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationPathQueryResult3D::_initialize_classv() */

void NavigationPathQueryResult3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0011325b;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_0011336a:
      if ((code *)PTR__bind_methods_00120038 != RefCounted::_bind_methods) {
LAB_0011337a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011336a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00120038 != RefCounted::_bind_methods) goto LAB_0011337a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "NavigationPathQueryResult3D";
  local_70 = 0;
  local_50 = 0x1b;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00120040 != RefCounted::_bind_methods) {
    NavigationPathQueryResult3D::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0011325b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationMeshSourceGeometryData3D::_initialize_classv() */

void NavigationMeshSourceGeometryData3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00120038 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationMeshSourceGeometryData3D";
    local_70 = 0;
    local_50 = 0x22;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)PTR__bind_methods_00120048 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData3D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_001139b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001139b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001139d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001139d5:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* NavigationMeshSourceGeometryData3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData3D::_get_property_listv
          (NavigationMeshSourceGeometryData3D *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMeshSourceGeometryData3D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData3D";
  local_98 = 0;
  local_70 = 0x22;
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
LAB_00113e08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113e08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00113e25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00113e25:
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* map_set_active_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_active_command::exec(map_set_active_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_map_set_active(param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* map_set_up_command::exec(GodotNavigationServer3D*) */

void __thiscall map_set_up_command::exec(map_set_up_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_map_set_up
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* map_set_cell_size_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_cell_size_command::exec(map_set_cell_size_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_map_set_cell_size
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* map_set_cell_height_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_cell_height_command::exec
          (map_set_cell_height_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_map_set_cell_height
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* map_set_merge_rasterizer_cell_scale_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_merge_rasterizer_cell_scale_command::exec
          (map_set_merge_rasterizer_cell_scale_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_map_set_merge_rasterizer_cell_scale
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* map_set_use_edge_connections_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_use_edge_connections_command::exec
          (map_set_use_edge_connections_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_map_set_use_edge_connections
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* map_set_edge_connection_margin_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_edge_connection_margin_command::exec
          (map_set_edge_connection_margin_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_map_set_edge_connection_margin
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* map_set_link_connection_radius_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_link_connection_radius_command::exec
          (map_set_link_connection_radius_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_map_set_link_connection_radius
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* map_set_use_async_iterations_command::exec(GodotNavigationServer3D*) */

void __thiscall
map_set_use_async_iterations_command::exec
          (map_set_use_async_iterations_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_map_set_use_async_iterations
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* region_set_enabled_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_enabled_command::exec(region_set_enabled_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_region_set_enabled(param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* region_set_use_edge_connections_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_use_edge_connections_command::exec
          (region_set_use_edge_connections_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_region_set_use_edge_connections
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* region_set_map_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_map_command::exec(region_set_map_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_region_set_map
            (param_1,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}



/* region_set_transform_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_transform_command::exec
          (region_set_transform_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_region_set_transform(param_1,*(undefined8 *)(this + 8));
  return;
}



/* region_set_enter_cost_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_enter_cost_command::exec
          (region_set_enter_cost_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_region_set_enter_cost
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* region_set_travel_cost_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_travel_cost_command::exec
          (region_set_travel_cost_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_region_set_travel_cost
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* region_set_owner_id_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_owner_id_command::exec
          (region_set_owner_id_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_region_set_owner_id
            (param_1,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}



/* region_set_navigation_layers_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_navigation_layers_command::exec
          (region_set_navigation_layers_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_region_set_navigation_layers
            (param_1,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10));
  return;
}



/* region_set_navigation_mesh_command::exec(GodotNavigationServer3D*) */

void __thiscall
region_set_navigation_mesh_command::exec
          (region_set_navigation_mesh_command *this,GodotNavigationServer3D *param_1)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  pOVar1 = *(Object **)(this + 0x10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_28 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_28 = (Object *)0x0;
    GodotNavigationServer3D::_cmd_region_set_navigation_mesh
              (param_1,*(undefined8 *)(this + 8),&local_28);
  }
  else {
    GodotNavigationServer3D::_cmd_region_set_navigation_mesh
              (param_1,*(undefined8 *)(this + 8),&local_28);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_001143ee;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001143ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* link_set_map_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_map_command::exec(link_set_map_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_map
            (param_1,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}



/* link_set_enabled_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_enabled_command::exec(link_set_enabled_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_enabled(param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* link_set_bidirectional_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_bidirectional_command::exec
          (link_set_bidirectional_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_bidirectional(param_1,*(undefined8 *)(this + 8),this[0x10])
  ;
  return;
}



/* link_set_navigation_layers_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_navigation_layers_command::exec
          (link_set_navigation_layers_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_navigation_layers
            (param_1,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10));
  return;
}



/* link_set_start_position_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_start_position_command::exec
          (link_set_start_position_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_start_position
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* link_set_end_position_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_end_position_command::exec
          (link_set_end_position_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_end_position
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* link_set_enter_cost_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_enter_cost_command::exec
          (link_set_enter_cost_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_enter_cost
            (*(undefined4 *)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* link_set_travel_cost_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_travel_cost_command::exec
          (link_set_travel_cost_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_travel_cost
            (*(undefined4 *)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* link_set_owner_id_command::exec(GodotNavigationServer3D*) */

void __thiscall
link_set_owner_id_command::exec(link_set_owner_id_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_link_set_owner_id
            (param_1,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}



/* agent_set_avoidance_enabled_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_avoidance_enabled_command::exec
          (agent_set_avoidance_enabled_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_avoidance_enabled
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* agent_set_use_3d_avoidance_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_use_3d_avoidance_command::exec
          (agent_set_use_3d_avoidance_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_use_3d_avoidance
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* agent_set_map_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_map_command::exec(agent_set_map_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_map
            (param_1,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}



/* agent_set_paused_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_paused_command::exec(agent_set_paused_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_paused(param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* agent_set_neighbor_distance_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_neighbor_distance_command::exec
          (agent_set_neighbor_distance_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_neighbor_distance
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* agent_set_max_neighbors_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_max_neighbors_command::exec
          (agent_set_max_neighbors_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_max_neighbors
            (param_1,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10));
  return;
}



/* agent_set_time_horizon_agents_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_time_horizon_agents_command::exec
          (agent_set_time_horizon_agents_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_time_horizon_agents
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* agent_set_time_horizon_obstacles_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_time_horizon_obstacles_command::exec
          (agent_set_time_horizon_obstacles_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_time_horizon_obstacles
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* agent_set_radius_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_radius_command::exec(agent_set_radius_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_radius
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* agent_set_height_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_height_command::exec(agent_set_height_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_height
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* agent_set_max_speed_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_max_speed_command::exec
          (agent_set_max_speed_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_max_speed
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* agent_set_velocity_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_velocity_command::exec(agent_set_velocity_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_velocity
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* agent_set_velocity_forced_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_velocity_forced_command::exec
          (agent_set_velocity_forced_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_velocity_forced
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* agent_set_position_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_position_command::exec(agent_set_position_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_position
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* agent_set_avoidance_callback_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_avoidance_callback_command::exec
          (agent_set_avoidance_callback_command *this,GodotNavigationServer3D *param_1)

{
  long in_FS_OFFSET;
  Callable aCStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Callable::Callable(aCStack_38,(Callable *)(this + 0x10));
  GodotNavigationServer3D::_cmd_agent_set_avoidance_callback
            (param_1,*(undefined8 *)(this + 8),aCStack_38);
  Callable::~Callable(aCStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* agent_set_avoidance_layers_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_avoidance_layers_command::exec
          (agent_set_avoidance_layers_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_avoidance_layers
            (param_1,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10));
  return;
}



/* agent_set_avoidance_mask_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_avoidance_mask_command::exec
          (agent_set_avoidance_mask_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_agent_set_avoidance_mask
            (param_1,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10));
  return;
}



/* agent_set_avoidance_priority_command::exec(GodotNavigationServer3D*) */

void __thiscall
agent_set_avoidance_priority_command::exec
          (agent_set_avoidance_priority_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_agent_set_avoidance_priority
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* obstacle_set_avoidance_enabled_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_avoidance_enabled_command::exec
          (obstacle_set_avoidance_enabled_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_avoidance_enabled
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* obstacle_set_use_3d_avoidance_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_use_3d_avoidance_command::exec
          (obstacle_set_use_3d_avoidance_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_use_3d_avoidance
            (param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* obstacle_set_map_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_map_command::exec(obstacle_set_map_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_map
            (param_1,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}



/* obstacle_set_paused_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_paused_command::exec
          (obstacle_set_paused_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_paused(param_1,*(undefined8 *)(this + 8),this[0x10]);
  return;
}



/* obstacle_set_radius_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_radius_command::exec
          (obstacle_set_radius_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_obstacle_set_radius
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* obstacle_set_height_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_height_command::exec
          (obstacle_set_height_command *this,GodotNavigationServer3D *param_1)

{
                    /* WARNING: Load size is inaccurate */
  GodotNavigationServer3D::_cmd_obstacle_set_height
            (*(GodotNavigationServer3D **)(this + 0x10),param_1,*(undefined8 *)(this + 8));
  return;
}



/* obstacle_set_velocity_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_velocity_command::exec
          (obstacle_set_velocity_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_velocity
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* obstacle_set_position_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_position_command::exec
          (obstacle_set_position_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_position
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),param_1,
             *(undefined8 *)(this + 8));
  return;
}



/* obstacle_set_avoidance_layers_command::exec(GodotNavigationServer3D*) */

void __thiscall
obstacle_set_avoidance_layers_command::exec
          (obstacle_set_avoidance_layers_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_obstacle_set_avoidance_layers
            (param_1,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10));
  return;
}



/* WARNING: Removing unreachable block (ram,0x00114a90) */
/* WARNING: Removing unreachable block (ram,0x00114bc0) */
/* WARNING: Removing unreachable block (ram,0x00114d39) */
/* WARNING: Removing unreachable block (ram,0x00114bcc) */
/* WARNING: Removing unreachable block (ram,0x00114bd6) */
/* WARNING: Removing unreachable block (ram,0x00114d1b) */
/* WARNING: Removing unreachable block (ram,0x00114be2) */
/* WARNING: Removing unreachable block (ram,0x00114bec) */
/* WARNING: Removing unreachable block (ram,0x00114cfd) */
/* WARNING: Removing unreachable block (ram,0x00114bf8) */
/* WARNING: Removing unreachable block (ram,0x00114c02) */
/* WARNING: Removing unreachable block (ram,0x00114cdf) */
/* WARNING: Removing unreachable block (ram,0x00114c0e) */
/* WARNING: Removing unreachable block (ram,0x00114c18) */
/* WARNING: Removing unreachable block (ram,0x00114cc1) */
/* WARNING: Removing unreachable block (ram,0x00114c24) */
/* WARNING: Removing unreachable block (ram,0x00114c2e) */
/* WARNING: Removing unreachable block (ram,0x00114ca3) */
/* WARNING: Removing unreachable block (ram,0x00114c36) */
/* WARNING: Removing unreachable block (ram,0x00114c40) */
/* WARNING: Removing unreachable block (ram,0x00114c88) */
/* WARNING: Removing unreachable block (ram,0x00114c48) */
/* WARNING: Removing unreachable block (ram,0x00114c5e) */
/* WARNING: Removing unreachable block (ram,0x00114c6a) */
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



/* RID_Alloc<NavMap, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavMap,false>::~RID_Alloc(RID_Alloc<NavMap,false> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  NavMap *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar8 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e18;
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_00114ecb:
    if ((uint)uVar4 < uVar8) goto LAB_00114f0b;
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
        this_00 = (NavMap *)((uVar6 % (ulong)uVar8) * 0x2b0 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x2a8)) {
          NavMap::~NavMap(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_00114ecb;
    }
    if (uVar8 != 0) goto LAB_00114f0b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_00114f0b:
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



/* RID_Alloc<NavAgent, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavAgent,false>::~RID_Alloc(RID_Alloc<NavAgent,false> *this)

{
  long *plVar1;
  long lVar2;
  NavAgent *this_00;
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
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e58;
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_0011510a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_0011514b;
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
        this_00 = (NavAgent *)(puVar9[uVar6 / uVar8] + (uVar6 % uVar8) * 0x208);
        if (-1 < *(int *)(this_00 + 0x200)) {
          NavAgent::~NavAgent(this_00);
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      goto LAB_0011510a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_0011514b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_0011514b:
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



/* RID_Alloc<NavObstacle, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavObstacle,false>::~RID_Alloc(RID_Alloc<NavObstacle,false> *this)

{
  long *plVar1;
  long lVar2;
  NavObstacle *this_00;
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
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e78;
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_0011534a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_0011538b;
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
        this_00 = (NavObstacle *)(puVar9[uVar6 / uVar8] + (uVar6 % uVar8) * 0x88);
        if (-1 < *(int *)(this_00 + 0x80)) {
          NavObstacle::~NavObstacle(this_00);
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      goto LAB_0011534a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_0011538b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_0011538b:
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



/* RID_Alloc<NavObstacle, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavObstacle,false>::~RID_Alloc(RID_Alloc<NavObstacle,false> *this)

{
  long *plVar1;
  long lVar2;
  NavObstacle *this_00;
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
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e78;
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_0011558a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_001155cb;
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
        this_00 = (NavObstacle *)(puVar9[uVar6 / uVar8] + (uVar6 % uVar8) * 0x88);
        if (-1 < *(int *)(this_00 + 0x80)) {
          NavObstacle::~NavObstacle(this_00);
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      goto LAB_0011558a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_001155cb;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_001155cb:
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



/* RID_Alloc<NavMap, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavMap,false>::~RID_Alloc(RID_Alloc<NavMap,false> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  NavMap *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar8 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e18;
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_001157ab:
    if ((uint)uVar4 < uVar8) goto LAB_001157eb;
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
        this_00 = (NavMap *)((uVar6 % (ulong)uVar8) * 0x2b0 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x2a8)) {
          NavMap::~NavMap(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_001157ab;
    }
    if (uVar8 != 0) goto LAB_001157eb;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_001157eb:
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



/* RID_Alloc<NavAgent, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavAgent,false>::~RID_Alloc(RID_Alloc<NavAgent,false> *this)

{
  long *plVar1;
  long lVar2;
  NavAgent *this_00;
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
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e58;
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_001159ca:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_00115a0b;
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
        this_00 = (NavAgent *)(puVar9[uVar6 / uVar8] + (uVar6 % uVar8) * 0x208);
        if (-1 < *(int *)(this_00 + 0x200)) {
          NavAgent::~NavAgent(this_00);
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      goto LAB_001159ca;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00115a0b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_00115a0b:
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



/* RID_Alloc<NavMap, false>::make_rid() */

ulong __thiscall RID_Alloc<NavMap,false>::make_rid(RID_Alloc<NavMap,false> *this)

{
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  NavMap *this_00;
  char *pcVar14;
  ulong uVar15;
  
  uVar12 = *(uint *)(this + 0x20);
  if (uVar12 == *(uint *)(this + 0x1c)) {
    if (uVar12 == 0) {
      lVar11 = 0;
      uVar15 = 8;
    }
    else {
      uVar15 = (ulong)((int)((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar11 = ((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar3 = Memory::realloc_static(*(void **)(this + 8),uVar15,false);
    *(long *)(this + 8) = lVar3;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x2b0,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar3 + lVar11) = uVar10;
    lVar4 = Memory::realloc_static(pvVar1,uVar15,false);
    *(long *)(this + 0x10) = lVar4;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar6 = *(uint *)(this + 0x18);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar11) = uVar10;
    if (uVar6 != 0) {
      lVar4 = *(long *)(lVar3 + lVar11);
      lVar5 = 0;
      puVar9 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar11) + 0x2a8);
      do {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 0xac;
        *(int *)(lVar4 + lVar5 * 4) = *(int *)(this + 0x20) + (int)lVar5;
        uVar6 = *(uint *)(this + 0x18);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar6);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar6;
    uVar12 = *(uint *)(this + 0x20);
  }
  else {
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(uint *)(this + 0x18);
  }
  uVar12 = *(uint *)(*(long *)(lVar3 + ((ulong)uVar12 / (ulong)uVar6) * 8) +
                    ((ulong)uVar12 % (ulong)uVar6) * 4);
  uVar15 = (ulong)uVar12;
  LOCK();
  UNLOCK();
  uVar7 = (int)RID_AllocBase::base_id + 1;
  uVar8 = uVar7 & 0x7fffffff;
  if (uVar8 != 0x7fffffff) {
    lVar11 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar15 % (ulong)uVar6) * 0x2b0 + *(long *)(lVar11 + (uVar15 / uVar6) * 8) + 0x2a8) =
         uVar8 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar13 = CONCAT44(uVar7,uVar12) & 0x7fffffffffffffff;
    if ((uVar13 != 0) && ((uint)uVar13 < *(uint *)(this + 0x1c))) {
      this_00 = (NavMap *)
                ((uVar15 % (ulong)*(uint *)(this + 0x18)) * 0x2b0 +
                *(long *)(lVar11 + (uVar15 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(this_00 + 0x2a8) < 0) {
        uVar12 = (uint)(uVar13 >> 0x20);
        if (uVar12 == (*(uint *)(this_00 + 0x2a8) & 0x7fffffff)) {
          *(uint *)(this_00 + 0x2a8) = uVar12;
          NavMap::NavMap(this_00);
          return uVar13;
        }
        pcVar14 = "Attempting to initialize the wrong RID";
        uVar10 = 0xfc;
      }
      else {
        pcVar14 = "Initializing already initialized RID";
        uVar10 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar10,
                       "Method/function failed. Returning: nullptr",pcVar14,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return uVar13;
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



/* RID_Alloc<NavRegion, false>::make_rid() */

ulong __thiscall RID_Alloc<NavRegion,false>::make_rid(RID_Alloc<NavRegion,false> *this)

{
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  NavRegion *this_00;
  char *pcVar14;
  ulong uVar15;
  
  uVar12 = *(uint *)(this + 0x20);
  if (uVar12 == *(uint *)(this + 0x1c)) {
    if (uVar12 == 0) {
      lVar11 = 0;
      uVar15 = 8;
    }
    else {
      uVar15 = (ulong)((int)((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar11 = ((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar3 = Memory::realloc_static(*(void **)(this + 8),uVar15,false);
    *(long *)(this + 8) = lVar3;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x158,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar3 + lVar11) = uVar10;
    lVar4 = Memory::realloc_static(pvVar1,uVar15,false);
    *(long *)(this + 0x10) = lVar4;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar6 = *(uint *)(this + 0x18);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar11) = uVar10;
    if (uVar6 != 0) {
      lVar4 = *(long *)(lVar3 + lVar11);
      lVar5 = 0;
      puVar9 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar11) + 0x150);
      do {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 0x56;
        *(int *)(lVar4 + lVar5 * 4) = *(int *)(this + 0x20) + (int)lVar5;
        uVar6 = *(uint *)(this + 0x18);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar6);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar6;
    uVar12 = *(uint *)(this + 0x20);
  }
  else {
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(uint *)(this + 0x18);
  }
  uVar12 = *(uint *)(*(long *)(lVar3 + ((ulong)uVar12 / (ulong)uVar6) * 8) +
                    ((ulong)uVar12 % (ulong)uVar6) * 4);
  uVar15 = (ulong)uVar12;
  LOCK();
  UNLOCK();
  uVar7 = (int)RID_AllocBase::base_id + 1;
  uVar8 = uVar7 & 0x7fffffff;
  if (uVar8 != 0x7fffffff) {
    lVar11 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar15 % (ulong)uVar6) * 0x158 + *(long *)(lVar11 + (uVar15 / uVar6) * 8) + 0x150) =
         uVar8 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar13 = CONCAT44(uVar7,uVar12) & 0x7fffffffffffffff;
    if ((uVar13 != 0) && ((uint)uVar13 < *(uint *)(this + 0x1c))) {
      this_00 = (NavRegion *)
                ((uVar15 % (ulong)*(uint *)(this + 0x18)) * 0x158 +
                *(long *)(lVar11 + (uVar15 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(this_00 + 0x150) < 0) {
        uVar12 = (uint)(uVar13 >> 0x20);
        if (uVar12 == (*(uint *)(this_00 + 0x150) & 0x7fffffff)) {
          *(uint *)(this_00 + 0x150) = uVar12;
          NavRegion::NavRegion(this_00);
          return uVar13;
        }
        pcVar14 = "Attempting to initialize the wrong RID";
        uVar10 = 0xfc;
      }
      else {
        pcVar14 = "Initializing already initialized RID";
        uVar10 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar10,
                       "Method/function failed. Returning: nullptr",pcVar14,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return uVar13;
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



/* RID_Alloc<NavLink, false>::make_rid() */

ulong __thiscall RID_Alloc<NavLink,false>::make_rid(RID_Alloc<NavLink,false> *this)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  NavLink *this_00;
  char *pcVar14;
  ulong uVar15;
  
  uVar12 = *(uint *)(this + 0x20);
  if (uVar12 == *(uint *)(this + 0x1c)) {
    if (uVar12 == 0) {
      lVar11 = 0;
      uVar15 = 8;
    }
    else {
      uVar15 = (ulong)((int)((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar11 = ((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar15,false);
    *(long *)(this + 8) = lVar5;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 7,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar11) = uVar10;
    lVar5 = Memory::realloc_static(pvVar2,uVar15,false);
    *(long *)(this + 0x10) = lVar5;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    iVar1 = *(int *)(this + 0x18);
    *(undefined8 *)(lVar5 + lVar11) = uVar10;
    if (iVar1 == 0) {
      lVar5 = *(long *)(this + 0x10);
      uVar7 = 0;
    }
    else {
      lVar5 = *(long *)(this + 0x10);
      lVar3 = *(long *)(lVar5 + lVar11);
      lVar11 = *(long *)(*(long *)(this + 8) + lVar11);
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar11 + 0x78 + lVar6 * 0x80) = 0xffffffff;
        *(int *)(lVar3 + lVar6 * 4) = *(int *)(this + 0x20) + (int)lVar6;
        uVar7 = *(uint *)(this + 0x18);
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar7;
    uVar12 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(this + 0x18);
  }
  uVar12 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar12 / (ulong)uVar7) * 8) +
                    ((ulong)uVar12 % (ulong)uVar7) * 4);
  uVar15 = (ulong)uVar12;
  LOCK();
  UNLOCK();
  uVar8 = (int)RID_AllocBase::base_id + 1;
  uVar9 = uVar8 & 0x7fffffff;
  if (uVar9 != 0x7fffffff) {
    lVar11 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar15 % (ulong)uVar7) * 0x80 + *(long *)(lVar11 + (uVar15 / uVar7) * 8) + 0x78) =
         uVar9 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar13 = CONCAT44(uVar8,uVar12) & 0x7fffffffffffffff;
    if ((uVar13 != 0) && ((uint)uVar13 < *(uint *)(this + 0x1c))) {
      this_00 = (NavLink *)
                ((uVar15 % (ulong)*(uint *)(this + 0x18)) * 0x80 +
                *(long *)(lVar11 + (uVar15 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(this_00 + 0x78) < 0) {
        uVar12 = (uint)(uVar13 >> 0x20);
        if (uVar12 == (*(uint *)(this_00 + 0x78) & 0x7fffffff)) {
          *(uint *)(this_00 + 0x78) = uVar12;
          NavLink::NavLink(this_00);
          return uVar13;
        }
        pcVar14 = "Attempting to initialize the wrong RID";
        uVar10 = 0xfc;
      }
      else {
        pcVar14 = "Initializing already initialized RID";
        uVar10 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar10,
                       "Method/function failed. Returning: nullptr",pcVar14,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return uVar13;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* RID_Alloc<NavAgent, false>::make_rid() */

ulong __thiscall RID_Alloc<NavAgent,false>::make_rid(RID_Alloc<NavAgent,false> *this)

{
  NavAgent *this_00;
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  
  uVar12 = *(uint *)(this + 0x20);
  if (uVar12 == *(uint *)(this + 0x1c)) {
    if (uVar12 == 0) {
      lVar11 = 0;
      uVar15 = 8;
    }
    else {
      uVar15 = (ulong)((int)((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar11 = ((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar3 = Memory::realloc_static(*(void **)(this + 8),uVar15,false);
    *(long *)(this + 8) = lVar3;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x208,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar3 + lVar11) = uVar10;
    lVar4 = Memory::realloc_static(pvVar1,uVar15,false);
    *(long *)(this + 0x10) = lVar4;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar6 = *(uint *)(this + 0x18);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar11) = uVar10;
    if (uVar6 != 0) {
      lVar4 = *(long *)(lVar3 + lVar11);
      lVar5 = 0;
      puVar9 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar11) + 0x200);
      do {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 0x82;
        *(int *)(lVar4 + lVar5 * 4) = *(int *)(this + 0x20) + (int)lVar5;
        uVar6 = *(uint *)(this + 0x18);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar6);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar6;
    uVar12 = *(uint *)(this + 0x20);
  }
  else {
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(uint *)(this + 0x18);
  }
  uVar12 = *(uint *)(*(long *)(lVar3 + ((ulong)uVar12 / (ulong)uVar6) * 8) +
                    ((ulong)uVar12 % (ulong)uVar6) * 4);
  uVar15 = (ulong)uVar12;
  LOCK();
  UNLOCK();
  uVar7 = (int)RID_AllocBase::base_id + 1;
  uVar8 = uVar7 & 0x7fffffff;
  if (uVar8 != 0x7fffffff) {
    lVar11 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(*(long *)(lVar11 + (uVar15 / uVar6) * 8) + (uVar15 % (ulong)uVar6) * 0x208 + 0x200) =
         uVar8 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar13 = CONCAT44(uVar7,uVar12) & 0x7fffffffffffffff;
    if ((uVar13 != 0) && ((uint)uVar13 < *(uint *)(this + 0x1c))) {
      this_00 = (NavAgent *)
                (*(long *)(lVar11 + (uVar15 / *(uint *)(this + 0x18)) * 8) +
                (uVar15 % (ulong)*(uint *)(this + 0x18)) * 0x208);
      if ((int)*(uint *)(this_00 + 0x200) < 0) {
        uVar12 = (uint)(uVar13 >> 0x20);
        if (uVar12 == (*(uint *)(this_00 + 0x200) & 0x7fffffff)) {
          *(uint *)(this_00 + 0x200) = uVar12;
          NavAgent::NavAgent(this_00);
          return uVar13;
        }
        pcVar14 = "Attempting to initialize the wrong RID";
        uVar10 = 0xfc;
      }
      else {
        pcVar14 = "Initializing already initialized RID";
        uVar10 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar10,
                       "Method/function failed. Returning: nullptr",pcVar14,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return uVar13;
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



/* RID_Alloc<NavObstacle, false>::make_rid() */

ulong __thiscall RID_Alloc<NavObstacle,false>::make_rid(RID_Alloc<NavObstacle,false> *this)

{
  NavObstacle *this_00;
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  
  uVar12 = *(uint *)(this + 0x20);
  if (uVar12 == *(uint *)(this + 0x1c)) {
    if (uVar12 == 0) {
      lVar11 = 0;
      uVar15 = 8;
    }
    else {
      uVar15 = (ulong)((int)((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar11 = ((ulong)uVar12 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar3 = Memory::realloc_static(*(void **)(this + 8),uVar15,false);
    *(long *)(this + 8) = lVar3;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x88,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar3 + lVar11) = uVar10;
    lVar4 = Memory::realloc_static(pvVar1,uVar15,false);
    *(long *)(this + 0x10) = lVar4;
    uVar10 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar6 = *(uint *)(this + 0x18);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar11) = uVar10;
    if (uVar6 != 0) {
      lVar4 = *(long *)(lVar3 + lVar11);
      lVar5 = 0;
      puVar9 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar11) + 0x80);
      do {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 0x22;
        *(int *)(lVar4 + lVar5 * 4) = *(int *)(this + 0x20) + (int)lVar5;
        uVar6 = *(uint *)(this + 0x18);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar6);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar6;
    uVar12 = *(uint *)(this + 0x20);
  }
  else {
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(uint *)(this + 0x18);
  }
  uVar12 = *(uint *)(*(long *)(lVar3 + ((ulong)uVar12 / (ulong)uVar6) * 8) +
                    ((ulong)uVar12 % (ulong)uVar6) * 4);
  uVar15 = (ulong)uVar12;
  LOCK();
  UNLOCK();
  uVar7 = (int)RID_AllocBase::base_id + 1;
  uVar8 = uVar7 & 0x7fffffff;
  if (uVar8 != 0x7fffffff) {
    lVar11 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(*(long *)(lVar11 + (uVar15 / uVar6) * 8) + (uVar15 % (ulong)uVar6) * 0x88 + 0x80) =
         uVar8 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar13 = CONCAT44(uVar7,uVar12) & 0x7fffffffffffffff;
    if ((uVar13 != 0) && ((uint)uVar13 < *(uint *)(this + 0x1c))) {
      this_00 = (NavObstacle *)
                (*(long *)(lVar11 + (uVar15 / *(uint *)(this + 0x18)) * 8) +
                (uVar15 % (ulong)*(uint *)(this + 0x18)) * 0x88);
      if ((int)*(uint *)(this_00 + 0x80) < 0) {
        uVar12 = (uint)(uVar13 >> 0x20);
        if (uVar12 == (*(uint *)(this_00 + 0x80) & 0x7fffffff)) {
          *(uint *)(this_00 + 0x80) = uVar12;
          NavObstacle::NavObstacle(this_00);
          return uVar13;
        }
        pcVar14 = "Attempting to initialize the wrong RID";
        uVar10 = 0xfc;
      }
      else {
        pcVar14 = "Initializing already initialized RID";
        uVar10 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar10,
                       "Method/function failed. Returning: nullptr",pcVar14,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return uVar13;
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



/* RID_Alloc<NavMeshGeometryParser3D, false>::make_rid() */

ulong __thiscall
RID_Alloc<NavMeshGeometryParser3D,false>::make_rid(RID_Alloc<NavMeshGeometryParser3D,false> *this)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar12 = 0;
      uVar16 = 8;
    }
    else {
      uVar16 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar12 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar16,false);
    *(long *)(this + 8) = lVar5;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 5,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar12) = uVar11;
    lVar5 = Memory::realloc_static(pvVar2,uVar16,false);
    *(long *)(this + 0x10) = lVar5;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    iVar1 = *(int *)(this + 0x18);
    *(undefined8 *)(lVar5 + lVar12) = uVar11;
    if (iVar1 == 0) {
      lVar5 = *(long *)(this + 0x10);
      uVar7 = 0;
    }
    else {
      lVar5 = *(long *)(this + 0x10);
      lVar3 = *(long *)(lVar5 + lVar12);
      lVar12 = *(long *)(*(long *)(this + 8) + lVar12);
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar12 + 0x18 + lVar6 * 0x20) = 0xffffffff;
        *(int *)(lVar3 + lVar6 * 4) = *(int *)(this + 0x20) + (int)lVar6;
        uVar7 = *(uint *)(this + 0x18);
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar7;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar13 / (ulong)uVar7) * 8) +
                    ((ulong)uVar13 % (ulong)uVar7) * 4);
  uVar16 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar8 = (int)RID_AllocBase::base_id + 1;
  uVar9 = uVar8 & 0x7fffffff;
  if (uVar9 != 0x7fffffff) {
    lVar12 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar16 % (ulong)uVar7) * 0x20 + *(long *)(lVar12 + (uVar16 / uVar7) * 8) + 0x18) =
         uVar9 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar8,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar10 = (undefined8 *)
                ((uVar16 % (ulong)*(uint *)(this + 0x18)) * 0x20 +
                *(long *)(lVar12 + (uVar16 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar10 + 3) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar10 + 3) & 0x7fffffff)) {
          *(uint *)(puVar10 + 3) = uVar13;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar11 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar11 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar11,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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



/* void memdelete<NavigationMeshSourceGeometryData3D>(NavigationMeshSourceGeometryData3D*) */

void memdelete<NavigationMeshSourceGeometryData3D>(NavigationMeshSourceGeometryData3D *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  
  cVar6 = predelete_handler((Object *)param_1);
  if (cVar6 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) !=
      NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D) {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    goto LAB_00116cf0;
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_00118c20;
  NavigationMeshSourceGeometryData3D::clear();
  if (*(long *)(param_1 + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x2c0);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      if (lVar3 != 0) {
        lVar8 = 0;
        lVar7 = lVar2;
        do {
          if (*(long *)(lVar7 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar7 + 8);
              *(undefined8 *)(lVar7 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x20;
        } while (lVar3 != lVar8);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x290) == 0) {
LAB_00116cd4:
    lVar2 = *(long *)(param_1 + 0x280);
  }
  else {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00116cd4;
    lVar2 = *(long *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x290) = 0;
    Memory::free_static((void *)(lVar2 + -0x10),false);
    lVar2 = *(long *)(param_1 + 0x280);
  }
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)param_1);
LAB_00116cf0:
  Memory::free_static(param_1,false);
  return;
}



/* RID_Alloc<NavLink, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavLink,false>::~RID_Alloc(RID_Alloc<NavLink,false> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  NavLink *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar8 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118df8;
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_00116eab:
    if ((uint)uVar4 < uVar8) goto LAB_00116eeb;
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
        this_00 = (NavLink *)(puVar5[uVar6 / uVar8] + (uVar6 % (ulong)uVar8) * 0x80);
        if (-1 < *(int *)(this_00 + 0x78)) {
          NavLink::~NavLink(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_00116eab;
    }
    if (uVar8 != 0) goto LAB_00116eeb;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_00116eeb:
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



/* RID_Alloc<NavLink, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavLink,false>::~RID_Alloc(RID_Alloc<NavLink,false> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  NavLink *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar8 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118df8;
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_001170fb:
    if ((uint)uVar4 < uVar8) goto LAB_0011713b;
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
        this_00 = (NavLink *)(puVar5[uVar6 / uVar8] + (uVar6 % (ulong)uVar8) * 0x80);
        if (-1 < *(int *)(this_00 + 0x78)) {
          NavLink::~NavLink(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_001170fb;
    }
    if (uVar8 != 0) goto LAB_0011713b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011713b:
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



/* free_command::exec(GodotNavigationServer3D*) */

void __thiscall free_command::exec(free_command *this,GodotNavigationServer3D *param_1)

{
  GodotNavigationServer3D::_cmd_free(param_1,*(undefined8 *)(this + 8));
  return;
}



/* RID_Alloc<NavRegion, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavRegion,false>::~RID_Alloc(RID_Alloc<NavRegion,false> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  NavRegion *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar8 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e38;
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0011735b:
    if ((uint)uVar4 < uVar8) goto LAB_0011739b;
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
        this_00 = (NavRegion *)((uVar6 % (ulong)uVar8) * 0x158 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x150)) {
          NavRegion::~NavRegion(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0011735b;
    }
    if (uVar8 != 0) goto LAB_0011739b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011739b:
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



/* RID_Alloc<NavRegion, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavRegion,false>::~RID_Alloc(RID_Alloc<NavRegion,false> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  NavRegion *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar8 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00118e38;
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_001175ab:
    if ((uint)uVar4 < uVar8) goto LAB_001175eb;
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
        this_00 = (NavRegion *)((uVar6 % (ulong)uVar8) * 0x158 + puVar5[uVar6 / uVar8]);
        if (-1 < *(int *)(this_00 + 0x150)) {
          NavRegion::~NavRegion(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_001175ab;
    }
    if (uVar8 != 0) goto LAB_001175eb;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_001175eb:
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



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<NavRegion, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavRegion,false>::~RID_Alloc(RID_Alloc<NavRegion,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<NavLink, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavLink,false>::~RID_Alloc(RID_Alloc<NavLink,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<NavObstacle, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavObstacle,false>::~RID_Alloc(RID_Alloc<NavObstacle,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<NavAgent, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavAgent,false>::~RID_Alloc(RID_Alloc<NavAgent,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<NavMap, false>::~RID_Alloc() */

void __thiscall RID_Alloc<NavMap,false>::~RID_Alloc(RID_Alloc<NavMap,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationPathQueryResult3D::~NavigationPathQueryResult3D() */

void __thiscall
NavigationPathQueryResult3D::~NavigationPathQueryResult3D(NavigationPathQueryResult3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_navigation_mesh_command::~region_set_navigation_mesh_command() */

void __thiscall
region_set_navigation_mesh_command::~region_set_navigation_mesh_command
          (region_set_navigation_mesh_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D() */

void __thiscall
NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D
          (NavigationPathQueryParameters3D *this)

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
/* agent_set_avoidance_callback_command::~agent_set_avoidance_callback_command() */

void __thiscall
agent_set_avoidance_callback_command::~agent_set_avoidance_callback_command
          (agent_set_avoidance_callback_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_active_command::~map_set_active_command() */

void __thiscall map_set_active_command::~map_set_active_command(map_set_active_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_up_command::~map_set_up_command() */

void __thiscall map_set_up_command::~map_set_up_command(map_set_up_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_cell_size_command::~map_set_cell_size_command() */

void __thiscall
map_set_cell_size_command::~map_set_cell_size_command(map_set_cell_size_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_cell_height_command::~map_set_cell_height_command() */

void __thiscall
map_set_cell_height_command::~map_set_cell_height_command(map_set_cell_height_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_merge_rasterizer_cell_scale_command::~map_set_merge_rasterizer_cell_scale_command() */

void __thiscall
map_set_merge_rasterizer_cell_scale_command::~map_set_merge_rasterizer_cell_scale_command
          (map_set_merge_rasterizer_cell_scale_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_use_edge_connections_command::~map_set_use_edge_connections_command() */

void __thiscall
map_set_use_edge_connections_command::~map_set_use_edge_connections_command
          (map_set_use_edge_connections_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_edge_connection_margin_command::~map_set_edge_connection_margin_command() */

void __thiscall
map_set_edge_connection_margin_command::~map_set_edge_connection_margin_command
          (map_set_edge_connection_margin_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_link_connection_radius_command::~map_set_link_connection_radius_command() */

void __thiscall
map_set_link_connection_radius_command::~map_set_link_connection_radius_command
          (map_set_link_connection_radius_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* map_set_use_async_iterations_command::~map_set_use_async_iterations_command() */

void __thiscall
map_set_use_async_iterations_command::~map_set_use_async_iterations_command
          (map_set_use_async_iterations_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_enabled_command::~region_set_enabled_command() */

void __thiscall
region_set_enabled_command::~region_set_enabled_command(region_set_enabled_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_use_edge_connections_command::~region_set_use_edge_connections_command() */

void __thiscall
region_set_use_edge_connections_command::~region_set_use_edge_connections_command
          (region_set_use_edge_connections_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_map_command::~region_set_map_command() */

void __thiscall region_set_map_command::~region_set_map_command(region_set_map_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_transform_command::~region_set_transform_command() */

void __thiscall
region_set_transform_command::~region_set_transform_command(region_set_transform_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_enter_cost_command::~region_set_enter_cost_command() */

void __thiscall
region_set_enter_cost_command::~region_set_enter_cost_command(region_set_enter_cost_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_travel_cost_command::~region_set_travel_cost_command() */

void __thiscall
region_set_travel_cost_command::~region_set_travel_cost_command
          (region_set_travel_cost_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_owner_id_command::~region_set_owner_id_command() */

void __thiscall
region_set_owner_id_command::~region_set_owner_id_command(region_set_owner_id_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* region_set_navigation_layers_command::~region_set_navigation_layers_command() */

void __thiscall
region_set_navigation_layers_command::~region_set_navigation_layers_command
          (region_set_navigation_layers_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_map_command::~link_set_map_command() */

void __thiscall link_set_map_command::~link_set_map_command(link_set_map_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_enabled_command::~link_set_enabled_command() */

void __thiscall link_set_enabled_command::~link_set_enabled_command(link_set_enabled_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_bidirectional_command::~link_set_bidirectional_command() */

void __thiscall
link_set_bidirectional_command::~link_set_bidirectional_command
          (link_set_bidirectional_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_navigation_layers_command::~link_set_navigation_layers_command() */

void __thiscall
link_set_navigation_layers_command::~link_set_navigation_layers_command
          (link_set_navigation_layers_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_start_position_command::~link_set_start_position_command() */

void __thiscall
link_set_start_position_command::~link_set_start_position_command
          (link_set_start_position_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_end_position_command::~link_set_end_position_command() */

void __thiscall
link_set_end_position_command::~link_set_end_position_command(link_set_end_position_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_enter_cost_command::~link_set_enter_cost_command() */

void __thiscall
link_set_enter_cost_command::~link_set_enter_cost_command(link_set_enter_cost_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_travel_cost_command::~link_set_travel_cost_command() */

void __thiscall
link_set_travel_cost_command::~link_set_travel_cost_command(link_set_travel_cost_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* link_set_owner_id_command::~link_set_owner_id_command() */

void __thiscall
link_set_owner_id_command::~link_set_owner_id_command(link_set_owner_id_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_avoidance_enabled_command::~agent_set_avoidance_enabled_command() */

void __thiscall
agent_set_avoidance_enabled_command::~agent_set_avoidance_enabled_command
          (agent_set_avoidance_enabled_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_use_3d_avoidance_command::~agent_set_use_3d_avoidance_command() */

void __thiscall
agent_set_use_3d_avoidance_command::~agent_set_use_3d_avoidance_command
          (agent_set_use_3d_avoidance_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_map_command::~agent_set_map_command() */

void __thiscall agent_set_map_command::~agent_set_map_command(agent_set_map_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_paused_command::~agent_set_paused_command() */

void __thiscall agent_set_paused_command::~agent_set_paused_command(agent_set_paused_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_neighbor_distance_command::~agent_set_neighbor_distance_command() */

void __thiscall
agent_set_neighbor_distance_command::~agent_set_neighbor_distance_command
          (agent_set_neighbor_distance_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_max_neighbors_command::~agent_set_max_neighbors_command() */

void __thiscall
agent_set_max_neighbors_command::~agent_set_max_neighbors_command
          (agent_set_max_neighbors_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_time_horizon_agents_command::~agent_set_time_horizon_agents_command() */

void __thiscall
agent_set_time_horizon_agents_command::~agent_set_time_horizon_agents_command
          (agent_set_time_horizon_agents_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_time_horizon_obstacles_command::~agent_set_time_horizon_obstacles_command() */

void __thiscall
agent_set_time_horizon_obstacles_command::~agent_set_time_horizon_obstacles_command
          (agent_set_time_horizon_obstacles_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_radius_command::~agent_set_radius_command() */

void __thiscall agent_set_radius_command::~agent_set_radius_command(agent_set_radius_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_height_command::~agent_set_height_command() */

void __thiscall agent_set_height_command::~agent_set_height_command(agent_set_height_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_max_speed_command::~agent_set_max_speed_command() */

void __thiscall
agent_set_max_speed_command::~agent_set_max_speed_command(agent_set_max_speed_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_velocity_command::~agent_set_velocity_command() */

void __thiscall
agent_set_velocity_command::~agent_set_velocity_command(agent_set_velocity_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_velocity_forced_command::~agent_set_velocity_forced_command() */

void __thiscall
agent_set_velocity_forced_command::~agent_set_velocity_forced_command
          (agent_set_velocity_forced_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_position_command::~agent_set_position_command() */

void __thiscall
agent_set_position_command::~agent_set_position_command(agent_set_position_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_avoidance_layers_command::~agent_set_avoidance_layers_command() */

void __thiscall
agent_set_avoidance_layers_command::~agent_set_avoidance_layers_command
          (agent_set_avoidance_layers_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_avoidance_mask_command::~agent_set_avoidance_mask_command() */

void __thiscall
agent_set_avoidance_mask_command::~agent_set_avoidance_mask_command
          (agent_set_avoidance_mask_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* agent_set_avoidance_priority_command::~agent_set_avoidance_priority_command() */

void __thiscall
agent_set_avoidance_priority_command::~agent_set_avoidance_priority_command
          (agent_set_avoidance_priority_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_avoidance_enabled_command::~obstacle_set_avoidance_enabled_command() */

void __thiscall
obstacle_set_avoidance_enabled_command::~obstacle_set_avoidance_enabled_command
          (obstacle_set_avoidance_enabled_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_use_3d_avoidance_command::~obstacle_set_use_3d_avoidance_command() */

void __thiscall
obstacle_set_use_3d_avoidance_command::~obstacle_set_use_3d_avoidance_command
          (obstacle_set_use_3d_avoidance_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_map_command::~obstacle_set_map_command() */

void __thiscall obstacle_set_map_command::~obstacle_set_map_command(obstacle_set_map_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_paused_command::~obstacle_set_paused_command() */

void __thiscall
obstacle_set_paused_command::~obstacle_set_paused_command(obstacle_set_paused_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_radius_command::~obstacle_set_radius_command() */

void __thiscall
obstacle_set_radius_command::~obstacle_set_radius_command(obstacle_set_radius_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_height_command::~obstacle_set_height_command() */

void __thiscall
obstacle_set_height_command::~obstacle_set_height_command(obstacle_set_height_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_velocity_command::~obstacle_set_velocity_command() */

void __thiscall
obstacle_set_velocity_command::~obstacle_set_velocity_command(obstacle_set_velocity_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_position_command::~obstacle_set_position_command() */

void __thiscall
obstacle_set_position_command::~obstacle_set_position_command(obstacle_set_position_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* obstacle_set_avoidance_layers_command::~obstacle_set_avoidance_layers_command() */

void __thiscall
obstacle_set_avoidance_layers_command::~obstacle_set_avoidance_layers_command
          (obstacle_set_avoidance_layers_command *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* free_command::~free_command() */

void __thiscall free_command::~free_command(free_command *this)

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



