/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<unsigned int, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::Hash<unsigned int>, std::equal_to<unsigned int> >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::rehash(uint param_1) {
   undefined4 *puVar1;
   byte bVar2;
   char cVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   ushort uVar6;
   undefined1 auVar7[16];
   uint uVar8;
   long lVar9;
   byte *pbVar10;
   long lVar11;
   int iVar12;
   char *pcVar13;
   uint uVar14;
   undefined4 *puVar15;
   uint uVar16;
   undefined4 in_register_0000003c;
   long *plVar17;
   ulong uVar18;
   undefined1 *puVar19;
   int iVar20;
   long lVar21;
   char cVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   byte *pbVar26;
   undefined1 auVar27[16];
   plVar17 = (long*)CONCAT44(in_register_0000003c, param_1);
   puVar19 = (undefined1*)plVar17[1];
   uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
   if (*(uint*)( (long)plVar17 + 0x14 ) != 0) {
      lVar9 = 0;
      do {
         while (true) {
            pcVar13 = puVar19 + lVar9;
            if (*pcVar13 != '\0') break;
            LAB_0010002a:lVar9 = lVar9 + 1;
            if ((uint)uVar18 <= (uint)lVar9) goto LAB_00100054;
         }
;
         if (*pcVar13 == '\x7f') {
            *pcVar13 = '\0';
            puVar19 = (undefined1*)plVar17[1];
            uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
            goto LAB_0010002a;
         }

         *pcVar13 = '\x7f';
         uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
         lVar9 = lVar9 + 1;
         puVar19 = (undefined1*)plVar17[1];
      }
 while ( (uint)lVar9 < *(uint*)( (long)plVar17 + 0x14 ) );
   }

   LAB_00100054:puVar19[uVar18] = *puVar19;
   lVar9 = 1;
   do {
      iVar12 = (int)lVar9;
      puVar19 = (undefined1*)( plVar17[1] + lVar9 );
      lVar9 = lVar9 + 1;
      *(undefined1*)( plVar17[1] + ( ulong )(uint)(iVar12 + *(int*)( (long)plVar17 + 0x14 )) ) = *puVar19;
      auVar7 = __LC0;
   }
 while ( lVar9 != 0xf );
   uVar23 = *(uint*)( (long)plVar17 + 0x14 );
   uVar18 = (ulong)uVar23;
   uVar16 = uVar23 - 1;
   if (uVar23 != 0) {
      lVar9 = 0;
      do {
         lVar11 = plVar17[1];
         if (*(char*)( lVar11 + lVar9 ) == '\x7f') {
            lVar21 = lVar9 * 0x10;
            pbVar10 = (byte*)( *plVar17 + lVar21 );
            pbVar26 = pbVar10 + 4;
            if (pbVar26 <= pbVar10) goto LAB_00100209;
            do {
               uVar24 = 0xcbf29ce484222325;
               do {
                  bVar2 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  uVar24 = ( bVar2 ^ uVar24 ) * 0x100000001b3;
               }
 while ( pbVar10 != pbVar26 );
               uVar23 = (uint)uVar24 | 0xffffff80;
               uVar24 = uVar24 >> 7;
               while (true) {
                  uVar25 = (int)uVar18 - 1U & (uint)uVar24;
                  auVar27 = *(undefined1(*) [16])( lVar11 + (ulong)uVar25 ) & auVar7;
                  uVar6 = ( ushort )(SUB161(auVar27 >> 7, 0) & 1) | ( ushort )(SUB161(auVar27 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar27 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar27 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar27 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar27 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar27 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar27 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar27 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar27 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar27 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar27 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar27 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar27 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar27 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar27[0xf] >> 7) << 0xf;
                  uVar8 = uVar25;
                  while (uVar6 == 0xffff) {
                     uVar8 = uVar8 + 0x10 & uVar16;
                     auVar27 = *(undefined1(*) [16])( lVar11 + (ulong)uVar8 ) & auVar7;
                     uVar6 = ( ushort )(SUB161(auVar27 >> 7, 0) & 1) | ( ushort )(SUB161(auVar27 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar27 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar27 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar27 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar27 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar27 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar27 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar27 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar27 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar27 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar27 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar27 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar27 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar27 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar27[0xf] >> 7) << 0xf;
                  }
;
                  iVar20 = (int)lVar9;
                  iVar12 = 0;
                  for (uVar14 = uVar6 ^ 0xffff; ( uVar14 & 1 ) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                     iVar12 = iVar12 + 1;
                  }

                  uVar8 = iVar12 + uVar8 & uVar16;
                  cVar22 = (char)uVar23;
                  if (( ( uVar8 - uVar25 ^ iVar20 - uVar25 ) & uVar16 & 0xfffffff0 ) == 0) {
                     *(char*)( lVar11 + lVar9 ) = cVar22;
                     *(char*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & iVar20 - 0xfU ) + 0xf) ) = cVar22;
                     uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
                     goto LAB_001000c0;
                  }

                  pcVar13 = (char*)( lVar11 + (ulong)uVar8 );
                  lVar11 = (ulong)uVar8 * 0x10;
                  cVar3 = *pcVar13;
                  *pcVar13 = cVar22;
                  if (cVar3 == '\0') {
                     *(char*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & uVar8 - 0xf ) + 0xf) ) = cVar22;
                     *(undefined1*)( plVar17[1] + lVar9 ) = 0;
                     *(undefined1*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & iVar20 - 0xfU ) + 0xf) ) = 0;
                     puVar1 = (undefined4*)( *plVar17 + lVar11 );
                     puVar15 = (undefined4*)( *plVar17 + lVar21 );
                     uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
                     uVar5 = *(undefined8*)( puVar15 + 2 );
                     *puVar1 = *puVar15;
                     *(undefined8*)( puVar1 + 2 ) = uVar5;
                     goto LAB_001000c0;
                  }

                  *(char*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & uVar8 - 0xf ) + 0xf) ) = cVar22;
                  puVar1 = (undefined4*)( *plVar17 + lVar11 );
                  pbVar10 = (byte*)( *plVar17 + lVar21 );
                  uVar4 = *(undefined4*)pbVar10;
                  *(undefined4*)pbVar10 = *puVar1;
                  lVar11 = *(long*)( pbVar10 + 8 );
                  *puVar1 = uVar4;
                  for (int i = 0; i < 8; i++) {
                     pbVar10[( i + 8 )] = 0;
                  }

                  if (*(long*)( puVar1 + 2 ) != 0) {
                     *(long*)( pbVar10 + 8 ) = *(long*)( puVar1 + 2 );
                     *(undefined8*)( puVar1 + 2 ) = 0;
                  }

                  if (lVar11 != 0) {
                     *(long*)( puVar1 + 2 ) = lVar11;
                  }

                  pbVar26 = pbVar10 + 4;
                  uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
                  lVar11 = plVar17[1];
                  if (pbVar10 < pbVar26) break;
                  LAB_00100209:uVar23 = 0xffffffa5;
                  uVar24 = 0xc9084446;
               }
;
            }
 while ( true );
         }

         LAB_001000c0:lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < (uint)uVar18 );
   }

   *(int*)( plVar17 + 3 ) = (int)( uVar18 * 7 >> 3 ) - (int)plVar17[2];
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::Ref<JPH::RefTargetVirtual> >,
   JPH::UnorderedMapDetail<unsigned int, JPH::Ref<JPH::RefTargetVirtual> >, JPH::Hash<unsigned int>,
   std::equal_to<unsigned int> >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::rehash(uint param_1) {
   undefined4 *puVar1;
   byte bVar2;
   char cVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   ushort uVar6;
   undefined1 auVar7[16];
   uint uVar8;
   long lVar9;
   byte *pbVar10;
   long lVar11;
   int iVar12;
   char *pcVar13;
   uint uVar14;
   undefined4 *puVar15;
   uint uVar16;
   undefined4 in_register_0000003c;
   long *plVar17;
   ulong uVar18;
   undefined1 *puVar19;
   int iVar20;
   long lVar21;
   char cVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   byte *pbVar26;
   undefined1 auVar27[16];
   plVar17 = (long*)CONCAT44(in_register_0000003c, param_1);
   puVar19 = (undefined1*)plVar17[1];
   uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
   if (*(uint*)( (long)plVar17 + 0x14 ) != 0) {
      lVar9 = 0;
      do {
         while (true) {
            pcVar13 = puVar19 + lVar9;
            if (*pcVar13 != '\0') break;
            LAB_001002da:lVar9 = lVar9 + 1;
            if ((uint)uVar18 <= (uint)lVar9) goto LAB_00100304;
         }
;
         if (*pcVar13 == '\x7f') {
            *pcVar13 = '\0';
            puVar19 = (undefined1*)plVar17[1];
            uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
            goto LAB_001002da;
         }

         *pcVar13 = '\x7f';
         uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
         lVar9 = lVar9 + 1;
         puVar19 = (undefined1*)plVar17[1];
      }
 while ( (uint)lVar9 < *(uint*)( (long)plVar17 + 0x14 ) );
   }

   LAB_00100304:puVar19[uVar18] = *puVar19;
   lVar9 = 1;
   do {
      iVar12 = (int)lVar9;
      puVar19 = (undefined1*)( plVar17[1] + lVar9 );
      lVar9 = lVar9 + 1;
      *(undefined1*)( plVar17[1] + ( ulong )(uint)(iVar12 + *(int*)( (long)plVar17 + 0x14 )) ) = *puVar19;
      auVar7 = __LC0;
   }
 while ( lVar9 != 0xf );
   uVar23 = *(uint*)( (long)plVar17 + 0x14 );
   uVar18 = (ulong)uVar23;
   uVar16 = uVar23 - 1;
   if (uVar23 != 0) {
      lVar9 = 0;
      do {
         lVar11 = plVar17[1];
         if (*(char*)( lVar11 + lVar9 ) == '\x7f') {
            lVar21 = lVar9 * 0x10;
            pbVar10 = (byte*)( *plVar17 + lVar21 );
            pbVar26 = pbVar10 + 4;
            if (pbVar26 <= pbVar10) goto LAB_001004b9;
            do {
               uVar24 = 0xcbf29ce484222325;
               do {
                  bVar2 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  uVar24 = ( bVar2 ^ uVar24 ) * 0x100000001b3;
               }
 while ( pbVar10 != pbVar26 );
               uVar23 = (uint)uVar24 | 0xffffff80;
               uVar24 = uVar24 >> 7;
               while (true) {
                  uVar25 = (int)uVar18 - 1U & (uint)uVar24;
                  auVar27 = *(undefined1(*) [16])( lVar11 + (ulong)uVar25 ) & auVar7;
                  uVar6 = ( ushort )(SUB161(auVar27 >> 7, 0) & 1) | ( ushort )(SUB161(auVar27 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar27 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar27 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar27 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar27 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar27 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar27 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar27 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar27 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar27 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar27 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar27 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar27 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar27 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar27[0xf] >> 7) << 0xf;
                  uVar8 = uVar25;
                  while (uVar6 == 0xffff) {
                     uVar8 = uVar8 + 0x10 & uVar16;
                     auVar27 = *(undefined1(*) [16])( lVar11 + (ulong)uVar8 ) & auVar7;
                     uVar6 = ( ushort )(SUB161(auVar27 >> 7, 0) & 1) | ( ushort )(SUB161(auVar27 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar27 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar27 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar27 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar27 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar27 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar27 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar27 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar27 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar27 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar27 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar27 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar27 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar27 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar27[0xf] >> 7) << 0xf;
                  }
;
                  iVar20 = (int)lVar9;
                  iVar12 = 0;
                  for (uVar14 = uVar6 ^ 0xffff; ( uVar14 & 1 ) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                     iVar12 = iVar12 + 1;
                  }

                  uVar8 = iVar12 + uVar8 & uVar16;
                  cVar22 = (char)uVar23;
                  if (( ( uVar8 - uVar25 ^ iVar20 - uVar25 ) & uVar16 & 0xfffffff0 ) == 0) {
                     *(char*)( lVar11 + lVar9 ) = cVar22;
                     *(char*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & iVar20 - 0xfU ) + 0xf) ) = cVar22;
                     uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
                     goto LAB_00100370;
                  }

                  pcVar13 = (char*)( lVar11 + (ulong)uVar8 );
                  lVar11 = (ulong)uVar8 * 0x10;
                  cVar3 = *pcVar13;
                  *pcVar13 = cVar22;
                  if (cVar3 == '\0') {
                     *(char*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & uVar8 - 0xf ) + 0xf) ) = cVar22;
                     *(undefined1*)( plVar17[1] + lVar9 ) = 0;
                     *(undefined1*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & iVar20 - 0xfU ) + 0xf) ) = 0;
                     puVar1 = (undefined4*)( *plVar17 + lVar11 );
                     puVar15 = (undefined4*)( *plVar17 + lVar21 );
                     uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
                     uVar5 = *(undefined8*)( puVar15 + 2 );
                     *puVar1 = *puVar15;
                     *(undefined8*)( puVar1 + 2 ) = uVar5;
                     goto LAB_00100370;
                  }

                  *(char*)( plVar17[1] + ( ulong )(( *(int*)( (long)plVar17 + 0x14 ) - 1U & uVar8 - 0xf ) + 0xf) ) = cVar22;
                  puVar1 = (undefined4*)( *plVar17 + lVar11 );
                  pbVar10 = (byte*)( *plVar17 + lVar21 );
                  uVar4 = *(undefined4*)pbVar10;
                  *(undefined4*)pbVar10 = *puVar1;
                  lVar11 = *(long*)( pbVar10 + 8 );
                  *puVar1 = uVar4;
                  for (int i = 0; i < 8; i++) {
                     pbVar10[( i + 8 )] = 0;
                  }

                  if (*(long*)( puVar1 + 2 ) != 0) {
                     *(long*)( pbVar10 + 8 ) = *(long*)( puVar1 + 2 );
                     *(undefined8*)( puVar1 + 2 ) = 0;
                  }

                  if (lVar11 != 0) {
                     *(long*)( puVar1 + 2 ) = lVar11;
                  }

                  pbVar26 = pbVar10 + 4;
                  uVar18 = ( ulong ) * (uint*)( (long)plVar17 + 0x14 );
                  lVar11 = plVar17[1];
                  if (pbVar10 < pbVar26) break;
                  LAB_001004b9:uVar23 = 0xffffffa5;
                  uVar24 = 0xc9084446;
               }
;
            }
 while ( true );
         }

         LAB_00100370:lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < (uint)uVar18 );
   }

   *(int*)( plVar17 + 3 ) = (int)( uVar18 * 7 >> 3 ) - (int)plVar17[2];
   return;
}
/* JPH::DebugRendererPlayback::DrawFrame(unsigned int) const */void JPH::DebugRendererPlayback::DrawFrame(DebugRendererPlayback *this, uint param_1) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   uint uVar4;
   byte bVar5;
   ushort uVar6;
   int iVar7;
   uint uVar8;
   byte bVar9;
   byte bVar10;
   uint uVar11;
   long lVar12;
   ulong uVar13;
   byte *pbVar14;
   int *piVar15;
   long lVar16;
   undefined8 *puVar17;
   long lVar18;
   long *plVar19;
   byte *pbVar20;
   uint uVar21;
   uint uVar22;
   undefined8 *puVar23;
   long in_FS_OFFSET;
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined8 local_78;
   undefined8 local_70;
   float local_68;
   float fStack_64;
   float fStack_60;
   float fStack_5c;
   float fStack_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar19 = (long*)( (ulong)param_1 * 0x60 + *(long*)( this + 0x58 ) );
   puVar17 = (undefined8*)plVar19[2];
   puVar23 = puVar17 + *plVar19 * 6;
   for (; puVar17 != puVar23; puVar17 = puVar17 + 6) {
      ( **(code**)( **(long**)this + 0x10 ) )(*puVar17, puVar17[1], puVar17[2], puVar17[3], *(long**)this, *(undefined4*)( puVar17 + 4 ));
   }

   puVar17 = (undefined8*)plVar19[5];
   puVar23 = puVar17 + plVar19[3] * 8;
   for (; puVar23 != puVar17; puVar17 = puVar17 + 8) {
      ( **(code**)( **(long**)this + 0x18 ) )(*puVar17, puVar17[1], puVar17[2], puVar17[3], puVar17[4], *(long**)this, *(undefined4*)( puVar17 + 6 ), *(undefined4*)( (long)puVar17 + 0x34 ));
   }

   puVar17 = (undefined8*)plVar19[8];
   puVar23 = puVar17 + plVar19[6] * 8;
   for (; puVar23 != puVar17; puVar17 = puVar17 + 8) {
      local_70 = puVar17[2];
      local_78 = puVar17[3];
      ( **(code**)( **(long**)this + 0x38 ) )(*puVar17, puVar17[1], *(long**)this, &local_78, *(undefined4*)( puVar17 + 6 ));
   }

   lVar18 = plVar19[0xb];
   pbVar20 = (byte*)( lVar18 + 0x48 );
   lVar12 = lVar18 + plVar19[9] * 0x60;
   do {
      if (lVar12 == lVar18) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      uVar4 = *(uint*)( this + 0x3c );
      lVar16 = *(long*)( this + 0x28 );
      if (*(int*)( this + 0x38 ) == 0) {
         piVar15 = (int*)( lVar16 + (ulong)uVar4 * 0x10 );
      }
 else {
         uVar13 = 0xcbf29ce484222325;
         pbVar14 = (byte*)( lVar18 + 0x44 );
         if (pbVar14 < pbVar20) {
            do {
               bVar10 = *pbVar14;
               pbVar14 = pbVar14 + 1;
               uVar13 = ( uVar13 ^ bVar10 ) * 0x100000001b3;
            }
 while ( pbVar14 != pbVar20 );
            bVar10 = (byte)uVar13 | 0x80;
            uVar22 = ( uint )(uVar13 >> 7);
         }
 else {
            bVar10 = 0xa5;
            uVar22 = 0xc9084446;
         }

         while (true) {
            uVar22 = uVar22 & uVar4 - 1;
            pbVar14 = (byte*)( *(long*)( this + 0x30 ) + (ulong)uVar22 );
            bVar9 = pbVar14[0xf];
            auVar25[0] = -(bVar10 == *pbVar14);
            for (int i = 0; i < 14; i++) {
               auVar25[( i + 1 )] = -(bVar10 == pbVar14[1]);
            }

            auVar25[0xf] = -(bVar10 == bVar9);
            uVar6 = ( ushort )(SUB161(auVar25 >> 7, 0) & 1) | ( ushort )(SUB161(auVar25 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar25 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar25 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar25 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar25 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar25 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar25 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar25 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar25 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar25 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar25 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar25 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar25 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar25 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar25[0xf] >> 7) << 0xf;
            if (uVar6 != 0) {
               uVar21 = (uint)uVar6;
               uVar11 = uVar22;
               do {
                  iVar7 = 0;
                  for (uVar8 = uVar21; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                     iVar7 = iVar7 + 1;
                  }

                  uVar11 = uVar11 + iVar7 & uVar4 - 1;
                  piVar15 = (int*)( (ulong)uVar11 * 0x10 + lVar16 );
                  if (*piVar15 == *(int*)( lVar18 + 0x44 )) goto LAB_001007a1;
                  uVar11 = uVar11 + 1;
                  bVar5 = (char)iVar7 + 1U & 0x1f;
                  uVar8 = uVar21 >> bVar5;
                  uVar21 = uVar21 >> bVar5;
               }
 while ( uVar8 != 0 );
            }

            auVar28[0] = -(*pbVar14 == 0);
            for (int i = 0; i < 14; i++) {
               auVar28[( i + 1 )] = -(pbVar14[1] == 0);
            }

            auVar28[0xf] = -(bVar9 == 0);
            if (( ( ( ( ( ( ( ( ( ( ( ( ( ( ( auVar28 >> 7 & (undefined1[16])0x1 ) != (undefined1[16])0x0 || ( auVar28 >> 0xf & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x17 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x1f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x27 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x2f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x37 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x3f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x47 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x4f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x57 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x5f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x67 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x6f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar28 >> 0x77 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || bVar9 == 0) break;
            uVar22 = uVar22 + 0x10;
         }
;
         piVar15 = (int*)( (ulong)uVar4 * 0x10 + lVar16 );
      }

      LAB_001007a1:lVar16 = 0;
      local_68 = *(float*)( lVar18 + 0x30 );
      fStack_64 = *(float*)( lVar18 + 0x34 );
      fStack_60 = *(float*)( lVar18 + 0x38 );
      fStack_5c = *(float*)( lVar18 + 0x3c );
      fStack_58 = local_68;
      fStack_54 = fStack_64;
      fStack_50 = fStack_60;
      fStack_4c = fStack_5c;
      do {
         fVar2 = *(float*)( *(long*)( piVar15 + 2 ) + 0x20 + lVar16 );
         fVar3 = *(float*)( *(long*)( piVar15 + 2 ) + 0x30 + lVar16 );
         pfVar1 = (float*)( lVar18 + lVar16 * 4 );
         auVar24._0_8_ = CONCAT44(fVar2 * pfVar1[1], fVar2 * *pfVar1);
         auVar24._8_4_ = fVar2 * pfVar1[2];
         auVar24._12_4_ = fVar2 * pfVar1[3];
         pfVar1 = (float*)( lVar18 + lVar16 * 4 );
         auVar26._0_4_ = fVar3 * *pfVar1;
         auVar26._4_4_ = fVar3 * pfVar1[1];
         auVar26._8_4_ = fVar3 * pfVar1[2];
         auVar26._12_4_ = fVar3 * pfVar1[3];
         lVar16 = lVar16 + 4;
         auVar27._8_4_ = auVar24._8_4_;
         auVar27._0_8_ = auVar24._0_8_;
         auVar27._12_4_ = auVar24._12_4_;
         auVar28 = minps(auVar27, auVar26);
         auVar25 = maxps(auVar24, auVar26);
         local_68 = local_68 + auVar28._0_4_;
         fStack_64 = fStack_64 + auVar28._4_4_;
         fStack_60 = fStack_60 + auVar28._8_4_;
         fStack_5c = fStack_5c + auVar28._12_4_;
         fStack_58 = fStack_58 + auVar25._0_4_;
         fStack_54 = fStack_54 + auVar25._4_4_;
         fStack_50 = fStack_50 + auVar25._8_4_;
         fStack_4c = fStack_4c + auVar25._12_4_;
      }
 while ( lVar16 != 0xc );
      pbVar20 = pbVar20 + 0x60;
      ( **(code**)( **(long**)this + 0x30 ) )(*(long**)this, lVar18, &local_68, *(undefined4*)( lVar18 + 0x40 ), piVar15 + 2, *(undefined4*)( lVar18 + 0x48 ), *(undefined4*)( lVar18 + 0x4c ), *(undefined4*)( lVar18 + 0x50 ));
      lVar18 = lVar18 + 0x60;
   }
 while ( true );
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::DebugRendererPlayback::Parse(JPH::StreamIn&) */void JPH::DebugRendererPlayback::Parse(DebugRendererPlayback *this, StreamIn *param_1) {
   uint uVar1;
   long *plVar2;
   undefined4 uVar3;
   uint uVar4;
   undefined8 uVar5;
   ushort uVar6;
   int iVar7;
   uint uVar8;
   byte bVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   char cVar12;
   bool bVar13;
   uint uVar14;
   void *pvVar15;
   void *pvVar16;
   uint *puVar17;
   undefined4 *puVar18;
   int *piVar19;
   ulong uVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   byte *pbVar23;
   undefined8 *puVar24;
   ulong uVar25;
   uint uVar26;
   undefined8 *puVar27;
   long lVar28;
   long *plVar29;
   long lVar30;
   int *piVar31;
   ulong __n;
   uint uVar32;
   ulong uVar33;
   undefined1(*pauVar34)[16];
   long lVar35;
   long in_FS_OFFSET;
   byte bVar36;
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   char local_91;
   undefined4 local_90;
   uint local_8c;
   uint local_88;
   uint local_84;
   undefined8 local_80;
   long *local_78;
   long *local_70;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_00100980:do {
      while (true) {
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_91, 1);
         cVar12 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
         if (( cVar12 != '\0' ) || ( cVar12 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1) ),cVar12 != '\0') {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         if (local_91 != '\0') break;
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_8c, 4);
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_88, 4);
         pvVar15 = operator_new__((ulong)local_88 * 0x6c);
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, pvVar15, (ulong)local_88 * 0x6c);
         ( **(code**)( **(long**)this + 0x20 ) )(&local_80, *(long**)this, pvVar15, local_88);
         plVar29 = local_80;
         uVar4 = local_8c;
         local_80 = (long*)0x0;
         local_78 = (long*)CONCAT44(local_78._4_4_, local_8c);
         local_70 = plVar29;
         bVar13 = HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>((HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>*)( this + 8 ), (uint*)&local_78, &local_84);
         if (bVar13) {
            puVar17 = (uint*)( (ulong)local_84 * 0x10 + *(long*)( this + 8 ) );
            *puVar17 = uVar4;
            *(long**)( puVar17 + 2 ) = plVar29;
            if (plVar29 != (long*)0x0) {
               if (*(code**)( *plVar29 + 0x10 ) == DebugRendererRecorder::BatchImpl::AddRef) {
                  LOCK();
                  *(int*)( plVar29 + 1 ) = (int)plVar29[1] + 1;
                  UNLOCK();
                  plVar29 = local_70;
                  goto LAB_00100a6f;
               }

               ( **(code**)( *plVar29 + 0x10 ) )(plVar29);
               goto LAB_00100a74;
            }

         }
 else {
            LAB_00100a6f:if (plVar29 != (long*)0x0) {
               LAB_00100a74:if (*(code**)( *plVar29 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
                  LOCK();
                  plVar2 = plVar29 + 1;
                  *(int*)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                     ( **(code**)( *plVar29 + 8 ) )(plVar29);
                  }

               }
 else {
                  ( **(code**)( *plVar29 + 0x18 ) )(plVar29);
               }

            }

         }

         if (local_80 != (long*)0x0) {
            if (*(code**)( *local_80 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
               LOCK();
               plVar29 = local_80 + 1;
               *(int*)plVar29 = (int)*plVar29 + -1;
               UNLOCK();
               if ((int)*plVar29 == 0) {
                  ( **(code**)( *local_80 + 8 ) )();
               }

            }
 else {
               ( **(code**)( *local_80 + 0x18 ) )();
            }

         }

         operator_delete__(pvVar15);
      }
;
      if (local_91 != '\x01') {
         if (local_91 == '\x02') {
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_88, 4);
            local_68 = _LC5;
            uStack_64 = _LC5;
            uStack_60 = _LC5;
            uStack_5c = _LC5;
            local_58 = _LC7;
            uStack_54 = _LC7;
            uStack_50 = _LC7;
            uStack_4c = _LC7;
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_68, 0xc);
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_58, 0xc);
            piVar19 = (int*)( *Allocate )(0x40);
            *piVar19 = 0;
            piVar19[6] = 0;
            piVar19[7] = 0;
            *(undefined1(*) [16])( piVar19 + 2 ) = (undefined1[16])0x0;
            *(ulong*)( piVar19 + 8 ) = CONCAT44(uStack_64, local_68);
            *(ulong*)( piVar19 + 10 ) = CONCAT44(uStack_5c, uStack_60);
            *(ulong*)( piVar19 + 0xc ) = CONCAT44(uStack_54, local_58);
            *(ulong*)( piVar19 + 0xe ) = CONCAT44(uStack_4c, uStack_50);
            LOCK();
            *piVar19 = *piVar19 + 1;
            UNLOCK();
            bVar13 = HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>((HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>*)( this + 0x28 ), &local_88, (uint*)&local_78);
            puVar17 = (uint*)( ( (ulong)local_78 & 0xffffffff ) * 0x10 + *(long*)( this + 0x28 ) );
            if (bVar13) {
               *puVar17 = local_88;
               LAB_00101166:*(int**)( puVar17 + 2 ) = piVar19;
               LOCK();
               *piVar19 = *piVar19 + 1;
               UNLOCK();
            }
 else {
               piVar31 = *(int**)( puVar17 + 2 );
               if (piVar19 != piVar31) {
                  if (piVar31 != (int*)0x0) {
                     LOCK();
                     *piVar31 = *piVar31 + -1;
                     UNLOCK();
                     if (*piVar31 == 0) {
                        puVar21 = *(undefined8**)( piVar31 + 6 );
                        if (puVar21 != (undefined8*)0x0) {
                           if (( *(long*)( piVar31 + 2 ) != 0 ) && ( puVar24 = puVar21 < puVar24 )) {
                              do {
                                 plVar29 = (long*)*puVar21;
                                 if (plVar29 != (long*)0x0) {
                                    if (*(code**)( *plVar29 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
                                       LOCK();
                                       plVar2 = plVar29 + 1;
                                       *(int*)plVar2 = (int)*plVar2 + -1;
                                       UNLOCK();
                                       if ((int)*plVar2 == 0) {
                                          ( **(code**)( *plVar29 + 8 ) )();
                                       }

                                    }
 else {
                                       ( **(code**)( *plVar29 + 0x18 ) )();
                                    }

                                 }

                                 puVar21 = puVar21 + 2;
                              }
 while ( puVar21 < puVar24 );
                              puVar21 = *(undefined8**)( piVar31 + 6 );
                           }

                           piVar31[2] = 0;
                           piVar31[3] = 0;
                           ( *Free )(puVar21);
                        }

                        ( *Free )(piVar31);
                     }

                  }

                  goto LAB_00101166;
               }

            }

            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_84, 4);
            uVar4 = 0;
            if (local_84 != 0) {
               LAB_00101247:do {
                  local_78 = (long*)0x0;
                  ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_70, 4);
                  ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_80, 4);
                  if (*(int*)( this + 0x18 ) == 0) {
                     piVar31 = (int*)( ( ulong ) * (uint*)( this + 0x1c ) * 0x10 + *(long*)( this + 8 ) );
                  }
 else {
                     uVar20 = 0xcbf29ce484222325;
                     pbVar23 = (byte*)&local_80;
                     do {
                        bVar36 = *pbVar23;
                        pbVar23 = pbVar23 + 1;
                        uVar20 = ( uVar20 ^ bVar36 ) * 0x100000001b3;
                     }
 while ( pbVar23 != (byte*)( (long)&local_80 + 4 ) );
                     bVar36 = (byte)uVar20 | 0x80;
                     uVar1 = *(uint*)( this + 0x1c ) - 1;
                     uVar32 = ( uint )(uVar20 >> 7);
                     while (true) {
                        uVar32 = uVar32 & uVar1;
                        pbVar23 = (byte*)( *(long*)( this + 0x10 ) + (ulong)uVar32 );
                        bVar9 = pbVar23[0xf];
                        auVar38[0] = -(bVar36 == *pbVar23);
                        for (int i = 0; i < 14; i++) {
                           auVar38[( i + 1 )] = -(bVar36 == pbVar23[1]);
                        }

                        auVar38[0xf] = -(bVar36 == bVar9);
                        uVar6 = ( ushort )(SUB161(auVar38 >> 7, 0) & 1) | ( ushort )(SUB161(auVar38 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar38 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar38 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar38 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar38 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar38 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar38 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar38 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar38 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar38 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar38 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar38 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar38 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar38 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar38[0xf] >> 7) << 0xf;
                        uVar26 = (uint)uVar6;
                        uVar14 = uVar32;
                        if (uVar6 != 0) {
                           do {
                              iVar7 = 0;
                              for (uVar8 = uVar26; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                                 iVar7 = iVar7 + 1;
                              }

                              uVar14 = uVar14 + iVar7 & uVar1;
                              piVar31 = (int*)( (ulong)uVar14 * 0x10 + *(long*)( this + 8 ) );
                              if (*piVar31 == (int)local_80) goto LAB_0010128e;
                              uVar26 = uVar26 >> ( (char)iVar7 + 1U & 0x1f );
                              uVar14 = uVar14 + 1;
                           }
 while ( uVar26 != 0 );
                        }

                        auVar37[0] = -(*pbVar23 == 0);
                        for (int i = 0; i < 14; i++) {
                           auVar37[( i + 1 )] = -(pbVar23[1] == 0);
                        }

                        auVar37[0xf] = -(bVar9 == 0);
                        if (( ( ( ( ( ( ( ( ( ( ( ( ( ( ( auVar37 >> 7 & (undefined1[16])0x1 ) != (undefined1[16])0x0 || ( auVar37 >> 0xf & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x17 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x1f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x27 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x2f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x37 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x3f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x47 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x4f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x57 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x5f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x67 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x6f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar37 >> 0x77 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || bVar9 == 0) break;
                        uVar32 = uVar32 + 0x10;
                     }
;
                     piVar31 = (int*)( ( ulong ) * (uint*)( this + 0x1c ) * 0x10 + *(long*)( this + 8 ) );
                  }

                  LAB_0010128e:plVar29 = *(long**)( piVar31 + 2 );
                  if (local_78 != plVar29) {
                     if (local_78 != (long*)0x0) {
                        if (*(code**)( *local_78 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
                           LOCK();
                           plVar29 = local_78 + 1;
                           *(int*)plVar29 = (int)*plVar29 + -1;
                           UNLOCK();
                           if ((int)*plVar29 == 0) {
                              ( **(code**)( *local_78 + 8 ) )(local_78);
                              plVar29 = *(long**)( piVar31 + 2 );
                              goto LAB_001012d0;
                           }

                        }
 else {
                           ( **(code**)( *local_78 + 0x18 ) )(local_78);
                        }

                        plVar29 = *(long**)( piVar31 + 2 );
                     }

                     LAB_001012d0:local_78 = plVar29;
                     if (plVar29 != (long*)0x0) {
                        if (*(code**)( *plVar29 + 0x10 ) == DebugRendererRecorder::BatchImpl::AddRef) {
                           LOCK();
                           *(int*)( plVar29 + 1 ) = (int)plVar29[1] + 1;
                           UNLOCK();
                        }
 else {
                           ( **(code**)( *plVar29 + 0x10 ) )();
                        }

                     }

                  }

                  lVar30 = *(long*)( piVar19 + 2 );
                  uVar20 = lVar30 + 1;
                  if (*(ulong*)( piVar19 + 4 ) < uVar20) {
                     uVar33 = *(ulong*)( piVar19 + 4 ) * 2;
                     if (uVar20 <= uVar33) {
                        uVar20 = uVar33;
                     }

                     puVar21 = (undefined8*)( *Allocate )(uVar20 << 4);
                     puVar24 = *(undefined8**)( piVar19 + 6 );
                     if (puVar24 != (undefined8*)0x0) {
                        lVar30 = *(long*)( piVar19 + 2 );
                        if (puVar21 < puVar24) {
                           for (puVar22 = puVar21; puVar22 < puVar21 + lVar30 * 2; puVar22 = puVar22 + 2) {
                              uVar5 = *puVar24;
                              uVar3 = *(undefined4*)( puVar24 + 1 );
                              puVar24 = puVar24 + 2;
                              *puVar22 = uVar5;
                              *(undefined4*)( puVar22 + 1 ) = uVar3;
                           }

                        }
 else {
                           puVar24 = puVar24 + lVar30 * 2 + -2;
                           puVar22 = puVar21 + lVar30 * 2 + -2;
                           if (!CARRY8(lVar30 * 0x10 - 0x10,(ulong)puVar21)) {
                              do {
                                 uVar5 = *puVar24;
                                 uVar3 = *(undefined4*)( puVar24 + 1 );
                                 puVar27 = puVar22 + -2;
                                 puVar24 = puVar24 + -2;
                                 *puVar22 = uVar5;
                                 *(undefined4*)( puVar22 + 1 ) = uVar3;
                                 puVar22 = puVar27;
                              }
 while ( puVar21 <= puVar27 );
                              ( *Free )();
                              goto LAB_00101380;
                           }

                        }

                        ( *Free )();
                     }

                     LAB_00101380:lVar30 = *(long*)( piVar19 + 2 );
                     *(ulong*)( piVar19 + 4 ) = uVar20;
                     *(undefined8**)( piVar19 + 6 ) = puVar21;
                     uVar20 = lVar30 + 1;
                  }
 else {
                     puVar21 = *(undefined8**)( piVar19 + 6 );
                  }

                  *(ulong*)( piVar19 + 2 ) = uVar20;
                  puVar21[lVar30 * 2] = local_78;
                  if (local_78 != (long*)0x0) {
                     if (*(code**)( *local_78 + 0x10 ) == DebugRendererRecorder::BatchImpl::AddRef) {
                        LOCK();
                        *(int*)( local_78 + 1 ) = (int)local_78[1] + 1;
                        UNLOCK();
                     }
 else {
                        ( **(code**)( *local_78 + 0x10 ) )();
                     }

                  }

                  *(undefined4*)( puVar21 + lVar30 * 2 + 1 ) = local_70._0_4_;
                  if (local_78 != (long*)0x0) {
                     if (*(code**)( *local_78 + 0x18 ) != DebugRendererRecorder::BatchImpl::Release) {
                        ( **(code**)( *local_78 + 0x18 ) )();
                        uVar4 = uVar4 + 1;
                        if (local_84 <= uVar4) break;
                        goto LAB_00101247;
                     }

                     LOCK();
                     plVar29 = local_78 + 1;
                     *(int*)plVar29 = (int)*plVar29 + -1;
                     UNLOCK();
                     if ((int)*plVar29 == 0) {
                        ( **(code**)( *local_78 + 8 ) )();
                     }

                  }

                  uVar4 = uVar4 + 1;
               }
 while ( uVar4 < local_84 );
            }

            LOCK();
            *piVar19 = *piVar19 + -1;
            UNLOCK();
            if (*piVar19 == 0) {
               puVar21 = *(undefined8**)( piVar19 + 6 );
               if (puVar21 != (undefined8*)0x0) {
                  if (( *(long*)( piVar19 + 2 ) != 0 ) && ( puVar24 = puVar21 < puVar24 )) {
                     do {
                        plVar29 = (long*)*puVar21;
                        if (plVar29 != (long*)0x0) {
                           if (*(code**)( *plVar29 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
                              LOCK();
                              plVar2 = plVar29 + 1;
                              *(int*)plVar2 = (int)*plVar2 + -1;
                              UNLOCK();
                              if ((int)*plVar2 == 0) {
                                 ( **(code**)( *plVar29 + 8 ) )();
                              }

                           }
 else {
                              ( **(code**)( *plVar29 + 0x18 ) )();
                           }

                        }

                        puVar21 = puVar21 + 2;
                     }
 while ( puVar21 < puVar24 );
                     puVar21 = *(undefined8**)( piVar19 + 6 );
                  }

                  piVar19[2] = 0;
                  piVar19[3] = 0;
                  ( *Free )(puVar21);
               }

               ( *Free )(piVar19);
            }

         }
 else if (local_91 == '\x03') {
            lVar30 = *(long*)( this + 0x48 );
            uVar20 = lVar30 + 1;
            if (*(ulong*)( this + 0x50 ) < uVar20) {
               uVar33 = *(ulong*)( this + 0x50 ) * 2;
               if (uVar20 <= uVar33) {
                  uVar20 = uVar33;
               }

               puVar21 = (undefined8*)( *Allocate )(uVar20 * 0x60);
               puVar24 = *(undefined8**)( this + 0x58 );
               if (puVar24 != (undefined8*)0x0) {
                  lVar30 = *(long*)( this + 0x48 );
                  if (puVar21 < puVar24) {
                     for (puVar22 = puVar21; puVar22 < puVar21 + lVar30 * 0xc; puVar22 = puVar22 + 0xc) {
                        uVar10 = puVar24[1];
                        uVar5 = puVar24[2];
                        *puVar22 = *puVar24;
                        puVar22[1] = uVar10;
                        for (int i = 0; i < 3; i++) {
                           uVar10 = puVar24[( 3*i + 3 )];
                           uVar11 = puVar24[( 3*i + 4 )];
                           puVar22[( 3*i + 2 )] = uVar5;
                           uVar5 = puVar24[( 3*i + 5 )];
                           puVar22[( 3*i + 3 )] = uVar10;
                           puVar22[( 3*i + 4 )] = uVar11;
                        }

                        puVar22[0xb] = uVar5;
                        puVar24 = puVar24 + 0xc;
                     }

                  }
 else {
                     puVar22 = puVar21 + lVar30 * 0xc + -0xc;
                     puVar24 = puVar24 + lVar30 * 0xc + -0xc;
                     if (!CARRY8(lVar30 * 0x60 - 0x60,(ulong)puVar21)) {
                        do {
                           uVar10 = puVar24[1];
                           uVar5 = puVar24[2];
                           puVar27 = puVar22 + -0xc;
                           *puVar22 = *puVar24;
                           puVar22[1] = uVar10;
                           for (int i = 0; i < 3; i++) {
                              uVar10 = puVar24[( 3*i + 3 )];
                              uVar11 = puVar24[( 3*i + 4 )];
                              puVar22[( 3*i + 2 )] = uVar5;
                              uVar5 = puVar24[( 3*i + 5 )];
                              puVar22[( 3*i + 3 )] = uVar10;
                              puVar22[( 3*i + 4 )] = uVar11;
                           }

                           puVar22[0xb] = uVar5;
                           puVar22 = puVar27;
                           puVar24 = puVar24 + -0xc;
                        }
 while ( puVar21 <= puVar27 );
                     }

                  }

                  ( *Free )();
               }

               lVar30 = *(long*)( this + 0x48 );
               *(undefined8**)( this + 0x58 ) = puVar21;
               *(ulong*)( this + 0x50 ) = uVar20;
               uVar20 = lVar30 + 1;
            }
 else {
               puVar21 = *(undefined8**)( this + 0x58 );
            }

            *(ulong*)( this + 0x48 ) = uVar20;
            pauVar34 = (undefined1(*) [16])( puVar21 + lVar30 * 0xc );
            lVar30 = *(long*)param_1;
            *(undefined8*)pauVar34[1] = 0;
            *(undefined8*)( pauVar34[2] + 8 ) = 0;
            *(undefined8*)pauVar34[4] = 0;
            *(undefined8*)( pauVar34[5] + 8 ) = 0;
            *pauVar34 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pauVar34[1] + 8 ) = (undefined1[16])0x0;
            pauVar34[3] = (undefined1[16])0x0;
            *(undefined1(*) [16])( pauVar34[4] + 8 ) = (undefined1[16])0x0;
            local_88 = 0;
            ( **(code**)( lVar30 + 0x10 ) )(param_1, &local_88, 4);
            uVar20 = (ulong)local_88;
            if (*(ulong*)( *pauVar34 + 8 ) < uVar20) {
               lVar30 = ( *_Reallocate )(*(undefined8*)pauVar34[1], *(ulong*)( *pauVar34 + 8 ) * 0x30, uVar20 * 0x30);
               *(long*)pauVar34[1] = lVar30;
               *(ulong*)( *pauVar34 + 8 ) = uVar20;
            }
 else {
               lVar30 = *(long*)pauVar34[1];
            }

            lVar35 = uVar20 * 0x30 + lVar30;
            *(ulong*)*pauVar34 = uVar20;
            for (; lVar35 != lVar30; lVar30 = lVar30 + 0x30) {
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30, 0xc);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x10, 0xc);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x20, 4);
            }

            local_84 = 0;
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_84, 4);
            uVar20 = (ulong)local_84;
            if (*(ulong*)pauVar34[2] < uVar20) {
               lVar30 = ( *_Reallocate )(*(undefined8*)( pauVar34[2] + 8 ), *(ulong*)pauVar34[2] << 6);
               *(ulong*)pauVar34[2] = uVar20;
               *(long*)( pauVar34[2] + 8 ) = lVar30;
            }
 else {
               lVar30 = *(long*)( pauVar34[2] + 8 );
            }

            *(ulong*)( pauVar34[1] + 8 ) = uVar20;
            lVar35 = lVar30 + uVar20 * 0x40;
            for (; lVar35 != lVar30; lVar30 = lVar30 + 0x40) {
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30, 0xc);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x10, 0xc);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x20, 0xc);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x30, 4);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x34, 4);
            }

            local_80 = (long*)( (ulong)local_80 & 0xffffffff00000000 );
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_80, 4);
            Array<JPH::DebugRendererRecorder::TextBlob,JPH::STLAllocator<JPH::DebugRendererRecorder::TextBlob>>::resize((Array<JPH::DebugRendererRecorder::TextBlob,JPH::STLAllocator<JPH::DebugRendererRecorder::TextBlob>>*)( pauVar34 + 3 ), (ulong)local_80 & 0xffffffff);
            lVar30 = *(long*)pauVar34[4];
            lVar35 = *(long*)pauVar34[3] * 0x40 + lVar30;
            for (; lVar35 != lVar30; lVar30 = lVar30 + 0x40) {
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30, 0xc);
               local_78 = (long*)( (ulong)local_78 & 0xffffffff00000000 );
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_78, 4);
               cVar12 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
               if (( cVar12 == '\0' ) && ( cVar12 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1) ),cVar12 == '\0') {
                  uVar33 = (ulong)local_78 & 0xffffffff;
                  uVar20 = *(ulong*)( lVar30 + 0x18 );
                  if (uVar20 < uVar33) {
                     __n = uVar33 - uVar20;
                     if (0x7fffffffffffffff - uVar20 < __n) {
                        std::__throw_length_error("basic_string::_M_replace_aux");
                        /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                     }

                     lVar28 = *(long*)( lVar30 + 0x10 );
                     if (lVar28 == lVar30 + 0x20) {
                        uVar25 = 0xf;
                     }
 else {
                        uVar25 = *(ulong*)( lVar30 + 0x20 );
                     }

                     if (uVar25 < uVar33) {
                        std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>*)( lVar30 + 0x10 ), uVar20, 0, (char*)0x0, __n);
                        lVar28 = *(long*)( lVar30 + 0x10 );
                     }

                     if (__n == 1) {
                        *(undefined1*)( lVar28 + uVar20 ) = 0;
                     }
 else {
                        memset((undefined1*)( lVar28 + uVar20 ), 0, __n);
                     }

                     *(ulong*)( lVar30 + 0x18 ) = uVar33;
                     *(undefined1*)( *(long*)( lVar30 + 0x10 ) + uVar33 ) = 0;
                     uVar33 = (ulong)local_78 & 0xffffffff;
                  }
 else if (uVar33 < uVar20) {
                     *(ulong*)( lVar30 + 0x18 ) = uVar33;
                     *(undefined1*)( *(long*)( lVar30 + 0x10 ) + uVar33 ) = 0;
                     uVar33 = (ulong)local_78 & 0xffffffff;
                  }

                  ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( lVar30 + 0x10 ), uVar33);
               }
 else {
                  *(undefined8*)( lVar30 + 0x18 ) = 0;
                  **(undefined1**)( lVar30 + 0x10 ) = 0;
               }

               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x30, 4);
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30 + 0x34, 4);
            }

            local_78 = (long*)( (ulong)local_78 & 0xffffffff00000000 );
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_78, 4);
            uVar20 = (ulong)local_78 & 0xffffffff;
            if (*(ulong*)pauVar34[5] < uVar20) {
               lVar30 = ( *_Reallocate )(*(undefined8*)( pauVar34[5] + 8 ), *(ulong*)pauVar34[5] * 0x60, uVar20 * 0x60);
               *(ulong*)pauVar34[5] = uVar20;
               *(long*)( pauVar34[5] + 8 ) = lVar30;
            }
 else {
               lVar30 = *(long*)( pauVar34[5] + 8 );
            }

            lVar35 = uVar20 * 0x60 + lVar30;
            *(ulong*)( pauVar34[4] + 8 ) = uVar20;
            for (; lVar35 != lVar30; lVar30 = lVar30 + 0x60) {
               ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, lVar30, 0x40);
               for (int i = 0; i < 5; i++) {
                  ( **(code**)( *(long*)param_1 + 16 ) )(param_1, lVar30 + ( 4*i + 64 ), 4);
               }

            }

         }

         goto LAB_00100980;
      }

      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_90, 4);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_8c, 4);
      pvVar15 = operator_new__((ulong)local_8c * 0x24);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, pvVar15, (ulong)local_8c * 0x24);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_88, 4);
      pvVar16 = operator_new__((ulong)local_88 << 2);
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, pvVar16, (ulong)local_88 << 2);
      ( **(code**)( **(long**)this + 0x28 ) )(&local_80, *(long**)this, pvVar15, local_8c, pvVar16, local_88);
      plVar29 = local_80;
      uVar3 = local_90;
      local_80 = (long*)0x0;
      local_78 = (long*)CONCAT44(local_78._4_4_, local_90);
      local_70 = plVar29;
      bVar13 = HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>((HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>*)( this + 8 ), (uint*)&local_78, &local_84);
      if (bVar13) {
         puVar18 = (undefined4*)( (ulong)local_84 * 0x10 + *(long*)( this + 8 ) );
         *puVar18 = uVar3;
         *(long**)( puVar18 + 2 ) = plVar29;
         if (plVar29 != (long*)0x0) {
            if (*(code**)( *plVar29 + 0x10 ) == DebugRendererRecorder::BatchImpl::AddRef) {
               LOCK();
               *(int*)( plVar29 + 1 ) = (int)plVar29[1] + 1;
               UNLOCK();
               plVar29 = local_70;
               goto LAB_00100eaa;
            }

            ( **(code**)( *plVar29 + 0x10 ) )(plVar29);
            goto LAB_00100eaf;
         }

      }
 else {
         LAB_00100eaa:if (plVar29 != (long*)0x0) {
            LAB_00100eaf:if (*(code**)( *plVar29 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
               LOCK();
               plVar2 = plVar29 + 1;
               *(int*)plVar2 = (int)*plVar2 + -1;
               UNLOCK();
               if ((int)*plVar2 == 0) {
                  ( **(code**)( *plVar29 + 8 ) )(plVar29);
               }

            }
 else {
               ( **(code**)( *plVar29 + 0x18 ) )(plVar29);
            }

         }

      }

      if (local_80 == (long*)0x0) {
         LAB_00100f02:operator_delete__(pvVar16);
         operator_delete__(pvVar15);
      }
 else {
         if (*(code**)( *local_80 + 0x18 ) == DebugRendererRecorder::BatchImpl::Release) {
            LOCK();
            plVar29 = local_80 + 1;
            *(int*)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
               ( **(code**)( *local_80 + 8 ) )();
            }

            goto LAB_00100f02;
         }

         ( **(code**)( *local_80 + 0x18 ) )();
         operator_delete__(pvVar16);
         operator_delete__(pvVar15);
      }

   }
 while ( true );
}
/* JPH::DebugRendererRecorder::BatchImpl::AddRef() */void JPH::DebugRendererRecorder::BatchImpl::AddRef(BatchImpl *this) {
   LOCK();
   *(int*)( this + 8 ) = *(int*)( this + 8 ) + 1;
   UNLOCK();
   return;
}
/* JPH::DebugRendererRecorder::BatchImpl::Release() */void JPH::DebugRendererRecorder::BatchImpl::Release(BatchImpl *this) {
   BatchImpl *pBVar1;
   LOCK();
   pBVar1 = this + 8;
   *(int*)pBVar1 = *(int*)pBVar1 + -1;
   UNLOCK();
   if (*(int*)pBVar1 == 0) {
      /* WARNING: Could not recover jumptable at 0x0010196e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 8 ) )();
      return;
   }

   return;
}
/* JPH::Array<JPH::DebugRendererRecorder::TextBlob,
   JPH::STLAllocator<JPH::DebugRendererRecorder::TextBlob> >::resize(unsigned long) */void JPH::Array<JPH::DebugRendererRecorder::TextBlob,JPH::STLAllocator<JPH::DebugRendererRecorder::TextBlob>>::resize(Array<JPH::DebugRendererRecorder::TextBlob,JPH::STLAllocator<JPH::DebugRendererRecorder::TextBlob>> *this, ulong param_1) {
   undefined4 uVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   uint uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   uVar12 = *(ulong*)this;
   if (param_1 < uVar12) {
      lVar13 = *(long*)( this + 0x10 );
      for (uVar10 = lVar13 + param_1 * 0x40; uVar10 < lVar13 + uVar12 * 0x40; uVar10 = uVar10 + 0x40) {
         if (*(long*)( uVar10 + 0x10 ) != uVar10 + 0x20) {
            ( *Free )();
         }

      }

   }

   if (param_1 <= *(ulong*)( this + 8 )) {
      puVar5 = *(undefined8**)( this + 0x10 );
      goto LAB_001019de;
   }

   puVar5 = (undefined8*)( *Allocate )(param_1 * 0x40);
   puVar6 = *(undefined8**)( this + 0x10 );
   if (puVar6 != (undefined8*)0x0) {
      lVar13 = *(long*)this;
      if (puVar5 < puVar6) {
         if (puVar5 < puVar5 + lVar13 * 8) {
            puVar6 = puVar6 + 4;
            puVar7 = puVar5;
            do {
               puVar9 = puVar7 + 4;
               uVar3 = puVar6[-4];
               uVar4 = puVar6[-3];
               puVar7[2] = puVar9;
               puVar2 = (undefined8*)puVar6[-2];
               *puVar7 = uVar3;
               puVar7[1] = uVar4;
               if (puVar2 == puVar6) {
                  lVar11 = puVar6[-1];
                  uVar12 = lVar11 + 1;
                  uVar14 = (uint)uVar12;
                  if (7 < uVar14) {
                     *puVar9 = *puVar6;
                     *(undefined8*)( (long)puVar7 + ( uVar12 & 0xffffffff ) + 0x18 ) = *(undefined8*)( (long)puVar6 + ( ( uVar12 & 0xffffffff ) - 8 ) );
                     lVar11 = (long)puVar9 - ( ( ulong )(puVar7 + 5) & 0xfffffffffffffff8 );
                     uVar14 = uVar14 + (int)lVar11 & 0xfffffff8;
                     if (7 < uVar14) {
                        uVar8 = 0;
                        do {
                           uVar12 = (ulong)uVar8;
                           uVar8 = uVar8 + 8;
                           *(undefined8*)( ( ( ulong )(puVar7 + 5) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)puVar6 + ( uVar12 - lVar11 ) );
                        }
 while ( uVar8 < uVar14 );
                     }

                     goto LAB_00101a7b;
                  }

                  if (( uVar12 & 4 ) == 0) {
                     if (uVar14 != 0) {
                        *(undefined1*)puVar9 = *(undefined1*)puVar6;
                        if (( uVar12 & 2 ) == 0) goto LAB_00101a7b;
                        *(undefined2*)( (long)puVar7 + ( uVar12 & 0xffffffff ) + 0x1e ) = *(undefined2*)( (long)puVar6 + ( ( uVar12 & 0xffffffff ) - 2 ) );
                        lVar11 = puVar6[-1];
                     }

                  }
 else {
                     *(undefined4*)puVar9 = *(undefined4*)puVar6;
                     *(undefined4*)( (long)puVar7 + ( uVar12 & 0xffffffff ) + 0x1c ) = *(undefined4*)( (long)puVar6 + ( ( uVar12 & 0xffffffff ) - 4 ) );
                     lVar11 = puVar6[-1];
                  }

               }
 else {
                  puVar7[2] = puVar2;
                  puVar7[4] = *puVar6;
                  LAB_00101a7b:lVar11 = puVar6[-1];
               }

               puVar7[3] = lVar11;
               puVar9 = puVar7 + 8;
               uVar1 = *(undefined4*)( (long)puVar6 + 0x14 );
               *(undefined4*)( puVar7 + 6 ) = *(undefined4*)( puVar6 + 2 );
               *(undefined4*)( (long)puVar7 + 0x34 ) = uVar1;
               puVar6 = puVar6 + 8;
               puVar7 = puVar9;
            }
 while ( puVar9 < puVar5 + lVar13 * 8 );
            LAB_00101af8:puVar6 = *(undefined8**)( this + 0x10 );
         }

      }
 else if (puVar5 <= puVar5 + lVar13 * 8 + -8) {
         puVar7 = puVar5 + lVar13 * 8 + -8;
         puVar6 = puVar6 + lVar13 * 8 + -4;
         do {
            puVar9 = puVar7 + 4;
            uVar3 = puVar6[-4];
            uVar4 = puVar6[-3];
            puVar7[2] = puVar9;
            puVar2 = (undefined8*)puVar6[-2];
            *puVar7 = uVar3;
            puVar7[1] = uVar4;
            if (puVar2 == puVar6) {
               lVar13 = puVar6[-1];
               uVar12 = lVar13 + 1;
               uVar14 = (uint)uVar12;
               if (7 < uVar14) {
                  *puVar9 = *puVar6;
                  *(undefined8*)( (long)puVar7 + ( uVar12 & 0xffffffff ) + 0x18 ) = *(undefined8*)( (long)puVar6 + ( ( uVar12 & 0xffffffff ) - 8 ) );
                  lVar13 = (long)puVar9 - ( ( ulong )(puVar7 + 5) & 0xfffffffffffffff8 );
                  uVar14 = uVar14 + (int)lVar13 & 0xfffffff8;
                  if (7 < uVar14) {
                     uVar8 = 0;
                     do {
                        uVar12 = (ulong)uVar8;
                        uVar8 = uVar8 + 8;
                        *(undefined8*)( ( ( ulong )(puVar7 + 5) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)puVar6 + ( uVar12 - lVar13 ) );
                     }
 while ( uVar8 < uVar14 );
                  }

                  goto LAB_00101b2b;
               }

               if (( uVar12 & 4 ) == 0) {
                  if (uVar14 != 0) {
                     *(undefined1*)puVar9 = *(undefined1*)puVar6;
                     if (( uVar12 & 2 ) == 0) goto LAB_00101b2b;
                     *(undefined2*)( (long)puVar7 + ( uVar12 & 0xffffffff ) + 0x1e ) = *(undefined2*)( (long)puVar6 + ( ( uVar12 & 0xffffffff ) - 2 ) );
                     lVar13 = puVar6[-1];
                  }

               }
 else {
                  *(undefined4*)puVar9 = *(undefined4*)puVar6;
                  *(undefined4*)( (long)puVar7 + ( uVar12 & 0xffffffff ) + 0x1c ) = *(undefined4*)( (long)puVar6 + ( ( uVar12 & 0xffffffff ) - 4 ) );
                  lVar13 = puVar6[-1];
               }

            }
 else {
               puVar7[2] = puVar2;
               puVar7[4] = *puVar6;
               LAB_00101b2b:lVar13 = puVar6[-1];
            }

            puVar7[3] = lVar13;
            puVar9 = puVar7 + -8;
            uVar1 = *(undefined4*)( (long)puVar6 + 0x14 );
            *(undefined4*)( puVar7 + 6 ) = *(undefined4*)( puVar6 + 2 );
            *(undefined4*)( (long)puVar7 + 0x34 ) = uVar1;
            puVar7 = puVar9;
            puVar6 = puVar6 + -8;
         }
 while ( puVar5 <= puVar9 );
         goto LAB_00101af8;
      }

      ( *Free )(puVar6);
   }

   *(undefined8**)( this + 0x10 ) = puVar5;
   *(ulong*)( this + 8 ) = param_1;
   LAB_001019de:for (puVar6 = puVar5 + *(long*)this * 8; puVar6 < puVar5 + param_1 * 8; puVar6 = puVar6 + 8) {
      puVar6[3] = 0;
      puVar6[2] = puVar6 + 4;
      *(undefined1*)( puVar6 + 4 ) = 0;
   }

   *(ulong*)this = param_1;
   return;
}
/* JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::Ref<JPH::RefTargetVirtual> >,
   JPH::UnorderedMapDetail<unsigned int, JPH::Ref<JPH::RefTargetVirtual> >, JPH::Hash<unsigned int>,
   std::equal_to<unsigned int> >::GrowTable() */void JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::GrowTable(HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>> *this) {
   void *__s;
   char *pcVar1;
   uint uVar2;
   byte *pbVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   long lVar8;
   byte *pbVar9;
   undefined4 *puVar10;
   uint uVar11;
   byte bVar12;
   byte *pbVar13;
   int iVar14;
   byte *pbVar15;
   char *pcVar16;
   undefined1 auVar17[16];
   uVar2 = *(uint*)( this + 0x14 );
   uVar7 = ( ulong )(uVar2 * 2);
   if (uVar2 * 2 < 0x10) {
      uVar7 = 0x10;
   }

   if (uVar2 <= (uint)uVar7) {
      pbVar3 = *(byte**)this;
      pcVar16 = *(char**)( this + 8 );
      *(undefined4*)( this + 0x10 ) = 0;
      *(uint*)( this + 0x14 ) = (uint)uVar7;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(int*)( this + 0x18 ) = (int)( uVar7 * 7 >> 3 );
      lVar8 = ( *Allocate )(uVar7 * 0x11 + 0xf);
      *(long*)this = lVar8;
      __s = (void*)( lVar8 + ( ulong ) * (uint*)( this + 0x14 ) * 0x10 );
      *(void**)( this + 8 ) = __s;
      memset(__s, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
      if (pbVar3 != (byte*)0x0) {
         if (uVar2 != 0) {
            pbVar13 = pbVar3 + 4;
            pbVar15 = pbVar3;
            do {
               if (*pcVar16 < '\0') {
                  iVar14 = *(int*)( this + 0x18 );
                  if (iVar14 == 0) {
                     if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
                        rehash((uint)this);
                        iVar14 = *(int*)( this + 0x18 );
                     }
 else {
                        GrowTable(this);
                        iVar14 = *(int*)( this + 0x18 );
                     }

                  }

                  if (pbVar15 < pbVar13) {
                     uVar7 = 0xcbf29ce484222325;
                     pbVar9 = pbVar15;
                     do {
                        bVar12 = *pbVar9;
                        pbVar9 = pbVar9 + 1;
                        uVar7 = ( uVar7 ^ bVar12 ) * 0x100000001b3;
                     }
 while ( pbVar9 != pbVar13 );
                     bVar12 = (byte)uVar7 | 0x80;
                     uVar6 = ( uint )(uVar7 >> 7);
                  }
 else {
                     bVar12 = 0xa5;
                     uVar6 = 0xc9084446;
                  }

                  while (true) {
                     uVar6 = uVar6 & *(int*)( this + 0x14 ) - 1U;
                     pcVar1 = (char*)( *(long*)( this + 8 ) + (ulong)uVar6 );
                     auVar17[0] = -(*pcVar1 == '\0');
                     for (int i = 0; i < 15; i++) {
                        auVar17[( i + 1 )] = -(pcVar1[1] == '\0');
                     }

                     uVar4 = ( ushort )(SUB161(auVar17 >> 7, 0) & 1) | ( ushort )(SUB161(auVar17 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar17 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar17 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar17 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar17 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar17 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar17 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar17 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar17 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar17 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar17 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar17 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar17 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar17 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar17[0xf] >> 7) << 0xf;
                     if (uVar4 != 0) break;
                     uVar6 = uVar6 + 0x10;
                  }
;
                  iVar5 = 0;
                  for (uVar11 = (uint)uVar4; ( uVar11 & 1 ) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                     iVar5 = iVar5 + 1;
                  }

                  *(int*)( this + 0x18 ) = iVar14 + -1;
                  uVar6 = iVar5 + uVar6 & *(int*)( this + 0x14 ) - 1U;
                  *(byte*)( *(long*)( this + 8 ) + (ulong)uVar6 ) = bVar12;
                  *(byte*)( *(long*)( this + 8 ) + ( ulong )(( uVar6 - 0xf & *(int*)( this + 0x14 ) - 1U ) + 0xf) ) = bVar12;
                  puVar10 = (undefined4*)( (ulong)uVar6 * 0x10 + *(long*)this );
                  *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
                  *puVar10 = *(undefined4*)pbVar15;
                  *(undefined8*)( puVar10 + 2 ) = *(undefined8*)( pbVar15 + 8 );
               }

               pbVar15 = pbVar15 + 0x10;
               pcVar16 = pcVar16 + 1;
               pbVar13 = pbVar13 + 0x10;
            }
 while ( pbVar3 + (ulong)uVar2 * 0x10 != pbVar15 );
         }

         /* WARNING: Could not recover jumptable at 0x00101e69. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *Free )(pbVar3);
         return;
      }

   }

   return;
}
/* bool JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::Ref<JPH::RefTargetVirtual> >,
   JPH::UnorderedMapDetail<unsigned int, JPH::Ref<JPH::RefTargetVirtual> >, JPH::Hash<unsigned int>,
   std::equal_to<unsigned int> >::InsertKey<false>(unsigned int const&, unsigned int&) */bool JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>(HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::RefTargetVirtual>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>> *this, uint *param_1, uint *param_2) {
   byte *pbVar1;
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
   uint uVar24;
   uint *puVar25;
   bool bVar26;
   uint uVar27;
   ulong uVar28;
   uint uVar29;
   byte bVar30;
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   if (*(int*)( this + 0x18 ) == 0) {
      if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
         rehash((uint)this);
      }
 else {
         GrowTable(this);
      }

   }

   uVar28 = 0xcbf29ce484222325;
   puVar25 = param_1;
   do {
      uVar22 = *puVar25;
      puVar25 = (uint*)( (long)puVar25 + 1 );
      uVar28 = ( uVar28 ^ (byte)uVar22 ) * 0x100000001b3;
   }
 while ( puVar25 != param_1 + 1 );
   bVar30 = (byte)uVar28 | 0x80;
   uVar24 = 0xffffffff;
   uVar22 = *(int*)( this + 0x14 ) - 1;
   uVar29 = ( uint )(uVar28 >> 7);
   while (true) {
      uVar29 = uVar29 & uVar22;
      pbVar1 = (byte*)( *(long*)( this + 8 ) + (ulong)uVar29 );
      bVar6 = *pbVar1;
      bVar7 = pbVar1[1];
      bVar8 = pbVar1[2];
      bVar9 = pbVar1[3];
      bVar10 = pbVar1[4];
      bVar11 = pbVar1[5];
      bVar12 = pbVar1[6];
      bVar13 = pbVar1[7];
      bVar14 = pbVar1[8];
      bVar15 = pbVar1[9];
      bVar16 = pbVar1[10];
      bVar17 = pbVar1[0xb];
      bVar18 = pbVar1[0xc];
      bVar19 = pbVar1[0xd];
      bVar20 = pbVar1[0xe];
      bVar21 = pbVar1[0xf];
      auVar32[0] = -(bVar30 == bVar6);
      auVar32[1] = -(bVar30 == bVar7);
      auVar32[2] = -(bVar30 == bVar8);
      auVar32[3] = -(bVar30 == bVar9);
      auVar32[4] = -(bVar30 == bVar10);
      auVar32[5] = -(bVar30 == bVar11);
      auVar32[6] = -(bVar30 == bVar12);
      auVar32[7] = -(bVar30 == bVar13);
      auVar32[8] = -(bVar30 == bVar14);
      auVar32[9] = -(bVar30 == bVar15);
      auVar32[10] = -(bVar30 == bVar16);
      auVar32[0xb] = -(bVar30 == bVar17);
      auVar32[0xc] = -(bVar30 == bVar18);
      auVar32[0xd] = -(bVar30 == bVar19);
      auVar32[0xe] = -(bVar30 == bVar20);
      auVar32[0xf] = -(bVar30 == bVar21);
      uVar3 = ( ushort )(SUB161(auVar32 >> 7, 0) & 1) | ( ushort )(SUB161(auVar32 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar32 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar32 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar32 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar32 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar32 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar32 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar32 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar32 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar32 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar32 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar32 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar32 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar32 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar32[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
         uVar27 = (uint)uVar3;
         uVar23 = uVar29;
         do {
            iVar4 = 0;
            for (uVar5 = uVar27; ( uVar5 & 1 ) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
               iVar4 = iVar4 + 1;
            }

            uVar23 = uVar23 + iVar4 & uVar22;
            if (*(uint*)( *(long*)this + (ulong)uVar23 * 0x10 ) == *param_1) {
               bVar26 = false;
               goto LAB_00101fa5;
            }

            uVar23 = uVar23 + 1;
            bVar2 = (char)iVar4 + 1U & 0x1f;
            uVar5 = uVar27 >> bVar2;
            uVar27 = uVar27 >> bVar2;
         }
 while ( uVar5 != 0 );
      }

      if (uVar24 == 0xffffffff) {
         auVar33[0] = -(bVar6 == _LC2);
         auVar33[1] = -(bVar7 == UNK_00102651);
         auVar33[2] = -(bVar8 == UNK_00102652);
         auVar33[3] = -(bVar9 == UNK_00102653);
         auVar33[4] = -(bVar10 == UNK_00102654);
         auVar33[5] = -(bVar11 == UNK_00102655);
         auVar33[6] = -(bVar12 == UNK_00102656);
         auVar33[7] = -(bVar13 == UNK_00102657);
         auVar33[8] = -(bVar14 == UNK_00102658);
         auVar33[9] = -(bVar15 == UNK_00102659);
         auVar33[10] = -(bVar16 == UNK_0010265a);
         auVar33[0xb] = -(bVar17 == UNK_0010265b);
         auVar33[0xc] = -(bVar18 == UNK_0010265c);
         auVar33[0xd] = -(bVar19 == UNK_0010265d);
         auVar33[0xe] = -(bVar20 == UNK_0010265e);
         auVar33[0xf] = -(bVar21 == UNK_0010265f);
         iVar4 = 0;
         uVar27 = ( uint )(ushort)(( ushort )(SUB161(auVar33 >> 7, 0) & 1) | ( ushort )(SUB161(auVar33 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar33 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar33 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar33 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar33 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar33 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar33 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar33 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar33 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar33 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar33 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar33 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar33 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar33 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar33[0xf] >> 7) << 0xf);
         for (uVar23 = uVar27; ( uVar23 & 1 ) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
         }

         if (uVar27 != 0) {
            uVar24 = iVar4 + uVar29;
         }

      }

      auVar31[0] = -(bVar6 == 0);
      auVar31[1] = -(bVar7 == 0);
      auVar31[2] = -(bVar8 == 0);
      auVar31[3] = -(bVar9 == 0);
      auVar31[4] = -(bVar10 == 0);
      auVar31[5] = -(bVar11 == 0);
      auVar31[6] = -(bVar12 == 0);
      auVar31[7] = -(bVar13 == 0);
      auVar31[8] = -(bVar14 == 0);
      auVar31[9] = -(bVar15 == 0);
      auVar31[10] = -(bVar16 == 0);
      auVar31[0xb] = -(bVar17 == 0);
      auVar31[0xc] = -(bVar18 == 0);
      auVar31[0xd] = -(bVar19 == 0);
      auVar31[0xe] = -(bVar20 == 0);
      auVar31[0xf] = -(bVar21 == 0);
      uVar3 = ( ushort )(SUB161(auVar31 >> 7, 0) & 1) | ( ushort )(SUB161(auVar31 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar31 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar31 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar31 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar31 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar31 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar31 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar31 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar31 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar31 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar31 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar31 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar31 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar31 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar31[0xf] >> 7) << 0xf;
      if (uVar3 != 0) break;
      uVar29 = uVar29 + 0x10;
   }
;
   if (uVar24 == 0xffffffff) {
      iVar4 = 0;
      for (uVar24 = (uint)uVar3; ( uVar24 & 1 ) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
         iVar4 = iVar4 + 1;
      }

      *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + -1;
      uVar24 = iVar4 + uVar29;
   }

   uVar23 = uVar22 & uVar24;
   *(byte*)( *(long*)( this + 8 ) + (ulong)uVar23 ) = bVar30;
   *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar23 - 0xf ) + 0xf) ) = bVar30;
   bVar26 = true;
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   LAB_00101fa5:*param_2 = uVar23;
   return bVar26;
}
/* JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<unsigned int, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::Hash<unsigned int>, std::equal_to<unsigned int> >::GrowTable() */void JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::GrowTable(HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>> *this) {
   void *__s;
   char *pcVar1;
   uint uVar2;
   byte *pbVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   long lVar8;
   byte *pbVar9;
   undefined4 *puVar10;
   uint uVar11;
   byte bVar12;
   byte *pbVar13;
   int iVar14;
   byte *pbVar15;
   char *pcVar16;
   undefined1 auVar17[16];
   uVar2 = *(uint*)( this + 0x14 );
   uVar7 = ( ulong )(uVar2 * 2);
   if (uVar2 * 2 < 0x10) {
      uVar7 = 0x10;
   }

   if (uVar2 <= (uint)uVar7) {
      pbVar3 = *(byte**)this;
      pcVar16 = *(char**)( this + 8 );
      *(undefined4*)( this + 0x10 ) = 0;
      *(uint*)( this + 0x14 ) = (uint)uVar7;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(int*)( this + 0x18 ) = (int)( uVar7 * 7 >> 3 );
      lVar8 = ( *Allocate )(uVar7 * 0x11 + 0xf);
      *(long*)this = lVar8;
      __s = (void*)( lVar8 + ( ulong ) * (uint*)( this + 0x14 ) * 0x10 );
      *(void**)( this + 8 ) = __s;
      memset(__s, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
      if (pbVar3 != (byte*)0x0) {
         if (uVar2 != 0) {
            pbVar13 = pbVar3 + 4;
            pbVar15 = pbVar3;
            do {
               if (*pcVar16 < '\0') {
                  iVar14 = *(int*)( this + 0x18 );
                  if (iVar14 == 0) {
                     if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
                        rehash((uint)this);
                        iVar14 = *(int*)( this + 0x18 );
                     }
 else {
                        GrowTable(this);
                        iVar14 = *(int*)( this + 0x18 );
                     }

                  }

                  if (pbVar15 < pbVar13) {
                     uVar7 = 0xcbf29ce484222325;
                     pbVar9 = pbVar15;
                     do {
                        bVar12 = *pbVar9;
                        pbVar9 = pbVar9 + 1;
                        uVar7 = ( uVar7 ^ bVar12 ) * 0x100000001b3;
                     }
 while ( pbVar9 != pbVar13 );
                     bVar12 = (byte)uVar7 | 0x80;
                     uVar6 = ( uint )(uVar7 >> 7);
                  }
 else {
                     bVar12 = 0xa5;
                     uVar6 = 0xc9084446;
                  }

                  while (true) {
                     uVar6 = uVar6 & *(int*)( this + 0x14 ) - 1U;
                     pcVar1 = (char*)( *(long*)( this + 8 ) + (ulong)uVar6 );
                     auVar17[0] = -(*pcVar1 == '\0');
                     for (int i = 0; i < 15; i++) {
                        auVar17[( i + 1 )] = -(pcVar1[1] == '\0');
                     }

                     uVar4 = ( ushort )(SUB161(auVar17 >> 7, 0) & 1) | ( ushort )(SUB161(auVar17 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar17 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar17 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar17 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar17 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar17 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar17 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar17 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar17 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar17 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar17 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar17 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar17 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar17 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar17[0xf] >> 7) << 0xf;
                     if (uVar4 != 0) break;
                     uVar6 = uVar6 + 0x10;
                  }
;
                  iVar5 = 0;
                  for (uVar11 = (uint)uVar4; ( uVar11 & 1 ) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                     iVar5 = iVar5 + 1;
                  }

                  *(int*)( this + 0x18 ) = iVar14 + -1;
                  uVar6 = iVar5 + uVar6 & *(int*)( this + 0x14 ) - 1U;
                  *(byte*)( *(long*)( this + 8 ) + (ulong)uVar6 ) = bVar12;
                  *(byte*)( *(long*)( this + 8 ) + ( ulong )(( uVar6 - 0xf & *(int*)( this + 0x14 ) - 1U ) + 0xf) ) = bVar12;
                  puVar10 = (undefined4*)( (ulong)uVar6 * 0x10 + *(long*)this );
                  *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
                  *puVar10 = *(undefined4*)pbVar15;
                  *(undefined8*)( puVar10 + 2 ) = *(undefined8*)( pbVar15 + 8 );
               }

               pbVar15 = pbVar15 + 0x10;
               pcVar16 = pcVar16 + 1;
               pbVar13 = pbVar13 + 0x10;
            }
 while ( pbVar3 + (ulong)uVar2 * 0x10 != pbVar15 );
         }

         /* WARNING: Could not recover jumptable at 0x00102249. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *Free )(pbVar3);
         return;
      }

   }

   return;
}
/* bool JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::Ref<JPH::DebugRenderer::Geometry>
   >, JPH::UnorderedMapDetail<unsigned int, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::Hash<unsigned int>, std::equal_to<unsigned int> >::InsertKey<false>(unsigned int const&,
   unsigned int&) */bool JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>(HashTable<unsigned_int,std::pair<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<unsigned_int,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>> *this, uint *param_1, uint *param_2) {
   byte *pbVar1;
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
   uint uVar24;
   uint *puVar25;
   bool bVar26;
   uint uVar27;
   ulong uVar28;
   uint uVar29;
   byte bVar30;
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   if (*(int*)( this + 0x18 ) == 0) {
      if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
         rehash((uint)this);
      }
 else {
         GrowTable(this);
      }

   }

   uVar28 = 0xcbf29ce484222325;
   puVar25 = param_1;
   do {
      uVar22 = *puVar25;
      puVar25 = (uint*)( (long)puVar25 + 1 );
      uVar28 = ( uVar28 ^ (byte)uVar22 ) * 0x100000001b3;
   }
 while ( puVar25 != param_1 + 1 );
   bVar30 = (byte)uVar28 | 0x80;
   uVar24 = 0xffffffff;
   uVar22 = *(int*)( this + 0x14 ) - 1;
   uVar29 = ( uint )(uVar28 >> 7);
   while (true) {
      uVar29 = uVar29 & uVar22;
      pbVar1 = (byte*)( *(long*)( this + 8 ) + (ulong)uVar29 );
      bVar6 = *pbVar1;
      bVar7 = pbVar1[1];
      bVar8 = pbVar1[2];
      bVar9 = pbVar1[3];
      bVar10 = pbVar1[4];
      bVar11 = pbVar1[5];
      bVar12 = pbVar1[6];
      bVar13 = pbVar1[7];
      bVar14 = pbVar1[8];
      bVar15 = pbVar1[9];
      bVar16 = pbVar1[10];
      bVar17 = pbVar1[0xb];
      bVar18 = pbVar1[0xc];
      bVar19 = pbVar1[0xd];
      bVar20 = pbVar1[0xe];
      bVar21 = pbVar1[0xf];
      auVar32[0] = -(bVar30 == bVar6);
      auVar32[1] = -(bVar30 == bVar7);
      auVar32[2] = -(bVar30 == bVar8);
      auVar32[3] = -(bVar30 == bVar9);
      auVar32[4] = -(bVar30 == bVar10);
      auVar32[5] = -(bVar30 == bVar11);
      auVar32[6] = -(bVar30 == bVar12);
      auVar32[7] = -(bVar30 == bVar13);
      auVar32[8] = -(bVar30 == bVar14);
      auVar32[9] = -(bVar30 == bVar15);
      auVar32[10] = -(bVar30 == bVar16);
      auVar32[0xb] = -(bVar30 == bVar17);
      auVar32[0xc] = -(bVar30 == bVar18);
      auVar32[0xd] = -(bVar30 == bVar19);
      auVar32[0xe] = -(bVar30 == bVar20);
      auVar32[0xf] = -(bVar30 == bVar21);
      uVar3 = ( ushort )(SUB161(auVar32 >> 7, 0) & 1) | ( ushort )(SUB161(auVar32 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar32 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar32 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar32 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar32 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar32 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar32 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar32 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar32 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar32 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar32 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar32 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar32 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar32 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar32[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
         uVar27 = (uint)uVar3;
         uVar23 = uVar29;
         do {
            iVar4 = 0;
            for (uVar5 = uVar27; ( uVar5 & 1 ) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
               iVar4 = iVar4 + 1;
            }

            uVar23 = uVar23 + iVar4 & uVar22;
            if (*(uint*)( *(long*)this + (ulong)uVar23 * 0x10 ) == *param_1) {
               bVar26 = false;
               goto LAB_00102385;
            }

            uVar23 = uVar23 + 1;
            bVar2 = (char)iVar4 + 1U & 0x1f;
            uVar5 = uVar27 >> bVar2;
            uVar27 = uVar27 >> bVar2;
         }
 while ( uVar5 != 0 );
      }

      if (uVar24 == 0xffffffff) {
         auVar33[0] = -(bVar6 == _LC2);
         auVar33[1] = -(bVar7 == UNK_00102651);
         auVar33[2] = -(bVar8 == UNK_00102652);
         auVar33[3] = -(bVar9 == UNK_00102653);
         auVar33[4] = -(bVar10 == UNK_00102654);
         auVar33[5] = -(bVar11 == UNK_00102655);
         auVar33[6] = -(bVar12 == UNK_00102656);
         auVar33[7] = -(bVar13 == UNK_00102657);
         auVar33[8] = -(bVar14 == UNK_00102658);
         auVar33[9] = -(bVar15 == UNK_00102659);
         auVar33[10] = -(bVar16 == UNK_0010265a);
         auVar33[0xb] = -(bVar17 == UNK_0010265b);
         auVar33[0xc] = -(bVar18 == UNK_0010265c);
         auVar33[0xd] = -(bVar19 == UNK_0010265d);
         auVar33[0xe] = -(bVar20 == UNK_0010265e);
         auVar33[0xf] = -(bVar21 == UNK_0010265f);
         iVar4 = 0;
         uVar27 = ( uint )(ushort)(( ushort )(SUB161(auVar33 >> 7, 0) & 1) | ( ushort )(SUB161(auVar33 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar33 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar33 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar33 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar33 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar33 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar33 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar33 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar33 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar33 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar33 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar33 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar33 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar33 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar33[0xf] >> 7) << 0xf);
         for (uVar23 = uVar27; ( uVar23 & 1 ) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
         }

         if (uVar27 != 0) {
            uVar24 = iVar4 + uVar29;
         }

      }

      auVar31[0] = -(bVar6 == 0);
      auVar31[1] = -(bVar7 == 0);
      auVar31[2] = -(bVar8 == 0);
      auVar31[3] = -(bVar9 == 0);
      auVar31[4] = -(bVar10 == 0);
      auVar31[5] = -(bVar11 == 0);
      auVar31[6] = -(bVar12 == 0);
      auVar31[7] = -(bVar13 == 0);
      auVar31[8] = -(bVar14 == 0);
      auVar31[9] = -(bVar15 == 0);
      auVar31[10] = -(bVar16 == 0);
      auVar31[0xb] = -(bVar17 == 0);
      auVar31[0xc] = -(bVar18 == 0);
      auVar31[0xd] = -(bVar19 == 0);
      auVar31[0xe] = -(bVar20 == 0);
      auVar31[0xf] = -(bVar21 == 0);
      uVar3 = ( ushort )(SUB161(auVar31 >> 7, 0) & 1) | ( ushort )(SUB161(auVar31 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar31 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar31 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar31 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar31 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar31 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar31 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar31 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar31 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar31 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar31 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar31 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar31 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar31 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar31[0xf] >> 7) << 0xf;
      if (uVar3 != 0) break;
      uVar29 = uVar29 + 0x10;
   }
;
   if (uVar24 == 0xffffffff) {
      iVar4 = 0;
      for (uVar24 = (uint)uVar3; ( uVar24 & 1 ) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
         iVar4 = iVar4 + 1;
      }

      *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + -1;
      uVar24 = iVar4 + uVar29;
   }

   uVar23 = uVar22 & uVar24;
   *(byte*)( *(long*)( this + 8 ) + (ulong)uVar23 ) = bVar30;
   *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar23 - 0xf ) + 0xf) ) = bVar30;
   bVar26 = true;
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   LAB_00102385:*param_2 = uVar23;
   return bVar26;
}
/* WARNING: Control flow encountered bad instruction data *//* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this, ulong param_1, ulong param_2, char *param_3, ulong param_4) {
   undefined1 *__dest;
   ulong uVar1;
   ulong uVar2;
   size_t __n;
   ulong uVar3;
   undefined1 *__src;
   __n = *(long*)( this + 8 ) - ( param_1 + param_2 );
   uVar3 = ( param_4 - param_2 ) + *(long*)( this + 8 );
   if (this + 0x10 == *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>**)this) {
      uVar1 = 0xf;
   }
 else {
      uVar1 = *(ulong*)( this + 0x10 );
   }

   if (-1 < (long)uVar3) {
      if (uVar1 < uVar3) {
         uVar1 = uVar1 * 2;
         uVar2 = 0x7fffffffffffffff;
         if (uVar1 < 0x8000000000000000) {
            uVar2 = uVar1;
         }

         if (uVar3 < uVar1) {
            uVar3 = uVar2;
         }

      }

      __dest = (undefined1*)( *JPH::Allocate )(uVar3 + 1);
      if (param_1 != 0) {
         if (param_1 == 1) {
            *__dest = **(undefined1**)this;
         }
 else {
            memcpy(__dest, *(undefined1**)this, param_1);
         }

      }

      if (( param_3 != (char*)0x0 ) && ( param_4 != 0 )) {
         if (param_4 == 1) {
            __dest[param_1] = *param_3;
         }
 else {
            memcpy(__dest + param_1, param_3, param_4);
         }

      }

      if (__n != 0) {
         __src = (undefined1*)( param_1 + param_2 + *(long*)this );
         if (__n == 1) {
            __dest[param_4 + param_1] = *__src;
         }
 else {
            memcpy(__dest + param_4 + param_1, __src, __n);
         }

      }

      if (this + 0x10 != *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>**)this) {
         ( *JPH::Free )();
      }

      *(undefined1**)this = __dest;
      *(ulong*)( this + 0x10 ) = uVar3;
      return;
   }

   std::__throw_length_error("basic_string::_M_create");
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* JPH::DebugRendererPlayback::Parse(JPH::StreamIn&) */void JPH::DebugRendererPlayback::_GLOBAL__sub_I_Parse(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC10;
   }

   return;
}

