/* RVO2D::Agent2D::Agent2D() */void RVO2D::Agent2D::Agent2D(Agent2D *this) {
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0x100000000;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x90 ) = 0x3f80000000000001;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   for (int i = 0; i < 6; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 32 ) ) = (undefined1[16])0;
   }

   return;
}
/* RVO2D::Agent2D::computeNeighbors(RVO2D::RVOSimulator2D*) */void RVO2D::Agent2D::computeNeighbors(Agent2D *this, RVOSimulator2D *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x30 ) != *(long*)( this + 0x38 )) {
      *(long*)( this + 0x38 ) = *(long*)( this + 0x30 );
   }

   fVar2 = *(float*)( this + 0x78 ) * *(float*)( this + 0x20 ) + *(float*)( this + 0x70 );
   RVO2D::KdTree2D::computeObstacleNeighbors(*(Agent2D**)( param_1 + 0x28 ), fVar2 * fVar2);
   if (*(long*)this != *(long*)( this + 8 )) {
      *(long*)( this + 8 ) = *(long*)this;
   }

   if (*(long*)( this + 0x18 ) != 0) {
      RVO2D::KdTree2D::computeAgentNeighbors(*(Agent2D**)( param_1 + 0x28 ), (float*)this);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RVO2D::Agent2D::update(RVO2D::RVOSimulator2D*) */void RVO2D::Agent2D::update(Agent2D *this, RVOSimulator2D *param_1) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( this + 0x28 );
   *(undefined8*)( this + 0x7c ) = uVar1;
   *(ulong*)( this + 0x60 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x60 ) >> 0x20 ) + *(float*)( param_1 + 0x48 ) * (float)( (ulong)uVar1 >> 0x20 ), (float)*(undefined8*)( this + 0x60 ) + *(float*)( param_1 + 0x48 ) * (float)uVar1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RVO2D::linearProgram1(std::vector<RVO2D::Line, std::allocator<RVO2D::Line> > const&, unsigned
   long, float, RVO2D::Vector2 const&, bool, RVO2D::Vector2&) */undefined8 RVO2D::linearProgram1(vector *param_1, ulong param_2, float param_3, Vector2 *param_4, bool param_5, Vector2 *param_6) {
   float fVar1;
   float fVar2;
   float *pfVar3;
   float *pfVar4;
   ulong uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined8 uVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   pfVar3 = *(float**)param_1;
   pfVar4 = pfVar3 + param_2 * 4;
   fVar8 = *pfVar4;
   fVar1 = pfVar4[2];
   fVar9 = (float)*(undefined8*)pfVar4;
   fVar12 = (float)( ( ulong ) * (undefined8*)pfVar4 >> 0x20 );
   fVar11 = (float)*(undefined8*)( pfVar4 + 2 );
   fVar13 = (float)( ( ulong ) * (undefined8*)( pfVar4 + 2 ) >> 0x20 );
   fVar14 = fVar8 * fVar1 + fVar13 * fVar12;
   fVar6 = ( param_3 * param_3 + fVar14 * fVar14 ) - ( fVar8 * fVar8 + fVar12 * fVar12 );
   if (fVar6 < 0.0) {
      return 0;
   }

   fVar6 = SQRT(fVar6);
   fVar16 = (float)( (uint)fVar14 ^ __LC1 ) - fVar6;
   fVar6 = fVar6 - fVar14;
   if (param_2 != 0) {
      uVar5 = 0;
      fVar14 = fVar16;
      do {
         fVar15 = fVar1 * pfVar3[3] - fVar13 * pfVar3[2];
         fVar7 = ( fVar12 - pfVar3[1] ) * pfVar3[2] - ( fVar8 - *pfVar3 ) * pfVar3[3];
         fVar16 = fVar14;
         if (_LC3 < (float)( (uint)fVar15 & _LC2 )) {
            fVar7 = fVar7 / fVar15;
            fVar2 = fVar6;
            if (fVar15 < 0.0) {
               fVar16 = fVar7;
               if (fVar7 <= fVar14) {
                  fVar16 = fVar14;
               }

            }
 else {
               fVar2 = fVar7;
               if (fVar6 <= fVar7) {
                  fVar2 = fVar6;
               }

            }

            fVar6 = fVar2;
            if (fVar6 < fVar16) {
               return 0;
            }

         }
 else if (fVar7 < 0.0) {
            return 0;
         }

         uVar5 = uVar5 + 1;
         pfVar3 = pfVar3 + 4;
         fVar14 = fVar16;
      }
 while ( param_2 != uVar5 );
   }

   if (param_5) {
      if (*(float*)param_4 * fVar1 + *(float*)( param_4 + 4 ) * fVar13 <= 0.0) goto LAB_00100340;
   }
 else {
      fVar8 = ( *(float*)param_4 - fVar8 ) * fVar1 + ( *(float*)( param_4 + 4 ) - fVar12 ) * fVar13;
      if (fVar8 < fVar16) {
         LAB_00100340:uVar10 = CONCAT44(fVar12 + fVar16 * fVar13, fVar9 + fVar16 * fVar11);
         goto LAB_001002d0;
      }

      if (fVar8 <= fVar6) {
         uVar10 = CONCAT44(fVar12 + fVar8 * fVar13, fVar9 + fVar8 * fVar11);
         goto LAB_001002d0;
      }

   }

   uVar10 = CONCAT44(fVar12 + fVar6 * fVar13, fVar9 + fVar6 * fVar11);
   LAB_001002d0:*(undefined8*)param_6 = uVar10;
   return 1;
}
/* RVO2D::linearProgram2(std::vector<RVO2D::Line, std::allocator<RVO2D::Line> > const&, float,
   RVO2D::Vector2 const&, bool, RVO2D::Vector2&) */ulong RVO2D::linearProgram2(vector *param_1, float param_2, Vector2 *param_3, bool param_4, Vector2 *param_5) {
   long lVar1;
   char cVar2;
   ulong uVar3;
   float *pfVar4;
   ulong uVar5;
   ulong uVar6;
   float fVar7;
   float fVar8;
   float fVar10;
   undefined8 uVar9;
   uVar9 = *(undefined8*)param_3;
   if (!param_4) {
      fVar8 = (float)uVar9;
      fVar10 = (float)( (ulong)uVar9 >> 0x20 );
      fVar7 = fVar8 * fVar8 + fVar10 * fVar10;
      if (fVar7 <= param_2 * param_2) goto LAB_001003af;
      fVar7 = _LC4 / SQRT(fVar7);
      uVar9 = CONCAT44(fVar10 * fVar7, fVar8 * fVar7);
   }

   uVar9 = CONCAT44((float)( (ulong)uVar9 >> 0x20 ) * param_2, (float)uVar9 * param_2);
   LAB_001003af:pfVar4 = *(float**)param_1;
   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)param_5 = uVar9;
   uVar5 = lVar1 - (long)pfVar4 >> 4;
   if (uVar5 != 0) {
      uVar3 = 0;
      uVar6 = uVar5;
      do {
         fVar7 = *(float*)param_5;
         fVar8 = *(float*)( param_5 + 4 );
         if (( 0.0 < ( pfVar4[1] - fVar8 ) * pfVar4[2] - ( *pfVar4 - fVar7 ) * pfVar4[3] ) && ( cVar2 = linearProgram1(param_1, uVar3, param_2, param_3, param_4, param_5) ),cVar2 == '\0') {
            *(float*)param_5 = fVar7;
            *(float*)( param_5 + 4 ) = fVar8;
            return uVar3;
         }

         uVar3 = uVar3 + 1;
         pfVar4 = pfVar4 + 4;
      }
 while ( uVar3 != uVar6 );
   }

   return uVar5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RVO2D::linearProgram3(std::vector<RVO2D::Line, std::allocator<RVO2D::Line> > const&, unsigned
   long, unsigned long, float, RVO2D::Vector2&) */void RVO2D::linearProgram3(vector *param_1, ulong param_2, ulong param_3, float param_4, Vector2 *param_5) {
   float fVar1;
   float fVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   float *pfVar6;
   ulong uVar7;
   undefined8 *puVar8;
   ulong uVar9;
   float *pfVar10;
   undefined8 *puVar11;
   long lVar12;
   long in_FS_OFFSET;
   uint uVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fStack_84;
   undefined8 local_68;
   undefined8 uStack_60;
   void *local_58;
   undefined8 *local_50;
   undefined8 *local_48;
   long local_40;
   uVar7 = param_2 * 0x10;
   lVar5 = *(long*)param_1;
   lVar4 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < ( ulong )(lVar4 - lVar5 >> 4)) {
      fVar15 = 0.0;
      uVar13 = _LC2;
      do {
         lVar12 = param_3 * 0x10;
         pfVar10 = (float*)( lVar5 + lVar12 );
         if (( pfVar10[1] - *(float*)( param_5 + 4 ) ) * pfVar10[2] - ( *pfVar10 - *(float*)param_5 ) * pfVar10[3] <= fVar15) {
            lVar5 = *(long*)param_1;
         }
 else {
            local_50 = (undefined8*)0x0;
            if (0x7ffffffffffffff0 < uVar7) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("cannot create std::vector larger than max_size()");
            }

            if (uVar7 == 0) {
               local_58 = (void*)0x0;
               local_48 = (undefined8*)0x0;
            }
 else {
               local_58 = operator_new(uVar7);
               uVar13 = _LC2;
               uVar9 = 0;
               local_48 = (undefined8*)( (long)local_58 + uVar7 );
               lVar4 = 0;
               do {
                  uVar3 = ( (undefined8*)( lVar5 + lVar4 ) )[1];
                  uVar9 = uVar9 + 1;
                  *(undefined8*)( (long)local_58 + lVar4 ) = *(undefined8*)( lVar5 + lVar4 );
                  ( (undefined8*)( (long)local_58 + lVar4 ) )[1] = uVar3;
                  lVar4 = lVar4 + 0x10;
               }
 while ( uVar9 < ( uVar7 - 0x10 >> 4 ) + 1 );
            }

            lVar5 = *(long*)param_1;
            pfVar10 = (float*)( lVar5 + lVar12 );
            fVar15 = pfVar10[2];
            fVar20 = pfVar10[3];
            puVar8 = local_48;
            puVar11 = local_48;
            local_50 = local_48;
            if (param_2 < param_3) {
               uVar9 = param_2;
               fVar16 = _LC7;
               fVar14 = _LC3;
               do {
                  pfVar6 = (float*)( uVar9 * 0x10 + lVar5 );
                  fVar1 = pfVar6[3];
                  fVar2 = pfVar6[2];
                  fVar18 = fVar1 * fVar15 - fVar2 * fVar20;
                  if ((float)( (uint)fVar18 & uVar13 ) <= fVar14) {
                     if (fVar2 * fVar15 + fVar1 * fVar20 <= 0.0) {
                        fVar19 = ( pfVar10[1] + pfVar6[1] ) * fVar16;
                        fVar18 = ( *pfVar10 + *pfVar6 ) * fVar16;
                        fVar17 = ( fVar1 - fVar20 ) * ( fVar1 - fVar20 ) + ( fVar2 - fVar15 ) * ( fVar2 - fVar15 );
                        goto LAB_0010068e;
                     }

                  }
 else {
                     fVar18 = ( ( pfVar10[1] - pfVar6[1] ) * fVar2 - ( *pfVar10 - *pfVar6 ) * fVar1 ) / fVar18;
                     fVar19 = fVar18 * fVar20 + pfVar10[1];
                     fVar18 = fVar18 * fVar15 + *pfVar10;
                     fVar17 = ( fVar2 - fVar15 ) * ( fVar2 - fVar15 ) + ( fVar1 - fVar20 ) * ( fVar1 - fVar20 );
                     LAB_0010068e:local_68 = CONCAT44(fVar19, fVar18);
                     uStack_60 = CONCAT44(( fVar1 - fVar20 ) * ( _LC4 / SQRT(fVar17) ), ( fVar2 - fVar15 ) * ( _LC4 / SQRT(fVar17) ));
                     if (puVar8 == puVar11) {
                        std::vector<RVO2D::Line,std::allocator<RVO2D::Line>>::_M_realloc_insert<RVO2D::Line_const&>((vector<RVO2D::Line,std::allocator<RVO2D::Line>>*)&local_58, puVar8, &local_68);
                        lVar5 = *(long*)param_1;
                        pfVar10 = (float*)( lVar5 + lVar12 );
                        puVar11 = local_48;
                        uVar13 = _LC2;
                        fVar16 = _LC7;
                        fVar14 = _LC3;
                     }
 else {
                        *puVar8 = local_68;
                        puVar8[1] = uStack_60;
                        local_50 = puVar8 + 2;
                     }

                     fVar15 = pfVar10[2];
                     fVar20 = pfVar10[3];
                     puVar8 = local_50;
                  }

                  uVar9 = uVar9 + 1;
               }
 while ( uVar9 != param_3 );
            }

            uVar3 = *(undefined8*)param_5;
            local_68 = CONCAT44(fVar15, (uint)fVar20 ^ __LC1);
            uVar9 = linearProgram2((vector*)&local_58, param_4, (Vector2*)&local_68, true, param_5);
            uVar13 = _LC2;
            fStack_84 = (float)( (ulong)uVar3 >> 0x20 );
            if (uVar9 < ( ulong )((long)puVar8 - (long)local_58 >> 4)) {
               fVar15 = (float)uVar3;
               *(undefined8*)param_5 = uVar3;
            }
 else {
               fStack_84 = *(float*)( param_5 + 4 );
               fVar15 = *(float*)param_5;
            }

            fVar15 = ( pfVar10[1] - fStack_84 ) * pfVar10[2] - ( *pfVar10 - fVar15 ) * pfVar10[3];
            if (local_58 == (void*)0x0) {
               lVar4 = *(long*)( param_1 + 8 );
            }
 else {
               operator_delete(local_58, (long)puVar11 - (long)local_58);
               lVar5 = *(long*)param_1;
               lVar4 = *(long*)( param_1 + 8 );
               uVar13 = _LC2;
            }

         }

         param_3 = param_3 + 1;
      }
 while ( param_3 < ( ulong )(lVar4 - lVar5 >> 4) );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RVO2D::Agent2D::computeNewVelocity(RVO2D::RVOSimulator2D*) */void RVO2D::Agent2D::computeNewVelocity(Agent2D *this, RVOSimulator2D *param_1) {
   vector<RVO2D::Line,std::allocator<RVO2D::Line>> *pvVar1;
   float fVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   bool bVar5;
   undefined1 auVar6[16];
   float *pfVar7;
   long lVar8;
   char cVar9;
   ulong uVar10;
   char cVar11;
   ulong uVar12;
   char *pcVar13;
   float *pfVar14;
   char *pcVar15;
   ulong uVar16;
   float *pfVar17;
   long in_FS_OFFSET;
   uint uVar18;
   float fVar19;
   undefined8 uVar20;
   float fVar21;
   float fVar22;
   undefined8 uVar23;
   float fVar24;
   float fVar25;
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
   float fVar37;
   float fVar38;
   float fVar39;
   float local_a4;
   float local_a0;
   undefined1 local_58[8];
   undefined8 uStack_50;
   long local_40;
   pfVar14 = *(float**)( this + 0x48 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar1 = (vector<RVO2D::Line,std::allocator<RVO2D::Line>>*)( this + 0x48 );
   if (pfVar14 != *(float**)( this + 0x50 )) {
      *(float**)( this + 0x50 ) = pfVar14;
   }

   lVar8 = *(long*)( this + 0x30 );
   fVar39 = _LC4 / *(float*)( this + 0x78 );
   if (*(long*)( this + 0x38 ) == lVar8) {
      uVar10 = 0;
   }
 else {
      uVar16 = 0;
      pfVar17 = pfVar14;
      do {
         fVar2 = *(float*)( this + 0x70 );
         pcVar13 = *(char**)( lVar8 + 8 + uVar16 * 0x10 );
         uVar10 = (long)pfVar17 - (long)pfVar14 >> 4;
         pcVar15 = *(char**)( pcVar13 + 8 );
         fVar31 = *(float*)( pcVar13 + 0x14 ) - *(float*)( this + 100 );
         fVar24 = *(float*)( pcVar13 + 0x10 ) - *(float*)( this + 0x60 );
         fVar26 = *(float*)( pcVar15 + 0x14 ) - *(float*)( this + 100 );
         fVar21 = *(float*)( pcVar15 + 0x10 ) - *(float*)( this + 0x60 );
         if (pfVar17 != pfVar14) {
            uVar12 = 0;
            pfVar7 = pfVar14;
            do {
               if (( __LC9 <= ( ( fVar39 * fVar24 - *pfVar7 ) * pfVar7[3] - ( fVar39 * fVar31 - pfVar7[1] ) * pfVar7[2] ) - fVar39 * fVar2 ) && ( __LC9 <= ( ( fVar39 * fVar21 - *pfVar7 ) * pfVar7[3] - ( fVar39 * fVar26 - pfVar7[1] ) * pfVar7[2] ) - fVar39 * fVar2 )) goto LAB_00100d1b;
               uVar12 = uVar12 + 1;
               pfVar7 = pfVar7 + 4;
            }
 while ( uVar12 < uVar10 );
         }

         fVar38 = *(float*)( pcVar15 + 0x14 ) - *(float*)( pcVar13 + 0x14 );
         fVar37 = *(float*)( pcVar15 + 0x10 ) - *(float*)( pcVar13 + 0x10 );
         fVar25 = (float)( (uint)fVar31 ^ __LC1 );
         fVar33 = fVar24 * fVar24 + fVar31 * fVar31;
         fVar34 = fVar2 * fVar2;
         fVar22 = fVar21 * fVar21 + fVar26 * fVar26;
         fVar19 = ( (float)( (uint)fVar24 ^ __LC1 ) * fVar37 + fVar25 * fVar38 ) / ( fVar37 * fVar37 + fVar38 * fVar38 );
         fVar38 = fVar25 - fVar38 * fVar19;
         fVar37 = (float)( (uint)fVar24 ^ __LC1 ) - fVar37 * fVar19;
         fVar37 = fVar38 * fVar38 + fVar37 * fVar37;
         _local_58 = (undefined1[16])0x0;
         if (fVar19 < 0.0) {
            cVar9 = *pcVar13;
            if (fVar33 <= fVar34) {
               if (cVar9 == '\0') goto LAB_00100d1b;
               uVar10 = CONCAT44(( _LC4 / SQRT(fVar33) ) * fVar24, fVar25 * ( _LC4 / SQRT(fVar33) ));
               auVar4._8_8_ = 0;
               auVar4._0_8_ = uVar10;
               _local_58 = auVar4 << 0x40;
               if (*(float**)( this + 0x58 ) != pfVar17) {
                  pfVar17[0] = 0.0;
                  pfVar17[1] = 0.0;
                  *(ulong*)( pfVar17 + 2 ) = uVar10;
                  goto LAB_00101564;
               }

               LAB_001011ee:std::vector<RVO2D::Line,std::allocator<RVO2D::Line>>::_M_realloc_insert<RVO2D::Line_const&>(pvVar1, pfVar17, local_58);
               pfVar17 = *(float**)( this + 0x50 );
               pfVar14 = *(float**)( this + 0x48 );
               lVar8 = *(long*)( this + 0x30 );
               uVar10 = (long)pfVar17 - (long)pfVar14 >> 4;
            }
 else {
               if (fVar34 < fVar37) goto LAB_00100ff5;
               if (cVar9 == '\0') goto LAB_00100d1b;
               fVar34 = fVar33 - fVar34;
               if (fVar34 < 0.0) {
                  fVar34 = sqrtf(fVar34);
               }
 else {
                  fVar34 = SQRT(fVar34);
               }

               fVar33 = _LC4 / fVar33;
               fVar37 = ( fVar24 * fVar2 + fVar34 * fVar31 ) * fVar33;
               fVar25 = ( fVar34 * fVar24 - fVar31 * fVar2 ) * fVar33;
               fVar19 = ( fVar34 * fVar31 - fVar24 * fVar2 ) * fVar33;
               fVar22 = ( fVar34 * fVar24 + fVar31 * fVar2 ) * fVar33;
               fVar21 = fVar24;
               LAB_00100c46:lVar8 = *(long*)( pcVar13 + 0x18 );
               pcVar15 = pcVar13;
               fVar24 = fVar21;
               fVar26 = fVar31;
               cVar11 = '\x01';
               LAB_00101709:fVar33 = (float)( *(uint*)( lVar8 + 0x24 ) ^ __LC1 );
               fVar34 = (float)( *(uint*)( lVar8 + 0x20 ) ^ __LC1 );
               fVar38 = fVar25 * fVar33 - fVar37 * fVar34;
               uVar18 = -(uint)(0.0 <= fVar38);
               cVar9 = 0.0 <= fVar38;
               fVar37 = (float)( (uint)fVar33 & uVar18 | ~uVar18 & (uint)fVar37 );
               fVar25 = (float)( (uint)fVar34 & uVar18 | ~uVar18 & (uint)fVar25 );
               if (cVar11 != '\0') {
                  LAB_001016a9:local_a4 = *(float*)( pcVar15 + 0x24 );
                  bVar5 = true;
                  local_a0 = *(float*)( pcVar15 + 0x20 );
                  if (local_a4 * fVar22 - local_a0 * fVar19 <= 0.0) goto LAB_0010103d;
               }

               bVar5 = false;
               local_a4 = fVar19;
               local_a0 = fVar22;
               LAB_0010103d:fVar26 = fVar26 * fVar39;
               fVar22 = *(float*)( this + 0x7c );
               fVar19 = *(float*)( this + 0x80 );
               fVar21 = fVar21 * fVar39;
               fVar24 = fVar24 * fVar39;
               fVar31 = fVar31 * fVar39;
               fVar35 = fVar19 - fVar26;
               fVar27 = fVar22 - fVar21;
               fVar32 = fVar19 - fVar31;
               fVar28 = fVar22 - fVar24;
               fVar33 = fVar28 * fVar25 + fVar37 * fVar32;
               fVar38 = local_a4 * fVar35 + local_a0 * fVar27;
               fVar34 = _LC8;
               if (pcVar13 == pcVar15) {
                  if (0.0 <= fVar33) {
                     LAB_0010114f:fVar35 = fVar19 - ( fVar37 * fVar33 + fVar31 );
                     fVar33 = fVar22 - ( fVar33 * fVar25 + fVar24 );
                     fVar33 = fVar33 * fVar33 + fVar35 * fVar35;
                     if (0.0 <= fVar38) {
                        LAB_00100cbf:fVar19 = fVar19 - ( local_a4 * fVar38 + fVar26 );
                        fVar22 = fVar22 - ( fVar38 * local_a0 + fVar21 );
                        fVar22 = fVar22 * fVar22 + fVar19 * fVar19;
                        if (( fVar33 < fVar34 ) || ( fVar22 < fVar34 )) goto LAB_00100d06;
                     }
 else {
                        fVar22 = _LC8;
                        if (fVar33 < fVar34) {
                           LAB_00100d06:if (fVar33 <= fVar22) goto LAB_00100d0f;
                           goto LAB_001013db;
                        }

                     }

                     LAB_001011a4:uVar20 = CONCAT44(fVar2 * fVar39 * (float)( *(uint*)( pcVar13 + 0x20 ) ^ __LC1 ) + fVar31, fVar2 * fVar39 * *(float*)( pcVar13 + 0x24 ) + fVar24);
                     uVar23 = CONCAT44(( uint ) * (float*)( pcVar13 + 0x24 ) ^ __LC1, *(uint*)( pcVar13 + 0x20 ) ^ __LC1);
                     uStack_50 = uVar23;
                     local_58 = (undefined1[8])uVar20;
                     pfVar7 = *(float**)( this + 0x58 );
                     goto joined_r0x001018d5;
                  }

                  if (fVar38 < 0.0) goto LAB_00101781;
                  LAB_00101391:fVar19 = fVar19 - ( local_a4 * fVar38 + fVar26 );
                  fVar22 = fVar22 - ( fVar38 * local_a0 + fVar21 );
                  if (__LC11 < fVar19 * fVar19 + fVar22 * fVar22) goto LAB_001011a4;
                  LAB_001013db:if (!bVar5) {
                     uVar23 = CONCAT44((uint)local_a4 ^ __LC1, (uint)local_a0 ^ __LC1);
                     uVar20 = CONCAT44(fVar2 * fVar39 * (float)( (uint)local_a0 ^ __LC1 ) + fVar26, local_a4 * fVar2 * fVar39 + fVar21);
                     uStack_50 = uVar23;
                     local_58 = (undefined1[8])uVar20;
                     pfVar7 = *(float**)( this + 0x58 );
                     goto joined_r0x001018d5;
                  }

               }
 else {
                  fVar29 = fVar21 - fVar24;
                  fVar36 = fVar26 - fVar31;
                  fVar30 = ( fVar36 * fVar32 + fVar29 * fVar28 ) / ( fVar29 * fVar29 + fVar36 * fVar36 );
                  if (0.0 <= fVar30) {
                     if (_LC4 < fVar30) {
                        if (fVar38 < 0.0) {
                           fVar31 = _LC4 / SQRT(fVar27 * fVar27 + fVar35 * fVar35);
                           fVar35 = fVar35 * fVar31;
                           fVar31 = fVar31 * fVar27;
                           uVar23 = CONCAT44((uint)fVar31 ^ __LC1, fVar35);
                           uVar20 = CONCAT44(fVar2 * fVar39 * fVar35 + fVar26, fVar2 * fVar39 * fVar31 + fVar21);
                           uStack_50 = uVar23;
                           local_58 = (undefined1[8])uVar20;
                           pfVar7 = *(float**)( this + 0x58 );
                           goto joined_r0x001018d5;
                        }

                        if (fVar33 < 0.0) goto LAB_00101391;
                        fVar35 = fVar19 - ( fVar37 * fVar33 + fVar31 );
                        fVar33 = fVar22 - ( fVar33 * fVar25 + fVar24 );
                        fVar33 = fVar35 * fVar35 + fVar33 * fVar33;
                        goto LAB_00100cbf;
                     }

                     fVar34 = fVar19 - ( fVar36 * fVar30 + fVar31 );
                     fVar35 = fVar22 - ( fVar30 * fVar29 + fVar24 );
                     fVar34 = fVar34 * fVar34 + fVar35 * fVar35;
                     if (0.0 <= fVar33) goto LAB_0010114f;
                     fVar33 = _LC8;
                     if (0.0 <= fVar38) goto LAB_00100cbf;
                     if (fVar34 <= _LC8) goto LAB_001011a4;
                     LAB_00100d0f:if (cVar9 != '\0') goto LAB_00100d17;
                     uVar23 = CONCAT44(fVar37, fVar25);
                     uVar20 = CONCAT44(fVar2 * fVar39 * fVar25 + fVar31, fVar24 - fVar37 * fVar2 * fVar39);
                     uStack_50 = uVar23;
                     local_58 = (undefined1[8])uVar20;
                     pfVar7 = *(float**)( this + 0x58 );
                  }
 else {
                     if (0.0 <= fVar33) goto LAB_0010114f;
                     LAB_00101781:fVar21 = _LC4 / SQRT(fVar28 * fVar28 + fVar32 * fVar32);
                     fVar32 = fVar32 * fVar21;
                     fVar21 = fVar21 * fVar28;
                     uVar23 = CONCAT44((uint)fVar21 ^ __LC1, fVar32);
                     uVar20 = CONCAT44(fVar2 * fVar39 * fVar32 + fVar31, fVar2 * fVar39 * fVar21 + fVar24);
                     uStack_50 = uVar23;
                     local_58 = (undefined1[8])uVar20;
                     pfVar7 = *(float**)( this + 0x58 );
                  }

                  joined_r0x001018d5:if (pfVar7 == pfVar17) goto LAB_001011ee;
                  *(undefined8*)pfVar17 = uVar20;
                  *(undefined8*)( pfVar17 + 2 ) = uVar23;
                  pfVar17 = pfVar17 + 4;
                  *(float**)( this + 0x50 ) = pfVar17;
                  uVar10 = (long)pfVar17 - (long)pfVar14 >> 4;
               }

               LAB_00100d17:lVar8 = *(long*)( this + 0x30 );
            }

         }
 else if (fVar19 <= _LC4) {
            if (( ( fVar19 < 0.0 ) || ( _LC4 <= fVar19 ) ) || ( fVar34 < fVar37 )) {
               LAB_00100ff1:cVar9 = *pcVar13;
               LAB_00100ff5:if (cVar9 != '\0') {
                  fVar19 = fVar33 - fVar34;
                  if (fVar19 < 0.0) {
                     fVar19 = sqrtf(fVar19);
                  }
 else {
                     fVar19 = SQRT(fVar19);
                  }

                  fVar25 = ( fVar19 * fVar24 - fVar31 * fVar2 ) * ( _LC4 / fVar33 );
                  fVar37 = ( fVar24 * fVar2 + fVar31 * fVar19 ) * ( _LC4 / fVar33 );
                  if (*pcVar15 != '\0') goto LAB_0010164a;
                  fVar22 = *(float*)( pcVar13 + 0x20 );
                  fVar19 = *(float*)( pcVar13 + 0x24 );
                  cVar9 = '\0';
                  LAB_00101705:lVar8 = *(long*)( pcVar13 + 0x18 );
                  cVar11 = cVar9;
                  goto LAB_00101709;
               }

               local_a4 = *(float*)( pcVar13 + 0x24 );
               local_a0 = *(float*)( pcVar13 + 0x20 );
               fVar37 = (float)( (uint)local_a4 ^ __LC1 );
               fVar25 = (float)( (uint)local_a0 ^ __LC1 );
               if (*pcVar15 != '\0') {
                  LAB_0010164a:fVar34 = fVar22 - fVar34;
                  if (fVar34 < 0.0) {
                     fVar34 = sqrtf(fVar34);
                  }
 else {
                     fVar34 = SQRT(fVar34);
                  }

                  fVar19 = ( fVar26 * fVar34 - fVar21 * fVar2 ) * ( _LC4 / fVar22 );
                  fVar22 = ( fVar34 * fVar21 + fVar26 * fVar2 ) * ( _LC4 / fVar22 );
                  if (cVar9 != '\0') goto LAB_00101705;
                  goto LAB_001016a9;
               }

               bVar5 = false;
               goto LAB_0010103d;
            }

            uVar10 = CONCAT44(( uint )(( ulong ) * (undefined8*)( pcVar13 + 0x20 ) >> 0x20) ^ _LC10._4_4_, ( uint ) * (undefined8*)( pcVar13 + 0x20 ) ^ (uint)_LC10);
            pfVar7 = *(float**)( this + 0x58 );
            joined_r0x00101909:auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar10;
            _local_58 = auVar6 << 0x40;
            if (pfVar7 == pfVar17) goto LAB_001011ee;
            pfVar17[0] = 0.0;
            pfVar17[1] = 0.0;
            *(ulong*)( pfVar17 + 2 ) = uVar10;
            LAB_00101564:pfVar17 = pfVar17 + 4;
            *(float**)( this + 0x50 ) = pfVar17;
            uVar10 = (long)pfVar17 - (long)pfVar14 >> 4;
         }
 else if (fVar22 <= fVar34) {
            if (( *pcVar15 != '\0' ) && ( 0.0 <= *(float*)( pcVar15 + 0x24 ) * fVar21 - *(float*)( pcVar15 + 0x20 ) * fVar26 )) {
               uVar10 = CONCAT44(( _LC4 / SQRT(fVar22) ) * fVar21, ( _LC4 / SQRT(fVar22) ) * (float)( (uint)fVar26 ^ __LC1 ));
               pfVar7 = *(float**)( this + 0x58 );
               goto joined_r0x00101909;
            }

         }
 else {
            if (fVar34 < fVar37) goto LAB_00100ff1;
            if (*pcVar15 != '\0') {
               fVar34 = fVar22 - fVar34;
               if (fVar34 < 0.0) {
                  fVar34 = sqrtf(fVar34);
               }
 else {
                  fVar34 = SQRT(fVar34);
               }

               fVar22 = _LC4 / fVar22;
               fVar37 = ( fVar21 * fVar2 + fVar26 * fVar34 ) * fVar22;
               fVar25 = ( fVar34 * fVar21 - fVar26 * fVar2 ) * fVar22;
               fVar19 = ( fVar26 * fVar34 - fVar21 * fVar2 ) * fVar22;
               fVar22 = ( fVar34 * fVar21 + fVar26 * fVar2 ) * fVar22;
               pcVar13 = pcVar15;
               fVar31 = fVar26;
               goto LAB_00100c46;
            }

         }

         LAB_00100d1b:uVar16 = uVar16 + 1;
      }
 while ( uVar16 < ( ulong )(*(long*)( this + 0x38 ) - lVar8 >> 4) );
   }

   lVar8 = *(long*)this;
   uVar16 = 0;
   fVar39 = _LC4 / *(float*)( this + 0x74 );
   if (*(long*)( this + 8 ) != lVar8) {
      do {
         fVar2 = *(float*)( this + 0x7c );
         auVar3._8_8_ = 0;
         auVar3._0_8_ = uStack_50;
         _local_58 = auVar3 << 0x40;
         fVar21 = *(float*)( this + 0x80 );
         lVar8 = *(long*)( lVar8 + 8 + uVar16 * 0x10 );
         fVar34 = *(float*)( lVar8 + 100 ) - *(float*)( this + 100 );
         fVar22 = *(float*)( lVar8 + 0x60 ) - *(float*)( this + 0x60 );
         fVar26 = *(float*)( this + 0x70 ) + *(float*)( lVar8 + 0x70 );
         fVar31 = fVar21 - *(float*)( lVar8 + 0x80 );
         fVar19 = fVar2 - *(float*)( lVar8 + 0x7c );
         fVar24 = fVar26 * fVar26;
         fVar33 = fVar22 * fVar22 + fVar34 * fVar34;
         if (fVar24 < fVar33) {
            fVar25 = fVar31 - fVar39 * fVar34;
            fVar38 = fVar19 - fVar39 * fVar22;
            fVar37 = fVar22 * fVar38 + fVar34 * fVar25;
            if (( 0.0 <= fVar37 ) || ( fVar35 = fVar38 * fVar38 + fVar25 * fVar25 ),fVar37 * fVar37 <= fVar24 * fVar35) {
               fVar24 = fVar33 - fVar24;
               if (fVar24 < 0.0) {
                  fVar24 = sqrtf(fVar24);
               }
 else {
                  fVar24 = SQRT(fVar24);
                  local_58 = (undefined1[8])0;
               }

               if (fVar25 * fVar22 - fVar34 * fVar38 <= 0.0) {
                  fVar37 = (float)( ( uint )(fVar24 * fVar22 + fVar26 * fVar34) ^ __LC1 );
                  fVar24 = (float)( ( uint )(fVar34 * fVar24 - fVar22 * fVar26) ^ __LC1 );
               }
 else {
                  fVar37 = fVar24 * fVar22 - fVar26 * fVar34;
                  fVar24 = fVar26 * fVar22 + fVar34 * fVar24;
               }

               fVar37 = fVar37 * ( _LC4 / fVar33 );
               fVar24 = fVar24 * ( _LC4 / fVar33 );
               uStack_50._0_4_ = fVar37;
               uStack_50._4_4_ = fVar24;
               fVar26 = fVar31 * fVar24 + fVar19 * fVar37;
               fVar24 = fVar24 * fVar26 - fVar31;
               fVar35 = fVar26 * fVar37 - fVar19;
            }
 else {
               fVar35 = SQRT(fVar35);
               fVar31 = _LC4 / fVar35;
               fVar35 = fVar26 * fVar39 - fVar35;
               fVar38 = fVar38 * fVar31;
               fVar25 = fVar25 * fVar31;
               fVar24 = fVar25 * fVar35;
               fVar35 = fVar35 * fVar38;
               uStack_50 = CONCAT44((uint)fVar38 ^ __LC1, fVar25);
            }

         }
 else {
            fVar33 = _LC4 / *(float*)( param_1 + 0x48 );
            fVar31 = fVar31 - fVar34 * fVar33;
            fVar19 = fVar19 - fVar22 * fVar33;
            fVar35 = SQRT(fVar19 * fVar19 + fVar31 * fVar31);
            fVar24 = _LC4 / fVar35;
            fVar35 = fVar26 * fVar33 - fVar35;
            fVar19 = fVar19 * fVar24;
            fVar31 = fVar31 * fVar24;
            fVar24 = fVar31 * fVar35;
            uStack_50 = CONCAT44((uint)fVar19 ^ __LC1, fVar31);
            fVar35 = fVar35 * fVar19;
         }

         pfVar14 = *(float**)( this + 0x50 );
         local_58._4_4_ = fVar24 * _LC7 + fVar21;
         local_58._0_4_ = fVar35 * _LC7 + fVar2;
         auVar4 = _local_58;
         if (pfVar14 == *(float**)( this + 0x58 )) {
            std::vector<RVO2D::Line,std::allocator<RVO2D::Line>>::_M_realloc_insert<RVO2D::Line_const&>(pvVar1, pfVar14, local_58);
         }
 else {
            *pfVar14 = (float)local_58._0_4_;
            pfVar14[1] = (float)local_58._4_4_;
            pfVar14[2] = (float)uStack_50;
            pfVar14[3] = uStack_50._4_4_;
            *(float**)( this + 0x50 ) = pfVar14 + 4;
            _local_58 = auVar4;
         }

         lVar8 = *(long*)this;
         uVar16 = uVar16 + 1;
      }
 while ( uVar16 < ( ulong )(*(long*)( this + 8 ) - lVar8 >> 4) );
   }

   fVar39 = *(float*)( this + 0x20 );
   uVar16 = linearProgram2((vector*)pvVar1, fVar39, (Vector2*)( this + 0x68 ), false, (Vector2*)( this + 0x28 ));
   if (uVar16 < ( ulong )(*(long*)( this + 0x50 ) - *(long*)( this + 0x48 ) >> 4)) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         linearProgram3((vector*)pvVar1, uVar10, uVar16, fVar39, (Vector2*)( this + 0x28 ));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RVO2D::Agent2D::insertAgentNeighbor(RVO2D::Agent2D const*, float&) */void RVO2D::Agent2D::insertAgentNeighbor(Agent2D *this, Agent2D *param_1, float *param_2) {
   undefined8 *puVar1;
   float *pfVar2;
   float *pfVar3;
   long lVar4;
   ulong uVar5;
   float *pfVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   float fVar9;
   float local_38;
   undefined4 uStack_34;
   Agent2D *pAStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this != param_1 ) && ( ( *(uint*)( this + 0x90 ) & *(uint*)( param_1 + 0x8c ) ) != 0 )) {
      if (( *(float*)( this + 0x88 ) <= *(float*)( param_1 + 0x84 ) + *(float*)( param_1 + 0x88 ) ) && ( ( ( *(float*)( param_1 + 0x88 ) <= *(float*)( this + 0x88 ) + *(float*)( this + 0x84 ) && ( *(float*)( this + 0x94 ) < *(float*)( param_1 + 0x94 ) || *(float*)( this + 0x94 ) == *(float*)( param_1 + 0x94 ) ) ) && ( fVar9 = ( *(float*)( this + 100 ) - *(float*)( param_1 + 100 ) ) * ( *(float*)( this + 100 ) - *(float*)( param_1 + 100 ) ) + ( *(float*)( this + 0x60 ) - *(float*)( param_1 + 0x60 ) ) * ( *(float*)( this + 0x60 ) - *(float*)( param_1 + 0x60 ) ) ),fVar9 < *param_2 ) )) {
         puVar1 = *(undefined8**)( this + 8 );
         pfVar6 = *(float**)this;
         uVar7 = *(ulong*)( this + 0x18 );
         uVar5 = (long)puVar1 - (long)pfVar6 >> 4;
         puVar8 = puVar1;
         if (uVar5 < uVar7) {
            local_38 = fVar9;
            pAStack_30 = param_1;
            if (puVar1 == *(undefined8**)( this + 0x10 )) {
               std::vector<std::pair<float,RVO2D::Agent2D_const*>,std::allocator<std::pair<float,RVO2D::Agent2D_const*>>>::_M_realloc_insert<std::pair<float,RVO2D::Agent2D_const*>>((vector<std::pair<float,RVO2D::Agent2D_const*>,std::allocator<std::pair<float,RVO2D::Agent2D_const*>>>*)this, puVar1, &local_38);
               puVar8 = *(undefined8**)( this + 8 );
               pfVar6 = *(float**)this;
               uVar7 = *(ulong*)( this + 0x18 );
            }
 else {
               puVar8 = puVar1 + 2;
               *puVar1 = CONCAT44(uStack_34, fVar9);
               puVar1[1] = param_1;
               *(undefined8**)( this + 8 ) = puVar8;
            }

            uVar5 = (long)puVar8 - (long)pfVar6 >> 4;
         }

         lVar4 = uVar5 - 1;
         pfVar3 = pfVar6;
         if (lVar4 != 0) {
            pfVar2 = pfVar6 + lVar4 * 4;
            do {
               lVar4 = lVar4 + -1;
               pfVar3 = pfVar2;
               if (pfVar2[-4] <= fVar9) break;
               *pfVar2 = pfVar2[-4];
               *(undefined8*)( pfVar2 + 2 ) = *(undefined8*)( pfVar2 + -2 );
               pfVar2 = pfVar2 + -4;
               pfVar3 = pfVar6;
            }
 while ( lVar4 != 0 );
         }

         *(Agent2D**)( pfVar3 + 2 ) = param_1;
         *pfVar3 = fVar9;
         if (uVar7 == uVar5) {
            *param_2 = *(float*)( puVar8 + -2 );
         }

      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RVO2D::Agent2D::insertObstacleNeighbor(RVO2D::Obstacle2D const*, float) */void RVO2D::Agent2D::insertObstacleNeighbor(Agent2D *this, Obstacle2D *param_1, float param_2) {
   float fVar1;
   undefined8 *puVar2;
   float *pfVar3;
   float *pfVar4;
   float *pfVar5;
   long lVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float local_38;
   undefined4 uStack_34;
   Obstacle2D *pOStack_30;
   long local_20;
   lVar6 = *(long*)( param_1 + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(uint*)( this + 0x90 ) & *(uint*)( lVar6 + 0x30 ) ) != 0) {
      if (( *(float*)( this + 0x88 ) <= *(float*)( param_1 + 0x28 ) + *(float*)( param_1 + 0x2c ) ) && ( *(float*)( param_1 + 0x2c ) <= *(float*)( this + 0x88 ) + *(float*)( this + 0x84 ) )) {
         fVar11 = *(float*)( param_1 + 0x10 );
         fVar1 = *(float*)( param_1 + 0x14 );
         fVar12 = *(float*)( this + 0x60 );
         fVar10 = *(float*)( this + 100 );
         fVar13 = *(float*)( lVar6 + 0x14 ) - fVar1;
         fVar14 = *(float*)( lVar6 + 0x10 ) - fVar11;
         fVar15 = fVar10 - fVar1;
         fVar8 = fVar12 - fVar11;
         fVar9 = ( fVar14 * fVar8 + fVar13 * fVar15 ) / ( fVar14 * fVar14 + fVar13 * fVar13 );
         if (fVar9 < 0.0) {
            fVar11 = fVar8 * fVar8 + fVar15 * fVar15;
         }
 else if (fVar9 <= _LC4) {
            fVar10 = fVar10 - ( fVar13 * fVar9 + fVar1 );
            fVar12 = fVar12 - ( fVar14 * fVar9 + fVar11 );
            fVar11 = fVar10 * fVar10 + fVar12 * fVar12;
         }
 else {
            fVar10 = fVar10 - *(float*)( lVar6 + 0x14 );
            fVar12 = fVar12 - *(float*)( lVar6 + 0x10 );
            fVar11 = fVar10 * fVar10 + fVar12 * fVar12;
         }

         if (fVar11 < param_2) {
            puVar2 = *(undefined8**)( this + 0x38 );
            local_38 = fVar11;
            pOStack_30 = param_1;
            if (puVar2 == *(undefined8**)( this + 0x40 )) {
               std::vector<std::pair<float,RVO2D::Obstacle2D_const*>,std::allocator<std::pair<float,RVO2D::Obstacle2D_const*>>>::_M_realloc_insert<std::pair<float,RVO2D::Obstacle2D_const*>>((vector<std::pair<float,RVO2D::Obstacle2D_const*>,std::allocator<std::pair<float,RVO2D::Obstacle2D_const*>>>*)( this + 0x30 ), puVar2, &local_38);
               puVar7 = *(undefined8**)( this + 0x38 );
            }
 else {
               puVar7 = puVar2 + 2;
               *puVar2 = CONCAT44(uStack_34, fVar11);
               puVar2[1] = param_1;
               *(undefined8**)( this + 0x38 ) = puVar7;
            }

            pfVar3 = *(float**)( this + 0x30 );
            lVar6 = ( (long)puVar7 - (long)pfVar3 >> 4 ) + -1;
            pfVar5 = pfVar3;
            if (lVar6 != 0) {
               pfVar4 = (float*)( (long)pfVar3 + ( (long)puVar7 - (long)pfVar3 ) + -0x10 );
               do {
                  lVar6 = lVar6 + -1;
                  pfVar5 = pfVar4;
                  if (pfVar4[-4] <= fVar11) break;
                  *pfVar4 = pfVar4[-4];
                  *(undefined8*)( pfVar4 + 2 ) = *(undefined8*)( pfVar4 + -2 );
                  pfVar4 = pfVar4 + -4;
                  pfVar5 = pfVar3;
               }
 while ( lVar6 != 0 );
            }

            *(Obstacle2D**)( pfVar5 + 2 ) = param_1;
            *pfVar5 = fVar11;
         }

      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void std::vector<RVO2D::Line, std::allocator<RVO2D::Line> >::_M_realloc_insert<RVO2D::Line
   const&>(__gnu_cxx::__normal_iterator<RVO2D::Line*, std::vector<RVO2D::Line,
   std::allocator<RVO2D::Line> > >, RVO2D::Line const&) */void std::vector<RVO2D::Line,std::allocator<RVO2D::Line>>::_M_realloc_insert<RVO2D::Line_const&>(vector<RVO2D::Line,std::allocator<RVO2D::Line>> *this, void *param_2, undefined8 *param_3) {
   void *pvVar1;
   void *pvVar2;
   undefined8 uVar3;
   ulong uVar4;
   long lVar5;
   void *pvVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   pvVar1 = *(void**)( this + 8 );
   pvVar2 = *(void**)this;
   uVar4 = (long)pvVar1 - (long)pvVar2 >> 4;
   if (uVar4 == 0x7ffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar9 = (undefined8*)( (long)param_2 - (long)pvVar2 );
   if (pvVar2 == pvVar1) {
      if (0xfffffffffffffffe < uVar4) goto LAB_00102128;
      uVar8 = 0x7ffffffffffffff;
      if (uVar4 + 1 < 0x800000000000000) {
         uVar8 = uVar4 + 1;
      }

      uVar8 = uVar8 << 4;
      LAB_00102132:pvVar6 = operator_new(uVar8);
      lVar10 = uVar8 + (long)pvVar6;
      lVar7 = (long)pvVar6 + 0x10;
      uVar3 = param_3[1];
      *(undefined8*)( (long)pvVar6 + (long)puVar9 ) = *param_3;
      ( (undefined8*)( (long)pvVar6 + (long)puVar9 ) )[1] = uVar3;
      if (param_2 != pvVar2) goto LAB_0010207a;
      LAB_00102167:if (param_2 != pvVar1) goto LAB_001020b7;
      LAB_001020eb:if (pvVar2 == (void*)0x0) goto LAB_00102107;
   }
 else {
      uVar8 = uVar4 * 2;
      if (uVar8 < uVar4) {
         LAB_00102128:uVar8 = 0x7ffffffffffffff0;
         goto LAB_00102132;
      }

      if (uVar8 != 0) {
         if (0x7ffffffffffffff < uVar8) {
            uVar8 = 0x7ffffffffffffff;
         }

         uVar8 = uVar8 << 4;
         goto LAB_00102132;
      }

      uVar3 = param_3[1];
      pvVar6 = (void*)0x0;
      lVar7 = 0x10;
      lVar10 = 0;
      *puVar9 = *param_3;
      puVar9[1] = uVar3;
      if (param_2 == pvVar2) goto LAB_00102167;
      LAB_0010207a:lVar7 = 0;
      uVar4 = 0;
      do {
         uVar3 = ( (undefined8*)( (long)pvVar2 + lVar7 ) )[1];
         uVar4 = uVar4 + 1;
         *(undefined8*)( (long)pvVar6 + lVar7 ) = *(undefined8*)( (long)pvVar2 + lVar7 );
         ( (undefined8*)( (long)pvVar6 + lVar7 ) )[1] = uVar3;
         lVar7 = lVar7 + 0x10;
      }
 while ( uVar4 < ( ( ulong )((long)param_2 + ( -0x10 - (long)pvVar2 )) >> 4 ) + 1 );
      lVar7 = (long)param_2 + (long)pvVar6 + ( 0x10 - (long)pvVar2 );
      if (param_2 != pvVar1) {
         LAB_001020b7:uVar4 = 0;
         lVar5 = 0;
         do {
            uVar3 = ( (undefined8*)( (long)param_2 + lVar5 ) )[1];
            uVar4 = uVar4 + 1;
            *(undefined8*)( lVar7 + lVar5 ) = *(undefined8*)( (long)param_2 + lVar5 );
            ( (undefined8*)( lVar7 + lVar5 ) )[1] = uVar3;
            lVar5 = lVar5 + 0x10;
         }
 while ( uVar4 < ( ( ulong )((long)pvVar1 + ( -0x10 - (long)param_2 )) >> 4 ) + 1 );
         lVar7 = (long)pvVar1 + ( lVar7 - (long)param_2 );
         goto LAB_001020eb;
      }

   }

   operator_delete(pvVar2, *(long*)( this + 0x10 ) - (long)pvVar2);
   LAB_00102107:*(void**)this = pvVar6;
   *(long*)( this + 8 ) = lVar7;
   *(long*)( this + 0x10 ) = lVar10;
   return;
}
/* void std::vector<std::pair<float, RVO2D::Agent2D const*>, std::allocator<std::pair<float,
   RVO2D::Agent2D const*> > >::_M_realloc_insert<std::pair<float, RVO2D::Agent2D const*>
   >(__gnu_cxx::__normal_iterator<std::pair<float, RVO2D::Agent2D const*>*,
   std::vector<std::pair<float, RVO2D::Agent2D const*>, std::allocator<std::pair<float,
   RVO2D::Agent2D const*> > > >, std::pair<float, RVO2D::Agent2D const*>&&) */void std::vector<std::pair<float,RVO2D::Agent2D_const*>,std::allocator<std::pair<float,RVO2D::Agent2D_const*>>>::_M_realloc_insert<std::pair<float,RVO2D::Agent2D_const*>>(vector<std::pair<float,RVO2D::Agent2D_const*>,std::allocator<std::pair<float,RVO2D::Agent2D_const*>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   long lVar11;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   uVar5 = (long)puVar1 - (long)puVar2 >> 4;
   if (uVar5 == 0x7ffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00102308;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_00102312:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_0010227a:puVar8 = puVar6;
         puVar9 = puVar2;
         do {
            puVar10 = puVar8;
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar8 = puVar10 + 2;
         }
 while ( puVar10 + 2 != (undefined8*)( ( (long)param_2 - (long)puVar2 ) + (long)puVar6 ) );
         puVar10 = puVar10 + 4;
      }

      puVar8 = puVar10;
      if (param_2 == puVar1) goto LAB_001022cc;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00102308:uVar7 = 0x7ffffffffffffff0;
         goto LAB_00102312;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_00102312;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)&DAT_00000010;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_0010227a;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_001022cc:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* void std::vector<std::pair<float, RVO2D::Obstacle2D const*>, std::allocator<std::pair<float,
   RVO2D::Obstacle2D const*> > >::_M_realloc_insert<std::pair<float, RVO2D::Obstacle2D const*>
   >(__gnu_cxx::__normal_iterator<std::pair<float, RVO2D::Obstacle2D const*>*,
   std::vector<std::pair<float, RVO2D::Obstacle2D const*>, std::allocator<std::pair<float,
   RVO2D::Obstacle2D const*> > > >, std::pair<float, RVO2D::Obstacle2D const*>&&) */void std::vector<std::pair<float,RVO2D::Obstacle2D_const*>,std::allocator<std::pair<float,RVO2D::Obstacle2D_const*>>>::_M_realloc_insert<std::pair<float,RVO2D::Obstacle2D_const*>>(vector<std::pair<float,RVO2D::Obstacle2D_const*>,std::allocator<std::pair<float,RVO2D::Obstacle2D_const*>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   long lVar11;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   uVar5 = (long)puVar1 - (long)puVar2 >> 4;
   if (uVar5 == 0x7ffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00102498;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_001024a2:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_0010240a:puVar8 = puVar6;
         puVar9 = puVar2;
         do {
            puVar10 = puVar8;
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar8 = puVar10 + 2;
         }
 while ( puVar10 + 2 != (undefined8*)( ( (long)param_2 - (long)puVar2 ) + (long)puVar6 ) );
         puVar10 = puVar10 + 4;
      }

      puVar8 = puVar10;
      if (param_2 == puVar1) goto LAB_0010245c;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00102498:uVar7 = 0x7ffffffffffffff0;
         goto LAB_001024a2;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_001024a2;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)&DAT_00000010;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_0010240a;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_0010245c:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}

