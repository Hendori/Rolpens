/* GodotBodyPair2D::_add_contact(Vector2 const&, Vector2 const&, void*) */void GodotBodyPair2D::_add_contact(Vector2 *param_1, Vector2 *param_2, void *param_3) {
   long lVar1;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   Vector2 *pVVar11;
   long in_FS_OFFSET;
   float fVar12;
   undefined8 uVar13;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM0_Qb_00;
   undefined1 auVar14[16];
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined1 auStack_80[16];
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 local_64;
   undefined1 uStack_60;
   undefined1 uStack_5f;
   undefined2 uStack_5e;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar10 = *(int*)( (long)param_3 + 0x128 );
   fVar17 = (float)*(undefined8*)param_1;
   fVar12 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   uVar13 = *(undefined8*)( *(long*)( (long)param_3 + 0x30 ) + 0x68 );
   uVar3 = *(undefined8*)( *(long*)( (long)param_3 + 0x30 ) + 0x60 );
   fVar16 = *(float*)( param_2 + 4 ) - *(float*)( (long)param_3 + 0x5c );
   fVar18 = (float)*(undefined8*)param_2;
   fVar15 = fVar18 - *(float*)( (long)param_3 + 0x58 );
   uVar4 = *(undefined8*)( *(long*)( (long)param_3 + 0x38 ) + 0x68 );
   uVar5 = *(undefined8*)( *(long*)( (long)param_3 + 0x38 ) + 0x60 );
   if (iVar10 < 3) {
      local_b0 = CONCAT44(fVar12 - (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ), fVar17 - fVar18);
      auStack_80 = (undefined1[16])0x0;
      uStack_60 = 0;
      uStack_5f = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_88 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      local_64 = 0;
      uStack_5c = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_98 = CONCAT44((float)( (ulong)uVar13 >> 0x20 ) * fVar12 + (float)( (ulong)uVar3 >> 0x20 ) * fVar17, (float)uVar13 * fVar12 + (float)uVar3 * fVar17);
      uStack_90 = CONCAT44((float)( (ulong)uVar4 >> 0x20 ) * fVar16 + fVar15 * (float)( (ulong)uVar5 >> 0x20 ), (float)uVar4 * fVar16 + fVar15 * (float)uVar5);
      uStack_a0 = Vector2::normalized();
      iVar9 = *(int*)( (long)param_3 + 0x128 );
      uStack_5f = 1;
      fVar15 = *(float*)( *(long*)( (long)param_3 + 0x50 ) + 0xc4 );
      fVar15 = fVar15 * fVar15;
      if (0 < iVar9) {
         pVVar11 = (Vector2*)( (long)param_3 + 0x78 );
         iVar8 = 0;
         do {
            fVar12 = (float)Vector2::distance_squared_to(pVVar11);
            if (( fVar12 < fVar15 ) && ( fVar12 = (float)Vector2::distance_squared_to(pVVar11 + 8) ),fVar12 < fVar15) {
               pauVar2 = (undefined1(*) [16])( (long)param_3 + (long)iVar8 * 0x60 + 0x90 );
               uVar13 = *(undefined8*)*pauVar2;
               uVar3 = *(undefined8*)( *pauVar2 + 8 );
               auStack_80 = *pauVar2;
               lVar1 = (long)iVar8 * 3 + 3;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x18 ) = local_98;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x20 ) = uStack_90;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 8 ) = local_a8;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x10 ) = uStack_a0;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x38 ) = uVar3;
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x40 ) = CONCAT44(uStack_6c, uStack_70);
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x28 ) = local_88;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x30 ) = uVar13;
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x58 ) = CONCAT44(uStack_54, local_58);
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x60 ) = CONCAT44(uStack_4c, uStack_50);
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x48 ) = CONCAT44(local_64, uStack_68);
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x50 ) = CONCAT44(uStack_5c, CONCAT22(uStack_5e, CONCAT11(uStack_5f, uStack_60)));
               goto LAB_00100291;
            }

            iVar9 = *(int*)( (long)param_3 + 0x128 );
            iVar8 = iVar8 + 1;
            pVVar11 = pVVar11 + 0x60;
         }
 while ( iVar8 < iVar9 );
      }

      if (iVar10 == 2) {
         lVar1 = *(long*)( (long)param_3 + 0x30 );
         lVar6 = *(long*)( (long)param_3 + 0x38 );
         fVar15 = (float)( (ulong)local_98 >> 0x20 );
         fVar12 = (float)( (ulong)uStack_90 >> 0x20 );
         local_b0 = CONCAT44(( (float)( ( ulong ) * (undefined8*)( lVar1 + 0x50 ) >> 0x20 ) * fVar15 + (float)( ( ulong ) * (undefined8*)( lVar1 + 0x48 ) >> 0x20 ) * (float)local_98 ) - ( (float)uStack_90 * (float)( ( ulong ) * (undefined8*)( lVar6 + 0x48 ) >> 0x20 ) + fVar12 * (float)( ( ulong ) * (undefined8*)( lVar6 + 0x50 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( (long)param_3 + 0x58 ) >> 0x20 ) ), ( (float)*(undefined8*)( lVar1 + 0x50 ) * fVar15 + (float)*(undefined8*)( lVar1 + 0x48 ) * (float)local_98 ) - ( (float)uStack_90 * (float)*(undefined8*)( lVar6 + 0x48 ) + fVar12 * (float)*(undefined8*)( lVar6 + 0x50 ) + (float)*(undefined8*)( (long)param_3 + 0x58 ) ));
         uVar13 = Vector2::dot((Vector2*)&local_b0);
         auVar14._8_4_ = (int)extraout_XMM0_Qb;
         auVar14._0_8_ = uVar13;
         auVar14._12_4_ = (int)( (ulong)extraout_XMM0_Qb >> 0x20 );
         if (0 < *(int*)( (long)param_3 + 0x128 )) {
            lVar7 = (long)param_3 + 0x70;
            iVar9 = 0;
            iVar10 = -1;
            do {
               fVar18 = auVar14._0_4_;
               fVar15 = (float)*(undefined8*)( lVar7 + 8 );
               fVar12 = (float)( ( ulong ) * (undefined8*)( lVar7 + 8 ) >> 0x20 );
               fVar16 = (float)*(undefined8*)( lVar7 + 0x10 );
               fVar17 = (float)( ( ulong ) * (undefined8*)( lVar7 + 0x10 ) >> 0x20 );
               local_b0 = CONCAT44(( fVar15 * (float)( ( ulong ) * (undefined8*)( lVar1 + 0x48 ) >> 0x20 ) + fVar12 * (float)( ( ulong ) * (undefined8*)( lVar1 + 0x50 ) >> 0x20 ) ) - ( fVar16 * (float)( ( ulong ) * (undefined8*)( lVar6 + 0x48 ) >> 0x20 ) + fVar17 * (float)( ( ulong ) * (undefined8*)( lVar6 + 0x50 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( (long)param_3 + 0x58 ) >> 0x20 ) ), ( fVar15 * (float)*(undefined8*)( lVar1 + 0x48 ) + fVar12 * (float)*(undefined8*)( lVar1 + 0x50 ) ) - ( fVar16 * (float)*(undefined8*)( lVar6 + 0x48 ) + fVar17 * (float)*(undefined8*)( lVar6 + 0x50 ) + (float)*(undefined8*)( (long)param_3 + 0x58 ) ));
               auVar14._0_8_ = Vector2::dot((Vector2*)&local_b0);
               auVar14._8_8_ = extraout_XMM0_Qb_00;
               iVar8 = iVar9;
               if (fVar18 <= (float)auVar14._0_8_) {
                  auVar14._0_4_ = fVar18;
                  iVar8 = iVar10;
               }

               iVar9 = iVar9 + 1;
               lVar7 = lVar7 + 0x60;
               iVar10 = iVar8;
            }
 while ( iVar9 < *(int*)( (long)param_3 + 0x128 ) );
            if (-1 < iVar8) {
               lVar1 = (long)iVar8 * 3 + 3;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 8 ) = local_a8;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x10 ) = uStack_a0;
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x48 ) = CONCAT44(local_64, uStack_68);
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x50 ) = CONCAT44(uStack_5c, CONCAT22(uStack_5e, CONCAT11(uStack_5f, uStack_60)));
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x18 ) = local_98;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x20 ) = uStack_90;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x28 ) = local_88;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x30 ) = auStack_80._0_8_;
               *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x38 ) = auStack_80._8_8_;
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x40 ) = CONCAT44(uStack_6c, uStack_70);
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x58 ) = CONCAT44(uStack_54, local_58);
               *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x60 ) = CONCAT44(uStack_4c, uStack_50);
            }

         }

      }
 else {
         lVar1 = (long)iVar10 * 3 + 3;
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 8 ) = local_a8;
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x10 ) = uStack_a0;
         *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x48 ) = CONCAT44(local_64, uStack_68);
         *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x50 ) = CONCAT44(uStack_5c, CONCAT22(uStack_5e, CONCAT11(uStack_5f, uStack_60)));
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x18 ) = local_98;
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x20 ) = uStack_90;
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x28 ) = local_88;
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x30 ) = auStack_80._0_8_;
         *(undefined8*)( (long)param_3 + lVar1 * 0x20 + 0x38 ) = auStack_80._8_8_;
         *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x40 ) = CONCAT44(uStack_6c, uStack_70);
         *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x58 ) = CONCAT44(uStack_54, local_58);
         *(ulong*)( (long)param_3 + lVar1 * 0x20 + 0x60 ) = CONCAT44(uStack_4c, uStack_50);
         *(int*)( (long)param_3 + 0x128 ) = iVar9 + 1;
      }

   }
 else {
      _err_print_error("_contact_added_callback", "modules/godot_physics_2d/godot_body_pair_2d.cpp", 0x35, "Condition \"new_index >= (MAX_CONTACTS + 1)\" is true.", 0, 0);
   }

   LAB_00100291:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair2D::solve(float) */void GodotBodyPair2D::solve(GodotBodyPair2D *this, float param_1) {
   undefined8 uVar1;
   GodotBodyPair2D GVar2;
   long lVar3;
   GodotBodyPair2D *pGVar4;
   int iVar5;
   long lVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float local_84;
   float local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[300] != (GodotBodyPair2D)0x0 ) && ( this[0x12e] == (GodotBodyPair2D)0x0 )) {
      local_84 = 0.0;
      if (this[0x48] != (GodotBodyPair2D)0x0) {
         local_84 = *(float*)( *(long*)( this + 0x30 ) + 0x104 );
      }

      local_80 = 0.0;
      if (this[0x49] != (GodotBodyPair2D)0x0) {
         local_80 = *(float*)( *(long*)( this + 0x38 ) + 0x104 );
      }

      if (0 < *(int*)( this + 0x128 )) {
         pGVar4 = this + 0x70;
         iVar5 = 0;
         fVar13 = (float)( _LC5 / (double)param_1 );
         do {
            if (pGVar4[0x40] != (GodotBodyPair2D)0x0) {
               lVar6 = *(long*)( this + 0x30 );
               lVar3 = *(long*)( this + 0x38 );
               local_78 = CONCAT44(( ( *(float*)( lVar3 + 0xc0 ) * *(float*)( pGVar4 + 0x4c ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) ) - (float)( ( ulong ) * (undefined8*)( lVar6 + 0xb8 ) >> 0x20 ) ) - *(float*)( pGVar4 + 0x44 ) * *(float*)( lVar6 + 0xc0 ), ( ( (float)( ( uint ) * (float*)( lVar3 + 0xc0 ) ^ __LC6 ) * *(float*)( pGVar4 + 0x50 ) + (float)*(undefined8*)( lVar3 + 0xb8 ) ) - (float)*(undefined8*)( lVar6 + 0xb8 ) ) - (float)( ( uint ) * (float*)( lVar6 + 0xc0 ) ^ __LC6 ) * *(float*)( pGVar4 + 0x48 ));
               local_70 = CONCAT44(( ( *(float*)( lVar3 + 0xb4 ) * (float)*(undefined8*)( pGVar4 + 0x4c ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xac ) >> 0x20 ) ) - (float)( ( ulong ) * (undefined8*)( lVar6 + 0xac ) >> 0x20 ) ) - *(float*)( lVar6 + 0xb4 ) * (float)*(undefined8*)( pGVar4 + 0x44 ), ( ( (float)( ( uint ) * (float*)( lVar3 + 0xb4 ) ^ __LC6 ) * (float)( ( ulong ) * (undefined8*)( pGVar4 + 0x4c ) >> 0x20 ) + (float)*(undefined8*)( lVar3 + 0xac ) ) - (float)*(undefined8*)( lVar6 + 0xac ) ) - (float)( ( uint ) * (float*)( lVar6 + 0xb4 ) ^ __LC6 ) * (float)( ( ulong ) * (undefined8*)( pGVar4 + 0x44 ) >> 0x20 ));
               fVar7 = (float)Vector2::dot((Vector2*)&local_78);
               fVar8 = (float)Vector2::dot((Vector2*)&local_70);
               local_68 = CONCAT44(( uint ) * (float*)pGVar4 ^ __LC6, *(float*)( pGVar4 + 4 ));
               fVar9 = (float)Vector2::dot((Vector2*)&local_78);
               fVar10 = *(float*)( pGVar4 + 0x28 );
               fVar8 = ( *(float*)( pGVar4 + 0x38 ) - fVar8 ) * *(float*)( pGVar4 + 0x30 ) + fVar10;
               if (fVar8 <= 0.0) {
                  fVar8 = 0.0;
               }

               *(float*)( pGVar4 + 0x28 ) = fVar8;
               fVar8 = fVar8 - fVar10;
               fVar10 = fVar8 * (float)*(undefined8*)pGVar4;
               fVar8 = fVar8 * (float)( ( ulong ) * (undefined8*)pGVar4 >> 0x20 );
               local_60 = CONCAT44(fVar8, fVar10);
               if (this[0x48] != (GodotBodyPair2D)0x0) {
                  lVar6 = *(long*)( this + 0x30 );
                  uVar1 = *(undefined8*)( pGVar4 + 0x44 );
                  fVar10 = (float)( (uint)fVar10 ^ (uint)_LC7 );
                  fVar8 = (float)( (uint)fVar8 ^ _LC7._4_4_ );
                  local_50 = CONCAT44(fVar8, fVar10);
                  fVar11 = (float)*(undefined8*)( lVar6 + 0x104 );
                  *(ulong*)( lVar6 + 0xac ) = CONCAT44(fVar11 * fVar8 + (float)( ( ulong ) * (undefined8*)( lVar6 + 0xac ) >> 0x20 ), fVar11 * fVar10 + (float)*(undefined8*)( lVar6 + 0xac ));
                  if (fVar13 != 0.0) {
                     fVar8 = (float)*(undefined8*)( lVar6 + 0x118 );
                     fVar11 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x118 ) >> 0x20 );
                     fVar10 = *(float*)( lVar6 + 0x10c );
                     local_48 = CONCAT44(( (float)( (ulong)uVar1 >> 0x20 ) + fVar11 ) - fVar11, ( (float)uVar1 + fVar8 ) - fVar8);
                     fVar8 = (float)Vector2::cross((Vector2*)&local_48);
                     fVar8 = fVar8 * fVar10;
                     fVar10 = fVar8;
                     if (( 0.0 < fVar13 ) && ( fVar10 = fVar8 <= fVar13 )) {
                        fVar10 = fVar8;
                     }

                     *(float*)( lVar6 + 0xb4 ) = fVar10 + *(float*)( lVar6 + 0xb4 );
                  }

               }

               lVar6 = *(long*)( this + 0x38 );
               if (this[0x49] != (GodotBodyPair2D)0x0) {
                  uVar1 = *(undefined8*)( pGVar4 + 0x4c );
                  fVar10 = (float)*(undefined8*)( lVar6 + 0x104 );
                  *(ulong*)( lVar6 + 0xac ) = CONCAT44(fVar10 * (float)( (ulong)local_60 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar6 + 0xac ) >> 0x20 ), fVar10 * (float)local_60 + (float)*(undefined8*)( lVar6 + 0xac ));
                  if (fVar13 != 0.0) {
                     fVar8 = (float)*(undefined8*)( lVar6 + 0x118 );
                     fVar11 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x118 ) >> 0x20 );
                     fVar10 = *(float*)( lVar6 + 0x10c );
                     local_48 = CONCAT44(( (float)( (ulong)uVar1 >> 0x20 ) + fVar11 ) - fVar11, ( (float)uVar1 + fVar8 ) - fVar8);
                     fVar8 = (float)Vector2::cross((Vector2*)&local_48);
                     fVar8 = fVar8 * fVar10;
                     fVar10 = fVar8;
                     if (( 0.0 < fVar13 ) && ( fVar10 = fVar8 <= fVar13 )) {
                        fVar10 = fVar8;
                     }

                     *(float*)( lVar6 + 0xb4 ) = fVar10 + *(float*)( lVar6 + 0xb4 );
                     lVar6 = *(long*)( this + 0x38 );
                  }

               }

               fVar10 = *(float*)( *(long*)( this + 0x30 ) + 0xb4 );
               uVar1 = *(undefined8*)( *(long*)( this + 0x30 ) + 0xac );
               local_70 = CONCAT44(( ( *(float*)( lVar6 + 0xb4 ) * *(float*)( pGVar4 + 0x4c ) + (float)( ( ulong ) * (undefined8*)( lVar6 + 0xac ) >> 0x20 ) ) - (float)( (ulong)uVar1 >> 0x20 ) ) - fVar10 * *(float*)( pGVar4 + 0x44 ), ( ( (float)( ( uint ) * (float*)( lVar6 + 0xb4 ) ^ __LC6 ) * *(float*)( pGVar4 + 0x50 ) + (float)*(undefined8*)( lVar6 + 0xac ) ) - (float)uVar1 ) - (float)( (uint)fVar10 ^ __LC6 ) * *(float*)( pGVar4 + 0x48 ));
               fVar10 = (float)Vector2::dot((Vector2*)&local_70);
               if (__LC8 < (double)ABS(*(float*)( pGVar4 + 0x38 ) - fVar10)) {
                  fVar8 = *(float*)( pGVar4 + 0x2c );
                  fVar10 = ( *(float*)( pGVar4 + 0x38 ) - fVar10 ) / ( local_84 + local_80 ) + fVar8;
                  if (fVar10 <= 0.0) {
                     fVar10 = 0.0;
                  }

                  *(float*)( pGVar4 + 0x2c ) = fVar10;
                  fVar10 = fVar10 - fVar8;
                  GVar2 = this[0x48];
                  lVar6 = *(long*)( this + 0x30 );
                  fVar8 = fVar10 * (float)*(undefined8*)pGVar4;
                  fVar10 = fVar10 * (float)( ( ulong ) * (undefined8*)pGVar4 >> 0x20 );
                  if (GVar2 != (GodotBodyPair2D)0x0) {
                     *(ulong*)( lVar6 + 0xac ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar6 + 0xac ) >> 0x20 ) - *(float*)( lVar6 + 0x104 ) * fVar10, (float)*(undefined8*)( lVar6 + 0xac ) - *(float*)( lVar6 + 0x104 ) * fVar8);
                  }

                  lVar3 = *(long*)( this + 0x38 );
                  if (this[0x49] != (GodotBodyPair2D)0x0) {
                     *(ulong*)( lVar3 + 0xac ) = CONCAT44(*(float*)( lVar3 + 0x104 ) * fVar10 + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xac ) >> 0x20 ), *(float*)( lVar3 + 0x104 ) * fVar8 + (float)*(undefined8*)( lVar3 + 0xac ));
                  }

               }
 else {
                  GVar2 = this[0x48];
                  lVar6 = *(long*)( this + 0x30 );
                  lVar3 = *(long*)( this + 0x38 );
               }

               fVar10 = *(float*)( pGVar4 + 0x20 );
               fVar7 = fVar10 - ( fVar7 + *(float*)( pGVar4 + 0x54 ) ) * *(float*)( pGVar4 + 0x30 );
               if (fVar7 <= 0.0) {
                  fVar7 = 0.0;
               }

               fVar8 = *(float*)( lVar6 + 0xfc );
               *(float*)( pGVar4 + 0x20 ) = fVar7;
               if (*(float*)( lVar3 + 0xfc ) <= fVar8) {
                  fVar8 = *(float*)( lVar3 + 0xfc );
               }

               if (fVar8 < 0.0) {
                  fVar8 = (float)( (uint)fVar8 ^ __LC6 );
               }

               fVar11 = *(float*)( pGVar4 + 0x24 );
               fVar8 = fVar8 * fVar7;
               fVar12 = fVar11 - fVar9 * *(float*)( pGVar4 + 0x34 );
               fVar9 = (float)( (uint)fVar8 ^ __LC6 );
               if (( (float)( (uint)fVar8 ^ __LC6 ) <= fVar12 ) && ( fVar9 = fVar12 <= fVar8 )) {
                  fVar9 = fVar12;
               }

               *(float*)( pGVar4 + 0x24 ) = fVar9;
               fVar9 = fVar9 - fVar11;
               fVar7 = fVar7 - fVar10;
               fVar10 = fVar9 * (float)local_68 + fVar7 * *(float*)pGVar4;
               fVar7 = fVar9 * (float)( (ulong)local_68 >> 0x20 ) + fVar7 * *(float*)( pGVar4 + 4 );
               local_58 = CONCAT44(fVar7, fVar10);
               if (GVar2 != (GodotBodyPair2D)0x0) {
                  fVar9 = (float)*(undefined8*)( lVar6 + 0x118 );
                  fVar11 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x118 ) >> 0x20 );
                  fVar10 = (float)( (uint)fVar10 ^ (uint)_LC7 );
                  fVar7 = (float)( (uint)fVar7 ^ _LC7._4_4_ );
                  local_50 = CONCAT44(fVar7, fVar10);
                  fVar8 = *(float*)( lVar6 + 0x10c );
                  local_48 = CONCAT44(( (float)( ( ulong ) * (undefined8*)( pGVar4 + 0x44 ) >> 0x20 ) + fVar11 ) - fVar11, ( (float)*(undefined8*)( pGVar4 + 0x44 ) + fVar9 ) - fVar9);
                  fVar9 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x100 ) >> 0x20 );
                  *(ulong*)( lVar6 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar6 + 0xb8 ) >> 0x20 ) + fVar9 * fVar7, (float)*(undefined8*)( lVar6 + 0xb8 ) + fVar9 * fVar10);
                  fVar10 = (float)Vector2::cross((Vector2*)&local_48);
                  *(float*)( lVar6 + 0xc0 ) = fVar10 * fVar8 + *(float*)( lVar6 + 0xc0 );
               }

               if (this[0x49] != (GodotBodyPair2D)0x0) {
                  lVar6 = *(long*)( this + 0x38 );
                  fVar10 = *(float*)( lVar6 + 0x10c );
                  fVar7 = (float)*(undefined8*)( lVar6 + 0x118 );
                  fVar8 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x118 ) >> 0x20 );
                  local_48 = CONCAT44(( (float)( ( ulong ) * (undefined8*)( pGVar4 + 0x4c ) >> 0x20 ) + fVar8 ) - fVar8, ( (float)*(undefined8*)( pGVar4 + 0x4c ) + fVar7 ) - fVar7);
                  fVar7 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x100 ) >> 0x20 );
                  *(ulong*)( lVar6 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar6 + 0xb8 ) >> 0x20 ) + fVar7 * (float)( (ulong)local_58 >> 0x20 ), (float)*(undefined8*)( lVar6 + 0xb8 ) + fVar7 * (float)local_58);
                  fVar7 = (float)Vector2::cross((Vector2*)&local_48);
                  *(float*)( lVar6 + 0xc0 ) = fVar7 * fVar10 + *(float*)( lVar6 + 0xc0 );
               }

               *(ulong*)( pGVar4 + 0x18 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar4 + 0x18 ) >> 0x20 ) - (float)( (ulong)local_58 >> 0x20 ), (float)*(undefined8*)( pGVar4 + 0x18 ) - (float)local_58);
            }

            iVar5 = iVar5 + 1;
            pGVar4 = pGVar4 + 0x60;
         }
 while ( iVar5 < *(int*)( this + 0x128 ) );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<GodotBody2D::Contact>::_copy_on_write() [clone .isra.0] */void CowData<GodotBody2D::Contact>::_copy_on_write(CowData<GodotBody2D::Contact> *this) {
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
   __n = lVar2 * 0x50;
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
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
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
   __n = lVar2 * 8;
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
/* GodotBodyPair2D::~GodotBodyPair2D() */void GodotBodyPair2D::~GodotBodyPair2D(GodotBodyPair2D *this) {
   long lVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   long lVar5;
   lVar1 = *(long*)( this + 0x30 );
   *(undefined***)this = &PTR_setup_001034b0;
   plVar2 = *(long**)( lVar1 + 0x1d8 );
   if (plVar2 != (long*)0x0) {
      for (plVar4 = (long*)*plVar2; plVar4 != (long*)0x0; plVar4 = (long*)plVar4[2]) {
         if (( this == (GodotBodyPair2D*)*plVar4 ) && ( (int)plVar4[1] == 0 )) {
            if (plVar2 == (long*)plVar4[4]) {
               lVar5 = plVar4[2];
               if ((long*)*plVar2 == plVar4) {
                  *plVar2 = lVar5;
               }

               lVar3 = plVar4[3];
               if ((long*)plVar2[1] == plVar4) {
                  plVar2[1] = lVar3;
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x10 ) = lVar5;
                  lVar5 = plVar4[2];
               }

               if (lVar5 != 0) {
                  *(long*)( lVar5 + 0x18 ) = lVar3;
               }

               Memory::free_static(plVar4, false);
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            if (*(int*)( (long)*(void**)( lVar1 + 0x1d8 ) + 0x10 ) == 0) {
               Memory::free_static(*(void**)( lVar1 + 0x1d8 ), false);
               *(undefined8*)( lVar1 + 0x1d8 ) = 0;
            }

            break;
         }

      }

   }

   lVar1 = *(long*)( this + 0x38 );
   plVar2 = *(long**)( lVar1 + 0x1d8 );
   if (plVar2 != (long*)0x0) {
      for (plVar4 = (long*)*plVar2; plVar4 != (long*)0x0; plVar4 = (long*)plVar4[2]) {
         if (( this == (GodotBodyPair2D*)*plVar4 ) && ( (int)plVar4[1] == 1 )) {
            if (plVar2 == (long*)plVar4[4]) {
               lVar5 = plVar4[2];
               if ((long*)*plVar2 == plVar4) {
                  *plVar2 = lVar5;
               }

               lVar3 = plVar4[3];
               if ((long*)plVar2[1] == plVar4) {
                  plVar2[1] = lVar3;
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x10 ) = lVar5;
                  lVar5 = plVar4[2];
               }

               if (lVar5 != 0) {
                  *(long*)( lVar5 + 0x18 ) = lVar3;
               }

               Memory::free_static(plVar4, false);
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            if (*(int*)( (long)*(void**)( lVar1 + 0x1d8 ) + 0x10 ) != 0) {
               return;
            }

            Memory::free_static(*(void**)( lVar1 + 0x1d8 ), false);
            *(undefined8*)( lVar1 + 0x1d8 ) = 0;
            return;
         }

      }

   }

   return;
}
/* GodotBodyPair2D::~GodotBodyPair2D() */void GodotBodyPair2D::~GodotBodyPair2D(GodotBodyPair2D *this) {
   ~GodotBodyPair2D(this)
   ;;
   operator_delete(this, 0x130);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair2D::_validate_contacts() */void GodotBodyPair2D::_validate_contacts(GodotBodyPair2D *this) {
   int iVar1;
   int iVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   int iVar10;
   long lVar11;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   lVar7 = *(long*)( this + 0x30 );
   lVar8 = *(long*)( this + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = *(float*)( *(long*)( this + 0x50 ) + 200 );
   if (0 < *(int*)( this + 0x128 )) {
      iVar10 = 0;
      LAB_00101070:do {
         lVar11 = (long)iVar10;
         iVar2 = iVar10 + 1;
         lVar9 = lVar11 * 0x60;
         if (this[lVar9 + 0xb1] != (GodotBodyPair2D)0x0) {
            this[lVar9 + 0xb1] = (GodotBodyPair2D)0x0;
            uVar4 = *(undefined8*)( lVar7 + 0x48 );
            uVar5 = *(undefined8*)( lVar8 + 0x48 );
            fVar12 = (float)*(undefined8*)( this + lVar9 + 0x78 );
            fVar14 = (float)( ( ulong ) * (undefined8*)( this + lVar9 + 0x78 ) >> 0x20 );
            uVar6 = *(undefined8*)( lVar7 + 0x50 );
            fVar15 = fVar12 * (float)uVar4 + fVar14 * (float)uVar6;
            fVar16 = fVar12 * (float)( (ulong)uVar4 >> 0x20 ) + fVar14 * (float)( (ulong)uVar6 >> 0x20 );
            fVar12 = (float)*(undefined8*)( this + lVar9 + 0x80 );
            fVar14 = (float)( ( ulong ) * (undefined8*)( this + lVar9 + 0x80 ) >> 0x20 );
            uVar4 = *(undefined8*)( lVar8 + 0x50 );
            fVar13 = fVar12 * (float)uVar5 + fVar14 * (float)uVar4 + (float)*(undefined8*)( this + 0x58 );
            fVar14 = fVar12 * (float)( (ulong)uVar5 >> 0x20 ) + fVar14 * (float)( (ulong)uVar4 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x58 ) >> 0x20 );
            local_b0 = CONCAT44(fVar16 - fVar14, fVar15 - fVar13);
            fVar12 = (float)Vector2::dot((Vector2*)&local_b0);
            if ((float)( (uint)fVar3 ^ __LC6 ) <= fVar12) {
               local_a8 = CONCAT44(( fVar12 * (float)( ( ulong ) * (undefined8*)( this + ( lVar11 * 3 + 3 ) * 0x20 + 0x10 ) >> 0x20 ) + fVar14 ) - fVar16, ( fVar12 * (float)*(undefined8*)( this + ( lVar11 * 3 + 3 ) * 0x20 + 0x10 ) + fVar13 ) - fVar15);
               fVar12 = (float)Vector2::length_squared();
               if (fVar12 <= fVar3 * fVar3) {
                  iVar10 = iVar2;
                  if (*(int*)( this + 0x128 ) <= iVar2) break;
                  goto LAB_00101070;
               }

            }

         }

         iVar1 = *(int*)( this + 0x128 ) + -1;
         if (iVar2 < *(int*)( this + 0x128 )) {
            lVar9 = lVar11 * 3 + 3;
            lVar11 = (long)iVar1 * 3 + 3;
            local_a8 = *(undefined8*)( this + lVar9 * 0x20 + 8 );
            uStack_a0 = *(undefined8*)( this + lVar9 * 0x20 + 0x10 );
            local_98 = *(undefined8*)( this + lVar9 * 0x20 + 0x18 );
            uStack_90 = *(undefined8*)( this + lVar9 * 0x20 + 0x20 );
            uVar4 = *(undefined8*)( this + lVar11 * 0x20 + 0x10 );
            local_88 = *(undefined8*)( this + lVar9 * 0x20 + 0x28 );
            uStack_80 = *(undefined8*)( this + lVar9 * 0x20 + 0x30 );
            local_78 = *(undefined8*)( this + lVar9 * 0x20 + 0x38 );
            uStack_70 = *(undefined8*)( this + lVar9 * 0x20 + 0x40 );
            local_68 = *(undefined8*)( this + lVar9 * 0x20 + 0x48 );
            uStack_60 = *(undefined8*)( this + lVar9 * 0x20 + 0x50 );
            *(undefined8*)( this + lVar9 * 0x20 + 8 ) = *(undefined8*)( this + lVar11 * 0x20 + 8 );
            *(undefined8*)( this + lVar9 * 0x20 + 0x10 ) = uVar4;
            uVar4 = *(undefined8*)( this + lVar11 * 0x20 + 0x20 );
            local_58 = *(undefined8*)( this + lVar9 * 0x20 + 0x58 );
            uStack_50 = *(undefined8*)( this + lVar9 * 0x20 + 0x60 );
            *(undefined8*)( this + lVar9 * 0x20 + 0x18 ) = *(undefined8*)( this + lVar11 * 0x20 + 0x18 );
            *(undefined8*)( this + lVar9 * 0x20 + 0x20 ) = uVar4;
            for (int i = 0; i < 4; i++) {
               uVar4 = *(undefined8*)( this + lVar11 * 32 + ( 16*i + 48 ) );
               *(undefined8*)( this + lVar9 * 32 + ( 16*i + 40 ) ) = *(undefined8*)( this + lVar11 * 32 + ( 16*i + 40 ) );
               *(undefined8*)( this + lVar9 * 32 + ( 16*i + 48 ) ) = uVar4;
            }

            *(undefined8*)( this + lVar11 * 0x20 + 8 ) = local_a8;
            *(undefined8*)( this + lVar11 * 0x20 + 0x10 ) = uStack_a0;
            *(undefined8*)( this + lVar11 * 0x20 + 0x18 ) = local_98;
            *(undefined8*)( this + lVar11 * 0x20 + 0x20 ) = uStack_90;
            *(undefined8*)( this + lVar11 * 0x20 + 0x28 ) = local_88;
            *(undefined8*)( this + lVar11 * 0x20 + 0x30 ) = uStack_80;
            *(undefined8*)( this + lVar11 * 0x20 + 0x38 ) = local_78;
            *(undefined8*)( this + lVar11 * 0x20 + 0x40 ) = uStack_70;
            *(undefined8*)( this + lVar11 * 0x20 + 0x48 ) = local_68;
            *(undefined8*)( this + lVar11 * 0x20 + 0x50 ) = uStack_60;
            *(undefined8*)( this + lVar11 * 0x20 + 0x58 ) = local_58;
            *(undefined8*)( this + lVar11 * 0x20 + 0x60 ) = uStack_50;
         }

         *(int*)( this + 0x128 ) = iVar1;
      }
 while ( iVar10 < iVar1 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair2D::setup(float) */undefined8 GodotBodyPair2D::setup(float param_1) {
   ulong uVar1;
   GodotShape2D *pGVar2;
   GodotShape2D *pGVar3;
   code *pcVar4;
   GodotBodyPair2D GVar5;
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   int iVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   GodotBodyPair2D *in_RDI;
   long lVar14;
   GodotBodyPair2D *pGVar15;
   long in_FS_OFFSET;
   GodotBodyPair2D GVar16;
   float fVar17;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   Transform2D local_b8[32];
   Transform2D local_98[32];
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   Transform2D local_58[24];
   long local_40;
   lVar9 = *(long*)( in_RDI + 0x30 );
   lVar12 = *(long*)( in_RDI + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   in_RDI[0x12d] = (GodotBodyPair2D)0x0;
   if (( ( *(uint*)( lVar12 + 0x78 ) & *(uint*)( lVar9 + 0x7c ) ) == 0 ) && ( ( *(uint*)( lVar9 + 0x78 ) & *(uint*)( lVar12 + 0x7c ) ) == 0 )) {
      LAB_00101671:in_RDI[300] = (GodotBodyPair2D)0x0;
      goto LAB_00101678;
   }

   lVar11 = *(long*)( lVar9 + 0x1b0 );
   if (lVar11 != 0) {
      lVar14 = *(long*)( lVar11 + -8 );
      iVar10 = (int)lVar14 + -1;
      if (lVar14 < 1) goto LAB_001016c0;
      iVar13 = 0;
      if (-1 < iVar10) {
         do {
            while (true) {
               iVar7 = ( iVar10 + iVar13 ) / 2;
               uVar1 = *(ulong*)( lVar11 + (long)iVar7 * 8 );
               if (*(ulong*)( lVar12 + 0x10 ) < uVar1) break;
               if (*(ulong*)( lVar12 + 0x10 ) <= uVar1) {
                  if (iVar7 != -1) goto LAB_00101671;
                  goto LAB_0010131f;
               }

               iVar13 = iVar7 + 1;
               if (iVar10 < iVar13) goto LAB_0010131f;
            }
;
            iVar10 = iVar7 + -1;
         }
 while ( iVar13 <= iVar10 );
      }

   }

   LAB_0010131f:lVar12 = *(long*)( lVar12 + 0x1b0 );
   if (lVar12 != 0) {
      lVar14 = *(long*)( lVar12 + -8 );
      iVar10 = (int)lVar14 + -1;
      if (lVar14 < 1) {
         LAB_001016c0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar14, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      iVar13 = 0;
      if (-1 < iVar10) {
         do {
            while (true) {
               iVar7 = ( iVar13 + iVar10 ) / 2;
               uVar1 = *(ulong*)( lVar12 + (long)iVar7 * 8 );
               if (*(ulong*)( lVar9 + 0x10 ) < uVar1) break;
               if (*(ulong*)( lVar9 + 0x10 ) <= uVar1) {
                  if (iVar7 != -1) {
                     in_RDI[300] = (GodotBodyPair2D)0x0;
                     goto LAB_00101678;
                  }

                  goto LAB_0010137f;
               }

               iVar13 = iVar7 + 1;
               if (iVar10 < iVar13) goto LAB_0010137f;
            }
;
            iVar10 = iVar7 + -1;
         }
 while ( iVar13 <= iVar10 );
      }

   }

   LAB_0010137f:iVar10 = GodotBody2D::get_mode();
   if (iVar10 < 2) {
      GVar16 = (GodotBodyPair2D)0x0;
   }
 else {
      GVar16 = ( GodotBodyPair2D )(( *(uint*)( *(long*)( in_RDI + 0x30 ) + 0x78 ) & *(uint*)( *(long*)( in_RDI + 0x38 ) + 0x7c ) ) != 0);
   }

   in_RDI[0x48] = GVar16;
   iVar10 = GodotBody2D::get_mode();
   lVar9 = *(long*)( in_RDI + 0x38 );
   lVar12 = *(long*)( in_RDI + 0x30 );
   if (( iVar10 < 2 ) || ( ( *(uint*)( lVar9 + 0x78 ) & *(uint*)( lVar12 + 0x7c ) ) == 0 )) {
      in_RDI[0x49] = (GodotBodyPair2D)0x0;
      in_RDI[0x12f] = (GodotBodyPair2D)0x0;
      if (in_RDI[0x48] == (GodotBodyPair2D)0x0) {
         if (( ( *(long*)( lVar12 + 0x1f8 ) == 0 ) || ( *(int*)( *(long*)( lVar12 + 0x1f8 ) + -8 ) < 1 ) ) && ( ( *(long*)( lVar9 + 0x1f8 ) == 0 || ( *(int*)( *(long*)( lVar9 + 0x1f8 ) + -8 ) < 1 ) ) )) goto LAB_00101671;
         in_RDI[0x12f] = (GodotBodyPair2D)0x1;
      }

   }
 else {
      in_RDI[0x49] = (GodotBodyPair2D)0x1;
      in_RDI[0x12f] = (GodotBodyPair2D)0x0;
   }

   *(ulong*)( in_RDI + 0x58 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar9 + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar12 + 0x58 ) >> 0x20 ), (float)*(undefined8*)( lVar9 + 0x58 ) - (float)*(undefined8*)( lVar12 + 0x58 ));
   _validate_contacts(in_RDI);
   lVar9 = *(long*)( in_RDI + 0x30 );
   Transform2D::untranslated();
   lVar11 = (long)*(int*)( in_RDI + 0x40 );
   lVar12 = *(long*)( *(long*)( in_RDI + 0x30 ) + 0x38 );
   if (*(int*)( in_RDI + 0x40 ) < 0) {
      if (lVar12 != 0) {
         lVar12 = *(long*)( lVar12 + -8 );
         goto LAB_001017cd;
      }

   }
 else if (lVar12 != 0) {
      lVar12 = *(long*)( lVar12 + -8 );
      if (lVar12 <= lVar11) goto LAB_001017cd;
      Transform2D::operator *(local_98, local_b8);
      lVar12 = *(long*)( in_RDI + 0x38 );
      iVar10 = *(int*)( in_RDI + 0x44 );
      lVar11 = (long)iVar10;
      local_78 = *(undefined8*)( lVar12 + 0x48 );
      uStack_70 = *(undefined8*)( lVar12 + 0x50 );
      local_68 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar12 + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar9 + 0x58 ) >> 0x20 ), (float)*(undefined8*)( lVar12 + 0x58 ) - (float)*(undefined8*)( lVar9 + 0x58 ));
      if (iVar10 < 0) {
         lVar9 = *(long*)( lVar12 + 0x38 );
         if (lVar9 != 0) {
            LAB_00101817:lVar11 = (long)iVar10;
            lVar12 = *(long*)( lVar9 + -8 );
            goto LAB_001017cd;
         }

      }
 else {
         lVar9 = *(long*)( lVar12 + 0x38 );
         if (lVar9 != 0) {
            if (*(long*)( lVar9 + -8 ) <= lVar11) goto LAB_00101817;
            Transform2D::operator *(local_58, (Transform2D*)&local_78);
            iVar10 = *(int*)( in_RDI + 0x40 );
            lVar12 = (long)iVar10;
            lVar9 = *(long*)( in_RDI + 0x30 );
            if (iVar10 < 0) {
               lVar11 = *(long*)( lVar9 + 0x38 );
               if (lVar11 != 0) {
                  LAB_00101831:lVar12 = (long)iVar10;
                  lVar9 = *(long*)( lVar11 + -8 );
                  goto LAB_00101838;
               }

            }
 else {
               lVar11 = *(long*)( lVar9 + 0x38 );
               if (lVar11 != 0) {
                  if (*(long*)( lVar11 + -8 ) <= lVar12) goto LAB_00101831;
                  lVar14 = *(long*)( in_RDI + 0x38 );
                  pGVar2 = *(GodotShape2D**)( lVar11 + 0x48 + lVar12 * 0x58 );
                  lVar12 = (long)*(int*)( in_RDI + 0x44 );
                  lVar11 = *(long*)( lVar14 + 0x38 );
                  if (*(int*)( in_RDI + 0x44 ) < 0) {
                     if (lVar11 != 0) {
                        LAB_0010187b:lVar9 = *(long*)( lVar11 + -8 );
                        goto LAB_00101838;
                     }

                  }
 else if (lVar11 != 0) {
                     if (*(long*)( lVar11 + -8 ) <= lVar12) goto LAB_0010187b;
                     local_d0 = 0;
                     local_c8 = 0;
                     pGVar3 = *(GodotShape2D**)( lVar11 + 0x48 + lVar12 * 0x58 );
                     if (*(int*)( lVar9 + 0x1b8 ) == 2) {
                        if (*(int*)( lVar9 + 0xa8 ) < 2) {
                           local_d0 = 0;
                           if (*(int*)( lVar9 + 0xa8 ) == 1) {
                              local_d0 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar9 + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar9 + 0x1d0 ) >> 0x20 ), (float)*(undefined8*)( lVar9 + 0x58 ) - (float)*(undefined8*)( lVar9 + 0x1d0 ));
                           }

                        }
 else {
                           local_d0 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar9 + 0x1d0 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar9 + 0x58 ) >> 0x20 ), (float)*(undefined8*)( lVar9 + 0x1d0 ) - (float)*(undefined8*)( lVar9 + 0x58 ));
                        }

                     }

                     if (*(int*)( lVar14 + 0x1b8 ) == 2) {
                        if (*(int*)( lVar14 + 0xa8 ) < 2) {
                           local_c8 = 0;
                           if (*(int*)( lVar14 + 0xa8 ) == 1) {
                              local_c8 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar14 + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar14 + 0x1d0 ) >> 0x20 ), (float)*(undefined8*)( lVar14 + 0x58 ) - (float)*(undefined8*)( lVar14 + 0x1d0 ));
                           }

                        }
 else {
                           local_c8 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar14 + 0x1d0 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar14 + 0x58 ) >> 0x20 ), (float)*(undefined8*)( lVar14 + 0x1d0 ) - (float)*(undefined8*)( lVar14 + 0x58 ));
                        }

                     }

                     GVar16 = in_RDI[300];
                     GVar5 = (GodotBodyPair2D)GodotCollisionSolver2D::solve(pGVar2, local_98, (Vector2*)&local_d0, pGVar3, local_58, (Vector2*)&local_c8, _add_contact, in_RDI, (Vector2*)( in_RDI + 0x60 ), 0.0, 0.0);
                     in_RDI[300] = GVar5;
                     if (GVar5 == (GodotBodyPair2D)0x0) {
                        in_RDI[0x12e] = (GodotBodyPair2D)0x0;
                        if (( ( *(int*)( *(long*)( in_RDI + 0x30 ) + 0x1b8 ) == 1 ) && ( in_RDI[0x48] != (GodotBodyPair2D)0x0 ) ) || ( ( *(int*)( *(long*)( in_RDI + 0x38 ) + 0x1b8 ) == 1 && ( in_RDI[0x49] != (GodotBodyPair2D)0x0 ) ) )) {
                           in_RDI[0x12d] = (GodotBodyPair2D)0x1;
                           goto LAB_0010165e;
                        }

                     }
 else if (in_RDI[0x12e] == (GodotBodyPair2D)0x0) {
                        if (GVar16 == (GodotBodyPair2D)0x0) {
                           cVar6 = ( **(code**)( *(long*)pGVar3 + 8 ) )(pGVar3);
                           if (cVar6 != '\0') {
                              lVar12 = (long)*(int*)( in_RDI + 0x40 );
                              lVar9 = *(long*)( *(long*)( in_RDI + 0x30 ) + 0x38 );
                              if (*(int*)( in_RDI + 0x40 ) < 0) {
                                 LAB_0010197a:if (lVar9 == 0) {
                                    LAB_0010197f:lVar9 = 0;
                                    goto LAB_0010193c;
                                 }

                              }
 else {
                                 if (lVar9 == 0) goto LAB_0010197f;
                                 if (lVar12 < *(long*)( lVar9 + -8 )) {
                                    if (*(char*)( lVar9 + 0x51 + lVar12 * 0x58 ) == '\0') goto LAB_00101616;
                                    pGVar15 = in_RDI + 0x70;
                                    iVar10 = 0;
                                    local_c0 = Vector2::normalized();
                                    if (0 < *(int*)( in_RDI + 0x128 )) {
                                       do {
                                          fVar17 = (float)Vector2::dot((Vector2*)pGVar15);
                                          if ((double)fVar17 <= __LC27) goto LAB_00101616;
                                          iVar10 = iVar10 + 1;
                                          pGVar15 = (GodotBodyPair2D*)( (Vector2*)pGVar15 + 0x60 );
                                       }
 while ( iVar10 < *(int*)( in_RDI + 0x128 ) );
                                    }

                                    LAB_00101925:in_RDI[300] = (GodotBodyPair2D)0x0;
                                    in_RDI[0x12e] = (GodotBodyPair2D)0x1;
                                    goto LAB_00101678;
                                 }

                              }

                              LAB_00101938:lVar9 = *(long*)( lVar9 + -8 );
                              LAB_0010193c:_err_print_index_error("is_shape_set_as_one_way_collision", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x95, lVar12, lVar9, "p_idx", "shapes.size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar4 = (code*)invalidInstructionException();
                              ( *pcVar4 )();
                           }

                           LAB_00101616:cVar6 = ( **(code**)( *(long*)pGVar2 + 8 ) )(pGVar2);
                           if (cVar6 != '\0') {
                              lVar12 = (long)*(int*)( in_RDI + 0x44 );
                              lVar9 = *(long*)( *(long*)( in_RDI + 0x38 ) + 0x38 );
                              if (*(int*)( in_RDI + 0x44 ) < 0) goto LAB_0010197a;
                              if (lVar9 == 0) goto LAB_0010197f;
                              if (*(long*)( lVar9 + -8 ) <= lVar12) goto LAB_00101938;
                              if (*(char*)( lVar9 + 0x51 + lVar12 * 0x58 ) != '\0') {
                                 pGVar15 = in_RDI + 0x70;
                                 iVar10 = 0;
                                 local_c0 = Vector2::normalized();
                                 if (0 < *(int*)( in_RDI + 0x128 )) {
                                    do {
                                       fVar17 = (float)Vector2::dot((Vector2*)pGVar15);
                                       if (_LC28 <= (double)fVar17) goto LAB_0010165e;
                                       iVar10 = iVar10 + 1;
                                       pGVar15 = (GodotBodyPair2D*)( (Vector2*)pGVar15 + 0x60 );
                                    }
 while ( iVar10 < *(int*)( in_RDI + 0x128 ) );
                                 }

                                 goto LAB_00101925;
                              }

                           }

                        }

                        LAB_0010165e:uVar8 = 1;
                        goto LAB_0010167a;
                     }

                     LAB_00101678:uVar8 = 0;
                     LAB_0010167a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                        /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
                     }

                     return uVar8;
                  }

               }

            }

            lVar9 = 0;
            LAB_00101838:_err_print_index_error("get_shape", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x75, lVar12, lVar9, "p_index", "shapes.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

      }

   }

   lVar12 = 0;
   LAB_001017cd:_err_print_index_error("get_shape_transform", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x79, lVar11, lVar12, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair2D::_test_ccd(float, GodotBody2D*, int, Transform2D const&, GodotBody2D*, int,
   Transform2D const&) */undefined4 GodotBodyPair2D::_test_ccd(float param_1, GodotBody2D *param_2, int param_3, Transform2D *param_4, GodotBody2D *param_5, int param_6, Transform2D *param_7) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   undefined4 in_register_00000034;
   long lVar6;
   undefined4 in_register_00000084;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   undefined4 uVar12;
   undefined4 uVar13;
   float fVar14;
   float fVar16;
   undefined1 auVar15[16];
   float fVar17;
   undefined1 auVar18[16];
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float local_d4;
   float local_d0;
   undefined1 local_cc[4];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   Vector2 local_78[32];
   undefined8 local_58[3];
   long local_40;
   lVar7 = CONCAT44(in_register_00000084, param_6);
   lVar6 = CONCAT44(in_register_00000034, param_3);
   local_c8 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar6 + 0xb8 ) >> 0x20 ) * param_1, (float)*(undefined8*)( lVar6 + 0xb8 ) * param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar15._0_4_ = (float)Vector2::length();
   if ((double)auVar15._0_4_ < _LC28) {
      LAB_00101b2e:uVar12 = 0;
      LAB_00101e90:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar12;
   }

   auVar18._8_8_ = 0;
   auVar18._0_8_ = local_c8;
   auVar15._4_4_ = auVar15._0_4_;
   lVar9 = *(long*)( lVar6 + 0x38 );
   auVar15._8_8_ = __LC33;
   local_d4 = 0.0;
   lVar10 = (long)(int)param_4;
   auVar18 = divps(auVar18, auVar15);
   local_d0 = 0.0;
   local_c0 = auVar18._0_8_;
   lVar5 = lVar10;
   if ((int)param_4 < 0) {
      if (lVar9 != 0) {
         lVar8 = *(long*)( lVar9 + -8 );
         goto LAB_00101ee7;
      }

   }
 else if (lVar9 != 0) {
      lVar8 = *(long*)( lVar9 + -8 );
      if (lVar8 <= lVar10) goto LAB_00101ee7;
      lVar4 = lVar10 * 0x58;
      plVar1 = *(long**)( lVar9 + 0x48 + lVar4 );
      ( **(code**)( *plVar1 + 0x20 ) )(plVar1, &local_c0, param_5, &local_d4);
      if ((double)auVar15._0_4_ <= (double)( local_d0 - local_d4 ) * __LC30) goto LAB_00101b2e;
      local_58[0] = CONCAT44(param_1 * (float)( ( ulong ) * (undefined8*)( lVar7 + 0xb8 ) >> 0x20 ), param_1 * (float)*(undefined8*)( lVar7 + 0xb8 ));
      Transform2D::translated(local_78);
      lVar9 = *(long*)( lVar6 + 0x38 );
      local_88 = 0;
      local_80 = 0;
      if (lVar9 != 0) {
         lVar8 = *(long*)( lVar9 + -8 );
         if (lVar8 <= lVar10) goto LAB_00101ee7;
         plVar1 = *(long**)( lVar9 + 0x48 + lVar4 );
         pcVar2 = *(code**)( *plVar1 + 0x38 );
         uVar12 = Vector2::dot((Vector2*)( param_5 + 8 ));
         uVar13 = Vector2::dot((Vector2*)param_5);
         local_90 = CONCAT44(uVar12, uVar13);
         local_58[0] = Vector2::normalized();
         ( *pcVar2 )(plVar1, local_58, &local_88, local_cc);
         lVar11 = (long)(int)param_7;
         fVar16 = (float)( (ulong)local_88 >> 0x20 );
         fVar14 = (float)*(undefined8*)param_5 * (float)local_88 + fVar16 * (float)*(undefined8*)( param_5 + 8 ) + (float)*(undefined8*)( param_5 + 0x10 );
         fVar16 = (float)( ( ulong ) * (undefined8*)param_5 >> 0x20 ) * (float)local_88 + fVar16 * (float)( ( ulong ) * (undefined8*)( param_5 + 8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_5 + 0x10 ) >> 0x20 );
         local_b8 = CONCAT44(fVar16, fVar14);
         fVar14 = fVar14 + (float)local_c8;
         fVar16 = local_c8._4_4_ + fVar16;
         Transform2D::affine_inverse();
         local_a0 = 0;
         local_98 = 0;
         lVar9 = *(long*)( lVar7 + 0x38 );
         fVar22 = (float)( (ulong)local_58[0] >> 0x20 );
         fVar19 = local_b8._4_4_ - local_c8._4_4_ * _LC31;
         fVar17 = (float)local_b8 - _LC31 * (float)local_c8;
         fVar20 = (float)( (ulong)local_58[1] >> 0x20 );
         fVar21 = (float)( (ulong)local_58[2] >> 0x20 );
         local_a8 = CONCAT44(fVar14 * fVar22 + fVar20 * fVar16 + fVar21, fVar14 * (float)local_58[0] + (float)local_58[1] * fVar16 + (float)local_58[2]);
         local_b0 = CONCAT44(fVar17 * fVar22 + fVar19 * fVar20 + fVar21, fVar17 * (float)local_58[0] + fVar19 * (float)local_58[1] + (float)local_58[2]);
         lVar5 = lVar11;
         if ((int)param_7 < 0) {
            if (lVar9 != 0) {
               lVar8 = *(long*)( lVar9 + -8 );
               goto LAB_00101ee7;
            }

         }
 else if (lVar9 != 0) {
            lVar8 = *(long*)( lVar9 + -8 );
            if (lVar8 <= lVar11) goto LAB_00101ee7;
            plVar1 = *(long**)( lVar9 + 0x48 + lVar11 * 0x58 );
            uVar12 = ( **(code**)( *plVar1 + 0x40 ) )(plVar1, &local_b0, &local_a8, &local_a0);
            if ((char)uVar12 == '\0') goto LAB_00101b2e;
            lVar9 = *(long*)( lVar6 + 0x38 );
            if (lVar9 != 0) {
               lVar8 = *(long*)( lVar9 + -8 );
               lVar5 = lVar10;
               if (lVar8 <= lVar10) goto LAB_00101ee7;
               cVar3 = ( **(code**)( **(long**)( lVar9 + 0x48 + lVar4 ) + 8 ) )();
               if (cVar3 != '\0') {
                  lVar7 = *(long*)( lVar7 + 0x38 );
                  if (lVar7 == 0) {
                     lVar9 = 0;
                     LAB_00101fae:_err_print_index_error("is_shape_set_as_one_way_collision", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x95, lVar11, lVar9, "p_idx", "shapes.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar9 = *(long*)( lVar7 + -8 );
                  if (lVar9 <= lVar11) goto LAB_00101fae;
                  if (*(char*)( lVar7 + 0x51 + lVar11 * 0x58 ) != '\0') {
                     local_90 = Vector2::normalized();
                     fVar14 = (float)Vector2::dot((Vector2*)&local_90);
                     if ((double)fVar14 < _LC28) {
                        param_2[300] = (GodotBody2D)0x0;
                        param_2[0x12e] = (GodotBody2D)0x1;
                        goto LAB_00101b2e;
                     }

                  }

               }

               fVar14 = (float)( (ulong)local_a0 >> 0x20 );
               local_90 = CONCAT44((float)local_a0 * SUB84(local_78._0_8_, 4) + fVar14 * SUB84(local_78._8_8_, 4) + SUB84(local_78._16_8_, 4), (float)local_a0 * (float)local_78._0_8_ + fVar14 * (float)local_78._8_8_ + (float)local_78._16_8_);
               fVar14 = (float)Vector2::distance_to((Vector2*)&local_90);
               fVar14 = (float)( (double)( local_d0 - local_d4 ) * __LC32 + (double)fVar14 ) / param_1;
               *(ulong*)( lVar6 + 0xb8 ) = CONCAT44((float)( (ulong)local_c0 >> 0x20 ) * fVar14, (float)local_c0 * fVar14);
               goto LAB_00101e90;
            }

            goto LAB_00101f10;
         }

         lVar8 = 0;
         goto LAB_00101ee7;
      }

   }

   LAB_00101f10:lVar8 = 0;
   lVar5 = lVar10;
   LAB_00101ee7:_err_print_index_error("get_shape", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x75, lVar5, lVar8, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair2D::pre_solve(float) */GodotBodyPair2D GodotBodyPair2D::pre_solve(GodotBodyPair2D *this, float param_1) {
   Vector2 *pVVar1;
   long lVar2;
   long lVar3;
   float fVar4;
   undefined8 uVar5;
   undefined1 auVar6[16];
   GodotBodyPair2D GVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   long lVar10;
   long lVar11;
   code *pcVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 *puVar15;
   long lVar16;
   long lVar17;
   int iVar18;
   long lVar19;
   int iVar20;
   int iVar21;
   float *pfVar22;
   GodotBodyPair2D *pGVar23;
   long in_FS_OFFSET;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   uint uVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   undefined8 uVar33;
   float fVar34;
   float fVar35;
   uint uVar36;
   undefined1 auVar37[16];
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   int local_158;
   GodotBodyPair2D local_e6;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_98[4];
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x12e] == (GodotBodyPair2D)0x0) {
      GVar7 = this[300];
      if (GVar7 != (GodotBodyPair2D)0x0) {
         lVar10 = *(long*)( this + 0x30 );
         lVar17 = (long)*(int*)( this + 0x40 );
         fVar4 = *(float*)( *(long*)( this + 0x50 ) + 0xcc );
         lVar16 = *(long*)( lVar10 + 0x38 );
         if (*(int*)( this + 0x40 ) < 0) {
            LAB_00102da8:if (lVar16 != 0) {
               lVar19 = *(long*)( lVar16 + -8 );
               goto LAB_00102db5;
            }

         }
 else if (lVar16 != 0) {
            lVar19 = *(long*)( lVar16 + -8 );
            if (lVar19 <= lVar17) goto LAB_00102db5;
            lVar11 = *(long*)( this + 0x38 );
            lVar2 = lVar16 + 0x48;
            lVar3 = lVar17 * 0x58;
            lVar17 = (long)*(int*)( this + 0x44 );
            lVar16 = *(long*)( lVar11 + 0x38 );
            if (*(int*)( this + 0x44 ) < 0) goto LAB_00102da8;
            if (lVar16 == 0) goto LAB_00102f18;
            lVar19 = *(long*)( lVar16 + -8 );
            if (lVar19 <= lVar17) goto LAB_00102db5;
            fVar35 = *(float*)( *(long*)( lVar2 + lVar3 ) + 0x24 );
            fVar38 = *(float*)( *(long*)( lVar16 + 0x48 + lVar17 * 0x58 ) + 0x24 );
            if (fVar35 == 0.0) {
               fVar35 = *(float*)( *(long*)( this + 0x50 ) + 0xd0 );
               if (fVar38 != 0.0) {
                  fVar35 = fVar38;
               }

            }
 else if (fVar38 != 0.0) {
               fVar35 = ( fVar38 + fVar35 ) * __LC34;
            }

            fVar38 = _LC33 / param_1;
            if (this[0x48] == (GodotBodyPair2D)0x0) {
               if (this[0x49] == (GodotBodyPair2D)0x0) {
                  fVar32 = 0.0;
                  fVar31 = 0.0;
                  fVar34 = 0.0;
                  fVar42 = 0.0;
               }
 else {
                  fVar34 = *(float*)( lVar11 + 0x10c );
                  fVar32 = 0.0;
                  fVar31 = 0.0;
                  LAB_00102132:fVar42 = *(float*)( lVar11 + 0x104 );
               }

            }
 else {
               fVar32 = *(float*)( lVar10 + 0x10c );
               fVar31 = *(float*)( lVar10 + 0x104 );
               if (this[0x49] != (GodotBodyPair2D)0x0) {
                  fVar34 = *(float*)( lVar11 + 0x10c );
                  goto LAB_00102132;
               }

               fVar34 = 0.0;
               fVar42 = 0.0;
            }

            if (0 < *(int*)( this + 0x128 )) {
               local_158 = 0;
               pGVar23 = this + 0xb4;
               local_e6 = (GodotBodyPair2D)0x0;
               do {
                  ( (Vector2*)pGVar23 )[-4] = (Vector2)0x0;
                  fVar24 = (float)*(undefined8*)( (Vector2*)pGVar23 + -0x3c );
                  fVar41 = (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + -0x3c ) >> 0x20 );
                  fVar43 = fVar24 * (float)*(undefined8*)( lVar10 + 0x48 ) + (float)*(undefined8*)( lVar10 + 0x50 ) * fVar41;
                  fVar44 = fVar24 * (float)( ( ulong ) * (undefined8*)( lVar10 + 0x48 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar10 + 0x50 ) >> 0x20 ) * fVar41;
                  fVar24 = (float)*(undefined8*)( (Vector2*)pGVar23 + -0x34 );
                  fVar41 = (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + -0x34 ) >> 0x20 );
                  fVar39 = (float)*(undefined8*)( lVar11 + 0x50 ) * fVar41 + (float)*(undefined8*)( lVar11 + 0x48 ) * fVar24 + (float)*(undefined8*)( this + 0x58 );
                  fVar41 = (float)( ( ulong ) * (undefined8*)( lVar11 + 0x50 ) >> 0x20 ) * fVar41 + (float)( ( ulong ) * (undefined8*)( lVar11 + 0x48 ) >> 0x20 ) * fVar24 + (float)( ( ulong ) * (undefined8*)( this + 0x58 ) >> 0x20 );
                  local_c0 = CONCAT44(fVar44 - fVar41, fVar43 - fVar39);
                  fVar24 = (float)Vector2::dot((Vector2*)&local_c0);
                  if (0.0 < fVar24) {
                     lVar16 = *(long*)( this + 0x50 );
                     if (*(long*)( lVar16 + 0x6100 ) != 0) {
                        lVar19 = (long)*(int*)( lVar16 + 0x6108 );
                        lVar17 = *(long*)( *(long*)( lVar16 + 0x6100 ) + -8 );
                        uVar33 = *(undefined8*)( lVar10 + 0x58 );
                        if (lVar19 < lVar17) {
                           *(int*)( lVar16 + 0x6108 ) = *(int*)( lVar16 + 0x6108 ) + 1;
                           if (lVar19 < 0) {
                              LAB_00102e38:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar19, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar12 = (code*)invalidInstructionException();
                              ( *pcVar12 )();
                           }

                           CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( lVar16 + 0x6100 ));
                           lVar2 = *(long*)( this + 0x50 );
                           lVar17 = *(long*)( lVar2 + 0x6100 );
                           *(ulong*)( *(long*)( lVar16 + 0x6100 ) + lVar19 * 8 ) = CONCAT44((float)( (ulong)uVar33 >> 0x20 ) + fVar44, (float)uVar33 + fVar43);
                           iVar18 = *(int*)( lVar2 + 0x6108 );
                           lVar19 = (long)iVar18;
                           uVar33 = *(undefined8*)( lVar10 + 0x58 );
                           if (lVar17 == 0) {
                              if (lVar19 < 0) {
                                 lVar17 = 0;
                                 *(int*)( lVar2 + 0x6108 ) = iVar18 + 1;
                                 goto LAB_00102e38;
                              }

                           }
 else {
                              lVar17 = *(long*)( lVar17 + -8 );
                              if (lVar19 < lVar17) {
                                 *(int*)( lVar2 + 0x6108 ) = iVar18 + 1;
                                 if (lVar19 < 0) goto LAB_00102e38;
                                 CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( lVar2 + 0x6100 ));
                                 *(ulong*)( *(long*)( lVar2 + 0x6100 ) + lVar19 * 8 ) = CONCAT44((float)( (ulong)uVar33 >> 0x20 ) + fVar41, (float)uVar33 + fVar39);
                              }

                           }

                        }

                     }

                     pVVar1 = (Vector2*)pGVar23 + 8;
                     fVar25 = *(float*)( *(long*)( this + 0x30 ) + 0x11c );
                     lVar16 = *(long*)( this + 0x38 );
                     *(float*)pGVar23 = fVar43 - *(float*)( *(long*)( this + 0x30 ) + 0x118 );
                     *(float*)( (Vector2*)pGVar23 + 4 ) = fVar44 - fVar25;
                     fVar25 = *(float*)( lVar16 + 0x11c );
                     fVar26 = *(float*)( this + 0x5c );
                     *(float*)( (Vector2*)pGVar23 + 8 ) = ( fVar39 - *(float*)( lVar16 + 0x118 ) ) - *(float*)( this + 0x58 );
                     *(float*)( (Vector2*)pGVar23 + 0xc ) = ( fVar41 - fVar25 ) - fVar26;
                     fVar25 = (float)Vector2::dot((Vector2*)pGVar23);
                     fVar26 = (float)Vector2::dot(pVVar1);
                     fVar27 = (float)Vector2::dot((Vector2*)pGVar23);
                     fVar28 = (float)Vector2::dot(pVVar1);
                     uVar29 = *(uint*)( (Vector2*)pGVar23 + -0x44 ) ^ __LC6;
                     *(float*)( (Vector2*)pGVar23 + -0x14 ) = _LC33 / ( ( fVar28 - fVar26 * fVar26 ) * fVar34 + ( fVar27 - fVar25 * fVar25 ) * fVar32 + fVar42 + fVar31 );
                     local_b8 = CONCAT44(uVar29, *(undefined4*)( (Vector2*)pGVar23 + -0x40 ));
                     fVar25 = (float)Vector2::dot((Vector2*)pGVar23);
                     fVar26 = (float)Vector2::dot(pVVar1);
                     fVar27 = (float)Vector2::dot((Vector2*)pGVar23);
                     fVar28 = (float)Vector2::dot(pVVar1);
                     fVar30 = (float)( (uint)fVar35 ^ __LC6 );
                     *(float*)( (Vector2*)pGVar23 + -0x10 ) = _LC33 / ( ( fVar28 - fVar26 * fVar26 ) * fVar34 + ( fVar27 - fVar25 * fVar25 ) * fVar32 + fVar42 + fVar31 );
                     fVar25 = fVar4 - fVar24;
                     if (0.0 < fVar25) {
                        fVar25 = 0.0;
                     }

                     lVar16 = *(long*)( this + 0x30 );
                     lVar17 = *(long*)( this + 0x38 );
                     lVar19 = *(long*)( lVar16 + 0x1f8 );
                     *(ulong*)( (Vector2*)pGVar23 + -0xc ) = CONCAT44(fVar24, fVar30 * fVar38 * fVar25);
                     fVar26 = (float)*(undefined8*)( (Vector2*)pGVar23 + -0x24 );
                     fVar27 = (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + -0x24 ) >> 0x20 );
                     fVar28 = (float)*(undefined8*)( (Vector2*)pGVar23 + -0x44 );
                     fVar30 = (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + -0x44 ) >> 0x20 );
                     fVar25 = fVar27 * (float)local_b8 + fVar26 * fVar28;
                     fVar26 = fVar27 * local_b8._4_4_ + fVar26 * fVar30;
                     local_98[0] = CONCAT44(fVar26, fVar25);
                     *(ulong*)( (Vector2*)pGVar23 + -0x2c ) = CONCAT44((float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + -0x2c ) >> 0x20 ) - fVar26, (float)*(undefined8*)( (Vector2*)pGVar23 + -0x2c ) - fVar25);
                     if (( lVar19 != 0 ) || ( *(long*)( lVar17 + 0x1f8 ) != 0 )) {
                        fVar25 = (float)*(undefined8*)( lVar17 + 0xb8 ) + (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + 8 ) >> 0x20 ) * (float)( ( uint ) * (float*)( lVar17 + 0xc0 ) ^ __LC6 );
                        fVar26 = (float)( ( ulong ) * (undefined8*)( lVar17 + 0xb8 ) >> 0x20 ) + (float)*(undefined8*)( (Vector2*)pGVar23 + 8 ) * *(float*)( lVar17 + 0xc0 );
                        uVar33 = CONCAT44(*(float*)( lVar16 + 0xc0 ) * (float)*(undefined8*)pGVar23 + (float)( ( ulong ) * (undefined8*)( lVar16 + 0xb8 ) >> 0x20 ), (float)( ( uint ) * (float*)( lVar16 + 0xc0 ) ^ __LC6 ) * (float)( ( ulong ) * (undefined8*)pGVar23 >> 0x20 ) + (float)*(undefined8*)( lVar16 + 0xb8 ));
                        if (( lVar19 != 0 ) && ( iVar18 = iVar18 != 0 )) {
                           uVar13 = *(undefined8*)( lVar17 + 0x10 );
                           uVar14 = *(undefined8*)( lVar17 + 0x18 );
                           uVar8 = *(undefined4*)( this + 0x44 );
                           uVar5 = *(undefined8*)( lVar10 + 0x58 );
                           uVar9 = *(undefined4*)( this + 0x40 );
                           CowData<GodotBody2D::Contact>::_copy_on_write((CowData<GodotBody2D::Contact>*)( lVar16 + 0x1f8 ));
                           iVar20 = *(int*)( lVar16 + 0x200 );
                           lVar19 = *(long*)( lVar16 + 0x1f8 );
                           if (iVar20 < iVar18) {
                              lVar17 = *(long*)( this + 0x38 );
                              *(int*)( lVar16 + 0x200 ) = iVar20 + 1;
                              LAB_00102cad:fVar40 = (float)uVar5;
                              fVar27 = (float)( (ulong)uVar5 >> 0x20 );
                              uVar29 = (uint)fVar30 ^ __LC6;
                              uVar36 = (uint)fVar28 ^ __LC6;
                              puVar15 = (undefined8*)( (long)iVar20 * 0x50 + lVar19 );
                              puVar15[2] = uVar33;
                              *(float*)( puVar15 + 8 ) = fVar25;
                              *(float*)( (long)puVar15 + 0x44 ) = fVar26;
                              *(undefined4*)( (long)puVar15 + 0x1c ) = uVar9;
                              *puVar15 = CONCAT44(fVar44 + fVar27, fVar43 + fVar40);
                              puVar15[1] = CONCAT44(uVar29, uVar36);
                              *(undefined4*)( puVar15 + 5 ) = uVar8;
                              *(float*)( puVar15 + 3 ) = fVar24;
                              puVar15[4] = CONCAT44(fVar27 + fVar41, fVar40 + fVar39);
                              uVar5 = *(undefined8*)( (Vector2*)pGVar23 + -0x2c );
                              puVar15[6] = uVar14;
                              puVar15[7] = uVar13;
                              puVar15[9] = uVar5;
                           }
 else {
                              lVar17 = *(long*)( this + 0x38 );
                              if (0 < iVar18) {
                                 pfVar22 = (float*)( lVar19 + 0x18 );
                                 iVar21 = 0;
                                 fVar27 = *(float*)( lVar19 + 0x18 );
                                 while (fVar40 = fVar27,iVar20 = iVar21,iVar21 = iVar20 + 1,iVar18 != iVar21) {
                                    while (true) {
                                       pfVar22 = pfVar22 + 0x14;
                                       fVar27 = *pfVar22;
                                       if (*pfVar22 < fVar40) break;
                                       iVar21 = iVar21 + 1;
                                       if (iVar18 == iVar21) goto LAB_00102726;
                                    }
;
                                 }
;
                                 LAB_00102726:if (fVar40 < fVar24) goto LAB_00102cad;
                              }

                           }

                        }

                        if (*(long*)( lVar17 + 0x1f8 ) != 0) {
                           uVar5 = *(undefined8*)( lVar10 + 0x58 );
                           uVar8 = *(undefined4*)( this + 0x44 );
                           auVar6 = *(undefined1(*) [16])( *(long*)( this + 0x30 ) + 0x10 );
                           uVar9 = *(undefined4*)( this + 0x40 );
                           iVar18 = (int)*(undefined8*)( *(long*)( lVar17 + 0x1f8 ) + -8 );
                           if (iVar18 != 0) {
                              CowData<GodotBody2D::Contact>::_copy_on_write((CowData<GodotBody2D::Contact>*)( lVar17 + 0x1f8 ));
                              iVar20 = *(int*)( lVar17 + 0x200 );
                              lVar16 = *(long*)( lVar17 + 0x1f8 );
                              if (iVar20 < iVar18) {
                                 *(int*)( lVar17 + 0x200 ) = iVar20 + 1;
                                 LAB_00102d4b:auVar37._8_8_ = auVar6._0_8_;
                                 auVar37._0_8_ = auVar6._8_8_;
                                 fVar27 = (float)uVar5;
                                 fVar28 = (float)( (ulong)uVar5 >> 0x20 );
                                 puVar15 = (undefined8*)( (long)iVar20 * 0x50 + lVar16 );
                                 *puVar15 = CONCAT44(fVar41 + fVar28, fVar39 + fVar27);
                                 uVar5 = *(undefined8*)( (Vector2*)pGVar23 + -0x44 );
                                 *(float*)( puVar15 + 2 ) = fVar25;
                                 *(float*)( (long)puVar15 + 0x14 ) = fVar26;
                                 puVar15[1] = uVar5;
                                 puVar15[4] = CONCAT44(fVar44 + fVar28, fVar43 + fVar27);
                                 puVar15[8] = uVar33;
                                 uVar33 = *(undefined8*)( (Vector2*)pGVar23 + -0x2c );
                                 *(undefined4*)( (long)puVar15 + 0x1c ) = uVar8;
                                 *(undefined4*)( puVar15 + 5 ) = uVar9;
                                 puVar15[9] = uVar33;
                                 *(float*)( puVar15 + 3 ) = fVar24;
                                 *(undefined1(*) [16])( puVar15 + 6 ) = auVar37;
                              }
 else if (0 < iVar18) {
                                 pfVar22 = (float*)( lVar16 + 0x18 );
                                 iVar21 = 0;
                                 fVar27 = *(float*)( lVar16 + 0x18 );
                                 while (fVar28 = fVar27,iVar20 = iVar21,iVar21 = iVar20 + 1,iVar18 != iVar21) {
                                    while (true) {
                                       pfVar22 = pfVar22 + 0x14;
                                       fVar27 = *pfVar22;
                                       if (*pfVar22 < fVar28) break;
                                       iVar21 = iVar21 + 1;
                                       if (iVar18 == iVar21) goto LAB_00102820;
                                    }
;
                                 }
;
                                 LAB_00102820:if (fVar28 < fVar24) goto LAB_00102d4b;
                              }

                           }

                        }

                     }

                     if (this[0x12f] == (GodotBodyPair2D)0x0) {
                        if (this[0x48] != (GodotBodyPair2D)0x0) {
                           lVar16 = *(long*)( this + 0x30 );
                           fVar43 = (float)( (uint)local_98[0] ^ (uint)_LC7 );
                           fVar44 = (float)( ( uint )((ulong)local_98[0] >> 0x20) ^ _LC7._4_4_ );
                           local_78 = CONCAT44(fVar44, fVar43);
                           fVar41 = (float)*(undefined8*)( lVar16 + 0x118 );
                           fVar39 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x118 ) >> 0x20 );
                           fVar24 = *(float*)( lVar16 + 0x10c );
                           local_58[0] = CONCAT44(( (float)( ( ulong ) * (undefined8*)pGVar23 >> 0x20 ) + fVar39 ) - fVar39, ( (float)*(undefined8*)pGVar23 + fVar41 ) - fVar41);
                           fVar41 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x100 ) >> 0x20 );
                           *(ulong*)( lVar16 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar16 + 0xb8 ) >> 0x20 ) + fVar41 * fVar44, (float)*(undefined8*)( lVar16 + 0xb8 ) + fVar41 * fVar43);
                           fVar41 = (float)Vector2::cross((Vector2*)local_58);
                           *(float*)( lVar16 + 0xc0 ) = fVar41 * fVar24 + *(float*)( lVar16 + 0xc0 );
                        }

                        if (this[0x49] != (GodotBodyPair2D)0x0) {
                           lVar16 = *(long*)( this + 0x38 );
                           fVar24 = *(float*)( lVar16 + 0x10c );
                           fVar41 = (float)*(undefined8*)( lVar16 + 0x118 );
                           fVar39 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x118 ) >> 0x20 );
                           local_58[0] = CONCAT44(( (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + 8 ) >> 0x20 ) + fVar39 ) - fVar39, ( (float)*(undefined8*)( (Vector2*)pGVar23 + 8 ) + fVar41 ) - fVar41);
                           fVar41 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x100 ) >> 0x20 );
                           *(ulong*)( lVar16 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar16 + 0xb8 ) >> 0x20 ) + fVar41 * (float)( (ulong)local_98[0] >> 0x20 ), (float)*(undefined8*)( lVar16 + 0xb8 ) + fVar41 * (float)local_98[0]);
                           fVar41 = (float)Vector2::cross((Vector2*)local_58);
                           *(float*)( lVar16 + 0xc0 ) = fVar41 * fVar24 + *(float*)( lVar16 + 0xc0 );
                        }

                        lVar16 = *(long*)( this + 0x38 );
                        lVar17 = *(long*)( this + 0x30 );
                        fVar24 = *(float*)( lVar17 + 0xf8 ) + *(float*)( lVar16 + 0xf8 );
                        if (fVar24 < 0.0) {
                           *(undefined4*)( (Vector2*)pGVar23 + 0x10 ) = 0;
                        }
 else {
                           if (fVar24 <= _LC33) {
                              *(float*)( (Vector2*)pGVar23 + 0x10 ) = fVar24;
                              if (fVar24 == 0.0) goto LAB_00102926;
                           }
 else {
                              *(undefined4*)( (Vector2*)pGVar23 + 0x10 ) = 0x3f800000;
                              fVar24 = _LC33;
                           }

                           local_58[0] = CONCAT44(( ( *(float*)( lVar16 + 0xcc ) * (float)*(undefined8*)( (Vector2*)pGVar23 + 8 ) + (float)( ( ulong ) * (undefined8*)( lVar16 + 0xc4 ) >> 0x20 ) ) - (float)( ( ulong ) * (undefined8*)( lVar17 + 0xc4 ) >> 0x20 ) ) - *(float*)( lVar17 + 0xcc ) * (float)*(undefined8*)pGVar23, ( ( (float)( ( uint ) * (float*)( lVar16 + 0xcc ) ^ __LC6 ) * (float)( ( ulong ) * (undefined8*)( (Vector2*)pGVar23 + 8 ) >> 0x20 ) + (float)*(undefined8*)( lVar16 + 0xc4 ) ) - (float)*(undefined8*)( lVar17 + 0xc4 ) ) - (float)( ( uint ) * (float*)( lVar17 + 0xcc ) ^ __LC6 ) * (float)( ( ulong ) * (undefined8*)pGVar23 >> 0x20 ));
                           fVar41 = (float)Vector2::dot((Vector2*)local_58);
                           *(float*)( (Vector2*)pGVar23 + 0x10 ) = fVar41 * fVar24;
                        }

                        LAB_00102926:( (Vector2*)pGVar23 )[-4] = (Vector2)0x1;
                        local_e6 = GVar7;
                     }
 else {
                        this[300] = (GodotBodyPair2D)0x0;
                     }

                  }

                  local_158 = local_158 + 1;
                  pGVar23 = (GodotBodyPair2D*)( (Vector2*)pGVar23 + 0x60 );
               }
 while ( local_158 < *(int*)( this + 0x128 ) );
               goto LAB_00102971;
            }

            goto LAB_0010296f;
         }

         LAB_00102f18:lVar19 = 0;
         LAB_00102db5:_err_print_index_error("get_shape", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x75, lVar17, lVar19, "p_index", "shapes.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar12 = (code*)invalidInstructionException();
         ( *pcVar12 )();
      }

      if (this[0x12d] != (GodotBodyPair2D)0x0) {
         lVar10 = *(long*)( this + 0x30 );
         Transform2D::untranslated();
         lVar17 = (long)*(int*)( this + 0x40 );
         lVar16 = *(long*)( *(long*)( this + 0x30 ) + 0x38 );
         if (*(int*)( this + 0x40 ) < 0) {
            LAB_00102e88:if (lVar16 != 0) {
               lVar16 = *(long*)( lVar16 + -8 );
               goto LAB_00102e95;
            }

         }
 else if (lVar16 != 0) {
            lVar16 = *(long*)( lVar16 + -8 );
            if (lVar16 <= lVar17) goto LAB_00102e95;
            Transform2D::operator *((Transform2D*)local_98, (Transform2D*)&local_b8);
            lVar19 = *(long*)( this + 0x38 );
            lVar17 = (long)*(int*)( this + 0x44 );
            local_78 = *(undefined8*)( lVar19 + 0x48 );
            uStack_70 = *(undefined8*)( lVar19 + 0x50 );
            lVar16 = *(long*)( lVar19 + 0x38 );
            local_68 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar19 + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar10 + 0x58 ) >> 0x20 ), (float)*(undefined8*)( lVar19 + 0x58 ) - (float)*(undefined8*)( lVar10 + 0x58 ));
            if (*(int*)( this + 0x44 ) < 0) goto LAB_00102e88;
            if (lVar16 != 0) {
               lVar16 = *(long*)( lVar16 + -8 );
               if (lVar16 <= lVar17) goto LAB_00102e95;
               Transform2D::operator *((Transform2D*)local_58, (Transform2D*)&local_78);
               if (( *(int*)( *(long*)( this + 0x30 ) + 0x1b8 ) == 1 ) && ( this[0x48] != (GodotBodyPair2D)0x0 )) {
                  _test_ccd(param_1, (GodotBody2D*)this, (int)*(long*)( this + 0x30 ), (Transform2D*)( ulong ) * (uint*)( this + 0x40 ), (GodotBody2D*)local_98, (int)*(undefined8*)( this + 0x38 ), (Transform2D*)( ulong ) * (uint*)( this + 0x44 ));
               }

               if (( *(int*)( *(long*)( this + 0x38 ) + 0x1b8 ) == 1 ) && ( this[0x49] != (GodotBodyPair2D)0x0 )) {
                  _test_ccd(param_1, (GodotBody2D*)this, (int)*(long*)( this + 0x38 ), (Transform2D*)( ulong ) * (uint*)( this + 0x44 ), (GodotBody2D*)local_58, (int)*(undefined8*)( this + 0x30 ), (Transform2D*)( ulong ) * (uint*)( this + 0x40 ));
               }

               goto LAB_0010296f;
            }

         }

         lVar16 = 0;
         LAB_00102e95:_err_print_index_error("get_shape_transform", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x79, lVar17, lVar16, "p_index", "shapes.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar12 = (code*)invalidInstructionException();
         ( *pcVar12 )();
      }

   }

   LAB_0010296f:local_e6 = (GodotBodyPair2D)0x0;
   LAB_00102971:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_e6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* combine_bounce(GodotBody2D*, GodotBody2D*) */float combine_bounce(GodotBody2D *param_1, GodotBody2D *param_2) {
   float fVar1;
   float fVar2;
   fVar2 = *(float*)( param_1 + 0xf8 ) + *(float*)( param_2 + 0xf8 );
   if (0.0 <= fVar2) {
      fVar1 = _LC33;
      if (fVar2 <= _LC33) {
         fVar1 = fVar2;
      }

      return fVar1;
   }

   return 0.0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* combine_friction(GodotBody2D*, GodotBody2D*) */ulong combine_friction(GodotBody2D *param_1, GodotBody2D *param_2) {
   float fVar1;
   fVar1 = *(float*)( param_1 + 0xfc );
   if (*(float*)( param_2 + 0xfc ) <= *(float*)( param_1 + 0xfc )) {
      fVar1 = *(float*)( param_2 + 0xfc );
   }

   if (0.0 <= fVar1) {
      return (ulong)(uint)fVar1;
   }

   return CONCAT44(_UNK_00103524, (uint)fVar1 ^ __LC6);
}
/* GodotBodyPair2D::GodotBodyPair2D(GodotBody2D*, int, GodotBody2D*, int) */void GodotBodyPair2D::GodotBodyPair2D(GodotBodyPair2D *this, GodotBody2D *param_1, int param_2, GodotBody2D *param_3, int param_4) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   GodotBodyPair2D *pGVar4;
   GodotBodyPair2D *pGVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   *(undefined8*)( this + 0x18 ) = 0;
   this[0x20] = (GodotBodyPair2D)0x1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined2*)( this + 0x48 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(GodotBodyPair2D**)( this + 8 ) = this + 0x30;
   *(undefined***)this = &PTR_setup_001034b0;
   pGVar4 = this + 0x68;
   do {
      *(undefined8*)pGVar4 = 0;
      pGVar5 = pGVar4 + 0x60;
      for (int i = 0; i < 4; i++) {
         *(undefined8*)( pGVar4 + ( 8*i + 8 ) ) = 0;
      }

      *(undefined1(*) [16])( pGVar4 + 0x28 ) = (undefined1[16])0x0;
      *(undefined8*)( pGVar4 + 0x3c ) = 0;
      *(undefined4*)( pGVar4 + 0x44 ) = 0;
      *(undefined2*)( pGVar4 + 0x48 ) = 0;
      *(undefined8*)( pGVar4 + 0x4c ) = 0;
      *(undefined8*)( pGVar4 + 0x54 ) = 0;
      *(undefined4*)( pGVar4 + 0x5c ) = 0;
      pGVar4 = pGVar5;
   }
 while ( this + 0x128 != pGVar5 );
   uVar1 = *(undefined8*)( param_1 + 0x40 );
   lVar3 = *(long*)( param_1 + 0x1d8 );
   *(GodotBody2D**)( this + 0x30 ) = param_1;
   *(undefined8*)( this + 0x128 ) = 0;
   *(GodotBody2D**)( this + 0x38 ) = param_3;
   *(int*)( this + 0x40 ) = param_2;
   *(int*)( this + 0x44 ) = param_4;
   *(undefined8*)( this + 0x50 ) = uVar1;
   if (lVar3 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( param_1 + 0x1d8 ) = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar6 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar2 = *(long**)( param_1 + 0x1d8 );
   puVar6[2] = 0;
   lVar3 = plVar2[1];
   *puVar6 = this;
   *(undefined4*)( puVar6 + 1 ) = 0;
   puVar6[3] = lVar3;
   puVar6[4] = plVar2;
   if (lVar3 != 0) {
      *(undefined8**)( lVar3 + 0x10 ) = puVar6;
   }

   plVar2[1] = (long)puVar6;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar6;
   }

   lVar3 = *(long*)( this + 0x38 );
   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (*(long*)( lVar3 + 0x1d8 ) == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar3 + 0x1d8 ) = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar6 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
   plVar2 = *(long**)( lVar3 + 0x1d8 );
   puVar6[2] = 0;
   lVar3 = plVar2[1];
   *puVar6 = this;
   *(undefined4*)( puVar6 + 1 ) = 1;
   puVar6[3] = lVar3;
   puVar6[4] = plVar2;
   if (lVar3 != 0) {
      *(undefined8**)( lVar3 + 0x10 ) = puVar6;
   }

   plVar2[1] = (long)puVar6;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar6;
   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* CowData<GodotBody2D::Contact>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GodotBody2D::Contact>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}

