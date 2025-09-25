/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<int, int, JPH::UnorderedSetDetail<int>, JPH::Hash<int>, std::equal_to<int>
   >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>>::rehash(uint param_1) {
   byte *pbVar1;
   char *pcVar2;
   undefined4 *puVar3;
   long lVar4;
   byte bVar5;
   undefined4 uVar6;
   ushort uVar7;
   undefined1 auVar8[16];
   uint uVar9;
   long lVar10;
   byte *pbVar11;
   ulong uVar12;
   uint uVar13;
   int iVar14;
   uint uVar15;
   undefined4 in_register_0000003c;
   long *plVar16;
   undefined1 *puVar17;
   uint uVar18;
   long lVar19;
   uint uVar20;
   byte bVar21;
   ulong uVar22;
   undefined1 auVar23[16];
   plVar16 = (long*)CONCAT44(in_register_0000003c, param_1);
   puVar17 = (undefined1*)plVar16[1];
   uVar12 = ( ulong ) * (uint*)( (long)plVar16 + 0x14 );
   if (*(uint*)( (long)plVar16 + 0x14 ) != 0) {
      lVar10 = 0;
      do {
         while (true) {
            pcVar2 = puVar17 + lVar10;
            if (*pcVar2 != '\0') break;
            LAB_0010002a:lVar10 = lVar10 + 1;
            if ((uint)uVar12 <= (uint)lVar10) goto LAB_00100054;
         }
;
         if (*pcVar2 == '\x7f') {
            *pcVar2 = '\0';
            puVar17 = (undefined1*)plVar16[1];
            uVar12 = ( ulong ) * (uint*)( (long)plVar16 + 0x14 );
            goto LAB_0010002a;
         }

         *pcVar2 = '\x7f';
         uVar12 = ( ulong ) * (uint*)( (long)plVar16 + 0x14 );
         lVar10 = lVar10 + 1;
         puVar17 = (undefined1*)plVar16[1];
      }
 while ( (uint)lVar10 < *(uint*)( (long)plVar16 + 0x14 ) );
   }

   LAB_00100054:puVar17[uVar12] = *puVar17;
   lVar10 = 1;
   do {
      iVar14 = (int)lVar10;
      puVar17 = (undefined1*)( plVar16[1] + lVar10 );
      lVar10 = lVar10 + 1;
      *(undefined1*)( plVar16[1] + ( ulong )(uint)(iVar14 + *(int*)( (long)plVar16 + 0x14 )) ) = *puVar17;
      auVar8 = __LC0;
   }
 while ( lVar10 != 0xf );
   uVar18 = *(uint*)( (long)plVar16 + 0x14 );
   uVar12 = (ulong)uVar18;
   uVar15 = uVar18 - 1;
   if (uVar18 != 0) {
      uVar18 = 0xfffffff1;
      lVar10 = 0;
      do {
         lVar19 = plVar16[1];
         if (*(char*)( lVar19 + lVar10 ) == '\x7f') {
            lVar4 = lVar10 * 4;
            pbVar11 = (byte*)( *plVar16 + lVar4 );
            while (true) {
               pbVar1 = pbVar11 + 4;
               uVar22 = 0xcbf29ce484222325;
               do {
                  bVar21 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  uVar22 = ( bVar21 ^ uVar22 ) * 0x100000001b3;
               }
 while ( pbVar11 != pbVar1 );
               bVar21 = (byte)uVar22 | 0x80;
               uVar20 = (int)uVar12 - 1U & ( uint )(uVar22 >> 7);
               auVar23 = *(undefined1(*) [16])( lVar19 + (ulong)uVar20 ) & auVar8;
               uVar7 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               uVar9 = uVar20;
               while (uVar7 == 0xffff) {
                  uVar9 = uVar9 + 0x10 & uVar15;
                  auVar23 = *(undefined1(*) [16])( lVar19 + (ulong)uVar9 ) & auVar8;
                  uVar7 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               }
;
               iVar14 = 0;
               for (uVar13 = uVar7 ^ 0xffff; ( uVar13 & 1 ) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                  iVar14 = iVar14 + 1;
               }

               uVar9 = iVar14 + uVar9 & uVar15;
               if (( ( uVar9 - uVar20 ^ (int)lVar10 - uVar20 ) & uVar15 & 0xfffffff0 ) == 0) {
                  *(byte*)( lVar19 + lVar10 ) = bVar21;
                  *(byte*)( plVar16[1] + ( ulong )(( *(int*)( (long)plVar16 + 0x14 ) - 1U & uVar18 ) + 0xf) ) = bVar21;
                  uVar12 = ( ulong ) * (uint*)( (long)plVar16 + 0x14 );
                  goto LAB_001000c0;
               }

               uVar12 = (ulong)uVar9;
               bVar5 = *(byte*)( lVar19 + uVar12 );
               *(byte*)( lVar19 + uVar12 ) = bVar21;
               if (bVar5 == 0) break;
               *(byte*)( plVar16[1] + ( ulong )(( *(int*)( (long)plVar16 + 0x14 ) - 1U & uVar9 - 0xf ) + 0xf) ) = bVar21;
               puVar3 = (undefined4*)( *plVar16 + uVar12 * 4 );
               pbVar11 = (byte*)( *plVar16 + lVar4 );
               uVar6 = *(undefined4*)pbVar11;
               *(undefined4*)pbVar11 = *puVar3;
               *puVar3 = uVar6;
               lVar19 = plVar16[1];
               uVar12 = ( ulong ) * (uint*)( (long)plVar16 + 0x14 );
            }
;
            *(byte*)( plVar16[1] + ( ulong )(( *(int*)( (long)plVar16 + 0x14 ) - 1U & uVar9 - 0xf ) + 0xf) ) = bVar21;
            *(undefined1*)( plVar16[1] + lVar10 ) = 0;
            *(undefined1*)( plVar16[1] + ( ulong )(( *(int*)( (long)plVar16 + 0x14 ) - 1U & uVar18 ) + 0xf) ) = 0;
            *(undefined4*)( *plVar16 + uVar12 * 4 ) = *(undefined4*)( *plVar16 + lVar4 );
            uVar12 = ( ulong ) * (uint*)( (long)plVar16 + 0x14 );
         }

         LAB_001000c0:lVar10 = lVar10 + 1;
         uVar18 = uVar18 + 1;
      }
 while ( (uint)lVar10 < (uint)uVar12 );
   }

   *(int*)( plVar16 + 3 ) = (int)( uVar12 * 7 >> 3 ) - (int)plVar16[2];
   return;
}
/* JPH::ConvexHullBuilder::Face::~Face() */void JPH::ConvexHullBuilder::Face::~Face(Face *this) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x38 );
   if (lVar2 != 0) {
      do {
         lVar1 = *(long*)( lVar2 + 8 );
         ( *Free )(lVar2);
         lVar2 = lVar1;
      }
 while ( *(long*)( this + 0x38 ) != lVar1 );
   }

   if (*(long*)( this + 0x30 ) == 0) {
      return;
   }

   *(undefined8*)( this + 0x20 ) = 0;
   /* WARNING: Could not recover jumptable at 0x001002aa. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JPH::ConvexHullBuilder::Face::CalculateNormalAndCentroid(JPH::Vec3 const*) */void JPH::ConvexHullBuilder::Face::CalculateNormalAndCentroid(Face *this, Vec3 *param_1) {
   int *piVar1;
   Vec3 *pVVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   long lVar10;
   int iVar11;
   float fVar12;
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   uint uVar22;
   uint uVar23;
   uint uVar24;
   uint uVar25;
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   lVar3 = *(long*)( this + 0x38 );
   pVVar2 = param_1 + (long)*(int*)( lVar3 + 0x18 ) * 0x10;
   fVar4 = *(float*)pVVar2;
   fVar5 = *(float*)( pVVar2 + 4 );
   fVar6 = *(float*)( pVVar2 + 8 );
   fVar28 = *(float*)( pVVar2 + 0xc );
   pVVar2 = param_1 + (long)*(int*)( *(long*)( lVar3 + 8 ) + 0x18 ) * 0x10;
   fVar18 = *(float*)pVVar2;
   fVar19 = *(float*)( pVVar2 + 4 );
   fVar20 = *(float*)( pVVar2 + 8 );
   fVar29 = *(float*)( pVVar2 + 0xc );
   lVar10 = *(long*)( *(long*)( lVar3 + 8 ) + 8 );
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   auVar27._0_4_ = fVar18 + fVar4;
   auVar27._4_4_ = fVar19 + fVar5;
   auVar27._8_4_ = fVar20 + fVar6;
   auVar27._12_4_ = fVar29 + fVar28;
   *(undefined1(*) [16])( this + 0x10 ) = auVar27;
   if (lVar3 != lVar10) {
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      iVar11 = 2;
      do {
         piVar1 = (int*)( lVar10 + 0x18 );
         lVar10 = *(long*)( lVar10 + 8 );
         iVar11 = iVar11 + 1;
         fVar32 = fVar18 - fVar4;
         fVar33 = fVar19 - fVar5;
         fVar34 = fVar20 - fVar6;
         pVVar2 = param_1 + (long)*piVar1 * 0x10;
         fVar7 = *(float*)pVVar2;
         fVar8 = *(float*)( pVVar2 + 4 );
         fVar9 = *(float*)( pVVar2 + 8 );
         fVar15 = fVar4 - fVar7;
         fVar16 = fVar5 - fVar8;
         fVar17 = fVar6 - fVar9;
         auVar26._0_4_ = auVar27._0_4_ + fVar7;
         auVar26._4_4_ = auVar27._4_4_ + fVar8;
         auVar26._8_4_ = auVar27._8_4_ + fVar9;
         auVar26._12_4_ = auVar27._12_4_ + *(float*)( pVVar2 + 0xc );
         fVar18 = fVar7 - fVar18;
         fVar19 = fVar8 - fVar19;
         fVar20 = fVar9 - fVar20;
         *(undefined1(*) [16])( this + 0x10 ) = auVar26;
         fVar12 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 + 0.0;
         fVar21 = fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18 + 0.0;
         uVar22 = (int)-(uint)(fVar21 < fVar12) >> 0x1f;
         uVar23 = (int)-(uint)(fVar21 < fVar12) >> 0x1f;
         uVar24 = (int)-(uint)(fVar21 < fVar12) >> 0x1f;
         uVar25 = (int)-(uint)(fVar21 < fVar12) >> 0x1f;
         fVar12 = fVar19 * fVar32 - fVar18 * fVar33;
         fVar21 = fVar33 * fVar15 - fVar16 * fVar32;
         fVar28 = fVar28 + (float)( ( uint )(fVar20 * fVar33 - fVar19 * fVar34) & uVar22 | ~uVar22 & ( uint )(fVar34 * fVar16 - fVar17 * fVar33) );
         fVar29 = fVar29 + (float)( ( uint )(fVar18 * fVar34 - fVar20 * fVar32) & uVar23 | ~uVar23 & ( uint )(fVar32 * fVar17 - fVar15 * fVar34) );
         fVar30 = fVar30 + (float)( (uint)fVar12 & uVar24 | ~uVar24 & (uint)fVar21 );
         fVar31 = fVar31 + (float)( (uint)fVar12 & uVar25 | ~uVar25 & (uint)fVar21 );
         *(float*)this = fVar28;
         *(float*)( this + 4 ) = fVar29;
         *(float*)( this + 8 ) = fVar30;
         *(float*)( this + 0xc ) = fVar31;
         fVar18 = fVar7;
         fVar19 = fVar8;
         fVar20 = fVar9;
         auVar27 = auVar26;
      }
 while ( lVar3 != lVar10 );
      auVar13._0_4_ = (float)iVar11;
      auVar13._4_4_ = auVar13._0_4_;
      auVar13._8_4_ = auVar13._0_4_;
      auVar13._12_4_ = auVar13._0_4_;
      auVar27 = divps(auVar26, auVar13);
      *(undefined1(*) [16])( this + 0x10 ) = auVar27;
      return;
   }

   auVar14._4_4_ = _LC1;
   auVar14._0_4_ = _LC1;
   auVar14._8_4_ = _LC1;
   auVar14._12_4_ = _LC1;
   auVar27 = divps(auVar27, auVar14);
   *(undefined1(*) [16])( this + 0x10 ) = auVar27;
   return;
}
/* JPH::ConvexHullBuilder::Face::Initialize(int, int, int, JPH::Vec3 const*) */void JPH::ConvexHullBuilder::Face::Initialize(Face *this, int param_1, int param_2, int param_3, Vec3 *param_4) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   puVar1 = (undefined8*)( *Allocate )(0x20);
   *puVar1 = this;
   *(int*)( puVar1 + 3 ) = param_1;
   puVar1[1] = 0;
   puVar1[2] = 0;
   puVar2 = (undefined8*)( *Allocate )(0x20);
   *puVar2 = this;
   *(int*)( puVar2 + 3 ) = param_2;
   puVar2[1] = 0;
   puVar2[2] = 0;
   puVar3 = (undefined8*)( *Allocate )(0x20);
   *puVar3 = this;
   puVar3[2] = 0;
   *(int*)( puVar3 + 3 ) = param_3;
   puVar1[1] = puVar2;
   puVar2[1] = puVar3;
   puVar3[1] = puVar1;
   *(undefined8**)( this + 0x38 ) = puVar1;
   CalculateNormalAndCentroid(this, param_4);
   return;
}
/* JPH::ConvexHullBuilder::ConvexHullBuilder(JPH::Array<JPH::Vec3, JPH::STLAllocator<JPH::Vec3> >
   const&) */void JPH::ConvexHullBuilder::ConvexHullBuilder(ConvexHullBuilder *this, Array *param_1) {
   *(Array**)this = param_1;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   return;
}
/* JPH::ConvexHullBuilder::FreeFaces() */void JPH::ConvexHullBuilder::FreeFaces(ConvexHullBuilder *this) {
   undefined8 *puVar1;
   Face *this_00;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x18 );
   puVar1 = puVar2 + *(long*)( this + 8 );
   for (; puVar1 != puVar2; puVar2 = puVar2 + 1) {
      this_00 = (Face*)*puVar2;
      if (this_00 != (Face*)0x0) {
         Face::~Face(this_00);
         ( *Free )(this_00);
      }

   }

   *(undefined8*)( this + 8 ) = 0;
   return;
}
/* JPH::ConvexHullBuilder::GetFaceForPoint(JPH::Vec3, JPH::Array<JPH::ConvexHullBuilder::Face*,
   JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> > const&, JPH::ConvexHullBuilder::Face*&,
   float&) const */void JPH::ConvexHullBuilder::GetFaceForPoint(undefined8 param_1, float param_2, undefined8 param_3, long *param_4, undefined8 *param_5, float *param_6) {
   undefined8 *puVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   float *pfVar5;
   undefined8 *puVar6;
   float fVar7;
   float fVar8;
   *param_5 = 0;
   puVar6 = (undefined8*)param_4[2];
   lVar4 = *param_4;
   *param_6 = 0.0;
   puVar1 = puVar6 + lVar4;
   do {
      while (true) {
         if (puVar1 == puVar6) {
            return;
         }

         pfVar5 = (float*)*puVar6;
         if (*(char*)( pfVar5 + 0x11 ) == '\0') break;
         LAB_001005c0:puVar6 = puVar6 + 1;
      }
;
      fVar8 = *pfVar5;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      fVar7 = ( param_2 - pfVar5[6] ) * fVar3 + ( (float)( (ulong)param_1 >> 0x20 ) - pfVar5[5] ) * fVar2 + ( (float)param_1 - pfVar5[4] ) * fVar8 + 0.0;
      if (( fVar7 <= 0.0 ) || ( fVar8 = ( fVar7 * fVar7 ) / ( fVar3 * fVar3 + fVar2 * fVar2 + fVar8 * fVar8 + 0.0 ) ),fVar8 < *param_6 || fVar8 == *param_6) goto LAB_001005c0;
      puVar6 = puVar6 + 1;
      *param_5 = pfVar5;
      *param_6 = fVar8;
   }
 while ( true );
}
/* JPH::ConvexHullBuilder::GetDistanceToEdgeSq(JPH::Vec3, JPH::ConvexHullBuilder::Face const*) const
    */undefined8 JPH::ConvexHullBuilder::GetDistanceToEdgeSq(undefined8 param_1, undefined8 param_2, long *param_3, undefined8 *param_4) {
   float *pfVar1;
   long lVar2;
   bool bVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   long lVar8;
   long lVar9;
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
   undefined1 auVar26[16];
   fVar16 = (float)( (ulong)param_2 >> 0x20 );
   fVar15 = (float)param_2;
   fVar12 = (float)( (ulong)param_1 >> 0x20 );
   fVar10 = (float)param_1;
   lVar2 = param_4[7];
   lVar9 = lVar2;
   do {
      lVar8 = lVar9;
      lVar9 = *(long*)( lVar8 + 8 );
   }
 while ( lVar2 != lVar9 );
   bVar3 = true;
   auVar26 = ZEXT416(_LC4);
   pfVar1 = (float*)( *(long*)( *param_3 + 0x10 ) + (long)*(int*)( lVar8 + 0x18 ) * 0x10 );
   lVar9 = lVar2;
   fVar22 = *pfVar1;
   fVar23 = pfVar1[1];
   fVar24 = pfVar1[2];
   fVar25 = pfVar1[3];
   do {
      while (true) {
         pfVar1 = (float*)( *(long*)( *param_3 + 0x10 ) + (long)*(int*)( lVar9 + 0x18 ) * 0x10 );
         fVar4 = *pfVar1;
         fVar5 = pfVar1[1];
         fVar6 = pfVar1[2];
         fVar7 = pfVar1[3];
         if (0.0 <= ( ( fVar12 - fVar23 ) * ( fVar4 - fVar22 ) - ( fVar5 - fVar23 ) * ( fVar10 - fVar22 ) ) * *(float*)( param_4 + 1 ) + ( ( fVar10 - fVar22 ) * ( fVar6 - fVar24 ) - ( fVar4 - fVar22 ) * ( fVar15 - fVar24 ) ) * (float)( ( ulong ) * param_4 >> 0x20 ) + ( ( fVar15 - fVar24 ) * ( fVar5 - fVar23 ) - ( fVar6 - fVar24 ) * ( fVar12 - fVar23 ) ) * (float)*param_4 + 0.0) break;
         fVar18 = fVar4 - fVar10;
         fVar19 = fVar5 - fVar12;
         fVar20 = fVar6 - fVar15;
         fVar21 = fVar7 - fVar16;
         fVar22 = fVar22 - fVar10;
         fVar23 = fVar23 - fVar12;
         fVar24 = fVar24 - fVar15;
         fVar25 = fVar25 - fVar16;
         fVar11 = fVar18 - fVar22;
         fVar13 = fVar19 - fVar23;
         fVar14 = fVar20 - fVar24;
         fVar17 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11 + 0.0;
         if (fVar17 < _LC5) {
            if (fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18 + 0.0 <= fVar24 * fVar24 + fVar22 * fVar22 + 0.0 + fVar23 * fVar23) {
               LAB_001008e3:fVar22 = fVar18;
               fVar23 = fVar19;
               fVar24 = fVar20;
               fVar25 = fVar21;
            }

         }
 else {
            fVar17 = (float)( ( uint )(fVar24 * fVar14 + fVar23 * fVar13 + fVar11 * fVar22 + 0.0) ^ _LC6 ) / fVar17;
            if (0.0 < fVar17) {
               fVar11 = _LC7 - fVar17;
               if (fVar11 <= 0.0) goto LAB_001008e3;
               fVar22 = fVar17 * fVar18 + fVar11 * fVar22;
               fVar23 = fVar17 * fVar19 + fVar11 * fVar23;
               fVar24 = fVar17 * fVar20 + fVar11 * fVar24;
               fVar25 = fVar17 * fVar21 + fVar11 * fVar25;
            }

         }

         bVar3 = false;
         lVar9 = *(long*)( lVar9 + 8 );
         fVar22 = fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22 + 0.0;
         if (auVar26._0_4_ <= fVar22) {
            fVar22 = auVar26._0_4_;
         }

         auVar26._0_8_ = CONCAT44(fVar24, fVar22);
         auVar26._8_4_ = fVar25;
         auVar26._12_4_ = fVar25;
         fVar22 = fVar4;
         fVar23 = fVar5;
         fVar24 = fVar6;
         fVar25 = fVar7;
         if (lVar2 == lVar9) goto LAB_00100820;
      }
;
      lVar9 = *(long*)( lVar9 + 8 );
      fVar22 = fVar4;
      fVar23 = fVar5;
      fVar24 = fVar6;
      fVar25 = fVar7;
   }
 while ( lVar2 != lVar9 );
   LAB_00100820:if (bVar3) {
      auVar26._0_8_ = 0;
   }

   return auVar26._0_8_;
}
/* JPH::ConvexHullBuilder::AssignPointToFace(int, JPH::Array<JPH::ConvexHullBuilder::Face*,
   JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> > const&, float) */undefined8 JPH::ConvexHullBuilder::AssignPointToFace(ConvexHullBuilder *this, int param_1, Array *param_2, float param_3) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   int *piVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   float fVar12;
   float local_4c;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = (undefined8*)( (long)param_1 * 0x10 + *(long*)( *(long*)this + 0x10 ) );
   uVar6 = *puVar5;
   uVar3 = puVar5[1];
   GetFaceForPoint(uVar6, uVar3, this, param_2, &local_48, &local_4c);
   if (local_48 != 0) {
      if (param_3 < local_4c) {
         lVar9 = *(long*)( local_48 + 0x20 );
         lVar7 = *(long*)( local_48 + 0x30 );
         uVar4 = *(ulong*)( local_48 + 0x28 );
         uVar8 = lVar9 + 1;
         if (*(float*)( local_48 + 0x40 ) <= local_4c && local_4c != *(float*)( local_48 + 0x40 )) {
            *(float*)( local_48 + 0x40 ) = local_4c;
            if (uVar4 < uVar8) {
               uVar11 = uVar4 * 2;
               if (uVar4 * 2 < uVar8) {
                  uVar11 = uVar8;
               }

               lVar7 = ( *Reallocate )(lVar7, uVar4 << 2, uVar11 * 4);
               lVar9 = *(long*)( local_48 + 0x20 );
               *(ulong*)( local_48 + 0x28 ) = uVar11;
               *(long*)( local_48 + 0x30 ) = lVar7;
               uVar8 = lVar9 + 1;
            }

            *(ulong*)( local_48 + 0x20 ) = uVar8;
            *(int*)( lVar7 + lVar9 * 4 ) = param_1;
         }
 else {
            lVar2 = lVar9 * 4;
            lVar1 = lVar2 + -4;
            if (uVar4 < uVar8) {
               uVar11 = uVar4 * 2;
               if (uVar4 * 2 < uVar8) {
                  uVar11 = uVar8;
               }

               lVar7 = ( *Reallocate )(lVar7, uVar4 << 2, uVar11 * 4);
               *(ulong*)( local_48 + 0x28 ) = uVar11;
               lVar9 = *(long*)( local_48 + 0x20 );
               *(long*)( local_48 + 0x30 ) = lVar7;
            }

            piVar10 = (int*)( lVar1 + lVar7 );
            memmove((void*)( lVar7 + lVar2 ), piVar10, ( lVar9 - ( lVar1 >> 2 ) ) * 4);
            *piVar10 = param_1;
            *(long*)( local_48 + 0x20 ) = *(long*)( local_48 + 0x20 ) + 1;
         }

         uVar6 = 1;
         goto LAB_001009a8;
      }

      fVar12 = (float)GetDistanceToEdgeSq(uVar6, uVar3, this, local_48);
      if (param_3 < fVar12) {
         lVar9 = *(long*)( this + 0x20 );
         uVar4 = *(ulong*)( this + 0x28 );
         lVar7 = *(long*)( this + 0x30 );
         uVar8 = lVar9 + 1;
         if (uVar4 < uVar8) {
            uVar11 = uVar4 * 2;
            if (uVar4 * 2 < uVar8) {
               uVar11 = uVar8;
            }

            lVar7 = ( *Reallocate )(lVar7, uVar4 << 3, uVar11 * 8);
            lVar9 = *(long*)( this + 0x20 );
            *(ulong*)( this + 0x28 ) = uVar11;
            *(long*)( this + 0x30 ) = lVar7;
            uVar8 = lVar9 + 1;
         }

         *(ulong*)( this + 0x20 ) = uVar8;
         piVar10 = (int*)( lVar7 + lVar9 * 8 );
         *piVar10 = param_1;
         piVar10[1] = (int)fVar12;
      }

   }

   uVar6 = 0;
   LAB_001009a8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ConvexHullBuilder::DetermineCoplanarDistance() const */undefined8 JPH::ConvexHullBuilder::DetermineCoplanarDistance(ConvexHullBuilder *this) {
   undefined1(*pauVar1)[16];
   undefined1(*pauVar2)[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   float fVar7;
   undefined1 auVar6[16];
   pauVar1 = (undefined1(*) [16])( *(long**)this )[2];
   pauVar2 = pauVar1 + **(long**)this;
   if (pauVar2 != pauVar1) {
      auVar6 = (undefined1[16])0x0;
      do {
         auVar5._0_4_ = 0.0 - *(float*)*pauVar1;
         auVar5._4_4_ = 0.0 - *(float*)( *pauVar1 + 4 );
         auVar5._8_4_ = 0.0 - *(float*)( *pauVar1 + 8 );
         auVar5._12_4_ = 0.0 - *(float*)( *pauVar1 + 0xc );
         auVar5 = maxps(auVar5, *pauVar1);
         pauVar1 = pauVar1 + 1;
         auVar6 = maxps(auVar6, auVar5);
      }
 while ( pauVar2 != pauVar1 );
      fVar7 = auVar6._4_4_;
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar7;
      auVar3._8_4_ = fVar7;
      auVar3._12_4_ = fVar7;
      auVar4._4_12_ = auVar3._4_12_;
      auVar4._0_4_ = ( fVar7 + auVar6._0_4_ + auVar6._8_4_ ) * __LC8;
      return auVar4._0_8_;
   }

   return 0;
}
/* JPH::ConvexHullBuilder::ContainsFace(JPH::Array<int, JPH::STLAllocator<int> > const&) const */undefined8 JPH::ConvexHullBuilder::ContainsFace(ConvexHullBuilder *this, Array *param_1) {
   long *plVar1;
   int *piVar2;
   ulong uVar3;
   long lVar4;
   int *piVar5;
   long lVar6;
   ulong uVar7;
   int *piVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   long *plVar12;
   plVar12 = *(long**)( this + 0x18 );
   plVar1 = plVar12 + *(long*)( this + 8 );
   if (plVar12 == plVar1) {
      return 0;
   }

   lVar4 = *(long*)param_1;
   piVar5 = *(int**)( param_1 + 0x10 );
   uVar3 = lVar4 * 4;
   piVar2 = piVar5 + lVar4;
   do {
      lVar6 = *(long*)( *plVar12 + 0x38 );
      piVar8 = piVar5;
      uVar7 = uVar3;
      if (0 < (long)uVar3 >> 4) {
         iVar9 = *(int*)( lVar6 + 0x18 );
         do {
            if (*piVar8 == iVar9) goto LAB_00100c24;
            if (iVar9 == piVar8[1]) {
               piVar8 = piVar8 + 1;
               goto LAB_00100c24;
            }

            if (iVar9 == piVar8[2]) {
               piVar8 = piVar8 + 2;
               goto LAB_00100c24;
            }

            if (iVar9 == piVar8[3]) {
               piVar8 = piVar8 + 3;
               goto LAB_00100c24;
            }

            piVar8 = piVar8 + 4;
         }
 while ( piVar8 != (int*)( ( uVar3 & 0xfffffffffffffff0 ) + (long)piVar5 ) );
         uVar7 = (long)piVar2 - (long)piVar8;
      }

      lVar10 = (long)uVar7 >> 2;
      if (lVar10 == 2) {
         iVar9 = *(int*)( lVar6 + 0x18 );
         LAB_00100ccb:if (iVar9 != *piVar8) {
            piVar8 = piVar8 + 1;
            LAB_00100cbf:if (*piVar8 != iVar9) goto LAB_00100c5a;
         }

         LAB_00100c24:if (piVar2 != piVar8) {
            lVar11 = 0;
            lVar10 = lVar6;
            do {
               if (*piVar8 != *(int*)( lVar10 + 0x18 )) break;
               piVar8 = piVar8 + 1;
               lVar10 = *(long*)( lVar10 + 8 );
               lVar11 = lVar11 + 1;
               if (piVar8 == piVar2) {
                  piVar8 = piVar5;
               }

            }
 while ( lVar6 != lVar10 );
            if (lVar11 == lVar4) {
               return 1;
            }

         }

      }
 else {
         if (lVar10 == 3) {
            iVar9 = *(int*)( lVar6 + 0x18 );
            if (*piVar8 != iVar9) {
               piVar8 = piVar8 + 1;
               goto LAB_00100ccb;
            }

            goto LAB_00100c24;
         }

         if (lVar10 == 1) {
            iVar9 = *(int*)( lVar6 + 0x18 );
            goto LAB_00100cbf;
         }

      }

      LAB_00100c5a:plVar12 = plVar12 + 1;
      if (plVar1 == plVar12) {
         return 0;
      }

   }
 while ( true );
}
/* JPH::ConvexHullBuilder::GarbageCollectFaces() */void JPH::ConvexHullBuilder::GarbageCollectFaces(ConvexHullBuilder *this) {
   long lVar1;
   Face *this_00;
   ulong uVar2;
   uint uVar3;
   long lVar4;
   uVar3 = (int)*(undefined8*)( this + 8 ) - 1;
   if ((int)uVar3 < 0) {
      return;
   }

   lVar4 = (long)(int)uVar3 << 3;
   lVar1 = ( (long)(int)*(undefined8*)( this + 8 ) - (ulong)uVar3 ) * 8 + -0x10;
   do {
      while (this_00 = *(Face**)( *(long*)( this + 0x18 ) + lVar4 ),this_00[0x44] == (Face)0x0) {
         lVar4 = lVar4 + -8;
         if (lVar4 == lVar1) {
            return;
         }

      }
;
      Face::~Face(this_00);
      ( *Free )(this_00);
      uVar2 = *(ulong*)( this + 8 );
      if (( lVar4 >> 3 ) + 1U < uVar2) {
         memmove((void*)( *(long*)( this + 0x18 ) + lVar4 ), (void*)( *(long*)( this + 0x18 ) + 8 + lVar4 ), ( ( uVar2 - 1 ) - ( lVar4 >> 3 ) ) * 8);
         uVar2 = *(ulong*)( this + 8 );
      }

      lVar4 = lVar4 + -8;
      *(ulong*)( this + 8 ) = uVar2 - 1;
   }
 while ( lVar4 != lVar1 );
   return;
}
/* JPH::ConvexHullBuilder::CreateFace() */undefined1 (*) [16] __thiscallJPH::ConvexHullBuilder::CreateFace(ConvexHullBuilder *this) {
   ulong uVar1;
   long lVar2;
   ulong uVar3;
   undefined1(*pauVar4)[16];
   long lVar5;
   ulong uVar6;
   pauVar4 = (undefined1(*) [16])( *Allocate )(0x50);
   lVar2 = *(long*)( this + 8 );
   uVar3 = *(ulong*)( this + 0x10 );
   *pauVar4 = (undefined1[16])0x0;
   uVar1 = lVar2 + 1;
   for (int i = 0; i < 4; i++) {
      pauVar4[( i + 1 )] = (undefined1[16])0;
   }

   if (uVar1 <= uVar3) {
      *(ulong*)( this + 8 ) = uVar1;
      *(undefined1(**) [16])( *(long*)( this + 0x18 ) + lVar2 * 8 ) = pauVar4;
      return pauVar4;
   }

   uVar6 = uVar3 * 2;
   if (uVar3 * 2 < uVar1) {
      uVar6 = uVar1;
   }

   lVar5 = ( *Reallocate )(*(undefined8*)( this + 0x18 ), uVar3 << 3, uVar6 * 8);
   lVar2 = *(long*)( this + 8 );
   *(ulong*)( this + 0x10 ) = uVar6;
   *(long*)( this + 0x18 ) = lVar5;
   *(long*)( this + 8 ) = lVar2 + 1;
   *(undefined1(**) [16])( lVar5 + lVar2 * 8 ) = pauVar4;
   return pauVar4;
}
/* JPH::ConvexHullBuilder::CreateTriangle(int, int, int) */Face * __thiscall
JPH::ConvexHullBuilder::CreateTriangle(ConvexHullBuilder *this,int param_1,int param_2,int param_3){
   Face *this_00;
   this_00 = (Face*)CreateFace(this);
   Face::Initialize(this_00, param_1, param_2, param_3, *(Vec3**)( *(long*)this + 0x10 ));
   return this_00;
}
/* JPH::ConvexHullBuilder::FreeFace(JPH::ConvexHullBuilder::Face*) */void JPH::ConvexHullBuilder::FreeFace(ConvexHullBuilder *this, Face *param_1) {
   if (param_1 != (Face*)0x0) {
      Face::~Face(param_1);
      /* WARNING: Could not recover jumptable at 0x00100ef9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )(param_1);
      return;
   }

   return;
}
/* JPH::ConvexHullBuilder::sLinkFace(JPH::ConvexHullBuilder::Edge*, JPH::ConvexHullBuilder::Edge*)
    */void JPH::ConvexHullBuilder::sLinkFace(Edge *param_1, Edge *param_2) {
   *(Edge**)( param_1 + 0x10 ) = param_2;
   *(Edge**)( param_2 + 0x10 ) = param_1;
   return;
}
/* JPH::ConvexHullBuilder::sUnlinkFace(JPH::ConvexHullBuilder::Face*) */void JPH::ConvexHullBuilder::sUnlinkFace(Face *param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x38 );
   lVar2 = lVar1;
   do {
      if (*(long*)( lVar2 + 0x10 ) != 0) {
         *(undefined8*)( *(long*)( lVar2 + 0x10 ) + 0x10 ) = 0;
         *(undefined8*)( lVar2 + 0x10 ) = 0;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( lVar1 != lVar2 );
   return;
}
/* JPH::ConvexHullBuilder::FindEdge(JPH::ConvexHullBuilder::Face*, JPH::Vec3,
   JPH::Array<JPH::ConvexHullBuilder::FullEdge, JPH::STLAllocator<JPH::ConvexHullBuilder::FullEdge>
   >&) const */void JPH::ConvexHullBuilder::FindEdge(undefined8 param_1, float param_2, undefined8 param_3, long param_4, ulong *param_5) {
   undefined4 uVar1;
   undefined8 *puVar2;
   float *pfVar3;
   ulong uVar4;
   long *plVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   int iVar12;
   long lVar13;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   float local_868;
   float fStack_864;
   undefined8 *local_848[257];
   long local_40;
   lVar13 = 0;
   iVar12 = 0;
   local_848[0] = *(undefined8**)( param_4 + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1*)( param_4 + 0x44 ) = 1;
   local_848[1] = (undefined8*)( (ulong)local_848[0] | 1 );
   puVar10 = (undefined8*)( (ulong)local_848[0] | 1 );
   puVar14 = local_848[0];
   while (true) {
      while (true) {
         plVar5 = (long*)( (ulong)puVar10 & 0xfffffffffffffffe );
         puVar11 = (undefined8*)plVar5[1];
         local_848[lVar13 * 2 + 1] = puVar11;
         if (puVar10 == puVar14) break;
         puVar2 = (undefined8*)plVar5[2];
         puVar10 = puVar11;
         if (( puVar2 != (undefined8*)0x0 ) && ( pfVar3 = (float*)*puVar2 * (char*)( pfVar3 + 0x11 ) == '\0' )) {
            local_868 = (float)param_1;
            fStack_864 = (float)( (ulong)param_1 >> 0x20 );
            if (( param_2 - pfVar3[6] ) * pfVar3[2] + ( fStack_864 - pfVar3[5] ) * pfVar3[1] + *pfVar3 * ( local_868 - pfVar3[4] ) + 0.0 <= 0.0) {
               lVar6 = plVar5[3];
               uVar8 = *param_5;
               uVar1 = *(undefined4*)( puVar2 + 3 );
               uVar4 = param_5[1];
               uVar9 = uVar8 + 1;
               uVar7 = param_5[2];
               if (uVar4 < uVar9) {
                  if (uVar9 <= uVar4 * 2) {
                     uVar9 = uVar4 * 2;
                  }

                  uVar7 = ( *Reallocate )(uVar7, uVar4 << 4, uVar9 << 4);
                  param_5[2] = uVar7;
                  uVar8 = *param_5;
                  param_5[1] = uVar9;
                  uVar9 = uVar8 + 1;
               }

               *param_5 = uVar9;
               puVar11 = (undefined8*)( uVar7 + uVar8 * 0x10 );
               *puVar11 = puVar2;
               puVar11[1] = CONCAT44(uVar1, (int)lVar6);
            }
 else {
               *(undefined1*)( pfVar3 + 0x11 ) = 1;
               iVar12 = iVar12 + 1;
               puVar10 = (undefined8*)puVar2[1];
               lVar13 = (long)iVar12;
               local_848[lVar13 * 2] = puVar2;
               local_848[lVar13 * 2 + 1] = puVar10;
               puVar14 = puVar2;
            }

         }

      }
;
      lVar13 = *(long*)( *plVar5 + 0x38 );
      lVar6 = lVar13;
      do {
         if (*(long*)( lVar6 + 0x10 ) != 0) {
            *(undefined8*)( *(long*)( lVar6 + 0x10 ) + 0x10 ) = 0;
            *(undefined8*)( lVar6 + 0x10 ) = 0;
         }

         lVar6 = *(long*)( lVar6 + 8 );
      }
 while ( lVar13 != lVar6 );
      iVar12 = iVar12 + -1;
      if (iVar12 < 0) break;
      lVar13 = (long)iVar12;
      puVar14 = local_848[lVar13 * 2];
      puVar10 = local_848[lVar13 * 2 + 1];
   }
;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JPH::ConvexHullBuilder::MergeFaces(JPH::ConvexHullBuilder::Edge*) */void JPH::ConvexHullBuilder::MergeFaces(ConvexHullBuilder *this, Edge *param_1) {
   ulong uVar1;
   long lVar2;
   undefined4 uVar3;
   Edge *pEVar4;
   Face *this_00;
   long *plVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   Edge *pEVar10;
   Edge *pEVar11;
   Edge *pEVar12;
   long *plVar13;
   long lVar14;
   undefined4 *puVar15;
   ulong uVar16;
   long lVar17;
   undefined4 *puVar18;
   undefined4 *puVar19;
   long lVar20;
   this_00 = *(Face**)param_1;
   pEVar4 = *(Edge**)( param_1 + 8 );
   pEVar12 = pEVar4;
   pEVar11 = pEVar4;
   while (pEVar10 = pEVar12,param_1 != pEVar10) {
      pEVar11 = pEVar10;
      pEVar12 = *(Edge**)( pEVar10 + 8 );
   }
;
   plVar5 = *(long**)( pEVar10 + 0x10 );
   plVar6 = (long*)plVar5[1];
   lVar7 = *plVar5;
   *(long**)( pEVar11 + 8 ) = plVar6;
   do {
      plVar13 = plVar6;
      *plVar13 = (long)this_00;
      plVar6 = (long*)plVar13[1];
   }
 while ( (long*)plVar13[1] != plVar5 );
   plVar13[1] = (long)pEVar4;
   if (*(Edge**)( this_00 + 0x38 ) == pEVar10) {
      *(undefined8*)( this_00 + 0x38 ) = *(undefined8*)( pEVar11 + 8 );
   }

   ( *Free )();
   ( *Free )(plVar5);
   lVar8 = *(long*)this;
   *(undefined1*)( lVar7 + 0x44 ) = 1;
   *(undefined8*)( lVar7 + 0x38 ) = 0;
   Face::CalculateNormalAndCentroid(this_00, *(Vec3**)( lVar8 + 0x10 ));
   lVar8 = *(long*)( lVar7 + 0x20 );
   lVar20 = lVar8 * 4 >> 2;
   if (*(float*)( this_00 + 0x40 ) <= *(float*)( lVar7 + 0x40 )) {
      if (lVar20 == 0) {
         *(float*)( this_00 + 0x40 ) = *(float*)( lVar7 + 0x40 );
      }
 else {
         lVar17 = *(long*)( this_00 + 0x20 );
         uVar9 = *(ulong*)( this_00 + 0x28 );
         puVar19 = *(undefined4**)( lVar7 + 0x30 );
         lVar14 = *(long*)( this_00 + 0x30 );
         lVar2 = lVar17 * 4;
         uVar1 = lVar17 + lVar20;
         if (uVar9 < uVar1) {
            uVar16 = uVar9 * 2;
            if (uVar9 * 2 < uVar1) {
               uVar16 = uVar1;
            }

            lVar14 = ( *Reallocate )(lVar14, uVar9 * 4, uVar16 * 4);
            lVar17 = *(long*)( this_00 + 0x20 );
            *(long*)( this_00 + 0x30 ) = lVar14;
            *(ulong*)( this_00 + 0x28 ) = uVar16;
         }

         puVar18 = (undefined4*)( lVar2 + lVar14 );
         puVar15 = (undefined4*)memmove(puVar18 + lVar8, puVar18, ( lVar17 - ( lVar2 >> 2 ) ) * 4);
         for (; puVar18 < puVar15; puVar18 = puVar18 + 1) {
            uVar3 = *puVar19;
            puVar19 = puVar19 + 1;
            *puVar18 = uVar3;
         }

         uVar3 = *(undefined4*)( lVar7 + 0x40 );
         *(long*)( this_00 + 0x20 ) = *(long*)( this_00 + 0x20 ) + lVar20;
         *(undefined4*)( this_00 + 0x40 ) = uVar3;
      }

   }
 else if (lVar20 != 0) {
      lVar17 = *(long*)( this_00 + 0x20 );
      uVar9 = *(ulong*)( this_00 + 0x28 );
      puVar19 = *(undefined4**)( lVar7 + 0x30 );
      lVar14 = *(long*)( this_00 + 0x30 );
      lVar2 = lVar17 * 4 + -4;
      uVar1 = lVar17 + lVar20;
      if (uVar9 < uVar1) {
         uVar16 = uVar9 * 2;
         if (uVar9 * 2 < uVar1) {
            uVar16 = uVar1;
         }

         lVar14 = ( *Reallocate )(lVar14, uVar9 * 4, uVar16 * 4);
         lVar17 = *(long*)( this_00 + 0x20 );
         *(long*)( this_00 + 0x30 ) = lVar14;
         *(ulong*)( this_00 + 0x28 ) = uVar16;
      }

      puVar18 = (undefined4*)( lVar2 + lVar14 );
      puVar15 = (undefined4*)memmove(puVar18 + lVar8, puVar18, ( lVar17 - ( lVar2 >> 2 ) ) * 4);
      for (; puVar18 < puVar15; puVar18 = puVar18 + 1) {
         uVar3 = *puVar19;
         puVar19 = puVar19 + 1;
         *puVar18 = uVar3;
      }

      *(long*)( this_00 + 0x20 ) = *(long*)( this_00 + 0x20 ) + lVar20;
   }

   *(undefined8*)( lVar7 + 0x20 ) = 0;
   return;
}
/* JPH::ConvexHullBuilder::sMarkAffected(JPH::ConvexHullBuilder::Face*,
   JPH::Array<JPH::ConvexHullBuilder::Face*, JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> >&) */void JPH::ConvexHullBuilder::sMarkAffected(Face *param_1, Array *param_2) {
   long lVar1;
   long *plVar2;
   ulong uVar3;
   long *plVar4;
   long lVar5;
   ulong uVar6;
   long *plVar7;
   ulong uVar8;
   lVar1 = *(long*)param_2;
   plVar2 = *(long**)( param_2 + 0x10 );
   lVar5 = lVar1 * 8;
   plVar7 = plVar2 + lVar1;
   plVar4 = plVar2;
   if (0 < lVar5 >> 5) {
      do {
         if ((Face*)*plVar4 == param_1) goto LAB_00101468;
         if ((Face*)plVar4[1] == param_1) {
            plVar4 = plVar4 + 1;
            goto LAB_00101468;
         }

         if ((Face*)plVar4[2] == param_1) {
            plVar4 = plVar4 + 2;
            goto LAB_00101468;
         }

         if ((Face*)plVar4[3] == param_1) {
            plVar4 = plVar4 + 3;
            goto LAB_00101468;
         }

         plVar4 = plVar4 + 4;
      }
 while ( plVar4 != plVar2 + ( lVar5 >> 5 ) * 4 );
      lVar5 = (long)plVar7 - (long)plVar4;
   }

   lVar5 = lVar5 >> 3;
   if (lVar5 == 2) {
      LAB_0010151c:if ((Face*)*plVar4 != param_1) {
         plVar4 = plVar4 + 1;
         LAB_001014bc:if ((Face*)*plVar4 != param_1) goto LAB_001014c1;
      }

   }
 else {
      if (lVar5 != 3) {
         if (lVar5 != 1) goto LAB_001014c1;
         goto LAB_001014bc;
      }

      if ((Face*)*plVar4 != param_1) {
         plVar4 = plVar4 + 1;
         goto LAB_0010151c;
      }

   }

   LAB_00101468:if (plVar7 != plVar4) {
      return;
   }

   LAB_001014c1:uVar3 = *(ulong*)( param_2 + 8 );
   uVar6 = lVar1 + 1;
   if (uVar3 < uVar6) {
      uVar8 = uVar3 * 2;
      if (uVar3 * 2 < uVar6) {
         uVar8 = uVar6;
      }

      lVar5 = ( *Reallocate )(plVar2, uVar3 * 8, uVar8 * 8);
      *(ulong*)( param_2 + 8 ) = uVar8;
      *(long*)( param_2 + 0x10 ) = lVar5;
      uVar6 = *(long*)param_2 + 1;
      plVar7 = (long*)( lVar5 + *(long*)param_2 * 8 );
   }

   *(ulong*)param_2 = uVar6;
   *plVar7 = (long)param_1;
   return;
}
/* JPH::ConvexHullBuilder::RemoveInvalidEdges(JPH::ConvexHullBuilder::Face*,
   JPH::Array<JPH::ConvexHullBuilder::Face*, JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> >&) */void JPH::ConvexHullBuilder::RemoveInvalidEdges(ConvexHullBuilder *this, Face *param_1, Array *param_2) {
   long *plVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   Face *pFVar4;
   bool bVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   Face *pFVar11;
   long lVar12;
   lVar8 = *(long*)( param_1 + 0x38 );
   bVar5 = false;
   lVar10 = *(long*)( lVar8 + 8 );
   LAB_00101570:pFVar11 = (Face*)**(undefined8**)( lVar8 + 0x10 );
   lVar12 = lVar8;
   do {
      lVar9 = lVar10;
      plVar1 = *(long**)( lVar9 + 0x10 );
      if (pFVar11 == param_1) {
         lVar7 = lVar9;
         lVar10 = lVar12;
         if (*(long*)( lVar12 + 0x10 ) == lVar9) break;
      }
 else if (pFVar11 == (Face*)*plVar1) {
         lVar8 = plVar1[1];
         if (*(long*)( pFVar11 + 0x38 ) == lVar8) {
            *(long**)( pFVar11 + 0x38 ) = plVar1;
         }

         plVar1[1] = *(long*)( lVar8 + 8 );
         plVar1[2] = lVar12;
         ( *Free )();
         if (*(long*)( param_1 + 0x38 ) == lVar9) {
            *(long*)( param_1 + 0x38 ) = lVar12;
         }

         *(undefined8*)( lVar12 + 8 ) = *(undefined8*)( lVar9 + 8 );
         *(long**)( lVar12 + 0x10 ) = plVar1;
         ( *Free )(lVar9);
         lVar8 = *(long*)( pFVar11 + 0x38 );
         lVar10 = *(long*)( lVar8 + 8 );
         if (lVar8 == *(long*)( lVar10 + 8 )) {
            puVar2 = *(undefined8**)( lVar8 + 0x10 );
            puVar3 = *(undefined8**)( lVar10 + 0x10 );
            pFVar4 = (Face*)*puVar3;
            sMarkAffected((Face*)*puVar2, param_2);
            sMarkAffected(pFVar4, param_2);
            puVar2[2] = puVar3;
            puVar3[2] = puVar2;
            *(undefined8*)( lVar8 + 0x10 ) = 0;
            *(undefined8*)( lVar10 + 0x10 ) = 0;
            pFVar11[0x44] = (Face)0x1;
         }
 else {
            Face::CalculateNormalAndCentroid(pFVar11, *(Vec3**)( *(long*)this + 0x10 ));
            sMarkAffected(pFVar11, param_2);
         }

         lVar8 = *(long*)( param_1 + 0x38 );
         lVar10 = *(long*)( lVar8 + 8 );
         if (lVar8 == *(long*)( lVar10 + 8 )) goto LAB_001016a7;
         goto LAB_0010160a;
      }

      if (lVar8 == lVar9) {
         if (!bVar5) {
            return;
         }

         Face::CalculateNormalAndCentroid(param_1, *(Vec3**)( *(long*)this + 0x10 ));
         return;
      }

      lVar10 = *(long*)( lVar9 + 8 );
      pFVar11 = (Face*)*plVar1;
      lVar12 = lVar9;
   }
 while ( true );
   while (lVar6 = lVar7,lVar12 != lVar6) {
      lVar10 = lVar6;
      lVar7 = *(long*)( lVar6 + 8 );
   }
;
   *(undefined8*)( lVar10 + 8 ) = *(undefined8*)( lVar9 + 8 );
   if (( lVar12 == lVar8 ) || ( lVar8 == lVar9 )) {
      *(long*)( param_1 + 0x38 ) = lVar10;
   }

   ( *Free )(lVar12);
   ( *Free )(lVar9);
   lVar8 = *(long*)( param_1 + 0x38 );
   lVar10 = *(long*)( lVar8 + 8 );
   if (lVar8 == *(long*)( lVar10 + 8 )) {
      LAB_001016a7:puVar2 = *(undefined8**)( lVar8 + 0x10 );
      puVar3 = *(undefined8**)( lVar10 + 0x10 );
      pFVar11 = (Face*)*puVar3;
      sMarkAffected((Face*)*puVar2, param_2);
      sMarkAffected(pFVar11, param_2);
      puVar2[2] = puVar3;
      puVar3[2] = puVar2;
      *(undefined8*)( lVar8 + 0x10 ) = 0;
      *(undefined8*)( lVar10 + 0x10 ) = 0;
      param_1[0x44] = (Face)0x1;
      return;
   }

   LAB_0010160a:bVar5 = true;
   goto LAB_00101570;
}
/* JPH::ConvexHullBuilder::MergeDegenerateFace(JPH::ConvexHullBuilder::Face*,
   JPH::Array<JPH::ConvexHullBuilder::Face*, JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> >&) */void JPH::ConvexHullBuilder::MergeDegenerateFace(ConvexHullBuilder *this, Face *param_1, Array *param_2) {
   float *pfVar1;
   Edge *pEVar2;
   Edge *pEVar3;
   Edge *pEVar4;
   Edge *pEVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   if (*(float*)( param_1 + 8 ) * *(float*)( param_1 + 8 ) + *(float*)param_1 * *(float*)param_1 + 0.0 + *(float*)( param_1 + 4 ) * *(float*)( param_1 + 4 ) < _LC9) {
      fVar9 = 0.0;
      pEVar5 = (Edge*)0x0;
      pEVar2 = *(Edge**)( param_1 + 0x38 );
      pfVar1 = (float*)( *(long*)( *(long*)this + 0x10 ) + (long)*(int*)( pEVar2 + 0x18 ) * 0x10 );
      pEVar4 = pEVar2;
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      do {
         pEVar3 = *(Edge**)( pEVar4 + 8 );
         pfVar1 = (float*)( *(long*)( *(long*)this + 0x10 ) + (long)*(int*)( pEVar3 + 0x18 ) * 0x10 );
         fVar6 = *pfVar1 - fVar6;
         fVar7 = pfVar1[1] - fVar7;
         fVar8 = pfVar1[2] - fVar8;
         fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6 + 0.0;
         if (fVar9 <= fVar6) {
            pEVar5 = pEVar4;
            fVar9 = fVar6;
         }

         pEVar4 = pEVar3;
         fVar6 = *pfVar1;
         fVar7 = pfVar1[1];
         fVar8 = pfVar1[2];
      }
 while ( pEVar2 != pEVar3 );
      MergeFaces(this, pEVar5);
      RemoveInvalidEdges(this, param_1, param_2);
      return;
   }

   return;
}
/* JPH::ConvexHullBuilder::MergeCoplanarOrConcaveFaces(JPH::ConvexHullBuilder::Face*, float,
   JPH::Array<JPH::ConvexHullBuilder::Face*, JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> >&) */void JPH::ConvexHullBuilder::MergeCoplanarOrConcaveFaces(ConvexHullBuilder *this, Face *param_1, float param_2, Array *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   Edge *pEVar7;
   float *pfVar8;
   bool bVar9;
   bool bVar10;
   Edge *pEVar11;
   float fVar12;
   uint uVar13;
   uint uVar14;
   float fVar15;
   fVar12 = (float)( (uint)param_2 ^ _LC6 );
   pEVar11 = *(Edge**)( param_1 + 0x38 );
   uVar13 = _LC10;
   uVar14 = _LC6;
   bVar10 = false;
   do {
      while (true) {
         bVar9 = bVar10;
         fVar1 = *(float*)param_1;
         fVar2 = *(float*)( param_1 + 4 );
         pEVar7 = *(Edge**)( pEVar11 + 8 );
         pfVar8 = (float*)**(undefined8**)( pEVar11 + 0x10 );
         fVar3 = *pfVar8;
         fVar4 = pfVar8[1];
         fVar5 = *(float*)( param_1 + 8 );
         fVar15 = ( pfVar8[6] - *(float*)( param_1 + 0x18 ) ) * fVar5 + fVar2 * ( pfVar8[5] - *(float*)( param_1 + 0x14 ) ) + ( pfVar8[4] - *(float*)( param_1 + 0x10 ) ) * fVar1 + 0.0;
         fVar6 = pfVar8[2];
         if (( ( ( fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1 + 0.0 ) * fVar12 < (float)( (uint)fVar15 & uVar13 ) * fVar15 ) || ( fVar15 = ( pfVar8[6] - *(float*)( param_1 + 0x18 ) ) * fVar6 + ( pfVar8[5] - *(float*)( param_1 + 0x14 ) ) * fVar4 + ( pfVar8[4] - *(float*)( param_1 + 0x10 ) ) * fVar3 + 0.0(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3 + 0.0) * fVar12 < (float)( (uint)fVar15 ^ uVar14 ) * (float)( (uint)fVar15 & uVar13 ) ) ) && ( 0.0 < fVar6 * fVar5 + fVar2 * fVar4 + fVar1 * fVar3 + 0.0 )) break;
         pEVar11 = pEVar7;
         bVar10 = bVar9;
         if (*(Edge**)( param_1 + 0x38 ) == pEVar7) goto LAB_00101a70;
      }
;
      MergeFaces(this, pEVar11);
      bVar9 = true;
      pEVar11 = pEVar7;
      uVar13 = _LC10;
      uVar14 = _LC6;
      bVar10 = true;
   }
 while ( *(Edge**)( param_1 + 0x38 ) != pEVar7 );
   LAB_00101a70:if (bVar9) {
      RemoveInvalidEdges(this, param_1, param_3);
      return;
   }

   return;
}
/* JPH::ConvexHullBuilder::AddPoint(JPH::ConvexHullBuilder::Face*, int, float,
   JPH::Array<JPH::ConvexHullBuilder::Face*, JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> >&) */void JPH::ConvexHullBuilder::AddPoint(ConvexHullBuilder *this, Face *param_1, int param_2, float param_3, Array *param_4) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 *puVar5;
   Face *pFVar6;
   long lVar7;
   undefined8 uVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   undefined1 local_78[16];
   long local_68;
   undefined1 local_58[16];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (undefined1[16])0x0;
   local_68 = 0;
   puVar5 = (undefined8*)( (long)param_2 * 0x10 + *(long*)( *(long*)this + 0x10 ) );
   FindEdge(*puVar5, puVar5[1], this, param_1, local_78);
   uVar3 = local_78._0_8_;
   if (*(ulong*)( param_4 + 8 ) < (ulong)local_78._0_8_) {
      uVar8 = ( *Reallocate )(*(undefined8*)( param_4 + 0x10 ), *(ulong*)( param_4 + 8 ) << 3, local_78._0_8_ * 8);
      *(undefined8*)( param_4 + 8 ) = uVar3;
      *(undefined8*)( param_4 + 0x10 ) = uVar8;
   }

   lVar4 = local_68;
   lVar10 = local_68 + uVar3 * 0x10;
   lVar14 = local_68;
   if (local_68 == lVar10) {
      uVar9 = *(ulong*)param_4;
   }
 else {
      do {
         iVar1 = *(int*)( lVar14 + 0xc );
         iVar2 = *(int*)( lVar14 + 8 );
         pFVar6 = (Face*)CreateFace(this);
         Face::Initialize(pFVar6, iVar2, iVar1, param_2, *(Vec3**)( *(long*)this + 0x10 ));
         lVar13 = *(long*)param_4;
         uVar11 = *(ulong*)( param_4 + 8 );
         uVar9 = lVar13 + 1;
         if (uVar11 < uVar9) {
            if (uVar9 <= uVar11 * 2) {
               uVar9 = uVar11 * 2;
            }

            lVar7 = ( *Reallocate )(*(undefined8*)( param_4 + 0x10 ), uVar11 << 3, uVar9 * 8);
            lVar13 = *(long*)param_4;
            *(long*)( param_4 + 0x10 ) = lVar7;
            *(ulong*)( param_4 + 8 ) = uVar9;
            uVar9 = lVar13 + 1;
         }
 else {
            lVar7 = *(long*)( param_4 + 0x10 );
         }

         *(ulong*)param_4 = uVar9;
         lVar14 = lVar14 + 0x10;
         *(Face**)( lVar7 + lVar13 * 8 ) = pFVar6;
      }
 while ( lVar10 != lVar14 );
   }

   if (uVar9 == 0) {
      local_58._8_8_ = 0;
      local_48 = 0;
      lVar10 = 0;
      lVar14 = 0;
   }
 else {
      lVar10 = *(long*)( param_4 + 0x10 );
      uVar11 = 0;
      do {
         uVar12 = uVar11 + 1;
         lVar14 = *(long*)( lVar4 + uVar11 * 0x10 );
         lVar13 = *(long*)( *(long*)( lVar10 + uVar11 * 8 ) + 0x38 );
         *(long*)( lVar13 + 0x10 ) = lVar14;
         *(long*)( lVar14 + 0x10 ) = lVar13;
         lVar14 = *(long*)( lVar13 + 8 );
         lVar13 = *(long*)( *(long*)( *(long*)( *(long*)( lVar10 + ( uVar12 % uVar9 ) * 8 ) + 0x38 ) + 8 ) + 8 );
         *(long*)( lVar14 + 0x10 ) = lVar13;
         *(long*)( lVar13 + 0x10 ) = lVar14;
         uVar11 = uVar12;
      }
 while ( uVar12 != uVar9 );
      lVar13 = uVar12 * 8;
      local_58 = (undefined1[16])0x0;
      local_48 = ( *Reallocate )(0, 0, lVar13);
      lVar14 = 0;
      do {
         *(undefined8*)( local_48 + lVar14 ) = *(undefined8*)( lVar10 + lVar14 );
         lVar14 = lVar14 + 8;
      }
 while ( lVar14 != lVar13 );
      lVar10 = ( lVar13 - 8U >> 3 ) + 1;
      lVar14 = local_48;
      local_58._8_8_ = lVar13 >> 3;
   }

   while (lVar10 != 0) {
      pFVar6 = *(Face**)( lVar14 + -8 + lVar10 * 8 );
      lVar10 = lVar10 + -1;
      if (pFVar6[0x44] == (Face)0x0) {
         local_58._0_8_ = lVar10;
         MergeDegenerateFace(this, pFVar6, (Array*)local_58);
         lVar10 = local_58._0_8_;
         lVar14 = local_48;
         if (pFVar6[0x44] == (Face)0x0) {
            MergeCoplanarOrConcaveFaces(this, pFVar6, param_3, (Array*)local_58);
            lVar10 = local_58._0_8_;
            lVar14 = local_48;
         }

      }

   }
;
   if (lVar14 != 0) {
      ( *Free )();
   }

   if (lVar4 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00101cf5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )(lVar4);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::ConvexHullBuilder::RemoveTwoEdgeFace(JPH::ConvexHullBuilder::Face*,
   JPH::Array<JPH::ConvexHullBuilder::Face*, JPH::STLAllocator<JPH::ConvexHullBuilder::Face*> >&)
   const */bool JPH::ConvexHullBuilder::RemoveTwoEdgeFace(ConvexHullBuilder *this, Face *param_1, Array *param_2) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   Face *pFVar5;
   bool bVar6;
   lVar1 = *(long*)( param_1 + 0x38 );
   lVar2 = *(long*)( lVar1 + 8 );
   bVar6 = *(long*)( lVar2 + 8 ) == lVar1;
   if (bVar6) {
      puVar3 = *(undefined8**)( lVar1 + 0x10 );
      puVar4 = *(undefined8**)( lVar2 + 0x10 );
      pFVar5 = (Face*)*puVar4;
      sMarkAffected((Face*)*puVar3, param_2);
      sMarkAffected(pFVar5, param_2);
      puVar3[2] = puVar4;
      puVar4[2] = puVar3;
      *(undefined8*)( lVar1 + 0x10 ) = 0;
      *(undefined8*)( lVar2 + 0x10 ) = 0;
      param_1[0x44] = (Face)0x1;
   }

   return bVar6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ConvexHullBuilder::GetCenterOfMassAndVolume(JPH::Vec3&, float&) const */void JPH::ConvexHullBuilder::GetCenterOfMassAndVolume(ConvexHullBuilder *this, Vec3 *param_1, float *param_2) {
   int *piVar1;
   float *pfVar2;
   long lVar3;
   long lVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   long *plVar8;
   long *plVar9;
   long lVar10;
   long *plVar11;
   bool bVar12;
   float fVar13;
   undefined1 auVar14[16];
   float fVar15;
   float fVar18;
   float fVar19;
   float fVar20;
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar28;
   float fVar29;
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   float fVar30;
   float fVar31;
   float fVar32;
   plVar11 = *(long**)( this + 0x18 );
   fVar13 = (float)*(ulong*)( this + 8 );
   auVar17._4_4_ = fVar13;
   auVar17._0_4_ = fVar13;
   auVar17._8_4_ = fVar13;
   auVar17._12_4_ = fVar13;
   if (plVar11 + *(ulong*)( this + 8 ) == plVar11) {
      *param_2 = 0.0;
      auVar27._0_4_ = 0.0 / fVar13;
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._0_4_;
   }
 else {
      plVar8 = plVar11;
      auVar27 = (undefined1[16])0x0;
      do {
         plVar9 = plVar8;
         lVar3 = *plVar9;
         auVar26._0_4_ = auVar27._0_4_ + *(float*)( lVar3 + 0x10 );
         auVar26._4_4_ = auVar27._4_4_ + *(float*)( lVar3 + 0x14 );
         auVar26._8_4_ = auVar27._8_4_ + *(float*)( lVar3 + 0x18 );
         auVar26._12_4_ = auVar27._12_4_ + *(float*)( lVar3 + 0x1c );
         plVar8 = plVar9 + 1;
         auVar27 = auVar26;
      }
 while ( plVar11 + *(ulong*)( this + 8 ) != plVar9 + 1 );
      auVar27 = divps(auVar26, auVar17);
      lVar3 = *(long*)this;
      *param_2 = 0.0;
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      lVar3 = *(long*)( lVar3 + 0x10 );
      do {
         lVar4 = *(long*)( *plVar11 + 0x38 );
         pfVar2 = (float*)( lVar3 + (long)*(int*)( lVar4 + 0x18 ) * 0x10 );
         fVar13 = *pfVar2;
         fVar5 = pfVar2[1];
         fVar6 = pfVar2[2];
         fVar7 = pfVar2[3];
         pfVar2 = (float*)( lVar3 + (long)*(int*)( *(long*)( lVar4 + 8 ) + 0x18 ) * 0x10 );
         fVar21 = *pfVar2;
         fVar22 = pfVar2[1];
         fVar23 = pfVar2[2];
         fVar24 = pfVar2[3];
         lVar10 = *(long*)( *(long*)( lVar4 + 8 ) + 8 );
         if (lVar4 != lVar10) {
            fVar25 = auVar27._0_4_;
            fVar28 = auVar27._4_4_;
            fVar29 = auVar27._8_4_;
            do {
               piVar1 = (int*)( lVar10 + 0x18 );
               lVar10 = *(long*)( lVar10 + 8 );
               fVar15 = fVar21 + fVar13;
               fVar18 = fVar22 + fVar5;
               fVar19 = fVar23 + fVar6;
               fVar20 = fVar24 + fVar7;
               fVar30 = fVar21 - fVar25;
               fVar31 = fVar22 - fVar28;
               fVar32 = fVar23 - fVar29;
               pfVar2 = (float*)( lVar3 + (long)*piVar1 * 0x10 );
               fVar21 = *pfVar2;
               fVar22 = pfVar2[1];
               fVar23 = pfVar2[2];
               fVar24 = pfVar2[3];
               fVar30 = ( ( fVar22 - fVar28 ) * fVar30 - fVar31 * ( fVar21 - fVar25 ) ) * ( fVar6 - fVar29 ) + ( ( fVar21 - fVar25 ) * fVar32 - fVar30 * ( fVar23 - fVar29 ) ) * ( fVar5 - fVar28 ) + ( ( fVar23 - fVar29 ) * fVar31 - fVar32 * ( fVar22 - fVar28 ) ) * ( fVar13 - fVar25 ) + 0.0;
               *param_2 = *param_2 + fVar30;
               auVar16._0_4_ = ( fVar15 + fVar21 + fVar25 ) * fVar30 + *(float*)param_1;
               auVar16._4_4_ = ( fVar18 + fVar22 + fVar28 ) * fVar30 + *(float*)( param_1 + 4 );
               auVar16._8_4_ = ( fVar19 + fVar23 + fVar29 ) * fVar30 + *(float*)( param_1 + 8 );
               auVar16._12_4_ = ( fVar20 + fVar24 + auVar27._12_4_ ) * fVar30 + *(float*)( param_1 + 0xc );
               *(undefined1(*) [16])param_1 = auVar16;
            }
 while ( lVar4 != lVar10 );
         }

         bVar12 = plVar11 != plVar9;
         plVar11 = plVar11 + 1;
      }
 while ( bVar12 );
   }

   if (*param_2 <= __LC11) {
      *(undefined1(*) [16])param_1 = auVar27;
   }
 else {
      auVar14._0_4_ = *param_2 * __LC12;
      auVar14._4_4_ = auVar14._0_4_;
      auVar14._8_4_ = auVar14._0_4_;
      auVar14._12_4_ = auVar14._0_4_;
      auVar17 = divps(*(undefined1(*) [16])param_1, auVar14);
      *(undefined1(*) [16])param_1 = auVar17;
   }

   *param_2 = *param_2 / __LC13;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ConvexHullBuilder::DetermineMaxError(JPH::ConvexHullBuilder::Face*&, float&, int&, float&)
   const */void JPH::ConvexHullBuilder::DetermineMaxError(ConvexHullBuilder *this, Face **param_1, float *param_2, int *param_3, float *param_4) {
   float fVar1;
   undefined8 *puVar2;
   ulong uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   uint uVar6;
   undefined8 *puVar7;
   Face *pFVar8;
   int iVar9;
   ulong uVar10;
   undefined8 *puVar11;
   int iVar12;
   ulong uVar13;
   Face *pFVar14;
   Face *pFVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float local_98;
   float fStack_94;
   float fStack_90;
   float local_60;
   fVar16 = (float)DetermineCoplanarDistance(this);
   puVar7 = *(undefined8**)this;
   *param_4 = fVar16;
   uVar6 = ( uint ) * puVar7;
   if ((int)uVar6 < 1) {
      local_60 = 0.0;
      iVar12 = -1;
      pFVar14 = (Face*)0x0;
   }
 else {
      puVar2 = *(undefined8**)( this + 0x18 );
      uVar3 = *(ulong*)( this + 8 );
      uVar10 = 0;
      puVar7 = (undefined8*)puVar7[2];
      uVar13 = 0xffffffff;
      pFVar14 = (Face*)0x0;
      fVar16 = (float)( (uint)fVar16 ^ _LC6 );
      local_60 = 0.0;
      do {
         iVar9 = (int)uVar10;
         uVar4 = *puVar7;
         uVar5 = puVar7[1];
         if (( uVar3 & 0x1fffffffffffffff ) != 0) {
            pFVar15 = (Face*)0x0;
            puVar11 = puVar2;
            fVar19 = _LC4;
            do {
               pFVar8 = (Face*)*puVar11;
               fVar18 = *(float*)pFVar8;
               fVar17 = *(float*)( pFVar8 + 4 );
               fVar1 = *(float*)( pFVar8 + 8 );
               local_98 = (float)uVar4;
               fStack_94 = (float)( (ulong)uVar4 >> 0x20 );
               fStack_90 = (float)uVar5;
               fVar18 = ( ( fStack_90 - *(float*)( pFVar8 + 0x18 ) ) * fVar1 + ( fStack_94 - *(float*)( pFVar8 + 0x14 ) ) * fVar17 + ( local_98 - *(float*)( pFVar8 + 0x10 ) ) * fVar18 + 0.0 ) / SQRT(fVar1 * fVar1 + fVar17 * fVar17 + fVar18 * fVar18 + 0.0);
               if (fVar16 < fVar18) {
                  fVar17 = (float)GetDistanceToEdgeSq(uVar4, uVar5, this);
                  if (fVar17 < fVar19) {
                     pFVar15 = pFVar8;
                     fVar19 = fVar17;
                  }

                  if (( fVar17 == 0.0 ) && ( local_60 < fVar18 )) {
                     uVar13 = uVar10 & 0xffffffff;
                     pFVar14 = pFVar8;
                     local_60 = fVar18;
                  }

               }

               puVar11 = puVar11 + 1;
            }
 while ( puVar11 != puVar2 + uVar3 );
            if (fVar19 < 0.0) {
               fVar19 = sqrtf(fVar19);
               uVar10 = uVar10 & 0xffffffff;
            }
 else {
               fVar19 = SQRT(fVar19);
            }

            iVar9 = (int)uVar10;
            if (( pFVar15 != (Face*)0x0 ) && ( local_60 < fVar19 )) {
               uVar13 = uVar10 & 0xffffffff;
               pFVar14 = pFVar15;
               local_60 = fVar19;
            }

         }

         iVar12 = (int)uVar13;
         uVar10 = ( ulong )(iVar9 + 1U);
         puVar7 = puVar7 + 2;
      }
 while ( uVar6 != iVar9 + 1U );
   }

   *param_1 = pFVar14;
   *param_2 = local_60;
   *param_3 = iVar12;
   return;
}
/* JPH::ConvexHullBuilder::GetNumVerticesUsed() const */undefined4 JPH::ConvexHullBuilder::GetNumVerticesUsed(ConvexHullBuilder *this) {
   long *plVar1;
   long lVar2;
   int iVar3;
   uint uVar4;
   undefined4 uVar5;
   bool bVar6;
   uint uVar7;
   long lVar8;
   long *plVar9;
   long in_FS_OFFSET;
   uint uStack_6c;
   undefined1 local_68[16];
   undefined4 local_58;
   uint uStack_54;
   undefined4 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = 0;
   uVar4 = ( uint )(( ( ulong ) * *(uint**)this << 3 ) / 7);
   uVar7 = 0x10;
   if (0xf < uVar4) {
      uVar7 = uVar4;
   }

   iVar3 = 0x1f;
   if (uVar7 - 1 != 0) {
      for (; uVar7 - 1 >> iVar3 == 0; iVar3 = iVar3 + -1) {}
   }

   uStack_54 = 1 << ( (char)iVar3 + 1U & 0x1f );
   uStack_50 = ( undefined4 )((ulong)uStack_54 * 7 >> 3);
   local_68._0_8_ = ( *Allocate )((ulong)uStack_54 * 5 + 0xf);
   local_68._8_8_ = local_68._0_8_ + (ulong)uStack_54 * 4;
   memset((void*)local_68._8_8_, 0, ( ulong )(uStack_54 + 0xf));
   plVar9 = *(long**)( this + 0x18 );
   plVar1 = plVar9 + *(long*)( this + 8 );
   if (plVar1 != plVar9) {
      do {
         lVar2 = *plVar9;
         lVar8 = *(long*)( lVar2 + 0x38 );
         do {
            bVar6 = HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>>::InsertKey<false>((HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>>*)local_68, (int*)( lVar8 + 0x18 ), &uStack_6c);
            if (bVar6) {
               *(undefined4*)( local_68._0_8_ + (ulong)uStack_6c * 4 ) = *(undefined4*)( lVar8 + 0x18 );
            }

            lVar8 = *(long*)( lVar8 + 8 );
         }
 while ( *(long*)( lVar2 + 0x38 ) != lVar8 );
         plVar9 = plVar9 + 1;
      }
 while ( plVar1 != plVar9 );
   }

   uVar5 = local_58;
   if (local_68._0_8_ != 0) {
      ( *Free )();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ConvexHullBuilder::Initialize(int, float, char const*&) */undefined1 JPH::ConvexHullBuilder::Initialize(ConvexHullBuilder *this, int param_1, float param_2, char **param_3) {
   Array *pAVar1;
   float *pfVar2;
   int *piVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined1 auVar9[16];
   undefined8 uVar10;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   byte bVar14;
   int iVar15;
   float *pfVar16;
   Face *pFVar17;
   Face *pFVar18;
   Face *this_00;
   Face *this_01;
   undefined8 *puVar19;
   long *plVar20;
   long lVar21;
   undefined8 *puVar22;
   float *pfVar23;
   undefined8 *puVar24;
   long lVar25;
   long *plVar26;
   ulong *puVar27;
   ulong uVar28;
   undefined1 uVar29;
   long unaff_RBP;
   int *piVar30;
   float *pfVar31;
   int *piVar32;
   long lVar33;
   long lVar34;
   int iVar35;
   undefined1 *puVar36;
   int iVar37;
   ulong uVar38;
   int iVar39;
   int iVar40;
   byte bVar41;
   int iVar42;
   ulong uVar43;
   long in_FS_OFFSET;
   bool bVar44;
   uint uVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   float fVar57;
   float fVar58;
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   float fVar59;
   undefined1 auVar60[12];
   float fVar64;
   float fVar65;
   undefined1 auVar61[16];
   undefined1 auVar62[16];
   undefined1 auVar63[16];
   undefined1 local_c8[16];
   long local_b8;
   undefined1 local_a8[16];
   undefined8 *local_98;
   undefined1 local_88[16];
   long local_78;
   Face *local_68;
   Face *pFStack_60;
   Face *local_58;
   Face *pFStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   FreeFaces(this);
   puVar27 = *(ulong**)this;
   uVar28 = *puVar27;
   if (uVar28 < 3) {
      uVar29 = 2;
      *param_3 = "Need at least 3 points to make a hull";
      goto LAB_00102cb4;
   }

   fVar46 = (float)DetermineCoplanarDistance(this);
   iVar15 = (int)uVar28;
   fVar46 = fVar46 * fVar46;
   fVar52 = param_2 * param_2;
   if (param_2 * param_2 <= fVar46) {
      fVar52 = fVar46;
   }

   if (0 < iVar15) {
      pfVar23 = (float*)puVar27[2];
      iVar37 = -1;
      pfVar16 = pfVar23;
      fVar48 = _LC15;
      iVar39 = 0;
      do {
         iVar40 = iVar39;
         fVar47 = pfVar16[2] * pfVar16[2] + *pfVar16 * *pfVar16 + 0.0 + pfVar16[1] * pfVar16[1];
         if (fVar48 < fVar47) {
            iVar37 = iVar40;
            fVar48 = fVar47;
         }

         pfVar16 = pfVar16 + 4;
         iVar39 = iVar40 + 1;
      }
 while ( iVar15 != iVar40 + 1 );
      iVar42 = -1;
      pfVar31 = pfVar23 + (long)iVar37 * 4;
      pfVar16 = pfVar23;
      iVar39 = 0;
      fVar48 = _LC15;
      do {
         if (( iVar39 != iVar37 ) && ( fVar47 = ( pfVar16[2] - pfVar31[2] ) * ( pfVar16[2] - pfVar31[2] ) + ( pfVar16[1] - pfVar31[1] ) * ( pfVar16[1] - pfVar31[1] ) + ( *pfVar16 - *pfVar31 ) * ( *pfVar16 - *pfVar31 ) + 0.0 ),fVar48 < fVar47) {
            fVar48 = fVar47;
            iVar42 = iVar39;
         }

         pfVar16 = pfVar16 + 4;
         bVar44 = iVar39 != iVar40;
         iVar39 = iVar39 + 1;
      }
 while ( bVar44 );
      uVar43 = 0xffffffff;
      uVar38 = 0;
      fVar48 = _LC15;
      do {
         if (( iVar37 != (int)uVar38 ) && ( iVar42 != (int)uVar38 )) {
            pfVar16 = pfVar23 + (long)iVar42 * 4;
            pfVar2 = pfVar23 + uVar38 * 4;
            fVar59 = *pfVar16 - *pfVar2;
            fVar64 = pfVar16[1] - pfVar2[1];
            fVar65 = pfVar16[2] - pfVar2[2];
            fVar51 = *pfVar31 - *pfVar2;
            fVar53 = pfVar31[1] - pfVar2[1];
            fVar54 = pfVar31[2] - pfVar2[2];
            fVar47 = fVar64 * fVar51 - fVar53 * fVar59;
            fVar53 = fVar65 * fVar53 - fVar54 * fVar64;
            fVar51 = fVar59 * fVar54 - fVar51 * fVar65;
            fVar47 = fVar47 * fVar47 + fVar51 * fVar51 + fVar53 * fVar53 + 0.0;
            if (fVar48 < fVar47) {
               uVar43 = uVar38 & 0xffffffff;
               fVar48 = fVar47;
            }

         }

         iVar39 = (int)uVar43;
         bVar44 = uVar38 != iVar15 - 1;
         uVar38 = uVar38 + 1;
      }
 while ( bVar44 );
      if (_LC9 <= fVar48) {
         if (uVar28 == 3) {
            pFVar17 = (Face*)CreateFace(this);
            Face::Initialize(pFVar17, iVar37, iVar42, iVar39, *(Vec3**)( *(long*)this + 0x10 ));
            pFVar18 = (Face*)CreateFace(this);
            uVar29 = 0;
            Face::Initialize(pFVar18, iVar37, iVar39, iVar42, *(Vec3**)( *(long*)this + 0x10 ));
            lVar33 = *(long*)( pFVar18 + 0x38 );
            lVar25 = *(long*)( pFVar17 + 0x38 );
            lVar34 = *(long*)( lVar33 + 8 );
            lVar21 = *(long*)( lVar34 + 8 );
            *(long*)( lVar25 + 0x10 ) = lVar21;
            *(long*)( lVar21 + 0x10 ) = lVar25;
            lVar25 = *(long*)( lVar25 + 8 );
            *(long*)( lVar25 + 0x10 ) = lVar34;
            *(long*)( lVar34 + 0x10 ) = lVar25;
            lVar25 = *(long*)( lVar25 + 8 );
            *(long*)( lVar25 + 0x10 ) = lVar33;
            *(long*)( lVar33 + 0x10 ) = lVar25;
            goto LAB_00102cb4;
         }

         fVar48 = *pfVar31;
         fVar47 = pfVar31[1];
         fVar53 = pfVar31[2];
         pfVar16 = pfVar23 + (long)iVar42 * 4;
         iVar35 = -1;
         pfVar2 = pfVar23 + (long)iVar39 * 4;
         fVar51 = *pfVar16 - fVar48;
         fVar54 = pfVar16[1] - fVar47;
         fVar59 = pfVar16[2] - fVar53;
         fVar65 = *pfVar2 - fVar48;
         fVar57 = pfVar2[1] - fVar47;
         fVar58 = pfVar2[2] - fVar53;
         auVar61._0_4_ = *pfVar2 + fVar48 + *pfVar16;
         auVar61._4_4_ = pfVar2[1] + fVar47 + pfVar16[1];
         auVar61._8_4_ = pfVar2[2] + fVar53 + pfVar16[2];
         auVar61._12_4_ = pfVar2[3] + pfVar31[3] + pfVar16[3];
         fVar64 = 0.0;
         fVar48 = fVar57 * fVar51 - fVar54 * fVar65;
         fVar47 = fVar58 * fVar54 - fVar59 * fVar57;
         fVar53 = fVar65 * fVar59 - fVar51 * fVar58;
         auVar55._4_4_ = fVar53;
         auVar55._0_4_ = fVar47;
         auVar55._8_4_ = fVar48;
         auVar55._12_4_ = fVar48;
         auVar56._0_4_ = SQRT(fVar48 * fVar48 + fVar53 * fVar53 + fVar47 * fVar47 + 0.0);
         auVar56._4_4_ = auVar56._0_4_;
         auVar56._8_4_ = auVar56._0_4_;
         auVar56._12_4_ = auVar56._0_4_;
         auVar56 = divps(auVar55, auVar56);
         auVar62._4_4_ = _LC19;
         auVar62._0_4_ = _LC19;
         auVar62._8_4_ = _LC19;
         auVar62._12_4_ = _LC19;
         auVar62 = divps(auVar61, auVar62);
         fVar48 = auVar56._0_4_;
         fVar47 = auVar56._4_4_;
         fVar53 = auVar56._8_4_;
         iVar15 = 0;
         do {
            if (( iVar42 != iVar15 && iVar15 != iVar37 ) && ( iVar39 != iVar15 )) {
               fVar51 = ( pfVar23[2] - auVar62._8_4_ ) * fVar53 + ( pfVar23[1] - auVar62._4_4_ ) * fVar47 + ( *pfVar23 - auVar62._0_4_ ) * fVar48 + 0.0;
               fVar54 = (float)( (uint)fVar51 & _LC10 );
               uVar45 = -(uint)(fVar54 <= (float)((uint)fVar64 & _LC10));
               if ((float)( (uint)fVar64 & _LC10 ) < fVar54) {
                  iVar35 = iVar15;
               }

               fVar64 = (float)( (uint)fVar64 & uVar45 | ~uVar45 & (uint)fVar51 );
            }

            pfVar23 = pfVar23 + 4;
            bVar44 = iVar15 != iVar40;
            iVar15 = iVar15 + 1;
         }
 while ( bVar44 );
         if (fVar46 * __LC20 < fVar64 * fVar64) {
            iVar15 = iVar39;
            if (0.0 <= fVar64) {
               iVar15 = iVar42;
               iVar42 = iVar39;
            }

            pFVar17 = (Face*)CreateFace(this);
            Face::Initialize(pFVar17, iVar37, iVar15, iVar35, *(Vec3**)( *(long*)this + 0x10 ));
            pFVar18 = (Face*)CreateFace(this);
            Face::Initialize(pFVar18, iVar15, iVar42, iVar35, *(Vec3**)( *(long*)this + 0x10 ));
            this_00 = (Face*)CreateFace(this);
            Face::Initialize(this_00, iVar42, iVar37, iVar35, *(Vec3**)( *(long*)this + 0x10 ));
            this_01 = (Face*)CreateFace(this);
            Face::Initialize(this_01, iVar37, iVar42, iVar15, *(Vec3**)( *(long*)this + 0x10 ));
            lVar33 = *(long*)( this_01 + 0x38 );
            lVar25 = *(long*)( lVar33 + 8 );
            lVar34 = *(long*)( pFVar18 + 0x38 );
            lVar21 = *(long*)( pFVar17 + 0x38 );
            lVar5 = *(long*)( lVar25 + 8 );
            lVar6 = *(long*)( lVar34 + 8 );
            lVar7 = *(long*)( lVar21 + 8 );
            *(long*)( lVar21 + 0x10 ) = lVar5;
            *(long*)( lVar5 + 0x10 ) = lVar21;
            lVar21 = *(long*)( lVar6 + 8 );
            *(long*)( lVar7 + 0x10 ) = lVar21;
            *(long*)( lVar21 + 0x10 ) = lVar7;
            lVar21 = *(long*)( lVar7 + 8 );
            lVar5 = *(long*)( this_00 + 0x38 );
            lVar7 = *(long*)( lVar5 + 8 );
            *(long*)( lVar21 + 0x10 ) = lVar7;
            *(long*)( lVar7 + 0x10 ) = lVar21;
            lVar21 = *(long*)( lVar7 + 8 );
            *(long*)( lVar34 + 0x10 ) = lVar25;
            *(long*)( lVar25 + 0x10 ) = lVar34;
            *(long*)( lVar6 + 0x10 ) = lVar21;
            *(long*)( lVar21 + 0x10 ) = lVar6;
            *(long*)( lVar5 + 0x10 ) = lVar33;
            *(long*)( lVar33 + 0x10 ) = lVar5;
            local_68 = pFVar17;
            pFStack_60 = pFVar18;
            local_58 = this_00;
            pFStack_50 = this_01;
            puVar19 = (undefined8*)( *Reallocate )(0, 0, 0x20);
            *puVar19 = local_68;
            puVar19[1] = pFStack_60;
            puVar19[2] = local_58;
            puVar19[3] = pFStack_50;
            piVar32 = *(int**)this;
            local_a8._8_8_ = 4;
            local_a8._0_8_ = 4;
            local_98 = puVar19;
            if (0 < *piVar32) {
               iVar39 = 0;
               do {
                  while (( ( iVar15 != iVar39 && iVar39 != iVar37 ) && iVar42 != iVar39 && ( iVar35 != iVar39 ) )) {
                     iVar40 = iVar39 + 1;
                     AssignPointToFace(this, iVar39, (Array*)local_a8, fVar52);
                     piVar32 = *(int**)this;
                     iVar39 = iVar40;
                     if (*piVar32 <= iVar40) goto LAB_00102943;
                  }
;
                  iVar39 = iVar39 + 1;
               }
 while ( iVar39 < *piVar32 );
            }

            LAB_00102943:iVar15 = 4;
            do {
               while (true) {
                  plVar20 = *(long**)( this + 0x18 );
                  uVar28 = *(ulong*)( this + 8 );
                  uVar10 = local_c8._8_8_;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = local_c8._8_8_;
                  local_c8 = auVar11 << 0x40;
                  plVar26 = plVar20 + uVar28;
                  if (plVar26 != plVar20) break;
                  LAB_00102ac0:lVar33 = *(long*)( this + 0x20 );
                  if (lVar33 == 0) {
                     LAB_00102c64:uVar29 = 0;
                     if (uVar28 < 2) {
                        uVar29 = 3;
                        *param_3 = "Too few faces in hull";
                     }

                     goto LAB_00102ca9;
                  }

                  piVar32 = *(int**)( this + 0x30 );
                  *(undefined8*)( this + 0x30 ) = 0;
                  *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
                  if (piVar32 + lVar33 * 2 == piVar32) {
                     LAB_00102c4d:if (piVar32 != (int*)0x0) {
                        ( *Free )(piVar32);
                     }

                     uVar28 = *(ulong*)( this + 8 );
                     goto LAB_00102c64;
                  }

                  bVar41 = 0;
                  pAVar1 = (Array*)( this + 8 );
                  piVar30 = piVar32;
                  do {
                     iVar39 = *piVar30;
                     piVar30 = piVar30 + 2;
                     bVar14 = AssignPointToFace(this, iVar39, pAVar1, fVar52);
                     bVar41 = bVar41 | bVar14;
                  }
 while ( piVar32 + lVar33 * 2 != piVar30 );
                  if (bVar41 == 0) {
                     lVar33 = *(long*)( this + 0x20 );
                     if (lVar33 != 0) {
                        piVar30 = *(int**)( this + 0x30 );
                        puVar36 = local_c8;
                        lVar25 = *(long*)( *(long*)this + 0x10 );
                        do {
                           fVar48 = (float)piVar30[1];
                           local_88._0_4_ = fVar48;
                           if (lVar33 == 1) {
                              iVar39 = *piVar30;
                              piVar30[1] = (int)fVar48;
                              *(undefined8*)( this + 0x20 ) = 0;
                              puVar22 = (undefined8*)( lVar25 + (long)iVar39 * 0x10 );
                              GetFaceForPoint(*puVar22, puVar22[1], this, pAVar1, puVar36, local_88);
                              if (local_c8._0_8_ == 0) goto LAB_00102c4d;
                              break;
                           }

                           bVar44 = false;
                           lVar21 = 1;
                           lVar34 = 0;
                           do {
                              if (fVar48 < (float)piVar30[lVar21 * 2 + 1]) {
                                 bVar44 = true;
                                 lVar34 = lVar21;
                                 fVar48 = (float)piVar30[lVar21 * 2 + 1];
                              }

                              lVar21 = lVar21 + 1;
                           }
 while ( lVar21 != lVar33 );
                           if (bVar44) {
                              local_88._0_4_ = fVar48;
                           }

                           piVar3 = piVar30 + lVar34 * 2;
                           iVar39 = *piVar3;
                           *(undefined8*)piVar3 = *(undefined8*)( piVar30 + lVar33 * 2 + -2 );
                           piVar30[lVar33 * 2 + -1] = piVar3[1];
                           piVar30[lVar33 * 2 + -2] = iVar39;
                           lVar33 = lVar33 + -1;
                           puVar22 = (undefined8*)( (long)iVar39 * 0x10 + lVar25 );
                           *(long*)( this + 0x20 ) = lVar33;
                           GetFaceForPoint(*puVar22, puVar22[1], this, pAVar1, puVar36);
                        }
 while ( local_c8._0_8_ == 0 );
                        if (piVar32 != (int*)0x0) {
                           ( *Free )();
                        }

                        goto LAB_001029c5;
                     }

                     goto LAB_00102c4d;
                  }

                  if (piVar32 != (int*)0x0) {
                     ( *Free )(piVar32);
                  }

               }
;
               bVar44 = false;
               fVar48 = 0.0;
               do {
                  fVar47 = *(float*)( *plVar20 + 0x40 );
                  if (fVar48 < fVar47) {
                     bVar44 = true;
                     unaff_RBP = *plVar20;
                     fVar48 = fVar47;
                  }

                  plVar20 = plVar20 + 1;
               }
 while ( plVar20 != plVar26 );
               if (( !bVar44 ) || ( local_c8._0_8_ = unaff_RBP ),local_c8 = CONCAT88(uVar10, local_c8._0_8_),unaff_RBP == 0) goto LAB_00102ac0;
               iVar39 = *(int*)( *(long*)( unaff_RBP + 0x30 ) + -4 + *(long*)( unaff_RBP + 0x20 ) * 4 );
               *(long*)( unaff_RBP + 0x20 ) = *(long*)( unaff_RBP + 0x20 ) + -1;
               LAB_001029c5:if (( param_1 <= iVar15 ) && ( iVar15 = param_1 <= iVar15 )) goto LAB_00102ca4;
               iVar15 = iVar15 + 1;
               local_88 = (undefined1[16])0x0;
               local_78 = 0;
               AddPoint(this, (Face*)local_c8._0_8_, iVar39, fVar46, (Array*)local_88);
               plVar20 = *(long**)( this + 0x18 );
               plVar26 = plVar20 + *(long*)( this + 8 );
               joined_r0x00102a36:if (plVar26 != plVar20) {
                  do {
                     lVar33 = *plVar20;
                     if (*(char*)( lVar33 + 0x44 ) != '\0') {
                        piVar30 = *(int**)( lVar33 + 0x30 );
                        piVar32 = piVar30 + *(long*)( lVar33 + 0x20 );
                        if (piVar32 != piVar30) goto LAB_00102a70;
                     }

                     plVar20 = plVar20 + 1;
                     if (plVar26 == plVar20) break;
                  }
 while ( true );
               }

               GarbageCollectFaces(this);
               if (local_78 != 0) {
                  ( *Free )();
               }

            }
 while ( true );
         }

         if ((float)( _LC10 & (uint)fVar48 ) <= (float)( (uint)fVar47 & _LC10 )) {
            auVar9._8_4_ = (uint)fVar47 ^ _LC6;
            auVar9._4_4_ = (uint)fVar47 ^ _LC6;
            auVar9._0_4_ = fVar53;
            auVar9._12_4_ = 0;
            fVar52 = SQRT(fVar47 * fVar47 + fVar53 * fVar53);
            auVar50._4_4_ = fVar52;
            auVar50._0_4_ = fVar52;
            auVar50._8_4_ = fVar52;
            auVar50._12_4_ = fVar52;
            auVar56 = divps(auVar9 << 0x20, auVar50);
            auVar60 = auVar56._0_12_;
         }
 else {
            auVar63._4_4_ = 0;
            auVar63._0_4_ = fVar53;
            auVar63._8_4_ = (uint)fVar48 ^ _LC6;
            auVar63._12_4_ = (uint)fVar48 ^ _LC6;
            auVar49._0_4_ = SQRT(fVar48 * fVar48 + fVar53 * fVar53);
            auVar49._4_4_ = auVar49._0_4_;
            auVar49._8_4_ = auVar49._0_4_;
            auVar49._12_4_ = auVar49._0_4_;
            auVar56 = divps(auVar63, auVar49);
            auVar60 = auVar56._0_12_;
         }

         local_b8 = 0;
         fVar52 = auVar60._0_4_;
         fVar46 = auVar60._4_4_;
         fVar51 = auVar60._8_4_;
         local_c8 = (undefined1[16])0x0;
         uVar28 = *puVar27;
         auVar56 = local_c8;
         if (uVar28 != 0) {
            lVar33 = ( *Reallocate )(0, 0, uVar28 << 4);
            local_c8._8_8_ = uVar28;
            puVar19 = (undefined8*)( *(long**)this )[2];
            puVar22 = puVar19 + **(long**)this * 2;
            local_b8 = lVar33;
            uVar38 = local_c8._0_8_;
            auVar56 = local_c8;
            for (; local_c8._0_8_ = uVar38,puVar22 != puVar19; puVar19 = puVar19 + 2) {
               local_c8._8_8_ = auVar56._8_8_;
               fVar54 = *(float*)( puVar19 + 1 );
               fVar59 = (float)*puVar19;
               fVar64 = (float)( ( ulong ) * puVar19 >> 0x20 );
               uVar38 = local_c8._0_8_ + 1;
               if (uVar28 < uVar38) {
                  uVar43 = uVar38;
                  if (uVar38 <= uVar28 * 2) {
                     uVar43 = uVar28 * 2;
                  }

                  local_c8 = auVar56;
                  lVar33 = ( *Reallocate )(lVar33, uVar28 << 4, uVar43 << 4);
                  uVar38 = local_c8._0_8_ + 1;
                  local_b8 = lVar33;
                  local_c8._8_8_ = uVar43;
               }

               lVar25 = local_c8._0_8_ * 0x10;
               local_c8._0_8_ = uVar38;
               puVar24 = (undefined8*)( lVar25 + lVar33 );
               if (puVar24 != (undefined8*)0x0) {
                  *puVar24 = CONCAT44(( fVar46 * fVar48 - fVar47 * fVar52 ) * fVar54 + ( fVar52 * fVar53 - fVar48 * fVar51 ) * fVar64 + ( fVar51 * fVar47 - fVar53 * fVar46 ) * fVar59 + 0.0, fVar51 * fVar54 + fVar46 * fVar64 + fVar52 * fVar59 + 0.0);
                  puVar24[1] = 0;
               }

               uVar28 = local_c8._8_8_;
               auVar56 = local_c8;
            }

         }

         local_c8 = auVar56;
         local_98 = (undefined8*)0x0;
         local_a8 = (undefined1[16])0x0;
         JPH::ConvexHullBuilder2D::ConvexHullBuilder2D((ConvexHullBuilder2D*)local_88, (Array*)local_c8);
         iVar15 = JPH::ConvexHullBuilder2D::Initialize((int)(ConvexHullBuilder2D*)local_88, iVar37, iVar42, iVar39, param_2, (Array*)(ulong)(uint)param_1);
         pFVar17 = (Face*)CreateFace(this);
         pfVar23 = (float*)CreateFace(this);
         uVar28 = local_a8._0_8_;
         if (local_a8._0_8_ == 0) {
            lVar33 = 0;
            lVar25 = 0;
            *(undefined8*)( _DAT_fffffffffffffff8 + 8 ) = *(undefined8*)( pFVar17 + 0x38 );
            *(undefined8*)( _DAT_fffffffffffffff8 + 8 ) = *(undefined8*)( pfVar23 + 0xe );
            LAB_00102e38:Face::CalculateNormalAndCentroid(pFVar17, *(Vec3**)( *(long*)this + 0x10 ));
            fVar52 = *(float*)pFVar17;
            fVar46 = *(float*)( pFVar17 + 4 );
            fVar48 = *(float*)( pFVar17 + 8 );
            fVar47 = *(float*)( pFVar17 + 0xc );
            uVar10 = *(undefined8*)( pFVar17 + 0x18 );
            *(undefined8*)( pfVar23 + 4 ) = *(undefined8*)( pFVar17 + 0x10 );
            *(undefined8*)( pfVar23 + 6 ) = uVar10;
            *pfVar23 = 0.0 - fVar52;
            pfVar23[1] = 0.0 - fVar46;
            pfVar23[2] = 0.0 - fVar48;
            pfVar23[3] = 0.0 - fVar47;
            if (lVar25 != 0) {
               ( *Free )(lVar25);
            }

            LAB_00102e75:if (lVar33 != 0) goto LAB_00103358;
         }
 else {
            lVar33 = ( *Reallocate )(0, 0, local_a8._0_8_ * 8);
            puVar19 = (undefined8*)( (long)local_98 + local_a8._0_8_ * 4 );
            if (puVar19 == local_98) {
               plVar26 = (long*)( lVar33 + -8 );
               uVar28 = local_a8._0_8_;
            }
 else {
               uVar38 = 0;
               puVar22 = local_98;
               do {
                  uVar4 = *(undefined4*)puVar22;
                  puVar24 = (undefined8*)( *Allocate )(0x20);
                  lVar25 = uVar38 * 8;
                  *puVar24 = pFVar17;
                  puVar24[1] = 0;
                  puVar24[2] = 0;
                  *(undefined4*)( puVar24 + 3 ) = uVar4;
                  if (uVar38 == 0) {
                     *(undefined8**)( pFVar17 + 0x38 ) = puVar24;
                  }
 else {
                     *(undefined8**)( *(long*)( lVar33 + -8 + lVar25 ) + 8 ) = puVar24;
                  }

                  uVar38 = uVar38 + 1;
                  if (uVar28 < uVar38) {
                     uVar43 = uVar28 * 2;
                     lVar34 = uVar28 * 8;
                     uVar28 = uVar43;
                     if (uVar43 < uVar38) {
                        uVar28 = uVar38;
                     }

                     lVar33 = ( *Reallocate )(lVar33, lVar34, uVar28 * 8);
                  }

                  plVar26 = (long*)( lVar33 + lVar25 );
                  puVar22 = (undefined8*)( (long)puVar22 + 4 );
                  *plVar26 = (long)puVar24;
               }
 while ( puVar19 != puVar22 );
               uVar28 = local_a8._0_8_;
            }

            *(undefined8*)( *plVar26 + 8 ) = *(undefined8*)( pFVar17 + 0x38 );
            if (uVar28 == 0) {
               *(undefined8*)( _DAT_fffffffffffffff8 + 8 ) = *(undefined8*)( pfVar23 + 0xe );
               Face::CalculateNormalAndCentroid(pFVar17, *(Vec3**)( *(long*)this + 0x10 ));
               fVar52 = *(float*)pFVar17;
               fVar46 = *(float*)( pFVar17 + 4 );
               fVar48 = *(float*)( pFVar17 + 8 );
               fVar47 = *(float*)( pFVar17 + 0xc );
               uVar10 = *(undefined8*)( pFVar17 + 0x18 );
               *(undefined8*)( pfVar23 + 4 ) = *(undefined8*)( pFVar17 + 0x10 );
               *(undefined8*)( pfVar23 + 6 ) = uVar10;
               *pfVar23 = 0.0 - fVar52;
               pfVar23[1] = 0.0 - fVar46;
               pfVar23[2] = 0.0 - fVar48;
               pfVar23[3] = 0.0 - fVar47;
               goto LAB_00102e75;
            }

            lVar25 = ( *Reallocate )(0, 0, uVar28 * 8);
            uVar45 = local_a8._0_4_ - 1;
            if ((int)uVar45 < 0) {
               plVar26 = (long*)( lVar25 + -8 );
            }
 else {
               lVar34 = (long)(int)uVar45 << 2;
               uVar38 = 0;
               do {
                  plVar26 = (long*)( *Allocate )(0x20);
                  lVar21 = uVar38 * 8;
                  uVar4 = *(undefined4*)( (long)local_98 + lVar34 );
                  *plVar26 = (long)pfVar23;
                  plVar26[1] = 0;
                  plVar26[2] = 0;
                  *(undefined4*)( plVar26 + 3 ) = uVar4;
                  if (uVar38 == 0) {
                     *(long**)( pfVar23 + 0xe ) = plVar26;
                  }
 else {
                     *(long**)( *(long*)( lVar25 + -8 + lVar21 ) + 8 ) = plVar26;
                  }

                  uVar43 = uVar38 + 1;
                  if (uVar28 < uVar43) {
                     uVar8 = uVar28 * 2;
                     lVar5 = uVar28 * 8;
                     uVar28 = uVar8;
                     if (uVar8 < uVar43) {
                        uVar28 = uVar43;
                     }

                     lVar25 = ( *Reallocate )(lVar25, lVar5, uVar28 * 8);
                  }

                  *(long**)( lVar25 + lVar21 ) = plVar26;
                  lVar34 = lVar34 + -4;
                  bVar44 = uVar38 != uVar45;
                  uVar38 = uVar43;
               }
 while ( bVar44 );
               plVar26 = (long*)( lVar21 + lVar25 );
            }

            *(undefined8*)( *plVar26 + 8 ) = *(undefined8*)( pfVar23 + 0xe );
            if (local_a8._0_8_ == 0) goto LAB_00102e38;
            uVar28 = 0;
            do {
               lVar34 = *(long*)( lVar25 + ( ( ( local_a8._0_8_ * 2 + -2 ) - uVar28 ) % (ulong)local_a8._0_8_ ) * 8 );
               lVar21 = *(long*)( lVar33 + uVar28 * 8 );
               uVar28 = uVar28 + 1;
               *(long*)( lVar21 + 0x10 ) = lVar34;
               *(long*)( lVar34 + 0x10 ) = lVar21;
            }
 while ( uVar28 != local_a8._0_8_ );
            Face::CalculateNormalAndCentroid(pFVar17, *(Vec3**)( *(long*)this + 0x10 ));
            fVar52 = *(float*)pFVar17;
            fVar46 = *(float*)( pFVar17 + 4 );
            fVar48 = *(float*)( pFVar17 + 8 );
            fVar47 = *(float*)( pFVar17 + 0xc );
            uVar10 = *(undefined8*)( pFVar17 + 0x18 );
            *(undefined8*)( pfVar23 + 4 ) = *(undefined8*)( pFVar17 + 0x10 );
            *(undefined8*)( pfVar23 + 6 ) = uVar10;
            *pfVar23 = 0.0 - fVar52;
            pfVar23[1] = 0.0 - fVar46;
            pfVar23[2] = 0.0 - fVar48;
            pfVar23[3] = 0.0 - fVar47;
            if (lVar25 != 0) {
               ( *Free )(lVar25);
            }

            LAB_00103358:( *Free )(lVar33);
         }

         uVar29 = iVar15 == 1;
         JPH::ConvexHullBuilder2D::~ConvexHullBuilder2D((ConvexHullBuilder2D*)local_88);
         if (local_98 != (undefined8*)0x0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_a8._8_8_;
            local_a8 = auVar12 << 0x40;
            ( *Free )();
         }

         if (local_b8 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_c8._8_8_;
            local_c8 = auVar13 << 0x40;
            ( *Free )();
         }

         goto LAB_00102cb4;
      }

   }

   uVar29 = 4;
   *param_3 = "Could not find a suitable initial triangle because its area was too small";
   LAB_00102cb4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar29;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102a70:do {
      iVar39 = *piVar30;
      piVar30 = piVar30 + 1;
      AssignPointToFace(this, iVar39, (Array*)local_88, fVar52);
   }
 while ( piVar32 != piVar30 );
   plVar20 = plVar20 + 1;
   goto joined_r0x00102a36;
   LAB_00102ca4:uVar29 = 1;
   LAB_00102ca9:( *Free )(puVar19);
   goto LAB_00102cb4;
}
/* JPH::HashTable<int, int, JPH::UnorderedSetDetail<int>, JPH::Hash<int>, std::equal_to<int>
   >::GrowTable() */void JPH::HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>>::GrowTable(HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>> *this) {
   void *__s;
   char *pcVar1;
   byte *pbVar2;
   long lVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   long lVar8;
   uint uVar9;
   byte bVar10;
   byte *pbVar11;
   int iVar12;
   byte *pbVar13;
   char *pcVar14;
   undefined1 auVar15[16];
   uVar6 = *(uint*)( this + 0x14 );
   uVar7 = ( ulong )(uVar6 * 2);
   if (uVar6 * 2 < 0x10) {
      uVar7 = 0x10;
   }

   if (uVar6 <= (uint)uVar7) {
      lVar3 = *(long*)this;
      pcVar14 = *(char**)( this + 8 );
      *(undefined4*)( this + 0x10 ) = 0;
      *(uint*)( this + 0x14 ) = (uint)uVar7;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(int*)( this + 0x18 ) = (int)( uVar7 * 7 >> 3 );
      lVar8 = ( *Allocate )(uVar7 * 5 + 0xf);
      *(long*)this = lVar8;
      __s = (void*)( lVar8 + ( ulong ) * (uint*)( this + 0x14 ) * 4 );
      *(void**)( this + 8 ) = __s;
      memset(__s, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
      if (lVar3 != 0) {
         if (uVar6 != 0) {
            pbVar2 = (byte*)( lVar3 + 4 ) + (ulong)uVar6 * 4;
            pbVar13 = (byte*)( lVar3 + 4 );
            do {
               while (*pcVar14 < '\0') {
                  iVar12 = *(int*)( this + 0x18 );
                  pbVar11 = pbVar13 + -4;
                  if (iVar12 == 0) {
                     if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
                        rehash((uint)this);
                        iVar12 = *(int*)( this + 0x18 );
                     }
 else {
                        GrowTable(this);
                        iVar12 = *(int*)( this + 0x18 );
                     }

                  }

                  uVar7 = 0xcbf29ce484222325;
                  do {
                     bVar10 = *pbVar11;
                     pbVar11 = pbVar11 + 1;
                     uVar7 = ( uVar7 ^ bVar10 ) * 0x100000001b3;
                  }
 while ( pbVar11 != pbVar13 );
                  bVar10 = (byte)uVar7 | 0x80;
                  uVar6 = ( uint )(uVar7 >> 7);
                  while (true) {
                     uVar6 = uVar6 & *(int*)( this + 0x14 ) - 1U;
                     pcVar1 = (char*)( *(long*)( this + 8 ) + (ulong)uVar6 );
                     auVar15[0] = -(*pcVar1 == '\0');
                     for (int i = 0; i < 15; i++) {
                        auVar15[( i + 1 )] = -(pcVar1[1] == '\0');
                     }

                     uVar4 = ( ushort )(SUB161(auVar15 >> 7, 0) & 1) | ( ushort )(SUB161(auVar15 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar15 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar15 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar15 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar15 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar15 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar15 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar15 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar15 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar15 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar15 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar15 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar15 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar15 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar15[0xf] >> 7) << 0xf;
                     if (uVar4 != 0) break;
                     uVar6 = uVar6 + 0x10;
                  }
;
                  iVar5 = 0;
                  for (uVar9 = (uint)uVar4; ( uVar9 & 1 ) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                     iVar5 = iVar5 + 1;
                  }

                  pbVar11 = pbVar13 + 4;
                  pcVar14 = pcVar14 + 1;
                  *(int*)( this + 0x18 ) = iVar12 + -1;
                  uVar6 = iVar5 + uVar6 & *(int*)( this + 0x14 ) - 1U;
                  *(byte*)( *(long*)( this + 8 ) + (ulong)uVar6 ) = bVar10;
                  *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar6 - 0xf ) + 0xf) ) = bVar10;
                  *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
                  *(undefined4*)( *(long*)this + (ulong)uVar6 * 4 ) = *(undefined4*)( pbVar13 + -4 );
                  pbVar13 = pbVar11;
                  if (pbVar2 == pbVar11) goto LAB_0010366a;
               }
;
               pbVar13 = pbVar13 + 4;
               pcVar14 = pcVar14 + 1;
            }
 while ( pbVar2 != pbVar13 );
         }

         LAB_0010366a:/* WARNING: Could not recover jumptable at 0x0010367b. Too many branches *//* WARNING: Treating indirect jump as call */( *Free )(lVar3);
         return;
      }

   }

   return;
}
/* bool JPH::HashTable<int, int, JPH::UnorderedSetDetail<int>, JPH::Hash<int>, std::equal_to<int>
   >::InsertKey<false>(int const&, unsigned int&) */bool JPH::HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>>::InsertKey<false>(HashTable<int,int,JPH::UnorderedSetDetail<int>,JPH::Hash<int>,std::equal_to<int>> *this, int *param_1, uint *param_2) {
   uint uVar1;
   byte bVar2;
   ushort uVar3;
   int iVar4;
   uint uVar5;
   byte bVar6;
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
   uint uVar22;
   uint uVar23;
   byte *pbVar24;
   bool bVar25;
   uint uVar26;
   ulong uVar27;
   uint uVar28;
   byte bVar29;
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   if (*(int*)( this + 0x18 ) == 0) {
      if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
         rehash((uint)this);
      }
 else {
         GrowTable(this);
      }

   }

   uVar27 = 0xcbf29ce484222325;
   pbVar24 = (byte*)param_1;
   do {
      bVar29 = *pbVar24;
      pbVar24 = pbVar24 + 1;
      uVar27 = ( uVar27 ^ bVar29 ) * 0x100000001b3;
   }
 while ( pbVar24 != (byte*)( param_1 + 1 ) );
   bVar29 = (byte)uVar27 | 0x80;
   uVar23 = 0xffffffff;
   uVar1 = *(int*)( this + 0x14 ) - 1;
   uVar28 = ( uint )(uVar27 >> 7);
   while (true) {
      uVar28 = uVar28 & uVar1;
      pbVar24 = (byte*)( *(long*)( this + 8 ) + (ulong)uVar28 );
      bVar6 = *pbVar24;
      bVar7 = pbVar24[1];
      bVar8 = pbVar24[2];
      bVar9 = pbVar24[3];
      bVar10 = pbVar24[4];
      bVar11 = pbVar24[5];
      bVar12 = pbVar24[6];
      bVar13 = pbVar24[7];
      bVar14 = pbVar24[8];
      bVar15 = pbVar24[9];
      bVar16 = pbVar24[10];
      bVar17 = pbVar24[0xb];
      bVar18 = pbVar24[0xc];
      bVar19 = pbVar24[0xd];
      bVar20 = pbVar24[0xe];
      bVar21 = pbVar24[0xf];
      auVar31[0] = -(bVar29 == bVar6);
      auVar31[1] = -(bVar29 == bVar7);
      auVar31[2] = -(bVar29 == bVar8);
      auVar31[3] = -(bVar29 == bVar9);
      auVar31[4] = -(bVar29 == bVar10);
      auVar31[5] = -(bVar29 == bVar11);
      auVar31[6] = -(bVar29 == bVar12);
      auVar31[7] = -(bVar29 == bVar13);
      auVar31[8] = -(bVar29 == bVar14);
      auVar31[9] = -(bVar29 == bVar15);
      auVar31[10] = -(bVar29 == bVar16);
      auVar31[0xb] = -(bVar29 == bVar17);
      auVar31[0xc] = -(bVar29 == bVar18);
      auVar31[0xd] = -(bVar29 == bVar19);
      auVar31[0xe] = -(bVar29 == bVar20);
      auVar31[0xf] = -(bVar29 == bVar21);
      uVar3 = ( ushort )(SUB161(auVar31 >> 7, 0) & 1) | ( ushort )(SUB161(auVar31 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar31 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar31 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar31 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar31 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar31 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar31 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar31 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar31 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar31 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar31 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar31 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar31 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar31 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar31[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
         uVar26 = (uint)uVar3;
         uVar22 = uVar28;
         do {
            iVar4 = 0;
            for (uVar5 = uVar26; ( uVar5 & 1 ) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
               iVar4 = iVar4 + 1;
            }

            uVar22 = uVar22 + iVar4 & uVar1;
            if (*(int*)( *(long*)this + (ulong)uVar22 * 4 ) == *param_1) {
               bVar25 = false;
               goto LAB_001037a1;
            }

            uVar22 = uVar22 + 1;
            bVar2 = (char)iVar4 + 1U & 0x1f;
            uVar5 = uVar26 >> bVar2;
            uVar26 = uVar26 >> bVar2;
         }
 while ( uVar5 != 0 );
      }

      if (uVar23 == 0xffffffff) {
         auVar32[0] = -(bVar6 == _LC14);
         auVar32[1] = -(bVar7 == UNK_00103941);
         auVar32[2] = -(bVar8 == UNK_00103942);
         auVar32[3] = -(bVar9 == UNK_00103943);
         auVar32[4] = -(bVar10 == UNK_00103944);
         auVar32[5] = -(bVar11 == UNK_00103945);
         auVar32[6] = -(bVar12 == UNK_00103946);
         auVar32[7] = -(bVar13 == UNK_00103947);
         auVar32[8] = -(bVar14 == UNK_00103948);
         auVar32[9] = -(bVar15 == UNK_00103949);
         auVar32[10] = -(bVar16 == UNK_0010394a);
         auVar32[0xb] = -(bVar17 == UNK_0010394b);
         auVar32[0xc] = -(bVar18 == UNK_0010394c);
         auVar32[0xd] = -(bVar19 == UNK_0010394d);
         auVar32[0xe] = -(bVar20 == UNK_0010394e);
         auVar32[0xf] = -(bVar21 == UNK_0010394f);
         iVar4 = 0;
         uVar26 = ( uint )(ushort)(( ushort )(SUB161(auVar32 >> 7, 0) & 1) | ( ushort )(SUB161(auVar32 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar32 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar32 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar32 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar32 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar32 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar32 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar32 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar32 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar32 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar32 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar32 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar32 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar32 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar32[0xf] >> 7) << 0xf);
         for (uVar22 = uVar26; ( uVar22 & 1 ) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
         }

         if (uVar26 != 0) {
            uVar23 = iVar4 + uVar28;
         }

      }

      auVar30[0] = -(bVar6 == 0);
      auVar30[1] = -(bVar7 == 0);
      auVar30[2] = -(bVar8 == 0);
      auVar30[3] = -(bVar9 == 0);
      auVar30[4] = -(bVar10 == 0);
      auVar30[5] = -(bVar11 == 0);
      auVar30[6] = -(bVar12 == 0);
      auVar30[7] = -(bVar13 == 0);
      auVar30[8] = -(bVar14 == 0);
      auVar30[9] = -(bVar15 == 0);
      auVar30[10] = -(bVar16 == 0);
      auVar30[0xb] = -(bVar17 == 0);
      auVar30[0xc] = -(bVar18 == 0);
      auVar30[0xd] = -(bVar19 == 0);
      auVar30[0xe] = -(bVar20 == 0);
      auVar30[0xf] = -(bVar21 == 0);
      uVar3 = ( ushort )(SUB161(auVar30 >> 7, 0) & 1) | ( ushort )(SUB161(auVar30 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar30 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar30 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar30 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar30 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar30 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar30 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar30 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar30 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar30 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar30 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar30 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar30 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar30 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar30[0xf] >> 7) << 0xf;
      if (uVar3 != 0) break;
      uVar28 = uVar28 + 0x10;
   }
;
   if (uVar23 == 0xffffffff) {
      iVar4 = 0;
      for (uVar23 = (uint)uVar3; ( uVar23 & 1 ) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
         iVar4 = iVar4 + 1;
      }

      *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + -1;
      uVar23 = iVar4 + uVar28;
   }

   uVar22 = uVar1 & uVar23;
   *(byte*)( *(long*)( this + 8 ) + (ulong)uVar22 ) = bVar29;
   *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar22 - 0xf ) + 0xf) ) = bVar29;
   bVar25 = true;
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   LAB_001037a1:*param_2 = uVar22;
   return bVar25;
}
/* JPH::ConvexHullBuilder::Face::~Face() */void JPH::ConvexHullBuilder::Face::_GLOBAL__sub_I__Face(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC24;
   }

   return;
}

