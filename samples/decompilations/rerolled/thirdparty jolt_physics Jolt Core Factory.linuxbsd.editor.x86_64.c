/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::RTTI const*>,
   JPH::UnorderedMapDetail<unsigned int, JPH::RTTI const*>, JPH::Hash<unsigned int>,
   std::equal_to<unsigned int> >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::rehash(uint param_1) {
   undefined4 *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   byte bVar4;
   char cVar5;
   undefined4 uVar6;
   undefined8 uVar7;
   ushort uVar8;
   undefined1 auVar9[16];
   uint uVar10;
   long lVar11;
   byte *pbVar12;
   long lVar13;
   int iVar14;
   char *pcVar15;
   uint uVar16;
   uint uVar17;
   undefined4 in_register_0000003c;
   long *plVar18;
   ulong uVar19;
   undefined1 *puVar20;
   uint uVar21;
   long lVar22;
   char cVar23;
   uint uVar24;
   ulong uVar25;
   uint uVar26;
   byte *pbVar27;
   undefined1 auVar28[16];
   plVar18 = (long*)CONCAT44(in_register_0000003c, param_1);
   puVar20 = (undefined1*)plVar18[1];
   uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
   if (*(uint*)( (long)plVar18 + 0x14 ) != 0) {
      lVar11 = 0;
      do {
         while (true) {
            pcVar15 = puVar20 + lVar11;
            if (*pcVar15 != '\0') break;
            LAB_0010002a:lVar11 = lVar11 + 1;
            if ((uint)uVar19 <= (uint)lVar11) goto LAB_00100054;
         };
         if (*pcVar15 == '\x7f') {
            *pcVar15 = '\0';
            puVar20 = (undefined1*)plVar18[1];
            uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
            goto LAB_0010002a;
         }
         *pcVar15 = '\x7f';
         uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
         lVar11 = lVar11 + 1;
         puVar20 = (undefined1*)plVar18[1];
      } while ( (uint)lVar11 < *(uint*)( (long)plVar18 + 0x14 ) );
   }
   LAB_00100054:puVar20[uVar19] = *puVar20;
   lVar11 = 1;
   do {
      iVar14 = (int)lVar11;
      puVar20 = (undefined1*)( plVar18[1] + lVar11 );
      lVar11 = lVar11 + 1;
      *(undefined1*)( plVar18[1] + ( ulong )(uint)(iVar14 + *(int*)( (long)plVar18 + 0x14 )) ) = *puVar20;
      auVar9 = __LC0;
   } while ( lVar11 != 0xf );
   uVar21 = *(uint*)( (long)plVar18 + 0x14 );
   uVar19 = (ulong)uVar21;
   uVar17 = uVar21 - 1;
   if (uVar21 != 0) {
      uVar21 = 0xfffffff1;
      lVar11 = 0;
      do {
         lVar13 = plVar18[1];
         if (*(char*)( lVar13 + lVar11 ) == '\x7f') {
            lVar22 = lVar11 * 0x10;
            pbVar12 = (byte*)( *plVar18 + lVar22 );
            pbVar27 = pbVar12 + 4;
            if (pbVar27 <= pbVar12) goto LAB_001001f7;
            do {
               uVar25 = 0xcbf29ce484222325;
               do {
                  bVar4 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                  uVar25 = ( bVar4 ^ uVar25 ) * 0x100000001b3;
               } while ( pbVar12 != pbVar27 );
               uVar24 = (uint)uVar25 | 0xffffff80;
               uVar25 = uVar25 >> 7;
               while (true) {
                  uVar26 = (int)uVar19 - 1U & (uint)uVar25;
                  auVar28 = *(undefined1(*) [16])( lVar13 + (ulong)uVar26 ) & auVar9;
                  uVar8 = ( ushort )(SUB161(auVar28 >> 7, 0) & 1) | ( ushort )(SUB161(auVar28 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar28 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar28 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar28 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar28 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar28 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar28 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar28 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar28 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar28 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar28 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar28 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar28 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar28 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar28[0xf] >> 7) << 0xf;
                  uVar10 = uVar26;
                  while (uVar8 == 0xffff) {
                     uVar10 = uVar10 + 0x10 & uVar17;
                     auVar28 = *(undefined1(*) [16])( lVar13 + (ulong)uVar10 ) & auVar9;
                     uVar8 = ( ushort )(SUB161(auVar28 >> 7, 0) & 1) | ( ushort )(SUB161(auVar28 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar28 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar28 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar28 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar28 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar28 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar28 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar28 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar28 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar28 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar28 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar28 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar28 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar28 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar28[0xf] >> 7) << 0xf;
                  };
                  iVar14 = 0;
                  for (uVar16 = uVar8 ^ 0xffff; ( uVar16 & 1 ) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
                     iVar14 = iVar14 + 1;
                  }
                  uVar10 = iVar14 + uVar10 & uVar17;
                  cVar23 = (char)uVar24;
                  if (( ( uVar10 - uVar26 ^ (int)lVar11 - uVar26 ) & uVar17 & 0xfffffff0 ) == 0) {
                     *(char*)( lVar13 + lVar11 ) = cVar23;
                     *(char*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar21 ) + 0xf) ) = cVar23;
                     uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
                     goto LAB_001000c0;
                  }
                  pcVar15 = (char*)( lVar13 + (ulong)uVar10 );
                  lVar13 = (ulong)uVar10 * 0x10;
                  cVar5 = *pcVar15;
                  *pcVar15 = cVar23;
                  if (cVar5 == '\0') {
                     *(char*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar10 - 0xf ) + 0xf) ) = cVar23;
                     *(undefined1*)( plVar18[1] + lVar11 ) = 0;
                     *(undefined1*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar21 ) + 0xf) ) = 0;
                     uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
                     puVar2 = (undefined8*)( *plVar18 + lVar22 );
                     uVar7 = puVar2[1];
                     puVar3 = (undefined8*)( *plVar18 + lVar13 );
                     *puVar3 = *puVar2;
                     puVar3[1] = uVar7;
                     goto LAB_001000c0;
                  }
                  *(char*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar10 - 0xf ) + 0xf) ) = cVar23;
                  puVar1 = (undefined4*)( *plVar18 + lVar13 );
                  pbVar12 = (byte*)( *plVar18 + lVar22 );
                  uVar6 = *(undefined4*)pbVar12;
                  pbVar27 = pbVar12 + 4;
                  *(undefined4*)pbVar12 = *puVar1;
                  *puVar1 = uVar6;
                  uVar7 = *(undefined8*)( pbVar12 + 8 );
                  uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
                  *(undefined8*)( pbVar12 + 8 ) = *(undefined8*)( puVar1 + 2 );
                  *(undefined8*)( puVar1 + 2 ) = uVar7;
                  lVar13 = plVar18[1];
                  if (pbVar12 < pbVar27) break;
                  LAB_001001f7:uVar24 = 0xffffffa5;
                  uVar25 = 0xc9084446;
               };
            } while ( true );
         }
         LAB_001000c0:lVar11 = lVar11 + 1;
         uVar21 = uVar21 + 1;
      } while ( (uint)lVar11 < (uint)uVar19 );
   }
   *(int*)( plVar18 + 3 ) = (int)( uVar19 * 7 >> 3 ) - (int)plVar18[2];
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<std::basic_string_view<char, std::char_traits<char> >,
   std::pair<std::basic_string_view<char, std::char_traits<char> >, JPH::RTTI const*>,
   JPH::UnorderedMapDetail<std::basic_string_view<char, std::char_traits<char> >, JPH::RTTI const*>,
   JPH::Hash<std::basic_string_view<char, std::char_traits<char> > >,
   std::equal_to<std::basic_string_view<char, std::char_traits<char> > > >::rehash(unsigned int)
   [clone .isra.0] */void JPH::HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>>::rehash(uint param_1) {
   char *pcVar1;
   byte bVar2;
   char cVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   ushort uVar6;
   undefined8 uVar7;
   undefined1 auVar8[16];
   uint uVar9;
   long lVar10;
   byte *pbVar11;
   undefined8 *puVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   uint *puVar16;
   uint uVar17;
   undefined4 in_register_0000003c;
   long *plVar18;
   ulong uVar19;
   undefined1 *puVar20;
   long lVar21;
   uint uVar22;
   char cVar23;
   uint uVar24;
   ulong uVar25;
   uint uVar26;
   byte *pbVar27;
   undefined1 auVar28[16];
   plVar18 = (long*)CONCAT44(in_register_0000003c, param_1);
   puVar20 = (undefined1*)plVar18[1];
   uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
   if (*(uint*)( (long)plVar18 + 0x14 ) != 0) {
      lVar10 = 0;
      do {
         while (true) {
            pcVar1 = puVar20 + lVar10;
            if (*pcVar1 != '\0') break;
            LAB_001002ba:lVar10 = lVar10 + 1;
            if ((uint)uVar19 <= (uint)lVar10) goto LAB_001002e4;
         };
         if (*pcVar1 == '\x7f') {
            *pcVar1 = '\0';
            puVar20 = (undefined1*)plVar18[1];
            uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
            goto LAB_001002ba;
         }
         *pcVar1 = '\x7f';
         uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
         lVar10 = lVar10 + 1;
         puVar20 = (undefined1*)plVar18[1];
      } while ( (uint)lVar10 < *(uint*)( (long)plVar18 + 0x14 ) );
   }
   LAB_001002e4:puVar20[uVar19] = *puVar20;
   lVar10 = 1;
   do {
      iVar13 = (int)lVar10;
      puVar20 = (undefined1*)( plVar18[1] + lVar10 );
      lVar10 = lVar10 + 1;
      *(undefined1*)( plVar18[1] + ( ulong )(uint)(iVar13 + *(int*)( (long)plVar18 + 0x14 )) ) = *puVar20;
      auVar8 = __LC0;
   } while ( lVar10 != 0xf );
   uVar22 = *(uint*)( (long)plVar18 + 0x14 );
   uVar19 = (ulong)uVar22;
   uVar17 = uVar22 - 1;
   if (uVar22 != 0) {
      lVar21 = 0;
      uVar22 = 0xfffffff1;
      lVar10 = 0;
      do {
         lVar14 = plVar18[1];
         if (*(char*)( lVar14 + lVar10 ) == '\x7f') {
            pbVar11 = *(byte**)( (uint*)( *plVar18 + lVar21 ) + 2 );
            pbVar27 = pbVar11 + *(uint*)( *plVar18 + lVar21 );
            if (pbVar27 <= pbVar11) goto LAB_001004a6;
            do {
               uVar25 = 0xcbf29ce484222325;
               do {
                  bVar2 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  uVar25 = ( bVar2 ^ uVar25 ) * 0x100000001b3;
               } while ( pbVar11 != pbVar27 );
               uVar24 = (uint)uVar25 | 0xffffff80;
               uVar25 = uVar25 >> 7;
               while (true) {
                  uVar26 = (int)uVar19 - 1U & (uint)uVar25;
                  auVar28 = *(undefined1(*) [16])( lVar14 + (ulong)uVar26 ) & auVar8;
                  uVar6 = ( ushort )(SUB161(auVar28 >> 7, 0) & 1) | ( ushort )(SUB161(auVar28 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar28 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar28 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar28 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar28 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar28 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar28 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar28 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar28 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar28 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar28 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar28 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar28 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar28 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar28[0xf] >> 7) << 0xf;
                  uVar9 = uVar26;
                  while (uVar6 == 0xffff) {
                     uVar9 = uVar9 + 0x10 & uVar17;
                     auVar28 = *(undefined1(*) [16])( lVar14 + (ulong)uVar9 ) & auVar8;
                     uVar6 = ( ushort )(SUB161(auVar28 >> 7, 0) & 1) | ( ushort )(SUB161(auVar28 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar28 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar28 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar28 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar28 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar28 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar28 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar28 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar28 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar28 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar28 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar28 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar28 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar28 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar28[0xf] >> 7) << 0xf;
                  };
                  iVar13 = 0;
                  for (uVar15 = uVar6 ^ 0xffff; ( uVar15 & 1 ) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                     iVar13 = iVar13 + 1;
                  }
                  uVar9 = iVar13 + uVar9 & uVar17;
                  cVar23 = (char)uVar24;
                  if (( ( uVar9 - uVar26 ^ (int)lVar10 - uVar26 ) & uVar17 & 0xfffffff0 ) == 0) {
                     *(char*)( lVar14 + lVar10 ) = cVar23;
                     *(char*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar22 ) + 0xf) ) = cVar23;
                     uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
                     goto LAB_00100358;
                  }
                  uVar25 = (ulong)uVar9;
                  cVar3 = *(char*)( lVar14 + uVar25 );
                  *(char*)( lVar14 + uVar25 ) = cVar23;
                  if (cVar3 == '\0') {
                     *(char*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar9 - 0xf ) + 0xf) ) = cVar23;
                     *(undefined1*)( plVar18[1] + lVar10 ) = 0;
                     *(undefined1*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar22 ) + 0xf) ) = 0;
                     lVar14 = *plVar18;
                     uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
                     uVar4 = ( (undefined8*)( lVar14 + lVar21 ) )[1];
                     puVar12 = (undefined8*)( lVar14 + uVar25 * 0x18 );
                     *puVar12 = *(undefined8*)( lVar14 + lVar21 );
                     puVar12[1] = uVar4;
                     *(undefined8*)( lVar14 + 0x10 + uVar25 * 0x18 ) = *(undefined8*)( lVar14 + 0x10 + lVar21 );
                     goto LAB_00100358;
                  }
                  *(char*)( plVar18[1] + ( ulong )(( *(int*)( (long)plVar18 + 0x14 ) - 1U & uVar9 - 0xf ) + 0xf) ) = cVar23;
                  uVar19 = ( ulong ) * (uint*)( (long)plVar18 + 0x14 );
                  puVar12 = (undefined8*)( uVar25 * 0x18 + *plVar18 );
                  puVar16 = (uint*)( *plVar18 + lVar21 );
                  uVar4 = *(undefined8*)puVar16;
                  uVar5 = *(undefined8*)( puVar16 + 2 );
                  uVar7 = puVar12[1];
                  *(undefined8*)puVar16 = *puVar12;
                  *(undefined8*)( puVar16 + 2 ) = uVar7;
                  *puVar12 = uVar4;
                  puVar12[1] = uVar5;
                  uVar4 = *(undefined8*)( puVar16 + 4 );
                  uVar24 = *puVar16;
                  *(undefined8*)( puVar16 + 4 ) = puVar12[2];
                  puVar12[2] = uVar4;
                  pbVar11 = *(byte**)( puVar16 + 2 );
                  lVar14 = plVar18[1];
                  pbVar27 = pbVar11 + uVar24;
                  if (pbVar11 < pbVar27) break;
                  LAB_001004a6:uVar24 = 0xffffffa5;
                  uVar25 = 0xc9084446;
               };
            } while ( true );
         }
         LAB_00100358:lVar10 = lVar10 + 1;
         uVar22 = uVar22 + 1;
         lVar21 = lVar21 + 0x18;
      } while ( (uint)lVar10 < (uint)uVar19 );
   }
   *(int*)( plVar18 + 3 ) = (int)( uVar19 * 7 >> 3 ) - (int)plVar18[2];
   return;
}/* JPH::Factory::Find(char const*) */size_t JPH::Factory::Find(Factory *this, char *param_1) {
   uint uVar1;
   size_t *psVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   byte bVar6;
   ushort uVar7;
   int iVar8;
   uint uVar9;
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
   byte bVar23;
   byte bVar24;
   byte bVar25;
   byte bVar26;
   int iVar27;
   size_t __n;
   ulong uVar28;
   byte *pbVar29;
   uint uVar30;
   uint uVar31;
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   uint local_58;
   __n = strlen(param_1);
   if (*(int*)( this + 0x10 ) != 0) {
      if (param_1 < param_1 + ( __n & 0xffffffff )) {
         uVar28 = 0xcbf29ce484222325;
         pbVar29 = (byte*)param_1;
         do {
            bVar26 = *pbVar29;
            pbVar29 = pbVar29 + 1;
            uVar28 = ( uVar28 ^ bVar26 ) * 0x100000001b3;
         } while ( pbVar29 != (byte*)( param_1 + ( __n & 0xffffffff ) ) );
         bVar26 = (byte)uVar28 | 0x80;
         local_58 = ( uint )(uVar28 >> 7);
      } else {
         bVar26 = 0xa5;
         local_58 = 0xc9084446;
      }
      uVar3 = *(uint*)( this + 0x14 );
      lVar4 = *(long*)( this + 8 );
      uVar1 = uVar3 - 1;
      while (true) {
         local_58 = local_58 & uVar1;
         pbVar29 = (byte*)( lVar4 + (ulong)local_58 );
         bVar10 = *pbVar29;
         bVar11 = pbVar29[1];
         bVar12 = pbVar29[2];
         bVar13 = pbVar29[3];
         bVar14 = pbVar29[4];
         bVar15 = pbVar29[5];
         bVar16 = pbVar29[6];
         bVar17 = pbVar29[7];
         bVar18 = pbVar29[8];
         bVar19 = pbVar29[9];
         bVar20 = pbVar29[10];
         bVar21 = pbVar29[0xb];
         bVar22 = pbVar29[0xc];
         bVar23 = pbVar29[0xd];
         bVar24 = pbVar29[0xe];
         bVar25 = pbVar29[0xf];
         auVar32[0] = -(bVar26 == bVar10);
         auVar32[1] = -(bVar26 == bVar11);
         auVar32[2] = -(bVar26 == bVar12);
         auVar32[3] = -(bVar26 == bVar13);
         auVar32[4] = -(bVar26 == bVar14);
         auVar32[5] = -(bVar26 == bVar15);
         auVar32[6] = -(bVar26 == bVar16);
         auVar32[7] = -(bVar26 == bVar17);
         auVar32[8] = -(bVar26 == bVar18);
         auVar32[9] = -(bVar26 == bVar19);
         auVar32[10] = -(bVar26 == bVar20);
         auVar32[0xb] = -(bVar26 == bVar21);
         auVar32[0xc] = -(bVar26 == bVar22);
         auVar32[0xd] = -(bVar26 == bVar23);
         auVar32[0xe] = -(bVar26 == bVar24);
         auVar32[0xf] = -(bVar26 == bVar25);
         uVar7 = ( ushort )(SUB161(auVar32 >> 7, 0) & 1) | ( ushort )(SUB161(auVar32 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar32 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar32 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar32 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar32 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar32 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar32 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar32 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar32 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar32 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar32 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar32 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar32 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar32 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar32[0xf] >> 7) << 0xf;
         if (uVar7 != 0) {
            lVar5 = *(long*)this;
            uVar30 = local_58;
            uVar31 = (uint)uVar7;
            do {
               iVar8 = 0;
               for (uVar9 = uVar31; ( uVar9 & 1 ) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  iVar8 = iVar8 + 1;
               }
               uVar30 = uVar30 + iVar8 & uVar1;
               psVar2 = (size_t*)( lVar5 + (ulong)uVar30 * 0x18 );
               if (( __n == *psVar2 ) && ( ( __n == 0 || ( iVar27 = memcmp((void*)psVar2[1], param_1, __n) ),iVar27 == 0 ) )) {
                  if (uVar3 == uVar30) {
                     return 0;
                  }
                  return psVar2[2];
               }
               uVar30 = uVar30 + 1;
               bVar6 = (char)iVar8 + 1U & 0x1f;
               uVar9 = uVar31 >> bVar6;
               uVar31 = uVar31 >> bVar6;
            } while ( uVar9 != 0 );
         }
         auVar33[0] = -(bVar10 == 0);
         auVar33[1] = -(bVar11 == 0);
         auVar33[2] = -(bVar12 == 0);
         auVar33[3] = -(bVar13 == 0);
         auVar33[4] = -(bVar14 == 0);
         auVar33[5] = -(bVar15 == 0);
         auVar33[6] = -(bVar16 == 0);
         auVar33[7] = -(bVar17 == 0);
         auVar33[8] = -(bVar18 == 0);
         auVar33[9] = -(bVar19 == 0);
         auVar33[10] = -(bVar20 == 0);
         auVar33[0xb] = -(bVar21 == 0);
         auVar33[0xc] = -(bVar22 == 0);
         auVar33[0xd] = -(bVar23 == 0);
         auVar33[0xe] = -(bVar24 == 0);
         auVar33[0xf] = -(bVar25 == 0);
         if (( ( ( ( ( ( ( ( ( ( ( ( ( ( ( auVar33 >> 7 & (undefined1[16])0x1 ) != (undefined1[16])0x0 || ( auVar33 >> 0xf & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x17 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x1f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x27 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x2f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x37 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x3f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x47 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x4f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x57 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x5f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x67 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x6f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar33 >> 0x77 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || bVar25 == 0) break;
         local_58 = local_58 + 0x10;
      };
   }
   return 0;
}/* JPH::Factory::CreateObject(char const*) */undefined8 JPH::Factory::CreateObject(Factory *this, char *param_1) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = Find(this, param_1);
   if (lVar1 != 0) {
      uVar2 = JPH::RTTI::CreateObject();
      return uVar2;
   }
   return 0;
}/* JPH::Factory::Find(unsigned int) */undefined8 JPH::Factory::Find(Factory *this, uint param_1) {
   byte *pbVar1;
   byte bVar2;
   ushort uVar3;
   int iVar4;
   uint uVar5;
   byte bVar6;
   uint uVar7;
   uint uVar8;
   ulong uVar9;
   uint *puVar10;
   uint uVar11;
   uint uVar12;
   byte bVar13;
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   uint local_1c;
   uint local_18[2];
   local_1c = param_1;
   if (*(int*)( this + 0x30 ) != 0) {
      puVar10 = &local_1c;
      uVar9 = 0xcbf29ce484222325;
      do {
         uVar7 = *puVar10;
         puVar10 = (uint*)( (long)puVar10 + 1 );
         uVar9 = ( uVar9 ^ (byte)uVar7 ) * 0x100000001b3;
      } while ( puVar10 != local_18 );
      bVar13 = (byte)uVar9 | 0x80;
      uVar7 = *(uint*)( this + 0x34 ) - 1;
      uVar12 = ( uint )(uVar9 >> 7);
      while (true) {
         uVar12 = uVar12 & uVar7;
         pbVar1 = (byte*)( *(long*)( this + 0x28 ) + (ulong)uVar12 );
         bVar6 = pbVar1[0xf];
         auVar15[0] = -(bVar13 == *pbVar1);
         for (int i_147 = 0; i_147 < 14; i_147++) {
            auVar15[( i_147 + 1 )] = -(bVar13 == pbVar1[1]);
         }
         auVar15[0xf] = -(bVar13 == bVar6);
         uVar3 = ( ushort )(SUB161(auVar15 >> 7, 0) & 1) | ( ushort )(SUB161(auVar15 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar15 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar15 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar15 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar15 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar15 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar15 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar15 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar15 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar15 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar15 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar15 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar15 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar15 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar15[0xf] >> 7) << 0xf;
         if (uVar3 != 0) {
            uVar11 = (uint)uVar3;
            uVar8 = uVar12;
            do {
               iVar4 = 0;
               for (uVar5 = uVar11; ( uVar5 & 1 ) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  iVar4 = iVar4 + 1;
               }
               uVar8 = uVar8 + iVar4 & uVar7;
               puVar10 = (uint*)( (ulong)uVar8 * 0x10 + *(long*)( this + 0x20 ) );
               if (*puVar10 == param_1) {
                  if (*(uint*)( this + 0x34 ) == uVar8) {
                     return 0;
                  }
                  return *(undefined8*)( puVar10 + 2 );
               }
               uVar8 = uVar8 + 1;
               bVar2 = (char)iVar4 + 1U & 0x1f;
               uVar5 = uVar11 >> bVar2;
               uVar11 = uVar11 >> bVar2;
            } while ( uVar5 != 0 );
         }
         auVar14[0] = -(*pbVar1 == 0);
         for (int i_148 = 0; i_148 < 14; i_148++) {
            auVar14[( i_148 + 1 )] = -(pbVar1[1] == 0);
         }
         auVar14[0xf] = -(bVar6 == 0);
         if (( ( ( ( ( ( ( ( ( ( ( ( ( ( ( auVar14 >> 7 & (undefined1[16])0x1 ) != (undefined1[16])0x0 || ( auVar14 >> 0xf & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x17 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x1f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x27 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x2f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x37 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x3f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x47 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x4f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x57 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x5f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x67 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x6f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar14 >> 0x77 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || bVar6 == 0) break;
         uVar12 = uVar12 + 0x10;
      };
   }
   return 0;
}/* JPH::Factory::Clear() */void JPH::Factory::Clear(Factory *this) {
   if (*(long*)this != 0) {
      ( *Free )();
      *(undefined4*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
   }
   if (*(long*)( this + 0x20 ) != 0) {
      ( *Free )();
      *(undefined4*)( this + 0x38 ) = 0;
      *(undefined8*)( this + 0x30 ) = 0;
      *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   }
   return;
}/* JPH::Factory::GetAllClasses() const */void JPH::Factory::GetAllClasses(void) {
   char *pcVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   uint uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 uVar9;
   ulong uVar10;
   long *in_RSI;
   undefined1(*in_RDI)[16];
   ulong uVar11;
   ulong uVar12;
   uVar10 = ( ulong ) * (uint*)( in_RSI + 2 );
   *(undefined8*)in_RDI[1] = 0;
   *in_RDI = (undefined1[16])0x0;
   if (uVar10 != 0) {
      uVar9 = ( *Reallocate )(0, 0, uVar10 * 8);
      *(ulong*)( *in_RDI + 8 ) = uVar10;
      *(undefined8*)in_RDI[1] = uVar9;
   }
   uVar2 = *(uint*)( (long)in_RSI + 0x14 );
   if (uVar2 != 0) {
      uVar10 = 0;
      do {
         uVar8 = uVar10;
         uVar10 = uVar8 & 0xffffffff;
         if (*(char*)( in_RSI[1] + uVar8 ) < '\0') goto LAB_001008e5;
         uVar10 = uVar8 + 1;
      } while ( uVar8 + 1 != (ulong)uVar2 );
      uVar10 = ( ulong )((int)uVar8 + 1);
      LAB_001008e5:if (uVar2 != (uint)uVar10) {
         lVar7 = *(long*)in_RDI[1];
         uVar8 = *(ulong*)*in_RDI;
         do {
            uVar4 = *(ulong*)( *in_RDI + 8 );
            lVar5 = *in_RSI;
            uVar11 = uVar8 + 1;
            if (uVar4 < uVar11) {
               uVar12 = uVar4 * 2;
               if (uVar4 * 2 < uVar11) {
                  uVar12 = uVar11;
               }
               lVar7 = ( *Reallocate )(lVar7, uVar4 << 3, uVar12 * 8);
               uVar8 = *(ulong*)*in_RDI;
               *(ulong*)( *in_RDI + 8 ) = uVar12;
               *(long*)in_RDI[1] = lVar7;
               uVar11 = uVar8 + 1;
            }
            uVar9 = *(undefined8*)( lVar5 + uVar10 * 0x18 + 0x10 );
            uVar3 = *(uint*)( (long)in_RSI + 0x14 );
            *(ulong*)*in_RDI = uVar11;
            *(undefined8*)( lVar7 + uVar8 * 8 ) = uVar9;
            uVar8 = ( ulong )((int)uVar10 + 1);
            do {
               uVar6 = (uint)uVar8;
               uVar10 = uVar8 & 0xffffffff;
               if (uVar3 <= uVar6) break;
               pcVar1 = (char*)( in_RSI[1] + uVar8 );
               uVar8 = uVar8 + 1;
            } while ( -1 < *pcVar1 );
            uVar8 = uVar11;
         } while ( uVar6 != uVar2 );
      }
   }
   return;
}/* JPH::Factory::Register(JPH::RTTI const*) */undefined8 JPH::Factory::Register(Factory *this, RTTI *param_1) {
   size_t *psVar1;
   char *__s;
   bool bVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   undefined8 uVar7;
   uint *puVar8;
   RTTI *pRVar9;
   int iVar10;
   long in_FS_OFFSET;
   uint local_4c;
   size_t local_48;
   char *pcStack_40;
   long local_30;
   __s = *(char**)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = Find(this, __s);
   if (lVar6 == 0) {
      local_48 = strlen(__s);
      pcStack_40 = __s;
      bVar2 = HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>>::InsertKey<false>((HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>>*)this, (basic_string_view*)&local_48, &local_4c);
      if (bVar2) {
         psVar1 = (size_t*)( *(long*)this + (ulong)local_4c * 0x18 );
         psVar1[2] = (size_t)param_1;
         *psVar1 = local_48;
         psVar1[1] = (size_t)pcStack_40;
      }
      uVar4 = JPH::RTTI::GetHash();
      local_4c = uVar4;
      bVar2 = HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>((HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>*)( this + 0x20 ), &local_4c, (uint*)&local_48);
      if (!bVar2) {
         LAB_00100b10:uVar7 = 0;
         goto LAB_00100a1b;
      }
      puVar8 = (uint*)( ( local_48 & 0xffffffff ) * 0x10 + *(long*)( this + 0x20 ) );
      *puVar8 = uVar4;
      iVar10 = 0;
      *(RTTI**)( puVar8 + 2 ) = param_1;
      iVar5 = JPH::RTTI::GetBaseClassCount();
      if (0 < iVar5) {
         do {
            pRVar9 = (RTTI*)JPH::RTTI::GetBaseClass((int)param_1);
            cVar3 = Register(this, pRVar9);
            if (cVar3 == '\0') goto LAB_00100b10;
            iVar10 = iVar10 + 1;
            iVar5 = JPH::RTTI::GetBaseClassCount();
         } while ( iVar10 < iVar5 );
      }
   }
   uVar7 = 1;
   LAB_00100a1b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar7;
}/* JPH::Factory::Register(JPH::RTTI const**, unsigned int) */undefined8 JPH::Factory::Register(Factory *this, RTTI **param_1, uint param_2) {
   void *pvVar1;
   RTTI **ppRVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   undefined8 uVar6;
   uVar4 = ( uint )(( ( ulong )(param_2 + *(int*)( this + 0x30 )) << 3 ) / 7);
   if (uVar4 < 0x10) {
      uVar4 = 0x10;
   }
   iVar3 = 0x1f;
   if (uVar4 - 1 != 0) {
      for (; uVar4 - 1 >> iVar3 == 0; iVar3 = iVar3 + -1) {}
   }
   uVar4 = 1 << ( (char)iVar3 + 1U & 0x1f );
   if (*(uint*)( this + 0x34 ) < uVar4) {
      *(uint*)( this + 0x34 ) = uVar4;
      *(int*)( this + 0x38 ) = (int)( (ulong)uVar4 * 7 >> 3 );
      lVar5 = ( *Allocate )((ulong)uVar4 * 0x11 + 0xf);
      *(long*)( this + 0x20 ) = lVar5;
      pvVar1 = (void*)( lVar5 + ( ulong ) * (uint*)( this + 0x34 ) * 0x10 );
      *(void**)( this + 0x28 ) = pvVar1;
      memset(pvVar1, 0, ( ulong )(*(uint*)( this + 0x34 ) + 0xf));
   }
   uVar4 = ( uint )(( ( ulong )(param_2 + *(int*)( this + 0x10 )) << 3 ) / 7);
   if (uVar4 < 0x10) {
      uVar4 = 0x10;
   }
   iVar3 = 0x1f;
   if (uVar4 - 1 != 0) {
      for (; uVar4 - 1 >> iVar3 == 0; iVar3 = iVar3 + -1) {}
   }
   uVar4 = 1 << ( (char)iVar3 + 1U & 0x1f );
   if (*(uint*)( this + 0x14 ) < uVar4) {
      *(uint*)( this + 0x14 ) = uVar4;
      *(int*)( this + 0x18 ) = (int)( (ulong)uVar4 * 7 >> 3 );
      lVar5 = ( *Allocate )((ulong)uVar4 * 0x19 + 0xf);
      *(long*)this = lVar5;
      pvVar1 = (void*)( lVar5 + ( ulong ) * (uint*)( this + 0x14 ) * 0x18 );
      *(void**)( this + 8 ) = pvVar1;
      memset(pvVar1, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
   }
   ppRVar2 = param_1 + param_2;
   if (param_1 < ppRVar2) {
      do {
         uVar6 = Register(this, *param_1);
         if ((char)uVar6 == '\0') {
            return uVar6;
         }
         param_1 = param_1 + 1;
      } while ( param_1 < ppRVar2 );
   }
   return 1;
}/* JPH::HashTable<std::basic_string_view<char, std::char_traits<char> >,
   std::pair<std::basic_string_view<char, std::char_traits<char> >, JPH::RTTI const*>,
   JPH::UnorderedMapDetail<std::basic_string_view<char, std::char_traits<char> >, JPH::RTTI const*>,
   JPH::Hash<std::basic_string_view<char, std::char_traits<char> > >,
   std::equal_to<std::basic_string_view<char, std::char_traits<char> > > >::GrowTable() */void JPH::HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>>::GrowTable(HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>> *this) {
   void *__s;
   char *pcVar1;
   undefined8 *puVar2;
   uint *puVar3;
   ushort uVar4;
   int iVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint uVar8;
   ulong uVar9;
   long lVar10;
   byte *pbVar11;
   uint uVar12;
   byte bVar13;
   int iVar14;
   byte *pbVar15;
   char *pcVar16;
   uint *puVar17;
   char *pcVar18;
   undefined1 auVar19[16];
   uVar8 = *(uint*)( this + 0x14 );
   uVar9 = ( ulong )(uVar8 * 2);
   if (uVar8 * 2 < 0x10) {
      uVar9 = 0x10;
   }
   if (uVar8 <= (uint)uVar9) {
      *(uint*)( this + 0x14 ) = (uint)uVar9;
      puVar3 = *(uint**)this;
      pcVar16 = *(char**)( this + 8 );
      *(undefined4*)( this + 0x10 ) = 0;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(int*)( this + 0x18 ) = (int)( uVar9 * 7 >> 3 );
      lVar10 = ( *Allocate )(uVar9 * 0x19 + 0xf);
      *(long*)this = lVar10;
      __s = (void*)( lVar10 + ( ulong ) * (uint*)( this + 0x14 ) * 0x18 );
      *(void**)( this + 8 ) = __s;
      memset(__s, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
      if (puVar3 != (uint*)0x0) {
         if (uVar8 != 0) {
            pcVar18 = pcVar16 + uVar8;
            puVar17 = puVar3;
            do {
               while (*pcVar16 < '\0') {
                  iVar14 = *(int*)( this + 0x18 );
                  if (iVar14 == 0) {
                     if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
                        rehash((uint)this);
                        iVar14 = *(int*)( this + 0x18 );
                     } else {
                        GrowTable(this);
                        iVar14 = *(int*)( this + 0x18 );
                     }
                  }
                  pbVar11 = *(byte**)( puVar17 + 2 );
                  pbVar15 = pbVar11 + *puVar17;
                  if (pbVar11 < pbVar15) {
                     uVar9 = 0xcbf29ce484222325;
                     do {
                        bVar13 = *pbVar11;
                        pbVar11 = pbVar11 + 1;
                        uVar9 = ( uVar9 ^ bVar13 ) * 0x100000001b3;
                     } while ( pbVar11 != pbVar15 );
                     bVar13 = (byte)uVar9 | 0x80;
                     uVar8 = ( uint )(uVar9 >> 7);
                  } else {
                     bVar13 = 0xa5;
                     uVar8 = 0xc9084446;
                  }
                  while (true) {
                     uVar8 = uVar8 & *(int*)( this + 0x14 ) - 1U;
                     pcVar1 = (char*)( *(long*)( this + 8 ) + (ulong)uVar8 );
                     auVar19[0] = -(*pcVar1 == '\0');
                     for (int i_149 = 0; i_149 < 15; i_149++) {
                        auVar19[( i_149 + 1 )] = -(pcVar1[1] == '\0');
                     }
                     uVar4 = ( ushort )(SUB161(auVar19 >> 7, 0) & 1) | ( ushort )(SUB161(auVar19 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar19 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar19 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar19 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar19 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar19 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar19 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar19 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar19 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar19 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar19 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar19 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar19 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar19 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar19[0xf] >> 7) << 0xf;
                     if (uVar4 != 0) break;
                     uVar8 = uVar8 + 0x10;
                  };
                  iVar5 = 0;
                  for (uVar12 = (uint)uVar4; ( uVar12 & 1 ) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                     iVar5 = iVar5 + 1;
                  }
                  pcVar16 = pcVar16 + 1;
                  *(int*)( this + 0x18 ) = iVar14 + -1;
                  uVar8 = iVar5 + uVar8 & *(int*)( this + 0x14 ) - 1U;
                  *(byte*)( *(long*)( this + 8 ) + (ulong)uVar8 ) = bVar13;
                  *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar8 - 0xf ) + 0xf) ) = bVar13;
                  uVar6 = *(undefined8*)puVar17;
                  uVar7 = *(undefined8*)( puVar17 + 2 );
                  *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
                  puVar2 = (undefined8*)( *(long*)this + (ulong)uVar8 * 0x18 );
                  *puVar2 = uVar6;
                  puVar2[1] = uVar7;
                  puVar2[2] = *(undefined8*)( puVar17 + 4 );
                  puVar17 = puVar17 + 6;
                  if (pcVar18 == pcVar16) goto LAB_00100e6e;
               };
               pcVar16 = pcVar16 + 1;
               puVar17 = puVar17 + 6;
            } while ( pcVar18 != pcVar16 );
         }
         LAB_00100e6e:/* WARNING: Could not recover jumptable at 0x00100e7f. Too many branches *//* WARNING: Treating indirect jump as call */( *Free )(puVar3);
         return;
      }
   }
   return;
}/* bool JPH::HashTable<std::basic_string_view<char, std::char_traits<char> >,
   std::pair<std::basic_string_view<char, std::char_traits<char> >, JPH::RTTI const*>,
   JPH::UnorderedMapDetail<std::basic_string_view<char, std::char_traits<char> >, JPH::RTTI const*>,
   JPH::Hash<std::basic_string_view<char, std::char_traits<char> > >,
   std::equal_to<std::basic_string_view<char, std::char_traits<char> > >
   >::InsertKey<false>(std::basic_string_view<char, std::char_traits<char> > const&, unsigned int&)
    */bool JPH::HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>>::InsertKey<false>(HashTable<std::basic_string_view<char,std::char_traits<char>>,std::pair<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::UnorderedMapDetail<std::basic_string_view<char,std::char_traits<char>>,JPH::RTTI_const*>,JPH::Hash<std::basic_string_view<char,std::char_traits<char>>>,std::equal_to<std::basic_string_view<char,std::char_traits<char>>>> *this, basic_string_view *param_1, uint *param_2) {
   uint uVar1;
   ulong *puVar2;
   ulong __n;
   byte *__s2;
   long lVar3;
   long lVar4;
   byte bVar5;
   ushort uVar6;
   int iVar7;
   uint uVar8;
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
   byte bVar23;
   byte bVar24;
   bool bVar25;
   uint uVar26;
   int iVar27;
   uint uVar28;
   byte *pbVar29;
   uint uVar30;
   byte bVar31;
   ulong uVar32;
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   uint local_40;
   if (*(int*)( this + 0x18 ) == 0) {
      if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
         rehash((uint)this);
      } else {
         GrowTable(this);
      }
   }
   __n = *(ulong*)param_1;
   __s2 = *(byte**)( param_1 + 8 );
   if (__s2 < __s2 + ( __n & 0xffffffff )) {
      uVar32 = 0xcbf29ce484222325;
      pbVar29 = __s2;
      do {
         bVar31 = *pbVar29;
         pbVar29 = pbVar29 + 1;
         uVar32 = ( uVar32 ^ bVar31 ) * 0x100000001b3;
      } while ( pbVar29 != __s2 + ( __n & 0xffffffff ) );
      uVar26 = ( uint )(uVar32 >> 7);
      bVar31 = (byte)uVar32 | 0x80;
   } else {
      uVar26 = 0xc9084446;
      bVar31 = 0xa5;
   }
   lVar3 = *(long*)( this + 8 );
   local_40 = 0xffffffff;
   uVar1 = *(int*)( this + 0x14 ) - 1;
   while (true) {
      uVar26 = uVar26 & uVar1;
      pbVar29 = (byte*)( lVar3 + (ulong)uVar26 );
      bVar9 = *pbVar29;
      bVar10 = pbVar29[1];
      bVar11 = pbVar29[2];
      bVar12 = pbVar29[3];
      bVar13 = pbVar29[4];
      bVar14 = pbVar29[5];
      bVar15 = pbVar29[6];
      bVar16 = pbVar29[7];
      bVar17 = pbVar29[8];
      bVar18 = pbVar29[9];
      bVar19 = pbVar29[10];
      bVar20 = pbVar29[0xb];
      bVar21 = pbVar29[0xc];
      bVar22 = pbVar29[0xd];
      bVar23 = pbVar29[0xe];
      bVar24 = pbVar29[0xf];
      auVar34[0] = -(bVar31 == bVar9);
      auVar34[1] = -(bVar31 == bVar10);
      auVar34[2] = -(bVar31 == bVar11);
      auVar34[3] = -(bVar31 == bVar12);
      auVar34[4] = -(bVar31 == bVar13);
      auVar34[5] = -(bVar31 == bVar14);
      auVar34[6] = -(bVar31 == bVar15);
      auVar34[7] = -(bVar31 == bVar16);
      auVar34[8] = -(bVar31 == bVar17);
      auVar34[9] = -(bVar31 == bVar18);
      auVar34[10] = -(bVar31 == bVar19);
      auVar34[0xb] = -(bVar31 == bVar20);
      auVar34[0xc] = -(bVar31 == bVar21);
      auVar34[0xd] = -(bVar31 == bVar22);
      auVar34[0xe] = -(bVar31 == bVar23);
      auVar34[0xf] = -(bVar31 == bVar24);
      uVar6 = ( ushort )(SUB161(auVar34 >> 7, 0) & 1) | ( ushort )(SUB161(auVar34 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar34 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar34 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar34 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar34 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar34 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar34 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar34 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar34 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar34 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar34 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar34 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar34 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar34 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar34[0xf] >> 7) << 0xf;
      if (uVar6 != 0) {
         lVar4 = *(long*)this;
         uVar30 = (uint)uVar6;
         uVar28 = uVar26;
         do {
            iVar7 = 0;
            for (uVar8 = uVar30; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
               iVar7 = iVar7 + 1;
            }
            uVar28 = uVar28 + iVar7 & uVar1;
            puVar2 = (ulong*)( lVar4 + (ulong)uVar28 * 0x18 );
            if (( *puVar2 == __n ) && ( ( __n == 0 || ( iVar27 = memcmp((void*)puVar2[1], __s2, __n) ),iVar27 == 0 ) )) {
               bVar25 = false;
               goto LAB_0010103d;
            }
            uVar28 = uVar28 + 1;
            bVar5 = (char)iVar7 + 1U & 0x1f;
            uVar8 = uVar30 >> bVar5;
            uVar30 = uVar30 >> bVar5;
         } while ( uVar8 != 0 );
      }
      uVar28 = local_40;
      if (local_40 == 0xffffffff) {
         auVar35[0] = -(bVar9 == _LC1);
         auVar35[1] = -(bVar10 == UNK_00101561);
         auVar35[2] = -(bVar11 == UNK_00101562);
         auVar35[3] = -(bVar12 == UNK_00101563);
         auVar35[4] = -(bVar13 == UNK_00101564);
         auVar35[5] = -(bVar14 == UNK_00101565);
         auVar35[6] = -(bVar15 == UNK_00101566);
         auVar35[7] = -(bVar16 == UNK_00101567);
         auVar35[8] = -(bVar17 == UNK_00101568);
         auVar35[9] = -(bVar18 == UNK_00101569);
         auVar35[10] = -(bVar19 == UNK_0010156a);
         auVar35[0xb] = -(bVar20 == UNK_0010156b);
         auVar35[0xc] = -(bVar21 == UNK_0010156c);
         auVar35[0xd] = -(bVar22 == UNK_0010156d);
         auVar35[0xe] = -(bVar23 == UNK_0010156e);
         auVar35[0xf] = -(bVar24 == UNK_0010156f);
         iVar7 = 0;
         uVar30 = ( uint )(ushort)(( ushort )(SUB161(auVar35 >> 7, 0) & 1) | ( ushort )(SUB161(auVar35 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar35 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar35 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar35 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar35 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar35 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar35 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar35 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar35 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar35 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar35 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar35 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar35 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar35 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar35[0xf] >> 7) << 0xf);
         for (uVar28 = uVar30; ( uVar28 & 1 ) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
         }
         uVar28 = iVar7 + uVar26;
         if (uVar30 == 0) {
            uVar28 = local_40;
         }
      }
      local_40 = uVar28;
      auVar33[0] = -(bVar9 == 0);
      auVar33[1] = -(bVar10 == 0);
      auVar33[2] = -(bVar11 == 0);
      auVar33[3] = -(bVar12 == 0);
      auVar33[4] = -(bVar13 == 0);
      auVar33[5] = -(bVar14 == 0);
      auVar33[6] = -(bVar15 == 0);
      auVar33[7] = -(bVar16 == 0);
      auVar33[8] = -(bVar17 == 0);
      auVar33[9] = -(bVar18 == 0);
      auVar33[10] = -(bVar19 == 0);
      auVar33[0xb] = -(bVar20 == 0);
      auVar33[0xc] = -(bVar21 == 0);
      auVar33[0xd] = -(bVar22 == 0);
      auVar33[0xe] = -(bVar23 == 0);
      auVar33[0xf] = -(bVar24 == 0);
      uVar6 = ( ushort )(SUB161(auVar33 >> 7, 0) & 1) | ( ushort )(SUB161(auVar33 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar33 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar33 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar33 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar33 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar33 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar33 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar33 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar33 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar33 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar33 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar33 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar33 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar33 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar33[0xf] >> 7) << 0xf;
      if (uVar6 != 0) break;
      uVar26 = uVar26 + 0x10;
   };
   if (local_40 == 0xffffffff) {
      iVar7 = 0;
      for (uVar28 = (uint)uVar6; ( uVar28 & 1 ) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
         iVar7 = iVar7 + 1;
      }
      *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + -1;
      local_40 = iVar7 + uVar26;
   }
   uVar28 = uVar1 & local_40;
   *(byte*)( lVar3 + (ulong)uVar28 ) = bVar31;
   bVar25 = true;
   *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar28 - 0xf ) + 0xf) ) = bVar31;
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   LAB_0010103d:*param_2 = uVar28;
   return bVar25;
}/* JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::RTTI const*>,
   JPH::UnorderedMapDetail<unsigned int, JPH::RTTI const*>, JPH::Hash<unsigned int>,
   std::equal_to<unsigned int> >::GrowTable() */void JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::GrowTable(HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>> *this) {
   void *__s;
   char *pcVar1;
   uint uVar2;
   byte *pbVar3;
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
   byte *pbVar15;
   int iVar16;
   byte *pbVar17;
   char *pcVar18;
   undefined1 auVar19[16];
   uVar2 = *(uint*)( this + 0x14 );
   uVar9 = ( ulong )(uVar2 * 2);
   if (uVar2 * 2 < 0x10) {
      uVar9 = 0x10;
   }
   if (uVar2 <= (uint)uVar9) {
      pbVar3 = *(byte**)this;
      pcVar18 = *(char**)( this + 8 );
      *(undefined4*)( this + 0x10 ) = 0;
      *(uint*)( this + 0x14 ) = (uint)uVar9;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(int*)( this + 0x18 ) = (int)( uVar9 * 7 >> 3 );
      lVar10 = ( *Allocate )(uVar9 * 0x11 + 0xf);
      *(long*)this = lVar10;
      __s = (void*)( lVar10 + ( ulong ) * (uint*)( this + 0x14 ) * 0x10 );
      *(void**)( this + 8 ) = __s;
      memset(__s, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
      if (pbVar3 != (byte*)0x0) {
         if (uVar2 != 0) {
            pbVar15 = pbVar3 + 4;
            pbVar17 = pbVar3;
            do {
               if (*pcVar18 < '\0') {
                  iVar16 = *(int*)( this + 0x18 );
                  if (iVar16 == 0) {
                     if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
                        rehash((uint)this);
                        iVar16 = *(int*)( this + 0x18 );
                     } else {
                        GrowTable(this);
                        iVar16 = *(int*)( this + 0x18 );
                     }
                  }
                  if (pbVar17 < pbVar15) {
                     uVar9 = 0xcbf29ce484222325;
                     pbVar11 = pbVar17;
                     do {
                        bVar14 = *pbVar11;
                        pbVar11 = pbVar11 + 1;
                        uVar9 = ( uVar9 ^ bVar14 ) * 0x100000001b3;
                     } while ( pbVar11 != pbVar15 );
                     bVar14 = (byte)uVar9 | 0x80;
                     uVar8 = ( uint )(uVar9 >> 7);
                  } else {
                     bVar14 = 0xa5;
                     uVar8 = 0xc9084446;
                  }
                  while (true) {
                     uVar8 = uVar8 & *(int*)( this + 0x14 ) - 1U;
                     pcVar1 = (char*)( *(long*)( this + 8 ) + (ulong)uVar8 );
                     auVar19[0] = -(*pcVar1 == '\0');
                     for (int i_151 = 0; i_151 < 15; i_151++) {
                        auVar19[( i_151 + 1 )] = -(pcVar1[1] == '\0');
                     }
                     uVar4 = ( ushort )(SUB161(auVar19 >> 7, 0) & 1) | ( ushort )(SUB161(auVar19 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar19 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar19 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar19 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar19 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar19 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar19 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar19 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar19 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar19 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar19 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar19 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar19 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar19 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar19[0xf] >> 7) << 0xf;
                     if (uVar4 != 0) break;
                     uVar8 = uVar8 + 0x10;
                  };
                  iVar5 = 0;
                  for (uVar13 = (uint)uVar4; ( uVar13 & 1 ) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                     iVar5 = iVar5 + 1;
                  }
                  *(int*)( this + 0x18 ) = iVar16 + -1;
                  uVar8 = iVar5 + uVar8 & *(int*)( this + 0x14 ) - 1U;
                  *(byte*)( *(long*)( this + 8 ) + (ulong)uVar8 ) = bVar14;
                  *(byte*)( *(long*)( this + 8 ) + ( ulong )(( uVar8 - 0xf & *(int*)( this + 0x14 ) - 1U ) + 0xf) ) = bVar14;
                  uVar6 = *(undefined8*)pbVar17;
                  uVar7 = *(undefined8*)( pbVar17 + 8 );
                  puVar12 = (undefined8*)( (ulong)uVar8 * 0x10 + *(long*)this );
                  *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
                  *puVar12 = uVar6;
                  puVar12[1] = uVar7;
               }
               pbVar17 = pbVar17 + 0x10;
               pcVar18 = pcVar18 + 1;
               pbVar15 = pbVar15 + 0x10;
            } while ( pbVar3 + (ulong)uVar2 * 0x10 != pbVar17 );
         }
         for (int i_150 = 0; i_150 < 2; i_150++) {
            /* WARNING: Could not recover jumptable at 0x00101321. Too many branches */
         }
         ( *Free )(pbVar3);
         return;
      }
   }
   return;
}/* bool JPH::HashTable<unsigned int, std::pair<unsigned int, JPH::RTTI const*>,
   JPH::UnorderedMapDetail<unsigned int, JPH::RTTI const*>, JPH::Hash<unsigned int>,
   std::equal_to<unsigned int> >::InsertKey<false>(unsigned int const&, unsigned int&) */bool JPH::HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>>::InsertKey<false>(HashTable<unsigned_int,std::pair<unsigned_int,JPH::RTTI_const*>,JPH::UnorderedMapDetail<unsigned_int,JPH::RTTI_const*>,JPH::Hash<unsigned_int>,std::equal_to<unsigned_int>> *this, uint *param_1, uint *param_2) {
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
      } else {
         GrowTable(this);
      }
   }
   uVar28 = 0xcbf29ce484222325;
   puVar25 = param_1;
   do {
      uVar22 = *puVar25;
      puVar25 = (uint*)( (long)puVar25 + 1 );
      uVar28 = ( uVar28 ^ (byte)uVar22 ) * 0x100000001b3;
   } while ( puVar25 != param_1 + 1 );
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
               goto LAB_00101465;
            }
            uVar23 = uVar23 + 1;
            bVar2 = (char)iVar4 + 1U & 0x1f;
            uVar5 = uVar27 >> bVar2;
            uVar27 = uVar27 >> bVar2;
         } while ( uVar5 != 0 );
      }
      if (uVar24 == 0xffffffff) {
         auVar33[0] = -(bVar6 == _LC1);
         auVar33[1] = -(bVar7 == UNK_00101561);
         auVar33[2] = -(bVar8 == UNK_00101562);
         auVar33[3] = -(bVar9 == UNK_00101563);
         auVar33[4] = -(bVar10 == UNK_00101564);
         auVar33[5] = -(bVar11 == UNK_00101565);
         auVar33[6] = -(bVar12 == UNK_00101566);
         auVar33[7] = -(bVar13 == UNK_00101567);
         auVar33[8] = -(bVar14 == UNK_00101568);
         auVar33[9] = -(bVar15 == UNK_00101569);
         auVar33[10] = -(bVar16 == UNK_0010156a);
         auVar33[0xb] = -(bVar17 == UNK_0010156b);
         auVar33[0xc] = -(bVar18 == UNK_0010156c);
         auVar33[0xd] = -(bVar19 == UNK_0010156d);
         auVar33[0xe] = -(bVar20 == UNK_0010156e);
         auVar33[0xf] = -(bVar21 == UNK_0010156f);
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
   };
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
   LAB_00101465:*param_2 = uVar23;
   return bVar26;
}/* JPH::Factory::sInstance */void JPH::Factory::_GLOBAL__sub_I_sInstance(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC2;
   }
   return;
}
