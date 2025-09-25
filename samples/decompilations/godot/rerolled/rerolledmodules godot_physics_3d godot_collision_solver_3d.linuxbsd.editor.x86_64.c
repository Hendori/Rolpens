/* GodotCollisionSolver3D::soft_body_contact_callback(Vector3 const&, int, Vector3 const&, int,
   Vector3 const&, void*) */void GodotCollisionSolver3D::soft_body_contact_callback(Vector3 *param_1, int param_2, Vector3 *param_3, int param_4, Vector3 *param_5, void *param_6) {
   code *UNRECOVERED_JUMPTABLE;
   undefined4 in_register_00000034;
   long in_FS_OFFSET;
   undefined8 local_20;
   uint local_18;
   long local_10;
   UNRECOVERED_JUMPTABLE = *(code**)( (long)param_6 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( (long)param_6 + 0x1c ) = *(int*)( (long)param_6 + 0x1c ) + 1;
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Load size is inaccurate */
      if (*(char*)( (long)param_6 + 0x18 ) == '\0') {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00100059. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )(param_1, CONCAT44(in_register_00000034, param_2), param_3, *param_6);
            return;
         }

         goto LAB_001000ad;
      }

      local_18 = *(uint*)( param_5 + 8 ) ^ _LC3;
      local_20 = CONCAT44(( uint )(( ulong ) * (undefined8*)param_5 >> 0x20) ^ ( uint )((ulong)_LC1 >> 0x20), ( uint ) * (undefined8*)param_5 ^ (uint)_LC1);
      ( *UNRECOVERED_JUMPTABLE )(param_3, *param_6, param_1, param_2, &local_20, *(undefined8*)( (long)param_6 + 0x10 ));
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001000ad:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotCollisionSolver3D::soft_body_concave_callback(void*, GodotShape3D*) */bool GodotCollisionSolver3D::soft_body_concave_callback(void *param_1, GodotShape3D *param_2) {
   float fVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   float fVar5;
   float local_6c;
   float local_68;
   undefined8 local_64;
   undefined4 local_5c;
   float local_58[6];
   long local_40;
   lVar3 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(GodotShape3D**)( (long)param_1 + 8 ) = param_2;
   for (int i = 0; i < 6; i++) {
      local_58[i] = 0;
   }

   do {
      lVar2 = *(long*)param_2;
      local_64 = 0;
      local_5c = 0;
      *(undefined4*)( (long)&local_64 + lVar3 ) = 0x3f800000;
      ( **(code**)( lVar2 + 0x18 ) )(param_2, &local_64, (long)param_1 + 0x18, &local_6c, &local_68);
      *(float*)( (long)local_58 + lVar3 ) = local_6c;
      *(float*)( (long)local_58 + lVar3 + 0xc ) = local_68 - local_6c;
      lVar3 = lVar3 + 4;
   }
 while ( lVar3 != 0xc );
   /* WARNING: Load size is inaccurate */
   fVar1 = *(float*)( *param_1 + 0x238 );
   fVar5 = fVar1 + fVar1;
   local_58[2] = local_58[2] - fVar1;
   local_58[3] = fVar5 + local_58[3];
   local_58[1] = local_58[1] - fVar1;
   local_58[0] = local_58[0] - fVar1;
   local_58[4] = local_58[4] + fVar5;
   local_58[5] = local_58[5] + fVar5;
   GodotSoftBody3D::query_aabb(*param_1, (_func_bool_uint_void_ptr*)local_58, soft_body_query_callback);
   *(int*)( (long)param_1 + 0x9c ) = *(int*)( (long)param_1 + 0x9c ) + 1;
   bVar4 = false;
   if (0 < *(int*)( (long)param_1 + 0x94 )) {
      bVar4 = *(long*)( (long)param_1 + 0x80 ) == 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCollisionSolver3D::concave_callback(void*, GodotShape3D*) */undefined1[16];GodotCollisionSolver3D::concave_callback(void *param_1, GodotShape3D *param_2) {
   ulong uVar1;
   undefined8 uVar2;
   undefined1 auVar3[16];
   uVar1 = ( ulong ) * (bool*)( (long)param_1 + 0x28 );
   *(int*)( (long)param_1 + 0x2c ) = *(int*)( (long)param_1 + 0x2c ) + 1;
   /* WARNING: Load size is inaccurate */
   uVar2 = sat_calculate_penetration(*(GodotShape3D**)( (long)param_1 + 8 ), *param_1, param_2, *(Transform3D**)( (long)param_1 + 0x10 ), *(_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr**)( (long)param_1 + 0x18 ), *(void**)( (long)param_1 + 0x20 ), *(bool*)( (long)param_1 + 0x28 ), (Vector3*)0x0, *(float*)( (long)param_1 + 0x38 ), *(float*)( (long)param_1 + 0x3c ));
   if ((char)uVar2 != '\0') {
      *(undefined1*)( (long)param_1 + 0x29 ) = 1;
      *(int*)( (long)param_1 + 0x30 ) = *(int*)( (long)param_1 + 0x30 ) + 1;
      uVar2 = CONCAT71(( int7 )((ulong)uVar2 >> 8), *(long*)( (long)param_1 + 0x18 ) == 0);
   }

   auVar3._8_8_ = uVar1;
   auVar3._0_8_ = uVar2;
   return auVar3;
}
/* GodotCollisionSolver3D::concave_distance_callback(void*, GodotShape3D*) */void GodotCollisionSolver3D::concave_distance_callback(void *param_1, GodotShape3D *param_2) {
   byte bVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined8 local_28;
   float local_20;
   undefined8 local_1c;
   float local_14;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( (long)param_1 + 0x2c ) = *(int*)( (long)param_1 + 0x2c ) + 1;
   local_28 = 0;
   local_20 = 0.0;
   local_1c = 0;
   local_14 = 0.0;
   bVar1 = gjk_epa_calculate_distance(*(GodotShape3D**)( (long)param_1 + 8 ), *param_1, param_2, *(Transform3D**)( (long)param_1 + 0x10 ), (Vector3*)&local_28, (Vector3*)&local_1c);
   *(byte*)( (long)param_1 + 0x29 ) = bVar1 ^ 1;
   if (( bVar1 ^ 1 ) != 0) goto LAB_00100323;
   if (*(char*)( (long)param_1 + 0x34 ) == '\0') {
      LAB_001002fc:*(undefined1*)( (long)param_1 + 0x34 ) = 1;
      *(undefined8*)( (long)param_1 + 0x40 ) = local_28;
      *(float*)( (long)param_1 + 0x48 ) = local_20;
      *(undefined8*)( (long)param_1 + 0x4c ) = local_1c;
      *(float*)( (long)param_1 + 0x54 ) = local_14;
   }
 else {
      fVar4 = *(float*)( (long)param_1 + 0x50 ) - *(float*)( (long)param_1 + 0x44 );
      fVar2 = *(float*)( (long)param_1 + 0x4c ) - *(float*)( (long)param_1 + 0x40 );
      fVar3 = *(float*)( (long)param_1 + 0x54 ) - *(float*)( (long)param_1 + 0x48 );
      if (( (float)local_1c - (float)local_28 ) * ( (float)local_1c - (float)local_28 ) + ( local_1c._4_4_ - local_28._4_4_ ) * ( local_1c._4_4_ - local_28._4_4_ ) + ( local_14 - local_20 ) * ( local_14 - local_20 ) < fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) goto LAB_001002fc;
   }

   *(int*)( (long)param_1 + 0x30 ) = *(int*)( (long)param_1 + 0x30 ) + 1;
   LAB_00100323:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCollisionSolver3D::solve_static_world_boundary(GodotShape3D const*, Transform3D const&,
   GodotShape3D const*, Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int,
   Vector3 const&, void*), void*, bool, float) */undefined8 GodotCollisionSolver3D::solve_static_world_boundary(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5, void *param_6, bool param_7, float param_8) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   ulong uVar17;
   int iVar18;
   long lVar19;
   undefined8 uVar20;
   Vector3 *pVVar21;
   Vector3 *pVVar22;
   long in_FS_OFFSET;
   byte bVar23;
   float fVar24;
   float fVar25;
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   float fVar32;
   float fVar33;
   float fVar35;
   undefined1 auVar34[16];
   float fVar36;
   undefined1 auVar37[16];
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar45;
   float fVar46;
   float fVar47;
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   float fVar48;
   undefined8 local_1a0;
   double local_148;
   double local_140[2];
   int local_130;
   int local_12c;
   undefined8 local_128;
   float local_120;
   undefined1 local_118[12];
   float fStack_10c;
   undefined8 local_108;
   float local_100;
   float fStack_fc;
   float local_f8;
   float fStack_f4;
   float local_f0;
   float fStack_ec;
   float local_e8;
   long local_40;
   bVar23 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar18 = ( **(code**)( *(long*)param_3 + 8 ) )(param_3);
   if (iVar18 == 0) {
      LAB_00100416:uVar20 = 0;
   }
 else {
      pVVar21 = (Vector3*)&local_108;
      _local_118 = GodotWorldBoundaryShape3D::get_plane();
      Basis::inverse();
      Basis::transpose();
      fVar1 = *(float*)( param_2 + 0x18 );
      fVar2 = *(float*)( param_2 + 0x1c );
      fVar33 = SUB164(_local_118, 0);
      fVar25 = SUB164(_local_118, 4);
      fVar3 = *(float*)( param_2 + 0x10 );
      fVar48 = fStack_10c * fVar25;
      fVar29 = SUB164(_local_118, 8);
      fVar24 = fStack_10c * fVar33;
      fVar28 = fStack_10c * fVar29;
      fVar4 = *(float*)( param_2 + 4 );
      fVar5 = *(float*)( param_2 + 0x20 );
      fVar32 = fVar33 * local_f0 + fVar25 * fStack_ec + fVar29 * local_e8;
      fVar6 = *(float*)( param_2 + 0xc );
      fVar7 = *(float*)( param_2 + 0x2c );
      fVar8 = *(float*)param_2;
      fVar9 = *(float*)( param_2 + 0x14 );
      fVar10 = *(float*)( param_2 + 8 );
      fVar11 = *(float*)( param_2 + 0x28 );
      fVar12 = *(float*)( param_2 + 0x24 );
      auVar43._0_4_ = local_108._4_4_ * fVar25 + fVar33 * (float)local_108 + local_100 * fVar29;
      auVar43._4_4_ = local_f8 * fVar25 + fVar33 * fStack_fc + fStack_f4 * fVar29;
      auVar43._8_8_ = 0;
      fVar33 = auVar43._0_4_ * auVar43._0_4_ + auVar43._4_4_ * auVar43._4_4_ + fVar32 * fVar32;
      if (fVar33 == 0.0) {
         fVar32 = 0.0;
         local_1a0 = 0;
         fVar40 = 0.0;
         fVar45 = 0.0;
         fVar33 = _LC3;
         fVar25 = _LC3;
         fVar29 = _LC3;
      }
 else {
         fVar33 = SQRT(fVar33);
         fVar32 = fVar32 / fVar33;
         auVar37._4_4_ = fVar33;
         auVar37._0_4_ = fVar33;
         auVar37._8_8_ = _LC5;
         auVar43 = divps(auVar43, auVar37);
         local_1a0 = auVar43._0_8_;
         fVar40 = auVar43._8_4_;
         fVar45 = auVar43._12_4_;
         fVar33 = (float)( auVar43._4_4_ ^ (uint)_LC3 );
         fVar29 = (float)( auVar43._0_4_ ^ (uint)_LC3 );
         fVar25 = (float)( (uint)_LC3 ^ (uint)fVar32 );
      }

      local_12c = 0;
      pVVar22 = pVVar21;
      for (lVar19 = 0x18; lVar19 != 0; lVar19 = lVar19 + -1) {
         *(undefined8*)pVVar22 = 0;
         pVVar22 = pVVar22 + ( (ulong)bVar23 * -4 + 2 ) * 4;
      }

      fVar36 = (float)local_1a0;
      fVar35 = (float)( (ulong)local_1a0 >> 0x20 );
      fVar38 = *(float*)( param_4 + 8 ) * fVar29 + *(float*)( param_4 + 0x14 ) * fVar33 + *(float*)( param_4 + 0x20 ) * fVar25;
      auVar34._0_4_ = (float)*(undefined8*)( param_4 + 0xc ) * fVar33 + (float)*(undefined8*)param_4 * fVar29 + (float)*(undefined8*)( param_4 + 0x18 ) * fVar25;
      auVar34._4_4_ = (float)( ( ulong ) * (undefined8*)( param_4 + 0xc ) >> 0x20 ) * fVar33 + (float)( ( ulong ) * (undefined8*)param_4 >> 0x20 ) * fVar29 + (float)( ( ulong ) * (undefined8*)( param_4 + 0x18 ) >> 0x20 ) * fVar25;
      auVar34._8_4_ = fVar40 * 0.0 + fVar40 * 0.0 + 0.0;
      auVar34._12_4_ = fVar45 * 0.0 + fVar45 * 0.0 + 0.0;
      fVar33 = auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_ + fVar38 * fVar38;
      fVar25 = 0.0;
      local_118._0_8_ = 0;
      if (fVar33 != 0.0) {
         fVar33 = SQRT(fVar33);
         fVar25 = fVar38 / fVar33;
         auVar31._4_4_ = fVar33;
         auVar31._0_4_ = fVar33;
         auVar31._8_8_ = _LC5;
         auVar43 = divps(auVar34, auVar31);
         local_118._0_8_ = auVar43._0_8_;
      }

      stack0xfffffffffffffef0 = CONCAT44(fStack_10c, fVar25);
      ( **(code**)( *(long*)param_3 + 0x28 ) )(param_3, (Vector3*)local_118, 0x10, pVVar21, &local_130, &local_12c);
      fVar33 = local_100;
      if (local_12c == 3) {
         if (local_130 != 3) {
            _err_print_error("solve_static_world_boundary", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x37, "Condition \"support_count != 3\" is true. Returning: false", 0, 0);
            uVar20 = 0;
            goto LAB_00100420;
         }

         iVar18 = 1;
         fVar40 = (float)local_108;
         fVar45 = (float)( (ulong)local_108 >> 0x20 );
         fVar29 = local_e8 - local_100;
         fVar25 = fStack_f4 - local_100;
         local_108 = CONCAT44(( local_f8 - fVar45 ) + fVar45 + ( fStack_ec - fVar45 ) * 0.0, ( fStack_fc - fVar40 ) + fVar40 + ( local_f0 - fVar40 ) * 0.0);
         local_100 = fVar29 * 0.0 + fVar25 + local_100;
         pVVar22 = pVVar21;
         while (true) {
            sincos(( (double)iVar18 * __LC9 ) / __LC10, local_140, &local_148);
            fVar38 = (float)local_148;
            fVar39 = (float)local_140[0];
            *(float*)( pVVar22 + 0x14 ) = fVar38 * fVar25 + fVar33 + fVar39 * fVar29;
            *(ulong*)( pVVar22 + 0xc ) = CONCAT44(fVar38 * ( local_f8 - fVar45 ) + fVar45 + fVar39 * ( fStack_ec - fVar45 ), fVar38 * ( fStack_fc - fVar40 ) + fVar40 + fVar39 * ( local_f0 - fVar40 ));
            if (iVar18 != 1) break;
            iVar18 = 2;
            pVVar22 = pVVar22 + 0xc;
         }
;
      }
 else if (local_130 < 1) goto LAB_00100416;
      iVar18 = 0;
      uVar20 = 0;
      do {
         uVar17 = *(ulong*)pVVar21;
         fVar40 = (float)uVar17;
         fVar45 = (float)( uVar17 >> 0x20 );
         fVar33 = *(float*)( pVVar21 + 8 );
         fVar29 = fVar40 * fVar40 + fVar45 * fVar45 + fVar33 * fVar33;
         auVar43 = ZEXT816(0);
         fVar25 = 0.0;
         if (fVar29 != 0.0) {
            fVar29 = SQRT(fVar29);
            auVar42._8_8_ = 0;
            auVar42._0_8_ = uVar17;
            auVar26._4_4_ = fVar29;
            auVar26._0_4_ = fVar29;
            auVar26._8_8_ = _LC5;
            auVar43 = divps(auVar42, auVar26);
            fVar25 = fVar33 / fVar29;
         }

         fVar29 = *(float*)( param_4 + 4 );
         uVar13 = *(undefined8*)( param_4 + 8 );
         fVar40 = auVar43._0_4_ * param_8 + fVar40;
         fVar45 = auVar43._4_4_ * param_8 + fVar45;
         fVar46 = auVar43._8_4_ * 0.0 + 0.0;
         fVar47 = auVar43._12_4_ * 0.0 + 0.0;
         fVar38 = *(float*)( param_4 + 0x10 );
         fVar33 = fVar25 * param_8 + fVar33;
         uVar14 = *(undefined8*)param_4;
         fVar39 = *(float*)( param_4 + 0x18 ) * fVar40 + fVar45 * *(float*)( param_4 + 0x1c ) + *(float*)( param_4 + 0x20 ) * fVar33 + *(float*)( param_4 + 0x2c );
         uVar15 = *(undefined8*)( param_4 + 0x10 );
         uVar16 = *(undefined8*)( param_4 + 0x24 );
         *(float*)( pVVar21 + 8 ) = fVar39;
         fVar25 = fVar45 * fVar29 + (float)uVar14 * fVar40 + (float)uVar13 * fVar33 + (float)uVar16;
         fVar33 = fVar45 * fVar38 + (float)( (ulong)uVar13 >> 0x20 ) * fVar40 + (float)( (ulong)uVar15 >> 0x20 ) * fVar33 + (float)( (ulong)uVar16 >> 0x20 );
         fVar29 = fVar46 * 0.0 + fVar46 * 0.0 + 0.0 + 0.0;
         fVar40 = fVar47 * 0.0 + fVar47 * 0.0 + 0.0 + 0.0;
         *(ulong*)pVVar21 = CONCAT44(fVar33, fVar25);
         fVar45 = ( *(float*)pVVar21 * fVar36 + fVar33 * fVar35 + fVar32 * fVar39 ) - ( ( fVar6 * fVar24 + fVar3 * fVar48 + fVar9 * fVar28 + fVar11 ) * fVar35 + ( fVar24 * fVar8 + fVar48 * fVar4 + fVar28 * fVar10 + fVar12 ) * fVar36 + ( fVar1 * fVar24 + fVar2 * fVar48 + fVar5 * fVar28 + fVar7 ) * fVar32 );
         if (fVar45 < 0.0) {
            fVar38 = fVar25 - fVar45 * fVar36;
            fVar46 = fVar33 - fVar45 * fVar35;
            local_128 = CONCAT44(fVar46, fVar38);
            local_120 = fVar39 - fVar45 * fVar32;
            if (param_5 != (_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr*)0x0) {
               if (param_7) {
                  auVar41._0_4_ = fVar38 - fVar25;
                  auVar41._4_4_ = fVar46 - fVar33;
                  auVar41._8_4_ = ( fVar29 - 0.0 ) - fVar29;
                  auVar41._12_4_ = ( fVar40 - 0.0 ) - fVar40;
                  fVar39 = local_120 - fVar39;
                  fVar33 = auVar41._0_4_ * auVar41._0_4_ + auVar41._4_4_ * auVar41._4_4_ + fVar39 * fVar39;
                  local_118._0_8_ = 0;
                  fVar25 = 0.0;
                  if (fVar33 != 0.0) {
                     fVar33 = SQRT(fVar33);
                     auVar30._4_4_ = fVar33;
                     auVar30._0_4_ = fVar33;
                     auVar30._8_8_ = _LC5;
                     auVar43 = divps(auVar41, auVar30);
                     fVar25 = fVar39 / fVar33;
                     local_118._0_8_ = auVar43._0_8_;
                  }

                  stack0xfffffffffffffef0 = CONCAT44(fStack_10c, fVar25);
                  ( *param_5 )(pVVar21, 0, (Vector3*)&local_128, 0, (Vector3*)local_118, param_6);
               }
 else {
                  auVar27._0_4_ = fVar25 - fVar38;
                  auVar27._4_4_ = fVar33 - fVar46;
                  auVar27._8_4_ = fVar29 - ( fVar29 - 0.0 );
                  auVar27._12_4_ = fVar40 - ( fVar40 - 0.0 );
                  fVar39 = fVar39 - local_120;
                  fVar33 = auVar27._0_4_ * auVar27._0_4_ + auVar27._4_4_ * auVar27._4_4_ + fVar39 * fVar39;
                  local_118._0_8_ = 0;
                  fVar25 = 0.0;
                  if (fVar33 != 0.0) {
                     fVar33 = SQRT(fVar33);
                     fVar25 = fVar39 / fVar33;
                     auVar44._4_4_ = fVar33;
                     auVar44._0_4_ = fVar33;
                     auVar44._8_8_ = _LC5;
                     auVar43 = divps(auVar27, auVar44);
                     local_118._0_8_ = auVar43._0_8_;
                  }

                  stack0xfffffffffffffef0 = CONCAT44(fStack_10c, fVar25);
                  ( *param_5 )((Vector3*)&local_128, 0, pVVar21, 0, (Vector3*)local_118, param_6);
               }

            }

            uVar20 = 1;
         }

         iVar18 = iVar18 + 1;
         pVVar21 = pVVar21 + 0xc;
      }
 while ( iVar18 < local_130 );
   }

   LAB_00100420:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar20;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCollisionSolver3D::solve_separation_ray(GodotShape3D const*, Transform3D const&,
   GodotShape3D const*, Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int,
   Vector3 const&, void*), void*, bool, float) */undefined4 GodotCollisionSolver3D::solve_separation_ray(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5, void *param_6, bool param_7, float param_8) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   float fVar3;
   undefined1 auVar4[16];
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   float fVar8;
   undefined1 auVar9[16];
   float fVar10;
   undefined8 uVar11;
   float fVar12;
   float fVar13;
   undefined4 local_fc;
   undefined8 local_f8;
   float local_f0;
   float local_e8;
   float fStack_e4;
   float local_e0;
   float local_d8;
   float fStack_d4;
   float local_d0;
   undefined8 local_c8;
   float local_c0;
   undefined8 local_b8;
   float local_b0;
   undefined8 local_a8;
   float local_a0;
   undefined8 local_98;
   float local_90;
   undefined8 local_88;
   uint local_80;
   float local_78;
   float fStack_74;
   float local_70;
   float fStack_6c;
   float local_68;
   float fStack_64;
   undefined8 local_60;
   float local_58;
   undefined8 local_54;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = *(undefined8*)( param_2 + 0x24 );
   local_f0 = *(float*)( param_2 + 0x2c );
   fVar3 = (float)GodotSeparationRayShape3D::get_length();
   fVar3 = param_8 + fVar3;
   local_e0 = *(float*)( param_2 + 0x20 ) * fVar3 + local_f0;
   local_e8 = (float)*(undefined8*)( param_2 + 8 ) * fVar3 + (float)local_f8;
   fStack_e4 = (float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) * fVar3 + (float)( (ulong)local_f8 >> 0x20 );
   local_d0 = local_e0;
   local_d8 = local_e8;
   fStack_d4 = fStack_e4;
   Transform3D::affine_inverse();
   local_c8 = 0;
   fVar3 = (float)local_f8;
   fVar12 = (float)( (ulong)local_f8 >> 0x20 );
   fVar5 = (float)local_60;
   fVar8 = (float)( (ulong)local_60 >> 0x20 );
   local_c0 = 0.0;
   local_b8 = 0;
   local_fc = 0xffffffff;
   local_b0 = 0.0;
   local_f8._0_4_ = fVar3 * local_78 + fVar12 * fStack_74 + local_f0 * local_70 + (float)local_54;
   fVar10 = (float)( (ulong)local_54 >> 0x20 );
   local_f8._4_4_ = fVar3 * fStack_6c + fVar12 * local_68 + local_f0 * fStack_64 + fVar10;
   local_f0 = fVar3 * fVar5 + fVar12 * fVar8 + local_f0 * local_58 + local_4c;
   fVar3 = local_e8 * fStack_6c;
   fVar12 = local_70 * local_e0;
   fVar13 = fStack_64 * local_e0;
   local_e0 = local_e8 * fVar5 + fStack_e4 * fVar8 + local_e0 * local_58 + local_4c;
   local_e8 = local_e8 * local_78 + fStack_74 * fStack_e4 + fVar12 + (float)local_54;
   fStack_e4 = fVar3 + local_68 * fStack_e4 + fVar13 + fVar10;
   uVar2 = ( **(code**)( *(long*)param_3 + 0x38 ) )(param_3, &local_f8, &local_e8, &local_c8, &local_b8, &local_fc);
   if ((char)uVar2 != '\0') {
      if (( ( ( (float)local_b8 == 0.0 ) && ( local_b8._4_4_ == 0.0 ) ) && ( local_b0 == 0.0 ) ) || ( (double)( ( (float)local_f8 - local_e8 ) * (float)local_b8 + ( local_f8._4_4_ - fStack_e4 ) * local_b8._4_4_ + ( local_f0 - local_e0 ) * local_b0 ) < _LC11 )) {
         uVar2 = 0;
      }
 else {
         fVar3 = (float)local_c8;
         fVar10 = (float)( (ulong)local_c8 >> 0x20 );
         local_a0 = *(float*)( param_4 + 0x18 ) * fVar3 + *(float*)( param_4 + 0x1c ) * fVar10 + *(float*)( param_4 + 0x20 ) * local_c0 + *(float*)( param_4 + 0x2c );
         local_a8 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_4 + 8 ) >> 0x20 ) * fVar3 + fVar10 * *(float*)( param_4 + 0x10 ) + (float)( ( ulong ) * (undefined8*)( param_4 + 0x10 ) >> 0x20 ) * local_c0 + (float)( ( ulong ) * (undefined8*)( param_4 + 0x24 ) >> 0x20 ), (float)*(undefined8*)param_4 * fVar3 + fVar10 * *(float*)( param_4 + 4 ) + (float)*(undefined8*)( param_4 + 8 ) * local_c0 + (float)*(undefined8*)( param_4 + 0x24 ));
         cVar1 = GodotSeparationRayShape3D::get_slide_on_slope();
         if (cVar1 != '\0') {
            fVar3 = (float)local_b8;
            fVar10 = (float)( (ulong)local_b8 >> 0x20 );
            auVar7._0_4_ = fVar3 * local_78 + fVar10 * fStack_6c + local_b0 * fVar5;
            auVar7._4_4_ = fVar3 * fStack_74 + fVar10 * local_68 + local_b0 * fVar8;
            auVar7._8_8_ = 0;
            fVar5 = local_70 * fVar3 + fStack_64 * fVar10 + local_b0 * local_58;
            fVar8 = auVar7._0_4_ * auVar7._0_4_ + auVar7._4_4_ * auVar7._4_4_ + fVar5 * fVar5;
            uVar11 = 0;
            fVar3 = 0.0;
            if (fVar8 != 0.0) {
               fVar8 = SQRT(fVar8);
               fVar3 = fVar5 / fVar8;
               auVar4._4_4_ = fVar8;
               auVar4._0_4_ = fVar8;
               auVar4._8_8_ = _LC5;
               auVar7 = divps(auVar7, auVar4);
               uVar11 = auVar7._0_8_;
            }

            fVar5 = SQRT(( local_a0 - local_d0 ) * ( local_a0 - local_d0 ) + ( (float)local_a8 - local_d8 ) * ( (float)local_a8 - local_d8 ) + ( local_a8._4_4_ - fStack_d4 ) * ( local_a8._4_4_ - fStack_d4 ));
            local_a0 = fVar5 * fVar3 + local_d0;
            local_a8 = CONCAT44(fVar5 * (float)( (ulong)uVar11 >> 0x20 ) + fStack_d4, fVar5 * (float)uVar11 + local_d8);
         }

         if (param_5 != (_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr*)0x0) {
            fVar5 = local_a0 - local_d0;
            auVar6._0_4_ = (float)local_a8 - local_d8;
            auVar6._4_4_ = (float)( (ulong)local_a8 >> 0x20 ) - fStack_d4;
            auVar6._8_8_ = 0;
            fVar3 = auVar6._0_4_ * auVar6._0_4_ + auVar6._4_4_ * auVar6._4_4_ + fVar5 * fVar5;
            local_90 = 0.0;
            local_98 = 0;
            if (fVar3 != 0.0) {
               fVar3 = SQRT(fVar3);
               auVar9._4_4_ = fVar3;
               auVar9._0_4_ = fVar3;
               auVar9._8_8_ = _LC5;
               auVar7 = divps(auVar6, auVar9);
               local_90 = fVar5 / fVar3;
               local_98 = auVar7._0_8_;
            }

            if (param_7) {
               local_80 = (uint)local_90 ^ _LC3;
               local_88 = CONCAT44(( uint )((ulong)local_98 >> 0x20) ^ ( uint )((ulong)_LC1 >> 0x20), (uint)local_98 ^ (uint)_LC1);
               ( *param_5 )((Vector3*)&local_a8, 0, (Vector3*)&local_d8, 0, (Vector3*)&local_88, param_6);
            }
 else {
               ( *param_5 )((Vector3*)&local_d8, 0, (Vector3*)&local_a8, 0, (Vector3*)&local_98, param_6);
            }

         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* GodotCollisionSolver3D::solve_soft_body(GodotShape3D const*, Transform3D const&, GodotShape3D
   const*, Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int, Vector3 const&,
   void*), void*, bool) */ulong GodotCollisionSolver3D::solve_soft_body(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5, void *param_6, bool param_7) {
   float fVar1;
   AABB *pAVar2;
   bool bVar3;
   char cVar4;
   float *pfVar5;
   long lVar6;
   Transform3D *pTVar7;
   float *pfVar8;
   long lVar9;
   Transform3D *pTVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   Transform3D local_1e8[48];
   undefined8 local_1b8;
   float local_1b0;
   float local_1a8[4];
   float local_198[4];
   undefined8 local_188;
   undefined8 local_178;
   float fStack_170;
   float afStack_16c[5];
   code *local_158[14];
   AABB *local_e8;
   GodotShape3D *local_e0;
   GodotSphereShape3D *local_d8;
   undefined1 local_d0[16];
   undefined1 local_c0[16];
   float local_b0;
   undefined4 uStack_ac;
   undefined4 uStack_a8;
   undefined4 uStack_a4;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   float local_80;
   undefined4 uStack_7c;
   undefined4 uStack_78;
   undefined4 uStack_74;
   undefined4 local_70;
   _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *local_68;
   void *local_60;
   undefined1 local_58;
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   pAVar2 = *(AABB**)( param_3 + 0x60 );
   fVar1 = *(float*)( pAVar2 + 0x238 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GodotSphereShape3D::GodotSphereShape3D((GodotSphereShape3D*)local_158);
   Variant::Variant((Variant*)&local_e8, fVar1);
   GodotSphereShape3D::set_data((Variant*)local_158);
   if (Variant::needs_deinit[(int)local_e8] != '\0') {
      Variant::_clear_internal();
   }

   local_d0 = ZEXT416((uint)_LC2);
   local_e0 = (GodotShape3D*)0x0;
   local_d8 = (GodotSphereShape3D*)0x0;
   uStack_ac = 0;
   uStack_a8 = 0;
   uStack_a4 = 0;
   uStack_7c = 0;
   uStack_78 = 0;
   uStack_74 = 0;
   local_70 = 0;
   local_54 = 0;
   local_4c = 0;
   local_58 = param_7;
   local_b0 = _LC2;
   local_80 = _LC2;
   local_e8 = pAVar2;
   local_c0 = local_d0;
   local_a0 = local_d0;
   local_90 = local_d0;
   local_68 = param_5;
   local_60 = param_6;
   Transform3D::operator *(local_1e8, param_4);
   local_d0 = *(undefined1(*) [16])param_2;
   local_80 = (float)local_1e8._32_8_;
   uStack_7c = SUB84(local_1e8._32_8_, 4);
   uStack_78 = (undefined4)local_1e8._40_8_;
   uStack_74 = SUB84(local_1e8._40_8_, 4);
   local_c0 = *(undefined1(*) [16])( param_2 + 0x10 );
   local_b0 = (float)*(undefined8*)( param_2 + 0x20 );
   uStack_ac = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x20 ) >> 0x20);
   uStack_a8 = ( undefined4 ) * (undefined8*)( param_2 + 0x28 );
   uStack_a4 = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x28 ) >> 0x20);
   local_e0 = param_1;
   local_d8 = (GodotSphereShape3D*)local_158;
   cVar4 = ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1);
   if (cVar4 == '\0') {
      lVar9 = 0;
      local_1a8[0] = 0.0;
      local_1a8[1] = 0.0;
      local_178 = *(undefined8*)( param_1 + 0x10 );
      local_1a8[2] = 0.0;
      fStack_170 = (float)*(undefined4*)( param_1 + 0x18 );
      for (int i = 0; i < 3; i++) {
         local_198[i] = 0;
      }

      local_1b8 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_1 + 0x1c ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 ), (float)*(undefined8*)( param_1 + 0x1c ) + (float)*(undefined8*)( param_1 + 0x10 ));
      local_1b0 = *(float*)( param_1 + 0x18 ) + *(float*)( param_1 + 0x24 );
      pTVar7 = param_2;
      do {
         fVar13 = *(float*)( param_2 + lVar9 + 0x24 );
         lVar6 = 0;
         fVar11 = fVar13;
         do {
            fVar15 = *(float*)( (long)&local_178 + lVar6 ) * *(float*)( pTVar7 + lVar6 );
            fVar12 = *(float*)( pTVar7 + lVar6 ) * *(float*)( (long)&local_1b8 + lVar6 );
            fVar14 = fVar15;
            if (fVar15 < fVar12) {
               fVar14 = fVar12;
               fVar12 = fVar15;
            }

            fVar11 = fVar11 + fVar12;
            fVar13 = fVar13 + fVar14;
            lVar6 = lVar6 + 4;
         }
 while ( lVar6 != 0xc );
         *(float*)( (long)local_198 + lVar9 ) = fVar13;
         pTVar7 = pTVar7 + 0xc;
         *(float*)( (long)local_1a8 + lVar9 ) = fVar11;
         lVar9 = lVar9 + 4;
      }
 while ( lVar9 != 0xc );
      afStack_16c[2] = fVar1 + fVar1;
      fStack_170 = local_1a8[2] - fVar1;
      afStack_16c[0] = ( local_198[0] - local_1a8[0] ) + afStack_16c[2];
      afStack_16c[1] = afStack_16c[2] + ( local_198[1] - local_1a8[1] );
      afStack_16c[2] = afStack_16c[2] + ( local_198[2] - local_1a8[2] );
      local_178 = CONCAT44(local_1a8[1] - fVar1, local_1a8[0] - fVar1);
      GodotSoftBody3D::query_aabb(pAVar2, (_func_bool_uint_void_ptr*)&local_178, soft_body_query_callback);
   }
 else {
      local_178 = 0;
      fVar13 = fVar1 + fVar1;
      fStack_170 = 0.0;
      for (int i = 0; i < 3; i++) {
         afStack_16c[i] = 0;
      }

      local_188 = CONCAT44(fVar13 + (float)( ( ulong ) * (undefined8*)( pAVar2 + 0x230 ) >> 0x20 ), fVar13 + (float)*(undefined8*)( pAVar2 + 0x230 ));
      for (int i = 0; i < 3; i++) {
         local_198[i] = *(float*)( pAVar2 + ( 4*i + 544 ) ) - fVar1;
      }

      local_198[3] = fVar13 + *(float*)( pAVar2 + 0x22c );
      pfVar5 = (float*)&local_178;
      pfVar8 = local_198;
      pTVar7 = param_2;
      do {
         pTVar10 = pTVar7 + 4;
         fVar1 = pfVar8[3];
         fVar14 = _LC2 / SQRT(*(float*)pTVar7 * *(float*)pTVar7 + *(float*)( pTVar7 + 0xc ) * *(float*)( pTVar7 + 0xc ) + *(float*)( pTVar7 + 0x18 ) * *(float*)( pTVar7 + 0x18 ));
         fVar13 = *pfVar8;
         fVar11 = fVar13 * fVar14;
         *pfVar5 = fVar11;
         pfVar5[3] = fVar14 * ( fVar1 + fVar13 ) - fVar11;
         pfVar5 = pfVar5 + 1;
         pfVar8 = pfVar8 + 1;
         pTVar7 = pTVar10;
      }
 while ( pTVar10 != param_2 + 0xc );
      ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1, &local_178, soft_body_concave_callback, (Variant*)&local_e8, 1);
   }

   local_158[0] = Variant::_clear_internal;
   bVar3 = 0 < (int)local_54;
   GodotShape3D::~GodotShape3D((GodotShape3D*)local_158);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return CONCAT71(( int7 )((ulong)&local_e8 >> 8), bVar3) & 0xffffffff;
}
/* GodotCollisionSolver3D::solve_concave(GodotShape3D const*, Transform3D const&, GodotShape3D
   const*, Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int, Vector3 const&,
   void*), void*, bool, float, float) */undefined1 GodotCollisionSolver3D::solve_concave(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5, void *param_6, bool param_7, float param_8, float param_9) {
   float *pfVar1;
   float *pfVar2;
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   float fVar5;
   float local_100;
   float local_fc;
   undefined8 local_f8;
   float local_f0;
   float local_e8[8];
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined4 local_a8;
   float fStack_a4;
   float fStack_a0;
   float fStack_9c;
   Transform3D *local_98;
   GodotShape3D *local_90;
   Transform3D *local_88;
   _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *local_80;
   void *local_78;
   undefined1 local_70;
   undefined1 local_6f;
   undefined8 local_6c;
   undefined1 local_64;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 local_50;
   undefined8 local_4c;
   undefined4 local_44;
   long local_40;
   local_60 = CONCAT44(param_9, param_8);
   local_c8 = *(undefined8*)param_2;
   uStack_c0 = *(undefined8*)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6f = 0;
   local_6c = 0;
   local_64 = 0;
   local_58 = 0;
   local_50 = 0;
   local_4c = 0;
   local_44 = 0;
   local_70 = param_7;
   local_b8 = *(undefined8*)( param_2 + 0x10 );
   uStack_b0 = *(undefined8*)( param_2 + 0x18 );
   local_a8 = ( undefined4 ) * (undefined8*)( param_2 + 0x20 );
   fStack_a4 = (float)( ( ulong ) * (undefined8*)( param_2 + 0x20 ) >> 0x20 );
   fStack_a0 = (float)*(undefined8*)( param_2 + 0x28 );
   fStack_9c = (float)( ( ulong ) * (undefined8*)( param_2 + 0x28 ) >> 0x20 );
   local_e8[0] = 0.0;
   local_e8[1] = 0.0;
   fStack_a4 = fStack_a4 - (float)*(undefined8*)( param_4 + 0x24 );
   fStack_a0 = fStack_a0 - (float)( ( ulong ) * (undefined8*)( param_4 + 0x24 ) >> 0x20 );
   for (int i = 0; i < 4; i++) {
      local_e8[( i + 2 )] = 0;
   }

   fStack_9c = fStack_9c - *(float*)( param_4 + 0x2c );
   pfVar1 = local_e8;
   local_98 = param_2;
   local_90 = param_1;
   local_88 = param_4;
   local_80 = param_5;
   local_78 = param_6;
   do {
      local_f0 = *(float*)( param_4 + 0x18 );
      fVar4 = (float)( ( ulong ) * (undefined8*)( param_4 + 8 ) >> 0x20 );
      local_100 = 0.0;
      fVar3 = (float)*(undefined8*)param_4;
      pfVar2 = pfVar1 + 1;
      param_4 = param_4 + 4;
      local_fc = 0.0;
      fVar5 = _LC2 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + local_f0 * local_f0);
      local_f0 = local_f0 * fVar5;
      local_f8 = CONCAT44(fVar5 * fVar4, fVar5 * fVar3);
      ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1, &local_f8, &local_c8, &local_100, &local_fc);
      fVar3 = ( local_100 - param_8 ) * fVar5;
      *pfVar1 = fVar3;
      pfVar1[3] = ( local_fc + param_8 ) * fVar5 - fVar3;
      pfVar1 = pfVar2;
   }
 while ( pfVar2 != local_e8 + 3 );
   ( **(code**)( *(long*)param_3 + 0x70 ) )(param_3, local_e8, concave_callback, &local_98, 0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_6f;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCollisionSolver3D::solve_static(GodotShape3D const*, Transform3D const&, GodotShape3D
   const*, Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int, Vector3 const&,
   void*), void*, Vector3*, float, float) */undefined8 GodotCollisionSolver3D::solve_static(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5, void *param_6, Vector3 *param_7, float param_8, float param_9) {
   bool bVar1;
   char cVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   undefined8 uVar6;
   Transform3D *pTVar7;
   GodotShape3D *pGVar8;
   char cVar9;
   int iVar10;
   int iVar11;
   iVar4 = ( **(code**)( *(long*)param_1 + 8 ) )();
   iVar5 = ( **(code**)( *(long*)param_3 + 8 ) )(param_3);
   cVar2 = ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1);
   cVar3 = ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3);
   bVar1 = iVar5 < iVar4;
   iVar10 = iVar5;
   iVar11 = iVar4;
   cVar9 = cVar2;
   if (!bVar1) {
      iVar10 = iVar4;
      iVar11 = iVar5;
      cVar9 = cVar3;
      cVar3 = cVar2;
   }

   if (iVar10 == 0) {
      if (iVar11 == 0) {
         if (solve_static(GodotShape3D_const * Transform3D_const & GodotShape3D_const, *, Transform3D_const, &, void(*)(Vector3_const & Vector3_const & Vector3_const, &,void*), ,void*, Vector3, *,float, float), ::first_print != '\0') {
            _err_print_error("solve_static", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x179, "Collisions between world boundaries are not supported.", 0, 1);
            solve_static(GodotShape3D_const *, Transform3D_const &, GodotShape3D_const *, Transform3D_const &, void (*)(Vector3_const &, int, Vector3_const &, int, Vector3_const &, void *), void *, Vector3 *, float, float)
            return 0;
         }

      }
 else if (iVar11 == 1) {
         if (solve_static(GodotShape3D_const * Transform3D_const & GodotShape3D_const, *, Transform3D_const, &, void(*)(Vector3_const & Vector3_const & Vector3_const, &,void*), ,void*, Vector3, *,float, float), ::first_print != '\0') {
            _err_print_error("solve_static", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x17d, "Collisions between world boundaries and rays are not supported.", 0, 1);
            solve_static(GodotShape3D_const *, Transform3D_const &, GodotShape3D_const *, Transform3D_const &, void (*)(Vector3_const &, int, Vector3_const &, int, Vector3_const &, void *), void *, Vector3 *, float, float)
            return 0;
         }

      }
 else {
         if (iVar11 != 9) {
            pTVar7 = param_2;
            pGVar8 = param_1;
            if (!bVar1) {
               pTVar7 = param_4;
               pGVar8 = param_3;
               param_4 = param_2;
               param_3 = param_1;
               param_8 = param_9;
            }

            uVar6 = solve_static_world_boundary(param_3, param_4, pGVar8, pTVar7, param_5, param_6, bVar1, param_8);
            return uVar6;
         }

         if (solve_static(GodotShape3D_const * Transform3D_const & GodotShape3D_const, *, Transform3D_const, &, void(*)(Vector3_const & Vector3_const & Vector3_const, &,void*), ,void*, Vector3, *,float, float), ::first_print != '\0') {
            _err_print_error("solve_static", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x181, "Collisions between world boundaries and soft bodies are not supported.", 0, 1);
            solve_static(GodotShape3D_const *, Transform3D_const &, GodotShape3D_const *, Transform3D_const &, void (*)(Vector3_const &, int, Vector3_const &, int, Vector3_const &, void *), void *, Vector3 *, float, float)
            return 0;
         }

      }

   }
 else if (iVar10 == 1) {
      if (iVar11 != 1) {
         pTVar7 = param_4;
         pGVar8 = param_3;
         if (iVar5 < iVar4) {
            pTVar7 = param_2;
            pGVar8 = param_1;
            param_2 = param_4;
            param_1 = param_3;
            param_8 = param_9;
         }

         uVar6 = solve_separation_ray(param_1, param_2, pGVar8, pTVar7, param_5, param_6, iVar5 < iVar4, param_8);
         return uVar6;
      }

      if (solve_static(GodotShape3D_const * Transform3D_const & GodotShape3D_const, *, Transform3D_const, &, void(*)(Vector3_const & Vector3_const & Vector3_const, &,void*), ,void*, Vector3, *,float, float), ::first_print != '\0') {
         _err_print_error("solve_static", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x18d, "Collisions between rays are not supported.", 0, 1);
         solve_static(GodotShape3D_const *, Transform3D_const &, GodotShape3D_const *, Transform3D_const &, void (*)(Vector3_const &, int, Vector3_const &, int, Vector3_const &, void *), void *, Vector3 *, float, float)
         return 0;
      }

   }
 else if (iVar11 == 9) {
      if (iVar10 != 9) {
         pTVar7 = param_2;
         pGVar8 = param_1;
         if (!bVar1) {
            pTVar7 = param_4;
            pGVar8 = param_3;
            param_4 = param_2;
            param_3 = param_1;
         }

         uVar6 = solve_soft_body(param_3, param_4, pGVar8, pTVar7, param_5, param_6, bVar1);
         return uVar6;
      }

      if (solve_static(GodotShape3D_const * Transform3D_const & GodotShape3D_const, *, Transform3D_const, &, void(*)(Vector3_const & Vector3_const & Vector3_const, &,void*), ,void*, Vector3, *,float, float), ::first_print != '\0') {
         _err_print_error("solve_static", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x199, "Collisions between soft bodies are not supported.", 0, 1);
         solve_static(GodotShape3D_const *, Transform3D_const &, GodotShape3D_const *, Transform3D_const &, void (*)(Vector3_const &, int, Vector3_const &, int, Vector3_const &, void *), void *, Vector3 *, float, float)
         return 0;
      }

   }
 else {
      if (cVar9 == '\0') {
         uVar6 = sat_calculate_penetration(param_1, param_2, param_3, param_4, param_5, param_6, false, param_7, param_8, param_9);
         return uVar6;
      }

      if (cVar3 == '\0') {
         pTVar7 = param_4;
         pGVar8 = param_3;
         if (iVar5 < iVar4) {
            pTVar7 = param_2;
            pGVar8 = param_1;
            param_2 = param_4;
            param_1 = param_3;
         }

         uVar6 = solve_concave(param_1, param_2, pGVar8, pTVar7, param_5, param_6, iVar5 < iVar4, param_8, param_9);
         return uVar6;
      }

      if (solve_static(GodotShape3D_const * Transform3D_const & GodotShape3D_const, *, Transform3D_const, &, void(*)(Vector3_const & Vector3_const & Vector3_const, &,void*), ,void*, Vector3, *,float, float), ::first_print != '\0') {
         _err_print_error("solve_static", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x1a5, "Collisions between two concave shapes are not supported.", 0, 1);
         solve_static(GodotShape3D_const *, Transform3D_const &, GodotShape3D_const *, Transform3D_const &, void (*)(Vector3_const &, int, Vector3_const &, int, Vector3_const &, void *), void *, Vector3 *, float, float)
         return 0;
      }

   }

   return 0;
}
/* GodotCollisionSolver3D::soft_body_query_callback(unsigned int, void*) */char GodotCollisionSolver3D::soft_body_query_callback(uint param_1, void *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar4;
   float extraout_XMM1_Da;
   Transform3D local_58[16];
   undefined1 local_48[16];
   undefined4 local_38;
   undefined8 local_34;
   float local_2c;
   long local_20;
   undefined8 uVar3;
   /* WARNING: Load size is inaccurate */
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = GodotSoftBody3D::get_node_position(( uint ) * param_2);
   fVar4 = (float)( (ulong)uVar3 >> 0x20 );
   fVar2 = (float)uVar3;
   *(uint*)( (long)param_2 + 0x78 ) = param_1;
   local_58 = (Transform3D[16])ZEXT416(_LC2);
   local_48 = ZEXT416(_LC2);
   local_38 = 0x3f800000;
   local_2c = *(float*)( (long)param_2 + 0x60 ) * fVar2 + *(float*)( (long)param_2 + 100 ) * fVar4 + *(float*)( (long)param_2 + 0x68 ) * extraout_XMM1_Da + *(float*)( (long)param_2 + 0x74 );
   local_34 = CONCAT44((float)( ( ulong ) * (undefined8*)( (long)param_2 + 0x50 ) >> 0x20 ) * fVar2 + fVar4 * *(float*)( (long)param_2 + 0x58 ) + (float)( ( ulong ) * (undefined8*)( (long)param_2 + 0x58 ) >> 0x20 ) * extraout_XMM1_Da + (float)( ( ulong ) * (undefined8*)( (long)param_2 + 0x6c ) >> 0x20 ), (float)*(undefined8*)( (long)param_2 + 0x48 ) * fVar2 + fVar4 * *(float*)( (long)param_2 + 0x4c ) + (float)*(undefined8*)( (long)param_2 + 0x50 ) * extraout_XMM1_Da + (float)*(undefined8*)( (long)param_2 + 0x6c ));
   cVar1 = solve_static(*(GodotShape3D**)( (long)param_2 + 8 ), (Transform3D*)( (long)param_2 + 0x18 ), *(GodotShape3D**)( (long)param_2 + 0x10 ), local_58, soft_body_contact_callback, (void*)( (long)param_2 + 0x78 ), (Vector3*)0x0, 0.0, 0.0);
   *(int*)( (long)param_2 + 0x98 ) = *(int*)( (long)param_2 + 0x98 ) + 1;
   if (cVar1 != '\0') {
      cVar1 = *(long*)( (long)param_2 + 0x80 ) == 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCollisionSolver3D::solve_distance_world_boundary(GodotShape3D const*, Transform3D const&,
   GodotShape3D const*, Transform3D const&, Vector3&, Vector3&) */ulong GodotCollisionSolver3D::solve_distance_world_boundary(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, Vector3 *param_5, Vector3 *param_6) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   undefined8 extraout_RDX;
   ulong uVar6;
   undefined8 *puVar7;
   float fVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   byte bVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   undefined8 uVar15;
   undefined1 auVar16[16];
   float fVar17;
   float extraout_XMM1_Da;
   float fVar18;
   float fVar20;
   undefined1 auVar19[16];
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar29;
   undefined1 auVar27[16];
   float fVar26;
   undefined1 auVar28[16];
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   double local_148;
   double local_140[2];
   int local_130;
   int local_12c;
   undefined8 local_128;
   float local_120;
   undefined1 local_118[8];
   undefined8 local_110;
   undefined8 local_108;
   float local_100;
   float fStack_fc;
   float local_f8;
   float fStack_f4;
   float local_f0;
   float fStack_ec;
   float local_e8;
   long local_40;
   bVar10 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = ( **(code**)( *(long*)param_3 + 8 ) )(param_3);
   if (iVar4 == 0) {
      uVar6 = 0;
      goto LAB_0010269f;
   }

   puVar9 = &local_108;
   _local_118 = GodotWorldBoundaryShape3D::get_plane();
   Basis::inverse();
   Basis::transpose();
   fVar23 = *(float*)( param_2 + 0x18 );
   fVar12 = *(float*)( param_2 + 0x1c );
   fVar25 = SUB164(_local_118, 0);
   fVar18 = SUB164(_local_118, 4);
   fVar31 = *(float*)( param_2 + 0x10 );
   fVar34 = SUB164(_local_118, 8);
   fVar17 = local_110._4_4_ * fVar34;
   fVar22 = local_110._4_4_ * fVar18;
   fVar11 = local_110._4_4_ * fVar25;
   fVar32 = *(float*)( param_2 + 4 );
   fVar30 = fVar25 * local_f0 + fVar18 * fStack_ec + fVar34 * local_e8;
   fVar26 = *(float*)( param_2 + 0x20 );
   fVar36 = *(float*)( param_2 + 0xc );
   fVar14 = *(float*)( param_2 + 0x2c );
   fVar24 = *(float*)param_2;
   fVar37 = *(float*)( param_2 + 0x14 );
   fVar35 = *(float*)( param_2 + 0x24 );
   fVar8 = *(float*)( param_2 + 8 );
   fVar13 = *(float*)( param_2 + 0x28 );
   auVar28._0_4_ = local_108._4_4_ * fVar18 + (float)local_108 * fVar25 + local_100 * fVar34;
   auVar28._4_4_ = local_f8 * fVar18 + fStack_fc * fVar25 + fStack_f4 * fVar34;
   auVar28._8_8_ = 0;
   fVar25 = auVar28._0_4_ * auVar28._0_4_ + auVar28._4_4_ * auVar28._4_4_ + fVar30 * fVar30;
   if (fVar25 == 0.0) {
      uVar15 = 0;
      fVar30 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar25 = _LC3;
      fVar18 = _LC3;
      fVar34 = _LC3;
   }
 else {
      fVar25 = SQRT(fVar25);
      fVar30 = fVar30 / fVar25;
      auVar16._4_4_ = fVar25;
      auVar16._0_4_ = fVar25;
      auVar16._8_8_ = _LC5;
      auVar28 = divps(auVar28, auVar16);
      uVar15 = auVar28._0_8_;
      fVar20 = auVar28._8_4_;
      fVar21 = auVar28._12_4_;
      fVar18 = (float)( auVar28._4_4_ ^ (uint)_LC3 );
      fVar34 = (float)( auVar28._0_4_ ^ (uint)_LC3 );
      fVar25 = (float)( (uint)_LC3 ^ (uint)fVar30 );
   }

   fVar33 = (float)uVar15;
   fVar29 = (float)( (ulong)uVar15 >> 0x20 );
   puVar7 = puVar9;
   for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
   }

   fVar23 = ( fVar35 + fVar11 * fVar24 + fVar22 * fVar32 + fVar17 * fVar8 ) * fVar33 + ( fVar36 * fVar11 + fVar31 * fVar22 + fVar37 * fVar17 + fVar13 ) * fVar29 + ( fVar23 * fVar11 + fVar12 * fVar22 + fVar26 * fVar17 + fVar14 ) * fVar30;
   fVar31 = *(float*)( param_4 + 8 ) * fVar34 + *(float*)( param_4 + 0x14 ) * fVar18 + *(float*)( param_4 + 0x20 ) * fVar25;
   auVar27._0_4_ = (float)*(undefined8*)param_4 * fVar34 + (float)*(undefined8*)( param_4 + 0xc ) * fVar18 + (float)*(undefined8*)( param_4 + 0x18 ) * fVar25;
   auVar27._4_4_ = (float)( ( ulong ) * (undefined8*)param_4 >> 0x20 ) * fVar34 + (float)( ( ulong ) * (undefined8*)( param_4 + 0xc ) >> 0x20 ) * fVar18 + (float)( ( ulong ) * (undefined8*)( param_4 + 0x18 ) >> 0x20 ) * fVar25;
   auVar27._8_4_ = fVar20 * 0.0 + fVar20 * 0.0 + 0.0;
   auVar27._12_4_ = fVar21 * 0.0 + fVar21 * 0.0 + 0.0;
   fVar12 = auVar27._0_4_ * auVar27._0_4_ + auVar27._4_4_ * auVar27._4_4_ + fVar31 * fVar31;
   local_120 = 0.0;
   local_128 = 0;
   if (fVar12 != 0.0) {
      fVar12 = SQRT(fVar12);
      local_120 = fVar31 / fVar12;
      auVar19._4_4_ = fVar12;
      auVar19._0_4_ = fVar12;
      auVar19._8_8_ = _LC5;
      auVar28 = divps(auVar27, auVar19);
      local_128 = auVar28._0_8_;
   }

   ( **(code**)( *(long*)param_3 + 0x28 ) )(param_3, &local_128, 0x10, puVar9, &local_130, &local_12c);
   fVar12 = local_100;
   if (local_130 == 0) {
      uVar15 = ( **(code**)( *(long*)param_3 + 0x20 ) )(param_3, &local_128);
      fVar12 = (float)uVar15;
      fVar32 = (float)( (ulong)uVar15 >> 0x20 );
      local_110 = CONCAT44(local_110._4_4_, extraout_XMM1_Da);
      local_118 = (undefined1[8])uVar15;
      fVar26 = *(float*)( param_4 + 0x18 ) * fVar12 + *(float*)( param_4 + 0x1c ) * fVar32 + *(float*)( param_4 + 0x20 ) * extraout_XMM1_Da + *(float*)( param_4 + 0x2c );
      fVar31 = (float)*(undefined8*)param_4 * fVar12 + fVar32 * *(float*)( param_4 + 4 ) + (float)*(undefined8*)( param_4 + 8 ) * extraout_XMM1_Da + (float)*(undefined8*)( param_4 + 0x24 );
      fVar12 = (float)( ( ulong ) * (undefined8*)( param_4 + 8 ) >> 0x20 ) * fVar12 + fVar32 * *(float*)( param_4 + 0x10 ) + (float)( ( ulong ) * (undefined8*)( param_4 + 0x10 ) >> 0x20 ) * extraout_XMM1_Da + (float)( ( ulong ) * (undefined8*)( param_4 + 0x24 ) >> 0x20 );
      fVar23 = ( fVar31 * fVar33 + fVar12 * fVar29 + fVar30 * fVar26 ) - fVar23;
      *(ulong*)param_5 = CONCAT44(fVar12 - fVar23 * fVar29, fVar31 - fVar23 * fVar33);
      *(float*)( param_5 + 8 ) = fVar26 - fVar30 * fVar23;
      *(ulong*)param_6 = CONCAT44(fVar12, fVar31);
      *(float*)( param_6 + 8 ) = fVar26;
      uVar6 = CONCAT71(( int7 )((ulong)extraout_RDX >> 8), fVar23 <= 0.0);
      goto LAB_0010269f;
   }

   if (local_12c == 3) {
      if (local_130 != 3) {
         _err_print_error("solve_distance_world_boundary", "modules/godot_physics_3d/godot_collision_solver_3d.cpp", 0x1e2, "Condition \"support_count != 3\" is true. Returning: false", 0, 0);
         uVar6 = 0;
         goto LAB_0010269f;
      }

      iVar4 = 1;
      fVar26 = (float)local_108;
      fVar36 = (float)( (ulong)local_108 >> 0x20 );
      fVar32 = local_e8 - local_100;
      fVar31 = fStack_f4 - local_100;
      local_108 = CONCAT44(( local_f8 - fVar36 ) + fVar36 + ( fStack_ec - fVar36 ) * 0.0, ( fStack_fc - fVar26 ) + fVar26 + ( local_f0 - fVar26 ) * 0.0);
      local_100 = fVar32 * 0.0 + fVar31 + local_100;
      puVar7 = puVar9;
      while (true) {
         sincos(( (double)iVar4 * __LC9 ) / __LC10, local_140, &local_148);
         fVar14 = (float)local_148;
         fVar24 = (float)local_140[0];
         *(float*)( (long)puVar7 + 0x14 ) = fVar14 * fVar31 + fVar12 + fVar24 * fVar32;
         *(undefined8*)( (long)puVar7 + 0xc ) = CONCAT44(fVar14 * ( local_f8 - fVar36 ) + fVar36 + fVar24 * ( fStack_ec - fVar36 ), fVar14 * ( fStack_fc - fVar26 ) + fVar26 + fVar24 * ( local_f0 - fVar26 ));
         if (iVar4 != 1) break;
         iVar4 = 2;
         puVar7 = (undefined8*)( (long)puVar7 + 0xc );
      }
;
      LAB_001024b7:fVar12 = *(float*)( param_4 + 0x1c );
      uVar15 = *(undefined8*)( param_4 + 8 );
      iVar4 = 0;
      uVar6 = 0;
      uVar1 = *(undefined8*)param_4;
      fVar31 = *(float*)( param_4 + 0x18 );
      fVar35 = 0.0;
      fVar32 = *(float*)( param_4 + 0x20 );
      uVar2 = *(undefined8*)( param_4 + 0x10 );
      uVar3 = *(undefined8*)( param_4 + 0x24 );
      fVar8 = 0.0;
      fVar24 = 0.0;
      fVar26 = *(float*)( param_4 + 0x2c );
      fVar36 = *(float*)( param_4 + 0x10 );
      fVar14 = *(float*)( param_4 + 4 );
      fVar37 = fVar24;
      do {
         fVar13 = *(float*)( puVar9 + 1 );
         fVar11 = (float)*puVar9;
         fVar22 = (float)( ( ulong ) * puVar9 >> 0x20 );
         fVar17 = fVar22 * fVar14 + fVar11 * (float)uVar1 + fVar13 * (float)uVar15 + (float)uVar3;
         fVar25 = fVar22 * fVar36 + fVar11 * (float)( (ulong)uVar15 >> 0x20 ) + fVar13 * (float)( (ulong)uVar2 >> 0x20 ) + (float)( (ulong)uVar3 >> 0x20 );
         *puVar9 = CONCAT44(fVar25, fVar17);
         fVar13 = fVar11 * fVar31 + fVar22 * fVar12 + fVar13 * fVar32 + fVar26;
         *(float*)( puVar9 + 1 ) = fVar13;
         fVar11 = ( fVar33 * fVar17 + fVar29 * fVar25 + fVar30 * fVar13 ) - fVar23;
         if (( ( iVar4 == 0 ) || ( fVar11 < fVar37 ) ) && ( fVar24 = fVar13 ),fVar37 = fVar11,fVar35 = fVar25,fVar8 = fVar17,fVar11 <= 0.0) {
            uVar6 = 1;
         }

         iVar4 = iVar4 + 1;
         puVar9 = (undefined8*)( (long)puVar9 + 0xc );
      }
 while ( local_130 != iVar4 );
      uVar15 = CONCAT44(fVar35, fVar8);
   }
 else {
      if (0 < local_130) goto LAB_001024b7;
      uVar15 = 0;
      fVar24 = 0.0;
      uVar6 = 0;
   }

   fVar12 = (float)( (ulong)uVar15 >> 0x20 );
   fVar23 = ( (float)uVar15 * fVar33 + fVar12 * fVar29 + fVar30 * fVar24 ) - fVar23;
   *(float*)( param_5 + 8 ) = fVar24 - fVar30 * fVar23;
   *(ulong*)param_5 = CONCAT44(fVar12 - fVar23 * fVar29, (float)uVar15 - fVar23 * fVar33);
   *(undefined8*)param_6 = uVar15;
   *(float*)( param_6 + 8 ) = fVar24;
   LAB_0010269f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCollisionSolver3D::solve_distance(GodotShape3D const*, Transform3D const&, GodotShape3D
   const*, Transform3D const&, Vector3&, Vector3&, AABB const&, Vector3*) */ulong GodotCollisionSolver3D::solve_distance(GodotShape3D *param_1, Transform3D *param_2, GodotShape3D *param_3, Transform3D *param_4, Vector3 *param_5, Vector3 *param_6, AABB *param_7, Vector3 *param_8) {
   char cVar1;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   AABB *pAVar5;
   AABB *pAVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float local_120;
   float local_11c;
   float local_118;
   float local_114;
   float local_110;
   float local_10c;
   float local_100;
   float local_fc;
   undefined8 local_f8;
   float local_f0;
   undefined8 local_e8;
   undefined4 local_e0;
   undefined8 local_dc;
   undefined4 local_d4;
   undefined8 local_c8;
   ulong uStack_c0;
   undefined1 local_b8[16];
   undefined4 local_a8;
   float fStack_a4;
   float fStack_a0;
   float fStack_9c;
   Transform3D *local_98;
   GodotShape3D *local_90;
   Transform3D *local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined2 local_70;
   undefined8 local_6c;
   undefined1 local_64;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 local_50;
   undefined8 local_4c;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ( **(code**)( *(long*)param_3 + 8 ) )(param_3);
   if (iVar2 == 0) {
      local_c8 = 0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      local_98 = (Transform3D*)0x0;
      local_90 = (GodotShape3D*)( (ulong)local_90 & 0xffffffff00000000 );
      uVar3 = solve_distance_world_boundary(param_3, param_4, param_1, param_2, (Vector3*)&local_c8, (Vector3*)&local_98);
      uVar4 = ( ulong )(uVar3 ^ 1);
      *(Transform3D**)param_5 = local_98;
      *(undefined4*)( param_5 + 8 ) = local_90._0_4_;
      *(undefined8*)param_6 = local_c8;
      *(undefined4*)( param_6 + 8 ) = (undefined4)uStack_c0;
   }
 else {
      cVar1 = ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3);
      if (cVar1 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = gjk_epa_calculate_distance(param_1, param_2, param_3, param_4, param_5, param_6);
            return uVar4;
         }

         goto LAB_00102f95;
      }

      cVar1 = ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1);
      uVar4 = 0;
      if (cVar1 == '\0') {
         local_c8 = *(undefined8*)param_2;
         uStack_c0 = *(ulong*)( param_2 + 8 );
         local_b8 = *(undefined1(*) [16])( param_2 + 0x10 );
         local_70 = 0;
         local_a8 = ( undefined4 ) * (undefined8*)( param_2 + 0x20 );
         fStack_a4 = (float)( ( ulong ) * (undefined8*)( param_2 + 0x20 ) >> 0x20 );
         fStack_a0 = (float)*(undefined8*)( param_2 + 0x28 );
         fStack_9c = (float)( ( ulong ) * (undefined8*)( param_2 + 0x28 ) >> 0x20 );
         local_80 = 0;
         fStack_a4 = fStack_a4 - (float)*(undefined8*)( param_4 + 0x24 );
         fStack_a0 = fStack_a0 - (float)( ( ulong ) * (undefined8*)( param_4 + 0x24 ) >> 0x20 );
         local_64 = 0;
         local_78 = 0;
         local_6c = 0;
         fStack_9c = fStack_9c - *(float*)( param_4 + 0x2c );
         local_60 = 0;
         local_58 = 0;
         local_50 = 0;
         local_4c = 0;
         local_44 = 0;
         local_e8 = 0;
         local_e0 = 0;
         local_dc = 0;
         local_d4 = 0;
         local_98 = param_2;
         local_90 = param_1;
         local_88 = param_4;
         cVar1 = AABB::operator !=(param_7, (AABB*)&local_e8);
         if (cVar1 == '\0') {
            local_120 = 0.0;
            local_118 = 0.0;
            local_114 = 0.0;
            local_11c = 0.0;
            local_10c = 0.0;
            local_110 = 0.0;
         }
 else {
            local_110 = *(float*)param_7 - *(float*)( param_4 + 0x24 );
            local_114 = *(float*)( param_7 + 0xc );
            local_120 = *(float*)( param_7 + 0x14 );
            local_10c = *(float*)( param_7 + 4 ) - *(float*)( param_4 + 0x28 );
            local_118 = *(float*)( param_7 + 0x10 );
            local_11c = *(float*)( param_7 + 8 ) - *(float*)( param_4 + 0x2c );
         }

         local_e0 = 0;
         local_e8 = 0;
         local_dc = 0;
         local_d4 = 0;
         pAVar5 = (AABB*)&local_e8;
         do {
            local_f0 = *(float*)( param_4 + 0x18 );
            fVar8 = (float)( ( ulong ) * (undefined8*)( param_4 + 8 ) >> 0x20 );
            fVar7 = (float)*(undefined8*)param_4;
            fVar9 = _LC2 / SQRT(fVar7 * fVar7 + fVar8 * fVar8 + local_f0 * local_f0);
            local_f0 = local_f0 * fVar9;
            fVar7 = fVar9 * fVar7;
            fVar8 = fVar9 * fVar8;
            local_f8 = CONCAT44(fVar8, fVar7);
            if (cVar1 == '\0') {
               ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1, &local_f8, &local_c8, &local_100, &local_fc);
               cVar1 = '\0';
               fVar7 = local_100;
               fVar8 = local_fc;
            }
 else {
               fVar10 = ABS(fVar7) * _LC21 * local_114 + ABS(fVar8) * _LC21 * local_118 + ABS(local_f0) * _LC21 * local_120;
               fVar8 = ( _LC21 * local_114 + local_110 ) * fVar7 + ( _LC21 * local_118 + local_10c ) * fVar8 + ( _LC21 * local_120 + local_11c ) * local_f0;
               fVar7 = fVar8 - fVar10;
               fVar8 = fVar10 + fVar8;
            }

            pAVar6 = pAVar5 + 4;
            param_4 = param_4 + 4;
            *(float*)pAVar5 = fVar7 * fVar9;
            *(float*)( pAVar5 + 0xc ) = fVar9 * fVar8 - fVar7 * fVar9;
            pAVar5 = pAVar6;
         }
 while ( pAVar6 != (AABB*)&local_dc );
         ( **(code**)( *(long*)param_3 + 0x70 ) )(param_3, (AABB*)&local_e8, concave_distance_callback, &local_98, 0);
         if (local_70._1_1_ == 0) {
            *(undefined8*)param_5 = local_58;
            *(undefined4*)( param_5 + 8 ) = local_50;
            *(undefined8*)param_6 = local_4c;
            *(undefined4*)( param_6 + 8 ) = local_44;
         }

         uVar4 = ( ulong )(local_70._1_1_ ^ 1);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   LAB_00102f95:/* WARNING: Subroutine does not return */__stack_chk_fail();
}

