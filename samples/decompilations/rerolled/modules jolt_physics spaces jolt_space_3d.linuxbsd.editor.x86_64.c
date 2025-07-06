/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltSpace3D::JoltSpace3D(JPH::JobSystem*)::{lambda(JPH::Body const&, JPH::SubShapeID const&,
   JPH::Body const&, JPH::SubShapeID const&)#1}::_FUN(JPH::Body const&, JPH::SubShapeID const&,
   JPH::Body const&, JPH::SubShapeID const&) */ulong JoltSpace3D::JoltSpace3D(JPH::JobSystem *) {
   lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const&,JPH::SubShapeID_const&)
   #1
   SubShapeID_const__(long param_1, undefined8 param_2, long param_3) {
      float fVar1;
      fVar1 = *(float*)( param_1 + 0x68 );
      if (*(float*)( param_3 + 0x68 ) <= *(float*)( param_1 + 0x68 )) {
         fVar1 = *(float*)( param_3 + 0x68 );
      }
      if (0.0 <= fVar1) {
         return (ulong)(uint)fVar1;
      }
      return CONCAT44(_UNK_00107f04, (uint)fVar1 ^ __LC1);
   }
   /* JoltSpace3D::JoltSpace3D(JPH::JobSystem*)::{lambda(JPH::Body const&, JPH::SubShapeID const&,
   JPH::Body const&, JPH::SubShapeID const&)#2}::_FUN(JPH::Body const&, JPH::SubShapeID const&,
   JPH::Body const&, JPH::SubShapeID const&) */
   float JoltSpace3D::JoltSpace3D(JPH::JobSystem *) {
      lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const&,JPH::SubShapeID_const&)
      #2
      SubShapeID_const__(long param_1, undefined8 param_2, long param_3) {
         float fVar1;
         float fVar2;
         fVar2 = *(float*)( param_1 + 0x6c ) + *(float*)( param_3 + 0x6c );
         if (0.0 <= fVar2) {
            fVar1 = _LC2;
            if (fVar2 <= _LC2) {
               fVar1 = fVar2;
            }
            return fVar1;
         }
         return 0.0;
      }
      /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
      void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
            } else {
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
            } while ( !bVar4 );
            if (lVar3 != -1) {
               *(undefined8*)this = *(undefined8*)param_1;
            }
         }
         return;
      }
      /* JoltSpace3D::_pre_step(float) */
      void JoltSpace3D::_pre_step(JoltSpace3D *this, float param_1) {
         uint *puVar1;
         long *plVar2;
         long lVar3;
         long lVar4;
         code *pcVar5;
         ulong uVar6;
         long lVar7;
         uint *puVar8;
         plVar2 = *(long**)( this + 0x30 );
         while (plVar2 != (long*)0x0) {
            lVar4 = plVar2[1];
            if ((JoltSpace3D*)*plVar2 == this + 0x30) {
               lVar7 = plVar2[2];
               if (lVar7 != 0) {
                  *(long*)( lVar7 + 0x18 ) = plVar2[3];
               }
               lVar3 = plVar2[3];
               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x10 ) = lVar7;
                  lVar7 = plVar2[2];
               }
               *(long*)( this + 0x30 ) = lVar7;
               if (plVar2 == *(long**)( this + 0x38 )) {
                  *(long*)( this + 0x38 ) = lVar3;
               }
               *plVar2 = 0;
               *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
            } else {
               _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
            }
            JoltShapedObject3D::commit_shapes(SUB81(lVar4, 0));
            plVar2 = *(long**)( this + 0x30 );
         };
         JoltContactListener3D::pre_step();
         lVar4 = *(long*)( this + 0x68 );
         puVar8 = *(uint**)( lVar4 + 0xb0 );
         puVar1 = puVar8 + *(uint*)( lVar4 + 0xc0 );
         if (*(uint*)( lVar4 + 0xc0 ) != 0) {
            do {
               uVar6 = ( ulong )(*puVar8 & 0x7fffff);
               if (( ( **(ulong**)( lVar4 + 0x128 ) <= uVar6 ) || ( uVar6 = *(ulong*)( ( *(ulong**)( lVar4 + 0x128 ) )[2] + uVar6 * 8 )(uVar6 & 1) != 0 ) ) || ( *puVar8 != *(uint*)( uVar6 + 0x70 ) )) {
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }
               pcVar5 = *(code**)( **(long**)( uVar6 + 0x50 ) + 0x78 );
               if (pcVar5 != JoltObject3D::pre_step) {
                  ( *pcVar5 )(param_1);
               }
               puVar8 = puVar8 + 1;
            } while ( puVar8 != puVar1 );
         }
         return;
      }
      /* JoltSpace3D::_post_step(float) */
      void JoltSpace3D::_post_step(float param_1) {
         long lVar1;
         long *plVar2;
         long lVar3;
         long in_RDI;
         JoltContactListener3D::post_step();
         plVar2 = *(long**)( in_RDI + 0x20 );
         if (plVar2 != (long*)0x0) {
            do {
               if (*plVar2 == in_RDI + 0x20) {
                  lVar3 = plVar2[2];
                  if (lVar3 != 0) {
                     *(long*)( lVar3 + 0x18 ) = plVar2[3];
                  }
                  lVar1 = plVar2[3];
                  if (lVar1 != 0) {
                     *(long*)( lVar1 + 0x10 ) = lVar3;
                     lVar3 = plVar2[2];
                  }
                  *(long*)( in_RDI + 0x20 ) = lVar3;
                  if (plVar2 == *(long**)( in_RDI + 0x28 )) {
                     *(long*)( in_RDI + 0x28 ) = lVar1;
                  }
                  *plVar2 = 0;
                  *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
               } else {
                  _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
               }
               JoltShapedObject3D::clear_previous_shape();
               plVar2 = *(long**)( in_RDI + 0x20 );
            } while ( plVar2 != (long*)0x0 );
         }
         return;
      }
      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      /* JoltSpace3D::JoltSpace3D(JPH::JobSystem*) */
      void JoltSpace3D::JoltSpace3D(JoltSpace3D *this, JobSystem *param_1) {
         ObjectVsBroadPhaseLayerFilter *pOVar1;
         long lVar2;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined8 uVar5;
         undefined8 uVar6;
         undefined2 uVar7;
         undefined1 uVar8;
         undefined1 uVar9;
         uint uVar10;
         uint uVar11;
         uint uVar12;
         undefined4 uVar13;
         undefined4 uVar14;
         JoltTempAllocator *this_00;
         JoltLayers *this_01;
         undefined8 *puVar15;
         undefined1(*pauVar16)[16];
         long lVar17;
         undefined4 uVar18;
         undefined4 uVar19;
         undefined4 uVar20;
         undefined4 uVar21;
         undefined4 uVar22;
         undefined4 uVar23;
         undefined4 uVar24;
         undefined4 uVar25;
         undefined4 uVar26;
         undefined4 uVar27;
         *(JobSystem**)( this + 0x48 ) = param_1;
         *(undefined1(*) [16])this = (undefined1[16])0x0;
         for (int i = 0; i < 3; i++) {
            *(undefined1(*) [16])( this + ( 16*i + 16 ) ) = (undefined1[16])0;
         }
         *(undefined8*)( this + 0x40 ) = 0;
         this_00 = (JoltTempAllocator*)( *JPH::Allocate )(0x20);
         JoltTempAllocator::JoltTempAllocator(this_00);
         *(JoltTempAllocator**)( this + 0x50 ) = this_00;
         this_01 = (JoltLayers*)operator_new(0x60);
         JoltLayers::JoltLayers(this_01);
         *(JoltLayers**)( this + 0x58 ) = this_01;
         puVar15 = (undefined8*)operator_new(0x100);
         uVar3 = _LC9;
         *(undefined8**)( this + 0x60 ) = puVar15;
         puVar15[0x1c] = this;
         puVar15[7] = uVar3;
         *puVar15 = JoltProjectSettings::get_max_contact_constraints;
         puVar15[1] = JoltProjectSettings::get_body_pair_cache_angle_cos_div2;
         for (int i = 0; i < 3; i++) {
            puVar15[( 5*i + 12 )] = uVar3;
         }
         *(undefined1(*) [16])( puVar15 + 0x19 ) = (undefined1[16])0x0;
         for (int i = 0; i < 4; i++) {
            *(undefined1(*) [16])( puVar15 + ( 5*i + 3 ) ) = (undefined1[16])0;
            *(undefined1(*) [16])( puVar15 + ( 5*i + 5 ) ) = (undefined1[16])0;
         }
         *(undefined1(*) [16])( puVar15 + 0x17 ) = (undefined1[16])0x0;
         puVar15[0x1b] = 0;
         *(undefined4*)( puVar15 + 0x19 ) = 1;
         puVar15[0x1e] = 0;
         *(undefined4*)( puVar15 + 0x1f ) = 0;
         pauVar16 = (undefined1(*) [16])( *JPH::Allocate )(0x420);
         *pauVar16 = (undefined1[16])0x0;
         *(undefined1(**) [16])( pauVar16[0x12] + 8 ) = pauVar16 + 1;
         *(undefined1(**) [16])( pauVar16[0x13] + 8 ) = pauVar16 + 1;
         *(undefined***)pauVar16[0x12] = &PTR__BodyLockInterfaceNoLock_00107b88;
         pauVar16[1] = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[3] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[4] + 8 ) = (undefined1[16])0x0;
         pauVar16[7] = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[8] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[9] + 8 ) = (undefined1[16])0x0;
         pauVar16[0xd] = (undefined1[16])0x0;
         pauVar16[0xe] = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0xf] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x10] + 8 ) = (undefined1[16])0x0;
         *(undefined***)pauVar16[0x13] = &PTR__BodyLockInterfaceLocking_00107bf0;
         pauVar16[0xb] = (undefined1[16])0x0;
         *(undefined8*)pauVar16[2] = 0;
         *(undefined4*)( pauVar16[2] + 8 ) = 0;
         *(undefined8*)pauVar16[3] = 0xffffffffffffffff;
         *(undefined8*)( pauVar16[5] + 8 ) = 0;
         *(undefined8*)pauVar16[6] = 0;
         *(undefined4*)( pauVar16[6] + 8 ) = 0;
         *(undefined8*)pauVar16[8] = 0;
         *(undefined8*)( pauVar16[10] + 8 ) = 0;
         *(undefined8*)pauVar16[0xc] = 0;
         *(undefined4*)( pauVar16[0xc] + 8 ) = 0;
         *(undefined8*)pauVar16[0xf] = 0;
         *(undefined8*)( pauVar16[0x11] + 8 ) = 0;
         *(undefined8*)pauVar16[0x14] = 0;
         *(undefined8*)( pauVar16[0x14] + 8 ) = 0;
         *(undefined8*)pauVar16[0x15] = 0;
         *(undefined8*)( pauVar16[0x15] + 8 ) = 0;
         *(undefined8*)pauVar16[0x16] = 0;
         uVar7 = _LC19;
         uVar3 = _LC13;
         uVar5 = _LC10;
         *(undefined8*)( pauVar16[0x16] + 8 ) = 0;
         *(undefined8*)( pauVar16[0x1d] + 4 ) = uVar3;
         uVar6 = _LC15;
         uVar4 = _UNK_00107f18;
         uVar3 = __LC11;
         *(undefined8*)( pauVar16[0x1a] + 8 ) = uVar5;
         *(undefined8*)pauVar16[0x1e] = uVar6;
         uVar6 = __LC2;
         *(undefined2*)( pauVar16[0x1f] + 8 ) = uVar7;
         *(undefined8*)( pauVar16[0x1e] + 8 ) = uVar6;
         *(undefined8*)( pauVar16[0x1b] + 4 ) = uVar3;
         *(undefined8*)( pauVar16[0x1b] + 0xc ) = uVar4;
         uVar4 = _UNK_00107f28;
         uVar3 = __LC12;
         *(undefined8*)pauVar16[0x17] = 0;
         for (int i = 0; i < 3; i++) {
            *(undefined8*)( pauVar16[( i + 23 )] + 8 ) = 0;
            *(undefined8*)pauVar16[( i + 24 )] = 0;
         }
         *(undefined4*)pauVar16[0x1b] = 1;
         *(undefined4*)( pauVar16[0x1d] + 0xc ) = 0x38d1b717;
         *(undefined4*)pauVar16[0x1f] = 0x3cf5c28f;
         *(undefined4*)( pauVar16[0x1f] + 4 ) = 0x1010101;
         pauVar16[0x1f][10] = 1;
         *(undefined8*)( pauVar16[0x1c] + 4 ) = uVar3;
         *(undefined8*)( pauVar16[0x1c] + 0xc ) = uVar4;
         JPH::ContactConstraintManager::ContactConstraintManager((ContactConstraintManager*)( pauVar16 + 0x20 ), (PhysicsSettings*)( pauVar16[0x1a] + 8 ));
         *(undefined1(*) [16])( pauVar16[0x2c] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x30] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x31] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x32] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x33] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x34] + 8 ) = (undefined1[16])0x0;
         pauVar16[0x38] = (undefined1[16])0x0;
         pauVar16[0x3e] = (undefined1[16])0x0;
         uVar4 = _UNK_00107f38;
         uVar3 = __LC20;
         pauVar16[0x2e] = (undefined1[16])0x0;
         pauVar16[0x2f] = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x36] + 4 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x3b] + 8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pauVar16[0x3c] + 8 ) = (undefined1[16])0x0;
         *(undefined8*)pauVar16[0x40] = uVar3;
         *(undefined8*)( pauVar16[0x40] + 8 ) = uVar4;
         *(undefined8*)( pauVar16[0x2d] + 8 ) = 0;
         *(undefined8*)pauVar16[0x30] = 0;
         *(undefined8*)( pauVar16[0x35] + 8 ) = 0;
         *(undefined8*)( pauVar16[0x37] + 4 ) = 0;
         *(undefined8*)pauVar16[0x39] = 0;
         *(undefined8*)( pauVar16[0x39] + 8 ) = 0;
         *(undefined4*)pauVar16[0x3a] = 0;
         *(undefined8*)( pauVar16[0x3a] + 8 ) = 0;
         *(undefined4*)pauVar16[0x3b] = 0;
         *(undefined8*)( pauVar16[0x3d] + 8 ) = 0;
         *(undefined8*)pauVar16[0x3f] = 0;
         *(undefined4*)pauVar16[0x41] = 0;
         *(undefined1(**) [16])( this + 0x68 ) = pauVar16;
         *(undefined2*)( this + 0x88 ) = 0;
         for (int i = 0; i < 3; i++) {
            *(undefined8*)( this + ( 8*i + 112 ) ) = 0;
         }
         pOVar1 = *(ObjectVsBroadPhaseLayerFilter**)( this + 0x58 );
         uVar10 = JoltProjectSettings::get_max_contact_constraints();
         uVar11 = JoltProjectSettings::get_max_pairs();
         uVar12 = JoltProjectSettings::get_max_bodies();
         JPH::PhysicsSystem::Init((uint)pauVar16, uVar12, 0, uVar11, (BroadPhaseLayerInterface*)(ulong)uVar10, pOVar1, (ObjectLayerPairFilter*)( pOVar1 + 0x10 ));
         uVar18 = JoltProjectSettings::get_baumgarte_stabilization_factor();
         uVar19 = JoltProjectSettings::get_speculative_contact_distance();
         uVar20 = JoltProjectSettings::get_penetration_slop();
         uVar21 = JoltProjectSettings::get_ccd_movement_threshold();
         uVar22 = JoltProjectSettings::get_ccd_max_penetration();
         uVar23 = JoltProjectSettings::get_body_pair_cache_distance_sq();
         uVar24 = JoltProjectSettings::get_body_pair_cache_angle_cos_div2();
         uVar13 = JoltProjectSettings::get_simulation_velocity_steps();
         uVar14 = JoltProjectSettings::get_simulation_position_steps();
         uVar25 = JoltProjectSettings::get_bounce_velocity_threshold();
         uVar26 = JoltProjectSettings::get_sleep_time_threshold();
         uVar27 = JoltProjectSettings::get_sleep_velocity_threshold();
         uVar8 = JoltProjectSettings::is_body_pair_contact_cache_enabled();
         uVar9 = JoltProjectSettings::is_sleep_allowed();
         uVar3 = _LC21;
         lVar2 = *(long*)( this + 0x68 );
         *(undefined1*)( lVar2 + 0x1f9 ) = uVar9;
         lVar17 = *(long*)( this + 0x60 );
         *(undefined2*)( lVar2 + 0x1f7 ) = 0x101;
         *(long*)( lVar2 + 0x298 ) = lVar17;
         if (lVar17 != 0) {
            lVar17 = lVar17 + 8;
         }
         *(undefined4*)( lVar2 + 0x1f0 ) = uVar27;
         *(undefined8*)( lVar2 + 0x1c8 ) = uVar3;
         *(long*)( lVar2 + 0x198 ) = lVar17;
         uVar3 = _LC22;
         *(undefined1(*) [16])( lVar2 + 0x400 ) = (undefined1[16])0x0;
         *(undefined8*)( lVar2 + 0x1a8 ) = uVar5;
         *(undefined4*)( lVar2 + 0x1e4 ) = uVar14;
         *(undefined2*)( lVar2 + 500 ) = uVar7;
         *(undefined1*)( lVar2 + 0x1f6 ) = uVar8;
         *(undefined4*)( lVar2 + 0x1b0 ) = 1;
         *(undefined8*)( lVar2 + 0x1d8 ) = uVar3;
         *(undefined4*)( lVar2 + 0x1e0 ) = uVar13;
         *(undefined1*)( lVar2 + 0x1fa ) = 1;
         *(ulong*)( lVar2 + 0x1b4 ) = CONCAT44(uVar19, uVar18);
         *(ulong*)( lVar2 + 0x1bc ) = CONCAT44(uVar21, uVar20);
         *(undefined4*)( lVar2 + 0x1c4 ) = uVar22;
         *(ulong*)( lVar2 + 0x1d0 ) = CONCAT44(uVar24, uVar23);
         *(ulong*)( lVar2 + 0x1e8 ) = CONCAT44(uVar26, uVar25);
         *(undefined8*)( lVar2 + 0x2a0 ) = 0x100000;
         *(code**)( lVar2 + 0x2a8 ) = JoltSpace3D(JPH::JobSystem * ::{lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const&,JPH::SubShapeID_const&)#2}::
       SubShapeID_const__;
  return;
}, /* JoltSpace3D::call_queries() */, void __thiscall JoltSpace3D::call_queries(JoltSpace3D *this), {
                  long *plVar1;
                  long lVar2;
                  long lVar3;
                  plVar1 = *(long**)this;
                  while (plVar1 != (long*)0x0) {
                     if (this == (JoltSpace3D*)*plVar1) {
                        lVar3 = plVar1[2];
                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 0x18 ) = plVar1[3];
                        }
                        lVar2 = plVar1[3];
                        if (lVar2 != 0) {
                           *(long*)( lVar2 + 0x10 ) = lVar3;
                           lVar3 = plVar1[2];
                        }
                        *(long*)this = lVar3;
                        if (*(long**)( this + 8 ) == plVar1) {
                           *(long*)( this + 8 ) = lVar2;
                        }
                        *plVar1 = 0;
                        *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
                     } else {
                        _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
                     }
                     JoltBody3D::call_queries();
                     plVar1 = *(long**)this;
                  };
                  plVar1 = *(long**)( this + 0x10 );
                  while (plVar1 != (long*)0x0) {
                     if ((JoltSpace3D*)*plVar1 == this + 0x10) {
                        lVar3 = plVar1[2];
                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 0x18 ) = plVar1[3];
                        }
                        lVar2 = plVar1[3];
                        if (lVar2 != 0) {
                           *(long*)( lVar2 + 0x10 ) = lVar3;
                           lVar3 = plVar1[2];
                        }
                        *(long*)( this + 0x10 ) = lVar3;
                        if (plVar1 == *(long**)( this + 0x18 )) {
                           *(long*)( this + 0x18 ) = lVar2;
                        }
                        *plVar1 = 0;
                        *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
                     } else {
                        _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
                     }
                     JoltArea3D::call_queries();
                     plVar1 = *(long**)( this + 0x10 );
                  };
                  return;
               }, /* JoltSpace3D::get_body_iface() */, long __thiscall JoltSpace3D::get_body_iface(JoltSpace3D *this) * (long*)( this + 0x68 ) + 0x140);
      }
      /* JoltSpace3D::get_body_iface() const */
      long JoltSpace3D::get_body_iface(JoltSpace3D *this) {
         return *(long*)( this + 0x68 ) + 0x140;
      }
      /* JoltSpace3D::get_lock_iface() const */
      long JoltSpace3D::get_lock_iface(JoltSpace3D *this) {
         return *(long*)( this + 0x68 ) + 0x120;
      }
      /* JoltSpace3D::get_broad_phase_query() const */
      undefined8 JoltSpace3D::get_broad_phase_query(JoltSpace3D *this) {
         return *(undefined8*)( *(long*)( this + 0x68 ) + 400 );
      }
      /* JoltSpace3D::get_narrow_phase_query() const */
      long JoltSpace3D::get_narrow_phase_query(JoltSpace3D *this) {
         return *(long*)( this + 0x68 ) + 0x170;
      }
      /* JoltSpace3D::map_to_object_layer(JPH::BroadPhaseLayer, unsigned int, unsigned int) */
      void JoltSpace3D::map_to_object_layer(long param_1) {
         JoltLayers::to_object_layer(*(undefined8*)( param_1 + 0x58 ));
         return;
      }
      /* JoltSpace3D::map_from_object_layer(unsigned short, JPH::BroadPhaseLayer&, unsigned int&, unsigned
   int&) const */
      void JoltSpace3D::map_from_object_layer(ushort param_1, BroadPhaseLayer *param_2, uint *param_3, uint *param_4) {
         undefined6 in_register_0000003a;
         JoltLayers::from_object_layer(( ushort ) * (undefined8*)( CONCAT62(in_register_0000003a, param_1) + 0x58 ), (BroadPhaseLayer*)( (ulong)param_2 & 0xffff ), param_3, param_4);
         return;
      }
      /* JoltSpace3D::read_body(JPH::BodyID const&) const */
      JoltSpace3D * JoltSpace3D::read_body(JoltSpace3D * this, BodyID * param_1);
      {
         undefined8 uVar1;
         JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)this, (JoltSpace3D*)param_1);
         JoltBodyAccessor3D::acquire((BodyID*)this);
         uVar1 = JoltBodyReader3D::try_get();
         *(undefined8*)( this + 0x40 ) = uVar1;
         return this;
      }
      /* JoltSpace3D::read_body(JoltObject3D const&) const */
      JoltSpace3D * JoltSpace3D::read_body(JoltSpace3D * this, JoltObject3D * param_1);
      {
         long lVar1;
         undefined8 uVar2;
         long in_FS_OFFSET;
         lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
         JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)this, (JoltSpace3D*)param_1);
         JoltBodyAccessor3D::acquire((BodyID*)this);
         uVar2 = JoltBodyReader3D::try_get();
         *(undefined8*)( this + 0x40 ) = uVar2;
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return this;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::write_body(JPH::BodyID const&) const */
      JoltSpace3D * JoltSpace3D::write_body(JoltSpace3D * this, BodyID * param_1);
      {
         undefined8 uVar1;
         JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D*)this, (JoltSpace3D*)param_1);
         JoltBodyAccessor3D::acquire((BodyID*)this);
         uVar1 = JoltBodyWriter3D::try_get();
         *(undefined8*)( this + 0x40 ) = uVar1;
         return this;
      }
      /* JoltSpace3D::write_body(JoltObject3D const&) const */
      JoltSpace3D * JoltSpace3D::write_body(JoltSpace3D * this, JoltObject3D * param_1);
      {
         long lVar1;
         undefined8 uVar2;
         long in_FS_OFFSET;
         lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
         JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D*)this, (JoltSpace3D*)param_1);
         JoltBodyAccessor3D::acquire((BodyID*)this);
         uVar2 = JoltBodyWriter3D::try_get();
         *(undefined8*)( this + 0x40 ) = uVar2;
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return this;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::read_bodies(JPH::BodyID const*, int) const */
      JoltSpace3D * JoltSpace3D::read_bodies(JoltSpace3D * this, BodyID * param_1, int, param_2);
      {
         JoltBodyReader3D::JoltBodyReader3D((JoltBodyReader3D*)this, (JoltSpace3D*)param_1);
         JoltBodyAccessor3D::acquire((BodyID*)this, param_2);
         return this;
      }
      /* JoltSpace3D::write_bodies(JPH::BodyID const*, int) const */
      JoltSpace3D * JoltSpace3D::write_bodies(JoltSpace3D * this, BodyID * param_1, int, param_2);
      {
         JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D*)this, (JoltSpace3D*)param_1);
         JoltBodyAccessor3D::acquire((BodyID*)this, param_2);
         return this;
      }
      /* JoltSpace3D::get_direct_state() */
      JoltPhysicsDirectSpaceState3D * JoltSpace3D::get_direct_state(JoltSpace3D * this);
      {
         JoltPhysicsDirectSpaceState3D *this_00;
         if (*(JoltPhysicsDirectSpaceState3D**)( this + 0x70 ) != (JoltPhysicsDirectSpaceState3D*)0x0) {
            return *(JoltPhysicsDirectSpaceState3D**)( this + 0x70 );
         }
         this_00 = (JoltPhysicsDirectSpaceState3D*)operator_new(0x180, "");
         JoltPhysicsDirectSpaceState3D::JoltPhysicsDirectSpaceState3D(this_00, this);
         postinitialize_handler((Object*)this_00);
         *(JoltPhysicsDirectSpaceState3D**)( this + 0x70 ) = this_00;
         return this_00;
      }
      /* JoltSpace3D::set_default_area(JoltArea3D*) */
      void JoltSpace3D::set_default_area(JoltSpace3D *this, JoltArea3D *param_1) {
         JoltArea3D *pJVar1;
         pJVar1 = *(JoltArea3D**)( this + 0x78 );
         if (pJVar1 != param_1) {
            if (pJVar1 != (JoltArea3D*)0x0) {
               JoltArea3D::set_default_area(SUB81(pJVar1, 0));
            }
            *(JoltArea3D**)( this + 0x78 ) = param_1;
            if (param_1 != (JoltArea3D*)0x0) {
               JoltArea3D::set_default_area(SUB81(param_1, 0));
               return;
            }
         }
         return;
      }
      /* JoltSpace3D::remove_body(JPH::BodyID const&) */
      void JoltSpace3D::remove_body(BodyID *param_1) {
         long lVar1;
         lVar1 = *(long*)( param_1 + 0x68 );
         JPH::BodyInterface::RemoveBody((BodyID*)( lVar1 + 0x140 ));
         JPH::BodyInterface::DestroyBody((BodyID*)( lVar1 + 0x140 ));
         return;
      }
      /* JoltSpace3D::try_optimize() */
      void JoltSpace3D::try_optimize(JoltSpace3D *this) {
         if (*(int*)( this + 0x84 ) < 0x80) {
            return;
         }
         JPH::PhysicsSystem::OptimizeBroadPhase();
         *(undefined4*)( this + 0x84 ) = 0;
         return;
      }
      /* JoltSpace3D::enqueue_call_queries(SelfList<JoltBody3D>*) */
      void JoltSpace3D::enqueue_call_queries(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         if (*(long*)param_1 != 0) {
            return;
         }
         lVar1 = *(long*)this;
         *(JoltSpace3D**)param_1 = this;
         *(undefined8*)( param_1 + 0x18 ) = 0;
         *(long*)( param_1 + 0x10 ) = lVar1;
         if (lVar1 == 0) {
            *(SelfList**)( this + 8 ) = param_1;
         } else {
            *(SelfList**)( lVar1 + 0x18 ) = param_1;
         }
         *(SelfList**)this = param_1;
         return;
      }
      /* JoltSpace3D::enqueue_call_queries(SelfList<JoltArea3D>*) */
      void JoltSpace3D::enqueue_call_queries(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         if (*(long*)param_1 != 0) {
            return;
         }
         *(JoltSpace3D**)param_1 = this + 0x10;
         lVar1 = *(long*)( this + 0x10 );
         *(undefined8*)( param_1 + 0x18 ) = 0;
         *(long*)( param_1 + 0x10 ) = lVar1;
         if (lVar1 == 0) {
            *(SelfList**)( this + 0x18 ) = param_1;
         } else {
            *(SelfList**)( lVar1 + 0x18 ) = param_1;
         }
         *(SelfList**)( this + 0x10 ) = param_1;
         return;
      }
      /* JoltSpace3D::dequeue_call_queries(SelfList<JoltBody3D>*) */
      void JoltSpace3D::dequeue_call_queries(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         long lVar2;
         if (*(JoltSpace3D**)param_1 != (JoltSpace3D*)0x0) {
            if (this != *(JoltSpace3D**)param_1) {
               _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
               return;
            }
            lVar1 = *(long*)( param_1 + 0x10 );
            if (lVar1 != 0) {
               *(undefined8*)( lVar1 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
            }
            lVar2 = *(long*)( param_1 + 0x18 );
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar1;
            }
            if (param_1 == *(SelfList**)this) {
               *(undefined8*)this = *(undefined8*)( param_1 + 0x10 );
            }
            if (param_1 == *(SelfList**)( this + 8 )) {
               *(long*)( this + 8 ) = lVar2;
            }
            *(undefined8*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
         }
         return;
      }
      /* JoltSpace3D::dequeue_call_queries(SelfList<JoltArea3D>*) */
      void JoltSpace3D::dequeue_call_queries(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         long lVar2;
         if (*(JoltSpace3D**)param_1 != (JoltSpace3D*)0x0) {
            if (*(JoltSpace3D**)param_1 != this + 0x10) {
               _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
               return;
            }
            lVar1 = *(long*)( param_1 + 0x10 );
            if (lVar1 != 0) {
               *(undefined8*)( lVar1 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
            }
            lVar2 = *(long*)( param_1 + 0x18 );
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar1;
            }
            if (param_1 == *(SelfList**)( this + 0x10 )) {
               *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
            }
            if (param_1 == *(SelfList**)( this + 0x18 )) {
               *(long*)( this + 0x18 ) = lVar2;
            }
            *(undefined8*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
         }
         return;
      }
      /* JoltSpace3D::enqueue_shapes_changed(SelfList<JoltShapedObject3D>*) */
      void JoltSpace3D::enqueue_shapes_changed(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         if (*(long*)param_1 != 0) {
            return;
         }
         *(JoltSpace3D**)param_1 = this + 0x20;
         lVar1 = *(long*)( this + 0x20 );
         *(undefined8*)( param_1 + 0x18 ) = 0;
         *(long*)( param_1 + 0x10 ) = lVar1;
         if (lVar1 == 0) {
            *(SelfList**)( this + 0x28 ) = param_1;
         } else {
            *(SelfList**)( lVar1 + 0x18 ) = param_1;
         }
         *(SelfList**)( this + 0x20 ) = param_1;
         return;
      }
      /* JoltSpace3D::dequeue_shapes_changed(SelfList<JoltShapedObject3D>*) */
      void JoltSpace3D::dequeue_shapes_changed(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         long lVar2;
         if (*(JoltSpace3D**)param_1 != (JoltSpace3D*)0x0) {
            if (*(JoltSpace3D**)param_1 != this + 0x20) {
               _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
               return;
            }
            lVar1 = *(long*)( param_1 + 0x10 );
            if (lVar1 != 0) {
               *(undefined8*)( lVar1 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
            }
            lVar2 = *(long*)( param_1 + 0x18 );
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar1;
            }
            if (param_1 == *(SelfList**)( this + 0x20 )) {
               *(undefined8*)( this + 0x20 ) = *(undefined8*)( param_1 + 0x10 );
            }
            if (param_1 == *(SelfList**)( this + 0x28 )) {
               *(long*)( this + 0x28 ) = lVar2;
            }
            *(undefined8*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
         }
         return;
      }
      /* JoltSpace3D::enqueue_needs_optimization(SelfList<JoltShapedObject3D>*) */
      void JoltSpace3D::enqueue_needs_optimization(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         if (*(long*)param_1 != 0) {
            return;
         }
         *(JoltSpace3D**)param_1 = this + 0x30;
         lVar1 = *(long*)( this + 0x30 );
         *(undefined8*)( param_1 + 0x18 ) = 0;
         *(long*)( param_1 + 0x10 ) = lVar1;
         if (lVar1 == 0) {
            *(SelfList**)( this + 0x38 ) = param_1;
         } else {
            *(SelfList**)( lVar1 + 0x18 ) = param_1;
         }
         *(SelfList**)( this + 0x30 ) = param_1;
         return;
      }
      /* JoltSpace3D::dequeue_needs_optimization(SelfList<JoltShapedObject3D>*) */
      void JoltSpace3D::dequeue_needs_optimization(JoltSpace3D *this, SelfList *param_1) {
         long lVar1;
         long lVar2;
         if (*(JoltSpace3D**)param_1 != (JoltSpace3D*)0x0) {
            if (*(JoltSpace3D**)param_1 != this + 0x30) {
               _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
               return;
            }
            lVar1 = *(long*)( param_1 + 0x10 );
            if (lVar1 != 0) {
               *(undefined8*)( lVar1 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
            }
            lVar2 = *(long*)( param_1 + 0x18 );
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar1;
            }
            if (param_1 == *(SelfList**)( this + 0x30 )) {
               *(undefined8*)( this + 0x30 ) = *(undefined8*)( param_1 + 0x10 );
            }
            if (param_1 == *(SelfList**)( this + 0x38 )) {
               *(long*)( this + 0x38 ) = lVar2;
            }
            *(undefined8*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
         }
         return;
      }
      /* JoltSpace3D::add_joint(JPH::Constraint*) */
      void JoltSpace3D::add_joint(JoltSpace3D *this, Constraint *param_1) {
         long in_FS_OFFSET;
         Constraint *local_18;
         long local_10;
         local_10 = *(long*)( in_FS_OFFSET + 0x28 );
         local_18 = param_1;
         JPH::ConstraintManager::Add((Constraint**)( *(long*)( this + 0x68 ) + 0x2c8 ), (int)&local_18);
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::add_joint(JoltJoint3D*) */
      void JoltSpace3D::add_joint(JoltSpace3D *this, JoltJoint3D *param_1) {
         long in_FS_OFFSET;
         undefined8 local_18;
         long local_10;
         local_10 = *(long*)( in_FS_OFFSET + 0x28 );
         local_18 = *(undefined8*)( param_1 + 0x18 );
         JPH::ConstraintManager::Add((Constraint**)( *(long*)( this + 0x68 ) + 0x2c8 ), (int)&local_18);
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::remove_joint(JPH::Constraint*) */
      void JoltSpace3D::remove_joint(JoltSpace3D *this, Constraint *param_1) {
         long in_FS_OFFSET;
         Constraint *local_18;
         long local_10;
         local_10 = *(long*)( in_FS_OFFSET + 0x28 );
         local_18 = param_1;
         JPH::ConstraintManager::Remove((Constraint**)( *(long*)( this + 0x68 ) + 0x2c8 ), (int)&local_18);
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::remove_joint(JoltJoint3D*) */
      void JoltSpace3D::remove_joint(JoltSpace3D *this, JoltJoint3D *param_1) {
         long in_FS_OFFSET;
         undefined8 local_18;
         long local_10;
         local_10 = *(long*)( in_FS_OFFSET + 0x28 );
         local_18 = *(undefined8*)( param_1 + 0x18 );
         JPH::ConstraintManager::Remove((Constraint**)( *(long*)( this + 0x68 ) + 0x2c8 ), (int)&local_18);
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::get_debug_contacts() const */
      long JoltSpace3D::get_debug_contacts(JoltSpace3D *this) {
         return *(long*)( this + 0x60 ) + 0xe8;
      }
      /* JoltSpace3D::get_debug_contact_count() const */
      undefined4 JoltSpace3D::get_debug_contact_count(JoltSpace3D *this) {
         return *(undefined4*)( *(long*)( this + 0x60 ) + 0xf8 );
      }
      /* JoltSpace3D::get_max_debug_contacts() const */
      undefined4 JoltSpace3D::get_max_debug_contacts(JoltSpace3D *this) {
         if (*(long*)( *(long*)( this + 0x60 ) + 0xf0 ) != 0) {
            return *(undefined4*)( *(long*)( *(long*)( this + 0x60 ) + 0xf0 ) + -8 );
         }
         return 0;
      }
      /* JoltSpace3D::step(float) */
      void JoltSpace3D::step(JoltSpace3D *this, float param_1) {
         long *plVar1;
         long lVar2;
         char *pcVar3;
         uint uVar4;
         long in_FS_OFFSET;
         long local_60;
         char *local_58;
         undefined8 local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         this[0x89] = (JoltSpace3D)0x1;
         *(float*)( this + 0x80 ) = param_1;
         _pre_step(this, param_1);
         uVar4 = JPH::PhysicsSystem::Update(param_1, (int)*(undefined8*)( this + 0x68 ), (TempAllocator*)0x1, *(JobSystem**)( this + 0x50 ));
         if (( ( uVar4 & 1 ) != 0 ) && ( step(float):: )) {
            JoltProjectSettings::get_max_contact_constraints();
            local_60 = 0;
            local_58 = "Jolt Physics manifold cache exceeded capacity and contacts were ignored. Consider increasing maximum number of contact constraints in project settings. Maximum number of contact constraints is currently set to %d.";
            local_50 = 0xd5;
            String::parse_latin1((StrRange*)&local_60);
            vformat<int>((String*)&local_58, (int)(StrRange*)&local_60);
            _err_print_error(&_LC37, "modules/jolt_physics/spaces/jolt_space_3d.cpp", 0xa9, (String*)&local_58, 0, 1);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            step(float)::first_print =
            '\0';
         }
         if (( ( uVar4 & 2 ) != 0 ) && ( step(float):: )) {
            JoltProjectSettings::get_max_pairs();
            local_60 = 0;
            local_58 = "Jolt Physics body pair cache exceeded capacity and contacts were ignored. Consider increasing maximum number of body pairs in project settings. Maximum number of body pairs is currently set to %d.";
            local_50 = 0xc4;
            String::parse_latin1((StrRange*)&local_60);
            vformat<int>((String*)&local_58, (int)(StrRange*)&local_60);
            _err_print_error(&_LC37, "modules/jolt_physics/spaces/jolt_space_3d.cpp", 0xb0, (String*)&local_58, 0, 1);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            step(float)::first_print =
            '\0';
         }
         if (( ( uVar4 & 4 ) != 0 ) && ( step(float):: )) {
            JoltProjectSettings::get_max_contact_constraints();
            local_60 = 0;
            local_58 = "Jolt Physics contact constraint buffer exceeded capacity and contacts were ignored. Consider increasing maximum number of contact constraints in project settings. Maximum number of contact constraints is currently set to %d.";
            local_50 = 0xe0;
            String::parse_latin1((StrRange*)&local_60);
            vformat<int>((String*)&local_58, (int)(StrRange*)&local_60);
            _err_print_error(&_LC37, "modules/jolt_physics/spaces/jolt_space_3d.cpp", 0xb7, (String*)&local_58, 0, 1);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            step(float)::first_print =
            '\0';
         }
         _post_step(param_1);
         this[0x89] = (JoltSpace3D)0x0;
         *(undefined4*)( this + 0x84 ) = 0;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::get_param(PhysicsServer3D::SpaceParameter) const */
      double JoltSpace3D::get_param(undefined8 param_1, undefined4 param_2) {
         long *plVar1;
         long lVar2;
         char *pcVar3;
         long in_FS_OFFSET;
         float fVar4;
         double dVar5;
         long local_40;
         char *local_38;
         undefined8 local_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         switch (param_2) {
            case 0:
            case 2:
    dVar5 = _LC40;
    break;
            case 1:
    dVar5 = _LC41;
    break;
            case 3:
    dVar5 = _LC43;
    break;
            case 4:
    dVar5 = _LC44;
    break;
            case 5:
    dVar5 = _LC45;
    break;
            case 6:
    fVar4 = (float)JoltProjectSettings::get_sleep_time_threshold();
    dVar5 = (double)fVar4;
    break;
            case 7:
    dVar5 = _LC46;
    break;
            default:
    local_40 = 0;
    local_30 = 0x4c;
    local_38 = "Unhandled space parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::SpaceParameter>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_param","modules/jolt_physics/spaces/jolt_space_3d.cpp",0xec,
                     "Method/function failed. Returning: 0.0",&local_38,0);
    pcVar3 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    dVar5 = 0.0;
         }
         if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         return dVar5;
      }
      /* JoltSpace3D::set_param(PhysicsServer3D::SpaceParameter, double) */
      void JoltSpace3D::set_param(undefined8 param_1, undefined4 param_2) {
         long *plVar1;
         long lVar2;
         char *pcVar3;
         undefined8 uVar4;
         long in_FS_OFFSET;
         long local_40;
         char *local_38;
         undefined8 local_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         switch (param_2) {
            case 0:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xf4;
      pcVar3 = 
      "Space-specific contact recycle radius is not supported when using Jolt Physics. Any such value will be ignored."
      ;
LAB_00101829:
      _err_print_error("set_param","modules/jolt_physics/spaces/jolt_space_3d.cpp",uVar4,pcVar3,0,1)
      ;
      return;
    }
    break;
            case 1:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xf7;
      pcVar3 = 
      "Space-specific contact max separation is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            case 2:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xfa;
      pcVar3 = 
      "Space-specific contact max allowed penetration is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            case 3:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xfd;
      pcVar3 = 
      "Space-specific contact default bias is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            case 4:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x100;
      pcVar3 = 
      "Space-specific linear velocity sleep threshold is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            case 5:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x103;
      pcVar3 = 
      "Space-specific angular velocity sleep threshold is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            case 6:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x106;
      pcVar3 = 
      "Space-specific body sleep time is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            case 7:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x109;
      pcVar3 = 
      "Space-specific solver iterations is not supported when using Jolt Physics. Any such value will be ignored."
      ;
      goto LAB_00101829;
    }
    break;
            default:
    local_40 = 0;
    local_30 = 0x4c;
    local_38 = "Unhandled space parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::SpaceParameter>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("set_param","modules/jolt_physics/spaces/jolt_space_3d.cpp",0x10c,
                     "Method/function failed.",&local_38,0);
    pcVar3 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::add_rigid_body(JoltObject3D const&, JPH::BodyCreationSettings const&, bool) */
      undefined8 JoltSpace3D::add_rigid_body(JoltSpace3D *this, JoltObject3D *param_1, BodyCreationSettings *param_2, bool param_3) {
         long *plVar1;
         long lVar2;
         char *pcVar3;
         undefined4 uVar4;
         undefined8 uVar5;
         long in_FS_OFFSET;
         long local_58;
         long local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar5 = JPH::BodyInterface::CreateAndAddBody(*(long*)( this + 0x68 ) + 0x140, param_2, param_3);
         if ((int)uVar5 == -1) {
            if (add_rigid_body(JoltObject3D_const & JPH::BodyCreationSettings_const & ::first_print != '\0') {
               uVar4 = JoltProjectSettings::get_max_bodies();
               JoltObject3D::to_string();
               local_48 = "Failed to create underlying Jolt Physics body for \'%s\'. Consider increasing maximum number of bodies in project settings. Maximum number of bodies is currently set to %d.";
               local_50 = 0;
               local_40 = 0xaa;
               String::parse_latin1((StrRange*)&local_50);
               vformat<String,int>(&local_48, (StrRange*)&local_50, &local_58, uVar4);
               _err_print_error("add_rigid_body", "modules/jolt_physics/spaces/jolt_space_3d.cpp", 0x161, &local_48, 0, 0);
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
               lVar2 = local_58;
               if (local_58 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               add_rigid_body(JoltObject3D_const&,JPH::BodyCreationSettings_const&,bool)::first_print =
               '\0';
            }
            uVar5 = 0xffffffff;
         } else {
            *(int*)( this + 0x84 ) = *(int*)( this + 0x84 ) + 1;
         }
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar5;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::add_soft_body(JoltObject3D const&, JPH::SoftBodyCreationSettings const&, bool) */
      undefined8 JoltSpace3D::add_soft_body(JoltSpace3D *this, JoltObject3D *param_1, SoftBodyCreationSettings *param_2, bool param_3) {
         long *plVar1;
         long lVar2;
         char *pcVar3;
         undefined4 uVar4;
         undefined8 uVar5;
         long in_FS_OFFSET;
         long local_58;
         long local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar5 = JPH::BodyInterface::CreateAndAddSoftBody(*(long*)( this + 0x68 ) + 0x140, param_2, param_3);
         if ((int)uVar5 == -1) {
            if (add_soft_body(JoltObject3D_const & JPH::SoftBodyCreationSettings_const & ::first_print != '\0') {
               uVar4 = JoltProjectSettings::get_max_bodies();
               JoltObject3D::to_string();
               local_48 = "Failed to create underlying Jolt Physics body for \'%s\'. Consider increasing maximum number of bodies in project settings. Maximum number of bodies is currently set to %d.";
               local_50 = 0;
               local_40 = 0xaa;
               String::parse_latin1((StrRange*)&local_50);
               vformat<String,int>(&local_48, (StrRange*)&local_50, &local_58, uVar4);
               _err_print_error("add_soft_body", "modules/jolt_physics/spaces/jolt_space_3d.cpp", 0x172, &local_48, 0, 0);
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
               lVar2 = local_58;
               if (local_58 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               add_soft_body(JoltObject3D_const&,JPH::SoftBodyCreationSettings_const&,bool)::first_print =
               '\0';
            }
            uVar5 = 0xffffffff;
         } else {
            *(int*)( this + 0x84 ) = *(int*)( this + 0x84 ) + 1;
         }
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar5;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* JoltSpace3D::set_max_debug_contacts(int) */
      void JoltSpace3D::set_max_debug_contacts(JoltSpace3D *this, int param_1) {
         long *plVar1;
         code *pcVar2;
         int iVar3;
         ulong uVar4;
         undefined8 *puVar5;
         ulong uVar6;
         char *pcVar7;
         size_t __n;
         undefined8 uVar8;
         long lVar9;
         long lVar10;
         undefined8 *puVar11;
         long lVar12;
         long lVar13;
         lVar9 = (long)param_1;
         lVar12 = *(long*)( this + 0x60 );
         if (lVar9 < 0) {
            uVar8 = 0x157;
            pcVar7 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
            goto LAB_00102012;
         }
         lVar10 = *(long*)( lVar12 + 0xf0 );
         if (lVar10 == 0) {
            lVar13 = 0;
            if (lVar9 == 0) {
               return;
            }
            LAB_00101f58:uVar6 = lVar9 * 0xc - 1;
            uVar6 = uVar6 >> 1 | uVar6;
            uVar6 = uVar6 >> 2 | uVar6;
            uVar6 = uVar6 | uVar6 >> 4;
            uVar6 = uVar6 >> 8 | uVar6;
            uVar6 = uVar6 >> 0x10 | uVar6;
            lVar10 = ( uVar6 >> 0x20 | uVar6 ) + 1;
            if (lVar13 < lVar9) {
               LAB_00101fc0:if (lVar13 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(lVar10 + 0x10, false);
                  if (puVar5 == (undefined8*)0x0) {
                     uVar8 = 0x171;
                     pcVar7 = "Parameter \"mem_new\" is null.";
                     LAB_00102012:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
                     return;
                  }
                  puVar11 = puVar5 + 2;
                  *puVar5 = 1;
                  puVar5[1] = 0;
                  *(undefined8**)( lVar12 + 0xf0 ) = puVar11;
                  lVar12 = 0;
                  goto LAB_00101ecb;
               }
               iVar3 = CowData<Vector3>::_realloc((CowData<Vector3>*)( lVar12 + 0xf0 ), lVar10);
               if (iVar3 != 0) {
                  return;
               }
               LAB_00101eb6:puVar11 = *(undefined8**)( lVar12 + 0xf0 );
               if (puVar11 == (undefined8*)0x0) {
                  JoltSpace3D_set_max_debug_contacts:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
               lVar12 = puVar11[-1];
               LAB_00101ecb:if (lVar12 < lVar9) {
                  memset((void*)( (long)puVar11 + lVar12 * 0xc ), 0, ( lVar9 - lVar12 ) * 0xc);
               }
               puVar11[-1] = lVar9;
               return;
            }
         } else {
            lVar13 = *(long*)( lVar10 + -8 );
            if (lVar9 == lVar13) {
               return;
            }
            if (lVar9 == 0) {
               LOCK();
               plVar1 = (long*)( lVar10 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) {
                  *(undefined8*)( lVar12 + 0xf0 ) = 0;
                  return;
               }
               lVar9 = *(long*)( lVar12 + 0xf0 );
               *(undefined8*)( lVar12 + 0xf0 ) = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
               return;
            }
            if (1 < *(ulong*)( lVar10 + -0x10 )) {
               if (*(long*)( lVar12 + 0xf0 ) == 0) goto JoltSpace3D_set_max_debug_contacts;
               lVar10 = *(long*)( *(long*)( lVar12 + 0xf0 ) + -8 );
               uVar6 = 0x10;
               __n = lVar10 * 0xc;
               if (__n != 0) {
                  uVar6 = __n - 1 | __n - 1 >> 1;
                  uVar6 = uVar6 | uVar6 >> 2;
                  uVar6 = uVar6 | uVar6 >> 4;
                  uVar6 = uVar6 | uVar6 >> 8;
                  uVar6 = uVar6 | uVar6 >> 0x10;
                  uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
               }
               puVar5 = (undefined8*)Memory::alloc_static(uVar6, false);
               if (puVar5 == (undefined8*)0x0) {
                  _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
               } else {
                  *puVar5 = 1;
                  puVar5[1] = lVar10;
                  memcpy(puVar5 + 2, *(void**)( lVar12 + 0xf0 ), __n);
                  if (*(long*)( lVar12 + 0xf0 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar12 + 0xf0 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar10 = *(long*)( lVar12 + 0xf0 );
                        *(undefined8*)( lVar12 + 0xf0 ) = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }
                  }
                  *(undefined8**)( lVar12 + 0xf0 ) = puVar5 + 2;
               }
            }
            uVar6 = lVar9 * 0xc - 1;
            uVar6 = uVar6 >> 1 | uVar6;
            uVar6 = uVar6 >> 2 | uVar6;
            uVar6 = uVar6 >> 4 | uVar6;
            uVar6 = uVar6 >> 8 | uVar6;
            uVar6 = uVar6 >> 0x10 | uVar6;
            uVar6 = uVar6 >> 0x20 | uVar6;
            lVar10 = uVar6 + 1;
            if (lVar13 * 0xc == 0) goto LAB_00101f58;
            uVar4 = lVar13 * 0xc - 1;
            uVar4 = uVar4 | uVar4 >> 1;
            uVar4 = uVar4 | uVar4 >> 2;
            uVar4 = uVar4 | uVar4 >> 4;
            uVar4 = uVar4 | uVar4 >> 8;
            uVar4 = uVar4 | uVar4 >> 0x10;
            uVar4 = uVar4 | uVar4 >> 0x20;
            if (lVar13 < lVar9) {
               if (uVar4 != uVar6) goto LAB_00101fc0;
               goto LAB_00101eb6;
            }
            if (uVar4 == uVar6) goto LAB_00101f2d;
         }
         iVar3 = CowData<Vector3>::_realloc((CowData<Vector3>*)( lVar12 + 0xf0 ), lVar10);
         if (iVar3 != 0) {
            return;
         }
         LAB_00101f2d:if (*(long*)( lVar12 + 0xf0 ) != 0) {
            *(long*)( *(long*)( lVar12 + 0xf0 ) + -8 ) = lVar9;
            return;
         }
         FUN_00104b52();
         return;
      }
      /* WARNING: Type propagation algorithm not settling */
      /* JoltSpace3D::dump_debug_snapshot(String const&) */
      void JoltSpace3D::dump_debug_snapshot(JoltSpace3D *this, String *param_1) {
         long *plVar1;
         long *plVar2;
         long *plVar3;
         undefined **ppuVar4;
         undefined8 uVar5;
         long lVar6;
         long lVar7;
         Object *pOVar8;
         char *pcVar9;
         undefined **ppuVar10;
         char cVar11;
         int iVar12;
         undefined4 uVar13;
         Variant *pVVar14;
         long lVar15;
         long in_FS_OFFSET;
         bool bVar16;
         Variant local_260[8];
         long *local_258;
         char *local_250;
         Object *local_248;
         long local_240;
         char *local_238;
         char *local_230;
         undefined **local_228;
         Object *local_220;
         long *local_218;
         undefined8 local_210;
         undefined1 local_208[16];
         undefined1 local_1f8[16];
         undefined1 local_1e8[16];
         undefined1 local_1d8[16];
         undefined1 local_1c8[16];
         int local_1b8[8];
         int local_198[8];
         int local_178[8];
         int local_158[8];
         int local_138[8];
         int local_118[8];
         int local_f8[8];
         int local_d8[8];
         int local_b8[8];
         int local_98[8];
         int local_78[8];
         int local_58[6];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         Time::get_singleton();
         Time::get_datetime_dict_from_system(SUB81(local_260, 0));
         Variant::Variant((Variant*)local_118, "second");
         pVVar14 = (Variant*)Dictionary::operator [](local_260);
         Variant::Variant((Variant*)local_58, pVVar14);
         Variant::Variant((Variant*)local_138, "minute");
         pVVar14 = (Variant*)Dictionary::operator [](local_260);
         Variant::Variant((Variant*)local_78, pVVar14);
         Variant::Variant((Variant*)local_158, "hour");
         pVVar14 = (Variant*)Dictionary::operator [](local_260);
         Variant::Variant((Variant*)local_98, pVVar14);
         Variant::Variant((Variant*)local_178, "day");
         pVVar14 = (Variant*)Dictionary::operator [](local_260);
         Variant::Variant((Variant*)local_b8, pVVar14);
         Variant::Variant((Variant*)local_198, "month");
         pVVar14 = (Variant*)Dictionary::operator [](local_260);
         Variant::Variant((Variant*)local_d8, pVVar14);
         Variant::Variant((Variant*)local_1b8, "year");
         pVVar14 = (Variant*)Dictionary::operator [](local_260);
         Variant::Variant((Variant*)local_f8, pVVar14);
         local_218 = (long*)0x0;
         local_208._8_8_ = 0x1d;
         local_208._0_8_ = "%04d-%02d-%02d_%02d-%02d-%02d";
         String::parse_latin1((StrRange*)&local_218);
         vformat<Variant,Variant,Variant,Variant,Variant,Variant>(&local_258, (StrRange*)&local_218, (Variant*)local_f8, (Variant*)local_d8, (Variant*)local_b8, (Variant*)local_98, (Variant*)local_78, (Variant*)local_58);
         plVar2 = local_218;
         if (local_218 != (long*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_218 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_218 = (long*)0x0;
               Memory::free_static((void*)( (long)plVar2 + -0x10 ), false);
            }
         }
         if (Variant::needs_deinit[local_f8[0]] == '\0') {
            cVar11 = Variant::needs_deinit[local_1b8[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_1b8[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_d8[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_d8[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_198[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_198[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_b8[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_b8[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_178[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_178[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_98[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_98[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_158[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_158[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_78[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_78[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_138[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_138[0]];
         }
         if (cVar11 == '\0') {
            cVar11 = Variant::needs_deinit[local_58[0]];
         } else {
            Variant::_clear_internal();
            cVar11 = Variant::needs_deinit[local_58[0]];
         }
         if (cVar11 != '\0') {
            Variant::_clear_internal();
         }
         if (Variant::needs_deinit[local_118[0]] != '\0') {
            Variant::_clear_internal();
         }
         local_218 = (long*)0x0;
         uVar5 = *(undefined8*)( this + 0x40 );
         plVar2 = local_258 + -2;
         if (local_258 != (long*)0x0) {
            do {
               lVar6 = *plVar2;
               if (lVar6 == 0) goto LAB_0010252e;
               LOCK();
               lVar15 = *plVar2;
               bVar16 = lVar6 == lVar15;
               if (bVar16) {
                  *plVar2 = lVar6 + 1;
                  lVar15 = lVar6;
               }
               UNLOCK();
            } while ( !bVar16 );
            if (lVar15 != -1) {
               local_218 = local_258;
            }
         }
         LAB_0010252e:local_228 = (undefined**)0x0;
         local_208._0_8_ = "/jolt_snapshot_%s_%d.bin";
         local_208._8_8_ = 0x18;
         String::parse_latin1((StrRange*)&local_228);
         vformat<String,unsigned_long>((PhysicsSystem*)local_208, (StrRange*)&local_228, (StrRange*)&local_218, uVar5);
         String::operator +((String*)&local_250, param_1);
         uVar5 = local_208._0_8_;
         if ((char*)local_208._0_8_ != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_208._0_8_ + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_208._0_8_ = (char*)0x0;
               Memory::free_static((char*)( uVar5 + -0x10 ), false);
            }
         }
         ppuVar10 = local_228;
         if (local_228 != (undefined**)0x0) {
            LOCK();
            plVar2 = (long*)( (long)local_228 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_228 = (undefined**)0x0;
               Memory::free_static((void*)( (long)ppuVar10 + -0x10 ), false);
            }
         }
         plVar2 = local_218;
         if (local_218 != (long*)0x0) {
            LOCK();
            plVar1 = local_218 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_218 = (long*)0x0;
               Memory::free_static(plVar2 + -2, false);
            }
         }
         FileAccess::open((String*)&local_248, (int)(String*)&local_250, (Error*)0x2);
         if (local_248 == (Object*)0x0) {
            local_218 = (long*)0x0;
            uVar5 = *(undefined8*)( this + 0x40 );
            plVar2 = (long*)( local_250 + -0x10 );
            if (local_250 != (char*)0x0) {
               do {
                  lVar6 = *plVar2;
                  if (lVar6 == 0) goto LAB_00102d88;
                  LOCK();
                  lVar15 = *plVar2;
                  bVar16 = lVar6 == lVar15;
                  if (bVar16) {
                     *plVar2 = lVar6 + 1;
                     lVar15 = lVar6;
                  }
                  UNLOCK();
               } while ( !bVar16 );
               if (lVar15 != -1) {
                  local_218 = (long*)local_250;
               }
            }
            LAB_00102d88:local_228 = (undefined**)0x0;
            local_208._0_8_ = "Failed to open \'%s\' for writing when saving snapshot of physics space with RID \'%d\'.";
            local_208._8_8_ = 0x54;
            String::parse_latin1((StrRange*)&local_228);
            vformat<String,unsigned_long>((PhysicsSystem*)local_208, (StrRange*)&local_228, (StrRange*)&local_218, uVar5);
            _err_print_error("dump_debug_snapshot", "modules/jolt_physics/spaces/jolt_space_3d.cpp", 0x1de, "Condition \"file_access.is_null()\" is true.", (PhysicsSystem*)local_208, 0, 0);
            uVar5 = local_208._0_8_;
            if ((char*)local_208._0_8_ != (char*)0x0) {
               LOCK();
               plVar2 = (long*)( local_208._0_8_ + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_208._0_8_ = (char*)0x0;
                  Memory::free_static((char*)( uVar5 + -0x10 ), false);
               }
            }
            ppuVar10 = local_228;
            if (local_228 != (undefined**)0x0) {
               LOCK();
               ppuVar4 = local_228 + -2;
               *ppuVar4 = *ppuVar4 + -1;
               UNLOCK();
               if (*ppuVar4 == (undefined*)0x0) {
                  local_228 = (undefined**)0x0;
                  Memory::free_static(ppuVar10 + -2, false);
               }
            }
            plVar2 = local_218;
            if (local_218 != (long*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_218 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_218 = (long*)0x0;
                  Memory::free_static((char*)( (long)plVar2 + -0x10 ), false);
               }
            }
            LAB_00102e50:if (local_248 != (Object*)0x0) {
               cVar11 = RefCounted::unreference();
               pOVar8 = local_248;
               joined_r0x00102e68:if (( cVar11 != '\0' ) && ( cVar11 = predelete_handler(pOVar8) ),cVar11 != '\0') {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }
            }
            LAB_0010294e:pcVar9 = local_250;
            if (local_250 != (char*)0x0) {
               LOCK();
               plVar2 = (long*)( local_250 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_250 = (char*)0x0;
                  Memory::free_static(pcVar9 + -0x10, false);
               }
            }
            if (local_258 != (long*)0x0) {
               LOCK();
               plVar2 = local_258 + -2;
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static(local_258 + -2, false);
               }
            }
            Dictionary::~Dictionary((Dictionary*)local_260);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         local_208._0_8_ = (char*)0x0;
         local_208._8_8_ = 0;
         local_1f8 = (undefined1[16])0x0;
         local_1e8 = (undefined1[16])0x0;
         local_1d8 = (undefined1[16])0x0;
         local_1c8 = (undefined1[16])0x0;
         JPH::PhysicsScene::FromPhysicsSystem((PhysicsSystem*)local_208);
         lVar6 = local_1f8._8_8_ + local_208._8_8_ * 0x100;
         lVar15 = local_1f8._8_8_;
         joined_r0x0010265e:if (lVar6 != lVar15) {
            do {
               lVar7 = *(long*)( lVar15 + 0x40 );
               if (*(char*)( lVar7 + 0x3c ) == '\x01') {
                  *(undefined4*)( lVar15 + 0x84 ) = *(undefined4*)( lVar7 + 0x1f0 );
                  *(undefined4*)( lVar15 + 0x74 ) = *(undefined4*)( lVar7 + 0x1e8 );
                  *(undefined4*)( lVar15 + 0x78 ) = *(undefined4*)( lVar7 + 0x1ec );
               }
               JPH::BodyCreationSettings::GetShape();
               JoltShape3D::without_custom_shapes((Shape*)&local_218);
               plVar1 = local_218;
               plVar2 = *(long**)( lVar15 + 0xf8 );
               if (local_218 != plVar2) {
                  if (plVar2 != (long*)0x0) {
                     LOCK();
                     plVar3 = plVar2 + 1;
                     *(int*)plVar3 = (int)*plVar3 + -1;
                     UNLOCK();
                     if ((int)*plVar3 == 0) {
                        ( **(code**)( *plVar2 + 8 ) )();
                     }
                  }
                  *(long**)( lVar15 + 0xf8 ) = plVar1;
                  if (plVar1 != (long*)0x0) {
                     LOCK();
                     *(int*)( plVar1 + 1 ) = (int)plVar1[1] + 1;
                     UNLOCK();
                  }
               }
               plVar2 = *(long**)( lVar15 + 0xf0 );
               if (plVar2 != (long*)0x0) {
                  LOCK();
                  plVar1 = plVar2 + 1;
                  *(int*)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                     ( **(code**)( *plVar2 + 0x18 ) )();
                  }
                  *(undefined8*)( lVar15 + 0xf0 ) = 0;
               }
               if (local_218 != (long*)0x0) {
                  LOCK();
                  plVar2 = local_218 + 1;
                  *(int*)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) goto code_r0x0010273f;
               }
               lVar15 = lVar15 + 0x100;
               if (lVar15 == lVar6) break;
            } while ( true );
         }
         local_220 = (Object*)0x0;
         local_228 = &PTR__JoltStreamOutputWrapper_00107df0;
         if (local_248 != (Object*)0x0) {
            local_220 = local_248;
            cVar11 = RefCounted::reference();
            if (cVar11 == '\0') {
               local_220 = (Object*)0x0;
            }
         }
         JPH::PhysicsScene::SaveBinaryState((StreamOut*)local_208, SUB81((StrRange*)&local_228, 0), true);
         iVar12 = ( **(code**)( *(long*)local_248 + 0x250 ) )();
         if (iVar12 != 0) {
            uVar13 = ( **(code**)( *(long*)local_248 + 0x250 ) )();
            VariantUtilityFunctions::error_string(&local_240, uVar13);
            local_230 = (char*)0x0;
            plVar2 = (long*)( local_250 + -0x10 );
            if (local_250 != (char*)0x0) {
               do {
                  lVar6 = *plVar2;
                  if (lVar6 == 0) goto LAB_00102edb;
                  LOCK();
                  lVar15 = *plVar2;
                  bVar16 = lVar6 == lVar15;
                  if (bVar16) {
                     *plVar2 = lVar6 + 1;
                     lVar15 = lVar6;
                  }
                  UNLOCK();
               } while ( !bVar16 );
               if (lVar15 != -1) {
                  local_230 = local_250;
               }
            }
            LAB_00102edb:local_238 = (char*)0x0;
            local_210 = 0x4f;
            uVar5 = *(undefined8*)( this + 0x40 );
            local_218 = (long*)0x104988;
            String::parse_latin1((StrRange*)&local_238);
            vformat<unsigned_long,String,String>((StrRange*)&local_218, (StrRange*)&local_238, uVar5, &local_230, &local_240);
            _err_print_error("dump_debug_snapshot", "modules/jolt_physics/spaces/jolt_space_3d.cpp", 499, "Condition \"file_access->get_error() != OK\" is true.", (StrRange*)&local_218, 0, 0);
            plVar2 = local_218;
            if (local_218 != (long*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_218 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_218 = (long*)0x0;
                  Memory::free_static((char*)( (long)plVar2 + -0x10 ), false);
               }
            }
            pcVar9 = local_238;
            if (local_238 != (char*)0x0) {
               LOCK();
               plVar2 = (long*)( local_238 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_238 = (char*)0x0;
                  Memory::free_static(pcVar9 + -0x10, false);
               }
            }
            pcVar9 = local_230;
            if (local_230 != (char*)0x0) {
               LOCK();
               plVar2 = (long*)( local_230 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_230 = (char*)0x0;
                  Memory::free_static(pcVar9 + -0x10, false);
               }
            }
            lVar6 = local_240;
            if (local_240 != 0) {
               LOCK();
               plVar2 = (long*)( local_240 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_240 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }
            }
            local_228 = &PTR__JoltStreamOutputWrapper_00107df0;
            if (( ( local_220 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar8 = local_220,cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
            Memory::free_static(pOVar8, false);
         }
         JPH::PhysicsScene::~PhysicsScene((PhysicsScene*)local_208);
         goto LAB_00102e50;
      }
      local_238 = (char*)0x0;
      plVar2 = (long*)( local_250 + -0x10 );
      if (local_250 != (char*)0x0) {
         do {
            lVar6 = *plVar2;
            if (lVar6 == 0) goto LAB_00102807;
            LOCK();
            lVar15 = *plVar2;
            bVar16 = lVar6 == lVar15;
            if (bVar16) {
               *plVar2 = lVar6 + 1;
               lVar15 = lVar6;
            }
            UNLOCK();
         } while ( !bVar16 );
         if (lVar15 != -1) {
            local_238 = local_250;
         }
      }
      LAB_00102807:local_240 = 0;
      uVar5 = *(undefined8*)( this + 0x40 );
      local_218 = (long*)0x104a10;
      local_210 = 0x36;
      String::parse_latin1((StrRange*)&local_240);
      vformat<unsigned_long,String>((String*)&local_230, (StrRange*)&local_240, uVar5, &local_238);
      Variant::Variant((Variant*)local_58, (String*)&local_230);
      stringify_variants((Variant*)&local_218);
      __print_line((String*)&local_218);
      plVar2 = local_218;
      if (local_218 != (long*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_218 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_218 = (long*)0x0;
            Memory::free_static((char*)( (long)plVar2 + -0x10 ), false);
         }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      pcVar9 = local_230;
      if (local_230 != (char*)0x0) {
         LOCK();
         plVar2 = (long*)( local_230 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_230 = (char*)0x0;
            Memory::free_static(pcVar9 + -0x10, false);
         }
      }
      lVar6 = local_240;
      if (local_240 != 0) {
         LOCK();
         plVar2 = (long*)( local_240 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_240 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
      pcVar9 = local_238;
      if (local_238 != (char*)0x0) {
         LOCK();
         plVar2 = (long*)( local_238 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_238 = (char*)0x0;
            Memory::free_static(pcVar9 + -0x10, false);
         }
      }
      local_228 = &PTR__JoltStreamOutputWrapper_00107df0;
      if (( ( local_220 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar8 = local_220,cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
      Memory::free_static(pOVar8, false);
   }
   JPH::PhysicsScene::~PhysicsScene((PhysicsScene*)local_208);
   if (local_248 == (Object*)0x0) goto LAB_0010294e;
   cVar11 = RefCounted::unreference();
   pOVar8 = local_248;
   goto joined_r0x00102e68;
   code_r0x0010273f:lVar15 = lVar15 + 0x100;
   ( **(code**)( *local_218 + 8 ) )();
   goto joined_r0x0010265e;
}/* JoltSpace3D::~JoltSpace3D() */void JoltSpace3D::~JoltSpace3D(JoltSpace3D *this) {
   Object *this_00;
   PhysicsSystem *this_01;
   JoltContactListener3D *this_02;
   char cVar1;
   this_00 = *(Object**)( this + 0x70 );
   if (this_00 != (Object*)0x0) {
      cVar1 = predelete_handler(this_00);
      if (cVar1 != '\0') {
         *(undefined***)this_00 = &PTR__initialize_classv_00107c58;
         Object::~Object(this_00);
         Memory::free_static(this_00, false);
      }
      *(undefined8*)( this + 0x70 ) = 0;
   }
   this_01 = *(PhysicsSystem**)( this + 0x68 );
   if (this_01 != (PhysicsSystem*)0x0) {
      JPH::PhysicsSystem::~PhysicsSystem(this_01);
      ( *JPH::Free )(this_01);
      *(undefined8*)( this + 0x68 ) = 0;
   }
   this_02 = *(JoltContactListener3D**)( this + 0x60 );
   if (this_02 != (JoltContactListener3D*)0x0) {
      JoltContactListener3D::~JoltContactListener3D(this_02);
      operator_delete(this_02, 0x100);
      *(undefined8*)( this + 0x60 ) = 0;
   }
   if (*(JoltLayers**)( this + 0x58 ) != (JoltLayers*)0x0) {
      JoltLayers::~JoltLayers(*(JoltLayers**)( this + 0x58 ));
      *(undefined8*)( this + 0x58 ) = 0;
   }
   if (*(long**)( this + 0x50 ) != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001031de. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( **(long**)( this + 0x50 ) + 8 ) )();
      return;
   }
   return;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* JoltObject3D::pre_step(float, JPH::Body&) */void JoltObject3D::pre_step(float param_1, Body *param_2) {
   return;
}/* JPH::BodyLockInterfaceNoLock::LockRead(JPH::BodyID const&) const */undefined8 JPH::BodyLockInterfaceNoLock::LockRead(BodyID *param_1) {
   return 0;
}/* JPH::BodyLockInterfaceNoLock::UnlockRead(std::shared_mutex*) const */void JPH::BodyLockInterfaceNoLock::UnlockRead(shared_mutex *param_1) {
   return;
}/* JPH::BodyLockInterfaceNoLock::LockWrite(JPH::BodyID const&) const */undefined8 JPH::BodyLockInterfaceNoLock::LockWrite(BodyID *param_1) {
   return 0;
}/* JPH::BodyLockInterfaceNoLock::UnlockWrite(std::shared_mutex*) const */void JPH::BodyLockInterfaceNoLock::UnlockWrite(shared_mutex *param_1) {
   return;
}/* JPH::BodyLockInterfaceNoLock::GetMutexMask(JPH::BodyID const*, int) const */undefined8 JPH::BodyLockInterfaceNoLock::GetMutexMask(BodyID *param_1, int param_2) {
   return 0;
}/* JPH::BodyLockInterfaceNoLock::LockRead(unsigned long) const */void JPH::BodyLockInterfaceNoLock::LockRead(ulong param_1) {
   return;
}/* JPH::BodyLockInterfaceNoLock::UnlockRead(unsigned long) const */void JPH::BodyLockInterfaceNoLock::UnlockRead(ulong param_1) {
   return;
}/* JPH::BodyLockInterfaceNoLock::LockWrite(unsigned long) const */void JPH::BodyLockInterfaceNoLock::LockWrite(ulong param_1) {
   return;
}/* JPH::BodyLockInterfaceNoLock::UnlockWrite(unsigned long) const */void JPH::BodyLockInterfaceNoLock::UnlockWrite(ulong param_1) {
   return;
}/* PhysicsDirectSpaceState3D::is_class_ptr(void*) const */uint PhysicsDirectSpaceState3D::is_class_ptr(PhysicsDirectSpaceState3D *this, void *param_1) {
   return (uint)CONCAT71(0x107e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* PhysicsDirectSpaceState3D::_getv(StringName const&, Variant&) const */undefined8 PhysicsDirectSpaceState3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* PhysicsDirectSpaceState3D::_setv(StringName const&, Variant const&) */undefined8 PhysicsDirectSpaceState3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* PhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo&) const */void PhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* PhysicsDirectSpaceState3D::_property_can_revertv(StringName const&) const */undefined8 PhysicsDirectSpaceState3D::_property_can_revertv(StringName *param_1) {
   return 0;
}/* PhysicsDirectSpaceState3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 PhysicsDirectSpaceState3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* PhysicsDirectSpaceState3D::_notificationv(int, bool) */void PhysicsDirectSpaceState3D::_notificationv(int param_1, bool param_2) {
   return;
}/* JPH::BodyLockInterfaceNoLock::~BodyLockInterfaceNoLock() */void JPH::BodyLockInterfaceNoLock::~BodyLockInterfaceNoLock(BodyLockInterfaceNoLock *this) {
   return;
}/* JPH::BodyLockInterfaceLocking::~BodyLockInterfaceLocking() */void JPH::BodyLockInterfaceLocking::~BodyLockInterfaceLocking(BodyLockInterfaceLocking *this) {
   return;
}/* JoltStreamOutputWrapper::WriteBytes(void const*, unsigned long) */void JoltStreamOutputWrapper::WriteBytes(void *param_1, ulong param_2) {
   /* WARNING: Could not recover jumptable at 0x001033fb. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)( (long)param_1 + 8 ) + 0x2d0 ) )();
   return;
}/* JoltStreamOutputWrapper::IsFailed() const */bool JoltStreamOutputWrapper::IsFailed(JoltStreamOutputWrapper *this) {
   int iVar1;
   iVar1 = ( **(code**)( **(long**)( this + 8 ) + 0x250 ) )();
   return iVar1 != 0;
}/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00103434. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}/* JPH::BodyLockInterfaceNoLock::~BodyLockInterfaceNoLock() */void JPH::BodyLockInterfaceNoLock::~BodyLockInterfaceNoLock(BodyLockInterfaceNoLock *this) {
   operator_delete(this, 0x10);
   return;
}/* JPH::BodyLockInterfaceLocking::~BodyLockInterfaceLocking() */void JPH::BodyLockInterfaceLocking::~BodyLockInterfaceLocking(BodyLockInterfaceLocking *this) {
   operator_delete(this, 0x10);
   return;
}/* JPH::BodyLockInterfaceLocking::UnlockWrite(unsigned long) const */void JPH::BodyLockInterfaceLocking::UnlockWrite(ulong param_1) {
   JPH::BodyManager::UnlockWrite(*(ulong*)( param_1 + 8 ));
   return;
}/* JPH::BodyLockInterfaceLocking::LockWrite(unsigned long) const */void JPH::BodyLockInterfaceLocking::LockWrite(ulong param_1) {
   JPH::BodyManager::LockWrite(*(ulong*)( param_1 + 8 ));
   return;
}/* JPH::BodyLockInterfaceLocking::UnlockRead(unsigned long) const */void JPH::BodyLockInterfaceLocking::UnlockRead(ulong param_1) {
   JPH::BodyManager::UnlockRead(*(ulong*)( param_1 + 8 ));
   return;
}/* JPH::BodyLockInterfaceLocking::LockRead(unsigned long) const */void JPH::BodyLockInterfaceLocking::LockRead(ulong param_1) {
   JPH::BodyManager::LockRead(*(ulong*)( param_1 + 8 ));
   return;
}/* JPH::BodyLockInterfaceLocking::GetMutexMask(JPH::BodyID const*, int) const */void JPH::BodyLockInterfaceLocking::GetMutexMask(BodyID *param_1, int param_2) {
   JPH::BodyManager::GetMutexMask(*(BodyID**)( param_1 + 8 ), param_2);
   return;
}/* JPH::BodyLockInterfaceLocking::UnlockRead(std::shared_mutex*) const */void JPH::BodyLockInterfaceLocking::UnlockRead(BodyLockInterfaceLocking *this, shared_mutex *param_1) {
   pthread_rwlock_unlock((pthread_rwlock_t*)param_1);
   return;
}/* JPH::BodyLockInterfaceLocking::UnlockWrite(std::shared_mutex*) const */void JPH::BodyLockInterfaceLocking::UnlockWrite(BodyLockInterfaceLocking *this, shared_mutex *param_1) {
   pthread_rwlock_unlock((pthread_rwlock_t*)param_1);
   return;
}/* JPH::BodyLockInterfaceLocking::LockWrite(JPH::BodyID const&) const */pthread_rwlock_t * __thiscall
JPH::BodyLockInterfaceLocking::LockWrite(BodyLockInterfaceLocking *this,BodyID *param_1){
   uint uVar1;
   uint uVar2;
   int iVar3;
   uint *puVar4;
   pthread_rwlock_t *__rwlock;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = &local_14;
   local_14 = *(uint*)param_1 & 0x7fffff;
   uVar2 = 0x84222325;
   do {
      uVar1 = *puVar4;
      puVar4 = (uint*)( (long)puVar4 + 1 );
      uVar2 = ( uVar2 ^ (byte)uVar1 ) * 0x1b3;
   } while ( puVar4 != (uint*)&local_10 );
   __rwlock = (pthread_rwlock_t*)( *(long*)( *(long*)( this + 8 ) + 0x50 ) + ( ulong )(*(int*)( *(long*)( this + 8 ) + 0x58 ) - 1U & uVar2) * 0x40 );
   iVar3 = pthread_rwlock_wrlock(__rwlock);
   if (iVar3 == 0x23) {
      std::__throw_system_error(0x23);
   } else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return __rwlock;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* PhysicsDirectSpaceState3D::_get_class_namev() const */undefined8 *PhysicsDirectSpaceState3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001035c3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001035c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsDirectSpaceState3D");
         goto LAB_0010362e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsDirectSpaceState3D");
   LAB_0010362e:return &_get_class_namev();
}/* JPH::BodyLockInterfaceLocking::LockRead(JPH::BodyID const&) const */pthread_rwlock_t * __thiscall
JPH::BodyLockInterfaceLocking::LockRead(BodyLockInterfaceLocking *this,BodyID *param_1){
   uint uVar1;
   uint uVar2;
   int iVar3;
   uint *puVar4;
   pthread_rwlock_t *__rwlock;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = &local_14;
   local_14 = *(uint*)param_1 & 0x7fffff;
   uVar2 = 0x84222325;
   do {
      uVar1 = *puVar4;
      puVar4 = (uint*)( (long)puVar4 + 1 );
      uVar2 = ( uVar2 ^ (byte)uVar1 ) * 0x1b3;
   } while ( puVar4 != (uint*)&local_10 );
   __rwlock = (pthread_rwlock_t*)( *(long*)( *(long*)( this + 8 ) + 0x50 ) + ( ulong )(*(int*)( *(long*)( this + 8 ) + 0x58 ) - 1U & uVar2) * 0x40 );
   do {
      iVar3 = pthread_rwlock_rdlock(__rwlock);
   } while ( iVar3 == 0xb );
   if (iVar3 == 0x23) {
      std::__throw_system_error(0x23);
   } else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return __rwlock;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JoltStreamOutputWrapper::~JoltStreamOutputWrapper() */void JoltStreamOutputWrapper::~JoltStreamOutputWrapper(JoltStreamOutputWrapper *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__JoltStreamOutputWrapper_00107df0;
   if (*(long*)( this + 8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            return;
         }
      }
   }
   return;
}/* JoltStreamOutputWrapper::~JoltStreamOutputWrapper() */void JoltStreamOutputWrapper::~JoltStreamOutputWrapper(JoltStreamOutputWrapper *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__JoltStreamOutputWrapper_00107df0;
   if (*(long*)( this + 8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
      }
   }
   operator_delete(this, 0x10);
   return;
}/* PhysicsDirectSpaceState3D::get_class() const */void PhysicsDirectSpaceState3D::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* PhysicsDirectSpaceState3D::is_class(String const&) const */undefined8 PhysicsDirectSpaceState3D::is_class(PhysicsDirectSpaceState3D *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010394f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010394f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00103a03;
   }
   cVar6 = String::operator ==(param_1, "PhysicsDirectSpaceState3D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00103ab3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00103ab3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00103a03;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00103a03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* PhysicsDirectSpaceState3D::_initialize_classv() */void PhysicsDirectSpaceState3D::_initialize_classv(void) {
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
      local_38 = "PhysicsDirectSpaceState3D";
      local_50 = 0;
      local_30 = 0x19;
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
         PhysicsDirectSpaceState3D::_bind_methods();
      }
      initialize_class()::initialized = '\x01'
      ;;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* PhysicsDirectSpaceState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void PhysicsDirectSpaceState3D::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "PhysicsDirectSpaceState3D";
   local_70 = 0x19;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PhysicsDirectSpaceState3D";
   local_98 = 0;
   local_70 = 0x19;
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
      LAB_00103e78:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103e78;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00103e96;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00103e96:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "PhysicsDirectSpaceState3D", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JoltSpace3D::_pre_step(float) [clone .cold] */void JoltSpace3D::_pre_step(float param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* JoltSpace3D::set_max_debug_contacts(int) [clone .cold] */void JoltSpace3D::set_max_debug_contacts(int param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00104b52(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* JoltContactListener3D::~JoltContactListener3D() */void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   *(code**)this = JoltProjectSettings::get_max_contact_constraints;
   *(code**)( this + 8 ) = JoltProjectSettings::get_body_pair_cache_angle_cos_div2;
   if (*(long*)( this + 0xf0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xf0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0xf0 );
         *(undefined8*)( this + 0xf0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   pvVar4 = *(void**)( this + 0x90 );
   for (int i = 0; i < 3; i++) {
      if (pvVar4 != (void*)0) {
         if (*(int*)( this + ( -40*i + 180 ) ) != 0) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 176 ) ) * 4 ) != 0) {
               memset(*(void**)( this + ( -40*i + 168 ) ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 176 ) ) * 4 ) << 2);
            }
            *(undefined4*)( this + ( -40*i + 180 ) ) = 0;
         }
         Memory::free_static(pvVar4, false);
         Memory::free_static(*(void**)( this + ( -40*i + 160 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 152 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 168 ) ), false);
      }
      pvVar4 = *(void**)( this + ( -40*i + 104 ) );
   }
   if (pvVar4 == (void*)0x0) {
      return;
   }
   if (*(int*)( this + 0x3c ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x3c ) = 0;
         *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
      } else {
         lVar3 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x20 ) + lVar3 ) != 0) {
               pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
               *(int*)( *(long*)( this + 0x20 ) + lVar3 ) = 0;
               if (*(void**)( (long)pvVar4 + 0x38 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar4 + 0x30 ) != 0) {
                     *(undefined4*)( (long)pvVar4 + 0x30 ) = 0;
                  }
                  Memory::free_static(*(void**)( (long)pvVar4 + 0x38 ), false);
               }
               if (*(void**)( (long)pvVar4 + 0x28 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar4 + 0x20 ) != 0) {
                     *(undefined4*)( (long)pvVar4 + 0x20 ) = 0;
                  }
                  Memory::free_static(*(void**)( (long)pvVar4 + 0x28 ), false);
               }
               Memory::free_static(pvVar4, false);
               pvVar4 = *(void**)( this + 0x18 );
               *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
            }
            lVar3 = lVar3 + 4;
         } while ( lVar3 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x3c ) = 0;
         *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         if (pvVar4 == (void*)0x0) {
            return;
         }
      }
   }
   Memory::free_static(pvVar4, false);
   Memory::free_static(*(void**)( this + 0x20 ), false);
   return;
}/* non-virtual thunk to JoltContactListener3D::~JoltContactListener3D() */void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   *(code**)( this + -8 ) = JoltProjectSettings::get_max_contact_constraints;
   *(code**)this = JoltProjectSettings::get_body_pair_cache_angle_cos_div2;
   if (*(long*)( this + 0xe8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xe8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0xe8 );
         *(undefined8*)( this + 0xe8 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   pvVar4 = *(void**)( this + 0x88 );
   for (int i = 0; i < 3; i++) {
      if (pvVar4 != (void*)0) {
         if (*(int*)( this + ( -40*i + 172 ) ) != 0) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 168 ) ) * 4 ) != 0) {
               memset(*(void**)( this + ( -40*i + 160 ) ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 168 ) ) * 4 ) << 2);
            }
            *(undefined4*)( this + ( -40*i + 172 ) ) = 0;
         }
         Memory::free_static(pvVar4, false);
         Memory::free_static(*(void**)( this + ( -40*i + 152 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 144 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 160 ) ), false);
      }
      pvVar4 = *(void**)( this + ( -40*i + 96 ) );
   }
   if (pvVar4 == (void*)0x0) {
      return;
   }
   if (*(int*)( this + 0x34 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x34 ) = 0;
         *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
      } else {
         lVar3 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x18 ) + lVar3 ) != 0) {
               pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
               *(int*)( *(long*)( this + 0x18 ) + lVar3 ) = 0;
               if (*(void**)( (long)pvVar4 + 0x38 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar4 + 0x30 ) != 0) {
                     *(undefined4*)( (long)pvVar4 + 0x30 ) = 0;
                  }
                  Memory::free_static(*(void**)( (long)pvVar4 + 0x38 ), false);
               }
               if (*(void**)( (long)pvVar4 + 0x28 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar4 + 0x20 ) != 0) {
                     *(undefined4*)( (long)pvVar4 + 0x20 ) = 0;
                  }
                  Memory::free_static(*(void**)( (long)pvVar4 + 0x28 ), false);
               }
               Memory::free_static(pvVar4, false);
               pvVar4 = *(void**)( this + 0x10 );
               *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
            }
            lVar3 = lVar3 + 4;
         } while ( lVar3 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x34 ) = 0;
         *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
         if (pvVar4 == (void*)0x0) {
            return;
         }
      }
   }
   Memory::free_static(pvVar4, false);
   Memory::free_static(*(void**)( this + 0x18 ), false);
   return;
}/* JoltContactListener3D::~JoltContactListener3D() */void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   *(code**)this = JoltProjectSettings::get_max_contact_constraints;
   *(code**)( this + 8 ) = JoltProjectSettings::get_body_pair_cache_angle_cos_div2;
   if (*(long*)( this + 0xf0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xf0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0xf0 );
         *(undefined8*)( this + 0xf0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   pvVar4 = *(void**)( this + 0x90 );
   for (int i = 0; i < 3; i++) {
      if (pvVar4 != (void*)0) {
         if (*(int*)( this + ( -40*i + 180 ) ) != 0) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 176 ) ) * 4 ) != 0) {
               memset(*(void**)( this + ( -40*i + 168 ) ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 176 ) ) * 4 ) << 2);
            }
            *(undefined4*)( this + ( -40*i + 180 ) ) = 0;
         }
         Memory::free_static(pvVar4, false);
         Memory::free_static(*(void**)( this + ( -40*i + 160 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 152 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 168 ) ), false);
      }
      pvVar4 = *(void**)( this + ( -40*i + 104 ) );
   }
   if (pvVar4 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         } else {
            lVar3 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar3 ) != 0) {
                  pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar3 ) = 0;
                  if (*(void**)( (long)pvVar4 + 0x38 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x30 ) != 0) {
                        *(undefined4*)( (long)pvVar4 + 0x30 ) = 0;
                     }
                     Memory::free_static(*(void**)( (long)pvVar4 + 0x38 ), false);
                  }
                  if (*(void**)( (long)pvVar4 + 0x28 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x20 ) != 0) {
                        *(undefined4*)( (long)pvVar4 + 0x20 ) = 0;
                     }
                     Memory::free_static(*(void**)( (long)pvVar4 + 0x28 ), false);
                  }
                  Memory::free_static(pvVar4, false);
                  pvVar4 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
               }
               lVar3 = lVar3 + 4;
            } while ( lVar3 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar4 == (void*)0x0) goto LAB_00105369;
         }
      }
      Memory::free_static(pvVar4, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }
   LAB_00105369:operator_delete(this, 0x100);
   return;
}/* non-virtual thunk to JoltContactListener3D::~JoltContactListener3D() */void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   *(code**)( this + -8 ) = JoltProjectSettings::get_max_contact_constraints;
   *(code**)this = JoltProjectSettings::get_body_pair_cache_angle_cos_div2;
   if (*(long*)( this + 0xe8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xe8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0xe8 );
         *(undefined8*)( this + 0xe8 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   pvVar4 = *(void**)( this + 0x88 );
   for (int i = 0; i < 3; i++) {
      if (pvVar4 != (void*)0) {
         if (*(int*)( this + ( -40*i + 172 ) ) != 0) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 168 ) ) * 4 ) != 0) {
               memset(*(void**)( this + ( -40*i + 160 ) ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + ( -40*i + 168 ) ) * 4 ) << 2);
            }
            *(undefined4*)( this + ( -40*i + 172 ) ) = 0;
         }
         Memory::free_static(pvVar4, false);
         Memory::free_static(*(void**)( this + ( -40*i + 152 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 144 ) ), false);
         Memory::free_static(*(void**)( this + ( -40*i + 160 ) ), false);
      }
      pvVar4 = *(void**)( this + ( -40*i + 96 ) );
   }
   if (pvVar4 != (void*)0x0) {
      if (*(int*)( this + 0x34 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x34 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
         } else {
            lVar3 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x18 ) + lVar3 ) != 0) {
                  pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
                  *(int*)( *(long*)( this + 0x18 ) + lVar3 ) = 0;
                  if (*(void**)( (long)pvVar4 + 0x38 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x30 ) != 0) {
                        *(undefined4*)( (long)pvVar4 + 0x30 ) = 0;
                     }
                     Memory::free_static(*(void**)( (long)pvVar4 + 0x38 ), false);
                  }
                  if (*(void**)( (long)pvVar4 + 0x28 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x20 ) != 0) {
                        *(undefined4*)( (long)pvVar4 + 0x20 ) = 0;
                     }
                     Memory::free_static(*(void**)( (long)pvVar4 + 0x28 ), false);
                  }
                  Memory::free_static(pvVar4, false);
                  pvVar4 = *(void**)( this + 0x10 );
                  *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
               }
               lVar3 = lVar3 + 4;
            } while ( lVar3 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x34 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
            if (pvVar4 == (void*)0x0) goto LAB_00105639;
         }
      }
      Memory::free_static(pvVar4, false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
   }
   LAB_00105639:operator_delete(this + -8, 0x100);
   return;
}/* WARNING: Removing unreachable block (ram,0x00105838) *//* WARNING: Removing unreachable block (ram,0x00105968) *//* WARNING: Removing unreachable block (ram,0x00105b30) *//* WARNING: Removing unreachable block (ram,0x00105974) *//* WARNING: Removing unreachable block (ram,0x0010597e) *//* WARNING: Removing unreachable block (ram,0x00105b10) *//* WARNING: Removing unreachable block (ram,0x0010598a) *//* WARNING: Removing unreachable block (ram,0x00105994) *//* WARNING: Removing unreachable block (ram,0x00105af0) *//* WARNING: Removing unreachable block (ram,0x001059a0) *//* WARNING: Removing unreachable block (ram,0x001059aa) *//* WARNING: Removing unreachable block (ram,0x00105ad0) *//* WARNING: Removing unreachable block (ram,0x001059b6) *//* WARNING: Removing unreachable block (ram,0x001059c0) *//* WARNING: Removing unreachable block (ram,0x00105ab0) *//* WARNING: Removing unreachable block (ram,0x001059cc) *//* WARNING: Removing unreachable block (ram,0x001059d6) *//* WARNING: Removing unreachable block (ram,0x00105a90) *//* WARNING: Removing unreachable block (ram,0x001059e2) *//* WARNING: Removing unreachable block (ram,0x001059ec) *//* WARNING: Removing unreachable block (ram,0x00105a70) *//* WARNING: Removing unreachable block (ram,0x001059f4) *//* WARNING: Removing unreachable block (ram,0x00105a0a) *//* WARNING: Removing unreachable block (ram,0x00105a16) *//* String vformat<int>(String const&, int const) */String *vformat<int>(String *param_1, int param_2) {
   char cVar1;
   Variant *this;
   int in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   } else {
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
}/* WARNING: Removing unreachable block (ram,0x00105c78) *//* WARNING: Removing unreachable block (ram,0x00105da8) *//* WARNING: Removing unreachable block (ram,0x00105f70) *//* WARNING: Removing unreachable block (ram,0x00105db4) *//* WARNING: Removing unreachable block (ram,0x00105dbe) *//* WARNING: Removing unreachable block (ram,0x00105f50) *//* WARNING: Removing unreachable block (ram,0x00105dca) *//* WARNING: Removing unreachable block (ram,0x00105dd4) *//* WARNING: Removing unreachable block (ram,0x00105f30) *//* WARNING: Removing unreachable block (ram,0x00105de0) *//* WARNING: Removing unreachable block (ram,0x00105dea) *//* WARNING: Removing unreachable block (ram,0x00105f10) *//* WARNING: Removing unreachable block (ram,0x00105df6) *//* WARNING: Removing unreachable block (ram,0x00105e00) *//* WARNING: Removing unreachable block (ram,0x00105ef0) *//* WARNING: Removing unreachable block (ram,0x00105e0c) *//* WARNING: Removing unreachable block (ram,0x00105e16) *//* WARNING: Removing unreachable block (ram,0x00105ed0) *//* WARNING: Removing unreachable block (ram,0x00105e22) *//* WARNING: Removing unreachable block (ram,0x00105e2c) *//* WARNING: Removing unreachable block (ram,0x00105eb0) *//* WARNING: Removing unreachable block (ram,0x00105e34) *//* WARNING: Removing unreachable block (ram,0x00105e4a) *//* WARNING: Removing unreachable block (ram,0x00105e56) *//* String vformat<PhysicsServer3D::SpaceParameter>(String const&, PhysicsServer3D::SpaceParameter
   const) */undefined8 *vformat<PhysicsServer3D::SpaceParameter>(undefined8 *param_1, bool *param_2, int param_3) {
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
   } else {
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
}/* WARNING: Removing unreachable block (ram,0x00106130) *//* WARNING: Removing unreachable block (ram,0x00106260) *//* WARNING: Removing unreachable block (ram,0x001063d9) *//* WARNING: Removing unreachable block (ram,0x0010626c) *//* WARNING: Removing unreachable block (ram,0x00106276) *//* WARNING: Removing unreachable block (ram,0x001063bb) *//* WARNING: Removing unreachable block (ram,0x00106282) *//* WARNING: Removing unreachable block (ram,0x0010628c) *//* WARNING: Removing unreachable block (ram,0x0010639d) *//* WARNING: Removing unreachable block (ram,0x00106298) *//* WARNING: Removing unreachable block (ram,0x001062a2) *//* WARNING: Removing unreachable block (ram,0x0010637f) *//* WARNING: Removing unreachable block (ram,0x001062ae) *//* WARNING: Removing unreachable block (ram,0x001062b8) *//* WARNING: Removing unreachable block (ram,0x00106361) *//* WARNING: Removing unreachable block (ram,0x001062c4) *//* WARNING: Removing unreachable block (ram,0x001062ce) *//* WARNING: Removing unreachable block (ram,0x00106343) *//* WARNING: Removing unreachable block (ram,0x001062d6) *//* WARNING: Removing unreachable block (ram,0x001062e0) *//* WARNING: Removing unreachable block (ram,0x00106328) *//* WARNING: Removing unreachable block (ram,0x001062e8) *//* WARNING: Removing unreachable block (ram,0x001062fe) *//* WARNING: Removing unreachable block (ram,0x0010630a) *//* String vformat<String, int>(String const&, String const, int const) */undefined8 *vformat<String,int>(undefined8 *param_1, bool *param_2, String *param_3, int param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
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
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x001065b8) *//* WARNING: Removing unreachable block (ram,0x001066e8) *//* WARNING: Removing unreachable block (ram,0x00106861) *//* WARNING: Removing unreachable block (ram,0x001066f4) *//* WARNING: Removing unreachable block (ram,0x001066fe) *//* WARNING: Removing unreachable block (ram,0x00106843) *//* WARNING: Removing unreachable block (ram,0x0010670a) *//* WARNING: Removing unreachable block (ram,0x00106714) *//* WARNING: Removing unreachable block (ram,0x00106825) *//* WARNING: Removing unreachable block (ram,0x00106720) *//* WARNING: Removing unreachable block (ram,0x0010672a) *//* WARNING: Removing unreachable block (ram,0x00106807) *//* WARNING: Removing unreachable block (ram,0x00106736) *//* WARNING: Removing unreachable block (ram,0x00106740) *//* WARNING: Removing unreachable block (ram,0x001067e9) *//* WARNING: Removing unreachable block (ram,0x0010674c) *//* WARNING: Removing unreachable block (ram,0x00106756) *//* WARNING: Removing unreachable block (ram,0x001067cb) *//* WARNING: Removing unreachable block (ram,0x0010675e) *//* WARNING: Removing unreachable block (ram,0x00106768) *//* WARNING: Removing unreachable block (ram,0x001067b0) *//* WARNING: Removing unreachable block (ram,0x00106770) *//* WARNING: Removing unreachable block (ram,0x00106786) *//* WARNING: Removing unreachable block (ram,0x00106792) *//* String vformat<Variant, Variant, Variant, Variant, Variant, Variant>(String const&, Variant
   const, Variant const, Variant const, Variant const, Variant const, Variant const) */undefined8 *vformat<Variant,Variant,Variant,Variant,Variant,Variant>(undefined8 *param_1, bool *param_2, Variant *param_3, Variant *param_4, Variant *param_5, Variant *param_6, Variant *param_7, Variant *param_8) {
   Variant *this;
   int iVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   bool bVar4;
   Array local_138[8];
   undefined8 local_130[9];
   Variant local_e8[24];
   Variant local_d0[24];
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_e8, param_3);
   Variant::Variant(local_d0, param_4);
   Variant::Variant(local_b8, param_5);
   iVar3 = 0;
   Variant::Variant(local_a0, param_6);
   Variant::Variant(local_88, param_7);
   Variant::Variant(local_70, param_8);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_138);
   iVar1 = (int)local_138;
   Array::resize(iVar1);
   pVVar2 = local_e8;
   do {
      iVar3 = iVar3 + 1;
      this(Variant * Array::operator [](iVar1));
      Variant::operator =(this, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   } while ( iVar3 != 6 );
   String::sprintf((Array*)local_130, param_2);
   *param_1 = local_130[0];
   Array::~Array(local_138);
   pVVar2 = (Variant*)&local_58;
   do {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }
      bVar4 = pVVar2 != local_e8;
      pVVar2 = pVVar2 + -0x18;
   } while ( bVar4 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x001069e0) *//* WARNING: Removing unreachable block (ram,0x00106b10) *//* WARNING: Removing unreachable block (ram,0x00106c89) *//* WARNING: Removing unreachable block (ram,0x00106b1c) *//* WARNING: Removing unreachable block (ram,0x00106b26) *//* WARNING: Removing unreachable block (ram,0x00106c6b) *//* WARNING: Removing unreachable block (ram,0x00106b32) *//* WARNING: Removing unreachable block (ram,0x00106b3c) *//* WARNING: Removing unreachable block (ram,0x00106c4d) *//* WARNING: Removing unreachable block (ram,0x00106b48) *//* WARNING: Removing unreachable block (ram,0x00106b52) *//* WARNING: Removing unreachable block (ram,0x00106c2f) *//* WARNING: Removing unreachable block (ram,0x00106b5e) *//* WARNING: Removing unreachable block (ram,0x00106b68) *//* WARNING: Removing unreachable block (ram,0x00106c11) *//* WARNING: Removing unreachable block (ram,0x00106b74) *//* WARNING: Removing unreachable block (ram,0x00106b7e) *//* WARNING: Removing unreachable block (ram,0x00106bf3) *//* WARNING: Removing unreachable block (ram,0x00106b86) *//* WARNING: Removing unreachable block (ram,0x00106b90) *//* WARNING: Removing unreachable block (ram,0x00106bd8) *//* WARNING: Removing unreachable block (ram,0x00106b98) *//* WARNING: Removing unreachable block (ram,0x00106bae) *//* WARNING: Removing unreachable block (ram,0x00106bba) *//* String vformat<String, unsigned long>(String const&, String const, unsigned long const) */undefined8 *vformat<String,unsigned_long>(undefined8 *param_1, bool *param_2, String *param_3, ulong param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
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
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x00106e08) *//* WARNING: Removing unreachable block (ram,0x00106f38) *//* WARNING: Removing unreachable block (ram,0x001070b0) *//* WARNING: Removing unreachable block (ram,0x00106f44) *//* WARNING: Removing unreachable block (ram,0x00106f4e) *//* WARNING: Removing unreachable block (ram,0x00107092) *//* WARNING: Removing unreachable block (ram,0x00106f5a) *//* WARNING: Removing unreachable block (ram,0x00106f64) *//* WARNING: Removing unreachable block (ram,0x00107074) *//* WARNING: Removing unreachable block (ram,0x00106f70) *//* WARNING: Removing unreachable block (ram,0x00106f7a) *//* WARNING: Removing unreachable block (ram,0x00107056) *//* WARNING: Removing unreachable block (ram,0x00106f86) *//* WARNING: Removing unreachable block (ram,0x00106f90) *//* WARNING: Removing unreachable block (ram,0x00107038) *//* WARNING: Removing unreachable block (ram,0x00106f9c) *//* WARNING: Removing unreachable block (ram,0x00106fa6) *//* WARNING: Removing unreachable block (ram,0x0010701a) *//* WARNING: Removing unreachable block (ram,0x00106fae) *//* WARNING: Removing unreachable block (ram,0x00106fb8) *//* WARNING: Removing unreachable block (ram,0x00106fff) *//* WARNING: Removing unreachable block (ram,0x00106fc0) *//* WARNING: Removing unreachable block (ram,0x00106fd5) *//* WARNING: Removing unreachable block (ram,0x00106fe1) *//* String vformat<unsigned long, String, String>(String const&, unsigned long const, String const,
   String const) */undefined8 *vformat<unsigned_long,String,String>(undefined8 *param_1, bool *param_2, ulong param_3, String *param_4, String *param_5) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   iVar2 = 0;
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar4 = (int)local_f8;
   Array::resize(iVar4);
   pVVar3 = local_a8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   } while ( iVar2 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar3 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar3 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x00107230) *//* WARNING: Removing unreachable block (ram,0x00107360) *//* WARNING: Removing unreachable block (ram,0x001074d9) *//* WARNING: Removing unreachable block (ram,0x0010736c) *//* WARNING: Removing unreachable block (ram,0x00107376) *//* WARNING: Removing unreachable block (ram,0x001074bb) *//* WARNING: Removing unreachable block (ram,0x00107382) *//* WARNING: Removing unreachable block (ram,0x0010738c) *//* WARNING: Removing unreachable block (ram,0x0010749d) *//* WARNING: Removing unreachable block (ram,0x00107398) *//* WARNING: Removing unreachable block (ram,0x001073a2) *//* WARNING: Removing unreachable block (ram,0x0010747f) *//* WARNING: Removing unreachable block (ram,0x001073ae) *//* WARNING: Removing unreachable block (ram,0x001073b8) *//* WARNING: Removing unreachable block (ram,0x00107461) *//* WARNING: Removing unreachable block (ram,0x001073c4) *//* WARNING: Removing unreachable block (ram,0x001073ce) *//* WARNING: Removing unreachable block (ram,0x00107443) *//* WARNING: Removing unreachable block (ram,0x001073d6) *//* WARNING: Removing unreachable block (ram,0x001073e0) *//* WARNING: Removing unreachable block (ram,0x00107428) *//* WARNING: Removing unreachable block (ram,0x001073e8) *//* WARNING: Removing unreachable block (ram,0x001073fe) *//* WARNING: Removing unreachable block (ram,0x0010740a) *//* String vformat<unsigned long, String>(String const&, unsigned long const, String const) */undefined8 *vformat<unsigned_long,String>(undefined8 *param_1, bool *param_2, ulong param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
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
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -24*i + 296 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 280 ) ) = 0;
         ( *Free )();
      }
   }
   plVar4 = *(long**)( this + 0xd8 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_00107750:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_00107788;
            };
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00107750;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00107750;
            }
            ( *Free )();
            plVar4 = plVar4 + 1;
         } while ( plVar4 < plVar2 );
         LAB_00107788:plVar4 = *(long**)( this + 0xd8 );
      }
      *(undefined8*)( this + 200 ) = 0;
      ( *Free )(plVar4);
   }
   for (int i = 0; i < 7; i++) {
      if (*(long*)( this + ( -24*i + 192 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 176 ) ) = 0;
         ( *Free )();
      }
   }
   if (*(long*)( this + 0x18 ) == 0) {
      return;
   }
   *(undefined8*)( this + 8 ) = 0;
   /* WARNING: Could not recover jumptable at 0x0010772a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}/* JPH::PhysicsScene::~PhysicsScene() */void JPH::PhysicsScene::~PhysicsScene(PhysicsScene *this) {
   long *plVar1;
   SoftBodySharedSettings *this_00;
   long *plVar2;
   undefined8 *puVar3;
   long *plVar4;
   ulong uVar5;
   long *plVar6;
   ulong uVar7;
   undefined8 *puVar8;
   puVar3 = *(undefined8**)( this + 0x48 );
   if (puVar3 != (undefined8*)0x0) {
      if (( *(long*)( this + 0x38 ) != 0 ) && ( puVar8 = puVar3 < puVar8 )) {
         do {
            plVar4 = (long*)puVar3[8];
            if (plVar4 != (long*)0x0) {
               LOCK();
               plVar6 = plVar4 + 1;
               *(int*)plVar6 = (int)*plVar6 + -1;
               UNLOCK();
               if ((int)*plVar6 == 0) {
                  ( **(code**)( *plVar4 + 0x18 ) )();
               }
            }
            this_00 = (SoftBodySharedSettings*)*puVar3;
            if (this_00 != (SoftBodySharedSettings*)0x0) {
               LOCK();
               *(int*)this_00 = *(int*)this_00 + -1;
               UNLOCK();
               if (*(int*)this_00 == 0) {
                  SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
                  ( *Free )(this_00);
               }
            }
            puVar3 = puVar3 + 0xe;
         } while ( puVar3 < puVar8 );
         puVar3 = *(undefined8**)( this + 0x48 );
      }
      *(undefined8*)( this + 0x38 ) = 0;
      ( *Free )(puVar3);
   }
   plVar4 = *(long**)( this + 0x30 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 0x20 ) != 0 ) && ( plVar6 = plVar4 < plVar6 )) {
         do {
            while (plVar2 = (long*)*plVar4,plVar2 == (long*)0x0) {
               LAB_00107860:plVar4 = plVar4 + 2;
               if (plVar6 <= plVar4) goto LAB_00107890;
            };
            LOCK();
            plVar1 = plVar2 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00107860;
            plVar4 = plVar4 + 2;
            ( **(code**)( *plVar2 + 0x18 ) )();
         } while ( plVar4 < plVar6 );
         LAB_00107890:plVar4 = *(long**)( this + 0x30 );
      }
      *(undefined8*)( this + 0x20 ) = 0;
      ( *Free )(plVar4);
   }
   uVar5 = *(ulong*)( this + 0x18 );
   if (uVar5 == 0) {
      return;
   }
   if (( *(long*)( this + 8 ) != 0 ) && ( uVar7 = uVar5 < uVar7 )) {
      do {
         plVar4 = *(long**)( uVar5 + 0xf8 );
         if (plVar4 != (long*)0x0) {
            LOCK();
            plVar6 = plVar4 + 1;
            *(int*)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
               ( **(code**)( *plVar4 + 8 ) )();
            }
         }
         plVar4 = *(long**)( uVar5 + 0xf0 );
         if (plVar4 != (long*)0x0) {
            LOCK();
            plVar6 = plVar4 + 1;
            *(int*)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
               ( **(code**)( *plVar4 + 0x18 ) )();
            }
         }
         plVar4 = *(long**)( uVar5 + 0x50 );
         if (plVar4 != (long*)0x0) {
            LOCK();
            plVar6 = plVar4 + 1;
            *(int*)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
               ( **(code**)( *plVar4 + 0x18 ) )();
            }
         }
         uVar5 = uVar5 + 0x100;
      } while ( uVar5 < uVar7 );
      uVar5 = *(ulong*)( this + 0x18 );
   }
   *(undefined8*)( this + 8 ) = 0;
   /* WARNING: Could not recover jumptable at 0x00107941. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )(uVar5);
   return;
}/* JoltSpace3D::_pre_step(float) */void JoltSpace3D::_GLOBAL__sub_I__pre_step(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC84;
   }
   return;
}/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsScene::~PhysicsScene() */void JPH::PhysicsScene::~PhysicsScene(PhysicsScene *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JoltContactListener3D::~JoltContactListener3D() */void JoltContactListener3D::~JoltContactListener3D(JoltContactListener3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JoltStreamOutputWrapper::~JoltStreamOutputWrapper() */void JoltStreamOutputWrapper::~JoltStreamOutputWrapper(JoltStreamOutputWrapper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::BodyLockInterfaceLocking::~BodyLockInterfaceLocking() */void JPH::BodyLockInterfaceLocking::~BodyLockInterfaceLocking(BodyLockInterfaceLocking *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::BodyLockInterfaceNoLock::~BodyLockInterfaceNoLock() */void JPH::BodyLockInterfaceNoLock::~BodyLockInterfaceNoLock(BodyLockInterfaceNoLock *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
