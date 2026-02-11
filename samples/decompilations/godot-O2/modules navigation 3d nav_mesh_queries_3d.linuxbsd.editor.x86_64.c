
/* LocalVector<long, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<long,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* gd::Heap<gd::NavigationPoly*, gd::NavPolyTravelCostGreaterThan,
   gd::NavPolyHeapIndexer>::_shift_down(unsigned int) [clone .isra.0] */

void __thiscall
gd::Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer>::_shift_down
          (Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer> *this,
          uint param_1)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar3 = *(uint *)this;
  uVar9 = (ulong)param_1;
  if (uVar3 <= param_1) {
LAB_00100122:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar3,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar4 = *(long *)(this + 8);
  uVar11 = param_1 * 2 + 1;
  lVar5 = *(long *)(lVar4 + (ulong)param_1 * 8);
  if (uVar11 < uVar3) {
    fVar2 = *(float *)(lVar5 + 0x3c);
    uVar12 = param_1;
    do {
      uVar1 = uVar11 + 1;
      lVar6 = *(long *)(lVar4 + (ulong)uVar11 * 8);
      fVar13 = *(float *)(lVar6 + 0x3c);
      fVar15 = *(float *)(lVar6 + 0x38) + fVar13;
      if (uVar1 < uVar3) {
        lVar10 = *(long *)(lVar4 + (ulong)uVar1 * 8);
        fVar16 = *(float *)(lVar10 + 0x3c);
        fVar14 = *(float *)(lVar10 + 0x38) + fVar16;
        if (fVar14 == fVar15) {
          bVar8 = fVar16 < fVar13;
        }
        else {
          bVar8 = fVar14 < fVar15;
        }
        if (!bVar8) goto LAB_001000d6;
      }
      else {
LAB_001000d6:
        lVar10 = lVar6;
        fVar14 = fVar15;
        fVar16 = fVar13;
        uVar1 = uVar11;
      }
      fVar13 = *(float *)(lVar5 + 0x38) + fVar2;
      if (!NAN(fVar13) && !NAN(fVar14)) {
        if (fVar13 == fVar14) {
          if (fVar2 < fVar16) break;
        }
        else if (fVar13 <= fVar14) break;
      }
      if (uVar3 <= uVar12) goto LAB_00100120;
      *(long *)(lVar4 + (ulong)uVar12 * 8) = lVar10;
      uVar11 = uVar1 * 2 + 1;
      *(uint *)(lVar10 + 8) = uVar12;
      uVar12 = uVar1;
    } while (uVar11 < uVar3);
    if (param_1 != uVar12) {
      if (uVar3 <= uVar12) {
LAB_00100120:
        uVar9 = (ulong)uVar12;
        goto LAB_00100122;
      }
      *(long *)(lVar4 + (ulong)uVar12 * 8) = lVar5;
      *(uint *)(lVar5 + 8) = uVar12;
    }
  }
  return;
}



/* NavMeshQueries3D::emit_callback(Callable const&) */

undefined4 NavMeshQueries3D::emit_callback(Callable *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Callable::is_valid();
  if (cVar1 == '\0') {
    _err_print_error("emit_callback","modules/navigation/3d/nav_mesh_queries_3d.cpp",0x2d,
                     "Condition \"!p_callback.is_valid()\" is true. Returning: false",0,0);
    uVar2 = 0;
  }
  else {
    local_30 = (undefined1  [16])0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    Callable::callp((Variant **)param_1,0,(Variant *)0x0,(CallError *)local_38);
    uVar2 = 1;
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
      uVar2 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::_query_task_push_back_point_with_metadata(NavMeshQueries3D::NavMeshPathQueryTask3D&,
   Vector3 const&, gd::Polygon const*) */

void NavMeshQueries3D::_query_task_push_back_point_with_metadata
               (NavMeshPathQueryTask3D *param_1,Vector3 *param_2,Polygon *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  
  uVar9 = *(ulong *)(param_1 + 0x20);
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uVar9 & 1) != 0) {
    uVar8 = *(uint *)(param_1 + 0x90);
    pvVar7 = *(void **)(param_1 + 0x98);
    uVar2 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x14);
    if (uVar8 == *(uint *)(param_1 + 0x94)) {
      uVar9 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(param_1 + 0x94) = (int)uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 4,false);
      *(void **)(param_1 + 0x98) = pvVar7;
      if (pvVar7 == (void *)0x0) goto LAB_00100410;
      uVar8 = *(uint *)(param_1 + 0x90);
      uVar9 = *(ulong *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x90) = uVar8 + 1;
    *(undefined4 *)((long)pvVar7 + (ulong)uVar8 * 4) = uVar2;
  }
  uVar8 = (uint)uVar9;
  if ((uVar9 & 2) != 0) {
    uVar3 = *(uint *)(param_1 + 0xa0);
    pvVar7 = *(void **)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x20);
    if (uVar3 == *(uint *)(param_1 + 0xa4)) {
      uVar9 = (ulong)(uVar3 * 2);
      if (uVar3 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(param_1 + 0xa4) = (int)uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
      *(void **)(param_1 + 0xa8) = pvVar7;
      if (pvVar7 == (void *)0x0) goto LAB_00100410;
      uVar3 = *(uint *)(param_1 + 0xa0);
      uVar8 = (uint)*(undefined8 *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0xa0) = uVar3 + 1;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar3 * 8) = uVar5;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = *(uint *)(param_1 + 0xb0);
    pvVar7 = *(void **)(param_1 + 0xb8);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x18);
    if (uVar8 == *(uint *)(param_1 + 0xb4)) {
      uVar9 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(param_1 + 0xb4) = (int)uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
      *(void **)(param_1 + 0xb8) = pvVar7;
      if (pvVar7 == (void *)0x0) goto LAB_00100410;
      uVar8 = *(uint *)(param_1 + 0xb0);
    }
    *(uint *)(param_1 + 0xb0) = uVar8 + 1;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar8 * 8) = uVar5;
  }
  uVar5 = *(undefined8 *)param_2;
  uVar8 = *(uint *)(param_1 + 0x80);
  pvVar7 = *(void **)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 8);
  if (uVar8 == *(uint *)(param_1 + 0x84)) {
    uVar9 = (ulong)(uVar8 * 2);
    if (uVar8 * 2 == 0) {
      uVar9 = 1;
    }
    *(int *)(param_1 + 0x84) = (int)uVar9;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 0xc,false);
    *(void **)(param_1 + 0x88) = pvVar7;
    if (pvVar7 == (void *)0x0) {
LAB_00100410:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar8 = *(uint *)(param_1 + 0x80);
  }
  *(uint *)(param_1 + 0x80) = uVar8 + 1;
  puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0xc);
  *puVar1 = uVar5;
  *(undefined4 *)(puVar1 + 1) = uVar2;
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::map_query_path(NavMap*, Ref<NavigationPathQueryParameters3D> const&,
   Ref<NavigationPathQueryResult3D>, Callable const&) */

void NavMeshQueries3D::map_query_path
               (NavMeshPathQueryTask3D *param_1,long *param_2,long *param_3,Callable *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  int local_38;
  long local_30;
  
  auVar4._8_4_ = local_10c._8_4_;
  auVar4._0_8_ = local_10c._0_8_;
  auVar3._8_4_ = local_10c._8_4_;
  auVar3._0_8_ = local_10c._0_8_;
  auVar2._8_4_ = local_118._8_4_;
  auVar2._0_8_ = local_118._0_8_;
  auVar1._8_4_ = local_118._8_4_;
  auVar1._0_8_ = local_118._0_8_;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (NavMeshPathQueryTask3D *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x95;
      pcVar7 = "Parameter \"map\" is null.";
LAB_001007f9:
      _err_print_error("map_query_path","modules/navigation/3d/nav_mesh_queries_3d.cpp",uVar8,pcVar7
                       ,0,0);
      return;
    }
  }
  else if (*param_2 == 0) {
    local_118 = auVar2;
    local_10c = auVar4;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x96;
      pcVar7 = "Condition \"p_query_parameters.is_null()\" is true.";
      goto LAB_001007f9;
    }
  }
  else if (*param_3 == 0) {
    local_118 = auVar1;
    local_10c = auVar3;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x97;
      pcVar7 = "Condition \"p_query_result.is_null()\" is true.";
      goto LAB_001007f9;
    }
  }
  else {
    local_118._0_8_ = 0;
    local_c8 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_60 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    local_118._8_4_ = 0;
    local_10c._0_8_ = 0;
    local_10c._8_4_ = 0;
    local_f8 = 7;
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_cc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_ac = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_40 = 0;
    local_38 = 0;
    local_118 = NavigationPathQueryParameters3D::get_start_position();
    local_10c = NavigationPathQueryParameters3D::get_target_position();
    local_100 = NavigationPathQueryParameters3D::get_navigation_layers();
    Callable::operator=((Callable *)(local_50 + 8),param_4);
    iVar6 = NavigationPathQueryParameters3D::get_pathfinding_algorithm();
    if (iVar6 != 0) {
      _err_print_error("map_query_path","modules/navigation/3d/nav_mesh_queries_3d.cpp",0xa6,
                       "No match for used PathfindingAlgorithm - fallback to default",0,1);
    }
    local_f0 = local_f0 & 0xffffffff00000000;
    iVar6 = NavigationPathQueryParameters3D::get_path_postprocessing();
    if ((iVar6 != 1) && (iVar6 != 2)) {
      if (iVar6 != 0) {
        _err_print_error("map_query_path","modules/navigation/3d/nav_mesh_queries_3d.cpp",0xb6,
                         "No match for used PathPostProcessing - fallback to default",0,1);
      }
      iVar6 = 0;
    }
    local_f0 = CONCAT44(iVar6,(undefined4)local_f0);
    local_f8 = NavigationPathQueryParameters3D::get_metadata_flags();
    local_e8 = NavigationPathQueryParameters3D::get_simplify_path();
    local_e4 = NavigationPathQueryParameters3D::get_simplify_epsilon();
    local_38 = 0;
    NavMap::query_path(param_1);
    NavigationPathQueryResult3D::set_data
              ((LocalVector *)*param_3,(LocalVector *)&local_98,(LocalVector *)&local_88,
               (LocalVector *)&local_78);
    cVar5 = Callable::is_valid();
    if (cVar5 != '\0') {
      cVar5 = emit_callback((Callable *)(local_50 + 8));
      local_38 = (cVar5 == '\0') + 3;
    }
    NavMeshPathQueryTask3D::~NavMeshPathQueryTask3D((NavMeshPathQueryTask3D *)local_118);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::_query_task_find_start_end_positions(NavMeshQueries3D::NavMeshPathQueryTask3D&,
   NavMapIteration const&) */

void NavMeshQueries3D::_query_task_find_start_end_positions
               (NavMeshPathQueryTask3D *param_1,NavMapIteration *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  undefined8 uVar12;
  float in_XMM1_Da;
  float fVar13;
  float fVar14;
  float local_98;
  float local_94;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  lVar8 = *(long *)(param_2 + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = lVar8 + (ulong)*(uint *)(param_2 + 0x60) * 0x90;
  if (lVar2 != lVar8) {
    local_94 = _LC20;
    local_98 = _LC20;
    do {
      if (*(char *)(lVar8 + 4) != '\0') {
        lVar3 = *(long *)(lVar8 + 0x68);
        lVar1 = lVar3 + (ulong)*(uint *)(lVar8 + 0x60) * 0x38;
        if (lVar1 != lVar3) {
          uVar6 = *(uint *)(*(long *)(lVar3 + 8) + 8) & *(uint *)(param_1 + 0x18);
          while( true ) {
            if ((uVar6 != 0) &&
               (uVar9 = (ulong)*(uint *)(lVar3 + 0x10), 2 < *(uint *)(lVar3 + 0x10))) {
              lVar10 = 0x30;
              uVar7 = 2;
              do {
                if ((uint)uVar9 <= (uint)uVar7) {
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xae,uVar7,uVar9,
                             "p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                puVar4 = *(undefined8 **)(lVar3 + 0x18);
                local_68 = *puVar4;
                local_60 = *(undefined4 *)(puVar4 + 1);
                local_5c = *(undefined8 *)((long)puVar4 + lVar10 + -0x18);
                local_54 = *(undefined4 *)((long)puVar4 + lVar10 + -0x10);
                local_50 = *(undefined8 *)((long)puVar4 + lVar10);
                local_48 = *(undefined4 *)((long)puVar4 + lVar10 + 8);
                uVar12 = Face3::get_closest_point_to((Vector3 *)&local_68);
                fVar14 = *(float *)(param_1 + 4) - (float)((ulong)uVar12 >> 0x20);
                fVar11 = *(float *)param_1 - (float)uVar12;
                fVar13 = (*(float *)(param_1 + 8) - in_XMM1_Da) *
                         (*(float *)(param_1 + 8) - in_XMM1_Da);
                fVar11 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar13);
                if (fVar11 < local_98) {
                  *(long *)(param_1 + 0x50) = lVar3;
                  *(undefined8 *)(param_1 + 0x38) = uVar12;
                  *(float *)(param_1 + 0x40) = in_XMM1_Da;
                  local_98 = fVar11;
                }
                uVar12 = Face3::get_closest_point_to((Vector3 *)&local_68);
                fVar14 = *(float *)(param_1 + 0x10) - (float)((ulong)uVar12 >> 0x20);
                fVar11 = *(float *)(param_1 + 0xc) - (float)uVar12;
                in_XMM1_Da = (*(float *)(param_1 + 0x14) - fVar13) *
                             (*(float *)(param_1 + 0x14) - fVar13);
                fVar11 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + in_XMM1_Da);
                if (fVar11 < local_94) {
                  *(long *)(param_1 + 0x58) = lVar3;
                  *(undefined8 *)(param_1 + 0x44) = uVar12;
                  *(float *)(param_1 + 0x4c) = fVar13;
                  local_94 = fVar11;
                }
                uVar9 = (ulong)*(uint *)(lVar3 + 0x10);
                uVar7 = uVar7 + 1;
                lVar10 = lVar10 + 0x18;
              } while (uVar7 < uVar9);
            }
            if (lVar1 == lVar3 + 0x38) break;
            uVar6 = *(uint *)(*(long *)(lVar3 + 0x40) + 8) & *(uint *)(param_1 + 0x18);
            lVar3 = lVar3 + 0x38;
          }
        }
      }
      lVar8 = lVar8 + 0x90;
    } while (lVar2 != lVar8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavMeshQueries3D::_query_task_post_process_edgecentered(NavMeshQueries3D::NavMeshPathQueryTask3D&)
    */

void NavMeshQueries3D::_query_task_post_process_edgecentered(NavMeshPathQueryTask3D *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  Polygon *pPVar6;
  Polygon *pPVar7;
  code *pcVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  uVar13 = *(uint *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x44);
  puVar5 = *(uint **)(param_1 + 0x78);
  local_50 = *(undefined4 *)(param_1 + 0x4c);
  local_4c = *(undefined8 *)(param_1 + 0x38);
  local_44 = *(undefined4 *)(param_1 + 0x40);
  pPVar6 = *(Polygon **)(param_1 + 0x50);
  _query_task_push_back_point_with_metadata
            (param_1,(Vector3 *)&local_58,*(Polygon **)(param_1 + 0x58));
  if (uVar13 != 0xffffffff) {
    uVar12 = (ulong)*puVar5;
    do {
      if ((uint)uVar12 <= uVar13) {
LAB_00100d1e:
        uVar9 = (ulong)uVar13;
        iVar10 = 0xb2;
LAB_00100d23:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar10,uVar9,uVar12,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      puVar11 = (undefined8 *)(*(long *)(puVar5 + 2) + (ulong)uVar13 * 0x40);
      if (*(int *)((long)puVar11 + 0xc) == -1) break;
      uVar4 = *(uint *)(puVar11 + 2);
      uVar9 = (ulong)uVar4;
      pPVar7 = (Polygon *)*puVar11;
      if (uVar4 == 0xffffffff) {
        _query_task_push_back_point_with_metadata(param_1,(Vector3 *)((long)puVar11 + 0x2c),pPVar7);
        uVar4 = *puVar5;
      }
      else {
        uVar12 = (ulong)*(uint *)(pPVar7 + 0x10);
        puVar11 = (undefined8 *)(*(long *)(pPVar7 + 0x18) + ((ulong)(uVar4 + 1) % uVar12) * 0x18);
        if (*(uint *)(pPVar7 + 0x10) <= uVar4) {
          iVar10 = 0xae;
          goto LAB_00100d23;
        }
        uVar2 = *puVar11;
        puVar1 = (undefined8 *)(*(long *)(pPVar7 + 0x18) + uVar9 * 0x18);
        uVar3 = *puVar1;
        local_60 = (*(float *)(puVar1 + 1) + *(float *)(puVar11 + 1)) * (float)_LC21;
        local_68 = CONCAT44(((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar2 >> 0x20)) *
                            _LC21._4_4_,((float)uVar3 + (float)uVar2) * (float)_LC21);
        _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_68,pPVar7);
        uVar4 = *puVar5;
      }
      uVar12 = (ulong)uVar4;
      if (uVar4 <= uVar13) goto LAB_00100d1e;
      uVar13 = *(uint *)(*(long *)(puVar5 + 2) + 0xc + (ulong)uVar13 * 0x40);
    } while (uVar13 != 0xffffffff);
  }
  _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_4c,pPVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::_query_task_post_process_nopostprocessing(NavMeshQueries3D::NavMeshPathQueryTask3D&)
    */

void NavMeshQueries3D::_query_task_post_process_nopostprocessing(NavMeshPathQueryTask3D *param_1)

{
  Polygon *pPVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  uVar4 = *(uint *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x44);
  pPVar1 = *(Polygon **)(param_1 + 0x50);
  puVar2 = *(uint **)(param_1 + 0x78);
  local_50 = *(undefined4 *)(param_1 + 0x4c);
  local_4c = *(undefined8 *)(param_1 + 0x38);
  local_44 = *(undefined4 *)(param_1 + 0x40);
  _query_task_push_back_point_with_metadata
            (param_1,(Vector3 *)&local_58,*(Polygon **)(param_1 + 0x58));
  if (uVar4 != 0xffffffff) {
    uVar6 = (ulong)*puVar2;
    do {
      if ((uint)uVar6 <= uVar4) {
LAB_00100e7d:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar4,uVar6,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 2) + (ulong)uVar4 * 0x40);
      if (*(int *)((long)puVar5 + 0xc) == -1) break;
      _query_task_push_back_point_with_metadata
                (param_1,(Vector3 *)((long)puVar5 + 0x2c),(Polygon *)*puVar5);
      uVar6 = (ulong)*puVar2;
      if (*puVar2 <= uVar4) goto LAB_00100e7d;
      uVar4 = *(uint *)(*(long *)(puVar2 + 2) + 0xc + (ulong)uVar4 * 0x40);
    } while (uVar4 != 0xffffffff);
  }
  _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_4c,pPVar1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavMeshQueries3D::map_iteration_get_closest_point_to_segment(NavMapIteration const&, Vector3
   const&, Vector3 const&, bool) */

void NavMeshQueries3D::map_iteration_get_closest_point_to_segment
               (NavMapIteration *param_1,Vector3 *param_2,Vector3 *param_3,bool param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 auVar6 [12];
  char cVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  float fVar17;
  undefined1 auVar18 [12];
  char local_cd;
  float local_cc;
  float local_80;
  float fStack_7c;
  undefined1 local_74 [8];
  float local_6c;
  undefined1 local_68 [8];
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  auVar18._8_4_ = local_6c;
  auVar18._0_8_ = local_74;
  lVar14 = *(long *)(param_1 + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar6 = ZEXT812(0);
  lVar8 = (ulong)*(uint *)(param_1 + 0x60) * 0x90 + lVar14;
  if (lVar8 != lVar14) {
    local_cc = _LC20;
    auVar6 = ZEXT812(0);
    do {
      lVar10 = *(long *)(lVar14 + 0x68);
      lVar1 = lVar10 + (ulong)*(uint *)(lVar14 + 0x60) * 0x38;
      local_cd = param_4;
      for (; lVar1 != lVar10; lVar10 = lVar10 + 0x38) {
        uVar12 = (ulong)*(uint *)(lVar10 + 0x10);
        lVar13 = 0x30;
        uVar11 = 2;
        if (2 < *(uint *)(lVar10 + 0x10)) {
          do {
            if ((uint)uVar12 <= (uint)uVar11) goto LAB_0010122e;
            puVar2 = *(undefined8 **)(lVar10 + 0x18);
            local_68 = (undefined1  [8])*puVar2;
            local_60 = *(float *)(puVar2 + 1);
            local_5c = *(undefined8 *)((long)puVar2 + lVar13 + -0x18);
            local_54 = *(undefined4 *)((long)puVar2 + lVar13 + -0x10);
            local_50 = *(undefined8 *)((long)puVar2 + lVar13);
            local_48 = *(undefined4 *)((long)puVar2 + lVar13 + 8);
            _local_74 = auVar18;
            cVar7 = Face3::intersects_segment((Vector3 *)local_68,param_2,param_3);
            auVar18 = _local_74;
            if (cVar7 == '\0') {
              if (local_cd == '\0') {
                auVar18 = Face3::get_closest_point_to((Vector3 *)local_68);
                fStack_7c = auVar18._4_4_;
                local_80 = auVar18._0_4_;
                fVar17 = auVar18._8_4_ - *(float *)(param_2 + 8);
                fVar17 = SQRT((local_80 - *(float *)param_2) * (local_80 - *(float *)param_2) +
                              (fStack_7c - *(float *)(param_2 + 4)) *
                              (fStack_7c - *(float *)(param_2 + 4)) + fVar17 * fVar17);
                if (fVar17 < local_cc) {
                  local_cc = fVar17;
                  auVar6 = auVar18;
                }
                auVar18 = Face3::get_closest_point_to((Vector3 *)local_68);
                local_74._4_4_ = auVar18._4_4_;
                local_74._0_4_ = auVar18._0_4_;
                fVar17 = auVar18._8_4_ - *(float *)(param_3 + 8);
                fVar17 = SQRT(((float)local_74._0_4_ - *(float *)param_3) *
                              ((float)local_74._0_4_ - *(float *)param_3) +
                              ((float)local_74._4_4_ - *(float *)(param_3 + 4)) *
                              ((float)local_74._4_4_ - *(float *)(param_3 + 4)) + fVar17 * fVar17);
                if (fVar17 < local_cc) {
                  local_cc = fVar17;
                  auVar6 = auVar18;
                }
              }
            }
            else {
              fVar17 = SQRT((0.0 - *(float *)param_2) * (0.0 - *(float *)param_2) +
                            (0.0 - *(float *)(param_2 + 4)) * (0.0 - *(float *)(param_2 + 4)) +
                            (0.0 - *(float *)(param_2 + 8)) * (0.0 - *(float *)(param_2 + 8)));
              if (local_cd == '\0') {
                local_cd = cVar7;
                local_cc = fVar17;
                auVar6 = ZEXT812(0);
              }
              else if (fVar17 < local_cc) {
                local_cc = fVar17;
                auVar6 = ZEXT812(0);
              }
            }
            uVar12 = (ulong)*(uint *)(lVar10 + 0x10);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x18;
          } while (uVar11 < uVar12);
        }
        if ((local_cd == '\0') && (uVar12 != 0)) {
          uVar15 = 0;
          do {
            uVar16 = uVar15 + 1;
            local_74 = (undefined1  [8])0x0;
            local_6c = 0.0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar12;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar16;
            uVar9 = SUB168(auVar4 % auVar3,0);
            local_60 = 0.0;
            local_68 = (undefined1  [8])0x0;
            uVar11 = uVar9;
            auVar18 = ZEXT812(0);
            if ((uint)uVar12 <= SUB164(auVar4 % auVar3,0)) {
LAB_0010122e:
              _local_74 = auVar18;
              _err_print_index_error
                        ("operator[]","./core/templates/local_vector.h",0xae,uVar11,uVar12,"p_index"
                         ,"count","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar11 = uVar15;
            auVar18 = ZEXT812(0);
            if ((uint)uVar12 <= (uint)uVar15) goto LAB_0010122e;
            Geometry3D::get_closest_points_between_segments
                      (param_2,param_3,(Vector3 *)(*(long *)(lVar10 + 0x18) + uVar15 * 0x18),
                       (Vector3 *)(*(long *)(lVar10 + 0x18) + uVar9 * 0x18),(Vector3 *)local_74,
                       (Vector3 *)local_68);
            auVar18._8_4_ = local_6c;
            auVar18._0_8_ = local_74;
            fVar17 = SQRT(((float)local_68._0_4_ - (float)local_74._0_4_) *
                          ((float)local_68._0_4_ - (float)local_74._0_4_) +
                          ((float)local_68._4_4_ - (float)local_74._4_4_) *
                          ((float)local_68._4_4_ - (float)local_74._4_4_) +
                          (local_60 - local_6c) * (local_60 - local_6c));
            if (fVar17 < local_cc) {
              auVar6._8_4_ = local_60;
              auVar6._0_8_ = local_68;
              local_cc = fVar17;
            }
            uVar12 = (ulong)*(uint *)(lVar10 + 0x10);
            uVar15 = uVar16;
          } while (uVar16 < uVar12);
        }
      }
      lVar14 = lVar14 + 0x90;
      param_4 = (bool)local_cd;
    } while (lVar8 != lVar14);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  _local_68 = auVar6;
  _local_74 = auVar18;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::map_iteration_get_closest_point_info(NavMapIteration const&, Vector3 const&) */

NavMeshQueries3D * __thiscall
NavMeshQueries3D::map_iteration_get_closest_point_info
          (NavMeshQueries3D *this,NavMapIteration *param_1,Vector3 *param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  bool bVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_4c;
  float local_48;
  float local_44;
  
  uVar7 = *(uint *)(param_1 + 0x60);
  lVar13 = *(long *)(param_1 + 0x68);
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  lVar16 = (ulong)uVar7 * 0x90 + lVar13;
  *(undefined8 *)(this + 0x18) = 0;
  fVar15 = _LC20;
  while( true ) {
    if (lVar16 == lVar13) {
      return this;
    }
    lVar17 = *(long *)(lVar13 + 0x68);
    lVar1 = lVar17 + (ulong)*(uint *)(lVar13 + 0x60) * 0x38;
    fVar19 = fVar15;
    if (lVar1 != lVar17) break;
LAB_001017db:
    lVar13 = lVar13 + 0x90;
    fVar15 = fVar19;
  }
LAB_00101492:
  uVar7 = *(uint *)(lVar17 + 0x10);
  if (uVar7 == 0) {
    lVar16 = 0;
    lVar13 = 0;
  }
  else {
    pfVar12 = *(float **)(lVar17 + 0x18);
    if (uVar7 == 1) {
      lVar13 = 1;
      lVar16 = 1;
    }
    else {
      fVar19 = (float)*(undefined8 *)pfVar12;
      fVar20 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
      fVar28 = (float)((ulong)*(undefined8 *)(pfVar12 + 6) >> 0x20) - fVar20;
      fVar31 = (float)*(undefined8 *)(pfVar12 + 2);
      if (uVar7 != 2) {
        local_48 = 0.0;
        fVar8 = *(float *)(param_2 + 8);
        local_44 = 0.0;
        fVar21 = (float)((ulong)*(undefined8 *)(pfVar12 + 0xc) >> 0x20) - fVar20;
        fVar3 = *(float *)param_2;
        pfVar2 = pfVar12 + (ulong)(uVar7 - 1) * 6;
        fVar9 = *(float *)(param_2 + 4);
        local_4c = 0.0;
        lVar14 = 0;
        bVar11 = true;
        fVar24 = 3.4028235e+38;
        fVar32 = (pfVar12[8] - fVar31) * ((float)*(undefined8 *)(pfVar12 + 0xc) - fVar19) -
                 ((float)*(undefined8 *)(pfVar12 + 6) - fVar19) * (pfVar12[0xe] - fVar31);
        fVar34 = (pfVar12[6] - fVar19) * fVar21 - fVar28 * (pfVar12[0xc] - fVar19);
        fVar22 = (pfVar12[0xe] - fVar31) * fVar28 - fVar21 * (pfVar12[8] - fVar31);
        fVar28 = *pfVar2;
        fVar21 = pfVar2[1];
        fVar36 = pfVar2[2];
        do {
          fVar4 = pfVar12[2];
          fVar5 = *pfVar12;
          fVar6 = pfVar12[1];
          fVar33 = fVar8 - fVar36;
          fVar26 = fVar9 - fVar21;
          fVar29 = fVar4 - fVar36;
          fVar35 = fVar3 - fVar28;
          fVar27 = fVar6 - fVar21;
          fVar30 = fVar5 - fVar28;
          if ((fVar35 * fVar29 - fVar33 * fVar30) * fVar32 +
              (fVar33 * fVar27 - fVar26 * fVar29) * fVar22 +
              (fVar26 * fVar30 - fVar35 * fVar27) * fVar34 <= 0.0) {
            fVar18 = fVar35 * fVar30 + fVar26 * fVar27 + fVar33 * fVar29;
            fVar23 = fVar29 * fVar29 + fVar27 * fVar27 + fVar30 * fVar30;
            if (fVar18 <= fVar23) {
              if (0.0 <= fVar18) {
                fVar18 = fVar18 / fVar23;
                local_44 = fVar29 * fVar18 + fVar36;
                local_4c = fVar27 * fVar18 + fVar21;
                local_48 = fVar18 * fVar30 + fVar28;
                goto LAB_00101758;
              }
              fVar26 = fVar26 * fVar26 + fVar35 * fVar35 + fVar33 * fVar33;
              if (fVar26 < fVar24) {
                fVar24 = fVar26;
                local_4c = fVar21;
                local_48 = fVar28;
                local_44 = fVar36;
              }
            }
            else {
              fVar28 = (fVar3 - fVar5) * (fVar3 - fVar5) + (fVar9 - fVar6) * (fVar9 - fVar6) +
                       (fVar8 - fVar4) * (fVar8 - fVar4);
              if (fVar28 < fVar24) {
                bVar11 = false;
                fVar24 = fVar28;
                local_4c = fVar6;
                local_48 = fVar5;
                local_44 = fVar4;
                goto joined_r0x001015b7;
              }
            }
            bVar11 = false;
          }
joined_r0x001015b7:
          if (lVar14 + 1U == (ulong)uVar7) goto LAB_00101730;
          lVar14 = lVar14 + 1;
          pfVar12 = pfVar12 + 6;
          fVar28 = fVar5;
          fVar21 = fVar6;
          fVar36 = fVar4;
        } while( true );
      }
      lVar13 = 2;
      lVar16 = 2;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,lVar13,lVar16,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
LAB_00101730:
  if (bVar11) {
    fVar28 = fVar22 * fVar22 + fVar32 * fVar32 + fVar34 * fVar34;
    if (fVar28 == 0.0) {
      fVar28 = 0.0;
      fVar21 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar28 = SQRT(fVar28);
      fVar24 = fVar22 / fVar28;
      fVar21 = fVar32 / fVar28;
      fVar28 = fVar34 / fVar28;
    }
    fVar20 = (fVar3 - fVar19) * fVar24 + (fVar9 - fVar20) * fVar21 + (fVar8 - fVar31) * fVar28;
    fVar19 = fVar20 * fVar20;
    if (fVar19 < fVar15) {
      lVar14 = *(long *)(lVar17 + 8);
      *(ulong *)(this + 0x10) = CONCAT44(fVar34,fVar32);
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar14 + 0x20);
      *(ulong *)this = CONCAT44(fVar9 - fVar21 * fVar20,fVar3 - fVar24 * fVar20);
      *(ulong *)(this + 8) = CONCAT44(fVar22,fVar8 - fVar28 * fVar20);
      fVar15 = fVar19;
      if (ABS(fVar20) < _LC23) goto LAB_001017db;
    }
  }
  else {
LAB_00101758:
    fVar19 = (fVar3 - local_48) * (fVar3 - local_48) + (fVar9 - local_4c) * (fVar9 - local_4c) +
             (fVar8 - local_44) * (fVar8 - local_44);
    if (fVar19 < fVar15) {
      lVar14 = *(long *)(lVar17 + 8);
      auVar25._4_4_ = local_4c;
      auVar25._0_4_ = local_48;
      *(ulong *)(this + 0x10) = CONCAT44(fVar34,fVar32);
      auVar25._12_4_ = fVar22;
      auVar25._8_4_ = local_44;
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar14 + 0x20);
      *(undefined1 (*) [16])this = auVar25;
      fVar15 = fVar19;
    }
  }
  lVar17 = lVar17 + 0x38;
  fVar19 = fVar15;
  if (lVar1 == lVar17) goto LAB_001017db;
  goto LAB_00101492;
}



/* NavMeshQueries3D::map_iteration_get_closest_point(NavMapIteration const&, Vector3 const&) */

undefined1  [16]
NavMeshQueries3D::map_iteration_get_closest_point(NavMapIteration *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 local_38;
  undefined4 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  map_iteration_get_closest_point_info((NavMeshQueries3D *)&local_38,param_1,param_2);
  auVar1._8_4_ = local_30;
  auVar1._0_8_ = local_38;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::map_iteration_get_closest_point_normal(NavMapIteration const&, Vector3 const&)
    */

undefined1  [16]
NavMeshQueries3D::map_iteration_get_closest_point_normal(NavMapIteration *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  NavMeshQueries3D local_38 [12];
  undefined8 local_2c;
  undefined4 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  map_iteration_get_closest_point_info(local_38,param_1,param_2);
  auVar1._8_4_ = local_24;
  auVar1._0_8_ = local_2c;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::map_iteration_get_closest_point_owner(NavMapIteration const&, Vector3 const&)
    */

undefined8
NavMeshQueries3D::map_iteration_get_closest_point_owner(NavMapIteration *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  NavMeshQueries3D aNStack_38 [24];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  map_iteration_get_closest_point_info(aNStack_38,param_1,param_2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::polygons_get_closest_point_to_segment(LocalVector<gd::Polygon, unsigned int,
   false, false> const&, Vector3 const&, Vector3 const&, bool) */

void NavMeshQueries3D::polygons_get_closest_point_to_segment
               (LocalVector *param_1,Vector3 *param_2,Vector3 *param_3,bool param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 auVar6 [12];
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [12];
  char local_bd;
  float local_bc;
  float local_80;
  float fStack_7c;
  undefined1 local_74 [8];
  float local_6c;
  undefined1 local_68 [8];
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  auVar16._8_4_ = local_6c;
  auVar16._0_8_ = local_74;
  lVar10 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = lVar10 + (ulong)*(uint *)param_1 * 0x38;
  auVar6 = ZEXT812(0);
  local_bd = param_4;
  local_bc = _LC20;
  do {
    if (lVar1 == lVar10) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      _local_68 = auVar6;
      _local_74 = auVar16;
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar8 = (ulong)*(uint *)(lVar10 + 0x10);
    lVar11 = 0x30;
    uVar14 = 2;
    if (2 < *(uint *)(lVar10 + 0x10)) {
      do {
        if ((uint)uVar8 <= (uint)uVar14) goto LAB_00101e9e;
        puVar2 = *(undefined8 **)(lVar10 + 0x18);
        local_68 = (undefined1  [8])*puVar2;
        local_60 = *(float *)(puVar2 + 1);
        local_5c = *(undefined8 *)((long)puVar2 + lVar11 + -0x18);
        local_54 = *(undefined4 *)((long)puVar2 + lVar11 + -0x10);
        local_50 = *(undefined8 *)((long)puVar2 + lVar11);
        local_48 = *(undefined4 *)((long)puVar2 + lVar11 + 8);
        _local_74 = auVar16;
        cVar7 = Face3::intersects_segment((Vector3 *)local_68,param_2,param_3);
        auVar16 = _local_74;
        if (cVar7 == '\0') {
          if (local_bd == '\0') {
            auVar16 = Face3::get_closest_point_to((Vector3 *)local_68);
            fStack_7c = auVar16._4_4_;
            local_80 = auVar16._0_4_;
            fVar15 = auVar16._8_4_ - *(float *)(param_2 + 8);
            fVar15 = SQRT((local_80 - *(float *)param_2) * (local_80 - *(float *)param_2) +
                          (fStack_7c - *(float *)(param_2 + 4)) *
                          (fStack_7c - *(float *)(param_2 + 4)) + fVar15 * fVar15);
            if (fVar15 < local_bc) {
              local_bc = fVar15;
              auVar6 = auVar16;
            }
            auVar16 = Face3::get_closest_point_to((Vector3 *)local_68);
            local_74._4_4_ = auVar16._4_4_;
            local_74._0_4_ = auVar16._0_4_;
            fVar15 = auVar16._8_4_ - *(float *)(param_3 + 8);
            fVar15 = SQRT(((float)local_74._0_4_ - *(float *)param_3) *
                          ((float)local_74._0_4_ - *(float *)param_3) +
                          ((float)local_74._4_4_ - *(float *)(param_3 + 4)) *
                          ((float)local_74._4_4_ - *(float *)(param_3 + 4)) + fVar15 * fVar15);
            if (fVar15 < local_bc) {
              local_bc = fVar15;
              auVar6 = auVar16;
            }
          }
        }
        else {
          fVar15 = SQRT((0.0 - *(float *)param_2) * (0.0 - *(float *)param_2) +
                        (0.0 - *(float *)(param_2 + 4)) * (0.0 - *(float *)(param_2 + 4)) +
                        (0.0 - *(float *)(param_2 + 8)) * (0.0 - *(float *)(param_2 + 8)));
          if (local_bd == '\0') {
            local_bd = cVar7;
            local_bc = fVar15;
            auVar6 = ZEXT812(0);
          }
          else if (fVar15 < local_bc) {
            local_bc = fVar15;
            auVar6 = ZEXT812(0);
          }
        }
        uVar8 = (ulong)*(uint *)(lVar10 + 0x10);
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x18;
      } while (uVar14 < uVar8);
    }
    if ((local_bd == '\0') && (uVar8 != 0)) {
      uVar12 = 0;
      do {
        uVar13 = uVar12 + 1;
        local_74 = (undefined1  [8])0x0;
        local_6c = 0.0;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar13;
        uVar9 = SUB168(auVar4 % auVar3,0);
        local_60 = 0.0;
        local_68 = (undefined1  [8])0x0;
        uVar14 = uVar9;
        auVar16 = ZEXT812(0);
        if ((uint)uVar8 <= SUB164(auVar4 % auVar3,0)) {
LAB_00101e9e:
          _local_74 = auVar16;
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,uVar14,uVar8,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar14 = uVar12;
        auVar16 = ZEXT812(0);
        if ((uint)uVar8 <= (uint)uVar12) goto LAB_00101e9e;
        Geometry3D::get_closest_points_between_segments
                  (param_2,param_3,(Vector3 *)(*(long *)(lVar10 + 0x18) + uVar12 * 0x18),
                   (Vector3 *)(*(long *)(lVar10 + 0x18) + uVar9 * 0x18),(Vector3 *)local_74,
                   (Vector3 *)local_68);
        auVar16._8_4_ = local_6c;
        auVar16._0_8_ = local_74;
        fVar15 = SQRT(((float)local_68._0_4_ - (float)local_74._0_4_) *
                      ((float)local_68._0_4_ - (float)local_74._0_4_) +
                      ((float)local_68._4_4_ - (float)local_74._4_4_) *
                      ((float)local_68._4_4_ - (float)local_74._4_4_) +
                      (local_60 - local_6c) * (local_60 - local_6c));
        if (fVar15 < local_bc) {
          auVar6._8_4_ = local_60;
          auVar6._0_8_ = local_68;
          local_bc = fVar15;
        }
        uVar8 = (ulong)*(uint *)(lVar10 + 0x10);
        uVar12 = uVar13;
      } while (uVar13 < uVar8);
    }
    lVar10 = lVar10 + 0x38;
  } while( true );
}



/* NavMeshQueries3D::polygons_get_closest_point_info(LocalVector<gd::Polygon, unsigned int, false,
   false> const&, Vector3 const&) */

NavMeshQueries3D * __thiscall
NavMeshQueries3D::polygons_get_closest_point_info
          (NavMeshQueries3D *this,LocalVector *param_1,Vector3 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_4c;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar6 = *(uint *)param_1;
  lVar14 = *(long *)(param_1 + 8);
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  lVar12 = lVar14 + (ulong)uVar6 * 0x38;
  *(undefined8 *)(this + 0x18) = 0;
  fVar27 = _LC20;
joined_r0x001020ba:
  if (lVar12 == lVar14) {
    return this;
  }
  uVar6 = *(uint *)(lVar14 + 0x10);
  if (uVar6 == 0) {
    lVar14 = 0;
    lVar12 = 0;
  }
  else {
    pfVar11 = *(float **)(lVar14 + 0x18);
    if (uVar6 == 1) {
      lVar12 = 1;
      lVar14 = 1;
    }
    else {
      fVar16 = (float)*(undefined8 *)(pfVar11 + 2);
      fVar30 = (float)*(undefined8 *)pfVar11;
      fVar31 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
      fVar22 = (float)((ulong)*(undefined8 *)(pfVar11 + 6) >> 0x20) - fVar31;
      if (uVar6 != 2) {
        bVar10 = true;
        local_34 = 0.0;
        fVar19 = 3.4028235e+38;
        pfVar1 = pfVar11 + (ulong)(uVar6 - 1) * 6;
        fVar7 = *(float *)(param_2 + 8);
        fVar8 = *(float *)param_2;
        fVar17 = (float)((ulong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20) - fVar31;
        local_3c = 0.0;
        fVar2 = *(float *)(param_2 + 4);
        local_38 = 0.0;
        fVar24 = (pfVar11[8] - fVar16) * ((float)*(undefined8 *)(pfVar11 + 0xc) - fVar30) -
                 ((float)*(undefined8 *)(pfVar11 + 6) - fVar30) * (pfVar11[0xe] - fVar16);
        fVar26 = (pfVar11[6] - fVar30) * fVar17 - fVar22 * (pfVar11[0xc] - fVar30);
        lVar13 = 0;
        fVar32 = fVar22 * (pfVar11[0xe] - fVar16) - fVar17 * (pfVar11[8] - fVar16);
        fVar22 = pfVar1[1];
        fVar17 = pfVar1[2];
        local_4c = *pfVar1;
        do {
          fVar3 = pfVar11[2];
          fVar4 = pfVar11[1];
          fVar28 = fVar7 - fVar17;
          fVar29 = fVar2 - fVar22;
          fVar5 = *pfVar11;
          fVar23 = fVar3 - fVar17;
          fVar21 = fVar4 - fVar22;
          fVar25 = fVar5 - local_4c;
          fVar20 = fVar8 - local_4c;
          if ((fVar20 * fVar23 - fVar28 * fVar25) * fVar24 +
              (fVar28 * fVar21 - fVar29 * fVar23) * fVar32 +
              (fVar29 * fVar25 - fVar20 * fVar21) * fVar26 <= 0.0) {
            fVar15 = fVar20 * fVar25 + fVar29 * fVar21 + fVar28 * fVar23;
            fVar18 = fVar25 * fVar25 + fVar21 * fVar21 + fVar23 * fVar23;
            if (fVar15 <= fVar18) {
              if (0.0 <= fVar15) {
                fVar15 = fVar15 / fVar18;
                local_34 = fVar15 * fVar25 + local_4c;
                local_3c = fVar23 * fVar15 + fVar17;
                local_38 = fVar21 * fVar15 + fVar22;
                goto LAB_0010238c;
              }
              fVar20 = fVar28 * fVar28 + fVar20 * fVar20 + fVar29 * fVar29;
              if (fVar20 < fVar19) {
                local_34 = local_4c;
                fVar19 = fVar20;
                local_3c = fVar17;
                local_38 = fVar22;
              }
            }
            else {
              fVar22 = (fVar8 - fVar5) * (fVar8 - fVar5) + (fVar2 - fVar4) * (fVar2 - fVar4) +
                       (fVar7 - fVar3) * (fVar7 - fVar3);
              if (fVar22 < fVar19) {
                bVar10 = false;
                fVar19 = fVar22;
                local_3c = fVar3;
                local_38 = fVar4;
                local_34 = fVar5;
                goto joined_r0x001021e7;
              }
            }
            bVar10 = false;
          }
joined_r0x001021e7:
          if (lVar13 + 1U == (ulong)uVar6) goto LAB_00102370;
          lVar13 = lVar13 + 1;
          pfVar11 = pfVar11 + 6;
          fVar22 = fVar4;
          fVar17 = fVar3;
          local_4c = fVar5;
        } while( true );
      }
      lVar12 = 2;
      lVar14 = 2;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,lVar12,lVar14,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
LAB_00102370:
  if (bVar10) {
    fVar22 = fVar32 * fVar32 + fVar24 * fVar24 + fVar26 * fVar26;
    if (fVar22 == 0.0) {
      fVar22 = 0.0;
      fVar19 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar22 = SQRT(fVar22);
      fVar17 = fVar32 / fVar22;
      fVar19 = fVar24 / fVar22;
      fVar22 = fVar26 / fVar22;
    }
    fVar16 = (fVar8 - fVar30) * fVar17 + (fVar2 - fVar31) * fVar19 + (fVar7 - fVar16) * fVar22;
    if (fVar16 * fVar16 < fVar27) {
      lVar13 = *(long *)(lVar14 + 8);
      *(ulong *)(this + 0x10) = CONCAT44(fVar26,fVar24);
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar13 + 0x20);
      *(ulong *)this = CONCAT44(fVar2 - fVar19 * fVar16,fVar8 - fVar17 * fVar16);
      *(ulong *)(this + 8) = CONCAT44(fVar32,fVar7 - fVar22 * fVar16);
      fVar27 = fVar16 * fVar16;
      if (ABS(fVar16) < _LC23) {
        return this;
      }
    }
  }
  else {
LAB_0010238c:
    fVar22 = (fVar8 - local_34) * (fVar8 - local_34) + (fVar2 - local_38) * (fVar2 - local_38) +
             (fVar7 - local_3c) * (fVar7 - local_3c);
    if (fVar22 < fVar27) {
      lVar13 = *(long *)(lVar14 + 8);
      *(ulong *)(this + 0x10) = CONCAT44(fVar26,fVar24);
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar13 + 0x20);
      *(ulong *)this = CONCAT44(local_38,local_34);
      *(ulong *)(this + 8) = CONCAT44(fVar32,local_3c);
      fVar27 = fVar22;
    }
  }
  lVar14 = lVar14 + 0x38;
  goto joined_r0x001020ba;
}



/* NavMeshQueries3D::polygons_get_closest_point(LocalVector<gd::Polygon, unsigned int, false, false>
   const&, Vector3 const&) */

undefined1  [16] NavMeshQueries3D::polygons_get_closest_point(LocalVector *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 local_38;
  undefined4 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  polygons_get_closest_point_info((NavMeshQueries3D *)&local_38,param_1,param_2);
  auVar1._8_4_ = local_30;
  auVar1._0_8_ = local_38;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::polygons_get_closest_point_normal(LocalVector<gd::Polygon, unsigned int, false,
   false> const&, Vector3 const&) */

undefined1  [16]
NavMeshQueries3D::polygons_get_closest_point_normal(LocalVector *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  NavMeshQueries3D local_38 [12];
  undefined8 local_2c;
  undefined4 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  polygons_get_closest_point_info(local_38,param_1,param_2);
  auVar1._8_4_ = local_24;
  auVar1._0_8_ = local_2c;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::polygons_get_closest_point_owner(LocalVector<gd::Polygon, unsigned int, false,
   false> const&, Vector3 const&) */

undefined8 NavMeshQueries3D::polygons_get_closest_point_owner(LocalVector *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  NavMeshQueries3D aNStack_38 [24];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  polygons_get_closest_point_info(aNStack_38,param_1,param_2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::_query_task_clip_path(NavMeshQueries3D::NavMeshPathQueryTask3D&,
   gd::NavigationPoly const*, Vector3 const&, gd::NavigationPoly const*) */

void NavMeshQueries3D::_query_task_clip_path
               (NavMeshPathQueryTask3D *param_1,NavigationPoly *param_2,Vector3 *param_3,
               NavigationPoly *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  char cVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  ulong local_58;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x80) == 0) {
LAB_001027bb:
    uVar15 = 0;
    uVar13 = 0xffffffff;
    iVar14 = 0xb2;
LAB_001027e3:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",iVar14,uVar13,uVar15,"p_index","count"
               ,"",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  puVar8 = *(uint **)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 100);
  fVar5 = *(float *)(param_1 + 0x68);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x88) + (ulong)(*(int *)(param_1 + 0x80) - 1) * 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = *puVar1;
  fVar3 = *(float *)(param_1 + 0x6c);
  local_88 = (float)uVar9;
  fStack_84 = (float)((ulong)uVar9 >> 0x20);
  local_80 = *(float *)(puVar1 + 1);
  cVar12 = Vector3::is_equal_approx((Vector3 *)&local_88);
  if (cVar12 == '\0') {
    local_4c = 0.0;
    fVar16 = fStack_84 - (float)*(undefined8 *)(param_3 + 4);
    fVar21 = local_88 - *(float *)param_3;
    fVar17 = (float)uVar4;
    fVar18 = fVar3 * fVar16 - fVar17 * (local_80 - *(float *)(param_3 + 8));
    fVar20 = fVar2 * (local_80 - (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20)) -
             (float)((ulong)uVar4 >> 0x20) * fVar21;
    auVar19._0_8_ = CONCAT44(fVar20,fVar18);
    auVar19._8_8_ = 0;
    local_50 = fVar17 * fVar21 - fVar16 * fVar2;
    if ((fVar20 != 0.0 || fVar18 != 0.0) || (local_58 = auVar19._0_8_, local_50 != 0.0)) {
      fVar17 = fVar18 * fVar18 + fVar20 * fVar20 + local_50 * local_50;
      fVar16 = 0.0;
      if (fVar17 == 0.0) {
        local_58 = 0;
        fVar17 = 0.0;
        local_50 = 0.0;
      }
      else {
        fVar17 = SQRT(fVar17);
        fVar18 = local_80 - *(float *)(param_3 + 8);
        local_50 = local_50 / fVar17;
        auVar11._4_4_ = fVar17;
        auVar11._0_4_ = fVar17;
        auVar11._8_4_ = (int)_LC28;
        auVar11._12_4_ = (int)((ulong)_LC28 >> 0x20);
        auVar19 = divps(auVar19,auVar11);
        fVar16 = ((fStack_84 - *(float *)(param_3 + 4)) * fVar3 - fVar5 * fVar18) / fVar17;
        local_58 = auVar19._0_8_;
        fVar17 = (fVar2 * fVar18 - (local_88 - *(float *)param_3) * fVar3) / fVar17;
      }
      local_4c = fVar16 * local_88 + fStack_84 * fVar17 + local_80 * local_50;
      if (param_2 != param_4) {
        do {
          local_7c = *(undefined8 *)(param_2 + 0x14);
          uVar6 = *(uint *)(param_2 + 0xc);
          local_74 = *(undefined4 *)(param_2 + 0x1c);
          local_70 = *(undefined8 *)(param_2 + 0x20);
          local_68 = *(undefined4 *)(param_2 + 0x28);
          if (uVar6 == 0xffffffff) {
            _err_print_error("_query_task_clip_path","modules/navigation/3d/nav_mesh_queries_3d.cpp"
                             ,0x436,
                             "Condition \"from_poly->back_navigation_poly_id == -1\" is true.",0,0);
            break;
          }
          uVar7 = *puVar8;
          if (uVar7 <= uVar6) {
            uVar13 = (ulong)uVar6;
            uVar15 = (ulong)uVar7;
            iVar14 = 0xae;
            goto LAB_001027e3;
          }
          param_2 = (NavigationPoly *)((ulong)uVar6 * 0x40 + *(long *)(puVar8 + 2));
          cVar12 = Vector3::is_equal_approx((Vector3 *)&local_7c);
          if (cVar12 == '\0') {
            local_5c = 0;
            local_64 = 0;
            cVar12 = Plane::intersects_segment
                               ((Vector3 *)&local_58,(Vector3 *)&local_7c,(Vector3 *)&local_70);
            if ((cVar12 != '\0') &&
               (cVar12 = Vector3::is_equal_approx((Vector3 *)&local_64), cVar12 == '\0')) {
              if (*(int *)(param_1 + 0x80) == 0) goto LAB_001027bb;
              cVar12 = Vector3::is_equal_approx((Vector3 *)&local_64);
              if (cVar12 == '\0') {
                _query_task_push_back_point_with_metadata
                          (param_1,(Vector3 *)&local_64,*(Polygon **)param_2);
              }
            }
          }
        } while (param_4 != param_2);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::_query_task_post_process_corridorfunnel(NavMeshQueries3D::NavMeshPathQueryTask3D&)
    */

void NavMeshQueries3D::_query_task_post_process_corridorfunnel(NavMeshPathQueryTask3D *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  Polygon *pPVar10;
  Polygon *pPVar11;
  code *pcVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  NavigationPoly *pNVar16;
  NavigationPoly *pNVar17;
  NavigationPoly *pNVar18;
  NavigationPoly *pNVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  long local_40;
  
  fVar2 = *(float *)(param_1 + 100);
  puVar9 = *(uint **)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = *(undefined8 *)(param_1 + 0x44);
  uVar14 = (ulong)*(uint *)(param_1 + 0x60);
  pPVar10 = *(Polygon **)(param_1 + 0x58);
  fVar3 = *(float *)(param_1 + 0x68);
  pPVar11 = *(Polygon **)(param_1 + 0x50);
  local_5c = *(float *)(param_1 + 0x4c);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  local_50 = *(float *)(param_1 + 0x40);
  fVar4 = *(float *)(param_1 + 0x6c);
  uVar15 = (ulong)*puVar9;
  if (*puVar9 <= *(uint *)(param_1 + 0x60)) goto LAB_00103100;
  pNVar16 = (NavigationPoly *)(uVar14 * 0x40 + *(long *)(puVar9 + 2));
  fVar23 = (float)*(undefined8 *)(pNVar16 + 0x20) - (float)*(undefined8 *)(pNVar16 + 0x14);
  fVar24 = (float)((ulong)*(undefined8 *)(pNVar16 + 0x20) >> 0x20) -
           (float)((ulong)*(undefined8 *)(pNVar16 + 0x14) >> 0x20);
  if (_LC27 <= fVar23 * fVar23 + fVar24 * fVar24 +
               (*(float *)(pNVar16 + 0x28) - *(float *)(pNVar16 + 0x1c)) *
               (*(float *)(pNVar16 + 0x28) - *(float *)(pNVar16 + 0x1c))) {
    cVar13 = Vector3::is_equal_approx((Vector3 *)&local_64);
    if (cVar13 == '\0') goto LAB_00102d08;
    uVar8 = *(uint *)(pNVar16 + 0xc);
joined_r0x001031a1:
    if (uVar8 != 0xffffffff) {
      uVar14 = (ulong)uVar8;
      uVar15 = (ulong)*puVar9;
      if (uVar8 < *puVar9) {
        pNVar16 = (NavigationPoly *)(uVar14 * 0x40 + *(long *)(puVar9 + 2));
LAB_00102d08:
        local_4c = local_64;
        local_80 = local_64;
        local_70 = local_64;
        local_44 = local_5c;
        local_78 = local_5c;
        local_68 = local_5c;
        _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_64,pPVar10);
        pNVar17 = pNVar16;
        pNVar18 = pNVar16;
        pNVar19 = pNVar16;
        goto joined_r0x00102d49;
      }
      goto LAB_00103100;
    }
  }
  else {
    cVar13 = Vector3::is_equal_approx((Vector3 *)&local_64);
    if (cVar13 != '\0') {
      uVar8 = *(uint *)(pNVar16 + 0xc);
      goto joined_r0x001031a1;
    }
  }
  local_4c = local_64;
  local_80 = local_64;
  local_70 = local_64;
  local_44 = local_5c;
  local_78 = local_5c;
  local_68 = local_5c;
  _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_64,pPVar10);
  pNVar17 = pNVar16;
  pNVar18 = pNVar16;
  pNVar19 = pNVar16;
  do {
    uVar5 = *(undefined8 *)(pNVar16 + 0x14);
    uVar6 = *(undefined8 *)(pNVar16 + 0x20);
    fVar23 = *(float *)(pNVar16 + 0x1c);
    fVar24 = *(float *)(pNVar16 + 0x28);
    fVar25 = (float)((ulong)uVar5 >> 0x20) - local_4c._4_4_;
    fVar20 = (float)((ulong)uVar6 >> 0x20) - local_4c._4_4_;
    fVar27 = fVar23 - local_44;
    fVar22 = fVar24 - local_44;
    fVar26 = (float)uVar5 - (float)local_4c;
    fVar21 = (float)uVar6 - (float)local_4c;
    fVar28 = fVar23;
    uVar7 = uVar5;
    if (0.0 <= (fVar26 * fVar22 - fVar27 * fVar21) * fVar3 +
               (fVar27 * fVar20 - fVar25 * fVar22) * fVar2 +
               (fVar25 * fVar21 - fVar26 * fVar20) * fVar4) {
      fVar28 = fVar24;
      fVar24 = fVar23;
      fVar22 = fVar27;
      uVar7 = uVar6;
      uVar6 = uVar5;
      fVar20 = fVar25;
      fVar21 = fVar26;
    }
    fVar27 = local_68 - local_44;
    fVar25 = (float)local_70 - (float)local_4c;
    fVar26 = local_70._4_4_ - local_4c._4_4_;
    uVar5 = local_80;
    fVar23 = local_78;
    if (((((float)local_80 - (float)local_4c) * fVar22 - (local_78 - local_44) * fVar21) * fVar3 +
         ((local_78 - local_44) * fVar20 - (local_80._4_4_ - local_4c._4_4_) * fVar22) * fVar2 +
         ((local_80._4_4_ - local_4c._4_4_) * fVar21 - ((float)local_80 - (float)local_4c) * fVar20)
         * fVar4 < 0.0) ||
       (((pNVar19 = pNVar16, uVar5 = uVar6, fVar23 = fVar24,
         local_4c._4_4_ == local_80._4_4_ && (float)local_4c == (float)local_80 &&
         (local_44 == local_78)) ||
        (0.0 < (fVar22 * fVar26 - fVar27 * fVar20) * fVar2 +
               (fVar27 * fVar21 - fVar22 * fVar25) * fVar3 +
               (fVar20 * fVar25 - fVar21 * fVar26) * fVar4)))) {
      local_78 = fVar23;
      local_80 = uVar5;
      fVar20 = fVar28 - local_44;
      fVar24 = (float)((ulong)uVar7 >> 0x20) - local_4c._4_4_;
      fVar22 = (float)uVar7 - (float)local_4c;
      uVar5 = local_70;
      fVar23 = local_68;
      if (((fVar20 * fVar25 - fVar27 * fVar22) * fVar3 + (fVar27 * fVar24 - fVar20 * fVar26) * fVar2
           + (fVar26 * fVar22 - fVar25 * fVar24) * fVar4 <= 0.0) &&
         ((pNVar18 = pNVar16, uVar5 = uVar7, fVar23 = fVar28,
          (float)local_4c != (float)local_70 || local_4c._4_4_ != local_70._4_4_ ||
          (local_44 != local_68)))) {
        if (0.0 <= ((local_78 - local_44) * fVar22 - fVar20 * ((float)local_80 - (float)local_4c)) *
                   fVar3 + (fVar20 * (local_80._4_4_ - local_4c._4_4_) -
                           fVar24 * (local_78 - local_44)) * fVar2 +
                   (fVar24 * ((float)local_80 - (float)local_4c) -
                   fVar22 * (local_80._4_4_ - local_4c._4_4_)) * fVar4) {
          _query_task_clip_path(param_1,pNVar17,(Vector3 *)&local_80,pNVar19);
          local_4c = local_80;
          local_70 = local_80;
          local_44 = local_78;
          local_68 = local_78;
          _query_task_push_back_point_with_metadata
                    (param_1,(Vector3 *)&local_4c,*(Polygon **)pNVar19);
          pNVar16 = pNVar19;
          pNVar17 = pNVar19;
          pNVar18 = pNVar19;
          uVar5 = local_70;
          fVar23 = local_68;
        }
      }
    }
    else {
      _query_task_clip_path(param_1,pNVar17,(Vector3 *)&local_70,pNVar18);
      local_4c = local_70;
      local_80 = local_70;
      local_44 = local_68;
      local_78 = local_68;
      _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_4c,*(Polygon **)pNVar18);
      pNVar16 = pNVar18;
      pNVar17 = pNVar18;
      pNVar19 = pNVar18;
      uVar5 = local_70;
      fVar23 = local_68;
    }
    local_68 = fVar23;
    local_70 = uVar5;
    uVar8 = *(uint *)(pNVar16 + 0xc);
    uVar14 = (ulong)uVar8;
    if (uVar8 == 0xffffffff) break;
    uVar15 = (ulong)*puVar9;
    if (*puVar9 <= uVar8) goto LAB_00103100;
    pNVar16 = (NavigationPoly *)(uVar14 * 0x40 + *(long *)(puVar9 + 2));
joined_r0x00102d49:
  } while (pNVar16 != (NavigationPoly *)0x0);
  if (*(int *)(param_1 + 0x80) != 0) {
    pfVar1 = (float *)(*(long *)(param_1 + 0x88) + (ulong)(*(int *)(param_1 + 0x80) - 1) * 0xc);
    if (((*pfVar1 != (float)local_58) || (pfVar1[1] != local_58._4_4_)) || (pfVar1[2] != local_50))
    {
      _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_58,pPVar11);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar15 = 0;
  uVar14 = 0xffffffff;
LAB_00103100:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar15,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* NavMeshQueries3D::simplify_path_segment(int, int, LocalVector<Vector3, unsigned int, false,
   false> const&, float, LocalVector<unsigned int, unsigned int, false, false>&) */

void NavMeshQueries3D::simplify_path_segment
               (int param_1,int param_2,LocalVector *param_3,float param_4,LocalVector *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar11 = (ulong)(uint)param_1;
  uVar9 = (ulong)*(uint *)param_3;
  if ((uint)param_1 < *(uint *)param_3) {
    do {
      lVar10 = *(long *)(param_3 + 8);
      pfVar1 = (float *)(lVar10 + uVar11 * 0xc);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      uVar14 = (uint)uVar9;
      uVar11 = (ulong)(uint)param_2;
      if (uVar14 <= (uint)param_2) break;
      pfVar1 = (float *)(lVar10 + (ulong)(uint)param_2 * 0xc);
      if (param_1 < param_2) {
        uVar11 = (ulong)(uint)param_1;
        if (uVar14 <= (uint)param_1) break;
        uVar13 = 0;
        fVar20 = 0.0;
        fVar23 = pfVar1[1] - fVar3;
        pfVar12 = (float *)(lVar10 + (ulong)(uint)param_1 * 0xc);
        fVar24 = *pfVar1 - fVar2;
        fVar22 = pfVar1[2] - fVar4;
        fVar21 = fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22;
        uVar8 = param_1;
        while( true ) {
          fVar15 = *pfVar12;
          fVar5 = pfVar12[1];
          fVar6 = pfVar12[2];
          fVar17 = fVar15 - fVar2;
          fVar19 = fVar6 - fVar4;
          fVar18 = fVar5 - fVar3;
          if ((_LC27 <= fVar21) &&
             (fVar16 = (fVar17 * fVar24 + fVar18 * fVar23 + fVar19 * fVar22) / fVar21, 0.0 < fVar16)
             ) {
            if ((float)_LC28 <= fVar16) {
              fVar19 = fVar6 - pfVar1[2];
              fVar18 = fVar5 - pfVar1[1];
              fVar17 = fVar15 - *pfVar1;
            }
            else {
              fVar19 = fVar6 - (fVar22 * fVar16 + fVar4);
              fVar18 = fVar5 - (fVar23 * fVar16 + fVar3);
              fVar17 = fVar15 - (fVar16 * fVar24 + fVar2);
            }
          }
          fVar15 = fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
          if (fVar20 < fVar15) {
            uVar13 = (ulong)uVar8;
            fVar20 = fVar15;
          }
          uVar8 = uVar8 + 1;
          uVar11 = uVar13;
          if (param_2 == uVar8) break;
          uVar11 = (ulong)uVar8;
          pfVar12 = pfVar12 + 3;
          if (uVar14 <= uVar8) goto LAB_0010361b;
        }
      }
      else {
        uVar11 = 0;
        fVar20 = 0.0;
      }
      if (fVar20 <= param_4) {
        return;
      }
      uVar8 = (uint)uVar11;
      simplify_path_segment(param_1,uVar8,param_3,param_4,param_5);
      uVar14 = *(uint *)param_5;
      if (uVar14 == *(uint *)(param_5 + 4)) {
        uVar9 = (ulong)(uVar14 * 2);
        if (uVar14 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(param_5 + 4) = (int)uVar9;
        lVar10 = Memory::realloc_static(*(void **)(param_5 + 8),uVar9 * 4,false);
        *(long *)(param_5 + 8) = lVar10;
        if (lVar10 == 0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar14 = *(uint *)param_5;
      }
      else {
        lVar10 = *(long *)(param_5 + 8);
      }
      *(uint *)param_5 = uVar14 + 1;
      *(uint *)(lVar10 + (ulong)uVar14 * 4) = uVar8;
      uVar9 = (ulong)*(uint *)param_3;
      param_1 = uVar8;
    } while (uVar8 < *(uint *)param_3);
  }
LAB_0010361b:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,uVar11,uVar9,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* NavMeshQueries3D::get_simplified_path_indices(LocalVector<Vector3, unsigned int, false, false>
   const&, float) */

NavMeshQueries3D * __thiscall
NavMeshQueries3D::get_simplified_path_indices
          (NavMeshQueries3D *this,LocalVector *param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  fVar7 = 0.0;
  if (0.0 <= param_2) {
    fVar7 = param_2 * param_2;
  }
  iVar1 = *(int *)param_1;
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar3 = iVar1 - 1U | iVar1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
  if (uVar3 == 0) {
    pvVar4 = (void *)0x0;
    uVar6 = 4;
    uVar3 = 1;
LAB_001037a7:
    *(uint *)(this + 4) = uVar3;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar6,false);
    *(void **)(this + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_0010388f;
    uVar3 = *(uint *)this;
  }
  else {
    *(uint *)(this + 4) = uVar3;
    pvVar4 = (void *)Memory::realloc_static((void *)0x0,(ulong)uVar3 * 4,false);
    *(void **)(this + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = *(uint *)this;
    if (uVar3 == *(uint *)(this + 4)) {
      uVar3 = uVar3 * 2;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar6 = (ulong)uVar3 << 2;
      goto LAB_001037a7;
    }
  }
  *(uint *)this = uVar3 + 1;
  *(undefined4 *)((long)pvVar4 + (ulong)uVar3 * 4) = 0;
  simplify_path_segment(0,*(int *)param_1 + -1,param_1,fVar7,(LocalVector *)this);
  iVar1 = *(int *)param_1;
  uVar3 = *(uint *)this;
  if (*(uint *)(this + 4) == uVar3) {
    uVar6 = (ulong)(uVar3 * 2);
    if (uVar3 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(this + 4) = (int)uVar6;
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar6 * 4,false);
    *(long *)(this + 8) = lVar5;
    if (lVar5 == 0) {
LAB_0010388f:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = *(uint *)this;
  }
  else {
    lVar5 = *(long *)(this + 8);
  }
  *(uint *)this = uVar3 + 1;
  *(int *)(lVar5 + (ulong)uVar3 * 4) = iVar1 + -1;
  return this;
}



/* NavMeshQueries3D::_query_task_simplified_path_points(NavMeshQueries3D::NavMeshPathQueryTask3D&)
   [clone .part.0] */

void NavMeshQueries3D::_query_task_simplified_path_points(NavMeshPathQueryTask3D *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  NavMeshPathQueryTask3D *pNVar14;
  ulong uVar15;
  uint *puVar16;
  long in_FS_OFFSET;
  uint local_58 [2];
  uint *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_simplified_path_indices
            ((NavMeshQueries3D *)local_58,(LocalVector *)(param_1 + 0x80),*(float *)(param_1 + 0x34)
            );
  uVar5 = local_58[0];
  puVar9 = *(undefined8 **)(param_1 + 0x88);
  puVar16 = local_50;
  if (local_58[0] == 0) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar6 = (uint)uVar8;
    if (*(int *)(param_1 + 0x80) == 0) {
      if ((uVar8 & 1) != 0) goto LAB_00103d02;
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0;
      if ((uVar8 & 1) == 0) goto LAB_00103b30;
LAB_00103d02:
      if (*(int *)(param_1 + 0x90) != 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        if ((uVar8 & 2) == 0) goto LAB_00103b3a;
        goto LAB_00103d27;
      }
    }
    if ((uVar8 & 2) != 0) goto LAB_00103d27;
joined_r0x00103c72:
    if ((uVar6 & 4) != 0) {
LAB_00103c78:
      if (*(int *)(param_1 + 0xb0) != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
LAB_00103ba0:
    if (puVar16 != (uint *)0x0) {
LAB_00103bfd:
      if (local_58[0] != 0) goto LAB_00103c05;
      goto LAB_00103c0d;
    }
  }
  else {
    uVar15 = (ulong)local_58[0];
    puVar7 = puVar9;
    puVar13 = local_50;
    do {
      uVar6 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar2 = (undefined8 *)((long)puVar9 + (ulong)uVar6 * 0xc);
      *puVar7 = *puVar2;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar2 + 1);
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    } while (local_50 + uVar15 != puVar13);
    uVar6 = *(uint *)(param_1 + 0x80);
    if (local_58[0] < uVar6) {
      uVar8 = *(ulong *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x80) = local_58[0];
      if ((uVar8 & 1) != 0) {
        pvVar10 = *(void **)(param_1 + 0x98);
        goto LAB_001039f2;
      }
LAB_00103b30:
      uVar6 = (uint)uVar8;
      if ((uVar8 & 2) == 0) goto LAB_00103b3a;
      pvVar10 = *(void **)(param_1 + 0xa8);
      if (local_58[0] != 0) goto LAB_00103aab;
LAB_00103d27:
      if (*(int *)(param_1 + 0xa0) != 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      goto joined_r0x00103c72;
    }
    if (uVar6 < local_58[0]) {
      uVar3 = local_58[0] - 1;
      if (*(uint *)(param_1 + 0x84) < local_58[0]) {
        uVar6 = uVar3 >> 1 | uVar3;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
        *(uint *)(param_1 + 0x84) = uVar6;
        puVar9 = (undefined8 *)Memory::realloc_static(puVar9,(ulong)uVar6 * 0xc,false);
        *(undefined8 **)(param_1 + 0x88) = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar6 = *(uint *)(param_1 + 0x80);
        puVar16 = local_50;
        if (uVar6 < uVar5) goto LAB_001039b6;
      }
      else {
LAB_001039b6:
        puVar16 = local_50;
        memset((void *)((long)puVar9 + (ulong)uVar6 * 0xc),0,((ulong)(uVar3 - uVar6) * 3 + 3) * 4);
      }
      *(uint *)(param_1 + 0x80) = uVar5;
    }
    uVar8 = *(ulong *)(param_1 + 0x20);
    if ((uVar8 & 1) != 0) {
      pvVar10 = *(void **)(param_1 + 0x98);
LAB_001039f2:
      uVar12 = 0;
      do {
        if (local_58[0] <= (uint)uVar12) {
          uVar15 = (ulong)local_58[0];
          goto LAB_00103a39;
        }
        *(undefined4 *)((long)pvVar10 + uVar12 * 4) =
             *(undefined4 *)((long)pvVar10 + (ulong)puVar16[uVar12] * 4);
        uVar12 = uVar12 + 1;
      } while (uVar15 != uVar12);
      if (uVar5 < *(uint *)(param_1 + 0x90)) {
        *(uint *)(param_1 + 0x90) = uVar5;
        goto LAB_00103a96;
      }
      if (uVar5 <= *(uint *)(param_1 + 0x90)) goto LAB_00103a96;
      if (*(uint *)(param_1 + 0x94) < uVar5) {
        uVar6 = uVar5 - 1 >> 1 | uVar5 - 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
        *(uint *)(param_1 + 0x94) = uVar6;
        lVar11 = Memory::realloc_static(pvVar10,(ulong)uVar6 * 4,false);
        *(long *)(param_1 + 0x98) = lVar11;
        if (lVar11 != 0) {
          uVar8 = *(ulong *)(param_1 + 0x20);
          puVar16 = local_50;
          goto LAB_00103c2f;
        }
        LocalVector<long,unsigned_int,false,false>::resize((uint)pvVar10);
LAB_00103f3f:
        LocalVector<long,unsigned_int,false,false>::resize((uint)pvVar10);
        goto LAB_00103f44;
      }
LAB_00103c2f:
      *(uint *)(param_1 + 0x90) = uVar5;
      if ((uVar8 & 2) != 0) goto LAB_00103aa0;
      if ((uVar8 & 4) != 0) goto LAB_00103c4a;
      goto LAB_00103ba0;
    }
LAB_00103a96:
    uVar6 = (uint)uVar8;
    if ((uVar8 & 2) == 0) {
LAB_00103b3a:
      if ((uVar6 & 4) == 0) goto LAB_00103ba0;
      pNVar14 = *(NavMeshPathQueryTask3D **)(param_1 + 0xb8);
      if (uVar5 != 0) goto LAB_00103b57;
      goto LAB_00103c78;
    }
LAB_00103aa0:
    pvVar10 = *(void **)(param_1 + 0xa8);
LAB_00103aab:
    uVar6 = (uint)uVar8;
    uVar12 = 0;
    do {
      uVar15 = uVar12;
      if (uVar12 == local_58[0]) goto LAB_00103a39;
      *(undefined8 *)((long)pvVar10 + uVar12 * 8) =
           *(undefined8 *)((long)pvVar10 + (ulong)puVar16[uVar12] * 8);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar5);
    uVar3 = *(uint *)(param_1 + 0xa0);
    if (uVar5 < uVar3) {
      *(uint *)(param_1 + 0xa0) = uVar5;
joined_r0x00103d52:
      if ((uVar8 & 4) == 0) goto LAB_00103ba0;
      pNVar14 = *(NavMeshPathQueryTask3D **)(param_1 + 0xb8);
    }
    else {
      if (uVar5 <= uVar3) goto joined_r0x00103d52;
      uVar1 = uVar5 - 1;
      if (*(uint *)(param_1 + 0xa4) < uVar5) {
        uVar6 = uVar1 >> 1 | uVar1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
        *(uint *)(param_1 + 0xa4) = uVar6;
        pvVar10 = (void *)Memory::realloc_static(pvVar10,(ulong)uVar6 * 8,false);
        *(void **)(param_1 + 0xa8) = pvVar10;
        if (pvVar10 == (void *)0x0) goto LAB_00103f3f;
        uVar3 = *(uint *)(param_1 + 0xa0);
        uVar6 = (uint)*(undefined8 *)(param_1 + 0x20);
        puVar16 = local_50;
        if (uVar3 < uVar5) goto LAB_00103caf;
      }
      else {
LAB_00103caf:
        memset((void *)((long)pvVar10 + (ulong)uVar3 * 8),0,(ulong)(uVar1 - uVar3) * 8 + 8);
      }
      *(uint *)(param_1 + 0xa0) = uVar5;
      if ((uVar6 & 4) == 0) goto LAB_00103ba0;
LAB_00103c4a:
      pNVar14 = *(NavMeshPathQueryTask3D **)(param_1 + 0xb8);
    }
LAB_00103b57:
    uVar12 = (ulong)local_58[0];
    uVar8 = 0;
    do {
      uVar15 = uVar12;
      if (uVar12 == uVar8) {
LAB_00103a39:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,uVar12,uVar15,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *(undefined8 *)(pNVar14 + uVar8 * 8) = *(undefined8 *)(pNVar14 + (ulong)puVar16[uVar8] * 8);
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    if (uVar5 < *(uint *)(param_1 + 0xb0)) {
      *(uint *)(param_1 + 0xb0) = uVar5;
      goto LAB_00103bfd;
    }
    if (*(uint *)(param_1 + 0xb0) < uVar5) {
      if (*(uint *)(param_1 + 0xb4) < uVar5) {
        uVar6 = uVar5 - 1 >> 1 | uVar5 - 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
        *(uint *)(param_1 + 0xb4) = uVar6;
        lVar11 = Memory::realloc_static(pNVar14,(ulong)uVar6 * 8,false);
        *(long *)(param_1 + 0xb8) = lVar11;
        puVar16 = local_50;
        if (lVar11 == 0) {
          LocalVector<long,unsigned_int,false,false>::resize((uint)pNVar14);
          if ((pNVar14[0x30] != (NavMeshPathQueryTask3D)0x0) && (2 < *(uint *)(pNVar14 + 0x80))) {
            _query_task_simplified_path_points(pNVar14);
            return;
          }
          return;
        }
      }
      *(uint *)(param_1 + 0xb0) = uVar5;
      goto LAB_00103ba0;
    }
LAB_00103c05:
    local_58[0] = 0;
LAB_00103c0d:
    Memory::free_static(puVar16,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103f44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::_query_task_simplified_path_points(NavMeshQueries3D::NavMeshPathQueryTask3D&)
    */

void NavMeshQueries3D::_query_task_simplified_path_points(NavMeshPathQueryTask3D *param_1)

{
  if ((param_1[0x30] != (NavMeshPathQueryTask3D)0x0) && (2 < *(uint *)(param_1 + 0x80))) {
    _query_task_simplified_path_points(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavMeshQueries3D::_query_task_build_path_corridor(NavMeshQueries3D::NavMeshPathQueryTask3D&) */

void NavMeshQueries3D::_query_task_build_path_corridor(NavMeshPathQueryTask3D *param_1)

{
  Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer> *this;
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  Polygon *pPVar11;
  uint *puVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  void *pvVar19;
  long *plVar20;
  undefined8 *puVar21;
  Polygon *pPVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  uint *puVar31;
  long lVar32;
  long in_FS_OFFSET;
  float fVar33;
  float fVar34;
  float fVar35;
  float in_XMM1_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  long local_c0;
  float local_ac;
  float local_98;
  float fStack_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_8c = *(undefined8 *)(param_1 + 0x38);
  puVar9 = *(uint **)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x18);
  lVar32 = *(long *)(param_1 + 0x58);
  local_84 = *(undefined4 *)(param_1 + 0x40);
  local_80 = *(undefined8 *)(param_1 + 0x44);
  local_78 = *(float *)(param_1 + 0x4c);
  fVar5 = *(float *)(param_1 + 0x14);
  pPVar11 = *(Polygon **)(param_1 + 0x50);
  this = (Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer> *)
         (puVar9 + 4);
  uVar6 = puVar9[4];
  plVar20 = *(long **)(puVar9 + 6);
  plVar1 = plVar20 + uVar6;
  for (; plVar20 != plVar1; plVar20 = plVar20 + 1) {
    *(undefined4 *)(*plVar20 + 8) = 0xffffffff;
  }
  if (uVar6 != 0) {
    puVar9[4] = 0;
  }
  uVar3 = _LC30;
  uVar6 = *puVar9;
  uVar29 = (ulong)uVar6;
  puVar24 = *(undefined8 **)(puVar9 + 2);
  if (puVar24 != puVar24 + uVar29 * 8) {
    uVar15 = CONCAT44(_UNK_00107244,_LC20);
    puVar23 = puVar24;
    do {
      *puVar23 = 0;
      puVar21 = puVar23 + 8;
      *(undefined4 *)(puVar23 + 1) = 0xffffffff;
      *(undefined8 *)((long)puVar23 + 0xc) = uVar3;
      puVar23[7] = uVar15;
      puVar23 = puVar21;
    } while (puVar24 + uVar29 * 8 != puVar21);
  }
  uVar7 = *(uint *)pPVar11;
  if (uVar7 < uVar6) {
    uVar27 = (ulong)uVar7;
    bVar16 = true;
    fVar36 = 0.0;
    local_ac = 3.4028235e+38;
    local_c0 = 0;
    puVar23 = puVar24 + uVar27 * 8;
    *puVar23 = pPVar11;
    *(undefined8 *)((long)puVar23 + 0x2c) = local_8c;
    *(undefined4 *)((long)puVar23 + 0x34) = local_84;
    *(undefined8 *)((long)puVar23 + 0x14) = local_8c;
    *(undefined4 *)((long)puVar23 + 0x1c) = local_84;
    puVar23[4] = local_8c;
    *(undefined4 *)(puVar23 + 5) = local_84;
    *(undefined4 *)(puVar23 + 7) = 0;
    pPVar22 = pPVar11;
LAB_001040de:
    lVar26 = local_c0;
    puVar31 = *(uint **)(pPVar22 + 0x28);
    plVar1 = puVar24 + uVar27 * 8;
    fVar35 = *(float *)(*(long *)(pPVar22 + 8) + 0x10);
    puVar2 = puVar31 + (ulong)*(uint *)(pPVar22 + 0x20) * 4;
    for (; puVar2 != puVar31; puVar31 = puVar31 + 4) {
      lVar30 = 0;
      if (*puVar31 != 0) {
        do {
          while( true ) {
            puVar24 = (undefined8 *)(*(long *)(puVar31 + 2) + lVar30 * 0x28);
            puVar12 = (uint *)*puVar24;
            lVar13 = *(long *)(puVar12 + 2);
            if ((uVar4 & *(uint *)(lVar13 + 8)) != 0) break;
LAB_00104130:
            lVar30 = lVar30 + 1;
            if (*puVar31 <= (uint)lVar30) goto LAB_001043b0;
          }
          uVar3 = puVar24[3];
          local_68 = *(undefined8 *)((long)puVar24 + 0xc);
          local_60 = *(float *)((long)puVar24 + 0x14);
          fVar37 = (float)local_68;
          fVar41 = (float)uVar3 - fVar37;
          fVar39 = (float)((ulong)local_68 >> 0x20);
          fVar42 = (float)((ulong)uVar3 >> 0x20) - fVar39;
          fVar40 = *(float *)(puVar24 + 4) - local_60;
          fVar33 = fVar41 * fVar41 + fVar42 * fVar42 + fVar40 * fVar40;
          fVar34 = local_60;
          fVar38 = fVar37;
          if (fVar33 < _LC27) {
LAB_00104234:
            fVar37 = fVar38;
            local_60 = fVar34;
            fVar39 = (float)((ulong)local_68 >> 0x20);
          }
          else {
            fVar33 = ((*(float *)((long)plVar1 + 0x2c) - fVar37) * fVar41 +
                      fVar42 * (*(float *)(plVar1 + 6) - fVar39) +
                     (*(float *)((long)plVar1 + 0x34) - local_60) * fVar40) / fVar33;
            if (0.0 < fVar33) {
              fVar34 = *(float *)(puVar24 + 4);
              fVar38 = (float)uVar3;
              local_68 = uVar3;
              if ((float)_LC28 <= fVar33) goto LAB_00104234;
              local_60 = local_60 + fVar40 * fVar33;
              fVar37 = fVar37 + fVar33 * fVar41;
              fVar39 = fVar39 + fVar33 * fVar42;
              local_68 = CONCAT44(fVar39,fVar37);
            }
          }
          uVar27 = (ulong)*puVar12;
          uVar29 = (ulong)*puVar9;
          fVar33 = fVar39 - *(float *)(plVar1 + 6);
          fVar34 = fVar37 - *(float *)((long)plVar1 + 0x2c);
          fVar38 = local_60 - *(float *)((long)plVar1 + 0x34);
          fVar34 = SQRT(fVar34 * fVar34 + fVar33 * fVar33 + fVar38 * fVar38) * fVar35 + fVar36 +
                   *(float *)(plVar1 + 7);
          if (*puVar9 <= *puVar12) goto LAB_00104543;
          puVar23 = (undefined8 *)(uVar27 * 0x40 + *(long *)(puVar9 + 2));
          in_XMM1_Da = local_60;
          if (*(float *)(puVar23 + 7) <= fVar34) goto LAB_00104130;
          uVar3 = *(undefined8 *)((long)puVar24 + 0xc);
          uVar6 = *(uint *)(puVar23 + 1);
          *(ulong *)((long)puVar23 + 0xc) = CONCAT44(*(undefined4 *)(puVar24 + 1),uVar7);
          *(undefined8 *)((long)puVar23 + 0x14) = uVar3;
          *(undefined4 *)((long)puVar23 + 0x1c) = *(undefined4 *)((long)puVar24 + 0x14);
          uVar8 = *(undefined4 *)(puVar24 + 4);
          puVar23[4] = puVar24[3];
          *(undefined4 *)(puVar23 + 5) = uVar8;
          in_XMM1_Da = SQRT(((float)local_80 - fVar37) * ((float)local_80 - fVar37) +
                            (local_80._4_4_ - fVar39) * (local_80._4_4_ - fVar39) +
                            (local_78 - local_60) * (local_78 - local_60)) *
                       *(float *)(lVar13 + 0x10);
          uVar28 = puVar9[4];
          puVar23[7] = CONCAT44(in_XMM1_Da,fVar34);
          *(undefined8 *)((long)puVar23 + 0x2c) = local_68;
          *(float *)((long)puVar23 + 0x34) = local_60;
          if (uVar6 == 0xffffffff) {
            *puVar23 = puVar12;
            pvVar19 = *(void **)(puVar9 + 6);
            if (puVar9[5] == uVar28) {
              uVar29 = (ulong)(uVar28 * 2);
              if (uVar28 * 2 == 0) {
                uVar29 = 1;
              }
              puVar9[5] = (uint)uVar29;
              pvVar19 = (void *)Memory::realloc_static(pvVar19,uVar29 << 3,false);
              *(void **)(puVar9 + 6) = pvVar19;
              if (pvVar19 == (void *)0x0) {
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar14 = (code *)invalidInstructionException();
                (*pcVar14)();
              }
              uVar28 = puVar9[4];
            }
            puVar9[4] = uVar28 + 1;
            *(undefined8 **)((long)pvVar19 + (ulong)uVar28 * 8) = puVar23;
            *(uint *)(puVar23 + 1) = uVar28;
            gd::Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer>::
            _shift_up(this,uVar28);
            goto LAB_00104130;
          }
          if (uVar28 <= uVar6) {
            _err_print_index_error
                      ("shift","modules/navigation/3d/../nav_utils.h",0xf2,(ulong)uVar6,
                       (ulong)uVar28,"p_index","_buffer.size()",
                       "Heap element index is out of range.",false,false);
            goto LAB_00104130;
          }
          cVar18 = gd::
                   Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer>
                   ::_shift_up(this,uVar6);
          if (cVar18 != '\0') goto LAB_00104130;
          lVar30 = lVar30 + 1;
          gd::Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer>::
          _shift_down(this,uVar6);
        } while ((uint)lVar30 < *puVar31);
      }
LAB_001043b0:
    }
    uVar6 = puVar9[4];
    local_98 = (float)uVar10;
    fStack_94 = (float)((ulong)uVar10 >> 0x20);
    if (uVar6 != 0) {
      plVar20 = *(long **)(puVar9 + 6);
      puVar24 = (undefined8 *)*plVar20;
      *(undefined4 *)(puVar24 + 1) = 0xffffffff;
      if (uVar6 == 1) {
        puVar9[4] = 0;
      }
      else {
        lVar26 = plVar20[uVar6 - 1];
        *plVar20 = lVar26;
        *(undefined4 *)(lVar26 + 8) = 0;
        puVar9[4] = uVar6 - 1;
        gd::Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer>::
        _shift_down(this,0);
      }
      uVar6 = *puVar9;
      uVar29 = (ulong)uVar6;
      uVar7 = *(uint *)*puVar24;
      if (bVar16) {
        if (uVar6 <= uVar7) {
          uVar27 = (ulong)uVar7;
          goto LAB_00104543;
        }
        puVar24 = *(undefined8 **)(puVar9 + 2);
        plVar20 = puVar24 + (ulong)uVar7 * 8;
        local_98 = local_98 - *(float *)((long)plVar20 + 0x2c);
        fVar36 = fVar5 - *(float *)((long)plVar20 + 0x34);
        lVar26 = *plVar20;
        in_XMM1_Da = fVar36 * fVar36;
        fVar36 = local_98 * local_98 +
                 (fStack_94 - *(float *)(plVar20 + 6)) * (fStack_94 - *(float *)(plVar20 + 6)) +
                 in_XMM1_Da;
        if (fVar36 < local_ac) {
          local_c0 = lVar26;
          local_ac = fVar36;
        }
      }
      else {
        if (uVar6 <= uVar7) goto LAB_0010451d;
        puVar24 = *(undefined8 **)(puVar9 + 2);
        lVar26 = puVar24[(ulong)uVar7 * 8];
      }
      uVar27 = (ulong)uVar7;
      if (lVar32 == lVar26) {
        *(long *)(param_1 + 0x58) = lVar32;
        *(undefined8 *)(param_1 + 0x44) = local_80;
        *(undefined8 *)(param_1 + 0x38) = local_8c;
        *(Polygon **)(param_1 + 0x50) = pPVar11;
        *(float *)(param_1 + 0x4c) = local_78;
        *(undefined4 *)(param_1 + 0x40) = local_84;
        *(uint *)(param_1 + 0x60) = uVar7;
        goto LAB_00104c9c;
      }
      fVar36 = 0.0;
      if (*(long *)(*(long *)(*plVar1 + 8) + 0x20) != *(long *)(*(long *)(lVar26 + 8) + 0x20)) {
        fVar36 = *(float *)(*(long *)(*plVar1 + 8) + 0xc);
      }
      lVar26 = lVar32;
      if (uVar6 <= uVar7) goto LAB_00104543;
LAB_001044e1:
      pPVar22 = (Polygon *)puVar24[uVar27 * 8];
      lVar32 = lVar26;
      goto LAB_001040de;
    }
    if (bVar16) {
      if (local_c0 != 0) {
        uVar29 = (ulong)*(uint *)(local_c0 + 0x10);
        if (*(uint *)(local_c0 + 0x10) < 3) {
          fVar36 = 3.4028235e+38;
        }
        else {
          lVar32 = 0x30;
          uVar27 = 2;
          fVar36 = 3.4028235e+38;
          do {
            fVar35 = in_XMM1_Da;
            if ((uint)uVar29 <= (uint)uVar27) goto LAB_001047b9;
            puVar24 = *(undefined8 **)(local_c0 + 0x18);
            local_68 = *puVar24;
            local_60 = *(float *)(puVar24 + 1);
            local_5c = *(undefined8 *)((long)puVar24 + lVar32 + -0x18);
            local_54 = *(undefined4 *)((long)puVar24 + lVar32 + -0x10);
            local_50 = *(undefined8 *)((long)puVar24 + lVar32);
            local_48 = *(undefined4 *)((long)puVar24 + lVar32 + 8);
            local_74 = Face3::get_closest_point_to((Vector3 *)&local_68);
            fVar38 = fStack_94 - (float)((ulong)local_74 >> 0x20);
            fVar34 = local_98 - (float)local_74;
            in_XMM1_Da = (fVar5 - fVar35) * (fVar5 - fVar35);
            fVar34 = fVar34 * fVar34 + fVar38 * fVar38 + in_XMM1_Da;
            if (fVar34 < fVar36) {
              local_80 = local_74;
              local_78 = fVar35;
              fVar36 = fVar34;
            }
            uVar29 = (ulong)*(uint *)(local_c0 + 0x10);
            uVar27 = uVar27 + 1;
            lVar32 = lVar32 + 0x18;
            local_6c = fVar35;
          } while (uVar27 < uVar29);
        }
        uVar29 = (ulong)*(uint *)(pPVar11 + 0x10);
        if (2 < *(uint *)(pPVar11 + 0x10)) {
          lVar32 = 0x30;
          uVar27 = 2;
          bVar17 = false;
          do {
            if ((uint)uVar29 <= (uint)uVar27) {
LAB_00104b6b:
              iVar25 = 0xae;
              goto LAB_00104548;
            }
            while( true ) {
              fVar34 = in_XMM1_Da;
              puVar24 = *(undefined8 **)(pPVar11 + 0x18);
              local_68 = *puVar24;
              local_60 = *(float *)(puVar24 + 1);
              local_5c = *(undefined8 *)((long)puVar24 + lVar32 + -0x18);
              local_54 = *(undefined4 *)((long)puVar24 + lVar32 + -0x10);
              local_50 = *(undefined8 *)((long)puVar24 + lVar32);
              local_48 = *(undefined4 *)((long)puVar24 + lVar32 + 8);
              local_74 = Face3::get_closest_point_to((Vector3 *)&local_68);
              fVar38 = fStack_94 - (float)((ulong)local_74 >> 0x20);
              fVar35 = local_98 - (float)local_74;
              in_XMM1_Da = (fVar5 - fVar34) * (fVar5 - fVar34);
              fVar35 = fVar35 * fVar35 + fVar38 * fVar38 + in_XMM1_Da;
              local_6c = fVar34;
              if (fVar36 <= fVar35) break;
              uVar29 = (ulong)*(uint *)(pPVar11 + 0x10);
              uVar27 = uVar27 + 1;
              lVar32 = lVar32 + 0x18;
              local_80 = local_74;
              local_78 = fVar34;
              if (uVar29 <= uVar27) goto LAB_0010497e;
              bVar17 = bVar16;
              fVar36 = fVar35;
              if (*(uint *)(pPVar11 + 0x10) <= (uint)uVar27) goto LAB_00104b6b;
            }
            uVar29 = (ulong)*(uint *)(pPVar11 + 0x10);
            uVar27 = uVar27 + 1;
            lVar32 = lVar32 + 0x18;
          } while (uVar27 < uVar29);
          if (bVar17) goto LAB_0010497e;
        }
        uVar6 = *puVar9;
        uVar29 = (ulong)uVar6;
        puVar24 = *(undefined8 **)(puVar9 + 2);
        for (puVar23 = puVar24; puVar24 + uVar29 * 8 != puVar23; puVar23 = puVar23 + 8) {
          *puVar23 = 0;
          *(undefined4 *)(puVar23 + 7) = 0x7f7fffff;
        }
        uVar7 = *(uint *)pPVar11;
        if (uVar7 < uVar6) {
          uVar27 = (ulong)uVar7;
          bVar16 = false;
          fVar36 = 0.0;
          puVar24[uVar27 * 8] = pPVar11;
          *(undefined4 *)(puVar24 + uVar27 * 8 + 7) = 0;
          local_c0 = 0;
          goto LAB_001044e1;
        }
        goto LAB_0010451d;
      }
    }
    else {
      _err_print_error("_query_task_build_path_corridor",
                       "modules/navigation/3d/nav_mesh_queries_3d.cpp",0x14d,
                       "Condition \"is_reachable == false\" is true. Breaking.",
                       "It\'s not expect to not find the most reachable polygons",0,0);
    }
    uVar29 = (ulong)*(uint *)(pPVar11 + 0x10);
    lVar32 = 0x30;
    uVar27 = 2;
    fVar36 = _LC20;
    if (*(uint *)(pPVar11 + 0x10) < 3) goto LAB_0010497e;
    while (fVar35 = in_XMM1_Da, (uint)uVar27 < (uint)uVar29) {
      puVar24 = *(undefined8 **)(pPVar11 + 0x18);
      local_68 = *puVar24;
      local_60 = *(float *)(puVar24 + 1);
      local_5c = *(undefined8 *)((long)puVar24 + lVar32 + -0x18);
      local_54 = *(undefined4 *)((long)puVar24 + lVar32 + -0x10);
      local_50 = *(undefined8 *)((long)puVar24 + lVar32);
      local_48 = *(undefined4 *)((long)puVar24 + lVar32 + 8);
      local_74 = Face3::get_closest_point_to((Vector3 *)&local_68);
      fVar38 = fStack_94 - (float)((ulong)local_74 >> 0x20);
      fVar34 = local_98 - (float)local_74;
      in_XMM1_Da = (fVar5 - fVar35) * (fVar5 - fVar35);
      fVar34 = fVar34 * fVar34 + fVar38 * fVar38 + in_XMM1_Da;
      if (fVar34 < fVar36) {
        fVar36 = fVar34;
        local_80 = local_74;
        local_78 = fVar35;
      }
      uVar29 = (ulong)*(uint *)(pPVar11 + 0x10);
      uVar27 = uVar27 + 1;
      lVar32 = lVar32 + 0x18;
      local_6c = fVar35;
      if (uVar29 <= uVar27) {
LAB_0010497e:
        NavMeshPathQueryTask3D::path_clear(param_1);
        _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_8c,pPVar11);
        _query_task_push_back_point_with_metadata(param_1,(Vector3 *)&local_80,pPVar11);
        *(undefined4 *)(param_1 + 0xe0) = 1;
LAB_00104c9c:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
LAB_001047b9:
    iVar25 = 0xae;
  }
  else {
LAB_0010451d:
    uVar27 = (ulong)uVar7;
LAB_00104543:
    iVar25 = 0xb2;
  }
LAB_00104548:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar25,uVar27,uVar29,"p_index","count",
             "",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar14 = (code *)invalidInstructionException();
  (*pcVar14)();
}



/* NavMeshQueries3D::query_task_map_iteration_get_path(NavMeshQueries3D::NavMeshPathQueryTask3D&,
   NavMapIteration const&) */

void NavMeshQueries3D::query_task_map_iteration_get_path
               (NavMeshPathQueryTask3D *param_1,NavMapIteration *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  Polygon *pPVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  _query_task_find_start_end_positions(param_1,param_2);
  pPVar6 = *(Polygon **)(param_1 + 0x50);
  if ((pPVar6 != (Polygon *)0x0) && (*(Polygon **)(param_1 + 0x58) != (Polygon *)0x0)) {
    if (pPVar6 == *(Polygon **)(param_1 + 0x58)) {
      NavMeshPathQueryTask3D::path_clear(param_1);
      _query_task_push_back_point_with_metadata(param_1,(Vector3 *)(param_1 + 0x38),pPVar6);
      _query_task_push_back_point_with_metadata
                (param_1,(Vector3 *)(param_1 + 0x44),*(Polygon **)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0xe0) = 1;
      goto LAB_00104f0f;
    }
    _query_task_build_path_corridor(param_1);
    if (*(int *)(param_1 + 0xe0) - 1U < 2) goto LAB_00104f0f;
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 1) {
      _query_task_post_process_edgecentered(param_1);
    }
    else if (iVar3 == 2) {
      _query_task_post_process_nopostprocessing(param_1);
    }
    else {
      if (iVar3 != 0) {
        _err_print_error("query_task_map_iteration_get_path",
                         "modules/navigation/3d/nav_mesh_queries_3d.cpp",0x1da,
                         "No match for used PathPostProcessing - fallback to default",0,1);
      }
      _query_task_post_process_corridorfunnel(param_1);
    }
    uVar14 = *(uint *)(param_1 + 0x80);
    puVar7 = *(undefined8 **)(param_1 + 0x88);
    uVar12 = uVar14 - 1;
    uVar15 = uVar12 - (uVar14 >> 1);
    puVar10 = puVar7;
    if (uVar14 >> 1 != 0) {
      do {
        uVar13 = (ulong)uVar12;
        uVar8 = *puVar10;
        uVar4 = *(undefined4 *)(puVar10 + 1);
        uVar12 = uVar12 - 1;
        puVar1 = (undefined8 *)((long)puVar7 + uVar13 * 0xc);
        *puVar10 = *puVar1;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar1 = uVar8;
        *(undefined4 *)(puVar1 + 1) = uVar4;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (uVar15 != uVar12);
    }
    uVar14 = *(uint *)(param_1 + 0x90);
    if (uVar14 >> 1 != 0) {
      lVar9 = *(long *)(param_1 + 0x98);
      lVar11 = 0;
      do {
        uVar4 = *(undefined4 *)(lVar9 + lVar11 * 4);
        puVar2 = (undefined4 *)(lVar9 + (ulong)((uVar14 - (int)lVar11) - 1) * 4);
        *(undefined4 *)(lVar9 + lVar11 * 4) = *puVar2;
        lVar11 = lVar11 + 1;
        *puVar2 = uVar4;
        uVar14 = *(uint *)(param_1 + 0x90);
      } while ((uint)lVar11 < uVar14 >> 1);
    }
    uVar14 = *(uint *)(param_1 + 0xa0);
    puVar7 = *(undefined8 **)(param_1 + 0xa8);
    uVar12 = uVar14 - 1;
    uVar15 = uVar12 - (uVar14 >> 1);
    puVar10 = puVar7;
    if (uVar14 >> 1 != 0) {
      do {
        uVar13 = (ulong)uVar12;
        uVar8 = *puVar10;
        uVar12 = uVar12 - 1;
        puVar1 = puVar7 + uVar13;
        *puVar10 = *puVar1;
        *puVar1 = uVar8;
        puVar10 = puVar10 + 1;
      } while (uVar15 != uVar12);
    }
    uVar14 = *(uint *)(param_1 + 0xb0);
    puVar7 = *(undefined8 **)(param_1 + 0xb8);
    uVar12 = uVar14 - 1;
    uVar15 = uVar12 - (uVar14 >> 1);
    puVar10 = puVar7;
    if (uVar14 >> 1 != 0) {
      do {
        uVar13 = (ulong)uVar12;
        uVar8 = *puVar10;
        uVar12 = uVar12 - 1;
        puVar1 = puVar7 + uVar13;
        *puVar10 = *puVar1;
        *puVar1 = uVar8;
        puVar10 = puVar10 + 1;
      } while (uVar15 != uVar12);
    }
    if ((param_1[0x30] != (NavMeshPathQueryTask3D)0x0) && (2 < *(uint *)(param_1 + 0x80))) {
      _query_task_simplified_path_points(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = 1;
LAB_00104f0f:
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavMeshQueries3D::polygons_get_random_point(LocalVector<gd::Polygon, unsigned int, false, false>
   const&, unsigned int, bool) */

undefined1  [16]
NavMeshQueries3D::polygons_get_random_point(LocalVector *param_1,uint param_2,bool param_3)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  float fVar14;
  undefined1 auVar15 [16];
  float local_b0;
  float local_ac;
  void *local_a8;
  undefined8 *local_a0;
  int local_98;
  void *local_88;
  undefined8 *local_80;
  int local_78;
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 == 0) {
    local_64 = ZEXT812(0);
    goto LAB_0010501b;
  }
  if (!param_3) {
    uVar5 = Math::random(0,*(int *)param_1 + -1);
    uVar12 = (ulong)*(uint *)param_1;
    if ((uint)uVar5 < *(uint *)param_1) {
      lVar10 = *(long *)(param_1 + 8) + (uVar5 & 0xffffffff) * 0x38;
      uVar5 = Math::random(2,*(int *)(lVar10 + 0x10) + -1);
      uVar13 = *(uint *)(lVar10 + 0x10);
      uVar12 = (ulong)uVar13;
      if ((uint)uVar5 < uVar13) {
        uVar8 = uVar5 & 0xffffffff;
        puVar9 = *(undefined8 **)(lVar10 + 0x18);
        uVar3 = (uint)uVar5 - 1;
        uVar5 = (ulong)uVar3;
        if (uVar3 < uVar13) {
          local_58 = *puVar9;
          local_50 = *(undefined4 *)(puVar9 + 1);
          local_4c = puVar9[uVar5 * 3];
          local_44 = *(undefined4 *)(puVar9 + uVar5 * 3 + 1);
          local_40 = puVar9[uVar8 * 3];
          local_38 = *(undefined4 *)(puVar9 + uVar8 * 3 + 1);
          local_70 = Face3::get_random_point_inside();
          local_64 = local_70;
          goto LAB_0010501b;
        }
      }
    }
LAB_00105470:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,uVar5 & 0xffffffff,uVar12,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_b0 = 0.0;
  lVar10 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  local_a0 = &_GlobalNilClass::_nil;
  do {
    fVar14 = *(float *)(*(long *)(param_1 + 8) + lVar10 * 0x38 + 0x30);
    if (fVar14 != 0.0) {
      puVar4 = (undefined4 *)
               RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::operator[]
                         ((RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *)&local_a8,
                          &local_b0);
      local_b0 = fVar14 + local_b0;
      *puVar4 = (int)lVar10;
    }
    lVar10 = lVar10 + 1;
  } while ((uint)lVar10 < *(uint *)param_1);
  if ((local_98 == 0) || (local_b0 == 0.0)) {
LAB_00105140:
    local_64 = ZEXT812(0);
  }
  else {
    fVar14 = (float)Math::random(0.0,local_b0);
    if ((local_a8 == (void *)0x0) ||
       (puVar9 = *(undefined8 **)((long)local_a8 + 0x10),
       local_a0 == *(undefined8 **)((long)local_a8 + 0x10))) {
LAB_00105119:
      _err_print_error("polygons_get_random_point","modules/navigation/3d/nav_mesh_queries_3d.cpp",
                       0x53,"Condition \"!region_E\" is true. Returning: Vector3()",0,0);
      goto LAB_00105140;
    }
    do {
      puVar7 = puVar9;
      fVar1 = *(float *)(puVar7 + 6);
      if (fVar14 < fVar1) {
        puVar9 = (undefined8 *)puVar7[2];
      }
      else {
        if (fVar14 <= fVar1) goto LAB_001052da;
        puVar9 = (undefined8 *)puVar7[1];
      }
    } while (local_a0 != puVar9);
    if ((fVar14 < fVar1) && (puVar7 = (undefined8 *)puVar7[5], puVar7 == (undefined8 *)0x0))
    goto LAB_00105119;
LAB_001052da:
    uVar13 = *(uint *)((long)puVar7 + 0x34);
    if (uVar13 < *(uint *)param_1) {
      local_ac = 0.0;
      local_80 = &_GlobalNilClass::_nil;
      local_88 = (void *)0x0;
      lVar10 = *(long *)(param_1 + 8) + (ulong)uVar13 * 0x38;
      local_78 = 0;
      if (*(uint *)(lVar10 + 0x10) < 3) {
LAB_00105437:
        local_64 = ZEXT812(0);
      }
      else {
        lVar11 = 0x30;
        uVar13 = 2;
        do {
          puVar9 = *(undefined8 **)(lVar10 + 0x18);
          local_58 = *puVar9;
          local_50 = *(undefined4 *)(puVar9 + 1);
          local_4c = *(undefined8 *)((long)puVar9 + lVar11 + -0x18);
          local_44 = *(undefined4 *)((long)puVar9 + lVar11 + -0x10);
          local_40 = *(undefined8 *)((long)puVar9 + lVar11);
          local_38 = *(undefined4 *)((long)puVar9 + lVar11 + 8);
          fVar14 = (float)Face3::get_area();
          if (fVar14 != 0.0) {
            puVar6 = (uint *)RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::
                             operator[]((RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>
                                         *)&local_88,&local_ac);
            local_ac = fVar14 + local_ac;
            *puVar6 = uVar13;
          }
          uVar13 = uVar13 + 1;
          lVar11 = lVar11 + 0x18;
        } while (uVar13 < *(uint *)(lVar10 + 0x10));
        if ((local_78 == 0) || (local_ac == 0.0)) goto LAB_00105437;
        fVar14 = (float)Math::random(0.0,local_ac);
        if ((local_88 == (void *)0x0) ||
           (puVar9 = *(undefined8 **)((long)local_88 + 0x10),
           local_80 == *(undefined8 **)((long)local_88 + 0x10))) {
LAB_0010564d:
          _err_print_error("polygons_get_random_point",
                           "modules/navigation/3d/nav_mesh_queries_3d.cpp",0x6d,
                           "Condition \"!polygon_E\" is true. Returning: Vector3()",0,0);
          goto LAB_00105437;
        }
        do {
          puVar7 = puVar9;
          fVar1 = *(float *)(puVar7 + 6);
          if (fVar14 < fVar1) {
            puVar9 = (undefined8 *)puVar7[2];
          }
          else {
            if (fVar14 <= fVar1) goto LAB_00105505;
            puVar9 = (undefined8 *)puVar7[1];
          }
        } while (local_80 != puVar9);
        if ((fVar14 < fVar1) && (puVar7 = (undefined8 *)puVar7[5], puVar7 == (undefined8 *)0x0))
        goto LAB_0010564d;
LAB_00105505:
        uVar13 = *(uint *)((long)puVar7 + 0x34);
        uVar3 = *(uint *)(lVar10 + 0x10);
        uVar12 = (ulong)uVar3;
        if (uVar13 < uVar3) {
          puVar9 = *(undefined8 **)(lVar10 + 0x18);
          uVar5 = (ulong)(uVar13 - 1);
          if (uVar3 <= uVar13 - 1) goto LAB_00105470;
          local_58 = *puVar9;
          local_50 = *(undefined4 *)(puVar9 + 1);
          local_4c = puVar9[uVar5 * 3];
          local_44 = *(undefined4 *)(puVar9 + uVar5 * 3 + 1);
          local_40 = puVar9[(ulong)uVar13 * 3];
          local_38 = *(undefined4 *)(puVar9 + (ulong)uVar13 * 3 + 1);
          local_70 = Face3::get_random_point_inside();
          local_64 = local_70;
        }
        else {
          _err_print_index_error
                    ("polygons_get_random_point","modules/navigation/3d/nav_mesh_queries_3d.cpp",
                     0x6f,(ulong)uVar13,uVar12,"rrp_face_index","rr_polygon.points.size()","",false,
                     false);
          local_64 = ZEXT812(0);
        }
      }
      RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::clear
                ((RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *)&local_88);
      if (local_88 != (void *)0x0) {
        Memory::free_static(local_88,false);
      }
    }
    else {
      _err_print_index_error
                ("polygons_get_random_point","modules/navigation/3d/nav_mesh_queries_3d.cpp",0x55,
                 (ulong)uVar13,(ulong)*(uint *)param_1,"rrp_polygon_index","region_polygons.size()",
                 "",false,false);
      local_64 = ZEXT812(0);
    }
  }
  RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::clear
            ((RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *)&local_a8);
  if (local_a8 != (void *)0x0) {
    Memory::free_static(local_a8,false);
  }
LAB_0010501b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar15._12_4_ = 0;
    auVar15._0_12_ = local_64;
    return auVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshQueries3D::map_iteration_get_random_point(NavMapIteration const&, unsigned int, bool) */

undefined1  [16]
NavMeshQueries3D::map_iteration_get_random_point(NavMapIteration *param_1,uint param_2,bool param_3)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [16];
  float local_6c;
  void *local_68;
  undefined8 *local_60;
  int local_58;
  undefined1 local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x60) == 0) {
    auVar4 = ZEXT812(0);
    goto LAB_00105708;
  }
  uVar5 = *(int *)(param_1 + 0x60) - 1;
  pvVar8 = (void *)0x0;
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = (uVar5 >> 0x10 | uVar5) + 1;
  if (uVar5 == 0) {
LAB_0010577d:
    lVar12 = 0;
    uVar13 = 0;
    do {
      lVar6 = lVar12 * 0x90 + *(long *)(param_1 + 0x68);
      if ((*(char *)(lVar6 + 4) != '\0') && ((param_2 & *(uint *)(lVar6 + 8)) != 0)) {
        if (uVar5 == uVar13) {
          uVar5 = uVar5 * 2;
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          pvVar8 = (void *)Memory::realloc_static(pvVar8,(ulong)uVar5 << 2,false);
          if (pvVar8 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        uVar14 = (ulong)uVar13;
        uVar13 = uVar13 + 1;
        *(int *)((long)pvVar8 + uVar14 * 4) = (int)lVar12;
      }
      uVar2 = *(uint *)(param_1 + 0x60);
      lVar12 = lVar12 + 1;
    } while ((uint)lVar12 < uVar2);
    if (uVar13 == 0) {
      local_4c._0_8_ = 0;
      local_4c._8_4_ = 0;
      auVar4 = ZEXT812(0);
      if (pvVar8 != (void *)0x0) {
        Memory::free_static(pvVar8,false);
        auVar4._8_4_ = local_4c._8_4_;
        auVar4._0_8_ = local_4c._0_8_;
      }
      goto LAB_00105708;
    }
    if (param_3) {
      uVar14 = 0;
      local_6c = 0.0;
      local_68 = (void *)0x0;
      local_58 = 0;
      local_60 = &_GlobalNilClass::_nil;
      while( true ) {
        uVar5 = *(uint *)((long)pvVar8 + uVar14 * 4);
        if (uVar2 <= uVar5) break;
        fVar15 = *(float *)((ulong)uVar5 * 0x90 + *(long *)(param_1 + 0x68) + 0x70);
        if (fVar15 != 0.0) {
          puVar7 = (undefined4 *)
                   RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::operator[]
                             ((RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *)
                              &local_68,&local_6c);
          local_6c = fVar15 + local_6c;
          *puVar7 = (int)uVar14;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar13) {
          if ((local_58 == 0) || (local_6c == 0.0)) goto LAB_00105aa0;
          fVar15 = (float)Math::random(0.0,local_6c);
          if ((local_68 == (void *)0x0) ||
             (puVar11 = *(undefined8 **)((long)local_68 + 0x10),
             local_60 == *(undefined8 **)((long)local_68 + 0x10))) goto LAB_00105a7b;
          goto LAB_00105a4c;
        }
        uVar2 = *(uint *)(param_1 + 0x60);
      }
      uVar14 = (ulong)uVar5;
    }
    else {
      uVar5 = Math::random(0,uVar13 - 1);
      if (uVar13 <= uVar5) {
        uVar14 = (ulong)uVar5;
        iVar10 = 0xb2;
        goto LAB_00105893;
      }
      uVar2 = *(uint *)(param_1 + 0x60);
      uVar5 = *(uint *)((long)pvVar8 + (ulong)uVar5 * 4);
      uVar14 = (ulong)uVar5;
      if (uVar5 < uVar2) {
        local_4c = polygons_get_random_point
                             ((LocalVector *)(uVar14 * 0x90 + *(long *)(param_1 + 0x68) + 0x60),
                              param_2,false);
        auVar4 = local_4c;
        if (pvVar8 == (void *)0x0) goto LAB_00105708;
        goto LAB_00105960;
      }
    }
LAB_00105873:
    iVar10 = 0xae;
    uVar13 = uVar2;
LAB_00105893:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",iVar10,uVar14,(ulong)uVar13,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pvVar8 = (void *)Memory::realloc_static((void *)0x0,(ulong)uVar5 << 2,false);
  if (pvVar8 == (void *)0x0) {
    _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*(int *)(param_1 + 0x60) != 0) goto LAB_0010577d;
  local_4c = ZEXT812(0);
  goto LAB_00105960;
LAB_00105a4c:
  do {
    puVar9 = puVar11;
    fVar1 = *(float *)(puVar9 + 6);
    if (fVar15 < fVar1) {
      puVar11 = (undefined8 *)puVar9[2];
    }
    else {
      if (fVar15 <= fVar1) goto LAB_00105b0b;
      puVar11 = (undefined8 *)puVar9[1];
    }
  } while (local_60 != puVar11);
  if ((fVar1 <= fVar15) || (puVar9 = (undefined8 *)puVar9[5], puVar9 != (undefined8 *)0x0)) {
LAB_00105b0b:
    uVar5 = *(uint *)((long)puVar9 + 0x34);
    if (uVar5 < uVar13) {
      uVar5 = *(uint *)((long)pvVar8 + (ulong)uVar5 * 4);
      uVar14 = (ulong)uVar5;
      uVar2 = *(uint *)(param_1 + 0x60);
      if (uVar2 <= uVar5) goto LAB_00105873;
      local_4c = polygons_get_random_point
                           ((LocalVector *)(uVar14 * 0x90 + *(long *)(param_1 + 0x68) + 0x60),
                            param_2,true);
    }
    else {
      _err_print_index_error
                ("map_iteration_get_random_point","modules/navigation/3d/nav_mesh_queries_3d.cpp",
                 0x37d,(ulong)uVar5,(ulong)uVar13,"random_region_index","accessible_regions.size()",
                 "",false,false);
      local_4c = ZEXT812(0);
    }
  }
  else {
LAB_00105a7b:
    _err_print_error("map_iteration_get_random_point",
                     "modules/navigation/3d/nav_mesh_queries_3d.cpp",0x37b,
                     "Condition \"!E\" is true. Returning: Vector3()",0,0);
LAB_00105aa0:
    local_4c = ZEXT812(0);
  }
  RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::clear
            ((RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *)&local_68);
  if (local_68 != (void *)0x0) {
    Memory::free_static(local_68,false);
  }
LAB_00105960:
  Memory::free_static(pvVar8,false);
  auVar4 = local_4c;
LAB_00105708:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar16._12_4_ = 0;
    auVar16._0_12_ = auVar4;
    return auVar16;
  }
  local_4c = auVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* RBMap<float, unsigned int, Comparator<float>, DefaultAllocator>::_cleanup_tree(RBMap<float,
   unsigned int, Comparator<float>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::_cleanup_tree
          (RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* NavMeshQueries3D::NavMeshPathQueryTask3D::path_clear() */

void __thiscall NavMeshQueries3D::NavMeshPathQueryTask3D::path_clear(NavMeshPathQueryTask3D *this)

{
  if (*(int *)(this + 0x80) != 0) {
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0x90) != 0) {
    *(undefined4 *)(this + 0x90) = 0;
  }
  if (*(int *)(this + 0xa0) != 0) {
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int *)(this + 0xb0) != 0) {
    *(undefined4 *)(this + 0xb0) = 0;
  }
  return;
}



/* NavMeshQueries3D::NavMeshPathQueryTask3D::~NavMeshPathQueryTask3D() */

void __thiscall
NavMeshQueries3D::NavMeshPathQueryTask3D::~NavMeshPathQueryTask3D(NavMeshPathQueryTask3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  Callable::~Callable((Callable *)(this + 0xd0));
  if (*(long *)(this + 200) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 200);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    if (*(int *)(this + 0xb0) != 0) {
      *(undefined4 *)(this + 0xb0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xb8),false);
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    if (*(int *)(this + 0xa0) != 0) {
      *(undefined4 *)(this + 0xa0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xa8),false);
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (*(int *)(this + 0x90) != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    Memory::free_static(*(void **)(this + 0x98),false);
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    if (*(int *)(this + 0x80) != 0) {
      *(undefined4 *)(this + 0x80) = 0;
    }
    Memory::free_static(*(void **)(this + 0x88),false);
    return;
  }
  return;
}



/* RBMap<float, unsigned int, Comparator<float>, DefaultAllocator>::clear() */

void __thiscall
RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::clear
          (RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar5 != pEVar3) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* gd::Heap<gd::NavigationPoly*, gd::NavPolyTravelCostGreaterThan,
   gd::NavPolyHeapIndexer>::_shift_up(unsigned int) */

undefined8 __thiscall
gd::Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer>::_shift_up
          (Heap<gd::NavigationPoly*,gd::NavPolyTravelCostGreaterThan,gd::NavPolyHeapIndexer> *this,
          uint param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = *(uint *)this;
  uVar9 = (ulong)param_1;
  if (param_1 < uVar2) {
    lVar3 = *(long *)(this + 8);
    lVar4 = *(long *)(lVar3 + (ulong)param_1 * 8);
    uVar7 = param_1 - 1 >> 1;
    if (param_1 == 0) {
      return 0;
    }
    if (uVar7 < uVar2) {
      fVar1 = *(float *)(lVar4 + 0x3c);
      fVar13 = *(float *)(lVar4 + 0x38) + fVar1;
      uVar10 = param_1;
      do {
        lVar5 = *(long *)(lVar3 + (ulong)uVar7 * 8);
        fVar12 = *(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0x3c);
        if (NAN(fVar12) || NAN(fVar13)) {
LAB_00106ba8:
          if (param_1 == uVar10) {
            return 0;
          }
          uVar9 = (ulong)uVar10;
          uVar11 = uVar9;
          if (uVar10 < uVar2) {
LAB_00106bbc:
            *(long *)(lVar3 + uVar11 * 8) = lVar4;
            *(uint *)(lVar4 + 8) = uVar10;
            return 1;
          }
          break;
        }
        if (fVar12 == fVar13) {
          if (*(float *)(lVar5 + 0x3c) <= fVar1) goto LAB_00106ba8;
        }
        else if (fVar12 <= fVar13) goto LAB_00106ba8;
        if (uVar2 <= uVar10) {
          uVar9 = (ulong)uVar10;
          break;
        }
        *(long *)(lVar3 + (ulong)uVar10 * 8) = lVar5;
        *(uint *)(lVar5 + 8) = uVar10;
        uVar8 = uVar7 - 1 >> 1;
        uVar9 = (ulong)uVar8;
        uVar11 = (ulong)uVar7;
        uVar10 = uVar7;
        if (uVar7 == 0) goto LAB_00106bbc;
        uVar7 = uVar8;
      } while (uVar8 < uVar2);
    }
    else {
      uVar9 = (ulong)uVar7;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* RBMap<float, unsigned int, Comparator<float>, DefaultAllocator>::_insert_rb_fix(RBMap<float,
   unsigned int, Comparator<float>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::_insert_rb_fix
          (RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_00106d3d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00106e60;
LAB_00106ce6:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00106ce6;
LAB_00106e60:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00106d23:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00106f52:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00106f52;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00106f20;
LAB_00106db0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00106db0;
LAB_00106f20:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00106d23;
    }
LAB_00106d3d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<float, unsigned int, Comparator<float>, DefaultAllocator>::operator[](float const&) */

Element * __thiscall
RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator>::operator[]
          (RBMap<float,unsigned_int,Comparator<float>,DefaultAllocator> *this,float *param_1)

{
  float fVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  bool bVar10;
  
  pEVar5 = *(Element **)this;
  if (pEVar5 == (Element *)0x0) {
    pEVar5 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar5 + 0x20) = (undefined1  [16])0x0;
    *(undefined8 *)(pEVar5 + 0x30) = 0;
    pEVar4 = *(Element **)(this + 8);
    *(Element **)this = pEVar5;
    *(Element **)(pEVar5 + 0x18) = pEVar4;
    *(undefined4 *)pEVar5 = 1;
    *(Element **)(pEVar5 + 8) = pEVar4;
    *(Element **)(pEVar5 + 0x10) = pEVar4;
  }
  else {
    pEVar4 = *(Element **)(pEVar5 + 0x10);
  }
  pEVar7 = *(Element **)(this + 8);
  fVar1 = *param_1;
  pEVar2 = pEVar4;
  if (pEVar7 != pEVar4) {
    do {
      if (fVar1 < *(float *)(pEVar2 + 0x30)) {
        pEVar2 = *(Element **)(pEVar2 + 0x10);
      }
      else {
        if (fVar1 <= *(float *)(pEVar2 + 0x30)) goto LAB_001070ff;
        pEVar2 = *(Element **)(pEVar2 + 8);
      }
    } while (pEVar7 != pEVar2);
    do {
      pEVar5 = pEVar4;
      if (fVar1 < *(float *)(pEVar5 + 0x30)) {
        pEVar4 = *(Element **)(pEVar5 + 0x10);
      }
      else {
        if (fVar1 <= *(float *)(pEVar5 + 0x30)) {
          *(undefined4 *)(pEVar5 + 0x34) = 0;
          return pEVar5 + 0x34;
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
      }
    } while (pEVar7 != pEVar4);
  }
  pEVar2 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
  fVar1 = *param_1;
  *(Element **)(pEVar2 + 0x18) = pEVar5;
  *(undefined1 (*) [16])(pEVar2 + 0x20) = (undefined1  [16])0x0;
  *(float *)(pEVar2 + 0x30) = fVar1;
  pEVar4 = *(Element **)(this + 8);
  *(undefined4 *)pEVar2 = 0;
  *(undefined4 *)(pEVar2 + 0x34) = 0;
  *(Element **)(pEVar2 + 8) = pEVar4;
  *(Element **)(pEVar2 + 0x10) = pEVar4;
  if ((pEVar5 == *(Element **)this) ||
     (*param_1 <= *(float *)(pEVar5 + 0x30) && *(float *)(pEVar5 + 0x30) != *param_1)) {
    *(Element **)(pEVar5 + 0x10) = pEVar2;
    pEVar8 = *(Element **)(this + 8);
    pEVar6 = *(Element **)(pEVar2 + 0x10);
    pEVar9 = *(Element **)this;
    pEVar7 = pEVar4;
    if (pEVar4 == pEVar8) {
      pEVar4 = pEVar5;
      pEVar3 = pEVar5;
      if (pEVar2 == *(Element **)(pEVar5 + 8)) goto LAB_00107120;
      goto LAB_0010712d;
    }
LAB_001070a0:
    do {
      pEVar9 = pEVar7 + 0x10;
      pEVar4 = pEVar7;
      pEVar7 = *(Element **)pEVar9;
    } while (*(Element **)pEVar9 != pEVar8);
  }
  else {
    *(Element **)(pEVar5 + 8) = pEVar2;
    pEVar7 = *(Element **)(pEVar2 + 8);
    pEVar8 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar3 = pEVar5;
    pEVar6 = pEVar4;
    if (pEVar7 != pEVar8) goto LAB_001070a0;
LAB_00107120:
    do {
      pEVar4 = *(Element **)(pEVar3 + 0x18);
      bVar10 = *(Element **)(pEVar4 + 8) == pEVar3;
      pEVar3 = pEVar4;
    } while (bVar10);
LAB_0010712d:
    if (pEVar4 == pEVar9) {
      pEVar4 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar2 + 0x20) = pEVar4;
  if (pEVar6 == *(Element **)(this + 8)) {
    pEVar7 = pEVar2;
    pEVar8 = pEVar5;
    if (pEVar2 == *(Element **)(pEVar5 + 0x10)) {
      do {
        pEVar5 = *(Element **)(pEVar8 + 0x18);
        bVar10 = *(Element **)(pEVar5 + 0x10) == pEVar8;
        pEVar7 = pEVar8;
        pEVar8 = pEVar5;
      } while (bVar10);
    }
    if (pEVar7 != *(Element **)this) goto LAB_001070d4;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    if (pEVar4 == (Element *)0x0) goto LAB_001070ee;
LAB_001070dd:
    *(Element **)(pEVar4 + 0x28) = pEVar2;
    pEVar5 = *(Element **)(pEVar2 + 0x28);
    if (pEVar5 == (Element *)0x0) goto LAB_001070ee;
  }
  else {
    do {
      pEVar5 = pEVar6;
      pEVar6 = *(Element **)(pEVar5 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar5 + 8));
LAB_001070d4:
    *(Element **)(pEVar2 + 0x28) = pEVar5;
    if (pEVar4 != (Element *)0x0) goto LAB_001070dd;
  }
  *(Element **)(pEVar5 + 0x20) = pEVar2;
LAB_001070ee:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar2);
LAB_001070ff:
  return pEVar2 + 0x34;
}



/* WARNING: Control flow encountered bad instruction data */
/* NavMeshQueries3D::NavMeshPathQueryTask3D::~NavMeshPathQueryTask3D() */

void __thiscall
NavMeshQueries3D::NavMeshPathQueryTask3D::~NavMeshPathQueryTask3D(NavMeshPathQueryTask3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


