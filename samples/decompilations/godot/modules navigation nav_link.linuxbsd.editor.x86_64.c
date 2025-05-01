
/* NavLink::~NavLink() */

void __thiscall NavLink::~NavLink(NavLink *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR_set_use_edge_connections_001005e0;
  plVar3 = *(long **)(this + 0x58);
  if (*(SelfList **)(this + 0x30) != (SelfList *)0x0) {
    if (plVar3 == (long *)0x0) {
      return;
    }
    NavMap::remove_link_sync_dirty_request(*(SelfList **)(this + 0x30));
    plVar3 = *(long **)(this + 0x58);
  }
  if (plVar3 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x68);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(this + 0x70);
    }
    lVar2 = *(long *)(this + 0x70);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (this + 0x58 == (NavLink *)*plVar3) {
      *plVar3 = *(long *)(this + 0x68);
    }
    if (this + 0x58 == (NavLink *)plVar3[1]) {
      plVar3[1] = lVar2;
      return;
    }
  }
  return;
}



/* NavLink::~NavLink() */

void __thiscall NavLink::~NavLink(NavLink *this)

{
  ~NavLink(this);
  operator_delete(this,0x78);
  return;
}



/* NavLink::set_navigation_layers(unsigned int) */

void __thiscall NavLink::set_navigation_layers(NavLink *this,uint param_1)

{
  if (*(uint *)(this + 0x10) != param_1) {
    *(uint *)(this + 0x10) = param_1;
    this[0x55] = (NavLink)0x1;
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_owner_id(ObjectID) */

void __thiscall NavLink::set_owner_id(NavLink *this,long param_2)

{
  if (*(long *)(this + 0x20) != param_2) {
    *(long *)(this + 0x20) = param_2;
    this[0x55] = (NavLink)0x1;
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_enter_cost(float) */

void __thiscall NavLink::set_enter_cost(NavLink *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_1 != *(float *)(this + 0x14)) {
    this[0x55] = (NavLink)0x1;
    *(float *)(this + 0x14) = param_1;
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_travel_cost(float) */

void __thiscall NavLink::set_travel_cost(NavLink *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_1 != *(float *)(this + 0x18)) {
    this[0x55] = (NavLink)0x1;
    *(float *)(this + 0x18) = param_1;
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_map(NavMap*) */

void __thiscall NavLink::set_map(NavLink *this,NavMap *param_1)

{
  SelfList *pSVar1;
  
  pSVar1 = *(SelfList **)(this + 0x30);
  if (pSVar1 == (SelfList *)param_1) {
    return;
  }
  if (pSVar1 != (SelfList *)0x0) {
    if (*(long *)(this + 0x58) != 0) {
      NavMap::remove_link_sync_dirty_request(pSVar1);
      pSVar1 = *(SelfList **)(this + 0x30);
      if (pSVar1 == (SelfList *)0x0) goto LAB_001001ff;
    }
    NavMap::remove_link((NavLink *)pSVar1);
  }
LAB_001001ff:
  *(NavMap **)(this + 0x30) = param_1;
  this[0x55] = (NavLink)0x1;
  if (param_1 != (NavMap *)0x0) {
    NavMap::add_link((NavLink *)param_1);
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_enabled(bool) */

void __thiscall NavLink::set_enabled(NavLink *this,bool param_1)

{
  if (this[0x54] != (NavLink)param_1) {
    this[0x54] = (NavLink)param_1;
    this[0x55] = (NavLink)0x1;
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_bidirectional(bool) */

void __thiscall NavLink::set_bidirectional(NavLink *this,bool param_1)

{
  if (this[0x38] != (NavLink)param_1) {
    this[0x38] = (NavLink)param_1;
    this[0x55] = (NavLink)0x1;
    if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_start_position(Vector3) */

void NavLink::set_start_position(undefined8 param_1,float param_2,long param_3)

{
  if (((*(float *)(param_3 + 0x3c) != (float)param_1) ||
      (*(float *)(param_3 + 0x40) != (float)((ulong)param_1 >> 0x20))) ||
     (*(float *)(param_3 + 0x44) != param_2)) {
    *(undefined1 *)(param_3 + 0x55) = 1;
    *(undefined8 *)(param_3 + 0x3c) = param_1;
    *(float *)(param_3 + 0x44) = param_2;
    if ((*(SelfList **)(param_3 + 0x30) != (SelfList *)0x0) && (*(long *)(param_3 + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(param_3 + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::set_end_position(Vector3) */

void NavLink::set_end_position(undefined8 param_1,float param_2,long param_3)

{
  if (((*(float *)(param_3 + 0x48) != (float)param_1) ||
      (*(float *)(param_3 + 0x4c) != (float)((ulong)param_1 >> 0x20))) ||
     (*(float *)(param_3 + 0x50) != param_2)) {
    *(undefined1 *)(param_3 + 0x55) = 1;
    *(undefined8 *)(param_3 + 0x48) = param_1;
    *(float *)(param_3 + 0x50) = param_2;
    if ((*(SelfList **)(param_3 + 0x30) != (SelfList *)0x0) && (*(long *)(param_3 + 0x58) == 0)) {
      NavMap::add_link_sync_dirty_request(*(SelfList **)(param_3 + 0x30));
      return;
    }
  }
  return;
}



/* NavLink::is_dirty() const */

NavLink __thiscall NavLink::is_dirty(NavLink *this)

{
  return this[0x55];
}



/* NavLink::sync() */

void __thiscall NavLink::sync(NavLink *this)

{
  this[0x55] = (NavLink)0x0;
  return;
}



/* NavLink::request_sync() */

void __thiscall NavLink::request_sync(NavLink *this)

{
  if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) == 0)) {
    NavMap::add_link_sync_dirty_request(*(SelfList **)(this + 0x30));
    return;
  }
  return;
}



/* NavLink::cancel_sync_request() */

void __thiscall NavLink::cancel_sync_request(NavLink *this)

{
  if ((*(SelfList **)(this + 0x30) != (SelfList *)0x0) && (*(long *)(this + 0x58) != 0)) {
    NavMap::remove_link_sync_dirty_request(*(SelfList **)(this + 0x30));
    return;
  }
  return;
}



/* NavLink::NavLink() */

void __thiscall NavLink::NavLink(NavLink *this)

{
  undefined8 uVar1;
  
  uVar1 = _LC1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined8 *)(this + 0x14) = uVar1;
  *(undefined ***)this = &PTR_set_use_edge_connections_001005e0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (NavLink)0x1;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 0x101;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(NavLink **)(this + 0x60) = this;
  *(undefined4 *)(this + 0x28) = 1;
  return;
}



/* NavLink::get_iteration_update(NavLinkIteration&) */

void __thiscall NavLink::get_iteration_update(NavLink *this,NavLinkIteration *param_1)

{
  NavLinkIteration NVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  
  uVar5 = *(undefined8 *)(this + 0x20);
  uVar6 = *(undefined8 *)(this + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(this + 0x14);
  uVar2 = *(undefined4 *)(this + 0x28);
  uVar4 = *(undefined8 *)(this + 0x3c);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  param_1[4] = *(NavLinkIteration *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x44);
  *(undefined8 *)(param_1 + 0x2c) = uVar4;
  uVar4 = *(undefined8 *)(this + 0x48);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0x50);
  NVar1 = *(NavLinkIteration *)(this + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  param_1[0x29] = NVar1;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavBase::set_use_edge_connections(bool) */

void NavBase::set_use_edge_connections(bool param_1)

{
  return;
}



/* NavBase::get_use_edge_connections() const */

undefined8 NavBase::get_use_edge_connections(void)

{
  return 0;
}


