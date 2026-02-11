
/* NavObstacle::set_use_3d_avoidance(bool) */

void __thiscall NavObstacle::set_use_3d_avoidance(NavObstacle *this,bool param_1)

{
  if (this[0x49] == (NavObstacle)param_1) {
    return;
  }
  this[0x49] = (NavObstacle)param_1;
  this[0x50] = (NavObstacle)0x1;
  if (*(long *)(this + 8) != 0) {
    NavAgent::set_use_3d_avoidance(SUB81(*(long *)(this + 8),0));
  }
  if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
    NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    return;
  }
  return;
}



/* NavObstacle::set_position(Vector3) */

void NavObstacle::set_position(undefined8 param_1,float param_2,long param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (float)param_1;
  if (((*(float *)(param_3 + 0x24) != local_18) ||
      (uStack_14 = (float)((ulong)param_1 >> 0x20), *(float *)(param_3 + 0x28) != uStack_14)) ||
     (*(float *)(param_3 + 0x2c) != param_2)) {
    *(undefined1 *)(param_3 + 0x50) = 1;
    *(float *)(param_3 + 0x2c) = param_2;
    *(undefined8 *)(param_3 + 0x24) = param_1;
    if (*(long *)(param_3 + 8) != 0) {
      NavAgent::set_position(param_1,param_2);
    }
    if ((*(SelfList **)(param_3 + 0x10) != (SelfList *)0x0) && (*(long *)(param_3 + 0x60) == 0)) {
      NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(param_3 + 0x10));
      return;
    }
  }
  return;
}



/* NavObstacle::set_radius(float) */

void __thiscall NavObstacle::set_radius(NavObstacle *this,float param_1)

{
  if ((param_1 != *(float *)(this + 0x40)) &&
     (*(float *)(this + 0x40) = param_1, *(long *)(this + 8) != 0)) {
    NavAgent::set_radius(param_1);
    return;
  }
  return;
}



/* NavObstacle::set_height(float) */

void __thiscall NavObstacle::set_height(NavObstacle *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x44)) {
    this[0x50] = (NavObstacle)0x1;
    *(float *)(this + 0x44) = param_1;
    if (*(long *)(this + 8) != 0) {
      NavAgent::set_height(param_1);
    }
    if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
      NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
      return;
    }
  }
  return;
}



/* NavObstacle::set_velocity(Vector3) */

void NavObstacle::set_velocity(undefined8 param_1,undefined4 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined4 *)(param_3 + 0x20) = param_2;
  if (*(long *)(param_3 + 8) != 0) {
    NavAgent::set_velocity(param_1,*(undefined4 *)(param_3 + 0x20),*(long *)(param_3 + 8));
    return;
  }
  return;
}



/* NavObstacle::set_vertices(Vector<Vector3> const&) */

void __thiscall NavObstacle::set_vertices(NavObstacle *this,Vector *param_1)

{
  float *pfVar1;
  long lVar2;
  SelfList *pSVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  bool bVar9;
  
  pfVar1 = *(float **)(this + 0x38);
  pfVar5 = *(float **)(param_1 + 8);
  if (pfVar1 == (float *)0x0) {
    if (pfVar5 == (float *)0x0) {
      return;
    }
    if (*(long *)(pfVar5 + -2) == 0) {
      return;
    }
LAB_00100265:
    pfVar5 = pfVar5 + -4;
    do {
      lVar2 = *(long *)pfVar5;
      if (lVar2 == 0) goto LAB_001001d5;
      LOCK();
      lVar8 = *(long *)pfVar5;
      bVar9 = lVar2 == lVar8;
      if (bVar9) {
        *(long *)pfVar5 = lVar2 + 1;
        lVar8 = lVar2;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar8 != -1) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      pSVar3 = *(SelfList **)(this + 0x10);
      this[0x50] = (NavObstacle)0x1;
      *(undefined8 *)(this + 0x38) = uVar4;
      goto joined_r0x0010029d;
    }
  }
  else {
    lVar2 = *(long *)(pfVar1 + -2);
    if (pfVar5 == (float *)0x0) {
      if (lVar2 == 0) {
        return;
      }
LAB_00100248:
      LOCK();
      pfVar1 = pfVar1 + -4;
      *(long *)pfVar1 = *(long *)pfVar1 + -1;
      UNLOCK();
      if (*(long *)pfVar1 == 0) {
        lVar2 = *(long *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        pfVar5 = *(float **)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 0x38) = 0;
        pfVar5 = *(float **)(param_1 + 8);
      }
      if (pfVar5 != (float *)0x0) goto LAB_00100265;
    }
    else {
      if (lVar2 == *(long *)(pfVar5 + -2)) {
        if (lVar2 < 1) {
          return;
        }
        lVar8 = 0;
        pfVar6 = pfVar5;
        pfVar7 = pfVar1;
        while (((*pfVar7 == *pfVar6 && (pfVar7[1] == pfVar6[1])) && (pfVar7[2] == pfVar6[2]))) {
          lVar8 = lVar8 + 1;
          pfVar7 = pfVar7 + 3;
          pfVar6 = pfVar6 + 3;
          if (lVar2 == lVar8) {
            return;
          }
        }
      }
      if (pfVar1 != pfVar5) goto LAB_00100248;
    }
  }
LAB_001001d5:
  pSVar3 = *(SelfList **)(this + 0x10);
  this[0x50] = (NavObstacle)0x1;
joined_r0x0010029d:
  if ((pSVar3 != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
    NavMap::add_obstacle_sync_dirty_request(pSVar3);
    return;
  }
  return;
}



/* NavObstacle::is_map_changed() */

bool __thiscall NavObstacle::is_map_changed(NavObstacle *this)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(long *)(this + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x130);
    bVar2 = *(int *)(this + 0x54) != iVar1;
    *(int *)(this + 0x54) = iVar1;
  }
  return bVar2;
}



/* NavObstacle::set_avoidance_layers(unsigned int) */

void __thiscall NavObstacle::set_avoidance_layers(NavObstacle *this,uint param_1)

{
  if (*(uint *)(this + 0x4c) == param_1) {
    return;
  }
  *(uint *)(this + 0x4c) = param_1;
  this[0x50] = (NavObstacle)0x1;
  if (*(long *)(this + 8) != 0) {
    NavAgent::set_avoidance_layers((uint)*(long *)(this + 8));
  }
  if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
    NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    return;
  }
  return;
}



/* NavObstacle::is_dirty() const */

NavObstacle __thiscall NavObstacle::is_dirty(NavObstacle *this)

{
  return this[0x50];
}



/* NavObstacle::sync() */

void __thiscall NavObstacle::sync(NavObstacle *this)

{
  this[0x50] = (NavObstacle)0x0;
  return;
}



/* NavObstacle::internal_update_agent() */

void __thiscall NavObstacle::internal_update_agent(NavObstacle *this)

{
  if (*(long *)(this + 8) != 0) {
    NavAgent::set_neighbor_distance(0.0);
    NavAgent::set_max_neighbors((int)*(undefined8 *)(this + 8));
    NavAgent::set_time_horizon_agents(0.0);
    NavAgent::set_time_horizon_obstacles(0.0);
    NavAgent::set_avoidance_mask((uint)*(undefined8 *)(this + 8));
    NavAgent::set_neighbor_distance(0.0);
    NavAgent::set_avoidance_priority(_LC1);
    NavAgent::set_map(*(NavMap **)(this + 8));
    NavAgent::set_paused(SUB81(*(undefined8 *)(this + 8),0));
    NavAgent::set_radius(*(float *)(this + 0x40));
    NavAgent::set_height(*(float *)(this + 0x44));
    NavAgent::set_position
              (*(undefined8 *)(this + 0x24),*(undefined4 *)(this + 0x2c),*(undefined8 *)(this + 8));
    NavAgent::set_avoidance_layers((uint)*(undefined8 *)(this + 8));
    NavAgent::set_avoidance_enabled(SUB81(*(undefined8 *)(this + 8),0));
    NavAgent::set_use_3d_avoidance(SUB81(*(undefined8 *)(this + 8),0));
    return;
  }
  return;
}



/* NavObstacle::set_agent(NavAgent*) */

void __thiscall NavObstacle::set_agent(NavObstacle *this,NavAgent *param_1)

{
  if (*(NavAgent **)(this + 8) == param_1) {
    return;
  }
  *(NavAgent **)(this + 8) = param_1;
  internal_update_agent(this);
  if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
    NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    return;
  }
  return;
}



/* NavObstacle::set_avoidance_enabled(bool) */

void __thiscall NavObstacle::set_avoidance_enabled(NavObstacle *this,bool param_1)

{
  if (this[0x48] == (NavObstacle)param_1) {
    return;
  }
  this[0x48] = (NavObstacle)param_1;
  this[0x50] = (NavObstacle)0x1;
  internal_update_agent(this);
  if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
    NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    return;
  }
  return;
}



/* NavObstacle::set_map(NavMap*) */

void __thiscall NavObstacle::set_map(NavObstacle *this,NavMap *param_1)

{
  SelfList *pSVar1;
  
  pSVar1 = *(SelfList **)(this + 0x10);
  if (pSVar1 == (SelfList *)param_1) {
    return;
  }
  if (pSVar1 != (SelfList *)0x0) {
    if (*(long *)(this + 0x60) != 0) {
      NavMap::remove_obstacle_sync_dirty_request(pSVar1);
      pSVar1 = *(SelfList **)(this + 0x10);
      if (pSVar1 == (SelfList *)0x0) goto LAB_0010056f;
    }
    NavMap::remove_obstacle((NavObstacle *)pSVar1);
    if (*(NavMap **)(this + 8) != (NavMap *)0x0) {
      NavAgent::set_map(*(NavMap **)(this + 8));
    }
  }
LAB_0010056f:
  *(NavMap **)(this + 0x10) = param_1;
  this[0x50] = (NavObstacle)0x1;
  if (param_1 != (NavMap *)0x0) {
    NavMap::add_obstacle((NavObstacle *)param_1);
    internal_update_agent(this);
    if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
      NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
      return;
    }
  }
  return;
}



/* NavObstacle::set_paused(bool) */

void __thiscall NavObstacle::set_paused(NavObstacle *this,bool param_1)

{
  NavObstacle *pNVar1;
  
  if (this[0x58] == (NavObstacle)param_1) {
    return;
  }
  this[0x58] = (NavObstacle)param_1;
  pNVar1 = *(NavObstacle **)(this + 0x10);
  if (pNVar1 != (NavObstacle *)0x0) {
    if (!param_1) {
      NavMap::add_obstacle(pNVar1);
      internal_update_agent(this);
      return;
    }
    NavMap::remove_obstacle(pNVar1);
  }
  internal_update_agent(this);
  return;
}



/* NavObstacle::get_paused() const */

NavObstacle __thiscall NavObstacle::get_paused(NavObstacle *this)

{
  return this[0x58];
}



/* NavObstacle::request_sync() */

void __thiscall NavObstacle::request_sync(NavObstacle *this)

{
  if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) == 0)) {
    NavMap::add_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    return;
  }
  return;
}



/* NavObstacle::cancel_sync_request() */

void __thiscall NavObstacle::cancel_sync_request(NavObstacle *this)

{
  if ((*(SelfList **)(this + 0x10) != (SelfList *)0x0) && (*(long *)(this + 0x60) != 0)) {
    NavMap::remove_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    return;
  }
  return;
}



/* NavObstacle::NavObstacle() */

void __thiscall NavObstacle::NavObstacle(NavObstacle *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 1;
  this[0x50] = (NavObstacle)0x1;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x58] = (NavObstacle)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(NavObstacle **)(this + 0x68) = this;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return;
}



/* NavObstacle::~NavObstacle() */

void __thiscall NavObstacle::~NavObstacle(NavObstacle *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x60);
  if (*(SelfList **)(this + 0x10) != (SelfList *)0x0) {
    if (plVar3 == (long *)0x0) goto LAB_00100769;
    NavMap::remove_obstacle_sync_dirty_request(*(SelfList **)(this + 0x10));
    plVar3 = *(long **)(this + 0x60);
  }
  if (plVar3 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x70);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(this + 0x78);
    }
    lVar2 = *(long *)(this + 0x78);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (this + 0x60 == (NavObstacle *)*plVar3) {
      *plVar3 = *(long *)(this + 0x70);
    }
    if (this + 0x60 == (NavObstacle *)plVar3[1]) {
      plVar3[1] = lVar2;
    }
  }
LAB_00100769:
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      return;
    }
  }
  return;
}


