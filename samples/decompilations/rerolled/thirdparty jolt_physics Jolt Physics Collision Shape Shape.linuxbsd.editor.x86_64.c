/* _FUN(void*) */void JPH::GetRTTIOfType(JPH::ShapeSettings *) {
   lambda(void*)
   #1
   {
      if (param_1 != (void*)0x0) {
         /* WARNING: Load size is inaccurate */
         /* WARNING: Could not recover jumptable at 0x0010000c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *param_1 + 0x18 ) )();
         return;
      }

      return;
   }

   /* JPH::Shape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */
   Shape * __thiscallJPH::Shape::GetLeafShape(Shape * this, SubShapeID * param_1, SubShapeID * param_2) * (undefined4*)param_2 = *(undefined4*)param_1;
   return this;
}
/* JPH::Shape::SaveBinaryState(JPH::StreamOut&) const */void JPH::Shape::SaveBinaryState(Shape *this, StreamOut *param_1) {
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x19, 1);
   /* WARNING: Could not recover jumptable at 0x0010006b. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x10, 8);
   return;
}
/* JPH::Shape::RestoreBinaryState(JPH::StreamIn&) */void JPH::Shape::RestoreBinaryState(Shape *this, StreamIn *param_1) {
   /* WARNING: Could not recover jumptable at 0x0010008a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x10, 8);
   return;
}
/* JPH::Shape::sCollidePointUsingRayCast(JPH::Shape const&, JPH::Vec3, JPH::SubShapeIDCreator
   const&, JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter
   const&)::HitCountCollector::AddHit(JPH::RayCastResult const&) */void HitCountCollector::AddHit(JPH::RayCastResult_const__ (long param_1, long param_2)) {
   undefined4 uVar1;
   uVar1 = *(undefined4*)( param_2 + 8 );
   *(int*)( param_1 + 0x18 ) = *(int*)( param_1 + 0x18 ) + 1;
   *(undefined4*)( param_1 + 0x1c ) = uVar1;
   return;
}
/* ~HitCountCollector() */void HitCountCollector::~HitCountCollector(HitCountCollector *this) {
   return;
}
/* JPH::ShapeSettings::sCreateRTTI(JPH::RTTI&) */void JPH::ShapeSettings::sCreateRTTI(RTTI *param_1) {
   int iVar1;
   iVar1 = JPH::GetRTTIOfType((SerializableObject*)0x0);
   JPH::RTTI::AddBaseClass(param_1, iVar1);
   return;
}
/* JPH::Shape::IsValidScale(JPH::Vec3) const */undefined4 JPH::Shape::IsValidScale(undefined8 param_1, undefined8 param_2) {
   undefined4 in_EAX;
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   float fVar5;
   undefined4 local_18;
   undefined4 uStack_14;
   fVar5 = (float)( (ulong)param_2 >> 0x20 );
   local_18 = (float)param_1;
   uStack_14 = (float)( (ulong)param_1 >> 0x20 );
   auVar2._0_4_ = 0.0 - local_18;
   auVar2._4_4_ = 0.0 - uStack_14;
   auVar2._8_4_ = 0.0 - (float)param_2;
   auVar2._12_4_ = 0.0 - fVar5;
   auVar3._8_4_ = (float)param_2;
   auVar3._0_8_ = param_1;
   auVar3._12_4_ = fVar5;
   auVar3 = maxps(auVar2, auVar3);
   auVar4._4_4_ = -(uint)(auVar3._4_4_ < _LC3);
   auVar4._0_4_ = -(uint)(auVar3._0_4_ < _LC3);
   auVar4._8_4_ = -(uint)(auVar3._8_4_ < _LC3);
   auVar4._12_4_ = -(uint)(auVar3._12_4_ < _LC3);
   uVar1 = movmskps(in_EAX, auVar4);
   return CONCAT31(( int3 )(uVar1 >> 8), ( uVar1 & 7 ) == 0);
}
/* JPH::Shape::MakeScaleValid(JPH::Vec3) const */undefined1[16];JPH::Shape::MakeScaleValid (undefined8 param_1,undefined8 param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined4 local_18;
   undefined4 uStack_14;
   undefined4 uStack_10;
   undefined4 uStack_c;
   local_18 = (float)param_1;
   uStack_14 = (float)( (ulong)param_1 >> 0x20 );
   uStack_10 = (float)param_2;
   uStack_c = (float)( (ulong)param_2 >> 0x20 );
   auVar2._0_4_ = 0.0 - local_18;
   auVar2._4_4_ = 0.0 - uStack_14;
   auVar2._8_4_ = 0.0 - uStack_10;
   auVar2._12_4_ = 0.0 - uStack_c;
   auVar3._8_4_ = uStack_10;
   auVar3._0_8_ = param_1;
   auVar3._12_4_ = uStack_c;
   auVar3 = maxps(auVar2, auVar3);
   auVar4._4_4_ = _LC3;
   auVar4._0_4_ = _LC3;
   auVar4._8_4_ = _LC3;
   auVar4._12_4_ = _LC3;
   auVar3 = maxps(auVar3, auVar4);
   auVar1._4_4_ = auVar3._4_4_ * (float)( _LC5 & (uint)uStack_14 | _LC7 );
   auVar1._0_4_ = auVar3._0_4_ * (float)( _LC5 & (uint)local_18 | _LC7 );
   auVar1._8_4_ = auVar3._8_4_ * (float)( _LC5 & (uint)uStack_10 | _LC7 );
   auVar1._12_4_ = auVar3._12_4_ * (float)( _LC5 & (uint)uStack_c | _LC7 );
   return auVar1;
}
/* ~HitCountCollector() */void HitCountCollector::~HitCountCollector(HitCountCollector *this) {
   operator_delete(this, 0x20);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<JPH::PhysicsMaterial const*, std::pair<JPH::PhysicsMaterial const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::PhysicsMaterial const*, unsigned int>,
   JPH::Hash<JPH::PhysicsMaterial const*>, std::equal_to<JPH::PhysicsMaterial const*>
   >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>::rehash(uint param_1) {
   char *pcVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   ushort uVar5;
   undefined1 auVar6[16];
   byte bVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   int iVar11;
   uint uVar12;
   byte *pbVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   long lVar17;
   undefined8 *puVar18;
   undefined4 in_register_0000003c;
   uint uVar19;
   undefined1 *puVar20;
   uint uVar21;
   uint uVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined8 local_48;
   long local_40[2];
   uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar16 = (ulong)uVar22;
   puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = 0;
   if (uVar22 != 0) {
      do {
         while (true) {
            pcVar1 = puVar20 + lVar8;
            if (*pcVar1 != '\0') break;
            LAB_001001ca:lVar8 = lVar8 + 1;
            if ((uint)uVar16 <= (uint)lVar8) goto LAB_001001f4;
         }
;
         if (*pcVar1 == '\x7f') {
            *pcVar1 = '\0';
            puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
            uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            goto LAB_001001ca;
         }

         *pcVar1 = '\x7f';
         uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         uVar16 = (ulong)uVar22;
         lVar8 = lVar8 + 1;
         puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
      }
 while ( (uint)lVar8 < uVar22 );
   }

   LAB_001001f4:puVar20[uVar16] = *puVar20;
   lVar8 = 1;
   do {
      lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
      iVar11 = (int)lVar8;
      puVar20 = (undefined1*)( lVar17 + lVar8 );
      lVar8 = lVar8 + 1;
      *(undefined1*)( lVar17 + ( ulong )(uint)(iVar11 + *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 )) ) = *puVar20;
      auVar6 = __LC8;
   }
 while ( lVar8 != 0xf );
   uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar16 = (ulong)uVar22;
   uVar19 = uVar22 - 1;
   if (uVar22 != 0) {
      uVar22 = 0xfffffff1;
      lVar8 = 0;
      do {
         lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
         if (*(char*)( lVar17 + lVar8 ) == '\x7f') {
            lVar9 = *(long*)CONCAT44(in_register_0000003c, param_1);
            lVar14 = lVar8 * 0x10;
            while (true) {
               local_48 = *(undefined8*)( lVar9 + lVar14 );
               uVar10 = 0xcbf29ce484222325;
               pbVar13 = (byte*)&local_48;
               do {
                  bVar7 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar10 = ( uVar10 ^ bVar7 ) * 0x100000001b3;
               }
 while ( pbVar13 != (byte*)local_40 );
               bVar7 = (byte)uVar10 | 0x80;
               uVar15 = (int)uVar16 - 1U & ( uint )(uVar10 >> 7);
               auVar23 = *(undefined1(*) [16])( lVar17 + (ulong)uVar15 ) & auVar6;
               uVar5 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               uVar21 = uVar15;
               while (uVar5 == 0xffff) {
                  uVar21 = uVar21 + 0x10 & uVar19;
                  auVar23 = *(undefined1(*) [16])( lVar17 + (ulong)uVar21 ) & auVar6;
                  uVar5 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               }
;
               iVar11 = 0;
               for (uVar12 = uVar5 ^ 0xffff; ( uVar12 & 1 ) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                  iVar11 = iVar11 + 1;
               }

               uVar21 = iVar11 + uVar21 & uVar19;
               if (( ( uVar21 - uVar15 ^ (int)lVar8 - uVar15 ) & uVar19 & 0xfffffff0 ) == 0) {
                  *(byte*)( lVar17 + lVar8 ) = bVar7;
                  *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar22 ) + 0xf) ) = bVar7;
                  uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
                  goto LAB_00100270;
               }

               pbVar13 = (byte*)( lVar17 + (ulong)uVar21 );
               lVar17 = (ulong)uVar21 * 0x10;
               if (*pbVar13 == 0) break;
               *pbVar13 = bVar7;
               *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar21 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar7;
               lVar9 = *(long*)CONCAT44(in_register_0000003c, param_1);
               puVar18 = (undefined8*)( lVar17 + lVar9 );
               puVar2 = (undefined8*)( lVar9 + lVar14 );
               uVar4 = *puVar2;
               *puVar2 = *puVar18;
               *puVar18 = uVar4;
               uVar3 = *(undefined4*)( puVar2 + 1 );
               *(undefined4*)( puVar2 + 1 ) = *(undefined4*)( puVar18 + 1 );
               *(undefined4*)( puVar18 + 1 ) = uVar3;
               lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
               uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            }
;
            *pbVar13 = bVar7;
            *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar21 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar7;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + lVar8 ) = 0;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar22 ) + 0xf) ) = 0;
            puVar2 = (undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar14 );
            uVar4 = puVar2[1];
            puVar18 = (undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar17 );
            *puVar18 = *puVar2;
            puVar18[1] = uVar4;
            uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         }

         LAB_00100270:lVar8 = lVar8 + 1;
         uVar22 = uVar22 + 1;
      }
 while ( (uint)lVar8 < (uint)uVar16 );
   }

   *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = (int)( uVar16 * 7 >> 3 ) - *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x10 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<JPH::Shape const*, JPH::Shape const*, JPH::UnorderedSetDetail<JPH::Shape const*>,
   JPH::Hash<JPH::Shape const*>, std::equal_to<JPH::Shape const*> >::rehash(unsigned int) [clone
   .isra.0] */void JPH::HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>::rehash(uint param_1) {
   char *pcVar1;
   long lVar2;
   undefined8 uVar3;
   ushort uVar4;
   undefined1 auVar5[16];
   byte bVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   int iVar10;
   long lVar11;
   uint uVar12;
   byte *pbVar13;
   uint uVar14;
   ulong uVar15;
   undefined4 in_register_0000003c;
   uint uVar16;
   undefined1 *puVar17;
   uint uVar18;
   undefined8 *puVar19;
   uint uVar20;
   long in_FS_OFFSET;
   undefined1 auVar21[16];
   undefined8 local_48;
   long local_40[2];
   uVar20 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar15 = (ulong)uVar20;
   puVar17 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = 0;
   if (uVar20 != 0) {
      do {
         while (true) {
            pcVar1 = puVar17 + lVar7;
            if (*pcVar1 != '\0') break;
            LAB_0010048a:lVar7 = lVar7 + 1;
            if ((uint)uVar15 <= (uint)lVar7) goto LAB_001004b4;
         }
;
         if (*pcVar1 == '\x7f') {
            *pcVar1 = '\0';
            puVar17 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
            uVar15 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            goto LAB_0010048a;
         }

         *pcVar1 = '\x7f';
         uVar20 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         uVar15 = (ulong)uVar20;
         lVar7 = lVar7 + 1;
         puVar17 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
      }
 while ( (uint)lVar7 < uVar20 );
   }

   LAB_001004b4:puVar17[uVar15] = *puVar17;
   lVar7 = 1;
   do {
      lVar11 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
      iVar10 = (int)lVar7;
      puVar17 = (undefined1*)( lVar11 + lVar7 );
      lVar7 = lVar7 + 1;
      *(undefined1*)( lVar11 + ( ulong )(uint)(iVar10 + *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 )) ) = *puVar17;
      auVar5 = __LC8;
   }
 while ( lVar7 != 0xf );
   uVar20 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar15 = (ulong)uVar20;
   uVar16 = uVar20 - 1;
   if (uVar20 != 0) {
      uVar20 = 0xfffffff1;
      lVar7 = 0;
      do {
         lVar11 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
         if (*(char*)( lVar11 + lVar7 ) == '\x7f') {
            lVar8 = *(long*)CONCAT44(in_register_0000003c, param_1);
            lVar2 = lVar7 * 8;
            while (true) {
               local_48 = *(undefined8*)( lVar8 + lVar2 );
               uVar9 = 0xcbf29ce484222325;
               pbVar13 = (byte*)&local_48;
               do {
                  bVar6 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar9 = ( uVar9 ^ bVar6 ) * 0x100000001b3;
               }
 while ( pbVar13 != (byte*)local_40 );
               bVar6 = (byte)uVar9 | 0x80;
               uVar14 = (int)uVar15 - 1U & ( uint )(uVar9 >> 7);
               auVar21 = *(undefined1(*) [16])( lVar11 + (ulong)uVar14 ) & auVar5;
               uVar4 = ( ushort )(SUB161(auVar21 >> 7, 0) & 1) | ( ushort )(SUB161(auVar21 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar21 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar21 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar21 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar21 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar21 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar21 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar21 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar21 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar21 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar21 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar21 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar21 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar21 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar21[0xf] >> 7) << 0xf;
               uVar18 = uVar14;
               while (uVar4 == 0xffff) {
                  uVar18 = uVar18 + 0x10 & uVar16;
                  auVar21 = *(undefined1(*) [16])( lVar11 + (ulong)uVar18 ) & auVar5;
                  uVar4 = ( ushort )(SUB161(auVar21 >> 7, 0) & 1) | ( ushort )(SUB161(auVar21 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar21 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar21 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar21 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar21 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar21 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar21 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar21 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar21 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar21 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar21 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar21 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar21 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar21 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar21[0xf] >> 7) << 0xf;
               }
;
               iVar10 = 0;
               for (uVar12 = uVar4 ^ 0xffff; ( uVar12 & 1 ) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                  iVar10 = iVar10 + 1;
               }

               uVar18 = iVar10 + uVar18 & uVar16;
               if (( ( uVar18 - uVar14 ^ (int)lVar7 - uVar14 ) & uVar16 & 0xfffffff0 ) == 0) {
                  *(byte*)( lVar11 + lVar7 ) = bVar6;
                  *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar20 ) + 0xf) ) = bVar6;
                  uVar15 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
                  goto LAB_00100530;
               }

               uVar15 = (ulong)uVar18;
               pbVar13 = (byte*)( lVar11 + uVar15 );
               if (*pbVar13 == 0) break;
               *pbVar13 = bVar6;
               *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar18 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar6;
               lVar8 = *(long*)CONCAT44(in_register_0000003c, param_1);
               puVar19 = (undefined8*)( uVar15 * 8 + lVar8 );
               uVar3 = *(undefined8*)( lVar8 + lVar2 );
               *(undefined8*)( lVar8 + lVar2 ) = *puVar19;
               uVar15 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
               *puVar19 = uVar3;
               lVar11 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
            }
;
            *pbVar13 = bVar6;
            *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar18 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar6;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + lVar7 ) = 0;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar20 ) + 0xf) ) = 0;
            *(undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + uVar15 * 8 ) = *(undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar2 );
            uVar15 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         }

         LAB_00100530:lVar7 = lVar7 + 1;
         uVar20 = uVar20 + 1;
      }
 while ( (uint)lVar7 < (uint)uVar15 );
   }

   *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = (int)( uVar15 * 7 >> 3 ) - *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x10 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<JPH::Shape const*, std::pair<JPH::Shape const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::Shape const*, unsigned int>, JPH::Hash<JPH::Shape const*>,
   std::equal_to<JPH::Shape const*> >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>::rehash(uint param_1) {
   char *pcVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   ushort uVar5;
   undefined1 auVar6[16];
   byte bVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   int iVar11;
   uint uVar12;
   byte *pbVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   long lVar17;
   undefined8 *puVar18;
   undefined4 in_register_0000003c;
   uint uVar19;
   undefined1 *puVar20;
   uint uVar21;
   uint uVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined8 local_48;
   long local_40[2];
   uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar16 = (ulong)uVar22;
   puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = 0;
   if (uVar22 != 0) {
      do {
         while (true) {
            pcVar1 = puVar20 + lVar8;
            if (*pcVar1 != '\0') break;
            LAB_0010074a:lVar8 = lVar8 + 1;
            if ((uint)uVar16 <= (uint)lVar8) goto LAB_00100774;
         }
;
         if (*pcVar1 == '\x7f') {
            *pcVar1 = '\0';
            puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
            uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            goto LAB_0010074a;
         }

         *pcVar1 = '\x7f';
         uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         uVar16 = (ulong)uVar22;
         lVar8 = lVar8 + 1;
         puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
      }
 while ( (uint)lVar8 < uVar22 );
   }

   LAB_00100774:puVar20[uVar16] = *puVar20;
   lVar8 = 1;
   do {
      lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
      iVar11 = (int)lVar8;
      puVar20 = (undefined1*)( lVar17 + lVar8 );
      lVar8 = lVar8 + 1;
      *(undefined1*)( lVar17 + ( ulong )(uint)(iVar11 + *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 )) ) = *puVar20;
      auVar6 = __LC8;
   }
 while ( lVar8 != 0xf );
   uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar16 = (ulong)uVar22;
   uVar19 = uVar22 - 1;
   if (uVar22 != 0) {
      uVar22 = 0xfffffff1;
      lVar8 = 0;
      do {
         lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
         if (*(char*)( lVar17 + lVar8 ) == '\x7f') {
            lVar9 = *(long*)CONCAT44(in_register_0000003c, param_1);
            lVar14 = lVar8 * 0x10;
            while (true) {
               local_48 = *(undefined8*)( lVar9 + lVar14 );
               uVar10 = 0xcbf29ce484222325;
               pbVar13 = (byte*)&local_48;
               do {
                  bVar7 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar10 = ( uVar10 ^ bVar7 ) * 0x100000001b3;
               }
 while ( pbVar13 != (byte*)local_40 );
               bVar7 = (byte)uVar10 | 0x80;
               uVar15 = (int)uVar16 - 1U & ( uint )(uVar10 >> 7);
               auVar23 = *(undefined1(*) [16])( lVar17 + (ulong)uVar15 ) & auVar6;
               uVar5 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               uVar21 = uVar15;
               while (uVar5 == 0xffff) {
                  uVar21 = uVar21 + 0x10 & uVar19;
                  auVar23 = *(undefined1(*) [16])( lVar17 + (ulong)uVar21 ) & auVar6;
                  uVar5 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               }
;
               iVar11 = 0;
               for (uVar12 = uVar5 ^ 0xffff; ( uVar12 & 1 ) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                  iVar11 = iVar11 + 1;
               }

               uVar21 = iVar11 + uVar21 & uVar19;
               if (( ( uVar21 - uVar15 ^ (int)lVar8 - uVar15 ) & uVar19 & 0xfffffff0 ) == 0) {
                  *(byte*)( lVar17 + lVar8 ) = bVar7;
                  *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar22 ) + 0xf) ) = bVar7;
                  uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
                  goto LAB_001007f0;
               }

               pbVar13 = (byte*)( lVar17 + (ulong)uVar21 );
               lVar17 = (ulong)uVar21 * 0x10;
               if (*pbVar13 == 0) break;
               *pbVar13 = bVar7;
               *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar21 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar7;
               lVar9 = *(long*)CONCAT44(in_register_0000003c, param_1);
               puVar18 = (undefined8*)( lVar17 + lVar9 );
               puVar2 = (undefined8*)( lVar9 + lVar14 );
               uVar4 = *puVar2;
               *puVar2 = *puVar18;
               *puVar18 = uVar4;
               uVar3 = *(undefined4*)( puVar2 + 1 );
               *(undefined4*)( puVar2 + 1 ) = *(undefined4*)( puVar18 + 1 );
               *(undefined4*)( puVar18 + 1 ) = uVar3;
               lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
               uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            }
;
            *pbVar13 = bVar7;
            *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar21 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar7;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + lVar8 ) = 0;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar22 ) + 0xf) ) = 0;
            puVar2 = (undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar14 );
            uVar4 = puVar2[1];
            puVar18 = (undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar17 );
            *puVar18 = *puVar2;
            puVar18[1] = uVar4;
            uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         }

         LAB_001007f0:lVar8 = lVar8 + 1;
         uVar22 = uVar22 + 1;
      }
 while ( (uint)lVar8 < (uint)uVar16 );
   }

   *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = (int)( uVar16 * 7 >> 3 ) - *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x10 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_construct<char_const*>(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, long *param_1, undefined1 *param_2, long param_9, undefined4 *param_10) {
   undefined1 *__dest;
   ulong __n;
   char *pcVar1;
   undefined8 uVar2;
   __n = param_9 - (long)param_2;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         param_1[1] = 1;
         *(undefined1*)( *param_1 + 1 ) = 0;
         return;
      }

      if (__n == 0) {
         param_1[1] = 0;
         *__dest = 0;
         return;
      }

   }
 else {
      if ((long)__n < 0) {
         pcVar1 = "basic_string::_M_create";
         uVar2 = std::__throw_length_error("basic_string::_M_create");
         *param_10 = 0xffffffff;
         *(undefined1**)( pcVar1 + 0x20 ) = param_2;
         *(undefined8*)pcVar1 = uVar2;
         *(undefined8*)( pcVar1 + 8 ) = param_2_00;
         *(undefined8*)( pcVar1 + 0x10 ) = param_3;
         *(undefined8*)( pcVar1 + 0x18 ) = param_4;
         LOCK();
         *(int*)( param_2 + 8 ) = *(int*)( param_2 + 8 ) + 1;
         UNLOCK();
         for (int i = 0; i < 8; i++) {
            pcVar1[( i + 52 )] = -1;
         }

         for (int i = 0; i < 4; i++) {
            pcVar1[( i + 60 )] = '\0';
         }

         *(undefined8*)( pcVar1 + 0x28 ) = param_5;
         *(undefined4*)( pcVar1 + 0x30 ) = param_6;
         return;
      }

      __dest = (undefined1*)( *JPH::Allocate )(__n + 1);
      param_1[2] = __n;
      *param_1 = (long)__dest;
   }

   memcpy(__dest, param_2, __n);
   param_1[1] = __n;
   *(undefined1*)( *param_1 + __n ) = 0;
   return;
}
/* JPH::Shape::GetSubShapeTransformedShape(JPH::SubShapeID const&, JPH::Vec3, JPH::Quat, JPH::Vec3,
   JPH::SubShapeID&) const */undefined8 *JPH::Shape::GetSubShapeTransformedShape(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 *param_1, long param_8, undefined8 param_9, undefined4 *param_10) {
   *param_10 = 0xffffffff;
   param_1[4] = param_8;
   *param_1 = param_1_00;
   param_1[1] = param_2;
   param_1[2] = param_3;
   param_1[3] = param_4;
   LOCK();
   *(int*)( param_8 + 8 ) = *(int*)( param_8 + 8 ) + 1;
   UNLOCK();
   *(undefined8*)( (long)param_1 + 0x34 ) = 0xffffffffffffffff;
   *(undefined4*)( (long)param_1 + 0x3c ) = 0;
   param_1[5] = param_5;
   *(undefined4*)( param_1 + 6 ) = param_6;
   return param_1;
}
/* JPH::ShapeSettings::GetRTTI() const */undefined1 *JPH::ShapeSettings::GetRTTI(void) {
   int iVar1;
   if (GetRTTIOfType(JPH::ShapeSettings * ::rtti == '\0') {
      iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ShapeSettings * ::rtti));
      if (iVar1 != 0) {
         JPH::RTTI::RTTI((RTTI*)GetRTTIOfType(JPH::ShapeSettings * ::rtti, "ShapeSettings", 0x40, (_func_void_ptr*)0x0, GetRTTIOfType(JPH::ShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ShapeSettings*)::rtti;
    }
  }
  return, GetRTTIOfType(JPH::ShapeSettings*)::rtti;
}, /* ~Collector() */, void __thiscall JPH::Shape::ScaleShape(JPH::Vec3)::~Collector(ScaleShape_JPH__Vec3_ *this), {
                        long *plVar1;
                        long *plVar2;
                        ulong uVar3;
                        ulong uVar4;
                        uVar3 = *(ulong*)( this + 0x28 );
                        *(undefined***)this = &PTR__Collector_00105d30;
                        if (uVar3 == 0) {
                           return;
                        }

                        if (( *(long*)( this + 0x18 ) != 0 ) && ( uVar4 = uVar3 < uVar4 )) {
                           do {
                              while (plVar2 = *(long**)( uVar3 + 0x20 ),plVar2 == (long*)0x0) {
                                 LAB_00100b98:uVar3 = uVar3 + 0x40;
                                 if (uVar4 <= uVar3) goto LAB_00100bc0;
                              }
;
                              LOCK();
                              plVar1 = plVar2 + 1;
                              *(int*)plVar1 = (int)*plVar1 + -1;
                              UNLOCK();
                              if ((int)*plVar1 != 0) goto LAB_00100b98;
                              uVar3 = uVar3 + 0x40;
                              ( **(code**)( *plVar2 + 8 ) )();
                           }
 while ( uVar3 < uVar4 );
                           LAB_00100bc0:uVar3 = *(ulong*)( this + 0x28 );
                        }

                        *(undefined8*)( this + 0x18 ) = 0;
                        /* WARNING: Could not recover jumptable at 0x00100bd3. Too many branches */
                        /* WARNING: Treating indirect jump as call */
                        ( *Free )(uVar3);
                        return;
                     }
, /* ~Collector() */, void __thiscall JPH::Shape::ScaleShape(JPH::Vec3) * this) * plVar1 * plVar2 * (ulong*)( this + 0x28 ) * (undefined***)this & PTR__Collector_00105d30(uVar3 != 0)(( *(long*)( this + 0x18 ) != 0 ) && ( uVar4 = *(long*)( this + 0x18 ) * 0x40 + uVar3 ), uVar3 < uVar4))(plVar2 = *(long**)( uVar3 + 0x20 ), plVar2 == (long*)0x0) = uVar3 + 0x40);
         if (uVar4 <= uVar3) goto LAB_00100c50;
      }

      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_00100c28;
      uVar3 = uVar3 + 0x40;
      ( **(code**)( *plVar2 + 8 ) )();
   }

   while (uVar3 < uVar4) ;;;
   LAB_00100c50:uVar3 = *(ulong*)( this + 0x28 );
}
*(undefined8*)( this + 0x18 ) = 0;( *Free )(uVar3);}operator_delete(this, 0x30);return;}/* JPH::Shape::ScaleShape(JPH::Vec3) const::Collector::AddHit(JPH::TransformedShape const&) */void TransformedShape_const__(long param_1, undefined8 *param_2) {
   long *plVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long *plVar4;
   ulong uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long lVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   ulong uVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   lVar10 = *(long*)( param_1 + 0x18 );
   uVar14 = lVar10 + 1;
   if (*(ulong*)( param_1 + 0x20 ) < uVar14) {
      uVar5 = *(ulong*)( param_1 + 0x20 ) * 2;
      if (uVar14 <= uVar5) {
         uVar14 = uVar5;
      }

      puVar11 = (undefined8*)( *Allocate )(uVar14 << 6);
      puVar15 = *(undefined8**)( param_1 + 0x28 );
      if (puVar15 != (undefined8*)0x0) {
         lVar10 = *(long*)( param_1 + 0x18 );
         if (puVar11 < puVar15) {
            if (puVar11 < puVar11 + lVar10 * 8) {
               puVar13 = puVar11;
               puVar12 = puVar15;
               puVar16 = puVar15;
               if (puVar11 == (undefined8*)0x0) {
                  plVar4 = (long*)puVar15[4];
                  if (plVar4 != (long*)0x0) {
                     LOCK();
                     plVar1 = plVar4 + 1;
                     *(int*)plVar1 = (int)*plVar1 + -1;
                     UNLOCK();
                     if ((int)*plVar1 == 0) {
                        ( **(code**)( *plVar4 + 8 ) )(plVar4);
                     }

                     puVar12 = *(undefined8**)( param_1 + 0x28 );
                  }

                  puVar13 = (undefined8*)0x0;
                  goto LAB_00100da8;
               }

               do {
                  uVar6 = *puVar16;
                  uVar7 = puVar16[1];
                  uVar8 = puVar16[2];
                  uVar9 = puVar16[3];
                  puVar13[4] = puVar16[4];
                  uVar3 = puVar16[5];
                  *puVar13 = uVar6;
                  puVar13[1] = uVar7;
                  puVar13[5] = uVar3;
                  uVar2 = *(undefined4*)( puVar16 + 6 );
                  puVar13[2] = uVar8;
                  puVar13[3] = uVar9;
                  *(undefined4*)( puVar13 + 6 ) = uVar2;
                  *(undefined4*)( (long)puVar13 + 0x34 ) = *(undefined4*)( (long)puVar16 + 0x34 );
                  puVar13[7] = puVar16[7];
                  puVar15 = puVar16;
                  LAB_00100da8:puVar13 = puVar13 + 8;
                  puVar16 = puVar15 + 8;
                  puVar15 = puVar12;
               }
 while ( puVar13 < puVar11 + lVar10 * 8 );
            }

         }
 else {
            puVar12 = puVar11 + lVar10 * 8 + -8;
            puVar13 = puVar15 + lVar10 * 8 + -8;
            if (!CARRY8(lVar10 * 0x40 - 0x40,(ulong)puVar11)) {
               do {
                  uVar6 = *puVar13;
                  uVar7 = puVar13[1];
                  puVar16 = puVar12 + -8;
                  uVar8 = puVar13[2];
                  uVar9 = puVar13[3];
                  puVar12[4] = puVar13[4];
                  uVar3 = puVar13[5];
                  *puVar12 = uVar6;
                  puVar12[1] = uVar7;
                  puVar12[5] = uVar3;
                  uVar2 = *(undefined4*)( puVar13 + 6 );
                  puVar12[2] = uVar8;
                  puVar12[3] = uVar9;
                  *(undefined4*)( puVar12 + 6 ) = uVar2;
                  *(undefined4*)( (long)puVar12 + 0x34 ) = *(undefined4*)( (long)puVar13 + 0x34 );
                  puVar12[7] = puVar13[7];
                  puVar12 = puVar16;
                  puVar13 = puVar13 + -8;
               }
 while ( puVar11 <= puVar16 );
            }

         }

         ( *Free )(puVar15);
      }

      lVar10 = *(long*)( param_1 + 0x18 );
      *(undefined8**)( param_1 + 0x28 ) = puVar11;
      *(ulong*)( param_1 + 0x20 ) = uVar14;
      uVar14 = lVar10 + 1;
   }
 else {
      puVar11 = *(undefined8**)( param_1 + 0x28 );
   }

   *(ulong*)( param_1 + 0x18 ) = uVar14;
   puVar11 = puVar11 + lVar10 * 8;
   if (puVar11 != (undefined8*)0x0) {
      uVar3 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      lVar10 = param_2[4];
      *puVar11 = *param_2;
      puVar11[1] = uVar3;
      puVar11[4] = lVar10;
      puVar11[2] = uVar6;
      puVar11[3] = uVar7;
      if (lVar10 != 0) {
         LOCK();
         *(int*)( lVar10 + 8 ) = *(int*)( lVar10 + 8 ) + 1;
         UNLOCK();
      }

      puVar11[5] = param_2[5];
      *(undefined4*)( puVar11 + 6 ) = *(undefined4*)( param_2 + 6 );
      *(undefined4*)( (long)puVar11 + 0x34 ) = *(undefined4*)( (long)param_2 + 0x34 );
      puVar11[7] = param_2[7];
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Shape::TransformShape(JPH::Mat44 const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&) const */void JPH::Shape::TransformShape(Shape *this, Mat44 *param_1, CollisionCollector *param_2) {
   Shape *pSVar1;
   long *plVar2;
   long *plVar3;
   undefined8 uVar4;
   undefined1 auVar5[16];
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   ulong uVar12;
   long lVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   long in_FS_OFFSET;
   float fVar17;
   float fVar20;
   float fVar21;
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   float fVar22;
   float fVar24;
   float fVar25;
   undefined1 auVar23[16];
   float fVar26;
   float fVar27;
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   float fVar30;
   uint uVar31;
   undefined4 uVar32;
   float fVar33;
   undefined1 auVar34[12];
   undefined1 local_b8[16];
   undefined8 local_78;
   undefined8 uStack_70;
   float local_68;
   float fStack_64;
   float fStack_60;
   float fStack_5c;
   Shape *local_58;
   undefined1 local_50[12];
   undefined4 uStack_44;
   undefined8 local_40;
   long local_30;
   auVar19 = *(undefined1(*) [16])param_1;
   fVar22 = auVar19._0_4_;
   fVar24 = auVar19._4_4_;
   fVar25 = auVar19._8_4_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar28._0_4_ = fVar25 * fVar25 + fVar24 * fVar24 + fVar22 * fVar22 + 0.0;
   fVar17 = ( *(float*)( param_1 + 0x18 ) * fVar25 + *(float*)( param_1 + 0x14 ) * fVar24 + *(float*)( param_1 + 0x10 ) * fVar22 + 0.0 ) / auVar28._0_4_;
   auVar23._0_4_ = *(float*)( param_1 + 0x10 ) - fVar17 * fVar22;
   auVar23._4_4_ = *(float*)( param_1 + 0x14 ) - fVar17 * fVar24;
   auVar23._8_4_ = *(float*)( param_1 + 0x18 ) - fVar17 * fVar25;
   auVar23._12_4_ = *(float*)( param_1 + 0x1c ) - fVar17 * auVar19._12_4_;
   fVar26 = ( *(float*)( param_1 + 0x28 ) * fVar25 + *(float*)( param_1 + 0x24 ) * fVar24 + *(float*)( param_1 + 0x20 ) * fVar22 + 0.0 ) / auVar28._0_4_;
   fVar17 = *(float*)( param_1 + 0x20 ) - fVar26 * fVar22;
   fVar20 = *(float*)( param_1 + 0x24 ) - fVar26 * fVar24;
   fVar21 = *(float*)( param_1 + 0x28 ) - fVar26 * fVar25;
   fVar30 = auVar23._8_4_ * auVar23._8_4_ + auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_ + 0.0;
   auVar28._4_4_ = fVar30;
   fVar30 = ( auVar23._8_4_ * fVar21 + fVar20 * auVar23._4_4_ + fVar17 * auVar23._0_4_ + 0.0 ) / fVar30;
   auVar18._0_4_ = fVar17 - fVar30 * auVar23._0_4_;
   auVar18._4_4_ = fVar20 - fVar30 * auVar23._4_4_;
   auVar18._8_4_ = fVar21 - fVar30 * auVar23._8_4_;
   auVar18._12_4_ = ( *(float*)( param_1 + 0x2c ) - fVar26 * auVar19._12_4_ ) - fVar30 * auVar23._12_4_;
   fVar17 = auVar18._8_4_ * auVar18._8_4_ + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + 0.0;
   auVar28._12_4_ = fVar17;
   auVar28._8_4_ = fVar17;
   auVar28 = sqrtps(auVar28, auVar28);
   auVar29._4_4_ = auVar28._4_4_;
   uVar31 = auVar28._8_4_;
   local_b8 = auVar28;
   if (( auVar23._4_4_ * fVar22 - fVar24 * auVar23._0_4_ ) * auVar18._8_4_ + ( auVar23._0_4_ * fVar25 - fVar22 * auVar23._8_4_ ) * auVar18._4_4_ + ( auVar23._8_4_ * fVar24 - fVar25 * auVar23._4_4_ ) * auVar18._0_4_ + 0.0 < 0.0) {
      uVar31 = uVar31 ^ __LC13;
      local_b8._12_4_ = uVar31;
      local_b8._8_4_ = uVar31;
      local_b8._0_8_ = auVar28._0_8_;
   }

   uVar32 = auVar28._0_4_;
   auVar29._0_4_ = auVar29._4_4_;
   auVar29._8_4_ = auVar29._4_4_;
   auVar29._12_4_ = auVar29._4_4_;
   auVar28 = divps(auVar23, auVar29);
   uVar4 = *(undefined8*)( param_1 + 0x30 );
   uVar7 = *(undefined8*)( param_1 + 0x38 );
   auVar5._4_4_ = uVar32;
   auVar5._0_4_ = uVar32;
   auVar5._8_4_ = uVar32;
   auVar5._12_4_ = uVar32;
   auVar23 = divps(auVar19, auVar5);
   fVar27 = auVar28._8_4_;
   fVar26 = auVar28._0_4_;
   fVar30 = auVar28._4_4_;
   auVar19._4_4_ = uVar31;
   auVar19._0_4_ = uVar31;
   auVar19._8_4_ = uVar31;
   auVar19._12_4_ = uVar31;
   auVar19 = divps(auVar18, auVar19);
   fVar22 = auVar23._0_4_;
   fVar24 = auVar23._4_4_;
   fVar25 = auVar23._8_4_;
   fVar17 = auVar19._0_4_;
   fVar20 = auVar19._4_4_;
   fVar21 = auVar19._8_4_;
   fVar33 = fVar22 + fVar30 + fVar21;
   if (0.0 <= fVar33) {
      fStack_5c = SQRT(fVar33 + _LC7);
      fStack_60 = _LC14 / fStack_5c;
      fStack_5c = fStack_5c * _LC14;
      local_68 = ( fVar27 - fVar20 ) * fStack_60;
      fStack_64 = ( fVar17 - fVar25 ) * fStack_60;
      fStack_60 = ( fVar24 - fVar26 ) * fStack_60;
   }
 else if (fVar30 <= fVar22) {
      if (fVar22 < fVar21) goto LAB_001010e4;
      fVar21 = _LC7 + ( fVar22 - ( fVar30 + fVar21 ) );
      if (fVar21 < 0.0) {
         fVar21 = sqrtf(fVar21);
         auVar28 = ZEXT416((uint)fVar26);
      }
 else {
         fVar21 = SQRT(fVar21);
      }

      fStack_5c = _LC14 / fVar21;
      local_68 = fVar21 * _LC14;
      fStack_64 = ( fVar24 + auVar28._0_4_ ) * fStack_5c;
      fStack_60 = ( fVar25 + fVar17 ) * fStack_5c;
      fStack_5c = ( fVar27 - fVar20 ) * fStack_5c;
   }
 else if (fVar21 <= fVar30) {
      fVar21 = ( fVar30 - ( fVar22 + fVar21 ) ) + _LC7;
      if (fVar21 < 0.0) {
         fVar21 = sqrtf(fVar21);
         auVar28 = ZEXT416((uint)fVar26);
      }
 else {
         fVar21 = SQRT(fVar21);
      }

      fStack_60 = _LC14 / fVar21;
      fStack_64 = fVar21 * _LC14;
      local_68 = ( fVar24 + auVar28._0_4_ ) * fStack_60;
      fStack_5c = ( fVar17 - fVar25 ) * fStack_60;
      fStack_60 = ( fVar27 + fVar20 ) * fStack_60;
   }
 else {
      LAB_001010e4:fVar21 = ( fVar21 - ( fVar22 + fVar30 ) ) + _LC7;
      if (fVar21 < 0.0) {
         fVar21 = sqrtf(fVar21);
         auVar28 = ZEXT416((uint)fVar26);
      }
 else {
         fVar21 = SQRT(fVar21);
      }

      fStack_5c = _LC14 / fVar21;
      fStack_60 = fVar21 * _LC14;
      local_68 = ( fVar17 + fVar25 ) * fStack_5c;
      fStack_64 = ( fVar27 + fVar20 ) * fStack_5c;
      fStack_5c = ( fVar24 - auVar28._0_4_ ) * fStack_5c;
   }

   LOCK();
   *(int*)( this + 8 ) = *(int*)( this + 8 ) + 1;
   UNLOCK();
   local_50._0_8_ = _LC15;
   stack0xffffffffffffffb8 = 0xffffffff3f800000;
   local_40 = 0xffffffff;
   local_78 = uVar4;
   uStack_70 = uVar7;
   local_58 = this;
   auVar34 = ( **(code**)( *(long*)this + 0x120 ) )(local_b8._0_8_, local_b8._8_8_);
   local_50 = auVar34;
   if (*(code**)( *(long*)param_2 + 0x28 ) != TransformedShape_const__) {
      ( **(code**)( *(long*)param_2 + 0x28 ) )(param_2, &local_78);
      goto LAB_0010121a;
   }

   lVar13 = *(long*)( param_2 + 0x18 );
   uVar12 = lVar13 + 1;
   if (*(ulong*)( param_2 + 0x20 ) < uVar12) {
      uVar6 = *(ulong*)( param_2 + 0x20 ) * 2;
      if (uVar12 <= uVar6) {
         uVar12 = uVar6;
      }

      puVar9 = (undefined8*)( *Allocate )(uVar12 << 6);
      puVar15 = *(undefined8**)( param_2 + 0x28 );
      auVar34 = local_50;
      if (puVar15 != (undefined8*)0x0) {
         lVar13 = *(long*)( param_2 + 0x18 );
         if (puVar9 < puVar15) {
            puVar11 = puVar9 + lVar13 * 8;
            if (puVar9 < puVar11) {
               puVar10 = puVar9;
               puVar16 = puVar15;
               if (puVar9 == (undefined8*)0x0) {
                  plVar3 = (long*)puVar15[4];
                  puVar14 = puVar15;
                  if (plVar3 != (long*)0x0) {
                     LOCK();
                     plVar2 = plVar3 + 1;
                     *(int*)plVar2 = (int)*plVar2 + -1;
                     UNLOCK();
                     if ((int)*plVar2 == 0) {
                        ( **(code**)( *plVar3 + 8 ) )(plVar3);
                     }

                     puVar14 = *(undefined8**)( param_2 + 0x28 );
                  }

                  puVar16 = puVar15 + 8;
                  puVar10 = (undefined8*)0x40;
                  puVar15 = puVar14;
                  if (puVar11 < (undefined8*)0x41) goto LAB_001013e8;
               }

               do {
                  uVar4 = puVar16[4];
                  uVar7 = puVar16[1];
                  puVar14 = puVar10 + 8;
                  *puVar10 = *puVar16;
                  puVar10[1] = uVar7;
                  uVar7 = puVar16[2];
                  uVar8 = puVar16[3];
                  puVar10[4] = uVar4;
                  uVar4 = puVar16[5];
                  puVar10[2] = uVar7;
                  puVar10[3] = uVar8;
                  puVar10[5] = uVar4;
                  *(undefined4*)( puVar10 + 6 ) = *(undefined4*)( puVar16 + 6 );
                  *(undefined4*)( (long)puVar10 + 0x34 ) = *(undefined4*)( (long)puVar16 + 0x34 );
                  puVar10[7] = puVar16[7];
                  puVar10 = puVar14;
                  puVar16 = puVar16 + 8;
               }
 while ( puVar14 < puVar11 );
            }

         }
 else {
            puVar11 = puVar15 + lVar13 * 8 + -8;
            puVar10 = puVar9 + lVar13 * 8 + -8;
            if (!CARRY8(lVar13 * 0x40 - 0x40,(ulong)puVar9)) {
               do {
                  uVar4 = puVar11[4];
                  uVar7 = puVar11[1];
                  puVar16 = puVar10 + -8;
                  *puVar10 = *puVar11;
                  puVar10[1] = uVar7;
                  uVar7 = puVar11[2];
                  uVar8 = puVar11[3];
                  puVar10[4] = uVar4;
                  uVar4 = puVar11[5];
                  puVar10[2] = uVar7;
                  puVar10[3] = uVar8;
                  puVar10[5] = uVar4;
                  *(undefined4*)( puVar10 + 6 ) = *(undefined4*)( puVar11 + 6 );
                  *(undefined4*)( (long)puVar10 + 0x34 ) = *(undefined4*)( (long)puVar11 + 0x34 );
                  puVar10[7] = puVar11[7];
                  puVar11 = puVar11 + -8;
                  puVar10 = puVar16;
               }
 while ( puVar9 <= puVar16 );
            }

         }

         LAB_001013e8:( *Free )(puVar15);
         auVar34 = local_50;
      }

      lVar13 = *(long*)( param_2 + 0x18 );
      *(undefined8**)( param_2 + 0x28 ) = puVar9;
      *(ulong*)( param_2 + 0x20 ) = uVar12;
      uVar12 = lVar13 + 1;
   }
 else {
      puVar9 = *(undefined8**)( param_2 + 0x28 );
   }

   *(ulong*)( param_2 + 0x18 ) = uVar12;
   puVar9 = puVar9 + lVar13 * 8;
   local_50 = auVar34;
   if (puVar9 != (undefined8*)0x0) {
      *puVar9 = local_78;
      puVar9[1] = uStack_70;
      puVar9[4] = local_58;
      puVar9[2] = CONCAT44(fStack_64, local_68);
      puVar9[3] = CONCAT44(fStack_5c, fStack_60);
      if (local_58 != (Shape*)0x0) {
         LOCK();
         *(int*)( local_58 + 8 ) = *(int*)( local_58 + 8 ) + 1;
         UNLOCK();
      }

      *(undefined1(*) [12])( puVar9 + 5 ) = auVar34;
      *(undefined4*)( (long)puVar9 + 0x34 ) = uStack_44;
      puVar9[7] = local_40;
   }

   LAB_0010121a:if (local_58 != (Shape*)0x0) {
      LOCK();
      pSVar1 = local_58 + 8;
      *(int*)pSVar1 = *(int*)pSVar1 + -1;
      UNLOCK();
      if (*(int*)pSVar1 == 0) {
         ( **(code**)( *(long*)local_58 + 8 ) )();
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JPH::GetRTTIOfType(JPH::ShapeSettings*) */undefined1 * JPH::GetRTTIOfType(ShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ShapeSettings*)::rtti,"ShapeSettings",0x40,
                      (_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::ShapeSettings*)::{lambda(void*)#1}::_FUN,
                      ShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ShapeSettings*)::rtti;
}



/* JPH::ShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::ShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::Shape::sRestoreFromBinaryState(JPH::StreamIn&) */

Shape * __thiscall JPH::Shape::sRestoreFromBinaryState(Shape *this,StreamIn *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  Shape SVar5;
  long *plVar6;
  long in_FS_OFFSET;
  byte local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)param_1;
  this[0x20] = (Shape)0x0;
  (**(code **)(lVar2 + 0x10))(param_1,&local_21,1);
  cVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar4 != '\0') || (cVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar4 != '\0')) {
    if (this[0x20] == (Shape)0x1) {
      plVar6 = *(long **)this;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    else if ((this[0x20] == (Shape)0x2) && (*(Shape **)this != this + 0x10)) {
      (*Free)();
    }
    this[0x20] = (Shape)0x0;
    *(Shape **)this = this + 0x10;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(this,"Failed to read type id");
    this[0x20] = (Shape)0x2;
    goto LAB_0010188a;
  }
  plVar6 = (long *)(*(code *)(&ShapeFunctions::sRegistry)[(ulong)local_21 * 2])();
  if (plVar6 != (long *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar6 + 0x128))(plVar6,param_1);
  cVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar4 == '\0')) {
    if (this[0x20] == (Shape)0x1) {
      plVar3 = *(long **)this;
      if (plVar3 == (long *)0x0) goto LAB_001018f6;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_001018f6;
      (**(code **)(*plVar3 + 8))();
      this[0x20] = (Shape)0x0;
      *(long **)this = plVar6;
    }
    else {
      if ((this[0x20] == (Shape)0x2) && (*(Shape **)this != this + 0x10)) {
        (*Free)();
      }
LAB_001018f6:
      this[0x20] = (Shape)0x0;
      *(long **)this = plVar6;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    SVar5 = (Shape)0x1;
  }
  else {
    if (this[0x20] == (Shape)0x1) {
      plVar3 = *(long **)this;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    else if ((this[0x20] == (Shape)0x2) && (*(Shape **)this != this + 0x10)) {
      (*Free)();
    }
    this[0x20] = (Shape)0x0;
    *(Shape **)this = this + 0x10;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(this,"Failed to restore shape");
    SVar5 = (Shape)0x2;
  }
  this[0x20] = SVar5;
  LOCK();
  plVar3 = plVar6 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_0010188a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Shape::ScaleShape(JPH::Vec3) const */

undefined8 * JPH::Shape::ScaleShape(long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  long lVar8;
  undefined2 uVar9;
  char cVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  code *pcVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  long in_FS_OFFSET;
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
  undefined1 auVar34 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined **local_108;
  undefined4 local_100;
  undefined1 local_fc [12];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined1 local_d8 [4];
  float afStack_d4 [3];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined8 local_98;
  float afStack_90 [2];
  undefined *local_88;
  long *local_80;
  undefined1 local_78;
  long local_70 [2];
  char local_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  fVar25 = (float)((ulong)param_1 >> 0x20);
  fVar26 = (float)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar24 = (float)param_2;
  if (fVar24 * fVar24 + fVar26 * fVar26 + 0.0 + fVar25 * fVar25 <= _LC18) {
    local_78 = 0;
    local_98 = &local_88;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(&local_98,"Can\'t use zero scale!");
    *(undefined1 *)(param_3 + 4) = 2;
    local_78 = 2;
    *param_3 = param_3 + 2;
    if (local_98 == &local_88) {
      uVar19 = (int)afStack_90[0] + 1;
      if (uVar19 < 8) {
        if ((uVar19 & 4) == 0) {
          if ((uVar19 != 0) &&
             (*(undefined1 *)(param_3 + 2) = *(undefined1 *)local_98, (uVar19 & 2) != 0)) {
            *(undefined2 *)((long)param_3 + (ulong)uVar19 + 0xe) =
                 *(undefined2 *)((long)local_98 + ((ulong)uVar19 - 2));
          }
        }
        else {
          *(undefined4 *)(param_3 + 2) = *(undefined4 *)local_98;
          *(undefined4 *)((long)param_3 + (ulong)uVar19 + 0xc) =
               *(undefined4 *)((long)local_98 + ((ulong)uVar19 - 4));
        }
      }
      else {
        param_3[2] = *local_98;
        *(undefined8 *)((long)param_3 + (ulong)uVar19 + 8) =
             *(undefined8 *)((long)local_98 + ((ulong)uVar19 - 8));
        lVar12 = (long)(param_3 + 2) - ((ulong)(param_3 + 3) & 0xfffffffffffffff8);
        uVar19 = uVar19 + (int)lVar12 & 0xfffffff8;
        if (7 < uVar19) {
          uVar18 = 0;
          do {
            uVar17 = (int)uVar18 + 8;
            *(undefined8 *)(((ulong)(param_3 + 3) & 0xfffffffffffffff8) + uVar18) =
                 *(undefined8 *)((long)local_98 + (uVar18 - lVar12));
            uVar18 = (ulong)uVar17;
          } while (uVar17 < uVar19);
        }
      }
    }
    else {
      *param_3 = local_98;
      param_3[2] = local_88;
    }
    param_3[1] = CONCAT44(afStack_90[1],afStack_90[0]);
    goto LAB_00101aa0;
  }
  cVar10 = (**(code **)(*param_4 + 0x118))(param_4);
  if (cVar10 != '\0') {
    if ((_LC7 - fVar24) * (_LC7 - fVar24) +
        (_LC7 - fVar25) * (_LC7 - fVar25) + (_LC7 - fVar26) * (_LC7 - fVar26) + 0.0 <= _LC18) {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    else {
      plVar11 = (long *)(*Allocate)(0x40);
      *(undefined4 *)(plVar11 + 1) = 0;
      plVar11[2] = 0;
      *(undefined2 *)(plVar11 + 3) = 0xa02;
      *plVar11 = (long)&StaticCompoundShapeSettings::vtable;
      plVar11[4] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar11 = (long)JPH::StaticCompoundShapeSettings::Create;
      plVar11[6] = param_1;
      plVar11[7] = param_2;
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      param_4 = plVar11;
    }
    *(undefined1 *)(param_3 + 4) = 1;
    *param_3 = param_4;
    goto LAB_00101aa0;
  }
  local_108 = &PTR__Collector_00105d30;
  local_dc = 0;
  pcVar15 = *(code **)(*param_4 + 0xc0);
  local_100 = 0x7f7fffff;
  local_fc = SUB1612((undefined1  [16])0x0,0);
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_a8 = (**(code **)(*param_4 + 0x18))(param_4);
  local_9c = 0x3f800000;
  _local_d8 = ZEXT416((uint)_LC7);
  lVar12 = 0;
  local_c8 = __LC22;
  uStack_c0 = _UNK_00105df8;
  local_b8 = __LC23;
  uStack_b0 = _UNK_00105e08;
  do {
    fVar1 = *(float *)(local_d8 + lVar12);
    fVar23 = *(float *)(local_d8 + lVar12 + 4);
    fVar27 = *(float *)(local_d8 + lVar12 + 8);
    fVar28 = *(float *)(local_d8 + lVar12 + 0xc);
    *(float *)((long)&local_98 + lVar12) =
         fVar28 * __LC24 + fVar1 * fVar26 + fVar23 * 0.0 + fVar27 * 0.0;
    *(float *)((long)&local_98 + lVar12 + 4) =
         fVar28 * _UNK_00105e14 + fVar1 * 0.0 + fVar23 * fVar25 + fVar27 * 0.0;
    *(float *)((long)afStack_90 + lVar12) =
         fVar28 * _UNK_00105e18 + fVar1 * 0.0 + fVar23 * 0.0 + fVar27 * fVar24;
    *(float *)((long)afStack_90 + lVar12 + 4) =
         fVar28 * _UNK_00105e1c + fVar1 * 0.0 + fVar23 * 0.0 + fVar27 * 0.0;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  (*pcVar15)(param_4,&local_98,&local_108);
  lVar12 = CONCAT44(uStack_ec,uStack_f0);
  afStack_90[0] = 0.0;
  local_88 = (undefined *)0x0;
  local_60 = '\0';
  local_48 = (long *)0x0;
  local_98 = (undefined **)&CompoundShapeSettings::vtable;
  local_58 = (undefined1  [16])0x0;
  if (lVar12 != 0) {
    plVar13 = (long *)(*Allocate)(lVar12 << 6);
    plVar11 = local_48;
    if (local_48 != (long *)0x0) {
      if (plVar13 < local_48) {
        lVar5 = local_58._0_8_ * 8;
        if (plVar13 < plVar13 + lVar5) {
          plVar14 = plVar13;
          if (plVar13 != (long *)0x0) goto LAB_00101eb0;
          plVar14 = (long *)local_48[1];
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar16 = plVar14 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
          }
          plVar14 = (long *)*plVar11;
          if (plVar14 == (long *)0x0) {
LAB_00101eab:
            plVar14 = (long *)0x0;
          }
          else {
            LOCK();
            plVar16 = plVar14 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 != 0) goto LAB_00101eab;
            (**(code **)(*plVar14 + 0x18))();
            plVar14 = (long *)0x0;
          }
          while( true ) {
            plVar14 = plVar14 + 8;
            plVar11 = plVar11 + 8;
            if (plVar13 + lVar5 <= plVar14) break;
LAB_00101eb0:
            lVar2 = *plVar11;
            lVar3 = plVar11[1];
            *plVar11 = 0;
            *plVar14 = lVar2;
            plVar14[1] = lVar3;
            lVar2 = plVar11[2];
            lVar3 = plVar11[3];
            lVar8 = plVar11[4];
            lVar4 = plVar11[5];
            *(int *)(plVar14 + 6) = (int)plVar11[6];
            plVar14[2] = lVar2;
            plVar14[3] = lVar3;
            plVar14[4] = lVar8;
            plVar14[5] = lVar4;
          }
        }
      }
      else {
        plVar11 = local_48 + local_58._0_8_ * 8 + -8;
        plVar14 = plVar13 + local_58._0_8_ * 8 + -8;
        if (!CARRY8(local_58._0_8_ * 0x40 - 0x40,(ulong)plVar13)) {
          do {
            lVar5 = plVar11[1];
            plVar16 = plVar14 + -8;
            *plVar14 = *plVar11;
            plVar14[1] = lVar5;
            lVar5 = plVar11[3];
            lVar2 = plVar11[4];
            lVar3 = plVar11[5];
            lVar8 = plVar11[6];
            plVar14[2] = plVar11[2];
            plVar14[3] = lVar5;
            plVar14[4] = lVar2;
            plVar14[5] = lVar3;
            *(int *)(plVar14 + 6) = (int)lVar8;
            plVar14 = plVar16;
            plVar11 = plVar11 + -8;
          } while (plVar13 <= plVar16);
        }
      }
      (*Free)(local_48);
    }
    lVar5 = CONCAT44(uStack_ec,uStack_f0);
    pfVar6 = (float *)CONCAT44(local_dc,uStack_e0);
    local_58._8_8_ = lVar12;
    local_48 = plVar13;
    if (pfVar6 + lVar5 * 0x10 != pfVar6) {
      pfVar22 = pfVar6;
      do {
        plVar11 = *(long **)(pfVar22 + 8);
        lVar12 = *(long *)(pfVar22 + 10);
        lVar2 = *(long *)(pfVar22 + 0xc);
        fVar24 = _LC7 - pfVar22[10];
        fVar26 = _LC7 - pfVar22[0xc];
        if (fVar26 * fVar26 + (_LC7 - pfVar22[0xb]) * (_LC7 - pfVar22[0xb]) + fVar24 * fVar24 + 0.0
            <= _LC18) {
          pcVar15 = (code *)*plVar11;
        }
        else {
          plVar13 = (long *)(*Allocate)(0x40);
          uVar9 = _LC20;
          *(undefined4 *)(plVar13 + 1) = 0;
          *(undefined2 *)(plVar13 + 3) = uVar9;
          plVar13[2] = 0;
          *plVar13 = (long)&StaticCompoundShapeSettings::vtable;
          plVar13[4] = (long)plVar11;
          if (plVar11 != (long *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *plVar13 = (long)JPH::StaticCompoundShapeSettings::Create;
          plVar13[6] = lVar12;
          plVar13[7] = lVar2;
          pcVar15 = JPH::StaticCompoundShapeSettings::Create;
          plVar11 = plVar13;
        }
        pfVar21 = pfVar22 + 0x10;
        auVar34 = (**(code **)(pcVar15 + 0x18))(plVar11);
        fVar27 = auVar34._8_4_;
        fVar24 = pfVar22[7];
        fVar26 = pfVar22[4];
        local_128._0_4_ = auVar34._0_4_;
        fVar25 = pfVar22[5];
        fVar1 = pfVar22[6];
        local_128._4_4_ = auVar34._4_4_;
        fVar29 = (float)((uint)pfVar22[4] ^ __LC25);
        fVar30 = (float)((uint)pfVar22[5] ^ _UNK_00105e24);
        fVar31 = (float)((uint)pfVar22[6] ^ _UNK_00105e28);
        fVar32 = (float)((uint)pfVar22[7] ^ _UNK_00105e2c);
        fVar33 = (fVar24 * (float)local_128 + fVar26 * 0.0 + fVar25 * fVar27) -
                 fVar1 * local_128._4_4_;
        fVar28 = (fVar24 * local_128._4_4_ - fVar26 * fVar27) + fVar25 * 0.0 +
                 fVar1 * (float)local_128;
        fVar23 = ((fVar24 * fVar27 + fVar26 * local_128._4_4_) - fVar25 * (float)local_128) +
                 fVar1 * 0.0;
        fVar24 = ((fVar24 * 0.0 - fVar26 * (float)local_128) - fVar25 * local_128._4_4_) -
                 fVar1 * fVar27;
        local_128 = CONCAT44(pfVar22[1] -
                             (fVar23 * fVar29 +
                             fVar28 * fVar32 + (fVar30 * fVar24 - fVar33 * fVar31)),
                             *pfVar22 -
                             ((fVar28 * fVar31 + fVar33 * fVar32 + fVar29 * fVar24) -
                             fVar23 * fVar30));
        uStack_120 = CONCAT44(pfVar22[3] -
                              (((fVar32 * fVar24 - fVar33 * fVar29) - fVar28 * fVar30) -
                              fVar23 * fVar31),
                              pfVar22[2] -
                              (fVar23 * fVar32 +
                              ((fVar33 * fVar30 + fVar31 * fVar24) - fVar28 * fVar29)));
        JPH::CompoundShapeSettings::AddShape
                  (local_128,uStack_120,*(undefined8 *)(pfVar22 + 4),*(undefined8 *)(pfVar22 + 6),
                   &local_98,plVar11,0);
        pfVar22 = pfVar21;
      } while (pfVar6 + lVar5 * 0x10 != pfVar21);
    }
  }
  JPH::StaticCompoundShapeSettings::Create();
  local_98 = (undefined **)JPH::PhysicsMaterial::sRestoreFromBinaryState;
  if (local_48 != (long *)0x0) {
    if (local_58._0_8_ != 0) {
      plVar13 = local_48 + local_58._0_8_ * 8;
      for (plVar11 = local_48; plVar11 < plVar13; plVar11 = plVar11 + 8) {
        plVar14 = (long *)plVar11[1];
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar16 = plVar14 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
        plVar14 = (long *)*plVar11;
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar16 = plVar14 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
      }
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_58._8_8_;
    local_58 = auVar7 << 0x40;
    (*Free)(local_48);
  }
  local_98 = &PTR_GetRTTI_00105bb8;
  if (local_60 == '\x01') {
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar11 = local_80 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
  }
  else if ((local_60 == '\x02') && (local_80 != local_70)) {
    (*Free)();
  }
  uVar18 = CONCAT44(local_dc,uStack_e0);
  local_108 = &PTR__Collector_00105d30;
  if (uVar18 != 0) {
    if ((CONCAT44(uStack_ec,uStack_f0) != 0) &&
       (uVar20 = CONCAT44(uStack_ec,uStack_f0) * 0x40 + uVar18, uVar18 < uVar20)) {
      do {
        plVar11 = *(long **)(uVar18 + 0x20);
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        uVar18 = uVar18 + 0x40;
      } while (uVar18 < uVar20);
      uVar18 = CONCAT44(local_dc,uStack_e0);
    }
    uStack_f0 = 0;
    uStack_ec = 0;
    (*Free)(uVar18);
  }
LAB_00101aa0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Shape::sCollidePointUsingRayCast(JPH::Shape const&, JPH::Vec3, JPH::SubShapeIDCreator
   const&, JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) */

void __thiscall
JPH::Shape::sCollidePointUsingRayCast
          (undefined8 param_1_00,undefined8 param_2,Shape *this,undefined8 param_1,long *param_5,
          undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58 [2];
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  long local_30;
  
  fVar7 = (float)((ulong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fVar5 = (float)((ulong)param_1_00 >> 0x20);
  fVar4 = (float)param_1_00;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x20))(&local_78,this);
  auVar1._4_4_ = -(uint)(fStack_74 <= fVar5 && fVar5 <= fStack_64);
  auVar1._0_4_ = -(uint)(local_78 <= fVar4 && fVar4 <= local_68);
  auVar1._8_4_ = -(uint)(fStack_70 <= fVar6 && fVar6 <= fStack_60);
  auVar1._12_4_ = -(uint)(fStack_6c <= fVar7 && fVar7 <= fStack_5c);
  uVar3 = movmskps(uVar2,auVar1);
  if ((~uVar3 & 7) == 0) {
    local_98 = &PTR__HitCountCollector_00105d70;
    local_80 = 0xffffffff00000000;
    local_a4 = 0x101;
    fStack_3c = (fStack_64 - fStack_74) * __LC29;
    local_90 = 0x3f800001;
    local_88 = 0;
    local_a2 = 1;
    local_48 = fStack_3c * __LC22;
    fStack_44 = fStack_3c * _UNK_00105df4;
    fStack_40 = fStack_3c * _UNK_00105df8;
    fStack_3c = fStack_3c * _UNK_00105dfc;
    local_58[0] = fVar4;
    fStack_50 = fVar6;
    (**(code **)(*(long *)this + 0xa0))(this,local_58,&local_a4,param_1,&local_98,param_6);
    if ((local_80 & 1) != 0) {
      local_a0 = 0xffffffff;
      if (param_5[2] != 0) {
        local_a0 = *(undefined4 *)(param_5[2] + 0x34);
      }
      local_9c = local_80._4_4_;
      (**(code **)(*param_5 + 0x28))(param_5,&local_a0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Shape::sRestoreWithChildren(JPH::StreamIn&, JPH::Array<JPH::Ref<JPH::Shape>,
   JPH::STLAllocator<JPH::Ref<JPH::Shape> > >&, JPH::Array<JPH::Ref<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::Ref<JPH::PhysicsMaterial> > >&) */

Shape * __thiscall
JPH::Shape::sRestoreWithChildren(Shape *this,StreamIn *param_1,Array *param_2,Array *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  Shape *pSVar16;
  undefined8 *puVar17;
  ulong extraout_RDX;
  long *plVar18;
  Shape *pSVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  byte bVar21;
  long *local_d0;
  uint local_a0;
  uint local_9c;
  Shape *local_98;
  undefined8 local_90;
  long *local_88 [2];
  Shape local_78;
  Shape *local_68;
  long local_60;
  long *local_58 [2];
  Shape local_48;
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (Shape)0x0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_a0,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar2 == '\0')) {
    if (local_a0 == 0xffffffff) {
      if (local_78 == (Shape)0x1) {
        if (local_98 != (Shape *)0x0) {
          LOCK();
          pSVar16 = local_98 + 8;
          *(int *)pSVar16 = *(int *)pSVar16 + -1;
          UNLOCK();
          if (*(int *)pSVar16 == 0) {
            (*(code *)(*(long **)local_98)[1])();
          }
        }
      }
      else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
        (*Free)();
      }
      this[0x20] = (Shape)0x1;
      *(undefined8 *)this = 0;
      goto LAB_00102547;
    }
    if ((ulong)local_a0 < *(ulong *)param_2) {
      lVar9 = *(long *)(param_2 + 0x10);
      if (local_78 == (Shape)0x1) {
        if (local_98 != (Shape *)0x0) {
          LOCK();
          pSVar16 = local_98 + 8;
          *(int *)pSVar16 = *(int *)pSVar16 + -1;
          UNLOCK();
          if (*(int *)pSVar16 == 0) {
            (*(code *)(*(long **)local_98)[1])();
          }
        }
      }
      else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
        (*Free)();
      }
      local_98 = *(Shape **)(lVar9 + (ulong)local_a0 * 8);
      local_78 = (Shape)0x0;
      if (local_98 != (Shape *)0x0) {
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
        UNLOCK();
      }
      this[0x20] = (Shape)0x1;
      *(Shape **)this = local_98;
      goto LAB_00102547;
    }
    sRestoreFromBinaryState((Shape *)&local_68,param_1);
    if (local_78 == (Shape)0x1) {
      if (local_98 != (Shape *)0x0) {
        LOCK();
        pSVar16 = local_98 + 8;
        *(int *)pSVar16 = *(int *)pSVar16 + -1;
        UNLOCK();
        if (*(int *)pSVar16 == 0) {
          (*(code *)(*(long **)local_98)[1])();
        }
      }
    }
    else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
      (*Free)();
    }
    lVar9 = local_60;
    local_78 = local_48;
    if (local_48 == (Shape)0x1) {
      local_98 = local_68;
    }
    else if (local_48 == (Shape)0x2) {
      pSVar16 = (Shape *)local_58;
      if (local_68 == pSVar16) {
        uVar13 = local_60 + 1;
        pSVar19 = (Shape *)local_88;
        if (7 < (uint)uVar13) {
          uVar15 = 0;
          do {
            uVar14 = (int)uVar15 + 8;
            uVar20 = (ulong)uVar14;
            *(undefined8 *)((Shape *)local_88 + uVar15) = *(undefined8 *)(pSVar16 + uVar15);
            uVar15 = uVar20;
          } while (uVar14 < ((uint)uVar13 & 0xfffffff8));
          pSVar19 = (Shape *)local_88 + uVar20;
          pSVar16 = pSVar16 + uVar20;
        }
        lVar12 = 0;
        if ((uVar13 & 4) != 0) {
          *(undefined4 *)pSVar19 = *(undefined4 *)pSVar16;
          lVar12 = 4;
        }
        if ((uVar13 & 2) != 0) {
          *(undefined2 *)(pSVar19 + lVar12) = *(undefined2 *)(pSVar16 + lVar12);
          lVar12 = lVar12 + 2;
        }
        if ((uVar13 & 1) != 0) {
          pSVar19[lVar12] = pSVar16[lVar12];
        }
        local_90 = lVar9;
        local_98 = (Shape *)local_88;
        if (local_78 != (Shape)0x2) goto LAB_0010262a;
      }
      else {
        local_98 = local_68;
        local_90 = local_60;
        local_88[0] = local_58[0];
      }
      local_90 = lVar9;
      this[0x20] = (Shape)0x2;
      *(Shape **)this = this + 0x10;
      if (local_98 == (Shape *)local_88) {
        uVar13 = lVar9 + 1;
        uVar14 = (uint)uVar13;
        if (uVar14 < 8) {
          if ((uVar13 & 4) == 0) {
            if (uVar14 != 0) {
              this[0x10] = local_88[0]._0_1_;
              if ((uVar13 & 2) != 0) {
                *(undefined2 *)(this + (uVar13 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)local_88 + ((uVar13 & 0xffffffff) - 2));
              }
            }
          }
          else {
            *(undefined4 *)(this + 0x10) = local_88[0]._0_4_;
            *(undefined4 *)(this + (uVar13 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)local_88 + ((uVar13 & 0xffffffff) - 4));
          }
        }
        else {
          *(long **)(this + 0x10) = local_88[0];
          *(undefined8 *)(this + (uVar13 & 0xffffffff) + 8) =
               *(undefined8 *)((long)local_88 + ((uVar13 & 0xffffffff) - 8));
          lVar12 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
          uVar14 = uVar14 + (int)lVar12 & 0xfffffff8;
          if (7 < uVar14) {
            uVar8 = 0;
            do {
              uVar13 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar13) =
                   *(undefined8 *)((Shape *)local_88 + (uVar13 - lVar12));
            } while (uVar8 < uVar14);
          }
        }
      }
      else {
        *(Shape **)this = local_98;
        *(long **)(this + 0x10) = local_88[0];
      }
      *(long *)(this + 8) = lVar9;
      goto LAB_00102547;
    }
LAB_0010262a:
    lVar9 = *(long *)param_2;
    uVar13 = lVar9 + 1;
    if (*(ulong *)(param_2 + 8) < uVar13) {
      uVar15 = *(ulong *)(param_2 + 8) * 2;
      if (uVar13 <= uVar15) {
        uVar13 = uVar15;
      }
      puVar3 = (undefined8 *)(*Allocate)(uVar13 * 8);
      puVar17 = *(undefined8 **)(param_2 + 0x10);
      if (puVar17 != (undefined8 *)0x0) {
        lVar9 = *(long *)param_2;
        if (puVar3 < puVar17) {
          for (puVar6 = puVar3; puVar6 < puVar3 + lVar9; puVar6 = puVar6 + 1) {
            uVar1 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar6 = uVar1;
          }
        }
        else {
          puVar17 = puVar17 + lVar9 + -1;
          puVar6 = puVar3 + lVar9 + -1;
          if (!CARRY8(lVar9 * 8 - 8,(ulong)puVar3)) {
            do {
              uVar1 = *puVar17;
              puVar7 = puVar6 + -1;
              puVar17 = puVar17 + -1;
              *puVar6 = uVar1;
              puVar6 = puVar7;
            } while (puVar3 <= puVar7);
          }
        }
        (*Free)();
      }
      lVar9 = *(long *)param_2;
      *(undefined8 **)(param_2 + 0x10) = puVar3;
      *(ulong *)(param_2 + 8) = uVar13;
      uVar13 = lVar9 + 1;
    }
    else {
      puVar3 = *(undefined8 **)(param_2 + 0x10);
    }
    *(ulong *)param_2 = uVar13;
    puVar3[lVar9] = local_98;
    if (local_98 != (Shape *)0x0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_9c,4);
    cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar2 == '\0'))
    {
      uVar13 = (ulong)local_9c;
      if (uVar13 != 0) {
        local_d0 = (long *)(*Allocate)(uVar13 * 8);
        uVar15 = (ulong)local_9c;
        if (local_9c == 0) goto LAB_001030b7;
        uVar15 = 0;
LAB_00102b79:
        sRestoreWithChildren((Shape *)&local_68,param_1,param_2,param_3);
        pSVar16 = local_68;
        if (local_48 != (Shape)0x2) goto code_r0x00102b99;
        this[0x20] = (Shape)0x2;
        *(Shape **)this = this + 0x10;
        if (local_68 == (Shape *)local_58) {
          pSVar19 = this + 0x10;
          for (uVar13 = (ulong)((int)local_60 + 1); uVar13 != 0; uVar13 = uVar13 - 1) {
            *pSVar19 = *pSVar16;
            pSVar16 = pSVar16 + (ulong)bVar21 * -2 + 1;
            pSVar19 = pSVar19 + (ulong)bVar21 * -2 + 1;
          }
        }
        else {
          *(Shape **)this = local_68;
          *(long **)(this + 0x10) = local_58[0];
        }
        *(long *)(this + 8) = local_60;
        goto LAB_00102780;
      }
      local_d0 = (long *)0x0;
      uVar15 = 0;
      uVar20 = 0;
      goto LAB_001026a8;
    }
    if (local_78 == (Shape)0x1) {
      if (local_98 != (Shape *)0x0) {
        LOCK();
        pSVar16 = local_98 + 8;
        *(int *)pSVar16 = *(int *)pSVar16 + -1;
        UNLOCK();
        if (*(int *)pSVar16 == 0) {
          (*(code *)(*(long **)local_98)[1])();
        }
      }
    }
    else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
      (*Free)();
    }
    local_78 = (Shape)0x0;
    local_98 = (Shape *)local_88;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(&local_98,"Failed to read stream");
    local_78 = (Shape)0x2;
    this[0x20] = (Shape)0x2;
    *(Shape **)this = this + 0x10;
    if (local_98 != (Shape *)local_88) goto LAB_00102532;
    uVar13 = local_90 + 1;
    if ((uint)uVar13 < 8) goto LAB_00102ce8;
    *(long **)(this + 0x10) = local_88[0];
    *(undefined8 *)(this + (uVar13 & 0xffffffff) + 8) =
         *(undefined8 *)((long)local_88 + ((uVar13 & 0xffffffff) - 8));
    lVar9 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
    uVar14 = (int)lVar9 + (uint)uVar13 & 0xfffffff8;
    if (7 < uVar14) {
      uVar8 = 0;
      do {
        uVar13 = (ulong)uVar8;
        uVar8 = uVar8 + 8;
        *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar13) =
             *(undefined8 *)((Shape *)local_88 + (uVar13 - lVar9));
      } while (uVar8 < uVar14);
    }
  }
  else {
    if (local_78 == (Shape)0x1) {
      if (local_98 != (Shape *)0x0) {
        LOCK();
        pSVar16 = local_98 + 8;
        *(int *)pSVar16 = *(int *)pSVar16 + -1;
        UNLOCK();
        if (*(int *)pSVar16 == 0) {
          (*(code *)(*(long **)local_98)[1])();
        }
      }
    }
    else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
      (*Free)();
    }
    local_78 = (Shape)0x0;
    local_98 = (Shape *)local_88;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(&local_98,"Failed to read shape id");
    local_78 = (Shape)0x2;
    this[0x20] = (Shape)0x2;
    *(Shape **)this = this + 0x10;
    if (local_98 == (Shape *)local_88) {
      uVar13 = local_90 + 1;
      if ((uint)uVar13 < 8) {
LAB_00102ce8:
        if ((uVar13 & 4) == 0) {
          if ((int)uVar13 != 0) {
            this[0x10] = local_88[0]._0_1_;
            if ((uVar13 & 2) != 0) {
              *(undefined2 *)(this + (uVar13 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)local_88 + ((uVar13 & 0xffffffff) - 2));
            }
          }
        }
        else {
          *(undefined4 *)(this + 0x10) = local_88[0]._0_4_;
          *(undefined4 *)(this + (uVar13 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)local_88 + ((uVar13 & 0xffffffff) - 4));
        }
      }
      else {
        *(long **)(this + 0x10) = local_88[0];
        *(undefined8 *)(this + (uVar13 & 0xffffffff) + 8) =
             *(undefined8 *)((long)local_88 + ((uVar13 & 0xffffffff) - 8));
        lVar9 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
        uVar14 = (uint)uVar13 + (int)lVar9 & 0xfffffff8;
        if (7 < uVar14) {
          uVar8 = 0;
          do {
            uVar13 = (ulong)uVar8;
            uVar8 = uVar8 + 8;
            *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar13) =
                 *(undefined8 *)((Shape *)local_88 + (uVar13 - lVar9));
          } while (uVar8 < uVar14);
        }
      }
    }
    else {
LAB_00102532:
      *(Shape **)this = local_98;
      *(long **)(this + 0x10) = local_88[0];
    }
  }
  local_78 = (Shape)0x2;
  *(long *)(this + 8) = local_90;
LAB_00102547:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
code_r0x00102b99:
  if (local_68 != (Shape *)0x0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  uVar20 = uVar15 + 1;
  if (uVar13 < uVar20) {
    uVar13 = uVar13 * 2;
    if (uVar13 < uVar20) {
      uVar13 = uVar20;
    }
    plVar5 = (long *)(*Allocate)(uVar13 * 8);
    plVar4 = plVar5 + uVar15;
    if (local_d0 != (long *)0x0) {
      plVar10 = plVar5;
      plVar18 = local_d0;
      if (plVar5 < local_d0) {
        for (; plVar10 < plVar4; plVar10 = plVar10 + 1) {
          *plVar10 = *plVar18;
          plVar18 = plVar18 + 1;
        }
      }
      else {
        plVar18 = local_d0 + (uVar15 - 1);
        plVar10 = plVar5 + (uVar15 - 1);
        if (!CARRY8(uVar20 * 8 - 0x10,(ulong)plVar5)) {
          do {
            lVar9 = *plVar18;
            plVar11 = plVar10 + -1;
            plVar18 = plVar18 + -1;
            *plVar10 = lVar9;
            plVar10 = plVar11;
          } while (plVar5 <= plVar11);
        }
      }
      (*Free)(local_d0);
    }
  }
  else {
    plVar4 = local_d0 + uVar15;
    plVar5 = local_d0;
  }
  local_d0 = plVar5;
  *plVar4 = (long)pSVar16;
  if (local_48 == (Shape)0x1) {
    if (local_68 != (Shape *)0x0) {
      LOCK();
      pSVar16 = local_68 + 8;
      *(int *)pSVar16 = *(int *)pSVar16 + -1;
      UNLOCK();
      if (*(int *)pSVar16 == 0) {
        (*(code *)(*(long **)local_68)[1])();
      }
    }
  }
  else if ((local_48 == (Shape)0x2) && (local_68 != (Shape *)local_58)) {
    (*Free)();
  }
  uVar15 = uVar20;
  if (local_9c <= uVar20) goto code_r0x00102bfe;
  goto LAB_00102b79;
code_r0x00102bfe:
  uVar15 = uVar20 & 0xffffffff;
LAB_001026a8:
  (*(code *)(*(long **)local_98)[0x1f])(local_98,local_d0,uVar15);
  StreamUtils::
  RestoreObjectArray<JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>,JPH::PhysicsMaterial>
            ((StreamUtils *)&local_68,param_1,param_3);
  lVar9 = local_60;
  pSVar16 = local_68;
  if (local_48 == (Shape)0x2) {
    if (local_78 == (Shape)0x1) {
      if (local_98 != (Shape *)0x0) {
        LOCK();
        pSVar19 = local_98 + 8;
        *(int *)pSVar19 = *(int *)pSVar19 + -1;
        UNLOCK();
        if (*(int *)pSVar19 == 0) {
          (*(code *)(*(long **)local_98)[1])();
        }
      }
    }
    else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
      (*Free)();
    }
    local_78 = (Shape)0x0;
    local_98 = (Shape *)local_88;
    if ((pSVar16 == (Shape *)0x0) && (lVar9 != 0)) goto LAB_001030ab;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(&local_98,pSVar16,pSVar16 + lVar9);
    local_78 = (Shape)0x2;
    this[0x20] = (Shape)0x2;
    *(Shape **)this = this + 0x10;
    if (local_98 == (Shape *)local_88) {
      pSVar16 = (Shape *)local_88;
      pSVar19 = this + 0x10;
      for (uVar13 = (ulong)((int)local_90 + 1); uVar13 != 0; uVar13 = uVar13 - 1) {
        *pSVar19 = *pSVar16;
        pSVar16 = pSVar16 + (ulong)bVar21 * -2 + 1;
        pSVar19 = pSVar19 + (ulong)bVar21 * -2 + 1;
      }
    }
    else {
      *(Shape **)this = local_98;
      *(long **)(this + 0x10) = local_88[0];
    }
    *(long *)(this + 8) = local_90;
    local_88[0] = (long *)((ulong)local_88[0] & 0xffffffffffffff00);
    local_90 = 0;
    local_98 = (Shape *)local_88;
  }
  else {
    if ((code *)(*(long **)local_98)[0x1d] != RestoreMaterialState) {
      (*(code *)(*(long **)local_98)[0x1d])(local_98,local_58[0],(ulong)local_68 & 0xffffffff);
    }
    pSVar16 = local_98;
    this[0x20] = local_78;
    if (local_78 == (Shape)0x1) {
      local_98 = (Shape *)0x0;
      *(Shape **)this = pSVar16;
    }
    else if (local_78 == (Shape)0x2) {
      *(Shape **)this = this + 0x10;
      if (local_98 == (Shape *)local_88) {
        pSVar16 = (Shape *)local_88;
        pSVar19 = this + 0x10;
        for (uVar13 = (ulong)((int)local_90 + 1); uVar13 != 0; uVar13 = uVar13 - 1) {
          *pSVar19 = *pSVar16;
          pSVar16 = pSVar16 + (ulong)bVar21 * -2 + 1;
          pSVar19 = pSVar19 + (ulong)bVar21 * -2 + 1;
        }
      }
      else {
        *(Shape **)this = local_98;
        *(long **)(this + 0x10) = local_88[0];
      }
      *(long *)(this + 8) = local_90;
      local_88[0] = (long *)((ulong)local_88[0] & 0xffffffffffffff00);
      local_90 = 0;
      local_98 = (Shape *)local_88;
    }
  }
  uVar15 = uVar20;
  if (local_48 == (Shape)0x1) {
    if (local_58[0] != (long *)0x0) {
      if (local_68 != (Shape *)0x0) {
        plVar4 = local_58[0] + (long)local_68;
        for (plVar5 = local_58[0]; plVar5 < plVar4; plVar5 = plVar5 + 1) {
          plVar10 = (long *)*plVar5;
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar18 = plVar10 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              if (*(code **)(*plVar10 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                (*Free)();
              }
              else {
                (**(code **)(*plVar10 + 0x18))();
              }
            }
          }
        }
      }
      local_68 = (Shape *)0x0;
      (*Free)(local_58[0]);
    }
  }
  else if ((local_48 == (Shape)0x2) && (local_68 != (Shape *)local_58)) {
    (*Free)();
  }
LAB_00102780:
  if (local_d0 != (long *)0x0) {
    if (uVar15 != 0) {
      for (plVar4 = local_d0; plVar4 < local_d0 + uVar15; plVar4 = plVar4 + 1) {
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
    }
    (*Free)(local_d0);
  }
  if (local_78 == (Shape)0x1) {
    if (local_98 != (Shape *)0x0) {
      LOCK();
      pSVar16 = local_98 + 8;
      *(int *)pSVar16 = *(int *)pSVar16 + -1;
      UNLOCK();
      if (*(int *)pSVar16 == 0) {
        (*(code *)(*(long **)local_98)[1])();
      }
    }
  }
  else if ((local_78 == (Shape)0x2) && (local_98 != (Shape *)local_88)) {
    (*Free)();
  }
  goto LAB_00102547;
LAB_001030ab:
  std::__throw_logic_error("basic_string: construction from null is not valid");
  param_3 = (Array *)0x0;
  uVar15 = extraout_RDX;
LAB_001030b7:
  uVar20 = 0;
  goto LAB_001026a8;
}



/* JPH::Shape::GetStatsRecursive(JPH::UnorderedSet<JPH::Shape const*, JPH::Hash<JPH::Shape const*>,
   std::equal_to<JPH::Shape const*> >&) const */

undefined1  [16] __thiscall JPH::Shape::GetStatsRecursive(Shape *this,UnorderedSet *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  uint local_3c;
  Shape *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  auVar3 = (**(code **)(*(long *)this + 0x100))();
  uVar2 = auVar3._0_8_;
  local_38 = this;
  bVar1 = HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
          ::InsertKey<false>((HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
                              *)param_1,&local_38,&local_3c);
  if (bVar1) {
    *(Shape **)(*(long *)param_1 + (ulong)local_3c * 8) = this;
  }
  else {
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Shape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat, JPH::Vec3,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::Shape::CollectTransformedShapes
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,long *param_1,undefined8 param_8,
               undefined8 *param_9,long *param_10,long *param_11)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = (**(code **)(*param_11 + 0x10))(param_11,param_1);
  if (cVar2 != '\0') {
    local_54 = 0xffffffff;
    if (param_10[2] != 0) {
      local_54 = *(undefined4 *)(param_10[2] + 0x34);
    }
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    local_50 = *param_9;
    local_88 = param_1_00;
    uStack_80 = param_2;
    local_78 = param_3;
    uStack_70 = param_4;
    local_68 = param_1;
    local_60 = param_5;
    local_58 = param_6;
    if (*(code **)(*param_10 + 0x28) == ScaleShape(JPH::Vec3)::TransformedShape_const__) {
      lVar3 = param_10[3];
      uVar5 = lVar3 + 1;
      if ((ulong)param_10[4] < uVar5) {
        uVar6 = param_10[4] * 2;
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        Array<JPH::TransformedShape,JPH::STLAllocator<JPH::TransformedShape>>::reallocate
                  ((Array<JPH::TransformedShape,JPH::STLAllocator<JPH::TransformedShape>> *)
                   (param_10 + 3),uVar6);
        lVar3 = param_10[3];
        uVar5 = lVar3 + 1;
      }
      param_10[3] = uVar5;
      puVar4 = (undefined8 *)(lVar3 * 0x40 + param_10[5]);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = local_88;
        puVar4[1] = uStack_80;
        puVar4[4] = local_68;
        puVar4[2] = local_78;
        puVar4[3] = uStack_70;
        if (local_68 != (long *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        puVar4[5] = local_60;
        *(undefined4 *)(puVar4 + 6) = local_58;
        *(undefined4 *)((long)puVar4 + 0x34) = local_54;
        puVar4[7] = local_50;
      }
    }
    else {
      (**(code **)(*param_10 + 0x28))(param_10,&local_88);
    }
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_68 + 8))();
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::Shape::SaveWithChildren(JPH::StreamOut&, JPH::UnorderedMap<JPH::Shape const*, unsigned int,
   JPH::Hash<JPH::Shape const*>, std::equal_to<JPH::Shape const*> >&,
   JPH::UnorderedMap<JPH::PhysicsMaterial const*, unsigned int, JPH::Hash<JPH::PhysicsMaterial
   const*>, std::equal_to<JPH::PhysicsMaterial const*> >&) const */

void __thiscall
JPH::Shape::SaveWithChildren
          (Shape *this,StreamOut *param_1,UnorderedMap *param_2,UnorderedMap *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  int iVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [8];
  bool bVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  Shape **ppSVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long in_FS_OFFSET;
  byte bVar21;
  byte bVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  long *local_68;
  undefined1 local_58 [8];
  Shape *pSStack_50;
  long *local_48;
  long local_40;
  
  auVar10 = local_58;
  iVar4 = *(int *)(param_2 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar4 != 0) {
    ppSVar16 = (Shape **)local_58;
    pSStack_50 = (Shape *)local_58;
    local_58 = (undefined1  [8])this;
    uVar14 = 0xcbf29ce484222325;
    do {
      bVar21 = *(byte *)ppSVar16;
      ppSVar16 = (Shape **)((long)ppSVar16 + 1);
      uVar14 = (uVar14 ^ bVar21) * 0x100000001b3;
    } while (ppSVar16 != &pSStack_50);
    bVar21 = (byte)uVar14 | 0x80;
    uVar1 = *(uint *)(param_2 + 0x14) - 1;
    uVar18 = (uint)(uVar14 >> 7);
    while( true ) {
      uVar18 = uVar18 & uVar1;
      auVar3 = *(undefined1 (*) [16])(*(long *)(param_2 + 8) + (ulong)uVar18);
      auVar24[0] = -(bVar21 == auVar3[0]);
      auVar24[1] = -(bVar21 == auVar3[1]);
      auVar24[2] = -(bVar21 == auVar3[2]);
      auVar24[3] = -(bVar21 == auVar3[3]);
      auVar24[4] = -(bVar21 == auVar3[4]);
      auVar24[5] = -(bVar21 == auVar3[5]);
      auVar24[6] = -(bVar21 == auVar3[6]);
      auVar24[7] = -(bVar21 == auVar3[7]);
      auVar24[8] = -(bVar21 == auVar3[8]);
      auVar24[9] = -(bVar21 == auVar3[9]);
      auVar24[10] = -(bVar21 == auVar3[10]);
      auVar24[0xb] = -(bVar21 == auVar3[0xb]);
      auVar24[0xc] = -(bVar21 == auVar3[0xc]);
      auVar24[0xd] = -(bVar21 == auVar3[0xd]);
      auVar24[0xe] = -(bVar21 == auVar3[0xe]);
      bVar23 = auVar3[0xf];
      auVar24[0xf] = -(bVar21 == bVar23);
      uVar6 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      if (uVar6 != 0) {
        uVar15 = (uint)uVar6;
        uVar12 = uVar18;
        do {
          iVar7 = 0;
          for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          uVar12 = uVar12 + iVar7 & uVar1;
          plVar17 = (long *)((ulong)uVar12 * 0x10 + *(long *)param_2);
          if (this == (Shape *)*plVar17) {
            if (*(uint *)(param_2 + 0x14) == uVar12) goto LAB_00103340;
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001036a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)param_1 + 0x10))(param_1,plVar17 + 1,4);
              return;
            }
            goto LAB_001036f8;
          }
          uVar12 = uVar12 + 1;
          bVar5 = (char)iVar7 + 1U & 0x1f;
          uVar8 = uVar15 >> bVar5;
          uVar15 = uVar15 >> bVar5;
        } while (uVar8 != 0);
      }
      auVar22[0] = -(auVar3[0] == 0);
      auVar22[1] = -(auVar3[1] == 0);
      auVar22[2] = -(auVar3[2] == 0);
      auVar22[3] = -(auVar3[3] == 0);
      auVar22[4] = -(auVar3[4] == 0);
      auVar22[5] = -(auVar3[5] == 0);
      auVar22[6] = -(auVar3[6] == 0);
      auVar22[7] = -(auVar3[7] == 0);
      auVar22[8] = -(auVar3[8] == 0);
      auVar22[9] = -(auVar3[9] == 0);
      auVar22[10] = -(auVar3[10] == 0);
      auVar22[0xb] = -(auVar3[0xb] == 0);
      auVar22[0xc] = -(auVar3[0xc] == 0);
      auVar22[0xd] = -(auVar3[0xd] == 0);
      auVar22[0xe] = -(auVar3[0xe] == 0);
      auVar22[0xf] = -(bVar23 == 0);
      if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar23 == 0) break;
      uVar18 = uVar18 + 0x10;
    }
  }
LAB_00103340:
  pSStack_50 = (Shape *)auVar10;
  local_58 = (undefined1  [8])this;
  local_80 = iVar4;
  bVar11 = HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
           ::InsertKey<false>((HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
                               *)param_2,(Shape **)local_58,(uint *)local_78);
  puVar13 = (undefined8 *)((ulong)(uint)local_78._0_4_ * 0x10 + *(long *)param_2);
  if (bVar11) {
    *puVar13 = this;
  }
  *(int *)(puVar13 + 1) = iVar4;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_80,4);
  (**(code **)(*(long *)this + 0xd8))(this,param_1);
  local_68 = (long *)0x0;
  local_78 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xf0))(this,local_78);
  local_58._0_4_ = local_78._0_4_;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,local_58,4);
  plVar17 = local_68 + local_78._0_8_;
  for (plVar20 = local_68; plVar17 != plVar20; plVar20 = plVar20 + 1) {
    if ((Shape *)*plVar20 == (Shape *)0x0) {
      local_58._0_4_ = 0xffffffff;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,local_58,4);
    }
    else {
      SaveWithChildren((Shape *)*plVar20,param_1,param_2,param_3);
    }
  }
  local_48 = (long *)0x0;
  _local_58 = (undefined1  [16])0x0;
  local_58._0_4_ = 0;
  if (*(code **)(*(long *)this + 0xe0) != SaveMaterialState) {
    (**(code **)(*(long *)this + 0xe0))(this,local_58);
  }
  local_7c = local_58._0_4_;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_7c,4);
  plVar17 = local_48 + (long)local_58;
  plVar20 = plVar17;
  for (plVar19 = local_48; plVar19 != plVar17; plVar19 = plVar19 + 1) {
    StreamUtils::SaveObjectReference<JPH::PhysicsMaterial>
              (param_1,(PhysicsMaterial *)*plVar19,param_3);
    plVar20 = local_48;
  }
  if (plVar20 != (long *)0x0) {
    if (local_58 != (undefined1  [8])0x0) {
      plVar17 = plVar20 + (long)local_58;
      for (plVar19 = plVar20; plVar19 < plVar17; plVar19 = plVar19 + 1) {
        plVar20 = (long *)*plVar19;
        if (plVar20 != (long *)0x0) {
          LOCK();
          plVar2 = plVar20 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            if (*(code **)(*plVar20 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
              (*Free)();
            }
            else {
              (**(code **)(*plVar20 + 0x18))();
            }
          }
        }
        plVar20 = local_48;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = pSStack_50;
    _local_58 = auVar3 << 0x40;
    (*Free)(plVar20);
  }
  if (local_68 != (long *)0x0) {
    if (local_78._0_8_ != 0) {
      plVar17 = local_68 + local_78._0_8_;
      for (plVar20 = local_68; plVar20 < plVar17; plVar20 = plVar20 + 1) {
        plVar19 = (long *)*plVar20;
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar2 = plVar19 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar19 + 8))();
          }
        }
      }
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_78._8_8_;
    local_78 = auVar9 << 0x40;
    (*Free)(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001036f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::Shape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&,
   JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::Shape::GetSupportingFace(void)

{
  return;
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* JPH::Shape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool) const */

void JPH::Shape::DrawGetSupportFunction(void)

{
  return;
}



/* JPH::Shape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const */

void JPH::Shape::DrawGetSupportingFace(void)

{
  return;
}



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00103a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>::Reset() */

void __thiscall
JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::Reset
          (CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay> *this)

{
  *(undefined4 *)(this + 8) = 0x3f800001;
  return;
}



/* JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::OnBody
               (Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::SetUserData
               (ulong param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::Reset() */

void __thiscall
JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::Reset
          (CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape> *this
          )

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::Shape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long *param_4,
                  long param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar10 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_4 + 0x20))(&local_68);
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_74 * fStack_64,local_78 * local_68);
  auVar7._8_4_ = (float)param_2 * fStack_60;
  auVar7._12_4_ = fVar10 * fStack_5c;
  lVar6 = 0;
  fStack_50 = (float)param_2 * fStack_50;
  fVar10 = fVar10 * fStack_4c;
  auVar12._8_4_ = auVar7._8_4_;
  auVar12._0_8_ = auVar7._0_8_;
  auVar12._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_74 * fStack_54;
  auVar9._0_4_ = local_78 * local_58;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fVar10;
  local_38 = maxps(auVar12,auVar9);
  auVar20._4_4_ = fStack_74 * fStack_54;
  auVar20._0_4_ = local_78 * local_58;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fVar10;
  local_48 = minps(auVar7,auVar20);
  fVar10 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar11 = fVar10;
  fVar13 = fVar16;
  fVar14 = fVar17;
  fVar15 = fVar18;
  do {
    fVar2 = *(float *)(local_48 + lVar6);
    fVar3 = *(float *)(local_38 + lVar6);
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    auVar8._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar8._8_4_ = fVar2 * pfVar1[2];
    auVar8._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    lVar6 = lVar6 + 4;
    auVar19._8_4_ = auVar8._8_4_;
    auVar19._0_8_ = auVar8._0_8_;
    auVar19._12_4_ = auVar8._12_4_;
    auVar4._4_4_ = fVar3 * pfVar1[1];
    auVar4._0_4_ = fVar3 * *pfVar1;
    auVar4._8_4_ = fVar3 * pfVar1[2];
    auVar4._12_4_ = fVar3 * pfVar1[3];
    auVar20 = minps(auVar19,auVar4);
    auVar5._4_4_ = fVar3 * pfVar1[1];
    auVar5._0_4_ = fVar3 * *pfVar1;
    auVar5._8_4_ = fVar3 * pfVar1[2];
    auVar5._12_4_ = fVar3 * pfVar1[3];
    auVar9 = maxps(auVar8,auVar5);
    fVar11 = fVar11 + auVar20._0_4_;
    fVar13 = fVar13 + auVar20._4_4_;
    fVar14 = fVar14 + auVar20._8_4_;
    fVar15 = fVar15 + auVar20._12_4_;
    fVar10 = fVar10 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar11;
  param_1[1] = fVar13;
  param_1[2] = fVar14;
  param_1[3] = fVar15;
  param_1[4] = fVar10;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Result<JPH::Ref<JPH::PhysicsMaterial> >
   JPH::StreamUtils::RestoreObjectReference<JPH::PhysicsMaterial>(JPH::StreamIn&,
   JPH::Array<JPH::Ref<JPH::PhysicsMaterial>, JPH::STLAllocator<JPH::Ref<JPH::PhysicsMaterial> > >&)
    */

StreamUtils * __thiscall
JPH::StreamUtils::RestoreObjectReference<JPH::PhysicsMaterial>
          (StreamUtils *this,StreamIn *param_1,Array *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  uint local_5c;
  StreamUtils *local_58;
  long local_50;
  undefined8 local_48 [2];
  StreamUtils local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = *(long *)param_1;
  this[0x20] = (StreamUtils)0x0;
  local_5c = 0xffffffff;
  (**(code **)(lVar12 + 0x10))(param_1,&local_5c,4);
  if (local_5c == 0xffffffff) {
    if (this[0x20] == (StreamUtils)0x1) {
      plVar3 = *(long **)this;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          if (*(code **)(*plVar3 + 0x18) == PhysicsMaterial::~PhysicsMaterial) goto LAB_00103d5c;
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
LAB_00103d5c:
      (*Free)();
    }
    *(undefined8 *)this = 0;
    this[0x20] = (StreamUtils)0x1;
    goto LAB_00103ca8;
  }
  if ((ulong)local_5c < *(ulong *)param_2) {
    lVar12 = *(long *)(*(long *)(param_2 + 0x10) + (ulong)local_5c * 8);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    if (this[0x20] == (StreamUtils)0x1) {
      plVar3 = *(long **)this;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          if (*(code **)(*plVar3 + 0x18) == PhysicsMaterial::~PhysicsMaterial) goto LAB_00103dc0;
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
LAB_00103dc0:
      (*Free)();
    }
    *(long *)this = lVar12;
    this[0x20] = (StreamUtils)0x1;
    goto LAB_00103ca8;
  }
  JPH::PhysicsMaterial::sRestoreFromBinaryState((StreamIn *)&local_58);
  if (this[0x20] == (StreamUtils)0x1) {
    plVar3 = *(long **)this;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar3 + 0x18) == PhysicsMaterial::~PhysicsMaterial) goto LAB_00103de0;
        (**(code **)(*plVar3 + 0x18))();
      }
    }
LAB_00103cf1:
    this[0x20] = local_38;
    if (local_38 != (StreamUtils)0x1) goto LAB_00103d01;
LAB_00103df6:
    *(StreamUtils **)this = local_58;
  }
  else {
    if ((this[0x20] != (StreamUtils)0x2) || (*(StreamUtils **)this == this + 0x10))
    goto LAB_00103cf1;
LAB_00103de0:
    (*Free)();
    this[0x20] = local_38;
    if (local_38 == (StreamUtils)0x1) goto LAB_00103df6;
LAB_00103d01:
    if (local_38 == (StreamUtils)0x2) {
      *(StreamUtils **)this = this + 0x10;
      if (local_58 != (StreamUtils *)local_48) {
        *(StreamUtils **)this = local_58;
        *(long *)(this + 8) = local_50;
        *(undefined8 *)(this + 0x10) = local_48[0];
        goto LAB_00103ca8;
      }
      uVar7 = local_50 + 1;
      uVar6 = (uint)uVar7;
      if (uVar6 < 8) {
        if ((uVar7 & 4) == 0) {
          if ((uVar6 != 0) && (this[0x10] = *local_58, (uVar7 & 2) != 0)) {
            *(undefined2 *)(this + (uVar7 & 0xffffffff) + 0xe) =
                 *(undefined2 *)(local_58 + ((uVar7 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)(this + 0x10) = *(undefined4 *)local_58;
          *(undefined4 *)(this + (uVar7 & 0xffffffff) + 0xc) =
               *(undefined4 *)(local_58 + ((uVar7 & 0xffffffff) - 4));
        }
      }
      else {
        *(undefined8 *)(this + 0x10) = *(undefined8 *)local_58;
        *(undefined8 *)(this + (uVar7 & 0xffffffff) + 8) =
             *(undefined8 *)(local_58 + ((uVar7 & 0xffffffff) - 8));
        lVar12 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
        uVar6 = uVar6 + (int)lVar12 & 0xfffffff8;
        if (7 < uVar6) {
          uVar11 = 0;
          do {
            uVar7 = (ulong)uVar11;
            uVar11 = uVar11 + 8;
            *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar7) =
                 *(undefined8 *)(local_58 + (uVar7 - lVar12));
          } while (uVar11 < uVar6);
        }
      }
      *(long *)(this + 8) = local_50;
      if (this[0x20] == (StreamUtils)0x2) goto LAB_00103ca8;
    }
  }
  lVar12 = *(long *)param_2;
  uVar7 = lVar12 + 1;
  if (*(ulong *)(param_2 + 8) < uVar7) {
    uVar5 = *(ulong *)(param_2 + 8) * 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    puVar8 = (undefined8 *)(*Allocate)(uVar7 * 8);
    puVar13 = *(undefined8 **)(param_2 + 0x10);
    if (puVar13 != (undefined8 *)0x0) {
      lVar12 = *(long *)param_2;
      if (puVar8 < puVar13) {
        for (puVar9 = puVar8; puVar9 < puVar8 + lVar12; puVar9 = puVar9 + 1) {
          uVar4 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar9 = uVar4;
        }
      }
      else {
        puVar13 = puVar13 + lVar12 + -1;
        puVar9 = puVar8 + lVar12 + -1;
        if (!CARRY8(lVar12 * 8 - 8,(ulong)puVar8)) {
          do {
            uVar4 = *puVar13;
            puVar10 = puVar9 + -1;
            puVar13 = puVar13 + -1;
            *puVar9 = uVar4;
            puVar9 = puVar10;
          } while (puVar8 <= puVar10);
        }
      }
      (*Free)();
    }
    lVar12 = *(long *)param_2;
    *(undefined8 **)(param_2 + 0x10) = puVar8;
    *(ulong *)(param_2 + 8) = uVar7;
    uVar7 = lVar12 + 1;
  }
  else {
    puVar8 = *(undefined8 **)(param_2 + 0x10);
  }
  *(ulong *)param_2 = uVar7;
  lVar2 = *(long *)this;
  puVar8[lVar12] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_00103ca8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Result<JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > > >
   JPH::StreamUtils::RestoreObjectArray<JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >, JPH::PhysicsMaterial>(JPH::StreamIn&,
   JPH::Array<JPH::Ref<JPH::PhysicsMaterial>, JPH::STLAllocator<JPH::Ref<JPH::PhysicsMaterial> > >&)
    */

StreamUtils * __thiscall
JPH::StreamUtils::
RestoreObjectArray<JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>,JPH::PhysicsMaterial>
          (StreamUtils *this,StreamIn *param_1,Array *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  uint local_6c;
  long *local_68;
  long local_60;
  long local_58 [2];
  char local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar18 = *(long *)param_1;
  this[0x20] = (StreamUtils)0x0;
  (**(code **)(lVar18 + 0x10))(param_1,&local_6c,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar2 == '\0')) {
    uVar10 = (ulong)local_6c;
    if (uVar10 == 0) {
      lVar15 = 0;
      lVar18 = 0;
      plVar3 = (long *)0x0;
      uVar17 = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar3 = (long *)(*Allocate)(uVar10 * 8);
      if (local_6c == 0) {
LAB_001047aa:
        lVar15 = 0;
        lVar18 = 0;
        uVar17 = 0;
        plVar16 = plVar3;
      }
      else {
        plVar16 = plVar3;
        uVar11 = 0;
        do {
          RestoreObjectReference<JPH::PhysicsMaterial>((StreamUtils *)&local_68,param_1,param_2);
          plVar6 = local_68;
          if (local_48 == '\x02') {
            if (this[0x20] == (StreamUtils)0x1) {
              plVar3 = *(long **)(this + 0x10);
              if (plVar3 != (long *)0x0) {
                if ((*(long *)this != 0) && (plVar4 = plVar3 + *(long *)this, plVar3 < plVar4)) {
                  do {
                    plVar14 = (long *)*plVar3;
                    if (plVar14 != (long *)0x0) {
                      LOCK();
                      plVar12 = plVar14 + 1;
                      *(int *)plVar12 = (int)*plVar12 + -1;
                      UNLOCK();
                      if ((int)*plVar12 == 0) {
                        if (*(code **)(*plVar14 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                          (*Free)();
                        }
                        else {
                          (**(code **)(*plVar14 + 0x18))();
                        }
                      }
                    }
                    plVar3 = plVar3 + 1;
                  } while (plVar3 < plVar4);
                  plVar3 = *(long **)(this + 0x10);
                }
                *(undefined8 *)this = 0;
                (*Free)(plVar3);
              }
            }
            else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
              (*Free)();
            }
            this[0x20] = (StreamUtils)0x0;
            *(StreamUtils **)this = this + 0x10;
            if ((plVar6 == (long *)0x0) && (local_60 != 0)) {
              std::__throw_logic_error("basic_string: construction from null is not valid");
              plVar3 = plVar16;
              goto LAB_001047aa;
            }
            std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
            _M_construct<char_const*>(this,plVar6,(long)plVar6 + local_60);
            this[0x20] = (StreamUtils)0x2;
            if (local_48 == '\x01') {
              if (local_68 != (long *)0x0) {
                LOCK();
                plVar3 = local_68 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  if (*(code **)(*local_68 + 0x18) == PhysicsMaterial::~PhysicsMaterial)
                  goto LAB_0010456d;
                  (**(code **)(*local_68 + 0x18))();
                }
              }
            }
            else if ((local_48 == '\x02') && (local_68 != local_58)) {
LAB_0010456d:
              (*Free)();
            }
            goto LAB_00104125;
          }
          if (local_68 != (long *)0x0) {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
          }
          uVar17 = uVar11 + 1;
          lVar18 = uVar17 * 8;
          plVar4 = plVar16 + uVar11;
          plVar3 = plVar16;
          if (uVar10 < uVar17) {
            uVar10 = uVar10 * 2;
            if (uVar10 < uVar17) {
              uVar10 = uVar17;
            }
            plVar3 = (long *)(*Allocate)(uVar10 * 8);
            plVar4 = plVar3 + uVar11;
            if (plVar16 != (long *)0x0) {
              plVar14 = plVar3;
              plVar12 = plVar16;
              if (plVar3 < plVar16) {
                for (; plVar14 < plVar4; plVar14 = plVar14 + 1) {
                  *plVar14 = *plVar12;
                  plVar12 = plVar12 + 1;
                }
              }
              else {
                plVar14 = plVar16 + (uVar11 - 1);
                plVar12 = plVar3 + (uVar11 - 1);
                if (!CARRY8(lVar18 - 0x10,(ulong)plVar3)) {
                  do {
                    lVar15 = *plVar14;
                    plVar13 = plVar12 + -1;
                    plVar14 = plVar14 + -1;
                    *plVar12 = lVar15;
                    plVar12 = plVar13;
                  } while (plVar3 <= plVar13);
                }
              }
              (*Free)(plVar16);
            }
          }
          *plVar4 = (long)plVar6;
          if (local_48 == '\x01') {
            if (local_68 != (long *)0x0) {
              LOCK();
              plVar16 = local_68 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                if (*(code **)(*local_68 + 0x18) == PhysicsMaterial::~PhysicsMaterial)
                goto LAB_001043b5;
                (**(code **)(*local_68 + 0x18))();
              }
            }
          }
          else if ((local_48 == '\x02') && (local_68 != local_58)) {
LAB_001043b5:
            (*Free)();
          }
          plVar16 = plVar3;
          uVar11 = uVar17;
        } while (uVar17 < local_6c);
        plVar3 = plVar3 + uVar17;
        lVar15 = lVar18 >> 3;
      }
    }
    if (this[0x20] == (StreamUtils)0x1) {
      plVar6 = *(long **)(this + 0x10);
      if (plVar6 != (long *)0x0) {
        if ((*(long *)this != 0) && (plVar4 = plVar6 + *(long *)this, plVar6 < plVar4)) {
          do {
            plVar14 = (long *)*plVar6;
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar12 = plVar14 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                if (*(code **)(*plVar14 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                  (*Free)();
                }
                else {
                  (**(code **)(*plVar14 + 0x18))();
                }
              }
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 < plVar4);
          plVar6 = *(long **)(this + 0x10);
        }
        *(undefined8 *)this = 0;
        (*Free)(plVar6);
      }
    }
    else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
      (*Free)();
    }
    this[0x20] = (StreamUtils)0x0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    if (lVar18 != 0) {
      puVar5 = (undefined8 *)(*Allocate)(lVar18);
      puVar9 = *(undefined8 **)(this + 0x10);
      if (puVar9 != (undefined8 *)0x0) {
        lVar18 = *(long *)this;
        if (puVar5 < puVar9) {
          for (puVar7 = puVar5; puVar7 < puVar5 + lVar18; puVar7 = puVar7 + 1) {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar7 = uVar1;
          }
        }
        else {
          puVar9 = puVar9 + lVar18 + -1;
          puVar7 = puVar5 + lVar18 + -1;
          if (!CARRY8(lVar18 * 8 - 8,(ulong)puVar5)) {
            do {
              uVar1 = *puVar9;
              puVar8 = puVar7 + -1;
              puVar9 = puVar9 + -1;
              *puVar7 = uVar1;
              puVar7 = puVar8;
            } while (puVar5 <= puVar8);
          }
        }
        (*Free)();
      }
      *(undefined8 **)(this + 0x10) = puVar5;
      *(long *)(this + 8) = lVar15;
      plVar6 = plVar16;
      if (plVar16 != plVar3) {
        while( true ) {
          lVar18 = *(long *)this;
          *(long *)this = lVar18 + 1;
          lVar15 = *plVar6;
          puVar5[lVar18] = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          if (plVar6 + 1 == plVar3) break;
          puVar5 = *(undefined8 **)(this + 0x10);
          plVar6 = plVar6 + 1;
        }
      }
    }
    this[0x20] = (StreamUtils)0x1;
    uVar11 = uVar17;
LAB_00104125:
    if (plVar16 != (long *)0x0) {
      if (uVar11 != 0) {
        for (plVar3 = plVar16; plVar3 < plVar16 + uVar11; plVar3 = plVar3 + 1) {
          plVar6 = (long *)*plVar3;
          if (plVar6 != (long *)0x0) {
            LOCK();
            plVar4 = plVar6 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              if (*(code **)(*plVar6 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                (*Free)();
              }
              else {
                (**(code **)(*plVar6 + 0x18))();
              }
            }
          }
        }
      }
      (*Free)(plVar16);
    }
  }
  else {
    if (this[0x20] == (StreamUtils)0x1) {
      plVar3 = *(long **)(this + 0x10);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)this != 0) && (plVar16 = plVar3 + *(long *)this, plVar3 < plVar16)) {
          do {
            plVar6 = (long *)*plVar3;
            if (plVar6 != (long *)0x0) {
              LOCK();
              plVar4 = plVar6 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                if (*(code **)(*plVar6 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                  (*Free)();
                }
                else {
                  (**(code **)(*plVar6 + 0x18))();
                }
              }
            }
            plVar3 = plVar3 + 1;
          } while (plVar3 < plVar16);
          plVar3 = *(long **)(this + 0x10);
        }
        *(undefined8 *)this = 0;
        (*Free)(plVar3);
      }
    }
    else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
      (*Free)();
    }
    this[0x20] = (StreamUtils)0x0;
    *(StreamUtils **)this = this + 0x10;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(this,"Failed to read stream");
    this[0x20] = (StreamUtils)0x2;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JPH::HashTable<JPH::Shape const*, std::pair<JPH::Shape const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::Shape const*, unsigned int>, JPH::Hash<JPH::Shape const*>,
   std::equal_to<JPH::Shape const*> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
::GrowTable(HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte bVar14;
  undefined8 *puVar15;
  int iVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar2 <= (uint)uVar9) {
    puVar3 = *(undefined8 **)this;
    pcVar17 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar9;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar9 * 7 >> 3);
    lVar10 = (*Allocate)(uVar9 * 0x11 + 0xf);
    *(long *)this = lVar10;
    __s = (void *)(lVar10 + (ulong)*(uint *)(this + 0x14) * 0x10);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (puVar3 != (undefined8 *)0x0) {
      if (uVar2 != 0) {
        puVar12 = puVar3;
        do {
          while (*pcVar17 < '\0') {
            iVar16 = *(int *)(this + 0x18);
            if (iVar16 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar16 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar16 = *(int *)(this + 0x18);
              }
            }
            uVar9 = 0xcbf29ce484222325;
            local_48 = *puVar12;
            pbVar11 = (byte *)&local_48;
            do {
              bVar14 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              uVar9 = (uVar9 ^ bVar14) * 0x100000001b3;
            } while (pbVar11 != (byte *)local_40);
            bVar14 = (byte)uVar9 | 0x80;
            uVar8 = (uint)(uVar9 >> 7);
            while( true ) {
              uVar8 = uVar8 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar8);
              auVar18[0] = -(*pcVar1 == '\0');
              auVar18[1] = -(pcVar1[1] == '\0');
              auVar18[2] = -(pcVar1[2] == '\0');
              auVar18[3] = -(pcVar1[3] == '\0');
              auVar18[4] = -(pcVar1[4] == '\0');
              auVar18[5] = -(pcVar1[5] == '\0');
              auVar18[6] = -(pcVar1[6] == '\0');
              auVar18[7] = -(pcVar1[7] == '\0');
              auVar18[8] = -(pcVar1[8] == '\0');
              auVar18[9] = -(pcVar1[9] == '\0');
              auVar18[10] = -(pcVar1[10] == '\0');
              auVar18[0xb] = -(pcVar1[0xb] == '\0');
              auVar18[0xc] = -(pcVar1[0xc] == '\0');
              auVar18[0xd] = -(pcVar1[0xd] == '\0');
              auVar18[0xe] = -(pcVar1[0xe] == '\0');
              auVar18[0xf] = -(pcVar1[0xf] == '\0');
              uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar18[0xf] >> 7) << 0xf;
              if (uVar4 != 0) break;
              uVar8 = uVar8 + 0x10;
            }
            iVar5 = 0;
            for (uVar13 = (uint)uVar4; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            puVar15 = puVar12 + 2;
            pcVar17 = pcVar17 + 1;
            *(int *)(this + 0x18) = iVar16 + -1;
            uVar8 = iVar5 + uVar8 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar8) = bVar14;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((uVar8 - 0xf & *(int *)(this + 0x14) - 1U) + 0xf)) = bVar14;
            uVar6 = *puVar12;
            uVar7 = puVar12[1];
            puVar12 = (undefined8 *)((ulong)uVar8 * 0x10 + *(long *)this);
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar12 = puVar15;
            if (puVar3 + (ulong)uVar2 * 2 == puVar15) goto LAB_001049d0;
          }
          puVar12 = puVar12 + 2;
          pcVar17 = pcVar17 + 1;
        } while (puVar3 + (ulong)uVar2 * 2 != puVar12);
      }
LAB_001049d0:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001049f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(puVar3);
        return;
      }
      goto LAB_00104a20;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104a20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::Shape const*, std::pair<JPH::Shape const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::Shape const*, unsigned int>, JPH::Hash<JPH::Shape const*>,
   std::equal_to<JPH::Shape const*> >::InsertKey<false>(JPH::Shape const* const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
::InsertKey<false>(HashTable<JPH::Shape_const*,std::pair<JPH::Shape_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::Shape_const*,unsigned_int>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
                   *this,Shape **param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  Shape **ppSVar25;
  bool bVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  Shape *local_38;
  long local_30 [2];
  
  ppSVar25 = &local_38;
  local_30[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  uVar28 = 0xcbf29ce484222325;
  local_38 = *param_1;
  do {
    bVar30 = *(byte *)ppSVar25;
    ppSVar25 = (Shape **)((long)ppSVar25 + 1);
    uVar28 = (uVar28 ^ bVar30) * 0x100000001b3;
  } while (ppSVar25 != (Shape **)local_30);
  bVar30 = (byte)uVar28 | 0x80;
  uVar24 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = (uint)(uVar28 >> 7);
  while( true ) {
    uVar29 = uVar29 & uVar1;
    pbVar2 = (byte *)(*(long *)(this + 8) + (ulong)uVar29);
    bVar7 = *pbVar2;
    bVar8 = pbVar2[1];
    bVar9 = pbVar2[2];
    bVar10 = pbVar2[3];
    bVar11 = pbVar2[4];
    bVar12 = pbVar2[5];
    bVar13 = pbVar2[6];
    bVar14 = pbVar2[7];
    bVar15 = pbVar2[8];
    bVar16 = pbVar2[9];
    bVar17 = pbVar2[10];
    bVar18 = pbVar2[0xb];
    bVar19 = pbVar2[0xc];
    bVar20 = pbVar2[0xd];
    bVar21 = pbVar2[0xe];
    bVar22 = pbVar2[0xf];
    auVar32[0] = -(bVar30 == bVar7);
    auVar32[1] = -(bVar30 == bVar8);
    auVar32[2] = -(bVar30 == bVar9);
    auVar32[3] = -(bVar30 == bVar10);
    auVar32[4] = -(bVar30 == bVar11);
    auVar32[5] = -(bVar30 == bVar12);
    auVar32[6] = -(bVar30 == bVar13);
    auVar32[7] = -(bVar30 == bVar14);
    auVar32[8] = -(bVar30 == bVar15);
    auVar32[9] = -(bVar30 == bVar16);
    auVar32[10] = -(bVar30 == bVar17);
    auVar32[0xb] = -(bVar30 == bVar18);
    auVar32[0xc] = -(bVar30 == bVar19);
    auVar32[0xd] = -(bVar30 == bVar20);
    auVar32[0xe] = -(bVar30 == bVar21);
    auVar32[0xf] = -(bVar30 == bVar22);
    uVar4 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar27 = (uint)uVar4;
      uVar23 = uVar29;
      do {
        iVar5 = 0;
        for (uVar6 = uVar27; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar23 = uVar23 + iVar5 & uVar1;
        if (*param_1 == *(Shape **)(*(long *)this + (ulong)uVar23 * 0x10)) {
          bVar26 = false;
          goto LAB_00104b45;
        }
        uVar23 = uVar23 + 1;
        bVar3 = (char)iVar5 + 1U & 0x1f;
        uVar6 = uVar27 >> bVar3;
        uVar27 = uVar27 >> bVar3;
      } while (uVar6 != 0);
    }
    if (uVar24 == 0xffffffff) {
      auVar33[0] = -(bVar7 == _LC33);
      auVar33[1] = -(bVar8 == UNK_00105e31);
      auVar33[2] = -(bVar9 == UNK_00105e32);
      auVar33[3] = -(bVar10 == UNK_00105e33);
      auVar33[4] = -(bVar11 == UNK_00105e34);
      auVar33[5] = -(bVar12 == UNK_00105e35);
      auVar33[6] = -(bVar13 == UNK_00105e36);
      auVar33[7] = -(bVar14 == UNK_00105e37);
      auVar33[8] = -(bVar15 == UNK_00105e38);
      auVar33[9] = -(bVar16 == UNK_00105e39);
      auVar33[10] = -(bVar17 == UNK_00105e3a);
      auVar33[0xb] = -(bVar18 == UNK_00105e3b);
      auVar33[0xc] = -(bVar19 == UNK_00105e3c);
      auVar33[0xd] = -(bVar20 == UNK_00105e3d);
      auVar33[0xe] = -(bVar21 == UNK_00105e3e);
      auVar33[0xf] = -(bVar22 == UNK_00105e3f);
      iVar5 = 0;
      uVar27 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar33[0xf] >> 7) << 0xf);
      for (uVar23 = uVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      if (uVar27 != 0) {
        uVar24 = iVar5 + uVar29;
      }
    }
    auVar31[0] = -(bVar7 == 0);
    auVar31[1] = -(bVar8 == 0);
    auVar31[2] = -(bVar9 == 0);
    auVar31[3] = -(bVar10 == 0);
    auVar31[4] = -(bVar11 == 0);
    auVar31[5] = -(bVar12 == 0);
    auVar31[6] = -(bVar13 == 0);
    auVar31[7] = -(bVar14 == 0);
    auVar31[8] = -(bVar15 == 0);
    auVar31[9] = -(bVar16 == 0);
    auVar31[10] = -(bVar17 == 0);
    auVar31[0xb] = -(bVar18 == 0);
    auVar31[0xc] = -(bVar19 == 0);
    auVar31[0xd] = -(bVar20 == 0);
    auVar31[0xe] = -(bVar21 == 0);
    auVar31[0xf] = -(bVar22 == 0);
    uVar4 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar4 != 0) break;
    uVar29 = uVar29 + 0x10;
  }
  if (uVar24 == 0xffffffff) {
    iVar5 = 0;
    for (uVar24 = (uint)uVar4; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar24 = iVar5 + uVar29;
  }
  uVar23 = uVar1 & uVar24;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar23) = bVar30;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar23 - 0xf) + 0xf)) =
       bVar30;
  bVar26 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_00104b45:
  *param_2 = uVar23;
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HashTable<JPH::Shape const*, JPH::Shape const*, JPH::UnorderedSetDetail<JPH::Shape const*>,
   JPH::Hash<JPH::Shape const*>, std::equal_to<JPH::Shape const*> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
::GrowTable(HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar8 = 0x10;
  }
  if (uVar2 <= (uint)uVar8) {
    puVar3 = *(undefined8 **)this;
    pcVar16 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar8;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar8 * 7 >> 3);
    lVar9 = (*Allocate)(uVar8 * 9 + 0xf);
    *(long *)this = lVar9;
    __s = (void *)(lVar9 + (ulong)*(uint *)(this + 0x14) * 8);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (puVar3 != (undefined8 *)0x0) {
      if (uVar2 != 0) {
        puVar13 = puVar3;
        do {
          while (*pcVar16 < '\0') {
            iVar15 = *(int *)(this + 0x18);
            if (iVar15 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar15 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar15 = *(int *)(this + 0x18);
              }
            }
            uVar8 = 0xcbf29ce484222325;
            local_48 = *puVar13;
            pbVar10 = (byte *)&local_48;
            do {
              bVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              uVar8 = (uVar8 ^ bVar12) * 0x100000001b3;
            } while (pbVar10 != (byte *)local_40);
            bVar12 = (byte)uVar8 | 0x80;
            uVar7 = (uint)(uVar8 >> 7);
            while( true ) {
              uVar7 = uVar7 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar7);
              auVar17[0] = -(*pcVar1 == '\0');
              auVar17[1] = -(pcVar1[1] == '\0');
              auVar17[2] = -(pcVar1[2] == '\0');
              auVar17[3] = -(pcVar1[3] == '\0');
              auVar17[4] = -(pcVar1[4] == '\0');
              auVar17[5] = -(pcVar1[5] == '\0');
              auVar17[6] = -(pcVar1[6] == '\0');
              auVar17[7] = -(pcVar1[7] == '\0');
              auVar17[8] = -(pcVar1[8] == '\0');
              auVar17[9] = -(pcVar1[9] == '\0');
              auVar17[10] = -(pcVar1[10] == '\0');
              auVar17[0xb] = -(pcVar1[0xb] == '\0');
              auVar17[0xc] = -(pcVar1[0xc] == '\0');
              auVar17[0xd] = -(pcVar1[0xd] == '\0');
              auVar17[0xe] = -(pcVar1[0xe] == '\0');
              auVar17[0xf] = -(pcVar1[0xf] == '\0');
              uVar5 = (ushort)(SUB161(auVar17 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar17[0xf] >> 7) << 0xf;
              if (uVar5 != 0) break;
              uVar7 = uVar7 + 0x10;
            }
            iVar6 = 0;
            for (uVar11 = (uint)uVar5; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            puVar14 = puVar13 + 1;
            pcVar16 = pcVar16 + 1;
            *(int *)(this + 0x18) = iVar15 + -1;
            uVar7 = iVar6 + uVar7 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar7) = bVar12;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((*(int *)(this + 0x14) - 1U & uVar7 - 0xf) + 0xf)) = bVar12;
            uVar4 = *puVar13;
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *(undefined8 *)(*(long *)this + (ulong)uVar7 * 8) = uVar4;
            puVar13 = puVar14;
            if (puVar3 + uVar2 == puVar14) goto LAB_00104e0c;
          }
          puVar13 = puVar13 + 1;
          pcVar16 = pcVar16 + 1;
        } while (puVar3 + uVar2 != puVar13);
      }
LAB_00104e0c:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(puVar3);
        return;
      }
      goto LAB_00104e58;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104e58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::Shape const*, JPH::Shape const*, JPH::UnorderedSetDetail<JPH::Shape
   const*>, JPH::Hash<JPH::Shape const*>, std::equal_to<JPH::Shape const*>
   >::InsertKey<false>(JPH::Shape const* const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
::InsertKey<false>(HashTable<JPH::Shape_const*,JPH::Shape_const*,JPH::UnorderedSetDetail<JPH::Shape_const*>,JPH::Hash<JPH::Shape_const*>,std::equal_to<JPH::Shape_const*>>
                   *this,Shape **param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  Shape **ppSVar25;
  bool bVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  Shape *local_38;
  long local_30 [2];
  
  ppSVar25 = &local_38;
  local_30[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  uVar28 = 0xcbf29ce484222325;
  local_38 = *param_1;
  do {
    bVar30 = *(byte *)ppSVar25;
    ppSVar25 = (Shape **)((long)ppSVar25 + 1);
    uVar28 = (uVar28 ^ bVar30) * 0x100000001b3;
  } while (ppSVar25 != (Shape **)local_30);
  bVar30 = (byte)uVar28 | 0x80;
  uVar24 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = (uint)(uVar28 >> 7);
  while( true ) {
    uVar29 = uVar29 & uVar1;
    pbVar2 = (byte *)(*(long *)(this + 8) + (ulong)uVar29);
    bVar7 = *pbVar2;
    bVar8 = pbVar2[1];
    bVar9 = pbVar2[2];
    bVar10 = pbVar2[3];
    bVar11 = pbVar2[4];
    bVar12 = pbVar2[5];
    bVar13 = pbVar2[6];
    bVar14 = pbVar2[7];
    bVar15 = pbVar2[8];
    bVar16 = pbVar2[9];
    bVar17 = pbVar2[10];
    bVar18 = pbVar2[0xb];
    bVar19 = pbVar2[0xc];
    bVar20 = pbVar2[0xd];
    bVar21 = pbVar2[0xe];
    bVar22 = pbVar2[0xf];
    auVar32[0] = -(bVar30 == bVar7);
    auVar32[1] = -(bVar30 == bVar8);
    auVar32[2] = -(bVar30 == bVar9);
    auVar32[3] = -(bVar30 == bVar10);
    auVar32[4] = -(bVar30 == bVar11);
    auVar32[5] = -(bVar30 == bVar12);
    auVar32[6] = -(bVar30 == bVar13);
    auVar32[7] = -(bVar30 == bVar14);
    auVar32[8] = -(bVar30 == bVar15);
    auVar32[9] = -(bVar30 == bVar16);
    auVar32[10] = -(bVar30 == bVar17);
    auVar32[0xb] = -(bVar30 == bVar18);
    auVar32[0xc] = -(bVar30 == bVar19);
    auVar32[0xd] = -(bVar30 == bVar20);
    auVar32[0xe] = -(bVar30 == bVar21);
    auVar32[0xf] = -(bVar30 == bVar22);
    uVar4 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar27 = (uint)uVar4;
      uVar23 = uVar29;
      do {
        iVar5 = 0;
        for (uVar6 = uVar27; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar23 = uVar23 + iVar5 & uVar1;
        if (*param_1 == *(Shape **)(*(long *)this + (ulong)uVar23 * 8)) {
          bVar26 = false;
          goto LAB_00104f71;
        }
        uVar23 = uVar23 + 1;
        bVar3 = (char)iVar5 + 1U & 0x1f;
        uVar6 = uVar27 >> bVar3;
        uVar27 = uVar27 >> bVar3;
      } while (uVar6 != 0);
    }
    if (uVar24 == 0xffffffff) {
      auVar33[0] = -(bVar7 == _LC33);
      auVar33[1] = -(bVar8 == UNK_00105e31);
      auVar33[2] = -(bVar9 == UNK_00105e32);
      auVar33[3] = -(bVar10 == UNK_00105e33);
      auVar33[4] = -(bVar11 == UNK_00105e34);
      auVar33[5] = -(bVar12 == UNK_00105e35);
      auVar33[6] = -(bVar13 == UNK_00105e36);
      auVar33[7] = -(bVar14 == UNK_00105e37);
      auVar33[8] = -(bVar15 == UNK_00105e38);
      auVar33[9] = -(bVar16 == UNK_00105e39);
      auVar33[10] = -(bVar17 == UNK_00105e3a);
      auVar33[0xb] = -(bVar18 == UNK_00105e3b);
      auVar33[0xc] = -(bVar19 == UNK_00105e3c);
      auVar33[0xd] = -(bVar20 == UNK_00105e3d);
      auVar33[0xe] = -(bVar21 == UNK_00105e3e);
      auVar33[0xf] = -(bVar22 == UNK_00105e3f);
      iVar5 = 0;
      uVar27 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar33[0xf] >> 7) << 0xf);
      for (uVar23 = uVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      if (uVar27 != 0) {
        uVar24 = iVar5 + uVar29;
      }
    }
    auVar31[0] = -(bVar7 == 0);
    auVar31[1] = -(bVar8 == 0);
    auVar31[2] = -(bVar9 == 0);
    auVar31[3] = -(bVar10 == 0);
    auVar31[4] = -(bVar11 == 0);
    auVar31[5] = -(bVar12 == 0);
    auVar31[6] = -(bVar13 == 0);
    auVar31[7] = -(bVar14 == 0);
    auVar31[8] = -(bVar15 == 0);
    auVar31[9] = -(bVar16 == 0);
    auVar31[10] = -(bVar17 == 0);
    auVar31[0xb] = -(bVar18 == 0);
    auVar31[0xc] = -(bVar19 == 0);
    auVar31[0xd] = -(bVar20 == 0);
    auVar31[0xe] = -(bVar21 == 0);
    auVar31[0xf] = -(bVar22 == 0);
    uVar4 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar4 != 0) break;
    uVar29 = uVar29 + 0x10;
  }
  if (uVar24 == 0xffffffff) {
    iVar5 = 0;
    for (uVar24 = (uint)uVar4; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar24 = iVar5 + uVar29;
  }
  uVar23 = uVar1 & uVar24;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar23) = bVar30;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar23 - 0xf) + 0xf)) =
       bVar30;
  bVar26 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_00104f71:
  *param_2 = uVar23;
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::Array<JPH::TransformedShape, JPH::STLAllocator<JPH::TransformedShape> >::reallocate(unsigned
   long) */

void __thiscall
JPH::Array<JPH::TransformedShape,JPH::STLAllocator<JPH::TransformedShape>>::reallocate
          (Array<JPH::TransformedShape,JPH::STLAllocator<JPH::TransformedShape>> *this,ulong param_1
          )

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar10 = (undefined8 *)(*Allocate)(param_1 << 6);
  puVar13 = *(undefined8 **)(this + 0x10);
  if (puVar13 != (undefined8 *)0x0) {
    lVar3 = *(long *)this;
    if (puVar10 < puVar13) {
      if (puVar10 < puVar10 + lVar3 * 8) {
        puVar12 = puVar10;
        puVar11 = puVar13;
        if (puVar10 == (undefined8 *)0x0) {
          plVar4 = (long *)puVar13[4];
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
            puVar11 = *(undefined8 **)(this + 0x10);
          }
          puVar12 = (undefined8 *)0x0;
          goto LAB_0010515f;
        }
        do {
          uVar6 = *puVar13;
          uVar7 = puVar13[1];
          uVar8 = puVar13[2];
          uVar9 = puVar13[3];
          puVar12[4] = puVar13[4];
          uVar5 = puVar13[5];
          *puVar12 = uVar6;
          puVar12[1] = uVar7;
          puVar12[5] = uVar5;
          uVar2 = *(undefined4 *)(puVar13 + 6);
          puVar12[2] = uVar8;
          puVar12[3] = uVar9;
          *(undefined4 *)(puVar12 + 6) = uVar2;
          *(undefined4 *)((long)puVar12 + 0x34) = *(undefined4 *)((long)puVar13 + 0x34);
          puVar12[7] = puVar13[7];
LAB_0010515f:
          puVar12 = puVar12 + 8;
          puVar13 = puVar13 + 8;
        } while (puVar12 < puVar10 + lVar3 * 8);
        (*Free)(puVar11);
        goto LAB_001050f0;
      }
    }
    else {
      puVar11 = puVar10 + lVar3 * 8 + -8;
      puVar13 = puVar13 + lVar3 * 8 + -8;
      if (!CARRY8(lVar3 * 0x40 - 0x40,(ulong)puVar10)) {
        do {
          uVar6 = *puVar13;
          uVar7 = puVar13[1];
          puVar12 = puVar11 + -8;
          uVar8 = puVar13[2];
          uVar9 = puVar13[3];
          puVar11[4] = puVar13[4];
          uVar5 = puVar13[5];
          *puVar11 = uVar6;
          puVar11[1] = uVar7;
          puVar11[5] = uVar5;
          uVar2 = *(undefined4 *)(puVar13 + 6);
          puVar11[2] = uVar8;
          puVar11[3] = uVar9;
          *(undefined4 *)(puVar11 + 6) = uVar2;
          *(undefined4 *)((long)puVar11 + 0x34) = *(undefined4 *)((long)puVar13 + 0x34);
          puVar11[7] = puVar13[7];
          puVar11 = puVar12;
          puVar13 = puVar13 + -8;
        } while (puVar10 <= puVar12);
      }
    }
    (*Free)();
  }
LAB_001050f0:
  *(undefined8 **)(this + 0x10) = puVar10;
  *(ulong *)(this + 8) = param_1;
  return;
}



/* JPH::HashTable<JPH::PhysicsMaterial const*, std::pair<JPH::PhysicsMaterial const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::PhysicsMaterial const*, unsigned int>,
   JPH::Hash<JPH::PhysicsMaterial const*>, std::equal_to<JPH::PhysicsMaterial const*> >::GrowTable()
    */

void __thiscall
JPH::
HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>
::GrowTable(HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte bVar14;
  undefined8 *puVar15;
  int iVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar2 <= (uint)uVar9) {
    puVar3 = *(undefined8 **)this;
    pcVar17 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar9;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar9 * 7 >> 3);
    lVar10 = (*Allocate)(uVar9 * 0x11 + 0xf);
    *(long *)this = lVar10;
    __s = (void *)(lVar10 + (ulong)*(uint *)(this + 0x14) * 0x10);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (puVar3 != (undefined8 *)0x0) {
      if (uVar2 != 0) {
        puVar12 = puVar3;
        do {
          while (*pcVar17 < '\0') {
            iVar16 = *(int *)(this + 0x18);
            if (iVar16 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar16 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar16 = *(int *)(this + 0x18);
              }
            }
            uVar9 = 0xcbf29ce484222325;
            local_48 = *puVar12;
            pbVar11 = (byte *)&local_48;
            do {
              bVar14 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              uVar9 = (uVar9 ^ bVar14) * 0x100000001b3;
            } while (pbVar11 != (byte *)local_40);
            bVar14 = (byte)uVar9 | 0x80;
            uVar8 = (uint)(uVar9 >> 7);
            while( true ) {
              uVar8 = uVar8 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar8);
              auVar18[0] = -(*pcVar1 == '\0');
              auVar18[1] = -(pcVar1[1] == '\0');
              auVar18[2] = -(pcVar1[2] == '\0');
              auVar18[3] = -(pcVar1[3] == '\0');
              auVar18[4] = -(pcVar1[4] == '\0');
              auVar18[5] = -(pcVar1[5] == '\0');
              auVar18[6] = -(pcVar1[6] == '\0');
              auVar18[7] = -(pcVar1[7] == '\0');
              auVar18[8] = -(pcVar1[8] == '\0');
              auVar18[9] = -(pcVar1[9] == '\0');
              auVar18[10] = -(pcVar1[10] == '\0');
              auVar18[0xb] = -(pcVar1[0xb] == '\0');
              auVar18[0xc] = -(pcVar1[0xc] == '\0');
              auVar18[0xd] = -(pcVar1[0xd] == '\0');
              auVar18[0xe] = -(pcVar1[0xe] == '\0');
              auVar18[0xf] = -(pcVar1[0xf] == '\0');
              uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar18[0xf] >> 7) << 0xf;
              if (uVar4 != 0) break;
              uVar8 = uVar8 + 0x10;
            }
            iVar5 = 0;
            for (uVar13 = (uint)uVar4; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            puVar15 = puVar12 + 2;
            pcVar17 = pcVar17 + 1;
            *(int *)(this + 0x18) = iVar16 + -1;
            uVar8 = iVar5 + uVar8 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar8) = bVar14;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((uVar8 - 0xf & *(int *)(this + 0x14) - 1U) + 0xf)) = bVar14;
            uVar6 = *puVar12;
            uVar7 = puVar12[1];
            puVar12 = (undefined8 *)((ulong)uVar8 * 0x10 + *(long *)this);
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar12 = puVar15;
            if (puVar3 + (ulong)uVar2 * 2 == puVar15) goto LAB_001053a0;
          }
          puVar12 = puVar12 + 2;
          pcVar17 = pcVar17 + 1;
        } while (puVar3 + (ulong)uVar2 * 2 != puVar12);
      }
LAB_001053a0:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001053c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(puVar3);
        return;
      }
      goto LAB_001053f0;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001053f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::PhysicsMaterial const*, std::pair<JPH::PhysicsMaterial const*, unsigned
   int>, JPH::UnorderedMapDetail<JPH::PhysicsMaterial const*, unsigned int>,
   JPH::Hash<JPH::PhysicsMaterial const*>, std::equal_to<JPH::PhysicsMaterial const*>
   >::InsertKey<false>(JPH::PhysicsMaterial const* const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>
::InsertKey<false>(HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>
                   *this,PhysicsMaterial **param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  PhysicsMaterial **ppPVar25;
  bool bVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  PhysicsMaterial *local_38;
  long local_30 [2];
  
  ppPVar25 = &local_38;
  local_30[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  uVar28 = 0xcbf29ce484222325;
  local_38 = *param_1;
  do {
    bVar30 = *(byte *)ppPVar25;
    ppPVar25 = (PhysicsMaterial **)((long)ppPVar25 + 1);
    uVar28 = (uVar28 ^ bVar30) * 0x100000001b3;
  } while (ppPVar25 != (PhysicsMaterial **)local_30);
  bVar30 = (byte)uVar28 | 0x80;
  uVar24 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = (uint)(uVar28 >> 7);
  while( true ) {
    uVar29 = uVar29 & uVar1;
    pbVar2 = (byte *)(*(long *)(this + 8) + (ulong)uVar29);
    bVar7 = *pbVar2;
    bVar8 = pbVar2[1];
    bVar9 = pbVar2[2];
    bVar10 = pbVar2[3];
    bVar11 = pbVar2[4];
    bVar12 = pbVar2[5];
    bVar13 = pbVar2[6];
    bVar14 = pbVar2[7];
    bVar15 = pbVar2[8];
    bVar16 = pbVar2[9];
    bVar17 = pbVar2[10];
    bVar18 = pbVar2[0xb];
    bVar19 = pbVar2[0xc];
    bVar20 = pbVar2[0xd];
    bVar21 = pbVar2[0xe];
    bVar22 = pbVar2[0xf];
    auVar32[0] = -(bVar30 == bVar7);
    auVar32[1] = -(bVar30 == bVar8);
    auVar32[2] = -(bVar30 == bVar9);
    auVar32[3] = -(bVar30 == bVar10);
    auVar32[4] = -(bVar30 == bVar11);
    auVar32[5] = -(bVar30 == bVar12);
    auVar32[6] = -(bVar30 == bVar13);
    auVar32[7] = -(bVar30 == bVar14);
    auVar32[8] = -(bVar30 == bVar15);
    auVar32[9] = -(bVar30 == bVar16);
    auVar32[10] = -(bVar30 == bVar17);
    auVar32[0xb] = -(bVar30 == bVar18);
    auVar32[0xc] = -(bVar30 == bVar19);
    auVar32[0xd] = -(bVar30 == bVar20);
    auVar32[0xe] = -(bVar30 == bVar21);
    auVar32[0xf] = -(bVar30 == bVar22);
    uVar4 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar27 = (uint)uVar4;
      uVar23 = uVar29;
      do {
        iVar5 = 0;
        for (uVar6 = uVar27; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar23 = uVar23 + iVar5 & uVar1;
        if (*param_1 == *(PhysicsMaterial **)(*(long *)this + (ulong)uVar23 * 0x10)) {
          bVar26 = false;
          goto LAB_00105515;
        }
        uVar23 = uVar23 + 1;
        bVar3 = (char)iVar5 + 1U & 0x1f;
        uVar6 = uVar27 >> bVar3;
        uVar27 = uVar27 >> bVar3;
      } while (uVar6 != 0);
    }
    if (uVar24 == 0xffffffff) {
      auVar33[0] = -(bVar7 == _LC33);
      auVar33[1] = -(bVar8 == UNK_00105e31);
      auVar33[2] = -(bVar9 == UNK_00105e32);
      auVar33[3] = -(bVar10 == UNK_00105e33);
      auVar33[4] = -(bVar11 == UNK_00105e34);
      auVar33[5] = -(bVar12 == UNK_00105e35);
      auVar33[6] = -(bVar13 == UNK_00105e36);
      auVar33[7] = -(bVar14 == UNK_00105e37);
      auVar33[8] = -(bVar15 == UNK_00105e38);
      auVar33[9] = -(bVar16 == UNK_00105e39);
      auVar33[10] = -(bVar17 == UNK_00105e3a);
      auVar33[0xb] = -(bVar18 == UNK_00105e3b);
      auVar33[0xc] = -(bVar19 == UNK_00105e3c);
      auVar33[0xd] = -(bVar20 == UNK_00105e3d);
      auVar33[0xe] = -(bVar21 == UNK_00105e3e);
      auVar33[0xf] = -(bVar22 == UNK_00105e3f);
      iVar5 = 0;
      uVar27 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar33[0xf] >> 7) << 0xf);
      for (uVar23 = uVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      if (uVar27 != 0) {
        uVar24 = iVar5 + uVar29;
      }
    }
    auVar31[0] = -(bVar7 == 0);
    auVar31[1] = -(bVar8 == 0);
    auVar31[2] = -(bVar9 == 0);
    auVar31[3] = -(bVar10 == 0);
    auVar31[4] = -(bVar11 == 0);
    auVar31[5] = -(bVar12 == 0);
    auVar31[6] = -(bVar13 == 0);
    auVar31[7] = -(bVar14 == 0);
    auVar31[8] = -(bVar15 == 0);
    auVar31[9] = -(bVar16 == 0);
    auVar31[10] = -(bVar17 == 0);
    auVar31[0xb] = -(bVar18 == 0);
    auVar31[0xc] = -(bVar19 == 0);
    auVar31[0xd] = -(bVar20 == 0);
    auVar31[0xe] = -(bVar21 == 0);
    auVar31[0xf] = -(bVar22 == 0);
    uVar4 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar4 != 0) break;
    uVar29 = uVar29 + 0x10;
  }
  if (uVar24 == 0xffffffff) {
    iVar5 = 0;
    for (uVar24 = (uint)uVar4; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar24 = iVar5 + uVar29;
  }
  uVar23 = uVar1 & uVar24;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar23) = bVar30;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar23 - 0xf) + 0xf)) =
       bVar30;
  bVar26 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_00105515:
  *param_2 = uVar23;
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void JPH::StreamUtils::SaveObjectReference<JPH::PhysicsMaterial>(JPH::StreamOut&,
   JPH::PhysicsMaterial const*, JPH::UnorderedMap<JPH::PhysicsMaterial const*, unsigned int,
   JPH::Hash<JPH::PhysicsMaterial const*>, std::equal_to<JPH::PhysicsMaterial const*> >*) */

void JPH::StreamUtils::SaveObjectReference<JPH::PhysicsMaterial>
               (StreamOut *param_1,PhysicsMaterial *param_2,UnorderedMap *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  PhysicsMaterial **ppPVar12;
  long *plVar13;
  uint uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  byte bVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  PhysicsMaterial *local_50 [2];
  int local_3c;
  PhysicsMaterial *local_38;
  PhysicsMaterial *local_30;
  
  local_30 = *(PhysicsMaterial **)(in_FS_OFFSET + 0x28);
  local_50[0] = param_2;
  if ((param_3 == (UnorderedMap *)0x0) || (param_2 == (PhysicsMaterial *)0x0)) {
    local_38 = (PhysicsMaterial *)CONCAT44(local_38._4_4_,0xffffffff);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_38,4);
  }
  else {
    iVar3 = *(int *)(param_3 + 0x10);
    if (iVar3 != 0) {
      ppPVar12 = &local_38;
      local_38 = param_2;
      uVar10 = 0xcbf29ce484222325;
      do {
        bVar15 = *(byte *)ppPVar12;
        ppPVar12 = (PhysicsMaterial **)((long)ppPVar12 + 1);
        uVar10 = (uVar10 ^ bVar15) * 0x100000001b3;
      } while (ppPVar12 != &local_30);
      bVar15 = (byte)uVar10 | 0x80;
      uVar1 = *(uint *)(param_3 + 0x14) - 1;
      uVar14 = (uint)(uVar10 >> 7);
      while( true ) {
        uVar14 = uVar14 & uVar1;
        uVar10 = (ulong)uVar14;
        auVar2 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + uVar10);
        auVar18[0] = -(bVar15 == auVar2[0]);
        auVar18[1] = -(bVar15 == auVar2[1]);
        auVar18[2] = -(bVar15 == auVar2[2]);
        auVar18[3] = -(bVar15 == auVar2[3]);
        auVar18[4] = -(bVar15 == auVar2[4]);
        auVar18[5] = -(bVar15 == auVar2[5]);
        auVar18[6] = -(bVar15 == auVar2[6]);
        auVar18[7] = -(bVar15 == auVar2[7]);
        auVar18[8] = -(bVar15 == auVar2[8]);
        auVar18[9] = -(bVar15 == auVar2[9]);
        auVar18[10] = -(bVar15 == auVar2[10]);
        auVar18[0xb] = -(bVar15 == auVar2[0xb]);
        auVar18[0xc] = -(bVar15 == auVar2[0xc]);
        auVar18[0xd] = -(bVar15 == auVar2[0xd]);
        auVar18[0xe] = -(bVar15 == auVar2[0xe]);
        bVar17 = auVar2[0xf];
        auVar18[0xf] = -(bVar15 == bVar17);
        uVar5 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
        if (uVar5 != 0) {
          uVar11 = (uint)uVar5;
          do {
            iVar6 = 0;
            for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            uVar8 = (int)uVar10 + iVar6 & uVar1;
            plVar13 = (long *)((ulong)uVar8 * 0x10 + *(long *)param_3);
            if (param_2 == (PhysicsMaterial *)*plVar13) {
              if (*(uint *)(param_3 + 0x14) == uVar8) goto LAB_0010562a;
              (**(code **)(*(long *)param_1 + 0x10))(param_1,plVar13 + 1,4);
              goto LAB_0010569b;
            }
            uVar10 = (ulong)(uVar8 + 1);
            bVar4 = (char)iVar6 + 1U & 0x1f;
            uVar8 = uVar11 >> bVar4;
            uVar11 = uVar11 >> bVar4;
          } while (uVar8 != 0);
        }
        auVar16[0] = -(auVar2[0] == 0);
        auVar16[1] = -(auVar2[1] == 0);
        auVar16[2] = -(auVar2[2] == 0);
        auVar16[3] = -(auVar2[3] == 0);
        auVar16[4] = -(auVar2[4] == 0);
        auVar16[5] = -(auVar2[5] == 0);
        auVar16[6] = -(auVar2[6] == 0);
        auVar16[7] = -(auVar2[7] == 0);
        auVar16[8] = -(auVar2[8] == 0);
        auVar16[9] = -(auVar2[9] == 0);
        auVar16[10] = -(auVar2[10] == 0);
        auVar16[0xb] = -(auVar2[0xb] == 0);
        auVar16[0xc] = -(auVar2[0xc] == 0);
        auVar16[0xd] = -(auVar2[0xd] == 0);
        auVar16[0xe] = -(auVar2[0xe] == 0);
        auVar16[0xf] = -(bVar17 == 0);
        if ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar16 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar16 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar16 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar16 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar16 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar16 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar16 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar16 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar16 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar16 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar16 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar16 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar16 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar16 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar17 == 0)
        break;
        uVar14 = uVar14 + 0x10;
      }
    }
LAB_0010562a:
    local_3c = iVar3;
    bVar7 = HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>
            ::InsertKey<false>((HashTable<JPH::PhysicsMaterial_const*,std::pair<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::PhysicsMaterial_const*,unsigned_int>,JPH::Hash<JPH::PhysicsMaterial_const*>,std::equal_to<JPH::PhysicsMaterial_const*>>
                                *)param_3,local_50,(uint *)&local_38);
    puVar9 = (undefined8 *)(((ulong)local_38 & 0xffffffff) * 0x10 + *(long *)param_3);
    if (bVar7) {
      *puVar9 = param_2;
    }
    *(int *)(puVar9 + 1) = iVar3;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_3c,4);
    (**(code **)(*(long *)param_2 + 0x30))(param_2,param_1);
  }
LAB_0010569b:
  if (local_30 == *(PhysicsMaterial **)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::ShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = (undefined4)Color::sBlack;
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC34;
  }
  puVar2 = &ShapeFunctions::sRegistry;
  do {
    *puVar2 = 0;
    puVar3 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined8 *)&Shape::sDrawSubmergedVolumes);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
