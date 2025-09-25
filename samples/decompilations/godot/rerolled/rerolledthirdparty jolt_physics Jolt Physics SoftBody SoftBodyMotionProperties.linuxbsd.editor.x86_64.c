/* ~Collector() */void Collector::~Collector(Collector *this) {
   return;
}
/* ~Collector() */void Collector::~Collector(Collector *this) {
   operator_delete(this, 0xb0);
   return;
}
/* JPH::SoftBodyMotionProperties::ApplySkinConstraints(JPH::SoftBodyUpdateContext const&, unsigned
   int, unsigned int) [clone .part.0] */void JPH::SoftBodyMotionProperties::ApplySkinConstraints(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, uint param_2, uint param_3) {
   uint *puVar1;
   float fVar2;
   long lVar3;
   long lVar4;
   float fVar5;
   float *pfVar6;
   long lVar7;
   uint *puVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
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
   fVar5 = _LC0;
   if (this[0x1bf] == (SoftBodyMotionProperties)0x0) {
      fVar12 = 0.0;
      fVar11 = _LC2;
   }
 else {
      fVar11 = (float)*(uint*)( param_1 + 0x9c ) / (float)*(uint*)( this + 0x1b0 );
      fVar12 = _LC2 - fVar11;
   }

   lVar3 = *(long*)( this + 0x118 );
   lVar4 = *(long*)( this + 0x160 );
   puVar8 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x90 ) + (ulong)param_2 * 0x34 );
   puVar1 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x90 ) + (ulong)param_3 * 0x34 );
   if (puVar8 < puVar1) {
      fVar2 = *(float*)( this + 0x1b8 );
      do {
         while (true) {
            fVar9 = (float)puVar8[9] * fVar2;
            pfVar6 = (float*)( ( ulong ) * puVar8 * 0x30 + lVar4 );
            lVar7 = ( ulong ) * puVar8 * 0x50 + lVar3;
            fVar13 = pfVar6[4] * fVar11 + *pfVar6 * fVar12;
            fVar14 = pfVar6[5] * fVar11 + pfVar6[1] * fVar12;
            fVar15 = pfVar6[6] * fVar11 + pfVar6[2] * fVar12;
            fVar16 = pfVar6[7] * fVar11 + pfVar6[3] * fVar12;
            if (0.0 < fVar9) break;
            puVar8 = puVar8 + 0xd;
            *(float*)( lVar7 + 0x10 ) = fVar13;
            *(float*)( lVar7 + 0x14 ) = fVar14;
            *(float*)( lVar7 + 0x18 ) = fVar15;
            *(float*)( lVar7 + 0x1c ) = fVar16;
            if (puVar1 <= puVar8) {
               return;
            }

         }
;
         if ((float)puVar8[10] < fVar9) {
            fVar10 = (float)puVar8[0xb];
            fVar17 = (float)puVar8[10] + fVar10;
            fVar20 = fVar13 - fVar17 * pfVar6[8];
            fVar21 = fVar14 - fVar17 * pfVar6[9];
            fVar22 = fVar15 - fVar17 * pfVar6[10];
            fVar23 = fVar16 - fVar17 * pfVar6[0xb];
            fVar18 = *(float*)( lVar7 + 0x10 ) - fVar20;
            fVar19 = *(float*)( lVar7 + 0x14 ) - fVar21;
            fVar24 = *(float*)( lVar7 + 0x18 ) - fVar22;
            fVar17 = fVar24 * fVar24 + fVar18 * fVar18 + 0.0 + fVar19 * fVar19;
            if (fVar17 < fVar10 * fVar10) {
               fVar17 = SQRT(fVar17);
               if (fVar17 <= 0.0) {
                  fVar18 = fVar10 * pfVar6[8];
                  fVar19 = fVar10 * pfVar6[9];
                  fVar24 = fVar10 * pfVar6[10];
                  fVar10 = fVar10 * pfVar6[0xb];
               }
 else {
                  fVar10 = fVar10 / fVar17;
                  fVar18 = fVar10 * fVar18;
                  fVar19 = fVar10 * fVar19;
                  fVar24 = fVar10 * fVar24;
                  fVar10 = fVar10 * ( *(float*)( lVar7 + 0x1c ) - fVar23 );
               }

               *(float*)( lVar7 + 0x10 ) = fVar20 + fVar18;
               *(float*)( lVar7 + 0x14 ) = fVar21 + fVar19;
               *(float*)( lVar7 + 0x18 ) = fVar22 + fVar24;
               *(float*)( lVar7 + 0x1c ) = fVar23 + fVar10;
            }

         }

         if (fVar9 < fVar5) {
            fVar17 = *(float*)( lVar7 + 0x10 ) - fVar13;
            fVar18 = *(float*)( lVar7 + 0x14 ) - fVar14;
            fVar19 = *(float*)( lVar7 + 0x18 ) - fVar15;
            fVar10 = fVar19 * fVar19 + fVar17 * fVar17 + 0.0 + fVar18 * fVar18;
            if (fVar9 * fVar9 < fVar10) {
               fVar9 = SQRT(( fVar9 * fVar9 ) / fVar10);
               *(float*)( lVar7 + 0x10 ) = fVar9 * fVar17 + fVar13;
               *(float*)( lVar7 + 0x14 ) = fVar9 * fVar18 + fVar14;
               *(float*)( lVar7 + 0x18 ) = fVar9 * fVar19 + fVar15;
               *(float*)( lVar7 + 0x1c ) = fVar9 * ( *(float*)( lVar7 + 0x1c ) - fVar16 ) + fVar16;
            }

         }

         puVar8 = puVar8 + 0xd;
      }
 while ( puVar8 < puVar1 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DetermineCollidingShapes(JPH::SoftBodyUpdateContext const&,
   JPH::PhysicsSystem const&, JPH::BodyLockInterface const&)::Collector::AddHit(JPH::BodyID
   const&)::LeafShapeCollector::AddHit(JPH::TransformedShape const&) */void LeafShapeCollector::AddHit(JPH::TransformedShape_const__ (long param_1, undefined8 *param_2)) {
   float fVar1;
   undefined8 uVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   float fVar18;
   ulong uVar19;
   float *pfVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   undefined8 *puVar23;
   float fVar24;
   float fVar25;
   long lVar26;
   undefined8 *puVar27;
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   fVar29 = (float)param_2[2];
   fVar24 = (float)param_2[3];
   uVar2 = *param_2;
   fVar18 = (float)( (ulong)param_2[2] >> 0x20 );
   fVar28 = fVar29 + fVar29;
   fVar6 = *(float*)( param_2 + 5 );
   fVar7 = *(float*)( (long)param_2 + 0x2c );
   fVar8 = *(float*)( param_2 + 6 );
   fVar9 = *(float*)( (long)param_2 + 0x34 );
   fVar32 = fVar18 + fVar18;
   fVar25 = (float)( (ulong)param_2[3] >> 0x20 );
   lVar26 = *(long*)( param_1 + 0x18 );
   fVar1 = *(float*)( param_2 + 1 );
   uVar19 = lVar26 + 1;
   fVar35 = _LC2 - fVar29 * fVar28;
   fVar34 = fVar24 * ( fVar24 + fVar24 );
   fVar31 = fVar25 * ( fVar24 + fVar24 );
   auVar30._4_4_ = ( _LC2 - fVar34 ) - fVar29 * fVar28;
   auVar30._0_4_ = fVar18 * fVar28 - fVar31;
   auVar30._8_4_ = fVar28 * fVar25 + fVar24 * fVar32;
   auVar30._12_4_ = 0;
   fVar29 = _LC2 - fVar18 * fVar32;
   if (*(ulong*)( param_1 + 0x20 ) < uVar19) {
      uVar5 = *(ulong*)( param_1 + 0x20 ) * 2;
      if (uVar19 <= uVar5) {
         uVar19 = uVar5;
      }

      puVar21 = (undefined8*)( *Allocate )(uVar19 * 0x60);
      puVar27 = *(undefined8**)( param_1 + 0x28 );
      if (puVar27 != (undefined8*)0x0) {
         lVar26 = *(long*)( param_1 + 0x18 );
         if (puVar21 < puVar27) {
            for (puVar22 = puVar21; puVar22 < puVar21 + lVar26 * 0xc; puVar22 = puVar22 + 0xc) {
               uVar12 = puVar27[1];
               uVar4 = puVar27[10];
               uVar10 = puVar27[4];
               uVar11 = puVar27[5];
               uVar13 = puVar27[6];
               uVar14 = puVar27[7];
               *puVar22 = *puVar27;
               puVar22[1] = uVar12;
               uVar12 = puVar27[8];
               uVar15 = puVar27[9];
               uVar16 = puVar27[2];
               uVar17 = puVar27[3];
               puVar22[4] = uVar10;
               puVar22[5] = uVar11;
               puVar22[2] = uVar16;
               puVar22[3] = uVar17;
               puVar22[6] = uVar13;
               puVar22[7] = uVar14;
               puVar22[8] = uVar12;
               puVar22[9] = uVar15;
               puVar22[10] = uVar4;
               puVar27 = puVar27 + 0xc;
            }

         }
 else {
            puVar22 = puVar21 + lVar26 * 0xc + -0xc;
            puVar27 = puVar27 + lVar26 * 0xc + -0xc;
            if (!CARRY8(lVar26 * 0x60 - 0x60,(ulong)puVar21)) {
               do {
                  uVar12 = puVar27[1];
                  uVar4 = puVar27[10];
                  puVar23 = puVar22 + -0xc;
                  uVar10 = puVar27[2];
                  uVar11 = puVar27[3];
                  uVar13 = puVar27[4];
                  uVar14 = puVar27[5];
                  *puVar22 = *puVar27;
                  puVar22[1] = uVar12;
                  uVar12 = puVar27[6];
                  uVar15 = puVar27[7];
                  uVar16 = puVar27[8];
                  uVar17 = puVar27[9];
                  puVar22[2] = uVar10;
                  puVar22[3] = uVar11;
                  puVar22[4] = uVar13;
                  puVar22[5] = uVar14;
                  puVar22[6] = uVar12;
                  puVar22[7] = uVar15;
                  puVar22[8] = uVar16;
                  puVar22[9] = uVar17;
                  puVar22[10] = uVar4;
                  puVar22 = puVar23;
                  puVar27 = puVar27 + -0xc;
               }
 while ( puVar21 <= puVar23 );
            }

         }

         ( *Free )();
      }

      fVar33 = _LC2;
      lVar26 = *(long*)( param_1 + 0x18 );
      *(undefined8**)( param_1 + 0x28 ) = puVar21;
      *(ulong*)( param_1 + 0x20 ) = uVar19;
      uVar19 = lVar26 + 1;
   }
 else {
      puVar21 = *(undefined8**)( param_1 + 0x28 );
      fVar33 = _LC2;
   }

   *(ulong*)( param_1 + 0x18 ) = uVar19;
   lVar3 = param_2[4];
   pfVar20 = (float*)( puVar21 + lVar26 * 0xc );
   *(undefined8*)( pfVar20 + 0xc ) = uVar2;
   *(long*)( pfVar20 + 0x14 ) = lVar3;
   *pfVar20 = fVar29 - fVar34;
   pfVar20[1] = fVar18 * fVar28 + fVar31;
   pfVar20[2] = fVar24 * fVar28 - fVar32 * fVar25;
   pfVar20[3] = 0.0;
   *(undefined1(*) [16])( pfVar20 + 4 ) = auVar30;
   pfVar20[8] = fVar24 * fVar28 + fVar32 * fVar25;
   pfVar20[9] = fVar24 * fVar32 - fVar28 * fVar25;
   pfVar20[10] = fVar35 - fVar18 * fVar32;
   pfVar20[0xb] = 0.0;
   pfVar20[0xe] = fVar1;
   pfVar20[0xf] = fVar33;
   pfVar20[0x10] = fVar6;
   pfVar20[0x11] = fVar7;
   pfVar20[0x12] = fVar8;
   pfVar20[0x13] = fVar9;
   if (lVar3 != 0) {
      LOCK();
      *(int*)( lVar3 + 8 ) = *(int*)( lVar3 + 8 ) + 1;
      UNLOCK();
   }

   return;
}
/* ~LeafShapeCollector() */void LeafShapeCollector::~LeafShapeCollector(LeafShapeCollector *this) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   ulong uVar4;
   uVar3 = *(ulong*)( this + 0x28 );
   *(undefined***)this = &PTR__LeafShapeCollector_00107770;
   if (uVar3 == 0) {
      return;
   }

   if (( *(long*)( this + 0x18 ) != 0 ) && ( uVar4 = uVar3 < uVar4 )) {
      do {
         while (plVar2 = *(long**)( uVar3 + 0x50 ),plVar2 == (long*)0x0) {
            LAB_001005b0:uVar3 = uVar3 + 0x60;
            if (uVar4 <= uVar3) goto LAB_001005e0;
         }
;
         LOCK();
         plVar1 = plVar2 + 1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if ((int)*plVar1 != 0) goto LAB_001005b0;
         uVar3 = uVar3 + 0x60;
         ( **(code**)( *plVar2 + 8 ) )();
      }
 while ( uVar3 < uVar4 );
      LAB_001005e0:uVar3 = *(ulong*)( this + 0x28 );
   }

   *(undefined8*)( this + 0x18 ) = 0;
   /* WARNING: Could not recover jumptable at 0x001005f3. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )(uVar3);
   return;
}
/* ~LeafShapeCollector() */void LeafShapeCollector::~LeafShapeCollector(LeafShapeCollector *this) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   ulong uVar4;
   uVar3 = *(ulong*)( this + 0x28 );
   *(undefined***)this = &PTR__LeafShapeCollector_00107770;
   if (uVar3 != 0) {
      if (( *(long*)( this + 0x18 ) != 0 ) && ( uVar4 = uVar3 < uVar4 )) {
         do {
            while (plVar2 = *(long**)( uVar3 + 0x50 ),plVar2 == (long*)0x0) {
               LAB_00100650:uVar3 = uVar3 + 0x60;
               if (uVar4 <= uVar3) goto LAB_00100680;
            }
;
            LOCK();
            plVar1 = plVar2 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00100650;
            uVar3 = uVar3 + 0x60;
            ( **(code**)( *plVar2 + 8 ) )();
         }
 while ( uVar3 < uVar4 );
         LAB_00100680:uVar3 = *(ulong*)( this + 0x28 );
      }

      *(undefined8*)( this + 0x18 ) = 0;
      ( *Free )(uVar3);
   }

   operator_delete(this, 0x30);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::CalculateMassAndInertia() */void JPH::SoftBodyMotionProperties::CalculateMassAndInertia(SoftBodyMotionProperties *this) {
   float fVar1;
   float fVar2;
   undefined8 uVar3;
   uint uVar4;
   long lVar5;
   float *pfVar6;
   uint uVar7;
   float *pfVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   float *pfVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   undefined8 local_98;
   undefined8 uStack_90;
   float local_88[4];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   lVar10 = *(long*)( this + 0x118 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88[0] = 0.0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   lVar11 = *(long*)( this + 0x108 ) * 0x50 + lVar10;
   local_48 = (undefined1[16])0x0;
   fVar14 = local_88[0];
   if (lVar11 != lVar10) {
      fVar14 = 0.0;
      do {
         if (*(float*)( lVar10 + 0x4c ) <= 0.0) {
            *(undefined4*)( this + 0x58 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
            uVar3 = CONCAT44(_LC2, _UNK_001077b8);
            *(undefined8*)( this + 0x30 ) = __LC3;
            *(undefined8*)( this + 0x38 ) = uVar3;
            goto LAB_00100831;
         }

         fVar13 = _LC2 / *(float*)( lVar10 + 0x4c );
         local_98 = *(undefined8*)( lVar10 + 0x10 );
         uStack_90 = *(undefined8*)( lVar10 + 0x18 );
         fVar14 = fVar14 + fVar13;
         pfVar6 = local_88;
         uVar7 = 0;
         do {
            uVar4 = uVar7 + 1;
            fVar1 = *(float*)( (long)&local_98 + ( ulong )(uVar4 % 3) * 4 );
            fVar2 = *(float*)( (long)&local_98 + ( ulong )(( uVar7 + 2 ) % 3) * 4 );
            pfVar6[4] = ( fVar2 * fVar2 + fVar1 * fVar1 ) * fVar13 + pfVar6[4];
            pfVar6 = pfVar6 + 5;
            uVar7 = uVar4;
         }
 while ( uVar4 != 3 );
         iVar9 = 0;
         pfVar6 = local_88;
         pfVar12 = (float*)&local_98;
         do {
            lVar5 = 0;
            pfVar8 = pfVar6;
            do {
               if (iVar9 != (int)lVar5) {
                  pfVar8[4] = pfVar8[4] - *pfVar12 * fVar13 * *(float*)( (long)&local_98 + lVar5 * 4 );
               }

               lVar5 = lVar5 + 1;
               pfVar8 = pfVar8 + 4;
            }
 while ( lVar5 != 3 );
            iVar9 = iVar9 + 1;
            pfVar6 = pfVar6 + 1;
            pfVar12 = pfVar12 + 1;
         }
 while ( iVar9 != 3 );
         lVar10 = lVar10 + 0x50;
      }
 while ( lVar10 != lVar11 );
   }

   local_88[0] = fVar14;
   JPH::MotionProperties::SetMassProperties(this, 0x3f, local_88);
   LAB_00100831:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JPH::SoftBodyMotionProperties::GetVolumeTimesSix() const */float JPH::SoftBodyMotionProperties::GetVolumeTimesSix(SoftBodyMotionProperties *this) {
   float *pfVar1;
   float *pfVar2;
   uint *puVar3;
   long lVar4;
   long lVar5;
   uint *puVar6;
   uint *puVar7;
   float fVar8;
   puVar3 = *(uint**)( *(long*)( this + 0x100 ) + 0x30 );
   if (puVar3 + *(long*)( *(long*)( this + 0x100 ) + 0x20 ) * 4 != puVar3) {
      fVar8 = 0.0;
      lVar4 = *(long*)( this + 0x118 );
      puVar6 = puVar3;
      do {
         puVar7 = puVar6 + 4;
         pfVar1 = (float*)( lVar4 + 0x10 + ( ulong ) * puVar6 * 0x50 );
         pfVar2 = (float*)( lVar4 + 0x10 + (ulong)puVar6[1] * 0x50 );
         lVar5 = (ulong)puVar6[2] * 0x50 + lVar4;
         fVar8 = fVar8 + ( pfVar2[1] * *pfVar1 - pfVar1[1] * *pfVar2 ) * *(float*)( lVar5 + 0x18 ) + ( *pfVar2 * pfVar1[2] - *pfVar1 * pfVar2[2] ) * *(float*)( lVar5 + 0x14 ) + ( pfVar2[2] * pfVar1[1] - pfVar1[2] * pfVar2[1] ) * *(float*)( lVar5 + 0x10 ) + 0.0;
         puVar6 = puVar7;
      }
 while ( puVar7 != puVar3 + *(long*)( *(long*)( this + 0x100 ) + 0x20 ) * 4 );
      return fVar8;
   }

   return 0.0;
}
/* JPH::SoftBodyMotionProperties::DetermineCollidingShapes(JPH::SoftBodyUpdateContext const&,
   JPH::PhysicsSystem const&, JPH::BodyLockInterface const&) */void JPH::SoftBodyMotionProperties::DetermineCollidingShapes(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, PhysicsSystem *param_2, BodyLockInterface *param_3) {
   SoftBodyUpdateContext *pSVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined **local_178;
   undefined8 local_170;
   undefined2 local_168;
   undefined **local_158;
   undefined8 local_150;
   undefined2 local_148;
   undefined **local_138;
   undefined4 local_130;
   long local_128;
   long lStack_120;
   float local_108[4];
   float local_f8[4];
   float local_e8;
   float fStack_e4;
   float fStack_e0;
   float fStack_dc;
   float local_d8;
   float fStack_d4;
   float fStack_d0;
   float fStack_cc;
   undefined **local_c8;
   undefined4 local_c0;
   undefined8 local_b8;
   SoftBodyUpdateContext *local_b0;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   float local_70;
   undefined4 local_6c;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   BodyLockInterface *local_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined ***local_30;
   SoftBodyMotionProperties *local_28;
   SoftBodyMotionProperties *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar9 = maxps(*(undefined1(*) [16])( this + 0x180 ), *(undefined1(*) [16])( this + 0x1a0 ));
   this[0x1bd] = (SoftBodyMotionProperties)0x0;
   auVar8 = minps(*(undefined1(*) [16])( this + 0x170 ), *(undefined1(*) [16])( this + 400 ));
   local_f8[3] = *(float*)( *(long*)( this + 0x100 ) + 0xe0 );
   lVar7 = 0;
   local_108[0] = auVar8._0_4_ - local_f8[3];
   local_108[1] = auVar8._4_4_ - local_f8[3];
   local_108[2] = auVar8._8_4_ - local_f8[3];
   local_108[3] = auVar8._12_4_ - local_f8[3];
   local_f8[0] = local_f8[3] + auVar9._0_4_;
   local_f8[1] = local_f8[3] + auVar9._4_4_;
   local_f8[2] = local_f8[3] + auVar9._8_4_;
   local_f8[3] = local_f8[3] + auVar9._12_4_;
   fVar4 = *(float*)( param_1 + 0x50 );
   fVar5 = *(float*)( param_1 + 0x54 );
   fVar6 = *(float*)( param_1 + 0x58 );
   fStack_cc = *(float*)( param_1 + 0x5c );
   local_d8 = fVar4;
   fStack_d4 = fVar5;
   fStack_d0 = fVar6;
   local_e8 = fVar4;
   fStack_e4 = fVar5;
   fStack_e0 = fVar6;
   fStack_dc = fStack_cc;
   do {
      fVar2 = *(float*)( (long)local_108 + lVar7 );
      fVar3 = *(float*)( (long)local_f8 + lVar7 );
      pSVar1 = param_1 + lVar7 * 4 + 0x20;
      auVar8._0_8_ = CONCAT44(fVar2 * *(float*)( pSVar1 + 4 ), fVar2 * *(float*)pSVar1);
      auVar8._8_4_ = fVar2 * *(float*)( pSVar1 + 8 );
      auVar8._12_4_ = fVar2 * *(float*)( pSVar1 + 0xc );
      pSVar1 = param_1 + lVar7 * 4 + 0x20;
      auVar9._0_4_ = fVar3 * *(float*)pSVar1;
      auVar9._4_4_ = fVar3 * *(float*)( pSVar1 + 4 );
      auVar9._8_4_ = fVar3 * *(float*)( pSVar1 + 8 );
      auVar9._12_4_ = fVar3 * *(float*)( pSVar1 + 0xc );
      lVar7 = lVar7 + 4;
      auVar10._8_4_ = auVar8._8_4_;
      auVar10._0_8_ = auVar8._0_8_;
      auVar10._12_4_ = auVar8._12_4_;
      auVar10 = minps(auVar10, auVar9);
      auVar8 = maxps(auVar8, auVar9);
      local_e8 = local_e8 + auVar10._0_4_;
      fStack_e4 = fStack_e4 + auVar10._4_4_;
      fStack_e0 = fStack_e0 + auVar10._8_4_;
      fStack_dc = fStack_dc + auVar10._12_4_;
      local_d8 = local_d8 + auVar8._0_4_;
      fStack_d4 = fStack_d4 + auVar8._4_4_;
      fStack_d0 = fStack_d0 + auVar8._8_4_;
      fStack_cc = fStack_cc + auVar8._12_4_;
   }
 while ( lVar7 != 0xc );
   if (*(long*)( param_1 + 0x18 ) == 0) {
      local_138 = &PTR__ShapeFilter_001076a8;
   }
 else {
      local_138 = &PTR__SimShapeFilterWrapper_00107700;
      local_128 = *(long*)( param_1 + 0x18 );
      lStack_120 = *(long*)param_1;
   }

   local_130 = 0xffffffff;
   local_30 = &local_138;
   local_68 = CONCAT44(local_108[1], local_108[0]);
   uStack_60 = CONCAT44(local_108[3], local_108[2]);
   local_28 = this + 0x120;
   local_170 = *(undefined8*)param_2;
   local_168 = *(undefined2*)( *(long*)param_1 + 0x74 );
   local_98._4_4_ = *(float*)( param_1 + 0x34 );
   local_98._0_4_ = *(float*)( param_1 + 0x24 );
   local_98._8_4_ = *(float*)( param_1 + 0x44 );
   local_98._12_4_ = 0;
   local_a8._4_4_ = *(float*)( param_1 + 0x30 );
   local_a8._0_4_ = *(float*)( param_1 + 0x20 );
   local_a8._8_4_ = *(float*)( param_1 + 0x40 );
   local_a8._12_4_ = 0;
   local_20 = this + 0x138;
   local_150 = *(undefined8*)( param_2 + 8 );
   local_58 = CONCAT44(local_f8[1], local_f8[0]);
   uStack_50 = CONCAT44(local_f8[3], local_f8[2]);
   local_40 = *(undefined8*)( param_2 + 0x2a0 );
   uStack_38 = *(undefined8*)( param_2 + 0x2a8 );
   local_158 = &PTR__DefaultObjectLayerFilter_00107680;
   local_c0 = 0x7f7fffff;
   local_b8 = 0;
   local_c8 = &PTR__Collector_00107730;
   local_6c = 0x3f800000;
   local_178 = &PTR__DefaultBroadPhaseLayerFilter_001076d8;
   local_88._4_4_ = *(float*)( param_1 + 0x38 );
   local_88._0_4_ = *(float*)( param_1 + 0x28 );
   local_88._8_4_ = *(float*)( param_1 + 0x48 );
   local_88._12_4_ = 0;
   local_78 = CONCAT44(0.0 - ( fVar4 * *(float*)( param_1 + 0x30 ) + *(float*)( param_1 + 0x34 ) * fVar5 + fVar6 * *(float*)( param_1 + 0x38 ) ), 0.0 - ( fVar4 * *(float*)( param_1 + 0x20 ) + *(float*)( param_1 + 0x24 ) * fVar5 + fVar6 * *(float*)( param_1 + 0x28 ) ));
   local_70 = 0.0 - ( fVar4 * *(float*)( param_1 + 0x40 ) + *(float*)( param_1 + 0x44 ) * fVar5 + fVar6 * *(float*)( param_1 + 0x48 ) );
   local_148 = local_168;
   local_b0 = param_1;
   local_48 = param_3;
   ( **(code**)( **(long**)( param_2 + 400 ) + 0x18 ) )(*(long**)( param_2 + 400 ), &local_e8, &local_c8, &local_178, &local_158);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::SoftBodyMotionProperties::DetermineCollisionPlanes(unsigned int, unsigned int) */void JPH::SoftBodyMotionProperties::DetermineCollisionPlanes(SoftBodyMotionProperties *this, uint param_1, uint param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_98;
   undefined4 local_90;
   long local_88;
   undefined4 local_80;
   long local_78;
   undefined4 local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   lVar3 = *(long*)( this + 0x130 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( this + 0x120 ) * 0x100 + lVar3;
   if (lVar3 != lVar1) {
      do {
         lVar4 = *(long*)( lVar3 + 0x50 );
         lVar2 = *(long*)( lVar3 + 0x40 ) * 0x60 + lVar4;
         for (; lVar2 != lVar4; lVar4 = lVar4 + 0x60) {
            local_58 = *(long*)( this + 0x118 ) + (ulong)param_1 * 0x50;
            local_98 = local_58 + 0x10;
            local_90 = 0x50;
            local_88 = local_58 + 0x4c;
            local_78 = local_58 + 0x30;
            local_68 = local_58 + 0x48;
            local_58 = local_58 + 0x40;
            local_80 = 0x50;
            local_70 = 0x50;
            local_60 = 0x50;
            local_50 = 0x50;
            ( **(code**)( **(long**)( lVar4 + 0x50 ) + 0xb0 ) )(*(undefined8*)( lVar4 + 0x40 ), *(undefined8*)( lVar4 + 0x48 ), *(long**)( lVar4 + 0x50 ), lVar4, &local_98, param_2, lVar3 - *(long*)( this + 0x130 ) >> 8);
         }

         lVar3 = lVar3 + 0x100;
      }
 while ( lVar1 != lVar3 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Type propagation algorithm not settling *//* JPH::SoftBodyMotionProperties::DetermineSensorCollisions(JPH::SoftBodyMotionProperties::CollidingSensor&)
    */void JPH::SoftBodyMotionProperties::DetermineSensorCollisions(SoftBodyMotionProperties *this, CollidingSensor *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   float local_a0[2];
   long local_98;
   undefined4 local_90;
   long local_88;
   undefined4 local_80;
   undefined1 *local_78;
   undefined4 local_70;
   float *local_68;
   undefined4 local_60;
   float *local_58;
   undefined4 local_50;
   undefined1 local_48[24];
   long local_30;
   lVar1 = *(long*)( param_1 + 0x50 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0[0] = -3.4028235e+38;
   local_a0[1] = -NAN;
   local_98 = *(long*)( this + 0x118 ) + 0x10;
   local_88 = *(long*)( this + 0x118 ) + 0x4c;
   local_90 = 0x50;
   local_78 = local_48;
   local_68 = local_a0;
   local_58 = local_a0 + 1;
   local_80 = 0x50;
   local_70 = 0;
   lVar3 = *(long*)( param_1 + 0x40 ) * 0x60 + lVar1;
   local_60 = 0;
   local_50 = 0;
   if (lVar1 == lVar3) {
      param_1[0x5c] = (CollidingSensor)0x0;
   }
 else {
      do {
         lVar2 = lVar1 + 0x60;
         ( **(code**)( **(long**)( lVar1 + 0x50 ) + 0xb0 ) )(*(undefined8*)( lVar1 + 0x40 ), *(undefined8*)( lVar1 + 0x48 ), *(long**)( lVar1 + 0x50 ), lVar1, &local_98, *(undefined4*)( this + 0x108 ), 0);
         lVar1 = lVar2;
      }
 while ( lVar3 != lVar2 );
      param_1[0x5c] = ( CollidingSensor )(0.0 < local_a0[0]);
      if (0.0 < local_a0[0]) {
         this[0x1bd] = (SoftBodyMotionProperties)0x1;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::SoftBodyMotionProperties::ApplyPressure(JPH::SoftBodyUpdateContext const&) */void JPH::SoftBodyMotionProperties::ApplyPressure(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   long lVar1;
   float *pfVar2;
   float *pfVar3;
   float fVar4;
   uint uVar5;
   long lVar6;
   uint *puVar7;
   uint *puVar8;
   SoftBodyMotionProperties *pSVar9;
   uint *puVar10;
   uint *puVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   fVar13 = *(float*)( this + 0x1b4 );
   fVar14 = 0.0;
   if (0.0 < fVar13) {
      pSVar9 = this;
      fVar12 = (float)GetVolumeTimesSix(this);
      if (fVar14 < fVar12) {
         puVar8 = *(uint**)( *(long*)( this + 0x100 ) + 0x30 );
         fVar12 = ( fVar13 * *(float*)( param_1 + 0x84 ) ) / fVar12;
         puVar11 = puVar8 + *(long*)( *(long*)( this + 0x100 ) + 0x20 ) * 4;
         if (puVar11 != puVar8) {
            lVar6 = *(long*)( pSVar9 + 0x118 );
            puVar10 = puVar8 + 3;
            do {
               pfVar2 = (float*)( lVar6 + 0x10 + ( ulong ) * puVar8 * 0x50 );
               pfVar3 = (float*)( lVar6 + 0x10 + (ulong)puVar8[1] * 0x50 );
               fVar13 = *pfVar3 - *pfVar2;
               fVar14 = pfVar3[1] - pfVar2[1];
               fVar15 = pfVar3[2] - pfVar2[2];
               pfVar3 = (float*)( lVar6 + 0x10 + (ulong)puVar8[2] * 0x50 );
               fVar17 = *pfVar3 - *pfVar2;
               fVar18 = pfVar3[1] - pfVar2[1];
               fVar19 = pfVar3[2] - pfVar2[2];
               fVar16 = fVar18 * fVar13 - fVar14 * fVar17;
               puVar7 = puVar8;
               do {
                  uVar5 = *puVar7;
                  puVar7 = puVar7 + 1;
                  fVar4 = *(float*)( lVar6 + 0x4c + (ulong)uVar5 * 0x50 );
                  lVar1 = lVar6 + (ulong)uVar5 * 0x50;
                  *(float*)( lVar1 + 0x20 ) = fVar4 * ( fVar19 * fVar14 - fVar15 * fVar18 ) * fVar12 + *(float*)( lVar1 + 0x20 );
                  *(float*)( lVar1 + 0x24 ) = fVar4 * ( fVar17 * fVar15 - fVar13 * fVar19 ) * fVar12 + *(float*)( lVar1 + 0x24 );
                  *(float*)( lVar1 + 0x28 ) = fVar4 * fVar16 * fVar12 + *(float*)( lVar1 + 0x28 );
                  *(float*)( lVar1 + 0x2c ) = fVar4 * fVar16 * fVar12 + *(float*)( lVar1 + 0x2c );
               }
 while ( puVar10 != puVar7 );
               puVar8 = puVar8 + 4;
               puVar10 = puVar10 + 4;
            }
 while ( puVar11 != puVar8 );
         }

      }

      return;
   }

   return;
}
/* JPH::SoftBodyMotionProperties::IntegratePositions(JPH::SoftBodyUpdateContext const&) */void JPH::SoftBodyMotionProperties::IntegratePositions(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   float fVar1;
   float fVar2;
   long lVar3;
   undefined8 *puVar4;
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
   undefined8 *puVar15;
   undefined8 *puVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   fVar1 = *(float*)( param_1 + 0x84 );
   fVar21 = _LC2 - *(float*)( this + 0x5c ) * fVar1;
   if (fVar21 <= 0.0) {
      fVar21 = 0.0;
   }

   fVar5 = *(float*)( param_1 + 0x60 );
   fVar6 = *(float*)( param_1 + 100 );
   fVar7 = *(float*)( param_1 + 0x68 );
   fVar8 = *(float*)( param_1 + 0x6c );
   fVar9 = *(float*)( this + 0x40 );
   fVar10 = *(float*)( this + 0x44 );
   fVar11 = *(float*)( this + 0x48 );
   fVar12 = *(float*)( this + 0x4c );
   lVar3 = *(long*)( this + 0x108 );
   puVar4 = *(undefined8**)( this + 0x118 );
   puVar16 = puVar4;
   if (puVar4 + lVar3 * 10 != puVar4) {
      do {
         fVar2 = *(float*)( (long)puVar16 + 0x4c );
         fVar17 = *(float*)( puVar16 + 4 );
         fVar18 = *(float*)( (long)puVar16 + 0x24 );
         fVar19 = *(float*)( puVar16 + 5 );
         fVar20 = *(float*)( (long)puVar16 + 0x2c );
         if (0.0 < fVar2) {
            fVar17 = ( fVar2 * fVar9 * fVar1 + fVar5 * fVar1 + fVar17 ) * fVar21;
            fVar18 = ( fVar2 * fVar10 * fVar1 + fVar6 * fVar1 + fVar18 ) * fVar21;
            fVar19 = ( fVar2 * fVar11 * fVar1 + fVar7 * fVar1 + fVar19 ) * fVar21;
            fVar20 = ( fVar2 * fVar12 * fVar1 + fVar8 * fVar1 + fVar20 ) * fVar21;
            *(float*)( puVar16 + 4 ) = fVar17;
            *(float*)( (long)puVar16 + 0x24 ) = fVar18;
            *(float*)( puVar16 + 5 ) = fVar19;
            *(float*)( (long)puVar16 + 0x2c ) = fVar20;
         }

         uVar13 = puVar16[2];
         uVar14 = puVar16[3];
         *(float*)( puVar16 + 2 ) = fVar17 * fVar1 + *(float*)( puVar16 + 2 );
         *(float*)( (long)puVar16 + 0x14 ) = fVar18 * fVar1 + *(float*)( (long)puVar16 + 0x14 );
         *(float*)( puVar16 + 3 ) = fVar19 * fVar1 + *(float*)( puVar16 + 3 );
         *(float*)( (long)puVar16 + 0x1c ) = fVar20 * fVar1 + *(float*)( (long)puVar16 + 0x1c );
         puVar15 = puVar16 + 10;
         *puVar16 = uVar13;
         puVar16[1] = uVar14;
         puVar16 = puVar15;
      }
 while ( puVar4 + lVar3 * 10 != puVar15 );
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::ApplyDihedralBendConstraints(JPH::SoftBodyUpdateContext const&,
   unsigned int, unsigned int) */void JPH::SoftBodyMotionProperties::ApplyDihedralBendConstraints(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, uint param_2, uint param_3) {
   uint *puVar1;
   long lVar2;
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
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   uint *puVar20;
   long lVar21;
   long lVar22;
   long lVar23;
   long lVar24;
   uint uVar25;
   float fVar26;
   undefined1 auVar27[16];
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   undefined1 auVar34[16];
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   undefined1 auVar50[16];
   float fVar51;
   puVar20 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x60 ) + (ulong)param_2 * 0x18 );
   puVar1 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x60 ) + (ulong)param_3 * 0x18 );
   fVar46 = _LC2 / ( *(float*)( param_1 + 0x84 ) * *(float*)( param_1 + 0x84 ) );
   if (puVar20 < puVar1) {
      lVar2 = *(long*)( this + 0x118 );
      do {
         while (true) {
            lVar24 = ( ulong ) * puVar20 * 0x50 + lVar2;
            fVar3 = *(float*)( lVar24 + 0x10 );
            fVar4 = *(float*)( lVar24 + 0x14 );
            fVar5 = *(float*)( lVar24 + 0x18 );
            lVar23 = (ulong)puVar20[1] * 0x50 + lVar2;
            fVar6 = *(float*)( lVar23 + 0x10 );
            fVar7 = *(float*)( lVar23 + 0x14 );
            fVar8 = *(float*)( lVar23 + 0x18 );
            fVar9 = *(float*)( lVar23 + 0x1c );
            lVar21 = (ulong)puVar20[2] * 0x50 + lVar2;
            fVar10 = *(float*)( lVar21 + 0x10 );
            fVar11 = *(float*)( lVar21 + 0x14 );
            fVar12 = *(float*)( lVar21 + 0x18 );
            fVar13 = *(float*)( lVar21 + 0x1c );
            fVar39 = fVar6 - fVar3;
            fVar40 = fVar7 - fVar4;
            fVar41 = fVar8 - fVar5;
            lVar22 = (ulong)puVar20[3] * 0x50 + lVar2;
            fVar14 = *(float*)( lVar22 + 0x10 );
            fVar15 = *(float*)( lVar22 + 0x14 );
            fVar16 = *(float*)( lVar22 + 0x18 );
            fVar17 = *(float*)( lVar22 + 0x1c );
            fVar28 = SQRT(fVar40 * fVar40 + fVar39 * fVar39 + 0.0 + fVar41 * fVar41);
            if (fVar28 < _LC10) break;
            fVar47 = fVar10 - fVar6;
            fVar48 = fVar11 - fVar7;
            fVar49 = fVar12 - fVar8;
            fVar31 = fVar14 - fVar6;
            fVar35 = fVar15 - fVar7;
            fVar37 = fVar16 - fVar8;
            fVar32 = fVar48 * ( fVar10 - fVar3 ) - ( fVar11 - fVar4 ) * fVar47;
            fVar36 = fVar49 * ( fVar11 - fVar4 ) - ( fVar12 - fVar5 ) * fVar48;
            fVar38 = fVar47 * ( fVar12 - fVar5 ) - ( fVar10 - fVar3 ) * fVar49;
            fVar42 = ( fVar15 - fVar4 ) * fVar31 - fVar35 * ( fVar14 - fVar3 );
            fVar44 = ( fVar16 - fVar5 ) * fVar35 - fVar37 * ( fVar15 - fVar4 );
            fVar45 = ( fVar14 - fVar3 ) * fVar37 - fVar31 * ( fVar16 - fVar5 );
            fVar26 = fVar32 * fVar32 + fVar38 * fVar38 + fVar36 * fVar36 + 0.0;
            fVar51 = fVar45 * fVar45 + fVar44 * fVar44 + 0.0 + fVar42 * fVar42;
            if (fVar26 * fVar51 < _LC11) break;
            uVar25 = -(uint)((fVar44 * fVar38 - fVar45 * fVar36) * fVar41 +
                         (fVar45 * fVar32 - fVar42 * fVar38) * fVar39 + 0.0 +
                         (fVar42 * fVar36 - fVar44 * fVar32) * fVar40 < 0.0);
            fVar33 = 0.0;
            fVar43 = ( fVar42 * fVar32 + fVar45 * fVar38 + fVar36 * fVar44 + 0.0 ) / SQRT(fVar26 * fVar51);
            fVar29 = (float)( (uint)fVar43 & __LC12 );
            if (fVar29 <= _LC2) {
               fVar33 = SQRT(_LC2 - fVar29) * ( _LC14 - _LC13 * fVar29 );
            }

            if (fVar43 < 0.0) {
               fVar33 = _LC15 - fVar33;
            }

            fVar33 = fVar33 * (float)( ~uVar25 & (uint)_LC2 | _LC9 & uVar25 ) - (float)puVar20[5];
            if (fVar33 <= _LC15) {
               if (fVar33 < _LC17) {
                  fVar33 = fVar33 + __LC16;
               }

            }
 else {
               fVar33 = fVar33 - __LC16;
            }

            auVar19._4_4_ = fVar38;
            auVar19._0_4_ = fVar36;
            auVar19._8_4_ = fVar32;
            auVar19._12_4_ = fVar32;
            auVar50._4_4_ = fVar26;
            auVar50._0_4_ = fVar26;
            auVar50._8_4_ = fVar26;
            auVar50._12_4_ = fVar26;
            auVar34 = divps(auVar19, auVar50);
            auVar18._4_4_ = fVar45;
            auVar18._0_4_ = fVar44;
            auVar18._8_4_ = fVar42;
            auVar18._12_4_ = fVar42;
            fVar26 = fVar37 * fVar41 + fVar35 * fVar40 + fVar31 * fVar39 + 0.0;
            auVar27._4_4_ = fVar51;
            auVar27._0_4_ = fVar51;
            auVar27._8_4_ = fVar51;
            auVar27._12_4_ = fVar51;
            auVar27 = divps(auVar18, auVar27);
            fVar39 = fVar48 * fVar40 + fVar47 * fVar39 + 0.0 + fVar41 * fVar49;
            fVar35 = auVar34._0_4_ * fVar28;
            fVar36 = auVar34._4_4_ * fVar28;
            fVar37 = auVar34._8_4_ * fVar28;
            fVar38 = auVar34._12_4_ * fVar28;
            auVar30._0_4_ = fVar39 * auVar34._0_4_ + fVar26 * auVar27._0_4_;
            auVar30._4_4_ = fVar39 * auVar34._4_4_ + fVar26 * auVar27._4_4_;
            auVar30._8_4_ = fVar39 * auVar34._8_4_ + fVar26 * auVar27._8_4_;
            auVar30._12_4_ = fVar39 * auVar34._12_4_ + fVar26 * auVar27._12_4_;
            auVar34._4_4_ = fVar28;
            auVar34._0_4_ = fVar28;
            auVar34._8_4_ = fVar28;
            auVar34._12_4_ = fVar28;
            auVar34 = divps(auVar30, auVar34);
            fVar39 = fVar28 * auVar27._0_4_;
            fVar40 = fVar28 * auVar27._4_4_;
            fVar41 = fVar28 * auVar27._8_4_;
            fVar28 = fVar28 * auVar27._12_4_;
            fVar26 = auVar34._0_4_;
            fVar31 = auVar34._4_4_;
            fVar32 = auVar34._8_4_;
            fVar44 = ( ( 0.0 - fVar26 ) - fVar35 ) - fVar39;
            fVar45 = ( ( 0.0 - fVar31 ) - fVar36 ) - fVar40;
            fVar47 = ( ( 0.0 - fVar32 ) - fVar37 ) - fVar41;
            fVar42 = ( fVar36 * fVar36 + fVar35 * fVar35 + 0.0 + fVar37 * fVar37 ) * *(float*)( lVar21 + 0x4c ) + ( fVar45 * fVar45 + fVar44 * fVar44 + 0.0 + fVar47 * fVar47 ) * *(float*)( lVar23 + 0x4c ) + ( fVar31 * fVar31 + fVar26 * fVar26 + 0.0 + fVar32 * fVar32 ) * *(float*)( lVar24 + 0x4c ) + ( fVar40 * fVar40 + fVar39 * fVar39 + 0.0 + fVar41 * fVar41 ) * *(float*)( lVar22 + 0x4c ) + fVar46 * (float)puVar20[4];
            if (fVar42 < _LC18) break;
            puVar20 = puVar20 + 6;
            fVar33 = fVar33 / fVar42;
            fVar49 = *(float*)( lVar24 + 0x4c ) * fVar33;
            fVar48 = *(float*)( lVar23 + 0x4c ) * fVar33;
            fVar42 = *(float*)( lVar21 + 0x4c ) * fVar33;
            fVar33 = fVar33 * *(float*)( lVar22 + 0x4c );
            *(float*)( lVar24 + 0x10 ) = fVar3 - fVar49 * fVar26;
            *(float*)( lVar24 + 0x14 ) = fVar4 - fVar49 * fVar31;
            *(float*)( lVar24 + 0x18 ) = fVar5 - fVar49 * fVar32;
            *(float*)( lVar24 + 0x1c ) = *(float*)( lVar24 + 0x1c ) - fVar49 * auVar34._12_4_;
            *(float*)( lVar23 + 0x10 ) = fVar6 - fVar48 * fVar44;
            *(float*)( lVar23 + 0x14 ) = fVar7 - fVar48 * fVar45;
            *(float*)( lVar23 + 0x18 ) = fVar8 - fVar48 * fVar47;
            *(float*)( lVar23 + 0x1c ) = fVar9 - fVar48 * ( ( ( 0.0 - auVar34._12_4_ ) - fVar38 ) - fVar28 );
            *(float*)( lVar21 + 0x10 ) = fVar10 - fVar42 * fVar35;
            *(float*)( lVar21 + 0x14 ) = fVar11 - fVar42 * fVar36;
            *(float*)( lVar21 + 0x18 ) = fVar12 - fVar42 * fVar37;
            *(float*)( lVar21 + 0x1c ) = fVar13 - fVar42 * fVar38;
            *(float*)( lVar22 + 0x10 ) = fVar14 - fVar33 * fVar39;
            *(float*)( lVar22 + 0x14 ) = fVar15 - fVar33 * fVar40;
            *(float*)( lVar22 + 0x18 ) = fVar16 - fVar33 * fVar41;
            *(float*)( lVar22 + 0x1c ) = fVar17 - fVar33 * fVar28;
            if (puVar1 <= puVar20) {
               return;
            }

         }
;
         puVar20 = puVar20 + 6;
      }
 while ( puVar20 < puVar1 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::ApplyVolumeConstraints(JPH::SoftBodyUpdateContext const&, unsigned
   int, unsigned int) */void JPH::SoftBodyMotionProperties::ApplyVolumeConstraints(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, uint param_2, uint param_3) {
   uint *puVar1;
   float fVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   uint *puVar19;
   long lVar20;
   long lVar21;
   long lVar22;
   long lVar23;
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
   float fVar40;
   float fVar41;
   puVar19 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x78 ) + (ulong)param_2 * 0x18 );
   puVar1 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x78 ) + (ulong)param_3 * 0x18 );
   fVar24 = _LC2 / ( *(float*)( param_1 + 0x84 ) * *(float*)( param_1 + 0x84 ) );
   if (puVar19 < puVar1) {
      lVar3 = *(long*)( this + 0x118 );
      do {
         lVar23 = ( ulong ) * puVar19 * 0x50 + lVar3;
         fVar4 = *(float*)( lVar23 + 0x10 );
         fVar5 = *(float*)( lVar23 + 0x14 );
         fVar6 = *(float*)( lVar23 + 0x18 );
         lVar22 = (ulong)puVar19[1] * 0x50 + lVar3;
         fVar7 = *(float*)( lVar22 + 0x10 );
         fVar8 = *(float*)( lVar22 + 0x14 );
         fVar9 = *(float*)( lVar22 + 0x18 );
         fVar10 = *(float*)( lVar22 + 0x1c );
         lVar20 = (ulong)puVar19[2] * 0x50 + lVar3;
         fVar11 = *(float*)( lVar20 + 0x10 );
         fVar12 = *(float*)( lVar20 + 0x14 );
         fVar13 = *(float*)( lVar20 + 0x18 );
         fVar14 = *(float*)( lVar20 + 0x1c );
         fVar25 = fVar7 - fVar4;
         fVar26 = fVar8 - fVar5;
         fVar27 = fVar9 - fVar6;
         lVar21 = (ulong)puVar19[3] * 0x50 + lVar3;
         fVar15 = *(float*)( lVar21 + 0x10 );
         fVar16 = *(float*)( lVar21 + 0x14 );
         fVar17 = *(float*)( lVar21 + 0x18 );
         fVar18 = *(float*)( lVar21 + 0x1c );
         fVar2 = *(float*)( lVar21 + 0x4c );
         fVar28 = fVar11 - fVar4;
         fVar30 = fVar12 - fVar5;
         fVar31 = fVar13 - fVar6;
         fVar36 = fVar15 - fVar4;
         fVar37 = fVar16 - fVar5;
         fVar38 = fVar17 - fVar6;
         fVar39 = fVar30 * fVar25 - fVar26 * fVar28;
         fVar40 = fVar31 * fVar26 - fVar27 * fVar30;
         fVar41 = fVar28 * fVar27 - fVar25 * fVar31;
         fVar29 = fVar28 * fVar37 - fVar30 * fVar36;
         fVar30 = fVar30 * fVar38 - fVar31 * fVar37;
         fVar31 = fVar31 * fVar36 - fVar28 * fVar38;
         fVar33 = ( fVar12 - fVar8 ) * ( fVar15 - fVar7 ) - ( fVar16 - fVar8 ) * ( fVar11 - fVar7 );
         fVar34 = ( fVar13 - fVar9 ) * ( fVar16 - fVar8 ) - ( fVar17 - fVar9 ) * ( fVar12 - fVar8 );
         fVar35 = ( fVar11 - fVar7 ) * ( fVar17 - fVar9 ) - ( fVar15 - fVar7 ) * ( fVar13 - fVar9 );
         fVar28 = *(float*)( lVar22 + 0x4c );
         fVar32 = fVar26 * fVar36 - fVar37 * fVar25;
         fVar26 = fVar27 * fVar37 - fVar38 * fVar26;
         fVar27 = fVar25 * fVar38 - fVar36 * fVar27;
         fVar25 = ( fVar31 * fVar31 + fVar30 * fVar30 + 0.0 + fVar29 * fVar29 ) * fVar28 + ( fVar33 * fVar33 + fVar35 * fVar35 + fVar34 * fVar34 + 0.0 ) * *(float*)( lVar23 + 0x4c ) + ( fVar32 * fVar32 + fVar27 * fVar27 + fVar26 * fVar26 + 0.0 ) * *(float*)( lVar20 + 0x4c ) + ( fVar39 * fVar39 + fVar41 * fVar41 + fVar40 * fVar40 + 0.0 ) * fVar2 + fVar24 * (float)puVar19[5];
         if (_LC18 <= fVar25) {
            fVar25 = ( (float)( ( uint )(fVar37 * fVar41 + fVar36 * fVar40 + 0.0 + fVar38 * fVar39) & __LC12 ) - (float)puVar19[4] ) / fVar25;
            fVar37 = *(float*)( lVar23 + 0x4c ) * fVar25;
            fVar36 = *(float*)( lVar20 + 0x4c ) * fVar25;
            *(float*)( lVar23 + 0x10 ) = fVar4 - fVar34 * fVar37;
            *(float*)( lVar23 + 0x14 ) = fVar5 - fVar35 * fVar37;
            *(float*)( lVar23 + 0x18 ) = fVar6 - fVar33 * fVar37;
            *(float*)( lVar23 + 0x1c ) = *(float*)( lVar23 + 0x1c ) - fVar33 * fVar37;
            fVar28 = fVar28 * fVar25;
            fVar25 = fVar25 * fVar2;
            *(float*)( lVar22 + 0x10 ) = fVar7 - fVar30 * fVar28;
            *(float*)( lVar22 + 0x14 ) = fVar8 - fVar31 * fVar28;
            *(float*)( lVar22 + 0x18 ) = fVar9 - fVar29 * fVar28;
            *(float*)( lVar22 + 0x1c ) = fVar10 - fVar29 * fVar28;
            *(float*)( lVar20 + 0x10 ) = fVar11 - fVar26 * fVar36;
            *(float*)( lVar20 + 0x14 ) = fVar12 - fVar27 * fVar36;
            *(float*)( lVar20 + 0x18 ) = fVar13 - fVar32 * fVar36;
            *(float*)( lVar20 + 0x1c ) = fVar14 - fVar32 * fVar36;
            *(float*)( lVar21 + 0x10 ) = fVar15 - fVar40 * fVar25;
            *(float*)( lVar21 + 0x14 ) = fVar16 - fVar41 * fVar25;
            *(float*)( lVar21 + 0x18 ) = fVar17 - fVar39 * fVar25;
            *(float*)( lVar21 + 0x1c ) = fVar18 - fVar39 * fVar25;
         }

         puVar19 = puVar19 + 6;
      }
 while ( puVar19 < puVar1 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::ApplySkinConstraints(JPH::SoftBodyUpdateContext const&, unsigned
   int, unsigned int) */void JPH::SoftBodyMotionProperties::ApplySkinConstraints(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, uint param_2, uint param_3) {
   if (( *(long*)( *(long*)( this + 0x100 ) + 0x80 ) != 0 ) && ( this[0x1be] != (SoftBodyMotionProperties)0x0 )) {
      ApplySkinConstraints(this, param_1, param_2, param_3);
      return;
   }

   return;
}
/* JPH::SoftBodyMotionProperties::ApplyEdgeConstraints(JPH::SoftBodyUpdateContext const&, unsigned
   int, unsigned int) */void JPH::SoftBodyMotionProperties::ApplyEdgeConstraints(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, uint param_2, uint param_3) {
   float fVar1;
   float fVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   long lVar9;
   long lVar10;
   uint *puVar11;
   uint *puVar12;
   float fVar13;
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   fVar8 = _LC18;
   puVar11 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x48 ) + (ulong)param_2 * 0x10 );
   puVar12 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0x48 ) + (ulong)param_3 * 0x10 );
   fVar20 = _LC2 / ( *(float*)( param_1 + 0x84 ) * *(float*)( param_1 + 0x84 ) );
   if (puVar11 < puVar12) {
      lVar3 = *(long*)( this + 0x118 );
      do {
         lVar10 = ( ulong ) * puVar11 * 0x50 + lVar3;
         lVar9 = (ulong)puVar11[1] * 0x50 + lVar3;
         fVar4 = *(float*)( lVar9 + 0x10 );
         fVar5 = *(float*)( lVar9 + 0x14 );
         fVar6 = *(float*)( lVar9 + 0x18 );
         fVar7 = *(float*)( lVar9 + 0x1c );
         fVar1 = *(float*)( lVar9 + 0x4c );
         fVar17 = fVar4 - *(float*)( lVar10 + 0x10 );
         fVar18 = fVar5 - *(float*)( lVar10 + 0x14 );
         fVar19 = fVar6 - *(float*)( lVar10 + 0x18 );
         fVar2 = *(float*)( lVar10 + 0x4c );
         fVar13 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 + 0.0);
         fVar16 = ( (float)puVar11[3] * fVar20 + fVar2 + fVar1 ) * fVar13;
         if (fVar8 <= fVar16) {
            fVar13 = fVar13 - (float)puVar11[2];
            auVar14._0_4_ = fVar13 * fVar17;
            auVar14._4_4_ = fVar13 * fVar18;
            auVar14._8_4_ = fVar13 * fVar19;
            auVar14._12_4_ = fVar13 * ( fVar7 - *(float*)( lVar10 + 0x1c ) );
            auVar15._4_4_ = fVar16;
            auVar15._0_4_ = fVar16;
            auVar15._8_4_ = fVar16;
            auVar15._12_4_ = fVar16;
            auVar15 = divps(auVar14, auVar15);
            *(float*)( lVar10 + 0x10 ) = fVar2 * auVar15._0_4_ + *(float*)( lVar10 + 0x10 );
            *(float*)( lVar10 + 0x14 ) = fVar2 * auVar15._4_4_ + *(float*)( lVar10 + 0x14 );
            *(float*)( lVar10 + 0x18 ) = fVar2 * auVar15._8_4_ + *(float*)( lVar10 + 0x18 );
            *(float*)( lVar10 + 0x1c ) = fVar2 * auVar15._12_4_ + *(float*)( lVar10 + 0x1c );
            *(float*)( lVar9 + 0x10 ) = fVar4 - fVar1 * auVar15._0_4_;
            *(float*)( lVar9 + 0x14 ) = fVar5 - fVar1 * auVar15._4_4_;
            *(float*)( lVar9 + 0x18 ) = fVar6 - fVar1 * auVar15._8_4_;
            *(float*)( lVar9 + 0x1c ) = fVar7 - fVar1 * auVar15._12_4_;
         }

         puVar11 = puVar11 + 4;
      }
 while ( puVar11 < puVar12 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::ApplyLRAConstraints(unsigned int, unsigned int) */void JPH::SoftBodyMotionProperties::ApplyLRAConstraints(SoftBodyMotionProperties *this, uint param_1, uint param_2) {
   uint *puVar1;
   float *pfVar2;
   float fVar3;
   long lVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   long lVar8;
   uint *puVar9;
   float fVar10;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   float fVar13;
   float fVar14;
   float fVar15;
   lVar4 = *(long*)( this + 0x118 );
   puVar9 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0xc0 ) + (ulong)param_1 * 0xc );
   puVar1 = (uint*)( *(long*)( *(long*)( this + 0x100 ) + 0xc0 ) + (ulong)param_2 * 0xc );
   do {
      if (puVar1 <= puVar9) {
         return;
      }

      while (true) {
         lVar8 = (ulong)puVar9[1] * 0x50 + lVar4;
         pfVar2 = (float*)( lVar4 + 0x10 + ( ulong ) * puVar9 * 0x50 );
         fVar5 = pfVar2[1];
         fVar6 = pfVar2[2];
         fVar7 = pfVar2[3];
         fVar13 = *(float*)( lVar8 + 0x10 ) - *pfVar2;
         fVar14 = *(float*)( lVar8 + 0x14 ) - fVar5;
         fVar15 = *(float*)( lVar8 + 0x18 ) - fVar6;
         fVar10 = fVar15 * fVar15 + fVar13 * fVar13 + 0.0 + fVar14 * fVar14;
         fVar3 = (float)puVar9[2];
         if (fVar10 <= fVar3 * fVar3) break;
         auVar11._0_4_ = fVar3 * fVar13;
         auVar11._4_4_ = fVar3 * fVar14;
         auVar11._8_4_ = fVar3 * fVar15;
         auVar11._12_4_ = fVar3 * ( *(float*)( lVar8 + 0x1c ) - fVar7 );
         fVar10 = SQRT(fVar10);
         puVar9 = puVar9 + 3;
         auVar12._4_4_ = fVar10;
         auVar12._0_4_ = fVar10;
         auVar12._8_4_ = fVar10;
         auVar12._12_4_ = fVar10;
         auVar12 = divps(auVar11, auVar12);
         *(float*)( lVar8 + 0x10 ) = auVar12._0_4_ + *pfVar2;
         *(float*)( lVar8 + 0x14 ) = auVar12._4_4_ + fVar5;
         *(float*)( lVar8 + 0x18 ) = auVar12._8_4_ + fVar6;
         *(float*)( lVar8 + 0x1c ) = auVar12._12_4_ + fVar7;
         if (puVar1 <= puVar9) {
            return;
         }

      }
;
      puVar9 = puVar9 + 3;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::ApplyCollisionConstraintsAndUpdateVelocities(JPH::SoftBodyUpdateContext
   const&) */void JPH::SoftBodyMotionProperties::ApplyCollisionConstraintsAndUpdateVelocities(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   float fVar1;
   float fVar2;
   char cVar3;
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
   float *pfVar16;
   float *pfVar17;
   float *pfVar18;
   long lVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar25;
   float fVar26;
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   float fVar27;
   undefined1 auVar28[16];
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
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar48;
   float fVar49;
   undefined1 auVar47[16];
   float fVar50;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   float local_28;
   float fStack_24;
   float fStack_20;
   float local_18;
   float fStack_14;
   float fStack_10;
   float fStack_c;
   fVar1 = *(float*)( param_1 + 0x84 );
   fVar2 = *(float*)( *(long*)( this + 0x100 ) + 0xe0 );
   pfVar17 = *(float**)( this + 0x118 );
   pfVar18 = pfVar17 + *(long*)( this + 0x108 ) * 0x14;
   fVar21 = SQRT(*(float*)( param_1 + 0x68 ) * *(float*)( param_1 + 0x68 ) + *(float*)( param_1 + 0x60 ) * *(float*)( param_1 + 0x60 ) + 0.0 + *(float*)( param_1 + 100 ) * *(float*)( param_1 + 100 )) * __LC19 * fVar1;
   if (pfVar18 == pfVar17) {
      return;
   }

   while (fVar37 = pfVar17[0x13],fVar37 <= 0.0) {
      pfVar17 = pfVar17 + 0x14;
      if (pfVar18 == pfVar17) {
         return;
      }

   }
;
   do {
      fVar36 = pfVar17[4];
      fVar38 = pfVar17[5];
      fVar39 = pfVar17[6];
      fVar35 = pfVar17[7];
      uVar13 = *(undefined8*)( pfVar17 + 8 );
      uVar14 = *(undefined8*)( pfVar17 + 10 );
      auVar23._0_4_ = fVar36 - *pfVar17;
      auVar23._4_4_ = fVar38 - pfVar17[1];
      auVar23._8_4_ = fVar39 - pfVar17[2];
      auVar23._12_4_ = fVar35 - pfVar17[3];
      auVar24._4_4_ = fVar1;
      auVar24._0_4_ = fVar1;
      auVar24._8_4_ = fVar1;
      auVar24._12_4_ = fVar1;
      auVar24 = divps(auVar23, auVar24);
      *(undefined1(*) [16])( pfVar17 + 8 ) = auVar24;
      pfVar16 = pfVar17;
      if (-1 < (int)pfVar17[0x10]) {
         fVar48 = pfVar17[0xc];
         fVar49 = pfVar17[0xd];
         fVar4 = pfVar17[0xe];
         fVar5 = pfVar17[0xf];
         fVar50 = fVar2 - ( pfVar17[5] * fVar49 + pfVar17[4] * fVar48 + 0.0 + pfVar17[6] * fVar4 + pfVar17[0xf] );
         if (0.0 < fVar50) {
            lVar19 = (long)(int)pfVar17[0x10] * 0x100 + *(long*)( this + 0x130 );
            *(undefined1*)( pfVar17 + 0x11 ) = 1;
            cVar3 = *(char*)( lVar19 + 0x5c );
            this[0x1bd] = (SoftBodyMotionProperties)0x1;
            fVar36 = fVar36 + fVar50 * fVar48;
            fVar38 = fVar38 + fVar50 * fVar49;
            fVar39 = fVar39 + fVar50 * fVar4;
            pfVar17[4] = fVar36;
            pfVar17[5] = fVar38;
            pfVar17[6] = fVar39;
            pfVar17[7] = fVar35 + fVar50 * fVar5;
            fVar25 = auVar24._4_4_;
            fVar26 = auVar24._8_4_;
            fVar27 = auVar24._12_4_;
            fVar22 = auVar24._0_4_;
            fVar20 = (float)uVar13;
            fVar35 = (float)( (ulong)uVar13 >> 0x20 );
            if (cVar3 == '\x02') {
               fVar37 = fVar37 * *(float*)( lVar19 + 0x6c );
               fVar36 = fVar36 - *(float*)( lVar19 + 0x30 );
               fVar38 = fVar38 - *(float*)( lVar19 + 0x34 );
               fVar39 = fVar39 - *(float*)( lVar19 + 0x38 );
               uVar13 = *(undefined8*)( lVar19 + 0xb8 );
               fVar44 = *(float*)( lVar19 + 0x90 );
               fVar6 = *(float*)( lVar19 + 0x94 );
               fVar7 = *(float*)( lVar19 + 0x98 );
               fVar8 = *(float*)( lVar19 + 0x9c );
               uVar15 = *(undefined8*)( lVar19 + 0xa8 );
               fVar29 = fVar49 * fVar36 - fVar38 * fVar48;
               fVar31 = fVar4 * fVar38 - fVar39 * fVar49;
               fVar33 = fVar48 * fVar39 - fVar36 * fVar4;
               fVar43 = *(float*)( lVar19 + 0x60 );
               fVar9 = *(float*)( lVar19 + 0x80 );
               fVar10 = *(float*)( lVar19 + 0x84 );
               fVar11 = *(float*)( lVar19 + 0x88 );
               fVar12 = *(float*)( lVar19 + 0x8c );
               local_88 = (float)*(undefined8*)( lVar19 + 0xa0 );
               fStack_84 = (float)( ( ulong ) * (undefined8*)( lVar19 + 0xa0 ) >> 0x20 );
               fStack_80 = (float)uVar15;
               local_78 = (float)*(undefined8*)( lVar19 + 0xb0 );
               fStack_74 = (float)( ( ulong ) * (undefined8*)( lVar19 + 0xb0 ) >> 0x20 );
               fStack_70 = (float)uVar13;
               fVar29 = fVar33 * ( fVar10 * fVar31 + fVar33 * fVar6 + fStack_84 * fVar29 + fStack_74 ) + fVar31 * ( fVar9 * fVar31 + fVar33 * fVar44 + local_88 * fVar29 + local_78 ) + 0.0 + fVar29 * ( fVar11 * fVar31 + fVar33 * fVar7 + fStack_80 * fVar29 + fStack_70 ) + fVar43 + fVar37;
               if (0.0 < fVar29) {
                  local_28 = (float)*(undefined8*)( lVar19 + 0xd0 );
                  fStack_24 = (float)( ( ulong ) * (undefined8*)( lVar19 + 0xd0 ) >> 0x20 );
                  fStack_20 = (float)*(undefined8*)( lVar19 + 0xd8 );
                  fVar33 = fVar38 * local_28 - fStack_24 * fVar36;
                  local_18 = (float)*(undefined8*)( lVar19 + 0xc0 );
                  fStack_14 = (float)( ( ulong ) * (undefined8*)( lVar19 + 0xc0 ) >> 0x20 );
                  fStack_10 = (float)*(undefined8*)( lVar19 + 200 );
                  fStack_c = (float)( ( ulong ) * (undefined8*)( lVar19 + 200 ) >> 0x20 );
                  local_18 = ( fVar39 * fStack_24 - fStack_20 * fVar38 ) + local_18;
                  fStack_14 = ( fVar36 * fStack_20 - local_28 * fVar39 ) + fStack_14;
                  fStack_10 = fVar33 + fStack_10;
                  fVar30 = fVar22 - local_18;
                  fVar32 = fVar25 - fStack_14;
                  fVar34 = fVar26 - fStack_10;
                  fVar45 = fVar34 * fVar4 + fVar32 * fVar49 + fVar30 * fVar48 + 0.0;
                  fVar30 = fVar30 - fVar45 * fVar48;
                  fVar32 = fVar32 - fVar45 * fVar49;
                  fVar34 = fVar34 - fVar45 * fVar4;
                  fVar40 = 0.0;
                  fVar41 = 0.0;
                  fVar42 = 0.0;
                  fVar31 = 0.0;
                  fVar46 = SQRT(fVar34 * fVar34 + fVar32 * fVar32 + fVar30 * fVar30 + 0.0);
                  if (0.0 < fVar46) {
                     fVar50 = ( *(float*)( lVar19 + 100 ) * fVar50 ) / ( fVar46 * fVar1 );
                     fVar31 = _LC2;
                     if (fVar50 <= _LC2) {
                        fVar31 = fVar50;
                     }

                     fVar40 = fVar31 * fVar30;
                     fVar41 = fVar31 * fVar32;
                     fVar42 = fVar31 * fVar34;
                     fVar31 = fVar31 * ( ( fVar27 - ( fVar33 + fStack_c ) ) - fVar45 * fVar5 );
                  }

                  auVar47._0_4_ = fVar45 * fVar48 + fVar40;
                  auVar47._4_4_ = fVar45 * fVar49 + fVar41;
                  auVar47._8_4_ = fVar45 * fVar4 + fVar42;
                  auVar47._12_4_ = fVar45 * fVar5 + fVar31;
                  fVar35 = ( (float)uVar14 - fStack_10 ) * fVar4 + ( fVar35 - fStack_14 ) * fVar49 + fVar48 * ( fVar20 - local_18 ) + 0.0;
                  if (fVar35 < fVar21) {
                     fVar35 = fVar35 * *(float*)( lVar19 + 0x68 );
                     auVar47._0_4_ = auVar47._0_4_ + fVar35 * fVar48;
                     auVar47._4_4_ = auVar47._4_4_ + fVar35 * fVar49;
                     auVar47._8_4_ = auVar47._8_4_ + fVar35 * fVar4;
                     auVar47._12_4_ = auVar47._12_4_ + fVar35 * fVar5;
                  }

                  auVar28._4_4_ = fVar29;
                  auVar28._0_4_ = fVar29;
                  auVar28._8_4_ = fVar29;
                  auVar28._12_4_ = fVar29;
                  auVar24 = divps(auVar47, auVar28);
                  fVar35 = auVar24._0_4_;
                  fVar48 = auVar24._4_4_;
                  fVar49 = auVar24._8_4_;
                  pfVar17[8] = fVar22 - fVar37 * fVar35;
                  pfVar17[9] = fVar25 - fVar37 * fVar48;
                  pfVar17[10] = fVar26 - fVar37 * fVar49;
                  pfVar17[0xb] = fVar27 - fVar37 * auVar24._12_4_;
                  *(undefined1*)( lVar19 + 0x70 ) = 1;
                  *(float*)( lVar19 + 0xc0 ) = fVar43 * fVar35 + *(float*)( lVar19 + 0xc0 );
                  *(float*)( lVar19 + 0xc4 ) = fVar43 * fVar48 + *(float*)( lVar19 + 0xc4 );
                  *(float*)( lVar19 + 200 ) = fVar43 * fVar49 + *(float*)( lVar19 + 200 );
                  *(float*)( lVar19 + 0xcc ) = fVar43 * auVar24._12_4_ + *(float*)( lVar19 + 0xcc );
                  fVar37 = fVar48 * fVar36 - fVar35 * fVar38;
                  fVar38 = fVar49 * fVar38 - fVar48 * fVar39;
                  fVar36 = fVar35 * fVar39 - fVar49 * fVar36;
                  fStack_7c = (float)( (ulong)uVar15 >> 0x20 );
                  fStack_6c = (float)( (ulong)uVar13 >> 0x20 );
                  *(float*)( lVar19 + 0xd0 ) = fVar37 * local_88 + fVar38 * fVar9 + fVar36 * fVar44 + local_78 + *(float*)( lVar19 + 0xd0 );
                  *(float*)( lVar19 + 0xd4 ) = fVar37 * fStack_84 + fVar38 * fVar10 + fVar36 * fVar6 + fStack_74 + *(float*)( lVar19 + 0xd4 );
                  *(float*)( lVar19 + 0xd8 ) = fVar37 * fStack_80 + fVar38 * fVar11 + fVar36 * fVar7 + fStack_70 + *(float*)( lVar19 + 0xd8 );
                  *(float*)( lVar19 + 0xdc ) = fVar37 * fStack_7c + fVar38 * fVar12 + fVar36 * fVar8 + fStack_6c + *(float*)( lVar19 + 0xdc );
               }

            }
 else if (0.0 < *(float*)( lVar19 + 0x6c )) {
               fVar37 = fVar26 * fVar4 + fVar22 * fVar48 + 0.0 + fVar25 * fVar49;
               fVar36 = fVar22 - fVar37 * fVar48;
               fVar38 = fVar25 - fVar37 * fVar49;
               fVar39 = fVar26 - fVar37 * fVar4;
               fVar43 = fVar27 - fVar37 * fVar5;
               fVar44 = SQRT(fVar39 * fVar39 + fVar36 * fVar36 + 0.0 + fVar38 * fVar38);
               if (0.0 < fVar44) {
                  fVar44 = ( *(float*)( lVar19 + 100 ) * fVar50 ) / ( fVar44 * fVar1 );
                  fVar50 = _LC2;
                  if (fVar44 <= _LC2) {
                     fVar50 = fVar44;
                  }

                  fVar36 = ( fVar22 - fVar50 * fVar36 ) - fVar37 * fVar48;
                  fVar38 = ( fVar25 - fVar50 * fVar38 ) - fVar37 * fVar49;
                  fVar39 = ( fVar26 - fVar50 * fVar39 ) - fVar37 * fVar4;
                  fVar43 = ( fVar27 - fVar50 * fVar43 ) - fVar37 * fVar5;
               }

               pfVar17[8] = fVar36;
               pfVar17[9] = fVar38;
               pfVar17[10] = fVar39;
               pfVar17[0xb] = fVar43;
               fVar37 = fVar49 * fVar35 + fVar20 * fVar48 + 0.0 + fVar4 * (float)uVar14;
               if (fVar37 < fVar21) {
                  fVar37 = fVar37 * *(float*)( lVar19 + 0x68 );
                  pfVar17[8] = fVar36 - fVar37 * fVar48;
                  pfVar17[9] = fVar38 - fVar37 * fVar49;
                  pfVar17[10] = fVar39 - fVar37 * fVar4;
                  pfVar17[0xb] = fVar43 - fVar37 * fVar5;
               }

            }

         }

      }

      do {
         pfVar17 = pfVar16 + 0x14;
         if (pfVar18 == pfVar17) {
            return;
         }

         fVar37 = pfVar16[0x27];
         pfVar16 = pfVar17;
      }
 while ( fVar37 <= 0.0 );
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::UpdateSoftBodyState(JPH::SoftBodyUpdateContext&,
   JPH::PhysicsSettings const&) */void JPH::SoftBodyMotionProperties::UpdateSoftBodyState(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, PhysicsSettings *param_2) {
   long *plVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   float fVar4;
   SoftBodyMotionProperties SVar5;
   undefined4 uVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   bool bVar11;
   bool bVar12;
   bool bVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   undefined8 uVar19;
   undefined8 uVar20;
   long lVar21;
   long lVar22;
   long lVar23;
   uint uVar24;
   ulong uVar25;
   int iVar26;
   long *plVar27;
   ulong uVar28;
   long lVar29;
   long lVar30;
   long in_FS_OFFSET;
   float fVar31;
   undefined1 auVar32[16];
   float fVar33;
   float fVar34;
   float fVar37;
   float fVar38;
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   float fVar39;
   undefined1 auVar40[16];
   float fVar43;
   float fVar44;
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   float fVar45;
   float fVar46;
   undefined1 auVar47[16];
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   SoftBodyMotionProperties *local_58;
   SoftBodyMotionProperties *local_50;
   SoftBodyMotionProperties *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0x1bd] != (SoftBodyMotionProperties)0x0 ) && ( plVar27 = *(long**)( param_1 + 0x10 ) ),plVar27 != (long*)0x0) {
      uVar24 = (int)*(undefined8*)( this + 0x138 ) - 1;
      if (-1 < (int)uVar24) {
         lVar29 = (long)(int)uVar24 * 0x60;
         lVar30 = ( (long)(int)*(undefined8*)( this + 0x138 ) - (ulong)uVar24 ) * 0x60 + -0xc0;
         do {
            while (true) {
               lVar21 = *(long*)( this + 0x148 );
               puVar2 = (undefined8*)( lVar21 + lVar29 );
               if (*(char*)( (long)puVar2 + 0x5c ) == '\0') break;
               LAB_00102200:lVar29 = lVar29 + -0x60;
               if (lVar30 == lVar29) goto LAB_00102386;
            }
;
            lVar23 = *(long*)( this + 0x138 );
            puVar3 = (undefined8*)( lVar21 + -0x60 + lVar23 * 0x60 );
            uVar19 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar19;
            for (int i = 0; i < 3; i++) {
               uVar19 = puVar3[( 2*i + 3 )];
               puVar2[( 2*i + 2 )] = puVar3[( 2*i + 2 )];
               puVar2[( 2*i + 3 )] = uVar19;
            }

            if (puVar3 + 8 != puVar2 + 8) {
               uVar28 = puVar2[10];
               if (uVar28 != 0) {
                  if (( puVar2[8] != 0 ) && ( uVar25 = uVar28 < uVar25 )) {
                     LAB_00102819:do {
                        plVar27 = *(long**)( uVar28 + 0x50 );
                        if (plVar27 != (long*)0x0) {
                           LOCK();
                           plVar1 = plVar27 + 1;
                           *(int*)plVar1 = (int)*plVar1 + -1;
                           UNLOCK();
                           if ((int)*plVar1 == 0) {
                              ( **(code**)( *plVar27 + 8 ) )();
                              uVar28 = uVar28 + 0x60;
                              if (uVar25 <= uVar28) break;
                              goto LAB_00102819;
                           }

                        }

                        uVar28 = uVar28 + 0x60;
                     }
 while ( uVar28 < uVar25 );
                     uVar28 = puVar2[10];
                  }

                  puVar2[8] = 0;
                  ( *Free )(uVar28);
                  puVar2[10] = 0;
                  lVar21 = *(long*)( this + 0x148 );
                  puVar2[9] = 0;
                  lVar23 = *(long*)( this + 0x138 );
               }

               uVar19 = puVar3[8];
               uVar20 = puVar3[9];
               puVar2[10] = puVar3[10];
               puVar2[8] = uVar19;
               puVar2[9] = uVar20;
               puVar3[10] = 0;
               *(undefined1(*) [16])( puVar3 + 8 ) = (undefined1[16])0x0;
            }

            uVar6 = *(undefined4*)( puVar3 + 0xb );
            *(undefined1*)( (long)puVar2 + 0x5c ) = *(undefined1*)( (long)puVar3 + 0x5c );
            *(undefined4*)( puVar2 + 0xb ) = uVar6;
            lVar21 = lVar21 + ( lVar23 + -1 ) * 0x60;
            *(long*)( this + 0x138 ) = lVar23 + -1;
            uVar28 = *(ulong*)( lVar21 + 0x50 );
            if (uVar28 == 0) goto LAB_00102200;
            if (( *(long*)( lVar21 + 0x40 ) != 0 ) && ( uVar25 = uVar28 < uVar25 )) {
               LAB_00102331:do {
                  plVar27 = *(long**)( uVar28 + 0x50 );
                  if (plVar27 != (long*)0x0) {
                     LOCK();
                     plVar1 = plVar27 + 1;
                     *(int*)plVar1 = (int)*plVar1 + -1;
                     UNLOCK();
                     if ((int)*plVar1 == 0) {
                        uVar28 = uVar28 + 0x60;
                        ( **(code**)( *plVar27 + 8 ) )();
                        if (uVar25 <= uVar28) break;
                        goto LAB_00102331;
                     }

                  }

                  uVar28 = uVar28 + 0x60;
               }
 while ( uVar28 < uVar25 );
               uVar28 = *(ulong*)( lVar21 + 0x50 );
            }

            lVar29 = lVar29 + -0x60;
            *(undefined8*)( lVar21 + 0x40 ) = 0;
            ( *Free )(uVar28);
         }
 while ( lVar30 != lVar29 );
         LAB_00102386:plVar27 = *(long**)( param_1 + 0x10 );
      }

      local_58 = this + 0x108;
      local_50 = this + 0x120;
      local_48 = this + 0x138;
      if (*(code**)( *plVar27 + 0x18 ) != SoftBodyContactListener::OnSoftBodyContactAdded) {
         ( **(code**)( *plVar27 + 0x18 ) )(plVar27, *(undefined8*)param_1, &local_58);
      }

   }

   uVar6 = _LC0;
   lVar29 = *(long*)( this + 0x108 );
   fVar4 = *(float*)( param_1 + 0x80 );
   lVar30 = *(long*)( this + 0x118 );
   *(undefined4*)( this + 0x170 ) = _LC0;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 372 ) ) = uVar6;
   }

   uVar6 = _LC8;
   *(undefined4*)( this + 0x180 ) = _LC8;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 388 ) ) = uVar6;
   }

   uVar19 = _UNK_00107818;
   lVar21 = lVar29 * 0x50 + lVar30;
   fVar46 = *(float*)( this + 100 ) * *(float*)( this + 100 );
   *(ulong*)( this + 400 ) = CONCAT44(_UNK_00107814, _LC0);
   *(undefined8*)( this + 0x198 ) = uVar19;
   uVar19 = _UNK_00107828;
   *(ulong*)( this + 0x1a0 ) = CONCAT44(_UNK_00107824, _LC8);
   *(undefined8*)( this + 0x1a8 ) = uVar19;
   uVar6 = _LC8;
   if (lVar21 == lVar30) {
      auVar41 = (undefined1[16])0x0;
      fVar45 = 0.0;
      auVar40 = ZEXT816(0);
   }
 else {
      lVar23 = lVar30;
      auVar32 = ZEXT816(0);
      auVar35 = (undefined1[16])0x0;
      fVar33 = 0.0;
      do {
         fVar48 = *(float*)( lVar23 + 0x20 );
         fVar49 = *(float*)( lVar23 + 0x24 );
         fVar50 = *(float*)( lVar23 + 0x28 );
         fVar51 = *(float*)( lVar23 + 0x2c );
         fVar31 = *(float*)( lVar23 + 0x28 ) * *(float*)( lVar23 + 0x28 ) + *(float*)( lVar23 + 0x20 ) * *(float*)( lVar23 + 0x20 ) + 0.0 + *(float*)( lVar23 + 0x24 ) * *(float*)( lVar23 + 0x24 );
         fVar45 = fVar31;
         if (fVar31 <= fVar33) {
            fVar45 = fVar33;
         }

         if (fVar46 < fVar31) {
            fVar33 = SQRT(fVar46 / fVar31);
            fVar48 = fVar48 * fVar33;
            fVar49 = fVar49 * fVar33;
            fVar50 = fVar50 * fVar33;
            fVar51 = fVar51 * fVar33;
            *(float*)( lVar23 + 0x20 ) = fVar48;
            *(float*)( lVar23 + 0x24 ) = fVar49;
            *(float*)( lVar23 + 0x28 ) = fVar50;
            *(float*)( lVar23 + 0x2c ) = fVar51;
         }

         auVar42 = *(undefined1(*) [16])( lVar23 + 0x10 );
         auVar41._0_4_ = auVar35._0_4_ + fVar48;
         auVar41._4_4_ = auVar35._4_4_ + fVar49;
         auVar41._8_4_ = auVar35._8_4_ + fVar50;
         auVar41._12_4_ = auVar35._12_4_ + fVar51;
         lVar22 = lVar23 + 0x50;
         fVar33 = fVar49 * auVar42._0_4_ - fVar48 * auVar42._4_4_;
         auVar40._0_4_ = auVar32._0_4_ + ( fVar50 * auVar42._4_4_ - fVar49 * auVar42._8_4_ );
         auVar40._4_4_ = auVar32._4_4_ + ( fVar48 * auVar42._8_4_ - fVar50 * auVar42._0_4_ );
         auVar40._8_4_ = auVar32._8_4_ + fVar33;
         auVar40._12_4_ = auVar32._12_4_ + fVar33;
         auVar32 = minps(*(undefined1(*) [16])( this + 0x170 ), auVar42);
         *(undefined1(*) [16])( this + 0x170 ) = auVar32;
         auVar32 = maxps(*(undefined1(*) [16])( this + 0x180 ), auVar42);
         *(undefined1(*) [16])( this + 0x180 ) = auVar32;
         auVar32._0_4_ = *(float*)( lVar23 + 0x20 ) * fVar4 + *(float*)( lVar23 + 0x10 ) + *(float*)( param_1 + 0x70 );
         auVar32._4_4_ = *(float*)( lVar23 + 0x24 ) * fVar4 + *(float*)( lVar23 + 0x14 ) + *(float*)( param_1 + 0x74 );
         auVar32._8_4_ = *(float*)( lVar23 + 0x28 ) * fVar4 + *(float*)( lVar23 + 0x18 ) + *(float*)( param_1 + 0x78 );
         auVar32._12_4_ = *(float*)( lVar23 + 0x2c ) * fVar4 + *(float*)( lVar23 + 0x1c ) + *(float*)( param_1 + 0x7c );
         auVar35 = minps(*(undefined1(*) [16])( this + 400 ), auVar32);
         *(undefined1(*) [16])( this + 400 ) = auVar35;
         auVar32 = maxps(*(undefined1(*) [16])( this + 0x1a0 ), auVar32);
         *(undefined1(*) [16])( this + 0x1a0 ) = auVar32;
         *(undefined4*)( lVar23 + 0x48 ) = uVar6;
         *(undefined4*)( lVar23 + 0x40 ) = 0xffffffff;
         *(undefined1*)( lVar23 + 0x44 ) = 0;
         lVar23 = lVar22;
         auVar32 = auVar40;
         auVar35 = auVar41;
         fVar33 = fVar45;
      }
 while ( lVar21 != lVar22 );
   }

   iVar26 = (int)lVar29;
   fVar46 = *(float*)( param_1 + 0x20 );
   fVar33 = *(float*)( param_1 + 0x24 );
   fVar48 = *(float*)( param_1 + 0x28 );
   fVar49 = *(float*)( param_1 + 0x2c );
   if (iVar26 < 1) {
      iVar26 = 1;
   }

   fVar50 = *(float*)( param_1 + 0x30 );
   fVar51 = *(float*)( param_1 + 0x34 );
   fVar31 = *(float*)( param_1 + 0x38 );
   fVar14 = *(float*)( param_1 + 0x3c );
   fVar15 = *(float*)( param_1 + 0x40 );
   fVar16 = *(float*)( param_1 + 0x44 );
   fVar17 = *(float*)( param_1 + 0x48 );
   fVar18 = *(float*)( param_1 + 0x4c );
   SVar5 = this[0x7a];
   auVar47._0_4_ = (float)iVar26;
   auVar36._1_3_ = 0;
   auVar36[0] = SVar5;
   auVar36[4] = SVar5;
   auVar36._5_3_ = 0;
   auVar36[8] = SVar5;
   auVar36._9_3_ = 0;
   auVar36[0xc] = SVar5;
   auVar36._13_3_ = 0;
   auVar47._4_4_ = auVar47._0_4_;
   auVar47._8_4_ = auVar47._0_4_;
   auVar47._12_4_ = auVar47._0_4_;
   auVar41 = divps(auVar41, auVar47);
   auVar40 = divps(auVar40, auVar47);
   fVar39 = auVar41._0_4_;
   fVar43 = auVar41._4_4_;
   fVar44 = auVar41._8_4_;
   auVar42._4_4_ = _UNK_001077f4;
   auVar42._0_4_ = __LC23;
   auVar42._8_4_ = _UNK_001077f8;
   auVar42._12_4_ = _UNK_001077fc;
   auVar42 = auVar42 & auVar36;
   auVar35._4_4_ = _UNK_001077c4;
   auVar35._0_4_ = __LC5;
   auVar35._8_4_ = _UNK_001077c8;
   auVar35._12_4_ = _UNK_001077cc;
   auVar36 = auVar36 & auVar35;
   bVar8 = auVar42._4_4_ == _UNK_001077f4;
   bVar10 = auVar42._8_4_ == _UNK_001077f8;
   bVar12 = auVar42._12_4_ == _UNK_001077fc;
   bVar7 = auVar36._0_4_ == __LC5;
   bVar9 = auVar36._4_4_ == _UNK_001077c4;
   bVar11 = auVar36._8_4_ == _UNK_001077c8;
   bVar13 = auVar36._12_4_ == _UNK_001077cc;
   fVar34 = auVar40._0_4_;
   fVar37 = auVar40._4_4_;
   fVar38 = auVar40._8_4_;
   *(uint*)this = ( uint )(fVar39 * fVar46 + fVar43 * fVar50 + fVar44 * fVar15) & -(uint)(auVar42._0_4_ == __LC23);
   *(uint*)( this + 4 ) = ( uint )(fVar39 * fVar33 + fVar43 * fVar51 + fVar44 * fVar16) & -(uint)bVar8;
   *(uint*)( this + 8 ) = ( uint )(fVar39 * fVar48 + fVar43 * fVar31 + fVar44 * fVar17) & -(uint)bVar10;
   *(uint*)( this + 0xc ) = ( uint )(fVar39 * fVar49 + fVar43 * fVar14 + fVar44 * fVar18) & -(uint)bVar12;
   *(uint*)( this + 0x10 ) = ( uint )(fVar34 * fVar46 + fVar37 * fVar50 + fVar38 * fVar15) & -(uint)bVar7;
   *(uint*)( this + 0x14 ) = ( uint )(fVar34 * fVar33 + fVar37 * fVar51 + fVar38 * fVar16) & -(uint)bVar9;
   *(uint*)( this + 0x18 ) = ( uint )(fVar34 * fVar48 + fVar37 * fVar31 + fVar38 * fVar17) & -(uint)bVar11;
   *(uint*)( this + 0x1c ) = ( uint )(fVar34 * fVar49 + fVar37 * fVar14 + fVar38 * fVar18) & -(uint)bVar13;
   if (this[0x1bc] == (SoftBodyMotionProperties)0x0) {
      *(undefined1(*) [16])( param_1 + 0xb0 ) = (undefined1[16])0x0;
   }
 else {
      fVar34 = ( *(float*)( this + 0x180 ) + *(float*)( this + 0x170 ) ) * _LC25;
      fVar37 = ( *(float*)( this + 0x184 ) + *(float*)( this + 0x174 ) ) * _LC25;
      fVar38 = ( *(float*)( this + 0x188 ) + *(float*)( this + 0x178 ) ) * _LC25;
      fVar39 = ( *(float*)( this + 0x18c ) + *(float*)( this + 0x17c ) ) * _LC25;
      *(float*)( param_1 + 0xb0 ) = fVar34 * fVar46 + fVar37 * fVar50 + fVar38 * fVar15;
      *(float*)( param_1 + 0xb4 ) = fVar34 * fVar33 + fVar37 * fVar51 + fVar38 * fVar16;
      *(float*)( param_1 + 0xb8 ) = fVar34 * fVar48 + fVar37 * fVar31 + fVar38 * fVar17;
      *(float*)( param_1 + 0xbc ) = fVar34 * fVar49 + fVar37 * fVar14 + fVar38 * fVar18;
      for (; lVar21 != lVar30; lVar30 = lVar30 + 0x50) {
         *(float*)( lVar30 + 0x10 ) = *(float*)( lVar30 + 0x10 ) - fVar34;
         *(float*)( lVar30 + 0x14 ) = *(float*)( lVar30 + 0x14 ) - fVar37;
         *(float*)( lVar30 + 0x18 ) = *(float*)( lVar30 + 0x18 ) - fVar38;
         *(float*)( lVar30 + 0x1c ) = *(float*)( lVar30 + 0x1c ) - fVar39;
      }

      lVar29 = *(long*)( this + 0x160 );
      lVar30 = *(long*)( this + 0x150 ) * 0x30 + lVar29;
      for (; lVar30 != lVar29; lVar29 = lVar29 + 0x30) {
         *(float*)( lVar29 + 0x10 ) = *(float*)( lVar29 + 0x10 ) - fVar34;
         *(float*)( lVar29 + 0x14 ) = *(float*)( lVar29 + 0x14 ) - fVar37;
         *(float*)( lVar29 + 0x18 ) = *(float*)( lVar29 + 0x18 ) - fVar38;
         *(float*)( lVar29 + 0x1c ) = *(float*)( lVar29 + 0x1c ) - fVar39;
      }

      fVar46 = *(float*)( param_1 + 0xb0 );
      fVar33 = *(float*)( param_1 + 0xb4 );
      fVar48 = *(float*)( param_1 + 0xb8 );
      *(undefined4*)( this + 0xfc ) = 0x3f800000;
      *(ulong*)( this + 0xf0 ) = CONCAT44(*(float*)( this + 0xf4 ) + fVar33, *(float*)( this + 0xf0 ) + fVar46);
      *(float*)( this + 0xf8 ) = *(float*)( this + 0xf8 ) + fVar48;
      fVar34 = 0.0 - fVar34;
      fVar37 = 0.0 - fVar37;
      fVar38 = 0.0 - fVar38;
      fVar39 = 0.0 - fVar39;
      for (int i = 0; i < 3; i++) {
         *(float*)( this + ( 16*i + 368 ) ) = *(float*)( this + ( 16*i + 368 ) ) + fVar34;
         *(float*)( this + ( 16*i + 372 ) ) = *(float*)( this + ( 16*i + 372 ) ) + fVar37;
         *(float*)( this + ( 16*i + 376 ) ) = *(float*)( this + ( 16*i + 376 ) ) + fVar38;
         *(float*)( this + ( 16*i + 380 ) ) = *(float*)( this + ( 16*i + 380 ) ) + fVar39;
      }

      *(float*)( this + 0x1a0 ) = fVar34 + *(float*)( this + 0x1a0 );
      *(float*)( this + 0x1a4 ) = fVar37 + *(float*)( this + 0x1a4 );
      *(float*)( this + 0x1a8 ) = fVar38 + *(float*)( this + 0x1a8 );
      *(float*)( this + 0x1ac ) = fVar39 + *(float*)( this + 0x1ac );
   }

   if (this[0x79] != (SoftBodyMotionProperties)0x0) {
      if (fVar45 < *(float*)( param_2 + 0x48 ) || fVar45 == *(float*)( param_2 + 0x48 )) {
         fVar46 = *(float*)( this + 0xb0 );
         fVar45 = *(float*)( param_2 + 0x44 );
         *(float*)( this + 0xb0 ) = fVar4 + fVar46;
         uVar24 = ( uint )(fVar45 <= fVar4 + fVar46);
         goto LAB_00102761;
      }

      *(undefined4*)( this + 0xb0 ) = 0;
   }

   uVar24 = 0;
   LAB_00102761:*(uint*)( param_1 + 0xc0 ) = uVar24;
   this[0x1bf] = (SoftBodyMotionProperties)0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined4*)( this + 0x48 ) = 0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::SoftBodyMotionProperties::UpdateRigidBodyVelocities(JPH::SoftBodyUpdateContext const&,
   JPH::BodyInterface&) */void JPH::SoftBodyMotionProperties::UpdateRigidBodyVelocities(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, BodyInterface *param_2) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   lVar4 = *(long*)( this + 0x120 );
   lVar3 = *(long*)( this + 0x130 );
   lVar6 = lVar4 * 0x100 + lVar3;
   if (lVar6 != lVar3) {
      do {
         while (*(char*)( lVar3 + 0x70 ) != '\0') {
            fVar10 = *(float*)( lVar3 + 0xd0 ) - *(float*)( lVar3 + 0xf0 );
            fVar12 = *(float*)( lVar3 + 0xd4 ) - *(float*)( lVar3 + 0xf4 );
            fVar14 = *(float*)( lVar3 + 0xd8 ) - *(float*)( lVar3 + 0xf8 );
            lVar4 = lVar3 + 0x100;
            fVar11 = *(float*)( lVar3 + 0xc0 ) - *(float*)( lVar3 + 0xe0 );
            fVar13 = *(float*)( lVar3 + 0xc4 ) - *(float*)( lVar3 + 0xe4 );
            fVar15 = *(float*)( lVar3 + 200 ) - *(float*)( lVar3 + 0xe8 );
            JPH::BodyInterface::AddLinearAndAngularVelocity(CONCAT44(fVar11 * *(float*)( param_1 + 0x24 ) + fVar13 * *(float*)( param_1 + 0x34 ) + fVar15 * *(float*)( param_1 + 0x44 ), fVar11 * *(float*)( param_1 + 0x20 ) + fVar13 * *(float*)( param_1 + 0x30 ) + fVar15 * *(float*)( param_1 + 0x40 )), CONCAT44(fVar11 * *(float*)( param_1 + 0x2c ) + fVar13 * *(float*)( param_1 + 0x3c ) + fVar15 * *(float*)( param_1 + 0x4c ), fVar11 * *(float*)( param_1 + 0x28 ) + fVar13 * *(float*)( param_1 + 0x38 ) + fVar15 * *(float*)( param_1 + 0x48 )), CONCAT44(fVar10 * *(float*)( param_1 + 0x24 ) + fVar12 * *(float*)( param_1 + 0x34 ) + fVar14 * *(float*)( param_1 + 0x44 ), fVar10 * *(float*)( param_1 + 0x20 ) + fVar12 * *(float*)( param_1 + 0x30 ) + fVar14 * *(float*)( param_1 + 0x40 )), CONCAT44(fVar10 * *(float*)( param_1 + 0x2c ) + fVar12 * *(float*)( param_1 + 0x3c ) + fVar14 * *(float*)( param_1 + 0x4c ), fVar10 * *(float*)( param_1 + 0x28 ) + fVar12 * *(float*)( param_1 + 0x38 ) + fVar14 * *(float*)( param_1 + 0x48 )), param_2, lVar3 + 0x58);
            lVar3 = lVar4;
            if (lVar4 == lVar6) goto LAB_00102976;
         }
;
         lVar3 = lVar3 + 0x100;
      }
 while ( lVar3 != lVar6 );
      LAB_00102976:lVar4 = *(long*)( this + 0x120 );
   }

   if (lVar4 != 0) {
      uVar7 = *(ulong*)( this + 0x130 );
      uVar9 = lVar4 * 0x100 + uVar7;
      for (; uVar7 < uVar9; uVar7 = uVar7 + 0x100) {
         uVar5 = *(ulong*)( uVar7 + 0x50 );
         if (uVar5 != 0) {
            if (( *(long*)( uVar7 + 0x40 ) != 0 ) && ( uVar8 = uVar5 < uVar8 )) {
               LAB_001029d9:do {
                  plVar2 = *(long**)( uVar5 + 0x50 );
                  if (plVar2 != (long*)0x0) {
                     LOCK();
                     plVar1 = plVar2 + 1;
                     *(int*)plVar1 = (int)*plVar1 + -1;
                     UNLOCK();
                     if ((int)*plVar1 == 0) {
                        uVar5 = uVar5 + 0x60;
                        ( **(code**)( *plVar2 + 8 ) )();
                        if (uVar8 <= uVar5) break;
                        goto LAB_001029d9;
                     }

                  }

                  uVar5 = uVar5 + 0x60;
               }
 while ( uVar5 < uVar8 );
               uVar5 = *(ulong*)( uVar7 + 0x50 );
            }

            *(undefined8*)( uVar7 + 0x40 ) = 0;
            ( *Free )(uVar5);
         }

      }

   }

   *(undefined8*)( this + 0x120 ) = 0;
   if (*(long*)( this + 0x138 ) != 0) {
      uVar7 = *(ulong*)( this + 0x148 );
      uVar9 = *(long*)( this + 0x138 ) * 0x60 + uVar7;
      for (; uVar7 < uVar9; uVar7 = uVar7 + 0x60) {
         uVar5 = *(ulong*)( uVar7 + 0x50 );
         if (uVar5 != 0) {
            if (( *(long*)( uVar7 + 0x40 ) != 0 ) && ( uVar8 = uVar5 < uVar8 )) {
               LAB_00102a99:do {
                  plVar2 = *(long**)( uVar5 + 0x50 );
                  if (plVar2 != (long*)0x0) {
                     LOCK();
                     plVar1 = plVar2 + 1;
                     *(int*)plVar1 = (int)*plVar1 + -1;
                     UNLOCK();
                     if ((int)*plVar1 == 0) {
                        uVar5 = uVar5 + 0x60;
                        ( **(code**)( *plVar2 + 8 ) )();
                        if (uVar8 <= uVar5) break;
                        goto LAB_00102a99;
                     }

                  }

                  uVar5 = uVar5 + 0x60;
               }
 while ( uVar5 < uVar8 );
               uVar5 = *(ulong*)( uVar7 + 0x50 );
            }

            *(undefined8*)( uVar7 + 0x40 ) = 0;
            ( *Free )(uVar5);
         }

      }

   }

   *(undefined8*)( this + 0x138 ) = 0;
   return;
}
/* JPH::SoftBodyMotionProperties::InitializeUpdateContext(float, JPH::Body&, JPH::PhysicsSystem
   const&, JPH::SoftBodyUpdateContext&) */void JPH::SoftBodyMotionProperties::InitializeUpdateContext(SoftBodyMotionProperties *this, float param_1, Body *param_2, PhysicsSystem *param_3, SoftBodyUpdateContext *param_4) {
   undefined4 uVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   *(Body**)param_4 = param_2;
   uVar3 = *(undefined8*)( param_3 + 0x198 );
   uVar4 = *(undefined8*)param_2;
   *(SoftBodyMotionProperties**)( param_4 + 8 ) = this;
   fVar9 = _LC2;
   *(undefined8*)( param_4 + 0x10 ) = uVar3;
   *(undefined8*)( param_4 + 0x18 ) = *(undefined8*)( param_3 + 0x1a0 );
   uVar3 = *(undefined8*)( param_2 + 0x10 );
   uVar5 = *(undefined8*)( param_2 + 0x18 );
   uVar1 = *(undefined4*)( param_2 + 8 );
   *(undefined8*)( param_4 + 0x50 ) = uVar4;
   fVar7 = (float)uVar3;
   *(float*)( param_4 + 0x5c ) = fVar9;
   fVar8 = (float)( (ulong)uVar3 >> 0x20 );
   fVar15 = (float)uVar5;
   fVar16 = fVar7 + fVar7;
   fVar17 = (float)( (ulong)uVar5 >> 0x20 );
   *(undefined4*)( param_4 + 0x58 ) = uVar1;
   uVar2 = *(uint*)( this + 0x1b0 );
   fVar22 = fVar8 + fVar8;
   fVar20 = fVar15 * ( fVar15 + fVar15 );
   fVar10 = fVar17 * ( fVar15 + fVar15 );
   fVar14 = fVar15 * fVar16 - fVar22 * fVar17;
   fVar6 = ( fVar9 - fVar7 * fVar16 ) - fVar8 * fVar22;
   fVar21 = fVar15 * fVar16 + fVar22 * fVar17;
   fVar19 = fVar15 * fVar22 - fVar16 * fVar17;
   fVar17 = fVar16 * fVar17 + fVar15 * fVar22;
   fVar15 = fVar8 * fVar16 + fVar10;
   fVar10 = fVar8 * fVar16 - fVar10;
   fVar18 = ( fVar9 - fVar20 ) - fVar7 * fVar16;
   fVar20 = ( fVar9 - fVar8 * fVar22 ) - fVar20;
   auVar11._4_4_ = fVar15;
   auVar11._0_4_ = fVar20;
   auVar11._8_4_ = fVar14;
   auVar11._12_4_ = 0;
   *(undefined1(*) [16])( param_4 + 0x20 ) = auVar11;
   fVar9 = *(float*)( this + 0x6c );
   auVar12._4_4_ = fVar18;
   auVar12._0_4_ = fVar10;
   auVar12._8_4_ = fVar17;
   auVar12._12_4_ = 0;
   *(undefined1(*) [16])( param_4 + 0x30 ) = auVar12;
   auVar13._4_4_ = fVar19;
   auVar13._0_4_ = fVar21;
   auVar13._8_4_ = fVar6;
   auVar13._12_4_ = 0;
   *(undefined1(*) [16])( param_4 + 0x40 ) = auVar13;
   fVar7 = fVar9 * *(float*)( param_3 + 0x400 );
   fVar8 = fVar9 * *(float*)( param_3 + 0x404 );
   fVar9 = fVar9 * *(float*)( param_3 + 0x408 );
   fVar22 = (float)uVar2;
   fVar16 = param_1 / fVar22;
   fVar22 = fVar22 * _LC25;
   fVar15 = fVar7 * fVar20 + fVar8 * fVar15 + fVar9 * fVar14;
   fVar17 = fVar7 * fVar10 + fVar8 * fVar18 + fVar9 * fVar17;
   fVar6 = fVar7 * fVar21 + fVar8 * fVar19 + fVar9 * fVar6;
   fVar7 = fVar7 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0;
   *(float*)( param_4 + 0x60 ) = fVar15;
   *(float*)( param_4 + 100 ) = fVar17;
   *(float*)( param_4 + 0x68 ) = fVar6;
   *(float*)( param_4 + 0x6c ) = fVar7;
   *(ulong*)( param_4 + 0x80 ) = CONCAT44(fVar16, param_1);
   fVar9 = (float)( uVar2 + 1 ) * fVar22 * fVar16 * fVar16;
   *(float*)( param_4 + 0x70 ) = fVar9 * fVar15;
   *(float*)( param_4 + 0x74 ) = fVar9 * fVar17;
   *(float*)( param_4 + 0x78 ) = fVar9 * fVar6;
   *(float*)( param_4 + 0x7c ) = fVar9 * fVar7;
   return;
}
/* JPH::SoftBodyMotionProperties::StartNextIteration(JPH::SoftBodyUpdateContext const&) */void JPH::SoftBodyMotionProperties::StartNextIteration(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   ApplyPressure(this, param_1);
   IntegratePositions(this, param_1);
   return;
}
/* JPH::SoftBodyMotionProperties::StartFirstIteration(JPH::SoftBodyUpdateContext&) */void JPH::SoftBodyMotionProperties::StartFirstIteration(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   LOCK();
   *(int*)( param_1 + 0x9c ) = *(int*)( param_1 + 0x9c ) + 1;
   UNLOCK();
   ApplyPressure(this, param_1);
   IntegratePositions(this, param_1);
   *(undefined4*)( param_1 + 0x88 ) = 2;
   return;
}
/* JPH::SoftBodyMotionProperties::ParallelDetermineCollisionPlanes(JPH::SoftBodyUpdateContext&) */undefined8 JPH::SoftBodyMotionProperties::ParallelDetermineCollisionPlanes(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   SoftBodyUpdateContext *pSVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   uVar5 = ( uint ) * (undefined8*)( this + 0x108 );
   if (*(uint*)( param_1 + 0x8c ) < uVar5) {
      pSVar1 = param_1 + 0x8c;
      LOCK();
      uVar2 = *(uint*)pSVar1;
      *(uint*)pSVar1 = *(uint*)pSVar1 + 0x40;
      UNLOCK();
      if (uVar2 < uVar5) {
         uVar4 = uVar5 - uVar2;
         if (0x40 < uVar5 - uVar2) {
            uVar4 = 0x40;
         }

         DetermineCollisionPlanes(this, uVar2, uVar4);
         LOCK();
         pSVar1 = param_1 + 0x90;
         iVar3 = *(int*)pSVar1;
         *(int*)pSVar1 = *(int*)pSVar1 + 0x40;
         UNLOCK();
         if (uVar5 <= uVar4 + iVar3) {
            if (*(long*)( this + 0x138 ) == 0) {
               LOCK();
               *(int*)( param_1 + 0x9c ) = *(int*)( param_1 + 0x9c ) + 1;
               UNLOCK();
               ApplyPressure(this, param_1);
               IntegratePositions(this, param_1);
               *(undefined4*)( param_1 + 0x88 ) = 2;
            }
 else {
               *(undefined4*)( param_1 + 0x88 ) = 1;
            }

         }

         return 2;
      }

   }

   return 1;
}
/* JPH::SoftBodyMotionProperties::ParallelDetermineSensorCollisions(JPH::SoftBodyUpdateContext&) */undefined8 JPH::SoftBodyMotionProperties::ParallelDetermineSensorCollisions(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1) {
   SoftBodyUpdateContext *pSVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   uVar4 = ( uint ) * (undefined8*)( this + 0x138 );
   if (*(uint*)( param_1 + 0x94 ) < uVar4) {
      pSVar1 = param_1 + 0x94;
      LOCK();
      uVar2 = *(uint*)pSVar1;
      *(uint*)pSVar1 = *(uint*)pSVar1 + 1;
      UNLOCK();
      if (uVar2 < uVar4) {
         DetermineSensorCollisions(this, (CollidingSensor*)( (ulong)uVar2 * 0x60 + *(long*)( this + 0x148 ) ));
         LOCK();
         pSVar1 = param_1 + 0x98;
         iVar3 = *(int*)pSVar1;
         *(int*)pSVar1 = *(int*)pSVar1 + 1;
         UNLOCK();
         if (uVar4 <= iVar3 + 1U) {
            LOCK();
            *(int*)( param_1 + 0x9c ) = *(int*)( param_1 + 0x9c ) + 1;
            UNLOCK();
            ApplyPressure(this, param_1);
            IntegratePositions(this, param_1);
            *(undefined4*)( param_1 + 0x88 ) = 2;
         }

         return 2;
      }

   }

   return 1;
}
/* JPH::SoftBodyMotionProperties::ProcessGroup(JPH::SoftBodyUpdateContext const&, unsigned int) */void JPH::SoftBodyMotionProperties::ProcessGroup(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, uint param_2) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   uint uVar4;
   uint *puVar5;
   long in_FS_OFFSET;
   uint local_48[4];
   undefined4 local_38;
   long local_30;
   puVar5 = local_48;
   lVar2 = *(long*)( this + 0x100 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      local_48[i] = 0;
   }

   lVar3 = *(long*)( lVar2 + 0x110 );
   local_38 = 0;
   if (param_2 == 0) {
      uVar4 = 0;
   }
 else {
      puVar5 = (uint*)( lVar3 + ( ulong )(param_2 - 1) * 0x14 );
      uVar4 = puVar5[3];
   }

   puVar1 = (uint*)( lVar3 + (ulong)param_2 * 0x14 );
   ApplyVolumeConstraints(this, param_1, uVar4, puVar1[3]);
   ApplyDihedralBendConstraints(this, param_1, puVar5[2], puVar1[2]);
   if (( *(long*)( lVar2 + 0x80 ) != 0 ) && ( this[0x1be] != (SoftBodyMotionProperties)0x0 )) {
      ApplySkinConstraints(this, param_1, puVar5[4], puVar1[4]);
   }

   ApplyEdgeConstraints(this, param_1, *puVar5, *puVar1);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ApplyLRAConstraints(this, puVar5[1], puVar1[1]);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::SoftBodyMotionProperties::ParallelApplyConstraints(JPH::SoftBodyUpdateContext&,
   JPH::PhysicsSettings const&) */undefined8 JPH::SoftBodyMotionProperties::ParallelApplyConstraints(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, PhysicsSettings *param_2) {
   SoftBodyUpdateContext *pSVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   SoftBodyUpdateContext *pSVar5;
   SoftBodyMotionProperties *this_00;
   pSVar1 = param_1 + 0xa0;
   uVar4 = (int)*(undefined8*)( *(long*)( this + 0x100 ) + 0x100 ) - 1;
   if (*(uint*)( param_1 + 0xa0 ) < uVar4) {
      LOCK();
      uVar2 = *(uint*)pSVar1;
      *(uint*)pSVar1 = *(uint*)pSVar1 + 1;
      UNLOCK();
      if (uVar4 <= uVar2) {
         return 1;
      }

      ProcessGroup(this, param_1, uVar2);
      LOCK();
      pSVar1 = param_1 + 0xa4;
      iVar3 = *(int*)pSVar1;
      *(int*)pSVar1 = *(int*)pSVar1 + 1;
      UNLOCK();
      if (iVar3 + 1U < uVar4) {
         return 2;
      }

   }
 else {
      if (*(uint*)( param_1 + 0xa0 ) != 0 || uVar4 != 0) {
         return 1;
      }

      LOCK();
      uVar2 = *(uint*)pSVar1;
      *(uint*)pSVar1 = *(uint*)pSVar1 + 1;
      UNLOCK();
      if (uVar2 != 0) {
         return 1;
      }

   }

   ProcessGroup(this, param_1, uVar4);
   pSVar5 = param_1;
   this_00 = this;
   ApplyCollisionConstraintsAndUpdateVelocities(this, param_1);
   LOCK();
   pSVar1 = param_1 + 0x9c;
   uVar4 = *(uint*)pSVar1;
   *(uint*)pSVar1 = *(uint*)pSVar1 + 1;
   UNLOCK();
   if (uVar4 < *(uint*)( this + 0x1b0 )) {
      ApplyPressure(this_00, pSVar5);
      IntegratePositions(this, param_1);
      *(undefined4*)( param_1 + 0xa4 ) = 0;
      *(undefined4*)( param_1 + 0xa0 ) = 0;
      return 2;
   }

   UpdateSoftBodyState(this_00, pSVar5, param_2);
   *(undefined4*)( param_1 + 0x88 ) = 3;
   return 4;
}
/* JPH::SoftBodyMotionProperties::ParallelUpdate(JPH::SoftBodyUpdateContext&, JPH::PhysicsSettings
   const&) */long JPH::SoftBodyMotionProperties::ParallelUpdate(SoftBodyMotionProperties *this, SoftBodyUpdateContext *param_1, PhysicsSettings *param_2) {
   uint uVar1;
   long lVar2;
   uVar1 = *(uint*)( param_1 + 0x88 );
   if (uVar1 == 2) {
      lVar2 = ParallelApplyConstraints(this, param_1, param_2);
      return lVar2;
   }

   if (uVar1 < 3) {
      if (uVar1 != 0) {
         lVar2 = ParallelDetermineSensorCollisions(this, param_1);
         return lVar2;
      }

      lVar2 = ParallelDetermineCollisionPlanes(this, param_1);
      return lVar2;
   }

   return ( ulong )(uVar1 == 3) * 3 + 1;
}
/* JPH::SoftBodyMotionProperties::SkinVertices(JPH::Mat44 const&, JPH::Mat44 const*, unsigned int,
   bool, JPH::TempAllocator&) */void JPH::SoftBodyMotionProperties::SkinVertices(SoftBodyMotionProperties *this, Mat44 *param_1, Mat44 *param_2, uint param_3, bool param_4, TempAllocator *param_5) {
   float *pfVar1;
   float *pfVar2;
   ulong uVar3;
   long lVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   undefined8 uVar18;
   undefined8 *puVar19;
   Mat44 *pMVar20;
   long lVar21;
   float *pfVar22;
   undefined8 *puVar23;
   uint *puVar24;
   long lVar25;
   undefined4 in_register_0000000c;
   uint *puVar26;
   uint *puVar27;
   uint *puVar28;
   uint *puVar29;
   uint *puVar30;
   int iVar31;
   uint uVar32;
   long in_FS_OFFSET;
   float fVar33;
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   float fVar36;
   float fVar38;
   float fVar39;
   undefined1 auVar37[16];
   float fVar40;
   float fVar41;
   float fVar42;
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(ulong*)( *(long*)( this + 0x100 ) + 0x98 );
   iVar31 = (int)uVar3 << 6;
   puVar19 = (undefined8*)( **(code**)( *(long*)param_5 + 0x10 ) )(param_5, iVar31, param_2, CONCAT44(in_register_0000000c, param_3));
   lVar25 = *(long*)( this + 0x100 );
   puVar26 = *(uint**)( lVar25 + 0xa8 );
   for (puVar23 = puVar19; puVar23 < puVar19 + ( uVar3 & 0xffffffff ) * 8; puVar23 = puVar23 + 8) {
      pMVar20 = param_2 + ( ulong ) * puVar26 * 0x40;
      fVar5 = *(float*)pMVar20;
      fVar33 = *(float*)( pMVar20 + 4 );
      fVar38 = *(float*)( pMVar20 + 8 );
      fVar36 = *(float*)( pMVar20 + 0xc );
      fVar39 = *(float*)( pMVar20 + 0x10 );
      fVar40 = *(float*)( pMVar20 + 0x14 );
      fVar41 = *(float*)( pMVar20 + 0x18 );
      fVar42 = *(float*)( pMVar20 + 0x1c );
      fVar6 = *(float*)( pMVar20 + 0x20 );
      fVar7 = *(float*)( pMVar20 + 0x24 );
      fVar8 = *(float*)( pMVar20 + 0x28 );
      fVar9 = *(float*)( pMVar20 + 0x2c );
      fVar10 = *(float*)( pMVar20 + 0x30 );
      fVar11 = *(float*)( pMVar20 + 0x34 );
      fVar12 = *(float*)( pMVar20 + 0x38 );
      fVar13 = *(float*)( pMVar20 + 0x3c );
      lVar21 = 0;
      do {
         pfVar22 = (float*)( (long)puVar26 + lVar21 + 0x10 );
         fVar14 = *pfVar22;
         fVar15 = pfVar22[1];
         fVar16 = pfVar22[2];
         fVar17 = pfVar22[3];
         *(float*)( (long)&local_88 + lVar21 ) = fVar17 * fVar10 + fVar14 * fVar5 + fVar15 * fVar39 + fVar16 * fVar6;
         *(float*)( (long)&local_88 + lVar21 + 4 ) = fVar17 * fVar11 + fVar14 * fVar33 + fVar15 * fVar40 + fVar16 * fVar7;
         *(float*)( (long)&uStack_80 + lVar21 ) = fVar17 * fVar12 + fVar14 * fVar38 + fVar15 * fVar41 + fVar16 * fVar8;
         *(float*)( (long)&uStack_80 + lVar21 + 4 ) = fVar17 * fVar13 + fVar14 * fVar36 + fVar15 * fVar42 + fVar16 * fVar9;
         lVar21 = lVar21 + 0x10;
      }
 while ( lVar21 != 0x40 );
      puVar26 = puVar26 + 0x14;
      *puVar23 = local_88;
      puVar23[1] = uStack_80;
      puVar23[2] = local_78;
      puVar23[3] = uStack_70;
      puVar23[4] = local_68;
      puVar23[5] = uStack_60;
      puVar23[6] = local_58;
      puVar23[7] = uStack_50;
   }

   uVar18 = *(undefined8*)( param_1 + 8 );
   lVar21 = *(long*)( lVar25 + 0x80 );
   puVar27 = *(uint**)( lVar25 + 0x90 );
   *(undefined8*)( this + 0xc0 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 200 ) = uVar18;
   uVar18 = *(undefined8*)( param_1 + 0x18 );
   *(undefined8*)( this + 0xd0 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( this + 0xd8 ) = uVar18;
   uVar18 = *(undefined8*)( param_1 + 0x28 );
   puVar26 = puVar27 + lVar21 * 0xd;
   *(undefined8*)( this + 0xe0 ) = *(undefined8*)( param_1 + 0x20 );
   *(undefined8*)( this + 0xe8 ) = uVar18;
   uVar18 = *(undefined8*)( param_1 + 0x38 );
   lVar21 = *(long*)( lVar25 + 0x18 );
   *(undefined8*)( this + 0xf0 ) = *(undefined8*)( param_1 + 0x30 );
   *(undefined8*)( this + 0xf8 ) = uVar18;
   if (puVar26 != puVar27) {
      puVar29 = puVar27 + 1;
      lVar4 = *(long*)( this + 0x160 );
      puVar28 = puVar27 + 9;
      do {
         pfVar22 = (float*)( lVar21 + (ulong)puVar28[-9] * 0x1c );
         fVar5 = *pfVar22;
         fVar33 = pfVar22[1];
         fVar38 = pfVar22[2];
         puVar30 = puVar29;
         auVar34 = (undefined1[16])0x0;
         do {
            fVar36 = (float)puVar30[1];
            auVar43 = auVar34;
            if (fVar36 == 0.0) break;
            uVar32 = *puVar30;
            puVar30 = puVar30 + 2;
            pfVar22 = (float*)( puVar19 + (ulong)uVar32 * 8 );
            auVar43._0_4_ = auVar34._0_4_ + ( *pfVar22 * fVar5 + pfVar22[4] * fVar33 + pfVar22[8] * fVar38 + pfVar22[0xc] ) * fVar36;
            auVar43._4_4_ = auVar34._4_4_ + ( pfVar22[1] * fVar5 + pfVar22[5] * fVar33 + pfVar22[9] * fVar38 + pfVar22[0xd] ) * fVar36;
            auVar43._8_4_ = auVar34._8_4_ + ( pfVar22[2] * fVar5 + pfVar22[6] * fVar33 + pfVar22[10] * fVar38 + pfVar22[0xe] ) * fVar36;
            auVar43._12_4_ = auVar34._12_4_ + ( pfVar22[3] * fVar5 + pfVar22[7] * fVar33 + pfVar22[0xb] * fVar38 + pfVar22[0xf] ) * fVar36;
            auVar34 = auVar43;
         }
 while ( puVar28 != puVar30 );
         puVar29 = puVar29 + 0xd;
         puVar23 = (undefined8*)( (ulong)puVar28[-9] * 0x30 + lVar4 );
         uVar18 = puVar23[2];
         *(undefined1(*) [16])( puVar23 + 2 ) = auVar43;
         *puVar23 = uVar18;
         puVar23[1] = puVar23[3];
         fVar5 = _LC29;
         puVar24 = puVar28 + 4;
         puVar28 = puVar28 + 0xd;
         puVar30 = puVar27;
      }
 while ( puVar26 != puVar24 );
      do {
         auVar34 = (undefined1[16])0x0;
         uVar32 = puVar30[0xc] >> 0x18;
         if (uVar32 != 0) {
            puVar29 = (uint*)( *(long*)( lVar25 + 0x128 ) + ( ulong )(puVar30[0xc] & 0xffffff) * 4 );
            puVar28 = puVar29 + uVar32;
            if (puVar29 < puVar28) {
               auVar44 = (undefined1[16])0x0;
               do {
                  while (true) {
                     puVar24 = (uint*)( ( ulong ) * puVar29 * 0x10 + *(long*)( lVar25 + 0x30 ) );
                     pfVar22 = (float*)( lVar4 + 0x10 + ( ulong ) * puVar24 * 0x30 );
                     pfVar1 = (float*)( lVar4 + 0x10 + (ulong)puVar24[1] * 0x30 );
                     pfVar2 = (float*)( lVar4 + 0x10 + (ulong)puVar24[2] * 0x30 );
                     fVar36 = *pfVar1 - *pfVar22;
                     fVar38 = pfVar1[1] - pfVar22[1];
                     fVar39 = pfVar1[2] - pfVar22[2];
                     fVar40 = *pfVar2 - *pfVar22;
                     fVar41 = pfVar2[1] - pfVar22[1];
                     fVar42 = pfVar2[2] - pfVar22[2];
                     fVar33 = fVar41 * fVar36 - fVar38 * fVar40;
                     fVar38 = fVar42 * fVar38 - fVar39 * fVar41;
                     fVar36 = fVar40 * fVar39 - fVar36 * fVar42;
                     fVar39 = fVar33 * fVar33 + fVar36 * fVar36 + fVar38 * fVar38 + 0.0;
                     fVar40 = auVar44._4_4_;
                     fVar41 = auVar44._8_4_;
                     fVar42 = auVar44._12_4_;
                     if (fVar39 <= fVar5) break;
                     fVar39 = SQRT(fVar39);
                     auVar37._4_4_ = fVar36;
                     auVar37._0_4_ = fVar38;
                     auVar37._8_4_ = fVar33;
                     auVar37._12_4_ = fVar33;
                     puVar29 = puVar29 + 1;
                     auVar34._4_4_ = fVar39;
                     auVar34._0_4_ = fVar39;
                     auVar34._8_4_ = fVar39;
                     auVar34._12_4_ = fVar39;
                     auVar34 = divps(auVar37, auVar34);
                     auVar44._0_4_ = auVar44._0_4_ + auVar34._0_4_;
                     auVar44._4_4_ = fVar40 + auVar34._4_4_;
                     auVar44._8_4_ = fVar41 + auVar34._8_4_;
                     auVar44._12_4_ = fVar42 + auVar34._12_4_;
                     if (puVar28 <= puVar29) goto LAB_0010359c;
                  }
;
                  puVar29 = puVar29 + 1;
                  auVar44._0_4_ = auVar44._0_4_ + 0.0;
                  auVar44._4_4_ = fVar40 + 0.0;
                  auVar44._8_4_ = fVar41 + 0.0;
                  auVar44._12_4_ = fVar42 + 0.0;
               }
 while ( puVar29 < puVar28 );
               LAB_0010359c:fVar33 = auVar44._0_4_ * auVar44._0_4_ + 0.0 + auVar44._4_4_ * auVar44._4_4_ + auVar44._8_4_ * auVar44._8_4_;
               auVar34 = (undefined1[16])0x0;
               if (fVar5 < fVar33) {
                  auVar35._0_4_ = SQRT(fVar33);
                  auVar35._4_4_ = auVar35._0_4_;
                  auVar35._8_4_ = auVar35._0_4_;
                  auVar35._12_4_ = auVar35._0_4_;
                  auVar34 = divps(auVar44, auVar35);
               }

            }
 else {
               auVar34 = (undefined1[16])0x0;
            }

         }

         puVar29 = puVar30 + 0xd;
         *(undefined1(*) [16])( lVar4 + 0x20 + ( ulong ) * puVar30 * 0x30 ) = auVar34;
         puVar30 = puVar29;
      }
 while ( puVar26 != puVar29 );
      if (param_4) {
         lVar25 = *(long*)( this + 0x118 );
         do {
            uVar32 = *puVar27;
            puVar27 = puVar27 + 0xd;
            puVar23 = (undefined8*)( (ulong)uVar32 * 0x30 + lVar4 );
            lVar21 = (ulong)uVar32 * 0x50 + lVar25;
            uVar18 = puVar23[3];
            *puVar23 = puVar23[2];
            puVar23[1] = uVar18;
            *(undefined8*)( lVar21 + 0x10 ) = puVar23[2];
            *(undefined8*)( lVar21 + 0x18 ) = uVar18;
            *(undefined1(*) [16])( lVar21 + 0x20 ) = (undefined1[16])0x0;
         }
 while ( puVar26 != puVar27 );
      }
 else if (this[0x1be] == (SoftBodyMotionProperties)0x0) {
         do {
            if ((float)puVar27[9] == 0.0) {
               lVar25 = ( ulong ) * puVar27 * 0x50 + *(long*)( this + 0x118 );
               puVar23 = (undefined8*)( lVar4 + 0x10 + ( ulong ) * puVar27 * 0x30 );
               uVar18 = puVar23[1];
               *(undefined8*)( lVar25 + 0x10 ) = *puVar23;
               *(undefined8*)( lVar25 + 0x18 ) = uVar18;
            }

            puVar27 = puVar27 + 0xd;
         }
 while ( puVar26 != puVar27 );
      }

   }

   this[0x1bf] = (SoftBodyMotionProperties)0x1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Could not recover jumptable at 0x00103463. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)param_5 + 0x18 ) )(param_5, puVar19, iVar31);
   return;
}
/* JPH::SoftBodyMotionProperties::CustomUpdate(float, JPH::Body&, JPH::PhysicsSystem&) */void JPH::SoftBodyMotionProperties::CustomUpdate(SoftBodyMotionProperties *this, float param_1, Body *param_2, PhysicsSystem *param_3) {
   int iVar1;
   SoftBodyMotionProperties *this_00;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
   undefined8 local_118;
   undefined8 uStack_110;
   SoftBodyUpdateContext local_108[136];
   undefined4 local_80;
   undefined1 local_7c[16];
   undefined8 local_6c;
   undefined4 local_64;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c = (undefined1[16])0x0;
   local_80 = 0;
   local_6c = 0;
   local_64 = 0;
   this_00 = this;
   InitializeUpdateContext(this, param_1, param_2, param_3, local_108);
   DetermineCollidingShapes(this_00, local_108, param_3, (BodyLockInterface*)( param_3 + 0x130 ));
   do {
      iVar1 = ParallelUpdate(this, local_108, (PhysicsSettings*)( param_3 + 0x1a8 ));
   }
 while ( iVar1 == 2 );
   UpdateRigidBodyVelocities(this, local_108, (BodyInterface*)( param_3 + 0x158 ));
   if (this[0x1bc] != (SoftBodyMotionProperties)0x0) {
      auVar2 = Body::GetPosition(param_2);
      local_118._0_4_ = auVar2._0_4_;
      local_118._4_4_ = auVar2._4_4_;
      uStack_110._0_4_ = auVar2._8_4_;
      uStack_110._4_4_ = auVar2._12_4_;
      local_118 = CONCAT44(local_118._4_4_ + fStack_54, (float)local_118 + local_58);
      uStack_110 = CONCAT44(uStack_110._4_4_ + fStack_4c, (float)uStack_110 + fStack_50);
      JPH::BodyInterface::SetPosition(local_118, uStack_110, (BodyInterface*)( param_3 + 0x158 ), param_2 + 0x70, 1);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::SoftBodyMotionProperties::DrawVertices(JPH::DebugRenderer*, JPH::Mat44 const&) const */void JPH::SoftBodyMotionProperties::DrawVertices(SoftBodyMotionProperties *this, DebugRenderer *param_1, Mat44 *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   lVar5 = *(long*)( this + 0x118 );
   lVar6 = *(long*)( this + 0x108 ) * 0x50 + lVar5;
   for (; lVar6 != lVar5; lVar5 = lVar5 + 0x50) {
      puVar4 = &Color::sRed;
      fVar1 = *(float*)( lVar5 + 0x10 );
      fVar2 = *(float*)( lVar5 + 0x14 );
      fVar3 = *(float*)( lVar5 + 0x18 );
      if (0.0 < *(float*)( lVar5 + 0x4c )) {
         puVar4 = &Color::sGreen;
      }

      JPH::DebugRenderer::DrawMarker(CONCAT44(fVar3 * *(float*)( param_2 + 0x24 ) + fVar1 * *(float*)( param_2 + 4 ) + fVar2 * *(float*)( param_2 + 0x14 ) + *(float*)( param_2 + 0x34 ), fVar3 * *(float*)( param_2 + 0x20 ) + fVar1 * *(float*)param_2 + fVar2 * *(float*)( param_2 + 0x10 ) + *(float*)( param_2 + 0x30 )), CONCAT44(fVar3 * *(float*)( param_2 + 0x2c ) + fVar1 * *(float*)( param_2 + 0xc ) + fVar2 * *(float*)( param_2 + 0x1c ) + *(float*)( param_2 + 0x3c ), fVar3 * *(float*)( param_2 + 0x28 ) + fVar1 * *(float*)( param_2 + 8 ) + fVar2 * *(float*)( param_2 + 0x18 ) + *(float*)( param_2 + 0x38 )), _LC30, param_1, *(undefined4*)puVar4);
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DrawVertexVelocities(JPH::DebugRenderer*, JPH::Mat44 const&) const
    */void JPH::SoftBodyMotionProperties::DrawVertexVelocities(SoftBodyMotionProperties *this, DebugRenderer *param_1, Mat44 *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   long lVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   lVar4 = *(long*)( this + 0x118 );
   lVar5 = *(long*)( this + 0x108 ) * 0x50 + lVar4;
   for (; lVar5 != lVar4; lVar4 = lVar4 + 0x50) {
      fVar1 = *(float*)( lVar4 + 0x10 );
      fVar2 = *(float*)( lVar4 + 0x14 );
      fVar3 = *(float*)( lVar4 + 0x18 );
      fVar6 = *(float*)( lVar4 + 0x20 ) + fVar1;
      fVar7 = *(float*)( lVar4 + 0x24 ) + fVar2;
      fVar8 = *(float*)( lVar4 + 0x28 ) + fVar3;
      JPH::DebugRenderer::DrawArrow(CONCAT44(fVar3 * *(float*)( param_2 + 0x24 ) + fVar1 * *(float*)( param_2 + 4 ) + fVar2 * *(float*)( param_2 + 0x14 ) + *(float*)( param_2 + 0x34 ), fVar3 * *(float*)( param_2 + 0x20 ) + fVar1 * *(float*)param_2 + fVar2 * *(float*)( param_2 + 0x10 ) + *(float*)( param_2 + 0x30 )), CONCAT44(fVar3 * *(float*)( param_2 + 0x2c ) + fVar1 * *(float*)( param_2 + 0xc ) + fVar2 * *(float*)( param_2 + 0x1c ) + *(float*)( param_2 + 0x3c ), fVar3 * *(float*)( param_2 + 0x28 ) + fVar1 * *(float*)( param_2 + 8 ) + fVar2 * *(float*)( param_2 + 0x18 ) + *(float*)( param_2 + 0x38 )), CONCAT44(fVar8 * *(float*)( param_2 + 0x24 ) + fVar6 * *(float*)( param_2 + 4 ) + fVar7 * *(float*)( param_2 + 0x14 ) + *(float*)( param_2 + 0x34 ), fVar8 * *(float*)( param_2 + 0x20 ) + fVar6 * *(float*)param_2 + fVar7 * *(float*)( param_2 + 0x10 ) + *(float*)( param_2 + 0x30 )), CONCAT44(fVar8 * *(float*)( param_2 + 0x2c ) + fVar6 * *(float*)( param_2 + 0xc ) + fVar7 * *(float*)( param_2 + 0x1c ) + *(float*)( param_2 + 0x3c ), fVar8 * *(float*)( param_2 + 0x28 ) + fVar6 * *(float*)( param_2 + 8 ) + fVar7 * *(float*)( param_2 + 0x18 ) + *(float*)( param_2 + 0x38 )), _LC31, param_1, (undefined4)Color::sYellow);
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DrawEdgeConstraints(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::ESoftBodyConstraintColor) const */void JPH::SoftBodyMotionProperties::DrawEdgeConstraints(SoftBodyMotionProperties *this, long *param_1, float *param_2, int param_4) {
   float *pfVar1;
   uint uVar2;
   undefined8 uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   uint uVar12;
   uint uVar13;
   byte bVar14;
   uint uVar15;
   uint *puVar16;
   long lVar17;
   uint uVar18;
   long lVar19;
   byte bVar20;
   uint uVar21;
   uint uVar22;
   long lVar23;
   float fVar24;
   undefined8 local_88;
   byte local_58;
   uVar13 = (uint)Color::sWhite;
   lVar19 = *(long*)( this + 0x100 );
   uVar3 = *(undefined8*)( lVar19 + 0x100 );
   if ((int)uVar3 != 0) {
      uVar4 = (uint)Color::sWhite >> 8;
      lVar17 = 0;
      uVar12 = (uint)Color::sWhite >> 0x10;
      uVar21 = 0;
      do {
         uVar2 = *(uint*)( *(long*)( lVar19 + 0x110 ) + lVar17 * 0x14 );
         if (param_4 == 0) {
            uVar15 = uVar13 & 0xff;
            bVar20 = (byte)uVar12;
            uVar6 = uVar13;
            uVar5 = uVar4;
         }
 else {
            uVar15 = JPH::Color::sGetDistinctColor(( (int)uVar3 + -1 ) - (int)lVar17);
            lVar19 = *(long*)( this + 0x100 );
            uVar5 = uVar15 >> 8;
            bVar20 = ( byte )(uVar15 >> 0x10);
            uVar6 = uVar15;
         }

         if (uVar21 < uVar2) {
            lVar23 = (ulong)uVar21 << 4;
            uVar22 = 0;
            while (true) {
               local_58 = (byte)uVar5;
               bVar14 = bVar20;
               uVar18 = uVar15;
               if (param_4 == 2) {
                  fVar24 = (float)uVar22 / (float)( uVar2 - uVar21 );
                  local_58 = (byte)(int)( (float)( uVar5 & 0xff ) * fVar24 );
                  bVar14 = (byte)(int)( (float)bVar20 * fVar24 );
                  uVar18 = (int)( fVar24 * (float)( uVar15 & 0xff ) );
               }

               uVar22 = uVar22 + 1;
               puVar16 = (uint*)( *(long*)( lVar19 + 0x48 ) + lVar23 );
               lVar23 = lVar23 + 0x10;
               pfVar1 = (float*)( *(long*)( this + 0x118 ) + 0x10 + (ulong)puVar16[1] * 0x50 );
               fVar24 = *pfVar1;
               fVar7 = pfVar1[1];
               fVar8 = pfVar1[2];
               local_88 = CONCAT44(fVar8 * param_2[9] + fVar24 * param_2[1] + fVar7 * param_2[5] + param_2[0xd], fVar8 * param_2[8] + fVar24 * *param_2 + fVar7 * param_2[4] + param_2[0xc]);
               pfVar1 = (float*)( *(long*)( this + 0x118 ) + 0x10 + ( ulong ) * puVar16 * 0x50 );
               fVar9 = *pfVar1;
               fVar10 = pfVar1[1];
               fVar11 = pfVar1[2];
               ( **(code**)( *param_1 + 0x10 ) )(CONCAT44(fVar11 * param_2[9] + fVar9 * param_2[1] + fVar10 * param_2[5] + param_2[0xd], fVar11 * param_2[8] + fVar9 * *param_2 + fVar10 * param_2[4] + param_2[0xc]), CONCAT44(fVar11 * param_2[0xb] + fVar9 * param_2[3] + fVar10 * param_2[7] + param_2[0xf], fVar11 * param_2[10] + fVar9 * param_2[2] + fVar10 * param_2[6] + param_2[0xe]), local_88, CONCAT44(fVar8 * param_2[0xb] + fVar24 * param_2[3] + fVar7 * param_2[7] + param_2[0xf], fVar8 * param_2[10] + fVar24 * param_2[2] + fVar7 * param_2[6] + param_2[0xe]), param_1, ( ( (uint)bVar14 | ( uVar6 >> 0x18 ) << 8 ) << 8 | (uint)local_58 ) << 8 | uVar18 & 0xff);
               if (uVar2 - uVar21 == uVar22) break;
               lVar19 = *(long*)( this + 0x100 );
            }
;
            lVar19 = *(long*)( this + 0x100 );
         }

         uVar3 = *(undefined8*)( lVar19 + 0x100 );
         lVar17 = lVar17 + 1;
         uVar21 = uVar2;
      }
 while ( (uint)lVar17 < (uint)uVar3 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::DrawBendConstraints(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::ESoftBodyConstraintColor) const */void JPH::SoftBodyMotionProperties::DrawBendConstraints(SoftBodyMotionProperties *this, long *param_1, float *param_2, int param_4) {
   float *pfVar1;
   uint uVar2;
   undefined8 uVar3;
   uint uVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
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
   uint uVar25;
   uint uVar26;
   undefined8 uVar27;
   uint uVar28;
   byte bVar29;
   uint uVar30;
   uint *puVar31;
   long lVar32;
   uint uVar33;
   uint uVar34;
   long lVar35;
   long lVar36;
   byte bVar37;
   byte bVar38;
   byte bVar39;
   byte bVar40;
   uint uVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   float fVar55;
   undefined1 auVar56[16];
   float fVar57;
   float fVar59;
   float fVar60;
   float fVar61;
   undefined1 auVar58[16];
   undefined8 local_b8;
   undefined8 local_a8;
   undefined8 local_98;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   uint local_54;
   uVar26 = (uint)Color::sGreen;
   lVar36 = *(long*)( this + 0x100 );
   uVar3 = *(undefined8*)( lVar36 + 0x100 );
   if ((int)uVar3 != 0) {
      bVar37 = (byte)(uint)Color::sGreen;
      lVar32 = 0;
      uVar25 = (uint)Color::sGreen >> 0x10;
      uVar33 = 0;
      do {
         uVar2 = *(uint*)( *(long*)( lVar36 + 0x110 ) + lVar32 * 0x14 + 8 );
         if (param_4 == 0) {
            uVar4 = uVar26 >> 8;
            bVar39 = (byte)uVar25;
            bVar40 = bVar37;
            uVar30 = uVar26;
         }
 else {
            uVar30 = JPH::Color::sGetDistinctColor(( (int)uVar3 + -1 ) - (int)lVar32);
            lVar36 = *(long*)( this + 0x100 );
            uVar4 = uVar30 >> 8;
            bVar40 = (byte)uVar30;
            bVar39 = ( byte )(uVar30 >> 0x10);
         }

         local_54 = uVar4 & 0xff;
         uVar28 = local_54;
         if (uVar33 < uVar2) {
            lVar35 = (ulong)uVar33 * 0x18;
            uVar41 = 0;
            while (true) {
               local_54._0_1_ = (byte)uVar4;
               bVar29 = bVar39;
               bVar38 = bVar40;
               if (param_4 == 2) {
                  fVar43 = (float)uVar41 / (float)( uVar2 - uVar33 );
                  local_54._0_1_ = (byte)(int)( (float)(int)uVar28 * fVar43 );
                  bVar29 = (byte)(int)( (float)bVar39 * fVar43 );
                  bVar38 = (byte)(int)( fVar43 * (float)bVar40 );
               }

               fVar43 = *param_2;
               fVar55 = param_2[1];
               fVar5 = param_2[2];
               fVar6 = param_2[3];
               fVar7 = param_2[4];
               fVar8 = param_2[5];
               fVar9 = param_2[6];
               fVar10 = param_2[7];
               uVar41 = uVar41 + 1;
               fVar11 = param_2[8];
               fVar12 = param_2[9];
               fVar13 = param_2[10];
               fVar14 = param_2[0xb];
               fVar15 = param_2[0xc];
               fVar16 = param_2[0xd];
               fVar17 = param_2[0xe];
               fVar18 = param_2[0xf];
               puVar31 = (uint*)( *(long*)( lVar36 + 0x60 ) + lVar35 );
               lVar35 = lVar35 + 0x18;
               uVar34 = ( ( (uint)bVar29 | ( uVar30 >> 0x18 ) << 8 ) << 8 | (uint)(byte)local_54 ) << 8 | (uint)bVar38;
               lVar36 = *(long*)( this + 0x118 );
               pfVar1 = (float*)( lVar36 + 0x10 + ( ulong ) * puVar31 * 0x50 );
               fVar19 = *pfVar1;
               fVar20 = pfVar1[1];
               fVar21 = pfVar1[2];
               pfVar1 = (float*)( lVar36 + 0x10 + (ulong)puVar31[1] * 0x50 );
               fVar50 = *pfVar1;
               fVar51 = pfVar1[1];
               fVar52 = pfVar1[2];
               pfVar1 = (float*)( lVar36 + 0x10 + (ulong)puVar31[2] * 0x50 );
               fVar22 = *pfVar1;
               fVar23 = pfVar1[1];
               fVar24 = pfVar1[2];
               fVar42 = fVar19 * fVar43 + fVar20 * fVar7 + fVar21 * fVar11 + fVar15;
               fVar44 = fVar19 * fVar55 + fVar20 * fVar8 + fVar21 * fVar12 + fVar16;
               fVar45 = fVar19 * fVar5 + fVar20 * fVar9 + fVar21 * fVar13 + fVar17;
               fVar46 = fVar19 * fVar6 + fVar20 * fVar10 + fVar21 * fVar14 + fVar18;
               pfVar1 = (float*)( lVar36 + 0x10 + (ulong)puVar31[3] * 0x50 );
               fVar19 = *pfVar1;
               fVar20 = pfVar1[1];
               fVar21 = pfVar1[2];
               fVar47 = fVar50 * fVar43 + fVar51 * fVar7 + fVar52 * fVar11 + fVar15;
               fVar48 = fVar50 * fVar55 + fVar51 * fVar8 + fVar52 * fVar12 + fVar16;
               fVar49 = fVar50 * fVar5 + fVar51 * fVar9 + fVar52 * fVar13 + fVar17;
               fVar50 = fVar50 * fVar6 + fVar51 * fVar10 + fVar52 * fVar14 + fVar18;
               fVar51 = fVar42 + fVar47;
               fVar52 = fVar44 + fVar48;
               fVar53 = fVar45 + fVar49;
               fVar54 = fVar46 + fVar50;
               fVar57 = _LC25 * fVar51;
               fVar59 = _UNK_00107804 * fVar52;
               fVar60 = _UNK_00107808 * fVar53;
               fVar61 = _UNK_0010780c * fVar54;
               local_b8 = CONCAT44(fVar59, fVar57);
               uVar27 = local_b8;
               auVar58._0_4_ = fVar22 * fVar43 + fVar23 * fVar7 + fVar24 * fVar11 + fVar15 + fVar51;
               auVar58._4_4_ = fVar22 * fVar55 + fVar23 * fVar8 + fVar24 * fVar12 + fVar16 + fVar52;
               auVar58._8_4_ = fVar22 * fVar5 + fVar23 * fVar9 + fVar24 * fVar13 + fVar17 + fVar53;
               auVar58._12_4_ = fVar22 * fVar6 + fVar23 * fVar10 + fVar24 * fVar14 + fVar18 + fVar54;
               auVar58 = divps(auVar58, __LC32);
               auVar56._0_4_ = fVar19 * fVar43 + fVar7 * fVar20 + fVar21 * fVar11 + fVar15 + fVar51;
               auVar56._4_4_ = fVar19 * fVar55 + fVar8 * fVar20 + fVar21 * fVar12 + fVar16 + fVar52;
               auVar56._8_4_ = fVar19 * fVar5 + fVar9 * fVar20 + fVar21 * fVar13 + fVar17 + fVar53;
               auVar56._12_4_ = fVar19 * fVar6 + fVar10 * fVar20 + fVar21 * fVar14 + fVar18 + fVar54;
               auVar56 = divps(auVar56, __LC32);
               local_a8 = CONCAT44(_UNK_00107844 * fVar48 + _UNK_00107854 * fVar44, __LC34 * fVar47 + _LC37 * fVar42);
               local_98 = CONCAT44(fVar48 * _UNK_00107854 + fVar44 * _UNK_00107844, fVar47 * _LC37 + fVar42 * __LC34);
               JPH::DebugRenderer::DrawArrow(local_98, CONCAT44(fVar50 * _UNK_0010785c + fVar46 * _UNK_0010784c, fVar49 * _UNK_00107858 + fVar45 * _UNK_00107848), local_a8, CONCAT44(_UNK_0010784c * fVar50 + _UNK_0010785c * fVar46, _UNK_00107848 * fVar49 + _UNK_00107858 * fVar45), _LC31, param_1, uVar34);
               local_88 = auVar58._0_4_;
               fStack_84 = auVar58._4_4_;
               fStack_80 = auVar58._8_4_;
               fStack_7c = auVar58._12_4_;
               fVar57 = fVar57 * _LC37;
               fVar59 = fVar59 * _UNK_00107854;
               fVar43 = fVar60 * _UNK_00107858;
               fVar55 = fVar61 * _UNK_0010785c;
               uVar3 = CONCAT44(fVar61, fVar60);
               local_a8 = CONCAT44(fStack_84 * _UNK_00107844 + fVar59, local_88 * __LC34 + fVar57);
               ( **(code**)( *param_1 + 0x10 ) )(local_b8, uVar3, local_a8, CONCAT44(fStack_7c * _UNK_0010784c + fVar55, fStack_80 * _UNK_00107848 + fVar43), param_1, uVar34);
               local_78 = auVar56._0_4_;
               fStack_74 = auVar56._4_4_;
               fStack_70 = auVar56._8_4_;
               fStack_6c = auVar56._12_4_;
               local_b8 = CONCAT44(fStack_74 * _UNK_00107844 + fVar59, local_78 * __LC34 + fVar57);
               ( **(code**)( *param_1 + 0x10 ) )(uVar27, uVar3, local_b8, CONCAT44(fStack_6c * _UNK_0010784c + fVar55, fStack_70 * _UNK_00107848 + fVar43), param_1, uVar34);
               if (uVar2 - uVar33 == uVar41) break;
               lVar36 = *(long*)( this + 0x100 );
            }
;
            lVar36 = *(long*)( this + 0x100 );
         }

         uVar3 = *(undefined8*)( lVar36 + 0x100 );
         lVar32 = lVar32 + 1;
         uVar33 = uVar2;
      }
 while ( (uint)lVar32 < (uint)uVar3 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DrawVolumeConstraints(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::ESoftBodyConstraintColor) const */void JPH::SoftBodyMotionProperties::DrawVolumeConstraints(SoftBodyMotionProperties *this, long *param_1, float *param_2, int param_4) {
   float *pfVar1;
   uint uVar2;
   undefined8 uVar3;
   long lVar4;
   uint uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
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
   undefined8 uVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   uint uVar28;
   uint uVar29;
   uint uVar30;
   byte bVar31;
   uint uVar32;
   byte bVar33;
   long lVar34;
   byte bVar35;
   byte bVar36;
   uint *puVar37;
   uint uVar38;
   uint uVar39;
   byte bVar40;
   long lVar41;
   uint uVar42;
   long lVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   undefined8 local_c8;
   undefined8 local_98;
   undefined8 local_88;
   byte local_58;
   uVar30 = (uint)Color::sYellow;
   lVar43 = *(long*)( this + 0x100 );
   uVar3 = *(undefined8*)( lVar43 + 0x100 );
   if ((int)uVar3 != 0) {
      bVar33 = (byte)(uint)Color::sYellow;
      uVar5 = (uint)Color::sYellow >> 8;
      lVar34 = 0;
      uVar29 = (uint)Color::sYellow >> 0x10;
      uVar38 = 0;
      do {
         uVar2 = *(uint*)( *(long*)( lVar43 + 0x110 ) + lVar34 * 0x14 + 0xc );
         bVar35 = (byte)uVar29;
         bVar40 = bVar33;
         uVar32 = uVar30;
         uVar28 = uVar5;
         if (param_4 != 0) {
            uVar32 = JPH::Color::sGetDistinctColor(( (int)uVar3 + -1 ) - (int)lVar34);
            lVar43 = *(long*)( this + 0x100 );
            bVar35 = ( byte )(uVar32 >> 0x10);
            bVar40 = (byte)uVar32;
            uVar28 = uVar32 >> 8;
         }

         if (uVar38 < uVar2) {
            uVar42 = 0;
            lVar41 = (ulong)uVar38 * 0x18;
            while (true) {
               local_58 = (byte)uVar28;
               bVar31 = bVar35;
               bVar36 = bVar40;
               if (param_4 == 2) {
                  fVar45 = (float)uVar42 / (float)( uVar2 - uVar38 );
                  local_58 = (byte)(int)( (float)( uVar28 & 0xff ) * fVar45 );
                  bVar31 = (byte)(int)( (float)bVar35 * fVar45 );
                  bVar36 = (byte)(int)( fVar45 * (float)bVar40 );
               }

               fVar45 = *param_2;
               fVar6 = param_2[1];
               fVar7 = param_2[2];
               fVar8 = param_2[3];
               fVar9 = param_2[4];
               fVar10 = param_2[5];
               fVar11 = param_2[6];
               fVar12 = param_2[7];
               uVar42 = uVar42 + 1;
               fVar13 = param_2[8];
               fVar14 = param_2[9];
               fVar15 = param_2[10];
               fVar16 = param_2[0xb];
               fVar44 = param_2[0xc];
               fVar46 = param_2[0xd];
               fVar17 = param_2[0xe];
               fVar18 = param_2[0xf];
               lVar4 = *(long*)( this + 0x118 );
               uVar39 = ( ( (uint)bVar31 | ( uVar32 >> 0x18 ) << 8 ) << 8 | (uint)local_58 ) << 8 | (uint)bVar36;
               puVar37 = (uint*)( *(long*)( lVar43 + 0x78 ) + lVar41 );
               lVar41 = lVar41 + 0x18;
               pfVar1 = (float*)( lVar4 + 0x10 + ( ulong ) * puVar37 * 0x50 );
               fVar19 = *pfVar1;
               fVar20 = pfVar1[1];
               fVar21 = pfVar1[2];
               local_98 = CONCAT44(fVar21 * fVar14 + fVar19 * fVar6 + fVar20 * fVar10 + fVar46, fVar21 * fVar13 + fVar19 * fVar45 + fVar20 * fVar9 + fVar44);
               pfVar1 = (float*)( lVar4 + 0x10 + (ulong)puVar37[1] * 0x50 );
               fVar22 = *pfVar1;
               fVar23 = pfVar1[1];
               fVar24 = pfVar1[2];
               uVar26 = CONCAT44(fVar21 * fVar16 + fVar19 * fVar8 + fVar20 * fVar12 + fVar18, fVar21 * fVar15 + fVar19 * fVar7 + fVar20 * fVar11 + fVar17);
               local_88 = CONCAT44(fVar24 * fVar14 + fVar22 * fVar6 + fVar23 * fVar10 + fVar46, fVar24 * fVar13 + fVar22 * fVar45 + fVar23 * fVar9 + fVar44);
               pfVar1 = (float*)( lVar4 + 0x10 + (ulong)puVar37[2] * 0x50 );
               fVar19 = *pfVar1;
               fVar20 = pfVar1[1];
               fVar21 = pfVar1[2];
               uVar27 = CONCAT44(fVar24 * fVar16 + fVar22 * fVar8 + fVar23 * fVar12 + fVar18, fVar24 * fVar15 + fVar22 * fVar7 + fVar23 * fVar11 + fVar17);
               local_c8 = CONCAT44(fVar21 * fVar14 + fVar19 * fVar6 + fVar20 * fVar10 + fVar46, fVar21 * fVar13 + fVar19 * fVar45 + fVar20 * fVar9 + fVar44);
               pfVar1 = (float*)( lVar4 + 0x10 + (ulong)puVar37[3] * 0x50 );
               fVar22 = *pfVar1;
               fVar23 = pfVar1[1];
               fVar24 = pfVar1[2];
               uVar3 = CONCAT44(fVar21 * fVar16 + fVar19 * fVar8 + fVar20 * fVar12 + fVar18, fVar21 * fVar15 + fVar19 * fVar7 + fVar20 * fVar11 + fVar17);
               fVar44 = fVar24 * fVar13 + fVar22 * fVar45 + fVar9 * fVar23 + fVar44;
               fVar46 = fVar24 * fVar14 + fVar22 * fVar6 + fVar10 * fVar23 + fVar46;
               ( **(code**)( *param_1 + 0x18 ) )(local_98, uVar26, local_c8, uVar3, local_88, uVar27, param_1, uVar39, 0);
               uVar25 = CONCAT44(fVar24 * fVar16 + fVar22 * fVar8 + fVar12 * fVar23 + fVar18, fVar24 * fVar15 + fVar22 * fVar7 + fVar11 * fVar23 + fVar17);
               ( **(code**)( *param_1 + 0x18 ) )(local_88, uVar27, local_c8, uVar3, CONCAT44(fVar46, fVar44), uVar25, param_1, uVar39, 0);
               ( **(code**)( *param_1 + 0x18 ) )(local_98, uVar26, CONCAT44(fVar46, fVar44), uVar25, local_c8, uVar3, param_1, uVar39, 0);
               ( **(code**)( *param_1 + 0x18 ) )(local_98, uVar26, local_88, uVar27, CONCAT44(fVar46, fVar44), uVar25, param_1, uVar39, 0);
               if (uVar2 - uVar38 == uVar42) break;
               lVar43 = *(long*)( this + 0x100 );
            }
;
            lVar43 = *(long*)( this + 0x100 );
         }

         uVar3 = *(undefined8*)( lVar43 + 0x100 );
         lVar34 = lVar34 + 1;
         uVar38 = uVar2;
      }
 while ( (uint)lVar34 < (uint)uVar3 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DrawSkinConstraints(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::ESoftBodyConstraintColor) const */void JPH::SoftBodyMotionProperties::DrawSkinConstraints(SoftBodyMotionProperties *this, long *param_1, float *param_2, int param_4) {
   uint uVar1;
   undefined8 uVar2;
   uint uVar3;
   float fVar4;
   float fVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   byte bVar11;
   uint uVar12;
   long lVar13;
   byte bVar14;
   long lVar15;
   byte bVar16;
   uint *puVar17;
   byte bVar18;
   byte bVar19;
   long lVar20;
   uint uVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   undefined8 local_88;
   uint local_54;
   uVar7 = (uint)Color::sOrange;
   lVar13 = *(long*)( this + 0x100 );
   uVar2 = *(undefined8*)( lVar13 + 0x100 );
   if ((int)uVar2 != 0) {
      lVar10 = 0;
      bVar11 = (byte)(uint)Color::sOrange;
      uVar6 = (uint)Color::sOrange >> 0x10;
      uVar12 = 0;
      do {
         uVar1 = *(uint*)( *(long*)( lVar13 + 0x110 ) + lVar10 * 0x14 + 0x10 );
         if (param_4 == 0) {
            uVar3 = uVar7 >> 8;
            bVar16 = (byte)uVar6;
            bVar19 = bVar11;
            uVar9 = uVar7;
         }
 else {
            uVar9 = JPH::Color::sGetDistinctColor(( (int)uVar2 + -1 ) - (int)lVar10);
            lVar13 = *(long*)( this + 0x100 );
            uVar3 = uVar9 >> 8;
            bVar19 = (byte)uVar9;
            bVar16 = ( byte )(uVar9 >> 0x10);
         }

         local_54 = uVar3 & 0xff;
         uVar8 = local_54;
         if (uVar12 < uVar1) {
            uVar21 = 0;
            lVar20 = (ulong)uVar12 * 0x34;
            while (true) {
               local_54._0_1_ = (byte)uVar3;
               bVar18 = bVar16;
               bVar14 = bVar19;
               if (param_4 == 2) {
                  fVar23 = (float)uVar21 / (float)( uVar1 - uVar12 );
                  local_54._0_1_ = (byte)(int)( (float)(int)uVar8 * fVar23 );
                  bVar18 = (byte)(int)( (float)bVar16 * fVar23 );
                  bVar14 = (byte)(int)( fVar23 * (float)bVar19 );
               }

               uVar21 = uVar21 + 1;
               puVar17 = (uint*)( *(long*)( lVar13 + 0x90 ) + lVar20 );
               lVar20 = lVar20 + 0x34;
               lVar15 = ( ulong ) * puVar17 * 0x30 + *(long*)( this + 0x160 );
               fVar23 = *(float*)( lVar15 + 0x10 );
               fVar4 = *(float*)( lVar15 + 0x14 );
               fVar5 = *(float*)( lVar15 + 0x18 );
               fVar22 = *(float*)( lVar15 + 0x20 ) * _LC37 + fVar23;
               fVar24 = *(float*)( lVar15 + 0x24 ) * _LC37 + fVar4;
               fVar25 = *(float*)( lVar15 + 0x28 ) * _LC37 + fVar5;
               local_88 = CONCAT44(fVar25 * *(float*)( this + 0xe4 ) + fVar22 * *(float*)( this + 0xc4 ) + fVar24 * *(float*)( this + 0xd4 ) + *(float*)( this + 0xf4 ), fVar25 * *(float*)( this + 0xe0 ) + fVar22 * *(float*)( this + 0xc0 ) + fVar24 * *(float*)( this + 0xd0 ) + *(float*)( this + 0xf0 ));
               JPH::DebugRenderer::DrawArrow(CONCAT44(fVar23 * *(float*)( this + 0xc4 ) + fVar4 * *(float*)( this + 0xd4 ) + fVar5 * *(float*)( this + 0xe4 ) + *(float*)( this + 0xf4 ), fVar23 * *(float*)( this + 0xc0 ) + fVar4 * *(float*)( this + 0xd0 ) + fVar5 * *(float*)( this + 0xe0 ) + *(float*)( this + 0xf0 )), CONCAT44(fVar23 * *(float*)( this + 0xcc ) + fVar4 * *(float*)( this + 0xdc ) + fVar5 * *(float*)( this + 0xec ) + *(float*)( this + 0xfc ), fVar23 * *(float*)( this + 200 ) + fVar4 * *(float*)( this + 0xd8 ) + fVar5 * *(float*)( this + 0xe8 ) + *(float*)( this + 0xf8 )), local_88, CONCAT44(fVar25 * *(float*)( this + 0xec ) + fVar22 * *(float*)( this + 0xcc ) + fVar24 * *(float*)( this + 0xdc ) + *(float*)( this + 0xfc ), fVar25 * *(float*)( this + 0xe8 ) + fVar22 * *(float*)( this + 200 ) + fVar24 * *(float*)( this + 0xd8 ) + *(float*)( this + 0xf8 )), _LC31, param_1, ( ( ( uVar9 >> 0x18 ) << 8 | (uint)bVar18 ) << 8 | (uint)(byte)local_54 ) << 8 | (uint)bVar14);
               lVar13 = ( ulong ) * puVar17 * 0x50 + *(long*)( this + 0x118 );
               fVar23 = *(float*)( lVar13 + 0x10 );
               fVar4 = *(float*)( lVar13 + 0x14 );
               fVar5 = *(float*)( lVar13 + 0x18 );
               local_88 = CONCAT44(fVar5 * param_2[9] + fVar23 * param_2[1] + fVar4 * param_2[5] + param_2[0xd], fVar5 * param_2[8] + fVar23 * *param_2 + fVar4 * param_2[4] + param_2[0xc]);
               fVar22 = *(float*)( lVar15 + 0x10 );
               fVar24 = *(float*)( lVar15 + 0x14 );
               fVar25 = *(float*)( lVar15 + 0x18 );
               ( **(code**)( *param_1 + 0x10 ) )(CONCAT44(fVar25 * *(float*)( this + 0xe4 ) + fVar22 * *(float*)( this + 0xc4 ) + fVar24 * *(float*)( this + 0xd4 ) + *(float*)( this + 0xf4 ), fVar25 * *(float*)( this + 0xe0 ) + fVar22 * *(float*)( this + 0xc0 ) + fVar24 * *(float*)( this + 0xd0 ) + *(float*)( this + 0xf0 )), CONCAT44(fVar25 * *(float*)( this + 0xec ) + fVar22 * *(float*)( this + 0xcc ) + fVar24 * *(float*)( this + 0xdc ) + *(float*)( this + 0xfc ), fVar25 * *(float*)( this + 0xe8 ) + fVar22 * *(float*)( this + 200 ) + fVar24 * *(float*)( this + 0xd8 ) + *(float*)( this + 0xf8 )), local_88, CONCAT44(fVar5 * param_2[0xb] + fVar23 * param_2[3] + fVar4 * param_2[7] + param_2[0xf], fVar5 * param_2[10] + fVar23 * param_2[2] + fVar4 * param_2[6] + param_2[0xe]), param_1, (undefined4)Color::sBlue);
               if (uVar1 - uVar12 == uVar21) break;
               lVar13 = *(long*)( this + 0x100 );
            }
;
            lVar13 = *(long*)( this + 0x100 );
         }

         uVar2 = *(undefined8*)( lVar13 + 0x100 );
         lVar10 = lVar10 + 1;
         uVar12 = uVar1;
      }
 while ( (uint)lVar10 < (uint)uVar2 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DrawLRAConstraints(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::ESoftBodyConstraintColor) const */void JPH::SoftBodyMotionProperties::DrawLRAConstraints(SoftBodyMotionProperties *this, long *param_1, float *param_2, int param_4) {
   float *pfVar1;
   uint uVar2;
   undefined8 uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   uint uVar12;
   uint uVar13;
   byte bVar14;
   uint uVar15;
   uint *puVar16;
   long lVar17;
   uint uVar18;
   long lVar19;
   byte bVar20;
   uint uVar21;
   uint uVar22;
   long lVar23;
   float fVar24;
   undefined8 local_88;
   byte local_58;
   uVar13 = (uint)Color::sGrey;
   lVar19 = *(long*)( this + 0x100 );
   uVar3 = *(undefined8*)( lVar19 + 0x100 );
   if ((int)uVar3 != 0) {
      uVar4 = (uint)Color::sGrey >> 8;
      lVar17 = 0;
      uVar12 = (uint)Color::sGrey >> 0x10;
      uVar21 = 0;
      do {
         uVar2 = *(uint*)( *(long*)( lVar19 + 0x110 ) + lVar17 * 0x14 + 4 );
         if (param_4 == 0) {
            uVar15 = uVar13 & 0xff;
            bVar20 = (byte)uVar12;
            uVar6 = uVar13;
            uVar5 = uVar4;
         }
 else {
            uVar15 = JPH::Color::sGetDistinctColor(( (int)uVar3 + -1 ) - (int)lVar17);
            lVar19 = *(long*)( this + 0x100 );
            uVar5 = uVar15 >> 8;
            bVar20 = ( byte )(uVar15 >> 0x10);
            uVar6 = uVar15;
         }

         if (uVar21 < uVar2) {
            lVar23 = (ulong)uVar21 * 0xc;
            uVar22 = 0;
            while (true) {
               local_58 = (byte)uVar5;
               bVar14 = bVar20;
               uVar18 = uVar15;
               if (param_4 == 2) {
                  fVar24 = (float)uVar22 / (float)( uVar2 - uVar21 );
                  local_58 = (byte)(int)( (float)( uVar5 & 0xff ) * fVar24 );
                  bVar14 = (byte)(int)( (float)bVar20 * fVar24 );
                  uVar18 = (int)( fVar24 * (float)( uVar15 & 0xff ) );
               }

               uVar22 = uVar22 + 1;
               puVar16 = (uint*)( *(long*)( lVar19 + 0xc0 ) + lVar23 );
               lVar23 = lVar23 + 0xc;
               pfVar1 = (float*)( *(long*)( this + 0x118 ) + 0x10 + (ulong)puVar16[1] * 0x50 );
               fVar24 = *pfVar1;
               fVar7 = pfVar1[1];
               fVar8 = pfVar1[2];
               local_88 = CONCAT44(fVar8 * param_2[9] + fVar24 * param_2[1] + fVar7 * param_2[5] + param_2[0xd], fVar8 * param_2[8] + fVar24 * *param_2 + fVar7 * param_2[4] + param_2[0xc]);
               pfVar1 = (float*)( *(long*)( this + 0x118 ) + 0x10 + ( ulong ) * puVar16 * 0x50 );
               fVar9 = *pfVar1;
               fVar10 = pfVar1[1];
               fVar11 = pfVar1[2];
               ( **(code**)( *param_1 + 0x10 ) )(CONCAT44(fVar11 * param_2[9] + fVar9 * param_2[1] + fVar10 * param_2[5] + param_2[0xd], fVar11 * param_2[8] + fVar9 * *param_2 + fVar10 * param_2[4] + param_2[0xc]), CONCAT44(fVar11 * param_2[0xb] + fVar9 * param_2[3] + fVar10 * param_2[7] + param_2[0xf], fVar11 * param_2[10] + fVar9 * param_2[2] + fVar10 * param_2[6] + param_2[0xe]), local_88, CONCAT44(fVar8 * param_2[0xb] + fVar24 * param_2[3] + fVar7 * param_2[7] + param_2[0xf], fVar8 * param_2[10] + fVar24 * param_2[2] + fVar7 * param_2[6] + param_2[0xe]), param_1, ( ( (uint)bVar14 | ( uVar6 >> 0x18 ) << 8 ) << 8 | (uint)local_58 ) << 8 | uVar18 & 0xff);
               if (uVar2 - uVar21 == uVar22) break;
               lVar19 = *(long*)( this + 0x100 );
            }
;
            lVar19 = *(long*)( this + 0x100 );
         }

         uVar3 = *(undefined8*)( lVar19 + 0x100 );
         lVar17 = lVar17 + 1;
         uVar21 = uVar2;
      }
 while ( (uint)lVar17 < (uint)uVar3 );
   }

   return;
}
/* JPH::SoftBodyMotionProperties::DrawPredictedBounds(JPH::DebugRenderer*, JPH::Mat44 const&) const
    */void JPH::SoftBodyMotionProperties::DrawPredictedBounds(SoftBodyMotionProperties *this, DebugRenderer *param_1, Mat44 *param_2) {
   JPH::DebugRenderer::DrawWireBox(param_1, param_2, this + 400, (undefined4)Color::sRed);
   return;
}
/* JPH::SoftBodyMotionProperties::SaveState(JPH::StateRecorder&) const */void JPH::SoftBodyMotionProperties::SaveState(SoftBodyMotionProperties *this, StateRecorder *param_1) {
   StateRecorder *pSVar1;
   long lVar2;
   long lVar3;
   pSVar1 = param_1 + 8;
   JPH::MotionProperties::SaveState((StateRecorder*)this);
   lVar2 = *(long*)( this + 0x118 );
   lVar3 = *(long*)( this + 0x108 ) * 0x50 + lVar2;
   for (; lVar3 != lVar2; lVar2 = lVar2 + 0x50) {
      ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, lVar2, 0xc);
      ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, lVar2 + 0x10, 0xc);
      ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, lVar2 + 0x20, 0xc);
   }

   lVar2 = *(long*)( this + 0x160 );
   lVar3 = *(long*)( this + 0x150 ) * 0x30 + lVar2;
   for (; lVar3 != lVar2; lVar2 = lVar2 + 0x30) {
      ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, lVar2, 0xc);
      ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, lVar2 + 0x10, 0xc);
      ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, lVar2 + 0x20, 0xc);
   }

   for (int i = 0; i < 3; i++) {
      ( **(code**)( *(long*)( param_1 + 8 ) + 16 ) )(pSVar1, this + ( 16*i + 368 ), 12);
   }

   /* WARNING: Could not recover jumptable at 0x00104cbc. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0x1a0, 0xc);
   return;
}
/* JPH::SoftBodyMotionProperties::RestoreState(JPH::StateRecorder&) */void JPH::SoftBodyMotionProperties::RestoreState(SoftBodyMotionProperties *this, StateRecorder *param_1) {
   long lVar1;
   long lVar2;
   JPH::MotionProperties::RestoreState((StateRecorder*)this);
   lVar1 = *(long*)( this + 0x118 );
   lVar2 = *(long*)( this + 0x108 ) * 0x50 + lVar1;
   for (; lVar2 != lVar1; lVar1 = lVar1 + 0x50) {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar1, 0xc);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar1 + 0x10, 0xc);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar1 + 0x20, 0xc);
   }

   lVar1 = *(long*)( this + 0x160 );
   lVar2 = *(long*)( this + 0x150 ) * 0x30 + lVar1;
   for (; lVar2 != lVar1; lVar1 = lVar1 + 0x30) {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar1, 0xc);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar1 + 0x10, 0xc);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar1 + 0x20, 0xc);
   }

   for (int i = 0; i < 4; i++) {
      ( **(code**)( *(long*)param_1 + 16 ) )(param_1, this + ( 16*i + 368 ), 12);
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::Initialize(JPH::SoftBodyCreationSettings const&) */void JPH::SoftBodyMotionProperties::Initialize(SoftBodyMotionProperties *this, SoftBodyCreationSettings *param_1) {
   undefined4 uVar1;
   float fVar2;
   SoftBodyCreationSettings SVar3;
   SoftBodySharedSettings *this_00;
   ulong uVar4;
   float *pfVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   SoftBodySharedSettings *pSVar10;
   float *pfVar11;
   float *pfVar12;
   undefined8 uVar13;
   long lVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   undefined1(*pauVar19)[16];
   long lVar20;
   float fVar21;
   undefined1 auVar22[16];
   float fVar23;
   float fVar24;
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   this_00 = *(SoftBodySharedSettings**)( this + 0x100 );
   pSVar10 = *(SoftBodySharedSettings**)param_1;
   if (this_00 != pSVar10) {
      if (this_00 != (SoftBodySharedSettings*)0x0) {
         LOCK();
         *(int*)this_00 = *(int*)this_00 + -1;
         UNLOCK();
         if (*(int*)this_00 == 0) {
            SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
            ( *Free )(this_00);
         }

         pSVar10 = *(SoftBodySharedSettings**)param_1;
      }

      *(SoftBodySharedSettings**)( this + 0x100 ) = pSVar10;
      if (pSVar10 != (SoftBodySharedSettings*)0x0) {
         LOCK();
         *(int*)pSVar10 = *(int*)pSVar10 + 1;
         UNLOCK();
      }

      pSVar10 = *(SoftBodySharedSettings**)param_1;
   }

   uVar1 = *(undefined4*)( param_1 + 100 );
   uVar4 = *(ulong*)( pSVar10 + 8 );
   *(undefined4*)( this + 0x1b0 ) = *(undefined4*)( param_1 + 0x50 );
   SVar3 = param_1[0x6c];
   *(undefined4*)( this + 0x1b4 ) = uVar1;
   *(SoftBodyCreationSettings*)( this + 0x1bc ) = SVar3;
   if (*(ulong*)( this + 0x110 ) < uVar4) {
      uVar13 = ( *Reallocate )(*(undefined8*)( this + 0x118 ), *(ulong*)( this + 0x110 ) * 0x50, uVar4 * 0x50);
      *(ulong*)( this + 0x110 ) = uVar4;
      *(undefined8*)( this + 0x118 ) = uVar13;
      pSVar10 = *(SoftBodySharedSettings**)param_1;
   }

   SVar3 = param_1[0x6d];
   *(ulong*)( this + 0x108 ) = uVar4;
   uVar1 = _LC8;
   fVar9 = _LC2;
   fVar8 = _UNK_001077b8;
   fVar7 = _UNK_001077b4;
   fVar6 = __LC3;
   if (SVar3 == (SoftBodyCreationSettings)0x0) {
      fVar21 = 0.0;
      fVar30 = 0.0;
      lVar14 = *(long*)( pSVar10 + 0x80 );
      fVar27 = _LC40;
      fVar23 = __LC39;
      fVar32 = _UNK_00107874;
      fVar28 = __LC38;
      fVar29 = _UNK_00107864;
      fVar17 = _UNK_00107868;
      fVar18 = _UNK_0010786c;
      fVar15 = _UNK_00107878;
      fVar16 = _UNK_0010787c;
      if (uVar4 == 0) goto LAB_001050e6;
      LAB_00104f93:pfVar5 = *(float**)( pSVar10 + 0x18 );
      auVar26 = *(undefined1(*) [16])( this + 0x170 );
      auVar25 = *(undefined1(*) [16])( this + 0x180 );
      pfVar11 = pfVar5;
      pauVar19 = *(undefined1(**) [16])( this + 0x118 );
      do {
         fVar24 = pfVar11[1];
         pfVar12 = pfVar11 + 7;
         fVar31 = pfVar11[2];
         auVar22._0_4_ = (float)*(undefined8*)pfVar11 * fVar27 + fVar24 * fVar23 + fVar31 * fVar28 + fVar6;
         auVar22._4_4_ = (float)*(undefined8*)pfVar11 * fVar21 + fVar24 * fVar32 + fVar31 * fVar29 + fVar7;
         auVar22._8_4_ = *pfVar11 * fVar30 + fVar24 * fVar15 + fVar31 * fVar17 + fVar8;
         auVar22._12_4_ = *pfVar11 * 0.0 + fVar24 * fVar16 + fVar31 * fVar18 + fVar9;
         pauVar19[1] = auVar22;
         auVar26 = minps(auVar26, auVar22);
         auVar25 = maxps(auVar25, auVar22);
         *pauVar19 = auVar22;
         fVar24 = pfVar11[4];
         fVar31 = pfVar11[3];
         fVar2 = pfVar11[5];
         *(undefined4*)( pauVar19[4] + 8 ) = uVar1;
         *(undefined4*)pauVar19[4] = 0xffffffff;
         pauVar19[4][4] = 0;
         *(float*)pauVar19[2] = fVar24 * fVar23 + fVar31 * fVar27 + fVar2 * fVar28;
         *(float*)( pauVar19[2] + 4 ) = fVar24 * fVar32 + fVar31 * fVar21 + fVar2 * fVar29;
         *(float*)( pauVar19[2] + 8 ) = fVar24 * fVar15 + fVar31 * fVar30 + fVar2 * fVar17;
         *(float*)( pauVar19[2] + 0xc ) = fVar24 * fVar16 + fVar31 * 0.0 + fVar2 * fVar18;
         *(float*)( pauVar19[4] + 0xc ) = pfVar11[6];
         *(undefined1(*) [16])( this + 0x170 ) = auVar26;
         *(undefined1(*) [16])( this + 0x180 ) = auVar25;
         pfVar11 = pfVar12;
         pauVar19 = pauVar19 + 5;
      }
 while ( pfVar5 + uVar4 * 7 != pfVar12 );
      if (lVar14 == 0) goto LAB_00105091;
      lVar14 = *(long*)( this + 0x160 );
      lVar20 = uVar4 * 0x30;
      if (*(ulong*)( this + 0x158 ) < uVar4) {
         lVar14 = ( *Reallocate )(lVar14, *(ulong*)( this + 0x158 ) * 0x30, lVar20);
         *(ulong*)( this + 0x158 ) = uVar4;
         *(long*)( this + 0x160 ) = lVar14;
      }

   }
 else {
      lVar14 = *(long*)( pSVar10 + 0x80 );
      fVar15 = (float)*(undefined8*)( param_1 + 0x28 );
      fVar17 = (float)*(undefined8*)( param_1 + 0x20 );
      fVar18 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x20 ) >> 0x20 );
      fVar24 = fVar17 + fVar17;
      fVar31 = fVar18 + fVar18;
      fVar16 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x28 ) >> 0x20 );
      fVar32 = ( fVar15 + fVar15 ) * fVar15;
      fVar23 = fVar16 * ( fVar15 + fVar15 );
      fVar30 = fVar24 * fVar15 - fVar31 * fVar16;
      fVar21 = fVar18 * fVar24 + fVar23;
      fVar27 = ( _LC2 - fVar31 * fVar18 ) - fVar32;
      fVar23 = fVar18 * fVar24 - fVar23;
      fVar32 = ( _LC2 - fVar32 ) - fVar17 * fVar24;
      fVar28 = fVar24 * fVar15 + fVar31 * fVar16;
      fVar29 = fVar15 * fVar31 - fVar24 * fVar16;
      fVar17 = ( _LC2 - fVar17 * fVar24 ) - fVar31 * fVar18;
      fVar18 = 0.0;
      fVar15 = fVar24 * fVar16 + fVar15 * fVar31;
      fVar16 = 0.0;
      if (uVar4 != 0) goto LAB_00104f93;
      LAB_001050e6:if (lVar14 == 0) goto LAB_00105091;
      lVar14 = *(long*)( this + 0x160 );
      lVar20 = 0;
   }

   uVar1 = _LC42;
   for (pauVar19 = (undefined1(*) [16])( *(long*)( this + 0x150 ) * 0x30 + lVar14 ); pauVar19 < (undefined1(*) [16])( lVar14 + lVar20 ); pauVar19 = pauVar19 + 3) {
      *pauVar19 = (undefined1[16])0x0;
      *(undefined4*)pauVar19[1] = uVar1;
      for (int i = 0; i < 3; i++) {
         *(undefined4*)( pauVar19[1] + ( 4*i + 4 ) ) = uVar1;
      }

      *(undefined4*)pauVar19[2] = uVar1;
      for (int i = 0; i < 3; i++) {
         *(undefined4*)( pauVar19[2] + ( 4*i + 4 ) ) = uVar1;
      }

   }

   *(ulong*)( this + 0x150 ) = uVar4;
   LAB_00105091:*(undefined8*)( this + 400 ) = *(undefined8*)( this + 0x170 );
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 408 ) ) = *(undefined8*)( this + ( 8*i + 376 ) );
   }

   CalculateMassAndInertia(this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::SoftBodyMotionProperties::DetermineCollidingShapes(JPH::SoftBodyUpdateContext const&,
   JPH::PhysicsSystem const&, JPH::BodyLockInterface const&)::Collector::AddHit(JPH::BodyID const&)
    */void Collector::AddHit(JPH::BodyID_const__ (long param_1, uint *param_2)) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   Array<JPH::SoftBodyMotionProperties::CollidingShape,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingShape>> *this;
   float *pfVar4;
   undefined8 uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   undefined8 uVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   undefined8 uVar22;
   undefined4 uVar23;
   char cVar24;
   float fVar25;
   float fVar26;
   int iVar27;
   long lVar28;
   long *plVar29;
   undefined8 *puVar30;
   undefined8 *puVar31;
   undefined8 *puVar32;
   float fVar33;
   float fVar34;
   undefined8 *puVar35;
   long lVar36;
   long lVar37;
   ulong uVar38;
   undefined8 *puVar39;
   ulong uVar40;
   undefined8 *puVar41;
   undefined8 *puVar42;
   long in_FS_OFFSET;
   byte bVar43;
   float fVar44;
   float fVar45;
   undefined4 uVar46;
   undefined4 uVar47;
   undefined8 uVar48;
   undefined8 uVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   float fVar55;
   undefined8 local_318;
   undefined8 uStack_310;
   float local_2e8;
   float fStack_2e4;
   float fStack_2e0;
   float fStack_2dc;
   float local_2d8;
   float fStack_2d4;
   float fStack_2d0;
   float fStack_2cc;
   float local_2b8;
   undefined4 local_294;
   undefined8 local_290;
   undefined8 local_288;
   float local_280;
   byte local_27c;
   undefined **local_278;
   undefined4 local_270;
   undefined1 local_26c[12];
   undefined4 uStack_260;
   undefined4 uStack_25c;
   undefined8 uStack_258;
   undefined4 uStack_250;
   undefined4 local_24c;
   undefined8 local_248;
   undefined8 uStack_240;
   undefined8 local_238;
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_220;
   undefined8 local_218;
   undefined8 uStack_210;
   undefined8 local_208;
   undefined8 uStack_200;
   undefined8 local_1f8;
   undefined8 uStack_1f0;
   undefined8 local_1e8;
   undefined8 uStack_1e0;
   undefined8 local_1d8;
   undefined8 uStack_1d0;
   Mat44 local_1c8[4];
   float afStack_1c4[15];
   undefined1 local_188[4];
   float fStack_184;
   undefined8 uStack_180;
   undefined8 local_178;
   ulong uStack_170;
   undefined1 local_168[16];
   undefined8 local_158;
   undefined4 uStack_150;
   float fStack_14c;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   long local_108;
   undefined8 uStack_100;
   undefined8 *local_f8;
   uint local_f0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   ulong uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   long local_40;
   bVar43 = 0;
   plVar1 = *(long**)( param_1 + 0x80 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 != 0xffffffff) {
      lVar28 = ( **(code**)( *plVar1 + 0x10 ) )(plVar1);
      uVar38 = ( ulong )(*param_2 & 0x7fffff);
      if (( ( uVar38 < *(ulong*)plVar1[1] ) && ( puVar41 = *(undefined8**)( ( (ulong*)plVar1[1] )[2] + uVar38 * 8 )((ulong)puVar41 & 1) == 0 ) ) && ( *param_2 == *(uint*)( puVar41 + 0xe ) )) {
         plVar29 = *(long**)( param_1 + 0x18 );
         lVar36 = *plVar29;
         if (*(char*)( (long)puVar41 + 0x76 ) == '\0') {
            plVar2 = *(long**)( lVar36 + 0x58 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)puVar41[0xb];
               if (plVar2 != (long*)0x0) {
                  cVar24 = ( **(code**)( *plVar2 + 0x20 ) )(plVar2, puVar41 + 0xb, lVar36 + 0x58);
                  goto LAB_001052df;
               }

            }
 else {
               cVar24 = ( **(code**)( *plVar2 + 0x20 ) )(plVar2, lVar36 + 0x58, puVar41 + 0xb);
               LAB_001052df:if (cVar24 == '\0') goto LAB_00105268;
               plVar29 = *(long**)( param_1 + 0x18 );
            }

            local_288 = _LC43;
            local_280 = _LC2;
            plVar29 = (long*)plVar29[2];
            local_27c = *(byte*)( (long)puVar41 + 0x79 ) & 1;
            if (plVar29 == (long*)0x0) {
               if (local_27c == 0) goto LAB_00105370;
            }
 else if (( ( *(code**)( *plVar29 + 0x10 ) == SoftBodyContactListener::OnSoftBodyContactValidate ) || ( iVar27 = ( **(code**)( *plVar29 + 0x10 ) )(plVar29, lVar36, puVar41, &local_288) ),iVar27 == 0 )) {
               LAB_00105370:fVar44 = _LC2;
               fStack_14c = _LC2;
               fVar25 = (float)puVar41[2];
               fVar33 = (float)puVar41[3];
               fVar26 = (float)( (ulong)puVar41[2] >> 0x20 );
               fVar53 = fVar25 + fVar25;
               uStack_150 = *(undefined4*)( puVar41 + 1 );
               fVar54 = fVar26 + fVar26;
               fVar45 = *(float*)( param_1 + 0x20 );
               fVar52 = *(float*)( param_1 + 0x24 );
               fVar6 = *(float*)( param_1 + 0x28 );
               fVar7 = *(float*)( param_1 + 0x2c );
               fVar34 = (float)( (ulong)puVar41[3] >> 0x20 );
               local_158 = *puVar41;
               lVar37 = 0;
               fVar55 = fVar33 * ( fVar33 + fVar33 );
               fVar50 = ( fVar33 + fVar33 ) * fVar34;
               local_188 = ( _LC2 - fVar26 * fVar54 ) - fVar55;
               register0x00001244 = fVar26 * fVar53 + fVar50;
               register0x00001248 = fVar33 * fVar53 - fVar54 * fVar34;
               register0x0000124c = 0;
               fVar8 = *(float*)( param_1 + 0x30 );
               fVar9 = *(float*)( param_1 + 0x34 );
               fVar51 = *(float*)( param_1 + 0x38 );
               fVar10 = *(float*)( param_1 + 0x3c );
               fVar11 = *(float*)( param_1 + 0x40 );
               fVar12 = *(float*)( param_1 + 0x44 );
               fVar13 = *(float*)( param_1 + 0x48 );
               fVar14 = *(float*)( param_1 + 0x4c );
               local_178 = CONCAT44(( _LC2 - fVar55 ) - fVar25 * fVar53, fVar26 * fVar53 - fVar50);
               uStack_170 = ( ulong )(uint)(fVar53 * fVar34 + fVar33 * fVar54);
               local_168._4_4_ = fVar33 * fVar54 - fVar53 * fVar34;
               local_168._0_4_ = fVar33 * fVar53 + fVar54 * fVar34;
               fVar33 = *(float*)( param_1 + 0x50 );
               fVar34 = *(float*)( param_1 + 0x54 );
               fVar50 = *(float*)( param_1 + 0x58 );
               fVar55 = *(float*)( param_1 + 0x5c );
               local_168._8_4_ = ( _LC2 - fVar25 * fVar53 ) - fVar26 * fVar54;
               local_168._12_4_ = 0;
               do {
                  fVar25 = *(float*)( local_188 + lVar37 );
                  fVar26 = *(float*)( local_188 + lVar37 + 4 );
                  fVar53 = *(float*)( local_188 + lVar37 + 8 );
                  fVar54 = *(float*)( local_188 + lVar37 + 0xc );
                  *(float*)( (CollidingSensor*)&local_148 + lVar37 ) = fVar54 * fVar33 + fVar25 * fVar45 + fVar26 * fVar8 + fVar53 * fVar11;
                  *(float*)( (long)&local_148 + lVar37 + 4 ) = fVar54 * fVar34 + fVar25 * fVar52 + fVar26 * fVar9 + fVar53 * fVar12;
                  *(float*)( (long)&uStack_140 + lVar37 ) = fVar54 * fVar50 + fVar25 * fVar6 + fVar26 * fVar51 + fVar53 * fVar13;
                  *(float*)( (long)&uStack_140 + lVar37 + 4 ) = fVar54 * fVar55 + fVar25 * fVar7 + fVar26 * fVar10 + fVar53 * fVar14;
                  uVar49 = uStack_110;
                  uVar48 = local_118;
                  lVar37 = lVar37 + 0x10;
               }
 while ( lVar37 != 0x40 );
               lVar37 = *(long*)( param_1 + 0x98 );
               plVar29 = (long*)puVar41[8];
               local_278 = &PTR__LeafShapeCollector_00107770;
               *(undefined8**)( lVar37 + 0x20 ) = puVar41;
               local_24c = 0;
               local_26c = SUB1612((undefined1[16])0x0, 0);
               uStack_260 = 0;
               pcVar3 = *(code**)( *plVar29 + 0xb8 );
               uStack_25c = 0;
               uStack_258 = 0;
               uStack_250 = 0;
               fVar52 = (float)uStack_140;
               fVar6 = (float)local_138;
               fVar51 = (float)uStack_120 + (float)local_148 + local_138._4_4_;
               local_248 = local_148;
               uStack_240 = uStack_140;
               fVar7 = (float)uStack_130;
               local_238 = local_138;
               uStack_230 = uStack_130;
               fVar8 = (float)local_128;
               local_228 = local_128;
               uStack_220 = uStack_120;
               fVar9 = local_128._4_4_;
               local_218 = local_118;
               uStack_210 = uStack_110;
               fVar45 = local_148._4_4_;
               local_270 = 0x7f7fffff;
               local_290 = _LC44;
               if (0.0 <= fVar51) {
                  fVar52 = SQRT(fVar51 + fVar44);
                  fVar45 = _LC25 / fVar52;
                  uStack_310 = CONCAT44(fVar52 * _LC25, ( local_148._4_4_ - (float)local_138 ) * fVar45);
                  local_318 = CONCAT44(( (float)local_128 - (float)uStack_140 ) * fVar45, ( (float)uStack_130 - local_128._4_4_ ) * fVar45);
               }
 else if (local_138._4_4_ <= (float)local_148) {
                  if ((float)local_148 < (float)uStack_120) goto LAB_00105be8;
                  fVar44 = ( (float)local_148 - ( (float)uStack_120 + local_138._4_4_ ) ) + fVar44;
                  if (fVar44 < 0.0) {
                     fVar44 = sqrtf(fVar44);
                  }
 else {
                     fVar44 = SQRT(fVar44);
                  }

                  fVar51 = _LC25 / fVar44;
                  local_318 = CONCAT44(( fVar6 + fVar45 ) * fVar51, fVar44 * _LC25);
                  uStack_310 = CONCAT44(( fVar7 - fVar9 ) * fVar51, ( fVar52 + fVar8 ) * fVar51);
               }
 else if (local_138._4_4_ < (float)uStack_120) {
                  LAB_00105be8:fVar44 = ( (float)uStack_120 - ( (float)local_148 + local_138._4_4_ ) ) + fVar44;
                  if (fVar44 < 0.0) {
                     fVar44 = sqrtf(fVar44);
                  }
 else {
                     fVar44 = SQRT(fVar44);
                  }

                  fVar51 = _LC25 / fVar44;
                  uStack_310 = CONCAT44(( fVar45 - fVar6 ) * fVar51, fVar44 * _LC25);
                  local_318 = CONCAT44(( fVar9 + fVar7 ) * fVar51, ( fVar8 + fVar52 ) * fVar51);
               }
 else {
                  fVar44 = ( local_138._4_4_ - ( (float)uStack_120 + (float)local_148 ) ) + fVar44;
                  if (fVar44 < 0.0) {
                     fVar44 = sqrtf(fVar44);
                  }
 else {
                     fVar44 = SQRT(fVar44);
                  }

                  fVar51 = _LC25 / fVar44;
                  local_318 = CONCAT44(fVar44 * _LC25, ( fVar6 + fVar45 ) * fVar51);
                  uStack_310 = CONCAT44(( fVar8 - fVar52 ) * fVar51, ( fVar7 + fVar9 ) * fVar51);
               }

               ( *pcVar3 )(uVar48, uVar49, local_318, uStack_310, 0x3f8000003f800000, 0x3f8000003f800000, plVar29, param_1 + 0x60, &local_290, &local_278, lVar37);
               lVar37 = CONCAT44(uStack_25c, uStack_260);
               if (lVar37 == 0) {
                  uVar38 = CONCAT44(local_24c, uStack_250);
                  local_278 = &PTR__LeafShapeCollector_00107770;
                  if (uVar38 != 0) goto LAB_00105bac;
               }
 else {
                  puVar39 = (undefined8*)CONCAT44(local_24c, uStack_250);
                  if (local_27c == 0) {
                     local_f0 = *param_2;
                     cVar24 = *(char*)( puVar41 + 0xf );
                     local_148 = local_248;
                     uStack_140 = uStack_240;
                     local_138 = local_238;
                     uStack_130 = uStack_230;
                     local_128 = local_228;
                     uStack_120 = uStack_220;
                     local_118 = local_218;
                     uStack_110 = uStack_210;
                     uStack_250 = 0;
                     local_24c = 0;
                     local_290._0_4_ = 0xffffffff;
                     local_294 = 0xffffffff;
                     uStack_260 = 0;
                     uStack_25c = 0;
                     uStack_258 = 0;
                     uVar46 = ( **(code**)( param_1 + 0x88 ) )(lVar36, &local_294, puVar41, &local_290);
                     local_290 = CONCAT44(local_290._4_4_, 0xffffffff);
                     local_294 = 0xffffffff;
                     uVar47 = ( **(code**)( param_1 + 0x90 ) )(lVar36, &local_294, puVar41, &local_290);
                     uVar23 = (float)local_288;
                     if (cVar24 == '\x02') {
                        pfVar4 = (float*)puVar41[9];
                        local_2b8 = local_288._4_4_ * pfVar4[0x16];
                        local_208 = local_148;
                        uStack_200 = uStack_140;
                        local_1e8 = local_128;
                        uStack_1e0 = uStack_120;
                        local_1f8 = local_138;
                        uStack_1f0 = uStack_130;
                        uStack_1d0 = CONCAT44(_LC2, _UNK_001077b8);
                        local_1d8 = __LC3;
                        MotionProperties::GetInverseInertiaForRotation(local_1c8);
                        lVar36 = 0;
                        do {
                           fVar45 = *(float*)( (long)afStack_1c4 + lVar36 + 4 );
                           fVar52 = *(float*)( (long)afStack_1c4 + lVar36 + 8 );
                           *(float*)( local_188 + lVar36 ) = *(float*)( local_1c8 + lVar36 ) * local_280;
                           *(float*)( local_188 + lVar36 + 4 ) = *(float*)( (long)afStack_1c4 + lVar36 ) * local_280;
                           *(float*)( local_188 + lVar36 + 8 ) = fVar45 * local_280;
                           *(float*)( local_188 + lVar36 + 0xc ) = fVar52 * local_280;
                           lVar36 = lVar36 + 0x10;
                        }
 while ( lVar36 != 0x40 );
                        local_c8 = _local_188;
                        uStack_c0 = uStack_180;
                        fVar45 = *pfVar4;
                        fVar52 = pfVar4[1];
                        fVar6 = pfVar4[2];
                        local_b8 = local_178;
                        uStack_b0 = uStack_170;
                        local_a8 = local_168._0_8_;
                        uStack_a0 = local_168._8_8_;
                        local_98 = local_158;
                        uStack_90 = CONCAT44(fStack_14c, uStack_150);
                        local_2e8 = fVar45 * *(float*)( param_1 + 0x20 ) + fVar52 * *(float*)( param_1 + 0x30 ) + fVar6 * *(float*)( param_1 + 0x40 );
                        fStack_2e4 = fVar45 * *(float*)( param_1 + 0x24 ) + fVar52 * *(float*)( param_1 + 0x34 ) + fVar6 * *(float*)( param_1 + 0x44 );
                        fStack_2e0 = fVar45 * *(float*)( param_1 + 0x28 ) + fVar52 * *(float*)( param_1 + 0x38 ) + fVar6 * *(float*)( param_1 + 0x48 );
                        fStack_2dc = fVar45 * *(float*)( param_1 + 0x2c ) + fVar52 * *(float*)( param_1 + 0x3c ) + fVar6 * *(float*)( param_1 + 0x4c );
                        fVar45 = pfVar4[4];
                        fVar52 = pfVar4[5];
                        fVar6 = pfVar4[6];
                        local_2d8 = fVar45 * *(float*)( param_1 + 0x20 ) + fVar52 * *(float*)( param_1 + 0x30 ) + fVar6 * *(float*)( param_1 + 0x40 );
                        fStack_2d4 = fVar45 * *(float*)( param_1 + 0x24 ) + fVar52 * *(float*)( param_1 + 0x34 ) + fVar6 * *(float*)( param_1 + 0x44 );
                        fStack_2d0 = fVar45 * *(float*)( param_1 + 0x28 ) + fVar52 * *(float*)( param_1 + 0x38 ) + fVar6 * *(float*)( param_1 + 0x48 );
                        fStack_2cc = fVar45 * *(float*)( param_1 + 0x2c ) + fVar52 * *(float*)( param_1 + 0x3c ) + fVar6 * *(float*)( param_1 + 0x4c );
                     }

                     this * (Array<JPH::SoftBodyMotionProperties::CollidingShape,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingShape>>**)( param_1 + 0xa0 );
                     uVar48 = CONCAT44(uVar23, uVar47);
                     lVar36 = *(long*)this;
                     uVar49 = CONCAT44(uVar46, local_2b8);
                     uVar38 = lVar36 + 1;
                     if (*(ulong*)( this + 8 ) < uVar38) {
                        uVar40 = *(ulong*)( this + 8 ) * 2;
                        if (uVar38 <= uVar40) {
                           uVar38 = uVar40;
                        }

                        Array<JPH::SoftBodyMotionProperties::CollidingShape,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingShape>>::reallocate(this, uVar38);
                        lVar36 = *(long*)this;
                        uVar38 = lVar36 + 1;
                     }

                     *(ulong*)this = uVar38;
                     puVar42 = (undefined8*)( lVar36 * 0x100 + *(long*)( this + 0x10 ) );
                     *(undefined1(*) [16])( puVar42 + 8 ) = (undefined1[16])0x0;
                     puVar41 = puVar39 + lVar37 * 0xc;
                     *puVar42 = local_148;
                     puVar42[1] = uStack_140;
                     puVar42[10] = 0;
                     puVar42[2] = local_138;
                     puVar42[3] = uStack_130;
                     puVar42[4] = local_128;
                     puVar42[5] = uStack_120;
                     puVar42[6] = local_118;
                     puVar42[7] = uStack_110;
                     if (lVar37 * 0x60 == 0) {
                        *(char*)( (long)puVar42 + 0x5c ) = cVar24;
                        *(undefined1*)( puVar42 + 0xe ) = 0;
                        puVar42[0x14] = local_a8;
                        puVar42[0x15] = uStack_a0;
                        puVar42[0x16] = local_98;
                        puVar42[0x17] = uStack_90;
                        *(uint*)( puVar42 + 0xb ) = local_f0;
                        puVar42[0xc] = uVar49;
                        puVar42[0xd] = uVar48;
                        puVar42[0x10] = local_c8;
                        puVar42[0x11] = uStack_c0;
                        puVar42[0x12] = local_b8;
                        puVar42[0x13] = uStack_b0;
                        puVar42[0x18] = CONCAT44(fStack_2e4, local_2e8);
                        puVar42[0x19] = CONCAT44(fStack_2dc, fStack_2e0);
                        puVar42[0x1a] = CONCAT44(fStack_2d4, local_2d8);
                        puVar42[0x1b] = CONCAT44(fStack_2cc, fStack_2d0);
                        puVar42[0x1c] = CONCAT44(fStack_2e4, local_2e8);
                        puVar42[0x1d] = CONCAT44(fStack_2dc, fStack_2e0);
                        puVar42[0x1e] = CONCAT44(fStack_2d4, local_2d8);
                        puVar42[0x1f] = CONCAT44(fStack_2cc, fStack_2d0);
                        if (puVar39 == (undefined8*)0x0) goto LAB_00105b1a;
                     }
 else {
                        puVar30 = (undefined8*)( *Allocate )();
                        puVar35 = (undefined8*)puVar42[10];
                        if (puVar35 != (undefined8*)0x0) {
                           lVar36 = puVar42[8];
                           if (puVar30 < puVar35) {
                              for (puVar31 = puVar30; puVar31 < puVar30 + lVar36 * 0xc; puVar31 = puVar31 + 0xc) {
                                 uVar15 = puVar35[1];
                                 uVar5 = puVar35[10];
                                 uVar16 = puVar35[2];
                                 uVar17 = puVar35[3];
                                 uVar18 = puVar35[4];
                                 uVar19 = puVar35[5];
                                 *puVar31 = *puVar35;
                                 puVar31[1] = uVar15;
                                 uVar15 = puVar35[6];
                                 uVar20 = puVar35[7];
                                 puVar31[2] = uVar16;
                                 puVar31[3] = uVar17;
                                 uVar16 = puVar35[8];
                                 uVar17 = puVar35[9];
                                 puVar31[4] = uVar18;
                                 puVar31[5] = uVar19;
                                 puVar31[6] = uVar15;
                                 puVar31[7] = uVar20;
                                 puVar31[8] = uVar16;
                                 puVar31[9] = uVar17;
                                 puVar31[10] = uVar5;
                                 puVar35 = puVar35 + 0xc;
                              }

                           }
 else {
                              puVar35 = puVar35 + lVar36 * 0xc + -0xc;
                              puVar31 = puVar30 + lVar36 * 0xc + -0xc;
                              if (!CARRY8(lVar36 * 0x60 - 0x60,(ulong)puVar30)) {
                                 do {
                                    uVar15 = puVar35[1];
                                    uVar5 = puVar35[10];
                                    puVar32 = puVar31 + -0xc;
                                    uVar16 = puVar35[2];
                                    uVar17 = puVar35[3];
                                    uVar18 = puVar35[4];
                                    uVar19 = puVar35[5];
                                    *puVar31 = *puVar35;
                                    puVar31[1] = uVar15;
                                    uVar15 = puVar35[6];
                                    uVar20 = puVar35[7];
                                    uVar21 = puVar35[8];
                                    uVar22 = puVar35[9];
                                    puVar31[2] = uVar16;
                                    puVar31[3] = uVar17;
                                    puVar31[4] = uVar18;
                                    puVar31[5] = uVar19;
                                    puVar31[6] = uVar15;
                                    puVar31[7] = uVar20;
                                    puVar31[8] = uVar21;
                                    puVar31[9] = uVar22;
                                    puVar31[10] = uVar5;
                                    puVar31 = puVar32;
                                    puVar35 = puVar35 + -0xc;
                                 }
 while ( puVar30 <= puVar32 );
                              }

                           }

                           ( *Free )();
                        }

                        puVar42[10] = puVar30;
                        puVar42[9] = ( lVar37 * 0x60 >> 5 ) * -0x5555555555555555;
                        puVar35 = puVar39;
                        if (puVar39 == puVar41) {
                           *(char*)( (long)puVar42 + 0x5c ) = cVar24;
                           *(undefined1*)( puVar42 + 0xe ) = 0;
                           puVar42[0xc] = uVar49;
                           puVar42[0xd] = uVar48;
                           *(uint*)( puVar42 + 0xb ) = local_f0;
                           puVar41 = &local_c8;
                           puVar35 = puVar42 + 0x10;
                           for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
                              *(undefined4*)puVar35 = *(undefined4*)puVar41;
                              puVar41 = (undefined8*)( (long)puVar41 + (ulong)bVar43 * -8 + 4 );
                              puVar35 = (undefined8*)( (long)puVar35 + (ulong)bVar43 * -8 + 4 );
                           }

                           puVar42[0x18] = CONCAT44(fStack_2e4, local_2e8);
                           puVar42[0x19] = CONCAT44(fStack_2dc, fStack_2e0);
                           puVar42[0x1a] = CONCAT44(fStack_2d4, local_2d8);
                           puVar42[0x1b] = CONCAT44(fStack_2cc, fStack_2d0);
                           puVar42[0x1c] = CONCAT44(fStack_2e4, local_2e8);
                           puVar42[0x1d] = CONCAT44(fStack_2dc, fStack_2e0);
                           puVar42[0x1e] = CONCAT44(fStack_2d4, local_2d8);
                           puVar42[0x1f] = CONCAT44(fStack_2cc, fStack_2d0);
                        }
 else {
                           while (true) {
                              lVar36 = puVar42[8];
                              uVar5 = *puVar35;
                              uVar15 = puVar35[1];
                              uVar16 = puVar35[4];
                              uVar17 = puVar35[5];
                              uVar18 = puVar35[6];
                              uVar19 = puVar35[7];
                              uVar20 = puVar35[8];
                              uVar21 = puVar35[9];
                              puVar42[8] = lVar36 + 1;
                              puVar30 = puVar30 + lVar36 * 0xc;
                              lVar36 = puVar35[10];
                              *puVar30 = uVar5;
                              puVar30[1] = uVar15;
                              uVar5 = puVar35[2];
                              uVar15 = puVar35[3];
                              puVar30[4] = uVar16;
                              puVar30[5] = uVar17;
                              puVar30[10] = lVar36;
                              puVar30[2] = uVar5;
                              puVar30[3] = uVar15;
                              puVar30[6] = uVar18;
                              puVar30[7] = uVar19;
                              puVar30[8] = uVar20;
                              puVar30[9] = uVar21;
                              if (lVar36 != 0) {
                                 LOCK();
                                 *(int*)( lVar36 + 8 ) = *(int*)( lVar36 + 8 ) + 1;
                                 UNLOCK();
                              }

                              if (puVar41 == puVar35 + 0xc) break;
                              puVar30 = (undefined8*)puVar42[10];
                              puVar35 = puVar35 + 0xc;
                           }
;
                           *(char*)( (long)puVar42 + 0x5c ) = cVar24;
                           *(undefined1*)( puVar42 + 0xe ) = 0;
                           puVar42[0x10] = local_c8;
                           puVar42[0x11] = uStack_c0;
                           puVar42[0x12] = local_b8;
                           puVar42[0x13] = uStack_b0;
                           puVar42[0x16] = local_98;
                           puVar42[0x17] = uStack_90;
                           *(uint*)( puVar42 + 0xb ) = local_f0;
                           puVar42[0xc] = uVar49;
                           puVar42[0xd] = uVar48;
                           puVar42[0x14] = local_a8;
                           puVar42[0x15] = uStack_a0;
                           puVar42[0x18] = CONCAT44(fStack_2e4, local_2e8);
                           puVar42[0x19] = CONCAT44(fStack_2dc, fStack_2e0);
                           puVar42[0x1a] = CONCAT44(fStack_2d4, local_2d8);
                           puVar42[0x1b] = CONCAT44(fStack_2cc, fStack_2d0);
                           puVar42[0x1c] = CONCAT44(fStack_2e4, local_2e8);
                           puVar42[0x1d] = CONCAT44(fStack_2dc, fStack_2e0);
                           puVar42[0x1e] = CONCAT44(fStack_2d4, local_2d8);
                           puVar42[0x1f] = CONCAT44(fStack_2cc, fStack_2d0);
                           puVar42 = puVar39;
                           if (puVar39 == (undefined8*)0x0) goto LAB_00105b1a;
                           for (; puVar42 < puVar41; puVar42 = puVar42 + 0xc) {
                              plVar29 = (long*)puVar42[10];
                              if (plVar29 != (long*)0x0) {
                                 LOCK();
                                 plVar2 = plVar29 + 1;
                                 *(int*)plVar2 = (int)*plVar2 + -1;
                                 UNLOCK();
                                 if ((int)*plVar2 == 0) {
                                    ( **(code**)( *plVar29 + 8 ) )();
                                 }

                              }

                           }

                        }

                     }

                     ( *Free )(puVar39);
                  }
 else {
                     local_f0 = *param_2;
                     uStack_100 = uStack_258;
                     local_148 = local_248;
                     uStack_140 = uStack_240;
                     local_138 = local_238;
                     uStack_130 = uStack_230;
                     uStack_250 = 0;
                     local_24c = 0;
                     local_128 = local_228;
                     uStack_120 = uStack_220;
                     local_118 = local_218;
                     uStack_110 = uStack_210;
                     uStack_260 = 0;
                     uStack_25c = 0;
                     uStack_258 = 0;
                     local_108 = lVar37;
                     local_f8 = puVar39;
                     Array<JPH::SoftBodyMotionProperties::CollidingSensor,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingSensor>>::push_back(*(Array<JPH::SoftBodyMotionProperties::CollidingSensor,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingSensor>>**)( param_1 + 0xa8 ), (CollidingSensor*)&local_148);
                     if (puVar39 != (undefined8*)0x0) {
                        puVar41 = puVar39 + lVar37 * 0xc;
                        for (; puVar39 < puVar41; puVar39 = puVar39 + 0xc) {
                           plVar29 = (long*)puVar39[10];
                           if (plVar29 != (long*)0x0) {
                              LOCK();
                              plVar2 = plVar29 + 1;
                              *(int*)plVar2 = (int)*plVar2 + -1;
                              UNLOCK();
                              if ((int)*plVar2 == 0) {
                                 ( **(code**)( *plVar29 + 8 ) )();
                              }

                           }

                        }

                        ( *Free )(local_f8);
                     }

                  }

                  LAB_00105b1a:uVar38 = CONCAT44(local_24c, uStack_250);
                  local_278 = &PTR__LeafShapeCollector_00107770;
                  if (uVar38 != 0) {
                     if (( CONCAT44(uStack_25c, uStack_260) != 0 ) && ( uVar40 = uVar38 < uVar40 )) {
                        do {
                           plVar29 = *(long**)( uVar38 + 0x50 );
                           if (plVar29 != (long*)0x0) {
                              LOCK();
                              plVar2 = plVar29 + 1;
                              *(int*)plVar2 = (int)*plVar2 + -1;
                              UNLOCK();
                              if ((int)*plVar2 == 0) {
                                 ( **(code**)( *plVar29 + 8 ) )();
                              }

                           }

                           uVar38 = uVar38 + 0x60;
                        }
 while ( uVar38 < uVar40 );
                        uVar38 = CONCAT44(local_24c, uStack_250);
                     }

                     uStack_260 = 0;
                     uStack_25c = 0;
                     LAB_00105bac:( *Free )(uVar38);
                  }

               }

            }

         }

      }

      LAB_00105268:if (lVar28 != 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001052a7. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *plVar1 + 0x18 ) )(plVar1, lVar28);
            return;
         }

         goto LAB_001060e3;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001060e3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JPH::ObjectLayerPairFilter::ShouldCollide(unsigned short, unsigned short) const */undefined8 JPH::ObjectLayerPairFilter::ShouldCollide(ushort param_1, ushort param_2) {
   return 1;
}
/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */undefined8 JPH::ShapeFilter::ShouldCollide(Shape *param_1, SubShapeID *param_2) {
   return 1;
}
/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape const*,
   JPH::SubShapeID const&) const */undefined8 JPH::ShapeFilter::ShouldCollide(Shape *param_1, SubShapeID *param_2, Shape *param_3, SubShapeID *param_4) {
   return 1;
}
/* JPH::ShapeFilter::~ShapeFilter() */void JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this) {
   return;
}
/* JPH::Shape::GetCenterOfMass() const */undefined1[16];JPH::Shape::GetCenterOfMass(void) {
   return ZEXT816(0);
}
/* JPH::SoftBodyContactListener::OnSoftBodyContactValidate(JPH::Body const&, JPH::Body const&,
   JPH::SoftBodyContactSettings&) */undefined8 JPH::SoftBodyContactListener::OnSoftBodyContactValidate(Body *param_1, Body *param_2, SoftBodyContactSettings *param_3) {
   return 0;
}
/* JPH::SoftBodyContactListener::OnSoftBodyContactAdded(JPH::Body const&, JPH::SoftBodyManifold
   const&) */void JPH::SoftBodyContactListener::OnSoftBodyContactAdded(Body *param_1, SoftBodyManifold *param_2) {
   return;
}
/* JPH::SimShapeFilter::ShouldCollide(JPH::Body const&, JPH::Shape const*, JPH::SubShapeID const&,
   JPH::Body const&, JPH::Shape const*, JPH::SubShapeID const&) const */undefined8 JPH::SimShapeFilter::ShouldCollide(Body *param_1, Shape *param_2, SubShapeID *param_3, Body *param_4, Shape *param_5, SubShapeID *param_6) {
   return 1;
}
/* JPH::ObjectVsBroadPhaseLayerFilter::ShouldCollide(unsigned short, JPH::BroadPhaseLayer) const */undefined8 JPH::ObjectVsBroadPhaseLayerFilter::ShouldCollide(void) {
   return 1;
}
/* JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter() */void JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter(DefaultBroadPhaseLayerFilter *this) {
   return;
}
/* JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter() */void JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter(DefaultObjectLayerFilter *this) {
   return;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x001063b4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JPH::SimShapeFilterWrapper::~SimShapeFilterWrapper() */void JPH::SimShapeFilterWrapper::~SimShapeFilterWrapper(SimShapeFilterWrapper *this) {
   return;
}
/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::Reset() */void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::Reset(CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape> *this) {
   *(undefined4*)( this + 8 ) = 0x7f7fffff;
   return;
}
/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::OnBody(Body *param_1) {
   return;
}
/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::SetUserData(ulong param_1) {
   return;
}
/* JPH::CollisionCollector<JPH::BodyID, JPH::CollisionCollectorTraitsCollideShape>::Reset() */void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::Reset(CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape> *this) {
   *(undefined4*)( this + 8 ) = 0x7f7fffff;
   return;
}
/* JPH::CollisionCollector<JPH::BodyID, JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body
   const&) */void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::OnBody(Body *param_1) {
   return;
}
/* JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::SetUserData(ulong param_1) {
   return;
}
/* JPH::SimShapeFilterWrapper::~SimShapeFilterWrapper() */void JPH::SimShapeFilterWrapper::~SimShapeFilterWrapper(SimShapeFilterWrapper *this) {
   operator_delete(this, 0x28);
   return;
}
/* JPH::ShapeFilter::~ShapeFilter() */void JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this) {
   operator_delete(this, 0x10);
   return;
}
/* JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter() */void JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter(DefaultBroadPhaseLayerFilter *this) {
   operator_delete(this, 0x18);
   return;
}
/* JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter() */void JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter(DefaultObjectLayerFilter *this) {
   operator_delete(this, 0x18);
   return;
}
/* JPH::DefaultBroadPhaseLayerFilter::ShouldCollide(JPH::BroadPhaseLayer) const */undefined8 JPH::DefaultBroadPhaseLayerFilter::ShouldCollide(DefaultBroadPhaseLayerFilter *this, undefined4 param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( this + 8 ) + 0x10 );
   if (UNRECOVERED_JUMPTABLE == ObjectVsBroadPhaseLayerFilter::ShouldCollide) {
      return 1;
   }

   /* WARNING: Could not recover jumptable at 0x001064a3. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar1 = ( *UNRECOVERED_JUMPTABLE )(*(long**)( this + 8 ), *(undefined2*)( this + 0x10 ), param_2);
   return uVar1;
}
/* JPH::SimShapeFilterWrapper::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape
   const*, JPH::SubShapeID const&) const */undefined1  [16] __thiscallJPH::SimShapeFilterWrapper::ShouldCollide(SimShapeFilterWrapper *this, Shape *param_1, SubShapeID *param_2, Shape *param_3, SubShapeID *param_4) {
   code *pcVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   pcVar1 = *(code**)( **(long**)( this + 0x10 ) + 0x10 );
   if (pcVar1 == SimShapeFilter::ShouldCollide) {
      auVar2._8_8_ = SimShapeFilter::ShouldCollide;
      auVar2._0_8_ = 1;
      return auVar2;
   }

   auVar3._0_8_ = ( *pcVar1 )(*(long**)( this + 0x10 ), *(undefined8*)( this + 0x18 ), param_1, param_2, *(undefined8*)( this + 0x20 ), param_3);
   auVar3._8_8_ = param_4;
   return auVar3;
}
/* JPH::DefaultObjectLayerFilter::ShouldCollide(unsigned short) const */undefined8 JPH::DefaultObjectLayerFilter::ShouldCollide(DefaultObjectLayerFilter *this, ushort param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( this + 8 ) + 0x10 );
   if (UNRECOVERED_JUMPTABLE == ObjectLayerPairFilter::ShouldCollide) {
      return 1;
   }

   /* WARNING: Could not recover jumptable at 0x00106542. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar1 = ( *UNRECOVERED_JUMPTABLE )(*(long**)( this + 8 ), *(undefined2*)( this + 0x10 ), param_1);
   return uVar1;
}
/* JPH::SimShapeFilterWrapper::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */undefined8 JPH::SimShapeFilterWrapper::ShouldCollide(SimShapeFilterWrapper *this, Shape *param_1, SubShapeID *param_2) {
   code *pcVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = 0xffffffff;
   pcVar1 = *(code**)( **(long**)( this + 0x10 ) + 0x10 );
   uVar2 = 1;
   if (pcVar1 != SimShapeFilter::ShouldCollide) {
      uVar2 = ( *pcVar1 )(*(long**)( this + 0x10 ), *(long*)( this + 0x18 ), *(undefined8*)( *(long*)( this + 0x18 ) + 0x40 ), &local_14, *(undefined8*)( this + 0x20 ), param_1, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const */Mat44 *JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1) {
   byte bVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   undefined1 auVar6[16];
   float fVar7;
   float fVar8;
   long lVar9;
   float fVar10;
   float fVar11;
   float *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   uint uVar16;
   uint uVar18;
   uint uVar19;
   undefined1 auVar17[16];
   uint uVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float local_98[16];
   undefined1 local_58[4];
   float afStack_54[3];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar10 = (float)*(undefined8*)( in_RSI + 0x38 );
   fVar11 = (float)( ( ulong ) * (undefined8*)( in_RSI + 0x38 ) >> 0x20 );
   fVar27 = fVar10 * ( fVar10 + fVar10 );
   fVar7 = (float)*(undefined8*)( in_RSI + 0x30 );
   fVar21 = ( fVar10 + fVar10 ) * fVar11;
   fVar8 = (float)( ( ulong ) * (undefined8*)( in_RSI + 0x30 ) >> 0x20 );
   lVar9 = 0;
   fVar25 = fVar7 + fVar7;
   fVar26 = fVar8 + fVar8;
   local_58 = ( _LC2 - fVar8 * fVar26 ) - fVar27;
   register0x00001284 = fVar8 * fVar25 + fVar21;
   register0x00001288 = fVar10 * fVar25 - fVar26 * fVar11;
   register0x0000128c = 0;
   local_48._4_4_ = ( _LC2 - fVar27 ) - fVar7 * fVar25;
   local_48._0_4_ = fVar8 * fVar25 - fVar21;
   fVar21 = in_RDX[8];
   fVar27 = in_RDX[9];
   fVar24 = in_RDX[10];
   fVar12 = in_RDX[0xb];
   local_48._8_4_ = fVar25 * fVar11 + fVar10 * fVar26;
   local_48._12_4_ = 0;
   fVar13 = *in_RDX;
   fVar14 = in_RDX[1];
   fVar15 = in_RDX[2];
   fVar22 = in_RDX[3];
   fVar23 = in_RDX[4];
   fVar2 = in_RDX[5];
   fVar3 = in_RDX[6];
   fVar4 = in_RDX[7];
   local_38._4_4_ = fVar10 * fVar26 - fVar25 * fVar11;
   local_38._0_4_ = fVar10 * fVar25 + fVar26 * fVar11;
   local_38._8_4_ = ( _LC2 - fVar7 * fVar25 ) - fVar8 * fVar26;
   local_38._12_4_ = 0;
   do {
      fVar7 = *(float*)( local_58 + lVar9 );
      fVar8 = *(float*)( local_58 + lVar9 + 4 );
      fVar10 = *(float*)( local_58 + lVar9 + 8 );
      *(float*)( (long)local_98 + lVar9 ) = fVar10 * fVar21 + fVar7 * fVar13 + fVar8 * fVar23;
      *(float*)( (long)local_98 + lVar9 + 4 ) = fVar10 * fVar27 + fVar7 * fVar14 + fVar8 * fVar2;
      *(float*)( (long)local_98 + lVar9 + 8 ) = fVar10 * fVar24 + fVar7 * fVar15 + fVar8 * fVar3;
      *(float*)( (long)local_98 + lVar9 + 0xc ) = fVar10 * fVar12 + fVar7 * fVar22 + fVar8 * fVar4;
      lVar9 = lVar9 + 0x10;
   }
 while ( lVar9 != 0x30 );
   fVar21 = *(float*)( in_RSI + 0x20 );
   fVar27 = *(float*)( in_RSI + 0x24 );
   fVar24 = *(float*)( in_RSI + 0x28 );
   bVar1 = *(byte*)( in_RSI + 0x7a );
   fVar14 = fVar27 * local_98[4];
   fVar15 = fVar27 * local_98[5];
   fVar27 = fVar27 * local_98[6];
   uVar5 = CONCAT44(_LC2, _UNK_001077b8);
   fVar12 = fVar21 * local_98[0];
   fVar13 = fVar21 * local_98[1];
   fVar21 = fVar21 * local_98[2];
   fVar22 = fVar24 * local_98[8];
   fVar23 = fVar24 * local_98[9];
   fVar24 = fVar24 * local_98[10];
   *(undefined8*)( param_1 + 0x30 ) = __LC3;
   *(undefined8*)( param_1 + 0x38 ) = uVar5;
   auVar17._1_3_ = 0;
   auVar17[0] = bVar1;
   auVar17[4] = bVar1;
   auVar17._5_3_ = 0;
   auVar17[8] = bVar1;
   auVar17._9_3_ = 0;
   auVar17[0xc] = bVar1;
   auVar17._13_3_ = 0;
   auVar6._4_4_ = _UNK_001077c4;
   auVar6._0_4_ = __LC5;
   auVar6._8_4_ = _UNK_001077c8;
   auVar6._12_4_ = _UNK_001077cc;
   auVar17 = auVar17 & auVar6;
   uVar16 = -(uint)(auVar17._0_4_ == __LC5);
   uVar18 = -(uint)(auVar17._4_4_ == _UNK_001077c4);
   uVar19 = -(uint)(auVar17._8_4_ == _UNK_001077c8);
   uVar20 = -(uint)(auVar17._12_4_ == _UNK_001077cc);
   *(uint*)param_1 = ( uint )(fVar14 * local_98[4] + fVar12 * local_98[0] + fVar22 * local_98[8]) & uVar16;
   *(uint*)( param_1 + 4 ) = ( uint )(fVar14 * local_98[5] + fVar12 * local_98[1] + fVar22 * local_98[9]) & uVar16 & uVar18;
   *(uint*)( param_1 + 8 ) = ( uint )(fVar14 * local_98[6] + fVar12 * local_98[2] + fVar22 * local_98[10]) & uVar16 & uVar19;
   *(uint*)( param_1 + 0xc ) = ( uint )(fVar14 * local_98[7] + fVar12 * local_98[3] + fVar22 * local_98[0xb]) & uVar16 & uVar20;
   *(uint*)( param_1 + 0x10 ) = ( uint )(fVar15 * local_98[4] + fVar13 * local_98[0] + fVar23 * local_98[8]) & uVar18 & uVar16;
   *(uint*)( param_1 + 0x14 ) = ( uint )(fVar15 * local_98[5] + fVar13 * local_98[1] + fVar23 * local_98[9]) & uVar18;
   *(uint*)( param_1 + 0x18 ) = ( uint )(fVar15 * local_98[6] + fVar13 * local_98[2] + fVar23 * local_98[10]) & uVar18 & uVar19;
   *(uint*)( param_1 + 0x1c ) = ( uint )(fVar15 * local_98[7] + fVar13 * local_98[3] + fVar23 * local_98[0xb]) & uVar18 & uVar20;
   *(uint*)( param_1 + 0x20 ) = ( uint )(fVar27 * local_98[4] + fVar21 * local_98[0] + fVar24 * local_98[8]) & uVar19 & uVar16;
   *(uint*)( param_1 + 0x24 ) = ( uint )(fVar27 * local_98[5] + fVar21 * local_98[1] + fVar24 * local_98[9]) & uVar19 & uVar18;
   *(uint*)( param_1 + 0x28 ) = ( uint )(fVar27 * local_98[6] + fVar21 * local_98[2] + fVar24 * local_98[10]) & uVar19;
   *(uint*)( param_1 + 0x2c ) = ( uint )(fVar27 * local_98[7] + fVar21 * local_98[3] + fVar24 * local_98[0xb]) & uVar19 & uVar20;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::GetPosition() const */undefined1  [16] __thiscallJPH::Body::GetPosition(Body *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   undefined1 auVar16[12];
   auVar16 = ZEXT812(0);
   if (*(code**)( **(long**)( this + 0x40 ) + 0x18 ) != Shape::GetCenterOfMass) {
      auVar16 = ( **(code**)( **(long**)( this + 0x40 ) + 0x18 ) )();
   }

   fVar7 = auVar16._8_4_;
   fVar8 = *(float*)( this + 0x1c );
   fVar1 = *(float*)( this + 0x10 );
   fVar5 = auVar16._0_4_;
   fVar15 = auVar16._4_4_;
   fVar2 = *(float*)( this + 0x14 );
   fVar3 = *(float*)( this + 0x18 );
   fVar10 = (float)( *(uint*)( this + 0x10 ) ^ __LC6 );
   fVar11 = (float)( *(uint*)( this + 0x14 ) ^ _UNK_001077d4 );
   fVar12 = (float)( *(uint*)( this + 0x18 ) ^ _UNK_001077d8 );
   fVar13 = (float)( *(uint*)( this + 0x1c ) ^ _UNK_001077dc );
   fVar14 = ( fVar8 * fVar5 + fVar1 * 0.0 + fVar2 * fVar7 ) - fVar3 * fVar15;
   fVar9 = ( fVar8 * fVar15 - fVar1 * fVar7 ) + fVar2 * 0.0 + fVar3 * fVar5;
   fVar6 = ( ( fVar8 * fVar7 + fVar1 * fVar15 ) - fVar2 * fVar5 ) + fVar3 * 0.0;
   fVar8 = ( ( fVar8 * 0.0 - fVar1 * fVar5 ) - fVar2 * fVar15 ) - fVar3 * fVar7;
   auVar4._4_4_ = *(float*)( this + 4 ) - ( fVar6 * fVar10 + fVar9 * fVar13 + ( fVar11 * fVar8 - fVar14 * fVar12 ) );
   auVar4._0_4_ = *(float*)this - ( ( fVar9 * fVar12 + fVar14 * fVar13 + fVar10 * fVar8 ) - fVar6 * fVar11 );
   auVar4._8_4_ = *(float*)( this + 8 ) - ( fVar6 * fVar13 + ( ( fVar14 * fVar11 + fVar12 * fVar8 ) - fVar9 * fVar10 ) );
   auVar4._12_4_ = *(float*)( this + 0xc ) - ( ( ( fVar13 * fVar8 - fVar14 * fVar10 ) - fVar9 * fVar11 ) - fVar6 * fVar12 );
   return auVar4;
}
/* JPH::Array<JPH::SoftBodyMotionProperties::CollidingSensor,
   JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingSensor>
   >::push_back(JPH::SoftBodyMotionProperties::CollidingSensor const&) */void JPH::Array<JPH::SoftBodyMotionProperties::CollidingSensor,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingSensor>>::push_back(Array<JPH::SoftBodyMotionProperties::CollidingSensor,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingSensor>> *this, CollidingSensor *param_1) {
   undefined1 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   ulong uVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   long lVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   long lVar23;
   lVar20 = *(long*)this;
   uVar14 = lVar20 + 1;
   if (*(ulong*)( this + 8 ) < uVar14) {
      uVar4 = *(ulong*)( this + 8 ) * 2;
      if (uVar14 <= uVar4) {
         uVar14 = uVar4;
      }

      puVar15 = (undefined8*)( *Allocate )(uVar14 * 0x60);
      puVar22 = *(undefined8**)( this + 0x10 );
      if (puVar22 != (undefined8*)0x0) {
         lVar20 = *(long*)this;
         if (puVar15 < puVar22) {
            for (puVar19 = puVar15; puVar19 < puVar15 + lVar20 * 0xc; puVar19 = puVar19 + 0xc) {
               uVar5 = puVar22[1];
               uVar3 = puVar22[10];
               uVar6 = puVar22[2];
               uVar7 = puVar22[3];
               uVar8 = puVar22[4];
               uVar9 = puVar22[5];
               *puVar19 = *puVar22;
               puVar19[1] = uVar5;
               uVar10 = puVar22[6];
               uVar11 = puVar22[7];
               puVar19[10] = uVar3;
               uVar2 = *(undefined4*)( puVar22 + 0xb );
               puVar19[2] = uVar6;
               puVar19[3] = uVar7;
               uVar3 = puVar22[8];
               uVar5 = puVar22[9];
               *(undefined4*)( puVar19 + 0xb ) = uVar2;
               uVar1 = *(undefined1*)( (long)puVar22 + 0x5c );
               puVar19[4] = uVar8;
               puVar19[5] = uVar9;
               puVar19[6] = uVar10;
               puVar19[7] = uVar11;
               puVar19[8] = uVar3;
               puVar19[9] = uVar5;
               *(undefined1*)( (long)puVar19 + 0x5c ) = uVar1;
               puVar22 = puVar22 + 0xc;
            }

         }
 else {
            puVar19 = puVar15 + lVar20 * 0xc + -0xc;
            puVar22 = puVar22 + lVar20 * 0xc + -0xc;
            if (!CARRY8(lVar20 * 0x60 - 0x60,(ulong)puVar15)) {
               do {
                  uVar7 = puVar22[1];
                  uVar3 = puVar22[10];
                  puVar21 = puVar19 + -0xc;
                  uVar8 = puVar22[2];
                  uVar9 = puVar22[3];
                  uVar5 = puVar22[4];
                  uVar6 = puVar22[5];
                  *puVar19 = *puVar22;
                  puVar19[1] = uVar7;
                  uVar7 = puVar22[6];
                  uVar10 = puVar22[7];
                  puVar19[10] = uVar3;
                  uVar2 = *(undefined4*)( puVar22 + 0xb );
                  puVar19[2] = uVar8;
                  puVar19[3] = uVar9;
                  uVar3 = puVar22[8];
                  uVar8 = puVar22[9];
                  *(undefined4*)( puVar19 + 0xb ) = uVar2;
                  uVar1 = *(undefined1*)( (long)puVar22 + 0x5c );
                  puVar19[4] = uVar5;
                  puVar19[5] = uVar6;
                  puVar19[6] = uVar7;
                  puVar19[7] = uVar10;
                  puVar19[8] = uVar3;
                  puVar19[9] = uVar8;
                  *(undefined1*)( (long)puVar19 + 0x5c ) = uVar1;
                  puVar19 = puVar21;
                  puVar22 = puVar22 + -0xc;
               }
 while ( puVar15 <= puVar21 );
            }

         }

         ( *Free )();
      }

      lVar20 = *(long*)this;
      *(undefined8**)( this + 0x10 ) = puVar15;
      *(ulong*)( this + 8 ) = uVar14;
      uVar14 = lVar20 + 1;
   }
 else {
      puVar15 = *(undefined8**)( this + 0x10 );
   }

   uVar6 = *(undefined8*)param_1;
   uVar7 = *(undefined8*)( param_1 + 8 );
   uVar8 = *(undefined8*)( param_1 + 0x20 );
   uVar9 = *(undefined8*)( param_1 + 0x28 );
   *(ulong*)this = uVar14;
   uVar3 = *(undefined8*)( param_1 + 0x10 );
   uVar5 = *(undefined8*)( param_1 + 0x18 );
   puVar19 = *(undefined8**)( param_1 + 0x50 );
   puVar15 = puVar15 + lVar20 * 0xc;
   lVar20 = *(long*)( param_1 + 0x40 );
   *puVar15 = uVar6;
   puVar15[1] = uVar7;
   uVar6 = *(undefined8*)( param_1 + 0x30 );
   uVar7 = *(undefined8*)( param_1 + 0x38 );
   puVar15[4] = uVar8;
   puVar15[5] = uVar9;
   lVar23 = lVar20 * 0x60;
   puVar15[10] = 0;
   puVar15[2] = uVar3;
   puVar15[3] = uVar5;
   puVar22 = puVar19 + lVar20 * 0xc;
   puVar15[6] = uVar6;
   puVar15[7] = uVar7;
   *(undefined1(*) [16])( puVar15 + 8 ) = (undefined1[16])0x0;
   if (lVar23 != 0) {
      puVar16 = (undefined8*)( *Allocate )();
      puVar21 = (undefined8*)puVar15[10];
      if (puVar21 != (undefined8*)0x0) {
         lVar20 = puVar15[8];
         if (puVar16 < puVar21) {
            for (puVar17 = puVar16; puVar17 < puVar16 + lVar20 * 0xc; puVar17 = puVar17 + 0xc) {
               uVar7 = puVar21[1];
               uVar3 = puVar21[10];
               uVar5 = puVar21[4];
               uVar6 = puVar21[5];
               uVar8 = puVar21[6];
               uVar9 = puVar21[7];
               *puVar17 = *puVar21;
               puVar17[1] = uVar7;
               uVar7 = puVar21[2];
               uVar10 = puVar21[3];
               puVar17[4] = uVar5;
               puVar17[5] = uVar6;
               puVar17[2] = uVar7;
               puVar17[3] = uVar10;
               uVar5 = puVar21[8];
               uVar6 = puVar21[9];
               puVar17[6] = uVar8;
               puVar17[7] = uVar9;
               puVar17[8] = uVar5;
               puVar17[9] = uVar6;
               puVar17[10] = uVar3;
               puVar21 = puVar21 + 0xc;
            }

         }
 else {
            puVar17 = puVar16 + lVar20 * 0xc + -0xc;
            puVar21 = puVar21 + lVar20 * 0xc + -0xc;
            if (!CARRY8(lVar20 * 0x60 - 0x60,(ulong)puVar16)) {
               do {
                  uVar5 = puVar21[1];
                  uVar3 = puVar21[10];
                  puVar18 = puVar17 + -0xc;
                  uVar7 = puVar21[2];
                  uVar8 = puVar21[3];
                  uVar9 = puVar21[4];
                  uVar10 = puVar21[5];
                  *puVar17 = *puVar21;
                  puVar17[1] = uVar5;
                  uVar5 = puVar21[6];
                  uVar6 = puVar21[7];
                  puVar17[2] = uVar7;
                  puVar17[3] = uVar8;
                  uVar7 = puVar21[8];
                  uVar8 = puVar21[9];
                  puVar17[4] = uVar9;
                  puVar17[5] = uVar10;
                  puVar17[6] = uVar5;
                  puVar17[7] = uVar6;
                  puVar17[8] = uVar7;
                  puVar17[9] = uVar8;
                  puVar17[10] = uVar3;
                  puVar17 = puVar18;
                  puVar21 = puVar21 + -0xc;
               }
 while ( puVar16 <= puVar18 );
            }

         }

         ( *Free )();
      }

      puVar15[10] = puVar16;
      puVar15[9] = ( lVar23 >> 5 ) * -0x5555555555555555;
      if (puVar19 != puVar22) {
         while (true) {
            lVar20 = puVar15[8];
            uVar3 = *puVar19;
            uVar5 = puVar19[1];
            uVar6 = puVar19[2];
            uVar7 = puVar19[3];
            uVar8 = puVar19[4];
            uVar9 = puVar19[5];
            uVar10 = puVar19[6];
            uVar11 = puVar19[7];
            uVar12 = puVar19[8];
            uVar13 = puVar19[9];
            puVar15[8] = lVar20 + 1;
            lVar23 = puVar19[10];
            puVar16 = puVar16 + lVar20 * 0xc;
            puVar16[10] = lVar23;
            *puVar16 = uVar3;
            puVar16[1] = uVar5;
            puVar16[2] = uVar6;
            puVar16[3] = uVar7;
            puVar16[4] = uVar8;
            puVar16[5] = uVar9;
            puVar16[6] = uVar10;
            puVar16[7] = uVar11;
            puVar16[8] = uVar12;
            puVar16[9] = uVar13;
            if (lVar23 != 0) {
               LOCK();
               *(int*)( lVar23 + 8 ) = *(int*)( lVar23 + 8 ) + 1;
               UNLOCK();
            }

            puVar19 = puVar19 + 0xc;
            if (puVar22 == puVar19) break;
            puVar16 = (undefined8*)puVar15[10];
         }
;
      }

   }

   *(undefined4*)( puVar15 + 0xb ) = *(undefined4*)( param_1 + 0x58 );
   *(CollidingSensor*)( (long)puVar15 + 0x5c ) = param_1[0x5c];
   return;
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
               LAB_00106f40:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_00106f78;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00106f40;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00106f40;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_00106f78:plVar4 = *(long**)( this + 0xd8 );
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
   /* WARNING: Could not recover jumptable at 0x00106f1a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JPH::Array<JPH::SoftBodyMotionProperties::CollidingShape,
   JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingShape> >::reallocate(unsigned long) */void JPH::Array<JPH::SoftBodyMotionProperties::CollidingShape,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingShape>>::reallocate(Array<JPH::SoftBodyMotionProperties::CollidingShape,JPH::STLAllocator<JPH::SoftBodyMotionProperties::CollidingShape>> *this, ulong param_1) {
   undefined1 uVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   undefined8 uVar19;
   undefined8 *puVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   undefined8 *puVar23;
   puVar20 = (undefined8*)( *Allocate )(param_1 << 8);
   puVar23 = *(undefined8**)( this + 0x10 );
   if (puVar23 != (undefined8*)0x0) {
      lVar3 = *(long*)this;
      if (puVar20 < puVar23) {
         for (puVar21 = puVar20; puVar21 < puVar20 + lVar3 * 0x20; puVar21 = puVar21 + 0x20) {
            uVar4 = *puVar23;
            uVar5 = puVar23[1];
            uVar6 = puVar23[2];
            uVar7 = puVar23[3];
            uVar8 = puVar23[4];
            uVar9 = puVar23[5];
            uVar10 = puVar23[6];
            uVar11 = puVar23[7];
            puVar21[10] = puVar23[10];
            uVar2 = *(undefined4*)( puVar23 + 0xb );
            uVar12 = puVar23[8];
            uVar13 = puVar23[9];
            *puVar21 = uVar4;
            puVar21[1] = uVar5;
            uVar14 = puVar23[0xc];
            uVar15 = puVar23[0xd];
            puVar21[2] = uVar6;
            puVar21[3] = uVar7;
            uVar16 = puVar23[0x10];
            uVar17 = puVar23[0x11];
            uVar18 = puVar23[0x12];
            uVar19 = puVar23[0x13];
            uVar4 = puVar23[0x14];
            uVar5 = puVar23[0x15];
            *(undefined4*)( puVar21 + 0xb ) = uVar2;
            uVar1 = *(undefined1*)( (long)puVar23 + 0x5c );
            uVar6 = puVar23[0x16];
            uVar7 = puVar23[0x17];
            puVar21[0x10] = uVar16;
            puVar21[0x11] = uVar17;
            puVar21[4] = uVar8;
            puVar21[5] = uVar9;
            uVar8 = puVar23[0x18];
            uVar9 = puVar23[0x19];
            puVar21[6] = uVar10;
            puVar21[7] = uVar11;
            uVar10 = puVar23[0x1a];
            uVar11 = puVar23[0x1b];
            *(undefined1*)( (long)puVar21 + 0x5c ) = uVar1;
            uVar1 = *(undefined1*)( puVar23 + 0xe );
            puVar21[0xc] = uVar14;
            puVar21[0xd] = uVar15;
            puVar21[8] = uVar12;
            puVar21[9] = uVar13;
            *(undefined1*)( puVar21 + 0xe ) = uVar1;
            puVar21[0x12] = uVar18;
            puVar21[0x13] = uVar19;
            puVar21[0x14] = uVar4;
            puVar21[0x15] = uVar5;
            puVar21[0x16] = uVar6;
            puVar21[0x17] = uVar7;
            puVar21[0x18] = uVar8;
            puVar21[0x19] = uVar9;
            puVar21[0x1a] = uVar10;
            puVar21[0x1b] = uVar11;
            uVar4 = puVar23[0x1d];
            uVar5 = puVar23[0x1e];
            uVar6 = puVar23[0x1f];
            puVar21[0x1c] = puVar23[0x1c];
            puVar21[0x1d] = uVar4;
            puVar21[0x1e] = uVar5;
            puVar21[0x1f] = uVar6;
            puVar23 = puVar23 + 0x20;
         }

      }
 else {
         puVar21 = puVar20 + lVar3 * 0x20 + -0x20;
         puVar23 = puVar23 + lVar3 * 0x20 + -0x20;
         if (!CARRY8(lVar3 * 0x100 - 0x100,(ulong)puVar20)) {
            do {
               uVar4 = *puVar23;
               uVar5 = puVar23[1];
               puVar22 = puVar21 + -0x20;
               uVar6 = puVar23[2];
               uVar7 = puVar23[3];
               uVar8 = puVar23[4];
               uVar9 = puVar23[5];
               uVar10 = puVar23[6];
               uVar11 = puVar23[7];
               puVar21[10] = puVar23[10];
               uVar2 = *(undefined4*)( puVar23 + 0xb );
               uVar16 = puVar23[8];
               uVar17 = puVar23[9];
               *puVar21 = uVar4;
               puVar21[1] = uVar5;
               uVar18 = puVar23[0xc];
               uVar19 = puVar23[0xd];
               puVar21[2] = uVar6;
               puVar21[3] = uVar7;
               uVar4 = puVar23[0x10];
               uVar5 = puVar23[0x11];
               *(undefined4*)( puVar21 + 0xb ) = uVar2;
               uVar1 = *(undefined1*)( (long)puVar23 + 0x5c );
               puVar21[4] = uVar8;
               puVar21[5] = uVar9;
               uVar6 = puVar23[0x12];
               uVar7 = puVar23[0x13];
               uVar8 = puVar23[0x14];
               uVar9 = puVar23[0x15];
               puVar21[6] = uVar10;
               puVar21[7] = uVar11;
               uVar10 = puVar23[0x16];
               uVar11 = puVar23[0x17];
               uVar12 = puVar23[0x18];
               uVar13 = puVar23[0x19];
               *(undefined1*)( (long)puVar21 + 0x5c ) = uVar1;
               uVar14 = puVar23[0x1a];
               uVar15 = puVar23[0x1b];
               uVar1 = *(undefined1*)( puVar23 + 0xe );
               puVar21[0xc] = uVar18;
               puVar21[0xd] = uVar19;
               puVar21[8] = uVar16;
               puVar21[9] = uVar17;
               *(undefined1*)( puVar21 + 0xe ) = uVar1;
               puVar21[0x10] = uVar4;
               puVar21[0x11] = uVar5;
               puVar21[0x12] = uVar6;
               puVar21[0x13] = uVar7;
               puVar21[0x14] = uVar8;
               puVar21[0x15] = uVar9;
               puVar21[0x16] = uVar10;
               puVar21[0x17] = uVar11;
               puVar21[0x18] = uVar12;
               puVar21[0x19] = uVar13;
               puVar21[0x1a] = uVar14;
               puVar21[0x1b] = uVar15;
               uVar4 = puVar23[0x1d];
               uVar5 = puVar23[0x1e];
               uVar6 = puVar23[0x1f];
               puVar21[0x1c] = puVar23[0x1c];
               puVar21[0x1d] = uVar4;
               puVar21[0x1e] = uVar5;
               puVar21[0x1f] = uVar6;
               puVar21 = puVar22;
               puVar23 = puVar23 + -0x20;
            }
 while ( puVar20 <= puVar22 );
            ( *Free )();
            goto LAB_001070dd;
         }

      }

      ( *Free )();
   }

   LAB_001070dd:*(undefined8**)( this + 0x10 ) = puVar20;
   *(ulong*)( this + 8 ) = param_1;
   return;
}
/* JPH::SoftBodyMotionProperties::CalculateMassAndInertia() */void JPH::SoftBodyMotionProperties::_GLOBAL__sub_I_CalculateMassAndInertia(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC46;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SimShapeFilterWrapper::~SimShapeFilterWrapper() */void JPH::SimShapeFilterWrapper::~SimShapeFilterWrapper(SimShapeFilterWrapper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter() */void JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter(DefaultObjectLayerFilter *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter() */void JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter(DefaultBroadPhaseLayerFilter *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::ShapeFilter::~ShapeFilter() */void JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

