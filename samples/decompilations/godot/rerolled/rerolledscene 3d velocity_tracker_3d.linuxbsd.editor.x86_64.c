/* VelocityTracker3D::set_track_physics_step(bool) */void VelocityTracker3D::set_track_physics_step(VelocityTracker3D *this, bool param_1) {
   this[0x17c] = (VelocityTracker3D)param_1;
   return;
}
/* VelocityTracker3D::is_tracking_physics_step() const */VelocityTracker3D VelocityTracker3D::is_tracking_physics_step(VelocityTracker3D *this) {
   return this[0x17c];
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VelocityTracker3D::get_tracked_linear_velocity() const */undefined1  [16] __thiscallVelocityTracker3D::get_tracked_linear_velocity(VelocityTracker3D *this) {
   float fVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   int iVar5;
   long lVar6;
   long *plVar7;
   long *plVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   double dVar13;
   undefined1 auVar14[16];
   float fVar15;
   double dVar16;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   float fVar19;
   double dVar20;
   undefined1 auVar21[16];
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 400 ) != 0) {
      if (this[0x17c] == (VelocityTracker3D)0x0) {
         lVar6 = Engine::get_singleton();
         plVar7 = *(long**)( this + 0x188 );
         if (plVar7 == (long*)0x0) goto LAB_00100360;
         lVar11 = plVar7[-1];
         if (lVar11 < 1) goto LAB_00100363;
         dVar20 = (double)( ulong )(*(long*)( lVar6 + 0x18 ) - *plVar7) / __LC7;
      }
 else {
         lVar6 = Engine::get_singleton();
         plVar7 = *(long**)( this + 0x188 );
         lVar6 = *(long*)( lVar6 + 0x50 );
         if (plVar7 == (long*)0x0) {
            LAB_00100360:lVar11 = 0;
            LAB_00100363:lVar6 = 0;
            LAB_00100339:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar11, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar11 = plVar7[-1];
         if (lVar11 < 1) goto LAB_00100363;
         lVar11 = *plVar7;
         plVar7 = (long*)Engine::get_singleton();
         iVar5 = ( **(code**)( *plVar7 + 8 ) )(plVar7);
         dVar20 = (double)( ulong )(lVar6 - lVar11) / (double)iVar5;
      }

      if (1 < *(int*)( this + 400 )) {
         lVar12 = 0x18;
         auVar17 = ZEXT816(0);
         dVar16 = 0.0;
         lVar6 = 0;
         fVar19 = 0.0;
         do {
            lVar3 = *(long*)( this + 0x188 );
            if (lVar3 == 0) {
               lVar11 = 0;
               goto LAB_00100339;
            }

            lVar11 = *(long*)( lVar3 + -8 );
            if (lVar11 <= lVar6) goto LAB_00100339;
            plVar7 = (long*)( lVar3 + -0x18 + lVar12 );
            lVar6 = lVar6 + 1;
            if (lVar11 <= lVar6) goto LAB_00100339;
            plVar8 = (long*)( lVar3 + lVar12 );
            fVar15 = *(float*)( plVar7 + 2 );
            lVar11 = plVar7[1];
            lVar3 = plVar8[1];
            fVar1 = *(float*)( plVar8 + 2 );
            uVar10 = *plVar7 - *plVar8;
            if ((long)uVar10 < 0) {
               dVar13 = (double)uVar10;
               if (this[0x17c] == (VelocityTracker3D)0x0) goto LAB_0010017a;
               LAB_001002a6:auVar18._0_8_ = auVar17._0_8_;
               plVar7 = (long*)Engine::get_singleton();
               iVar5 = ( **(code**)( *plVar7 + 8 ) )(plVar7);
               auVar18._8_8_ = 0;
               dVar13 = dVar13 / (double)iVar5;
            }
 else {
               dVar13 = (double)(long)uVar10;
               if (this[0x17c] != (VelocityTracker3D)0x0) goto LAB_001002a6;
               LAB_0010017a:dVar13 = dVar13 / __LC7;
               auVar18 = auVar17;
            }

            auVar17 = auVar18;
            if (__LC8 < dVar20 + dVar16 + dVar13) break;
            auVar17._0_4_ = auVar18._0_4_ + ( (float)lVar11 - (float)lVar3 );
            auVar17._4_4_ = auVar18._4_4_ + ( (float)( (ulong)lVar11 >> 0x20 ) - (float)( (ulong)lVar3 >> 0x20 ) );
            auVar17._8_4_ = auVar18._8_4_ + 0.0;
            auVar17._12_4_ = auVar18._12_4_ + 0.0;
            fVar19 = fVar19 + ( fVar15 - fVar1 );
            lVar12 = lVar12 + 0x18;
            dVar16 = dVar16 + dVar13;
         }
 while ( (int)lVar6 < *(int*)( this + 400 ) + -1 );
         if (dVar16 != 0.0) {
            fVar15 = (float)dVar16;
            fVar19 = fVar19 / fVar15;
            auVar14._4_4_ = fVar15;
            auVar14._0_4_ = fVar15;
            auVar14._8_8_ = _LC9;
            auVar17 = divps(auVar17, auVar14);
            uVar9 = auVar17._0_8_;
            goto LAB_0010004c;
         }

      }

   }

   uVar9 = 0;
   fVar19 = 0.0;
   LAB_0010004c:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   auVar21._8_4_ = fVar19;
   auVar21._0_8_ = uVar9;
   auVar21._12_4_ = 0;
   return auVar21;
}
/* CowData<VelocityTracker3D::PositionHistory>::_copy_on_write() [clone .isra.0] */void CowData<VelocityTracker3D::PositionHistory>::_copy_on_write(CowData<VelocityTracker3D::PositionHistory> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0x18;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* VelocityTracker3D::reset(Vector3 const&) */void VelocityTracker3D::reset(VelocityTracker3D *this, Vector3 *param_1) {
   undefined4 uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   code *pcVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(undefined8*)param_1;
   uVar1 = *(undefined4*)( param_1 + 8 );
   if (this[0x17c] == (VelocityTracker3D)0x0) {
      lVar6 = Engine::get_singleton();
      uVar7 = *(undefined8*)( lVar6 + 0x18 );
   }
 else {
      lVar6 = Engine::get_singleton();
      uVar7 = *(undefined8*)( lVar6 + 0x50 );
   }

   if (*(long*)( this + 0x188 ) == 0) {
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 0x188 ) + -8 );
      if (0 < lVar6) {
         CowData<VelocityTracker3D::PositionHistory>::_copy_on_write((CowData<VelocityTracker3D::PositionHistory>*)( this + 0x188 ));
         puVar4 = *(undefined8**)( this + 0x188 );
         *(undefined4*)( puVar4 + 2 ) = uVar1;
         *puVar4 = uVar7;
         puVar4[1] = uVar3;
         *(undefined4*)( this + 400 ) = 1;
         if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, 0, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* VelocityTracker3D::update_position(Vector3 const&) */void VelocityTracker3D::update_position(VelocityTracker3D *this, Vector3 *param_1) {
   undefined8 *puVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   int iVar10;
   long lVar11;
   int iVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_60;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)param_1;
   uVar2 = *(undefined4*)( param_1 + 8 );
   if (this[0x17c] == (VelocityTracker3D)0x0) {
      lVar9 = Engine::get_singleton();
      local_60 = *(long*)( lVar9 + 0x18 );
   }
 else {
      lVar9 = Engine::get_singleton();
      local_60 = *(long*)( lVar9 + 0x50 );
   }

   plVar5 = *(long**)( this + 0x188 );
   if (*(int*)( this + 400 ) == 0) {
      if (plVar5 != (long*)0x0) {
         lVar9 = plVar5[-1];
         lVar13 = 1;
         if (lVar9 < 1) {
            lVar13 = lVar9;
         }

         iVar12 = (int)lVar13;
         iVar10 = iVar12 + -1;
         *(int*)( this + 400 ) = iVar12;
         if (0 < iVar10) goto LAB_00100659;
         goto joined_r0x00100769;
      }

   }
 else {
      if (plVar5 == (long*)0x0) {
         lVar9 = 0;
         LAB_00100823:lVar13 = 0;
         LAB_001006f9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

      lVar9 = plVar5[-1];
      if (lVar9 < 1) goto LAB_00100823;
      if (local_60 == *plVar5) goto LAB_00100770;
      lVar13 = (long)( *(int*)( this + 400 ) + 1 );
      if (lVar9 < lVar13) {
         lVar13 = lVar9;
      }

      iVar12 = (int)lVar13;
      iVar10 = iVar12 + -1;
      *(int*)( this + 400 ) = iVar12;
      if (iVar10 < 1) goto LAB_00100770;
      LAB_00100659:lVar13 = (long)( iVar10 + -1 );
      lVar8 = (long)iVar10 * 0x18;
      do {
         if (plVar5 == (long*)0x0) {
            lVar9 = 0;
            goto LAB_001006f9;
         }

         lVar9 = plVar5[-1];
         if (lVar9 <= lVar13) goto LAB_001006f9;
         puVar1 = (undefined8*)( (long)plVar5 + lVar8 + -0x18 );
         lVar11 = lVar13 + 1;
         if (lVar9 <= lVar11) goto LAB_001007de;
         lVar13 = lVar13 + -1;
         CowData<VelocityTracker3D::PositionHistory>::_copy_on_write((CowData<VelocityTracker3D::PositionHistory>*)( this + 0x188 ));
         plVar5 = *(long**)( this + 0x188 );
         uVar7 = puVar1[1];
         *(undefined8*)( (long)plVar5 + lVar8 ) = *puVar1;
         ( (undefined8*)( (long)plVar5 + lVar8 ) )[1] = uVar7;
         *(undefined4*)( (long)plVar5 + lVar8 + 0x10 ) = *(undefined4*)( puVar1 + 2 );
         lVar8 = lVar8 + -0x18;
      }
 while ( lVar13 != ( (long)iVar12 + -3 ) - ( ulong )(iVar12 - 2) );
      if (plVar5 != (long*)0x0) {
         lVar9 = plVar5[-1];
         joined_r0x00100769:if (0 < lVar9) {
            LAB_00100770:CowData<VelocityTracker3D::PositionHistory>::_copy_on_write((CowData<VelocityTracker3D::PositionHistory>*)( this + 0x188 ));
            plVar5 = *(long**)( this + 0x188 );
            *(undefined4*)( plVar5 + 2 ) = uVar2;
            *plVar5 = local_60;
            plVar5[1] = lVar4;
            if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         goto LAB_00100848;
      }

   }

   lVar9 = 0;
   LAB_00100848:lVar11 = 0;
   LAB_001007de:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar11, lVar9, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar6 = (code*)invalidInstructionException();
   ( *pcVar6 )();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* VelocityTracker3D::_bind_methods() */void VelocityTracker3D::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   char *local_98;
   long local_90;
   long *local_88;
   int local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "enable";
   uVar5 = ( uint ) & local_58;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_track_physics_step", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<VelocityTracker3D,bool>(set_track_physics_step);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"is_tracking_physics_step", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<VelocityTracker3D,bool>(is_tracking_physics_step);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "position";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"update_position", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<VelocityTracker3D,Vector3_const&>(update_position);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_tracked_linear_velocity", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<VelocityTracker3D,Vector3>(get_tracked_linear_velocity);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "position";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"reset", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<VelocityTracker3D,Vector3_const&>(reset);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_d0 = 0;
   local_98 = "track_physics_step";
   local_90 = 0x12;
   String::parse_latin1((StrRange*)&local_d0);
   local_98 = (char*)CONCAT44(local_98._4_4_, 1);
   local_90 = 0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_d0);
   }

   local_88 = (long*)0x0;
   local_80 = 0;
   local_78 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c8);
      local_70 = 6;
      if (local_80 == 0x11) {
         StringName::StringName((StringName*)&local_a8, (String*)&local_78, false);
         if (local_88 == (long*)local_a8) {
            if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_88 = (long*)local_a8;
         }

         goto LAB_00100fac;
      }

   }

   local_70 = 6;
   StringName::operator =((StringName*)&local_88, (StringName*)&local_c0);
   LAB_00100fac:local_d8 = 0;
   local_a8 = "RefCounted";
   local_a0 = 10;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VelocityTracker3D::VelocityTracker3D() */void VelocityTracker3D::VelocityTracker3D(VelocityTracker3D *this) {
   undefined8 *puVar1;
   RefCounted::RefCounted((RefCounted*)this);
   this[0x17c] = (VelocityTracker3D)0x0;
   *(undefined***)this = &PTR__initialize_classv_00105818;
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined4*)( this + 400 ) = 0;
   CowData<VelocityTracker3D::PositionHistory>::_copy_on_write((CowData<VelocityTracker3D::PositionHistory>*)( this + 0x188 ));
   puVar1 = (undefined8*)Memory::alloc_static(0x90, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)( this + 0x188 ) = puVar1 + 2;
      for (int i = 0; i < 4; i++) {
         puVar1[( 3*i + 2 )] = 0;
         puVar1[( 3*i + 3 )] = 0;
         *(undefined4*)( puVar1 + ( 3*i + 4 ) ) = 0;
      }

      puVar1[1] = 4;
      return;
   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x105b, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x105a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1) {
   return 9;
}
/* MethodBindTRC<Vector3>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00105978;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00105978;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001059d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001059d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00105a98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00105a98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00105a38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00105a38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001056b8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001056b8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CowData<VelocityTracker3D::PositionHistory>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<VelocityTracker3D::PositionHistory>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* VelocityTracker3D::_bind_methods() [clone .cold] */void VelocityTracker3D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101843:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101843;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001018ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001018ae:return &_get_class_namev();
}
/* VelocityTracker3D::~VelocityTracker3D() */void VelocityTracker3D::~VelocityTracker3D(VelocityTracker3D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00105818;
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_001056b8;
   Object::~Object((Object*)this);
   return;
}
/* VelocityTracker3D::~VelocityTracker3D() */void VelocityTracker3D::~VelocityTracker3D(VelocityTracker3D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00105818;
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_001056b8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x198);
   return;
}
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00101b0f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00101b0f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00101bc3;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00101c73;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00101c73:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00101bc3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00101bc3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00101e6c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00101e6c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 9;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00101fec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00101fec:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00102338:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102338;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102356;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00102356:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined1 local_50[16];
   int local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00102607;
   local_68 = 0;
   local_58 = &_LC5;
   local_70 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_50._8_8_;
   local_50 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = (undefined*)CONCAT44(local_58._4_4_, 1);
   local_40 = 0;
   local_38 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_70 == 0) {
      LAB_001026f8:local_30 = 6;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_68);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_001026f8;
      StringName::StringName((StringName*)&local_60, (String*)&local_38, false);
      if (local_50._8_8_ == local_60) {
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_50._8_8_ = local_60;
      }

   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   *puVar8 = local_58._0_4_;
   lVar2 = *(long*)( puVar8 + 2 );
   if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 2 );
            *(undefined8*)( puVar8 + 2 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8*)( puVar8 + 2 ) = local_50._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_50._8_8_;
      local_50 = auVar5 << 0x40;
   }

   if (*(long*)( puVar8 + 4 ) != local_50._8_8_) {
      StringName::unref();
      uVar6 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
   }

   lVar7 = local_38;
   puVar8[6] = local_40;
   lVar2 = *(long*)( puVar8 + 8 );
   if (lVar2 == local_38) {
      puVar8[10] = local_30;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 8 );
            *(undefined8*)( puVar8 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( puVar8 + 8 ) = local_38;
      puVar8[10] = local_30;
   }

   if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar6 = local_50._0_8_;
   if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_50._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   LAB_00102607:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined1 local_50[16];
   int local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00102927;
   local_68 = 0;
   local_58 = &_LC5;
   local_70 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_50._8_8_;
   local_50 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = (undefined*)CONCAT44(local_58._4_4_, 9);
   local_40 = 0;
   local_38 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_70 == 0) {
      LAB_00102a18:local_30 = 6;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_68);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_00102a18;
      StringName::StringName((StringName*)&local_60, (String*)&local_38, false);
      if (local_50._8_8_ == local_60) {
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_50._8_8_ = local_60;
      }

   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   *puVar8 = local_58._0_4_;
   lVar2 = *(long*)( puVar8 + 2 );
   if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 2 );
            *(undefined8*)( puVar8 + 2 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8*)( puVar8 + 2 ) = local_50._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_50._8_8_;
      local_50 = auVar5 << 0x40;
   }

   if (*(long*)( puVar8 + 4 ) != local_50._8_8_) {
      StringName::unref();
      uVar6 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
   }

   lVar7 = local_38;
   puVar8[6] = local_40;
   lVar2 = *(long*)( puVar8 + 8 );
   if (lVar2 == local_38) {
      puVar8[10] = local_30;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 8 );
            *(undefined8*)( puVar8 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( puVar8 + 8 ) = local_38;
      puVar8[10] = local_30;
   }

   if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar6 = local_50._0_8_;
   if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_50._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   LAB_00102927:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBind* create_method_bind<VelocityTracker3D, bool>(void (VelocityTracker3D::*)(bool)) */MethodBind *create_method_bind<VelocityTracker3D,bool>(_func_void_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00105978;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RefCounted";
   local_30 = 10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<VelocityTracker3D, bool>(bool (VelocityTracker3D::*)() const) */MethodBind *create_method_bind<VelocityTracker3D,bool>(_func_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001059d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RefCounted";
   local_30 = 10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<VelocityTracker3D, Vector3 const&>(void
   (VelocityTracker3D::*)(Vector3 const&)) */MethodBind *create_method_bind<VelocityTracker3D,Vector3_const&>(_func_void_Vector3_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00105a38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RefCounted";
   local_30 = 10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<VelocityTracker3D, Vector3>(Vector3 (VelocityTracker3D::*)()
   const) */MethodBind *create_method_bind<VelocityTracker3D,Vector3>(_func_Vector3 *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector3**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00105a98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RefCounted";
   local_30 = 10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<VelocityTracker3D::PositionHistory>::_realloc(long) */undefined8 CowData<VelocityTracker3D::PositionHistory>::_realloc(CowData<VelocityTracker3D::PositionHistory> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Removing unreachable block (ram,0x001032a8) *//* WARNING: Removing unreachable block (ram,0x001033d8) *//* WARNING: Removing unreachable block (ram,0x001035a0) *//* WARNING: Removing unreachable block (ram,0x001033e4) *//* WARNING: Removing unreachable block (ram,0x001033ee) *//* WARNING: Removing unreachable block (ram,0x00103580) *//* WARNING: Removing unreachable block (ram,0x001033fa) *//* WARNING: Removing unreachable block (ram,0x00103404) *//* WARNING: Removing unreachable block (ram,0x00103560) *//* WARNING: Removing unreachable block (ram,0x00103410) *//* WARNING: Removing unreachable block (ram,0x0010341a) *//* WARNING: Removing unreachable block (ram,0x00103540) *//* WARNING: Removing unreachable block (ram,0x00103426) *//* WARNING: Removing unreachable block (ram,0x00103430) *//* WARNING: Removing unreachable block (ram,0x00103520) *//* WARNING: Removing unreachable block (ram,0x0010343c) *//* WARNING: Removing unreachable block (ram,0x00103446) *//* WARNING: Removing unreachable block (ram,0x00103500) *//* WARNING: Removing unreachable block (ram,0x00103452) *//* WARNING: Removing unreachable block (ram,0x0010345c) *//* WARNING: Removing unreachable block (ram,0x001034e0) *//* WARNING: Removing unreachable block (ram,0x00103464) *//* WARNING: Removing unreachable block (ram,0x0010347a) *//* WARNING: Removing unreachable block (ram,0x00103486) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector3>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   undefined1 auVar2[12];
   undefined1 auVar3[12];
   long lVar4;
   char *pcVar5;
   Variant *pVVar6;
   long *plVar7;
   undefined4 in_register_00000014;
   long *plVar8;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined1 local_54[12];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar8 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar8 != (long*)0x0 ) && ( plVar8[1] != 0 ) ) && ( *(char*)( plVar8[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar8[1] == 0) {
         plVar7 = (long*)plVar8[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar8 + 0x40 ) )(plVar8);
         }

      }
 else {
         plVar7 = (long*)( plVar8[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC38, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         pcVar5 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar8 = (long*)( local_68 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar4 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar8 = (long*)( local_70 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         auVar3._8_4_ = local_54._8_4_;
         auVar3._0_8_ = local_54._0_8_;
         if (( StringName::configured != '\0' ) && ( local_54 = local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00103780;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   auVar2._8_4_ = local_54._8_4_;
   auVar2._0_8_ = local_54._0_8_;
   pVVar6 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar6 & 1 ) != 0) {
            pVVar6 = *(Variant**)( pVVar6 + *(long*)( (long)plVar8 + (long)pVVar1 ) + -1 );
         }

         local_54 = ( *(code*)pVVar6 )();
         Variant::Variant((Variant*)local_48, (Vector3*)local_54);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
         local_54 = auVar2;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00103780:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector3>::validated_call(MethodBindTRC<Vector3> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[12];
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0x35;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00103a7b;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar5 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1(*) [12])( param_3 + 8 ) = auVar5;
   LAB_00103a7b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector3>::ptrcall(MethodBindTRC<Vector3> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[12];
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0x35;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00103c8a;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar5 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1(*) [12])param_3 = auVar5;
   LAB_00103c8a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector3_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar4) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar3 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00104055;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00103e99. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00104055:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector3_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar2 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_38 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar3 = (long*)( local_40 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00104275;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001040b5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00104275:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   bool bVar4;
   long *plVar6;
   undefined4 in_register_00000014;
   long *plVar7;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar5;
   plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar7[1] == 0) {
         plVar6 = (long*)plVar7[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
         }

      }
 else {
         plVar6 = (long*)( plVar7[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC38, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar7 = (long*)( local_58 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar7 = (long*)( local_60 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00104340;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar5 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar5 & 1 ) != 0) {
            pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
         }

         bVar4 = (bool)( *(code*)pVVar5 )();
         Variant::Variant((Variant*)local_48, bVar4);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00104340:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   Variant VVar3;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar4;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001045a2;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar3 = ( Variant )(*pcVar4)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar3;
   LAB_001045a2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   undefined1 uVar3;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar4;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001047a1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar3;
   LAB_001047a1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar4) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar3 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00104b65;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001049a9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00104b65:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar2 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_38 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar3 = (long*)( local_40 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00104d85;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00104bce. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00104d85:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector3_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[12];
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined1 local_60[4][12];
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_78 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC38, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0);
         pcVar6 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar11 = (long*)( local_78 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

         lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar11 = (long*)( local_80 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         auVar4._8_4_ = local_60[0]._8_4_;
         auVar4._0_8_ = local_60[0]._0_8_;
         if (( StringName::configured != '\0' ) && ( local_60[0] = local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_00104f38;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00104f90;
         LAB_00104f80:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00104f90:uVar8 = 4;
            goto LAB_00104f2d;
         }

         if (in_R8D == 1) goto LAB_00104f80;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar7 = Variant::can_convert_strict(*(undefined4*)pVVar12, 9);
      uVar5 = _LC43;
      if (cVar7 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar5;
      }

      local_60[0] = Variant::operator_cast_to_Vector3(pVVar12);
      ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), local_60);
   }
 else {
      uVar8 = 3;
      LAB_00104f2d:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_00104f38:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0010529d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00105300;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00105300:uVar6 = 4;
         LAB_0010529d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0010521b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010521b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC45;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00105277. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC38, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00105366;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var4, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00105366:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* VelocityTracker3D::~VelocityTracker3D() */void VelocityTracker3D::~VelocityTracker3D(VelocityTracker3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

