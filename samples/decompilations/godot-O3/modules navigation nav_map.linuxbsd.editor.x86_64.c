
/* NavMap::_build_iteration_threaded(void*) */

void NavMap::_build_iteration_threaded(void *param_1)

{
  NavMapBuilder3D::build_navmap_iteration((NavMapIterationBuild *)param_1);
  return;
}



/* NavMap::compute_single_avoidance_step_2d(unsigned int, NavAgent**) */

void __thiscall
NavMap::compute_single_avoidance_step_2d(NavMap *this,uint param_1,NavAgent **param_2)

{
  NavAgent **ppNVar1;
  
  ppNVar1 = param_2 + param_1;
  RVO2D::Agent2D::computeNeighbors((RVOSimulator2D *)(*ppNVar1 + 0x70));
  RVO2D::Agent2D::computeNewVelocity((RVOSimulator2D *)(*ppNVar1 + 0x70));
  RVO2D::Agent2D::update((RVOSimulator2D *)(*ppNVar1 + 0x70));
  NavAgent::update();
  return;
}



/* NavMap::compute_single_avoidance_step_3d(unsigned int, NavAgent**) */

void __thiscall
NavMap::compute_single_avoidance_step_3d(NavMap *this,uint param_1,NavAgent **param_2)

{
  NavAgent **ppNVar1;
  
  ppNVar1 = param_2 + param_1;
  RVO3D::Agent3D::computeNeighbors((RVOSimulator3D *)(*ppNVar1 + 0x110));
  RVO3D::Agent3D::computeNewVelocity((RVOSimulator3D *)(*ppNVar1 + 0x110));
  RVO3D::Agent3D::update((RVOSimulator3D *)(*ppNVar1 + 0x110));
  NavAgent::update();
  return;
}



/* NavMap::set_up(Vector3) */

void NavMap::set_up(undefined8 param_1,float param_2,long param_3)

{
  if (((*(float *)(param_3 + 8) == (float)param_1) &&
      (*(float *)(param_3 + 0xc) == (float)((ulong)param_1 >> 0x20))) &&
     (*(float *)(param_3 + 0x10) == param_2)) {
    return;
  }
  *(undefined1 *)(param_3 + 0x38) = 1;
  *(undefined8 *)(param_3 + 8) = param_1;
  *(float *)(param_3 + 0x10) = param_2;
  return;
}



/* NavMap::set_cell_size(float) */

void __thiscall NavMap::set_cell_size(NavMap *this,float param_1)

{
  float fVar1;
  
  if (param_1 != *(float *)(this + 0x14)) {
    if (param_1 <= _LC0) {
      param_1 = _LC0;
    }
    *(float *)(this + 0x14) = param_1;
    this[0x38] = (NavMap)0x1;
    fVar1 = param_1 * *(float *)(this + 0x28);
    *(ulong *)(this + 0x1c) = CONCAT44(*(float *)(this + 0x18) * *(float *)(this + 0x28),fVar1);
    *(float *)(this + 0x24) = fVar1;
  }
  return;
}



/* NavMap::set_cell_height(float) */

void __thiscall NavMap::set_cell_height(NavMap *this,float param_1)

{
  float fVar1;
  
  if (param_1 != *(float *)(this + 0x18)) {
    if (param_1 <= _LC0) {
      param_1 = _LC0;
    }
    this[0x38] = (NavMap)0x1;
    fVar1 = *(float *)(this + 0x14) * *(float *)(this + 0x28);
    *(float *)(this + 0x18) = param_1;
    *(float *)(this + 0x1c) = fVar1;
    *(float *)(this + 0x20) = *(float *)(this + 0x28) * param_1;
    *(float *)(this + 0x24) = fVar1;
  }
  return;
}



/* NavMap::set_merge_rasterizer_cell_scale(float) */

void __thiscall NavMap::set_merge_rasterizer_cell_scale(NavMap *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x28)) {
    if (param_1 <= _LC0) {
      param_1 = _LC0;
    }
    this[0x38] = (NavMap)0x1;
    *(float *)(this + 0x1c) = *(float *)(this + 0x14) * param_1;
    *(float *)(this + 0x20) = *(float *)(this + 0x18) * param_1;
    *(float *)(this + 0x24) = *(float *)(this + 0x14) * param_1;
    *(float *)(this + 0x28) = param_1;
  }
  return;
}



/* NavMap::set_use_edge_connections(bool) */

void __thiscall NavMap::set_use_edge_connections(NavMap *this,bool param_1)

{
  if (this[0x2c] != (NavMap)param_1) {
    this[0x2c] = (NavMap)param_1;
    this[0x2a0] = (NavMap)0x1;
  }
  return;
}



/* NavMap::set_edge_connection_margin(float) */

void __thiscall NavMap::set_edge_connection_margin(NavMap *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x30)) {
    this[0x2a0] = (NavMap)0x1;
    *(float *)(this + 0x30) = param_1;
  }
  return;
}



/* NavMap::set_link_connection_radius(float) */

void __thiscall NavMap::set_link_connection_radius(NavMap *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x34)) {
    this[0x2a0] = (NavMap)0x1;
    *(float *)(this + 0x34) = param_1;
  }
  return;
}



/* NavMap::get_merge_rasterizer_cell_size() const */

NavMap * __thiscall NavMap::get_merge_rasterizer_cell_size(NavMap *this)

{
  return this + 0x1c;
}



/* NavMap::get_point_key(Vector3 const&) const */

ulong __thiscall NavMap::get_point_key(NavMap *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)param_1 / *(float *)(this + 0x1c);
  if ((float)((uint)fVar2 & _LC2) < _LC1) {
    fVar2 = (float)((uint)((float)(int)fVar2 -
                          (float)(-(uint)(fVar2 < (float)(int)fVar2) & _LC48._4_4_)) |
                   ~_LC2 & (uint)fVar2);
  }
  fVar3 = *(float *)(param_1 + 4) / *(float *)(this + 0x20);
  if ((float)((uint)fVar3 & _LC2) < _LC1) {
    fVar3 = (float)((uint)((float)(int)fVar3 -
                          (float)(-(uint)(fVar3 < (float)(int)fVar3) & _LC48._4_4_)) |
                   ~_LC2 & (uint)fVar3);
  }
  fVar1 = *(float *)(param_1 + 8) / *(float *)(this + 0x24);
  if ((float)((uint)fVar1 & _LC2) < _LC1) {
    fVar1 = (float)((uint)((float)(int)fVar1 -
                          (float)(-(uint)(fVar1 < (float)(int)fVar1) & _LC48._4_4_)) |
                   ~_LC2 & (uint)fVar1);
  }
  return (ulong)((int)fVar3 & 0x3fffff) << 0x15 | (ulong)((int)fVar2 & 0x1fffff) |
         (ulong)(uint)(int)fVar1 << 0x2b;
}



/* NavMap::query_path(NavMeshQueries3D::NavMeshPathQueryTask3D&) */

void __thiscall NavMap::query_path(NavMap *this,NavMeshPathQueryTask3D *param_1)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  NavMapIteration *pNVar8;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x130) == 0) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001006cf;
  }
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
LAB_0010071f:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar5 = (ulong)*(uint *)(this + 0x1a8);
  uVar1 = *(uint *)(this + 0x1b0);
  if (uVar1 <= *(uint *)(this + 0x1a8)) goto LAB_001006d8;
  pNVar8 = (NavMapIteration *)(uVar5 * 0x180 + *(long *)(this + 0x1b8));
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(pNVar8 + 8));
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) goto LAB_0010071f;
  LOCK();
  *(int *)pNVar8 = *(int *)pNVar8 + 1;
  UNLOCK();
  __mutex = (pthread_mutex_t *)(pNVar8 + 0x120);
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 != 0) goto LAB_00100718;
  iVar4 = *(int *)(pNVar8 + 0x17c);
  *(int *)(pNVar8 + 0x17c) = iVar4 + 1;
  if (*(int *)(pNVar8 + 0x178) == 0) {
    do {
      std::condition_variable::wait((unique_lock *)(pNVar8 + 0x148));
    } while (*(int *)(pNVar8 + 0x178) == 0);
    *(int *)(pNVar8 + 0x17c) = *(int *)(pNVar8 + 0x17c) + -1;
    *(int *)(pNVar8 + 0x178) = *(int *)(pNVar8 + 0x178) + -1;
  }
  else {
    *(int *)(pNVar8 + 0x17c) = iVar4;
    *(int *)(pNVar8 + 0x178) = *(int *)(pNVar8 + 0x178) + -1;
  }
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  __mutex_00 = (pthread_mutex_t *)(pNVar8 + 0xf8);
  iVar4 = pthread_mutex_lock(__mutex_00);
  if (iVar4 != 0) goto LAB_00100718;
  lVar6 = *(long *)(pNVar8 + 0xf0);
  lVar7 = (ulong)*(uint *)(pNVar8 + 0xe8) * 0x30 + lVar6;
  for (; lVar7 != lVar6; lVar6 = lVar6 + 0x30) {
    if (*(char *)(lVar6 + 0x28) == '\0') {
      *(undefined1 *)(lVar6 + 0x28) = 1;
      *(long *)(param_1 + 0x78) = lVar6;
      break;
    }
  }
  pthread_mutex_unlock(__mutex_00);
  if (*(long *)(param_1 + 0x78) == 0) {
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) goto LAB_00100718;
    *(int *)(pNVar8 + 0x178) = *(int *)(pNVar8 + 0x178) + 1;
    std::condition_variable::notify_one();
    pthread_mutex_unlock(__mutex);
    if (*(long *)(param_1 + 0x78) != 0) goto LAB_0010055a;
    _err_print_error("query_path","modules/navigation/nav_map.cpp",0xa4,
                     "Parameter \"p_query_task.path_query_slot\" is null.",
                     "No unused NavMap path query slot found! This should never happen :(.",0,0);
    LOCK();
    *(int *)pNVar8 = *(int *)pNVar8 + -1;
    UNLOCK();
    lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  }
  else {
LAB_0010055a:
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(pNVar8 + 0x40);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(pNVar8 + 0x48);
    NavMeshQueries3D::query_task_map_iteration_get_path(param_1,pNVar8);
    iVar4 = pthread_mutex_lock(__mutex_00);
    if (iVar4 != 0) {
LAB_00100718:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
    }
    uVar1 = *(uint *)(pNVar8 + 0xe8);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0x2c);
    if (uVar1 <= *(uint *)(*(long *)(param_1 + 0x78) + 0x2c)) {
LAB_001006d8:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar5,(ulong)uVar1,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(undefined1 *)(uVar5 * 0x30 + *(long *)(pNVar8 + 0xf0) + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    pthread_mutex_unlock(__mutex_00);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) goto LAB_00100718;
    *(int *)(pNVar8 + 0x178) = *(int *)(pNVar8 + 0x178) + 1;
    std::condition_variable::notify_one();
    pthread_mutex_unlock(__mutex);
    LOCK();
    *(int *)pNVar8 = *(int *)pNVar8 + -1;
    UNLOCK();
    lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  }
  if (lVar2 == lVar6) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(pNVar8 + 8));
    return;
  }
LAB_001006cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMap::get_closest_point_to_segment(Vector3 const&, Vector3 const&, bool) const */

undefined1  [16] __thiscall
NavMap::get_closest_point_to_segment(NavMap *this,Vector3 *param_1,Vector3 *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  NavMapIteration *pNVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x130) == 0) {
    if (get_closest_point_to_segment(Vector3_const&,Vector3_const&,bool)::first_print != '\0') {
      _err_print_error("get_closest_point_to_segment","modules/navigation/nav_map.cpp",0xb6,
                       "NavigationServer navigation map query failed because it was made before first map synchronization.\n\tNavigationServer \'map_changed\' signal can be used to receive update notifications.\n\tNavigationServer \'map_get_iteration_id()\' can be used to check if a map has finished its newest iteration."
                       ,0,0);
      get_closest_point_to_segment(Vector3_const&,Vector3_const&,bool)::first_print = '\0';
    }
    auVar7 = ZEXT812(0);
LAB_0010077a:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar7;
      return auVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar4 == 0xb);
  if (iVar4 != 0x23) {
    uVar1 = *(uint *)(this + 0x1a8);
    if (*(uint *)(this + 0x1b0) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pNVar5 = (NavMapIteration *)((ulong)uVar1 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(pNVar5 + 8));
    } while (iVar4 == 0xb);
    if (iVar4 != 0x23) {
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      auVar7 = NavMeshQueries3D::map_iteration_get_closest_point_to_segment
                         (pNVar5,param_1,param_2,param_3);
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(pNVar5 + 8));
      goto LAB_0010077a;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::get_closest_point(Vector3 const&) const */

undefined1  [16] __thiscall NavMap::get_closest_point(NavMap *this,Vector3 *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  NavMapIteration *pNVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x130) == 0) {
    if (get_closest_point(Vector3_const&)::first_print != '\0') {
      _err_print_error("get_closest_point","modules/navigation/nav_map.cpp",0xc1,
                       "NavigationServer navigation map query failed because it was made before first map synchronization.\n\tNavigationServer \'map_changed\' signal can be used to receive update notifications.\n\tNavigationServer \'map_get_iteration_id()\' can be used to check if a map has finished its newest iteration."
                       ,0,0);
      get_closest_point(Vector3_const&)::first_print = '\0';
    }
    auVar7 = ZEXT812(0);
LAB_00100922:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar7;
      return auVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar4 == 0xb);
  if (iVar4 != 0x23) {
    uVar1 = *(uint *)(this + 0x1a8);
    if (*(uint *)(this + 0x1b0) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pNVar5 = (NavMapIteration *)((ulong)uVar1 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(pNVar5 + 8));
    } while (iVar4 == 0xb);
    if (iVar4 != 0x23) {
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      auVar7 = NavMeshQueries3D::map_iteration_get_closest_point(pNVar5,param_1);
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(pNVar5 + 8));
      goto LAB_00100922;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::get_closest_point_normal(Vector3 const&) const */

undefined1  [16] __thiscall NavMap::get_closest_point_normal(NavMap *this,Vector3 *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  NavMapIteration *pNVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x130) == 0) {
    if (get_closest_point_normal(Vector3_const&)::first_print != '\0') {
      _err_print_error("get_closest_point_normal","modules/navigation/nav_map.cpp",0xcc,
                       "NavigationServer navigation map query failed because it was made before first map synchronization.\n\tNavigationServer \'map_changed\' signal can be used to receive update notifications.\n\tNavigationServer \'map_get_iteration_id()\' can be used to check if a map has finished its newest iteration."
                       ,0,0);
      get_closest_point_normal(Vector3_const&)::first_print = '\0';
    }
    auVar7 = ZEXT812(0);
LAB_00100ab2:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar7;
      return auVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar4 == 0xb);
  if (iVar4 != 0x23) {
    uVar1 = *(uint *)(this + 0x1a8);
    if (*(uint *)(this + 0x1b0) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pNVar5 = (NavMapIteration *)((ulong)uVar1 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(pNVar5 + 8));
    } while (iVar4 == 0xb);
    if (iVar4 != 0x23) {
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      auVar7 = NavMeshQueries3D::map_iteration_get_closest_point_normal(pNVar5,param_1);
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(pNVar5 + 8));
      goto LAB_00100ab2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::get_closest_point_owner(Vector3 const&) const */

undefined8 __thiscall NavMap::get_closest_point_owner(NavMap *this,Vector3 *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  NavMapIteration *pNVar5;
  
  if (*(int *)(this + 0x130) == 0) {
    if (get_closest_point_owner(Vector3_const&)::first_print != '\0') {
      _err_print_error("get_closest_point_owner","modules/navigation/nav_map.cpp",0xd7,
                       "NavigationServer navigation map query failed because it was made before first map synchronization.\n\tNavigationServer \'map_changed\' signal can be used to receive update notifications.\n\tNavigationServer \'map_get_iteration_id()\' can be used to check if a map has finished its newest iteration."
                       ,0,0);
      get_closest_point_owner(Vector3_const&)::first_print = '\0';
    }
    return 0;
  }
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar3 == 0xb);
  if (iVar3 != 0x23) {
    uVar1 = *(uint *)(this + 0x1a8);
    if (*(uint *)(this + 0x1b0) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pNVar5 = (NavMapIteration *)((ulong)uVar1 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(pNVar5 + 8));
    } while (iVar3 == 0xb);
    if (iVar3 != 0x23) {
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      uVar4 = NavMeshQueries3D::map_iteration_get_closest_point_owner(pNVar5,param_1);
      LOCK();
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(pNVar5 + 8));
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::get_closest_point_info(Vector3 const&) const */

NavMap * __thiscall NavMap::get_closest_point_info(NavMap *this,Vector3 *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x1c0));
  } while (iVar4 == 0xb);
  if (iVar4 != 0x23) {
    uVar1 = *(uint *)(param_1 + 0x1a8);
    if (*(uint *)(param_1 + 0x1b0) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(param_1 + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    piVar5 = (int *)((ulong)uVar1 * 0x180 + *(long *)(param_1 + 0x1b8));
    do {
      iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(piVar5 + 2));
    } while (iVar4 == 0xb);
    if (iVar4 != 0x23) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x1c0));
      NavMeshQueries3D::map_iteration_get_closest_point_info
                ((NavMapIteration *)this,(Vector3 *)piVar5);
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(piVar5 + 2));
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::add_region(NavRegion*) */

void __thiscall NavMap::add_region(NavMap *this,NavRegion *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + 0x40);
  pvVar3 = *(void **)(this + 0x48);
  if (uVar1 == *(uint *)(this + 0x44)) {
    uVar4 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar4 = 1;
    }
    *(int *)(this + 0x44) = (int)uVar4;
    pvVar3 = (void *)Memory::realloc_static(pvVar3,uVar4 * 8,false);
    *(void **)(this + 0x48) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x40);
  }
  *(uint *)(this + 0x40) = uVar1 + 1;
  *(NavRegion **)((long)pvVar3 + (ulong)uVar1 * 8) = param_1;
  this[0x2a0] = (NavMap)0x1;
  return;
}



/* NavMap::remove_region(NavRegion*) */

void __thiscall NavMap::remove_region(NavMap *this,NavRegion *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x40);
  if (uVar2 != 0) {
    uVar3 = 0;
    plVar1 = *(long **)(this + 0x48);
    do {
      if ((NavRegion *)*plVar1 == param_1) {
        uVar2 = uVar2 - 1;
        *(uint *)(this + 0x40) = uVar2;
        if (uVar3 < uVar2) {
          *plVar1 = (*(long **)(this + 0x48))[uVar2];
        }
        this[0x2a0] = (NavMap)0x1;
        return;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



/* NavMap::add_link(NavLink*) */

void __thiscall NavMap::add_link(NavMap *this,NavLink *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + 0x50);
  pvVar3 = *(void **)(this + 0x58);
  if (uVar1 == *(uint *)(this + 0x54)) {
    uVar4 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar4 = 1;
    }
    *(int *)(this + 0x54) = (int)uVar4;
    pvVar3 = (void *)Memory::realloc_static(pvVar3,uVar4 * 8,false);
    *(void **)(this + 0x58) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x50);
  }
  *(uint *)(this + 0x50) = uVar1 + 1;
  *(NavLink **)((long)pvVar3 + (ulong)uVar1 * 8) = param_1;
  this[0x2a0] = (NavMap)0x1;
  return;
}



/* NavMap::remove_link(NavLink*) */

void __thiscall NavMap::remove_link(NavMap *this,NavLink *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x50);
  if (uVar2 != 0) {
    uVar3 = 0;
    plVar1 = *(long **)(this + 0x58);
    do {
      if ((NavLink *)*plVar1 == param_1) {
        uVar2 = uVar2 - 1;
        *(uint *)(this + 0x50) = uVar2;
        if (uVar3 < uVar2) {
          *plVar1 = (*(long **)(this + 0x58))[uVar2];
        }
        this[0x2a0] = (NavMap)0x1;
        return;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



/* NavMap::has_agent(NavAgent*) const */

undefined8 __thiscall NavMap::has_agent(NavMap *this,NavAgent *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x110);
  if (*(uint *)(this + 0x108) != 0) {
    plVar1 = plVar2 + *(uint *)(this + 0x108);
    do {
      if ((NavAgent *)*plVar2 == param_1) {
        return 1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  return 0;
}



/* NavMap::add_agent(NavAgent*) */

void __thiscall NavMap::add_agent(NavMap *this,NavAgent *param_1)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(this + 0x108);
  plVar3 = *(long **)(this + 0x110);
  if (uVar1 != 0) {
    plVar4 = plVar3;
    do {
      if (param_1 == (NavAgent *)*plVar4) {
        return;
      }
      plVar4 = plVar4 + 1;
    } while (plVar3 + uVar1 != plVar4);
  }
  if (*(uint *)(this + 0x10c) == uVar1) {
    uVar5 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar5 = 1;
    }
    *(int *)(this + 0x10c) = (int)uVar5;
    plVar3 = (long *)Memory::realloc_static(plVar3,uVar5 << 3,false);
    *(long **)(this + 0x110) = plVar3;
    if (plVar3 == (long *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x108);
  }
  *(uint *)(this + 0x108) = uVar1 + 1;
  plVar3[uVar1] = (long)param_1;
  this[0x100] = (NavMap)0x1;
  return;
}



/* NavMap::has_obstacle(NavObstacle*) const */

undefined8 __thiscall NavMap::has_obstacle(NavMap *this,NavObstacle *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x120);
  if (*(uint *)(this + 0x118) != 0) {
    plVar1 = plVar2 + *(uint *)(this + 0x118);
    do {
      if ((NavObstacle *)*plVar2 == param_1) {
        return 1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  return 0;
}



/* NavMap::add_obstacle(NavObstacle*) */

void __thiscall NavMap::add_obstacle(NavMap *this,NavObstacle *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  cVar3 = NavObstacle::get_paused();
  if (cVar3 != '\0') {
    return;
  }
  uVar1 = *(uint *)(this + 0x118);
  plVar4 = *(long **)(this + 0x120);
  if (uVar1 != 0) {
    plVar5 = plVar4;
    do {
      if (param_1 == (NavObstacle *)*plVar5) {
        return;
      }
      plVar5 = plVar5 + 1;
    } while (plVar4 + uVar1 != plVar5);
  }
  if (*(uint *)(this + 0x11c) == uVar1) {
    uVar6 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(this + 0x11c) = (int)uVar6;
    plVar4 = (long *)Memory::realloc_static(plVar4,uVar6 << 3,false);
    *(long **)(this + 0x120) = plVar4;
    if (plVar4 == (long *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x118);
  }
  *(uint *)(this + 0x118) = uVar1 + 1;
  plVar4[uVar1] = (long)param_1;
  this[0x128] = (NavMap)0x1;
  return;
}



/* NavMap::remove_obstacle(NavObstacle*) */

void __thiscall NavMap::remove_obstacle(NavMap *this,NavObstacle *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x118);
  if (uVar2 != 0) {
    uVar3 = 0;
    plVar1 = *(long **)(this + 0x120);
    do {
      if ((NavObstacle *)*plVar1 == param_1) {
        uVar2 = uVar2 - 1;
        *(uint *)(this + 0x118) = uVar2;
        if (uVar3 < uVar2) {
          *plVar1 = (*(long **)(this + 0x120))[uVar2];
        }
        this[0x128] = (NavMap)0x1;
        return;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



/* NavMap::remove_agent_as_controlled(NavAgent*) */

void __thiscall NavMap::remove_agent_as_controlled(NavMap *this,NavAgent *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0xf0);
  if (uVar2 != 0) {
    uVar3 = 0;
    plVar1 = *(long **)(this + 0xf8);
    do {
      if ((NavAgent *)*plVar1 == param_1) {
        uVar2 = uVar2 - 1;
        *(uint *)(this + 0xf0) = uVar2;
        if (uVar3 < uVar2) {
          *plVar1 = (*(long **)(this + 0xf8))[uVar2];
        }
        this[0x100] = (NavMap)0x1;
        break;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != uVar2);
  }
  uVar2 = *(uint *)(this + 0xe0);
  if (uVar2 != 0) {
    uVar3 = 0;
    plVar1 = *(long **)(this + 0xe8);
    do {
      if ((NavAgent *)*plVar1 == param_1) {
        uVar2 = uVar2 - 1;
        *(uint *)(this + 0xe0) = uVar2;
        if (uVar3 < uVar2) {
          *plVar1 = (*(long **)(this + 0xe8))[uVar2];
        }
        this[0x100] = (NavMap)0x1;
        return;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



/* NavMap::set_agent_as_controlled(NavAgent*) */

void __thiscall NavMap::set_agent_as_controlled(NavMap *this,NavAgent *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  remove_agent_as_controlled(this,param_1);
  cVar3 = NavAgent::get_paused();
  if (cVar3 != '\0') {
    return;
  }
  if (param_1[0x1b0] != (NavAgent)0x0) {
    uVar1 = *(uint *)(this + 0xf0);
    plVar4 = *(long **)(this + 0xf8);
    if (uVar1 != 0) {
      plVar5 = plVar4;
      do {
        if ((NavAgent *)*plVar5 == param_1) {
          return;
        }
        plVar5 = plVar5 + 1;
      } while (plVar4 + uVar1 != plVar5);
    }
    if (*(uint *)(this + 0xf4) == uVar1) {
      uVar6 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar6 = 1;
      }
      *(int *)(this + 0xf4) = (int)uVar6;
      plVar4 = (long *)Memory::realloc_static(plVar4,uVar6 << 3,false);
      *(long **)(this + 0xf8) = plVar4;
      if (plVar4 == (long *)0x0) {
LAB_00101544:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar1 = *(uint *)(this + 0xf0);
    }
    *(uint *)(this + 0xf0) = uVar1 + 1;
    plVar4[uVar1] = (long)param_1;
    this[0x100] = (NavMap)0x1;
    return;
  }
  uVar1 = *(uint *)(this + 0xe0);
  plVar4 = *(long **)(this + 0xe8);
  if (uVar1 != 0) {
    plVar5 = plVar4;
    do {
      if ((NavAgent *)*plVar5 == param_1) {
        return;
      }
      plVar5 = plVar5 + 1;
    } while (plVar4 + uVar1 != plVar5);
  }
  if (*(uint *)(this + 0xe4) == uVar1) {
    uVar6 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(this + 0xe4) = (int)uVar6;
    plVar4 = (long *)Memory::realloc_static(plVar4,uVar6 << 3,false);
    *(long **)(this + 0xe8) = plVar4;
    if (plVar4 == (long *)0x0) goto LAB_00101544;
    uVar1 = *(uint *)(this + 0xe0);
  }
  *(uint *)(this + 0xe0) = uVar1 + 1;
  plVar4[uVar1] = (long)param_1;
  this[0x100] = (NavMap)0x1;
  return;
}



/* NavMap::remove_agent(NavAgent*) */

void __thiscall NavMap::remove_agent(NavMap *this,NavAgent *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  
  remove_agent_as_controlled(this,param_1);
  uVar2 = *(uint *)(this + 0x108);
  if (uVar2 != 0) {
    uVar3 = 0;
    plVar1 = *(long **)(this + 0x110);
    do {
      if ((NavAgent *)*plVar1 == param_1) {
        uVar2 = uVar2 - 1;
        *(uint *)(this + 0x108) = uVar2;
        if (uVar3 < uVar2) {
          *plVar1 = (*(long **)(this + 0x110))[uVar2];
        }
        this[0x100] = (NavMap)0x1;
        return;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



/* NavMap::get_random_point(unsigned int, bool) const */

undefined1  [16] __thiscall NavMap::get_random_point(NavMap *this,uint param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  int iVar5;
  NavMapIteration *pNVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar5 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar5 == 0xb);
  if (iVar5 != 0x23) {
    uVar1 = *(uint *)(this + 0x1a8);
    if (*(uint *)(this + 0x1b0) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pNVar6 = (NavMapIteration *)((ulong)uVar1 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar5 = pthread_rwlock_rdlock((pthread_rwlock_t *)(pNVar6 + 8));
    } while (iVar5 == 0xb);
    if (iVar5 != 0x23) {
      LOCK();
      *(int *)pNVar6 = *(int *)pNVar6 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      auVar4 = NavMeshQueries3D::map_iteration_get_random_point(pNVar6,param_1,param_2);
      LOCK();
      *(int *)pNVar6 = *(int *)pNVar6 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(pNVar6 + 8));
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar7._12_4_ = 0;
        auVar7._0_12_ = auVar4;
        return auVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::_sync_iteration() */

void __thiscall NavMap::_sync_iteration(NavMap *this)

{
  int iVar1;
  
  if (this[0x2a1] != (NavMap)0x0) {
    return;
  }
  if (this[0x2a2] == (NavMap)0x0) {
    return;
  }
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(this + 0x22c);
  *(undefined8 *)(this + 0x144) = *(undefined8 *)(this + 0x21c);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(this + 0x224);
  *(uint *)(this + 0x130) = (*(int *)(this + 0x130) - (uint)(*(int *)(this + 0x130) != -1)) + 2;
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x1c0));
  if (iVar1 != 0x23) {
    *(uint *)(this + 0x1a8) = *(int *)(this + 0x1a8) + 1U & 1;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
    this[0x2a2] = (NavMap)0x0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMap::step(float) */

void __thiscall NavMap::step(NavMap *this,float param_1)

{
  RVOSimulator2D *pRVar1;
  long *plVar2;
  RVOSimulator3D *pRVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  Callable *pCVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 300) = param_1;
  RVO2D::RVOSimulator2D::setTimeStep(param_1);
  RVO3D::RVOSimulator3D::setTimeStep(*(float *)(this + 300));
  pCVar8 = WorkerThreadPool::singleton;
  if (*(uint *)(this + 0xe0) != 0) {
    if ((this[0x134] == (NavMap)0x0) || (this[0x135] == (NavMap)0x0)) {
      plVar12 = *(long **)(this + 0xe8);
      plVar2 = plVar12 + *(uint *)(this + 0xe0);
      do {
        lVar4 = *plVar12;
        plVar12 = plVar12 + 1;
        pRVar1 = (RVOSimulator2D *)(lVar4 + 0x70);
        RVO2D::Agent2D::computeNeighbors(pRVar1);
        RVO2D::Agent2D::computeNewVelocity(pRVar1);
        RVO2D::Agent2D::update(pRVar1);
        NavAgent::update();
      } while (plVar2 != plVar12);
    }
    else {
      if ((step(float)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&step(float)::{lambda()#1}::operator()()::sname), iVar9 != 0))
      {
        _scs_create((char *)&step(float)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&step(float)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&step(float)::{lambda()#1}::operator()()::sname);
      }
      lVar4 = step(float)::{lambda()#1}::operator()()::sname;
      if (step(float)::{lambda()#1}::operator()()::sname == 0) {
LAB_00101c1f:
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(step(float)::{lambda()#1}::operator()()::sname + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          plVar2 = (long *)(*(long *)(step(float)::{lambda()#1}::operator()()::sname + 0x10) + -0x10
                           );
          if (*(long *)(step(float)::{lambda()#1}::operator()()::sname + 0x10) != 0) {
            do {
              lVar7 = *plVar2;
              if (lVar7 == 0) goto LAB_00101c1f;
              LOCK();
              lVar11 = *plVar2;
              bVar13 = lVar7 == lVar11;
              if (bVar13) {
                *plVar2 = lVar7 + 1;
                lVar11 = lVar7;
              }
              UNLOCK();
            } while (!bVar13);
            if (lVar11 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
              goto LAB_00101ad6;
            }
          }
          goto LAB_00101c1f;
        }
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_60);
      }
LAB_00101ad6:
      iVar9 = *(int *)(this + 0xe0);
      uVar6 = *(undefined8 *)(this + 0xe8);
      puVar10 = (undefined8 *)operator_new(0x28,"");
      *puVar10 = &PTR_callback_001072f0;
      puVar10[1] = this;
      puVar10[2] = compute_single_avoidance_step_2d;
      puVar10[3] = 0;
      puVar10[4] = uVar6;
      local_58 = (char *)0x0;
      local_50 = 0;
      WorkerThreadPool::_add_group_task
                (pCVar8,(_func_void_void_ptr_uint *)&local_58,(void *)0x0,
                 (BaseTemplateUserdata *)0x0,(int)puVar10,iVar9,true,(String *)0x1);
      Callable::~Callable((Callable *)&local_58);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar2 = (long *)(local_60 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
    }
  }
  pCVar8 = WorkerThreadPool::singleton;
  if (*(uint *)(this + 0xf0) != 0) {
    if ((this[0x134] != (NavMap)0x0) && (this[0x135] != (NavMap)0x0)) {
      if ((step(float)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&step(float)::{lambda()#2}::operator()()::sname), iVar9 != 0))
      {
        _scs_create((char *)&step(float)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&step(float)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&step(float)::{lambda()#2}::operator()()::sname);
      }
      lVar4 = step(float)::{lambda()#2}::operator()()::sname;
      if (step(float)::{lambda()#2}::operator()()::sname == 0) {
LAB_00101c37:
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(step(float)::{lambda()#2}::operator()()::sname + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          plVar2 = (long *)(*(long *)(step(float)::{lambda()#2}::operator()()::sname + 0x10) + -0x10
                           );
          if (*(long *)(step(float)::{lambda()#2}::operator()()::sname + 0x10) != 0) {
            do {
              lVar7 = *plVar2;
              if (lVar7 == 0) goto LAB_00101c37;
              LOCK();
              lVar11 = *plVar2;
              bVar13 = lVar7 == lVar11;
              if (bVar13) {
                *plVar2 = lVar7 + 1;
                lVar11 = lVar7;
              }
              UNLOCK();
            } while (!bVar13);
            if (lVar11 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
              goto LAB_0010197d;
            }
          }
          goto LAB_00101c37;
        }
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_60);
      }
LAB_0010197d:
      iVar9 = *(int *)(this + 0xf0);
      uVar6 = *(undefined8 *)(this + 0xf8);
      puVar10 = (undefined8 *)operator_new(0x28,"");
      *puVar10 = &PTR_callback_001072f0;
      puVar10[1] = this;
      puVar10[2] = compute_single_avoidance_step_3d;
      puVar10[3] = 0;
      puVar10[4] = uVar6;
      local_58 = (char *)0x0;
      local_50 = 0;
      WorkerThreadPool::_add_group_task
                (pCVar8,(_func_void_void_ptr_uint *)&local_58,(void *)0x0,
                 (BaseTemplateUserdata *)0x0,(int)puVar10,iVar9,true,(String *)0x1);
      Callable::~Callable((Callable *)&local_58);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar2 = (long *)(local_60 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
        return;
      }
      goto LAB_00101cf0;
    }
    plVar12 = *(long **)(this + 0xf8);
    plVar2 = plVar12 + *(uint *)(this + 0xf0);
    do {
      lVar4 = *plVar12;
      plVar12 = plVar12 + 1;
      pRVar3 = (RVOSimulator3D *)(lVar4 + 0x110);
      RVO3D::Agent3D::computeNeighbors(pRVar3);
      RVO3D::Agent3D::computeNewVelocity(pRVar3);
      RVO3D::Agent3D::update(pRVar3);
      NavAgent::update();
    } while (plVar2 != plVar12);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101cf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMap::dispatch_callbacks() */

void __thiscall NavMap::dispatch_callbacks(NavMap *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0xe8);
  lVar1 = lVar2 + (ulong)*(uint *)(this + 0xe0) * 8;
  for (; lVar1 != lVar2; lVar2 = lVar2 + 8) {
    NavAgent::dispatch_avoidance_callback();
  }
  lVar2 = *(long *)(this + 0xf8);
  lVar1 = lVar2 + (ulong)*(uint *)(this + 0xf0) * 8;
  for (; lVar1 != lVar2; lVar2 = lVar2 + 8) {
    NavAgent::dispatch_avoidance_callback();
  }
  return;
}



/* NavMap::_update_merge_rasterizer_cell_dimensions() */

void __thiscall NavMap::_update_merge_rasterizer_cell_dimensions(NavMap *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20);
  fVar1 = (float)*(undefined8 *)(this + 0x14) * fVar2;
  *(ulong *)(this + 0x1c) =
       CONCAT44(fVar2 * (float)((ulong)*(undefined8 *)(this + 0x14) >> 0x20),fVar1);
  *(float *)(this + 0x24) = fVar1;
  return;
}



/* NavMap::get_region_connections_count(NavRegion*) const */

uint __thiscall NavMap::get_region_connections_count(NavMap *this,NavRegion *param_1)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  code *pcVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  
  if (param_1 == (NavRegion *)0x0) {
    _err_print_error("get_region_connections_count","modules/navigation/nav_map.cpp",0x2a7,
                     "Parameter \"p_region\" is null.",0,0);
    return 0;
  }
  do {
    iVar19 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar19 == 0xb);
  if (iVar19 != 0x23) {
    uVar27 = *(uint *)(this + 0x1a8);
    if (*(uint *)(this + 0x1b0) <= uVar27) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar27,
                 (ulong)*(uint *)(this + 0x1b0),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar18 = (code *)invalidInstructionException();
      (*pcVar18)();
    }
    piVar21 = (int *)((ulong)uVar27 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar19 = pthread_rwlock_rdlock((pthread_rwlock_t *)(piVar21 + 2));
    } while (iVar19 == 0xb);
    if (iVar19 != 0x23) {
      LOCK();
      *piVar21 = *piVar21 + 1;
      UNLOCK();
      uVar20 = 0;
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      lVar25 = *(long *)(piVar21 + 0x30);
      uVar27 = uVar20;
      if ((lVar25 != 0) && (uVar27 = 0, piVar21[0x39] != 0)) {
        uVar29 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)piVar21[0x38] * 4));
        lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)piVar21[0x38] * 8);
        uVar22 = (long)param_1 * 0x3ffff - 1;
        uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
        uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
        uVar22 = uVar22 >> 0x16 ^ uVar22;
        uVar30 = uVar22 & 0xffffffff;
        if ((int)uVar22 == 0) {
          uVar30 = 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar30 * lVar1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar29;
        lVar24 = SUB168(auVar2 * auVar10,8);
        uVar26 = *(uint *)(*(long *)(piVar21 + 0x32) + lVar24 * 4);
        uVar23 = SUB164(auVar2 * auVar10,8);
        if (uVar26 != 0) {
          while (((uint)uVar30 != uVar26 ||
                 (*(NavRegion **)(*(long *)(lVar25 + lVar24 * 8) + 0x10) != param_1))) {
            uVar20 = uVar20 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(uVar23 + 1) * lVar1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar29;
            lVar24 = SUB168(auVar3 * auVar11,8);
            uVar26 = *(uint *)(*(long *)(piVar21 + 0x32) + lVar24 * 4);
            uVar23 = SUB164(auVar3 * auVar11,8);
            if ((uVar26 == 0) ||
               (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar26 * lVar1, auVar12._8_8_ = 0,
               auVar12._0_8_ = uVar29, auVar5._8_8_ = 0,
               auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)(uint)piVar21[0x38] * 4) + uVar23) -
                                     SUB164(auVar4 * auVar12,8)) * lVar1, auVar13._8_8_ = 0,
               auVar13._0_8_ = uVar29, SUB164(auVar5 * auVar13,8) < uVar20)) goto LAB_00102090;
          }
          lVar25 = *(long *)(lVar25 + (ulong)uVar23 * 8);
          if (lVar25 != 0) {
            lVar1 = *(long *)(piVar21 + 0x24);
            uVar27 = 0;
            if ((lVar1 == 0) || (piVar21[0x2d] == 0)) goto LAB_0010206d;
            uVar27 = *(uint *)(lVar25 + 0x18);
            uVar29 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)piVar21[0x2c] * 4));
            uVar22 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)piVar21[0x2c] * 8);
            uVar20 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
            uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
            uVar26 = uVar20 ^ uVar20 >> 0x10;
            if (uVar20 == uVar20 >> 0x10) {
              uVar26 = 1;
              uVar30 = uVar22;
            }
            else {
              uVar30 = uVar26 * uVar22;
            }
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar29;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar30;
            lVar25 = SUB168(auVar6 * auVar14,8);
            uVar23 = SUB164(auVar6 * auVar14,8);
            uVar20 = *(uint *)(*(long *)(piVar21 + 0x26) + lVar25 * 4);
            if (uVar20 != 0) {
              uVar28 = 0;
              goto LAB_00102051;
            }
          }
LAB_00102090:
          uVar27 = 0;
        }
      }
LAB_0010206d:
      LOCK();
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(piVar21 + 2));
      return uVar27;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
LAB_00102051:
  if ((uVar20 == uVar26) && (uVar27 == *(uint *)(*(long *)(lVar1 + lVar25 * 8) + 0x10))) {
    lVar25 = *(long *)(lVar1 + (ulong)uVar23 * 8);
    if (lVar25 != 0) {
      uVar27 = *(uint *)(lVar25 + 0x18);
      goto LAB_0010206d;
    }
    goto LAB_00102090;
  }
  uVar28 = uVar28 + 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (uVar23 + 1) * uVar22;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar29;
  lVar25 = SUB168(auVar7 * auVar15,8);
  uVar20 = *(uint *)(*(long *)(piVar21 + 0x26) + lVar25 * 4);
  uVar23 = SUB164(auVar7 * auVar15,8);
  if ((uVar20 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = uVar20 * uVar22, auVar16._8_8_ = 0, auVar16._0_8_ = uVar29,
     auVar9._8_8_ = 0,
     auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)(uint)piVar21[0x2c] * 4) + uVar23) -
                    SUB164(auVar8 * auVar16,8)) * uVar22, auVar17._8_8_ = 0, auVar17._0_8_ = uVar29,
     SUB164(auVar9 * auVar17,8) < uVar28)) goto LAB_00102090;
  goto LAB_00102051;
}



/* NavMap::get_region_connection_pathway_start(NavRegion*, int) const */

undefined1  [16] __thiscall
NavMap::get_region_connection_pathway_start(NavMap *this,NavRegion *param_1,int param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  undefined1 auVar32 [16];
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (NavRegion *)0x0) {
    _err_print_error("get_region_connection_pathway_start","modules/navigation/nav_map.cpp",0x2b7,
                     "Parameter \"p_region\" is null.",0,0);
    local_44 = 0;
    local_4c = 0;
LAB_00102472:
    auVar32._8_4_ = local_44;
    auVar32._0_8_ = local_4c;
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    auVar32._12_4_ = 0;
    return auVar32;
  }
  do {
    iVar20 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar20 == 0xb);
  if (iVar20 != 0x23) {
    uVar27 = *(uint *)(this + 0x1a8);
    uVar21 = *(uint *)(this + 0x1b0);
    if (uVar21 <= uVar27) {
      uVar22 = (ulong)uVar27;
LAB_0010250d:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,uVar22,(ulong)uVar21,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar19 = (code *)invalidInstructionException();
      (*pcVar19)();
    }
    piVar26 = (int *)((ulong)uVar27 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar20 = pthread_rwlock_rdlock((pthread_rwlock_t *)(piVar26 + 2));
    } while (iVar20 == 0xb);
    if (iVar20 != 0x23) {
      LOCK();
      *piVar26 = *piVar26 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      lVar25 = *(long *)(piVar26 + 0x30);
      if ((lVar25 != 0) && (piVar26[0x39] != 0)) {
        uVar28 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)piVar26[0x38] * 4));
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)piVar26[0x38] * 8);
        uVar22 = (long)param_1 * 0x3ffff - 1;
        uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
        uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
        uVar22 = uVar22 >> 0x16 ^ uVar22;
        uVar31 = uVar22 & 0xffffffff;
        if ((int)uVar22 == 0) {
          uVar31 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar31 * lVar2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar28;
        lVar24 = SUB168(auVar3 * auVar11,8);
        uVar27 = *(uint *)(*(long *)(piVar26 + 0x32) + lVar24 * 4);
        uVar21 = SUB164(auVar3 * auVar11,8);
        if (uVar27 != 0) {
          uVar30 = 0;
          while ((uVar27 != (uint)uVar31 ||
                 (*(NavRegion **)(*(long *)(lVar25 + lVar24 * 8) + 0x10) != param_1))) {
            uVar30 = uVar30 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(uVar21 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar28;
            lVar24 = SUB168(auVar4 * auVar12,8);
            uVar27 = *(uint *)(*(long *)(piVar26 + 0x32) + lVar24 * 4);
            uVar21 = SUB164(auVar4 * auVar12,8);
            if ((uVar27 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar27 * lVar2, auVar13._8_8_ = 0,
               auVar13._0_8_ = uVar28, auVar6._8_8_ = 0,
               auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)(uint)piVar26[0x38] * 4) + uVar21) -
                                     SUB164(auVar5 * auVar13,8)) * lVar2, auVar14._8_8_ = 0,
               auVar14._0_8_ = uVar28, SUB164(auVar6 * auVar14,8) < uVar30)) goto LAB_00102455;
          }
          lVar25 = *(long *)(lVar25 + (ulong)uVar21 * 8);
          if ((lVar25 != 0) &&
             ((lVar2 = *(long *)(piVar26 + 0x24), lVar2 != 0 && (piVar26[0x2d] != 0)))) {
            uVar27 = *(uint *)(lVar25 + 0x18);
            uVar28 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)piVar26[0x2c] * 4));
            uVar22 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)piVar26[0x2c] * 8);
            uVar21 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
            uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
            uVar30 = uVar21 ^ uVar21 >> 0x10;
            if (uVar21 == uVar21 >> 0x10) {
              uVar30 = 1;
              uVar31 = uVar22;
            }
            else {
              uVar31 = uVar30 * uVar22;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar28;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar31;
            lVar25 = SUB168(auVar7 * auVar15,8);
            uVar21 = *(uint *)(*(long *)(piVar26 + 0x26) + lVar25 * 4);
            uVar23 = SUB164(auVar7 * auVar15,8);
            if (uVar21 != 0) {
              uVar29 = 0;
              goto LAB_001023ea;
            }
          }
        }
      }
LAB_00102455:
      local_4c = 0;
      local_44 = 0;
LAB_00102466:
      LOCK();
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(piVar26 + 2));
      goto LAB_00102472;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
LAB_001023ea:
  if ((uVar30 == uVar21) && (uVar27 == *(uint *)(*(long *)(lVar2 + lVar25 * 8) + 0x10))) {
    lVar25 = *(long *)(lVar2 + (ulong)uVar23 * 8);
    if (lVar25 != 0) {
      uVar21 = *(uint *)(lVar25 + 0x18);
      if ((param_2 < 0) || ((int)uVar21 <= param_2)) {
        _err_print_index_error
                  ("get_region_connection_pathway_start","modules/navigation/nav_map.cpp",0x2bf,
                   (long)param_2,(long)(int)uVar21,"p_connection_id",
                   "int(found_connections->value.size())","",false,false);
        local_44 = 0;
        local_4c = 0;
        goto LAB_00102466;
      }
      if (uVar21 <= (uint)param_2) {
        uVar22 = (ulong)param_2;
        goto LAB_0010250d;
      }
      lVar25 = *(long *)(lVar25 + 0x20) + (long)param_2 * 0x28;
      local_4c = *(undefined8 *)(lVar25 + 0xc);
      local_44 = *(undefined4 *)(lVar25 + 0x14);
      goto LAB_00102466;
    }
    goto LAB_00102455;
  }
  uVar29 = uVar29 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar23 + 1) * uVar22;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar28;
  lVar25 = SUB168(auVar8 * auVar16,8);
  uVar21 = *(uint *)(*(long *)(piVar26 + 0x26) + lVar25 * 4);
  uVar23 = SUB164(auVar8 * auVar16,8);
  if ((uVar21 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = uVar21 * uVar22, auVar17._8_8_ = 0, auVar17._0_8_ = uVar28,
     auVar10._8_8_ = 0,
     auVar10._0_8_ =
          ((*(uint *)(hash_table_size_primes + (ulong)(uint)piVar26[0x2c] * 4) + uVar23) -
          SUB164(auVar9 * auVar17,8)) * uVar22, auVar18._8_8_ = 0, auVar18._0_8_ = uVar28,
     SUB164(auVar10 * auVar18,8) < uVar29)) goto LAB_00102455;
  goto LAB_001023ea;
}



/* NavMap::get_region_connection_pathway_end(NavRegion*, int) const */

undefined1  [16] __thiscall
NavMap::get_region_connection_pathway_end(NavMap *this,NavRegion *param_1,int param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  undefined1 auVar32 [16];
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (NavRegion *)0x0) {
    _err_print_error("get_region_connection_pathway_end","modules/navigation/nav_map.cpp",0x2c8,
                     "Parameter \"p_region\" is null.",0,0);
    local_44 = 0;
    local_4c = 0;
LAB_00102922:
    auVar32._8_4_ = local_44;
    auVar32._0_8_ = local_4c;
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    auVar32._12_4_ = 0;
    return auVar32;
  }
  do {
    iVar20 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar20 == 0xb);
  if (iVar20 != 0x23) {
    uVar27 = *(uint *)(this + 0x1a8);
    uVar21 = *(uint *)(this + 0x1b0);
    if (uVar21 <= uVar27) {
      uVar22 = (ulong)uVar27;
LAB_001029bd:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,uVar22,(ulong)uVar21,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar19 = (code *)invalidInstructionException();
      (*pcVar19)();
    }
    piVar26 = (int *)((ulong)uVar27 * 0x180 + *(long *)(this + 0x1b8));
    do {
      iVar20 = pthread_rwlock_rdlock((pthread_rwlock_t *)(piVar26 + 2));
    } while (iVar20 == 0xb);
    if (iVar20 != 0x23) {
      LOCK();
      *piVar26 = *piVar26 + 1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
      lVar25 = *(long *)(piVar26 + 0x30);
      if ((lVar25 != 0) && (piVar26[0x39] != 0)) {
        uVar28 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)piVar26[0x38] * 4));
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)piVar26[0x38] * 8);
        uVar22 = (long)param_1 * 0x3ffff - 1;
        uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
        uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
        uVar22 = uVar22 >> 0x16 ^ uVar22;
        uVar31 = uVar22 & 0xffffffff;
        if ((int)uVar22 == 0) {
          uVar31 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar31 * lVar2;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar28;
        lVar24 = SUB168(auVar3 * auVar11,8);
        uVar27 = *(uint *)(*(long *)(piVar26 + 0x32) + lVar24 * 4);
        uVar21 = SUB164(auVar3 * auVar11,8);
        if (uVar27 != 0) {
          uVar30 = 0;
          while ((uVar27 != (uint)uVar31 ||
                 (*(NavRegion **)(*(long *)(lVar25 + lVar24 * 8) + 0x10) != param_1))) {
            uVar30 = uVar30 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(uVar21 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar28;
            lVar24 = SUB168(auVar4 * auVar12,8);
            uVar27 = *(uint *)(*(long *)(piVar26 + 0x32) + lVar24 * 4);
            uVar21 = SUB164(auVar4 * auVar12,8);
            if ((uVar27 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar27 * lVar2, auVar13._8_8_ = 0,
               auVar13._0_8_ = uVar28, auVar6._8_8_ = 0,
               auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)(uint)piVar26[0x38] * 4) + uVar21) -
                                     SUB164(auVar5 * auVar13,8)) * lVar2, auVar14._8_8_ = 0,
               auVar14._0_8_ = uVar28, SUB164(auVar6 * auVar14,8) < uVar30)) goto LAB_00102905;
          }
          lVar25 = *(long *)(lVar25 + (ulong)uVar21 * 8);
          if ((lVar25 != 0) &&
             ((lVar2 = *(long *)(piVar26 + 0x24), lVar2 != 0 && (piVar26[0x2d] != 0)))) {
            uVar27 = *(uint *)(lVar25 + 0x18);
            uVar28 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)piVar26[0x2c] * 4));
            uVar22 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)piVar26[0x2c] * 8);
            uVar21 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
            uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
            uVar30 = uVar21 ^ uVar21 >> 0x10;
            if (uVar21 == uVar21 >> 0x10) {
              uVar30 = 1;
              uVar31 = uVar22;
            }
            else {
              uVar31 = uVar30 * uVar22;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar28;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar31;
            lVar25 = SUB168(auVar7 * auVar15,8);
            uVar21 = *(uint *)(*(long *)(piVar26 + 0x26) + lVar25 * 4);
            uVar23 = SUB164(auVar7 * auVar15,8);
            if (uVar21 != 0) {
              uVar29 = 0;
              goto LAB_0010289a;
            }
          }
        }
      }
LAB_00102905:
      local_4c = 0;
      local_44 = 0;
LAB_00102916:
      LOCK();
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      pthread_rwlock_unlock((pthread_rwlock_t *)(piVar26 + 2));
      goto LAB_00102922;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
LAB_0010289a:
  if ((uVar30 == uVar21) && (uVar27 == *(uint *)(*(long *)(lVar2 + lVar25 * 8) + 0x10))) {
    lVar25 = *(long *)(lVar2 + (ulong)uVar23 * 8);
    if (lVar25 != 0) {
      uVar21 = *(uint *)(lVar25 + 0x18);
      if ((param_2 < 0) || ((int)uVar21 <= param_2)) {
        _err_print_index_error
                  ("get_region_connection_pathway_end","modules/navigation/nav_map.cpp",0x2d0,
                   (long)param_2,(long)(int)uVar21,"p_connection_id",
                   "int(found_connections->value.size())","",false,false);
        local_44 = 0;
        local_4c = 0;
        goto LAB_00102916;
      }
      if (uVar21 <= (uint)param_2) {
        uVar22 = (ulong)param_2;
        goto LAB_001029bd;
      }
      lVar25 = *(long *)(lVar25 + 0x20) + (long)param_2 * 0x28;
      local_4c = *(undefined8 *)(lVar25 + 0x18);
      local_44 = *(undefined4 *)(lVar25 + 0x20);
      goto LAB_00102916;
    }
    goto LAB_00102905;
  }
  uVar29 = uVar29 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar23 + 1) * uVar22;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar28;
  lVar25 = SUB168(auVar8 * auVar16,8);
  uVar21 = *(uint *)(*(long *)(piVar26 + 0x26) + lVar25 * 4);
  uVar23 = SUB164(auVar8 * auVar16,8);
  if ((uVar21 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = uVar21 * uVar22, auVar17._8_8_ = 0, auVar17._0_8_ = uVar28,
     auVar10._8_8_ = 0,
     auVar10._0_8_ =
          ((*(uint *)(hash_table_size_primes + (ulong)(uint)piVar26[0x2c] * 4) + uVar23) -
          SUB164(auVar9 * auVar17,8)) * uVar22, auVar18._8_8_ = 0, auVar18._0_8_ = uVar28,
     SUB164(auVar10 * auVar18,8) < uVar29)) goto LAB_00102905;
  goto LAB_0010289a;
}



/* NavMap::add_region_sync_dirty_request(SelfList<NavRegion>*) */

void __thiscall NavMap::add_region_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    return;
  }
  *(NavMap **)param_1 = this + 0x160;
  lVar1 = *(long *)(this + 0x160);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(SelfList **)(this + 0x168) = param_1;
  }
  else {
    *(SelfList **)(lVar1 + 0x18) = param_1;
  }
  *(SelfList **)(this + 0x160) = param_1;
  return;
}



/* NavMap::add_link_sync_dirty_request(SelfList<NavLink>*) */

void __thiscall NavMap::add_link_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    return;
  }
  *(NavMap **)param_1 = this + 0x170;
  lVar1 = *(long *)(this + 0x170);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(SelfList **)(this + 0x178) = param_1;
  }
  else {
    *(SelfList **)(lVar1 + 0x18) = param_1;
  }
  *(SelfList **)(this + 0x170) = param_1;
  return;
}



/* NavMap::add_agent_sync_dirty_request(SelfList<NavAgent>*) */

void __thiscall NavMap::add_agent_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    return;
  }
  *(NavMap **)param_1 = this + 0x180;
  lVar1 = *(long *)(this + 0x180);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(SelfList **)(this + 0x188) = param_1;
  }
  else {
    *(SelfList **)(lVar1 + 0x18) = param_1;
  }
  *(SelfList **)(this + 0x180) = param_1;
  return;
}



/* NavMap::add_obstacle_sync_dirty_request(SelfList<NavObstacle>*) */

void __thiscall NavMap::add_obstacle_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    return;
  }
  *(NavMap **)param_1 = this + 400;
  lVar1 = *(long *)(this + 400);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(SelfList **)(this + 0x198) = param_1;
  }
  else {
    *(SelfList **)(lVar1 + 0x18) = param_1;
  }
  *(SelfList **)(this + 400) = param_1;
  return;
}



/* NavMap::remove_region_sync_dirty_request(SelfList<NavRegion>*) */

void __thiscall NavMap::remove_region_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(NavMap **)param_1 != (NavMap *)0x0) {
    if (*(NavMap **)param_1 != this + 0x160) {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (param_1 == *(SelfList **)(this + 0x160)) {
      *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_1 + 0x10);
      pSVar3 = *(SelfList **)(this + 0x168);
    }
    else {
      pSVar3 = *(SelfList **)(this + 0x168);
    }
    if (param_1 == pSVar3) {
      *(long *)(this + 0x168) = lVar2;
      *(undefined8 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
      return;
    }
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  }
  return;
}



/* NavMap::remove_link_sync_dirty_request(SelfList<NavLink>*) */

void __thiscall NavMap::remove_link_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(NavMap **)param_1 != (NavMap *)0x0) {
    if (*(NavMap **)param_1 != this + 0x170) {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (param_1 == *(SelfList **)(this + 0x170)) {
      *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_1 + 0x10);
      pSVar3 = *(SelfList **)(this + 0x178);
    }
    else {
      pSVar3 = *(SelfList **)(this + 0x178);
    }
    if (param_1 == pSVar3) {
      *(long *)(this + 0x178) = lVar2;
      *(undefined8 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
      return;
    }
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  }
  return;
}



/* NavMap::remove_agent_sync_dirty_request(SelfList<NavAgent>*) */

void __thiscall NavMap::remove_agent_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(NavMap **)param_1 != (NavMap *)0x0) {
    if (*(NavMap **)param_1 != this + 0x180) {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (param_1 == *(SelfList **)(this + 0x180)) {
      *(undefined8 *)(this + 0x180) = *(undefined8 *)(param_1 + 0x10);
      pSVar3 = *(SelfList **)(this + 0x188);
    }
    else {
      pSVar3 = *(SelfList **)(this + 0x188);
    }
    if (param_1 == pSVar3) {
      *(long *)(this + 0x188) = lVar2;
      *(undefined8 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
      return;
    }
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  }
  return;
}



/* NavMap::remove_obstacle_sync_dirty_request(SelfList<NavObstacle>*) */

void __thiscall NavMap::remove_obstacle_sync_dirty_request(NavMap *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(NavMap **)param_1 != (NavMap *)0x0) {
    if (*(NavMap **)param_1 != this + 400) {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
      return;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    if (param_1 == *(SelfList **)(this + 400)) {
      *(undefined8 *)(this + 400) = *(undefined8 *)(param_1 + 0x10);
      pSVar3 = *(SelfList **)(this + 0x198);
    }
    else {
      pSVar3 = *(SelfList **)(this + 0x198);
    }
    if (param_1 == pSVar3) {
      *(long *)(this + 0x198) = lVar2;
      *(undefined8 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
      return;
    }
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  }
  return;
}



/* NavMap::_sync_dirty_map_update_requests() */

void __thiscall NavMap::_sync_dirty_map_update_requests(NavMap *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x160);
  if (this[0x38] == (NavMap)0x0) {
    if (this[0x2a0] != (NavMap)0x0) goto LAB_00102ffa;
    if (lVar3 == 0) {
      this[0x2a0] = (NavMap)(*(long *)(this + 0x170) != 0);
      goto LAB_00103008;
    }
    this[0x2a0] = (NavMap)0x1;
  }
  else {
    plVar2 = *(long **)(this + 0x48);
    plVar1 = plVar2 + *(uint *)(this + 0x40);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      *(undefined1 *)(*plVar2 + 0xa3) = 1;
    }
    this[0x2a0] = (NavMap)0x1;
LAB_00102ffa:
    if (lVar3 == 0) goto LAB_00103008;
  }
  do {
    NavRegion::sync();
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (lVar3 != 0);
  plVar1 = *(long **)(this + 0x160);
  while (plVar1 != (long *)0x0) {
    if (this + 0x160 == (NavMap *)*plVar1) {
      plVar2 = (long *)plVar1[2];
      if (plVar2 != (long *)0x0) {
        plVar2[3] = plVar1[3];
      }
      lVar3 = plVar1[3];
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar2;
        plVar2 = (long *)plVar1[2];
      }
      *(long **)(this + 0x160) = plVar2;
      if (*(long **)(this + 0x168) == plVar1) {
        *(long *)(this + 0x168) = lVar3;
      }
      *plVar1 = 0;
      *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
      plVar1 = plVar2;
    }
    else {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
      plVar1 = *(long **)(this + 0x160);
    }
  }
LAB_00103008:
  lVar3 = *(long *)(this + 0x170);
  if (lVar3 != 0) {
    do {
      NavLink::sync();
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
    plVar1 = *(long **)(this + 0x170);
    while (plVar1 != (long *)0x0) {
      if (this + 0x170 == (NavMap *)*plVar1) {
        plVar2 = (long *)plVar1[2];
        if (plVar2 != (long *)0x0) {
          plVar2[3] = plVar1[3];
        }
        lVar3 = plVar1[3];
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = plVar2;
          plVar2 = (long *)plVar1[2];
        }
        *(long **)(this + 0x170) = plVar2;
        if (*(long **)(this + 0x178) == plVar1) {
          *(long *)(this + 0x178) = lVar3;
        }
        *plVar1 = 0;
        *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
        plVar1 = plVar2;
      }
      else {
        _err_print_error("remove","./core/templates/self_list.h",0x50,
                         "Condition \"p_elem->_root != this\" is true.",0,0);
        plVar1 = *(long **)(this + 0x170);
      }
    }
  }
  return;
}



/* NavMap::_sync_dirty_avoidance_update_requests() */

void __thiscall NavMap::_sync_dirty_avoidance_update_requests(NavMap *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x180);
  if (this[0x100] == (NavMap)0x0) {
    this[0x100] = (NavMap)(lVar3 != 0);
  }
  if (lVar3 != 0) {
    do {
      NavAgent::sync();
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
    plVar1 = *(long **)(this + 0x180);
    while (plVar1 != (long *)0x0) {
      if (this + 0x180 == (NavMap *)*plVar1) {
        plVar2 = (long *)plVar1[2];
        if (plVar2 != (long *)0x0) {
          plVar2[3] = plVar1[3];
        }
        lVar3 = plVar1[3];
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = plVar2;
          plVar2 = (long *)plVar1[2];
        }
        *(long **)(this + 0x180) = plVar2;
        if (*(long **)(this + 0x188) == plVar1) {
          *(long *)(this + 0x188) = lVar3;
        }
        *plVar1 = 0;
        *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
        plVar1 = plVar2;
      }
      else {
        _err_print_error("remove","./core/templates/self_list.h",0x50,
                         "Condition \"p_elem->_root != this\" is true.",0,0);
        plVar1 = *(long **)(this + 0x180);
      }
    }
  }
  lVar3 = *(long *)(this + 400);
  if (this[0x128] == (NavMap)0x0) {
    this[0x128] = (NavMap)(lVar3 != 0);
  }
  if (lVar3 != 0) {
    do {
      NavObstacle::sync();
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
    plVar1 = *(long **)(this + 400);
    while (plVar1 != (long *)0x0) {
      if (this + 400 == (NavMap *)*plVar1) {
        plVar2 = (long *)plVar1[2];
        if (plVar2 != (long *)0x0) {
          plVar2[3] = plVar1[3];
        }
        lVar3 = plVar1[3];
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = plVar2;
          plVar2 = (long *)plVar1[2];
        }
        *(long **)(this + 400) = plVar2;
        if (*(long **)(this + 0x198) == plVar1) {
          *(long *)(this + 0x198) = lVar3;
        }
        *plVar1 = 0;
        *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
        plVar1 = plVar2;
      }
      else {
        _err_print_error("remove","./core/templates/self_list.h",0x50,
                         "Condition \"p_elem->_root != this\" is true.",0,0);
        plVar1 = *(long **)(this + 400);
      }
    }
  }
  return;
}



/* NavMap::set_use_async_iterations(bool) */

void __thiscall NavMap::set_use_async_iterations(NavMap *this,bool param_1)

{
  if (this[0x1a4] != (NavMap)param_1) {
    this[0x1a4] = (NavMap)param_1;
  }
  return;
}



/* NavMap::get_use_async_iterations() const */

NavMap __thiscall NavMap::get_use_async_iterations(NavMap *this)

{
  return this[0x1a4];
}



/* NavMap::_update_rvo_obstacles_tree_2d() */

void __thiscall NavMap::_update_rvo_obstacles_tree_2d(NavMap *this)

{
  ulong uVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *__src;
  long *plVar13;
  float *__dest;
  Obstacle2D *this_00;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  Obstacle2D OVar24;
  float *unaff_R12;
  size_t __n;
  float *unaff_R13;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *local_70;
  Obstacle2D *local_60;
  undefined1 local_58 [16];
  float *local_48;
  long local_40;
  
  iVar15 = 0;
  plVar13 = *(long **)(this + 0x120);
  uVar19 = (ulong)*(uint *)(this + 0x118);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = plVar13 + uVar19;
  if (plVar13 == plVar2) {
    lVar20 = *(long *)(this + 0x90);
    uVar21 = 0;
    if (lVar20 == *(long *)(this + 0x98)) goto LAB_00103466;
  }
  else {
    do {
      if (*(long *)(*plVar13 + 0x38) == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(*(long *)(*plVar13 + 0x38) + -8);
      }
      plVar13 = plVar13 + 1;
      iVar15 = iVar15 + iVar17;
    } while (plVar2 != plVar13);
    lVar20 = *(long *)(this + 0x90);
    uVar21 = (ulong)iVar15;
    if (*(long *)(this + 0x98) == lVar20) goto LAB_00103428;
  }
  uVar19 = 0;
  do {
    pvVar8 = *(void **)(lVar20 + uVar19 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8,0x40);
      lVar20 = *(long *)(this + 0x90);
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < (ulong)(*(long *)(this + 0x98) - lVar20 >> 3));
  if (*(long *)(this + 0x98) != lVar20) {
    *(long *)(this + 0x98) = lVar20;
  }
LAB_00103428:
  if (uVar21 >> 0x3c != 0) {
LAB_001039ea:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if ((ulong)(*(long *)(this + 0xa0) - lVar20 >> 3) < uVar21) {
    uVar21 = uVar21 << 3;
    lVar20 = *(long *)(this + 0x98) - lVar20;
    __dest = (float *)operator_new(uVar21);
    unaff_R13 = *(float **)(this + 0x90);
    if (0 < *(long *)(this + 0x98) - (long)unaff_R13) {
      memmove(__dest,unaff_R13,*(long *)(this + 0x98) - (long)unaff_R13);
      uVar19 = *(long *)(this + 0xa0) - (long)unaff_R13;
      goto LAB_00103997;
    }
    if (unaff_R13 != (float *)0x0) goto LAB_001039cd;
    goto LAB_00103954;
  }
  do {
    plVar13 = *(long **)(this + 0x120);
    uVar19 = (ulong)*(uint *)(this + 0x118);
LAB_00103466:
    local_70 = (vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *)(this + 0x90);
    plVar2 = plVar13 + uVar19;
    __dest = unaff_R12;
    for (; pfVar23 = __dest, plVar13 != plVar2; plVar13 = plVar13 + 1) {
      while( true ) {
        lVar20 = *plVar13;
        if ((*(long *)(lVar20 + 0x38) == 0) ||
           (unaff_R13 = *(float **)(*(long *)(lVar20 + 0x38) + -8), (long)unaff_R13 < 2)) break;
        if ((float *)0xfffffffffffffff < unaff_R13) goto LAB_001039ea;
        __dest = (float *)operator_new((long)unaff_R13 * 8);
        unaff_R13 = __dest + (long)unaff_R13 * 2;
        uVar4 = *(undefined4 *)(lVar20 + 0x44);
        uVar7 = *(undefined4 *)(lVar20 + 0x4c);
        pfVar22 = *(float **)(lVar20 + 0x38);
        local_58._8_8_ = __dest;
        local_58._0_8_ = __dest;
        local_48 = unaff_R13;
        if ((pfVar22 != (float *)0x0) &&
           (pfVar3 = pfVar22 + *(long *)(pfVar22 + -2) * 3, pfVar22 != pfVar3)) {
          do {
            while( true ) {
              if ((pfVar22[1] != 0.0) && (_update_rvo_obstacles_tree_2d()::first_print != '\0')) {
                _err_print_error("_update_rvo_obstacles_tree_2d","modules/navigation/nav_map.cpp",
                                 0x21c,
                                 "Y coordinates of static obstacle vertices are ignored. Please use obstacle position Y to change elevation of obstacle."
                                 ,0,1);
                _update_rvo_obstacles_tree_2d()::first_print = '\0';
              }
              local_60 = (Obstacle2D *)
                         CONCAT44(*(float *)(lVar20 + 0x2c) + pfVar22[2],
                                  *(float *)(lVar20 + 0x24) + *pfVar22);
              if (__dest != unaff_R13) break;
              pfVar22 = pfVar22 + 3;
              std::vector<RVO2D::Vector2,std::allocator<RVO2D::Vector2>>::
              _M_realloc_insert<RVO2D::Vector2>
                        ((vector<RVO2D::Vector2,std::allocator<RVO2D::Vector2>> *)local_58,__dest,
                         &local_60);
              __dest = (float *)local_58._8_8_;
              pfVar23 = (float *)local_58._8_8_;
              unaff_R13 = local_48;
              if (pfVar3 == pfVar22) goto LAB_001035b0;
            }
            *(Obstacle2D **)__dest = local_60;
            pfVar22 = pfVar22 + 3;
            __dest = __dest + 2;
            local_58._8_8_ = __dest;
            pfVar23 = __dest;
          } while (pfVar3 != pfVar22);
LAB_001035b0:
          __dest = (float *)local_58._0_8_;
          lVar9 = *(long *)(this + 0x98);
          lVar10 = *(long *)(this + 0x90);
          lVar16 = (long)pfVar23 - local_58._0_8_;
          uVar19 = lVar16 >> 3;
          if (lVar16 == 0) {
            if ((float *)local_58._0_8_ == (float *)0x0) break;
          }
          else {
            uVar21 = 0;
            do {
              while( true ) {
                this_00 = (Obstacle2D *)operator_new(0x40);
                RVO2D::Obstacle2D::Obstacle2D(this_00);
                uVar6 = *(undefined8 *)((undefined8)__dest + uVar21 * 2);
                *(undefined8 *)(this_00 + 0x10) = uVar6;
                uVar5 = *(undefined4 *)(lVar20 + 0x28);
                *(undefined4 *)(this_00 + 0x30) = uVar7;
                *(ulong *)(this_00 + 0x28) = CONCAT44(uVar5,uVar4);
                if (uVar21 != 0) {
                  lVar11 = *(long *)(*(long *)(this + 0x98) + -8);
                  *(long *)(this_00 + 0x18) = lVar11;
                  *(Obstacle2D **)(lVar11 + 8) = this_00;
                }
                lVar11 = *(long *)(this + 0x90);
                uVar1 = uVar21 + 1;
                if (uVar21 == uVar19 - 1) {
                  lVar12 = *(long *)(lVar11 + (lVar9 - lVar10));
                  *(long *)(this_00 + 8) = lVar12;
                  *(Obstacle2D **)(lVar12 + 0x18) = this_00;
                  pfVar23 = __dest;
                }
                else {
                  pfVar23 = (float *)((undefined8)__dest + uVar1 * 2);
                }
                OVar24 = (Obstacle2D)0x1;
                fVar26 = (float)*(undefined8 *)pfVar23 - (float)uVar6;
                fVar27 = (float)((ulong)*(undefined8 *)pfVar23 >> 0x20) -
                         (float)((ulong)uVar6 >> 0x20);
                fVar25 = _LC48._4_4_ / SQRT(fVar26 * fVar26 + fVar27 * fVar27);
                *(ulong *)(this_00 + 0x20) = CONCAT44(fVar25 * fVar27,fVar25 * fVar26);
                if (lVar16 != 0x10) {
                  uVar18 = uVar21 - 1;
                  if (uVar21 == 0) {
                    uVar18 = uVar19 - 1;
                  }
                  fVar25 = ((float *)((undefined8)__dest + uVar18 * 2))[1];
                  fVar26 = *(float *)((undefined8)__dest + uVar18 * 2);
                  OVar24 = (Obstacle2D)
                           (0.0 <= (*(float *)((undefined8)__dest + uVar1 * 2 + -1) - fVar25) *
                                   (fVar26 - *pfVar23) -
                                   (*(float *)((undefined8)__dest + uVar1 * 2 + -2) - fVar26) *
                                   (fVar25 - pfVar23[1]));
                }
                puVar14 = *(undefined8 **)(this + 0x98);
                *this_00 = OVar24;
                *(long *)(this_00 + 0x38) = (long)puVar14 - lVar11 >> 3;
                uVar21 = uVar1;
                local_60 = this_00;
                if (puVar14 != *(undefined8 **)(this + 0xa0)) break;
                std::vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>>::
                _M_realloc_insert<RVO2D::Obstacle2D*const&>(local_70,puVar14,&local_60);
                if (uVar19 <= uVar1) goto LAB_00103800;
              }
              *puVar14 = this_00;
              *(undefined8 **)(this + 0x98) = puVar14 + 1;
            } while (uVar1 < uVar19);
          }
        }
LAB_00103800:
        plVar13 = plVar13 + 1;
        operator_delete(__dest,(long)unaff_R13 - (long)__dest);
        pfVar23 = __dest;
        if (plVar2 == plVar13) goto LAB_00103820;
      }
      __dest = pfVar23;
    }
LAB_00103820:
    uVar21 = *(long *)(this + 0x98) - *(long *)(this + 0x90);
    local_48 = (float *)0x0;
    lVar20 = *(long *)(this + 0x88);
    local_58 = (undefined1  [16])0x0;
    local_58._0_8_ = (undefined8 *)0x0;
    if (uVar21 == 0) {
      local_48 = (float *)0x0;
      __n = 0;
      puVar14 = (undefined8 *)0x0;
      goto LAB_001038ae;
    }
    if (uVar21 < 0x7ffffffffffffff9) {
      puVar14 = (undefined8 *)operator_new(uVar21);
      __src = *(undefined8 **)(this + 0x90);
      local_48 = (float *)((long)puVar14 + uVar21);
      __n = *(long *)(this + 0x98) - (long)__src;
      local_58._8_8_ = puVar14;
      local_58._0_8_ = puVar14;
      if ((long)__n < 9) {
        if (__n == 8) {
          *puVar14 = *__src;
        }
      }
      else {
        puVar14 = (undefined8 *)memmove(puVar14,__src,__n);
      }
LAB_001038ae:
      local_58._8_8_ = (long)puVar14 + __n;
      RVO2D::KdTree2D::buildObstacleTree(lVar20,local_58);
      if ((void *)local_58._0_8_ != (void *)0x0) {
        operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    std::__throw_bad_array_new_length();
LAB_001039cd:
    uVar19 = *(long *)(this + 0xa0) - (long)unaff_R13;
LAB_00103997:
    operator_delete(unaff_R13,uVar19);
LAB_00103954:
    *(float **)(this + 0x90) = __dest;
    unaff_R12 = (float *)((long)__dest + uVar21);
    *(long *)(this + 0x98) = lVar20 + (long)__dest;
    *(float **)(this + 0xa0) = unaff_R12;
  } while( true );
}



/* NavMap::_update_rvo_agents_tree_2d() */

void __thiscall NavMap::_update_rvo_agents_tree_2d(NavMap *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *__src;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long *local_68;
  long *plStack_60;
  long *local_58;
  undefined1 local_48 [16];
  long local_38;
  long local_30;
  
  uVar4 = (ulong)*(uint *)(this + 0xe0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  local_58 = (long *)0x0;
  if (uVar4 == 0) {
    uVar6 = *(undefined8 *)(this + 0x88);
    __src = (long *)0x0;
LAB_00103a46:
    local_48._0_8_ = (long *)0x0;
    local_38 = 0;
LAB_00103a5b:
    local_48._8_8_ = local_38;
    RVO2D::KdTree2D::buildAgentTree(uVar6,local_48);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      operator_delete((void *)local_48._0_8_,local_38 - local_48._0_8_);
    }
    if (__src == (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00103c48;
    }
LAB_00103bef:
    uVar4 = (long)local_58 - (long)__src;
  }
  else {
    local_68 = (long *)operator_new(uVar4 * 8);
    local_58 = local_68 + uVar4;
    plVar3 = *(long **)(this + 0xe8);
    plVar1 = plVar3 + *(uint *)(this + 0xe0);
    __src = local_68;
    plStack_60 = local_68;
    if (plVar1 == plVar3) {
LAB_00103c27:
      uVar6 = *(undefined8 *)(this + 0x88);
      goto LAB_00103a46;
    }
    plStack_60 = local_68;
    while( true ) {
      local_48._0_8_ = *plVar3 + 0x70;
      if (local_58 == plStack_60) {
        std::vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>>::
        _M_realloc_insert<RVO2D::Agent2D*>
                  ((vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>> *)&local_68,plStack_60,
                   local_48);
        plVar5 = plStack_60;
        __src = local_68;
      }
      else {
        *plStack_60 = *plVar3 + 0x70;
        plVar5 = plStack_60 + 1;
        __src = local_68;
      }
      local_68 = __src;
      plStack_60 = plVar5;
      if (plVar1 == plVar3 + 1) break;
      plVar3 = plVar3 + 1;
    }
    local_38 = 0;
    uVar6 = *(undefined8 *)(this + 0x88);
    local_48 = (undefined1  [16])0x0;
    uVar4 = (long)plVar5 - (long)__src;
    if (uVar4 == 0) goto LAB_00103a46;
    if (0x7ffffffffffffff8 < uVar4) {
      std::__throw_bad_array_new_length();
      __src = plVar5;
      goto LAB_00103c27;
    }
    local_48._0_8_ = operator_new(uVar4);
    lVar2 = local_48._0_8_ + uVar4;
    local_48._8_8_ = local_48._0_8_;
    local_38 = lVar2;
    if ((long)uVar4 < 9) {
      if (uVar4 == 8) {
        *(long *)local_48._0_8_ = *__src;
        goto LAB_00103bbb;
      }
      goto LAB_00103a5b;
    }
    memmove((void *)local_48._0_8_,__src,uVar4);
LAB_00103bbb:
    local_48._8_8_ = lVar2;
    RVO2D::KdTree2D::buildAgentTree(uVar6,local_48);
    uVar4 = (long)local_58 - (long)__src;
    if ((void *)local_48._0_8_ != (void *)0x0) {
      operator_delete((void *)local_48._0_8_,local_38 - local_48._0_8_);
      goto LAB_00103bef;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(__src,uVar4);
    return;
  }
LAB_00103c48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMap::_update_rvo_agents_tree_3d() */

void __thiscall NavMap::_update_rvo_agents_tree_3d(NavMap *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *__src;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long *local_68;
  long *plStack_60;
  long *local_58;
  undefined1 local_48 [16];
  long local_38;
  long local_30;
  
  uVar4 = (ulong)*(uint *)(this + 0xf0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  local_58 = (long *)0x0;
  if (uVar4 == 0) {
    uVar6 = *(undefined8 *)(this + 0xb8);
    __src = (long *)0x0;
LAB_00103c96:
    local_48._0_8_ = (long *)0x0;
    local_38 = 0;
LAB_00103cab:
    local_48._8_8_ = local_38;
    RVO3D::KdTree3D::buildAgentTree(uVar6,local_48);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      operator_delete((void *)local_48._0_8_,local_38 - local_48._0_8_);
    }
    if (__src == (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00103e98;
    }
LAB_00103e47:
    uVar4 = (long)local_58 - (long)__src;
  }
  else {
    local_68 = (long *)operator_new(uVar4 * 8);
    local_58 = local_68 + uVar4;
    plVar3 = *(long **)(this + 0xf8);
    plVar1 = plVar3 + *(uint *)(this + 0xf0);
    __src = local_68;
    plStack_60 = local_68;
    if (plVar1 == plVar3) {
LAB_00103e77:
      uVar6 = *(undefined8 *)(this + 0xb8);
      goto LAB_00103c96;
    }
    plStack_60 = local_68;
    while( true ) {
      local_48._0_8_ = *plVar3 + 0x110;
      if (local_58 == plStack_60) {
        std::vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>>::
        _M_realloc_insert<RVO3D::Agent3D*>
                  ((vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>> *)&local_68,plStack_60,
                   local_48);
        plVar5 = plStack_60;
        __src = local_68;
      }
      else {
        *plStack_60 = *plVar3 + 0x110;
        plVar5 = plStack_60 + 1;
        __src = local_68;
      }
      local_68 = __src;
      plStack_60 = plVar5;
      if (plVar1 == plVar3 + 1) break;
      plVar3 = plVar3 + 1;
    }
    local_38 = 0;
    uVar6 = *(undefined8 *)(this + 0xb8);
    local_48 = (undefined1  [16])0x0;
    uVar4 = (long)plVar5 - (long)__src;
    if (uVar4 == 0) goto LAB_00103c96;
    if (0x7ffffffffffffff8 < uVar4) {
      std::__throw_bad_array_new_length();
      __src = plVar5;
      goto LAB_00103e77;
    }
    local_48._0_8_ = operator_new(uVar4);
    lVar2 = local_48._0_8_ + uVar4;
    local_48._8_8_ = local_48._0_8_;
    local_38 = lVar2;
    if ((long)uVar4 < 9) {
      if (uVar4 == 8) {
        *(long *)local_48._0_8_ = *__src;
        goto LAB_00103e13;
      }
      goto LAB_00103cab;
    }
    memmove((void *)local_48._0_8_,__src,uVar4);
LAB_00103e13:
    local_48._8_8_ = lVar2;
    RVO3D::KdTree3D::buildAgentTree(uVar6,local_48);
    uVar4 = (long)local_58 - (long)__src;
    if ((void *)local_48._0_8_ != (void *)0x0) {
      operator_delete((void *)local_48._0_8_,local_38 - local_48._0_8_);
      goto LAB_00103e47;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(__src,uVar4);
    return;
  }
LAB_00103e98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMap::_update_rvo_simulation() */

void __thiscall NavMap::_update_rvo_simulation(NavMap *this)

{
  NavMap NVar1;
  
  if (this[0x128] == (NavMap)0x0) {
    NVar1 = this[0x100];
  }
  else {
    _update_rvo_obstacles_tree_2d(this);
    NVar1 = this[0x100];
  }
  if (NVar1 == (NavMap)0x0) {
    return;
  }
  _update_rvo_agents_tree_2d(this);
  _update_rvo_agents_tree_3d(this);
  return;
}



/* NavMap::_sync_avoidance() */

void __thiscall NavMap::_sync_avoidance(NavMap *this)

{
  _sync_dirty_avoidance_update_requests(this);
  if (this[0x128] != (NavMap)0x0) {
    _update_rvo_obstacles_tree_2d(this);
  }
  if (this[0x100] == (NavMap)0x0) {
    this[0x128] = (NavMap)0x0;
    this[0x100] = (NavMap)0x0;
    return;
  }
  _update_rvo_agents_tree_2d(this);
  _update_rvo_agents_tree_3d(this);
  this[0x128] = (NavMap)0x0;
  this[0x100] = (NavMap)0x0;
  return;
}



/* NavMap::~NavMap() */

void __thiscall NavMap::~NavMap(NavMap *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  if (*(long *)(this + 0x298) != -1) {
    WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    *(undefined8 *)(this + 0x298) = 0xffffffffffffffff;
  }
  if (*(void **)(this + 0x278) != (void *)0x0) {
    if (*(int *)(this + 0x270) != 0) {
      *(undefined4 *)(this + 0x270) = 0;
    }
    Memory::free_static(*(void **)(this + 0x278),false);
  }
  pvVar3 = *(void **)(this + 0x248);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x250) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00104029;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
LAB_00104029:
  pvVar3 = *(void **)(this + 0x1b8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1b0) != 0) {
      lVar2 = 0;
      while( true ) {
        NavMapIteration::~NavMapIteration((NavMapIteration *)((long)pvVar3 + lVar2 * 0x180));
        if (*(uint *)(this + 0x1b0) <= (uint)(lVar2 + 1)) break;
        pvVar3 = *(void **)(this + 0x1b8);
        lVar2 = lVar2 + 1;
      }
      pvVar3 = *(void **)(this + 0x1b8);
      *(undefined4 *)(this + 0x1b0) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_0010408e;
    }
    Memory::free_static(pvVar3,false);
  }
LAB_0010408e:
  if (*(void **)(this + 0x120) != (void *)0x0) {
    if (*(int *)(this + 0x118) != 0) {
      *(undefined4 *)(this + 0x118) = 0;
    }
    Memory::free_static(*(void **)(this + 0x120),false);
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    if (*(int *)(this + 0x108) != 0) {
      *(undefined4 *)(this + 0x108) = 0;
    }
    Memory::free_static(*(void **)(this + 0x110),false);
  }
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    if (*(int *)(this + 0xf0) != 0) {
      *(undefined4 *)(this + 0xf0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xf8),false);
  }
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    if (*(int *)(this + 0xe0) != 0) {
      *(undefined4 *)(this + 0xe0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xe8),false);
  }
  RVO3D::RVOSimulator3D::~RVOSimulator3D((RVOSimulator3D *)(this + 0xb0));
  RVO2D::RVOSimulator2D::~RVOSimulator2D((RVOSimulator2D *)(this + 0x60));
  if (*(void **)(this + 0x58) != (void *)0x0) {
    if (*(int *)(this + 0x50) != 0) {
      *(undefined4 *)(this + 0x50) = 0;
    }
    Memory::free_static(*(void **)(this + 0x58),false);
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    if (*(int *)(this + 0x40) != 0) {
      *(undefined4 *)(this + 0x40) = 0;
    }
    Memory::free_static(*(void **)(this + 0x48),false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavMap::NavMap() */

void __thiscall NavMap::NavMap(NavMap *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  NavMap NVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  void *pvVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  NavMapIteration *this_00;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  uVar5 = _LC51;
  uVar3 = _LC48;
  uVar2 = CONCAT44(_LC50,_UNK_00107508);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x2c] = (NavMap)0x1;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar4 = _LC50;
  *(undefined8 *)(this + 0x30) = uVar5;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  this[0x38] = (NavMap)0x1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x24) = uVar4;
  RVO2D::RVOSimulator2D::RVOSimulator2D((RVOSimulator2D *)(this + 0x60));
  RVO3D::RVOSimulator3D::RVOSimulator3D((RVOSimulator3D *)(this + 0xb0));
  *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined2 *)(this + 0x134) = 0x101;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x100] = (NavMap)0x1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x128] = (NavMap)0x1;
  *(undefined8 *)(this + 300) = 0;
  this[0x136] = (NavMap)0x1;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x1a0) = 4;
  this[0x1a4] = (NavMap)0x1;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  this[0x204] = (NavMap)0x1;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  uVar3 = _UNK_00107518;
  uVar2 = _LC58;
  *(undefined2 *)(this + 0x2a0) = 1;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  this[0x290] = (NavMap)0x0;
  *(undefined8 *)(this + 0x298) = 0xffffffffffffffff;
  this[0x2a2] = (NavMap)0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x268) = uVar2;
  *(undefined8 *)(this + 0x270) = uVar3;
  *(undefined1 (*) [16])(this + 0x278) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,
             "navigation/avoidance/thread_model/avoidance_use_multiple_threads",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  NVar6 = (NavMap)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0x135] = NVar6;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,
             "navigation/avoidance/thread_model/avoidance_use_high_priority_threads",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  NVar6 = (NavMap)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0x136] = NVar6;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"navigation/pathfinding/max_threads",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0x1a0) = iVar7;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  plVar9 = (long *)OS::get_singleton();
  iVar8 = (**(code **)(*plVar9 + 0x2d8))(plVar9);
  iVar7 = *(int *)(this + 0x1a0);
  if ((iVar7 < 0) || (iVar8 < iVar7)) {
    *(int *)(this + 0x1a0) = iVar8;
    iVar7 = iVar8;
  }
  if (iVar7 < 1) {
    *(undefined4 *)(this + 0x1a0) = 1;
  }
  pvVar10 = *(void **)(this + 0x1b8);
  uVar12 = *(uint *)(this + 0x1b0);
  if (2 < uVar12) {
    lVar15 = 0x300;
    uVar12 = 2;
    while( true ) {
      this_00 = (NavMapIteration *)((long)pvVar10 + lVar15);
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x180;
      NavMapIteration::~NavMapIteration(this_00);
      if (*(uint *)(this + 0x1b0) <= uVar12) break;
      pvVar10 = *(void **)(this + 0x1b8);
    }
    *(undefined4 *)(this + 0x1b0) = 2;
    pvVar10 = *(void **)(this + 0x1b8);
    goto LAB_0010465a;
  }
  if (uVar12 == 2) goto LAB_0010465a;
  if (*(uint *)(this + 0x1b4) < 2) {
    *(undefined4 *)(this + 0x1b4) = 2;
    pvVar10 = (void *)Memory::realloc_static(pvVar10,0x300,false);
    *(void **)(this + 0x1b8) = pvVar10;
    if (pvVar10 == (void *)0x0) {
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar12 = *(uint *)(this + 0x1b0);
    if (uVar12 < 2) goto LAB_001047a4;
  }
  else {
LAB_001047a4:
    uVar2 = _LC58;
    uVar16 = (ulong)(-uVar12 & 0x180);
    while( true ) {
      puVar14 = (undefined4 *)((long)pvVar10 + uVar16);
      *puVar14 = 0;
      *(undefined1 (*) [16])(puVar14 + 0x42) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar14 + 0xe) = 0;
      *(undefined8 *)(puVar14 + 0x10) = 0;
      uVar5 = _UNK_00107518;
      uVar3 = _LC58;
      puVar14[0x12] = 0;
      *(undefined8 *)(puVar14 + 0x14) = 0;
      *(undefined8 *)(puVar14 + 0x16) = 0;
      *(undefined8 *)(puVar14 + 0x18) = 0;
      *(undefined8 *)(puVar14 + 0x1a) = 0;
      *(undefined8 *)(puVar14 + 0x1c) = 0;
      *(undefined8 *)(puVar14 + 0x1e) = 0;
      *(undefined8 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + 0x2c) = uVar2;
      *(undefined8 *)(puVar14 + 0x3c) = 0;
      *(undefined8 *)(puVar14 + 0x46) = 0;
      puVar14[0x42] = 1;
      *(undefined8 *)(puVar14 + 0x50) = 0;
      *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x3e) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x48) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x4c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x24) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x28) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar14 + 0x34) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar14 + 0x38) = uVar3;
      *(undefined8 *)(puVar14 + 0x3a) = uVar5;
      std::condition_variable::condition_variable((condition_variable *)(puVar14 + 0x52));
      *(undefined8 *)(puVar14 + 0x5e) = 0;
      pvVar10 = *(void **)(this + 0x1b8);
      if (uVar12 != 0) break;
      uVar16 = uVar16 + 0x180;
      uVar12 = 1;
    }
  }
  *(undefined4 *)(this + 0x1b0) = 2;
LAB_0010465a:
  lVar15 = (long)pvVar10 + 0x148;
  while( true ) {
    LocalVector<NavMeshQueries3D::PathQuerySlot,unsigned_int,false,false>::resize
              ((LocalVector<NavMeshQueries3D::PathQuerySlot,unsigned_int,false,false> *)
               (lVar15 + -0x60),*(uint *)(this + 0x1a0));
    iVar7 = *(int *)(lVar15 + -0x60);
    if (iVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar15 + -0x58) + 0x2c);
      iVar8 = 0;
      do {
        *piVar11 = iVar8;
        iVar8 = iVar8 + 1;
        piVar11 = piVar11 + 0xc;
      } while (iVar8 != iVar7);
    }
    iVar7 = *(int *)(this + 0x1a0);
    iVar8 = pthread_mutex_lock((pthread_mutex_t *)(lVar15 + -0x28));
    if (iVar8 != 0) break;
    *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + iVar7;
    iVar8 = 0;
    if (iVar7 != 0) {
      do {
        iVar8 = iVar8 + 1;
        std::condition_variable::notify_one();
      } while (iVar7 != iVar8);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(lVar15 + -0x28));
    lVar13 = lVar15 + 0x38;
    lVar15 = lVar15 + 0x180;
    if ((long)pvVar10 + 0x300 == lVar13) {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_60,"navigation/world/map_use_async_iterations",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      NVar6 = (NavMap)Variant::operator_cast_to_bool((Variant *)local_58);
      this[0x1a4] = NVar6;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar8);
}



/* NavMap::_build_iteration() [clone .part.0] */

void __thiscall NavMap::_build_iteration(NavMap *this)

{
  long *plVar1;
  undefined8 *puVar2;
  NavMap NVar3;
  NavRegionIteration *__s;
  NavLinkIteration *pNVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  _func_void_void_ptr *p_Var8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined1 auVar26 [16];
  uint local_8c;
  long local_70;
  NavRegionIteration *local_68;
  size_t local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_4c;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar9 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x1c0));
  } while (iVar9 == 0xb);
  if (iVar9 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar20 = (ulong)*(uint *)(this + 0x1b0);
  uVar10 = *(int *)(this + 0x1a8) + 1U & 1;
  uVar17 = (ulong)uVar10;
  if (*(uint *)(this + 0x1b0) <= uVar10) {
LAB_00104e6c:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar17,uVar20,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  piVar21 = (int *)((ulong)(-uVar10 & 0x180) + *(long *)(this + 0x1b8));
  iVar9 = *piVar21;
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x1c0));
  uVar7 = _LC62;
  if (iVar9 != 0) goto LAB_00104a40;
  this[0x2a2] = (NavMap)0x0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined2 *)(this + 0x2a0) = uVar7;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  if ((*(long *)(this + 0x248) != 0) && (*(int *)(this + 0x26c) != 0)) {
    lVar19 = 0;
    uVar10 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
    if (uVar10 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x250) + lVar19) != 0) {
          *(int *)(*(long *)(this + 0x250) + lVar19) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x248) + lVar19 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x248) + lVar19 * 2) = 0;
        }
        lVar19 = lVar19 + 4;
      } while ((ulong)uVar10 << 2 != lVar19);
    }
    *(undefined4 *)(this + 0x26c) = 0;
    *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  }
  if (*(int *)(this + 0x270) != 0) {
    *(undefined4 *)(this + 0x270) = 0;
  }
  *(undefined8 *)(this + 0x234) = 0;
  uVar10 = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(this + 0x1c);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(this + 0x24);
  this[0x204] = this[0x2c];
  *(undefined8 *)(this + 0x208) = *(undefined8 *)(this + 0x30);
  plVar11 = *(long **)(this + 0x48);
  plVar1 = plVar11 + *(uint *)(this + 0x40);
  for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
    uVar10 = (uVar10 + 1) - (uint)(*(char *)(*plVar11 + 0xa0) == '\0');
  }
  plVar11 = *(long **)(this + 0x58);
  uVar18 = 0;
  plVar1 = plVar11 + *(uint *)(this + 0x50);
  for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
    uVar18 = (uVar18 + 1) - (uint)(*(char *)(*plVar11 + 0x54) == '\0');
  }
  if ((*(long *)(piVar21 + 0x30) != 0) && (piVar21[0x39] != 0)) {
    lVar19 = 0;
    uVar22 = *(uint *)(hash_table_size_primes + (ulong)(uint)piVar21[0x38] * 4);
    if (uVar22 != 0) {
      do {
        if (*(int *)(*(long *)(piVar21 + 0x32) + lVar19) != 0) {
          *(int *)(*(long *)(piVar21 + 0x32) + lVar19) = 0;
          Memory::free_static(*(void **)(*(long *)(piVar21 + 0x30) + lVar19 * 2),false);
          *(undefined8 *)(*(long *)(piVar21 + 0x30) + lVar19 * 2) = 0;
        }
        lVar19 = lVar19 + 4;
      } while ((ulong)uVar22 << 2 != lVar19);
    }
    piVar21[0x39] = 0;
    *(undefined1 (*) [16])(piVar21 + 0x34) = (undefined1  [16])0x0;
  }
  if (piVar21[0x18] != 0) {
    lVar19 = 0;
    do {
      lVar24 = lVar19 * 0x90 + *(long *)(piVar21 + 0x1a);
      if (*(long *)(lVar24 + 0x68) != 0) {
        LocalVector<gd::Polygon,unsigned_int,false,false>::resize
                  ((LocalVector<gd::Polygon,unsigned_int,false,false> *)(lVar24 + 0x60),0);
        if (*(void **)(lVar24 + 0x68) != (void *)0x0) {
          Memory::free_static(*(void **)(lVar24 + 0x68),false);
        }
      }
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < (uint)piVar21[0x18]);
    piVar21[0x18] = 0;
  }
  if (piVar21[0x1c] == 0) {
    uVar22 = piVar21[0x18];
LAB_00104eb4:
    if (uVar22 < uVar10) {
      if ((uint)piVar21[0x19] < uVar10) {
        uVar22 = uVar10 - 1 | uVar10 - 1 >> 1;
        uVar22 = uVar22 >> 2 | uVar22;
        uVar22 = uVar22 >> 4 | uVar22;
        uVar22 = uVar22 >> 8 | uVar22;
        uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
        piVar21[0x19] = uVar22;
        lVar19 = Memory::realloc_static(*(void **)(piVar21 + 0x1a),(ulong)uVar22 * 0x90,false);
        *(long *)(piVar21 + 0x1a) = lVar19;
        if (lVar19 == 0) goto LAB_0010534d;
        uVar22 = piVar21[0x18];
      }
      uVar6 = _LC48._4_4_;
      if (uVar22 < uVar10) {
        lVar19 = *(long *)(piVar21 + 0x1a);
        auVar26 = ZEXT416(_LC64);
        uVar14 = CONCAT44(_LC48._4_4_,(undefined4)_LC48);
        puVar15 = (undefined4 *)((ulong)uVar22 * 0x90 + lVar19);
        do {
          *puVar15 = 0xffffffff;
          puVar13 = puVar15 + 0x24;
          *(undefined1 *)(puVar15 + 1) = 1;
          puVar15[2] = 1;
          *(undefined8 *)(puVar15 + 3) = uVar14;
          *(undefined1 (*) [16])(puVar15 + 6) = (undefined1  [16])0x0;
          *(undefined1 *)(puVar15 + 10) = 0;
          *(undefined1 (*) [16])(puVar15 + 0xb) = auVar26;
          *(undefined1 (*) [16])(puVar15 + 0xf) = auVar26;
          puVar15[0x13] = uVar6;
          *(undefined8 *)(puVar15 + 0x14) = 0;
          puVar15[0x16] = 0;
          *(undefined8 *)(puVar15 + 0x18) = 0;
          *(undefined8 *)(puVar15 + 0x1a) = 0;
          puVar15[0x1c] = 0;
          *(undefined8 *)(puVar15 + 0x1d) = 0;
          puVar15[0x1f] = 0;
          *(undefined8 *)(puVar15 + 0x20) = 0;
          puVar15[0x22] = 0;
          puVar15 = puVar13;
        } while ((undefined4 *)
                 (lVar19 + 0x90 + ((ulong)((uVar10 - uVar22) - 1) + (ulong)uVar22) * 0x90) !=
                 puVar13);
      }
      goto LAB_00104d84;
    }
    uVar22 = piVar21[0x1c];
LAB_00104ec1:
    if (uVar22 < uVar18) {
      uVar10 = uVar18 - 1;
      if ((uint)piVar21[0x1d] < uVar18) {
        uVar22 = uVar10 >> 1 | uVar10;
        uVar22 = uVar22 >> 2 | uVar22;
        uVar22 = uVar22 >> 4 | uVar22;
        uVar22 = uVar22 >> 8 | uVar22;
        uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
        piVar21[0x1d] = uVar22;
        lVar19 = Memory::realloc_static(*(void **)(piVar21 + 0x1e),(ulong)uVar22 * 0x58,false);
        *(long *)(piVar21 + 0x1e) = lVar19;
        if (lVar19 == 0) {
LAB_0010534d:
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar22 = piVar21[0x1c];
        if (uVar18 <= uVar22) goto LAB_00104ddf;
      }
      lVar19 = *(long *)(piVar21 + 0x1e);
      uVar14 = CONCAT44(_LC48._4_4_,(undefined4)_LC48);
      puVar15 = (undefined4 *)(lVar19 + (ulong)uVar22 * 0x58);
      do {
        uVar7 = _LC62;
        *(undefined1 *)(puVar15 + 1) = 1;
        puVar13 = puVar15 + 0x16;
        *puVar15 = 0xffffffff;
        puVar15[2] = 1;
        *(undefined8 *)(puVar15 + 3) = uVar14;
        *(undefined1 (*) [16])(puVar15 + 6) = (undefined1  [16])0x0;
        *(undefined2 *)(puVar15 + 10) = uVar7;
        *(undefined8 *)(puVar15 + 0xb) = 0;
        puVar15[0xd] = 0;
        *(undefined8 *)(puVar15 + 0xe) = 0;
        puVar15[0x10] = 0;
        *(undefined8 *)(puVar15 + 0x12) = 0;
        *(undefined8 *)(puVar15 + 0x14) = 0;
        puVar15 = puVar13;
      } while (puVar13 !=
               (undefined4 *)(lVar19 + 0x58 + ((ulong)(uVar10 - uVar22) + (ulong)uVar22) * 0x58));
      goto LAB_00104ddf;
    }
  }
  else {
    lVar19 = 0;
    do {
      lVar24 = *(long *)(piVar21 + 0x1e) + lVar19 * 0x58;
      if (*(long *)(lVar24 + 0x50) != 0) {
        LocalVector<gd::Polygon,unsigned_int,false,false>::resize
                  ((LocalVector<gd::Polygon,unsigned_int,false,false> *)(lVar24 + 0x48),0);
        if (*(void **)(lVar24 + 0x50) != (void *)0x0) {
          Memory::free_static(*(void **)(lVar24 + 0x50),false);
        }
      }
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < (uint)piVar21[0x1c]);
    uVar22 = piVar21[0x18];
    piVar21[0x1c] = 0;
    if (uVar22 <= uVar10) goto LAB_00104eb4;
    lVar19 = (ulong)uVar10 * 0x90;
    uVar22 = uVar10;
    do {
      lVar24 = *(long *)(piVar21 + 0x1a) + lVar19;
      if (*(long *)(lVar24 + 0x68) != 0) {
        LocalVector<gd::Polygon,unsigned_int,false,false>::resize
                  ((LocalVector<gd::Polygon,unsigned_int,false,false> *)(lVar24 + 0x60),0);
        if (*(void **)(lVar24 + 0x68) != (void *)0x0) {
          Memory::free_static(*(void **)(lVar24 + 0x68),false);
        }
      }
      uVar22 = uVar22 + 1;
      lVar19 = lVar19 + 0x90;
    } while (uVar22 < (uint)piVar21[0x18]);
LAB_00104d84:
    uVar22 = piVar21[0x1c];
    piVar21[0x18] = uVar10;
    if (uVar22 <= uVar18) goto LAB_00104ec1;
    lVar19 = (ulong)uVar18 * 0x58;
    uVar10 = uVar18;
    do {
      lVar24 = *(long *)(piVar21 + 0x1e) + lVar19;
      if (*(long *)(lVar24 + 0x50) != 0) {
        LocalVector<gd::Polygon,unsigned_int,false,false>::resize
                  ((LocalVector<gd::Polygon,unsigned_int,false,false> *)(lVar24 + 0x48),0);
        if (*(void **)(lVar24 + 0x50) != (void *)0x0) {
          Memory::free_static(*(void **)(lVar24 + 0x50),false);
        }
      }
      uVar10 = uVar10 + 1;
      lVar19 = lVar19 + 0x58;
    } while (uVar10 < (uint)piVar21[0x1c]);
LAB_00104ddf:
    piVar21[0x1c] = uVar18;
  }
  puVar23 = *(undefined8 **)(this + 0x48);
  uVar17 = 0;
  puVar2 = puVar23 + *(uint *)(this + 0x40);
  for (; puVar23 != puVar2; puVar23 = puVar23 + 1) {
    local_68 = (NavRegionIteration *)*puVar23;
    if (local_68[0xa0] != (NavRegionIteration)0x0) {
      uVar20 = (ulong)(uint)piVar21[0x18];
      uVar10 = (uint)uVar17;
      if ((uint)piVar21[0x18] <= uVar10) goto LAB_00104e6c;
      puVar12 = (uint *)(uVar17 * 0x90 + *(long *)(piVar21 + 0x1a));
      *puVar12 = uVar10;
      NavRegion::get_iteration_update(local_68);
      uVar18 = *puVar12;
      puVar12 = (uint *)HashMap<NavRegion*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<NavRegion*>,DefaultTypedAllocator<HashMapElement<NavRegion*,unsigned_int>>>
                        ::operator[]((HashMap<NavRegion*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<NavRegion*>,DefaultTypedAllocator<HashMapElement<NavRegion*,unsigned_int>>>
                                      *)(piVar21 + 0x2e),(NavRegion **)&local_68);
      uVar17 = (ulong)(uVar10 + 1);
      *puVar12 = uVar18;
    }
  }
  puVar23 = *(undefined8 **)(this + 0x58);
  puVar2 = puVar23 + *(uint *)(this + 0x50);
  uVar10 = 0;
  for (; puVar23 != puVar2; puVar23 = puVar23 + 1) {
    pNVar4 = (NavLinkIteration *)*puVar23;
    local_8c = uVar10;
    if (pNVar4[0x54] != (NavLinkIteration)0x0) {
      uVar20 = (ulong)(uint)piVar21[0x1c];
      if ((uint)piVar21[0x1c] <= uVar10) {
        uVar17 = (ulong)uVar10;
        goto LAB_00104e6c;
      }
      local_8c = uVar10 + 1;
      *(uint *)(*(long *)(piVar21 + 0x1e) + (ulong)uVar10 * 0x58) = uVar10;
      NavLink::get_iteration_update(pNVar4);
    }
    uVar10 = local_8c;
  }
  local_58 = *(undefined8 *)(this + 8);
  local_50 = *(int *)(this + 0x10);
  NVar3 = this[0x1a4];
  *(undefined8 *)(piVar21 + 0x10) = local_58;
  piVar21[0x12] = local_50;
  *(int **)(this + 0x280) = piVar21;
  p_Var8 = WorkerThreadPool::singleton;
  local_4c = local_58;
  local_44 = local_50;
  if (NVar3 == (NavMap)0x0) {
    NavMapBuilder3D::build_navmap_iteration((NavMapIterationBuild *)(this + 0x1f8));
    *(undefined2 *)(this + 0x2a1) = _LC62;
    goto LAB_00104a40;
  }
  if ((_build_iteration()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&_build_iteration()::{lambda()#1}::operator()()::sname),
     iVar9 != 0)) {
    _scs_create((char *)&_build_iteration()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_build_iteration()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_build_iteration()::{lambda()#1}::operator()()::sname);
  }
  lVar19 = _build_iteration()::{lambda()#1}::operator()()::sname;
  if (_build_iteration()::{lambda()#1}::operator()()::sname == 0) {
LAB_00105244:
    local_70 = 0;
  }
  else {
    __s = *(NavRegionIteration **)(_build_iteration()::{lambda()#1}::operator()()::sname + 8);
    local_70 = 0;
    if (__s == (NavRegionIteration *)0x0) {
      plVar1 = (long *)(*(long *)(_build_iteration()::{lambda()#1}::operator()()::sname + 0x10) +
                       -0x10);
      if (*(long *)(_build_iteration()::{lambda()#1}::operator()()::sname + 0x10) == 0)
      goto LAB_00105244;
      do {
        lVar24 = *plVar1;
        if (lVar24 == 0) goto LAB_00105244;
        LOCK();
        lVar16 = *plVar1;
        bVar25 = lVar24 == lVar16;
        if (bVar25) {
          *plVar1 = lVar24 + 1;
          lVar16 = lVar24;
        }
        UNLOCK();
      } while (!bVar25);
      if (lVar16 != -1) {
        local_70 = *(long *)(lVar19 + 0x10);
      }
    }
    else {
      local_60 = strlen((char *)__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  uVar14 = WorkerThreadPool::add_native_task
                     (p_Var8,_build_iteration_threaded,
                      SUB81((NavMapIterationBuild *)(this + 0x1f8),0),(String *)0x1);
  lVar19 = local_70;
  *(undefined8 *)(this + 0x298) = uVar14;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
LAB_00104a40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavMap::_build_iteration() */

void __thiscall NavMap::_build_iteration(NavMap *this)

{
  if (((this[0x2a0] != (NavMap)0x0) && (this[0x2a1] == (NavMap)0x0)) && (this[0x2a2] == (NavMap)0x0)
     ) {
    _build_iteration(this);
    return;
  }
  return;
}



/* NavMap::sync() */

void __thiscall NavMap::sync(NavMap *this)

{
  char cVar1;
  
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(this + 0x118);
  *(ulong *)(this + 0x138) =
       CONCAT44((int)*(undefined8 *)(this + 0x108),(int)*(undefined8 *)(this + 0x40));
  _sync_dirty_map_update_requests(this);
  if ((this[0x2a0] == (NavMap)0x0) || (this[0x2a1] != (NavMap)0x0)) {
LAB_00105460:
    if ((this[0x1a4] != (NavMap)0x0) && (*(long *)(this + 0x298) != -1)) goto LAB_00105476;
  }
  else {
    if (this[0x2a2] == (NavMap)0x0) {
      _build_iteration(this);
      goto LAB_00105460;
    }
    if ((this[0x1a4] == (NavMap)0x0) || (*(long *)(this + 0x298) == -1)) goto LAB_0010543c;
LAB_00105476:
    cVar1 = WorkerThreadPool::is_task_completed(WorkerThreadPool::singleton);
    if (cVar1 != '\0') {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      *(undefined8 *)(this + 0x298) = 0xffffffffffffffff;
      *(undefined2 *)(this + 0x2a1) = 0x100;
      goto LAB_0010543c;
    }
  }
  if (this[0x2a2] == (NavMap)0x0) {
    this[0x38] = (NavMap)0x0;
    _sync_avoidance(this);
    return;
  }
LAB_0010543c:
  _sync_iteration(this);
  this[0x38] = (NavMap)0x0;
  _sync_avoidance(this);
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



/* WorkerThreadPool::BaseTemplateUserdata::callback() */

void WorkerThreadPool::BaseTemplateUserdata::callback(void)

{
  return;
}



/* WorkerThreadPool::GroupUserData<NavMap, void (NavMap::*)(unsigned int, NavAgent**),
   NavAgent**>::~GroupUserData() */

void __thiscall
WorkerThreadPool::GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**>::
~GroupUserData(GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**> *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<NavMap, void (NavMap::*)(unsigned int, NavAgent**),
   NavAgent**>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**>::
callback_indexed(GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**> *this,
                uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00105584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,
             *(undefined8 *)(this + 0x20),UNRECOVERED_JUMPTABLE);
  return;
}



/* WorkerThreadPool::GroupUserData<NavMap, void (NavMap::*)(unsigned int, NavAgent**),
   NavAgent**>::~GroupUserData() */

void __thiscall
WorkerThreadPool::GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**>::
~GroupUserData(GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**> *this)

{
  operator_delete(this,0x28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<NavRegion*, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<NavRegion*>,
   DefaultTypedAllocator<HashMapElement<NavRegion*, unsigned int> > >::operator[](NavRegion* const&)
    */

undefined1  [16] __thiscall
HashMap<NavRegion*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<NavRegion*>,DefaultTypedAllocator<HashMapElement<NavRegion*,unsigned_int>>>
::operator[](HashMap<NavRegion*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<NavRegion*>,DefaultTypedAllocator<HashMapElement<NavRegion*,unsigned_int>>>
             *this,NavRegion **param_1)

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
  NavRegion *pNVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pNVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x106222;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pNVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00105d4b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pNVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x10626a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pNVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_001060f3;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pNVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pNVar56 == *(NavRegion **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_001060f3:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pNVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(NavRegion **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pNVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_001060d4;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00105d4b:
  if ((float)uVar55 * __LC33 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001060d4;
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
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
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
  pNVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(NavRegion **)pauVar42[1] = pNVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
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
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001060d4:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* LocalVector<NavMeshQueries3D::PathQuerySlot, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<NavMeshQueries3D::PathQuerySlot,unsigned_int,false,false>::resize
          (LocalVector<NavMeshQueries3D::PathQuerySlot,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 * 0x30;
    uVar7 = param_1;
    do {
      piVar5 = (int *)(*(long *)(this + 8) + lVar6);
      if (*(void **)(piVar5 + 6) != (void *)0x0) {
        if (piVar5[4] != 0) {
          piVar5[4] = 0;
        }
        Memory::free_static(*(void **)(piVar5 + 6),false);
      }
      if (*(void **)(piVar5 + 2) != (void *)0x0) {
        if (*piVar5 != 0) {
          *piVar5 = 0;
        }
        Memory::free_static(*(void **)(piVar5 + 2),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar4 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar4 >> 1 | uVar4;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = (uVar7 >> 0x10 | uVar7) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 * 0x30,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_001063e7;
    }
    lVar6 = *(long *)(this + 8);
    puVar2 = (undefined8 *)((ulong)uVar7 * 0x30 + lVar6);
    do {
      *puVar2 = 0;
      puVar3 = puVar2 + 6;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined4 *)((long)puVar2 + 0x2c) = 0;
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)(lVar6 + 0x30 + ((ulong)(uVar4 - uVar7) + (ulong)uVar7) * 0x30)
            );
  }
LAB_001063e7:
  *(uint *)this = param_1;
  return;
}



/* void std::vector<RVO2D::Obstacle2D*, std::allocator<RVO2D::Obstacle2D*>
   >::_M_realloc_insert<RVO2D::Obstacle2D* const&>(__gnu_cxx::__normal_iterator<RVO2D::Obstacle2D**,
   std::vector<RVO2D::Obstacle2D*, std::allocator<RVO2D::Obstacle2D*> > >, RVO2D::Obstacle2D*
   const&) */

void __thiscall
std::vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>>::
_M_realloc_insert<RVO2D::Obstacle2D*const&>
          (vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_001065d0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_001065da:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_001065d0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_001065da;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_001065da;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_001065ac;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001065ac:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<RVO2D::Vector2, std::allocator<RVO2D::Vector2>
   >::_M_realloc_insert<RVO2D::Vector2>(__gnu_cxx::__normal_iterator<RVO2D::Vector2*,
   std::vector<RVO2D::Vector2, std::allocator<RVO2D::Vector2> > >, RVO2D::Vector2&&) */

void __thiscall
std::vector<RVO2D::Vector2,std::allocator<RVO2D::Vector2>>::_M_realloc_insert<RVO2D::Vector2>
          (vector<RVO2D::Vector2,std::allocator<RVO2D::Vector2>> *this,void *param_2,
          undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  pvVar1 = *(void **)(this + 8);
  pvVar2 = *(void **)this;
  uVar3 = (long)pvVar1 - (long)pvVar2 >> 3;
  if (uVar3 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar2 == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_001067c0;
    uVar6 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar6 = uVar3 + 1;
    }
    uVar6 = uVar6 << 3;
LAB_001067ca:
    pvVar4 = operator_new(uVar6);
    lVar7 = uVar6 + (long)pvVar4;
    lVar5 = (long)pvVar4 + 8;
    *(undefined8 *)((long)pvVar4 + ((long)param_2 - (long)pvVar2)) = *param_3;
    if (param_2 != pvVar2) goto LAB_00106719;
LAB_001067fe:
    if (param_2 != pvVar1) goto LAB_00106752;
LAB_00106787:
    if (pvVar2 == (void *)0x0) goto LAB_001067a3;
  }
  else {
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar3) {
LAB_001067c0:
      uVar6 = 0x7ffffffffffffff8;
      goto LAB_001067ca;
    }
    if (uVar6 != 0) {
      if (0xfffffffffffffff < uVar6) {
        uVar6 = 0xfffffffffffffff;
      }
      uVar6 = uVar6 * 8;
      goto LAB_001067ca;
    }
    pvVar4 = (void *)0x0;
    lVar5 = 8;
    lVar7 = 0;
    *(undefined8 *)((long)param_2 - (long)pvVar2) = *param_3;
    if (param_2 == pvVar2) goto LAB_001067fe;
LAB_00106719:
    uVar3 = 0;
    do {
      *(undefined8 *)((long)pvVar4 + uVar3 * 8) = *(undefined8 *)((long)pvVar2 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < ((ulong)((long)param_2 + (-8 - (long)pvVar2)) >> 3) + 1);
    lVar5 = (long)param_2 + (long)pvVar4 + (8 - (long)pvVar2);
    if (param_2 != pvVar1) {
LAB_00106752:
      uVar3 = 0;
      do {
        *(undefined8 *)(lVar5 + uVar3 * 8) = *(undefined8 *)((long)param_2 + uVar3 * 8);
        uVar3 = uVar3 + 1;
      } while (uVar3 < ((ulong)((long)pvVar1 + (-8 - (long)param_2)) >> 3) + 1);
      lVar5 = (long)pvVar1 + (lVar5 - (long)param_2);
      goto LAB_00106787;
    }
  }
  operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
LAB_001067a3:
  *(void **)this = pvVar4;
  *(long *)(this + 8) = lVar5;
  *(long *)(this + 0x10) = lVar7;
  return;
}



/* void std::vector<RVO2D::Agent2D*, std::allocator<RVO2D::Agent2D*>
   >::_M_realloc_insert<RVO2D::Agent2D*>(__gnu_cxx::__normal_iterator<RVO2D::Agent2D**,
   std::vector<RVO2D::Agent2D*, std::allocator<RVO2D::Agent2D*> > >, RVO2D::Agent2D*&&) */

void __thiscall
std::vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>>::_M_realloc_insert<RVO2D::Agent2D*>
          (vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00106920;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010692a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00106920:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010692a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010692a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_001068fc;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001068fc:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<RVO3D::Agent3D*, std::allocator<RVO3D::Agent3D*>
   >::_M_realloc_insert<RVO3D::Agent3D*>(__gnu_cxx::__normal_iterator<RVO3D::Agent3D**,
   std::vector<RVO3D::Agent3D*, std::allocator<RVO3D::Agent3D*> > >, RVO3D::Agent3D*&&) */

void __thiscall
std::vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>>::_M_realloc_insert<RVO3D::Agent3D*>
          (vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00106ab0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00106aba:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00106ab0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00106aba;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00106aba;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00106a8c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00106a8c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* LocalVector<gd::Polygon, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<gd::Polygon,unsigned_int,false,false>::resize
          (LocalVector<gd::Polygon,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  uVar8 = *(uint *)this;
  if (param_1 < uVar8) {
    lVar6 = (ulong)param_1 * 0x38;
    uVar8 = param_1;
    do {
      lVar10 = *(long *)(this + 8) + lVar6;
      pvVar7 = *(void **)(lVar10 + 0x28);
      if (pvVar7 != (void *)0x0) {
        if (*(int *)(lVar10 + 0x20) != 0) {
          lVar9 = 0;
          do {
            piVar2 = (int *)(lVar9 * 0x10 + (long)pvVar7);
            if (*(void **)(piVar2 + 2) != (void *)0x0) {
              if (*piVar2 != 0) {
                *piVar2 = 0;
              }
              Memory::free_static(*(void **)(piVar2 + 2),false);
              pvVar7 = *(void **)(lVar10 + 0x28);
            }
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < *(uint *)(lVar10 + 0x20));
          *(undefined4 *)(lVar10 + 0x20) = 0;
          if (pvVar7 == (void *)0x0) goto LAB_00106c24;
        }
        Memory::free_static(pvVar7,false);
      }
LAB_00106c24:
      if (*(void **)(lVar10 + 0x18) != (void *)0x0) {
        if (*(int *)(lVar10 + 0x10) != 0) {
          *(undefined4 *)(lVar10 + 0x10) = 0;
        }
        Memory::free_static(*(void **)(lVar10 + 0x18),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x38;
    } while (uVar8 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar8) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar8 = uVar5 >> 1 | uVar5;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = (uVar8 >> 0x10 | uVar8) + 1;
      *(uint *)(this + 4) = uVar8;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar8 * 0x38,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar8 = *(uint *)this;
      if (param_1 <= uVar8) goto LAB_00106c56;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined4 *)(lVar6 + (ulong)uVar8 * 0x38);
    do {
      *puVar3 = 0xffffffff;
      puVar4 = puVar3 + 0xe;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined8 *)(puVar3 + 10) = 0;
      puVar3[0xc] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(lVar6 + 0x38 + ((ulong)(uVar5 - uVar8) + (ulong)uVar8) * 0x38)
            );
  }
LAB_00106c56:
  *(uint *)this = param_1;
  return;
}



/* NavMapIteration::~NavMapIteration() */

void __thiscall NavMapIteration::~NavMapIteration(NavMapIteration *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x120));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (*(int *)(this + 0x17c) != 0) {
    _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                     "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                     ,0,1);
    std::condition_variable::condition_variable((condition_variable *)(this + 0x148));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x120));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x148));
  if (*(long *)(this + 0xf0) != 0) {
    LocalVector<NavMeshQueries3D::PathQuerySlot,unsigned_int,false,false>::resize
              ((LocalVector<NavMeshQueries3D::PathQuerySlot,unsigned_int,false,false> *)
               (this + 0xe8),0);
    if (*(void **)(this + 0xf0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xf0),false);
    }
  }
  pvVar4 = *(void **)(this + 0xc0);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xe4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe4) = 0;
        *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 200) + lVar3) != 0) {
            *(int *)(*(long *)(this + 200) + lVar3) = 0;
            Memory::free_static(*(void **)((long)pvVar4 + lVar3 * 2),false);
            pvVar4 = *(void **)(this + 0xc0);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe4) = 0;
        *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00106f99;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 200),false);
  }
LAB_00106f99:
  pvVar4 = *(void **)(this + 0x90);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xb4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x98) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0x98) + lVar3) = 0;
            if (*(void **)((long)pvVar4 + 0x20) != (void *)0x0) {
              if (*(int *)((long)pvVar4 + 0x18) != 0) {
                *(undefined4 *)((long)pvVar4 + 0x18) = 0;
              }
              Memory::free_static(*(void **)((long)pvVar4 + 0x20),false);
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x90);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while ((ulong)uVar2 << 2 != lVar3);
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00107062;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x98),false);
  }
LAB_00107062:
  pvVar4 = *(void **)(this + 0x78);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x70) != 0) {
      lVar3 = 0;
      uVar2 = 0;
      do {
        if (*(long *)((long)pvVar4 + lVar3 + 0x50) != 0) {
          LocalVector<gd::Polygon,unsigned_int,false,false>::resize
                    ((LocalVector<gd::Polygon,unsigned_int,false,false> *)
                     ((long)pvVar4 + lVar3 + 0x48),0);
          pvVar4 = *(void **)((long)pvVar4 + lVar3 + 0x50);
          if (pvVar4 != (void *)0x0) {
            Memory::free_static(pvVar4,false);
          }
          pvVar4 = *(void **)(this + 0x78);
        }
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x58;
      } while (uVar2 < *(uint *)(this + 0x70));
      *(undefined4 *)(this + 0x70) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_001070c6;
    }
    Memory::free_static(pvVar4,false);
  }
LAB_001070c6:
  pvVar4 = *(void **)(this + 0x68);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x60) != 0) {
      lVar3 = 0;
      do {
        if (*(long *)((long)pvVar4 + lVar3 * 0x90 + 0x68) != 0) {
          LocalVector<gd::Polygon,unsigned_int,false,false>::resize
                    ((LocalVector<gd::Polygon,unsigned_int,false,false> *)
                     ((long)pvVar4 + lVar3 * 0x90 + 0x60),0);
          pvVar4 = *(void **)((long)pvVar4 + lVar3 * 0x90 + 0x68);
          if (pvVar4 != (void *)0x0) {
            Memory::free_static(pvVar4,false);
          }
          pvVar4 = *(void **)(this + 0x68);
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0x60));
      *(undefined4 *)(this + 0x60) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_0010712b;
    }
    Memory::free_static(pvVar4,false);
  }
LAB_0010712b:
  if (*(long *)(this + 0x58) != 0) {
    LocalVector<gd::Polygon,unsigned_int,false,false>::resize
              ((LocalVector<gd::Polygon,unsigned_int,false,false> *)(this + 0x50),0);
    if (*(void **)(this + 0x58) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x58),false);
      return;
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* NavMapIteration::~NavMapIteration() */

void __thiscall NavMapIteration::~NavMapIteration(NavMapIteration *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::GroupUserData<NavMap, void (NavMap::*)(unsigned int, NavAgent**),
   NavAgent**>::~GroupUserData() */

void __thiscall
WorkerThreadPool::GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**>::
~GroupUserData(GroupUserData<NavMap,void(NavMap::*)(unsigned_int,NavAgent**),NavAgent**> *this)

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


