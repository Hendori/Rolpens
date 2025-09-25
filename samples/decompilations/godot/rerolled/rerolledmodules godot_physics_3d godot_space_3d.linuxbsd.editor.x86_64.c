/* GodotPhysicsDirectSpaceState3D::get_closest_point_to_object_volume(RID, Vector3) const */undefined1[16];GodotPhysicsDirectSpaceState3D::get_closest_point_to_object_volume(undefined8 param_1, float param_2, long param_3, ulong param_4) {
   int iVar1;
   code *pcVar2;
   bool bVar3;
   long lVar4;
   int iVar5;
   char *pcVar6;
   long *plVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[12];
   float local_f8;
   float local_f4;
   undefined8 local_f0;
   float local_d8;
   float fStack_d4;
   float local_b4;
   float local_b0;
   float local_ac;
   float local_a8;
   float fStack_a4;
   undefined8 local_a0;
   float local_98;
   float fStack_94;
   float local_90;
   float local_8c;
   float local_88;
   undefined8 local_84;
   float local_7c;
   float local_78;
   float fStack_74;
   float local_70;
   float local_6c;
   float local_68;
   float local_64;
   float local_60;
   float local_5c;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   long local_40;
   local_d8 = (float)param_1;
   fStack_d4 = (float)( (ulong)param_1 >> 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == 0) {
      LAB_00100650:uVar8 = 0x243;
      pcVar6 = "Parameter \"obj\" is null.";
   }
 else {
      iVar5 = (int)( param_4 >> 0x20 );
      if (*(uint*)( GodotPhysicsServer3D::godot_singleton + 0x284 ) <= (uint)param_4) {
         LAB_00100607:if ((uint)param_4 < *(uint*)( GodotPhysicsServer3D::godot_singleton + 0x2dc )) {
            plVar7 = (long*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( GodotPhysicsServer3D::godot_singleton + 0x2c8 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x2d8 ) ) * 8 ) );
            iVar1 = (int)plVar7[1];
            if (iVar1 == iVar5) {
               lVar12 = *plVar7;
               if (lVar12 != 0) goto LAB_00100226;
            }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         goto LAB_00100650;
      }

      plVar7 = (long*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x280 ) ) * 0x10 + *(long*)( *(long*)( GodotPhysicsServer3D::godot_singleton + 0x270 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar7[1];
      if (iVar1 != iVar5) {
         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00100607;
      }

      lVar12 = *plVar7;
      if (lVar12 == 0) goto LAB_00100607;
      LAB_00100226:if (*(long*)( param_3 + 0x178 ) == *(long*)( lVar12 + 0x40 )) {
         lVar4 = *(long*)( lVar12 + 0x38 );
         if (lVar4 != 0) {
            lVar9 = 0;
            bVar3 = false;
            local_f0 = 0;
            local_f4 = 0.0;
            local_f8 = _LC1;
            lVar11 = lVar9;
            do {
               lVar10 = *(long*)( lVar4 + -8 );
               if ((int)lVar10 <= (int)lVar9) break;
               if (lVar9 < lVar10) {
                  if (*(char*)( lVar4 + 0x88 + lVar11 ) == '\0') goto joined_r0x001002a2;
               }
 else {
                  _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, lVar9, lVar10, "p_idx", "shapes.size()", "", false, false);
                  lVar4 = *(long*)( lVar12 + 0x38 );
                  joined_r0x001002a2:if (lVar4 == 0) {
                     lVar4 = 0;
                     LAB_0010055e:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar9, lVar4, "p_index", "shapes.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar4 = *(long*)( lVar4 + -8 );
                  if (lVar4 <= lVar9) goto LAB_0010055e;
                  Transform3D::operator *((Transform3D*)&local_a8, (Transform3D*)( lVar12 + 0x48 ));
                  lVar4 = *(long*)( lVar12 + 0x38 );
                  if (lVar4 == 0) {
                     lVar10 = 0;
                     LAB_001005a6:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar9, lVar10, "p_index", "shapes.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar10 = *(long*)( lVar4 + -8 );
                  if (lVar10 <= lVar9) goto LAB_001005a6;
                  plVar7 = *(long**)( lVar4 + 0x80 + lVar11 );
                  pcVar2 = *(code**)( *plVar7 + 0x30 );
                  Transform3D::affine_inverse();
                  local_ac = local_60 * local_d8 + local_5c * fStack_d4 + local_58 * param_2 + local_4c;
                  local_b0 = local_6c * local_d8 + local_68 * fStack_d4 + local_64 * param_2 + local_50;
                  local_b4 = local_78 * local_d8 + fStack_74 * fStack_d4 + local_70 * param_2 + local_54;
                  auVar20 = ( *pcVar2 )(plVar7, &local_b4);
                  fVar17 = auVar20._8_4_;
                  fVar13 = auVar20._0_4_;
                  fVar15 = auVar20._4_4_;
                  fVar16 = local_90 * fVar13 + fVar15 * local_8c + local_88 * fVar17 + local_7c;
                  fVar14 = fStack_a4 * fVar15 + local_a8 * fVar13 + (float)local_a0 * fVar17 + (float)local_84;
                  fVar15 = local_98 * fVar15 + (float)( (ulong)local_a0 >> 0x20 ) * fVar13 + fStack_94 * fVar17 + (float)( (ulong)local_84 >> 0x20 );
                  fVar17 = param_2 - fVar16;
                  fVar18 = fStack_d4 - fVar15;
                  fVar13 = local_d8 - fVar14;
                  fVar13 = SQRT(fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17);
                  if (fVar13 < local_f8) {
                     local_f8 = fVar13;
                     local_f4 = fVar16;
                     local_f0 = CONCAT44(fVar15, fVar14);
                  }

                  lVar4 = *(long*)( lVar12 + 0x38 );
                  bVar3 = true;
               }

               lVar9 = lVar9 + 1;
               lVar11 = lVar11 + 0x90;
            }
 while ( lVar4 != 0 );
            if (bVar3) {
               local_70 = local_f4;
               local_78 = (float)local_f0;
               fStack_74 = (float)( (ulong)local_f0 >> 0x20 );
               goto LAB_0010068c;
            }

         }

         local_78 = (float)*(undefined8*)( lVar12 + 0x6c );
         fStack_74 = (float)( ( ulong ) * (undefined8*)( lVar12 + 0x6c ) >> 0x20 );
         local_70 = *(float*)( lVar12 + 0x74 );
         goto LAB_0010068c;
      }

      uVar8 = 0x245;
      pcVar6 = "Condition \"obj->get_space() != space\" is true. Returning: Vector3()";
   }

   _err_print_error("get_closest_point_to_object_volume", "modules/godot_physics_3d/godot_space_3d.cpp", uVar8, pcVar6, 0, 0);
   local_78 = 0.0;
   fStack_74 = 0.0;
   local_70 = 0.0;
   LAB_0010068c:auVar19._4_4_ = fStack_74;
   auVar19._0_4_ = local_78;
   auVar19._8_4_ = local_70;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   auVar19._12_4_ = 0;
   return auVar19;
}
/* GodotSpace3D::_broadphase_pair(GodotCollisionObject3D*, int, GodotCollisionObject3D*, int, void*)
    */GodotAreaPair3D *GodotSpace3D::_broadphase_pair(GodotCollisionObject3D *param_1, int param_2, GodotCollisionObject3D *param_3, int param_4, void *param_5) {
   int iVar1;
   int iVar2;
   GodotAreaPair3D *this;
   GodotBodyPair3D *this_00;
   GodotArea2Pair3D *this_01;
   GodotAreaSoftBodyPair3D *this_02;
   int iVar3;
   GodotCollisionObject3D *pGVar4;
   int iVar5;
   iVar1 = *(int*)( param_1 + 8 );
   iVar2 = *(int*)( param_3 + 8 );
   pGVar4 = param_3;
   iVar5 = param_2;
   iVar3 = iVar1;
   if (iVar1 <= iVar2) {
      pGVar4 = param_1;
      param_1 = param_3;
      iVar5 = param_4;
      param_4 = param_2;
      iVar3 = iVar2;
      iVar2 = iVar1;
   }

   *(int*)( (long)param_5 + 0x6104 ) = *(int*)( (long)param_5 + 0x6104 ) + 1;
   if (iVar2 == 0) {
      if (iVar3 == 0) {
         this_01 = (GodotArea2Pair3D*)operator_new(0x50, "");
         GodotArea2Pair3D::GodotArea2Pair3D(this_01, (GodotArea3D*)param_1, iVar5, (GodotArea3D*)pGVar4, param_4);
         return (GodotAreaPair3D*)this_01;
      }

      if (iVar3 == 2) {
         this_02 = (GodotAreaSoftBodyPair3D*)operator_new(0x50, "");
         GodotAreaSoftBodyPair3D::GodotAreaSoftBodyPair3D(this_02, (GodotSoftBody3D*)param_1, iVar5, (GodotArea3D*)pGVar4, param_4);
         return (GodotAreaPair3D*)this_02;
      }

      this(GodotAreaPair3D * operator_new(0x50, ""));
      GodotAreaPair3D::GodotAreaPair3D(this, (GodotBody3D*)param_1, iVar5, (GodotArea3D*)pGVar4, param_4);
   }
 else {
      this(GodotAreaPair3D * 0x0);
      if (iVar2 == 1) {
         if (iVar3 != 2) {
            this_00 = (GodotBodyPair3D*)operator_new(0x298, "");
            GodotBodyPair3D::GodotBodyPair3D(this_00, (GodotBody3D*)pGVar4, param_4, (GodotBody3D*)param_1, iVar5);
            return (GodotAreaPair3D*)this_00;
         }

         this(GodotAreaPair3D * operator_new(0x70, ""));
         GodotBodySoftBodyPair3D::GodotBodySoftBodyPair3D((GodotBodySoftBodyPair3D*)this, (GodotBody3D*)pGVar4, param_4, (GodotSoftBody3D*)param_1);
      }

   }

   return this;
}
/* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::erase(GodotConstraint3D*
   const&) [clone .isra.0] */void HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase(HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>> *this, GodotConstraint3D **param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
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
   ulong uVar29;
   uint uVar30;
   ulong uVar31;
   ulong uVar32;
   ulong uVar33;
   long *plVar34;
   ulong uVar35;
   uint uVar36;
   uint uVar37;
   uint *puVar38;
   lVar6 = *(long*)( this + 8 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      lVar7 = *(long*)( this + 0x10 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar35 = CONCAT44(0, uVar5);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = (long)*param_1 * 0x3ffff - 1;
      uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
      uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar32 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
         uVar32 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar32 * lVar8;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar35;
      uVar29 = SUB168(auVar11 * auVar20, 8);
      uVar37 = *(uint*)( lVar7 + uVar29 * 4 );
      uVar33 = (ulong)SUB164(auVar11 * auVar20, 8);
      if (uVar37 != 0) {
         uVar36 = 0;
         do {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar35;
            uVar31 = SUB168(auVar14 * auVar23, 8);
            uVar30 = SUB164(auVar14 * auVar23, 8);
            if (( (uint)uVar32 == uVar37 ) && ( *param_1 == *(GodotConstraint3D**)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
               puVar38 = (uint*)( lVar7 + uVar31 * 4 );
               uVar37 = *puVar38;
               if (( uVar37 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar5 ) - SUB164(auVar15 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,uVar29 = (ulong)uVar30,uVar32 = uVar33,SUB164(auVar16 * auVar25, 8) != 0) {
                  while (true) {
                     uVar33 = uVar29;
                     puVar1 = (uint*)( lVar7 + uVar32 * 4 );
                     *puVar38 = *puVar1;
                     puVar2 = (undefined8*)( lVar6 + uVar31 * 8 );
                     *puVar1 = uVar37;
                     puVar3 = (undefined8*)( lVar6 + uVar32 * 8 );
                     uVar9 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar9;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar35;
                     uVar31 = SUB168(auVar19 * auVar28, 8);
                     puVar38 = (uint*)( lVar7 + uVar31 * 4 );
                     uVar37 = *puVar38;
                     if (( uVar37 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar28, 8) + uVar5 ) - SUB164(auVar17 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar35,SUB164(auVar18 * auVar27, 8) == 0) break;
                     uVar29 = uVar31 & 0xffffffff;
                     uVar32 = uVar33;
                  }
;
               }

               plVar4 = (long*)( lVar6 + uVar33 * 8 );
               *(undefined4*)( lVar7 + uVar33 * 4 ) = 0;
               plVar34 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar34) {
                  *(long*)( this + 0x18 ) = *plVar34;
                  plVar34 = (long*)*plVar4;
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00100b29;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00100b29:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00100b30;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00100b30:if (plVar10 != (long*)0x0) {
                  *plVar10 = *plVar34;
                  plVar34 = (long*)*plVar4;
               }

               if (*plVar34 != 0) {
                  *(long*)( *plVar34 + 8 ) = plVar34[1];
                  plVar34 = (long*)*plVar4;
               }

               Memory::free_static(plVar34, false);
               *(undefined8*)( *(long*)( this + 8 ) + uVar33 * 8 ) = 0;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
               return;
            }

            uVar37 = *(uint*)( lVar7 + uVar31 * 4 );
            uVar33 = uVar31 & 0xffffffff;
            uVar36 = uVar36 + 1;
         }
 while ( ( uVar37 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar37 * lVar8,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar30 ) - SUB164(auVar12 * auVar21, 8)) * lVar8,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,uVar29 = uVar31,uVar36 <= SUB164(auVar13 * auVar22, 8) );
      }

   }

   return;
}
/* GodotSpace3D::_broadphase_unpair(GodotCollisionObject3D*, int, GodotCollisionObject3D*, int,
   void*, void*) */void GodotSpace3D::_broadphase_unpair(GodotCollisionObject3D *param_1, int param_2, GodotCollisionObject3D *param_3, int param_4, void *param_5, void *param_6) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotConstraint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 == (void*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      /* WARNING: Load size is inaccurate */
      lVar2 = *param_5;
      *(int*)( (long)param_6 + 0x6104 ) = *(int*)( (long)param_6 + 0x6104 ) + -1;
      if (*(code**)( lVar2 + 0x28 ) == GodotJoint3D::~GodotJoint3D) {
         *(undefined***)param_5 = &PTR_get_soft_body_ptr_0010b418;
         if (0 < *(int*)( (long)param_5 + 0x10 )) {
            lVar2 = 0;
            do {
               lVar1 = *(long*)( *(long*)( (long)param_5 + 8 ) + lVar2 * 8 );
               if (lVar1 != 0) {
                  local_28 = (GodotConstraint3D*)param_5;
                  HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), &local_28);
               }

               lVar2 = lVar2 + 1;
            }
 while ( (int)lVar2 < *(int*)( (long)param_5 + 0x10 ) );
         }

      }
 else {
         ( **(code**)( lVar2 + 0x28 ) )(param_5);
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(param_5, false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* GodotPhysicsDirectSpaceState3D::intersect_point(PhysicsDirectSpaceState3D::PointParameters
   const&, PhysicsDirectSpaceState3D::ShapeResult*, int) */int GodotPhysicsDirectSpaceState3D::intersect_point(GodotPhysicsDirectSpaceState3D *this, PointParameters *param_1, ShapeResult *param_2, int param_3) {
   float fVar1;
   PointParameters PVar2;
   long lVar3;
   long *plVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   int iVar15;
   ulong uVar16;
   ulong uVar17;
   int iVar18;
   long lVar19;
   ShapeResult *pSVar20;
   uint uVar21;
   ulong *puVar22;
   long lVar23;
   long lVar24;
   uint uVar25;
   ulong uVar26;
   int iVar27;
   long in_FS_OFFSET;
   bool bVar28;
   float fVar29;
   float fVar30;
   int local_e8;
   undefined8 local_88;
   float local_80;
   float local_78;
   float fStack_74;
   undefined8 local_70;
   float local_68;
   float fStack_64;
   float local_60;
   float local_5c;
   float local_58;
   undefined8 local_54;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar23 = *(long*)( this + 0x178 );
   if (*(char*)( lVar23 + 0x60f4 ) == '\0') {
      iVar15 = ( **(code**)( **(long**)( lVar23 + 0x38 ) + 0x38 ) )(*(long**)( lVar23 + 0x38 ), param_1, lVar23 + 0xe8, 0x800);
      if (( 0 < iVar15 ) && ( 0 < param_3 )) {
         local_e8 = 0;
         iVar27 = 0;
         do {
            PVar2 = param_1[0x3d];
            lVar23 = *(long*)( *(long*)( this + 0x178 ) + 0xe8 + (long)iVar27 * 8 );
            if (( ( *(uint*)( param_1 + 0x38 ) & *(uint*)( lVar23 + 0x20 ) ) != 0 ) && ( ( ( ( iVar18 = *(int*)( lVar23 + 8 ) ),iVar18 != 0 && ( PVar2 = param_1[0x3c] ),iVar18 != 1 ) ) && ( iVar18 != 2 ) ) || ( PVar2 != (PointParameters)0x0 )) {
               if (( *(long*)( param_1 + 0x10 ) != 0 ) && ( *(int*)( param_1 + 0x34 ) != 0 )) {
                  uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x30 ) * 4 ));
                  lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x30 ) * 8 );
                  uVar16 = *(long*)( lVar23 + 0x10 ) * 0x3ffff - 1;
                  uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
                  uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
                  uVar16 = uVar16 >> 0x16 ^ uVar16;
                  uVar26 = uVar16 & 0xffffffff;
                  if ((int)uVar16 == 0) {
                     uVar26 = 1;
                  }

                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar26 * lVar3;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar17;
                  lVar19 = SUB168(auVar5 * auVar9, 8);
                  uVar21 = *(uint*)( *(long*)( param_1 + 0x28 ) + lVar19 * 4 );
                  iVar18 = SUB164(auVar5 * auVar9, 8);
                  if (uVar21 != 0) {
                     uVar25 = 0;
                     do {
                        if (( (uint)uVar26 == uVar21 ) && ( *(long*)( lVar23 + 0x10 ) == *(long*)( *(long*)( param_1 + 0x10 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x18 ) + lVar19 * 4 ) * 8 ) )) goto LAB_00100f68;
                        uVar25 = uVar25 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = ( ulong )(iVar18 + 1) * lVar3;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar17;
                        lVar19 = SUB168(auVar6 * auVar10, 8);
                        uVar21 = *(uint*)( *(long*)( param_1 + 0x28 ) + lVar19 * 4 );
                        iVar18 = SUB164(auVar6 * auVar10, 8);
                     }
 while ( ( uVar21 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar21 * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar17,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x30 ) * 4 ) + iVar18 ) - SUB164(auVar7 * auVar11, 8)) * lVar3,auVar12._8_8_ = 0,auVar12._0_8_ = uVar17,uVar25 <= SUB164(auVar8 * auVar12, 8) );
                  }

               }

               iVar18 = *(int*)( *(long*)( this + 0x178 ) + 0x40e8 + (long)iVar27 * 4 );
               lVar19 = (long)iVar18;
               lVar3 = *(long*)( lVar23 + 0x38 );
               if (iVar18 < 0) {
                  if (lVar3 != 0) {
                     LAB_001011ea:lVar23 = *(long*)( lVar3 + -8 );
                     goto LAB_001011ee;
                  }

               }
 else if (lVar3 != 0) {
                  if (*(long*)( lVar3 + -8 ) <= lVar19) goto LAB_001011ea;
                  Transform3D::operator *((Transform3D*)&local_78, (Transform3D*)( lVar23 + 0x48 ));
                  Transform3D::affine_invert();
                  lVar3 = *(long*)( lVar23 + 0x38 );
                  if (lVar3 == 0) {
                     lVar24 = 0;
                     LAB_00101263:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar19, lVar24, "p_index", "shapes.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar13 = (code*)invalidInstructionException();
                     ( *pcVar13 )();
                  }

                  lVar24 = *(long*)( lVar3 + -8 );
                  if (lVar24 <= lVar19) goto LAB_00101263;
                  fVar1 = *(float*)( param_1 + 8 );
                  fVar29 = (float)*(undefined8*)param_1;
                  fVar30 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
                  plVar4 = *(long**)( lVar3 + 0x80 + lVar19 * 0x90 );
                  local_80 = local_60 * fVar29 + local_5c * fVar30 + local_58 * fVar1 + local_4c;
                  local_88 = CONCAT44(fVar29 * (float)( (ulong)local_70 >> 0x20 ) + local_68 * fVar30 + fStack_64 * fVar1 + (float)( (ulong)local_54 >> 0x20 ), fVar29 * local_78 + fStack_74 * fVar30 + (float)local_70 * fVar1 + (float)local_54);
                  cVar14 = ( **(code**)( *plVar4 + 0x40 ) )(plVar4, &local_88);
                  if (cVar14 != '\0') {
                     uVar16 = *(ulong*)( lVar23 + 0x18 );
                     pSVar20 = param_2 + (long)local_e8 * 0x20;
                     uVar17 = 0;
                     *(ulong*)( pSVar20 + 8 ) = uVar16;
                     if (uVar16 != 0) {
                        uVar21 = (uint)uVar16 & 0xffffff;
                        if (uVar21 < (uint)ObjectDB::slot_max) {
                           while (true) {
                              LOCK();
                              bVar28 = (char)ObjectDB::spin_lock == '\0';
                              if (bVar28) {
                                 ObjectDB::spin_lock._0_1_ = '\x01';
                              }

                              UNLOCK();
                              if (bVar28) break;
                              do {} while ( (char)ObjectDB::spin_lock != '\0' );
                           }
;
                           puVar22 = (ulong*)( (ulong)uVar21 * 0x10 + ObjectDB::object_slots );
                           if (( uVar16 >> 0x18 & 0x7fffffffff ) == ( *puVar22 & 0x7fffffffff )) {
                              uVar17 = puVar22[1];
                              ObjectDB::spin_lock._0_1_ = '\0';
                           }
 else {
                              uVar17 = 0;
                              ObjectDB::spin_lock._0_1_ = '\0';
                           }

                        }
 else {
                           _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                           uVar17 = 0;
                        }

                     }

                     *(ulong*)( pSVar20 + 0x10 ) = uVar17;
                     local_e8 = local_e8 + 1;
                     *(undefined8*)pSVar20 = *(undefined8*)( lVar23 + 0x10 );
                     *(int*)( pSVar20 + 0x18 ) = iVar18;
                  }

                  goto LAB_00100f68;
               }

               lVar23 = 0;
               LAB_001011ee:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar19, lVar23, "p_index", "shapes.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar13 = (code*)invalidInstructionException();
               ( *pcVar13 )();
            }

            LAB_00100f68:iVar27 = iVar27 + 1;
         }
 while ( ( iVar15 != iVar27 ) && ( local_e8 < param_3 ) );
         goto LAB_00100f81;
      }

   }
 else {
      _err_print_error("intersect_point", "modules/godot_physics_3d/godot_space_3d.cpp", 0x40, "Condition \"space->locked\" is true. Returning: false", 0, 0);
   }

   local_e8 = 0;
   LAB_00100f81:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_e8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsDirectSpaceState3D::rest_info(PhysicsDirectSpaceState3D::ShapeParameters const&,
   PhysicsDirectSpaceState3D::ShapeRestInfo*) */undefined8 GodotPhysicsDirectSpaceState3D::rest_info(GodotPhysicsDirectSpaceState3D *this, ShapeParameters *param_1, ShapeRestInfo *param_2) {
   GodotShape3D *pGVar1;
   long *plVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   float fVar12;
   int iVar13;
   long lVar14;
   ulong uVar15;
   undefined8 uVar16;
   ShapeParameters *pSVar17;
   int iVar18;
   undefined8 *puVar19;
   long lVar20;
   long lVar21;
   uint uVar22;
   ulong uVar23;
   uint uVar24;
   ulong uVar25;
   int iVar26;
   long in_FS_OFFSET;
   float fVar27;
   float fVar28;
   double dVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 local_108;
   float local_100;
   float local_f8[4];
   undefined8 local_e8;
   float fStack_e0;
   float fStack_dc;
   float fStack_d8;
   float local_d4;
   float local_c8[12];
   long local_98;
   undefined8 local_90;
   float local_88;
   long local_80;
   undefined8 local_78;
   float local_70;
   float fStack_6c;
   float local_68;
   undefined8 local_64;
   undefined4 local_5c;
   float local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) {
      LAB_00101a10:_err_print_error("rest_info", "modules/godot_physics_3d/godot_space_3d.cpp", 0x204, "Parameter \"shape\" is null.", 0, 0);
   }
 else {
      uVar15 = *(ulong*)param_1;
      if (*(uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d4 ) <= (uint)uVar15) goto LAB_00101a10;
      puVar19 = (undefined8*)( ( ( uVar15 & 0xffffffff ) % ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( GodotPhysicsServer3D::godot_singleton + 0x1c0 ) + ( ( uVar15 & 0xffffffff ) / ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 8 ) );
      iVar13 = *(int*)( puVar19 + 1 );
      if (iVar13 != (int)( uVar15 >> 0x20 )) {
         if (iVar13 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00101a10;
      }

      pGVar1 = (GodotShape3D*)*puVar19;
      if (pGVar1 == (GodotShape3D*)0x0) goto LAB_00101a10;
      dVar29 = (double)*(float*)( param_1 + 0x44 );
      fVar31 = *(float*)( param_1 + 0x44 );
      if (dVar29 <= __LC29) {
         dVar29 = (double)_LC26;
         fVar31 = _LC26;
      }

      lVar20 = 0;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      local_98 = *(long*)( pGVar1 + 0x10 );
      local_f8[2] = 0.0;
      local_90 = CONCAT44(local_90._4_4_, *(undefined4*)( pGVar1 + 0x18 ));
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      local_100 = *(float*)( pGVar1 + 0x18 ) + *(float*)( pGVar1 + 0x24 );
      local_108 = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar1 + 0x1c ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( pGVar1 + 0x10 ) >> 0x20 ), (float)*(undefined8*)( pGVar1 + 0x1c ) + (float)*(undefined8*)( pGVar1 + 0x10 ));
      pSVar17 = param_1;
      do {
         fVar32 = *(float*)( param_1 + lVar20 + 0x2c );
         lVar14 = 0;
         fVar30 = fVar32;
         do {
            fVar28 = *(float*)( (long)&local_98 + lVar14 ) * *(float*)( pSVar17 + lVar14 + 8 );
            fVar27 = *(float*)( pSVar17 + lVar14 + 8 ) * *(float*)( (long)&local_108 + lVar14 );
            fVar12 = fVar28;
            if (fVar28 < fVar27) {
               fVar12 = fVar27;
               fVar27 = fVar28;
            }

            fVar30 = fVar30 + fVar27;
            fVar32 = fVar32 + fVar12;
            lVar14 = lVar14 + 4;
         }
 while ( lVar14 != 0xc );
         *(float*)( (Transform3D*)local_c8 + lVar20 ) = fVar32;
         pSVar17 = pSVar17 + 0xc;
         *(float*)( (long)local_f8 + lVar20 ) = fVar30;
         lVar20 = lVar20 + 4;
      }
 while ( lVar20 != 0xc );
      local_e8 = CONCAT44(local_f8[1], local_f8[0]);
      iVar26 = 0;
      local_d4 = local_c8[2] - local_f8[2];
      fStack_dc = local_c8[0] - local_f8[0];
      fStack_d8 = local_c8[1] - local_f8[1];
      fStack_e0 = local_f8[2];
      AABB::grow(fVar31);
      fStack_d8 = (float)local_118;
      local_d4 = (float)( (ulong)local_118 >> 0x20 );
      fStack_e0 = (float)uStack_120;
      fStack_dc = (float)( (ulong)uStack_120 >> 0x20 );
      plVar2 = *(long**)( *(long*)( this + 0x178 ) + 0x38 );
      iVar13 = ( **(code**)( *plVar2 + 0x48 ) )(plVar2, &local_e8, *(long*)( this + 0x178 ) + 0xe8, 0x800);
      local_98 = 0;
      local_90 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0.0;
      fStack_6c = 0.0;
      local_68 = 0.0;
      local_64 = 0;
      local_5c = 0;
      local_58 = 0.0;
      local_50 = 0;
      local_48 = 0;
      local_88 = SQRT(*(float*)( param_1 + 0x38 ) * *(float*)( param_1 + 0x38 ) + *(float*)( param_1 + 0x3c ) * *(float*)( param_1 + 0x3c ) + *(float*)( param_1 + 0x40 ) * *(float*)( param_1 + 0x40 ));
      if ((float)( dVar29 * __LC30 ) <= local_88) {
         local_88 = (float)( dVar29 * __LC30 );
      }

      if (0 < iVar13) {
         do {
            while (true) {
               lVar20 = *(long*)( *(long*)( this + 0x178 ) + 0xe8 + (long)iVar26 * 8 );
               if (( *(uint*)( param_1 + 0x70 ) & *(uint*)( lVar20 + 0x20 ) ) != 0) break;
               LAB_001017e0:iVar26 = iVar26 + 1;
               if (iVar13 == iVar26) goto LAB_001017ef;
            }
;
            iVar18 = *(int*)( lVar20 + 8 );
            if (iVar18 != 0) {
               if (( ( iVar18 != 1 ) && ( iVar18 != 2 ) ) || ( param_1[0x74] != (ShapeParameters)0x0 )) goto LAB_0010169e;
               goto LAB_001017e0;
            }

            if (param_1[0x75] == (ShapeParameters)0x0) goto LAB_001017e0;
            LAB_0010169e:if (( *(long*)( param_1 + 0x48 ) != 0 ) && ( *(int*)( param_1 + 0x6c ) != 0 )) {
               uVar23 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ));
               lVar14 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x68 ) * 8 );
               uVar15 = *(long*)( lVar20 + 0x10 ) * 0x3ffff - 1;
               uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
               uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
               uVar15 = uVar15 >> 0x16 ^ uVar15;
               uVar25 = uVar15 & 0xffffffff;
               if ((int)uVar15 == 0) {
                  uVar25 = 1;
               }

               auVar3._8_8_ = 0;
               auVar3._0_8_ = uVar25 * lVar14;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = uVar23;
               lVar21 = SUB168(auVar3 * auVar7, 8);
               uVar22 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar21 * 4 );
               iVar18 = SUB164(auVar3 * auVar7, 8);
               if (uVar22 != 0) {
                  uVar24 = 0;
                  do {
                     if (( uVar22 == (uint)uVar25 ) && ( *(long*)( lVar20 + 0x10 ) == *(long*)( *(long*)( param_1 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x50 ) + lVar21 * 4 ) * 8 ) )) goto LAB_001017e0;
                     uVar24 = uVar24 + 1;
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = ( ulong )(iVar18 + 1) * lVar14;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = uVar23;
                     lVar21 = SUB168(auVar4 * auVar8, 8);
                     uVar22 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar21 * 4 );
                     iVar18 = SUB164(auVar4 * auVar8, 8);
                  }
 while ( ( uVar22 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar22 * lVar14,auVar9._8_8_ = 0,auVar9._0_8_ = uVar23,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ) + iVar18 ) - SUB164(auVar5 * auVar9, 8)) * lVar14,auVar10._8_8_ = 0,auVar10._0_8_ = uVar23,uVar24 <= SUB164(auVar6 * auVar10, 8) );
               }

            }

            lVar14 = *(long*)( lVar20 + 0x38 );
            iVar18 = *(int*)( *(long*)( this + 0x178 ) + 0x40e8 + (long)iVar26 * 4 );
            lVar21 = (long)iVar18;
            local_90 = CONCAT44(iVar18, (undefined4)local_90);
            local_98 = lVar20;
            if (iVar18 < 0) {
               if (lVar14 != 0) {
                  LAB_001019b1:lVar20 = *(long*)( lVar14 + -8 );
                  goto LAB_001019b5;
               }

               LAB_00101a60:lVar20 = 0;
               LAB_001019b5:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar21, lVar20, "p_index", "shapes.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar11 = (code*)invalidInstructionException();
               ( *pcVar11 )();
            }

            if (lVar14 == 0) goto LAB_00101a60;
            if (*(long*)( lVar14 + -8 ) <= lVar21) goto LAB_001019b1;
            Transform3D::operator *((Transform3D*)local_c8, (Transform3D*)( lVar20 + 0x48 ));
            lVar20 = *(long*)( lVar20 + 0x38 );
            if (lVar20 == 0) {
               lVar14 = 0;
               LAB_00101a6b:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar21, lVar14, "p_index", "shapes.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar11 = (code*)invalidInstructionException();
               ( *pcVar11 )();
            }

            lVar14 = *(long*)( lVar20 + -8 );
            if (lVar14 <= lVar21) goto LAB_00101a6b;
            iVar26 = iVar26 + 1;
            GodotCollisionSolver3D::solve_static(pGVar1, (Transform3D*)( param_1 + 8 ), *(GodotShape3D**)( lVar20 + 0x80 + lVar21 * 0x90 ), (Transform3D*)local_c8, _rest_cbk_result, &local_98, (Vector3*)0x0, fVar31, 0.0);
         }
 while ( iVar13 != iVar26 );
         LAB_001017ef:if (( local_58 != 0.0 ) && ( local_80 != 0 )) {
            iVar13 = *(int*)( local_80 + 8 );
            *(undefined8*)( param_2 + 0x20 ) = *(undefined8*)( local_80 + 0x18 );
            *(undefined4*)( param_2 + 0x28 ) = local_78._4_4_;
            *(undefined8*)( param_2 + 0xc ) = local_64;
            *(undefined4*)( param_2 + 0x14 ) = local_5c;
            *(ulong*)param_2 = CONCAT44(fStack_6c, local_70);
            *(float*)( param_2 + 8 ) = local_68;
            *(undefined8*)( param_2 + 0x18 ) = *(undefined8*)( local_80 + 0x10 );
            if (iVar13 == 1) {
               local_c8[0] = (float)*(undefined8*)( local_80 + 0x1f8 );
               local_c8[1] = (float)( ( ulong ) * (undefined8*)( local_80 + 0x1f8 ) >> 0x20 );
               local_c8[2] = *(float*)( local_80 + 0x200 );
               uVar16 = *(undefined8*)( local_80 + 0x70 );
               local_f8[0] = (float)*(undefined8*)( local_80 + 0xe4 );
               local_f8[1] = (float)( ( ulong ) * (undefined8*)( local_80 + 0xe4 ) >> 0x20 );
               local_f8[2] = *(float*)( local_80 + 0xec );
               fVar32 = fStack_6c - ( local_c8[1] + (float)uVar16 );
               fVar31 = *(float*)( local_80 + 0x74 );
               fVar30 = local_70 - ( local_c8[0] + *(float*)( local_80 + 0x6c ) );
               local_108 = *(undefined8*)( local_80 + 0xd8 );
               local_100 = *(float*)( local_80 + 0xe0 );
               *(float*)( param_2 + 0x34 ) = ( fVar32 * local_f8[0] - local_f8[1] * fVar30 ) + local_100;
               *(ulong*)( param_2 + 0x2c ) = CONCAT44(( local_f8[2] * fVar30 - local_f8[0] * ( local_68 - ( local_c8[2] + (float)( (ulong)uVar16 >> 0x20 ) ) ) ) + (float)( (ulong)local_108 >> 0x20 ), ( local_f8[1] * ( local_68 - ( local_c8[2] + fVar31 ) ) - local_f8[2] * fVar32 ) + (float)local_108);
            }
 else {
               *(undefined8*)( param_2 + 0x2c ) = 0;
               *(undefined4*)( param_2 + 0x34 ) = 0;
            }

            uVar16 = 1;
            goto LAB_00101a37;
         }

      }

   }

   uVar16 = 0;
   LAB_00101a37:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar16;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsDirectSpaceState3D::collide_shape(PhysicsDirectSpaceState3D::ShapeParameters const&,
   Vector3*, int, int&) */char GodotPhysicsDirectSpaceState3D::collide_shape(GodotPhysicsDirectSpaceState3D *this, ShapeParameters *param_1, Vector3 *param_2, int param_3, int *param_4) {
   ShapeParameters SVar1;
   GodotShape3D *pGVar2;
   long *plVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   code *pcVar12;
   float fVar13;
   char cVar14;
   int iVar15;
   long lVar16;
   ulong uVar17;
   ShapeParameters *pSVar18;
   int iVar19;
   undefined8 *puVar20;
   long lVar21;
   long lVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   int iVar27;
   long in_FS_OFFSET;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   char local_125;
   undefined8 uStack_f0;
   undefined8 local_e8;
   int local_d8;
   int local_d4;
   Vector3 *local_d0;
   undefined8 local_c8;
   float local_c0;
   undefined8 local_b8;
   float local_b0;
   float local_a8[4];
   undefined8 local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float local_84;
   undefined8 local_78;
   undefined4 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < param_3) {
      if (*(long*)param_1 != 0) {
         uVar17 = *(ulong*)param_1;
         if ((uint)uVar17 < *(uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d4 )) {
            puVar20 = (undefined8*)( ( ( uVar17 & 0xffffffff ) % ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( GodotPhysicsServer3D::godot_singleton + 0x1c0 ) + ( ( uVar17 & 0xffffffff ) / ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 8 ) );
            iVar15 = *(int*)( puVar20 + 1 );
            if (iVar15 == (int)( uVar17 >> 0x20 )) {
               pGVar2 = (GodotShape3D*)*puVar20;
               if (pGVar2 != (GodotShape3D*)0x0) {
                  lVar21 = 0;
                  local_b8 = 0;
                  local_b0 = 0.0;
                  local_78 = *(undefined8*)( pGVar2 + 0x10 );
                  local_a8[0] = 0.0;
                  local_a8[1] = 0.0;
                  local_70 = *(undefined4*)( pGVar2 + 0x18 );
                  local_a8[2] = 0.0;
                  local_c0 = *(float*)( pGVar2 + 0x18 ) + *(float*)( pGVar2 + 0x24 );
                  local_c8 = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar2 + 0x1c ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( pGVar2 + 0x10 ) >> 0x20 ), (float)*(undefined8*)( pGVar2 + 0x1c ) + (float)*(undefined8*)( pGVar2 + 0x10 ));
                  pSVar18 = param_1;
                  do {
                     fVar31 = *(float*)( param_1 + lVar21 + 0x2c );
                     lVar16 = 0;
                     fVar30 = fVar31;
                     do {
                        fVar29 = *(float*)( (Transform3D*)&local_78 + lVar16 ) * *(float*)( pSVar18 + lVar16 + 8 );
                        fVar28 = *(float*)( pSVar18 + lVar16 + 8 ) * *(float*)( (long)&local_c8 + lVar16 );
                        fVar13 = fVar29;
                        if (fVar29 < fVar28) {
                           fVar13 = fVar28;
                           fVar28 = fVar29;
                        }

                        fVar30 = fVar30 + fVar28;
                        fVar31 = fVar31 + fVar13;
                        lVar16 = lVar16 + 4;
                     }
 while ( lVar16 != 0xc );
                     *(float*)( (long)local_a8 + lVar21 ) = fVar31;
                     pSVar18 = pSVar18 + 0xc;
                     *(float*)( (long)&local_b8 + lVar21 ) = fVar30;
                     lVar21 = lVar21 + 4;
                  }
 while ( lVar21 != 0xc );
                  local_84 = local_a8[2] - local_b0;
                  local_98 = local_b8;
                  fStack_8c = (float)local_a8._0_8_ - (float)local_b8;
                  fStack_88 = SUB84(local_a8._0_8_, 4) - (float)( (ulong)local_b8 >> 0x20 );
                  fStack_90 = local_b0;
                  AABB::grow(*(float*)( param_1 + 0x44 ));
                  fStack_88 = (float)local_e8;
                  local_84 = (float)( (ulong)local_e8 >> 0x20 );
                  fStack_90 = (float)uStack_f0;
                  fStack_8c = (float)( (ulong)uStack_f0 >> 0x20 );
                  plVar3 = *(long**)( *(long*)( this + 0x178 ) + 0x38 );
                  iVar15 = ( **(code**)( *plVar3 + 0x48 ) )(plVar3, &local_98, *(long*)( this + 0x178 ) + 0xe8, 0x800);
                  *param_4 = 0;
                  local_d4 = 0;
                  local_d8 = param_3;
                  local_d0 = param_2;
                  if (iVar15 < 1) {
                     local_125 = '\0';
                  }
 else {
                     local_125 = '\0';
                     iVar27 = 0;
                     do {
                        SVar1 = param_1[0x75];
                        lVar21 = *(long*)( *(long*)( this + 0x178 ) + 0xe8 + (long)iVar27 * 8 );
                        if (( ( *(uint*)( param_1 + 0x70 ) & *(uint*)( lVar21 + 0x20 ) ) != 0 ) && ( ( ( ( iVar19 = *(int*)( lVar21 + 8 ) ),iVar19 != 0 && ( SVar1 = param_1[0x74] ),iVar19 != 1 ) ) && ( iVar19 != 2 ) ) || ( SVar1 != (ShapeParameters)0x0 )) {
                           if (( *(long*)( param_1 + 0x48 ) != 0 ) && ( *(int*)( param_1 + 0x6c ) != 0 )) {
                              uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ));
                              lVar16 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x68 ) * 8 );
                              uVar17 = *(long*)( lVar21 + 0x10 ) * 0x3ffff - 1;
                              uVar17 = ( uVar17 ^ uVar17 >> 0x1f ) * 0x15;
                              uVar17 = ( uVar17 ^ uVar17 >> 0xb ) * 0x41;
                              uVar17 = uVar17 >> 0x16 ^ uVar17;
                              uVar26 = uVar17 & 0xffffffff;
                              if ((int)uVar17 == 0) {
                                 uVar26 = 1;
                              }

                              auVar4._8_8_ = 0;
                              auVar4._0_8_ = uVar26 * lVar16;
                              auVar8._8_8_ = 0;
                              auVar8._0_8_ = uVar24;
                              lVar22 = SUB168(auVar4 * auVar8, 8);
                              uVar23 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar22 * 4 );
                              iVar19 = SUB164(auVar4 * auVar8, 8);
                              if (uVar23 != 0) {
                                 uVar25 = 0;
                                 do {
                                    if (( uVar23 == (uint)uVar26 ) && ( *(long*)( lVar21 + 0x10 ) == *(long*)( *(long*)( param_1 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x50 ) + lVar22 * 4 ) * 8 ) )) goto LAB_00102030;
                                    uVar25 = uVar25 + 1;
                                    auVar5._8_8_ = 0;
                                    auVar5._0_8_ = ( ulong )(iVar19 + 1) * lVar16;
                                    auVar9._8_8_ = 0;
                                    auVar9._0_8_ = uVar24;
                                    lVar22 = SUB168(auVar5 * auVar9, 8);
                                    uVar23 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar22 * 4 );
                                    iVar19 = SUB164(auVar5 * auVar9, 8);
                                 }
 while ( ( uVar23 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar23 * lVar16,auVar10._8_8_ = 0,auVar10._0_8_ = uVar24,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ) + iVar19 ) - SUB164(auVar6 * auVar10, 8)) * lVar16,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,uVar25 <= SUB164(auVar7 * auVar11, 8) );
                              }

                           }

                           fVar31 = *(float*)( param_1 + 0x44 );
                           lVar16 = *(long*)( lVar21 + 0x38 );
                           iVar19 = *(int*)( *(long*)( this + 0x178 ) + 0x40e8 + (long)iVar27 * 4 );
                           lVar22 = (long)iVar19;
                           if (iVar19 < 0) {
                              if (lVar16 != 0) {
                                 LAB_00102181:lVar21 = *(long*)( lVar16 + -8 );
                                 goto LAB_00102185;
                              }

                           }
 else if (lVar16 != 0) {
                              if (*(long*)( lVar16 + -8 ) <= lVar22) goto LAB_00102181;
                              Transform3D::operator *((Transform3D*)&local_78, (Transform3D*)( lVar21 + 0x48 ));
                              lVar21 = *(long*)( lVar21 + 0x38 );
                              if (lVar21 == 0) {
                                 lVar16 = 0;
                                 LAB_0010224a:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar22, lVar16, "p_index", "shapes.size()", "", false, true);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar12 = (code*)invalidInstructionException();
                                 ( *pcVar12 )();
                              }

                              lVar16 = *(long*)( lVar21 + -8 );
                              if (lVar16 <= lVar22) goto LAB_0010224a;
                              cVar14 = GodotCollisionSolver3D::solve_static(pGVar2, (Transform3D*)( param_1 + 8 ), *(GodotShape3D**)( lVar21 + 0x80 + lVar22 * 0x90 ), (Transform3D*)&local_78, GodotPhysicsServer3D::_shape_col_cbk, &local_d8, (Vector3*)0x0, fVar31, 0.0);
                              if (cVar14 != '\0') {
                                 local_125 = cVar14;
                              }

                              goto LAB_00102030;
                           }

                           lVar21 = 0;
                           LAB_00102185:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar22, lVar21, "p_index", "shapes.size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar12 = (code*)invalidInstructionException();
                           ( *pcVar12 )();
                        }

                        LAB_00102030:iVar27 = iVar27 + 1;
                     }
 while ( iVar15 != iVar27 );
                  }

                  *param_4 = local_d4;
                  goto LAB_0010204e;
               }

            }
 else if (iVar15 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

      _err_print_error("collide_shape", "modules/godot_physics_3d/godot_space_3d.cpp", 0x186, "Parameter \"shape\" is null.", 0, 0);
   }

   local_125 = '\0';
   LAB_0010204e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_125;
}
/* GodotPhysicsDirectSpaceState3D::intersect_shape(PhysicsDirectSpaceState3D::ShapeParameters
   const&, PhysicsDirectSpaceState3D::ShapeResult*, int) */int GodotPhysicsDirectSpaceState3D::intersect_shape(GodotPhysicsDirectSpaceState3D *this, ShapeParameters *param_1, ShapeResult *param_2, int param_3) {
   ShapeParameters SVar1;
   GodotShape3D *pGVar2;
   long *plVar3;
   undefined8 uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   float fVar14;
   char cVar15;
   int iVar16;
   long lVar17;
   ulong uVar18;
   ulong uVar19;
   ShapeParameters *pSVar20;
   int iVar21;
   undefined8 *puVar22;
   long lVar23;
   long lVar24;
   ShapeResult *pSVar25;
   uint uVar26;
   ulong *puVar27;
   long lVar28;
   uint uVar29;
   ulong uVar30;
   int iVar31;
   long in_FS_OFFSET;
   bool bVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   int local_128;
   undefined8 local_c8;
   float local_c0;
   undefined8 local_b8;
   float local_b0;
   float local_a8[4];
   undefined8 local_98;
   float local_90;
   undefined8 local_8c;
   float local_84;
   undefined8 local_78;
   undefined4 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < param_3) {
      if (*(long*)param_1 != 0) {
         uVar18 = *(ulong*)param_1;
         if ((uint)uVar18 < *(uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d4 )) {
            puVar22 = (undefined8*)( ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( GodotPhysicsServer3D::godot_singleton + 0x1c0 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 8 ) );
            iVar16 = *(int*)( puVar22 + 1 );
            if (iVar16 == (int)( uVar18 >> 0x20 )) {
               pGVar2 = (GodotShape3D*)*puVar22;
               if (pGVar2 != (GodotShape3D*)0x0) {
                  lVar23 = 0;
                  local_b8 = 0;
                  local_b0 = 0.0;
                  local_a8[0] = 0.0;
                  local_a8[1] = 0.0;
                  local_78 = *(undefined8*)( pGVar2 + 0x10 );
                  local_a8[2] = 0.0;
                  local_70 = *(undefined4*)( pGVar2 + 0x18 );
                  local_c0 = *(float*)( pGVar2 + 0x18 ) + *(float*)( pGVar2 + 0x24 );
                  local_c8 = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar2 + 0x1c ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( pGVar2 + 0x10 ) >> 0x20 ), (float)*(undefined8*)( pGVar2 + 0x1c ) + (float)*(undefined8*)( pGVar2 + 0x10 ));
                  pSVar20 = param_1;
                  do {
                     fVar36 = *(float*)( param_1 + lVar23 + 0x2c );
                     lVar17 = 0;
                     fVar35 = fVar36;
                     do {
                        fVar34 = *(float*)( (Transform3D*)&local_78 + lVar17 ) * *(float*)( pSVar20 + lVar17 + 8 );
                        fVar33 = *(float*)( pSVar20 + lVar17 + 8 ) * *(float*)( (long)&local_c8 + lVar17 );
                        fVar14 = fVar34;
                        if (fVar34 < fVar33) {
                           fVar14 = fVar33;
                           fVar33 = fVar34;
                        }

                        fVar35 = fVar35 + fVar33;
                        fVar36 = fVar36 + fVar14;
                        lVar17 = lVar17 + 4;
                     }
 while ( lVar17 != 0xc );
                     *(float*)( (long)local_a8 + lVar23 ) = fVar36;
                     pSVar20 = pSVar20 + 0xc;
                     *(float*)( (long)&local_b8 + lVar23 ) = fVar35;
                     lVar23 = lVar23 + 4;
                  }
 while ( lVar23 != 0xc );
                  local_98 = local_b8;
                  local_84 = local_a8[2] - local_b0;
                  local_8c = CONCAT44(SUB84(local_a8._0_8_, 4) - (float)( (ulong)local_b8 >> 0x20 ), (float)local_a8._0_8_ - (float)local_b8);
                  local_90 = local_b0;
                  plVar3 = *(long**)( *(long*)( this + 0x178 ) + 0x38 );
                  iVar16 = ( **(code**)( *plVar3 + 0x48 ) )(plVar3, &local_98, *(long*)( this + 0x178 ) + 0xe8, 0x800);
                  if (0 < iVar16) {
                     local_128 = 0;
                     iVar31 = 0;
                     do {
                        SVar1 = param_1[0x75];
                        lVar23 = *(long*)( *(long*)( this + 0x178 ) + 0xe8 + (long)iVar31 * 8 );
                        if (( ( *(uint*)( param_1 + 0x70 ) & *(uint*)( lVar23 + 0x20 ) ) != 0 ) && ( ( ( ( iVar21 = *(int*)( lVar23 + 8 ) ),iVar21 != 0 && ( SVar1 = param_1[0x74] ),iVar21 != 1 ) ) && ( iVar21 != 2 ) ) || ( SVar1 != (ShapeParameters)0x0 )) {
                           if (( *(long*)( param_1 + 0x48 ) != 0 ) && ( *(int*)( param_1 + 0x6c ) != 0 )) {
                              uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ));
                              lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x68 ) * 8 );
                              uVar18 = *(long*)( lVar23 + 0x10 ) * 0x3ffff - 1;
                              uVar18 = ( uVar18 ^ uVar18 >> 0x1f ) * 0x15;
                              uVar18 = ( uVar18 ^ uVar18 >> 0xb ) * 0x41;
                              uVar18 = uVar18 >> 0x16 ^ uVar18;
                              uVar30 = uVar18 & 0xffffffff;
                              if ((int)uVar18 == 0) {
                                 uVar30 = 1;
                              }

                              auVar5._8_8_ = 0;
                              auVar5._0_8_ = uVar30 * lVar17;
                              auVar9._8_8_ = 0;
                              auVar9._0_8_ = uVar19;
                              lVar24 = SUB168(auVar5 * auVar9, 8);
                              uVar26 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar24 * 4 );
                              iVar21 = SUB164(auVar5 * auVar9, 8);
                              if (uVar26 != 0) {
                                 uVar29 = 0;
                                 do {
                                    if (( uVar26 == (uint)uVar30 ) && ( *(long*)( lVar23 + 0x10 ) == *(long*)( *(long*)( param_1 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x50 ) + lVar24 * 4 ) * 8 ) )) goto LAB_00102660;
                                    uVar29 = uVar29 + 1;
                                    auVar6._8_8_ = 0;
                                    auVar6._0_8_ = ( ulong )(iVar21 + 1) * lVar17;
                                    auVar10._8_8_ = 0;
                                    auVar10._0_8_ = uVar19;
                                    lVar24 = SUB168(auVar6 * auVar10, 8);
                                    uVar26 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar24 * 4 );
                                    iVar21 = SUB164(auVar6 * auVar10, 8);
                                 }
 while ( ( uVar26 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar26 * lVar17,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ) + iVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar17,auVar12._8_8_ = 0,auVar12._0_8_ = uVar19,uVar29 <= SUB164(auVar8 * auVar12, 8) );
                              }

                           }

                           fVar36 = *(float*)( param_1 + 0x44 );
                           iVar21 = *(int*)( *(long*)( this + 0x178 ) + 0x40e8 + (long)iVar31 * 4 );
                           lVar24 = (long)iVar21;
                           lVar17 = *(long*)( lVar23 + 0x38 );
                           if (iVar21 < 0) {
                              if (lVar17 != 0) {
                                 LAB_00102868:lVar23 = *(long*)( lVar17 + -8 );
                                 goto LAB_0010286c;
                              }

                           }
 else if (lVar17 != 0) {
                              if (*(long*)( lVar17 + -8 ) <= lVar24) goto LAB_00102868;
                              Transform3D::operator *((Transform3D*)&local_78, (Transform3D*)( lVar23 + 0x48 ));
                              lVar17 = *(long*)( lVar23 + 0x38 );
                              if (lVar17 == 0) {
                                 lVar28 = 0;
                                 LAB_0010292d:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar24, lVar28, "p_index", "shapes.size()", "", false, true);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar13 = (code*)invalidInstructionException();
                                 ( *pcVar13 )();
                              }

                              lVar28 = *(long*)( lVar17 + -8 );
                              if (lVar28 <= lVar24) goto LAB_0010292d;
                              cVar15 = GodotCollisionSolver3D::solve_static(pGVar2, (Transform3D*)( param_1 + 8 ), *(GodotShape3D**)( lVar17 + 0x80 + lVar24 * 0x90 ), (Transform3D*)&local_78, (_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr*)0x0, (void*)0x0, (Vector3*)0x0, fVar36, 0.0);
                              if (cVar15 != '\0') {
                                 if (param_2 != (ShapeResult*)0x0) {
                                    uVar18 = *(ulong*)( lVar23 + 0x18 );
                                    pSVar25 = param_2 + (long)local_128 * 0x20;
                                    uVar19 = 0;
                                    *(ulong*)( pSVar25 + 8 ) = uVar18;
                                    if (uVar18 != 0) {
                                       uVar26 = (uint)uVar18 & 0xffffff;
                                       if (uVar26 < (uint)ObjectDB::slot_max) {
                                          while (true) {
                                             LOCK();
                                             bVar32 = (char)ObjectDB::spin_lock == '\0';
                                             if (bVar32) {
                                                ObjectDB::spin_lock._0_1_ = '\x01';
                                             }

                                             UNLOCK();
                                             if (bVar32) break;
                                             do {} while ( (char)ObjectDB::spin_lock != '\0' );
                                          }
;
                                          puVar27 = (ulong*)( (ulong)uVar26 * 0x10 + ObjectDB::object_slots );
                                          if (( uVar18 >> 0x18 & 0x7fffffffff ) == ( *puVar27 & 0x7fffffffff )) {
                                             uVar19 = puVar27[1];
                                             ObjectDB::spin_lock._0_1_ = '\0';
                                          }
 else {
                                             uVar19 = 0;
                                             ObjectDB::spin_lock._0_1_ = '\0';
                                          }

                                       }
 else {
                                          _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr");
                                          uVar19 = 0;
                                       }

                                    }

                                    *(ulong*)( pSVar25 + 0x10 ) = uVar19;
                                    uVar4 = *(undefined8*)( lVar23 + 0x10 );
                                    *(int*)( pSVar25 + 0x18 ) = iVar21;
                                    *(undefined8*)pSVar25 = uVar4;
                                 }

                                 local_128 = local_128 + 1;
                              }

                              goto LAB_00102660;
                           }

                           lVar23 = 0;
                           LAB_0010286c:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar24, lVar23, "p_index", "shapes.size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar13 = (code*)invalidInstructionException();
                           ( *pcVar13 )();
                        }

                        LAB_00102660:iVar31 = iVar31 + 1;
                     }
 while ( ( iVar31 < iVar16 ) && ( local_128 < param_3 ) );
                     goto LAB_00102679;
                  }

                  goto LAB_00102915;
               }

            }
 else if (iVar16 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

      _err_print_error("intersect_shape", "modules/godot_physics_3d/godot_space_3d.cpp", 0xd8, "Parameter \"shape\" is null.", 0, 0);
   }

   LAB_00102915:local_128 = 0;
   LAB_00102679:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_128;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsDirectSpaceState3D::cast_motion(PhysicsDirectSpaceState3D::ShapeParameters const&,
   float&, float&, PhysicsDirectSpaceState3D::ShapeRestInfo*) */undefined8 GodotPhysicsDirectSpaceState3D::cast_motion(GodotPhysicsDirectSpaceState3D *this, ShapeParameters *param_1, float *param_2, float *param_3, ShapeRestInfo *param_4) {
   Transform3D *pTVar1;
   ShapeParameters SVar2;
   GodotShape3D *pGVar3;
   long *plVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   float fVar14;
   undefined4 uVar15;
   undefined4 uVar16;
   undefined4 uVar17;
   undefined4 uVar18;
   char cVar19;
   char cVar20;
   int iVar21;
   long lVar22;
   ulong uVar23;
   undefined8 uVar24;
   undefined8 uVar25;
   ShapeParameters *pSVar26;
   int iVar27;
   undefined8 *puVar28;
   long lVar29;
   long lVar30;
   int iVar31;
   long lVar32;
   uint uVar33;
   ulong uVar34;
   long lVar35;
   uint uVar36;
   ulong uVar37;
   int iVar38;
   long in_FS_OFFSET;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar45;
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   float fVar52;
   float local_218;
   float local_214;
   float local_210;
   char local_209;
   float local_208;
   float local_204;
   float local_200;
   float local_1fc;
   float local_1f0;
   undefined8 local_1e8[5];
   undefined8 local_1c0;
   float local_1b8;
   undefined8 local_1b0;
   float local_1a8;
   undefined8 local_1a0;
   float local_198;
   undefined8 local_190;
   float local_188;
   float local_180;
   float fStack_17c;
   float local_178;
   float local_170;
   float fStack_16c;
   float local_168;
   float local_160;
   float fStack_15c;
   float local_158;
   undefined8 local_154;
   float local_14c;
   undefined8 local_148;
   float local_140;
   undefined8 local_138;
   float fStack_130;
   float fStack_12c;
   float fStack_128;
   float fStack_124;
   undefined8 local_118;
   float local_110;
   float fStack_10c;
   float local_108;
   float fStack_104;
   float local_100;
   float local_fc;
   float local_f8;
   undefined8 local_e8;
   float local_e0;
   undefined8 local_dc;
   undefined4 local_d4;
   undefined **local_b8;
   float local_b0;
   float fStack_ac;
   float fStack_a8;
   float fStack_a4;
   undefined4 local_a0;
   undefined8 local_9c;
   undefined4 local_94;
   undefined8 local_90;
   undefined1 local_80[16];
   undefined1 local_70[16];
   undefined8 local_60;
   GodotShape3D *local_58;
   undefined8 local_50;
   float local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 != 0) {
      uVar23 = *(ulong*)param_1;
      if ((uint)uVar23 < *(uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d4 )) {
         puVar28 = (undefined8*)( ( ( uVar23 & 0xffffffff ) % ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( GodotPhysicsServer3D::godot_singleton + 0x1c0 ) + ( ( uVar23 & 0xffffffff ) / ( ulong ) * (uint*)( GodotPhysicsServer3D::godot_singleton + 0x1d0 ) ) * 8 ) );
         iVar21 = *(int*)( puVar28 + 1 );
         if (iVar21 == (int)( uVar23 >> 0x20 )) {
            pGVar3 = (GodotShape3D*)*puVar28;
            if (pGVar3 != (GodotShape3D*)0x0) {
               lVar29 = 0;
               local_118 = 0;
               local_b8 = (undefined**)*(undefined8*)( pGVar3 + 0x10 );
               local_110 = 0.0;
               local_b0 = (float)*(undefined4*)( pGVar3 + 0x18 );
               local_e8 = 0;
               local_e0 = 0.0;
               local_140 = *(float*)( pGVar3 + 0x18 ) + *(float*)( pGVar3 + 0x24 );
               local_148 = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar3 + 0x1c ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( pGVar3 + 0x10 ) >> 0x20 ), (float)*(undefined8*)( pGVar3 + 0x1c ) + (float)*(undefined8*)( pGVar3 + 0x10 ));
               pSVar26 = param_1;
               do {
                  fVar46 = *(float*)( param_1 + lVar29 + 0x2c );
                  lVar22 = 0;
                  fVar48 = fVar46;
                  do {
                     fVar41 = *(float*)( (AABB*)&local_b8 + lVar22 ) * *(float*)( pSVar26 + lVar22 + 8 );
                     fVar39 = *(float*)( pSVar26 + lVar22 + 8 ) * *(float*)( (Vector3*)&local_148 + lVar22 );
                     fVar14 = fVar39;
                     if (fVar41 < fVar39) {
                        fVar14 = fVar41;
                        fVar41 = fVar39;
                     }

                     fVar48 = fVar48 + fVar41;
                     fVar46 = fVar46 + fVar14;
                     lVar22 = lVar22 + 4;
                  }
 while ( lVar22 != 0xc );
                  *(float*)( (Transform3D*)&local_e8 + lVar29 ) = fVar48;
                  pSVar26 = pSVar26 + 0xc;
                  *(float*)( (long)&local_118 + lVar29 ) = fVar46;
                  lVar29 = lVar29 + 4;
               }
 while ( lVar29 != 0xc );
               fStack_124 = local_e0 - local_110;
               fStack_130 = local_110;
               local_138 = local_118;
               fStack_12c = (float)local_e8 - (float)local_118;
               fVar46 = (float)( (ulong)local_118 >> 0x20 );
               fStack_128 = (float)( (ulong)local_e8 >> 0x20 ) - fVar46;
               local_b0 = local_110 + *(float*)( param_1 + 0x40 );
               local_b8 = (undefined**)CONCAT44((float)( ( ulong ) * (undefined8*)( param_1 + 0x38 ) >> 0x20 ) + fVar46, (float)*(undefined8*)( param_1 + 0x38 ) + (float)local_118);
               fStack_ac = fStack_12c;
               fStack_a8 = fStack_128;
               fStack_a4 = fStack_124;
               AABB::merge((AABB*)local_1e8);
               local_138 = local_1e8[0];
               fStack_130 = (float)local_1e8[1];
               fStack_12c = (float)( (ulong)local_1e8[1] >> 0x20 );
               fStack_128 = (float)local_1e8[2];
               fStack_124 = (float)( (ulong)local_1e8[2] >> 0x20 );
               AABB::grow(*(float*)( param_1 + 0x44 ));
               fStack_128 = (float)local_1e8[2];
               fStack_124 = (float)( (ulong)local_1e8[2] >> 0x20 );
               local_138 = local_1e8[0];
               fStack_130 = (float)local_1e8[1];
               fStack_12c = (float)( (ulong)local_1e8[1] >> 0x20 );
               plVar4 = *(long**)( *(long*)( this + 0x178 ) + 0x38 );
               iVar21 = ( **(code**)( *plVar4 + 0x48 ) )(plVar4, (AABB*)&local_138, *(long*)( this + 0x178 ) + 0xe8, 0x800);
               pTVar1 = (Transform3D*)( param_1 + 8 );
               Transform3D::affine_inverse();
               fVar41 = local_110;
               local_b8 = &PTR_get_volume_0010b398;
               local_b0 = 0.0;
               fStack_ac = 0.0;
               fStack_a8 = 0.0;
               fStack_a4 = 0.0;
               fVar42 = (float)local_118;
               fVar14 = local_118._4_4_;
               local_80 = (undefined1[16])0x0;
               local_70 = (undefined1[16])0x0;
               local_a0 = 0;
               local_9c = 0;
               local_94 = 0;
               local_90 = 0;
               local_60 = 2;
               local_58 = (GodotShape3D*)0x0;
               local_50 = 0;
               local_48 = 0.0;
               local_e8 = 0;
               local_e0 = 0.0;
               local_dc = 0;
               local_d4 = 0;
               GodotShape3D::configure((AABB*)&local_b8);
               uVar23 = *(ulong*)( param_1 + 0x38 );
               auVar50._8_8_ = 0;
               auVar50._0_8_ = uVar23;
               fVar46 = *(float*)( param_1 + 0x40 );
               fVar39 = (float)( uVar23 >> 0x20 );
               fVar48 = *(float*)( param_1 + 0x38 );
               local_50 = CONCAT44(fVar39 * local_108 + (float)uVar23 * fStack_10c + fVar46 * fStack_104, fVar39 * fVar14 + (float)uVar23 * fVar42 + fVar46 * fVar41);
               local_48 = local_100 * fVar48 + local_fc * fVar39 + local_f8 * fVar46;
               fVar39 = fVar48 * fVar48 + fVar39 * fVar39 + fVar46 * fVar46;
               uVar24 = 0;
               fVar48 = 0.0;
               if (fVar39 != 0.0) {
                  fVar39 = SQRT(fVar39);
                  fVar48 = fVar46 / fVar39;
                  auVar44._4_4_ = fVar39;
                  auVar44._0_4_ = fVar39;
                  auVar44._12_4_ = _UNK_0010b82c;
                  auVar44._8_4_ = _LC34;
                  auVar50 = divps(auVar50, auVar44);
                  uVar24 = auVar50._0_8_;
               }

               local_218 = _LC34;
               local_214 = _LC34;
               local_58 = pGVar3;
               if (0 < iVar21) {
                  iVar38 = 0;
                  local_204 = 0.0;
                  local_210 = 0.0;
                  local_1fc = 0.0;
                  local_208 = 0.0;
                  local_200 = 0.0;
                  local_209 = '\x01';
                  local_1f0 = 0.0;
                  do {
                     SVar2 = param_1[0x75];
                     lVar29 = *(long*)( *(long*)( this + 0x178 ) + 0xe8 + (long)iVar38 * 8 );
                     if (( ( *(uint*)( param_1 + 0x70 ) & *(uint*)( lVar29 + 0x20 ) ) == 0 ) || ( ( ( ( iVar27 = *(int*)( lVar29 + 8 ) ),iVar27 == 0 || ( SVar2 = param_1[0x74] ),iVar27 == 1 ) ) || ( iVar27 == 2 ) ) && ( SVar2 == (ShapeParameters)0x0 )) goto LAB_00103110;
                     if (( *(long*)( param_1 + 0x48 ) != 0 ) && ( *(int*)( param_1 + 0x6c ) != 0 )) {
                        uVar34 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ));
                        lVar22 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x68 ) * 8 );
                        uVar23 = *(long*)( lVar29 + 0x10 ) * 0x3ffff - 1;
                        uVar23 = ( uVar23 ^ uVar23 >> 0x1f ) * 0x15;
                        uVar23 = ( uVar23 ^ uVar23 >> 0xb ) * 0x41;
                        uVar23 = uVar23 >> 0x16 ^ uVar23;
                        uVar37 = uVar23 & 0xffffffff;
                        if ((int)uVar23 == 0) {
                           uVar37 = 1;
                        }

                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = uVar37 * lVar22;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar34;
                        lVar30 = SUB168(auVar5 * auVar9, 8);
                        uVar33 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar30 * 4 );
                        iVar27 = SUB164(auVar5 * auVar9, 8);
                        if (uVar33 != 0) {
                           uVar36 = 0;
                           do {
                              if (( uVar33 == (uint)uVar37 ) && ( *(long*)( lVar29 + 0x10 ) == *(long*)( *(long*)( param_1 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x50 ) + lVar30 * 4 ) * 8 ) )) goto LAB_00103110;
                              uVar36 = uVar36 + 1;
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = ( ulong )(iVar27 + 1) * lVar22;
                              auVar10._8_8_ = 0;
                              auVar10._0_8_ = uVar34;
                              lVar30 = SUB168(auVar6 * auVar10, 8);
                              uVar33 = *(uint*)( *(long*)( param_1 + 0x60 ) + lVar30 * 4 );
                              iVar27 = SUB164(auVar6 * auVar10, 8);
                           }
 while ( ( uVar33 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar33 * lVar22,auVar11._8_8_ = 0,auVar11._0_8_ = uVar34,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ) + iVar27 ) - SUB164(auVar7 * auVar11, 8)) * lVar22,auVar12._8_8_ = 0,auVar12._0_8_ = uVar34,uVar36 <= SUB164(auVar8 * auVar12, 8) );
                        }

                     }

                     local_1c0 = 0;
                     local_1b8 = 0.0;
                     iVar27 = *(int*)( *(long*)( this + 0x178 ) + 0x40e8 + (long)iVar38 * 4 );
                     lVar30 = (long)iVar27;
                     local_1b0 = 0;
                     local_1a8 = 0.0;
                     lVar22 = *(long*)( lVar29 + 0x38 );
                     local_1a0 = uVar24;
                     local_198 = fVar48;
                     if (iVar27 < 0) {
                        if (lVar22 != 0) {
                           LAB_0010385d:lVar29 = *(long*)( lVar22 + -8 );
                           goto LAB_00103861;
                        }

                        LAB_001038cc:lVar29 = 0;
                        LAB_00103861:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar30, lVar29, "p_index", "shapes.size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar13 = (code*)invalidInstructionException();
                        ( *pcVar13 )();
                     }

                     if (lVar22 == 0) goto LAB_001038cc;
                     if (*(long*)( lVar22 + -8 ) <= lVar30) goto LAB_0010385d;
                     lVar32 = lVar30 * 0x90;
                     Transform3D::operator *((Transform3D*)&local_e8, (Transform3D*)( lVar29 + 0x48 ));
                     lVar22 = *(long*)( lVar29 + 0x38 );
                     if (lVar22 == 0) {
                        LAB_00103810:lVar35 = 0;
                        LAB_00103813:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar30, lVar35, "p_index", "shapes.size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar13 = (code*)invalidInstructionException();
                        ( *pcVar13 )();
                     }

                     lVar35 = *(long*)( lVar22 + -8 );
                     if (lVar35 <= lVar30) goto LAB_00103813;
                     cVar19 = GodotCollisionSolver3D::solve_distance((GodotShape3D*)&local_b8, pTVar1, *(GodotShape3D**)( lVar22 + 0x80 + lVar32 ), (Transform3D*)&local_e8, (Vector3*)&local_1c0, (Vector3*)&local_1b0, (AABB*)&local_138, (Vector3*)&local_1a0);
                     if (cVar19 != '\0') goto LAB_00103110;
                     lVar22 = *(long*)( lVar29 + 0x38 );
                     local_1a0 = uVar24;
                     local_198 = fVar48;
                     if (lVar22 == 0) goto LAB_00103810;
                     lVar35 = *(long*)( lVar22 + -8 );
                     if (lVar35 <= lVar30) goto LAB_00103813;
                     cVar19 = GodotCollisionSolver3D::solve_distance(pGVar3, pTVar1, *(GodotShape3D**)( lVar22 + 0x80 + lVar32 ), (Transform3D*)&local_e8, (Vector3*)&local_1c0, (Vector3*)&local_1b0, (AABB*)&local_138, (Vector3*)&local_1a0);
                     if (cVar19 != '\0') {
                        iVar31 = 0;
                        fVar46 = _LC35;
                        fVar39 = _LC34;
                        fVar49 = 0.0;
                        do {
                           while (true) {
                              local_154 = 0;
                              local_14c = 0.0;
                              local_148 = 0;
                              lVar22 = *(long*)( lVar29 + 0x38 );
                              local_140 = 0.0;
                              fVar45 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x38 ) >> 0x20 );
                              fVar40 = fVar46 * ( fVar39 - fVar49 ) + fVar49;
                              fVar52 = *(float*)( param_1 + 0x40 ) * fVar40;
                              fVar46 = fVar45 * fVar40;
                              fVar47 = *(float*)( param_1 + 0x38 ) * fVar40;
                              local_48 = fVar47 * local_100 + fVar46 * local_fc + fVar52 * local_f8;
                              local_50 = CONCAT44(fVar47 * fStack_10c + local_108 * fVar45 * fVar40 + fVar52 * fStack_104, fVar47 * fVar42 + fVar14 * fVar46 + fVar52 * fVar41);
                              local_190 = uVar24;
                              local_188 = fVar48;
                              if (lVar22 == 0) goto LAB_00103810;
                              lVar35 = *(long*)( lVar22 + -8 );
                              if (lVar35 <= lVar30) goto LAB_00103813;
                              cVar20 = GodotCollisionSolver3D::solve_distance((GodotShape3D*)&local_b8, pTVar1, *(GodotShape3D**)( lVar22 + 0x80 + lVar32 ), (Transform3D*)&local_e8, (Vector3*)&local_154, (Vector3*)&local_148, (AABB*)&local_138, (Vector3*)&local_190);
                              fVar46 = _LC35;
                              if (cVar20 != '\0') break;
                              fVar39 = fVar40;
                              if (iVar31 == 0) {
                                 LAB_001037fb:iVar31 = 1;
                              }
 else {
                                 if (fVar49 <= 0.0) {
                                    fVar46 = _LC36;
                                 }

                                 LAB_00103512:fVar40 = fVar49;
                                 iVar31 = iVar31 + 1;
                                 fVar49 = fVar40;
                                 if (iVar31 == 8) goto LAB_0010351e;
                              }

                           }
;
                           local_1c0 = local_154;
                           local_1b8 = local_14c;
                           local_1b0 = local_148;
                           local_1a8 = local_140;
                           fVar49 = fVar40;
                           if (iVar31 == 0) goto LAB_001037fb;
                           if (fVar39 < _LC34) goto LAB_00103512;
                           iVar31 = iVar31 + 1;
                           fVar46 = _LC37;
                        }
 while ( iVar31 != 8 );
                        LAB_0010351e:if (local_218 <= fVar40) {
                           if (( param_4 != (ShapeRestInfo*)0x0 ) && ( ( local_209 != '\0' || ( ( ( (float)local_1b0 - (float)local_1c0 ) * ( (float)local_1b0 - (float)local_1c0 ) + ( local_1b0._4_4_ - local_1c0._4_4_ ) * ( local_1b0._4_4_ - local_1c0._4_4_ ) + ( local_1a8 - local_1b8 ) * ( local_1a8 - local_1b8 ) < ( local_208 - local_1f0 ) * ( local_208 - local_1f0 ) + ( local_1fc - local_200 ) * ( local_1fc - local_200 ) + ( local_210 - local_204 ) * ( local_210 - local_204 ) && ( fVar40 <= local_218 ) ) ) ) )) goto LAB_00103558;
                        }
 else {
                           local_218 = fVar40;
                           local_214 = fVar39;
                           local_209 = cVar19;
                           if (param_4 != (ShapeRestInfo*)0x0) {
                              LAB_00103558:local_1f0 = (float)local_1c0;
                              uVar15 = *(undefined4*)( lVar29 + 0x10 );
                              uVar16 = *(undefined4*)( lVar29 + 0x14 );
                              uVar17 = *(undefined4*)( lVar29 + 0x18 );
                              uVar18 = *(undefined4*)( lVar29 + 0x1c );
                              local_200 = local_1c0._4_4_;
                              local_1fc = local_1b0._4_4_;
                              auVar43._0_4_ = (float)local_1c0 - (float)local_1b0;
                              auVar43._4_4_ = local_1c0._4_4_ - local_1b0._4_4_;
                              auVar43._8_8_ = 0;
                              local_204 = local_1b8;
                              local_210 = local_1a8;
                              *(undefined8*)param_4 = local_1b0;
                              *(int*)( param_4 + 0x28 ) = iVar27;
                              *(undefined4*)( param_4 + 0x18 ) = uVar15;
                              *(undefined4*)( param_4 + 0x1c ) = uVar16;
                              *(undefined4*)( param_4 + 0x20 ) = uVar17;
                              *(undefined4*)( param_4 + 0x24 ) = uVar18;
                              local_208 = (float)local_1b0;
                              fVar49 = local_1b8 - local_1a8;
                              *(float*)( param_4 + 8 ) = local_1a8;
                              fVar46 = auVar43._0_4_ * auVar43._0_4_ + auVar43._4_4_ * auVar43._4_4_ + fVar49 * fVar49;
                              uVar25 = 0;
                              fVar39 = 0.0;
                              if (fVar46 != 0.0) {
                                 fVar46 = SQRT(fVar46);
                                 fVar39 = fVar49 / fVar46;
                                 auVar51._4_4_ = fVar46;
                                 auVar51._0_4_ = fVar46;
                                 auVar51._12_4_ = _UNK_0010b82c;
                                 auVar51._8_4_ = _LC34;
                                 auVar50 = divps(auVar43, auVar51);
                                 uVar25 = auVar50._0_8_;
                              }

                              iVar27 = *(int*)( lVar29 + 8 );
                              local_209 = '\0';
                              *(undefined8*)( param_4 + 0xc ) = uVar25;
                              *(float*)( param_4 + 0x14 ) = fVar39;
                              if (iVar27 == 1) {
                                 uVar25 = *(undefined8*)( lVar29 + 0x70 );
                                 local_160 = (float)*(undefined8*)( lVar29 + 0x1f8 );
                                 fStack_15c = (float)( ( ulong ) * (undefined8*)( lVar29 + 0x1f8 ) >> 0x20 );
                                 local_158 = *(float*)( lVar29 + 0x200 );
                                 local_170 = (float)*(undefined8*)( lVar29 + 0xe4 );
                                 fStack_16c = (float)( ( ulong ) * (undefined8*)( lVar29 + 0xe4 ) >> 0x20 );
                                 local_168 = *(float*)( lVar29 + 0xec );
                                 local_178 = *(float*)( lVar29 + 0xe0 );
                                 fVar49 = local_1b0._4_4_ - ( fStack_15c + (float)uVar25 );
                                 fVar46 = *(float*)( lVar29 + 0x74 );
                                 fVar39 = (float)local_1b0 - ( local_160 + *(float*)( lVar29 + 0x6c ) );
                                 local_180 = *(float*)( lVar29 + 0xd8 );
                                 fStack_17c = *(float*)( lVar29 + 0xdc );
                                 *(float*)( param_4 + 0x34 ) = ( fVar49 * local_170 - fStack_16c * fVar39 ) + local_178;
                                 *(float*)( param_4 + 0x2c ) = ( fStack_16c * ( local_1a8 - ( local_158 + fVar46 ) ) - local_168 * fVar49 ) + local_180;
                                 *(float*)( param_4 + 0x30 ) = ( local_168 * fVar39 - local_170 * ( local_1a8 - ( local_158 + (float)( (ulong)uVar25 >> 0x20 ) ) ) ) + fStack_17c;
                              }

                           }

                        }

                     }

                     LAB_00103110:iVar38 = iVar38 + 1;
                  }
 while ( iVar21 != iVar38 );
               }

               *param_2 = local_218;
               *param_3 = local_214;
               local_b8 = &PTR_get_volume_0010b398;
               GodotShape3D::~GodotShape3D((GodotShape3D*)&local_b8);
               uVar24 = 1;
               goto LAB_00103169;
            }

         }
 else if (iVar21 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("cast_motion", "modules/godot_physics_3d/godot_space_3d.cpp", 0x10b, "Parameter \"shape\" is null.", 0, 0);
   uVar24 = 0;
   LAB_00103169:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsDirectSpaceState3D::intersect_ray(PhysicsDirectSpaceState3D::RayParameters const&,
   PhysicsDirectSpaceState3D::RayResult&) */undefined8 GodotPhysicsDirectSpaceState3D::intersect_ray(GodotPhysicsDirectSpaceState3D *this, RayParameters *param_1, RayResult *param_2) {
   undefined8 uVar1;
   long *plVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   code *pcVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   char cVar15;
   int iVar16;
   ulong uVar17;
   undefined8 uVar18;
   int iVar19;
   long lVar20;
   ulong uVar21;
   uint uVar22;
   ulong *puVar23;
   ulong uVar24;
   long lVar25;
   long lVar26;
   long lVar27;
   uint uVar28;
   int iVar29;
   long in_FS_OFFSET;
   bool bVar30;
   float fVar31;
   float fVar32;
   float fVar35;
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar36[16];
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   uint local_148;
   float local_144;
   char local_13d;
   float local_13c;
   float local_138;
   float local_134;
   undefined8 local_130;
   float local_128;
   int local_124;
   long local_120;
   uint local_114;
   undefined8 local_110;
   float local_108;
   undefined8 local_100;
   float local_f8;
   undefined8 local_f0;
   float local_e8;
   undefined8 local_e0;
   float local_d8;
   undefined8 local_d0;
   float local_c8;
   undefined8 local_c0;
   float local_b8;
   undefined8 local_b4;
   float local_ac;
   float local_a8;
   float fStack_a4;
   float local_a0;
   float fStack_9c;
   float local_98;
   float fStack_94;
   undefined8 local_90;
   float local_88;
   undefined8 local_84;
   float local_7c;
   float local_78;
   float fStack_74;
   undefined8 local_70;
   float local_68;
   float fStack_64;
   float local_60;
   float local_5c;
   float local_58;
   undefined8 local_54;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar25 = *(long*)( this + 0x178 );
   if (*(char*)( lVar25 + 0x60f4 ) == '\0') {
      uVar18 = *(undefined8*)param_1;
      local_108 = *(float*)( param_1 + 8 );
      uVar1 = *(undefined8*)( param_1 + 0xc );
      local_f8 = *(float*)( param_1 + 0x14 );
      local_100._4_4_ = (float)( (ulong)uVar1 >> 0x20 );
      local_100._0_4_ = (float)uVar1;
      local_110._4_4_ = (float)( (ulong)uVar18 >> 0x20 );
      local_100._4_4_ = local_100._4_4_ - local_110._4_4_;
      local_110._0_4_ = (float)uVar18;
      local_100._0_4_ = (float)local_100 - (float)local_110;
      local_134 = local_f8 - local_108;
      fVar31 = local_100._4_4_ * local_100._4_4_ + (float)local_100 * (float)local_100 + local_134 * local_134;
      if (fVar31 == 0.0) {
         local_134 = 0.0;
         local_138 = 0.0;
         local_13c = 0.0;
      }
 else {
         fVar31 = SQRT(fVar31);
         local_13c = (float)local_100 / fVar31;
         local_138 = local_100._4_4_ / fVar31;
         local_134 = local_134 / fVar31;
      }

      local_110 = uVar18;
      local_100 = uVar1;
      iVar16 = ( **(code**)( **(long**)( lVar25 + 0x38 ) + 0x40 ) )(*(long**)( lVar25 + 0x38 ), &local_110, &local_100, lVar25 + 0xe8, 0x800, lVar25 + 0x40e8);
      local_b4 = 0;
      local_ac = 0.0;
      if (0 < iVar16) {
         local_120 = 0;
         iVar29 = 0;
         local_124 = -1;
         local_148 = 0xffffffff;
         local_144 = _LC42;
         local_128 = 0.0;
         local_130 = 0;
         local_13d = '\0';
         do {
            while (true) {
               lVar25 = *(long*)( *(long*)( this + 0x178 ) + 0xe8 + (long)iVar29 * 8 );
               if (( *(uint*)( param_1 + 0x40 ) & *(uint*)( lVar25 + 0x20 ) ) != 0) break;
               joined_r0x00103e0a:iVar29 = iVar29 + 1;
               if (iVar16 == iVar29) goto LAB_00103dc7;
            }
;
            iVar19 = *(int*)( lVar25 + 8 );
            if (iVar19 == 0) {
               if (param_1[0x45] != (RayParameters)0x0) goto LAB_00103c64;
               goto joined_r0x00103e0a;
            }

            if (( ( iVar19 == 1 ) || ( iVar19 == 2 ) ) && ( param_1[0x44] == (RayParameters)0x0 )) goto joined_r0x00103e0a;
            LAB_00103c64:if (( param_1[0x48] != (RayParameters)0x0 ) && ( *(char*)( lVar25 + 0xd0 ) == '\0' )) goto joined_r0x00103e0a;
            if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( *(int*)( param_1 + 0x3c ) != 0 )) {
               uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x38 ) * 4 ));
               lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x38 ) * 8 );
               uVar17 = *(long*)( lVar25 + 0x10 ) * 0x3ffff - 1;
               uVar17 = ( uVar17 ^ uVar17 >> 0x1f ) * 0x15;
               uVar17 = ( uVar17 ^ uVar17 >> 0xb ) * 0x41;
               uVar17 = uVar17 >> 0x16 ^ uVar17;
               uVar21 = 1;
               if ((int)uVar17 != 0) {
                  uVar21 = uVar17 & 0xffffffff;
               }

               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar21 * lVar27;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = uVar24;
               lVar20 = SUB168(auVar34 * auVar6, 8);
               uVar22 = *(uint*)( *(long*)( param_1 + 0x30 ) + lVar20 * 4 );
               iVar19 = SUB164(auVar34 * auVar6, 8);
               if (uVar22 != 0) {
                  uVar28 = 0;
                  do {
                     if (( (uint)uVar21 == uVar22 ) && ( *(long*)( lVar25 + 0x10 ) == *(long*)( *(long*)( param_1 + 0x18 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x20 ) + lVar20 * 4 ) * 8 ) )) goto joined_r0x00103e0a;
                     uVar28 = uVar28 + 1;
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = ( ulong )(iVar19 + 1) * lVar27;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = uVar24;
                     lVar20 = SUB168(auVar3 * auVar7, 8);
                     uVar22 = *(uint*)( *(long*)( param_1 + 0x30 ) + lVar20 * 4 );
                     iVar19 = SUB164(auVar3 * auVar7, 8);
                  }
 while ( ( uVar22 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar22 * lVar27,auVar8._8_8_ = 0,auVar8._0_8_ = uVar24,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x38 ) * 4 ) + iVar19 ) - SUB164(auVar4 * auVar8, 8)) * lVar27,auVar9._8_8_ = 0,auVar9._0_8_ = uVar24,uVar28 <= SUB164(auVar5 * auVar9, 8) );
               }

            }

            iVar19 = *(int*)( *(long*)( this + 0x178 ) + 0x40e8 + (long)iVar29 * 4 );
            lVar20 = (long)iVar19;
            lVar27 = *(long*)( lVar25 + 0x38 );
            if (iVar19 < 0) {
               if (lVar27 != 0) {
                  LAB_00104465:lVar25 = *(long*)( lVar27 + -8 );
                  goto LAB_00104469;
               }

               LAB_001044ca:lVar25 = 0;
               LAB_00104469:_err_print_index_error("get_shape_inv_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x84, lVar20, lVar25, "p_index", "shapes.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            if (lVar27 == 0) goto LAB_001044ca;
            if (*(long*)( lVar27 + -8 ) <= lVar20) goto LAB_00104465;
            Transform3D::operator *((Transform3D*)&local_a8, (Transform3D*)( lVar27 + 0x30 + lVar20 * 0x90 ));
            fVar14 = local_88;
            fVar13 = fStack_94;
            fVar12 = local_98;
            fVar40 = fStack_9c;
            fVar11 = local_a0;
            fVar42 = fStack_a4;
            fVar31 = local_a8;
            fVar35 = (float)local_110;
            fVar38 = (float)( (ulong)local_110 >> 0x20 );
            lVar27 = *(long*)( lVar25 + 0x38 );
            fVar39 = (float)local_90;
            fVar41 = (float)( (ulong)local_90 >> 0x20 );
            fVar32 = (float)( (ulong)local_84 >> 0x20 );
            local_f0 = CONCAT44(fVar35 * fStack_9c + fVar38 * local_98 + local_108 * fStack_94 + fVar32, fVar35 * local_a8 + fVar38 * fStack_a4 + local_108 * local_a0 + (float)local_84);
            fVar37 = (float)local_100;
            fVar43 = (float)( (ulong)local_100 >> 0x20 );
            local_e8 = fVar35 * fVar39 + fVar38 * fVar41 + local_108 * local_88 + local_7c;
            local_e0 = CONCAT44(fVar37 * fStack_9c + fVar43 * local_98 + local_f8 * fStack_94 + fVar32, fVar37 * local_a8 + fVar43 * fStack_a4 + local_f8 * local_a0 + (float)local_84);
            local_d8 = fVar37 * fVar39 + fVar43 * fVar41 + local_f8 * local_88 + local_7c;
            if (lVar27 == 0) {
               lVar26 = 0;
               LAB_001044d2:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar20, lVar26, "p_index", "shapes.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            lVar26 = *(long*)( lVar27 + -8 );
            if (lVar26 <= lVar20) goto LAB_001044d2;
            plVar2 = *(long**)( lVar27 + 0x80 + lVar20 * 0x90 );
            local_d0 = 0;
            local_c8 = 0.0;
            local_c0 = 0;
            local_b8 = 0.0;
            local_114 = 0xffffffff;
            cVar15 = ( **(code**)( *plVar2 + 0x40 ) )(plVar2, &local_f0);
            if (cVar15 != '\0') {
               if (param_1[0x46] == (RayParameters)0x0) goto joined_r0x00103e0a;
               local_130 = 0;
               local_128 = 0.0;
               local_b4 = local_110;
               local_ac = local_108;
               local_120 = lVar25;
               local_124 = iVar19;
               goto LAB_001040a6;
            }

            cVar15 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2, &local_f0, &local_e0, &local_d0, &local_c0, &local_114, param_1[0x47]);
            if (cVar15 == '\0') goto joined_r0x00103e0a;
            if (*(long*)( lVar25 + 0x38 ) == 0) {
               lVar27 = 0;
               LAB_001045b1:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar20, lVar27, "p_index", "shapes.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            lVar27 = *(long*)( *(long*)( lVar25 + 0x38 ) + -8 );
            if (lVar27 <= lVar20) goto LAB_001045b1;
            Transform3D::operator *((Transform3D*)&local_78, (Transform3D*)( lVar25 + 0x48 ));
            fVar35 = (float)local_d0;
            fVar38 = (float)( (ulong)local_d0 >> 0x20 );
            fVar37 = local_60 * fVar35 + local_5c * fVar38 + local_58 * local_c8 + local_4c;
            fVar32 = local_78 * fVar35 + fStack_74 * fVar38 + (float)local_70 * local_c8 + (float)local_54;
            fVar35 = (float)( (ulong)local_70 >> 0x20 ) * fVar35 + local_68 * fVar38 + fStack_64 * local_c8 + (float)( (ulong)local_54 >> 0x20 );
            local_d0 = CONCAT44(fVar35, fVar32);
            fVar32 = fVar37 * local_134 + fVar35 * local_138 + local_13c * fVar32;
            local_c8 = fVar37;
            if (local_144 <= fVar32) goto joined_r0x00103e0a;
            fVar35 = (float)local_c0;
            fVar38 = (float)( (ulong)local_c0 >> 0x20 );
            fVar40 = local_b8 * fVar39 + fVar35 * fVar31 + fVar38 * fVar40;
            fVar42 = local_b8 * fVar41 + fVar35 * fVar42 + fVar38 * fVar12;
            auVar33._4_4_ = fVar42;
            auVar33._0_4_ = fVar40;
            fVar31 = fVar11 * fVar35 + fVar13 * fVar38 + fVar14 * local_b8;
            fVar42 = fVar40 * fVar40 + fVar42 * fVar42 + fVar31 * fVar31;
            local_130 = 0;
            local_128 = 0.0;
            if (fVar42 != 0.0) {
               fVar42 = SQRT(fVar42);
               auVar33._8_8_ = 0;
               local_128 = fVar31 / fVar42;
               auVar36._4_4_ = fVar42;
               auVar36._0_4_ = fVar42;
               auVar36._8_8_ = __LC34;
               auVar34 = divps(auVar33, auVar36);
               local_130 = auVar34._0_8_;
            }

            local_148 = local_114;
            iVar29 = iVar29 + 1;
            local_144 = fVar32;
            local_13d = cVar15;
            local_124 = iVar19;
            local_120 = lVar25;
            local_b4 = local_d0;
            local_ac = fVar37;
         }
 while ( iVar16 != iVar29 );
         LAB_00103dc7:if (local_13d != '\0') {
            LAB_001040a6:if (local_120 == 0) {
               _err_print_error("intersect_ray", "modules/godot_physics_3d/godot_space_3d.cpp", 0xc1, "Parameter \"res_obj\" is null.", 0, 0);
               uVar18 = 0;
            }
 else {
               uVar17 = *(ulong*)( local_120 + 0x18 );
               uVar21 = 0;
               *(ulong*)( param_2 + 0x20 ) = uVar17;
               if (uVar17 != 0) {
                  uVar22 = (uint)uVar17 & 0xffffff;
                  if (uVar22 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        uVar28 = local_114 >> 8;
                        local_114 = uVar28 << 8;
                        LOCK();
                        bVar30 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar30) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar30) break;
                        local_114 = uVar28 << 8;
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar23 = (ulong*)( (ulong)uVar22 * 0x10 + ObjectDB::object_slots );
                     if (( uVar17 >> 0x18 & 0x7fffffffff ) == ( *puVar23 & 0x7fffffffff )) {
                        uVar21 = puVar23[1];
                        ObjectDB::spin_lock._0_1_ = '\0';
                     }
 else {
                        uVar21 = 0;
                        ObjectDB::spin_lock._0_1_ = '\0';
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     uVar21 = 0;
                  }

               }

               *(ulong*)( param_2 + 0x28 ) = uVar21;
               *(undefined8*)( param_2 + 0xc ) = local_130;
               *(uint*)( param_2 + 0x34 ) = local_148;
               *(float*)( param_2 + 0x14 ) = local_128;
               *(undefined8*)param_2 = local_b4;
               *(float*)( param_2 + 8 ) = local_ac;
               uVar18 = *(undefined8*)( local_120 + 0x10 );
               *(int*)( param_2 + 0x30 ) = local_124;
               *(undefined8*)( param_2 + 0x18 ) = uVar18;
               uVar18 = 1;
            }

            goto LAB_0010416f;
         }

      }

      uVar18 = 0;
   }
 else {
      _err_print_error("intersect_ray", "modules/godot_physics_3d/godot_space_3d.cpp", 0x6f, "Condition \"space->locked\" is true. Returning: false", 0, 0);
      uVar18 = 0;
   }

   LAB_0010416f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsDirectSpaceState3D::GodotPhysicsDirectSpaceState3D() */void GodotPhysicsDirectSpaceState3D::GodotPhysicsDirectSpaceState3D(GodotPhysicsDirectSpaceState3D *this) {
   PhysicsDirectSpaceState3D::PhysicsDirectSpaceState3D((PhysicsDirectSpaceState3D*)this);
   *(undefined8*)( this + 0x178 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010b468;
   return;
}
/* GodotSpace3D::_cull_aabb_for_body(GodotBody3D*, AABB const&) */int GodotSpace3D::_cull_aabb_for_body(GodotSpace3D *this, GodotBody3D *param_1, AABB *param_2) {
   long lVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   GodotBody3D *pGVar4;
   ulong uVar5;
   code *pcVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   iVar7 = ( **(code**)( **(long**)( this + 0x38 ) + 0x48 ) )(*(long**)( this + 0x38 ), param_2, this + 0xe8, 0x800, this + 0x40e8);
   if (iVar7 < 1) {
      return iVar7;
   }

   iVar13 = 0;
   lVar10 = 0;
   do {
      while (( ( pGVar4 = *(GodotBody3D**)( this + lVar10 * 8 + 0xe8 ) ),pGVar4 == param_1 || ( ( *(uint*)( pGVar4 + 8 ) & 0xfffffffd ) == 0 ) ) || ( ( *(uint*)( pGVar4 + 0x20 ) & *(uint*)( param_1 + 0x24 ) ) == 0 )) {
         LAB_001046d6:iVar7 = iVar7 + -1;
         if (iVar7 <= iVar13) {
            return iVar7;
         }

         lVar1 = (long)iVar7 + 0x1c;
         lVar9 = (long)iVar7 + 0x1038;
         *(undefined8*)( this + lVar10 * 8 + 0xe8 ) = *(undefined8*)( this + lVar1 * 8 + 8 );
         uVar2 = *(undefined4*)( this + lVar9 * 4 + 8 );
         *(GodotBody3D**)( this + lVar1 * 8 + 8 ) = pGVar4;
         uVar3 = *(undefined4*)( this + ( lVar10 + 0x1038 ) * 4 + 8 );
         *(undefined4*)( this + ( lVar10 + 0x1038 ) * 4 + 8 ) = uVar2;
         *(undefined4*)( this + lVar9 * 4 + 8 ) = uVar3;
      }
;
      lVar1 = *(long*)( pGVar4 + 0x2b0 );
      if (lVar1 != 0) {
         lVar9 = *(long*)( lVar1 + -8 );
         iVar12 = (int)lVar9 + -1;
         if (lVar9 < 1) goto LAB_00104835;
         iVar11 = 0;
         if (-1 < iVar12) {
            do {
               iVar8 = ( iVar11 + iVar12 ) / 2;
               uVar5 = *(ulong*)( lVar1 + (long)iVar8 * 8 );
               if (*(ulong*)( param_1 + 0x10 ) < uVar5) {
                  iVar12 = iVar8 + -1;
               }
 else {
                  if (*(ulong*)( param_1 + 0x10 ) <= uVar5) {
                     if (iVar8 != -1) goto LAB_001046d6;
                     break;
                  }

                  iVar11 = iVar8 + 1;
               }

            }
 while ( iVar11 <= iVar12 );
         }

      }

      lVar1 = *(long*)( param_1 + 0x2b0 );
      if (lVar1 != 0) {
         lVar9 = *(long*)( lVar1 + -8 );
         iVar12 = (int)lVar9 + -1;
         if (lVar9 < 1) {
            LAB_00104835:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar9, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         iVar11 = 0;
         if (-1 < iVar12) {
            do {
               iVar8 = ( iVar11 + iVar12 ) / 2;
               uVar5 = *(ulong*)( lVar1 + (long)iVar8 * 8 );
               if (*(ulong*)( pGVar4 + 0x10 ) < uVar5) {
                  iVar12 = iVar8 + -1;
               }
 else {
                  if (*(ulong*)( pGVar4 + 0x10 ) <= uVar5) {
                     if (iVar8 != -1) goto LAB_001046d6;
                     break;
                  }

                  iVar11 = iVar8 + 1;
               }

            }
 while ( iVar11 <= iVar12 );
         }

      }

      iVar13 = iVar13 + 1;
      if (iVar7 <= iVar13) {
         return iVar7;
      }

      lVar10 = (long)iVar13;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Restarted to delay deadcode elimination for space: stack *//* GodotSpace3D::test_body_motion(GodotBody3D*, PhysicsServer3D::MotionParameters const&,
   PhysicsServer3D::MotionResult*) */char GodotSpace3D::test_body_motion(GodotSpace3D *this, GodotBody3D *param_1, MotionParameters *param_2, MotionResult *param_3) {
   undefined4 uVar1;
   undefined4 uVar2;
   GodotShape3D *pGVar3;
   bool bVar4;
   undefined1 auVar5[16];
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
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   code *pcVar51;
   bool bVar52;
   undefined1 auVar53[16];
   char cVar54;
   int iVar55;
   int iVar56;
   uint uVar57;
   undefined8 *puVar58;
   long lVar59;
   Transform3D *pTVar60;
   AABB *pAVar61;
   Transform3D *pTVar62;
   ulong uVar63;
   AABB *pAVar64;
   MotionResult *pMVar65;
   long lVar66;
   ulong uVar67;
   GodotBody3D *pGVar68;
   MotionParameters *pMVar69;
   int iVar70;
   long lVar71;
   long lVar72;
   uint uVar73;
   undefined ***pppuVar74;
   undefined8 *puVar75;
   ulong uVar76;
   uint uVar77;
   uint uVar78;
   ulong uVar79;
   long in_FS_OFFSET;
   byte bVar80;
   float fVar81;
   float fVar82;
   float fVar83;
   undefined8 uVar84;
   undefined1 auVar85[16];
   float fVar86;
   float fVar87;
   float fVar88;
   float fVar89;
   undefined1 auVar90[16];
   float fVar91;
   float fVar92;
   float fVar93;
   undefined1 auVar94[16];
   undefined1 auVar95[16];
   float fVar96;
   double dVar97;
   float fVar98;
   float fVar99;
   undefined1 auVar100[16];
   float fVar101;
   undefined8 uVar102;
   float fVar103;
   float fVar104;
   float fVar105;
   float fVar106;
   float fVar107;
   float fVar108;
   ulong local_d98;
   long local_d90;
   float local_d80;
   long local_d70;
   float local_d54;
   char local_d35;
   float local_ce8;
   float fStack_ce4;
   undefined8 uStack_ce0;
   float local_cd8;
   int local_cc8;
   undefined **local_c68;
   undefined8 uStack_c60;
   undefined8 local_c58;
   undefined8 local_c48;
   AABB *local_c40;
   undefined8 local_c30;
   float local_c28;
   undefined8 local_c20;
   float local_c18;
   undefined8 local_c14;
   float local_c0c;
   undefined8 local_c08;
   float local_c00;
   float local_bf8;
   float fStack_bf4;
   float local_bf0;
   float local_be8;
   float fStack_be4;
   float local_be0;
   undefined **local_bd8;
   float fStack_bd0;
   float fStack_bcc;
   float fStack_bc8;
   float fStack_bc4;
   undefined8 local_bb8;
   undefined8 uStack_bb0;
   undefined8 local_ba8;
   undefined8 uStack_ba0;
   undefined1 local_b98[4];
   undefined8 uStack_b94;
   float fStack_b8c;
   undefined1 local_b88[12];
   float fStack_b7c;
   undefined8 local_b78;
   undefined8 local_b64;
   float local_b5c;
   undefined8 local_b58;
   float local_b50;
   undefined8 local_b28;
   float local_b20;
   float fStack_b1c;
   float local_b18;
   float fStack_b14;
   float local_b10;
   float local_b0c;
   float local_b08;
   undefined8 local_af8;
   float local_af0;
   int iStack_aec;
   float fStack_ae8;
   undefined4 local_ae4;
   undefined8 local_ae0;
   undefined8 local_ad8;
   undefined8 local_ad0;
   undefined4 local_ac8;
   undefined8 local_ac4;
   undefined4 local_abc;
   undefined4 local_ab8;
   undefined8 local_ab0;
   AABB *local_aa8;
   undefined **local_a78;
   float fStack_a70;
   undefined4 uStack_a6c;
   undefined4 uStack_a68;
   undefined4 uStack_a64;
   undefined4 local_a60;
   undefined8 local_a5c;
   undefined4 local_a54;
   undefined8 local_a50[2];
   undefined1 auStack_a40[16];
   undefined1 local_a30[16];
   undefined8 local_a20;
   GodotShape3D *local_a18;
   undefined8 uStack_a10;
   float local_a08;
   AABB local_478[1060];
   uint local_54;
   undefined4 auStack_50[4];
   long local_40;
   bVar80 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( param_2 + 0x40 ) < 0x21) {
      if (param_3 == (MotionResult*)0x0) {
         local_bd8 = (undefined**)0x0;
         lVar66 = *(long*)( param_1 + 0x38 );
         fStack_bd0 = 0.0;
         fStack_bcc = 0.0;
         fStack_bc8 = 0.0;
         fStack_bc4 = 0.0;
         if (lVar66 != 0) goto LAB_001049db;
      }
 else {
         pppuVar74 = &local_a78;
         for (lVar66 = 0x146; lVar66 != 0; lVar66 = lVar66 + -1) {
            *pppuVar74 = (undefined**)0x0;
            pppuVar74 = pppuVar74 + 1;
         }

         puVar58 = local_a50;
         do {
            *puVar58 = 0;
            puVar75 = puVar58 + 10;
            *(undefined4*)( puVar58 + 1 ) = 0;
            *(undefined8*)( (long)puVar58 + 0xc ) = 0;
            *(undefined4*)( (long)puVar58 + 0x14 ) = 0;
            puVar58[3] = 0;
            *(undefined4*)( puVar58 + 4 ) = 0;
            *(undefined8*)( (long)puVar58 + 0x24 ) = 0;
            *(undefined4*)( (long)puVar58 + 0x2c ) = 0;
            *(undefined4*)( puVar58 + 6 ) = 0;
            *(undefined4*)( (long)puVar58 + 0x34 ) = 0;
            *(undefined1(*) [16])( puVar58 + 7 ) = (undefined1[16])0x0;
            *(undefined4*)( puVar58 + 9 ) = 0;
            puVar58 = puVar75;
         }
 while ( puVar75 != (undefined8*)auStack_50 );
         auStack_50[0] = 0;
         *(undefined***)param_3 = local_a78;
         *(ulong*)( param_3 + 0xa24 ) = (ulong)local_54;
         lVar59 = (long)param_3 - (long)( ( ulong )(param_3 + 8) & 0xfffffffffffffff8 );
         lVar66 = *(long*)( param_1 + 0x38 );
         puVar58 = (undefined8*)( (long)&local_a78 - lVar59 );
         puVar75 = (undefined8*)( ( ulong )(param_3 + 8) & 0xfffffffffffffff8 );
         for (uVar67 = ( ulong )((int)lVar59 + 0xa2cU >> 3); uVar67 != 0; uVar67 = uVar67 - 1) {
            *puVar75 = *puVar58;
            puVar58 = puVar58 + 1;
            puVar75 = puVar75 + 1;
         }

         local_bd8 = (undefined**)0x0;
         fStack_bd0 = 0.0;
         fStack_bcc = 0.0;
         fStack_bc8 = 0.0;
         fStack_bc4 = 0.0;
         if (lVar66 != 0) {
            LAB_001049db:fStack_bc8 = 0.0;
            fStack_bcc = 0.0;
            fStack_bc4 = 0.0;
            fStack_bd0 = 0.0;
            local_bd8 = (undefined**)0x0;
            lVar72 = 0;
            local_d35 = '\0';
            lVar59 = lVar72;
            do {
               lVar71 = *(long*)( lVar66 + -8 );
               if ((int)lVar71 <= (int)lVar59) break;
               if (lVar59 < lVar71) {
                  if (*(char*)( lVar66 + 0x88 + lVar72 ) == '\0') goto LAB_00104a7b;
               }
 else {
                  _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, lVar59, lVar71, "p_idx", "shapes.size()", "", false, false);
                  lVar66 = *(long*)( param_1 + 0x38 );
                  LAB_00104a7b:if (local_d35 == '\0') {
                     if (lVar66 == 0) goto LAB_00104ba0;
                     lVar71 = *(long*)( lVar66 + -8 );
                     if (lVar71 <= lVar59) goto LAB_00104ba6;
                     uVar84 = *(undefined8*)( lVar66 + 0x74 + lVar72 );
                     auVar85 = *(undefined1(*) [16])( lVar66 + 100 + lVar72 );
                     fStack_bc8 = (float)uVar84;
                     fStack_bc4 = (float)( (ulong)uVar84 >> 0x20 );
                     local_bd8 = auVar85._0_8_;
                     fStack_bd0 = auVar85._8_4_;
                     fStack_bcc = auVar85._12_4_;
                  }
 else {
                     if (lVar66 == 0) {
                        LAB_00104ba0:lVar71 = 0;
                        LAB_00104ba6:_err_print_index_error("get_shape_aabb", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x88, lVar59, lVar71, "p_index", "shapes.size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar51 = (code*)invalidInstructionException();
                        ( *pcVar51 )();
                     }

                     lVar71 = *(long*)( lVar66 + -8 );
                     if (lVar71 <= lVar59) goto LAB_00104ba6;
                     AABB::merge((AABB*)&local_c68);
                     fStack_bc8 = (float)local_c58;
                     fStack_bc4 = (float)( (ulong)local_c58 >> 0x20 );
                     lVar66 = *(long*)( param_1 + 0x38 );
                     local_bd8 = local_c68;
                     fStack_bd0 = (float)uStack_c60;
                     fStack_bcc = (float)( (ulong)uStack_c60 >> 0x20 );
                  }

                  local_d35 = '\x01';
               }

               lVar59 = lVar59 + 1;
               lVar72 = lVar72 + 0x90;
            }
 while ( lVar66 != 0 );
            if (local_d35 != '\0') {
               local_d54 = *(float*)( param_2 + 0x3c );
               dVar97 = (double)local_d54;
               if (dVar97 <= __LC29) {
                  local_d54 = _LC26;
                  dVar97 = (double)_LC26;
               }

               lVar66 = 0;
               local_a78 = local_bd8;
               local_b28 = 0;
               fStack_a70 = fStack_bd0;
               local_b20 = 0.0;
               local_af8 = 0;
               local_af0 = 0.0;
               local_b58 = CONCAT44((float)( (ulong)local_bd8 >> 0x20 ) + fStack_bc8, SUB84(local_bd8, 0) + fStack_bcc);
               local_b50 = fStack_bd0 + fStack_bc4;
               pGVar68 = param_1;
               do {
                  fVar91 = *(float*)( param_1 + lVar66 + 0x9c );
                  lVar59 = 0;
                  fVar98 = fVar91;
                  do {
                     fVar86 = *(float*)( (AABB*)&local_a78 + lVar59 ) * *(float*)( pGVar68 + lVar59 + 0x78 );
                     fVar81 = *(float*)( pGVar68 + lVar59 + 0x78 ) * *(float*)( (Transform3D*)&local_b58 + lVar59 );
                     fVar92 = fVar81;
                     if (fVar86 < fVar81) {
                        fVar92 = fVar86;
                        fVar86 = fVar81;
                     }

                     fVar98 = fVar98 + fVar86;
                     fVar91 = fVar91 + fVar92;
                     lVar59 = lVar59 + 4;
                  }
 while ( lVar59 != 0xc );
                  *(float*)( (Transform3D*)&local_af8 + lVar66 ) = fVar98;
                  pGVar68 = pGVar68 + 0xc;
                  *(float*)( (Transform3D*)&local_b28 + lVar66 ) = fVar91;
                  fVar91 = local_b20;
                  uVar84 = local_b28;
                  lVar66 = lVar66 + 4;
               }
 while ( lVar66 != 0xc );
               lVar66 = 0;
               local_b28 = 0;
               local_b88._8_4_ = local_b20;
               fVar92 = local_af0 - local_b20;
               fVar98 = (float)local_af8;
               uVar67 = (ulong)local_af8 >> 0x20;
               fVar86 = (float)( (ulong)uVar84 >> 0x20 );
               local_b20 = 0.0;
               local_af8 = 0;
               local_af0 = 0.0;
               local_b88._0_8_ = uVar84;
               local_b58 = CONCAT44(( (float)uVar67 - fVar86 ) + fVar86, ( fVar98 - (float)uVar84 ) + (float)uVar84);
               local_b50 = fVar91 + fVar92;
               pMVar69 = param_2;
               do {
                  fVar91 = *(float*)( param_2 + lVar66 + 0x24 );
                  lVar59 = 0;
                  fVar98 = fVar91;
                  do {
                     fVar86 = *(float*)( (Transform3D*)local_b88 + lVar59 ) * *(float*)( pMVar69 + lVar59 );
                     fVar81 = *(float*)( pMVar69 + lVar59 ) * *(float*)( (Transform3D*)&local_b58 + lVar59 );
                     fVar92 = fVar81;
                     if (fVar86 < fVar81) {
                        fVar92 = fVar86;
                        fVar86 = fVar81;
                     }

                     fVar98 = fVar98 + fVar86;
                     fVar91 = fVar91 + fVar92;
                     lVar59 = lVar59 + 4;
                  }
 while ( lVar59 != 0xc );
                  *(float*)( (Transform3D*)&local_af8 + lVar66 ) = fVar98;
                  pMVar69 = pMVar69 + 0xc;
                  *(float*)( (Transform3D*)&local_b28 + lVar66 ) = fVar91;
                  lVar66 = lVar66 + 4;
               }
 while ( lVar66 != 0xc );
               fStack_bc4 = 0.0;
               fStack_bcc = 0.0;
               fStack_bc8 = 0.0;
               local_a78 = (undefined**)0x0;
               fStack_a70 = 0.0;
               local_bd8 = (undefined**)0x0;
               fStack_bd0 = 0.0;
               uStack_a6c = fStack_bcc;
               uStack_a68 = fStack_bc8;
               uStack_a64 = fStack_bc4;
               AABB::grow(local_d54);
               local_cc8 = 4;
               fStack_bc8 = (float)local_c58;
               fStack_bc4 = (float)( (ulong)local_c58 >> 0x20 );
               uVar84 = *(undefined8*)( param_2 + 0x30 );
               local_bd8 = local_c68;
               fStack_bd0 = (float)uStack_c60;
               fStack_bcc = (float)( (ulong)uStack_c60 >> 0x20 );
               local_ce8 = (float)uVar84;
               fStack_ce4 = (float)( (ulong)uVar84 >> 0x20 );
               pAVar61 = (AABB*)&local_a78;
               for (lVar66 = 0x60; lVar66 != 0; lVar66 = lVar66 + -1) {
                  *(undefined8*)pAVar61 = 0;
                  pAVar61 = pAVar61 + (ulong)bVar80 * -0x10 + 8;
               }

               fVar98 = (float)( dVar97 * __LC30 );
               fVar91 = *(float*)( param_2 + 0x38 );
               local_bb8 = *(undefined8*)param_2;
               uStack_bb0 = *(undefined8*)( param_2 + 8 );
               local_ba8 = *(undefined8*)( param_2 + 0x10 );
               uStack_ba0 = *(undefined8*)( param_2 + 0x18 );
               _local_b98 = *(undefined1(*) [16])( param_2 + 0x20 );
               bVar52 = false;
               while (true) {
                  local_c48 = _LC52;
                  local_c40 = (AABB*)&local_a78;
                  iVar55 = _cull_aabb_for_body(this, param_1, (AABB*)&local_bd8);
                  lVar66 = *(long*)( param_1 + 0x38 );
                  if (lVar66 == 0) break;
                  bVar4 = false;
                  lVar59 = 0;
                  uVar67 = 0;
                  iVar56 = 0;
                  LAB_00105024:do {
                     lVar72 = *(long*)( lVar66 + -8 );
                     if ((int)lVar72 <= (int)uVar67) break;
                     if ((long)uVar67 < lVar72) {
                        if (*(char*)( lVar66 + 0x88 + lVar59 ) == '\0') goto LAB_00105317;
                     }
 else {
                        _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, uVar67, lVar72, "p_idx", "shapes.size()", "", false, false);
                        lVar66 = *(long*)( param_1 + 0x38 );
                        LAB_00105317:if (lVar66 == 0) goto LAB_001061a4;
                        lVar66 = *(long*)( lVar66 + -8 );
                        if (lVar66 <= (long)uVar67) goto LAB_001057c1;
                        Transform3D::operator *((Transform3D*)&local_b58, (Transform3D*)&local_bb8);
                        lVar66 = *(long*)( param_1 + 0x38 );
                        if (lVar66 == 0) goto LAB_001061cd;
                        lVar72 = *(long*)( lVar66 + -8 );
                        uVar63 = uVar67;
                        if (lVar72 <= (long)uVar67) goto LAB_00106181;
                        pGVar3 = *(GodotShape3D**)( lVar66 + 0x80 + lVar59 );
                        local_d98 = 0;
                        if (iVar55 < 1) {
                           uVar67 = uVar67 + 1;
                           lVar59 = lVar59 + 0x90;
                           goto LAB_00105024;
                        }

                        do {
                           while (true) {
                              lVar66 = *(long*)( this + local_d98 * 2 + 0xe8 );
                              if (( *(long*)( param_2 + 0x48 ) != 0 ) && ( *(int*)( param_2 + 0x6c ) != 0 )) {
                                 uVar76 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 ));
                                 lVar72 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x68 ) * 8 );
                                 uVar63 = *(long*)( lVar66 + 0x10 ) * 0x3ffff - 1;
                                 uVar63 = ( uVar63 ^ uVar63 >> 0x1f ) * 0x15;
                                 uVar63 = ( uVar63 ^ uVar63 >> 0xb ) * 0x41;
                                 uVar63 = uVar63 >> 0x16 ^ uVar63;
                                 uVar79 = uVar63 & 0xffffffff;
                                 if ((int)uVar63 == 0) {
                                    uVar79 = 1;
                                 }

                                 auVar85._8_8_ = 0;
                                 auVar85._0_8_ = uVar79 * lVar72;
                                 auVar95._8_8_ = 0;
                                 auVar95._0_8_ = uVar76;
                                 lVar71 = SUB168(auVar85 * auVar95, 8);
                                 uVar73 = *(uint*)( *(long*)( param_2 + 0x60 ) + lVar71 * 4 );
                                 iVar70 = SUB164(auVar85 * auVar95, 8);
                                 if (uVar73 != 0) {
                                    uVar57 = 0;
                                    do {
                                       if (( uVar73 == (uint)uVar79 ) && ( *(long*)( lVar66 + 0x10 ) == *(long*)( *(long*)( param_2 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0x50 ) + lVar71 * 4 ) * 8 ) )) goto LAB_001054c0;
                                       uVar57 = uVar57 + 1;
                                       auVar5._8_8_ = 0;
                                       auVar5._0_8_ = ( ulong )(iVar70 + 1) * lVar72;
                                       auVar28._8_8_ = 0;
                                       auVar28._0_8_ = uVar76;
                                       lVar71 = SUB168(auVar5 * auVar28, 8);
                                       uVar73 = *(uint*)( *(long*)( param_2 + 0x60 ) + lVar71 * 4 );
                                       iVar70 = SUB164(auVar5 * auVar28, 8);
                                    }
 while ( ( uVar73 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar73 * lVar72,auVar29._8_8_ = 0,auVar29._0_8_ = uVar76,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 ) + iVar70 ) - SUB164(auVar6 * auVar29, 8)) * lVar72,auVar30._8_8_ = 0,auVar30._0_8_ = uVar76,uVar57 <= SUB164(auVar7 * auVar30, 8) );
                                 }

                              }

                              if (( *(long*)( param_2 + 0x70 ) != 0 ) && ( *(int*)( param_2 + 0x94 ) != 0 )) {
                                 uVar76 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x90 ) * 4 ));
                                 lVar72 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x90 ) * 8 );
                                 uVar63 = *(long*)( lVar66 + 0x18 ) * 0x3ffff - 1;
                                 uVar63 = ( uVar63 ^ uVar63 >> 0x1f ) * 0x15;
                                 uVar63 = ( uVar63 ^ uVar63 >> 0xb ) * 0x41;
                                 uVar63 = uVar63 >> 0x16 ^ uVar63;
                                 uVar79 = uVar63 & 0xffffffff;
                                 if ((int)uVar63 == 0) {
                                    uVar79 = 1;
                                 }

                                 auVar8._8_8_ = 0;
                                 auVar8._0_8_ = uVar79 * lVar72;
                                 auVar31._8_8_ = 0;
                                 auVar31._0_8_ = uVar76;
                                 lVar71 = SUB168(auVar8 * auVar31, 8);
                                 uVar73 = *(uint*)( *(long*)( param_2 + 0x88 ) + lVar71 * 4 );
                                 iVar70 = SUB164(auVar8 * auVar31, 8);
                                 if (uVar73 != 0) {
                                    uVar57 = 0;
                                    do {
                                       if (( uVar73 == (uint)uVar79 ) && ( *(long*)( lVar66 + 0x18 ) == *(long*)( *(long*)( param_2 + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0x78 ) + lVar71 * 4 ) * 8 ) )) goto LAB_001054c0;
                                       uVar57 = uVar57 + 1;
                                       auVar9._8_8_ = 0;
                                       auVar9._0_8_ = ( ulong )(iVar70 + 1) * lVar72;
                                       auVar32._8_8_ = 0;
                                       auVar32._0_8_ = uVar76;
                                       lVar71 = SUB168(auVar9 * auVar32, 8);
                                       uVar73 = *(uint*)( *(long*)( param_2 + 0x88 ) + lVar71 * 4 );
                                       iVar70 = SUB164(auVar9 * auVar32, 8);
                                    }
 while ( ( uVar73 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar73 * lVar72,auVar33._8_8_ = 0,auVar33._0_8_ = uVar76,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x90 ) * 4 ) + iVar70 ) - SUB164(auVar10 * auVar33, 8)) * lVar72,auVar34._8_8_ = 0,auVar34._0_8_ = uVar76,uVar57 <= SUB164(auVar11 * auVar34, 8) );
                                 }

                              }

                              uVar63 = ( ulong ) * (int*)( this + local_d98 + 0x40e8 );
                              lVar72 = *(long*)( lVar66 + 0x38 );
                              if (*(int*)( this + local_d98 + 0x40e8 ) < 0) goto LAB_0010578a;
                              if (lVar72 == 0) goto LAB_00106158;
                              if (*(long*)( lVar72 + -8 ) <= (long)uVar63) goto LAB_00105793;
                              Transform3D::operator *((Transform3D*)&local_b28, (Transform3D*)( lVar66 + 0x48 ));
                              lVar71 = *(long*)( lVar66 + 0x38 );
                              if (lVar71 == 0) goto LAB_00106160;
                              lVar72 = *(long*)( lVar71 + -8 );
                              if (lVar72 <= (long)uVar63) goto LAB_00106181;
                              cVar54 = GodotCollisionSolver3D::solve_static(pGVar3, (Transform3D*)&local_b58, *(GodotShape3D**)( lVar71 + 0x80 + uVar63 * 0x90 ), (Transform3D*)&local_b28, GodotPhysicsServer3D::_shape_col_cbk, &local_c48, (Vector3*)0x0, local_d54, 0.0);
                              if (cVar54 != '\0') {
                                 bVar4 = 0 < local_c48._4_4_;
                              }

                              if (iVar56 < local_c48._4_4_) break;
                              LAB_001054c0:local_d98 = local_d98 + 4;
                              if ((long)iVar55 * 4 == local_d98) goto LAB_001054d4;
                           }
;
                           uVar1 = *(undefined4*)( lVar66 + 0x28 );
                           lVar66 = (long)iVar56 * 4;
                           pTVar62 = (Transform3D*)&local_af8 + lVar66;
                           pTVar60 = (Transform3D*)&local_af8 + ( ( ulong )(uint)(local_c48._4_4_ - iVar56) + (long)iVar56 ) * 4;
                           if (( (int)pTVar60 - (int)pTVar62 & 4U ) == 0) goto LAB_00105728;
                           *(undefined4*)pTVar62 = uVar1;
                           for (pTVar62 = (Transform3D*)( (long)&local_af8 + lVar66 + 4 ); pTVar62 != pTVar60; pTVar62 = pTVar62 + 8) {
                              LAB_00105728:*(undefined4*)pTVar62 = uVar1;
                              *(undefined4*)( pTVar62 + 4 ) = uVar1;
                           }

                           local_d98 = local_d98 + 4;
                           iVar56 = local_c48._4_4_;
                        }
 while ( (long)iVar55 * 4 != local_d98 );
                        LAB_001054d4:lVar66 = *(long*)( param_1 + 0x38 );
                     }

                     uVar67 = uVar67 + 1;
                     lVar59 = lVar59 + 0x90;
                  }
 while ( lVar66 != 0 );
                  auVar85 = _local_b98;
                  if (( !bVar4 ) || ( bVar52 = local_c48._4_4_ < 1 )) break;
                  fVar92 = 0.0;
                  pTVar62 = (Transform3D*)&local_af8 + (long)local_c48._4_4_ * 4;
                  pTVar60 = (Transform3D*)&local_af8;
                  if (( local_c48 & 0x100000000 ) == 0) goto LAB_0010509c;
                  fVar92 = (float)local_af8 + 0.0;
                  for (pTVar60 = (Transform3D*)( (long)&local_af8 + 4 ); pTVar60 != pTVar62; pTVar60 = pTVar60 + 8) {
                     LAB_0010509c:fVar92 = fVar92 + *(float*)pTVar60 + *(float*)( pTVar60 + 4 );
                  }

                  fVar86 = _LC34;
                  if (_LC53 <= ABS(fVar92)) {
                     fVar86 = (float)local_c48._4_4_ / fVar92;
                  }

                  fVar104 = 0.0;
                  fVar105 = 0.0;
                  fVar106 = 0.0;
                  fVar92 = 0.0;
                  auVar100._12_4_ = _UNK_0010b82c;
                  auVar100._8_4_ = _LC34;
                  pAVar61 = (AABB*)&local_a78;
                  pTVar60 = (Transform3D*)&local_af8;
                  fVar81 = fVar92;
                  do {
                     fVar93 = (float)*(undefined8*)pAVar61;
                     fVar82 = (float)( ( ulong ) * (undefined8*)pAVar61 >> 0x20 );
                     fVar107 = (float)*(undefined8*)( pAVar61 + 0xc );
                     auVar94._0_4_ = fVar93 - fVar107;
                     fVar89 = (float)( ( ulong ) * (undefined8*)( pAVar61 + 0xc ) >> 0x20 );
                     auVar94._4_4_ = fVar82 - fVar89;
                     auVar94._8_8_ = 0;
                     fVar108 = *(float*)( pAVar61 + 8 ) - *(float*)( pAVar61 + 0x14 );
                     fVar87 = auVar94._0_4_ * auVar94._0_4_ + auVar94._4_4_ * auVar94._4_4_ + fVar108 * fVar108;
                     uVar102 = 0;
                     fVar99 = 0.0;
                     if (fVar87 != 0.0) {
                        fVar87 = SQRT(fVar87);
                        auVar100._4_4_ = fVar87;
                        auVar100._0_4_ = fVar87;
                        auVar95 = divps(auVar94, auVar100);
                        uVar102 = auVar95._0_8_;
                        fVar99 = fVar108 / fVar87;
                     }

                     fVar87 = (float)uVar102;
                     fVar108 = (float)( (ulong)uVar102 >> 0x20 );
                     fVar82 = ( ( fVar93 + fVar81 ) * fVar87 + ( fVar82 + fVar92 ) * fVar108 + ( *(float*)( pAVar61 + 8 ) + fVar104 ) * fVar99 ) - ( fVar87 * fVar107 + fVar108 * fVar89 + *(float*)( pAVar61 + 0x14 ) * fVar99 );
                     if ((double)fVar98 + __LC54 < (double)fVar82) {
                        fVar92 = *(float*)pTVar60;
                        fVar82 = fVar82 - fVar98;
                        fVar104 = fVar104 - fVar82 * fVar99 * (float)_LC56 * fVar92 * fVar86;
                        fVar105 = fVar105 - fVar82 * fVar87 * (float)_LC56 * fVar92 * fVar86;
                        fVar106 = fVar106 - fVar82 * fVar108 * _LC56._4_4_ * fVar92 * fVar86;
                        fVar92 = fVar106;
                        fVar81 = fVar105;
                     }

                     pTVar60 = pTVar60 + 4;
                     pAVar61 = pAVar61 + 0x18;
                  }
 while ( pTVar60 != pTVar62 );
                  bVar52 = ( fVar81 == 0.0 && fVar92 == 0.0 ) && fVar104 == 0.0;
                  if (bVar52) break;
                  local_cc8 = local_cc8 + -1;
                  fVar92 = SUB164(_local_b98, 4);
                  uStack_b94._4_4_ = SUB164(_local_b98, 8) + fVar106;
                  uStack_b94._0_4_ = fVar92 + fVar105;
                  fStack_b8c = auVar85._12_4_;
                  local_b98 = auVar85._0_4_;
                  fStack_bd0 = fVar104 + fStack_bd0;
                  fStack_b8c = fStack_b8c + fVar104;
                  local_bd8 = (undefined**)CONCAT44((float)( (ulong)local_bd8 >> 0x20 ) + fVar106, SUB84(local_bd8, 0) + fVar105);
                  bVar52 = bVar4;
                  if (local_cc8 == 0) break;
               }
;
               local_b78 = CONCAT44(fStack_bc4, fStack_bc8);
               fVar86 = SQRT(local_ce8 * local_ce8 + fStack_ce4 * fStack_ce4 + fVar91 * fVar91);
               local_b88._4_4_ = (float)( ( ulong ) * (undefined8*)( param_2 + 0x30 ) >> 0x20 ) + (float)( (ulong)local_bd8 >> 0x20 );
               local_b88._0_4_ = (float)*(undefined8*)( param_2 + 0x30 ) + SUB84(local_bd8, 0);
               auVar90._4_4_ = fVar86;
               auVar90._0_4_ = fVar86;
               local_b88._8_4_ = fStack_bd0 + *(float*)( param_2 + 0x38 );
               fStack_b7c = fStack_bcc;
               AABB::merge((AABB*)&local_c68);
               unique0x10001b10 = uStack_c60;
               local_b88._0_8_ = local_c68;
               local_b78 = local_c58;
               iVar55 = _cull_aabb_for_body(this, param_1, (AABB*)local_b88);
               lVar66 = *(long*)( param_1 + 0x38 );
               fVar92 = _LC34;
               local_d80 = _LC34;
               if (lVar66 == 0) {
                  if (( param_2[0x98] != (MotionParameters)0x0 ) && ( bVar52 )) {
                     LAB_0010691d:local_d98 = 0xffffffff;
                     goto LAB_00105f35;
                  }

                  LAB_0010699a:local_d35 = '\0';
               }
 else {
                  auVar53._8_8_ = uStack_ce0;
                  auVar53._0_8_ = uVar84;
                  local_d70 = 0;
                  auVar90._12_4_ = _UNK_0010b82c;
                  auVar90._8_4_ = _LC34;
                  uVar67 = 0;
                  auVar85 = divps(auVar53, auVar90);
                  uVar73 = 0xffffffff;
                  fVar91 = fVar91 / fVar86;
                  uVar84 = auVar85._0_8_;
                  do {
                     lVar59 = *(long*)( lVar66 + -8 );
                     uVar57 = (uint)uVar67;
                     if ((int)lVar59 <= (int)uVar57) break;
                     if ((long)uVar67 < lVar59) {
                        if (*(char*)( lVar66 + 0x88 + local_d70 ) == '\0') goto LAB_001059dd;
                     }
 else {
                        _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, uVar67, lVar59, "p_idx", "shapes.size()", "", false, false);
                        lVar66 = *(long*)( param_1 + 0x38 );
                        LAB_001059dd:if (lVar66 == 0) goto LAB_001061cd;
                        lVar72 = *(long*)( lVar66 + -8 );
                        uVar63 = uVar67;
                        if (lVar72 <= (long)uVar67) goto LAB_00106181;
                        pGVar3 = *(GodotShape3D**)( lVar66 + 0x80 + local_d70 );
                        if (param_2[0x44] == (MotionParameters)0x0) {
                           iVar56 = ( **(code**)( *(long*)pGVar3 + 8 ) )(pGVar3, local_d70, lVar66);
                           if (( iVar56 != 1 ) || ( cVar54 = GodotSeparationRayShape3D::get_slide_on_slope() ),cVar54 != '\0') {
                              if (*(long*)( param_1 + 0x38 ) == 0) {
                                 LAB_001061a4:lVar66 = 0;
                              }
 else {
                                 lVar66 = *(long*)( *(long*)( param_1 + 0x38 ) + -8 );
                                 if ((long)uVar67 < lVar66) goto LAB_00105a37;
                              }

                              goto LAB_001057c1;
                           }

                           LAB_00105ec4:lVar66 = *(long*)( param_1 + 0x38 );
                        }
 else {
                           LAB_00105a37:Transform3D::operator *((Transform3D*)&local_b58, (Transform3D*)&local_bb8);
                           Transform3D::affine_inverse();
                           fVar107 = local_b08;
                           fVar99 = local_b0c;
                           fVar93 = local_b10;
                           fVar87 = fStack_b14;
                           fVar82 = local_b18;
                           fVar106 = fStack_b1c;
                           fVar105 = local_b20;
                           local_a78 = &PTR_get_volume_0010b398;
                           fStack_a70 = 0.0;
                           uStack_a6c = 0;
                           fVar88 = (float)local_b28;
                           fVar104 = local_b28._4_4_;
                           auStack_a40 = (undefined1[16])0x0;
                           local_a30 = (undefined1[16])0x0;
                           uStack_a68 = 0;
                           uStack_a64 = 0;
                           local_a60 = 0;
                           local_a5c = 0;
                           local_a54 = 0;
                           local_a50[0] = 0;
                           local_a20 = 2;
                           local_a18 = (GodotShape3D*)0x0;
                           uStack_a10 = 0;
                           local_a08 = 0.0;
                           local_af8 = 0;
                           local_af0 = 0.0;
                           iStack_aec = 0;
                           fStack_ae8 = 0.0;
                           local_ae4 = 0;
                           GodotShape3D::configure((AABB*)&local_a78);
                           fVar81 = *(float*)( param_2 + 0x38 );
                           fVar89 = (float)*(undefined8*)( param_2 + 0x30 );
                           fVar108 = (float)( ( ulong ) * (undefined8*)( param_2 + 0x30 ) >> 0x20 );
                           uStack_a10 = CONCAT44(fVar108 * fVar82 + fVar89 * fVar106 + fVar81 * fVar87, fVar108 * fVar104 + fVar89 * fVar88 + fVar81 * fVar105);
                           local_a08 = fVar108 * fVar99 + fVar93 * fVar89 + fVar81 * fVar107;
                           local_a18 = pGVar3;
                           if (0 < iVar55) {
                              local_d98 = uVar67 & 0xffffffff;
                              fVar81 = 1.0;
                              local_d90 = 0;
                              local_cd8 = _LC34;
                              do {
                                 lVar66 = *(long*)( this + local_d90 * 2 + 0xe8 );
                                 if (( *(long*)( param_2 + 0x48 ) != 0 ) && ( *(int*)( param_2 + 0x6c ) != 0 )) {
                                    uVar76 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 ));
                                    lVar59 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x68 ) * 8 );
                                    uVar63 = *(long*)( lVar66 + 0x10 ) * 0x3ffff - 1;
                                    uVar63 = ( uVar63 ^ uVar63 >> 0x1f ) * 0x15;
                                    uVar63 = ( uVar63 ^ uVar63 >> 0xb ) * 0x41;
                                    uVar63 = uVar63 >> 0x16 ^ uVar63;
                                    uVar79 = uVar63 & 0xffffffff;
                                    if ((int)uVar63 == 0) {
                                       uVar79 = 1;
                                    }

                                    auVar12._8_8_ = 0;
                                    auVar12._0_8_ = uVar79 * lVar59;
                                    auVar35._8_8_ = 0;
                                    auVar35._0_8_ = uVar76;
                                    lVar72 = SUB168(auVar12 * auVar35, 8);
                                    uVar77 = *(uint*)( *(long*)( param_2 + 0x60 ) + lVar72 * 4 );
                                    iVar56 = SUB164(auVar12 * auVar35, 8);
                                    if (uVar77 != 0) {
                                       uVar78 = 0;
                                       do {
                                          if (( uVar77 == (uint)uVar79 ) && ( *(long*)( lVar66 + 0x10 ) == *(long*)( *(long*)( param_2 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0x50 ) + lVar72 * 4 ) * 8 ) )) goto LAB_00105e12;
                                          uVar78 = uVar78 + 1;
                                          auVar13._8_8_ = 0;
                                          auVar13._0_8_ = ( ulong )(iVar56 + 1) * lVar59;
                                          auVar36._8_8_ = 0;
                                          auVar36._0_8_ = uVar76;
                                          lVar72 = SUB168(auVar13 * auVar36, 8);
                                          uVar77 = *(uint*)( *(long*)( param_2 + 0x60 ) + lVar72 * 4 );
                                          iVar56 = SUB164(auVar13 * auVar36, 8);
                                       }
 while ( ( uVar77 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar77 * lVar59,auVar37._8_8_ = 0,auVar37._0_8_ = uVar76,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 ) + iVar56 ) - SUB164(auVar14 * auVar37, 8)) * lVar59,auVar38._8_8_ = 0,auVar38._0_8_ = uVar76,uVar78 <= SUB164(auVar15 * auVar38, 8) );
                                    }

                                 }

                                 if (( *(long*)( param_2 + 0x70 ) != 0 ) && ( *(int*)( param_2 + 0x94 ) != 0 )) {
                                    uVar76 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x90 ) * 4 ));
                                    lVar59 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x90 ) * 8 );
                                    uVar63 = *(long*)( lVar66 + 0x18 ) * 0x3ffff - 1;
                                    uVar63 = ( uVar63 ^ uVar63 >> 0x1f ) * 0x15;
                                    uVar63 = ( uVar63 ^ uVar63 >> 0xb ) * 0x41;
                                    uVar63 = uVar63 >> 0x16 ^ uVar63;
                                    uVar79 = uVar63 & 0xffffffff;
                                    if ((int)uVar63 == 0) {
                                       uVar79 = 1;
                                    }

                                    auVar16._8_8_ = 0;
                                    auVar16._0_8_ = uVar79 * lVar59;
                                    auVar39._8_8_ = 0;
                                    auVar39._0_8_ = uVar76;
                                    lVar72 = SUB168(auVar16 * auVar39, 8);
                                    uVar77 = *(uint*)( *(long*)( param_2 + 0x88 ) + lVar72 * 4 );
                                    iVar56 = SUB164(auVar16 * auVar39, 8);
                                    if (uVar77 != 0) {
                                       uVar78 = 0;
                                       do {
                                          if (( uVar77 == (uint)uVar79 ) && ( *(long*)( lVar66 + 0x18 ) == *(long*)( *(long*)( param_2 + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0x78 ) + lVar72 * 4 ) * 8 ) )) goto LAB_00105e12;
                                          uVar78 = uVar78 + 1;
                                          auVar17._8_8_ = 0;
                                          auVar17._0_8_ = ( ulong )(iVar56 + 1) * lVar59;
                                          auVar40._8_8_ = 0;
                                          auVar40._0_8_ = uVar76;
                                          lVar72 = SUB168(auVar17 * auVar40, 8);
                                          uVar77 = *(uint*)( *(long*)( param_2 + 0x88 ) + lVar72 * 4 );
                                          iVar56 = SUB164(auVar17 * auVar40, 8);
                                       }
 while ( ( uVar77 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar77 * lVar59,auVar41._8_8_ = 0,auVar41._0_8_ = uVar76,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x90 ) * 4 ) + iVar56 ) - SUB164(auVar18 * auVar41, 8)) * lVar59,auVar42._8_8_ = 0,auVar42._0_8_ = uVar76,uVar78 <= SUB164(auVar19 * auVar42, 8) );
                                    }

                                 }

                                 local_c14 = 0;
                                 local_c0c = 0.0;
                                 uVar63 = ( ulong ) * (int*)( this + local_d90 + 0x40e8 );
                                 local_c08 = 0;
                                 local_c00 = 0.0;
                                 lVar59 = *(long*)( lVar66 + 0x38 );
                                 local_c30 = uVar84;
                                 local_c28 = fVar91;
                                 if (*(int*)( this + local_d90 + 0x40e8 ) < 0) {
                                    if (lVar59 == 0) {
                                       lVar66 = 0;
                                       uVar67 = uVar63;
                                    }
 else {
                                       LAB_00106973:lVar66 = *(long*)( lVar59 + -8 );
                                       uVar67 = uVar63;
                                    }

                                    goto LAB_001057c1;
                                 }

                                 if (lVar59 == 0) {
                                    lVar66 = 0;
                                    uVar67 = uVar63;
                                    goto LAB_001057c1;
                                 }

                                 if (*(long*)( lVar59 + -8 ) <= (long)uVar63) goto LAB_00106973;
                                 lVar71 = uVar63 * 0x90;
                                 Transform3D::operator *((Transform3D*)&local_af8, (Transform3D*)( lVar66 + 0x48 ));
                                 lVar59 = *(long*)( lVar66 + 0x38 );
                                 if (lVar59 == 0) {
                                    LAB_00106822:lVar72 = 0;
                                    goto LAB_00106181;
                                 }

                                 lVar72 = *(long*)( lVar59 + -8 );
                                 if (lVar72 <= (long)uVar63) goto LAB_00106181;
                                 cVar54 = GodotCollisionSolver3D::solve_distance((GodotShape3D*)&local_a78, (Transform3D*)&local_b58, *(GodotShape3D**)( lVar59 + 0x80 + lVar71 ), (Transform3D*)&local_af8, (Vector3*)&local_c14, (Vector3*)&local_c08, (AABB*)local_b88, (Vector3*)&local_c30);
                                 if (cVar54 == '\0') {
                                    lVar59 = *(long*)( lVar66 + 0x38 );
                                    local_c30 = uVar84;
                                    local_c28 = fVar91;
                                    if (lVar59 == 0) goto LAB_00106822;
                                    lVar72 = *(long*)( lVar59 + -8 );
                                    if (lVar72 <= (long)uVar63) goto LAB_00106181;
                                    cVar54 = GodotCollisionSolver3D::solve_distance(pGVar3, (Transform3D*)&local_b58, *(GodotShape3D**)( lVar59 + 0x80 + lVar71 ), (Transform3D*)&local_af8, (Vector3*)&local_c14, (Vector3*)&local_c08, (AABB*)local_b88, (Vector3*)&local_c30);
                                    if (cVar54 == '\0') {
                                       local_a78 = &PTR_get_volume_0010b398;
                                       GodotShape3D::~GodotShape3D((GodotShape3D*)&local_a78);
                                       if (( param_2[0x98] == (MotionParameters)0x0 ) || ( !bVar52 )) {
                                          local_d80 = 0.0;
                                          fVar92 = 0.0;
                                          goto LAB_00105f32;
                                       }

                                       local_d80 = 0.0;
                                       fVar92 = 0.0;
                                       goto LAB_00105f35;
                                    }

                                    iVar56 = 0;
                                    fVar108 = 0.0;
                                    fVar89 = _LC35;
                                    fVar96 = _LC34;
                                    LAB_00106559:do {
                                       local_bf8 = 0.0;
                                       fStack_bf4 = 0.0;
                                       local_bf0 = 0.0;
                                       local_be8 = 0.0;
                                       fStack_be4 = 0.0;
                                       lVar59 = *(long*)( lVar66 + 0x38 );
                                       local_be0 = 0.0;
                                       fVar83 = fVar89 * ( fVar96 - fVar108 ) + fVar108;
                                       fVar103 = *(float*)( param_2 + 0x34 ) * fVar83;
                                       fVar89 = *(float*)( param_2 + 0x30 ) * fVar83;
                                       fVar101 = *(float*)( param_2 + 0x38 ) * fVar83;
                                       local_a08 = fVar89 * fVar93 + fVar103 * fVar99 + fVar101 * fVar107;
                                       uStack_a10 = CONCAT44(fVar103 * fVar82 + fVar89 * fVar106 + fVar101 * fVar87, fVar103 * fVar104 + fVar89 * fVar88 + fVar101 * fVar105);
                                       local_c20 = uVar84;
                                       local_c18 = fVar91;
                                       if (lVar59 == 0) goto LAB_00106822;
                                       lVar72 = *(long*)( lVar59 + -8 );
                                       if (lVar72 <= (long)uVar63) goto LAB_00106181;
                                       cVar54 = GodotCollisionSolver3D::solve_distance((GodotShape3D*)&local_a78, (Transform3D*)&local_b58, *(GodotShape3D**)( lVar59 + 0x80 + lVar71 ), (Transform3D*)&local_af8, (Vector3*)&local_bf8, (Vector3*)&local_be8, (AABB*)local_b88, (Vector3*)&local_c20);
                                       fVar89 = _LC35;
                                       if (cVar54 == '\0') {
                                          fVar96 = fVar83;
                                          if (iVar56 == 0) {
                                             LAB_001067bd:iVar56 = 1;
                                             goto LAB_00106559;
                                          }

                                          if (fVar108 <= 0.0) {
                                             fVar89 = _LC36;
                                          }

                                       }
 else {
                                          local_c14 = CONCAT44(fStack_bf4, local_bf8);
                                          local_c0c = local_bf0;
                                          local_c08 = CONCAT44(fStack_be4, local_be8);
                                          local_c00 = local_be0;
                                          fVar108 = fVar83;
                                          if (iVar56 == 0) goto LAB_001067bd;
                                          if (_LC34 <= fVar96) {
                                             fVar89 = _LC37;
                                          }

                                       }

                                       iVar56 = iVar56 + 1;
                                    }
 while ( iVar56 != 8 );
                                    fVar89 = fVar108;
                                    if (local_cd8 <= fVar108) {
                                       fVar89 = local_cd8;
                                    }

                                    fVar81 = (float)( ~-(uint)(fVar108 < local_cd8) & (uint)fVar81 | (uint)fVar96 & -(uint)(fVar108 < local_cd8) );
                                    local_cd8 = fVar89;
                                 }

                                 LAB_00105e12:local_d90 = local_d90 + 4;
                              }
 while ( (long)iVar55 << 2 != local_d90 );
                              if (local_cd8 != _LC34) {
                                 local_d98._0_4_ = uVar57;
                                 if (fVar92 <= local_cd8) {
                                    local_cd8 = fVar92;
                                    local_d98._0_4_ = uVar73;
                                    fVar81 = local_d80;
                                 }

                                 local_d80 = fVar81;
                                 local_a78 = &PTR_get_volume_0010b398;
                                 GodotShape3D::~GodotShape3D((GodotShape3D*)&local_a78);
                                 fVar92 = local_cd8;
                                 uVar73 = (uint)local_d98;
                                 goto LAB_00105ec4;
                              }

                           }

                           local_a78 = &PTR_get_volume_0010b398;
                           GodotShape3D::~GodotShape3D((GodotShape3D*)&local_a78);
                           lVar66 = *(long*)( param_1 + 0x38 );
                        }

                     }

                     local_d70 = local_d70 + 0x90;
                     uVar67 = uVar67 + 1;
                  }
 while ( lVar66 != 0 );
                  uVar57 = uVar73;
                  if (( param_2[0x98] == (MotionParameters)0x0 ) || ( !bVar52 )) {
                     if (_LC34 <= fVar92) goto LAB_0010699a;
                  }
 else if (_LC34 <= fVar92) goto LAB_0010691d;
                  LAB_00105f32:local_d98 = (ulong)uVar57;
                  LAB_00105f35:uVar84 = *(undefined8*)( param_2 + 0x30 );
                  fVar91 = *(float*)( param_2 + 0x38 );
                  puVar58 = &local_bb8;
                  pTVar62 = (Transform3D*)local_b88;
                  for (lVar66 = 0xc; lVar66 != 0; lVar66 = lVar66 + -1) {
                     *(undefined4*)pTVar62 = *(undefined4*)puVar58;
                     puVar58 = (undefined8*)( (long)puVar58 + (ulong)bVar80 * -8 + 4 );
                     pTVar62 = pTVar62 + (ulong)bVar80 * -8 + 4;
                  }

                  fVar81 = (float)uVar84 * local_d80;
                  fVar104 = (float)( (ulong)uVar84 >> 0x20 ) * local_d80;
                  local_b64 = CONCAT44((float)( (ulong)local_b64 >> 0x20 ) + fVar104, (float)local_b64 + fVar81);
                  local_b5c = local_b5c + fVar91 * local_d80;
                  pAVar61 = (AABB*)&local_a78;
                  do {
                     *(undefined8*)pAVar61 = 0;
                     pAVar64 = pAVar61 + 0x30;
                     *(undefined8*)( pAVar61 + 8 ) = 0;
                     *(undefined8*)( pAVar61 + 0x10 ) = 0;
                     *(undefined4*)( pAVar61 + 0x18 ) = 0;
                     *(undefined8*)( pAVar61 + 0x1c ) = 0;
                     *(undefined4*)( pAVar61 + 0x24 ) = 0;
                     *(undefined4*)( pAVar61 + 0x28 ) = 0;
                     pAVar61 = pAVar64;
                  }
 while ( local_478 != pAVar64 );
                  local_af8 = 0;
                  local_af0 = 0.0;
                  iStack_aec = 0;
                  local_ae0 = 0;
                  local_ad8 = 0;
                  local_ad0 = 0;
                  local_ac8 = 0;
                  local_ac4 = 0;
                  local_abc = 0;
                  local_ab8 = 0;
                  local_ab0 = 0;
                  local_aa8 = (AABB*)0x0;
                  if (1 < (int)*(uint*)( param_2 + 0x40 )) {
                     local_ab0 = ( ulong ) * (uint*)( param_2 + 0x40 );
                     local_aa8 = (AABB*)&local_a78;
                  }

                  fStack_bd0 = fVar91 * local_d80 + fStack_bd0;
                  local_bd8 = (undefined**)CONCAT44((float)( (ulong)local_bd8 >> 0x20 ) + fVar104, SUB84(local_bd8, 0) + fVar81);
                  fStack_ae8 = fVar86;
                  if (fVar98 <= fVar86) {
                     fStack_ae8 = fVar98;
                  }

                  iVar55 = _cull_aabb_for_body(this, param_1, (AABB*)&local_bd8);
                  if ((uint)local_d98 == -1) {
                     if (*(long*)( param_1 + 0x38 ) == 0) {
                        iVar56 = 0;
                     }
 else {
                        iVar56 = (int)*(undefined8*)( *(long*)( param_1 + 0x38 ) + -8 );
                     }

                     local_d98 = 0;
                  }
 else {
                     iVar56 = (uint)local_d98 + 1;
                  }

                  uVar67 = (ulong)(int)(uint)local_d98;
                  while ((int)(uint)local_d98 < iVar56) {
                     lVar66 = *(long*)( param_1 + 0x38 );
                     if ((int)(uint)local_d98 < 0) {
                        if (lVar66 == 0) {
                           lVar66 = 0;
                        }
 else {
                           lVar66 = *(long*)( lVar66 + -8 );
                        }

                        _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, uVar67, lVar66, "p_idx", "shapes.size()", "", false, false);
                        lVar66 = *(long*)( param_1 + 0x38 );
                        if (lVar66 == 0) {
                           LAB_00106e37:lVar66 = 0;
                        }
 else {
                           LAB_00106dbe:lVar66 = *(long*)( lVar66 + -8 );
                        }

                        goto LAB_001057c1;
                     }

                     if (lVar66 == 0) {
                        lVar66 = 0;
                        LAB_00106e01:_err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, uVar67, lVar66, "p_idx", "shapes.size()", "", false, false);
                        lVar66 = *(long*)( param_1 + 0x38 );
                        if (lVar66 == 0) goto LAB_00106e37;
                        LAB_00106a27:if (*(long*)( lVar66 + -8 ) <= (long)uVar67) goto LAB_00106dbe;
                        Transform3D::operator *((Transform3D*)&local_b58, (Transform3D*)local_b88);
                        lVar66 = *(long*)( param_1 + 0x38 );
                        if (lVar66 == 0) goto LAB_001061cd;
                        lVar72 = *(long*)( lVar66 + -8 );
                        uVar63 = uVar67;
                        if (lVar72 <= (long)uVar67) goto LAB_00106181;
                        pGVar3 = *(GodotShape3D**)( lVar66 + 0x80 + uVar67 * 0x90 );
                        for (lVar66 = 0; (int)lVar66 < iVar55; lVar66 = lVar66 + 1) {
                           lVar59 = *(long*)( this + lVar66 * 8 + 0xe8 );
                           if (( *(long*)( param_2 + 0x48 ) != 0 ) && ( *(int*)( param_2 + 0x6c ) != 0 )) {
                              uVar76 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 ));
                              lVar72 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x68 ) * 8 );
                              uVar63 = *(long*)( lVar59 + 0x10 ) * 0x3ffff - 1;
                              uVar63 = ( uVar63 ^ uVar63 >> 0x1f ) * 0x15;
                              uVar63 = ( uVar63 ^ uVar63 >> 0xb ) * 0x41;
                              uVar57 = (uint)uVar63 ^ ( uint )(uVar63 >> 0x16);
                              uVar73 = 1;
                              if (uVar57 != 0) {
                                 uVar73 = uVar57;
                              }

                              auVar20._8_8_ = 0;
                              auVar20._0_8_ = (ulong)uVar73 * lVar72;
                              auVar43._8_8_ = 0;
                              auVar43._0_8_ = uVar76;
                              lVar71 = SUB168(auVar20 * auVar43, 8);
                              uVar57 = *(uint*)( *(long*)( param_2 + 0x60 ) + lVar71 * 4 );
                              iVar70 = SUB164(auVar20 * auVar43, 8);
                              if (uVar57 != 0) {
                                 uVar77 = 0;
                                 do {
                                    if (( uVar57 == uVar73 ) && ( *(long*)( lVar59 + 0x10 ) == *(long*)( *(long*)( param_2 + 0x48 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0x50 ) + lVar71 * 4 ) * 8 ) )) goto LAB_00106ba3;
                                    uVar77 = uVar77 + 1;
                                    auVar21._8_8_ = 0;
                                    auVar21._0_8_ = ( ulong )(iVar70 + 1) * lVar72;
                                    auVar44._8_8_ = 0;
                                    auVar44._0_8_ = uVar76;
                                    lVar71 = SUB168(auVar21 * auVar44, 8);
                                    uVar57 = *(uint*)( *(long*)( param_2 + 0x60 ) + lVar71 * 4 );
                                    iVar70 = SUB164(auVar21 * auVar44, 8);
                                 }
 while ( ( uVar57 != 0 ) && ( auVar22._8_8_ = 0 ),auVar22._0_8_ = (ulong)uVar57 * lVar72,auVar45._8_8_ = 0,auVar45._0_8_ = uVar76,auVar23._8_8_ = 0,auVar23._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 ) + iVar70 ) - SUB164(auVar22 * auVar45, 8)) * lVar72,auVar46._8_8_ = 0,auVar46._0_8_ = uVar76,uVar77 <= SUB164(auVar23 * auVar46, 8) );
                              }

                           }

                           if (( *(long*)( param_2 + 0x70 ) != 0 ) && ( *(int*)( param_2 + 0x94 ) != 0 )) {
                              lVar72 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x90 ) * 8 );
                              uVar76 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x90 ) * 4 ));
                              uVar63 = *(long*)( lVar59 + 0x18 ) * 0x3ffff - 1;
                              uVar63 = ( uVar63 ^ uVar63 >> 0x1f ) * 0x15;
                              uVar63 = ( uVar63 ^ uVar63 >> 0xb ) * 0x41;
                              uVar57 = (uint)uVar63 ^ ( uint )(uVar63 >> 0x16);
                              uVar73 = 1;
                              if (uVar57 != 0) {
                                 uVar73 = uVar57;
                              }

                              auVar24._8_8_ = 0;
                              auVar24._0_8_ = (ulong)uVar73 * lVar72;
                              auVar47._8_8_ = 0;
                              auVar47._0_8_ = uVar76;
                              lVar71 = SUB168(auVar24 * auVar47, 8);
                              uVar57 = *(uint*)( *(long*)( param_2 + 0x88 ) + lVar71 * 4 );
                              iVar70 = SUB164(auVar24 * auVar47, 8);
                              if (uVar57 != 0) {
                                 uVar77 = 0;
                                 do {
                                    if (( uVar57 == uVar73 ) && ( *(long*)( lVar59 + 0x18 ) == *(long*)( *(long*)( param_2 + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0x78 ) + lVar71 * 4 ) * 8 ) )) goto LAB_00106ba3;
                                    uVar77 = uVar77 + 1;
                                    auVar25._8_8_ = 0;
                                    auVar25._0_8_ = ( ulong )(iVar70 + 1) * lVar72;
                                    auVar48._8_8_ = 0;
                                    auVar48._0_8_ = uVar76;
                                    lVar71 = SUB168(auVar25 * auVar48, 8);
                                    uVar57 = *(uint*)( *(long*)( param_2 + 0x88 ) + lVar71 * 4 );
                                    iVar70 = SUB164(auVar25 * auVar48, 8);
                                 }
 while ( ( uVar57 != 0 ) && ( auVar26._8_8_ = 0 ),auVar26._0_8_ = (ulong)uVar57 * lVar72,auVar49._8_8_ = 0,auVar49._0_8_ = uVar76,auVar27._8_8_ = 0,auVar27._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x90 ) * 4 ) + iVar70 ) - SUB164(auVar26 * auVar49, 8)) * lVar72,auVar50._8_8_ = 0,auVar50._0_8_ = uVar76,uVar77 <= SUB164(auVar27 * auVar50, 8) );
                              }

                           }

                           lVar72 = *(long*)( lVar59 + 0x38 );
                           iStack_aec = *(int*)( this + lVar66 * 4 + 0x40e8 );
                           uVar63 = (ulong)iStack_aec;
                           local_af0 = (float)(uint)local_d98;
                           local_af8 = lVar59;
                           if (iStack_aec < 0) goto LAB_0010578a;
                           if (lVar72 == 0) goto LAB_00106158;
                           if (*(long*)( lVar72 + -8 ) <= (long)uVar63) goto LAB_00105793;
                           Transform3D::operator *((Transform3D*)&local_b28, (Transform3D*)( lVar59 + 0x48 ));
                           lVar59 = *(long*)( lVar59 + 0x38 );
                           if (lVar59 == 0) goto LAB_00106160;
                           lVar72 = *(long*)( lVar59 + -8 );
                           if (lVar72 <= (long)uVar63) goto LAB_00106181;
                           GodotCollisionSolver3D::solve_static(pGVar3, (Transform3D*)&local_b58, *(GodotShape3D**)( lVar59 + 0x80 + uVar63 * 0x90 ), (Transform3D*)&local_b28, _rest_cbk_result, (Transform3D*)&local_af8, (Vector3*)0x0, local_d54, 0.0);
                           LAB_00106ba3:;
                        }

                     }
 else {
                        if (*(long*)( lVar66 + -8 ) <= (long)uVar67) {
                           lVar66 = *(long*)( lVar66 + -8 );
                           goto LAB_00106e01;
                        }

                        if (*(char*)( lVar66 + 0x88 + uVar67 * 0x90 ) == '\0') goto LAB_00106a27;
                     }

                     uVar67 = uVar67 + 1;
                     local_d98 = ( ulong )((uint)local_d98 + 1);
                  }
;
                  if (local_ab0._4_4_ < 1) goto LAB_0010699a;
                  if (param_3 != (MotionResult*)0x0) {
                     iVar55 = 0;
                     pAVar61 = local_aa8 + -0x30;
                     pMVar65 = param_3 + 0x28;
                     pAVar64 = (AABB*)&local_ae0;
                     do {
                        lVar66 = *(long*)pAVar64;
                        iVar55 = iVar55 + 1;
                        pAVar61 = pAVar61 + 0x30;
                        uVar84 = *(undefined8*)( lVar66 + 0x10 );
                        uVar102 = *(undefined8*)( lVar66 + 0x18 );
                        *(undefined4*)( pMVar65 + 0x48 ) = *(undefined4*)( pAVar64 + 0xc );
                        uVar2 = *(undefined4*)( pAVar64 + 8 );
                        *(undefined8*)( pMVar65 + 0x38 ) = uVar102;
                        *(undefined8*)( pMVar65 + 0x40 ) = uVar84;
                        uVar1 = *(undefined4*)( pAVar64 + 0x28 );
                        *(undefined4*)( pMVar65 + 0x34 ) = uVar2;
                        *(undefined8*)( pMVar65 + 0xc ) = *(undefined8*)( pAVar64 + 0x1c );
                        *(undefined4*)( pMVar65 + 0x14 ) = *(undefined4*)( pAVar64 + 0x24 );
                        *(undefined8*)pMVar65 = *(undefined8*)( pAVar64 + 0x10 );
                        uVar2 = *(undefined4*)( pAVar64 + 0x18 );
                        *(undefined4*)( pMVar65 + 0x30 ) = uVar1;
                        *(undefined4*)( pMVar65 + 8 ) = uVar2;
                        local_be8 = (float)*(undefined8*)( lVar66 + 0x1f8 );
                        fStack_be4 = (float)( ( ulong ) * (undefined8*)( lVar66 + 0x1f8 ) >> 0x20 );
                        local_be0 = *(float*)( lVar66 + 0x200 );
                        uVar84 = *(undefined8*)( lVar66 + 0x70 );
                        uVar102 = *(undefined8*)( pAVar64 + 0x14 );
                        fVar86 = (float)uVar102 - ( fStack_be4 + (float)uVar84 );
                        fVar91 = *(float*)( pAVar64 + 0x18 );
                        fVar98 = *(float*)( lVar66 + 0x74 );
                        local_bf8 = (float)*(undefined8*)( lVar66 + 0xe4 );
                        fStack_bf4 = (float)( ( ulong ) * (undefined8*)( lVar66 + 0xe4 ) >> 0x20 );
                        local_bf0 = *(float*)( lVar66 + 0xec );
                        local_c08 = *(undefined8*)( lVar66 + 0xd8 );
                        fVar81 = *(float*)( pAVar64 + 0x10 ) - ( local_be8 + *(float*)( lVar66 + 0x6c ) );
                        local_c00 = *(float*)( lVar66 + 0xe0 );
                        local_b28 = *(undefined8*)( lVar66 + 0xe4 );
                        local_b20 = *(float*)( lVar66 + 0xec );
                        *(undefined8*)( pMVar65 + 0x24 ) = local_b28;
                        *(float*)( pMVar65 + 0x2c ) = local_b20;
                        local_b58 = local_b28;
                        local_b50 = local_b20;
                        *(float*)( pMVar65 + 0x20 ) = ( fVar86 * local_bf8 - fVar81 * fStack_bf4 ) + local_c00;
                        *(ulong*)( pMVar65 + 0x18 ) = CONCAT44((float)( (ulong)local_c08 >> 0x20 ) + ( fVar81 * local_bf0 - local_bf8 * ( (float)( (ulong)uVar102 >> 0x20 ) - ( local_be0 + (float)( (ulong)uVar84 >> 0x20 ) ) ) ), (float)local_c08 + ( ( fVar91 - ( local_be0 + fVar98 ) ) * fStack_bf4 - local_bf0 * fVar86 ));
                        pMVar65 = pMVar65 + 0x50;
                        pAVar64 = pAVar61;
                     }
 while ( local_ab0._4_4_ != iVar55 );
                     fVar91 = *(float*)( param_2 + 0x38 );
                     fVar98 = *(float*)( param_2 + 0x34 );
                     fVar86 = *(float*)( param_2 + 0x30 );
                     *(float*)( param_3 + 8 ) = fVar91 * fVar92;
                     *(float*)( param_3 + 4 ) = fVar98 * fVar92;
                     *(float*)param_3 = fVar86 * fVar92;
                     uVar84 = *(undefined8*)( param_2 + 0x34 );
                     *(float*)( param_3 + 0xc ) = *(float*)( param_2 + 0x30 ) - *(float*)( param_2 + 0x30 ) * fVar92;
                     fVar81 = (float)uVar84;
                     fVar104 = (float)( (ulong)uVar84 >> 0x20 );
                     *(ulong*)( param_3 + 0x10 ) = CONCAT44(fVar104 - fVar92 * fVar104, fVar81 - fVar92 * fVar81);
                     fVar81 = *(float*)( param_2 + 0x28 );
                     fVar104 = *(float*)( param_2 + 0x2c );
                     fVar105 = *(float*)( param_2 + 0x24 );
                     *(int*)( param_3 + 0xa28 ) = local_ab0._4_4_;
                     *(float*)( param_3 + 0x1c ) = fVar92;
                     *(float*)( param_3 + 0x20 ) = local_d80;
                     *(float*)( param_3 + 4 ) = ( uStack_b94._4_4_ - fVar81 ) + fVar98 * fVar92;
                     *(float*)( param_3 + 8 ) = ( fStack_b8c - fVar104 ) + fVar91 * fVar92;
                     *(float*)param_3 = ( (float)uStack_b94 - fVar105 ) + fVar86 * fVar92;
                     *(undefined4*)( param_3 + 0x18 ) = local_ab8;
                  }

               }

               if (( local_d35 != '\0' ) || ( param_3 == (MotionResult*)0x0 )) goto LAB_00104b25;
               *(undefined8*)param_3 = *(undefined8*)( param_2 + 0x30 );
               uVar1 = *(undefined4*)( param_2 + 0x38 );
               *(undefined4*)( param_3 + 0x14 ) = 0;
               *(undefined4*)( param_3 + 8 ) = uVar1;
               *(undefined8*)( param_3 + 0xc ) = 0;
               uVar84 = *(undefined8*)( param_2 + 0x24 );
               fVar91 = *(float*)( param_2 + 0x2c );
               *(undefined4*)( param_3 + 0x20 ) = 0x3f800000;
               uVar102 = _LC57;
               *(float*)( param_3 + 8 ) = ( fStack_b8c - fVar91 ) + *(float*)( param_3 + 8 );
               *(undefined8*)( param_3 + 0x18 ) = uVar102;
               *(ulong*)param_3 = CONCAT44(( SUB164(_local_b98, 8) - (float)( (ulong)uVar84 >> 0x20 ) ) + (float)( ( ulong ) * (undefined8*)param_3 >> 0x20 ), ( SUB164(_local_b98, 4) - (float)uVar84 ) + (float)*(undefined8*)param_3);
               goto LAB_00104b20;
            }

            if (param_3 == (MotionResult*)0x0) goto LAB_00104b20;
         }

         *(undefined8*)param_3 = *(undefined8*)( param_2 + 0x30 );
         *(undefined4*)( param_3 + 8 ) = *(undefined4*)( param_2 + 0x38 );
      }

   }
 else {
      _err_print_error("test_body_motion", "modules/godot_physics_3d/godot_space_3d.cpp", 0x294, "Condition \"p_parameters.max_collisions < 0 || p_parameters.max_collisions > PhysicsServer3D::MotionResult::MAX_COLLISIONS\" is true. Returning: false", 0, 0);
   }

   LAB_00104b20:local_d35 = '\0';
   LAB_00104b25:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_d35;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001061cd:lVar72 = 0;
   uVar63 = uVar67;
   goto LAB_00106181;
   LAB_0010578a:if (lVar72 == 0) {
      LAB_00106158:uVar67 = uVar63;
      lVar66 = 0;
   }
 else {
      LAB_00105793:uVar67 = uVar63;
      lVar66 = *(long*)( lVar72 + -8 );
   }

   LAB_001057c1:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, uVar67, lVar66, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar51 = (code*)invalidInstructionException();
   ( *pcVar51 )();
   LAB_00106160:lVar72 = 0;
   LAB_00106181:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, uVar63, lVar72, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar51 = (code*)invalidInstructionException();
   ( *pcVar51 )();
}
/* GodotSpace3D::get_active_body_list() const */GodotSpace3D * __thiscall GodotSpace3D::get_active_body_list(GodotSpace3D *this){
   return this + 0x40;
}
/* GodotSpace3D::body_add_to_active_list(SelfList<GodotBody3D>*) */void GodotSpace3D::body_add_to_active_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   if (*(long*)param_1 != 0) {
      _err_print_error(&_LC60, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      return;
   }

   *(GodotSpace3D**)param_1 = this + 0x40;
   lVar1 = *(long*)( this + 0x40 );
   *(undefined8*)( param_1 + 0x18 ) = 0;
   *(long*)( param_1 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(SelfList**)( lVar1 + 0x18 ) = param_1;
      *(SelfList**)( this + 0x40 ) = param_1;
      return;
   }

   *(SelfList**)( this + 0x48 ) = param_1;
   *(SelfList**)( this + 0x40 ) = param_1;
   return;
}
/* GodotSpace3D::body_remove_from_active_list(SelfList<GodotBody3D>*) */void GodotSpace3D::body_remove_from_active_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   long lVar2;
   SelfList *pSVar3;
   if (*(GodotSpace3D**)param_1 != this + 0x40) {
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

   if (param_1 == *(SelfList**)( this + 0x40 )) {
      *(undefined8*)( this + 0x40 ) = *(undefined8*)( param_1 + 0x10 );
      pSVar3 = *(SelfList**)( this + 0x48 );
   }
 else {
      pSVar3 = *(SelfList**)( this + 0x48 );
   }

   if (param_1 != pSVar3) {
      *(undefined8*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   *(long*)( this + 0x48 ) = lVar2;
   *(undefined8*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* GodotSpace3D::body_add_to_mass_properties_update_list(SelfList<GodotBody3D>*) */void GodotSpace3D::body_add_to_mass_properties_update_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   if (*(long*)param_1 != 0) {
      _err_print_error(&_LC60, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      return;
   }

   *(GodotSpace3D**)param_1 = this + 0x50;
   lVar1 = *(long*)( this + 0x50 );
   *(undefined8*)( param_1 + 0x18 ) = 0;
   *(long*)( param_1 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(SelfList**)( lVar1 + 0x18 ) = param_1;
      *(SelfList**)( this + 0x50 ) = param_1;
      return;
   }

   *(SelfList**)( this + 0x58 ) = param_1;
   *(SelfList**)( this + 0x50 ) = param_1;
   return;
}
/* GodotSpace3D::body_remove_from_mass_properties_update_list(SelfList<GodotBody3D>*) */void GodotSpace3D::body_remove_from_mass_properties_update_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   long lVar2;
   SelfList *pSVar3;
   if (*(GodotSpace3D**)param_1 != this + 0x50) {
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

   if (param_1 == *(SelfList**)( this + 0x50 )) {
      *(undefined8*)( this + 0x50 ) = *(undefined8*)( param_1 + 0x10 );
      pSVar3 = *(SelfList**)( this + 0x58 );
   }
 else {
      pSVar3 = *(SelfList**)( this + 0x58 );
   }

   if (param_1 != pSVar3) {
      *(undefined8*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   *(long*)( this + 0x58 ) = lVar2;
   *(undefined8*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* GodotSpace3D::get_broadphase() */undefined8 GodotSpace3D::get_broadphase(GodotSpace3D *this) {
   return *(undefined8*)( this + 0x38 );
}
/* GodotSpace3D::remove_object(GodotCollisionObject3D*) */ulong GodotSpace3D::remove_object(GodotSpace3D *this, GodotCollisionObject3D *param_1) {
   uint *puVar1;
   uint *puVar2;
   undefined4 *puVar3;
   undefined4 *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
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
   uint uVar36;
   ulong uVar37;
   int iVar39;
   uint uVar40;
   uint uVar41;
   long lVar42;
   ulong uVar43;
   ulong uVar44;
   uint *puVar45;
   ulong uVar46;
   uint uVar47;
   uint uVar48;
   long lVar49;
   uint *puVar50;
   uint *puVar51;
   ulong uVar38;
   lVar6 = *(long*)( this + 0xa0 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0xc4 ) != 0 )) {
      lVar7 = *(long*)( this + 0xb8 );
      uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xc0 ) * 4 );
      uVar38 = CONCAT44(0, uVar36);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xc0 ) * 8 );
      uVar37 = (long)param_1 * 0x3ffff - 1;
      uVar37 = ( uVar37 ^ uVar37 >> 0x1f ) * 0x15;
      uVar37 = ( uVar37 ^ uVar37 >> 0xb ) * 0x41;
      uVar37 = uVar37 >> 0x16 ^ uVar37;
      uVar44 = uVar37 & 0xffffffff;
      if ((int)uVar37 == 0) {
         uVar44 = 1;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar44 * lVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar38;
      uVar37 = SUB168(auVar10 * auVar23, 8);
      uVar47 = *(uint*)( lVar7 + uVar37 * 4 );
      uVar46 = (ulong)uVar47;
      lVar49 = uVar37 * 4;
      if (uVar47 != 0) {
         uVar48 = 0;
         iVar39 = SUB164(auVar10 * auVar23, 8);
         lVar42 = lVar49;
         do {
            if (( (uint)uVar44 == (uint)uVar46 ) && ( lVar9 = *(long*)( this + 0xa8 ) * (GodotCollisionObject3D**)( lVar6 + ( ulong ) * (uint*)( lVar9 + lVar42 ) * 8 ) == param_1 )) {
               uVar48 = 0;
               while (true) {
                  if ((uint)uVar44 == uVar47) {
                     uVar47 = *(uint*)( lVar9 + lVar49 );
                     uVar37 = (ulong)uVar47;
                     if (*(GodotCollisionObject3D**)( lVar6 + uVar37 * 8 ) == param_1) {
                        lVar42 = *(long*)( this + 0xb0 );
                        puVar2 = (uint*)( lVar42 + uVar37 * 4 );
                        uVar48 = *puVar2;
                        uVar44 = (ulong)uVar48;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = ( ulong )(uVar48 + 1) * lVar8;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar38;
                        lVar49 = SUB168(auVar17 * auVar30, 8) * 4;
                        uVar41 = SUB164(auVar17 * auVar30, 8);
                        uVar46 = (ulong)uVar41;
                        puVar45 = (uint*)( lVar7 + lVar49 );
                        if (( *puVar45 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar45 * lVar8,auVar31._8_8_ = 0,auVar31._0_8_ = uVar38,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar36 + uVar41 ) - SUB164(auVar18 * auVar31, 8)) * lVar8,auVar32._8_8_ = 0,auVar32._0_8_ = uVar38,SUB164(auVar19 * auVar32, 8) == 0) {
                           uVar46 = (ulong)uVar48;
                        }
 else {
                           while (true) {
                              puVar50 = (uint*)( lVar49 + lVar9 );
                              puVar1 = (uint*)( lVar9 + uVar44 * 4 );
                              puVar51 = (uint*)( uVar44 * 4 + lVar7 );
                              puVar3 = (undefined4*)( lVar42 + ( ulong ) * puVar50 * 4 );
                              puVar4 = (undefined4*)( lVar42 + ( ulong ) * puVar1 * 4 );
                              uVar5 = *puVar4;
                              *puVar4 = *puVar3;
                              *puVar3 = uVar5;
                              uVar48 = *puVar45;
                              *puVar45 = *puVar51;
                              *puVar51 = uVar48;
                              uVar48 = *puVar50;
                              *puVar50 = *puVar1;
                              *puVar1 = uVar48;
                              auVar22._8_8_ = 0;
                              auVar22._0_8_ = ( ulong )((int)uVar46 + 1) * lVar8;
                              auVar35._8_8_ = 0;
                              auVar35._0_8_ = uVar38;
                              uVar43 = SUB168(auVar22 * auVar35, 8);
                              lVar49 = uVar43 * 4;
                              puVar45 = (uint*)( lVar7 + lVar49 );
                              if (( *puVar45 == 0 ) || ( auVar20._8_8_ = 0 ),auVar20._0_8_ = ( ulong ) * puVar45 * lVar8,auVar33._8_8_ = 0,auVar33._0_8_ = uVar38,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( SUB164(auVar22 * auVar35, 8) + uVar36 ) - SUB164(auVar20 * auVar33, 8)) * lVar8,auVar34._8_8_ = 0,auVar34._0_8_ = uVar38,SUB164(auVar21 * auVar34, 8) == 0) break;
                              uVar44 = uVar46;
                              uVar46 = uVar43 & 0xffffffff;
                           }
;
                        }

                        *(undefined4*)( lVar7 + uVar46 * 4 ) = 0;
                        uVar36 = *(int*)( this + 0xc4 ) - 1;
                        uVar38 = (ulong)uVar36;
                        *(uint*)( this + 0xc4 ) = uVar36;
                        if (uVar47 < uVar36) {
                           uVar36 = *(uint*)( lVar42 + uVar38 * 4 );
                           *(undefined8*)( lVar6 + uVar37 * 8 ) = *(undefined8*)( lVar6 + uVar38 * 8 );
                           *puVar2 = uVar36;
                           uVar38 = ( ulong ) * (uint*)( lVar42 + ( ulong ) * (uint*)( this + 0xc4 ) * 4 );
                           *(uint*)( lVar9 + uVar38 * 4 ) = uVar47;
                        }

                        return uVar38;
                     }

                  }

                  uVar48 = uVar48 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(iVar39 + 1) * lVar8;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar38;
                  auVar14 = auVar14 * auVar27;
                  uVar47 = *(uint*)( lVar7 + auVar14._8_8_ * 4 );
                  iVar39 = auVar14._8_4_;
                  lVar49 = auVar14._8_8_ * 4;
                  if (uVar47 == 0) break;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = (ulong)uVar47 * lVar8;
                  auVar28._8_8_ = 0;
                  auVar28._0_8_ = uVar38;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = ( ulong )(( uVar36 + iVar39 ) - SUB164(auVar15 * auVar28, 8)) * lVar8;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar38;
                  if (SUB164(auVar16 * auVar29, 8) < uVar48) {
                     return SUB168(auVar16 * auVar29, 0);
                  }

               }
;
               return auVar14._0_8_;
            }

            uVar48 = uVar48 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )((int)uVar37 + 1) * lVar8;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            lVar42 = SUB168(auVar11 * auVar24, 8);
            uVar41 = *(uint*)( lVar7 + lVar42 * 4 );
            uVar46 = (ulong)uVar41;
            uVar40 = SUB164(auVar11 * auVar24, 8);
            uVar37 = (ulong)uVar40;
            lVar42 = lVar42 * 4;
         }
 while ( ( uVar41 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar46 * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar38,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar36 + uVar40 ) - SUB164(auVar12 * auVar25, 8)) * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar38,uVar48 <= SUB164(auVar13 * auVar26, 8) );
      }

   }

   uVar37 = _err_print_error("remove_object", "modules/godot_physics_3d/godot_space_3d.cpp", 0x45e, "Condition \"!objects.has(p_object)\" is true.", 0, 0);
   return uVar37;
}
/* GodotSpace3D::get_objects() const */GodotSpace3D * __thiscall GodotSpace3D::get_objects(GodotSpace3D *this){
   return this + 0xa0;
}
/* GodotSpace3D::body_add_to_state_query_list(SelfList<GodotBody3D>*) */void GodotSpace3D::body_add_to_state_query_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   if (*(long*)param_1 != 0) {
      _err_print_error(&_LC60, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      return;
   }

   *(GodotSpace3D**)param_1 = this + 0x60;
   lVar1 = *(long*)( this + 0x60 );
   *(undefined8*)( param_1 + 0x18 ) = 0;
   *(long*)( param_1 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(SelfList**)( lVar1 + 0x18 ) = param_1;
      *(SelfList**)( this + 0x60 ) = param_1;
      return;
   }

   *(SelfList**)( this + 0x68 ) = param_1;
   *(SelfList**)( this + 0x60 ) = param_1;
   return;
}
/* GodotSpace3D::body_remove_from_state_query_list(SelfList<GodotBody3D>*) */void GodotSpace3D::body_remove_from_state_query_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   long lVar2;
   SelfList *pSVar3;
   if (*(GodotSpace3D**)param_1 != this + 0x60) {
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

   if (param_1 == *(SelfList**)( this + 0x60 )) {
      *(undefined8*)( this + 0x60 ) = *(undefined8*)( param_1 + 0x10 );
      pSVar3 = *(SelfList**)( this + 0x68 );
   }
 else {
      pSVar3 = *(SelfList**)( this + 0x68 );
   }

   if (param_1 != pSVar3) {
      *(undefined8*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   *(long*)( this + 0x68 ) = lVar2;
   *(undefined8*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* GodotSpace3D::area_add_to_monitor_query_list(SelfList<GodotArea3D>*) */void GodotSpace3D::area_add_to_monitor_query_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   if (*(long*)param_1 != 0) {
      _err_print_error(&_LC60, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      return;
   }

   *(GodotSpace3D**)param_1 = this + 0x70;
   lVar1 = *(long*)( this + 0x70 );
   *(undefined8*)( param_1 + 0x18 ) = 0;
   *(long*)( param_1 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(SelfList**)( lVar1 + 0x18 ) = param_1;
      *(SelfList**)( this + 0x70 ) = param_1;
      return;
   }

   *(SelfList**)( this + 0x78 ) = param_1;
   *(SelfList**)( this + 0x70 ) = param_1;
   return;
}
/* GodotSpace3D::area_remove_from_monitor_query_list(SelfList<GodotArea3D>*) */void GodotSpace3D::area_remove_from_monitor_query_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   long lVar2;
   SelfList *pSVar3;
   if (*(GodotSpace3D**)param_1 != this + 0x70) {
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

   if (param_1 == *(SelfList**)( this + 0x70 )) {
      *(undefined8*)( this + 0x70 ) = *(undefined8*)( param_1 + 0x10 );
      pSVar3 = *(SelfList**)( this + 0x78 );
   }
 else {
      pSVar3 = *(SelfList**)( this + 0x78 );
   }

   if (param_1 != pSVar3) {
      *(undefined8*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   *(long*)( this + 0x78 ) = lVar2;
   *(undefined8*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* GodotSpace3D::area_add_to_moved_list(SelfList<GodotArea3D>*) */void GodotSpace3D::area_add_to_moved_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   if (*(long*)param_1 != 0) {
      _err_print_error(&_LC60, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      return;
   }

   *(GodotSpace3D**)param_1 = this + 0x80;
   lVar1 = *(long*)( this + 0x80 );
   *(undefined8*)( param_1 + 0x18 ) = 0;
   *(long*)( param_1 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(SelfList**)( lVar1 + 0x18 ) = param_1;
      *(SelfList**)( this + 0x80 ) = param_1;
      return;
   }

   *(SelfList**)( this + 0x88 ) = param_1;
   *(SelfList**)( this + 0x80 ) = param_1;
   return;
}
/* GodotSpace3D::area_remove_from_moved_list(SelfList<GodotArea3D>*) */void GodotSpace3D::area_remove_from_moved_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   long lVar2;
   SelfList *pSVar3;
   if (*(GodotSpace3D**)param_1 != this + 0x80) {
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

   if (param_1 == *(SelfList**)( this + 0x80 )) {
      *(undefined8*)( this + 0x80 ) = *(undefined8*)( param_1 + 0x10 );
      pSVar3 = *(SelfList**)( this + 0x88 );
   }
 else {
      pSVar3 = *(SelfList**)( this + 0x88 );
   }

   if (param_1 != pSVar3) {
      *(undefined8*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   *(long*)( this + 0x88 ) = lVar2;
   *(undefined8*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* GodotSpace3D::get_moved_area_list() const */GodotSpace3D * __thiscall GodotSpace3D::get_moved_area_list(GodotSpace3D *this){
   return this + 0x80;
}
/* GodotSpace3D::get_active_soft_body_list() const */GodotSpace3D * __thiscall GodotSpace3D::get_active_soft_body_list(GodotSpace3D *this){
   return this + 0x90;
}
/* GodotSpace3D::soft_body_add_to_active_list(SelfList<GodotSoftBody3D>*) */void GodotSpace3D::soft_body_add_to_active_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   if (*(long*)param_1 != 0) {
      _err_print_error(&_LC60, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      return;
   }

   *(GodotSpace3D**)param_1 = this + 0x90;
   lVar1 = *(long*)( this + 0x90 );
   *(undefined8*)( param_1 + 0x18 ) = 0;
   *(long*)( param_1 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(SelfList**)( lVar1 + 0x18 ) = param_1;
      *(SelfList**)( this + 0x90 ) = param_1;
      return;
   }

   *(SelfList**)( this + 0x98 ) = param_1;
   *(SelfList**)( this + 0x90 ) = param_1;
   return;
}
/* GodotSpace3D::soft_body_remove_from_active_list(SelfList<GodotSoftBody3D>*) */void GodotSpace3D::soft_body_remove_from_active_list(GodotSpace3D *this, SelfList *param_1) {
   long lVar1;
   long lVar2;
   SelfList *pSVar3;
   if (*(GodotSpace3D**)param_1 != this + 0x90) {
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

   if (param_1 == *(SelfList**)( this + 0x90 )) {
      *(undefined8*)( this + 0x90 ) = *(undefined8*)( param_1 + 0x10 );
      pSVar3 = *(SelfList**)( this + 0x98 );
   }
 else {
      pSVar3 = *(SelfList**)( this + 0x98 );
   }

   if (param_1 != pSVar3) {
      *(undefined8*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   *(long*)( this + 0x98 ) = lVar2;
   *(undefined8*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* GodotSpace3D::call_queries() */void GodotSpace3D::call_queries(GodotSpace3D *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   plVar1 = *(long**)( this + 0x60 );
   while (plVar1 != (long*)0x0) {
      if ((GodotSpace3D*)*plVar1 == this + 0x60) {
         lVar3 = plVar1[2];
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x18 ) = plVar1[3];
         }

         lVar2 = plVar1[3];
         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar3;
            lVar3 = plVar1[2];
         }

         *(long*)( this + 0x60 ) = lVar3;
         if (*(long**)( this + 0x68 ) == plVar1) {
            *(long*)( this + 0x68 ) = lVar2;
         }

         *plVar1 = 0;
         *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
      }
 else {
         _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
      }

      GodotBody3D::call_queries();
      plVar1 = *(long**)( this + 0x60 );
   }
;
   plVar1 = *(long**)( this + 0x70 );
   while (plVar1 != (long*)0x0) {
      if ((GodotSpace3D*)*plVar1 == this + 0x70) {
         lVar3 = plVar1[2];
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x18 ) = plVar1[3];
         }

         lVar2 = plVar1[3];
         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar3;
            lVar3 = plVar1[2];
         }

         *(long*)( this + 0x70 ) = lVar3;
         if (plVar1 == *(long**)( this + 0x78 )) {
            *(long*)( this + 0x78 ) = lVar2;
         }

         *plVar1 = 0;
         *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
      }
 else {
         _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
      }

      GodotArea3D::call_queries();
      plVar1 = *(long**)( this + 0x70 );
   }
;
   return;
}
/* GodotSpace3D::setup() */void GodotSpace3D::setup(GodotSpace3D *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   *(undefined4*)( this + 0x6120 ) = 0;
   if (*(long*)( this + 0x50 ) != 0) {
      do {
         GodotBody3D::update_mass_properties();
         plVar1 = *(long**)( this + 0x50 );
         if ((GodotSpace3D*)*plVar1 == this + 0x50) {
            lVar3 = plVar1[2];
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x18 ) = plVar1[3];
            }

            lVar2 = plVar1[3];
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar3;
               lVar3 = plVar1[2];
            }

            *(long*)( this + 0x50 ) = lVar3;
            if (plVar1 == *(long**)( this + 0x58 )) {
               *(long*)( this + 0x58 ) = lVar2;
            }

            *plVar1 = 0;
            *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
         }
 else {
            _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
            lVar3 = *(long*)( this + 0x50 );
         }

      }
 while ( lVar3 != 0 );
      return;
   }

   return;
}
/* GodotSpace3D::update() */void GodotSpace3D::update(GodotSpace3D *this) {
   /* WARNING: Could not recover jumptable at 0x00107eab. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)( this + 0x38 ) + 0x60 ) )();
   return;
}
/* GodotSpace3D::set_param(PhysicsServer3D::SpaceParameter, float) */void GodotSpace3D::set_param(float param_1, GodotSpace3D *this, undefined4 param_3) {
   switch (param_3) {
      case 0:
    *(float *)(this + 0xd4) = param_1;
    return;
      case 1:
    *(float *)(this + 0xd8) = param_1;
    return;
      case 2:
    *(float *)(this + 0xdc) = param_1;
    return;
      case 3:
    *(float *)(this + 0xe0) = param_1;
    return;
      case 4:
    *(float *)(this + 0x60e8) = param_1;
    return;
      case 5:
    *(float *)(this + 0x60ec) = param_1;
    return;
      case 6:
    *(float *)(this + 0x60f0) = param_1;
    return;
      case 7:
    *(int *)(this + 0xd0) = (int)param_1;
   }

   return;
}
/* GodotSpace3D::get_param(PhysicsServer3D::SpaceParameter) const */float GodotSpace3D::get_param(GodotSpace3D *this, undefined4 param_2) {
   switch (param_2) {
      case 0:
    return *(float *)(this + 0xd4);
      case 1:
    return *(float *)(this + 0xd8);
      case 2:
    return *(float *)(this + 0xdc);
      case 3:
    return *(float *)(this + 0xe0);
      case 4:
    return *(float *)(this + 0x60e8);
      case 5:
    return *(float *)(this + 0x60ec);
      case 6:
    return *(float *)(this + 0x60f0);
      case 7:
    return (float)*(int *)(this + 0xd0);
      default:
    return 0.0;
   }

}
/* GodotSpace3D::lock() */void GodotSpace3D::lock(GodotSpace3D *this) {
   this[0x60f4] = (GodotSpace3D)0x1;
   return;
}
/* GodotSpace3D::unlock() */void GodotSpace3D::unlock(GodotSpace3D *this) {
   this[0x60f4] = (GodotSpace3D)0x0;
   return;
}
/* GodotSpace3D::is_locked() const */GodotSpace3D GodotSpace3D::is_locked(GodotSpace3D *this) {
   return this[0x60f4];
}
/* GodotSpace3D::get_direct_state() */undefined8 GodotSpace3D::get_direct_state(GodotSpace3D *this) {
   return *(undefined8*)( this + 0x28 );
}
/* GodotSpace3D::GodotSpace3D() */void GodotSpace3D::GodotSpace3D(GodotSpace3D *this) {
   int iVar1;
   long *plVar2;
   PhysicsDirectSpaceState3D *this_00;
   long in_FS_OFFSET;
   float fVar3;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 32*i + 56 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 32*i + 72 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0xd4 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xc0 ) = 2;
   *(undefined8*)( this + 200 ) = 0;
   *(undefined4*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0x60e8 ) = 0;
   *(undefined4*)( this + 0x60f0 ) = 0;
   this[0x60f4] = (GodotSpace3D)0x0;
   *(undefined8*)( this + 0x60f8 ) = 0x3a83126f;
   *(undefined8*)( this + 0x6100 ) = 0;
   *(undefined8*)( this + 0x6108 ) = 0;
   *(undefined8*)( this + 0x6118 ) = 0;
   *(undefined4*)( this + 0x6120 ) = 0;
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/sleep_threshold_linear", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0x60e8 ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/sleep_threshold_angular", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0x60ec ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/time_before_sleep", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0x60f0 ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/solver/solver_iterations", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   iVar1 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( this + 0xd0 ) = iVar1;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/solver/contact_recycle_radius", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0xd4 ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/solver/contact_max_separation", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0xd8 ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/solver/contact_max_allowed_penetration", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0xdc ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "physics/3d/solver/default_contact_bias", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   fVar3 = Variant::operator_cast_to_float((Variant*)local_48);
   *(float*)( this + 0xe0 ) = fVar3;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   plVar2 = (long*)( *GodotBroadPhase3D::create_func )();
   *(long**)( this + 0x38 ) = plVar2;
   ( **(code**)( *plVar2 + 0x50 ) )(plVar2, _broadphase_pair, this);
   ( **(code**)( **(long**)( this + 0x38 ) + 0x58 ) )(*(long**)( this + 0x38 ), _broadphase_unpair, this);
   this_00 = (PhysicsDirectSpaceState3D*)operator_new(0x180, "");
   PhysicsDirectSpaceState3D::PhysicsDirectSpaceState3D(this_00);
   *(undefined8*)( this_00 + 0x178 ) = 0;
   *(undefined***)this_00 = &PTR__initialize_classv_0010b468;
   postinitialize_handler((Object*)this_00);
   *(PhysicsDirectSpaceState3D**)( this + 0x28 ) = this_00;
   *(GodotSpace3D**)( this_00 + 0x178 ) = this;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSpace3D::~GodotSpace3D() */void GodotSpace3D::~GodotSpace3D(GodotSpace3D *this) {
   long *plVar1;
   Object *pOVar2;
   void *pvVar3;
   long lVar4;
   char cVar5;
   plVar1 = *(long**)( this + 0x38 );
   ( **(code**)( *plVar1 + 0x68 ) )(plVar1);
   Memory::free_static(plVar1, false);
   pOVar2 = *(Object**)( this + 0x28 );
   cVar5 = predelete_handler(pOVar2);
   if (cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
   }

   if (*(long*)( this + 0x6118 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x6118 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x6118 );
         *(undefined8*)( this + 0x6118 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         pvVar3 = *(void**)( this + 0xa0 );
         goto joined_r0x00108687;
      }

   }

   pvVar3 = *(void**)( this + 0xa0 );
   joined_r0x00108687:if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xc4 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xc0 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xb8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xc0 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0xc4 ) = 0;
      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xb0 ), false);
      Memory::free_static(*(void**)( this + 0xa8 ), false);
      Memory::free_static(*(void**)( this + 0xb8 ), false);
      return;
   }

   return;
}
/* GodotSpace3D::add_object(GodotCollisionObject3D*) */void GodotSpace3D::add_object(GodotSpace3D *this, GodotCollisionObject3D *param_1) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   int iVar11;
   long lVar12;
   uint uVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   GodotCollisionObject3D *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0xa0 ) != 0 ) && ( *(int*)( this + 0xc4 ) != 0 )) {
      uVar14 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xc0 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xc0 ) * 8 );
      uVar10 = (long)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar16 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar16 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar16 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar13 = *(uint*)( *(long*)( this + 0xb8 ) + lVar12 * 4 );
      iVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar13 != 0) {
         uVar15 = 0;
         do {
            if (( (uint)uVar16 == uVar13 ) && ( param_1 == *(GodotCollisionObject3D**)( *(long*)( this + 0xa0 ) + ( ulong ) * (uint*)( *(long*)( this + 0xa8 ) + lVar12 * 4 ) * 8 ) )) {
               _err_print_error("add_object", "modules/godot_physics_3d/godot_space_3d.cpp", 0x459, "Condition \"objects.has(p_object)\" is true.", 0, 0, this + 0xa0, param_1);
               goto LAB_0010882e;
            }

            uVar15 = uVar15 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar14;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar13 = *(uint*)( *(long*)( this + 0xb8 ) + lVar12 * 4 );
            iVar11 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar13 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar13 * lVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar14,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xc0 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,uVar15 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   HashSet<GodotCollisionObject3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotCollisionObject3D*>>::insert(local_58);
   LAB_0010882e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
/* PhysicsDirectSpaceState3D::is_class_ptr(void*) const */uint PhysicsDirectSpaceState3D::is_class_ptr(PhysicsDirectSpaceState3D *this, void *param_1) {
   return (uint)CONCAT71(0x10b6, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b6, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* PhysicsDirectSpaceState3D::_getv(StringName const&, Variant&) const */undefined8 PhysicsDirectSpaceState3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PhysicsDirectSpaceState3D::_setv(StringName const&, Variant const&) */undefined8 PhysicsDirectSpaceState3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo&) const */void PhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* PhysicsDirectSpaceState3D::_property_can_revertv(StringName const&) const */undefined8 PhysicsDirectSpaceState3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* PhysicsDirectSpaceState3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 PhysicsDirectSpaceState3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PhysicsDirectSpaceState3D::_notificationv(int, bool) */void PhysicsDirectSpaceState3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* GodotShape3D::is_concave() const */undefined8 GodotShape3D::is_concave(void) {
   return 0;
}
/* GodotMotionShape3D::get_type() const */undefined8 GodotMotionShape3D::get_type(void) {
   return 6;
}
/* GodotMotionShape3D::project_range(Vector3 const&, Transform3D const&, float&, float&) const */void GodotMotionShape3D::project_range(GodotMotionShape3D *this, Vector3 *param_1, Transform3D *param_2, float *param_3, float *param_4) {
   float fVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float local_78;
   float local_74;
   float local_70;
   float local_6c;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   long local_30;
   fVar1 = *(float*)( this + 0x70 );
   fVar2 = (float)*(undefined8*)( this + 0x68 );
   fVar3 = (float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = ( undefined4 ) * (undefined8*)( param_2 + 0x20 );
   fStack_44 = (float)( ( ulong ) * (undefined8*)( param_2 + 0x20 ) >> 0x20 );
   fStack_40 = (float)*(undefined8*)( param_2 + 0x28 );
   fStack_3c = (float)( ( ulong ) * (undefined8*)( param_2 + 0x28 ) >> 0x20 );
   fStack_3c = *(float*)( param_2 + 0x18 ) * fVar2 + *(float*)( param_2 + 0x1c ) * fVar3 + *(float*)( param_2 + 0x20 ) * fVar1 + fStack_3c;
   local_68 = *(undefined8*)param_2;
   uStack_60 = *(undefined8*)( param_2 + 8 );
   local_58 = *(undefined8*)( param_2 + 0x10 );
   uStack_50 = *(undefined8*)( param_2 + 0x18 );
   fStack_44 = fStack_44 + (float)*(undefined8*)param_2 * fVar2 + fVar3 * *(float*)( param_2 + 4 ) + (float)*(undefined8*)( param_2 + 8 ) * fVar1;
   fStack_40 = fStack_40 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * fVar2 + fVar3 * *(float*)( param_2 + 0x10 ) + (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar1;
   ( **(code**)( **(long**)( this + 0x60 ) + 0x18 ) )();
   ( **(code**)( **(long**)( this + 0x60 ) + 0x18 ) )(*(long**)( this + 0x60 ), param_1, &local_68, &local_70, &local_6c);
   if (local_70 <= local_78) {
      local_78 = local_70;
   }

   *param_3 = local_78;
   if (local_74 <= local_6c) {
      local_74 = local_6c;
   }

   *param_4 = local_74;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotMotionShape3D::get_support(Vector3 const&) const */void GodotMotionShape3D::get_support(GodotMotionShape3D *this, Vector3 *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = (float)( **(code**)( **(long**)( this + 0x60 ) + 0x20 ) )();
   if (0.0 < *(float*)param_1 * *(float*)( this + 0x68 ) + *(float*)( param_1 + 4 ) * (float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 ) + *(float*)( param_1 + 8 ) * *(float*)( this + 0x70 )) {
      fVar2 = fVar2 + (float)*(undefined8*)( this + 0x68 );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(fVar2);
}
/* GodotMotionShape3D::get_supports(Vector3 const&, int, Vector3*, int&, GodotShape3D::FeatureType&)
   const */void GodotMotionShape3D::get_supports(Vector3 *param_1, int param_2, Vector3 *param_3, int *param_4, FeatureType *param_5) {
   *(undefined4*)param_5 = 0;
   return;
}
/* GodotMotionShape3D::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int&,
   bool) const */undefined8 GodotMotionShape3D::intersect_segment(Vector3 *param_1, Vector3 *param_2, Vector3 *param_3, Vector3 *param_4, int *param_5, bool param_6) {
   return 0;
}
/* GodotMotionShape3D::intersect_point(Vector3 const&) const */undefined8 GodotMotionShape3D::intersect_point(Vector3 *param_1) {
   return 0;
}
/* GodotMotionShape3D::get_closest_point_to(Vector3 const&) const */undefined1  [16] __thiscallGodotMotionShape3D::get_closest_point_to(GodotMotionShape3D *this, Vector3 *param_1) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])param_1;
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotMotionShape3D::get_moment_of_inertia(float) const */undefined1[16];GodotMotionShape3D::get_moment_of_inertia(float param_1) {
   long in_FS_OFFSET;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ZEXT816(0);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotMotionShape3D::set_data(Variant const&) */void GodotMotionShape3D::set_data(Variant *param_1) {
   return;
}
/* GodotMotionShape3D::get_data() const */GodotMotionShape3D * __thiscall GodotMotionShape3D::get_data(GodotMotionShape3D *this){
   *(undefined4*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   return this;
}
/* GodotPhysicsDirectSpaceState3D::is_class_ptr(void*) const */uint GodotPhysicsDirectSpaceState3D::is_class_ptr(GodotPhysicsDirectSpaceState3D *this, void *param_1) {
   return (uint)CONCAT71(0x10b6, (undefined4*)param_1 == &PhysicsDirectSpaceState3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b6, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GodotPhysicsDirectSpaceState3D::_getv(StringName const&, Variant&) const */undefined8 GodotPhysicsDirectSpaceState3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsDirectSpaceState3D::_setv(StringName const&, Variant const&) */undefined8 GodotPhysicsDirectSpaceState3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo&) const */void GodotPhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GodotPhysicsDirectSpaceState3D::_property_can_revertv(StringName const&) const */undefined8 GodotPhysicsDirectSpaceState3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GodotPhysicsDirectSpaceState3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 GodotPhysicsDirectSpaceState3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsDirectSpaceState3D::_notificationv(int, bool) */void GodotPhysicsDirectSpaceState3D::_notificationv(int param_1, bool param_2) {
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
/* GodotJoint3D::get_type() const */undefined8 GodotJoint3D::get_type(void) {
   return 5;
}
/* GodotMotionShape3D::~GodotMotionShape3D() */void GodotMotionShape3D::~GodotMotionShape3D(GodotMotionShape3D *this) {
   *(undefined***)this = &PTR_get_volume_0010b398;
   GodotShape3D::~GodotShape3D((GodotShape3D*)this);
   return;
}
/* GodotMotionShape3D::~GodotMotionShape3D() */void GodotMotionShape3D::~GodotMotionShape3D(GodotMotionShape3D *this) {
   *(undefined***)this = &PTR_get_volume_0010b398;
   GodotShape3D::~GodotShape3D((GodotShape3D*)this);
   operator_delete(this, 0x78);
   return;
}
/* GodotShape3D::get_volume() const */void GodotShape3D::get_volume(void) {
   AABB::get_volume();
   return;
}
/* GodotPhysicsDirectSpaceState3D::~GodotPhysicsDirectSpaceState3D() */void GodotPhysicsDirectSpaceState3D::~GodotPhysicsDirectSpaceState3D(GodotPhysicsDirectSpaceState3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010b200;
   Object::~Object((Object*)this);
   return;
}
/* GodotPhysicsDirectSpaceState3D::~GodotPhysicsDirectSpaceState3D() */void GodotPhysicsDirectSpaceState3D::~GodotPhysicsDirectSpaceState3D(GodotPhysicsDirectSpaceState3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010b200;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_0010b418;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsDirectSpaceState3D::_get_class_namev() const */undefined8 *GodotPhysicsDirectSpaceState3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109513:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109513;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GodotPhysicsDirectSpaceState3D");
         goto LAB_0010957e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GodotPhysicsDirectSpaceState3D");
   LAB_0010957e:return &_get_class_namev();
}
/* PhysicsDirectSpaceState3D::_get_class_namev() const */undefined8 *PhysicsDirectSpaceState3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109603:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109603;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsDirectSpaceState3D");
         goto LAB_0010966e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsDirectSpaceState3D");
   LAB_0010966e:return &_get_class_namev();
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_0010b418;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x38);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsDirectSpaceState3D::get_class() const */void PhysicsDirectSpaceState3D::get_class(void) {
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
/* GodotPhysicsDirectSpaceState3D::get_class() const */void GodotPhysicsDirectSpaceState3D::get_class(void) {
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
/* PhysicsDirectSpaceState3D::is_class(String const&) const */undefined8 PhysicsDirectSpaceState3D::is_class(PhysicsDirectSpaceState3D *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010995f;
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

      LAB_0010995f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00109a13;
   }

   cVar6 = String::operator ==(param_1, "PhysicsDirectSpaceState3D");
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
                     if (lVar5 == 0) goto LAB_00109ac3;
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

         LAB_00109ac3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00109a13;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00109a13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsDirectSpaceState3D::is_class(String const&) const */undefined8 GodotPhysicsDirectSpaceState3D::is_class(GodotPhysicsDirectSpaceState3D *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00109bef;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00109bef:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00109ca3;
   }

   cVar5 = String::operator ==(param_1, "GodotPhysicsDirectSpaceState3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = PhysicsDirectSpaceState3D::is_class((PhysicsDirectSpaceState3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00109ca3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsDirectSpaceState3D::_initialize_classv() */void PhysicsDirectSpaceState3D::_initialize_classv(void) {
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

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsDirectSpaceState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
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
      LAB_0010a008:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a008;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010a026;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010a026:if (lVar2 == 0) {
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
}
/* GodotPhysicsDirectSpaceState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void GodotPhysicsDirectSpaceState3D::_get_property_listv(GodotPhysicsDirectSpaceState3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      PhysicsDirectSpaceState3D::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "GodotPhysicsDirectSpaceState3D";
   local_70 = 0x1e;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GodotPhysicsDirectSpaceState3D";
   local_98 = 0;
   local_70 = 0x1e;
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
      LAB_0010a408:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a408;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010a425;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010a425:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "GodotPhysicsDirectSpaceState3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         PhysicsDirectSpaceState3D::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsDirectSpaceState3D::_initialize_classv() */void GodotPhysicsDirectSpaceState3D::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_0010a834;
   if (PhysicsDirectSpaceState3D::initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "PhysicsDirectSpaceState3D";
      local_60 = 0;
      local_40 = 0x19;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_0010a93e:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_0010a94e:PhysicsDirectSpaceState3D::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010a93e;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010a94e;
      }

      PhysicsDirectSpaceState3D::initialize_class()::initialized =
      '\x01';
   }

   local_48 = "PhysicsDirectSpaceState3D";
   local_58 = 0;
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_58);
   StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
   local_48 = "GodotPhysicsDirectSpaceState3D";
   local_60 = 0;
   local_40 = 0x1e;
   String::parse_latin1((StrRange*)&local_60);
   StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
   ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
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

   initialize_class()::initialized =
   '\x01';
   LAB_0010a834:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotSpace3D::get_param(PhysicsServer3D::SpaceParameter) const [clone .cold] */undefined8 GodotSpace3D::get_param(void) {
   return 0;
}
/* HashSet<GodotCollisionObject3D*, HashMapHasherDefault,
   HashMapComparatorDefault<GodotCollisionObject3D*> >::insert(GodotCollisionObject3D* const&) */undefined1[16];HashSet<GodotCollisionObject3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotCollisionObject3D*>>::insert(GodotCollisionObject3D **param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   int iVar35;
   long *in_RDX;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   uint uVar39;
   ulong uVar40;
   undefined4 uVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   undefined1 auVar45[16];
   ulong uStack_98;
   GodotCollisionObject3D *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   local_88 = (GodotCollisionObject3D*)*in_RSI;
   if (local_88 == (GodotCollisionObject3D*)0x0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      uVar32 = *(uint*)( in_RSI + 4 );
      lVar34 = *in_RDX;
      local_88 = (GodotCollisionObject3D*)*in_RSI;
      if (local_88 != (GodotCollisionObject3D*)0x0) goto LAB_0010ab0f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_0010ab0f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = lVar34 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_0010afb1;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * _LC37 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (GodotCollisionObject3D*)*in_RSI;
         goto LAB_0010afb1;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }

               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (GodotCollisionObject3D*)*in_RSI;
      lVar34 = *in_RDX;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   *(long*)( local_88 + uVar42 * 8 ) = lVar34;
   uVar33 = lVar34 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar2 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar34 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar34 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar34 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar34 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0010afb1:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Control flow encountered bad instruction data *//* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotPhysicsDirectSpaceState3D::~GodotPhysicsDirectSpaceState3D() */void GodotPhysicsDirectSpaceState3D::~GodotPhysicsDirectSpaceState3D(GodotPhysicsDirectSpaceState3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotMotionShape3D::~GodotMotionShape3D() */void GodotMotionShape3D::~GodotMotionShape3D(GodotMotionShape3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

