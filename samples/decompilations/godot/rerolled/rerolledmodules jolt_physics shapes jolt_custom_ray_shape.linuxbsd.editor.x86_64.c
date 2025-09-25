/* (anonymous namespace)::JoltCustomRayShapeSupport::GetSupport(JPH::Vec3) const */undefined1[16](anonymous_namespace) {
   undefined1 local_18[16];
   if (0.0 < param_2) {
      local_18._4_4_ = *(undefined4*)( param_3 + 8 );
      local_18._0_4_ = *(undefined4*)( param_3 + 8 );
      local_18._8_8_ = 0;
      local_18 = local_18 << 0x40;
      return local_18;
   }

   return (undefined1[16])0x0;
}
/* (anonymous namespace)::JoltCustomRayShapeSupport::GetConvexRadius() const */undefined8(anonymous_namespace) {
   return 0;
}
/* (anonymous namespace)::construct_ray() */void (anonymous_namespace)::construct_ray(void) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)( *JPH::Allocate )(0x40);
   *(undefined2*)( puVar1 + 3 ) = 0x1700;
   *(undefined4*)( puVar1 + 1 ) = 0;
   puVar1[2] = 0;
   puVar1[4] = 0;
   *(undefined4*)( puVar1 + 5 ) = 0x447a0000;
   *puVar1 = &PTR__JoltCustomRayShape_00101958;
   puVar1[6] = 0;
   *(undefined4*)( puVar1 + 7 ) = 0;
   *(undefined1*)( (long)puVar1 + 0x3c ) = 0;
   return;
}
/* (anonymous namespace)::collide_noop(JPH::Shape const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator
   const&, JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) */void (anonymous_namespace)::collide_noop(void) {
   return;
}
/* (anonymous namespace)::cast_noop(JPH::ShapeCast const&, JPH::ShapeCastSettings const&, JPH::Shape
   const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */void (anonymous_namespace)::cast_noop(void) {
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltCustomRayShape::GetLocalBounds() const */void JoltCustomRayShape::GetLocalBounds(void) {
   undefined4 uVar1;
   undefined8 uVar2;
   long in_RSI;
   undefined8 *in_RDI;
   uVar2 = _UNK_00101aa8;
   uVar1 = *(undefined4*)( in_RSI + 0x38 );
   *in_RDI = __LC4;
   in_RDI[1] = uVar2;
   in_RDI[2] = _LC6;
   in_RDI[3] = CONCAT44(uVar1, uVar1);
   return;
}
/* JoltCustomRayShape::GetInnerRadius() const */undefined4 JoltCustomRayShape::GetInnerRadius(void) {
   return (undefined4)_LC6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltCustomRayShape::GetMassProperties() const */JoltCustomRayShape * __thiscall JoltCustomRayShape::GetMassProperties(JoltCustomRayShape *this){
   uint uVar1;
   undefined8 uVar2;
   uVar1 = _LC8;
   *(undefined4*)this = 0x3f800000;
   *(undefined1(*) [16])( this + 0x10 ) = ZEXT416(uVar1);
   uVar2 = _UNK_00101ac8;
   *(undefined8*)( this + 0x20 ) = __LC9;
   *(undefined8*)( this + 0x28 ) = uVar2;
   uVar2 = _UNK_00101ad8;
   *(undefined8*)( this + 0x30 ) = __LC10;
   *(undefined8*)( this + 0x38 ) = uVar2;
   uVar2 = _UNK_00101ae8;
   *(undefined8*)( this + 0x40 ) = __LC11;
   *(undefined8*)( this + 0x48 ) = uVar2;
   return this;
}
/* JoltCustomRayShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */undefined8 *JoltCustomRayShape::GetSupportFunction(undefined8 param_1, float param_2, long param_3, undefined8 param_4, undefined8 *param_5) {
   float fVar1;
   fVar1 = *(float*)( param_3 + 0x38 );
   *param_5 = &PTR__JoltCustomRayShapeSupport_001018b0;
   *(float*)( param_5 + 1 ) = param_2 * fVar1;
   return param_5;
}
/* (anonymous namespace)::JoltCustomRayShapeSupport::~JoltCustomRayShapeSupport() */void JoltCustomRayShapeSupport::~JoltCustomRayShapeSupport(JoltCustomRayShapeSupport *this) {
   return;
}
/* (anonymous namespace)::JoltCustomRayShapeSupport::~JoltCustomRayShapeSupport() */void JoltCustomRayShapeSupport::~JoltCustomRayShapeSupport(JoltCustomRayShapeSupport *this) {
   operator_delete(this, 0x10);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* (anonymous namespace)::collide_ray_vs_shape(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */void (anonymous_namespace)(undefined8 param_1_00, uint param_2_00, undefined8 param_3, undefined8 param_4, _anonymous_namespace_ *this, long *param_1, float *param_2, float *param_8, undefined4 *param_9, long param_10, long param_11, long *param_12) {
   float *pfVar1;
   byte bVar2;
   undefined4 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar7;
   float fVar8;
   undefined1 auVar6[12];
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
   undefined1 auVar42[12];
   float local_658;
   float local_648;
   float fStack_644;
   float fStack_640;
   undefined1 local_58b;
   undefined2 local_58a;
   undefined **local_588;
   undefined4 local_580;
   undefined **local_578;
   undefined4 local_570;
   undefined8 local_568;
   undefined8 local_560;
   uint local_558;
   char local_554;
   float local_548;
   float fStack_544;
   float fStack_540;
   float fStack_53c;
   float local_538;
   float fStack_534;
   float fStack_530;
   float fStack_52c;
   float local_528[36];
   undefined1 local_498[8];
   float fStack_490;
   float fStack_48c;
   undefined1 local_488[8];
   float fStack_480;
   float fStack_47c;
   undefined8 local_478;
   undefined8 uStack_470;
   undefined4 local_468;
   undefined4 local_258[134];
   long local_40;
   local_648 = (float)param_1_00;
   fStack_644 = (float)( (ulong)param_1_00 >> 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x19] == (_anonymous_namespace_)0x17) {
      fVar33 = *(float*)( this + 0x38 );
      fVar5 = *param_2;
      fVar34 = param_2[1];
      fVar7 = param_2[2];
      fVar36 = param_2[3];
      fVar8 = param_2[4];
      fVar38 = param_2[5];
      fVar9 = param_2[6];
      fVar10 = param_2[7];
      fVar11 = param_2[8];
      fVar12 = param_2[9];
      fVar13 = param_2[10];
      fVar14 = param_2[0xb];
      pfVar1 = local_528 + 0x20;
      fVar15 = param_2[0xc];
      fVar16 = param_2[0xd];
      fVar17 = param_2[0xe];
      fVar18 = param_2[0xf];
      lVar4 = 0;
      fVar20 = *(float*)( param_11 + 0x20 ) + fVar33;
      _local_488 = ZEXT416(param_2_00) << 0x40;
      _local_498 = ZEXT416((uint)fStack_644) << 0x20;
      local_528[0x20] = local_648;
      for (int i = 0; i < 3; i++) {
         local_528[( i + 33 )] = 0;
      }

      local_478 = __LC11;
      uStack_470 = _UNK_00101ae8;
      do {
         fVar40 = *(float*)( (long)pfVar1 + lVar4 );
         fVar19 = *(float*)( (long)local_528 + lVar4 + 0x84 );
         fVar25 = *(float*)( (long)local_528 + lVar4 + 0x88 );
         fVar21 = *(float*)( local_498 + lVar4 + -4 );
         *(float*)( (long)local_528 + lVar4 ) = fVar21 * fVar15 + fVar40 * fVar5 + fVar19 * fVar8 + fVar25 * fVar11;
         *(float*)( (long)local_528 + lVar4 + 4 ) = fVar21 * fVar16 + fVar40 * fVar34 + fVar19 * fVar38 + fVar25 * fVar12;
         *(float*)( (long)local_528 + lVar4 + 8 ) = fVar21 * fVar17 + fVar40 * fVar7 + fVar19 * fVar9 + fVar25 * fVar13;
         *(float*)( (long)local_528 + lVar4 + 0xc ) = fVar21 * fVar18 + fVar40 * fVar36 + fVar19 * fVar10 + fVar25 * fVar14;
         lVar4 = lVar4 + 0x10;
      }
 while ( lVar4 != 0x40 );
      local_658 = (float)param_3;
      fVar5 = *param_8;
      fVar34 = param_8[1];
      fVar7 = param_8[2];
      fVar36 = param_8[3];
      fVar8 = param_8[8];
      fVar38 = param_8[9];
      fVar9 = param_8[10];
      fVar10 = param_8[0xb];
      fVar11 = param_8[0xc];
      fVar12 = param_8[0xd];
      fVar13 = param_8[0xe];
      fVar14 = param_8[0xf];
      fVar15 = param_8[4];
      fVar16 = param_8[5];
      fVar17 = param_8[6];
      fVar18 = param_8[7];
      local_528[0x20] = local_658;
      for (int i = 0; i < 3; i++) {
         local_528[( i + 33 )] = 0;
      }

      _local_488 = ZEXT416((uint)param_4) << 0x40;
      lVar4 = 0;
      _local_498 = ZEXT416(( uint )((ulong)param_3 >> 0x20)) << 0x20;
      do {
         fVar40 = *(float*)( (long)pfVar1 + lVar4 );
         fVar19 = *(float*)( (long)local_528 + lVar4 + 0x84 );
         fVar25 = *(float*)( (long)local_528 + lVar4 + 0x88 );
         fVar21 = *(float*)( local_498 + lVar4 + -4 );
         *(float*)( (long)local_528 + lVar4 + 0x40 ) = fVar21 * fVar11 + fVar40 * fVar5 + fVar19 * fVar15 + fVar25 * fVar8;
         *(float*)( (long)local_528 + lVar4 + 0x44 ) = fVar21 * fVar12 + fVar40 * fVar34 + fVar19 * fVar16 + fVar25 * fVar38;
         *(float*)( (long)local_528 + lVar4 + 0x48 ) = fVar21 * fVar13 + fVar40 * fVar7 + fVar19 * fVar17 + fVar25 * fVar9;
         *(float*)( (long)local_528 + lVar4 + 0x4c ) = fVar21 * fVar14 + fVar40 * fVar36 + fVar19 * fVar18 + fVar25 * fVar10;
         lVar4 = lVar4 + 0x10;
      }
 while ( lVar4 != 0x40 );
      local_58b = *(undefined1*)( param_11 + 0x24 );
      local_58a = 0;
      fVar34 = local_528[0x12] * local_528[0x1b];
      fVar36 = local_528[0x16] * local_528[0x1f];
      fVar38 = local_528[0x1a] * local_528[0x13];
      fVar40 = local_528[0x1e] * local_528[0x17];
      fVar14 = local_528[0x12] * local_528[0x19];
      fVar15 = local_528[0x16] * local_528[0x1d];
      fVar16 = local_528[0x1a] * local_528[0x11];
      fVar17 = local_528[0x1e] * local_528[0x15];
      fVar5 = local_528[0x11] * local_528[0x1b];
      fVar7 = local_528[0x15] * local_528[0x1f];
      fVar8 = local_528[0x19] * local_528[0x13];
      fVar9 = local_528[0x1d] * local_528[0x17];
      local_578 = &PTR__JoltQueryCollectorClosest_001018e0;
      local_560 = 0x3f800001ffffffff;
      local_588 = &PTR__ShapeFilter_00101880;
      local_570 = 0x3f800001;
      local_568 = 0;
      local_558 = 0xffffffff;
      local_554 = '\0';
      local_580 = 0xffffffff;
      fVar29 = local_528[0x10] * local_528[0x1a];
      fVar30 = local_528[0x14] * local_528[0x1e];
      fVar31 = local_528[0x18] * local_528[0x12];
      fVar32 = local_528[0x1c] * local_528[0x16];
      fVar25 = local_528[0x10] * local_528[0x1b];
      fVar26 = local_528[0x14] * local_528[0x1f];
      fVar27 = local_528[0x18] * local_528[0x13];
      fVar28 = local_528[0x1c] * local_528[0x17];
      fVar35 = local_528[0x10] * local_528[0x19];
      fVar37 = local_528[0x14] * local_528[0x1d];
      fVar39 = local_528[0x18] * local_528[0x11];
      fVar41 = local_528[0x1c] * local_528[0x15];
      fVar10 = ( ( ( fVar15 * local_528[0x1b] + ( fVar40 * local_528[0x19] - fVar36 * local_528[0x19] ) ) - fVar17 * local_528[0x1b] ) + fVar7 * local_528[0x1a] ) - local_528[0x1a] * fVar9;
      fVar11 = ( ( ( fVar14 * local_528[0x1f] + ( fVar38 * local_528[0x1d] - fVar34 * local_528[0x1d] ) ) - fVar16 * local_528[0x1f] ) + fVar5 * local_528[0x1e] ) - local_528[0x1e] * fVar8;
      fVar12 = ( ( ( fVar17 * local_528[0x13] + ( fVar36 * local_528[0x11] - fVar40 * local_528[0x11] ) ) - fVar15 * local_528[0x13] ) + fVar9 * local_528[0x12] ) - local_528[0x12] * fVar7;
      fVar13 = ( ( ( fVar16 * local_528[0x17] + ( fVar34 * local_528[0x15] - fVar38 * local_528[0x15] ) ) - fVar14 * local_528[0x17] ) + fVar8 * local_528[0x16] ) - local_528[0x16] * fVar5;
      fVar18 = _LC8 / ( local_528[0x18] * fVar12 + local_528[0x1c] * fVar13 + local_528[0x10] * fVar10 + local_528[0x14] * fVar11 );
      fVar10 = fVar10 * fVar18;
      fVar11 = fVar11 * fVar18;
      fVar12 = fVar12 * fVar18;
      fVar13 = fVar13 * fVar18;
      fVar21 = ( ( local_528[0x1b] * fVar30 + local_528[0x1a] * fVar28 + ( ( local_528[0x18] * fVar36 - local_528[0x18] * fVar40 ) - local_528[0x1a] * fVar26 ) ) - local_528[0x1b] * fVar32 ) * fVar18;
      fVar22 = ( ( local_528[0x1f] * fVar29 + local_528[0x1e] * fVar27 + ( ( local_528[0x1c] * fVar34 - local_528[0x1c] * fVar38 ) - local_528[0x1e] * fVar25 ) ) - local_528[0x1f] * fVar31 ) * fVar18;
      fVar23 = ( ( local_528[0x13] * fVar32 + local_528[0x12] * fVar26 + ( ( local_528[0x10] * fVar40 - local_528[0x10] * fVar36 ) - local_528[0x12] * fVar28 ) ) - local_528[0x13] * fVar30 ) * fVar18;
      fVar24 = ( ( local_528[0x17] * fVar31 + local_528[0x16] * fVar25 + ( ( local_528[0x14] * fVar38 - local_528[0x14] * fVar34 ) - local_528[0x16] * fVar27 ) ) - local_528[0x17] * fVar29 ) * fVar18;
      fVar34 = fVar20 * local_528[8];
      fVar36 = fVar20 * local_528[9];
      fVar38 = fVar20 * local_528[10];
      fVar40 = ( ( fVar26 * local_528[0x19] + ( local_528[0x1b] * fVar41 - ( local_528[0x1b] * fVar37 + ( fVar7 * local_528[0x18] - fVar9 * local_528[0x18] ) ) ) ) - fVar28 * local_528[0x19] ) * fVar18;
      fVar19 = ( ( fVar25 * local_528[0x1d] + ( local_528[0x1f] * fVar39 - ( local_528[0x1f] * fVar35 + ( fVar5 * local_528[0x1c] - fVar8 * local_528[0x1c] ) ) ) ) - fVar27 * local_528[0x1d] ) * fVar18;
      fVar9 = ( ( fVar28 * local_528[0x11] + ( local_528[0x13] * fVar37 - ( local_528[0x13] * fVar41 + ( fVar9 * local_528[0x10] - fVar7 * local_528[0x10] ) ) ) ) - fVar26 * local_528[0x11] ) * fVar18;
      fVar25 = ( ( fVar27 * local_528[0x15] + ( local_528[0x17] * fVar35 - ( local_528[0x17] * fVar39 + ( fVar8 * local_528[0x14] - fVar5 * local_528[0x14] ) ) ) ) - fVar25 * local_528[0x15] ) * fVar18;
      local_548 = ( ( ( ( fVar37 * local_528[0x1a] - ( local_528[0x18] * fVar15 - local_528[0x18] * fVar17 ) ) - local_528[0x1a] * fVar41 ) - fVar30 * local_528[0x19] ) + local_528[0x19] * fVar32 ) * fVar18 + local_528[0xc] * fVar10 + local_528[0xd] * fVar21 + local_528[0xe] * fVar40;
      fStack_544 = ( ( ( ( fVar35 * local_528[0x1e] - ( local_528[0x1c] * fVar14 - local_528[0x1c] * fVar16 ) ) - local_528[0x1e] * fVar39 ) - fVar29 * local_528[0x1d] ) + local_528[0x1d] * fVar31 ) * fVar18 + local_528[0xc] * fVar11 + local_528[0xd] * fVar22 + local_528[0xe] * fVar19;
      fStack_540 = ( ( ( ( fVar41 * local_528[0x12] - ( local_528[0x10] * fVar17 - local_528[0x10] * fVar15 ) ) - local_528[0x12] * fVar37 ) - fVar32 * local_528[0x11] ) + local_528[0x11] * fVar30 ) * fVar18 + local_528[0xc] * fVar12 + local_528[0xd] * fVar23 + local_528[0xe] * fVar9;
      fStack_53c = ( ( ( ( fVar39 * local_528[0x16] - ( local_528[0x14] * fVar16 - local_528[0x14] * fVar14 ) ) - local_528[0x16] * fVar35 ) - fVar31 * local_528[0x15] ) + local_528[0x15] * fVar29 ) * fVar18 + local_528[0xc] * fVar13 + local_528[0xd] * fVar24 + local_528[0xe] * fVar25;
      fVar5 = local_528[8] * fVar10 + local_528[9] * fVar21 + local_528[10] * fVar40;
      fVar7 = local_528[8] * fVar11 + local_528[9] * fVar22 + local_528[10] * fVar19;
      fVar8 = local_528[8] * fVar12 + local_528[9] * fVar23 + local_528[10] * fVar9;
      local_538 = fVar38 * fVar40 + fVar10 * fVar34 + fVar36 * fVar21;
      fStack_534 = fVar38 * fVar19 + fVar11 * fVar34 + fVar36 * fVar22;
      fStack_530 = fVar38 * fVar9 + fVar12 * fVar34 + fVar36 * fVar23;
      fStack_52c = fVar38 * fVar25 + fVar13 * fVar34 + fVar36 * fVar24;
      ( **(code**)( *param_1 + 0xa0 ) )(param_1, &local_548, &local_58b, param_10, &local_578, &local_588);
      if (local_554 != '\0') {
         fVar34 = fVar33 - fVar20 * local_560._4_4_;
         if ((float)( (uint)fVar34 ^ __LC17 ) < *(float*)( param_12 + 1 )) {
            fVar36 = local_560._4_4_ * local_538 + local_548;
            fVar38 = local_560._4_4_ * fStack_534 + fStack_544;
            fVar9 = local_560._4_4_ * fStack_530 + fStack_540;
            bVar2 = ( byte ) * (undefined4*)( param_10 + 4 );
            local_588 = (undefined**)CONCAT44(local_588._4_4_, ( uint )(0xffffffffL << ( 0x20 - bVar2 & 0x3f )) | local_558 >> ( bVar2 & 0x3f ));
            fVar10 = fVar33 * local_528[8] + local_528[0xc];
            fVar11 = fVar33 * local_528[9] + local_528[0xd];
            fVar12 = fVar33 * local_528[10] + local_528[0xe];
            fVar33 = fVar33 * local_528[0xb] + local_528[0xf];
            if (this[0x3c] == (_anonymous_namespace_)0x0) {
               auVar6._0_4_ = 0.0 - fVar5;
               auVar6._4_4_ = 0.0 - fVar7;
               auVar6._8_4_ = 0.0 - fVar8;
            }
 else {
               if (*(code**)( *param_1 + 0x58 ) == JoltCustomRayShape::GetSurfaceNormal) {
                  auVar42 = SUB1612(__LC13, 0);
                  local_648 = 0.0;
                  fStack_644 = 0.0;
                  fStack_640 = 1.0;
               }
 else {
                  auVar42 = ( **(code**)( *param_1 + 0x58 ) )(CONCAT44(fVar38, fVar36), CONCAT44(local_560._4_4_ * fStack_52c + fStack_53c, fVar9), param_1, &local_588);
                  fStack_640 = auVar42._8_4_;
                  local_648 = auVar42._0_4_;
                  fStack_644 = auVar42._4_4_;
               }

               auVar6 = auVar42;
               if (0.0 < fVar8 * fStack_640 + fVar7 * fStack_644 + fVar5 * local_648 + 0.0) {
                  auVar6._4_4_ = 0.0 - auVar42._4_4_;
                  auVar6._0_4_ = 0.0 - auVar42._0_4_;
                  auVar6._8_4_ = 0.0 - auVar42._8_4_;
               }

            }

            fVar14 = auVar6._0_4_;
            fVar15 = auVar6._4_4_;
            fVar16 = auVar6._8_4_;
            uVar3 = 0xffffffff;
            if (param_12[2] != 0) {
               uVar3 = *(undefined4*)( param_12[2] + 0x34 );
            }

            local_468 = 0;
            local_498._4_4_ = local_528[0x11] * fVar36 + fVar38 * local_528[0x15] + fVar9 * local_528[0x19] + local_528[0x1d];
            local_498._0_4_ = local_528[0x10] * fVar36 + fVar38 * local_528[0x14] + fVar9 * local_528[0x18] + local_528[0x1c];
            fStack_490 = local_528[0x12] * fVar36 + fVar38 * local_528[0x16] + fVar9 * local_528[0x1a] + local_528[0x1e];
            fStack_48c = local_528[0x13] * fVar36 + fVar38 * local_528[0x17] + fVar9 * local_528[0x1b] + local_528[0x1f];
            local_258[0] = 0;
            uStack_470 = CONCAT44(uVar3, local_558);
            local_488._4_4_ = 0.0 - ( fVar16 * local_528[0x19] + fVar14 * local_528[0x11] + fVar15 * local_528[0x15] );
            local_488._0_4_ = 0.0 - ( fVar16 * local_528[0x18] + fVar14 * local_528[0x10] + fVar15 * local_528[0x14] );
            fStack_480 = 0.0 - ( fVar16 * local_528[0x1a] + fVar14 * local_528[0x12] + fVar15 * local_528[0x16] );
            fStack_47c = 0.0 - ( fVar16 * local_528[0x1b] + fVar14 * local_528[0x13] + fVar15 * local_528[0x17] );
            local_478 = CONCAT44(*param_9, fVar34);
            local_528[0x20] = fVar10;
            local_528[0x21] = fVar11;
            local_528[0x22] = fVar12;
            local_528[0x23] = fVar33;
            if (*(char*)( param_11 + 1 ) == '\0') {
               if (*(code**)( *param_1 + 0x60 ) != JPH::Shape::GetSupportingFace) {
                  ( **(code**)( *param_1 + 0x60 ) )(CONCAT44(fVar7, fVar5), CONCAT44(local_528[8] * fVar13 + local_528[9] * fVar24 + local_528[10] * fVar25, fVar8), param_3, param_4, param_1, &local_588, param_8, local_258);
               }

            }

            ( **(code**)( *param_12 + 0x28 ) )(param_12, pfVar1);
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("collide_ray_vs_shape", "modules/jolt_physics/shapes/jolt_custom_ray_shape.cpp", 0x47, "Condition \"p_shape1->GetSubType() != JoltCustomShapeSubType::RAY\" is true.", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltCustomRayShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */void JoltCustomRayShape::Draw(undefined8 param_1_00, float param_2_00, JoltCustomRayShape *this, undefined8 param_1, float *param_2, undefined4 param_6, char param_7) {
   undefined4 uVar1;
   long *plVar2;
   uVar1 = param_6;
   if (param_7 != '\0') {
      plVar2 = *(long**)( this + 0x20 );
      if (*(long**)( this + 0x20 ) == (long*)0x0) {
         plVar2 = JPH::PhysicsMaterial::sDefault;
      }

      uVar1 = (undefined4)JPH::Color::sGrey;
      if (*(code**)( *plVar2 + 0x28 ) != JPH::PhysicsMaterial::GetDebugColor) {
         uVar1 = ( **(code**)( *plVar2 + 0x28 ) )(plVar2, param_6);
      }

   }

   param_2_00 = param_2_00 * *(float*)( this + 0x38 );
   JPH::DebugRenderer::DrawArrow(*(undefined8*)( param_2 + 0xc ), *(undefined8*)( param_2 + 0xe ), CONCAT44(param_2_00 * param_2[9] + param_2[1] * 0.0 + param_2[5] * 0.0 + param_2[0xd], param_2_00 * param_2[8] + *param_2 * 0.0 + param_2[4] * 0.0 + param_2[0xc]), CONCAT44(param_2_00 * param_2[0xb] + param_2[3] * 0.0 + param_2[7] * 0.0 + param_2[0xf], param_2_00 * param_2[10] + param_2[2] * 0.0 + param_2[6] * 0.0 + param_2[0xe]), _LC18, param_1, uVar1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltCustomRayShapeSettings::Create() const */void JoltCustomRayShapeSettings::Create(void) {
   long *plVar1;
   undefined4 uVar2;
   char cVar3;
   byte bVar4;
   long lVar5;
   undefined1 *__src;
   ulong __n;
   undefined8 *puVar6;
   long *plVar7;
   byte *pbVar8;
   long in_RSI;
   long *in_RDI;
   cVar3 = *(char*)( in_RSI + 0x38 );
   if (cVar3 == '\0') {
      puVar6 = (undefined8*)( *JPH::Allocate )(0x40);
      *(undefined4*)( puVar6 + 1 ) = 0;
      puVar6[2] = *(undefined8*)( in_RSI + 0x10 );
      *(undefined2*)( puVar6 + 3 ) = 0x1700;
      *puVar6 = std::__throw_length_error;
      lVar5 = *(long*)( in_RSI + 0x40 );
      puVar6[4] = lVar5;
      if (lVar5 != 0) {
         LOCK();
         *(int*)( lVar5 + 8 ) = *(int*)( lVar5 + 8 ) + 1;
         UNLOCK();
      }

      uVar2 = *(undefined4*)( in_RSI + 0x48 );
      *puVar6 = &PTR__JoltCustomRayShape_00101958;
      lVar5 = *(long*)( in_RSI + 0x50 );
      *(undefined4*)( puVar6 + 5 ) = uVar2;
      puVar6[6] = lVar5;
      if (lVar5 != 0) {
         LOCK();
         *(int*)( lVar5 + 8 ) = *(int*)( lVar5 + 8 ) + 1;
         UNLOCK();
      }

      uVar2 = *(undefined4*)( in_RSI + 0x58 );
      cVar3 = *(char*)( in_RSI + 0x38 );
      *(undefined1*)( (long)puVar6 + 0x3c ) = *(undefined1*)( in_RSI + 0x5c );
      *(undefined4*)( puVar6 + 7 ) = uVar2;
      if (cVar3 != '\x02') {
         LOCK();
         *(int*)( puVar6 + 1 ) = *(int*)( puVar6 + 1 ) + 1;
         UNLOCK();
         if (*(char*)( in_RSI + 0x38 ) == '\x01') {
            plVar7 = *(long**)( in_RSI + 0x18 );
            if (plVar7 != (long*)0x0) {
               LOCK();
               plVar1 = plVar7 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar7 + 8 ) )();
               }

            }

         }
 else if (( *(char*)( in_RSI + 0x38 ) == '\x02' ) && ( *(long*)( in_RSI + 0x18 ) != in_RSI + 0x28 )) {
            ( *JPH::Free )();
         }

         *(undefined8**)( in_RSI + 0x18 ) = puVar6;
         *(undefined1*)( in_RSI + 0x38 ) = 1;
         *(undefined1*)( in_RDI + 4 ) = 1;
         *in_RDI = (long)puVar6;
         LAB_00100c4e:LOCK();
         *(int*)( puVar6 + 1 ) = *(int*)( puVar6 + 1 ) + 1;
         UNLOCK();
         return;
      }

      *(undefined1*)( in_RDI + 4 ) = 2;
   }
 else {
      *(char*)( in_RDI + 4 ) = cVar3;
      if (cVar3 == '\x01') {
         puVar6 = *(undefined8**)( in_RSI + 0x18 );
         *in_RDI = (long)puVar6;
         if (puVar6 == (undefined8*)0x0) {
            return;
         }

         goto LAB_00100c4e;
      }

      if (cVar3 != '\x02') {
         return;
      }

   }

   plVar7 = in_RDI + 2;
   *in_RDI = (long)plVar7;
   __src = *(undefined1**)( in_RSI + 0x18 );
   __n = *(ulong*)( in_RSI + 0x20 );
   if (__n < 0x10) {
      if (__n == 1) {
         *(undefined1*)( in_RDI + 2 ) = *__src;
         goto LAB_00100cb8;
      }

      if (__n == 0) goto LAB_00100cb8;
   }
 else {
      if ((long)__n < 0) {
         std::__throw_length_error("basic_string::_M_create");
         pbVar8= &JoltCustomRayShape::register_type()::concrete_sub_types
         ;
         _DAT_001031e0 = (anonymous_namespace)::construct_ray;
         _DAT_001031e8 = (undefined4)JPH::Color::sDarkRed;
         do {
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            *(code**)( (ulong)bVar4 * 8 + 0x1048f0 ) = (anonymous_namespace)::collide_ray_vs_shape;
            *(code**)( (ulong)bVar4 * 0x110 + 0x103138 ) = JPH::CollisionDispatch::sReversedCollideShape;
         }
 while ( pbVar8 != &DAT_0010171b );
         pbVar8 = &JPH::sAllSubShapeTypes;
         _DAT_001049a8 = (anonymous_namespace)::collide_noop;
         do {
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            *(code**)( &DAT_001048f8 + (ulong)bVar4 * 8 ) = (anonymous_namespace)::cast_noop;
            *(code**)( (ulong)bVar4 * 0x110 + 0x103140 ) = (anonymous_namespace)::cast_noop;
         }
 while ( pbVar8 != (byte*)0x101742 );
         return;
      }

      plVar7 = (long*)( *JPH::Allocate )(__n + 1);
      in_RDI[2] = __n;
      *in_RDI = (long)plVar7;
   }

   memcpy(plVar7, __src, __n);
   plVar7 = (long*)*in_RDI;
   LAB_00100cb8:in_RDI[1] = __n;
   *(undefined1*)( (long)plVar7 + __n ) = 0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltCustomRayShape::register_type() */void JoltCustomRayShape::register_type(void) {
   byte bVar1;
   byte *pbVar2;
   pbVar2= &register_type()::concrete_sub_types
   ;
   _DAT_001031e0 = (anonymous_namespace)::construct_ray;
   _DAT_001031e8 = (undefined4)JPH::Color::sDarkRed;
   do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      *(code**)( (ulong)bVar1 * 8 + 0x1048f0 ) = (anonymous_namespace)::collide_ray_vs_shape;
      *(code**)( (ulong)bVar1 * 0x110 + 0x103138 ) = JPH::CollisionDispatch::sReversedCollideShape;
   }
 while ( pbVar2 != &DAT_0010171b );
   pbVar2 = &JPH::sAllSubShapeTypes;
   _DAT_001049a8 = (anonymous_namespace)::collide_noop;
   do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      *(code**)( &DAT_001048f8 + (ulong)bVar1 * 8 ) = (anonymous_namespace)::cast_noop;
      *(code**)( (ulong)bVar1 * 0x110 + 0x103140 ) = (anonymous_namespace)::cast_noop;
   }
 while ( pbVar2 != (byte*)0x101742 );
   return;
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
/* JPH::Shape::MustBeStatic() const */undefined8 JPH::Shape::MustBeStatic(void) {
   return 0;
}
/* JPH::Shape::GetCenterOfMass() const */undefined1[16];JPH::Shape::GetCenterOfMass(void) {
   return ZEXT816(0);
}
/* JPH::Shape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&,
   JPH::StaticArray<JPH::Vec3, 32u>&) const */void JPH::Shape::GetSupportingFace(void) {
   return;
}
/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}
/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */void JPH::Shape::SaveSubShapeState(Array *param_1) {
   return;
}
/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */void JPH::Shape::RestoreSubShapeState(RefConst *param_1, uint param_2) {
   return;
}
/* JPH::PhysicsMaterial::GetDebugColor() const */undefined4 JPH::PhysicsMaterial::GetDebugColor(void) {
   return (undefined4)Color::sGrey;
}
/* JPH::ConvexShape::GetSubShapeIDBitsRecursive() const */undefined8 JPH::ConvexShape::GetSubShapeIDBitsRecursive(void) {
   return 0;
}
/* JPH::ConvexShape::GetMaterial(JPH::SubShapeID const&) const */long JPH::ConvexShape::GetMaterial(SubShapeID *param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x20 );
   if (*(long*)( param_1 + 0x20 ) == 0) {
      lVar1 = PhysicsMaterial::sDefault;
   }

   return lVar1;
}
/* JoltCustomRayShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */undefined1[16];JoltCustomRayShape::GetSurfaceNormal(void) {
   return ZEXT816(0x3f8000003f800000) << 0x40;
}
/* JoltCustomRayShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */void JoltCustomRayShape::GetSubmergedVolume(void) {
   undefined4 *in_RCX;
   undefined4 *in_R8;
   undefined1(*in_R9)[16];
   *in_RCX = 0;
   *in_R8 = 0;
   *in_R9 = (undefined1[16])0x0;
   return;
}
/* JoltCustomRayShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */undefined8 JoltCustomRayShape::CastRay(RayCast *param_1, SubShapeIDCreator *param_2, RayCastResult *param_3) {
   return 0;
}
/* JoltCustomRayShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */void JoltCustomRayShape::CastRay(RayCast *param_1, RayCastSettings *param_2, SubShapeIDCreator *param_3, CollisionCollector *param_4, ShapeFilter *param_5) {
   return;
}
/* JoltCustomRayShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */void JoltCustomRayShape::CollidePoint(void) {
   return;
}
/* JoltCustomRayShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */void JoltCustomRayShape::CollideSoftBodyVertices(void) {
   return;
}
/* JoltCustomRayShape::GetStats() const */undefined1[16];JoltCustomRayShape::GetStats(void) {
   return ZEXT816(0x40);
}
/* JoltCustomRayShape::GetVolume() const */undefined8 JoltCustomRayShape::GetVolume(void) {
   return 0;
}
/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::~JoltQueryCollectorClosest() */void JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>::~JoltQueryCollectorClosest(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>> *this) {
   return;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00100fc4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::Reset() */void JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>::Reset(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>> *this) {
   *(undefined4*)( this + 8 ) = 0x3f800001;
   this[0x24] = (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>)0x0;
   return;
}
/* JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>::OnBody(JPH::Body const&) */void JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::OnBody(Body *param_1) {
   return;
}
/* JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>::SetUserData(unsigned long) */void JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::SetUserData(ulong param_1) {
   return;
}
/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::AddHit(JPH::RayCastResult const&) */void JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>::AddHit(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>> *this, RayCastResult *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   if (( this[0x24] == (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>)0x0 ) || ( *(float*)( param_1 + 4 ) < *(float*)( this + 0x1c ) )) {
      uVar2 = *(undefined8*)param_1;
      *(float*)( this + 8 ) = *(float*)( param_1 + 4 );
      *(undefined8*)( this + 0x18 ) = uVar2;
      uVar1 = *(undefined4*)( param_1 + 8 );
      this[0x24] = (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>)0x1;
      *(undefined4*)( this + 0x20 ) = uVar1;
   }

   return;
}
/* JPH::ShapeFilter::~ShapeFilter() */void JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this) {
   operator_delete(this, 0x10);
   return;
}
/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::~JoltQueryCollectorClosest() */void JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>::~JoltQueryCollectorClosest(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>> *this) {
   operator_delete(this, 0x28);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */float *JPH::Shape::GetWorldSpaceBounds(undefined8 param_1_00, undefined8 param_2, float *param_1, long *param_4, long param_5) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   float fVar8;
   float fVar10;
   float fVar11;
   undefined1 auVar9[16];
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   float local_68;
   float fStack_64;
   float fStack_60;
   float fStack_5c;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *param_4 + 0x20 ) == JoltCustomRayShape::GetLocalBounds) {
      fStack_50 = *(float*)( param_4 + 7 );
      local_68 = __LC4;
      fStack_64 = _UNK_00101aa4;
      fStack_60 = _UNK_00101aa8;
      fStack_5c = _UNK_00101aac;
      local_58 = (float)_LC6;
      fStack_54 = _LC6._4_4_;
      fStack_4c = fStack_50;
   }
 else {
      ( **(code**)( *param_4 + 0x20 ) )(&local_68);
   }

   local_78 = (float)param_1_00;
   fStack_74 = (float)( (ulong)param_1_00 >> 0x20 );
   fStack_70 = (float)param_2;
   fStack_6c = (float)( (ulong)param_2 >> 0x20 );
   auVar6._0_8_ = CONCAT44(fStack_64 * fStack_74, local_68 * local_78);
   auVar6._8_4_ = fStack_60 * fStack_70;
   auVar6._12_4_ = fStack_5c * fStack_6c;
   lVar4 = 0;
   auVar18._0_4_ = local_58 * local_78;
   auVar18._4_4_ = fStack_54 * fStack_74;
   auVar18._8_4_ = fStack_50 * fStack_70;
   auVar18._12_4_ = fStack_4c * fStack_6c;
   auVar9._8_4_ = auVar6._8_4_;
   auVar9._0_8_ = auVar6._0_8_;
   auVar9._12_4_ = auVar6._12_4_;
   local_38 = maxps(auVar9, auVar18);
   local_48 = minps(auVar6, auVar18);
   fVar13 = *(float*)( param_5 + 0x30 );
   fVar14 = *(float*)( param_5 + 0x34 );
   fVar15 = *(float*)( param_5 + 0x38 );
   fVar16 = *(float*)( param_5 + 0x3c );
   fVar8 = fVar13;
   fVar10 = fVar14;
   fVar11 = fVar15;
   fVar12 = fVar16;
   do {
      fVar2 = *(float*)( local_48 + lVar4 );
      fVar3 = *(float*)( local_38 + lVar4 );
      pfVar1 = (float*)( param_5 + lVar4 * 4 );
      auVar5._0_8_ = CONCAT44(fVar2 * pfVar1[1], fVar2 * *pfVar1);
      auVar5._8_4_ = fVar2 * pfVar1[2];
      auVar5._12_4_ = fVar2 * pfVar1[3];
      pfVar1 = (float*)( param_5 + lVar4 * 4 );
      auVar7._0_4_ = fVar3 * *pfVar1;
      auVar7._4_4_ = fVar3 * pfVar1[1];
      auVar7._8_4_ = fVar3 * pfVar1[2];
      auVar7._12_4_ = fVar3 * pfVar1[3];
      lVar4 = lVar4 + 4;
      auVar17._8_4_ = auVar5._8_4_;
      auVar17._0_8_ = auVar5._0_8_;
      auVar17._12_4_ = auVar5._12_4_;
      auVar18 = minps(auVar17, auVar7);
      auVar6 = maxps(auVar5, auVar7);
      fVar8 = fVar8 + auVar18._0_4_;
      fVar10 = fVar10 + auVar18._4_4_;
      fVar11 = fVar11 + auVar18._8_4_;
      fVar12 = fVar12 + auVar18._12_4_;
      fVar13 = fVar13 + auVar6._0_4_;
      fVar14 = fVar14 + auVar6._4_4_;
      fVar15 = fVar15 + auVar6._8_4_;
      fVar16 = fVar16 + auVar6._12_4_;
   }
 while ( lVar4 != 0xc );
   *param_1 = fVar8;
   param_1[1] = fVar10;
   param_1[2] = fVar11;
   param_1[3] = fVar12;
   param_1[4] = fVar13;
   param_1[5] = fVar14;
   param_1[6] = fVar15;
   param_1[7] = fVar16;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltCustomRayShape::~JoltCustomRayShape() */void JoltCustomRayShape::~JoltCustomRayShape(JoltCustomRayShape *this) {
   long *plVar1;
   long *plVar2;
   *(undefined***)this = &PTR__JoltCustomRayShape_00101958;
   plVar2 = *(long**)( this + 0x30 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   plVar2 = *(long**)( this + 0x20 );
   *(code**)this = std::__throw_length_error;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            /* WARNING: Could not recover jumptable at 0x00101264. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *JPH::Free )();
            return;
         }

         /* WARNING: Could not recover jumptable at 0x00101291. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar2 + 0x18 ) )();
         return;
      }

   }

   return;
}
/* JoltCustomRayShape::~JoltCustomRayShape() */void JoltCustomRayShape::~JoltCustomRayShape(JoltCustomRayShape *this) {
   long *plVar1;
   long *plVar2;
   *(undefined***)this = &PTR__JoltCustomRayShape_00101958;
   plVar2 = *(long**)( this + 0x30 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   plVar2 = *(long**)( this + 0x20 );
   *(code**)this = std::__throw_length_error;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
            /* WARNING: Could not recover jumptable at 0x0010130d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *JPH::Free )(this);
            return;
         }

         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   /* WARNING: Could not recover jumptable at 0x001012e0. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *JPH::Free )(this);
   return;
}
/* JoltCustomRayShapeSettings::~JoltCustomRayShapeSettings() */void JoltCustomRayShapeSettings::~JoltCustomRayShapeSettings(JoltCustomRayShapeSettings *this) {
   long *plVar1;
   long *plVar2;
   *(undefined***)this = &PTR_GetRTTI_00101920;
   plVar2 = *(long**)( this + 0x50 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   plVar2 = *(long**)( this + 0x40 );
   *(code**)this = JPH::CollisionDispatch::sReversedCollideShape;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   *(undefined8**)this = &JPH::ShapeFunctions::sRegistry;
   if (this[0x38] == (JoltCustomRayShapeSettings)0x1) {
      plVar2 = *(long**)( this + 0x18 );
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar1 = plVar2 + 1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if ((int)*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }

   }
 else if (( this[0x38] == (JoltCustomRayShapeSettings)0x2 ) && ( *(JoltCustomRayShapeSettings**)( this + 0x18 ) != this + 0x28 )) {
      ( *JPH::Free )();
   }

   /* WARNING: Could not recover jumptable at 0x001013b5. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *JPH::Free )(this);
   return;
}
/* JoltCustomRayShapeSettings::~JoltCustomRayShapeSettings() */void JoltCustomRayShapeSettings::~JoltCustomRayShapeSettings(JoltCustomRayShapeSettings *this) {
   long *plVar1;
   long *plVar2;
   *(undefined***)this = &PTR_GetRTTI_00101920;
   plVar2 = *(long**)( this + 0x50 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   plVar2 = *(long**)( this + 0x40 );
   *(code**)this = JPH::CollisionDispatch::sReversedCollideShape;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
            ( *JPH::Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   *(undefined8**)this = &JPH::ShapeFunctions::sRegistry;
   if (this[0x38] == (JoltCustomRayShapeSettings)0x1) {
      plVar2 = *(long**)( this + 0x18 );
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar1 = plVar2 + 1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if ((int)*plVar1 == 0) {
            /* WARNING: Could not recover jumptable at 0x001014ff. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *plVar2 + 8 ) )();
            return;
         }

      }

   }
 else if (( this[0x38] == (JoltCustomRayShapeSettings)0x2 ) && ( *(JoltCustomRayShapeSettings**)( this + 0x18 ) != this + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001014d4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *JPH::Free )();
      return;
   }

   return;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JoltCustomRayShapeSettings::Create() const */void JoltCustomRayShapeSettings::_GLOBAL__sub_I_Create(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC20;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JoltCustomRayShapeSettings::~JoltCustomRayShapeSettings() */void JoltCustomRayShapeSettings::~JoltCustomRayShapeSettings(JoltCustomRayShapeSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JoltCustomRayShape::~JoltCustomRayShape() */void JoltCustomRayShape::~JoltCustomRayShape(JoltCustomRayShape *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::~JoltQueryCollectorClosest() */void JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>::~JoltQueryCollectorClosest(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::ShapeFilter::~ShapeFilter() */void JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

