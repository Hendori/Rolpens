/* JoltArea3D::_get_broad_phase_layer() const */undefined1 JoltArea3D::_get_broad_phase_layer(JoltArea3D *this) {
   undefined1 uVar1;
   uVar1 = JoltBroadPhaseLayer::AREA_UNDETECTABLE;
   if (this[0x178] != (JoltArea3D)0x0) {
      uVar1 = JoltBroadPhaseLayer::AREA_DETECTABLE;
   }

   return uVar1;
}
/* JoltArea3D::can_interact_with(JoltBody3D const&) const */undefined4 JoltArea3D::can_interact_with(JoltArea3D *this, JoltBody3D *param_1) {
   return CONCAT31(( int3 )(( *(uint*)( this + 0x38 ) & *(uint*)( param_1 + 0x34 ) ) >> 8), ( *(uint*)( this + 0x38 ) & *(uint*)( param_1 + 0x34 ) ) != 0);
}
/* JoltArea3D::can_interact_with(JoltSoftBody3D const&) const */undefined8 JoltArea3D::can_interact_with(JoltSoftBody3D *param_1) {
   return 0;
}
/* JoltArea3D::can_interact_with(JoltArea3D const&) const */uint JoltArea3D::can_interact_with(JoltArea3D *this, JoltArea3D *param_1) {
   JoltArea3D JVar1;
   JVar1 = param_1[0x178];
   if (( ( JVar1 == (JoltArea3D)0x0 ) || ( ( *(uint*)( this + 0x38 ) & *(uint*)( param_1 + 0x34 ) ) == 0 ) ) && ( JVar1 = this[0x178] ),JVar1 != (JoltArea3D)0x0) {
      return CONCAT31(( int3 )(( *(uint*)( param_1 + 0x38 ) & *(uint*)( this + 0x34 ) ) >> 8), ( *(uint*)( param_1 + 0x38 ) & *(uint*)( this + 0x34 ) ) != 0);
   }

   return (uint)(byte)JVar1;
}
/* JoltArea3D::get_velocity_at_position(Vector3 const&) const */undefined1[16];JoltArea3D::get_velocity_at_position(Vector3 *param_1) {
   long in_FS_OFFSET;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ZEXT816(0);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::_get_object_layer() const */undefined8 JoltArea3D::_get_object_layer(JoltArea3D *this) {
   undefined8 uVar1;
   if (*(long*)( this + 0x28 ) != 0) {
      uVar1 = JoltSpace3D::map_to_object_layer(*(long*)( this + 0x28 ), '\x04' - (char)this[0x178], *(undefined4*)( this + 0x34 ), *(undefined4*)( this + 0x38 ));
      return uVar1;
   }

   _err_print_error("_get_object_layer", "modules/jolt_physics/objects/jolt_area_3d.cpp", 0x3a, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltArea3D::_add_to_space() */void JoltArea3D::_add_to_space(JoltArea3D *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   char cVar6;
   undefined2 uVar7;
   int iVar8;
   long *plVar9;
   long lVar10;
   long in_FS_OFFSET;
   uint local_2c;
   uint local_28;
   undefined4 uStack_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltShapedObject3D::build_shapes(SUB81(&local_28, 0));
   plVar2 = *(long**)( this + 0x90 );
   plVar9 = (long*)CONCAT44(uStack_24, local_28);
   if (plVar2 == plVar9) {
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar9 = plVar2 + 1;
         *(int*)plVar9 = (int)*plVar9 + -1;
         UNLOCK();
         if ((int)*plVar9 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }

   }
 else {
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar9 = plVar2 + 1;
         *(int*)plVar9 = (int)*plVar9 + -1;
         UNLOCK();
         if ((int)*plVar9 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

         plVar9 = (long*)CONCAT44(uStack_24, local_28);
      }

      *(long**)( this + 0x90 ) = plVar9;
   }

   local_2c = 0;
   local_28 = 0;
   JoltGroupFilter::encode_object((JoltObject3D*)this, &local_2c, &local_28);
   lVar3 = *(long*)( this + 0xa0 );
   *(JoltArea3D**)( lVar3 + 0x40 ) = this;
   uVar7 = _get_object_layer(this);
   uVar4 = CONCAT44(local_28, local_2c);
   *(undefined2*)( lVar3 + 0x48 ) = uVar7;
   lVar3 = *(long*)( this + 0xa0 );
   plVar2 = *(long**)( lVar3 + 0x50 );
   lVar10 = lVar3;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      *(int*)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

      *(undefined8*)( lVar3 + 0x50 ) = 0;
      lVar10 = *(long*)( this + 0xa0 );
   }

   *(undefined8*)( lVar3 + 0x58 ) = uVar4;
   *(undefined1(*) [16])( lVar10 + 0xb0 ) = ZEXT416(_LC4);
   uVar5 = _UNK_001076b8;
   uVar4 = __LC5;
   *(undefined1*)( lVar10 + 0x60 ) = 1;
   *(undefined8*)( lVar10 + 0xc0 ) = uVar4;
   *(undefined8*)( lVar10 + 200 ) = uVar5;
   uVar5 = _UNK_001076c8;
   uVar4 = __LC6;
   *(undefined1*)( lVar10 + 99 ) = 1;
   *(undefined8*)( lVar10 + 0xd0 ) = uVar4;
   *(undefined8*)( lVar10 + 0xd8 ) = uVar5;
   uVar5 = _UNK_001076d8;
   uVar4 = __LC7;
   *(undefined1*)( lVar10 + 0x65 ) = 0;
   *(undefined1*)( lVar10 + 0x90 ) = 2;
   *(undefined4*)( lVar10 + 0xa0 ) = 0x3f800000;
   *(undefined8*)( lVar10 + 0xe0 ) = uVar4;
   *(undefined8*)( lVar10 + 0xe8 ) = uVar5;
   cVar6 = JoltProjectSettings::areas_detect_static_bodies();
   lVar3 = *(long*)( this + 0xa0 );
   if (cVar6 != '\0') {
      *(undefined1*)( lVar3 + 100 ) = 1;
   }

   plVar2 = *(long**)( this + 0x90 );
   plVar9 = *(long**)( lVar3 + 0xf8 );
   if (plVar2 == plVar9) goto LAB_0010029e;
   if (plVar9 == (long*)0x0) {
      LAB_0010028b:*(long**)( lVar3 + 0xf8 ) = plVar2;
   }
 else {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_0010028b;
      ( **(code**)( *plVar9 + 8 ) )();
      *(long**)( lVar3 + 0xf8 ) = plVar2;
   }

   if (plVar2 != (long*)0x0) {
      LOCK();
      *(int*)( plVar2 + 1 ) = (int)plVar2[1] + 1;
      UNLOCK();
   }

   LAB_0010029e:plVar2 = *(long**)( lVar3 + 0xf0 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      *(int*)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

      *(undefined8*)( lVar3 + 0xf0 ) = 0;
   }

   iVar8 = JoltSpace3D::add_rigid_body(*(JoltObject3D**)( this + 0x28 ), (BodyCreationSettings*)this, SUB81(*(undefined8*)( this + 0xa0 ), 0));
   if (iVar8 != -1) {
      lVar3 = *(long*)( this + 0xa0 );
      *(int*)( this + 0x30 ) = iVar8;
      if (lVar3 != 0) {
         plVar2 = *(long**)( lVar3 + 0xf8 );
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            *(int*)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         plVar2 = *(long**)( lVar3 + 0xf0 );
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            *(int*)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
               ( **(code**)( *plVar2 + 0x18 ) )();
            }

         }

         plVar2 = *(long**)( lVar3 + 0x50 );
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            *(int*)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
               ( **(code**)( *plVar2 + 0x18 ) )();
            }

         }

         ( *JPH::Free )(lVar3);
      }

      *(undefined8*)( this + 0xa0 ) = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::_enqueue_call_queries() */void JoltArea3D::_enqueue_call_queries(JoltArea3D *this) {
   if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
      return;
   }

   return;
}
/* JoltArea3D::_dequeue_call_queries() */void JoltArea3D::_dequeue_call_queries(JoltArea3D *this) {
   if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::dequeue_call_queries(*(SelfList**)( this + 0x28 ));
      return;
   }

   return;
}
/* JoltArea3D::_remove_shape_pair(JoltArea3D::Overlap&, JPH::SubShapeID const&, JPH::SubShapeID
   const&) */undefined8 JoltArea3D::_remove_shape_pair(JoltArea3D *this, Overlap *param_1, SubShapeID *param_2, SubShapeID *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   uint *puVar4;
   int iVar5;
   int iVar6;
   undefined8 uVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   code *pcVar36;
   ulong uVar37;
   uint uVar38;
   ulong uVar39;
   ulong uVar40;
   long lVar41;
   long lVar42;
   ulong uVar43;
   uint uVar44;
   uint uVar45;
   uint uVar46;
   ulong uVar47;
   long *plVar48;
   uint uVar49;
   long lVar50;
   ulong uVar51;
   uint *puVar52;
   iVar5 = *(int*)param_3;
   lVar50 = *(long*)( param_1 + 8 );
   iVar6 = *(int*)param_2;
   if (( lVar50 == 0 ) || ( *(int*)( param_1 + 0x2c ) == 0 )) {
      return 0;
   }

   uVar51 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( param_1 + 0x28 )]);
   uVar39 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x28 ) * 8 );
   uVar38 = ( iVar6 * 0x16a88000 | ( uint )(iVar6 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar38 = ( uVar38 << 0xd | uVar38 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar5 * 0x16a88000 | ( uint )(iVar5 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar38 = ( uVar38 << 0xd | uVar38 >> 0x13 ) * 5 + 0xe6546b64;
   uVar38 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
   uVar38 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
   uVar46 = uVar38 ^ uVar38 >> 0x10;
   if (uVar38 == uVar38 >> 0x10) {
      uVar46 = 1;
      uVar40 = uVar39;
   }
 else {
      uVar40 = uVar46 * uVar39;
   }

   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar51;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar40;
   lVar41 = SUB168(auVar8 * auVar22, 8);
   uVar38 = *(uint*)( *(long*)( param_1 + 0x10 ) + lVar41 * 4 );
   uVar45 = SUB164(auVar8 * auVar22, 8);
   if (uVar38 == 0) {
      return 0;
   }

   uVar44 = 0;
   while (( ( uVar46 != uVar38 || ( lVar41 = *(long*)( lVar50 + lVar41 * 8 ) ),iVar6 != *(int*)( lVar41 + 0x10 ) ) ) || ( iVar5 != *(int*)( lVar41 + 0x14 ) )) {
      uVar44 = uVar44 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = ( uVar45 + 1 ) * uVar39;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar51;
      lVar41 = SUB168(auVar9 * auVar23, 8);
      uVar38 = *(uint*)( *(long*)( param_1 + 0x10 ) + lVar41 * 4 );
      uVar45 = SUB164(auVar9 * auVar23, 8);
      if (uVar38 == 0) {
         return 0;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar38 * uVar39;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar51;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ( ( &hash_table_size_primes )[*(uint*)( param_1 + 0x28 )] + uVar45 ) - SUB164(auVar10 * auVar24, 8) ) * uVar39;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar51;
      if (SUB164(auVar11 * auVar25, 8) < uVar44) {
         return 0;
      }

   }
;
   lVar41 = *(long*)( lVar50 + (ulong)uVar45 * 8 );
   if (lVar41 == 0) {
      return 0;
   }

   uVar7 = *(undefined8*)( lVar41 + 0x18 );
   uVar38 = *(uint*)( param_1 + 0x40 );
   if (uVar38 == *(uint*)( param_1 + 0x44 )) {
      uVar39 = ( ulong )(uVar38 * 2);
      if (uVar38 * 2 == 0) {
         uVar39 = 1;
      }

      *(int*)( param_1 + 0x44 ) = (int)uVar39;
      lVar42 = Memory::realloc_static(*(void**)( param_1 + 0x48 ), uVar39 * 8, false);
      *(long*)( param_1 + 0x48 ) = lVar42;
      if (lVar42 == 0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar36 = (code*)invalidInstructionException();
         ( *pcVar36 )();
      }

      uVar38 = *(uint*)( param_1 + 0x40 );
      lVar50 = *(long*)( param_1 + 8 );
      *(uint*)( param_1 + 0x40 ) = uVar38 + 1;
      *(undefined8*)( lVar42 + (ulong)uVar38 * 8 ) = uVar7;
      if (lVar50 == 0) goto LAB_00100835;
   }
 else {
      *(uint*)( param_1 + 0x40 ) = uVar38 + 1;
      *(undefined8*)( (long)*(void**)( param_1 + 0x48 ) + (ulong)uVar38 * 8 ) = uVar7;
   }

   if (*(int*)( param_1 + 0x2c ) != 0) {
      iVar5 = *(int*)( lVar41 + 0x10 );
      iVar6 = *(int*)( lVar41 + 0x14 );
      uVar46 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x28 )];
      uVar51 = CONCAT44(0, uVar46);
      uVar39 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x28 ) * 8 );
      uVar38 = ( iVar5 * 0x16a88000 | ( uint )(iVar5 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar38 = ( uVar38 << 0xd | uVar38 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar6 * 0x16a88000 | ( uint )(iVar6 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      uVar38 = ( uVar38 << 0xd | uVar38 >> 0x13 ) * 5 + 0xe6546b64;
      uVar38 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
      uVar38 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
      uVar45 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
         uVar45 = 1;
         uVar40 = uVar39;
      }
 else {
         uVar40 = uVar45 * uVar39;
      }

      lVar41 = *(long*)( param_1 + 0x10 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar51;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      lVar42 = SUB168(auVar12 * auVar26, 8);
      uVar38 = *(uint*)( lVar41 + lVar42 * 4 );
      uVar44 = SUB164(auVar12 * auVar26, 8);
      if (uVar38 != 0) {
         uVar49 = 0;
         do {
            uVar40 = (ulong)uVar44;
            if (( ( uVar45 == uVar38 ) && ( lVar42 = *(long*)( lVar50 + lVar42 * 8 ) * (int*)( lVar42 + 0x10 ) == iVar5 ) ) && ( *(int*)( lVar42 + 0x14 ) == iVar6 )) {
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( uVar44 + 1 ) * uVar39;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar51;
               uVar43 = SUB168(auVar16 * auVar30, 8);
               puVar52 = (uint*)( lVar41 + uVar43 * 4 );
               uVar45 = SUB164(auVar16 * auVar30, 8);
               uVar38 = *puVar52;
               if (( uVar38 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar38 * uVar39,auVar31._8_8_ = 0,auVar31._0_8_ = uVar51,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( uVar45 + uVar46 ) - SUB164(auVar17 * auVar31, 8) ) * uVar39,auVar32._8_8_ = 0,auVar32._0_8_ = uVar51,uVar37 = (ulong)uVar45,uVar47 = uVar40,SUB164(auVar18 * auVar32, 8) != 0) {
                  while (true) {
                     uVar40 = uVar37;
                     puVar4 = (uint*)( lVar41 + uVar47 * 4 );
                     *puVar52 = *puVar4;
                     puVar1 = (undefined8*)( lVar50 + uVar43 * 8 );
                     *puVar4 = uVar38;
                     puVar2 = (undefined8*)( lVar50 + uVar47 * 8 );
                     uVar7 = *puVar1;
                     *puVar1 = *puVar2;
                     *puVar2 = uVar7;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = ( (int)uVar40 + 1 ) * uVar39;
                     auVar35._8_8_ = 0;
                     auVar35._0_8_ = uVar51;
                     uVar43 = SUB168(auVar21 * auVar35, 8);
                     puVar52 = (uint*)( lVar41 + uVar43 * 4 );
                     uVar38 = *puVar52;
                     if (( uVar38 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = uVar38 * uVar39,auVar33._8_8_ = 0,auVar33._0_8_ = uVar51,auVar20._8_8_ = 0,auVar20._0_8_ = ( ( SUB164(auVar21 * auVar35, 8) + uVar46 ) - SUB164(auVar19 * auVar33, 8) ) * uVar39,auVar34._8_8_ = 0,auVar34._0_8_ = uVar51,SUB164(auVar20 * auVar34, 8) == 0) break;
                     uVar37 = uVar43 & 0xffffffff;
                     uVar47 = uVar40;
                  }
;
               }

               *(undefined4*)( lVar41 + uVar40 * 4 ) = 0;
               plVar3 = (long*)( lVar50 + uVar40 * 8 );
               plVar48 = (long*)*plVar3;
               if (*(long**)( param_1 + 0x18 ) == plVar48) {
                  *(long*)( param_1 + 0x18 ) = *plVar48;
                  plVar48 = (long*)*plVar3;
               }

               if (*(long**)( param_1 + 0x20 ) == plVar48) {
                  *(long*)( param_1 + 0x20 ) = plVar48[1];
                  plVar48 = (long*)*plVar3;
               }

               if ((long*)plVar48[1] != (long*)0x0) {
                  *(long*)plVar48[1] = *plVar48;
                  plVar48 = (long*)*plVar3;
               }

               if (*plVar48 != 0) {
                  *(long*)( *plVar48 + 8 ) = plVar48[1];
                  plVar48 = (long*)*plVar3;
               }

               Memory::free_static(plVar48, false);
               *(undefined8*)( *(long*)( param_1 + 8 ) + uVar40 * 8 ) = 0;
               *(int*)( param_1 + 0x2c ) = *(int*)( param_1 + 0x2c ) + -1;
               break;
            }

            uVar49 = uVar49 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( uVar44 + 1 ) * uVar39;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar42 = SUB168(auVar13 * auVar27, 8);
            uVar38 = *(uint*)( lVar41 + lVar42 * 4 );
            uVar44 = SUB164(auVar13 * auVar27, 8);
         }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = uVar38 * uVar39,auVar28._8_8_ = 0,auVar28._0_8_ = uVar51,auVar15._8_8_ = 0,auVar15._0_8_ = ( ( uVar46 + uVar44 ) - SUB164(auVar14 * auVar28, 8) ) * uVar39,auVar29._8_8_ = 0,auVar29._0_8_ = uVar51,uVar49 <= SUB164(auVar15 * auVar29, 8) );
      }

   }

   LAB_00100835:if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
   }

   return 1;
}
/* JoltArea3D::_notify_body_entered(JPH::BodyID const&) */void JoltArea3D::_notify_body_entered(BodyID *param_1) {
   JoltArea3D *pJVar1;
   long in_FS_OFFSET;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltSpace3D::read_body((BodyID*)local_68);
   if (( ( local_28 != 0 ) && ( pJVar1 = *(JoltArea3D**)( local_28 + 0x50 ) ),pJVar1 != (JoltArea3D*)0x0 )) {
      JoltBody3D::add_area(pJVar1);
   }

   JoltBodyAccessor3D::release();
   local_68[0] = JoltBody3D::remove_area;
   JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::_notify_body_exited(JPH::BodyID const&) */void JoltArea3D::_notify_body_exited(BodyID *param_1) {
   JoltArea3D *pJVar1;
   long in_FS_OFFSET;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltSpace3D::read_body((BodyID*)local_68);
   if (( ( local_28 != 0 ) && ( pJVar1 = *(JoltArea3D**)( local_28 + 0x50 ) ),pJVar1 != (JoltArea3D*)0x0 )) {
      JoltBody3D::remove_area(pJVar1);
   }

   JoltBodyAccessor3D::release();
   local_68[0] = JoltBody3D::remove_area;
   JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::_force_bodies_entered() */void JoltArea3D::_force_bodies_entered(JoltArea3D *this) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   code *pcVar5;
   ulong uVar6;
   void *pvVar7;
   uint uVar8;
   undefined8 uVar9;
   puVar2 = *(undefined8**)( this + 0xe0 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      if (*(int*)( (long)puVar2 + 0x44 ) != 0) {
         puVar3 = (undefined8*)puVar2[6];
         while (puVar3 != (undefined8*)0x0) {
            uVar9 = puVar3[3];
            uVar1 = *(uint*)( puVar2 + 0xb );
            lVar4 = puVar2[0xc];
            if (uVar1 != 0) {
               uVar6 = 0;
               do {
                  if (( *(int*)( lVar4 + uVar6 * 8 ) == (int)uVar9 ) && ( *(int*)( lVar4 + 4 + uVar6 * 8 ) == (int)( (ulong)uVar9 >> 0x20 ) )) {
                     uVar8 = (uint)uVar6;
                     if (uVar8 < uVar1) {
                        *(uint*)( puVar2 + 0xb ) = uVar1 - 1;
                        if (uVar8 < uVar1 - 1) {
                           memmove((void*)( lVar4 + uVar6 * 8 ), (void*)( lVar4 + ( ulong )(uVar8 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar8) * 8 + 8);
                           uVar9 = puVar3[3];
                        }

                     }
 else {
                        _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar6, (ulong)uVar1, "p_index", "count", "", false, false);
                        uVar9 = puVar3[3];
                     }

                     break;
                  }

                  uVar6 = uVar6 + 1;
               }
 while ( uVar6 != uVar1 );
            }

            uVar1 = *(uint*)( puVar2 + 9 );
            pvVar7 = (void*)puVar2[10];
            if (uVar1 == *(uint*)( (long)puVar2 + 0x4c )) {
               uVar6 = ( ulong )(uVar1 * 2);
               if (uVar1 * 2 == 0) {
                  uVar6 = 1;
               }

               *(int*)( (long)puVar2 + 0x4c ) = (int)uVar6;
               pvVar7 = (void*)Memory::realloc_static(pvVar7, uVar6 * 8, false);
               puVar2[10] = pvVar7;
               if (pvVar7 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               uVar1 = *(uint*)( puVar2 + 9 );
            }

            puVar3 = (undefined8*)*puVar3;
            *(uint*)( puVar2 + 9 ) = uVar1 + 1;
            *(undefined8*)( (long)pvVar7 + (ulong)uVar1 * 8 ) = uVar9;
         }
;
         if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
            JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
         }

      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* JoltArea3D::_force_bodies_exited(bool) */void JoltArea3D::_force_bodies_exited(JoltArea3D *this, bool param_1) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   code *pcVar4;
   ulong uVar5;
   void *pvVar6;
   uint uVar7;
   long lVar8;
   undefined8 uVar9;
   puVar2 = *(undefined8**)( this + 0xe0 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      if (*(int*)( (long)puVar2 + 0x44 ) != 0) {
         puVar3 = (undefined8*)puVar2[6];
         while (puVar3 != (undefined8*)0x0) {
            uVar9 = puVar3[3];
            uVar1 = *(uint*)( puVar2 + 9 );
            lVar8 = puVar2[10];
            if (uVar1 != 0) {
               uVar5 = 0;
               do {
                  if (( *(int*)( lVar8 + uVar5 * 8 ) == (int)uVar9 ) && ( *(int*)( lVar8 + 4 + uVar5 * 8 ) == (int)( (ulong)uVar9 >> 0x20 ) )) {
                     uVar7 = (uint)uVar5;
                     if (uVar7 < uVar1) {
                        *(uint*)( puVar2 + 9 ) = uVar1 - 1;
                        if (uVar7 < uVar1 - 1) {
                           memmove((void*)( lVar8 + uVar5 * 8 ), (void*)( lVar8 + ( ulong )(uVar7 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar7) * 8 + 8);
                           uVar9 = puVar3[3];
                        }

                     }
 else {
                        _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar5, (ulong)uVar1, "p_index", "count", "", false, false);
                        uVar9 = puVar3[3];
                     }

                     break;
                  }

                  uVar5 = uVar5 + 1;
               }
 while ( uVar5 != uVar1 );
            }

            uVar1 = *(uint*)( puVar2 + 0xb );
            pvVar6 = (void*)puVar2[0xc];
            if (uVar1 == *(uint*)( (long)puVar2 + 0x5c )) {
               uVar5 = ( ulong )(uVar1 * 2);
               if (uVar1 * 2 == 0) {
                  uVar5 = 1;
               }

               *(int*)( (long)puVar2 + 0x5c ) = (int)uVar5;
               pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar5 * 8, false);
               puVar2[0xc] = pvVar6;
               if (pvVar6 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               uVar1 = *(uint*)( puVar2 + 0xb );
            }

            puVar3 = (undefined8*)*puVar3;
            *(uint*)( puVar2 + 0xb ) = uVar1 + 1;
            *(undefined8*)( (long)pvVar6 + (ulong)uVar1 * 8 ) = uVar9;
         }
;
         if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
            JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
         }

         if (param_1) {
            if (( puVar2[4] != 0 ) && ( *(int*)( (long)puVar2 + 0x44 ) != 0 )) {
               lVar8 = 0;
               uVar1 = ( &hash_table_size_primes )[*(uint*)( puVar2 + 8 )];
               if (uVar1 != 0) {
                  do {
                     if (*(int*)( puVar2[5] + lVar8 ) != 0) {
                        *(int*)( puVar2[5] + lVar8 ) = 0;
                        Memory::free_static(*(void**)( puVar2[4] + lVar8 * 2 ), false);
                        *(undefined8*)( puVar2[4] + lVar8 * 2 ) = 0;
                     }

                     lVar8 = lVar8 + 4;
                  }
 while ( (ulong)uVar1 << 2 != lVar8 );
               }

               *(undefined4*)( (long)puVar2 + 0x44 ) = 0;
               *(undefined1(*) [16])( puVar2 + 6 ) = (undefined1[16])0x0;
            }

            _notify_body_exited((BodyID*)this);
         }

      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* JoltArea3D::_force_areas_entered() */void JoltArea3D::_force_areas_entered(JoltArea3D *this) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   code *pcVar5;
   ulong uVar6;
   void *pvVar7;
   uint uVar8;
   undefined8 uVar9;
   puVar2 = *(undefined8**)( this + 0x110 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      if (*(int*)( (long)puVar2 + 0x44 ) != 0) {
         puVar3 = (undefined8*)puVar2[6];
         while (puVar3 != (undefined8*)0x0) {
            uVar9 = puVar3[3];
            uVar1 = *(uint*)( puVar2 + 0xb );
            lVar4 = puVar2[0xc];
            if (uVar1 != 0) {
               uVar6 = 0;
               do {
                  if (( *(int*)( lVar4 + uVar6 * 8 ) == (int)uVar9 ) && ( *(int*)( lVar4 + 4 + uVar6 * 8 ) == (int)( (ulong)uVar9 >> 0x20 ) )) {
                     uVar8 = (uint)uVar6;
                     if (uVar8 < uVar1) {
                        *(uint*)( puVar2 + 0xb ) = uVar1 - 1;
                        if (uVar8 < uVar1 - 1) {
                           memmove((void*)( lVar4 + uVar6 * 8 ), (void*)( lVar4 + ( ulong )(uVar8 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar8) * 8 + 8);
                           uVar9 = puVar3[3];
                        }

                     }
 else {
                        _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar6, (ulong)uVar1, "p_index", "count", "", false, false);
                        uVar9 = puVar3[3];
                     }

                     break;
                  }

                  uVar6 = uVar6 + 1;
               }
 while ( uVar6 != uVar1 );
            }

            uVar1 = *(uint*)( puVar2 + 9 );
            pvVar7 = (void*)puVar2[10];
            if (uVar1 == *(uint*)( (long)puVar2 + 0x4c )) {
               uVar6 = ( ulong )(uVar1 * 2);
               if (uVar1 * 2 == 0) {
                  uVar6 = 1;
               }

               *(int*)( (long)puVar2 + 0x4c ) = (int)uVar6;
               pvVar7 = (void*)Memory::realloc_static(pvVar7, uVar6 * 8, false);
               puVar2[10] = pvVar7;
               if (pvVar7 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               uVar1 = *(uint*)( puVar2 + 9 );
            }

            puVar3 = (undefined8*)*puVar3;
            *(uint*)( puVar2 + 9 ) = uVar1 + 1;
            *(undefined8*)( (long)pvVar7 + (ulong)uVar1 * 8 ) = uVar9;
         }
;
         if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
            JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
         }

      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* JoltArea3D::_force_areas_exited(bool) */void JoltArea3D::_force_areas_exited(JoltArea3D *this, bool param_1) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   code *pcVar4;
   ulong uVar5;
   void *pvVar6;
   uint uVar7;
   long lVar8;
   undefined8 uVar9;
   puVar2 = *(undefined8**)( this + 0x110 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      if (*(int*)( (long)puVar2 + 0x44 ) != 0) {
         puVar3 = (undefined8*)puVar2[6];
         while (puVar3 != (undefined8*)0x0) {
            uVar9 = puVar3[3];
            uVar1 = *(uint*)( puVar2 + 9 );
            lVar8 = puVar2[10];
            if (uVar1 != 0) {
               uVar5 = 0;
               do {
                  if (( *(int*)( lVar8 + uVar5 * 8 ) == (int)uVar9 ) && ( *(int*)( lVar8 + 4 + uVar5 * 8 ) == (int)( (ulong)uVar9 >> 0x20 ) )) {
                     uVar7 = (uint)uVar5;
                     if (uVar7 < uVar1) {
                        *(uint*)( puVar2 + 9 ) = uVar1 - 1;
                        if (uVar7 < uVar1 - 1) {
                           memmove((void*)( lVar8 + uVar5 * 8 ), (void*)( lVar8 + ( ulong )(uVar7 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar7) * 8 + 8);
                           uVar9 = puVar3[3];
                        }

                     }
 else {
                        _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar5, (ulong)uVar1, "p_index", "count", "", false, false);
                        uVar9 = puVar3[3];
                     }

                     break;
                  }

                  uVar5 = uVar5 + 1;
               }
 while ( uVar5 != uVar1 );
            }

            uVar1 = *(uint*)( puVar2 + 0xb );
            pvVar6 = (void*)puVar2[0xc];
            if (uVar1 == *(uint*)( (long)puVar2 + 0x5c )) {
               uVar5 = ( ulong )(uVar1 * 2);
               if (uVar1 * 2 == 0) {
                  uVar5 = 1;
               }

               *(int*)( (long)puVar2 + 0x5c ) = (int)uVar5;
               pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar5 * 8, false);
               puVar2[0xc] = pvVar6;
               if (pvVar6 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               uVar1 = *(uint*)( puVar2 + 0xb );
            }

            puVar3 = (undefined8*)*puVar3;
            *(uint*)( puVar2 + 0xb ) = uVar1 + 1;
            *(undefined8*)( (long)pvVar6 + (ulong)uVar1 * 8 ) = uVar9;
         }
;
         if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
            JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
         }

         if (( ( param_1 ) && ( puVar2[4] != 0 ) ) && ( *(int*)( (long)puVar2 + 0x44 ) != 0 )) {
            lVar8 = 0;
            uVar1 = ( &hash_table_size_primes )[*(uint*)( puVar2 + 8 )];
            if (uVar1 != 0) {
               do {
                  if (*(int*)( puVar2[5] + lVar8 ) != 0) {
                     *(int*)( puVar2[5] + lVar8 ) = 0;
                     Memory::free_static(*(void**)( puVar2[4] + lVar8 * 2 ), false);
                     *(undefined8*)( puVar2[4] + lVar8 * 2 ) = 0;
                  }

                  lVar8 = lVar8 + 4;
               }
 while ( (ulong)uVar1 << 2 != lVar8 );
            }

            *(undefined4*)( (long)puVar2 + 0x44 ) = 0;
            *(undefined1(*) [16])( puVar2 + 6 ) = (undefined1[16])0x0;
         }

      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* JoltArea3D::_update_group_filter() */void JoltArea3D::_update_group_filter(JoltArea3D *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long in_FS_OFFSET;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      JoltSpace3D::write_body((BodyID*)local_68);
      plVar3 = JoltGroupFilter::instance;
      if (local_28 == 0) {
         _err_print_error("_update_group_filter", "modules/jolt_physics/objects/jolt_area_3d.cpp", 0x127, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         plVar2 = *(long**)( local_28 + 0x58 );
         if (JoltGroupFilter::instance != plVar2) {
            if (plVar2 != (long*)0x0) {
               LOCK();
               plVar1 = plVar2 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar2 + 0x18 ) )();
               }

            }

            *(long**)( local_28 + 0x58 ) = plVar3;
            if (plVar3 != (long*)0x0) {
               LOCK();
               *(int*)( plVar3 + 1 ) = (int)plVar3[1] + 1;
               UNLOCK();
            }

         }

      }

      JoltBodyAccessor3D::release();
      local_68[0] = JoltObject3D::_update_object_layer;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::_space_changed() */void JoltArea3D::_space_changed(JoltArea3D *this) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   _update_group_filter(this);
   lVar2 = *(long*)( this + 0x28 );
   if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
      fVar3 = *(float*)( this + 300 );
      fVar4 = *(float*)( this + 0x130 );
      fVar1 = *(float*)( this + 0x15c );
      lVar2 = *(long*)( lVar2 + 0x68 );
      *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
      *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
      *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
      *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
      return;
   }

   return;
}
/* JoltArea3D::_update_default_gravity() */void JoltArea3D::_update_default_gravity(JoltArea3D *this) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   lVar2 = *(long*)( this + 0x28 );
   if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
      fVar3 = *(float*)( this + 300 );
      fVar4 = *(float*)( this + 0x130 );
      fVar1 = *(float*)( this + 0x15c );
      lVar2 = *(long*)( lVar2 + 0x68 );
      *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
      *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
      *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
      *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
      return;
   }

   return;
}
/* JoltArea3D::_events_changed() */void JoltArea3D::_events_changed(JoltArea3D *this) {
   if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
      return;
   }

   return;
}
/* JoltArea3D::_body_monitoring_changed() */void JoltArea3D::_body_monitoring_changed(JoltArea3D *this) {
   char cVar1;
   cVar1 = Callable::is_valid();
   if (cVar1 != '\0') {
      _force_bodies_entered(this);
      return;
   }

   _force_bodies_exited(this, false);
   return;
}
/* JoltArea3D::_area_monitoring_changed() */void JoltArea3D::_area_monitoring_changed(JoltArea3D *this) {
   char cVar1;
   cVar1 = Callable::is_valid();
   if (cVar1 != '\0') {
      _force_areas_entered(this);
      return;
   }

   _force_areas_exited(this, false);
   return;
}
/* JoltArea3D::_monitorable_changed() */void JoltArea3D::_monitorable_changed(void) {
   JoltObject3D::_update_object_layer();
   return;
}
/* JoltArea3D::_gravity_changed() */void JoltArea3D::_gravity_changed(JoltArea3D *this) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   lVar2 = *(long*)( this + 0x28 );
   if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
      fVar3 = *(float*)( this + 300 );
      fVar4 = *(float*)( this + 0x130 );
      fVar1 = *(float*)( this + 0x15c );
      lVar2 = *(long*)( lVar2 + 0x68 );
      *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
      *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
      *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
      *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltArea3D::JoltArea3D() */void JoltArea3D::JoltArea3D(JoltArea3D *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   JoltShapedObject3D::JoltShapedObject3D((JoltShapedObject3D*)this, 3);
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined***)this = &PTR__get_broad_phase_layer_001073e0;
   uVar1 = _LC18;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xf0 ) = uVar1;
   *(undefined8*)( this + 0x120 ) = uVar1;
   uVar3 = _LC19;
   *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x100 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
   uVar2 = _UNK_001076e8;
   uVar1 = __LC21;
   *(undefined8*)( this + 0x128 ) = uVar3;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xc0 ) = 0;
   *(JoltArea3D**)( this + 0xb0 ) = this;
   *(undefined4*)( this + 0x130 ) = 0;
   *(undefined8*)( this + 0x138 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined8*)( this + 0x148 ) = 0;
   *(undefined8*)( this + 0x150 ) = 0;
   *(undefined8*)( this + 0x168 ) = 0x3dcccccd;
   *(undefined8*)( this + 0x170 ) = 0;
   *(undefined2*)( this + 0x178 ) = 0;
   *(undefined8*)( this + 0x158 ) = uVar1;
   *(undefined8*)( this + 0x160 ) = uVar2;
   return;
}
/* JoltArea3D::is_default_area() const */bool JoltArea3D::is_default_area(JoltArea3D *this) {
   bool bVar1;
   bVar1 = false;
   if (*(long*)( this + 0x28 ) != 0) {
      bVar1 = *(JoltArea3D**)( *(long*)( this + 0x28 ) + 0x78 ) == this;
   }

   return bVar1;
}
/* JoltArea3D::set_default_area(bool) */void JoltArea3D::set_default_area(JoltArea3D *this, bool param_1) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   if (( ( param_1 ) && ( lVar2 = *(long*)( this + 0x28 ) ),lVar2 != 0 )) {
      fVar3 = *(float*)( this + 300 );
      fVar4 = *(float*)( this + 0x130 );
      fVar1 = *(float*)( this + 0x15c );
      lVar2 = *(long*)( lVar2 + 0x68 );
      *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
      *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
      *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
      *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
      return;
   }

   return;
}
/* JoltArea3D::set_body_monitor_callback(Callable const&) */void JoltArea3D::set_body_monitor_callback(JoltArea3D *this, Callable *param_1) {
   char cVar1;
   cVar1 = Callable::operator ==(param_1, (Callable*)( this + 0x138 ));
   if (cVar1 != '\0') {
      return;
   }

   Callable::operator =((Callable*)( this + 0x138 ), param_1);
   cVar1 = Callable::is_valid();
   if (cVar1 != '\0') {
      _force_bodies_entered(this);
      return;
   }

   _force_bodies_exited(this, false);
   return;
}
/* JoltArea3D::set_area_monitor_callback(Callable const&) */void JoltArea3D::set_area_monitor_callback(JoltArea3D *this, Callable *param_1) {
   char cVar1;
   cVar1 = Callable::operator ==(param_1, (Callable*)( this + 0x148 ));
   if (cVar1 != '\0') {
      return;
   }

   Callable::operator =((Callable*)( this + 0x148 ), param_1);
   cVar1 = Callable::is_valid();
   if (cVar1 != '\0') {
      _force_areas_entered(this);
      return;
   }

   _force_areas_exited(this, false);
   return;
}
/* JoltArea3D::set_monitorable(bool) */void JoltArea3D::set_monitorable(JoltArea3D *this, bool param_1) {
   if (this[0x178] != (JoltArea3D)param_1) {
      this[0x178] = (JoltArea3D)param_1;
      JoltObject3D::_update_object_layer();
      return;
   }

   return;
}
/* JoltArea3D::can_monitor(JoltArea3D const&) const */uint JoltArea3D::can_monitor(JoltArea3D *this, JoltArea3D *param_1) {
   uint uVar1;
   uVar1 = (uint)(byte)param_1[0x178];
   if (param_1[0x178] != (JoltArea3D)0x0) {
      uVar1 = CONCAT31(( int3 )(( *(uint*)( this + 0x38 ) & *(uint*)( param_1 + 0x34 ) ) >> 8), ( *(uint*)( this + 0x38 ) & *(uint*)( param_1 + 0x34 ) ) != 0);
   }

   return uVar1;
}
/* JoltArea3D::set_point_gravity(bool) */void JoltArea3D::set_point_gravity(JoltArea3D *this, bool param_1) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   if (this[0x179] != (JoltArea3D)param_1) {
      lVar2 = *(long*)( this + 0x28 );
      this[0x179] = (JoltArea3D)param_1;
      if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
         fVar3 = *(float*)( this + 300 );
         fVar4 = *(float*)( this + 0x130 );
         fVar1 = *(float*)( this + 0x15c );
         lVar2 = *(long*)( lVar2 + 0x68 );
         *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
         *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
         *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
         *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
         return;
      }

   }

   return;
}
/* JoltArea3D::set_gravity(float) */void JoltArea3D::set_gravity(JoltArea3D *this, float param_1) {
   float fVar1;
   float fVar2;
   long lVar3;
   if (param_1 != *(float*)( this + 0x15c )) {
      lVar3 = *(long*)( this + 0x28 );
      *(float*)( this + 0x15c ) = param_1;
      if (( lVar3 != 0 ) && ( this == *(JoltArea3D**)( lVar3 + 0x78 ) )) {
         fVar1 = *(float*)( this + 0x130 );
         fVar2 = *(float*)( this + 300 );
         lVar3 = *(long*)( lVar3 + 0x68 );
         *(float*)( lVar3 + 0x400 ) = param_1 * *(float*)( this + 0x128 );
         *(float*)( lVar3 + 0x404 ) = param_1 * fVar2;
         *(float*)( lVar3 + 0x408 ) = param_1 * fVar1;
         *(float*)( lVar3 + 0x40c ) = param_1 * fVar1;
         return;
      }

   }

   return;
}
/* JoltArea3D::set_point_gravity_distance(float) */void JoltArea3D::set_point_gravity_distance(JoltArea3D *this, float param_1) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   if (param_1 != *(float*)( this + 0x160 )) {
      lVar2 = *(long*)( this + 0x28 );
      *(float*)( this + 0x160 ) = param_1;
      if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
         fVar3 = *(float*)( this + 300 );
         fVar4 = *(float*)( this + 0x130 );
         fVar1 = *(float*)( this + 0x15c );
         lVar2 = *(long*)( lVar2 + 0x68 );
         *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
         *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
         *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
         *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
         return;
      }

   }

   return;
}
/* JoltArea3D::set_gravity_mode(PhysicsServer3D::AreaSpaceOverrideMode) */void JoltArea3D::set_gravity_mode(JoltArea3D *this, int param_2) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   if (*(int*)( this + 0x16c ) != param_2) {
      lVar2 = *(long*)( this + 0x28 );
      *(int*)( this + 0x16c ) = param_2;
      if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
         fVar3 = *(float*)( this + 300 );
         fVar4 = *(float*)( this + 0x130 );
         fVar1 = *(float*)( this + 0x15c );
         lVar2 = *(long*)( lVar2 + 0x68 );
         *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
         *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
         *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
         *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
         return;
      }

   }

   return;
}
/* JoltArea3D::set_gravity_vector(Vector3 const&) */void JoltArea3D::set_gravity_vector(JoltArea3D *this, Vector3 *param_1) {
   float fVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   if (( ( *(float*)( this + 0x128 ) != *(float*)param_1 ) || ( *(float*)( this + 300 ) != *(float*)( param_1 + 4 ) ) ) || ( *(float*)( this + 0x130 ) != *(float*)( param_1 + 8 ) )) {
      *(undefined8*)( this + 0x128 ) = *(undefined8*)param_1;
      *(undefined4*)( this + 0x130 ) = *(undefined4*)( param_1 + 8 );
      lVar2 = *(long*)( this + 0x28 );
      if (( lVar2 != 0 ) && ( this == *(JoltArea3D**)( lVar2 + 0x78 ) )) {
         fVar3 = *(float*)( this + 300 );
         fVar4 = *(float*)( this + 0x130 );
         fVar1 = *(float*)( this + 0x15c );
         lVar2 = *(long*)( lVar2 + 0x68 );
         *(float*)( lVar2 + 0x400 ) = *(float*)( this + 0x128 ) * fVar1;
         *(float*)( lVar2 + 0x404 ) = fVar3 * fVar1;
         *(float*)( lVar2 + 0x408 ) = fVar4 * fVar1;
         *(float*)( lVar2 + 0x40c ) = fVar4 * fVar1;
         return;
      }

   }

   return;
}
/* JoltArea3D::compute_gravity(Vector3 const&) const */void JoltArea3D::compute_gravity(JoltArea3D *this, Vector3 *param_1) {
   long lVar1;
   undefined1 auVar2[16];
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   undefined8 local_58;
   float fStack_54;
   float local_50;
   float fStack_4c;
   float local_48;
   float fStack_44;
   float local_40;
   float local_3c;
   float local_38;
   undefined8 local_34;
   float local_2c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x179] != (JoltArea3D)0x0) {
      JoltShapedObject3D::get_transform_scaled();
      fVar7 = *(float*)( this + 0x130 );
      fVar5 = (float)*(undefined8*)( this + 0x128 );
      fVar6 = (float)( ( ulong ) * (undefined8*)( this + 0x128 ) >> 0x20 );
      fVar4 = ( local_40 * fVar5 + local_3c * fVar6 + local_38 * fVar7 + local_2c ) - *(float*)( param_1 + 8 );
      auVar3._0_4_ = ( (float)local_58 * fVar5 + fVar6 * fStack_54 + local_50 * fVar7 + (float)local_34 ) - (float)*(undefined8*)param_1;
      auVar3._4_4_ = ( fStack_4c * fVar5 + fVar6 * local_48 + fStack_44 * fVar7 + (float)( (ulong)local_34 >> 0x20 ) ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
      auVar3._8_8_ = 0;
      fVar4 = auVar3._0_4_ * auVar3._0_4_ + auVar3._4_4_ * auVar3._4_4_ + fVar4 * fVar4;
      fVar7 = _LC23;
      if (_LC24 < fVar4) {
         fVar7 = SQRT(fVar4);
      }

      auVar2._4_4_ = fVar7;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = (int)_LC25;
      auVar2._12_4_ = (int)( (ulong)_LC25 >> 0x20 );
      divps(auVar3, auVar2);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::body_shape_exited(JPH::BodyID const&, JPH::SubShapeID const&, JPH::SubShapeID const&)
    */ulong JoltArea3D::body_shape_exited(JoltArea3D *this, BodyID *param_1, SubShapeID *param_2, SubShapeID *param_3) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   ulong uVar12;
   uint uVar13;
   ulong uVar14;
   long lVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   lVar2 = *(long*)( this + 0xd0 );
   uVar1 = *(uint*)param_1;
   if (( lVar2 != 0 ) && ( *(int*)( this + 0xf4 ) != 0 )) {
      uVar12 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xf0 ) * 8 );
      uVar11 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
      uVar11 = ( uVar11 ^ uVar11 >> 0xd ) * -0x3d4d51cb;
      uVar16 = uVar11 ^ uVar11 >> 0x10;
      if (uVar11 == uVar11 >> 0x10) {
         uVar16 = 1;
         uVar14 = uVar12;
      }
 else {
         uVar14 = uVar16 * uVar12;
      }

      uVar17 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0xf0 )]);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar17;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( *(long*)( this + 0xd8 ) + lVar15 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         while (( uVar16 != uVar11 || ( uVar1 != *(uint*)( *(long*)( lVar2 + lVar15 * 8 ) + 0x10 ) ) )) {
            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( uVar13 + 1 ) * uVar12;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( *(long*)( this + 0xd8 ) + lVar15 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
            if (uVar11 == 0) {
               return 0;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar11 * uVar12;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar17;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ( ( &hash_table_size_primes )[*(uint*)( this + 0xf0 )] + uVar13 ) - SUB164(auVar5 * auVar9, 8) ) * uVar12;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar17;
            if (SUB164(auVar6 * auVar10, 8) < uVar18) {
               return 0;
            }

         }
;
         lVar2 = *(long*)( lVar2 + (ulong)uVar13 * 8 );
         uVar12 = _remove_shape_pair(this, (Overlap*)( lVar2 + 0x18 ), param_2, param_3);
         if ((char)uVar12 != '\0') {
            if (*(int*)( lVar2 + 0x44 ) == 0) {
               _notify_body_exited((BodyID*)this);
               return uVar12 & 0xff;
            }

            return uVar12;
         }

      }

   }

   return 0;
}
/* JoltArea3D::area_shape_exited(JPH::BodyID const&, JPH::SubShapeID const&, JPH::SubShapeID const&)
    */undefined8 JoltArea3D::area_shape_exited(JoltArea3D *this, BodyID *param_1, SubShapeID *param_2, SubShapeID *param_3) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   uint uVar12;
   undefined8 uVar13;
   uint uVar14;
   ulong uVar15;
   long lVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   lVar2 = *(long*)( this + 0x100 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x124 ) != 0 )) {
      uVar1 = *(uint*)param_1;
      uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x120 ) * 8 );
      uVar12 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
      uVar12 = ( uVar12 ^ uVar12 >> 0xd ) * -0x3d4d51cb;
      uVar17 = uVar12 ^ uVar12 >> 0x10;
      if (uVar12 == uVar12 >> 0x10) {
         uVar17 = 1;
         uVar15 = uVar3;
      }
 else {
         uVar15 = uVar17 * uVar3;
      }

      uVar18 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x120 )]);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      lVar16 = SUB168(auVar4 * auVar8, 8);
      uVar12 = *(uint*)( *(long*)( this + 0x108 ) + lVar16 * 4 );
      uVar14 = SUB164(auVar4 * auVar8, 8);
      if (uVar12 != 0) {
         uVar19 = 0;
         do {
            if (( uVar17 == uVar12 ) && ( uVar1 == *(uint*)( *(long*)( lVar2 + lVar16 * 8 ) + 0x10 ) )) {
               uVar13 = _remove_shape_pair(this, (Overlap*)( *(long*)( lVar2 + (ulong)uVar14 * 8 ) + 0x18 ), param_2, param_3);
               return uVar13;
            }

            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( uVar14 + 1 ) * uVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar18;
            lVar16 = SUB168(auVar5 * auVar9, 8);
            uVar12 = *(uint*)( *(long*)( this + 0x108 ) + lVar16 * 4 );
            uVar14 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar12 * uVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( ( &hash_table_size_primes )[*(uint*)( this + 0x120 )] + uVar14 ) - SUB164(auVar6 * auVar10, 8) ) * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,uVar19 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   return 0;
}
/* JoltArea3D::shape_exited(JPH::BodyID const&, JPH::SubShapeID const&, JPH::SubShapeID const&) */void JoltArea3D::shape_exited(JoltArea3D *this, BodyID *param_1, SubShapeID *param_2, SubShapeID *param_3) {
   char cVar1;
   cVar1 = body_shape_exited(this, param_1, param_2, param_3);
   if (cVar1 != '\0') {
      return;
   }

   area_shape_exited(this, param_1, param_2, param_3);
   return;
}
/* JoltArea3D::body_exited(JPH::BodyID const&, bool) */void JoltArea3D::body_exited(JoltArea3D *this, BodyID *param_1, bool param_2) {
   uint uVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   code *pcVar12;
   uint uVar13;
   int *piVar14;
   void *pvVar15;
   uint uVar16;
   ulong uVar17;
   long lVar18;
   ulong uVar19;
   uint uVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   lVar2 = *(long*)( this + 0xd0 );
   uVar1 = *(uint*)param_1;
   if (( lVar2 != 0 ) && ( *(int*)( this + 0xf4 ) != 0 )) {
      uVar22 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0xf0 )]);
      uVar19 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xf0 ) * 8 );
      uVar13 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
      uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
      uVar20 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
         uVar20 = 1;
         uVar17 = uVar19;
      }
 else {
         uVar17 = uVar20 * uVar19;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar22;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar18 = SUB168(auVar4 * auVar8, 8);
      uVar13 = *(uint*)( *(long*)( this + 0xd8 ) + lVar18 * 4 );
      uVar16 = SUB164(auVar4 * auVar8, 8);
      if (uVar13 != 0) {
         uVar21 = 0;
         while (( uVar20 != uVar13 || ( uVar1 != *(uint*)( *(long*)( lVar2 + lVar18 * 8 ) + 0x10 ) ) )) {
            uVar21 = uVar21 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( uVar16 + 1 ) * uVar19;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar22;
            lVar18 = SUB168(auVar5 * auVar9, 8);
            uVar13 = *(uint*)( *(long*)( this + 0xd8 ) + lVar18 * 4 );
            uVar16 = SUB164(auVar5 * auVar9, 8);
            if (uVar13 == 0) {
               return;
            }

            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar13 * uVar19;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar22;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ( ( &hash_table_size_primes )[*(uint*)( this + 0xf0 )] + uVar16 ) - SUB164(auVar6 * auVar10, 8) ) * uVar19;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar22;
            if (SUB164(auVar7 * auVar11, 8) < uVar21) {
               return;
            }

         }
;
         lVar2 = *(long*)( lVar2 + (ulong)uVar16 * 8 );
         if (*(int*)( lVar2 + 0x44 ) != 0) {
            puVar3 = *(undefined8**)( lVar2 + 0x30 );
            while (puVar3 != (undefined8*)0x0) {
               uVar23 = puVar3[3];
               uVar1 = *(uint*)( lVar2 + 0x48 );
               lVar18 = *(long*)( lVar2 + 0x50 );
               if (uVar1 != 0) {
                  uVar19 = 0;
                  do {
                     if (( *(int*)( lVar18 + uVar19 * 8 ) == (int)uVar23 ) && ( (int)( (ulong)uVar23 >> 0x20 ) == *(int*)( lVar18 + 4 + uVar19 * 8 ) )) {
                        uVar13 = (uint)uVar19;
                        if (uVar13 < uVar1) {
                           *(uint*)( lVar2 + 0x48 ) = uVar1 - 1;
                           if (uVar13 < uVar1 - 1) {
                              memmove((void*)( lVar18 + uVar19 * 8 ), (void*)( lVar18 + ( ulong )(uVar13 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar13) * 8 + 8);
                              uVar23 = puVar3[3];
                           }

                        }
 else {
                           _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar19, (ulong)uVar1, "p_index", "count", "", false, false);
                           uVar23 = puVar3[3];
                        }

                        break;
                     }

                     uVar19 = uVar19 + 1;
                  }
 while ( uVar1 != uVar19 );
               }

               uVar1 = *(uint*)( lVar2 + 0x58 );
               pvVar15 = *(void**)( lVar2 + 0x60 );
               if (uVar1 == *(uint*)( lVar2 + 0x5c )) {
                  uVar19 = ( ulong )(uVar1 * 2);
                  if (uVar1 * 2 == 0) {
                     uVar19 = 1;
                  }

                  *(int*)( lVar2 + 0x5c ) = (int)uVar19;
                  pvVar15 = (void*)Memory::realloc_static(pvVar15, uVar19 * 8, false);
                  *(void**)( lVar2 + 0x60 ) = pvVar15;
                  if (pvVar15 == (void*)0x0) {
                     _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar12 = (code*)invalidInstructionException();
                     ( *pcVar12 )();
                  }

                  uVar1 = *(uint*)( lVar2 + 0x58 );
               }

               puVar3 = (undefined8*)*puVar3;
               *(uint*)( lVar2 + 0x58 ) = uVar1 + 1;
               *(undefined8*)( (long)pvVar15 + (ulong)uVar1 * 8 ) = uVar23;
            }
;
            if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
               JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
            }

            if (( *(long*)( lVar2 + 0x20 ) != 0 ) && ( *(int*)( lVar2 + 0x44 ) != 0 )) {
               lVar18 = 0;
               uVar1 = ( &hash_table_size_primes )[*(uint*)( lVar2 + 0x40 )];
               if (uVar1 != 0) {
                  do {
                     piVar14 = (int*)( *(long*)( lVar2 + 0x28 ) + lVar18 );
                     if (*piVar14 != 0) {
                        *piVar14 = 0;
                        Memory::free_static(*(void**)( *(long*)( lVar2 + 0x20 ) + lVar18 * 2 ), false);
                        *(undefined8*)( *(long*)( lVar2 + 0x20 ) + lVar18 * 2 ) = 0;
                     }

                     lVar18 = lVar18 + 4;
                  }
 while ( (ulong)uVar1 << 2 != lVar18 );
               }

               *(undefined4*)( lVar2 + 0x44 ) = 0;
               *(undefined1(*) [16])( lVar2 + 0x30 ) = (undefined1[16])0x0;
            }

            if (param_2) {
               _notify_body_exited((BodyID*)this);
               return;
            }

         }

      }

   }

   return;
}
/* JoltArea3D::area_exited(JPH::BodyID const&) */void JoltArea3D::area_exited(JoltArea3D *this, BodyID *param_1) {
   uint uVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   code *pcVar12;
   uint uVar13;
   int *piVar14;
   void *pvVar15;
   uint uVar16;
   ulong uVar17;
   long lVar18;
   ulong uVar19;
   uint uVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   lVar2 = *(long*)( this + 0x100 );
   uVar1 = *(uint*)param_1;
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x124 ) != 0 )) {
      uVar19 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x120 ) * 8 );
      uVar22 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x120 )]);
      uVar13 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
      uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
      uVar20 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
         uVar20 = 1;
         uVar17 = uVar19;
      }
 else {
         uVar17 = uVar20 * uVar19;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar22;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar18 = SUB168(auVar4 * auVar8, 8);
      uVar13 = *(uint*)( *(long*)( this + 0x108 ) + lVar18 * 4 );
      uVar16 = SUB164(auVar4 * auVar8, 8);
      if (uVar13 != 0) {
         uVar21 = 0;
         while (( uVar13 != uVar20 || ( uVar1 != *(uint*)( *(long*)( lVar2 + lVar18 * 8 ) + 0x10 ) ) )) {
            uVar21 = uVar21 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( uVar16 + 1 ) * uVar19;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar22;
            lVar18 = SUB168(auVar5 * auVar9, 8);
            uVar13 = *(uint*)( *(long*)( this + 0x108 ) + lVar18 * 4 );
            uVar16 = SUB164(auVar5 * auVar9, 8);
            if (uVar13 == 0) {
               return;
            }

            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar13 * uVar19;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar22;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ( ( &hash_table_size_primes )[*(uint*)( this + 0x120 )] + uVar16 ) - SUB164(auVar6 * auVar10, 8) ) * uVar19;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar22;
            if (SUB164(auVar7 * auVar11, 8) < uVar21) {
               return;
            }

         }
;
         lVar2 = *(long*)( lVar2 + (ulong)uVar16 * 8 );
         if (*(int*)( lVar2 + 0x44 ) != 0) {
            puVar3 = *(undefined8**)( lVar2 + 0x30 );
            while (puVar3 != (undefined8*)0x0) {
               uVar23 = puVar3[3];
               uVar1 = *(uint*)( lVar2 + 0x48 );
               lVar18 = *(long*)( lVar2 + 0x50 );
               if (uVar1 != 0) {
                  uVar19 = 0;
                  do {
                     if (( *(int*)( lVar18 + uVar19 * 8 ) == (int)uVar23 ) && ( *(int*)( lVar18 + 4 + uVar19 * 8 ) == (int)( (ulong)uVar23 >> 0x20 ) )) {
                        uVar13 = (uint)uVar19;
                        if (uVar13 < uVar1) {
                           *(uint*)( lVar2 + 0x48 ) = uVar1 - 1;
                           if (uVar13 < uVar1 - 1) {
                              memmove((void*)( lVar18 + uVar19 * 8 ), (void*)( lVar18 + ( ulong )(uVar13 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar13) * 8 + 8);
                              uVar23 = puVar3[3];
                           }

                        }
 else {
                           _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar19, (ulong)uVar1, "p_index", "count", "", false, false);
                           uVar23 = puVar3[3];
                        }

                        break;
                     }

                     uVar19 = uVar19 + 1;
                  }
 while ( uVar1 != uVar19 );
               }

               uVar1 = *(uint*)( lVar2 + 0x58 );
               pvVar15 = *(void**)( lVar2 + 0x60 );
               if (uVar1 == *(uint*)( lVar2 + 0x5c )) {
                  uVar19 = ( ulong )(uVar1 * 2);
                  if (uVar1 * 2 == 0) {
                     uVar19 = 1;
                  }

                  *(int*)( lVar2 + 0x5c ) = (int)uVar19;
                  pvVar15 = (void*)Memory::realloc_static(pvVar15, uVar19 * 8, false);
                  *(void**)( lVar2 + 0x60 ) = pvVar15;
                  if (pvVar15 == (void*)0x0) {
                     _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar12 = (code*)invalidInstructionException();
                     ( *pcVar12 )();
                  }

                  uVar1 = *(uint*)( lVar2 + 0x58 );
               }

               puVar3 = (undefined8*)*puVar3;
               *(uint*)( lVar2 + 0x58 ) = uVar1 + 1;
               *(undefined8*)( (long)pvVar15 + (ulong)uVar1 * 8 ) = uVar23;
            }
;
            if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
               JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
            }

            if (( *(long*)( lVar2 + 0x20 ) != 0 ) && ( *(int*)( lVar2 + 0x44 ) != 0 )) {
               uVar1 = ( &hash_table_size_primes )[*(uint*)( lVar2 + 0x40 )];
               lVar18 = 0;
               if (uVar1 != 0) {
                  do {
                     piVar14 = (int*)( *(long*)( lVar2 + 0x28 ) + lVar18 );
                     if (*piVar14 != 0) {
                        *piVar14 = 0;
                        Memory::free_static(*(void**)( *(long*)( lVar2 + 0x20 ) + lVar18 * 2 ), false);
                        *(undefined8*)( *(long*)( lVar2 + 0x20 ) + lVar18 * 2 ) = 0;
                     }

                     lVar18 = lVar18 + 4;
                  }
 while ( (ulong)uVar1 << 2 != lVar18 );
               }

               *(undefined4*)( lVar2 + 0x44 ) = 0;
               *(undefined1(*) [16])( lVar2 + 0x30 ) = (undefined1[16])0x0;
            }

         }

      }

   }

   return;
}
/* JoltArea3D::_report_event(Callable const&, PhysicsServer3D::AreaBodyStatus, RID const&, ObjectID,
   int, int) const */void JoltArea3D::_report_event(undefined8 param_1_00, Variant **param_1, int param_3, RID *param_4, undefined8 param_5, int param_6, int param_7) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   long in_FS_OFFSET;
   undefined8 local_170[2];
   long local_160;
   long local_158;
   long local_150;
   int local_148;
   undefined8 local_144;
   char *local_138;
   undefined8 local_130;
   int local_128[8];
   int local_108[8];
   int local_e8[8];
   int local_c8[8];
   int local_a8[8];
   int local_88[2];
   undefined1 local_80[16];
   Variant *local_68;
   Variant *pVStack_60;
   Variant *local_58;
   Variant *pVStack_50;
   Variant *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_170[0] = param_5;
   cVar4 = Callable::is_valid();
   if (cVar4 == '\0') {
      _err_print_error("_report_event", "modules/jolt_physics/objects/jolt_area_3d.cpp", 0xab, "Condition \"!p_callback.is_valid()\" is true.", 0, 0);
   }
 else {
      Variant::Variant((Variant*)local_128, param_3);
      Variant::Variant((Variant*)local_108, param_4);
      Variant::Variant((Variant*)local_e8, (ObjectID*)local_170);
      Variant::Variant((Variant*)local_c8, param_6);
      Variant::Variant((Variant*)local_a8, param_7);
      local_148 = 0;
      local_144 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_80 = (undefined1[16])0x0;
      local_68 = (Variant*)local_128;
      pVStack_60 = (Variant*)local_108;
      local_58 = (Variant*)local_e8;
      pVStack_50 = (Variant*)local_c8;
      local_48 = (Variant*)local_a8;
      Callable::callp(param_1, (int)&local_68, (Variant*)0x5, (CallError*)local_88);
      if (( local_148 != 0 ) && ( _report_event(Callable_const&,PhysicsServer3D::AreaBodyStatus,RID_const&,ObjectID,int,int):: )) {
         Variant::get_callable_error_text((Callable*)&local_158, param_1, (int)&local_68, (CallError*)0x5);
         JoltObject3D::to_string();
         local_138 = "Failed to call area monitor callback for \'%s\'. It returned the following error: \'%s\'.";
         local_150 = 0;
         local_130 = 0x55;
         String::parse_latin1((StrRange*)&local_150);
         vformat<String,String>(&local_138, (StrRange*)&local_150, &local_160, (Callable*)&local_158);
         _err_print_error("_report_event", "modules/jolt_physics/objects/jolt_area_3d.cpp", 0xb9, &local_138, 0, 0);
         pcVar3 = local_138;
         if (local_138 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_138 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_138 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_150;
         if (local_150 != 0) {
            LOCK();
            plVar1 = (long*)( local_150 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_150 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_160;
         if (local_160 != 0) {
            LOCK();
            plVar1 = (long*)( local_160 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_160 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_158;
         if (local_158 != 0) {
            LOCK();
            plVar1 = (long*)( local_158 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_158 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         _report_event(Callable_const&,PhysicsServer3D::AreaBodyStatus,RID_const&,ObjectID,int,int)::
      first_print =
         '\0';
      }

      if (Variant::needs_deinit[local_88[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_c8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_108[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_128[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::_flush_events(HashMap<JPH::BodyID, JoltArea3D::Overlap, JoltArea3D::BodyIDHasher,
   HashMapComparatorDefault<JPH::BodyID>, DefaultTypedAllocator<HashMapElement<JPH::BodyID,
   JoltArea3D::Overlap> > >&, Callable const&) */void JoltArea3D::_flush_events(JoltArea3D *this, HashMap *param_1, Callable *param_2) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   uint uVar7;
   undefined4 uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long lVar11;
   undefined8 uVar12;
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   char cVar31;
   uint uVar32;
   uint uVar33;
   uint uVar34;
   ulong uVar35;
   ulong uVar36;
   long *plVar37;
   ulong uVar38;
   ulong uVar39;
   void *pvVar40;
   ulong uVar41;
   uint uVar42;
   uint uVar43;
   long lVar44;
   undefined4 *puVar45;
   uint *puVar46;
   puVar9 = *(undefined8**)( param_1 + 0x18 );
   joined_r0x00102a06:do {
      do {
         do {
            puVar2 = puVar9;
            if (puVar2 == (undefined8*)0x0) {
               return;
            }

            cVar31 = Callable::is_valid();
            if (cVar31 == '\0') {
               uVar32 = *(uint*)( puVar2 + 9 );
            }
 else {
               puVar45 = (undefined4*)puVar2[0xc];
               puVar5 = puVar45 + ( ulong ) * (uint*)( puVar2 + 0xb ) * 2;
               for (; puVar5 != puVar45; puVar45 = puVar45 + 2) {
                  _report_event(this, param_2, 1, puVar2 + 0xd, puVar2[0xe], *puVar45, puVar45[1]);
               }

               uVar32 = *(uint*)( puVar2 + 9 );
               puVar45 = (undefined4*)puVar2[10];
               puVar5 = puVar45 + (ulong)uVar32 * 2;
               if (puVar5 != puVar45) {
                  do {
                     puVar6 = puVar45 + 1;
                     uVar8 = *puVar45;
                     puVar45 = puVar45 + 2;
                     _report_event(this, param_2, 0, puVar2 + 0xd, puVar2[0xe], uVar8, *puVar6);
                  }
 while ( puVar5 != puVar45 );
                  uVar32 = *(uint*)( puVar2 + 9 );
               }

            }

            if (*(int*)( puVar2 + 0xb ) != 0) {
               *(undefined4*)( puVar2 + 0xb ) = 0;
            }

            if (uVar32 != 0) {
               *(undefined4*)( puVar2 + 9 ) = 0;
            }

            puVar9 = (undefined8*)*puVar2;
         }
 while ( ( ( *(int*)( (long)puVar2 + 0x44 ) != 0 ) || ( lVar44 = lVar44 == 0 ) ) || ( *(int*)( param_1 + 0x2c ) == 0 ) );
         uVar32 = *(uint*)( puVar2 + 2 );
         uVar7 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x28 )];
         uVar10 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x28 ) * 8 );
         uVar33 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
         uVar33 = ( uVar33 ^ uVar33 >> 0xd ) * -0x3d4d51cb;
         uVar43 = uVar33 ^ uVar33 >> 0x10;
         if (uVar33 == uVar33 >> 0x10) {
            uVar43 = 1;
            uVar35 = uVar10;
         }
 else {
            uVar35 = uVar43 * uVar10;
         }

         uVar41 = CONCAT44(0, uVar7);
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar41;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar35;
         uVar35 = SUB168(auVar13 * auVar22, 8);
         lVar11 = *(long*)( param_1 + 0x10 );
         uVar38 = (ulong)SUB164(auVar13 * auVar22, 8);
         uVar33 = *(uint*)( lVar11 + uVar35 * 4 );
         uVar42 = 0;
      }
 while ( uVar33 == 0 );
      while (true) {
         auVar16._8_8_ = 0;
         auVar16._0_8_ = ( (int)uVar38 + 1 ) * uVar10;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar41;
         uVar36 = SUB168(auVar16 * auVar25, 8);
         uVar34 = SUB164(auVar16 * auVar25, 8);
         if (( uVar43 == uVar33 ) && ( uVar32 == *(uint*)( *(long*)( lVar44 + uVar35 * 8 ) + 0x10 ) )) break;
         uVar33 = *(uint*)( lVar11 + uVar36 * 4 );
         uVar38 = uVar36 & 0xffffffff;
         uVar42 = uVar42 + 1;
         if (( uVar33 == 0 ) || ( auVar14._8_8_ = 0 ),auVar14._0_8_ = uVar33 * uVar10,auVar23._8_8_ = 0,auVar23._0_8_ = uVar41,auVar15._8_8_ = 0,auVar15._0_8_ = ( ( uVar7 + uVar34 ) - SUB164(auVar14 * auVar23, 8) ) * uVar10,auVar24._8_8_ = 0,auVar24._0_8_ = uVar41,uVar35 = uVar36,SUB164(auVar15 * auVar24, 8) < uVar42) goto joined_r0x00102a06;
      }
;
      puVar46 = (uint*)( lVar11 + uVar36 * 4 );
      uVar32 = *puVar46;
      if (( uVar32 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar32 * uVar10,auVar26._8_8_ = 0,auVar26._0_8_ = uVar41,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( uVar34 + uVar7 ) - SUB164(auVar17 * auVar26, 8) ) * uVar10,auVar27._8_8_ = 0,auVar27._0_8_ = uVar41,uVar35 = (ulong)uVar34,uVar39 = uVar38,SUB164(auVar18 * auVar27, 8) != 0) {
         while (true) {
            uVar38 = uVar35;
            puVar1 = (uint*)( lVar11 + uVar39 * 4 );
            *puVar46 = *puVar1;
            puVar2 = (undefined8*)( lVar44 + uVar36 * 8 );
            *puVar1 = uVar32;
            puVar3 = (undefined8*)( lVar44 + uVar39 * 8 );
            uVar12 = *puVar2;
            *puVar2 = *puVar3;
            *puVar3 = uVar12;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = ( (int)uVar38 + 1 ) * uVar10;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar41;
            uVar36 = SUB168(auVar21 * auVar30, 8);
            puVar46 = (uint*)( lVar11 + uVar36 * 4 );
            uVar32 = *puVar46;
            if (( uVar32 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = uVar32 * uVar10,auVar28._8_8_ = 0,auVar28._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ( SUB164(auVar21 * auVar30, 8) + uVar7 ) - SUB164(auVar19 * auVar28, 8) ) * uVar10,auVar29._8_8_ = 0,auVar29._0_8_ = uVar41,SUB164(auVar20 * auVar29, 8) == 0) break;
            uVar35 = uVar36 & 0xffffffff;
            uVar39 = uVar38;
         }
;
      }

      plVar4 = (long*)( lVar44 + uVar38 * 8 );
      *(undefined4*)( lVar11 + uVar38 * 4 ) = 0;
      plVar37 = (long*)*plVar4;
      if (*(long**)( param_1 + 0x18 ) == plVar37) {
         *(long*)( param_1 + 0x18 ) = *plVar37;
         plVar37 = (long*)*plVar4;
      }

      if (plVar37 == *(long**)( param_1 + 0x20 )) {
         *(long*)( param_1 + 0x20 ) = plVar37[1];
         plVar37 = (long*)*plVar4;
      }

      if ((long*)plVar37[1] != (long*)0x0) {
         *(long*)plVar37[1] = *plVar37;
         plVar37 = (long*)*plVar4;
      }

      if (*plVar37 != 0) {
         *(long*)( *plVar37 + 8 ) = plVar37[1];
         plVar37 = (long*)*plVar4;
      }

      if ((void*)plVar37[0xc] != (void*)0x0) {
         if ((int)plVar37[0xb] != 0) {
            *(undefined4*)( plVar37 + 0xb ) = 0;
         }

         Memory::free_static((void*)plVar37[0xc], false);
      }

      if ((void*)plVar37[10] != (void*)0x0) {
         if ((int)plVar37[9] != 0) {
            *(undefined4*)( plVar37 + 9 ) = 0;
         }

         Memory::free_static((void*)plVar37[10], false);
      }

      pvVar40 = (void*)plVar37[4];
      if (pvVar40 != (void*)0x0) {
         if (*(int*)( (long)plVar37 + 0x44 ) != 0) {
            uVar32 = ( &hash_table_size_primes )[*(uint*)( plVar37 + 8 )];
            if (uVar32 == 0) {
               *(undefined4*)( (long)plVar37 + 0x44 ) = 0;
               *(undefined1(*) [16])( plVar37 + 6 ) = (undefined1[16])0x0;
            }
 else {
               lVar44 = 0;
               do {
                  if (*(int*)( plVar37[5] + lVar44 ) != 0) {
                     *(int*)( plVar37[5] + lVar44 ) = 0;
                     Memory::free_static(*(void**)( (long)pvVar40 + lVar44 * 2 ), false);
                     pvVar40 = (void*)plVar37[4];
                     *(undefined8*)( (long)pvVar40 + lVar44 * 2 ) = 0;
                  }

                  lVar44 = lVar44 + 4;
               }
 while ( lVar44 != (ulong)uVar32 << 2 );
               *(undefined4*)( (long)plVar37 + 0x44 ) = 0;
               *(undefined1(*) [16])( plVar37 + 6 ) = (undefined1[16])0x0;
               if (pvVar40 == (void*)0x0) goto LAB_00102d1b;
            }

         }

         Memory::free_static(pvVar40, false);
         Memory::free_static((void*)plVar37[5], false);
      }

      LAB_00102d1b:Memory::free_static(plVar37, false);
      *(undefined8*)( *(long*)( param_1 + 8 ) + uVar38 * 8 ) = 0;
      *(int*)( param_1 + 0x2c ) = *(int*)( param_1 + 0x2c ) + -1;
   }
 while ( true );
}
/* JoltArea3D::call_queries() */void JoltArea3D::call_queries(JoltArea3D *this) {
   _flush_events(this, (HashMap*)( this + 200 ), (Callable*)( this + 0x138 ));
   _flush_events(this, (HashMap*)( this + 0xf8 ), (Callable*)( this + 0x148 ));
   return;
}
/* JoltArea3D::set_transform(Transform3D) */void JoltArea3D::set_transform(long param_1) {
   long *plVar1;
   undefined8 *puVar2;
   long lVar3;
   char *pcVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined4 uStack0000000000000008;
   undefined4 uStack000000000000000c;
   undefined4 uStack0000000000000010;
   undefined4 uStack0000000000000014;
   undefined4 uStack0000000000000018;
   undefined4 uStack000000000000001c;
   undefined4 uStack0000000000000020;
   undefined4 uStack0000000000000024;
   float fStack0000000000000028;
   undefined4 uStack000000000000002c;
   undefined4 uStack0000000000000030;
   undefined4 uStack0000000000000034;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_64;
   undefined4 local_5c;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( (float)uStack0000000000000018 * fStack0000000000000028 - (float)uStack0000000000000024 * (float)uStack000000000000001c ) * (float)uStack0000000000000008 - ( fStack0000000000000028 * (float)uStack000000000000000c - (float)uStack0000000000000024 * (float)uStack0000000000000010 ) * (float)uStack0000000000000014 ) + ( (float)uStack000000000000001c * (float)uStack000000000000000c - (float)uStack0000000000000018 * (float)uStack0000000000000010 ) * (float)uStack0000000000000020 == 0.0) {
      JoltObject3D::to_string();
      local_78 = "An invalid transform was passed to area \'%s\'.";
      local_90 = 0;
      local_70 = 0x2d;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      local_78 = "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity.";
      local_80 = 0;
      local_70 = 0xd1;
      String::parse_latin1((StrRange*)&local_80);
      vformat<String>(&local_78, (StrRange*)&local_80, &local_88);
      _err_print_error("set_transform", "modules/jolt_physics/objects/jolt_area_3d.cpp", 0x174, &local_78, 0, 1);
      pcVar4 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar3 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_88;
      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      _uStack0000000000000008 = ZEXT416(_LC4);
      fStack0000000000000028 = 1.0;
      _uStack0000000000000018 = _uStack0000000000000008;
   }

   local_64 = 0;
   local_5c = 0;
   JoltMath::decompose((Basis*)&stack0x00000008, (Vector3*)&local_64);
   cVar5 = Vector3::is_equal_approx((Vector3*)( param_1 + 0x80 ));
   if (cVar5 == '\0') {
      *(undefined8*)( param_1 + 0x80 ) = local_64;
      *(undefined4*)( param_1 + 0x88 ) = local_5c;
      JoltShapedObject3D::_shapes_changed();
   }

   if (( *(long*)( param_1 + 0x28 ) == 0 ) || ( *(int*)( param_1 + 0x30 ) == -1 )) {
      puVar2 = *(undefined8**)( param_1 + 0xa0 );
      *puVar2 = CONCAT44(uStack0000000000000030, uStack000000000000002c);
      puVar2[1] = CONCAT44(uStack0000000000000034, uStack0000000000000034);
      Basis::get_quaternion();
      Quaternion::normalized();
      puVar2[2] = local_58;
      puVar2[3] = uStack_50;
   }
 else {
      uVar6 = JoltSpace3D::get_body_iface();
      Basis::get_quaternion();
      Quaternion::normalized();
      JPH::BodyInterface::SetPositionAndRotation(CONCAT44(uStack0000000000000030, uStack000000000000002c), CONCAT44(uStack0000000000000034, uStack0000000000000034), local_58, uStack_50, uVar6, param_1 + 0x30, 1);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltArea3D::get_param(PhysicsServer3D::AreaParameter) const */Variant *JoltArea3D::get_param(Variant *param_1, long param_2, undefined4 param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_54;
   undefined4 local_4c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_3) {
      case 0:
    Variant::Variant(param_1,*(int *)(param_2 + 0x16c));
    break;
      case 1:
    Variant::Variant(param_1,*(float *)(param_2 + 0x15c));
    break;
      case 2:
    local_54 = *(undefined8 *)(param_2 + 0x128);
    local_4c = *(undefined4 *)(param_2 + 0x130);
    Variant::Variant(param_1,(Vector3 *)&local_54);
    break;
      case 3:
    Variant::Variant(param_1,*(bool *)(param_2 + 0x179));
    break;
      case 4:
    Variant::Variant(param_1,*(float *)(param_2 + 0x160));
    break;
      case 5:
    Variant::Variant(param_1,*(int *)(param_2 + 0x170));
    break;
      case 6:
    Variant::Variant(param_1,*(float *)(param_2 + 0x164));
    break;
      case 7:
    Variant::Variant(param_1,*(int *)(param_2 + 0x174));
    break;
      case 8:
    Variant::Variant(param_1,*(float *)(param_2 + 0x168));
    break;
      case 9:
    Variant::Variant(param_1,*(float *)(param_2 + 0x158));
    break;
      case 10:
      case 0xd:
    Variant::Variant(param_1,0.0);
    break;
      case 0xb:
    Variant::Variant(param_1,(Vector3 *)(anonymous_namespace)::DEFAULT_WIND_SOURCE);
    break;
      case 0xc:
    Variant::Variant(param_1,(Vector3 *)(anonymous_namespace)::DEFAULT_WIND_DIRECTION);
    break;
      default:
    local_70 = 0;
    local_68 = "Unhandled area parameter: \'%d\'. This should not happen. Please report this.";
    local_60 = 0x4b;
    String::parse_latin1((StrRange *)&local_70);
    vformat<PhysicsServer3D::AreaParameter>(&local_68,(StrRange *)&local_70,param_3);
    _err_print_error("get_param","modules/jolt_physics/objects/jolt_area_3d.cpp",0x1b4,
                     "Method/function failed. Returning: Variant()",&local_68,0);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* JoltArea3D::set_param(PhysicsServer3D::AreaParameter, Variant const&) */void JoltArea3D::set_param(JoltArea3D *this, undefined4 param_2, Variant *param_3) {
   long *plVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   undefined1 auVar5[12];
   undefined1 auVar6[12];
   undefined1 auVar7[12];
   undefined1 auVar8[12];
   undefined1 auVar9[12];
   undefined1 auVar10[12];
   undefined1 auVar11[12];
   undefined1 auVar12[12];
   undefined1 auVar13[12];
   undefined1 auVar14[12];
   undefined1 auVar15[12];
   undefined1 auVar16[12];
   undefined1 auVar17[12];
   undefined1 auVar18[12];
   undefined1 auVar19[12];
   char *pcVar20;
   char cVar21;
   JoltArea3D JVar22;
   int iVar23;
   undefined8 uVar24;
   long in_FS_OFFSET;
   float fVar25;
   double dVar26;
   double dVar27;
   double dVar28;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   undefined1 local_2c[8];
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      case 0:
    iVar23 = Variant::operator_cast_to_int(param_3);
    auVar19._8_4_ = local_24;
    auVar19._0_8_ = local_2c;
    auVar18._8_4_ = local_24;
    auVar18._0_8_ = local_2c;
    auVar17._8_4_ = local_24;
    auVar17._0_8_ = local_2c;
    if (iVar23 != *(int *)(this + 0x16c)) {
      *(int *)(this + 0x16c) = iVar23;
      lVar4 = *(long *)(this + 0x28);
      _local_2c = auVar17;
      if ((lVar4 != 0) && (_local_2c = auVar18, this == *(JoltArea3D **)(lVar4 + 0x78))) {
        fVar2 = *(float *)(this + 300);
        fVar3 = *(float *)(this + 0x130);
        fVar25 = *(float *)(this + 0x15c);
        lVar4 = *(long *)(lVar4 + 0x68);
        *(float *)(lVar4 + 0x400) = *(float *)(this + 0x128) * fVar25;
        *(float *)(lVar4 + 0x404) = fVar2 * fVar25;
        *(float *)(lVar4 + 0x408) = fVar3 * fVar25;
        *(float *)(lVar4 + 0x40c) = fVar3 * fVar25;
        _local_2c = auVar19;
      }
    }
    break;
      case 1:
    fVar25 = Variant::operator_cast_to_float(param_3);
    auVar16._8_4_ = local_24;
    auVar16._0_8_ = local_2c;
    auVar15._8_4_ = local_24;
    auVar15._0_8_ = local_2c;
    auVar14._8_4_ = local_24;
    auVar14._0_8_ = local_2c;
    if (fVar25 != *(float *)(this + 0x15c)) {
      lVar4 = *(long *)(this + 0x28);
      *(float *)(this + 0x15c) = fVar25;
      _local_2c = auVar14;
      if ((lVar4 != 0) && (_local_2c = auVar15, this == *(JoltArea3D **)(lVar4 + 0x78))) {
        fVar2 = *(float *)(this + 0x130);
        fVar3 = *(float *)(this + 300);
        lVar4 = *(long *)(lVar4 + 0x68);
        *(float *)(lVar4 + 0x400) = fVar25 * *(float *)(this + 0x128);
        *(float *)(lVar4 + 0x404) = fVar25 * fVar3;
        *(float *)(lVar4 + 0x408) = fVar25 * fVar2;
        *(float *)(lVar4 + 0x40c) = fVar25 * fVar2;
        _local_2c = auVar16;
      }
    }
    break;
      case 2:
    _local_2c = Variant::operator_cast_to_Vector3(param_3);
    if (((*(float *)(this + 0x128) != (float)local_2c._0_4_) ||
        (*(float *)(this + 300) != (float)local_2c._4_4_)) ||
       (*(float *)(this + 0x130) != SUB124(_local_2c,8))) {
      *(undefined1 (*) [12])(this + 0x128) = _local_2c;
      lVar4 = *(long *)(this + 0x28);
      if ((lVar4 != 0) && (this == *(JoltArea3D **)(lVar4 + 0x78))) {
        fVar2 = *(float *)(this + 300);
        fVar3 = *(float *)(this + 0x130);
        fVar25 = *(float *)(this + 0x15c);
        lVar4 = *(long *)(lVar4 + 0x68);
        *(float *)(lVar4 + 0x400) = *(float *)(this + 0x128) * fVar25;
        *(float *)(lVar4 + 0x404) = fVar2 * fVar25;
        *(float *)(lVar4 + 0x408) = fVar3 * fVar25;
        *(float *)(lVar4 + 0x40c) = fVar3 * fVar25;
      }
    }
    break;
      case 3:
    JVar22 = (JoltArea3D)Variant::operator_cast_to_bool(param_3);
    auVar13._8_4_ = local_24;
    auVar13._0_8_ = local_2c;
    auVar12._8_4_ = local_24;
    auVar12._0_8_ = local_2c;
    auVar11._8_4_ = local_24;
    auVar11._0_8_ = local_2c;
    if (JVar22 != this[0x179]) {
      this[0x179] = JVar22;
      lVar4 = *(long *)(this + 0x28);
      _local_2c = auVar11;
      if ((lVar4 != 0) && (_local_2c = auVar12, this == *(JoltArea3D **)(lVar4 + 0x78))) {
        fVar2 = *(float *)(this + 300);
        fVar3 = *(float *)(this + 0x130);
        fVar25 = *(float *)(this + 0x15c);
        lVar4 = *(long *)(lVar4 + 0x68);
        *(float *)(lVar4 + 0x400) = *(float *)(this + 0x128) * fVar25;
        *(float *)(lVar4 + 0x404) = fVar2 * fVar25;
        *(float *)(lVar4 + 0x408) = fVar3 * fVar25;
        *(float *)(lVar4 + 0x40c) = fVar3 * fVar25;
        _local_2c = auVar13;
      }
    }
    break;
      case 4:
    fVar25 = Variant::operator_cast_to_float(param_3);
    auVar10._8_4_ = local_24;
    auVar10._0_8_ = local_2c;
    auVar9._8_4_ = local_24;
    auVar9._0_8_ = local_2c;
    auVar8._8_4_ = local_24;
    auVar8._0_8_ = local_2c;
    if (fVar25 != *(float *)(this + 0x160)) {
      lVar4 = *(long *)(this + 0x28);
      *(float *)(this + 0x160) = fVar25;
      _local_2c = auVar8;
      if ((lVar4 != 0) && (_local_2c = auVar9, this == *(JoltArea3D **)(lVar4 + 0x78))) {
        fVar2 = *(float *)(this + 300);
        fVar3 = *(float *)(this + 0x130);
        fVar25 = *(float *)(this + 0x15c);
        lVar4 = *(long *)(lVar4 + 0x68);
        *(float *)(lVar4 + 0x400) = *(float *)(this + 0x128) * fVar25;
        *(float *)(lVar4 + 0x404) = fVar2 * fVar25;
        *(float *)(lVar4 + 0x408) = fVar3 * fVar25;
        *(float *)(lVar4 + 0x40c) = fVar3 * fVar25;
        _local_2c = auVar10;
      }
    }
    break;
      case 5:
    iVar23 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0x170) = iVar23;
    break;
      case 6:
    fVar25 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x164) = fVar25;
    break;
      case 7:
    iVar23 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0x174) = iVar23;
    break;
      case 8:
    fVar25 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x168) = fVar25;
    break;
      case 9:
    fVar25 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x158) = fVar25;
    break;
      case 10:
    dVar26 = Variant::operator_cast_to_double(param_3);
    auVar7._8_4_ = local_24;
    auVar7._0_8_ = local_2c;
    if (dVar26 == 0.0) break;
    dVar27 = ABS(dVar26) * _LC43;
    dVar28 = _LC43;
    if (_LC43 <= dVar27) {
      dVar28 = dVar27;
    }
    _local_2c = auVar7;
    if (ABS(dVar26) < dVar28) break;
    JoltObject3D::to_string();
    local_48 = 
    "Invalid wind force magnitude for \'%s\'. Area wind force magnitude is not supported when using Jolt Physics. Any such value will be ignored."
    ;
    local_50 = 0;
    local_40 = 0x8a;
    String::parse_latin1((StrRange *)&local_50);
    vformat<String>(&local_48,(StrRange *)&local_50,&local_58);
    uVar24 = 0x1db;
    goto LAB_00103a60;
      case 0xb:
    _local_2c = Variant::operator_cast_to_Vector3(param_3);
    cVar21 = Vector3::is_equal_approx((Vector3 *)local_2c);
    if (cVar21 != '\0') break;
    JoltObject3D::to_string();
    local_48 = 
    "Invalid wind source for \'%s\'. Area wind source is not supported when using Jolt Physics. Any such value will be ignored."
    ;
    local_50 = 0;
    local_40 = 0x78;
    String::parse_latin1((StrRange *)&local_50);
    vformat<String>(&local_48,(StrRange *)&local_50,&local_58);
    uVar24 = 0x1e0;
    goto LAB_00103a60;
      case 0xc:
    _local_2c = Variant::operator_cast_to_Vector3(param_3);
    cVar21 = Vector3::is_equal_approx((Vector3 *)local_2c);
    if (cVar21 != '\0') break;
    JoltObject3D::to_string();
    local_48 = 
    "Invalid wind direction for \'%s\'. Area wind direction is not supported when using Jolt Physics. Any such value will be ignored."
    ;
    local_50 = 0;
    local_40 = 0x7e;
    String::parse_latin1((StrRange *)&local_50);
    vformat<String>(&local_48,(StrRange *)&local_50,&local_58);
    uVar24 = 0x1e5;
    goto LAB_00103a60;
      case 0xd:
    dVar26 = Variant::operator_cast_to_double(param_3);
    auVar6._8_4_ = local_24;
    auVar6._0_8_ = local_2c;
    if (dVar26 == 0.0) break;
    dVar27 = ABS(dVar26) * _LC43;
    dVar28 = _LC43;
    if (_LC43 <= dVar27) {
      dVar28 = dVar27;
    }
    _local_2c = auVar6;
    if (ABS(dVar26) < dVar28) break;
    JoltObject3D::to_string();
    local_48 = 
    "Invalid wind attenuation for \'%s\'. Area wind attenuation is not supported when using Jolt Physics. Any such value will be ignored."
    ;
    local_50 = 0;
    local_40 = 0x82;
    String::parse_latin1((StrRange *)&local_50);
    vformat<String>(&local_48,(StrRange *)&local_50,&local_58);
    uVar24 = 0x1ea;
LAB_00103a60:
    _err_print_error("set_param","modules/jolt_physics/objects/jolt_area_3d.cpp",uVar24,&local_48,0,
                     1);
    pcVar20 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar20 + -0x10,false);
      }
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    break;
      default:
    local_50 = 0;
    local_40 = 0x4b;
    local_48 = "Unhandled area parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<PhysicsServer3D::AreaParameter>(&local_48,(StrRange *)&local_50,param_2);
    _err_print_error("set_param","modules/jolt_physics/objects/jolt_area_3d.cpp",0x1ee,
                     "Method/function failed.",&local_48,0,0);
    pcVar20 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar20 + -0x10,false);
      }
    }
    lVar4 = local_50;
    auVar5._8_4_ = local_24;
    auVar5._0_8_ = local_2c;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      _local_2c = auVar5;
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltArea3D::_add_shape_pair(JoltArea3D::Overlap&, JPH::BodyID const&, JPH::SubShapeID const&,
   JPH::SubShapeID const&) */void JoltArea3D::_add_shape_pair(JoltArea3D *this, Overlap *param_1, BodyID *param_2, SubShapeID *param_3, SubShapeID *param_4) {
   uint uVar1;
   SubShapeID *pSVar2;
   SelfList *pSVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined4 *puVar8;
   long lVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   undefined8 local_90;
   code *local_88[8];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltSpace3D::read_body((BodyID*)local_88);
   if (( ( local_48 == 0 ) || ( pSVar2 = *(SubShapeID**)( local_48 + 0x50 ) ),pSVar2 == (SubShapeID*)0x0 )) {
      _err_print_error("_add_shape_pair", "modules/jolt_physics/objects/jolt_area_3d.cpp", 0x70, "Parameter \"other_object\" is null.", 0, 0);
   }
 else {
      uVar5 = *(undefined8*)( pSVar2 + 0x20 );
      uVar6 = *(undefined4*)param_4;
      uVar7 = *(undefined4*)param_3;
      *(undefined8*)( param_1 + 0x50 ) = *(undefined8*)( pSVar2 + 0x18 );
      *(undefined8*)( param_1 + 0x58 ) = uVar5;
      local_90 = CONCAT44(uVar6, uVar7);
      puVar8 = (undefined4*)HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>::operator []((HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>*)param_1, (ShapeIDPair*)&local_90);
      uVar6 = JoltShapedObject3D::find_shape_index(pSVar2);
      *puVar8 = uVar6;
      uVar7 = JoltShapedObject3D::find_shape_index((SubShapeID*)this);
      uVar6 = *puVar8;
      uVar1 = *(uint*)( param_1 + 0x30 );
      puVar8[1] = uVar7;
      if (uVar1 == *(uint*)( param_1 + 0x34 )) {
         uVar10 = ( ulong )(uVar1 * 2);
         if (uVar1 * 2 == 0) {
            uVar10 = 1;
         }

         *(int*)( param_1 + 0x34 ) = (int)uVar10;
         lVar9 = Memory::realloc_static(*(void**)( param_1 + 0x38 ), uVar10 * 8, false);
         *(long*)( param_1 + 0x38 ) = lVar9;
         if (lVar9 == 0) {
            _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         uVar1 = *(uint*)( param_1 + 0x30 );
      }
 else {
         lVar9 = *(long*)( param_1 + 0x38 );
      }

      pSVar3 = *(SelfList**)( this + 0x28 );
      *(uint*)( param_1 + 0x30 ) = uVar1 + 1;
      *(ulong*)( lVar9 + (ulong)uVar1 * 8 ) = CONCAT44(uVar7, uVar6);
      if (pSVar3 != (SelfList*)0x0) {
         JoltSpace3D::enqueue_call_queries(pSVar3);
      }

   }

   JoltBodyAccessor3D::release();
   local_88[0] = JoltBody3D::remove_area;
   JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltArea3D::body_shape_entered(JPH::BodyID const&, JPH::SubShapeID const&, JPH::SubShapeID
   const&) */void JoltArea3D::body_shape_entered(JoltArea3D *this, BodyID *param_1, SubShapeID *param_2, SubShapeID *param_3) {
   Overlap *pOVar1;
   pOVar1 = (Overlap*)HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>::operator []((HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>*)( this + 200 ), param_1);
   if (*(int*)( pOVar1 + 0x2c ) == 0) {
      _notify_body_entered((BodyID*)this);
   }

   _add_shape_pair(this, pOVar1, param_1, param_2, param_3);
   return;
}
/* JoltArea3D::area_shape_entered(JPH::BodyID const&, JPH::SubShapeID const&, JPH::SubShapeID
   const&) */void JoltArea3D::area_shape_entered(JoltArea3D *this, BodyID *param_1, SubShapeID *param_2, SubShapeID *param_3) {
   Overlap *pOVar1;
   pOVar1 = (Overlap*)HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>::operator []((HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>*)( this + 0xf8 ), param_1);
   _add_shape_pair(this, pOVar1, param_1, param_2, param_3);
   return;
}
/* JoltArea3D::_space_changing() */void JoltArea3D::_space_changing(JoltArea3D *this) {
   JoltShapedObject3D::_space_changing();
   if (*(long*)( this + 0x28 ) != 0) {
      _force_bodies_exited(this, true);
      _force_areas_exited(this, true);
      if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
         JoltSpace3D::dequeue_call_queries(*(SelfList**)( this + 0x28 ));
         return;
      }

   }

   return;
}
/* JoltObject3D::pre_step(float, JPH::Body&) */void JoltObject3D::pre_step(float param_1, Body *param_2) {
   return;
}
/* JoltShapedObject3D::_shapes_committed() */void JoltShapedObject3D::_shapes_committed(void) {
   return;
}
/* JoltArea3D::_get_motion_type() const */undefined8 JoltArea3D::_get_motion_type(void) {
   return 1;
}
/* JoltArea3D::reports_contacts() const */undefined8 JoltArea3D::reports_contacts(void) {
   return 0;
}
/* JoltArea3D::has_custom_center_of_mass() const */undefined8 JoltArea3D::has_custom_center_of_mass(void) {
   return 0;
}
/* JoltArea3D::get_center_of_mass_custom() const */undefined1[16];JoltArea3D::get_center_of_mass_custom(void) {
   long in_FS_OFFSET;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ZEXT816(0);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00104004. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JoltArea3D::~JoltArea3D() */void JoltArea3D::~JoltArea3D(JoltArea3D *this) {
   uint uVar1;
   uint uVar2;
   long *plVar3;
   int *piVar4;
   long lVar5;
   void *pvVar6;
   void *pvVar7;
   long lVar8;
   *(undefined***)this = &PTR__get_broad_phase_layer_001073e0;
   Callable::~Callable((Callable*)( this + 0x148 ));
   Callable::~Callable((Callable*)( this + 0x138 ));
   pvVar7 = *(void**)( this + 0x100 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x124 ) != 0) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( this + 0x120 )];
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x124 ) = 0;
            *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x108 ) + lVar5 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x108 ) + lVar5 ) = 0;
                  if (*(void**)( (long)pvVar7 + 0x60 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x58 ) != 0) {
                        *(undefined4*)( (long)pvVar7 + 0x58 ) = 0;
                     }

                     Memory::free_static(*(void**)( (long)pvVar7 + 0x60 ), false);
                  }

                  if (*(void**)( (long)pvVar7 + 0x50 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x48 ) != 0) {
                        *(undefined4*)( (long)pvVar7 + 0x48 ) = 0;
                     }

                     Memory::free_static(*(void**)( (long)pvVar7 + 0x50 ), false);
                  }

                  pvVar6 = *(void**)( (long)pvVar7 + 0x20 );
                  if (pvVar6 != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x44 ) != 0) {
                        uVar2 = ( &hash_table_size_primes )[*(uint*)( (long)pvVar7 + 0x40 )];
                        if (uVar2 == 0) {
                           *(undefined4*)( (long)pvVar7 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar7 + 0x30 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar8 = 0;
                           do {
                              piVar4 = (int*)( *(long*)( (long)pvVar7 + 0x28 ) + lVar8 );
                              if (*piVar4 != 0) {
                                 *piVar4 = 0;
                                 Memory::free_static(*(void**)( (long)pvVar6 + lVar8 * 2 ), false);
                                 pvVar6 = *(void**)( (long)pvVar7 + 0x20 );
                                 *(undefined8*)( (long)pvVar6 + lVar8 * 2 ) = 0;
                              }

                              lVar8 = lVar8 + 4;
                           }
 while ( (ulong)uVar2 << 2 != lVar8 );
                           *(undefined4*)( (long)pvVar7 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar7 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar6 == (void*)0x0) goto LAB_0010474f;
                        }

                     }

                     Memory::free_static(pvVar6, false);
                     Memory::free_static(*(void**)( (long)pvVar7 + 0x28 ), false);
                  }

                  LAB_0010474f:Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x100 );
                  *(undefined8*)( (long)pvVar7 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 * 4 != lVar5 );
            *(undefined4*)( this + 0x124 ) = 0;
            *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00104794;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x108 ), false);
   }

   LAB_00104794:pvVar7 = *(void**)( this + 0xd0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0xf4 ) != 0) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( this + 0xf0 )];
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xf4 ) = 0;
            *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd8 ) + lVar5 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0xd8 ) + lVar5 ) = 0;
                  if (*(void**)( (long)pvVar7 + 0x60 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x58 ) != 0) {
                        *(undefined4*)( (long)pvVar7 + 0x58 ) = 0;
                     }

                     Memory::free_static(*(void**)( (long)pvVar7 + 0x60 ), false);
                  }

                  if (*(void**)( (long)pvVar7 + 0x50 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x48 ) != 0) {
                        *(undefined4*)( (long)pvVar7 + 0x48 ) = 0;
                     }

                     Memory::free_static(*(void**)( (long)pvVar7 + 0x50 ), false);
                  }

                  pvVar6 = *(void**)( (long)pvVar7 + 0x20 );
                  if (pvVar6 != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x44 ) != 0) {
                        uVar2 = ( &hash_table_size_primes )[*(uint*)( (long)pvVar7 + 0x40 )];
                        if (uVar2 == 0) {
                           *(undefined4*)( (long)pvVar7 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar7 + 0x30 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar8 = 0;
                           do {
                              piVar4 = (int*)( *(long*)( (long)pvVar7 + 0x28 ) + lVar8 );
                              if (*piVar4 != 0) {
                                 *piVar4 = 0;
                                 Memory::free_static(*(void**)( (long)pvVar6 + lVar8 * 2 ), false);
                                 pvVar6 = *(void**)( (long)pvVar7 + 0x20 );
                                 *(undefined8*)( (long)pvVar6 + lVar8 * 2 ) = 0;
                              }

                              lVar8 = lVar8 + 4;
                           }
 while ( lVar8 != (ulong)uVar2 * 4 );
                           *(undefined4*)( (long)pvVar7 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar7 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar6 == (void*)0x0) goto LAB_001048cd;
                        }

                     }

                     Memory::free_static(pvVar6, false);
                     Memory::free_static(*(void**)( (long)pvVar7 + 0x28 ), false);
                  }

                  LAB_001048cd:Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0xd0 );
                  *(undefined8*)( (long)pvVar7 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xf4 ) = 0;
            *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00104915;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0xd8 ), false);
   }

   LAB_00104915:plVar3 = *(long**)( this + 0xa8 );
   if (plVar3 != (long*)0x0) {
      lVar5 = *(long*)( this + 0xb8 );
      if (lVar5 != 0) {
         *(undefined8*)( lVar5 + 0x18 ) = *(undefined8*)( this + 0xc0 );
      }

      lVar8 = *(long*)( this + 0xc0 );
      if (lVar8 != 0) {
         *(long*)( lVar8 + 0x10 ) = lVar5;
      }

      if (this + 0xa8 == (JoltArea3D*)*plVar3) {
         *plVar3 = *(long*)( this + 0xb8 );
      }

      if (this + 0xa8 == (JoltArea3D*)plVar3[1]) {
         plVar3[1] = lVar8;
      }

   }

   JoltShapedObject3D::~JoltShapedObject3D((JoltShapedObject3D*)this);
   return;
}
/* JoltArea3D::~JoltArea3D() */void JoltArea3D::~JoltArea3D(JoltArea3D *this) {
   ~JoltArea3D(this)
   ;;
   operator_delete(this, 0x180);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00104c40) *//* WARNING: Removing unreachable block (ram,0x00104d70) *//* WARNING: Removing unreachable block (ram,0x00104ee9) *//* WARNING: Removing unreachable block (ram,0x00104d7c) *//* WARNING: Removing unreachable block (ram,0x00104d86) *//* WARNING: Removing unreachable block (ram,0x00104ecb) *//* WARNING: Removing unreachable block (ram,0x00104d92) *//* WARNING: Removing unreachable block (ram,0x00104d9c) *//* WARNING: Removing unreachable block (ram,0x00104ead) *//* WARNING: Removing unreachable block (ram,0x00104da8) *//* WARNING: Removing unreachable block (ram,0x00104db2) *//* WARNING: Removing unreachable block (ram,0x00104e8f) *//* WARNING: Removing unreachable block (ram,0x00104dbe) *//* WARNING: Removing unreachable block (ram,0x00104dc8) *//* WARNING: Removing unreachable block (ram,0x00104e71) *//* WARNING: Removing unreachable block (ram,0x00104dd4) *//* WARNING: Removing unreachable block (ram,0x00104dde) *//* WARNING: Removing unreachable block (ram,0x00104e53) *//* WARNING: Removing unreachable block (ram,0x00104de6) *//* WARNING: Removing unreachable block (ram,0x00104df0) *//* WARNING: Removing unreachable block (ram,0x00104e38) *//* WARNING: Removing unreachable block (ram,0x00104df8) *//* WARNING: Removing unreachable block (ram,0x00104e0e) *//* WARNING: Removing unreachable block (ram,0x00104e1a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4) {
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

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00105028) *//* WARNING: Removing unreachable block (ram,0x00105158) *//* WARNING: Removing unreachable block (ram,0x00105320) *//* WARNING: Removing unreachable block (ram,0x00105164) *//* WARNING: Removing unreachable block (ram,0x0010516e) *//* WARNING: Removing unreachable block (ram,0x00105300) *//* WARNING: Removing unreachable block (ram,0x0010517a) *//* WARNING: Removing unreachable block (ram,0x00105184) *//* WARNING: Removing unreachable block (ram,0x001052e0) *//* WARNING: Removing unreachable block (ram,0x00105190) *//* WARNING: Removing unreachable block (ram,0x0010519a) *//* WARNING: Removing unreachable block (ram,0x001052c0) *//* WARNING: Removing unreachable block (ram,0x001051a6) *//* WARNING: Removing unreachable block (ram,0x001051b0) *//* WARNING: Removing unreachable block (ram,0x001052a0) *//* WARNING: Removing unreachable block (ram,0x001051bc) *//* WARNING: Removing unreachable block (ram,0x001051c6) *//* WARNING: Removing unreachable block (ram,0x00105280) *//* WARNING: Removing unreachable block (ram,0x001051d2) *//* WARNING: Removing unreachable block (ram,0x001051dc) *//* WARNING: Removing unreachable block (ram,0x00105260) *//* WARNING: Removing unreachable block (ram,0x001051e4) *//* WARNING: Removing unreachable block (ram,0x001051fa) *//* WARNING: Removing unreachable block (ram,0x00105206) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00105468) *//* WARNING: Removing unreachable block (ram,0x00105598) *//* WARNING: Removing unreachable block (ram,0x00105760) *//* WARNING: Removing unreachable block (ram,0x001055a4) *//* WARNING: Removing unreachable block (ram,0x001055ae) *//* WARNING: Removing unreachable block (ram,0x00105740) *//* WARNING: Removing unreachable block (ram,0x001055ba) *//* WARNING: Removing unreachable block (ram,0x001055c4) *//* WARNING: Removing unreachable block (ram,0x00105720) *//* WARNING: Removing unreachable block (ram,0x001055d0) *//* WARNING: Removing unreachable block (ram,0x001055da) *//* WARNING: Removing unreachable block (ram,0x00105700) *//* WARNING: Removing unreachable block (ram,0x001055e6) *//* WARNING: Removing unreachable block (ram,0x001055f0) *//* WARNING: Removing unreachable block (ram,0x001056e0) *//* WARNING: Removing unreachable block (ram,0x001055fc) *//* WARNING: Removing unreachable block (ram,0x00105606) *//* WARNING: Removing unreachable block (ram,0x001056c0) *//* WARNING: Removing unreachable block (ram,0x00105612) *//* WARNING: Removing unreachable block (ram,0x0010561c) *//* WARNING: Removing unreachable block (ram,0x001056a0) *//* WARNING: Removing unreachable block (ram,0x00105624) *//* WARNING: Removing unreachable block (ram,0x0010563a) *//* WARNING: Removing unreachable block (ram,0x00105646) *//* String vformat<PhysicsServer3D::AreaParameter>(String const&, PhysicsServer3D::AreaParameter
   const) */undefined8 *vformat<PhysicsServer3D::AreaParameter>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   if (*(long*)( this + 0x128 ) != 0) {
      *(undefined8*)( this + 0x118 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x110 ) != 0) {
      *(undefined8*)( this + 0x100 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      *(undefined8*)( this + 0xe8 ) = 0;
      ( *Free )();
   }

   plVar4 = *(long**)( this + 0xd8 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_001059a0:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_001059d8;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_001059a0;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_001059a0;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_001059d8:plVar4 = *(long**)( this + 0xd8 );
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
   /* WARNING: Could not recover jumptable at 0x0010597a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>> *this) {
   uint uVar1;
   SoftBodySharedSettings *this_00;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               this_00 = *(SoftBodySharedSettings**)( (long)pvVar3 + 0x28 );
               if (this_00 != (SoftBodySharedSettings*)0x0) {
                  LOCK();
                  *(int*)this_00 = *(int*)this_00 + -1;
                  UNLOCK();
                  if (*(int*)this_00 == 0) {
                     JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
                     ( *JPH::Free )(this_00);
                  }

               }

               if (*(void**)( (long)pvVar3 + 0x20 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar3 + 0x18 ) != 0) {
                     *(undefined4*)( (long)pvVar3 + 0x18 ) = 0;
                  }

                  Memory::free_static(*(void**)( (long)pvVar3 + 0x20 ), false);
               }

               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* HashMap<JoltArea3D::ShapeIDPair, JoltArea3D::ShapeIndexPair, JoltArea3D::ShapeIDPair,
   HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,
   DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair, JoltArea3D::ShapeIndexPair> >
   >::_resize_and_rehash(unsigned int) */void HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>::_resize_and_rehash(HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = ( &hash_table_size_primes )[param_1];
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<JoltArea3D::ShapeIDPair, JoltArea3D::ShapeIndexPair, JoltArea3D::ShapeIDPair,
   HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,
   DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair, JoltArea3D::ShapeIndexPair> >
   >::operator[](JoltArea3D::ShapeIDPair const&) */undefined1[16];HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>::operator [](HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>
             *this,ShapeIDPair *param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__s;undefined1auVar5 [16];
  undefined1 auVar6[16];
  undefined1 auVar7[16];
  undefined1 auVar8[16];
  undefined1 auVar9[16];
  undefined1 auVar10[16];
  undefined1 auVar11[16];
  undefined1 auVar12[16];
  undefined1 auVar13[16];
  undefined1 auVar14[16];
  undefined1 auVar15[16];
  undefined1 auVar16[16];
  undefined1 auVar17[16];
  undefined1 auVar18[16];
  undefined1 auVar19[16];
  undefined1 auVar20[16];
  undefined1 auVar21[16];
  undefined1 auVar22[16];
  undefined1 auVar23[16];
  undefined1 auVar24[16];
  undefined1 auVar25[16];
  undefined1 auVar26[16];
  undefined1 auVar27[16];
  undefined1 auVar28[16](*, pauVar29)[16](*, pauVar32)[16](*, pauVar45)[16];
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(&, hash_table_size_primes)[uVar39](__s_00 = = (void*)0x0) {
   uVar39 = uVar41 * 4;
   uVar3 = uVar41 * 8;
   uVar33 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar33;
   lStack_90 = 0x106330;
   __s_00 = (void*)Memory::alloc_static(uVar3, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar31 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar3 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar41 != uVar39 );
         local_60 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar39);
         lStack_90 = 0x106374;
         memset(__s_00, 0, uVar3);
         local_60 = *(int*)( this + 0x2c );
      }

      LAB_0010637c:if (local_60 == 0) goto LAB_001062d8;
      uVar39 = ( ulong ) * (uint*)( this + 0x28 );
      lVar40 = *(long*)( this + 0x10 );
      iVar34 = *(int*)param_1;
      iVar2 = *(int*)( param_1 + 4 );
      goto LAB_00105fc2;
   }

   local_60 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_0010637c;
}
else{local_60 = *(int*)( this + 0x2c );if (local_60 == 0) {
   LAB_001062d8:local_60 = 0;
}
 else {
   uVar3 = *(ulong*)( hash_table_size_primes_inv + uVar39 * 8 );
   iVar34 = *(int*)param_1;
   iVar2 = *(int*)( param_1 + 4 );
   uVar30 = ( iVar34 * 0x16a88000 | ( uint )(iVar34 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar30 = ( uVar30 << 0xd | uVar30 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar2 * 0x16a88000 | ( uint )(iVar2 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar30 = ( uVar30 << 0xd | uVar30 >> 0x13 ) * 5 + 0xe6546b64;
   uVar30 = ( uVar30 >> 0x10 ^ uVar30 ) * -0x7a143595;
   uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar43 = uVar30 ^ uVar30 >> 0x10;
   if (uVar30 == uVar30 >> 0x10) {
      uVar43 = 1;
      uVar35 = uVar3;
   }
 else {
      uVar35 = uVar43 * uVar3;
   }

   lVar40 = *(long*)( this + 0x10 );
   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar41;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar35;
   lVar36 = SUB168(auVar5 * auVar17, 8);
   uVar30 = *(uint*)( lVar40 + lVar36 * 4 );
   uVar44 = SUB164(auVar5 * auVar17, 8);
   if (uVar30 != 0) {
      uVar42 = 0;
      lVar37 = lVar36;
      do {
         if (( ( uVar43 == uVar30 ) && ( lVar36 = *(long*)( (long)__s_00 + lVar36 * 8 ) * (int*)( lVar36 + 0x10 ) == iVar34 ) ) && ( *(int*)( lVar36 + 0x14 ) == iVar2 )) {
            auVar46._0_8_ = *(long*)( (long)__s_00 + (ulong)uVar44 * 8 ) + 0x18;
            auVar46._8_8_ = lVar37;
            return auVar46;
         }

         uVar42 = uVar42 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( uVar44 + 1 ) * uVar3;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar41;
         lVar36 = SUB168(auVar6 * auVar18, 8);
         uVar30 = *(uint*)( lVar40 + lVar36 * 4 );
         uVar44 = SUB164(auVar6 * auVar18, 8);
      }
 while ( ( uVar30 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar30 * uVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( uVar44 + uVar31 ) - SUB164(auVar7 * auVar19, 8) ) * uVar3,auVar20._8_8_ = 0,auVar20._0_8_ = uVar41,lVar37 = SUB168(auVar8 * auVar20, 8),uVar42 <= SUB164(auVar8 * auVar20, 8) );
      uVar39 = ( ulong ) * (uint*)( this + 0x28 );
   }

   LAB_00105fc2:uVar3 = *(ulong*)( hash_table_size_primes_inv + uVar39 * 8 );
   uVar35 = CONCAT44(0, ( &hash_table_size_primes )[uVar39]);
   uVar31 = ( iVar34 * 0x16a88000 | ( uint )(iVar34 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar31 = ( uVar31 << 0xd | uVar31 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar2 * 0x16a88000 | ( uint )(iVar2 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar31 = ( uVar31 << 0xd | uVar31 >> 0x13 ) * 5 + 0xe6546b64;
   uVar31 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar31 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
   uVar30 = uVar31 ^ uVar31 >> 0x10;
   if (uVar31 == uVar31 >> 0x10) {
      uVar30 = 1;
      uVar38 = uVar3;
   }
 else {
      uVar38 = uVar30 * uVar3;
   }

   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar35;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar38;
   lVar36 = SUB168(auVar9 * auVar21, 8);
   uVar31 = *(uint*)( lVar40 + lVar36 * 4 );
   uVar43 = SUB164(auVar9 * auVar21, 8);
   if (uVar31 != 0) {
      uVar44 = 0;
      lVar37 = lVar36;
      do {
         if (( ( uVar30 == uVar31 ) && ( lVar36 = *(long*)( (long)__s_00 + lVar36 * 8 ) * (int*)( lVar36 + 0x10 ) == iVar34 ) ) && ( *(int*)( lVar36 + 0x14 ) == iVar2 )) {
            pauVar32 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar43 * 8 );
            *(undefined8*)( pauVar32[1] + 8 ) = 0xffffffffffffffff;
            lStack_90 = lVar37;
            goto LAB_001060c7;
         }

         uVar44 = uVar44 + 1;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( uVar43 + 1 ) * uVar3;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar35;
         lVar36 = SUB168(auVar10 * auVar22, 8);
         uVar31 = *(uint*)( lVar40 + lVar36 * 4 );
         uVar43 = SUB164(auVar10 * auVar22, 8);
      }
 while ( ( uVar31 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar31 * uVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar35,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( ( &hash_table_size_primes )[uVar39] + uVar43 ) - SUB164(auVar11 * auVar23, 8) ) * uVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,lVar37 = SUB168(auVar12 * auVar24, 8),uVar44 <= SUB164(auVar12 * auVar24, 8) );
   }

}
}if ((float)uVar41 * __LC50 < (float)( local_60 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar32 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001060c7;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
uVar33 = *(undefined8*)param_1;pauVar32 = (undefined1(*) [16])operator_new(0x20, "");*pauVar32 = (undefined1[16])0x0;*(undefined8*)( pauVar32[1] + 8 ) = 0xffffffffffffffff;*(undefined8*)pauVar32[1] = uVar33;puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar32;
}
 else {
   *puVar4 = pauVar32;
   *(undefined8**)( *pauVar32 + 8 ) = puVar4;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar32;uVar31 = ( *(int*)param_1 * 0x16a88000 | ( uint )(*(int*)param_1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;uVar31 = ( uVar31 << 0xd | uVar31 >> 0x13 ) * 5 + 0xe6546b64 ^ ( *(int*)( param_1 + 4 ) * 0x16a88000 | ( uint )(*(int*)( param_1 + 4 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593;uVar31 = ( uVar31 << 0xd | uVar31 >> 0x13 ) * 5 + 0xe6546b64;uVar31 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;uVar30 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;uVar31 = uVar30 ^ uVar30 >> 0x10;if (uVar30 == uVar30 >> 0x10) {
   uVar39 = 1;
   uVar31 = 1;
}
 else {
   uVar39 = (ulong)uVar31;
}
lVar40 = *(long*)( this + 0x10 );uVar44 = 0;lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar30 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar41 = CONCAT44(0, uVar30);auVar13._8_8_ = 0;auVar13._0_8_ = uVar39 * lVar36;auVar25._8_8_ = 0;auVar25._0_8_ = uVar41;lStack_90 = SUB168(auVar13 * auVar25, 8);lVar37 = *(long*)( this + 8 );puVar1 = (uint*)( lVar40 + lStack_90 * 4 );iVar34 = SUB164(auVar13 * auVar25, 8);uVar43 = *puVar1;pauVar29 = pauVar32;while (uVar43 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar43 * lVar36;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar41;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar30 + iVar34 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   uVar42 = SUB164(auVar15 * auVar27, 8);
   pauVar45 = pauVar29;
   if (uVar42 < uVar44) {
      *puVar1 = uVar31;
      puVar4 = (undefined8*)( lVar37 + lStack_90 * 8 );
      pauVar45 = (undefined1(*) [16])*puVar4;
      *puVar4 = pauVar29;
      uVar31 = uVar43;
      uVar44 = uVar42;
   }

   uVar44 = uVar44 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar34 + 1) * lVar36;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   lStack_90 = SUB168(auVar16 * auVar28, 8);
   puVar1 = (uint*)( lVar40 + lStack_90 * 4 );
   iVar34 = SUB164(auVar16 * auVar28, 8);
   pauVar29 = pauVar45;
   uVar43 = *puVar1;
}
;*(undefined1(**) [16])( lVar37 + lStack_90 * 8 ) = pauVar29;*puVar1 = uVar31;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001060c7:auVar47._8_8_ = lStack_90;auVar47._0_8_ = pauVar32[1] + 8;return auVar47;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<JoltArea3D::ShapeIDPair, JoltArea3D::ShapeIndexPair, JoltArea3D::ShapeIDPair,
   HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,
   DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair, JoltArea3D::ShapeIndexPair> >
   >::insert(JoltArea3D::ShapeIDPair const&, JoltArea3D::ShapeIndexPair const&, bool) */void HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>::insert(ShapeIDPair *param_1, ShapeIndexPair *param_2, bool param_3) {
   uint *puVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   void *__s;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1(*pauVar24)[16];
   uint uVar25;
   uint uVar26;
   undefined1(*pauVar27)[16];
   undefined8 uVar28;
   void *__s_00;
   undefined8 *in_RCX;
   int iVar29;
   undefined7 in_register_00000011;
   int *piVar30;
   ulong uVar31;
   long lVar32;
   long lVar33;
   ulong uVar34;
   char in_R8B;
   uint uVar35;
   ulong uVar36;
   uint uVar37;
   uint uVar38;
   undefined1(*pauVar39)[16];
   piVar30 = (int*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 8 );
   uVar26 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
   if (__s_00 == (void*)0x0) {
      uVar31 = (ulong)uVar26;
      uVar34 = uVar31 * 4;
      uVar36 = uVar31 * 8;
      uVar28 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar28;
      __s_00 = (void*)Memory::alloc_static(uVar36, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar26 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar36 ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
            uVar34 = 0;
            do {
               *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
               uVar34 = uVar34 + 1;
            }
 while ( uVar31 != uVar34 );
            goto LAB_00106485;
         }

         memset(__s, 0, uVar34);
         memset(__s_00, 0, uVar36);
         iVar29 = *(int*)( param_2 + 0x2c );
         goto LAB_00106489;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 != (void*)0x0) goto LAB_00106489;
   }
 else {
      LAB_00106485:iVar29 = *(int*)( param_2 + 0x2c );
      LAB_00106489:if (iVar29 != 0) {
         uVar36 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )]);
         uVar34 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         iVar2 = *piVar30;
         iVar3 = piVar30[1];
         uVar25 = ( iVar2 * 0x16a88000 | ( uint )(iVar2 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
         uVar25 = ( uVar25 << 0xd | uVar25 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar3 * 0x16a88000 | ( uint )(iVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         uVar25 = ( uVar25 << 0xd | uVar25 >> 0x13 ) * 5 + 0xe6546b64;
         uVar25 = ( uVar25 >> 0x10 ^ uVar25 ) * -0x7a143595;
         uVar25 = ( uVar25 ^ uVar25 >> 0xd ) * -0x3d4d51cb;
         uVar38 = uVar25 ^ uVar25 >> 0x10;
         if (uVar25 == uVar25 >> 0x10) {
            uVar38 = 1;
            uVar31 = uVar34;
         }
 else {
            uVar31 = uVar38 * uVar34;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar36;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar31;
         lVar32 = SUB168(auVar8 * auVar16, 8);
         uVar25 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar32 * 4 );
         uVar35 = SUB164(auVar8 * auVar16, 8);
         if (uVar25 != 0) {
            uVar37 = 0;
            do {
               if (( ( uVar38 == uVar25 ) && ( lVar32 = *(long*)( (long)__s_00 + lVar32 * 8 ) * (int*)( lVar32 + 0x10 ) == iVar2 ) ) && ( *(int*)( lVar32 + 0x14 ) == iVar3 )) {
                  pauVar27 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar35 * 8 );
                  *(undefined8*)( pauVar27[1] + 8 ) = *in_RCX;
                  goto LAB_001067b0;
               }

               uVar37 = uVar37 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( uVar35 + 1 ) * uVar34;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar36;
               lVar32 = SUB168(auVar9 * auVar17, 8);
               uVar25 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar32 * 4 );
               uVar35 = SUB164(auVar9 * auVar17, 8);
            }
 while ( ( uVar25 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar25 * uVar34,auVar18._8_8_ = 0,auVar18._0_8_ = uVar36,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )] + uVar35 ) - SUB164(auVar10 * auVar18, 8) ) * uVar34,auVar19._8_8_ = 0,auVar19._0_8_ = uVar36,uVar37 <= SUB164(auVar11 * auVar19, 8) );
         }

      }

   }

   if ((float)uVar26 * __LC50 < (float)( iVar29 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar27 = (undefined1(*) [16])0x0;
         goto LAB_001067b0;
      }

      _resize_and_rehash((HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }

   uVar28 = *(undefined8*)piVar30;
   uVar4 = *in_RCX;
   pauVar27 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar27 = (undefined1[16])0x0;
   *(undefined8*)pauVar27[1] = uVar28;
   *(undefined8*)( pauVar27[1] + 8 ) = uVar4;
   puVar5 = *(undefined8**)( param_2 + 0x20 );
   if (puVar5 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar27;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar27;
   }
 else if (in_R8B == '\0') {
      *puVar5 = pauVar27;
      *(undefined8**)( *pauVar27 + 8 ) = puVar5;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar27;
   }
 else {
      lVar32 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar32 + 8 ) = pauVar27;
      *(long*)*pauVar27 = lVar32;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar27;
   }

   uVar26 = ( *piVar30 * 0x16a88000 | ( uint )(*piVar30 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar26 = ( uVar26 << 0xd | uVar26 >> 0x13 ) * 5 + 0xe6546b64 ^ ( piVar30[1] * 0x16a88000 | ( uint )(piVar30[1] * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar26 = ( uVar26 << 0xd | uVar26 >> 0x13 ) * 5 + 0xe6546b64;
   uVar26 = ( uVar26 >> 0x10 ^ uVar26 ) * -0x7a143595;
   uVar25 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
   uVar26 = uVar25 ^ uVar25 >> 0x10;
   if (uVar25 == uVar25 >> 0x10) {
      uVar34 = 1;
      uVar26 = 1;
   }
 else {
      uVar34 = (ulong)uVar26;
   }

   lVar32 = *(long*)( param_2 + 0x10 );
   uVar35 = 0;
   lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar25 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
   uVar36 = CONCAT44(0, uVar25);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar34 * lVar6;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar36;
   lVar33 = SUB168(auVar12 * auVar20, 8);
   lVar7 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar32 + lVar33 * 4 );
   iVar29 = SUB164(auVar12 * auVar20, 8);
   uVar38 = *puVar1;
   pauVar24 = pauVar27;
   while (uVar38 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar36;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar25 + iVar29 ) - SUB164(auVar13 * auVar21, 8)) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar36;
      uVar37 = SUB164(auVar14 * auVar22, 8);
      pauVar39 = pauVar24;
      if (uVar37 < uVar35) {
         *puVar1 = uVar26;
         puVar5 = (undefined8*)( lVar7 + lVar33 * 8 );
         pauVar39 = (undefined1(*) [16])*puVar5;
         *puVar5 = pauVar24;
         uVar26 = uVar38;
         uVar35 = uVar37;
      }

      uVar35 = uVar35 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar29 + 1) * lVar6;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar36;
      lVar33 = SUB168(auVar15 * auVar23, 8);
      puVar1 = (uint*)( lVar32 + lVar33 * 4 );
      iVar29 = SUB164(auVar15 * auVar23, 8);
      pauVar24 = pauVar39;
      uVar38 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar7 + lVar33 * 8 ) = pauVar24;
   *puVar1 = uVar26;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_001067b0:*(undefined1(**) [16])param_1 = pauVar27;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<JPH::BodyID, JoltArea3D::Overlap, JoltArea3D::BodyIDHasher,
   HashMapComparatorDefault<JPH::BodyID>, DefaultTypedAllocator<HashMapElement<JPH::BodyID,
   JoltArea3D::Overlap> > >::operator[](JPH::BodyID const&) */undefined1 * __thiscallHashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>::operator [](HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>> * this, BodyID * param_1) * puVar1 ;undefined8 *puVar2undefined4 uVar3ulong uVar4void *pvVar5void *__sundefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]undefined1(*pauVar38)[16];uint uVar39uint uVar40ulong uVar41undefined8 uVar42void *__s_00undefined1(*pauVar43)[16];long lVar44int *piVar45ulong uVar46int iVar47ulong uVar48long lVar49long lVar50long lVar51ulong uVar52ulong uVar53undefined8 uVar54uint uVar55uint uVar56uint uVar57uint uVar58undefined1(*pauVar59)[16];void *local_f0local_f0 = *(void**)( this + 8 );uVar41 = ( ulong ) * (uint*)( this + 0x28 );uVar40 = *(uint*)param_1;uVar53 = (ulong)uVar40;uVar58 = ( &hash_table_size_primes )[uVar41];uVar52 = CONCAT44(0, uVar58);if (local_f0 == (void*)0x0) {
   uVar41 = uVar52 * 4;
   uVar53 = uVar52 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   local_f0 = (void*)Memory::alloc_static(uVar53, false);
   *(void**)( this + 8 ) = local_f0;
   if (uVar58 == 0) {
      iVar47 = *(int*)( this + 0x2c );
      uVar53 = ( ulong ) * (uint*)param_1;
      if (local_f0 == (void*)0x0) goto LAB_00106a93;
   }
 else {
      pvVar5 = *(void**)( this + 0x10 );
      if (( pvVar5 < (void*)( (long)local_f0 + uVar53 ) ) && ( local_f0 < (void*)( (long)pvVar5 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar5 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)local_f0 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar52 != uVar41 );
         iVar47 = *(int*)( this + 0x2c );
         uVar53 = ( ulong ) * (uint*)param_1;
      }
 else {
         memset(pvVar5, 0, uVar41);
         memset(local_f0, 0, uVar53);
         iVar47 = *(int*)( this + 0x2c );
         uVar53 = ( ulong ) * (uint*)param_1;
      }

   }

   if (iVar47 != 0) {
      uVar41 = ( ulong ) * (uint*)( this + 0x28 );
      lVar44 = *(long*)( this + 0x10 );
      goto LAB_00106efb;
   }

}
 else {
   iVar47 = *(int*)( this + 0x2c );
   if (iVar47 != 0) {
      uVar4 = *(ulong*)( hash_table_size_primes_inv + uVar41 * 8 );
      uVar39 = ( uVar40 >> 0x10 ^ uVar40 ) * -0x7a143595;
      uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
      uVar57 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar57 = 1;
         uVar48 = uVar4;
      }
 else {
         uVar48 = uVar57 * uVar4;
      }

      lVar44 = *(long*)( this + 0x10 );
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar52;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar48;
      lVar49 = SUB168(auVar6 * auVar22, 8);
      uVar39 = *(uint*)( lVar44 + lVar49 * 4 );
      uVar55 = SUB164(auVar6 * auVar22, 8);
      if (uVar39 != 0) {
         uVar56 = 0;
         do {
            if (( uVar57 == uVar39 ) && ( uVar40 == *(uint*)( *(long*)( (long)local_f0 + lVar49 * 8 ) + 0x10 ) )) {
               pauVar43 = *(undefined1(**) [16])( (long)local_f0 + (ulong)uVar55 * 8 );
               goto LAB_00106ee3;
            }

            uVar56 = uVar56 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( uVar55 + 1 ) * uVar4;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            lVar49 = SUB168(auVar7 * auVar23, 8);
            uVar39 = *(uint*)( lVar44 + lVar49 * 4 );
            uVar55 = SUB164(auVar7 * auVar23, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar39 * uVar4,auVar24._8_8_ = 0,auVar24._0_8_ = uVar52,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( uVar55 + uVar58 ) - SUB164(auVar8 * auVar24, 8) ) * uVar4,auVar25._8_8_ = 0,auVar25._0_8_ = uVar52,uVar56 <= SUB164(auVar9 * auVar25, 8) );
      }

      LAB_00106efb:uVar48 = CONCAT44(0, ( &hash_table_size_primes )[uVar41]);
      uVar4 = *(ulong*)( hash_table_size_primes_inv + uVar41 * 8 );
      uVar40 = ( ( uint )(uVar53 >> 0x10) ^ (uint)uVar53 ) * -0x7a143595;
      uVar40 = ( uVar40 ^ uVar40 >> 0xd ) * -0x3d4d51cb;
      uVar58 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
         uVar58 = 1;
         uVar46 = uVar4;
      }
 else {
         uVar46 = uVar58 * uVar4;
      }

      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar48;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar46;
      lVar49 = SUB168(auVar18 * auVar34, 8);
      uVar40 = *(uint*)( lVar44 + lVar49 * 4 );
      uVar39 = SUB164(auVar18 * auVar34, 8);
      if (uVar40 != 0) {
         uVar57 = 0;
         do {
            if (( uVar58 == uVar40 ) && ( *(uint*)( *(long*)( (long)local_f0 + lVar49 * 8 ) + 0x10 ) == (uint)uVar53 )) {
               lVar44 = *(long*)( (long)local_f0 + (ulong)uVar39 * 8 );
               uVar40 = *(uint*)( lVar44 + 0x40 );
               uVar58 = ( &hash_table_size_primes )[uVar40];
               if (( *(int*)( lVar44 + 0x44 ) == 0 ) || ( *(long*)( lVar44 + 0x20 ) == 0 )) goto LAB_00106ff1;
               lVar49 = 0;
               if (uVar58 != 0) goto LAB_00107218;
               *(undefined4*)( lVar44 + 0x44 ) = 0;
               *(undefined1(*) [16])( lVar44 + 0x30 ) = (undefined1[16])0x0;
               goto LAB_00106ff6;
            }

            uVar57 = uVar57 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = ( uVar39 + 1 ) * uVar4;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar48;
            lVar49 = SUB168(auVar19 * auVar35, 8);
            uVar40 = *(uint*)( lVar44 + lVar49 * 4 );
            uVar39 = SUB164(auVar19 * auVar35, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar20._8_8_ = 0 ),auVar20._0_8_ = uVar40 * uVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar48,auVar21._8_8_ = 0,auVar21._0_8_ = ( ( ( &hash_table_size_primes )[uVar41] + uVar39 ) - SUB164(auVar20 * auVar36, 8) ) * uVar4,auVar37._8_8_ = 0,auVar37._0_8_ = uVar48,uVar57 <= SUB164(auVar21 * auVar37, 8) );
      }

   }

}
LAB_00106a93:if ((float)uVar52 * __LC50 < (float)( iVar47 + 1 )) {
   uVar40 = *(uint*)( this + 0x28 );
   if (uVar40 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00106ee3;
   }

   uVar41 = ( ulong )(uVar40 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar58 = ( &hash_table_size_primes )[uVar40];
   if (uVar40 + 1 < 2) {
      uVar41 = 2;
   }

   uVar40 = ( &hash_table_size_primes )[uVar41];
   uVar52 = (ulong)uVar40;
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar5 = *(void**)( this + 0x10 );
   uVar41 = uVar52 * 4;
   uVar53 = uVar52 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar53, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar40 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar53 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar52 != uVar41 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar53);
      }

   }

   if (uVar58 != 0) {
      uVar41 = 0;
      do {
         uVar40 = *(uint*)( (long)pvVar5 + uVar41 * 4 );
         if (uVar40 != 0) {
            lVar44 = *(long*)( this + 0x10 );
            uVar55 = 0;
            uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar53 = CONCAT44(0, uVar39);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar40 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar53;
            lVar50 = SUB168(auVar10 * auVar26, 8);
            puVar1 = (uint*)( lVar44 + lVar50 * 4 );
            iVar47 = SUB164(auVar10 * auVar26, 8);
            uVar57 = *puVar1;
            uVar42 = *(undefined8*)( (long)local_f0 + uVar41 * 8 );
            while (uVar57 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar57 * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar53;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar39 + iVar47 ) - SUB164(auVar11 * auVar27, 8)) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar53;
               uVar56 = SUB164(auVar12 * auVar28, 8);
               uVar54 = uVar42;
               if (uVar56 < uVar55) {
                  *puVar1 = uVar40;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar50 * 8 );
                  uVar54 = *puVar2;
                  *puVar2 = uVar42;
                  uVar40 = uVar57;
                  uVar55 = uVar56;
               }

               uVar55 = uVar55 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar47 + 1) * lVar49;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar53;
               lVar50 = SUB168(auVar13 * auVar29, 8);
               puVar1 = (uint*)( lVar44 + lVar50 * 4 );
               iVar47 = SUB164(auVar13 * auVar29, 8);
               uVar42 = uVar54;
               uVar57 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar50 * 8 ) = uVar42;
            *puVar1 = uVar40;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar58 != uVar41 );
      Memory::free_static(local_f0, false);
      Memory::free_static(pvVar5, false);
   }

}
uVar3 = *(undefined4*)param_1;uVar41 = 1;do {
   if (0x16 < ( uint )(&hash_table_size_primes)[uVar41]) {
      uVar41 = uVar41 & 0xffffffff;
      goto LAB_00106cfc;
   }

   uVar41 = uVar41 + 1;
}
 while ( uVar41 != 0x1d );uVar41 = 0;_err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);LAB_00106cfc:pauVar43 = (undefined1(*) [16])operator_new(0x78, "");*pauVar43 = (undefined1[16])0x0;*(undefined8*)pauVar43[4] = 0;*(undefined4*)pauVar43[1] = uVar3;uVar40 = ( &hash_table_size_primes )[uVar41];pauVar43[2] = (undefined1[16])0x0;lVar44 = 1;pauVar43[3] = (undefined1[16])0x0;if (5 < uVar40) {
   do {
      if (uVar40 <= ( uint )(&hash_table_size_primes)[lVar44]) {
         *(int*)pauVar43[4] = (int)lVar44;
         goto LAB_00106d8f;
      }

      lVar44 = lVar44 + 1;
   }
 while ( lVar44 != 0x1d );
   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
}
LAB_00106d8f:puVar2 = *(undefined8**)( this + 0x20 );*(undefined8*)( pauVar43[4] + 8 ) = 0;*(undefined8*)pauVar43[5] = 0;*(undefined8*)( pauVar43[5] + 8 ) = 0;*(undefined8*)pauVar43[6] = 0;*(undefined1(*) [16])( pauVar43[6] + 8 ) = (undefined1[16])0x0;if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
}
 else {
   *puVar2 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar40 = ( *(uint*)param_1 >> 0x10 ^ *(uint*)param_1 ) * -0x7a143595;uVar58 = ( uVar40 ^ uVar40 >> 0xd ) * -0x3d4d51cb;uVar40 = uVar58 ^ uVar58 >> 0x10;if (uVar58 == uVar58 >> 0x10) {
   uVar41 = 1;
   uVar40 = 1;
}
 else {
   uVar41 = (ulong)uVar40;
}
uVar57 = 0;lVar44 = *(long*)( this + 0x10 );lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar58 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar53 = CONCAT44(0, uVar58);auVar14._8_8_ = 0;auVar14._0_8_ = uVar41 * lVar49;auVar30._8_8_ = 0;auVar30._0_8_ = uVar53;lVar51 = SUB168(auVar14 * auVar30, 8);lVar50 = *(long*)( this + 8 );puVar1 = (uint*)( lVar44 + lVar51 * 4 );iVar47 = SUB164(auVar14 * auVar30, 8);uVar39 = *puVar1;pauVar38 = pauVar43;while (uVar39 != 0) {
   auVar15._8_8_ = 0;
   auVar15._0_8_ = (ulong)uVar39 * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar53;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(( uVar58 + iVar47 ) - SUB164(auVar15 * auVar31, 8)) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar53;
   uVar55 = SUB164(auVar16 * auVar32, 8);
   pauVar59 = pauVar38;
   if (uVar55 < uVar57) {
      *puVar1 = uVar40;
      puVar2 = (undefined8*)( lVar50 + lVar51 * 8 );
      pauVar59 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar40 = uVar39;
      uVar57 = uVar55;
   }

   uVar57 = uVar57 + 1;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = ( ulong )(iVar47 + 1) * lVar49;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar53;
   lVar51 = SUB168(auVar17 * auVar33, 8);
   puVar1 = (uint*)( lVar44 + lVar51 * 4 );
   iVar47 = SUB164(auVar17 * auVar33, 8);
   pauVar38 = pauVar59;
   uVar39 = *puVar1;
}
;*(undefined1(**) [16])( lVar50 + lVar51 * 8 ) = pauVar38;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00106ee3:return pauVar43[1] + 8;LAB_00107218:do {
   piVar45 = (int*)( *(long*)( lVar44 + 0x28 ) + lVar49 );
   if (*piVar45 != 0) {
      *piVar45 = 0;
      Memory::free_static(*(void**)( *(long*)( lVar44 + 0x20 ) + lVar49 * 2 ), false);
      *(undefined8*)( *(long*)( lVar44 + 0x20 ) + lVar49 * 2 ) = 0;
   }

   lVar49 = lVar49 + 4;
}
 while ( (ulong)uVar58 << 2 != lVar49 );uVar40 = *(uint*)( lVar44 + 0x40 );*(undefined4*)( lVar44 + 0x44 ) = 0;*(undefined1(*) [16])( lVar44 + 0x30 ) = (undefined1[16])0x0;uVar58 = ( &hash_table_size_primes )[uVar40];LAB_00106ff1:if (uVar58 < 0x17) {
   LAB_00106ff6:if (uVar40 != 0x1c) {
      uVar41 = (ulong)uVar40;
      do {
         uVar58 = (int)uVar41 + 1;
         uVar41 = (ulong)uVar58;
         if (0x16 < ( uint )(&hash_table_size_primes)[uVar41]) {
            if (uVar58 != uVar40) {
               if (*(long*)( lVar44 + 0x20 ) == 0) {
                  *(uint*)( lVar44 + 0x40 ) = uVar58;
               }
 else {
                  HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>::_resize_and_rehash((HashMap<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair,JoltArea3D::ShapeIDPair,HashMapComparatorDefault<JoltArea3D::ShapeIDPair>,DefaultTypedAllocator<HashMapElement<JoltArea3D::ShapeIDPair,JoltArea3D::ShapeIndexPair>>>*)( lVar44 + 0x18 ), uVar58);
               }

            }

            goto LAB_0010704a;
         }

      }
 while ( uVar58 != 0x1c );
   }

   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
}
LAB_0010704a:if (*(int*)( lVar44 + 0x48 ) != 0) {
   *(undefined4*)( lVar44 + 0x48 ) = 0;
}
if (*(int*)( lVar44 + 0x58 ) != 0) {
   *(undefined4*)( lVar44 + 0x58 ) = 0;
}
lVar49 = *(long*)( this + 8 );*(undefined1(*) [16])( lVar44 + 0x68 ) = (undefined1[16])0x0;pauVar43 = *(undefined1(**) [16])( lVar49 + (ulong)uVar39 * 8 );goto LAB_00106ee3;}/* JoltArea3D::_get_broad_phase_layer() const */void JoltArea3D::_GLOBAL__sub_I__get_broad_phase_layer(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC60;
   }

   if (JoltSoftBody3D::mesh_to_shared == '\0') {
      JoltSoftBody3D::mesh_to_shared = '\x01';
      JoltSoftBody3D::mesh_to_shared._8_16_ = (undefined1[16])0x0;
      JoltSoftBody3D::mesh_to_shared._24_16_ = (undefined1[16])0x0;
      JoltSoftBody3D::mesh_to_shared._40_8_ = 2;
      __cxa_atexit(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault < RID>, DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>> > ::~HashMap, JoltSoftBody3D::mesh_to_shared, &__dso_handle);
   }

   (anonymous_namespace)::DEFAULT_WIND_SOURCE._0_8_ = 0;
   (anonymous_namespace)::DEFAULT_WIND_SOURCE._8_4_ = 0;
   (anonymous_namespace)::DEFAULT_WIND_DIRECTION._0_8_ = 0;
   (anonymous_namespace)::DEFAULT_WIND_DIRECTION._8_4_ = 0;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JoltArea3D::~JoltArea3D() */void JoltArea3D::~JoltArea3D(JoltArea3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

