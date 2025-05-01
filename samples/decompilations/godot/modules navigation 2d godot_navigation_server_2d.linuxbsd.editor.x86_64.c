
/* GodotNavigationServer2D::sync() */

void __thiscall GodotNavigationServer2D::sync(GodotNavigationServer2D *this)

{
  if (*(long *)(this + 0x178) != 0) {
    NavMeshGenerator2D::sync();
    return;
  }
  return;
}



/* GodotNavigationServer2D::get_maps() const */

GodotNavigationServer2D * __thiscall
GodotNavigationServer2D::get_maps(GodotNavigationServer2D *this)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x150))(this,plVar2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::map_get_links(RID) const */

undefined8
GodotNavigationServer2D::map_get_links(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x208))(param_1,plVar2,param_3);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::map_get_regions(RID) const */

undefined8
GodotNavigationServer2D::map_get_regions(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x210))(param_1,plVar2,param_3);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::map_get_agents(RID) const */

undefined8
GodotNavigationServer2D::map_get_agents(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x218))(param_1,plVar2,param_3);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::map_get_obstacles(RID) const */

undefined8
GodotNavigationServer2D::map_get_obstacles(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x220))(param_1,plVar2,param_3);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_map(RID) const */

void __thiscall GodotNavigationServer2D::region_get_map(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010020e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_get_map(RID) const */

void __thiscall GodotNavigationServer2D::agent_get_map(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010022e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3d8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_create() */

void GodotNavigationServer2D::map_create(void)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010024e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x158))(plVar1);
  return;
}



/* GodotNavigationServer2D::map_set_active(RID, bool) */

void __thiscall
GodotNavigationServer2D::map_set_active(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010027d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x160))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::map_is_active(RID) const */

void __thiscall GodotNavigationServer2D::map_is_active(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010029e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x168))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_force_update(RID) */

void __thiscall GodotNavigationServer2D::map_force_update(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001002be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x228))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_get_iteration_id(RID) const */

void __thiscall GodotNavigationServer2D::map_get_iteration_id(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001002de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x230))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_set_use_async_iterations(RID, bool) */

void __thiscall
GodotNavigationServer2D::map_set_use_async_iterations
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010030d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x238))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::map_get_use_async_iterations(RID) const */

void __thiscall
GodotNavigationServer2D::map_get_use_async_iterations(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010032e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x240))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_set_cell_size(RID, float) */

void __thiscall
GodotNavigationServer2D::map_set_cell_size(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x180))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::map_get_cell_size(RID) const */

void __thiscall GodotNavigationServer2D::map_get_cell_size(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010038e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x188))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_set_use_edge_connections(RID, bool) */

void __thiscall
GodotNavigationServer2D::map_set_use_edge_connections
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::map_get_use_edge_connections(RID) const */

void __thiscall
GodotNavigationServer2D::map_get_use_edge_connections(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_set_edge_connection_margin(RID, float) */

void __thiscall
GodotNavigationServer2D::map_set_edge_connection_margin
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1c0))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::map_get_edge_connection_margin(RID) const */

void __thiscall
GodotNavigationServer2D::map_get_edge_connection_margin(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010043e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_set_link_connection_radius(RID, float) */

void __thiscall
GodotNavigationServer2D::map_set_link_connection_radius
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1d0))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::map_get_link_connection_radius(RID) const */

void __thiscall
GodotNavigationServer2D::map_get_link_connection_radius(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010049e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1d8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_create() */

void GodotNavigationServer2D::region_create(void)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001004be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x250))(plVar1);
  return;
}



/* GodotNavigationServer2D::region_set_enabled(RID, bool) */

void __thiscall
GodotNavigationServer2D::region_set_enabled
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001004ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 600))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::region_get_enabled(RID) const */

void __thiscall GodotNavigationServer2D::region_get_enabled(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010050e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x260))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_set_use_edge_connections(RID, bool) */

void __thiscall
GodotNavigationServer2D::region_set_use_edge_connections
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010053d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x268))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::region_get_use_edge_connections(RID) const */

void __thiscall
GodotNavigationServer2D::region_get_use_edge_connections(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010055e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x270))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_set_enter_cost(RID, float) */

void __thiscall
GodotNavigationServer2D::region_set_enter_cost
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x278))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::region_get_enter_cost(RID) const */

void __thiscall
GodotNavigationServer2D::region_get_enter_cost(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001005be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x280))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_set_travel_cost(RID, float) */

void __thiscall
GodotNavigationServer2D::region_set_travel_cost
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001005f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x288))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::region_get_travel_cost(RID) const */

void __thiscall
GodotNavigationServer2D::region_get_travel_cost(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010061e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_set_owner_id(RID, ObjectID) */

void __thiscall
GodotNavigationServer2D::region_set_owner_id
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010064e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x298))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::region_get_owner_id(RID) const */

void __thiscall GodotNavigationServer2D::region_get_owner_id(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010066e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_set_map(RID, RID) */

void __thiscall
GodotNavigationServer2D::region_set_map(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010069e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::region_set_navigation_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer2D::region_set_navigation_layers
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001006cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::region_get_navigation_layers(RID) const */

void __thiscall
GodotNavigationServer2D::region_get_navigation_layers(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001006ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::region_get_connections_count(RID) const */

void __thiscall
GodotNavigationServer2D::region_get_connections_count(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010070e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2f0))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_create() */

void GodotNavigationServer2D::link_create(void)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010072e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x330))(plVar1);
  return;
}



/* GodotNavigationServer2D::link_set_map(RID, RID) */

void __thiscall
GodotNavigationServer2D::link_set_map(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010075e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x338))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::link_get_map(RID) const */

void __thiscall GodotNavigationServer2D::link_get_map(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010077e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x340))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_set_enabled(RID, bool) */

void __thiscall
GodotNavigationServer2D::link_set_enabled(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001007ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x348))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::link_get_enabled(RID) const */

void __thiscall GodotNavigationServer2D::link_get_enabled(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001007ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x350))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_set_bidirectional(RID, bool) */

void __thiscall
GodotNavigationServer2D::link_set_bidirectional
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001007fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x358))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::link_is_bidirectional(RID) const */

void __thiscall
GodotNavigationServer2D::link_is_bidirectional(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010081e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x360))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_set_navigation_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer2D::link_set_navigation_layers
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010084c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x368))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::link_get_navigation_layers(RID) const */

void __thiscall
GodotNavigationServer2D::link_get_navigation_layers(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010086e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x370))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_set_enter_cost(RID, float) */

void __thiscall
GodotNavigationServer2D::link_set_enter_cost
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001008a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x398))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::link_get_enter_cost(RID) const */

void __thiscall GodotNavigationServer2D::link_get_enter_cost(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001008ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3a0))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_set_travel_cost(RID, float) */

void __thiscall
GodotNavigationServer2D::link_set_travel_cost
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3a8))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::link_get_travel_cost(RID) const */

void __thiscall GodotNavigationServer2D::link_get_travel_cost(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010092e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3b0))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::link_set_owner_id(RID, ObjectID) */

void __thiscall
GodotNavigationServer2D::link_set_owner_id(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010095e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3b8))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::link_get_owner_id(RID) const */

void __thiscall GodotNavigationServer2D::link_get_owner_id(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010097e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3c0))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_create() */

void GodotNavigationServer2D::agent_create(void)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010099e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3c8))(plVar1);
  return;
}



/* GodotNavigationServer2D::agent_set_avoidance_enabled(RID, bool) */

void __thiscall
GodotNavigationServer2D::agent_set_avoidance_enabled
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001009cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3f0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_avoidance_enabled(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_avoidance_enabled(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001009ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3f8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_map(RID, RID) */

void __thiscall
GodotNavigationServer2D::agent_set_map(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3d0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::agent_set_neighbor_distance(RID, float) */

void __thiscall
GodotNavigationServer2D::agent_set_neighbor_distance
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x410))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_neighbor_distance(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_neighbor_distance(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x418))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_max_neighbors(RID, int) */

void __thiscall
GodotNavigationServer2D::agent_set_max_neighbors
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x420))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_max_neighbors(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_max_neighbors(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x428))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_time_horizon_agents(RID, float) */

void __thiscall
GodotNavigationServer2D::agent_set_time_horizon_agents
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x430))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_time_horizon_agents(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_time_horizon_agents(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x438))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_time_horizon_obstacles(RID, float) */

void __thiscall
GodotNavigationServer2D::agent_set_time_horizon_obstacles
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x440))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_time_horizon_obstacles(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_time_horizon_obstacles(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x448))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_radius(RID, float) */

void __thiscall
GodotNavigationServer2D::agent_set_radius(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x450))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_radius(RID) const */

void __thiscall GodotNavigationServer2D::agent_get_radius(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x458))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_max_speed(RID, float) */

void __thiscall
GodotNavigationServer2D::agent_set_max_speed
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x470))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_max_speed(RID) const */

void __thiscall GodotNavigationServer2D::agent_get_max_speed(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x478))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_is_map_changed(RID) const */

void __thiscall GodotNavigationServer2D::agent_is_map_changed(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_paused(RID, bool) */

void __thiscall
GodotNavigationServer2D::agent_set_paused(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3e0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_paused(RID) const */

void __thiscall GodotNavigationServer2D::agent_get_paused(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 1000))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_has_avoidance_callback(RID) const */

void __thiscall
GodotNavigationServer2D::agent_has_avoidance_callback(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4b8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_avoidance_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer2D::agent_set_avoidance_layers
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4c0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_avoidance_layers(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_avoidance_layers(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4c8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_avoidance_mask(RID, unsigned int) */

void __thiscall
GodotNavigationServer2D::agent_set_avoidance_mask
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4d0))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_avoidance_mask(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_avoidance_mask(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4d8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::agent_set_avoidance_priority(RID, float) */

void __thiscall
GodotNavigationServer2D::agent_set_avoidance_priority
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4e0))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::agent_get_avoidance_priority(RID) const */

void __thiscall
GodotNavigationServer2D::agent_get_avoidance_priority(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4e8))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::obstacle_create() */

void GodotNavigationServer2D::obstacle_create(void)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4f0))(plVar1);
  return;
}



/* GodotNavigationServer2D::obstacle_set_avoidance_enabled(RID, bool) */

void __thiscall
GodotNavigationServer2D::obstacle_set_avoidance_enabled
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x518))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::obstacle_get_avoidance_enabled(RID) const */

void __thiscall
GodotNavigationServer2D::obstacle_get_avoidance_enabled(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x520))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::obstacle_set_map(RID, RID) */

void __thiscall
GodotNavigationServer2D::obstacle_set_map(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4f8))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::obstacle_get_map(RID) const */

void __thiscall GodotNavigationServer2D::obstacle_get_map(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x500))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::obstacle_set_paused(RID, bool) */

void __thiscall
GodotNavigationServer2D::obstacle_set_paused
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x508))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::obstacle_get_paused(RID) const */

void __thiscall GodotNavigationServer2D::obstacle_get_paused(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x510))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::obstacle_set_radius(RID, float) */

void __thiscall
GodotNavigationServer2D::obstacle_set_radius
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x538))(param_1,plVar1,param_3);
  return;
}



/* GodotNavigationServer2D::obstacle_get_radius(RID) const */

void __thiscall GodotNavigationServer2D::obstacle_get_radius(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x540))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::obstacle_set_avoidance_layers(RID, unsigned int) */

void __thiscall
GodotNavigationServer2D::obstacle_set_avoidance_layers
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x588))(plVar1,param_2,param_3);
  return;
}



/* GodotNavigationServer2D::obstacle_get_avoidance_layers(RID) const */

void __thiscall
GodotNavigationServer2D::obstacle_get_avoidance_layers(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x590))(plVar1,param_2);
  return;
}



/* GodotNavigationServer2D::map_get_closest_point_owner(RID, Vector2 const&) const */

void __thiscall
GodotNavigationServer2D::map_get_closest_point_owner
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)NavigationServer3D::get_singleton();
  local_24 = param_3[1];
  local_2c = *param_3;
  local_28 = 0;
  (**(code **)(*plVar1 + 0x200))(plVar1,param_2,&local_2c);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_owns_point(RID, Vector2 const&) const */

void __thiscall
GodotNavigationServer2D::region_owns_point
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)NavigationServer3D::get_singleton();
  local_24 = param_3[1];
  local_2c = *param_3;
  local_28 = 0;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2,&local_2c);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::link_set_start_position(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::link_set_start_position
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x378))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::link_set_end_position(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::link_set_end_position(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::agent_set_velocity_forced(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::agent_set_velocity_forced
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x480))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::agent_set_velocity(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::agent_set_velocity(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x488))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::agent_set_position(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::agent_set_position(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x498))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::obstacle_set_velocity(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::obstacle_set_velocity(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x558))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::obstacle_set_position(RID, Vector2) */

void __thiscall
GodotNavigationServer2D::obstacle_set_position(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x568))(param_1 & 0xffffffff,(int)(param_1 >> 0x20),plVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}



/* GodotNavigationServer2D::map_get_closest_point(RID, Vector2 const&) const */

undefined8 __thiscall
GodotNavigationServer2D::map_get_closest_point
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)NavigationServer3D::get_singleton();
  uVar2 = *param_3;
  local_30 = param_3[1];
  local_34 = 0;
  local_38 = uVar2;
  local_2c = (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(uVar2,(int)local_2c);
  }
  local_24 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::map_get_random_point(RID, unsigned int, bool) const */

undefined8
GodotNavigationServer2D::map_get_random_point
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,param_4,param_5,param_6);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_connection_pathway_start(RID, int) const */

undefined8
GodotNavigationServer2D::region_get_connection_pathway_start
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x2f8))(plVar2,param_4,param_5);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_connection_pathway_end(RID, int) const */

undefined8
GodotNavigationServer2D::region_get_connection_pathway_end
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x300))(plVar2,param_4,param_5);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_closest_point(RID, Vector2 const&) const */

undefined8 __thiscall
GodotNavigationServer2D::region_get_closest_point
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)NavigationServer3D::get_singleton();
  uVar3 = *param_3;
  local_24 = param_3[1];
  local_28 = 0;
  local_2c = uVar3;
  uVar2 = (**(code **)(*plVar1 + 0x310))(plVar1,param_2,&local_2c);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_random_point(RID, unsigned int, bool) const */

undefined8
GodotNavigationServer2D::region_get_random_point
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 800))(plVar2,param_4,param_5,param_6);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::link_get_start_position(RID) const */

undefined8
GodotNavigationServer2D::link_get_start_position
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x380))(plVar2,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::link_get_end_position(RID) const */

undefined8
GodotNavigationServer2D::link_get_end_position
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x390))(plVar2,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::agent_get_velocity(RID) const */

undefined8
GodotNavigationServer2D::agent_get_velocity
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x490))(plVar2,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::agent_get_position(RID) const */

undefined8
GodotNavigationServer2D::agent_get_position
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x4a0))(plVar2,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::obstacle_get_velocity(RID) const */

undefined8
GodotNavigationServer2D::obstacle_get_velocity
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x560))(plVar2,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::obstacle_get_position(RID) const */

undefined8
GodotNavigationServer2D::obstacle_get_position
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x570))(plVar2,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(param_2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_bounds(RID) const */

undefined1  [16] __thiscall
GodotNavigationServer2D::region_get_bounds(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x328))(local_28,plVar2,param_2);
  auVar1._4_4_ = local_20;
  auVar1._0_4_ = local_28[0];
  auVar1._8_4_ = local_1c;
  auVar1._12_4_ = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_get_transform(RID) const */

float * GodotNavigationServer2D::region_get_transform
                  (float *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar1 + 0x2d8))(&local_58,plVar1,param_3);
  *(ulong *)(param_1 + 4) = CONCAT44(fStack_2c,fStack_34);
  *param_1 = (fStack_54 * 0.0 + local_58 + fStack_50 * 0.0 + fStack_34) - fStack_34;
  param_1[1] = (fStack_44 * 0.0 + local_40 + local_38 * 0.0 + fStack_2c) - fStack_2c;
  param_1[2] = (fStack_54 * 0.0 + local_58 * 0.0 + fStack_50 + fStack_34) - fStack_34;
  param_1[3] = (fStack_44 * 0.0 + local_40 * 0.0 + local_38 + fStack_2c) - fStack_2c;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::~GodotNavigationServer2D() */

void __thiscall GodotNavigationServer2D::~GodotNavigationServer2D(GodotNavigationServer2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b458;
  NavigationServer2D::~NavigationServer2D((NavigationServer2D *)this);
  return;
}



/* GodotNavigationServer2D::~GodotNavigationServer2D() */

void __thiscall GodotNavigationServer2D::~GodotNavigationServer2D(GodotNavigationServer2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b458;
  NavigationServer2D::~NavigationServer2D((NavigationServer2D *)this);
  operator_delete(this,0x180);
  return;
}



/* GodotNavigationServer2D::region_set_transform(RID, Transform2D) */

void GodotNavigationServer2D::region_set_transform(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined4 in_stack_00000018;
  undefined4 local_a4;
  undefined4 local_a0;
  Vector3 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  ulong local_68;
  undefined4 uStack_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  local_a0 = 0;
  local_a4 = in_stack_00000018;
  local_78 = 0x3f800000;
  pcVar1 = *(code **)(*plVar2 + 0x2d0);
  local_98 = (Vector3  [16])ZEXT416(_LC1);
  local_88 = ZEXT416(_LC1);
  fVar3 = (float)Transform2D::get_rotation();
  uStack_60 = 0;
  local_68 = _LC3;
  Basis::rotate(local_98,fVar3);
  local_68 = Transform2D::get_scale();
  uStack_60 = (undefined4)(local_68 >> 0x20);
  local_68 = local_68 & 0xffffffff;
  Basis::scale(local_98);
  Transform3D::Transform3D((Transform3D *)&local_68,(Basis *)local_98,(Vector3 *)&local_a4);
  (*pcVar1)(plVar2,param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer2D::free(RID) */

void __thiscall GodotNavigationServer2D::free(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  
  if (((NavigationServer2D::generator_parsers._4_4_ <= (uint)param_2) ||
      (param_2 >> 0x20 == 0x7fffffff)) ||
     (uVar8 = (uint)(param_2 >> 0x20),
     uVar8 != (*(uint *)(((param_2 & 0xffffffff) %
                         (ulong)(uint)NavigationServer2D::generator_parsers) * 0x20 +
                         *(long *)(NavigationServer2D::geometry_parser_rwlock +
                                  ((param_2 & 0xffffffff) /
                                  (ulong)(uint)NavigationServer2D::generator_parsers) * 8) + 0x18) &
              0x7fffffff))) {
    plVar6 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00101d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x598))(plVar6,param_2);
    return;
  }
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
  uVar3 = NavigationServer2D::generator_parsers._4_4_;
  uVar2 = (uint)NavigationServer2D::generator_parsers;
  lVar11 = NavigationServer2D::geometry_parser_rwlock;
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if ((param_2 != 0) && ((uint)param_2 < NavigationServer2D::generator_parsers._4_4_)) {
    puVar9 = (ulong *)(((param_2 & 0xffffffff) % (ulong)(uint)NavigationServer2D::generator_parsers)
                       * 0x20 + *(long *)(NavigationServer2D::geometry_parser_rwlock +
                                         ((param_2 & 0xffffffff) /
                                         (ulong)(uint)NavigationServer2D::generator_parsers) * 8));
    if (uVar8 == (uint)puVar9[3]) {
      lVar10 = CONCAT44(uRam000000000010f0ac,_memmove);
      uVar7 = 0;
      uVar8 = (uint)NavigationServer2D::generator_parsers;
      if ((uint)NavigationServer2D::generator_parsers != 0) {
        do {
          if (puVar9 == *(ulong **)(lVar10 + uVar7 * 8)) {
            uVar8 = (uint)NavigationServer2D::generator_parsers - 1;
            uVar5 = (uint)uVar7;
            if (uVar5 < uVar8) {
              iVar4 = (uint)NavigationServer2D::generator_parsers - 2;
              NavigationServer2D::generator_parsers._0_4_ = uVar8;
              memmove((void *)(lVar10 + uVar7 * 8),(void *)(lVar10 + (ulong)(uVar5 + 1) * 8),
                      (ulong)(iVar4 - uVar5) * 8 + 8);
              uVar8 = (uint)NavigationServer2D::generator_parsers;
            }
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != (uint)NavigationServer2D::generator_parsers);
      }
      NavigationServer2D::generator_parsers._0_4_ = uVar8;
      uVar7 = *puVar9;
      if ((uint)uVar7 < uVar3) {
        uVar1 = (uVar7 & 0xffffffff) / (ulong)uVar2;
        lVar10 = ((uVar7 & 0xffffffff) % (ulong)uVar2) * 0x20;
        lVar11 = *(long *)(lVar11 + uVar1 * 8) + lVar10;
        iVar4 = *(int *)(lVar11 + 0x18);
        if (iVar4 < 0) {
          _err_print_error(&_LC10,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                           "Attempted to free an uninitialized or invalid RID",0,0);
        }
        else if ((int)(uVar7 >> 0x20) == iVar4) {
          Callable::~Callable((Callable *)(lVar11 + 8));
          lVar11 = _pthread_rwlock_wrlock;
          *(undefined4 *)
           (*(long *)(NavigationServer2D::geometry_parser_rwlock + uVar1 * 8) + 0x18 + lVar10) =
               0xffffffff;
          _memmove = _memmove - 1;
          *(uint *)(*(long *)(lVar11 + ((ulong)_memmove /
                                       (ulong)(uint)NavigationServer2D::generator_parsers) * 8) +
                   ((ulong)_memmove % (ulong)(uint)NavigationServer2D::generator_parsers) * 4) =
               (uint)uVar7;
        }
        else {
          _err_print_error(&_LC10,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0
                          );
        }
      }
      else {
        _err_print_error(&_LC10,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
      }
      goto LAB_00101ea0;
    }
    if ((uint)puVar9[3] + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error(&_LC10,"modules/navigation/2d/godot_navigation_server_2d.cpp",0x1a4,
                   "Parameter \"parser\" is null.",0,0);
LAB_00101ea0:
  pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
  return;
}



/* GodotNavigationServer2D::agent_set_avoidance_callback(RID, Callable) */

void __thiscall
GodotNavigationServer2D::agent_set_avoidance_callback
          (undefined8 param_1,undefined8 param_2,Callable *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x4b0);
  Callable::Callable(aCStack_48,param_3);
  (*pcVar1)(plVar2,param_2,aCStack_48);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::finish() */

void __thiscall GodotNavigationServer2D::finish(GodotNavigationServer2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x178) != 0) {
    NavMeshGenerator2D::finish();
    pOVar1 = *(Object **)(this + 0x178);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    *(undefined8 *)(this + 0x178) = 0;
    return;
  }
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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



/* GodotNavigationServer2D::source_geometry_parser_set_callback(RID, Callable const&) */

void __thiscall
GodotNavigationServer2D::source_geometry_parser_set_callback
          (undefined8 param_1,ulong param_2,Callable *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
  if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  if ((param_2 != 0) && ((uint)param_2 < NavigationServer2D::generator_parsers._4_4_)) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)(uint)NavigationServer2D::generator_parsers) * 0x20 +
            *(long *)(NavigationServer2D::geometry_parser_rwlock +
                     ((param_2 & 0xffffffff) / (ulong)(uint)NavigationServer2D::generator_parsers) *
                     8);
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      Callable::operator=((Callable *)(lVar2 + 8),param_3);
      goto LAB_00102238;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("source_geometry_parser_set_callback",
                   "modules/navigation/2d/godot_navigation_server_2d.cpp",0x223,
                   "Parameter \"parser\" is null.",0,0);
LAB_00102238:
  pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
  return;
}



/* GodotNavigationServer2D::is_baking_navigation_polygon(Ref<NavigationPolygon>) const */

undefined4 __thiscall
GodotNavigationServer2D::is_baking_navigation_polygon(undefined8 param_1,long *param_2)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  NavMeshGenerator2D::get_singleton();
  local_28 = (Object *)0x0;
  if ((Object *)*param_2 != (Object *)0x0) {
    local_28 = (Object *)*param_2;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_28 = (Object *)0x0;
    }
  }
  uVar3 = NavMeshGenerator2D::is_baking(&local_28);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer2D::init() */

void __thiscall GodotNavigationServer2D::init(GodotNavigationServer2D *this)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  NavMeshGenerator2D *this_00;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint local_38;
  uint uStack_34;
  void *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (NavMeshGenerator2D *)operator_new(0x178,"");
  NavMeshGenerator2D::NavMeshGenerator2D(this_00);
  postinitialize_handler((Object *)this_00);
  *(NavMeshGenerator2D **)(this + 0x178) = this_00;
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
    uVar2 = (uint)NavigationServer2D::generator_parsers;
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  local_38 = 0;
  uStack_34 = 0;
  local_30 = (void *)0x0;
  if ((uint)NavigationServer2D::generator_parsers != 0) {
    uVar5 = (uint)NavigationServer2D::generator_parsers - 1 |
            (uint)NavigationServer2D::generator_parsers - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 >> 8 | uVar5;
    uStack_34 = (uVar5 | uVar5 >> 0x10) + 1;
    local_38 = 0;
    local_30 = (void *)Memory::realloc_static((void *)0x0,(ulong)uStack_34 * 8,false);
    lVar3 = _memmove;
    if (local_30 == (void *)0x0) {
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar7 = (ulong)(uint)NavigationServer2D::generator_parsers;
    local_38 = uVar2;
    if ((uint)NavigationServer2D::generator_parsers != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)((long)local_30 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != uVar7 << 3);
    }
  }
  NavMeshGenerator2D::set_generator_parsers(&local_38);
  if (local_30 != (void *)0x0) {
    if (local_38 != 0) {
      local_38 = 0;
    }
    Memory::free_static(local_30,false);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

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



/* GodotNavigationServer2D::GodotNavigationServer2D() */

void __thiscall GodotNavigationServer2D::GodotNavigationServer2D(GodotNavigationServer2D *this)

{
  NavigationServer2D::NavigationServer2D((NavigationServer2D *)this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b458;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer2D::source_geometry_parser_create() */

ulong GodotNavigationServer2D::source_geometry_parser_create(void)

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
  iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar5 = RID_Alloc<NavMeshGeometryParser2D,false>::make_rid
                    ((RID_Alloc<NavMeshGeometryParser2D,false> *)
                     &NavigationServer2D::geometry_parser_owner);
  uVar6 = (uint)NavigationServer2D::generator_parsers;
  if ((uVar5 != 0) && ((uint)uVar5 < NavigationServer2D::generator_parsers._4_4_)) {
    puVar9 = (ulong *)(((uVar5 & 0xffffffff) % (ulong)(uint)NavigationServer2D::generator_parsers) *
                       0x20 + *(long *)(NavigationServer2D::geometry_parser_rwlock +
                                       ((uVar5 & 0xffffffff) /
                                       (ulong)(uint)NavigationServer2D::generator_parsers) * 8));
    if ((int)puVar9[3] == (int)(uVar5 >> 0x20)) {
      bVar10 = (uint)NavigationServer2D::generator_parsers ==
               NavigationServer2D::generator_parsers._4_4_;
      *puVar9 = uVar5;
      if (bVar10) {
        uVar6 = uVar6 * 2;
        uVar8 = (ulong)uVar6;
        if (uVar6 == 0) {
          uVar8 = 1;
        }
        NavigationServer2D::generator_parsers._4_4_ = (uint)uVar8;
        _memmove = (void *)Memory::realloc_static(_memmove,uVar8 * 8,false);
        uVar6 = (uint)NavigationServer2D::generator_parsers;
        if (_memmove == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      NavigationServer2D::generator_parsers._0_4_ = uVar6 + 1;
      *(ulong **)((long)_memmove + (ulong)uVar6 * 8) = puVar9;
      NavMeshGenerator2D::get_singleton();
      uVar6 = (uint)NavigationServer2D::generator_parsers;
      local_38 = 0;
      uStack_34 = 0;
      local_30 = (void *)0x0;
      if ((uint)NavigationServer2D::generator_parsers != 0) {
        uVar4 = (uint)NavigationServer2D::generator_parsers - 1 |
                (uint)NavigationServer2D::generator_parsers - 1 >> 1;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 >> 4 | uVar4;
        uVar4 = uVar4 >> 8 | uVar4;
        uStack_34 = (uVar4 | uVar4 >> 0x10) + 1;
        local_38 = 0;
        local_30 = (void *)Memory::realloc_static((void *)0x0,(ulong)uStack_34 * 8,false);
        pvVar2 = _memmove;
        if (local_30 == (void *)0x0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = (ulong)(uint)NavigationServer2D::generator_parsers;
        local_38 = uVar6;
        if ((uint)NavigationServer2D::generator_parsers != 0) {
          lVar7 = 0;
          do {
            *(undefined8 *)((long)local_30 + lVar7) = *(undefined8 *)((long)pvVar2 + lVar7);
            lVar7 = lVar7 + 8;
          } while (lVar7 != uVar8 << 3);
        }
      }
      NavMeshGenerator2D::set_generator_parsers(&local_38);
      if (local_30 != (void *)0x0) {
        if (local_38 != 0) {
          local_38 = 0;
        }
        Memory::free_static(local_30,false);
      }
      pthread_rwlock_unlock((pthread_rwlock_t *)&NavigationServer2D::geometry_parser_rwlock);
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



/* vector_v2_to_v3(Vector<Vector2> const&) */

Vector * vector_v2_to_v3(Vector *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  long in_RSI;
  long lVar10;
  size_t __n;
  
  lVar9 = *(long *)(in_RSI + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar9 == 0) {
    return param_1;
  }
  lVar9 = *(long *)(lVar9 + -8);
  if (lVar9 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    pvVar8 = *(void **)(param_1 + 8);
  }
  else {
    if (lVar9 == 0) {
      return param_1;
    }
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_1 + 8));
    __n = lVar9 * 0xc;
    if ((__n == 0) ||
       (uVar6 = __n - 1 | __n - 1 >> 1, uVar6 = uVar6 | uVar6 >> 2, uVar6 = uVar6 | uVar6 >> 4,
       uVar6 = uVar6 | uVar6 >> 8, uVar6 = uVar6 | uVar6 >> 0x10, uVar6 = uVar6 | uVar6 >> 0x20,
       uVar6 == 0xffffffffffffffff)) {
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      pvVar8 = *(void **)(param_1 + 8);
    }
    else {
      puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 1;
        *(undefined8 **)(param_1 + 8) = puVar7 + 2;
        pvVar8 = memset(puVar7 + 2,0,__n);
        puVar7[1] = lVar9;
        goto LAB_00102a19;
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      pvVar8 = *(void **)(param_1 + 8);
    }
  }
  if (pvVar8 == (void *)0x0) {
    return param_1;
  }
LAB_00102a19:
  lVar9 = 0;
  while( true ) {
    if (*(long *)((long)pvVar8 + -8) <= lVar9) {
      return param_1;
    }
    lVar4 = *(long *)(in_RSI + 8);
    if (lVar4 == 0) break;
    lVar10 = *(long *)(lVar4 + -8);
    if (lVar10 <= lVar9) goto LAB_00102a96;
    puVar1 = (undefined4 *)(lVar4 + lVar9 * 8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_1 + 8));
    pvVar8 = *(void **)(param_1 + 8);
    puVar1 = (undefined4 *)((long)pvVar8 + lVar9 * 0xc);
    puVar1[1] = 0;
    *puVar1 = uVar2;
    puVar1[2] = uVar3;
    lVar9 = lVar9 + 1;
    if (pvVar8 == (void *)0x0) {
      return param_1;
    }
  }
  lVar10 = 0;
LAB_00102a96:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* GodotNavigationServer2D::obstacle_set_vertices(RID, Vector<Vector2> const&) */

void GodotNavigationServer2D::obstacle_set_vertices(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  Vector aVStack_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)NavigationServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x578);
  vector_v2_to_v3(aVStack_48);
  (*pcVar1)(plVar3,param_2,aVStack_48);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar3 = (long *)(local_40 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* vector_v3_to_v2(Vector<Vector3> const&) */

Vector * vector_v3_to_v2(Vector *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  long in_RSI;
  long lVar10;
  size_t __n;
  
  lVar9 = *(long *)(in_RSI + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar9 == 0) {
    return param_1;
  }
  lVar9 = *(long *)(lVar9 + -8);
  if (lVar9 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    pvVar8 = *(void **)(param_1 + 8);
  }
  else {
    if (lVar9 == 0) {
      return param_1;
    }
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(param_1 + 8));
    __n = lVar9 * 8;
    if ((__n == 0) ||
       (uVar6 = __n - 1 | __n - 1 >> 1, uVar6 = uVar6 | uVar6 >> 2, uVar6 = uVar6 | uVar6 >> 4,
       uVar6 = uVar6 | uVar6 >> 8, uVar6 = uVar6 | uVar6 >> 0x10, uVar6 = uVar6 | uVar6 >> 0x20,
       uVar6 == 0xffffffffffffffff)) {
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      pvVar8 = *(void **)(param_1 + 8);
    }
    else {
      puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 1;
        *(undefined8 **)(param_1 + 8) = puVar7 + 2;
        pvVar8 = memset(puVar7 + 2,0,__n);
        puVar7[1] = lVar9;
        goto LAB_00102d08;
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      pvVar8 = *(void **)(param_1 + 8);
    }
  }
  if (pvVar8 == (void *)0x0) {
    return param_1;
  }
LAB_00102d08:
  lVar9 = 0;
  while( true ) {
    if (*(long *)((long)pvVar8 + -8) <= lVar9) {
      return param_1;
    }
    lVar4 = *(long *)(in_RSI + 8);
    if (lVar4 == 0) break;
    lVar10 = *(long *)(lVar4 + -8);
    if (lVar10 <= lVar9) goto LAB_00102d6c;
    puVar1 = (undefined4 *)(lVar4 + lVar9 * 0xc);
    uVar2 = puVar1[2];
    uVar3 = *puVar1;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(param_1 + 8));
    pvVar8 = *(void **)(param_1 + 8);
    *(ulong *)((long)pvVar8 + lVar9 * 8) = CONCAT44(uVar2,uVar3);
    lVar9 = lVar9 + 1;
    if (pvVar8 == (void *)0x0) {
      return param_1;
    }
  }
  lVar10 = 0;
LAB_00102d6c:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* GodotNavigationServer2D::simplify_path(Vector<Vector2> const&, float) */

Vector * GodotNavigationServer2D::simplify_path(Vector *param_1,float param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  Vector local_58 [8];
  long local_50;
  undefined1 local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)NavigationServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x600);
  vector_v2_to_v3(local_58);
  (*pcVar1)(param_2,local_48,plVar3,local_58);
  vector_v3_to_v2(param_1);
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar3 = (long *)(local_40 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar3 = (long *)(local_50 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::map_get_path(RID, Vector2, Vector2, bool, unsigned int) */

Vector * GodotNavigationServer2D::map_get_path
                   (ulong param_1,ulong param_2,Vector *param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 param_6,undefined4 param_7)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auStack_68 [8];
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  local_4c = (undefined4)param_1;
  local_58 = (undefined4)param_2;
  local_50 = (undefined4)(param_2 >> 0x20);
  local_44 = (undefined4)(param_1 >> 0x20);
  uStack_54 = 0;
  uStack_48 = 0;
  (**(code **)(*plVar2 + 0x1e0))
            (param_1 & 0xffffffff,local_44,param_2 & 0xffffffff,local_50,auStack_68,plVar2,param_5,
             param_6,param_7);
  vector_v3_to_v2(param_3);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar2 = (long *)(local_60 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::obstacle_get_vertices(RID) const */

Vector * GodotNavigationServer2D::obstacle_get_vertices
                   (Vector *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x580))(auStack_38,plVar2,param_3);
  vector_v3_to_v2(param_1);
  lVar1 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar2 = (long *)(local_30 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::query_path(Ref<NavigationPathQueryParameters2D> const&,
   Ref<NavigationPathQueryResult2D>, Callable const&) */

void __thiscall
GodotNavigationServer2D::query_path
          (undefined8 param_1_00,long *param_1,long *param_3,undefined8 param_4)

{
  Vector *pVVar1;
  TypedArray *pTVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  RefCounted *pRVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  RefCounted *pRVar11;
  Object *pOVar12;
  code *pcVar13;
  long in_FS_OFFSET;
  byte bVar14;
  float fVar15;
  ulong uVar16;
  Object *local_90;
  RefCounted *local_88;
  long local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x1e5;
      pcVar10 = "Condition \"p_query_parameters.is_null()\" is true.";
LAB_00103816:
      _err_print_error("query_path","modules/navigation/2d/godot_navigation_server_2d.cpp",uVar7,
                       pcVar10,0,0);
      return;
    }
    goto LAB_001038ab;
  }
  if (*param_3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x1e6;
      pcVar10 = "Condition \"p_query_result.is_null()\" is true.";
      goto LAB_00103816;
    }
    goto LAB_001038ab;
  }
  local_90 = (Object *)0x0;
  pRVar6 = (RefCounted *)operator_new(0x1c0,"");
  pRVar11 = pRVar6;
  for (lVar9 = 0x38; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)pRVar11 = 0;
    pRVar11 = pRVar11 + (ulong)bVar14 * -0x10 + 8;
  }
  RefCounted::RefCounted(pRVar6);
  *(undefined8 *)(pRVar6 + 0x17c) = 0;
  *(undefined ***)pRVar6 = &PTR__initialize_classv_0010ade8;
  *(undefined8 *)(pRVar6 + 0x188) = 0;
  *(undefined8 *)(pRVar6 + 400) = 0;
  *(undefined4 *)(pRVar6 + 0x198) = 0;
  *(undefined8 *)(pRVar6 + 0x19c) = 0;
  *(undefined4 *)(pRVar6 + 0x1a4) = 0;
  *(undefined4 *)(pRVar6 + 0x1a8) = 1;
  *(undefined8 *)(pRVar6 + 0x1b0) = 7;
  pRVar6[0x1b8] = (RefCounted)0x0;
  *(undefined4 *)(pRVar6 + 0x1bc) = 0;
  postinitialize_handler((Object *)pRVar6);
  cVar4 = RefCounted::init_ref();
  pOVar3 = local_90;
  if (cVar4 == '\0') {
    if (local_90 != (Object *)0x0) {
      local_90 = (Object *)0x0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pRVar6 = (RefCounted *)0x0;
        cVar4 = predelete_handler(pOVar3);
        if (cVar4 != '\0') goto LAB_001037c3;
      }
    }
  }
  else {
    pOVar12 = local_90;
    if (pRVar6 != (RefCounted *)local_90) {
      local_90 = (Object *)pRVar6;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_90 = (Object *)0x0;
      }
      pOVar12 = (Object *)pRVar6;
      if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
LAB_001037c3:
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar12 = (Object *)pRVar6;
        if (pRVar6 == (RefCounted *)0x0) goto LAB_00103235;
      }
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
LAB_00103235:
  pOVar3 = local_90;
  uVar7 = NavigationPathQueryParameters2D::get_map();
  NavigationPathQueryParameters3D::set_map(pOVar3,uVar7);
  pOVar3 = local_90;
  uVar16 = NavigationPathQueryParameters2D::get_start_position();
  uStack_6c = 0;
  local_70 = (undefined4)uVar16;
  local_68 = (undefined4)(uVar16 >> 0x20);
  NavigationPathQueryParameters3D::set_start_position(uVar16 & 0xffffffff,local_68,pOVar3);
  pOVar3 = local_90;
  uVar16 = NavigationPathQueryParameters2D::get_target_position();
  uStack_60 = 0;
  local_64 = (undefined4)uVar16;
  local_5c = (undefined4)(uVar16 >> 0x20);
  NavigationPathQueryParameters3D::set_target_position(uVar16 & 0xffffffff,local_5c,pOVar3);
  pOVar3 = local_90;
  NavigationPathQueryParameters2D::get_navigation_layers();
  NavigationPathQueryParameters3D::set_navigation_layers((uint)pOVar3);
  NavigationPathQueryParameters3D::set_pathfinding_algorithm(local_90,0);
  iVar5 = NavigationPathQueryParameters2D::get_path_postprocessing();
  if (iVar5 == 1) {
    NavigationPathQueryParameters3D::set_path_postprocessing(local_90,1);
  }
  else if (iVar5 == 2) {
    NavigationPathQueryParameters3D::set_path_postprocessing(local_90,2);
  }
  else {
    if (iVar5 != 0) {
      _err_print_error("query_path","modules/navigation/2d/godot_navigation_server_2d.cpp",0x1fc,
                       "No match for used PathPostProcessing - fallback to default",0,1);
    }
    NavigationPathQueryParameters3D::set_path_postprocessing(local_90,0);
  }
  pOVar3 = local_90;
  uVar7 = NavigationPathQueryParameters2D::get_metadata_flags();
  NavigationPathQueryParameters3D::set_metadata_flags(pOVar3,uVar7);
  pOVar3 = local_90;
  NavigationPathQueryParameters2D::get_simplify_path();
  NavigationPathQueryParameters3D::set_simplify_path(SUB81(pOVar3,0));
  fVar15 = (float)NavigationPathQueryParameters2D::get_simplify_epsilon();
  NavigationPathQueryParameters3D::set_simplify_epsilon(fVar15);
  pRVar6 = (RefCounted *)operator_new(0x1b8,"");
  pRVar11 = pRVar6;
  for (lVar9 = 0x37; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)pRVar11 = 0;
    pRVar11 = pRVar11 + (ulong)bVar14 * -0x10 + 8;
  }
  RefCounted::RefCounted(pRVar6);
  *(undefined8 *)(pRVar6 + 0x188) = 0;
  *(undefined ***)pRVar6 = &PTR__initialize_classv_0010af48;
  *(undefined8 *)(pRVar6 + 0x198) = 0;
  Array::Array((Array *)(pRVar6 + 0x1a0));
  local_58 = 0;
  local_88 = (RefCounted *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)(pRVar6 + 0x1a0),(StringName *)0x17,(Variant *)&local_88);
  if ((StringName::configured != '\0') && (local_88 != (RefCounted *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] == '\0') {
    *(undefined8 *)(pRVar6 + 0x1b0) = 0;
    postinitialize_handler((Object *)pRVar6);
  }
  else {
    Variant::_clear_internal();
    *(undefined8 *)(pRVar6 + 0x1b0) = 0;
    postinitialize_handler((Object *)pRVar6);
  }
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
LAB_0010345e:
    plVar8 = (long *)NavigationServer3D::get_singleton();
    pRVar11 = (RefCounted *)0x0;
    pcVar13 = *(code **)(*plVar8 + 0x5c8);
    local_88 = (RefCounted *)0x0;
  }
  else {
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      cVar4 = RefCounted::unreference();
      if ((cVar4 == '\0') || (cVar4 = predelete_handler((Object *)pRVar6), cVar4 == '\0'))
      goto LAB_0010345e;
      pRVar11 = (RefCounted *)0x0;
LAB_00103690:
      (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
      Memory::free_static(pRVar6,false);
      plVar8 = (long *)NavigationServer3D::get_singleton();
      pcVar13 = *(code **)(*plVar8 + 0x5c8);
      local_88 = (RefCounted *)0x0;
      if (pRVar11 != (RefCounted *)0x0) goto LAB_00103639;
    }
    else {
      cVar4 = RefCounted::unreference();
      pRVar11 = pRVar6;
      if (cVar4 == '\0') {
        plVar8 = (long *)NavigationServer3D::get_singleton();
        pcVar13 = *(code **)(*plVar8 + 0x5c8);
      }
      else {
        cVar4 = predelete_handler((Object *)pRVar6);
        if (cVar4 != '\0') goto LAB_00103690;
        plVar8 = (long *)NavigationServer3D::get_singleton();
        pcVar13 = *(code **)(*plVar8 + 0x5c8);
      }
LAB_00103639:
      local_88 = pRVar11;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_88 = (RefCounted *)0x0;
      }
    }
  }
  (*pcVar13)(plVar8,&local_90,(Vector *)&local_88,param_4);
  if (((local_88 != (RefCounted *)0x0) &&
      (cVar4 = RefCounted::unreference(), pRVar6 = local_88, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_88), cVar4 != '\0')) {
    (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
    Memory::free_static(pRVar6,false);
  }
  pVVar1 = (Vector *)*param_3;
  NavigationPathQueryResult3D::get_path();
  vector_v3_to_v2((Vector *)&local_88);
  NavigationPathQueryResult2D::set_path(pVVar1);
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar8 = (long *)(local_80 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  pVVar1 = (Vector *)*param_3;
  NavigationPathQueryResult3D::get_path_types();
  NavigationPathQueryResult2D::set_path_types(pVVar1);
  pTVar2 = (TypedArray *)*param_3;
  NavigationPathQueryResult3D::get_path_rids();
  NavigationPathQueryResult2D::set_path_rids(pTVar2);
  Array::~Array((Array *)&local_88);
  pVVar1 = (Vector *)*param_3;
  NavigationPathQueryResult3D::get_path_owner_ids();
  NavigationPathQueryResult2D::set_path_owner_ids(pVVar1);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar11), cVar4 != '\0')) {
    (**(code **)(*(long *)pRVar11 + 0x140))(pRVar11);
    Memory::free_static(pRVar11,false);
  }
  if (((local_90 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_90, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_90), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001038ab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::region_set_navigation_polygon(RID, Ref<NavigationPolygon>) */

void __thiscall
GodotNavigationServer2D::region_set_navigation_polygon
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  Object *this;
  Object *pOVar6;
  long in_FS_OFFSET;
  bool bVar7;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)NavigationServer3D::get_singleton();
  pOVar6 = (Object *)*param_3;
  pcVar1 = *(code **)(*plVar5 + 0x2e0);
  if ((pOVar6 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_38 = (Object *)0x0;
    (*pcVar1)(plVar5,param_2,&local_38);
    if ((local_38 != (Object *)0x0) &&
       (cVar4 = RefCounted::unreference(), this = local_38, cVar4 != '\0')) {
      pOVar6 = (Object *)0x0;
      cVar4 = predelete_handler(local_38);
      if (cVar4 != '\0') goto LAB_00103a18;
    }
  }
  else {
    NavigationPolygon::get_navigation_mesh();
    (*pcVar1)(plVar5,param_2,&local_38);
    if (((local_38 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), this = local_38, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_38), cVar4 != '\0')) {
LAB_00103a18:
      if (*(code **)(*(long *)this + 0x140) == NavigationMesh::~NavigationMesh) {
        bVar7 = StringName::configured != '\0';
        *(undefined ***)this = &PTR__initialize_classv_0010b0a8;
        if ((bVar7) && (*(long *)((Resource *)this + 0x2e8) != 0)) {
          StringName::unref();
        }
        if ((*(long *)((Resource *)this + 0x298) != 0) &&
           (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
          pOVar2 = *(Object **)((Resource *)this + 0x298);
          cVar4 = predelete_handler(pOVar2);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        CowData<Vector<int>>::_unref((CowData<Vector<int>> *)((Resource *)this + 0x290));
        if (*(long *)((Resource *)this + 0x280) != 0) {
          LOCK();
          plVar5 = (long *)(*(long *)((Resource *)this + 0x280) + -0x10);
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            lVar3 = *(long *)((Resource *)this + 0x280);
            *(undefined8 *)((Resource *)this + 0x280) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        Resource::~Resource((Resource *)this);
      }
      else {
        (**(code **)(*(long *)this + 0x140))(this);
      }
      Memory::free_static(this,false);
      if (pOVar6 == (Object *)0x0) goto LAB_00103960;
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar6,false);
        return;
      }
      goto LAB_00103b27;
    }
  }
LAB_00103960:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103b27:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::bake_from_source_geometry_data(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D> const&, Callable const&) */

void __thiscall
GodotNavigationServer2D::bake_from_source_geometry_data
          (GodotNavigationServer2D *this,Ref *param_1,Ref *param_2,Callable *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("bake_from_source_geometry_data",
                     "modules/navigation/2d/godot_navigation_server_2d.cpp",0xd0,
                     "Condition \"p_navigation_mesh.is_null()\" is true.",
                     "Invalid navigation polygon.",0,0);
  }
  else if (*(long *)param_2 == 0) {
    _err_print_error("bake_from_source_geometry_data",
                     "modules/navigation/2d/godot_navigation_server_2d.cpp",0xd1,
                     "Condition \"p_source_geometry_data.is_null()\" is true.",
                     "Invalid NavigationMeshSourceGeometryData2D.",0,0);
  }
  else {
    lVar7 = NavMeshGenerator2D::get_singleton();
    if (lVar7 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("bake_from_source_geometry_data",
                         "modules/navigation/2d/godot_navigation_server_2d.cpp",0xd4,
                         "Parameter \"NavMeshGenerator2D::get_singleton()\" is null.",0,0);
        return;
      }
      goto LAB_00103e32;
    }
    NavMeshGenerator2D::get_singleton();
    local_38 = (Object *)0x0;
    if (*(Object **)param_2 != (Object *)0x0) {
      local_38 = *(Object **)param_2;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_38 = (Object *)0x0;
      }
    }
    local_40 = (Object *)0x0;
    if (*(Object **)param_1 != (Object *)0x0) {
      local_40 = *(Object **)param_1;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_40 = (Object *)0x0;
      }
    }
    NavMeshGenerator2D::bake_from_source_geometry_data(&local_40,&local_38,param_3);
    if (local_40 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_40;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_40);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    if (local_38 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_38;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_38);
        if (cVar6 != '\0') {
          if (*(code **)(*(long *)pOVar5 + 0x140) ==
              NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
            *(undefined ***)pOVar5 = &PTR__initialize_classv_0010b280;
            NavigationMeshSourceGeometryData2D::clear();
            if (*(long *)(pOVar5 + 0x2b8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(pOVar5 + 0x2b8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar7 = *(long *)(pOVar5 + 0x2b8);
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                lVar2 = *(long *)(lVar7 + -8);
                *(undefined8 *)(pOVar5 + 0x2b8) = 0;
                if (lVar2 != 0) {
                  lVar9 = 0;
                  lVar8 = lVar7;
                  do {
                    if (*(long *)(lVar8 + 8) != 0) {
                      LOCK();
                      plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar3 = *(long *)(lVar8 + 8);
                        *(undefined8 *)(lVar8 + 8) = 0;
                        Memory::free_static((void *)(lVar3 + -0x10),false);
                      }
                    }
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 0x18;
                  } while (lVar2 != lVar9);
                }
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar5 + 0x290));
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar5 + 0x280));
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          Memory::free_static(pOVar5,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103e32:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::bake_from_source_geometry_data_async(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D> const&, Callable const&) */

void __thiscall
GodotNavigationServer2D::bake_from_source_geometry_data_async
          (GodotNavigationServer2D *this,Ref *param_1,Ref *param_2,Callable *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("bake_from_source_geometry_data_async",
                     "modules/navigation/2d/godot_navigation_server_2d.cpp",0xda,
                     "Condition \"p_navigation_mesh.is_null()\" is true.","Invalid navigation mesh."
                     ,0,0);
  }
  else if (*(long *)param_2 == 0) {
    _err_print_error("bake_from_source_geometry_data_async",
                     "modules/navigation/2d/godot_navigation_server_2d.cpp",0xdb,
                     "Condition \"p_source_geometry_data.is_null()\" is true.",
                     "Invalid NavigationMeshSourceGeometryData2D.",0,0);
  }
  else {
    lVar7 = NavMeshGenerator2D::get_singleton();
    if (lVar7 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("bake_from_source_geometry_data_async",
                         "modules/navigation/2d/godot_navigation_server_2d.cpp",0xde,
                         "Parameter \"NavMeshGenerator2D::get_singleton()\" is null.",0,0);
        return;
      }
      goto LAB_00104142;
    }
    NavMeshGenerator2D::get_singleton();
    local_38 = (Object *)0x0;
    if (*(Object **)param_2 != (Object *)0x0) {
      local_38 = *(Object **)param_2;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_38 = (Object *)0x0;
      }
    }
    local_40 = (Object *)0x0;
    if (*(Object **)param_1 != (Object *)0x0) {
      local_40 = *(Object **)param_1;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_40 = (Object *)0x0;
      }
    }
    NavMeshGenerator2D::bake_from_source_geometry_data_async(&local_40,&local_38,param_3);
    if (local_40 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_40;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_40);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    if (local_38 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_38;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_38);
        if (cVar6 != '\0') {
          if (*(code **)(*(long *)pOVar5 + 0x140) ==
              NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
            *(undefined ***)pOVar5 = &PTR__initialize_classv_0010b280;
            NavigationMeshSourceGeometryData2D::clear();
            if (*(long *)(pOVar5 + 0x2b8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(pOVar5 + 0x2b8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar7 = *(long *)(pOVar5 + 0x2b8);
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                lVar2 = *(long *)(lVar7 + -8);
                *(undefined8 *)(pOVar5 + 0x2b8) = 0;
                if (lVar2 != 0) {
                  lVar9 = 0;
                  lVar8 = lVar7;
                  do {
                    if (*(long *)(lVar8 + 8) != 0) {
                      LOCK();
                      plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar3 = *(long *)(lVar8 + 8);
                        *(undefined8 *)(lVar8 + 8) = 0;
                        Memory::free_static((void *)(lVar3 + -0x10),false);
                      }
                    }
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 0x18;
                  } while (lVar2 != lVar9);
                }
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar5 + 0x290));
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar5 + 0x280));
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          Memory::free_static(pOVar5,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104142:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::parse_source_geometry_data(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D> const&, Node*, Callable const&) */

void __thiscall
GodotNavigationServer2D::parse_source_geometry_data
          (GodotNavigationServer2D *this,Ref *param_1,Ref *param_2,Node *param_3,Callable *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000104192) == 1) {
    if (*(long *)param_1 == 0) {
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/2d/godot_navigation_server_2d.cpp",0xc5,
                       "Condition \"p_navigation_mesh.is_null()\" is true.",
                       "Invalid navigation polygon.",0,0);
    }
    else if (param_3 == (Node *)0x0) {
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/2d/godot_navigation_server_2d.cpp",0xc6,
                       "Parameter \"p_root_node\" is null.","No parsing root node specified.",0,0);
    }
    else if (((byte)param_3[0x2fa] & 0x40) == 0) {
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/2d/godot_navigation_server_2d.cpp",199,
                       "Condition \"!p_root_node->is_inside_tree()\" is true.",
                       "The root node needs to be inside the SceneTree.",0,0);
    }
    else {
      lVar7 = NavMeshGenerator2D::get_singleton();
      if (lVar7 == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("parse_source_geometry_data",
                           "modules/navigation/2d/godot_navigation_server_2d.cpp",0xca,
                           "Parameter \"NavMeshGenerator2D::get_singleton()\" is null.",0,0);
          return;
        }
        goto LAB_001044f2;
      }
      NavMeshGenerator2D::get_singleton();
      local_38 = (Object *)0x0;
      if (*(Object **)param_2 != (Object *)0x0) {
        local_38 = *(Object **)param_2;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_38 = (Object *)0x0;
        }
      }
      local_40 = (Object *)0x0;
      if (*(Object **)param_1 != (Object *)0x0) {
        local_40 = *(Object **)param_1;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_40 = (Object *)0x0;
        }
      }
      NavMeshGenerator2D::parse_source_geometry_data(&local_40,&local_38,param_3,param_4);
      if (local_40 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_40;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_40);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_38 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_38;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_38);
          if (cVar6 != '\0') {
            if (*(code **)(*(long *)pOVar5 + 0x140) ==
                NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
              *(undefined ***)pOVar5 = &PTR__initialize_classv_0010b280;
              NavigationMeshSourceGeometryData2D::clear();
              if (*(long *)(pOVar5 + 0x2b8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(pOVar5 + 0x2b8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar7 = *(long *)(pOVar5 + 0x2b8);
                  if (lVar7 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  lVar2 = *(long *)(lVar7 + -8);
                  *(undefined8 *)(pOVar5 + 0x2b8) = 0;
                  if (lVar2 != 0) {
                    lVar9 = 0;
                    lVar8 = lVar7;
                    do {
                      if (*(long *)(lVar8 + 8) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar3 = *(long *)(lVar8 + 8);
                          *(undefined8 *)(lVar8 + 8) = 0;
                          Memory::free_static((void *)(lVar3 + -0x10),false);
                        }
                      }
                      lVar9 = lVar9 + 1;
                      lVar8 = lVar8 + 0x18;
                    } while (lVar2 != lVar9);
                  }
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
              }
              CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar5 + 0x290));
              CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar5 + 0x280));
              Resource::~Resource((Resource *)pOVar5);
            }
            else {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            }
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
  }
  else {
    _err_print_error("parse_source_geometry_data",
                     "modules/navigation/2d/godot_navigation_server_2d.cpp",0xc4,
                     "Condition \"!Thread::is_main_thread()\" is true.",
                     "The SceneTree can only be parsed on the main thread. Call this function from the main thread or use call_deferred()."
                     ,0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001044f2:
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
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
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* NavigationMesh::is_class_ptr(void*) const */

uint __thiscall NavigationMesh::is_class_ptr(NavigationMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMesh::_property_can_revertv(StringName const&) const */

undefined8 NavigationMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::_notificationv(int, bool) */

void NavigationMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationMeshSourceGeometryData2D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData2D::is_class_ptr
          (NavigationMeshSourceGeometryData2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GodotNavigationServer2D::is_class_ptr(void*) const */

uint __thiscall GodotNavigationServer2D::is_class_ptr(GodotNavigationServer2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10b9,(undefined4 *)param_1 ==
                               &NavigationServer2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GodotNavigationServer2D::_getv(StringName const&, Variant&) const */

undefined8 GodotNavigationServer2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotNavigationServer2D::_setv(StringName const&, Variant const&) */

undefined8 GodotNavigationServer2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotNavigationServer2D::_validate_propertyv(PropertyInfo&) const */

void GodotNavigationServer2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GodotNavigationServer2D::_property_can_revertv(StringName const&) const */

undefined8 GodotNavigationServer2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GodotNavigationServer2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GodotNavigationServer2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotNavigationServer2D::_notificationv(int, bool) */

void GodotNavigationServer2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationMesh::_validate_propertyv(PropertyInfo&) const */

void NavigationMesh::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00110008 != Object::_validate_property) {
    NavigationMesh::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_getv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00110010 != Object::_get) {
    uVar1 = NavigationMesh::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMesh::_setv(StringName const&, Variant const&) */

undefined8 NavigationMesh::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00110018 != Object::_set) {
    uVar1 = NavigationMesh::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00110020 != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData2D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00110028 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData2D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D() */

void __thiscall
NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D
          (NavigationPathQueryParameters3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  Object::~Object((Object *)this);
  return;
}



/* NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D() */

void __thiscall
NavigationPathQueryParameters3D::~NavigationPathQueryParameters3D
          (NavigationPathQueryParameters3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c0);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotNavigationServer2D::source_geometry_parser_create() [clone .cold] */

void GodotNavigationServer2D::source_geometry_parser_create(void)

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



/* GodotNavigationServer2D::bake_from_source_geometry_data(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D> const&, Callable const&) [clone .cold] */

void GodotNavigationServer2D::bake_from_source_geometry_data
               (Ref *param_1,Ref *param_2,Callable *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotNavigationServer2D::bake_from_source_geometry_data_async(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D> const&, Callable const&) [clone .cold] */

void GodotNavigationServer2D::bake_from_source_geometry_data_async
               (Ref *param_1,Ref *param_2,Callable *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotNavigationServer2D::parse_source_geometry_data(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D> const&, Node*, Callable const&) [clone .cold] */

void GodotNavigationServer2D::parse_source_geometry_data
               (Ref *param_1,Ref *param_2,Node *param_3,Callable *param_4)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationMesh::_get_class_namev() const */

undefined8 * NavigationMesh::_get_class_namev(void)

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
LAB_00105193:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105193;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
      goto LAB_001051fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
LAB_001051fe:
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
LAB_00105273:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105273;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001052de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001052de:
  return &_get_class_namev()::_class_name_static;
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
LAB_00105373:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105373;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationPathQueryParameters3D");
      goto LAB_001053de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPathQueryParameters3D"
            );
LAB_001053de:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMeshSourceGeometryData2D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData2D::_get_class_namev(void)

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
LAB_00105473:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105473;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData2D");
      goto LAB_001054de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData2D");
LAB_001054de:
  return &_get_class_namev()::_class_name_static;
}



/* GodotNavigationServer2D::_get_class_namev() const */

undefined8 * GodotNavigationServer2D::_get_class_namev(void)

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
LAB_00105563:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105563;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GodotNavigationServer2D");
      goto LAB_001055ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GodotNavigationServer2D");
LAB_001055ce:
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
LAB_00105653:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105653;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPathQueryResult3D"
                );
      goto LAB_001056be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPathQueryResult3D");
LAB_001056be:
  return &_get_class_namev()::_class_name_static;
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



/* NavigationPathQueryResult3D::~NavigationPathQueryResult3D() */

void __thiscall
NavigationPathQueryResult3D::~NavigationPathQueryResult3D(NavigationPathQueryResult3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010af48;
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
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  Object::~Object((Object *)this);
  return;
}



/* NavigationPathQueryResult3D::~NavigationPathQueryResult3D() */

void __thiscall
NavigationPathQueryResult3D::~NavigationPathQueryResult3D(NavigationPathQueryResult3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010af48;
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
  *(undefined ***)this = &PTR__initialize_classv_0010ac88;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b8);
  return;
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



/* NavigationMesh::get_class() const */

void NavigationMesh::get_class(void)

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



/* GodotNavigationServer2D::get_class() const */

void GodotNavigationServer2D::get_class(void)

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



/* NavigationMeshSourceGeometryData2D::get_class() const */

void NavigationMeshSourceGeometryData2D::get_class(void)

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
            if (lVar5 == 0) goto LAB_00105e9f;
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
LAB_00105e9f:
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
    if (cVar6 != '\0') goto LAB_00105f53;
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
              if (lVar5 == 0) goto LAB_00106003;
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
LAB_00106003:
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
      if (cVar6 != '\0') goto LAB_00105f53;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00105f53:
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
            if (lVar4 == 0) goto LAB_0010612f;
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
LAB_0010612f:
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
    if (cVar5 != '\0') goto LAB_001061e3;
  }
  cVar5 = String::operator==(param_1,"NavigationPathQueryParameters3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001061e3:
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
            if (lVar4 == 0) goto LAB_001062af;
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
LAB_001062af:
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
    if (cVar5 != '\0') goto LAB_00106363;
  }
  cVar5 = String::operator==(param_1,"NavigationPathQueryResult3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106363:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::is_class(String const&) const */

undefined8 __thiscall NavigationMesh::is_class(NavigationMesh *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010643f;
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
LAB_0010643f:
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
    if (cVar6 != '\0') goto LAB_001064f3;
  }
  cVar6 = String::operator==(param_1,"NavigationMesh");
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
              if (lVar5 == 0) goto LAB_001065b3;
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
LAB_001065b3:
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
      if (cVar6 != '\0') goto LAB_001064f3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010665c;
    }
  }
LAB_001064f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010665c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData2D::is_class
          (NavigationMeshSourceGeometryData2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001066df;
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
LAB_001066df:
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
    if (cVar6 != '\0') goto LAB_00106793;
  }
  cVar6 = String::operator==(param_1,"NavigationMeshSourceGeometryData2D");
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
              if (lVar5 == 0) goto LAB_00106853;
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
LAB_00106853:
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
      if (cVar6 != '\0') goto LAB_00106793;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001068fc;
    }
  }
LAB_00106793:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001068fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotNavigationServer2D::is_class(String const&) const */

undefined8 __thiscall
GodotNavigationServer2D::is_class(GodotNavigationServer2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010698f;
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
LAB_0010698f:
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
    if (cVar6 != '\0') goto LAB_00106a43;
  }
  cVar6 = String::operator==(param_1,"GodotNavigationServer2D");
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
              if (lVar5 == 0) goto LAB_00106b1b;
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
LAB_00106b1b:
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
      if (cVar6 != '\0') goto LAB_00106a43;
    }
    cVar6 = String::operator==(param_1,"NavigationServer2D");
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
                if (lVar5 == 0) goto LAB_00106bfb;
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
LAB_00106bfb:
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
        if (cVar6 != '\0') goto LAB_00106a43;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00106ca4;
    }
  }
LAB_00106a43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106ca4:
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
    if ((code *)PTR__bind_methods_00110030 != Object::_bind_methods) {
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
LAB_00106fb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106fb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00106fd6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00106fd6:
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
LAB_001073b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001073b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001073d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001073d5:
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
LAB_00107808:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107808;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107825;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107825:
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



/* GodotNavigationServer2D::_initialize_classv() */

void GodotNavigationServer2D::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00107c34;
  if (NavigationServer2D::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationServer2D";
    local_60 = 0;
    local_40 = 0x12;
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
    if (local_58 == 0) {
LAB_00107d42:
      if ((code *)PTR__bind_methods_00110038 != Object::_bind_methods) {
LAB_00107d52:
        NavigationServer2D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00107d42;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00110038 != Object::_bind_methods) goto LAB_00107d52;
    }
    if ((code *)PTR__bind_compatibility_methods_00110040 != Object::_bind_compatibility_methods) {
      NavigationServer2D::_bind_compatibility_methods();
    }
    NavigationServer2D::initialize_class()::initialized = '\x01';
  }
  local_48 = "NavigationServer2D";
  local_58 = 0;
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "GodotNavigationServer2D";
  local_60 = 0;
  local_40 = 0x17;
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
LAB_00107c34:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
  if (initialize_class()::initialized != '\0') goto LAB_00107f4b;
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
LAB_0010805a:
      if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) {
LAB_0010806a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010805a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) goto LAB_0010806a;
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
  if ((code *)PTR__bind_methods_00110048 != RefCounted::_bind_methods) {
    NavigationPathQueryResult3D::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00107f4b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  if (initialize_class()::initialized != '\0') goto LAB_0010824b;
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
LAB_0010835a:
      if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) {
LAB_0010836a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010835a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) goto LAB_0010836a;
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
  if ((code *)PTR__bind_methods_00110058 != RefCounted::_bind_methods) {
    NavigationPathQueryParameters3D::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010824b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_00108558:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108558;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108575;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108575:
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



/* NavigationMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall NavigationMesh::_get_property_listv(NavigationMesh *this,List *param_1,bool param_2)

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
  local_78 = "NavigationMesh";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMesh";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_001089a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001089a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001089c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001089c5:
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
  StringName::StringName((StringName *)&local_78,"NavigationMesh",false);
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



/* NavigationMeshSourceGeometryData2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData2D::_get_property_listv
          (NavigationMeshSourceGeometryData2D *this,List *param_1,bool param_2)

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
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData2D";
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
LAB_00108df8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108df8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108e15;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108e15:
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData2D",false);
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



/* NavigationServer2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void NavigationServer2D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "NavigationServer2D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationServer2D";
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
LAB_00109238:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109238;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00109256;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00109256:
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
  StringName::StringName((StringName *)&local_78,"NavigationServer2D",false);
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



/* GodotNavigationServer2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GodotNavigationServer2D::_get_property_listv
          (GodotNavigationServer2D *this,List *param_1,bool param_2)

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
    NavigationServer2D::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GodotNavigationServer2D";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GodotNavigationServer2D";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_00109638:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109638;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109655;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109655:
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
  StringName::StringName((StringName *)&local_78,"GodotNavigationServer2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      NavigationServer2D::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

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



/* NavigationMesh::_initialize_classv() */

void NavigationMesh::_initialize_classv(void)

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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) {
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
    local_58 = "NavigationMesh";
    local_70 = 0;
    local_50 = 0xe;
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
    if ((code *)PTR__bind_methods_00110060 != Resource::_bind_methods) {
      NavigationMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::_initialize_classv() */

void NavigationMeshSourceGeometryData2D::_initialize_classv(void)

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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
        if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) {
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
    local_58 = "NavigationMeshSourceGeometryData2D";
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
    if ((code *)PTR__bind_methods_00110068 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData2D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<NavMeshGeometryParser2D, false>::make_rid() */

ulong __thiscall
RID_Alloc<NavMeshGeometryParser2D,false>::make_rid(RID_Alloc<NavMeshGeometryParser2D,false> *this)

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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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



/* CowData<Vector<int> >::_unref() */

void __thiscall CowData<Vector<int>>::_unref(CowData<Vector<int>> *this)

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



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010b0a8;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
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



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010b0a8;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
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
  operator_delete(this,0x318);
  return;
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

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



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b280;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
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
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b280;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
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
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

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


