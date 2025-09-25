/* GodotStep3D::_solve_island(unsigned int, void*) */void GodotStep3D::_solve_island(uint param_1, void *param_2) {
   code *pcVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   uint *puVar8;
   undefined4 in_register_0000003c;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   int iVar12;
   int local_3c;
   lVar9 = CONCAT44(in_register_0000003c, param_1);
   if ((uint)param_2 < *(uint*)( lVar9 + 0x20 )) {
      local_3c = 1;
      puVar8 = (uint*)( ( (ulong)param_2 & 0xffffffff ) * 0x10 + *(long*)( lVar9 + 0x28 ) );
      uVar4 = *puVar8;
      uVar10 = (ulong)uVar4;
      uVar3 = uVar10;
      do {
         if (uVar4 == 0) {
            return;
         }

         iVar12 = 0;
         if (0 < *(int*)( lVar9 + 8 )) {
            do {
               uVar7 = 0;
               do {
                  while (true) {
                     uVar11 = uVar10;
                     if ((uint)uVar10 <= (uint)uVar7) goto LAB_0010012e;
                     pcVar1 = *(code**)( **(long**)( *(long*)( puVar8 + 2 ) + uVar7 * 8 ) + 0x20 );
                     if (pcVar1 == GodotJoint3D::solve) break;
                     uVar7 = uVar7 + 1;
                     ( *pcVar1 )(*(undefined4*)( lVar9 + 0xc ));
                     uVar10 = ( ulong ) * puVar8;
                     if (uVar7 == uVar3) goto LAB_0010009b;
                  }
;
                  uVar7 = uVar7 + 1;
               }
 while ( uVar7 != uVar3 );
               LAB_0010009b:iVar12 = iVar12 + 1;
            }
 while ( iVar12 < *(int*)( lVar9 + 8 ) );
         }

         local_3c = local_3c + 1;
         uVar6 = 0;
         uVar5 = 0;
         do {
            uVar7 = uVar6;
            uVar11 = uVar6;
            if (uVar6 == uVar10) goto LAB_0010012e;
            lVar2 = *(long*)( *(long*)( puVar8 + 2 ) + uVar6 * 8 );
            if (local_3c <= *(int*)( lVar2 + 0x20 )) {
               uVar7 = uVar5;
               uVar11 = uVar10;
               if ((uint)uVar10 <= (uint)uVar5) goto LAB_0010012e;
               *(long*)( *(long*)( puVar8 + 2 ) + uVar5 * 8 ) = lVar2;
               uVar5 = ( ulong )((uint)uVar5 + 1);
            }

            uVar6 = uVar6 + 1;
         }
 while ( uVar6 != uVar3 );
         uVar4 = (uint)uVar5;
         uVar3 = uVar5;
      }
 while ( true );
   }

   uVar7 = (ulong)param_2 & 0xffffffff;
   uVar11 = ( ulong ) * (uint*)( lVar9 + 0x20 );
   LAB_0010012e:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar7, uVar11, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotStep3D::_setup_constraint(unsigned int, void*) */void GodotStep3D::_setup_constraint(uint param_1, void *param_2) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined4 in_register_0000003c;
   long lVar2;
   lVar2 = CONCAT44(in_register_0000003c, param_1);
   if (*(uint*)( lVar2 + 0x30 ) <= (uint)param_2) {
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_2 & 0xffffffff, ( ulong ) * (uint*)( lVar2 + 0x30 ), "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code*)invalidInstructionException();
      ( *UNRECOVERED_JUMPTABLE )();
   }

   plVar1 = *(long**)( *(long*)( lVar2 + 0x38 ) + ( (ulong)param_2 & 0xffffffff ) * 8 );
   UNRECOVERED_JUMPTABLE = *(code**)( *plVar1 + 0x10 );
   if (UNRECOVERED_JUMPTABLE == GodotJoint3D::setup) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x001001f8. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(*(undefined4*)( lVar2 + 0xc ), plVar1);
   return;
}
/* GodotStep3D::_populate_island_soft_body(GodotSoftBody3D*, LocalVector<GodotBody3D*, unsigned int,
   false, false>&, LocalVector<GodotConstraint3D*, unsigned int, false, false>&) */void GodotStep3D::_populate_island_soft_body(GodotStep3D *this, GodotSoftBody3D *param_1, LocalVector *param_2, LocalVector *param_3) {
   int iVar1;
   uint uVar2;
   long lVar3;
   GodotBody3D *pGVar4;
   code *pcVar5;
   int iVar6;
   ulong uVar7;
   void *pvVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   *(undefined8*)( param_1 + 0x2d0 ) = *(undefined8*)this;
   iVar1 = *(int*)( param_1 + 0x2ac );
   if (iVar1 == 0) {
      return;
   }

   lVar3 = *(long*)( param_1 + 0x288 );
   lVar9 = 0;
   lVar10 = *(long*)this;
   do {
      lVar11 = *(long*)( lVar3 + lVar9 * 8 );
      if (lVar10 != *(long*)( lVar11 + 0x18 )) {
         do {
            *(long*)( lVar11 + 0x18 ) = lVar10;
            pvVar8 = *(void**)( param_3 + 8 );
            uVar2 = *(uint*)param_3;
            if (uVar2 == *(uint*)( param_3 + 4 )) {
               uVar7 = ( ulong )(uVar2 * 2);
               if (uVar2 * 2 == 0) {
                  uVar7 = 1;
               }

               *(int*)( param_3 + 4 ) = (int)uVar7;
               pvVar8 = (void*)Memory::realloc_static(pvVar8, uVar7 * 8, false);
               *(void**)( param_3 + 8 ) = pvVar8;
               if (pvVar8 == (void*)0x0) goto LAB_001003f9;
               uVar2 = *(uint*)param_3;
            }

            *(uint*)param_3 = uVar2 + 1;
            *(long*)( (long)pvVar8 + (ulong)uVar2 * 8 ) = lVar11;
            uVar2 = *(uint*)( this + 0x30 );
            pvVar8 = *(void**)( this + 0x38 );
            if (uVar2 == *(uint*)( this + 0x34 )) {
               uVar7 = ( ulong )(uVar2 * 2);
               if (uVar2 * 2 == 0) {
                  uVar7 = 1;
               }

               *(int*)( this + 0x34 ) = (int)uVar7;
               pvVar8 = (void*)Memory::realloc_static(pvVar8, uVar7 * 8, false);
               *(void**)( this + 0x38 ) = pvVar8;
               if (pvVar8 == (void*)0x0) {
                  LAB_001003f9:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               uVar2 = *(uint*)( this + 0x30 );
            }

            lVar10 = 0;
            *(uint*)( this + 0x30 ) = uVar2 + 1;
            *(long*)( (long)pvVar8 + (ulong)uVar2 * 8 ) = lVar11;
            if (0 < *(int*)( lVar11 + 0x10 )) {
               do {
                  pGVar4 = *(GodotBody3D**)( *(long*)( lVar11 + 8 ) + lVar10 * 8 );
                  if (( *(long*)this != *(long*)( pGVar4 + 0x368 ) ) && ( iVar6 = iVar6 != 0 )) {
                     _populate_island(this, pGVar4, param_2, param_3);
                  }

                  lVar10 = lVar10 + 1;
               }
 while ( (int)lVar10 < *(int*)( lVar11 + 0x10 ) );
            }

            if (iVar1 <= (int)lVar9 + 1) {
               return;
            }

            lVar9 = lVar9 + 1;
            lVar10 = *(long*)this;
            lVar11 = *(long*)( lVar3 + lVar9 * 8 );
         }
 while ( lVar10 != *(long*)( lVar11 + 0x18 ) );
      }

      if (iVar1 <= (int)lVar9 + 1) {
         return;
      }

      lVar9 = lVar9 + 1;
   }
 while ( true );
}
/* GodotStep3D::_populate_island(GodotBody3D*, LocalVector<GodotBody3D*, unsigned int, false,
   false>&, LocalVector<GodotConstraint3D*, unsigned int, false, false>&) */void GodotStep3D::_populate_island(GodotStep3D *this, GodotBody3D *param_1, LocalVector *param_2, LocalVector *param_3) {
   uint uVar1;
   undefined8 *puVar2;
   long *plVar3;
   GodotBody3D *pGVar4;
   int iVar5;
   int iVar6;
   code *pcVar7;
   GodotSoftBody3D *pGVar8;
   ulong uVar9;
   void *pvVar10;
   long lVar11;
   *(undefined8*)( param_1 + 0x368 ) = *(undefined8*)this;
   iVar5 = GodotBody3D::get_mode();
   if (1 < iVar5) {
      uVar1 = *(uint*)param_2;
      pvVar10 = *(void**)( param_2 + 8 );
      if (uVar1 == *(uint*)( param_2 + 4 )) {
         uVar9 = ( ulong )(uVar1 * 2);
         if (uVar1 * 2 == 0) {
            uVar9 = 1;
         }

         *(int*)( param_2 + 4 ) = (int)uVar9;
         pvVar10 = (void*)Memory::realloc_static(pvVar10, uVar9 * 8, false);
         *(void**)( param_2 + 8 ) = pvVar10;
         if (pvVar10 == (void*)0x0) {
            LAB_00100659:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar7 = (code*)invalidInstructionException();
            ( *pcVar7 )();
         }

         uVar1 = *(uint*)param_2;
      }

      *(uint*)param_2 = uVar1 + 1;
      *(GodotBody3D**)( (long)pvVar10 + (ulong)uVar1 * 8 ) = param_1;
   }

   puVar2 = *(undefined8**)( param_1 + 0x308 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      plVar3 = (long*)puVar2[2];
      if (*(long*)this != plVar3[3]) {
         plVar3[3] = *(long*)this;
         pvVar10 = *(void**)( param_3 + 8 );
         uVar1 = *(uint*)param_3;
         if (uVar1 == *(uint*)( param_3 + 4 )) {
            uVar9 = ( ulong )(uVar1 * 2);
            if (uVar1 * 2 == 0) {
               uVar9 = 1;
            }

            *(int*)( param_3 + 4 ) = (int)uVar9;
            pvVar10 = (void*)Memory::realloc_static(pvVar10, uVar9 * 8, false);
            *(void**)( param_3 + 8 ) = pvVar10;
            if (pvVar10 == (void*)0x0) goto LAB_00100659;
            uVar1 = *(uint*)param_3;
         }

         *(uint*)param_3 = uVar1 + 1;
         *(long**)( (long)pvVar10 + (ulong)uVar1 * 8 ) = plVar3;
         uVar1 = *(uint*)( this + 0x30 );
         pvVar10 = *(void**)( this + 0x38 );
         if (uVar1 == *(uint*)( this + 0x34 )) {
            uVar9 = ( ulong )(uVar1 * 2);
            if (uVar1 * 2 == 0) {
               uVar9 = 1;
            }

            *(int*)( this + 0x34 ) = (int)uVar9;
            pvVar10 = (void*)Memory::realloc_static(pvVar10, uVar9 * 8, false);
            *(void**)( this + 0x38 ) = pvVar10;
            if (pvVar10 == (void*)0x0) goto LAB_00100659;
            uVar1 = *(uint*)( this + 0x30 );
         }

         lVar11 = 0;
         *(uint*)( this + 0x30 ) = uVar1 + 1;
         *(long**)( (long)pvVar10 + (ulong)uVar1 * 8 ) = plVar3;
         if (0 < (int)plVar3[2]) {
            do {
               if (( ( *(int*)( puVar2 + 3 ) != (int)lVar11 ) && ( pGVar4 = *(GodotBody3D**)( plVar3[1] + lVar11 * 8 ) * (long*)this != *(long*)( pGVar4 + 0x368 ) ) ) && ( iVar5 = iVar5 != 0 )) {
                  _populate_island(this, pGVar4, param_2, param_3);
               }

               lVar11 = lVar11 + 1;
            }
 while ( (int)lVar11 < (int)plVar3[2] );
         }

         iVar5 = 0;
         pcVar7 = *(code**)( *plVar3 + 8 );
         if (pcVar7 != GodotConstraint3D::get_soft_body_count) {
            do {
               iVar6 = ( *pcVar7 )(plVar3);
               if (iVar6 <= iVar5) break;
               if (*(code**)*plVar3 == GodotConstraint3D::get_soft_body_ptr) {
                  /* WARNING: Does not return */
                  pcVar7 = (code*)invalidInstructionException();
                  ( *pcVar7 )();
               }

               pGVar8 = (GodotSoftBody3D*)( **(code**)*plVar3 )(plVar3, iVar5);
               if (*(long*)this != *(long*)( pGVar8 + 0x2d0 )) {
                  _populate_island_soft_body(this, pGVar8, param_2, param_3);
               }

               iVar5 = iVar5 + 1;
               pcVar7 = *(code**)( *plVar3 + 8 );
            }
 while ( pcVar7 != GodotConstraint3D::get_soft_body_count );
         }

      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* GodotStep3D::_pre_solve_island(LocalVector<GodotConstraint3D*, unsigned int, false, false>&)
   const */void GodotStep3D::_pre_solve_island(GodotStep3D *this, LocalVector *param_1) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   uVar6 = ( ulong ) * (uint*)param_1;
   if (*(uint*)param_1 == 0) {
      return;
   }

   uVar9 = 0;
   uVar7 = 0;
   uVar10 = uVar6;
   do {
      while (true) {
         if ((uint)uVar10 <= (uint)uVar7) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar7, uVar10, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar1 = *(long**)( *(long*)( param_1 + 8 ) + uVar7 * 8 );
         if (*(code**)( *plVar1 + 0x18 ) != GodotJoint3D::pre_solve) break;
         LAB_00100708:if ((uint)uVar10 <= (uint)uVar9) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar9, uVar10, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         uVar7 = uVar7 + 1;
         *(long**)( *(long*)( param_1 + 8 ) + uVar9 * 8 ) = plVar1;
         uVar9 = ( ulong )((uint)uVar9 + 1);
         if (uVar7 == uVar6) goto LAB_00100767;
      }
;
      cVar3 = ( **(code**)( *plVar1 + 0x18 ) )(*(undefined4*)( this + 0xc ), plVar1);
      uVar10 = ( ulong ) * (uint*)param_1;
      if (cVar3 != '\0') goto LAB_00100708;
      uVar7 = uVar7 + 1;
   }
 while ( uVar7 != uVar6 );
   LAB_00100767:uVar8 = (uint)uVar9;
   if ((uint)uVar10 <= uVar8) {
      if (uVar8 <= (uint)uVar10) {
         return;
      }

      if (*(uint*)( param_1 + 4 ) < uVar8) {
         uVar4 = uVar8 - 1 >> 1 | uVar8 - 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = ( uVar4 | uVar4 >> 0x10 ) + 1;
         *(uint*)( param_1 + 4 ) = uVar4;
         lVar5 = Memory::realloc_static(*(void**)( param_1 + 8 ), (ulong)uVar4 * 8, false);
         *(long*)( param_1 + 8 ) = lVar5;
         if (lVar5 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }

   }

   *(uint*)param_1 = uVar8;
   return;
}
/* GodotStep3D::_check_suspend(LocalVector<GodotBody3D*, unsigned int, false, false> const&) const
    */void GodotStep3D::_check_suspend(GodotStep3D *this, LocalVector *param_1) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   ulong uVar4;
   ulong uVar5;
   char cVar6;
   ulong uVar7;
   uVar7 = ( ulong ) * (uint*)param_1;
   if (*(uint*)param_1 == 0) {
      return;
   }

   uVar5 = 0;
   cVar6 = '\x01';
   uVar4 = uVar7;
   do {
      if ((uint)uVar4 <= (uint)uVar5) goto LAB_00100931;
      cVar3 = GodotBody3D::sleep_test(*(float*)( this + 0xc ));
      uVar4 = ( ulong ) * (uint*)param_1;
      if (cVar3 == '\0') {
         cVar6 = '\0';
      }

      uVar5 = uVar5 + 1;
   }
 while ( uVar5 != uVar7 );
   for (uVar5 = 0; (uint)uVar5 < (uint)uVar4; uVar5 = uVar5 + 1) {
      lVar1 = *(long*)( *(long*)( param_1 + 8 ) + uVar5 * 8 );
      if (cVar6 == *(char*)( lVar1 + 0x2b9 )) {
         GodotBody3D::set_active(SUB81(lVar1, 0));
      }

      if (uVar5 + 1 == uVar7) {
         return;
      }

      uVar4 = ( ulong ) * (uint*)param_1;
   }

   LAB_00100931:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, uVar5, uVar4, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* GodotStep3D::GodotStep3D() */void GodotStep3D::GodotStep3D(GodotStep3D *this) {
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   uVar2 = _LC10;
   *(undefined8*)this = 1;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = uVar2;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 24 ) ) = 0;
   }

   lVar3 = Memory::realloc_static((void*)0x0, 0x800, false);
   *(long*)( this + 0x18 ) = lVar3;
   if (lVar3 != 0) {
      if (*(uint*)( this + 0x24 ) < 0x80) {
         *(undefined4*)( this + 0x24 ) = 0x80;
         lVar3 = Memory::realloc_static(*(void**)( this + 0x28 ), 0x800, false);
         *(long*)( this + 0x28 ) = lVar3;
         if (lVar3 == 0) goto LAB_00100a80;
      }

      if (*(uint*)( this + 0x34 ) < 0x400) {
         *(undefined4*)( this + 0x34 ) = 0x400;
         lVar3 = Memory::realloc_static(*(void**)( this + 0x38 ), 0x2000, false);
         *(long*)( this + 0x38 ) = lVar3;
         if (lVar3 == 0) goto LAB_00100a80;
      }

      return;
   }

   LAB_00100a80:_err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotStep3D::step(GodotSpace3D*, float) */void GodotStep3D::step(GodotStep3D *this, GodotSpace3D *param_1, float param_2) {
   uint uVar1;
   GodotBody3D *pGVar2;
   GodotSoftBody3D *pGVar3;
   code *pcVar4;
   Callable *pCVar5;
   uint uVar6;
   int iVar7;
   long *plVar8;
   long *plVar9;
   long *plVar10;
   long lVar11;
   long lVar12;
   void *pvVar13;
   long lVar14;
   undefined8 *puVar15;
   long lVar16;
   uint uVar17;
   LocalVector *pLVar18;
   uint *puVar19;
   LocalVector *pLVar20;
   ulong uVar21;
   uint uVar22;
   int iVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   bool bVar27;
   LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false> *local_98;
   long local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   iVar23 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GodotSpace3D::lock();
   GodotSpace3D::setup();
   *(float*)( param_1 + 0x60f8 ) = param_2;
   *(undefined4*)( this + 8 ) = *(undefined4*)( param_1 + 0xd0 );
   *(float*)( this + 0xc ) = param_2;
   plVar8 = (long*)GodotSpace3D::get_active_body_list();
   plVar9 = (long*)GodotSpace3D::get_active_soft_body_list();
   plVar10 = (long*)OS::get_singleton();
   lVar11 = ( **(code**)( *plVar10 + 0x208 ) )(plVar10);
   for (lVar14 = *plVar8; lVar14 != 0; lVar14 = *(long*)( lVar14 + 0x10 )) {
      iVar23 = iVar23 + 1;
      GodotBody3D::integrate_forces(param_2);
   }

   for (lVar14 = *plVar9; lVar14 != 0; lVar14 = *(long*)( lVar14 + 0x10 )) {
      iVar23 = iVar23 + 1;
      GodotSoftBody3D::predict_motion(param_2);
   }

   *(int*)( param_1 + 0x6100 ) = iVar23;
   GodotSpace3D::update();
   plVar10 = (long*)OS::get_singleton();
   lVar12 = ( **(code**)( *plVar10 + 0x208 ) )(plVar10);
   *(long*)param_1 = lVar12 - lVar11;
   plVar10 = (long*)GodotSpace3D::get_moved_area_list();
   lVar14 = *plVar10;
   if (lVar14 == 0) {
      uVar26 = 0;
   }
 else {
      uVar26 = 0;
      do {
         iVar23 = *(int*)( *(long*)( lVar14 + 8 ) + 0x23c );
         if (iVar23 != 0) {
            lVar14 = *(long*)( *(long*)( lVar14 + 8 ) + 0x218 );
            lVar11 = 0;
            do {
               lVar16 = *(long*)( lVar14 + lVar11 * 8 );
               if (*(long*)this != *(long*)( lVar16 + 0x18 )) {
                  uVar24 = *(uint*)( this + 0x20 );
                  uVar17 = (uint)uVar26 + 1;
                  *(long*)( lVar16 + 0x18 ) = *(long*)this;
                  if (uVar24 < uVar17) {
                     LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x20 ), uVar17);
                     uVar24 = *(uint*)( this + 0x20 );
                  }

                  if (uVar24 <= (uint)uVar26) {
                     uVar21 = (ulong)uVar24;
                     goto LAB_00100e6e;
                  }

                  puVar19 = (uint*)( uVar26 * 0x10 + *(long*)( this + 0x28 ) );
                  if (*puVar19 != 0) {
                     *puVar19 = 0;
                  }

                  uVar24 = *(uint*)( this + 0x30 );
                  pvVar13 = *(void**)( this + 0x38 );
                  if (*(uint*)( this + 0x34 ) == uVar24) {
                     uVar26 = ( ulong )(uVar24 * 2);
                     if (uVar24 * 2 == 0) {
                        uVar26 = 1;
                     }

                     *(int*)( this + 0x34 ) = (int)uVar26;
                     pvVar13 = (void*)Memory::realloc_static(pvVar13, uVar26 * 8, false);
                     *(void**)( this + 0x38 ) = pvVar13;
                     if (pvVar13 == (void*)0x0) goto LAB_00100f10;
                     uVar24 = *(uint*)( this + 0x30 );
                  }

                  *(uint*)( this + 0x30 ) = uVar24 + 1;
                  *(long*)( (long)pvVar13 + (ulong)uVar24 * 8 ) = lVar16;
                  uVar24 = *puVar19;
                  pvVar13 = *(void**)( puVar19 + 2 );
                  if (puVar19[1] == uVar24) {
                     uVar26 = ( ulong )(uVar24 * 2);
                     if (uVar24 * 2 == 0) {
                        uVar26 = 1;
                     }

                     puVar19[1] = (uint)uVar26;
                     pvVar13 = (void*)Memory::realloc_static(pvVar13, uVar26 * 8, false);
                     *(void**)( puVar19 + 2 ) = pvVar13;
                     if (pvVar13 == (void*)0x0) {
                        LAB_00100f10:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar4 = (code*)invalidInstructionException();
                        ( *pcVar4 )();
                     }

                     uVar24 = *puVar19;
                  }

                  uVar26 = (ulong)uVar17;
                  *puVar19 = uVar24 + 1;
                  *(long*)( (long)pvVar13 + (ulong)uVar24 * 8 ) = lVar16;
               }

               if (iVar23 <= (int)lVar11 + 1) break;
               lVar11 = lVar11 + 1;
            }
 while ( true );
         }

         GodotSpace3D::area_remove_from_moved_list((SelfList*)param_1);
         lVar14 = *plVar10;
      }
 while ( lVar14 != 0 );
   }

   uVar24 = 0;
   lVar14 = *plVar8;
   if (lVar14 != 0) {
      do {
         pGVar2 = *(GodotBody3D**)( lVar14 + 8 );
         if (*(long*)this != *(long*)( pGVar2 + 0x368 )) {
            uVar1 = *(uint*)( this + 0x10 );
            uVar17 = uVar24 + 1;
            if (uVar1 < uVar17) {
               LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x10 ), uVar17);
               uVar1 = *(uint*)( this + 0x10 );
            }

            if (uVar1 <= uVar24) goto LAB_00101044;
            pLVar20 = (LocalVector*)( (ulong)uVar24 * 0x10 + *(long*)( this + 0x18 ) );
            if (*(int*)pLVar20 != 0) {
               *(undefined4*)pLVar20 = 0;
            }

            if (*(uint*)( pLVar20 + 4 ) < 0x200) {
               *(undefined4*)( pLVar20 + 4 ) = 0x200;
               lVar11 = Memory::realloc_static(*(void**)( pLVar20 + 8 ), 0x1000, false);
               *(long*)( pLVar20 + 8 ) = lVar11;
               if (lVar11 == 0) goto LAB_00100f95;
            }

            uVar1 = *(uint*)( this + 0x20 );
            uVar22 = (uint)uVar26 + 1;
            if (uVar1 < uVar22) {
               LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x20 ), uVar22);
               uVar1 = *(uint*)( this + 0x20 );
            }

            uVar21 = (ulong)uVar1;
            if (uVar1 <= (uint)uVar26) goto LAB_00100e6e;
            pLVar18 = (LocalVector*)( uVar26 * 0x10 + *(long*)( this + 0x28 ) );
            if (*(int*)pLVar18 != 0) {
               *(undefined4*)pLVar18 = 0;
            }

            if (*(uint*)( pLVar18 + 4 ) < 0x200) {
               *(undefined4*)( pLVar18 + 4 ) = 0x200;
               lVar11 = Memory::realloc_static(*(void**)( pLVar18 + 8 ), 0x1000, false);
               *(long*)( pLVar18 + 8 ) = lVar11;
               if (lVar11 == 0) goto LAB_00100f95;
            }

            _populate_island(this, pGVar2, pLVar20, pLVar18);
            if (*(int*)pLVar20 != 0) {
               uVar24 = uVar17;
            }

            if (*(int*)pLVar18 != 0) {
               uVar26 = (ulong)uVar22;
            }

         }

         lVar14 = *(long*)( lVar14 + 0x10 );
      }
 while ( lVar14 != 0 );
   }

   for (lVar14 = *plVar9; uVar17 = (uint)uVar26,lVar14 != 0; lVar14 = *(long*)( lVar14 + 0x10 )) {
      local_98 = (LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x10 );
      pGVar3 = *(GodotSoftBody3D**)( lVar14 + 8 );
      if (*(long*)this != *(long*)( pGVar3 + 0x2d0 )) {
         uVar1 = *(uint*)( this + 0x10 );
         uVar22 = uVar24 + 1;
         if (uVar1 < uVar22) {
            LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize(local_98, uVar22);
            uVar1 = *(uint*)( this + 0x10 );
         }

         if (uVar1 <= uVar24) goto LAB_00101044;
         pLVar20 = (LocalVector*)( (ulong)uVar24 * 0x10 + *(long*)( this + 0x18 ) );
         if (*(int*)pLVar20 != 0) {
            *(undefined4*)pLVar20 = 0;
         }

         if (*(uint*)( pLVar20 + 4 ) < 0x200) {
            *(undefined4*)( pLVar20 + 4 ) = 0x200;
            lVar11 = Memory::realloc_static(*(void**)( pLVar20 + 8 ), 0x1000, false);
            *(long*)( pLVar20 + 8 ) = lVar11;
            if (lVar11 == 0) {
               LAB_00100f95:_err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

         }

         uVar1 = *(uint*)( this + 0x20 );
         uVar6 = uVar17 + 1;
         if (uVar1 < uVar6) {
            LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x20 ), uVar6);
            uVar1 = *(uint*)( this + 0x20 );
         }

         uVar21 = (ulong)uVar1;
         if (uVar1 <= uVar17) goto LAB_00100e6e;
         pLVar18 = (LocalVector*)( uVar26 * 0x10 + *(long*)( this + 0x28 ) );
         if (*(int*)pLVar18 != 0) {
            *(undefined4*)pLVar18 = 0;
         }

         if (*(uint*)( pLVar18 + 4 ) < 0x200) {
            *(undefined4*)( pLVar18 + 4 ) = 0x200;
            lVar11 = Memory::realloc_static(*(void**)( pLVar18 + 8 ), 0x1000, false);
            *(long*)( pLVar18 + 8 ) = lVar11;
            if (lVar11 == 0) goto LAB_00100f95;
         }

         _populate_island_soft_body(this, pGVar3, pLVar20, pLVar18);
         if (*(int*)pLVar20 != 0) {
            uVar24 = uVar22;
         }

         if (*(int*)pLVar18 != 0) {
            uVar26 = (ulong)uVar6;
         }

      }

   }

   *(uint*)( param_1 + 0x60fc ) = uVar17;
   plVar10 = (long*)OS::get_singleton();
   lVar14 = ( **(code**)( *plVar10 + 0x208 ) )(plVar10);
   *(long*)( param_1 + 8 ) = lVar14 - lVar12;
   pCVar5 = WorkerThreadPool::singleton;
   iVar23 = *(int*)( this + 0x30 );
   if ((step(GodotSpace3D*,float)::{lambda()
   #1
   ( iVar7 = __cxa_guard_acquire(&step(GodotSpace3D * ::sname), iVar7 != 0) );
   {
      _scs_create((char *)&step(GodotSpace3D*,float)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,
                 &step(GodotSpace3D*,float)::{lambda()
      #1
      __cxa_guard_release(&step(GodotSpace3D*,float)::{lambda()
      #1
   }

   lVar11 = step(GodotSpace3D*,float)::{lambda()
   #1
   if (step(GodotSpace3D*,float)::{lambda()
   #1
   local_60 = 0;
   if (*(char**)( step(GodotSpace3D*,float)::{lambda()#1}::operator()() ) != (char*)0x0) {
      String::parse_latin1((String*)&local_60, *(char**)( step(GodotSpace3D*,float)::{lambda()#1}::operator()() ));
      goto LAB_0010128a;
   }

   plVar10 = (long*)( *(long*)( step(GodotSpace3D*,float)::{lambda()#1}::operator()() ) + -0x10 );
   if (*(long*)( step(GodotSpace3D*,float)::{lambda()#1}::operator()() ) != 0) {
      do {
         lVar12 = *plVar10;
         if (lVar12 == 0) goto LAB_0010155a;
         LOCK();
         lVar16 = *plVar10;
         bVar27 = lVar12 == lVar16;
         if (bVar27) {
            *plVar10 = lVar12 + 1;
            lVar16 = lVar12;
         }

         UNLOCK();
      }
 while ( !bVar27 );
      if (lVar16 != -1) {
         local_60 = *(long*)( lVar11 + 0x10 );
      }

      goto LAB_0010128a;
   }

}
LAB_0010155a:local_60 = 0;LAB_0010128a:puVar15 = (undefined8*)operator_new(0x28, "");*puVar15 = &PTR_callback_00101d28;puVar15[2] = _setup_constraint;puVar15[1] = this;puVar15[3] = 0;puVar15[4] = 0;local_58 = 0;local_50 = 0;WorkerThreadPool::_add_group_task(pCVar5, (_func_void_void_ptr_uint*)&local_58, (void*)0x0, (BaseTemplateUserdata*)0x0, (int)puVar15, iVar23, true, (String*)0x1);Callable::~Callable((Callable*)&local_58);lVar11 = local_60;if (local_60 != 0) {
   LOCK();
   plVar10 = (long*)( local_60 + -0x10 );
   *plVar10 = *plVar10 + -1;
   UNLOCK();
   if (*plVar10 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar11 + -0x10 ), false);
   }

}
uVar21 = 0;WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);plVar10 = (long*)OS::get_singleton();lVar11 = ( **(code**)( *plVar10 + 0x208 ) )();*(long*)( param_1 + 0x10 ) = lVar11 - lVar14;if (uVar17 != 0) {
   do {
      uVar1 = *(uint*)( this + 0x20 );
      if (uVar1 <= (uint)uVar21) goto LAB_001013ae;
      uVar25 = uVar21 + 1;
      _pre_solve_island(this, (LocalVector*)( uVar21 * 0x10 + *(long*)( this + 0x28 ) ));
      uVar21 = uVar25;
   }
 while ( uVar25 != uVar26 );
}
pCVar5 = WorkerThreadPool::singleton;if ((step(GodotSpace3D*,float)::{lambda()#2(iVar23 = __cxa_guard_acquire(), iVar23 != 0)){
   _scs_create((char *)&step(GodotSpace3D*,float)::{lambda()
   #2
   __cxa_atexit(StringName::~StringName,
                 &step(GodotSpace3D*,float)::{lambda()
   #2
   __cxa_guard_release();
}
lVar14 = step(GodotSpace3D*,float)::{lambda()#2if (step(GodotSpace3D*,float)::{lambda()#2local_60 = 0;}
  else{
   local_60 = 0;
   if (*(char**)( step(GodotSpace3D*,float)::{lambda()#2}::operator()() ) == (char*)0x0) {
      plVar10 = (long*)( *(long*)( step(GodotSpace3D*,float)::{lambda()#2}::operator()() ) + -0x10 );
      if (*(long*)( step(GodotSpace3D*,float)::{lambda()#2}::operator()() ) != 0) {
         do {
            lVar12 = *plVar10;
            if (lVar12 == 0) goto LAB_00101424;
            LOCK();
            lVar16 = *plVar10;
            bVar27 = lVar12 == lVar16;
            if (bVar27) {
               *plVar10 = lVar12 + 1;
               lVar16 = lVar12;
            }

            UNLOCK();
         }
 while ( !bVar27 );
         if (lVar16 != -1) {
            local_60 = *(long*)( lVar14 + 0x10 );
         }

      }

   }
 else {
      String::parse_latin1((String*)&local_60, *(char**)( step(GodotSpace3D*,float)::{lambda()#2}::operator()() ));
   }

}
LAB_00101424:puVar15 = (undefined8*)operator_new(0x28, "");*puVar15 = &PTR_callback_00101d28;puVar15[3] = 0;puVar15[4] = 0;puVar15[1] = this;puVar15[2] = 0x100000;local_58 = 0;local_50 = 0;WorkerThreadPool::_add_group_task(pCVar5, (_func_void_void_ptr_uint*)&local_58, (void*)0x0, (BaseTemplateUserdata*)0x0, (int)puVar15, uVar17, true, (String*)0x1);Callable::~Callable((Callable*)&local_58);lVar14 = local_60;if (local_60 != 0) {
   LOCK();
   plVar10 = (long*)( local_60 + -0x10 );
   *plVar10 = *plVar10 + -1;
   UNLOCK();
   if (*plVar10 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar14 + -0x10 ), false);
   }

}
WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);plVar10 = (long*)OS::get_singleton();lVar12 = ( **(code**)( *plVar10 + 0x208 ) )(plVar10);*(long*)( param_1 + 0x18 ) = lVar12 - lVar11;lVar14 = *plVar8;while (lVar14 != 0) {
   lVar14 = *(long*)( lVar14 + 0x10 );
   GodotBody3D::integrate_velocities(param_2);
}
;uVar21 = 0;if (uVar24 != 0) {
   do {
      uVar1 = *(uint*)( this + 0x10 );
      if (uVar1 <= (uint)uVar21) goto LAB_001013ae;
      uVar26 = uVar21 + 1;
      _check_suspend(this, (LocalVector*)( uVar21 * 0x10 + *(long*)( this + 0x18 ) ));
      uVar21 = uVar26;
   }
 while ( uVar24 != uVar26 );
}
for (lVar14 = *plVar9; lVar14 != 0; lVar14 = *(long*)( lVar14 + 0x10 )) {
   GodotSoftBody3D::solve_constraints(param_2);
}
plVar8 = (long*)OS::get_singleton();lVar14 = ( **(code**)( *plVar8 + 0x208 ) )(plVar8);iVar23 = *(int*)( this + 0x30 );*(long*)( param_1 + 0x20 ) = lVar14 - lVar12;if (iVar23 != 0) {
   *(undefined4*)( this + 0x30 ) = 0;
}
GodotSpace3D::unlock();*(long*)this = *(long*)this + 1;if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;LAB_00101044:uVar21 = (ulong)uVar1;uVar26 = (ulong)uVar24;goto LAB_00100e6e;LAB_001013ae:uVar26 = uVar21;uVar21 = (ulong)uVar1;LAB_00100e6e:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar26, uVar21, "p_index", "count", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar4 = (code*)invalidInstructionException();( *pcVar4 )();}/* GodotStep3D::~GodotStep3D() */void GodotStep3D::~GodotStep3D(GodotStep3D *this) {
   if (*(void**)( this + 0x38 ) != (void*)0x0) {
      if (*(int*)( this + 0x30 ) != 0) {
         *(undefined4*)( this + 0x30 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x38 ), false);
   }

   if (*(long*)( this + 0x28 ) != 0) {
      LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x20 ), 0);
      if (*(void**)( this + 0x28 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x28 ), false);
      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x10 ), 0);
      if (*(void**)( this + 0x18 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x18 ), false);
         return;
      }

   }

   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* GodotConstraint3D::get_soft_body_ptr(int) const */undefined8 GodotConstraint3D::get_soft_body_ptr(int param_1) {
   return 0;
}
/* GodotConstraint3D::get_soft_body_count() const */undefined8 GodotConstraint3D::get_soft_body_count(void) {
   return 0;
}
/* GodotJoint3D::setup(float) */undefined8 GodotJoint3D::setup(float param_1) {
   return 0;
}
/* GodotJoint3D::pre_solve(float) */undefined8 GodotJoint3D::pre_solve(float param_1) {
   return 1;
}
/* GodotJoint3D::solve(float) */void GodotJoint3D::solve(float param_1) {
   return;
}
/* WorkerThreadPool::BaseTemplateUserdata::callback() */void WorkerThreadPool::BaseTemplateUserdata::callback(void) {
   return;
}
/* WorkerThreadPool::GroupUserData<GodotStep3D, void (GodotStep3D::*)(unsigned int, void*),
   decltype(nullptr)>::~GroupUserData() */void WorkerThreadPool::GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)>::~GroupUserData(GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)> *this) {
   return;
}
/* WorkerThreadPool::GroupUserData<GodotStep3D, void (GodotStep3D::*)(unsigned int, void*),
   decltype(nullptr)>::callback_indexed(unsigned int) */void WorkerThreadPool::GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)>::callback_indexed(GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)> *this, uint param_1) {
   code *UNRECOVERED_JUMPTABLE;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x10 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( *(long*)( this + 0x18 ) + *(long*)( this + 8 ) ) + -1 );
   }

   /* WARNING: Could not recover jumptable at 0x00101892. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )((long*)( *(long*)( this + 0x18 ) + *(long*)( this + 8 ) ), param_1, 0, UNRECOVERED_JUMPTABLE);
   return;
}
/* WorkerThreadPool::GroupUserData<GodotStep3D, void (GodotStep3D::*)(unsigned int, void*),
   decltype(nullptr)>::~GroupUserData() */void WorkerThreadPool::GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)>::~GroupUserData(GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)> *this) {
   operator_delete(this, 0x28);
   return;
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotStep3D::_populate_island(GodotBody3D*, LocalVector<GodotBody3D*, unsigned int, false,
   false>&, LocalVector<GodotConstraint3D*, unsigned int, false, false>&) [clone .cold] */void GodotStep3D::_populate_island(GodotBody3D *param_1, LocalVector *param_2, LocalVector *param_3) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* LocalVector<LocalVector<GodotConstraint3D*, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */void LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize(LocalVector<LocalVector<GodotConstraint3D*,unsigned_int,false,false>,unsigned_int,false,false> *this, uint param_1) {
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
         uVar7 = uVar7 | uVar7 >> 8;
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
         if (param_1 <= uVar7) goto LAB_00101a39;
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

   LAB_00101a39:*(uint*)this = param_1;
   return;
}
/* LocalVector<LocalVector<GodotBody3D*, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */void LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false>::resize(LocalVector<LocalVector<GodotBody3D*,unsigned_int,false,false>,unsigned_int,false,false> *this, uint param_1) {
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
         uVar7 = uVar7 | uVar7 >> 8;
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
         if (param_1 <= uVar7) goto LAB_00101b89;
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

   LAB_00101b89:*(uint*)this = param_1;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* WorkerThreadPool::GroupUserData<GodotStep3D, void (GodotStep3D::*)(unsigned int, void*),
   decltype(nullptr)>::~GroupUserData() */void WorkerThreadPool::GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)>::~GroupUserData(GroupUserData<GodotStep3D,void(GodotStep3D::*)(unsigned_int, ,void*),(nullptr)> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

