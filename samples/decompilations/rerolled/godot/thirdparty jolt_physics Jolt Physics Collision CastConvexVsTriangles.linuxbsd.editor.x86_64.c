/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ClosestPoint::GetBaryCentricCoordinates(JPH::Vec3, JPH::Vec3, JPH::Vec3, float&, float&,
   float&) [clone .isra.0] */void JPH::ClosestPoint::GetBaryCentricCoordinates(undefined8 param_1, float param_2, undefined8 param_3, float param_4, undefined8 param_5, float param_6, float *param_7, float *param_8, float *param_9) {
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
   float fVar13;
   float fVar14;
   float fVar15;
   undefined4 local_38;
   undefined4 uStack_34;
   undefined4 local_18;
   undefined4 uStack_14;
   fVar2 = _LC3;
   fVar12 = (float)( (ulong)param_5 >> 0x20 );
   fVar11 = (float)param_5;
   local_18 = (float)param_3;
   uStack_14 = (float)( (ulong)param_3 >> 0x20 );
   local_38 = (float)param_1;
   uStack_34 = (float)( (ulong)param_1 >> 0x20 );
   fVar8 = local_18 - local_38;
   fVar9 = uStack_14 - uStack_34;
   fVar10 = param_4 - param_2;
   fVar5 = fVar11 - local_38;
   fVar6 = fVar12 - uStack_34;
   fVar7 = param_6 - param_2;
   fVar1 = fVar11 - local_18;
   fVar3 = fVar12 - uStack_14;
   fVar4 = param_6 - param_4;
   fVar15 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
   fVar14 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 + 0.0;
   fVar13 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + 0.0;
   if (fVar13 < fVar15) {
      fVar15 = fVar4 * fVar7 + fVar6 * fVar3 + fVar5 * fVar1 + 0.0;
      fVar8 = fVar13 * fVar14 - fVar15 * fVar15;
      if (_LC1 <= fVar8) {
         fVar5 = fVar7 * param_6 + fVar6 * fVar12 + fVar5 * fVar11 + 0.0;
         fVar1 = fVar4 * param_6 + fVar12 * fVar3 + fVar11 * fVar1 + 0.0;
         fVar14 = ( fVar1 * fVar14 - fVar15 * fVar5 ) / fVar8;
         *param_7 = ( fVar13 * fVar5 - fVar15 * fVar1 ) / fVar8;
         *param_8 = fVar14;
         *param_9 = ( fVar2 - *param_7 ) - fVar14;
         return;
      }

      if (fVar14 <= fVar13) {
         if (fVar13 < _LC2) {
            if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <= param_4 * param_4 + uStack_14 * uStack_14 + local_18 * local_18 + 0.0) {
               *param_8 = 0.0;
               *param_9 = 1.0;
            }
 else {
               *param_8 = 1.0;
               *param_9 = 0.0;
            }

         }
 else {
            fVar13 = (float)( ( uint )(fVar4 * param_4 + uStack_14 * fVar3 + local_18 * fVar1 + 0.0) ^ __LC4 ) / fVar13;
            fVar2 = _LC3 - fVar13;
            *param_9 = fVar13;
            *param_8 = fVar2;
         }

         *param_7 = 0.0;
         return;
      }

      if (fVar14 < _LC2) {
         fVar2 = uStack_34 * uStack_34 + local_38 * local_38 + 0.0;
         goto LAB_0010047a;
      }

      fVar2 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0;
   }
 else {
      fVar2 = fVar7 * fVar10 + fVar6 * fVar9 + fVar5 * fVar8 + 0.0;
      fVar1 = fVar14 * fVar15 - fVar2 * fVar2;
      if (_LC1 <= fVar1) {
         fVar13 = fVar10 * param_2 + fVar9 * uStack_34 + fVar8 * local_38 + 0.0;
         fVar3 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0 + param_2 * fVar7;
         fVar15 = ( fVar2 * fVar13 - fVar3 * fVar15 ) / fVar1;
         *param_8 = ( fVar2 * fVar3 - fVar14 * fVar13 ) / fVar1;
         fVar2 = _LC3;
         *param_9 = fVar15;
         *param_7 = ( fVar2 - *param_8 ) - fVar15;
         return;
      }

      if (fVar14 < fVar15) {
         if (fVar15 < _LC2) {
            if (param_4 * param_4 + uStack_14 * uStack_14 + local_18 * local_18 + 0.0 <= param_2 * param_2 + uStack_34 * uStack_34 + local_38 * local_38 + 0.0) {
               *param_7 = 0.0;
               *param_8 = 1.0;
            }
 else {
               *param_7 = 1.0;
               *param_8 = 0.0;
            }

         }
 else {
            fVar15 = (float)( ( uint )(uStack_34 * fVar9 + local_38 * fVar8 + 0.0 + param_2 * fVar10) ^ __LC4 ) / fVar15;
            fVar2 = _LC3 - fVar15;
            *param_8 = fVar15;
            *param_7 = fVar2;
         }

         *param_9 = 0.0;
         return;
      }

      if (fVar14 < _LC2) {
         fVar2 = uStack_34 * uStack_34 + local_38 * local_38 + 0.0;
         LAB_0010047a:if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <= param_2 * param_2 + fVar2) {
            *param_7 = 0.0;
            *param_9 = 1.0;
         }
 else {
            *param_7 = 1.0;
            *param_9 = 0.0;
         }

         goto LAB_0010033a;
      }

      fVar2 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0;
   }

   fVar14 = (float)( ( uint )(fVar2 + fVar7 * param_2) ^ __LC4 ) / fVar14;
   fVar2 = _LC3 - fVar14;
   *param_9 = fVar14;
   *param_7 = fVar2;
   LAB_0010033a:*param_8 = 0.0;
   return;
}
/* JPH::CastConvexVsTriangles::CastConvexVsTriangles(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Vec3, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */void JPH::CastConvexVsTriangles::CastConvexVsTriangles(undefined8 param_1_00, undefined8 param_2_00, CastConvexVsTriangles *this, undefined8 param_1, undefined8 param_2, undefined8 param_6, undefined8 *param_7, undefined8 param_8) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   undefined4 uVar3;
   undefined4 uVar4;
   float fStack_10;
   float fStack_c;
   fStack_10 = (float)param_2_00;
   fStack_c = (float)( (ulong)param_2_00 >> 0x20 );
   *(undefined8*)( this + 8 ) = param_2;
   uVar1 = *param_7;
   *(undefined8*)this = param_1;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x10 ) = param_6;
   auVar2._4_4_ = -(uint)((float)((ulong)param_1_00 >> 0x20) < 0.0);
   auVar2._0_4_ = -(uint)((float)param_1_00 < 0.0);
   auVar2._8_4_ = -(uint)(fStack_10 < 0.0);
   auVar2._12_4_ = -(uint)(fStack_c < 0.0);
   uVar3 = movmskps((int)uVar1, auVar2);
   *(undefined8*)( this + 0x38 ) = param_8;
   *(undefined8*)( this + 0x20 ) = param_1_00;
   *(undefined8*)( this + 0x28 ) = param_2_00;
   uVar4 = _LC3;
   *(undefined8*)( this + 0x1080 ) = 0;
   if (( POPCOUNT((byte)uVar3 & 7) & 1U ) != 0) {
      uVar4 = _LC18;
   }

   *(undefined4*)( this + 0x1088 ) = uVar4;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::CastConvexVsTriangles::Cast(JPH::Vec3, JPH::Vec3, JPH::Vec3, unsigned char, JPH::SubShapeID
   const&) */void JPH::CastConvexVsTriangles::Cast(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long *param_7, byte param_8, undefined4 *param_9) {
   char cVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long *plVar6;
   code *pcVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   bool bVar15;
   byte bVar16;
   undefined4 uVar17;
   long lVar18;
   float *pfVar19;
   float *pfVar20;
   long *plVar21;
   uint uVar22;
   float *pfVar23;
   char *pcVar24;
   float fVar25;
   long in_FS_OFFSET;
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
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   undefined8 local_778;
   undefined8 uStack_770;
   undefined8 local_768;
   undefined8 uStack_760;
   float local_758;
   float fStack_754;
   float fStack_750;
   float fStack_74c;
   float local_6e8;
   float local_6d8;
   float local_690;
   float local_68c;
   long local_688;
   float local_680;
   float *local_678;
   undefined4 local_670;
   float local_668;
   float fStack_664;
   float fStack_660;
   float fStack_65c;
   float local_658;
   float fStack_654;
   float fStack_650;
   float fStack_64c;
   undefined8 local_648;
   undefined8 uStack_640;
   float local_638;
   float fStack_634;
   float fStack_630;
   float fStack_62c;
   float local_628;
   float fStack_624;
   float fStack_620;
   float fStack_61c;
   float local_618;
   float fStack_614;
   float fStack_610;
   float fStack_60c;
   undefined8 local_608;
   undefined8 uStack_600;
   undefined8 local_5f8;
   undefined8 uStack_5f0;
   undefined8 local_5e8;
   undefined8 uStack_5e0;
   undefined8 local_5d8;
   float local_5d0;
   undefined4 local_5cc;
   float local_5c8[16];
   EPAPenetrationDepth local_588[192];
   undefined4 local_4c8;
   undefined8 local_4b8;
   undefined8 uStack_4b0;
   undefined8 local_4a8;
   undefined8 uStack_4a0;
   undefined8 local_498;
   undefined8 uStack_490;
   undefined8 local_488;
   undefined8 uStack_480;
   long *local_478[66];
   uint local_268;
   undefined8 local_258;
   undefined8 uStack_250;
   undefined8 local_248;
   undefined8 uStack_240;
   undefined8 local_238;
   undefined8 uStack_230;
   float local_228[116];
   float local_58;
   bool local_54;
   long local_40;
   fVar42 = *(float*)( param_7 + 4 );
   fVar43 = *(float*)( (long)param_7 + 0x24 );
   fVar44 = *(float*)( param_7 + 5 );
   fVar35 = *(float*)( (long)param_7 + 0x2c );
   local_768._0_4_ = (float)param_3;
   local_768._4_4_ = (float)( (ulong)param_3 >> 0x20 );
   uStack_760._0_4_ = (float)param_4;
   uStack_760._4_4_ = (float)( (ulong)param_4 >> 0x20 );
   local_778._0_4_ = (float)param_1;
   local_778._4_4_ = (float)( (ulong)param_1 >> 0x20 );
   uStack_770._0_4_ = (float)param_2;
   uStack_770._4_4_ = (float)( (ulong)param_2 >> 0x20 );
   local_768._0_4_ = (float)local_768 * fVar42;
   local_768._4_4_ = local_768._4_4_ * fVar43;
   uStack_760._0_4_ = (float)uStack_760 * fVar44;
   uStack_760._4_4_ = uStack_760._4_4_ * fVar35;
   fVar38 = (float)local_778 * fVar42;
   fVar39 = local_778._4_4_ * fVar43;
   fVar40 = (float)uStack_770 * fVar44;
   fVar41 = uStack_770._4_4_ * fVar35;
   local_758 = (float)param_5;
   fStack_754 = (float)( (ulong)param_5 >> 0x20 );
   fStack_750 = (float)param_6;
   fStack_74c = (float)( (ulong)param_6 >> 0x20 );
   fVar42 = fVar42 * local_758;
   fVar43 = fVar43 * fStack_754;
   fVar44 = fVar44 * fStack_750;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar26 = ( fVar43 - fVar39 ) * ( (float)local_768 - fVar38 ) - ( local_768._4_4_ - fVar39 ) * ( fVar42 - fVar38 );
   fVar32 = *(float*)( param_7 + 0x211 );
   fVar27 = ( ( fVar44 - fVar40 ) * ( local_768._4_4_ - fVar39 ) - ( (float)uStack_760 - fVar40 ) * ( fVar43 - fVar39 ) ) * fVar32;
   local_6e8 = ( ( fVar42 - fVar38 ) * ( (float)uStack_760 - fVar40 ) - ( (float)local_768 - fVar38 ) * ( fVar44 - fVar40 ) ) * fVar32;
   local_6d8 = fVar26 * fVar32;
   fVar26 = fVar26 * fVar32;
   local_778 = CONCAT44(local_6e8, fVar27);
   uStack_770 = CONCAT44(fVar26, local_6d8);
   puVar2 = (undefined8*)*param_7;
   lVar18 = param_7[1];
   fVar32 = *(float*)( puVar2 + 0xd ) * local_6d8 + *(float*)( (long)puVar2 + 100 ) * local_6e8 + fVar27 * *(float*)( puVar2 + 0xc ) + 0.0;
   if (( *(char*)( lVar18 + 0x20 ) == '\0' ) && ( 0.0 < fVar32 )) goto LAB_00100cd2;
   plVar21 = (long*)param_7[0x210];
   local_638 = fVar38;
   fStack_634 = fVar39;
   fStack_630 = fVar40;
   fStack_62c = fVar41;
   local_628 = (float)local_768;
   fStack_624 = local_768._4_4_;
   fStack_620 = (float)uStack_760;
   fStack_61c = uStack_760._4_4_;
   local_618 = fVar42;
   fStack_614 = fVar43;
   fStack_610 = fVar44;
   fStack_60c = fVar35 * fStack_74c;
   if (plVar21 == (long*)0x0) {
      plVar21 = (long*)( **(code**)( *(long*)*puVar2 + 0x130 ) )(puVar2[2], puVar2[3], (long*)*puVar2, ( uint )(*(byte*)( lVar18 + 0x22 ) ^ 1) * 2, param_7 + 8);
      param_7[0x210] = (long)plVar21;
      lVar18 = param_7[1];
   }

   cVar1 = *(char*)( lVar18 + 0x23 );
   local_690 = *(float*)( param_7[7] + 8 );
   local_4c8 = 0;
   fVar28 = (float)( **(code**)( *plVar21 + 0x18 ) )();
   lVar18 = *param_7;
   lVar3 = param_7[0x210];
   fVar44 = *(float*)( param_7[1] + 8 );
   fVar35 = *(float*)( param_7[1] + 4 );
   uVar4 = *(undefined8*)( lVar18 + 0x60 );
   uVar5 = *(undefined8*)( lVar18 + 0x68 );
   bVar15 = GJKClosestPoint::CastShape<JPH::ConvexShape::Support,JPH::TriangleConvexSupport>(uVar4, uVar5, local_588, lVar18 + 0x20, lVar3, &local_638, &local_690, &local_668, &local_658, &local_648);
   fVar12 = local_690;
   if (!bVar15) goto LAB_00100cd2;
   fVar35 = fVar35 * fVar35;
   fVar33 = (float)uStack_640 * (float)uStack_640 + local_648._4_4_ * local_648._4_4_ + (float)local_648 * (float)local_648 + 0.0;
   if (( cVar1 == '\0' ) || ( local_690 != 0.0 )) {
      if (fVar33 <= fVar35) {
         local_648 = uVar4;
         uStack_640 = uVar5;
      }

   }
 else if (( fVar28 + 0.0 == 0.0 ) || ( fVar33 <= fVar35 )) {
      local_4b8 = *(undefined8*)( lVar18 + 0x20 );
      uStack_4b0 = *(undefined8*)( lVar18 + 0x28 );
      local_4a8 = *(undefined8*)( lVar18 + 0x30 );
      uStack_4a0 = *(undefined8*)( lVar18 + 0x38 );
      local_498 = *(undefined8*)( lVar18 + 0x40 );
      uStack_490 = *(undefined8*)( lVar18 + 0x48 );
      local_478[0] = &local_688;
      local_488 = *(undefined8*)( lVar18 + 0x50 );
      uStack_480 = *(undefined8*)( lVar18 + 0x58 );
      local_670 = 0;
      local_688 = lVar3;
      local_680 = fVar28;
      local_678 = &local_638;
      bVar15 = EPAPenetrationDepth::GetPenetrationDepthStepEPA<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(local_588, (TransformedConvexObject*)&local_4b8, (AddConvexRadius*)&local_678, fVar44, (Vec3*)&local_648, (Vec3*)&local_668, (Vec3*)&local_658);
      if (!bVar15) goto LAB_00100cd2;
   }

   uVar5 = uStack_640;
   uVar4 = local_648;
   pcVar24 = (char*)param_7[1];
   pfVar23 = (float*)param_7[2];
   fVar44 = pfVar23[4];
   fVar35 = pfVar23[5];
   fVar28 = pfVar23[6];
   fVar33 = pfVar23[7];
   fVar8 = *pfVar23;
   fVar9 = pfVar23[1];
   fVar10 = pfVar23[2];
   fVar11 = pfVar23[3];
   fVar45 = pfVar23[8];
   fVar46 = pfVar23[9];
   fVar47 = pfVar23[10];
   fVar48 = pfVar23[0xb];
   local_648 = uVar4;
   uStack_640 = uVar5;
   if (( *pcVar24 == '\0' ) && ( param_8 != 7 )) {
      fVar31 = *(float*)( pcVar24 + 0x10 );
      fVar25 = *(float*)( pcVar24 + 0x14 );
      fVar34 = *(float*)( pcVar24 + 0x18 );
      fVar29 = fVar8 * fVar31 + fVar9 * fVar25 + fVar34 * fVar10;
      fVar30 = fVar44 * fVar31 + fVar35 * fVar25 + fVar34 * fVar28;
      fVar31 = fVar45 * fVar31 + fVar46 * fVar25 + fVar34 * fVar47;
      if (fVar32 <= 0.0) {
         fVar27 = 0.0 - fVar27;
         local_6e8 = 0.0 - local_6e8;
         local_6d8 = 0.0 - local_6d8;
         local_778 = CONCAT44(local_6e8, fVar27);
         uStack_770 = CONCAT44(0.0 - fVar26, local_6d8);
      }

      uVar13 = local_778;
      fVar26 = (float)local_648;
      fVar37 = (float)( (ulong)local_648 >> 0x20 );
      fVar25 = (float)uStack_640;
      fVar34 = SQRT(fVar25 * fVar25 + fVar37 * fVar37 + fVar26 * fVar26 + 0.0);
      fVar36 = SQRT(local_6d8 * local_6d8 + local_6e8 * local_6e8 + fVar27 * fVar27 + 0.0);
      if (( fVar31 * local_6d8 + fVar30 * local_6e8 + fVar29 * fVar27 + 0.0 ) * fVar34 <= ( fVar25 * fVar31 + fVar30 * fVar37 + fVar26 * fVar29 + 0.0 ) * fVar36) {
         if (param_8 == 0) {
            LAB_0010118d:local_648 = uVar13;
            uStack_640 = uStack_770;
         }
 else if (fVar25 * local_6d8 + fVar37 * local_6e8 + fVar26 * fVar27 + 0.0 <= fVar34 * __LC72 * fVar36) {
            local_778 = CONCAT44(fVar43 - fStack_654, fVar42 - local_658);
            local_768 = CONCAT44(local_768._4_4_ - fStack_654, (float)local_768 - local_658);
            uStack_760 = CONCAT44(uStack_760._4_4_ - fStack_64c, (float)uStack_760 - fStack_650);
            ClosestPoint::GetBaryCentricCoordinates(CONCAT44(fVar39 - fStack_654, fVar38 - local_658), CONCAT44(fVar41 - fStack_64c, fVar40 - fStack_650), local_768, uStack_760, local_778, &local_68c, &local_688, &local_678);
            if (__LC73 < local_68c) {
               bVar16 = 5;
            }
 else if (__LC73 < (float)local_688) {
               bVar16 = 3;
            }
 else if (__LC73 < local_678._0_4_) {
               bVar16 = 6;
            }
 else if (local_68c < _LC74) {
               bVar16 = 2;
            }
 else if ((float)local_688 < _LC74) {
               bVar16 = 4;
            }
 else {
               bVar16 = 1;
               if (_LC74 <= local_678._0_4_) goto LAB_0010118d;
            }

            local_648 = uVar4;
            uStack_640 = uVar5;
            if (( param_8 & bVar16 ) == 0) goto LAB_0010118d;
         }

      }

   }

   plVar21 = (long*)param_7[7];
   uVar17 = 0xffffffff;
   fVar43 = local_668 * fVar9;
   fVar27 = local_668 * fVar10;
   fVar26 = local_668 * fVar11;
   fVar38 = fStack_664 * fVar28;
   fVar40 = fStack_664 * fVar33;
   fVar42 = fStack_660 * fVar48;
   fVar39 = fStack_654 * fVar28;
   fVar41 = fStack_654 * fVar33;
   local_668 = local_668 * fVar8 + fStack_664 * fVar44 + fStack_660 * fVar45 + pfVar23[0xc];
   fStack_664 = fVar43 + fStack_664 * fVar35 + fStack_660 * fVar46 + pfVar23[0xd];
   fStack_660 = fVar27 + fVar38 + fStack_660 * fVar47 + pfVar23[0xe];
   fStack_65c = fVar26 + fVar40 + fVar42 + pfVar23[0xf];
   fVar42 = local_658 * fVar9;
   fVar43 = local_658 * fVar10;
   fVar27 = local_658 * fVar11;
   fVar26 = fStack_650 * fVar48;
   local_658 = local_658 * fVar8 + fStack_654 * fVar44 + fStack_650 * fVar45 + pfVar23[0xc];
   fStack_654 = fVar42 + fStack_654 * fVar35 + fStack_650 * fVar46 + pfVar23[0xd];
   fStack_650 = fVar43 + fVar39 + fStack_650 * fVar47 + pfVar23[0xe];
   fStack_64c = fVar27 + fVar41 + fVar26 + pfVar23[0xf];
   if (plVar21[2] != 0) {
      uVar17 = *(undefined4*)( plVar21[2] + 0x34 );
   }

   local_4b8 = CONCAT44(fStack_664, local_668);
   uStack_4b0 = CONCAT44(fStack_65c, fStack_660);
   local_4a8 = CONCAT44(fStack_654, local_658);
   uStack_4a0 = CONCAT44(fStack_64c, fStack_650);
   uStack_480 = CONCAT44(uVar17, *param_9);
   local_54 = 0.0 < fVar32;
   local_478[0] = (long*)( (ulong)local_478[0] & 0xffffffff00000000 );
   local_268 = 0;
   local_498 = CONCAT44((float)local_648 * fVar9 + local_648._4_4_ * fVar35 + (float)uStack_640 * fVar46, (float)local_648 * fVar8 + local_648._4_4_ * fVar44 + (float)uStack_640 * fVar45);
   uStack_490 = CONCAT44((float)local_648 * fVar11 + local_648._4_4_ * fVar33 + (float)uStack_640 * fVar48, (float)local_648 * fVar10 + local_648._4_4_ * fVar28 + (float)uStack_640 * fVar47);
   local_58 = fVar12;
   fVar32 = SQRT(( fStack_650 - fStack_660 ) * ( fStack_650 - fStack_660 ) + ( local_658 - local_668 ) * ( local_658 - local_668 ) + 0.0 + ( fStack_654 - fStack_664 ) * ( fStack_654 - fStack_664 ));
   local_488 = CONCAT44((int)param_7[6], fVar32);
   if (( fVar12 == 0.0 ) && ( *(float*)( plVar21 + 1 ) <= (float)( (uint)fVar32 ^ __LC4 ) )) goto LAB_00100cd2;
   if (pcVar24[1] == '\0') {
      puVar2 = (undefined8*)*param_7;
      local_5cc = 0x3f800000;
      local_608 = puVar2[4];
      uStack_600 = puVar2[5];
      plVar6 = (long*)*puVar2;
      local_5f8 = puVar2[6];
      uStack_5f0 = puVar2[7];
      uVar4 = local_608;
      uVar5 = uStack_600;
      local_5e8 = puVar2[8];
      uStack_5e0 = puVar2[9];
      local_5d8 = CONCAT44(fVar12 * *(float*)( (long)puVar2 + 100 ) + *(float*)( (long)puVar2 + 0x54 ), fVar12 * *(float*)( puVar2 + 0xc ) + *(float*)( puVar2 + 10 ));
      pcVar7 = *(code**)( *plVar6 + 0x60 );
      lVar18 = 0;
      uVar13 = uStack_5f0;
      uVar14 = uStack_5e0;
      local_5d0 = fVar12 * *(float*)( puVar2 + 0xd ) + *(float*)( puVar2 + 0xb );
      do {
         fVar32 = *(float*)( (long)&local_608 + lVar18 );
         fVar42 = *(float*)( (long)&local_608 + lVar18 + 4 );
         fVar43 = *(float*)( (long)&uStack_600 + lVar18 );
         fVar44 = *(float*)( (long)&uStack_600 + lVar18 + 4 );
         fVar35 = pfVar23[1];
         fVar27 = pfVar23[2];
         fVar26 = pfVar23[3];
         fVar38 = pfVar23[5];
         fVar39 = pfVar23[6];
         fVar40 = pfVar23[7];
         fVar41 = pfVar23[9];
         fVar12 = pfVar23[10];
         fVar28 = pfVar23[0xb];
         fVar33 = pfVar23[0xd];
         fVar8 = pfVar23[0xe];
         fVar9 = pfVar23[0xf];
         *(float*)( (long)local_5c8 + lVar18 ) = fVar44 * pfVar23[0xc] + fVar32 * *pfVar23 + fVar42 * pfVar23[4] + fVar43 * pfVar23[8];
         *(float*)( (long)local_5c8 + lVar18 + 4 ) = fVar44 * fVar33 + fVar32 * fVar35 + fVar42 * fVar38 + fVar43 * fVar41;
         *(float*)( (long)local_5c8 + lVar18 + 8 ) = fVar44 * fVar8 + fVar32 * fVar27 + fVar42 * fVar39 + fVar43 * fVar12;
         *(float*)( (long)local_5c8 + lVar18 + 0xc ) = fVar44 * fVar9 + fVar32 * fVar26 + fVar42 * fVar40 + fVar43 * fVar28;
         lVar18 = lVar18 + 0x10;
      }
 while ( lVar18 != 0x40 );
      local_608._4_4_ = (float)( (ulong)local_608 >> 0x20 );
      local_678 = (float*)CONCAT44(local_678._4_4_, 0xffffffff);
      fVar32 = 0.0 - (float)local_648;
      fVar42 = 0.0 - local_648._4_4_;
      fVar43 = 0.0 - (float)uStack_640;
      local_778 = CONCAT44((float)local_5f8 * fVar32 + (float)( (ulong)local_5f8 >> 0x20 ) * fVar42 + fVar43 * (float)uStack_5f0, (float)local_608 * fVar32 + local_608._4_4_ * fVar42 + fVar43 * (float)uStack_600);
      uStack_770 = CONCAT44(fVar32 * 0.0 + fVar42 * 0.0 + fVar43 * 0.0, (float)local_5e8 * fVar32 + (float)( (ulong)local_5e8 >> 0x20 ) * fVar42 + fVar43 * (float)uStack_5e0);
      local_608 = uVar4;
      uStack_600 = uVar5;
      uStack_5f0 = uVar13;
      uStack_5e0 = uVar14;
      if (pcVar7 == Shape::GetSupportingFace) {
         pfVar23 = local_228;
         local_268 = 3;
         local_258 = CONCAT44(fStack_634, local_638);
         uStack_250 = CONCAT44(fStack_62c, fStack_630);
         local_238 = CONCAT44(fStack_614, local_618);
         uStack_230 = CONCAT44(fStack_60c, fStack_610);
         local_248 = CONCAT44(fStack_624, local_628);
         uStack_240 = CONCAT44(fStack_61c, fStack_620);
      }
 else {
         ( *pcVar7 )(local_778, uStack_770, puVar2[2], puVar2[3], plVar6, &local_678, local_5c8, local_478);
         plVar21 = (long*)param_7[7];
         uVar22 = local_268 + 3;
         ( &local_258 )[(ulong)local_268 * 2] = CONCAT44(fStack_634, local_638);
         ( &uStack_250 )[(ulong)local_268 * 2] = CONCAT44(fStack_62c, fStack_630);
         ( &local_258 )[( ulong )(local_268 + 1) * 2] = CONCAT44(fStack_624, local_628);
         ( &uStack_250 )[( ulong )(local_268 + 1) * 2] = CONCAT44(fStack_61c, fStack_620);
         ( &local_258 )[( ulong )(local_268 + 2) * 2] = CONCAT44(fStack_614, local_618);
         ( &uStack_250 )[( ulong )(local_268 + 2) * 2] = CONCAT44(fStack_60c, fStack_610);
         local_268 = uVar22;
         if ((ulong)uVar22 == 0) goto LAB_00100cc4;
         pfVar23 = (float*)( &local_258 + (ulong)uVar22 * 2 );
      }

      pfVar19 = (float*)param_7[2];
      fVar32 = *pfVar19;
      fVar42 = pfVar19[1];
      fVar43 = pfVar19[2];
      fVar44 = pfVar19[3];
      fVar35 = pfVar19[4];
      fVar27 = pfVar19[5];
      fVar26 = pfVar19[6];
      fVar38 = pfVar19[7];
      fVar39 = pfVar19[8];
      fVar40 = pfVar19[9];
      fVar41 = pfVar19[10];
      fVar12 = pfVar19[0xb];
      fVar28 = pfVar19[0xc];
      fVar33 = pfVar19[0xd];
      fVar8 = pfVar19[0xe];
      fVar9 = pfVar19[0xf];
      pfVar19 = (float*)&local_258;
      do {
         fVar10 = *pfVar19;
         fVar11 = pfVar19[1];
         fVar45 = pfVar19[2];
         pfVar20 = pfVar19 + 4;
         *pfVar19 = fVar45 * fVar39 + fVar10 * fVar32 + fVar11 * fVar35 + fVar28;
         pfVar19[1] = fVar45 * fVar40 + fVar10 * fVar42 + fVar11 * fVar27 + fVar33;
         pfVar19[2] = fVar45 * fVar41 + fVar10 * fVar43 + fVar11 * fVar26 + fVar8;
         pfVar19[3] = fVar45 * fVar12 + fVar10 * fVar44 + fVar11 * fVar38 + fVar9;
         pfVar19 = pfVar20;
      }
 while ( pfVar23 != pfVar20 );
   }

   LAB_00100cc4:( **(code**)( *plVar21 + 0x28 ) )(plVar21, &local_4b8);
   LAB_00100cd2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::Shape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&,
   JPH::StaticArray<JPH::Vec3, 32u>&) const */void JPH::Shape::GetSupportingFace(void) {
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3)
    */undefined1[16];JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes(undefined8 param_1, float param_2, undefined8 param_3, float param_4, undefined8 param_5, float param_6, undefined8 param_7, float param_8) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   int iVar5;
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
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   undefined4 local_48;
   undefined4 uStack_44;
   undefined4 local_28;
   undefined4 uStack_24;
   fVar20 = (float)( (ulong)param_5 >> 0x20 );
   fVar31 = (float)( (ulong)param_1 >> 0x20 );
   fVar30 = (float)param_1;
   local_48 = (float)param_3;
   uStack_44 = (float)( (ulong)param_3 >> 0x20 );
   fVar16 = local_48 - fVar30;
   fVar17 = uStack_44 - fVar31;
   fVar18 = param_4 - param_2;
   fVar9 = (float)param_5 - fVar30;
   fVar10 = fVar20 - fVar31;
   fVar11 = param_6 - param_2;
   local_28 = (float)param_7;
   uStack_24 = (float)( (ulong)param_7 >> 0x20 );
   fVar6 = local_28 - fVar30;
   fVar7 = uStack_24 - fVar31;
   fVar8 = param_8 - param_2;
   fVar19 = (float)param_5 - local_48;
   fVar20 = fVar20 - uStack_44;
   fVar21 = fVar10 * fVar16 - fVar17 * fVar9;
   fVar22 = fVar11 * fVar17 - fVar18 * fVar10;
   fVar23 = fVar9 * fVar18 - fVar16 * fVar11;
   fVar24 = fVar17 * fVar6 - fVar7 * fVar16;
   fVar26 = fVar18 * fVar7 - fVar8 * fVar17;
   fVar27 = fVar16 * fVar8 - fVar6 * fVar18;
   fVar13 = fVar7 * fVar9 - fVar10 * fVar6;
   fVar14 = fVar8 * fVar10 - fVar11 * fVar7;
   fVar15 = fVar6 * fVar11 - fVar9 * fVar8;
   fVar12 = fVar20 * ( local_28 - local_48 ) - ( uStack_24 - uStack_44 ) * fVar19;
   fVar20 = ( param_6 - param_4 ) * ( uStack_24 - uStack_44 ) - ( param_8 - param_4 ) * fVar20;
   fVar19 = fVar19 * ( param_8 - param_4 ) - ( local_28 - local_48 ) * ( param_6 - param_4 );
   fVar25 = param_2 * fVar13;
   fVar28 = fVar22 * fVar30 + 0.0 + fVar23 * fVar31 + fVar21 * param_2;
   fVar29 = fVar14 * fVar30 + 0.0 + fVar15 * fVar31 + fVar25;
   fVar30 = fVar30 * fVar26 + 0.0 + fVar31 * fVar27 + param_2 * fVar24;
   fVar31 = local_48 * fVar20 + 0.0 + uStack_44 * fVar19 + param_4 * fVar12;
   auVar1._4_4_ = fVar13 * fVar18 + fVar15 * fVar17 + fVar14 * fVar16 + 0.0;
   auVar1._0_4_ = fVar8 * fVar21 + fVar7 * fVar23 + fVar6 * fVar22 + 0.0;
   auVar1._8_4_ = fVar11 * fVar24 + fVar10 * fVar27 + fVar26 * fVar9 + 0.0;
   auVar1._12_4_ = ( uint )(fVar12 * fVar18 + fVar17 * fVar19 + fVar16 * fVar20 + 0.0) ^ __LC4;
   iVar5 = movmskps(fVar25, auVar1);
   if (iVar5 == 0) {
      auVar4._4_4_ = -(uint)(_LC6 <= fVar29);
      auVar4._0_4_ = -(uint)(_LC6 <= fVar28);
      auVar4._8_4_ = -(uint)(_LC6 <= fVar30);
      auVar4._12_4_ = -(uint)(_LC6 <= fVar31);
      return auVar4;
   }

   if (iVar5 == 0xf) {
      auVar2._4_4_ = -(uint)(fVar29 <= _LC8);
      auVar2._0_4_ = -(uint)(fVar28 <= _LC8);
      auVar2._8_4_ = -(uint)(fVar30 <= _LC8);
      auVar2._12_4_ = -(uint)(fVar31 <= _LC8);
      return auVar2;
   }

   auVar3._8_4_ = 0xffffffff;
   auVar3._0_8_ = 0xffffffffffffffff;
   auVar3._12_4_ = 0xffffffff;
   return auVar3;
}
/* JPH::EPAConvexHullBuilder::FindEdge(JPH::EPAConvexHullBuilder::Triangle*, JPH::Vec3,
   JPH::StaticArray<JPH::EPAConvexHullBuilder::Edge, 128u>&) */ulong JPH::EPAConvexHullBuilder::FindEdge(undefined8 param_1_00, float param_2, long param_1, long param_4, uint *param_5) {
   undefined8 *puVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   int iVar8;
   int iVar9;
   long *plVar10;
   ulong unaff_RBP;
   int iVar11;
   long lVar12;
   long in_FS_OFFSET;
   long local_828;
   undefined8 local_820;
   long lStack_818;
   undefined4 auStack_810[508];
   long local_20;
   local_820 = _LC9;
   iVar8 = 0;
   iVar9 = -1;
   lVar12 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1*)( param_4 + 0x5e ) = 1;
   local_828 = param_4;
   iVar11 = -1;
   LAB_00101610:do {
      while (true) {
         iVar9 = iVar9 + 1;
         *(int*)( (long)&local_820 + lVar12 * 0x10 + 4 ) = iVar9;
         if (iVar9 < 3) break;
         plVar10 = (long*)( &local_828 )[lVar12 * 2];
         plVar7 = plVar10;
         do {
            if (*plVar7 != 0) {
               *(undefined8*)( *plVar7 + (long)(int)plVar7[1] * 0x10 ) = 0;
               *plVar7 = 0;
            }

            plVar7 = plVar7 + 2;
         }
 while ( plVar10 + 6 != plVar7 );
         if (*(char*)( (long)plVar10 + 0x5f ) == '\0') {
            *plVar10 = *(long*)( param_1 + 0x6010 );
            *(long**)( param_1 + 0x6010 ) = plVar10;
         }

         iVar8 = iVar8 + -1;
         if (iVar8 < 0) {
            unaff_RBP = CONCAT71(( int7 )(unaff_RBP >> 8), 2 < *param_5);
            LAB_00101798:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return unaff_RBP & 0xffffffff;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         lVar12 = (long)iVar8;
         iVar9 = *(int*)( (long)&local_820 + lVar12 * 0x10 + 4 );
      }
;
      while (true) {
         lVar3 = ( &local_828 )[lVar12 * 2];
         lVar6 = (long)( ( *(int*)( &local_820 + lVar12 * 2 ) + iVar9 ) % 3 );
         plVar10 = (long*)( lVar6 * 0x10 + lVar3 );
         lVar4 = *plVar10;
         if (( lVar4 == 0 ) || ( unaff_RBP = ( ulong ) * (byte*)( lVar4 + 0x5e ) * (byte*)( lVar4 + 0x5e ) != 0 )) goto LAB_00101610;
         if (( param_2 - *(float*)( lVar4 + 0x48 ) ) * *(float*)( lVar4 + 0x38 ) + ( (float)( (ulong)param_1_00 >> 0x20 ) - *(float*)( lVar4 + 0x44 ) ) * *(float*)( lVar4 + 0x34 ) + *(float*)( lVar4 + 0x30 ) * ( (float)param_1_00 - *(float*)( lVar4 + 0x40 ) ) + 0.0 <= 0.0) break;
         iVar8 = iVar8 + 1;
         lVar3 = plVar10[1];
         *(undefined1*)( lVar4 + 0x5e ) = 1;
         lVar12 = (long)iVar8;
         *(int*)( &local_820 + lVar12 * 2 ) = (int)lVar3;
         iVar9 = 1;
         ( &local_828 )[lVar12 * 2] = lVar4;
         *(undefined4*)( (long)&local_820 + lVar12 * 0x10 + 4 ) = 1;
      }
;
      if (( *(int*)( (long)plVar10 + 0xc ) != iVar11 ) && ( iVar11 != -1 )) goto LAB_00101798;
      iVar11 = *(int*)( lVar4 + 0xc + (long)(int)plVar10[1] * 0x10 );
      uVar2 = *param_5;
      *param_5 = uVar2 + 1;
      puVar1 = (undefined8*)( lVar3 + lVar6 * 0x10 );
      uVar5 = puVar1[1];
      *(undefined8*)( param_5 + (ulong)uVar2 * 4 + 2 ) = *puVar1;
      *(undefined8*)( param_5 + (ulong)uVar2 * 4 + 2 + 2 ) = uVar5;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::EPAConvexHullBuilder::Triangle::Triangle(int, int, int, JPH::Vec3 const*) */void JPH::EPAConvexHullBuilder::Triangle::Triangle(Triangle *this, int param_1, int param_2, int param_3, Vec3 *param_4) {
   float *pfVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   ulong uVar8;
   float fVar9;
   float fVar12;
   float fVar13;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   undefined4 uVar25;
   float fVar26;
   float local_28;
   float fStack_24;
   float fStack_20;
   float fStack_1c;
   float local_18;
   float fStack_14;
   float fStack_10;
   float fStack_c;
   *(undefined4*)( this + 0x50 ) = 0x7f7fffff;
   uVar25 = _LC12;
   *(int*)( this + 0xc ) = param_1;
   *(int*)( this + 0x2c ) = param_3;
   uVar4 = *(undefined8*)( param_4 + (long)param_1 * 0x10 );
   uVar5 = *(undefined8*)( (long)( param_4 + (long)param_1 * 0x10 ) + 8 );
   *(int*)( this + 0x1c ) = param_2;
   pfVar1 = (float*)( param_4 + (long)param_3 * 0x10 );
   fVar9 = *pfVar1;
   fVar12 = pfVar1[1];
   fVar13 = pfVar1[2];
   fVar20 = pfVar1[3];
   *(undefined2*)( this + 0x5d ) = 0;
   uVar6 = *(undefined8*)( param_4 + (long)param_2 * 0x10 );
   uVar7 = *(undefined8*)( (long)( param_4 + (long)param_2 * 0x10 ) + 8 );
   local_28 = (float)uVar4;
   fStack_24 = (float)( (ulong)uVar4 >> 0x20 );
   fStack_20 = (float)uVar5;
   fStack_1c = (float)( (ulong)uVar5 >> 0x20 );
   fVar21 = fVar9 - local_28;
   fVar22 = fVar12 - fStack_24;
   fVar23 = fVar13 - fStack_20;
   fVar24 = fVar20 - fStack_1c;
   this[0x5f] = (Triangle)0x0;
   local_18 = (float)uVar6;
   fStack_14 = (float)( (ulong)uVar6 >> 0x20 );
   fStack_10 = (float)uVar7;
   fStack_c = (float)( (ulong)uVar7 >> 0x20 );
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   auVar14._0_4_ = local_28 + local_18 + fVar9;
   auVar14._4_4_ = fStack_24 + fStack_14 + fVar12;
   auVar14._8_4_ = fStack_20 + fStack_10 + fVar13;
   auVar14._12_4_ = fStack_1c + fStack_c + fVar20;
   *(undefined8*)( this + 0x20 ) = 0;
   fVar9 = fVar9 - local_18;
   fVar12 = fVar12 - fStack_14;
   fVar13 = fVar13 - fStack_10;
   auVar15._4_4_ = uVar25;
   auVar15._0_4_ = uVar25;
   auVar15._8_4_ = uVar25;
   auVar15._12_4_ = uVar25;
   auVar15 = divps(auVar14, auVar15);
   fVar16 = local_18 - local_28;
   fVar17 = fStack_14 - fStack_24;
   fVar18 = fStack_10 - fStack_20;
   fStack_1c = fStack_c - fStack_1c;
   fVar26 = fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21 + 0.0;
   *(undefined1(*) [16])( this + 0x40 ) = auVar15;
   fVar19 = fVar13 * fVar13 + fVar12 * fVar12 + fVar9 * fVar9 + 0.0;
   if (fVar19 <= fVar26) {
      fVar21 = fVar12 * fVar16 - fVar17 * fVar9;
      fVar22 = fVar13 * fVar17 - fVar18 * fVar12;
      fVar23 = fVar9 * fVar18 - fVar16 * fVar13;
      *(float*)( this + 0x30 ) = fVar22;
      *(float*)( this + 0x34 ) = fVar23;
      *(float*)( this + 0x38 ) = fVar21;
      *(float*)( this + 0x3c ) = fVar21;
      fVar24 = fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22 + 0.0;
      if (_LC13 < fVar24) {
         fVar21 = fVar21 * auVar15._8_4_ + fVar23 * auVar15._4_4_ + fVar22 * auVar15._0_4_ + 0.0;
         *(float*)( this + 0x50 ) = ( (float)( (uint)fVar21 & _LC14 ) * fVar21 ) / fVar24;
         fVar21 = fVar9 * fVar16 + 0.0 + fVar12 * fVar17 + fVar13 * fVar18;
         fVar22 = fVar16 * fVar16 + 0.0 + fVar17 * fVar17 + fVar18 * fVar18;
         fVar23 = fVar22 * fVar19 - fVar21 * fVar21;
         if (0.0 < fVar23) {
            uVar25 = (undefined4)_LC15;
            uVar8 = (ulong)_LC15 >> 0x20;
            this[0x5c] = (Triangle)0x0;
            fVar24 = __LC16;
            fVar26 = fVar18 * fStack_10 + fVar17 * fStack_14 + fVar16 * local_18 + 0.0;
            fVar9 = fVar12 * fStack_14 + fVar9 * local_18 + 0.0 + fStack_10 * fVar13;
            auVar11._0_4_ = fVar19 * fVar26 - fVar9 * fVar21;
            auVar11._4_4_ = fVar21 * fVar26 - fVar9 * fVar22;
            auVar11._8_4_ = fVar19 * fStack_1c - fVar12 * ( fVar13 * fVar16 + 0.0 + fVar18 * fVar17 + fVar18 * fVar18 );
            auVar11._12_4_ = fVar22 * fStack_1c - fVar12 * ( ( fVar20 - fStack_c ) * fVar16 + 0.0 + fStack_1c * fVar17 + fStack_1c * fVar18 );
            auVar3._4_4_ = fVar23;
            auVar3._0_4_ = fVar23;
            auVar3._8_4_ = uVar25;
            auVar3._12_4_ = (int)uVar8;
            auVar15 = divps(auVar11, auVar3);
            *(long*)( this + 0x54 ) = auVar15._0_8_;
            if (( ( fVar24 < auVar15._0_4_ ) && ( __LC16 < auVar15._4_4_ ) ) && ( auVar15._0_4_ + auVar15._4_4_ < _LC17 )) goto LAB_00101cdc;
         }

      }

   }
 else {
      fVar9 = fVar22 * fVar16 - fVar17 * fVar21;
      fVar12 = fVar23 * fVar17 - fVar18 * fVar22;
      fVar13 = fVar21 * fVar18 - fVar16 * fVar23;
      *(float*)( this + 0x30 ) = fVar12;
      *(float*)( this + 0x34 ) = fVar13;
      *(float*)( this + 0x38 ) = fVar9;
      *(float*)( this + 0x3c ) = fVar9;
      fVar20 = fVar13 * fVar13 + fVar12 * fVar12 + 0.0 + fVar9 * fVar9;
      if (_LC13 < fVar20) {
         fVar9 = fVar9 * auVar15._8_4_ + fVar13 * auVar15._4_4_ + auVar15._0_4_ * fVar12 + 0.0;
         *(float*)( this + 0x50 ) = ( (float)( (uint)fVar9 & _LC14 ) * fVar9 ) / fVar20;
         fVar9 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16 + 0.0;
         fVar12 = fVar18 * fVar23 + fVar17 * fVar22 + fVar16 * fVar21 + 0.0;
         fVar13 = fVar9 * fVar26 - fVar12 * fVar12;
         if (0.0 < fVar13) {
            this[0x5c] = (Triangle)0x1;
            fVar20 = __LC16;
            auVar10._0_4_ = ( fVar21 * local_28 + 0.0 + fVar22 * fStack_24 + fVar23 * fStack_20 ) * fVar12 - ( fVar16 * local_28 + 0.0 + fStack_24 * fVar17 + fStack_20 * fVar18 ) * fVar26;
            auVar10._4_4_ = ( fVar16 * local_28 + 0.0 + fVar17 * fStack_24 + fVar18 * fStack_20 ) * fVar12 - ( fVar21 * local_28 + 0.0 + fStack_24 * fVar22 + fStack_20 * fVar23 ) * fVar9;
            auVar10._8_4_ = ( fVar23 * 0.0 + 0.0 + fVar18 * 0.0 + fVar18 * 0.0 ) * fStack_1c - ( fVar18 * 0.0 + 0.0 + fVar23 * 0.0 + fVar23 * 0.0 ) * fVar23;
            auVar10._12_4_ = ( fVar24 * 0.0 + 0.0 + fStack_1c * 0.0 + fStack_1c * 0.0 ) * fStack_1c - ( fStack_1c * 0.0 + 0.0 + fVar24 * 0.0 + fVar24 * 0.0 ) * fVar18;
            auVar2._4_4_ = fVar13;
            auVar2._0_4_ = fVar13;
            auVar2._8_4_ = (int)_LC15;
            auVar2._12_4_ = (int)( (ulong)_LC15 >> 0x20 );
            auVar15 = divps(auVar10, auVar2);
            *(long*)( this + 0x54 ) = auVar15._0_8_;
            if (( ( fVar20 < auVar15._0_4_ ) && ( __LC16 < auVar15._4_4_ ) ) && ( auVar15._4_4_ + auVar15._0_4_ < _LC17 )) {
               LAB_00101cdc:this[0x5d] = (Triangle)0x1;
               return;
            }

         }

      }

   }

   return;
}
/* JPH::EPAConvexHullBuilder::AddPoint(JPH::EPAConvexHullBuilder::Triangle*, int, float,
   JPH::StaticArray<JPH::EPAConvexHullBuilder::Triangle*, 128u>&) */uint JPH::EPAConvexHullBuilder::AddPoint(EPAConvexHullBuilder *this, Triangle *param_1, int param_2, float param_3, StaticArray *param_4) {
   float *pfVar1;
   float fVar2;
   Triangle TVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   long lVar12;
   int iVar13;
   uint uVar14;
   undefined8 *puVar15;
   ulong uVar16;
   long lVar17;
   long *plVar18;
   long lVar19;
   ulong uVar20;
   int *piVar21;
   EPAConvexHullBuilder *this_00;
   ulong uVar22;
   long in_FS_OFFSET;
   int local_848;
   int local_844;
   long local_840;
   int local_838[510];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_848 = 0;
   puVar15 = (undefined8*)( ( (ulong)(uint)param_2 + 1 ) * 0x10 + *(long*)( this + 0x6020 ) );
   uVar14 = FindEdge(*puVar15, puVar15[1], this, param_1, &local_848);
   iVar13 = local_848;
   if ((char)uVar14 == '\0') {
      LAB_00101fb0:uVar14 = 0;
   }
 else if (0 < local_848) {
      uVar20 = ( ulong )(local_848 + 1);
      lVar8 = *(long*)( this + 0x6020 );
      uVar22 = 1;
      do {
         while (true) {
            this_00 = *(EPAConvexHullBuilder**)( this + 0x6010 );
            iVar4 = ( &local_844 )[uVar22 * 4];
            iVar5 = local_838[(long)(int)( (long)( ( ulong )(uint)((int)uVar22 >> 0x1f) << 0x20 | uVar22 & 0xffffffff ) % (long)iVar13 ) * 4 + 1];
            if (this_00 == (EPAConvexHullBuilder*)0x0) {
               iVar7 = *(int*)( this + 0x6018 );
               if (0xff < iVar7) goto LAB_00101fb0;
               *(int*)( this + 0x6018 ) = iVar7 + 1;
               this_00 = this + (long)iVar7 * 0x60 + 0x10;
            }
 else {
               *(undefined8*)( this + 0x6010 ) = *(undefined8*)this_00;
            }

            Triangle::Triangle((Triangle*)this_00, iVar4, iVar5, param_2, (Vec3*)( lVar8 + 0x10 ));
            uVar6 = *(uint*)param_4;
            TVar3 = ( (Triangle*)this_00 )[0x5d];
            fVar2 = *(float*)( (Triangle*)this_00 + 0x50 );
            *(uint*)param_4 = uVar6 + 1;
            *(EPAConvexHullBuilder**)( param_4 + (ulong)uVar6 * 8 + 8 ) = this_00;
            if (( ( TVar3 == (Triangle)0x0 ) || ( param_3 <= fVar2 ) ) && ( 0.0 <= fVar2 )) break;
            uVar16 = ( ulong ) * (uint*)( this + 0x6028 ) + 1;
            *(uint*)( this + 0x6028 ) = *(uint*)( this + 0x6028 ) + 1;
            *(EPAConvexHullBuilder**)( this + uVar16 * 8 + 0x6028 ) = this_00;
            lVar17 = ( uVar16 & 0xffffffff ) - 1;
            ( (Triangle*)this_00 )[0x5f] = (Triangle)0x1;
            if (0 < lVar17) {
               lVar19 = lVar17 * 8;
               do {
                  lVar12 = lVar19 + 0x6030;
                  lVar17 = lVar17 + -1 >> 1;
                  lVar9 = *(long*)( this + lVar12 );
                  lVar19 = lVar17 * 8;
                  lVar10 = *(long*)( this + lVar19 + 0x6030 );
                  fVar2 = *(float*)( lVar10 + 0x50 );
                  pfVar1 = (float*)( lVar9 + 0x50 );
                  if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
                  *(long*)( this + lVar19 + 0x6030 ) = lVar9;
                  *(long*)( this + lVar12 ) = lVar10;
               }
 while ( lVar17 != 0 );
            }

            uVar22 = uVar22 + 1;
            if (uVar20 == uVar22) goto LAB_00101eb3;
         }
;
         uVar22 = uVar22 + 1;
      }
 while ( uVar20 != uVar22 );
      LAB_00101eb3:uVar14 = uVar14 & 0xff;
      uVar22 = 1;
      piVar21 = local_838;
      do {
         plVar11 = *(long**)( param_4 + uVar22 * 8 );
         iVar4 = *piVar21;
         lVar8 = *(long*)( piVar21 + -2 );
         *(int*)( plVar11 + 1 ) = iVar4;
         plVar18 = (long*)( (long)iVar4 * 0x10 + lVar8 );
         *plVar11 = lVar8;
         *plVar18 = (long)plVar11;
         *(undefined4*)( plVar18 + 1 ) = 0;
         lVar8 = *(long*)( param_4 + (long)( (int)( (long)( ( ulong )(uint)((int)uVar22 >> 0x1f) << 0x20 | uVar22 & 0xffffffff ) % (long)iVar13 ) + 1 ) * 8 );
         lVar17 = *(long*)( param_4 + uVar22 * 8 );
         uVar22 = uVar22 + 1;
         *(long*)( lVar17 + 0x10 ) = lVar8;
         *(undefined4*)( lVar17 + 0x18 ) = 2;
         *(long*)( lVar8 + 0x20 ) = lVar17;
         *(undefined4*)( lVar8 + 0x28 ) = 1;
         piVar21 = piVar21 + 4;
      }
 while ( uVar20 != uVar22 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar14;
}
/* JPH::Vec3
   JPH::EPAPenetrationDepth::SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>
   >, JPH::AddConvexRadius<JPH::TriangleConvexSupport>
   >(JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support> > const&,
   JPH::AddConvexRadius<JPH::TriangleConvexSupport> const&, JPH::Vec3, int&) */undefined1[16];JPH::EPAPenetrationDepth::SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(undefined8 param_1_00, undefined8 param_2_00, uint *param_1, float *param_2, undefined8 *param_5, uint *param_6) {
   uint uVar1;
   code *pcVar2;
   float *pfVar3;
   undefined1 auVar4[12];
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
   undefined1 auVar17[16];
   undefined1 auVar18[12];
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   local_58 = (float)param_1_00;
   fVar11 = local_58;
   fStack_54 = (float)( (ulong)param_1_00 >> 0x20 );
   fVar13 = fStack_54;
   fStack_50 = (float)param_2_00;
   fStack_4c = (float)( (ulong)param_2_00 >> 0x20 );
   fVar7 = *param_2 * local_58 + param_2[1] * fStack_54 + fStack_50 * param_2[2];
   fVar8 = (float)*(undefined8*)( param_2 + 4 ) * local_58 + (float)( ( ulong ) * (undefined8*)( param_2 + 4 ) >> 0x20 ) * fStack_54 + fStack_50 * param_2[6];
   fVar9 = (float)*(undefined8*)( param_2 + 8 ) * local_58 + (float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) * fStack_54 + fStack_50 * param_2[10];
   fVar10 = local_58 * 0.0 + fStack_54 * 0.0 + fStack_50 * 0.0;
   pcVar2 = *(code**)( *(long*)**(undefined8**)( param_2 + 0x10 ) + 0x10 );
   fVar6 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 + 0.0);
   if (fVar6 <= 0.0) {
      auVar4 = ( *pcVar2 )(CONCAT44(fVar8, fVar7), CONCAT44(fVar10, fVar9));
   }
 else {
      fVar6 = *(float*)( *(undefined8**)( param_2 + 0x10 ) + 1 ) / fVar6;
      auVar18 = ( *pcVar2 )(CONCAT44(fVar8, fVar7), CONCAT44(fVar10, fVar9));
      local_58 = auVar18._0_4_;
      fStack_54 = auVar18._4_4_;
      auVar4._0_4_ = local_58 + fVar7 * fVar6;
      auVar4._4_4_ = fStack_54 + fVar8 * fVar6;
      auVar4._8_4_ = auVar18._8_4_ + fVar9 * fVar6;
   }

   fVar6 = auVar4._0_4_;
   fVar7 = auVar4._4_4_;
   fVar8 = auVar4._8_4_;
   fVar11 = 0.0 - fVar11;
   fVar13 = 0.0 - fVar13;
   fStack_50 = 0.0 - fStack_50;
   pfVar3 = (float*)*param_5;
   fVar9 = param_2[0xc] + fVar8 * param_2[8] + fVar6 * *param_2 + fVar7 * param_2[4];
   fVar10 = param_2[0xd] + fVar8 * param_2[9] + fVar6 * param_2[1] + fVar7 * param_2[5];
   fVar14 = param_2[0xe] + fVar8 * param_2[10] + fVar6 * param_2[2] + fVar7 * param_2[6];
   fVar6 = param_2[0xf] + fVar8 * param_2[0xb] + fVar6 * param_2[3] + fVar7 * param_2[7];
   fVar7 = SQRT(fStack_50 * fStack_50 + fVar13 * fVar13 + fVar11 * fVar11 + 0.0);
   if (fVar7 <= 0.0) {
      fVar8 = pfVar3[2] * fStack_50 + pfVar3[1] * fVar13 + *pfVar3 * fVar11 + 0.0;
      fVar7 = pfVar3[6] * fStack_50 + pfVar3[5] * fVar13 + pfVar3[4] * fVar11 + 0.0;
      fVar11 = fStack_50 * pfVar3[10] + pfVar3[9] * fVar13 + fVar11 * pfVar3[8] + 0.0;
      if (fVar8 <= fVar7) {
         if (fVar11 < fVar7) {
            fVar8 = pfVar3[4];
            fVar12 = pfVar3[5];
            fVar15 = pfVar3[6];
            fVar5 = pfVar3[7];
            goto LAB_001021e3;
         }

      }
 else if (fVar11 < fVar8) {
         fVar8 = *pfVar3;
         fVar12 = pfVar3[1];
         fVar15 = pfVar3[2];
         fVar5 = pfVar3[3];
         goto LAB_001021e3;
      }

      fVar8 = pfVar3[8];
      fVar12 = pfVar3[9];
      fVar15 = pfVar3[10];
      fVar5 = pfVar3[0xb];
      goto LAB_001021e3;
   }

   fVar7 = *(float*)( param_5 + 1 ) / fVar7;
   fVar15 = pfVar3[2] * fStack_50 + pfVar3[1] * fVar13 + *pfVar3 * fVar11 + 0.0;
   fVar12 = pfVar3[6] * fStack_50 + pfVar3[5] * fVar13 + pfVar3[4] * fVar11 + 0.0;
   fVar8 = fStack_50 * pfVar3[10] + fVar13 * pfVar3[9] + fVar11 * pfVar3[8] + 0.0;
   if (fVar15 <= fVar12) {
      if (fVar12 <= fVar8) goto LAB_001021db;
      fVar8 = pfVar3[4];
      fVar12 = pfVar3[5];
      fVar15 = pfVar3[6];
      fVar5 = pfVar3[7];
   }
 else if (fVar8 < fVar15) {
      fVar8 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar15 = pfVar3[2];
      fVar5 = pfVar3[3];
   }
 else {
      LAB_001021db:fVar8 = pfVar3[8];
      fVar12 = pfVar3[9];
      fVar15 = pfVar3[10];
      fVar5 = pfVar3[0xb];
   }

   fVar8 = fVar8 + fVar7 * fVar11;
   fVar12 = fVar12 + fVar7 * fVar13;
   fVar15 = fVar15 + fVar7 * fStack_50;
   fVar5 = fVar5 + fVar7 * ( 0.0 - fStack_4c );
   LAB_001021e3:fVar11 = fVar9 - fVar8;
   fVar13 = fVar10 - fVar12;
   fVar7 = fVar14 - fVar15;
   fVar16 = fVar6 - fVar5;
   *param_6 = *param_1;
   uVar1 = *param_1;
   auVar17._12_4_ = fVar16;
   auVar17._8_4_ = fVar7;
   *param_1 = uVar1 + 1;
   pfVar3 = (float*)( param_1 + (ulong)uVar1 * 4 + 4 );
   *pfVar3 = fVar11;
   pfVar3[1] = fVar13;
   pfVar3[2] = fVar7;
   pfVar3[3] = fVar16;
   uVar1 = *param_6;
   pfVar3 = (float*)( param_1 + (long)(int)uVar1 * 4 + 0x404 );
   *pfVar3 = fVar8;
   pfVar3[1] = fVar12;
   pfVar3[2] = fVar15;
   pfVar3[3] = fVar5;
   auVar17._4_4_ = fVar13;
   auVar17._0_4_ = fVar11;
   pfVar3 = (float*)( param_1 + (long)(int)uVar1 * 4 + 0x204 );
   *pfVar3 = fVar9;
   pfVar3[1] = fVar10;
   pfVar3[2] = fVar14;
   pfVar3[3] = fVar6;
   return auVar17;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool 
   JPH::EPAPenetrationDepth::GetPenetrationDepthStepEPA<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>
   >, JPH::AddConvexRadius<JPH::TriangleConvexSupport>
   >(JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support> > const&,
   JPH::AddConvexRadius<JPH::TriangleConvexSupport> const&, float, JPH::Vec3&, JPH::Vec3&,
   JPH::Vec3&) */bool JPH::EPAPenetrationDepth::GetPenetrationDepthStepEPA<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(EPAPenetrationDepth *this, TransformedConvexObject *param_1, AddConvexRadius *param_2, float param_3, Vec3 *param_4, Vec3 *param_5, Vec3 *param_6) {
   ulong uVar1;
   undefined1 *puVar2;
   undefined1 *puVar3;
   long *plVar4;
   float *pfVar5;
   undefined4 uVar6;
   undefined8 uVar7;
   Vec3 *pVVar8;
   Triangle *pTVar9;
   code *pcVar10;
   undefined1 auVar11[16];
   float fVar12;
   float fVar13;
   float fVar14;
   char cVar15;
   bool bVar16;
   long *plVar17;
   long lVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   long lVar22;
   undefined1 *puVar23;
   Triangle *pTVar24;
   ulong uVar25;
   Triangle *pTVar26;
   long lVar27;
   ulong uVar28;
   float *pfVar29;
   int iVar30;
   uint uVar31;
   long in_FS_OFFSET;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar37;
   undefined8 uVar35;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar36[16];
   float fVar39;
   undefined8 extraout_XMM0_Qb_00;
   undefined8 extraout_XMM0_Qb_01;
   undefined8 extraout_XMM0_Qb_02;
   undefined8 uVar38;
   float fVar40;
   float fVar46;
   float fVar48;
   undefined1 auVar41[12];
   uint uVar45;
   undefined1 auVar42[16];
   uint uVar47;
   uint uVar49;
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   float fVar50;
   undefined1 auVar51[16];
   float fVar52;
   float fVar53;
   float fVar54;
   float fVar55;
   float fVar56;
   float fVar57;
   undefined1 auVar58[16];
   undefined1 local_8030[32768];
   puVar2 = &stack0xffffffffffffffd0;
   do {
      puVar23 = puVar2;
      *(undefined8*)( puVar23 + -0x1000 ) = *(undefined8*)( puVar23 + -0x1000 );
      puVar2 = puVar23 + -0x1000;
   }
 while ( puVar23 + -0x1000 != local_8030 );
   uVar31 = *(uint*)( this + 0xc0 );
   iVar30 = uVar31 << 4;
   *(Vec3**)( puVar23 + -0x14a8 ) = param_5;
   pTVar26 = (Triangle*)( puVar23 + 0x828 );
   *(Vec3**)( puVar23 + -0x14a0 ) = param_6;
   *(AddConvexRadius**)( puVar23 + -0x14c8 ) = param_2;
   puVar2 = puVar23 + -0x1058;
   *(Vec3**)( puVar23 + -0x14b0 ) = param_4;
   *(float*)( puVar23 + -0x14b4 ) = param_3;
   *(undefined8*)( puVar23 + 0x6ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   puVar3 = puVar23 + 0x7c8;
   *(undefined1**)( puVar23 + -0x14f8 ) = puVar3;
   *(undefined1**)( puVar23 + -0x14c0 ) = puVar23 + -0x1048;
   *(Triangle**)( puVar23 + -0x1508 ) = pTVar26;
   *(undefined1**)( puVar23 + -0x1500 ) = puVar3;
   *(undefined1**)( puVar23 + -0x14d8 ) = puVar3;
   *(Triangle**)( puVar23 + -0x14d0 ) = pTVar26;
   *(undefined8*)( puVar23 + -0x1510 ) = 0x1023fc;
   __memcpy_chk(puVar23 + -0x1048, this, iVar30, 0x1800);
   *(undefined8*)( puVar23 + -0x1510 ) = 0x102415;
   __memcpy_chk(puVar23 + -0x848, this + 0x40, iVar30, 0x1000);
   *(undefined8*)( puVar23 + -0x1510 ) = 0x102431;
   __memcpy_chk(puVar23 + -0x48, this + 0x80, iVar30, 0x800);
   auVar58 = *(undefined1(*) [16])( puVar23 + -0x1508 );
   *(uint*)( puVar23 + -0x1058 ) = uVar31;
   if (uVar31 == 1) {
      uVar35 = *(undefined8*)( puVar23 + -0x14c8 );
      *(undefined1(*) [16])( puVar23 + -0x1508 ) = auVar58;
      *(undefined4*)( puVar23 + -0x1058 ) = 0;
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102d7e;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(0x3f80000000000000, 0, puVar2, param_1, uVar35, puVar23 + -0x1478);
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102d9e;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(0xbf800000bf800000, 0xbf800000bf800000, puVar2, param_1, uVar35, puVar23 + -0x1474);
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102dc8;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(0xbf8000003f800000, 0xbf800000bf800000, puVar2, param_1, uVar35, puVar23 + -0x1470);
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102dfc;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(0xbf80000000000000, 0x3f8000003f800000, puVar2, param_1, uVar35, puVar23 + -0x146c);
      uVar31 = *(uint*)( puVar23 + -0x1058 );
      auVar58 = *(undefined1(*) [16])( puVar23 + -0x1508 );
   }
 else if (uVar31 == 2) {
      auVar36._0_4_ = *(float*)( puVar23 + -0x1038 ) - *(float*)( puVar23 + -0x1048 );
      auVar36._4_4_ = *(float*)( puVar23 + -0x1034 ) - *(float*)( puVar23 + -0x1044 );
      auVar36._8_4_ = *(float*)( puVar23 + -0x1030 ) - *(float*)( puVar23 + -0x1040 );
      auVar36._12_4_ = *(float*)( puVar23 + -0x102c ) - *(float*)( puVar23 + -0x103c );
      auVar42._0_4_ = SQRT(auVar36._8_4_ * auVar36._8_4_ + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_ + 0.0);
      auVar42._4_4_ = auVar42._0_4_;
      auVar42._8_4_ = auVar42._0_4_;
      auVar42._12_4_ = auVar42._0_4_;
      auVar36 = divps(auVar36, auVar42);
      uVar31 = ( __LC50 << 0x1f ) >> 0x1f;
      uVar45 = ( _UNK_00105224 << 0x1f ) >> 0x1f;
      uVar47 = ( _UNK_00105228 << 0x1f ) >> 0x1f;
      uVar49 = ( _UNK_0010522c << 0x1f ) >> 0x1f;
      fVar39 = auVar36._0_4_;
      fVar37 = auVar36._4_4_;
      fVar32 = auVar36._8_4_;
      *(undefined1(*) [16])( puVar23 + -0x1508 ) = auVar36;
      *(long*)( puVar23 + -0x1508 ) = auVar36._0_8_;
      *(ulong*)( puVar23 + -0x1500 ) = *(ulong*)( puVar23 + -0x1500 ) & 0xffffffff00000000 | (ulong)(uint)fVar32;
      fVar50 = (float)( __LC46 & ( ( __LC70 & uVar31 | ~uVar31 & ( uint )((float)__LC50 + __LC62) ) ^ __LC45 & __LC50 << 0x1e ^ __LC50 << 0x1f ) | ~__LC46 & ( uint )((float)( ( ( uint )((float)__LC50 + __LC62) & uVar31 | ~uVar31 & __LC70 ) ^ ( __LC44 ^ __LC50 << 0x1e ) & __LC45 ) * *(float*)( puVar23 + -0x1508 )) );
      fVar40 = (float)( _UNK_00105204 & ( ( _UNK_00105244 & uVar45 | ~uVar45 & ( uint )((float)_UNK_00105224 + _UNK_00105234) ) ^ _UNK_001051f4 & _UNK_00105224 << 0x1e ^ _UNK_00105224 << 0x1f ) | ~_UNK_00105204 & ( uint )((float)( ( ( uint )((float)_UNK_00105224 + _UNK_00105234) & uVar45 | ~uVar45 & _UNK_00105244 ) ^ ( _UNK_001051e4 ^ _UNK_00105224 << 0x1e ) & _UNK_001051f4 ) * *(float*)( puVar23 + -0x1504 )) );
      fVar46 = (float)( (uint)_LC9 & ( ( _UNK_00105248 & uVar47 | ~uVar47 & ( uint )((float)_UNK_00105228 + _UNK_00105238) ) ^ _UNK_001051f8 & _UNK_00105228 << 0x1e ^ _UNK_00105228 << 0x1f ) | ~(uint)_LC9 & ( uint )((float)( ( ( uint )((float)_UNK_00105228 + _UNK_00105238) & uVar47 | ~uVar47 & _UNK_00105248 ) ^ ( _UNK_001051e8 ^ _UNK_00105228 << 0x1e ) & _UNK_001051f8 ) * *(float*)( puVar23 + -0x1500 )) );
      fVar48 = (float)( _LC9._4_4_ & ( ( _UNK_0010524c & uVar49 | ~uVar49 & ( uint )((float)_UNK_0010522c + _UNK_0010523c) ) ^ _UNK_001051fc & _UNK_0010522c << 0x1e ^ _UNK_0010522c << 0x1f ) | ~_LC9._4_4_ & ( uint )((float)( ( ( uint )((float)_UNK_0010522c + _UNK_0010523c) & uVar49 | ~uVar49 & _UNK_0010524c ) ^ ( _UNK_001051ec ^ _UNK_0010522c << 0x1e ) & _UNK_001051fc ) * *(float*)( puVar23 + -0x14fc )) );
      fVar52 = fVar50 + fVar50;
      fVar56 = fVar40 + fVar40;
      fVar34 = ( fVar46 + fVar46 ) * fVar46;
      fVar57 = ( fVar46 + fVar46 ) * fVar48;
      fVar53 = fVar52 * fVar46 + fVar56 * fVar48;
      fVar55 = fVar52 * fVar46 - fVar56 * fVar48;
      fVar33 = fVar46 * fVar56 + fVar52 * fVar48;
      fVar48 = fVar46 * fVar56 - fVar52 * fVar48;
      fVar54 = ( _LC3 - fVar50 * fVar52 ) - fVar56 * fVar40;
      fVar46 = fVar40 * fVar52 + fVar57;
      fVar57 = fVar40 * fVar52 - fVar57;
      fVar50 = ( _LC3 - fVar34 ) - fVar50 * fVar52;
      fVar34 = ( _LC3 - fVar56 * fVar40 ) - fVar34;
      if ((float)( (uint)fVar37 & _LC14 ) < (float)( _LC14 & (uint)fVar39 )) {
         auVar51._4_4_ = 0;
         auVar51._0_4_ = fVar32;
         auVar51._12_4_ = (uint)fVar39 ^ __LC4;
         auVar51._8_4_ = (uint)fVar39 ^ __LC4;
         auVar44._0_4_ = SQRT(fVar39 * fVar39 + fVar32 * fVar32);
         auVar44._4_4_ = auVar44._0_4_;
         auVar44._8_4_ = auVar44._0_4_;
         auVar44._12_4_ = auVar44._0_4_;
         auVar36 = divps(auVar51, auVar44);
         *(undefined1(*) [16])( puVar23 + -0x14e8 ) = auVar36;
      }
 else {
         auVar11._8_4_ = (uint)fVar37 ^ __LC4;
         auVar11._4_4_ = (uint)fVar37 ^ __LC4;
         auVar11._0_4_ = fVar32;
         auVar11._12_4_ = 0;
         auVar43._0_4_ = SQRT(fVar37 * fVar37 + fVar32 * fVar32);
         auVar43._4_4_ = auVar43._0_4_;
         auVar43._8_4_ = auVar43._0_4_;
         auVar43._12_4_ = auVar43._0_4_;
         auVar36 = divps(auVar11 << 0x20, auVar43);
         *(undefined1(*) [16])( puVar23 + -0x14e8 ) = auVar36;
      }

      fVar39 = *(float*)( puVar23 + -0x14e4 );
      fVar37 = *(float*)( puVar23 + -0x14e8 );
      uVar35 = *(undefined8*)( puVar23 + -0x14c8 );
      *(undefined1(*) [16])( puVar23 + -0x1488 ) = auVar58;
      fVar32 = *(float*)( puVar23 + -0x14e0 );
      fVar40 = fVar39 * fVar50 + fVar37 * fVar46 + fVar32 * fVar48 + _UNK_00105214;
      *(float*)( puVar23 + -0x1508 ) = fVar39 * fVar57 + fVar37 * fVar34 + fVar32 * fVar53 + __LC47;
      *(float*)( puVar23 + -0x1504 ) = fVar40;
      *(float*)( puVar23 + -0x1500 ) = fVar39 * fVar33 + fVar37 * fVar55 + fVar32 * fVar54 + _UNK_00105218;
      *(float*)( puVar23 + -0x14fc ) = fVar39 * 0.0 + fVar37 * 0.0 + fVar32 * 0.0 + _LC3;
      fVar39 = *(float*)( puVar23 + -0x1508 );
      fVar37 = *(float*)( puVar23 + -0x1500 );
      *(float*)( puVar23 + -0x1498 ) = fVar34 * fVar39 + fVar40 * fVar57 + fVar37 * fVar53 + __LC47;
      *(float*)( puVar23 + -0x1494 ) = fVar46 * fVar39 + fVar40 * fVar50 + fVar37 * fVar48 + _UNK_00105214;
      *(float*)( puVar23 + -0x1490 ) = fVar55 * fVar39 + fVar40 * fVar33 + fVar37 * fVar54 + _UNK_00105218;
      *(float*)( puVar23 + -0x148c ) = fVar39 * 0.0 + fVar40 * 0.0 + fVar37 * 0.0 + _LC3;
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102cde;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(*(undefined8*)( puVar23 + -0x14e8 ), *(undefined8*)( puVar23 + -0x14e0 ), puVar2, param_1, uVar35, puVar23 + -0x1474);
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102cff;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(*(undefined8*)( puVar23 + -0x1508 ), *(undefined8*)( puVar23 + -0x1500 ), puVar2, param_1, uVar35, puVar23 + -0x1470);
      *(undefined8*)( puVar23 + -0x1510 ) = 0x102d21;
      SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(*(undefined8*)( puVar23 + -0x1498 ), *(undefined8*)( puVar23 + -0x1490 ), puVar2, param_1, uVar35, puVar23 + -0x146c);
      uVar31 = *(uint*)( puVar23 + -0x1058 );
      auVar58 = *(undefined1(*) [16])( puVar23 + -0x1488 );
   }

   pVVar8 = *(Vec3**)( puVar23 + -0x14c0 );
   *(undefined1(*) [16])( puVar23 + -0x1508 ) = auVar58;
   *(undefined8*)( puVar23 + 0x67c8 ) = 0;
   *(undefined1**)( puVar23 + 0x67d8 ) = puVar2;
   *(undefined4*)( puVar23 + 0x67e0 ) = 0;
   *(undefined4*)( puVar23 + 0x67d0 ) = 1;
   *(undefined8*)( puVar23 + -0x1510 ) = 0x1024a1;
   EPAConvexHullBuilder::Triangle::Triangle(*(Triangle**)( puVar23 + -0x14f8 ), 0, 1, 2, pVVar8);
   *(undefined4*)( puVar23 + 0x67d0 ) = 2;
   *(undefined8*)( puVar23 + -0x1510 ) = 0x1024c3;
   EPAConvexHullBuilder::Triangle::Triangle(pTVar26, 0, 2, 1, pVVar8);
   uVar35 = *(undefined8*)( puVar23 + -0x14f8 );
   for (int i = 0; i < 3; i++) {
      *(Triangle**)( puVar23 + ( 16*i + 1992 ) ) = pTVar26;
      *(undefined4*)( puVar23 + ( 16*i + 2000 ) ) = ( 2 - i );
      *(undefined8*)( puVar23 + ( -16*i + 2120 ) ) = uVar35;
      *(undefined4*)( puVar23 + ( -16*i + 2128 ) ) = i;
   }

   puVar23[0x827] = 1;
   *(undefined4*)( puVar23 + 0x67e0 ) = 2;
   puVar23[0x887] = 1;
   *(undefined8*)( puVar23 + 0x67e8 ) = *(undefined8*)( puVar23 + -0x14d8 );
   *(undefined8*)( puVar23 + 0x67f0 ) = *(undefined8*)( puVar23 + -0x14d0 );
   if (*(float*)( puVar23 + 0x818 ) < *(float*)( puVar23 + 0x878 ) || *(float*)( puVar23 + 0x818 ) == *(float*)( puVar23 + 0x878 )) {
      pTVar26 = *(Triangle**)( puVar23 + -0x14f8 );
   }
 else {
      *(undefined1(*) [16])( puVar23 + 0x67e8 ) = *(undefined1(*) [16])( puVar23 + -0x1508 );
   }

   if (uVar31 < 4) {
      uVar25 = 2;
      uVar28 = 2;
   }
 else {
      pfVar29 = (float*)( puVar23 + -0x1018 );
      uVar31 = 3;
      uVar25 = 2;
      uVar28 = 2;
      plVar4 = (long*)( puVar23 + 0x67e8 );
      do {
         if (uVar28 != 0) {
            pTVar24 = (Triangle*)0x0;
            fVar39 = 0.0;
            plVar17 = plVar4;
            LAB_00102605:do {
               pTVar9 = (Triangle*)*plVar17;
               if (pTVar9[0x5e] == (Triangle)0x0) {
                  fVar33 = *(float*)( pTVar9 + 0x30 );
                  fVar34 = *(float*)( pTVar9 + 0x34 );
                  fVar37 = *(float*)( pTVar9 + 0x38 );
                  fVar32 = ( pfVar29[2] - *(float*)( pTVar9 + 0x48 ) ) * fVar37 + ( pfVar29[1] - *(float*)( pTVar9 + 0x44 ) ) * fVar34 + ( *pfVar29 - *(float*)( pTVar9 + 0x40 ) ) * fVar33 + 0.0;
                  if (0.0 < fVar32) {
                     fVar33 = ( fVar32 * fVar32 ) / ( fVar37 * fVar37 + fVar34 * fVar34 + fVar33 * fVar33 + 0.0 );
                     if (fVar39 < fVar33) {
                        pTVar24 = pTVar9;
                        fVar39 = fVar33;
                     }

                     plVar17 = plVar17 + 1;
                     if (plVar4 + uVar28 == plVar17) break;
                     goto LAB_00102605;
                  }

               }

               plVar17 = plVar17 + 1;
            }
 while ( plVar4 + uVar28 != plVar17 );
            if (pTVar24 != (Triangle*)0x0) {
               *(undefined4*)( puVar23 + -0x1468 ) = 0;
               *(undefined8*)( puVar23 + -0x1510 ) = 0x1026bb;
               cVar15 = EPAConvexHullBuilder::AddPoint((EPAConvexHullBuilder*)( puVar23 + 0x7b8 ), pTVar24, uVar31, _LC10, (StaticArray*)( puVar23 + -0x1468 ));
               if (cVar15 == '\0') goto LAB_001029a0;
               uVar25 = ( ulong ) * (uint*)( puVar23 + 0x67e0 );
               pTVar26 = *(Triangle**)( puVar23 + 0x67e8 );
               uVar28 = uVar25;
            }

         }

         uVar31 = uVar31 + 1;
         pfVar29 = pfVar29 + 4;
      }
 while ( uVar31 < *(uint*)( puVar23 + -0x1058 ) );
   }

   uVar35 = *(undefined8*)( puVar23 + -0x14c8 );
   do {
      uVar1 = uVar28 * 8;
      lVar22 = *(long*)( puVar23 + uVar1 + 0x67e0 );
      lVar19 = ( (long)uVar1 >> 3 ) + -1;
      if (pTVar26[0x5e] == (Triangle)0x0) {
         if (0.0 <= *(float*)( pTVar26 + 0x50 )) {
            pTVar24 = (Triangle*)0x0;
            fVar39 = _LC10;
            break;
         }

         *(Triangle**)( puVar23 + uVar1 + 0x67e0 ) = pTVar26;
         *(long*)( puVar23 + 0x67e8 ) = lVar22;
         if (0x10 < uVar1) {
            fVar39 = *(float*)( lVar22 + 0x50 );
            lVar21 = 1;
            lVar20 = 0;
            lVar27 = 0;
            do {
               fVar33 = *(float*)( *(long*)( puVar23 + lVar21 * 8 + 0x67e8 ) + 0x50 );
               lVar20 = lVar20 + 2;
               if (fVar39 <= fVar33) {
                  if (( lVar19 <= lVar20 ) || ( lVar18 = lVar20 ),fVar39 < *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 ) || fVar39 == *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 )) break;
               }
 else {
                  lVar18 = lVar21;
                  if (( lVar20 < lVar19 ) && ( lVar18 = lVar20 ),fVar33 < *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 ) || fVar33 == *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 )) {
                     lVar18 = lVar21;
                  }

               }

               if (lVar18 == lVar27) break;
               *(long*)( puVar23 + lVar27 * 8 + 0x67e8 ) = *(long*)( puVar23 + lVar18 * 8 + 0x67e8 );
               lVar20 = lVar18 * 2;
               *(long*)( puVar23 + lVar18 * 8 + 0x67e8 ) = lVar22;
               lVar21 = lVar20 + 1;
               lVar27 = lVar18;
            }
 while ( lVar21 < lVar19 );
         }

         uVar38 = *(undefined8*)( pTVar26 + 0x30 );
         uVar7 = *(undefined8*)( pTVar26 + 0x38 );
         *(int*)( puVar23 + 0x67e0 ) = (int)uVar25 + -1;
         *(undefined8*)( puVar23 + -0x1510 ) = 0x1027fc;
         auVar58 = SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(uVar38, uVar7, puVar2, param_1, uVar35, puVar23 + -0x146c);
         fVar39 = *(float*)( pTVar26 + 0x30 );
         *(undefined4*)( puVar23 + -0x1468 ) = 0;
         *(long*)( puVar23 + -0x1508 ) = auVar58._0_8_;
         *(undefined8*)( puVar23 + -0x1500 ) = extraout_XMM0_Qb;
         *(long*)( puVar23 + -0x1500 ) = auVar58._8_8_;
         if (( *(float*)( puVar23 + -0x1500 ) - *(float*)( pTVar26 + 0x48 ) ) * *(float*)( pTVar26 + 0x38 ) + ( *(float*)( puVar23 + -0x1504 ) - *(float*)( pTVar26 + 0x44 ) ) * *(float*)( pTVar26 + 0x34 ) + fVar39 * ( *(float*)( puVar23 + -0x1508 ) - *(float*)( pTVar26 + 0x40 ) ) + 0.0 <= 0.0) goto LAB_001029a0;
         *(undefined8*)( puVar23 + -0x1510 ) = 0x10287a;
         cVar15 = EPAConvexHullBuilder::AddPoint((EPAConvexHullBuilder*)( puVar23 + 0x7b8 ), pTVar26, *(int*)( puVar23 + -0x146c ), _LC10, (StaticArray*)( puVar23 + -0x1468 ));
         if (cVar15 == '\0') goto LAB_001029a0;
         *(undefined8*)pTVar26 = *(undefined8*)( puVar23 + 0x67c8 );
         uVar31 = *(uint*)( puVar23 + 0x67e0 );
         *(Triangle**)( puVar23 + 0x67c8 ) = pTVar26;
         if (( uVar31 == 0 ) || ( 0x1f < *(uint*)( puVar23 + -0x1058 ) )) goto LAB_001029a0;
      }
 else {
         *(Triangle**)( puVar23 + uVar1 + 0x67e0 ) = pTVar26;
         *(long*)( puVar23 + 0x67e8 ) = lVar22;
         if (1 < lVar19) {
            fVar39 = *(float*)( lVar22 + 0x50 );
            lVar21 = 1;
            lVar20 = 0;
            lVar27 = 0;
            do {
               fVar33 = *(float*)( *(long*)( puVar23 + lVar21 * 8 + 0x67e8 ) + 0x50 );
               lVar20 = lVar20 + 2;
               if (fVar39 <= fVar33) {
                  if (( lVar19 <= lVar20 ) || ( lVar18 = lVar20 ),fVar39 < *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 ) || fVar39 == *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 )) break;
               }
 else {
                  lVar18 = lVar21;
                  if (( lVar20 < lVar19 ) && ( lVar18 = lVar20 ),fVar33 < *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 ) || fVar33 == *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 )) {
                     lVar18 = lVar21;
                  }

               }

               if (lVar18 == lVar27) break;
               *(long*)( puVar23 + lVar27 * 8 + 0x67e8 ) = *(long*)( puVar23 + lVar18 * 8 + 0x67e8 );
               lVar20 = lVar18 * 2;
               *(long*)( puVar23 + lVar18 * 8 + 0x67e8 ) = lVar22;
               lVar21 = lVar20 + 1;
               lVar27 = lVar18;
            }
 while ( lVar21 < lVar19 );
         }

         iVar30 = (int)uVar25 + -1;
         *(int*)( puVar23 + 0x67e0 ) = iVar30;
         if (iVar30 == 0) goto LAB_001029a0;
         *(undefined8*)pTVar26 = *(undefined8*)( puVar23 + 0x67c8 );
         uVar31 = *(uint*)( puVar23 + 0x67e0 );
         *(Triangle**)( puVar23 + 0x67c8 ) = pTVar26;
      }

      uVar25 = (ulong)uVar31;
      pTVar26 = *(Triangle**)( puVar23 + 0x67e8 );
      uVar28 = uVar25;
   }
 while ( true );
   LAB_00102e74:lVar22 = uVar28 * 8;
   lVar19 = *(long*)( puVar23 + lVar22 + 0x67e0 );
   lVar21 = ( lVar22 >> 3 ) + -1;
   *(Triangle**)( puVar23 + lVar22 + 0x67e0 ) = pTVar26;
   *(long*)( puVar23 + 0x67e8 ) = lVar19;
   if (1 < lVar21) {
      fVar33 = *(float*)( lVar19 + 0x50 );
      lVar22 = 1;
      lVar20 = 0;
      lVar27 = 0;
      do {
         fVar34 = *(float*)( *(long*)( puVar23 + lVar22 * 8 + 0x67e8 ) + 0x50 );
         lVar20 = lVar20 + 2;
         if (fVar33 <= fVar34) {
            if (( lVar21 <= lVar20 ) || ( lVar18 = lVar20 ),fVar33 < *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 ) || fVar33 == *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 )) break;
         }
 else {
            lVar18 = lVar22;
            if (( lVar20 < lVar21 ) && ( lVar18 = lVar20 ),fVar34 < *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 ) || fVar34 == *(float*)( *(long*)( puVar23 + lVar20 * 8 + 0x67e8 ) + 0x50 )) {
               lVar18 = lVar22;
            }

         }

         if (lVar27 == lVar18) break;
         *(long*)( puVar23 + lVar27 * 8 + 0x67e8 ) = *(long*)( puVar23 + lVar18 * 8 + 0x67e8 );
         lVar20 = lVar18 * 2;
         *(long*)( puVar23 + lVar18 * 8 + 0x67e8 ) = lVar19;
         lVar22 = lVar20 + 1;
         lVar27 = lVar18;
      }
 while ( lVar22 < lVar21 );
   }

   uVar31 = (int)uVar25 - 1;
   pTVar26 = *(Triangle**)( puVar23 + (ulong)uVar31 * 8 + 0x67e8 );
   *(uint*)( puVar23 + 0x67e0 ) = uVar31;
   if (pTVar26[0x5e] == (Triangle)0x0) {
      if (fVar39 <= *(float*)( pTVar26 + 0x50 )) goto LAB_00102f67;
      if (pTVar24 != (Triangle*)0x0) {
         *(undefined8*)pTVar24 = *(undefined8*)( puVar23 + 0x67c8 );
         *(Triangle**)( puVar23 + 0x67c8 ) = pTVar24;
      }

      uVar35 = *(undefined8*)( pTVar26 + 0x38 );
      uVar38 = *(undefined8*)( pTVar26 + 0x30 );
      *(float*)( puVar23 + -0x14f8 ) = fVar39;
      *(undefined8*)( puVar23 + -0x1510 ) = 0x103177;
      auVar58 = SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::TriangleConvexSupport>>(uVar38, uVar35, puVar2, param_1, *(undefined8*)( puVar23 + -0x14c8 ), puVar23 + -0x146c);
      fVar39 = *(float*)( pTVar26 + 0x30 );
      fVar33 = *(float*)( pTVar26 + 0x34 );
      *(long*)( puVar23 + -0x1508 ) = auVar58._0_8_;
      *(undefined8*)( puVar23 + -0x1500 ) = extraout_XMM0_Qb_00;
      fVar34 = *(float*)( pTVar26 + 0x38 );
      *(long*)( puVar23 + -0x1500 ) = auVar58._8_8_;
      fVar37 = auVar58._8_4_ * fVar34 + (float)( ( ulong ) * (undefined8*)( puVar23 + -0x1508 ) >> 0x20 ) * fVar33 + (float)*(undefined8*)( puVar23 + -0x1508 ) * fVar39 + 0.0;
      if (fVar37 < 0.0) goto LAB_001029a0;
      fVar32 = ( fVar37 * fVar37 ) / ( fVar34 * fVar34 + fVar33 * fVar33 + fVar39 * fVar39 + 0.0 );
      pTVar24 = pTVar26;
      if (fVar32 - *(float*)( pTVar26 + 0x50 ) < *(float*)( pTVar26 + 0x50 ) * *(float*)( puVar23 + -0x14b4 )) goto LAB_00102f67;
      if (*(float*)( puVar23 + -0x14f8 ) <= fVar32) {
         fVar32 = *(float*)( puVar23 + -0x14f8 );
      }

      if (( *(float*)( puVar23 + -0x1500 ) - *(float*)( pTVar26 + 0x48 ) ) * fVar34 + ( *(float*)( puVar23 + -0x1504 ) - *(float*)( pTVar26 + 0x44 ) ) * fVar33 + ( *(float*)( puVar23 + -0x1508 ) - *(float*)( pTVar26 + 0x40 ) ) * fVar39 + 0.0 <= 0.0) goto LAB_00102f67;
      *(float*)( puVar23 + -0x14f8 ) = fVar37;
      *(float*)( puVar23 + -0x1508 ) = fVar32;
      *(undefined4*)( puVar23 + -0x1468 ) = 0;
      *(undefined8*)( puVar23 + -0x1510 ) = 0x10329e;
      cVar15 = EPAConvexHullBuilder::AddPoint((EPAConvexHullBuilder*)( puVar23 + 0x7b8 ), pTVar26, *(int*)( puVar23 + -0x146c ), fVar32, (StaticArray*)( puVar23 + -0x1468 ));
      if (cVar15 == '\0') goto LAB_00102f67;
      plVar17 = (long*)( puVar23 + -0x1460 );
      fVar39 = *(float*)( puVar23 + -0x1508 );
      plVar4 = plVar17 + *(uint*)( puVar23 + -0x1468 );
      if (( ulong ) * (uint*)( puVar23 + -0x1468 ) != 0) {
         uVar6 = *(undefined4*)( puVar23 + -0x14f8 );
         do {
            lVar22 = *plVar17;
            if ((float)( ( ulong ) * (undefined8*)( lVar22 + 0x40 ) >> 0x20 ) * *(float*)( lVar22 + 0x34 ) + (float)*(undefined8*)( lVar22 + 0x40 ) * *(float*)( lVar22 + 0x30 ) + 0.0 + *(float*)( lVar22 + 0x38 ) * *(float*)( lVar22 + 0x48 ) < 0.0) {
               uVar35 = *(undefined8*)( pTVar26 + 0x38 );
               *(undefined8*)( puVar23 + -0x1508 ) = *(undefined8*)( pTVar26 + 0x30 );
               *(undefined8*)( puVar23 + -0x1500 ) = uVar35;
               pfVar29 = (float*)**(undefined8**)( puVar23 + -0x14c8 );
               fVar39 = (float)*(undefined8*)( puVar23 + -0x1508 );
               fVar33 = (float)( ( ulong ) * (undefined8*)( puVar23 + -0x1508 ) >> 0x20 );
               fVar34 = (float)*(undefined8*)( puVar23 + -0x1500 );
               fVar37 = SQRT(fVar33 * fVar33 + fVar39 * fVar39 + 0.0 + fVar34 * fVar34);
               if (fVar37 <= 0.0) {
                  fVar32 = pfVar29[2] * fVar34 + pfVar29[1] * fVar33 + *pfVar29 * fVar39 + 0.0;
                  fVar37 = pfVar29[6] * fVar34 + pfVar29[5] * fVar33 + pfVar29[4] * fVar39 + 0.0;
                  fVar39 = fVar34 * pfVar29[10] + pfVar29[9] * fVar33 + fVar39 * pfVar29[8] + 0.0;
                  if (fVar32 <= fVar37) {
                     if (fVar37 <= fVar39) goto LAB_00103696;
                     uVar35 = *(undefined8*)( pfVar29 + 4 );
                     uVar38 = *(undefined8*)( pfVar29 + 6 );
                  }
 else if (fVar32 <= fVar39) {
                     LAB_00103696:uVar35 = *(undefined8*)( pfVar29 + 8 );
                     uVar38 = *(undefined8*)( pfVar29 + 10 );
                  }
 else {
                     uVar35 = *(undefined8*)pfVar29;
                     uVar38 = *(undefined8*)( pfVar29 + 2 );
                  }

                  *(undefined8*)( puVar23 + -0x14f8 ) = uVar35;
                  *(undefined8*)( puVar23 + -0x14f0 ) = uVar38;
               }
 else {
                  fVar37 = *(float*)( *(undefined8**)( puVar23 + -0x14c8 ) + 1 ) / fVar37;
                  fVar50 = pfVar29[2] * fVar34 + pfVar29[1] * fVar33 + *pfVar29 * fVar39 + 0.0;
                  fVar32 = pfVar29[6] * fVar34 + pfVar29[5] * fVar33 + pfVar29[4] * fVar39 + 0.0;
                  fVar39 = fVar34 * pfVar29[10] + fVar39 * pfVar29[8] + 0.0 + fVar33 * pfVar29[9];
                  if (fVar50 <= fVar32) {
                     if (fVar32 <= fVar39) goto LAB_001035ea;
                     fVar39 = pfVar29[4];
                     fVar33 = pfVar29[5];
                     fVar34 = pfVar29[6];
                     fVar32 = pfVar29[7];
                  }
 else if (fVar50 <= fVar39) {
                     LAB_001035ea:fVar39 = pfVar29[8];
                     fVar33 = pfVar29[9];
                     fVar34 = pfVar29[10];
                     fVar32 = pfVar29[0xb];
                  }
 else {
                     fVar39 = *pfVar29;
                     fVar33 = pfVar29[1];
                     fVar34 = pfVar29[2];
                     fVar32 = pfVar29[3];
                  }

                  *(float*)( puVar23 + -0x14f8 ) = fVar37 * *(float*)( puVar23 + -0x1508 ) + fVar39;
                  *(float*)( puVar23 + -0x14f4 ) = fVar37 * *(float*)( puVar23 + -0x1504 ) + fVar33;
                  *(float*)( puVar23 + -0x14f0 ) = fVar37 * *(float*)( puVar23 + -0x1500 ) + fVar34;
                  *(float*)( puVar23 + -0x14ec ) = fVar37 * *(float*)( puVar23 + -0x14fc ) + fVar32;
               }

               fVar37 = 0.0 - *(float*)( pTVar26 + 0x30 );
               fVar32 = 0.0 - *(float*)( pTVar26 + 0x34 );
               fVar50 = 0.0 - *(float*)( pTVar26 + 0x38 );
               uVar35 = *(undefined8*)( param_1 + 0x20 );
               uVar38 = *(undefined8*)( param_1 + 0x10 );
               fVar34 = *(float*)( param_1 + 0x28 );
               fVar33 = *(float*)( param_1 + 0x18 );
               fVar39 = *(float*)( *(undefined8**)( param_1 + 0x40 ) + 1 );
               pcVar10 = *(code**)( *(long*)**(undefined8**)( param_1 + 0x40 ) + 0x10 );
               fVar40 = *(float*)param_1 * fVar37 + *(float*)( param_1 + 4 ) * fVar32 + fVar50 * *(float*)( param_1 + 8 );
               *(float*)( puVar23 + -0x1508 ) = fVar40;
               *(float*)( puVar23 + -0x1504 ) = (float)uVar38 * fVar37 + (float)( (ulong)uVar38 >> 0x20 ) * fVar32 + fVar50 * fVar33;
               *(float*)( puVar23 + -0x1500 ) = (float)uVar35 * fVar37 + (float)( (ulong)uVar35 >> 0x20 ) * fVar32 + fVar50 * fVar34;
               *(float*)( puVar23 + -0x14fc ) = fVar37 * 0.0 + fVar32 * 0.0 + fVar50 * 0.0;
               fVar33 = SQRT(*(float*)( puVar23 + -0x1504 ) * *(float*)( puVar23 + -0x1504 ) + fVar40 * fVar40 + 0.0 + *(float*)( puVar23 + -0x1500 ) * *(float*)( puVar23 + -0x1500 ));
               if (fVar33 <= 0.0) {
                  *(undefined4*)( puVar23 + -0x14e8 ) = uVar6;
                  *(undefined8*)( puVar23 + -0x1510 ) = 0x1035d1;
                  auVar58 = ( *pcVar10 )(*(undefined8*)( puVar23 + -0x1508 ), *(undefined8*)( puVar23 + -0x1500 ));
                  fVar39 = *(float*)( puVar23 + -0x14e8 );
                  *(long*)( puVar23 + -0x1508 ) = auVar58._0_8_;
                  *(undefined8*)( puVar23 + -0x1500 ) = extraout_XMM0_Qb_02;
                  *(long*)( puVar23 + -0x1500 ) = auVar58._8_8_;
                  auVar41 = SUB1612(*(undefined1(*) [16])( puVar23 + -0x1508 ), 0);
               }
 else {
                  fVar39 = fVar39 / fVar33;
                  *(undefined4*)( puVar23 + -0x14c8 ) = uVar6;
                  for (int i = 0; i < 4; i++) {
                     *(float*)( puVar23 + ( 4*i + -5352 ) ) = *(float*)( puVar23 + ( 4*i + -5384 ) ) * fVar39;
                  }

                  *(undefined8*)( puVar23 + -0x1510 ) = 0x1034f2;
                  auVar58 = ( *pcVar10 )(*(undefined8*)( puVar23 + -0x1508 ), *(undefined8*)( puVar23 + -0x1500 ));
                  fVar39 = *(float*)( puVar23 + -0x14c8 );
                  *(long*)( puVar23 + -0x1508 ) = auVar58._0_8_;
                  *(undefined8*)( puVar23 + -0x1500 ) = extraout_XMM0_Qb_01;
                  *(long*)( puVar23 + -0x1500 ) = auVar58._8_8_;
                  auVar41._0_4_ = *(float*)( puVar23 + -0x1508 ) + *(float*)( puVar23 + -0x14e8 );
                  auVar41._4_4_ = *(float*)( puVar23 + -0x1504 ) + *(float*)( puVar23 + -0x14e4 );
                  auVar41._8_4_ = *(float*)( puVar23 + -0x1500 ) + *(float*)( puVar23 + -0x14e0 );
               }

               fVar33 = auVar41._0_4_;
               fVar34 = auVar41._4_4_;
               fVar37 = auVar41._8_4_;
               bVar16 = (float)( ( uint )(( ( fVar33 * *(float*)( param_1 + 8 ) + fVar34 * *(float*)( param_1 + 0x18 ) + fVar37 * *(float*)( param_1 + 0x28 ) + *(float*)( param_1 + 0x38 ) ) - *(float*)( puVar23 + -0x14f0 ) ) * *(float*)( pTVar26 + 0x38 ) + ( ( fVar33 * *(float*)( param_1 + 4 ) + fVar34 * *(float*)( param_1 + 0x14 ) + fVar37 * *(float*)( param_1 + 0x24 ) + *(float*)( param_1 + 0x34 ) ) - *(float*)( puVar23 + -0x14f4 ) ) * *(float*)( pTVar26 + 0x34 ) + *(float*)( pTVar26 + 0x30 ) * ( ( fVar33 * *(float*)param_1 + fVar34 * *(float*)( param_1 + 0x10 ) + fVar37 * *(float*)( param_1 + 0x20 ) + *(float*)( param_1 + 0x30 ) ) - *(float*)( puVar23 + -0x14f8 ) ) + 0.0) ^ __LC4 ) < fVar39;
               goto LAB_00102f70;
            }

            plVar17 = plVar17 + 1;
         }
 while ( plVar4 != plVar17 );
      }

   }
 else {
      *(undefined8*)pTVar26 = *(undefined8*)( puVar23 + 0x67c8 );
      *(Triangle**)( puVar23 + 0x67c8 ) = pTVar26;
      pTVar26 = pTVar24;
   }

   uVar31 = *(uint*)( puVar23 + 0x67e0 );
   uVar25 = (ulong)uVar31;
   pTVar24 = pTVar26;
   if (( uVar31 == 0 ) || ( 0x7f < *(uint*)( puVar23 + -0x1058 ) )) goto LAB_00102f67;
   pTVar26 = *(Triangle**)( puVar23 + 0x67e8 );
   uVar28 = (ulong)uVar31;
   goto LAB_00102e74;
   LAB_00102f67:pTVar26 = pTVar24;
   bVar16 = false;
   if (pTVar26 != (Triangle*)0x0) {
      LAB_00102f70:pfVar29 = *(float**)( puVar23 + -0x14b0 );
      fVar33 = ( *(float*)( pTVar26 + 0x48 ) * *(float*)( pTVar26 + 0x38 ) + (float)( ( ulong ) * (undefined8*)( pTVar26 + 0x30 ) >> 0x20 ) * *(float*)( pTVar26 + 0x44 ) + (float)*(undefined8*)( pTVar26 + 0x30 ) * *(float*)( pTVar26 + 0x40 ) + 0.0 ) / ( *(float*)( pTVar26 + 0x38 ) * *(float*)( pTVar26 + 0x38 ) + *(float*)( pTVar26 + 0x30 ) * *(float*)( pTVar26 + 0x30 ) + 0.0 + *(float*)( pTVar26 + 0x34 ) * *(float*)( pTVar26 + 0x34 ) );
      fVar39 = *(float*)( pTVar26 + 0x3c );
      fVar34 = fVar33 * *(float*)( pTVar26 + 0x30 );
      fVar37 = fVar33 * *(float*)( pTVar26 + 0x34 );
      fVar32 = fVar33 * *(float*)( pTVar26 + 0x38 );
      *pfVar29 = fVar34;
      pfVar29[1] = fVar37;
      pfVar29[2] = fVar32;
      pfVar29[3] = fVar33 * fVar39;
      if (_LC1 < fVar32 * fVar32 + fVar34 * fVar34 + 0.0 + fVar37 * fVar37) {
         if (bVar16) {
            *pfVar29 = 0.0 - fVar34;
            pfVar29[1] = 0.0 - fVar37;
            pfVar29[2] = 0.0 - fVar32;
            pfVar29[3] = 0.0 - fVar33 * fVar39;
         }

         fVar39 = *(float*)( pTVar26 + 0x54 );
         fVar33 = *(float*)( pTVar26 + 0x58 );
         lVar19 = ( (long)*(int*)( pTVar26 + 0xc ) + 0x81 ) * 0x10;
         lVar21 = ( (long)*(int*)( pTVar26 + 0x1c ) + 0x81 ) * 0x10;
         lVar22 = ( (long)*(int*)( pTVar26 + 0x2c ) + 0x81 ) * 0x10;
         pfVar29 = (float*)( puVar23 + lVar19 + -0x1058 );
         fVar34 = *pfVar29;
         fVar37 = pfVar29[1];
         fVar32 = pfVar29[2];
         fVar50 = pfVar29[3];
         pfVar29 = (float*)( puVar23 + lVar21 + -0x1058 );
         fVar40 = *pfVar29;
         fVar46 = pfVar29[1];
         fVar48 = pfVar29[2];
         fVar52 = pfVar29[3];
         pfVar29 = (float*)( puVar23 + lVar22 + -0x1058 );
         pfVar5 = (float*)( puVar23 + lVar19 + -0x858 );
         fVar53 = *pfVar5;
         fVar54 = pfVar5[1];
         fVar55 = pfVar5[2];
         fVar56 = pfVar5[3];
         pfVar5 = (float*)( puVar23 + lVar21 + -0x858 );
         fVar57 = *pfVar5;
         fVar12 = pfVar5[1];
         fVar13 = pfVar5[2];
         fVar14 = pfVar5[3];
         pfVar5 = (float*)( puVar23 + lVar22 + -0x858 );
         if (pTVar26[0x5c] == (Triangle)0x0) {
            fVar40 = ( fVar34 - fVar40 ) * fVar39 + fVar40 + ( *pfVar29 - fVar40 ) * fVar33;
            fVar46 = ( fVar37 - fVar46 ) * fVar39 + fVar46 + ( pfVar29[1] - fVar46 ) * fVar33;
            fVar48 = ( fVar32 - fVar48 ) * fVar39 + fVar48 + ( pfVar29[2] - fVar48 ) * fVar33;
            fVar50 = ( fVar50 - fVar52 ) * fVar39 + fVar52 + ( pfVar29[3] - fVar52 ) * fVar33;
            fVar34 = ( fVar53 - fVar57 ) * fVar39 + fVar57 + ( *pfVar5 - fVar57 ) * fVar33;
            fVar37 = ( fVar54 - fVar12 ) * fVar39 + fVar12 + ( pfVar5[1] - fVar12 ) * fVar33;
            fVar32 = ( fVar55 - fVar13 ) * fVar39 + fVar13 + ( pfVar5[2] - fVar13 ) * fVar33;
            fVar39 = ( fVar56 - fVar14 ) * fVar39 + fVar14 + ( pfVar5[3] - fVar14 ) * fVar33;
         }
 else {
            fVar40 = ( *pfVar29 - fVar34 ) * fVar33 + ( fVar40 - fVar34 ) * fVar39 + fVar34;
            fVar46 = ( pfVar29[1] - fVar37 ) * fVar33 + ( fVar46 - fVar37 ) * fVar39 + fVar37;
            fVar48 = ( pfVar29[2] - fVar32 ) * fVar33 + ( fVar48 - fVar32 ) * fVar39 + fVar32;
            fVar50 = ( pfVar29[3] - fVar50 ) * fVar33 + ( fVar52 - fVar50 ) * fVar39 + fVar50;
            fVar34 = ( *pfVar5 - fVar53 ) * fVar33 + ( fVar57 - fVar53 ) * fVar39 + fVar53;
            fVar37 = ( pfVar5[1] - fVar54 ) * fVar33 + ( fVar12 - fVar54 ) * fVar39 + fVar54;
            fVar32 = ( pfVar5[2] - fVar55 ) * fVar33 + ( fVar13 - fVar55 ) * fVar39 + fVar55;
            fVar39 = ( pfVar5[3] - fVar56 ) * fVar33 + ( fVar14 - fVar56 ) * fVar39 + fVar56;
         }

         pfVar29 = *(float**)( puVar23 + -0x14a8 );
         *pfVar29 = fVar40;
         pfVar29[1] = fVar46;
         pfVar29[2] = fVar48;
         pfVar29[3] = fVar50;
         pfVar29 = *(float**)( puVar23 + -0x14a0 );
         *pfVar29 = fVar34;
         pfVar29[1] = fVar37;
         pfVar29[2] = fVar32;
         pfVar29[3] = fVar39;
         bVar16 = true;
         goto LAB_001029a2;
      }

   }

   LAB_001029a0:bVar16 = false;
   LAB_001029a2:if (*(long*)( puVar23 + 0x6ff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar16;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar23 + -0x1510 ) = 0x1035be;
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */undefined1[16];JPH::ClosestPoint::GetClosestPointOnTriangle<false>(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, int *param_7) {
   int iVar1;
   float fVar2;
   float fVar4;
   undefined1 auVar3[16];
   float fVar5;
   float fVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   float fVar10;
   float fVar11;
   uint uVar12;
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
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   undefined1 auVar23[16];
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   undefined1 local_98[8];
   undefined8 uStack_90;
   float local_88;
   float fStack_84;
   float local_78;
   float fStack_74;
   fVar19 = (float)( (ulong)param_6 >> 0x20 );
   uStack_90._0_4_ = (float)param_6;
   fVar15 = (float)( (ulong)param_4 >> 0x20 );
   fVar11 = (float)param_4;
   fVar6 = (float)( (ulong)param_2 >> 0x20 );
   fVar4 = (float)param_2;
   local_98._0_4_ = (undefined4)param_5;
   local_98._4_4_ = ( undefined4 )((ulong)param_5 >> 0x20);
   local_88 = (float)param_1;
   fStack_84 = (float)( (ulong)param_1 >> 0x20 );
   local_78 = (float)param_3;
   fStack_74 = (float)( (ulong)param_3 >> 0x20 );
   fVar14 = (float)local_98._0_4_ - local_78;
   fVar16 = (float)local_98._4_4_ - fStack_74;
   fVar17 = (float)uStack_90 - fVar11;
   fVar2 = ( (float)uStack_90 - fVar4 ) * ( (float)uStack_90 - fVar4 ) + ( (float)local_98._0_4_ - local_88 ) * ( (float)local_98._0_4_ - local_88 ) + 0.0 + ( (float)local_98._4_4_ - fStack_84 ) * ( (float)local_98._4_4_ - fStack_84 );
   fVar18 = fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
   iVar1 = -(uint)(fVar18 < fVar2);
   uVar7 = iVar1 >> 0x1f;
   uVar8 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
   uVar9 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
   uVar12 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
   fVar2 = (float)( local_98._0_4_ & uVar7 | ~uVar7 & (uint)local_88 );
   fVar32 = (float)( local_98._4_4_ & uVar8 | ~uVar8 & (uint)fStack_84 );
   fVar33 = (float)( (uint)(float)uStack_90 & uVar9 | ~uVar9 & (uint)fVar4 );
   fVar5 = (float)( (uint)fVar19 & uVar12 | ~uVar12 & (uint)fVar6 );
   fVar28 = local_78 - fVar2;
   fVar30 = fStack_74 - fVar32;
   fVar31 = fVar11 - fVar33;
   fVar29 = (float)( uVar7 & (uint)local_88 | ~uVar7 & local_98._0_4_ );
   fVar22 = (float)( uVar8 & (uint)fStack_84 | ~uVar8 & local_98._4_4_ );
   fVar10 = (float)( uVar9 & (uint)fVar4 | ~uVar9 & (uint)(float)uStack_90 );
   fVar13 = (float)( uVar12 & (uint)fVar6 | ~uVar12 & (uint)fVar19 );
   fVar20 = fVar29 - fVar2;
   fVar24 = fVar22 - fVar32;
   fVar26 = fVar10 - fVar33;
   fVar21 = fVar24 * fVar28 - fVar30 * fVar20;
   fVar25 = fVar26 * fVar30 - fVar31 * fVar24;
   fVar27 = fVar20 * fVar31 - fVar28 * fVar26;
   fVar34 = fVar21 * fVar21 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
   if (fVar34 < _LC13) {
      fVar22 = (float)local_98._4_4_ * (float)local_98._4_4_ + (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 + (float)uStack_90 * (float)uStack_90;
      fVar29 = fVar4 * fVar4 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0;
      if (fVar29 < fVar22) {
         iVar1 = 1;
         local_98._0_4_ = local_88;
         local_98._4_4_ = fStack_84;
         uStack_90._0_4_ = fVar4;
         uStack_90._4_4_ = fVar6;
      }
 else {
         iVar1 = 4;
         uStack_90._4_4_ = fVar19;
         fVar29 = fVar22;
      }

      fVar22 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
      if (fVar22 < fVar29) {
         iVar1 = 2;
         local_98._0_4_ = local_78;
         local_98._4_4_ = fStack_74;
         uStack_90._0_4_ = fVar11;
         uStack_90._4_4_ = fVar15;
         fVar29 = fVar22;
      }

      fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
      if (_LC2 < fVar22) {
         fVar22 = (float)( ( uint )(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ __LC4 ) / fVar22;
         if (fVar22 < 0.0) {
            fVar10 = 0.0;
         }
 else {
            fVar10 = _LC3;
            if (fVar22 <= _LC3) {
               fVar10 = fVar22;
            }

         }

         fVar2 = fVar10 * fVar20 + fVar2;
         fVar32 = fVar10 * fVar24 + fVar32;
         fVar33 = fVar10 * fVar26 + fVar33;
         fVar22 = fVar33 * fVar33 + fVar32 * fVar32 + fVar2 * fVar2 + 0.0;
         if (fVar22 < fVar29) {
            iVar1 = 5;
            local_98._0_4_ = fVar2;
            local_98._4_4_ = fVar32;
            uStack_90._0_4_ = fVar33;
            uStack_90._4_4_ = fVar10 * ( fVar13 - fVar5 ) + fVar5;
            fVar29 = fVar22;
         }

      }

      if (_LC2 < fVar18) {
         fVar18 = (float)( ( uint )(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^ __LC4 ) / fVar18;
         if (fVar18 < 0.0) {
            fVar2 = 0.0;
         }
 else {
            fVar2 = _LC3;
            if (fVar18 <= _LC3) {
               fVar2 = fVar18;
            }

         }

         fVar18 = fVar2 * fVar14 + local_78;
         fVar32 = fVar2 * fVar16 + fStack_74;
         fVar33 = fVar2 * fVar17 + fVar11;
         fVar5 = fVar33 * fVar33 + fVar18 * fVar18 + 0.0 + fVar32 * fVar32;
         if (fVar5 < fVar29) {
            iVar1 = 6;
            local_98._0_4_ = fVar18;
            local_98._4_4_ = fVar32;
            uStack_90._0_4_ = fVar33;
            uStack_90._4_4_ = fVar2 * ( fVar19 - fVar15 ) + fVar15;
            fVar29 = fVar5;
         }

      }

      local_78 = local_78 - local_88;
      fStack_74 = fStack_74 - fStack_84;
      fVar11 = fVar11 - fVar4;
      fVar2 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
      if (_LC2 < fVar2) {
         fVar2 = (float)( ( uint )(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^ __LC4 ) / fVar2;
         if (fVar2 < 0.0) {
            fVar18 = 0.0;
         }
 else {
            fVar18 = _LC3;
            if (fVar2 <= _LC3) {
               fVar18 = fVar2;
            }

         }

         local_88 = fVar18 * local_78 + local_88;
         fStack_84 = fVar18 * fStack_74 + fStack_84;
         fVar4 = fVar18 * fVar11 + fVar4;
         if (fVar4 * fVar4 + local_88 * local_88 + 0.0 + fStack_84 * fStack_84 < fVar29) {
            iVar1 = 3;
            local_98._0_4_ = local_88;
            local_98._4_4_ = fStack_84;
            uStack_90._0_4_ = fVar4;
            uStack_90._4_4_ = fVar18 * ( fVar15 - fVar6 ) + fVar6;
         }

      }

      *param_7 = iVar1;
      return _local_98;
   }

   fVar4 = ( 0.0 - fVar33 ) * fVar31 + fVar30 * ( 0.0 - fVar32 ) + ( 0.0 - fVar2 ) * fVar28 + 0.0;
   fVar18 = ( 0.0 - fVar33 ) * fVar26 + ( 0.0 - fVar32 ) * fVar24 + ( 0.0 - fVar2 ) * fVar20 + 0.0;
   if (( fVar4 <= 0.0 ) && ( fVar18 <= 0.0 )) {
      local_98._4_4_ = fVar32;
      local_98._0_4_ = fVar2;
      uStack_90._0_4_ = fVar33;
      uStack_90._4_4_ = fVar5;
      *param_7 = ( -(uint)(iVar1 == 0) & 0xfffffffd ) + 4;
      return _local_98;
   }

   fVar14 = ( 0.0 - fVar11 ) * fVar31 + fVar30 * ( 0.0 - fStack_74 ) + ( 0.0 - local_78 ) * fVar28 + 0.0;
   fVar6 = ( 0.0 - fVar11 ) * fVar26 + ( 0.0 - fStack_74 ) * fVar24 + ( 0.0 - local_78 ) * fVar20 + 0.0;
   if (fVar14 < 0.0) {
      if (( fVar4 * fVar6 <= fVar18 * fVar14 ) && ( 0.0 <= fVar4 )) goto LAB_00103e8c;
   }
 else {
      if (fVar6 <= fVar14) {
         *param_7 = 2;
         uStack_90 = param_4;
         local_98 = (undefined1[8])param_3;
         return _local_98;
      }

      if (( ( fVar4 * fVar6 <= fVar18 * fVar14 ) && ( 0.0 <= fVar4 ) ) && ( fVar14 == 0.0 )) {
         LAB_00103e8c:*param_7 = ( -(uint)(iVar1 == 0) & 0xfffffffd ) + 6;
         fVar4 = fVar4 / ( fVar4 - fVar14 );
         local_98._4_4_ = fVar4 * fVar30 + fVar32;
         local_98._0_4_ = fVar4 * fVar28 + fVar2;
         uStack_90._0_4_ = fVar4 * fVar31 + fVar33;
         uStack_90._4_4_ = fVar4 * ( fVar15 - fVar5 ) + fVar5;
         return _local_98;
      }

   }

   fVar17 = fVar31 * ( 0.0 - fVar10 ) + fVar30 * ( 0.0 - fVar22 ) + fVar28 * ( 0.0 - fVar29 ) + 0.0;
   fVar16 = ( 0.0 - fVar10 ) * fVar26 + ( 0.0 - fVar22 ) * fVar24 + fVar20 * ( 0.0 - fVar29 ) + 0.0;
   if (fVar16 < 0.0) {
      if (( fVar18 * fVar17 <= fVar4 * fVar16 ) && ( 0.0 <= fVar18 )) goto LAB_0010404a;
   }
 else {
      if (fVar17 <= fVar16) {
         local_98._4_4_ = fVar22;
         local_98._0_4_ = fVar29;
         uStack_90._4_4_ = fVar13;
         uStack_90._0_4_ = fVar10;
         *param_7 = ( -(uint)(iVar1 == 0) & 3 ) + 1;
         return _local_98;
      }

      if (( ( fVar18 * fVar17 <= fVar4 * fVar16 ) && ( 0.0 <= fVar18 ) ) && ( fVar16 == 0.0 )) {
         LAB_0010404a:*param_7 = 5;
         fVar18 = fVar18 / ( fVar18 - fVar16 );
         local_98._4_4_ = fVar18 * fVar24 + fVar32;
         local_98._0_4_ = fVar18 * fVar20 + fVar2;
         uStack_90._0_4_ = fVar18 * fVar26 + fVar33;
         uStack_90._4_4_ = fVar18 * ( fVar13 - fVar5 ) + fVar5;
         return _local_98;
      }

   }

   if (( ( fVar6 * fVar17 < fVar14 * fVar16 ) || ( fVar6 = fVar6 < 0.0 ) ) || ( fVar17 - fVar16 < 0.0 )) {
      *param_7 = 7;
      fVar34 = fVar34 * _LC12;
      fVar2 = ( fVar33 + fVar11 + fVar10 ) * fVar21 + fVar27 * ( fVar32 + fStack_74 + fVar22 ) + fVar25 * ( fVar2 + local_78 + fVar29 ) + 0.0;
      auVar23._0_4_ = fVar25 * fVar2;
      auVar23._4_4_ = fVar27 * fVar2;
      auVar23._8_4_ = fVar21 * fVar2;
      auVar23._12_4_ = fVar21 * fVar2;
      auVar3._4_4_ = fVar34;
      auVar3._0_4_ = fVar34;
      auVar3._8_4_ = fVar34;
      auVar3._12_4_ = fVar34;
      _local_98 = divps(auVar23, auVar3);
   }
 else {
      fVar6 = fVar6 / ( ( fVar17 - fVar16 ) + fVar6 );
      *param_7 = ( -(uint)(iVar1 == 0) & 3 ) + 3;
      local_98._4_4_ = ( fVar22 - fStack_74 ) * fVar6 + fStack_74;
      local_98._0_4_ = ( fVar29 - local_78 ) * fVar6 + local_78;
      uStack_90._0_4_ = ( fVar10 - fVar11 ) * fVar6 + fVar11;
      uStack_90._4_4_ = ( fVar13 - fVar15 ) * fVar6 + fVar15;
   }

   return _local_98;
}
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTetrahedron<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3, unsigned int&) */undefined1[16];JPH::ClosestPoint::GetClosestPointOnTetrahedron<false>(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint *param_9) {
   float fVar1;
   uint uVar2;
   long in_FS_OFFSET;
   float fVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   int local_88;
   int local_80;
   uint local_28;
   uint local_24;
   long local_20;
   auVar5 = ZEXT816(0);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0xf;
   auVar4 = OriginOutsideOfTetrahedronPlanes();
   local_88 = auVar4._0_4_;
   local_80 = auVar4._8_4_;
   fVar1 = _LC10;
   if (local_88 != 0) {
      auVar5 = GetClosestPointOnTriangle<false>(param_1, param_2, param_3, param_4, param_5, param_6, &local_28);
      fVar1 = auVar5._8_4_ * auVar5._8_4_ + auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
   }

   if (auVar4._0_8_ >> 0x20 != 0) {
      auVar6 = GetClosestPointOnTriangle<false>(param_1, param_2, param_5, param_6, param_7, param_8, &local_24);
      fVar3 = auVar6._8_4_ * auVar6._8_4_ + auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0;
      if (fVar3 < fVar1) {
         local_28 = local_24 * 2 & 0xc | local_24 & 1;
         fVar1 = fVar3;
         auVar5 = auVar6;
      }

   }

   if (local_80 != 0) {
      auVar6 = GetClosestPointOnTriangle<false>(param_1, param_2, param_3, param_4, param_7, param_8, &local_24);
      fVar3 = auVar6._8_4_ * auVar6._8_4_ + auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0;
      if (fVar3 < fVar1) {
         local_28 = local_24 * 2 & 8 | local_24 & 3;
         fVar1 = fVar3;
         auVar5 = auVar6;
      }

   }

   uVar2 = local_28;
   if (( auVar4._8_8_ >> 0x20 != 0 ) && ( auVar4 = GetClosestPointOnTriangle<false>(param_3, param_4, param_5, param_6, param_7, param_8, &local_24) ),uVar2 = local_28,auVar4._8_4_ * auVar4._8_4_ + auVar4._4_4_ * auVar4._4_4_ + auVar4._0_4_ * auVar4._0_4_ + 0.0 < fVar1) {
      uVar2 = local_24 * 2;
      auVar5 = auVar4;
   }

   *param_9 = uVar2;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return auVar5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool JPH::GJKClosestPoint::CastShape<JPH::ConvexShape::Support,
   JPH::TriangleConvexSupport>(JPH::Mat44 const&, JPH::Vec3, float, JPH::ConvexShape::Support
   const&, JPH::TriangleConvexSupport const&, float, float, float&, JPH::Vec3&, JPH::Vec3&,
   JPH::Vec3&) */bool JPH::GJKClosestPoint::CastShape<JPH::ConvexShape::Support,JPH::TriangleConvexSupport>(undefined8 param_1_00, undefined8 param_2, float param_3, float param_4, float param_5, undefined1 (*param_1)[12], float *param_7, long *param_8, float *param_9, float *param_10, float *param_11, float *param_12, float *param_13) {
   float *pfVar1;
   int iVar2;
   uint uVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined1 auVar9[16];
   undefined1(*pauVar10)[12];
   int iVar11;
   bool bVar12;
   int iVar13;
   undefined1(*pauVar14)[12];
   long lVar15;
   undefined8 *puVar16;
   int iVar17;
   long in_FS_OFFSET;
   float fVar18;
   float extraout_XMM0_Da_00;
   float fVar20;
   float fVar19;
   float extraout_XMM0_Da;
   float fVar22;
   float fVar23;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   undefined1 auVar21[16];
   undefined8 extraout_XMM1_Qa;
   undefined8 extraout_XMM1_Qa_00;
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
   undefined1 auVar46[12];
   undefined1 local_178[8];
   undefined8 uStack_170;
   float local_168;
   float fStack_164;
   float fStack_160;
   float fStack_15c;
   float local_158;
   float fStack_154;
   float fStack_150;
   float fStack_14c;
   float local_148;
   float fStack_144;
   float fStack_140;
   float fStack_13c;
   float local_138;
   float fStack_134;
   float fStack_130;
   float fStack_12c;
   float local_c8;
   float local_c0;
   float local_bc;
   undefined1 local_b8[8];
   float fStack_b0;
   float fStack_ac;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   float local_4c;
   float local_48;
   float local_44;
   long local_40;
   local_bc = param_3 * param_3;
   bVar12 = false;
   fVar40 = *param_7;
   fVar41 = param_7[1];
   fVar42 = param_7[2];
   fVar43 = param_7[3];
   fVar29 = param_4 + param_5;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar44 = param_7[4];
   fVar45 = param_7[5];
   fVar30 = param_7[6];
   fVar20 = param_7[7];
   fVar24 = param_7[8];
   fVar27 = param_7[9];
   fVar4 = param_7[10];
   fVar5 = param_7[0xb];
   lVar15 = *param_8;
   uVar7 = *(undefined8*)( param_7 + 0xc );
   uVar8 = *(undefined8*)( param_7 + 0xe );
   *(undefined4*)param_1[0x10] = 0;
   auVar46 = ( **(code**)( lVar15 + 0x10 ) )(CONCAT44(fVar44 * 0.0 + fVar45 * 0.0 + fVar30 * 0.0, fVar40 * 0.0 + fVar41 * 0.0 + fVar42 * 0.0), fVar24 * 0.0 + fVar27 * 0.0 + fVar4 * 0.0, param_8);
   fVar18 = auVar46._8_4_;
   fVar36 = 0.0;
   fVar37 = 0.0;
   fVar38 = 0.0;
   fStack_14c = 0.0;
   local_178._0_4_ = auVar46._0_4_;
   local_178._4_4_ = auVar46._4_4_;
   _local_b8 = (undefined1[16])0x0;
   local_c8 = 3.4028235e+38;
   local_c0 = 0.0;
   local_138 = (float)uVar7;
   fStack_134 = (float)( (ulong)uVar7 >> 0x20 );
   fStack_130 = (float)uVar8;
   fStack_12c = (float)( (ulong)uVar8 >> 0x20 );
   local_168 = fVar40 * (float)local_178._0_4_ + (float)local_178._4_4_ * fVar44 + fVar18 * fVar24 + local_138 + ( 0.0 - param_9[8] );
   fStack_164 = fVar41 * (float)local_178._0_4_ + (float)local_178._4_4_ * fVar45 + fVar18 * fVar27 + fStack_134 + ( 0.0 - param_9[9] );
   fStack_15c = fVar43 * (float)local_178._0_4_ + (float)local_178._4_4_ * fVar20 + fVar18 * fVar5 + fStack_12c + ( 0.0 - param_9[0xb] );
   fStack_160 = fVar42 * (float)local_178._0_4_ + (float)local_178._4_4_ * fVar30 + fVar18 * fVar4 + fStack_130 + ( 0.0 - param_9[10] );
   do {
      fVar18 = 0.0 - local_168;
      fVar22 = 0.0 - fStack_164;
      fVar25 = 0.0 - fStack_160;
      local_178._4_4_ = fVar18 * fVar44 + fVar22 * fVar45 + fVar25 * fVar30;
      local_178._0_4_ = fVar18 * fVar40 + fVar22 * fVar41 + fVar25 * fVar42;
      uStack_170._0_4_ = fVar18 * fVar24 + fVar22 * fVar27 + fVar25 * fVar4;
      uStack_170._4_4_ = fVar18 * 0.0 + fVar22 * 0.0 + fVar25 * 0.0;
      auVar46 = ( **(code**)( *param_8 + 0x10 ) )(local_178, uStack_170, param_8);
      fVar18 = auVar46._8_4_;
      local_178._0_4_ = auVar46._0_4_;
      local_178._4_4_ = auVar46._4_4_;
      fVar32 = (float)local_178._0_4_ * fVar40 + (float)local_178._4_4_ * fVar44 + fVar18 * fVar24 + local_138;
      fVar33 = (float)local_178._0_4_ * fVar41 + (float)local_178._4_4_ * fVar45 + fVar18 * fVar27 + fStack_134;
      fVar34 = (float)local_178._0_4_ * fVar42 + (float)local_178._4_4_ * fVar30 + fVar18 * fVar4 + fStack_130;
      fVar35 = (float)local_178._0_4_ * fVar43 + (float)local_178._4_4_ * fVar20 + fVar18 * fVar5 + fStack_12c;
      fVar25 = param_9[2] * fStack_160 + param_9[1] * fStack_164 + *param_9 * local_168 + 0.0;
      fVar22 = param_9[6] * fStack_160 + param_9[5] * fStack_164 + param_9[4] * local_168 + 0.0;
      fVar18 = fStack_160 * param_9[10] + fStack_164 * param_9[9] + local_168 * param_9[8] + 0.0;
      if (fVar25 <= fVar22) {
         if (fVar22 <= fVar18) goto LAB_001048b8;
         fVar18 = param_9[4];
         fVar22 = param_9[5];
         fVar25 = param_9[6];
         fVar28 = param_9[7];
      }
 else if (fVar25 <= fVar18) {
         LAB_001048b8:fVar18 = param_9[8];
         fVar22 = param_9[9];
         fVar25 = param_9[10];
         fVar28 = param_9[0xb];
      }
 else {
         fVar18 = *param_9;
         fVar22 = param_9[1];
         fVar25 = param_9[2];
         fVar28 = param_9[3];
      }

      fVar39 = fStack_160 * fStack_160 + fStack_164 * fStack_164 + local_168 * local_168 + 0.0;
      fVar19 = ( ( fVar38 - ( fVar25 - fVar34 ) ) * fStack_160 + ( fVar37 - ( fVar22 - fVar33 ) ) * fStack_164 + ( fVar36 - ( fVar18 - fVar32 ) ) * local_168 + 0.0 ) - SQRT(fVar39) * fVar29;
      if (0.0 < fVar19) {
         fVar31 = (float)( (ulong)param_1_00 >> 0x20 );
         fVar23 = fStack_160 * (float)param_2 + fStack_164 * fVar31 + local_168 * (float)param_1_00 + 0.0;
         if (fVar23 < 0.0) {
            fVar19 = local_c0 - fVar19 / fVar23;
            if (local_c0 == fVar19) {
               iVar17 = *(int*)param_1[0x10];
               fVar31 = fVar39;
               local_c0 = fVar19;
               LAB_001049c4:if (0 < iVar17) {
                  LAB_001049cd:pauVar14 = param_1;
                  do {
                     fVar40 = *(float*)( pauVar14[0xb] + 4 );
                     fVar41 = *(float*)( pauVar14[0xb] + 8 );
                     fVar42 = *(float*)( pauVar14[5] + 8 );
                     fVar43 = *(float*)pauVar14[6];
                     fVar44 = *(float*)( pauVar14[6] + 4 );
                     pauVar10 = pauVar14 + 1;
                     *(float*)*pauVar14 = fVar36 - ( *(float*)( pauVar14[10] + 8 ) - *(float*)( pauVar14[5] + 4 ) );
                     *(float*)( *pauVar14 + 4 ) = fVar37 - ( *(float*)pauVar14[0xb] - fVar42 );
                     *(float*)( *pauVar14 + 8 ) = fVar38 - ( fVar40 - fVar43 );
                     *(float*)pauVar14[1] = fStack_14c - ( fVar41 - fVar44 );
                     pauVar14 = (undefined1(*) [12])( *pauVar10 + 4 );
                  }
 while ( (undefined1(*) [12])( (long)iVar17 * 0x10 + (long)param_1 ) != (undefined1(*) [12])( *pauVar10 + 4 ) );
                  auVar21 = (undefined1[16])0x0;
                  if (_LC71 < fVar31) {
                     fVar31 = SQRT(fVar31);
                     auVar9._4_4_ = fStack_164;
                     auVar9._0_4_ = local_168;
                     auVar9._8_4_ = fStack_160;
                     auVar9._12_4_ = fStack_15c;
                     auVar21._4_4_ = fVar31;
                     auVar21._0_4_ = fVar31;
                     auVar21._8_4_ = fVar31;
                     auVar21._12_4_ = fVar31;
                     auVar21 = divps(auVar9, auVar21);
                  }

                  fVar43 = param_4 * auVar21._0_4_;
                  fVar44 = param_4 * auVar21._4_4_;
                  fVar45 = param_4 * auVar21._8_4_;
                  param_4 = param_4 * auVar21._12_4_;
                  fVar40 = param_5 * auVar21._0_4_;
                  fVar41 = param_5 * auVar21._4_4_;
                  fVar42 = param_5 * auVar21._8_4_;
                  param_5 = param_5 * auVar21._12_4_;
                  if (iVar17 == 2) {
                     local_158 = (float)*(undefined8*)( param_1[1] + 4 );
                     fStack_154 = (float)( ( ulong ) * (undefined8*)( param_1[1] + 4 ) >> 0x20 );
                     fStack_150 = (float)*(undefined8*)param_1[2];
                     local_178._0_4_ = ( undefined4 ) * (undefined8*)*param_1;
                     local_178._4_4_ = ( undefined4 )(( ulong ) * (undefined8*)*param_1 >> 0x20);
                     uStack_170._0_4_ = (float)*(undefined8*)( *param_1 + 8 );
                     fVar20 = local_158 - (float)local_178._0_4_;
                     fVar24 = fStack_154 - (float)local_178._4_4_;
                     fVar27 = fStack_150 - (float)uStack_170;
                     fVar30 = fVar27 * fVar27 + fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
                     if (fVar30 < _LC2) {
                        if (fStack_150 * fStack_150 + fStack_154 * fStack_154 + local_158 * local_158 + 0.0 <= (float)uStack_170 * (float)uStack_170 + (float)local_178._0_4_ * (float)local_178._0_4_ + 0.0 + (float)local_178._4_4_ * (float)local_178._4_4_) {
                           fVar20 = 0.0;
                           fVar30 = _LC3;
                        }
 else {
                           fVar30 = 0.0;
                           fVar20 = _LC3;
                        }

                     }
 else {
                        fVar30 = (float)( ( uint )(fVar27 * (float)uStack_170 + fVar24 * (float)local_178._4_4_ + fVar20 * (float)local_178._0_4_ + 0.0) ^ __LC4 ) / fVar30;
                        fVar20 = _LC3 - fVar30;
                     }

                     fVar40 = *(float*)( param_1[10] + 8 ) * fVar20 + *(float*)param_1[0xc] * fVar30 + fVar40;
                     fVar41 = *(float*)param_1[0xb] * fVar20 + *(float*)( param_1[0xc] + 4 ) * fVar30 + fVar41;
                     fVar42 = *(float*)( param_1[0xb] + 4 ) * fVar20 + *(float*)( param_1[0xc] + 8 ) * fVar30 + fVar42;
                     param_5 = *(float*)( param_1[0xb] + 8 ) * fVar20 + *(float*)param_1[0xd] * fVar30 + param_5;
                     *param_12 = fVar40;
                     param_12[1] = fVar41;
                     param_12[2] = fVar42;
                     param_12[3] = param_5;
                     if (local_c0 <= 0.0) {
                        fVar40 = ( fVar20 * *(float*)( param_1[5] + 4 ) + fVar30 * *(float*)( param_1[6] + 8 ) ) - fVar43;
                        fVar41 = ( fVar20 * *(float*)( param_1[5] + 8 ) + fVar30 * *(float*)param_1[7] ) - fVar44;
                        fVar42 = ( fVar20 * *(float*)param_1[6] + fVar30 * *(float*)( param_1[7] + 4 ) ) - fVar45;
                        param_5 = ( fVar20 * *(float*)( param_1[6] + 4 ) + fVar30 * *(float*)( param_1[7] + 8 ) ) - param_4;
                     }

                     *param_11 = fVar40;
                     param_11[1] = fVar41;
                     param_11[2] = fVar42;
                     param_11[3] = param_5;
                  }
 else if (iVar17 < 3) {
                     fVar40 = fVar40 + *(float*)( param_1[10] + 8 );
                     fVar41 = fVar41 + *(float*)param_1[0xb];
                     fVar42 = fVar42 + *(float*)( param_1[0xb] + 4 );
                     param_5 = param_5 + *(float*)( param_1[0xb] + 8 );
                     *param_12 = fVar40;
                     param_12[1] = fVar41;
                     param_12[2] = fVar42;
                     param_12[3] = param_5;
                     if (local_c0 <= 0.0) {
                        fVar40 = *(float*)( param_1[5] + 4 ) - fVar43;
                        fVar41 = *(float*)( param_1[5] + 8 ) - fVar44;
                        fVar42 = *(float*)param_1[6] - fVar45;
                        param_5 = *(float*)( param_1[6] + 4 ) - param_4;
                     }

                     *param_11 = fVar40;
                     param_11[1] = fVar41;
                     param_11[2] = fVar42;
                     param_11[3] = param_5;
                  }
 else if (iVar17 - 3U < 2) {
                     ClosestPoint::GetBaryCentricCoordinates(*(undefined8*)*param_1, *(undefined8*)( *param_1 + 8 ), *(undefined8*)( param_1[1] + 4 ), *(undefined8*)param_1[2], *(undefined8*)( param_1[2] + 8 ), *(undefined8*)( param_1[3] + 4 ), &local_4c, &local_48, &local_44);
                     fVar40 = *(float*)( param_1[10] + 8 ) * local_4c + *(float*)param_1[0xc] * local_48 + *(float*)( param_1[0xd] + 4 ) * local_44 + fVar40;
                     fVar41 = *(float*)param_1[0xb] * local_4c + *(float*)( param_1[0xc] + 4 ) * local_48 + *(float*)( param_1[0xd] + 8 ) * local_44 + fVar41;
                     fVar42 = *(float*)( param_1[0xb] + 4 ) * local_4c + *(float*)( param_1[0xc] + 8 ) * local_48 + *(float*)param_1[0xe] * local_44 + fVar42;
                     param_5 = *(float*)( param_1[0xb] + 8 ) * local_4c + *(float*)param_1[0xd] * local_48 + *(float*)( param_1[0xe] + 4 ) * local_44 + param_5;
                     *param_12 = fVar40;
                     param_12[1] = fVar41;
                     param_12[2] = fVar42;
                     param_12[3] = param_5;
                     if (local_c0 <= 0.0) {
                        fVar40 = ( local_4c * *(float*)( param_1[5] + 4 ) + local_48 * *(float*)( param_1[6] + 8 ) + local_44 * *(float*)param_1[8] ) - fVar43;
                        fVar41 = ( local_4c * *(float*)( param_1[5] + 8 ) + local_48 * *(float*)param_1[7] + local_44 * *(float*)( param_1[8] + 4 ) ) - fVar44;
                        fVar42 = ( local_4c * *(float*)param_1[6] + local_48 * *(float*)( param_1[7] + 4 ) + local_44 * *(float*)( param_1[8] + 8 ) ) - fVar45;
                        param_5 = ( local_4c * *(float*)( param_1[6] + 4 ) + local_48 * *(float*)( param_1[7] + 8 ) + local_44 * *(float*)param_1[9] ) - param_4;
                     }

                     *param_11 = fVar40;
                     param_11[1] = fVar41;
                     param_11[2] = fVar42;
                     param_11[3] = param_5;
                  }

               }

               if (fVar29 <= 0.0) {
                  fStack_160 = fStack_b0;
                  fStack_15c = fStack_ac;
                  local_168 = (float)local_b8._0_4_;
                  fStack_164 = (float)local_b8._4_4_;
               }

               *param_13 = 0.0 - local_168;
               param_13[1] = 0.0 - fStack_164;
               param_13[2] = 0.0 - fStack_160;
               param_13[3] = 0.0 - fStack_15c;
               *param_10 = local_c0;
               bVar12 = true;
               LAB_00104b54:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return bVar12;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            if (fVar19 < *param_10) {
               local_c8 = 3.4028235e+38;
               fStack_14c = (float)( (ulong)param_2 >> 0x20 );
               fVar36 = fVar19 * (float)param_1_00;
               fVar37 = fVar19 * fVar31;
               fVar38 = fVar19 * (float)param_2;
               fStack_14c = fVar19 * fStack_14c;
               bVar12 = true;
               local_bc = ( param_3 + fVar29 ) * ( param_3 + fVar29 );
               local_c0 = fVar19;
               goto LAB_0010475d;
            }

         }

         bVar12 = false;
         goto LAB_00104b54;
      }

      LAB_0010475d:iVar2 = *(int*)param_1[0x10];
      lVar15 = (long)iVar2;
      iVar17 = iVar2 + 1;
      pfVar1 = (float*)( lVar15 * 0x10 + 0x40 + (long)param_1 );
      *pfVar1 = fVar32;
      pfVar1[1] = fVar33;
      pfVar1[2] = fVar34;
      pfVar1[3] = fVar35;
      pfVar1 = (float*)( lVar15 * 0x10 + 0x80 + (long)param_1 );
      *pfVar1 = fVar18;
      pfVar1[1] = fVar22;
      pfVar1[2] = fVar25;
      pfVar1[3] = fVar28;
      *(int*)param_1[0x10] = iVar17;
      if (iVar17 < 1) {
         LAB_001049bb:fVar31 = fVar39;
         if (!bVar12) goto LAB_001049c4;
         *(float*)( param_1[5] + 4 ) = fVar32;
         *(float*)( param_1[5] + 8 ) = fVar33;
         *(float*)param_1[6] = fVar34;
         *(float*)( param_1[6] + 4 ) = fVar35;
         bVar12 = false;
         local_168 = fVar36 - fVar18;
         fStack_164 = fVar37 - fVar22;
         fStack_15c = fStack_14c - fVar28;
         *(float*)( param_1[10] + 8 ) = fVar18;
         *(float*)param_1[0xb] = fVar22;
         *(float*)( param_1[0xb] + 4 ) = fVar25;
         *(float*)( param_1[0xb] + 8 ) = fVar28;
         *(undefined4*)param_1[0x10] = 1;
         local_c8 = 3.4028235e+38;
         fStack_160 = fVar38 - fVar25;
      }
 else {
         pauVar14 = param_1;
         do {
            fVar19 = *(float*)( pauVar14[0xb] + 4 );
            fVar31 = *(float*)( pauVar14[0xb] + 8 );
            fVar23 = *(float*)( pauVar14[5] + 8 );
            fVar26 = *(float*)pauVar14[6];
            fVar6 = *(float*)( pauVar14[6] + 4 );
            pauVar10 = pauVar14 + 1;
            *(float*)*pauVar14 = fVar36 - ( *(float*)( pauVar14[10] + 8 ) - *(float*)( pauVar14[5] + 4 ) );
            *(float*)( *pauVar14 + 4 ) = fVar37 - ( *(float*)pauVar14[0xb] - fVar23 );
            *(float*)( *pauVar14 + 8 ) = fVar38 - ( fVar19 - fVar26 );
            *(float*)pauVar14[1] = fStack_14c - ( fVar31 - fVar6 );
            pauVar14 = (undefined1(*) [12])( *pauVar10 + 4 );
         }
 while ( (undefined1(*) [12])( *pauVar10 + 4 ) != (undefined1(*) [12])( (long)param_1 + lVar15 * 0x10 + 0x10 ) );
         if (iVar17 == 3) {
            ClosestPoint::GetClosestPointOnTriangle<false>(*(undefined8*)*param_1, *(undefined8*)( *param_1 + 8 ), *(undefined8*)( param_1[1] + 4 ), *(undefined8*)param_1[2], *(undefined8*)( param_1[2] + 8 ), *(undefined8*)( param_1[3] + 4 ), &local_44);
            fVar19 = (float)extraout_XMM1_Qa_00;
            uStack_170 = extraout_XMM1_Qa_00;
            local_178._0_4_ = extraout_XMM0_Da_00;
            local_178._4_4_ = extraout_XMM0_Db_00;
         }
 else if (iVar17 < 4) {
            if (iVar17 == 1) {
               local_44 = 1.4013e-45;
               uStack_170 = *(undefined8*)( *param_1 + 8 );
               local_178._0_4_ = *(undefined4*)*param_1;
               local_178._4_4_ = *(undefined4*)( *param_1 + 4 );
               fVar19 = *(float*)( *param_1 + 8 );
            }
 else {
               uVar7 = *(undefined8*)*(undefined1(*) [16])( param_1[1] + 4 );
               local_148 = (float)*(undefined8*)*param_1;
               fStack_144 = (float)( ( ulong ) * (undefined8*)*param_1 >> 0x20 );
               fStack_140 = (float)*(undefined8*)( *param_1 + 8 );
               fStack_13c = (float)( ( ulong ) * (undefined8*)( *param_1 + 8 ) >> 0x20 );
               local_88 = (float)uVar7;
               fStack_84 = (float)( (ulong)uVar7 >> 0x20 );
               fStack_80 = (float)*(undefined8*)param_1[2];
               uStack_170._4_4_ = fStack_13c;
               _local_178 = *param_1;
               fVar19 = local_88 - local_148;
               fVar23 = fStack_84 - fStack_144;
               fVar26 = fStack_80 - fStack_140;
               fVar31 = fVar26 * fVar26 + fVar23 * fVar23 + fVar19 * fVar19 + 0.0;
               if (fVar31 < _LC2) {
                  if (fStack_140 * fStack_140 + local_148 * local_148 + 0.0 + fStack_144 * fStack_144 < fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0) goto LAB_00104890;
                  LAB_00104ff1:local_44 = 2.8026e-45;
                  _local_178 = *(undefined1(*) [16])( param_1[1] + 4 );
               }
 else {
                  fVar31 = (float)( ( uint )(fVar26 * fStack_140 + fVar23 * fStack_144 + fVar19 * local_148 + 0.0) ^ __LC4 ) / fVar31;
                  if (0.0 < fVar31) {
                     fVar19 = _LC3 - fVar31;
                     if (fVar19 <= 0.0) goto LAB_00104ff1;
                     local_44 = 4.2039e-45;
                     fStack_7c = (float)( ( ulong ) * (undefined8*)param_1[2] >> 0x20 );
                     local_178._4_4_ = fVar31 * fStack_84 + fVar19 * fStack_144;
                     local_178._0_4_ = fVar31 * local_88 + fVar19 * local_148;
                     uStack_170._0_4_ = fVar31 * fStack_80 + fVar19 * fStack_140;
                     uStack_170._4_4_ = fVar31 * fStack_7c + fVar19 * fStack_13c;
                  }
 else {
                     LAB_00104890:local_44 = 1.4013e-45;
                  }

               }

               fVar19 = (float)uStack_170;
            }

         }
 else {
            if (iVar17 != 4) goto LAB_001049bb;
            ClosestPoint::GetClosestPointOnTetrahedron<false>(*(undefined8*)*param_1, *(undefined8*)( *param_1 + 8 ), *(undefined8*)( param_1[1] + 4 ), *(undefined8*)param_1[2], *(undefined8*)( param_1[2] + 8 ), *(undefined8*)( param_1[3] + 4 ), *(undefined8*)param_1[4], *(undefined8*)( param_1[4] + 8 ), &local_44);
            fVar19 = (float)extraout_XMM1_Qa;
            uStack_170 = extraout_XMM1_Qa;
            local_178._0_4_ = extraout_XMM0_Da;
            local_178._4_4_ = extraout_XMM0_Db;
         }

         fVar31 = fVar19 * fVar19 + (float)local_178._4_4_ * (float)local_178._4_4_ + (float)local_178._0_4_ * (float)local_178._0_4_ + 0.0;
         if (local_c8 <= fVar31) goto LAB_001049bb;
         fStack_15c = (float)( (ulong)uStack_170 >> 0x20 );
         local_168 = (float)local_178._0_4_;
         fStack_164 = (float)local_178._4_4_;
         fStack_160 = fVar19;
         if (local_44 == 2.10195e-44) goto LAB_001049cd;
         iVar13 = 0;
         puVar16 = (undefined8*)( param_1[5] + 4 );
         uVar3 = (uint)local_44 & 1;
         iVar11 = 0;
         while (true) {
            iVar17 = iVar11;
            if (uVar3 != 0) {
               uVar7 = puVar16[1];
               iVar17 = iVar11 + 1;
               *(undefined8*)( (long)param_1 + (long)iVar11 * 0x10 + 0x40 ) = *puVar16;
               *(undefined8*)( (long)param_1 + (long)iVar11 * 0x10 + 0x48 ) = uVar7;
               uVar7 = puVar16[9];
               *(undefined8*)( (long)param_1 + (long)iVar11 * 0x10 + 0x80 ) = puVar16[8];
               *(undefined8*)( (long)param_1 + (long)iVar11 * 0x10 + 0x88 ) = uVar7;
            }

            if (iVar2 == iVar13) break;
            puVar16 = puVar16 + 2;
            iVar13 = iVar13 + 1;
            uVar3 = 1 << ( (byte)iVar13 & 0x1f ) & (uint)local_44;
            iVar11 = iVar17;
         }
;
         *(int*)param_1[0x10] = iVar17;
         if (fVar31 <= local_bc) goto LAB_001049c4;
         local_b8._4_4_ = local_178._4_4_;
         local_b8._0_4_ = local_178._0_4_;
         fStack_b0 = fVar19;
         fStack_ac = fStack_15c;
         local_c8 = fVar31;
      }

   }
 while ( true );
}
/* JPH::CastConvexVsTriangles::CastConvexVsTriangles(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Vec3, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */void JPH::CastConvexVsTriangles::_GLOBAL__sub_I_CastConvexVsTriangles(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC75;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::EPAConvexHullBuilder::Triangle::Triangle(int, int, int, JPH::Vec3 const*) */void JPH::EPAConvexHullBuilder::Triangle::Triangle(Triangle *this, int param_1, int param_2, int param_3, Vec3 *param_4) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

