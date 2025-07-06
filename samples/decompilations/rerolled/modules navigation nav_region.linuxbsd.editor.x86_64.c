/* NavRegion::set_use_edge_connections(bool) */void NavRegion::set_use_edge_connections(NavRegion *this, bool param_1) {
   if (this[0xa1] != (NavRegion)param_1) {
      this[0xa1] = (NavRegion)param_1;
      this[0xa3] = (NavRegion)0x1;
   }

   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
      NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavRegion::set_navigation_layers(unsigned int) */void NavRegion::set_navigation_layers(NavRegion *this, uint param_1) {
   if (*(uint*)( this + 0x10 ) != param_1) {
      *(uint*)( this + 0x10 ) = param_1;
      this[0xa2] = (NavRegion)0x1;
      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
         NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* NavRegion::set_owner_id(ObjectID) */void NavRegion::set_owner_id(NavRegion *this, long param_2) {
   if (*(long*)( this + 0x20 ) != param_2) {
      *(long*)( this + 0x20 ) = param_2;
      this[0xa2] = (NavRegion)0x1;
      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
         NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* NavRegion::set_travel_cost(float) */void NavRegion::set_travel_cost(NavRegion *this, float param_1) {
   if (param_1 <= 0.0) {
      param_1 = 0.0;
   }

   if (param_1 != *(float*)( this + 0x18 )) {
      this[0xa2] = (NavRegion)0x1;
      *(float*)( this + 0x18 ) = param_1;
      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
         NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* NavRegion::set_enter_cost(float) */void NavRegion::set_enter_cost(NavRegion *this, float param_1) {
   if (param_1 <= 0.0) {
      param_1 = 0.0;
   }

   if (param_1 != *(float*)( this + 0x14 )) {
      this[0xa2] = (NavRegion)0x1;
      *(float*)( this + 0x14 ) = param_1;
      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
         NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* NavRegion::set_map(NavMap*) */void NavRegion::set_map(NavRegion *this, NavMap *param_1) {
   SelfList *pSVar1;
   pSVar1 = *(SelfList**)( this + 0x68 );
   if (pSVar1 == (SelfList*)param_1) {
      return;
   }

   if (pSVar1 != (SelfList*)0x0) {
      if (*(long*)( this + 0x130 ) != 0) {
         NavMap::remove_region_sync_dirty_request(pSVar1);
         pSVar1 = *(SelfList**)( this + 0x68 );
         if (pSVar1 == (SelfList*)0x0) goto LAB_001001a5;
      }

      NavMap::remove_region((NavRegion*)pSVar1);
   }

   LAB_001001a5:*(NavMap**)( this + 0x68 ) = param_1;
   this[0xa3] = (NavRegion)0x1;
   if (param_1 != (NavMap*)0x0) {
      NavMap::add_region((NavRegion*)param_1);
      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
         NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* NavRegion::set_enabled(bool) */void NavRegion::set_enabled(NavRegion *this, bool param_1) {
   if (this[0xa0] != (NavRegion)param_1) {
      this[0xa0] = (NavRegion)param_1;
      this[0xa3] = (NavRegion)0x1;
      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
         NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* NavRegion::set_transform(Transform3D) */void NavRegion::set_transform(long param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   char cVar5;
   SelfList *pSVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined8 in_stack_00000018;
   undefined8 in_stack_00000020;
   undefined8 in_stack_00000028;
   undefined8 in_stack_00000030;
   float local_1c;
   float fStack_18;
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar5 = Transform3D::operator ==((Transform3D*)( param_1 + 0x70 ), (Transform3D*)&stack0x00000008);
   if (cVar5 == '\0') {
      pSVar6 = *(SelfList**)( param_1 + 0x68 );
      *(undefined1*)( param_1 + 0xa3 ) = 1;
      *(undefined8*)( param_1 + 0x70 ) = in_stack_00000008;
      *(undefined8*)( param_1 + 0x78 ) = in_stack_00000010;
      *(undefined8*)( param_1 + 0x80 ) = in_stack_00000018;
      *(undefined8*)( param_1 + 0x88 ) = in_stack_00000020;
      *(undefined8*)( param_1 + 0x90 ) = in_stack_00000028;
      *(undefined8*)( param_1 + 0x98 ) = in_stack_00000030;
      if (pSVar6 != (SelfList*)0x0) {
         if (*(long*)( param_1 + 0x130 ) == 0) {
            NavMap::add_region_sync_dirty_request(pSVar6);
            pSVar6 = *(SelfList**)( param_1 + 0x68 );
            if (pSVar6 == (SelfList*)0x0) goto LAB_0010026e;
         }

         fVar8 = *(float*)( param_1 + 0x80 );
         fVar1 = *(float*)( param_1 + 0x74 );
         fVar2 = *(float*)( param_1 + 0x8c );
         local_1c = (float)*(undefined8*)( pSVar6 + 8 );
         fStack_18 = (float)( ( ulong ) * (undefined8*)( pSVar6 + 8 ) >> 0x20 );
         fVar3 = *(float*)( pSVar6 + 0x10 );
         fVar10 = local_1c * fVar8 - fVar1 * fStack_18;
         fVar7 = fVar1 * fVar3 - local_1c * fVar2;
         fVar9 = fVar2 * fStack_18 - fVar8 * fVar3;
         fVar8 = atan2f(SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar10 * fVar10), local_1c * fVar1 + fVar8 * fStack_18 + fVar2 * fVar3);
         if (( __LC2 <= fVar8 * __LC1 ) && ( set_transform(Transform3D) )) {
            _err_print_error("set_transform", "modules/navigation/nav_region.cpp", 0x5b, "Attempted to update a navigation region transform rotated 90 degrees or more away from the current navigation map UP orientation.", 0, 0);
            set_transform(Transform3D)::first_print =
            '\0';
         }

      }

   }

   LAB_0010026e:if (lVar4 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* NavRegion::get_closest_point_to_segment(Vector3 const&, Vector3 const&, bool) const */undefined1  [16] __thiscallNavRegion::get_closest_point_to_segment(NavRegion *this, Vector3 *param_1, Vector3 *param_2, bool param_3) {
   long lVar1;
   undefined1 auVar2[12];
   int iVar3;
   long in_FS_OFFSET;
   undefined1 auVar4[16];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t*)( this + 0x30 ));
   }
 while ( iVar3 == 0xb );
   if (iVar3 != 0x23) {
      auVar2 = NavMeshQueries3D::polygons_get_closest_point_to_segment((LocalVector*)( this + 0xa8 ), param_1, param_2, param_3);
      pthread_rwlock_unlock((pthread_rwlock_t*)( this + 0x30 ));
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         auVar4._12_4_ = 0;
         auVar4._0_12_ = auVar2;
         return auVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(0x23);
}
/* NavRegion::get_closest_point_info(Vector3 const&) const */NavRegion * __thiscall NavRegion::get_closest_point_info(NavRegion *this,Vector3 *param_1){
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t*)( param_1 + 0x30 ));
   }
 while ( iVar2 == 0xb );
   if (iVar2 != 0x23) {
      NavMeshQueries3D::polygons_get_closest_point_info((LocalVector*)this, param_1 + 0xa8);
      pthread_rwlock_unlock((pthread_rwlock_t*)( param_1 + 0x30 ));
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(0x23);
}
/* NavRegion::get_random_point(unsigned int, bool) const */undefined1  [16] __thiscallNavRegion::get_random_point(NavRegion *this, uint param_1, bool param_2) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   undefined1 auVar4[12];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t*)( this + 0x30 ));
   }
 while ( iVar2 == 0xb );
   if (iVar2 != 0x23) {
      if (this[0xa0] == (NavRegion)0x0) {
         auVar4 = ZEXT812(0);
      }
 else {
         auVar4 = NavMeshQueries3D::polygons_get_random_point((LocalVector*)( this + 0xa8 ), param_1, param_2);
      }

      pthread_rwlock_unlock((pthread_rwlock_t*)( this + 0x30 ));
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         auVar3._12_4_ = 0;
         auVar3._0_12_ = auVar4;
         return auVar3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(0x23);
}
/* NavRegion::request_sync() */void NavRegion::request_sync(NavRegion *this) {
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
      NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavRegion::cancel_sync_request() */void NavRegion::cancel_sync_request(NavRegion *this) {
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) != 0 )) {
      NavMap::remove_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavRegion::NavRegion() */void NavRegion::NavRegion(NavRegion *this) {
   undefined8 uVar1;
   uint uVar2;
   uVar2 = _LC7;
   uVar1 = _LC6;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x14 ) = uVar1;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xf8 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x10 ) = 1;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined***)this = &PTR_set_use_edge_connections_00102b70;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x90 ) = 0x3f800000;
   *(undefined8*)( this + 0x94 ) = 0;
   *(undefined4*)( this + 0x9c ) = 0;
   *(undefined4*)( this + 0xa0 ) = 0x1010101;
   *(undefined8*)( this + 0xa8 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 12*i + 176 ) ) = 0;
      *(undefined4*)( this + ( 12*i + 184 ) ) = 0;
   }

   *(undefined8*)( this + 0x108 ) = 0;
   *(undefined8*)( this + 0x118 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined1(*) [16])( this + 0x70 ) = ZEXT416(uVar2);
   *(undefined1(*) [16])( this + 0x80 ) = ZEXT416(uVar2);
   *(undefined1(*) [16])( this + 0x128 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x148 ) = 0;
   *(NavRegion**)( this + 0x138 ) = this;
   *(undefined4*)( this + 0x28 ) = 0;
   return;
}
/* NavRegion::get_iteration_update(NavRegionIteration&) */void NavRegion::get_iteration_update(NavRegion *this, NavRegionIteration *param_1) {
   undefined4 uVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   NavRegionIteration NVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   long lVar14;
   uint *puVar15;
   ulong uVar16;
   long lVar17;
   uint *puVar18;
   uint uVar19;
   ulong uVar20;
   long lVar21;
   uint uVar22;
   undefined4 *puVar23;
   undefined4 *puVar24;
   long in_FS_OFFSET;
   uVar4 = *(undefined8*)( this + 0x20 );
   uVar5 = *(undefined8*)( this + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_1 + 8 ) = *(undefined4*)( this + 0x10 );
   *(undefined8*)( param_1 + 0xc ) = *(undefined8*)( this + 0x14 );
   uVar1 = *(undefined4*)( this + 0x28 );
   uVar6 = *(undefined8*)( this + 0x70 );
   uVar7 = *(undefined8*)( this + 0x78 );
   *(undefined8*)( param_1 + 0x18 ) = uVar4;
   *(undefined8*)( param_1 + 0x20 ) = uVar5;
   *(undefined4*)( param_1 + 0x14 ) = uVar1;
   NVar8 = *(NavRegionIteration*)( this + 0xa0 );
   *(undefined8*)( param_1 + 0x2c ) = uVar6;
   *(undefined8*)( param_1 + 0x34 ) = uVar7;
   uVar4 = *(undefined8*)( this + 0x80 );
   uVar5 = *(undefined8*)( this + 0x88 );
   param_1[4] = NVar8;
   *(undefined8*)( param_1 + 0x3c ) = uVar4;
   *(undefined8*)( param_1 + 0x44 ) = uVar5;
   uVar4 = *(undefined8*)( this + 0x98 );
   *(undefined8*)( param_1 + 0x4c ) = *(undefined8*)( this + 0x90 );
   *(undefined8*)( param_1 + 0x54 ) = uVar4;
   if (*(code**)( *(long*)this + 8 ) == get_use_edge_connections) {
      NVar8 = *(NavRegionIteration*)( this + 0xa1 );
   }
 else {
      NVar8 = ( NavRegionIteration )(**(code**)( *(long*)this + 8 ))();
   }

   uVar4 = *(undefined8*)( this + 0xbc );
   uVar5 = *(undefined8*)( this + 0xc4 );
   param_1[0x28] = NVar8;
   *(undefined8*)( param_1 + 0x84 ) = *(undefined8*)( this + 0xcc );
   *(undefined8*)( param_1 + 0x74 ) = uVar4;
   *(undefined8*)( param_1 + 0x7c ) = uVar5;
   *(undefined4*)( param_1 + 0x70 ) = *(undefined4*)( this + 0xb8 );
   LocalVector<gd::Polygon,unsigned_int,false,false>::resize((LocalVector<gd::Polygon,unsigned_int,false,false>*)( param_1 + 0x60 ), 0);
   LocalVector<gd::Polygon,unsigned_int,false,false>::resize((LocalVector<gd::Polygon,unsigned_int,false,false>*)( param_1 + 0x60 ), *(uint*)( this + 0xa8 ));
   lVar21 = 0;
   uVar20 = 0;
   if (*(int*)( this + 0xa8 ) != 0) {
      do {
         uVar19 = *(uint*)( param_1 + 0x60 );
         puVar23 = (undefined4*)( *(long*)( this + 0xb0 ) + lVar21 );
         *(NavRegionIteration**)( puVar23 + 2 ) = param_1;
         if (uVar19 <= (uint)uVar20) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar20, (ulong)uVar19, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         uVar19 = puVar23[4];
         uVar16 = (ulong)uVar19;
         puVar24 = (undefined4*)( *(long*)( param_1 + 0x68 ) + lVar21 );
         uVar9 = puVar24[4];
         *puVar24 = *puVar23;
         *(NavRegionIteration**)( puVar24 + 2 ) = param_1;
         if (uVar19 < uVar9) {
            puVar24[4] = uVar19;
         }
 else if (uVar9 < uVar19) {
            uVar22 = uVar19 - 1;
            if ((uint)puVar24[5] < uVar19) {
               uVar9 = uVar22 >> 1 | uVar22;
               uVar9 = uVar9 | uVar9 >> 2;
               uVar9 = uVar9 | uVar9 >> 4;
               uVar9 = uVar9 | uVar9 >> 8;
               uVar9 = ( uVar9 | uVar9 >> 0x10 ) + 1;
               puVar24[5] = uVar9;
               lVar17 = Memory::realloc_static(*(void**)( puVar24 + 6 ), (ulong)uVar9 * 0x18, false);
               *(long*)( puVar24 + 6 ) = lVar17;
               if (lVar17 == 0) {
                  LAB_00100bd3:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               uVar9 = puVar24[4];
               if (uVar19 <= uVar9) {
                  puVar24[4] = uVar19;
                  uVar16 = (ulong)(uint)puVar23[4];
                  goto LAB_001008fc;
               }

            }

            lVar17 = *(long*)( puVar24 + 6 );
            puVar12 = (undefined8*)( lVar17 + (ulong)uVar9 * 0x18 );
            do {
               *puVar12 = 0;
               puVar13 = puVar12 + 3;
               *(undefined4*)( puVar12 + 1 ) = 0;
               puVar12[2] = 0;
               puVar12 = puVar13;
            }
 while ( puVar13 != (undefined8*)( lVar17 + 0x18 + ( ( ulong )(uVar22 - uVar9) + (ulong)uVar9 ) * 0x18 ) );
            puVar24[4] = uVar19;
            uVar16 = (ulong)(uint)puVar23[4];
         }

         LAB_001008fc:if ((int)uVar16 != 0) {
            lVar17 = *(long*)( puVar23 + 6 );
            lVar14 = *(long*)( puVar24 + 6 );
            lVar10 = 0;
            do {
               puVar12 = (undefined8*)( lVar17 + lVar10 );
               uVar4 = puVar12[1];
               puVar13 = (undefined8*)( lVar14 + lVar10 );
               *puVar13 = *puVar12;
               puVar13[1] = uVar4;
               *(undefined8*)( lVar14 + 0x10 + lVar10 ) = *(undefined8*)( lVar17 + 0x10 + lVar10 );
               lVar10 = lVar10 + 0x18;
            }
 while ( uVar16 * 0x18 != lVar10 );
         }

         lVar17 = 0;
         LocalVector<gd::Edge,unsigned_int,false,false>::resize((LocalVector<gd::Edge,unsigned_int,false,false>*)( puVar24 + 8 ), puVar23[8]);
         if (puVar23[8] != 0) {
            do {
               puVar15 = (uint*)( *(long*)( puVar23 + 10 ) + lVar17 * 0x10 );
               puVar18 = (uint*)( lVar17 * 0x10 + *(long*)( puVar24 + 10 ) );
               uVar19 = *puVar15;
               uVar16 = (ulong)uVar19;
               uVar9 = *puVar18;
               if (uVar19 < uVar9) {
                  *puVar18 = uVar19;
               }
 else if (uVar9 < uVar19) {
                  uVar22 = uVar19 - 1;
                  if (puVar18[1] < uVar19) {
                     uVar9 = uVar22 >> 1 | uVar22;
                     uVar9 = uVar9 | uVar9 >> 2;
                     uVar9 = uVar9 | uVar9 >> 4;
                     uVar9 = uVar9 | uVar9 >> 8;
                     uVar9 = ( uVar9 | uVar9 >> 0x10 ) + 1;
                     puVar18[1] = uVar9;
                     lVar14 = Memory::realloc_static(*(void**)( puVar18 + 2 ), (ulong)uVar9 * 0x28, false);
                     *(long*)( puVar18 + 2 ) = lVar14;
                     if (lVar14 == 0) goto LAB_00100bd3;
                     uVar9 = *puVar18;
                     if (uVar19 <= uVar9) {
                        *puVar18 = uVar19;
                        uVar16 = ( ulong ) * puVar15;
                        goto LAB_0010098b;
                     }

                  }

                  lVar14 = *(long*)( puVar18 + 2 );
                  puVar12 = (undefined8*)( lVar14 + (ulong)uVar9 * 0x28 );
                  do {
                     *puVar12 = 0;
                     puVar13 = puVar12 + 5;
                     *(undefined4*)( puVar12 + 1 ) = 0xffffffff;
                     *(undefined8*)( (long)puVar12 + 0xc ) = 0;
                     *(undefined4*)( (long)puVar12 + 0x14 ) = 0;
                     puVar12[3] = 0;
                     *(undefined4*)( puVar12 + 4 ) = 0;
                     puVar12 = puVar13;
                  }
 while ( puVar13 != (undefined8*)( lVar14 + 0x28 + ( ( ulong )(uVar22 - uVar9) + (ulong)uVar9 ) * 0x28 ) );
                  *puVar18 = uVar19;
                  uVar16 = ( ulong ) * puVar15;
               }

               LAB_0010098b:if ((int)uVar16 != 0) {
                  lVar14 = *(long*)( puVar15 + 2 );
                  lVar10 = *(long*)( puVar18 + 2 );
                  lVar11 = 0;
                  do {
                     uVar4 = ( (undefined8*)( lVar14 + lVar11 ) )[1];
                     *(undefined8*)( lVar10 + lVar11 ) = *(undefined8*)( lVar14 + lVar11 );
                     ( (undefined8*)( lVar10 + lVar11 ) )[1] = uVar4;
                     puVar12 = (undefined8*)( lVar14 + 0x10 + lVar11 );
                     uVar4 = puVar12[1];
                     puVar13 = (undefined8*)( lVar10 + 0x10 + lVar11 );
                     *puVar13 = *puVar12;
                     puVar13[1] = uVar4;
                     *(undefined4*)( lVar10 + 0x20 + lVar11 ) = *(undefined4*)( lVar14 + 0x20 + lVar11 );
                     lVar11 = lVar11 + 0x28;
                  }
 while ( lVar11 != uVar16 * 0x28 );
               }

               lVar17 = lVar17 + 1;
            }
 while ( (uint)lVar17 < (uint)puVar23[8] );
         }

         uVar19 = (uint)uVar20 + 1;
         uVar20 = (ulong)uVar19;
         lVar21 = lVar21 + 0x38;
         puVar24[0xc] = puVar23[0xc];
      }
 while ( uVar19 < *(uint*)( this + 0xa8 ) );
   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavRegion::update_polygons() [clone .part.0] */void NavRegion::update_polygons(NavRegion *this) {
   long *plVar1;
   float *pfVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   uint uVar10;
   int iVar11;
   long lVar12;
   LocalVector<gd::Edge,unsigned_int,false,false> *pLVar13;
   int *piVar14;
   ulong uVar15;
   code *pcVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   bool bVar21;
   int iVar22;
   uint uVar23;
   long lVar24;
   Vector3 *pVVar25;
   undefined8 uVar26;
   undefined8 *puVar27;
   undefined8 *puVar28;
   long lVar29;
   LocalVector<gd::Edge,unsigned_int,false,false> *this_00;
   LocalVector<gd::Edge,unsigned_int,false,false> *pLVar30;
   int *piVar31;
   int *piVar32;
   uint uVar33;
   long lVar34;
   long lVar35;
   uint uVar36;
   ulong uVar37;
   long in_FS_OFFSET;
   bool bVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   undefined8 uVar44;
   float local_b8;
   float fStack_b4;
   float fStack_b0;
   float fStack_ac;
   undefined8 local_a0;
   float local_78;
   undefined8 local_68;
   float fStack_60;
   float fStack_5c;
   float fStack_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LocalVector<gd::Polygon,unsigned_int,false,false>::resize((LocalVector<gd::Polygon,unsigned_int,false,false>*)( this + 0xa8 ), 0);
   fStack_5c = 0.0;
   fStack_58 = 0.0;
   local_68 = 0;
   fStack_60 = 0.0;
   fStack_54 = 0.0;
   *(undefined4*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xcc ) = 0;
   this[0xa3] = (NavRegion)0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 188 ) ) = 0;
   }

   if (*(long*)( this + 0x68 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      do {
         iVar22 = pthread_rwlock_rdlock((pthread_rwlock_t*)( this + 0xd8 ));
      }
 while ( iVar22 == 0xb );
      if (iVar22 == 0x23) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      lVar12 = *(long*)( this + 0x118 );
      if (( ( lVar12 == 0 ) || ( *(long*)( this + 0x128 ) == 0 ) ) || ( iVar22 = iVar22 == 0 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00100e97;
      }
 else {
         LocalVector<gd::Polygon,unsigned_int,false,false>::resize((LocalVector<gd::Polygon,unsigned_int,false,false>*)( this + 0xa8 ), *(uint*)( *(long*)( this + 0x128 ) + -8 ));
         uVar10 = *(uint*)( this + 0xa8 );
         pLVar13 = *(LocalVector<gd::Edge,unsigned_int,false,false>**)( this + 0xb0 );
         if (pLVar13 == pLVar13 + (ulong)uVar10 * 0x38) {
            local_a0 = 0;
            uVar44 = 0;
            uVar26 = 0;
            local_78 = 0.0;
         }
 else {
            bVar21 = true;
            lVar35 = 0;
            local_78 = 0.0;
            uVar44 = 0;
            uVar26 = 0;
            local_a0 = 0;
            this_00 = pLVar13 + 0x20;
            do {
               lVar29 = *(long*)( this + 0x128 );
               *(undefined4*)( this_00 + 0x10 ) = 0;
               if (lVar29 == 0) {
                  lVar34 = 0;
                  LAB_00101592:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar35, lVar34, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar16 = (code*)invalidInstructionException();
                  ( *pcVar16 )();
               }

               lVar34 = *(long*)( lVar29 + -8 );
               if (lVar34 <= lVar35) goto LAB_00101592;
               lVar29 = lVar35 * 0x10 + lVar29;
               lVar34 = *(long*)( lVar29 + 8 );
               plVar1 = (long*)( lVar34 + -0x10 );
               if (lVar34 != 0) {
                  do {
                     lVar34 = *plVar1;
                     if (lVar34 == 0) goto LAB_00100e61;
                     LOCK();
                     lVar24 = *plVar1;
                     bVar38 = lVar34 == lVar24;
                     if (bVar38) {
                        *plVar1 = lVar34 + 1;
                        lVar24 = lVar34;
                     }

                     UNLOCK();
                  }
 while ( !bVar38 );
                  if (( lVar24 != -1 ) && ( piVar14 = *(int**)( lVar29 + 8 ) ),piVar14 != (int*)0x0) {
                     uVar15 = *(ulong*)( piVar14 + -2 );
                     uVar33 = (uint)uVar15;
                     if (2 < (int)uVar33) {
                        uVar23 = *(uint*)( this_00 + -0x10 );
                        if (uVar33 < uVar23) {
                           *(uint*)( this_00 + -0x10 ) = uVar33;
                           LocalVector<gd::Edge,unsigned_int,false,false>::resize(this_00, uVar33);
                        }
 else {
                           if (uVar23 < uVar33) {
                              uVar36 = uVar33 - 1;
                              if (*(uint*)( this_00 + -0xc ) < uVar33) {
                                 uVar23 = uVar36 >> 1 | uVar36;
                                 uVar23 = uVar23 | uVar23 >> 2;
                                 uVar23 = uVar23 | uVar23 >> 4;
                                 uVar23 = uVar23 | uVar23 >> 8;
                                 uVar23 = ( uVar23 | uVar23 >> 0x10 ) + 1;
                                 *(uint*)( this_00 + -0xc ) = uVar23;
                                 uVar37 = (ulong)uVar23 * 0x18;
                                 lVar29 = Memory::realloc_static(*(void**)( this_00 + -8 ), uVar37, false);
                                 *(long*)( this_00 + -8 ) = lVar29;
                                 if (lVar29 == 0) {
                                    _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, uVar37);
                                    _err_flush_stdout();
                                    /* WARNING: Does not return */
                                    pcVar16 = (code*)invalidInstructionException();
                                    ( *pcVar16 )();
                                 }

                                 uVar23 = *(uint*)( this_00 + -0x10 );
                                 if (uVar23 < uVar33) goto LAB_001014b3;
                              }
 else {
                                 LAB_001014b3:lVar29 = *(long*)( this_00 + -8 );
                                 puVar27 = (undefined8*)( lVar29 + (ulong)uVar23 * 0x18 );
                                 do {
                                    *puVar27 = 0;
                                    puVar28 = puVar27 + 3;
                                    *(undefined4*)( puVar27 + 1 ) = 0;
                                    puVar27[2] = 0;
                                    puVar27 = puVar28;
                                 }
 while ( (undefined8*)( lVar29 + 0x18 + ( ( ulong )(uVar36 - uVar23) + (ulong)uVar23 ) * 0x18 ) != puVar28 );
                              }

                              *(uint*)( this_00 + -0x10 ) = uVar33;
                           }

                           LocalVector<gd::Edge,unsigned_int,false,false>::resize(this_00, uVar33);
                        }

                        fVar40 = 0.0;
                        piVar31 = piVar14 + 1;
                        do {
                           fVar17 = *(float*)( this + 0x70 );
                           fVar18 = *(float*)( this + 0x74 );
                           fVar19 = *(float*)( this + 0x7c );
                           piVar32 = piVar31 + 1;
                           fVar39 = *(float*)( this + 0x90 );
                           fVar20 = *(float*)( this + 0x80 );
                           fStack_50 = *(float*)( this + 0x94 );
                           fStack_4c = *(float*)( this + 0x98 );
                           pfVar2 = (float*)( lVar12 + (long)piVar31[1] * 0xc );
                           fVar42 = *pfVar2;
                           fVar43 = pfVar2[1];
                           fVar41 = pfVar2[2];
                           pfVar2 = (float*)( lVar12 + (long)*piVar31 * 0xc );
                           fVar3 = *pfVar2;
                           fVar4 = pfVar2[2];
                           fVar5 = pfVar2[1];
                           local_48 = *(float*)( this + 0x88 ) * fVar42 + *(float*)( this + 0x8c ) * fVar43 + fVar39 * fVar41 + *(float*)( this + 0x9c );
                           pfVar2 = (float*)( lVar12 + (long)*piVar14 * 0xc );
                           fVar6 = pfVar2[1];
                           fVar7 = *pfVar2;
                           fVar8 = pfVar2[2];
                           fVar9 = *(float*)( this + 0x78 );
                           fStack_60 = fVar39 * fVar8 + fVar7 * *(float*)( this + 0x88 ) + fVar6 * *(float*)( this + 0x8c ) + *(float*)( this + 0x9c );
                           fStack_5c = fVar9 * fVar4 + fVar3 * fVar17 + fVar5 * fVar18 + fStack_50;
                           local_68 = CONCAT44(*(float*)( this + 0x84 ) * fVar8 + fVar7 * fVar19 + fVar6 * fVar20 + fStack_4c, fVar9 * fVar8 + fVar7 * fVar17 + fVar6 * fVar18 + fStack_50);
                           fStack_58 = fStack_4c + fVar19 * fVar3 + fVar5 * fVar20 + fVar4 * *(float*)( this + 0x84 );
                           fStack_54 = *(float*)( this + 0x9c ) + *(float*)( this + 0x88 ) * fVar3 + fVar5 * *(float*)( this + 0x8c ) + fVar4 * fVar39;
                           fStack_50 = fStack_50 + fVar17 * fVar42 + fVar43 * fVar18 + fVar41 * fVar9;
                           fStack_4c = fStack_4c + fVar19 * fVar42 + fVar43 * fVar20 + fVar41 * *(float*)( this + 0x84 );
                           fVar39 = (float)Face3::get_area();
                           fVar40 = fVar39 + fVar40;
                           piVar31 = piVar32;
                        }
 while ( piVar14 + ( ulong )(uVar33 - 3) + 2 != piVar32 );
                        local_b8 = (float)uVar44;
                        fStack_b4 = (float)( (ulong)uVar44 >> 0x20 );
                        fStack_b0 = (float)uVar26;
                        fStack_ac = (float)( (ulong)uVar26 >> 0x20 );
                        uVar37 = 0;
                        *(float*)( this_00 + 0x10 ) = fVar40;
                        do {
                           iVar11 = piVar14[uVar37];
                           if (iVar22 <= iVar11 || iVar11 < 0) {
                              uVar44 = CONCAT44(fStack_b4, local_b8 + fVar40);
                              uVar26 = CONCAT44(fStack_ac, fStack_b0);
                              _err_print_error("update_polygons", "modules/navigation/nav_region.cpp", 0x11b, "Condition \"!valid\" is true. Breaking.", "The navigation mesh set in this region is not valid!", 0, 0);
                              plVar1 = (long*)( piVar14 + -4 );
                              LOCK();
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 Memory::free_static(plVar1, false);
                              }

                              goto LAB_00101648;
                           }

                           puVar27 = (undefined8*)( lVar12 + (long)iVar11 * 0xc );
                           uVar26 = *puVar27;
                           fVar39 = *(float*)( puVar27 + 1 );
                           uVar33 = *(uint*)( this_00 + -0x10 );
                           fVar42 = (float)uVar26;
                           fVar43 = (float)( (ulong)uVar26 >> 0x20 );
                           fStack_60 = *(float*)( this + 0x88 ) * fVar42 + *(float*)( this + 0x8c ) * fVar43 + *(float*)( this + 0x90 ) * fVar39 + *(float*)( this + 0x9c );
                           local_68 = CONCAT44(*(float*)( this + 0x80 ) * fVar43 + (float)( ( ulong ) * (undefined8*)( this + 0x78 ) >> 0x20 ) * fVar42 + (float)( ( ulong ) * (undefined8*)( this + 0x80 ) >> 0x20 ) * fVar39 + (float)( ( ulong ) * (undefined8*)( this + 0x94 ) >> 0x20 ), *(float*)( this + 0x74 ) * fVar43 + (float)*(undefined8*)( this + 0x70 ) * fVar42 + (float)*(undefined8*)( this + 0x78 ) * fVar39 + (float)*(undefined8*)( this + 0x94 ));
                           if (uVar33 <= (uint)uVar37) {
                              LAB_00101458:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar37, (ulong)uVar33, "p_index", "count", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar16 = (code*)invalidInstructionException();
                              ( *pcVar16 )();
                           }

                           lVar29 = *(long*)( this_00 + -8 );
                           *(undefined8*)( lVar29 + uVar37 * 0x18 ) = local_68;
                           *(float*)( lVar29 + 8 + uVar37 * 0x18 ) = fStack_60;
                           pVVar25 = (Vector3*)NavMap::get_merge_rasterizer_cell_size();
                           uVar26 = NavMapBuilder3D::get_point_key((Vector3*)&local_68, pVVar25);
                           uVar33 = *(uint*)( this_00 + -0x10 );
                           if (uVar33 <= (uint)uVar37) goto LAB_00101458;
                           *(undefined8*)( *(long*)( this_00 + -8 ) + 0x10 + uVar37 * 0x18 ) = uVar26;
                           if (bVar21) {
                              fStack_b0 = local_68._4_4_;
                              fStack_ac = fStack_60;
                              fVar42 = (float)local_68;
                           }
 else {
                              fVar39 = (float)( (ulong)local_a0 >> 0x20 );
                              if (( ( (float)local_a0 < 0.0 ) || ( fVar39 < 0.0 ) ) || ( local_78 < 0.0 )) {
                                 _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.");
                              }

                              fVar43 = (float)local_a0 + fStack_b4;
                              fVar39 = fVar39 + fStack_b0;
                              fVar42 = (float)local_68;
                              if (fStack_b4 <= (float)local_68) {
                                 fVar42 = fStack_b4;
                              }

                              fVar41 = (float)local_68;
                              if ((float)local_68 <= fVar43) {
                                 fVar41 = fVar43;
                              }

                              fVar43 = local_68._4_4_;
                              if (local_68._4_4_ <= fVar39) {
                                 fVar43 = fVar39;
                              }

                              fVar39 = local_68._4_4_;
                              if (fStack_b0 <= local_68._4_4_) {
                                 fVar39 = fStack_b0;
                              }

                              fStack_b0 = fVar39;
                              fVar39 = fStack_60;
                              if (fStack_60 <= local_78 + fStack_ac) {
                                 fVar39 = local_78 + fStack_ac;
                              }

                              fVar3 = fStack_60;
                              if (fStack_ac <= fStack_60) {
                                 fVar3 = fStack_ac;
                              }

                              fStack_ac = fVar3;
                              local_a0 = CONCAT44(fVar43 - fStack_b0, fVar41 - fVar42);
                              local_78 = fVar39 - fStack_ac;
                           }

                           uVar37 = uVar37 + 1;
                           bVar21 = false;
                           fStack_b4 = fVar42;
                        }
 while ( ( uVar15 & 0xffffffff ) != uVar37 );
                        bVar21 = false;
                        uVar44 = CONCAT44(fVar42, local_b8 + fVar40);
                        uVar26 = CONCAT44(fStack_ac, fStack_b0);
                     }

                     plVar1 = (long*)( piVar14 + -4 );
                     LOCK();
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(plVar1, false);
                     }

                  }

               }

               LAB_00100e61:lVar35 = lVar35 + 1;
               pLVar30 = this_00 + 0x18;
               this_00 = this_00 + 0x38;
            }
 while ( pLVar13 + (ulong)uVar10 * 0x38 != pLVar30 );
         }

         LAB_00101648:*(undefined8*)( this + 0xb8 ) = uVar44;
         *(undefined8*)( this + 0xc0 ) = uVar26;
         *(undefined8*)( this + 200 ) = local_a0;
         *(float*)( this + 0xd0 ) = local_78;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_00100e97:pthread_rwlock_unlock((pthread_rwlock_t*)( this + 0xd8 ));
            return;
         }

      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavRegion::update_polygons() */void NavRegion::update_polygons(NavRegion *this) {
   if (this[0xa3] == (NavRegion)0x0) {
      return;
   }

   update_polygons(this);
   return;
}
/* NavRegion::sync() */NavRegion NavRegion::sync(NavRegion *this) {
   NavRegion NVar1;
   int iVar2;
   iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t*)( this + 0x30 ));
   if (iVar2 != 0x23) {
      NVar1 = this[0xa2];
      this[0xa2] = (NavRegion)0x0;
      if (NVar1 == (NavRegion)0x0) {
         NVar1 = this[0xa3];
      }

      if (this[0xa3] != (NavRegion)0x0) {
         update_polygons(this);
      }

      pthread_rwlock_unlock((pthread_rwlock_t*)( this + 0x30 ));
      return NVar1;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(0x23);
}
/* NavRegion::~NavRegion() */void NavRegion::~NavRegion(NavRegion *this) {
   long lVar1;
   long lVar2;
   long *plVar3;
   *(undefined***)this = &PTR_set_use_edge_connections_00102b70;
   plVar3 = *(long**)( this + 0x130 );
   if (*(SelfList**)( this + 0x68 ) != (SelfList*)0x0) {
      if (plVar3 == (long*)0x0) goto LAB_00101870;
      NavMap::remove_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      plVar3 = *(long**)( this + 0x130 );
   }

   if (plVar3 != (long*)0x0) {
      lVar1 = *(long*)( this + 0x140 );
      if (lVar1 != 0) {
         *(undefined8*)( lVar1 + 0x18 ) = *(undefined8*)( this + 0x148 );
      }

      lVar2 = *(long*)( this + 0x148 );
      if (lVar2 != 0) {
         *(long*)( lVar2 + 0x10 ) = lVar1;
      }

      if (this + 0x130 == (NavRegion*)*plVar3) {
         *plVar3 = *(long*)( this + 0x140 );
      }

      if (this + 0x130 == (NavRegion*)plVar3[1]) {
         plVar3[1] = lVar2;
      }

   }

   LAB_00101870:CowData<Vector<int>>::_unref((CowData<Vector<int>>*)( this + 0x128 ));
   if (*(long*)( this + 0x118 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0x118 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar1 = *(long*)( this + 0x118 );
         *(undefined8*)( this + 0x118 ) = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0xb0 ) != 0) {
      LocalVector<gd::Polygon,unsigned_int,false,false>::resize((LocalVector<gd::Polygon,unsigned_int,false,false>*)( this + 0xa8 ), 0);
      if (*(void**)( this + 0xb0 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0xb0 ), false);
         return;
      }

   }

   return;
}
/* NavRegion::~NavRegion() */void NavRegion::~NavRegion(NavRegion *this) {
   ~NavRegion(this)
   ;;
   operator_delete(this, 0x150);
   return;
}
/* NavRegion::set_navigation_mesh(Ref<NavigationMesh>) */void NavRegion::set_navigation_mesh(NavRegion *this, long *param_2) {
   long *plVar1;
   double dVar2;
   char *pcVar3;
   int iVar4;
   long lVar5;
   long in_FS_OFFSET;
   float fVar6;
   double dVar7;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x68 ) != 0 ) && ( *param_2 != 0 )) {
      fVar6 = (float)NavigationMesh::get_cell_size();
      lVar5 = *(long*)( this + 0x68 );
      if (fVar6 != *(float*)( lVar5 + 0x14 )) {
         dVar2 = (double)*(float*)( lVar5 + 0x14 );
         dVar7 = _LC35;
         if (_LC35 <= ABS(dVar2) * _LC35) {
            dVar7 = ABS(dVar2) * _LC35;
         }

         if (( dVar7 <= ABS(dVar2 - (double)fVar6) ) && ( set_navigation_mesh(Ref<NavigationMesh>) )) {
            fVar6 = (float)NavigationMesh::get_cell_size();
            local_48 = "Attempted to update a navigation region with a navigation mesh that uses a `cell_size` of %s while assigned to a navigation map set to a `cell_size` of %s. The cell size for navigation maps can be changed by using the NavigationServer map_set_cell_size() function. The cell size for default navigation maps can also be changed in the ProjectSettings.";
            local_50 = 0;
            local_40 = 0x15e;
            String::parse_latin1((StrRange*)&local_50);
            vformat<double,double>((String_conflict*)&local_48, (double)fVar6, dVar2);
            _err_print_error("set_navigation_mesh", "modules/navigation/nav_region.cpp", 99, (String_conflict*)&local_48, 0, 0);
            pcVar3 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar5 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar1 = (long*)( local_50 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            set_navigation_mesh(Ref<NavigationMesh>)::first_print =
            '\0';
            lVar5 = *(long*)( this + 0x68 );
         }

         if (lVar5 == 0) goto LAB_00101a40;
      }

      if (*param_2 != 0) {
         fVar6 = (float)NavigationMesh::get_cell_height();
         if (fVar6 != *(float*)( *(long*)( this + 0x68 ) + 0x18 )) {
            dVar2 = (double)*(float*)( *(long*)( this + 0x68 ) + 0x18 );
            dVar7 = _LC35;
            if (_LC35 <= ABS(dVar2) * _LC35) {
               dVar7 = ABS(dVar2) * _LC35;
            }

            if (( dVar7 <= ABS(dVar2 - (double)fVar6) ) && ( set_navigation_mesh(Ref<NavigationMesh>) )) {
               fVar6 = (float)NavigationMesh::get_cell_height();
               local_48 = "Attempted to update a navigation region with a navigation mesh that uses a `cell_height` of %s while assigned to a navigation map set to a `cell_height` of %s. The cell height for navigation maps can be changed by using the NavigationServer map_set_cell_height() function. The cell height for default navigation maps can also be changed in the ProjectSettings.";
               local_50 = 0;
               local_40 = 0x168;
               String::parse_latin1((StrRange*)&local_50);
               vformat<double,double>((String_conflict*)&local_48, (double)fVar6, dVar2);
               _err_print_error("set_navigation_mesh", "modules/navigation/nav_region.cpp", 0x67, (String_conflict*)&local_48, 0, 0);
               pcVar3 = local_48;
               if (local_48 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_48 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_48 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }

               }

               lVar5 = local_50;
               if (local_50 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_50 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_50 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               set_navigation_mesh(Ref<NavigationMesh>)::first_print =
               '\0';
            }

         }

      }

   }

   LAB_00101a40:iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t*)( this + 0xd8 ));
   if (iVar4 == 0x23) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
   }

   lVar5 = *(long*)( this + 0x118 );
   if (( lVar5 != 0 ) && ( *(long*)( lVar5 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0x118 );
         *(undefined8*)( this + 0x118 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }
 else {
         *(undefined8*)( this + 0x118 ) = 0;
      }

   }

   if (( *(long*)( this + 0x128 ) != 0 ) && ( *(long*)( *(long*)( this + 0x128 ) + -8 ) != 0 )) {
      CowData<Vector<int>>::_unref((CowData<Vector<int>>*)( this + 0x128 ));
   }

   if ((Vector*)*param_2 != (Vector*)0x0) {
      NavigationMesh::get_data((Vector*)*param_2, (Vector*)( this + 0x110 ));
   }

   this[0xa3] = (NavRegion)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x130 ) == 0 )) {
      NavMap::add_region_sync_dirty_request(*(SelfList**)( this + 0x68 ));
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   pthread_rwlock_unlock((pthread_rwlock_t*)( this + 0xd8 ));
   return;
}
/* NavRegion::get_use_edge_connections() const */NavRegion NavRegion::get_use_edge_connections(NavRegion *this) {
   return this[0xa1];
}
/* WARNING: Removing unreachable block (ram,0x00102400) *//* WARNING: Removing unreachable block (ram,0x00102530) *//* WARNING: Removing unreachable block (ram,0x001026a9) *//* WARNING: Removing unreachable block (ram,0x0010253c) *//* WARNING: Removing unreachable block (ram,0x00102546) *//* WARNING: Removing unreachable block (ram,0x0010268b) *//* WARNING: Removing unreachable block (ram,0x00102552) *//* WARNING: Removing unreachable block (ram,0x0010255c) *//* WARNING: Removing unreachable block (ram,0x0010266d) *//* WARNING: Removing unreachable block (ram,0x00102568) *//* WARNING: Removing unreachable block (ram,0x00102572) *//* WARNING: Removing unreachable block (ram,0x0010264f) *//* WARNING: Removing unreachable block (ram,0x0010257e) *//* WARNING: Removing unreachable block (ram,0x00102588) *//* WARNING: Removing unreachable block (ram,0x00102631) *//* WARNING: Removing unreachable block (ram,0x00102594) *//* WARNING: Removing unreachable block (ram,0x0010259e) *//* WARNING: Removing unreachable block (ram,0x00102613) *//* WARNING: Removing unreachable block (ram,0x001025a6) *//* WARNING: Removing unreachable block (ram,0x001025b0) *//* WARNING: Removing unreachable block (ram,0x001025f8) *//* WARNING: Removing unreachable block (ram,0x001025b8) *//* WARNING: Removing unreachable block (ram,0x001025ce) *//* WARNING: Removing unreachable block (ram,0x001025da) *//* String vformat<double, double>(String const&, double const, double const) */String_conflict *vformat<double,double>(String_conflict *param_1, double param_2, double param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   bool *in_RSI;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_2);
   Variant::Variant(local_70, param_3);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, in_RSI);
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* LocalVector<gd::Edge, unsigned int, false, false>::resize(unsigned int) */void LocalVector<gd::Edge,unsigned_int,false,false>::resize(LocalVector<gd::Edge,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   int *piVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   uint uVar5;
   long lVar6;
   uint uVar7;
   uVar7 = *(uint*)this;
   if (param_1 < uVar7) {
      lVar6 = (ulong)param_1 << 4;
      uVar7 = param_1;
      do {
         piVar2 = (int*)( *(long*)( this + 8 ) + lVar6 );
         if (*(void**)( piVar2 + 2 ) != (void*)0x0) {
            if (*piVar2 != 0) {
               *piVar2 = 0;
            }

            Memory::free_static(*(void**)( piVar2 + 2 ), false);
         }

         uVar7 = uVar7 + 1;
         lVar6 = lVar6 + 0x10;
      }
 while ( uVar7 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar7) {
         return;
      }

      uVar5 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar7 = uVar5 >> 1 | uVar5;
         uVar7 = uVar7 >> 2 | uVar7;
         uVar7 = uVar7 >> 4 | uVar7;
         uVar7 = uVar7 >> 8 | uVar7;
         uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar7;
         lVar6 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar7 << 4, false);
         *(long*)( this + 8 ) = lVar6;
         if (lVar6 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar7 = *(uint*)this;
         if (param_1 <= uVar7) goto LAB_00102789;
      }

      lVar6 = *(long*)( this + 8 );
      puVar3 = (undefined8*)( (ulong)uVar7 * 0x10 + lVar6 );
      do {
         *puVar3 = 0;
         puVar4 = puVar3 + 2;
         puVar3[1] = 0;
         puVar3 = puVar4;
      }
 while ( puVar4 != (undefined8*)( lVar6 + 0x10 + ( ( ulong )(uVar5 - uVar7) + (ulong)uVar7 ) * 0x10 ) );
   }

   LAB_00102789:*(uint*)this = param_1;
   return;
}
/* LocalVector<gd::Polygon, unsigned int, false, false>::resize(unsigned int) */void LocalVector<gd::Polygon,unsigned_int,false,false>::resize(LocalVector<gd::Polygon,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uVar7 = *(uint*)this;
   if (param_1 < uVar7) {
      lVar6 = (ulong)param_1 * 0x38;
      uVar7 = param_1;
      do {
         lVar5 = *(long*)( this + 8 ) + lVar6;
         if (*(long*)( lVar5 + 0x28 ) != 0) {
            LocalVector<gd::Edge,unsigned_int,false,false>::resize((LocalVector<gd::Edge,unsigned_int,false,false>*)( lVar5 + 0x20 ), 0);
            if (*(void**)( lVar5 + 0x28 ) != (void*)0x0) {
               Memory::free_static(*(void**)( lVar5 + 0x28 ), false);
            }

         }

         if (*(void**)( lVar5 + 0x18 ) != (void*)0x0) {
            if (*(int*)( lVar5 + 0x10 ) != 0) {
               *(undefined4*)( lVar5 + 0x10 ) = 0;
            }

            Memory::free_static(*(void**)( lVar5 + 0x18 ), false);
         }

         uVar7 = uVar7 + 1;
         lVar6 = lVar6 + 0x38;
      }
 while ( uVar7 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar7) {
         return;
      }

      uVar4 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar7 = uVar4 >> 1 | uVar4;
         uVar7 = uVar7 >> 2 | uVar7;
         uVar7 = uVar7 >> 4 | uVar7;
         uVar7 = uVar7 >> 8 | uVar7;
         uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar7;
         lVar6 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar7 * 0x38, false);
         *(long*)( this + 8 ) = lVar6;
         if (lVar6 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar7 = *(uint*)this;
         if (param_1 <= uVar7) goto LAB_00102905;
      }

      lVar6 = *(long*)( this + 8 );
      puVar2 = (undefined4*)( lVar6 + (ulong)uVar7 * 0x38 );
      do {
         *puVar2 = 0xffffffff;
         puVar3 = puVar2 + 0xe;
         for (int i = 0; i < 5; i++) {
            *(undefined8*)( puVar2 + ( 2*i + 2 ) ) = 0;
         }

         puVar2[0xc] = 0;
         puVar2 = puVar3;
      }
 while ( puVar3 != (undefined4*)( lVar6 + 0x38 + ( ( ulong )(uVar4 - uVar7) + (ulong)uVar7 ) * 0x38 ) );
   }

   LAB_00102905:*(uint*)this = param_1;
   return;
}
/* CowData<Vector<int> >::_unref() */void CowData<Vector<int>>::_unref(CowData<Vector<int>> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x10;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}

