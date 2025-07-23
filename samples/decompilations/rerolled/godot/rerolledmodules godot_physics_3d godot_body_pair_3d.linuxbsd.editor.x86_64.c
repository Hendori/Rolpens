/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair3D::solve(float) [clone .part.0] */void GodotBodyPair3D::solve(GodotBodyPair3D *this, float param_1) {
   GodotBodyPair3D GVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   GodotBodyPair3D *pGVar6;
   GodotBodyPair3D GVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   float *pfVar10;
   float *pfVar11;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar18;
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   float fVar19;
   float fVar22;
   undefined8 uVar20;
   undefined1 auVar21[16];
   float fVar23;
   undefined1 auVar24[16];
   float fVar25;
   undefined8 uVar26;
   float fVar27;
   undefined1 auVar28[16];
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float local_164;
   undefined8 local_160;
   float local_154;
   float local_150;
   float fStack_14c;
   float local_140;
   float local_138;
   float local_134;
   float local_120;
   float fStack_11c;
   float local_100;
   float fStack_fc;
   float local_e0;
   float fStack_dc;
   float local_d4;
   float fStack_d0;
   float local_c8;
   float fStack_c4;
   float local_bc;
   float fStack_b8;
   float local_b0;
   float fStack_ac;
   float local_a4;
   float fStack_a0;
   float local_98;
   float fStack_94;
   float local_80;
   float fStack_7c;
   float local_74;
   float fStack_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined4 local_48;
   long local_40;
   GVar1 = this[0x60];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GVar7 = this[0x61];
   local_48 = 0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   fVar27 = (float)( _LC1 / (double)param_1 );
   if (GVar1 == (GodotBodyPair3D)0x0) {
      if (GVar7 == (GodotBodyPair3D)0x0) {
         pfVar10 = (float*)local_68;
         local_134 = 0.0;
         local_138 = 0.0;
         pfVar11 = pfVar10;
         goto LAB_001000e9;
      }

      lVar5 = *(long*)( this + 0x50 );
      local_134 = 0.0;
      pfVar11 = (float*)local_68;
   }
 else {
      local_134 = *(float*)( *(long*)( this + 0x48 ) + 0x170 );
      pfVar11 = (float*)( *(long*)( this + 0x48 ) + 0x1b0 );
      if (GVar7 == (GodotBodyPair3D)0x0) {
         local_138 = 0.0;
         pfVar10 = (float*)local_68;
         goto LAB_001000e9;
      }

      lVar5 = *(long*)( this + 0x50 );
   }

   pfVar10 = (float*)( lVar5 + 0x1b0 );
   local_138 = *(float*)( lVar5 + 0x170 );
   GVar7 = (GodotBodyPair3D)0x1;
   LAB_001000e9:iVar2 = *(int*)( this + 0x290 );
   if (0 < iVar2) {
      pGVar6 = this;
      do {
         if (pGVar6[0xdc] != (GodotBodyPair3D)0x0) {
            lVar5 = *(long*)( this + 0x50 );
            uVar3 = *(undefined8*)( pGVar6 + 0xf0 );
            pGVar6[0xdc] = (GodotBodyPair3D)0x0;
            fVar19 = *(float*)( pGVar6 + 0xf0 );
            fVar18 = *(float*)( pGVar6 + 0x7c );
            lVar4 = *(long*)( this + 0x48 );
            local_160._4_4_ = (float)( (ulong)uVar3 >> 0x20 );
            uVar20 = *(undefined8*)( pGVar6 + 0xe4 );
            fVar13 = *(float*)( pGVar6 + 0xe4 );
            local_164 = *(float*)( pGVar6 + 0x84 );
            fVar23 = *(float*)( pGVar6 + 0xec );
            local_150 = (float)( (ulong)uVar20 >> 0x20 );
            uVar26 = *(undefined8*)( pGVar6 + 0x7c );
            fVar15 = *(float*)( pGVar6 + 0xe0 );
            fVar22 = (float)( (ulong)uVar26 >> 0x20 );
            fVar14 = *(float*)( pGVar6 + 0xd0 ) - ( fVar18 * ( ( ( ( *(float*)( lVar5 + 0x130 ) * local_160._4_4_ - fVar19 * *(float*)( lVar5 + 0x134 ) ) + *(float*)( lVar5 + 0x120 ) ) - *(float*)( lVar4 + 0x120 ) ) - ( *(float*)( lVar4 + 0x130 ) * local_150 - fVar13 * *(float*)( lVar4 + 0x134 ) ) ) + ( ( ( ( *(float*)( lVar5 + 0x134 ) * fVar23 - local_160._4_4_ * *(float*)( lVar5 + 300 ) ) + *(float*)( lVar5 + 0x124 ) ) - *(float*)( lVar4 + 0x124 ) ) - ( *(float*)( lVar4 + 0x134 ) * fVar15 - *(float*)( lVar4 + 300 ) * local_150 ) ) * fVar22 + ( ( ( ( *(float*)( lVar5 + 300 ) * fVar19 - *(float*)( lVar5 + 0x130 ) * fVar23 ) + *(float*)( lVar5 + 0x128 ) ) - *(float*)( lVar4 + 0x128 ) ) - ( *(float*)( lVar4 + 300 ) * fVar13 - *(float*)( lVar4 + 0x130 ) * fVar15 ) ) * local_164 );
            if (__LC2 < (double)ABS(fVar14)) {
               fVar29 = *(float*)( pGVar6 + 0xc4 );
               fVar14 = fVar14 * *(float*)( pGVar6 + 0xcc ) + fVar29;
               if (fVar14 <= 0.0) {
                  fVar14 = 0.0;
               }

               *(float*)( pGVar6 + 0xc4 ) = fVar14;
               fVar32 = _UNK_0010a07c;
               fVar30 = _UNK_0010a078;
               fVar14 = fVar14 - fVar29;
               fVar29 = *(float*)( pGVar6 + 0x80 );
               local_164 = local_164 * fVar14;
               fVar33 = fVar14 * (float)uVar26;
               fVar22 = fVar14 * fVar22;
               if (GVar1 != (GodotBodyPair3D)0x0) {
                  fVar25 = (float)( (uint)local_164 ^ __LC4 );
                  fVar23 = *(float*)( lVar4 + 0x170 );
                  fVar19 = (float)( (uint)_LC3 ^ (uint)fVar33 );
                  fVar12 = (float)( _LC3._4_4_ ^ (uint)fVar22 );
                  local_74 = (float)*(undefined8*)( lVar4 + 0x1f8 );
                  fStack_70 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1f8 ) >> 0x20 );
                  *(float*)( lVar4 + 0x128 ) = fVar23 * fVar25 + *(float*)( lVar4 + 0x128 );
                  *(ulong*)( lVar4 + 0x120 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar4 + 0x120 ) >> 0x20 ) + fVar23 * fVar12, (float)*(undefined8*)( lVar4 + 0x120 ) + fVar23 * fVar19);
                  if (fVar27 != 0.0) {
                     fVar31 = ( fStack_70 + fVar13 ) - *(float*)( lVar4 + 0x1fc );
                     fVar23 = ( *(float*)( lVar4 + 0x200 ) + local_150 ) - *(float*)( lVar4 + 0x200 );
                     fVar15 = ( fVar15 + local_74 ) - *(float*)( lVar4 + 0x1f8 );
                     fVar13 = fVar19 * fVar23 - fVar15 * fVar25;
                     fVar25 = fVar25 * fVar31 - fVar23 * fVar12;
                     fVar12 = fVar15 * fVar12 - fVar31 * fVar19;
                     fVar23 = *(float*)( lVar4 + 0x1c8 ) * fVar25 + fVar13 * *(float*)( lVar4 + 0x1cc ) + *(float*)( lVar4 + 0x1d0 ) * fVar12;
                     fVar19 = 0.0;
                     fVar15 = *(float*)( lVar4 + 0x1b4 ) * fVar13 + fVar25 * (float)*(undefined8*)( lVar4 + 0x1b0 ) + (float)*(undefined8*)( lVar4 + 0x1b8 ) * fVar12;
                     fVar13 = *(float*)( lVar4 + 0x1c0 ) * fVar13 + fVar25 * (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1b8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1c0 ) >> 0x20 ) * fVar12;
                     uVar20 = CONCAT44(fVar13, fVar15);
                     if (0.0 < fVar27) {
                        fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar23 * fVar23;
                        fVar15 = SQRT(fVar13);
                        if (fVar27 < fVar15) {
                           uVar26 = 0;
                           if (fVar13 != 0.0) {
                              auVar17._8_4_ = fVar30 * 0.0 + 0.0 + 0.0;
                              auVar17._0_8_ = uVar20;
                              auVar17._12_4_ = fVar32 * 0.0 + 0.0 + 0.0;
                              auVar28._4_4_ = fVar15;
                              auVar28._0_4_ = fVar15;
                              auVar28._8_8_ = _LC21;
                              auVar17 = divps(auVar17, auVar28);
                              uVar26 = auVar17._0_8_;
                              fVar19 = fVar23 / fVar15;
                           }

                           fVar23 = fVar19 * fVar27;
                           uVar20 = CONCAT44(fVar27 * (float)( (ulong)uVar26 >> 0x20 ), fVar27 * (float)uVar26);
                        }

                     }

                     *(float*)( lVar4 + 0x134 ) = fVar23 + *(float*)( lVar4 + 0x134 );
                     *(ulong*)( lVar4 + 300 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar4 + 300 ) >> 0x20 ) + (float)( (ulong)uVar20 >> 0x20 ), (float)*(undefined8*)( lVar4 + 300 ) + (float)uVar20);
                  }

                  fVar19 = *(float*)( pGVar6 + 0xf0 );
                  fVar23 = *(float*)( pGVar6 + 0xec );
               }

               fVar15 = *(float*)( lVar5 + 0x120 );
               fVar30 = *(float*)( lVar5 + 0x124 );
               fVar13 = *(float*)( lVar5 + 0x128 );
               if (GVar7 == (GodotBodyPair3D)0x0) {
                  fVar22 = *(float*)( lVar5 + 300 );
                  fVar33 = *(float*)( lVar5 + 0x130 );
                  fVar18 = *(float*)( lVar5 + 0x134 );
               }
 else {
                  fVar32 = *(float*)( lVar5 + 0x170 );
                  fVar12 = *(float*)( pGVar6 + 0xf4 );
                  fVar25 = *(float*)( lVar5 + 0x120 );
                  local_80 = (float)*(undefined8*)( lVar5 + 0x1f8 );
                  fStack_7c = (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1f8 ) >> 0x20 );
                  *(ulong*)( lVar5 + 0x120 ) = CONCAT44(fVar30 + fVar32 * fVar22, fVar15 + fVar32 * fVar33);
                  fVar13 = fVar13 + local_164 * fVar32;
                  *(float*)( lVar5 + 0x128 ) = fVar13;
                  if (fVar27 == 0.0) {
                     fVar22 = *(float*)( lVar5 + 300 );
                     fVar33 = *(float*)( lVar5 + 0x130 );
                     fVar19 = *(float*)( pGVar6 + 0xf0 );
                     fVar23 = *(float*)( pGVar6 + 0xec );
                     fVar15 = fVar18 * fVar14 * fVar32 + fVar25;
                     fVar18 = *(float*)( lVar5 + 0x134 );
                     fVar30 = fVar29 * fVar14 * fVar32 + *(float*)( lVar5 + 0x124 );
                  }
 else {
                     fVar14 = ( fStack_7c + fVar19 ) - *(float*)( lVar5 + 0x1fc );
                     fVar23 = ( local_80 + fVar23 ) - *(float*)( lVar5 + 0x1f8 );
                     fVar18 = ( *(float*)( lVar5 + 0x200 ) + fVar12 ) - *(float*)( lVar5 + 0x200 );
                     fVar15 = fVar33 * fVar18 - fVar23 * local_164;
                     fVar19 = local_164 * fVar14 - fVar18 * fVar22;
                     fVar23 = fVar23 * fVar22 - fVar14 * fVar33;
                     fVar18 = *(float*)( lVar5 + 0x1c8 ) * fVar19 + *(float*)( lVar5 + 0x1cc ) * fVar15 + *(float*)( lVar5 + 0x1d0 ) * fVar23;
                     fVar33 = *(float*)( lVar5 + 0x1bc ) * fVar19 + *(float*)( lVar5 + 0x1c0 ) * fVar15 + *(float*)( lVar5 + 0x1c4 ) * fVar23;
                     fVar22 = *(float*)( lVar5 + 0x1b0 ) * fVar19 + fVar15 * *(float*)( lVar5 + 0x1b4 ) + fVar23 * *(float*)( lVar5 + 0x1b8 );
                     if (0.0 < fVar27) {
                        fVar15 = fVar33 * fVar33 + fVar22 * fVar22 + fVar18 * fVar18;
                        fVar23 = SQRT(fVar15);
                        if (fVar27 < fVar23) {
                           if (fVar15 == 0.0) {
                              fVar18 = 0.0;
                              fVar33 = 0.0;
                              fVar22 = 0.0;
                           }
 else {
                              fVar22 = fVar22 / fVar23;
                              fVar33 = fVar33 / fVar23;
                              fVar18 = fVar18 / fVar23;
                           }

                           fVar18 = fVar18 * fVar27;
                           fVar33 = fVar33 * fVar27;
                           fVar22 = fVar22 * fVar27;
                        }

                     }

                     fVar22 = fVar22 + *(float*)( lVar5 + 300 );
                     fVar33 = fVar33 + *(float*)( lVar5 + 0x130 );
                     fVar18 = fVar18 + *(float*)( lVar5 + 0x134 );
                     fVar15 = *(float*)( lVar5 + 0x120 );
                     fVar30 = *(float*)( lVar5 + 0x124 );
                     *(float*)( lVar5 + 300 ) = fVar22;
                     *(float*)( lVar5 + 0x130 ) = fVar33;
                     *(float*)( lVar5 + 0x134 ) = fVar18;
                     fVar19 = *(float*)( pGVar6 + 0xf0 );
                     fVar23 = *(float*)( pGVar6 + 0xec );
                  }

               }

               fVar14 = *(float*)( pGVar6 + 0xf4 );
               local_164 = *(float*)( pGVar6 + 0x84 );
               fVar29 = (float)( ( ulong ) * (undefined8*)( pGVar6 + 0x7c ) >> 0x20 );
               fVar18 = *(float*)( pGVar6 + 0xd0 ) - ( ( ( ( ( fVar18 * fVar23 - fVar14 * fVar22 ) + fVar30 ) - *(float*)( lVar4 + 0x124 ) ) - ( *(float*)( lVar4 + 0x134 ) * *(float*)( pGVar6 + 0xe0 ) - *(float*)( pGVar6 + 0xe8 ) * *(float*)( lVar4 + 300 ) ) ) * fVar29 + ( ( ( ( fVar14 * fVar33 - fVar19 * fVar18 ) + fVar15 ) - *(float*)( lVar4 + 0x120 ) ) - ( *(float*)( lVar4 + 0x130 ) * *(float*)( pGVar6 + 0xe8 ) - *(float*)( pGVar6 + 0xe4 ) * *(float*)( lVar4 + 0x134 ) ) ) * *(float*)( pGVar6 + 0x7c ) + ( ( ( ( fVar19 * fVar22 - fVar33 * fVar23 ) + fVar13 ) - *(float*)( lVar4 + 0x128 ) ) - ( *(float*)( lVar4 + 300 ) * *(float*)( pGVar6 + 0xe4 ) - *(float*)( lVar4 + 0x130 ) * *(float*)( pGVar6 + 0xe0 ) ) ) * local_164 );
               if (__LC2 < (double)ABS(fVar18)) {
                  fVar13 = *(float*)( pGVar6 + 200 );
                  fVar18 = fVar18 / ( local_138 + local_134 ) + fVar13;
                  if (fVar18 <= 0.0) {
                     fVar18 = 0.0;
                  }

                  *(float*)( pGVar6 + 200 ) = fVar18;
                  fVar18 = fVar18 - fVar13;
                  fVar13 = fVar18 * (float)*(undefined8*)( pGVar6 + 0x7c );
                  fVar29 = fVar18 * fVar29;
                  if (GVar1 != (GodotBodyPair3D)0x0) {
                     fVar15 = *(float*)( lVar4 + 0x170 );
                     *(ulong*)( lVar4 + 0x120 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar4 + 0x120 ) >> 0x20 ) - fVar15 * fVar29, (float)*(undefined8*)( lVar4 + 0x120 ) - fVar15 * fVar13);
                     *(float*)( lVar4 + 0x128 ) = (float)( ( uint )(fVar18 * local_164) ^ __LC4 ) * fVar15 + *(float*)( lVar4 + 0x128 );
                  }

                  if (GVar7 != (GodotBodyPair3D)0x0) {
                     fVar15 = *(float*)( lVar5 + 0x170 );
                     *(float*)( lVar5 + 0x128 ) = fVar18 * local_164 * fVar15 + *(float*)( lVar5 + 0x128 );
                     *(ulong*)( lVar5 + 0x120 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0x120 ) >> 0x20 ) + fVar15 * fVar29, (float)*(undefined8*)( lVar5 + 0x120 ) + fVar15 * fVar13);
                  }

                  fVar23 = *(float*)( pGVar6 + 0xec );
                  local_164 = *(float*)( pGVar6 + 0x84 );
                  fVar14 = *(float*)( pGVar6 + 0xf4 );
               }

               uVar20 = *(undefined8*)( pGVar6 + 0xe4 );
               pGVar6[0xdc] = (GodotBodyPair3D)0x1;
               local_160 = *(undefined8*)( pGVar6 + 0xf0 );
               fVar18 = 0.0;
               fVar13 = 0.0;
               local_150 = (float)( (ulong)uVar20 >> 0x20 );
               fStack_14c = (float)( ( ulong ) * (undefined8*)( pGVar6 + 0xdc ) >> 0x20 );
               uVar26 = *(undefined8*)( pGVar6 + 0x7c );
               fVar22 = (float)( (ulong)uVar26 >> 0x20 );
            }
 else {
               fStack_14c = (float)( ( ulong ) * (undefined8*)( pGVar6 + 0xdc ) >> 0x20 );
               fVar13 = (float)uVar3;
               fVar14 = local_160._4_4_;
               fVar18 = fVar23;
               local_160 = uVar3;
            }

            fVar15 = *(float*)( lVar4 + 0xec );
            fVar25 = (float)uVar20;
            uVar8 = *(undefined8*)( lVar5 + 0xe4 );
            fVar19 = *(float*)( lVar5 + 0xec );
            uVar9 = *(undefined8*)( lVar4 + 0xe4 );
            fStack_a0 = (float)( (ulong)uVar8 >> 0x20 );
            local_154 = (float)local_160;
            fVar29 = *(float*)( lVar4 + 0xe0 );
            fVar30 = *(float*)( lVar5 + 0xe0 );
            uVar3 = *(undefined8*)( lVar4 + 0xd8 );
            fVar32 = *(float*)( lVar5 + 0xd8 );
            fVar33 = *(float*)( lVar5 + 0xdc );
            local_a4 = (float)uVar8;
            local_98 = (float)uVar3;
            fStack_ac = (float)( (ulong)uVar9 >> 0x20 );
            fStack_94 = (float)( (ulong)uVar3 >> 0x20 );
            local_b0 = (float)uVar9;
            fVar12 = ( ( ( ( local_154 * local_a4 - fStack_a0 * fVar23 ) + fVar30 ) - fVar29 ) - ( local_b0 * fVar25 - fStack_ac * fStack_14c ) ) * local_164 + ( ( ( ( fVar19 * fVar23 - fVar14 * local_a4 ) + fVar33 ) - fStack_94 ) - ( fVar15 * fStack_14c - local_150 * local_b0 ) ) * fVar22 + ( ( ( ( fStack_a0 * fVar14 - local_154 * fVar19 ) + fVar32 ) - local_98 ) - ( local_150 * fStack_ac - fVar15 * fVar25 ) ) * (float)uVar26;
            if (__LC2 < (double)ABS(fVar12)) {
               fVar18 = *(float*)( pGVar6 + 0xb4 );
               fVar15 = fVar18 - ( fVar12 + *(float*)( pGVar6 + 0xd4 ) ) * *(float*)( pGVar6 + 0xcc );
               if (fVar15 <= 0.0) {
                  fVar15 = 0.0;
               }

               *(float*)( pGVar6 + 0xb4 ) = fVar15;
               fVar15 = fVar15 - fVar18;
               fVar19 = fVar15 * (float)uVar26;
               fVar22 = fVar15 * (float)( (ulong)uVar26 >> 0x20 );
               fVar15 = fVar15 * local_164;
               if (GVar1 != (GodotBodyPair3D)0x0) {
                  fVar14 = (float)( (uint)fVar22 ^ __LC4 );
                  fVar13 = (float)( (uint)fVar19 ^ __LC4 );
                  fStack_b8 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1f8 ) >> 0x20 );
                  fVar23 = (float)( (uint)fVar15 ^ __LC4 );
                  local_bc = (float)*(undefined8*)( lVar4 + 0x1f8 );
                  fVar18 = *(float*)( lVar4 + 0x170 );
                  fVar29 = ( fVar25 + fStack_b8 ) - *(float*)( lVar4 + 0x1fc );
                  fVar30 = ( local_150 + *(float*)( lVar4 + 0x200 ) ) - *(float*)( lVar4 + 0x200 );
                  fVar33 = ( fStack_14c + local_bc ) - *(float*)( lVar4 + 0x1f8 );
                  fVar32 = fVar14 * fVar33 - fVar13 * fVar29;
                  fVar33 = fVar13 * fVar30 - fVar33 * fVar23;
                  fVar29 = fVar29 * fVar23 - fVar30 * fVar14;
                  *(ulong*)( lVar4 + 0xd8 ) = CONCAT44(fVar14 * fVar18 + *(float*)( lVar4 + 0xdc ), fVar13 * fVar18 + *(float*)( lVar4 + 0xd8 ));
                  *(ulong*)( lVar4 + 0xe0 ) = CONCAT44(fVar29 * *(float*)( lVar4 + 0x1b0 ) + fVar33 * *(float*)( lVar4 + 0x1b4 ) + fVar32 * *(float*)( lVar4 + 0x1b8 ) + *(float*)( lVar4 + 0xe4 ), fVar23 * fVar18 + *(float*)( lVar4 + 0xe0 ));
                  *(ulong*)( lVar4 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar4 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1c8 ) >> 0x20 ) * fVar33 + *(float*)( lVar4 + 0x1c8 ) * fVar29 + *(float*)( lVar4 + 0x1d0 ) * fVar32, (float)*(undefined8*)( lVar4 + 0xe8 ) + (float)*(undefined8*)( lVar4 + 0x1c0 ) * fVar33 + *(float*)( lVar4 + 0x1bc ) * fVar29 + *(float*)( lVar4 + 0x1c4 ) * fVar32);
                  fVar23 = *(float*)( pGVar6 + 0xec );
               }

               if (GVar7 != (GodotBodyPair3D)0x0) {
                  fVar18 = *(float*)( lVar5 + 0x170 );
                  fStack_c4 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1f8 ) >> 0x20 );
                  local_c8 = (float)*(undefined8*)( lVar5 + 0x1f8 );
                  fVar13 = ( *(float*)( pGVar6 + 0xf0 ) + fStack_c4 ) - *(float*)( lVar5 + 0x1fc );
                  fVar23 = ( fVar23 + local_c8 ) - *(float*)( lVar5 + 0x1f8 );
                  fVar14 = ( *(float*)( pGVar6 + 0xf4 ) + *(float*)( lVar5 + 0x200 ) ) - *(float*)( lVar5 + 0x200 );
                  fVar29 = fVar23 * fVar22 - fVar13 * fVar19;
                  fVar23 = fVar14 * fVar19 - fVar23 * fVar15;
                  fVar13 = fVar13 * fVar15 - fVar14 * fVar22;
                  *(ulong*)( lVar5 + 0xd8 ) = CONCAT44(fVar22 * fVar18 + *(float*)( lVar5 + 0xdc ), fVar19 * fVar18 + *(float*)( lVar5 + 0xd8 ));
                  *(ulong*)( lVar5 + 0xe0 ) = CONCAT44(fVar13 * *(float*)( lVar5 + 0x1b0 ) + fVar23 * *(float*)( lVar5 + 0x1b4 ) + fVar29 * *(float*)( lVar5 + 0x1b8 ) + *(float*)( lVar5 + 0xe4 ), *(float*)( lVar5 + 0xe0 ) + fVar18 * fVar15);
                  *(ulong*)( lVar5 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1c8 ) >> 0x20 ) * fVar23 + *(float*)( lVar5 + 0x1c8 ) * fVar13 + *(float*)( lVar5 + 0x1d0 ) * fVar29, (float)*(undefined8*)( lVar5 + 0xe8 ) + (float)*(undefined8*)( lVar5 + 0x1c0 ) * fVar23 + *(float*)( lVar5 + 0x1bc ) * fVar13 + *(float*)( lVar5 + 0x1c4 ) * fVar29);
                  fVar23 = *(float*)( pGVar6 + 0xec );
               }

               pGVar6[0xdc] = (GodotBodyPair3D)0x1;
               uVar20 = *(undefined8*)( pGVar6 + 0xe4 );
               local_160 = *(undefined8*)( pGVar6 + 0xf0 );
               local_164 = *(float*)( pGVar6 + 0x84 );
               fVar14 = *(float*)( pGVar6 + 0xf4 );
               fVar25 = (float)uVar20;
               local_150 = (float)( (ulong)uVar20 >> 0x20 );
               local_154 = (float)local_160;
               fVar18 = 0.0;
               fVar13 = 0.0;
               *(ulong*)( pGVar6 + 0xa8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar6 + 0xa8 ) >> 0x20 ) - fVar22, (float)*(undefined8*)( pGVar6 + 0xa8 ) - fVar19);
               *(float*)( pGVar6 + 0xb0 ) = *(float*)( pGVar6 + 0xb0 ) - fVar15;
               uVar9 = *(undefined8*)( lVar4 + 0xe4 );
               fVar15 = *(float*)( lVar4 + 0xec );
               uVar8 = *(undefined8*)( lVar5 + 0xe4 );
               fStack_14c = (float)( ( ulong ) * (undefined8*)( pGVar6 + 0xdc ) >> 0x20 );
               fVar29 = *(float*)( lVar4 + 0xe0 );
               fVar30 = *(float*)( lVar5 + 0xe0 );
               uVar26 = *(undefined8*)( pGVar6 + 0x7c );
               fVar19 = *(float*)( lVar5 + 0xec );
               uVar3 = *(undefined8*)( lVar4 + 0xd8 );
               fVar32 = *(float*)( lVar5 + 0xd8 );
               fVar33 = *(float*)( lVar5 + 0xdc );
               fVar22 = (float)( (ulong)uVar26 >> 0x20 );
            }

            local_140 = *(float*)( lVar4 + 0x140 );
            if (*(float*)( lVar5 + 0x140 ) <= *(float*)( lVar4 + 0x140 )) {
               local_140 = *(float*)( lVar5 + 0x140 );
            }

            if (local_140 < 0.0) {
               local_140 = (float)( (uint)local_140 ^ __LC4 );
            }

            local_120 = (float)uVar9;
            fStack_11c = (float)( (ulong)uVar9 >> 0x20 );
            local_100 = (float)uVar8;
            fStack_fc = (float)( (ulong)uVar8 >> 0x20 );
            fVar29 = ( ( local_100 * local_154 - fStack_fc * fVar23 ) + fVar30 ) - ( fVar29 + ( local_120 * fVar25 - fStack_11c * fStack_14c ) );
            fVar30 = ( ( fStack_fc * fVar14 - fVar19 * (float)local_160 ) + fVar32 ) - ( ( local_150 * fStack_11c - fVar15 * (float)uVar20 ) + (float)uVar3 );
            fVar15 = ( ( fVar19 * fVar23 - local_100 * (float)( (ulong)local_160 >> 0x20 ) ) + fVar33 ) - ( ( fStack_14c * fVar15 - local_120 * (float)( (ulong)uVar20 >> 0x20 ) ) + (float)( (ulong)uVar3 >> 0x20 ) );
            fVar13 = ( ( fVar13 * 0.0 - 0.0 ) + 0.0 ) - 0.0;
            fVar18 = ( ( fVar18 * 0.0 - 0.0 ) + 0.0 ) - 0.0;
            fVar19 = fVar30 * (float)uVar26 + fVar15 * fVar22 + local_164 * fVar29;
            auVar16._0_4_ = fVar30 - fVar19 * (float)uVar26;
            auVar16._4_4_ = fVar15 - fVar19 * (float)( (ulong)uVar26 >> 0x20 );
            auVar16._8_4_ = fVar13 - fVar13 * 0.0;
            auVar16._12_4_ = fVar18 - fVar18 * 0.0;
            fVar29 = fVar29 - fVar19 * local_164;
            fVar18 = SQRT(auVar16._0_4_ * auVar16._0_4_ + auVar16._4_4_ * auVar16._4_4_ + fVar29 * fVar29);
            if (__LC2 < (double)fVar18) {
               auVar24._4_4_ = fVar18;
               auVar24._0_4_ = fVar18;
               auVar24._8_8_ = _LC21;
               auVar17 = divps(auVar16, auVar24);
               fVar29 = fVar29 / fVar18;
               fVar19 = auVar17._0_4_;
               fVar30 = auVar17._4_4_;
               fVar13 = fStack_14c * fVar30 - fVar25 * fVar19;
               fVar22 = local_150 * fVar19 - fVar29 * fStack_14c;
               fVar15 = fVar29 * fVar25 - local_150 * fVar30;
               fVar33 = pfVar11[7] * fVar22 + pfVar11[6] * fVar15 + pfVar11[8] * fVar13;
               fVar12 = pfVar11[4] * fVar22 + pfVar11[3] * fVar15 + pfVar11[5] * fVar13;
               fVar32 = fVar22 * pfVar11[1] + fVar15 * *pfVar11 + fVar13 * pfVar11[2];
               fVar22 = fVar23 * fVar30 - local_154 * fVar19;
               fVar13 = fVar14 * fVar19 - fVar23 * fVar29;
               fVar34 = local_154 * fVar29 - fVar14 * fVar30;
               fVar15 = pfVar10[7] * fVar13 + pfVar10[6] * fVar34 + pfVar10[8] * fVar22;
               fVar31 = pfVar10[4] * fVar13 + pfVar10[3] * fVar34 + pfVar10[5] * fVar22;
               fVar22 = fVar13 * pfVar10[1] + fVar34 * *pfVar10 + fVar22 * pfVar10[2];
               fVar13 = *(float*)( pGVar6 + 0xb8 );
               fVar23 = (float)( (uint)fVar18 ^ __LC4 ) / ( ( ( fVar15 * fVar23 - fVar14 * fVar22 ) + ( fVar33 * fStack_14c - fVar32 * local_150 ) ) * fVar30 + ( ( fVar31 * fVar14 - local_154 * fVar15 ) + ( fVar12 * local_150 - fVar33 * fVar25 ) ) * fVar19 + ( ( local_154 * fVar22 - fVar31 * fVar23 ) + ( fVar32 * fVar25 - fVar12 * fStack_14c ) ) * fVar29 + local_138 + local_134 );
               fVar18 = *(float*)( pGVar6 + 0xc0 );
               fVar15 = fVar29 * fVar23 + fVar18;
               fVar19 = fVar23 * fVar19 + fVar13;
               fVar14 = fVar23 * fVar30 + *(float*)( pGVar6 + 0xbc );
               *(float*)( pGVar6 + 0xc0 ) = fVar15;
               *(ulong*)( pGVar6 + 0xb8 ) = CONCAT44(fVar14, fVar19);
               fVar23 = SQRT(fVar19 * fVar19 + fVar14 * fVar14 + fVar15 * fVar15);
               if (( _LC6 < (double)fVar23 ) && ( local_140 * *(float*)( pGVar6 + 0xb4 ) < fVar23 )) {
                  fVar23 = ( local_140 * *(float*)( pGVar6 + 0xb4 ) ) / fVar23;
                  fVar15 = fVar15 * fVar23;
                  *(float*)( pGVar6 + 0xc0 ) = fVar15;
                  *(ulong*)( pGVar6 + 0xb8 ) = CONCAT44(fVar23 * fVar14, fVar23 * fVar19);
               }

               fVar15 = fVar15 - fVar18;
               fVar13 = (float)*(undefined8*)( pGVar6 + 0xb8 ) - fVar13;
               fVar18 = (float)( ( ulong ) * (undefined8*)( pGVar6 + 0xb8 ) >> 0x20 ) - *(float*)( pGVar6 + 0xbc );
               if (GVar1 != (GodotBodyPair3D)0x0) {
                  fVar30 = (float)( (uint)fVar18 ^ __LC4 );
                  fVar14 = (float)( (uint)fVar13 ^ __LC4 );
                  fVar22 = (float)( (uint)fVar15 ^ __LC4 );
                  local_d4 = (float)*(undefined8*)( lVar4 + 0x1f8 );
                  fStack_d0 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1f8 ) >> 0x20 );
                  fVar33 = ( fVar25 + fStack_d0 ) - *(float*)( lVar4 + 0x1fc );
                  fVar19 = ( local_d4 + fStack_14c ) - *(float*)( lVar4 + 0x1f8 );
                  fVar23 = *(float*)( lVar4 + 0x170 );
                  fVar29 = ( local_150 + *(float*)( lVar4 + 0x200 ) ) - *(float*)( lVar4 + 0x200 );
                  fVar32 = fVar30 * fVar19 - fVar14 * fVar33;
                  fVar19 = fVar14 * fVar29 - fVar19 * fVar22;
                  fVar29 = fVar33 * fVar22 - fVar29 * fVar30;
                  *(ulong*)( lVar4 + 0xd8 ) = CONCAT44(fVar30 * fVar23 + *(float*)( lVar4 + 0xdc ), fVar14 * fVar23 + *(float*)( lVar4 + 0xd8 ));
                  *(float*)( lVar4 + 0xe0 ) = fVar22 * fVar23 + *(float*)( lVar4 + 0xe0 );
                  *(float*)( lVar4 + 0xe4 ) = fVar29 * *(float*)( lVar4 + 0x1b0 ) + fVar19 * *(float*)( lVar4 + 0x1b4 ) + fVar32 * *(float*)( lVar4 + 0x1b8 ) + *(float*)( lVar4 + 0xe4 );
                  *(ulong*)( lVar4 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar4 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar4 + 0x1c8 ) >> 0x20 ) * fVar19 + *(float*)( lVar4 + 0x1c8 ) * fVar29 + *(float*)( lVar4 + 0x1d0 ) * fVar32, (float)*(undefined8*)( lVar4 + 0xe8 ) + (float)*(undefined8*)( lVar4 + 0x1c0 ) * fVar19 + *(float*)( lVar4 + 0x1bc ) * fVar29 + *(float*)( lVar4 + 0x1c4 ) * fVar32);
               }

               if (GVar7 != (GodotBodyPair3D)0x0) {
                  fVar23 = *(float*)( lVar5 + 0x170 );
                  fStack_dc = (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1f8 ) >> 0x20 );
                  local_e0 = (float)*(undefined8*)( lVar5 + 0x1f8 );
                  fVar19 = ( *(float*)( pGVar6 + 0xf0 ) + fStack_dc ) - *(float*)( lVar5 + 0x1fc );
                  fVar14 = ( *(float*)( pGVar6 + 0xec ) + local_e0 ) - *(float*)( lVar5 + 0x1f8 );
                  fVar29 = ( *(float*)( pGVar6 + 0xf4 ) + *(float*)( lVar5 + 0x200 ) ) - *(float*)( lVar5 + 0x200 );
                  fVar22 = fVar14 * fVar18 - fVar19 * fVar13;
                  auVar21._0_4_ = fVar13 * fVar23 + *(float*)( lVar5 + 0xd8 );
                  fVar14 = fVar29 * fVar13 - fVar14 * fVar15;
                  fVar19 = fVar19 * fVar15 - fVar29 * fVar18;
                  auVar21._4_4_ = fVar18 * fVar23 + *(float*)( lVar5 + 0xdc );
                  auVar21._12_4_ = fVar19 * *(float*)( lVar5 + 0x1b0 ) + fVar14 * *(float*)( lVar5 + 0x1b4 ) + fVar22 * *(float*)( lVar5 + 0x1b8 ) + *(float*)( lVar5 + 0xe4 );
                  auVar21._8_4_ = fVar23 * fVar15 + *(float*)( lVar5 + 0xe0 );
                  *(undefined1(*) [16])( lVar5 + 0xd8 ) = auVar21;
                  *(ulong*)( lVar5 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar5 + 0x1c8 ) >> 0x20 ) * fVar14 + *(float*)( lVar5 + 0x1c8 ) * fVar19 + *(float*)( lVar5 + 0x1d0 ) * fVar22, (float)*(undefined8*)( lVar5 + 0xe8 ) + (float)*(undefined8*)( lVar5 + 0x1c0 ) * fVar14 + *(float*)( lVar5 + 0x1bc ) * fVar19 + *(float*)( lVar5 + 0x1c4 ) * fVar22);
               }

               pGVar6[0xdc] = (GodotBodyPair3D)0x1;
               *(ulong*)( pGVar6 + 0xa8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar6 + 0xa8 ) >> 0x20 ) - fVar18, (float)*(undefined8*)( pGVar6 + 0xa8 ) - fVar13);
               *(float*)( pGVar6 + 0xb0 ) = *(float*)( pGVar6 + 0xb0 ) - fVar15;
            }

         }

         pGVar6 = pGVar6 + 0x88;
      }
 while ( pGVar6 != this + (long)iVar2 * 0x88 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotBodyPair3D::solve(float) */void GodotBodyPair3D::solve(GodotBodyPair3D *this, float param_1) {
   if (this[0x3c] != (GodotBodyPair3D)0x0) {
      solve(this, param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodySoftBodyPair3D::solve(float) [clone .part.0] */void GodotBodySoftBodyPair3D::solve(GodotBodySoftBodyPair3D *this, float param_1) {
   GodotBodySoftBodyPair3D GVar1;
   uint uVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   uint uVar6;
   long lVar7;
   float *pfVar8;
   long in_FS_OFFSET;
   float fVar9;
   float fVar10;
   float fVar12;
   undefined8 uVar11;
   undefined8 extraout_XMM0_Qb;
   float fVar13;
   float fVar14;
   undefined1 auVar15[16];
   float fVar16;
   float fVar17;
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   float fVar20;
   float fVar21;
   undefined8 uVar22;
   undefined1 auVar23[16];
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   undefined1 auVar29[12];
   float local_100;
   float local_f8;
   float local_d0;
   float fStack_cc;
   float local_b4;
   float fStack_b0;
   float local_a8;
   float fStack_a4;
   float local_9c;
   float fStack_98;
   float local_90;
   float fStack_8c;
   float local_84;
   float fStack_80;
   float local_78;
   float fStack_74;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   fVar16 = (float)( _LC1 / (double)param_1 );
   if (this[0x5c] == (GodotBodySoftBodyPair3D)0x0) {
      local_f8 = 0.0;
      pfVar8 = (float*)local_68;
   }
 else {
      local_f8 = *(float*)( *(long*)( this + 0x48 ) + 0x170 );
      pfVar8 = (float*)( *(long*)( this + 0x48 ) + 0x1b0 );
   }

   uVar2 = *(uint*)( this + 0x60 );
   lVar7 = 0;
   uVar6 = 0;
   if (uVar2 != 0) {
      while (true) {
         lVar5 = *(long*)( this + 0x68 ) + lVar7;
         if (*(char*)( lVar5 + 0x6c ) != '\0') {
            GVar1 = this[0x5d];
            *(undefined1*)( lVar5 + 0x6c ) = 0;
            local_100 = 0.0;
            if (GVar1 != (GodotBodySoftBodyPair3D)0x0) {
               local_100 = (float)GodotSoftBody3D::get_node_inv_mass(( uint ) * (undefined8*)( this + 0x50 ));
            }

            lVar3 = *(long*)( this + 0x48 );
            fVar13 = *(float*)( lVar5 + 0x74 );
            fVar17 = *(float*)( lVar5 + 0x70 );
            fVar20 = *(float*)( lVar3 + 0x130 );
            fVar24 = *(float*)( lVar3 + 300 );
            fVar10 = *(float*)( lVar3 + 0x134 );
            fVar14 = *(float*)( lVar5 + 0x78 );
            auVar29 = GodotSoftBody3D::get_node_biased_velocity(( uint ) * (undefined8*)( this + 0x50 ));
            fStack_74 = auVar29._4_4_;
            local_78 = auVar29._0_4_;
            fVar12 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0xc ) >> 0x20 );
            fVar13 = *(float*)( lVar5 + 0x60 ) - ( ( ( local_78 - *(float*)( lVar3 + 0x120 ) ) - ( fVar14 * fVar20 - fVar13 * fVar10 ) ) * *(float*)( lVar5 + 0xc ) + fVar12 * ( ( fStack_74 - *(float*)( lVar3 + 0x124 ) ) - ( fVar17 * fVar10 - fVar24 * fVar14 ) ) + ( ( auVar29._8_4_ - *(float*)( lVar3 + 0x128 ) ) - ( fVar24 * fVar13 - fVar20 * fVar17 ) ) * *(float*)( lVar5 + 0x14 ) );
            if (__LC2 < (double)ABS(fVar13)) {
               fVar17 = *(float*)( lVar5 + 0x54 );
               fVar13 = fVar13 * *(float*)( lVar5 + 0x5c ) + fVar17;
               if (fVar13 <= 0.0) {
                  fVar13 = 0.0;
               }

               *(float*)( lVar5 + 0x54 ) = fVar13;
               fVar24 = _UNK_0010a07c;
               fVar20 = _UNK_0010a078;
               fVar13 = fVar13 - fVar17;
               if (this[0x5c] != (GodotBodySoftBodyPair3D)0x0) {
                  lVar3 = *(long*)( this + 0x48 );
                  fVar21 = (float)( ( uint )(*(float*)( lVar5 + 0x14 ) * fVar13) ^ __LC4 );
                  fVar17 = *(float*)( lVar3 + 0x170 );
                  fVar9 = (float)( ( uint )(fVar13 * (float)*(undefined8*)( lVar5 + 0xc )) ^ (uint)_LC3 );
                  fVar12 = (float)( ( uint )(fVar13 * fVar12) ^ _LC3._4_4_ );
                  fVar13 = *(float*)( lVar5 + 0x78 );
                  fVar10 = *(float*)( lVar5 + 0x74 );
                  fVar14 = *(float*)( lVar5 + 0x70 );
                  local_84 = (float)*(undefined8*)( lVar3 + 0x1f8 );
                  fStack_80 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1f8 ) >> 0x20 );
                  *(float*)( lVar3 + 0x128 ) = fVar17 * fVar21 + *(float*)( lVar3 + 0x128 );
                  *(ulong*)( lVar3 + 0x120 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x120 ) >> 0x20 ) + fVar17 * fVar12, (float)*(undefined8*)( lVar3 + 0x120 ) + fVar17 * fVar9);
                  if (fVar16 != 0.0) {
                     fVar17 = ( *(float*)( lVar3 + 0x200 ) + fVar13 ) - *(float*)( lVar3 + 0x200 );
                     fVar25 = ( fStack_80 + fVar10 ) - *(float*)( lVar3 + 0x1fc );
                     fVar10 = ( fVar14 + local_84 ) - *(float*)( lVar3 + 0x1f8 );
                     fVar13 = fVar9 * fVar17 - fVar10 * fVar21;
                     fVar21 = fVar21 * fVar25 - fVar17 * fVar12;
                     fVar12 = fVar10 * fVar12 - fVar25 * fVar9;
                     fVar10 = *(float*)( lVar3 + 0x1c8 ) * fVar21 + *(float*)( lVar3 + 0x1cc ) * fVar13 + *(float*)( lVar3 + 0x1d0 ) * fVar12;
                     fVar14 = 0.0;
                     fVar17 = fVar13 * *(float*)( lVar3 + 0x1b4 ) + fVar21 * (float)*(undefined8*)( lVar3 + 0x1b0 ) + (float)*(undefined8*)( lVar3 + 0x1b8 ) * fVar12;
                     fVar13 = fVar13 * *(float*)( lVar3 + 0x1c0 ) + fVar21 * (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1b8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1c0 ) >> 0x20 ) * fVar12;
                     uVar11 = CONCAT44(fVar13, fVar17);
                     if (0.0 < fVar16) {
                        fVar17 = fVar13 * fVar13 + fVar17 * fVar17 + fVar10 * fVar10;
                        fVar13 = SQRT(fVar17);
                        if (fVar16 < fVar13) {
                           uVar22 = 0;
                           if (fVar17 != 0.0) {
                              auVar23._8_4_ = fVar20 * 0.0 + 0.0 + 0.0;
                              auVar23._0_8_ = uVar11;
                              auVar23._12_4_ = fVar24 * 0.0 + 0.0 + 0.0;
                              auVar19._4_4_ = fVar13;
                              auVar19._0_4_ = fVar13;
                              auVar19._8_4_ = (int)_LC21;
                              auVar19._12_4_ = (int)( (ulong)_LC21 >> 0x20 );
                              auVar19 = divps(auVar23, auVar19);
                              uVar22 = auVar19._0_8_;
                              fVar14 = fVar10 / fVar13;
                           }

                           fVar10 = fVar14 * fVar16;
                           uVar11 = CONCAT44(fVar16 * (float)( (ulong)uVar22 >> 0x20 ), fVar16 * (float)uVar22);
                        }

                     }

                     *(float*)( lVar3 + 0x134 ) = fVar10 + *(float*)( lVar3 + 0x134 );
                     *(ulong*)( lVar3 + 300 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 300 ) >> 0x20 ) + (float)( (ulong)uVar11 >> 0x20 ), (float)*(undefined8*)( lVar3 + 300 ) + (float)uVar11);
                  }

               }

               if (this[0x5d] != (GodotBodySoftBodyPair3D)0x0) {
                  GodotSoftBody3D::apply_node_bias_impulse(( uint ) * (undefined8*)( this + 0x50 ), (Vector3*)( ulong ) * (uint*)( lVar5 + 0x1c ));
               }

               lVar3 = *(long*)( this + 0x48 );
               fVar13 = *(float*)( lVar5 + 0x74 );
               fVar17 = *(float*)( lVar5 + 0x70 );
               fVar20 = *(float*)( lVar3 + 0x130 );
               fVar24 = *(float*)( lVar3 + 300 );
               fVar10 = *(float*)( lVar3 + 0x134 );
               fVar14 = *(float*)( lVar5 + 0x78 );
               auVar29 = GodotSoftBody3D::get_node_biased_velocity(( uint ) * (undefined8*)( this + 0x50 ));
               uVar11 = *(undefined8*)( lVar5 + 0xc );
               fStack_74 = auVar29._4_4_;
               fVar12 = (float)( (ulong)uVar11 >> 0x20 );
               local_78 = auVar29._0_4_;
               fVar13 = *(float*)( lVar5 + 0x60 ) - ( ( ( local_78 - *(float*)( lVar3 + 0x120 ) ) - ( fVar14 * fVar20 - fVar13 * fVar10 ) ) * *(float*)( lVar5 + 0xc ) + fVar12 * ( ( fStack_74 - *(float*)( lVar3 + 0x124 ) ) - ( fVar17 * fVar10 - fVar24 * fVar14 ) ) + ( ( auVar29._8_4_ - *(float*)( lVar3 + 0x128 ) ) - ( fVar24 * fVar13 - fVar20 * fVar17 ) ) * *(float*)( lVar5 + 0x14 ) );
               if (__LC2 < (double)ABS(fVar13)) {
                  fVar17 = *(float*)( lVar5 + 0x58 );
                  fVar13 = fVar13 / ( local_f8 + local_100 ) + fVar17;
                  if (fVar13 <= 0.0) {
                     fVar13 = 0.0;
                  }

                  *(float*)( lVar5 + 0x58 ) = fVar13;
                  fVar13 = fVar13 - fVar17;
                  if (this[0x5c] == (GodotBodySoftBodyPair3D)0x0) {
                     GVar1 = this[0x5d];
                  }
 else {
                     lVar3 = *(long*)( this + 0x48 );
                     GVar1 = this[0x5d];
                     fVar17 = *(float*)( lVar3 + 0x170 );
                     *(float*)( lVar3 + 0x128 ) = (float)( ( uint )(*(float*)( lVar5 + 0x14 ) * fVar13) ^ __LC4 ) * fVar17 + *(float*)( lVar3 + 0x128 );
                     *(ulong*)( lVar3 + 0x120 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x120 ) >> 0x20 ) - fVar13 * fVar12 * fVar17, (float)*(undefined8*)( lVar3 + 0x120 ) - fVar13 * (float)uVar11 * fVar17);
                  }

                  if (GVar1 != (GodotBodySoftBodyPair3D)0x0) {
                     GodotSoftBody3D::apply_node_bias_impulse(( uint ) * (undefined8*)( this + 0x50 ), (Vector3*)( ulong ) * (uint*)( lVar5 + 0x1c ));
                  }

               }

               *(undefined1*)( lVar5 + 0x6c ) = 1;
            }

            lVar3 = *(long*)( this + 0x48 );
            fVar13 = *(float*)( lVar5 + 0x74 );
            fVar17 = *(float*)( lVar5 + 0x70 );
            fVar24 = *(float*)( lVar3 + 0xec );
            local_9c = (float)*(undefined8*)( lVar3 + 0xe4 );
            fStack_98 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 );
            fVar10 = *(float*)( lVar3 + 0xe0 );
            fVar20 = *(float*)( lVar5 + 0x78 );
            local_90 = (float)*(undefined8*)( lVar3 + 0xd8 );
            fStack_8c = (float)( ( ulong ) * (undefined8*)( lVar3 + 0xd8 ) >> 0x20 );
            auVar29 = GodotSoftBody3D::get_node_velocity(( uint ) * (undefined8*)( this + 0x50 ));
            fStack_74 = auVar29._4_4_;
            local_78 = auVar29._0_4_;
            fVar14 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0xc ) >> 0x20 );
            fVar13 = ( ( local_78 - local_90 ) - ( fStack_98 * fVar20 - fVar13 * fVar24 ) ) * *(float*)( lVar5 + 0xc ) + fVar14 * ( ( fStack_74 - fStack_8c ) - ( fVar17 * fVar24 - local_9c * fVar20 ) ) + ( ( auVar29._8_4_ - fVar10 ) - ( fVar13 * local_9c - fVar17 * fStack_98 ) ) * *(float*)( lVar5 + 0x14 );
            if (__LC2 < (double)ABS(fVar13)) {
               fVar17 = *(float*)( lVar5 + 0x44 );
               fVar13 = fVar17 - ( fVar13 + *(float*)( lVar5 + 100 ) ) * *(float*)( lVar5 + 0x5c );
               if (fVar13 <= 0.0) {
                  fVar13 = 0.0;
               }

               *(float*)( lVar5 + 0x44 ) = fVar13;
               fVar13 = fVar13 - fVar17;
               fVar20 = *(float*)( lVar5 + 0x14 ) * fVar13;
               fVar17 = fVar13 * (float)*(undefined8*)( lVar5 + 0xc );
               fVar13 = fVar13 * fVar14;
               if (this[0x5c] != (GodotBodySoftBodyPair3D)0x0) {
                  lVar3 = *(long*)( this + 0x48 );
                  fVar9 = (float)( (uint)fVar17 ^ __LC4 );
                  fVar21 = (float)( (uint)fVar13 ^ __LC4 );
                  fVar14 = (float)( (uint)fVar20 ^ __LC4 );
                  fStack_a4 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1f8 ) >> 0x20 );
                  fVar10 = ( *(float*)( lVar5 + 0x74 ) + fStack_a4 ) - *(float*)( lVar3 + 0x1fc );
                  fVar24 = *(float*)( lVar3 + 0x170 );
                  local_a8 = (float)*(undefined8*)( lVar3 + 0x1f8 );
                  fVar25 = ( *(float*)( lVar5 + 0x78 ) + *(float*)( lVar3 + 0x200 ) ) - *(float*)( lVar3 + 0x200 );
                  fVar12 = ( *(float*)( lVar5 + 0x70 ) + local_a8 ) - *(float*)( lVar3 + 0x1f8 );
                  fVar26 = fVar21 * fVar12 - fVar9 * fVar10;
                  fVar12 = fVar9 * fVar25 - fVar12 * fVar14;
                  fVar10 = fVar10 * fVar14 - fVar25 * fVar21;
                  *(ulong*)( lVar3 + 0xd8 ) = CONCAT44(fVar21 * fVar24 + *(float*)( lVar3 + 0xdc ), fVar9 * fVar24 + *(float*)( lVar3 + 0xd8 ));
                  *(ulong*)( lVar3 + 0xe0 ) = CONCAT44(fVar10 * *(float*)( lVar3 + 0x1b0 ) + fVar12 * *(float*)( lVar3 + 0x1b4 ) + fVar26 * *(float*)( lVar3 + 0x1b8 ) + *(float*)( lVar3 + 0xe4 ), fVar24 * fVar14 + *(float*)( lVar3 + 0xe0 ));
                  *(ulong*)( lVar3 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1c8 ) >> 0x20 ) * fVar12 + *(float*)( lVar3 + 0x1c8 ) * fVar10 + *(float*)( lVar3 + 0x1d0 ) * fVar26, (float)*(undefined8*)( lVar3 + 0xe8 ) + (float)*(undefined8*)( lVar3 + 0x1c0 ) * fVar12 + *(float*)( lVar3 + 0x1bc ) * fVar10 + *(float*)( lVar3 + 0x1c4 ) * fVar26);
               }

               if (this[0x5d] != (GodotBodySoftBodyPair3D)0x0) {
                  GodotSoftBody3D::apply_node_impulse(( uint ) * (undefined8*)( this + 0x50 ), (Vector3*)( ulong ) * (uint*)( lVar5 + 0x1c ));
               }

               *(undefined1*)( lVar5 + 0x6c ) = 1;
               *(ulong*)( lVar5 + 0x38 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar5 + 0x38 ) >> 0x20 ) - fVar13, (float)*(undefined8*)( lVar5 + 0x38 ) - fVar17);
               *(float*)( lVar5 + 0x40 ) = *(float*)( lVar5 + 0x40 ) - fVar20;
            }

            lVar3 = *(long*)( this + 0x48 );
            fVar13 = *(float*)( lVar5 + 0x74 );
            fVar17 = *(float*)( lVar5 + 0x78 );
            fVar20 = *(float*)( lVar3 + 0x140 );
            local_d0 = (float)*(undefined8*)( lVar3 + 0xe4 );
            fStack_cc = (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 );
            fVar10 = *(float*)( lVar3 + 0xec );
            fVar24 = *(float*)( lVar5 + 0x70 );
            uVar11 = *(undefined8*)( lVar5 + 0x74 );
            uVar22 = *(undefined8*)( lVar3 + 0xd8 );
            fVar14 = *(float*)( lVar3 + 0xe0 );
            auVar29 = GodotSoftBody3D::get_node_velocity(( uint ) * (undefined8*)( this + 0x50 ));
            fVar17 = auVar29._0_4_ - ( ( fVar17 * fStack_cc - (float)uVar11 * fVar10 ) + (float)uVar22 );
            fVar10 = auVar29._4_4_ - ( ( fVar24 * fVar10 - (float)( (ulong)uVar11 >> 0x20 ) * local_d0 ) + (float)( (ulong)uVar22 >> 0x20 ) );
            fVar24 = auVar29._8_4_ - ( ( fVar13 * local_d0 - fStack_cc * fVar24 ) + fVar14 );
            fVar13 = *(float*)( lVar5 + 0xc ) * fVar17 + fVar10 * *(float*)( lVar5 + 0x10 ) + fVar24 * *(float*)( lVar5 + 0x14 );
            fVar24 = fVar24 - *(float*)( lVar5 + 0x14 ) * fVar13;
            auVar18._0_4_ = fVar17 - fVar13 * (float)*(undefined8*)( lVar5 + 0xc );
            auVar18._4_4_ = fVar10 - fVar13 * (float)( ( ulong ) * (undefined8*)( lVar5 + 0xc ) >> 0x20 );
            auVar18._8_4_ = ( (float)extraout_XMM0_Qb - 0.0 ) - 0.0;
            auVar18._12_4_ = ( (float)( (ulong)extraout_XMM0_Qb >> 0x20 ) - 0.0 ) - 0.0;
            fVar13 = SQRT(auVar18._0_4_ * auVar18._0_4_ + auVar18._4_4_ * auVar18._4_4_ + fVar24 * fVar24);
            if (__LC2 < (double)fVar13) {
               fVar17 = *(float*)( lVar5 + 0x70 );
               fVar10 = *(float*)( lVar5 + 0x74 );
               auVar15._4_4_ = fVar13;
               auVar15._0_4_ = fVar13;
               fVar24 = fVar24 / fVar13;
               auVar15._8_8_ = _LC21;
               fVar14 = *(float*)( lVar5 + 0x78 );
               auVar19 = divps(auVar18, auVar15);
               fVar25 = auVar19._0_4_;
               fVar26 = auVar19._4_4_;
               fVar27 = fVar17 * fVar26 - fVar10 * fVar25;
               fVar28 = fVar14 * fVar25 - fVar24 * fVar17;
               fVar12 = fVar24 * fVar10 - fVar14 * fVar26;
               fVar21 = pfVar8[6] * fVar12 + pfVar8[7] * fVar28 + pfVar8[8] * fVar27;
               fVar9 = pfVar8[3] * fVar12 + pfVar8[4] * fVar28 + pfVar8[5] * fVar27;
               fVar12 = fVar12 * *pfVar8 + fVar28 * pfVar8[1] + fVar27 * pfVar8[2];
               fVar21 = (float)( (uint)fVar13 ^ __LC4 ) / ( ( fVar21 * fVar17 - fVar14 * fVar12 ) * fVar26 + ( fVar14 * fVar9 - fVar10 * fVar21 ) * fVar25 + ( fVar12 * fVar10 - fVar9 * fVar17 ) * fVar24 + local_100 + local_f8 );
               fVar12 = *(float*)( lVar5 + 0x48 );
               fVar9 = *(float*)( lVar5 + 0x4c );
               fVar25 = fVar21 * fVar25 + fVar12;
               fVar26 = fVar21 * fVar26 + fVar9;
               *(float*)( lVar5 + 0x48 ) = fVar25;
               *(float*)( lVar5 + 0x4c ) = fVar26;
               fVar13 = *(float*)( lVar5 + 0x50 );
               fVar21 = fVar24 * fVar21 + fVar13;
               *(float*)( lVar5 + 0x50 ) = fVar21;
               fVar24 = SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar21 * fVar21);
               if (( _LC6 < (double)fVar24 ) && ( fVar20 = fVar20 < fVar24 )) {
                  fVar20 = fVar20 / fVar24;
                  fVar21 = fVar21 * fVar20;
                  fVar25 = fVar25 * fVar20;
                  fVar26 = fVar26 * fVar20;
                  *(float*)( lVar5 + 0x50 ) = fVar21;
                  *(float*)( lVar5 + 0x48 ) = fVar25;
                  *(float*)( lVar5 + 0x4c ) = fVar26;
               }

               fVar21 = fVar21 - fVar13;
               fVar25 = fVar25 - fVar12;
               fVar26 = fVar26 - fVar9;
               if (this[0x5c] != (GodotBodySoftBodyPair3D)0x0) {
                  lVar3 = *(long*)( this + 0x48 );
                  fVar20 = (float)( (uint)fVar25 ^ __LC4 );
                  fVar9 = (float)( (uint)fVar26 ^ __LC4 );
                  fVar24 = (float)( (uint)fVar21 ^ __LC4 );
                  fVar13 = *(float*)( lVar3 + 0x170 );
                  local_b4 = (float)*(undefined8*)( lVar3 + 0x1f8 );
                  fStack_b0 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1f8 ) >> 0x20 );
                  fVar12 = ( fVar17 + local_b4 ) - *(float*)( lVar3 + 0x1f8 );
                  fVar17 = ( fVar10 + fStack_b0 ) - *(float*)( lVar3 + 0x1fc );
                  fVar10 = ( fVar14 + *(float*)( lVar3 + 0x200 ) ) - *(float*)( lVar3 + 0x200 );
                  fVar27 = fVar20 * fVar10 - fVar12 * fVar24;
                  fVar14 = fVar9 * fVar12 - fVar20 * fVar17;
                  fVar17 = fVar17 * fVar24 - fVar10 * fVar9;
                  *(ulong*)( lVar3 + 0xd8 ) = CONCAT44(fVar9 * fVar13 + *(float*)( lVar3 + 0xdc ), fVar20 * fVar13 + *(float*)( lVar3 + 0xd8 ));
                  *(ulong*)( lVar3 + 0xe0 ) = CONCAT44(fVar17 * *(float*)( lVar3 + 0x1b0 ) + fVar27 * *(float*)( lVar3 + 0x1b4 ) + fVar14 * *(float*)( lVar3 + 0x1b8 ) + *(float*)( lVar3 + 0xe4 ), fVar24 * fVar13 + *(float*)( lVar3 + 0xe0 ));
                  *(ulong*)( lVar3 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1c8 ) >> 0x20 ) * fVar27 + *(float*)( lVar3 + 0x1c8 ) * fVar17 + *(float*)( lVar3 + 0x1d0 ) * fVar14, (float)*(undefined8*)( lVar3 + 0xe8 ) + (float)*(undefined8*)( lVar3 + 0x1c0 ) * fVar27 + *(float*)( lVar3 + 0x1bc ) * fVar17 + *(float*)( lVar3 + 0x1c4 ) * fVar14);
               }

               if (this[0x5d] != (GodotBodySoftBodyPair3D)0x0) {
                  GodotSoftBody3D::apply_node_impulse(( uint ) * (undefined8*)( this + 0x50 ), (Vector3*)( ulong ) * (uint*)( lVar5 + 0x1c ));
               }

               uVar11 = *(undefined8*)( lVar5 + 0x38 );
               *(undefined1*)( lVar5 + 0x6c ) = 1;
               *(float*)( lVar5 + 0x38 ) = (float)uVar11 - fVar25;
               *(float*)( lVar5 + 0x3c ) = (float)( (ulong)uVar11 >> 0x20 ) - fVar26;
               *(float*)( lVar5 + 0x40 ) = *(float*)( lVar5 + 0x40 ) - fVar21;
            }

         }

         uVar6 = uVar6 + 1;
         lVar7 = lVar7 + 0x88;
         if (uVar2 == uVar6) break;
         if (*(uint*)( this + 0x60 ) <= uVar6) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar6, ( ulong ) * (uint*)( this + 0x60 ), "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

      }
;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotBodySoftBodyPair3D::solve(float) */void GodotBodySoftBodyPair3D::solve(GodotBodySoftBodyPair3D *this, float param_1) {
   if (this[0x3c] != (GodotBodySoftBodyPair3D)0x0) {
      solve(this, param_1);
      return;
   }

   return;
}
/* CowData<GodotBody3D::Contact>::_copy_on_write() [clone .isra.0] */void CowData<GodotBody3D::Contact>::_copy_on_write(CowData<GodotBody3D::Contact> *this) {
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
   __n = lVar2 * 0x68;
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
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
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
   __n = lVar2 * 0xc;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodySoftBodyPair3D::pre_solve(float) [clone .part.0] */undefined1 GodotBodySoftBodyPair3D::pre_solve(GodotBodySoftBodyPair3D *this, float param_1) {
   undefined8 *puVar1;
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
   undefined8 uVar12;
   undefined1 auVar13[16];
   GodotBodySoftBodyPair3D GVar14;
   undefined4 uVar15;
   long lVar16;
   long lVar17;
   undefined8 uVar18;
   code *pcVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   long lVar23;
   long lVar24;
   char *pcVar25;
   ulong uVar26;
   long lVar27;
   float fVar28;
   float *pfVar29;
   ulong uVar30;
   float *pfVar31;
   long in_FS_OFFSET;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   uint uVar40;
   float fVar41;
   undefined8 uVar42;
   float fVar44;
   undefined1 auVar45[16];
   float fVar46;
   uint uVar47;
   uint uVar48;
   undefined8 uVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   undefined1 auVar55[12];
   char *pcVar56;
   float local_188;
   undefined1 local_139;
   float local_c0;
   float fStack_bc;
   float local_b4;
   float fStack_b0;
   float local_a8;
   float fStack_a4;
   float local_9c;
   float fStack_98;
   float local_90;
   float fStack_8c;
   float local_84;
   float fStack_80;
   float local_78;
   float fStack_74;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined4 local_48;
   long local_40;
   float fVar43;
   lVar16 = *(long*)( this + 0x48 );
   lVar23 = (long)*(int*)( this + 0x58 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = *(float*)( *(long*)( this + 0x40 ) + 0xdc );
   lVar24 = *(long*)( lVar16 + 0x38 );
   if (*(int*)( this + 0x58 ) < 0) {
      if (lVar24 != 0) {
         lVar27 = *(long*)( lVar24 + -8 );
         goto LAB_00103cc5;
      }

   }
 else if (lVar24 != 0) {
      lVar27 = *(long*)( lVar24 + -8 );
      if (lVar23 < lVar27) {
         fVar28 = *(float*)( *(long*)( lVar24 + 0x80 + lVar23 * 0x90 ) + 0x2c );
         if (fVar28 == 0.0) {
            fVar28 = *(float*)( *(long*)( this + 0x40 ) + 0xe0 );
         }

         local_48 = 0;
         fVar41 = (float)_LC21 / param_1;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         if (this[0x5c] == (GodotBodySoftBodyPair3D)0x0) {
            local_188 = 0.0;
            pfVar31 = (float*)local_68;
         }
 else {
            local_188 = *(float*)( lVar16 + 0x170 );
            pfVar31 = (float*)( lVar16 + 0x1b0 );
         }

         uVar47 = *(uint*)( this + 0x60 );
         if (uVar47 == 0) {
            local_139 = 0;
            LAB_00103968:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return local_139;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         lVar23 = 0;
         local_139 = 0;
         uVar30 = (ulong)uVar47;
         lVar24 = lVar23;
         if (uVar47 != 0) {
            do {
               fVar36 = 0.0;
               GVar14 = this[0x5d];
               lVar27 = *(long*)( this + 0x68 ) + lVar23 * 0x88;
               *(undefined1*)( lVar27 + 0x6c ) = 0;
               if (( ( GVar14 != (GodotBodySoftBodyPair3D)0x0 ) && ( fVar36 = (float)GodotSoftBody3D::get_node_inv_mass(( uint ) * (undefined8*)( this + 0x50 )) ),fVar36 != 0.0 )) {
                  fVar3 = *(float*)( lVar27 + 0x20 );
                  fVar32 = (float)*(undefined8*)( lVar27 + 0x20 );
                  fVar34 = (float)( ( ulong ) * (undefined8*)( lVar27 + 0x20 ) >> 0x20 );
                  fVar4 = *(float*)( lVar27 + 0x28 );
                  fVar5 = *(float*)( lVar16 + 0x5c );
                  fVar6 = *(float*)( lVar27 + 0x24 );
                  fVar7 = *(float*)( lVar16 + 0x48 );
                  fVar8 = *(float*)( lVar16 + 0x70 );
                  fVar9 = *(float*)( lVar16 + 0x54 );
                  fVar10 = *(float*)( lVar16 + 0x4c );
                  fVar11 = *(float*)( lVar16 + 0x58 );
                  fVar35 = *(float*)( lVar16 + 0x60 ) * fVar32 + *(float*)( lVar16 + 100 ) * fVar34 + *(float*)( lVar16 + 0x68 ) * fVar4 + *(float*)( lVar16 + 0x74 );
                  fVar37 = (float)*(undefined8*)( lVar16 + 0x48 ) * fVar32 + fVar34 * fVar10 + (float)*(undefined8*)( lVar16 + 0x50 ) * fVar4 + (float)*(undefined8*)( lVar16 + 0x6c );
                  fVar38 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x50 ) >> 0x20 ) * fVar32 + fVar34 * fVar11 + (float)( ( ulong ) * (undefined8*)( lVar16 + 0x58 ) >> 0x20 ) * fVar4 + (float)( ( ulong ) * (undefined8*)( lVar16 + 0x6c ) >> 0x20 );
                  fVar32 = *(float*)( lVar16 + 0x50 );
                  fVar34 = *(float*)( lVar16 + 0x6c );
                  auVar55 = GodotSoftBody3D::get_node_position(( uint ) * (undefined8*)( this + 0x50 ));
                  uVar49 = *(undefined8*)( lVar27 + 0xc );
                  local_78 = auVar55._0_4_;
                  fStack_74 = auVar55._4_4_;
                  uVar12 = *(undefined8*)( lVar27 + 0x30 );
                  fVar39 = *(float*)( lVar27 + 0x14 );
                  fVar52 = auVar55._8_4_ + (float)( (ulong)uVar12 >> 0x20 );
                  local_78 = (float)*(undefined8*)( lVar27 + 0x2c ) + local_78;
                  fVar43 = (float)( ( ulong ) * (undefined8*)( lVar27 + 0x2c ) >> 0x20 ) + fStack_74;
                  uVar42 = CONCAT44(fVar43, local_78);
                  fVar33 = (float)( (ulong)uVar49 >> 0x20 );
                  fVar43 = ( fVar37 - local_78 ) * *(float*)( lVar27 + 0xc ) + ( fVar38 - fVar43 ) * fVar33 + ( fVar35 - fVar52 ) * fVar39;
                  if (0.0 < fVar43) {
                     lVar17 = *(long*)( this + 0x40 );
                     if (*(long*)( lVar17 + 0x6118 ) == 0) goto LAB_00103098;
                     lVar24 = (long)*(int*)( lVar17 + 0x6120 );
                     uVar26 = *(ulong*)( *(long*)( lVar17 + 0x6118 ) + -8 );
                     if (lVar24 < (long)uVar26) {
                        *(int*)( lVar17 + 0x6120 ) = *(int*)( lVar17 + 0x6120 ) + 1;
                        if (lVar24 < 0) {
                           LAB_00103d14:iVar20 = 0x38;
                           pcVar25 = "./core/templates/vector.h";
                           pcVar56 = "((Vector<T> *)(this))->_cowdata.size()";
                           goto LAB_00103717;
                        }

                        CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( lVar17 + 0x6118 ));
                        puVar1 = (undefined8*)( *(long*)( lVar17 + 0x6118 ) + lVar24 * 0xc );
                        *puVar1 = CONCAT44(fVar38, fVar37);
                        *(float*)( puVar1 + 1 ) = fVar35;
                        lVar17 = *(long*)( this + 0x40 );
                        iVar20 = *(int*)( lVar17 + 0x6120 );
                        lVar24 = (long)iVar20;
                        if (*(long*)( lVar17 + 0x6118 ) == 0) {
                           if (lVar24 < 0) {
                              uVar26 = 0;
                              *(int*)( lVar17 + 0x6120 ) = iVar20 + 1;
                              goto LAB_00103d14;
                           }

                           uVar49 = *(undefined8*)( lVar27 + 0xc );
                           fVar39 = *(float*)( lVar27 + 0x14 );
                           fVar33 = (float)( (ulong)uVar49 >> 0x20 );
                        }
 else {
                           uVar26 = *(ulong*)( *(long*)( lVar17 + 0x6118 ) + -8 );
                           if ((long)uVar26 <= lVar24) {
                              uVar49 = *(undefined8*)( lVar27 + 0xc );
                              fVar39 = *(float*)( lVar27 + 0x14 );
                              goto LAB_00103088;
                           }

                           *(int*)( lVar17 + 0x6120 ) = iVar20 + 1;
                           if (lVar24 < 0) goto LAB_00103d14;
                           CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( lVar17 + 0x6118 ));
                           puVar1 = (undefined8*)( *(long*)( lVar17 + 0x6118 ) + lVar24 * 0xc );
                           *puVar1 = uVar42;
                           *(float*)( puVar1 + 1 ) = fVar52;
                           uVar49 = *(undefined8*)( lVar27 + 0xc );
                           fVar39 = *(float*)( lVar27 + 0x14 );
                           fVar33 = (float)( (ulong)uVar49 >> 0x20 );
                        }

                     }
 else {
                        LAB_00103088:fVar33 = (float)( (ulong)uVar49 >> 0x20 );
                     }

                     LAB_00103098:lVar24 = *(long*)( this + 0x48 );
                     fVar50 = *(float*)( lVar16 + 0x74 );
                     uVar18 = *(undefined8*)( lVar24 + 0x1f8 );
                     fVar44 = *(float*)( lVar16 + 0x70 );
                     fVar46 = *(float*)( lVar24 + 0x200 );
                     local_84 = (float)uVar18;
                     local_84 = ( fVar37 - *(float*)( lVar16 + 0x6c ) ) - local_84;
                     *(ulong*)( lVar27 + 0x80 ) = CONCAT44(fVar52, fStack_74 + (float)uVar12);
                     fStack_80 = (float)( (ulong)uVar18 >> 0x20 );
                     fStack_80 = ( fVar38 - fVar44 ) - fStack_80;
                     fVar46 = ( fVar35 - fVar50 ) - fVar46;
                     fVar44 = (float)uVar49;
                     *(ulong*)( lVar27 + 0x70 ) = CONCAT44(fStack_80, local_84);
                     *(ulong*)( lVar27 + 0x78 ) = CONCAT44(local_78, fVar46);
                     fVar50 = local_84 * fVar33 - fStack_80 * fVar44;
                     fVar54 = fVar46 * fVar44 - local_84 * fVar39;
                     fVar37 = fStack_80 * fVar39 - fVar46 * fVar33;
                     fVar38 = pfVar31[6] * fVar37 + pfVar31[7] * fVar54 + pfVar31[8] * fVar50;
                     fVar53 = pfVar31[3] * fVar37 + pfVar31[4] * fVar54 + pfVar31[5] * fVar50;
                     fVar37 = fVar37 * *pfVar31 + fVar54 * pfVar31[1] + fVar50 * pfVar31[2];
                     fVar50 = fVar2 - fVar43;
                     *(float*)( lVar27 + 0x5c ) = (float)_LC21 / ( ( fVar46 * fVar53 - fStack_80 * fVar38 ) * fVar44 + ( fVar38 * local_84 - fVar46 * fVar37 ) * fVar33 + ( fVar37 * fStack_80 - fVar53 * local_84 ) * fVar39 + fVar36 + local_188 );
                     fVar36 = (float)( (uint)fVar28 ^ __LC4 );
                     if (0.0 < fVar50) {
                        fVar50 = 0.0;
                     }

                     fVar37 = *(float*)( lVar27 + 0x48 );
                     GVar14 = this[0x5c];
                     *(float*)( lVar27 + 0x68 ) = fVar43;
                     *(float*)( lVar27 + 0x60 ) = fVar36 * fVar41 * fVar50;
                     fVar38 = fVar37 * fVar39 + *(float*)( lVar27 + 0x50 );
                     fVar36 = fVar37 * fVar44 + *(float*)( lVar27 + 0x48 );
                     fVar39 = fVar37 * (float)( (ulong)uVar49 >> 0x20 ) + *(float*)( lVar27 + 0x4c );
                     if (GVar14 != (GodotBodySoftBodyPair3D)0x0) {
                        fVar53 = (float)( (uint)fVar36 ^ __LC4 );
                        fVar51 = (float)( (uint)fVar39 ^ __LC4 );
                        local_90 = (float)*(undefined8*)( lVar24 + 0x1f8 );
                        fStack_8c = (float)( ( ulong ) * (undefined8*)( lVar24 + 0x1f8 ) >> 0x20 );
                        fVar33 = ( fStack_80 + fStack_8c ) - *(float*)( lVar24 + 0x1fc );
                        fVar46 = ( fVar46 + *(float*)( lVar24 + 0x200 ) ) - *(float*)( lVar24 + 0x200 );
                        fVar50 = ( local_84 + local_90 ) - *(float*)( lVar24 + 0x1f8 );
                        fVar54 = (float)( (uint)fVar38 ^ __LC4 );
                        fVar37 = *(float*)( lVar24 + 0x170 );
                        fVar44 = fVar51 * fVar50 - fVar53 * fVar33;
                        fVar50 = fVar53 * fVar46 - fVar50 * fVar54;
                        fVar33 = fVar33 * fVar54 - fVar46 * fVar51;
                        *(float*)( lVar24 + 0xd8 ) = fVar53 * fVar37 + *(float*)( lVar24 + 0xd8 );
                        *(float*)( lVar24 + 0xdc ) = fVar51 * fVar37 + *(float*)( lVar24 + 0xdc );
                        *(float*)( lVar24 + 0xe0 ) = fVar54 * fVar37 + *(float*)( lVar24 + 0xe0 );
                        *(float*)( lVar24 + 0xe4 ) = fVar33 * *(float*)( lVar24 + 0x1b0 ) + fVar50 * *(float*)( lVar24 + 0x1b4 ) + fVar44 * *(float*)( lVar24 + 0x1b8 ) + *(float*)( lVar24 + 0xe4 );
                        *(ulong*)( lVar24 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar24 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar24 + 0x1c8 ) >> 0x20 ) * fVar50 + *(float*)( lVar24 + 0x1c8 ) * fVar33 + *(float*)( lVar24 + 0x1d0 ) * fVar44, (float)*(undefined8*)( lVar24 + 0xe8 ) + (float)*(undefined8*)( lVar24 + 0x1c0 ) * fVar50 + *(float*)( lVar24 + 0x1bc ) * fVar33 + *(float*)( lVar24 + 0x1c4 ) * fVar44);
                     }

                     if (this[0x5d] != (GodotBodySoftBodyPair3D)0x0) {
                        GodotSoftBody3D::apply_node_impulse(( uint ) * (undefined8*)( this + 0x50 ), (Vector3*)( ulong ) * (uint*)( lVar27 + 0x1c ));
                        lVar24 = *(long*)( this + 0x48 );
                     }

                     lVar17 = *(long*)( lVar24 + 0x338 );
                     *(ulong*)( lVar27 + 0x38 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar27 + 0x38 ) >> 0x20 ) - fVar39, (float)*(undefined8*)( lVar27 + 0x38 ) - fVar36);
                     *(float*)( lVar27 + 0x40 ) = *(float*)( lVar27 + 0x40 ) - fVar38;
                     if (lVar17 != 0) {
                        fVar38 = *(float*)( lVar24 + 0xe0 );
                        local_a8 = (float)*(undefined8*)( lVar24 + 0xd8 );
                        fVar33 = *(float*)( lVar24 + 0xec );
                        fStack_a4 = (float)( ( ulong ) * (undefined8*)( lVar24 + 0xd8 ) >> 0x20 );
                        local_9c = (float)*(undefined8*)( lVar24 + 0xe4 );
                        fStack_98 = (float)( ( ulong ) * (undefined8*)( lVar24 + 0xe4 ) >> 0x20 );
                        fVar36 = *(float*)( lVar27 + 0x74 );
                        fVar39 = *(float*)( lVar27 + 0x70 );
                        fVar37 = *(float*)( lVar27 + 0x78 );
                        auVar55 = GodotSoftBody3D::get_node_velocity(( uint ) * (undefined8*)( this + 0x50 ));
                        lVar24 = *(long*)( this + 0x48 );
                        uVar15 = *(undefined4*)( this + 0x58 );
                        uVar47 = *(uint*)( lVar27 + 0x14 );
                        auVar13 = *(undefined1(*) [16])( *(long*)( this + 0x50 ) + 0x10 );
                        uVar40 = *(uint*)( lVar27 + 0x10 );
                        uVar48 = *(uint*)( lVar27 + 0xc );
                        if (( *(long*)( lVar24 + 0x338 ) != 0 ) && ( iVar20 = (int)*(undefined8*)( *(long*)( lVar24 + 0x338 ) + -8 ) ),iVar20 != 0) {
                           CowData<GodotBody3D::Contact>::_copy_on_write((CowData<GodotBody3D::Contact>*)( lVar24 + 0x338 ));
                           iVar21 = *(int*)( lVar24 + 0x340 );
                           lVar17 = *(long*)( lVar24 + 0x338 );
                           if (iVar21 < iVar20) {
                              *(int*)( lVar24 + 0x340 ) = iVar21 + 1;
                              LAB_00103b11:auVar45._8_8_ = auVar13._0_8_;
                              auVar45._0_8_ = auVar13._8_8_;
                              puVar1 = (undefined8*)( lVar17 + (long)iVar21 * 0x68 );
                              uVar48 = uVar48 ^ __LC4;
                              *(undefined4*)( puVar1 + 5 ) = uVar15;
                              uVar40 = uVar40 ^ __LC4;
                              *(undefined8*)( (long)puVar1 + 0x2c ) = uVar42;
                              uVar47 = uVar47 ^ __LC4;
                              *(undefined4*)( puVar1 + 7 ) = 0;
                              *puVar1 = CONCAT44(fVar8 + fVar5 * fVar4 + fVar11 * fVar6 + fVar3 * fVar9, fVar7 * fVar3 + fVar10 * fVar6 + fVar32 * fVar4 + fVar34);
                              puVar1[1] = CONCAT44(uVar48, fVar35);
                              puVar1[2] = CONCAT44(uVar47, uVar40);
                              puVar1[3] = CONCAT44(( fVar33 * fVar39 - fVar37 * local_9c ) + fStack_a4, local_a8 + ( fStack_98 * fVar37 - fVar33 * fVar36 ));
                              puVar1[4] = CONCAT44(fVar43, ( local_9c * fVar36 - fStack_98 * fVar39 ) + fVar38);
                              *(float*)( (long)puVar1 + 0x34 ) = fVar52;
                              *(undefined1(*) [16])( puVar1 + 8 ) = auVar45;
                              *(undefined1(*) [12])( puVar1 + 10 ) = auVar55;
                              *(undefined8*)( (long)puVar1 + 0x5c ) = *(undefined8*)( lVar27 + 0x38 );
                              *(undefined4*)( (long)puVar1 + 100 ) = *(undefined4*)( lVar27 + 0x40 );
                           }
 else if (0 < iVar20) {
                              pfVar29 = (float*)( lVar17 + 0x24 );
                              iVar22 = 0;
                              fVar50 = *(float*)( lVar17 + 0x24 );
                              while (fVar44 = fVar50,iVar21 = iVar22,iVar22 = iVar21 + 1,iVar20 != iVar22) {
                                 while (true) {
                                    pfVar29 = pfVar29 + 0x1a;
                                    fVar50 = *pfVar29;
                                    if (*pfVar29 < fVar44) break;
                                    iVar22 = iVar22 + 1;
                                    if (iVar20 == iVar22) goto LAB_0010367e;
                                 }
;
                              }
;
                              LAB_0010367e:if (fVar44 < fVar43) goto LAB_00103b11;
                           }

                        }

                     }

                     if (this[0x5e] == (GodotBodySoftBodyPair3D)0x0) {
                        GVar14 = this[0x5c];
                        *(undefined1*)( lVar27 + 0x6c ) = 1;
                        if (GVar14 != (GodotBodySoftBodyPair3D)0x0) {
                           GodotBody3D::set_active(SUB81(*(undefined8*)( this + 0x48 ), 0));
                        }

                        lVar24 = *(long*)( this + 0x48 );
                        fVar36 = *(float*)( lVar24 + 0x13c );
                        *(float*)( lVar27 + 100 ) = fVar36;
                        if (fVar36 != 0.0) {
                           fVar36 = *(float*)( lVar27 + 0x74 );
                           fVar3 = *(float*)( lVar27 + 0x70 );
                           fVar5 = *(float*)( lVar24 + 0xec );
                           local_c0 = (float)*(undefined8*)( lVar24 + 0xe4 );
                           fStack_bc = (float)( ( ulong ) * (undefined8*)( lVar24 + 0xe4 ) >> 0x20 );
                           fVar6 = *(float*)( lVar24 + 0xe0 );
                           fStack_b0 = (float)( ( ulong ) * (undefined8*)( lVar24 + 0xd8 ) >> 0x20 );
                           fVar4 = *(float*)( lVar27 + 0x78 );
                           local_b4 = (float)*(undefined8*)( lVar24 + 0xd8 );
                           auVar55 = GodotSoftBody3D::get_node_velocity(( uint ) * (undefined8*)( this + 0x50 ));
                           local_78 = auVar55._0_4_;
                           fStack_74 = auVar55._4_4_;
                           *(float*)( lVar27 + 100 ) = ( ( ( local_78 - local_b4 ) - ( fStack_bc * fVar4 - fVar5 * fVar36 ) ) * *(float*)( lVar27 + 0xc ) + ( ( fStack_74 - fStack_b0 ) - ( fVar3 * fVar5 - local_c0 * fVar4 ) ) * *(float*)( lVar27 + 0x10 ) + ( ( auVar55._8_4_ - fVar6 ) - ( local_c0 * fVar36 - fStack_bc * fVar3 ) ) * *(float*)( lVar27 + 0x14 ) ) * *(float*)( lVar27 + 100 );
                        }

                        local_139 = 1;
                     }
 else {
                        this[0x3c] = (GodotBodySoftBodyPair3D)0x0;
                     }

                  }

               }

               if (uVar30 == lVar23 + 1U) goto LAB_00103968;
               lVar23 = lVar23 + 1;
               uVar47 = *(uint*)( this + 0x60 );
               lVar24 = lVar23;
            }
 while ( (uint)lVar23 < uVar47 );
         }

         uVar26 = (ulong)uVar47;
         iVar20 = 0xb2;
         pcVar25 = "./core/templates/local_vector.h";
         pcVar56 = "count";
         LAB_00103717:_err_print_index_error("operator[]", pcVar25, iVar20, lVar24, uVar26, "p_index", pcVar56, "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar19 = (code*)invalidInstructionException();
         ( *pcVar19 )();
      }

      goto LAB_00103cc5;
   }

   lVar27 = 0;
   LAB_00103cc5:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar23, lVar27, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar19 = (code*)invalidInstructionException();
   ( *pcVar19 )();
}
/* GodotBodySoftBodyPair3D::pre_solve(float) */undefined8 GodotBodySoftBodyPair3D::pre_solve(GodotBodySoftBodyPair3D *this, float param_1) {
   undefined8 uVar1;
   if (this[0x3c] != (GodotBodySoftBodyPair3D)0x0) {
      uVar1 = pre_solve(this, param_1);
      return uVar1;
   }

   return 0;
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
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00103f99;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00103f99:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00103fa0;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00103fa0:if (plVar10 != (long*)0x0) {
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
/* GodotBodySoftBodyPair3D::~GodotBodySoftBodyPair3D() */void GodotBodySoftBodyPair3D::~GodotBodySoftBodyPair3D(GodotBodySoftBodyPair3D *this) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   void *pvVar12;
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
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   uint *puVar36;
   int iVar37;
   uint uVar38;
   long lVar39;
   ulong uVar40;
   uint *puVar41;
   ulong uVar42;
   uint *puVar43;
   ulong uVar44;
   ulong uVar45;
   uint uVar46;
   long in_FS_OFFSET;
   GodotBodySoftBodyPair3D *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00109e80;
   local_48 = this;
   HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( *(long*)( this + 0x48 ) + 0x2f0 ), (GodotConstraint3D**)&local_48);
   lVar6 = *(long*)( this + 0x50 );
   lVar7 = *(long*)( lVar6 + 0x288 );
   if (( lVar7 != 0 ) && ( *(int*)( lVar6 + 0x2ac ) != 0 )) {
      lVar8 = *(long*)( lVar6 + 0x2a0 );
      uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar6 + 0x2a8 ) * 4 );
      uVar44 = CONCAT44(0, uVar33);
      lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar6 + 0x2a8 ) * 8 );
      uVar34 = (long)this * 0x3ffff - 1;
      uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
      uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
      uVar34 = uVar34 >> 0x16 ^ uVar34;
      uVar42 = uVar34 & 0xffffffff;
      if ((int)uVar34 == 0) {
         uVar42 = 1;
      }

      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar42 * lVar9;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar44;
      lVar39 = SUB168(auVar13 * auVar23, 8);
      uVar46 = *(uint*)( lVar8 + lVar39 * 4 );
      iVar37 = SUB164(auVar13 * auVar23, 8);
      if (uVar46 != 0) {
         uVar35 = 0;
         LAB_0010419d:if (uVar46 != (uint)uVar42) goto LAB_00104150;
         lVar10 = *(long*)( lVar6 + 0x290 );
         uVar46 = *(uint*)( lVar10 + lVar39 * 4 );
         uVar34 = (ulong)uVar46;
         if (this != *(GodotBodySoftBodyPair3D**)( lVar7 + uVar34 * 8 )) goto LAB_00104150;
         lVar11 = *(long*)( lVar6 + 0x298 );
         puVar1 = (uint*)( lVar11 + uVar34 * 4 );
         uVar35 = *puVar1;
         uVar42 = (ulong)uVar35;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = ( ulong )(uVar35 + 1) * lVar9;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar44;
         lVar39 = SUB168(auVar17 * auVar27, 8) * 4;
         uVar38 = SUB164(auVar17 * auVar27, 8);
         uVar45 = (ulong)uVar38;
         puVar41 = (uint*)( lVar8 + lVar39 );
         if (( *puVar41 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar41 * lVar9,auVar28._8_8_ = 0,auVar28._0_8_ = uVar44,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar38 + uVar33 ) - SUB164(auVar18 * auVar28, 8)) * lVar9,auVar29._8_8_ = 0,auVar29._0_8_ = uVar44,SUB164(auVar19 * auVar29, 8) == 0) {
            uVar45 = (ulong)uVar35;
         }
 else {
            while (true) {
               puVar36 = (uint*)( lVar39 + lVar10 );
               puVar4 = (uint*)( lVar10 + uVar42 * 4 );
               puVar43 = (uint*)( uVar42 * 4 + lVar8 );
               puVar2 = (undefined4*)( lVar11 + ( ulong ) * puVar36 * 4 );
               puVar3 = (undefined4*)( lVar11 + ( ulong ) * puVar4 * 4 );
               uVar5 = *puVar3;
               *puVar3 = *puVar2;
               *puVar2 = uVar5;
               uVar35 = *puVar41;
               *puVar41 = *puVar43;
               *puVar43 = uVar35;
               uVar35 = *puVar36;
               *puVar36 = *puVar4;
               *puVar4 = uVar35;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = ( ulong )((int)uVar45 + 1) * lVar9;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar44;
               uVar40 = SUB168(auVar22 * auVar32, 8);
               lVar39 = uVar40 * 4;
               puVar41 = (uint*)( lVar8 + lVar39 );
               if (( *puVar41 == 0 ) || ( auVar20._8_8_ = 0 ),auVar20._0_8_ = ( ulong ) * puVar41 * lVar9,auVar30._8_8_ = 0,auVar30._0_8_ = uVar44,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( SUB164(auVar22 * auVar32, 8) + uVar33 ) - SUB164(auVar20 * auVar30, 8)) * lVar9,auVar31._8_8_ = 0,auVar31._0_8_ = uVar44,SUB164(auVar21 * auVar31, 8) == 0) break;
               uVar42 = uVar45;
               uVar45 = uVar40 & 0xffffffff;
            }
;
         }

         *(undefined4*)( lVar8 + uVar45 * 4 ) = 0;
         uVar33 = *(int*)( lVar6 + 0x2ac ) - 1;
         *(uint*)( lVar6 + 0x2ac ) = uVar33;
         if (uVar46 < uVar33) {
            uVar35 = *(uint*)( lVar11 + (ulong)uVar33 * 4 );
            pvVar12 = *(void**)( this + 0x68 );
            *(undefined8*)( lVar7 + uVar34 * 8 ) = *(undefined8*)( lVar7 + (ulong)uVar33 * 8 );
            *puVar1 = uVar35;
            *(uint*)( lVar10 + ( ulong ) * (uint*)( lVar11 + ( ulong ) * (uint*)( lVar6 + 0x2ac ) * 4 ) * 4 ) = uVar46;
            goto joined_r0x00104341;
         }

      }

   }

   LAB_001042d7:pvVar12 = *(void**)( this + 0x68 );
   joined_r0x00104341:if (pvVar12 == (void*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (*(int*)( this + 0x60 ) != 0) {
         *(undefined4*)( this + 0x60 ) = 0;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(pvVar12, false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00104150:uVar35 = uVar35 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar37 + 1) * lVar9;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar44;
   lVar39 = SUB168(auVar14 * auVar24, 8);
   uVar46 = *(uint*)( lVar8 + lVar39 * 4 );
   iVar37 = SUB164(auVar14 * auVar24, 8);
   if (( uVar46 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar46 * lVar9,auVar25._8_8_ = 0,auVar25._0_8_ = uVar44,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar33 + iVar37 ) - SUB164(auVar15 * auVar25, 8)) * lVar9,auVar26._8_8_ = 0,auVar26._0_8_ = uVar44,SUB164(auVar16 * auVar26, 8) < uVar35) goto LAB_001042d7;
   goto LAB_0010419d;
}
/* GodotBodySoftBodyPair3D::~GodotBodySoftBodyPair3D() */void GodotBodySoftBodyPair3D::~GodotBodySoftBodyPair3D(GodotBodySoftBodyPair3D *this) {
   ~GodotBodySoftBodyPair3D(this)
   ;;
   operator_delete(this, 0x70);
   return;
}
/* GodotBodyPair3D::~GodotBodyPair3D() */void GodotBodyPair3D::~GodotBodyPair3D(GodotBodyPair3D *this) {
   long in_FS_OFFSET;
   GodotBodyPair3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00109e38;
   local_28 = this;
   HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( *(long*)( this + 0x48 ) + 0x2f0 ), (GodotConstraint3D**)&local_28);
   local_28 = this;
   HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( *(long*)( this + 0x50 ) + 0x2f0 ), (GodotConstraint3D**)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBodyPair3D::~GodotBodyPair3D() */void GodotBodyPair3D::~GodotBodyPair3D(GodotBodyPair3D *this) {
   long in_FS_OFFSET;
   GodotBodyPair3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_00109e38;
   local_28 = this;
   HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( *(long*)( this + 0x48 ) + 0x2f0 ), (GodotConstraint3D**)&local_28);
   local_28 = this;
   HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( *(long*)( this + 0x50 ) + 0x2f0 ), (GodotConstraint3D**)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x298);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBodyPair3D::contact_added_callback(Vector3 const&, int, Vector3 const&, int, Vector3 const&)
    */void GodotBodyPair3D::contact_added_callback(Vector3 *param_1, int param_2, Vector3 *param_3, int param_4, Vector3 *param_5) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   Vector3 *pVVar10;
   int iVar11;
   undefined4 in_register_0000000c;
   undefined8 *puVar12;
   int iVar13;
   undefined4 in_register_00000034;
   float *pfVar14;
   long in_FS_OFFSET;
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
   long lVar26;
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   float local_ec;
   uint uStack_54;
   undefined8 uStack_50;
   undefined4 local_48;
   undefined4 uStack_44;
   uint uStack_40;
   undefined2 uStack_2a;
   pfVar14 = (float*)CONCAT44(in_register_00000034, param_2);
   puVar12 = (undefined8*)CONCAT44(in_register_0000000c, param_4);
   lVar7 = *(long*)( param_1 + 0x48 );
   fVar15 = *pfVar14;
   fVar24 = pfVar14[2];
   fVar1 = *(float*)( param_1 + 0x68 );
   fVar23 = (float)( ( ulong ) * (undefined8*)pfVar14 >> 0x20 );
   lVar8 = *(long*)( param_1 + 0x50 );
   fVar2 = *(float*)( param_1 + 100 );
   lVar9 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar22 = *(float*)( (long)puVar12 + 4 ) - fVar1;
   fVar3 = *(float*)( param_1 + 0x6c );
   fVar25 = *(float*)( puVar12 + 1 ) - fVar3;
   fVar18 = *(float*)( lVar7 + 0x90 ) * fVar15 + *(float*)( lVar7 + 0x94 ) * fVar23 + *(float*)( lVar7 + 0x98 ) * fVar24;
   fVar17 = *(float*)( lVar7 + 0x84 ) * fVar15 + *(float*)( lVar7 + 0x88 ) * fVar23 + *(float*)( lVar7 + 0x8c ) * fVar24;
   fVar21 = (float)*puVar12;
   fVar16 = fVar15 * *(float*)( lVar7 + 0x78 ) + fVar23 * *(float*)( lVar7 + 0x7c ) + *(float*)( lVar7 + 0x80 ) * fVar24;
   fVar19 = fVar21 - fVar2;
   iVar11 = *(int*)( param_1 + 0x290 );
   fVar20 = fVar19 * *(float*)( lVar8 + 0x78 ) + fVar22 * *(float*)( lVar8 + 0x7c ) + fVar25 * *(float*)( lVar8 + 0x80 );
   fVar15 = (float)*(undefined8*)( lVar8 + 0x88 ) * fVar22 + *(float*)( lVar8 + 0x84 ) * fVar19 + *(float*)( lVar8 + 0x8c ) * fVar25;
   fVar19 = (float)( ( ulong ) * (undefined8*)( lVar8 + 0x90 ) >> 0x20 ) * fVar22 + *(float*)( lVar8 + 0x90 ) * fVar19 + *(float*)( lVar8 + 0x98 ) * fVar25;
   if (4 < iVar11) {
      if (lVar9 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("contact_added_callback", "modules/godot_physics_3d/godot_body_pair_3d.cpp", 0x32, "Condition \"new_index >= (MAX_CONTACTS + 1)\" is true.", 0, 0);
         return;
      }

      goto LAB_00104e4e;
   }

   auVar28._0_4_ = (float)*(undefined8*)pfVar14 - fVar21;
   auVar28._4_4_ = fVar23 - (float)( ( ulong ) * puVar12 >> 0x20 );
   auVar28._8_8_ = 0;
   fVar24 = fVar24 - *(float*)( puVar12 + 1 );
   local_48 = 0;
   uStack_50 = 0;
   fVar21 = auVar28._0_4_ * auVar28._0_4_ + auVar28._4_4_ * auVar28._4_4_ + fVar24 * fVar24;
   local_ec = 0.0;
   lVar26 = 0;
   if (fVar21 != 0.0) {
      fVar21 = SQRT(fVar21);
      local_ec = fVar24 / fVar21;
      auVar27._4_4_ = fVar21;
      auVar27._0_4_ = fVar21;
      auVar27._8_8_ = _LC21;
      auVar28 = divps(auVar28, auVar27);
      lVar26 = auVar28._0_8_;
   }

   fVar24 = (float)( (ulong)lVar26 >> 0x20 );
   if (iVar11 < 1) {
      LAB_001047e1:*(ulong*)( param_1 + (long)iVar11 * 0x88 + 0x90 ) = CONCAT44(fVar17, fVar16);
      *(ulong*)( param_1 + (long)iVar11 * 0x88 + 0x98 ) = CONCAT44(fVar20, fVar18);
      *(ulong*)( param_1 + (long)iVar11 * 0x88 + 0xa0 ) = CONCAT44(fVar19, fVar15);
      *(undefined8*)( param_1 + (long)iVar11 * 0x88 + 0xa8 ) = 0;
      *(undefined8*)( param_1 + (long)iVar11 * 0x88 + 0x70 ) = 0;
      *(long*)( param_1 + (long)iVar11 * 0x88 + 0x78 ) = lVar26 << 0x20;
      for (int i = 0; i < 5; i++) {
         *(undefined8*)( param_1 + (long)iVar11 * 136 + ( 8*i + 176 ) ) = 0;
      }

      *(ulong*)( param_1 + (long)iVar11 * 0x88 + 0xd8 ) = CONCAT26(uStack_2a, 0x10000000000);
      *(ulong*)( param_1 + (long)iVar11 * 0x88 + 0x80 ) = CONCAT44(local_ec, fVar24);
      *(ulong*)( param_1 + (long)iVar11 * 0x88 + 0x88 ) = CONCAT44((int)param_5, (int)param_3);
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( param_1 + (long)iVar11 * 136 + ( 8*i + 224 ) ) = 0;
      }

      *(int*)( param_1 + 0x290 ) = iVar11 + 1;
   }
 else {
      fVar21 = *(float*)( *(long*)( param_1 + 0x40 ) + 0xd4 ) * *(float*)( *(long*)( param_1 + 0x40 ) + 0xd4 );
      pVVar10 = param_1 + 0x90;
      iVar13 = 0;
      do {
         if (( ( fVar16 - *(float*)pVVar10 ) * ( fVar16 - *(float*)pVVar10 ) + ( fVar17 - *(float*)( pVVar10 + 4 ) ) * ( fVar17 - *(float*)( pVVar10 + 4 ) ) + ( fVar18 - *(float*)( pVVar10 + 8 ) ) * ( fVar18 - *(float*)( pVVar10 + 8 ) ) < fVar21 ) && ( ( fVar20 - *(float*)( pVVar10 + 0xc ) ) * ( fVar20 - *(float*)( pVVar10 + 0xc ) ) + ( fVar15 - *(float*)( pVVar10 + 0x10 ) ) * ( fVar15 - *(float*)( pVVar10 + 0x10 ) ) + ( fVar19 - *(float*)( pVVar10 + 0x14 ) ) * ( fVar19 - *(float*)( pVVar10 + 0x14 ) ) < fVar21 )) {
            pVVar10 = param_1 + (long)iVar13 * 0x88;
            uStack_50 = *(undefined8*)( pVVar10 + 0xb8 );
            local_48 = *(undefined4*)( pVVar10 + 0xc0 );
            uStack_44 = ( undefined4 ) * (undefined8*)( param_1 + (long)iVar13 * 0x88 + 0xc4 );
            uStack_40 = ( uint )(( ulong ) * (undefined8*)( param_1 + (long)iVar13 * 0x88 + 0xc4 ) >> 0x20);
            uStack_54 = *(uint*)( pVVar10 + 0xb4 );
            goto LAB_001049af;
         }

         iVar13 = iVar13 + 1;
         pVVar10 = pVVar10 + 0x88;
      }
 while ( iVar11 != iVar13 );
      if (iVar11 != 4) goto LAB_001047e1;
      pVVar10 = param_1 + 0x7c;
      iVar13 = 0;
      iVar11 = -1;
      fVar21 = ( ( *(float*)( lVar7 + 0x58 ) * fVar17 + *(float*)( lVar7 + 0x54 ) * fVar16 + *(float*)( lVar7 + 0x5c ) * fVar18 ) - ( *(float*)( lVar8 + 0x58 ) * fVar15 + *(float*)( lVar8 + 0x54 ) * fVar20 + *(float*)( lVar8 + 0x5c ) * fVar19 + fVar1 ) ) * fVar24 + ( ( *(float*)( lVar7 + 0x4c ) * fVar17 + *(float*)( lVar7 + 0x48 ) * fVar16 + *(float*)( lVar7 + 0x50 ) * fVar18 ) - ( *(float*)( lVar8 + 0x4c ) * fVar15 + *(float*)( lVar8 + 0x48 ) * fVar20 + *(float*)( lVar8 + 0x50 ) * fVar19 + fVar2 ) ) * (float)lVar26 + ( ( fVar17 * *(float*)( lVar7 + 100 ) + fVar16 * *(float*)( lVar7 + 0x60 ) + fVar18 * *(float*)( lVar7 + 0x68 ) ) - ( fVar15 * *(float*)( lVar8 + 100 ) + fVar20 * *(float*)( lVar8 + 0x60 ) + fVar19 * *(float*)( lVar8 + 0x68 ) + fVar3 ) ) * local_ec;
      do {
         fVar22 = *(float*)( pVVar10 + 0x14 );
         fVar23 = *(float*)( pVVar10 + 0x18 );
         fVar25 = *(float*)( pVVar10 + 0x1c );
         fVar4 = *(float*)( pVVar10 + 0x20 );
         fVar5 = *(float*)( pVVar10 + 0x24 );
         fVar6 = *(float*)( pVVar10 + 0x28 );
         fVar22 = ( ( *(float*)( lVar7 + 0x48 ) * fVar22 + *(float*)( lVar7 + 0x4c ) * fVar23 + *(float*)( lVar7 + 0x50 ) * fVar25 ) - ( *(float*)( lVar8 + 0x48 ) * fVar4 + *(float*)( lVar8 + 0x4c ) * fVar5 + *(float*)( lVar8 + 0x50 ) * fVar6 + fVar2 ) ) * *(float*)pVVar10 + ( ( *(float*)( lVar7 + 0x54 ) * fVar22 + *(float*)( lVar7 + 0x58 ) * fVar23 + *(float*)( lVar7 + 0x5c ) * fVar25 ) - ( *(float*)( lVar8 + 0x54 ) * fVar4 + *(float*)( lVar8 + 0x58 ) * fVar5 + *(float*)( lVar8 + 0x5c ) * fVar6 + fVar1 ) ) * *(float*)( pVVar10 + 4 ) + ( ( fVar23 * *(float*)( lVar7 + 100 ) + fVar22 * *(float*)( lVar7 + 0x60 ) + fVar25 * *(float*)( lVar7 + 0x68 ) ) - ( *(float*)( lVar8 + 0x68 ) * fVar6 + fVar5 * *(float*)( lVar8 + 100 ) + fVar4 * *(float*)( lVar8 + 0x60 ) + fVar3 ) ) * *(float*)( pVVar10 + 8 );
         if (fVar22 < fVar21) {
            iVar11 = iVar13;
            fVar21 = fVar22;
         }

         iVar13 = iVar13 + 1;
         pVVar10 = pVVar10 + 0x88;
      }
 while ( iVar13 != 4 );
      if (-1 < iVar11) {
         uStack_54 = 0;
         pVVar10 = param_1 + (long)iVar11 * 0x88;
         uStack_44 = 0;
         uStack_40 = 0;
         LAB_001049af:*(undefined8*)( pVVar10 + 0x70 ) = 0;
         *(long*)( pVVar10 + 0x78 ) = lVar26 << 0x20;
         *(ulong*)( pVVar10 + 0x90 ) = CONCAT44(fVar17, fVar16);
         *(ulong*)( pVVar10 + 0x98 ) = CONCAT44(fVar20, fVar18);
         *(ulong*)( pVVar10 + 0x80 ) = CONCAT44(local_ec, fVar24);
         *(ulong*)( pVVar10 + 0x88 ) = CONCAT44((int)param_5, (int)param_3);
         *(ulong*)( pVVar10 + 0xa0 ) = CONCAT44(fVar19, fVar15);
         *(undefined8*)( pVVar10 + 0xa8 ) = 0;
         *(ulong*)( pVVar10 + 0xb0 ) = (ulong)uStack_54 << 0x20;
         *(undefined8*)( pVVar10 + 0xb8 ) = uStack_50;
         *(ulong*)( pVVar10 + 0xc0 ) = CONCAT44(uStack_44, local_48);
         *(ulong*)( pVVar10 + 200 ) = (ulong)uStack_40;
         *(undefined8*)( pVVar10 + 0xd0 ) = 0;
         *(ulong*)( pVVar10 + 0xd8 ) = CONCAT26(uStack_2a, 0x10000000000);
         for (int i = 0; i < 3; i++) {
            *(undefined8*)( pVVar10 + ( 8*i + 224 ) ) = 0;
         }

      }

   }

   if (lVar9 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104e4e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotBodyPair3D::_contact_added_callback(Vector3 const&, int, Vector3 const&, int, Vector3
   const&, void*) */void GodotBodyPair3D::_contact_added_callback(Vector3 *param_1, int param_2, Vector3 *param_3, int param_4, Vector3 *param_5, void *param_6) {
   contact_added_callback((Vector3*)param_6, (int)param_1, (Vector3*)(ulong)(uint)param_2, (int)param_3, (Vector3*)(ulong)(uint)param_4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair3D::validate_contacts() */void GodotBodyPair3D::validate_contacts(GodotBodyPair3D *this) {
   int iVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   long lVar13;
   long lVar14;
   long lVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   int iVar18;
   int iVar19;
   long lVar20;
   int iVar21;
   long in_FS_OFFSET;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   lVar13 = *(long*)( this + 0x50 );
   lVar14 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar15 = *(long*)( this + 0x48 );
   fVar2 = *(float*)( *(long*)( this + 0x40 ) + 0xd8 );
   fVar29 = (float)( (uint)fVar2 ^ __LC4 );
   if (0 < *(int*)( this + 0x290 )) {
      iVar19 = 0;
      iVar18 = *(int*)( this + 0x290 );
      do {
         while (true) {
            lVar20 = (long)iVar19;
            iVar1 = iVar19 + 1;
            if (this[lVar20 * 0x88 + 0xdd] != (GodotBodyPair3D)0x0) break;
            LAB_001050b2:iVar21 = iVar18 + -1;
            if (iVar1 < iVar18) {
               auVar5 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0x70 );
               auVar6 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0x80 );
               uVar16 = *(undefined8*)( this + lVar20 * 0x88 + 0xf0 );
               auVar7 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0x90 );
               auVar8 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0xa0 );
               auVar9 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0xb0 );
               uVar17 = *(undefined8*)( this + (long)iVar21 * 0x88 + 0x78 );
               auVar10 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0xc0 );
               auVar11 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0xd0 );
               auVar12 = *(undefined1(*) [16])( this + lVar20 * 0x88 + 0xe0 );
               *(undefined8*)( this + lVar20 * 0x88 + 0x70 ) = *(undefined8*)( this + (long)iVar21 * 0x88 + 0x70 );
               *(undefined8*)( this + lVar20 * 0x88 + 0x78 ) = uVar17;
               for (int i = 0; i < 7; i++) {
                  uVar17 = *(undefined8*)( this + (long)iVar21 * 136 + ( 16*i + 136 ) );
                  *(undefined8*)( this + lVar20 * 136 + ( 16*i + 128 ) ) = *(undefined8*)( this + (long)iVar21 * 136 + ( 16*i + 128 ) );
                  *(undefined8*)( this + lVar20 * 136 + ( 16*i + 136 ) ) = uVar17;
               }

               *(undefined8*)( this + lVar20 * 0x88 + 0xf0 ) = *(undefined8*)( this + (long)iVar21 * 0x88 + 0xf0 );
               *(undefined8*)( this + (long)iVar21 * 0x88 + 0xf0 ) = uVar16;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0x70 ) = auVar5;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0x80 ) = auVar6;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0x90 ) = auVar7;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0xa0 ) = auVar8;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0xb0 ) = auVar9;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0xc0 ) = auVar10;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0xd0 ) = auVar11;
               *(undefined1(*) [16])( this + (long)iVar21 * 0x88 + 0xe0 ) = auVar12;
            }

            *(int*)( this + 0x290 ) = iVar21;
            iVar18 = iVar21;
            if (iVar21 <= iVar19) goto LAB_001050ca;
         }
;
         this[lVar20 * 0x88 + 0xdd] = (GodotBodyPair3D)0x0;
         fVar22 = *(float*)( this + lVar20 * 0x88 + 0x90 );
         fVar24 = *(float*)( this + lVar20 * 0x88 + 0x94 );
         fVar23 = *(float*)( this + lVar20 * 0x88 + 0x98 );
         fVar26 = *(float*)( lVar15 + 0x60 ) * fVar22 + *(float*)( lVar15 + 100 ) * fVar24 + *(float*)( lVar15 + 0x68 ) * fVar23;
         fVar25 = *(float*)( lVar15 + 0x54 ) * fVar22 + *(float*)( lVar15 + 0x58 ) * fVar24 + *(float*)( lVar15 + 0x5c ) * fVar23;
         fVar3 = *(float*)( this + lVar20 * 0x88 + 0x9c );
         fVar4 = *(float*)( this + lVar20 * 0x88 + 0xa0 );
         fVar24 = fVar22 * *(float*)( lVar15 + 0x48 ) + fVar24 * *(float*)( lVar15 + 0x4c ) + fVar23 * *(float*)( lVar15 + 0x50 );
         fVar22 = *(float*)( this + lVar20 * 0x88 + 0xa4 );
         fVar28 = *(float*)( lVar13 + 0x60 ) * fVar3 + *(float*)( lVar13 + 100 ) * fVar4 + *(float*)( lVar13 + 0x68 ) * fVar22 + *(float*)( this + 0x6c );
         fVar27 = *(float*)( lVar13 + 0x54 ) * fVar3 + *(float*)( lVar13 + 0x58 ) * fVar4 + *(float*)( lVar13 + 0x5c ) * fVar22 + *(float*)( this + 0x68 );
         fVar22 = fVar3 * *(float*)( lVar13 + 0x48 ) + fVar4 * *(float*)( lVar13 + 0x4c ) + fVar22 * *(float*)( lVar13 + 0x50 ) + *(float*)( this + 100 );
         fVar23 = ( fVar24 - fVar22 ) * *(float*)( this + lVar20 * 0x88 + 0x7c ) + ( fVar25 - fVar27 ) * *(float*)( this + lVar20 * 0x88 + 0x80 ) + ( fVar26 - fVar28 ) * *(float*)( this + lVar20 * 0x88 + 0x84 );
         if (fVar23 < fVar29) goto LAB_001050b2;
         fVar26 = ( *(float*)( this + lVar20 * 0x88 + 0x84 ) * fVar23 + fVar28 ) - fVar26;
         fVar25 = ( *(float*)( this + lVar20 * 0x88 + 0x80 ) * fVar23 + fVar27 ) - fVar25;
         fVar24 = ( fVar22 + fVar23 * *(float*)( this + lVar20 * 0x88 + 0x7c ) ) - fVar24;
         if (fVar2 * fVar2 < fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26) goto LAB_001050b2;
         iVar18 = *(int*)( this + 0x290 );
         iVar19 = iVar1;
      }
 while ( iVar1 < iVar18 );
   }

   LAB_001050ca:if (lVar14 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBodyPair3D::setup(float) */undefined8 GodotBodyPair3D::setup(float param_1) {
   undefined8 uVar1;
   ulong uVar2;
   code *pcVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   int iVar12;
   GodotBodyPair3D *in_RDI;
   long in_FS_OFFSET;
   GodotBodyPair3D GVar13;
   Transform3D aTStack_f8[48];
   Transform3D local_c8[48];
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined4 local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   undefined8 local_68;
   undefined4 local_60;
   long local_30;
   lVar9 = *(long*)( in_RDI + 0x48 );
   lVar6 = *(long*)( in_RDI + 0x50 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   in_RDI[0x3d] = (GodotBodyPair3D)0x0;
   if (( ( *(uint*)( lVar6 + 0x24 ) & *(uint*)( lVar9 + 0x20 ) ) == 0 ) && ( ( *(uint*)( lVar9 + 0x24 ) & *(uint*)( lVar6 + 0x20 ) ) == 0 )) {
      LAB_001055f9:in_RDI[0x3c] = (GodotBodyPair3D)0x0;
      LAB_001055fd:uVar5 = 0;
      LAB_001055ff:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar5;
   }

   lVar8 = *(long*)( lVar9 + 0x2b0 );
   if (lVar8 != 0) {
      lVar10 = *(long*)( lVar8 + -8 );
      iVar7 = (int)lVar10 + -1;
      if (lVar10 < 1) goto LAB_00105640;
      iVar12 = 0;
      if (-1 < iVar7) {
         do {
            while (true) {
               iVar4 = ( iVar12 + iVar7 ) / 2;
               uVar2 = *(ulong*)( lVar8 + (long)iVar4 * 8 );
               if (*(ulong*)( lVar6 + 0x10 ) < uVar2) break;
               if (*(ulong*)( lVar6 + 0x10 ) <= uVar2) {
                  if (iVar4 != -1) goto LAB_001055f9;
                  goto LAB_0010531f;
               }

               iVar12 = iVar4 + 1;
               if (iVar7 < iVar12) goto LAB_0010531f;
            }
;
            iVar7 = iVar4 + -1;
         }
 while ( iVar12 <= iVar7 );
      }

   }

   LAB_0010531f:lVar6 = *(long*)( lVar6 + 0x2b0 );
   if (lVar6 != 0) {
      lVar10 = *(long*)( lVar6 + -8 );
      iVar7 = (int)lVar10 + -1;
      if (lVar10 < 1) {
         LAB_00105640:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar10, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      iVar12 = 0;
      if (-1 < iVar7) {
         do {
            while (true) {
               iVar4 = ( iVar12 + iVar7 ) / 2;
               uVar2 = *(ulong*)( lVar6 + (long)iVar4 * 8 );
               if (*(ulong*)( lVar9 + 0x10 ) < uVar2) break;
               if (*(ulong*)( lVar9 + 0x10 ) <= uVar2) {
                  if (iVar4 != -1) {
                     in_RDI[0x3c] = (GodotBodyPair3D)0x0;
                     goto LAB_001055fd;
                  }

                  goto LAB_0010537f;
               }

               iVar12 = iVar4 + 1;
               if (iVar7 < iVar12) goto LAB_0010537f;
            }
;
            iVar7 = iVar4 + -1;
         }
 while ( iVar12 <= iVar7 );
      }

   }

   LAB_0010537f:iVar7 = GodotBody3D::get_mode();
   if (iVar7 < 2) {
      GVar13 = (GodotBodyPair3D)0x0;
   }
 else {
      GVar13 = ( GodotBodyPair3D )(( *(uint*)( *(long*)( in_RDI + 0x48 ) + 0x24 ) & *(uint*)( *(long*)( in_RDI + 0x50 ) + 0x20 ) ) != 0);
   }

   in_RDI[0x60] = GVar13;
   iVar7 = GodotBody3D::get_mode();
   lVar9 = *(long*)( in_RDI + 0x48 );
   lVar6 = *(long*)( in_RDI + 0x50 );
   if (( iVar7 < 2 ) || ( ( *(uint*)( lVar9 + 0x20 ) & *(uint*)( lVar6 + 0x24 ) ) == 0 )) {
      *(undefined2*)( in_RDI + 0x61 ) = 0;
      if (in_RDI[0x60] == (GodotBodyPair3D)0x0) {
         if (( ( *(long*)( lVar9 + 0x338 ) == 0 ) || ( *(int*)( *(long*)( lVar9 + 0x338 ) + -8 ) < 1 ) ) && ( ( *(long*)( lVar6 + 0x338 ) == 0 || ( *(int*)( *(long*)( lVar6 + 0x338 ) + -8 ) < 1 ) ) )) goto LAB_001055f9;
         in_RDI[0x62] = (GodotBodyPair3D)0x1;
      }

   }
 else {
      *(undefined2*)( in_RDI + 0x61 ) = 1;
   }

   uVar5 = *(undefined8*)( lVar6 + 0x6c );
   uVar1 = *(undefined8*)( lVar9 + 0x6c );
   *(float*)( in_RDI + 0x6c ) = *(float*)( lVar6 + 0x74 ) - *(float*)( lVar9 + 0x74 );
   *(ulong*)( in_RDI + 100 ) = CONCAT44((float)( (ulong)uVar5 >> 0x20 ) - (float)( (ulong)uVar1 >> 0x20 ), (float)uVar5 - (float)uVar1);
   validate_contacts(in_RDI);
   local_68 = 0;
   local_60 = 0;
   Transform3D::Transform3D(aTStack_f8, (Basis*)( lVar9 + 0x48 ), (Vector3*)&local_68);
   lVar8 = (long)*(int*)( in_RDI + 0x58 );
   lVar6 = *(long*)( *(long*)( in_RDI + 0x48 ) + 0x38 );
   if (*(int*)( in_RDI + 0x58 ) < 0) {
      if (lVar6 != 0) {
         lVar6 = *(long*)( lVar6 + -8 );
         goto LAB_001056c0;
      }

   }
 else if (lVar6 != 0) {
      lVar6 = *(long*)( lVar6 + -8 );
      if (lVar6 <= lVar8) goto LAB_001056c0;
      Transform3D::operator *(local_c8, aTStack_f8);
      lVar6 = *(long*)( in_RDI + 0x50 );
      iVar7 = *(int*)( in_RDI + 0x5c );
      lVar8 = (long)iVar7;
      local_98 = *(undefined8*)( lVar6 + 0x48 );
      uStack_90 = *(undefined8*)( lVar6 + 0x50 );
      local_88 = *(undefined8*)( lVar6 + 0x58 );
      uStack_80 = *(undefined8*)( lVar6 + 0x60 );
      local_78 = ( undefined4 ) * (undefined8*)( lVar6 + 0x68 );
      fStack_74 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x68 ) >> 0x20 );
      fStack_70 = (float)*(undefined8*)( lVar6 + 0x70 );
      fStack_6c = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x70 ) >> 0x20 );
      fStack_74 = fStack_74 - (float)*(undefined8*)( lVar9 + 0x6c );
      fStack_70 = fStack_70 - (float)( ( ulong ) * (undefined8*)( lVar9 + 0x6c ) >> 0x20 );
      fStack_6c = fStack_6c - *(float*)( lVar9 + 0x74 );
      if (iVar7 < 0) {
         lVar9 = *(long*)( lVar6 + 0x38 );
         if (lVar9 != 0) {
            LAB_0010570a:lVar8 = (long)iVar7;
            lVar6 = *(long*)( lVar9 + -8 );
            goto LAB_001056c0;
         }

      }
 else {
         lVar9 = *(long*)( lVar6 + 0x38 );
         if (lVar9 != 0) {
            if (*(long*)( lVar9 + -8 ) <= lVar8) goto LAB_0010570a;
            Transform3D::operator *((Transform3D*)&local_68, (Transform3D*)&local_98);
            iVar7 = *(int*)( in_RDI + 0x58 );
            lVar9 = (long)iVar7;
            if (iVar7 < 0) {
               lVar6 = *(long*)( *(long*)( in_RDI + 0x48 ) + 0x38 );
               if (lVar6 != 0) {
                  LAB_00105724:lVar9 = (long)iVar7;
                  lVar6 = *(long*)( lVar6 + -8 );
                  goto LAB_0010572b;
               }

            }
 else {
               lVar6 = *(long*)( *(long*)( in_RDI + 0x48 ) + 0x38 );
               if (lVar6 != 0) {
                  if (*(long*)( lVar6 + -8 ) <= lVar9) goto LAB_00105724;
                  lVar10 = (long)*(int*)( in_RDI + 0x5c );
                  lVar11 = lVar9 * 0x90;
                  lVar8 = *(long*)( *(long*)( in_RDI + 0x50 ) + 0x38 );
                  lVar9 = lVar10;
                  if (*(int*)( in_RDI + 0x5c ) < 0) {
                     if (lVar8 != 0) goto LAB_0010576e;
                  }
 else if (lVar8 != 0) {
                     if (lVar10 < *(long*)( lVar8 + -8 )) {
                        GVar13 = (GodotBodyPair3D)GodotCollisionSolver3D::solve_static(*(GodotShape3D**)( lVar6 + 0x80 + lVar11 ), local_c8, *(GodotShape3D**)( lVar8 + 0x80 + lVar10 * 0x90 ), (Transform3D*)&local_68, _contact_added_callback, in_RDI, (Vector3*)( in_RDI + 0x30 ), 0.0, 0.0);
                        in_RDI[0x3c] = GVar13;
                        if (GVar13 == (GodotBodyPair3D)0x0) {
                           if (( ( *(char*)( *(long*)( in_RDI + 0x48 ) + 0x2ba ) == '\0' ) || ( in_RDI[0x60] == (GodotBodyPair3D)0x0 ) ) && ( ( *(char*)( *(long*)( in_RDI + 0x50 ) + 0x2ba ) == '\0' || ( in_RDI[0x61] == (GodotBodyPair3D)0x0 ) ) )) goto LAB_001055fd;
                           in_RDI[0x3d] = (GodotBodyPair3D)0x1;
                        }

                        uVar5 = 1;
                        goto LAB_001055ff;
                     }

                     LAB_0010576e:lVar6 = *(long*)( lVar8 + -8 );
                     goto LAB_0010572b;
                  }

               }

            }

            lVar6 = 0;
            LAB_0010572b:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar9, lVar6, "p_index", "shapes.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

      }

   }

   lVar6 = 0;
   LAB_001056c0:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar8, lVar6, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair3D::_test_ccd(float, GodotBody3D*, int, Transform3D const&, GodotBody3D*, int,
   Transform3D const&) */undefined8 GodotBodyPair3D::_test_ccd(float param_1, GodotBody3D *param_2, int param_3, Transform3D *param_4, GodotBody3D *param_5, int param_6, Transform3D *param_7) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long *plVar4;
   code *pcVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   float *pfVar10;
   undefined4 in_register_00000034;
   long lVar11;
   float *pfVar12;
   undefined4 in_register_00000084;
   long lVar13;
   long lVar14;
   int iVar15;
   long in_FS_OFFSET;
   byte bVar16;
   float fVar17;
   float fVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   float fVar24;
   float fVar25;
   undefined1 auVar26[16];
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float local_208;
   int local_204;
   float local_200;
   float local_1fc;
   float local_1f8;
   float local_1e4;
   float local_1e0;
   int local_1dc;
   undefined1 local_1d8[4];
   undefined4 local_1d4;
   undefined8 local_1d0;
   float local_1c8;
   undefined8 local_1c0;
   float local_1b8;
   undefined8 local_1b0;
   float local_1a8;
   undefined8 local_1a0;
   float local_198;
   undefined8 local_190;
   float local_188;
   undefined8 local_180;
   float local_178;
   undefined8 local_174;
   undefined4 local_16c;
   float local_168;
   float local_164;
   float local_160;
   float local_15c;
   float local_158;
   float local_154;
   float local_150;
   float local_14c;
   float local_148;
   float local_144;
   float local_140;
   float local_13c;
   undefined8 local_138;
   float local_130;
   float fStack_12c;
   float local_128;
   float fStack_124;
   float local_120;
   float local_11c;
   float local_118;
   undefined8 local_114;
   float local_10c;
   undefined8 local_108;
   float local_100[48];
   long local_40;
   lVar13 = CONCAT44(in_register_00000084, param_6);
   lVar11 = CONCAT44(in_register_00000034, param_3);
   bVar16 = 0;
   auVar23._4_4_ = param_1;
   auVar23._0_4_ = param_1;
   lVar8 = (long)(int)param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)( lVar11 + 0x38 );
   if ((int)param_4 < 0) {
      if (lVar9 != 0) {
         lVar14 = *(long*)( lVar9 + -8 );
         goto LAB_00106055;
      }

   }
 else if (lVar9 != 0) {
      lVar14 = *(long*)( lVar9 + -8 );
      if (lVar14 <= lVar8) goto LAB_00106055;
      local_1a0 = *(undefined8*)( lVar11 + 0xd8 );
      auVar19._0_4_ = (float)local_1a0 * param_1;
      auVar19._4_4_ = (float)( (ulong)local_1a0 >> 0x20 ) * param_1;
      auVar19._8_8_ = 0;
      plVar4 = *(long**)( lVar9 + 0x80 + lVar8 * 0x90 );
      local_198 = *(float*)( lVar11 + 0xe0 );
      fVar29 = local_198 * param_1;
      fVar17 = SQRT(auVar19._0_4_ * auVar19._0_4_ + auVar19._4_4_ * auVar19._4_4_ + fVar29 * fVar29);
      if (_LC6 <= (double)fVar17) {
         auVar20._4_4_ = fVar17;
         auVar20._0_4_ = fVar17;
         auVar20._8_8_ = _LC21;
         local_1e4 = 0.0;
         auVar20 = divps(auVar19, auVar20);
         local_1e0 = 0.0;
         local_1d0 = auVar20._0_8_;
         local_1c8 = fVar29 / fVar17;
         ( **(code**)( *plVar4 + 0x18 ) )(plVar4, &local_1d0, param_5, &local_1e4, &local_1e0);
         if ((double)( local_1e0 - local_1e4 ) * __LC33 < (double)fVar17) {
            local_188 = *(float*)( lVar13 + 0xe0 );
            pfVar10 = (float*)&local_108;
            local_190 = *(undefined8*)( lVar13 + 0xd8 );
            local_100[0] = param_1 * local_188;
            local_108 = CONCAT44((float)( (ulong)local_190 >> 0x20 ) * param_1, (float)local_190 * param_1);
            Transform3D::translated((Vector3*)&local_168);
            fVar17 = *(float*)( param_5 + 8 );
            fVar24 = *(float*)( param_5 + 0x14 );
            pfVar12 = pfVar10;
            for (lVar9 = 0x18; lVar9 != 0; lVar9 = lVar9 + -1) {
               pfVar12[0] = 0.0;
               pfVar12[1] = 0.0;
               pfVar12 = pfVar12 + (ulong)bVar16 * -4 + 2;
            }

            fVar27 = (float)local_1d0;
            fVar18 = (float)( (ulong)local_1d0 >> 0x20 );
            fVar24 = fVar17 * fVar27 + fVar24 * fVar18 + *(float*)( param_5 + 0x20 ) * local_1c8;
            auVar21._0_4_ = (float)*(undefined8*)( param_5 + 0xc ) * fVar18 + (float)*(undefined8*)param_5 * fVar27 + (float)*(undefined8*)( param_5 + 0x18 ) * local_1c8;
            auVar21._4_4_ = (float)( ( ulong ) * (undefined8*)( param_5 + 0xc ) >> 0x20 ) * fVar18 + (float)( ( ulong ) * (undefined8*)param_5 >> 0x20 ) * fVar27 + (float)( ( ulong ) * (undefined8*)( param_5 + 0x18 ) >> 0x20 ) * local_1c8;
            auVar21._8_8_ = 0;
            fVar17 = auVar21._0_4_ * auVar21._0_4_ + auVar21._4_4_ * auVar21._4_4_ + fVar24 * fVar24;
            local_130 = 0.0;
            local_138 = 0;
            if (fVar17 != 0.0) {
               fVar17 = SQRT(fVar17);
               auVar26._4_4_ = fVar17;
               auVar26._0_4_ = fVar17;
               auVar26._8_8_ = _LC21;
               auVar20 = divps(auVar21, auVar26);
               local_130 = fVar24 / fVar17;
               local_138 = auVar20._0_8_;
            }

            ( **(code**)( *plVar4 + 0x28 ) )(plVar4, &local_138, 0x10, pfVar10, &local_1dc, local_1d8);
            if (0 < local_1dc) {
               lVar8 = (long)(int)param_7;
               local_200 = 0.0;
               local_1f8 = 0.0;
               iVar15 = 0;
               local_208 = _LC32;
               local_1fc = 0.0;
               local_204 = -1;
               do {
                  fVar17 = pfVar10[2];
                  fVar30 = (float)*(undefined8*)pfVar10;
                  fVar25 = (float)( ( ulong ) * (undefined8*)pfVar10 >> 0x20 );
                  fVar24 = *(float*)( param_5 + 0x10 );
                  uVar7 = *(undefined8*)( param_5 + 8 );
                  uVar1 = *(undefined8*)param_5;
                  fVar27 = *(float*)( param_5 + 4 );
                  fVar18 = *(float*)( param_5 + 0x18 ) * fVar30 + *(float*)( param_5 + 0x1c ) * fVar25 + *(float*)( param_5 + 0x20 ) * fVar17 + *(float*)( param_5 + 0x2c );
                  uVar2 = *(undefined8*)( param_5 + 0x10 );
                  fVar28 = fVar29 + fVar18;
                  uVar3 = *(undefined8*)( param_5 + 0x24 );
                  pfVar10[2] = fVar18;
                  *(ulong*)pfVar10 = CONCAT44(fVar24 * fVar25 + fVar30 * (float)( (ulong)uVar7 >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ) * fVar17 + (float)( (ulong)uVar3 >> 0x20 ), fVar27 * fVar25 + fVar30 * (float)uVar1 + (float)uVar7 * fVar17 + (float)uVar3);
                  fVar17 = *pfVar10;
                  fVar24 = pfVar10[1];
                  fVar27 = auVar19._0_4_ + fVar17;
                  fVar30 = auVar19._4_4_ + fVar24;
                  Transform3D::affine_inverse();
                  local_180 = 0;
                  local_178 = 0.0;
                  local_174 = 0;
                  fVar18 = fVar18 - _LC34 * fVar29;
                  fVar24 = fVar24 - _LC34 * auVar19._4_4_;
                  fVar17 = fVar17 - _LC34 * auVar19._0_4_;
                  fVar25 = (float)( (ulong)local_114 >> 0x20 );
                  local_1b0 = CONCAT44(fStack_12c * fVar27 + local_128 * fVar30 + fStack_124 * fVar28 + fVar25, (float)local_138 * fVar27 + local_138._4_4_ * fVar30 + local_130 * fVar28 + (float)local_114);
                  local_1c0 = CONCAT44(fVar17 * fStack_12c + fVar24 * local_128 + fVar18 * fStack_124 + fVar25, fVar17 * (float)local_138 + fVar24 * local_138._4_4_ + fVar18 * local_130 + (float)local_114);
                  local_1b8 = fVar24 * local_11c + fVar17 * local_120 + fVar18 * local_118 + local_10c;
                  local_1a8 = fVar27 * local_120 + fVar30 * local_11c + fVar28 * local_118 + local_10c;
                  local_16c = 0;
                  local_1d4 = 0xffffffff;
                  if ((int)param_7 < 0) {
                     lVar9 = *(long*)( lVar13 + 0x38 );
                     if (lVar9 == 0) goto LAB_00106163;
                     LAB_00106051:lVar14 = *(long*)( lVar9 + -8 );
                     goto LAB_00106055;
                  }

                  lVar9 = *(long*)( lVar13 + 0x38 );
                  if (lVar9 == 0) goto LAB_00106163;
                  if (*(long*)( lVar9 + -8 ) <= lVar8) goto LAB_00106051;
                  plVar4 = *(long**)( lVar9 + 0x80 + lVar8 * 0x90 );
                  cVar6 = ( **(code**)( *plVar4 + 0x38 ) )(plVar4, &local_1c0, &local_1b0, &local_180, &local_174, &local_1d4, 1);
                  if (cVar6 != '\0') {
                     fVar17 = SQRT(( (float)local_180 - (float)local_1c0 ) * ( (float)local_180 - (float)local_1c0 ) + ( local_180._4_4_ - local_1c0._4_4_ ) * ( local_180._4_4_ - local_1c0._4_4_ ) + ( local_178 - local_1b8 ) * ( local_178 - local_1b8 ));
                     if (fVar17 < local_208) {
                        local_208 = fVar17;
                        local_204 = iVar15;
                        local_200 = local_178;
                        local_1fc = local_180._4_4_;
                        local_1f8 = (float)local_180;
                     }

                  }

                  iVar15 = iVar15 + 1;
                  pfVar10 = pfVar10 + 3;
               }
 while ( iVar15 < local_1dc );
               lVar9 = (long)local_204;
               if (local_204 != -1) {
                  fVar29 = local_100[lVar9 * 3] - ( local_150 * local_1f8 + local_14c * local_1fc + local_148 * local_200 + local_13c );
                  uVar7 = 1;
                  fVar24 = local_100[lVar9 * 3 + -1] - ( local_15c * local_1f8 + local_158 * local_1fc + local_154 * local_200 + local_140 );
                  fVar17 = local_100[lVar9 * 3 + -2] - ( local_200 * local_160 + local_1f8 * local_168 + local_1fc * local_164 + local_144 );
                  fVar17 = (float)( (double)SQRT(fVar29 * fVar29 + fVar17 * fVar17 + fVar24 * fVar24) + (double)( local_1e0 - local_1e4 ) * __LC35 );
                  auVar22._0_4_ = fVar17 * (float)local_1d0;
                  auVar22._4_4_ = fVar17 * (float)( (ulong)local_1d0 >> 0x20 );
                  auVar22._8_8_ = 0;
                  auVar23._8_8_ = _LC21;
                  auVar23 = divps(auVar22, auVar23);
                  *(float*)( lVar11 + 0xe0 ) = ( local_1c8 * fVar17 ) / param_1;
                  *(long*)( lVar11 + 0xd8 ) = auVar23._0_8_;
                  goto LAB_0010592b;
               }

            }

         }

      }

      uVar7 = 0;
      LAB_0010592b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar7;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   LAB_00106163:lVar14 = 0;
   LAB_00106055:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar8, lVar14, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodyPair3D::pre_solve(float) */GodotBodyPair3D GodotBodyPair3D::pre_solve(GodotBodyPair3D *this, float param_1) {
   undefined8 *puVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   GodotBodyPair3D GVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   long lVar10;
   undefined8 uVar11;
   long lVar12;
   code *pcVar13;
   undefined8 uVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   Transform3D *pTVar22;
   long lVar23;
   float *pfVar24;
   Transform3D *pTVar25;
   GodotBodyPair3D *pGVar26;
   long in_FS_OFFSET;
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
   float fVar37;
   float fVar38;
   float fVar39;
   uint uVar40;
   uint uVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   uint uVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar50;
   undefined1 auVar49[16];
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   float local_238;
   float local_1f4;
   float local_1f0;
   GodotBodyPair3D local_17a;
   float local_15c;
   float fStack_158;
   float local_150;
   float fStack_14c;
   float local_144;
   float fStack_140;
   float local_138;
   float fStack_134;
   float local_12c;
   float fStack_128;
   float local_120;
   float fStack_11c;
   float local_114;
   float fStack_110;
   undefined8 local_108;
   float local_100;
   undefined8 local_d8;
   float local_d0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined4 local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   Transform3D local_78[16];
   undefined1 local_68[16];
   undefined4 local_58;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GVar7 = this[0x3c];
   if (GVar7 == (GodotBodyPair3D)0x0) {
      if (this[0x3d] != (GodotBodyPair3D)0x0) {
         lVar12 = *(long*)( this + 0x48 );
         local_78._0_12_ = ZEXT812(0);
         Transform3D::Transform3D((Transform3D*)&local_108, (Basis*)( lVar12 + 0x48 ), (Vector3*)local_78);
         lVar17 = (long)*(int*)( this + 0x58 );
         lVar15 = *(long*)( this + 0x48 );
         if (*(int*)( this + 0x58 ) < 0) {
            LAB_00107650:if (*(long*)( lVar15 + 0x38 ) != 0) {
               lVar15 = *(long*)( *(long*)( lVar15 + 0x38 ) + -8 );
               goto LAB_00107661;
            }

         }
 else if (*(long*)( lVar15 + 0x38 ) != 0) {
            lVar15 = *(long*)( *(long*)( lVar15 + 0x38 ) + -8 );
            if (lVar15 <= lVar17) goto LAB_00107661;
            Transform3D::operator *((Transform3D*)&local_d8, (Transform3D*)&local_108);
            lVar15 = *(long*)( this + 0x50 );
            lVar17 = (long)*(int*)( this + 0x5c );
            local_a8 = *(undefined8*)( lVar15 + 0x48 );
            uStack_a0 = *(undefined8*)( lVar15 + 0x50 );
            local_98 = *(undefined8*)( lVar15 + 0x58 );
            uStack_90 = *(undefined8*)( lVar15 + 0x60 );
            local_88 = ( undefined4 ) * (undefined8*)( lVar15 + 0x68 );
            fStack_84 = (float)( ( ulong ) * (undefined8*)( lVar15 + 0x68 ) >> 0x20 );
            fStack_80 = (float)*(undefined8*)( lVar15 + 0x70 );
            fStack_7c = (float)( ( ulong ) * (undefined8*)( lVar15 + 0x70 ) >> 0x20 );
            fStack_84 = fStack_84 - (float)*(undefined8*)( lVar12 + 0x6c );
            fStack_80 = fStack_80 - (float)( ( ulong ) * (undefined8*)( lVar12 + 0x6c ) >> 0x20 );
            fStack_7c = fStack_7c - *(float*)( lVar12 + 0x74 );
            if (*(int*)( this + 0x5c ) < 0) goto LAB_00107650;
            if (*(long*)( lVar15 + 0x38 ) != 0) {
               lVar15 = *(long*)( *(long*)( lVar15 + 0x38 ) + -8 );
               if (lVar15 <= lVar17) goto LAB_00107661;
               Transform3D::operator *(local_78, (Transform3D*)&local_a8);
               if (( *(char*)( *(long*)( this + 0x48 ) + 0x2ba ) != '\0' ) && ( this[0x60] != (GodotBodyPair3D)0x0 )) {
                  _test_ccd(param_1, (GodotBody3D*)this, (int)*(long*)( this + 0x48 ), (Transform3D*)( ulong ) * (uint*)( this + 0x58 ), (GodotBody3D*)&local_d8, (int)*(undefined8*)( this + 0x50 ), (Transform3D*)( ulong ) * (uint*)( this + 0x5c ));
               }

               if (( *(char*)( *(long*)( this + 0x50 ) + 0x2ba ) != '\0' ) && ( this[0x61] != (GodotBodyPair3D)0x0 )) {
                  _test_ccd(param_1, (GodotBody3D*)this, (int)*(long*)( this + 0x50 ), (Transform3D*)( ulong ) * (uint*)( this + 0x5c ), (GodotBody3D*)local_78, (int)*(undefined8*)( this + 0x48 ), (Transform3D*)( ulong ) * (uint*)( this + 0x58 ));
               }

               goto LAB_001061ca;
            }

         }

         lVar15 = 0;
         LAB_00107661:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar17, lVar15, "p_index", "shapes.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      LAB_001061ca:local_17a = (GodotBodyPair3D)0x0;
      LAB_001061d2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return local_17a;
   }

   lVar12 = *(long*)( this + 0x48 );
   lVar16 = (long)*(int*)( this + 0x58 );
   fVar3 = *(float*)( *(long*)( this + 0x40 ) + 0xdc );
   lVar15 = *(long*)( lVar12 + 0x38 );
   lVar17 = lVar16;
   if (*(int*)( this + 0x58 ) < 0) {
      LAB_00107600:if (lVar15 != 0) {
         lVar23 = *(long*)( lVar15 + -8 );
         goto LAB_0010760d;
      }

   }
 else if (lVar15 != 0) {
      lVar23 = *(long*)( lVar15 + -8 );
      if (lVar23 <= lVar16) goto LAB_0010760d;
      lVar10 = *(long*)( this + 0x50 );
      lVar17 = (long)*(int*)( this + 0x5c );
      lVar2 = lVar15 + 0x80;
      lVar15 = *(long*)( lVar10 + 0x38 );
      if (*(int*)( this + 0x5c ) < 0) goto LAB_00107600;
      if (lVar15 == 0) goto LAB_00107978;
      lVar23 = *(long*)( lVar15 + -8 );
      if (lVar23 <= lVar17) goto LAB_0010760d;
      fVar32 = *(float*)( *(long*)( lVar2 + lVar16 * 0x90 ) + 0x2c );
      fVar42 = *(float*)( *(long*)( lVar15 + 0x80 + lVar17 * 0x90 ) + 0x2c );
      if (fVar32 == 0.0) {
         fVar32 = fVar42;
         if (fVar42 == 0.0) {
            fVar32 = _LC36;
         }

      }
 else if (fVar42 != 0.0) {
         fVar32 = ( fVar42 + fVar32 ) * __LC37;
      }

      local_58 = 0;
      fVar42 = (float)_LC21 / param_1;
      for (int i = 0; i < 16; i++) {
         local_78[i] = (Transform3D)0;
      }

      local_68 = (undefined1[16])0x0;
      if (this[0x60] == (GodotBodyPair3D)0x0) {
         if (this[0x61] == (GodotBodyPair3D)0x0) {
            pTVar22 = local_78;
            local_1f0 = 0.0;
            local_1f4 = 0.0;
            pTVar25 = pTVar22;
         }
 else {
            local_1f0 = 0.0;
            pTVar22 = local_78;
            LAB_0010631f:local_1f4 = *(float*)( lVar10 + 0x170 );
            pTVar25 = (Transform3D*)( lVar10 + 0x1b0 );
         }

      }
 else {
         local_1f0 = *(float*)( lVar12 + 0x170 );
         pTVar22 = (Transform3D*)( lVar12 + 0x1b0 );
         if (this[0x61] != (GodotBodyPair3D)0x0) goto LAB_0010631f;
         local_1f4 = 0.0;
         pTVar25 = local_78;
      }

      if (0 < *(int*)( this + 0x290 )) {
         fVar32 = (float)( (uint)fVar32 ^ __LC4 );
         pGVar26 = this + 0x7c;
         iVar21 = 0;
         local_17a = (GodotBodyPair3D)0x0;
         do {
            pGVar26[0x60] = (GodotBodyPair3D)0x0;
            fVar29 = (float)*(undefined8*)( pGVar26 + 0x18 );
            fVar27 = (float)( ( ulong ) * (undefined8*)( pGVar26 + 0x18 ) >> 0x20 );
            fVar46 = *(float*)( pGVar26 + 0x14 ) * *(float*)( lVar12 + 0x60 ) + *(float*)( lVar12 + 100 ) * fVar29 + *(float*)( lVar12 + 0x68 ) * fVar27;
            fVar28 = (float)( ( ulong ) * (undefined8*)( pGVar26 + 0x10 ) >> 0x20 );
            fVar34 = (float)*(undefined8*)( lVar12 + 0x48 ) * fVar28 + *(float*)( lVar12 + 0x4c ) * fVar29 + (float)*(undefined8*)( lVar12 + 0x50 ) * fVar27;
            fVar36 = (float)( ( ulong ) * (undefined8*)( lVar12 + 0x50 ) >> 0x20 ) * fVar28 + *(float*)( lVar12 + 0x58 ) * fVar29 + (float)( ( ulong ) * (undefined8*)( lVar12 + 0x58 ) >> 0x20 ) * fVar27;
            fVar31 = (float)*(undefined8*)( pGVar26 + 0x20 );
            fVar44 = (float)( ( ulong ) * (undefined8*)( pGVar26 + 0x20 ) >> 0x20 );
            fVar29 = *(float*)( pGVar26 + 0x28 );
            fVar27 = *(float*)( lVar10 + 0x60 ) * fVar31 + fVar44 * *(float*)( lVar10 + 100 ) + *(float*)( lVar10 + 0x68 ) * fVar29 + *(float*)( this + 0x6c );
            fVar28 = (float)*(undefined8*)( lVar10 + 0x48 ) * fVar31 + fVar44 * *(float*)( lVar10 + 0x4c ) + (float)*(undefined8*)( lVar10 + 0x50 ) * fVar29 + (float)*(undefined8*)( this + 100 );
            fVar31 = (float)( ( ulong ) * (undefined8*)( lVar10 + 0x50 ) >> 0x20 ) * fVar31 + fVar44 * *(float*)( lVar10 + 0x58 ) + (float)( ( ulong ) * (undefined8*)( lVar10 + 0x58 ) >> 0x20 ) * fVar29 + (float)( ( ulong ) * (undefined8*)( this + 100 ) >> 0x20 );
            fVar29 = ( fVar34 - fVar28 ) * *(float*)pGVar26 + ( fVar36 - fVar31 ) * *(float*)( pGVar26 + 4 ) + ( fVar46 - fVar27 ) * *(float*)( pGVar26 + 8 );
            if (0.0 < fVar29) {
               lVar15 = *(long*)( this + 0x40 );
               if (*(long*)( lVar15 + 0x6118 ) != 0) {
                  fVar44 = *(float*)( lVar12 + 0x74 );
                  lVar16 = (long)*(int*)( lVar15 + 0x6120 );
                  lVar17 = *(long*)( *(long*)( lVar15 + 0x6118 ) + -8 );
                  uVar5 = *(undefined8*)( lVar12 + 0x6c );
                  if (lVar16 < lVar17) {
                     *(int*)( lVar15 + 0x6120 ) = *(int*)( lVar15 + 0x6120 ) + 1;
                     if (lVar16 < 0) {
                        LAB_001078c5:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar16, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar13 = (code*)invalidInstructionException();
                        ( *pcVar13 )();
                     }

                     CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( lVar15 + 0x6118 ));
                     lVar23 = *(long*)( this + 0x40 );
                     puVar1 = (undefined8*)( *(long*)( lVar15 + 0x6118 ) + lVar16 * 0xc );
                     *puVar1 = CONCAT44((float)( (ulong)uVar5 >> 0x20 ) + fVar36, (float)uVar5 + fVar34);
                     *(float*)( puVar1 + 1 ) = fVar44 + fVar46;
                     uVar5 = *(undefined8*)( lVar12 + 0x6c );
                     iVar20 = *(int*)( lVar23 + 0x6120 );
                     lVar16 = (long)iVar20;
                     fVar44 = *(float*)( lVar12 + 0x74 );
                     if (*(long*)( lVar23 + 0x6118 ) == 0) {
                        if (lVar16 < 0) {
                           lVar17 = 0;
                           *(int*)( lVar23 + 0x6120 ) = iVar20 + 1;
                           goto LAB_001078c5;
                        }

                     }
 else {
                        lVar17 = *(long*)( *(long*)( lVar23 + 0x6118 ) + -8 );
                        if (lVar16 < lVar17) {
                           *(int*)( lVar23 + 0x6120 ) = iVar20 + 1;
                           if (lVar16 < 0) goto LAB_001078c5;
                           CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( lVar23 + 0x6118 ));
                           puVar1 = (undefined8*)( *(long*)( lVar23 + 0x6118 ) + lVar16 * 0xc );
                           *puVar1 = CONCAT44((float)( (ulong)uVar5 >> 0x20 ) + fVar31, (float)uVar5 + fVar28);
                           *(float*)( puVar1 + 1 ) = fVar27 + fVar44;
                        }

                     }

                  }

               }

               lVar15 = *(long*)( this + 0x48 );
               fVar44 = *(float*)( pGVar26 + 4 );
               lVar17 = *(long*)( this + 0x50 );
               fVar51 = fVar46 - *(float*)( lVar15 + 0x200 );
               local_238 = (float)*(undefined8*)pGVar26;
               fVar39 = *(float*)( lVar17 + 0x200 );
               *(ulong*)( pGVar26 + 100 ) = CONCAT44(fVar36 - (float)( ( ulong ) * (undefined8*)( lVar15 + 0x1f8 ) >> 0x20 ), fVar34 - (float)*(undefined8*)( lVar15 + 0x1f8 ));
               fVar52 = *(float*)( pGVar26 + 100 );
               uVar5 = *(undefined8*)( lVar17 + 0x1f8 );
               *(float*)( pGVar26 + 0x6c ) = fVar51;
               fVar4 = *(float*)( pGVar26 + 0x68 );
               fVar50 = *(float*)( pGVar26 + 8 );
               uVar6 = *(undefined8*)( this + 100 );
               fVar43 = ( fVar27 - fVar39 ) - *(float*)( this + 0x6c );
               *(float*)( pGVar26 + 0x78 ) = fVar43;
               *(ulong*)( pGVar26 + 0x70 ) = CONCAT44(( fVar31 - (float)( (ulong)uVar5 >> 0x20 ) ) - (float)( (ulong)uVar6 >> 0x20 ), ( fVar28 - (float)uVar5 ) - (float)uVar6);
               fVar30 = fVar52 * fVar44 - fVar4 * local_238;
               fVar33 = fVar51 * local_238 - fVar52 * fVar50;
               fVar37 = fVar4 * fVar50 - fVar44 * fVar51;
               fVar35 = *(float*)( pTVar22 + 0x1c ) * fVar33 + *(float*)( pTVar22 + 0x18 ) * fVar37 + *(float*)( pTVar22 + 0x20 ) * fVar30;
               fVar39 = *(float*)( pGVar26 + 0x74 );
               fVar47 = *(float*)( pTVar22 + 0x10 ) * fVar33 + *(float*)( pTVar22 + 0xc ) * fVar37 + *(float*)( pTVar22 + 0x14 ) * fVar30;
               fVar54 = *(float*)( pGVar26 + 0x70 );
               fVar33 = fVar33 * *(float*)( pTVar22 + 4 ) + fVar37 * *(float*)pTVar22 + fVar30 * *(float*)( pTVar22 + 8 );
               fVar53 = fVar54 * fVar44 - fVar39 * local_238;
               fVar30 = fVar43 * local_238 - fVar54 * fVar50;
               fVar37 = fVar39 * fVar50 - fVar44 * fVar43;
               fVar38 = *(float*)( pTVar25 + 0x1c ) * fVar30 + *(float*)( pTVar25 + 0x18 ) * fVar37 + *(float*)( pTVar25 + 0x20 ) * fVar53;
               fVar48 = *(float*)( pTVar25 + 0x10 ) * fVar30 + *(float*)( pTVar25 + 0xc ) * fVar37 + *(float*)( pTVar25 + 0x14 ) * fVar53;
               fVar30 = fVar30 * *(float*)( pTVar25 + 4 ) + *(float*)pTVar25 * fVar37 + fVar53 * *(float*)( pTVar25 + 8 );
               fVar37 = fVar3 - fVar29;
               *(float*)( pGVar26 + 0x50 ) = (float)_LC21 / ( ( fVar47 * fVar51 - fVar35 * fVar4 ) * local_238 + ( fVar35 * fVar52 - fVar33 * fVar51 ) * fVar44 + ( fVar33 * fVar4 - fVar47 * fVar52 ) * fVar50 + ( fVar30 * fVar39 - fVar48 * fVar54 ) * fVar50 + ( fVar48 * fVar43 - fVar38 * fVar39 ) * local_238 + ( fVar38 * fVar54 - fVar30 * fVar43 ) * fVar44 + local_1f4 + local_1f0 );
               if (0.0 < fVar37) {
                  fVar37 = 0.0;
               }

               lVar16 = *(long*)( lVar15 + 0x338 );
               *(float*)( pGVar26 + 0x5c ) = fVar29;
               fVar35 = *(float*)( pGVar26 + 0x38 ) * fVar50 + *(float*)( pGVar26 + 0x44 );
               *(float*)( pGVar26 + 0x54 ) = fVar32 * fVar42 * fVar37;
               fVar33 = (float)( ( ulong ) * (undefined8*)( pGVar26 + 0x34 ) >> 0x20 );
               fVar30 = fVar33 * local_238 + (float)*(undefined8*)( pGVar26 + 0x3c );
               fVar33 = fVar33 * (float)( ( ulong ) * (undefined8*)pGVar26 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( pGVar26 + 0x3c ) >> 0x20 );
               *(ulong*)( pGVar26 + 0x2c ) = CONCAT44((float)( ( ulong ) * (undefined8*)( pGVar26 + 0x2c ) >> 0x20 ) - fVar33, (float)*(undefined8*)( pGVar26 + 0x2c ) - fVar30);
               *(float*)( pGVar26 + 0x34 ) = *(float*)( pGVar26 + 0x34 ) - fVar35;
               if (( lVar16 != 0 ) || ( *(long*)( lVar17 + 0x338 ) != 0 )) {
                  fStack_140 = (float)( ( ulong ) * (undefined8*)( lVar17 + 0xe4 ) >> 0x20 );
                  local_144 = (float)*(undefined8*)( lVar17 + 0xe4 );
                  local_138 = (float)*(undefined8*)( lVar17 + 0xd8 );
                  fStack_134 = (float)( ( ulong ) * (undefined8*)( lVar17 + 0xd8 ) >> 0x20 );
                  fStack_134 = ( fVar54 * *(float*)( lVar17 + 0xec ) - local_144 * fVar43 ) + fStack_134;
                  fVar54 = ( local_144 * fVar39 - fStack_140 * fVar54 ) + *(float*)( lVar17 + 0xe0 );
                  local_138 = local_138 + ( fStack_140 * fVar43 - *(float*)( lVar17 + 0xec ) * fVar39 );
                  fStack_158 = (float)( ( ulong ) * (undefined8*)( lVar15 + 0xe4 ) >> 0x20 );
                  local_15c = (float)*(undefined8*)( lVar15 + 0xe4 );
                  fStack_14c = (float)( ( ulong ) * (undefined8*)( lVar15 + 0xd8 ) >> 0x20 );
                  fStack_14c = ( fVar52 * *(float*)( lVar15 + 0xec ) - local_15c * fVar51 ) + fStack_14c;
                  fVar52 = ( local_15c * fVar4 - fStack_158 * fVar52 ) + *(float*)( lVar15 + 0xe0 );
                  local_150 = (float)*(undefined8*)( lVar15 + 0xd8 );
                  local_150 = ( fStack_158 * fVar51 - *(float*)( lVar15 + 0xec ) * fVar4 ) + local_150;
                  if (( lVar16 != 0 ) && ( iVar20 = iVar20 != 0 )) {
                     uVar6 = *(undefined8*)( lVar17 + 0x10 );
                     uVar11 = *(undefined8*)( lVar17 + 0x18 );
                     uVar8 = *(undefined4*)( this + 0x5c );
                     fVar4 = *(float*)( lVar12 + 0x74 );
                     uVar5 = *(undefined8*)( lVar12 + 0x6c );
                     uVar9 = *(undefined4*)( this + 0x58 );
                     CowData<GodotBody3D::Contact>::_copy_on_write((CowData<GodotBody3D::Contact>*)( lVar15 + 0x338 ));
                     iVar18 = *(int*)( lVar15 + 0x340 );
                     lVar16 = *(long*)( lVar15 + 0x338 );
                     if (iVar18 < iVar20) {
                        *(int*)( lVar15 + 0x340 ) = iVar18 + 1;
                        LAB_0010770a:fVar37 = (float)uVar5;
                        fVar39 = (float)( (ulong)uVar5 >> 0x20 );
                        uVar41 = (uint)local_238 ^ __LC4;
                        auVar49._0_4_ = (uint)fVar44 ^ __LC4;
                        puVar1 = (undefined8*)( lVar16 + (long)iVar18 * 0x68 );
                        uVar40 = (uint)fVar50 ^ __LC4;
                        *(float*)( puVar1 + 10 ) = local_138;
                        *(undefined4*)( puVar1 + 5 ) = uVar9;
                        auVar49._4_4_ = uVar40;
                        *(float*)( (long)puVar1 + 0x34 ) = fVar4 + fVar27;
                        *puVar1 = CONCAT44(fVar39 + fVar36, fVar34 + fVar37);
                        puVar1[1] = CONCAT44(uVar41, fVar46 + fVar4);
                        auVar49._12_4_ = fStack_14c;
                        auVar49._8_4_ = local_150;
                        *(float*)( (long)puVar1 + 0x54 ) = fStack_134;
                        *(float*)( puVar1 + 0xb ) = fVar54;
                        *(undefined1(*) [16])( puVar1 + 2 ) = auVar49;
                        puVar1[4] = CONCAT44(fVar29, fVar52);
                        *(undefined4*)( puVar1 + 7 ) = uVar8;
                        puVar1[8] = uVar11;
                        puVar1[9] = uVar6;
                        *(ulong*)( (long)puVar1 + 0x2c ) = CONCAT44(fVar39 + fVar31, fVar37 + fVar28);
                        *(undefined8*)( (long)puVar1 + 0x5c ) = *(undefined8*)( pGVar26 + 0x2c );
                        *(float*)( (long)puVar1 + 100 ) = *(float*)( pGVar26 + 0x34 );
                        lVar17 = *(long*)( this + 0x50 );
                     }
 else {
                        lVar17 = *(long*)( this + 0x50 );
                        if (0 < iVar20) {
                           pfVar24 = (float*)( lVar16 + 0x24 );
                           iVar19 = 0;
                           fVar39 = *(float*)( lVar16 + 0x24 );
                           while (fVar37 = fVar39,iVar18 = iVar19,iVar19 = iVar18 + 1,iVar20 != iVar19) {
                              while (true) {
                                 pfVar24 = pfVar24 + 0x1a;
                                 fVar39 = *pfVar24;
                                 if (*pfVar24 < fVar37) break;
                                 iVar19 = iVar19 + 1;
                                 if (iVar20 == iVar19) goto LAB_00106cf6;
                              }
;
                           }
;
                           LAB_00106cf6:if (fVar37 < fVar29) goto LAB_0010770a;
                        }

                     }

                  }

                  if (*(long*)( lVar17 + 0x338 ) != 0) {
                     uVar5 = *(undefined8*)( pGVar26 + 0x30 );
                     fVar44 = *(float*)( pGVar26 + 0x2c );
                     uVar8 = *(undefined4*)( this + 0x58 );
                     uVar11 = *(undefined8*)( *(long*)( this + 0x48 ) + 0x10 );
                     uVar14 = *(undefined8*)( *(long*)( this + 0x48 ) + 0x18 );
                     fVar4 = *(float*)( lVar12 + 0x74 );
                     uVar6 = *(undefined8*)( lVar12 + 0x6c );
                     uVar9 = *(undefined4*)( this + 0x5c );
                     iVar20 = (int)*(undefined8*)( *(long*)( lVar17 + 0x338 ) + -8 );
                     if (iVar20 != 0) {
                        CowData<GodotBody3D::Contact>::_copy_on_write((CowData<GodotBody3D::Contact>*)( lVar17 + 0x338 ));
                        iVar18 = *(int*)( lVar17 + 0x340 );
                        lVar15 = *(long*)( lVar17 + 0x338 );
                        if (iVar18 < iVar20) {
                           *(int*)( lVar17 + 0x340 ) = iVar18 + 1;
                           LAB_001077fb:uVar45 = (uint)fVar44 ^ __LC4;
                           fVar44 = (float)uVar6;
                           fVar50 = (float)( (ulong)uVar6 >> 0x20 );
                           puVar1 = (undefined8*)( lVar15 + (long)iVar18 * 0x68 );
                           *puVar1 = CONCAT44(fVar31 + fVar50, fVar28 + fVar44);
                           uVar40 = (uint)uVar5 ^ (uint)_LC3;
                           uVar41 = ( uint )((ulong)uVar5 >> 0x20) ^ _LC3._4_4_;
                           *(float*)( puVar1 + 1 ) = fVar27 + fVar4;
                           *(undefined8*)( (long)puVar1 + 0xc ) = *(undefined8*)pGVar26;
                           fVar27 = *(float*)( pGVar26 + 8 );
                           puVar1[3] = CONCAT44(fStack_134, local_138);
                           *(float*)( puVar1 + 4 ) = fVar54;
                           *(float*)( (long)puVar1 + 0x24 ) = fVar29;
                           *(float*)( (long)puVar1 + 0x14 ) = fVar27;
                           *(undefined4*)( puVar1 + 5 ) = uVar9;
                           *(undefined4*)( puVar1 + 7 ) = uVar8;
                           *(float*)( (long)puVar1 + 0x34 ) = fVar4 + fVar46;
                           *(ulong*)( (long)puVar1 + 0x2c ) = CONCAT44(fVar36 + fVar50, fVar34 + fVar44);
                           puVar1[8] = uVar14;
                           puVar1[9] = uVar11;
                           *(float*)( puVar1 + 10 ) = local_150;
                           *(float*)( (long)puVar1 + 0x54 ) = fStack_14c;
                           *(float*)( puVar1 + 0xb ) = fVar52;
                           *(uint*)( (long)puVar1 + 0x5c ) = uVar45;
                           puVar1[0xc] = CONCAT44(uVar41, uVar40);
                        }
 else if (0 < iVar20) {
                           pfVar24 = (float*)( lVar15 + 0x24 );
                           iVar19 = 0;
                           fVar50 = *(float*)( lVar15 + 0x24 );
                           while (fVar39 = fVar50,iVar18 = iVar19,iVar19 = iVar18 + 1,iVar20 != iVar19) {
                              while (true) {
                                 pfVar24 = pfVar24 + 0x1a;
                                 fVar50 = *pfVar24;
                                 if (*pfVar24 < fVar39) break;
                                 iVar19 = iVar19 + 1;
                                 if (iVar20 == iVar19) goto LAB_00106eb0;
                              }
;
                           }
;
                           LAB_00106eb0:if (fVar39 < fVar29) goto LAB_001077fb;
                        }

                     }

                  }

               }

               if (this[0x62] == (GodotBodyPair3D)0x0) {
                  pGVar26[0x60] = (GodotBodyPair3D)0x1;
                  lVar15 = *(long*)( this + 0x48 );
                  if (this[0x60] != (GodotBodyPair3D)0x0) {
                     fVar36 = (float)( (uint)fVar33 ^ __LC4 );
                     fVar27 = (float)( (uint)fVar30 ^ __LC4 );
                     fVar34 = (float)( (uint)fVar35 ^ __LC4 );
                     fStack_128 = (float)( ( ulong ) * (undefined8*)( lVar15 + 0x1f8 ) >> 0x20 );
                     fVar28 = ( fStack_128 + *(float*)( pGVar26 + 0x68 ) ) - *(float*)( lVar15 + 0x1fc );
                     fVar31 = ( *(float*)( pGVar26 + 0x6c ) + *(float*)( lVar15 + 0x200 ) ) - *(float*)( lVar15 + 0x200 );
                     fVar29 = *(float*)( lVar15 + 0x170 );
                     local_12c = (float)*(undefined8*)( lVar15 + 0x1f8 );
                     fVar44 = ( local_12c + *(float*)( pGVar26 + 100 ) ) - *(float*)( lVar15 + 0x1f8 );
                     fVar46 = fVar44 * fVar36 - fVar28 * fVar27;
                     fVar44 = fVar31 * fVar27 - fVar44 * fVar34;
                     fVar28 = fVar28 * fVar34 - fVar31 * fVar36;
                     *(ulong*)( lVar15 + 0xd8 ) = CONCAT44(fVar36 * fVar29 + *(float*)( lVar15 + 0xdc ), fVar27 * fVar29 + *(float*)( lVar15 + 0xd8 ));
                     *(ulong*)( lVar15 + 0xe0 ) = CONCAT44(fVar28 * *(float*)( lVar15 + 0x1b0 ) + fVar44 * *(float*)( lVar15 + 0x1b4 ) + fVar46 * *(float*)( lVar15 + 0x1b8 ) + *(float*)( lVar15 + 0xe4 ), fVar29 * fVar34 + *(float*)( lVar15 + 0xe0 ));
                     *(ulong*)( lVar15 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar15 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar15 + 0x1c8 ) >> 0x20 ) * fVar44 + *(float*)( lVar15 + 0x1c8 ) * fVar28 + *(float*)( lVar15 + 0x1d0 ) * fVar46, (float)*(undefined8*)( lVar15 + 0xe8 ) + (float)*(undefined8*)( lVar15 + 0x1c0 ) * fVar44 + *(float*)( lVar15 + 0x1bc ) * fVar28 + *(float*)( lVar15 + 0x1c4 ) * fVar46);
                  }

                  lVar17 = *(long*)( this + 0x50 );
                  if (this[0x61] != (GodotBodyPair3D)0x0) {
                     fStack_11c = (float)( ( ulong ) * (undefined8*)( lVar17 + 0x1f8 ) >> 0x20 );
                     fVar27 = ( *(float*)( pGVar26 + 0x74 ) + fStack_11c ) - *(float*)( lVar17 + 0x1fc );
                     local_120 = (float)*(undefined8*)( lVar17 + 0x1f8 );
                     fVar31 = ( *(float*)( pGVar26 + 0x70 ) + local_120 ) - *(float*)( lVar17 + 0x1f8 );
                     fVar28 = ( *(float*)( pGVar26 + 0x78 ) + *(float*)( lVar17 + 0x200 ) ) - *(float*)( lVar17 + 0x200 );
                     fVar29 = *(float*)( lVar17 + 0x170 );
                     fVar44 = fVar33 * fVar31 - fVar30 * fVar27;
                     fVar31 = fVar30 * fVar28 - fVar31 * fVar35;
                     fVar27 = fVar27 * fVar35 - fVar28 * fVar33;
                     *(ulong*)( lVar17 + 0xd8 ) = CONCAT44(fVar33 * fVar29 + *(float*)( lVar17 + 0xdc ), fVar30 * fVar29 + *(float*)( lVar17 + 0xd8 ));
                     *(ulong*)( lVar17 + 0xe0 ) = CONCAT44(fVar27 * *(float*)( lVar17 + 0x1b0 ) + fVar31 * *(float*)( lVar17 + 0x1b4 ) + fVar44 * *(float*)( lVar17 + 0x1b8 ) + *(float*)( lVar17 + 0xe4 ), fVar35 * fVar29 + *(float*)( lVar17 + 0xe0 ));
                     *(ulong*)( lVar17 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar17 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar17 + 0x1c8 ) >> 0x20 ) * fVar31 + *(float*)( lVar17 + 0x1c8 ) * fVar27 + *(float*)( lVar17 + 0x1d0 ) * fVar44, (float)*(undefined8*)( lVar17 + 0xe8 ) + (float)*(undefined8*)( lVar17 + 0x1c0 ) * fVar31 + *(float*)( lVar17 + 0x1bc ) * fVar27 + *(float*)( lVar17 + 0x1c4 ) * fVar44);
                  }

                  fVar29 = *(float*)( lVar15 + 0x13c ) + *(float*)( lVar17 + 0x13c );
                  local_17a = GVar7;
                  if (fVar29 < 0.0) {
                     *(float*)( pGVar26 + 0x58 ) = 0.0;
                  }
 else {
                     fVar27 = (float)_LC21;
                     if (( (float)_LC21 < fVar29 ) || ( *(float*)( pGVar26 + 0x58 ) = fVar29 ),fVar27 = fVar29,fVar29 != 0.0) {
                        uVar5 = *(undefined8*)( lVar15 + 0xfc );
                        fVar29 = *(float*)( lVar15 + 0x104 );
                        local_a8._4_4_ = (float)( (ulong)uVar5 >> 0x20 );
                        uStack_a0 = CONCAT44(uStack_a0._4_4_, fVar29);
                        uVar6 = *(undefined8*)( lVar17 + 0xfc );
                        local_d0 = *(float*)( lVar17 + 0x104 );
                        local_d8._4_4_ = (float)( (ulong)uVar6 >> 0x20 );
                        local_a8._0_4_ = (float)uVar5;
                        uVar11 = *(undefined8*)( lVar15 + 0xf0 );
                        local_d8._0_4_ = (float)uVar6;
                        local_100 = *(float*)( lVar15 + 0xf8 );
                        local_114 = (float)*(undefined8*)( lVar17 + 0xf0 );
                        local_108._0_4_ = (float)uVar11;
                        fStack_110 = (float)( ( ulong ) * (undefined8*)( lVar17 + 0xf0 ) >> 0x20 );
                        local_108._4_4_ = (float)( (ulong)uVar11 >> 0x20 );
                        *(float*)( pGVar26 + 0x58 ) = ( ( ( ( ( local_d0 * *(float*)( pGVar26 + 0x70 ) - *(float*)( pGVar26 + 0x78 ) * (float)local_d8 ) + fStack_110 ) - local_108._4_4_ ) - ( fVar29 * *(float*)( pGVar26 + 100 ) - *(float*)( pGVar26 + 0x6c ) * (float)local_a8 ) ) * *(float*)( pGVar26 + 4 ) + ( ( ( ( *(float*)( pGVar26 + 0x78 ) * local_d8._4_4_ - *(float*)( pGVar26 + 0x74 ) * local_d0 ) + local_114 ) - (float)local_108 ) - ( local_a8._4_4_ * *(float*)( pGVar26 + 0x6c ) - *(float*)( pGVar26 + 0x68 ) * fVar29 ) ) * *(float*)pGVar26 + ( ( ( ( *(float*)( pGVar26 + 0x74 ) * (float)local_d8 - *(float*)( pGVar26 + 0x70 ) * local_d8._4_4_ ) + *(float*)( lVar17 + 0xf8 ) ) - local_100 ) - ( (float)local_a8 * *(float*)( pGVar26 + 0x68 ) - local_a8._4_4_ * *(float*)( pGVar26 + 100 ) ) ) * *(float*)( pGVar26 + 8 ) ) * fVar27;
                        local_108 = uVar11;
                        local_d8 = uVar6;
                        local_a8 = uVar5;
                     }

                  }

               }
 else {
                  this[0x3c] = (GodotBodyPair3D)0x0;
               }

            }

            iVar21 = iVar21 + 1;
            pGVar26 = pGVar26 + 0x88;
         }
 while ( iVar21 < *(int*)( this + 0x290 ) );
         goto LAB_001061d2;
      }

      goto LAB_001061ca;
   }

   LAB_00107978:lVar23 = 0;
   LAB_0010760d:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar17, lVar23, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar13 = (code*)invalidInstructionException();
   ( *pcVar13 )();
}
/* combine_bounce(GodotBody3D*, GodotBody3D*) */float combine_bounce(GodotBody3D *param_1, GodotBody3D *param_2) {
   float fVar1;
   float fVar2;
   fVar2 = *(float*)( param_1 + 0x13c ) + *(float*)( param_2 + 0x13c );
   if (0.0 <= fVar2) {
      fVar1 = (float)_LC21;
      if (fVar2 <= (float)_LC21) {
         fVar1 = fVar2;
      }

      return fVar1;
   }

   return 0.0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* combine_friction(GodotBody3D*, GodotBody3D*) */ulong combine_friction(GodotBody3D *param_1, GodotBody3D *param_2) {
   float fVar1;
   fVar1 = *(float*)( param_1 + 0x140 );
   if (*(float*)( param_2 + 0x140 ) <= *(float*)( param_1 + 0x140 )) {
      fVar1 = *(float*)( param_2 + 0x140 );
   }

   if (0.0 <= fVar1) {
      return (ulong)(uint)fVar1;
   }

   return CONCAT44(_UNK_0010a074, (uint)fVar1 ^ __LC4);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodySoftBodyPair3D::contact_added_callback(Vector3 const&, int, Vector3 const&, int, Vector3
   const&) */void GodotBodySoftBodyPair3D::contact_added_callback(GodotBodySoftBodyPair3D *this, Vector3 *param_1, int param_2, Vector3 *param_3, int param_4, Vector3 *param_5) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   float fVar6;
   uint uVar7;
   undefined8 uVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   long lVar15;
   float fVar16;
   undefined4 uStack_148;
   undefined8 uStack_110;
   undefined4 local_108;
   undefined4 uStack_104;
   undefined2 uStack_ea;
   float local_c8;
   float fStack_c4;
   fVar14 = *(float*)param_1;
   fVar10 = *(float*)( param_1 + 4 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar15 = *(long*)( this + 0x48 );
   fVar9 = *(float*)( param_1 + 8 );
   fVar11 = *(float*)( lVar15 + 0x90 ) * fVar14 + *(float*)( lVar15 + 0x94 ) * fVar10 + *(float*)( lVar15 + 0x98 ) * fVar9 + *(float*)( lVar15 + 0xa4 );
   fVar12 = *(float*)( lVar15 + 0x84 ) * fVar14 + *(float*)( lVar15 + 0x88 ) * fVar10 + *(float*)( lVar15 + 0x8c ) * fVar9 + *(float*)( lVar15 + 0xa0 );
   fVar9 = fVar9 * *(float*)( lVar15 + 0x80 );
   fVar10 = *(float*)( lVar15 + 0x9c ) + fVar14 * *(float*)( lVar15 + 0x78 ) + fVar10 * *(float*)( lVar15 + 0x7c ) + fVar9;
   uVar8 = GodotSoftBody3D::get_node_position(( uint ) * (undefined8*)( this + 0x50 ));
   lVar15 = *(long*)param_5;
   local_c8 = (float)uVar8;
   fStack_c4 = (float)( (ulong)uVar8 >> 0x20 );
   fVar6 = (float)( (ulong)lVar15 >> 0x20 );
   fVar13 = (float)*(undefined8*)( param_3 + 4 );
   fVar16 = (float)( ( ulong ) * (undefined8*)( param_3 + 4 ) >> 0x20 );
   local_c8 = *(float*)param_3 - local_c8;
   fVar14 = *(float*)( param_5 + 8 );
   fStack_c4 = fVar13 - fStack_c4;
   fVar9 = fVar16 - fVar9;
   uVar8 = CONCAT44(fVar9, fStack_c4);
   uStack_110 = 0;
   local_108 = 0;
   if (( *(float*)param_1 - *(float*)param_3 ) * *(float*)param_5 + ( *(float*)( param_1 + 4 ) - fVar13 ) * fVar6 + ( *(float*)( param_1 + 8 ) - fVar16 ) * fVar14 < 0.0) {
      fVar14 = (float)( (uint)fVar14 ^ __LC4 );
      lVar15 = CONCAT44((uint)fVar6 ^ _LC3._4_4_, (uint)lVar15 ^ (uint)_LC3);
   }

   uVar7 = *(uint*)( this + 0x60 );
   puVar4 = *(undefined8**)( this + 0x68 );
   uStack_148 = ( undefined4 )((ulong)lVar15 >> 0x20);
   if (uVar7 != 0) {
      puVar3 = puVar4;
      do {
         if (*(int*)( (long)puVar3 + 0x1c ) == param_4) {
            fVar13 = fVar12 - *(float*)( (long)puVar3 + 0x24 );
            fVar6 = *(float*)( *(long*)( this + 0x40 ) + 0xd4 ) * *(float*)( *(long*)( this + 0x40 ) + 0xd4 );
            if (( fVar6 <= ( fVar10 - *(float*)( puVar3 + 4 ) ) * ( fVar10 - *(float*)( puVar3 + 4 ) ) + fVar13 * fVar13 + ( fVar11 - *(float*)( puVar3 + 5 ) ) * ( fVar11 - *(float*)( puVar3 + 5 ) ) ) || ( fVar13 = local_c8 - *(float*)( (long)puVar3 + 0x2c ) ),fStack_c4 = fStack_c4 - *(float*)( puVar3 + 6 ),fVar9 = fVar9 - *(float*)( (long)puVar3 + 0x34 ),fVar6 <= fVar13 * fVar13 + fStack_c4 * fStack_c4 + fVar9 * fVar9) {
               uVar5 = 0;
               uVar7 = 0;
            }
 else {
               uStack_110 = puVar3[9];
               uVar7 = *(uint*)( (long)puVar3 + 0x44 );
               uVar5 = *(ulong*)( (long)puVar3 + 0x54 );
               local_108 = *(undefined4*)( puVar3 + 10 );
            }

            *puVar3 = 0;
            puVar3[1] = lVar15 << 0x20;
            uStack_104 = (undefined4)uVar5;
            puVar3[2] = CONCAT44(fVar14, uStack_148);
            puVar3[3] = CONCAT44(param_4, param_2);
            puVar3[6] = uVar8;
            puVar3[7] = 0;
            puVar3[8] = (ulong)uVar7 << 0x20;
            puVar3[9] = uStack_110;
            *(float*)( puVar3 + 4 ) = fVar10;
            *(float*)( (long)puVar3 + 0x24 ) = fVar12;
            *(float*)( puVar3 + 5 ) = fVar11;
            *(float*)( (long)puVar3 + 0x2c ) = local_c8;
            puVar3[0x10] = 0;
            puVar3[10] = CONCAT44(uStack_104, local_108);
            puVar3[0xb] = uVar5 >> 0x20;
            puVar3[0xc] = 0;
            puVar3[0xd] = CONCAT26(uStack_ea, 0x10000000000);
            puVar3[0xe] = 0;
            puVar3[0xf] = 0;
            goto LAB_00107f0d;
         }

         puVar3 = puVar3 + 0x11;
      }
 while ( puVar3 != puVar4 + (ulong)uVar7 * 0x11 );
   }

   if (uVar7 == *(uint*)( this + 100 )) {
      uVar5 = ( ulong )(uVar7 * 2);
      if (uVar7 * 2 == 0) {
         uVar5 = 1;
      }

      *(int*)( this + 100 ) = (int)uVar5;
      puVar4 = (undefined8*)Memory::realloc_static(puVar4, uVar5 * 0x88, false);
      *(undefined8**)( this + 0x68 ) = puVar4;
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      uVar7 = *(uint*)( this + 0x60 );
   }

   *(uint*)( this + 0x60 ) = uVar7 + 1;
   puVar4 = puVar4 + (ulong)uVar7 * 0x11;
   *puVar4 = 0;
   puVar4[1] = lVar15 << 0x20;
   puVar4[2] = CONCAT44(fVar14, uStack_148);
   puVar4[3] = CONCAT44(param_4, param_2);
   puVar4[4] = CONCAT44(fVar12, fVar10);
   puVar4[5] = CONCAT44(local_c8, fVar11);
   puVar4[6] = uVar8;
   puVar4[7] = 0;
   puVar4[8] = 0;
   puVar4[9] = 0;
   puVar4[10] = 0;
   puVar4[0xb] = 0;
   puVar4[0x10] = 0;
   puVar4[0xc] = 0;
   puVar4[0xd] = CONCAT26(uStack_ea, 0x10000000000);
   puVar4[0xe] = 0;
   puVar4[0xf] = 0;
   LAB_00107f0d:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBodySoftBodyPair3D::_contact_added_callback(Vector3 const&, int, Vector3 const&, int,
   Vector3 const&, void*) */void GodotBodySoftBodyPair3D::_contact_added_callback(Vector3 *param_1, int param_2, Vector3 *param_3, int param_4, Vector3 *param_5, void *param_6) {
   contact_added_callback((GodotBodySoftBodyPair3D*)param_6, param_1, param_2, param_3, param_4, param_5);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBodySoftBodyPair3D::validate_contacts() */void GodotBodySoftBodyPair3D::validate_contacts(GodotBodySoftBodyPair3D *this) {
   uint uVar1;
   undefined1(*pauVar2)[16];
   undefined1(*pauVar3)[16];
   float fVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   long lVar13;
   undefined8 uVar14;
   code *pcVar15;
   undefined8 uVar16;
   uint uVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   uint uVar23;
   long in_FS_OFFSET;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   undefined1 auVar29[12];
   float local_c8;
   float fStack_c4;
   uVar23 = *(uint*)( this + 0x60 );
   uVar22 = (ulong)uVar23;
   lVar20 = *(long*)( this + 0x48 );
   lVar13 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar4 = *(float*)( *(long*)( this + 0x40 ) + 0xd8 );
   uVar21 = 0;
   if (uVar23 == 0) {
      LAB_00108473:if (lVar13 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   do {
      uVar17 = uVar21 + 1;
      pauVar3 = (undefined1(*) [16])( *(long*)( this + 0x68 ) + (ulong)uVar21 * 0x88 );
      if (pauVar3[6][0xd] == '\0') {
         LAB_00108050:uVar1 = uVar23 - 1;
         if (uVar17 < uVar23) {
            uVar17 = uVar1;
            if ((uint)uVar22 <= uVar1) break;
            auVar5 = *pauVar3;
            auVar6 = pauVar3[1];
            auVar7 = pauVar3[2];
            auVar8 = pauVar3[3];
            auVar9 = pauVar3[4];
            auVar10 = pauVar3[5];
            auVar11 = pauVar3[6];
            auVar12 = pauVar3[7];
            pauVar2 = (undefined1(*) [16])( *(long*)( this + 0x68 ) + (ulong)uVar1 * 0x88 );
            uVar14 = *(undefined8*)pauVar3[8];
            uVar16 = *(undefined8*)( *pauVar2 + 8 );
            *(undefined8*)*pauVar3 = *(undefined8*)*pauVar2;
            *(undefined8*)( *pauVar3 + 8 ) = uVar16;
            for (int i = 0; i < 7; i++) {
               uVar16 = *(undefined8*)( pauVar2[( i + 1 )] + 8 );
               *(undefined8*)pauVar3[( i + 1 )] = *(undefined8*)pauVar2[( i + 1 )];
               *(undefined8*)( pauVar3[( i + 1 )] + 8 ) = uVar16;
            }

            *(undefined8*)pauVar3[8] = *(undefined8*)pauVar2[8];
            *(undefined8*)pauVar2[8] = uVar14;
            *pauVar2 = auVar5;
            pauVar2[1] = auVar6;
            pauVar2[2] = auVar7;
            pauVar2[3] = auVar8;
            pauVar2[4] = auVar9;
            pauVar2[5] = auVar10;
            pauVar2[6] = auVar11;
            pauVar2[7] = auVar12;
         }

         uVar23 = uVar1;
         uVar17 = uVar21;
         if (uVar1 <= uVar21) {
            LAB_00108370:if (uVar23 < (uint)uVar22) goto LAB_0010846f;
            if (uVar23 <= (uint)uVar22) goto LAB_00108473;
            uVar21 = uVar23 - 1;
            if (*(uint*)( this + 100 ) < uVar23) {
               uVar17 = uVar21 >> 1 | uVar21;
               uVar17 = uVar17 | uVar17 >> 2;
               uVar17 = uVar17 | uVar17 >> 4;
               uVar17 = uVar17 | uVar17 >> 8;
               uVar17 = ( uVar17 | uVar17 >> 0x10 ) + 1;
               *(uint*)( this + 100 ) = uVar17;
               uVar22 = (ulong)uVar17 * 0x88;
               lVar20 = Memory::realloc_static(*(void**)( this + 0x68 ), uVar22, false);
               *(long*)( this + 0x68 ) = lVar20;
               if (lVar20 == 0) {
                  _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, uVar22);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar15 = (code*)invalidInstructionException();
                  ( *pcVar15 )();
               }

               uVar22 = ( ulong ) * (uint*)( this + 0x60 );
               if (uVar23 <= *(uint*)( this + 0x60 )) goto LAB_0010846f;
            }

            lVar20 = *(long*)( this + 0x68 );
            puVar18 = (undefined8*)( lVar20 + uVar22 * 0x88 );
            do {
               *puVar18 = 0;
               puVar19 = puVar18 + 0x11;
               *(undefined4*)( puVar18 + 1 ) = 0;
               *(undefined8*)( (long)puVar18 + 0xc ) = 0;
               *(undefined4*)( (long)puVar18 + 0x14 ) = 0;
               puVar18[3] = 0;
               puVar18[4] = 0;
               *(undefined4*)( puVar18 + 5 ) = 0;
               *(undefined8*)( (long)puVar18 + 0x2c ) = 0;
               *(undefined4*)( (long)puVar18 + 0x34 ) = 0;
               puVar18[7] = 0;
               *(undefined4*)( puVar18 + 8 ) = 0;
               *(undefined4*)( (long)puVar18 + 0x44 ) = 0;
               puVar18[9] = 0;
               *(undefined4*)( puVar18 + 10 ) = 0;
               *(undefined1(*) [16])( (long)puVar18 + 0x54 ) = (undefined1[16])0x0;
               *(undefined8*)( (long)puVar18 + 100 ) = 0;
               *(undefined2*)( (long)puVar18 + 0x6c ) = 0;
               puVar18[0xe] = 0;
               *(undefined4*)( puVar18 + 0xf ) = 0;
               *(undefined8*)( (long)puVar18 + 0x7c ) = 0;
               *(undefined4*)( (long)puVar18 + 0x84 ) = 0;
               puVar18 = puVar19;
            }
 while ( (undefined8*)( lVar20 + 0x88 + ( uVar22 + ( uVar21 - (int)uVar22 ) ) * 0x88 ) != puVar19 );
            LAB_0010846f:*(uint*)( this + 0x60 ) = uVar23;
            goto LAB_00108473;
         }

      }
 else {
         fVar24 = *(float*)pauVar3[2];
         fVar25 = *(float*)( pauVar3[2] + 4 );
         pauVar3[6][0xd] = 0;
         fVar28 = *(float*)( pauVar3[2] + 8 );
         fVar27 = *(float*)( lVar20 + 0x60 ) * fVar24 + *(float*)( lVar20 + 100 ) * fVar25 + *(float*)( lVar20 + 0x68 ) * fVar28 + *(float*)( lVar20 + 0x74 );
         fVar26 = *(float*)( lVar20 + 0x54 ) * fVar24 + *(float*)( lVar20 + 0x58 ) * fVar25 + *(float*)( lVar20 + 0x5c ) * fVar28 + *(float*)( lVar20 + 0x70 );
         fVar25 = *(float*)( lVar20 + 0x6c ) + fVar24 * *(float*)( lVar20 + 0x48 ) + fVar25 * *(float*)( lVar20 + 0x4c ) + fVar28 * *(float*)( lVar20 + 0x50 );
         auVar29 = GodotSoftBody3D::get_node_position(( uint ) * (undefined8*)( this + 0x50 ));
         fStack_c4 = auVar29._4_4_;
         local_c8 = auVar29._0_4_;
         fStack_c4 = fStack_c4 + *(float*)pauVar3[3];
         local_c8 = local_c8 + *(float*)( pauVar3[2] + 0xc );
         fVar28 = auVar29._8_4_ + *(float*)( pauVar3[3] + 4 );
         fVar24 = ( fVar25 - local_c8 ) * *(float*)( *pauVar3 + 0xc ) + ( fVar26 - fStack_c4 ) * *(float*)pauVar3[1] + ( fVar27 - fVar28 ) * *(float*)( pauVar3[1] + 4 );
         if (fVar24 < (float)( (uint)fVar4 ^ __LC4 )) {
            uVar22 = ( ulong ) * (uint*)( this + 0x60 );
            goto LAB_00108050;
         }

         uVar22 = ( ulong ) * (uint*)( this + 0x60 );
         fVar26 = ( *(float*)pauVar3[1] * fVar24 + fStack_c4 ) - fVar26;
         fVar25 = ( *(float*)( *pauVar3 + 0xc ) * fVar24 + local_c8 ) - fVar25;
         fVar27 = ( fVar28 + *(float*)( pauVar3[1] + 4 ) * fVar24 ) - fVar27;
         if (fVar4 * fVar4 < fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27) goto LAB_00108050;
         if (uVar23 <= uVar17) goto LAB_00108370;
      }

      uVar21 = uVar17;
   }
 while ( uVar17 < (uint)uVar22 );
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar17, uVar22, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar15 = (code*)invalidInstructionException();
   ( *pcVar15 )();
}
/* GodotBodySoftBodyPair3D::setup(float) */void GodotBodySoftBodyPair3D::setup(float param_1) {
   ulong uVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   int iVar7;
   GodotBodySoftBodyPair3D *in_RDI;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   GodotBodySoftBodyPair3D GVar10;
   GodotBodySoftBodyPair3D GVar11;
   float extraout_XMM0_Da;
   float extraout_XMM0_Da_00;
   Transform3D aTStack_b8[48];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   Transform3D local_58[56];
   long local_20;
   lVar4 = *(long*)( in_RDI + 0x48 );
   lVar9 = *(long*)( in_RDI + 0x50 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(uint*)( lVar9 + 0x24 ) & *(uint*)( lVar4 + 0x20 ) ) == 0 ) && ( ( *(uint*)( lVar4 + 0x24 ) & *(uint*)( lVar9 + 0x20 ) ) == 0 )) {
      LAB_001087e9:GVar10 = (GodotBodySoftBodyPair3D)0x0;
      LAB_001087eb:in_RDI[0x3c] = GVar10;
      if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail(param_1);
      }

      return;
   }

   lVar6 = *(long*)( lVar4 + 0x2b0 );
   if (lVar6 != 0) {
      lVar8 = *(long*)( lVar6 + -8 );
      iVar5 = (int)lVar8 + -1;
      if (lVar8 < 1) goto LAB_00108828;
      iVar7 = 0;
      if (-1 < iVar5) {
         do {
            while (true) {
               iVar3 = ( iVar7 + iVar5 ) / 2;
               uVar1 = *(ulong*)( lVar6 + (long)iVar3 * 8 );
               if (*(ulong*)( lVar9 + 0x10 ) < uVar1) break;
               if (*(ulong*)( lVar9 + 0x10 ) <= uVar1) {
                  if (iVar3 != -1) goto LAB_001087e9;
                  goto LAB_0010861f;
               }

               iVar7 = iVar3 + 1;
               if (iVar5 < iVar7) goto LAB_0010861f;
            }
;
            iVar5 = iVar3 + -1;
         }
 while ( iVar7 <= iVar5 );
      }

   }

   LAB_0010861f:lVar9 = *(long*)( lVar9 + 0x2c8 );
   if (lVar9 != 0) {
      lVar8 = *(long*)( lVar9 + -8 );
      iVar5 = (int)lVar8 + -1;
      if (lVar8 < 1) {
         LAB_00108828:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      iVar7 = 0;
      if (-1 < iVar5) {
         do {
            while (true) {
               iVar3 = ( iVar7 + iVar5 ) / 2;
               uVar1 = *(ulong*)( lVar9 + (long)iVar3 * 8 );
               if (*(ulong*)( lVar4 + 0x10 ) < uVar1) break;
               if (*(ulong*)( lVar4 + 0x10 ) <= uVar1) {
                  if (iVar3 != -1) goto LAB_001087e9;
                  goto LAB_0010867f;
               }

               iVar7 = iVar3 + 1;
               if (iVar5 < iVar7) goto LAB_0010867f;
            }
;
            iVar5 = iVar3 + -1;
         }
 while ( iVar7 <= iVar5 );
      }

   }

   LAB_0010867f:iVar5 = GodotBody3D::get_mode();
   lVar4 = *(long*)( in_RDI + 0x48 );
   if (iVar5 < 2) {
      GVar10 = (GodotBodySoftBodyPair3D)0x0;
   }
 else {
      GVar10 = ( GodotBodySoftBodyPair3D )(( *(uint*)( *(long*)( in_RDI + 0x50 ) + 0x20 ) & *(uint*)( lVar4 + 0x24 ) ) != 0);
   }

   GVar11 = ( GodotBodySoftBodyPair3D )(( *(uint*)( lVar4 + 0x20 ) & *(uint*)( *(long*)( in_RDI + 0x50 ) + 0x24 ) ) != 0);
   in_RDI[0x5c] = GVar10;
   in_RDI[0x5d] = GVar11;
   if (( GVar10 == (GodotBodySoftBodyPair3D)0x0 ) && ( !(bool)GVar11 )) {
      param_1 = extraout_XMM0_Da;
      if (( *(long*)( lVar4 + 0x338 ) == 0 ) || ( *(int*)( *(long*)( lVar4 + 0x338 ) + -8 ) < 1 )) goto LAB_001087e9;
      in_RDI[0x5e] = (GodotBodySoftBodyPair3D)0x1;
   }

   lVar6 = (long)*(int*)( in_RDI + 0x58 );
   lVar9 = *(long*)( lVar4 + 0x38 );
   if (*(int*)( in_RDI + 0x58 ) < 0) {
      if (lVar9 != 0) {
         lVar9 = *(long*)( lVar9 + -8 );
         goto LAB_001088bb;
      }

   }
 else if (lVar9 != 0) {
      lVar9 = *(long*)( lVar9 + -8 );
      if (lVar9 <= lVar6) goto LAB_001088bb;
      Transform3D::operator *(aTStack_b8, (Transform3D*)( lVar4 + 0x48 ));
      lVar4 = *(long*)( in_RDI + 0x50 );
      local_88 = *(undefined8*)( lVar4 + 0x48 );
      uStack_80 = *(undefined8*)( lVar4 + 0x50 );
      local_78 = *(undefined8*)( lVar4 + 0x58 );
      uStack_70 = *(undefined8*)( lVar4 + 0x60 );
      local_68 = *(undefined8*)( lVar4 + 0x68 );
      uStack_60 = *(undefined8*)( lVar4 + 0x70 );
      if (*(long*)( lVar4 + 0x38 ) == 0) {
         lVar9 = 0;
      }
 else {
         lVar9 = *(long*)( *(long*)( lVar4 + 0x38 ) + -8 );
         if (0 < lVar9) {
            Transform3D::operator *(local_58, (Transform3D*)&local_88);
            validate_contacts(in_RDI);
            iVar5 = *(int*)( in_RDI + 0x58 );
            if (iVar5 < 0) {
               lVar4 = *(long*)( *(long*)( in_RDI + 0x48 ) + 0x38 );
               if (lVar4 != 0) goto LAB_001088ee;
               LAB_00108982:lVar6 = 0;
            }
 else {
               lVar4 = *(long*)( *(long*)( in_RDI + 0x48 ) + 0x38 );
               if (lVar4 == 0) goto LAB_00108982;
               if ((long)iVar5 < *(long*)( lVar4 + -8 )) {
                  lVar9 = *(long*)( *(long*)( in_RDI + 0x50 ) + 0x38 );
                  if (lVar9 == 0) {
                     lVar6 = 0;
                  }
 else {
                     lVar6 = *(long*)( lVar9 + -8 );
                     if (0 < lVar6) {
                        GVar10 = (GodotBodySoftBodyPair3D)GodotCollisionSolver3D::solve_static(*(GodotShape3D**)( lVar4 + 0x80 + (long)iVar5 * 0x90 ), aTStack_b8, *(GodotShape3D**)( lVar9 + 0x80 ), local_58, _contact_added_callback, in_RDI, (Vector3*)( in_RDI + 0x30 ), 0.0, 0.0);
                        param_1 = extraout_XMM0_Da_00;
                        goto LAB_001087eb;
                     }

                  }

                  lVar4 = 0;
                  goto LAB_00108910;
               }

               LAB_001088ee:lVar6 = *(long*)( lVar4 + -8 );
            }

            lVar4 = (long)iVar5;
            LAB_00108910:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar4, lVar6, "p_index", "shapes.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }

      lVar6 = 0;
      goto LAB_001088bb;
   }

   lVar9 = 0;
   LAB_001088bb:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar6, lVar9, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* GodotBodyPair3D::GodotBodyPair3D(GodotBody3D*, int, GodotBody3D*, int) */void GodotBodyPair3D::GodotBodyPair3D(GodotBodyPair3D *this, GodotBody3D *param_1, int param_2, GodotBody3D *param_3, int param_4) {
   undefined8 uVar1;
   long lVar2;
   GodotBodyPair3D *pGVar3;
   GodotBodyPair3D *pGVar4;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   GodotBodyPair3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x24] = (GodotBodyPair3D)0x1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 2;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined4*)( this + 0x20 ) = 1;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined4*)( this + 0x38 ) = 0;
   *(undefined2*)( this + 0x3c ) = 0;
   *(undefined2*)( this + 0x60 ) = 0;
   this[0x62] = (GodotBodyPair3D)0x0;
   *(undefined8*)( this + 100 ) = 0;
   *(undefined4*)( this + 0x6c ) = 0;
   *(GodotBodyPair3D**)( this + 8 ) = this + 0x48;
   *(undefined***)this = &PTR_get_soft_body_ptr_00109e38;
   pGVar3 = this + 0x70;
   do {
      *(undefined8*)pGVar3 = 0;
      pGVar4 = pGVar3 + 0x88;
      *(undefined4*)( pGVar3 + 8 ) = 0;
      *(undefined8*)( pGVar3 + 0xc ) = 0;
      *(undefined4*)( pGVar3 + 0x14 ) = 0;
      *(undefined8*)( pGVar3 + 0x18 ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pGVar3 + ( 12*i + 32 ) ) = 0;
         *(undefined4*)( pGVar3 + ( 12*i + 40 ) ) = 0;
      }

      *(undefined4*)( pGVar3 + 0x44 ) = 0;
      *(undefined8*)( pGVar3 + 0x48 ) = 0;
      *(undefined4*)( pGVar3 + 0x50 ) = 0;
      *(undefined1(*) [16])( pGVar3 + 0x54 ) = (undefined1[16])0x0;
      *(undefined8*)( pGVar3 + 100 ) = 0;
      *(undefined2*)( pGVar3 + 0x6c ) = 0;
      *(undefined8*)( pGVar3 + 0x70 ) = 0;
      *(undefined4*)( pGVar3 + 0x78 ) = 0;
      *(undefined8*)( pGVar3 + 0x7c ) = 0;
      *(undefined4*)( pGVar3 + 0x84 ) = 0;
      pGVar3 = pGVar4;
   }
 while ( pGVar4 != this + 0x290 );
   uVar1 = *(undefined8*)( param_1 + 0x40 );
   *(GodotBody3D**)( this + 0x50 ) = param_3;
   *(int*)( this + 0x58 ) = param_2;
   *(int*)( this + 0x5c ) = param_4;
   *(undefined4*)( this + 0x290 ) = 0;
   *(undefined8*)( this + 0x40 ) = uVar1;
   *(GodotBody3D**)( this + 0x48 ) = param_1;
   local_28 = this;
   puVar5 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( param_1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
   lVar2 = *(long*)( this + 0x50 );
   *puVar5 = 0;
   local_28 = this;
   puVar5 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar2 + 0x2f0 ), (GodotConstraint3D**)&local_28);
   *puVar5 = 1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBodySoftBodyPair3D::GodotBodySoftBodyPair3D(GodotBody3D*, int, GodotSoftBody3D*) */void GodotBodySoftBodyPair3D::GodotBodySoftBodyPair3D(GodotBodySoftBodyPair3D *this, GodotBody3D *param_1, int param_2, GodotSoftBody3D *param_3) {
   undefined8 uVar1;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   GodotBodySoftBodyPair3D *local_38[3];
   long local_20;
   uVar1 = *(undefined8*)( param_1 + 0x40 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0x58 ) = param_2;
   *(GodotBodySoftBodyPair3D**)( this + 8 ) = this + 0x48;
   *(undefined2*)( this + 0x3c ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x10 ) = 1;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined4*)( this + 0x20 ) = 1;
   this[0x24] = (GodotBodySoftBodyPair3D)0x1;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined4*)( this + 0x38 ) = 0;
   *(undefined***)this = &PTR_get_soft_body_ptr_00109e80;
   *(undefined2*)( this + 0x5c ) = 0;
   this[0x5e] = (GodotBodySoftBodyPair3D)0x0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(GodotSoftBody3D**)( this + 0x50 ) = param_3;
   *(undefined8*)( this + 0x40 ) = uVar1;
   *(GodotBody3D**)( this + 0x48 ) = param_1;
   local_38[0] = this;
   puVar2 = (undefined4*)HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator []((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( param_1 + 0x2f0 ), (GodotConstraint3D**)local_38);
   *puVar2 = 0;
   HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::insert((GodotConstraint3D**)local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotConstraint3D::get_soft_body_ptr(int) const */undefined8 GodotConstraint3D::get_soft_body_ptr(int param_1) {
   return 0;
}
/* GodotConstraint3D::get_soft_body_count() const */undefined8 GodotConstraint3D::get_soft_body_count(void) {
   return 0;
}
/* GodotBodySoftBodyPair3D::get_soft_body_ptr(int) const */undefined8 GodotBodySoftBodyPair3D::get_soft_body_ptr(int param_1) {
   undefined4 in_register_0000003c;
   return *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x50 );
}
/* GodotBodySoftBodyPair3D::get_soft_body_count() const */undefined8 GodotBodySoftBodyPair3D::get_soft_body_count(void) {
   return 1;
}
/* CowData<GodotBody3D::Contact>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GodotBody3D::Contact>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<GodotConstraint3D*, HashMapHasherDefault, HashMapComparatorDefault<GodotConstraint3D*>
   >::insert(GodotConstraint3D* const&) */undefined1[16];HashSet<GodotConstraint3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>>::insert(GodotConstraint3D **param_1) {
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
   GodotConstraint3D *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   local_88 = (GodotConstraint3D*)*in_RSI;
   if (local_88 == (GodotConstraint3D*)0x0) {
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
      local_88 = (GodotConstraint3D*)*in_RSI;
      if (local_88 != (GodotConstraint3D*)0x0) goto LAB_00108f9f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_00108f9f:if (uVar44 != 0) {
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
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_00109441;
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

   if ((float)uVar31 * __LC42 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (GodotConstraint3D*)*in_RSI;
         goto LAB_00109441;
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
      local_88 = (GodotConstraint3D*)*in_RSI;
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
   LAB_00109441:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::operator[](GodotConstraint3D*
   const&) */undefined1[16];HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::operator [](HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
             *this,GodotConstraint3D**param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
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
  undefined1 auVar36[16](*, pauVar37)[16](*, pauVar42)[16](*, pauVar57)[16];
  undefined1 auVar58[16];
  undefined1 auVar59[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar55 * 4;
   uVar39 = uVar55 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x109c12;
   local_70 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar47 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      pGVar56 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_0010973b;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_70 + uVar39 ) ) && ( local_70 < (void*)( (long)pvVar4 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar55 != uVar40 );
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }
 else {
         memset(pvVar4, 0, uVar40);
         lStack_90 = 0x109c5a;
         memset(local_70, 0, uVar39);
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }

   }

   if (iVar43 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_00109ae3;
   }

}
else{iVar43 = *(int*)( this + 0x2c );if (iVar43 != 0) {
   lVar52 = *(long*)( this + 0x10 );
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pGVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar54 * lVar3;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar55;
   lVar45 = SUB168(auVar5 * auVar21, 8);
   uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar53 = SUB164(auVar5 * auVar21, 8);
   if (uVar44 != 0) {
      uVar50 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar44 ) && ( pGVar56 == *(GodotConstraint3D**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) )) {
            auVar58._0_8_ = *(long*)( (long)local_70 + (ulong)uVar53 * 8 ) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
         }

         uVar50 = uVar50 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar55;
         lVar45 = SUB168(auVar6 * auVar22, 8);
         uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar53 = SUB164(auVar6 * auVar22, 8);
      }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar7 * auVar23, 8)) * lVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar55,lVar46 = SUB168(auVar8 * auVar24, 8),uVar50 <= SUB164(auVar8 * auVar24, 8) );
   }

   LAB_00109ae3:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pGVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar54 * lVar3;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar51;
   lVar45 = SUB168(auVar17 * auVar33, 8);
   uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar44 = SUB164(auVar17 * auVar33, 8);
   if (uVar47 != 0) {
      uVar53 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar47 ) && ( *(GodotConstraint3D**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) == pGVar56 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar44 * 8 );
            *(undefined4*)( pauVar42[1] + 8 ) = 0;
            lStack_90 = lVar46;
            goto LAB_00109ac4;
         }

         uVar53 = uVar53 + 1;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(uVar44 + 1) * lVar3;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar51;
         lVar45 = SUB168(auVar18 * auVar34, 8);
         uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar44 = SUB164(auVar18 * auVar34, 8);
      }
 while ( ( uVar47 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar47 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar44 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar51,lVar46 = SUB168(auVar20 * auVar36, 8),uVar53 <= SUB164(auVar20 * auVar36, 8) );
   }

}
}LAB_0010973b:if ((float)uVar55 * __LC42 < (float)( iVar43 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00109ac4;
   }

   uVar40 = ( ulong )(uVar47 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
   if (uVar47 + 1 < 2) {
      uVar40 = 2;
   }

   uVar47 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar39 = (ulong)uVar47;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar4 = *(void**)( this + 0x10 );
   uVar40 = uVar39 * 4;
   uVar55 = uVar39 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar55, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar47 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar55);
      }

   }

   if (uVar44 != 0) {
      uVar40 = 0;
      do {
         uVar47 = *(uint*)( (long)pvVar4 + uVar40 * 4 );
         if (uVar47 != 0) {
            lVar52 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar55 = CONCAT44(0, uVar53);
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar47 * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            lVar45 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar52 + lVar45 * 4 );
            iVar43 = SUB164(auVar9 * auVar25, 8);
            uVar50 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
            while (uVar50 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar50 * lVar3;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar55;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar53 + iVar43 ) - SUB164(auVar10 * auVar26, 8)) * lVar3;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar55;
               uVar38 = SUB164(auVar11 * auVar27, 8);
               uVar48 = uVar41;
               if (uVar38 < uVar49) {
                  *puVar1 = uVar47;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar41;
                  uVar47 = uVar50;
                  uVar49 = uVar38;
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar55;
               lVar45 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar52 + lVar45 * 4 );
               iVar43 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar41;
            *puVar1 = uVar47;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar44 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar4, false);
   }

}
pGVar56 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x20, "");*(GodotConstraint3D**)pauVar42[1] = pGVar56;*(undefined4*)( pauVar42[1] + 8 ) = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
lVar52 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar40 = (long)*param_1 * 0x3ffff - 1;uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;uVar40 = uVar40 >> 0x16 ^ uVar40;uVar55 = uVar40 & 0xffffffff;if ((int)uVar40 == 0) {
   uVar55 = 1;
}
uVar50 = 0;lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar55;uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar47);auVar13._8_8_ = 0;auVar13._0_8_ = uVar55 * lVar3;auVar29._8_8_ = 0;auVar29._0_8_ = uVar40;lStack_90 = SUB168(auVar13 * auVar29, 8);lVar45 = *(long*)( this + 8 );puVar1 = (uint*)( lVar52 + lStack_90 * 4 );iVar43 = SUB164(auVar13 * auVar29, 8);uVar44 = *puVar1;pauVar37 = pauVar42;while (uVar44 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar44 * lVar3;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar47 + iVar43 ) - SUB164(auVar14 * auVar30, 8)) * lVar3;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar40;
   uVar53 = SUB164(auVar15 * auVar31, 8);
   pauVar57 = pauVar37;
   if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar45 + lStack_90 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
   }

   uVar53 = (uint)uVar55;
   uVar50 = uVar50 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar40;
   lStack_90 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar43 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar57;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar45 + lStack_90 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00109ac4:auVar59._8_8_ = lStack_90;auVar59._0_8_ = pauVar42[1] + 8;return auVar59;}
