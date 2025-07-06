/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::TransformedShape::GetWorldSpaceSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const [clone
   .isra.0] */undefined1[16];JPH::TransformedShape::GetWorldSpaceSurfaceNormal(undefined8 param_1_00, float param_2, float *param_1, uint param_4) {
   long in_FS_OFFSET;
   float fVar1;
   float fVar2;
   float fVar4;
   float fVar5;
   float fVar6;
   undefined1 auVar3[16];
   float fVar7;
   float fVar10;
   float fVar11;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   undefined1 local_68[8];
   undefined8 uStack_60;
   uint local_14;
   long local_10;
   fVar1 = (float)( __LC2 ^ (uint)param_1[4] );
   fVar4 = (float)( _UNK_0010ca94 ^ (uint)param_1[5] );
   fVar5 = (float)( _UNK_0010ca98 ^ (uint)param_1[6] );
   fVar6 = (float)( _UNK_0010ca9c ^ (uint)param_1[7] );
   fVar7 = *param_1;
   fVar10 = param_1[1];
   fVar11 = param_1[2];
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar17 = fVar4 + fVar4;
   fVar12 = fVar1 + fVar1;
   fVar18 = fVar5 * ( fVar5 + fVar5 );
   fVar2 = fVar6 * ( fVar5 + fVar5 );
   fVar14 = fVar5 * fVar12 - fVar17 * fVar6;
   fVar15 = ( _LC3 - fVar1 * fVar12 ) - fVar4 * fVar17;
   fVar16 = fVar5 * fVar17 - fVar12 * fVar6;
   fVar13 = fVar12 * fVar6 + fVar5 * fVar17;
   fVar6 = fVar5 * fVar12 + fVar17 * fVar6;
   fVar5 = fVar4 * fVar12 + fVar2;
   fVar2 = fVar4 * fVar12 - fVar2;
   fVar4 = ( _LC3 - fVar4 * fVar17 ) - fVar18;
   fVar1 = ( _LC3 - fVar18 ) - fVar1 * fVar12;
   auVar8 = *(undefined1(*) [16])( param_1 + 10 );
   local_68._0_4_ = (undefined4)param_1_00;
   local_68._4_4_ = ( undefined4 )((ulong)param_1_00 >> 0x20);
   local_14 = ( uint )(0xffffffffL << ( 0x20 - SUB41(param_1[0xf], 0) & 0x3f )) | param_4 >> ( SUB41(param_1[0xf], 0) & 0x3f );
   auVar3._0_4_ = fVar4 * (float)local_68._0_4_ + (float)local_68._4_4_ * fVar2 + param_2 * fVar6 + ( 0.0 - ( fVar7 * fVar4 + fVar10 * fVar2 + fVar11 * fVar6 ) );
   auVar3._4_4_ = fVar5 * (float)local_68._0_4_ + (float)local_68._4_4_ * fVar1 + param_2 * fVar16 + ( 0.0 - ( fVar7 * fVar5 + fVar10 * fVar1 + fVar11 * fVar16 ) );
   auVar3._8_4_ = fVar14 * (float)local_68._0_4_ + (float)local_68._4_4_ * fVar13 + param_2 * fVar15 + ( 0.0 - ( fVar7 * fVar14 + fVar10 * fVar13 + fVar11 * fVar15 ) );
   auVar3._12_4_ = (float)local_68._0_4_ * 0.0 + (float)local_68._4_4_ * 0.0 + param_2 * 0.0 + 1.0;
   auVar3 = divps(auVar3, auVar8);
   local_68 = auVar3._0_8_;
   uStack_60 = auVar3._8_8_;
   _local_68 = ( **(code**)( **(long**)( param_1 + 8 ) + 0x58 ) )(local_68, uStack_60, *(long**)( param_1 + 8 ), &local_14);
   auVar8 = divps(_local_68, auVar8);
   fVar7 = auVar8._0_4_;
   fVar10 = auVar8._4_4_;
   fVar11 = auVar8._8_4_;
   auVar9._0_4_ = fVar11 * fVar14 + fVar5 * fVar10 + fVar7 * fVar4;
   auVar9._4_4_ = fVar11 * fVar13 + fVar1 * fVar10 + fVar7 * fVar2;
   auVar9._8_4_ = fVar11 * fVar15 + fVar16 * fVar10 + fVar7 * fVar6;
   auVar9._12_4_ = fVar11 * 0.0 + fVar10 * 0.0 + fVar7 * 0.0;
   auVar8._0_4_ = SQRT(auVar9._8_4_ * auVar9._8_4_ + auVar9._4_4_ * auVar9._4_4_ + auVar9._0_4_ * auVar9._0_4_ + 0.0);
   auVar8._4_4_ = auVar8._0_4_;
   auVar8._8_4_ = auVar8._0_4_;
   auVar8._12_4_ = auVar8._0_4_;
   auVar8 = divps(auVar9, auVar8);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return auVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::CharacterVirtual::~CharacterVirtual() */void JPH::CharacterVirtual::~CharacterVirtual(CharacterVirtual *this) {
   long *plVar1;
   long *plVar2;
   *(undefined***)this = &PTR__CharacterVirtual_0010c948;
   if (*(int*)( this + 0x148 ) != -1) {
      JPH::BodyInterface::RemoveBody((BodyID*)( *(long*)( this + 0x10 ) + 0x158 ));
      JPH::BodyInterface::DestroyBody((BodyID*)( *(long*)( this + 0x10 ) + 0x158 ));
   }

   if (*(long*)( this + 0x130 ) != 0) {
      *(undefined8*)( this + 0x120 ) = 0;
      ( *Free )();
   }

   plVar2 = *(long**)( this + 0x80 );
   *(undefined8**)this = &CollisionDispatch::sCastShape;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         if (*(code**)( *plVar2 + 0x18 ) == PhysicsMaterial::~PhysicsMaterial) {
            ( *Free )();
         }
 else {
            ( **(code**)( *plVar2 + 0x18 ) )();
         }

      }

   }

   plVar2 = *(long**)( this + 0x18 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         /* WARNING: Could not recover jumptable at 0x001003fd. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar2 + 8 ) )();
         return;
      }

   }

   return;
}
/* JPH::CharacterVirtual::~CharacterVirtual() */void JPH::CharacterVirtual::~CharacterVirtual(CharacterVirtual *this) {
   ~CharacterVirtual(this)
   ;;
   /* WARNING: Could not recover jumptable at 0x00100441. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )(this);
   return;
}
/* void JPH::QuickSortMedianOfThree<JPH::CharacterVirtual::Contact*,
   JPH::CharacterVirtual::ContactOrderingPredicate>(JPH::CharacterVirtual::Contact*,
   JPH::CharacterVirtual::Contact*, JPH::CharacterVirtual::Contact*,
   JPH::CharacterVirtual::ContactOrderingPredicate) [clone .isra.0] */void JPH::QuickSortMedianOfThree<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
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
   uint uVar17;
   uint uVar18;
   long in_FS_OFFSET;
   bool bVar19;
   undefined4 uStack_29;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar17 = *(uint*)( param_1 + 9 );
   bVar19 = *(uint*)( param_2 + 9 ) < uVar17;
   if (*(uint*)( param_2 + 9 ) == uVar17) {
      bVar19 = *(uint*)( param_2 + 0xb ) < *(uint*)( param_1 + 0xb );
   }

   if (bVar19) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      uStack_29._1_3_ = (undefined3)param_1[0xe];
      uVar8 = param_2[1];
      uVar9 = param_1[6];
      uVar10 = param_1[7];
      uVar11 = param_1[8];
      uVar12 = param_1[9];
      uVar13 = param_1[10];
      uVar14 = param_1[0xb];
      *param_1 = *param_2;
      param_1[1] = uVar8;
      uVar8 = param_2[3];
      uVar15 = param_1[0xc];
      uVar16 = param_1[0xd];
      for (int i = 0; i < 5; i++) {
         param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
         param_1[( 2*i + 3 )] = uVar8;
         uVar8 = param_2[( 2*i + 5 )];
      }

      uStack_29._0_1_ = ( undefined1 )((ulong)uVar16 >> 0x38);
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar8;
      *(undefined4*)( (long)param_1 + 0x6f ) = *(undefined4*)( (long)param_2 + 0x6f );
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[0xc] = uVar15;
      param_2[0xd] = uVar16;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      *(undefined4*)( (long)param_2 + 0x6f ) = uStack_29;
      param_2[4] = uVar6;
      param_2[5] = uVar7;
      param_2[6] = uVar9;
      param_2[7] = uVar10;
      param_2[8] = uVar11;
      param_2[9] = uVar12;
      param_2[10] = uVar13;
      param_2[0xb] = uVar14;
      uVar17 = *(uint*)( param_1 + 9 );
   }

   uVar18 = *(uint*)( param_3 + 9 );
   if (uVar18 == uVar17) {
      if (*(uint*)( param_1 + 0xb ) <= *(uint*)( param_3 + 0xb )) goto LAB_0010048a;
   }
 else if (uVar17 <= uVar18) goto LAB_0010048a;
   uVar2 = *param_1;
   uVar3 = param_1[1];
   uVar4 = param_1[2];
   uVar5 = param_1[3];
   uVar6 = param_1[4];
   uVar7 = param_1[5];
   uStack_29._1_3_ = (undefined3)param_1[0xe];
   uVar8 = param_3[1];
   uVar9 = param_1[6];
   uVar10 = param_1[7];
   uVar11 = param_1[8];
   uVar12 = param_1[9];
   uVar13 = param_1[10];
   uVar14 = param_1[0xb];
   *param_1 = *param_3;
   param_1[1] = uVar8;
   uVar8 = param_3[3];
   uVar15 = param_1[0xc];
   uVar16 = param_1[0xd];
   for (int i = 0; i < 5; i++) {
      param_1[( 2*i + 2 )] = param_3[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar8;
      uVar8 = param_3[( 2*i + 5 )];
   }

   uStack_29._0_1_ = ( undefined1 )((ulong)uVar16 >> 0x38);
   param_1[0xc] = param_3[0xc];
   param_1[0xd] = uVar8;
   *(undefined4*)( (long)param_1 + 0x6f ) = *(undefined4*)( (long)param_3 + 0x6f );
   *param_3 = uVar2;
   param_3[1] = uVar3;
   param_3[8] = uVar11;
   param_3[9] = uVar12;
   uVar18 = *(uint*)( param_3 + 9 );
   param_3[0xc] = uVar15;
   param_3[0xd] = uVar16;
   param_3[2] = uVar4;
   param_3[3] = uVar5;
   *(undefined4*)( (long)param_3 + 0x6f ) = uStack_29;
   param_3[4] = uVar6;
   param_3[5] = uVar7;
   param_3[6] = uVar9;
   param_3[7] = uVar10;
   param_3[10] = uVar13;
   param_3[0xb] = uVar14;
   LAB_0010048a:bVar19 = uVar18 < *(uint*)( param_2 + 9 );
   if (uVar18 == *(uint*)( param_2 + 9 )) {
      bVar19 = *(uint*)( param_3 + 0xb ) < *(uint*)( param_2 + 0xb );
   }

   if (bVar19) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uStack_29._1_3_ = (undefined3)param_2[0xe];
      uVar8 = param_3[1];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      uVar11 = param_2[8];
      uVar12 = param_2[9];
      uVar13 = param_2[10];
      uVar14 = param_2[0xb];
      *param_2 = *param_3;
      param_2[1] = uVar8;
      uVar8 = param_3[3];
      uVar15 = param_2[0xc];
      uVar16 = param_2[0xd];
      for (int i = 0; i < 5; i++) {
         param_2[( 2*i + 2 )] = param_3[( 2*i + 2 )];
         param_2[( 2*i + 3 )] = uVar8;
         uVar8 = param_3[( 2*i + 5 )];
      }

      uStack_29._0_1_ = ( undefined1 )((ulong)uVar16 >> 0x38);
      param_2[0xc] = param_3[0xc];
      param_2[0xd] = uVar8;
      *(undefined4*)( (long)param_2 + 0x6f ) = *(undefined4*)( (long)param_3 + 0x6f );
      *param_3 = uVar2;
      param_3[1] = uVar3;
      param_3[0xc] = uVar15;
      param_3[0xd] = uVar16;
      param_3[2] = uVar4;
      param_3[3] = uVar5;
      *(undefined4*)( (long)param_3 + 0x6f ) = uStack_29;
      param_3[4] = uVar6;
      param_3[5] = uVar7;
      param_3[6] = uVar9;
      param_3[7] = uVar10;
      param_3[8] = uVar11;
      param_3[9] = uVar12;
      param_3[10] = uVar13;
      param_3[0xb] = uVar14;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void JPH::QuickSort<JPH::CharacterVirtual::Contact*,
   JPH::CharacterVirtual::ContactOrderingPredicate>(JPH::CharacterVirtual::Contact*,
   JPH::CharacterVirtual::Contact*, JPH::CharacterVirtual::ContactOrderingPredicate) [clone .isra.0]
    */void JPH::QuickSort<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(undefined8 *param_1, undefined8 *param_2) {
   uint uVar1;
   uint uVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 *puVar5;
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
   undefined8 uVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   undefined8 *puVar23;
   long lVar24;
   long lVar25;
   long in_FS_OFFSET;
   bool bVar26;
   undefined4 uStack_59;
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar25 = (long)param_2 - (long)param_1;
   do {
      if (lVar25 < 0x81) {
         LAB_00100aa0:if (lVar4 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      if (lVar25 < 0x1001) {
         puVar22 = param_1;
         if (param_2 != param_1) {
            while (puVar21 = puVar22 + 0x10,param_2 != puVar21) {
               uVar6 = *puVar21;
               uVar7 = puVar22[0x11];
               uVar8 = puVar22[0x12];
               uVar9 = puVar22[0x13];
               uVar10 = puVar22[0x14];
               uVar11 = puVar22[0x15];
               uVar12 = puVar22[0x16];
               uVar13 = puVar22[0x17];
               uVar14 = puVar22[0x18];
               uVar15 = puVar22[0x19];
               uVar16 = puVar22[0x1a];
               uVar17 = puVar22[0x1b];
               uVar18 = puVar22[0x1c];
               uVar19 = puVar22[0x1d];
               uVar1 = *(uint*)( puVar22 + 0x19 );
               uVar2 = *(uint*)( puVar22 + 0x1b );
               uStack_59._0_1_ = ( undefined1 )((ulong)uVar19 >> 0x38);
               uStack_59._1_3_ = (undefined3)puVar22[0x1e];
               bVar26 = uVar1 < *(uint*)( param_1 + 9 );
               if (uVar1 == *(uint*)( param_1 + 9 )) {
                  bVar26 = uVar2 < *(uint*)( param_1 + 0xb );
               }

               puVar22 = puVar21;
               if (bVar26) {
                  for (; param_1 != puVar21; puVar21 = puVar21 + -0x10) {
                     *puVar21 = puVar21[-0x10];
                     puVar21[1] = puVar21[-0xf];
                     uVar3 = *(undefined4*)( (long)puVar21 - 0x11 );
                     puVar21[4] = puVar21[-0xc];
                     puVar21[5] = puVar21[-0xb];
                     puVar21[6] = puVar21[-10];
                     puVar21[7] = puVar21[-9];
                     puVar21[0xc] = puVar21[-4];
                     puVar21[0xd] = puVar21[-3];
                     puVar21[8] = puVar21[-8];
                     puVar21[9] = puVar21[-7];
                     *(undefined4*)( (long)puVar21 + 0x6f ) = uVar3;
                     puVar21[10] = puVar21[-6];
                     puVar21[0xb] = puVar21[-5];
                     puVar21[2] = puVar21[-0xe];
                     puVar21[3] = puVar21[-0xd];
                  }

                  *param_1 = uVar6;
                  param_1[1] = uVar7;
                  param_1[2] = uVar8;
                  param_1[3] = uVar9;
                  param_1[0xc] = uVar18;
                  param_1[0xd] = uVar19;
                  *(undefined4*)( (long)param_1 + 0x6f ) = uStack_59;
                  param_1[4] = uVar10;
                  param_1[5] = uVar11;
                  param_1[6] = uVar12;
                  param_1[7] = uVar13;
                  param_1[8] = uVar14;
                  param_1[9] = uVar15;
                  param_1[10] = uVar16;
                  param_1[0xb] = uVar17;
               }
 else {
                  while (true) {
                     bVar26 = uVar1 < *(uint*)( puVar21 + -7 );
                     if (uVar1 == *(uint*)( puVar21 + -7 )) {
                        bVar26 = uVar2 < *(uint*)( puVar21 + -5 );
                     }

                     if (!bVar26) break;
                     uVar3 = *(undefined4*)( (long)puVar21 - 0x11 );
                     puVar21[0xc] = puVar21[-4];
                     puVar21[0xd] = puVar21[-3];
                     *(undefined4*)( (long)puVar21 + 0x6f ) = uVar3;
                     *puVar21 = puVar21[-0x10];
                     for (int i = 0; i < 11; i++) {
                        puVar21[( i + 1 )] = puVar21[( i + -15 )];
                     }

                     puVar21 = puVar21 + -0x10;
                  }
;
                  *puVar21 = uVar6;
                  puVar21[1] = uVar7;
                  puVar21[2] = uVar8;
                  puVar21[3] = uVar9;
                  puVar21[4] = uVar10;
                  puVar21[5] = uVar11;
                  puVar21[0xc] = uVar18;
                  puVar21[0xd] = uVar19;
                  puVar21[6] = uVar12;
                  puVar21[7] = uVar13;
                  *(undefined4*)( (long)puVar21 + 0x6f ) = uStack_59;
                  puVar21[8] = uVar14;
                  puVar21[9] = uVar15;
                  puVar21[10] = uVar16;
                  puVar21[0xb] = uVar17;
               }

            }
;
         }

         goto LAB_00100aa0;
      }

      puVar22 = param_2 + -0x10;
      lVar24 = (long)puVar22 - (long)param_1 >> 10;
      puVar21 = param_1 + ( ( lVar25 >> 7 ) + -1 >> 1 ) * 0x10;
      QuickSortMedianOfThree<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(param_1, param_1 + lVar24 * 0x10, param_1 + lVar24 * 0x20);
      QuickSortMedianOfThree<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(puVar21 + lVar24 * -0x10, puVar21, puVar21 + lVar24 * 0x10);
      QuickSortMedianOfThree<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(puVar22 + lVar24 * -0x20, puVar22 + lVar24 * -0x10, puVar22);
      QuickSortMedianOfThree<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(param_1 + lVar24 * 0x10, puVar21, puVar22 + lVar24 * -0x10);
      uVar1 = *(uint*)( puVar21 + 9 );
      uVar2 = *(uint*)( puVar21 + 0xb );
      puVar22 = param_2;
      puVar21 = param_1;
      LAB_0010080d:do {
         puVar5 = puVar21;
         if (uVar1 == *(uint*)( puVar5 + 9 )) {
            bVar26 = *(uint*)( puVar5 + 0xb ) < uVar2;
         }
 else {
            bVar26 = *(uint*)( puVar5 + 9 ) < uVar1;
         }

         puVar21 = puVar5 + 0x10;
      }
 while ( bVar26 );
      do {
         while (true) {
            puVar23 = puVar22;
            puVar22 = puVar23 + -0x10;
            if (uVar1 == *(uint*)( puVar23 + -7 )) break;
            if (*(uint*)( puVar23 + -7 ) <= uVar1) goto LAB_00100833;
         }
;
      }
 while ( uVar2 < *(uint*)( puVar23 + -5 ) );
      LAB_00100833:if (puVar5 < puVar22) {
         uVar6 = *puVar5;
         uVar7 = puVar5[1];
         uVar8 = puVar5[2];
         uVar9 = puVar5[3];
         uVar10 = puVar5[4];
         uVar11 = puVar5[5];
         uVar12 = puVar5[6];
         uVar13 = puVar5[7];
         uVar14 = puVar5[8];
         uVar15 = puVar5[9];
         uVar16 = puVar5[10];
         uVar17 = puVar5[0xb];
         uVar18 = puVar5[0xc];
         uVar19 = puVar5[0xd];
         uStack_59._1_3_ = (undefined3)puVar5[0xe];
         uVar20 = puVar23[-0xf];
         *puVar5 = *puVar22;
         puVar5[1] = uVar20;
         uVar20 = puVar23[-0xd];
         for (int i = 0; i < 3; i++) {
            puVar5[( 2*i + 2 )] = puVar23[( 2*i + -14 )];
            puVar5[( 2*i + 3 )] = uVar20;
            uVar20 = puVar23[( 2*i + -11 )];
         }

         uStack_59._0_1_ = ( undefined1 )((ulong)uVar19 >> 0x38);
         puVar5[8] = puVar23[-8];
         puVar5[9] = uVar20;
         uVar20 = puVar23[-5];
         puVar5[10] = puVar23[-6];
         puVar5[0xb] = uVar20;
         uVar20 = puVar23[-3];
         puVar5[0xc] = puVar23[-4];
         puVar5[0xd] = uVar20;
         *(undefined4*)( (long)puVar5 + 0x6f ) = *(undefined4*)( (long)puVar23 - 0x11 );
         *puVar22 = uVar6;
         puVar23[-0xf] = uVar7;
         puVar23[-4] = uVar18;
         puVar23[-3] = uVar19;
         puVar23[-0xe] = uVar8;
         puVar23[-0xd] = uVar9;
         *(undefined4*)( (long)puVar23 - 0x11 ) = uStack_59;
         puVar23[-0xc] = uVar10;
         puVar23[-0xb] = uVar11;
         puVar23[-10] = uVar12;
         puVar23[-9] = uVar13;
         puVar23[-8] = uVar14;
         puVar23[-7] = uVar15;
         puVar23[-6] = uVar16;
         puVar23[-5] = uVar17;
         goto LAB_0010080d;
      }

      lVar25 = (long)puVar23 - (long)param_1;
      if (lVar25 < (long)param_2 - (long)puVar23) {
         QuickSort<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(param_1, puVar23);
         lVar25 = (long)param_2 - (long)puVar23;
         param_1 = puVar23;
      }
 else {
         QuickSort<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>(puVar23, param_2);
         param_2 = puVar23;
      }

   }
 while ( true );
}
/* void JPH::QuickSort<JPH::CharacterVirtual::Constraint**,
   JPH::CharacterVirtual::SolveConstraints(JPH::Vec3, float, float,
   JPH::Array<JPH::CharacterVirtual::Constraint,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint> >&,
   JPH::Array<JPH::CharacterVirtual::IgnoredContact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact> >&, float&, JPH::Vec3&,
   JPH::TempAllocator&, bool) const::{lambda(JPH::CharacterVirtual::Constraint const*,
   JPH::CharacterVirtual::Constraint const*)#1}>(JPH::CharacterVirtual::Constraint**,
   JPH::CharacterVirtual::Constraint**, JPH::CharacterVirtual::SolveConstraints(JPH::Vec3, float,
   float, JPH::Array<JPH::CharacterVirtual::Constraint,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint> >&,
   JPH::Array<JPH::CharacterVirtual::IgnoredContact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact> >&, float&, JPH::Vec3&,
   JPH::TempAllocator&, bool) const::{lambda(JPH::CharacterVirtual::Constraint const*,
   JPH::CharacterVirtual::Constraint const*)#1}) */void JPH::QuickSort<JPH::CharacterVirtual::Constraint**,JPH::CharacterVirtual::SolveConstraints(JPH::Vec3, float, float, JPH::Array<JPH::CharacterVirtual::Constraint,JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint>> &, JPH::Array<JPH::CharacterVirtual::IgnoredContact,JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact>> &, float &, JPH::Vec3 &, JPH::TempAllocator &, bool)const::_lambda(JPH::CharacterVirtual::Constraint_const *, JPH::CharacterVirtual::Constraint_const *)_1_>
               (long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 9) {
    return;
  }
  while (0x100 < lVar4) {
    plVar6 = (long *)*param_1;
    plVar5 = (long *)(((lVar4 >> 3) * 4 - 4U & 0xfffffffffffffff8) + (long)param_1);
    fVar13 = *(float *)(plVar6 + 1);
    lVar4 = (long)param_2 + (-8 - (long)param_1) >> 6;
    plVar9 = param_1 + lVar4;
    plVar2 = param_1 + lVar4 * 2;
    plVar8 = (long *)*plVar9;
    fVar11 = *(float *)(plVar8 + 1);
    if (fVar11 <= 0.0) {
      if (0.0 < fVar13) goto LAB_00101211;
      bVar10 = *(float *)((long)plVar6 + 0xc) <= *(float *)((long)plVar8 + 0xc) &&
               *(float *)((long)plVar8 + 0xc) != *(float *)((long)plVar6 + 0xc);
    }
    else if (fVar11 == fVar13) {
      bVar10 = *(byte *)(*plVar6 + 0x5c) < *(byte *)(*plVar8 + 0x5c);
    }
    else {
LAB_00101211:
      bVar10 = fVar11 < fVar13;
    }
    if (bVar10) {
      *param_1 = (long)plVar8;
      *plVar9 = (long)plVar6;
      plVar6 = (long *)*param_1;
    }
    plVar8 = (long *)*plVar2;
    fVar13 = *(float *)(plVar6 + 1);
    fVar11 = *(float *)(plVar8 + 1);
    if (fVar11 <= 0.0) {
      if (fVar13 <= 0.0) {
        if (*(float *)((long)plVar8 + 0xc) < *(float *)((long)plVar6 + 0xc) ||
            *(float *)((long)plVar8 + 0xc) == *(float *)((long)plVar6 + 0xc)) goto LAB_001011ec;
LAB_00100c91:
        *param_1 = (long)plVar8;
        *plVar2 = (long)plVar6;
        plVar3 = (long *)*plVar9;
        fVar12 = *(float *)(plVar3 + 1);
        plVar8 = plVar6;
        fVar11 = fVar13;
        if (0.0 < fVar13) goto LAB_00100caf;
      }
      else {
        if (fVar11 < fVar13) goto LAB_00100c91;
LAB_001011ec:
        plVar3 = (long *)*plVar9;
        fVar12 = *(float *)(plVar3 + 1);
      }
      if (0.0 < fVar12) goto LAB_001011fd;
      bVar10 = *(float *)((long)plVar3 + 0xc) <= *(float *)((long)plVar8 + 0xc) &&
               *(float *)((long)plVar8 + 0xc) != *(float *)((long)plVar3 + 0xc);
    }
    else {
      if (!NAN(fVar11) && !NAN(fVar13)) {
        if (fVar11 == fVar13) {
          if (*(byte *)(*plVar6 + 0x5c) < *(byte *)(*plVar8 + 0x5c)) goto LAB_00100c91;
        }
        else if (fVar11 <= fVar13) goto LAB_00100c91;
      }
      plVar3 = (long *)*plVar9;
      fVar12 = *(float *)(plVar3 + 1);
LAB_00100caf:
      if (fVar11 == fVar12) {
        bVar10 = *(byte *)(*plVar3 + 0x5c) < *(byte *)(*plVar8 + 0x5c);
      }
      else {
LAB_001011fd:
        bVar10 = fVar11 < fVar12;
      }
    }
    if (bVar10) {
      *plVar9 = (long)plVar8;
      *plVar2 = (long)plVar3;
    }
    plVar6 = (long *)*plVar5;
    plVar2 = plVar5 + lVar4;
    plVar3 = plVar5 + -lVar4;
    fVar13 = *(float *)(plVar6 + 1);
    plVar8 = (long *)*plVar3;
    fVar11 = *(float *)(plVar8 + 1);
    if (fVar13 <= 0.0) {
      if (0.0 < fVar11) goto LAB_00101225;
      bVar10 = *(float *)((long)plVar8 + 0xc) <= *(float *)((long)plVar6 + 0xc) &&
               *(float *)((long)plVar6 + 0xc) != *(float *)((long)plVar8 + 0xc);
    }
    else if (fVar13 == fVar11) {
      bVar10 = *(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar6 + 0x5c);
    }
    else {
LAB_00101225:
      bVar10 = fVar13 < fVar11;
    }
    if (bVar10) {
      *plVar3 = (long)plVar6;
      *plVar5 = (long)plVar8;
      plVar8 = (long *)*plVar3;
    }
    plVar6 = (long *)*plVar2;
    fVar13 = *(float *)(plVar8 + 1);
    fVar11 = *(float *)(plVar6 + 1);
    if (fVar11 <= 0.0) {
      if (fVar13 <= 0.0) {
        if (*(float *)((long)plVar6 + 0xc) < *(float *)((long)plVar8 + 0xc) ||
            *(float *)((long)plVar6 + 0xc) == *(float *)((long)plVar8 + 0xc)) goto LAB_001011aa;
LAB_00100d5e:
        *plVar3 = (long)plVar6;
        *plVar2 = (long)plVar8;
        plVar3 = (long *)*plVar5;
        fVar12 = *(float *)(plVar3 + 1);
        plVar6 = plVar8;
        fVar11 = fVar13;
        if (0.0 < fVar13) goto LAB_00100d7b;
      }
      else {
        if (fVar11 < fVar13) goto LAB_00100d5e;
LAB_001011aa:
        plVar3 = (long *)*plVar5;
        fVar12 = *(float *)(plVar3 + 1);
      }
      if (0.0 < fVar12) goto LAB_001011bb;
      bVar10 = *(float *)((long)plVar3 + 0xc) <= *(float *)((long)plVar6 + 0xc) &&
               *(float *)((long)plVar6 + 0xc) != *(float *)((long)plVar3 + 0xc);
    }
    else {
      if (!NAN(fVar11) && !NAN(fVar13)) {
        if (fVar11 == fVar13) {
          if (*(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar6 + 0x5c)) goto LAB_00100d5e;
        }
        else if (fVar11 <= fVar13) goto LAB_00100d5e;
      }
      plVar3 = (long *)*plVar5;
      fVar12 = *(float *)(plVar3 + 1);
LAB_00100d7b:
      if (fVar11 == fVar12) {
        bVar10 = *(byte *)(*plVar3 + 0x5c) < *(byte *)(*plVar6 + 0x5c);
      }
      else {
LAB_001011bb:
        bVar10 = fVar11 < fVar12;
      }
    }
    if (bVar10) {
      *plVar5 = (long)plVar6;
      *plVar2 = (long)plVar3;
    }
    plVar2 = param_2 + (-1 - lVar4);
    plVar3 = param_2 + lVar4 * -2 + -1;
    plVar6 = (long *)*plVar2;
    plVar8 = (long *)*plVar3;
    fVar13 = *(float *)(plVar6 + 1);
    fVar11 = *(float *)(plVar8 + 1);
    if (fVar13 <= 0.0) {
      if (0.0 < fVar11) goto LAB_0010118d;
      bVar10 = *(float *)((long)plVar8 + 0xc) <= *(float *)((long)plVar6 + 0xc) &&
               *(float *)((long)plVar6 + 0xc) != *(float *)((long)plVar8 + 0xc);
    }
    else if (fVar13 == fVar11) {
      bVar10 = *(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar6 + 0x5c);
    }
    else {
LAB_0010118d:
      bVar10 = fVar13 < fVar11;
    }
    if (bVar10) {
      *plVar3 = (long)plVar6;
      *plVar2 = (long)plVar8;
      plVar8 = (long *)*plVar3;
    }
    plVar6 = (long *)param_2[-1];
    fVar13 = *(float *)(plVar8 + 1);
    fVar11 = *(float *)(plVar6 + 1);
    if (fVar11 <= 0.0) {
      if (0.0 < fVar13) {
        if (fVar11 < fVar13) goto LAB_00100e21;
LAB_00101164:
        plVar3 = (long *)*plVar2;
        fVar12 = *(float *)(plVar3 + 1);
        if (fVar12 <= 0.0) goto LAB_00101279;
        goto LAB_00101176;
      }
      if (*(float *)((long)plVar6 + 0xc) < *(float *)((long)plVar8 + 0xc) ||
          *(float *)((long)plVar6 + 0xc) == *(float *)((long)plVar8 + 0xc)) goto LAB_00101164;
LAB_00100e21:
      *plVar3 = (long)plVar6;
      param_2[-1] = (long)plVar8;
      plVar3 = (long *)*plVar2;
      fVar12 = *(float *)(plVar3 + 1);
      plVar6 = plVar8;
      fVar11 = fVar13;
      if (0.0 < fVar13) goto LAB_00100e3b;
      if (0.0 < fVar12) goto LAB_00101176;
LAB_00101279:
      bVar10 = *(float *)((long)plVar3 + 0xc) <= *(float *)((long)plVar6 + 0xc) &&
               *(float *)((long)plVar6 + 0xc) != *(float *)((long)plVar3 + 0xc);
    }
    else {
      if (!NAN(fVar11) && !NAN(fVar13)) {
        if (fVar11 == fVar13) {
          if (*(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar6 + 0x5c)) goto LAB_00100e21;
        }
        else if (fVar11 <= fVar13) goto LAB_00100e21;
      }
      plVar3 = (long *)*plVar2;
      fVar12 = *(float *)(plVar3 + 1);
LAB_00100e3b:
      if (fVar11 == fVar12) {
        bVar10 = *(byte *)(*plVar3 + 0x5c) < *(byte *)(*plVar6 + 0x5c);
      }
      else {
LAB_00101176:
        bVar10 = fVar11 < fVar12;
      }
    }
    if (bVar10) {
      *plVar2 = (long)plVar6;
      param_2[-1] = (long)plVar3;
    }
    plVar6 = (long *)*plVar5;
    plVar8 = (long *)*plVar9;
    fVar13 = *(float *)(plVar6 + 1);
    fVar11 = *(float *)(plVar8 + 1);
    if (fVar13 <= 0.0) {
      if (0.0 < fVar11) goto LAB_001011cf;
      if (*(float *)((long)plVar8 + 0xc) <= *(float *)((long)plVar6 + 0xc) &&
          *(float *)((long)plVar6 + 0xc) != *(float *)((long)plVar8 + 0xc)) goto LAB_00100ea5;
      plVar6 = (long *)*plVar2;
      fVar13 = *(float *)(plVar6 + 1);
      if (fVar13 <= 0.0) goto LAB_00101362;
LAB_00101420:
      if (fVar13 < fVar11) {
LAB_0010123e:
        *plVar9 = (long)plVar6;
        *plVar2 = (long)plVar8;
        plVar6 = plVar8;
        fVar13 = fVar11;
      }
LAB_00100ee8:
      fVar11 = fVar13;
      plVar8 = plVar6;
      plVar9 = (long *)*plVar5;
      fVar13 = *(float *)(plVar9 + 1);
      if (fVar13 == fVar11) {
        bVar10 = *(byte *)(*plVar9 + 0x5c) < *(byte *)(*plVar8 + 0x5c);
      }
      else {
LAB_0010125f:
        bVar10 = fVar11 < fVar13;
      }
    }
    else {
      if (fVar13 == fVar11) {
        bVar10 = *(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar6 + 0x5c);
      }
      else {
LAB_001011cf:
        bVar10 = fVar13 < fVar11;
      }
      if (bVar10) {
LAB_00100ea5:
        *plVar9 = (long)plVar6;
        *plVar5 = (long)plVar8;
        plVar8 = (long *)*plVar9;
        fVar11 = *(float *)(plVar8 + 1);
      }
      plVar6 = (long *)*plVar2;
      fVar13 = *(float *)(plVar6 + 1);
      if (0.0 < fVar13) {
        if (fVar13 != fVar11) goto LAB_00101420;
        if (*(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar6 + 0x5c)) goto LAB_0010123e;
        goto LAB_00100ee8;
      }
      if (fVar11 <= 0.0) {
LAB_00101362:
        if (*(float *)((long)plVar6 + 0xc) < *(float *)((long)plVar8 + 0xc) ||
            *(float *)((long)plVar6 + 0xc) == *(float *)((long)plVar8 + 0xc)) goto LAB_00101252;
        *plVar9 = (long)plVar6;
        *plVar2 = (long)plVar8;
        plVar9 = (long *)*plVar5;
      }
      else {
        if (fVar13 < fVar11) goto LAB_0010123e;
LAB_00101252:
        fVar11 = fVar13;
        plVar8 = plVar6;
        plVar9 = (long *)*plVar5;
      }
      fVar13 = *(float *)(plVar9 + 1);
      if (0.0 < fVar13) goto LAB_0010125f;
      bVar10 = *(float *)((long)plVar9 + 0xc) <= *(float *)((long)plVar8 + 0xc) &&
               *(float *)((long)plVar8 + 0xc) != *(float *)((long)plVar9 + 0xc);
    }
    if (bVar10) {
      *plVar5 = (long)plVar8;
      *plVar2 = (long)plVar9;
      plVar9 = (long *)*plVar5;
    }
    fVar13 = *(float *)(plVar9 + 1);
    plVar2 = param_2;
    plVar6 = param_1;
LAB_00100f4f:
    do {
      while( true ) {
        plVar5 = plVar6;
        plVar6 = plVar5 + 1;
        plVar8 = (long *)*plVar5;
        fVar11 = *(float *)(plVar8 + 1);
        if (0.0 < fVar11) break;
        if (0.0 < fVar13) goto LAB_00100f67;
        bVar10 = *(float *)((long)plVar9 + 0xc) <= *(float *)((long)plVar8 + 0xc) &&
                 *(float *)((long)plVar8 + 0xc) != *(float *)((long)plVar9 + 0xc);
LAB_00100f47:
        if (!bVar10) goto LAB_00100f6c;
      }
      if (fVar11 == fVar13) {
        bVar10 = *(byte *)(*plVar9 + 0x5c) < *(byte *)(*plVar8 + 0x5c);
        goto LAB_00100f47;
      }
LAB_00100f67:
    } while (fVar11 < fVar13);
LAB_00100f6c:
    do {
      plVar7 = plVar2;
      plVar3 = (long *)plVar7[-1];
      fVar11 = *(float *)(plVar3 + 1);
      plVar1 = plVar7 + -1;
      if (0.0 < fVar13) {
        while (plVar2 = plVar1, fVar13 == fVar11) {
          if (*(byte *)(*plVar9 + 0x5c) <= *(byte *)(*plVar3 + 0x5c)) goto LAB_00100fa6;
          plVar3 = (long *)plVar2[-1];
          plVar1 = plVar2 + -1;
          plVar7 = plVar2;
          fVar11 = *(float *)(plVar3 + 1);
        }
      }
      else {
        while (plVar2 = plVar1, fVar11 <= 0.0) {
          if (*(float *)((long)plVar9 + 0xc) < *(float *)((long)plVar3 + 0xc) ||
              *(float *)((long)plVar9 + 0xc) == *(float *)((long)plVar3 + 0xc)) goto LAB_00100fa6;
          plVar3 = (long *)plVar2[-1];
          plVar1 = plVar2 + -1;
          plVar7 = plVar2;
          fVar11 = *(float *)(plVar3 + 1);
        }
      }
    } while (fVar13 < fVar11);
LAB_00100fa6:
    if (plVar5 < plVar2) {
      *plVar5 = (long)plVar3;
      *plVar2 = (long)plVar8;
      goto LAB_00100f4f;
    }
    lVar4 = (long)param_2 - (long)plVar7;
    if ((long)plVar7 - (long)param_1 < lVar4) {
      QuickSort<JPH::CharacterVirtual::Constraint**,JPH::CharacterVirtual::SolveConstraints(JPH::Vec3,float,float,JPH::Array<JPH::CharacterVirtual::Constraint,JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint>>&,JPH::Array<JPH::CharacterVirtual::IgnoredContact,JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact>>&,float&,JPH::Vec3&,JPH::TempAllocator&,bool)const::_lambda(JPH::CharacterVirtual::Constraint_const*,JPH::CharacterVirtual::Constraint_const*)_1_>
                (param_1,plVar7);
    }
    else {
      QuickSort<JPH::CharacterVirtual::Constraint**,JPH::CharacterVirtual::SolveConstraints(JPH::Vec3,float,float,JPH::Array<JPH::CharacterVirtual::Constraint,JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint>>&,JPH::Array<JPH::CharacterVirtual::IgnoredContact,JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact>>&,float&,JPH::Vec3&,JPH::TempAllocator&,bool)const::_lambda(JPH::CharacterVirtual::Constraint_const*,JPH::CharacterVirtual::Constraint_const*)_1_>
                (plVar7,param_2);
      lVar4 = (long)plVar7 - (long)param_1;
      param_2 = plVar7;
      plVar7 = param_1;
    }
    param_1 = plVar7;
    if (lVar4 < 9) {
      return;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  plVar9 = param_1 + 1;
  if (plVar9 == param_2) {
    return;
  }
  lVar4 = 0;
LAB_00101102:
  plVar2 = (long *)*plVar9;
  plVar6 = (long *)*param_1;
  fVar13 = *(float *)(plVar2 + 1);
  fVar11 = *(float *)(plVar6 + 1);
  if (0.0 < fVar13) {
    if (fVar13 != fVar11) goto LAB_00101122;
    bVar10 = *(byte *)(*plVar6 + 0x5c) < *(byte *)(*plVar2 + 0x5c);
  }
  else if (fVar11 <= 0.0) {
    bVar10 = *(float *)((long)plVar6 + 0xc) <= *(float *)((long)plVar2 + 0xc) &&
             *(float *)((long)plVar2 + 0xc) != *(float *)((long)plVar6 + 0xc);
  }
  else {
LAB_00101122:
    bVar10 = fVar13 < fVar11;
  }
  plVar6 = plVar9;
  if (!bVar10) {
    do {
      plVar8 = (long *)plVar6[-1];
      fVar11 = *(float *)(plVar8 + 1);
      if (0.0 < fVar13) {
        if (fVar13 != fVar11) goto LAB_0010130d;
        bVar10 = *(byte *)(*plVar8 + 0x5c) < *(byte *)(*plVar2 + 0x5c);
      }
      else if (fVar11 <= 0.0) {
        bVar10 = *(float *)((long)plVar8 + 0xc) <= *(float *)((long)plVar2 + 0xc) &&
                 *(float *)((long)plVar2 + 0xc) != *(float *)((long)plVar8 + 0xc);
      }
      else {
LAB_0010130d:
        bVar10 = fVar13 < fVar11;
      }
      if (!bVar10) goto LAB_00101315;
      *plVar6 = (long)plVar8;
      plVar6 = plVar6 + -1;
    } while( true );
  }
  if (param_1 != plVar9) {
    memmove((void *)((long)plVar9 + lVar4),param_1,8 - lVar4);
  }
  *param_1 = (long)plVar2;
  goto LAB_001010f1;
LAB_00101315:
  *plVar6 = (long)plVar2;
LAB_001010f1:
  plVar9 = plVar9 + 1;
  lVar4 = lVar4 + -8;
  if (plVar9 == param_2) {
    return;
  }
  goto LAB_00101102;
}



/* JPH::CharacterVsCharacterCollisionSimple::CastCharacter(JPH::CharacterVirtual const*, JPH::Mat44
   const&, JPH::Vec3, JPH::ShapeCastSettings const&, JPH::Vec3,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) const */

void JPH::CharacterVsCharacterCollisionSimple::CastCharacter
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,float param_4,
               long param_1,long param_2,undefined8 *param_7,undefined8 param_8,long *param_9)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long *plVar8;
  long lVar9;
  long *extraout_RDX;
  long *plVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_268;
  undefined8 local_260;
  undefined **local_258;
  undefined4 local_250;
  undefined1 local_248 [16];
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
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8 [7];
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_208 = param_7[4];
  uStack_200 = param_7[5];
  local_218 = param_7[2];
  uStack_210 = param_7[3];
  local_298._0_4_ = (float)param_3;
  local_298._4_4_ = (float)((ulong)param_3 >> 0x20);
  fVar11 = 0.0 - (float)local_298;
  fVar13 = 0.0 - local_298._4_4_;
  local_228 = *param_7;
  uStack_220 = param_7[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1f8 = CONCAT44(fVar13 + *(float *)((long)param_7 + 0x34),fVar11 + *(float *)(param_7 + 6));
  local_d8 = (float)local_228;
  fStack_d4 = (float)((ulong)local_228 >> 0x20);
  fStack_d0 = (float)uStack_220;
  uStack_cc = (undefined4)((ulong)uStack_220 >> 0x20);
  uStack_a0 = CONCAT44(0x3f800000,(0.0 - param_4) + *(float *)(param_7 + 7));
  plVar2 = *(long **)(param_2 + 0x18);
  uStack_1f0 = uStack_a0;
  local_c8 = local_218;
  uStack_c0 = uStack_210;
  local_b8 = local_208;
  uStack_b0 = uStack_200;
  local_a8 = local_1f8;
  (**(code **)(*plVar2 + 0x30))(0x3f8000003f800000,&local_d8,plVar2,&local_228);
  plVar10 = *(long **)(param_1 + 0x18);
  plVar1 = plVar10 + *(long *)(param_1 + 8);
  local_f8._4_4_ = fStack_d4;
  local_f8._0_4_ = local_d8;
  local_f8._8_4_ = fStack_d0;
  local_f8._12_4_ = uStack_cc;
  plVar8 = extraout_RDX;
  uStack_100 = param_2_00;
  local_108 = param_1_00;
  local_148 = local_228;
  uStack_140 = uStack_220;
  local_138 = local_218;
  uStack_130 = uStack_210;
  local_128 = local_208;
  uStack_120 = uStack_200;
  local_118 = local_1f8;
  uStack_110 = uStack_1f0;
  local_e8 = local_c8;
  uStack_e0 = uStack_c0;
  for (; plVar1 != plVar10; plVar10 = plVar10 + 1) {
    while ((lVar3 = *plVar10, param_2 == lVar3 || (*(float *)(param_9 + 1) <= _LC5))) {
      plVar10 = plVar10 + 1;
      if (plVar1 == plVar10) goto LAB_00101920;
    }
    (**(code **)(*param_9 + 0x20))(param_9,lVar3,plVar8);
    CharacterVirtual::GetCenterOfMassTransform
              (*(undefined8 *)(lVar3 + 0xf0),*(undefined8 *)(lVar3 + 0xf8),
               *(undefined8 *)(lVar3 + 0x100),*(undefined8 *)(lVar3 + 0x108),local_1a8,lVar3,
               *(undefined8 *)(lVar3 + 0x18));
    fVar12 = fVar11 + local_178;
    fVar14 = fVar13 + fStack_174;
    local_1b8 = CONCAT44(fVar14,fVar12);
    fVar15 = (0.0 - param_4) + fStack_170;
    lVar3 = *(long *)(lVar3 + 0x18);
    local_250 = 0xffffffff;
    local_260 = _LC6;
    local_268 = _LC6;
    uStack_a0 = CONCAT44(0x3f800000,fVar15);
    local_d8 = local_1a8[0];
    fStack_d4 = local_1a8[1];
    fStack_d0 = local_1a8[2];
    uStack_cc = local_1a8[3];
    local_1e8 = local_1a8[0];
    fStack_1e4 = local_1a8[1];
    fStack_1e0 = local_1a8[2];
    uStack_1dc = local_1a8[3];
    local_1d8 = local_1a8[4];
    fStack_1d4 = local_1a8[5];
    fStack_1d0 = local_1a8[6];
    uStack_1cc = uStack_18c;
    local_1c8 = local_188;
    fStack_1c4 = fStack_184;
    fStack_1c0 = fStack_180;
    uStack_1bc = uStack_17c;
    local_258 = &PTR__ShapeFilter_0010c8b8;
    uStack_1b0 = uStack_a0;
    lVar9 = 0;
    do {
      fVar4 = *(float *)((long)&local_148 + lVar9);
      fVar5 = *(float *)((long)&local_148 + lVar9 + 4);
      fVar6 = *(float *)((long)&uStack_140 + lVar9);
      fVar7 = *(float *)((long)&uStack_140 + lVar9 + 4);
      *(float *)((long)local_1a8 + lVar9) =
           fVar7 * (0.0 - (fVar12 * local_1a8[0] + fVar14 * local_1a8[1] + fVar15 * local_1a8[2])) +
           fVar4 * local_1a8[0] + fVar5 * local_1a8[1] + fVar6 * local_1a8[2];
      *(float *)((long)local_1a8 + lVar9 + 4) =
           fVar7 * (0.0 - (fVar12 * local_1a8[4] + fVar14 * local_1a8[5] + fVar15 * local_1a8[6])) +
           fVar4 * local_1a8[4] + fVar5 * local_1a8[5] + fVar6 * local_1a8[6];
      *(float *)((long)local_1a8 + lVar9 + 8) =
           fVar7 * (0.0 - (fVar12 * local_188 + fVar14 * fStack_184 + fVar15 * fStack_180)) +
           fVar4 * local_188 + fVar5 * fStack_184 + fVar6 * fStack_180;
      *(float *)((long)local_1a8 + lVar9 + 0xc) =
           fVar7 * 1.0 + fVar4 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x40);
    local_298 = CONCAT44((float)local_108 * local_1a8[4] + local_108._4_4_ * local_1a8[5] +
                         (float)uStack_100 * local_1a8[6],
                         (float)local_108 * local_1a8[0] + local_108._4_4_ * local_1a8[1] +
                         (float)uStack_100 * local_1a8[2]);
    uStack_290 = CONCAT44((float)local_108 * 0.0 + local_108._4_4_ * 0.0 + (float)uStack_100 * 0.0,
                          (float)local_108 * local_188 + local_108._4_4_ * fStack_184 +
                          (float)uStack_100 * fStack_180);
    local_a8 = local_1b8;
    (**(code **)(*plVar2 + 0x30))(0x3f8000003f800000,local_248,plVar2,local_1a8);
    local_d8 = SUB84(plVar2,0);
    fStack_d4 = (float)((ulong)plVar2 >> 0x20);
    local_b8 = CONCAT44(local_1a8[1],local_1a8[0]);
    uStack_b0 = CONCAT44(local_1a8[3],local_1a8[2]);
    local_a8 = CONCAT44(local_1a8[5],local_1a8[4]);
    uStack_a0 = CONCAT44(uStack_18c,local_1a8[6]);
    local_78 = local_298;
    uStack_70 = uStack_290;
    local_c8 = CONCAT44(_LC3,_LC3);
    uStack_c0 = CONCAT44(_LC3,_LC3);
    local_68 = local_248;
    local_58 = local_238;
    uStack_50 = uStack_230;
    (*(code *)(&CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(lVar3 + 0x19) + (ulong)*(byte *)((long)plVar2 + 0x19) * 0x22])
              (0x3f8000003f800000,&local_d8,param_8,lVar3,&local_258,&local_1e8,&local_268,
               &local_260);
    plVar8 = param_9;
  }
LAB_00101920:
  (**(code **)(*param_9 + 0x20))(param_9,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVsCharacterCollisionSimple::CollideCharacter(JPH::CharacterVirtual const*,
   JPH::Mat44 const&, JPH::CollideShapeSettings const&, JPH::Vec3,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&)
   const */

void JPH::CharacterVsCharacterCollisionSimple::CollideCharacter
               (undefined8 param_1_00,float param_2_00,long param_1,long param_2,undefined8 *param_3
               ,undefined8 *param_6,long *param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  float local_1c8;
  float fStack_1c4;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  uVar4 = _LC6;
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_138 = param_3[2];
  uStack_130 = param_3[3];
  local_128 = param_3[4];
  uStack_120 = param_3[5];
  local_1c8 = (float)param_1_00;
  fStack_1c4 = (float)((ulong)param_1_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_4c = 0x3f800000;
  local_118 = CONCAT44(*(float *)((long)param_3 + 0x34) + (0.0 - fStack_1c4),
                       *(float *)(param_3 + 6) + (0.0 - local_1c8));
  fStack_50 = *(float *)(param_3 + 7) + (0.0 - param_2_00);
  plVar5 = *(long **)(param_1 + 0x18);
  uStack_110 = CONCAT44(0x3f800000,fStack_50);
  local_168 = param_6[2];
  uStack_160 = param_6[3];
  plVar1 = plVar5 + *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  local_178 = *param_6;
  uStack_170 = param_6[1];
  local_158 = param_6[4];
  uStack_150 = param_6[5];
  local_58 = local_118;
  local_88 = local_148;
  uStack_80 = uStack_140;
  local_78 = local_138;
  uStack_70 = uStack_130;
  local_68 = local_128;
  uStack_60 = uStack_120;
  for (; plVar1 != plVar5; plVar5 = plVar5 + 1) {
    while ((lVar3 = *plVar5, param_2 == lVar3 || (*(float *)(param_7 + 1) <= _LC5))) {
      plVar5 = plVar5 + 1;
      if (plVar1 == plVar5) goto LAB_00101c30;
    }
    (**(code **)(*param_7 + 0x20))(param_7,lVar3);
    CharacterVirtual::GetCenterOfMassTransform
              (*(undefined8 *)(lVar3 + 0xf0),*(undefined8 *)(lVar3 + 0xf8),
               *(undefined8 *)(lVar3 + 0x100),*(undefined8 *)(lVar3 + 0x108),&local_c8,lVar3,
               *(undefined8 *)(lVar3 + 0x18));
    uStack_4c = 0x3f800000;
    local_d8 = CONCAT44((0.0 - fStack_1c4) + fStack_94,(0.0 - local_1c8) + local_98);
    fStack_50 = (0.0 - param_2_00) + fStack_90;
    local_180 = 0xffffffff;
    local_188 = &PTR__ShapeFilter_0010c8b8;
    local_190 = uVar4;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    uStack_d0 = CONCAT44(0x3f800000,fStack_50);
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    local_f8 = local_b8;
    uStack_f0 = uStack_b0;
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    local_158 = CONCAT44(local_158._4_4_,*(float *)(param_6 + 4) + *(float *)(lVar3 + 0xb8));
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_108 = local_c8;
    uStack_100 = uStack_c0;
    local_198 = uVar4;
    local_58 = local_d8;
    (*(code *)(&CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(*(long *)(lVar3 + 0x18) + 0x19) +
               (ulong)*(byte *)(lVar2 + 0x19) * 0x22])
              (0x3f8000003f800000,0x3f8000003f800000,0x3f8000003f800000,0x3f8000003f800000,lVar2,
               *(long *)(lVar3 + 0x18),&local_148,&local_108,&local_198,&local_190,&local_178,
               param_7,&local_188);
  }
LAB_00101c30:
  (**(code **)(*param_7 + 0x20))(param_7,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVsCharacterCollisionSimple::Remove(JPH::CharacterVirtual const*) */

void __thiscall
JPH::CharacterVsCharacterCollisionSimple::Remove
          (CharacterVsCharacterCollisionSimple *this,CharacterVirtual *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *__dest;
  
  uVar1 = *(ulong *)(this + 8);
  plVar2 = *(long **)(this + 0x18);
  lVar3 = uVar1 * 8;
  __dest = plVar2;
  if (0 < lVar3 >> 5) {
    do {
      if ((CharacterVirtual *)*__dest == param_1) goto LAB_00101cd4;
      if ((CharacterVirtual *)__dest[1] == param_1) {
        __dest = __dest + 1;
        goto LAB_00101cd4;
      }
      if ((CharacterVirtual *)__dest[2] == param_1) {
        __dest = __dest + 2;
        goto LAB_00101cd4;
      }
      if ((CharacterVirtual *)__dest[3] == param_1) {
        __dest = __dest + 3;
        goto LAB_00101cd4;
      }
      __dest = __dest + 4;
    } while (plVar2 + (lVar3 >> 5) * 4 != __dest);
    lVar3 = (long)(plVar2 + uVar1) - (long)__dest;
  }
  lVar3 = lVar3 >> 3;
  if (lVar3 == 2) {
LAB_00101d84:
    if (param_1 == (CharacterVirtual *)*__dest) goto LAB_00101cd4;
    __dest = __dest + 1;
  }
  else {
    if (lVar3 == 3) {
      if (param_1 == (CharacterVirtual *)*__dest) goto LAB_00101cd4;
      __dest = __dest + 1;
      goto LAB_00101d84;
    }
    if (lVar3 != 1) {
      return;
    }
  }
  if (param_1 != (CharacterVirtual *)*__dest) {
    return;
  }
LAB_00101cd4:
  if (plVar2 + uVar1 != __dest) {
    lVar3 = (long)__dest - (long)plVar2 >> 3;
    if (lVar3 + 1U < uVar1) {
      memmove(__dest,(void *)((long)plVar2 + ((long)__dest - (long)plVar2) + 8),
              ((uVar1 - 1) - lVar3) * 8);
      *(long *)(this + 8) = *(long *)(this + 8) + -1;
    }
    else {
      *(ulong *)(this + 8) = uVar1 - 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::CharacterVirtual(JPH::CharacterVirtualSettings const*, JPH::Vec3,
   JPH::Quat, unsigned long, JPH::PhysicsSystem*) */

void __thiscall
JPH::CharacterVirtual::CharacterVirtual
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          CharacterVirtual *this,CharacterBaseSettings *param_1,undefined8 param_7,
          PhysicsSystem *param_8)

{
  CharacterBaseSettings CVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  undefined4 uVar10;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined2 local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long *local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CharacterBase::CharacterBase((CharacterBase *)this,param_1,param_8);
  CVar1 = param_1[0x60];
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined ***)this = &PTR__CharacterVirtual_0010c948;
  *(CharacterBaseSettings *)(this + 0xa0) = CVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = *(undefined4 *)(param_1 + 100);
  uVar10 = 0;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined8 *)(this + 0xc0) = uVar4;
  CVar1 = param_1[0x34];
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0xf8) = param_2;
  *(CharacterBaseSettings *)(this + 200) = CVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x108) = param_4;
  *(undefined8 *)(this + 0xa8) = uVar5;
  *(undefined8 *)(this + 0xb8) = uVar3;
  *(undefined8 *)(this + 0xf0) = param_1_00;
  *(undefined8 *)(this + 0x100) = param_3;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x138) = 0x3c888889;
  this[0x13c] = (CharacterVirtual)0x0;
  *(undefined8 *)(this + 0x140) = param_7;
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0xa4) = uVar9;
  *(undefined8 *)(this + 0xe0) = uVar7;
  *(undefined8 *)(this + 0xe8) = uVar8;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xcc) = uVar4;
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar6 != (long *)0x0) {
    uVar2 = *(undefined2 *)(param_1 + 0x90);
    local_148 = GetInnerBodyPosition(this);
    local_138 = *(undefined8 *)(this + 0x100);
    uStack_130 = *(undefined8 *)(this + 0x108);
    local_e8 = 0x10000003f01;
    local_dc = __LC16;
    uStack_d4 = __LC64;
    local_f8 = (long *)0x0;
    local_f0 = 0xffffffffffffffff;
    local_cc = _LC17;
    local_c0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_58 = (long *)0x0;
    local_140 = CONCAT44(uVar10,uVar9);
    local_128 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_c4 = _LC3;
    local_b4 = _LC3;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_e0 = 0;
    local_108 = param_7;
    local_100 = uVar2;
    local_50 = plVar6;
    uVar9 = JPH::BodyInterface::CreateAndAddBody(param_8 + 0x158,&local_148,0);
    *(undefined4 *)(this + 0x148) = uVar9;
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*local_50 + 8))();
      }
    }
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*local_58 + 0x18))();
      }
    }
    if (local_f8 != (long *)0x0) {
      LOCK();
      plVar6 = local_f8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*local_f8 + 0x18))();
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::CharacterVirtual::UpdateInnerBodyTransform() */

void JPH::CharacterVirtual::UpdateInnerBodyTransform(void)

{
  long lVar1;
  CharacterVirtual *in_RDI;
  undefined8 uVar2;
  undefined8 in_XMM1_Qa;
  
  if (*(int *)(in_RDI + 0x148) == -1) {
    return;
  }
  lVar1 = *(long *)(in_RDI + 0x10);
  uVar2 = GetInnerBodyPosition(in_RDI);
  JPH::BodyInterface::SetPositionAndRotation
            (uVar2,in_XMM1_Qa,*(undefined8 *)(in_RDI + 0x100),*(undefined8 *)(in_RDI + 0x108),
             lVar1 + 0x158,in_RDI + 0x148,1);
  return;
}



/* JPH::CharacterVirtual::GetAdjustedBodyVelocity(JPH::Body const&, JPH::Vec3&, JPH::Vec3&) const */

void __thiscall
JPH::CharacterVirtual::GetAdjustedBodyVelocity
          (CharacterVirtual *this,Body *param_1,Vec3 *param_2,Vec3 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1[0x78] == (Body)0x0) {
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    uVar3 = puVar1[1];
    *(undefined8 *)param_2 = *puVar1;
    *(undefined8 *)(param_2 + 8) = uVar3;
    uVar3 = puVar1[3];
    *(undefined8 *)param_3 = puVar1[2];
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  plVar2 = *(long **)(this + 0x90);
  if ((plVar2 != (long *)0x0) &&
     (*(code **)(*plVar2 + 0x10) != CharacterContactListener::OnAdjustBodyVelocity)) {
                    /* WARNING: Could not recover jumptable at 0x00102169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,this,param_1,param_2);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::ContactCollector::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JPH::CharacterVirtual::ContactCollector::AddHit(ContactCollector *this,CollideShapeResult *param_1)

{
  float *pfVar1;
  uint uVar2;
  Body *pBVar3;
  CharacterVirtual *this_00;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  void *pvVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  byte bVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  long local_40;
  
  fVar29 = __LC20;
  bVar28 = 0;
  puVar22 = *(undefined8 **)(this + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = puVar22[1];
  if (*(uint *)(this + 0x60) == uVar12) {
    fVar32 = *(float *)(this + 100);
    this[0x68] = (ContactCollector)0x1;
    if (fVar29 < fVar32) {
      iVar25 = (int)uVar12;
      if (-1 < iVar25 + -1) {
        lVar13 = puVar22[3];
        iVar23 = iVar25 + -2;
        if (iVar25 != 1) {
          lVar11 = (long)iVar23;
          uVar19 = uVar12;
          puVar20 = (undefined8 *)((long)(iVar25 + -1) * 0x80 + lVar13);
          puVar26 = (undefined8 *)(lVar11 * 0x80 + lVar13);
          do {
            puVar24 = puVar26 + -0x10;
            puVar15 = puVar26;
            uVar18 = uVar19;
            do {
              while (((*(int *)(puVar15 + 9) == *(int *)(puVar20 + 9) &&
                      (puVar20[10] == puVar15[10])) &&
                     (fVar32 < (float)((ulong)puVar15[4] >> 0x20) * *(float *)((long)puVar20 + 0x24)
                               + (float)puVar15[4] * *(float *)(puVar20 + 4) + 0.0 +
                               *(float *)(puVar20 + 5) * *(float *)(puVar15 + 5)))) {
                iVar25 = (int)uVar18 + -1;
                uVar19 = uVar18 - 1;
                if (*(float *)(puVar15 + 8) <= *(float *)(puVar20 + 8) &&
                    *(float *)(puVar20 + 8) != *(float *)(puVar15 + 8)) {
                  if (iVar25 != iVar23 + 1) {
                    lVar11 = uVar18 * 0x80 + lVar13;
                    uVar14 = *(undefined8 *)(lVar11 + -0x78);
                    *puVar20 = *(undefined8 *)(lVar11 + -0x80);
                    puVar20[1] = uVar14;
                    uVar14 = *(undefined8 *)(lVar11 + -0x68);
                    puVar20[2] = *(undefined8 *)(lVar11 + -0x70);
                    puVar20[3] = uVar14;
                    uVar14 = *(undefined8 *)(lVar11 + -0x58);
                    puVar20[4] = *(undefined8 *)(lVar11 + -0x60);
                    puVar20[5] = uVar14;
                    uVar14 = *(undefined8 *)(lVar11 + -0x48);
                    puVar20[6] = *(undefined8 *)(lVar11 + -0x50);
                    puVar20[7] = uVar14;
                    uVar14 = *(undefined8 *)(lVar11 + -0x38);
                    puVar20[8] = *(undefined8 *)(lVar11 + -0x40);
                    puVar20[9] = uVar14;
                    uVar14 = *(undefined8 *)(lVar11 + -0x28);
                    puVar20[10] = *(undefined8 *)(lVar11 + -0x30);
                    puVar20[0xb] = uVar14;
                    uVar14 = *(undefined8 *)(lVar11 + -0x18);
                    puVar20[0xc] = *(undefined8 *)(lVar11 + -0x20);
                    puVar20[0xd] = uVar14;
                    *(undefined4 *)((long)puVar20 + 0x6f) = *(undefined4 *)(lVar11 + -0x11);
                  }
                  puVar22[1] = uVar19;
                  goto LAB_00102770;
                }
                lVar17 = uVar18 * 0x80 + lVar13;
                uVar14 = *(undefined8 *)(lVar17 + -0x78);
                *puVar15 = *(undefined8 *)(lVar17 + -0x80);
                puVar15[1] = uVar14;
                uVar14 = *(undefined8 *)(lVar17 + -0x68);
                puVar15[2] = *(undefined8 *)(lVar17 + -0x70);
                puVar15[3] = uVar14;
                uVar14 = *(undefined8 *)(lVar17 + -0x58);
                puVar15[4] = *(undefined8 *)(lVar17 + -0x60);
                puVar15[5] = uVar14;
                uVar14 = *(undefined8 *)(lVar17 + -0x48);
                puVar15[6] = *(undefined8 *)(lVar17 + -0x50);
                puVar15[7] = uVar14;
                uVar14 = *(undefined8 *)(lVar17 + -0x38);
                puVar15[8] = *(undefined8 *)(lVar17 + -0x40);
                puVar15[9] = uVar14;
                uVar14 = *(undefined8 *)(lVar17 + -0x28);
                puVar15[10] = *(undefined8 *)(lVar17 + -0x30);
                puVar15[0xb] = uVar14;
                uVar14 = *(undefined8 *)(lVar17 + -0x18);
                puVar15[0xc] = *(undefined8 *)(lVar17 + -0x20);
                puVar15[0xd] = uVar14;
                *(undefined4 *)((long)puVar15 + 0x6f) = *(undefined4 *)(lVar17 + -0x11);
                puVar22[1] = uVar19;
                if ((iVar25 == iVar23 + 1) ||
                   (puVar15 = puVar15 + -0x10, uVar18 = uVar19, puVar24 + lVar11 * -0x10 == puVar15)
                   ) goto LAB_00102770;
              }
              puVar15 = puVar15 + -0x10;
              uVar19 = uVar18;
            } while (puVar24 + lVar11 * -0x10 != puVar15);
LAB_00102770:
            bVar27 = iVar23 == 0;
            iVar23 = iVar23 + -1;
            if (bVar27) goto LAB_0010287a;
            lVar11 = (long)iVar23;
            puVar20 = puVar26;
            puVar26 = puVar24;
          } while( true );
        }
      }
    }
    goto LAB_00102888;
  }
LAB_001021ad:
  if (*(int *)(param_1 + 0x3c) == -1) {
    lVar13 = puVar22[1];
    uVar12 = lVar13 + 1;
    if ((ulong)puVar22[2] < uVar12) {
      uVar19 = puVar22[2] * 2;
      if (uVar12 <= uVar19) {
        uVar12 = uVar19;
      }
      pvVar16 = (void *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,(int)uVar12 << 7);
      if ((void *)puVar22[3] != (void *)0x0) {
        memmove(pvVar16,(void *)puVar22[3],puVar22[1] << 7);
        (**(code **)(*(long *)*puVar22 + 0x18))
                  ((long *)*puVar22,puVar22[3],*(int *)(puVar22 + 2) << 7);
      }
      puVar20 = *(undefined8 **)(this + 0x58);
      lVar13 = puVar22[1];
      puVar22[3] = pvVar16;
      puVar22[2] = uVar12;
      pvVar21 = (void *)puVar20[3];
      uVar12 = lVar13 + 1;
    }
    else {
      pvVar21 = (void *)puVar22[3];
      puVar20 = puVar22;
      pvVar16 = pvVar21;
    }
    puVar22[1] = uVar12;
    fVar29 = _LC21;
    puVar26 = (undefined8 *)((long)pvVar16 + lVar13 * 0x80);
    lVar13 = *(long *)(this + 0x50);
    puVar22 = puVar26;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + (ulong)bVar28 * -2 + 1;
    }
    lVar11 = puVar20[1];
    *(undefined4 *)(puVar26 + 9) = 0xffffffff;
    *(undefined4 *)(puVar26 + 0xb) = 0xffffffff;
    uVar14 = *(undefined8 *)(lVar13 + 0x110);
    uVar9 = *(undefined8 *)(lVar13 + 0x118);
    *(undefined1 *)((long)puVar26 + 0x72) = 1;
    fVar32 = *(float *)(param_1 + 0x10);
    fVar34 = *(float *)(param_1 + 0x14);
    fVar33 = *(float *)(param_1 + 0x18);
    fVar31 = *(float *)(param_1 + 0x1c);
    fVar35 = *(float *)(this + 0x20);
    fVar6 = *(float *)(this + 0x24);
    fVar7 = *(float *)(this + 0x28);
    fVar8 = *(float *)(this + 0x2c);
    pfVar1 = (float *)((long)pvVar21 + lVar11 * 0x80 + -0x80);
    *(undefined8 *)(pfVar1 + 4) = uVar14;
    *(undefined8 *)(pfVar1 + 6) = uVar9;
    *pfVar1 = fVar32 + fVar35;
    pfVar1[1] = fVar34 + fVar6;
    pfVar1[2] = fVar33 + fVar7;
    pfVar1[3] = fVar31 + fVar8;
    fVar32 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
             *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) + 0.0 +
             *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
    fVar34 = 0.0;
    fVar33 = 0.0;
    fVar31 = 0.0;
    fVar35 = 0.0;
    if (fVar29 < fVar32) {
      auVar30._0_4_ = SQRT(fVar32);
      auVar30._4_4_ = auVar30._0_4_;
      auVar30._8_4_ = auVar30._0_4_;
      auVar30._12_4_ = auVar30._0_4_;
      auVar36 = divps(*(undefined1 (*) [16])(param_1 + 0x20),auVar30);
      fVar34 = 0.0 - auVar36._0_4_;
      fVar33 = 0.0 - auVar36._4_4_;
      fVar31 = 0.0 - auVar36._8_4_;
      fVar35 = 0.0 - auVar36._12_4_;
    }
    fVar29 = *(float *)(param_1 + 0x38);
    pfVar1[8] = fVar34;
    pfVar1[9] = fVar33;
    pfVar1[10] = fVar31;
    pfVar1[0xb] = fVar35;
    pfVar1[0xc] = fVar34;
    pfVar1[0xd] = fVar33;
    pfVar1[0xe] = fVar31;
    pfVar1[0xf] = fVar35;
    fVar32 = (float)(*(uint *)(param_1 + 0x30) ^ _LC8);
    pfVar1[0x16] = fVar29;
    *(long *)(pfVar1 + 0x14) = lVar13;
    *(undefined2 *)(pfVar1 + 0x17) = 1;
    uVar14 = *(undefined8 *)(lVar13 + 0x140);
    pfVar1[0x11] = 0.0;
    *(undefined8 *)(pfVar1 + 0x18) = uVar14;
    uVar14 = PhysicsMaterial::sDefault;
    pfVar1[0x10] = fVar32;
    *(undefined8 *)(pfVar1 + 0x1a) = uVar14;
  }
  else {
    lVar13 = *(long *)(this + 0x40);
    lVar11 = (**(code **)(*(long *)(lVar13 + 0x130) + 0x10))(lVar13 + 0x130,param_1 + 0x3c);
    uVar12 = (ulong)(*(uint *)(param_1 + 0x3c) & 0x7fffff);
    if (((uVar12 < **(ulong **)(lVar13 + 0x138)) &&
        (pBVar3 = *(Body **)((*(ulong **)(lVar13 + 0x138))[2] + uVar12 * 8),
        ((ulong)pBVar3 & 1) == 0)) &&
       ((*(uint *)(param_1 + 0x3c) == *(uint *)(pBVar3 + 0x70) && (((byte)pBVar3[0x79] & 4) != 0))))
    {
      puVar22 = *(undefined8 **)(this + 0x58);
      lVar17 = puVar22[1];
      uVar12 = lVar17 + 1;
      if ((ulong)puVar22[2] < uVar12) {
        uVar19 = puVar22[2] * 2;
        if (uVar12 <= uVar19) {
          uVar12 = uVar19;
        }
        pvVar16 = (void *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,(int)uVar12 << 7)
        ;
        if ((void *)puVar22[3] != (void *)0x0) {
          memmove(pvVar16,(void *)puVar22[3],puVar22[1] << 7);
          (**(code **)(*(long *)*puVar22 + 0x18))
                    ((long *)*puVar22,puVar22[3],*(int *)(puVar22 + 2) << 7);
        }
        puVar20 = *(undefined8 **)(this + 0x58);
        lVar17 = puVar22[1];
        puVar22[3] = pvVar16;
        puVar22[2] = uVar12;
        pvVar21 = (void *)puVar20[3];
        uVar12 = lVar17 + 1;
      }
      else {
        pvVar16 = (void *)puVar22[3];
        puVar20 = puVar22;
        pvVar21 = pvVar16;
      }
      puVar22[1] = uVar12;
      uVar9 = *(undefined8 *)(this + 0x20);
      uVar10 = *(undefined8 *)(this + 0x28);
      puVar22 = (undefined8 *)((long)pvVar16 + lVar17 * 0x80);
      uVar14 = *(undefined8 *)(this + 0x30);
      puVar26 = puVar22;
      for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar26 = 0;
        puVar26 = puVar26 + (ulong)bVar28 * -2 + 1;
      }
      lVar17 = puVar20[1];
      *(undefined1 *)((long)puVar22 + 0x72) = 1;
      *(undefined4 *)(puVar22 + 9) = 0xffffffff;
      this_00 = *(CharacterVirtual **)(this + 0x48);
      *(undefined4 *)(puVar22 + 0xb) = 0xffffffff;
      pfVar1 = (float *)((long)pvVar21 + lVar17 * 0x80 + -0x80);
      uVar4 = *(undefined8 *)(this + 0x38);
      GetAdjustedBodyVelocity(this_00,pBVar3,(Vec3 *)&local_68,(Vec3 *)&local_58);
      local_88 = (float)uVar9;
      fStack_84 = (float)((ulong)uVar9 >> 0x20);
      fStack_80 = (float)uVar10;
      fStack_7c = (float)((ulong)uVar10 >> 0x20);
      fVar29 = *(float *)(param_1 + 0x10);
      fVar32 = *(float *)(param_1 + 0x14);
      fVar34 = *(float *)(param_1 + 0x18);
      fVar33 = *(float *)(param_1 + 0x1c);
      *pfVar1 = local_88 + fVar29;
      pfVar1[1] = fStack_84 + fVar32;
      pfVar1[2] = fStack_80 + fVar34;
      pfVar1[3] = fStack_7c + fVar33;
      fVar33 = _LC21;
      fVar31 = (local_88 + fVar29) - *(float *)pBVar3;
      fVar32 = (fStack_84 + fVar32) - *(float *)(pBVar3 + 4);
      fVar34 = (fStack_80 + fVar34) - *(float *)(pBVar3 + 8);
      fVar29 = fVar32 * local_58 - fStack_54 * fVar31;
      pfVar1[4] = (fVar34 * fStack_54 - fStack_50 * fVar32) + local_68;
      pfVar1[5] = (fVar31 * fStack_50 - local_58 * fVar34) + fStack_64;
      pfVar1[6] = fVar29 + fStack_60;
      pfVar1[7] = fVar29 + fStack_5c;
      fVar29 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
               *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) + 0.0 +
               *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
      fVar32 = 0.0;
      fVar34 = 0.0;
      fVar31 = 0.0;
      fVar35 = 0.0;
      if (fVar33 < fVar29) {
        auVar36._0_4_ = SQRT(fVar29);
        auVar36._4_4_ = auVar36._0_4_;
        auVar36._8_4_ = auVar36._0_4_;
        auVar36._12_4_ = auVar36._0_4_;
        auVar36 = divps(*(undefined1 (*) [16])(param_1 + 0x20),auVar36);
        fVar32 = 0.0 - auVar36._0_4_;
        fVar34 = 0.0 - auVar36._4_4_;
        fVar31 = 0.0 - auVar36._8_4_;
        fVar35 = 0.0 - auVar36._12_4_;
      }
      pfVar1[8] = fVar32;
      pfVar1[9] = fVar34;
      pfVar1[10] = fVar31;
      pfVar1[0xb] = fVar35;
      auVar36 = TransformedShape::GetWorldSpaceSurfaceNormal
                          (*(undefined8 *)pfVar1,*(undefined8 *)(pfVar1 + 2),
                           *(undefined8 *)(this + 0x10),*(undefined4 *)(param_1 + 0x38));
      *(undefined1 (*) [16])(pfVar1 + 0xc) = auVar36;
      if (auVar36._4_4_ * pfVar1[9] + auVar36._0_4_ * pfVar1[8] + 0.0 + auVar36._8_4_ * pfVar1[10] <
          0.0) {
        pfVar1[0xc] = 0.0 - pfVar1[0xc];
        pfVar1[0xd] = 0.0 - pfVar1[0xd];
        pfVar1[0xe] = 0.0 - pfVar1[0xe];
        pfVar1[0xf] = 0.0 - pfVar1[0xf];
      }
      fVar29 = (float)uVar14;
      local_98 = (float)uVar4;
      fVar32 = (float)((ulong)uVar14 >> 0x20);
      if (local_98 * pfVar1[0xe] + fVar32 * pfVar1[0xd] + fVar29 * pfVar1[0xc] + 0.0 <
          pfVar1[10] * local_98 + pfVar1[9] * fVar32 + pfVar1[8] * fVar29 + 0.0) {
        *(undefined8 *)(pfVar1 + 0xc) = *(undefined8 *)(pfVar1 + 8);
        *(undefined8 *)(pfVar1 + 0xe) = *(undefined8 *)(pfVar1 + 10);
      }
      fVar32 = (float)(*(uint *)(param_1 + 0x30) ^ _LC8);
      pfVar1[0x12] = *(float *)(param_1 + 0x3c);
      fVar29 = *(float *)(param_1 + 0x38);
      pfVar1[0x10] = fVar32;
      pfVar1[0x16] = fVar29;
      *(Body *)(pfVar1 + 0x17) = pBVar3[0x78];
      uVar2 = *(uint *)(param_1 + 0x38);
      *(byte *)((long)pfVar1 + 0x5d) = (byte)pBVar3[0x79] & 1;
      *(undefined8 *)(pfVar1 + 0x18) = *(undefined8 *)(pBVar3 + 0x50);
      plVar5 = *(long **)(*(long *)(this + 0x10) + 0x20);
      bVar28 = (byte)*(undefined4 *)(*(long *)(this + 0x10) + 0x3c);
      local_6c = (uint)(0xffffffffL << (0x20 - bVar28 & 0x3f)) | uVar2 >> (bVar28 & 0x3f);
      uVar14 = (**(code **)(*plVar5 + 0x50))(plVar5,&local_6c);
      pfVar1[0x11] = 0.0;
      *(undefined8 *)(pfVar1 + 0x1a) = uVar14;
    }
    if (lVar11 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar13 + 0x130) + 0x18))(lVar13 + 0x130,lVar11);
        return;
      }
      goto LAB_00102927;
    }
  }
  goto LAB_0010234a;
LAB_0010287a:
  if (uVar12 != uVar19) goto LAB_001021ad;
LAB_00102888:
  *(undefined4 *)(this + 8) = 0xff7fffff;
LAB_0010234a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102927:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::CalculateCharacterGroundVelocity(JPH::Vec3, JPH::Vec3, JPH::Vec3, float)
   const */

undefined1  [16]
JPH::CharacterVirtual::CalculateCharacterGroundVelocity
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,float param_7,long param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  float fVar6;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
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
  uint uVar27;
  uint uVar28;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar6 = (float)param_6;
  fVar3 = (float)((ulong)param_5 >> 0x20);
  fVar3 = fVar6 * fVar6 + (float)param_5 * (float)param_5 + 0.0 + fVar3 * fVar3;
  fStack_30 = (float)param_4;
  fStack_2c = (float)((ulong)param_4 >> 0x20);
  if (fVar3 < _LC22) {
    auVar1._8_4_ = fStack_30;
    auVar1._0_8_ = param_3;
    auVar1._12_4_ = fStack_2c;
    return auVar1;
  }
  auVar4._0_4_ = SQRT(fVar3);
  auVar12._4_4_ = param_7;
  auVar12._0_4_ = param_7;
  auVar12._8_4_ = param_7;
  auVar12._12_4_ = param_7;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar4._0_4_;
  auVar4._12_4_ = auVar4._0_4_;
  fVar11 = param_7 * auVar4._0_4_ * _LC23;
  fVar17 = (float)(__LC24 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_0010cac4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_0010cac8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010cacc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC26 * fVar17 + _LC23);
  iVar14 = (int)(_LC26 * fVar18 + _LC23);
  iVar15 = (int)(_LC26 * fVar19 + _LC23);
  iVar16 = (int)(_LC26 * fVar20 + _LC23);
  fVar3 = (float)iVar13;
  fVar8 = (float)iVar14;
  fVar9 = (float)iVar15;
  fVar10 = (float)iVar16;
  fVar3 = ((fVar17 - _LC29 * fVar3) - _LC31 * fVar3) - fVar3 * _LC33;
  fVar8 = ((fVar18 - _LC29 * fVar8) - _LC31 * fVar8) - fVar8 * _LC33;
  fVar9 = ((fVar19 - _LC29 * fVar9) - _LC31 * fVar9) - fVar9 * _LC33;
  fVar10 = ((fVar20 - _LC29 * fVar10) - _LC31 * fVar10) - fVar10 * _LC33;
  fVar21 = fVar3 * fVar3;
  fVar22 = fVar8 * fVar8;
  fVar23 = fVar9 * fVar9;
  fVar24 = fVar10 * fVar10;
  fVar17 = (((_LC35 * fVar21 + _LC37) * fVar21 + _LC39) * fVar21 * fVar21 - _LC23 * fVar21) + _LC3;
  fVar18 = (((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar22 - _LC23 * fVar22) + _LC3;
  fVar19 = (((_LC35 * fVar23 + _LC37) * fVar23 + _LC39) * fVar23 * fVar23 - _LC23 * fVar23) + _LC3;
  fVar20 = (((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar24 - _LC23 * fVar24) + _LC3;
  uVar25 = (iVar13 << 0x1f) >> 0x1f;
  uVar26 = (iVar14 << 0x1f) >> 0x1f;
  uVar27 = (iVar15 << 0x1f) >> 0x1f;
  uVar28 = (iVar16 << 0x1f) >> 0x1f;
  fVar3 = ((_LC41 * fVar21 + _LC43) * fVar21 + _LC45) * fVar21 * fVar3 + fVar3;
  fVar8 = ((_LC41 * fVar22 + _LC43) * fVar22 + _LC45) * fVar22 * fVar8 + fVar8;
  fVar9 = ((_LC41 * fVar23 + _LC43) * fVar23 + _LC45) * fVar23 * fVar9 + fVar9;
  fVar10 = ((_LC41 * fVar24 + _LC43) * fVar24 + _LC45) * fVar24 * fVar10 + fVar10;
  auVar7._8_4_ = fVar6;
  auVar7._0_8_ = param_5;
  auVar7._12_4_ = (int)((ulong)param_6 >> 0x20);
  auVar7 = divps(auVar7,auVar4);
  fVar3 = (float)(__LC46 & (((uint)fVar3 & uVar25 | ~uVar25 & (uint)fVar17) ^
                           __LC24 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC46 & (uint)(auVar7._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC24 ^
                                        ((uint)fVar17 & uVar25 | ~uVar25 & (uint)fVar3))));
  fVar6 = (float)(_UNK_0010cad4 &
                  (((uint)fVar8 & uVar26 | ~uVar26 & (uint)fVar18) ^
                  _UNK_0010cac4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                 ~_UNK_0010cad4 &
                 (uint)(auVar7._4_4_ *
                       (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_0010cac4 ^
                              ((uint)fVar18 & uVar26 | ~uVar26 & (uint)fVar8))));
  fVar8 = (float)(_UNK_0010cad8 &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar19) ^
                  _UNK_0010cac8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_0010cad8 &
                 (uint)(auVar7._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_0010cac8 ^
                              ((uint)fVar19 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar9 = (float)(_UNK_0010cadc &
                  (((uint)fVar10 & uVar28 | ~uVar28 & (uint)fVar20) ^
                  _UNK_0010cacc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010cadc &
                 (uint)(auVar7._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010cacc ^
                              ((uint)fVar20 & uVar28 | ~uVar28 & (uint)fVar10))));
  local_18 = (float)param_1;
  fStack_14 = (float)((ulong)param_1 >> 0x20);
  fStack_10 = (float)param_2;
  fVar22 = *(float *)(param_8 + 0xf0) - local_18;
  fVar23 = *(float *)(param_8 + 0xf4) - fStack_14;
  fVar24 = *(float *)(param_8 + 0xf8) - fStack_10;
  fVar18 = (float)(__LC2 ^ (uint)fVar3);
  fVar19 = (float)(_UNK_0010ca94 ^ (uint)fVar6);
  fVar20 = (float)(_UNK_0010ca98 ^ (uint)fVar8);
  fVar11 = (float)(_UNK_0010ca9c ^ (uint)fVar9);
  fVar21 = (fVar22 * fVar9 + fVar3 * 0.0 + fVar6 * fVar24) - fVar8 * fVar23;
  fVar17 = (fVar9 * fVar23 - fVar3 * fVar24) + fVar6 * 0.0 + fVar22 * fVar8;
  fVar10 = ((fVar9 * fVar24 + fVar3 * fVar23) - fVar22 * fVar6) + fVar8 * 0.0;
  fVar3 = ((fVar9 * 0.0 - fVar3 * fVar22) - fVar6 * fVar23) - fVar8 * fVar24;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  auVar5._0_4_ = (((fVar18 * fVar3 + fVar21 * fVar11 + fVar17 * fVar20) - fVar10 * fVar19) +
                 local_18) - *(float *)(param_8 + 0xf0);
  auVar5._4_4_ = (fVar10 * fVar18 + (fVar19 * fVar3 - fVar21 * fVar20) + fVar17 * fVar11 + fStack_14
                 ) - *(float *)(param_8 + 0xf4);
  auVar5._8_4_ = (fVar10 * fVar11 + ((fVar20 * fVar3 + fVar21 * fVar19) - fVar17 * fVar18) +
                 fStack_10) - *(float *)(param_8 + 0xf8);
  auVar5._12_4_ =
       ((((fVar11 * fVar3 - fVar21 * fVar18) - fVar17 * fVar19) - fVar10 * fVar20) + fStack_c) -
       *(float *)(param_8 + 0xfc);
  auVar7 = divps(auVar5,auVar12);
  local_28 = (float)param_3;
  fStack_24 = (float)((ulong)param_3 >> 0x20);
  auVar2._4_4_ = auVar7._4_4_ + fStack_24;
  auVar2._0_4_ = auVar7._0_4_ + local_28;
  auVar2._8_4_ = auVar7._8_4_ + fStack_30;
  auVar2._12_4_ = auVar7._12_4_ + fStack_2c;
  return auVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::CheckCollision(JPH::Vec3, JPH::Quat, JPH::Vec3, float, JPH::Shape const*,
   JPH::Vec3, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&) const */

void JPH::CharacterVirtual::CheckCollision
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  float in_XMM6_Da;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined2 local_b8 [2];
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  undefined1 local_94;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCenterOfMassTransform(local_88,param_1,param_2);
  local_98 = in_XMM6_Da + *(float *)(param_1 + 0xb8);
  local_b4 = __LC60;
  local_94 = *(undefined1 *)(param_1 + 0xa0);
  local_d0 = *(undefined4 *)(param_1 + 0x148);
  local_b8[0] = 0x100;
  local_d8 = &PTR__IgnoreSingleBodyFilterChained_0010c8e8;
  if (*(char *)(param_1 + 200) == '\0') {
    pcVar3 = JPH::NarrowPhaseQuery::CollideShape;
  }
  else {
    pcVar3 = JPH::NarrowPhaseQuery::CollideShapeWithInternalEdgeRemoval;
  }
  local_c8 = param_6;
  local_a8 = in_XMM4_Qa;
  local_a0 = in_XMM5_Qa;
  (*pcVar3)(0x3f8000003f800000,0x3f8000003f800000,param_7,*(long *)(param_1 + 0x10) + 0x180,param_2,
            local_88,local_b8,param_3,param_4,param_5,&local_d8,param_9);
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    (**(code **)(lVar2 + 0x10))(param_7,param_8,plVar1,param_1,local_88,local_b8,param_3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::GetContactsAtPosition(JPH::Vec3, JPH::Vec3, JPH::Shape const*,
   JPH::Array<JPH::CharacterVirtual::Contact, JPH::STLTempAllocator<JPH::CharacterVirtual::Contact>
   >&, JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&,
   JPH::ShapeFilter const&) const */

void __thiscall
JPH::CharacterVirtual::GetContactsAtPosition
          (undefined4 param_1,undefined4 param_2,CharacterVirtual *this,undefined8 param_4,
          long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined **local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  CharacterVirtual *pCStack_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  CharacterVirtual local_30;
  long local_20;
  
  local_58 = *(undefined8 *)(this + 0x10);
  local_78 = *(undefined8 *)(this + 0xf0);
  uStack_70 = *(undefined8 *)(this + 0xf8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = *(undefined4 *)(this + 0x148);
  *(undefined8 *)(param_5 + 8) = 0;
  local_68 = *(undefined8 *)(this + 0x20);
  uStack_60 = *(undefined8 *)(this + 0x28);
  local_38 = *(undefined8 *)(this + 0xbc);
  local_b8 = &PTR__IgnoreSingleBodyFilterChained_0010c8e8;
  local_98 = &PTR__ContactCollector_0010c978;
  local_90 = 0x7f7fffff;
  local_88 = 0;
  local_48 = 0;
  local_30 = (CharacterVirtual)0x0;
  local_a8 = param_8;
  pCStack_50 = this;
  local_40 = param_5;
  CheckCollision(param_1,param_2,*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),this,
                 param_4,&local_98,param_6,param_7,&local_b8,local_78,uStack_70,param_9);
  lVar2 = *(long *)(param_5 + 0x18);
  lVar3 = *(long *)(param_5 + 8) * 0x80 + lVar2;
  QuickSort<JPH::CharacterVirtual::Contact*,JPH::CharacterVirtual::ContactOrderingPredicate>
            (lVar2,lVar3);
  this[0x13c] = local_30;
  if (lVar2 != lVar3) {
    fVar1 = *(float *)(this + 0xb8);
    do {
      fVar4 = *(float *)(lVar2 + 0x40) - fVar1;
      *(float *)(lVar2 + 0x40) = fVar4;
      if (*(long *)(lVar2 + 0x50) != 0) {
        *(float *)(lVar2 + 0x40) = fVar4 - *(float *)(*(long *)(lVar2 + 0x50) + 0xb8);
      }
      lVar2 = lVar2 + 0x80;
    } while (lVar2 != lVar3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::RemoveConflictingContacts(JPH::Array<JPH::CharacterVirtual::Contact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Contact> >&,
   JPH::Array<JPH::CharacterVirtual::IgnoredContact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact> >&) const */

void __thiscall
JPH::CharacterVirtual::RemoveConflictingContacts
          (CharacterVirtual *this,Array *param_1,Array *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *__dest_00;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  
  uVar5 = *(ulong *)(param_1 + 8);
  fVar14 = (float)((uint)(_LC48 * *(float *)(this + 0xb8)) ^ _LC8);
  if (uVar5 == 0) {
    return;
  }
  uVar12 = 0;
  while( true ) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar10 = uVar12 + 1;
    lVar13 = uVar12 * 0x80;
    lVar1 = lVar7 + lVar13;
    if (*(float *)(lVar1 + 0x40) <= fVar14) break;
LAB_001030c8:
    uVar12 = uVar10;
    if (uVar5 <= uVar10) {
      return;
    }
  }
  uVar8 = uVar10;
  if (uVar5 <= uVar10) {
    return;
  }
  do {
    lVar11 = uVar8 * 0x80;
    pvVar6 = (void *)(lVar7 + lVar11);
    if ((((*(int *)(lVar1 + 0x48) != *(int *)((long)pvVar6 + 0x48)) ||
         (*(long *)(lVar1 + 0x50) != *(long *)((long)pvVar6 + 0x50))) ||
        (fVar3 = *(float *)((long)pvVar6 + 0x40), fVar14 < fVar3)) ||
       (0.0 <= (float)((ulong)*(undefined8 *)((long)pvVar6 + 0x20) >> 0x20) *
               *(float *)(lVar1 + 0x24) +
               (float)*(undefined8 *)((long)pvVar6 + 0x20) * *(float *)(lVar1 + 0x20) + 0.0 +
               *(float *)(lVar1 + 0x28) * *(float *)((long)pvVar6 + 0x28))) {
      uVar5 = *(ulong *)(param_1 + 8);
      uVar8 = uVar8 + 1;
    }
    else {
      lVar9 = *(long *)(param_2 + 8);
      uVar4 = *(ulong *)(param_2 + 0x10);
      uVar5 = lVar9 + 1;
      if (fVar3 < *(float *)(lVar1 + 0x40) || fVar3 == *(float *)(lVar1 + 0x40)) {
        if (uVar4 < uVar5) {
          if (uVar5 <= uVar4 * 2) {
            uVar5 = uVar4 * 2;
          }
          pvVar6 = (void *)(**(code **)(**(long **)param_2 + 0x10))
                                     (*(long **)param_2,(int)uVar5 * 8);
          if (*(void **)(param_2 + 0x18) != (void *)0x0) {
            memmove(pvVar6,*(void **)(param_2 + 0x18),*(long *)(param_2 + 8) * 8);
            (**(code **)(**(long **)param_2 + 0x18))
                      (*(long **)param_2,*(undefined8 *)(param_2 + 0x18),
                       *(int *)(param_2 + 0x10) * 8);
          }
          lVar9 = *(long *)(param_2 + 8);
          lVar7 = *(long *)(param_1 + 0x18);
          *(void **)(param_2 + 0x18) = pvVar6;
          *(ulong *)(param_2 + 0x10) = uVar5;
          uVar5 = lVar9 + 1;
        }
        else {
          pvVar6 = *(void **)(param_2 + 0x18);
        }
        *(ulong *)(param_2 + 8) = uVar5;
        puVar2 = (undefined4 *)((long)pvVar6 + lVar9 * 8);
        *puVar2 = *(undefined4 *)(lVar1 + 0x48);
        puVar2[1] = *(undefined4 *)(lVar1 + 0x58);
        uVar5 = *(ulong *)(param_1 + 8);
        if ((lVar13 >> 7) + 1U < uVar5) {
          memmove((void *)(lVar7 + lVar13),(void *)(lVar7 + 0x80 + lVar13),
                  ((uVar5 - 1) - (lVar13 >> 7)) * 0x80);
          uVar5 = *(ulong *)(param_1 + 8);
        }
        uVar5 = uVar5 - 1;
        *(ulong *)(param_1 + 8) = uVar5;
        uVar10 = uVar12;
        goto LAB_001030c8;
      }
      if (uVar4 < uVar5) {
        if (uVar5 <= uVar4 * 2) {
          uVar5 = uVar4 * 2;
        }
        __dest = (void *)(**(code **)(**(long **)param_2 + 0x10))(*(long **)param_2,(int)uVar5 * 8);
        if (*(void **)(param_2 + 0x18) != (void *)0x0) {
          memmove(__dest,*(void **)(param_2 + 0x18),*(long *)(param_2 + 8) * 8);
          (**(code **)(**(long **)param_2 + 0x18))
                    (*(long **)param_2,*(undefined8 *)(param_2 + 0x18),*(int *)(param_2 + 0x10) * 8)
          ;
        }
        lVar7 = *(long *)(param_1 + 0x18);
        *(void **)(param_2 + 0x18) = __dest;
        lVar9 = *(long *)(param_2 + 8);
        *(ulong *)(param_2 + 0x10) = uVar5;
        __dest_00 = (void *)(lVar7 + lVar11);
        uVar5 = lVar9 + 1;
      }
      else {
        __dest = *(void **)(param_2 + 0x18);
        __dest_00 = pvVar6;
      }
      *(ulong *)(param_2 + 8) = uVar5;
      puVar2 = (undefined4 *)((long)__dest + lVar9 * 8);
      *puVar2 = *(undefined4 *)((long)pvVar6 + 0x48);
      puVar2[1] = *(undefined4 *)((long)pvVar6 + 0x58);
      uVar5 = *(ulong *)(param_1 + 8);
      if ((lVar11 >> 7) + 1U < uVar5) {
        memmove(__dest_00,(void *)(lVar7 + 0x80 + lVar11),((uVar5 - 1) - (lVar11 >> 7)) * 0x80);
        uVar5 = *(ulong *)(param_1 + 8);
      }
      uVar5 = uVar5 - 1;
      *(ulong *)(param_1 + 8) = uVar5;
    }
    if (uVar5 <= uVar8) goto LAB_001030c8;
    lVar7 = *(long *)(param_1 + 0x18);
  } while( true );
}



/* JPH::CharacterVirtual::ValidateContact(JPH::CharacterVirtual::Contact const&) const */

undefined8 __thiscall
JPH::CharacterVirtual::ValidateContact(CharacterVirtual *this,Contact *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x90);
  if (plVar1 != (long *)0x0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
      if (UNRECOVERED_JUMPTABLE_00 != CharacterContactListener::OnContactValidate) {
                    /* WARNING: Could not recover jumptable at 0x00103483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(plVar1,this,param_1 + 0x48,param_1 + 0x58);
        return uVar2;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x20);
      if (UNRECOVERED_JUMPTABLE_00 != CharacterContactListener::OnCharacterContactValidate) {
                    /* WARNING: Could not recover jumptable at 0x00103497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(plVar1,this,*(long *)(param_1 + 0x50),param_1 + 0x58);
        return uVar2;
      }
    }
  }
  return 1;
}



/* JPH::CharacterVirtual::ContactCastCollector::AddHit(JPH::ShapeCastResult const&) */

void __thiscall
JPH::CharacterVirtual::ContactCastCollector::AddHit
          (ContactCastCollector *this,ShapeCastResult *param_1)

{
  long lVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  Body *pBVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  long in_FS_OFFSET;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float local_128;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  undefined4 uStack_70;
  Body BStack_6c;
  byte bStack_6b;
  undefined2 uStack_6a;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined2 uStack_58;
  undefined1 uStack_56;
  long local_40;
  
  auVar14._8_8_ = uStack_90;
  auVar14._0_8_ = local_98;
  auVar13._8_8_ = uStack_90;
  auVar13._0_8_ = local_98;
  auVar23._8_8_ = uStack_90;
  auVar23._0_8_ = local_98;
  fVar21 = *(float *)(param_1 + 0x460);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((fVar21 < *(float *)(*(long *)(this + 0x70) + 0x44)) && (_local_98 = auVar23, 0.0 < fVar21)) {
    fVar25 = *(float *)(param_1 + 0x20);
    fVar3 = *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 0x28);
    uVar19 = *(undefined8 *)(this + 0x30);
    fVar20 = (float)*(undefined8 *)(this + 0x38);
    _local_98 = auVar13;
    if (0.0 < *(float *)(this + 0x38) * fVar4 +
              *(float *)(this + 0x34) * fVar3 + *(float *)(this + 0x30) * fVar25 + 0.0) {
      piVar16 = *(int **)(*(long *)(this + 0x68) + 0x18);
      piVar2 = piVar16 + *(long *)(*(long *)(this + 0x68) + 8) * 2;
      for (; piVar16 != piVar2; piVar16 = piVar16 + 2) {
        if ((*piVar16 == *(int *)(param_1 + 0x3c)) &&
           (_local_98 = auVar14, piVar16[1] == *(int *)(param_1 + 0x38))) goto LAB_00103570;
      }
      uStack_80 = 0xffffffff;
      local_78 = 0;
      uStack_70 = 0xffffffff;
      uStack_58 = 0;
      uStack_56 = 1;
      if (*(int *)(param_1 + 0x3c) == -1) {
        local_c8 = *(float *)(this + 0x20) + *(float *)(param_1 + 0x10);
        fStack_c4 = *(float *)(this + 0x24) + *(float *)(param_1 + 0x14);
        fStack_c0 = *(float *)(this + 0x28) + *(float *)(param_1 + 0x18);
        fStack_bc = *(float *)(this + 0x2c) + *(float *)(param_1 + 0x1c);
        local_78 = *(long *)(this + 0x60);
        local_b8 = *(undefined8 *)(local_78 + 0x110);
        uStack_b0 = *(undefined8 *)(local_78 + 0x118);
        local_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        fVar25 = fVar4 * fVar4 + fVar3 * fVar3 + fVar25 * fVar25 + 0.0;
        if (_LC21 < fVar25) {
          auVar26._0_4_ = SQRT(fVar25);
          auVar26._4_4_ = auVar26._0_4_;
          auVar26._8_4_ = auVar26._0_4_;
          auVar26._12_4_ = auVar26._0_4_;
          auVar23 = divps(*(undefined1 (*) [16])(param_1 + 0x20),auVar26);
          local_a8 = 0.0 - auVar23._0_4_;
          fStack_a4 = 0.0 - auVar23._4_4_;
          fStack_a0 = 0.0 - auVar23._8_4_;
          fStack_9c = 0.0 - auVar23._12_4_;
        }
        uStack_70 = *(undefined4 *)(param_1 + 0x38);
        local_68 = *(undefined8 *)(local_78 + 0x140);
        local_88 = (float)(*(uint *)(param_1 + 0x30) ^ _LC8);
        BStack_6c = (Body)0x1;
        bStack_6b = 0;
        uStack_60 = (undefined7)PhysicsMaterial::sDefault;
        uStack_59 = (undefined1)((ulong)PhysicsMaterial::sDefault >> 0x38);
        local_98._4_4_ = fStack_a4;
        local_98._0_4_ = local_a8;
        uStack_90 = CONCAT44(fStack_9c,fStack_a0);
        uVar24 = _LC8;
      }
      else {
        lVar5 = *(long *)(this + 0x50);
        lVar1 = lVar5 + 0x130;
        lVar17 = (**(code **)(*(long *)(lVar5 + 0x130) + 0x10))(lVar1,param_1 + 0x3c);
        uVar18 = (ulong)(*(uint *)(param_1 + 0x3c) & 0x7fffff);
        if ((((**(ulong **)(lVar5 + 0x138) <= uVar18) ||
             (pBVar6 = *(Body **)((*(ulong **)(lVar5 + 0x138))[2] + uVar18 * 8),
             ((ulong)pBVar6 & 1) != 0)) || (*(uint *)(param_1 + 0x3c) != *(uint *)(pBVar6 + 0x70)))
           || ((((byte)pBVar6[0x79] & 4) == 0 || (((byte)pBVar6[0x79] & 1) != 0)))) {
          if (lVar17 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x130) + 0x18))(lVar1,lVar17);
          }
          goto LAB_00103570;
        }
        uVar19 = *(undefined8 *)(this + 0x48);
        uVar11 = *(undefined8 *)(this + 0x20);
        uVar12 = *(undefined8 *)(this + 0x28);
        uVar7 = *(undefined8 *)(this + 0x40);
        GetAdjustedBodyVelocity
                  (*(CharacterVirtual **)(this + 0x58),pBVar6,(Vec3 *)&local_e8,(Vec3 *)&local_d8);
        local_108 = (float)uVar11;
        fStack_104 = (float)((ulong)uVar11 >> 0x20);
        fStack_100 = (float)uVar12;
        fStack_fc = (float)((ulong)uVar12 >> 0x20);
        local_c8 = local_108 + *(float *)(param_1 + 0x10);
        fStack_c4 = fStack_104 + *(float *)(param_1 + 0x14);
        fStack_c0 = fStack_100 + *(float *)(param_1 + 0x18);
        fStack_bc = fStack_fc + *(float *)(param_1 + 0x1c);
        fVar21 = (fStack_c4 - *(float *)(pBVar6 + 4)) * local_d8 -
                 fStack_d4 * (local_c8 - *(float *)pBVar6);
        local_b8 = CONCAT44(((local_c8 - *(float *)pBVar6) * fStack_d0 -
                            local_d8 * (fStack_c0 - *(float *)(pBVar6 + 8))) + fStack_e4,
                            ((fStack_c0 - *(float *)(pBVar6 + 8)) * fStack_d4 -
                            fStack_d0 * (fStack_c4 - *(float *)(pBVar6 + 4))) + local_e8);
        uStack_b0 = CONCAT44(fVar21 + fStack_dc,fVar21 + fStack_e0);
        fVar21 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                 *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) + 0.0 +
                 *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
        local_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        if (_LC21 < fVar21) {
          auVar22._0_4_ = SQRT(fVar21);
          auVar22._4_4_ = auVar22._0_4_;
          auVar22._8_4_ = auVar22._0_4_;
          auVar22._12_4_ = auVar22._0_4_;
          auVar23 = divps(*(undefined1 (*) [16])(param_1 + 0x20),auVar22);
          local_a8 = 0.0 - auVar23._0_4_;
          fStack_a4 = 0.0 - auVar23._4_4_;
          fStack_a0 = 0.0 - auVar23._8_4_;
          fStack_9c = 0.0 - auVar23._12_4_;
        }
        _local_98 = TransformedShape::GetWorldSpaceSurfaceNormal
                              (CONCAT44(fStack_c4,local_c8),CONCAT44(fStack_bc,fStack_c0),
                               *(undefined8 *)(this + 0x10),*(undefined4 *)(param_1 + 0x38));
        uVar24 = _LC8;
        fVar25 = SUB164(_local_98,0);
        fVar21 = SUB164(_local_98,8);
        if (SUB164(_local_98,4) * fStack_a4 + fVar25 * local_a8 + 0.0 + fVar21 * fStack_a0 < 0.0) {
          local_98._4_4_ = 0.0 - SUB164(_local_98,4);
          local_98._0_4_ = 0.0 - fVar25;
          uStack_90 = CONCAT44(0.0 - uStack_90._4_4_,0.0 - fVar21);
        }
        fVar21 = (float)uVar7;
        local_128 = (float)uVar19;
        fVar25 = (float)((ulong)uVar7 >> 0x20);
        if (local_128 * (float)uStack_90 +
            fVar25 * (float)local_98._4_4_ + fVar21 * (float)local_98._0_4_ + 0.0 <
            fStack_a0 * local_128 + fStack_a4 * fVar25 + local_a8 * fVar21 + 0.0) {
          local_98._4_4_ = fStack_a4;
          local_98._0_4_ = local_a8;
          uStack_90._4_4_ = fStack_9c;
          uStack_90._0_4_ = fStack_a0;
        }
        uStack_80 = *(undefined4 *)(param_1 + 0x3c);
        uStack_70 = *(undefined4 *)(param_1 + 0x38);
        local_88 = (float)(*(uint *)(param_1 + 0x30) ^ _LC8);
        BStack_6c = pBVar6[0x78];
        local_68 = *(undefined8 *)(pBVar6 + 0x50);
        bStack_6b = (byte)pBVar6[0x79] & 1;
        plVar8 = *(long **)(*(long *)(this + 0x10) + 0x20);
        bVar10 = (byte)*(undefined4 *)(*(long *)(this + 0x10) + 0x3c);
        local_ec = (uint)(0xffffffffL << (0x20 - bVar10 & 0x3f)) |
                   *(uint *)(param_1 + 0x38) >> (bVar10 & 0x3f);
        uVar19 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_ec);
        uStack_60 = (undefined7)uVar19;
        uStack_59 = (undefined1)((ulong)uVar19 >> 0x38);
        if (lVar17 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x130) + 0x18))(lVar1,lVar17);
        }
        fVar21 = *(float *)(param_1 + 0x460);
        uVar19 = *(undefined8 *)(this + 0x30);
        fVar20 = (float)*(undefined8 *)(this + 0x38);
      }
      fStack_84 = fVar21;
      if (fVar20 * fStack_a0 +
          (float)((ulong)uVar19 >> 0x20) * fStack_a4 + (float)uVar19 * local_a8 + 0.0 + local_88 <
          (float)(*(uint *)(*(CharacterVirtual **)(this + 0x58) + 0xb4) ^ uVar24)) {
        cVar15 = ValidateContact(*(CharacterVirtual **)(this + 0x58),(Contact *)&local_c8);
        if (cVar15 != '\0') {
          puVar9 = *(undefined8 **)(this + 0x70);
          *puVar9 = CONCAT44(fStack_c4,local_c8);
          puVar9[1] = CONCAT44(fStack_bc,fStack_c0);
          puVar9[2] = local_b8;
          puVar9[3] = uStack_b0;
          puVar9[4] = CONCAT44(fStack_a4,local_a8);
          puVar9[5] = CONCAT44(fStack_9c,fStack_a0);
          *(undefined1 (*) [16])(puVar9 + 6) = _local_98;
          puVar9[8] = CONCAT44(fStack_84,local_88);
          puVar9[9] = CONCAT44(uStack_7c,uStack_80);
          puVar9[10] = local_78;
          puVar9[0xb] = CONCAT26(uStack_6a,CONCAT15(bStack_6b,CONCAT14(BStack_6c,uStack_70)));
          puVar9[0xc] = local_68;
          puVar9[0xd] = CONCAT17(uStack_59,uStack_60);
          *(uint *)((long)puVar9 + 0x6f) = CONCAT13(uStack_56,CONCAT21(uStack_58,uStack_59));
          *(float *)(this + 8) = fStack_84;
        }
      }
    }
  }
LAB_00103570:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::ContactAdded(JPH::CharacterVirtual::Contact const&,
   JPH::CharacterContactSettings&) const */

void __thiscall
JPH::CharacterVirtual::ContactAdded
          (CharacterVirtual *this,Contact *param_1,CharacterContactSettings *param_2)

{
  long *plVar1;
  Contact *pCVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(this + 0x90);
  if (plVar1 != (long *)0x0) {
    pCVar2 = *(Contact **)(param_1 + 0x50);
    if (pCVar2 == (Contact *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE != CharacterContactListener::OnContactAdded) {
        pCVar2 = param_1 + 0x48;
        goto LAB_00103b3a;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x30);
      if (UNRECOVERED_JUMPTABLE != CharacterContactListener::OnCharacterContactAdded) {
LAB_00103b3a:
                    /* WARNING: Could not recover jumptable at 0x00103b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),
                   CONCAT44(0.0 - *(float *)(param_1 + 0x24),0.0 - *(float *)(param_1 + 0x20)),
                   CONCAT44(0.0 - *(float *)(param_1 + 0x2c),0.0 - *(float *)(param_1 + 0x28)),
                   plVar1,this,pCVar2,param_1 + 0x58,param_2);
        return;
      }
    }
  }
  return;
}



/* JPH::CharacterVirtual::DetermineConstraints(JPH::Array<JPH::CharacterVirtual::Contact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Contact> >&, float,
   JPH::Array<JPH::CharacterVirtual::Constraint,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint> >&) const */

void __thiscall
JPH::CharacterVirtual::DetermineConstraints
          (CharacterVirtual *this,Array *param_1,float param_2,Array *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 (*pauVar4) [16];
  void *__dest;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  long lVar10;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar5 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 8) * 0x80 + lVar5;
  for (; lVar10 != lVar5; lVar5 = lVar5 + 0x80) {
    fVar18 = *(float *)(lVar5 + 0x40);
    local_68 = *(undefined8 *)(lVar5 + 0x10);
    uStack_60 = *(undefined8 *)(lVar5 + 0x18);
    if (fVar18 < 0.0) {
      fVar19 = *(float *)(this + 0xc4);
      local_68._4_4_ = (float)((ulong)local_68 >> 0x20);
      uStack_60._4_4_ = (float)((ulong)uStack_60 >> 0x20);
      auVar11._0_4_ = fVar18 * *(float *)(lVar5 + 0x20) * fVar19;
      auVar11._4_4_ = fVar18 * *(float *)(lVar5 + 0x24) * fVar19;
      auVar11._8_4_ = fVar18 * *(float *)(lVar5 + 0x28) * fVar19;
      auVar11._12_4_ = fVar18 * *(float *)(lVar5 + 0x2c) * fVar19;
      auVar16._4_4_ = param_2;
      auVar16._0_4_ = param_2;
      auVar16._8_4_ = param_2;
      auVar16._12_4_ = param_2;
      auVar11 = divps(auVar11,auVar16);
      local_68 = CONCAT44(local_68._4_4_ - auVar11._4_4_,(float)local_68 - auVar11._0_4_);
      uStack_60 = CONCAT44(uStack_60._4_4_ - auVar11._12_4_,(float)uStack_60 - auVar11._8_4_);
    }
    lVar7 = *(long *)(param_3 + 8);
    uVar6 = lVar7 + 1;
    if (*(ulong *)(param_3 + 0x10) < uVar6) {
      uVar8 = *(ulong *)(param_3 + 0x10) * 2;
      if (uVar8 < uVar6) {
        uVar8 = uVar6;
      }
      __dest = (void *)(**(code **)(**(long **)param_3 + 0x10))(*(long **)param_3,(int)uVar8 << 6);
      if (*(void **)(param_3 + 0x18) != (void *)0x0) {
        memmove(__dest,*(void **)(param_3 + 0x18),*(long *)(param_3 + 8) << 6);
        (**(code **)(**(long **)param_3 + 0x18))
                  (*(long **)param_3,*(undefined8 *)(param_3 + 0x18),*(int *)(param_3 + 0x10) << 6);
      }
      lVar7 = *(long *)(param_3 + 8);
      fVar18 = *(float *)(lVar5 + 0x40);
      *(void **)(param_3 + 0x18) = __dest;
      *(ulong *)(param_3 + 0x10) = uVar8;
      uVar6 = lVar7 + 1;
    }
    else {
      __dest = *(void **)(param_3 + 0x18);
    }
    *(ulong *)(param_3 + 8) = uVar6;
    fVar9 = _LC49;
    fVar19 = *(float *)(this + 0x40);
    pauVar4 = (undefined1 (*) [16])(lVar7 * 0x40 + (long)__dest);
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[2] = (undefined1  [16])0x0;
    pauVar4[3] = (undefined1  [16])0x0;
    *(undefined8 *)pauVar4[1] = local_68;
    *(undefined8 *)(pauVar4[1] + 8) = uStack_60;
    uVar1 = *(undefined4 *)(lVar5 + 0x28);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(long *)*pauVar4 = lVar5;
    *(undefined8 *)pauVar4[2] = uVar2;
    *(ulong *)(pauVar4[2] + 8) = CONCAT44(fVar18,uVar1);
    if (fVar19 < fVar9) {
      fVar9 = (float)*(undefined8 *)(this + 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
      if (((float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20) * fVar14 +
           (float)*(undefined8 *)(lVar5 + 0x30) * fVar9 + 0.0 +
           (float)*(undefined8 *)(lVar5 + 0x38) * *(float *)(this + 0x28) < fVar19) &&
         (fVar19 = *(float *)(this + 0x28) * *(float *)(lVar5 + 0x28) +
                   *(float *)(lVar5 + 0x24) * fVar14 + fVar9 * *(float *)(lVar5 + 0x20) + 0.0,
         _LC50 < fVar19)) {
        fVar9 = *(float *)(lVar5 + 0x20);
        fVar14 = *(float *)(lVar5 + 0x24);
        fVar15 = *(float *)(lVar5 + 0x28);
        fVar3 = *(float *)(lVar5 + 0x2c);
        pauVar4[3][0] = 1;
        uVar8 = lVar7 + 2;
        auVar12._0_4_ = fVar9 - fVar19 * *(float *)(this + 0x20);
        auVar12._4_4_ = fVar14 - fVar19 * *(float *)(this + 0x24);
        auVar12._8_4_ = fVar15 - fVar19 * *(float *)(this + 0x28);
        auVar12._12_4_ = fVar3 - fVar19 * *(float *)(this + 0x2c);
        auVar17._0_4_ =
             SQRT(auVar12._8_4_ * auVar12._8_4_ +
                  auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_ + 0.0);
        auVar17._4_4_ = auVar17._0_4_;
        auVar17._8_4_ = auVar17._0_4_;
        auVar17._12_4_ = auVar17._0_4_;
        auVar11 = divps(auVar12,auVar17);
        if (*(ulong *)(param_3 + 0x10) < uVar8) {
          uVar6 = *(ulong *)(param_3 + 0x10) * 2;
          if (uVar8 <= uVar6) {
            uVar8 = uVar6;
          }
          __dest = (void *)(**(code **)(**(long **)param_3 + 0x10))
                                     (*(long **)param_3,(int)uVar8 << 6);
          if (*(void **)(param_3 + 0x18) != (void *)0x0) {
            memmove(__dest,*(void **)(param_3 + 0x18),*(long *)(param_3 + 8) << 6);
            (**(code **)(**(long **)param_3 + 0x18))
                      (*(long **)param_3,*(undefined8 *)(param_3 + 0x18),
                       *(int *)(param_3 + 0x10) << 6);
          }
          uVar6 = *(ulong *)(param_3 + 8);
          fVar18 = *(float *)(lVar5 + 0x40);
          *(void **)(param_3 + 0x18) = __dest;
          *(ulong *)(param_3 + 0x10) = uVar8;
          uVar8 = uVar6 + 1;
        }
        *(ulong *)(param_3 + 8) = uVar8;
        fVar19 = auVar11._0_4_;
        fVar9 = auVar11._4_4_;
        fVar14 = auVar11._8_4_;
        pauVar4 = (undefined1 (*) [16])((long)__dest + uVar6 * 0x40);
        *pauVar4 = (undefined1  [16])0x0;
        pauVar4[2] = (undefined1  [16])0x0;
        pauVar4[3] = (undefined1  [16])0x0;
        *(long *)*pauVar4 = lVar5;
        fVar15 = (float)uStack_60 * fVar14 +
                 (float)((ulong)local_68 >> 0x20) * fVar9 + (float)local_68 * fVar19 + 0.0;
        *(float *)pauVar4[1] = fVar15 * fVar19;
        *(float *)(pauVar4[1] + 4) = fVar15 * fVar9;
        *(float *)(pauVar4[1] + 8) = fVar15 * fVar14;
        *(float *)(pauVar4[1] + 0xc) = fVar15 * auVar11._12_4_;
        auVar13._0_12_ = auVar11._0_12_;
        auVar13._12_4_ =
             fVar18 / (fVar14 * *(float *)(lVar5 + 0x28) +
                      fVar9 * *(float *)(lVar5 + 0x24) + fVar19 * *(float *)(lVar5 + 0x20) + 0.0);
        pauVar4[2] = auVar13;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::HandleContact(JPH::Vec3, JPH::CharacterVirtual::Constraint&, float) const
    */

uint JPH::CharacterVirtual::HandleContact
               (undefined8 param_1,float param_2,float param_3,CharacterVirtual *param_4,
               undefined8 *param_5)

{
  byte bVar1;
  Contact *pCVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
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
  uint uVar26;
  uint uVar27;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_ca;
  float local_c8 [16];
  undefined8 local_88;
  ulong uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  long local_40;
  
  pCVar2 = (Contact *)*param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = ValidateContact(param_4,pCVar2);
  if ((char)uVar9 != '\0') {
    local_ca = 0x101;
    ContactAdded(param_4,pCVar2,(CharacterContactSettings *)&local_ca);
    uVar13 = (uint)(byte)pCVar2[0x5d];
    pCVar2[0x72] = local_ca._0_1_;
    if (pCVar2[0x5d] == (Contact)0x0) {
      if ((local_ca._1_1_ != 0) && (uVar9 = (uint)local_ca._1_1_, pCVar2[0x5c] == (Contact)0x2)) {
        uVar9 = 0;
        lVar3 = *(long *)(param_4 + 0x10);
        if (*(int *)(pCVar2 + 0x48) != -1) {
          lVar10 = (**(code **)(*(long *)(lVar3 + 0x130) + 0x20))(lVar3 + 0x130);
          uVar11 = (ulong)(*(uint *)(pCVar2 + 0x48) & 0x7fffff);
          uVar9 = uVar13;
          if (uVar11 < **(ulong **)(lVar3 + 0x138)) {
            puVar4 = *(undefined8 **)((*(ulong **)(lVar3 + 0x138))[2] + uVar11 * 8);
            uVar13 = ~(uint)puVar4 & 1;
            if (((uVar13 != 0) && (*(uint *)(pCVar2 + 0x48) == *(uint *)(puVar4 + 0xe))) &&
               ((*(byte *)((long)puVar4 + 0x79) & 4) != 0)) {
              local_108._0_4_ = (float)param_1;
              local_108._4_4_ = (float)((ulong)param_1 >> 0x20);
              fVar20 = 0.0;
              if (*(float *)(pCVar2 + 0x40) <= 0.0) {
                fVar20 = *(float *)(pCVar2 + 0x40) * __LC54;
              }
              fVar20 = ((param_2 - *(float *)(pCVar2 + 0x18)) * *(float *)(pCVar2 + 0x28) +
                       (local_108._4_4_ - *(float *)(pCVar2 + 0x14)) * *(float *)(pCVar2 + 0x24) +
                       *(float *)(pCVar2 + 0x20) * ((float)local_108 - *(float *)(pCVar2 + 0x10)) +
                       0.0) * __LC57 - fVar20 / param_3;
              uVar9 = uVar13;
              if (0.0 <= fVar20) {
                lVar5 = puVar4[9];
                uVar6 = *puVar4;
                uVar7 = puVar4[1];
                fVar23 = (float)puVar4[2];
                fVar21 = (float)((ulong)puVar4[2] >> 0x20);
                fVar15 = (float)puVar4[3];
                fVar16 = (float)((ulong)puVar4[3] >> 0x20);
                fVar22 = fVar23 + fVar23;
                fVar28 = fVar21 + fVar21;
                fVar24 = fVar16 * (fVar15 + fVar15);
                fVar29 = fVar15 * (fVar15 + fVar15);
                fVar19 = (float)*(undefined8 *)(lVar5 + 0x38);
                fVar14 = (float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20);
                lVar12 = 0;
                fVar32 = fVar19 * (fVar19 + fVar19);
                fVar33 = (fVar19 + fVar19) * fVar14;
                fVar17 = (float)*(undefined8 *)(lVar5 + 0x30);
                fVar30 = fVar17 + fVar17;
                fVar18 = (float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20);
                fVar31 = fVar18 + fVar18;
                local_88 = CONCAT44(fVar18 * fVar30 + fVar33,(_LC3 - fVar18 * fVar31) - fVar32);
                uStack_80 = (ulong)(uint)(fVar19 * fVar30 - fVar31 * fVar14);
                local_78._0_4_ = fVar18 * fVar30 - fVar33;
                local_78._4_4_ = (_LC3 - fVar32) - fVar17 * fVar30;
                local_78._8_4_ = fVar30 * fVar14 + fVar19 * fVar31;
                local_78._12_4_ = 0;
                local_68 = CONCAT44(fVar19 * fVar31 - fVar30 * fVar14,
                                    fVar19 * fVar30 + fVar31 * fVar14);
                uStack_60 = (ulong)(uint)((_LC3 - fVar17 * fVar30) - fVar18 * fVar31);
                do {
                  fVar19 = *(float *)((long)&local_88 + lVar12);
                  fVar14 = *(float *)((long)&local_88 + lVar12 + 4);
                  fVar17 = *(float *)(local_78 + lVar12 + -8);
                  *(float *)((long)local_c8 + lVar12) =
                       fVar17 * (fVar15 * fVar22 + fVar28 * fVar16) +
                       fVar19 * ((_LC3 - fVar21 * fVar28) - fVar29) +
                       fVar14 * (fVar21 * fVar22 - fVar24);
                  *(float *)((long)local_c8 + lVar12 + 4) =
                       fVar17 * (fVar15 * fVar28 - fVar22 * fVar16) +
                       fVar19 * (fVar24 + fVar21 * fVar22) +
                       fVar14 * ((_LC3 - fVar29) - fVar23 * fVar22);
                  *(float *)((long)local_c8 + lVar12 + 8) =
                       fVar17 * ((_LC3 - fVar23 * fVar22) - fVar21 * fVar28) +
                       fVar19 * (fVar15 * fVar22 - fVar28 * fVar16) +
                       fVar14 * (fVar22 * fVar16 + fVar15 * fVar28);
                  *(float *)((long)local_c8 + lVar12 + 0xc) =
                       fVar17 * 0.0 + fVar19 * 0.0 + fVar14 * 0.0;
                  lVar12 = lVar12 + 0x10;
                } while (lVar12 != 0x30);
                fVar23 = *(float *)(lVar5 + 0x20);
                fVar21 = *(float *)(lVar5 + 0x24);
                fVar19 = *(float *)(lVar5 + 0x28);
                bVar1 = *(byte *)(lVar5 + 0x7a);
                fVar17 = fVar19 * local_c8[8];
                fVar18 = fVar19 * local_c8[9];
                fVar19 = fVar19 * local_c8[10];
                fVar31 = fVar23 * local_c8[0];
                fVar32 = fVar23 * local_c8[1];
                fVar23 = fVar23 * local_c8[2];
                auVar25._1_3_ = 0;
                auVar25[0] = bVar1;
                fVar29 = fVar21 * local_c8[4];
                fVar30 = fVar21 * local_c8[5];
                fVar21 = fVar21 * local_c8[6];
                auVar25[4] = bVar1;
                auVar25._5_3_ = 0;
                auVar25[8] = bVar1;
                auVar25._9_3_ = 0;
                auVar25[0xc] = bVar1;
                auVar25._13_3_ = 0;
                auVar8._4_4_ = _UNK_0010cae4;
                auVar8._0_4_ = __LC56;
                auVar8._8_4_ = _UNK_0010cae8;
                auVar8._12_4_ = _UNK_0010caec;
                auVar25 = auVar25 & auVar8;
                uVar13 = -(uint)(auVar25._0_4_ == __LC56);
                uVar26 = -(uint)(auVar25._4_4_ == _UNK_0010cae4);
                uVar27 = -(uint)(auVar25._8_4_ == _UNK_0010cae8);
                local_108._0_4_ = (float)uVar6;
                local_108._4_4_ = (float)((ulong)uVar6 >> 0x20);
                uStack_100._0_4_ = (float)uVar7;
                fVar14 = *(float *)(pCVar2 + 0x20);
                fVar15 = *(float *)(pCVar2 + 0x24);
                fVar16 = *(float *)(pCVar2 + 0x28);
                fVar22 = fVar15 * (*(float *)pCVar2 - (float)local_108) -
                         (*(float *)(pCVar2 + 4) - local_108._4_4_) * fVar14;
                fVar24 = fVar16 * (*(float *)(pCVar2 + 4) - local_108._4_4_) -
                         (*(float *)(pCVar2 + 8) - (float)uStack_100) * fVar15;
                fVar28 = fVar14 * (*(float *)(pCVar2 + 8) - (float)uStack_100) -
                         (*(float *)pCVar2 - (float)local_108) * fVar16;
                fVar20 = fVar20 / (fVar22 * ((float)((uint)(fVar29 * local_c8[6] +
                                                            fVar31 * local_c8[2] +
                                                           fVar17 * local_c8[10]) & uVar13 & uVar27)
                                             * fVar24 +
                                             (float)((uint)(fVar30 * local_c8[6] +
                                                            fVar32 * local_c8[2] +
                                                           fVar18 * local_c8[10]) & uVar26 & uVar27)
                                             * fVar28 +
                                            (float)((uint)(fVar21 * local_c8[6] +
                                                           fVar23 * local_c8[2] +
                                                          fVar19 * local_c8[10]) & uVar27) * fVar22)
                                   + ((float)((uint)(fVar29 * local_c8[5] + fVar31 * local_c8[1] +
                                                    fVar17 * local_c8[9]) & uVar13 & uVar26) *
                                      fVar24 + (float)((uint)(fVar30 * local_c8[5] +
                                                              fVar32 * local_c8[1] +
                                                             fVar18 * local_c8[9]) & uVar26) *
                                               fVar28 +
                                     (float)((uint)(fVar21 * local_c8[5] + fVar23 * local_c8[1] +
                                                   fVar19 * local_c8[9]) & uVar27 & uVar26) * fVar22
                                     ) * fVar28 +
                                     fVar24 * ((float)((uint)(fVar29 * local_c8[4] +
                                                              fVar31 * local_c8[0] +
                                                             fVar17 * local_c8[8]) & uVar13) *
                                               fVar24 + (float)((uint)(fVar30 * local_c8[4] +
                                                                       fVar32 * local_c8[0] +
                                                                      fVar18 * local_c8[8]) &
                                                               uVar26 & uVar13) * fVar28 +
                                              (float)((uint)(fVar21 * local_c8[4] +
                                                             fVar23 * local_c8[0] +
                                                            fVar19 * local_c8[8]) & uVar27 & uVar13)
                                              * fVar22) + 0.0 + *(float *)(lVar5 + 0x58));
                fVar23 = param_3 * *(float *)(param_4 + 0xd0);
                if (fVar20 <= param_3 * *(float *)(param_4 + 0xd0)) {
                  fVar23 = fVar20;
                }
                fVar23 = (float)((uint)fVar23 ^ _LC8);
                fVar14 = fVar23 * fVar14;
                fVar15 = fVar23 * fVar15;
                fVar16 = fVar23 * fVar16;
                local_108 = CONCAT44(fVar15,fVar14);
                uStack_100 = CONCAT44(fVar23 * *(float *)(pCVar2 + 0x2c),fVar16);
                fVar20 = fVar16 * *(float *)(param_4 + 0x28) +
                         fVar15 * *(float *)(param_4 + 0x24) +
                         *(float *)(param_4 + 0x20) * fVar14 + 0.0;
                if (fVar20 < 0.0) {
                  local_108 = CONCAT44(fVar15 - fVar20 * *(float *)(param_4 + 0x24),
                                       fVar14 - fVar20 * *(float *)(param_4 + 0x20));
                  uStack_100 = CONCAT44(fVar23 * *(float *)(pCVar2 + 0x2c) -
                                        fVar20 * *(float *)(param_4 + 0x2c),
                                        fVar16 - fVar20 * *(float *)(param_4 + 0x28));
                }
                JPH::BodyInterface::AddImpulse
                          (local_108,uStack_100,*(undefined8 *)pCVar2,*(undefined8 *)(pCVar2 + 8),
                           *(long *)(param_4 + 0x10) + 0x140,pCVar2 + 0x48);
              }
            }
          }
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x130) + 0x28))(lVar3 + 0x130,lVar10);
          }
        }
      }
      goto LAB_00103f3d;
    }
  }
  uVar9 = 0;
LAB_00103f3d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::SolveConstraints(JPH::Vec3, float, float,
   JPH::Array<JPH::CharacterVirtual::Constraint,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint> >&,
   JPH::Array<JPH::CharacterVirtual::IgnoredContact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact> >&, float&, JPH::Vec3&,
   JPH::TempAllocator&, bool) const */

void JPH::CharacterVirtual::SolveConstraints
               (long param_1,undefined8 param_2,undefined8 param_3,float param_4,long param_5,
               long param_6,undefined8 *param_7,float *param_8,undefined1 (*param_9) [16],
               long *param_10,char param_11)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  void *__dest;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar35 [16];
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
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  uint local_dc;
  undefined8 local_c8;
  int local_a8;
  long local_88;
  long local_80;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  lVar15 = *(long *)(param_6 + 8);
  local_108 = (float)param_1;
  fStack_104 = (float)((ulong)param_1 >> 0x20);
  fStack_100 = (float)param_2;
  fStack_fc = (float)((ulong)param_2 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar15 == 0) {
    *(float *)*param_9 = param_4 * local_108;
    *(float *)(*param_9 + 4) = param_4 * fStack_104;
    *(float *)(*param_9 + 8) = param_4 * fStack_100;
    *(float *)(*param_9 + 0xc) = param_4 * fStack_fc;
    *param_8 = param_4;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar12 = (int)lVar15 * 8;
    lVar20 = 0;
    puVar13 = (undefined8 *)(**(code **)(*param_10 + 0x10))(param_10,iVar12);
    do {
      puVar13[lVar20] = lVar20 * 0x40 + *(long *)(param_6 + 0x18);
      lVar20 = lVar20 + 1;
    } while (lVar20 != lVar15);
    uStack_f0._0_4_ = fStack_100;
    local_f8 = (undefined1  [8])param_1;
    uStack_f0._4_4_ = fStack_fc;
    *param_9 = (undefined1  [16])0x0;
    local_80 = uStack_f0;
    *param_8 = 0.0;
    if (*(int *)(param_5 + 0xac) != 0) {
      iVar2 = *(int *)(param_5 + 0xac) * 8;
      puVar14 = (undefined8 *)(**(code **)(*param_10 + 0x10))(param_10,iVar2);
      if (*(int *)(param_5 + 0xac) != 0) {
        local_dc = 0;
        local_a8 = 0;
        fVar26 = _LC58;
        local_88 = param_1;
        do {
          lVar15 = *(long *)(param_6 + 0x18);
          fVar46 = (float)uStack_f0;
          fVar47 = uStack_f0._4_4_;
          lVar18 = *(long *)(param_6 + 8) * 0x40 + lVar15;
          for (; lVar18 != lVar15; lVar15 = lVar15 + 0x40) {
            while( true ) {
              fVar42 = (*(float *)(lVar15 + 0x18) - (float)uStack_f0) * *(float *)(lVar15 + 0x28) +
                       (*(float *)(lVar15 + 0x14) - (float)local_f8._4_4_) *
                       *(float *)(lVar15 + 0x24) +
                       (*(float *)(lVar15 + 0x10) - (float)local_f8._0_4_) *
                       *(float *)(lVar15 + 0x20) + 0.0;
              *(float *)(lVar15 + 0xc) = fVar42;
              fVar40 = _LC1;
              if (((fVar26 <= fVar42) &&
                  (fVar43 = *(float *)(lVar15 + 0x28) * *(float *)(*param_9 + 8) +
                            *(float *)(lVar15 + 0x24) * *(float *)(*param_9 + 4) +
                            *(float *)(lVar15 + 0x20) * *(float *)*param_9 + 0.0 +
                            *(float *)(lVar15 + 0x2c), fVar43 - fVar42 * param_4 <= __LC59)) &&
                 (fVar40 = fVar43 / fVar42, fVar40 <= 0.0)) break;
              *(float *)(lVar15 + 8) = fVar40;
              lVar15 = lVar15 + 0x40;
              if (lVar15 == lVar18) goto LAB_00104830;
            }
            *(undefined4 *)(lVar15 + 8) = 0;
          }
LAB_00104830:
          local_c8 = SUB168(_local_f8,0);
          QuickSort<JPH::CharacterVirtual::Constraint**,JPH::CharacterVirtual::SolveConstraints(JPH::Vec3,float,float,JPH::Array<JPH::CharacterVirtual::Constraint,JPH::STLTempAllocator<JPH::CharacterVirtual::Constraint>>&,JPH::Array<JPH::CharacterVirtual::IgnoredContact,JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact>>&,float&,JPH::Vec3&,JPH::TempAllocator&,bool)const::_lambda(JPH::CharacterVirtual::Constraint_const*,JPH::CharacterVirtual::Constraint_const*)_1_>
                    (puVar13,puVar13 + lVar20);
          puVar21 = puVar13;
          fVar26 = _LC58;
          while( true ) {
            plVar4 = (long *)*puVar21;
            fVar40 = *(float *)(plVar4 + 1);
            if (param_4 <= fVar40) goto LAB_00104dcb;
            puVar19 = (undefined8 *)*plVar4;
            if (*(char *)((long)puVar19 + 0x71) == '\0') break;
LAB_00104dbc:
            puVar21 = puVar21 + 1;
            if (puVar13 + lVar20 == puVar21) {
LAB_00104dcb:
              fVar26 = *(float *)(*param_9 + 4);
              fVar40 = *(float *)(*param_9 + 8);
              fVar42 = *(float *)(*param_9 + 0xc);
              *(float *)*param_9 = param_4 * (float)local_f8._0_4_ + *(float *)*param_9;
              *(float *)(*param_9 + 4) = param_4 * (float)local_f8._4_4_ + fVar26;
              *(float *)(*param_9 + 8) = param_4 * fVar46 + fVar40;
              *(float *)(*param_9 + 0xc) = param_4 * fVar47 + fVar42;
              *param_8 = param_4 + *param_8;
              goto LAB_00104e0d;
            }
          }
          if (*(char *)(puVar19 + 0xe) == '\0') {
            cVar11 = HandleContact(local_c8,uStack_f0,param_5,plVar4);
            fVar26 = _LC58;
            if (cVar11 == '\0') {
              lVar15 = *plVar4;
              lVar18 = param_7[1];
              uVar7 = param_7[2];
              *(undefined1 *)(lVar15 + 0x71) = 1;
              uVar16 = lVar18 + 1;
              if (uVar7 < uVar16) {
                uVar7 = uVar7 * 2;
                if (uVar16 <= uVar7) {
                  uVar16 = uVar7;
                }
                __dest = (void *)(**(code **)(*(long *)*param_7 + 0x10))
                                           ((long *)*param_7,(int)uVar16 * 8);
                if ((void *)param_7[3] != (void *)0x0) {
                  memmove(__dest,(void *)param_7[3],param_7[1] * 8);
                  local_108 = (float)param_7[2];
                  (**(code **)(*(long *)*param_7 + 0x18))
                            ((long *)*param_7,param_7[3],(int)local_108 * 8);
                }
                fVar26 = _LC58;
                lVar18 = param_7[1];
                param_7[3] = __dest;
                param_7[2] = uVar16;
                uVar16 = lVar18 + 1;
              }
              else {
                __dest = (void *)param_7[3];
              }
              uVar3 = *(undefined4 *)(lVar15 + 0x48);
              param_7[1] = uVar16;
              puVar1 = (undefined4 *)((long)__dest + lVar18 * 8);
              *puVar1 = uVar3;
              puVar1[1] = *(undefined4 *)(lVar15 + 0x58);
              goto LAB_00104dbc;
            }
            puVar19 = (undefined8 *)*plVar4;
            fVar40 = *(float *)(plVar4 + 1);
            *(undefined1 *)(puVar19 + 0xe) = 1;
          }
          if (*(char *)((long)puVar19 + 0x72) == '\0') {
            *(undefined1 (*) [16])(plVar4 + 2) = (undefined1  [16])0x0;
          }
          param_4 = param_4 - fVar40;
          fVar42 = *(float *)(*param_9 + 4);
          fVar43 = *(float *)(*param_9 + 8);
          fVar44 = *(float *)(*param_9 + 0xc);
          *(float *)*param_9 = fVar40 * (float)local_f8._0_4_ + *(float *)*param_9;
          *(float *)(*param_9 + 4) = fVar40 * (float)local_f8._4_4_ + fVar42;
          *(float *)(*param_9 + 8) = fVar40 * fVar46 + fVar43;
          *(float *)(*param_9 + 0xc) = fVar40 * fVar47 + fVar44;
          *param_8 = fVar40 + *param_8;
          if (param_4 < *(float *)(param_5 + 0xb0)) break;
          if (_LC60 < *(float *)(plVar4 + 1)) {
            local_a8 = 1;
            puVar21 = puVar14;
          }
          else {
            lVar15 = (long)local_a8;
            local_a8 = local_a8 + 1;
            puVar21 = puVar14 + lVar15;
          }
          fVar40 = *(float *)(plVar4 + 4);
          fVar42 = *(float *)((long)plVar4 + 0x24);
          fVar43 = *(float *)(plVar4 + 5);
          fVar44 = *(float *)((long)plVar4 + 0x2c);
          fVar39 = *(float *)(plVar4 + 2);
          fVar41 = *(float *)((long)plVar4 + 0x14);
          fVar10 = *(float *)(plVar4 + 3);
          fVar27 = (float)local_f8._0_4_;
          fVar28 = (float)local_f8._4_4_;
          if ((char)plVar4[6] != '\0') {
            fVar27 = *(float *)(param_5 + 0x28) * fVar43 +
                     *(float *)(param_5 + 0x24) * fVar42 + *(float *)(param_5 + 0x20) * fVar40 + 0.0
            ;
            fVar24 = fVar40 - fVar27 * *(float *)(param_5 + 0x20);
            fVar32 = fVar42 - fVar27 * *(float *)(param_5 + 0x24);
            fVar45 = fVar43 - fVar27 * *(float *)(param_5 + 0x28);
            fVar28 = fVar45 * fVar45 + fVar32 * fVar32 + fVar24 * fVar24 + 0.0;
            fVar23 = (fVar46 - fVar10) * fVar45 +
                     ((float)local_f8._4_4_ - fVar41) * fVar32 +
                     ((float)local_f8._0_4_ - fVar39) * fVar24 + 0.0;
            if (0.0 <= fVar23) {
              fVar23 = 0.0;
            }
            auVar34._0_4_ = fVar23 * fVar24;
            auVar34._4_4_ = fVar23 * fVar32;
            auVar34._8_4_ = fVar23 * fVar45;
            auVar34._12_4_ = fVar23 * (fVar44 - fVar27 * *(float *)(param_5 + 0x2c));
            auVar35._4_4_ = fVar28;
            auVar35._0_4_ = fVar28;
            auVar35._8_4_ = fVar28;
            auVar35._12_4_ = fVar28;
            auVar34 = divps(auVar34,auVar35);
            local_f8._0_4_ = (float)local_f8._0_4_ - auVar34._0_4_;
            local_f8._4_4_ = (float)local_f8._4_4_ - auVar34._4_4_;
            fVar46 = fVar46 - auVar34._8_4_;
            fVar47 = fVar47 - auVar34._12_4_;
            uStack_f0._0_4_ = fVar46;
            uStack_f0._4_4_ = fVar47;
            fVar27 = (float)local_f8._0_4_;
            fVar28 = (float)local_f8._4_4_;
          }
          fVar23 = (fVar46 - fVar10) * fVar43 +
                   (fVar28 - fVar41) * fVar42 + (fVar27 - fVar39) * fVar40 + 0.0;
          local_58._0_4_ = fVar27 - fVar23 * fVar40;
          local_58._4_4_ = fVar28 - fVar23 * fVar42;
          fStack_50 = fVar46 - fVar23 * fVar43;
          fStack_4c = fVar47 - fVar23 * fVar44;
          if (puVar14 < puVar21) {
            fVar23 = 0.0;
            plVar22 = (long *)0x0;
            puVar17 = puVar14;
LAB_00104a0d:
            do {
              plVar5 = (long *)*puVar17;
              if (plVar5 != plVar4) {
                fVar24 = (*(float *)(plVar5 + 3) - fStack_50) * *(float *)(plVar5 + 5) +
                         (*(float *)((long)plVar5 + 0x14) - (float)local_58._4_4_) *
                         *(float *)((long)plVar5 + 0x24) +
                         (*(float *)(plVar5 + 2) - (float)local_58._0_4_) * *(float *)(plVar5 + 4) +
                         0.0;
                if ((fVar23 < fVar24) &&
                   (fVar32 = *(float *)(plVar5 + 5) * fVar43 +
                             *(float *)((long)plVar5 + 0x24) * fVar42 +
                             *(float *)(plVar5 + 4) * fVar40 + 0.0, fVar32 < _LC61)) {
                  if (_LC62 < fVar32) {
                    plVar22 = plVar5;
                  }
                  puVar17 = puVar17 + 1;
                  fVar23 = (float)((uint)fVar23 & -(uint)(fVar32 <= _LC62) |
                                  ~-(uint)(fVar32 <= _LC62) & (uint)fVar24);
                  if (puVar21 <= puVar17) break;
                  goto LAB_00104a0d;
                }
              }
              puVar17 = puVar17 + 1;
            } while (puVar17 < puVar21);
            if (plVar22 != (long *)0x0) {
              fVar23 = *(float *)(plVar22 + 4);
              fVar24 = *(float *)((long)plVar22 + 0x24);
              fVar32 = *(float *)(plVar22 + 5);
              fVar45 = *(float *)((long)plVar22 + 0x2c);
              fVar25 = fVar24 * fVar40 - fVar42 * fVar23;
              fVar30 = fVar32 * fVar42 - fVar43 * fVar24;
              fVar31 = fVar23 * fVar43 - fVar40 * fVar32;
              auVar33._4_4_ = fVar31;
              auVar33._0_4_ = fVar30;
              auVar33._8_4_ = fVar25;
              auVar33._12_4_ = fVar25;
              auVar29._0_4_ = SQRT(fVar25 * fVar25 + fVar31 * fVar31 + fVar30 * fVar30 + 0.0);
              auVar29._4_4_ = auVar29._0_4_;
              auVar29._8_4_ = auVar29._0_4_;
              auVar29._12_4_ = auVar29._0_4_;
              auVar34 = divps(auVar33,auVar29);
              fVar30 = auVar34._0_4_;
              fVar31 = auVar34._4_4_;
              fVar36 = auVar34._8_4_;
              fVar37 = auVar34._12_4_;
              fVar25 = fStack_50 * fVar36 +
                       (float)local_58._4_4_ * fVar31 + (float)local_58._0_4_ * fVar30 + 0.0;
              fVar38 = fVar32 * *(float *)(plVar4 + 3) +
                       fVar24 * *(float *)((long)plVar4 + 0x14) +
                       *(float *)(plVar4 + 2) * fVar23 + 0.0;
              if (0.0 <= fVar38) {
                fVar38 = 0.0;
              }
              *(float *)(plVar4 + 2) = fVar39 - fVar38 * fVar23;
              *(float *)((long)plVar4 + 0x14) = fVar41 - fVar38 * fVar24;
              *(float *)(plVar4 + 3) = fVar10 - fVar38 * fVar32;
              *(float *)((long)plVar4 + 0x1c) = *(float *)((long)plVar4 + 0x1c) - fVar38 * fVar45;
              fVar39 = fVar43 * *(float *)(plVar22 + 3) +
                       fVar42 * *(float *)((long)plVar22 + 0x14) +
                       fVar40 * *(float *)(plVar22 + 2) + 0.0;
              if (0.0 <= fVar39) {
                fVar39 = 0.0;
              }
              fVar41 = *(float *)(plVar22 + 2) - fVar39 * fVar40;
              fVar42 = *(float *)((long)plVar22 + 0x14) - fVar39 * fVar42;
              fVar43 = *(float *)(plVar22 + 3) - fVar39 * fVar43;
              fVar44 = *(float *)((long)plVar22 + 0x1c) - fVar39 * fVar44;
              *(float *)(plVar22 + 2) = fVar41;
              *(float *)((long)plVar22 + 0x14) = fVar42;
              *(float *)(plVar22 + 3) = fVar43;
              *(float *)((long)plVar22 + 0x1c) = fVar44;
              fVar39 = *(float *)((long)plVar4 + 0x14) * fVar31 +
                       *(float *)(plVar4 + 2) * fVar30 + 0.0 + *(float *)(plVar4 + 3) * fVar36;
              fVar40 = fVar43 * fVar36 + fVar42 * fVar31 + fVar41 * fVar30 + 0.0;
              local_58._0_4_ =
                   (*(float *)(plVar4 + 2) - fVar39 * fVar30) + fVar25 * fVar30 +
                   (fVar41 - fVar40 * fVar30);
              local_58._4_4_ =
                   (*(float *)((long)plVar4 + 0x14) - fVar39 * fVar31) + fVar25 * fVar31 +
                   (fVar42 - fVar40 * fVar31);
              fStack_50 = (*(float *)(plVar4 + 3) - fVar39 * fVar36) + fVar25 * fVar36 +
                          (fVar43 - fVar40 * fVar36);
              fStack_4c = (*(float *)((long)plVar4 + 0x1c) - fVar39 * fVar37) + fVar25 * fVar37 +
                          (fVar44 - fVar40 * fVar37);
            }
          }
          else {
            plVar22 = (long *)0x0;
          }
          plVar5 = *(long **)(param_5 + 0x90);
          if (plVar5 != (long *)0x0) {
            if (puVar19[10] == 0) {
              pcVar6 = *(code **)(*plVar5 + 0x38);
              if (pcVar6 != CharacterContactListener::OnContactSolve) {
                (*pcVar6)(*puVar19,puVar19[1],puVar19[4],puVar19[5],puVar19[2],puVar19[3],local_f8,
                          uStack_f0,plVar5,param_5,puVar19 + 9,puVar19 + 0xb,puVar19[0xd],local_58);
                fVar26 = _LC58;
              }
            }
            else {
              pcVar6 = *(code **)(*plVar5 + 0x40);
              if (pcVar6 != CharacterContactListener::OnCharacterContactSolve) {
                (*pcVar6)(*puVar19,puVar19[1],puVar19[4],puVar19[5],puVar19[2],puVar19[3],local_f8,
                          uStack_f0,plVar5,param_5,puVar19[10],puVar19 + 0xb,puVar19[0xd],local_58);
                fVar26 = _LC58;
              }
            }
          }
          if (param_11 != '\0') {
            fVar26 = (float)(local_dc + 1) * __LC63;
            fVar40 = *(float *)(param_5 + 0xf0) + 0.0;
            fVar42 = *(float *)(param_5 + 0xf4) + 0.0;
            fVar43 = fVar26 + *(float *)(param_5 + 0xf8);
            fVar26 = fVar26 + *(float *)(param_5 + 0xfc);
            JPH::DebugRenderer::DrawPlane
                      (CONCAT44(fVar42,fVar40),CONCAT44(fVar26,fVar43),plVar4[4],plVar4[5],
                       DebugRenderer::sInstance,(undefined4)Color::sCyan);
            if (plVar22 != (long *)0x0) {
              JPH::DebugRenderer::DrawPlane
                        (CONCAT44(fVar42,fVar40),CONCAT44(fVar26,fVar43),plVar22[4],plVar22[5],
                         DebugRenderer::sInstance,(undefined4)Color::sBlue);
            }
            local_f8._4_4_ = fVar28 + fVar42;
            local_f8._0_4_ = fVar27 + fVar40;
            uStack_f0._0_4_ = fVar46 + fVar43;
            uStack_f0._4_4_ = fVar47 + fVar26;
            JPH::DebugRenderer::DrawArrow
                      (CONCAT44(fVar42,fVar40),CONCAT44(fVar26,fVar43),local_f8,uStack_f0,
                       DebugRenderer::sInstance,(undefined4)Color::sGreen);
            JPH::DebugRenderer::DrawArrow
                      (CONCAT44(fVar42,fVar40),CONCAT44(fVar26,fVar43),
                       CONCAT44(fVar42 + (float)local_58._4_4_,fVar40 + (float)local_58._0_4_),
                       DebugRenderer::sInstance,(undefined4)Color::sRed);
            fVar26 = _LC58;
          }
          fVar46 = _LC65;
          bVar8 = _LC65 != *(float *)((long)plVar4 + 0xc);
          bVar9 = *(float *)((long)plVar4 + 0xc) <= _LC65;
          *puVar21 = plVar4;
          _local_f8 = _local_58;
          fVar42 = SUB164(_local_58,0);
          fVar40 = SUB164(_local_58,4);
          fVar47 = SUB164(_local_58,8);
          if ((bVar9 && bVar8) &&
             (fVar47 * fVar47 + fVar40 * fVar40 + fVar42 * fVar42 + 0.0 < fVar46)) break;
          if (*(float *)(plVar4 + 3) * *(float *)(plVar4 + 3) +
              *(float *)(plVar4 + 2) * *(float *)(plVar4 + 2) + 0.0 +
              *(float *)((long)plVar4 + 0x14) * *(float *)((long)plVar4 + 0x14) <= fVar46) {
            if (fVar47 * (float)local_80 +
                (float)((ulong)local_88 >> 0x20) * fVar40 + (float)local_88 * fVar42 + 0.0 < 0.0)
            break;
          }
          else {
            local_88 = plVar4[2];
            local_80 = plVar4[3];
          }
          local_dc = local_dc + 1;
        } while (local_dc < *(uint *)(param_5 + 0xac));
      }
LAB_00104e0d:
      if (puVar14 != (undefined8 *)0x0) {
        (**(code **)(*param_10 + 0x18))(param_10,puVar14,iVar2);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001046c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_10 + 0x18))(param_10,puVar13,iVar12);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::UpdateSupportingContact(bool, JPH::TempAllocator&) */

void __thiscall
JPH::CharacterVirtual::UpdateSupportingContact
          (CharacterVirtual *this,bool param_1,TempAllocator *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  long *plVar5;
  long lVar6;
  Body *pBVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Contact *pCVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  Contact *pCVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  Contact *pCVar24;
  Contact *pCVar25;
  Contact *pCVar26;
  ulong uVar27;
  int iVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  undefined1 local_1a8 [8];
  undefined8 uStack_1a0;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_cc;
  TempAllocator *local_c8;
  undefined1 local_c0 [16];
  long local_b0;
  TempAllocator *local_a8;
  undefined1 local_a0 [16];
  long local_90;
  TempAllocator *local_88;
  undefined1 local_80 [16];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 uStack_4c;
  long local_40;
  
  pCVar20 = *(Contact **)(this + 0x130);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pCVar24 = pCVar20 + *(long *)(this + 0x120) * 0x80;
  pCVar25 = pCVar20;
  if (pCVar24 != pCVar20) {
    do {
      if ((((pCVar20[0x71] == (Contact)0x0) && (pCVar20[0x70] == (Contact)0x0)) &&
          (*(float *)(pCVar20 + 0x40) <= *(float *)(this + 0xb4) &&
           *(float *)(this + 0xb4) != *(float *)(pCVar20 + 0x40))) &&
         ((param_1 ||
          ((*(float *)(this + 0x118) - *(float *)(pCVar20 + 0x18)) * *(float *)(pCVar20 + 0x38) +
           (*(float *)(this + 0x114) - *(float *)(pCVar20 + 0x14)) * *(float *)(pCVar20 + 0x34) +
           *(float *)(pCVar20 + 0x30) * (*(float *)(this + 0x110) - *(float *)(pCVar20 + 0x10)) +
           0.0 <= _LC60)))) {
        cVar14 = ValidateContact(this,pCVar20);
        if ((cVar14 == '\0') || (pCVar20[0x5d] != (Contact)0x0)) {
          pCVar20[0x71] = (Contact)0x1;
        }
        else {
          pCVar20[0x70] = (Contact)0x1;
        }
      }
      pCVar20 = pCVar20 + 0x80;
    } while (pCVar20 != pCVar24);
    pCVar20 = *(Contact **)(this + 0x130);
    pCVar25 = pCVar20 + *(long *)(this + 0x120) * 0x80;
  }
  fVar29 = (float)(__LC2 ^ *(uint *)(this + 0x100));
  fVar33 = (float)(_UNK_0010ca94 ^ *(uint *)(this + 0x104));
  fVar34 = (float)(_UNK_0010ca98 ^ *(uint *)(this + 0x108));
  fVar35 = (float)(_UNK_0010ca9c ^ *(uint *)(this + 0x10c));
  fVar4 = *(float *)(this + 0xf0);
  fVar8 = *(float *)(this + 0xf4);
  fVar9 = *(float *)(this + 0xf8);
  fVar37 = fVar29 + fVar29;
  fVar40 = fVar33 + fVar33;
  fVar41 = (fVar34 + fVar34) * fVar34;
  fVar30 = fVar35 * (fVar34 + fVar34);
  fVar49 = fVar37 * fVar34 + fVar40 * fVar35;
  fVar39 = fVar37 * fVar34 - fVar40 * fVar35;
  fVar43 = fVar34 * fVar40 - fVar37 * fVar35;
  fVar42 = (_LC3 - fVar29 * fVar37) - fVar40 * fVar33;
  fVar35 = fVar37 * fVar35 + fVar34 * fVar40;
  fVar34 = fVar33 * fVar37 + fVar30;
  fVar30 = fVar33 * fVar37 - fVar30;
  fVar33 = (_LC3 - fVar40 * fVar33) - fVar41;
  fVar29 = (_LC3 - fVar41) - fVar29 * fVar37;
  _local_1a8 = ZEXT816(0);
  if (pCVar20 == pCVar25) {
    iVar28 = 0;
    iVar21 = 0;
LAB_00105aee:
    pCVar26 = (Contact *)0x0;
    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
LAB_00105afd:
    plVar17 = PhysicsMaterial::sDefault;
    plVar5 = *(long **)(this + 0x80);
    *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
    if (plVar5 != plVar17) {
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plVar17 = PhysicsMaterial::sDefault;
        if ((int)*plVar1 == 0) {
          if (*(code **)(*plVar5 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
            (*Free)();
            plVar17 = PhysicsMaterial::sDefault;
          }
          else {
            (**(code **)(*plVar5 + 0x18))();
            plVar17 = PhysicsMaterial::sDefault;
          }
        }
      }
      *(long **)(this + 0x80) = plVar17;
      if (plVar17 != (long *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
    }
    *(undefined8 *)(this + 0x88) = 0;
    if (0 < iVar21) goto LAB_0010578d;
    uVar15 = 3;
    if (iVar28 < 1) goto LAB_00105b60;
LAB_0010589e:
    if ((*(float *)(this + 0x118) - *(float *)(pCVar26 + 0x18)) * *(float *)(this + 0x28) +
        (*(float *)(this + 0x114) - *(float *)(pCVar26 + 0x14)) * *(float *)(this + 0x24) +
        *(float *)(this + 0x20) * (*(float *)(this + 0x110) - *(float *)(pCVar26 + 0x10)) + 0.0 <=
        _LC60) {
      lVar6 = *(long *)(this + 0x130);
      local_c0 = (undefined1  [16])0x0;
      local_b0 = 0;
      uVar27 = *(long *)(this + 0x120) * 0x80;
      local_c8 = param_2;
      local_a8 = param_2;
      local_88 = param_2;
      if (uVar27 == 0) {
        lVar18 = 0;
        local_a0 = (undefined1  [16])0x0;
        local_90 = 0;
        DetermineConstraints(this,(Array *)&local_c8,*(float *)(this + 0x138),(Array *)&local_a8);
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
      }
      else {
        lVar18 = (**(code **)(*(long *)param_2 + 0x10))(param_2,uVar27 & 0xffffffff);
        uVar19 = 0;
        do {
          uVar10 = ((undefined8 *)(lVar6 + uVar19))[1];
          *(undefined8 *)(lVar18 + uVar19) = *(undefined8 *)(lVar6 + uVar19);
          ((undefined8 *)(lVar18 + uVar19))[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x10 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x10 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x20 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x20 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x30 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x30 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x40 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x40 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x50 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x50 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x60 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x60 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar2 = (undefined8 *)(lVar6 + 0x70 + uVar19);
          uVar10 = puVar2[1];
          puVar3 = (undefined8 *)(lVar18 + 0x70 + uVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          uVar19 = uVar19 + 0x80;
        } while (uVar27 != uVar19);
        local_a0 = (undefined1  [16])0x0;
        lVar6 = (uVar27 - 0x80 >> 7) + 1;
        local_c0._8_8_ = (long)uVar27 >> 7;
        local_c0._0_8_ = lVar6;
        local_b0 = lVar18;
        local_90 = (**(code **)(*(long *)param_2 + 0x10))(param_2,(int)lVar6 << 7);
        local_a0._8_8_ = lVar6 * 2;
        DetermineConstraints(this,(Array *)&local_c8,*(float *)(this + 0x138),(Array *)&local_a8);
        local_80 = (undefined1  [16])0x0;
        local_70 = (**(code **)(*(long *)param_2 + 0x10))(param_2,(int)lVar6 * 8);
        local_80._8_8_ = lVar6;
      }
      local_1a8._4_4_ = 0.0 - *(float *)(this + 0x24);
      local_1a8._0_4_ = 0.0 - *(float *)(this + 0x20);
      uStack_1a0._0_4_ = 0.0 - *(float *)(this + 0x28);
      uStack_1a0._4_4_ = 0.0 - *(float *)(this + 0x2c);
      SolveConstraints(local_1a8,uStack_1a0,this,&local_a8,&local_88,&local_cc,&local_58,param_2,0);
      uVar16 = 0;
      if (_LC50 <= local_cc) {
        uVar16 = (uint)(*(float *)(this + 0x138) * __LC67 * *(float *)(this + 0x138) * __LC67 <=
                       local_50 * local_50 + local_58 * local_58 + 0.0 + fStack_54 * fStack_54);
      }
      *(uint *)(this + 0x44) = uVar16;
      if (local_70 != 0) {
        (**(code **)(*(long *)local_88 + 0x18))(local_88,local_70,local_80._8_4_ * 8);
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)local_a8 + 0x18))(local_a8,local_90,local_a0._8_4_ << 6);
      }
      if (lVar18 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)param_2 + 0x18))(param_2,lVar18,local_c0._8_4_ << 7);
          return;
        }
        goto LAB_00106014;
      }
    }
    else {
      *(undefined4 *)(this + 0x44) = 1;
    }
  }
  else {
    pCVar26 = (Contact *)0x0;
    pCVar24 = (Contact *)0x0;
    iVar22 = 0;
    iVar28 = 0;
    iVar21 = 0;
    auVar45 = (undefined1  [16])0x0;
    fVar37 = _LC1;
    fVar40 = _LC5;
LAB_0010557d:
    do {
      fVar41 = fVar37;
      if (pCVar20[0x70] != (Contact)0x0) {
        fVar44 = *(float *)(pCVar20 + 0x40);
        fVar46 = *(float *)pCVar20;
        fVar47 = *(float *)(pCVar20 + 4);
        fVar48 = *(float *)(pCVar20 + 8);
        fVar41 = fVar44;
        if (fVar37 <= fVar44) {
          fVar41 = fVar37;
        }
        fVar38 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
        if (fVar44 < fVar37) {
          pCVar26 = pCVar20;
        }
        if ((fVar46 * fVar34 + fVar47 * fVar29 + fVar48 * fVar43 +
            (0.0 - (fVar4 * fVar34 + fVar8 * fVar29 + fVar9 * fVar43))) * *(float *)(this + 0x34) +
            *(float *)(this + 0x30) *
            (fVar46 * fVar33 + fVar47 * fVar30 + fVar48 * fVar49 +
            (0.0 - (fVar4 * fVar33 + fVar8 * fVar30 + fVar9 * fVar49))) + 0.0 +
            (fVar46 * fVar39 + fVar47 * fVar35 + fVar48 * fVar42 +
            (0.0 - (fVar4 * fVar39 + fVar8 * fVar35 + fVar9 * fVar42))) * *(float *)(this + 0x38) +
            *(float *)(this + 0x3c) <= 0.0) {
          fVar37 = fVar38 * *(float *)(pCVar20 + 0x34) +
                   (float)*(undefined8 *)(this + 0x20) * *(float *)(pCVar20 + 0x30) + 0.0 +
                   *(float *)(pCVar20 + 0x38) * *(float *)(this + 0x28);
          auVar36._4_4_ = fVar38;
          auVar36._0_4_ = fVar37;
          auVar36._8_4_ = fVar38;
          auVar36._12_4_ = fVar38;
          pCVar13 = pCVar20;
          if (fVar37 <= fVar40) {
            auVar36._0_4_ = fVar40;
            pCVar13 = pCVar24;
          }
          pCVar24 = pCVar13;
          fVar40 = auVar36._0_4_;
          fVar44 = auVar45._0_4_;
          fVar46 = auVar45._4_4_;
          fVar47 = auVar45._8_4_;
          fVar48 = auVar45._12_4_;
          if ((_LC49 < *(float *)(this + 0x40)) || (*(float *)(this + 0x40) <= fVar37)) {
            iVar21 = iVar21 + 1;
            if (__LC66 <= fVar37) {
              iVar23 = iVar22 + 1;
              local_1a8._4_4_ = (float)local_1a8._4_4_ + *(float *)(pCVar20 + 0x34);
              local_1a8._0_4_ = (float)local_1a8._0_4_ + *(float *)(pCVar20 + 0x30);
              uStack_1a0._0_4_ = (float)uStack_1a0 + *(float *)(pCVar20 + 0x38);
              uStack_1a0._4_4_ = uStack_1a0._4_4_ + *(float *)(pCVar20 + 0x3c);
              if ((pCVar20[0x5c] != (Contact)0x1) ||
                 (lVar6 = *(long *)(this + 0x10), *(float *)(pCVar20 + 0x48) == -NAN))
              goto LAB_0010569f;
              lVar18 = (**(code **)(*(long *)(lVar6 + 0x130) + 0x10))(lVar6 + 0x130,pCVar20 + 0x48);
              uVar27 = (ulong)((uint)*(float *)(pCVar20 + 0x48) & 0x7fffff);
              if ((uVar27 < **(ulong **)(lVar6 + 0x138)) &&
                 (((pBVar7 = *(Body **)((*(ulong **)(lVar6 + 0x138))[2] + uVar27 * 8),
                   ((ulong)pBVar7 & 1) == 0 &&
                   (*(float *)(pCVar20 + 0x48) == *(float *)(pBVar7 + 0x70))) &&
                  (((byte)pBVar7[0x79] & 4) != 0)))) {
                GetAdjustedBodyVelocity(this,pBVar7,(Vec3 *)&local_68,(Vec3 *)&local_58);
                auVar45 = CalculateCharacterGroundVelocity
                                    (*(undefined8 *)pBVar7,*(undefined8 *)(pBVar7 + 8),local_68,
                                     local_60,CONCAT44(fStack_54,local_58),
                                     CONCAT44(uStack_4c,local_50),this);
                local_178 = auVar45._0_4_;
                fStack_174 = auVar45._4_4_;
                fStack_170 = auVar45._8_4_;
                fStack_16c = auVar45._12_4_;
                auVar45._0_4_ = fVar44 + local_178;
                auVar45._4_4_ = fVar46 + fStack_174;
                auVar45._8_4_ = fVar47 + fStack_170;
                auVar45._12_4_ = fVar48 + fStack_16c;
              }
              else {
                auVar45._0_4_ = fVar44 + *(float *)(pCVar20 + 0x10);
                auVar45._4_4_ = fVar46 + *(float *)(pCVar20 + 0x14);
                auVar45._8_4_ = fVar47 + *(float *)(pCVar20 + 0x18);
                auVar45._12_4_ = fVar48 + *(float *)(pCVar20 + 0x1c);
              }
              iVar22 = iVar23;
              if (lVar18 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x130) + 0x18))(lVar6 + 0x130,lVar18);
              }
            }
          }
          else {
            iVar28 = iVar28 + 1;
            if (__LC66 <= fVar37) {
              local_1a8._0_4_ = (float)local_1a8._0_4_ + *(float *)(pCVar20 + 0x30);
              local_1a8._4_4_ = (float)local_1a8._4_4_ + *(float *)(pCVar20 + 0x34);
              uStack_1a0._0_4_ = (float)uStack_1a0 + *(float *)(pCVar20 + 0x38);
              uStack_1a0._4_4_ = uStack_1a0._4_4_ + *(float *)(pCVar20 + 0x3c);
LAB_0010569f:
              iVar22 = iVar22 + 1;
              auVar45._0_4_ = fVar44 + *(float *)(pCVar20 + 0x10);
              auVar45._4_4_ = fVar46 + *(float *)(pCVar20 + 0x14);
              auVar45._8_4_ = fVar47 + *(float *)(pCVar20 + 0x18);
              auVar45._12_4_ = fVar48 + *(float *)(pCVar20 + 0x1c);
              pCVar20 = pCVar20 + 0x80;
              fVar37 = fVar41;
              if (pCVar25 == pCVar20) break;
              goto LAB_0010557d;
            }
          }
        }
      }
      pCVar20 = pCVar20 + 0x80;
      fVar37 = fVar41;
    } while (pCVar25 != pCVar20);
    if (pCVar24 == (Contact *)0x0) {
      pCVar24 = pCVar26;
      if (iVar22 < 1) {
        if (pCVar26 == (Contact *)0x0) goto LAB_00105aee;
        goto LAB_00105818;
      }
LAB_001056ca:
      auVar31._0_4_ =
           SQRT(SUB164(_local_1a8,8) * SUB164(_local_1a8,8) +
                SUB164(_local_1a8,0) * SUB164(_local_1a8,0) + 0.0 +
                SUB164(_local_1a8,4) * SUB164(_local_1a8,4));
      auVar31._4_4_ = auVar31._0_4_;
      auVar31._8_4_ = auVar31._0_4_;
      auVar31._12_4_ = auVar31._0_4_;
      auVar36 = divps(_local_1a8,auVar31);
      auVar32._0_4_ = (float)iVar22;
      auVar32._4_4_ = auVar32._0_4_;
      auVar32._8_4_ = auVar32._0_4_;
      auVar32._12_4_ = auVar32._0_4_;
      auVar45 = divps(auVar45,auVar32);
      *(undefined1 (*) [16])(this + 0x60) = auVar36;
      *(undefined1 (*) [16])(this + 0x70) = auVar45;
      if (pCVar24 == (Contact *)0x0) goto LAB_00105afd;
    }
    else {
      if (0 < iVar22) goto LAB_001056ca;
LAB_00105818:
      uVar10 = *(undefined8 *)(pCVar24 + 0x38);
      uVar11 = *(undefined8 *)(pCVar24 + 0x10);
      uVar12 = *(undefined8 *)(pCVar24 + 0x18);
      *(undefined8 *)(this + 0x60) = *(undefined8 *)(pCVar24 + 0x30);
      *(undefined8 *)(this + 0x68) = uVar10;
      *(undefined8 *)(this + 0x70) = uVar11;
      *(undefined8 *)(this + 0x78) = uVar12;
    }
    uVar10 = *(undefined8 *)pCVar24;
    uVar11 = *(undefined8 *)(pCVar24 + 8);
    plVar5 = *(long **)(pCVar24 + 0x68);
    plVar17 = *(long **)(this + 0x80);
    *(float *)(this + 0x48) = *(float *)(pCVar24 + 0x48);
    fVar4 = *(float *)(pCVar24 + 0x58);
    *(undefined8 *)(this + 0x50) = uVar10;
    *(undefined8 *)(this + 0x58) = uVar11;
    *(float *)(this + 0x4c) = fVar4;
    if (plVar5 != plVar17) {
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          if (*(code **)(*plVar17 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
            (*Free)();
          }
          else {
            (**(code **)(*plVar17 + 0x18))();
          }
        }
      }
      *(long **)(this + 0x80) = plVar5;
      if (plVar5 != (long *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
    }
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(pCVar24 + 0x60);
    if (iVar21 < 1) {
      uVar15 = 2;
      if (0 < iVar28) goto LAB_0010589e;
LAB_00105b60:
      *(undefined4 *)(this + 0x44) = uVar15;
    }
    else {
LAB_0010578d:
      *(undefined4 *)(this + 0x44) = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106014:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::StoreActiveContacts(JPH::Array<JPH::CharacterVirtual::Contact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::Contact> > const&, JPH::TempAllocator&) */

void __thiscall
JPH::CharacterVirtual::StoreActiveContacts
          (CharacterVirtual *this,Array *param_1,TempAllocator *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 *)(this + 0x120) = 0;
  uVar11 = lVar2 * 0x80 >> 7;
  if (*(ulong *)(this + 0x128) < uVar11) {
    uVar7 = (*Reallocate)(*(undefined8 *)(this + 0x130),*(ulong *)(this + 0x128) << 7);
    *(ulong *)(this + 0x128) = uVar11;
    *(undefined8 *)(this + 0x130) = uVar7;
  }
  if (puVar3 != puVar3 + lVar2 * 0x10) {
    lVar8 = *(long *)(this + 0x120);
    lVar4 = *(long *)(this + 0x130);
    puVar9 = puVar3;
    do {
      lVar8 = lVar8 + 1;
      uVar7 = *puVar9;
      uVar5 = puVar9[1];
      *(long *)(this + 0x120) = lVar8;
      puVar10 = puVar9 + 0x10;
      lVar6 = lVar8 * 0x80;
      puVar1 = (undefined8 *)(lVar4 + -0x80 + lVar6);
      *puVar1 = uVar7;
      puVar1[1] = uVar5;
      uVar7 = puVar9[3];
      puVar1 = (undefined8 *)(lVar4 + -0x70 + lVar6);
      *puVar1 = puVar9[2];
      puVar1[1] = uVar7;
      uVar7 = puVar9[5];
      puVar1 = (undefined8 *)(lVar4 + -0x60 + lVar6);
      *puVar1 = puVar9[4];
      puVar1[1] = uVar7;
      uVar7 = puVar9[7];
      puVar1 = (undefined8 *)(lVar4 + -0x50 + lVar6);
      *puVar1 = puVar9[6];
      puVar1[1] = uVar7;
      uVar7 = puVar9[9];
      puVar1 = (undefined8 *)(lVar4 + -0x40 + lVar6);
      *puVar1 = puVar9[8];
      puVar1[1] = uVar7;
      uVar7 = puVar9[0xb];
      puVar1 = (undefined8 *)(lVar4 + -0x30 + lVar6);
      *puVar1 = puVar9[10];
      puVar1[1] = uVar7;
      uVar7 = puVar9[0xd];
      puVar1 = (undefined8 *)(lVar4 + -0x20 + lVar6);
      *puVar1 = puVar9[0xc];
      puVar1[1] = uVar7;
      uVar7 = puVar9[0xf];
      puVar1 = (undefined8 *)(lVar4 + -0x10 + lVar6);
      *puVar1 = puVar9[0xe];
      puVar1[1] = uVar7;
      puVar9 = puVar10;
    } while (puVar3 + lVar2 * 0x10 != puVar10);
  }
  UpdateSupportingContact(this,true,param_2);
  return;
}



/* JPH::CharacterVirtual::SetUserData(unsigned long) */

void __thiscall JPH::CharacterVirtual::SetUserData(CharacterVirtual *this,ulong param_1)

{
  *(ulong *)(this + 0x140) = param_1;
  if (*(int *)(this + 0x148) == -1) {
    return;
  }
  JPH::BodyInterface::SetUserData((BodyID *)(*(long *)(this + 0x10) + 0x158),(ulong)(this + 0x148));
  return;
}



/* JPH::CharacterVirtual::CancelVelocityTowardsSteepSlopes(JPH::Vec3) const */

undefined1  [16]
JPH::CharacterVirtual::CancelVelocityTowardsSteepSlopes
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)param_1;
  fStack_14 = (float)((ulong)param_1 >> 0x20);
  fStack_10 = (float)param_2;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  if ((*(int *)(param_3 + 0x44) != 0) && (*(int *)(param_3 + 0x44) != 3)) {
    lVar3 = *(long *)(param_3 + 0x130);
    lVar4 = *(long *)(param_3 + 0x120) * 0x80 + lVar3;
    for (; lVar4 != lVar3; lVar3 = lVar3 + 0x80) {
      if (*(char *)(lVar3 + 0x70) != '\0') {
        if (*(float *)(param_3 + 0x40) < _LC49) {
          fVar5 = (float)*(undefined8 *)(param_3 + 0x20);
          fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
          if ((float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) * fVar6 +
              (float)*(undefined8 *)(lVar3 + 0x30) * fVar5 + 0.0 +
              (float)*(undefined8 *)(lVar3 + 0x38) * *(float *)(param_3 + 0x28) <
              *(float *)(param_3 + 0x40)) {
            fVar5 = (float)*(undefined8 *)(lVar3 + 0x28) * *(float *)(param_3 + 0x28) +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) * fVar6 +
                    (float)*(undefined8 *)(lVar3 + 0x20) * fVar5 + 0.0;
            fVar8 = *(float *)(lVar3 + 0x20) - fVar5 * *(float *)(param_3 + 0x20);
            fVar9 = *(float *)(lVar3 + 0x24) - fVar5 * *(float *)(param_3 + 0x24);
            fVar10 = *(float *)(lVar3 + 0x28) - fVar5 * *(float *)(param_3 + 0x28);
            fVar6 = fStack_10 * fVar10 + fStack_14 * fVar9 + local_18 * fVar8 + 0.0;
            if (fVar6 < 0.0) {
              auVar7._0_4_ = fVar6 * fVar8;
              auVar7._4_4_ = fVar6 * fVar9;
              auVar7._8_4_ = fVar6 * fVar10;
              auVar7._12_4_ =
                   fVar6 * (*(float *)(lVar3 + 0x2c) - fVar5 * *(float *)(param_3 + 0x2c));
              auVar11._0_4_ = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
              auVar11._4_4_ = auVar11._0_4_;
              auVar11._8_4_ = auVar11._0_4_;
              auVar11._12_4_ = auVar11._0_4_;
              auVar7 = divps(auVar7,auVar11);
              local_18 = local_18 - auVar7._0_4_;
              fStack_14 = fStack_14 - auVar7._4_4_;
              fStack_10 = fStack_10 - auVar7._8_4_;
              fStack_c = fStack_c - auVar7._12_4_;
            }
          }
        }
      }
    }
    auVar2._4_4_ = fStack_14;
    auVar2._0_4_ = local_18;
    auVar2._8_4_ = fStack_10;
    auVar2._12_4_ = fStack_c;
    return auVar2;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* JPH::CharacterVirtual::RefreshContacts(JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter
   const&, JPH::BodyFilter const&, JPH::ShapeFilter const&, JPH::TempAllocator&) */

void __thiscall
JPH::CharacterVirtual::RefreshContacts
          (CharacterVirtual *this,BroadPhaseLayerFilter *param_1,ObjectLayerFilter *param_2,
          BodyFilter *param_3,ShapeFilter *param_4,TempAllocator *param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  void *__dest;
  long in_FS_OFFSET;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 local_88 [16];
  TempAllocator *local_68;
  undefined1 local_60 [16];
  void *local_50;
  long local_40;
  
  iVar1 = *(int *)(this + 0xbc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  local_60 = (undefined1  [16])0x0;
  local_68 = param_5;
  if (iVar1 != 0) {
    __dest = (void *)(**(code **)(*(long *)param_5 + 0x10))(param_5,iVar1 << 7);
    if (local_50 != (void *)0x0) {
      memmove(__dest,local_50,local_60._0_8_ << 7);
      (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,local_60._8_4_ << 7);
    }
    local_60._8_4_ = iVar1;
    local_60._12_4_ = 0;
    local_50 = __dest;
  }
  local_88 = (undefined1  [16])0x0;
  fVar4 = *(float *)(this + 0x118) * *(float *)(this + 0x118) +
          *(float *)(this + 0x110) * *(float *)(this + 0x110) + 0.0 +
          *(float *)(this + 0x114) * *(float *)(this + 0x114);
  if (_LC21 < fVar4) {
    auVar5._0_4_ = SQRT(fVar4);
    auVar5._4_4_ = auVar5._0_4_;
    auVar5._8_4_ = auVar5._0_4_;
    auVar5._12_4_ = auVar5._0_4_;
    local_88 = divps(*(undefined1 (*) [16])(this + 0x110),auVar5);
  }
  GetContactsAtPosition
            (*(CharacterVirtual **)(this + 0xf0),*(undefined8 *)(this + 0xf8),local_88._0_8_,
             local_88._8_8_,this,*(undefined8 *)(this + 0x18),(Array *)&local_68,param_1,param_2,
             param_3,param_4);
  StoreActiveContacts(this,(Array *)&local_68,param_5);
  if (local_50 != (void *)0x0) {
    uVar3 = local_60._8_4_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,uVar3 << 7);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::UpdateGroundVelocity() */

void __thiscall JPH::CharacterVirtual::UpdateGroundVelocity(CharacterVirtual *this)

{
  long lVar1;
  Body *pBVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  lVar1 = *(long *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x48) != -1) {
    lVar3 = (**(code **)(*(long *)(lVar1 + 0x130) + 0x10))(lVar1 + 0x130,this + 0x48);
    uVar4 = (ulong)(*(uint *)(this + 0x48) & 0x7fffff);
    if (uVar4 < **(ulong **)(lVar1 + 0x138)) {
      pBVar2 = *(Body **)((*(ulong **)(lVar1 + 0x138))[2] + uVar4 * 8);
      if (((((ulong)pBVar2 & 1) == 0) && (*(uint *)(this + 0x48) == *(uint *)(pBVar2 + 0x70))) &&
         (((byte)pBVar2[0x79] & 4) != 0)) {
        GetAdjustedBodyVelocity(this,pBVar2,(Vec3 *)&local_58,(Vec3 *)&local_48);
        auVar5 = CalculateCharacterGroundVelocity
                           (*(undefined8 *)pBVar2,*(undefined8 *)(pBVar2 + 8),local_58,local_50,
                            local_48,local_40,*(undefined4 *)(this + 0x138),this);
        *(undefined1 (*) [16])(this + 0x70) = auVar5;
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001065d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar1 + 0x130) + 0x18))(lVar1 + 0x130,lVar3);
        return;
      }
      goto LAB_0010665d;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010665d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::MoveToContact(JPH::Vec3, JPH::CharacterVirtual::Contact const&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&,
   JPH::ShapeFilter const&, JPH::TempAllocator&) */

void JPH::CharacterVirtual::MoveToContact
               (undefined8 param_1,undefined8 param_2,CharacterVirtual *param_3,Contact *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
               TempAllocator *param_9)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 local_98 [16];
  undefined2 local_6a;
  TempAllocator *local_68;
  undefined1 local_60 [16];
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0xf0) = param_1;
  *(undefined8 *)(param_3 + 0xf8) = param_2;
  if (*(int *)(param_3 + 0x148) != -1) {
    lVar3 = *(long *)(param_3 + 0x10);
    auVar14 = GetInnerBodyPosition(param_3);
    JPH::BodyInterface::SetPositionAndRotation
              (auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(param_3 + 0x100),
               *(undefined8 *)(param_3 + 0x108),lVar3 + 0x158,param_3 + 0x148,1);
  }
  local_6a = 0x101;
  ContactAdded(param_3,param_4,(CharacterContactSettings *)&local_6a);
  local_68 = param_9;
  local_50 = (undefined8 *)0x0;
  iVar1 = *(int *)(param_3 + 0xbc) + 1;
  local_60 = (undefined1  [16])0x0;
  if (iVar1 != 0) {
    puVar10 = (undefined8 *)(**(code **)(*(long *)param_9 + 0x10))(param_9,iVar1 * 0x80);
    if (local_50 != (undefined8 *)0x0) {
      memmove(puVar10,local_50,local_60._0_8_ << 7);
      (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,local_60._8_4_ << 7);
    }
    local_60._8_4_ = iVar1;
    local_60._12_4_ = 0;
    local_50 = puVar10;
  }
  local_98 = (undefined1  [16])0x0;
  fVar13 = *(float *)(param_3 + 0x118) * *(float *)(param_3 + 0x118) +
           *(float *)(param_3 + 0x110) * *(float *)(param_3 + 0x110) + 0.0 +
           *(float *)(param_3 + 0x114) * *(float *)(param_3 + 0x114);
  if (_LC21 < fVar13) {
    auVar14._0_4_ = SQRT(fVar13);
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_4_ = auVar14._0_4_;
    auVar14._12_4_ = auVar14._0_4_;
    local_98 = divps(*(undefined1 (*) [16])(param_3 + 0x110),auVar14);
  }
  GetContactsAtPosition
            (*(CharacterVirtual **)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0xf8),local_98._0_8_,
             local_98._8_8_,param_3,*(undefined8 *)(param_3 + 0x18),(Array *)&local_68,param_5,
             param_6,param_7);
  puVar10 = local_50 + local_60._0_8_ * 0x10;
  if (puVar10 != local_50) {
    uVar2 = *(uint *)(param_4 + 0x48);
    param_8 = (ulong)uVar2;
    puVar9 = local_50;
    bVar8 = false;
    do {
      while ((bVar5 = bVar8, *(uint *)(puVar9 + 9) != uVar2 ||
             (*(int *)(puVar9 + 0xb) != *(int *)(param_4 + 0x58)))) {
        puVar9 = puVar9 + 0x10;
        bVar8 = bVar5;
        if (puVar9 == puVar10) goto LAB_00106840;
      }
      *(undefined1 *)(puVar9 + 0xe) = 1;
      puVar9 = puVar9 + 0x10;
      bVar5 = true;
      bVar8 = true;
    } while (puVar9 != puVar10);
LAB_00106840:
    if (bVar5) goto LAB_00106849;
  }
  uVar12 = local_60._0_8_ + 1;
  if ((ulong)local_60._8_8_ < uVar12) {
    uVar11 = uVar12;
    if (uVar12 <= (ulong)(local_60._8_8_ * 2)) {
      uVar11 = local_60._8_8_ * 2;
    }
    puVar9 = (undefined8 *)
             (**(code **)(*(long *)local_68 + 0x10))(local_68,(int)uVar11 << 7,puVar10,param_8);
    if (local_50 != (undefined8 *)0x0) {
      memmove(puVar9,local_50,local_60._0_8_ << 7);
      (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,local_60._8_4_ << 7);
    }
    uVar12 = local_60._0_8_ + 1;
    puVar10 = puVar9 + local_60._0_8_ * 0x10;
    local_50 = puVar9;
    local_60._8_8_ = uVar11;
  }
  uVar4 = *(undefined8 *)(param_4 + 8);
  local_60._0_8_ = uVar12;
  *puVar10 = *(undefined8 *)param_4;
  puVar10[1] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  puVar10[2] = *(undefined8 *)(param_4 + 0x10);
  puVar10[3] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x28);
  puVar10[4] = *(undefined8 *)(param_4 + 0x20);
  puVar10[5] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x38);
  puVar10[6] = *(undefined8 *)(param_4 + 0x30);
  puVar10[7] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x48);
  puVar10[8] = *(undefined8 *)(param_4 + 0x40);
  puVar10[9] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x58);
  puVar10[10] = *(undefined8 *)(param_4 + 0x50);
  puVar10[0xb] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x68);
  puVar10[0xc] = *(undefined8 *)(param_4 + 0x60);
  puVar10[0xd] = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x78);
  puVar10[0xe] = *(undefined8 *)(param_4 + 0x70);
  puVar10[0xf] = uVar4;
  *(undefined1 *)(puVar10 + 0xe) = 1;
LAB_00106849:
  StoreActiveContacts(param_3,(Array *)&local_68,param_9);
  if (*(int *)(param_3 + 0x148) != -1) {
    lVar3 = *(long *)(param_3 + 0x10);
    auVar14 = GetInnerBodyPosition(param_3);
    JPH::BodyInterface::SetPositionAndRotation
              (auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(param_3 + 0x100),
               *(undefined8 *)(param_3 + 0x108),lVar3 + 0x158,param_3 + 0x148,1);
  }
  if (local_50 != (undefined8 *)0x0) {
    uVar7 = local_60._8_4_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_60._8_8_;
    local_60 = auVar6 << 0x40;
    (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,uVar7 << 7);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::CharacterVirtual::SetShape(JPH::Shape const*, float, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&,
   JPH::TempAllocator&) */

ulong __thiscall
JPH::CharacterVirtual::SetShape
          (CharacterVirtual *this,Shape *param_1,float param_2,BroadPhaseLayerFilter *param_3,
          ObjectLayerFilter *param_4,BodyFilter *param_5,ShapeFilter *param_6,TempAllocator *param_7
          )

{
  Shape *pSVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  void *pvVar6;
  void *pvVar7;
  Shape *pSVar8;
  BroadPhaseLayerFilter *unaff_R12;
  long in_FS_OFFSET;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  TempAllocator *local_68;
  undefined1 local_60 [16];
  void *local_50;
  long local_40;
  
  pSVar8 = *(Shape **)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar8 == (Shape *)0x0) {
    if (param_1 != (Shape *)0x0) {
      *(Shape **)(this + 0x18) = param_1;
LAB_00106d59:
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    if (*(long *)(this + 0x10) != 0) {
      if ((param_1 != (Shape *)0x0) && (param_1 != pSVar8)) {
        if (_LC1 <= param_2) {
LAB_00106d30:
          LOCK();
          pSVar1 = pSVar8 + 8;
          *(int *)pSVar1 = *(int *)pSVar1 + -1;
          UNLOCK();
          if (*(int *)pSVar1 == 0) {
            (**(code **)(*(long *)pSVar8 + 8))();
          }
        }
        else {
          local_68 = param_7;
          iVar2 = *(int *)(this + 0xbc);
          local_60 = (undefined1  [16])0x0;
          local_50 = (void *)0x0;
          if (iVar2 != 0) {
            uStack_a0 = 0x106c8c;
            pvVar7 = (void *)(**(code **)(*(long *)param_7 + 0x10))(param_7,iVar2 << 7);
            if (local_50 != (void *)0x0) {
              memmove(pvVar7,local_50,local_60._0_8_ << 7);
              uStack_a0 = 0x106ce4;
              (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,local_60._8_4_ << 7);
            }
            local_60._8_4_ = iVar2;
            local_60._12_4_ = 0;
            local_50 = pvVar7;
          }
          local_98 = (undefined1  [16])0x0;
          fVar9 = *(float *)(this + 0x118) * *(float *)(this + 0x118) +
                  *(float *)(this + 0x114) * *(float *)(this + 0x114) +
                  *(float *)(this + 0x110) * *(float *)(this + 0x110) + 0.0;
          if (_LC21 < fVar9) {
            auVar10._0_4_ = SQRT(fVar9);
            auVar10._4_4_ = auVar10._0_4_;
            auVar10._8_4_ = auVar10._0_4_;
            auVar10._12_4_ = auVar10._0_4_;
            local_98 = divps(*(undefined1 (*) [16])(this + 0x110),auVar10);
          }
          GetContactsAtPosition
                    (*(CharacterVirtual **)(this + 0xf0),*(undefined8 *)(this + 0xf8),local_98._0_8_
                     ,local_98._8_8_,this,param_1,(Array *)&local_68,param_3,param_4,param_5,param_6
                    );
          pvVar7 = (void *)(local_60._0_8_ * 0x80 + (long)local_50);
          if (pvVar7 != local_50) {
            pvVar6 = local_50;
            do {
              if ((*(float *)((long)pvVar6 + 0x40) <= (float)((uint)param_2 ^ _LC8) &&
                   (float)((uint)param_2 ^ _LC8) != *(float *)((long)pvVar6 + 0x40)) &&
                 (param_3 = (BroadPhaseLayerFilter *)(ulong)*(byte *)((long)pvVar6 + 0x5d),
                 *(byte *)((long)pvVar6 + 0x5d) == 0)) {
                if (local_50 != (void *)0x0) {
                  uVar5 = local_60._8_4_;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_60._8_8_;
                  local_60 = auVar4 << 0x40;
                  (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,uVar5 << 7,uStack_a0);
                }
                goto LAB_00106c26;
              }
              pvVar6 = (void *)((long)pvVar6 + 0x80);
            } while (pvVar7 != pvVar6);
          }
          StoreActiveContacts(this,(Array *)&local_68,param_7);
          if (local_50 != (void *)0x0) {
            uVar5 = local_60._8_4_;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            (**(code **)(*(long *)local_68 + 0x18))(local_68,local_50,uVar5 << 7);
          }
          pSVar8 = *(Shape **)(this + 0x18);
          unaff_R12 = param_3;
          if (param_1 == pSVar8) goto LAB_00106c1f;
          if (pSVar8 != (Shape *)0x0) goto LAB_00106d30;
        }
        *(Shape **)(this + 0x18) = param_1;
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
        pSVar8 = *(Shape **)(this + 0x18);
      }
LAB_00106c1f:
      param_3 = (BroadPhaseLayerFilter *)CONCAT71((int7)((ulong)unaff_R12 >> 8),param_1 == pSVar8);
      goto LAB_00106c26;
    }
    if (param_1 != pSVar8) {
      LOCK();
      pSVar1 = pSVar8 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)pSVar8 + 8))();
      }
      *(Shape **)(this + 0x18) = param_1;
      if (param_1 != (Shape *)0x0) goto LAB_00106d59;
    }
  }
  param_3 = (BroadPhaseLayerFilter *)0x1;
LAB_00106c26:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)param_3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::SetInnerBodyShape(JPH::Shape const*) */

void __thiscall JPH::CharacterVirtual::SetInnerBodyShape(CharacterVirtual *this,Shape *param_1)

{
  JPH::BodyInterface::SetShape(*(long *)(this + 0x10) + 0x158,this + 0x148,param_1,0,1);
  return;
}



/* JPH::CharacterVirtual::CanWalkStairs(JPH::Vec3) const */

char JPH::CharacterVirtual::CanWalkStairs(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)((ulong)param_1 >> 0x20);
  if (*(uint *)(param_3 + 0x44) < 2) {
    fVar3 = param_2 * *(float *)(param_3 + 0x28) +
            fVar5 * *(float *)(param_3 + 0x24) + (float)param_1 * *(float *)(param_3 + 0x20) + 0.0;
    fVar4 = (float)param_1 - fVar3 * *(float *)(param_3 + 0x20);
    fVar5 = fVar5 - fVar3 * *(float *)(param_3 + 0x24);
    param_2 = param_2 - fVar3 * *(float *)(param_3 + 0x28);
    if (_LC58 < param_2 * param_2 + fVar4 * fVar4 + 0.0 + fVar5 * fVar5) {
      lVar1 = *(long *)(param_3 + 0x130);
      lVar2 = *(long *)(param_3 + 0x120) * 0x80 + lVar1;
      for (; lVar2 != lVar1; lVar1 = lVar1 + 0x80) {
        if (*(char *)(lVar1 + 0x70) != '\0') {
          if ((((param_2 - *(float *)(lVar1 + 0x18)) * *(float *)(lVar1 + 0x38) +
                (fVar5 - *(float *)(lVar1 + 0x14)) * *(float *)(lVar1 + 0x34) +
                (fVar4 - *(float *)(lVar1 + 0x10)) * *(float *)(lVar1 + 0x30) + 0.0 < 0.0) &&
              (*(float *)(param_3 + 0x40) < _LC49)) &&
             (*(float *)(lVar1 + 0x38) * *(float *)(param_3 + 0x28) +
              *(float *)(lVar1 + 0x34) * *(float *)(param_3 + 0x24) +
              *(float *)(lVar1 + 0x30) * *(float *)(param_3 + 0x20) + 0.0 <
              *(float *)(param_3 + 0x40))) {
            return *(char *)(lVar1 + 0x70);
          }
        }
      }
    }
  }
  return '\0';
}



/* JPH::CharacterVirtual::Contact::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::CharacterVirtual::Contact::SaveState(Contact *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x10,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x20,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x30,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x40,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x44,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x48,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x58,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x5c,1);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x70,1);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x71,1);
                    /* WARNING: Could not recover jumptable at 0x0010702a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x72,1);
  return;
}



/* JPH::CharacterVirtual::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::CharacterVirtual::SaveState(CharacterVirtual *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  long lVar2;
  long lVar3;
  Contact *this_00;
  Contact *pCVar4;
  int iVar5;
  char cVar6;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pSVar1 = param_1 + 8;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CharacterBase::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xf0,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x100,0x10);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x110,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x138,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x13c,1);
  lVar2 = *(long *)(this + 0x130);
  local_24 = 0;
  lVar3 = *(long *)(this + 0x120) * 0x80 + lVar2;
  if (lVar3 != lVar2) {
    cVar6 = '\0';
    iVar5 = 0;
    do {
      if (*(char *)(lVar2 + 0x70) != '\0') {
        iVar5 = iVar5 + 1;
        cVar6 = *(char *)(lVar2 + 0x70);
      }
      lVar2 = lVar2 + 0x80;
    } while (lVar2 != lVar3);
    if (cVar6 != '\0') {
      local_24 = iVar5;
    }
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,&local_24,4);
  this_00 = *(Contact **)(this + 0x130);
  pCVar4 = this_00 + *(long *)(this + 0x120) * 0x80;
  for (; pCVar4 != this_00; this_00 = this_00 + 0x80) {
    while (this_00[0x70] == (Contact)0x0) {
      this_00 = this_00 + 0x80;
      if (this_00 == pCVar4) goto LAB_00107173;
    }
    Contact::SaveState(this_00,param_1);
  }
LAB_00107173:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::Contact::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::CharacterVirtual::Contact::RestoreState(Contact *this,StateRecorder *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x58,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x5c,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x71,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x72,1);
  uVar1 = PhysicsMaterial::sDefault;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = uVar1;
  return;
}



/* JPH::CharacterVirtual::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::CharacterVirtual::RestoreState(CharacterVirtual *this,StateRecorder *param_1)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  uint uVar3;
  Contact *pCVar4;
  long lVar5;
  Contact *this_00;
  Contact *pCVar6;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CharacterBase::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xf0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x100,0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x110,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x138,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x13c,1);
  uVar2 = *(ulong *)(this + 0x120);
  if (param_1[0x10] != (StateRecorder)0x0) {
    uVar3 = (int)uVar2 - 1;
    if (-1 < (int)uVar3) {
      lVar5 = (long)(int)uVar3 << 7;
      lVar1 = ((long)(int)uVar2 - (ulong)uVar3) * 0x80 + -0x100;
      do {
        while( true ) {
          __dest = (void *)(*(long *)(this + 0x130) + lVar5);
          if (*(char *)((long)__dest + 0x70) != '\0') break;
          if ((lVar5 >> 7) + 1U < uVar2) {
            memmove(__dest,(void *)(*(long *)(this + 0x130) + 0x80 + lVar5),
                    ((uVar2 - 1) - (lVar5 >> 7)) * 0x80);
            uVar2 = *(ulong *)(this + 0x120);
          }
          uVar2 = uVar2 - 1;
          lVar5 = lVar5 + -0x80;
          *(ulong *)(this + 0x120) = uVar2;
          if (lVar1 == lVar5) goto LAB_001073c8;
        }
        lVar5 = lVar5 + -0x80;
      } while (lVar1 != lVar5);
    }
  }
LAB_001073c8:
  local_34 = (uint)uVar2;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  uVar2 = (ulong)local_34;
  if (*(ulong *)(this + 0x128) < uVar2) {
    this_00 = (Contact *)
              (*Reallocate)(*(undefined8 *)(this + 0x130),*(ulong *)(this + 0x128) << 7,uVar2 << 7);
    *(ulong *)(this + 0x128) = uVar2;
    *(Contact **)(this + 0x130) = this_00;
  }
  else {
    this_00 = *(Contact **)(this + 0x130);
  }
  pCVar6 = this_00 + uVar2 * 0x80;
  for (pCVar4 = this_00 + *(long *)(this + 0x120) * 0x80; pCVar4 < pCVar6; pCVar4 = pCVar4 + 0x80) {
    pCVar4[0x72] = (Contact)0x1;
    *(undefined4 *)(pCVar4 + 0x48) = 0xffffffff;
    *(undefined8 *)(pCVar4 + 0x50) = 0;
    *(undefined4 *)(pCVar4 + 0x58) = 0xffffffff;
    *(undefined2 *)(pCVar4 + 0x70) = 0;
  }
  *(ulong *)(this + 0x120) = uVar2;
  for (; pCVar6 != this_00; this_00 = this_00 + 0x80) {
    Contact::RestoreState(this_00,param_1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   JPH::sCorrectFractionForCharacterPadding<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,
   32u> > > >(JPH::Shape const*, JPH::Mat44 const&, JPH::Vec3, JPH::Vec3,
   JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3, 32u> > > const&,
   float&) */

bool __thiscall
JPH::
sCorrectFractionForCharacterPadding<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,32u>>>>
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,JPH *this,float *param_1,
          undefined8 param_2,undefined8 param_7)

{
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
  bool bVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_11c8;
  undefined8 local_1198;
  undefined8 *local_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined1 local_1138 [4];
  float afStack_1134 [3];
  undefined8 local_1128;
  ulong uStack_1120;
  undefined1 local_1118 [16];
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined4 local_1078;
  float local_1068 [1042];
  long local_20;
  
  local_11c8 = param_3;
code_r0x001074f0:
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x18] == (JPH)0x0) {
    local_1148 = (**(code **)(*(long *)this + 0x130))(local_11c8,this,1,local_1068);
    local_1188 = *(undefined8 *)param_1;
    uStack_1180 = *(undefined8 *)(param_1 + 2);
    local_1158 = *(undefined8 *)(param_1 + 0xc);
    uStack_1150 = *(undefined8 *)(param_1 + 0xe);
    local_1178 = *(undefined8 *)(param_1 + 4);
    uStack_1170 = *(undefined8 *)(param_1 + 6);
    local_1190 = &local_1188;
    local_1168 = *(undefined8 *)(param_1 + 8);
    uStack_1160 = *(undefined8 *)(param_1 + 10);
    local_1078 = 0;
    local_1198 = param_2;
    bVar13 = GJKClosestPoint::
             CastRay<JPH::MinkowskiDifference<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,32u>>>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>>
                       (0,0,param_1_00,param_2_00,local_1138,&local_1198,param_7);
  }
  else {
    local_11c8._4_4_ = (float)((ulong)local_11c8 >> 0x20);
    if (this[0x19] == (JPH)0x9) {
      fVar14 = (float)*(long *)(this + 0x40);
      fVar17 = (float)*(long *)(this + 0x48);
      fVar15 = (float)((ulong)*(long *)(this + 0x40) >> 0x20);
      fVar21 = fVar14 + fVar14;
      lVar16 = 0;
      fVar22 = fVar15 + fVar15;
      fVar18 = (float)((ulong)*(long *)(this + 0x48) >> 0x20);
      fVar20 = fVar17 * (fVar17 + fVar17);
      fVar19 = fVar18 * (fVar17 + fVar17);
      unique0x10000040 = fVar15 * fVar21 + fVar19;
      local_1138 = (_LC3 - fVar15 * fVar22) - fVar20;
      unique0x10000044 = fVar17 * fVar21 - fVar22 * fVar18;
      unique0x10000048 = 0;
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      fVar5 = param_1[4];
      fVar6 = param_1[5];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      local_1118._0_4_ = fVar17 * fVar21 + fVar22 * fVar18;
      local_1128 = CONCAT44((_LC3 - fVar20) - fVar14 * fVar21,fVar15 * fVar21 - fVar19);
      uStack_1120 = (ulong)(uint)(fVar21 * fVar18 + fVar17 * fVar22);
      fVar19 = param_1[8];
      fVar20 = param_1[9];
      fVar9 = param_1[10];
      fVar10 = param_1[0xb];
      local_1118._4_4_ = fVar17 * fVar22 - fVar21 * fVar18;
      local_1118._8_4_ = (_LC3 - fVar14 * fVar21) - fVar15 * fVar22;
      local_1118._12_4_ = 0;
      fVar14 = param_1[0xc];
      fVar15 = param_1[0xd];
      fVar17 = param_1[0xe];
      fVar18 = param_1[0xf];
      local_1108 = __LC71;
      uStack_1100 = CONCAT44(_LC3,_UNK_0010caf8);
      do {
        fVar21 = *(float *)(local_1138 + lVar16);
        fVar22 = *(float *)(local_1138 + lVar16 + 4);
        fVar11 = *(float *)(local_1138 + lVar16 + 8);
        fVar12 = *(float *)(local_1138 + lVar16 + 0xc);
        *(float *)((long)local_1068 + lVar16) =
             fVar12 * fVar14 + fVar21 * fVar1 + fVar22 * fVar5 + fVar11 * fVar19;
        *(float *)((long)local_1068 + lVar16 + 4) =
             fVar12 * fVar15 + fVar21 * fVar2 + fVar22 * fVar6 + fVar11 * fVar20;
        *(float *)((long)local_1068 + lVar16 + 8) =
             fVar12 * fVar17 + fVar21 * fVar3 + fVar22 * fVar7 + fVar11 * fVar9;
        *(float *)((long)local_1068 + lVar16 + 0xc) =
             fVar12 * fVar18 + fVar21 * fVar4 + fVar22 * fVar8 + fVar11 * fVar10;
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x40);
      bVar13 = sCorrectFractionForCharacterPadding<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,32u>>>>
                         (*(long *)(this + 0x20),local_1068,param_2,param_7);
      goto LAB_001075e4;
    }
    bVar13 = false;
    if (this[0x19] == (JPH)0xa) {
      local_11c8 = CONCAT44(local_11c8._4_4_ * *(float *)(this + 0x34),
                            (float)local_11c8 * *(float *)(this + 0x30));
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto code_r0x00107643;
      goto LAB_00107a8a;
    }
  }
LAB_001075e4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar13;
  }
LAB_00107a8a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00107643:
  this = *(JPH **)(this + 0x20);
  goto code_r0x001074f0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::GetFirstContactForSweep(JPH::Vec3, JPH::Vec3,
   JPH::CharacterVirtual::Contact&, JPH::Array<JPH::CharacterVirtual::IgnoredContact,
   JPH::STLTempAllocator<JPH::CharacterVirtual::IgnoredContact> > const&, JPH::BroadPhaseLayerFilter
   const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&) const */

undefined8
JPH::CharacterVirtual::GetFirstContactForSweep
          (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  JPH *pJVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  float fVar13;
  float fVar14;
  undefined8 in_XMM3_Qa;
  float fVar15;
  undefined1 auVar16 [12];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_578;
  undefined8 uStack_570;
  float local_558;
  float fStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  float fStack_534;
  BodyID *local_510;
  BodyID **local_508;
  float local_500;
  undefined **local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined2 local_4d8 [2];
  undefined8 local_4d4;
  undefined1 local_4c8 [16];
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined2 local_4b6;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  ulong uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined8 local_408;
  ulong uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  float fStack_3a4;
  int iStack_3a0;
  undefined4 uStack_39c;
  long local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined7 uStack_380;
  undefined1 uStack_379;
  undefined2 uStack_378;
  undefined1 uStack_376;
  undefined **local_368;
  float local_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  JPH *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  long lStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 *local_2f8;
  long *local_2e8 [2];
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  ulong uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  JPH *local_288;
  undefined8 local_280;
  float local_258;
  float fStack_254;
  float fStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  byte bStack_21c;
  long local_40;
  
  pJVar6 = in_XMM2._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  fVar15 = (float)in_XMM3_Qa * (float)in_XMM3_Qa +
           in_XMM2._4_4_ * in_XMM2._4_4_ + in_XMM2._0_4_ * in_XMM2._0_4_ + 0.0;
  if (fVar15 < _LC65) goto LAB_00107b2d;
  GetCenterOfMassTransform(&local_4a8,param_1,*(undefined8 *)(param_1 + 0x18));
  uVar2 = uStack_470;
  uVar5 = local_478;
  local_4c8 = (undefined1  [16])0x0;
  local_4d4 = __LC60;
  local_4b8 = *(undefined1 *)(param_1 + 0xa0);
  local_4b6 = 1;
  fVar15 = *(float *)(param_1 + 0xb8) / SQRT(fVar15);
  local_318 = *(undefined8 *)(param_1 + 0x10);
  local_4d8[0] = 0x100;
  local_4f0 = *(undefined4 *)(param_1 + 0x148);
  local_368 = &PTR__ContactCastCollector_0010c9b8;
  local_2f8 = &local_3e8;
  local_4f8 = &PTR__IgnoreSingleBodyFilterChained_0010c8e8;
  uStack_378 = 0;
  local_4b7 = 0;
  iStack_3a0 = -1;
  local_398 = 0;
  uStack_390 = 0xffffffff;
  uStack_376 = 1;
  local_358 = 0;
  fStack_3a4 = _LC3 + fVar15;
  local_348 = local_478;
  uStack_340 = uStack_470;
  local_328 = *(undefined8 *)(param_1 + 0x20);
  uStack_320 = *(undefined8 *)(param_1 + 0x28);
  plVar8 = *(long **)(param_1 + 0x18);
  local_308 = 0;
  local_4e8 = param_6;
  local_360 = fStack_3a4;
  local_338 = pJVar6;
  local_330 = in_XMM3_Qa;
  lStack_310 = param_1;
  local_300 = param_3;
  (**(code **)(*plVar8 + 0x30))(0x3f8000003f800000,(BodyID *)&local_258,plVar8,&local_4a8);
  local_2c8 = local_4a8;
  uStack_2c0 = uStack_4a0;
  local_2b8 = local_498;
  uStack_2b0 = uStack_490;
  local_298 = local_478;
  uStack_290 = uStack_470;
  local_2a8 = local_488;
  uStack_2a0 = uStack_480;
  local_2d8 = _LC3;
  fStack_2d4 = _LC3;
  fStack_2d0 = _LC3;
  fStack_2cc = _LC3;
  local_2e8[0] = plVar8;
  local_288 = pJVar6;
  local_280 = in_XMM3_Qa;
  JPH::NarrowPhaseQuery::CastShape
            (uVar5,uVar2,*(long *)(param_1 + 0x10) + 0x180,local_2e8,local_4d8,&local_368,param_4,
             param_5,&local_4f8,param_7);
  plVar8 = *(long **)(param_1 + 0x98);
  if (plVar8 != (long *)0x0) {
    local_358 = 0;
    (**(code **)(*plVar8 + 0x18))
              (pJVar6,in_XMM3_Qa,uVar5,uVar2,plVar8,param_1,&local_4a8,local_4d8,&local_368);
  }
  if ((iStack_3a0 == -1) && (local_398 == 0)) {
    uVar5 = 0;
    goto LAB_00107b2d;
  }
  param_2[2] = local_3d8;
  param_2[3] = uStack_3d0;
  *param_2 = local_3e8;
  param_2[1] = uStack_3e0;
  param_2[0xc] = local_388;
  param_2[0xd] = CONCAT17(uStack_379,uStack_380);
  *(uint *)((long)param_2 + 0x6f) = CONCAT13(uStack_376,CONCAT21(uStack_378,uStack_379));
  local_440 = _LC74;
  param_2[4] = local_3c8;
  param_2[5] = uStack_3c0;
  fVar17 = *(float *)(param_1 + 0xb8);
  uStack_438 = 0xffffffff3f800000;
  param_2[6] = local_3b8;
  param_2[7] = uStack_3b0;
  param_2[8] = CONCAT44(fStack_3a4,local_3a8);
  param_2[9] = CONCAT44(uStack_39c,iStack_3a0);
  param_2[10] = local_398;
  param_2[0xb] = CONCAT44(uStack_38c,uStack_390);
  fStack_534 = (float)((ulong)uVar5 >> 0x20);
  if (local_398 == 0) {
    JPH::BodyInterface::GetTransformedShape((BodyID *)&local_258);
    local_548 = CONCAT44(uStack_22c,local_230);
    auVar16._4_4_ = fStack_254;
    auVar16._0_4_ = local_258;
    auVar16._8_4_ = fStack_250;
    plVar8 = (long *)CONCAT44(fStack_234,local_238);
    uVar4 = (uint)(0xffffffffL << (0x20 - bStack_21c & 0x3f));
    uStack_438 = CONCAT44(uStack_224,local_228);
    uStack_540 = uStack_438;
    local_440 = local_548;
  }
  else {
    GetCenterOfMassTransform
              (*(undefined8 *)(local_398 + 0xf0),*(undefined8 *)(local_398 + 0xf8),
               *(undefined8 *)(local_398 + 0x100),*(undefined8 *)(local_398 + 0x108),
               (BodyID *)&local_258,local_398,*(undefined8 *)(local_398 + 0x18));
    lVar7 = param_2[10];
    plVar8 = *(long **)(lVar7 + 0x18);
    fVar11 = local_258 + fStack_244 + local_230;
    if (0.0 <= fVar11) {
      fStack_254 = fStack_254 - local_248;
      fStack_23c = SQRT(fVar11 + _LC3);
      fVar11 = _LC23 / fStack_23c;
      fStack_23c = fStack_23c * _LC23;
      local_248 = (fStack_240 - fStack_234) * fVar11;
      fStack_244 = (local_238 - fStack_250) * fVar11;
      fStack_240 = fVar11 * fStack_254;
    }
    else if (local_258 < fStack_244) {
      if (fStack_244 < local_230) goto LAB_00107ff9;
      fVar11 = (fStack_244 - (local_258 + local_230)) + _LC3;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fStack_23c = _LC23 / fVar11;
      fStack_244 = fVar11 * _LC23;
      local_248 = (local_248 + fStack_254) * fStack_23c;
      fStack_240 = (fStack_240 + fStack_234) * fStack_23c;
      fStack_23c = (local_238 - fStack_250) * fStack_23c;
    }
    else if (local_230 <= local_258) {
      fVar11 = (local_258 - (local_230 + fStack_244)) + _LC3;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fStack_254 = local_248 + fStack_254;
      fStack_234 = fStack_240 - fStack_234;
      fStack_23c = _LC23 / fVar11;
      local_248 = fVar11 * _LC23;
      fStack_244 = fStack_254 * fStack_23c;
      fStack_240 = (fStack_250 + local_238) * fStack_23c;
      fStack_23c = fStack_234 * fStack_23c;
    }
    else {
LAB_00107ff9:
      fVar11 = (local_230 - (local_258 + fStack_244)) + _LC3;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fStack_254 = fStack_254 - local_248;
      fStack_234 = fStack_234 + fStack_240;
      fStack_244 = _LC23 / fVar11;
      fStack_240 = fVar11 * _LC23;
      local_248 = (local_238 + fStack_250) * fStack_244;
      fStack_23c = fStack_254 * fStack_244;
      fStack_244 = fStack_234 * fStack_244;
    }
    auVar16._4_4_ = uStack_224;
    auVar16._0_4_ = local_228;
    auVar16._8_4_ = uStack_220;
    if (plVar8 != (long *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      lVar7 = param_2[10];
    }
    uVar4 = 0;
    bStack_21c = 0;
    fVar17 = fVar17 + *(float *)(lVar7 + 0xb8);
    local_548 = _LC74;
    uStack_540 = _UNK_0010cb08;
  }
  fVar13 = local_248 + local_248;
  fVar19 = fStack_244 + fStack_244;
  local_258 = 0.0;
  local_558 = (float)uVar5;
  fStack_550 = (float)uVar2;
  fVar23 = (fStack_240 + fStack_240) * fStack_240;
  fVar11 = 0.0 - *(float *)(param_2 + 4);
  fVar9 = 0.0 - *(float *)((long)param_2 + 0x24);
  fVar10 = 0.0 - *(float *)(param_2 + 5);
  local_578._0_4_ = auVar16._0_4_;
  local_578._4_4_ = auVar16._4_4_;
  local_3f8 = CONCAT44((0.0 - fStack_534) + local_578._4_4_,(0.0 - local_558) + (float)local_578);
  fVar12 = fStack_23c * (fStack_240 + fStack_240);
  local_508 = (BodyID **)
              CONCAT44(local_508._4_4_,uVar4 | *(uint *)(param_2 + 0xb) >> (bStack_21c & 0x3f));
  uStack_3f0 = CONCAT44(0x3f800000,(0.0 - fStack_550) + auVar16._8_4_);
  fVar20 = fStack_240 * fVar19 - fVar13 * fStack_23c;
  fVar14 = fVar13 * fStack_23c + fStack_240 * fVar19;
  fVar22 = fVar13 * fStack_240 + fVar19 * fStack_23c;
  fVar18 = (_LC3 - local_248 * fVar13) - fVar19 * fStack_244;
  fVar24 = fStack_244 * fVar13 - fVar12;
  fVar12 = fVar12 + fStack_244 * fVar13;
  fVar21 = (_LC3 - fVar23) - local_248 * fVar13;
  fVar13 = fVar13 * fStack_240 - fVar19 * fStack_23c;
  fVar23 = (_LC3 - fVar19 * fStack_244) - fVar23;
  local_428._4_4_ = fVar12;
  local_428._0_4_ = fVar23;
  local_428._8_4_ = fVar13;
  local_428._12_4_ = 0;
  local_418._4_4_ = fVar21;
  local_418._0_4_ = fVar24;
  local_418._8_4_ = fVar14;
  local_418._12_4_ = 0;
  uStack_400 = (ulong)(uint)fVar18;
  local_408 = CONCAT44(fVar20,fVar22);
  local_578 = CONCAT44(fVar11 * fVar24 + fVar21 * fVar9 + fVar10 * fVar14,
                       fVar11 * fVar23 + fVar12 * fVar9 + fVar10 * fVar13);
  uStack_570 = CONCAT44(fVar11 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0,
                        fVar11 * fVar22 + fVar20 * fVar9 + fVar10 * fVar18);
  (**(code **)(*plVar8 + 0x60))
            (local_578,uStack_570,local_548,uStack_540,plVar8,&local_508,local_428,
             (BodyID *)&local_258);
  if ((uint)local_258 < 2) {
LAB_0010831d:
    fVar15 = *(float *)((long)param_2 + 0x44) - fVar15;
    if (0.0 < fVar15) goto LAB_001083f5;
    fVar17 = 0.0;
  }
  else {
    local_508 = &local_510;
    uStack_3f0 = CONCAT44(_LC3,_UNK_0010caf8);
    local_428._8_8_ = uStack_4a0;
    local_428._0_8_ = local_4a8;
    local_3f8 = __LC71;
    local_418._8_8_ = uStack_490;
    local_418._0_8_ = local_498;
    local_408 = local_488;
    uStack_400 = uStack_480;
    local_510 = (BodyID *)&local_258;
    local_500 = fVar17;
    bVar3 = sCorrectFractionForCharacterPadding<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,32u>>>>
                      (pJVar6,in_XMM3_Qa,0x3f8000003f800000,0x3f8000003f800000,
                       *(undefined8 *)(param_1 + 0x18),local_428,&local_508,(long)param_2 + 0x44);
    if (!bVar3) goto LAB_0010831d;
    fVar15 = *(float *)((long)param_2 + 0x44);
LAB_001083f5:
    fVar17 = _LC3;
    if (fVar15 <= _LC3) {
      fVar17 = fVar15;
    }
  }
  *(float *)((long)param_2 + 0x44) = fVar17;
  LOCK();
  plVar1 = plVar8 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  uVar5 = 1;
LAB_00107b2d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* JPH::CharacterVirtual::MoveShape(JPH::Vec3&, JPH::Vec3, float,
   JPH::Array<JPH::CharacterVirtual::Contact, JPH::STLAllocator<JPH::CharacterVirtual::Contact> >*,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&,
   JPH::ShapeFilter const&, JPH::TempAllocator&, bool) const */

void JPH::CharacterVirtual::MoveShape
               (undefined8 param_1_00,undefined8 param_2,float param_3,CharacterVirtual *param_1,
               float *param_5,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
               ,long *param_10,long *param_11,byte param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [8];
  undefined8 uVar17;
  long *plVar18;
  char cVar19;
  long lVar20;
  void *__dest;
  undefined8 *puVar21;
  long lVar22;
  byte bVar23;
  ulong uVar24;
  long lVar25;
  long *extraout_RDX;
  long *extraout_RDX_00;
  long *extraout_RDX_01;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_1e0;
  undefined1 local_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b0;
  uint local_1ac;
  float local_13c;
  long *local_138;
  undefined1 local_130 [16];
  undefined8 *local_120;
  long *local_118;
  undefined1 local_110 [16];
  void *local_100;
  long *local_f8;
  undefined1 local_f0 [16];
  long *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [68];
  float local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_58;
  undefined1 local_56;
  long local_40;
  
  fVar29 = (float)param_2;
  fVar32 = (float)((ulong)param_1_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _local_1d8 = (undefined1  [16])0x0;
  fVar32 = fVar29 * fVar29 + fVar32 * fVar32 + (float)param_1_00 * (float)param_1_00 + 0.0;
  if (_LC21 < fVar32) {
    auVar33._0_4_ = SQRT(fVar32);
    auVar11._8_4_ = fVar29;
    auVar11._0_8_ = param_1_00;
    auVar11._12_4_ = (int)((ulong)param_2 >> 0x20);
    auVar33._4_4_ = auVar33._0_4_;
    auVar33._8_4_ = auVar33._0_4_;
    auVar33._12_4_ = auVar33._0_4_;
    _local_1d8 = divps(auVar11,auVar33);
  }
  uVar17 = uStack_1d0;
  auVar16 = local_1d8;
  local_1ac = 0;
  plVar26 = param_6;
  local_1b0 = param_3;
  if (*(int *)(param_1 + 0xa8) != 0) {
    while (*(float *)(param_1 + 0xb0) <= local_1b0) {
      iVar4 = *(int *)(param_1 + 0xbc);
      local_120 = (undefined8 *)0x0;
      local_130 = (undefined1  [16])0x0;
      local_138 = param_11;
      if (iVar4 != 0) {
        puVar21 = (undefined8 *)(**(code **)(*param_11 + 0x10))(param_11,iVar4 << 7,plVar26);
        if (local_120 != (undefined8 *)0x0) {
          memmove(puVar21,local_120,local_130._0_8_ << 7);
          (**(code **)(*local_138 + 0x18))(local_138,local_120,local_130._8_4_ << 7);
        }
        local_130._8_4_ = iVar4;
        local_130._12_4_ = 0;
        local_120 = puVar21;
      }
      GetContactsAtPosition
                (*(CharacterVirtual **)param_5,*(undefined8 *)(param_5 + 2),auVar16,uVar17,param_1,
                 *(undefined8 *)(param_1 + 0x18),(Array *)&local_138,param_7,param_8,param_9);
      uVar9 = local_130._0_8_;
      local_100 = (void *)0x0;
      local_110 = (undefined1  [16])0x0;
      local_118 = param_11;
      if (local_130._0_8_ != 0) {
        __dest = (void *)(**(code **)(*param_11 + 0x10))(param_11,local_130._0_4_ * 8);
        if (local_100 != (void *)0x0) {
          memmove(__dest,local_100,local_110._0_8_ * 8);
          (**(code **)(*local_118 + 0x18))(local_118,local_100,local_110._8_4_ * 8);
        }
        local_110._8_8_ = uVar9;
        local_100 = __dest;
      }
      RemoveConflictingContacts(param_1,(Array *)&local_138,(Array *)&local_118);
      local_e0 = (long *)0x0;
      local_f0 = (undefined1  [16])0x0;
      lVar22 = local_130._0_8_ * 2;
      local_f8 = param_11;
      if (lVar22 != 0) {
        local_e0 = (long *)(**(code **)(*param_11 + 0x10))(param_11,(int)lVar22 << 6);
        local_f0._8_8_ = lVar22;
      }
      uStack_1e0 = 0x1088de;
      DetermineConstraints(param_1,(Array *)&local_138,param_3,(Array *)&local_f8);
      plVar18 = local_e0;
      bVar23 = local_1ac == 0 & param_12;
      if (bVar23 != 0) {
        plVar27 = local_e0 + local_f0._0_8_ * 8;
        for (plVar26 = local_e0; plVar27 != plVar26; plVar26 = plVar26 + 8) {
          JPH::DebugRenderer::DrawMarker
                    (*(undefined8 *)*plVar26,((undefined8 *)*plVar26)[1],DebugRenderer::sInstance,
                     (undefined4)Color::sYellow);
          pfVar5 = (float *)*plVar26;
          fVar32 = (float)(*(uint *)((long)plVar26 + 0x2c) ^ _LC8);
          fVar29 = fVar32 * *(float *)(plVar26 + 4);
          fVar30 = fVar32 * *(float *)((long)plVar26 + 0x24);
          fVar31 = fVar32 * *(float *)(plVar26 + 5);
          fVar32 = fVar32 * *(float *)((long)plVar26 + 0x2c);
          auVar34._0_8_ = CONCAT44(pfVar5[1] - fVar30,*pfVar5 - fVar29);
          auVar34._8_4_ = pfVar5[2] - fVar31;
          auVar34._12_4_ = pfVar5[3] - fVar32;
          uStack_1c0 = auVar34._8_8_;
          JPH::DebugRenderer::DrawArrow
                    (*(undefined8 *)pfVar5,*(undefined8 *)(pfVar5 + 2),auVar34._0_8_,uStack_1c0,
                     DebugRenderer::sInstance,(undefined4)Color::sYellow);
          local_1c8 = CONCAT44(fVar30 + *(float *)(param_1 + 0xf4),
                               fVar29 + *(float *)(param_1 + 0xf0));
          uStack_1c0._0_4_ = fVar31 + *(float *)(param_1 + 0xf8);
          uStack_1c0._4_4_ = fVar32 + *(float *)(param_1 + 0xfc);
          JPH::DebugRenderer::DrawPlane
                    (local_1c8,uStack_1c0,plVar26[4],plVar26[5],DebugRenderer::sInstance,
                     (undefined4)Color::sCyan);
          lVar22 = *plVar26;
          local_1d8._4_4_ = fVar30 + *(float *)(param_1 + 0xf4);
          local_1d8._0_4_ = fVar29 + *(float *)(param_1 + 0xf0);
          uStack_1d0._0_4_ = fVar31 + *(float *)(param_1 + 0xf8);
          uStack_1d0._4_4_ = fVar32 + *(float *)(param_1 + 0xfc);
          local_1c8 = CONCAT44(*(float *)(lVar22 + 0x34) + fVar30 + *(float *)(param_1 + 0xf4),
                               *(float *)(lVar22 + 0x30) + fVar29 + *(float *)(param_1 + 0xf0));
          uStack_1c0._0_4_ = *(float *)(lVar22 + 0x38) + fVar31 + *(float *)(param_1 + 0xf8);
          uStack_1c0._4_4_ = *(float *)(lVar22 + 0x3c) + fVar32 + *(float *)(param_1 + 0xfc);
          uStack_1e0 = 0x108e40;
          JPH::DebugRenderer::DrawArrow
                    (local_1d8,uStack_1d0,local_1c8,uStack_1c0,DebugRenderer::sInstance,
                     (undefined4)Color::sRed);
        }
      }
      SolveConstraints(param_1_00,param_2,param_1,(Array *)&local_f8,(Array *)&local_118,&local_13c,
                       &local_d8,param_11,bVar23);
      puVar21 = local_120;
      if (param_6 != (long *)0x0) {
        *param_6 = 0;
        puVar1 = local_120 + local_130._0_8_ * 0x10;
        uVar24 = local_130._0_8_ * 0x80 >> 7;
        if ((ulong)param_6[1] < uVar24) {
          uStack_1e0 = 0x108e78;
          lVar22 = (*Reallocate)(param_6[2],param_6[1] << 7);
          param_6[2] = lVar22;
          param_6[1] = uVar24;
        }
        if (puVar21 != puVar1) {
          lVar22 = param_6[2];
          lVar25 = *param_6;
          do {
            lVar25 = lVar25 + 1;
            uVar9 = *puVar21;
            uVar10 = puVar21[1];
            puVar28 = puVar21 + 0x10;
            *param_6 = lVar25;
            lVar20 = lVar25 * 0x80;
            puVar2 = (undefined8 *)(lVar22 + -0x80 + lVar20);
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            uVar9 = puVar21[3];
            puVar2 = (undefined8 *)(lVar22 + -0x70 + lVar20);
            *puVar2 = puVar21[2];
            puVar2[1] = uVar9;
            uVar9 = puVar21[5];
            puVar2 = (undefined8 *)(lVar22 + -0x60 + lVar20);
            *puVar2 = puVar21[4];
            puVar2[1] = uVar9;
            *(undefined1 (*) [16])(lVar22 + -0x50 + lVar20) = *(undefined1 (*) [16])(puVar21 + 6);
            uVar6 = *(undefined4 *)((long)puVar21 + 0x44);
            uVar7 = *(undefined4 *)(puVar21 + 9);
            uVar8 = *(undefined4 *)((long)puVar21 + 0x4c);
            puVar3 = (undefined4 *)(lVar22 + -0x40 + lVar20);
            *puVar3 = *(undefined4 *)(puVar21 + 8);
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar9 = puVar21[0xb];
            puVar2 = (undefined8 *)(lVar22 + -0x30 + lVar20);
            *puVar2 = puVar21[10];
            puVar2[1] = uVar9;
            uVar9 = puVar21[0xd];
            puVar2 = (undefined8 *)(lVar22 + -0x20 + lVar20);
            *puVar2 = puVar21[0xc];
            puVar2[1] = uVar9;
            uVar9 = puVar21[0xf];
            puVar2 = (undefined8 *)(lVar22 + -0x10 + lVar20);
            *puVar2 = puVar21[0xe];
            puVar2[1] = uVar9;
            puVar21 = puVar28;
          } while (puVar1 != puVar28);
        }
      }
      local_58 = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_70 = 0xffffffff;
      local_56 = 1;
      plVar26 = param_10;
      cVar19 = GetFirstContactForSweep
                         (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 2),
                          CONCAT44(fStack_d4,local_d8),CONCAT44(fStack_cc,fStack_d0),param_1,
                          local_c8,(Array *)&local_118,param_7,param_8,param_9);
      if (cVar19 != '\0') {
        local_13c = local_13c * local_84;
        local_d8 = local_d8 * local_84;
        fStack_d4 = fStack_d4 * local_84;
        fStack_d0 = fStack_d0 * local_84;
        fStack_cc = fStack_cc * local_84;
      }
      local_1b0 = local_1b0 - local_13c;
      *param_5 = local_d8 + *param_5;
      param_5[1] = fStack_d4 + param_5[1];
      param_5[2] = fStack_d0 + param_5[2];
      param_5[3] = fStack_cc + param_5[3];
      if (fStack_d0 * fStack_d0 + local_d8 * local_d8 + 0.0 + fStack_d4 * fStack_d4 < _LC65) {
        if (plVar18 != (long *)0x0) {
          (**(code **)(*local_f8 + 0x18))(local_f8,plVar18,local_f0._8_4_ << 6,uStack_1e0);
        }
        if (local_100 != (void *)0x0) {
          uVar6 = local_110._8_4_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_110._8_8_;
          local_110 = auVar14 << 0x40;
          (**(code **)(*local_118 + 0x18))(local_118,local_100,uVar6 * 8);
        }
        if (local_120 != (undefined8 *)0x0) {
          uVar6 = local_130._8_4_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_130._8_8_;
          local_130 = auVar15 << 0x40;
          (**(code **)(*local_138 + 0x18))(local_138,local_120,uVar6 << 7);
        }
        break;
      }
      if (plVar18 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x18))(local_f8,plVar18,local_f0._8_4_ << 6);
        plVar26 = extraout_RDX;
      }
      if (local_100 != (void *)0x0) {
        uVar6 = local_110._8_4_;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_110._8_8_;
        local_110 = auVar12 << 0x40;
        (**(code **)(*local_118 + 0x18))(local_118,local_100,uVar6 * 8);
        plVar26 = extraout_RDX_00;
      }
      if (local_120 != (undefined8 *)0x0) {
        uVar6 = local_130._8_4_;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_130._8_8_;
        local_130 = auVar13 << 0x40;
        (**(code **)(*local_138 + 0x18))(local_138,local_120,uVar6 << 7);
        plVar26 = extraout_RDX_01;
      }
      local_1ac = local_1ac + 1;
      if (*(uint *)(param_1 + 0xa8) <= local_1ac) break;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::Update(float, JPH::Vec3, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&,
   JPH::TempAllocator&) */

void JPH::CharacterVirtual::Update
               (float param_1,undefined8 param_2,undefined8 param_3,CharacterVirtual *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               TempAllocator *param_9)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar3 = sDrawConstraints;
  if (0.0 < param_1) {
    *(float *)(param_4 + 0x138) = param_1;
    MoveShape(*(undefined8 *)(param_4 + 0x110),*(undefined8 *)(param_4 + 0x118),param_4,
              param_4 + 0xf0,param_4 + 0x120,param_5,param_6,param_7,param_8,param_9,uVar3);
    UpdateSupportingContact(param_4,false,param_9);
    if (*(int *)(param_4 + 0x148) == -1) {
      iVar1 = *(int *)(param_4 + 0x48);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x10);
      auVar8 = GetInnerBodyPosition(param_4);
      JPH::BodyInterface::SetPositionAndRotation
                (auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(param_4 + 0x100),lVar2 + 0x158,
                 param_4 + 0x148,1);
      iVar1 = *(int *)(param_4 + 0x48);
    }
    if ((iVar1 != -1) && (0.0 < *(float *)(param_4 + 0xcc))) {
      fVar4 = (float)param_2;
      fVar5 = (float)((ulong)param_2 >> 0x20);
      fVar6 = (float)param_3;
      fVar7 = *(float *)(param_4 + 0x68) * fVar6 +
              *(float *)(param_4 + 100) * fVar5 + *(float *)(param_4 + 0x60) * fVar4 + 0.0;
      if (fVar7 < 0.0) {
        fVar7 = (float)((uint)(((*(float *)(param_4 + 0xcc) * fVar7) /
                               SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 + 0.0)) * param_1)
                       ^ _LC8);
        uStack_30._4_4_ = (float)((ulong)param_3 >> 0x20);
        local_38 = CONCAT44(fVar7 * fVar5,fVar7 * fVar4);
        uStack_30 = CONCAT44(fVar7 * uStack_30._4_4_,fVar7 * fVar6);
        JPH::BodyInterface::AddImpulse
                  (local_38,uStack_30,*(undefined8 *)(param_4 + 0x50),
                   *(undefined8 *)(param_4 + 0x58),*(long *)(param_4 + 0x10) + 0x158,param_4 + 0x48)
        ;
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::WalkStairs(float, JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&,
   JPH::ShapeFilter const&, JPH::TempAllocator&) */

undefined4
JPH::CharacterVirtual::WalkStairs
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13,
          undefined8 param_14,undefined8 param_15)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  char cVar13;
  undefined4 uVar14;
  float *__src;
  float *pfVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  long *local_1c8;
  undefined1 local_1c0 [16];
  long local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [64];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_104;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_d8;
  undefined1 local_d6;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_58;
  undefined1 local_56;
  long local_40;
  
  local_298 = (float)param_4;
  fStack_294 = (float)((ulong)param_4 >> 0x20);
  fStack_290 = (float)param_5;
  uStack_28c = (undefined4)((ulong)param_5 >> 0x20);
  local_288._8_8_ = param_7;
  local_288._0_8_ = param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  local_f0 = 0xffffffff;
  local_d8 = 0;
  local_d6 = 1;
  local_1b0 = 0;
  local_1c8 = param_13;
  cVar13 = GetFirstContactForSweep
                     (*(undefined8 *)(param_8 + 0xf0),*(undefined8 *)(param_8 + 0xf8),param_2,
                      param_8,&local_148,&local_1c8,param_9,param_10,param_11,param_12);
  local_278 = param_2;
  uStack_270 = param_3;
  if (cVar13 != '\0') {
    uVar14 = 0;
    if (local_104 < _LC58) goto LAB_001092fc;
    local_278._0_4_ = (float)param_2;
    local_278._4_4_ = (float)((ulong)param_2 >> 0x20);
    uStack_270._0_4_ = (float)param_3;
    uStack_270._4_4_ = (float)((ulong)param_3 >> 0x20);
    local_278 = CONCAT44(local_104 * local_278._4_4_,local_104 * (float)local_278);
    uStack_270 = CONCAT44(local_104 * uStack_270._4_4_,local_104 * (float)uStack_270);
  }
  fVar28 = (float)local_278 + *(float *)(param_8 + 0xf0);
  fVar29 = local_278._4_4_ + *(float *)(param_8 + 0xf4);
  fVar30 = (float)uStack_270 + *(float *)(param_8 + 0xf8);
  fVar31 = uStack_270._4_4_ + *(float *)(param_8 + 0xfc);
  local_268 = CONCAT44(fVar29,fVar28);
  if (sDrawWalkStairs != '\0') {
    JPH::DebugRenderer::DrawArrow
              (*(undefined8 *)(param_8 + 0xf0),*(undefined8 *)(param_8 + 0xf8),local_268,
               DebugRenderer::sInstance,(undefined4)Color::sWhite);
  }
  auVar27._8_4_ = fStack_290;
  auVar27._0_8_ = param_4;
  auVar27._12_4_ = uStack_28c;
  uVar14 = 0;
  uVar19 = *(ulong *)(param_8 + 0x120);
  auVar32._4_4_ = param_1;
  auVar32._0_4_ = param_1;
  auVar32._8_4_ = param_1;
  auVar32._12_4_ = param_1;
  auVar27 = divps(auVar27,auVar32);
  fVar22 = *(float *)(param_8 + 0x28) * auVar27._8_4_ +
           auVar27._4_4_ * *(float *)(param_8 + 0x24) +
           *(float *)(param_8 + 0x20) * auVar27._0_4_ + 0.0;
  fVar4 = *(float *)(param_8 + 0x20);
  fVar5 = *(float *)(param_8 + 0x24);
  fVar6 = *(float *)(param_8 + 0x28);
  if (uVar19 != 0) {
    __src = (float *)(**(code **)(*param_13 + 0x10))(param_13,(int)uVar19 << 4);
    lVar16 = *(long *)(param_8 + 0x130);
    lVar17 = *(long *)(param_8 + 0x120) * 0x80 + lVar16;
    if (lVar17 == lVar16) {
LAB_001097ed:
      iVar18 = (int)uVar19;
    }
    else {
      uVar21 = 0;
LAB_001093ad:
      do {
        if (*(char *)(lVar16 + 0x70) != '\0') {
          if (((((auVar27._8_4_ - fVar22 * fVar6) - *(float *)(lVar16 + 0x18)) *
                *(float *)(lVar16 + 0x38) +
                ((auVar27._4_4_ - fVar22 * fVar5) - *(float *)(lVar16 + 0x14)) *
                *(float *)(lVar16 + 0x34) +
                ((auVar27._0_4_ - fVar22 * fVar4) - *(float *)(lVar16 + 0x10)) *
                *(float *)(lVar16 + 0x30) + 0.0 < 0.0) && (*(float *)(param_8 + 0x40) < _LC49)) &&
             (*(float *)(lVar16 + 0x38) * *(float *)(param_8 + 0x28) +
              *(float *)(lVar16 + 0x34) * *(float *)(param_8 + 0x24) +
              *(float *)(lVar16 + 0x30) * *(float *)(param_8 + 0x20) + 0.0 <
              *(float *)(param_8 + 0x40))) {
            uVar1 = uVar21 + 1;
            pfVar15 = __src;
            uVar20 = uVar19;
            if (uVar19 < uVar1) {
              uVar20 = uVar19 * 2;
              if (uVar19 * 2 < uVar1) {
                uVar20 = uVar1;
              }
              pfVar15 = (float *)(**(code **)(*param_13 + 0x10))(param_13,(int)uVar20 << 4);
              if (__src == (float *)0x0) goto LAB_00109814;
              memmove(pfVar15,__src,uVar21 * 0x10);
              (**(code **)(*param_13 + 0x18))(param_13,__src,(int)uVar19 << 4);
              *(undefined1 (*) [16])(pfVar15 + uVar21 * 4) = *(undefined1 (*) [16])(lVar16 + 0x30);
            }
            else {
LAB_00109814:
              lVar10 = uVar21 * 4;
              __src = pfVar15;
              uVar19 = uVar20;
              uVar21 = uVar1;
              if ((undefined1 (*) [16])(pfVar15 + lVar10) == (undefined1 (*) [16])0x0)
              goto LAB_001093a0;
              *(undefined1 (*) [16])(pfVar15 + lVar10) = *(undefined1 (*) [16])(lVar16 + 0x30);
            }
            lVar16 = lVar16 + 0x80;
            __src = pfVar15;
            uVar19 = uVar20;
            uVar21 = uVar1;
            if (lVar16 == lVar17) break;
            goto LAB_001093ad;
          }
        }
LAB_001093a0:
        lVar16 = lVar16 + 0x80;
      } while (lVar16 != lVar17);
      iVar18 = (int)uVar19;
      if (uVar21 != 0) {
        local_2a8 = auVar27._0_8_;
        uStack_2a0 = auVar27._8_8_;
        local_1a8 = fVar28;
        fStack_1a4 = fVar29;
        fStack_1a0 = fVar30;
        fStack_19c = fVar31;
        MoveShape(local_2a8,uStack_2a0,param_8,&local_1a8,0,param_9,param_10,param_11,param_12,
                  param_13,0);
        fVar22 = fStack_19c;
        fVar6 = fStack_1a0;
        fVar5 = fStack_1a4;
        fVar4 = local_1a8;
        fVar23 = local_1a8 - fVar28;
        fVar24 = fStack_1a4 - fVar29;
        fVar25 = fStack_1a0 - fVar30;
        fVar26 = fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23 + 0.0;
        if (_LC65 <= fVar26) {
          for (pfVar15 = __src; pfVar15 != __src + uVar21 * 4; pfVar15 = pfVar15 + 4) {
            if (pfVar15[2] * fVar25 + pfVar15[1] * fVar24 + *pfVar15 * fVar23 + 0.0 <
                SQRT(fStack_290 * fStack_290 + local_298 * local_298 + 0.0 + fStack_294 * fStack_294
                    ) * __LC76) {
              if (sDrawWalkStairs != '\0') {
                JPH::DebugRenderer::DrawArrow
                          (local_268,CONCAT44(fVar31,fVar30),CONCAT44(fStack_1a4,local_1a8),
                           CONCAT44(fStack_19c,fStack_1a0),DebugRenderer::sInstance,
                           (undefined4)Color::sWhite);
              }
              param_14._0_4_ = (0.0 - (float)local_278) + (float)param_14;
              param_14._4_4_ = (0.0 - local_278._4_4_) + param_14._4_4_;
              param_15._0_4_ = (0.0 - (float)uStack_270) + (float)param_15;
              param_15._4_4_ = (0.0 - uStack_270._4_4_) + param_15._4_4_;
              local_2a8 = CONCAT44(param_14._4_4_,(float)param_14);
              uStack_2a0._0_4_ = (float)param_15;
              uStack_2a0._4_4_ = param_15._4_4_;
              uVar14 = GetFirstContactForSweep
                                 (CONCAT44(fStack_1a4,local_1a8),CONCAT44(fStack_19c,fStack_1a0),
                                  local_2a8,param_8,&local_148,&local_1c8,param_9,param_10,param_11)
              ;
              if ((char)uVar14 == '\0') break;
              if (sDrawWalkStairs != '\0') {
                uVar7 = CONCAT44(local_104 * param_14._4_4_ + fVar5,
                                 local_104 * (float)param_14 + fVar4);
                uVar8 = CONCAT44(local_104 * param_15._4_4_ + fVar22,
                                 local_104 * (float)param_15 + fVar6);
                JPH::DebugRenderer::DrawArrow
                          (CONCAT44(fStack_1a4,local_1a8),CONCAT44(fStack_19c,fStack_1a0),uVar7,
                           uVar8,DebugRenderer::sInstance,(undefined4)Color::sWhite);
                JPH::DebugRenderer::DrawArrow
                          (CONCAT44(fStack_144,local_148),CONCAT44(fStack_13c,fStack_140),
                           CONCAT44(fStack_144 + fStack_114,local_148 + local_118),
                           CONCAT44(fStack_13c + fStack_10c,fStack_140 + fStack_110),
                           DebugRenderer::sInstance,(undefined4)Color::sWhite);
                plVar2 = *(long **)(param_8 + 0x18);
                pcVar3 = *(code **)(*plVar2 + 0x80);
                GetCenterOfMassTransform
                          (uVar7,uVar8,*(undefined8 *)(param_8 + 0x100),&local_c8,param_8,plVar2);
                (*pcVar3)(0x3f8000003f800000,plVar2,DebugRenderer::sInstance,&local_c8,
                          (undefined4)Color::sWhite,0,1);
              }
              if ((*(float *)(param_8 + 0x40) < _LC49) &&
                 (fStack_114 * *(float *)(param_8 + 0x24) +
                  local_118 * *(float *)(param_8 + 0x20) + 0.0 +
                  fStack_110 * *(float *)(param_8 + 0x28) < *(float *)(param_8 + 0x40))) {
                fVar23 = (float)((ulong)param_6 >> 0x20);
                if ((float)param_7 * (float)param_7 +
                    fVar23 * fVar23 + (float)param_6 * (float)param_6 + 0.0 <= _LC22) break;
                auVar27 = divps(local_288,auVar32);
                local_288._0_8_ = auVar27._0_8_;
                local_288._8_8_ = auVar27._8_8_;
                local_198 = fVar28;
                fStack_194 = fVar29;
                fStack_190 = fVar30;
                fStack_18c = fVar31;
                MoveShape(local_288._0_8_,local_288._8_8_,param_8,&local_198,0,param_9,param_10,
                          param_11,param_12,param_13,0);
                fVar12 = fStack_18c;
                fVar25 = fStack_190;
                fVar24 = fStack_194;
                fVar23 = local_198;
                if ((fStack_190 - fVar30) * (fStack_190 - fVar30) +
                    (fStack_194 - fVar29) * (fStack_194 - fVar29) +
                    (local_198 - fVar28) * (local_198 - fVar28) + 0.0 <= fVar26 + _LC65) break;
                if (sDrawWalkStairs != '\0') {
                  JPH::DebugRenderer::DrawArrow
                            (local_268,CONCAT44(fVar31,fVar30),CONCAT44(fStack_194,local_198),
                             CONCAT44(fStack_18c,fStack_190),DebugRenderer::sInstance,
                             (undefined4)Color::sCyan);
                }
                local_80 = 0xffffffff;
                local_78 = 0;
                local_70 = 0xffffffff;
                local_58 = 0;
                local_56 = 1;
                cVar13 = GetFirstContactForSweep
                                   (CONCAT44(fStack_194,local_198),CONCAT44(fStack_18c,fStack_190),
                                    local_2a8,uStack_2a0,param_8,&local_c8,&local_1c8,param_9,
                                    param_10,param_11,param_12);
                if (cVar13 == '\0') break;
                if (sDrawWalkStairs != '\0') {
                  uVar7 = CONCAT44(local_84 * param_14._4_4_ + fVar24,
                                   local_84 * (float)param_14 + fVar23);
                  uVar8 = CONCAT44(local_84 * param_15._4_4_ + fVar12,
                                   local_84 * (float)param_15 + fVar25);
                  JPH::DebugRenderer::DrawArrow
                            (CONCAT44(fStack_194,local_198),CONCAT44(fStack_18c,fStack_190),uVar7,
                             uVar8,DebugRenderer::sInstance,(undefined4)Color::sCyan);
                  JPH::DebugRenderer::DrawArrow
                            (CONCAT44(fStack_c4,local_c8),CONCAT44(fStack_bc,fStack_c0),
                             CONCAT44(fStack_94 + fStack_c4,local_98 + local_c8),
                             CONCAT44(fStack_8c + fStack_bc,fStack_90 + fStack_c0),
                             DebugRenderer::sInstance,(undefined4)Color::sCyan);
                  plVar2 = *(long **)(param_8 + 0x18);
                  pcVar3 = *(code **)(*plVar2 + 0x80);
                  GetCenterOfMassTransform
                            (uVar7,uVar8,*(undefined8 *)(param_8 + 0x100),
                             *(undefined8 *)(param_8 + 0x108),local_188,param_8,plVar2);
                  (*pcVar3)(0x3f8000003f800000,plVar2,DebugRenderer::sInstance,local_188,
                            (undefined4)Color::sCyan,0,1);
                }
                if ((*(float *)(param_8 + 0x40) < _LC49) &&
                   (fStack_94 * *(float *)(param_8 + 0x24) +
                    local_98 * *(float *)(param_8 + 0x20) + 0.0 +
                    fStack_90 * *(float *)(param_8 + 0x28) < *(float *)(param_8 + 0x40))) break;
              }
              local_1a8 = local_104 * (float)param_14 + fVar4;
              fStack_1a4 = local_104 * param_14._4_4_ + fVar5;
              fStack_1a0 = local_104 * (float)param_15 + fVar6;
              fStack_19c = local_104 * param_15._4_4_ + fVar22;
              MoveToContact(param_8,&local_148,param_9,param_10,param_11,param_12,param_13);
              *(undefined4 *)(param_8 + 0x44) = 0;
              goto LAB_001097ed;
            }
          }
        }
      }
      uVar14 = 0;
    }
    if (__src != (float *)0x0) {
      (**(code **)(*param_13 + 0x18))(param_13,__src,iVar18 << 4);
    }
  }
LAB_001092fc:
  if (local_1b0 != 0) {
    uVar11 = local_1c0._8_4_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_1c0._8_8_;
    local_1c0 = auVar9 << 0x40;
    (**(code **)(*local_1c8 + 0x18))(local_1c8,local_1b0,uVar11 * 8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::StickToFloor(JPH::Vec3, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&,
   JPH::TempAllocator&) */

undefined4
JPH::CharacterVirtual::StickToFloor
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,long *param_8)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long *local_128;
  undefined1 local_120 [16];
  long local_110;
  undefined1 local_108 [64];
  undefined1 local_c8 [68];
  float local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_58;
  undefined1 local_56;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = (undefined1  [16])0x0;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_58 = 0;
  local_56 = 1;
  local_110 = 0;
  local_128 = param_8;
  uVar5 = GetFirstContactForSweep
                    (*(undefined8 *)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0xf8),param_1,param_3
                     ,local_c8,&local_128,param_4,param_5,param_6,param_7);
  if ((char)uVar5 != '\0') {
    local_168._0_4_ = (float)param_1;
    local_168._4_4_ = (float)((ulong)param_1 >> 0x20);
    uStack_160._0_4_ = (float)param_2;
    uStack_160._4_4_ = (float)((ulong)param_2 >> 0x20);
    local_168 = CONCAT44(local_84 * local_168._4_4_ + *(float *)(param_3 + 0xf4),
                         local_84 * (float)local_168 + *(float *)(param_3 + 0xf0));
    uStack_160 = CONCAT44(local_84 * uStack_160._4_4_ + *(float *)(param_3 + 0xfc),
                          local_84 * (float)uStack_160 + *(float *)(param_3 + 0xf8));
    if (sDrawStickToFloor != '\0') {
      JPH::DebugRenderer::DrawArrow
                (*(undefined8 *)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0xf8),local_168,
                 uStack_160,_LC75,DebugRenderer::sInstance,(undefined4)Color::sOrange,uStack_170);
      plVar1 = *(long **)(param_3 + 0x18);
      pcVar2 = *(code **)(*plVar1 + 0x80);
      GetCenterOfMassTransform
                (local_168,uStack_160,*(undefined8 *)(param_3 + 0x100),
                 *(undefined8 *)(param_3 + 0x108),local_108,param_3,plVar1);
      (*pcVar2)(0x3f8000003f800000,plVar1,DebugRenderer::sInstance,local_108,
                (undefined4)Color::sOrange,0,1);
    }
    MoveToContact(local_168,uStack_160,param_3,local_c8,param_4,param_5,param_6,param_7,param_8);
  }
  if (local_110 != 0) {
    uVar4 = local_120._8_4_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_120._8_8_;
    local_120 = auVar3 << 0x40;
    (**(code **)(*local_128 + 0x18))(local_128,local_110,uVar4 * 8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CharacterVirtual::ExtendedUpdate(float, JPH::Vec3,
   JPH::CharacterVirtual::ExtendedUpdateSettings const&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&,
   JPH::TempAllocator&) */

undefined8
JPH::CharacterVirtual::ExtendedUpdate
          (float param_1,long param_2,float *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_48;
  float fStack_44;
  float fStack_40;
  
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  auVar20 = CancelVelocityTowardsSteepSlopes(uVar2,uVar3);
  uVar1 = *(uint *)(param_2 + 0x44);
  uVar6 = *(undefined8 *)(param_2 + 0xf0);
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined1 (*) [16])(param_2 + 0x110) = auVar20;
  uVar5 = Update(param_2,param_4,param_5,param_6,param_7,param_8);
  local_48 = (float)uVar6;
  fStack_44 = (float)((ulong)uVar6 >> 0x20);
  fStack_40 = (float)uVar4;
  if ((((1 < *(uint *)(param_2 + 0x44)) && (uVar1 < 2)) &&
      (_LC22 < param_3[2] * param_3[2] + *param_3 * *param_3 + 0.0 + param_3[1] * param_3[1])) &&
     ((*(float *)(param_2 + 0x28) * (*(float *)(param_2 + 0xf8) - fStack_40) +
      (*(float *)(param_2 + 0xf4) - fStack_44) * *(float *)(param_2 + 0x24) +
      *(float *)(param_2 + 0x20) * (*(float *)(param_2 + 0xf0) - local_48) + 0.0) / param_1 <= _LC58
     )) {
    uVar5 = StickToFloor(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 2),param_2,param_4,param_5
                         ,param_6,param_7,param_8);
  }
  if (_LC22 < param_3[6] * param_3[6] + param_3[4] * param_3[4] + 0.0 + param_3[5] * param_3[5]) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    fVar13 = *(float *)(param_2 + 0x20);
    fVar16 = *(float *)(param_2 + 0x24);
    fVar17 = *(float *)(param_2 + 0x28);
    fVar18 = *(float *)(param_2 + 0x2c);
    local_78 = (float)uVar2;
    fStack_74 = (float)((ulong)uVar2 >> 0x20);
    fStack_70 = (float)uVar3;
    fStack_6c = (float)((ulong)uVar3 >> 0x20);
    fVar12 = (float)((ulong)uVar6 >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar7 = param_1 * fStack_70 * fVar10 +
            param_1 * fStack_74 * fVar12 + param_1 * local_78 * (float)uVar6 + 0.0;
    auVar20._0_4_ = param_1 * local_78 - fVar7 * fVar13;
    auVar20._4_4_ = param_1 * fStack_74 - fVar7 * fVar16;
    auVar20._8_4_ = param_1 * fStack_70 - fVar7 * fVar17;
    auVar20._12_4_ = param_1 * fStack_6c - fVar7 * fVar18;
    fVar7 = SQRT(auVar20._8_4_ * auVar20._8_4_ +
                 auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + 0.0);
    if (0.0 < fVar7) {
      local_48 = *(float *)(param_2 + 0xf0) - local_48;
      fStack_44 = *(float *)(param_2 + 0xf4) - fStack_44;
      fStack_40 = *(float *)(param_2 + 0xf8) - fStack_40;
      fVar12 = fStack_40 * fVar10 + fStack_44 * fVar12 + local_48 * (float)uVar6 + 0.0;
      auVar14._4_4_ = fVar7;
      auVar14._0_4_ = fVar7;
      auVar14._8_4_ = fVar7;
      auVar14._12_4_ = fVar7;
      auVar20 = divps(auVar20,auVar14);
      fVar12 = (fStack_40 - fVar12 * fVar17) * auVar20._8_4_ +
               (fStack_44 - fVar12 * fVar16) * auVar20._4_4_ +
               (local_48 - fVar12 * fVar13) * auVar20._0_4_ + 0.0;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar8 = fVar12 * auVar20._0_4_;
      fVar9 = fVar12 * auVar20._4_4_;
      fVar12 = fVar12 * auVar20._8_4_;
      fVar19 = 0.0;
      if ((SQRT(fVar12 * fVar12 + fVar8 * fVar8 + 0.0 + fVar9 * fVar9) + _LC60 < fVar7) &&
         (uVar5 = CanWalkStairs(uVar2,uVar3,param_2), (char)uVar5 != '\0')) {
        fVar7 = 0.0 - *(float *)(param_2 + 0x60);
        fVar12 = 0.0 - *(float *)(param_2 + 100);
        fVar8 = 0.0 - *(float *)(param_2 + 0x68);
        fVar10 = fVar10 * fVar8 +
                 fVar12 * (float)((ulong)uVar6 >> 0x20) + fVar7 * (float)uVar6 + fVar19;
        fVar7 = fVar7 - fVar10 * fVar13;
        fVar12 = fVar12 - fVar10 * fVar16;
        auVar11._4_4_ = fVar12;
        auVar11._0_4_ = fVar7;
        fVar8 = fVar8 - fVar10 * fVar17;
        fVar13 = fVar7 * fVar7 + fVar19 + fVar12 * fVar12 + fVar8 * fVar8;
        if (_LC21 < fVar13) {
          auVar15._0_4_ = SQRT(fVar13);
          auVar11._8_4_ = fVar8;
          auVar11._12_4_ = (0.0 - *(float *)(param_2 + 0x6c)) - fVar10 * fVar18;
          auVar15._4_4_ = auVar15._0_4_;
          auVar15._8_4_ = auVar15._0_4_;
          auVar15._12_4_ = auVar15._0_4_;
          divps(auVar11,auVar15);
        }
        uVar5 = *(undefined8 *)(param_3 + 0xc);
        WalkStairs(param_2,param_4,param_5,param_6,param_7,param_8,uVar5,
                   *(undefined8 *)(param_3 + 0xe));
      }
    }
  }
  return uVar5;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */

undefined8 JPH::ShapeFilter::ShouldCollide(Shape *param_1,SubShapeID *param_2)

{
  return 1;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape const*,
   JPH::SubShapeID const&) const */

undefined8
JPH::ShapeFilter::ShouldCollide
          (Shape *param_1,SubShapeID *param_2,Shape *param_3,SubShapeID *param_4)

{
  return 1;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  return;
}



/* JPH::IgnoreSingleBodyFilterChained::ShouldCollide(JPH::BodyID const&) const */

undefined8 __thiscall
JPH::IgnoreSingleBodyFilterChained::ShouldCollide
          (IgnoreSingleBodyFilterChained *this,BodyID *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)param_1 != *(int *)(this + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0010a622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x10))();
    return uVar1;
  }
  return 0;
}



/* JPH::IgnoreSingleBodyFilterChained::ShouldCollideLocked(JPH::Body const&) const */

void JPH::IgnoreSingleBodyFilterChained::ShouldCollideLocked(Body *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010a63b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}



/* JPH::CharacterContactListener::OnAdjustBodyVelocity(JPH::CharacterVirtual const*, JPH::Body
   const&, JPH::Vec3&, JPH::Vec3&) */

void JPH::CharacterContactListener::OnAdjustBodyVelocity
               (CharacterVirtual *param_1,Body *param_2,Vec3 *param_3,Vec3 *param_4)

{
  return;
}



/* JPH::CharacterContactListener::OnContactValidate(JPH::CharacterVirtual const*, JPH::BodyID
   const&, JPH::SubShapeID const&) */

undefined8
JPH::CharacterContactListener::OnContactValidate
          (CharacterVirtual *param_1,BodyID *param_2,SubShapeID *param_3)

{
  return 1;
}



/* JPH::CharacterContactListener::OnCharacterContactValidate(JPH::CharacterVirtual const*,
   JPH::CharacterVirtual const*, JPH::SubShapeID const&) */

undefined8
JPH::CharacterContactListener::OnCharacterContactValidate
          (CharacterVirtual *param_1,CharacterVirtual *param_2,SubShapeID *param_3)

{
  return 1;
}



/* JPH::CharacterContactListener::OnContactAdded(JPH::CharacterVirtual const*, JPH::BodyID const&,
   JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::CharacterContactSettings&) */

void JPH::CharacterContactListener::OnContactAdded(void)

{
  return;
}



/* JPH::CharacterContactListener::OnCharacterContactAdded(JPH::CharacterVirtual const*,
   JPH::CharacterVirtual const*, JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3,
   JPH::CharacterContactSettings&) */

void JPH::CharacterContactListener::OnCharacterContactAdded(void)

{
  return;
}



/* JPH::CharacterContactListener::OnContactSolve(JPH::CharacterVirtual const*, JPH::BodyID const&,
   JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::PhysicsMaterial const*, JPH::Vec3,
   JPH::Vec3&) */

void JPH::CharacterContactListener::OnContactSolve(void)

{
  return;
}



/* JPH::CharacterContactListener::OnCharacterContactSolve(JPH::CharacterVirtual const*,
   JPH::CharacterVirtual const*, JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::PhysicsMaterial const*, JPH::Vec3, JPH::Vec3&) */

void JPH::CharacterContactListener::OnCharacterContactSolve(void)

{
  return;
}



/* JPH::CharacterVirtual::ContactCollector::SetUserData(unsigned long) */

void __thiscall
JPH::CharacterVirtual::ContactCollector::SetUserData(ContactCollector *this,ulong param_1)

{
  *(ulong *)(this + 0x50) = param_1;
  return;
}



/* JPH::CharacterVirtual::ContactCastCollector::SetUserData(unsigned long) */

void __thiscall
JPH::CharacterVirtual::ContactCastCollector::SetUserData(ContactCastCollector *this,ulong param_1)

{
  *(ulong *)(this + 0x60) = param_1;
  return;
}



/* JPH::IgnoreSingleBodyFilterChained::~IgnoreSingleBodyFilterChained() */

void __thiscall
JPH::IgnoreSingleBodyFilterChained::~IgnoreSingleBodyFilterChained
          (IgnoreSingleBodyFilterChained *this)

{
  return;
}



/* JPH::CharacterVirtual::ContactCollector::~ContactCollector() */

void __thiscall JPH::CharacterVirtual::ContactCollector::~ContactCollector(ContactCollector *this)

{
  return;
}



/* JPH::CharacterVirtual::ContactCastCollector::~ContactCastCollector() */

void __thiscall
JPH::CharacterVirtual::ContactCastCollector::~ContactCastCollector(ContactCastCollector *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010a704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>::Reset() */

void __thiscall
JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>::Reset
          (CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape> *this)

{
  *(undefined4 *)(this + 8) = 0x3f800001;
  return;
}



/* JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>::OnBody
               (Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::Reset() */

void __thiscall
JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::Reset
          (CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>
           *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::IgnoreSingleBodyFilterChained::~IgnoreSingleBodyFilterChained() */

void __thiscall
JPH::IgnoreSingleBodyFilterChained::~IgnoreSingleBodyFilterChained
          (IgnoreSingleBodyFilterChained *this)

{
  operator_delete(this,0x18);
  return;
}



/* JPH::CharacterVirtual::ContactCollector::~ContactCollector() */

void __thiscall JPH::CharacterVirtual::ContactCollector::~ContactCollector(ContactCollector *this)

{
  operator_delete(this,0x70);
  return;
}



/* JPH::CharacterVirtual::ContactCastCollector::~ContactCastCollector() */

void __thiscall
JPH::CharacterVirtual::ContactCastCollector::~ContactCastCollector(ContactCastCollector *this)

{
  operator_delete(this,0x80);
  return;
}



/* JPH::CharacterVsCharacterCollisionSimple::~CharacterVsCharacterCollisionSimple() */

void __thiscall
JPH::CharacterVsCharacterCollisionSimple::~CharacterVsCharacterCollisionSimple
          (CharacterVsCharacterCollisionSimple *this)

{
  *(undefined ***)this = &PTR__CharacterVsCharacterCollisionSimple_0010c918;
  if (*(long *)(this + 0x18) != 0) {
    *(undefined8 *)(this + 8) = 0;
    (*Free)();
  }
  operator_delete(this,0x20);
  return;
}



/* JPH::CharacterVsCharacterCollisionSimple::~CharacterVsCharacterCollisionSimple() */

void __thiscall
JPH::CharacterVsCharacterCollisionSimple::~CharacterVsCharacterCollisionSimple
          (CharacterVsCharacterCollisionSimple *this)

{
  *(undefined ***)this = &PTR__CharacterVsCharacterCollisionSimple_0010c918;
  if (*(long *)(this + 0x18) != 0) {
    *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0010a7f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(long *)(this + 0x18));
    return;
  }
  return;
}



/* JPH::CharacterVirtual::GetCenterOfMassTransform(JPH::Vec3, JPH::Quat, JPH::Shape const*) const */

float * JPH::CharacterVirtual::GetCenterOfMassTransform
                  (undefined8 param_1,float param_2,undefined8 param_3,float *param_4,long param_5,
                  long *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = (float)((ulong)param_3 >> 0x20);
  fVar7 = (float)param_3;
  fVar2 = fVar7 + fVar7;
  fVar6 = in_XMM3._0_4_;
  fVar13 = fVar4 + fVar4;
  fVar1 = in_XMM3._4_4_;
  fVar8 = fVar1 * (fVar6 + fVar6);
  fVar14 = fVar6 * (fVar6 + fVar6);
  fVar10 = (_LC3 - fVar7 * fVar2) - fVar4 * fVar13;
  fVar9 = fVar6 * fVar2 + fVar13 * fVar1;
  fVar15 = fVar6 * fVar13 - fVar2 * fVar1;
  fVar3 = fVar2 * fVar1 + fVar6 * fVar13;
  fVar11 = fVar4 * fVar2 - fVar8;
  fVar8 = fVar4 * fVar2 + fVar8;
  fVar12 = (_LC3 - fVar4 * fVar13) - fVar14;
  fVar14 = (_LC3 - fVar14) - fVar7 * fVar2;
  fVar4 = fVar6 * fVar2 - fVar13 * fVar1;
  fVar7 = param_2;
  uVar5 = (**(code **)(*param_6 + 0x18))();
  fVar1 = _LC3;
  fVar6 = (float)uVar5 + *(float *)(param_5 + 0xe0);
  fVar13 = (float)((ulong)uVar5 >> 0x20) + *(float *)(param_5 + 0xe4);
  fVar7 = fVar7 + *(float *)(param_5 + 0xe8);
  *param_4 = fVar12;
  param_4[1] = fVar8;
  param_4[2] = fVar4;
  param_4[3] = 0.0;
  param_4[4] = fVar11;
  param_4[5] = fVar14;
  param_4[6] = fVar3;
  param_4[7] = 0.0;
  param_4[8] = fVar9;
  param_4[9] = fVar15;
  param_4[10] = fVar10;
  param_4[0xb] = 0.0;
  param_4[0xf] = fVar1;
  fVar1 = *(float *)(param_5 + 0xb8);
  fVar2 = *(float *)(param_5 + 0x28);
  *(ulong *)(param_4 + 0xc) =
       CONCAT44(fVar1 * *(float *)(param_5 + 0x24) +
                fVar6 * fVar8 + fVar13 * fVar14 + fVar7 * fVar15 + (float)((ulong)param_1 >> 0x20),
                fVar1 * *(float *)(param_5 + 0x20) +
                fVar6 * fVar12 + fVar13 * fVar11 + fVar7 * fVar9 + (float)param_1);
  param_4[0xe] = fVar1 * fVar2 + fVar6 * fVar4 + fVar13 * fVar3 + fVar7 * fVar10 + param_2;
  return param_4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterVirtual::GetInnerBodyPosition() const */

undefined1  [16] __thiscall JPH::CharacterVirtual::GetInnerBodyPosition(CharacterVirtual *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar9 = *(float *)(this + 0x100);
  fVar1 = *(float *)(this + 0x10c);
  fVar2 = *(float *)(this + 0x104);
  fVar3 = *(float *)(this + 0xe8);
  fVar8 = (float)*(undefined8 *)(this + 0xe0);
  fVar4 = *(float *)(this + 0x108);
  fVar5 = *(float *)(this + 0xe4);
  fVar12 = (float)(*(uint *)(this + 0x100) ^ __LC2);
  fVar13 = (float)(*(uint *)(this + 0x104) ^ _UNK_0010ca94);
  fVar14 = (float)(*(uint *)(this + 0x108) ^ _UNK_0010ca98);
  fVar15 = (float)(*(uint *)(this + 0x10c) ^ _UNK_0010ca9c);
  fVar6 = *(float *)(this + 0xb8);
  fVar16 = (fVar1 * fVar8 + fVar9 * 0.0 + fVar2 * fVar3) - fVar4 * fVar5;
  fVar11 = (fVar1 * fVar5 - fVar9 * fVar3) + fVar2 * 0.0 + fVar4 * fVar8;
  fVar10 = ((fVar1 * fVar3 + fVar9 * fVar5) - fVar2 * fVar8) + fVar4 * 0.0;
  fVar9 = ((fVar1 * 0.0 - fVar9 * fVar8) - fVar2 * fVar5) - fVar4 * fVar3;
  auVar7._4_4_ = (fVar13 * fVar9 - fVar16 * fVar14) + fVar11 * fVar15 + fVar10 * fVar12 +
                 fVar6 * *(float *)(this + 0x24) + *(float *)(this + 0xf4);
  auVar7._0_4_ = ((fVar12 * fVar9 + fVar16 * fVar15 + fVar11 * fVar14) - fVar10 * fVar13) +
                 fVar6 * *(float *)(this + 0x20) + *(float *)(this + 0xf0);
  auVar7._8_4_ = ((fVar14 * fVar9 + fVar16 * fVar13) - fVar11 * fVar12) + fVar10 * fVar15 +
                 fVar6 * *(float *)(this + 0x28) + *(float *)(this + 0xf8);
  auVar7._12_4_ =
       (((fVar15 * fVar9 - fVar16 * fVar12) - fVar11 * fVar13) - fVar10 * fVar14) +
       fVar6 * *(float *)(this + 0x2c) + *(float *)(this + 0xfc);
  return auVar7;
}



/* JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3)
    */

undefined1  [16]
JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes
          (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
          float param_6,undefined8 param_7,float param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  
  fVar20 = (float)((ulong)param_5 >> 0x20);
  fVar31 = (float)((ulong)param_1 >> 0x20);
  fVar30 = (float)param_1;
  local_48 = (float)param_3;
  uStack_44 = (float)((ulong)param_3 >> 0x20);
  fVar16 = local_48 - fVar30;
  fVar17 = uStack_44 - fVar31;
  fVar18 = param_4 - param_2;
  fVar9 = (float)param_5 - fVar30;
  fVar10 = fVar20 - fVar31;
  fVar11 = param_6 - param_2;
  local_28 = (float)param_7;
  uStack_24 = (float)((ulong)param_7 >> 0x20);
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
  fVar12 = fVar20 * (local_28 - local_48) - (uStack_24 - uStack_44) * fVar19;
  fVar20 = (param_6 - param_4) * (uStack_24 - uStack_44) - (param_8 - param_4) * fVar20;
  fVar19 = fVar19 * (param_8 - param_4) - (local_28 - local_48) * (param_6 - param_4);
  fVar25 = param_2 * fVar13;
  fVar28 = fVar22 * fVar30 + 0.0 + fVar23 * fVar31 + fVar21 * param_2;
  fVar29 = fVar14 * fVar30 + 0.0 + fVar15 * fVar31 + fVar25;
  fVar30 = fVar30 * fVar26 + 0.0 + fVar31 * fVar27 + param_2 * fVar24;
  fVar31 = local_48 * fVar20 + 0.0 + uStack_44 * fVar19 + param_4 * fVar12;
  auVar1._4_4_ = fVar13 * fVar18 + fVar15 * fVar17 + fVar14 * fVar16 + 0.0;
  auVar1._0_4_ = fVar8 * fVar21 + fVar7 * fVar23 + fVar6 * fVar22 + 0.0;
  auVar1._8_4_ = fVar11 * fVar24 + fVar10 * fVar27 + fVar26 * fVar9 + 0.0;
  auVar1._12_4_ = (uint)(fVar12 * fVar18 + fVar17 * fVar19 + fVar16 * fVar20 + 0.0) ^ _LC8;
  iVar5 = movmskps(fVar25,auVar1);
  if (iVar5 == 0) {
    auVar4._4_4_ = -(uint)(_LC10 <= fVar29);
    auVar4._0_4_ = -(uint)(_LC10 <= fVar28);
    auVar4._8_4_ = -(uint)(_LC10 <= fVar30);
    auVar4._12_4_ = -(uint)(_LC10 <= fVar31);
    return auVar4;
  }
  if (iVar5 == 0xf) {
    auVar2._4_4_ = -(uint)(fVar29 <= _LC12);
    auVar2._0_4_ = -(uint)(fVar28 <= _LC12);
    auVar2._8_4_ = -(uint)(fVar30 <= _LC12);
    auVar2._12_4_ = -(uint)(fVar31 <= _LC12);
    return auVar2;
  }
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  return auVar3;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
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
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  fVar19 = (float)((ulong)param_6 >> 0x20);
  uStack_90._0_4_ = (float)param_6;
  fVar15 = (float)((ulong)param_4 >> 0x20);
  fVar11 = (float)param_4;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  local_98._0_4_ = (undefined4)param_5;
  local_98._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((ulong)param_1 >> 0x20);
  local_78 = (float)param_3;
  fStack_74 = (float)((ulong)param_3 >> 0x20);
  fVar14 = (float)local_98._0_4_ - local_78;
  fVar16 = (float)local_98._4_4_ - fStack_74;
  fVar17 = (float)uStack_90 - fVar11;
  fVar2 = ((float)uStack_90 - fVar4) * ((float)uStack_90 - fVar4) +
          ((float)local_98._0_4_ - local_88) * ((float)local_98._0_4_ - local_88) + 0.0 +
          ((float)local_98._4_4_ - fStack_84) * ((float)local_98._4_4_ - fStack_84);
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
  iVar1 = -(uint)(fVar18 < fVar2);
  uVar7 = iVar1 >> 0x1f;
  uVar8 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar9 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar12 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  fVar2 = (float)(local_98._0_4_ & uVar7 | ~uVar7 & (uint)local_88);
  fVar32 = (float)(local_98._4_4_ & uVar8 | ~uVar8 & (uint)fStack_84);
  fVar33 = (float)((uint)(float)uStack_90 & uVar9 | ~uVar9 & (uint)fVar4);
  fVar5 = (float)((uint)fVar19 & uVar12 | ~uVar12 & (uint)fVar6);
  fVar28 = local_78 - fVar2;
  fVar30 = fStack_74 - fVar32;
  fVar31 = fVar11 - fVar33;
  fVar29 = (float)(uVar7 & (uint)local_88 | ~uVar7 & local_98._0_4_);
  fVar22 = (float)(uVar8 & (uint)fStack_84 | ~uVar8 & local_98._4_4_);
  fVar10 = (float)(uVar9 & (uint)fVar4 | ~uVar9 & (uint)(float)uStack_90);
  fVar13 = (float)(uVar12 & (uint)fVar6 | ~uVar12 & (uint)fVar19);
  fVar20 = fVar29 - fVar2;
  fVar24 = fVar22 - fVar32;
  fVar26 = fVar10 - fVar33;
  fVar21 = fVar24 * fVar28 - fVar30 * fVar20;
  fVar25 = fVar26 * fVar30 - fVar31 * fVar24;
  fVar27 = fVar20 * fVar31 - fVar28 * fVar26;
  fVar34 = fVar21 * fVar21 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
  if (fVar34 < _LC68) {
    fVar22 = (float)local_98._4_4_ * (float)local_98._4_4_ +
             (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 +
             (float)uStack_90 * (float)uStack_90;
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
    if (_LC69 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ _LC8) /
               fVar22;
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
        uStack_90._4_4_ = fVar10 * (fVar13 - fVar5) + fVar5;
        fVar29 = fVar22;
      }
    }
    if (_LC69 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^ _LC8
                      ) / fVar18;
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
        uStack_90._4_4_ = fVar2 * (fVar19 - fVar15) + fVar15;
        fVar29 = fVar5;
      }
    }
    local_78 = local_78 - local_88;
    fStack_74 = fStack_74 - fStack_84;
    fVar11 = fVar11 - fVar4;
    fVar2 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (_LC69 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     _LC8) / fVar2;
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
        uStack_90._4_4_ = fVar18 * (fVar15 - fVar6) + fVar6;
      }
    }
    *param_7 = iVar1;
    return _local_98;
  }
  fVar4 = (0.0 - fVar33) * fVar31 + fVar30 * (0.0 - fVar32) + (0.0 - fVar2) * fVar28 + 0.0;
  fVar18 = (0.0 - fVar33) * fVar26 + (0.0 - fVar32) * fVar24 + (0.0 - fVar2) * fVar20 + 0.0;
  if ((fVar4 <= 0.0) && (fVar18 <= 0.0)) {
    local_98._4_4_ = fVar32;
    local_98._0_4_ = fVar2;
    uStack_90._0_4_ = fVar33;
    uStack_90._4_4_ = fVar5;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_98;
  }
  fVar14 = (0.0 - fVar11) * fVar31 + fVar30 * (0.0 - fStack_74) + (0.0 - local_78) * fVar28 + 0.0;
  fVar6 = (0.0 - fVar11) * fVar26 + (0.0 - fStack_74) * fVar24 + (0.0 - local_78) * fVar20 + 0.0;
  if (fVar14 < 0.0) {
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_0010b6dc;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_0010b6dc:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar4 = fVar4 / (fVar4 - fVar14);
      local_98._4_4_ = fVar4 * fVar30 + fVar32;
      local_98._0_4_ = fVar4 * fVar28 + fVar2;
      uStack_90._0_4_ = fVar4 * fVar31 + fVar33;
      uStack_90._4_4_ = fVar4 * (fVar15 - fVar5) + fVar5;
      return _local_98;
    }
  }
  fVar17 = fVar31 * (0.0 - fVar10) + fVar30 * (0.0 - fVar22) + fVar28 * (0.0 - fVar29) + 0.0;
  fVar16 = (0.0 - fVar10) * fVar26 + (0.0 - fVar22) * fVar24 + fVar20 * (0.0 - fVar29) + 0.0;
  if (fVar16 < 0.0) {
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_0010b89a;
  }
  else {
    if (fVar17 <= fVar16) {
      local_98._4_4_ = fVar22;
      local_98._0_4_ = fVar29;
      uStack_90._4_4_ = fVar13;
      uStack_90._0_4_ = fVar10;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_98;
    }
    if (((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) && (fVar16 == 0.0)) {
LAB_0010b89a:
      *param_7 = 5;
      fVar18 = fVar18 / (fVar18 - fVar16);
      local_98._4_4_ = fVar18 * fVar24 + fVar32;
      local_98._0_4_ = fVar18 * fVar20 + fVar2;
      uStack_90._0_4_ = fVar18 * fVar26 + fVar33;
      uStack_90._4_4_ = fVar18 * (fVar13 - fVar5) + fVar5;
      return _local_98;
    }
  }
  if (((fVar6 * fVar17 < fVar14 * fVar16) || (fVar6 = fVar6 - fVar14, fVar6 < 0.0)) ||
     (fVar17 - fVar16 < 0.0)) {
    *param_7 = 7;
    fVar34 = fVar34 * __LC70;
    fVar2 = (fVar33 + fVar11 + fVar10) * fVar21 +
            fVar27 * (fVar32 + fStack_74 + fVar22) + fVar25 * (fVar2 + local_78 + fVar29) + 0.0;
    auVar23._0_4_ = fVar25 * fVar2;
    auVar23._4_4_ = fVar27 * fVar2;
    auVar23._8_4_ = fVar21 * fVar2;
    auVar23._12_4_ = fVar21 * fVar2;
    auVar3._4_4_ = fVar34;
    auVar3._0_4_ = fVar34;
    auVar3._8_4_ = fVar34;
    auVar3._12_4_ = fVar34;
    _local_98 = divps(auVar23,auVar3);
  }
  else {
    fVar6 = fVar6 / ((fVar17 - fVar16) + fVar6);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_98._4_4_ = (fVar22 - fStack_74) * fVar6 + fStack_74;
    local_98._0_4_ = (fVar29 - local_78) * fVar6 + local_78;
    uStack_90._0_4_ = (fVar10 - fVar11) * fVar6 + fVar11;
    uStack_90._4_4_ = (fVar13 - fVar15) * fVar6 + fVar15;
  }
  return _local_98;
}



/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTetrahedron<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3, unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTetrahedron<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9)

{
  float fVar1;
  uint uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_88;
  int local_80;
  uint local_28;
  uint local_24;
  long local_20;
  
  auVar4 = ZEXT816(0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0xf;
  auVar6 = OriginOutsideOfTetrahedronPlanes();
  local_88 = auVar6._0_4_;
  local_80 = auVar6._8_4_;
  fVar1 = _LC1;
  if (local_88 != 0) {
    auVar4 = GetClosestPointOnTriangle<false>
                       (param_1,param_2,param_3,param_4,param_5,param_6,&local_28);
    fVar1 = auVar4._8_4_ * auVar4._8_4_ +
            auVar4._4_4_ * auVar4._4_4_ + auVar4._0_4_ * auVar4._0_4_ + 0.0;
  }
  if (auVar6._0_8_ >> 0x20 != 0) {
    auVar5 = GetClosestPointOnTriangle<false>
                       (param_1,param_2,param_5,param_6,param_7,param_8,&local_24);
    fVar3 = auVar5._8_4_ * auVar5._8_4_ +
            auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
    if (fVar3 < fVar1) {
      local_28 = local_24 * 2 & 0xc | local_24 & 1;
      fVar1 = fVar3;
      auVar4 = auVar5;
    }
  }
  if (local_80 != 0) {
    auVar5 = GetClosestPointOnTriangle<false>
                       (param_1,param_2,param_3,param_4,param_7,param_8,&local_24);
    fVar3 = auVar5._8_4_ * auVar5._8_4_ +
            auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
    if (fVar3 < fVar1) {
      local_28 = local_24 * 2 & 8 | local_24 & 3;
      fVar1 = fVar3;
      auVar4 = auVar5;
    }
  }
  uVar2 = local_28;
  if ((auVar6._8_8_ >> 0x20 != 0) &&
     (auVar6 = GetClosestPointOnTriangle<false>
                         (param_3,param_4,param_5,param_6,param_7,param_8,&local_24),
     uVar2 = local_28,
     auVar6._8_4_ * auVar6._8_4_ + auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0 <
     fVar1)) {
    uVar2 = local_24 * 2;
    auVar4 = auVar6;
  }
  *param_9 = uVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar4;
}



/* bool 
   JPH::GJKClosestPoint::CastRay<JPH::MinkowskiDifference<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,
   32u> > >, JPH::TransformedConvexObject<JPH::ConvexShape::Support> > >(JPH::Vec3, JPH::Vec3,
   float, 
   JPH::MinkowskiDifference<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,
   32u> > >, JPH::TransformedConvexObject<JPH::ConvexShape::Support> > const&, float&) */

bool JPH::GJKClosestPoint::
     CastRay<JPH::MinkowskiDifference<JPH::AddConvexRadius<JPH::PolygonConvexSupport<JPH::StaticArray<JPH::Vec3,32u>>>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float param_5,undefined1 (*param_6) [12],undefined8 *param_7,float *param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 (*pauVar6) [12];
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [12];
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong extraout_XMM1_Qa;
  ulong extraout_XMM1_Qa_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [12];
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_50;
  uint local_44;
  long local_40;
  
  pfVar9 = (float *)param_7[1];
  fVar21 = *pfVar9;
  fVar26 = pfVar9[1];
  uVar2 = *(undefined8 *)(pfVar9 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_6[0x10] = 0;
  auVar30 = (**(code **)(**(long **)(pfVar9 + 0x10) + 0x10))
                      (CONCAT44((float)uVar2 * 0.0 + (float)((ulong)uVar2 >> 0x20) * 0.0 +
                                pfVar9[6] * 0.0,fVar21 * 0.0 + fVar26 * 0.0 + pfVar9[2] * 0.0),
                       (float)*(undefined8 *)(pfVar9 + 8) * 0.0 +
                       (float)((ulong)*(undefined8 *)(pfVar9 + 8) >> 0x20) * 0.0 +
                       (float)*(undefined8 *)(pfVar9 + 10) * 0.0,*(undefined8 *)(pfVar9 + 10));
  fVar20 = auVar30._8_4_;
  local_b8._0_4_ = auVar30._0_4_;
  local_b8._4_4_ = auVar30._4_4_;
  fVar22 = (float)local_b8._0_4_ * pfVar9[2];
  fVar23 = (float)local_b8._0_4_ * pfVar9[3];
  fVar17 = (float)local_b8._4_4_ * pfVar9[6];
  fVar18 = (float)local_b8._4_4_ * pfVar9[7];
  puVar3 = (uint *)**(undefined8 **)*param_7;
  fVar21 = (float)puVar3[4];
  fVar26 = (float)puVar3[5];
  fVar27 = (float)puVar3[6];
  fVar19 = (float)puVar3[7];
  fVar24 = (float)puVar3[6] * 0.0 + (float)puVar3[5] * 0.0 + (float)puVar3[4] * 0.0 + 0.0;
  for (pfVar8 = (float *)(puVar3 + 8); pfVar8 < puVar3 + (ulong)*puVar3 * 4 + 4; pfVar8 = pfVar8 + 4
      ) {
    if (fVar24 < pfVar8[2] * 0.0 + pfVar8[1] * 0.0 + *pfVar8 * 0.0 + 0.0) {
      fVar21 = *pfVar8;
      fVar26 = pfVar8[1];
      fVar27 = pfVar8[2];
      fVar19 = pfVar8[3];
      fVar24 = 0.0;
    }
  }
  local_68 = (float)param_1;
  fStack_64 = (float)((ulong)param_1 >> 0x20);
  fStack_60 = (float)param_2;
  fStack_5c = (float)((ulong)param_2 >> 0x20);
  bVar7 = false;
  local_74 = 3.4028235e+38;
  local_50 = 0.0;
  fVar24 = local_68 -
           (fVar21 - ((float)local_b8._0_4_ * *pfVar9 + (float)local_b8._4_4_ * pfVar9[4] +
                      fVar20 * pfVar9[8] + pfVar9[0xc]));
  local_b8._4_4_ =
       fStack_64 -
       (fVar26 - ((float)local_b8._0_4_ * pfVar9[1] + (float)local_b8._4_4_ * pfVar9[5] +
                  fVar20 * pfVar9[9] + pfVar9[0xd]));
  local_b8._0_4_ = fVar24;
  uStack_b0._0_4_ = fStack_60 - (fVar27 - (fVar22 + fVar17 + fVar20 * pfVar9[10] + pfVar9[0xe]));
  uStack_b0._4_4_ = fStack_5c - (fVar19 - (fVar23 + fVar18 + fVar20 * pfVar9[0xb] + pfVar9[0xf]));
  uVar15 = uStack_b0;
  fVar21 = local_68;
  fVar26 = fStack_64;
  fVar27 = fStack_60;
  fVar19 = fStack_5c;
  fVar17 = (float)local_b8._4_4_;
LAB_0010bdbe:
  do {
    pfVar8 = (float *)param_7[1];
    fStack_a0 = (float)uVar15;
    fVar18 = 0.0 - fVar24;
    fVar20 = 0.0 - fVar17;
    fVar22 = 0.0 - fStack_a0;
    local_b8._4_4_ =
         (float)*(undefined8 *)(pfVar8 + 4) * fVar18 +
         (float)((ulong)*(undefined8 *)(pfVar8 + 4) >> 0x20) * fVar20 + pfVar8[6] * fVar22;
    local_b8._0_4_ = *pfVar8 * fVar18 + pfVar8[1] * fVar20 + pfVar8[2] * fVar22;
    uStack_b0._0_4_ =
         (float)*(undefined8 *)(pfVar8 + 8) * fVar18 +
         (float)((ulong)*(undefined8 *)(pfVar8 + 8) >> 0x20) * fVar20 +
         (float)*(undefined8 *)(pfVar8 + 10) * fVar22;
    uStack_b0._4_4_ = fVar18 * 0.0 + fVar20 * 0.0 + fVar22 * 0.0;
    auVar30 = (**(code **)(**(long **)(pfVar8 + 0x10) + 0x10))(local_b8,uStack_b0);
    fVar20 = auVar30._8_4_;
    local_b8._0_4_ = auVar30._0_4_;
    puVar4 = *(undefined8 **)*param_7;
    local_b8._4_4_ = auVar30._4_4_;
    fVar18 = SQRT(fStack_a0 * fStack_a0 + fVar17 * fVar17 + fVar24 * fVar24 + 0.0);
    if (fVar18 <= 0.0) {
      puVar3 = (uint *)*puVar4;
      fVar22 = (float)puVar3[4];
      fVar23 = (float)puVar3[5];
      fVar28 = (float)puVar3[6];
      fVar29 = (float)puVar3[7];
      fVar18 = (float)puVar3[6] * fStack_a0 +
               (float)puVar3[5] * fVar17 + (float)puVar3[4] * fVar24 + 0.0;
      for (pfVar9 = (float *)(puVar3 + 8); pfVar9 < puVar3 + (ulong)*puVar3 * 4 + 4;
          pfVar9 = pfVar9 + 4) {
        fVar25 = pfVar9[2] * fStack_a0 + pfVar9[1] * fVar17 + *pfVar9 * fVar24 + 0.0;
        if (fVar18 < fVar25) {
          fVar22 = *pfVar9;
          fVar23 = pfVar9[1];
          fVar28 = pfVar9[2];
          fVar29 = pfVar9[3];
          fVar18 = fVar25;
        }
      }
    }
    else {
      puVar3 = (uint *)*puVar4;
      fVar18 = *(float *)((undefined8 *)*param_7 + 1) / fVar18;
      fVar22 = (float)puVar3[4];
      fVar23 = (float)puVar3[5];
      fVar28 = (float)puVar3[6];
      fVar29 = (float)puVar3[7];
      fStack_9c = (float)(uVar15 >> 0x20);
      fVar25 = (float)puVar3[6] * fStack_a0 +
               (float)puVar3[5] * fVar17 + (float)puVar3[4] * fVar24 + 0.0;
      for (pfVar9 = (float *)(puVar3 + 8); pfVar9 < puVar3 + (ulong)*puVar3 * 4 + 4;
          pfVar9 = pfVar9 + 4) {
        fVar16 = pfVar9[2] * fStack_a0 + pfVar9[1] * fVar17 + *pfVar9 * fVar24 + 0.0;
        if (fVar25 < fVar16) {
          fVar22 = *pfVar9;
          fVar23 = pfVar9[1];
          fVar28 = pfVar9[2];
          fVar29 = pfVar9[3];
          fVar25 = fVar16;
        }
      }
      fVar22 = fVar18 * fVar24 + fVar22;
      fVar23 = fVar18 * fVar17 + fVar23;
      fVar28 = fVar18 * fStack_a0 + fVar28;
      fVar29 = fVar18 * fStack_9c + fVar29;
    }
    fVar22 = fVar22 - ((float)local_b8._0_4_ * *pfVar8 + (float)local_b8._4_4_ * pfVar8[4] +
                       fVar20 * pfVar8[8] + pfVar8[0xc]);
    fVar23 = fVar23 - ((float)local_b8._0_4_ * pfVar8[1] + (float)local_b8._4_4_ * pfVar8[5] +
                       fVar20 * pfVar8[9] + pfVar8[0xd]);
    fVar28 = fVar28 - ((float)local_b8._0_4_ * pfVar8[2] + (float)local_b8._4_4_ * pfVar8[6] +
                       fVar20 * pfVar8[10] + pfVar8[0xe]);
    fVar29 = fVar29 - ((float)local_b8._0_4_ * pfVar8[3] + (float)local_b8._4_4_ * pfVar8[7] +
                       fVar20 * pfVar8[0xb] + pfVar8[0xf]);
    fVar18 = (fVar27 - fVar28) * fStack_a0 +
             (fVar26 - fVar23) * fVar17 + (fVar21 - fVar22) * fVar24 + 0.0;
    if (0.0 < fVar18) {
      fVar26 = (float)((ulong)param_3 >> 0x20);
      fVar21 = fStack_a0 * (float)param_4 + fVar17 * fVar26 + fVar24 * (float)param_3 + 0.0;
      if (fVar21 < 0.0) {
        fVar19 = local_50 - fVar18 / fVar21;
        bVar7 = local_50 == fVar19;
        local_50 = fVar19;
        if (bVar7) goto LAB_0010c1a7;
        if (fVar19 < *param_8) {
          local_74 = 3.4028235e+38;
          bVar7 = true;
          fStack_8c = (float)((ulong)param_4 >> 0x20);
          fVar21 = fVar19 * (float)param_3 + local_68;
          fVar26 = fVar19 * fVar26 + fStack_64;
          fVar27 = fVar19 * (float)param_4 + fStack_60;
          fVar19 = fVar19 * fStack_8c + fStack_5c;
          goto LAB_0010bfc2;
        }
      }
      bVar7 = false;
      goto LAB_0010c1b5;
    }
LAB_0010bfc2:
    lVar14 = (long)*(int *)param_6[0x10];
    iVar11 = *(int *)param_6[0x10] + 1;
    pfVar8 = (float *)(lVar14 * 0x10 + 0x40 + (long)param_6);
    *pfVar8 = fVar22;
    pfVar8[1] = fVar23;
    pfVar8[2] = fVar28;
    pfVar8[3] = fVar29;
    *(int *)param_6[0x10] = iVar11;
    if (iVar11 < 1) {
LAB_0010c198:
      local_74 = _LC1;
      if (!bVar7) goto LAB_0010c1a7;
      *(float *)(param_6[5] + 4) = fVar22;
      *(float *)(param_6[5] + 8) = fVar23;
      *(float *)param_6[6] = fVar28;
      *(float *)(param_6[6] + 4) = fVar29;
      bVar7 = false;
      *(undefined4 *)param_6[0x10] = 1;
      local_b8._4_4_ = fVar26 - fVar23;
      local_b8._0_4_ = fVar21 - fVar22;
      uStack_b0._0_4_ = fVar27 - fVar28;
      uStack_b0._4_4_ = fVar19 - fVar29;
      uVar15 = uStack_b0;
      fVar24 = fVar21 - fVar22;
      fVar17 = fVar26 - fVar23;
      goto LAB_0010bdbe;
    }
    pauVar10 = param_6;
    do {
      fVar24 = *(float *)(pauVar10[5] + 8);
      fVar17 = *(float *)pauVar10[6];
      fVar18 = *(float *)(pauVar10[6] + 4);
      pauVar6 = pauVar10 + 1;
      *(float *)*pauVar10 = fVar21 - *(float *)(pauVar10[5] + 4);
      *(float *)(*pauVar10 + 4) = fVar26 - fVar24;
      *(float *)(*pauVar10 + 8) = fVar27 - fVar17;
      *(float *)pauVar10[1] = fVar19 - fVar18;
      pauVar10 = (undefined1 (*) [12])(*pauVar6 + 4);
    } while ((undefined1 (*) [12])(*pauVar6 + 4) !=
             (undefined1 (*) [12])((long)param_6 + lVar14 * 0x10 + 0x10));
    if (iVar11 == 3) {
      ClosestPoint::GetClosestPointOnTriangle<false>
                (*(undefined8 *)*param_6,*(undefined8 *)(*param_6 + 8),
                 *(undefined8 *)(param_6[1] + 4),*(undefined8 *)param_6[2],
                 *(undefined8 *)(param_6[2] + 8),*(undefined8 *)(param_6[3] + 4),&local_44);
      fVar24 = (float)extraout_XMM1_Qa_00;
      uStack_b0 = extraout_XMM1_Qa_00;
      local_b8._0_4_ = extraout_XMM0_Da_00;
      local_b8._4_4_ = extraout_XMM0_Db_00;
    }
    else if (iVar11 < 4) {
      if (iVar11 == 1) {
        local_44 = 1;
        uStack_b0 = *(ulong *)(*param_6 + 8);
        local_b8._0_4_ = *(undefined4 *)*param_6;
        local_b8._4_4_ = *(undefined4 *)(*param_6 + 4);
        fVar24 = *(float *)(*param_6 + 8);
      }
      else {
        uVar2 = *(undefined8 *)*(undefined1 (*) [12])(param_6[1] + 4);
        local_a8 = (float)*(undefined8 *)*param_6;
        fStack_a4 = (float)((ulong)*(undefined8 *)*param_6 >> 0x20);
        fStack_a0 = (float)*(undefined8 *)(*param_6 + 8);
        fStack_9c = (float)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
        local_88 = (float)uVar2;
        fStack_84 = (float)((ulong)uVar2 >> 0x20);
        fStack_80 = (float)*(undefined8 *)param_6[2];
        fStack_7c = (float)((ulong)*(undefined8 *)param_6[2] >> 0x20);
        uStack_b0._4_4_ = fStack_9c;
        _local_b8 = *param_6;
        fVar24 = local_88 - local_a8;
        fVar18 = fStack_84 - fStack_a4;
        fVar20 = fStack_80 - fStack_a0;
        fVar17 = fVar20 * fVar20 + fVar18 * fVar18 + fVar24 * fVar24 + 0.0;
        if (fVar17 < _LC69) {
          if (fStack_a0 * fStack_a0 + local_a8 * local_a8 + 0.0 + fStack_a4 * fStack_a4 <
              fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0)
          goto LAB_0010c0d9;
LAB_0010c4c2:
          uStack_b0._4_4_ = fStack_7c;
          _local_b8 = *(undefined1 (*) [12])(param_6[1] + 4);
          local_44 = 2;
        }
        else {
          fVar17 = (float)((uint)(fVar20 * fStack_a0 + fVar18 * fStack_a4 + fVar24 * local_a8 + 0.0)
                          ^ _LC8) / fVar17;
          if (0.0 < fVar17) {
            fVar24 = _LC3 - fVar17;
            if (fVar24 <= 0.0) goto LAB_0010c4c2;
            local_44 = 3;
            local_b8._4_4_ = fVar17 * fStack_84 + fVar24 * fStack_a4;
            local_b8._0_4_ = fVar17 * local_88 + fVar24 * local_a8;
            uStack_b0._0_4_ = fVar17 * fStack_80 + fVar24 * fStack_a0;
            uStack_b0._4_4_ = fVar17 * fStack_7c + fVar24 * fStack_9c;
          }
          else {
LAB_0010c0d9:
            local_44 = 1;
          }
        }
        fVar24 = (float)uStack_b0;
      }
    }
    else {
      if (iVar11 != 4) goto LAB_0010c198;
      ClosestPoint::GetClosestPointOnTetrahedron<false>
                (*(undefined8 *)*param_6,*(undefined8 *)(*param_6 + 8),
                 *(undefined8 *)(param_6[1] + 4),*(undefined8 *)param_6[2],
                 *(undefined8 *)(param_6[2] + 8),*(undefined8 *)(param_6[3] + 4),
                 *(undefined8 *)param_6[4],*(undefined8 *)(param_6[4] + 8),&local_44);
      fVar24 = (float)extraout_XMM1_Qa;
      uStack_b0 = extraout_XMM1_Qa;
      local_b8._0_4_ = extraout_XMM0_Da;
      local_b8._4_4_ = extraout_XMM0_Db;
    }
    fVar18 = (float)local_b8._4_4_ * (float)local_b8._4_4_ +
             (float)local_b8._0_4_ * (float)local_b8._0_4_ + 0.0 + fVar24 * fVar24;
    if (local_74 <= fVar18) goto LAB_0010c198;
    uVar15 = uStack_b0 & 0xffffffff00000000 | (ulong)(uint)fVar24;
    if (local_44 == 0xf) goto LAB_0010c1a7;
    lVar13 = 0;
    iVar11 = 0;
    uVar5 = local_44 & 1;
    while( true ) {
      if (uVar5 != 0) {
        lVar12 = (long)iVar11;
        iVar11 = iVar11 + 1;
        puVar4 = (undefined8 *)((long)param_6 + lVar13 * 0x10 + 0x40);
        uVar2 = puVar4[1];
        puVar1 = (undefined8 *)(lVar12 * 0x10 + 0x40 + (long)param_6);
        *puVar1 = *puVar4;
        puVar1[1] = uVar2;
      }
      if (lVar14 == lVar13) break;
      lVar13 = lVar13 + 1;
      uVar5 = 1 << ((byte)lVar13 & 0x1f) & local_44;
    }
    *(int *)param_6[0x10] = iVar11;
    fVar24 = (float)local_b8._0_4_;
    fVar17 = (float)local_b8._4_4_;
    local_74 = fVar18;
    if (fVar18 <= param_5 * param_5) {
LAB_0010c1a7:
      *param_8 = local_50;
      bVar7 = true;
LAB_0010c1b5:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return bVar7;
    }
  } while( true );
}



/* JPH::CharacterVsCharacterCollisionSimple::Remove(JPH::CharacterVirtual const*) */

void JPH::CharacterVsCharacterCollisionSimple::_GLOBAL__sub_I_Remove(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC77;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CharacterVsCharacterCollisionSimple::~CharacterVsCharacterCollisionSimple() */

void __thiscall
JPH::CharacterVsCharacterCollisionSimple::~CharacterVsCharacterCollisionSimple
          (CharacterVsCharacterCollisionSimple *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CharacterVirtual::ContactCastCollector::~ContactCastCollector() */

void __thiscall
JPH::CharacterVirtual::ContactCastCollector::~ContactCastCollector(ContactCastCollector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CharacterVirtual::ContactCollector::~ContactCollector() */

void __thiscall JPH::CharacterVirtual::ContactCollector::~ContactCollector(ContactCollector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::IgnoreSingleBodyFilterChained::~IgnoreSingleBodyFilterChained() */

void __thiscall
JPH::IgnoreSingleBodyFilterChained::~IgnoreSingleBodyFilterChained
          (IgnoreSingleBodyFilterChained *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
