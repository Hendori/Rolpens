void keccak_f1600(ulong *param_1) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   byte bVar9;
   ulong *puVar10;
   ulong *puVar11;
   uint uVar12;
   undefined4 uVar13;
   ulong uVar14;
   uint uVar15;
   int iVar16;
   ulong *puVar17;
   NoteGnuProperty_4 *pNVar18;
   long in_FS_OFFSET;
   NoteGnuProperty_4 *local_a0;
   ulong local_68[4];
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (NoteGnuProperty_4*)&iota_r_packed;
   puVar10 = param_1;
   puVar17 = local_68;
   do {
      do {
         puVar11 = puVar10 + 1;
         *puVar17 = *puVar10 ^ puVar10[5] ^ puVar10[10] ^ puVar10[0xf] ^ puVar10[0x14];
         puVar10 = puVar11;
         puVar17 = puVar17 + 1;
      }
 while ( param_1 + 5 != puVar11 );
      uVar12 = 0;
      puVar10 = param_1;
      do {
         uVar15 = uVar12 + 4;
         uVar12 = uVar12 + 1;
         uVar14 = ( local_68[(int)( uVar12 % 5 )] << 1 | ( ulong )((long)local_68[(int)( uVar12 % 5 )] < 0) ) ^ local_68[(int)( uVar15 % 5 )];
         *puVar10 = *puVar10 ^ uVar14;
         for (int i = 0; i < 4; i++) {
            puVar10[( 5*i + 5 )] = puVar10[( 5*i + 5 )] ^ uVar14;
         }

         puVar10 = puVar10 + 1;
      }
 while ( uVar12 != 5 );
      uVar13 = 0x3f022425;
      puVar10 = param_1 + 1;
      iVar16 = 4;
      while (true) {
         bVar9 = ( byte )((uint)uVar13 >> 0x18) & 0x3f;
         *puVar10 = *puVar10 >> bVar9 | *puVar10 << 0x40 - bVar9;
         puVar17 = puVar10 + 1;
         bVar9 = ( byte )((uint)uVar13 >> 0x10) & 0x3f;
         *puVar17 = *puVar17 >> bVar9 | *puVar17 << 0x40 - bVar9;
         puVar17 = puVar10 + 2;
         bVar9 = ( byte )((uint)uVar13 >> 8) & 0x3f;
         *puVar17 = *puVar17 >> bVar9 | *puVar17 << 0x40 - bVar9;
         puVar17 = puVar10 + 3;
         bVar9 = (byte)uVar13 & 0x3f;
         *puVar17 = *puVar17 >> bVar9 | *puVar17 << 0x40 - bVar9;
         puVar10 = puVar10 + 4;
         if (iVar16 == 0x18) break;
         uVar13 = *(undefined4*)( rho + (long)( iVar16 >> 2 ) * 4 );
         iVar16 = iVar16 + 4;
      }
;
      uVar14 = param_1[5];
      uVar1 = param_1[0xc];
      uVar2 = param_1[0x11];
      uVar3 = param_1[1];
      local_68[0] = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[6];
      uVar6 = param_1[4];
      uVar7 = param_1[0xb];
      uVar8 = param_1[7];
      local_68[2] = param_1[0xe];
      local_68[3] = param_1[0xf];
      local_48 = param_1[0x15];
      local_68[1] = param_1[8];
      param_1[1] = ~uVar1 & param_1[0x12] ^ uVar5;
      param_1[2] = ~param_1[0x12] & param_1[0x18] ^ uVar1;
      param_1[3] = ~param_1[0x18] & *param_1 ^ param_1[0x12];
      param_1[4] = ~*param_1 & uVar5 ^ param_1[0x18];
      param_1[5] = ~param_1[9] & param_1[10] ^ uVar4;
      param_1[6] = ~param_1[10] & param_1[0x10] ^ param_1[9];
      param_1[7] = ~param_1[0x10] & param_1[0x16] ^ param_1[10];
      param_1[9] = ~uVar4 & param_1[9] ^ param_1[0x16];
      param_1[8] = ~param_1[0x16] & uVar4 ^ param_1[0x10];
      param_1[10] = ~uVar8 & param_1[0xd] ^ uVar3;
      param_1[0xb] = ~param_1[0xd] & param_1[0x13] ^ uVar8;
      param_1[0xc] = ~param_1[0x13] & param_1[0x14] ^ param_1[0xd];
      param_1[0xd] = ~param_1[0x14] & uVar3 ^ param_1[0x13];
      param_1[0xe] = ~uVar3 & uVar8 ^ param_1[0x14];
      param_1[0xf] = ~uVar14 & uVar7 ^ uVar6;
      param_1[0x10] = ~uVar7 & uVar2 ^ uVar14;
      param_1[0x11] = ~uVar2 & param_1[0x17] ^ uVar7;
      pNVar18 = (NoteGnuProperty_4*)( (long)&local_a0.namesz + 1 );
      param_1[0x13] = ~uVar6 & uVar14 ^ param_1[0x17];
      param_1[0x12] = ~param_1[0x17] & uVar6 ^ uVar2;
      param_1[0x14] = ~local_68[1] & local_68[2] ^ local_68[0];
      param_1[0x15] = ~local_68[2] & local_68[3] ^ local_68[1];
      param_1[0x16] = ~local_68[3] & local_48 ^ local_68[2];
      param_1[0x17] = ~local_48 & local_68[0] ^ local_68[3];
      param_1[0x18] = ~local_68[0] & local_68[1] ^ local_48;
      bVar9 = (byte)local_a0.namesz;
      *param_1 = ~uVar5 & uVar1 ^ *param_1 ^ ( ( (ulong)bVar9 & 0x40 ) << 0x39 | ( ulong )(( bVar9 & 0x20 ) << 0x1a) | ( ulong )(bVar9 & 0x8f) | ( ulong )(( bVar9 & 0x10 ) << 0xb) );
      puVar10 = param_1;
      puVar17 = local_68;
      local_a0 = pNVar18;
   }
 while ( pNVar18 != &NoteGnuProperty_4_00101218 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void mbedtls_sha3_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0x19] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xd0U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
void mbedtls_sha3_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_platform_zeroize(param_1, 0xd0);
      return;
   }

   return;
}
void mbedtls_sha3_clone(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 12; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   return;
}
undefined8 mbedtls_sha3_starts(undefined8 *param_1, uint param_2) {
   undefined2 uVar1;
   undefined2 uVar2;
   ulong uVar3;
   undefined8 *puVar4;
   if (param_2 == 3) {
      uVar2 = 0x30;
      uVar1 = 0x68;
   }
 else if (param_2 < 4) {
      if (param_2 == 1) {
         uVar2 = 0x1c;
         uVar1 = 0x90;
      }
 else {
         uVar2 = 0x20;
         uVar1 = 0x88;
         if (param_2 != 2) {
            return 0xffffff8a;
         }

      }

   }
 else {
      if (param_2 != 4) {
         return 0xffffff8a;
      }

      uVar2 = 0x40;
      uVar1 = 0x48;
   }

   *(undefined2*)( (long)param_1 + 0xcc ) = uVar2;
   *(undefined2*)( (long)param_1 + 0xce ) = uVar1;
   *param_1 = 0;
   param_1[0x18] = 0;
   puVar4 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 200U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   *(undefined4*)( param_1 + 0x19 ) = 0;
   return 0;
}
undefined8 mbedtls_sha3_update(long param_1, byte *param_2, ulong param_3) {
   ulong *puVar1;
   byte bVar2;
   ushort uVar3;
   long lVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   ulong uVar8;
   byte *pbVar9;
   long lVar10;
   if (7 < param_3) {
      uVar7 = *(uint*)( param_1 + 200 );
      pbVar9 = param_2;
      uVar5 = uVar7;
      do {
         bVar2 = *pbVar9;
         uVar6 = uVar5 + 1;
         pbVar9 = pbVar9 + 1;
         puVar1 = (ulong*)( param_1 + ( ulong )(uVar5 >> 3) * 8 );
         *puVar1 = *puVar1 ^ (ulong)bVar2 << ( (char)uVar5 * '\b' & 0x38U );
         *(uint*)( param_1 + 200 ) = uVar6;
         uVar5 = uVar6;
      }
 while ( uVar6 != ( uVar7 & 0xfffffff8 ) + 8 );
      uVar3 = *(ushort*)( param_1 + 0xce );
      uVar8 = (ulong)uVar6 % (ulong)uVar3;
      lVar10 = param_3 - ( ~uVar7 & 7 );
      param_2 = param_2 + ( ulong )(~uVar7 & 7) + 1;
      param_3 = lVar10 - 1;
      *(int*)( param_1 + 200 ) = (int)uVar8;
      if ((int)uVar8 == 0) {
         keccak_f1600(param_1);
      }

      if (7 < param_3) {
         pbVar9 = param_2;
         do {
            while (true) {
               lVar4 = *(long*)pbVar9;
               pbVar9 = pbVar9 + 8;
               puVar1 = (ulong*)( param_1 + ( uVar8 & 0xfffffffffffffff8 ) );
               *puVar1 = *puVar1 ^ lVar4 << ( (char)uVar8 * '\b' & 0x38U );
               uVar8 = ( ulong )((int)uVar8 + 8) % (ulong)uVar3;
               *(int*)( param_1 + 200 ) = (int)uVar8;
               if ((int)uVar8 != 0) break;
               keccak_f1600(param_1);
               if (param_2 + ( param_3 - (long)pbVar9 ) < (byte*)0x8) goto LAB_00100718;
            }
;
         }
 while ( (byte*)0x7 < param_2 + ( param_3 - (long)pbVar9 ) );
         LAB_00100718:param_3 = ( ulong )((uint)param_3 & 7);
         param_2 = param_2 + ( lVar10 - 9U & 0xfffffffffffffff8 ) + 8;
      }

   }

   if (param_3 != 0) {
      uVar3 = *(ushort*)( param_1 + 0xce );
      uVar7 = *(uint*)( param_1 + 200 );
      pbVar9 = param_2 + param_3;
      do {
         while (true) {
            bVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = (ulong*)( param_1 + ( ulong )(uVar7 >> 3) * 8 );
            *puVar1 = *puVar1 ^ (ulong)bVar2 << ( (char)uVar7 * '\b' & 0x38U );
            uVar7 = ( uVar7 + 1 ) % (uint)uVar3;
            *(uint*)( param_1 + 200 ) = uVar7;
            if (uVar7 != 0) break;
            keccak_f1600(param_1);
            if (param_2 == pbVar9) {
               return 0;
            }

         }
;
      }
 while ( param_2 != pbVar9 );
   }

   return 0;
}
undefined4 mbedtls_sha3_finish(long param_1, undefined1 *param_2, ulong param_3) {
   ulong *puVar1;
   ushort uVar2;
   uint uVar3;
   uint uVar4;
   undefined4 uVar5;
   undefined1 *puVar6;
   undefined1 *puVar7;
   bool bVar8;
   uVar2 = *(ushort*)( param_1 + 0xcc );
   if (( uVar2 == 0 ) || ( bVar8 = uVar2 <= param_3 ),param_3 = (ulong)uVar2,bVar8) {
      uVar4 = 0;
      uVar2 = *(ushort*)( param_1 + 0xce );
      puVar1 = (ulong*)( param_1 + ( ulong )(*(uint*)( param_1 + 200 ) >> 3) * 8 );
      *puVar1 = *puVar1 ^ 6L << ( ( byte )(*(uint*)( param_1 + 200 ) << 3) & 0x38 );
      uVar3 = uVar2 - 1;
      puVar1 = (ulong*)( param_1 + (long)( (int)uVar3 >> 3 ) * 8 );
      *puVar1 = *puVar1 ^ 0x80L << ( sbyte )(( uVar3 & 7 ) << 3);
      keccak_f1600(param_1);
      *(undefined4*)( param_1 + 200 ) = 0;
      puVar6 = param_2;
      if (param_3 != 0) {
         do {
            while (true) {
               puVar7 = puVar6 + 1;
               *puVar6 = (char)( *(ulong*)( param_1 + ( ulong )(uVar4 >> 3) * 8 ) >> ( (char)uVar4 * '\b' & 0x38U ) );
               uVar4 = ( *(int*)( param_1 + 200 ) + 1U ) % ( uint ) * (ushort*)( param_1 + 0xce );
               *(uint*)( param_1 + 200 ) = uVar4;
               puVar6 = puVar7;
               if (uVar4 != 0) break;
               keccak_f1600(param_1);
               if (puVar7 == param_2 + param_3) goto LAB_001008b2;
            }
;
         }
 while ( puVar7 != param_2 + param_3 );
      }

      LAB_001008b2:uVar5 = 0;
   }
 else {
      uVar5 = 0xffffff8a;
   }

   mbedtls_platform_zeroize(param_1, 0xd0);
   return uVar5;
}
int mbedtls_sha3_long_kat_test(int param_1, undefined8 param_2, int param_3) {
   bool bVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   byte bVar6;
   undefined8 auStack_538[26];
   undefined1 local_468[64];
   undefined8 local_428[125];
   long local_40;
   bVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = local_428;
   for (lVar3 = 0x7d; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0x6161616161616161;
      puVar5 = puVar5 + 1;
   }

   if (param_1 == 0) {
      bVar1 = false;
      puVar5 = auStack_538;
      for (lVar3 = 0x1a; lVar3 != 0; lVar3 = lVar3 + -1) {
         *puVar5 = 0;
         puVar5 = puVar5 + 1;
      }

      mbedtls_sha3_starts(auStack_538, param_3);
   }
 else {
      __printf_chk(2, "  %s long KAT test ", param_2);
      puVar5 = auStack_538;
      for (lVar3 = 0x1a; lVar3 != 0; lVar3 = lVar3 + -1) {
         *puVar5 = 0;
         puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }

      iVar4 = mbedtls_sha3_starts(auStack_538, param_3);
      if (iVar4 != 0) {
         __printf_chk(2, "setup failed\n ");
      }

      bVar1 = true;
   }

   iVar4 = 1000;
   do {
      iVar2 = mbedtls_sha3_update(auStack_538, local_428, 1000);
      if (iVar2 != 0) {
         if (bVar1) {
            __printf_chk(2, "update error code: %i\n", iVar2);
         }

         goto LAB_00100988;
      }

      iVar4 = iVar4 + -1;
   }
 while ( iVar4 != 0 );
   iVar2 = mbedtls_sha3_finish(auStack_538, local_468, 0x40);
   if (iVar2 == 0) {
      if (param_3 == 3) {
         iVar2 = memcmp(local_468, long_kat_hash_sha3_384, 0x30);
      }
 else if (param_3 == 4) {
         iVar2 = memcmp(local_468, long_kat_hash_sha3_512, 0x40);
      }
 else if (param_3 == 2) {
         iVar2 = memcmp(local_468, long_kat_hash_sha3_256, 0x20);
      }
 else {
         iVar2 = memcmp(local_468, long_kat_hash_sha3_224, 0x1c);
      }

      if (iVar2 == 0) {
         if (!bVar1) goto LAB_00100988;
      }
 else {
         if (!bVar1) goto LAB_00100988;
         puts("failed");
      }

      puts("passed");
   }
 else if (bVar1) {
      __printf_chk(2, "finish error code: %d\n", iVar2);
   }

   LAB_00100988:mbedtls_platform_zeroize(auStack_538, 0xd0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int mbedtls_sha3(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   long lVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 auStack_108[27];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar3 = auStack_108;
   for (lVar2 = 0x1a; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   iVar1 = mbedtls_sha3_starts(auStack_108, param_1);
   if (iVar1 == 0) {
      iVar1 = mbedtls_sha3_update(auStack_108, param_2, param_3);
      if (iVar1 == 0) {
         iVar1 = mbedtls_sha3_finish(auStack_108, param_4, param_5);
      }

   }

   mbedtls_platform_zeroize(auStack_108, 0xd0);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_sha3_kat_test(int param_1, undefined8 param_2, int param_3, int param_4) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 local_88[72];
   long local_40;
   lVar2 = (long)param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = mbedtls_sha3(param_3, (long)&test_data + lVar2 * 4, *(undefined8*)( test_data_len + lVar2 * 8 ), local_88, 0x40);
   if (iVar1 == 0) {
      if (param_3 == 3) {
         iVar1 = memcmp(local_88, test_hash_sha3_384 + lVar2 * 0x30, 0x30);
      }
 else if (param_3 == 4) {
         iVar1 = memcmp(local_88, test_hash_sha3_512 + lVar2 * 0x40, 0x40);
      }
 else if (param_3 == 2) {
         iVar1 = memcmp(local_88, test_hash_sha3_256 + lVar2 * 0x20, 0x20);
      }
 else {
         iVar1 = memcmp(local_88, test_hash_sha3_224 + lVar2 * 0x1c, 0x1c);
      }

      if (iVar1 == 0) {
         iVar1 = 0;
         if (param_1 != 0) {
            __printf_chk(2, "  %s test %d passed\n", param_2, param_4);
         }

      }
 else {
         if (param_1 != 0) {
            __printf_chk(2, "  %s test %d failed\n", param_2, param_4);
         }

         iVar1 = -1;
      }

   }
 else if (param_1 != 0) {
      __printf_chk(2, "  %s test %d error code: %d\n", param_2, param_4, iVar1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 mbedtls_sha3_self_test(int param_1) {
   int iVar1;
   int iVar2;
   iVar2 = 0;
   while (true) {
      iVar1 = mbedtls_sha3_kat_test(param_1, "SHA3-224", 1, iVar2);
      if (iVar1 != 0) {
         return 1;
      }

      iVar1 = mbedtls_sha3_kat_test(param_1, "SHA3-256", 2, iVar2);
      if (iVar1 != 0) {
         return 1;
      }

      iVar1 = mbedtls_sha3_kat_test(param_1, "SHA3-384", 3, iVar2);
      if (iVar1 != 0) {
         return 1;
      }

      iVar1 = mbedtls_sha3_kat_test(param_1, "SHA3-512", 4, iVar2);
      if (iVar1 != 0) break;
      if (iVar2 != 0) {
         iVar2 = mbedtls_sha3_long_kat_test(param_1, "SHA3-224", 1);
         if (( ( ( iVar2 == 0 ) && ( iVar2 = mbedtls_sha3_long_kat_test(param_1, "SHA3-256", 2) ),iVar2 == 0 ) ) && ( iVar2 = iVar2 == 0 )) {
            if (param_1 != 0) {
               putchar(10);
               return 0;
            }

            return 0;
         }

         return 1;
      }

      iVar2 = 1;
   }
;
   return 1;
}

